#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "BMObjectiveSystem.generated.h"

class UBMObjectiveWidget;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMObjectiveSystem : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMObjectiveWidget> ObjectiveWidgetClass;
    
public:
    UBMObjectiveSystem();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetObjectivesHolder();
    
};

