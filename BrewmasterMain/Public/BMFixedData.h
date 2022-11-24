#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMMaltIngredientData.h"
#include "BMSaveableActorInterface.h"
#include "BMHopsIngredientData.h"
#include "BMGenericIngredientData.h"
#include "BMYeastIngredientData.h"
#include "BMArtDataYeastPacketIngredients.h"
#include "BMTriggeredContaminationConditions.h"
#include "BMInherentContaminationConditions.h"
#include "BMArtDataMaltExtractCanIngredients.h"
#include "BMArtDataGrainBagIngredients.h"
#include "BMArtDataHerbJarIngredients.h"
#include "BMArtDataBottledIngredients.h"
#include "BMArtDataSteepableGrainIngredients.h"
#include "BMArtDataHopsMeshBagIngredients.h"
#include "EBMSeasonsEnum.h"
#include "BMBeerStatsData.h"
#include "BMProteinAdditionStatsData.h"
#include "BMInsulationStatsData.h"
#include "BMCoolingStatsData.h"
#include "BMHeatExchangeData.h"
#include "EFlavourNotes.h"
#include "EIngredientType.h"
#include "EIngredientSubTypeOther.h"
#include "EBMFurnitureSubcategory.h"
#include "EFlavourCategory.h"
#include "BMFixedData.generated.h"

class UDataTable;
class UCurveFloat;

UCLASS()
class ABMFixedData : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TMap<FName, FBMGenericIngredientData> IngredientData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMHopsIngredientData> HopsData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMMaltIngredientData> MaltData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMYeastIngredientData> YeastData;
    
    UPROPERTY(SaveGame)
    TArray<FBMTriggeredContaminationConditions> TriggeredContaminationConditions;
    
    UPROPERTY(SaveGame)
    TArray<FBMInherentContaminationConditions> InherentContaminationConditions;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataGrainBagIngredients> ArtGrainData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataYeastPacketIngredients> ArtYeastData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataHerbJarIngredients> ArtHerbData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataBottledIngredients> ArtBottledData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataSteepableGrainIngredients> ArtSteepableGrainData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataHopsMeshBagIngredients> ArtHopData;
    
    UPROPERTY(SaveGame)
    TMap<FName, FBMArtDataMaltExtractCanIngredients> ArtMaltData;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float EnzymeDenaturingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float StarchExtractionEfficiency;
    
    UPROPERTY(EditDefaultsOnly)
    float UtilisationRateConstant;
    
    UPROPERTY(EditDefaultsOnly)
    float UtilisationTimePlateauConstant;
    
    UPROPERTY(EditDefaultsOnly)
    float UtilisationGravityMultiplierConstant;
    
    UPROPERTY(EditDefaultsOnly)
    float UtilisationGravityBaseConstant;
    
    UPROPERTY(EditDefaultsOnly)
    float CO2PercentLostPerMintue;
    
    UPROPERTY(EditDefaultsOnly)
    float SetWaterEvaporationASecond;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfDaysInAMonth;
    
    UPROPERTY(EditDefaultsOnly)
    EBMSeasonsEnum StartingSeason;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StartingNumberOfSeasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> TimeSkipOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoppyAndBitterIBUAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HoppyAndBitterStrengthToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgitationDecreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgitationCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMBeerStatsData BeerStatConstants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInsulationStatsData InsulationStatsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMCoolingStatsData CoolingStatsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMProteinAdditionStatsData ProteinAdditionStatsData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* IngredientDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* HopsIngredientDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MaltIngredientDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* YeastIngredientDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* TriggeredContaminationDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* InherentContaminationDataSource;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtGrainDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtYeastDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtBottledDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtHerbDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtSteepableGrainDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtHopDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ArtMaltDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* HopsUtilizationFlavour;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* HopsFlavourAttenuationRate;
    
    UPROPERTY(EditDefaultsOnly)
    float HopsFlavourAttenuationSafeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HopsFlavourSafeTimeRandomisationRange;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* EvaporationRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* YeastActivityTaperOffRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* YeastActivityTaperUpRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxRateOfChangeInYeastActivity;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* RelativeDensityOfAlcoholByMassPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBMHeatExchangeData RoomTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GlobalTemperatureScalingFactor;
    
