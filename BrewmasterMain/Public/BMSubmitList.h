#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMSubmitList.generated.h"

class UBMSubmitListBeerItem;
class UBMSubmitListItem;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubmitList : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMSubmitListBeerItem> BeerItemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMSubmitListItem> SubmitItemClass;
    
public:
    UBMSubmitList();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobSubmission();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerSubmission();
    
    UFUNCTION()
    void SelectedJobPressed(int32 ButtonID);
    
    UFUNCTION()
    void SelectedCompetitionPressed(int32 ButtonID);
    
    UFUNCTION()
    void SelectedCommercialBeerPressed(int32 ButtonID);
    
    UFUNCTION()
    void SelectedCampaignBeerPressed(int32 ButtonID);
    
    UFUNCTION()
    void SelectedBeerPressed(int32 ButtonID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideRequirements();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCurrentJobText();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCompetitionText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetOtherJobsHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSubmitListItem* GetCurrentJobBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetCompetitionBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetBeerItemHolder();
    
    UFUNCTION()
    void AutoSelectBeer(int32 ButtonID);
    
};

