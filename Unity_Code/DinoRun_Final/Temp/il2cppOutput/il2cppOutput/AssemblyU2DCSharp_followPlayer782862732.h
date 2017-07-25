#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// followPlayer
struct  followPlayer_t782862732  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject followPlayer::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.Vector3 followPlayer::offset
	Vector3_t2243707580  ___offset_3;
	// UnityEngine.Vector3 followPlayer::zOffset
	Vector3_t2243707580  ___zOffset_4;
	// UnityEngine.Vector3 followPlayer::moveVector
	Vector3_t2243707580  ___moveVector_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(followPlayer_t782862732, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(followPlayer_t782862732, ___offset_3)); }
	inline Vector3_t2243707580  get_offset_3() const { return ___offset_3; }
	inline Vector3_t2243707580 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t2243707580  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_zOffset_4() { return static_cast<int32_t>(offsetof(followPlayer_t782862732, ___zOffset_4)); }
	inline Vector3_t2243707580  get_zOffset_4() const { return ___zOffset_4; }
	inline Vector3_t2243707580 * get_address_of_zOffset_4() { return &___zOffset_4; }
	inline void set_zOffset_4(Vector3_t2243707580  value)
	{
		___zOffset_4 = value;
	}

	inline static int32_t get_offset_of_moveVector_5() { return static_cast<int32_t>(offsetof(followPlayer_t782862732, ___moveVector_5)); }
	inline Vector3_t2243707580  get_moveVector_5() const { return ___moveVector_5; }
	inline Vector3_t2243707580 * get_address_of_moveVector_5() { return &___moveVector_5; }
	inline void set_moveVector_5(Vector3_t2243707580  value)
	{
		___moveVector_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
