#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMIngredientStatType.h"
#include "EBMLiquidStatType.h"
#include "EBMBeerStatType.h"
#include "EFlavourNotes.h"
#include "EFlavourCategory.h"
#include "BMSingleVolumeState.h"
#include "BMSingleStatWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSingleStatWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMBeerStatType StatTypeToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMLiquidStatType LiquidStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMIngredientStatType IngredientStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDissolvedIngredient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IngredientID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFlavourCategory Flavour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFlavourNotes FlavourNotes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText StatDisplayName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StatDisplayValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatDisplayUnits;
    
    UPROPERTY()
    bool bHasDoneFirstUpdate;
    
public:
    UBMSingleStatWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFromBeerState(const FBMSingleVolumeState& NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatValue(const FText& Stat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatRateOfChange(const FText& Stat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatName(const FText& Stat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoDisplayValueUpdate(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoDisplayFullUpdate();
    
};

