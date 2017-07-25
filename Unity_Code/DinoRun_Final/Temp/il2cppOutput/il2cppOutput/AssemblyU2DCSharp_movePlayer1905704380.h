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

// UnityEngine.CharacterController
struct CharacterController_t4094781467;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// movePlayer
struct  movePlayer_t1905704380  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.CharacterController movePlayer::controller
	CharacterController_t4094781467 * ___controller_2;
	// System.Single movePlayer::speed
	float ___speed_3;
	// UnityEngine.Vector3 movePlayer::moveVector
	Vector3_t2243707580  ___moveVector_4;
	// System.Single movePlayer::standardgeschwindigkeit
	float ___standardgeschwindigkeit_5;
	// System.Single movePlayer::vertivalVelocity
	float ___vertivalVelocity_6;
	// System.Single movePlayer::gravity
	float ___gravity_7;
	// System.Boolean movePlayer::isDead
	bool ___isDead_8;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___controller_2)); }
	inline CharacterController_t4094781467 * get_controller_2() const { return ___controller_2; }
	inline CharacterController_t4094781467 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(CharacterController_t4094781467 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___controller_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_moveVector_4() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___moveVector_4)); }
	inline Vector3_t2243707580  get_moveVector_4() const { return ___moveVector_4; }
	inline Vector3_t2243707580 * get_address_of_moveVector_4() { return &___moveVector_4; }
	inline void set_moveVector_4(Vector3_t2243707580  value)
	{
		___moveVector_4 = value;
	}

	inline static int32_t get_offset_of_standardgeschwindigkeit_5() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___standardgeschwindigkeit_5)); }
	inline float get_standardgeschwindigkeit_5() const { return ___standardgeschwindigkeit_5; }
	inline float* get_address_of_standardgeschwindigkeit_5() { return &___standardgeschwindigkeit_5; }
	inline void set_standardgeschwindigkeit_5(float value)
	{
		___standardgeschwindigkeit_5 = value;
	}

	inline static int32_t get_offset_of_vertivalVelocity_6() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___vertivalVelocity_6)); }
	inline float get_vertivalVelocity_6() const { return ___vertivalVelocity_6; }
	inline float* get_address_of_vertivalVelocity_6() { return &___vertivalVelocity_6; }
	inline void set_vertivalVelocity_6(float value)
	{
		___vertivalVelocity_6 = value;
	}

	inline static int32_t get_offset_of_gravity_7() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___gravity_7)); }
	inline float get_gravity_7() const { return ___gravity_7; }
	inline float* get_address_of_gravity_7() { return &___gravity_7; }
	inline void set_gravity_7(float value)
	{
		___gravity_7 = value;
	}

	inline static int32_t get_offset_of_isDead_8() { return static_cast<int32_t>(offsetof(movePlayer_t1905704380, ___isDead_8)); }
	inline bool get_isDead_8() const { return ___isDead_8; }
	inline bool* get_address_of_isDead_8() { return &___isDead_8; }
	inline void set_isDead_8(bool value)
	{
		___isDead_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
