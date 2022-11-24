#pragma once
#include "CoreMinimal.h"
#include "PaperSpriteSocket.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SlateTextureAtlasInterface -FallbackName=SlateTextureAtlasInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ESpriteCollisionMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "PaperSprite.generated.h"

class UTexture;
class UMaterialInterface;
class UTexture2D;
class UBodySetup;

UCLASS(BlueprintType)
class PAPER2D_API UPaperSprite : public UObject, public IInterface_CollisionDataProvider, public ISlateTextureAtlasInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TArray<UTexture*> AdditionalSourceTextures;
    
    UPROPERTY()
    FVector2D BakedSourceUV;
    
    UPROPERTY()
    FVector2D BakedSourceDimension;
    
    UPROPERTY()
    UTexture2D* BakedSourceTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* AlternateMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FPaperSpriteSocket> Sockets;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    
    UPROPERTY(EditAnywhere)
    float PixelsPerUnrealUnit;
    
public:
    UPROPERTY(EditAnywhere)
    UBodySetup* BodySetup;
    
    UPROPERTY()
    int32 AlternateMaterialSplitIndex;
    
    UPROPERTY()
    TArray<FVector4> BakedRenderData;
    
    UPaperSprite();
    
    // Fix for true pure virtual functions not being implemented
};

