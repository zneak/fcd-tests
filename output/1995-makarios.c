#include "tests/bin/1995-makarios.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600980 != 0)
	{
		__gmon_start__(4195261);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x6009b0);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in1;
	uint32_t phi_in11;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint32_t phi_in9;
		uint32_t phi_in10;
		uint32_t anon12;
		uint32_t phi15;
		uint32_t phi_in16;
		uint32_t phi_in17;
		uint64_t phi_in18;
		uint64_t phi_in19;
		uint64_t anon20;
		uint32_t phi_in21;
		uint32_t phi_in22;
		uint32_t phi_in23;
		uint32_t phi_in24;
		uint32_t phi25;
		uint32_t phi26;
		uint64_t phi27;
		uint64_t phi28;
		uint32_t phi29;
		uint32_t phi30;
		uint32_t phi31;
		uint32_t phi32;
		uint64_t phi_in33;
		uint64_t phi_in34;
		uint32_t phi_in35;
		int64_t anon39;
		int64_t anon40;
		uint64_t anon41;
		uint64_t anon42;
		uint32_t anon44;
		uint32_t anon45;
		uint64_t phi_in48;
		uint64_t phi_in49;
		uint32_t phi_in50;
		uint32_t phi_in51;
		uint32_t phi_in52;
		uint64_t phi53;
		uint64_t phi54;
		uint32_t phi56;
		uint32_t phi57;
		uint32_t phi_in58;
		uint32_t phi_in59;
		uint32_t anon61;
		uint32_t anon62;
		uint32_t phi63;
		uint32_t phi64;
		if (dispatch5 == 0)
		{
			uint32_t phi6 = phi_in1;
			uint32_t phi7 = phi_in3;
			uint64_t phi8 = phi_in4;
			phi_in9 = phi6;
			phi_in10 = phi7;
			anon12 = (uint32_t)phi8 + 1;
			phi_in11 = anon12;
			if (anon12 == 0)
			{
				break;
			}
		}
		if (dispatch5 == 2 || anon12 != 0 && dispatch5 == 0)
		{
			uint32_t phi13 = phi_in9;
			uint32_t phi14 = phi_in10;
			phi15 = phi_in11;
			phi_in16 = phi13;
			phi_in17 = phi14;
			phi_in18 = 0;
			anon20 = (__zext uint64_t)phi15;
			phi_in19 = anon20;
			phi_in21 = phi15;
			phi_in22 = phi15;
			phi_in23 = phi15;
			phi_in24 = 0;
		}
		if (dispatch5 == 1 || dispatch5 == 2 || anon12 != 0 && dispatch5 == 0)
		{
			phi25 = phi_in16;
			phi26 = phi_in17;
			phi27 = phi_in18;
			phi28 = phi_in19;
			phi29 = phi_in21;
			phi30 = phi_in22;
			phi31 = phi_in23;
			phi32 = phi_in24;
			phi_in33 = phi27;
			phi_in34 = phi28;
			phi_in35 = phi31;
		}
		if (dispatch5 == 3 || dispatch5 == 1 && phi31 > phi32 || dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && dispatch5 == 0 && phi31 > phi32)
		{
			uint64_t phi36 = phi_in33;
			uint64_t phi37 = phi_in34;
			uint32_t phi38 = phi_in35;
			anon40 = (__sext int64_t)phi38 >> 60;
			anon41 = phi36 << 3;
			anon39 = (anon40 + phi37 & 7) - (anon40 & 7) + anon41 & 0xffffffff;
			phi_in33 = anon39;
			anon44 = (uint32_t)phi37;
			uint64_t anon43 = (anon44 > 4294967295 ? phi37 : phi37 + 7) << 32 >> 35;
			anon42 = anon43 & 0xffffffff;
			phi_in34 = anon42;
			anon45 = (uint32_t)anon43;
			phi_in35 = anon45;
			dispatch5 = 3;
		}
		uint32_t anon47 = (uint32_t)anon40;
		uint32_t anon46 = (anon47 + anon44 & 7) - (anon47 & 7) + (uint32_t)anon41;
		if (anon45 <= anon46 && (dispatch5 == 3 || dispatch5 == 1 && phi31 > phi32 || dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && dispatch5 == 0 && phi31 > phi32))
		{
			phi_in48 = (__zext uint64_t)anon46;
			phi_in49 = anon42;
			phi_in50 = phi15;
			phi_in51 = phi15;
			phi_in52 = (__zext uint32_t)(anon45 == anon46) | (__zext uint32_t)((uint32_t)((anon46 > 4294967295 ? anon39 : (__zext uint64_t)(anon46 + 7)) << 32 >> 35) == anon45);
		}
		if (phi31 <= phi32 && (dispatch5 == 1 || dispatch5 == 2 || anon12 != 0 && dispatch5 == 0))
		{
			phi_in48 = phi27;
			phi_in49 = phi28;
			phi_in50 = phi29;
			phi_in51 = phi30;
			phi_in52 = phi25 << 8 | phi26 & 0xff;
		}
		if (phi31 <= phi32 && dispatch5 == 1 || phi31 <= phi32 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && dispatch5 == 0 || anon45 <= anon46 && dispatch5 == 3 || anon45 <= anon46 && dispatch5 == 1 && phi31 > phi32 || anon45 <= anon46 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon45 <= anon46 && dispatch5 == 0 && phi31 > phi32)
		{
			phi53 = phi_in48;
			phi54 = phi_in49;
			uint32_t phi55 = phi_in50;
			phi56 = phi_in51;
			phi57 = phi_in52;
			phi_in58 = phi55;
			phi_in59 = phi56;
		}
		uint32_t anon60 = phi57 + 1;
		if (anon60 == phi56 && (phi31 <= phi32 && dispatch5 == 1 || phi31 <= phi32 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && dispatch5 == 0 || anon45 <= anon46 && dispatch5 == 3 || anon45 <= anon46 && dispatch5 == 1 && phi31 > phi32 || anon45 <= anon46 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon45 <= anon46 && dispatch5 == 0 && phi31 > phi32))
		{
			anon61 = printf((uint8_t*)0x400644);
			anon62 = anon60 >> 8;
			phi_in1 = anon62;
			phi_in3 = phi56;
			phi_in4 = anon20;
			phi_in58 = phi15;
			phi_in59 = phi15;
			dispatch5 = 0;
		}
		if (phi31 <= phi32 && anon60 != phi56 && dispatch5 == 1 || phi31 <= phi32 && anon60 != phi56 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && anon60 != phi56 && dispatch5 == 0 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 3 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 1 && phi31 > phi32 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon45 <= anon46 && anon60 != phi56 && dispatch5 == 0 && phi31 > phi32 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 1 && anon60 == phi56 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 2 && anon60 == phi56 || anon12 != 0 && phi31 <= phi32 && anon61 != 0 && dispatch5 == 0 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 3 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 1 && phi31 > phi32 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 2 && phi31 > phi32 && anon60 == phi56 || anon12 != 0 && anon45 <= anon46 && anon61 != 0 && dispatch5 == 0 && phi31 > phi32 && anon60 == phi56)
		{
			phi63 = phi_in58;
			phi64 = phi_in59;
		}
		if ((uint32_t)((__sext int64_t)phi64 % (__sext int64_t)anon60) == 0)
		{
			if (phi31 <= phi32 && anon60 != phi56 && dispatch5 == 1 || phi31 <= phi32 && anon60 != phi56 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && anon60 != phi56 && dispatch5 == 0 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 3 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 1 && phi31 > phi32 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon45 <= anon46 && anon60 != phi56 && dispatch5 == 0 && phi31 > phi32 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 1 && anon60 == phi56 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 2 && anon60 == phi56 || anon12 != 0 && phi31 <= phi32 && anon61 != 0 && dispatch5 == 0 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 3 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 1 && phi31 > phi32 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 2 && phi31 > phi32 && anon60 == phi56 || anon12 != 0 && anon45 <= anon46 && anon61 != 0 && dispatch5 == 0 && phi31 > phi32 && anon60 == phi56)
			{
				phi_in9 = anon62;
				phi_in10 = anon60;
				uint32_t anon65 = phi63 + 1;
				phi_in11 = anon65;
				dispatch5 = 2;
				if (anon65 == 0)
				{
					break;
				}
			}
		}
		else if (phi31 <= phi32 && anon60 != phi56 && dispatch5 == 1 || phi31 <= phi32 && anon60 != phi56 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && anon60 != phi56 && dispatch5 == 0 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 3 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 1 && phi31 > phi32 || anon45 <= anon46 && anon60 != phi56 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon45 <= anon46 && anon60 != phi56 && dispatch5 == 0 && phi31 > phi32 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 1 && anon60 == phi56 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 2 && anon60 == phi56 || anon12 != 0 && phi31 <= phi32 && anon61 != 0 && dispatch5 == 0 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 3 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 1 && phi31 > phi32 && anon60 == phi56 || anon45 <= anon46 && anon61 != 0 && dispatch5 == 2 && phi31 > phi32 && anon60 == phi56 || anon12 != 0 && anon45 <= anon46 && anon61 != 0 && dispatch5 == 0 && phi31 > phi32 && anon60 == phi56)
		{
			phi_in16 = anon62;
			phi_in17 = anon60;
			phi_in18 = phi53;
			phi_in19 = phi54;
			phi_in21 = phi63;
			phi_in22 = phi64;
			phi_in23 = (uint32_t)phi54;
			phi_in24 = (uint32_t)phi53;
			dispatch5 = 1;
		}
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400410, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4005c0, (void(*)())0x400630, (void(*)())arg2, *(uint8_t**)anon1);
	llvm.trap();
}
void deregister_tm_clones(uint64_t arg0)
{
	return;
}
void register_tm_clones(uint64_t arg0)
{
	return;
}
void __do_global_dtors_aux(uint64_t arg0)
{
	uint8_t* anon1 = (uint8_t*)0x6009c8;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195714);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4195827);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600798)(arg1 & 0xffffffff, arg2, arg3);
	return;
}
void __libc_csu_fini(uint64_t arg0)
{
	return;
}
void _fini(uint64_t arg0)
{
	return;
}
