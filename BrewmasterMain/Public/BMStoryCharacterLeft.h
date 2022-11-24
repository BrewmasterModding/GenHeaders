#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMStoryCharacterLeft.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMStoryCharacterLeft : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMStoryCharacterLeft();
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterImage(UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterFavouriteBeer(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterDesciption(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterBackgroundInfoPart2(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterBackgroundInfo(const FText& Text);
    
};

