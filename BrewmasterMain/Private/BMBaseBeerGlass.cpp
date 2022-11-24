#include "BMBaseBeerGlass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent


void ABMBaseBeerGlass::SetUpBeerGlassFromEditorTool(FBMBeerStyle BeerProperties) {
}

void ABMBaseBeerGlass::SetUpBeerGlassFromDataAsset() {
}

void ABMBaseBeerGlass::SetUpBeerGlassFromBP(FBMBeerProperties BeerProperties) {
}

void ABMBaseBeerGlass::SetUpBeerGlass(FBMBeerProperties& BeerProperties) {
}


ABMBaseBeerGlass::ABMBaseBeerGlass() {
    this->BeerArtVisualsData = NULL;
    this->SM_GlassOutside = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_GlassOutside"));
    this->SM_GlassInside = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_GlassInside"));
    this->SM_ClingingBubbles = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_ClingingBubbles"));
    this->SM_FakeGlow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_FakeGlow"));
    this->LaceBeerClass = NULL;
    this->BeerShaderClass = NULL;
    this->BeerCliningBubblesClass = NULL;
    this->BeerGlowClass = NULL;
    this->BeerParticlesClass = NULL;
    this->BeerBubblesParticles = NULL;
    this->BeerBubblesParticlesTranslucencySortPriority = 0;
    this->BeerBubblesParticleComponent = NULL;
    this->BeerShaderControl = NULL;
    this->BeerLaceShaderControl = NULL;
    this->BeerBubblesShaderControl = NULL;
    this->BeerGlowShaderControl = NULL;
    this->BeerParticlesControl = NULL;
    this->GlassOutsideMaterialInstance = NULL;
    this->GlassInsideMaterialInstance = NULL;
    this->ClingingBubblesMaterialInstance = NULL;
    this->FakeGlowMaterialInstance = NULL;
    this->BeerPointLight = NULL;
    this->bHasSetupShaders = false;
    this->FilledAmount = 0.90f;
}

