#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
#include "EBMInteractionType.h"
#include "BMFramingArrow.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingArrow : public UArrowComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMInteractionType> InteractionTypesToUseArrow;
    
public:
    UBMFramingArrow();
    UFUNCTION()
    TArray<EBMInteractionType> GetTypeToUseBounds();
    
};

