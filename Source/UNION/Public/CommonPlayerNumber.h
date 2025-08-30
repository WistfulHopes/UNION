#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "CommonPlayerNumber.generated.h"

class UImage;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonPlayerNumber : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Player_Number_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> BGColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MLC_ColorBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_PlayerNumber;
    
public:
    UCommonPlayerNumber();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNumberText();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIndexCustom(int32 InIndex, bool IsLock);
    
    UFUNCTION(BlueprintCallable)
    void SetBGColorInfo(int32 InIndex, bool IsGroup, bool IsLocalMulti);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBGColor(int32 InIndex) const;
    
};

