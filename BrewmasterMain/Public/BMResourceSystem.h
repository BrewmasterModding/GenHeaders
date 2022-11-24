#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMResourceSystem.generated.h"

class UBMResourceWidget;
class UGridPanel;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMResourceSystem : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMResourceWidget> ResourceWidgetClass;
    
public:
    UBMResourceSystem();
    UFUNCTION(BlueprintImplementableEvent)
    UGridPanel* GetRewardHolder();
    
};

