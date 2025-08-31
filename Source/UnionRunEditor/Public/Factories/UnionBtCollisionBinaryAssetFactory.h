// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "UnionBtCollisionBinaryAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UNIONRUNEDITOR_API UUnionBtCollisionBinaryAssetFactory : public UFactory
{
	GENERATED_BODY()

public:
	UUnionBtCollisionBinaryAssetFactory(const FObjectInitializer& ObjectInitializer);

	virtual bool FactoryCanImport(const FString& Filename) override;
	virtual UObject* FactoryCreateBinary(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;
};
