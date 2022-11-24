#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=EProcMeshSliceCapOption -FallbackName=EProcMeshSliceCapOption
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMProceduralMeshLibrary.generated.h"

class UProceduralMeshComponent;
class UBMPouringMeshComponent;
class UMaterialInterface;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMProceduralMeshLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMProceduralMeshLibrary();
    UFUNCTION(BlueprintCallable)
    static void BMSliceProceduralMesh(UProceduralMeshComponent* InProcMesh, UProceduralMeshComponent* OutProcMesh, UBMPouringMeshComponent* PouringSpline, FVector PlanePosition, FVector PlaneNormal, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial, int32 CapCircleNum, bool SkipTriEarCheck, int32 BlackAlphaVertices, float AlphaScaler);
    
};

