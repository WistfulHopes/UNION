#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UnionStickerSystemData.h"
#include "UnionStickerSystem.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class UNION_API UUnionStickerSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CameraZoomSoundCue1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CameraZoomSoundCue2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CameraZoomSoundCue3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanZoom;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionStickerSystemData SystemData;
    
public:
    UUnionStickerSystem();

    UFUNCTION(BlueprintCallable)
    void Setup(const FUnionStickerSystemData& InSystemData);
    
private:
    UFUNCTION(BlueprintCallable)
    void InputReceiver_OnRightStickButtonPressed(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void InputReceiver_OnRightStickAxis(UObject* Object, FVector2D Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

