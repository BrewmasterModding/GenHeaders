#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMHUDContextualInfo.generated.h"

class UBMObjectiveList;
class UUserWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDContextualInfo : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsContextualHintVisible;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTutorialHintVisible;
    
    UBMHUDContextualInfo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTutorialObjectivesVisibility(bool SetVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTutorialHintVisibility(bool SetVisible);
    
    UFUNCTION()
    void UpdateLangugages();
    
    UFUNCTION()
    void UpdateInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentObjectivesVisibility(bool SetVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateContextualHintVisibility(bool SetVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetXRayModeVisibility(bool bIsXrayModeOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTutorialHint(const FText& TutorialText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetContextualTip(const FText& ContextualTip);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBuildModeVisibility(bool bIsBuildModeOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveList* GetTutorialObjective();
    
    UFUNCTION(BlueprintImplementableEvent)
    UUserWidget* GetTutorialHint();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveList* GetCurrentObjective();
    
    UFUNCTION(BlueprintImplementableEvent)
    UUserWidget* GetContextualHint();
    
};

