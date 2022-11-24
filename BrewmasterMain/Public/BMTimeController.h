#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BMLightCurves.h"
#include "BMSaveableActorInterface.h"
#include "EBMSeasonsEnum.h"
#include "SeasonChangeDelegateDelegate.h"
#include "BMTimeController.generated.h"

class UCurveFloat;
class APostProcessVolume;
class ULightComponent;
class UCurveLinearColor;

UCLASS()
class BREWMASTERMAIN_API ABMTimeController : public AActor, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMLightCurves> aLightMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APostProcessVolume* PostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* fPostProcessExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* PostProcessTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> aLightActors;
    
    UPROPERTY(Instanced)
    TArray<ULightComponent*> LightComponents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bManualTimeControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ManualTimeSet;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTimeSkippingWithCalendar;
    
    UPROPERTY()
    float CurrentInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultLightInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CalendarTimeSkippingInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnterCalendarTimeSkipInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExitCalendarInterpolationSpeed;
    
private:
    UPROPERTY(SaveGame)
    float TimeOfDay;
    
    UPROPERTY(SaveGame)
    float CurrentDays;
    
    UPROPERTY(SaveGame)
    float NumberOfMonths;
    
    UPROPERTY(SaveGame)
    float CurrentYear;
    
    UPROPERTY(SaveGame)
    int32 NumberOfSeasonsPassed;
    
    UPROPERTY(SaveGame)
    bool SetInitalSeason;
    
    UPROPERTY(SaveGame)
    int32 SeasonsIncreased;
    
    UPROPERTY(SaveGame)
    EBMSeasonsEnum CurrentSeason;
    
protected:
    UPROPERTY(EditInstanceOnly)
    float SimulationStartTimeOfDay;
    
    UPROPERTY()
    TArray<FString> DayOfTheWeekNames;
    
    UPROPERTY()
    TArray<FString> Ordinals;
    
    UPROPERTY()
    TArray<FString> MonthNames;
    
    UPROPERTY()
    TArray<int32> DaysInMonths;
    
public:
    UPROPERTY()
    FSeasonChangeDelegate OnSeasonChanged;
    
    ABMTimeController();
    UFUNCTION(BlueprintCallable)
    void UpdateLights(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLightInterpolationSpeed(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDay(float a_timeSet);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfSeasonsPassed(int32 NumberPassed);
    
    UFUNCTION(BlueprintCallable)
    void SetNewSeason(EBMSeasonsEnum Season);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTimeSkippingWithCalendar(bool bInCalendarMode);
    
    UFUNCTION()
    void RegisterWithSimController();
    
    UFUNCTION(BlueprintCallable)
    float GetYear();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeOfDay();
    
    UFUNCTION(BlueprintCallable)
    EBMSeasonsEnum GetSeason();
    
    UFUNCTION(BlueprintCallable)
    FString GetOrdinalDay();
    
    UFUNCTION(BlueprintCallable)
    float GetNumDaysInAMonth(int32 Month);
    
    UFUNCTION(BlueprintPure)
    FString GetMonthName(int32 Month) const;
    
    UFUNCTION(BlueprintCallable)
    float GetMonth();
    
    UFUNCTION(BlueprintPure)
    float GetInterpolationSpeed();
    
    UFUNCTION(BlueprintCallable)
    FString GetDayOfTheWeekName();
    
    UFUNCTION(BlueprintCallable)
    float GetDayOfTheWeek();
    
    UFUNCTION(BlueprintPure)
    float GetDayOfTheMonth() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDay();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentTimeInDays();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentTimeAs24HourString(bool ShortVersion);
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentMonthName() const;
    
    UFUNCTION(BlueprintCallable)
    void ConvertTimeTo24H();
    
private:
    UFUNCTION()
    bool CheckYearIncrease();
    
    UFUNCTION()
    bool CheckMonthIncrease();
    
    
    // Fix for true pure virtual functions not being implemented
};

