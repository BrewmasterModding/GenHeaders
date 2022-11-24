#include "BMFramingComponent.h"

TArray<FVector> UBMFramingComponent::GetFramingBoundsOrigins(EBMInteractionType InteractionType) {
    return TArray<FVector>();
}

TArray<FVector> UBMFramingComponent::GetFramingBounds(EBMInteractionType InteractionType) {
    return TArray<FVector>();
}

TArray<FVector> UBMFramingComponent::GetFramingArrows(EBMInteractionType InteractionType) {
    return TArray<FVector>();
}

float UBMFramingComponent::GetExtraMargin() {
    return 0.0f;
}

FVector UBMFramingComponent::GetCameraForwardDirection(EBMInteractionType InteractionType) {
    return FVector{};
}

FRotator UBMFramingComponent::GetArrowDirection(EBMInteractionType InteractionType) {
    return FRotator{};
}

void UBMFramingComponent::BeginPlay() {
}

UBMFramingComponent::UBMFramingComponent() {
    this->CameraExtraFramingMarginPercent = 0.00f;
}

