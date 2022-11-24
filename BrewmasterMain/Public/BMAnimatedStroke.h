#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMAnimatedStroke.generated.h"

class UMaterialInstanceDynamic;
class UBMAnimatedStrokeDataAsset;
class UTweenContainer;
class UWidget;
class UImage;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMAnimatedStroke : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrokeDelayInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrokeAnimTime;
    
    UPROPERTY(EditAnywhere)
    UBMAnimatedStrokeDataAsset* AnimatedStrokeBrushesData;
    
private:
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
    UPROPERTY()
    FVector2D LastLocalSize;
    
public:
    UBMAnimatedStroke();
    UFUNCTION(BlueprintCallable)
    void ResetAnimatedStroke();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimatedStroke();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetStrokeMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetStrokeImageParentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetStrokeImage();
    
};

