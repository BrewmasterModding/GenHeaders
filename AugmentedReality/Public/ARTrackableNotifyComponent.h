#pragma once
#include "CoreMinimal.h"
#include "TrackableFaceDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TrackableDelegateDelegate.h"
#include "TrackablePlaneDelegateDelegate.h"
#include "TrackablePointDelegateDelegate.h"
#include "TrackableImageDelegateDelegate.h"
#include "TrackableEnvProbeDelegateDelegate.h"
#include "TrackableObjectDelegateDelegate.h"
#include "ARTrackableNotifyComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARTrackableNotifyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTrackableDelegate OnAddTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableDelegate OnUpdateTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableDelegate OnRemoveTrackedGeometry;
    
    UPROPERTY(BlueprintAssignable)
    FTrackablePlaneDelegate OnAddTrackedPlane;
    
    UPROPERTY(BlueprintAssignable)
    FTrackablePlaneDelegate OnUpdateTrackedPlane;
    
    UPROPERTY(BlueprintAssignable)
    FTrackablePlaneDelegate OnRemoveTrackedPlane;
    
    UPROPERTY(BlueprintAssignable)
    FTrackablePointDelegate OnAddTrackedPoint;
    
    UPROPERTY(BlueprintAssignable)
    FTrackablePointDelegate OnUpdateTrackedPoint;
    
    UPROPERTY(BlueprintAssignable)
    FTrackablePointDelegate OnRemoveTrackedPoint;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableImageDelegate OnAddTrackedImage;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableImageDelegate OnUpdateTrackedImage;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableImageDelegate OnRemoveTrackedImage;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableFaceDelegate OnAddTrackedFace;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableFaceDelegate OnUpdateTrackedFace;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableFaceDelegate OnRemoveTrackedFace;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableEnvProbeDelegate OnAddTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableEnvProbeDelegate OnUpdateTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableEnvProbeDelegate OnRemoveTrackedEnvProbe;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableObjectDelegate OnAddTrackedObject;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableObjectDelegate OnUpdateTrackedObject;
    
    UPROPERTY(BlueprintAssignable)
    FTrackableObjectDelegate OnRemoveTrackedObject;
    
    UARTrackableNotifyComponent();
};

