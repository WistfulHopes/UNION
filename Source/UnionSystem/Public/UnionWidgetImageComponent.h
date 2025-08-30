#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionProceduralMeshComponent.h"
#include "UnionWidgetInterface.h"
#include "UnionWidgetTransform.h"
#include "UnionWidgetImageComponent.generated.h"

class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionWidgetImageComponent : public UUnionProceduralMeshComponent, public IUnionWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionWidgetTransform _WidgetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> _ParentComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor _TintColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* _BrushImageTexture;
    
public:
    UUnionWidgetImageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& TintColorAndOpacity, bool Applying);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushImageTexture(UTexture2D* Texture, bool Applying);
    
    UFUNCTION(BlueprintCallable)
    void CreateOrUpdateMesh(bool ForceCreate);
    

    // Fix for true pure virtual functions not being implemented
};

