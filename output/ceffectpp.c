#include "tests/bin/ceffectpp.h"

void _store_path(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi7;
	uint8_t* anon2 = (uint8_t*)arg2;
	uint64_t anon1 = _strlen(anon2);
	uint8_t* anon3 = (uint8_t*)(arg1 - 64 - (anon1 + 15 & 0xfffffffffffffff0));
	_strcpy(anon3, anon2);
	uint8_t* anon4 = _strrchr(anon3, 46);
	*anon4 = 0;
	uint8_t* anon5 = _strrchr(anon3, 47);
	uint64_t anon6 = _table_find(4294970183, *(uint64_t*)0x1000020c0, (uint64_t)anon5 + 1, 1);
	uint64_t* anon8 = (uint64_t*)(anon6 + 8);
	phi7 = *anon8;
	if (*anon8 == 0)
	{
		uint8_t* anon9 = _calloc(3, 8);
		uint64_t anon10 = (uint64_t)anon9;
		*anon8 = anon10;
		phi7 = anon10;
	}
	*(uint64_t*)(phi7 + (arg3 << 32 >> 29)) = arg2;
	return;
}
void _process_line(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint8_t* anon2 = (uint8_t*)arg1;
	uint8_t* anon1 = _strstr(anon2, (uint8_t*)0x100001c00);
	if (anon1 != null)
	{
		*anon1 = 0;
	}
	uint8_t* anon3 = _strstr(anon2, (uint8_t*)0x100001c03);
	if (anon3 != null)
	{
		*anon3 = 0;
	}
	uint8_t* anon5 = (uint8_t*)0x100001c06;
	uint8_t* anon4 = _strtok(anon2, anon5);
	if (anon4 != null)
	{
		struct x86_regs* anon6 = (struct x86_regs*)anon4;
		_strcmp.47(anon6);
		uint64_t* phi7 = (uint64_t*)0x1000020c8;
		uint64_t anon9 = (uint64_t)anon4;
		uint32_t anon8 = (uint32_t)anon9;
		if (anon8 != 0)
		{
			_strcmp.47(anon6);
			phi7 = (uint64_t*)0x1000020d0;
		}
		if ((anon8 != 0 && (uint32_t)(anon9 | arg2) == 0 || anon8 == 0) && *phi7 != 0)
		{
			_strtok(null, anon5);
			uint8_t* anon10 = _strtok(null, anon5);
			if (anon10 != null)
			{
				uint64_t phi19;
				uint64_t* anon20;
				uint64_t anon21;
				uint32_t anon22;
				uint64_t phi_in11 = 0;
				uint64_t phi_in12 = (uint64_t)anon10;
				uint32_t phi13 = 0;
				uint8_t phi14 = *anon10;
				if (*anon10 != 0)
				{
					uint64_t anon17;
					do
					{
						uint64_t phi15 = phi_in12;
						uint32_t anon16 = phi13 * 31 + (__zext uint32_t)phi14;
						phi_in11 = (__zext uint64_t)anon16;
						anon17 = phi15 + 1;
						phi_in12 = anon17;
						phi13 = anon16;
						phi14 = *(uint8_t*)anon17;
					}
					while (*(uint8_t*)anon17 != 0);
				}
				do
				{
					uint64_t phi18 = phi_in11;
					anon20 = (uint64_t*)(*phi7 + 8);
					anon21 = phi18 % (__zext uint64_t)*(uint32_t*)(*phi7 + 4) << 3;
					phi19 = *(uint64_t*)(*anon20 + anon21);
					if (*(uint64_t*)(*anon20 + anon21) != 0)
					{
						_strcmp.47((struct x86_regs*)anon10);
						anon22 = (uint32_t)*anon20;
						if (anon22 == 0)
						{
							break;
						}
						else 
						{
							phi19 = *(uint64_t*)(phi19 + 16);
						}
					}
				}
				while (!(*(uint64_t*)(*anon20 + anon21) == 0 || *(uint64_t*)(*anon20 + anon21) != 0 && anon22 != 0 && *(uint64_t*)(phi19 + 16) == 0));
				uint8_t* anon23 = _strdup(anon10);
				uint8_t* anon24 = _malloc(24);
				*(uint64_t*)anon24 = (uint64_t)anon23;
				uint64_t anon25 = (uint64_t)anon24;
				*(uint64_t*)(anon25 + 8) = 0;
				*(uint64_t*)(anon25 + 16) = *(uint64_t*)(*anon20 + anon21);
				*(uint64_t*)(*anon20 + anon21) = anon25;
				uint32_t* anon26 = (uint32_t*)*phi7;
				*anon26 = *anon26 + 1;
			}
		}
	}
	return;
}
void _type_from_ext(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi5;
	uint64_t phi_in6;
	uint64_t phi_in7;
	uint64_t* phi8;
	uint64_t phi10;
	uint64_t phi_in1 = 4294975648;
	uint64_t phi_in2 = 1;
	uint64_t* phi3 = (uint64_t*)0x1000020a0;
	do
	{
		uint64_t phi4 = phi_in1;
		phi5 = phi_in2;
		_strcmp.47(*(struct x86_regs**)phi3);
		phi_in6 = 1;
		phi_in7 = 4294975664;
		phi8 = (uint64_t*)0x1000020b0;
		if (phi5 < 2)
		{
			uint64_t anon9 = phi4 + 8;
			phi_in1 = anon9;
			phi_in2 = phi5 + 1;
			phi3 = (uint64_t*)anon9;
		}
	}
	while (phi5 < 2);
	do
	{
		uint64_t phi_in12;
		phi10 = phi_in6;
		uint64_t phi11 = phi_in12;
		uint64_t phi13 = phi_in7;
		_strcmp.47(*(struct x86_regs**)phi8);
		if (phi10 <= 1)
		{
			phi_in6 = phi10 + 1;
			phi_in12 = phi11 & 0xffffffffffffff00 | 1;
			uint64_t anon14 = phi13 + 8;
			phi_in7 = anon14;
			phi8 = (uint64_t*)anon14;
		}
	}
	while (phi10 <= 1);
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; struct __sFILE* field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi8;
	uint64_t phi9;
	uint24_t phi10;
	uint8_t phi11;
	uint64_t phi14;
	uint32_t* anon15;
	uint64_t anon55;
	uint64_t anon81;
	uint8_t* anon86;
	uint8_t* anon87;
	alloca1.field13 = arg0;
	alloca1.field5 = arg3;
	uint32_t* anon2 = (uint32_t*)&alloca1.field8;
	uint32_t anon3 = (uint32_t)arg2;
	*anon2 = anon3;
	uint64_t** anon4 = (uint64_t**)0x100002010;
	alloca1.field11 = **anon4;
	uint64_t anon5 = _table_new(4294970704, 17);
	*(uint32_t*)0x1000020c8 = (uint32_t)anon5;
	*(uint32_t*)0x1000020cc = (uint32_t)(anon5 >> 32);
	uint64_t anon6 = _table_new(4294970721, 17);
	*(uint32_t*)0x1000020d0 = (uint32_t)anon6;
	*(uint32_t*)0x1000020d4 = (uint32_t)(anon6 >> 32);
	uint64_t anon7 = _table_new(4294970738, 17);
	*(uint32_t*)0x1000020c0 = (uint32_t)anon7;
	*(uint32_t*)0x1000020c4 = (uint32_t)(anon7 >> 32);
	if (anon3 < 2)
	{
		*(uint32_t*)(arg1 - 340) = 0;
		phi8 = (uint64_t)&alloca1.field9;
		phi9 = 0;
	}
	else 
	{
		alloca1.field7 = 0;
		phi10 = 0;
		phi11 = 0;
		uint64_t phi_in12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		phi14 = 1;
		uint64_t anon16 = arg1 - 328;
		anon15 = (uint32_t*)anon16;
		*anon15 = 0;
		uint64_t phi17 = phi_in18;
		uint64_t phi19 = phi_in20;
		uint64_t anon22 = phi14 << 3;
		struct x86_regs* anon21 = (struct x86_regs*)*(uint64_t*)(phi13 + anon22);
		_strcmp.47(anon21);
		uint24_t phi23 = phi10;
		uint64_t phi24 = phi_in12;
		phi13 = phi13;
		uint64_t phi25 = phi17 & 0xff | 0x100;
		uint64_t phi26 = phi19;
		uint8_t phi27 = 1;
		if (((__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11) != 0)
		{
			_strcmp.47(anon21);
			uint8_t* anon29 = (uint8_t*)*(uint64_t*)(phi13 + anon22);
			uint8_t* anon28 = _strrchr(anon29, 46);
			uint24_t phi30 = (uint24_t)((uint32_t)(uint64_t)anon28 >> 8);
			uint64_t phi31 = phi13;
			if (anon28 != null)
			{
				struct __sFILE* anon32 = _fopen(anon29, (uint8_t*)0x100001c1c);
				uint32_t anon34 = (uint32_t)(uint64_t)anon32;
				uint24_t anon33 = (uint24_t)(anon34 >> 8);
				phi30 = anon33;
				phi31 = phi13;
				if (anon32 != null)
				{
					uint64_t phi39;
					uint32_t phi40;
					uint64_t anon51;
					uint24_t phi57;
					alloca1.field4 = anon32;
					uint64_t phi_in35 = 4294975648;
					uint64_t phi_in36 = 1;
					uint64_t* phi37 = (uint64_t*)0x1000020a0;
					do
					{
						uint64_t phi38 = phi_in35;
						phi39 = phi_in36;
						_strcmp.47(*(struct x86_regs**)phi37);
						phi40 = anon34;
						if (phi39 <= 1)
						{
							phi40 = 0;
							uint64_t anon41 = phi38 + 8;
							phi_in35 = anon41;
							phi_in36 = phi39 + 1;
							phi37 = (uint64_t*)anon41;
							if (anon34 == 0)
							{
								break;
							}
						}
					}
					while (phi39 <= 1);
					uint64_t phi42 = 0;
					uint64_t phi43 = phi19;
					uint64_t phi_in44 = 1;
					uint64_t phi_in45 = phi19;
					uint64_t phi_in46 = 4294975664;
					uint64_t* phi47 = (uint64_t*)0x1000020b0;
					if (phi40 != 0)
					{
						uint64_t phi48;
						do
						{
							phi48 = phi_in44;
							uint64_t phi49 = phi_in45;
							uint64_t phi50 = phi_in46;
							_strcmp.47(*(struct x86_regs**)phi47);
							if (phi48 <= 1)
							{
								phi_in44 = phi48 + 1;
								uint8_t anon52 = (__zext uint8_t)(anon34 == 0) ^ 1;
								anon51 = phi49 & 0xffffffffffffff00 | (__zext uint64_t)anon52;
								phi_in45 = anon51;
								uint64_t anon53 = phi50 + 8;
								phi_in46 = anon53;
								phi47 = (uint64_t*)anon53;
								if (anon52 == 0)
								{
									break;
								}
							}
						}
						while (phi48 <= 1);
						phi42 = 2;
						phi43 = anon51;
					}
					if (phi40 != 0 && anon34 == 0 || phi40 == 0)
					{
						uint8_t* anon56;
						uint64_t phi_in54 = phi43;
						anon55 = arg1 - 400;
						_store_path(4294971047, anon55, *(uint64_t*)(alloca1.field5 + anon22), phi42);
						do
						{
							anon56 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
							phi57 = (uint24_t)((uint32_t)(uint64_t)anon56 >> 8);
							phi19 = phi_in54;
							if (anon56 != null)
							{
								_process_line(4294971083, (uint64_t)&alloca1.field10, phi42);
							}
						}
						while (anon56 != null);
					}
					if (anon34 != 0 && phi40 != 0)
					{
						_strcmp.47((struct x86_regs*)0x100001cd8);
						phi57 = anon33;
						phi19 = anon51;
					}
					phi30 = phi57;
					phi31 = alloca1.field5;
				}
			}
			phi23 = phi30;
			uint64_t phi_in58 = phi31;
			uint64_t phi_in59 = phi19;
			phi24 = (__zext uint64_t)*anon2;
			phi13 = phi_in58;
			phi25 = (__zext uint64_t)*anon15;
			phi26 = phi_in59;
			phi27 = (uint8_t)(*anon15 >> 8);
		}
		phi10 = phi23;
		phi_in12 = phi24;
		uint64_t phi_in18 = phi25;
		uint64_t phi_in20 = phi26;
		phi11 = phi27;
		phi8 = anon16;
		phi9 = phi_in18;
	}
	uint64_t* anon61 = (uint64_t*)0x1000020c8;
	uint64_t anon60 = _table_count(4294971193, *anon61);
	alloca1.field5 = anon55;
	uint64_t* anon62 = (uint64_t*)phi8;
	uint64_t anon63 = anon60 & 0xffffffff;
	*anon62 = anon63;
	uint64_t* anon64 = (uint64_t*)(arg1 - 360);
	uint64_t anon65 = anon55 - ((anon63 << 3) + 15 & 0xffffffff0);
	*anon64 = anon65;
	uint64_t* anon67 = (uint64_t*)0x1000020d0;
	uint64_t anon66 = _table_count(4294971258, *anon67);
	uint64_t anon68 = anon66 & 0xffffffff;
	alloca1.field8 = anon68;
	uint64_t anon69 = anon65 - ((anon68 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon69;
	uint64_t* anon71 = (uint64_t*)0x1000020c0;
	uint64_t anon70 = _table_count(4294971306, *anon71);
	alloca1.field0 = (uint32_t)anon70;
	uint64_t anon72 = anon70 & 0xffffffff;
	alloca1.field1 = anon72;
	uint64_t anon73 = _table_count(4294971353, *anon71);
	alloca1.field2 = anon73 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon61);
	_table_dump_keys(4294971413, *anon67);
	_table_dump_keys(4294971428, *anon71);
	uint32_t(* anon74)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon65, *anon62, 8, anon74);
	_qsort((uint8_t*)anon69, alloca1.field8, 8, anon74);
	uint64_t anon75 = anon69 - ((anon72 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon75, alloca1.field1, 8, anon74);
	uint64_t anon76 = _table_count(4294971516, *anon71);
	uint32_t anon77 = (uint32_t)anon76;
	if ((anon77 >> 31 | (__zext uint32_t)(anon77 == 0)) == 0)
	{
		uint64_t phi_in78;
		uint64_t phi80;
		uint64_t phi82;
		uint64_t anon79 = anon76 << 32 >> 32;
		phi_in78 = anon79 + 1;
		anon81 = anon75 - ((anon73 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi80 = anon81 + anon79 * 24 - 8;
		do
		{
			phi82 = phi_in78;
			uint64_t anon83 = _table_find(4294971555, *anon71, *(uint64_t*)(anon75 + (phi82 << 3) - 16), 0);
			uint64_t anon84 = anon83 + 8;
			*(uint64_t*)(phi80 - 16) = **(uint64_t**)anon84;
			uint64_t* anon85 = (uint64_t*)anon84;
			*(uint64_t*)(phi80 - 8) = *(uint64_t*)(*anon85 + 8);
			*(uint64_t*)phi80 = *(uint64_t*)(*anon85 + 16);
			phi_in78 = phi82 - 1;
			phi80 = phi80 - 24;
		}
		while (phi82 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon86 = (uint8_t*)0x100001c53;
		_printf(anon86);
		_puts((uint8_t*)0x100001d30);
		anon87 = (uint8_t*)0x100001d60;
		_puts(anon87);
		_print_effect_definition(4294971695, *anon64, *anon62 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon75, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon86);
		_puts(anon87);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon81, alloca1.field2);
		_print_uniform_strings(4294971877, *anon64, *anon62);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon61, 0);
	_table_free(4294971936, *anon67, 0);
	_table_free(4294971955, *anon71, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi14 = phi14 + 1;
	*anon15 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11;
}
void _listnode_new(uint64_t arg0, uint64_t arg1)
{
	uint8_t* anon1 = _malloc(24);
	*(uint64_t*)anon1 = arg1;
	uint64_t anon2 = (uint64_t)anon1;
	*(uint64_t*)(anon2 + 16) = 0;
	*(uint64_t*)(anon2 + 8) = 0;
	return;
}
void _list_free(uint64_t arg0, uint64_t arg1)
{
	if (arg1 == 0)
	{
		return;
	}
	else 
	{
		_list_free(4294972103, *(uint64_t*)(arg1 + 16));
		_free.56(*(struct x86_regs**)arg1);
		__indirect_jump(*(uint64_t*)0x100002040);
	}
}
void _list_prepend(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg2 + 16) = arg1;
	return;
}
void _strhash(uint64_t arg0)
{
	__builtin_trap();
}
uint64_t _table_new(uint64_t arg0, uint64_t arg1)
{
	uint8_t* anon1 = _malloc(24);
	uint64_t phi2 = 0;
	if (anon1 != null)
	{
		*(uint32_t*)anon1 = 0;
		uint64_t anon3 = (uint64_t)anon1;
		*(uint32_t*)(anon3 + 4) = (uint32_t)arg1;
		uint8_t* anon4 = _calloc(arg1 << 32 >> 32, 8);
		*(uint64_t*)(anon3 + 8) = (uint64_t)anon4;
		phi2 = anon3;
		if (anon4 == null)
		{
			_free.56((struct x86_regs*)anon1);
			phi2 = 0;
		}
	}
	return phi2;
}
void _table_apply(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi2;
	uint64_t phi3;
	uint64_t phi_in4;
	uint32_t* anon5;
	uint64_t phi7;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi3 = phi2;
		phi_in4 = 0;
		anon5 = (uint32_t*)(arg1 + 4);
		if (phi2 < (__zext uint64_t)*anon5)
		{
			uint64_t anon6 = phi2 + 1;
			phi_in1 = anon6;
			phi3 = anon6;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi2 < (__zext uint64_t)*anon5);
	do
	{
		phi7 = phi_in4;
		if (phi7 != 0)
		{
			((void(*)())arg2)();
			phi3 = phi3;
			phi_in4 = *(uint64_t*)(phi7 + 16);
			if (*(uint64_t*)(phi7 + 16) == 0)
			{
				uint32_t phi11;
				uint64_t phi8 = phi3;
				uint32_t phi_in9 = (uint32_t)phi3;
				uint64_t phi_in10 = phi3 << 32 >> 29;
				do
				{
					phi11 = phi_in9;
					uint64_t phi12 = phi_in10;
					phi3 = phi8;
					phi_in4 = 0;
					if (phi11 < *anon5)
					{
						uint32_t anon14 = phi11 + 1;
						uint64_t anon13 = (__zext uint64_t)anon14;
						phi8 = anon13;
						phi_in9 = anon14;
						phi_in10 = phi12 + 8;
						phi3 = anon13;
						phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi12);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi12) != 0)
						{
							break;
						}
					}
				}
				while (phi11 < *anon5);
			}
		}
	}
	while (phi7 != 0);
	return;
}
void _table_itr(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)arg1 = arg2;
	*(uint64_t*)(arg1 + 8) = 0;
	*(uint32_t*)(arg1 + 16) = 0;
	return;
}
void _table_next(uint64_t arg0, uint64_t arg1)
{
	uint64_t* anon1 = (uint64_t*)(arg1 + 8);
	if (*anon1 != 0)
	{
		*anon1 = *(uint64_t*)(*anon1 + 16);
	}
	if (*anon1 == 0 || *anon1 != 0 && *(uint64_t*)(*anon1 + 16) == 0)
	{
		uint32_t phi_in2;
		uint32_t phi5;
		uint32_t* anon3 = (uint32_t*)(arg1 + 16);
		phi_in2 = *anon3;
		uint64_t phi_in4 = (__sext int64_t)*anon3 << 3;
		do
		{
			phi5 = phi_in2;
			uint64_t phi6 = phi_in4;
			if (phi5 < *(uint32_t*)(*(uint64_t*)arg1 + 4))
			{
				*anon1 = *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi6);
				uint32_t anon7 = phi5 + 1;
				*anon3 = anon7;
				phi_in2 = anon7;
				phi_in4 = phi6 + 8;
				if (*(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi6) != 0)
				{
					break;
				}
			}
		}
		while (phi5 < *(uint32_t*)(*(uint64_t*)arg1 + 4));
	}
	return;
}
void _table_free(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi3;
	uint64_t phi_in4;
	uint32_t* anon5;
	uint64_t phi7;
	uint64_t phi9;
	if (arg2 != 0)
	{
		uint64_t phi2;
		uint64_t phi_in1 = 0;
		do
		{
			phi2 = phi_in1;
			phi3 = phi2;
			phi_in4 = 0;
			anon5 = (uint32_t*)(arg1 + 4);
			if (phi2 < (__zext uint64_t)*anon5)
			{
				uint64_t anon6 = phi2 + 1;
				phi_in1 = anon6;
				phi3 = anon6;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
				{
					break;
				}
			}
		}
		while (phi2 < (__zext uint64_t)*anon5);
		phi7 = phi_in4;
	}
	uint64_t phi_in8 = 0;
	if (*anon5 == 0)
	{
		phi9 = arg1 + 8;
	}
	else 
	{
		uint64_t anon12;
		do
		{
			uint64_t phi10 = phi_in8;
			uint64_t anon11 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon11 + (phi10 << 3)));
			anon12 = phi10 + 1;
			phi_in8 = anon12;
			phi9 = anon11;
		}
		while (anon12 < (__zext uint64_t)*anon5);
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi7 + 8));
	phi3 = phi3;
	phi_in4 = *(uint64_t*)(phi7 + 16);
	if (*(uint64_t*)(phi7 + 16) == 0)
	{
		uint32_t phi16;
		uint64_t phi13 = phi3;
		uint32_t phi_in14 = (uint32_t)phi3;
		uint64_t phi_in15 = phi3 << 32 >> 29;
		do
		{
			phi3 = phi13;
			phi16 = phi_in14;
			uint64_t phi17 = phi_in15;
			phi_in4 = 0;
			if (phi16 < *anon5)
			{
				uint32_t anon19 = phi16 + 1;
				uint64_t anon18 = (__zext uint64_t)anon19;
				phi13 = anon18;
				phi_in14 = anon19;
				phi_in15 = phi17 + 8;
				phi3 = anon18;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi17);
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi17) != 0)
				{
					break;
				}
			}
		}
		while (phi16 < *anon5);
	}
	_free.56(*(struct x86_regs**)phi9);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi4;
	uint64_t phi10;
	uint64_t* anon11;
	uint64_t anon12;
	uint64_t phi13;
	uint32_t anon14;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = arg2;
	uint32_t phi3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon8;
		do
		{
			uint64_t phi6 = phi_in2;
			uint32_t anon7 = phi3 * 31 + (__zext uint32_t)phi4;
			phi_in1 = (__zext uint64_t)anon7;
			anon8 = phi6 + 1;
			phi_in2 = anon8;
			phi3 = anon7;
			phi4 = *(uint8_t*)anon8;
		}
		while (*(uint8_t*)anon8 != 0);
	}
	do
	{
		uint64_t phi9 = phi_in1;
		anon11 = (uint64_t*)(arg1 + 8);
		anon12 = phi9 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi10 = *(uint64_t*)(*anon11 + anon12);
		if (*(uint64_t*)(*anon11 + anon12) != 0)
		{
			_strcmp.47((struct x86_regs*)arg2);
			phi13 = phi10;
			anon14 = (uint32_t)*anon11;
			if (anon14 == 0)
			{
				break;
			}
			else 
			{
				phi10 = *(uint64_t*)(phi10 + 16);
			}
		}
	}
	while (!(*(uint64_t*)(*anon11 + anon12) == 0 || *(uint64_t*)(*anon11 + anon12) != 0 && anon14 != 0 && *(uint64_t*)(phi10 + 16) == 0));
	phi13 = 0;
	if ((uint8_t)arg3 != 0)
	{
		uint8_t* anon15 = _strdup(anon5);
		uint8_t* anon16 = _malloc(24);
		*(uint64_t*)anon16 = (uint64_t)anon15;
		uint64_t anon17 = (uint64_t)anon16;
		*(uint64_t*)(anon17 + 8) = 0;
		*(uint64_t*)(anon17 + 16) = *(uint64_t*)(*anon11 + anon12);
		*(uint64_t*)(*anon11 + anon12) = anon17;
		uint32_t* anon18 = (uint32_t*)arg1;
		*anon18 = *anon18 + 1;
		phi13 = anon17;
	}
	return phi13;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in2;
	uint64_t phi1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi_in2 = *anon3;
	if (*anon3 != 0)
	{
		while (true)
		{
			uint64_t phi7;
			uint32_t phi_in4 = phi_in2;
			uint64_t* anon5 = (uint64_t*)(arg1 + 8);
			uint64_t anon6 = phi1 << 3;
			if (*(uint64_t*)(*anon5 + (anon6 & 0x7fffffff8)) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				phi7 = *anon5 + anon6;
				if (*(uint64_t*)phi7 == 0)
				{
					_puts((uint8_t*)0x100001db1);
					phi_in4 = *anon3;
				}
			}
			phi1 = phi1 + 1;
			phi_in2 = phi_in4;
			_printf((uint8_t*)0x100001dac);
			phi7 = *(uint64_t*)phi7 + 16;
			break;
		}
	}
	return;
}
uint64_t _table_count(uint64_t arg0, uint64_t arg1)
{
	return (__zext uint64_t)*(uint32_t*)arg1;
}
void _table_dump_keys(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi2;
	uint64_t phi3;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi3 = 0;
		if (phi2 < (__zext uint64_t)*(uint32_t*)(arg1 + 4))
		{
			phi_in1 = phi2 + 1;
			phi3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi2 < (__zext uint64_t)*(uint32_t*)(arg1 + 4));
	if (phi3 == 0)
	{
		return;
	}
	else 
	{
		__builtin_trap();
	}
}
void _print_filepaths(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001ec0);
	uint64_t phi_in1 = 0;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		uint64_t anon4;
		do
		{
			uint64_t phi3 = phi_in1;
			if (*(uint64_t*)((phi3 << 3) + arg1) == 0)
			{
				_printf((uint8_t*)0x100001dc3);
			}
			else 
			{
				_printf((uint8_t*)0x100001dcc);
			}
			anon4 = phi3 + 1;
			phi_in1 = anon4;
		}
		while (anon2 != (uint32_t)anon4);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_effect_definition(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint8_t* anon3;
	uint32_t phi_in4;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi1 = arg2;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		anon3 = (uint8_t*)0x100001dd5;
		_printf(anon3);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon5 = (uint32_t)arg4;
	phi_in4 = anon5;
	if ((anon5 >> 31 | (__zext uint32_t)(anon5 == 0)) == 0)
	{
		uint32_t anon7;
		do
		{
			uint32_t phi6 = phi_in4;
			_printf(anon3);
			anon7 = phi6 - 1;
			phi_in4 = anon7;
		}
		while (anon7 != 0);
	}
	phi1 = (__zext uint64_t)((uint32_t)phi1 - 1);
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_effect_list(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001f40);
	uint32_t anon1 = (uint32_t)arg2;
	if ((anon1 >> 31 | (__zext uint32_t)(anon1 == 0)) == 0)
	{
		uint32_t anon4;
		uint64_t phi_in2 = arg2 & 0xffffffff;
		do
		{
			uint64_t phi3 = phi_in2;
			_printf((uint8_t*)0x100001e3a);
			anon4 = (uint32_t)phi3 - 1;
			if (anon4 != 0)
			{
				phi_in2 = (__zext uint64_t)anon4;
			}
		}
		while (anon4 != 0);
	}
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_uniform_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e62);
	uint64_t phi_in1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon3;
		do
		{
			uint64_t phi2 = phi_in1;
			_printf((uint8_t*)0x100001e84);
			anon3 = phi2 + 1;
			phi_in1 = anon3;
		}
		while (anon3 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_attribute_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e8e);
	uint64_t phi_in1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon3;
		do
		{
			uint64_t phi2 = phi_in1;
			_printf((uint8_t*)0x100001e84);
			anon3 = phi2 + 1;
			phi_in1 = anon3;
		}
		while (anon3 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
