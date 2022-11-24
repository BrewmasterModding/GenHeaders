#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMInputActionData.h"
#include "MasteryContinuePressedDelegate.h"
#include "EBMMastery.h"
#include "BMMasteryScreen.generated.h"

class UBMResourceSystem;
class UBMTextButtonWidget;
class USlider;
class UTweenContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMMasteryScreen : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ContinueActionData;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY()
    FMasteryContinuePressed ContinueDelegate;
    
public:
    UBMMasteryScreen();
    UFUNCTION()
    void TweeningAnimations(UTweenContainer* FinishedTweenContainer);
    
protected:
    UFUNCTION()
    void TweenFinished(UTweenContainer* FinishedTweenContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetProgressText(const FText& PointsText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPointsEarned(const FText& PointsText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOldLevel(EBMMastery OldMasteryLevel, const FText& MasteryText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextLevel(const FText& PointsText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNewLevel(EBMMastery NewMasteryLevel, const FText& MasteryText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLeveLEarnedText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentLevel(const FText& PointsText);
    
    UFUNCTION()
    void OpenDemoOutroScreen();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetRescourceSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetProgressBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetContinueButton();
    
    UFUNCTION()
    void ContinueAction();
    
    UFUNCTION()
    void Continue();
    
};

