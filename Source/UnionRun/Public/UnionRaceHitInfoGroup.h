#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UnionRaceHitInfoGroup.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceHitInfoGroup : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUIActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemIdIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconShadowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ItemIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ItemShadowTexture;
    
    UUnionRaceHitInfoGroup();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHitInfoGroup(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetItemIdIndex_Impl(int32 InItemIdIndex);
    
};

