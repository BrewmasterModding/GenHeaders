#include "TweenFloat.h"

class UPrimitiveComponent;
class AActor;

void UTweenFloat::OnPrimitiveComponentHit(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector pNormalImpulse, const FHitResult& pHitResult) {
}

void UTweenFloat::OnPrimitiveComponentBeginOverlap(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool bFromSweep, const FHitResult& pSweepResult) {
}

void UTweenFloat::OnActorHit(AActor* pThisActor, AActor* pOtherActor, FVector pNormalImpulse, const FHitResult& pHit) {
}

void UTweenFloat::OnActorBeginOverlap(AActor* pThisActor, AActor* pOtherActor) {
}

float UTweenFloat::GetCurrentValue() const {
    return 0.0f;
}

UTweenFloat::UTweenFloat() {
}

