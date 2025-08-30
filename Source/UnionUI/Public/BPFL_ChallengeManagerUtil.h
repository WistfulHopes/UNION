#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChallengeOwnerStruct.h"
#include "ChallengeStruct.h"
#include "EChallengeCategory.h"
#include "BPFL_ChallengeManagerUtil.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNIONUI_API UBPFL_ChallengeManagerUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ChallengeManagerUtil();

    UFUNCTION(BlueprintCallable)
    static bool IsOpenSpecialChallenge();
    
    UFUNCTION(BlueprintCallable)
    static bool IsChallengeCategoryClear(EChallengeCategory Category);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSpecialChallengeProgress(const UObject* WorldContextObject, int32& NowProgress);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChallengeStruct> GetChallengeShowList();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChallengeStruct> GetChallengeSaveData(EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetChallengeProgress(const UObject* WorldContextObject, int32& NowProgress);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChallengeOwnerStruct> GetChallengeClearOwnerList();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChallengeStruct> GetChallengeClearList(int32 ListLength);
    
};

