#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionMaterialBakeSetup.h"
#include "UnionMaterialUtility.generated.h"

class AActor;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;

UCLASS(Blueprintable)
class UNION_API UUnionMaterialUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionMaterialUtility();

    UFUNCTION(BlueprintCallable)
    static void OutputMaterialParameters(UMaterialInstance* SourceMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    static void MaterialBakeByActorByStruct(const FUnionMaterialBakeSetup Setup);
    
    UFUNCTION(BlueprintCallable)
    static void MachineBake(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetOrReuseDynamicMaterialInstance(UMaterialInterface* Material, UObject* InOuter, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void CopyMaterialParameters(UMaterialInstance* SourceMaterialInstance, UMaterialInstanceDynamic* TargetMaterialInstance, UMaterialInstanceDynamic* TargetMaterialInstancePP, float& Width, float& Height);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMidArray();
    
};

