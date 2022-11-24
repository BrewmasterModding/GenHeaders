#pragma once
#include "CoreMinimal.h"
#include "OnDockedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDocked, AActor*, ActorDocking);

