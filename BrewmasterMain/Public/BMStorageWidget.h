#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMStorageWidget.generated.h"

class UBMStorageInteraction;
class UBMItemWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMStorageWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMStorageInteraction* ActiveStorageInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBMItemWidget* SpawnWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UBMItemWidget*> ItemArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUIOpen;
    
public:
    UBMStorageWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadBPUI();
    
    UFUNCTION(BlueprintCallable)
    void ConnectToStorage(UBMStorageInteraction* Interaction);
    
};

