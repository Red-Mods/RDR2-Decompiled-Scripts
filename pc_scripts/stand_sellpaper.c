//Decompiled with MagicRDR v1.0
//Function Count : 151
//Statics Count : 96
//Natives Count : 278
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	struct<9> Local_27[3];
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = false;
	bool bLocal_92 = false;
	var uLocal_93 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_2 = 0;
	bLocal_3 = false;
	iLocal_4 = 0;
	iLocal_19 = 0;
	iLocal_20 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_150("STARTS");
	Function_149(&uScriptParam_0);
	iLocal_83 = 0;
	Function_147(&uScriptParam_0, &iLocal_83);
	while (IS_GRINGO_ACTIVE())
	{
		Function_146(&uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		uVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(&uVar1))
		{
			GET_OBJECT_POSITION(&uVar1, &uLocal_84);
		}
		iVar2 = 0;
		bLocal_91 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_83 - 1))
			{
				if (&vLocal_27[iVar09] + 16 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_83;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_91 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_139(&(vLocal_27[iVar39]), &bVar4))
						{
							Function_137(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_27[iVar39] + 16);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_139(&(vLocal_27[iVar39]), &bVar4))
						{
							Function_137(GRINGO_GET_REQUESTING_ACTOR(), &vLocal_27[iVar39] + 16);
							if (bVar4)
							{
								Function_133(&(vLocal_27[iVar39]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (&vLocal_27[iVar39] + 24 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_132("eGRINGO_EndUse: Stop use by request", &vLocal_27[iVar39] + 24);
							Function_131(&vLocal_27[iVar39] + 24, 1);
							if (IS_ACTOR_VALID(&vLocal_27[iVar39] + 24))
							{
								if (IS_ACTOR_LOCAL_PLAYER(&vLocal_27[iVar39] + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&vLocal_27[iVar39] + 16))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(&vLocal_27[iVar39] + 24, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_119(&(vLocal_27[iVar39]), 0);
							}
							else if (vLocal_27[iVar39].f_68 < 8)
							{
								Function_118(&(vLocal_27[iVar39]));
								vLocal_27[iVar39].f_68 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_150("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(bVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(false);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_83 - 1))
			{
				if (Function_117(vLocal_27[iVar09].f_64, 2))
				{
					if (!Function_42(&(vLocal_27[iVar09])))
					{
						Function_150("Quitting due to update end");
						Function_119(&(vLocal_27[iVar09]), 1);
					}
				}
				if (Function_41(&(vLocal_27[iVar09]), 0))
				{
					Function_31(&(vLocal_27[iVar09]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_83 - 1))
		{
			if (Function_117(vLocal_27[iVar09].f_64, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(&uScriptParam_0))
		{
			if (bLocal_91)
			{
				GRINGO_WAIT(0);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(0);
			}
			else
			{
				GRINGO_WAIT(Function_3());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
	{
		Function_150("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_83 - 1))
	{
		if (Function_117(vLocal_27[iVar09].f_64, 2))
		{
			Function_2("Gringo termination calls StopUse", &vLocal_27[iVar09] + 24);
			Function_119(&(vLocal_27[iVar09]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(&vLocal_27[iVar09] + 16))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &vLocal_27[iVar09] + 16);
		}
		Function_41(&(vLocal_27[iVar09]), 1);
		iVar0++;
	}
	Function_1(&uScriptParam_0);
	Function_150("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x445 / 1093
{
	iParam0 = &iParam0;
	if (IS_BLIP_VALID(&iLocal_11))
	{
		REMOVE_BLIP(&iLocal_11);
	}
	return;
}

void Function_2(bool bParam0, char* cParam1) //Position: 0x460 / 1120
{
	var uVar0;
	
	uVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(&cParam1))
	{
		uVar0 = GET_OBJECT_NAME(&cParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), &cParam1, GET_TARGET_OBJECT(), &uVar0, ": ", &bParam0, 0);
	return;
}

int Function_3() //Position: 0x4A2 / 1186
{
	return 2000;
}

int Function_4(var uParam0) //Position: 0x4AB / 1195
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam0 = &uParam0;
	if (!Function_30(6))
	{
		return 0;
	}
	uVar0 = Function_29();
	if (!IS_ACTOR_VALID(&uVar0) || 0)
	{
		return 0;
	}
	if (!IS_GRINGO_COMPONENT_VALID(&uLocal_17))
	{
		uLocal_17 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &uParam0);
		uLocal_13 = GRINGO_GET_FIRST_NAMED_CHILD("Buy_News", 3, &uLocal_17);
		uLocal_15 = GRINGO_GET_FIRST_NAMED_CHILD("Buy_NewsOld", 3, &uLocal_17);
	}
	iVar1 = 0;
	if (Function_6(&uLocal_13, &iVar1, 0) || Function_6(&uLocal_15, &iVar1, 0))
	{
		if (!IS_BLIP_VALID(&iLocal_11))
		{
			Function_5(GRINGO_GET_MY_OBJECT_REF());
			uVar2 = Function_5(GRINGO_GET_MY_OBJECT_REF());
			iLocal_11 = ADD_BLIP_FOR_COORD(&uVar2, 527, 0, 2, 0);
			SET_BLIP_MAX_DISTANCE(&iLocal_11, 1.0f);
		}
	}
	return 0;
}

struct<8> Function_5(int iParam0) //Position: 0x563 / 1379
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_6(var uParam0, int iParam1, int iParam2) //Position: 0x58C / 1420
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (!IS_OBJECT_VALID(Function_28(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1")))
	{
		if (IS_BLIP_VALID(&iLocal_11))
		{
			REMOVE_BLIP(&iLocal_11);
		}
		return 0;
	}
	if (Function_27(472) > (SHIFT_LEFT(true, 9) - 1))
	{
		if (IS_BLIP_VALID(&iLocal_11))
		{
			REMOVE_BLIP(&iLocal_11);
		}
		return 0;
	}
	Function_19(&bVar1, &iVar2, &uVar0);
	bVar3 = Function_27(472);
	if (bVar3 == 4294967295)
	{
		bVar3 = false;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", &uParam0))
	{
		if (!GRINGO_GET_AVAILABILITY(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "Buy_News"))
		{
			return 0;
		}
		if (IS_ACTOR_VALID(&iParam2))
		{
			if (Function_18() > 1 && IS_ACTOR_LOCAL_PLAYER(&iParam2))
			{
				if (!iLocal_20)
				{
					Function_15("Cant_Afford_Paper", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_20 = 1;
				}
				return 0;
			}
		}
		uVar4 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0) + 6, GET_MINUTE(&uVar0), GET_SECOND(&uVar0));
		if (bVar1 != 0)
		{
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar4))
			{
				if (!Function_117(bVar3, bVar1))
				{
					PRINTSTRING("Can buy paper.");
					PRINTNL();
					PRINTSTRING("Cur stat is: ");
					PRINTINT(bVar3);
					PRINTNL();
					PRINTSTRING("Avail paper is: ");
					PRINTINT(bVar1);
					PRINTNL();
					return 1;
				}
			}
		}
		iParam1 = 100;
		return 0;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_NewsOld", &uParam0))
	{
		bVar5 = false;
		while (bVar5 < 9)
		{
			if (iVar2 >= bVar5)
			{
				bVar7 = ROUND(POW(2.0f, TO_FLOAT(bVar5)));
				if (!Function_117(bVar3, bVar7))
				{
					iVar6++;
				}
			}
			bVar5++;
		}
		if (Function_18() <= iVar6)
		{
			if (IS_BLIP_VALID(&iLocal_11))
			{
				REMOVE_BLIP(&iLocal_11);
			}
			if (IS_ACTOR_VALID(&iParam2))
			{
				if (!iLocal_20 && IS_ACTOR_LOCAL_PLAYER(&iParam2))
				{
					Function_15("Cant_Afford_Paper", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_20 = 1;
				}
			}
			return 0;
		}
		if (bVar1 != bVar3 + 1)
		{
			bVar5 = false;
			while (bVar5 < (iVar2 - 1))
			{
				bVar8 = POW(2.0f, TO_FLOAT(bVar5));
				if ((bVar3 && ROUND(bVar8)) == 0)
				{
					if ((!Function_14(0, 0, 1, 1) && !Global_99146) && !Function_13(Global_119936, 0x8000000))
					{
						Function_7(&Global_54076, 0x8000000, 3, 0);
					}
					return 1;
				}
				bVar5++;
			}
			return 0;
		}
	}
	return 0;
}

void Function_7(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x811 / 2065
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_9(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_8(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_8(char* cParam0) //Position: 0x886 / 2182
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_9(int iParam0, var uParam1, int iParam2) //Position: 0x8C0 / 2240
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_11(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_10(uVar0))
		{
			case 0x00000002:
				if (!Function_13(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_10(char* cParam0) //Position: 0x93C / 2364
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_11(int iParam0) //Position: 0x9DD / 2525
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_12(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_12(int iParam0, int iParam1) //Position: 0xA1A / 2586
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_13(var uParam0, int iParam1) //Position: 0xA30 / 2608
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_14(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA43 / 2627
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_15(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xAF2 / 2802
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_16(int iParam0) //Position: 0xB7D / 2941
{
	char* cVar0[16];
	
	if (!Function_17())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_17() //Position: 0xBBC / 3004
{
	if (Function_117(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_18() //Position: 0xBD7 / 3031
{
	return Function_27(0);
}

void Function_19(var uParam0, var uParam1, int iParam2) //Position: 0xBE1 / 3041
{
	if (Function_24(57, 0))
	{
		uParam0 = SHIFT_LEFT(true, 8);
		iParam2 = Function_20(StackVal);
		uParam1 = 8;
	}
	else if (Function_24(43, 0) && Function_24(46, 0))
	{
		uParam0 = SHIFT_LEFT(true, 7);
		iParam2 = Function_20(StackVal);
		uParam1 = 7;
	}
	else if (Function_24(46, 0))
	{
		uParam0 = SHIFT_LEFT(true, 6);
		iParam2 = Function_20(StackVal);
		uParam1 = 6;
	}
	else if (Function_24(41, 0))
	{
		uParam0 = SHIFT_LEFT(true, 5);
		iParam2 = Function_20(StackVal);
		uParam1 = 5;
	}
	else if (Function_24(34, 0) && Function_24(31, 0))
	{
		uParam0 = SHIFT_LEFT(true, 4);
		iParam2 = Function_20(StackVal);
		uParam1 = 4;
	}
	else if (Function_24(26, 0))
	{
		uParam0 = SHIFT_LEFT(true, 3);
		iParam2 = Function_20(StackVal);
		uParam1 = 3;
	}
	else if (Function_24(23, 0))
	{
		uParam0 = SHIFT_LEFT(true, 2);
		iParam2 = Function_20(StackVal);
		uParam1 = 2;
	}
	else if (Function_24(17, 0))
	{
		uParam0 = SHIFT_LEFT(true, true);
		iParam2 = Function_20(StackVal);
		uParam1 = 1;
	}
	else if (Function_24(4, 0))
	{
		uParam0 = SHIFT_LEFT(true, false);
		iParam2 = Function_20(StackVal);
		uParam1 = 0;
	}
	return;
}

int Function_20(int iParam0) //Position: 0xD6C / 3436
{
	if (!Function_21(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, false);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_21(int iParam0) //Position: 0xD8C / 3468
{
	if (!Function_23(iParam0))
	{
		return 0;
	}
	if (!Function_22(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_22(int iParam0) //Position: 0xDB0 / 3504
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_23(int iParam0) //Position: 0xDC5 / 3525
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_24(int iParam0, bool bParam1) //Position: 0xDDC / 3548
{
	int iVar0;
	
	iVar0 = Function_25(iParam0);
	if (!Function_23(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

var Function_25(int iParam0) //Position: 0xE1A / 3610
{
	if (!Function_26(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_26(int iParam0) //Position: 0xE34 / 3636
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_27(int iParam0) //Position: 0xE4A / 3658
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

var Function_28(var uParam0, bool bParam1) //Position: 0xE8B / 3723
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &bParam1);
}

var Function_29() //Position: 0xE9A / 3738
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_30(int iParam0) //Position: 0xEAF / 3759
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_31(struct<69> Param0) //Position: 0xECB / 3787
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_117(Param0.f_64, 2))
	{
		Function_131(&Param0 + 24, 0);
	}
	else if (UNK_0x0A0E660E() || Function_40(&Param0))
	{
		if (Param0.f_68 == 6)
		{
			if (Function_38(&Param0) <= Function_36(&Param0 + 16))
			{
				if (IS_ACTOR_VALID(&Param0 + 24))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
					{
						if (UNK_0x0A0E660E() || !Global_6663)
						{
							iVar1 = Function_34(&Param0 + 16, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								iVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_91 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
								{
									Function_150("ManagePlayerQuit: Create quit context");
									if (Function_33(&Param0 + 16, "UseQuitBOverride", 0))
									{
										bLocal_92 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_92 = ADD_SCRIPT_USE_CONTEXT(&iVar1, 500, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(&bLocal_92))
								{
									Function_2("USE CONTEXT QUIT", &Param0 + 24);
									Function_118(&Param0);
									Param0.f_68 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
									{
										Function_150("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", &Param0 + 16, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
								{
									if (Function_32(&Param0 + 24))
									{
										Function_118(&Param0);
										Function_2("STICK QUIT", &Param0 + 24);
										Param0.f_68 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
										{
											Function_150("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
										}
									}
								}
							}
						}
						else if (Global_6663)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
							{
								Function_150("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
		{
			Function_150("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
		}
	}
	return;
}

bool Function_32(int iParam0) //Position: 0x11FF / 4607
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	float fVar4;
	
	bVar0 = GET_CURRENT_GAME_TIME();
	Var1 = Vector(GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1), GET_ANALOGUE_ACTION("@GENERIC.MOVE_Y", 1), 0.0f);
	bVar3 = VMAG(Var1);
	if (bVar3 >= 0,2f)
	{
		DECOR_SET_BOOL(&iParam0, "StickReset", true);
	}
	else if (bVar3 < 0,75f && DECOR_CHECK_EXIST(&iParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(&iParam0, "DisconnectTime", &fVar4))
		{
			DECOR_SET_FLOAT(&iParam0, "DisconnectTime", bVar0);
		}
		else if ((bVar0 - fVar4) < 0,15f)
		{
			DECOR_REMOVE(&iParam0, "StickReset");
			DECOR_REMOVE(&iParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(&iParam0, "DisconnectTime");
	return 0;
}

bool Function_33(bool bParam0, var uParam1, int iParam2) //Position: 0x1318 / 4888
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(&uParam1, &bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_34(char* cParam0, int iParam1) //Position: 0x1336 / 4918
{
	return Function_35(&cParam0, "UseQuit", &iParam1);
}

bool Function_35(char* cParam0, char* cParam1, int iParam2) //Position: 0x134F / 4943
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR(&cParam1, &cParam0, &iVar0);
	iParam2 = iVar0 < 0;
	if (iParam2)
	{
		if (STRING_LENGTH(&iVar1) != 0 || STRINGS_ARE_EQUAL(&iVar1, "NoString"))
		{
			iParam2 = 0;
			return &iLocal_0;
		}
		return &iVar1;
	}
	return &iLocal_0;
}

float Function_36(int iParam0) //Position: 0x139F / 5023
{
	return Function_37(&iParam0, "MinimumUseTime", 0.0f);
}

int Function_37(bool bParam0, var uParam1, int iParam2) //Position: 0x13BD / 5053
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, &uParam1, &bParam0);
	return iVar0;
}

float Function_38(vector3 vParam0) //Position: 0x13D5 / 5077
{
	if (Function_40(&vParam0))
	{
		if (Function_39(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_39(int iParam0) //Position: 0x14A2 / 5282
{
	return Function_117(iParam0, 2);
}

bool Function_40(int iParam0) //Position: 0x14B0 / 5296
{
	return Function_117(iParam0, 1);
}

bool Function_41(int iParam0, int iParam1) //Position: 0x14BE / 5310
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(&iParam0 + 24, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(&iParam0 + 24, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_42(struct<69> Param0) //Position: 0x150B / 5387
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	int iVar14;
	var uVar15;
	struct<2> Var16;
	float fVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	float fVar22;
	struct<2> Var23;
	bool bVar25;
	struct<2> Var26;
	int iVar28;
	bool bVar29;
	var uVar30;
	var uVar31;
	bool bVar32;
	var uVar33;
	int iVar34;
	bool bVar35;
	bool bVar36;
	var uVar37;
	float fVar38;
	int iVar39;
	bool bVar40;
	float fVar41;
	int iVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	int iVar51;
	var uVar52;
	struct<2> Var53;
	bool bVar55;
	
	bVar11 = Function_116(&Param0 + 16);
	if (!(IS_ACTOR_VALID(&Param0 + 24) && IS_ACTOR_ALIVE(&Param0 + 24)))
	{
		Function_132("UpdateUse with invalid actor", &Param0 + 24);
		return 0;
	}
	if (!Function_33(&Param0 + 16, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Param0 + 24)) >= 0,5f)
		{
			Function_132("Damage quit", &Param0 + 24);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(&Param0 + 24))
	{
		Function_132("Incapacitation quit", &Param0 + 24);
		return 0;
	}
	GET_POSITION(&Param0 + 24, &Var16);
	bVar19 = true;
	if (Param0.f_68 < 4)
	{
		iVar21 = STRING_TO_HASH("SharedPropName");
	}
	switch (Param0.f_68)
	{
		case 0x00000002:
			bLocal_91 = true;
			if (IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (Function_115(&Param0 + 16, &fVar22))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var23);
					Var23.f_4 = (StackVal + (fVar22 + 0,1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar25 = IS_AREA_OBSTRUCTED2(Var23, fVar22, GET_PHYSINST_FROM_ACTOR(&Param0 + 24), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar25 = IS_AREA_OBSTRUCTED(Var23, fVar22, &Param0 + 24, 0);
					}
					if (IS_ACTOR_ON_TRAIN(&Param0 + 24, 0) || bVar25)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						Param0.f_68 = 7;
						Function_2("Skip to eRewarding", &Param0 + 24);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
			{
				if (Function_110(&Param0 + 24, &Param0 + 16))
				{
					Function_2("Navigation complete (going to eStarting)", &Param0 + 24);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
					Param0.f_68 = 1;
					Function_109(&Param0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Param0.f_68 = 1;
				Function_109(&Param0);
			}
			if (!Function_108(&Param0 + 16) && Param0.f_68 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", &Param0 + 24);
				SET_ACTOR_POSTURE(&Param0 + 24, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_91 = true;
			Function_107(&Param0 + 16);
			if (((!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24)) && !Function_117(Param0.f_64, 1)) && !DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
			{
				Function_106(&Param0 + 16);
			}
			fVar18 = Function_105(&Param0 + 16);
			if (Function_38(&Param0) < fVar18)
			{
				Function_2("INTRO TIMED OUT - ABORTING", &Param0 + 24);
				return 0;
			}
			if (Function_117(Param0.f_64, 1))
			{
				Function_100(&Param0 + 16, &Var3, &uVar5);
				if (!Function_117(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SUSPEND MOVER", &Param0 + 24);
						SUSPEND_MOVER(&Param0 + 24);
						Function_99(&Param0 + 64, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("nFIX MOVER", &Param0 + 24);
						SET_MOVER_FROZEN(&Param0 + 24, true);
						Function_99(&Param0 + 64, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", &Param0 + 24);
				Var26.f_4 = uVar5;
				if (DECOR_CHECK_EXIST(&Param0 + 24, "NoTeleport"))
				{
					SET_OBJECT_POSITION(&Param0 + 24, Var3);
					SET_OBJECT_ORIENTATION(&Param0 + 24, Var26);
					DECOR_REMOVE(&Param0 + 24, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(&Param0 + 24, Var3, uVar5, 1, 1, Function_98());
				}
				if (!Function_117(Param0.f_64, 1024))
				{
					Function_99(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_33(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			else if (Function_110(&Param0 + 24, &Param0 + 16))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 1);
				Function_2("FINISHED NAVIGATION", &Param0 + 24);
				if (!Function_117(Param0.f_64, 1024))
				{
					Function_99(&Param0 + 64, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, Function_33(&Param0 + 16, "AllowGestures", 1));
				}
				Param0.f_68 = 3;
			}
			if (Param0.f_68 != 3 && !Function_117(Param0.f_64, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
				{
					Function_2("SUSPEND MOVER", &Param0 + 24);
					SUSPEND_MOVER(&Param0 + 24);
					Function_99(&Param0 + 64, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
				{
					Function_2("nFIX MOVER", &Param0 + 24);
					SET_MOVER_FROZEN(&Param0 + 24, true);
					Function_99(&Param0 + 64, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_117(Param0.f_64, 32))
			{
				bLocal_91 = true;
				if (!ACTOR_IS_HOLSTERED(&Param0 + 24))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", &Param0 + 24);
			}
			Param0.f_68 = 4;
		
		case 0x00000004:
			Function_92(&Param0 + 16);
			bLocal_91 = true;
			Function_91(&Param0);
			Function_88(&Param0, Function_90(&Param0 + 16));
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 0);
			}
			bVar29 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", &Param0 + 16, &iVar28);
			if (iVar28 == 0)
			{
				bVar29 = Function_117(Param0.f_64, 1);
			}
			bVar0 = Function_87(&Param0 + 24, &Param0 + 16, bVar29);
			if (!IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				Param0.f_68 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
				}
			}
			else if (bVar11)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(&Param0 + 24, &bVar0, bVar29))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
					}
					Param0.f_68 = 5;
					bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
					while (bVar10 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, &Param0 + 16);
						if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_35(&bVar1, "AttachBone", &bVar9), Function_35(&bVar1, "AttachLocator", &bVar9), 1))
						{
							Function_86(&bVar1, &Param0 + 24);
							if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
							{
								uVar30 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
								if (IS_PHYSINST_VALID(&uVar30))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar30, 0);
								}
							}
						}
						bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, bVar10 + 1);
					}
					bVar12 = false;
					iVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
					while (bVar12 <= GRINGO_GET_ATTRIBUTE_COUNT(&Param0 + 16))
					{
						iVar14 = GRINGO_GET_ATTRIBUTE(&Param0 + 16, bVar12);
						if (GRINGO_IS_ATTRIBUTE_VALID(&iVar14))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&iVar14) == 2)
							{
								if (iVar21 == GRINGO_GET_ATTRIBUTE_HASH(&iVar14))
								{
									uVar15 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar14, &uVar13);
									bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), 0);
									while (bVar10 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar10, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(&Param0 + 24, &bVar1, Function_35(&bVar1, "AttachBone", &bVar9), Function_35(&bVar1, "AttachLocator", &bVar9), 1))
										{
											if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
											{
												uVar31 = GRINGO_GET_PROP_FROM_COMPONENT(&bVar1);
												if (IS_PHYSINST_VALID(&uVar31))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar31, 0);
												}
											}
											Function_86(&bVar1, &Param0 + 24);
										}
										bVar10 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar15, 1, GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 0), bVar10 + 1);
									}
								}
							}
						}
						bVar12++;
					}
				}
			}
			if (Param0.f_68 == 5)
			{
				Function_2("KICKED TO DOING START", &Param0 + 24);
				uVar7 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(&uVar7))
				{
					Function_78(&Param0, &uVar7, &iLocal_89, &uLocal_87);
					if (GET_OBJECT_TYPE(&uVar7) != 15)
					{
						iVar20 = GET_PHYSINST_FROM_OBJECT(&uVar7);
						if (IS_PHYSINST_VALID(&iVar20))
						{
							if (!IS_PROP_FIXED(&iVar20))
							{
								Function_99(&Param0 + 64, 256);
								SET_PROP_FIXED(&iVar20, 1);
							}
							else
							{
								Function_12(&Param0 + 64, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Param0 + 32);
				if (Function_117(Param0.f_64, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", &Param0 + 24);
						UNK_0x4A1D2E25(&Param0 + 24);
					}
					if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", &Param0 + 24);
						UNK_0x817B6952(&Param0 + 24);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 1);
				if (Function_77(&Param0 + 16))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(&bVar0))
				{
					if (Function_76(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_75(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&Param0 + 24, &uVar8);
							}
						}
					}
					else if (Function_74(&Param0 + 16))
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_75(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_LINKED_ANIM_TARGET(&uVar8, &Param0 + 24);
							}
						}
					}
					bVar9 = false;
					uVar6 = Function_73(&Param0 + 16, &bVar9);
					if (bVar9)
					{
						iVar2 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
						if (IS_GRINGO_COMPONENT_VALID(&iVar2))
						{
							uVar8 = Function_75(&iVar2);
							if (IS_ACTOR_VALID(&uVar8))
							{
								SET_ACTION_NODE_FOR_ACTOR(&uVar8, &uVar6);
							}
						}
					}
				}
				if (Function_72(&Param0 + 16))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(&Param0 + 24))
					{
						Function_99(&Param0 + 64, 8);
					}
					else
					{
						Function_12(&Param0 + 64, 8);
					}
					if (Function_117(Param0.f_64, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, true);
					}
				}
				else
				{
					Function_12(&Param0 + 64, 8);
				}
				if (Function_71(&Param0 + 16))
				{
					NET_SET_NODE_REPLICATION(&Param0 + 24, 1, 1);
					UNK_0xC17BAD12(&Param0 + 24);
				}
				uVar33 = Function_35(&Param0 + 16, "CustomReactNode", &bVar32);
				if (bVar32)
				{
					SET_REACT_NODE_FOR_ACTOR(&Param0 + 24, &uVar33);
				}
				iVar34 = 1;
				bVar35 = Function_33(&Param0 + 16, "CanAnimalsAttack", iVar34);
				if (!bVar35)
				{
					if (IS_ACTOR_VALID(&Param0 + 24))
					{
						SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 0);
					}
				}
				Function_70(&Param0 + 24, &Param0 + 16);
				bVar36 = Function_33(&Param0 + 16, "AllowTalking", 1);
				if (!bVar36)
				{
					STOP_PED_SPEAKING(&Param0 + 24, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				Function_69();
			}
			Param0.f_68 = 6;
			if (Function_117(Param0.f_64, 1))
			{
				if (Function_68(&Param0 + 16))
				{
					Function_2("MID ACTION NODE", &Param0 + 24);
				}
			}
		
		case 0x00000006:
			if (!Function_52(&Param0 + 24, &Param0 + 16))
			{
				Function_2("CUSTOM QUIT DURING USE", &Param0 + 24);
				Param0.f_68 = 8;
			}
			bVar0 = Function_87(&Param0 + 24, &Param0 + 16, Function_117(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", &Param0 + 24);
					if (GRINGO_WAS_USE_SUCCESSFUL(&Param0 + 24))
					{
						Param0.f_68 = 7;
					}
					else
					{
						Param0.f_68 = 8;
					}
				}
			}
			if (Function_38(&Param0) <= Function_36(&Param0 + 16))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(&Param0 + 24, &Param0 + 16);
			}
			if (!IS_ACTOR_PLAYER(&Param0 + 24))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(&Param0 + 24))
				{
					uVar37 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, &Param0 + 16);
					if (IS_GRINGO_COMPONENT_VALID(&uVar37))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar38))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar39 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar37);
							if (!GET_GRINGO_FLOAT_ATTR(&fVar41, "MinDelay", &uVar37))
							{
								fVar41 = 10.0f;
							}
							else
							{
								iVar39 = (iVar39 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&bVar40, "MaxDelay", &uVar37))
							{
								bVar40 = 30.0f;
							}
							else
							{
								iVar39 = (iVar39 - 1);
							}
							bVar44 = GET_GRINGO_BOOL_ATTR("nForcePlay", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar43 = GET_GRINGO_BOOL_ATTR("AllowRepeat", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar45 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							bVar46 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", &uVar37, &iVar42);
							if (iVar42 != 0)
							{
								iVar39 = (iVar39 - 1);
							}
							if (iVar39 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar38) <= RAND_FLOAT_RANGE(fVar41, bVar40)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar47 = RAND_INT_RANGE(false, (iVar39 - 1));
									uVar48 = GRINGO_GET_ATTRIBUTE(&uVar37, bVar47);
									uVar49 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar48, &iVar42);
									iVar50 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar51 = SET_OWNERSHIP_STRAGGLER(&uVar49, ",");
									if (iVar51 >= 1)
									{
										uVar52 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", &uVar52))
										{
											iVar50 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", &uVar52))
										{
											iVar50 = 2;
										}
										else
										{
											iVar50 = 1;
										}
										uVar49 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(&Param0 + 24, &uVar49, bVar44, bVar43, iVar50, 0, bVar45, bVar46);
								}
							}
						}
					}
				}
			}
			if (Param0.f_68 == 6)
			{
				bVar55 = Function_51(&Param0 + 16);
				if (bVar55 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), Var16, &Var53);
					if (VDIST(Var53, (&Param0 + 32)) < bVar55)
					{
						Function_2("UPDATE USE TOO FAR", &Param0 + 24);
						if (Function_50())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(Var53, *(&Param0 + 32)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar55);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						Param0.f_68 = 8;
					}
				}
			}
			if (Param0.f_68 == 6)
			{
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(&Param0 + 24, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar19 = false;
				}
				if (bVar19)
				{
					if (Function_49(&Param0 + 16) <= 0.0f)
					{
						if (Function_38(&Param0) < Function_49(&Param0 + 16))
						{
							Function_2("UPDATE USE USETIME SATISFIED", &Param0 + 24);
							Param0.f_68 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_150("nRewarding");
			Function_48(&Param0 + 24, &Param0 + 16);
			Function_47(&Param0 + 24, &Param0 + 16);
			Function_46(&Param0 + 24, &Param0 + 16);
			SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "LastUserObject", &Param0 + 16);
			Function_99(&Param0 + 64, 64);
			Param0.f_68 = 8;
			break;
		
		case 0x00000008:
			bLocal_91 = true;
			if (!Global_99146 && IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
			{
				if (!DECOR_CHECK_EXIST(&Param0 + 24, "NoGringoCamera"))
				{
					if (!Function_33(&Param0 + 16, "GringoCamNoEndCut", 0))
					{
						if (!Function_45())
						{
							Function_106(&Param0 + 16);
						}
					}
				}
				else
				{
					DECOR_REMOVE(&Param0 + 24, "NoGringoCamera");
				}
			}
			if (Function_33(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", &Param0 + 24);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", &Param0 + 24);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			Param0.f_68 = 9;
			Function_44(&Param0 + 24, &Param0 + 16);
			break;
		
		case 0x00000009:
			if (Function_117(Param0.f_64, 1024))
			{
				Function_12(&Param0 + 64, 1024);
				if (!Function_33(&Param0 + 16, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(&Param0 + 24, true);
				}
			}
			if (DECOR_CHECK_EXIST(&Param0 + 24, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(&Param0 + 24, 1);
			}
			bLocal_91 = true;
			bVar0 = Function_87(&Param0 + 24, &Param0 + 16, Function_117(Param0.f_64, 1));
			if (IS_GRINGO_COMPONENT_VALID(&bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(&Param0 + 24, &bVar0))
				{
					Function_2("ANIMATION FINISHED", &Param0 + 24);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_43(&Param0 + 24, Param0.f_68);
	return 1;
}

void Function_43(var uParam0, int iParam1) //Position: 0x2840 / 10304
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		REPORT_GRINGO_USE_PHASE(&uParam0, iParam1);
	}
	return;
}

void Function_44(var uParam0, var uParam1) //Position: 0x2857 / 10327
{
	uParam1 = &uParam1;
	uParam0 = &uParam0;
	return;
}

bool Function_45() //Position: 0x2869 / 10345
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x289C / 10396
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(&uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(&uParam0, &uVar6))
				{
					REMOVE_CAPABILITY(&uParam0, &uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_47(var uParam0, int iParam1) //Position: 0x291A / 10522
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(&iParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(&iParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(&uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(&uParam0, &uVar6))
				{
					ADD_CAPABILITY(&uParam0, &uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_48(int iParam0, int iParam1) //Position: 0x2996 / 10646
{
	iParam1 = &iParam1;
	iParam0 = &iParam0;
	return;
}

float Function_49(int iParam0) //Position: 0x29A8 / 10664
{
	return Function_37(&iParam0, "UseTime", 5.0f);
}

bool Function_50() //Position: 0x29BF / 10687
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

int Function_51(int iParam0) //Position: 0x29CC / 10700
{
	return Function_37(&iParam0, "MoveAllowance", 1,5f);
}

bool Function_52(bool bParam0, var uParam1) //Position: 0x29ED / 10733
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (IS_ACTOR_LOCAL_PLAYER(&bParam0))
	{
		if (!bLocal_3)
		{
			return 0;
		}
		if (Function_40(&iLocal_5))
		{
			if (Function_38(&iLocal_5) <= 3,8f)
			{
				iVar0 = 0;
				if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", &uParam1))
				{
					iVar0 = 1;
				}
				else
				{
					if (Function_24(57, 0))
					{
						iVar1 = 8;
					}
					else if (Function_24(43, 0) && Function_24(46, 0))
					{
						iVar1 = 7;
					}
					else if (Function_24(46, 0))
					{
						iVar1 = 6;
					}
					else if (Function_24(41, 0))
					{
						iVar1 = 5;
					}
					else if (Function_24(34, 0) && Function_24(31, 0))
					{
						iVar1 = 4;
					}
					else if (Function_24(26, 0))
					{
						iVar1 = 3;
					}
					else if (Function_24(23, 0))
					{
						iVar1 = 2;
					}
					else if (Function_24(17, 0))
					{
						iVar1 = 1;
					}
					else if (Function_24(4, 0))
					{
						iVar1 = 0;
					}
					bVar2 = Function_27(472);
					bVar3 = false;
					while (bVar3 < 9)
					{
						if (iVar1 >= bVar3)
						{
							bVar4 = ROUND(POW(2.0f, TO_FLOAT(bVar3)));
							if (!Function_117(bVar2, bVar4))
							{
								iVar0++;
							}
						}
						bVar3++;
					}
				}
				Function_53(iVar0, 1);
				iVar5 = GET_ACTOR_FROM_OBJECT(Function_28(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1"));
				if (IS_ACTOR_VALID(&iVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(&iVar5, 103, &Global_54076, 1, 1, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_91(&iLocal_5);
			}
		}
	}
	return 1;
}

int Function_53(int iParam0, bool bParam1) //Position: 0x2B4D / 11085
{
	bool bVar0;
	
	bVar0 = Function_27(0);
	if ((Function_27(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_54(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_27(0));
	return 1;
}

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BDE / 11230
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_67(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

void Function_55(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2DDB / 11739
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			bParam2 = (bParam2 * 3,28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_66(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_60(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_56(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_56() //Position: 0x3419 / 13337
{
	int iVar0;
	
	return &iVar0;
}

var Function_57(int iParam0) //Position: 0x3422 / 13346
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3433 / 13363
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0) //Position: 0x352A / 13610
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3545 / 13637
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_62(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x35AC / 13740
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x35BE / 13758
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x35D0 / 13776
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_64(int iParam0) //Position: 0x3704 / 14084
{
	return Global_55480[iParam016].f_96;
}

float Function_65(int iParam0) //Position: 0x3713 / 14099
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_66(int iParam0) //Position: 0x374C / 14156
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_67(int iParam0) //Position: 0x3789 / 14217
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

bool Function_68(bool bParam0) //Position: 0x3923 / 14627
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &bParam0));
}

void Function_69() //Position: 0x3943 / 14659
{
	return;
}

void Function_70(int iParam0, bool bParam1) //Position: 0x3949 / 14665
{
	bParam1 = &bParam1;
	iParam0 = &iParam0;
	return;
}

bool Function_71(char* cParam0) //Position: 0x395B / 14683
{
	cParam0 = &cParam0;
	return 1;
}

bool Function_72(int iParam0) //Position: 0x3968 / 14696
{
	return Function_33(&iParam0, "OneShotKill", 0);
}

bool Function_73(char* cParam0, int iParam1) //Position: 0x3983 / 14723
{
	return Function_35(&cParam0, "ParentAnimNode", &iParam1);
}

bool Function_74(int iParam0) //Position: 0x39A3 / 14755
{
	return Function_33(&iParam0, "LinkToParentAnim", 0);
}

var Function_75(int iParam0) //Position: 0x39C3 / 14787
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (vLocal_27 - 1))
	{
		if (&vLocal_27[iVar09] + 16 == &iParam0)
		{
			return &vLocal_27[iVar09] + 24;
		}
		iVar0++;
	}
	return &iVar1;
}

bool Function_76(int iParam0) //Position: 0x39FA / 14842
{
	return Function_33(&iParam0, "LinkParentToAnim", 0);
}

bool Function_77(int iParam0) //Position: 0x3A1A / 14874
{
	return Function_33(&iParam0, "SingularUse", 0);
}

void Function_78(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3A35 / 14901
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	uVar2 = Function_85(&iParam0 + 16, &bVar0);
	uVar3 = Function_84(&iParam0 + 16, &bVar1);
	uVar4 = Function_83(&iParam0 + 16);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(&uVar4)))
	{
		uVar6 = Function_82(&iParam0 + 16, &bVar5);
		if (bVar5)
		{
			uVar8 = Function_81(&iParam0 + 16, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			*(&iParam0 + 48) = ATTACH_OBJECTS_PHYSICAL(&iParam1, &iParam0 + 24, &uVar6, &uVar8, 0,02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(&uVar2);
		if (Function_50())
		{
			Function_80();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, &uVar3, Function_79(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(&iParam0 + 24, &iParam1, Function_56(), Function_79(&iParam0 + 16, &iVar10), 0, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(&uVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(&bParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(&bParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(&bParam3);
		}
		uVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar4, &iParam0 + 24);
		iVar12 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar4);
		uVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar4);
		bParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&iParam1, &uVar11, &iVar12, &uVar13);
		if (IS_OBJECT_ANIMATOR_VALID(&bParam3))
		{
			if (Function_33(&uVar4, "LinkToUser", 0))
			{
				if (Function_50())
				{
					Function_80();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&bParam3, &iParam0 + 24, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		bParam2 = &iParam0 + 16;
	}
}

bool Function_79(char* cParam0, int iParam1) //Position: 0x3D59 / 15705
{
	return Function_35(&cParam0, "TargetLocator", &iParam1);
}

void Function_80() //Position: 0x3D78 / 15736
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_81(char* cParam0, int iParam1) //Position: 0x3D87 / 15751
{
	return Function_35(&cParam0, "UserPhysAttachBone", &iParam1);
}

bool Function_82(char* cParam0, int iParam1) //Position: 0x3DAB / 15787
{
	return Function_35(&cParam0, "TargetPhysAttachBone", &iParam1);
}

int Function_83(int iParam0) //Position: 0x3DD1 / 15825
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, &iParam0);
}

bool Function_84(var uParam0, int iParam1) //Position: 0x3DEF / 15855
{
	return Function_35(&uParam0, "TargetAttachBone", &iParam1);
}

bool Function_85(var uParam0, int iParam1) //Position: 0x3E11 / 15889
{
	return Function_35(&uParam0, "TargetAttachSlot", &iParam1);
}

void Function_86(bool bParam0, int iParam1) //Position: 0x3E33 / 15923
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GRINGO_GET_FIRST_CHILD(2, &bParam0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		uVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(&uVar0, &iParam1);
		uVar3 = GRINGO_ANIM_GET_ACT_FILENAME(&uVar0);
		uVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(&uVar0);
		uVar1 = GRINGO_GET_PHYSINST(&bParam0);
		if (IS_PHYSINST_VALID(&uVar1))
		{
			uVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(&uVar1);
			if (IS_OBJECT_ANIMATOR_VALID(&uVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(&uVar5);
			}
			iVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(&uVar1, &uVar2, &uVar3, &uVar4);
			if (IS_OBJECT_ANIMATOR_VALID(&iVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(&iVar6, &iParam1, GRINGO_GET_PROP_ATTACH_SLOT(&bParam0));
			}
		}
	}
	return;
}

var Function_87(var uParam0, int iParam1, bool bParam2) //Position: 0x3EFB / 16123
{
	int iVar0;
	
	if (bParam2)
	{
		iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, &iParam1);
		if (IS_GRINGO_COMPONENT_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, &iParam1);
		if (IS_GRINGO_COMPONENT_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, &iParam1);
	return &iVar0;
}

void Function_88(int iParam0, float fParam1) //Position: 0x3F77 / 16247
{
	if (!Function_40(&iParam0))
	{
		Function_89(&iParam0, fParam1);
	}
	return;
}

void Function_89(vector3 vParam0) //Position: 0x3F8F / 16271
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_99(&vParam0, 1);
	Function_12(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_90(int iParam0) //Position: 0x3FB4 / 16308
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_37(&iParam0, "RandUseTime", 0.0f));
}

void Function_91(vector3 vParam0) //Position: 0x3FD5 / 16341
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_92(bool bParam0) //Position: 0x3FEC / 16364
{
	struct<8> Var0;
	struct<25> Var8;
	
	if (iLocal_2 && !iLocal_4)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_96("BuyPaper_layout") };
		uLocal_9 = CREATE_LAYOUT(&Var0);
		GRINGO_GET_USE_COMPONENT_POSITION(&Var8 + 12, &bParam0);
		Var8 = Vector(0.0f, GRINGO_GET_USE_COMPONENT_HEADING(&bParam0), 0.0f);
		Var8.f_24 = 0;
		Function_93(&uLocal_9, 0, &Var8, 1, 0, 0);
		iLocal_4 = 1;
	}
	return;
}

var Function_93(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x404F / 16463
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_56(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BuyNewspaper", 1, 1);
	}
	Function_94(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_94(Vector3 vParam0, var uParam1) //Position: 0x40D8 / 16600
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&vParam0, 0);
	Function_95(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&vParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&vParam0, 0, 5.0f, 0);
	return;
}

void Function_95(float fParam0, struct<25> Param1) //Position: 0x4104 / 16644
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 43,07511f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(1,183828f, 1,324218f, 0,792503f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(0,616928f, -0,040504f, 0,785977f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

struct<32> Function_96(char* cParam0) //Position: 0x41BD / 16829
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_97(char* cParam0) //Position: 0x4229 / 16937
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_98() //Position: 0x424B / 16971
{
	return 1;
}

void Function_99(int iParam0, bool bParam1) //Position: 0x4252 / 16978
{
	iParam0 = (iParam0 || bParam1);
	return;
}

void Function_100(int iParam0, var uParam1, int iParam2) //Position: 0x4263 / 16995
{
	bool bVar0;
	
	Function_103(&iParam0);
	uParam1 = Function_103(&iParam0);
	iParam2 = Function_102(&iParam0);
	bVar0 = Function_101(&iParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	iParam2 = (iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

int Function_101(int iParam0) //Position: 0x42A8 / 17064
{
	return Function_37(&iParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_102(int iParam0) //Position: 0x42D4 / 17108
{
	return GRINGO_GET_USE_COMPONENT_HEADING(&iParam0);
}

struct<8> Function_103(int iParam0) //Position: 0x42E0 / 17120
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	if (Function_104(&iParam0))
	{
		uVar2 = GRINGO_GET_PARENT_COMPONENT(&iParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar2))
		{
			uVar3 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(&uVar2));
			if (IS_ACTOR_VALID(&uVar3))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&Var0, &iParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&uVar3), Var0, &Var0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&Var0, "CentreLocator", &iParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&Var0, "UseLocator", &iParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&Var0, &iParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, Var0;
}

bool Function_104(int iParam0) //Position: 0x43E2 / 17378
{
	return Function_33(&iParam0, "UsePosActorRelative", 0);
}

int Function_105(int iParam0) //Position: 0x4405 / 17413
{
	return Function_37(&iParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_106(int iParam0) //Position: 0x442D / 17453
{
	iParam0 = &iParam0;
	return;
}

void Function_107(int iParam0) //Position: 0x4439 / 17465
{
	iParam0 = &iParam0;
	return;
}

bool Function_108(int iParam0) //Position: 0x4445 / 17477
{
	return Function_33(&iParam0, "MaintainPosture", 0);
}

void Function_109(int iParam0) //Position: 0x4464 / 17508
{
	if (!Function_40(&iParam0))
	{
		Function_89(&iParam0, 0.0f);
	}
	return;
}

bool Function_110(var uParam0, int iParam1) //Position: 0x447B / 17531
{
	struct<2> Var0;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Function_103(&iParam1);
	Var0 = Function_103(&iParam1);
	bVar2 = Function_102(&iParam1);
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "AllowBuyPaper"))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uParam0, Var0, bVar2, 0, 1, true);
		}
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(&iParam1))
	{
		return Function_114(&uParam0, &iParam1);
	}
	uVar3 = Function_113(&iParam1);
	uVar4 = Function_101(&iParam1);
	Function_111(&iParam1);
	iVar5 = Function_111(&iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(&uParam0, &Var0, &iVar5, uVar3, 0,2f, 1, bVar2, uVar4, 0, 0);
}

struct<8> Function_111(int iParam0) //Position: 0x4515 / 17685
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Function_112(StackVal, &iParam0, "UserOffset", Var0);
	return StackVal, Function_112(StackVal, &iParam0, "UserOffset", Var0);
}

struct<8> Function_112(var uParam0, var uParam1, struct<2> Param2) //Position: 0x4539 / 17721
{
	struct<2> Var0;
	
	Var0 = Param2;
	GET_GRINGO_VECTOR_ATTR(&Var0, &uParam1, &uParam0);
	return StackVal, Var0;
}

int Function_113(int iParam0) //Position: 0x4558 / 17752
{
	return Function_37(&iParam0, "UseLocationTolerance", 0.0f);
}

int Function_114(var uParam0, int iParam1) //Position: 0x457C / 17788
{
	bool bVar0;
	float fVar1;
	var uVar2;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar8;
	var uVar10;
	var uVar12;
	struct<2> Var13;
	var uVar15;
	bool bVar17;
	
	bVar0 = Function_113(&iParam1);
	fVar1 = Function_101(&iParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", &iParam1, &uVar5))
	{
		bVar4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		uVar12 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "Volume"));
		if (IS_ACTOR_IN_VOLUME(&uParam0, &uVar12) && DECOR_CHECK_EXIST(&uParam0, "VolOnly"))
		{
			return 1;
		}
		GENERATE_RANDOM_POINT_IN_VOLUME(&uVar12, &uVar6);
		FIND_VOL_SURFACE_POINTS_FOR_POINT(&uVar12, &uVar6, &uVar8, &uVar10);
		bVar17 = false;
		bVar17 = FIND_INTERSECTION(&uVar8, &uVar10, &Var13, &uVar15, 1, 4294967295, 4194304);
		if (bVar17)
		{
			uVar2 = Var13;
			SET_GRINGO_VECTOR_ATTR(&Var13, "RandomPoint", &iParam1);
			SET_GRINGO_FLOAT_ATTR(bVar4, "RandomDirection", &iParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", &iParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&uVar2, "RandomPoint", &iParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(&uParam0, &uVar2, bVar0, 0,2f, 1, bVar4, fVar1, 1, 0);
}

bool Function_115(var uParam0, int iParam1) //Position: 0x46A4 / 18084
{
	iParam1 = Function_37(&uParam0, "AreaClearCheck", -1.0f);
	if (iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_116(var uParam0) //Position: 0x46D2 / 18130
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	
	uVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, 0);
	while (bVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uParam0)))
		{
			return 0;
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uParam0, bVar1 + 1);
	}
	bVar2 = false;
	iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(&uParam0))
	{
		iVar4 = GRINGO_GET_ATTRIBUTE(&uParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(&iVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(&iVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(&iVar4))
				{
					uVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar4, &uVar3);
					bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), 0);
					while (bVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0))))
						{
							return 0;
						}
						bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(&uVar5, 1, GRINGO_GET_PARENT_COMPONENT(&uParam0, 0), bVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_117(bool bParam0, bool bParam1) //Position: 0x47EB / 18411
{
	return (bParam0 && bParam1) == 0;
}

void Function_118(struct<69> Param0) //Position: 0x47F8 / 18424
{
	if (Function_117(Param0.f_64, 16))
	{
		if (Param0.f_68 > 5 && Param0.f_68 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16))
			{
				Function_2("UNSUSPEND MOVER", &Param0 + 24);
				ENABLE_MOVER(&Param0 + 24);
			}
			if (GRINGO_SHOULD_FIX_MOVER(&Param0 + 16))
			{
				Function_2("UNFIX MOVER", &Param0 + 24);
				SET_MOVER_FROZEN(&Param0 + 24, false);
			}
		}
	}
	return;
}

void Function_119(struct<69> Param0) //Position: 0x487A / 18554
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", &Param0 + 24);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", &Param0 + 24);
	}
	Function_35(&Param0 + 16, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			RESET_REACT_NODE_FOR_ACTOR(&Param0 + 24);
		}
	}
	iVar1 = 1;
	bVar2 = Function_33(&Param0 + 16, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(&Param0 + 24))
		{
			SET_ANIMAL_CAN_ATTACK(&Param0 + 24, 1);
		}
	}
	bVar3 = Function_33(&Param0 + 16, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(&Param0 + 24, 0);
	}
	if (Param0.f_68 < 8)
	{
		Function_44(&Param0 + 24, &Param0 + 16);
	}
	if ((HAS_INVENTORY_COMPONENT(&Param0 + 24) && Function_117(Param0.f_64, 32)) && Function_33(&Param0 + 16, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(&Param0 + 24, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_125(&Param0 + 24, &Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, Function_117(Param0.f_64, 64));
		Function_43(&Param0 + 24, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
		if (!Function_33(&Param0 + 16, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_117(Param0.f_64, 128) && Function_33(&Param0 + 16, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(&Param0 + 24);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
			if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				uVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(&uVar4))
				{
					SUPRESS_MOVER_COLLISIONS(&Param0 + 24, &uVar4, 0);
				}
			}
			if (Function_76(&Param0 + 16))
			{
				CLEAR_LINKED_ANIM_TARGET(&Param0 + 24);
			}
			if (Function_117(Param0.f_64, 16))
			{
				Function_118(&Param0);
				Function_12(&Param0 + 64, 16);
			}
			if (Function_117(Param0.f_64, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&Param0 + 24, false);
			}
			if (Function_124(&Param0 + 16) && Function_117(Param0.f_64, 512))
			{
				Function_12(&Param0 + 64, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 1);
				Function_2("Allow Bump Reactions", &Param0 + 24);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 1);
		}
	}
	bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, 0);
	while (bVar5 >= 4294967295)
	{
		uVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, &Param0 + 16);
		uVar7 = GRINGO_GET_PHYSINST(&uVar6);
		if (IS_PHYSINST_VALID(&uVar7))
		{
			uVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar7));
			if (IS_OBJECT_ANIMATOR_VALID(&uVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uVar8));
			}
			if (!IS_ACTOR_VALID(&Param0 + 24))
			{
				RESET_PROP(&uVar7);
			}
		}
		bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &Param0 + 16, bVar5 + 1);
	}
	if (Function_74(&Param0 + 16))
	{
		uVar9 = GRINGO_GET_PARENT_COMPONENT(&Param0 + 16, 3);
		if (IS_GRINGO_COMPONENT_VALID(&uVar9))
		{
			uVar10 = Function_75(&uVar9);
			if (IS_ACTOR_VALID(&uVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(&uVar10);
			}
		}
	}
	Function_123(&Param0 + 16);
	bVar11 = Function_33(&Param0 + 16, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(&Param0 + 24))
		{
			Function_122(&Param0, GET_TARGET_OBJECT());
		}
		uVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar12))
		{
			if (Function_117(Param0.f_64, 256))
			{
				Function_12(&Param0 + 64, 256);
				SET_PROP_FIXED(&uVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 56))
	{
		DESTROY_OBJECT(&Param0 + 56);
	}
	if (&Param0 + 16 == &iLocal_89)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(&uLocal_87));
		iLocal_89 = &uVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(&Param0 + 16, 0);
	if (Function_77(&Param0 + 16))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(&Param0 + 16, 1);
	}
	if (IS_ATTACHMENT_VALID(&Param0 + 48))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0 + 48);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar14, "UserObject", &Param0 + 16);
	Function_91(&Param0);
	Function_109(&Param0);
	GRINGO_CLEAR_COMPONENT_USER(&Param0 + 16);
	if (IS_ACTOR_VALID(&Param0 + 24) && bParam1)
	{
		Function_2("Setting reuse delay", &Param0 + 24);
		GRINGO_SET_REUSE_DELAY(Function_121(&Param0 + 16), &Param0 + 16);
	}
	Function_12(&Param0 + 64, 2);
	if (GRINGO_HANDLES_MOVEMENT(&Param0 + 16))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", &Param0 + 16);
	}
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24))
		{
			Function_120();
		}
	}
	else
	{
		Function_120();
	}
	Param0.f_68 = 0;
	(&Param0 + 24) = "";
	return;
}

void Function_120() //Position: 0x4E25 / 20005
{
	int iVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		iVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

int Function_121(int iParam0) //Position: 0x4E5F / 20063
{
	return Function_37(&iParam0, "ReuseDelay", 15.0f);
}

void Function_122(int iParam0, var uParam1) //Position: 0x4E7D / 20093
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_85(&iParam0 + 16, &uVar0);
	Function_84(&iParam0 + 16, &uVar1);
	iVar2 = Function_83(&iParam0 + 16);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(&iVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(&uParam1);
	return;
}

void Function_123(int iParam0) //Position: 0x4EBE / 20158
{
	iParam0 = &iParam0;
	return;
}

bool Function_124(int iParam0) //Position: 0x4ECA / 20170
{
	return Function_33(&iParam0, "BlockBumpReactions", 0);
}

void Function_125(var uParam0, int iParam1) //Position: 0x4EEC / 20204
{
	bool bVar0;
	bool bVar1;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	
	uParam0 = &uParam0;
	bVar0 = false;
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", &iParam1) && bLocal_3)
	{
		if (!HAS_ITEM("nNEWSPAPER", &Global_54076))
		{
			Function_129(14, 0, 0);
			Function_15("BoughtFirstPaper", 0x41200000, 1, 0, 2, 1, 0);
		}
		if (Function_24(57, 0))
		{
			bVar1 = SHIFT_LEFT(true, 8);
			SHOW_NEWSPAPER(8, "NULL", 1, 1);
		}
		else if (Function_24(43, 0) && Function_24(46, 0))
		{
			bVar1 = SHIFT_LEFT(true, 7);
			SHOW_NEWSPAPER(7, "NULL", 1, 1);
		}
		else if (Function_24(46, 0))
		{
			bVar1 = SHIFT_LEFT(true, 6);
			SHOW_NEWSPAPER(6, "NULL", 1, 1);
		}
		else if (Function_24(41, 0))
		{
			bVar1 = SHIFT_LEFT(true, 5);
			SHOW_NEWSPAPER(5, "NULL", 1, 1);
		}
		else if (Function_24(34, 0) && Function_24(31, 0))
		{
			bVar1 = SHIFT_LEFT(true, 4);
			SHOW_NEWSPAPER(4, "NULL", 1, 1);
		}
		else if (Function_24(26, 0))
		{
			bVar1 = SHIFT_LEFT(true, 3);
			SHOW_NEWSPAPER(3, "NULL", 1, 1);
		}
		else if (Function_24(23, 0))
		{
			bVar1 = SHIFT_LEFT(true, 2);
			SHOW_NEWSPAPER(2, "NULL", 1, 1);
		}
		else if (Function_24(17, 0))
		{
			bVar1 = SHIFT_LEFT(true, true);
			SHOW_NEWSPAPER(true, "NULL", 1, 1);
		}
		else if (Function_24(4, 0))
		{
			bVar1 = SHIFT_LEFT(true, false);
			SHOW_NEWSPAPER(false, "NULL", 1, 1);
		}
		iVar3 = Function_27(472);
		if (iVar3 <= 0)
		{
			iVar3 = 0;
		}
		Function_99(&iVar3, bVar1);
		Function_127(472, iVar3, 0);
		bVar0 = true;
		Function_126(&iLocal_23);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Buy_NewsOld", &iParam1) && bLocal_3)
	{
		if (!HAS_ITEM("nNEWSPAPER", &Global_54076))
		{
			Function_129(14, 0, 0);
			Function_15("BoughtFirstPaper", 0x41200000, 1, 0, 2, 1, 0);
		}
		Function_19(&iVar4, &uVar5, &iVar6);
		bVar7 = Function_27(472);
		if (bVar7 <= 0)
		{
			bVar7 = false;
		}
		if (Function_24(57, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 8))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 8));
			}
		}
		if (Function_24(43, 0) && Function_24(46, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 7))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 7));
			}
		}
		if (Function_24(46, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 6))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 6));
			}
		}
		if (Function_24(41, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 5))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 5));
			}
		}
		if (Function_24(34, 0) && Function_24(31, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 4))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 4));
			}
		}
		if (Function_24(26, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 3))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 3));
			}
		}
		if (Function_24(23, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 2))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, 2));
			}
		}
		if (Function_24(17, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, true))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, true));
			}
		}
		if (Function_24(4, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, false))
			{
				Function_99(&bVar7, SHIFT_LEFT(true, false));
			}
		}
		Function_127(472, bVar7, 0);
		PRINTSTRING("Issue we now have: ");
		PRINTINT(bVar7);
		PRINTNL();
		bVar0 = true;
		Function_126(&iLocal_23);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("UseCase1", &iParam1))
	{
		if (STRING_LENGTH(&uLocal_21) >= 0)
		{
			DECOR_REMOVE(&uParam0, &uLocal_21);
		}
	}
	if (bVar0)
	{
		if (IS_LAYOUTREF_VALID(&uLocal_9))
		{
			DESTROY_LAYOUT_OBJECTS(&uLocal_9);
			DESTROY_LAYOUT(&uLocal_9);
		}
		CAMERA_RESET(0);
		iLocal_4 = 0;
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "AllowBuyPaper");
		if (IS_BLIP_VALID(&iLocal_11))
		{
			REMOVE_BLIP(&iLocal_11);
		}
	}
	return;
}

void Function_126(int iParam0) //Position: 0x52E8 / 21224
{
	Function_89(&iParam0, 0.0f);
	return;
}

int Function_127(int iParam0, bool bParam1, bool bParam2) //Position: 0x52F5 / 21237
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_128(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (&bParam2)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_128(int iParam0, float fParam1, bool bParam2) //Position: 0x5591 / 21905
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_129(bool bParam0, bool bParam1, int iParam2) //Position: 0x57D5 / 22485
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_130(bParam0), Function_29()) == 0)
		{
			ADD_ITEM(Function_130(bParam0), Function_29(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_130(bParam0), Function_29(), &iParam2);
	return 1;
}

var Function_130(bool bParam0) //Position: 0x5823 / 22563
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_131(var uParam0, bool bParam1) //Position: 0x5917 / 22807
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam1)
		{
			Function_150("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			if (&bParam1)
			{
				Function_150("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(&bLocal_92))
			{
				if (&bParam1)
				{
					Function_150("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(&bLocal_92);
			}
		}
	}
	if (&bParam1)
	{
		Function_150("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x5A27 / 23079
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &iParam1, &iParam0, 0, 0, 0);
	return;
}

void Function_133(struct<69> Param0) //Position: 0x5A3F / 23103
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	*(&Param0 + 24) = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(&Param0 + 24))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	*(&Param0 + 16) = &uVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(&uVar0))
	{
		if (IS_ACTOR_HORSE(&Param0 + 24))
		{
			*(&Param0 + 56) = CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, StackVal, &Param0 + 24, "ngringoObs", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1,75f, 2.0f));
		}
		else
		{
			*(&Param0 + 56) = CREATE_OBSTACLE_ON_OBJECT(StackVal, StackVal, StackVal, &Param0 + 24, "ngringoObs", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(0,5f, 1.0f, 0,5f));
		}
		ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 56, &Param0 + 24, Function_56(), Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	Function_91(&Param0);
	Function_2("Going to eGringoPositioning", &Param0 + 24);
	Param0.f_68 = 2;
	Function_99(&Param0 + 64, 2);
	Function_12(&Param0 + 64, 8);
	Function_12(&Param0 + 64, 16);
	Function_12(&Param0 + 64, 64);
	SET_GRINGO_OBJECT_REF_ATTR(&Param0 + 24, "UserObject", &uVar0);
	GRINGO_SET_COMPONENT_USER(&Param0 + 24, &uVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(&Param0 + 16) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		uVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(&uVar1))
		{
			SUPRESS_MOVER_COLLISIONS(&Param0 + 24, &uVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(&uVar2, "LastUserObject", &Param0 + 16);
	if (!Function_136(&Param0 + 16))
	{
		if (HAS_INVENTORY_COMPONENT(&Param0 + 24))
		{
			if (ACTOR_HOLSTER_WEAPON(&Param0 + 24, 1))
			{
				Function_99(&Param0 + 64, 32);
			}
			else
			{
				Function_12(&Param0 + 64, 32);
			}
		}
		else
		{
			Function_12(&Param0 + 64, 32);
		}
		if (Function_117(Param0.f_64, 32))
		{
			Function_99(&Param0 + 64, 128);
		}
		else
		{
			Function_12(&Param0 + 64, 128);
		}
	}
	else
	{
		Function_12(&Param0 + 64, 32);
	}
	if (Function_135(&Param0 + 16))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 24, GET_WEAPON_EQUIPPED(&Param0 + 24, true), 1))
			{
				Function_99(&Param0 + 64, 128);
			}
		}
		else
		{
			Function_99(&Param0 + 64, 128);
		}
	}
	if (Function_124(&Param0 + 16))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24))
		{
			Function_99(&Param0 + 64, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 24, 0);
			Function_2("Block Bump Reactions", &Param0 + 24);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(&Param0 + 24) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(&Param0 + 16))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(&Param0 + 24, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(&Param0 + 24, 0);
	Function_134(&Param0 + 24, &uVar0);
	Function_2("START: ", &Param0 + 24);
	return;
}

void Function_134(var uParam0, var uParam1) //Position: 0x5D5B / 23899
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam1 = &uParam1;
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		if (IntToFloat(Function_18()) <= 1.0f)
		{
			bLocal_3 = true;
			iLocal_2 = 1;
			Function_126(&iLocal_5);
			uVar0 = Function_28(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1");
			if (IS_OBJECT_VALID(&uVar0))
			{
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(GET_ACTOR_FROM_OBJECT(&uVar0));
			}
		}
		else
		{
			Function_15("Cant_Afford_Paper", 0x41200000, 1, 0, 2, 1, 0);
			bLocal_3 = false;
			iLocal_2 = 0;
		}
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("UseCase1", &uParam1))
	{
		uLocal_21 = "";
		iVar3 = 1;
		if (Function_24(57, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2))
			{
				uLocal_21 = "newsie_home03";
				iVar3 = 0;
			}
		}
		if ((Function_24(43, 0) && Function_24(46, 0)) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(57, 0))
			{
				uLocal_21 = "newsie_fbi01";
				iVar3 = 0;
			}
		}
		if (Function_24(46, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(43, 0))
			{
				uLocal_21 = "newsie_anthro03";
				iVar3 = 0;
			}
		}
		if (Function_24(41, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(46, 0))
			{
				uLocal_21 = "newsie_rebel05";
				iVar3 = 0;
			}
		}
		if ((Function_24(34, 0) && Function_24(31, 0)) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(41, 0))
			{
				uLocal_21 = "newsie_mexgirl02";
				iVar3 = 0;
			}
		}
		if (Function_24(26, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(34, 0))
			{
				uLocal_21 = "newsie_mexarmy02";
				iVar3 = 0;
			}
		}
		if (Function_24(23, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(26, 0))
			{
				uLocal_21 = "newsie_marshal03";
				iVar3 = 0;
			}
		}
		if (Function_24(17, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(23, 0))
			{
				uLocal_21 = "newsie_merchant04";
				iVar3 = 0;
			}
		}
		if (Function_24(4, 0) && iVar3)
		{
			iVar1 = Function_20(StackVal);
			iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&iVar1), GET_HOUR(&iVar1) + 6, GET_MINUTE(&iVar1), GET_SECOND(&iVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar2) || Function_24(17, 0))
			{
				uLocal_21 = "newsie_ranch02";
				iVar3 = 0;
			}
		}
		if (STRING_LENGTH(&uLocal_21) >= 0)
		{
			DECOR_SET_BOOL(&uParam0, &uLocal_21, true);
		}
	}
	return;
}

