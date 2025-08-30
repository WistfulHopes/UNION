#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/MeshComponent.h"
#include "ProceduralMeshComponentEx.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UProceduralMeshComponentEx : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds LocalBounds;
    
public:
    UProceduralMeshComponentEx(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshSectionVisible(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMeshSection(int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMeshSections();
    
};

