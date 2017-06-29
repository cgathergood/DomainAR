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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectManagerScript
struct  ObjectManagerScript_t789006335  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ObjectManagerScript::noClick
	int32_t ___noClick_2;
	// UnityEngine.GameObject[] ObjectManagerScript::objList
	GameObjectU5BU5D_t3057952154* ___objList_3;

public:
	inline static int32_t get_offset_of_noClick_2() { return static_cast<int32_t>(offsetof(ObjectManagerScript_t789006335, ___noClick_2)); }
	inline int32_t get_noClick_2() const { return ___noClick_2; }
	inline int32_t* get_address_of_noClick_2() { return &___noClick_2; }
	inline void set_noClick_2(int32_t value)
	{
		___noClick_2 = value;
	}

	inline static int32_t get_offset_of_objList_3() { return static_cast<int32_t>(offsetof(ObjectManagerScript_t789006335, ___objList_3)); }
	inline GameObjectU5BU5D_t3057952154* get_objList_3() const { return ___objList_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objList_3() { return &___objList_3; }
	inline void set_objList_3(GameObjectU5BU5D_t3057952154* value)
	{
		___objList_3 = value;
		Il2CppCodeGenWriteBarrier(&___objList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
