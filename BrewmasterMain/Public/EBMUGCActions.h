#pragma once
#include "CoreMinimal.h"
#include "EBMUGCActions.generated.h"

UENUM()
enum class EBMUGCActions : uint8 {
    None,
    SaveLocalFile,
    DeleteLocalFile,
    Publish,
    Unpublish,
    SubscribedRecipesUpdated,
};

