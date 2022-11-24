#include "BMMetaGameFixedData.h"

TMap<FName, FBMCompetitionData> ABMMetaGameFixedData::GetAllCompetitionData() {
    return TMap<FName, FBMCompetitionData>();
}

TMap<FName, FBMCatalogueItemData> ABMMetaGameFixedData::GetAllCatalogueData() {
    return TMap<FName, FBMCatalogueItemData>();
}

ABMMetaGameFixedData::ABMMetaGameFixedData() {
    this->AllBeerStylesDataSource = NULL;
    this->BreweryDataSource = NULL;
    this->ObjectivesDataSource = NULL;
    this->JobsDataSource = NULL;
    this->AchievDataSource = NULL;
    this->HopIngredientDataSource = NULL;
    this->IngredientMasterDataSource = NULL;
    this->EquipmentDataSource = NULL;
    this->CatalogueDataSource = NULL;
    this->FurnitureDataSource = NULL;
    this->RecipeDataSource = NULL;
    this->BeerGlassesDataSource = NULL;
    this->BeerBottlesDataSource = NULL;
    this->CompetitionDataSource = NULL;
    this->NarrativeDataSource = NULL;
    this->CharactersDataSource = NULL;
    this->ArticlesDataSource = NULL;
    this->ContainerSizeDataSource = NULL;
    this->PackagingAssetsSource = NULL;
    this->TutorialStageDataSource = NULL;
    this->QuarterlyCoversSource = NULL;
    this->ContextualTipsDataSource = NULL;
    this->MasterTooltipWidget = NULL;
    this->PopupDataSource = NULL;
    this->RecipeAmountDataSource = NULL;
}

