#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "BMPlatformSaveFileData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BMSaveLoadWidget.generated.h"

class UPanelWidget;
class UBMSaveLoadSlot;
class UEditableText;
class UBMTextButtonWidget;
class USaveGame;
class UBMSaveDetails;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSaveLoadWidget : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBMPlatformSaveFileData> PlatformSaveFiles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMSaveLoadSlot> SaveSlotClass;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* BackButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* LoadButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* SaveButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* RenameButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* DeleteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData SaveGameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData SaveLoadAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData DeleteAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData RenameAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY()
    FTimerHandle NewSaveRefreshHandle;
    
    UPROPERTY(Instanced)
    UEditableText* SaveNameTextEdit;
    
    UPROPERTY()
    bool bCurrentlySaving;
    
public:
    UBMSaveLoadWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetScreenTitle(const FText& Text);
    
protected:
    UFUNCTION()
    void SetSaveRename(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitType);
    
    UFUNCTION()
    void SetNewSaveName(const FText& InText);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsSaveScreen(bool Save);
    
protected:
    UFUNCTION()
    void SaveRenaming(const FText& InText);
    
    UFUNCTION()
    void SaveProcessFinished(bool bSaveOk);
    
    UFUNCTION()
    void SaveGameFromAction();
    
    UFUNCTION()
    void SaveGame();
    
    UFUNCTION()
    void SaveFailed();
    
    UFUNCTION()
    void SaveComplete();
    
    UFUNCTION()
    void RenameSave();
    
public:
    UFUNCTION()
    void LoadSlotData(const FString& Name, const int32 PlayerId, USaveGame* NewSaveGame);
    
protected:
    UFUNCTION()
    void LoadSaveFromAction();
    
    UFUNCTION()
    void LoadSaveFileData();
    
    UFUNCTION()
    void LoadSave();
    
    UFUNCTION()
    void LoadedSaveDetails(const FString& Name, const int32 PlayerId, USaveGame* NewSaveGame);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitaliseButtons();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetSaveLoadSlotPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMSaveDetails* GetSaveDetailsPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetSaveButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetRenameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetLoadButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetExitGameButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetDeleteButton();
    
    UFUNCTION()
    void DeleteSave();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateSaveLoadSlots();
    
protected:
    UFUNCTION()
    void CreateNewSave();
    
    UFUNCTION()
    void ConfirmNameAndSaveGame();
    
    UFUNCTION()
    void ConfirmDeleteSave();
    
    UFUNCTION()
    void CloseOverlayAndRefreshScreen();
    
    UFUNCTION()
    void CheckAndConfirmNameAndSaveGame();
    
    UFUNCTION()
    void CancelRenaming();
    
    UFUNCTION()
    void BackToMenu();
    
    UFUNCTION()
    void ApplySaveRename();
    
};

