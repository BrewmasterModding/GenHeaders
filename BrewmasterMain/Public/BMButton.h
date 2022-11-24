#pragma once
#include "CoreMinimal.h"
#include "ButtonIndexDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "EBMInput.h"
#include "BMInputActionData.h"
#include "BMButton.generated.h"

class UBMAudioAssetListBase;

UCLASS()
class BREWMASTERMAIN_API UBMButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ActionInputData;
    
    UPROPERTY()
    FButtonIndex Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ButtonID;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverridePressAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideHoverAudio;
    
    UBMButton();
    UFUNCTION(BlueprintCallable)
    void SetActionInputValue(EBMInput NewInput);
    
    UFUNCTION(BlueprintCallable)
    void PlayPressAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayHoverAudio();
    
    UFUNCTION()
    void BroadcastButtonIndex();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastActionDelegate();
    
};

