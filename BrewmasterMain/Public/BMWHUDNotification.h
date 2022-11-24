#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMNotificationData.h"
#include "BMWHUDNotification.generated.h"

class UTweenContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWHUDNotification : public UBMUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY()
    FTimerHandle IdleTimerHandle;
    
public:
    UBMWHUDNotification();
private:
    UFUNCTION()
    void StartIdleTimer(UTweenContainer* Container);
    
public:
    UFUNCTION()
    void ShowNotification();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNotificationText(const FText& NotificationText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIconVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIcon(FSlateBrush Icon);
    
private:
    UFUNCTION()
    void RemoveNotification(UTweenContainer* Container);
    
public:
    UFUNCTION()
    void HideNotification();
    
    UFUNCTION()
    void CreateNotification(FBMNotificationData Data);
    
};

