#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Texture -FallbackName=Texture
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EARTextureType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ARTexture.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UARTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EARTextureType TextureType;
    
    UPROPERTY(BlueprintReadOnly)
    float Timestamp;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ExternalTextureGuid;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Size;
    
    UARTexture();
};

