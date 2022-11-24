#pragma once
#include "CoreMinimal.h"
#include "FieldObjectCommands.generated.h"

class UFieldNodeBase;
class UFieldSystemMetaData;

USTRUCT(BlueprintType)
struct FIELDSYSTEMENGINE_API FFieldObjectCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> TargetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UFieldNodeBase*> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UFieldSystemMetaData*> MetaDatas;
    
    FFieldObjectCommands();
};

