#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMRecipeData.h"
#include "BMItemData.h"
#include "BMBreweries.h"
#include "BMCatalogueItemData.h"
#include "BMCompetitionData.h"
#include "BMMetaGameFixedData.generated.h"

class UDataTable;
class UBMTooltipWidget;

UCLASS()
class BREWMASTERMAIN_API ABMMetaGameFixedData : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AllBeerStylesDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BreweryDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ObjectivesDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* JobsDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* AchievDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HopIngredientDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* IngredientMasterDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* EquipmentDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CatalogueDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* FurnitureDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* RecipeDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BeerGlassesDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* BeerBottlesDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CompetitionDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* NarrativeDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharactersDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArticlesDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ContainerSizeDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PackagingAssetsSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* TutorialStageDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* QuarterlyCoversSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ContextualTipsDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMTooltipWidget> MasterTooltipWidget;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PopupDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* RecipeAmountDataSource;
    
protected:
    UPROPERTY()
    TArray<FBMBreweries> BreweryData;
    
    UPROPERTY()
    TMap<FName, FBMItemData> BeerGlassData;
    
    UPROPERTY()
    TMap<FName, FBMItemData> BeerBottleData;
    
    UPROPERTY()
    TMap<FString, FBMRecipeData> RecipeData;
    
public:
    ABMMetaGameFixedData();
    UFUNCTION(BlueprintCallable)
    TMap<FName, FBMCompetitionData> GetAllCompetitionData();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FBMCatalogueItemData> GetAllCatalogueData();
    
};

