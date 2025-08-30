#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EScrollPointBoxItemIconIndex.h"
#include "CommonScrollPointBox.generated.h"

class UHorizontalBox;
class UImage;
class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonScrollPointBox : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoInitResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* SnapPointMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ItemBox;
    
    UCommonScrollPointBox();

    UFUNCTION(BlueprintCallable)
    void SetupByItemNum(int32 InItemNum);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetItemIconIndexByPlayerIndex(int32 InItemIndex, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetItemIconIndex(int32 InItemIndex, EScrollPointBoxItemIconIndex InIconIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(const int32 InChildIndex, const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Resize(const int32 InNewSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItems(TArray<UImage*>& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoInitResize() const;
    
};

