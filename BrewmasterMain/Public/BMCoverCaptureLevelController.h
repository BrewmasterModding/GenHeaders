#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EBMBottleType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EBMBeerGlassType.h"
#include "BMPhotoshootBeerGlassSpawnData.h"
#include "BMPhotoshootBeerBottleSpawnData.h"
#include "BMBeerStyle.h"
#include "BMBeerProperties.h"
#include "BMCoverCaptureLevelController.generated.h"

class APlayerController;
class UDataTable;
class ABMCoverCaptureSubLevelController;
class USceneCaptureComponent2D;
class ULevelStreaming;
class ACineCameraActor;
class ABMBaseBeerGlass;
class ABMBaseBeerBottle;
class UWorld;

UCLASS()
class BREWMASTERMAIN_API ABMCoverCaptureLevelController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> PhotoshootSubLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldGenerateSpecificAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FString> LevelsToGenerateCoversFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FString> BeerStylesToGenerateCoversFor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* BeerStylesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ABMCoverCaptureSubLevelController> PhotoshootSubLevelControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<EBMBeerGlassType, FBMPhotoshootBeerGlassSpawnData> BeerGlassClasses;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<EBMBottleType, FBMPhotoshootBeerBottleSpawnData> BeerBottleClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint ScreenshotResolution;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool bIsInitialized;
    
private:
    UPROPERTY(Instanced)
    USceneCaptureComponent2D* SceneCaptureComponentRGBA;
    
    UPROPERTY()
    ULevelStreaming* ActiveSubLevel;
    
    UPROPERTY()
    FName ActiveSubLevelName;
    
    UPROPERTY()
    int32 ActiveSubLevelIndex;
    
    UPROPERTY()
    ABMCoverCaptureSubLevelController* ActiveSubLevelController;
    
    UPROPERTY()
    ACineCameraActor* ActiveScreenshotCamera;
    
    UPROPERTY()
    TArray<FName> BeerStyleNames;
    
    UPROPERTY()
    TMap<FName, FBMBeerStyle> BeerStyleData;
    
    UPROPERTY()
    TMap<EBMBeerGlassType, ABMBaseBeerGlass*> BeerGlassActors;
    
    UPROPERTY()
    TMap<EBMBottleType, ABMBaseBeerBottle*> BeerBottleActors;
    
    UPROPERTY()
    TMap<FName, FBMBeerProperties> BeerStylePropertiesMap;
    
    UPROPERTY()
    TSet<FString> ExistingLevelVariantNames;
    
    UPROPERTY()
    TMap<FString, FString> UniqueLevelVariantNameMap;
    
    UPROPERTY()
    UWorld* CurrentWorld;
    
    UPROPERTY()
    APlayerController* PlayerController;
    
    UPROPERTY()
    ABMBaseBeerGlass* CurrentGlass;
    
    UPROPERTY()
    int32 CurrentBeerStyleToCaptureIndex;
    
public:
    ABMCoverCaptureLevelController();
    UFUNCTION()
    void UnloadActiveSubLevelBlocking();
    
    UFUNCTION()
    void LoadSubLevelBlocking(const FString& LevelName);
    
    UFUNCTION()
    void LoadNextSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION()
    void HideInactiveGlasses(const ABMBaseBeerGlass* CurrentActiveGlass);
    
    UFUNCTION()
    void HideInactiveBottles(const ABMBaseBeerBottle* CurrentActiveBottle);
    
    UFUNCTION()
    void HandleScreenshotTakenDelegate(int32 NextBeerStyleToCapture);
    
    UFUNCTION()
    void HandleOnSubLevelUnloaded();
    
    UFUNCTION()
    void HandleOnSubLevelLoaded();
    
    UFUNCTION()
    void FinishLoadingAllAssets();
    
    UFUNCTION()
    void CreateUniqueNameForLevel();
    
    UFUNCTION()
    FString CreateScreenshotFileName(FName BeerStyleName);
    
    UFUNCTION()
    void CreateBeerGlassActors(TMap<EBMBeerGlassType, ABMBaseBeerGlass*>& InOutBeerGlassInstances, FBMBeerProperties DefaultBeerProperties);
    
    UFUNCTION()
    void CreateBeerBottleActors(TMap<EBMBottleType, ABMBaseBeerBottle*>& InOutBeerBottleInstances, FBMBeerProperties DefaultBeerProperties);
    
    UFUNCTION()
    void CaptureCoverVariantsInLevel(int32 BeerStyleIndexToCapture);
    
    UFUNCTION(BlueprintCallable)
    void CaptureAllCovers();
    
};

