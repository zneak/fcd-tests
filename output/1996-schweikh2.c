#include "tests/bin/1996-schweikh2.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t* phi4;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi4 = anon5;
	uint32_t phi6 = 1;
	while (true)
	{
		uint8_t* anon12;
		uint32_t* anon13;
		uint64_t phi45;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi10 = phi4;
		if ((uint32_t)arg1 > phi6)
		{
			anon12 = (uint8_t*)0x400b54;
			uint32_t anon11 = sscanf(*(uint8_t**)((phi8 << 3) + arg2), anon12);
			anon13 = (uint32_t*)0x601300;
			*anon13 = anon11;
			phi10 = (uint64_t*)phi9;
		}
		uint64_t* anon14 = (uint64_t*)(phi9 | 8);
		if (*anon14 != 0)
		{
			uint64_t phi15 = *anon14;
			uint64_t phi_in16 = *phi10;
			uint64_t phi_in17 = *anon14;
			if (*phi10 != 0)
			{
				uint64_t anon20;
				do
				{
					uint64_t phi18 = phi_in16;
					uint64_t phi19 = phi_in17;
					phi15 = phi18;
					anon20 = (uint64_t)((__sext int128_t)phi19 % (__sext int128_t)phi18);
					phi_in16 = anon20;
					phi_in17 = phi18;
				}
				while (anon20 != 0);
			}
			uint64_t anon22 = phi15 >> 63;
			int128_t anon21 = (__sext int128_t)((anon22 ^ phi15) - anon22);
			*phi10 = (uint64_t)((__sext int128_t)*phi10 / anon21);
			*anon14 = (uint64_t)((__sext int128_t)*anon14 / anon21);
		}
		uint64_t* anon23 = (uint64_t*)0x601480;
		*anon23 = *(uint64_t*)0x601290;
		uint64_t* anon24 = (uint64_t*)0x601488;
		*anon24 = *(uint64_t*)0x601298;
		uint64_t phi_in25 = 0;
		uint64_t phi26 = 6296720;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon40;
			do
			{
				uint64_t phi27 = phi_in25;
				uint64_t* anon28 = (uint64_t*)phi26;
				uint64_t anon29 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi26 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi26 - 8);
				*anon28 = anon29;
				uint64_t* anon30 = (uint64_t*)(phi26 | 8);
				uint64_t anon31 = *(uint64_t*)(phi26 - 8) * *(uint64_t*)0x6012a8;
				*anon30 = anon31;
				if (anon31 != 0)
				{
					uint64_t phi32 = anon31;
					uint64_t phi_in33 = anon29;
					uint64_t phi_in34 = anon31;
					if (anon29 != 0)
					{
						uint64_t anon37;
						do
						{
							uint64_t phi35 = phi_in33;
							uint64_t phi36 = phi_in34;
							phi32 = phi35;
							anon37 = (uint64_t)((__sext int128_t)phi36 % (__sext int128_t)phi35);
							phi_in33 = anon37;
							phi_in34 = phi35;
						}
						while (anon37 != 0);
					}
					uint64_t anon39 = phi32 >> 63;
					int128_t anon38 = (__sext int128_t)((anon39 ^ phi32) - anon39);
					*anon28 = (uint64_t)((__sext int128_t)anon29 / anon38);
					*anon30 = (uint64_t)((__sext int128_t)anon31 / anon38);
				}
				anon40 = phi27 + 1;
				phi_in25 = anon40;
				phi26 = phi26 + 16;
			}
			while (*anon5 > anon40);
		}
		uint64_t phi41 = -1;
		uint8_t anon42 = (uint8_t)*anon5 << 1 & 0x1e;
		if (anon42 != 0)
		{
			phi41 = 4294967295 << (__zext uint64_t)anon42 & 0xffffffff;
		}
		uint64_t phi43 = *(uint64_t*)0x601298;
		uint64_t phi44 = *anon5;
		uint64_t anon46 = (phi41 << 32 ^ 0xffffffff00000000) >> 32;
		phi45 = anon46;
		if (anon46 != 255)
		{
			while (true)
			{
				uint64_t phi_in52;
				uint64_t phi53;
				uint64_t phi55;
				uint64_t phi56;
				uint64_t phi_in98;
				uint32_t phi99;
				uint64_t phi100;
				uint64_t phi101;
				uint64_t phi47 = phi43;
				uint64_t* anon48 = (uint64_t*)0x601340;
				*anon48 = *anon23;
				uint64_t* anon49 = (uint64_t*)0x601348;
				*anon49 = phi47;
				uint64_t phi50 = phi44;
				uint64_t phi51 = *anon23;
				if (((uint32_t)(phi44 >> 63) | (__zext uint32_t)(phi44 == 0)) == 0)
				{
					phi_in52 = 0;
					phi53 = 0;
					uint64_t phi54 = 0;
					phi55 = 6296704;
					phi56 = phi_in52;
					uint64_t phi57 = phi54;
					if ((phi45 & 2 | 1) == 1)
					{
						if ((phi45 & 1) == 0)
						{
							(__asm "movdqa xmm2, xmmword ptr [rdx + 0x601340]")();
							(__asm "movdqa xmm1, xmmword ptr [rdi + 0x10]")();
							(__asm "movdqa xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm2")();
							(__asm "movdqa xmm4, xmm1")();
							(__asm "pmuludq xmm3, xmm1")();
							(__asm "psrlq xmm0, 0x20")();
							(__asm "pmuludq xmm0, xmm1")();
							(__asm "psrlq xmm4, 0x20")();
							(__asm "pmuludq xmm2, xmm4")();
							(__asm "paddq xmm0, xmm2")();
							(__asm "psllq xmm0, 0x20")();
							(__asm "paddq xmm0, xmm3")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm0")();
						}
						else 
						{
							uint64_t anon59 = phi57 << 32 >> 28;
							uint64_t* anon58 = (uint64_t*)(anon59 + 6296392);
							uint64_t anon60 = *anon58 * *(uint64_t*)(phi55 + 16);
							*anon58 = anon60;
							uint64_t* anon61 = (uint64_t*)(anon59 + 6296384);
							*anon61 = *anon61 * *(uint64_t*)(phi55 + 24);
							if (anon60 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							}
						}
					}
					else 
					{
						uint32_t anon63 = (uint32_t)phi57 + 1;
						int64_t anon62 = (__sext int64_t)anon63 << 4;
						*(uint64_t*)(anon62 + 6296384) = *(uint64_t*)(phi55 + 16);
						*(uint64_t*)(anon62 + 6296392) = *(uint64_t*)(phi55 + 24);
						phi57 = (__zext uint64_t)anon63;
					}
					phi54 = phi57;
					if (*anon5 < 1)
					{
						phi47 = *anon49;
						phi50 = *anon5;
						phi51 = *anon48;
					}
					else 
					{
						uint32_t anon82;
						uint32_t phi64 = *(uint32_t*)0x601348;
						uint32_t phi65 = *(uint32_t*)0x60134c;
						uint64_t phi66 = 0;
						uint32_t phi_in67 = 0;
						uint64_t phi68 = phi45;
						uint64_t phi69 = *anon48;
						uint64_t phi70 = *anon49;
						do
						{
							uint32_t phi71 = phi_in67;
							uint64_t phi72 = phi70;
							uint32_t phi73 = phi64;
							uint32_t phi74 = phi65;
							uint64_t phi75 = phi66;
							uint64_t phi76 = phi69;
							if ((phi68 & 2 | 1) != 1)
							{
								uint32_t anon79 = (uint32_t)phi66 + 1;
								int64_t anon78 = (__sext int64_t)anon79 << 4;
								uint64_t anon80 = (__zext uint64_t)phi65 << 32 | (__zext uint64_t)phi64;
								uint64_t anon77 = ((phi68 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon78 + 6296384) * anon80 + phi69 * *(uint64_t*)(anon78 + 6296392);
								*anon48 = anon77;
								uint64_t anon81 = anon80 * *(uint64_t*)(anon78 + 6296392);
								*anon49 = anon81;
								phi73 = (uint32_t)anon81;
								phi74 = (uint32_t)(anon81 >> 32);
								phi75 = (__zext uint64_t)anon79;
								phi76 = anon77;
								phi72 = anon81;
							}
							phi47 = phi72;
							phi50 = *anon5 & 0xffffffff;
							phi51 = phi76;
							phi64 = phi73;
							phi65 = phi74;
							phi66 = phi75;
							anon82 = phi71 + 1;
							phi_in67 = anon82;
							phi68 = phi68 >> 2;
							phi69 = phi76;
							phi70 = phi47;
						}
						while (anon82 != (uint32_t)*anon5);
					}
				}
				uint64_t phi83 = 0;
				uint64_t phi84 = 0;
				uint64_t phi85 = phi51;
				if (phi47 != 0)
				{
					uint64_t phi86 = phi47;
					uint64_t phi_in87 = phi51;
					uint64_t phi_in88 = phi47;
					if (phi51 != 0)
					{
						uint64_t anon91;
						do
						{
							uint64_t phi89 = phi_in87;
							uint64_t phi90 = phi_in88;
							phi86 = phi89;
							anon91 = (uint64_t)((__sext int128_t)phi90 % (__sext int128_t)phi89);
							phi_in87 = anon91;
							phi_in88 = phi89;
						}
						while (anon91 != 0);
					}
					uint64_t anon94 = phi86 >> 63;
					int128_t anon93 = (__sext int128_t)((anon94 ^ phi86) - anon94);
					uint64_t anon92 = (uint64_t)((__sext int128_t)phi51 / anon93);
					*anon48 = anon92;
					uint64_t anon95 = (uint64_t)((__sext int128_t)phi47 / anon93);
					*anon49 = anon95;
					phi83 = anon95;
					phi84 = anon95 & 0xffffffff00000000;
					phi85 = anon92;
				}
				uint64_t anon96 = phi84 | phi83 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi85 && *(uint64_t*)0x6012b8 == anon96)
				{
					uint8_t* anon103;
					uint64_t phi97 = 0;
					phi_in98 = 0;
					phi99 = 1;
					phi100 = 6296704;
					if ((((uint32_t)(phi50 >> 63) ^ 1) & (__zext uint32_t)(phi50 != 0)) != 0)
					{
						phi101 = phi_in98;
						anon103 = (uint8_t*)0x400b58;
						uint32_t anon102 = printf(*(uint64_t*)(phi100 | 8) == 1 ? anon103 : anon12);
						*anon13 = anon102;
						uint32_t anon104 = printf((uint8_t*)0x400b5c);
						*anon13 = anon104;
						phi97 = (__sext int64_t)phi99;
					}
					uint32_t anon105 = printf(*(uint64_t*)((phi97 << 4) + 6296712) == 1 ? anon103 : anon12);
					*anon13 = anon105;
					uint32_t anon106 = printf((uint8_t*)0x400b61);
					*anon13 = anon106;
					uint32_t anon107 = printf(*anon49 == 1 ? anon103 : anon12);
					*anon13 = anon107;
					uint32_t anon108 = printf((uint8_t*)0x400b65);
					*anon13 = anon108;
				}
				if (phi45 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi85 && *(uint64_t*)0x6012b8 == anon96 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi85 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon96 && *(uint64_t*)0x6012b0 == phi85))
				{
					phi43 = *anon24;
					phi44 = *anon5;
					phi45 = phi45 - 1;
				}
				uint64_t anon109 = (phi101 | (__zext uint64_t)phi99) + 1;
				phi_in98 = anon109 & 0xffffffff00000000;
				phi99 = (uint32_t)anon109;
				phi100 = phi100 + 16;
				uint64_t anon110 = (phi53 | phi56 & 0xffffffff) + 1;
				phi_in52 = anon110;
				phi53 = anon110 & 0xffffffff00000000;
				phi55 = phi55 + 16;
				phi45 = phi45 >> 2;
				break;
			}
		}
		break;
		uint64_t anon111 = (phi7 | phi8 & 0xffffffff) + 1;
		phi_in1 = anon111 & 0xffffffff00000000;
		phi_in2 = anon111;
		uint64_t anon112 = phi9 + 16;
		phi_in3 = anon112;
		phi4 = (uint64_t*)anon112;
		phi6 = (uint32_t)anon111;
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400450, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ad0, (void(*)())0x400b40, (void(*)())arg2, *(uint8_t**)anon1);
	__builtin_trap();
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
	uint8_t* anon1 = (uint8_t*)0x6012c0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4197010);
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
	_init(4197123);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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
