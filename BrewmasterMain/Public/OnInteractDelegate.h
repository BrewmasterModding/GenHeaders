#pragma once
#include "CoreMinimal.h"
#include "OnInteractDelegate.generated.h"

class UBMInteractionComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInteract, UBMInteractionComponent*, InteractionComponent, bool, IsActive, AActor*, Interactee);

