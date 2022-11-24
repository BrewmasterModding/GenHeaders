#include "BMWFlavorList.h"

void UBMWFlavorList::SetStandardFlavourData(TMap<EFlavourCategory, float> InStandardFlavorData) {
}


void UBMWFlavorList::SetFlavourNoteData(TMap<EFlavourNotes, float> InFlavourNoteData) {
}


void UBMWFlavorList::SetAllFlavourData(TMap<EFlavourCategory, float> InStandardFlavorData, TMap<EFlavourNotes, float> InFlavourNoteData) {
}


UBMWFlavorList::UBMWFlavorList() {
    this->FlavorListEntryClass = NULL;
    this->MaxFlavorsToDisplay = 5;
}

