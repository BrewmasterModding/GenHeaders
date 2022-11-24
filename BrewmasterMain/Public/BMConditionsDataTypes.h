#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EFlavourCategory.h"
#include "EBMIngredientSubCategory.h"
#include "EFlavourNotes.h"
#include "EBMIngredientCategory.h"
#include "EIngredientType.h"
#include "EBMEquipmentSubCategory.h"
#include "EBMEquipmentCategory.h"
#include "ESizeBand.h"
#include "EBMBeerCategory.h"
#include "EBMRecipeDifficulty.h"
#include "EBMSponsor.h"
#include "EBMReputation.h"
#include "EBMMastery.h"
#include "EBMFurnitureSubcategory.h"
#include "EBMFurnitureCategory.h"
#include "BMConditionsDataTypes.generated.h"

class ABMBaseActor;
class UUserWidget;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMConditionsDataTypes : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FName StatName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float StatValue;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EFlavourNotes FlavourNote;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EFlavourCategory FlavourCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMIngredientCategory IngredientCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMIngredientSubCategory IngredientSubCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EIngredientType IngredientType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMEquipmentCategory EquipmentCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMEquipmentSubCategory EquipmentSubCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    ESizeBand Size;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMBeerCategory BeerCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMRecipeDifficulty Difficulty;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMSponsor SponsorBrewery;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMReputation BreweryReputation;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMMastery MasteryLevel;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<ABMBaseActor> ItemClass;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<UUserWidget> UIScreenClass;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMFurnitureCategory FurnitureCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMFurnitureSubcategory FurnitureSubCategory;
    
    FBMConditionsDataTypes();
};