public:
    UPROPERTY(EditDefaultsOnly)
    bool bYeastActivityTaperDebugLogOn;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsePPGCalculationForSG;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMassForFruitStyleSpecializations;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMassForFruitSpiceStyleSpecializations;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMassForWoodAgedStyleSpecializations;
    
    UPROPERTY(EditDefaultsOnly)
    float MinMassForSpiceStyleSpecializations;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<EFlavourNotes> NegativeFlavours;
    
    UPROPERTY(EditDefaultsOnly)
    float ContaminationMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float NegativeFlavourContaminationMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIngredientType, float> FlavourMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIngredientType, float> FlavourNoteMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIngredientSubTypeOther, float> SubTypeFlavourMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIngredientSubTypeOther, float> SubTypeFlavourNoteMultipliers;
    
    UPROPERTY(EditDefaultsOnly)
    float ContidioningCaskFlavourMult;
    
    UPROPERTY(EditDefaultsOnly)
    float YeastPopulationPerGram;
    
public:
    UPROPERTY(EditDefaultsOnly)
    bool bAlowSimulationStepTimeVariation;
    
    UPROPERTY(EditDefaultsOnly)
    float StartingSimulatorStepTimeWhenVaried;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSimulatorStepTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SimulationTimeStretchFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeStretchCutoffMult;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bEnableFurnitureSwapMode;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EBMFurnitureSubcategory> DisableRotationForFurnitureTypes;
    
public:
    ABMFixedData();
    UFUNCTION()
    float GetYeastPopulationPerGram();
    
    UFUNCTION(BlueprintCallable)
    FBMYeastIngredientData GetYeastData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    UCurveFloat* GetYeastActivityTaperUpRateCurve();
    
    UFUNCTION(BlueprintCallable)
    UCurveFloat* GetYeastActivityTaperOffRateCurve();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetTimeSkipOptions();
    
    UFUNCTION(BlueprintPure)
    float GetTemperatureScalingFactor();
    
    UFUNCTION(BlueprintCallable)
    float GetSubFlavourMultiplier(EIngredientSubTypeOther IngredientType, bool bIsNote);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStartingNumberOfSeasons();
    
    UFUNCTION(BlueprintPure)
    float GetSpecificGravityOfEthanolWaterMix(const float FractionalMassEthanol);
    
    UFUNCTION(BlueprintCallable)
    float GetSetWaterEvaporationRate();
    
    UFUNCTION(BlueprintPure)
    FBMHeatExchangeData GetRoomHeatExchange();
    
    UFUNCTION()
    FBMProteinAdditionStatsData GetProteinAdditionStatsData();
    
    UFUNCTION(BlueprintCallable)
    TArray<EFlavourNotes> GetNegativeFlavours();
    
    UFUNCTION(BlueprintCallable)
    float GetNegativeFlavourContaminationMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxRateOfChangeInYeastActivity();
    
    UFUNCTION(BlueprintCallable)
    FBMMaltIngredientData GetMaltData(FName IngredientName);
    
    UFUNCTION()
    FBMInsulationStatsData GetInsulationStatsData();
    
    UFUNCTION(BlueprintCallable)
    FBMGenericIngredientData GetIngredientData(FName UniqueName);
    
    UFUNCTION(BlueprintCallable)
    FBMHopsIngredientData GetHopsData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    float GetHoppyAndBitterDataStrengthAmount();
    
    UFUNCTION(BlueprintCallable)
    float GetHoppyAndBitterDataIBUAmount();
    
    UFUNCTION(BlueprintCallable)
    static FString GetFlavourString(const EFlavourCategory Category);
    
    UFUNCTION(BlueprintCallable)
    float GetFlavourMultiplier(EIngredientType IngredientType, bool bIsNote);
    
    UFUNCTION(BlueprintCallable)
    UCurveFloat* GetEvaporationRateCurve();
    
    UFUNCTION()
    bool GetEnableFurnitureSwapMode();
    
    UFUNCTION()
    TArray<EBMFurnitureSubcategory> GetDisableRotationForFurnitureTypes();
    
    UFUNCTION(BlueprintCallable)
    float GetDenaturingRate();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDaysInAMonth();
    
    UFUNCTION()
    FBMCoolingStatsData GetCoolingStatsData();
    
    UFUNCTION(BlueprintCallable)
    float GetContaminationMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetCO2PercentLostPerMintue();
    
    UFUNCTION(BlueprintCallable)
    FBMBeerStatsData GetBeerStatConstants();
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataYeastPacketIngredients GetArtYeastData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataSteepableGrainIngredients GetArtSteepableGrainData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataMaltExtractCanIngredients GetArtMaltData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataHopsMeshBagIngredients GetArtHopData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataHerbJarIngredients GetArtHerbData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataGrainBagIngredients GetArtGrainData(FName IngredientName);
    
    UFUNCTION(BlueprintCallable)
    FBMArtDataBottledIngredients GetArtBottledData(FName IngredientName);
    
    UFUNCTION()
    float GetAgitationDecreaseRate();
    
    UFUNCTION(BlueprintCallable)
    float GetAgitationCap();
    
    
    // Fix for true pure virtual functions not being implemented
};

