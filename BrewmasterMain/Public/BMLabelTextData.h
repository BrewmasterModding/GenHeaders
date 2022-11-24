#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMLabelTextData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText TextValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    UDataTable* TextStyle;
    
    FBMLabelTextData();
};

