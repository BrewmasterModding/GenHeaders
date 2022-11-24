#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMCursorWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsCircle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFreeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreResolutionScaling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> CursorTexture_Gamepad_Default;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> CursorTexture_Mouse_Default;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> CursorTexture_Mouse_Freemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CursorSize_Gamepad_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CursorSize_Gamepad_Freemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CursorSize_Mouse_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CursorSize_Mouse_Freemove;
    
    UPROPERTY()
    float ScreenResolutionScale;
    
public:
    UBMCursorWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCursorType();
    
};

