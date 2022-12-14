#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BlackboardComponent.generated.h"

class UBrainComponent;
class UBlackboardData;
class UBlackboardKeyType;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UBlackboardComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UBrainComponent* BrainComp;
    
    UPROPERTY(EditDefaultsOnly)
    UBlackboardData* DefaultBlackboardAsset;
    
    UPROPERTY(Transient)
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY(Transient)
    TArray<UBlackboardKeyType*> KeyInstances;
    
public:
    UBlackboardComponent();
    UFUNCTION(BlueprintCallable)
    void SetValueAsVector(const FName& KeyName, FVector VectorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsString(const FName& KeyName, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsRotator(const FName& KeyName, FRotator VectorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsObject(const FName& KeyName, UObject* ObjectValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsName(const FName& KeyName, FName NameValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsInt(const FName& KeyName, int32 IntValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsFloat(const FName& KeyName, float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsEnum(const FName& KeyName, uint8 EnumValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsClass(const FName& KeyName, UClass* ClassValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAsBool(const FName& KeyName, bool BoolValue);
    
    UFUNCTION(BlueprintPure)
    bool IsVectorValueSet(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetValueAsVector(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    FString GetValueAsString(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetValueAsRotator(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetValueAsObject(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetValueAsName(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetValueAsInt(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    float GetValueAsFloat(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetValueAsEnum(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetValueAsClass(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetValueAsBool(const FName& KeyName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation) const;
    
    UFUNCTION(BlueprintPure)
    bool GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearValue(const FName& KeyName);
    
};

