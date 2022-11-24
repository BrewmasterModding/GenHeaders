#pragma once
#include "CoreMinimal.h"
#include "EBMNotificationType.h"
#include "BMNotificationAnimationTimings.h"
#include "BMNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EBMNotificationType NotificationType;
    
    UPROPERTY(EditDefaultsOnly)
    bool AllowMultiple;
    
    UPROPERTY(EditDefaultsOnly)
    bool ShowCount;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> NotificationIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FString LocalizationKey;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> LocalizationKeyTokens;
    
    UPROPERTY()
    TArray<FString> LocalizationTokenSubstitutionKeys;
    
    UPROPERTY()
    FBMNotificationAnimationTimings AnimationTimings;
    
    UPROPERTY()
    int32 PendingNotificationCount;
    
    FBMNotificationData();
};

