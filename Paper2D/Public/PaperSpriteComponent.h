#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "PaperSpriteComponent.generated.h"

class UPaperSprite;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperSpriteComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPaperSprite* SourceSprite;
    
    UPROPERTY()
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor SpriteColor;
    
public:
    UPaperSpriteComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpriteColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    bool SetSprite(UPaperSprite* NewSprite);
    
    UFUNCTION(BlueprintPure)
    UPaperSprite* GetSprite();
    
};

