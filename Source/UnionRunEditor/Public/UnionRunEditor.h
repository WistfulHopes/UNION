#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "AssetTypeActions/UnionBtCollisionBinaryAssetTypeActions.h"

class FUnionRunEditorModule : public IModuleInterface
{
public:
	static EAssetTypeCategories::Type UnionRunCategory;

	virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
	TSharedPtr<FUnionBtCollisionBinaryAssetTypeActions> UnionBtCollisionBinaryAssetTypeActions;
};
