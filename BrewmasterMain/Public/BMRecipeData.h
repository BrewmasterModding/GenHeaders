#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMRecipeBatchSize.h"
#include "BMRecipeUcgData.h"
#include "BMRecipeInstruction.h"
#include "EBMRecipeDifficulty.h"
#include "EFlavourNotes.h"
#include "EFlavourCategory.h"
#include "BMRecipeData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRecipeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString RecipeID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString BeerStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMRecipeBatchSize BatchSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString RecipeDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool AllGrain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FBMRecipeInstruction> Instructions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMRecipeDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 Mastery;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> NarrativeStageComplete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool ForceSpawnIfNarrative;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool ForceSpawnIfValid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 SeasonsMinimum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 Weighting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float ABV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float IBU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float SRM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float Carbonation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float OriginalGravity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float FinalGravity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float Clarity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float Body;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TMap<EFlavourCategory, float> StandardFlavourInfluences;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TMap<EFlavourNotes, float> FlavourNoteInfluences;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMRecipeUcgData UgcData;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSoftObjectPtr<UMaterialInterface> RecipeImage;
    
    FBMRecipeData();
};

