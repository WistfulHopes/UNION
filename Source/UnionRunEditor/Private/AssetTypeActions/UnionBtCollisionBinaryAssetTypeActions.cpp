#include "AssetTypeActions/UnionBtCollisionBinaryAssetTypeActions.h"
#include "UnionBtCollisionBinaryAsset.h"
#include "UnionRunEditor.h"

UClass* FUnionBtCollisionBinaryAssetTypeActions::GetSupportedClass() const
{
	return UUnionBtCollisionBinaryAsset::StaticClass();
}
 
FText FUnionBtCollisionBinaryAssetTypeActions::GetName() const
{
	return INVTEXT("Bullet Collision Binary");
}
 
FColor FUnionBtCollisionBinaryAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}
 
uint32 FUnionBtCollisionBinaryAssetTypeActions::GetCategories()
{
	return FUnionRunEditorModule::UnionRunCategory;
}
