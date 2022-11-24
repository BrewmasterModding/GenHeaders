#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "BMAnimationNotify.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories)
class UBMAnimationNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    float ExampleFloat;
    
public:
    UBMAnimationNotify();
};

