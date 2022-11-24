#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMHUDNotificationList.generated.h"

class UBMWHUDNotification;
class UGridPanel;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDNotificationList : public UBMUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMWHUDNotification> NotificationClass;
    
public:
    UBMHUDNotificationList();
    UFUNCTION(BlueprintImplementableEvent)
    UGridPanel* GetNotificationsPanel();
    
};

