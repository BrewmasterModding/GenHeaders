#include "BMObjectTransfer.h"

class USceneComponent;

void UBMObjectTransfer::TransferObjectToSocket(USceneComponent* TransferingToObject, FName TransferSocketName, EBMTransferType Transfer, bool UsingDockeePointLocation) {
}

void UBMObjectTransfer::TransferObjectToLocation(FVector Location, FRotator Rotation, EBMTransferType Transfer, bool UsingDockeePointLocation) {
}

FTransform UBMObjectTransfer::GetSocketTypeTransform(EBMTransferType NewTransferType) {
    return FTransform{};
}

void UBMObjectTransfer::CancelTransfer() {
}

UBMObjectTransfer::UBMObjectTransfer() {
    this->DefaultSocketName = TEXT("Socket_Docking");
    this->bIsMoving = false;
    this->bUsingDockeeSocket = false;
    this->bUpdateSocketPosition = false;
    this->transferType = EBMTransferType::Default;
    this->ActorSceneComponent = NULL;
    this->TargetMesh = NULL;
    this->TimeThroughTransfer = 0.00f;
    this->TimeScale = 1.00f;
}

