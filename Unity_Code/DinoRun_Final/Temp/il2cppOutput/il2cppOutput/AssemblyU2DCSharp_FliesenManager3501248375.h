#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FliesenManager
struct  FliesenManager_t3501248375  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] FliesenManager::fliesen
	GameObjectU5BU5D_t3057952154* ___fliesen_2;
	// UnityEngine.Transform FliesenManager::playerTransform
	Transform_t3275118058 * ___playerTransform_3;
	// System.Single FliesenManager::spawnX
	float ___spawnX_4;
	// System.Single FliesenManager::fliesenLaenge
	float ___fliesenLaenge_5;
	// System.Int32 FliesenManager::fliesenAufBildschirm
	int32_t ___fliesenAufBildschirm_6;
	// System.Int32 FliesenManager::letzteFlieseIndex
	int32_t ___letzteFlieseIndex_7;
	// System.Single FliesenManager::sichereZone
	float ___sichereZone_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> FliesenManager::aktiveFliesen
	List_1_t1125654279 * ___aktiveFliesen_9;

public:
	inline static int32_t get_offset_of_fliesen_2() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___fliesen_2)); }
	inline GameObjectU5BU5D_t3057952154* get_fliesen_2() const { return ___fliesen_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_fliesen_2() { return &___fliesen_2; }
	inline void set_fliesen_2(GameObjectU5BU5D_t3057952154* value)
	{
		___fliesen_2 = value;
		Il2CppCodeGenWriteBarrier(&___fliesen_2, value);
	}

	inline static int32_t get_offset_of_playerTransform_3() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___playerTransform_3)); }
	inline Transform_t3275118058 * get_playerTransform_3() const { return ___playerTransform_3; }
	inline Transform_t3275118058 ** get_address_of_playerTransform_3() { return &___playerTransform_3; }
	inline void set_playerTransform_3(Transform_t3275118058 * value)
	{
		___playerTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_3, value);
	}

	inline static int32_t get_offset_of_spawnX_4() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___spawnX_4)); }
	inline float get_spawnX_4() const { return ___spawnX_4; }
	inline float* get_address_of_spawnX_4() { return &___spawnX_4; }
	inline void set_spawnX_4(float value)
	{
		___spawnX_4 = value;
	}

	inline static int32_t get_offset_of_fliesenLaenge_5() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___fliesenLaenge_5)); }
	inline float get_fliesenLaenge_5() const { return ___fliesenLaenge_5; }
	inline float* get_address_of_fliesenLaenge_5() { return &___fliesenLaenge_5; }
	inline void set_fliesenLaenge_5(float value)
	{
		___fliesenLaenge_5 = value;
	}

	inline static int32_t get_offset_of_fliesenAufBildschirm_6() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___fliesenAufBildschirm_6)); }
	inline int32_t get_fliesenAufBildschirm_6() const { return ___fliesenAufBildschirm_6; }
	inline int32_t* get_address_of_fliesenAufBildschirm_6() { return &___fliesenAufBildschirm_6; }
	inline void set_fliesenAufBildschirm_6(int32_t value)
	{
		___fliesenAufBildschirm_6 = value;
	}

	inline static int32_t get_offset_of_letzteFlieseIndex_7() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___letzteFlieseIndex_7)); }
	inline int32_t get_letzteFlieseIndex_7() const { return ___letzteFlieseIndex_7; }
	inline int32_t* get_address_of_letzteFlieseIndex_7() { return &___letzteFlieseIndex_7; }
	inline void set_letzteFlieseIndex_7(int32_t value)
	{
		___letzteFlieseIndex_7 = value;
	}

	inline static int32_t get_offset_of_sichereZone_8() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___sichereZone_8)); }
	inline float get_sichereZone_8() const { return ___sichereZone_8; }
	inline float* get_address_of_sichereZone_8() { return &___sichereZone_8; }
	inline void set_sichereZone_8(float value)
	{
		___sichereZone_8 = value;
	}

	inline static int32_t get_offset_of_aktiveFliesen_9() { return static_cast<int32_t>(offsetof(FliesenManager_t3501248375, ___aktiveFliesen_9)); }
	inline List_1_t1125654279 * get_aktiveFliesen_9() const { return ___aktiveFliesen_9; }
	inline List_1_t1125654279 ** get_address_of_aktiveFliesen_9() { return &___aktiveFliesen_9; }
	inline void set_aktiveFliesen_9(List_1_t1125654279 * value)
	{
		___aktiveFliesen_9 = value;
		Il2CppCodeGenWriteBarrier(&___aktiveFliesen_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
