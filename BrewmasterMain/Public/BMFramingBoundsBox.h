#pragma once
#include "CoreMinimal.h"
#include "BMFramingBoundsShape.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMFramingBoundsBox.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingBoundsBox : public UBMFramingBoundsShape {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float LineThickness;
    
public:
    UBMFramingBoundsBox();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    FVector GetUnscaledBoxExtent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaledBoxExtent() const;
    
};

