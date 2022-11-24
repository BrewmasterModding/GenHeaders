#pragma once
#include "CoreMinimal.h"
#include "EPhysicsType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBodyCollisionResponse.h"
#include "ECollisionTraceFlag.h"
#include "BodySetupCore.generated.h"

UCLASS(CollapseCategories)
class PHYSICSCORE_API UBodySetupCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicsType> PhysicsType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBodyCollisionResponse::Type> CollisionReponse;
    
    UBodySetupCore();
};

