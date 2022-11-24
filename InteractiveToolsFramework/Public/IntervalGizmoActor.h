#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "IntervalGizmoActor.generated.h"

class UGizmoLineHandleComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API AIntervalGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UGizmoLineHandleComponent* UpIntervalComponent;
    
    UPROPERTY(Instanced)
    UGizmoLineHandleComponent* DownIntervalComponent;
    
    UPROPERTY(Instanced)
    UGizmoLineHandleComponent* ForwardIntervalComponent;
    
    AIntervalGizmoActor();
};

