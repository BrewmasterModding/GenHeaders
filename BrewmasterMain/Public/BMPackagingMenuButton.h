#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPackagingMenuButton.generated.h"

class UEditableText;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingMenuButton : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText CachedBeerName;
    
    UBMPackagingMenuButton();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubText(const FText& Text);
    
    UFUNCTION()
    void SetSavedBeerName(const FText& InText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UEditableText* GetEditableText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
};

