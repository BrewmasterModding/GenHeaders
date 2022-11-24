#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ShapeComponent -FallbackName=ShapeComponent
#include "EBMInteractionType.h"
#include "BMFramingBoundsShape.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingBoundsShape : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMInteractionType> InteractionTypesToUseBounds;
    
public:
    UBMFramingBoundsShape();
    UFUNCTION()
    TArray<EBMInteractionType> GetTypeToUseBounds();
    
};

