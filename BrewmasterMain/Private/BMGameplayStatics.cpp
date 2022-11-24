#include "BMGameplayStatics.h"
#include "Templates/SubclassOf.h"

class UObject;
class ABMRewardManager;
class ULightComponent;
class AActor;
class ABMLabelMakerManager;
class ABMSimulationDataOut;
class UBMGameInstance;
class ABMCampaignManager;
class ABMGameStats;
class UTexture2D;
class ABMTimeController;
class UActorComponent;
class ABMBaseActor;
class ABMHUD;
class ABMTutorialManager;
class ABMMetaGameFixedData;
class ABMCharacter;
class UBMInteractionComponent;
class ABMFixedData;
class ABMPlayerController;
class ABMSimulationControl;
class ABMUGCManager;
class ABMCellarManager;
class ABMQuarterlyCoversManager;
class ABMContextualTipManager;
class ABMInventoryManager;
class UBMGameSettings;
class ABMGameModeBase;
class ABMBrewVisualsManager;
class UBMAudioAssetListBase;
class ABMAchievementManager;

bool UBMGameplayStatics::WriteRecipeToFile(UObject* WorldContextObject, const FBMRecipeData& RecipeData, const FString& FilePath) {
    return false;
}

void UBMGameplayStatics::UnMountSwitchSaveDirectory() {
}

EBMInput UBMGameplayStatics::StringToEBMInput(const FString& inString) {
    return EBMInput::NONE;
}

FString UBMGameplayStatics::SplitInstructionString(FBMRecipeInstruction Instruction, TArray<FString>& RegularText, TArray<FString>& VariableText, float SizeMulti) {
    return TEXT("");
}

void UBMGameplayStatics::SetShadowSlopeBias(ULightComponent* Light, float Value) {
}

void UBMGameplayStatics::SetShadowResolutionScaleOfLight(ULightComponent* Light, float Value) {
}

void UBMGameplayStatics::SetShadowFilterSharpen(ULightComponent* Light, float Value) {
}

void UBMGameplayStatics::SetSeasonOverride(bool bOverride) {
}

void UBMGameplayStatics::SetPositionOfActorFromPitchAndYaw(AActor* CameraActor, float Pitch, float Yaw, float RadiusFromCenter, FVector TargetLocation) {
}

void UBMGameplayStatics::RerouteCustomIniFilesThroughSaveGame(const FString& NameOfFile, UBMGameInstance* GameInstance) {
}

bool UBMGameplayStatics::ReadRecipeFromFile(UObject* WorldContextObject, const FString& FilePath, FBMRecipeData& OutRecipeData, bool ConvertFilePathToSlotName) {
    return false;
}

bool UBMGameplayStatics::OverrideToSwitchAssets(UObject* WorldContextObject) {
    return false;
}

bool UBMGameplayStatics::MountSwitchSaveDirectory(const int32 UserIndex) {
    return false;
}

bool UBMGameplayStatics::MakeStringValidSaveName(FString& inString) {
    return false;
}

bool UBMGameplayStatics::MakeStringValidRecipeName(FString& inString) {
    return false;
}

FSlateBrush UBMGameplayStatics::MakeBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture) {
    return FSlateBrush{};
}

void UBMGameplayStatics::LoadBMGameSettingsConfig() {
}

bool UBMGameplayStatics::IsIniFile(const FString& SaveFile) {
    return false;
}

ABMTimeController* UBMGameplayStatics::GetTimeController(UObject* WorldContextObject) {
    return NULL;
}

TArray<FBMIngredientAmount> UBMGameplayStatics::GetRecipeRequiredIngredients(FBMRecipeData Recipe, UObject* World) {
    return TArray<FBMIngredientAmount>();
}

TMap<FString, int32> UBMGameplayStatics::GetRecipeRequiredEquipment(FBMRecipeData Recipe) {
    return TMap<FString, int32>();
}

bool UBMGameplayStatics::GetRecipeJsonString(const FBMRecipeData& RecipeData, FString& OutRecipeJson) {
    return false;
}

