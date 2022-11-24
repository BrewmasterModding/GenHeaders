#include "BMHerbJar.h"
#include "BMShakingComponent.h"

ABMHerbJar::ABMHerbJar() {
    this->SpawnedShakeParticles = NULL;
    this->ShakingComponent = CreateDefaultSubobject<UBMShakingComponent>(TEXT("ShakingComponent"));
    this->ShakeParticleEffect = NULL;
}

