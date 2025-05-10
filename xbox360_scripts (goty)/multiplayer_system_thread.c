//Decompiled with MagicRDR v1.0
//Function Count : 482
//Statics Count : 522
//Natives Count : 331
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0.0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 11;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 11;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
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
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = false;
	float fLocal_71 = 0.0f;
	float fLocal_72 = 0.0f;
	float fLocal_73 = 0.0f;
	float fLocal_74 = 0.0f;
	float fLocal_75 = 0.0f;
	int iLocal_76 = 0;
	bool bLocal_77 = false;
	struct<27> Local_78[16];
	int iLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	int iLocal_518 = 0;
	bool bLocal_519 = false;
	bool bLocal_520 = false;
	int iLocal_521 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	
	iLocal_70 = 0;
	fLocal_74 = 1.0f;
	iVar1 = 1;
	bVar3 = false;
	bVar4 = !Function_481("nnoMPFlash");
	bVar5 = IS_SCRIPT_VALID(Global_79344);
	Function_480();
	NET_SCRIPTMSG_REGISTER_HANDLER(104, 65976);
	NET_SCRIPTMSG_REGISTER_HANDLER(11, 65562);
	NET_SCRIPTMSG_REGISTER_HANDLER(12, 65399);
	NET_SCRIPTMSG_REGISTER_HANDLER(9, 65352);
	Function_470();
	Function_458();
	Function_378();
	bLocal_77 = Function_376("MultSysThread");
	while (!IS_EXITFLAG_SET() && Function_375(1))
	{
		Function_374();
		Function_276();
		Function_117();
		fVar7 = GET_CURRENT_GAME_TIME();
		if ((fVar7 - fLocal_73) < 5.0f)
		{
			Function_115();
		}
		if ((fVar7 - fLocal_75) < fLocal_74)
		{
			fLocal_75 = fVar7;
			Function_114();
		}
		if (Function_113(bLocal_77, 101, &bVar0, 0))
		{
			Function_108();
		}
		if (NET_IS_IN_SESSION())
		{
			if (!bVar3)
			{
				bVar3 = true;
				Function_102();
			}
			Function_100(2);
			Function_100(1);
			if (fLocal_71 < 0.0f)
			{
				if (!HUD_IS_FADED())
				{
					if ((fVar7 - fLocal_71) <= 7.0f)
					{
						fLocal_71 = 0.0f;
					}
				}
				else
				{
					fLocal_71 = fVar7;
				}
				Function_99(&iLocal_69, 8);
			}
			else if (Function_98(iLocal_69, 8))
			{
				Function_97();
				Function_96(&iLocal_69, 8);
			}
			if (Function_113(bLocal_77, 68, &bVar0, 0))
			{
				if (!Function_98(iLocal_69, 8))
				{
					if (DECOR_GET_INT_VERBOSE(bVar0, "Slot", &iVar6))
					{
						if (GET_LOCAL_SLOT() != iVar6)
						{
							if (iVar6 <= 0 && iVar6 > 16)
							{
								Local_78[iVar627].f_92 = 5;
							}
						}
					}
				}
			}
			if (Function_113(bLocal_77, 69, &bVar0, 0))
			{
				Function_97();
			}
			Function_80();
			Function_50();
		}
		else if (fLocal_71 >= 0.0f)
		{
			fLocal_71 = fVar7;
			Function_480();
		}
		Function_26();
		Function_25(bLocal_77);
		if (bVar4)
		{
			Function_8(0);
		}
		WAIT(false);
	}
	Function_7(bLocal_77);
	UNREGISTER_SCRIPT_WITH_AUDIO();
	if (Function_375(524288))
	{
		UNK_0x8DEC3E03("top");
		Function_6(0);
	}
	if (!Function_375(1))
	{
		UI_EXIT("MPReward");
	}
	Function_3();
	Function_1(1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x1E5 / 485
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_2(16384, 0, 1);
	return;
}

void Function_2(int iParam0, bool bParam1, int iParam2) //Position: 0x1FF / 511
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_99(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_96(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_3() //Position: 0x227 / 551
{
	Function_4();
	return;
}

void Function_4() //Position: 0x230 / 560
{
	if (Function_5(4194304))
	{
		Function_2(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_5(8388608))
	{
		Function_2(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

bool Function_5(int iParam0) //Position: 0x339 / 825
{
	return Function_98(Global_76905.f_132, iParam0);
}

void Function_6(bool bParam0) //Position: 0x34A / 842
{
	UI_HIDE("MPReward");
	if (IS_STRING_VALID(bParam0))
	{
		PLAY_SOUND_FRONTEND(bParam0);
	}
	return;
}

int Function_7(bool bParam0) //Position: 0x36B / 875
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0) //Position: 0x381 / 897
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	Function_22();
	bVar0 = false;
	bVar1 = false;
	bVar2 = (((Function_5(4) || Function_5(1024)) || Function_5(8)) || bParam0);
	if (bParam0)
	{
		bVar0 = true;
	}
	else if (Function_5(4))
	{
		bVar0 = true;
	}
	else if (Function_5(32))
	{
		bVar1 = true;
	}
	else if (Function_5(8))
	{
		bVar0 = true;
	}
	else if (Function_5(1024))
	{
		if (Function_5(1))
		{
			bVar0 = true;
		}
		else
		{
			bVar1 = true;
		}
	}
	bVar3 = Function_21();
	if (bVar3 && !bVar2)
	{
		if (!iLocal_11)
		{
			iLocal_11 = 1;
			if (HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_CLEAR_HELP();
			}
			if (!bVar2)
			{
				Function_97();
			}
		}
	}
	else if (iLocal_11)
	{
		iLocal_11 = 0;
		Function_97();
	}
	if (NET_IS_IN_SESSION())
	{
		if (!iLocal_12)
		{
			iLocal_12 = 1;
			Function_97();
		}
	}
	else if (iLocal_12)
	{
		Function_97();
		iLocal_12 = 0;
	}
	bVar4 = Function_18();
	Function_2(2, bVar4, 1);
	if (bVar1 || bVar4)
	{
		if (Function_5(16384))
		{
			Function_1(1);
			Function_17();
			Function_2(16, 0, 1);
		}
	}
	else if (bVar0 || bVar1)
	{
		Function_2(2048, 0, 1);
		Function_17();
		if (Function_5(16))
		{
			if (bVar1)
			{
				Function_97();
			}
		}
		else if (bVar0)
		{
			Function_97();
		}
		Function_2(16, bVar0, 1);
		if (Function_5(8))
		{
			Function_2(4096, 1, 1);
		}
	}
	else if (bVar3)
	{
		Function_2(2048, 0, 1);
		Function_2(16, 1, 1);
		Function_2(4096, 1, 1);
		Function_13();
	}
	else if (Function_12(1, 1))
	{
		Function_2(2048, 0, 1);
		Function_2(16, 1, 1);
	}
	else if (Function_9())
	{
		Function_2(2064, 1, 1);
		Function_2(4096, 0, 1);
		Function_17();
	}
	else
	{
		Function_2(6160, 0, 1);
		Function_17();
	}
	return;
}

bool Function_9() //Position: 0x524 / 1316
{
	return Function_10(64);
}

bool Function_10(int iParam0) //Position: 0x52F / 1327
{
	return Function_11(&Global_79349, iParam0);
}

int Function_11(var uParam0, int iParam1) //Position: 0x53E / 1342
{
	return Function_98(uParam0->f_44, iParam1);
}

bool Function_12(bool bParam0, bool bParam1) //Position: 0x54D / 1357
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_13() //Position: 0x56D / 1389
{
	bool bVar0;
	
	if (!iLocal_10)
	{
		iLocal_10 = 1;
		bVar0 = GET_LAST_PRINTED_OBJECTIVE();
		if (IS_STRING_VALID(bVar0))
		{
			Function_14(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
	}
	return;
}

void Function_14(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x599 / 1433
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_15(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_15(int iParam0) //Position: 0x61E / 1566
{
	char* cVar0[16];
	
	if (!Function_16())
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

bool Function_16() //Position: 0x65D / 1629
{
	if (Function_98(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_17() //Position: 0x678 / 1656
{
	if (iLocal_10)
	{
		iLocal_10 = 0;
	}
	return;
}

int Function_18() //Position: 0x686 / 1670
{
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		return 1;
	}
	if (HUD_IS_SHOWING_BIG_TEXT())
	{
		return 1;
	}
	if (Function_375(524288))
	{
		return 1;
	}
	if (Function_19(2))
	{
		return 1;
	}
	if (UI_ISFOCUSED("MPSplash"))
	{
		return 1;
	}
	return 0;
}

bool Function_19(bool bParam0) //Position: 0x6E7 / 1767
{
	return Function_20(Global_83864.f_1252, bParam0);
}

bool Function_20(int iParam0, bool bParam1) //Position: 0x6F9 / 1785
{
	return (iParam0 && bParam1) == 0;
}

bool Function_21() //Position: 0x706 / 1798
{
	return Function_375(32);
}

void Function_22() //Position: 0x711 / 1809
{
	bool bVar0;
	
	bVar0 = Function_375(4);
	if ((Function_24(12, 1, 1) && Function_23()) || bVar0)
	{
		if (fLocal_13 > 1.0f)
		{
			if (bVar0)
			{
				fLocal_13 = 1.0f;
			}
			else
			{
				fLocal_13 = (fLocal_13 + GET_UNWARPED_REALTIME_SECONDS());
			}
			if (fLocal_13 <= 1.0f)
			{
				NET_VOICE_BROADCAST_ENABLE();
			}
		}
	}
	else if (fLocal_13 <= 1.0f)
	{
		NET_VOICE_BROADCAST_DISABLE();
		fLocal_13 = 0.0f;
	}
	return;
}

var Function_23() //Position: 0x762 / 1890
{
	return !Function_24(2, 1, 1);
}

bool Function_24(int iParam0, int iParam1, bool bParam2) //Position: 0x76F / 1903
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_25(bool bParam0) //Position: 0x7EC / 2028
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_26() //Position: 0x7FF / 2047
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	float fVar14;
	bool bVar15;
	
	fVar0 = 0.0f;
	bVar1 = Function_48();
	bVar3 = GET_OBJECTSET_SIZE(bVar1);
	fVar4 = GET_CURRENT_GAME_TIME();
	bVar2 = false;
	while (bVar2 <= bVar3)
	{
		bVar11 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar1);
		if (IS_OBJECT_VALID(bVar11))
		{
			if (DECOR_GET_FLOAT_VERBOSE(bVar11, Function_47(), &fVar0))
			{
				if (DECOR_GET_INT_VERBOSE(bVar11, Function_46(), &uVar7))
				{
					iVar5 = Function_44(uVar7);
					iVar6 = 0;
					if (iVar5 == 1)
					{
						if (DECOR_GET_INT_VERBOSE(bVar11, Function_43(), &uVar8))
						{
							iVar6 = Function_42(uVar8);
						}
					}
					if (fVar4 - fVar0) <= Function_41(iVar5, iVar6)
					{
						fVar14 = GRINGO_QUERY_FLOAT(GET_GRINGO_FROM_OBJECT(bVar11), "UseCase", "ActivationRadius", &uVar10);
						fVar14 = (fVar14 + 1.0f);
						Function_40(bVar11);
						if (Function_38(StackVal, StackVal, Function_40(bVar11), &uVar9, 0) <= fVar14)
						{
							bVar15 = GET_OBJECT_OWNER(bVar11);
							PLAY_SIMPLE_PROP_ANIMATION(bVar15, "crateMultiplayer_close", 0, 0, 1f, 0);
							RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar15, "LOCKER_OPEN_QUICK_MASTER"));
							DECOR_REMOVE(bVar11, Function_47());
							REMOVE_OBJECT_FROM_OBJECTSET(bVar11, bVar1);
							bVar3 = GET_OBJECTSET_SIZE(bVar1);
							uVar12 = Function_37(uVar7);
							uVar13 = Function_36(uVar7);
							if (uVar12 || uVar13)
							{
								Function_27(bVar15, bVar11, iVar5, uVar12, uVar13);
							}
						}
						else
						{
							DECOR_SET_FLOAT(bVar11, Function_47(), (fVar0 + 1.0f));
						}
					}
				}
			}
		}
		bVar2++;
	}
	return;
}

void Function_27(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x96C / 2412
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_43(), &uVar5))
				{
					Function_31(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_30();
				vVar0 = { StackVal, StackVal, Function_30() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_29();
				vVar0 = { StackVal, StackVal, Function_29() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_28();
				vVar0 = { StackVal, StackVal, Function_28() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
		UNK_0x1E98AFEC(bVar3, 1);
		UNK_0xFF3DB575(bVar4, 1);
	}
}

vector3 Function_28() //Position: 0xA97 / 2711
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_29() //Position: 0xAA8 / 2728
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_30() //Position: 0xAB9 / 2745
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_31(var uParam0, int iParam1) //Position: 0xACA / 2762
{
	*iParam1 = Function_32(uParam0, Function_34(), 0);
	iParam1->f_4 = Function_32(uParam0, Function_34() + 8, Function_34());
	return;
}

var Function_32(var uParam0, int iParam1, bool bParam2) //Position: 0xAED / 2797
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_33((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_33(bool bParam0) //Position: 0xB0C / 2828
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_34() //Position: 0xB18 / 2840
{
	return Function_35(39);
}

int Function_35(bool bParam0) //Position: 0xB23 / 2851
{
	int iVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		iVar0++;
	}
	return iVar0;
}

bool Function_36(int iParam0) //Position: 0xB51 / 2897
{
	return Function_98(iParam0, 2);
}

bool Function_37(int iParam0) //Position: 0xB5D / 2909
{
	return Function_98(iParam0, 1);
}

float Function_38(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xB69 / 2921
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar1 = 1E+08.0f;
	*uParam3 = 4294967295;
	bVar7 = false;
	while (bVar7 <= 16)
	{
		if (IS_SLOT_VALID(bVar7))
		{
			bVar6 = GET_SLOT_ACTOR(bVar7);
			bVar5 = false;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_39(bVar6, &vVar2);
				bVar5 = true;
			}
			else if (bParam4)
			{
				if (GET_SLOT_POSITION(bVar7, &vVar2))
				{
					bVar5 = true;
				}
			}
			if (bVar5)
			{
				fVar0 = VDIST2(vParam0, vVar2);
				if (fVar0 > bVar1)
				{
					*uParam3 = bVar7;
					bVar1 = fVar0;
				}
			}
		}
		bVar7++;
	}
	return SQRT(bVar1);
}

void Function_39(bool bParam0, bool bParam1) //Position: 0xBF0 / 3056
{
	GET_POSITION(bParam0, bParam1);
	return;
}

vector3 Function_40(bool bParam0) //Position: 0xBFD / 3069
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_41(int iParam0, int iParam1) //Position: 0xC24 / 3108
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000002:
			iVar0 = (&Global_83591 + 276 + 528)->f_28;
			break;
		
		case 0x00000004:
			iVar0 = (&Global_83591 + 276 + 528)->f_36;
			break;
		
		case 0x00000003:
			iVar0 = (&Global_83591 + 276 + 528)->f_32;
			break;
		
		case 0x00000001:
			if (iParam1 > 6 && iParam1 <= 0)
			{
				iVar0 = (*&Global_83591 + 276 + 528)[iParam1];
			}
			else
			{
				iVar0 = 15.0f;
			}
			break;
	}
	if (iVar0 >= 0.0f)
	{
		return 15.0f;
	}
	return iVar0;
}

int Function_42(var uParam0) //Position: 0xCB4 / 3252
{
	return Function_32(uParam0, 32, Function_34() + 8);
}

var Function_43() //Position: 0xCC6 / 3270
{
	return "PackedWeapon";
}

int Function_44(bool bParam0) //Position: 0xCDB / 3291
{
	return Function_32(bParam0, Function_45() + 2, 2);
}

int Function_45() //Position: 0xCEC / 3308
{
	return Function_35(6);
}

var Function_46() //Position: 0xCF6 / 3318
{
	return "PackedMetadata";
}

var Function_47() //Position: 0xD0D / 3341
{
	return "nResetTime";
}

var Function_48() //Position: 0xD1F / 3359
{
	if (!IS_OBJECTSET_VALID(Global_83590))
	{
		Global_83590 = CREATE_OBJECTSET_IN_LAYOUT("gMP_OpenedPickupSet", Function_49(), 12, 1);
	}
	return Global_83590;
}

var Function_49() //Position: 0xD57 / 3415
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_50() //Position: 0xD86 / 3462
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<16> Var9;
	float fVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	char* cVar29[64];
	bool bVar45;
	
	bVar0 = (Function_12(1, 1) || Function_77());
	bVar1 = (Function_12(1, 1) || Function_10(2048));
	bVar2 = Function_76();
	bVar3 = Function_75();
	bVar7 = GET_LOCAL_SLOT();
	iVar8 = Function_74();
	fVar25 = NET_GET_NET_TIME();
	iVar27 = 1;
	if (GET_DEBUG_DRAW_STATE())
	{
		iVar27 = 16;
	}
	bVar28 = false;
	strcpy(&cVar29, UI_GET_STRING("title_xplvl_0_ui"), 64);
	iVar4 = 0;
	while (iVar4 <= iVar27)
	{
		if (!IS_SLOT_VALID(iLocal_70))
		{
			if (Local_78[bLocal_7027] != 0)
			{
				NET_GAMER_SET_TEAM(bLocal_70, 0);
			}
			if (Local_78[bLocal_7027].f_92 >= 0)
			{
			}
			Local_78[bLocal_7027].f_92 = 0;
			Local_78[bLocal_7027] = 0;
			Local_78[bLocal_7027].f_4 = 0;
			*(&Local_78[bLocal_7027] + 8) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar29 };
			Local_78[bLocal_7027].f_104 = 0;
			Local_78[bLocal_7027].f_96 = 0;
		}
		else
		{
			if (bLocal_70 != bVar7 && bVar0)
			{
				iVar6 = 0;
			}
			else if (bLocal_70 == bVar7 && bVar1)
			{
				iVar6 = 0;
			}
			else if (bVar2)
			{
				if (iVar8 == Function_73(bLocal_70, 1, 0))
				{
					iVar6 = 2;
				}
				else
				{
					iVar6 = 1;
				}
			}
			else if (bVar3)
			{
				iVar6 = 5;
			}
			else
			{
				iVar6 = 3;
			}
			if (Local_78[bLocal_7027] != iVar6)
			{
				NET_GAMER_SET_TEAM(bLocal_70, iVar6);
				Local_78[bLocal_7027] = iVar6;
			}
			if (Local_78[bLocal_7027].f_92 >= 0)
			{
				if (Function_72(bLocal_70))
				{
					if (Function_70(bLocal_70, 2048, 1))
					{
						Local_78[bLocal_7027].f_92 = (Local_78[bLocal_7027].f_92 - 1);
						if (Local_78[bLocal_7027].f_92 < 0)
						{
							Function_67("net_player_joined", bLocal_70);
							Local_78[bLocal_7027].f_92 = 0;
						}
					}
				}
			}
			if (Function_72(bLocal_70))
			{
				iVar5 = Function_65(bLocal_70);
				if (StackVal != iVar5)
				{
					Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62(bLocal_70) };
					NET_GAMER_SET_TITLE(bLocal_70, &Var9);
					Local_78[bLocal_7027].f_4 = iVar5;
					*(&Local_78[bLocal_7027] + 8) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var9 };
				}
				bVar26 = GET_SLOT_ACTOR(bLocal_70);
				bVar28 = IS_ACTOR_VALID(bVar26);
				if (bVar28)
				{
					if (Function_70(bLocal_70, 4194304, 1))
					{
						if (!Local_78[bLocal_7027].f_96)
						{
							Local_78[bLocal_7027].f_96 = 1;
							DECOR_SET_BOOL(bVar26, "NoMelee", true);
						}
					}
					else if (Local_78[bLocal_7027].f_96)
					{
						Local_78[bLocal_7027].f_96 = 0;
						DECOR_REMOVE(bVar26, "NoMelee");
					}
				}
				else
				{
					Local_78[bLocal_7027].f_96 = 0;
				}
				if (Local_78[bLocal_7027].f_72)
				{
					if (Function_61(fVar25, bLocal_70, bVar26))
					{
						if (bVar28 && bLocal_70 == bVar7)
						{
							if (!DECOR_CHECK_EXIST(bVar26, "ArmUp"))
							{
								DECOR_SET_BOOL(bVar26, "ArmUp", true);
							}
						}
					}
					else
					{
						Local_78[bLocal_7027].f_72 = 0;
						if (bVar28)
						{
							if (!Function_60(4))
							{
								DECOR_REMOVE(bVar26, "ArmUp");
							}
							if (IS_OBJECT_VALID(Local_78[bLocal_7027].f_76))
							{
								UNK_0x1A59E608(Local_78[bLocal_7027].f_76);
								DESTROY_OBJECT(Local_78[bLocal_7027].f_76);
							}
						}
					}
				}
			}
		}
		bLocal_70 = (bLocal_70 + 1 % 16);
		iVar4++;
	}
	if (Function_10(8192))
	{
		bVar45 = false;
		while (bVar45 <= 4)
		{
			if (Function_59(bVar45))
			{
				Function_51(bVar45, GET_SLOT_ACTOR(bVar45));
			}
			bVar45++;
		}
	}
	return;
}

void Function_51(bool bParam0, bool bParam1) //Position: 0x10A9 / 4265
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	if (IS_ACTOR_VALID(bParam1))
	{
		bVar3 = true;
		if (IS_OBJECT_VALID(Local_78[bParam027].f_100))
		{
			bVar4 = true;
			bVar5 = Function_58(GET_GRINGO_FROM_OBJECT(Local_78[bParam027].f_100), "UseCase");
			if (IS_OBJECT_VALID(bVar5))
			{
				bVar1 = true;
				bVar2 = IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar5));
			}
		}
	}
	if (Function_70(bParam0, 65536, 1))
	{
		if (!Local_78[bParam027].f_84)
		{
			Local_78[bParam027].f_84 = 1;
			Function_67("mp_needs_rez", bParam0);
			if (bParam0 != GET_LOCAL_SLOT())
			{
				if (!Function_12(16386, 0))
				{
					PRINT_BIG_FORMAT(4.0f, "mp_needs_rez_big", Function_57(bParam0), false, 0, 0, 2, 0);
					NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 528);
				}
				if (!Function_98(Global_79349.f_44, 4194304))
				{
					Function_56("MPCOOP_PLAYERDOWN", 0);
				}
				else
				{
					Function_56("UN_Narr2_Pdown", 0);
				}
			}
			else if (IS_ACTOR_VALID(bParam1))
			{
				AI_IGNORE_ACTOR(bParam1);
			}
		}
		if (bVar3)
		{
			if (!bVar4)
			{
				if (IS_ACTOR_INITED(bParam1))
				{
					DISABLE_GRINGO_STREAMING_CHECKS();
					Local_78[bParam027].f_100 = CREATE_GRINGO_IN_LAYOUT(bParam1, "rezMe", "$/content/scripting/gringo/simplegringo/mp_rezBuddy", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					bVar4 = IS_OBJECT_VALID(Local_78[bParam027].f_100);
					if (bVar4)
					{
					}
					SET_ATTACHMENT_IGNORE_ROTATION(ATTACH_OBJECTS(Local_78[bParam027].f_100, bParam1, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295), 1);
					ENABLE_GRINGO_STREAMING_CHECKS();
				}
			}
			if (bVar2)
			{
				if (Local_78[bParam027].f_88)
				{
					Local_78[bParam027].f_88 = 0;
					NET_GAMER_ICON_RESET_TIMER(bParam0, 0.0f);
				}
			}
			else if (bParam0 != GET_LOCAL_SLOT())
			{
				if (!Local_78[bParam027].f_88)
				{
					Local_78[bParam027].f_88 = 1;
					fVar6 = Function_52(bParam0);
					NET_GAMER_ICON_RESET_TIMER(bParam0, fVar6);
					AI_IGNORE_ACTOR(bParam1);
				}
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (Local_78[bParam027].f_84)
		{
			if (bVar3)
			{
				AI_STOP_IGNORING_ACTOR(bParam1);
			}
			NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 4294967295);
			Local_78[bParam027].f_84 = 0;
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bVar4)
		{
			if (!bVar1)
			{
				DESTROY_OBJECT(Local_78[bParam027].f_100);
			}
		}
		if (Local_78[bParam027].f_88)
		{
			NET_GAMER_ICON_RESET_TIMER(bParam0, 0.0f);
			Local_78[bParam027].f_88 = 0;
		}
		Local_78[bParam027].f_104 = 0;
	}
	return;
}

var Function_52(bool bParam0) //Position: 0x132A / 4906
{
	if (Function_72(bParam0))
	{
		return (1.0f - ((NET_GET_NET_TIME() - Function_54(2, bParam0)) / Function_53()));
	}
	return 0.0f;
}

float Function_53() //Position: 0x134A / 4938
{
	if (Function_98(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_98(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

float Function_54(int iParam0, bool bParam1) //Position: 0x1380 / 4992
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_55(iParam0);
	}
	if (!Function_72(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

float Function_55(int iParam0) //Position: 0x13E9 / 5097
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_56(bool bParam0, bool bParam1) //Position: 0x13F9 / 5113
{
	bool bVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		bVar0 = "";
		if (bParam1)
		{
			bVar0 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

var Function_57(bool bParam0) //Position: 0x1439 / 5177
{
	switch (bParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

var Function_58(bool bParam0, bool bParam1) //Position: 0x164D / 5709
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

bool Function_59(bool bParam0) //Position: 0x165A / 5722
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_72(bParam0);
}

bool Function_60(bool bParam0) //Position: 0x1670 / 5744
{
	return Function_20(Global_79337, bParam0);
}

bool Function_61(float fParam0, int iParam1, bool bParam2) //Position: 0x167F / 5759
{
	float fVar0;
	
	if ((fParam0 - Local_78[iParam127].f_80) <= 2.5f)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 1;
	}
	fVar0 = GET_LAST_ATTACK_TIME(bParam2);
	return fVar0 >= 0.0f;
}

struct<64> Function_62(bool bParam0) //Position: 0x16B1 / 5809
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_64())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63();
	}
	if (!Function_72(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_72(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_63() //Position: 0x1757 / 5975
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_64() //Position: 0x1768 / 5992
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_65(bool bParam0) //Position: 0x1776 / 6006
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_66();
	}
	if (!Function_72(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_76943[bParam096].f_28;
}

var Function_66() //Position: 0x17CD / 6093
{
	return Global_78480.f_28;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x17D9 / 6105
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_68(bool bParam0) //Position: 0x17F9 / 6137
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69("g", I2STR(bParam0));
}

struct<32> Function_69(char* cParam0, bool bParam1) //Position: 0x180D / 6157
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_70(bool bParam0, int iParam1, bool bParam2) //Position: 0x1826 / 6182
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_12(iParam1, bParam2);
	}
	if (!Function_72(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_71(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_71(int iParam0) //Position: 0x18A7 / 6311
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_72(bool bParam0) //Position: 0x1BC0 / 7104
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

int Function_73(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C61 / 7265
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_72(bParam0))
			{
				if (!Function_70(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_74() //Position: 0x1CA5 / 7333
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_73(GET_LOCAL_SLOT(), 1, 0);
}

bool Function_75() //Position: 0x1CBC / 7356
{
	return Function_10(4);
}

bool Function_76() //Position: 0x1CC6 / 7366
{
	return Function_10(2);
}

bool Function_77() //Position: 0x1CD0 / 7376
{
	if (Function_79())
	{
		return (Function_78() != 1 || Function_78() != 0);
	}
	return 0;
}

int Function_78() //Position: 0x1CE9 / 7401
{
	return Global_79349.f_16;
}

bool Function_79() //Position: 0x1CF5 / 7413
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_80() //Position: 0x1CFE / 7422
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	if (Function_113(bLocal_77, 81, &bVar1, 0))
	{
		if (NET_IS_POSSE_LEADER())
		{
			Function_94("net_posse_led", Function_95(GET_LOCAL_SLOT(), 1));
		}
		bVar2 = true;
		Function_93(Function_60(2));
		fLocal_72 = GET_CURRENT_GAME_TIME();
	}
	if (Function_113(bLocal_77, 82, &bVar1, 0))
	{
		Function_92("net_posse_left");
		Function_87(Function_60(1));
		fLocal_72 = GET_CURRENT_GAME_TIME();
	}
	if (Function_113(bLocal_77, 83, &bVar1, 0))
	{
		bVar2 = true;
		if (DECOR_GET_INT_VERBOSE(bVar1, "Slot", &bVar0))
		{
			if (IS_SLOT_VALID(bVar0))
			{
				Function_85(bVar0, Function_60(2));
				if (GET_LOCAL_SLOT() != bVar0)
				{
					bVar3 = NET_GET_POSSE_LEADER_SLOT();
					if (IS_SLOT_VALID(bVar3))
					{
						if (bVar0 == bVar3)
						{
							Function_94("net_posse_joined", Function_95(bVar0, 1));
							if (Function_77())
							{
								Function_82();
							}
						}
						else if ((GET_CURRENT_GAME_TIME() - fLocal_72) <= 1.0f)
						{
							Function_81("net_posse_member_added", bVar0, Function_95(bVar3, 1));
						}
					}
				}
			}
		}
	}
	if (bVar2)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(43) && NET_IS_POSSE_LEADER())
		{
			iVar4 = NET_GET_POSSE_COUNT();
			if (iVar4 == 8)
			{
				AWARD_ACHIEVEMENT(43);
			}
		}
	}
	if (Function_113(bLocal_77, 100, &bVar1, 0))
	{
	}
	if (Function_113(bLocal_77, 84, &bVar1, 0))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Slot", &bVar0))
		{
			Function_85(bVar0, 1);
			if ((GET_CURRENT_GAME_TIME() - fLocal_72) <= 1.0f)
			{
				if (GET_LOCAL_SLOT() == bVar0 && bVar0 <= 0)
				{
					if (NET_GET_POSSE_COUNT() >= 1)
					{
						Function_81("net_posse_member_removed", bVar0, Function_95(bVar0, 1));
					}
				}
			}
		}
	}
	return;
}

void Function_81(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1EB9 / 7865
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, bParam2, 0, 0, 0, 0);
	return;
}

void Function_82() //Position: 0x1EDA / 7898
{
	vector3 vVar0;
	
	if (Function_83())
	{
		if (GET_SLOT_POSITION(NET_GET_POSSE_LEADER_SLOT(), &vVar0))
		{
			if (VDIST(vVar0, Global_34574) < 400.0f)
			{
				UI_SEND_EVENT("net.posse_prompt_teleport");
			}
		}
	}
	return;
}

bool Function_83() //Position: 0x1F28 / 7976
{
	return (Function_84() && !NET_IS_POSSE_LEADER());
}

var Function_84() //Position: 0x1F36 / 7990
{
	return NET_GET_POSSE_COUNT() < 1;
}

void Function_85(bool bParam0, bool bParam1) //Position: 0x1F41 / 8001
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_86(GET_LOCAL_SLOT(), bParam0) && !Function_60(2))
		{
			return;
		}
		if (!Function_60(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_60(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

bool Function_86(bool bParam0, bool bParam1) //Position: 0x1FBE / 8126
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_87(bool bParam0) //Position: 0x1FE2 / 8162
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_60(4))
		{
			Function_90(1);
		}
		else
		{
			return;
		}
	}
	Function_88(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_85(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_88(int iParam0) //Position: 0x2026 / 8230
{
	Function_89(&Global_79337, iParam0);
	return;
}

void Function_89(var uParam0, int iParam1) //Position: 0x2035 / 8245
{
	Function_96(uParam0, iParam1);
	return;
}

void Function_90(int iParam0) //Position: 0x2042 / 8258
{
	Function_91(&Global_79337, iParam0);
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x2051 / 8273
{
	Function_99(uParam0, iParam1);
	return;
}

void Function_92(bool bParam0) //Position: 0x205E / 8286
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, false, 0, 0, 0, 0);
	return;
}

void Function_93(bool bParam0) //Position: 0x2072 / 8306
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_90(2);
	}
	else
	{
		Function_88(2);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_86(GET_LOCAL_SLOT(), bVar0))
			{
				Function_85(bVar0, bParam0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_94(bool bParam0, bool bParam1) //Position: 0x20B5 / 8373
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, false, 0, 0, 0, 0);
	return;
}

bool Function_95(bool bParam0, int iParam1) //Position: 0x20CA / 8394
{
	return NET_GET_GAMER_HEX_COLOR(bParam0, iParam1);
}

void Function_96(int iParam0, int iParam1) //Position: 0x20D7 / 8407
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_97() //Position: 0x20EA / 8426
{
	Function_2(32768, 1, 0);
	return;
}

bool Function_98(int iParam0, int iParam1) //Position: 0x20F9 / 8441
{
	return (iParam0 && iParam1) == 0;
}

void Function_99(int iParam0, int iParam1) //Position: 0x2106 / 8454
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_100(int iParam0) //Position: 0x2115 / 8469
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_101(iParam0);
		}
	}
	return;
}

void Function_101(bool bParam0) //Position: 0x2147 / 8519
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_102() //Position: 0x2156 / 8534
{
	if (Function_481("generateRandomLifetimeScore"))
	{
	}
	Function_105();
	Function_104(4096);
	Function_103();
	return;
}

void Function_103() //Position: 0x218C / 8588
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_104(int iParam0) //Position: 0x21A5 / 8613
{
	Function_89(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_105() //Position: 0x21DE / 8670
{
	Function_106();
	return;
}

void Function_106() //Position: 0x21E7 / 8679
{
	Function_107(&Global_78480 + 220);
	return;
}

void Function_107(var uParam0) //Position: 0x21F6 / 8694
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_108() //Position: 0x2217 / 8727
{
	vector3 vVar0;
	
	if (NET_POSSE_GET_LEADER_WAYPOINT(&vVar0))
	{
		vVar0.f_4 = 25.0f;
		if (!Function_112(StackVal, StackVal, StackVal, StackVal, vVar0, *(&Global_28235 + 36)))
		{
			Function_110(StackVal, StackVal, vVar0, 0.0f, 0.0f, 0.0f, 1);
		}
	}
	else if (StackVal != 2 && Global_28235 != 3)
	{
		if (!NET_POSSE_IS_LEADER_WAYPOINT_VALID())
		{
			Function_109();
		}
	}
	return;
}

void Function_109() //Position: 0x2268 / 8808
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

void Function_110(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2293 / 8851
{
	*(&Global_28235 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28235 + 36) = { StackVal, StackVal, vParam0 };
	Global_28235 = 3;
	Global_28235.f_4 = 0;
	Global_28235.f_60 = 4;
	Global_28235.f_64 = uParam3;
	Global_28235.f_68 = uParam4;
	Global_28235.f_72 = uParam5;
	Global_28235.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28235.f_12))
	{
		Global_28235.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "PosseGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28235.f_12) >= 0)
	{
		Function_111(Global_28235.f_12);
		CLEAN_OBJECTSET(Global_28235.f_12);
	}
	Global_28235.f_92 = uParam6;
	Global_28210.f_96 = 1;
}

void Function_111(bool bParam0) //Position: 0x2333 / 9011
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

bool Function_112(vector3 vParam0, vector3 vParam3) //Position: 0x2373 / 9075
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_113(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23A0 / 9120
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	bVar1 = false;
	while (bVar1 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0);
		if (iParam1 == GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar0)))
		{
			*bParam2 = bVar0;
			if (bParam3)
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
			}
			return 1;
		}
		bVar1++;
	}
	return 0;
}

void Function_114() //Position: 0x23F9 / 9209
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Playerlayout"));
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if ((IS_ACTOR_ANIMAL(bVar2) && !IS_ACTOR_MOUNTED(bVar2)) && IS_ACTOR_RIDEABLE(bVar2))
			{
				switch (NET_OBJECT_GET_REPLICATION_MODE(bVar1))
				{
					case 0x00000002:
						NET_OBJECT_SET_REPLICATION_MODE(bVar1, 5);
						break;
					}
				}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_115() //Position: 0x2480 / 9344
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Playerlayout"));
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	bVar2 = GET_CURRENT_GAME_TIME();
	fLocal_73 = bVar2;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar4))
		{
			if (IS_ACTOR_ANIMAL(bVar4) && !IS_ACTOR_MOUNTED(bVar4))
			{
				if (StackVal || (StackVal != 5 || Function_375(16)) != 7)
				{
					if (GET_TASK_STATUS(bVar4, 86) != 1)
					{
						DECOR_SET_INT(bVar1, "state", 2);
						iLocal_76 = 2;
					}
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "state"))
				{
					DECOR_SET_INT(bVar1, "state", false);
					iLocal_76 = 0;
				}
				else
				{
					iLocal_76 = DECOR_GET_INT(bVar1, "state");
				}
				switch (iLocal_76)
				{
					case 0x00000000:
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar4)))
						{
							DECOR_SET_FLOAT(bVar1, "timer", bVar2);
							NET_OBJECT_SET_REPLICATION_MODE(bVar1, 5);
							DECOR_SET_INT(bVar1, "state", true);
						}
						break;
					
					case 0x00000001:
						if (DECOR_GET_FLOAT_VERBOSE(bVar1, "timer", &fVar3))
						{
							if ((bVar2 - fVar3) < 60.0f)
							{
								DECOR_SET_INT(bVar1, "state", 2);
							}
						}
						break;
					
					case 0x00000002:
						RELEASE_ACTOR(bVar4);
						TASK_OVERRIDE_SET_MOVETYPE(bVar4, 2);
						TASK_FLEE_ACTORSET(bVar4, Global_78576, -1.0f, -1.0f, 0, 0, 0);
						TASK_PRIORITY_SET(bVar4, 1);
						DECOR_REMOVE_ALL(bVar1);
						iLocal_76 = 0;
						break;
					}
				}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	bVar5 = Function_116();
	bVar6 = GET_MOUNT(Function_116());
	if (IS_ACTOR_VALID(bVar6) && IS_ACTOR_VALID(bVar5))
	{
		TASK_CLEAR(bVar6);
		DECOR_REMOVE_ALL(GET_OBJECT_FROM_ACTOR(bVar6));
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bVar6), FIND_NAMED_LAYOUT("Playerlayout"));
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