FString UBMGameplayStatics::GetPlatformSpecificLocalizationKeySuffix(bool AddTitleSuffix) {
    return TEXT("");
}

FString UBMGameplayStatics::GetPlatformSpecificLocalizationKey(const FString& BaseLocKeyString, bool AddTitleSuffix) {
    return TEXT("");
}

ABMBaseActor* UBMGameplayStatics::GetOwnerBaseActor(UActorComponent* Component) {
    return NULL;
}

FBMSingleVolumeState UBMGameplayStatics::GetNullState() {
    return FBMSingleVolumeState{};
}

ABMMetaGameFixedData* UBMGameplayStatics::GetMetaGameFixedData(UObject* WorldContextObject) {
    return NULL;
}

FString UBMGameplayStatics::GetLocalisedRecipeName(const FBMRecipeData& RecipeData) {
    return TEXT("");
}

FString UBMGameplayStatics::GetLocalisedRecipeDescription(const FBMRecipeData& RecipeData) {
    return TEXT("");
}

TMap<FString, FText> UBMGameplayStatics::GetItemDataStats(FBMItemData Item, UObject* WorldContextObject) {
    return TMap<FString, FText>();
}

void UBMGameplayStatics::GetIngredientMasses(const FBMSingleVolumeState& inState, TMap<FName, float>& DissolvedMasses, TMap<FName, float>& NonDissolvedMasses) {
}

TMap<FString, FText> UBMGameplayStatics::GetIngedientDataStats(FBMGenericIngredientData Ingredient, UObject* WorldContextObject, bool ListFlavours) {
    return TMap<FString, FText>();
}

EBMPlatformLowLevelEnum UBMGameplayStatics::GetCurrentPlatformLowLevel(UObject* WorldContextObject) {
    return EBMPlatformLowLevelEnum::Unknown;
}

EBMPlatformEnum UBMGameplayStatics::GetCurrentPlatform(UObject* WorldContextObject) {
    return EBMPlatformEnum::Unknown;
}

EBMGameType UBMGameplayStatics::GetCurrentGameType(UObject* WorldContextObject) {
    return EBMGameType::Brewmaster;
}

void UBMGameplayStatics::GetCameraPosition(FVector& outPosition, FRotator& OutRotation, FVector Forwards, const FBoxSphereBounds& RequiredInView, UBMInteractionComponent* Interaction, float FieldOfView) {
}

FBMBuildDetails UBMGameplayStatics::GetBuildDetails(UObject* WorldContextObject) {
    return FBMBuildDetails{};
}

ABMFixedData* UBMGameplayStatics::GetBrewingSimulatorFixedData(UObject* WorldContextObject) {
    return NULL;
}

ABMSimulationDataOut* UBMGameplayStatics::GetBrewingSimulatorDataModule(UObject* WorldContextObject) {
    return NULL;
}

ABMSimulationControl* UBMGameplayStatics::GetBrewingSimulatorControl(UObject* WorldContextObject) {
    return NULL;
}

ABMUGCManager* UBMGameplayStatics::GetBMUGCManager(UObject* WorldContextObject) {
    return NULL;
}

ABMTutorialManager* UBMGameplayStatics::GetBMTutorialManagerIfInTutorial(UObject* WorldContextObject) {
    return NULL;
}

ABMTutorialManager* UBMGameplayStatics::GetBMTutorialManager(UObject* WorldContextObject) {
    return NULL;
}

ABMRewardManager* UBMGameplayStatics::GetBMRewardManager(UObject* WorldContextObject) {
    return NULL;
}

ABMQuarterlyCoversManager* UBMGameplayStatics::GetBMQuarterlyCoversManager(UObject* WorldContextObject) {
    return NULL;
}

ABMPlayerController* UBMGameplayStatics::GetBMPlayerController(UObject* WorldContextObject) {
    return NULL;
}

