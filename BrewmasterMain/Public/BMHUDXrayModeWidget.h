#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "EBMXrayInformationMode.h"
#include "BMHUDXrayModeWidget.generated.h"

class UBMSingleStatWidget;
class ABMBaseActor;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDXrayModeWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMBaseActor* CurrentlySelectedActor;
    
protected:
    UPROPERTY()
    EBMXrayInformationMode CurrentXRayMode;
    
    UPROPERTY()
    bool bshouldUpdate;
    
    UPROPERTY(Instanced)
    TArray<UBMSingleStatWidget*> CurrentSingleStatWidgets;
    
public:
    UBMHUDXrayModeWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemVolumeText(const FText& ItemVolumeText, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemNameText(const FText& ItemNameText, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowUpdate(bool bShouldUpdateNow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UBMSingleStatWidget*> GetUBMSingleStatWidgets();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSingleStatWidget* GetNonDissolvedVolumeWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSingleStatWidget* GetLiquidVolumeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UVerticalBox* GetAdditionalLinesVerticalBox();
    
    UFUNCTION()
    void ClearCachedNames();
    
};

