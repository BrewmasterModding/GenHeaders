#include "BMLabelMakerManager.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UDataTable;
class UTexture;
class UObject;

FName ABMLabelMakerManager::UseDefaultLabel() {
    return NAME_None;
}

void ABMLabelMakerManager::UpdateLabelMakerText(const FBMPackagedBeerData& BeerData) {
}

void ABMLabelMakerManager::TryLoadTextRenders() {
}

bool ABMLabelMakerManager::TryLoadLabelFromGameInstance(FName LabelID) {
    return false;
}

void ABMLabelMakerManager::SetStringValuesFromBeerDataToLabelDesign(const FBMPackagedBeerData& BeerData, FBMLabelDesign& inLabelDesign) const {
}

void ABMLabelMakerManager::SetCodeSetParamsForTexture(FName ParamID, FBMLabelTextureAsset Param, UMaterialInstanceDynamic* DynamicMaterial, FBMLabelDesign& inLabelDesign) const {
}

void ABMLabelMakerManager::SaveParamToLabelDesign_Texture(FName ParamID, FBMLabelTextureAsset Param) {
}

void ABMLabelMakerManager::SaveParamToLabelDesign_Text(EBMLabelTextSlot ParamID, FBMLabelTextData Param) {
}

void ABMLabelMakerManager::SaveParamToLabelDesign_Float(FName ParamID, float Param) {
}

void ABMLabelMakerManager::SaveParamToLabelDesign_Colour(FName ParamID, FLinearColor Param) {
}

FName ABMLabelMakerManager::SaveLabelDesignToGameInstance(const FString& BeerName) {
    return NAME_None;
}

void ABMLabelMakerManager::NewSelectedPresetForEditableLabel(FBMLabelStart PresetData, bool bClearHistory) {
}

void ABMLabelMakerManager::GetParamMinMaxs(const FName ParamName, FVector2D& outMinMax) {
}

FBMLabelTextData ABMLabelMakerManager::GetParamFromLabelDesign_Text(EBMLabelTextSlot TextSlot) {
    return FBMLabelTextData{};
}

float ABMLabelMakerManager::GetParamFromLabelDesign_Float(FName ParamName) {
    return 0.0f;
}

FLinearColor ABMLabelMakerManager::GetParamFromLabelDesign_Colour(FName ParamName) {
    return FLinearColor{};
}

EBMLabelTextureType ABMLabelMakerManager::GetOptionsForTexturePicker(const FName ParamID, TArray<FBMLabelTextureAsset>& outTextureOptions) {
    return EBMLabelTextureType::NONE;
}

UMaterialInterface* ABMLabelMakerManager::GetMaterialInstanceForTextureType(EBMLabelTextureType inTextureType, bool bIsSDF) const {
    return NULL;
}

UDataTable* ABMLabelMakerManager::GetLabelStartsDataTable() const {
    return NULL;
}

FBMLabelStart ABMLabelMakerManager::GetLabelStartByName(FName InName, bool bIncludePresets, bool bIncludeTemplates) {
    return FBMLabelStart{};
}

void ABMLabelMakerManager::GetLabelPresets(TArray<FBMLabelStart>& outPresets, const bool bActuallyTemplates) {
}

void ABMLabelMakerManager::GetEditableCategoriesForCurrentLabel(TMap<FName, FBMEditableParamSet>& outParamSets) const {
}

UMaterialInstanceDynamic* ABMLabelMakerManager::CreatePreviewMaterial(UTexture* CurrentTexture, EBMLabelTextureType inTextureType, bool bIsSDF, UObject* InOuter) const {
    return NULL;
}

UMaterialInstanceDynamic* ABMLabelMakerManager::CreateParamPreviewMaterial(const FName ParamID, UObject* InOuter) {
    return NULL;
}

UMaterialInstanceDynamic* ABMLabelMakerManager::CreateIconMI(FBMLabelDesign inLabelDesign) {
    return NULL;
}

UMaterialInstanceDynamic* ABMLabelMakerManager::CreateDynamicMIFromDesign(FBMLabelDesign inLabelDesign) {
    return NULL;
}

FName ABMLabelMakerManager::ConvertTextTypeToParamID(const EBMLabelTextSlot inTextureType) {
    return NAME_None;
}

EBMLabelTextSlot ABMLabelMakerManager::ConvertParamIDToTextType(const FName inTextureTypeParam) {
    return EBMLabelTextSlot::BeerName;
}

ABMLabelMakerManager::ABMLabelMakerManager() {
    this->StartingLabelMakerDesign = TEXT("Default");
    this->CodeSetParameters.AddDefaulted(9);
    this->IconTextureParamName = TEXT("_Icon1_Texture");
    this->IconTextureParamName_BMP = TEXT("_Icon1_Texture_BMP");
    this->IconIsSDFParamName = TEXT("_Icon1_Texture_IsSDF");
    this->IconTextureStartEnd = TEXT("_Icon1_TextureStartEnd");
    this->IconTextureScale = TEXT("_Icon1_BaseScale");
    this->Shape1TextureParamName = TEXT("_Shape1_Texture");
    this->Shape1TextureStartEnd = TEXT("_Shape1_TextureStartEnd");
    this->Shape2TextureParamName = TEXT("_Shape2_Texture");
    this->Shape2NullParamName = TEXT("_Shape2_IsEmpty");
    this->Shape2TextureStartEnd = TEXT("_Shape2_TextureStartEnd");
    this->Background2TextureParamNames.AddDefaulted(2);
    this->TextTextureParamNames.AddDefaulted(4);
    this->LabelTextWidgetClass = NULL;
    this->LabelMakerBottle = NULL;
}

