#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BMPythonLibrary.generated.h"

class UStringTable;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMPythonLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMPythonLibrary();
    UFUNCTION(BlueprintCallable)
    static bool StringTableImportStrings(UStringTable* StringTable, const FString& InFilename);
    
};

