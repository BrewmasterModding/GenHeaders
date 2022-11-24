#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMSponsor.h"
#include "BMCurrentActivityPage.generated.h"

class UBMResourceSystem;
class UBMObjectiveSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCurrentActivityPage : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMCurrentActivityPage();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetEmptyRecipeSection();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionDesc(const FText& Desc);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBrewerySponsor(EBMSponsor Sponsor);
    
    UFUNCTION()
    void RecipeButtonIndex(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCompetitionSection();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetRecipeObjectives();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetGoldRewardSystem();
    
};

