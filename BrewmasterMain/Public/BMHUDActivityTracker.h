#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMInputActionData.h"
#include "BMHUDActivityTracker.generated.h"

class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDActivityTracker : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData OpenJournalAction;
    
    UBMHUDActivityTracker();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTitleText(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSubheaderText(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetOpenJournalGlyph();
    
};

