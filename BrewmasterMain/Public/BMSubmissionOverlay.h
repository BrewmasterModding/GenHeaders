#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "EBMSponsor.h"
#include "BMSubmissionOverlay.generated.h"

class UTexture2D;
class UBMSubmitList;
class UBMBulletList;
class UBMResourceSystem;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubmissionOverlay : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UBMSubmissionOverlay();
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchCustomAssets(EBMSponsor Sponsor);
    
protected:
    UFUNCTION()
    void SubmitCompetitionBeerAction();
    
    UFUNCTION()
    void SubmitCompetitionBeer();
    
    UFUNCTION()
    void SubmitCommercialBeerAction();
    
    UFUNCTION()
    void SubmitCommercialBeer();
    
    UFUNCTION()
    void SubmitBeerAction();
    
    UFUNCTION()
    void SubmitBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowData();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCellarData();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubmitName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobType(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageFromSponsor(EBMSponsor Sponsor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDifficulty(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerMadeText(const FText& Title);
    
    UFUNCTION()
    void ReturnToMainGame();
    
protected:
    UFUNCTION()
    void RetrieveBeerAction();
    
    UFUNCTION()
    void RetrieveBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HideRewards();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideRequirementsMet();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideBonusText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSubmitList* GetSubmitlist();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBulletList* GetRequirmentsList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMBulletList* GetJudgesPreferenceList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetBonusResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetAcceptButton();
    
protected:
    UFUNCTION()
    void ClosePage();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* BackButton();
    
};

