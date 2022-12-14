#pragma once
#include "CoreMinimal.h"
#include "SourceEffectEQSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectEQPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectEQPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectEQSettings Settings;
    
    USourceEffectEQPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectEQSettings& InSettings);
    
};

