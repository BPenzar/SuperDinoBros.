#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeathMenu
struct  DeathMenu_t170324533  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text DeathMenu::scoreText
	Text_t356221433 * ___scoreText_2;
	// System.Boolean DeathMenu::gezeigt
	bool ___gezeigt_3;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(DeathMenu_t170324533, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_gezeigt_3() { return static_cast<int32_t>(offsetof(DeathMenu_t170324533, ___gezeigt_3)); }
	inline bool get_gezeigt_3() const { return ___gezeigt_3; }
	inline bool* get_address_of_gezeigt_3() { return &___gezeigt_3; }
	inline void set_gezeigt_3(bool value)
	{
		___gezeigt_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
