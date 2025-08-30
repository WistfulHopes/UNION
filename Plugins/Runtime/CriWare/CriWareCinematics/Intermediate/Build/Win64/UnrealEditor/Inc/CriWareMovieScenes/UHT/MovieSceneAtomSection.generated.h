// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneAtomSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
#ifdef CRIWAREMOVIESCENES_MovieSceneAtomSection_generated_h
#error "MovieSceneAtomSection.generated.h already included, missing '#pragma once' in MovieSceneAtomSection.h"
#endif
#define CRIWAREMOVIESCENES_MovieSceneAtomSection_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetStartOffset);


#define FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAtomSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAtomSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAtomSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareMovieScenes"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAtomSection)


#define FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneAtomSection(UMovieSceneAtomSection&&); \
	UMovieSceneAtomSection(const UMovieSceneAtomSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAtomSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAtomSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneAtomSection) \
	NO_API virtual ~UMovieSceneAtomSection();


#define FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_14_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWAREMOVIESCENES_API UClass* StaticClass<class UMovieSceneAtomSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneAtomSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
