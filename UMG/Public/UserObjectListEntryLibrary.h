#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UserObjectListEntryLibrary.generated.h"

class UUserObjectListEntry;
class IUserObjectListEntry;
class UObject;

UCLASS(BlueprintType)
class UMG_API UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserObjectListEntryLibrary();
    UFUNCTION(BlueprintPure)
    static UObject* GetListItemObject(TScriptInterface<IUserObjectListEntry> UserObjectListEntry);
    
};

