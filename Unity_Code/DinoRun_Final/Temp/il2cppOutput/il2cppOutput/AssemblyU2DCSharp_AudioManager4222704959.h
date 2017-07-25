#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Sound[]
struct SoundU5BU5D_t1134972744;
// AudioManager
struct AudioManager_t4222704959;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t4222704959  : public MonoBehaviour_t1158329972
{
public:
	// Sound[] AudioManager::sounds
	SoundU5BU5D_t1134972744* ___sounds_2;
	// System.Boolean AudioManager::isMute
	bool ___isMute_3;

public:
	inline static int32_t get_offset_of_sounds_2() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___sounds_2)); }
	inline SoundU5BU5D_t1134972744* get_sounds_2() const { return ___sounds_2; }
	inline SoundU5BU5D_t1134972744** get_address_of_sounds_2() { return &___sounds_2; }
	inline void set_sounds_2(SoundU5BU5D_t1134972744* value)
	{
		___sounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_2, value);
	}

	inline static int32_t get_offset_of_isMute_3() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___isMute_3)); }
	inline bool get_isMute_3() const { return ___isMute_3; }
	inline bool* get_address_of_isMute_3() { return &___isMute_3; }
	inline void set_isMute_3(bool value)
	{
		___isMute_3 = value;
	}
};

struct AudioManager_t4222704959_StaticFields
{
public:
	// AudioManager AudioManager::instance
	AudioManager_t4222704959 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___instance_4)); }
	inline AudioManager_t4222704959 * get_instance_4() const { return ___instance_4; }
	inline AudioManager_t4222704959 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AudioManager_t4222704959 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
