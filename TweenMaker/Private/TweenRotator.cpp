#include "TweenRotator.h"

class UPrimitiveComponent;
class AActor;

void UTweenRotator::OnPrimitiveComponentHit(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector pNormalImpulse, const FHitResult& pHitResult) {
}

void UTweenRotator::OnPrimitiveComponentBeginOverlap(UPrimitiveComponent* pThisComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool bFromSweep, const FHitResult& pSweepResult) {
}

void UTweenRotator::OnActorHit(AActor* pThisActor, AActor* pOtherActor, FVector pNormalImpulse, const FHitResult& pHit) {
}

void UTweenRotator::OnActorBeginOverlap(AActor* pThisActor, AActor* pOtherActor) {
}

FRotator UTweenRotator::GetCurrentValue() const {
    return FRotator{};
}

UTweenRotator::UTweenRotator() {
}

