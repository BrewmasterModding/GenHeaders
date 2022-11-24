#pragma once
#include "CoreMinimal.h"
#include "BMBaseFurniture.h"
#include "BMSaveableActorInterface.h"
#include "BMStaticFurniture.generated.h"

class UStaticMeshComponent;

UCLASS()
class BREWMASTERMAIN_API ABMStaticFurniture : public ABMBaseFurniture, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsFloor;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
public:
    ABMStaticFurniture();
    
    // Fix for true pure virtual functions not being implemented
};

