#include "tests/bin/1994-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bb0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0; uint8_t field1[512]; uint32_t field2; uint8_t field3[420]; uint64_t field4; } alloca1;
	uint32_t* anon10;
	uint64_t anon15;
	uint32_t* anon18;
	uint32_t phi21;
	alloca1.field4 = arg0;
	struct _IO_FILE** anon3 = (struct _IO_FILE**)0x600c18;
	uint64_t anon2 = ftell(*anon3);
	alloca1.field2 = (uint32_t)anon2;
	uint8_t* anon4 = gets(&alloca1.field1[0]);
	if (anon4 != null)
	{
		uint8_t* anon20;
		do
		{
			uint64_t phi6;
			uint64_t anon7;
			uint64_t anon8;
			uint64_t phi_in5 = (uint64_t)&alloca1.field1;
			do
			{
				phi6 = phi_in5;
				anon7 = phi6 + 4;
				phi_in5 = anon7;
				uint64_t anon9 = (__zext uint64_t)*(uint32_t*)(phi6 & 0xffffffff);
				anon8 = (anon9 ^ 0x80808080) & anon9 + 4278124287;
			}
			while ((anon8 & 0x80808080) == 0);
			anon10 = (uint32_t*)0x600c2c;
			uint32_t anon11 = *anon10 + 1;
			*anon10 = anon11;
			uint16_t anon14 = (uint16_t)*(uint32_t*)(phi6 & 0xffffffff);
			uint8_t anon13 = (uint8_t)((anon14 - 257 & (anon14 ^ 0x8080) & 0x8080) == 0 ? anon8 >> 16 & 0x80 : (__zext uint64_t)(*(uint32_t*)(phi6 & 0xffffffff) + 255 & (*(uint32_t*)(phi6 & 0xffffffff) ^ 0x80) & 0x80));
			struct { uint8_t field0; bool field1; } anon12 = llvm.uadd.with.overflow.i8(anon13, anon13);
			anon15 = arg1 - 960;
			uint32_t anon17 = (uint32_t)arg1 - 944;
			uint32_t anon16 = (uint32_t)((anon14 - 257 & (anon14 ^ 0x8080) & 0x8080) == 0 ? phi6 + 6 : anon7) - 3 - (__zext uint32_t)anon12.field1 - anon17;
			*(uint32_t*)(anon15 + ((__sext int64_t)*anon10 << 2) + 128) = anon16;
			anon18 = (uint32_t*)0x600c28;
			*anon18 = anon16;
			uint64_t anon19 = ftell(*anon3);
			*(uint32_t*)(anon15 + ((__sext int64_t)anon11 << 2) + 528) = (uint32_t)anon19;
			anon20 = gets((uint8_t*)(__zext uint64_t)anon17);
		}
		while (anon20 != null);
	}
	uint32_t* anon22 = (uint32_t*)0x600c24;
	phi21 = *anon22;
	if (*anon22 < *anon18)
	{
		while (true)
		{
			uint32_t anon29;
			uint32_t phi_in23 = phi21;
			uint32_t* anon24 = (uint32_t*)0x600c30;
			*anon24 = 0;
			uint32_t phi25 = phi_in23;
			uint64_t phi26 = 0;
			if ((*anon10 >> 31 | (__zext uint32_t)(*anon10 == 0)) == 0)
			{
				alloca1.field0 = 32;
				uint32_t phi27 = 32;
				uint64_t anon28 = phi26 << 32 >> 30;
				if (phi25 < *(uint32_t*)(anon15 + anon28 + 128))
				{
					fseek(*anon3, (__sext int64_t)(phi25 + *(uint32_t*)(anon15 + anon28 + 528)), 0);
					scanf((uint8_t*)0x400884);
					phi27 = (__sext int32_t)alloca1.field0;
				}
				putchar(phi27);
				anon29 = *anon24 + 1;
				*anon24 = anon29;
			}
			putchar(10);
			uint32_t anon30 = *anon22 + 1;
			*anon22 = anon30;
			phi21 = anon30;
			phi25 = *anon22;
			phi26 = (__zext uint64_t)anon29;
			break;
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400570, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400800, (void(*)())0x400870, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c20;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196290);
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
	_init(4196403);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6009c8)(arg1 & 0xffffffff, arg2, arg3);
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