ABMCharacter* UBMGameplayStatics::GetBMPlayerCharacter(UObject* WorldContextObject) {
    return NULL;
}

ABMLabelMakerManager* UBMGameplayStatics::GetBMLabelMakerManager(UObject* WorldContextObject) {
    return NULL;
}

ABMInventoryManager* UBMGameplayStatics::GetBMInventoryManager(UObject* WorldContextObject) {
    return NULL;
}

ABMHUD* UBMGameplayStatics::GetBMHud(UObject* WorldContextObject) {
    return NULL;
}

ABMGameStats* UBMGameplayStatics::GetBMGameStats(UObject* WorldContextObject) {
    return NULL;
}

UBMGameSettings* UBMGameplayStatics::GetBMGameSettings() {
    return NULL;
}

ABMGameModeBase* UBMGameplayStatics::GetBMGameModeBase(const UObject* WorldContextObject) {
    return NULL;
}

UBMGameInstance* UBMGameplayStatics::GetBMGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

ABMContextualTipManager* UBMGameplayStatics::GetBMContextualTipManager(UObject* WorldContextObject) {
    return NULL;
}

ABMCellarManager* UBMGameplayStatics::GetBMCellarManager(UObject* WorldContextObject) {
    return NULL;
}

ABMCampaignManager* UBMGameplayStatics::GetBMCampaignManager(UObject* WorldContextObject) {
    return NULL;
}

ABMBrewVisualsManager* UBMGameplayStatics::GetBMBrewVisualsManager(UObject* WorldContextObject) {
    return NULL;
}

UBMAudioAssetListBase* UBMGameplayStatics::GetBMAudioAssetList(const UObject* WorldContextObject) {
    return NULL;
}

ABMAchievementManager* UBMGameplayStatics::GetBMAchievManager(UObject* WorldContextObject) {
    return NULL;
}

TArray<FBMPlatformSaveFileData> UBMGameplayStatics::GetAllSaveFiles(UObject* WorldContextObject, UObject* ObjectPtr) {
    return TArray<FBMPlatformSaveFileData>();
}

FText UBMGameplayStatics::FromStringTable(const FName InTableId, const FString& InKey) {
    return FText::GetEmpty();
}

void UBMGameplayStatics::FindScreenLocationForWorldLocation(UObject* WorldContextObject, const FVector& InLocation, const FVector2D AdditionalEdge, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen) {
}

bool UBMGameplayStatics::FindRecipes(UObject* WorldContextObject, UObject* ObjectPtr, TArray<FString>& OutRecipePaths, const FString& SearchPath) {
    return false;
}

TArray<FString> UBMGameplayStatics::FindAndParseRecipes(UObject* WorldContextObject, UObject* ObjectPtr, TArray<FBMRecipeData>& OutRecipes, const FString& SearchPath) {
    return TArray<FString>();
}

bool UBMGameplayStatics::DeleteLocalRecipe(UObject* WorldContextObject, const FString& SlotName) {
    return false;
}

FText UBMGameplayStatics::ConvertInnerKeys(FText TextToConvert) {
    return FText::GetEmpty();
}

FString UBMGameplayStatics::BuildDetailsToString(const FBMBuildDetails& BuildDetails) {
    return TEXT("");
}

bool UBMGameplayStatics::BeerValidJobSubmission(FBMPackagedBeerData& BeerData, TArray<FName> Requirements, UObject* WorldContextObject) {
    return false;
}

void UBMGameplayStatics::AppendPlatformSpecificLocalizationKeySuffix(FString& InOutString, bool AddTitleSuffix) {
}

bool UBMGameplayStatics::AllConditionsMet(TArray<FBMConditions> Conditions, TSubclassOf<ABMBaseActor> ActorClass, UObject* WorldContextObject, float StageStartDay) {
    return false;
}

void UBMGameplayStatics::AddNotification(UObject* WorldContextObject, EBMNotificationType NotificationType, const TArray<FString>& LocSubstitutionStrings) {
}

UBMGameplayStatics::UBMGameplayStatics() {
}

