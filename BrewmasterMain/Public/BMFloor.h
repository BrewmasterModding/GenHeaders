#pragma once
#include "CoreMinimal.h"
#include "BMStaticFurniture.h"
#include "EBMFloorMaterial.h"
#include "BMFloor.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMFloor : public ABMStaticFurniture {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EBMFloorMaterial FloorMaterial;
    
    ABMFloor();
};

