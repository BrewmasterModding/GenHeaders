#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMRadioInteraction.generated.h"

class UAudioComponent;
class UBMGameSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMRadioInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Playlist;
    
    UPROPERTY(VisibleAnywhere)
    bool bRadioOn;
    
    UPROPERTY(VisibleAnywhere)
    float RadioVolume;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUse3DAudio;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeTime;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UAudioComponent* RadioAudio;
    
    UPROPERTY()
    UBMGameSettings* GameSettings;
    
public:
    UBMRadioInteraction();
protected:
    UFUNCTION()
    void RefreshRadioStateFromSettings();
    
};

