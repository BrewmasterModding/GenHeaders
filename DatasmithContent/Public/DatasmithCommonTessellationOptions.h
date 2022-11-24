#pragma once
#include "CoreMinimal.h"
#include "DatasmithTessellationOptions.h"
#include "DatasmithOptionsBase.h"
#include "DatasmithCommonTessellationOptions.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class DATASMITHCONTENT_API UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FDatasmithTessellationOptions Options;
    
    UDatasmithCommonTessellationOptions();
};