bool Function_116() //Position: 0x2656 / 9814
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_117() //Position: 0x266B / 9835
{
	bool bVar0;
	
	Function_275(0);
	bVar0 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar0))
	{
		Function_118(GET_EVENT_FROM_OBJECT(bVar0));
		bVar0 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	return;
}

void Function_118(bool bParam0) //Position: 0x2698 / 9880
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000009:
		case 0x0000000B:
			if (!Function_375(4096))
			{
				return;
			}
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
				return;
			}
			if (GET_OBJECT_TYPE(bVar0) != 15)
			{
				return;
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return;
			}
			if (!IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				return;
			}
			break;
		
		case 0x00000003:
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(GET_EVENT_TARGET_AS_OBJECT(bParam0)))
			{
				return;
			}
			if (!IS_OBJECT_VALID(bVar0))
			{
				return;
			}
			if (DECOR_CHECK_EXIST(GET_EVENT_TARGET_AS_OBJECT(bParam0), "duel"))
			{
				return;
			}
			break;
		
		case 0x00000001:
			if (GET_EVENT_TARGET_AS_OBJECT(bParam0) == "")
			{
				return;
			}
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
				return;
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return;
			}
			if (!IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				return;
			}
			break;
		
		case 0x00000002:
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			break;
		
		case 0x0000000A:
			bVar0 = GET_EVENT_PERPETRATOR(bParam0);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			break;
		
		default:
			return;
	}
	Function_119(bParam0);
	return;
}

void Function_119(bool bParam0) //Position: 0x27B5 / 10165
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	float fVar26;
	bool bVar27;
	int iVar28;
	bool bVar29;
	struct<8> Var30;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	int iVar43;
	float fVar44;
	float fVar45;
	
	iVar6 = 4294967295;
	bVar7 = 4294967295;
	bVar11 = false;
	bVar12 = false;
	bVar13 = false;
	bVar14 = false;
	bVar15 = false;
	bVar16 = false;
	bVar17 = false;
	iVar18 = 0;
	bVar23 = 4294967295;
	bVar24 = 4294967295;
	bVar25 = "";
	bVar0 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				iVar6 = GET_ACTOR_FACTION(bVar2);
				if (IS_ACTOR_PLAYER(bVar2))
				{
					bVar15 = true;
					Function_39(bVar2, &vVar8);
					bVar24 = GET_ACTOR_SLOT(bVar2);
					if (IS_ACTOR_LOCAL_PLAYER(bVar2))
					{
						bVar16 = true;
					}
				}
				else if (IS_ACTOR_RIDEABLE(bVar2))
				{
					bVar27 = GET_RIDER(bVar2);
					if (IS_ACTOR_VALID(bVar27))
					{
						if (IS_ACTOR_PLAYER(bVar27))
						{
							bVar24 = GET_ACTOR_SLOT(bVar27);
							Function_39(bVar2, &vVar8);
							if (IS_ACTOR_LOCAL_PLAYER(bVar27))
							{
								bVar17 = true;
								bVar22 = ANIMAL_ACTOR_GET_SPECIES(bVar2);
							}
							else
							{
								iVar18 = 1;
							}
						}
					}
					else
					{
						iVar28 = Function_116();
						if (Function_272(iVar28, 0, 0, 0, 0, 0, 0, 0, 0))
						{
							if (GET_MOST_RECENT_RIDER(bVar2) == iVar28)
							{
								Function_39(bVar2, &vVar8);
								bVar24 = GET_LOCAL_SLOT();
								bVar17 = true;
								bVar22 = ANIMAL_ACTOR_GET_SPECIES(bVar2);
							}
						}
					}
				}
			}
		}
	}
	bVar1 = GET_EVENT_PERPETRATOR(bParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 15)
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar4))
			{
				bVar11 = true;
				bVar7 = GET_ACTOR_ENUM_FACTION(GET_ACTOR_ENUM(bVar4));
				if (IS_ACTOR_PLAYER(bVar4))
				{
					bVar12 = true;
					bVar23 = GET_ACTOR_SLOT(bVar4);
					if (IS_LOCAL_PLAYER(bVar4))
					{
						bVar13 = true;
					}
				}
			}
		}
	}
	bVar29 = false;
	if (!(bVar16 && bVar13))
	{
		if (Function_271())
		{
			if (Function_270())
			{
				if (bVar16 && bVar12)
				{
					if (Function_74() == Function_73(bVar23, 1, 0))
					{
						bVar29 = true;
					}
				}
				else if (bVar13 && bVar15)
				{
					if (Function_74() == Function_73(bVar24, 1, 0))
					{
						bVar29 = true;
					}
				}
			}
			if (!bVar29)
			{
			}
		}
	}
	bVar38 = 4294967295;
	bVar39 = true;
	if (Function_269())
	{
		bVar39 = false;
	}
	bVar40 = (Function_10(32768) && !Function_10(4194304));
	bVar41 = Function_10(4194304);
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000009:
			if (!bVar15)
			{
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_ALIVE(bVar2))
					{
						if (DECOR_CHECK_EXIST(bParam0, "DroppedItem"))
						{
							bVar42 = DECOR_GET_OBJECT(bParam0, "DroppedItem");
							if (IS_OBJECT_VALID(bVar42))
							{
								if (GET_OBJECT_TYPE(bVar42) == 17)
								{
									Function_268();
									if (bVar40)
									{
										if (Function_267(4) == 5)
										{
											if (Function_98((*&Global_84364 + 712)[5], 1))
											{
												Function_266(&Global_50170, 158, 1, 50.0f, 0, 1);
												Function_266(&Global_50170, 159, 10, 250.0f, 1, 1);
												Function_266(&Global_50170, 160, 50, 500.0f, 5, 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!bVar15)
			{
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_ALIVE(bVar2))
					{
						if (DECOR_CHECK_EXIST(bParam0, "DroppedWeapon"))
						{
							bVar42 = DECOR_GET_OBJECT(bParam0, "DroppedWeapon");
							if (IS_OBJECT_VALID(bVar42))
							{
								if (GET_OBJECT_TYPE(bVar42) == 34)
								{
									Function_265();
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (bVar13 && bVar15)
			{
				if (!bVar29 && bVar39)
				{
					Function_264(32, 1);
				}
			}
			if (bVar16 && bVar12)
			{
				if (!bVar29 && bVar39)
				{
					Function_264(33, 1);
				}
				Function_259(StackVal, StackVal, 6, vVar8, bVar23, 4294967295, 0, 0, 0);
			}
			break;
		
		case 0x00000001:
			if (((bVar13 && (bVar15 || iVar18)) && !bVar16) && !bVar29)
			{
				if (IS_ACTOR_ALIVE(bVar2))
				{
					iVar43 = GET_LAST_HIT_FLAGS(bVar2);
					if (!Function_98(iVar43, 65814))
					{
						Function_258();
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (bVar13 && bVar39)
			{
				if (IS_ACTOR_HUMAN(bVar2))
				{
					if (!bVar29)
					{
						Function_264(34, 1);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (DECOR_GET_INT_VERBOSE(bParam0, "Weapon", &bVar38))
			{
			}
			else
			{
				bVar38 = GET_LAST_HIT_WEAPON(bVar2);
				if (bVar38 == 4294967295)
				{
					bVar38 = GET_WEAPON_IN_HAND(bVar4);
				}
			}
			bVar14 = IS_ACTOR_HUMAN(bVar2);
			bVar20 = Function_20(GET_LAST_HIT_FLAGS(bVar2), 4);
			if (!bVar20)
			{
				bVar19 = DECOR_CHECK_EXIST(bParam0, "Headshot");
			}
			if (!bVar15)
			{
				if (Function_375(4096))
				{
					if (bVar14)
					{
						Function_241(bVar2, bVar19, bVar13);
					}
					else if (DECOR_CHECK_EXIST(bVar2, "nKillBonus"))
					{
						Function_241(bVar2, bVar19, bVar13);
					}
				}
			}
			if (bVar13)
			{
				if (bVar15)
				{
					if (bVar16)
					{
						Function_239(StackVal, StackVal, bVar2, vVar8, 0);
						if (bVar39)
						{
							Function_264(12, 1);
						}
						Function_233();
					}
					else if (Function_19(32))
					{
						if (Global_76887 != 941 && Function_20(GET_LAST_HIT_FLAGS(bVar2), 262144))
						{
							Global_50170[25722].f_28++;
							if (Global_50170[25722].f_28 > 25)
							{
								Global_50170[25722].f_28 = 100;
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(67))
								{
									AWARD_ACHIEVEMENT(67);
								}
							}
						}
						else if (Global_76887 == 945)
						{
							if (Function_20(GET_LAST_HIT_FLAGS(bVar2), 8) || GET_LAST_HIT_WEAPON(bVar2) != 24)
							{
								Global_50170[25722].f_32++;
								if (Global_50170[25722].f_32 > 25)
								{
									Global_50170[25722].f_32 = 100;
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(68))
									{
										AWARD_ACHIEVEMENT(68);
									}
								}
							}
							else if (Function_20(GET_LAST_HIT_FLAGS(bVar2), 2048))
							{
								bVar3 = GET_MOUNT(bVar2);
								if (IS_ACTOR_VALID(bVar3))
								{
									if (GET_LAST_HIT_WEAPON(bVar3) == 24)
									{
										Global_50170[25722].f_32++;
										if (Global_50170[25722].f_32 > 25)
										{
											Global_50170[25722].f_32 = 100;
											if (!HAS_ACHIEVEMENT_BEEN_PASSED(68))
											{
												AWARD_ACHIEVEMENT(68);
											}
										}
									}
								}
							}
						}
					}
				}
				else if (bVar14)
				{
					Function_232(bVar19);
					if (bVar40)
					{
						Function_231(bVar2);
						Function_230(bVar2);
					}
					if (bVar41)
					{
						Function_221(253, &Global_50170[25322] + 4, &Global_50170[25322] + 8, &Global_50170[25322] + 12, bVar2);
						Function_219(StackVal, 256, &Global_50170[25622] + 4, &Global_50170[25622] + 8, &Global_50170[25622] + 12);
						Function_212(255, GET_LAST_HIT_WEAPON(bVar2));
						if (StackVal == 3)
						{
							Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, bVar2, Function_211(38), Function_211(39));
						}
					}
					Function_39(bVar2, &vVar8);
					if (Function_19(32))
					{
						fVar26 = (VDIST(Global_34574, vVar8) * 1.093613f);
						if (bVar38 == 29)
						{
							if (fVar26 <= 35.0f)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(65))
								{
									AWARD_ACHIEVEMENT(65);
								}
							}
						}
					}
					bVar5 = GET_LAST_ATTACK_TARGET(bVar2);
					if (IS_ACTOR_VALID(bVar5))
					{
						if (IS_ACTOR_PLAYER(bVar5))
						{
							bVar21 = GET_ACTOR_SLOT(bVar5);
							if (bVar21 != GET_LOCAL_SLOT())
							{
								if (IS_ACTOR_ALIVE(bVar5))
								{
									if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bVar2)) >= 3.0f)
									{
										if (bVar39)
										{
											Function_264(28, 1);
											if (!Function_98(Global_79349.f_44, 4194304))
											{
												Function_56("GENMESS_GUARDIANANGEL", 0);
											}
											else
											{
												Function_56("UN_Narr2_Gangel", 0);
											}
										}
										Function_259(StackVal, StackVal, 7, vVar8, bVar21, 4294967295, 0, 0, 0);
										if (bVar40)
										{
											Function_266(&Global_50170, 69, 1, 50.0f, 0, 1);
											Function_266(&Global_50170, 70, 5, 100.0f, 1, 1);
											Function_266(&Global_50170, 71, 10, 250.0f, 2, 1);
											Function_266(&Global_50170, 72, 25, 500.0f, 5, 1);
										}
										if (bVar41)
										{
											if (StackVal == 2)
											{
												Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, bVar2, Function_211(38), Function_211(28));
											}
										}
									}
								}
								else if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bVar2)) >= 10.0f)
								{
									Function_259(StackVal, StackVal, 8, vVar8, bVar21, 4294967295, 0, 0, 0);
									if (!Function_98(Global_79349.f_44, 4194304))
									{
										Function_56("GENMESS_EYE4EYE", 0);
									}
									else
									{
										Function_56("UN_Narr2_Posthumous", 0);
									}
								}
							}
						}
						else
						{
							Function_146(&Global_56612, bVar4);
						}
					}
					if (bVar39)
					{
						if (Function_77())
						{
							if (!Function_375(4096))
							{
								Function_128(1.0f, 0, 1);
							}
							if (IS_LAYOUTREF_VALID(Function_127()))
							{
								bVar25 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar2));
								if (IS_LAYOUTREF_VALID(bVar25))
								{
									if (bVar25 == Function_127())
									{
										Function_264(29, 1);
										if (Function_126(iVar6))
										{
											Function_264(31, 1);
										}
										else if (Function_125(iVar6))
										{
											Function_264(30, 1);
										}
									}
								}
							}
						}
						else
						{
							Function_264(29, 1);
							if (Function_126(iVar6))
							{
								Function_264(31, 1);
							}
							else if (Function_125(iVar6))
							{
								Function_264(30, 1);
							}
						}
					}
				}
				else if (bVar17)
				{
					Function_259(StackVal, StackVal, 1, vVar8, bVar24, bVar38, bVar22, bVar19, 0);
				}
				else if (Function_375(4096))
				{
					Function_124(3212836864);
				}
			}
			else if (bVar16 || bVar17)
			{
				if (!bVar17)
				{
					if (bVar39 && (!bVar29 || Function_75()))
					{
						Function_264(12, 1);
					}
					if (Function_211(35) > 3)
					{
						if (bVar12)
						{
							Function_123(bVar24, bVar23, 4294967295);
						}
					}
					if (bVar12)
					{
						Function_122(4194304, Function_70(bVar23, 8388608, 1));
					}
					Function_233();
				}
				if (bVar12)
				{
					if (bVar29)
					{
						Function_259(StackVal, StackVal, 2, vVar8, bVar23, bVar38, bVar22, bVar19, 0);
					}
					else
					{
						Function_259(StackVal, StackVal, 1, vVar8, bVar23, bVar38, bVar22, bVar19, bVar20);
					}
				}
				else if (!bVar11 || bVar2 != bVar4)
				{
					Function_239(StackVal, StackVal, bVar2, vVar8, bVar17);
				}
				else if (IS_ACTOR_HUMAN(bVar4))
				{
					Function_259(StackVal, StackVal, 4, vVar8, bVar7, bVar38, bVar22, bVar19, 0);
				}
				else if (IS_ACTOR_ANIMAL(bVar4))
				{
					Function_259(StackVal, StackVal, 5, vVar8, ANIMAL_ACTOR_GET_SPECIES(bVar4), 4294967295, bVar22, 0, 0);
				}
				else
				{
					Function_239(StackVal, StackVal, bVar2, vVar8, bVar17);
				}
			}
			else if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_VALID(bVar4))
			{
				if (bVar12)
				{
					if (Function_271())
					{
						if (IS_ACTOR_PLAYER(bVar2))
						{
							if (Function_74() == Function_73(bVar24, 1, 0))
							{
								bVar29 = true;
							}
						}
					}
					if (!bVar29)
					{
						fVar44 = GET_DAMAGE_BY_LOCAL_PLAYER(bVar2);
						fVar45 = GET_ACTOR_MAX_HEALTH(bVar2);
						if (fVar44 < (fVar45 * 0.5f))
						{
							Function_264(38, 1);
							if (bVar15)
							{
								Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("nmp_assist", 4294967295) };
								Function_67(&Var30, bVar23);
							}
							else
							{
								Function_67("mp_assist_npc", bVar23);
							}
							if (bVar40)
							{
								Function_266(&Global_50170, 73, 1, 50.0f, 0, 1);
								Function_266(&Global_50170, 74, 10, 100.0f, 1, 1);
								Function_266(&Global_50170, 75, 50, 250.0f, 2, 1);
								Function_266(&Global_50170, 76, 250, 500.0f, 5, 1);
							}
							if (bVar41)
							{
								if (StackVal == 4)
								{
									Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, Function_116(), 1, 0);
								}
								else if (StackVal == 2)
								{
									Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, bVar2, Function_211(38), Function_211(28));
								}
								else
								{
									Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, bVar2, Function_211(38), Function_211(39));
								}
							}
						}
					}
				}
			}
			break;
	}
	return;
}

