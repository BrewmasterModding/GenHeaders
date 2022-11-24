#pragma once
#include "CoreMinimal.h"
#include "BMBaseFurniture.h"
#include "BMSaveableActorInterface.h"
#include "BMDynamicFurniture.generated.h"

class UStaticMeshComponent;

UCLASS()
class BREWMASTERMAIN_API ABMDynamicFurniture : public ABMBaseFurniture, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMesh;
    
public:
    ABMDynamicFurniture();
    
    // Fix for true pure virtual functions not being implemented
};

