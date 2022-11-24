#pragma once
#include "CoreMinimal.h"
#include "EBMNotificationType.generated.h"

UENUM()
enum class EBMNotificationType : uint8 {
    NONE,
    ItemAddedToStorage,
    ArticleAddedToBrewpedia,
    RecipesAddedToJournal,
    BarrelOrKegStoredInCellar,
    BarrelOrKegStoredInKegRack,
    BeerBottleTypeUnlocked,
    NewDeliveryPackage,
};

