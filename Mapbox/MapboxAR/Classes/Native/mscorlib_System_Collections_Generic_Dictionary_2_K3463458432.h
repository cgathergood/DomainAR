﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Data.MeshData>>
struct Dictionary_2_t979960661;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.Generic.List`1<Mapbox.Unity.MeshGeneration.Data.MeshData>>
struct  KeyCollection_t3463458432  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t979960661 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3463458432, ___dictionary_0)); }
	inline Dictionary_2_t979960661 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t979960661 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t979960661 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
