#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EItemId.h"
#include "EDomainIndex.h"
#include "EDomainNumber.h"
#include "EMinimapIconType.h"
#include "MinimapIconData.h"
#include "MinimapIconInfoRow.h"
#include "UnionRaceMinimap.generated.h"

class AActor;
class UObject;
class UOverlay;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceMinimap : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MainOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainIndex CurrentDomainIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber CurrentDomainNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* IconsRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapIconData> RacerIconDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> IconBaseTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinimapIconInfoRow> CharaIconInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapBaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapCourseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapCourseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinimapCourseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimapInited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMirrorCourse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, uint8> CourseMapActor_IconMap;
    
    UUnionRaceMinimap();

    UFUNCTION(BlueprintCallable)
    void UpdateMinimap(float InDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetRival(int32 RacerIndex, bool IsRival, bool IsPowerRival);
    
    UFUNCTION(BlueprintCallable)
    void SetReaderFlag(int32 RacerIndex, const bool& InIsReader);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerIconVisibility(int32 RacerIndex, ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerCount(int32 NewRacerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionAndZOrder(int32 RacerIndex, const FVector& InPosition, const uint8& InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(int32 RacerIndex, const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIndex(int32 RacerIndex, int32 PlayerIndex, bool IsPlayer, bool IsLocalMulti);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapIconType(const int32& RacerIndex, const EMinimapIconType& InMinimapIconType);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapIconItem(const int32& RacerIndex, const EItemId& InItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupIndex(int32 RacerIndex, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDriverId(int32 RacerIndex, int32 DriverId);
    
    UFUNCTION(BlueprintCallable)
    void SetDomainNumber(int32 InDomainNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetDomainIndex(int32 InDomainIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCourseSetting(const TSoftObjectPtr<UObject>& CourseTexture, float InOrthoRate, float InAngle, const FVector& InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetCourseMapCharaSpin(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCourseMapActor(AActor* InAttackItem);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRaceData();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMinimap(UTextureRenderTarget2D* InRenderTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetGroupColor(int32 GouupIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddCourseMapActor(AActor* InAttackItem, EItemId InItemId);
    
};

