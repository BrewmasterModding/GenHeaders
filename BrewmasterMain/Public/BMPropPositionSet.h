#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BMReflectionCaptureSetting.h"
#include "BMStaticPropData.h"
#include "EBMSeasonsEnum.h"
#include "BMPropPositionSet.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPropPositionSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> BeerPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> BottlePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMReflectionCaptureSetting> ReflectionCaptures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMStaticPropData> StaticProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMSeasonsEnum> AllowedSeasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TrackingActorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingsName;
    
    FBMPropPositionSet();
};

