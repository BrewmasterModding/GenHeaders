#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "ReputationContinuePressedDelegate.h"
#include "BMInputActionData.h"
#include "BMReputationLevelupScreen.generated.h"

class UBMResourceSystem;
class UBMTextButtonWidget;
class USlider;
class UTweenContainer;
class UTexture2D;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMReputationLevelupScreen : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ContinueActionData;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY()
    FReputationContinuePressed ContinueDelegate;
    
public:
    UBMReputationLevelupScreen();
    UFUNCTION()
    void TweeningAnimations(UTweenContainer* FinishedTweenContainer);
    
protected:
    UFUNCTION()
    void TweenFinished(UTweenContainer* FinishedTweenContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowRewards();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCommercialSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCommercialBoost();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetProgressText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPointsEarnedText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextLevelText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLevelText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentLevelText(const FText& PointsText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryImage(UTexture2D* BreweryImage);
    
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

