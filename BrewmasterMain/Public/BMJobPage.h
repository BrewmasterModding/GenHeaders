#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "EBMSponsor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMJobPage.generated.h"

class UBMResourceSystem;
class UBMRequirement;
class UBMButton;
class UWidget;
class UTexture2D;
class UVerticalBox;
class UBMWDifficulty;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMJobPage : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMRequirement> RequirementsClass;
    
    UBMJobPage();
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchCustomAssets(EBMSponsor Sponsor);
    
protected:
    UFUNCTION()
    void SubmitBeer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowJobTip(bool TipShown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTotalJobNumber(const FText& TotalJobNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRequirementVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPageRightHanded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPageLeftHanded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobTipText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobDescription(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentJobNumber(const FText& JobNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentAndTotalJobNumbers(const FText& CurrentJobNumber, const FText& TotalJobsNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBonusRequirementVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAcceptButtonText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSubmitBeerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetResoucePanelParent();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetRequirementBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWDifficulty* GetDifficultyWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetBonusResourcePanelParent();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetBonusResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetBonusRequirementHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetAcceptButton();
    
protected:
    UFUNCTION()
    void AcceptJob();
    
};

