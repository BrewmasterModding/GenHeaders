#pragma once
#include "CoreMinimal.h"
#include "EnabledInteractionsActions.generated.h"

UENUM()
enum class EnabledInteractionsActions : uint8 {
    BrewContainerCategoryTab,
    FermentationContainerCategoryTab,
    ConditioningContainerCategoryTab,
    FlowControlCategoryTab,
    MaltExtractCategoryTab,
    HopsCategoryTab,
    YeastCategoryTab,
    SteepableGrainCategoryTab,
    JobTab,
    TrackJobButton,
    RecipeTab,
    ItemSelection,
    RetriveButton,
    RecipeNavigation,
    PinRecipeButton,
    PinnedRecipeTab,
    BackButton,
};

