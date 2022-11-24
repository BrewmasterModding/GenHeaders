#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "OnValueChangedDelegate.h"
#include "BMSetValueInteractionComp.generated.h"

class UBMAudioAssetListBase;
class USoundBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSetValueInteractionComp : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UpdateValueWithoutConfirming;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnValueChanged OnValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnValueChanged OnValueConfimed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StartInteractionValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentInputValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ValueMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ValueMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ValueChangeStepSize;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UBMSetValueInteractionComp();
protected:
    UFUNCTION()
    void UpdateValueFromConfirmedInput();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValueDirectly(float NewValue);
    
protected:
    UFUNCTION()
    void SetInitialCurrentValue();
    
    UFUNCTION()
    void PlaySoundAsset(USoundBase* SoundAsset);
    
public:
    UFUNCTION()
    float GetMinValue();
    
    UFUNCTION()
    float GetMaxValue();
    
protected:
    UFUNCTION()
    float GetInitialCurrentValue();
    
    UFUNCTION()
    void GetAudioAssetList();
    
    UFUNCTION()
    void ChangeValueByStep(bool bIncrease);
    
};

