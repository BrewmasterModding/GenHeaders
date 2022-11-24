#include "TweenVector.h"

class UPrimitiveComponent;
class AActor;

void UTweenVector::OnPrimitiveComponentHit(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector pNormalImpulse, const FHitResult& pHitResult) {
}

void UTweenVector::OnPrimitiveComponentBeginOverlap(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool bFromSweep, const FHitResult& pSweepResult) {
}

void UTweenVector::OnActorHit(AActor* pThisActor, AActor* pOtherActor, FVector pNormalImpulse, const FHitResult& pHit) {
}

void UTweenVector::OnActorBeginOverlap(AActor* pThisActor, AActor* pOtherActor) {
}

FVector UTweenVector::GetCurrentValue() const {
    return FVector{};
}

UTweenVector::UTweenVector() {
}

