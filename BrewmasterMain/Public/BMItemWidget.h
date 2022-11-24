#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMItemData.h"
#include "BMItemWidget.generated.h"

class UBMStorageInteraction;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMStorageInteraction* StorageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMItemData SpawnItemData;
    
    UBMItemWidget();
};

