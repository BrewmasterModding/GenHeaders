#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PaperFlipbookKeyFrame.h"
#include "EFlipbookCollisionMode.h"
#include "PaperFlipbook.generated.h"

class UMaterialInterface;
class UPaperSprite;

UCLASS(BlueprintType)
class PAPER2D_API UPaperFlipbook : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FramesPerSecond;
    
    UPROPERTY(EditAnywhere)
    TArray<FPaperFlipbookKeyFrame> KeyFrames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* DefaultMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EFlipbookCollisionMode::Type> CollisionSource;
    
public:
    UPaperFlipbook();
    UFUNCTION(BlueprintPure)
    bool IsValidKeyFrameIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalDuration() const;
    
    UFUNCTION(BlueprintPure)
    UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds) const;
    
    UFUNCTION(BlueprintPure)
    UPaperSprite* GetSpriteAtFrame(int32 FrameIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumKeyFrames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumFrames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) const;
    
};

