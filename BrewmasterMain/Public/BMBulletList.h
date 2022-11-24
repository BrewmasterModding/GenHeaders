#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMBulletList.generated.h"

class UBMBulletTextItem;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBulletList : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMBulletTextItem> BulletItemClass;
    
    UBMBulletList();
    UFUNCTION(BlueprintImplementableEvent)
    void SetBulletTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetBulletPointsHolder();
    
};

