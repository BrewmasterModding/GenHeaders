#pragma once
#include "CoreMinimal.h"
#include "BMStaticFurniture.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMKegStand.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMKegStand : public ABMStaticFurniture {
    GENERATED_BODY()
public:
    ABMKegStand();
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetGhostExtents();
    
};

