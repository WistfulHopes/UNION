#pragma once
#include "CoreMinimal.h"
#include "CustomRaceSettingLine.h"
#include "ECustomRaceSettingLine.h"
#include "UnionUIButtonBase.h"
#include "ECustomRaceSettingLineType.h"
#include "CustomRaceSubOptionSettingLine.generated.h"

class UCustomRaceSubOptionSettingBtn;
class UUnionUIButtonsPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCustomRaceSubOptionSettingLine : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectOption, int32, SelectedIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectOption FocusSelectedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceSettingLine SettingLineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceSettingLineType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomRaceSettingLine SettingStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCustomRaceSubOptionSettingBtn*> SettingButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* SettingButtonsPanel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectOption FocusSelectedSubRaceCountEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectOption FocusSelectedSubTopPointEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCustomRaceSubOptionSettingBtn*> SubSettingButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* SubSettingButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LastIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IgnoreIndex;
    
    UCustomRaceSubOptionSettingLine();

    UFUNCTION(BlueprintCallable)
    void WhenIgnoreSetNavigation(int32 CurrentIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingButtonNum(int32 InButtonsNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLastSelectedIndex(uint8 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIgnoreIndexAndUpdate(const TArray<int32>& InIgnoreIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetExplainTextArr(TArray<FText>& OutExplainTextArr);
    
    UFUNCTION(BlueprintCallable)
    void GetButtonTextArr(TArray<FText>& OutButtonTextArr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsGuestEvent(bool IsGuest);
    
};

