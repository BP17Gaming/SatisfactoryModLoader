#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Controller_StingerChild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Controller_StingerChild.Controller_StingerChild_C
// 0x0000 (0x0510 - 0x0510)
class AController_StingerChild_C : public ABP_EnemyController_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Controller_StingerChild.Controller_StingerChild_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif