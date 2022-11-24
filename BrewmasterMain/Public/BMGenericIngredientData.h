#pragma once
#include "CoreMinimal.h"
#include "EBMInventoryStorageLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EIngredientSubTypeOther.h"
#include "EIngredientPhysicalType.h"
#include "EIngredientType.h"
#include "EBMIngredientCategory.h"
#include "EFlavourCategory.h"
#include "EBMIngredientSubCategory.h"
#include "EFlavourNotes.h"
#include "BMGenericIngredientData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMGenericIngredientData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EIngredientPhysicalType PhysicalType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EIngredientType IngredientType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EIngredientSubTypeOther IngredientSubTypeOther;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMInventoryStorageLocation StorageLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMIngredientCategory IngredientCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMIngredientSubCategory IngredientSubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture2D> UIIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float Density;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float PhysicalSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float SpecificHeatCapacity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float DissolvingRateMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float DissolvingRateMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float DissolvingRateMassLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float SolubilityFraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float SaturationLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourCategory, float> FlavorInfluence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> FlavourNotes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float ColourInfluence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float PotentialSpecificGravity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float SpecificGravityMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float BitternessInfluence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float ProteinAddition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float FractionFermentable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bCompensateFermentability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bIsFruit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bIsSpice;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool bOpaqueAndHasLid;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float Particulates;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FName> IngredientSubstitutes;
    
    FBMGenericIngredientData();
};

