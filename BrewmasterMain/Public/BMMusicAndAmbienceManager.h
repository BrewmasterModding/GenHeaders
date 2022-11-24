#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EBMSeasonsEnum.h"
#include "BMMusicAndAmbienceManager.generated.h"

class UAudioComponent;
class ABMTimeController;
class UBMAudioAssetListBase;
class USoundBase;

UCLASS()
class BREWMASTERMAIN_API ABMMusicAndAmbienceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBetweenTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> AmbienceVolumes;
    
protected:
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(Instanced)
    UAudioComponent* MusicAudioComponent;
    
    UPROPERTY()
    ABMTimeController* TimeController;
    
    UPROPERTY()
    USoundBase* NextSeasonTrack;
    
public:
    ABMMusicAndAmbienceManager();
protected:
    UFUNCTION()
    void SeasonChanged(EBMSeasonsEnum NewSeason);
    
};

