#pragma once
#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "BMCO2Data.h"
#include "BMCO2Tank.generated.h"

class UBMAudioAssetListBase;
class USkeletalMeshComponent;
class UAnimSequence;
class UBMSetCarbonationInteractionComp;
class UBMAnalogueControlComponent;
class UAudioComponent;

UCLASS()
class BREWMASTERMAIN_API ABMCO2Tank : public ABMBaseEquipment, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* CO2Tank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Regulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* RegulatorSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* RegulatorNeedleLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* RegulatorNeedleTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMSetCarbonationInteractionComp* CarbonationInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMAnalogueControlComponent* AnalogueControlComponent;
    
    UPROPERTY()
    UAnimSequence* NeedleLeftAnimation;
    
    UPROPERTY()
    UAnimSequence* NeedleTopAnimation;
    
    UPROPERTY()
    UAnimSequence* HandleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* HandleAnimationOff;
    
    UPROPERTY()
    UAnimSequence* RegulatorSwitchAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentCarbonationNeedlePositionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZeroAdjustment;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* GasAudioComponent;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    ABMCO2Tank();
    UFUNCTION(BlueprintCallable)
    void UpdateCarbonationAudio();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCarbonation(float TargetCarbonation);
    
    UFUNCTION()
    FBMCO2Data GetCO2Data();
    
    
    // Fix for true pure virtual functions not being implemented
};

