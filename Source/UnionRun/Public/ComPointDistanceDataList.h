#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ComPointDistanceData.h"
#include "EComPointDistanceTableType.h"
#include "ComPointDistanceDataList.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComPointDistanceDataList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComPointDistanceTableType ComPointDistanceTableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group11;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group12;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group13;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group14;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComPointDistanceData ComPointDistanceData__Group15;
    
    FComPointDistanceDataList();
};

