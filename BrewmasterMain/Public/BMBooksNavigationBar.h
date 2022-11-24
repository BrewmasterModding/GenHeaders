#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBooksNavigationBar.generated.h"

class UBMButton;
class UBMTextButtonWidget;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBooksNavigationBar : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMBooksNavigationBar();
    UFUNCTION(BlueprintImplementableEvent)
    void SetPageNumber(int32 CurrentPage, int32 TotalPages, bool bShowTotalPages);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMButton* GetPreviousPageButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousPageActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMButton* GetNextPageButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMActionGlyph* GetNextPageActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackTextButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
};

