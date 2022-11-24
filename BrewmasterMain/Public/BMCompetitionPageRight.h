#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMCompetitionPageRight.generated.h"

class UVerticalBox;
class UBMRequirement;
class UBMTextButtonWidget;
class UBMWDifficulty;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCompetitionPageRight : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMRequirement> RequirementsClass;
    
public:
    UBMCompetitionPageRight();
protected:
    UFUNCTION()
    void SubmitBeerAction();
    
    UFUNCTION()
    void SubmitBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBestPreviousResult(const FText& Result);
    
protected:
    UFUNCTION()
    void RemoveBeerAction();
    
    UFUNCTION()
    void RemoveBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetSubmitBeerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetRequirementBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetJudgesPreferences();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWDifficulty* GetDifficultyWidget();
    
protected:
    UFUNCTION()
    void ConfirmRemoveBeer();
    
    UFUNCTION()
    void BackAndRefreshPage();
    
};

