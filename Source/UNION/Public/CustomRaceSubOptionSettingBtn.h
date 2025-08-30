#pragma once
#include "CoreMinimal.h"
#include "EUnionUIButtonLoopAnim.h"
#include "EUnionUIControlDir.h"
#include "UnionUIButtonBase.h"
#include "CustomRaceSubOptionSettingBtn.generated.h"

class UCustomRaceSubOptionSettingLine;
class UImage;
class UMaterialInstanceDynamic;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCustomRaceSubOptionSettingBtn : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PatImageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIControlDir EdgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> BtnArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIButtonLoopAnim CurrentLoopState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_NonActive_Loop;
    
    UCustomRaceSubOptionSettingBtn();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLineParent(UCustomRaceSubOptionSettingLine* LineParent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsButtonSelected(bool IsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void FireLoopAnimation(EUnionUIButtonLoopAnim InLoopAnim);
    
};

