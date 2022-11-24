#pragma once
#include "CoreMinimal.h"
#include "EBMPageType.generated.h"

UENUM()
enum class EBMPageType : uint8 {
    None,
    ArticleStart,
    Article,
    Contents,
    FrontCover,
    BackCover,
    JobPage,
    CurrentTask,
    CurrentTaskRight,
    RecipePageLeft,
    RecipePageRight,
    FillerPage,
    CompetitionPageLeft,
    CompetitionPageRight,
    StoryOverview,
    CharacterPageLeft,
    CharacterPageRight,
    CommunityOverview,
    CommunityLeft,
    CommunityRight,
    RecipeIndex,
    RecipeCategoryIndex,
};

