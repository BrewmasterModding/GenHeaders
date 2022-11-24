#pragma once
#include "CoreMinimal.h"
#include "OnCarryStateChangedDelegate.generated.h"

class UBMCarryableComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCarryStateChanged, UBMCarryableComponent*, CarryableComponent, AActor*, Interactee);

