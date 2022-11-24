#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMLabelTextureAsset.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelTextureAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UTexture2D> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector4 TextureMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsSDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector2D IconScale;
    
    FBMLabelTextureAsset();
};

