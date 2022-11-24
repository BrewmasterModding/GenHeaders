#include "BMBookFunctionality.h"

void UBMBookFunctionality::StoryOverview(int32 PageNumber, FName CharacterPageNum) {
}

void UBMBookFunctionality::SetSection(int32 SectionNumber) {
}

void UBMBookFunctionality::SetPage(int32 PageNumber) {
}

void UBMBookFunctionality::PreviousSection() {
}

void UBMBookFunctionality::PreviousPage() {
}

void UBMBookFunctionality::PopulateRecipeRightPage(int32 PageNumber, FName RecipeID) {
}

void UBMBookFunctionality::PopulateRecipeLeftPage(int32 PageNumber, FName RecipeID) {
}

void UBMBookFunctionality::PopulateRecipeIndex(int32 PageNumber, const FString& CategoryStartIndex, int32 RecipePageIndex) {
}

void UBMBookFunctionality::PopulatePage(int32 SectionNumber, FBMBookPagesData PageData, int32 PageNumber) {
}

void UBMBookFunctionality::PopulateJobPage(int32 PageNumber, FName JobID) {
}

void UBMBookFunctionality::PopulateCurrentTaskRight(int32 PageNumber) {
}

void UBMBookFunctionality::PopulateCurrentTask(int32 PageNumber) {
}

void UBMBookFunctionality::PopulateContentsPage(int32 PageNumber, int32 ContentsPageNumber) {
}

void UBMBookFunctionality::PopulateCompetitionRightPage(int32 PageNumber) {
}

void UBMBookFunctionality::PopulateCompetitionLeftPage(int32 PageNumber) {
}

void UBMBookFunctionality::PopulateCommunityRightPage(int32 PageNumber, FName Brewery) {
}

void UBMBookFunctionality::PopulateCommunityOverviewPage(int32 PageNumber, int32 BreweryStartIndex) {
}

void UBMBookFunctionality::PopulateCommunityLeftPage(int32 PageNumber, FName Brewery) {
}

void UBMBookFunctionality::PopulateCharacterRightPage(int32 PageNumber, FName Character) {
}

void UBMBookFunctionality::PopulateCharacterLeftPage(int32 PageNumber, FName Character) {
}

void UBMBookFunctionality::PopulateBeerCategories(int32 PageNumber, int32 CategoryStartIndex) {
}

void UBMBookFunctionality::PopulateArticleStart(int32 PageNumber, FName Character, const FString& MainText, TArray<int32> ImageCaption) {
}

void UBMBookFunctionality::PopulateArticle(int32 PageNumber, FName ArticleID, const FString& MainText, TArray<int32> ImageCaptions) {
}

void UBMBookFunctionality::NextSection() {
}

void UBMBookFunctionality::NextPage() {
}

















void UBMBookFunctionality::Back() {
}

UBMBookFunctionality::UBMBookFunctionality() {
    this->TabActionGlyph = NULL;
    this->TabClass = NULL;
}

