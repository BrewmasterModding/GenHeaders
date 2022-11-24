#pragma once
#include "CoreMinimal.h"
#include "BMSetValueInteractionComp.h"
#include "ESizeBand.h"
#include "BMPumpInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMPumpInteractionComponent : public UBMSetValueInteractionComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsReversible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsVariableFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStandAlonePump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESizeBand MaximumContainerConnectedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFlowRate;
    
    UPROPERTY()
    float CurrentFlowRate;
    
    UBMPumpInteractionComponent();
};

