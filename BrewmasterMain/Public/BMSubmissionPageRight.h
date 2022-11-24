#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMSubmissionPageRight.generated.h"

class UBMBulletList;
class UBMResourceSystem;
class UTexture2D;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubmissionPageRight : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMSubmissionPageRight();
protected:
    UFUNCTION()
    void SubmitCompetitionBeerAction();
    
    UFUNCTION()
    void SubmitCompetitionBeer();
    
    UFUNCTION()
    void SubmitBeerAction();
    
    UFUNCTION()
    void SubmitBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCellarData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Title);
    
protected:
    UFUNCTION()
    void RetrieveBeerAction();
    
    UFUNCTION()
    void RetrieveBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HideData();
    
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
    
};

