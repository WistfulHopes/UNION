#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TextureSwitcherComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTextureSwitcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> TextureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPurgeAfterSwitch;
    
    UTextureSwitcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchTextureByIndexAfterLoad(int32 TextureIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchTextureByIndex(int32 MaterialIndex, const FName ParameterName, int32 TextureIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchTexture(int32 MaterialIndex, const FName ParameterName, UTexture2D* Texture);
    
};

