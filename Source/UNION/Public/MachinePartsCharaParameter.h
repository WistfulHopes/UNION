#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MachinePartsCharaParameter.generated.h"

class UCharaMachineSelectPartsMachineType;
class UCommonPlayerNumber;
class UUnionRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachinePartsCharaParameter : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Chara_MachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineSelectPartsMachineType* WBP_CharaMachineSelect_Sub_TypeBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* WBP_CMN_PlayerNumber;
    
public:
    UMachinePartsCharaParameter();

};

