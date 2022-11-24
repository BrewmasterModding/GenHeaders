#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMStoryCharacterRight.generated.h"

class UBMPreviousQuestWidget;
class UBMActiveQuestWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMStoryCharacterRight : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMStoryCharacterRight();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBMPreviousQuestWidget* GetPreviousQuestWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActiveQuestWidget* GetActiveQuestWidget();
    
};

