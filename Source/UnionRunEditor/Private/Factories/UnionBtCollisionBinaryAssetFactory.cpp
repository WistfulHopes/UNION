// Fill out your copyright notice in the Description page of Project Settings.


#include "Factories/UnionBtCollisionBinaryAssetFactory.h"

#include "UnionBtCollisionBinaryAsset.h"

UUnionBtCollisionBinaryAssetFactory::UUnionBtCollisionBinaryAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UUnionBtCollisionBinaryAsset::StaticClass();
	Formats.Add(TEXT("btcol;Bullet Collision"));

	bCreateNew = false;
	bText = false;
	bEditorImport = true;
	bEditAfterNew = false;
}

bool UUnionBtCollisionBinaryAssetFactory::FactoryCanImport(const FString& Filename)
{
	const FString Extension = FPaths::GetExtension(Filename);

	if (Extension == TEXT("btcol"))
	{
		return true;
	}
	return false;
}

UObject* UUnionBtCollisionBinaryAssetFactory::FactoryCreateBinary(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn)
{
	if (BufferEnd - Buffer < 12) return nullptr;
	
	UUnionBtCollisionBinaryAsset* BtCollision = NewObject<UUnionBtCollisionBinaryAsset>(InParent, InClass, InName, Flags);
 
	auto& Parameter = BtCollision->Parameter;

	Parameter.Data.AddDefaulted(BufferEnd - Buffer);
	for (int32 i = 0; i < BufferEnd - Buffer; i++)
	{
		Parameter.Data[i] = Buffer[i];
	}
	
	Parameter.DataVersion = *(uint32_t*)&Buffer[4];
	Parameter.Hash = *(uint32_t*)&Buffer[8];
	Parameter.ChunkDataCount = *(uint32_t*)&Buffer[12];

	return BtCollision;
}
