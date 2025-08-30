#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFontSizeType.h"
#include "FontFunctionObject.generated.h"

UCLASS(Blueprintable)
class UNIONUI_API UFontFunctionObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> DinToMoriMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> MoriToDinMap;
    
    UFontFunctionObject();

    UFUNCTION(BlueprintCallable)
    void CalcFontPoint(const EFontSizeType& InSrcFontType, const EFontSizeType& InDstFontType, const int32& InFontPoint, bool& bSuccess, int32& OutFontPoint);
    
};

