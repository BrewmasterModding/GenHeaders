#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMPackagedBeerData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMFinishedBeerStatPanel.generated.h"

class UVerticalBox;
class UBMFinishedBeerStatSlot;
class UBMWFlavorList;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFinishedBeerStatPanel : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bPanelOpen;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMFinishedBeerStatSlot> StatSlotClass;
    
public:
    UBMFinishedBeerStatPanel();
    UFUNCTION(BlueprintCallable)
    void SetUpPanel(FBMPackagedBeerData BeerData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& BeerName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActivtyBeerSubmittedTo(const FText& BeerName, ESlateVisibility ActivityBeerVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetStatsPanelHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavourNotesList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavourList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClosePanel();
    
};

