#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "LevelSequenceObjectReferenceMap.h"
#include "LevelSequenceBindingReferences.h"
#include "LevelSequenceObject.h"
#include "LevelSequence.generated.h"

class UObject;
class UMovieScene;
class UAssetUserData;

UCLASS()
class LEVELSEQUENCE_API ULevelSequence : public UMovieSceneSequence, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
protected:
    UPROPERTY()
    FLevelSequenceObjectReferenceMap ObjectReferences;
    
    UPROPERTY()
    FLevelSequenceBindingReferences BindingReferences;
    
    UPROPERTY()
    TMap<FString, FLevelSequenceObject> PossessedObjects;
    
    UPROPERTY()
    UClass* DirectorClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    ULevelSequence();
    UFUNCTION(BlueprintCallable)
    void RemoveMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UObject* FindOrAddMetaDataByClass(UClass* InClass);
    
    UFUNCTION(BlueprintPure)
    UObject* FindMetaDataByClass(UClass* InClass) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* CopyMetaData(UObject* InMetaData);
    
    
    // Fix for true pure virtual functions not being implemented
};

