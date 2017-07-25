#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sound
struct  Sound_t826716933  : public Il2CppObject
{
public:
	// System.String Sound::name
	String_t* ___name_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t1932558630 * ___clip_1;
	// System.Single Sound::volume
	float ___volume_2;
	// System.Single Sound::pitch
	float ___pitch_3;
	// System.Boolean Sound::loop
	bool ___loop_4;
	// UnityEngine.AudioSource Sound::source
	AudioSource_t1135106623 * ___source_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_clip_1() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___clip_1)); }
	inline AudioClip_t1932558630 * get_clip_1() const { return ___clip_1; }
	inline AudioClip_t1932558630 ** get_address_of_clip_1() { return &___clip_1; }
	inline void set_clip_1(AudioClip_t1932558630 * value)
	{
		___clip_1 = value;
		Il2CppCodeGenWriteBarrier(&___clip_1, value);
	}

	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_pitch_3() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___pitch_3)); }
	inline float get_pitch_3() const { return ___pitch_3; }
	inline float* get_address_of_pitch_3() { return &___pitch_3; }
	inline void set_pitch_3(float value)
	{
		___pitch_3 = value;
	}

	inline static int32_t get_offset_of_loop_4() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___loop_4)); }
	inline bool get_loop_4() const { return ___loop_4; }
	inline bool* get_address_of_loop_4() { return &___loop_4; }
	inline void set_loop_4(bool value)
	{
		___loop_4 = value;
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(Sound_t826716933, ___source_5)); }
	inline AudioSource_t1135106623 * get_source_5() const { return ___source_5; }
	inline AudioSource_t1135106623 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(AudioSource_t1135106623 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier(&___source_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
