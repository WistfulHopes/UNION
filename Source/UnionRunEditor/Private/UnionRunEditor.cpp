#include "UnionRunEditor.h"

#define LOCTEXT_NAMESPACE "FUnionRunEditorModule"

EAssetTypeCategories::Type FUnionRunEditorModule::UnionRunCategory;

void FUnionRunEditorModule::StartupModule()
{
	UnionRunCategory = FAssetToolsModule::GetModule().Get().RegisterAdvancedAssetCategory("UnionRun", FText::FromString("UnionRun"));

	UnionBtCollisionBinaryAssetTypeActions = MakeShared<FUnionBtCollisionBinaryAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(UnionBtCollisionBinaryAssetTypeActions.ToSharedRef());
}

void FUnionRunEditorModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUnionRunEditorModule, UnionRunEditor)
