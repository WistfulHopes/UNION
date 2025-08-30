#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "UnionUIButtonBase.h"
#include "CourseSwitchSettingSingle.h"
#include "EPartyRaceCourseSwitchState.h"
#include "EPartyRaceCourseSwitchTag.h"
#include "StageDataAssetTableRow.h"
#include "PartyRaceCourseIcon.generated.h"

class UDataTable;
class UPartyRaceCourseSwitch;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceCourseIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceCourseSwitch* TopParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSwitchSettingSingle Setting;
    
    UPartyRaceCourseIcon();

    UFUNCTION(BlueprintCallable)
    void UpdateSetting(const FCourseSwitchSettingSingle& InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectSoundOffCountBP(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectBP(bool bIsSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusBP(bool bIsFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNew() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPartyRaceCourseSwitchTag GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPartyRaceCourseSwitchState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetStageId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIconIndex() const;
    
    UFUNCTION(BlueprintCallable)
    FStageDataAssetTableRow GetDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckIsGuest(bool IsGuest);
    
};

