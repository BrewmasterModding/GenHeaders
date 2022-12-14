#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=EdgeID -FallbackName=EdgeID
#include "MeshElementAttributeList.h"
#include "EdgeToCreate.generated.h"

USTRUCT(BlueprintType)
struct FEdgeToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID0;
    
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID1;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList EdgeAttributes;
    
    UPROPERTY(BlueprintReadWrite)
    FEdgeID OriginalEdgeID;
    
    EDITABLEMESH_API FEdgeToCreate();
};

