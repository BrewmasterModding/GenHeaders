#include "BMProceduralMeshLibrary.h"

class UProceduralMeshComponent;
class UBMPouringMeshComponent;
class UMaterialInterface;

void UBMProceduralMeshLibrary::BMSliceProceduralMesh(UProceduralMeshComponent* InProcMesh, UProceduralMeshComponent* OutProcMesh, UBMPouringMeshComponent* PouringSpline, FVector PlanePosition, FVector PlaneNormal, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial, int32 CapCircleNum, bool SkipTriEarCheck, int32 BlackAlphaVertices, float AlphaScaler) {
}

UBMProceduralMeshLibrary::UBMProceduralMeshLibrary() {
}

