// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniStaticMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FColor;
struct FStaticMaterial;
#ifdef HOUDINIENGINERUNTIME_HoudiniStaticMesh_generated_h
#error "HoudiniStaticMesh.generated.h already included, missing '#pragma once' in HoudiniStaticMesh.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniStaticMesh_generated_h

#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddStaticMaterial); \
	DECLARE_FUNCTION(execCalcBounds); \
	DECLARE_FUNCTION(execCalculateNormals); \
	DECLARE_FUNCTION(execCalculateTangents); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialIDsPerTriangle); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetNumStaticMaterials); \
	DECLARE_FUNCTION(execGetNumTriangles); \
	DECLARE_FUNCTION(execGetNumUVLayers); \
	DECLARE_FUNCTION(execGetNumVertexInstances); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetStaticMaterials); \
	DECLARE_FUNCTION(execGetTriangleIndices); \
	DECLARE_FUNCTION(execGetVertexInstanceColors); \
	DECLARE_FUNCTION(execGetVertexInstanceNormals); \
	DECLARE_FUNCTION(execGetVertexInstanceUTangents); \
	DECLARE_FUNCTION(execGetVertexInstanceUVs); \
	DECLARE_FUNCTION(execGetVertexInstanceVTangents); \
	DECLARE_FUNCTION(execGetVertexPositions); \
	DECLARE_FUNCTION(execHasColors); \
	DECLARE_FUNCTION(execHasNormals); \
	DECLARE_FUNCTION(execHasPerFaceMaterials); \
	DECLARE_FUNCTION(execHasTangents); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execOptimize); \
	DECLARE_FUNCTION(execSetHasColors); \
	DECLARE_FUNCTION(execSetHasNormals); \
	DECLARE_FUNCTION(execSetHasPerFaceMaterials); \
	DECLARE_FUNCTION(execSetHasTangents); \
	DECLARE_FUNCTION(execSetNumStaticMaterials); \
	DECLARE_FUNCTION(execSetNumUVLayers); \
	DECLARE_FUNCTION(execSetStaticMaterial); \
	DECLARE_FUNCTION(execSetTriangleMaterialID); \
	DECLARE_FUNCTION(execSetTriangleVertexColor); \
	DECLARE_FUNCTION(execSetTriangleVertexIndices); \
	DECLARE_FUNCTION(execSetTriangleVertexNormal); \
	DECLARE_FUNCTION(execSetTriangleVertexUTangent); \
	DECLARE_FUNCTION(execSetTriangleVertexUV); \
	DECLARE_FUNCTION(execSetTriangleVertexVTangent); \
	DECLARE_FUNCTION(execSetVertexPosition);


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniStaticMesh(); \
	friend struct Z_Construct_UClass_UHoudiniStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UHoudiniStaticMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniStaticMesh)


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniStaticMesh(UHoudiniStaticMesh&&); \
	UHoudiniStaticMesh(const UHoudiniStaticMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniStaticMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniStaticMesh) \
	NO_API virtual ~UHoudiniStaticMesh();


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_14_PROLOG
#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniStaticMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniStaticMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
