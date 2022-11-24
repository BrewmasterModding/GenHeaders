#pragma once
#include "CoreMinimal.h"
#include "EBMBuildType.h"
#include "EBMGameType.h"
#include "BMBuildDetails.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBuildDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsPublic;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsBuild;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMBuildType BuildType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName BuildID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMGameType GameType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SaveVersion;
    
    FBMBuildDetails();
};

