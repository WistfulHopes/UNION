#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EStageId.h"
#include "CourseSwitchSetting.h"
#include "EPartyRaceCourseSwitchTag.h"
#include "PartyRaceCourseSwitch.generated.h"

class UDataTable;
class UPartyRaceCourseIcon;
class UPartyRaceCourseSwitchWindow;
class UStageUnlockInfoDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceCourseSwitch : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceCourseSwitchWindow* CourseSwitchWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRaceCourseSwitchTag CourseSwitchTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CurrentCursorIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSwitchSetting CourseSwitchSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSwitchSetting BackUp_CourseSwitchSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> ShippingUnreleasedStageIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageUnlockInfoDataAsset* StageUnlockInfoAsset;
    
    UPartyRaceCourseSwitch();

    UFUNCTION(BlueprintCallable)
    void UpdateCourseSwitchData(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    bool SetDecisionLastSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorIconFocusOutAll(int32 NotOutIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorIconFocus(bool bIsFocus);
    
    UFUNCTION(BlueprintCallable)
    void SelectAllIcon(bool bIsSelect);
    
    UFUNCTION(BlueprintCallable)
    void ResetFromBackUp();
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectingSameButton(bool IsSelect);
    
    UFUNCTION(BlueprintCallable)
    void Init(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorIndex();
    
    UFUNCTION(BlueprintCallable)
    UPartyRaceCourseIcon* GetCourseIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyQuitConfirmWidget();
    
    UFUNCTION(BlueprintCallable)
    void DecisionIconIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsSameSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsGuest(bool IsGuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTagImplEvent(EPartyRaceCourseSwitchTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTag(EPartyRaceCourseSwitchTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void BackupCurrentSetting();
    
};

