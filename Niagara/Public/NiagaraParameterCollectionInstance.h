#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraParameterStore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraParameterCollectionInstance.generated.h"

class UNiagaraParameterCollection;

UCLASS(BlueprintType)
class NIAGARA_API UNiagaraParameterCollectionInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraParameterCollection* Collection;
    
    UPROPERTY()
    TArray<FNiagaraVariable> OverridenParameters;
    
private:
    UPROPERTY()
    FNiagaraParameterStore ParameterStorage;
    
public:
    UNiagaraParameterCollectionInstance();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(const FString& InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVector4Parameter(const FString& InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVector2DParameter(const FString& InVariableName, FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetQuatParameter(const FString& InVariableName, const FQuat& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameter(const FString& InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(const FString& InVariableName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameter(const FString& InVariableName, FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameter(const FString& InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorParameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    FVector4 GetVector4Parameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetVector2DParameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetQuatParameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntParameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatParameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetColorParameter(const FString& InVariableName);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolParameter(const FString& InVariableName);
    
};

