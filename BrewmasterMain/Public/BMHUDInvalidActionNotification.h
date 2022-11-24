#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
#include "BMHUDInvalidActionNotification.generated.h"

class UCanvasPanelSlot;
class UBorder;
class UTweenContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDInvalidActionNotification : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCanvasPanelSlot* ParentCanvasPanelSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBorder* NotificationBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D OnceScaleTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimateInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimateOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PassiveAnimateInOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnchors PassiveStartAnchors;
    
private:
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
public:
    UBMHUDInvalidActionNotification();
    UFUNCTION(BlueprintImplementableEvent)
    void SetInvalidText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenInvalidActionPassiveOut();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenInvalidActionPassiveIn();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenInvalidActionPassiveFlash();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenInvalidActionNotifyOnce();
    
};

