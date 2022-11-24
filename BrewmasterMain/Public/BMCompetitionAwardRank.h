#pragma once
#include "CoreMinimal.h"
#include "BMCompetitionAwardRank.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCompetitionAwardRank {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MinAmount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxAmount;
    
    FBMCompetitionAwardRank();
};

