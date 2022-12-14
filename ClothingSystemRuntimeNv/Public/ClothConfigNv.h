#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConfigCommon -FallbackName=ClothConfigCommon
#include "EClothingWindMethodNv.h"
#include "ClothConstraintSetupNv.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=EClothingWindMethod_Legacy -FallbackName=EClothingWindMethod_Legacy
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConstraintSetup_Legacy -FallbackName=ClothConstraintSetup_Legacy
#include "ClothConfigNv.generated.h"

UCLASS()
class CLOTHINGSYSTEMRUNTIMENV_API UClothConfigNv : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EClothingWindMethodNv ClothingWindMethod;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetupNv VerticalConstraint;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetupNv HorizontalConstraint;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetupNv BendConstraint;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetupNv ShearConstraint;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionStiffness;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionCullScale;
    
    UPROPERTY(EditAnywhere)
    FVector Damping;
    
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY(EditAnywhere)
    float WindDragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float WindLiftCoefficient;
    
    UPROPERTY(EditAnywhere)
    FVector LinearDrag;
    
    UPROPERTY(EditAnywhere)
    FVector AngularDrag;
    
    UPROPERTY(EditAnywhere)
    FVector LinearInertiaScale;
    
    UPROPERTY(EditAnywhere)
    FVector AngularInertiaScale;
    
    UPROPERTY(EditAnywhere)
    FVector CentrifugalInertiaScale;
    
    UPROPERTY(EditAnywhere)
    float SolverFrequency;
    
    UPROPERTY(EditAnywhere)
    float StiffnessFrequency;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    FVector GravityOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseGravityOverride;
    
    UPROPERTY(EditAnywhere)
    float TetherStiffness;
    
    UPROPERTY(EditAnywhere)
    float TetherLimit;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveSpringStiffness;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveDamperStiffness;
    
    UPROPERTY()
    EClothingWindMethod_Legacy WindMethod;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy VerticalConstraintConfig;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy BendConstraintConfig;
    
    UPROPERTY()
    FClothConstraintSetup_Legacy ShearConstraintConfig;
    
    UClothConfigNv();
};

