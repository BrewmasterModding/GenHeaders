#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMRecipeData.h"
#include "BMPlatformSaveFileData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameplayStatics -FallbackName=GameplayStatics
#include "EBMPlatformEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EBMInput.h"
#include "BMRecipeInstruction.h"
#include "BMConditions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMIngredientAmount.h"
#include "BMItemData.h"
#include "BMSingleVolumeState.h"
#include "BMGenericIngredientData.h"
#include "EBMPlatformLowLevelEnum.h"
#include "EBMGameType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "BMBuildDetails.h"
#include "BMPackagedBeerData.h"
#include "EBMNotificationType.h"
#include "BMGameplayStatics.generated.h"

class ABMRewardManager;
class ABMFixedData;
class UObject;
class ULightComponent;
class AActor;
class ABMLabelMakerManager;
class ABMSimulationDataOut;
class UBMGameInstance;
class ABMCampaignManager;
class ABMGameStats;
class UTexture2D;
class ABMTimeController;
class ABMBaseActor;
class UActorComponent;
class ABMHUD;
class ABMTutorialManager;
class ABMMetaGameFixedData;
class ABMCharacter;
class UBMInteractionComponent;
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

UCLASS()
class BREWMASTERMAIN_API UBMGameplayStatics : public UGameplayStatics {
    GENERATED_BODY()
public:
    UBMGameplayStatics();
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool WriteRecipeToFile(UObject* WorldContextObject, const FBMRecipeData& RecipeData, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void UnMountSwitchSaveDirectory();
    
    UFUNCTION()
    static EBMInput StringToEBMInput(const FString& inString);
    
    UFUNCTION()
    static FString SplitInstructionString(FBMRecipeInstruction Instruction, TArray<FString>& RegularText, TArray<FString>& VariableText, float SizeMulti);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowSlopeBias(ULightComponent* Light, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowResolutionScaleOfLight(ULightComponent* Light, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowFilterSharpen(ULightComponent* Light, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSeasonOverride(bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    static void SetPositionOfActorFromPitchAndYaw(AActor* CameraActor, float Pitch, float Yaw, float RadiusFromCenter, FVector TargetLocation);
    
    UFUNCTION()
    static void RerouteCustomIniFilesThroughSaveGame(const FString& NameOfFile, UBMGameInstance* GameInstance);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool ReadRecipeFromFile(UObject* WorldContextObject, const FString& FilePath, FBMRecipeData& OutRecipeData, bool ConvertFilePathToSlotName);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool OverrideToSwitchAssets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool MountSwitchSaveDirectory(const int32 UserIndex);
    
    UFUNCTION()
    static bool MakeStringValidSaveName(FString& inString);
    
    UFUNCTION()
    static bool MakeStringValidRecipeName(FString& inString);
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush MakeBrushFromSoftTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBMGameSettingsConfig();
    
    UFUNCTION()
    static bool IsIniFile(const FString& SaveFile);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMTimeController* GetTimeController(UObject* WorldContextObject);
    
    UFUNCTION()
    static TArray<FBMIngredientAmount> GetRecipeRequiredIngredients(FBMRecipeData Recipe, UObject* World);
    
    UFUNCTION()
    static TMap<FString, int32> GetRecipeRequiredEquipment(FBMRecipeData Recipe);
    
    UFUNCTION()
    static bool GetRecipeJsonString(const FBMRecipeData& RecipeData, FString& OutRecipeJson);
    
    UFUNCTION()
    static FString GetPlatformSpecificLocalizationKeySuffix(bool AddTitleSuffix);
    
    UFUNCTION(BlueprintPure)
    static FString GetPlatformSpecificLocalizationKey(const FString& BaseLocKeyString, bool AddTitleSuffix);
    
    UFUNCTION(BlueprintCallable)
    static ABMBaseActor* GetOwnerBaseActor(UActorComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static FBMSingleVolumeState GetNullState();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMMetaGameFixedData* GetMetaGameFixedData(UObject* WorldContextObject);
    
    UFUNCTION()
    static FString GetLocalisedRecipeName(const FBMRecipeData& RecipeData);
    
    UFUNCTION()
    static FString GetLocalisedRecipeDescription(const FBMRecipeData& RecipeData);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static TMap<FString, FText> GetItemDataStats(FBMItemData Item, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void GetIngredientMasses(const FBMSingleVolumeState& inState, TMap<FName, float>& DissolvedMasses, TMap<FName, float>& NonDissolvedMasses);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static TMap<FString, FText> GetIngedientDataStats(FBMGenericIngredientData Ingredient, UObject* WorldContextObject, bool ListFlavours);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EBMPlatformLowLevelEnum GetCurrentPlatformLowLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EBMPlatformEnum GetCurrentPlatform(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EBMGameType GetCurrentGameType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void GetCameraPosition(FVector& outPosition, FRotator& OutRotation, FVector Forwards, const FBoxSphereBounds& RequiredInView, UBMInteractionComponent* Interaction, float FieldOfView);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FBMBuildDetails GetBuildDetails(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMFixedData* GetBrewingSimulatorFixedData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMSimulationDataOut* GetBrewingSimulatorDataModule(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMSimulationControl* GetBrewingSimulatorControl(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMUGCManager* GetBMUGCManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMTutorialManager* GetBMTutorialManagerIfInTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMTutorialManager* GetBMTutorialManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMRewardManager* GetBMRewardManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMQuarterlyCoversManager* GetBMQuarterlyCoversManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMPlayerController* GetBMPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMCharacter* GetBMPlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMLabelMakerManager* GetBMLabelMakerManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMInventoryManager* GetBMInventoryManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMHUD* GetBMHud(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMGameStats* GetBMGameStats(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UBMGameSettings* GetBMGameSettings();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMGameModeBase* GetBMGameModeBase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBMGameInstance* GetBMGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMContextualTipManager* GetBMContextualTipManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMCellarManager* GetBMCellarManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMCampaignManager* GetBMCampaignManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMBrewVisualsManager* GetBMBrewVisualsManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBMAudioAssetListBase* GetBMAudioAssetList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABMAchievementManager* GetBMAchievManager(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static TArray<FBMPlatformSaveFileData> GetAllSaveFiles(UObject* WorldContextObject, UObject* ObjectPtr);
    
    UFUNCTION(BlueprintPure)
    static FText FromStringTable(const FName InTableId, const FString& InKey);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void FindScreenLocationForWorldLocation(UObject* WorldContextObject, const FVector& InLocation, const FVector2D AdditionalEdge, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool FindRecipes(UObject* WorldContextObject, UObject* ObjectPtr, TArray<FString>& OutRecipePaths, const FString& SearchPath);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static TArray<FString> FindAndParseRecipes(UObject* WorldContextObject, UObject* ObjectPtr, TArray<FBMRecipeData>& OutRecipes, const FString& SearchPath);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool DeleteLocalRecipe(UObject* WorldContextObject, const FString& SlotName);
    
    UFUNCTION()
    static FText ConvertInnerKeys(FText TextToConvert);
    
    UFUNCTION(BlueprintPure)
    static FString BuildDetailsToString(const FBMBuildDetails& BuildDetails);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BeerValidJobSubmission(FBMPackagedBeerData& BeerData, TArray<FName> Requirements, UObject* WorldContextObject);
    
    UFUNCTION()
    static void AppendPlatformSpecificLocalizationKeySuffix(FString& InOutString, bool AddTitleSuffix);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static bool AllConditionsMet(TArray<FBMConditions> Conditions, TSubclassOf<ABMBaseActor> ActorClass, UObject* WorldContextObject, float StageStartDay);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void AddNotification(UObject* WorldContextObject, EBMNotificationType NotificationType, const TArray<FString>& LocSubstitutionStrings);
    
};