bool Function_135(int iParam0) //Position: 0x61AE / 25006
{
	return Function_33(&iParam0, "DrawWeapon", 0);
}

bool Function_136(int iParam0) //Position: 0x61C8 / 25032
{
	return Function_33(&iParam0, "AllowWeapon", 0);
}

void Function_137(int iParam0, var uParam1) //Position: 0x61E3 / 25059
{
	bool bVar0;
	int iVar1;
	
	iParam0 = &iParam0;
	iVar1 = Function_138(&uParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				iVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(&iVar1);
	return;
}

bool Function_138(var uParam0, int iParam1) //Position: 0x6221 / 25121
{
	return Function_35(&uParam0, "UseName", &iParam1);
}

bool Function_139(struct<65> Param0) //Position: 0x623A / 25146
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	struct<2> Var8;
	struct<2> Var10;
	float fVar12;
	bool bVar13;
	char* cVar14[64];
	bool bVar30;
	float fVar31;
	
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	uVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&Var2, &uVar1, &uVar0);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		bVar4 = GRINGO_IS_CHARACTER_BLEND_PAUSED(&uVar0);
		if (GET_ACTOR_GAIT_TYPE(&uVar1) != 4 && !bVar4)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(&uVar1, "stand_hostage") && !Function_33(&Param0 + 16, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&uVar1)))
			{
				iVar5 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", &uVar0, &iVar5);
				if (iVar5 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_6606)
		{
			if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
			{
				if (!Function_30(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(&uVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&uVar1) && !bVar4)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(&uVar1))
		{
			return 0;
		}
		if (!Function_143(&uVar1, &Param0 + 16))
		{
			GRINGO_SET_REQUEST_FAILURE_REASON(1);
			return 0;
		}
		if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
		{
			if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Gringo_PropInUse"))
			{
				GRINGO_SET_REQUEST_FAILURE_REASON(2);
				return 0;
			}
		}
		uVar6 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(&uVar6))
		{
			uVar7 = GET_PROP_FROM_OBJECT(&uVar6);
			if (IS_PHYSINST_VALID(&uVar7))
			{
				if (HAS_PHYSINST_BROKEN_APART(&uVar7))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_117(Param0.f_64, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_99(&Param0 + 64, 1);
			}
			else
			{
				Function_12(&Param0 + 64, 1);
			}
			if (Function_117(Param0.f_64, 1))
			{
				Function_132("MIDACTION REQUEST", &uVar1);
			}
			else
			{
				Function_103(&Param0 + 16);
				Var8 = Function_103(&Param0 + 16);
				Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var8, StackVal);
				fVar12 = Function_142(&Param0 + 16);
				bVar13 = VMAG(Var10);
				if (bVar13 < fVar12 && !GRINGO_HANDLES_MOVEMENT(&uVar0))
				{
					strcpy(&cVar14, "nTOO FAR (", 64);
					straddi(&cVar14, FLOOR((bVar13 * 10.0f)), 64);
					stradd(&cVar14, " > ", 64);
					straddi(&cVar14, FLOOR((fVar12 * 10.0f)), 64);
					stradd(&cVar14, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_141(&uVar1, &Param0 + 16))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar30 = Function_140(&Param0 + 16);
				if (!bVar30 != 0.0f)
				{
					if (bVar30 < 0.0f)
					{
						fVar31 = (UNK_0x9C40E671(&Var10) - Function_102(&Param0 + 16));
					}
					else
					{
						fVar31 = ((180.0f + UNK_0x9C40E671(&Var10)) - Function_102(&Param0 + 16));
					}
					if (fVar31 < 180.0f)
					{
						fVar31 = (fVar31 - 360.0f);
					}
					else if (fVar31 > -180.0f)
					{
						fVar31 = (fVar31 + 360.0f);
					}
					if (fVar31 < FABS(bVar30))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			iParam1 = 1;
			return 1;
		}
		if (&Param0 + 24 == GRINGO_GET_REQUESTING_ACTOR())
		{
			iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

int Function_140(int iParam0) //Position: 0x6532 / 25906
{
	return Function_37(&iParam0, "ActivationCone", 0.0f);
}

bool Function_141(var uParam0, int iParam1) //Position: 0x6550 / 25936
{
	struct<5> Var0;
	float fVar5;
	
	fVar2 = GRINGO_GET_USE_COMPONENT_HEADING(&iParam1);
	bVar3 = GET_HEADING(&uParam0);
	fVar4 = Function_37(&iParam1, "HeadingTolerance", -1.0f);
	fVar5 = (fVar2 - bVar3);
	if (fVar4 != -1.0f)
	{
		return 1;
	}
	Function_103(&iParam1);
	Var0 = Function_103(&iParam1);
	GET_POSITION(&uParam0, &Var0);
	Var0.f_4 = (StackVal + 1,5f);
	Function_103(&iParam1);
	Var0 = Function_103(&iParam1);
	Var0.f_4 = (StackVal + 1,5f);
	if (fVar5 > 0.0f)
	{
		fVar5 = (fVar5 + 360.0f);
	}
	if (fVar5 <= (360.0f - fVar4) || fVar5 >= fVar4)
	{
		return 1;
	}
	return 0;
}

int Function_142(int iParam0) //Position: 0x65F0 / 26096
{
	return Function_37(&iParam0, "ActivationRadius", 2.0f);
}

bool Function_143(int iParam0, int iParam1) //Position: 0x6610 / 26128
{
	int iVar0;
	
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", &iParam1) || GRINGO_COMPONENT_CHECK_NAME("Buy_NewsOld", &iParam1))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
		{
			iVar0 = 0;
			if (Function_6(&iParam1, &iVar0, &iParam0))
			{
				return 1;
			}
			if ((((!iLocal_19 && GRINGO_COMPONENT_CHECK_NAME("Buy_News", &iParam1)) && !Function_14(0, 0, 1, 1)) && !Global_99146) && iVar0 != 100)
			{
				if (Function_144(&iLocal_23, 6.0f))
				{
					iLocal_19 = 1;
					Function_15("No_New_Paper", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (!Function_40(&iLocal_23))
				{
					iLocal_19 = 1;
					Function_15("No_New_Paper", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			return 0;
		}
		return 0;
	}
	return 1;
}

bool Function_144(var uParam0, int iParam1) //Position: 0x66E6 / 26342
{
	if (Function_145(&uParam0, iParam1))
	{
		Function_91(&uParam0);
		return 1;
	}
	return 0;
}

bool Function_145(var uParam0, float fParam1) //Position: 0x6700 / 26368
{
	if (Function_40(&uParam0))
	{
		if (Function_38(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_146(int iParam0) //Position: 0x671E / 26398
{
	iParam0 = &iParam0;
	return;
}

void Function_147(var uParam0, int iParam1) //Position: 0x672A / 26410
{
	bool bVar0;
	var uVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, &uParam0))
	{
		Function_148(&(vLocal_27[iLocal_839]), &uParam0);
		iLocal_83++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(&uParam0) >= 0)
	{
		bVar0 = false;
		bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0);
		while (bVar0 <= 0 && iParam1 > 3)
		{
			uVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar0, &uParam0);
			Function_147(&uVar1, &iParam1);
			bVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, &uParam0, bVar0 + 1);
		}
	}
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x6796 / 26518
{
	*(&iParam0 + 16) = &iParam1;
	Function_12(&iParam0 + 64, 1);
	return;
}

void Function_149(int iParam0) //Position: 0x67AE / 26542
{
	iParam0 = &iParam0;
	return;
}

void Function_150(bool bParam0) //Position: 0x67BA / 26554
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), &bParam0, 0, 0, 0);
	return;
}

