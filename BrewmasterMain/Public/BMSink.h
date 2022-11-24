#pragma once
#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "ESizeBand.h"
#include "BMSink.generated.h"

class ABMTube;

UCLASS()
class BREWMASTERMAIN_API ABMSink : public ABMBaseEquipment, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESizeBand MaxContainerSizeToFit;
    
    UPROPERTY()
    ABMTube* ConnectedTube;
    
    ABMSink();
    
    // Fix for true pure virtual functions not being implemented
};

