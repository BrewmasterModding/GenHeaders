#pragma once
#include "CoreMinimal.h"
#include "BMFramingBoundsShape.h"
#include "BMFramingBoundsSphere.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingBoundsSphere : public UBMFramingBoundsShape {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float SphereRadius;
    
public:
    UBMFramingBoundsSphere();
    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    float GetUnscaledSphereRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetScaledSphereRadius() const;
    
};

