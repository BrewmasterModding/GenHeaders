#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BMIconGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FBMIconGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Light1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Light2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Light3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Light4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BorderActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorderScaleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorderScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorderPosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorderPosY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Background_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Background_G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Background_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Background_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOV;
    
    BREWMASTERMAIN_API FBMIconGenerationData();
};

