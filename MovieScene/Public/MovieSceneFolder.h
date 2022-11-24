#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneFolder.generated.h"

class UMovieSceneTrack;
class UMovieSceneFolder;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieSceneFolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName FolderName;
    
    UPROPERTY(Instanced)
    TArray<UMovieSceneFolder*> ChildFolders;
    
    UPROPERTY(Instanced)
    TArray<UMovieSceneTrack*> ChildMasterTracks;
    
    UPROPERTY()
    TArray<FString> ChildObjectBindingStrings;
    
public:
    UMovieSceneFolder();
};

