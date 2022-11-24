#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "EFlavourNotes.h"
#include "EFlavourCategory.h"
#include "BMWFlavorList.generated.h"

class UBMWFlavorListEntry;
class UWrapBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWFlavorList : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMWFlavorListEntry> FlavorListEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxFlavorsToDisplay;
    
    UBMWFlavorList();
    UFUNCTION(BlueprintCallable)
    void SetStandardFlavourData(TMap<EFlavourCategory, float> InStandardFlavorData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeaderText(const FText& TitleText);
    
    UFUNCTION(BlueprintCallable)
    void SetFlavourNoteData(TMap<EFlavourNotes, float> InFlavourNoteData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEntryText(const FText& EntryText);
    
    UFUNCTION(BlueprintCallable)
    void SetAllFlavourData(TMap<EFlavourCategory, float> InStandardFlavorData, TMap<EFlavourNotes, float> InFlavourNoteData);
    
    UFUNCTION(BlueprintImplementableEvent)
    UWrapBox* GetFlavourList();
    
};

