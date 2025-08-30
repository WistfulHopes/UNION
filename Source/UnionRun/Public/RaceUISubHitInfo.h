#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECrossplayPlatform.h"
#include "RaceUISubHitInfo.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubHitInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LostItemIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LostItemIdIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ItemIconTexture;
    
    URaceUISubHitInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchBaseUI(bool IsRival, bool IsPowerRival);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformIcon(ECrossplayPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    void SetLostItemIdIndex_Implement(int32 InItemIdIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocalPlayerColorMaterial(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGroupColorMaterial(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCOMBackColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIndex(int32 Index, bool IsRival);
    
};

