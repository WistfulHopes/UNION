#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatTestPlay.generated.h"

class AAutoInput;
class AMonkeyTest;

UCLASS(Blueprintable)
class UNION_API UCheatTestPlay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonkeyTest* MonkeyTestInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAutoInput* AutoInputInstance;
    
    UCheatTestPlay();

    UFUNCTION(BlueprintCallable, Exec)
    void StaySceneMonkeyTest(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStaySceneMonkeyTestFlag(bool bIsStayScene);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MonkeyTest(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoInput(const FString& InputParam);
    
};

