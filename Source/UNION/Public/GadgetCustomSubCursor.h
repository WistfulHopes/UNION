#pragma once
#include "CoreMinimal.h"
#include "CommonMenuCrossButton.h"
#include "GadgetCustomSubCursor.generated.h"

class UImage;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetCustomSubCursor : public UCommonMenuCrossButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CursorImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> PlayerCursorImages;
    
public:
    UGadgetCustomSubCursor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsCanMove(const bool InIsCanMove);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPlayerIndex(const int32 InPlayerIndex, const bool InChangeCursorImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccept_Impl();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveDelay_Impl();
    
};

