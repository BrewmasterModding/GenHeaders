#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMFurnitureSwapInventoryBar.generated.h"

class UBMHUDActionPrompt;
class UBMActionGlyph;
class UBMHUDInventoryBar;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFurnitureSwapInventoryBar : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 TotalNumSlots;
    
public:
    UBMFurnitureSwapInventoryBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetNextActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDInventoryBar* GetHUDInventoryBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetConfirmActionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetCancelActionPrompt();
    
};

