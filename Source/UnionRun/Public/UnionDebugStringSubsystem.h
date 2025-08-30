#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DebugPrintStringStruct.h"
#include "UnionDebugStringSubsystem.generated.h"

class APlayerController;
class UCanvas;
class UFont;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionDebugStringSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugStringVisibleFlag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
public:
    UUnionDebugStringSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetDebugStringVisibleFlag(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void PrintDebugString(const FDebugPrintStringStruct& DebugString);
    
    UFUNCTION(BlueprintCallable)
    void Draw(UCanvas* InCanvas, APlayerController* InPC);
    
};

