#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BMBeerArtVisualsDataAsset.generated.h"

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMBeerArtVisualsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BeerStyle;
    
    UPROPERTY(EditAnywhere)
    bool bUseRandomValues;
    
    UPROPERTY(EditAnywhere)
    float ProteinContentInGrams;
    
    UPROPERTY(EditAnywhere)
    float PercentageDissolvedIngredients;
    
    UPROPERTY(EditAnywhere)
    float PercentageSugars;
    
    UPROPERTY(EditAnywhere)
    FVector2D MinMaxProteinContent;
    
    UPROPERTY(EditAnywhere)
    FVector2D MinMaxPercentageDissolvedIngredients;
    
    UPROPERTY(EditAnywhere)
    FVector2D MinMaxPercentageSugars;
    
    UBMBeerArtVisualsDataAsset();
    UFUNCTION(BlueprintCallable)
    float GetRandomProteinValue();
    
    UFUNCTION(BlueprintCallable)
    float GetRandomDissolvedSugarsPercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetRandomDissolvedIngredientPercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetProteinValue();
    
    UFUNCTION(BlueprintCallable)
    float GetDissolvedSugarsPercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetDissolvedIngredientPercentage();
    
};

