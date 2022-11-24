#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMBeerCategory.h"
#include "EBMLiquidStatType.h"
#include "EBMRecipeDifficulty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EFlavourNotes.h"
#include "EFlavourCategory.h"
#include "BMStyleIngredient.h"
#include "EBMBottleType.h"
#include "EBeerStyleSpeciality.h"
#include "EBMBeerGlassType.h"
#include "EBMBottleColour.h"
#include "BMBeerStyle.generated.h"

class UTexture2D;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerStyle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName StyleID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMBeerCategory CategoryID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMRecipeDifficulty StyleDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EBMLiquidStatType, FVector2D> CriticalStatRanges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EBMLiquidStatType, FVector2D> KeyBeerStatRanges;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourCategory, float> CriticalFlavourInfluences;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> CriticalFlavourNoteInfluences;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourCategory, float> CriticalExcludedFlavours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> CriticalExcludedFlavourNotes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourCategory, float> FlavourInfluences;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> FlavourNoteInfluences;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourCategory, float> KeyExcludedFlavours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> KeyExcludedFlavourNotes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FBMStyleIngredient> CriticalIngredients;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<FBMStyleIngredient> KeyIngredients;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TArray<EBeerStyleSpeciality> ExcludedSpecialities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 ClarityMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 ClarityMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 BodyMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 BodyMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 ProteinMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    int32 ProteinMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UTexture2D> BeerStyleIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> BeerStyleMaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMBeerGlassType GlassType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMBeerGlassType AlternateGlassType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMBottleType BottleType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    EBMBottleColour BottleColour;
    
    FBMBeerStyle();
};

