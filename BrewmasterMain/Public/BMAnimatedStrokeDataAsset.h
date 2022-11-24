#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMAnimatedStrokeData.h"
#include "BMAnimatedStrokeDataAsset.generated.h"

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMAnimatedStrokeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush DefaultAnimatedStrokeBrush;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMAnimatedStrokeData> AnimatedStrokeBrushes;
    
private:
    UPROPERTY(EditAnywhere)
    float SelectionStepSize;
    
    UPROPERTY(EditAnywhere)
    bool SelectBrushByHeight;
    
public:
    UBMAnimatedStrokeDataAsset();
    UFUNCTION(BlueprintCallable)
    FSlateBrush ChooseAnimatedStrokeBrushFromWidgetSize(const FVector2D WidgetLocalSize);
    
};

