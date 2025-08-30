#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUnionSplitScreenType.h"
#include "SplitScreenUtility.generated.h"

UCLASS(Blueprintable)
class UNION_API USplitScreenUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USplitScreenUtility();

    UFUNCTION(BlueprintCallable)
    static void SetSplitSizeAndLocation(const TEnumAsByte<EUnionSplitScreenType>& SplitType, const int32 Index, const float SizeX, const float SizeY, const float OriginX, const float OriginY);
    
    UFUNCTION(BlueprintCallable)
    static void SetSplitscreen(const bool bDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EUnionSplitScreenType> GetCurrentSplitscreenConfiguration();
    
};

