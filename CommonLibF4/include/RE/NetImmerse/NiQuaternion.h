#pragma once

namespace RE
{
	class NiQuaternion
	{
	public:
		void FromEulerAnglesXYZ(float a_x, float a_y, float a_z)
		{
			using func_t = decltype(&NiQuaternion::FromEulerAnglesXYZ);
			static REL::Relocation<func_t> func{ REL::ID(896501) };
			return func(this, a_x, a_y, a_z);
		}

		void ToRotation(NiMatrix3* a_out)
		{
			using func_t = decltype(&NiQuaternion::ToRotation);
			static REL::Relocation<func_t> func{ REL::Offset(0x1A27B0) };
			return func(this, a_out);
		}

		float w;  // 00
		float x;  // 04
		float y;  // 08
		float z;  // 0C
	};
	static_assert(sizeof(NiQuaternion) == 0x10);
}
