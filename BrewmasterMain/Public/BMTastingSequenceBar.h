#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMTastingSequenceBar.generated.h"

class UTexture;
class USlider;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingSequenceBar : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTexture*> StyleTextures;
    
public:
    UBMTastingSequenceBar();
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatName(const FText& StatName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatFinal(const FText& Stat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSliderStyleTexture(UTexture* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMinValue(const FText& MinValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMaxValue(const FText& MaxValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    USlider* GetSlider();
    
};

