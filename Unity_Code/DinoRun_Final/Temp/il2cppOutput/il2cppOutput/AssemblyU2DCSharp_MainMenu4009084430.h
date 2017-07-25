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

// MainMenu
struct  MainMenu_t4009084430  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text MainMenu::highscoreText
	Text_t356221433 * ___highscoreText_2;

public:
	inline static int32_t get_offset_of_highscoreText_2() { return static_cast<int32_t>(offsetof(MainMenu_t4009084430, ___highscoreText_2)); }
	inline Text_t356221433 * get_highscoreText_2() const { return ___highscoreText_2; }
	inline Text_t356221433 ** get_address_of_highscoreText_2() { return &___highscoreText_2; }
	inline void set_highscoreText_2(Text_t356221433 * value)
	{
		___highscoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreText_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
