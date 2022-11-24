#pragma once
#include "CoreMinimal.h"
#include "EBMBrewersQuarterlyCoverSeason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BMCoverCaptureSubLevelController.generated.h"

class ACineCameraActor;

UCLASS()
class BREWMASTERMAIN_API ABMCoverCaptureSubLevelController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HideObjectsWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMBrewersQuarterlyCoverSeason Season;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> BeerGlassPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> BeerBottlePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ACineCameraActor* ScreenshotCamera;
    
    ABMCoverCaptureSubLevelController();
    UFUNCTION(BlueprintCallable)
    void HideTestObjectsInScene();
    
    UFUNCTION(BlueprintCallable)
    EBMBrewersQuarterlyCoverSeason GetSubLevelSeason();
    
    UFUNCTION(BlueprintCallable)
    ACineCameraActor* GetScreenshotCamera();
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> GetAllSubLevelBeerGlassPositions();
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> GetAllSubLevelBeerBottlePositions();
    
};