struct<32> Function_120(char* cParam0, int iParam1) //Position: 0x32F9 / 13049
{
	char* cVar0[32];
	int iVar8;
	
	strcpy(&cVar0, cParam0, 32);
	iVar8 = Function_121(cParam0);
	if (iParam1 == 4294967295)
	{
		if ((RAND_INT_RANGE(false, 10000) % 100) > 30 && iVar8 < 0)
		{
			stradd(&cVar0, "_", 32);
			stradd(&cVar0, I2STR((RAND_INT_RANGE(false, 10000) % iVar8) + 1), 32);
		}
	}
	else if (iParam1 >= 0)
	{
		stradd(&cVar0, "_", 32);
		stradd(&cVar0, I2STR((iParam1 % iVar8) + 1), 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_121(char* cParam0) //Position: 0x3368 / 13160
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, "_count", 32);
	return (STRING_TO_INT(UI_GET_STRING(&cVar0)) - 1);
}

void Function_122(int iParam0, bool bParam1) //Position: 0x338B / 13195
{
	if (bParam1)
	{
		Function_99(&Global_78480 + 128, iParam0);
	}
	else
	{
		Function_96(&Global_78480 + 128, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = Global_78480.f_128;
	}
	return;
}

void Function_123(bool bParam0, bool bParam1, bool bParam2) //Position: 0x33C6 / 13254
{
	struct<9> Var0;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	vVar0 = bParam0;
	vVar0.y = bParam1;
	vVar0.z = bParam2;
	NET_SCRIPTMSG_SEND(2, 7, &vVar0, 3, 1);
	if (bParam2 == 4294967295)
	{
		PLAYSTAT_STRING("Killstreak_End", GET_SLOT_NAME(bParam1));
	}
	else
	{
		PLAYSTAT_INT("Killstreak", bParam2);
	}
	return;
}

void Function_124(float fParam0) //Position: 0x342C / 13356
{
	if (fParam0 != -1.0f)
	{
		fParam0 = GET_CURRENT_GAME_TIME();
	}
	if (Function_98(StackVal, 2))
	{
		UI_ANIM_SETUP("XpComboTimer", 10.0f, 32, false);
		UI_ANIM_RESTART("XpComboTimer");
	}
	Global_76939 = fParam0;
	return;
}

bool Function_125(int iParam0) //Position: 0x347D / 13437
{
	switch (iParam0)
	{
		case 0x00000003:
			return 1;
		
		case 0x00000005:
			return 1;
		
		case 0x0000000B:
			return 1;
		
		case 0x00000007:
			return 1;
		
		case 0x00000006:
			return 1;
		
		case 0x00000010:
			return 1;
		
		case 0x0000000A:
			return 1;
		
		case 0x00000004:
			return 1;
		
		case 0x00000008:
			return 1;
		
		default:
	}
	return 0;
	return 0;
}

bool Function_126(int iParam0) //Position: 0x34D5 / 13525
{
	switch (iParam0)
	{
		case 0x00000019:
			return 1;
		
		case 0x0000000D:
			return 1;
		
		case 0x0000000E:
			return 1;
		
		case 0x0000000F:
			return 1;
		
		case 0x0000000C:
			return 1;
		
		case 0x00000010:
			return 1;
		
		case 0x0000001A:
			return 1;
		
		case 0x00000013:
			return 1;
		
		default:
	}
	return 0;
	return 0;
}

int Function_127() //Position: 0x3525 / 13605
{
	return Global_83591.f_140;
}

int Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3531 / 13617
{
	if (!Function_77())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_144(8, bParam0);
	}
	Function_129(487, (bParam0 * Global_3362), bParam1);
	return 1;
}

void Function_129(int iParam0, bool bParam1, int iParam2) //Position: 0x3561 / 13665
{
	Function_130(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_130(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x357D / 13693
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_143(iParam0, TO_FLOAT(bParam1), 1);
	Function_142(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_131(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_131(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x379D / 14237
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_141(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_140(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_140(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_138(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_135(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_133(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_132(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_132() //Position: 0x3DCA / 15818
{
	int iVar0;
	
	return iVar0;
}

var Function_133(int iParam0) //Position: 0x3DD2 / 15826
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_134(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3DE3 / 15843
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_135(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3ED8 / 16088
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_137(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_136(Function_137(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_136(int iParam0, int iParam1) //Position: 0x3F3D / 16189
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_137(int iParam0, bool bParam1) //Position: 0x3F4F / 16207
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_138(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3F61 / 16225
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_139(iParam0) != 19 || Function_139(iParam0) != 17) || Function_139(iParam0) != 10) || Function_139(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_139(int iParam0) //Position: 0x4091 / 16529
{
	return Global_35278[iParam020].f_48;
}

float Function_140(int iParam0) //Position: 0x40A0 / 16544
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_141(int iParam0) //Position: 0x40D9 / 16601
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_142(int iParam0) //Position: 0x4116 / 16662
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_143(int iParam0, bool bParam1, bool bParam2) //Position: 0x42B0 / 17072
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

void Function_144(var uParam0, float fParam1) //Position: 0x44F4 / 17652
{
	Function_145(uParam0, (Function_55(uParam0) + fParam1));
	return;
}

void Function_145(int iParam0, int iParam1) //Position: 0x4507 / 17671
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_146(var uParam0, bool bParam1) //Position: 0x4530 / 17712
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (uParam0[iVar09]->f_20)
		{
			if (!IS_ACTOR_RIDING(bParam1))
			{
				uParam0[iVar09]->f_32 = 0;
			}
		}
		iVar0++;
	}
	return;
}

void Function_147(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x4566 / 17766
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	switch (*uParam2)
	{
		case 0x00000000:
			Function_209(bParam0);
			fVar4 = Function_208(bParam0);
			bVar0 = iParam6;
			if (bVar0 > 1)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 1, 8016, 50.0f, 100.0f, 3, Function_207(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(true));
				if (*uParam3 == fVar4)
				{
					Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_209(bParam0);
			fVar4 = Function_208(bParam0);
			if (iParam5 < 5)
			{
				bVar1 = iParam5;
			}
			else
			{
				bVar1 = 5;
			}
			if (iParam6 < 3)
			{
				bVar2 = iParam6;
			}
			else
			{
				bVar2 = 3;
			}
			bVar0 = (bVar1 + bVar2);
			if (bVar0 > 8)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 2, 8017, 100.0f, 150.0f, 10, Function_207(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(8));
				if (*uParam3 == fVar4)
				{
					Function_198(bParam0, *uParam3, 1, bVar2, bVar1, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_209(bParam0);
			fVar4 = Function_208(bParam0);
			if (iParam5 < 10)
			{
				bVar1 = iParam5;
			}
			else
			{
				bVar1 = 10;
			}
			if (bVar2 < 5)
			{
				bVar2 = iParam6;
			}
			else
			{
				bVar2 = 5;
			}
			bVar0 = (bVar1 + bVar2);
			if (bVar0 > 15)
			{
				*uParam3 = 0.0f;
				Global_56092[bParam0] = 0;
				Function_201(bParam0, uParam2, 3, 8018, 150.0f, 200.0f, 15, Function_207(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(15));
				if (*uParam3 == fVar4)
				{
					Function_198(bParam0, *uParam3, 1, bVar1, bVar2, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000003:
			Function_209(bParam0);
			fVar4 = Function_208(bParam0);
			if (iParam5 < 15)
			{
				bVar1 = iParam5;
			}
			else
			{
				bVar1 = 15;
			}
			if (iParam6 < 5)
			{
				bVar2 = iParam6;
			}
			else
			{
				bVar2 = 5;
			}
			iVar7 = GET_LAST_HIT_WEAPON(bParam4);
			if (Function_212(bParam0, iVar7) < 5)
			{
				iVar3 = Function_212(bParam0, iVar7);
			}
			else
			{
				iVar3 = 5;
			}
			bVar0 = ((bVar1 + bVar2) + iVar3);
			if (bVar0 > 25)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 4, 8019, 200.0f, 250.0f, 200, Function_207(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(25));
				if (*uParam3 == fVar4)
				{
					Function_198(bParam0, *uParam3, 1, bVar1, bVar2, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000004:
			Function_209(bParam0);
			fVar4 = Function_208(bParam0);
			bVar5 = Function_197(bParam0, 1, 1);
			bVar6 = Function_197(bParam0, 2, 1);
			if (iParam5 >= 0)
			{
				Function_196(bParam0, 1, (bVar5 + 1.0f), 1);
			}
			else if (iParam6 >= 0)
			{
				Function_196(bParam0, 2, (bVar6 + 1.0f), 1);
			}
			if (Function_197(bParam0, 1, 1) <= TO_FLOAT(200))
			{
				Function_196(bParam0, 1, TO_FLOAT(200), 1);
			}
			if (Function_197(bParam0, 2, 1) <= TO_FLOAT(100))
			{
				Function_196(bParam0, 2, TO_FLOAT(100), 1);
			}
			bVar5 = Function_197(bParam0, 1, 1);
			bVar6 = Function_197(bParam0, 2, 1);
			bVar0 = (CEIL(bVar5) + CEIL(bVar6));
			if (bVar0 > 300)
			{
				*uParam3 = 0.0f;
				Function_148(bParam0, uParam2, uParam1, 8020, 250.0f, Function_207(0));
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(300));
				if (*uParam3 == fVar4)
				{
					Function_198(bParam0, *uParam3, 1, CEIL(bVar5), CEIL(bVar6), 4294967295, 4294967295);
				}
			}
			break;
	}
}

void Function_148(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x48C0 / 18624
{
	struct<4> Var0;
	
	Function_194(bParam0, 1);
	*uParam1 = 10;
	*uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_192(iParam3);
	}
	Function_128(bParam4, 0, 1);
	Function_187(bParam0, 0);
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_186(bParam0) };
	Function_181(&Var0, CEIL(bParam4), bParam5);
	Function_180(bParam0, 4);
	Function_149();
}

void Function_149() //Position: 0x492C / 18732
{
	if (!Function_79())
	{
		if (!Function_179(1, 3, 1, 1))
		{
			Function_169(1);
			Function_168(1, 8);
		}
	}
	else
	{
		Function_150(0);
	}
	return;
}

void Function_150(bool bParam0) //Position: 0x4955 / 18773
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_167(2);
	if (bParam0)
	{
		Function_167(1);
	}
	else
	{
		Function_166(1);
	}
	Function_151();
	return;
}

void Function_151() //Position: 0x49DE / 18910
{
	Function_164();
	Function_163();
	Function_163();
	Function_162();
	Function_162();
	Function_161();
	Function_161();
	Function_158(0);
	Function_158(0);
	if (!Function_79())
	{
		Function_156();
		Function_155();
		Function_154();
		Function_153();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_152();
	return;
}

void Function_152() //Position: 0x4A30 / 18992
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_153() //Position: 0x4B36 / 19254
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_154() //Position: 0x4B69 / 19305
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_155() //Position: 0x4CF7 / 19703
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_156() //Position: 0x4EAB / 20139
{
	Function_157(&Global_28260, 1, 0);
	return;
}

void Function_157(int iParam0, bool bParam1, int iParam2) //Position: 0x4EB9 / 20153
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_116();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_158(int iParam0) //Position: 0x50AA / 20650
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_160((50 + iVar4)) + Function_160((183 + iVar4))) + Function_160((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_159(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_159(int iParam0, bool bParam1, bool bParam2) //Position: 0x5150 / 20816
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_143(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_142(iParam0);
	if (bParam2)
	{
		Function_131(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_160(bool bParam0) //Position: 0x53EB / 21483
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_161() //Position: 0x542C / 21548
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_160((50 + iVar3) + 15) + Function_160((183 + iVar3) + 15)) + Function_160((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_159(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_162() //Position: 0x54B5 / 21685
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_160((50 + iVar3) + 8) + Function_160((183 + iVar3) + 8)) + Function_160((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_159(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_163() //Position: 0x554C / 21836
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_160((50 + iVar3)) + Function_160((183 + iVar3))) + Function_160((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_159(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_164() //Position: 0x55CB / 21963
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_165(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_159(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_165(int iParam0, bool bParam1, int iParam2) //Position: 0x5604 / 22020
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_143(iParam0, bParam1, 1);
	Function_142(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_131(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_166(int iParam0) //Position: 0x580E / 22542
{
	Function_89(&Global_79338, iParam0);
	return;
}

void Function_167(int iParam0) //Position: 0x581D / 22557
{
	Function_91(&Global_79338, iParam0);
	return;
}

void Function_168(int iParam0, int iParam1) //Position: 0x582C / 22572
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_79())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_169(bool bParam0) //Position: 0x586E / 22638
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_170();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_151();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_96(&Global_63095, 1);
		Function_96(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_170() //Position: 0x58BF / 22719
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_16())
	{
		Function_177(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_177(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_172(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_172(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_171(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_171(vector3 vParam0) //Position: 0x597A / 22906
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_172(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5992 / 22930
{
	int iVar0;
	
	iVar0 = Function_175(uParam2, uParam3);
	if (Function_174(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_99(&Global_63095, 1);
			Function_96(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_99(&Global_63095, 2);
			Function_96(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_99(&Global_63095, 2);
		Function_96(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_173();
	return StackVal, StackVal, Function_173();
}

vector3 Function_173() //Position: 0x5A79 / 23161
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_174(int iParam0) //Position: 0x5A82 / 23170
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_175(bool bParam0, bool bParam1) //Position: 0x5A98 / 23192
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_176(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_176(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_174(bVar0) && !bParam1)
	{
		bVar0 = Function_175(bParam0, 1);
	}
	return bVar0;
}

float Function_176(vector3 vParam0, vector3 vParam3) //Position: 0x5B5F / 23391
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_177(var uParam0, int iParam1) //Position: 0x5B7C / 23420
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_39(Global_34573, &vVar4);
	if (!Function_178(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_178(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_99(&Global_63095, 2);
	Function_96(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_171(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_178(int iParam0) //Position: 0x63A1 / 25505
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_98(uVar0, 0x1000000) || Function_98(uVar0, 0x2000000)) || Function_98(uVar0, 0x4000000)) || !Function_98(uVar0, 0x10000000));
}

bool Function_179(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x63DC / 25564
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_180(int iParam0, int iParam1) //Position: 0x6480 / 25728
{
	Function_96(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6494 / 25748
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_49();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_185(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_184(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_183(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_182(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_185(), iVar1 + 1);
	return;
}

struct<16> Function_182(bool bParam0) //Position: 0x6506 / 25862
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, bParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_183(bool bParam0) //Position: 0x6527 / 25895
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, bParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_184(bool bParam0) //Position: 0x6548 / 25928
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, bParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_185() //Position: 0x6569 / 25961
{
	return "CQueue_Count";
}

struct<16> Function_186(int iParam0) //Position: 0x657E / 25982
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_187(bool bParam0, int iParam1) //Position: 0x65B2 / 26034
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (bParam0 <= 58 && bParam0 >= 186) != 10) && !Function_191(bParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_190(bParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_189(bParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_186(bParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_188(bParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_190(bParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_190(bParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(bParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_188(int iParam0) //Position: 0x6634 / 26164
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_186(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_189(int iParam0) //Position: 0x6654 / 26196
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_190(bool bParam0) //Position: 0x6685 / 26245
{
	return Global_50170[bParam022].f_24;
}

bool Function_191(int iParam0) //Position: 0x6694 / 26260
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_192(int iParam0) //Position: 0x6812 / 26642
{
	Function_193(iParam0, 1);
	return;
}

void Function_193(int iParam0, bool bParam1) //Position: 0x681E / 26654
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_99(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_33((iVar0 % 32)));
	}
	else
	{
		Function_96(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_33((iVar0 % 32)));
	}
	return;
}

void Function_194(bool bParam0, bool bParam1) //Position: 0x6874 / 26740
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_195();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

var Function_195() //Position: 0x69C0 / 27072
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

int Function_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A0D / 27149
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		(*&Global_50170[bParam022] + 36)[bParam1] = bParam2;
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_195();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

float Function_197(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6AA7 / 27303
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		return (*&Global_50170[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_195();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("PVP_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

void Function_198(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x6B4D / 27469
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[24];
	char* cVar18[16];
	char* cVar22[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_190(bParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_186(bParam0), 6);
		stradd(&cVar0, "_info", 24);
		if (bParam3 >= 4294967295)
		{
			memcpy(&cVar6, StackVal, *(&Global_50170[bParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			memcpy(&cVar12, StackVal, *(&Global_50170[bParam022] + 16), 6);
			stradd(&cVar12, "_num2", 24);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			memcpy(&cVar18, StackVal, *(&Global_50170[bParam022] + 16), 4);
			stradd(&cVar18, "_num3", 16);
			UI_SET_STRING(&cVar18, INT_TO_STRING(bParam5));
		}
		if (bParam6 >= 4294967295)
		{
			memcpy(&cVar22, StackVal, *(&Global_50170[bParam022] + 16), 4);
			stradd(&cVar22, "_num4", 16);
			UI_SET_STRING(&cVar22, INT_TO_STRING(bParam6));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_190(bParam0), &cVar0, 2, 2, true);
		Function_199(Function_190(bParam0), 0);
	}
}

void Function_199(char* cParam0, bool bParam1) //Position: 0x6C41 / 27713
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

void Function_200(bool bParam0) //Position: 0x6C66 / 27750
{
	Function_209(bParam0);
	return;
}

void Function_201(bool bParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x6C71 / 27761
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam7))
	{
		bParam7 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_186(bParam0) };
	Function_181(&Var0, CEIL(bParam4), bParam7);
	*uParam1 = bParam2;
	if (bParam8)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(bParam0), (TO_FLOAT(Global_50170[bParam022].f_28) / TO_FLOAT(bParam6)), false, 0);
	}
	Function_202(bParam0, bParam6, CEIL(bParam5), 0);
	if (iParam3 != 4294967295)
	{
		Function_192(iParam3);
	}
	Function_180(bParam0, 4);
	Function_149();
}

void Function_202(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6D01 / 27905
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_191(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_190(iParam0));
	if ((bParam3 && Function_206(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_190(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_189(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_186(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_205(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_188(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_190(iParam0), &Var7, 0, 2, Function_206(iParam0, 4));
			if (!bParam3)
			{
				Function_203(iParam0, 4);
			}
		}
	}
}

void Function_203(int iParam0, int iParam1) //Position: 0x6DBE / 28094
{
	Function_99(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_204(int iParam0) //Position: 0x6DD2 / 28114
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_205(int iParam0) //Position: 0x6E00 / 28160
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_206(int iParam0, int iParam1) //Position: 0x6E30 / 28208
{
	return Function_98(Global_50170[iParam022].f_32, iParam1);
}

bool Function_207(bool bParam0) //Position: 0x6E44 / 28228
{
	if (bParam0)
	{
		return "UN_UNDEADTEAMPLAYER_64";
	}
	return "UN_UNDEADTEAMPLAYER_128";
}

float Function_208(bool bParam0) //Position: 0x6E86 / 28294
{
	return Global_50170[bParam022].f_12;
}

void Function_209(bool bParam0) //Position: 0x6E95 / 28309
{
	Function_210(bParam0, 0, Global_50170[bParam022].f_28);
	return;
}

int Function_210(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6EAB / 28331
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_195();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

int Function_211(int iParam0) //Position: 0x6F20 / 28448
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_212(bool bParam0, int iParam1) //Position: 0x6F39 / 28473
{
	if (Global_56092[bParam0] <= 5)
	{
		if (iParam1 == 24)
		{
			if (Function_218(&iLocal_66))
			{
				if (Function_216(&iLocal_66) < 3.0f)
				{
					Function_215(&iLocal_66);
					Global_56092[bParam0] = 0;
				}
			}
			Global_56092[bParam0]++;
			if (!Function_218(&iLocal_66))
			{
				Function_213(&iLocal_66);
			}
		}
	}
	return Global_56092[bParam0];
}

void Function_213(int iParam0) //Position: 0x6F98 / 28568
{
	Function_214(iParam0, 0.0f);
	return;
}

void Function_214(int iParam0, float fParam1) //Position: 0x6FA4 / 28580
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_99(iParam0, 1);
	Function_96(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_215(int iParam0) //Position: 0x6FC5 / 28613
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

float Function_216(int iParam0) //Position: 0x6FD9 / 28633
{
	if (Function_218(iParam0))
	{
		if (Function_217(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_217(int iParam0) //Position: 0x70A1 / 28833
{
	return Function_98(*iParam0, 2);
}

bool Function_218(int iParam0) //Position: 0x70AE / 28846
{
	return Function_98(*iParam0, 1);
}

void Function_219(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x70BB / 28859
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam2)
	{
		case 0x00000000:
			Function_209(bParam0);
			fVar1 = Function_208(bParam0);
			bVar0 = bParam4;
			if (bVar0 > 10)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 1, 8011, 50.0f, 100.0f, 20, Function_220(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_209(bParam0);
			fVar1 = Function_208(bParam0);
			bVar0 = bParam4;
			if (bVar0 > 20)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 2, 8012, 100.0f, 150.0f, 30, Function_220(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(20));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_209(bParam0);
			fVar1 = Function_208(bParam0);
			bVar0 = bParam4;
			if (bVar0 > 30)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 3, 8013, 150.0f, 200.0f, 35, Function_220(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(30));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000003:
			Function_209(bParam0);
			fVar1 = Function_208(bParam0);
			bVar0 = bParam4;
			if (bVar0 > 35)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 4, 8014, 200.0f, 250.0f, 40, Function_220(0), 1);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(35));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000004:
			Function_209(bParam0);
			fVar1 = Function_208(bParam0);
			bVar0 = bParam4;
			if (bVar0 > 40)
			{
				*uParam3 = 0.0f;
				Function_148(bParam0, uParam2, uParam1, 8015, 250.0f, Function_220(0));
				Function_200(bParam0);
				break;
			}
			*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(40));
			if (*uParam3 == fVar1)
			{
				Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
			}
	}
}

bool Function_220(bool bParam0) //Position: 0x72E2 / 29410
{
	if (bParam0)
	{
		return "UN_UNDEADKILLCHAIN_64";
	}
	return "UN_UNDEADKILLCHAIN_128";
}

void Function_221(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x7322 / 29474
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	switch (*uParam2)
	{
		case 0x00000000:
			Function_209(bParam0);
			fVar1 = Function_208(bParam0);
			bVar2 = Function_197(bParam0, 1, 1);
			bVar3 = Function_197(bParam0, 2, 1);
			bVar4 = Function_197(bParam0, 3, 1);
			bVar5 = Function_197(bParam0, 4, 1);
			iVar6 = Function_224(bParam4);
			switch (iVar6)
			{
				case 0x00000000:
					if (CEIL(Function_197(bParam0, 1, 1)) <= 5)
					{
						Function_196(bParam0, 1, (bVar2 + 1.0f), 1);
					}
					break;
				
				case 0x00000001:
					if (CEIL(Function_197(bParam0, 2, 1)) <= 5)
					{
						Function_196(bParam0, 2, (bVar3 + 1.0f), 1);
					}
					break;
				
				case 0x00000002:
					if (CEIL(Function_197(bParam0, 3, 1)) <= 5)
					{
						Function_196(bParam0, 3, (bVar4 + 1.0f), 1);
					}
					break;
				
				case 0x00000003:
					if (CEIL(Function_197(bParam0, 4, 1)) <= 5)
					{
						Function_196(bParam0, 4, (bVar5 + 1.0f), 1);
					}
					break;
			}
			bVar2 = Function_197(bParam0, 1, 1);
			bVar3 = Function_197(bParam0, 2, 1);
			bVar4 = Function_197(bParam0, 3, 1);
			bVar5 = Function_197(bParam0, 4, 1);
			bVar0 = CEIL((((bVar2 + bVar3) + bVar4) + bVar5));
			if (bVar0 > 20)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 1, 8001, 50.0f, 100.0f, 20, Function_223(0), 0);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(20));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 1, CEIL(bVar2), CEIL(bVar3), CEIL(bVar4), CEIL(bVar5));
				}
			}
			break;
		
		case 0x00000001:
			Function_200(bParam0);
			iVar7 = GET_LAST_HIT_WEAPON(bParam4);
			if ((((iVar7 != 34 || iVar7 != 16) || iVar7 != 17) || iVar7 != 15) || iVar7 != 18)
			{
				Global_56092[bParam0]++;
				bVar0 = Global_56092[bParam0];
			}
			else
			{
				Function_222(bParam0);
			}
			if (bVar0 > 20)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 2, 8002, 100.0f, 150.0f, 500, Function_223(0), 0);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(20));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 0, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_200(bParam0);
			Global_50170[bParam022].f_28++;
			bVar0 = Global_50170[bParam022].f_28;
			if (bVar0 > 500)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 3, 8003, 150.0f, 200.0f, 1000, Function_223(0), 0);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(500));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000003:
			Function_200(bParam0);
			Global_50170[bParam022].f_28++;
			bVar0 = Global_50170[bParam022].f_28;
			if (bVar0 > 1000)
			{
				*uParam3 = 0.0f;
				Function_201(bParam0, uParam2, 4, 8004, 200.0f, 250.0f, 5000, Function_223(0), 0);
				Function_200(bParam0);
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(1000));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000004:
			Function_200(bParam0);
			Global_50170[bParam022].f_28++;
			bVar0 = Global_50170[bParam022].f_28;
			if (bVar0 > 5000)
			{
				*uParam3 = 0.0f;
				Function_148(bParam0, uParam2, uParam1, 8005, 250.0f, Function_223(0));
			}
			else
			{
				*uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(5000));
				if (*uParam3 == fVar1)
				{
					Function_198(bParam0, *uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
	}
}

void Function_222(int iParam0) //Position: 0x76C6 / 30406
{
	Global_56092[iParam0] = 0;
	Global_56352[iParam0] = 4294967295;
	return;
}

bool Function_223(bool bParam0) //Position: 0x76DC / 30428
{
	if (bParam0)
	{
		return "UN_UNDEADKILLS_64";
	}
	return "UN_UNDEADKILLS_128";
}

int Function_224(bool bParam0) //Position: 0x7714 / 30484
{
	if ((((Function_229(bParam0) && !Function_228(bParam0)) && !Function_227(bParam0)) && !Function_226(bParam0)) && !Function_225(bParam0))
	{
		return 0;
	}
	if (Function_228(bParam0))
	{
		return 1;
	}
	if (Function_227(bParam0))
	{
		return 2;
	}
	if (Function_226(bParam0))
	{
		return 3;
	}
	if (Function_225(bParam0))
	{
		return 4;
	}
	return 4294967295;
}

bool Function_225(bool bParam0) //Position: 0x7775 / 30581
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_226(bool bParam0) //Position: 0x7795 / 30613
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_227(bool bParam0) //Position: 0x77B5 / 30645
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_228(bool bParam0) //Position: 0x77D5 / 30677
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

int Function_229(bool bParam0) //Position: 0x77F5 / 30709
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(bParam0, "Zombie");
		}
	}
	return 0;
}

void Function_230(bool bParam0) //Position: 0x7831 / 30769
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_LAST_HIT_WEAPON(bParam0);
	iVar1 = Function_267(4);
	bVar2 = Function_98((*&Global_84364 + 712)[iVar1], 1);
	if (bVar2)
	{
		switch (iVar0)
		{
			case 0x0000001A:
				switch (iVar1)
				{
					case 0x00000001:
						Function_266(&Global_50170, 102, 10, 50.0f, 0, 1);
						Function_266(&Global_50170, 103, 50, 250.0f, 1, 1);
						Function_266(&Global_50170, 104, 250, 500.0f, 5, 1);
						break;
					
					case 0x00000002:
						Function_266(&Global_50170, 116, 10, 50.0f, 0, 1);
						Function_266(&Global_50170, 117, 50, 250.0f, 1, 1);
						Function_266(&Global_50170, 118, 250, 500.0f, 5, 1);
						break;
				}
				break;
			
			case 0x0000001C:
				switch (iVar1)
				{
					case 0x00000004:
						Function_266(&Global_50170, 144, 10, 50.0f, 0, 1);
						Function_266(&Global_50170, 145, 50, 250.0f, 1, 1);
						Function_266(&Global_50170, 146, 250, 500.0f, 5, 1);
						break;
				}
				break;
			}
	}
	return;
}

void Function_231(int iParam0) //Position: 0x792C / 31020
{
	int iVar0;
	bool bVar1;
	
	iVar0 = Function_267(4);
	bVar1 = Function_98((*&Global_84364 + 712)[iVar0], 1);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 0x00000000:
				Function_266(&Global_50170, 83, 50, 50.0f, 0, 1);
				Function_266(&Global_50170, 84, 250, 250.0f, 1, 1);
				Function_266(&Global_50170, 85, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000001:
				Function_266(&Global_50170, 97, 50, 50.0f, 0, 1);
				Function_266(&Global_50170, 98, 250, 250.0f, 1, 1);
				Function_266(&Global_50170, 99, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000002:
				Function_266(&Global_50170, 111, 50, 50.0f, 0, 1);
				Function_266(&Global_50170, 112, 250, 250.0f, 1, 1);
				Function_266(&Global_50170, 113, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000003:
				Function_266(&Global_50170, 125, 50, 50.0f, 0, 1);
				Function_266(&Global_50170, 126, 250, 250.0f, 1, 1);
				Function_266(&Global_50170, 127, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000004:
				Function_266(&Global_50170, 139, 50, 50.0f, 0, 1);
				Function_266(&Global_50170, 140, 250, 250.0f, 1, 1);
				Function_266(&Global_50170, 141, 1000, 500.0f, 5, 1);
				break;
			
			case 0x00000005:
				Function_266(&Global_50170, 153, 50, 50.0f, 0, 1);
				Function_266(&Global_50170, 154, 250, 250.0f, 1, 1);
				Function_266(&Global_50170, 155, 1000, 500.0f, 5, 1);
				break;
			}
	}
	return;
}

void Function_232(bool bParam0) //Position: 0x7AB7 / 31415
{
	if (!NET_GET_KILL_EFFECT_ON())
	{
		return;
	}
	if (bParam0)
	{
		SET_SHOCK_AMPLITUDE(1.0f);
		SET_SHOCK_SPEED(9.0f);
		FIRE_SHOCK(0.4f);
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_HS_MASTER");
	}
	else
	{
		SET_SHOCK_AMPLITUDE(0.5f);
		SET_SHOCK_SPEED(9.0f);
		FIRE_SHOCK(0.5f);
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
	}
	return;
}

void Function_233() //Position: 0x7B2E / 31534
{
	Function_103();
	Function_236();
	Function_234();
	return;
}

void Function_234() //Position: 0x7B3D / 31549
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_235();
	return;
}

void Function_235() //Position: 0x7B71 / 31601
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_236() //Position: 0x7B82 / 31618
{
	if (Global_83864.f_1264 > 6)
	{
		Function_237(&(Global_50170[522]));
		Function_237(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_237(&(Global_50170[722]));
		Function_237(&(Global_50170[822]));
		Function_237(&(Global_50170[922]));
		Function_237(&(Global_50170[1022]));
		Function_237(&(Global_50170[1122]));
	}
	return;
}

void Function_237(bool bParam0) //Position: 0x7BE2 / 31714
{
	Global_56092[*bParam0] = 0;
	Function_238(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_238(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7BFC / 31740
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_190(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_186(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_190(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_206(iParam0, 4))
	{
		Function_199(Function_190(iParam0), 0);
	}
}

void Function_239(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x7CB3 / 31923
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_HIT_FLAGS(bParam0);
	bVar1 = false;
	if (bParam4)
	{
		bVar1 = ANIMAL_ACTOR_GET_SPECIES(bParam0);
	}
	if (Global_30842[46])
	{
		Function_240(iVar0, 4);
		PRINTNL();
	}
	if (DECOR_CHECK_EXIST(bParam0, "Drowned") || Function_98(iVar0, 8192))
	{
		Function_259(StackVal, StackVal, 3, vParam1, 1, 4294967295, bVar1, 0, 0);
	}
	else if (DECOR_CHECK_EXIST(bParam0, "BledOut"))
	{
		Function_259(StackVal, StackVal, 3, vParam1, 5, 4294967295, bVar1, 0, 0);
	}
	else if (Function_98(iVar0, 32768))
	{
		Function_259(StackVal, StackVal, 3, vParam1, 3, 4294967295, bVar1, 0, 0);
	}
	else if (Function_98(iVar0, 8))
	{
		Function_259(StackVal, StackVal, 3, vParam1, 2, 4294967295, bVar1, 0, 0);
	}
	else if (Function_98(iVar0, 16))
	{
		Function_259(StackVal, StackVal, 3, vParam1, 4, 4294967295, bVar1, 0, 0);
	}
	else
	{
		Function_259(StackVal, StackVal, 3, vParam1, 0, 4294967295, bVar1, 0, 0);
	}
}

void Function_240(int iParam0, int iParam1) //Position: 0x7D94 / 32148
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_98(iParam0, Function_33(bVar0)))
		{
			PRINTINT(true);
		}
		else
		{
			PRINTINT(false);
		}
		if ((bVar0 % iParam1) != 0 && bVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		bVar0 = (bVar0 + 4294967295);
	}
	return;
}

void Function_241(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7DDB / 32219
{
	if (Function_375(8192))
	{
		Function_252(bParam0, bParam1, bParam2);
	}
	else if (Function_375(16384))
	{
		if (bParam2)
		{
			UI_ENTER("XpHud");
		}
		Function_245(bParam0, bParam2);
	}
	else if (Global_3403)
	{
		if (bParam2)
		{
			UI_ENTER("XpHud");
			Function_244();
			if (Function_243(bParam0))
			{
				Function_242(bParam0, bParam2);
			}
			else
			{
				Function_128(1.0f, 0, 1);
			}
		}
	}
	return;
}

void Function_242(var uParam0, bool bParam1) //Position: 0x7E4B / 32331
{
	bool bVar0;
	
	uParam0 = uParam0;
	if (bParam1)
	{
		bVar0 = false;
		switch (StackVal)
		{
			case 0x00000000:
			case 0x00000001:
			case 0x00000002:
				bVar0 = false;
				break;
			
			case 0x00000003:
				bVar0 = 7;
				break;
			
			case 0x00000004:
			case 0x00000005:
				bVar0 = 10;
				break;
			
			case 0x00000006:
				bVar0 = 12;
				break;
			
			case 0x00000007:
			case 0x00000008:
				bVar0 = 14;
				break;
			
			case 0x00000009:
				bVar0 = 15;
				break;
			
			default:
				if (StackVal <= 15)
				{
					bVar0 = 17;
				}
				else
				{
					bVar0 = 20;
				}
				break;
		}
		if (bVar0 >= 0)
		{
			Function_128(TO_FLOAT(bVar0), "xp_wanted_combo", 1);
		}
		else
		{
			Function_128(5.0f, 0, 1);
		}
	}
	else
	{
		Function_128(1.0f, 0, 1);
	}
	return;
}

bool Function_243(bool bParam0) //Position: 0x7F1B / 32539
{
	int iVar0;
	
	iVar0 = GET_ACTOR_FACTION(bParam0);
	if (iVar0 != 8 || iVar0 != 10)
	{
		return 1;
	}
	return 0;
}

void Function_244() //Position: 0x7F39 / 32569
{
	float fVar0;
	struct<5> Var1;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	if (StackVal <= 998)
	{
		if ((fVar0 - Global_76939) >= 10.0f || Global_76939 != 0.0f)
		{
			Global_76939.f_8 = StackVal + 1;
			if (StackVal <= Global_76939.f_12)
			{
				Global_76939.f_12 = StackVal;
			}
		}
		if (StackVal > 2)
		{
			UI_SHOW("XPMultiplier");
			UI_SHOW("XPComboTimer");
			UI_ANIM_SETUP("XpComboSpin", 0.2f, 180, false);
			UI_ANIM_RESTART("XpComboSpin");
			Var1.f_4 = (StackVal + Function_137((4294966996 - 2), 30) * 50);
			PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_KILL_RISER_MASTER", &Var1);
			Function_99(&Global_76939 + 4, 3);
		}
	}
	Function_124(fVar0);
	return;
}

void Function_245(bool bParam0, bool bParam1) //Position: 0x8030 / 32816
{
	bool bVar0;
	int iVar1;
	
	if (bParam1)
	{
		bVar0 = false;
		if (DECOR_GET_INT_VERBOSE(bParam0, "nKillBonus", &bVar0))
		{
			if (bVar0 < 0)
			{
				return;
			}
			iVar1 = DECOR_GET_STRING_HASH(bParam0, "KillBonusClass");
			if (iVar1 != 0)
			{
				Function_246(bVar0, "", iVar1);
			}
			else
			{
				Function_246(bVar0, "XP_class_special", 0);
			}
		}
		else
		{
			Function_246(10, 0, 0);
		}
		Function_244();
	}
	else if (GET_DAMAGE_BY_LOCAL_PLAYER(bParam0) < 0.0f)
	{
		Function_246(2, 0, 0);
	}
	return;
}

void Function_246(bool bParam0, bool bParam1, int iParam2) //Position: 0x80BF / 32959
{
	Function_249(bParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_247(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_247(), UI_GET_STRING(bParam1));
	}
	return;
}

int Function_247() //Position: 0x8102 / 33026
{
	return Function_248(0);
}

int Function_248(int iParam0) //Position: 0x810C / 33036
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_249(int iParam0) //Position: 0x811C / 33052
{
	Function_250(0, iParam0);
	return;
}

void Function_250(var uParam0, int iParam1) //Position: 0x8128 / 33064
{
	Function_251(uParam0, (Function_248(uParam0) + iParam1));
	return;
}

void Function_251(int iParam0, int iParam1) //Position: 0x813B / 33083
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_252(bool bParam0, var uParam1, bool bParam2) //Position: 0x8164 / 33124
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	
	bVar0 = false;
	if (DECOR_GET_INT_VERBOSE(bParam0, "nKillBonus", &bVar0))
	{
		if (bVar0 < 0)
		{
			return;
		}
	}
	if (bParam2)
	{
		bVar1 = false;
		switch (StackVal)
		{
			case 0x00000000:
				bVar1 = false;
				break;
			
			case 0x00000001:
				bVar1 = 5;
				break;
			
			case 0x00000002:
				bVar1 = 5;
				Function_253(StackVal + 1);
				break;
			
			case 0x00000003:
				bVar1 = 10;
				break;
			
			case 0x00000004:
				bVar1 = 10;
				Function_253(StackVal + 1);
				break;
			
			case 0x00000005:
				bVar1 = 15;
				break;
			
			case 0x00000006:
				bVar1 = 20;
				Function_253(StackVal + 1);
				break;
			
			case 0x00000007:
				bVar1 = 25;
				break;
			
			case 0x00000008:
				bVar1 = 30;
				break;
			
			case 0x00000009:
				bVar1 = 40;
				if (Function_98(Global_79962, 128))
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(57))
					{
						AWARD_ACHIEVEMENT(57);
					}
				}
				break;
			
			default:
				if (StackVal <= 15)
				{
					bVar1 = 50;
				}
				else
				{
					bVar1 = 100;
				}
				break;
		}
		if (bVar1 >= 0)
		{
			Function_246(bVar1, "xp_combo", 0);
		}
		Function_244();
		if (bVar0 >= 0)
		{
			iVar2 = DECOR_GET_STRING_HASH(bParam0, "KillBonusClass");
			if (iVar2 != 0)
			{
				Function_246(bVar0, "", iVar2);
			}
			else
			{
				Function_246(bVar0, "XP_class_special", 0);
			}
		}
	}
	fVar3 = GET_DAMAGE_BY_LOCAL_PLAYER(bParam0);
	bVar4 = ROUND((fVar3 / 5.0f)) * 5;
	if (bVar4 >= 0)
	{
		if (uParam1 && bParam2)
		{
			UI_SET_STRING_FORMAT("Generic_Dbuffer32_0", UI_GET_STRING("XP_Class_headshot"), I2STR(CEIL(2.0f)), I2STR(bVar4), false);
			Function_246((bVar4 * CEIL(2.0f)), "Generic_Dbuffer32_0", 0);
		}
		else
		{
			Function_246(bVar4, 0, 0);
		}
	}
	return;
}

void Function_253(bool bParam0) //Position: 0x835D / 33629
{
	int iVar0;
	int iVar1;
	
	if (!Function_75())
	{
		return;
	}
	iVar0 = Function_267(4);
	if (iVar0 > 0 || iVar0 <= 6)
	{
		return;
	}
	iVar1 = iVar0;
	if (Function_98((*&Global_84364 + 712)[iVar1], 1) && !Function_10(4194304))
	{
		switch (iVar1)
		{
			case 0x00000000:
				Function_254(&Global_50170, 80, bParam0, 3, 50.0f, 0);
				Function_254(&Global_50170, 81, bParam0, 5, 250.0f, 1);
				Function_254(&Global_50170, 82, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000001:
				Function_254(&Global_50170, 94, bParam0, 3, 50.0f, 0);
				Function_254(&Global_50170, 95, bParam0, 5, 250.0f, 1);
				Function_254(&Global_50170, 96, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000002:
				Function_254(&Global_50170, 108, bParam0, 3, 50.0f, 0);
				Function_254(&Global_50170, 109, bParam0, 5, 250.0f, 1);
				Function_254(&Global_50170, 110, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000003:
				Function_254(&Global_50170, 122, bParam0, 3, 50.0f, 0);
				Function_254(&Global_50170, 123, bParam0, 5, 250.0f, 1);
				Function_254(&Global_50170, 124, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000004:
				Function_254(&Global_50170, 136, bParam0, 3, 50.0f, 0);
				Function_254(&Global_50170, 137, bParam0, 5, 250.0f, 1);
				Function_254(&Global_50170, 138, bParam0, 7, 500.0f, 5);
				break;
			
			case 0x00000005:
				Function_254(&Global_50170, 150, bParam0, 3, 50.0f, 0);
				Function_254(&Global_50170, 151, bParam0, 5, 250.0f, 1);
				Function_254(&Global_50170, 152, bParam0, 7, 500.0f, 5);
				break;
			}
	}
	return;
}

void Function_254(var uParam0, int iParam1, var uParam2, int iParam3, float fParam4, int iParam5) //Position: 0x850C / 34060
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_255(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, uParam2, iParam3, fParam4, iParam5, 0);
			break;
	}
}

void Function_255(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8) //Position: 0x8550 / 34128
{
	float fVar0;
	var uVar1;
	
	fVar0 = Function_208(iParam0);
	if (bParam4 > iParam5)
	{
		uVar1 = Function_257(iParam0);
		Function_256(iParam0, uParam1, uParam2, uParam3, uParam6, uParam7, uVar1);
	}
	else if (bParam4 >= 4294967295)
	{
		*uParam3 = TO_FLOAT(bParam4);
		*uParam3 = (*uParam3 / IntToFloat(iParam5));
		if (*uParam3 == fVar0)
		{
			Function_238(iParam0, *uParam3, (uParam8 && Function_206(iParam0, 4)), bParam4, 4294967295, 4294967295);
		}
	}
}

void Function_256(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, bool bParam6) //Position: 0x85B7 / 34231
{
	var uVar0;
	
	*uParam2 = 10;
	*uParam1 = 2;
	*uParam3 = 1.0f;
	if (!IS_STRING_VALID(bParam6))
	{
		bParam6 = "challenge_01_128";
	}
	Function_181(&Global_50170[iParam022] + 16, CEIL(bParam4), bParam6);
	if (iParam5 != 5)
	{
		uVar0 = iParam0 + 1;
		Function_202(uVar0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY(Function_190(iParam0));
		REMOVE_JOURNAL_ENTRY(Function_190(iParam0), false);
		Function_180(iParam0, 4);
	}
	else
	{
		Function_187(iParam0, 0);
	}
	Function_149();
}

var Function_257(int iParam0) //Position: 0x8634 / 34356
{
	int iVar0;
	
	iVar0 = "COOP_icon_128";
	switch (iParam0)
	{
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x000000A9:
		case 0x000000AA:
		case 0x000000AB:
			iVar0 = "SC_AA_Pikes_Icon_128";
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x000000AC:
		case 0x000000AD:
		case 0x000000AE:
			iVar0 = "SC_AA_Mercer_Icon_128";
			break;
		
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000076:
		case 0x000000AF:
		case 0x000000B0:
		case 0x000000B1:
			iVar0 = "SC_AA_Tesoro_Icon_128";
			break;
		
		case 0x00000077:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007B:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x000000B2:
		case 0x000000B3:
		case 0x000000B4:
			iVar0 = "SC_AA_Gaptooth_Icon_128";
			break;
		
		case 0x00000085:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			iVar0 = "SC_AA_TwinRocks_Icon_128";
			break;
		
		case 0x00000093:
		case 0x00000094:
		case 0x00000095:
		case 0x00000096:
		case 0x00000097:
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
			iVar0 = "SC_AA_Nosalida_Icon_128";
			break;
		
		default:
			iVar0 = "COOP_icon_128";
			break;
	}
	return iVar0;
}

void Function_258() //Position: 0x8982 / 35202
{
	PLAY_SOUND_FRONTEND("MULTIPLAYER_THUNK_MASTER");
	FLASH_SET_BOOL("mp_hud", "Reticle.Hit", 1);
	FLASH_SET_INT("mp_hud", "Reticle.Refresh", true);
	FLASH_SET_INT("mp_hud", "Refresh", true);
	return;
}

void Function_259(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x89FA / 35322
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = 4294967295;
	if (NET_IS_IN_SESSION())
	{
		bVar1 = GET_LOCAL_SLOT();
		if (IS_SLOT_VALID(bVar1))
		{
			bVar0 = bVar1;
		}
	}
	Function_260(StackVal, StackVal, bVar0, bParam4, iParam0, vParam1, bParam5, bParam6, bParam7, bParam8);
}

void Function_260(int iParam0, var uParam1, int iParam2, vector3 vParam3, var uParam6, int iParam7, var uParam8, bool bParam9) //Position: 0x8A31 / 35377
{
	struct<11> Var0;
	bool bVar11;
	
	Var0 = iParam0;
	Var0.f_4 = uParam1;
	Var0.f_12 = uParam6;
	Var0.f_28 = uParam8;
	Var0.f_8 = iParam2;
	*(&Var0 + 16) = { StackVal, StackVal, vParam3 };
	Var0.f_32 = iParam7;
	if (iParam7 == 0)
	{
		bVar11 = Function_116();
		switch (iParam2)
		{
			case 0x00000005:
			case 0x00000000:
			case 0x00000006:
			case 0x00000004:
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				Var0.f_40 = Global_78480.f_128;
				if (IS_ACTOR_VALID(bVar11))
				{
					if (Function_262(bVar11))
					{
						Function_91(&Var0 + 40, 1048576);
					}
					if (IS_ACTOR_RIDING(bVar11))
					{
						Function_91(&Var0 + 40, 2097152);
					}
					if (IS_ACTOR_USING_COVER(bVar11))
					{
						Function_91(&Var0 + 40, 8388608);
					}
				}
				*(&Global_78617 + 2604) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
				Function_261(&Global_78617 + 2648);
				break;
			
			default:
				break;
			}
	}
	if (bParam9)
	{
		Function_91(&Var0 + 40, 0x1000000);
	}
	if (iParam0 >= 4294967295)
	{
		NET_SCRIPTMSG_SEND(2, 6, &Var0, 11, 1);
	}
}

void Function_261(int iParam0) //Position: 0x8B36 / 35638
{
	*iParam0++;
	return;
}

bool Function_262(bool bParam0) //Position: 0x8B44 / 35652
{
	struct<5> Var0;
	
	if (Function_263(bParam0))
	{
		return 0;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 0;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		if (GET_ACTOR_VELOCITY(bParam0, &Var0))
		{
			if (StackVal > -2.0f)
			{
				return 1;
			}
		}
		return 0;
	}
	return !IS_ACTOR_ON_LADDER(bParam0);
}

bool Function_263(bool bParam0) //Position: 0x8B8A / 35722
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_ON_FOOT(bParam0))
	{
		return IS_ACTOR_ON_GROUND(bParam0);
	}
	bVar0 = GET_MOUNT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	bVar0 = GET_VEHICLE(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	return 0;
}

void Function_264(int iParam0, int iParam1) //Position: 0x8BDA / 35802
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_265() //Position: 0x8BFF / 35839
{
	Function_124(3212836864);
	if (Function_375(8192))
	{
		Function_246(20, "nxp_disarm", 0);
	}
	else if (Function_375(16384))
	{
		Function_246(5, "nxp_disarm", 0);
	}
	return;
}

void Function_266(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5) //Position: 0x8C45 / 35909
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			uParam0[iParam122]->f_28++;
			bVar0 = uParam0[iParam122]->f_28;
			Function_255(iParam1, uParam0[iParam122] + 4, uParam0[iParam122] + 8, uParam0[iParam122] + 12, bVar0, iParam2, fParam3, iParam4, iParam5);
			break;
	}
}

int Function_267(int iParam0) //Position: 0x8CA6 / 36006
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_268() //Position: 0x8CC6 / 36038
{
	Function_124(3212836864);
	if (Function_375(8192))
	{
		Function_246(10, "xp_hatshot", 0);
	}
	else if (Function_375(16384))
	{
		Function_246(2, "xp_hatshot", 0);
	}
	return;
}

bool Function_269() //Position: 0x8D0E / 36110
{
	if (Function_375(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_270() //Position: 0x8D38 / 36152
{
	return UNK_0xA80C6DE6(&Global_78578);
}

bool Function_271() //Position: 0x8D45 / 36165
{
	return Function_10(32);
}

bool Function_272(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x8D50 / 36176
{
	var uVar0;
	
	if (bParam1)
	{
		Function_91(&uVar0, 1);
	}
	if (bParam2)
	{
		Function_91(&uVar0, 2);
	}
	if (bParam3)
	{
		Function_91(&uVar0, 4);
	}
	if (bParam4)
	{
		Function_91(&uVar0, 8);
	}
	if (bParam5)
	{
		Function_91(&uVar0, 1024);
	}
	if (bParam7)
	{
		Function_91(&uVar0, 16);
	}
	if (bParam8)
	{
		Function_91(&uVar0, 32);
	}
	if (bParam6)
	{
		Function_91(&uVar0, 1048576);
	}
	return Function_273(uParam0, uVar0);
}

int Function_273(bool bParam0, int iParam1) //Position: 0x8DBF / 36287
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_274(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_274(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_274(var uParam0, int iParam1) //Position: 0x8E98 / 36504
{
	return (uParam0 && iParam1) == 0;
}

void Function_275(bool bParam0) //Position: 0x8EA5 / 36517
{
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_26149 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return;
	}
	ITERATE_EVERYWHERE(Global_26149);
	ITERATE_ON_OBJECT_TYPE(Global_26149, 3);
	if (!bParam0 != "")
	{
		ITERATE_IN_SET(Global_26149, bParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(Global_26149, GET_EVENT_LAYOUT());
	}
	return;
}

void Function_276() //Position: 0x8F16 / 36630
{
	bool bVar0;
	
	if (Global_83864.f_1280)
	{
		if (Function_77())
		{
			bVar0 = Global_83864.f_1260 > Global_83864.f_1264;
		}
		if (Global_83864.f_1268 == 4294967295)
		{
			Global_83864.f_1268 = (Global_83864.f_1264 - 1);
		}
		Function_350(!Function_77(), 0);
		Global_83864.f_1280 = 0;
	}
	Function_302();
	Function_295();
	Function_277(bVar0);
	return;
}

void Function_277(bool bParam0) //Position: 0x8F73 / 36723
{
	bool bVar0;
	struct<8> Var1;
	float fVar9;
	struct<8> Var10;
	struct<5> Var18;
	
	if (Global_83864.f_1272)
	{
		if (!Function_375(524288))
		{
			if (bParam0)
			{
				Global_83864.f_1272 = 0;
				return;
			}
		}
		if (Function_293())
		{
			if (!Function_217(&iLocal_511))
			{
				if (Function_375(524288))
				{
					if (!Function_19(8192))
					{
						UI_EXIT("MPReward");
					}
				}
				Function_214(&iLocal_511, -2.0f);
				Function_292(&iLocal_511);
			}
		}
		else
		{
			if (Function_217(&iLocal_511))
			{
				if (Function_375(524288))
				{
					Function_290(Global_83864.f_1268, 0);
				}
				if (iLocal_514 < 1)
				{
					bVar0 = Function_288(iLocal_521 + 1);
				}
				else
				{
					bVar0 = Function_288(Global_83864.f_1264 + 1);
				}
				UI_SET_TEXT("MPRewardItem.s1", bVar0);
				UI_REFRESH("MPRewardTitle");
				Function_287(&iLocal_511);
			}
			if (Function_286(&iLocal_511, 0.0f) || !Function_218(&iLocal_511))
			{
				fVar9 = -2.0f;
				switch (iLocal_514)
				{
					case 0x00000000:
						Function_290(Global_83864.f_1268, 0);
						Function_214(&iLocal_511, -1.0f);
						Function_285(524288);
						UNK_0x8DEC3E03("left");
						if (Global_83864.f_1268 >= Global_83864.f_1264)
						{
							Global_83864.f_1268 = 0;
						}
						else if (Global_83864.f_1268 == 49)
						{
							Global_83864.f_1268 = 0;
						}
						else if (Global_83864.f_1268 == 4294967295)
						{
							Global_83864.f_1268 = Function_136(0, (Global_83864.f_1264 - 1));
						}
						iLocal_521 = Global_83864.f_1268;
						iLocal_514 = 1;
						break;
					
					case 0x00000001:
						if (iLocal_521 <= Global_83864.f_1264)
						{
							iLocal_521++;
							UI_SET_TEXT("MPRewardItem.s1", Function_288(iLocal_521 + 1));
							Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iLocal_521, 0, 1, 0) };
							UI_TEXTURE_SET_NAME("MPRankTexture", &Var10);
							UI_REFRESH("MPRankTexture");
							UI_REFRESH("MPRewardTitle");
							Var18.f_4 = (iLocal_521 - Global_83864.f_1268) * 100;
							PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MENU_RESUME_MASTER", &Var18);
							Function_214(&iLocal_511, Function_284((-0.5f + (0.05f * IntToFloat((Global_83864.f_1264 - iLocal_521)))), -0.1f));
						}
						else
						{
							iLocal_521 = Global_83864.f_1268 + 1;
							Function_214(&iLocal_511, -1.0f);
							iLocal_514 = 2;
						}
						break;
					
					case 0x00000002:
						if (StackVal != 4294967295)
						{
							Function_214(&iLocal_511, fVar9);
							Function_283(StackVal, GET_WEAPON_DISPLAY_NAME("XP_Weapon_Unlock"));
						}
						if (iLocal_521 <= Global_83864.f_1264)
						{
							iLocal_521++;
						}
						else
						{
							iLocal_521 = Global_83864.f_1268 + 1;
							iLocal_514 = 3;
						}
						break;
					
					case 0x00000003:
						if (StackVal != 4294967295)
						{
							Function_214(&iLocal_511, fVar9);
							Function_283(StackVal, GET_ACTOR_ENUM_STRING_FROM_ENUM("XP_Horse_Unlock"));
						}
						if (iLocal_521 <= Global_83864.f_1264)
						{
							iLocal_521++;
						}
						else
						{
							iLocal_521 = Global_83864.f_1268 + 1;
							if (Global_84364.f_708 >= 0)
							{
								iLocal_514 = 6;
							}
							else
							{
								iLocal_514 = 4;
							}
						}
						break;
					
					case 0x00000004:
						if (Global_83864[iLocal_5216].f_12 != 0)
						{
							Function_214(&iLocal_511, fVar9);
							Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(Global_83864[iLocal_5216].f_12) };
							Function_283("XP_Playlist_Unlock", &Var1);
						}
						if (iLocal_521 <= Global_83864.f_1264)
						{
							iLocal_521++;
						}
						else if (Function_281(iLocal_521, 8))
						{
							iLocal_514 = 5;
						}
						else
						{
							iLocal_514 = 6;
						}
						break;
					
					case 0x00000005:
						Function_214(&iLocal_511, fVar9);
						Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(41) };
						Function_283("XP_Playlist_Unlock", &Var1);
						iLocal_514 = 6;
						break;
					
					case 0x00000006:
						if (Function_280(Global_83864.f_1268 + 1, Global_83864.f_1264, 2))
						{
							Function_214(&iLocal_511, fVar9);
							Function_283("XP_PVP_Challenge_Unlock", 0);
						}
						iLocal_514 = 7;
						break;
					
					case 0x00000007:
						if (Function_280(Global_83864.f_1268 + 1, Global_83864.f_1264, 4))
						{
							Function_214(&iLocal_511, fVar9);
							Function_283("XP_FM_Challenge_Unlock", 0);
						}
						iLocal_514 = 8;
						break;
					
					case 0x00000008:
						if ((Function_278(Global_83864.f_1268 + 1, Global_83864.f_1264) && Global_84364.f_708 != 0) || (Global_84364.f_708 != 4 && Global_83864.f_1264 != 49))
						{
							Function_214(&iLocal_511, fVar9);
							Function_283("XP_Avatar_Unlock", 0);
						}
						iLocal_514 = 9;
						break;
					
					case 0x00000009:
						if (Function_281(Global_83864.f_1264, 8) && Global_84364.f_708 > 4)
						{
							Function_214(&iLocal_511, fVar9);
							Function_283("XP_PassingIntoLegend", 0);
						}
						iLocal_514 = 10;
						break;
					
					case 0x0000000A:
						Global_83864.f_1268 = Global_83864.f_1264;
						Function_6("HUD_MP_OUTRO_MASTER");
						UNK_0x8DEC3E03("top");
						Function_104(524288);
						Function_215(&iLocal_511);
						Global_83864.f_1272 = 0;
						break;
					}
				}
		}
	}
	else
	{
		iLocal_514 = 0;
	}
	return;
}

int Function_278(int iParam0, int iParam1) //Position: 0x9524 / 38180
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 837;
	while (bVar0 < 971)
	{
		iVar1 = Function_279(bVar0);
		if (iParam0 + 1 >= iVar1 && iVar1 >= iParam1 + 1)
		{
			return 1;
		}
		bVar0++;
	}
	bVar0 = 1287;
	while (bVar0 < 1310)
	{
		iVar1 = Function_279(bVar0);
		if (iParam0 + 1 >= iVar1 && iVar1 >= iParam1 + 1)
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_279(bool bParam0) //Position: 0x958D / 38285
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(bParam0)) % 1000);
}

bool Function_280(var uParam0, int iParam1, int iParam2) //Position: 0x959F / 38303
{
	int iVar0;
	
	iVar0 = uParam0;
	while (iVar0 < iParam1)
	{
		if (Function_281(iVar0, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_281(int iParam0, int iParam1) //Position: 0x95C6 / 38342
{
	return Function_98(Global_83864[iParam06].f_16, iParam1);
}

struct<32> Function_282(int iParam0) //Position: 0x95DB / 38363
{
	struct<8> Var0;
	char* cVar168[32];
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &Var0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	strcpy(&cVar168, "", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar168;
}

void Function_283(bool bParam0, bool bParam1) //Position: 0x960B / 38411
{
	PLAY_SOUND_FRONTEND("HUD_MP_UNLOCK_MASTER");
	if (IS_STRING_VALID(bParam1))
	{
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING(bParam0), UI_GET_STRING(bParam1), false, false);
		UI_SET_TEXT("MPRewardItem.s0", "Generic_Dbuffer128_1");
	}
	else
	{
		UI_SET_TEXT("MPRewardItem.s0", bParam0);
	}
	UI_SHOW("MPRewardItem.s0");
	UI_REFRESH("MPRewardItem.s0");
	return;
}

float Function_284(int iParam0, int iParam1) //Position: 0x96C9 / 38601
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_285(int iParam0) //Position: 0x96DC / 38620
{
	Function_91(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_286(int iParam0, float fParam1) //Position: 0x9735 / 38709
{
	if (Function_218(iParam0))
	{
		if (Function_216(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_287(int iParam0) //Position: 0x9751 / 38737
{
	if (Function_218(iParam0))
	{
		if (Function_217(iParam0))
		{
			iParam0->f_4 = (StackVal - GET_CURRENT_GAME_TIME());
			iParam0->f_8 = 0.0f;
			Function_96(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

var Function_288(bool bParam0) //Position: 0x9818 / 38936
{
	bool bVar0;
	
	bVar0 = Function_289();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_289() //Position: 0x982F / 38959
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

void Function_290(int iParam0, int iParam1) //Position: 0x98EB / 39147
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iParam0, iParam1, 1, 0) };
	bVar8 = "XP_Unlock_Level";
	if (iParam0 == 49)
	{
		bVar8 = "XP_Unlock_LevelCap";
	}
	iVar9 = 0;
	if (UI_ISACTIVE("MPSplash"))
	{
		iVar9 = 2;
	}
	Function_291(&Var0, bVar8, "Common_Null", "HUD_MP_LEVEL_UP_MASTER", iVar9, 0, 0);
	UI_SET_TEXT("MPRewardItem.s1", Function_288(iParam0 + 1));
	UI_SHOW("MPRewardItem.s1");
	return;
}

void Function_291(char* cParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x99AB / 39339
{
	if (iParam6 != 0)
	{
		UI_TEXTURE_SET_HASH("MPRankTexture", iParam6);
	}
	else
	{
		UI_TEXTURE_SET_NAME("MPRankTexture", cParam0);
	}
	UI_SET_TEXT("MPRewardTitle", bParam1);
	if (iParam5 != 0)
	{
		UI_SET_TEXT_HASH("MPRewardItem.s0", iParam5);
	}
	else
	{
		UI_SET_TEXT("MPRewardItem.s0", bParam2);
	}
	UI_SHOW("MPReward");
	UI_SHOW("MPRewardItem.s0");
	UI_SET_STYLE("MPRewardTitle", iParam4);
	UI_REFRESH("MPRewardItem.s0");
	UI_SHOW("MPRewardItem.s1");
	UI_SET_TEXT("MPRewardItem.s1", "Common_Null");
	PLAY_SOUND_FRONTEND(bParam3);
}

void Function_292(int iParam0) //Position: 0x9ABC / 39612
{
	if (Function_218(iParam0))
	{
		if (!Function_217(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_99(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_293() //Position: 0x9B7B / 39803
{
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		return 1;
	}
	if (Function_19(1) && (!Function_375(524288) || Function_19(8192)))
	{
		return 1;
	}
	if (Function_19(2))
	{
		return 1;
	}
	if ((Function_294(4) || Function_294(8)) && !Function_375(524288))
	{
		return 1;
	}
	return 0;
}

bool Function_294(bool bParam0) //Position: 0x9BF5 / 39925
{
	return Function_20(Global_78617.f_52, bParam0);
}

void Function_295() //Position: 0x9C06 / 39942
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<4> Var5;
	var uVar9;
	var uVar10;
	
	bVar0 = Function_49();
	if (Function_301())
	{
		if (Function_218(&iLocal_515))
		{
			if (!Function_217(&iLocal_515))
			{
				Function_292(&iLocal_515);
				if (!Function_19(8192))
				{
					UI_EXIT("MPReward");
				}
			}
		}
		return;
	}
	if (Function_217(&iLocal_515))
	{
		Function_215(&iLocal_515);
		iLocal_518 = 1;
	}
	switch (iLocal_518)
	{
		case 0x00000000:
			if (!Function_19(2))
			{
				if (!DECOR_CHECK_EXIST(bVar0, "CQueue_Count"))
				{
					return;
				}
			}
		
		case 0x00000001:
			if (Function_218(&iLocal_515))
			{
				if (!Function_286(&iLocal_515, 0.0f))
				{
					return;
				}
			}
			bVar1 = DECOR_GET_INT(bVar0, Function_185());
			bVar2 = SHIFT_RIGHT(bVar1, 20);
			bVar1 = (bVar1 && 1023);
			Var5 = { StackVal, StackVal, StackVal, Function_184(bVar2) };
			bVar3 = DECOR_GET_INT(bVar0, &Var5);
			Var5 = { StackVal, StackVal, StackVal, Function_182(bVar2) };
			bLocal_520 = DECOR_GET_INT(bVar0, &Var5);
			Var5 = { StackVal, StackVal, StackVal, Function_183(bVar2) };
			bVar4 = DECOR_GET_INT(bVar0, &Var5);
			if ((bVar4 == 0 && bLocal_520 == 0) && bVar3 == 0)
			{
				Function_291("ignoreMe", "mp_challengeComplete", "ignoreMe", "HUD_MP_CHALLENGE_MASTER", 1, bVar3, bVar4);
				Function_214(&iLocal_515, -2.0f);
				Function_300(2);
				iLocal_518 = 2;
			}
			else
			{
				if (bLocal_520 != 0)
				{
					Function_128(TO_FLOAT(bLocal_520), uVar9, 0);
				}
				Function_299();
				iLocal_518 = 3;
				Function_298(&iLocal_515, 0.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_297(&iLocal_515, 0.0f))
			{
				Function_214(&iLocal_515, -2.5f);
				Function_128(TO_FLOAT(bLocal_520), uVar10, 0);
				iLocal_518 = 3;
				Function_299();
			}
			break;
		
		case 0x00000003:
			if (Function_297(&iLocal_515, 0.0f))
			{
				if (bLocal_519)
				{
					Function_214(&iLocal_515, -0.25f);
					iLocal_518 = 1;
					Function_6(0);
				}
				else
				{
					iLocal_518 = 0;
					Function_296(2);
					Function_6("HUD_MP_OUTRO_MASTER");
				}
			}
			break;
	}
	return;
}

void Function_296(int iParam0) //Position: 0x9E19 / 40473
{
	Function_89(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_297(int iParam0, float fParam1) //Position: 0x9E2B / 40491
{
	if (Function_286(iParam0, fParam1))
	{
		Function_215(iParam0);
		return 1;
	}
	return 0;
}

void Function_298(int iParam0, float fParam1) //Position: 0x9E43 / 40515
{
	if (!Function_218(iParam0))
	{
		Function_214(iParam0, fParam1);
	}
	return;
}

void Function_299() //Position: 0x9E59 / 40537
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;
	
	bVar0 = Function_49();
	bVar1 = DECOR_GET_INT(bVar0, Function_185());
	bVar2 = SHIFT_RIGHT(bVar1, 20);
	bVar1 = (bVar1 && 1023);
	Var3 = { StackVal, StackVal, StackVal, Function_184(bVar2) };
	DECOR_REMOVE(bVar0, &Var3);
	Var3 = { StackVal, StackVal, StackVal, Function_182(bVar2) };
	DECOR_REMOVE(bVar0, &Var3);
	Var3 = { StackVal, StackVal, StackVal, Function_183(bVar2) };
	DECOR_REMOVE(bVar0, &Var3);
	bVar1 = DECOR_GET_INT(bVar0, "CQueue_Count");
	bVar2 = SHIFT_RIGHT(bVar1, 20) + 1;
	bVar1 = (bVar1 && 1023);
	if (bVar2 <= bVar1)
	{
		DECOR_SET_INT(bVar0, "CQueue_Count", (bVar1 + SHIFT_LEFT(bVar2, 20)));
		bLocal_519 = true;
	}
	else
	{
		DECOR_REMOVE(bVar0, "CQueue_Count");
		bLocal_519 = false;
	}
	return;
}

void Function_300(int iParam0) //Position: 0x9F21 / 40737
{
	Function_91(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_301() //Position: 0x9F33 / 40755
{
	if (HUD_IS_FADED())
	{
		return 1;
	}
	if (HUD_IS_FADING())
	{
		return 1;
	}
	if (Function_19(4) && (!Function_19(2) || Function_19(8192)))
	{
		return 1;
	}
	if (Function_375(524288))
	{
		return 1;
	}
	if ((Function_294(4) || Function_294(8)) && !Function_19(2))
	{
		return 1;
	}
	if (!UI_ISFOCUSED("HudSceneOnline"))
	{
		return 1;
	}
	return 0;
}

void Function_302() //Position: 0x9FAA / 40874
{
	var uVar0;
	
	uVar0 = Global_83864.f_1264;
	if (!Function_349(uVar0, 1) && !Global_83864.f_1276)
	{
		if (Function_348())
		{
			Function_346(2, 44216);
			Function_346(4, 44113);
			Function_346(16, 43982);
			Function_346(10, 43902);
			Function_346(21, 43796);
			Function_346(6, 43716);
			Function_346(6, 43666);
			Function_346(7, 43616);
			Function_346(12, 43490);
			Function_346(11, 43466);
			Function_346(25, 43382);
			Function_346(19, 43301);
			Function_346(27, 43221);
			Function_346(29, 43191);
			Function_346(31, 43110);
			Function_346(34, 43029);
			Function_346(45, 42974);
			Function_346(45, 42944);
			Function_346(45, 42913);
			Function_346(0, 42658);
			Function_346(13, 42623);
			Function_346(2, 42588);
			Function_346(12, 42553);
			Function_346(3, 42518);
			Function_346(14, 42483);
			Function_346(5, 42448);
			Function_346(18, 42409);
			Function_346(41, 42370);
			Function_316(2, 187, 207);
			Function_316(5, 188, 208);
			Function_316(8, 189, 209);
			Function_316(9, 190, 210);
			Function_316(11, 191, 211);
			Function_316(13, 192, 212);
			Function_316(17, 193, 213);
			Function_316(18, 194, 214);
			Function_316(20, 195, 215);
			Function_316(24, 196, 216);
			Function_316(26, 197, 217);
			Function_316(28, 198, 218);
			Function_316(32, 200, 220);
			Function_316(35, 201, 221);
			Function_316(37, 202, 222);
			Function_316(40, 203, 223);
			Function_316(43, 204, 224);
			Function_316(46, 205, 225);
			Function_316(49, 206, 226);
			Function_316(50, 199, 219);
			Function_304(15, 10);
			Function_304(22, 12);
			Function_303(uVar0, 1);
		}
	}
	return;
}

void Function_303(int iParam0, int iParam1) //Position: 0xA163 / 41315
{
	Function_99(&Global_83864[iParam06] + 20, iParam1);
	return;
}

void Function_304(int iParam0, int iParam1) //Position: 0xA178 / 41336
{
	if (Global_83864.f_1264 + 1 > iParam0)
	{
		Function_305(&(Global_49399[iParam122]));
	}
	return;
}

void Function_305(int iParam0) //Position: 0xA196 / 41366
{
	Function_313(*iParam0);
	if (!Function_312(*iParam0, 2))
	{
		Function_308(*iParam0, 0);
		Function_307(*iParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(*iParam0), 0.0f, false, 0);
	}
	iParam0->f_4 = 1;
	return;
}

var Function_306(int iParam0) //Position: 0xA1CC / 41420
{
	if (Function_79() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_307(int iParam0, int iParam1) //Position: 0xA1F4 / 41460
{
	if (Function_79() || Global_34165.f_44)
	{
		Function_99(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_99(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_308(int iParam0, bool bParam1) //Position: 0xA225 / 41509
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_306(iParam0));
	if ((bParam1 && Function_312(iParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_306(iParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(iParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(iParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_309(iParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_306(iParam0), &Var6, 0, 2, Function_312(iParam0, 4));
		if (iParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_306(iParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_307(iParam0, 4);
		}
	}
	return;
}

struct<24> Function_309(int iParam0) //Position: 0xA2AC / 41644
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(iParam0) };
	if (Global_34165.f_44 || Function_79())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_310(int iParam0) //Position: 0xA309 / 41737
{
	char* cVar0[24];
	
	if (Function_79() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_311(int iParam0) //Position: 0xA37B / 41851
{
	char* cVar0[24];
	
	if (Function_79() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_312(int iParam0, int iParam1) //Position: 0xA3E7 / 41959
{
	if (Function_79() || Global_34165.f_44)
	{
		return Function_98(Global_49399[iParam022].f_32, iParam1);
	}
	return Function_98(Global_49310[iParam022].f_32, iParam1);
}

void Function_313(bool bParam0) //Position: 0xA419 / 42009
{
	if (Function_79() || Global_34165.f_44)
	{
		Function_314(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_314(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

int Function_314(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA44E / 42062
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_315();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_315() //Position: 0xA4C2 / 42178
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_316(int iParam0, int iParam1, int iParam2) //Position: 0xA50F / 42255
{
	if (Global_83864.f_1264 + 1 > iParam0)
	{
		Function_317(&(Global_50170[iParam222]), 25, 100.0f);
		Function_317(&(Global_50170[iParam122]), 25, 50.0f);
	}
	return;
}

void Function_317(var uParam0, bool bParam1, bool bParam2) //Position: 0xA545 / 42309
{
	Function_209(*uParam0);
	if (!Function_206(*uParam0, 2))
	{
		Function_202(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_203(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(*uParam0), 0.0f, false, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_318() //Position: 0xA582 / 42370
{
	if (!Function_312(9, 2))
	{
		Function_308(9, 0);
		Function_307(9, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(9), 0.0f, false, 0);
	}
	return;
}

void Function_319() //Position: 0xA5A9 / 42409
{
	if (!Function_312(8, 2))
	{
		Function_308(8, 0);
		Function_307(8, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(8), 0.0f, false, 0);
	}
	return;
}

void Function_320() //Position: 0xA5D0 / 42448
{
	if (!Function_312(7, 2))
	{
		Function_308(7, 0);
		Function_307(7, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(7), 0.0f, false, 0);
	}
	return;
}

void Function_321() //Position: 0xA5F3 / 42483
{
	if (!Function_312(6, 2))
	{
		Function_308(6, 0);
		Function_307(6, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(6), 0.0f, false, 0);
	}
	return;
}

void Function_322() //Position: 0xA616 / 42518
{
	if (!Function_312(2, 2))
	{
		Function_308(2, 0);
		Function_307(2, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(2), 0.0f, false, 0);
	}
	return;
}

void Function_323() //Position: 0xA639 / 42553
{
	if (!Function_312(5, 2))
	{
		Function_308(5, 0);
		Function_307(5, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(5), 0.0f, false, 0);
	}
	return;
}

void Function_324() //Position: 0xA65C / 42588
{
	if (!Function_312(1, 2))
	{
		Function_308(1, 0);
		Function_307(1, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(1), 0.0f, false, 0);
	}
	return;
}

void Function_325() //Position: 0xA67F / 42623
{
	if (!Function_312(4, 2))
	{
		Function_308(4, 0);
		Function_307(4, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(4), 0.0f, false, 0);
	}
	return;
}

void Function_326() //Position: 0xA6A2 / 42658
{
	Function_327();
	return;
}

void Function_327() //Position: 0xA6AB / 42667
{
	if (!Function_206(58, 2))
	{
		Function_203(58, 2);
		Function_202(58, 0, 0, 0);
	}
	if (!Function_206(59, 2))
	{
		Function_203(59, 2);
		Function_202(59, 0, 0, 0);
	}
	if (!Function_206(60, 2))
	{
		Function_203(60, 2);
		Function_202(60, 0, 0, 0);
	}
	if (!Function_206(61, 2))
	{
		Function_203(61, 2);
		Function_202(61, 0, 0, 0);
	}
	if (!Function_206(62, 2))
	{
		Function_203(62, 2);
		Function_202(62, 0, 0, 0);
	}
	if (!Function_206(63, 2))
	{
		Function_203(63, 2);
		Function_202(63, 0, 0, 0);
	}
	if (!Function_206(64, 2))
	{
		Function_203(64, 2);
		Function_202(64, 0, 0, 0);
	}
	if (!Function_206(65, 2))
	{
		Function_203(65, 2);
		Function_202(65, 0, 0, 0);
	}
	if (!Function_206(69, 2))
	{
		Function_203(69, 2);
		Function_202(69, 0, 0, 0);
	}
	if (!Function_206(73, 2))
	{
		Function_203(73, 2);
		Function_202(73, 0, 0, 0);
	}
	return;
}

void Function_328() //Position: 0xA7A1 / 42913
{
	if (!Function_206(51, 2))
	{
		Function_203(51, 2);
		Function_202(51, 2, 50, 0);
	}
	return;
}

void Function_329() //Position: 0xA7C0 / 42944
{
	if (!Function_206(50, 2))
	{
		Function_203(50, 2);
		Function_202(50, 10, 50, 0);
	}
	return;
}

void Function_330() //Position: 0xA7DE / 42974
{
	if (!Function_206(49, 2))
	{
		Function_203(49, 2);
		Function_202(49, 10, 50, 0);
	}
	if (!Function_206(52, 2))
	{
		Function_203(52, 2);
		Function_202(52, 1, 150, 0);
	}
	return;
}

void Function_331() //Position: 0xA815 / 43029
{
	if (!Function_206(19, 2))
	{
		Function_203(19, 2);
		Function_202(19, 1, 50, 0);
	}
	if (!Function_206(20, 2))
	{
		Function_203(20, 2);
		Function_202(20, 5, 50, 0);
	}
	if (!Function_206(21, 2))
	{
		Function_203(21, 2);
		Function_202(21, 1, 50, 0);
	}
	return;
}

void Function_332() //Position: 0xA866 / 43110
{
	if (!Function_206(15, 2))
	{
		Function_203(15, 2);
		Function_202(15, 1, 150, 0);
	}
	if (!Function_206(16, 2))
	{
		Function_203(16, 2);
		Function_202(16, 1, 150, 0);
	}
	if (!Function_206(17, 2))
	{
		Function_203(17, 2);
		Function_202(17, 1, 50, 0);
	}
	return;
}

void Function_333() //Position: 0xA8B7 / 43191
{
	if (!Function_206(27, 2))
	{
		Function_203(27, 2);
		Function_202(27, 10, 50, 0);
	}
	return;
}

void Function_334() //Position: 0xA8D5 / 43221
{
	if (!Function_206(22, 2))
	{
		Function_203(22, 2);
		Function_202(22, 1, 150, 0);
	}
	if (!Function_206(25, 2))
	{
		Function_203(25, 2);
		Function_202(25, 25, 50, 0);
	}
	if (!Function_206(26, 2))
	{
		Function_203(26, 2);
		Function_202(26, 1, 150, 0);
	}
	return;
}

void Function_335() //Position: 0xA925 / 43301
{
	if (!Function_206(12, 2))
	{
		Function_203(12, 2);
		Function_202(12, 5, 150, 0);
	}
	if (!Function_206(13, 2))
	{
		Function_203(13, 2);
		Function_202(13, 5, 150, 0);
	}
	if (!Function_206(14, 2))
	{
		Function_203(14, 2);
		Function_202(14, 5, 150, 0);
	}
	return;
}

void Function_336() //Position: 0xA976 / 43382
{
	if (!Function_206(55, 2))
	{
		Function_203(55, 2);
		Function_202(55, 0, 0, 0);
	}
	if (!Function_206(56, 4))
	{
		Function_202(56, 0, 0, 0);
	}
	if (!Function_206(57, 4))
	{
		Function_202(57, 0, 0, 0);
	}
	if (!Function_206(54, 4))
	{
		Function_202(54, 0, 0, 0);
	}
	return;
}

void Function_337() //Position: 0xA9CA / 43466
{
	if (!Function_206(54, 4))
	{
		Function_202(54, 0, 0, 0);
	}
	return;
}

void Function_338() //Position: 0xA9E2 / 43490
{
	if (!Function_206(7, 2))
	{
		Function_203(7, 2);
		Function_202(7, 3, 50, 0);
	}
	if (!Function_206(8, 2))
	{
		Function_203(8, 2);
		Function_202(8, 3, 50, 0);
	}
	if (!Function_206(9, 2))
	{
		Function_203(9, 2);
		Function_202(9, 3, 150, 0);
	}
	if (!Function_206(10, 2))
	{
		Function_203(10, 2);
		Function_202(10, 10, 150, 0);
	}
	if (!Function_206(11, 2))
	{
		Function_203(11, 2);
		Function_202(11, 20, 150, 0);
	}
	return;
}

void Function_339() //Position: 0xAA60 / 43616
{
	if (!Function_206(5, 2))
	{
		Function_203(5, 2);
		Function_202(5, 3, 50, 0);
	}
	if (!Function_206(6, 2))
	{
		Function_203(6, 2);
		Function_202(6, 5, 50, 0);
	}
	return;
}

void Function_340() //Position: 0xAA92 / 43666
{
	if (!Function_206(0, 2))
	{
		Function_203(0, 2);
		Function_202(0, 1, 50, 0);
	}
	if (!Function_206(1, 2))
	{
		Function_203(1, 2);
		Function_202(1, 1, 50, 0);
	}
	return;
}

void Function_341() //Position: 0xAAC4 / 43716
{
	if (!Function_206(46, 2))
	{
		Function_203(46, 2);
		Function_202(46, 1, 50, 0);
	}
	if (!Function_206(47, 2))
	{
		Function_203(47, 2);
		Function_202(47, 1, 50, 0);
	}
	if (!Function_206(48, 2))
	{
		Function_203(48, 2);
		Function_202(48, 10, 50, 0);
	}
	return;
}

void Function_342() //Position: 0xAB14 / 43796
{
	if (!Function_206(42, 2))
	{
		Function_203(42, 2);
		Function_202(42, 5, 50, 0);
	}
	if (!Function_206(43, 2))
	{
		Function_203(43, 2);
		Function_202(43, 3, 50, 0);
	}
	if (!Function_206(44, 2))
	{
		Function_203(44, 2);
		Function_202(44, 1, 150, 0);
	}
	if (!Function_206(45, 2))
	{
		Function_203(45, 2);
		Function_202(45, 1, 150, 0);
	}
	return;
}

void Function_343() //Position: 0xAB7E / 43902
{
	if (!Function_206(39, 2))
	{
		Function_203(39, 2);
		Function_202(39, 1, 50, 0);
	}
	if (!Function_206(40, 2))
	{
		Function_203(40, 2);
		Function_202(40, 1, 50, 0);
	}
	if (!Function_206(41, 2))
	{
		Function_203(41, 2);
		Function_202(41, 10, 50, 0);
	}
	return;
}

void Function_344() //Position: 0xABCE / 43982
{
	if (!Function_206(34, 2))
	{
		Function_203(34, 2);
		Function_202(34, 5, 50, 0);
	}
	if (!Function_206(35, 2))
	{
		Function_203(35, 2);
		Function_202(35, 1, 50, 0);
	}
	if (!Function_206(36, 2))
	{
		Function_203(36, 2);
		Function_202(36, 1, 150, 0);
	}
	if (!Function_206(37, 2))
	{
		Function_203(37, 2);
		Function_202(37, 1, 150, 0);
	}
	if (!Function_206(38, 2))
	{
		Function_203(38, 2);
		Function_202(38, 1, 150, 0);
	}
	return;
}

void Function_345() //Position: 0xAC51 / 44113
{
	if (!Function_206(31, 2))
	{
		Function_203(31, 2);
		Function_202(31, 1, 50, 0);
	}
	if (!Function_206(32, 2))
	{
		Function_203(32, 2);
		Function_202(32, 1, 50, 0);
	}
	if (!Function_206(33, 2))
	{
		Function_203(33, 2);
		Function_202(33, 10, 50, 0);
	}
	return;
}

void Function_346(int iParam0, int iParam1) //Position: 0xACA1 / 44193
{
	if (Global_83864.f_1264 + 1 > iParam0)
	{
		Call_Loc(iParam1);
	}
	return;
}

void Function_347() //Position: 0xACB8 / 44216
{
	if (!Function_206(2, 2))
	{
		Function_203(2, 2);
		Function_202(2, 1, 50, 0);
	}
	if (!Function_206(3, 2))
	{
		Function_203(3, 2);
		Function_202(3, 1, 50, 0);
	}
	if (!Function_206(4, 2))
	{
		Function_203(4, 2);
		Function_202(4, 1, 150, 0);
	}
	return;
}

bool Function_348() //Position: 0xAD00 / 44288
{
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		return 1;
	}
	return 0;
}

bool Function_349(int iParam0, int iParam1) //Position: 0xAD15 / 44309
{
	return Function_98(Global_83864[iParam06].f_20, iParam1);
}

void Function_350(bool bParam0, bool bParam1) //Position: 0xAD2A / 44330
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	
	if (bParam0)
	{
		iVar0 = Global_83864.f_1264 + 1;
	}
	else
	{
		iVar0 = Global_83864.f_1260 + 1;
	}
	iVar1 = 1;
	fVar2 = Function_140(487);
	uVar3 = Function_116();
	if (bParam1)
	{
	}
	while (iVar0 > 50 && iVar1)
	{
		if (fVar2 <= Global_83864[iVar06])
		{
			if (!Function_281(iVar0, 1))
			{
				if (!bParam1)
				{
					Function_150(0);
					if (StackVal != 4294967295)
					{
						if (!bParam0)
						{
							Function_369(&uVar3, &Global_83864[iVar06] + 4);
						}
						else if (Function_368(StackVal))
						{
							Global_84559[1] = StackVal;
						}
					}
				}
				else if (StackVal != 4294967295)
				{
					if (Function_368(StackVal))
					{
						Global_84559[1] = StackVal;
					}
				}
				if (StackVal != 4294967295)
				{
					if (!bParam1)
					{
						Global_83864.f_1284 = StackVal;
					}
					if (!bParam0)
					{
						if (!bParam1)
						{
							Function_367(Global_83864.f_1284);
							Function_363();
							Function_362(Global_83864.f_1284, 0, 1);
						}
					}
					iVar4 = Function_361(StackVal);
					Function_99(&Global_83864 + 1204[iVar4], 1);
				}
				if (Global_83864[iVar06].f_12 != 0)
				{
					Function_359(Global_83864[iVar06].f_12);
					if (Global_83864[iVar06].f_12 == 36)
					{
						NET_SET_QUICKMATCH_PLAYLIST_RANGE(34, 36);
					}
				}
				if (Function_281(iVar0, 8))
				{
					Function_359(41);
				}
				if (!bParam0)
				{
					Global_83864.f_1260 = iVar0;
					Function_358(iVar0, 1);
				}
				Global_83864.f_1264 = iVar0;
				if (bParam0)
				{
					if (Global_83864.f_1264 < 9)
					{
						Function_357(4);
					}
				}
				Function_356();
				if (Global_83864.f_1264 == 49)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(45))
					{
						AWARD_ACHIEVEMENT(45);
					}
				}
				if (!bParam1)
				{
					Global_83864.f_1272 = 1;
					Function_192(Global_83864.f_1264 + 1);
					Function_351(Global_83864.f_1264 + 1);
					if (Global_83864.f_1264 != 49 && Global_84364.f_708 != 4)
					{
						Function_351(500);
					}
				}
			}
			iVar0++;
		}
		else
		{
			iVar1 = 0;
		}
	}
	if (bParam1)
	{
	}
	return;
}

void Function_351(int iParam0) //Position: 0xAF58 / 44888
{
	bool bVar0;
	
	bVar0 = 837;
	while (bVar0 < 971)
	{
		if (Function_279(bVar0) == iParam0)
		{
			Function_352(bVar0);
		}
		bVar0++;
	}
	bVar0 = 1287;
	while (bVar0 < 1310)
	{
		if (Function_279(bVar0) == iParam0)
		{
			Function_352(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_352(bool bParam0) //Position: 0xAFA8 / 44968
{
	Function_99(&Global_83864 + 1976[Function_355(bParam0)], Function_353(bParam0));
	return;
}

int Function_353(int iParam0) //Position: 0xAFC4 / 44996
{
	return Function_33((Function_354(iParam0) % 32));
}

int Function_354(int iParam0) //Position: 0xAFD5 / 45013
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_355(int iParam0) //Position: 0xAFF4 / 45044
{
	return (Function_354(iParam0) / 32);
}

void Function_356() //Position: 0xB002 / 45058
{
	bool bVar0;
	
	bVar0 = (Global_83864.f_1264 + 1 + Global_84364.f_708 * 50);
	NET_GAMERDATA_SET("Rank", bVar0);
	UPDATE_PROFILE_STAT("MpLevel", TO_FLOAT(bVar0), 1);
	return;
}

void Function_357(int iParam0) //Position: 0xB03C / 45116
{
	Function_91(&Global_83864 + 1256, iParam0);
	return;
}

void Function_358(int iParam0, int iParam1) //Position: 0xB04E / 45134
{
	Function_99(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_359(int iParam0) //Position: 0xB063 / 45155
{
	if (!Function_98((*&Global_84364 + 408)[iParam0], 1))
	{
		Function_360(iParam0);
		Function_99(&Global_84364 + 408[iParam0], 1);
	}
	return;
}

void Function_360(int iParam0) //Position: 0xB090 / 45200
{
	struct<657> Var0;
	
	*(&Var0 + 76) = 36;
	if (GET_PLAYLIST_FROM_DB(iParam0, &Var0))
	{
		if (Function_98(Var0.f_656, 4))
		{
			Function_96(&Var0 + 656, 4);
			NET_SET_PLAYLIST_LOCKED(&Var0, 0);
			ADD_PLAYLIST_TO_DB(iParam0, &Var0);
		}
	}
	return;
}

int Function_361(int iParam0) //Position: 0xB0CD / 45261
{
	switch (iParam0)
	{
		case 0x000003E8:
			return 0;
			break;
		
		case 0x000003E4:
			return 1;
			break;
		
		case 0x000003DB:
			return 2;
			break;
		
		case 0x000003D0:
			return 3;
			break;
		
		case 0x000003D6:
			return 4;
			break;
		
		case 0x000003D3:
			return 5;
			break;
		
		case 0x000003EE:
			return 6;
			break;
		
		case 0x000003EC:
			return 7;
			break;
		
		case 0x000003ED:
			return 8;
			break;
		
		case 0x000003EF:
			return 9;
			break;
		
		case 0x000003EB:
			return 10;
			break;
		
		default:
			LOG_ERROR("INVALID HORSE PASSED IN TO GET_MOUNT_INDEX! GIVING AE_RIDEABLE_ANIMAL_MEX_Mule01");
			return 0;
			break;
	}
	return 0;
}

void Function_362(var uParam0, bool bParam1, bool bParam2) //Position: 0xB1B2 / 45490
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_99(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_99(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_363() //Position: 0xB1DF / 45535
{
	Function_364(Function_366());
	return;
}

void Function_364(int iParam0) //Position: 0xB1EB / 45547
{
	if (!Function_365(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_365(int iParam0) //Position: 0xB218 / 45592
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_366() //Position: 0xB22F / 45615
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_367(bool bParam0) //Position: 0xB249 / 45641
{
	if (!Function_365(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

bool Function_368(bool bParam0) //Position: 0xB278 / 45688
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

void Function_369(var uParam0, int iParam1) //Position: 0xB29A / 45722
{
	int iVar0;
	
	if (!ACTOR_HAS_WEAPON(*uParam0, *iParam1))
	{
		Function_372(*iParam1, 1, 1);
		iVar0 = GET_AMMO_ENUM(*iParam1);
		if (Function_371(iVar0, 1))
		{
			_ADD_AMMO_OF_TYPE(*uParam0, iVar0, TO_FLOAT(Function_370(&Global_83591 + 276, iVar0)), 0, 0);
		}
	}
	if (Function_368(*iParam1))
	{
		Global_84559[*iParam1] = 1;
	}
	return;
}

int Function_370(int iParam0, int iParam1) //Position: 0xB2F3 / 45811
{
	if (Function_371(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_371(int iParam0, int iParam1) //Position: 0xB30D / 45837
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_372(bool bParam0, bool bParam1, int iParam2) //Position: 0xB320 / 45856
{
	if (!Function_373(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_116(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_116(), bParam0, 1.0f, 0, 0);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_116(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_373(int iParam0) //Position: 0xB376 / 45942
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_374() //Position: 0xB388 / 45960
{
	float fVar0;
	bool bVar1;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	if (Function_98(StackVal, 1))
	{
		if (UI_ANIM_GET_TIME("XPComboSpin") > 0.05f)
		{
			UI_ANIM_SETUP("XpComboTimer", 10.0f, 32, false);
			UI_ANIM_RESTART("XpComboTimer");
			UI_SET_TEXT(StackVal, Function_288("XPComboLevel"));
			Function_96(&Global_76939 + 4, 1);
		}
	}
	if (Global_76939 <= 0.0f)
	{
		if ((fVar0 - Global_76939) < 10.0f)
		{
			bVar1 = ROUND(Function_140(488));
			if (Global_76939.f_12 >= 3)
			{
				if (Global_76939.f_12 >= bVar1)
				{
					Function_130(488, (Global_76939.f_12 - bVar1), 0, 0);
				}
			}
			Global_76939.f_8 = 0;
			Global_76939 = 0.0f;
			if (Function_98(StackVal, 2))
			{
				UI_HIDE("XPMultiplier");
				PLAY_SOUND_FRONTEND("HUD_MP_KILL_CHAIN_MASTER");
				Function_96(&Global_76939 + 4, 2);
			}
			Function_253(0);
		}
	}
	return;
}

bool Function_375(int iParam0) //Position: 0xB4AD / 46253
{
	return Function_20(Global_79336, iParam0);
}

var Function_376(bool bParam0) //Position: 0xB4BC / 46268
{
	bool bVar0;
	
	bVar0 = Function_377();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_377() //Position: 0xB4D0 / 46288
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_378() //Position: 0xB50C / 46348
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 47167);
	NET_SCRIPTMSG_REGISTER_HANDLER(7, 46824);
	NET_SCRIPTMSG_REGISTER_HANDLER(17, 46809);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, 46724);
	NET_SCRIPTMSG_REGISTER_HANDLER(81, 46402);
	return;
}

void Function_379(bool bParam0) //Position: 0xB542 / 46402
{
	struct<5> Var0;
	struct<8> Var5;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 3);
	uVar3 = Var0;
	bVar4 = StackVal;
	if (Function_382(uVar3) && IS_SLOT_VALID(bVar4))
	{
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_381(uVar3) };
		Function_380("net_aa_completed", UI_GET_STRING(&Var5), bVar4);
	}
	return;
}

void Function_380(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB590 / 46480
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(bParam2), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, &uVar0, 0, 0, 0, 0);
	return;
}

struct<32> Function_381(int iParam0) //Position: 0xB5B1 / 46513
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_382(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_382(int iParam0) //Position: 0xB66E / 46702
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_383(bool bParam0) //Position: 0xB684 / 46724
{
	struct<5> Var0;
	int iVar5;
	var uVar6;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	bVar4 = Var0;
	iVar5 = StackVal;
	if (!IS_SLOT_VALID(bVar4))
	{
		return;
	}
	if (iVar5 != 4294967294)
	{
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_381(iVar5), 16);
		Function_81("net_player_entered", bVar4, UI_GET_STRING(&uVar6));
	}
	return;
}

void Function_384(bool bParam0) //Position: 0xB6D9 / 46809
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 7);
	return;
}

void Function_385(bool bParam0) //Position: 0xB6E8 / 46824
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 3);
	switch (vVar0.z)
	{
		case 0xFFFFFFFF:
			if (!Function_387(vVar0.y, vVar0.x))
			{
				Function_386("mp_killstreak_ended", vVar0.y, vVar0.x);
				if (vVar0.y != GET_LOCAL_SLOT() || vVar0.x != GET_LOCAL_SLOT())
				{
					Function_56("GENMESS_SWEETJUST", 0);
				}
				if (vVar0.y == GET_LOCAL_SLOT())
				{
					Function_128(25.0f, 0, 1);
				}
			}
			break;
		
		case 0x00000003:
			Function_67("mp_killstreak_level1", vVar0.x);
			break;
		
		case 0x00000006:
			Function_67("mp_killstreak_level2", vVar0.x);
			break;
		
		case 0x00000008:
			Function_67("mp_killstreak_level3", vVar0.x);
			break;
	}
	return;
}

void Function_386(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB7E3 / 47075
{
	var uVar0;
	var uVar2;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(bParam1), 2);
	memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(bParam2), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, &uVar2, 0, 0, 0, 0);
	return;
}

bool Function_387(bool bParam0, bool bParam1) //Position: 0xB80F / 47119
{
	if (Function_73(bParam0, 1, 0) != 4294967295 && Function_73(bParam1, 1, 0) != 4294967295)
	{
		return 0;
	}
	return Function_73(bParam0, 1, 0) != Function_73(bParam1, 1, 0);
}

void Function_388(bool bParam0) //Position: 0xB83F / 47167
{
	struct<33> Var0;
	bool bVar33;
	int iVar34;
	struct<8> Var35;
	struct<8> Var43;
	struct<8> Var51;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 11);
	bVar11 = true;
	bVar12 = IS_SLOT_VALID(Var0);
	bVar13 = false;
	if (StackVal && StackVal <= 0 > 16)
	{
		bVar13 = IS_SLOT_VALID(StackVal);
	}
	memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_suicide", 4294967295), 16);
	if (Var0.f_28)
	{
	}
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	bVar33 = GET_LOCAL_SLOT();
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					break;
				
				case 0x00000005:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_bledout", 4294967295), 16);
					break;
				
				case 0x00000001:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_drowned", 4294967295), 16);
					break;
				
				case 0x00000003:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_cactused", 4294967295), 16);
					break;
				
				case 0x00000002:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_exploded", 4294967295), 16);
					break;
				
				case 0x00000004:
					memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_fired", 4294967295), 16);
					break;
			}
			break;
		
		case 0x00000007:
			if (StackVal == bVar33)
			{
				Function_457("Defended", Var0);
			}
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("mp_defended", 4294967295), 16);
			bVar30 = true;
			bVar11 = false;
			break;
		
		case 0x00000008:
			if (StackVal == bVar33)
			{
				Function_457("nVengeance", Var0);
			}
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("mp_vengeance", 4294967295), 16);
			bVar30 = true;
			bVar11 = false;
			break;
		
		case 0x00000004:
			if (UNK_0xDB679ED9(Var0.f_12) == 44)
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_sniped", 4294967295), 16);
			}
			else
			{
				strcpy(&Var14, Function_456(StackVal), 64);
			}
			break;
		
		case 0x00000005:
			strcpy(&Var14, Function_455(StackVal), 64);
			break;
		
		case 0x00000002:
			bVar11 = false;
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_teamkilled", 4294967295), 16);
			break;
		
		case 0x00000001:
			bVar11 = false;
			Function_454(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
			if (Var0.f_12 == 22)
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_stabbed", 4294967295), 16);
			}
			else if (Var0.f_12 == 25)
			{
				bVar32 = Function_77();
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_throw", 4294967295), 16);
			}
			else if (Var0.f_12 == 29)
			{
				bVar32 = Function_77();
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg", 4294967295), 16);
			}
			else if (Function_20(Var0.f_40, 0x1000000))
			{
				switch (UNK_0xDB679ED9(Var0.f_12))
				{
					case 0x00000027:
					case 0x00000028:
						memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_pistol", 4294967295), 16);
						break;
					
					case 0x0000002B:
					case 0x0000002A:
					case 0x00000029:
					case 0x0000002C:
						memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_rifle", 4294967295), 16);
						break;
					
					default:
						memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg", 4294967295), 16);
						break;
				}
			}
			else if (Var0.f_28)
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_head", 4294967295), 16);
				bVar32 = Function_77();
			}
			else
			{
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg", 4294967295), 16);
				bVar32 = Function_77();
			}
			bVar31 = Function_10(16384);
			if (StackVal == bVar33)
			{
				Function_232(Var0.f_28);
				if (Var0.f_32 == 0)
				{
					if (Function_269())
					{
					}
					else
					{
						Function_264(11, 1);
						Function_453(StackVal, Var0);
						if (Function_20(Var0.f_40, 1))
						{
							Function_264(17, 1);
						}
						if (bVar31)
						{
							switch (Function_78())
							{
								case 0x00000002:
									Function_451(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[522] + 4, &Global_50170[522] + 8, &Global_50170[522] + 12, Var0);
									Function_450(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[1022] + 4, &Global_50170[1022] + 8, &Global_50170[1022] + 12, Var0);
									break;
								
								case 0x00000011:
									Function_449(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[622] + 4, &Global_50170[622] + 8, &Global_50170[622] + 12, Var0);
									Function_448(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[1122] + 4, &Global_50170[1122] + 8, &Global_50170[1122] + 12, Var0);
									break;
								
								case 0x00000009:
									Function_447(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[3422] + 4, &Global_50170[3422] + 8, &Global_50170[3422] + 12, Var0);
									Function_445(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[3822] + 4, &Global_50170[3822] + 8, &Global_50170[3822] + 12, Var0);
									break;
								
								case 0x00000007:
									break;
								
								case 0x00000008:
									Function_443(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[4222] + 4, &Global_50170[4222] + 8, &Global_50170[4222] + 12, Var0);
									break;
							}
							Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[722] + 4, &Global_50170[722] + 8, &Global_50170[722] + 12, Var0);
							Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[822] + 4, &Global_50170[822] + 8, &Global_50170[822] + 12, Var0);
							Function_439(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[922] + 4, &Global_50170[922] + 8, &Global_50170[922] + 12, Var0);
							Function_438(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[1922] + 4, &Global_50170[1922] + 8, &Global_50170[1922] + 12, Var0);
							Function_436(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2722] + 4, &Global_50170[2722] + 8, &Global_50170[2722] + 12, Var0);
							Function_435(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2222] + 4, &Global_50170[2222] + 8, &Global_50170[2222] + 12, Var0);
							Function_434(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2522] + 4, &Global_50170[2522] + 8, &Global_50170[2522] + 12, Var0);
							Function_432(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2622] + 4, &Global_50170[2622] + 8, &Global_50170[2622] + 12, Var0);
							Function_431(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[4922] + 4, &Global_50170[4922] + 8, &Global_50170[4922] + 12, Var0);
							Function_430(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5022] + 4, &Global_50170[5022] + 8, &Global_50170[5022] + 12, Var0);
							Function_429(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5222] + 4, &Global_50170[5222] + 8, &Global_50170[5222] + 12, Var0);
							Function_426(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5122] + 4, &Global_50170[5122] + 8, &Global_50170[5122] + 12, Var0);
							Function_404(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (NET_GET_PLAYMODE() == 0)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
							{
								if (Function_70(Var0, 262144, 1) && !Function_12(262144, 1))
								{
									Function_403(262144, 1);
									AWARD_ACHIEVEMENT(48);
								}
							}
						}
						Function_401(StackVal, StackVal, StackVal, StackVal, Global_34574, GET_SLOT_NAME(Var0), *(&Var0 + 16), GET_WEAPON_ENUM_STRING_FROM_ENUM(Var0.f_12));
						if (Function_77() || Function_375(4096))
						{
							if (Function_12(131072, 1))
							{
								Function_400(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5622] + 8, &Global_50170[5622] + 12, Var0);
							}
							if (Function_70(Var0, 131072, 1))
							{
								Function_398(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5522] + 8, &Global_50170[5522] + 12, Var0);
								if (Function_12(131072, 1))
								{
									Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[5722] + 8, Var0);
								}
								Function_56("GENMESS_LOCALKILLSMW", 0);
								Function_128(200.0f, 0, 1);
							}
							else if (Function_12(131072, 1))
							{
								Function_128(25.0f, 0, 1);
							}
							else if (!Function_20(Var0.f_40, 2) && !Function_12(0x8000000, 1))
							{
								Function_128(10.0f, 0, 1);
							}
						}
					}
				}
				else if (Var0.f_32 >= 0)
				{
					if (bVar31)
					{
						if (Var0 == Global_56352[21])
						{
							Function_392(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[2122] + 4, &Global_50170[2122] + 8, &Global_50170[2122] + 12, Var0);
						}
					}
				}
			}
			else if (Var0 == bVar33)
			{
				Global_56092[19] = 0;
				Global_56092[21] = 0;
				Global_56352[20] = 4294967295;
				Global_56092[20] = 0;
				if (bVar31)
				{
					if (IS_SLOT_VALID(StackVal))
					{
						Global_56352[19] = StackVal;
						Global_56352[21] = StackVal;
					}
				}
				Function_391();
				Function_236();
			}
			if (bVar31 && !Function_375(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
					Global_56352[17] = StackVal;
				}
			}
			break;
		
		case 0x00000006:
			bVar11 = false;
			memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("deathmsg_ko", 4294967295), 16);
			break;
		
		case 0x00000009:
			if (Var0 == bVar33)
			{
				bVar30 = true;
				bVar11 = false;
				memcpy(&Var14, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_120("nmp_assist", 4294967295), 16);
				Function_56("GENMESS_BADBLOOD", 0);
			}
			else
			{
				return;
			}
			break;
	}
	if (bVar12)
	{
		if (bVar30)
		{
			iVar34 = Var0;
			Var0 = StackVal;
			Var0.f_4 = iVar34;
		}
		if (bVar11)
		{
			if (Var0.f_32 >= 0)
			{
				Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_390(Var0, Var0.f_32, 0) };
				Function_94(&Var14, UI_GET_STRING(&Var35));
			}
			else
			{
				Function_67(&Var14, Var0);
			}
		}
		else if (bVar13)
		{
			if (Var0.f_32 >= 0)
			{
				Var43 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_390(Var0, Var0.f_32, 0) };
				Function_81(StackVal, &Var14, UI_GET_STRING(&Var43));
			}
			else if (StackVal && Function_70(bVar32, 1572864, 0))
			{
				Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_389(StackVal, Function_70(StackVal, 1048576, 1), 0) };
				Function_380(&Var14, UI_GET_STRING(&Var51), Var0);
			}
			else
			{
				Function_386(StackVal, &Var14, Var0);
			}
		}
	}
	return;
}

struct<32> Function_389(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC22A / 49706
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, "MP_PlayerNameCM_", 32);
	stradd(&cVar0, I2STR(bParam0), 32);
	if (bParam1)
	{
		bVar8 = "mp_death_expert";
	}
	else
	{
		bVar8 = "mp_death_casual";
	}
	if (bParam2)
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), "<0xAA3311>WWWWWWWWWWWWWWWW</0x>", false, false);
	}
	else
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), UI_GET_STRING(Function_57(bParam0)), false, false);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_390(bool bParam0, int iParam1, bool bParam2) //Position: 0xC2D1 / 49873
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, "MP_PlayerNameMounted_", 32);
	stradd(&cVar0, I2STR(bParam0), 32);
	if (iParam1 == 24)
	{
		bVar8 = "mp_death_mule";
	}
	else if (iParam1 == 23)
	{
		bVar8 = "mp_death_horse";
	}
	else if (iParam1 == 9)
	{
		bVar8 = "mp_death_bull";
	}
	else
	{
		bVar8 = "mp_death_mount";
	}
	if (bParam2)
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), Function_95(bParam0, 1), "WWWWWWWWWWWWWWWW", false);
	}
	else
	{
		UI_SET_STRING_FORMAT(&cVar0, UI_GET_STRING(bVar8), Function_95(bParam0, 1), GET_SLOT_NAME(bParam0), false);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_391() //Position: 0xC3AD / 50093
{
	if (Function_218(&iLocal_6))
	{
		Global_50170[5422].f_12 = 0.0f;
		Function_215(&iLocal_6);
	}
	return;
}

void Function_392(var uParam0, var uParam1, var uParam2, struct<33> Param3) //Position: 0xC3CA / 50122
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 33)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(21);
				if (Param3.f_32 >= 0)
				{
					Global_56092[21]++;
				}
				bVar0 = Global_56092[21];
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_394(21, 50, Function_395(), 3036);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_238(21, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_393(var uParam0, bool bParam1, int iParam2) //Position: 0xC454 / 50260
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_394(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC46C / 50284
{
	Function_194(bParam0, 1);
	Global_50170[bParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_190(bParam0), 1.0f, false, 0);
	Function_187(bParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_192(iParam3);
	}
	Function_181(&Global_50170[bParam022] + 16, bParam1, bParam2);
	Function_149();
}

bool Function_395() //Position: 0xC4D2 / 50386
{
	return "MP_Revenge_Icon_128";
}

void Function_396(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0xC4EE / 50414
{
	if (Global_83864.f_1264 <= 24 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				if (StackVal == GET_LOCAL_SLOT())
				{
					*uParam0 = 10;
					Function_394(57, 50, Function_397(), 1060);
				}
				break;
			}
	}
}

bool Function_397() //Position: 0xC537 / 50487
{
	return "challenge_04_128";
}

void Function_398(var uParam0, var uParam1, struct<5> Param2, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0xC550 / 50512
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	
	if (Global_83864.f_1264 <= 24 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				iVar0 = 1;
				iVar1 = 1;
				bVar2 = 5;
				iVar4 = 1054;
				break;
			
			case 0x00000001:
				iVar0 = 2;
				iVar1 = 5;
				bVar2 = 25;
				iVar4 = 1055;
				break;
			
			case 0x00000002:
				iVar0 = 10;
				iVar1 = 25;
				iVar4 = 1056;
				break;
		}
		if (StackVal == GET_LOCAL_SLOT())
		{
			Global_50170[5522].f_28++;
			fVar3 = Function_208(55);
			if (Global_50170[5522].f_28 > iVar1)
			{
				if (iVar0 == 10)
				{
					*uParam1 = 1.0f;
					Function_394(55, 50, Function_397(), iVar4);
				}
				else
				{
					Function_399(55, &uVar5, 2, uParam0, iVar0, *uParam1, 0, 50, Global_50170[5522].f_28, bVar2, 50, Function_397(), iVar4);
				}
				Function_149();
			}
			else if (Global_50170[5522].f_28 >= 4294967295)
			{
				*uParam1 = TO_FLOAT(Global_50170[5522].f_28);
				*uParam1 = (*uParam1 / IntToFloat(iVar1));
				if (*uParam1 == fVar3)
				{
					Function_238(55, *uParam1, 0, Global_50170[5522].f_28, 4294967295, 4294967295);
				}
			}
		}
	}
}

void Function_399(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0xC672 / 50802
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_186(iParam0) };
	Function_181(&Var0, bParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_393(&fParam5, bParam8, bParam9);
	Function_238(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_202(iParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_192(iParam12);
	}
	Function_180(iParam0, 4);
	Function_149();
}

void Function_400(var uParam0, var uParam1, struct<5> Param2, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0xC6E8 / 50920
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	var uVar6;
	
	if (Global_83864.f_1264 <= 24 && !*uParam0 != 10)
	{
		switch (*uParam0)
		{
			case 0x00000000:
				iVar0 = 1;
				iVar3 = 3;
				bVar2 = 5;
				iVar5 = 1057;
				break;
			
			case 0x00000001:
				iVar0 = 2;
				iVar3 = 5;
				bVar2 = 7;
				iVar5 = 1058;
				break;
			
			case 0x00000002:
				iVar0 = 10;
				iVar3 = 7;
				iVar5 = 1059;
				break;
		}
		fVar4 = Function_208(56);
		if (StackVal == GET_LOCAL_SLOT())
		{
			bVar1 = Function_211(35);
		}
		if (bVar1 > iVar3)
		{
			bVar1 = false;
			if (iVar0 == 10)
			{
				*uParam1 = 1.0f;
				Function_394(56, 50, Function_397(), iVar5);
			}
			else
			{
				*uParam1 = TO_FLOAT(bVar1);
				*uParam1 = (*uParam1 / IntToFloat(bVar2));
				Function_399(56, &uVar6, 2, uParam0, iVar0, *uParam1, 0, 50, 0, bVar2, 50, Function_397(), iVar5);
			}
			Function_149();
		}
		else if (bVar1 >= 4294967295)
		{
			*uParam1 = TO_FLOAT(bVar1);
			*uParam1 = (*uParam1 / IntToFloat(iVar3));
			if (*uParam1 == fVar4)
			{
				Function_238(56, *uParam1, 0, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_401(vector3 vParam0, char* cParam3, vector3 vParam4, char* cParam7) //Position: 0xC7ED / 51181
{
	PLAYSTAT_STRING("Kill", cParam3);
	PLAYSTAT_STRING("nKill_meth", cParam7);
	Function_402(StackVal, StackVal, "Kill_MyPos", vParam0);
	Function_402(StackVal, StackVal, "Kill_ViPos", vParam4);
}

void Function_402(char* cParam0, vector3 vParam1) //Position: 0xC83A / 51258
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_403(int iParam0, bool bParam1) //Position: 0xC878 / 51320
{
	if (bParam1)
	{
		Function_99(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_96(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_404(struct<29> Param0) //Position: 0xC8B3 / 51379
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x00000008:
			Function_425(&(Global_50170[18722]), 1, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[20722]), 8, 1, 1, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000000:
			Function_425(&(Global_50170[18822]), 4, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[20822]), 0, 4, 2, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000009:
			Function_425(&(Global_50170[18922]), 7, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[20922]), 9, 7, 3, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000005:
			Function_425(&(Global_50170[19022]), 8, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21022]), 5, 8, 4, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000011:
			Function_425(&(Global_50170[19122]), 10, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21122]), 17, 10, 5, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000C:
			Function_425(&(Global_50170[19222]), 12, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21222]), 12, 12, 6, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000006:
			Function_425(&(Global_50170[19322]), 16, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21322]), 6, 16, 8, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000F:
			Function_425(&(Global_50170[19422]), 17, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21422]), 15, 17, 9, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000013:
			Function_425(&(Global_50170[19522]), 19, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21522]), 19, 19, 10, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000001:
			Function_425(&(Global_50170[19622]), 23, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21622]), 1, 23, 14, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000012:
			Function_425(&(Global_50170[19722]), 25, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21722]), 18, 25, 15, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000014:
			Function_425(&(Global_50170[19822]), 27, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21822]), 20, 27, 16, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000E:
			Function_425(&(Global_50170[19922]), 29, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[21922]), 14, 29, 17, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000A:
			Function_425(&(Global_50170[20022]), 31, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22022]), 10, 31, 18, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000002:
			Function_425(&(Global_50170[20122]), 34, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22122]), 2, 34, 19, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000010:
			Function_425(&(Global_50170[20222]), 36, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22222]), 16, 36, 20, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000D:
			Function_425(&(Global_50170[20322]), 39, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22322]), 13, 39, 21, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x0000000B:
			Function_425(&(Global_50170[20422]), 42, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22422]), 11, 42, 22, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000007:
			Function_425(&(Global_50170[20522]), 45, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22522]), 7, 45, 23, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000003:
			Function_425(&(Global_50170[20622]), 48, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_419(&(Global_50170[22622]), 3, 48, 24, 4294967295, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
			}
			break;
		
		case 0x00000018:
			Function_405(&(Global_49399[1022]), 14, 5, 250.0f, 25, 250.0f, 50, 250.0f, 0, uVar1);
			break;
		
		case 0x00000017:
			Function_405(&(Global_49399[1222]), 21, 5, 250.0f, 25, 250.0f, 50, 250.0f, 0, uVar1);
			break;
	}
}

void Function_405(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0xD051 / 53329
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_406(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, iParam8, uParam9);
	}
}

void Function_406(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9) //Position: 0xD07C / 53372
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_305(iParam0);
			}
			Function_407(iParam0, iParam1, uParam2, 1, uParam3, uParam8, bParam4, uParam5, uParam9);
			break;
		
		case 0x00000001:
			Function_407(iParam0, iParam1, bParam4, 2, uParam5, uParam8, bParam6, uParam7, uParam9);
			break;
		
		case 0x00000002:
			Function_407(iParam0, iParam1, bParam6, 3, uParam7, uParam8, 0, 0.0f, uParam9);
			break;
	}
}

void Function_407(int iParam0, int iParam1, bool bParam2, int iParam3, var uParam4, var uParam5, int iParam6, float fParam7, var uParam8) //Position: 0xD0EF / 53487
{
	float fVar0;
	bool bVar1;
	struct<6> Var2;
	
	fVar0 = Function_418(*iParam0);
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_417(*iParam0) };
	UI_SET_STRING(&Var2, I2STR(bParam2));
	if (Global_83864.f_1264 > iParam1)
	{
		Global_49399[*iParam022].f_28++;
		bVar1 = iParam0->f_28;
	}
	if (bVar1 > bParam2)
	{
		if (iParam3 == 3)
		{
			Function_415(iParam0, uParam4, uParam8);
		}
		else
		{
			iParam0->f_4 = 2;
			Function_410(&(Global_49399[*iParam022]), iParam3, uParam4, uParam5, uParam8);
			Function_409(&(Global_49399[*iParam022]), bVar1, iParam6, fParam7);
		}
	}
	else if (bVar1 > 0)
	{
		iParam0->f_12 = Function_284(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
		if (iParam0->f_12 == fVar0)
		{
			Function_408(*iParam0, iParam0->f_12, 1, bVar1, 4294967295, 4294967295, 0);
		}
	}
}

void Function_408(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0xD1B3 / 53683
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_306(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[iParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_306(iParam0), &cVar0, 2, 2, false);
			Function_199(Function_306(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(iParam0) };
			if (Function_79() || Global_34165.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((1 + iParam6)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((2 + iParam6)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((3 + iParam6)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_306(iParam0), &cVar20, 2, 2, true);
			Function_199(Function_306(iParam0), 0);
		}
	}
}

void Function_409(var uParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0xD33E / 54078
{
	Function_313(*uParam0);
	Function_308(*uParam0, 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_306(*uParam0), 0.0f, false, 0);
	}
	if (fParam3 != 0.0f)
	{
	}
	uParam0->f_4 = 1;
}

void Function_410(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD3E3 / 54243
{
	bool bVar0;
	
	Function_414(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	memcpy(&bVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(*uParam0), 4);
	Function_181(&bVar0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_413(*uParam0, 4);
	Function_411();
}

void Function_411() //Position: 0xD442 / 54338
{
	if (!Function_79())
	{
		if (!Function_179(0, 0, 1, 1))
		{
			Function_169(1);
			Function_168(1, 8);
		}
		else
		{
			Function_412();
		}
	}
	else
	{
		Function_150(0);
	}
	return;
}

void Function_412() //Position: 0xD471 / 54385
{
	return;
}

void Function_413(int iParam0, int iParam1) //Position: 0xD477 / 54391
{
	if (Global_34165.f_44)
	{
		Function_96(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_96(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_414(bool bParam0, bool bParam1) //Position: 0xD4A4 / 54436
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_315();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			if (Function_79() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_79() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_79() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

void Function_415(var uParam0, bool bParam1, bool bParam2) //Position: 0xD664 / 54884
{
	Function_414(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_306(*uParam0), 1.0f, false, 0);
	Function_416(*uParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_181(&Global_49399[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_411();
	return;
}

void Function_416(int iParam0) //Position: 0xD6C8 / 54984
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_306(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_311(iParam0) };
	if (Function_79() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_310(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_309(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_306(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_306(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_306(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_417(int iParam0) //Position: 0xD73B / 55099
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_418(bool bParam0) //Position: 0xD76B / 55147
{
	if (Function_79() || Global_34165.f_44)
	{
		return Global_49399[bParam022].f_12;
	}
	return Global_49310[bParam022].f_12;
}

void Function_419(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, float fParam10, int iParam11, var uParam12) //Position: 0xD793 / 55187
{
	if (Global_83864.f_1264 > iParam2)
	{
		Function_420(uParam0, iParam2, bParam5, bParam6, bParam7, fParam8, bParam9, fParam10, iParam4, iParam11, uParam12);
		if (StackVal == 10)
		{
			SET_WEAPON_GOLD(Function_116(), bParam1, 1);
			Global_83823[bParam1] = 1;
			Function_192((2000 + iParam3));
		}
	}
}

void Function_420(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0xD7E4 / 55268
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_317(uParam0, bParam2, bParam3);
			}
			Function_421(uParam0, iParam1, bParam2, iParam8, 1, bParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_421(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_421(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_421(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0xD861 / 55393
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_208(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		bVar1 = Global_50170[*uParam022].f_28;
		if (bVar1 > bParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_424(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_423(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_422(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_284(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_238(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_422(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD92F / 55599
{
	Function_209(*uParam0);
	Function_202(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), false, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_190(*uParam0), 0.0f, false, 0);
	}
	uParam0->f_4 = 1;
}

void Function_423(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD9D4 / 55764
{
	struct<4> Var0;
	
	Function_194(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_186(*uParam0) };
	Function_181(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_180(*uParam0, 4);
	Function_149();
}

void Function_424(var uParam0, bool bParam1, bool bParam2) //Position: 0xDA32 / 55858
{
	Function_194(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_190(*uParam0), 1.0f, false, 0);
	Function_187(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_181(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_149();
	return;
}

void Function_425(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0xDA97 / 55959
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_420(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_426(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xDAC3 / 56003
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(51);
				if (Function_297(&iLocal_3, 2.0f))
				{
					Global_50170[5122].f_28 = 0;
				}
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_428(Param3))
					{
						Global_50170[5122].f_28++;
					}
				}
				bVar0 = Global_50170[5122].f_28;
				if (Function_218(&iLocal_3))
				{
					if (Function_216(&iLocal_3) > 2.0f)
					{
						if (bVar0 > 2)
						{
							Function_399(51, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_427(), 3101);
							*uParam2 = 0.0f;
							bVar0 = false;
						}
						else if (bVar0 >= 4294967295)
						{
							Function_393(uParam2, bVar0, 2);
							if (*uParam2 == fVar1)
							{
								Function_238(51, *uParam2, 1, bVar0, 4294967295, 4294967295);
							}
						}
					}
					else if (Function_297(&iLocal_3, 2.0f))
					{
						Global_50170[5122].f_28 = 0;
						*uParam2 = 0.0f;
					}
				}
				else
				{
					Function_213(&iLocal_3);
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(49);
				if (Function_297(&iLocal_3, 2.0f))
				{
					Global_50170[5122].f_28 = 0;
				}
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_428(Param3))
					{
						Global_50170[5122].f_28++;
					}
				}
				bVar0 = Global_50170[5122].f_28;
				if (Function_218(&iLocal_3))
				{
					if (Function_216(&iLocal_3) > 2.0f)
					{
						if (bVar0 > 3)
						{
							Function_399(51, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 5, 150, Function_427(), 3102);
							*uParam2 = 0.0f;
							bVar0 = false;
						}
						else if (bVar0 >= 4294967295)
						{
							Function_393(uParam2, bVar0, 3);
							if (*uParam2 == fVar1)
							{
								Function_238(51, *uParam2, 1, bVar0, 4294967295, 4294967295);
							}
						}
					}
					else if (Function_297(&iLocal_3, 2.0f))
					{
						Global_50170[5122].f_28 = 0;
						*uParam2 = 0.0f;
					}
				}
				else
				{
					Function_213(&iLocal_3);
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(51);
				if (Function_297(&iLocal_3, 2.0f))
				{
					Global_50170[5122].f_28 = 0;
				}
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_428(Param3))
					{
						Global_50170[5122].f_28++;
					}
				}
				bVar0 = Global_50170[5122].f_28;
				if (Function_218(&iLocal_3))
				{
					if (Function_216(&iLocal_3) > 2.0f)
					{
						if (bVar0 > 5)
						{
							Function_394(51, 150, Function_427(), 3103);
						}
						else if (bVar0 >= 4294967295)
						{
							Function_393(uParam2, bVar0, 5);
							if (*uParam2 == fVar1)
							{
								Function_238(51, *uParam2, 1, bVar0, 4294967295, 4294967295);
							}
						}
					}
					else if (Function_297(&iLocal_3, 2.0f))
					{
						Global_50170[5122].f_28 = 0;
						*uParam2 = 0.0f;
					}
				}
				else
				{
					Function_213(&iLocal_3);
				}
				break;
			}
	}
}

bool Function_427() //Position: 0xDD6E / 56686
{
	return "MP_HeavyWeapons_Icon_128";
}

bool Function_428(bool bParam0) //Position: 0xDD8F / 56719
{
	if (Function_73(bParam0, 1, 0) != 4294967295 && Function_74() != 4294967295)
	{
		return 0;
	}
	return Function_73(bParam0, 1, 0) != Function_74();
}

void Function_429(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xDDB7 / 56759
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(52);
				if ((StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28) && Function_20(Param3.f_40, 8388608))
				{
					if (!Function_428(Param3))
					{
						Global_50170[5222].f_28++;
					}
				}
				bVar0 = Global_50170[5222].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_394(52, 150, Function_427(), 3104);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_238(52, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_430(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xDE67 / 56935
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(50);
				if (StackVal != GET_LOCAL_SLOT() && (Param3.f_12 != 26 || Param3.f_12 != 27))
				{
					if (!Function_428(Param3))
					{
						Global_50170[5022].f_28++;
					}
				}
				bVar0 = Global_50170[5022].f_28;
				if (bVar0 > 10)
				{
					Function_399(50, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 50, 100, Function_427(), 3098);
					Function_393(uParam2, bVar0, 50);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_238(50, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(49);
				if (StackVal != GET_LOCAL_SLOT() && (Param3.f_12 != 26 || Param3.f_12 != 27))
				{
					if (!Function_428(Param3))
					{
						Global_50170[5022].f_28++;
					}
				}
				bVar0 = Global_50170[5022].f_28;
				if (bVar0 > 50)
				{
					Function_399(50, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 100, 150, Function_427(), 3099);
					Function_393(uParam2, bVar0, 100);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_238(50, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(50);
				if (StackVal != GET_LOCAL_SLOT() && (Param3.f_12 != 26 || Param3.f_12 != 27))
				{
					if (!Function_428(Param3))
					{
						Global_50170[5022].f_28++;
					}
				}
				bVar0 = Global_50170[5022].f_28;
				if (bVar0 > 100)
				{
					Function_394(50, 150, Function_427(), 3100);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_238(50, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_431(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xE05F / 57439
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 44)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(49);
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_428(Param3))
					{
						Global_50170[4922].f_28++;
					}
				}
				bVar0 = Global_50170[4922].f_28;
				if (bVar0 > 10)
				{
					Function_399(49, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 50, 100, Function_427(), 3095);
					Function_393(uParam2, bVar0, 50);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_238(49, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(49);
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_428(Param3))
					{
						Global_50170[4922].f_28++;
					}
				}
				bVar0 = Global_50170[4922].f_28;
				if (bVar0 > 50)
				{
					Function_399(49, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 100, 150, Function_427(), 3096);
					Function_393(uParam2, bVar0, 100);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_238(49, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(49);
				if (StackVal != GET_LOCAL_SLOT() && Param3.f_12 != 28)
				{
					if (!Function_428(Param3))
					{
						Global_50170[4922].f_28++;
					}
				}
				bVar0 = Global_50170[4922].f_28;
				if (bVar0 > 100)
				{
					Function_394(49, 150, Function_427(), 3097);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_238(49, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_432(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xE23F / 57919
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 26)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(26);
				if (StackVal != GET_LOCAL_SLOT() && Function_20(Param3.f_40, 4194304))
				{
					if (!Function_428(Param3))
					{
						Global_50170[2622].f_28++;
					}
				}
				bVar0 = Global_50170[2622].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_394(26, 150, Function_433(), 3041);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_238(26, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_433() //Position: 0xE2E7 / 58087
{
	return "MP_TrickShot_Icon_128";
}

void Function_434(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xE305 / 58117
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 26)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(25);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_USING_COVER(Function_116()))
				{
					if (!Function_428(Param3))
					{
						Global_50170[2522].f_28++;
					}
				}
				bVar0 = Global_50170[2522].f_28;
				if (bVar0 > 25)
				{
					Function_399(25, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 100, 100, Function_433(), 3039);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_238(25, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(25);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_USING_COVER(Function_116()))
				{
					if (!Function_428(Param3))
					{
						Global_50170[2522].f_28++;
					}
				}
				bVar0 = Global_50170[2522].f_28;
				if (bVar0 > 100)
				{
					Function_394(25, 100, Function_433(), 3040);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_238(25, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_435(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xE442 / 58434
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 26)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(22);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_428(Param3))
						{
							if (Function_20(Param3.f_40, 1048576))
							{
								Global_50170[2222].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[2222].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_394(22, 150, Function_433(), 3038);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_238(22, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_436(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xE4F3 / 58611
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 28)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(27);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_RIDING(Function_116()))
				{
					if (!Function_428(Param3))
					{
						Global_50170[2722].f_28++;
					}
				}
				bVar0 = Global_50170[2722].f_28;
				if (bVar0 > 10)
				{
					Function_399(27, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 50, 100, Function_437(), 3042);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_238(27, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(27);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_RIDING(Function_116()))
				{
					if (!Function_428(Param3))
					{
						Global_50170[2722].f_28++;
					}
				}
				bVar0 = Global_50170[2722].f_28;
				if (bVar0 > 50)
				{
					Function_399(27, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 100, 150, Function_437(), 3043);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_238(27, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(27);
				if (StackVal != GET_LOCAL_SLOT() && IS_ACTOR_RIDING(Function_116()))
				{
					if (!Function_428(Param3))
					{
						Global_50170[2722].f_28++;
					}
				}
				bVar0 = Global_50170[2722].f_28;
				if (bVar0 > 100)
				{
					Function_394(27, 150, Function_437(), 3044);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_238(27, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_437() //Position: 0xE6CC / 59084
{
	return "MP_TDM2_Icon_128";
}

void Function_438(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xE6E5 / 59109
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 33)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(19);
				if (iParam3 == Global_56352[19])
				{
					Global_56092[19]++;
				}
				bVar0 = Global_56092[19];
				if (bVar0 > 1)
				{
					Function_399(19, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_395(), 3034);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_238(19, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(19);
				if (iParam3 == Global_56352[19])
				{
					Global_56092[19]++;
				}
				bVar0 = Global_56092[19];
				if (bVar0 > 3)
				{
					Function_394(19, 100, Function_395(), 3035);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_238(19, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_439(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xE7F4 / 59380
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(9);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (PPP_GET_ELEMENT_MAGNITUDE(0) <= 0.75f)
					{
						Global_56092[9]++;
						bVar0 = Global_56092[9];
					}
					else
					{
						Function_222(9);
					}
				}
				if (bVar0 > 3)
				{
					*uParam0 = 2;
					Function_394(9, 150, Function_440(), 3023);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_238(9, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_440() //Position: 0xE895 / 59541
{
	return "Killstreak2_icon_128";
}

void Function_441(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xE8B2 / 59570
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(8);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_ACTOR_RIDING(Function_116()))
					{
						Global_56092[8]++;
						bVar0 = Global_56092[8];
					}
					else
					{
						Function_222(8);
					}
				}
				if (bVar0 > 3)
				{
					Function_399(8, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_440(), 3021);
					Function_194(8, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_238(8, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(8);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_ACTOR_RIDING(Function_116()))
					{
						Global_56092[8]++;
						bVar0 = Global_56092[8];
					}
					else
					{
						Function_222(8);
					}
				}
				if (bVar0 > 5)
				{
					Function_394(8, 100, Function_440(), 3022);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_238(8, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_442(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0xE9E5 / 59877
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(7);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (Param3.f_12 != 22 || Param3.f_12 != 25)
					{
						Global_56092[7]++;
						bVar0 = Global_56092[7];
					}
					else
					{
						Function_222(7);
					}
				}
				if (bVar0 > 3)
				{
					Function_399(7, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_440(), 3019);
					Function_194(7, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_238(7, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(7);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (Param3.f_12 != 22 || Param3.f_12 != 25)
					{
						Global_56092[7]++;
						bVar0 = Global_56092[7];
					}
					else
					{
						Function_222(7);
					}
				}
				if (bVar0 > 5)
				{
					Function_394(7, 100, Function_440(), 3020);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_238(7, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_443(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xEB1C / 60188
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(42);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							Global_50170[4222].f_28++;
						}
					}
				}
				bVar0 = Global_50170[4222].f_28;
				if (bVar0 > 5)
				{
					Function_399(42, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_444(), 3076);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_238(42, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(42);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							Global_50170[4222].f_28++;
						}
					}
				}
				bVar0 = Global_50170[4222].f_28;
				if (bVar0 > 25)
				{
					Function_399(42, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 75, 150, Function_444(), 3077);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_238(42, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(42);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							Global_50170[4222].f_28++;
						}
					}
				}
				bVar0 = Global_50170[4222].f_28;
				if (bVar0 > 75)
				{
					Function_394(42, 150, Function_444(), 3078);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_238(42, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_444() //Position: 0xED0E / 60686
{
	return "MP_GrabtheBag2_Icon_128";
}

void Function_445(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xED2E / 60718
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(38);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							if (Param3.f_12 == 22)
							{
								Global_50170[3822].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[3822].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_394(38, 150, Function_446(), 3064);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_238(38, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_446() //Position: 0xEDE3 / 60899
{
	return "MP_HoldYourOwn_Icon_128";
}

void Function_447(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0xEE03 / 60931
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(34);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							Global_50170[3422].f_28++;
						}
					}
				}
				bVar0 = Global_50170[3422].f_28;
				if (bVar0 > 5)
				{
					Function_399(34, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_446(), 3056);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_238(34, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(34);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							Global_50170[3422].f_28++;
						}
					}
				}
				bVar0 = Global_50170[3422].f_28;
				if (bVar0 > 25)
				{
					Function_399(34, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 75, 150, Function_446(), 3057);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_238(34, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(34);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3) && !Function_428(Param3))
					{
						if (Function_20(Param3.f_40, 1))
						{
							Global_50170[3422].f_28++;
						}
					}
				}
				bVar0 = Global_50170[3422].f_28;
				if (bVar0 > 75)
				{
					Function_394(34, 150, Function_446(), 3058);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_238(34, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_448(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xEFF5 / 61429
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(11);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 20)
				{
					*uParam0 = 2;
					Function_394(11, 150, Function_440(), 3025);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_238(11, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_449(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xF071 / 61553
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 6)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(6);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 5)
				{
					Function_399(6, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 10, 100, Function_440(), 3016);
					Function_194(6, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_238(6, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(6);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 10)
				{
					Function_399(6, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 15, 150, Function_440(), 3017);
					Function_194(6, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_238(6, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(6);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 15)
				{
					Function_394(6, 150, Function_440(), 3018);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_238(6, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_450(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xF1CE / 61902
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 11)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(10);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 10)
				{
					*uParam0 = 2;
					Function_394(10, 150, Function_440(), 3024);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_238(10, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_451(var uParam0, var uParam1, var uParam2, struct<5> Param3, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0xF24A / 62026
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 6)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(5);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 3)
				{
					Function_399(5, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_452(), 3013);
					Function_194(5, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_238(5, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(5);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 5)
				{
					Function_399(5, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 7, 150, Function_452(), 3014);
					Function_194(5, 1);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_238(5, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_208(5);
				if (StackVal == GET_LOCAL_SLOT())
				{
					bVar0 = Function_211(35);
				}
				if (bVar0 > 7)
				{
					Function_394(5, 150, Function_452(), 3015);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_393(uParam2, bVar0, 7);
					if (*uParam2 == fVar1)
					{
						Function_238(5, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

bool Function_452() //Position: 0xF3A3 / 62371
{
	return "MP_KillStreak_Icon_128";
}

void Function_453(bool bParam0, bool bParam1) //Position: 0xF3C2 / 62402
{
	bool bVar0;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_264(35, 1);
		bVar0 = Function_211(35);
		if (bVar0 > 3)
		{
			Function_94("mp_killstreak_personal", I2STR(Function_211(35)));
		}
		switch (bVar0)
		{
			case 0x00000003:
				Function_56("GENMESS_TRIGRHAP", 0);
				Function_123(bParam0, bParam1, bVar0);
				break;
			
			case 0x00000006:
				Function_56("GENMESS_BIGGUNS", 0);
				Function_123(bParam0, bParam1, bVar0);
				break;
			
			case 0x00000008:
				Function_56("GENMESS_STONECOLDKILLA", 0);
				Function_123(bParam0, bParam1, bVar0);
				break;
			}
	}
	return;
}

void Function_454(struct<33> Param0) //Position: 0xF48E / 62606
{
	float fVar0;
	
	if ((StackVal && Function_19(32) != GET_LOCAL_SLOT()) && Param0.f_32 != 0)
	{
		fVar0 = (VDIST(Global_34574, *(&Param0 + 16)) * 1.093613f);
		if (Param0.f_12 == 29)
		{
			if (fVar0 <= 35.0f)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(65))
				{
					AWARD_ACHIEVEMENT(65);
				}
			}
		}
	}
}

var Function_455(int iParam0) //Position: 0xF4E7 / 62695
{
	if (Function_98(Global_79349.f_44, 4194304))
	{
		return "deathmsg_ZOMBIE";
	}
	switch (iParam0)
	{
		case 0x00000001:
			return "deathmsg_ARMADILLO";
			break;
		
		case 0x00000002:
			return "deathmsg_BAT";
			break;
		
		case 0x00000003:
			return "deathmsg_BEAR";
			break;
		
		case 0x00000004:
			return "deathmsg_BEAVER";
			break;
		
		case 0x00000005:
			return "deathmsg_BIGHORN";
			break;
		
		case 0x00000006:
			return "deathmsg_BOAR";
			break;
		
		case 0x00000007:
			return "deathmsg_BOBCAT";
			break;
		
		case 0x00000008:
			return "deathmsg_BUFFALO";
			break;
		
		case 0x00000009:
			return "deathmsg_BULL";
			break;
		
		case 0x0000000A:
			return "deathmsg_CHICKEN";
			break;
		
		case 0x0000000B:
			return "deathmsg_COUGAR";
			break;
		
		case 0x0000000C:
			return "deathmsg_COW";
			break;
		
		case 0x0000000D:
			return "deathmsg_COYOTE";
			break;
		
		case 0x0000000E:
			return "deathmsg_CROW";
			break;
		
		case 0x0000000F:
			return "deathmsg_DEER";
			break;
		
		case 0x00000010:
			return "deathmsg_DOG";
			break;
		
		case 0x00000011:
			return "deathmsg_DUCK";
			break;
		
		case 0x00000012:
			return "deathmsg_EAGLE";
			break;
		
		case 0x00000013:
			return "deathmsg_ELK";
			break;
		
		case 0x00000014:
			return "deathmsg_FOX";
			break;
		
		case 0x00000015:
			return "deathmsg_GOAT";
			break;
		
		case 0x00000016:
			return "deathmsg_HAWK";
			break;
		
		case 0x00000017:
			return "deathmsg_HORSE";
			break;
		
		case 0x00000018:
			return "deathmsg_MULE";
			break;
		
		case 0x00000019:
			return "deathmsg_OWL";
			break;
		
		case 0x0000001A:
			return "deathmsg_PIG";
			break;
		
		case 0x0000001B:
			return "deathmsg_RABBIT";
			break;
		
		case 0x0000001C:
			return "deathmsg_RACCOON";
			break;
		
		case 0x0000001E:
			return "deathmsg_SKUNK";
			break;
		
		case 0x0000001F:
			return "deathmsg_SNAKE";
			break;
		
		case 0x00000020:
			return "deathmsg_SONGBIRD";
			break;
		
		case 0x00000021:
			return "deathmsg_STREETDOG";
			break;
		
		case 0x00000022:
			return "deathmsg_VULTURE";
			break;
		
		case 0x00000023:
			return "deathmsg_WOLF";
			break;
	}
	return "deathmsg_animal";
}

var Function_456(int iParam0) //Position: 0xF8C1 / 63681
{
	if (Function_98(Global_79349.f_44, 4194304))
	{
		if (iParam0 != 32 || iParam0 == 31)
		{
			return "deathmsg_ZOMBIE";
		}
	}
	switch (iParam0)
	{
		case 0x0000000B:
			return "deathmsg_BOUNTY_HUNTER";
			break;
		
		case 0x00000003:
			return "deathmsg_BYSTANDER";
			break;
		
		case 0x00000005:
			return "deathmsg_INDIAN_BYSTANDER";
			break;
		
		case 0x00000006:
			return "deathmsg_MEXICAN_BYSTANDER";
			break;
		
		case 0x00000004:
			return "deathmsg_U_S_BYSTANDER";
			break;
		
		case 0x0000000E:
			return "deathmsg_CATTLE_RUSTLER";
			break;
		
		case 0x00000019:
			return "deathmsg_DRUNK_N_DIRTY";
			break;
		
		case 0x0000000D:
			return "deathmsg_GENERIC_CRIMINAL";
			break;
		
		case 0x0000000C:
			return "deathmsg_MEXICAN_BANDITO";
			break;
		
		case 0x0000001A:
			return "deathmsg_SMUGGLERS";
			break;
		
		case 0x00000018:
			return "deathmsg_TREASURE_HUNTER";
			break;
		
		case 0x0000000F:
			return "deathmsg_INDIAN_RAIDER";
			break;
		
		case 0x00000009:
		case 0x00000008:
		case 0x00000007:
			return "deathmsg_LAW";
			break;
		
		case 0x0000000A:
			return "deathmsg_MEXICAN_LAW";
			break;
		
		case 0x0000001B:
			return "deathmsg_MEXICAN_REBEL";
			break;
		
		case 0x00000010:
			return "deathmsg_MEXICAN_SOLDIER";
			break;
	}
	return "deathmsg_somebody";
}

void Function_457(char* cParam0, bool bParam1) //Position: 0xFB4C / 64332
{
	PLAYSTAT_STRING(cParam0, GET_SLOT_NAME(bParam1));
	return;
}

void Function_458() //Position: 0xFB5C / 64348
{
	Function_467(65041);
	Function_459();
	return;
}

void Function_459() //Position: 0xFB6C / 64364
{
	NET_SCRIPTMSG_REGISTER_HANDLER(19, 64765);
	NET_SCRIPTMSG_REGISTER_HANDLER(20, 64390);
	return;
}

void Function_460(bool bParam0) //Position: 0xFB86 / 64390
{
	struct<69> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 18);
	if (Var0.f_68 != GET_LOCAL_SLOT())
	{
		return;
	}
	bVar18 = Function_463(&Var0 + 32, &Var0);
	if (IS_OBJECT_VALID(bVar18))
	{
		Function_461(bVar18, 1, Var0.f_64);
	}
	return;
}

void Function_461(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFBC1 / 64449
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Function_48()))
	{
		if (Function_462(bParam0) != 5)
		{
			ADD_OBJECT_TO_OBJECTSET(bParam0, Function_48());
		}
		bVar0 = GET_OBJECT_OWNER(bParam0);
		DESTROY_OBJECT_GLOW(bVar0);
		PLAY_SIMPLE_PROP_ANIMATION(bVar0, "crateMultiplayer_open", 0, 0, 2.0f, 0);
		if (bParam1)
		{
			bParam2 = (bParam2 - (NET_GET_NET_TIME() - GET_CURRENT_GAME_TIME()));
		}
		else
		{
			RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bVar0, "LOCKER_OPEN_QUICK_MASTER"));
			bParam2 = GET_CURRENT_GAME_TIME();
		}
		DECOR_SET_FLOAT(bParam0, Function_47(), bParam2);
		bVar1 = GET_BLIP_ON_OBJECT(bVar0);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
		bVar1 = GET_BLIP_ON_OBJECT(bParam0);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
	}
	return;
}

int Function_462(bool bParam0) //Position: 0xFC92 / 64658
{
	return Function_44(DECOR_GET_INT(bParam0, Function_46()));
}

var Function_463(bool bParam0, bool bParam1) //Position: 0xFCA3 / 64675
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT(bParam0);
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return "";
	}
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, bParam1);
	if (!IS_OBJECT_VALID(bVar1))
	{
		return "";
	}
	bVar2 = FIND_OBJECT_IN_OBJECT(bVar1, Function_464());
	if (!IS_OBJECT_VALID(bVar2))
	{
		return "";
	}
	return bVar2;
}

var Function_464() //Position: 0xFCE9 / 64745
{
	return "MPItemGiver";
}

void Function_465(bool bParam0) //Position: 0xFCFD / 64765
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	struct<69> Var6;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 1);
	if (NET_IS_SESSION_HOST())
	{
		bVar1 = Function_48();
		iVar2 = Function_137(15, GET_OBJECTSET_SIZE(bVar1));
		Var6.f_68 = uVar0;
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (DECOR_GET_FLOAT_VERBOSE(bVar4, Function_47(), &fVar5))
				{
					Var6.f_64 = (fVar5 + (NET_GET_NET_TIME() - GET_CURRENT_GAME_TIME()));
					strcpy(&Var6, GET_OBJECT_NAME(GET_OBJECT_OWNER(bVar4)), 32);
					bVar24 = Function_466(bVar4);
					if (IS_LAYOUTREF_VALID(bVar24))
					{
						strcpy(&Var6 + 32, GET_LAYOUT_NAME(bVar24), 32);
					}
					else
					{
						strcpy(&Var6 + 32, Function_132(), 32);
					}
					NET_SCRIPTMSG_SEND(1, 20, &Var6, 18, 0);
				}
			}
			bVar3++;
		}
	}
	return;
}

var Function_466(bool bParam0) //Position: 0xFDA9 / 64937
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_467(int iParam0) //Position: 0xFE03 / 65027
{
	NET_SCRIPTMSG_REGISTER_HANDLER(18, iParam0);
	return;
}

void Function_468(var uParam0) //Position: 0xFE11 / 65041
{
	struct<5> Var0;
	
	Function_469(uParam0, &Var0);
	if (StackVal != 5 && IS_SLOT_VALID(Var0))
	{
		Function_67("net_player_found_xpbonus", Var0);
	}
	return;
}

void Function_469(bool bParam0, int iParam1) //Position: 0xFE4D / 65101
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, iParam1, 18);
	bVar0 = Function_463(iParam1 + 40, iParam1 + 8);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (DECOR_CHECK_EXIST(bVar0, "DLC_AA_award"))
		{
			return;
		}
		Function_461(bVar0, 0, 0);
	}
	return;
}

void Function_470() //Position: 0xFE91 / 65169
{
	iLocal_10 = 0;
	iLocal_11 = 0;
	Function_2(49153, 0, 1);
	Function_473();
	Function_471();
	return;
}

void Function_471() //Position: 0xFEAC / 65196
{
	Function_472(4294967295, 0);
	return;
}

void Function_472(int iParam0, bool bParam1) //Position: 0xFEB7 / 65207
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_2(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_2(65536, bParam1, 1);
	return;
}

void Function_473() //Position: 0xFEE4 / 65252
{
	Function_474(Function_132());
	return;
}

void Function_474(char* cParam0) //Position: 0xFEF0 / 65264
{
	if (Function_475(cParam0, &Global_76905))
	{
		Function_2(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_475(bool bParam0, bool bParam1) //Position: 0xFF14 / 65300
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_476(bool bParam0) //Position: 0xFF48 / 65352
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	if (IS_SLOT_VALID(Var0))
	{
		Local_78[Var027].f_72 = 1;
		Local_78[Var027].f_80 = StackVal;
	}
	return;
}

void Function_477(bool bParam0) //Position: 0xFF77 / 65399
{
	var uVar0[2];
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 3);
	NET_LOG(true, "Rezzing", "Emergency Revival recv'd from Player #%s (%s), for #%s (%s)", I2STR(uVar0[0]), GET_SLOT_NAME(uVar0[0]), I2STR(uVar0[1]), GET_SLOT_NAME(uVar0[1]));
	if (uVar0[1] == GET_LOCAL_SLOT())
	{
		if (Function_12(65536, 0))
		{
			Function_403(65536, 0);
		}
	}
	return;
}

void Function_478(bool bParam0) //Position: 0x1001A / 65562
{
	var uVar0[2];
	bool bVar3;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 3);
	if (IS_SLOT_VALID(uVar0[0]) && IS_SLOT_VALID(uVar0[1]))
	{
		bVar3 = GET_LOCAL_SLOT();
		Function_386("nmp_rezzed", uVar0[0], uVar0[1]);
		if (bVar3 == uVar0[1])
		{
			Function_403(65536, 0);
		}
		else
		{
			if (!Function_98(Global_79349.f_44, 4194304))
			{
				Function_56("MPCOOP_PLAYERREVIVED", 0);
			}
			else
			{
				Function_56("UN_Narr2_Previved", 0);
			}
			if (bVar3 == uVar0[0])
			{
				Function_264(39, 1);
				if (!Function_10(4194304))
				{
					Function_266(&Global_50170, 65, 1, 50.0f, 0, 0);
					Function_266(&Global_50170, 66, 10, 100.0f, 1, 0);
					Function_266(&Global_50170, 67, 50, 250.0f, 2, 0);
					Function_266(&Global_50170, 68, 250, 500.0f, 5, 0);
				}
				else if (StackVal == 4)
				{
					Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, Function_116(), 0, 1);
				}
				else if (StackVal == 2)
				{
					Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, Function_116(), Function_211(38), Function_211(28));
				}
				else
				{
					Function_147(255, &Global_50170[25522] + 4, &Global_50170[25522] + 8, &Global_50170[25522] + 12, Function_116(), Function_211(38), Function_211(39));
				}
			}
		}
	}
	return;
}

void Function_479(bool bParam0) //Position: 0x101B8 / 65976
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &bVar0, 3);
	NET_LOG(true, "GENERAL MP", "############ DITCH ORDER RECEIVED FROM #%s, %s!", I2STR(bVar0), GET_SLOT_NAME(bVar0), false, false);
	Function_285(64);
	return;
}

void Function_480() //Position: 0x1021B / 66075
{
	bool bVar0;
	char* cVar1[64];
	
	strcpy(&cVar1, UI_GET_STRING("title_xplvl_0_ui"), 64);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		Local_78[bVar027] = 6;
		Local_78[bVar027].f_4 = 0;
		*(&Local_78[bVar027] + 8) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		Local_78[bVar027].f_72 = 0;
		Local_78[bVar027].f_80 = 0.0f;
		Local_78[bVar027].f_92 = 0;
		Local_78[bVar027].f_96 = 0;
		if (IS_OBJECT_VALID(Local_78[bVar027].f_100))
		{
			DESTROY_OBJECT(Local_78[bVar027].f_100);
		}
		if (Local_78[bVar027].f_88)
		{
			Local_78[bVar027].f_88 = 0;
			NET_GAMER_ICON_RESET_TIMER(bVar0, 0.0f);
		}
		NET_GAMER_SET_TEAM(bVar0, 0);
		bVar0++;
	}
	return;
}

bool Function_481(bool bParam0) //Position: 0x102CB / 66251
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

