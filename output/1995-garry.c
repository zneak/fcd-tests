#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	uint8_t* anon4;
	uint64_t* anon1 = (uint64_t*)0x603b18;
	*anon1 = *(uint64_t*)0x601288;
	*(uint64_t*)0x603b10 = *(uint64_t*)0x601280;
	uint64_t phi_in2 = *(uint64_t*)0x601288;
	do
	{
		uint64_t phi3 = phi_in2;
		anon4 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi3);
		*(uint64_t*)0x603b08 = (uint64_t)anon4;
		if (anon4 != null)
		{
			uint64_t anon5 = cb(4195727);
			*(uint64_t*)0x603b00 = anon5;
			fwrite((uint8_t*)anon5, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi_in2 = *anon1;
		}
	}
	while (anon4 != null);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400560, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400930, (void(*)())0x4009a0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601290;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196002);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t cb(uint64_t arg0)
{
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi5 = (uint32_t*)0x603b40;
	uint64_t phi6 = phi_in4;
	uint32_t* anon7 = (uint32_t*)0x6012c0;
	uint64_t anon8 = (phi6 & 0xffffffff) + 4;
	uint16_t anon12 = (uint16_t)*phi5;
	uint16_t anon11 = anon12 - 257 & (anon12 ^ 0x8080) & 0x8080;
	uint8_t anon10 = (uint8_t)anon11;
	bool anon9 = llvm.uadd.with.overflow.i8(anon10, anon10).field1;
	*anon7 = (uint32_t)anon8 - 3 - (__zext uint32_t)anon9 - 6306624;
	uint64_t phi13 = 6306624;
	uint64_t phi14 = 6296320;
	uint8_t* phi_in15 = (uint8_t*)0x601300;
	uint8_t* phi_in16 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi19;
		uint64_t phi20;
		do
		{
			uint64_t phi_in17 = phi13;
			uint64_t phi_in18 = phi14;
			phi19 = phi_in16;
			phi20 = phi_in18;
			uint64_t phi21 = phi_in17;
			uint8_t* phi22 = phi_in15;
			if (*phi19 != 0)
			{
				uint64_t anon26;
				uint64_t phi23 = phi_in18;
				if (*phi19 == *anon3)
				{
					anon26 = phi21 + 1;
					uint8_t* anon25 = (uint8_t*)anon26;
					uint8_t* anon24 = strchr(anon25, (__sext int32_t)*phi19);
					if (anon24 == null)
					{
						*(uint8_t*)phi23 = *phi19;
						phi13 = anon26;
						uint64_t anon27 = phi23 + 1;
						phi14 = anon27;
						phi_in15 = (uint8_t*)anon27;
						phi_in16 = anon25;
					}
					else 
					{
						uint8_t anon28 = *anon24;
						anon28 = 0;
						if (strchr(anon25, 32) == null)
						{
							uint64_t phi29;
							uint8_t* anon30 = getenv(anon25);
							phi29 = (uint64_t)anon30;
							uint64_t phi_in31 = phi23;
							if (anon30 == null)
							{
								uint8_t anon32 = *anon24;
								anon32 = *anon3;
								*(uint8_t*)phi23 = *anon3;
								*(uint8_t*)(phi23 + 1) = *anon3;
								uint64_t anon33 = phi21 + 2;
								phi13 = anon33;
								uint64_t anon34 = phi23 + 2;
								phi14 = anon34;
								phi_in15 = (uint8_t*)anon34;
								phi_in16 = (uint8_t*)anon33;
							}
							else 
							{
								uint64_t phi35;
								uint8_t* anon49;
								while (true)
								{
									uint8_t phi36;
									uint64_t phi37;
									phi35 = phi_in31;
									if (*(uint8_t*)phi29 == 0)
									{
										break;
									}
									if (*(uint8_t*)phi29 == 92)
									{
										phi36 = 92;
										uint64_t anon38 = phi29 + 1;
										phi37 = anon38;
										uint8_t anon40 = *(uint8_t*)anon38 - 48;
										bool anon39 = *(uint8_t*)anon38 == 57 | anon40 < 9;
										if (anon39)
										{
											phi36 = anon40;
											uint64_t anon41 = phi29 + 2;
											phi37 = anon41;
											uint64_t anon42 = (__zext uint64_t)*(uint8_t*)anon41 + 4294967248;
											if ((uint8_t)anon42 < 10)
											{
												uint64_t phi43;
												uint64_t phi45;
												uint64_t anon44 = anon42 + ((__zext uint64_t)*(uint8_t*)anon38 << 3) + 34359737984;
												phi43 = anon44;
												uint64_t anon46 = phi29 + 3;
												phi45 = anon46;
												if (*(uint8_t*)anon46 - 48 < 10)
												{
													phi43 = (__zext uint64_t)*(uint8_t*)anon46 + 4294967248 + (anon44 << 3) & 0xffffffff;
													phi45 = phi29 + 4;
												}
												uint64_t phi_in47 = phi45;
												phi36 = (uint8_t)phi43;
												phi37 = phi_in47;
											}
										}
									}
									bool anon48 = *(uint8_t*)phi29 == 0 || *(uint8_t*)phi29 == 92;
									if (!anon48)
									{
										phi36 = *(uint8_t*)phi29;
										phi37 = phi29 + 1;
									}
									if (!anon48 || *(uint8_t*)phi29 == 92)
									{
										anon49 = (uint8_t*)phi35;
										*anon49 = phi36;
										phi29 = phi37;
										phi_in31 = phi35 + 1;
									}
								}
								uint64_t anon50 = (uint64_t)anon24 + 1;
								phi13 = anon50;
								phi14 = phi35;
								phi_in15 = anon49;
								phi_in16 = (uint8_t*)anon50;
							}
						}
						else 
						{
							*(uint8_t*)phi23 = *phi19;
							uint8_t anon51 = *anon24;
							anon51 = *phi19;
							phi13 = anon26;
							uint64_t anon52 = phi23 + 1;
							phi14 = anon52;
							phi_in15 = (uint8_t*)anon52;
							phi_in16 = anon25;
						}
					}
				}
				else 
				{
					*phi22 = *phi19;
					uint64_t anon53 = phi23 + 1;
					phi20 = anon53;
					if (*phi19 == 0)
					{
						break;
					}
					else 
					{
						phi21 = anon26;
						phi_in18 = anon53;
						phi22 = (uint8_t*)anon53;
					}
				}
			}
		}
		while (*phi19 != 0);
		*anon7 = (uint32_t)phi20 - 6296320;
		return 6296320;
	}
	phi_in4 = anon8;
	phi5 = (uint32_t*)anon8;
}
void tng(uint64_t arg0)
{
	uint32_t phi1;
	*(uint64_t*)0x603b00 = cb(4196603);
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	phi1 = *anon2;
	uint8_t anon3 = (uint8_t)(*anon2 >> 1) & 0x1f;
	if (anon3 != 0)
	{
		phi1 = (uint32_t)((__zext uint64_t)*anon2 << (__zext uint64_t)anon3);
	}
	*anon2 = phi1 * phi1;
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196707);
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
