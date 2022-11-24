#pragma once
#include "CoreMinimal.h"
#include "OnCheckBoxStatePressedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CheckBox -FallbackName=CheckBox
#include "EBMInput.h"
#include "BMInputActionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CheckBoxStyle -FallbackName=CheckBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "BMCheckbox.generated.h"

class UBMAudioAssetListBase;
class UBMWShopItem;

UCLASS()
class BREWMASTERMAIN_API UBMCheckbox : public UCheckBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData ActionInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CheckboxID;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverridePressAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideHoverAudio;
    
    UPROPERTY(BlueprintAssignable)
    FOnCheckBoxStatePressed StateChanged;
    
    UPROPERTY(Instanced)
    UBMWShopItem* ShopItem;
    
    UBMCheckbox();
    UFUNCTION(BlueprintCallable)
    void SetBMCheckboxStyle(FCheckBoxStyle& InCheckBoxStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetActionInputValue(EBMInput NewInput);
    
    UFUNCTION(BlueprintCallable)
    void PlayPressAudio();
    
    UFUNCTION(BlueprintCallable)
    void PlayHoverAudio();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckboxUnhover();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckboxHover();
    
    UFUNCTION()
    void OnBMCheckBoxMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION()
    void BroadcastCheckboxIndex();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastActionDelegate();
    
    UFUNCTION(BlueprintCallable)
    void BindMousePointerEvent(UBMWShopItem* ShopItemWidget);
    
};

