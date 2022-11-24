#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BMIconGenerationData.h"
#include "BMIconGenerationDataAsset.generated.h"

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMIconGenerationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMIconGenerationData> IconGenerationData;
    
    UBMIconGenerationDataAsset();
};

