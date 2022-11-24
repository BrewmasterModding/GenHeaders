#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMLoadingScreen.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLoadingScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FString> TriviaLoc;
    
    UBMLoadingScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTrivaText(const FText& Trivia);
    
};

