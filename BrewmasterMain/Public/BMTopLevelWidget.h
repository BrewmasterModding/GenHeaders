#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BM_UI_ID.h"
#include "BMTopLevelWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTopLevelWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMTopLevelWidget();
    UFUNCTION(BlueprintNativeEvent)
    bool NavigateUI(FBM_UI_ID UINavigationID);
    
    UFUNCTION()
    void CheckTutorial();
    
};

