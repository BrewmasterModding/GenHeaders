#pragma once
#include "CoreMinimal.h"
#include "UserWidgetPool.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct UMG_API FUserWidgetPool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UUserWidget*> ActiveWidgets;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUserWidget*> InactiveWidgets;
    
public:
    FUserWidgetPool();
};

