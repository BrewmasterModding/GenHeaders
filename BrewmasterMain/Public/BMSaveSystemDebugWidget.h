#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMSaveSystemDebugWidget.generated.h"

class UBMGameInstance;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSaveSystemDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString CampaignName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 CampaignSlot;
    
public:
    UBMSaveSystemDebugWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SaveGame(UBMGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void LoadGame(UBMGameInstance* GameInstance);
    
};

