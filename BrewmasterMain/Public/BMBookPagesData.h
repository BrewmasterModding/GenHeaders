#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMPageType.h"
#include "BMBookPagesData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBookPagesData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SectionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, EBMPageType> NumberToPageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FName> NumberToContentID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FString> SplitStringForText;
    
    FBMBookPagesData();
};

