#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMLabelRenderAssets.generated.h"

class UMaterialInstanceDynamic;
class UWidgetComponent;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelRenderAssets : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInstanceDynamic* DynMaterialInstance;
    
    UPROPERTY(Instanced)
    TArray<UWidgetComponent*> TextWidgetComponent;
    
    UPROPERTY()
    bool bTextRenderApplied;
    
    FBMLabelRenderAssets();
};

