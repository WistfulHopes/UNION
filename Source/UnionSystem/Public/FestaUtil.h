#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGroupColorId.h"
#include "UIColorInfo.h"
#include "FestaUtil.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UFestaUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFestaUtil();

    UFUNCTION(BlueprintCallable)
    static FUIColorInfo GetFestaUIColorInfo(int32 festaId, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFestaRentalPlateText(const FText& TargetGadgetname);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFestaPointText(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static FColor GetFestaMainColor(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFestaIdUtil();
    
    UFUNCTION(BlueprintCallable)
    static EGroupColorId GetFestaGroupColorId(int32 festaId, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    static FText GetFestaChanceUpRatioText(int32 Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertFestaIdToTypeId(const int32 festaId);
    
};

