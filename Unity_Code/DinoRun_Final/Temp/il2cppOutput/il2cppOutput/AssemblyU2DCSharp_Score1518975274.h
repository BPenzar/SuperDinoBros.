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
// DeathMenu
struct DeathMenu_t170324533;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t1518975274  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Score::score
	float ___score_2;
	// UnityEngine.UI.Text Score::scoreText
	Text_t356221433 * ___scoreText_3;
	// System.Int32 Score::schwierigkeit
	int32_t ___schwierigkeit_4;
	// System.Int32 Score::schwierigkeitMax
	int32_t ___schwierigkeitMax_5;
	// System.Int32 Score::punkteBisNaechstesLevel
	int32_t ___punkteBisNaechstesLevel_6;
	// System.Boolean Score::isDead
	bool ___isDead_7;
	// DeathMenu Score::deathMenu
	DeathMenu_t170324533 * ___deathMenu_8;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___scoreText_3)); }
	inline Text_t356221433 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t356221433 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t356221433 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}

	inline static int32_t get_offset_of_schwierigkeit_4() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___schwierigkeit_4)); }
	inline int32_t get_schwierigkeit_4() const { return ___schwierigkeit_4; }
	inline int32_t* get_address_of_schwierigkeit_4() { return &___schwierigkeit_4; }
	inline void set_schwierigkeit_4(int32_t value)
	{
		___schwierigkeit_4 = value;
	}

	inline static int32_t get_offset_of_schwierigkeitMax_5() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___schwierigkeitMax_5)); }
	inline int32_t get_schwierigkeitMax_5() const { return ___schwierigkeitMax_5; }
	inline int32_t* get_address_of_schwierigkeitMax_5() { return &___schwierigkeitMax_5; }
	inline void set_schwierigkeitMax_5(int32_t value)
	{
		___schwierigkeitMax_5 = value;
	}

	inline static int32_t get_offset_of_punkteBisNaechstesLevel_6() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___punkteBisNaechstesLevel_6)); }
	inline int32_t get_punkteBisNaechstesLevel_6() const { return ___punkteBisNaechstesLevel_6; }
	inline int32_t* get_address_of_punkteBisNaechstesLevel_6() { return &___punkteBisNaechstesLevel_6; }
	inline void set_punkteBisNaechstesLevel_6(int32_t value)
	{
		___punkteBisNaechstesLevel_6 = value;
	}

	inline static int32_t get_offset_of_isDead_7() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___isDead_7)); }
	inline bool get_isDead_7() const { return ___isDead_7; }
	inline bool* get_address_of_isDead_7() { return &___isDead_7; }
	inline void set_isDead_7(bool value)
	{
		___isDead_7 = value;
	}

	inline static int32_t get_offset_of_deathMenu_8() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___deathMenu_8)); }
	inline DeathMenu_t170324533 * get_deathMenu_8() const { return ___deathMenu_8; }
	inline DeathMenu_t170324533 ** get_address_of_deathMenu_8() { return &___deathMenu_8; }
	inline void set_deathMenu_8(DeathMenu_t170324533 * value)
	{
		___deathMenu_8 = value;
		Il2CppCodeGenWriteBarrier(&___deathMenu_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
