#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERewardType.h"
#include "CommonItemIcon.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonItemIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon_MachineParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon_HornIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon_DonpaTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon_UnknownGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_CompleteMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_GadgetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon_StickerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_StageRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_JukeBox_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TXT_Cost;
    
public:
    UCommonItemIcon();

    UFUNCTION(BlueprintCallable)
    void SetupRewardTexture(ERewardType InRewardType, UTexture2D* Texture, int32 NumItem, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureImpl(UTexture2D* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStickerImage(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGadgetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCost(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveWidgetIndexByRewardType(ERewardType InRewardType);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidget(ERewardType InRewardType) const;
    
};

