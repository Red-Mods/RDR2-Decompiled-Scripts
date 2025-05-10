//Decompiled with MagicRDR v1.0
//Function Count : 447
//Statics Count : 489
//Natives Count : 445
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	float fLocal_44 = 0.0f;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	struct<5> Local_49 = { 0, 0, 16, 0, 0 } ;
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
	var uLocal_83 = 0;
	struct<5> Local_84 = { 0, 0, 0, 0, 0 } ;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	struct<509> Local_104 = { 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	bLocal_16 = false;
	iLocal_17 = 0;
	fLocal_44 = 60.0f;
	iLocal_91 = 0;
	bLocal_92 = false;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	vLocal_460 = { -2429.903f, 24.64f, 2141.453f };
	iLocal_467 = 0;
	iLocal_468 = 1;
	bLocal_477 = false;
	iLocal_488 = 0;
	Local_258 = Global_30640[2];
	if (!Function_430(&Local_258))
	{
		TERMINATE_THIS_SCRIPT();
	}
	iLocal_484 = 0;
	while (!IS_EXITFLAG_SET() && Function_89())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x9D / 157
{
	Function_85(&iLocal_286);
	Function_74(Local_104);
	Function_73();
	CLOSE_DOOR_FAST(Function_72(Local_258, "ntwinRocks", "waterWheel01", 1));
	Function_71(Function_72(Local_258, "ntwinRocks", "waterWheel01", 1), 0);
	Function_70(Function_72(Local_258, "ntwinRocks", "waterWheel01", 1), 0);
	CLOSE_DOOR_FAST(Function_72(Local_258, "ntwinRocks", "waterWheel01", 2));
	Function_71(Function_72(Local_258, "ntwinRocks", "waterWheel01", 2), 0);
	Function_70(Function_72(Local_258, "ntwinRocks", "waterWheel01", 2), 0);
	if (IS_ACTOR_VALID(bLocal_463))
	{
		DESTROY_ACTOR(bLocal_463);
	}
	Function_68(&uLocal_478, 1, 0, 4294967295, 4294967295);
	Function_2(&Local_258);
	return;
}

void Function_2(int iParam0) //Position: 0x1B2 / 434
{
	var uVar0;
	bool bVar16;
	
	PLAYSTAT_MP_DEED_COMPLETE_EX(GET_SHORT_SCRIPT_NAME(), CEIL(Function_63(iParam0 + 16 + 8)), NET_SCRIPT_GET_NUM_PARTICIPANTS(), iParam0->f_92);
	RELEASE_LAYOUT_REF(bLocal_40);
	Function_53();
	Function_52();
	HUD_CLEAR_OBJECTIVE();
	if (!Global_3403)
	{
		UI_EXIT("XpHud");
	}
	UI_EXIT("MpLinearSuppressor");
	Function_51(256);
	Function_51(4096);
	Function_50(64);
	Function_49(1);
	Function_47(8);
	if (*iParam0 != 4294967294)
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(*iParam0), 16);
		Function_44("net_player_left_region", UI_GET_STRING(&uVar0));
		bVar16 = StackVal;
		if (IS_VOLUME_VALID(bVar16))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar16);
		}
	}
	Global_78480.f_24 = 4294967294;
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	NET_UNREGISTER_AS_NET_SCRIPT();
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x28E / 654
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x2A0 / 672
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x2AC / 684
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_90);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_89);
	}
	return;
}

void Function_6() //Position: 0x2CC / 716
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x301 / 769
{
	Function_42(131072);
	HUD_ENABLE(true);
	UI_INCLUDE("nMP_Ticker");
	UI_INCLUDE("WeaponAmmo");
	if (IS_WEAPON_DRAWN(Function_41()))
	{
		UI_ENTER("WeaponAmmo");
	}
	UI_UNFOCUS("HudGamerList");
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
	}
	Function_6();
	if (iLocal_91)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_91 = 0;
	}
	if (Function_38())
	{
		Function_36();
		Function_32();
		Function_31();
	}
	NET_PLAYER_LIST_RESET();
	if (iLocal_95)
	{
		iLocal_95 = 0;
		Function_8(TO_FLOAT(iParam0->f_92), "XP_AA_complete", 1);
	}
	Function_49(1);
	Function_47(8);
	iLocal_17 = 3;
	return;
}

int Function_8(float fParam0, var uParam1, bool bParam2) //Position: 0x3BC / 956
{
	if (!Function_28())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_25(8, fParam0);
	}
	Function_9(487, (fParam0 * Global_3362), uParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x3EC / 1004
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x408 / 1032
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
	Function_24(iParam0, TO_FLOAT(bParam1), 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_11(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x628 / 1576
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_19(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_16(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_13(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_12(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_12() //Position: 0xC55 / 3157
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xC5D / 3165
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xC6E / 3182
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0xD63 / 3427
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xD7C / 3452
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xDE1 / 3553
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_18(int iParam0, bool bParam1) //Position: 0xDF3 / 3571
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xE05 / 3589
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
	if (((Function_20(iParam0) != 19 || Function_20(iParam0) != 17) || Function_20(iParam0) != 10) || Function_20(iParam0) != 9)
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

int Function_20(int iParam0) //Position: 0xF35 / 3893
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xF44 / 3908
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xF7D / 3965
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xFBA / 4026
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1154 / 4436
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

void Function_25(int iParam0, float fParam1) //Position: 0x1398 / 5016
{
	Function_26(iParam0, (Function_27(iParam0) + fParam1));
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x13AB / 5035
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_27(int iParam0) //Position: 0x13D4 / 5076
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_28() //Position: 0x13E4 / 5092
{
	if (Function_30())
	{
		return (Function_29() != 1 || Function_29() != 0);
	}
	return 0;
}

int Function_29() //Position: 0x13FD / 5117
{
	return Global_79349.f_16;
}

bool Function_30() //Position: 0x1409 / 5129
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_31() //Position: 0x1412 / 5138
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		bLocal_90 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_replay", 1, 15, false, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		bLocal_89 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_skip", 1, 13, false, 0, 0, 0, 4294967295, 0);
	}
	return;
}

void Function_32() //Position: 0x146C / 5228
{
	Function_33(1024, 0, 1);
	Function_33(1, 0, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x1480 / 5248
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_35(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_34(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_34(int iParam0, int iParam1) //Position: 0x14A8 / 5288
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_35(int iParam0, int iParam1) //Position: 0x14BB / 5307
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_36() //Position: 0x14CA / 5322
{
	if (Function_38())
	{
		Function_37();
	}
	Function_33(4096, 0, 1);
	return;
}

void Function_37() //Position: 0x14E1 / 5345
{
	Function_33(32768, 1, 0);
	return;
}

bool Function_38() //Position: 0x14F0 / 5360
{
	return (Function_39(4096) || Function_39(4));
}

bool Function_39(bool bParam0) //Position: 0x1501 / 5377
{
	return Function_40(Global_76905.f_132, bParam0);
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x1512 / 5394
{
	return (uParam0 && bParam1) == 0;
}

var Function_41() //Position: 0x151F / 5407
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42(int iParam0) //Position: 0x1534 / 5428
{
	Function_43(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x158D / 5517
{
	Function_35(uParam0, iParam1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x159A / 5530
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, false, 0, 0, 0, 0);
	return;
}

struct<32> Function_45(int iParam0) //Position: 0x15AF / 5551
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_46(iParam0))
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

bool Function_46(int iParam0) //Position: 0x166C / 5740
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_47(int iParam0) //Position: 0x1682 / 5762
{
	Function_48(&Global_79338, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x1691 / 5777
{
	Function_34(uParam0, iParam1);
	return;
}

void Function_49(int iParam0) //Position: 0x169E / 5790
{
	Function_48(&Global_83864 + 1252, iParam0);
	return;
}

void Function_50(int iParam0) //Position: 0x16B0 / 5808
{
	Function_48(&Global_78617 + 52, iParam0);
	return;
}

void Function_51(int iParam0) //Position: 0x16C1 / 5825
{
	Function_48(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_52() //Position: 0x16FA / 5882
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_53() //Position: 0x1711 / 5905
{
	struct<17> Var0;
	
	Function_55();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_54(&Var0);
	return;
}

void Function_54(int iParam0) //Position: 0x1733 / 5939
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_55() //Position: 0x1741 / 5953
{
	Function_56();
	return;
}

void Function_56() //Position: 0x174A / 5962
{
	Function_57(4294967286);
	return;
}

void Function_57(bool bParam0) //Position: 0x1756 / 5974
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_62(&uVar0);
		Function_61(&vVar1);
		vVar1.z = uVar0;
		Function_54(&vVar1);
	}
	Function_60(&uVar0, bParam0);
	Function_59(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_58(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x1793 / 6035
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_59(int iParam0) //Position: 0x17A2 / 6050
{
	Local_49 = *iParam0;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x17AD / 6061
{
	*uParam0 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x17B8 / 6072
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_62(int iParam0) //Position: 0x17C6 / 6086
{
	*iParam0 = Local_49;
	return;
}

float Function_63(int iParam0) //Position: 0x17D1 / 6097
{
	if (Function_67(iParam0))
	{
		if (Function_66(iParam0))
		{
			return StackVal;
		}
		Function_64();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_64() //Position: 0x18A2 / 6306
{
	if (!Function_65())
	{
	}
	return;
}

bool Function_65() //Position: 0x18AF / 6319
{
	return NET_IS_IN_SESSION();
}

bool Function_66(int iParam0) //Position: 0x18B8 / 6328
{
	return Function_40(*iParam0, 2);
}

bool Function_67(int iParam0) //Position: 0x18C5 / 6341
{
	return Function_40(*iParam0, 1);
}

void Function_68(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x18D2 / 6354
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_69(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_69(int iParam0) //Position: 0x18F6 / 6390
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_70(bool bParam0, bool bParam1) //Position: 0x1E49 / 7753
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		DECOR_SET_BOOL(bParam0, "pickMe", true);
	}
	else
	{
		DECOR_SET_BOOL(bParam0, "unpickMe", true);
	}
	return;
}

void Function_71(bool bParam0, bool bParam1) //Position: 0x1E83 / 7811
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

bool Function_72(int iParam0, int iParam1, char* cParam2, int iParam3) //Position: 0x1ED7 / 7895
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_46(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	iParam1 = iParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

void Function_73() //Position: 0x1F73 / 8051
{
	Function_85(&Local_104 + 4);
	RELEASE_LAYOUT_REF(Local_104);
	return;
}

void Function_74(int iParam0) //Position: 0x1F85 / 8069
{
	if (IS_ACTORSET_VALID(bLocal_19))
	{
		Function_84(bLocal_19);
	}
	Function_82(iParam0);
	if (!Function_80(4))
	{
		Function_75(1);
	}
	return;
}

void Function_75(bool bParam0) //Position: 0x1FA9 / 8105
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_80(4))
		{
			Function_79(1);
		}
		else
		{
			return;
		}
	}
	Function_78(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_76(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x1FED / 8173
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_77(GET_LOCAL_SLOT(), bParam0) && !Function_80(2))
		{
			return;
		}
		if (!Function_80(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_80(4))
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

int Function_77(bool bParam0, bool bParam1) //Position: 0x206A / 8298
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

void Function_78(int iParam0) //Position: 0x208E / 8334
{
	Function_48(&Global_79337, iParam0);
	return;
}

void Function_79(int iParam0) //Position: 0x209D / 8349
{
	Function_43(&Global_79337, iParam0);
	return;
}

bool Function_80(int iParam0) //Position: 0x20AC / 8364
{
	return Function_81(Global_79337, iParam0);
}

bool Function_81(var uParam0, int iParam1) //Position: 0x20BB / 8379
{
	return (uParam0 && iParam1) == 0;
}

void Function_82(bool bParam0) //Position: 0x20C8 / 8392
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		LOG_ERROR("Failed to create iterator to release actors to netLayout");
		return;
	}
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			Function_83(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_83(bool bParam0) //Position: 0x2167 / 8551
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nnetLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return;
	}
	if (IS_OBJECT_VALID(bParam0))
	{
		GIVE_OBJECT_TO_LAYOUT(bParam0, bVar0);
	}
	return;
}

void Function_84(bool bParam0) //Position: 0x2198 / 8600
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)));
			}
		}
		bVar0++;
	}
	return;
}

void Function_85(int iParam0) //Position: 0x21E3 / 8675
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_86(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_86(var uParam0, int iParam1) //Position: 0x2209 / 8713
{
	if (Function_88(uParam0[iParam13], 4))
	{
		if (Function_88(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_87(uParam0[iParam13], 1);
			Function_87(uParam0[iParam13], 2);
			Function_87(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_87(var uParam0, int iParam1) //Position: 0x2337 / 9015
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_88(int iParam0, int iParam1) //Position: 0x2351 / 9041
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_89() //Position: 0x236E / 9070
{
	if (!Function_384(&Local_258, &Local_104, 55948, 0, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_67(&iLocal_479))
		{
			if (Function_63(&iLocal_479) <= 0.0f)
			{
				Function_382(&uLocal_478, 6, 40, 38, 10.0f);
				Function_381(&iLocal_479, 5.0f);
			}
		}
		else
		{
			Function_380(&iLocal_479, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_296();
			UNK_0x444C3C32(0, 4, 0);
			UNK_0x2148AC15(322, 10);
			break;
		
		case 0x00000001:
			Function_286();
			break;
		
		case 0x00000002:
			Function_276();
			break;
		
		case 0x00000003:
			Function_233();
			break;
		
		case 0x0000000B:
			Function_90();
			break;
	}
	return 1;
}

void Function_90() //Position: 0x241B / 9243
{
	switch (StackVal)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID(Local_104.f_192))
			{
				DESTROY_VOLUME(Local_104.f_192);
			}
			if (!IS_VOLUME_VALID(Local_104.f_176))
			{
				Local_104.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_104, "SpawnVol_0_set");
				(*&Local_104 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_0_sub_0", 2, -2348.029f, 36.00969f, 2168.135f, 0.0f, -87.99739f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
				ADD_TO_VOLUME_SET(Local_104.f_176, (*&Local_104 + 160)[0]);
				(*&Local_104 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_0_sub_1", 2, -2353.322f, 42.78277f, 2189.833f, 0.0f, -126.5316f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
				ADD_TO_VOLUME_SET(Local_104.f_176, (*&Local_104 + 160)[1]);
				(*&Local_104 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_0_sub_2", 2, -2346.557f, 41.64037f, 2137.88f, 0.0f, -98.02499f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
				ADD_TO_VOLUME_SET(Local_104.f_176, (*&Local_104 + 160)[2]);
			}
			Function_232();
			Function_230(StackVal, StackVal, bLocal_103, Function_232(), Global_78576, 0x43160000);
			Function_229(bLocal_103, bLocal_19, 0, 0);
			Local_258.f_8 = 6;
			Function_68(&uLocal_478, 1, 0, 4294967295, 4294967295);
			break;
		
		case 0x00000006:
			Function_91(&Local_258);
			break;
	}
	return;
}

var Function_91(int iParam0) //Position: 0x259D / 9629
{
	int iVar0;
	int iVar1;
	char* cVar2[16];
	bool bVar6;
	
	iVar1 = 0;
	switch (iLocal_96)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_228(iParam0 + 16 + 8);
			}
			if (!bLocal_92)
			{
				if (((*iParam0 == Global_30717[2] && *iParam0 == Global_30640[13]) && *iParam0 == Global_30707[4]) && *iParam0 == Global_30658[7])
				{
					Function_10(458, 1, 0, 0);
				}
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_63(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_227(), Function_226(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_STRING_VALID(iParam0->f_100))
				{
					AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				}
				Function_151(iParam0);
				Function_148(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_147())
							{
								if (Global_56612[79].f_24 == 1)
								{
									AWARD_ACHIEVEMENT(40);
								}
							}
							else
							{
								AWARD_ACHIEVEMENT(40);
							}
						}
					}
				}
			}
			else
			{
				Function_146("MP_AA_already_finished");
			}
			if ((iParam0 + 16)->f_28 == 2)
			{
				iLocal_96 = 1;
			}
			else
			{
				iLocal_96 = 15;
			}
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT(Function_145(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_41()))
				{
					Function_143(Function_41(), 0);
					if (IS_ACTOR_INSIDE_VEHICLE(Function_41()))
					{
						bVar6 = GET_VEHICLE(Function_41());
						if (IS_ACTOR_VALID(bVar6))
						{
							START_VEHICLE(bVar6);
						}
					}
				}
				SET_PLAYER_CONTROL(false, 0, 1, 1);
			}
			Function_51(131072);
			CANCEL_DEADEYE();
			ENABLE_USE_CONTEXTS(0);
			iLocal_91 = 1;
			SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
			UI_EXCLUDE("nMP_Ticker");
			UI_EXIT("WeaponAmmo");
			UI_EXCLUDE("WeaponAmmo");
			UI_SET_TEXT("mp_aa_stats_vote_skip", "Common_Null");
			UI_SET_TEXT("mp_aa_stats_vote_replay", "Common_Null");
			iLocal_96 = 2;
			break;
		
		case 0x00000002:
			iLocal_97++;
			if (iLocal_97 >= 5)
			{
				iLocal_96 = 6;
			}
			break;
		
		case 0x00000006:
			Function_138(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_132(*iParam0, Function_133());
			}
			iLocal_96 = 7;
			break;
		
		case 0x00000007:
			iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
			if (iLocal_17 != 3)
			{
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					if (IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(false, 0, 1, 1);
					}
				}
				if (IS_BUTTON_RELEASED(iVar0, 4, 1, true))
				{
					Function_37();
					if (iLocal_17 == 2)
					{
						Function_138(iParam0);
					}
					else if (iLocal_17 == 1)
					{
						Function_129();
					}
				}
				else if (Function_128(15, 1, 1))
				{
					Function_127(1);
					Function_7(iParam0);
				}
				else if (Function_128(13, 1, 1))
				{
					Function_127(0);
					Function_7(iParam0);
				}
				else if (Function_126())
				{
					if (iLocal_17 == 1)
					{
						Function_138(iParam0);
					}
					else if (iLocal_17 == 2)
					{
						Function_129();
					}
				}
			}
			else
			{
				if (UI_ISACTIVE("NotorietyMeter") && !iLocal_94)
				{
					Function_5();
					iLocal_94 = 1;
				}
				else if (!UI_ISACTIVE("NotorietyMeter") && iLocal_94)
				{
					iLocal_94 = 0;
					Function_31();
				}
				if (!UI_ISACTIVE("RadialWeaponQuickPick"))
				{
					if (iLocal_93)
					{
						iLocal_93 = 0;
						Function_31();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_90))
						{
							Function_127(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_127(0);
						}
					}
				}
				else if (!iLocal_93)
				{
					iLocal_93 = 1;
					Function_5();
				}
			}
			Function_122();
			switch (Function_119(iParam0))
			{
				case 0x00000001:
					if (Function_105(99, 1, 0x3f800000))
					{
						Function_146("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_104(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_103(Global_12976.f_36);
							if (Function_100(StackVal, StackVal, Function_103(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_96 = 11;
					}
					break;
				
				case 0x00000000:
					Function_146("mp_aa_vote_skip_passed");
					PLAYSTAT_INT("AA vote passed", false);
					(iParam0 + 16)->f_28 = 0;
					iLocal_96 = 15;
					break;
				
				case 0x00000002:
					Function_55();
					break;
			}
			break;
		
		case 0x0000000B:
			iVar1 = 1;
			if (!Function_99(8))
			{
				Function_98(1792, 0);
				Function_92(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_96 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_50(64);
			if (!Function_80(4))
			{
				Function_75(1);
			}
			iLocal_96 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_92(var uParam0, bool bParam1, int iParam2) //Position: 0x2AD7 / 10967
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_46(Global_29006))
		{
			Function_97(&(Global_29008[Global_29006]), 131072);
			Function_96(&(Global_29008[Global_29006]), 2097152);
			Function_94(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_93(&(Global_29008[iVar0]), 4) || Function_93(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_96(&(Global_29008[iVar0]), 2097155);
					Function_97(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_30())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_93(var uParam0, int iParam1) //Position: 0x2BE2 / 11234
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_94(int iParam0) //Position: 0x2BFE / 11262
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_95())
			{
				return;
			}
		}
		if (!Function_93(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_95() //Position: 0x2C7D / 11389
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_93(&(Global_29008[iVar0]), 4) || Function_93(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_96(var uParam0, int iParam1) //Position: 0x2CE6 / 11494
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_97(var uParam0, int iParam1) //Position: 0x2CFD / 11517
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_98(int iParam0, bool bParam1) //Position: 0x2D0C / 11532
{
	if (bParam1)
	{
		Function_35(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_34(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_99(int iParam0) //Position: 0x2D47 / 11591
{
	return Function_81(Global_78617.f_52, iParam0);
}

bool Function_100(vector3 vParam0) //Position: 0x2D58 / 11608
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_102(&uVar0);
	iVar9 = Function_101(StackVal, StackVal, vParam0, 1, 1, 0);
	if (Function_46(iVar9))
	{
		if (StackVal == 7)
		{
			return 1;
		}
	}
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar10++;
	}
	return 0;
}

var Function_101(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2DCC / 11724
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

void Function_102(int iParam0) //Position: 0x2E67 / 11879
{
	(*iParam0)[0] = Global_30640[2];
	(*iParam0)[1] = Global_30658[0];
	(*iParam0)[2] = Global_30658[3];
	(*iParam0)[3] = Global_30658[2];
	(*iParam0)[4] = Global_30679[1];
	(*iParam0)[5] = Global_30668[2];
	(*iParam0)[6] = Global_30685[2];
	(*iParam0)[7] = Global_30685[1];
	return;
}

vector3 Function_103(bool bParam0) //Position: 0x2EC5 / 11973
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_104(int iParam0) //Position: 0x2ED6 / 11990
{
	Function_43(&Global_78617 + 52, iParam0);
	return;
}

bool Function_105(bool bParam0, bool bParam1, float fParam2) //Position: 0x2EE7 / 12007
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_118(bParam0);
	}
	Function_61(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_54(&Var0);
	}
	if (Function_117(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_116(&Var0, 0);
		Function_54(&Var0);
		Function_56();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_115(bParam0, iVar6, &uVar7))
	{
		if (Function_114())
		{
			if (!Function_113(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_112(&Var0, 1);
				Function_54(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_54(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_106(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
					Var11 = GET_LOCAL_SLOT();
					Var11.f_4 = fVar5;
					NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_54(&Var0);
	}
	return 0;
}

bool Function_106(int iParam0) //Position: 0x313A / 12602
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_111(bVar0))
		{
			iVar1 = Function_107(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_107(bool bParam0) //Position: 0x317D / 12669
{
	int iVar0;
	
	Function_110(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_62(&iVar0);
	}
	else
	{
		Function_109(&iVar0, bParam0);
	}
	return Function_108(&iVar0);
}

int Function_108(int iParam0) //Position: 0x31A4 / 12708
{
	return *iParam0;
}

void Function_109(var uParam0, int iParam1) //Position: 0x31AD / 12717
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_110(int iParam0) //Position: 0x31BC / 12732
{
	Function_60(iParam0, 4294967286);
	return;
}

bool Function_111(bool bParam0) //Position: 0x31CA / 12746
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_112(var uParam0, bool bParam1) //Position: 0x31D7 / 12759
{
	if (bParam1)
	{
		Function_35(uParam0, 2);
	}
	else
	{
		Function_34(uParam0, 2);
	}
	return;
}

bool Function_113(bool bParam0) //Position: 0x31F1 / 12785
{
	return Function_40(*bParam0, 2);
}

bool Function_114() //Position: 0x31FE / 12798
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_115(int iParam0, var uParam1, int iParam2) //Position: 0x321C / 12828
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_111(iVar0))
		{
			iVar1 = Function_107(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_116(int iParam0, bool bParam1) //Position: 0x326D / 12909
{
	if (bParam1)
	{
		Function_35(iParam0, 1);
	}
	else
	{
		Function_34(iParam0, 1);
	}
	return;
}

bool Function_117(int iParam0) //Position: 0x3287 / 12935
{
	return Function_40(*iParam0, 1);
}

void Function_118(int iParam0) //Position: 0x3294 / 12948
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_62(&iVar1);
	if (Function_108(&iVar1) != bVar0)
	{
		Function_61(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_40(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_57(bVar0);
		Function_112(&Var2, 0);
		Function_54(&Var2);
	}
	return;
}

bool Function_119(int iParam0) //Position: 0x3391 / 13201
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar2 = false;
	iVar3 = (NET_SCRIPT_GET_NUM_PARTICIPANTS() / 2) + 1;
	bVar4 = false;
	while (bVar4 <= 16)
	{
		if (Function_121(bVar4))
		{
			switch (Function_120(bVar4))
			{
				case 0x00000000:
					bVar1++;
					break;
				
				case 0x00000001:
					bVar2++;
					break;
				}
		}
		bVar4++;
	}
	UI_SET_STRING("mp_aa_vote_total_replays", INT_TO_STRING(bVar2));
	UI_SET_STRING("mp_aa_vote_total_continues", INT_TO_STRING(bVar1));
	UI_SET_STRING("mp_aa_vote_total_required", INT_TO_STRING(NET_SCRIPT_GET_NUM_PARTICIPANTS()));
	if (iLocal_17 == 2)
	{
		UI_SET_TEXT("mp_aa_plist_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_plist_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_plist_vote_skip");
		UI_REFRESH("mp_aa_plist_vote_replay");
	}
	else if (iLocal_17 == 1)
	{
		UI_SET_TEXT("mp_aa_stats_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_stats_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_stats_vote_skip");
		UI_REFRESH("mp_aa_stats_vote_replay");
	}
	if (bVar2 > iVar3)
	{
		Function_3(iParam0);
		iVar0 = 1;
	}
	else if (bVar1 > iVar3)
	{
		Function_3(iParam0);
		iVar0 = 0;
	}
	else if (bVar1 + bVar2) == NET_SCRIPT_GET_NUM_PARTICIPANTS()
	{
		Function_3(iParam0);
		iVar0 = 0;
	}
	else
	{
		iVar0 = 2;
	}
	return iVar0;
}

int Function_120(int iParam0) //Position: 0x35CD / 13773
{
	return StackVal;
}

bool Function_121(bool bParam0) //Position: 0x35DB / 13787
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_122() //Position: 0x35F1 / 13809
{
	Function_125(8);
	Function_123(&Global_79298);
	return;
}

void Function_123(int iParam0) //Position: 0x3603 / 13827
{
	Function_124(iParam0, 0.0f);
	return;
}

void Function_124(int iParam0, float fParam1) //Position: 0x360F / 13839
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_35(iParam0, 1);
	Function_34(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_125(int iParam0) //Position: 0x3630 / 13872
{
	Function_43(&Global_79338, iParam0);
	return;
}

bool Function_126() //Position: 0x363F / 13887
{
	return Function_39(32768);
}

void Function_127(bool bParam0) //Position: 0x364C / 13900
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_50(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_128(int iParam0, int iParam1, bool bParam2) //Position: 0x3677 / 13943
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_RELEASED(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (((IS_BUTTON_RELEASED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_RELEASED(iVar0, 13, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (((IS_BUTTON_RELEASED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_RELEASED(iVar0, 12, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_129() //Position: 0x3724 / 14116
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_131();
	Function_130();
	iLocal_17 = 2;
	return;
}

void Function_130() //Position: 0x375F / 14175
{
	Function_33(1025, 1, 0);
	return;
}

void Function_131() //Position: 0x376D / 14189
{
	if (!Function_38())
	{
		Function_37();
	}
	Function_33(4096, 1, 1);
	return;
}

void Function_132(var uParam0, var uParam1) //Position: 0x3785 / 14213
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_133() //Position: 0x37AA / 14250
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_121(iVar2))
		{
			iVar3 = Function_134(iVar2);
			if (iVar3 >= iVar1)
			{
				iVar1 = iVar3;
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int Function_134(bool bParam0) //Position: 0x37E9 / 14313
{
	return Function_135(0, bParam0);
}

int Function_135(int iParam0, bool bParam1) //Position: 0x37F5 / 14325
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_137(iParam0);
	}
	if (!Function_136(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_136(bool bParam0) //Position: 0x385C / 14428
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

int Function_137(int iParam0) //Position: 0x38FD / 14589
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_138(int iParam0) //Position: 0x390D / 14605
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_142(1);
	Function_131();
	Function_130();
	UI_UNFOCUS("HudGamerList");
	UI_ENTER("AAPrompts_Stats");
	Function_33(16384, 1, 1);
	Function_33(32768, 0, 1);
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(2, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(3, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	strcpy(&Global_76905 + 64, "mp_plist_personal_stats", 64);
	NET_PLAYER_LIST_SET_TITLE(&Global_76905 + 64);
	iVar8 = 100;
	itos(&cVar0, Function_227(), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_score_alt"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	itos(&cVar0, iParam0->f_88, 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_bonus_score_alt"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	Stack.Push(iVar8);
	Call_Loc(iParam0->f_96);
	iVar8 = (iVar8 - 1);
	if (iParam0->f_104)
	{
		bVar9 = "mp_plist_target_bonus_casual";
	}
	else
	{
		switch (GET_PLAYER_COMBATMODE())
		{
			case 0x00000002:
				bVar9 = "mp_plist_target_bonus_casual";
				break;
			
			case 0x00000000:
				bVar9 = "mp_plist_target_bonus_normal";
				break;
			
			case 0x00000001:
				bVar9 = "mp_plist_target_bonus_expert";
				break;
			
			default:
				bVar9 = "mp_plist_target_bonus";
				break;
			}
	}
	itos(&cVar0, Function_137(3), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(bVar9), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	itos(&cVar0, iParam0->f_92, 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_total_xp"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_kills"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_226(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_141());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_226(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_226(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_43);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_226(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_139(0, Function_63(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_17 = 1;
	return;
}

void Function_139(bool bParam0, int iParam1) //Position: 0x3D31 / 15665
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_140(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_140(var uParam0) //Position: 0x3F5E / 16222
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

int Function_141() //Position: 0x3FCF / 16335
{
	return Function_226(12);
}

void Function_142(bool bParam0) //Position: 0x3FDA / 16346
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_33(16384, 0, 1);
	return;
}

void Function_143(bool bParam0, bool bParam1) //Position: 0x3FF4 / 16372
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_144(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_144(bool bParam0, bool bParam1) //Position: 0x4053 / 16467
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_145(int iParam0) //Position: 0x4072 / 16498
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_146(bool bParam0) //Position: 0x40D0 / 16592
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, false, 0, 0, 0, 0);
	return;
}

bool Function_147() //Position: 0x40E4 / 16612
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_148(int iParam0) //Position: 0x40F3 / 16627
{
	Function_150(iParam0, Global_30668[2], &Global_56612, 0);
	Function_150(iParam0, Global_30679[1], &Global_56612, 1);
	Function_150(iParam0, Global_30658[0], &Global_56612, 2);
	Function_150(iParam0, Global_30658[3], &Global_56612, 3);
	Function_150(iParam0, Global_30685[2], &Global_56612, 4);
	Function_150(iParam0, Global_30640[2], &Global_56612, 6);
	Function_150(iParam0, Global_30685[1], &Global_56612, 5);
	Function_150(iParam0, Global_30658[2], &Global_56612, 7);
	Function_149(iParam0, Global_30668[2], &Global_56688, 0);
	Function_149(iParam0, Global_30679[1], &Global_56688, 1);
	Function_149(iParam0, Global_30658[0], &Global_56688, 2);
	Function_149(iParam0, Global_30658[3], &Global_56688, 3);
	Function_149(iParam0, Global_30685[2], &Global_56688, 4);
	Function_149(iParam0, Global_30640[2], &Global_56688, 6);
	Function_149(iParam0, Global_30685[1], &Global_56688, 5);
	Function_149(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_149(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x41E9 / 16873
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_141();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_141();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_141();
	}
}

void Function_150(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x42AD / 17069
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_141();
	}
}

void Function_151(int iParam0) //Position: 0x42EE / 17134
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_225(*iParam0) };
	Function_223(iParam0);
	Function_222(13, iParam0->f_92);
	Function_222(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_137(2));
	if (iParam0->f_104)
	{
		Function_221(3, 5);
	}
	else
	{
		Function_221(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_137(3));
	Function_122();
	Function_222(13, iParam0->f_92);
	Function_222(0, iParam0->f_92);
	iLocal_95 = 1;
	Function_152(Var0, 4294967295, 0, 0, 1);
	return;
}

void Function_152(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4363 / 17251
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_220(5, 1);
	Function_51(4096);
	switch (Function_29())
	{
		case 0x00000011:
		case 0x00000002:
			Function_180(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_173();
	Function_172();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_171(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
			if (bParam3)
			{
				uVar0[0] = uVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam1, &uVar0);
				uVar0[0] = uVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam1, &uVar0);
			}
			uVar0[0] = uVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam1, &uVar0);
			if (bParam4)
			{
				Function_169(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_171(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_153(bParam2);
}

void Function_153(bool bParam0) //Position: 0x447F / 17535
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_125(2);
	if (bParam0)
	{
		Function_125(1);
	}
	else
	{
		Function_47(1);
	}
	Function_154();
	return;
}

void Function_154() //Position: 0x4508 / 17672
{
	Function_167();
	Function_166();
	Function_166();
	Function_165();
	Function_165();
	Function_164();
	Function_164();
	Function_161(0);
	Function_161(0);
	if (!Function_30())
	{
		Function_159();
		Function_158();
		Function_157();
		Function_156();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_155();
	return;
}

void Function_155() //Position: 0x455A / 17754
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

void Function_156() //Position: 0x4660 / 18016
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

void Function_157() //Position: 0x4693 / 18067
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_158() //Position: 0x4821 / 18465
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_159() //Position: 0x49D5 / 18901
{
	Function_160(&Global_28260, 1, 0);
	return;
}

void Function_160(int iParam0, bool bParam1, int iParam2) //Position: 0x49E3 / 18915
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
	
	bVar0 = Function_41();
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

struct<8> Function_161(int iParam0) //Position: 0x4BD4 / 19412
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
					iVar2 = ((Function_163((50 + iVar4)) + Function_163((183 + iVar4))) + Function_163((90 + iVar4)));
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
	Function_162(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_162(int iParam0, bool bParam1, bool bParam2) //Position: 0x4C7A / 19578
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
		Function_24(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_23(iParam0);
	if (bParam2)
	{
		Function_11(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_163(bool bParam0) //Position: 0x4F15 / 20245
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_164() //Position: 0x4F56 / 20310
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
		iVar2 = ((Function_163((50 + iVar3) + 15) + Function_163((183 + iVar3) + 15)) + Function_163((90 + iVar3) + 15));
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
	Function_162(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_165() //Position: 0x4FDF / 20447
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
			iVar2 = ((Function_163((50 + iVar3) + 8) + Function_163((183 + iVar3) + 8)) + Function_163((90 + iVar3) + 8));
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
	Function_162(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_166() //Position: 0x5076 / 20598
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
		iVar2 = ((Function_163((50 + iVar3)) + Function_163((183 + iVar3))) + Function_163((90 + iVar3)));
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
	Function_162(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_167() //Position: 0x50F5 / 20725
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_168(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_162(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_168(int iParam0, bool bParam1, int iParam2) //Position: 0x512E / 20782
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
	Function_24(iParam0, bParam1, 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_11(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_169(int iParam0) //Position: 0x5338 / 21304
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_35(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_27(8));
	bVar0[0] = FLOOR(Function_27(8));
	if (Function_27(8) < 0.0f)
	{
		if (Function_170())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_27(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_27(7));
		bVar68[0] = bVar68[13];
		if (Function_170())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &bVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &bVar68);
		}
	}
	return;
}

bool Function_170() //Position: 0x53DF / 21471
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_171(var uParam0, var uParam1, bool bParam2) //Position: 0x53EA / 21482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*uParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_172() //Position: 0x542F / 21551
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_173() //Position: 0x5459 / 21593
{
	if (Global_83864.f_1264 > 6)
	{
		Function_174(&(Global_50170[522]));
		Function_174(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_174(&(Global_50170[722]));
		Function_174(&(Global_50170[822]));
		Function_174(&(Global_50170[922]));
		Function_174(&(Global_50170[1022]));
		Function_174(&(Global_50170[1122]));
	}
	return;
}

void Function_174(bool bParam0) //Position: 0x54B9 / 21689
{
	Global_56092[*bParam0] = 0;
	Function_175(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_175(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x54D3 / 21715
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_179(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_178(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_179(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_177(iParam0, 4))
	{
		Function_176(Function_179(iParam0), 0);
	}
}

void Function_176(bool bParam0, bool bParam1) //Position: 0x558A / 21898
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

bool Function_177(int iParam0, bool bParam1) //Position: 0x55AF / 21935
{
	return Function_40(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_178(int iParam0) //Position: 0x55C3 / 21955
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_179(int iParam0) //Position: 0x55F7 / 22007
{
	return Global_50170[iParam022].f_24;
}

void Function_180(var uParam0, var uParam1, int iParam2) //Position: 0x5606 / 22022
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_219(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_212(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_218(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_211(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_175(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_219(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_212(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_218(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_211(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_175(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_219(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_181(17, 150, Function_218(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_211(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_175(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_181(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x57AF / 22447
{
	Function_209(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_179(iParam0), 1.0f, false, 0);
	Function_205(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_202(iParam3);
	}
	Function_196(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_182();
}

void Function_182() //Position: 0x5815 / 22549
{
	if (!Function_30())
	{
		if (!Function_195(1, 3, 1, 1))
		{
			Function_184(1);
			Function_183(1, 8);
		}
	}
	else
	{
		Function_153(0);
	}
	return;
}

void Function_183(var uParam0, int iParam1) //Position: 0x583E / 22590
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_30())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_184(bool bParam0) //Position: 0x5880 / 22656
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_185();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_154();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_34(&Global_63095, 1);
		Function_34(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_185() //Position: 0x58D1 / 22737
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_194())
	{
		Function_191(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_191(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_187(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_187(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_186(StackVal, StackVal, vVar0))
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

bool Function_186(vector3 vParam0) //Position: 0x598C / 22924
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_187(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x59A4 / 22948
{
	int iVar0;
	
	iVar0 = Function_189(uParam2, uParam3);
	if (Function_188(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_35(&Global_63095, 1);
			Function_34(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_35(&Global_63095, 2);
			Function_34(&Global_63095, 1);
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
		Function_35(&Global_63095, 2);
		Function_34(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_232();
	return StackVal, StackVal, Function_232();
}

bool Function_188(int iParam0) //Position: 0x5A8B / 23179
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_189(bool bParam0, bool bParam1) //Position: 0x5AA1 / 23201
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
				fVar2 = Function_190(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_190(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_188(bVar0) && !bParam1)
	{
		bVar0 = Function_189(bParam0, 1);
	}
	return bVar0;
}

float Function_190(vector3 vParam0, vector3 vParam3) //Position: 0x5B68 / 23400
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_191(var uParam0, int iParam1) //Position: 0x5B85 / 23429
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_193(Global_34573, &vVar4);
	if (!Function_192(Global_30640[0]))
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
	if (!Function_192(Global_30640[2]))
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
	if (!Function_192(Global_30640[1]))
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
	if (!Function_192(Global_30658[1]))
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
	if (!Function_192(Global_30658[3]))
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
	if (!Function_192(Global_30658[2]))
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
	if (!Function_192(Global_30658[4]))
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
	if (!Function_192(Global_30668[0]))
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
	if (!Function_192(Global_30668[1]))
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
	if (!Function_192(Global_30668[2]))
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
	if (!Function_192(Global_30679[0]))
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
	if (!Function_192(Global_30685[0]))
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
	if (!Function_192(Global_30685[1]))
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
	if (!Function_192(Global_30685[2]))
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
	if (!Function_192(Global_30693[0]))
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
	if (!Function_192(Global_30693[1]))
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
	if (!Function_192(Global_30693[2]))
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
	if (!Function_192(Global_30707[2]))
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
	if (!Function_192(Global_30707[3]))
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
	if (!Function_192(Global_30707[0]))
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
	if (!Function_192(Global_30717[0]))
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
	if (!Function_192(Global_30723[2]))
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
	if (!Function_192(Global_30723[1]))
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
	if (!Function_192(Global_30723[0]))
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
	if (!Function_192(Global_30679[1]))
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
	if (!Function_192(Global_30707[1]))
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
	Function_35(&Global_63095, 2);
	Function_34(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_186(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_192(int iParam0) //Position: 0x63AA / 25514
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

void Function_193(bool bParam0, bool bParam1) //Position: 0x63E5 / 25573
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_194() //Position: 0x63F2 / 25586
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_195(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x640D / 25613
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_196(bool bParam0, bool bParam1, bool bParam2) //Position: 0x64B1 / 25777
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_201();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_200(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_199(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_198(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_197(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_200(), iVar1 + 1);
	return;
}

struct<16> Function_197(int iParam0) //Position: 0x6523 / 25891
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_198(int iParam0) //Position: 0x6544 / 25924
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_199(int iParam0) //Position: 0x6565 / 25957
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_200() //Position: 0x6586 / 25990
{
	return "CQueue_Count";
}

var Function_201() //Position: 0x659B / 26011
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_202(int iParam0) //Position: 0x65CA / 26058
{
	Function_203(iParam0, 1);
	return;
}

void Function_203(int iParam0, bool bParam1) //Position: 0x65D6 / 26070
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_35(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_204((iVar0 % 32)));
	}
	else
	{
		Function_34(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_204((iVar0 % 32)));
	}
	return;
}

int Function_204(bool bParam0) //Position: 0x662C / 26156
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_205(int iParam0, int iParam1) //Position: 0x6638 / 26168
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_208(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_179(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_207(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_206(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_179(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_179(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_179(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_206(int iParam0) //Position: 0x66BA / 26298
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_207(int iParam0) //Position: 0x66DA / 26330
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_208(int iParam0) //Position: 0x670B / 26379
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

void Function_209(bool bParam0, bool bParam1) //Position: 0x6889 / 26761
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_210();
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

var Function_210() //Position: 0x69D5 / 27093
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_211(var uParam0, bool bParam1, bool bParam2) //Position: 0x6A22 / 27170
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_212(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x6A3A / 27194
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
	Function_196(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_211(&fParam5, bParam8, iParam9);
	Function_175(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_214(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_202(iParam12);
	}
	Function_213(iParam0, 4);
	Function_182();
}

void Function_213(int iParam0, int iParam1) //Position: 0x6AB0 / 27312
{
	Function_34(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_214(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6AC4 / 27332
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_208(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_179(iParam0));
	if ((bParam3 && Function_177(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_179(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_207(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_216(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_206(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_179(iParam0), &Var7, 0, 2, Function_177(iParam0, 4));
			if (!bParam3)
			{
				Function_215(iParam0, 4);
			}
		}
	}
}

void Function_215(int iParam0, int iParam1) //Position: 0x6B81 / 27521
{
	Function_35(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_216(int iParam0) //Position: 0x6B95 / 27541
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_217(int iParam0) //Position: 0x6BC3 / 27587
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_218() //Position: 0x6BF3 / 27635
{
	return "MP_Unstoppable_Icon_128";
}

float Function_219(int iParam0) //Position: 0x6C13 / 27667
{
	return Global_50170[iParam022].f_12;
}

void Function_220(int iParam0, int iParam1) //Position: 0x6C22 / 27682
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0x6C47 / 27719
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_222(int iParam0, int iParam1) //Position: 0x6C70 / 27760
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_223(int iParam0) //Position: 0x6C8A / 27786
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_225(*iParam0) };
	fVar5 = (StackVal - Function_63(iParam0 + 16 + 8));
	Function_224(&fVar5, 600.0f, 30.0f);
	bVar6 = TO_FLOAT(bLocal_43);
	bVar7 = TO_FLOAT(Function_226(34));
	fVar8 = ((bVar6 * (bVar6 + 1.0f)) * 0.5f);
	fVar9 = ((bVar7 * (bVar7 + 1.0f)) * 0.5f);
	fVar10 = (fVar8 + fVar9);
	fVar11 = (fVar10 * Var0.f_12);
	bVar12 = (fVar11 / fVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar12));
	iParam0->f_92 = (Function_227() + iParam0->f_88);
	return;
}

void Function_224(var uParam0, int iParam1, int iParam2) //Position: 0x6D19 / 27929
{
	if (*uParam0 > iParam2)
	{
		*uParam0 = iParam2;
	}
	else if (*uParam0 < iParam1)
	{
		*uParam0 = iParam1;
	}
	return;
}

struct<20> Function_225(int iParam0) //Position: 0x6D3E / 27966
{
	struct<5> Var0;
	
	Var0.f_12 = 15.0f;
	Var0.f_16 = 5.0f;
	if (iParam0 == Global_30640[2])
	{
		Var0 = 15;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30679[1])
	{
		Var0 = 17;
		Var0.f_4 = 75.0f;
		Var0.f_8 = 300;
	}
	else if (iParam0 == Global_30658[3])
	{
		Var0 = 14;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 300;
	}
	else if (iParam0 == Global_30685[1])
	{
		Var0 = 21;
		Var0.f_4 = 90.0f;
		Var0.f_8 = 150;
	}
	else if (iParam0 == Global_30668[2])
	{
		Var0 = 13;
		Var0.f_4 = 165.0f;
		Var0.f_8 = 700;
	}
	else if (iParam0 == Global_30658[2])
	{
		Var0 = 18;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30685[2])
	{
		Var0 = 16;
		Var0.f_4 = 135.0f;
		Var0.f_8 = 200;
	}
	else if (iParam0 == Global_30658[0])
	{
		Var0 = 20;
		Var0.f_4 = 150.0f;
		Var0.f_8 = 400;
	}
	else if (iParam0 == Global_30717[3])
	{
		Var0 = 19;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30640[15])
	{
		Var0 = 109;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30640[16])
	{
		Var0 = 110;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30685[4])
	{
		Var0 = 111;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[6])
	{
		Var0 = 112;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30668[9])
	{
		Var0 = 115;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30693[11])
	{
		Var0 = 113;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[5])
	{
		Var0 = 114;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30717[2])
	{
		Var0 = 120;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30658[7])
	{
		Var0 = 118;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30640[13])
	{
		Var0 = 119;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30707[4])
	{
		Var0 = 117;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else
	{
		Var0 = 4294967295;
		Var0.f_4 = 300.0f;
	}
	return StackVal, StackVal, StackVal, StackVal, Var0;
}

int Function_226(int iParam0) //Position: 0x6FFA / 28666
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_227() //Position: 0x7013 / 28691
{
	return Function_137(0);
}

void Function_228(int iParam0) //Position: 0x701D / 28701
{
	if (Function_67(iParam0))
	{
		if (!Function_66(iParam0))
		{
			Function_64();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_35(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_229(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x70E5 / 28901
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTORSET_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (iParam3 != 0 || (iParam3 != 1 && IS_ACTOR_HUMAN(bVar1)))
			{
				if (!IS_ACTOR_IN_ACTORSET(bParam1, bVar1))
				{
					ADD_ACTORSET_MEMBER(bParam1, bVar1);
				}
				if (bParam2)
				{
					SQUAD_LEAVE(bVar1);
				}
				else
				{
					bVar0++;
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_230(bool bParam0, vector3 vParam1, bool bParam4, int iParam5) //Position: 0x7167 / 29031
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!IS_ACTOR_MOUNTED(bVar1))
				{
					if (Function_186(StackVal, StackVal, vParam1))
					{
						TASK_FLEE_ACTORSET(bVar1, bParam4, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_GO_TO_COORD(bVar1, &vParam1, 3);
					}
					if (!Function_231(bVar1, Global_34573, iParam5))
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

bool Function_231(bool bParam0, bool bParam1, int iParam2) //Position: 0x71E0 / 29152
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

vector3 Function_232() //Position: 0x72F1 / 29425
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_233() //Position: 0x72FA / 29434
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_275(&Local_258, 0);
			Function_273("TWR_MP_obj3", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_265();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_238();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_229(bLocal_101, bLocal_19, 0, 0);
				Function_229(bLocal_102, bLocal_19, 0, 0);
			}
			Function_237(bLocal_103);
			Function_236(&bLocal_101, iLocal_468);
			Function_236(&bLocal_102, iLocal_468);
			Local_258.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_232();
			Function_230(StackVal, StackVal, bLocal_103, Function_232(), Global_78576, 0x43160000);
			Function_235();
			if (Function_234(bLocal_19) < 0)
			{
				if (Function_105(12, 1, 0x3f800000))
				{
					if (NET_IS_HOST_OF_THIS_SCRIPT())
					{
						(&Local_258 + 16)->f_48++;
					}
					Local_258.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			if (iLocal_488 != (&Local_258 + 16)->f_48)
			{
				iLocal_488 = (&Local_258 + 16)->f_48;
				if ((&Local_258 + 16)->f_48 <= (&Local_258 + 16)->f_52)
				{
					Local_258.f_8 = 0;
					Local_258.f_4 = 3;
				}
				else
				{
					Local_258.f_8 = 0;
					Local_258.f_4 = 11;
				}
			}
			break;
	}
	return;
}

int Function_234(bool bParam0) //Position: 0x741E / 29726
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = GET_ACTORSET_SIZE(bParam0);
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar3++;
			}
		}
		bVar2++;
	}
	return bVar3;
}

void Function_235() //Position: 0x7464 / 29796
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bLocal_102))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_102, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if ((IS_ACTOR_IN_VOLUME(bVar1, Local_104.f_156) && IS_ACTOR_RIDING(bVar1)) && IS_ACTOR_ALIVE(bVar1))
			{
				ACTOR_DISMOUNT_NOW(bVar1);
				GIVE_WEAPON_TO_ACTOR(bVar1, 5, 50.0f, 0, 1);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, -1.0f);
			}
		}
		bVar0++;
	}
	return;
}

void Function_236(bool bParam0, int iParam1) //Position: 0x74C1 / 29889
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_237(bool bParam0) //Position: 0x755D / 30045
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_83(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_238() //Position: 0x7599 / 30105
{
	Function_263(3, I2STR((&Local_258 + 16)->f_48));
	Function_239(4, I2STR((&Local_258 + 16)->f_48));
	return;
}

void Function_239(char* cParam0, bool bParam1) //Position: 0x75BB / 30139
{
	float fVar0;
	bool bVar1;
	
	bLocal_285 = Function_262();
	fVar0 = 75.0f;
	bVar1 = 100.0f;
	switch (bLocal_285)
	{
		case 0x00000003:
			Function_240(StackVal, StackVal, cParam0, bParam1, vLocal_460, 493, "twr_backup_horse_01_", 0, fVar0, bVar1, 9);
		
		case 0x00000002:
			Function_240(StackVal, StackVal, cParam0, bParam1, vLocal_460, 489, "twr_backup_horse_07_", 0, fVar0, bVar1, 7);
		
		case 0x00000001:
			Function_240(StackVal, StackVal, cParam0, bParam1, vLocal_460, 491, "twr_backup_horse_013_", 1, fVar0, bVar1, 8);
			break;
	}
	return;
}

void Function_240(bool bParam0, char* cParam1, vector3 vParam2, bool bParam5, char* cParam6, bool bParam7, float fParam8, bool bParam9, int iParam10) //Position: 0x7679 / 30329
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	strcpy(&Var0, cParam6, 32);
	stradd(&Var0, cParam1, 32);
	bVar8 = Function_261(StackVal, StackVal, vParam2, &Local_104, bParam5, &Var0, fParam8, bParam9);
	Function_103(bVar8);
	bVar9 = CREATE_ACTOR_IN_LAYOUT(Local_104, Function_12(), 981, Function_103(bVar8), 0.0f, 0.0f, 0.0f);
	ACCESSORIZE_HORSE(bVar9, 3);
	TASK_MOUNT(bVar8, bVar9, 1, 1, 2, 2147483647);
	if (bParam7)
	{
		DEEQUIP_ACCESSORY(bVar8, 0);
		DEEQUIP_ACCESSORY(bVar8, 1);
	}
	Function_247(bVar8, iParam10);
	Function_246(bVar8, bParam0);
	Function_241(bVar9, 5);
}

void Function_241(bool bParam0, bool bParam1) //Position: 0x76F0 / 30448
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_FACTION(bParam0, 21);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
		Function_242(bParam0, bParam1);
	}
	return;
}

void Function_242(bool bParam0, bool bParam1) //Position: 0x7713 / 30483
{
	Function_247(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
	switch (bParam1)
	{
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_99);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_101);
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 5.0f, 2);
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_100);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, 1);
			break;
		
		case 0x00000004:
			DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
			MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bParam0);
			MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 16, 1);
			GIVE_WEAPON_TO_ACTOR(bParam0, 23, 10.0f, 1, 1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 3.0f, 2.0f);
			MEMORY_PREFER_RIDING(bParam0, true);
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 10.0f, 2);
			SQUAD_JOIN(bParam0, bLocal_102);
			break;
		
		case 0x00000005:
			SQUAD_JOIN(bParam0, bLocal_103);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_99);
			break;
	}
	Function_245(bParam0);
	Function_243(bParam0, 1);
	return;
}

void Function_243(bool bParam0, bool bParam1) //Position: 0x77FA / 30714
{
	int iVar0;
	float fVar1;
	
	if (bParam1)
	{
		iVar0 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	}
	else
	{
		iVar0 = GET_NUM_PLAYERS();
	}
	fVar1 = Function_244(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_244(int iParam0) //Position: 0x783E / 30782
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return 1.0f;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
			return 1.2f;
			break;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return 1.4f;
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
			return 1.5f;
			break;
		
		default:
			return 1.0f;
			break;
	}
	return 1.0f;
}

void Function_245(bool bParam0) //Position: 0x78D1 / 30929
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	if (STRING_CONTAINS_STRING(bVar0, "_easy"))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 30.0f);
	}
	else if (STRING_CONTAINS_STRING(bVar0, "_medium"))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 40.0f);
	}
	else if (STRING_CONTAINS_STRING(bVar0, "_hard"))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 50.0f);
	}
	else
	{
		LOG_ERROR("BOURASSA : we could not find the enum, something is wrong with this actor");
		SET_ACTOR_MAX_HEALTH(bParam0, 30.0f);
	}
	return;
}

void Function_246(bool bParam0, bool bParam1) //Position: 0x7990 / 31120
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
		Function_242(bParam0, bParam1);
	}
	return;
}

void Function_247(bool bParam0, int iParam1) //Position: 0x79B3 / 31155
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_260(bParam0);
			break;
		
		case 0x00000001:
			Function_259(bParam0);
			break;
		
		case 0x00000002:
			Function_258(bParam0);
			break;
		
		case 0x00000005:
			Function_257(bParam0);
			break;
		
		case 0x00000004:
			Function_256(bParam0);
			break;
		
		case 0x00000003:
			Function_255(bParam0);
			break;
		
		case 0x00000006:
			Function_254(bParam0);
			break;
		
		case 0x00000007:
			Function_253(bParam0);
			break;
		
		case 0x00000008:
			Function_252(bParam0);
			break;
		
		case 0x00000009:
			Function_250(bParam0);
			break;
		
		default:
			Function_248(bParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0)) == 12)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 6, true);
		}
	}
	return;
}

void Function_248(bool bParam0) //Position: 0x7A7F / 31359
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_249(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_249(var uParam0, bool bParam1) //Position: 0x7DE3 / 32227
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_250(bool bParam0) //Position: 0x7E05 / 32261
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_251(bool bParam0, int iParam1) //Position: 0x7FA2 / 32674
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_252(bool bParam0) //Position: 0x7FD5 / 32725
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_253(bool bParam0) //Position: 0x8183 / 33155
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_254(bool bParam0) //Position: 0x8314 / 33556
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_255(bool bParam0) //Position: 0x8446 / 33862
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	return;
}

void Function_256(bool bParam0) //Position: 0x85CE / 34254
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	return;
}

void Function_257(bool bParam0) //Position: 0x8728 / 34600
{
	Function_248(bParam0);
	Function_251(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_258(bool bParam0) //Position: 0x8866 / 34918
{
	Function_248(bParam0);
	Function_251(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_259(bool bParam0) //Position: 0x8889 / 34953
{
	Function_248(bParam0);
	Function_251(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.25f);
	return;
}

void Function_260(bool bParam0) //Position: 0x89F3 / 35315
{
	Function_248(bParam0);
	Function_251(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

var Function_261(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x8A2E / 35374
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	vector3 vVar10;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(fParam6, bParam7);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		vVar10.x = 0.0f;
		vVar10.f_8 = 0.0f;
		vVar10.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&vVar0, 5.0f, &vVar3, &uVar6))
		{
		}
		else
		{
			vVar3 = { StackVal, StackVal, vVar0 };
		}
		if (!Function_186(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

bool Function_262() //Position: 0x8ABA / 35514
{
	int iVar0;
	int iVar1;
	
	iVar1 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	if (iVar1 <= 4)
	{
		iVar0 = 1;
	}
	else if (iVar1 <= 4 && iVar1 > 11)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void Function_263(char* cParam0, bool bParam1) //Position: 0x8AE9 / 35561
{
	float fVar0;
	float fVar1;
	
	bLocal_285 = Function_262();
	fVar0 = 75.0f;
	fVar1 = 100.0f;
	switch (bLocal_285)
	{
		case 0x00000003:
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 492, "twr_backup_dyn_01_", 1, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 493, "twr_backup_dyn_02_", 0, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 489, "twr_backup_dyn_03_", 0, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 490, "twr_backup_dyn_05_", 0, fVar0, fVar1);
		
		case 0x00000002:
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 489, "twr_backup_dyn_07_", 1, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 491, "twr_backup_dyn_08_", 1, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 490, "twr_backup_dyn_09_", 1, fVar0, fVar1);
		
		case 0x00000001:
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 488, "twr_backup_dyn_011_", 0, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 487, "twr_backup_dyn_012_", 0, fVar0, fVar1);
			Function_264(StackVal, StackVal, cParam0, bParam1, vLocal_460, 486, "twr_backup_dyn_013_", 0, fVar0, fVar1);
			break;
	}
	return;
}

void Function_264(var uParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, bool bParam7, float fParam8, float fParam9) //Position: 0x8CBD / 36029
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	bVar8 = Function_261(StackVal, StackVal, vParam2, &Local_104, uParam5, &cVar0, fParam8, fParam9);
	if (bParam7)
	{
		DEEQUIP_ACCESSORY(bVar8, 0);
		DEEQUIP_ACCESSORY(bVar8, 1);
	}
	Function_246(bVar8, uParam0);
}

void Function_265() //Position: 0x8CFC / 36092
{
	Function_266();
	if (IS_VOLUME_VALID(Local_104.f_176))
	{
		DESTROY_VOLUME(Local_104.f_176);
	}
	return;
}

void Function_266() //Position: 0x8D16 / 36118
{
	Function_268();
	Function_267(Function_72(Local_258, "ntwinRocks", "waterWheel01", 1), 0);
	Function_267(Function_72(Local_258, "ntwinRocks", "waterWheel01", 2), 0);
	return;
}

void Function_267(bool bParam0, bool bParam1) //Position: 0x8D6B / 36203
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_268() //Position: 0x8DBC / 36284
{
	bool bVar0;
	bool bVar1;
	
	Function_272(bLocal_100);
	Function_272(bLocal_99);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_100, 0);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bLocal_100))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_100, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_271(bVar1, 3212836864);
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= (SQUAD_GET_SIZE(bLocal_99) / 2))
	{
		TASK_GO_NEAR_ACTORSET(SQUAD_GET_ACTOR_BY_INDEX(bLocal_99, bVar0), Global_78576, 15.0f, 0);
		bVar0++;
	}
	Function_270(bLocal_99, Local_104.f_132, 5, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_99, 0);
	Function_269(bLocal_99, 1);
	Function_269(bLocal_100, 1);
	SQUAD_SET_FACTION(bLocal_99, 19);
	SQUAD_SET_FACTION(bLocal_100, 19);
	return;
}

void Function_269(bool bParam0, int iParam1) //Position: 0x8E60 / 36448
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

var Function_270(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x8EA1 / 36513
{
	var uVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	uVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, uVar1, uVar0);
	return uVar0;
}

void Function_271(bool bParam0, float fParam1) //Position: 0x8EDC / 36572
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), fParam1);
	return;
}

void Function_272(bool bParam0) //Position: 0x8EF7 / 36599
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_273(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8F29 / 36649
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
			Var0 = { StackVal, StackVal, StackVal, Function_274(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_274(int iParam0) //Position: 0x8FAE / 36782
{
	char* cVar0[16];
	
	if (!Function_194())
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

void Function_275(var uParam0, bool bParam1) //Position: 0x8FED / 36845
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_4 = *uParam0;
	vVar0.f_8 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 78, &vVar0, 4, 1);
	if (bParam1)
	{
		NET_SCRIPTMSG_SEND(2, 78, &vVar0, 4, 1);
	}
	return;
}

void Function_276() //Position: 0x9024 / 36900
{
	bool bVar0;
	bool bVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_275(&Local_258, 0);
			Function_273("TWR_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_266();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_258 + 16)->f_52 = Function_262();
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_285();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_229(bLocal_101, bLocal_19, 0, 0);
			}
			Function_236(&bLocal_101, iLocal_468);
			Function_380(&iLocal_471, 30.0f);
			Local_258.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Function_63(&iLocal_474) < 0.0f)
				{
					Function_281(&bLocal_100);
					if (SQUAD_GET_SIZE(bLocal_100) != 1 && !iLocal_483)
					{
						Function_272(bLocal_100);
						SQUAD_GOALS_CLEAR(bLocal_100);
						bVar0 = false;
						while (bVar0 <= SQUAD_GET_SIZE(bLocal_100))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_100, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (IS_ACTOR_ALIVE(bVar1))
								{
									TASK_GO_NEAR_ACTORSET(bVar1, Global_78576, 1.0f, 0);
								}
							}
							bVar0++;
						}
						iLocal_483 = 1;
					}
					Function_381(&iLocal_474, 10.0f);
				}
			}
			if (Function_234(bLocal_19) < 0)
			{
				if (Function_105(3, 1, 0x3f800000))
				{
					if (Function_63(&iLocal_471) > 0.0f)
					{
						bLocal_477 = true;
						if (bLocal_477)
						{
							Function_277();
						}
					}
					Local_258.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_258.f_8 = 0;
			Local_258.f_4 = 3;
			break;
	}
	return;
}

void Function_277() //Position: 0x9174 / 37236
{
	Function_279(FLOOR(100.0f), "XP_TWR_Bonus", 0);
	Function_278(2, FLOOR(100.0f));
	return;
}

void Function_278(int iParam0, bool bParam1) //Position: 0x91A1 / 37281
{
	Function_221(iParam0, (Function_137(iParam0) + bParam1));
	return;
}

void Function_279(var uParam0, bool bParam1, int iParam2) //Position: 0x91B4 / 37300
{
	Function_280(uParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_227(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_227(), UI_GET_STRING(bParam1));
	}
	return;
}

void Function_280(int iParam0) //Position: 0x91F7 / 37367
{
	Function_278(0, iParam0);
	return;
}

void Function_281(bool bParam0) //Position: 0x9203 / 37379
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < 15)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
				{
					Function_284(*bParam0, GET_SLOT_ACTOR(bVar0));
					Function_283(*bParam0, GET_SLOT_ACTOR(bVar0), 0);
					Function_282(*bParam0, GET_SLOT_ACTOR(bVar0), 4);
				}
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  ALERT_AI_SQUAD was passed an invalid squad");
	}
	return;
}

void Function_282(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9299 / 37529
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_283(bool bParam0, bool bParam1, bool bParam2) //Position: 0x92DE / 37598
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_284(bool bParam0, bool bParam1) //Position: 0x9349 / 37705
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_285() //Position: 0x939B / 37787
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_104.f_112 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "TWR_Reinf_House02"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_01", 492, -2420.162f, 26.22526f, 2128.248f, 0.0f, -114.9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	Function_247(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_02", 490, -2419.293f, 26.22526f, 2131.023f, 0.0f, -114.9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	Function_247(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_03", 491, -2419.332f, 26.22526f, 2125.7f, 0.0f, -114.9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	Function_247(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_04", 487, -2422.153f, 26.22526f, 2126.963f, 0.0f, -114.9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	Function_247(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_05", 488, -2423.179f, 26.22526f, 2127.775f, 0.0f, -114.9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	Function_247(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_06", 493, -2423.74f, 26.72426f, 2123.823f, 0.0f, 118.2892f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	Function_247(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_house2_07", 489, -2424.969f, 26.70716f, 2122.654f, 0.0f, 118.2892f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.5f, 1, 1);
	Function_247(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_286() //Position: 0x971F / 38687
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_275(&Local_258, 0);
			Function_236(&Local_104 + 108, iLocal_468);
			Function_236(&Local_104 + 104, iLocal_468);
			Function_273("TWR_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_380(&iLocal_474, 10.0f);
			Local_258.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_288();
				if (Function_63(&iLocal_474) < 0.0f)
				{
					Function_281(&bLocal_100);
					Function_381(&iLocal_474, 10.0f);
				}
			}
			Function_287();
			if (Function_234(bLocal_19) >= 3 && (&Local_258 + 16)->f_32)
			{
				if (Function_105(2, 1, 0x3f800000))
				{
					Local_258.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_258.f_8 = 0;
			Local_258.f_4 = 2;
			break;
	}
	return;
}

void Function_287() //Position: 0x97F1 / 38897
{
	if (!iLocal_317)
	{
		if (((&Local_258 + 16)->f_24 || IS_ACTOR_IN_VOLUME(Function_41(), Local_104.f_156)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_482))
		{
			if (SQUAD_GET_SIZE(bLocal_99) >= 2)
			{
				Function_268();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_482);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_482);
				iLocal_317 = 1;
			}
		}
	}
	return;
}

void Function_288() //Position: 0x9836 / 38966
{
	if (!iLocal_484)
	{
		if (Function_67(&iLocal_485))
		{
			if (Function_63(&iLocal_485) < 0.5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_258 + 16)->f_60)
				{
					case 0x00000000:
						Function_295();
						Function_229(Local_104.f_104, bLocal_19, 0, 0);
						Function_236(&Local_104 + 104, iLocal_468);
						break;
					
					case 0x00000001:
						Function_294();
						Function_229(Local_104.f_108, bLocal_19, 0, 0);
						Function_236(&Local_104 + 108, iLocal_468);
						break;
					
					case 0x00000002:
						Function_293();
						break;
				}
				(&Local_258 + 16)->f_60++;
				Function_292(&iLocal_485);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_289(&iLocal_485);
		}
		if ((&Local_258 + 16)->f_60 >= 3)
		{
			(&Local_258 + 16)->f_32 = 1;
			iLocal_484 = 1;
		}
	}
	return;
}

void Function_289(int iParam0) //Position: 0x98F6 / 39158
{
	if (!Function_67(iParam0))
	{
		Function_290(iParam0, 0.0f);
	}
	return;
}

void Function_290(var uParam0, float fParam1) //Position: 0x990B / 39179
{
	Function_64();
	Function_291(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_291(var uParam0, int iParam1) //Position: 0x991F / 39199
{
	uParam0->f_4 = iParam1;
	Function_35(uParam0, 1);
	Function_34(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_292(var uParam0) //Position: 0x993C / 39228
{
	Function_290(uParam0, 0.0f);
	return;
}

void Function_293() //Position: 0x9948 / 39240
{
	bool bVar0;
	
	bLocal_285 = Function_262();
	switch (bLocal_285)
	{
		case 0x00000003:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn08", 492, *(&Local_104 + 196), *(&Local_104 + 196 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn07", 493, *(&Local_104 + 220), *(&Local_104 + 220 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn06", 491, *(&Local_104 + 244), *(&Local_104 + 244 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
		
		case 0x00000002:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn05", 489, *(&Local_104 + 268), *(&Local_104 + 268 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn04", 490, *(&Local_104 + 292), *(&Local_104 + 292 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
		
		case 0x00000001:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn03", 486, *(&Local_104 + 316), *(&Local_104 + 316 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn02", 487, *(&Local_104 + 340), *(&Local_104 + 340 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "TWR_Spawn_Dyn01", 488, *(&Local_104 + 364), *(&Local_104 + 364 + 12));
			SQUAD_JOIN(bVar0, Local_104.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			break;
	}
	return;
}

void Function_294() //Position: 0x9B73 / 39795
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_104.f_108 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "TWR_snipers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_sniper_01", 491, -2450.716f, 33.52565f, 2129.406f, 0.0f, -234.5678f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_108);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_242(bVar0, 2);
	Function_247(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_sniper_02", 489, -2413.033f, 34.29689f, 2170.624f, 0.0f, 48.31993f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_108);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_242(bVar0, 2);
	Function_247(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_sniper_03", 490, -2420.742f, 30.90931f, 2126.562f, 0.0f, 48.31993f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_108);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_242(bVar0, 2);
	Function_247(bVar0, 6);
	return;
}

void Function_295() //Position: 0x9D1B / 40219
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_104.f_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "TWR_Initial_Guards"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_spawn_01", 486, -2415.097f, 25.13294f, 2150.785f, 0.0f, 87.21748f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0.5f, 1, 1);
	Function_247(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_242(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_spawn_02", 492, -2433.615f, 24.63136f, 2121.336f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_247(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_242(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_spawn_03", 487, -2407.367f, 25.95819f, 2130.453f, 0.0f, -159.6211f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0.5f, 1, 1);
	Function_247(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_242(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_spawn_04", 488, -2420.15f, 24.09419f, 2156.583f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_247(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_242(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_104, "twr_spawn_05", 487, -2438.124f, 23.6237f, 2152.848f, 0.0f, 182.1785f, 0.0f);
	SQUAD_JOIN(bVar0, Local_104.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_247(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_242(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_296() //Position: 0x9FC5 / 40901
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_377();
			Function_375();
			Function_368(&uLocal_318, 0);
			Function_365(&uLocal_318, 1, 3, 3, 1);
			Local_258.f_100 = "FTR_SONG_05";
			Local_258.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_358() && Function_349(&Local_258))
			{
				Local_258.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_346();
			Function_344(&Local_258, Local_104);
			Function_341();
			Function_305(Local_104, &uLocal_318, 1, 1);
			Function_71(Function_72(Local_258, "ntwinRocks", "waterWheel01", 1), 0);
			Function_70(Function_72(Local_258, "ntwinRocks", "waterWheel01", 1), 0);
			Function_71(Function_72(Local_258, "ntwinRocks", "waterWheel01", 2), 0);
			Function_70(Function_72(Local_258, "ntwinRocks", "waterWheel01", 2), 0);
			Function_303(&Local_258, 42101);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_482 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_104);
			EVENT_TRAP_ON_VOLUME(bLocal_482, Local_104.f_156);
			iLocal_488 = (&Local_258 + 16)->f_48;
			Local_258.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_301())
			{
				Local_258.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_297(&Local_258);
			break;
	}
	return;
}

void Function_297(var uParam0) //Position: 0xA168 / 41320
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_299(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_299(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	switch (uParam0->f_16)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			uParam0->f_4 = 1;
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			Function_298();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_298() //Position: 0xA24A / 41546
{
	bLocal_92 = true;
	return;
}

void Function_299(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0xA253 / 41555
{
	if (iParam0 == Global_30668[2])
	{
		Function_300(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_300(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_300(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_300(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_300(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_300(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_300(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_300(7);
	}
}

void Function_300(int iParam0) //Position: 0xA2E8 / 41704
{
	Global_56612[iParam09].f_20 = 1;
	Global_56688[776][iParam09].f_20 = 1;
	Global_56688[776][iParam09].f_24 = 0;
	Global_56688[776][iParam09].f_8 = 0;
	Global_56688[876][iParam09].f_20 = 1;
	Global_56688[876][iParam09].f_24 = 0;
	Global_56688[876][iParam09].f_8 = 0;
	Global_56688[976][iParam09].f_20 = 1;
	Global_56688[976][iParam09].f_24 = 0;
	Global_56688[976][iParam09].f_8 = 0;
	Global_56612[iParam09].f_12 = 0;
	return;
}

bool Function_301() //Position: 0xA37D / 41853
{
	if (!IS_LAYOUTREF_VALID(bLocal_469))
	{
		bLocal_469 = CREATE_LAYOUT(Function_12());
	}
	if (!IS_OBJECT_VALID(bLocal_470))
	{
		bLocal_470 = CREATE_WORLD_SECTOR(bLocal_469, "nTwinRocks");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_470))
	{
		Function_302(bLocal_469, "pot0", Local_104.f_156);
		Function_302(bLocal_469, "bottle", Local_104.f_156);
		Function_302(bLocal_469, "debris", Local_104.f_156);
		Function_302(bLocal_469, "chair", Local_104.f_156);
		DESTROY_LAYOUT(bLocal_469);
		return 1;
	}
	return 0;
}

void Function_302(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA410 / 42000
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_12(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, bParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

void Function_303(char* cParam0, int iParam1) //Position: 0xA469 / 42089
{
	cParam0->f_96 = iParam1;
	return;
}

void Function_304(int iParam0) //Position: 0xA475 / 42101
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_TWR_Bonus"), iParam0);
	itos(&cVar0, Function_137(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

int Function_305(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0xA4B2 / 42162
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	char* cVar17[64];
	char* cVar33[64];
	bool bVar49;
	bool bVar50;
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_340()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_339()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_339(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_18(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_338(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_337(bVar14);
				vVar7 = { StackVal, StackVal, Function_337(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_336(bVar14);
				vVar10 = { StackVal, StackVal, Function_336(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_334(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_333());
							if (Function_332(bVar5))
							{
								if (Function_331((*iParam1 + 228)[bVar52]))
								{
									Function_312(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_307(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
									if (bParam2)
									{
										SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bVar16), GET_WEAPON_DISPLAY_NAME((*iParam1 + 228)[bVar52]));
									}
								}
								else
								{
									cVar33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar17 };
									stradd(&cVar33, " is using undefined pickup slot #", 64);
									stradd(&cVar33, I2STR(bVar5), 64);
									bVar49 = true;
								}
							}
							break;
						
						case 0x00000005:
							if ((iParam1 + 228)->f_224 < 0.0f)
							{
								Function_312(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_306(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_312(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
							break;
					}
					if (!bVar49)
					{
						ADD_OBJECT_TO_OBJECTSET(bVar15, bVar1);
					}
				}
			}
		}
		DESTROY_OBJECT(bVar14);
		bVar6++;
	}
	CLEAN_OBJECTSET(bVar0);
	if (GET_OBJECTSET_SIZE(bVar0) == 0)
	{
		DESTROY_OBJECTSET(bVar0);
		bVar50 = GET_LOCAL_SLOT();
		NET_SCRIPTMSG_SEND(1, 19, &bVar50, 1, 1);
		return 1;
	}
	return 0;
}

var Function_306() //Position: 0xA6E6 / 42726
{
	return "XPBonus";
}

void Function_307(bool bParam0, struct<2> Param1, var uParam3) //Position: 0xA6F6 / 42742
{
	bool bVar0;
	
	if (Function_331(Param1))
	{
		bVar0 = Function_309(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_308(), bVar0);
	}
}

var Function_308() //Position: 0xA71C / 42780
{
	return "PackedWeapon";
}

var Function_309(struct<5> Param0) //Position: 0xA731 / 42801
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_310())) || SHIFT_LEFT(bParam2, Function_310() + 8));
}

bool Function_310() //Position: 0xA74F / 42831
{
	return Function_311(39);
}

int Function_311(bool bParam0) //Position: 0xA75A / 42842
{
	float fVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		fVar0++;
	}
	return fVar0;
}

void Function_312(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xA788 / 42888
{
	Function_323(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_317(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_316(), Function_315(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_314(), Function_313(iParam13, iParam14));
}

var Function_313(var uParam0, bool bParam1) //Position: 0xA7D9 / 42969
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_314() //Position: 0xA7E9 / 42985
{
	return "PackedGrass";
}

var Function_315(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA7FD / 43005
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_316() //Position: 0xA822 / 43042
{
	return "PackedMetadata";
}

void Function_317(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xA839 / 43065
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_308(), &uVar5))
				{
					Function_321(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_320();
				vVar0 = { StackVal, StackVal, Function_320() };
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
				Function_319();
				vVar0 = { StackVal, StackVal, Function_319() };
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
				Function_318();
				vVar0 = { StackVal, StackVal, Function_318() };
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

vector3 Function_318() //Position: 0xA964 / 43364
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_319() //Position: 0xA975 / 43381
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_320() //Position: 0xA986 / 43398
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_321(var uParam0, int iParam1) //Position: 0xA997 / 43415
{
	*iParam1 = Function_322(uParam0, Function_310(), 0);
	iParam1->f_4 = Function_322(uParam0, Function_310() + 8, Function_310());
	return;
}

var Function_322(var uParam0, int iParam1, bool bParam2) //Position: 0xA9BA / 43450
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_204((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_323(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xA9D9 / 43481
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_330();
			Function_319();
			vVar1 = { StackVal, StackVal, Function_319() };
			break;
		
		case 0x00000001:
			bVar0 = Function_329();
			Function_320();
			vVar1 = { StackVal, StackVal, Function_320() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_328();
			Function_318();
			vVar1 = { StackVal, StackVal, Function_318() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_327(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_325(Function_327()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_324(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_324() //Position: 0xAADD / 43741
{
	return "MPItemGiver";
}

struct<32> Function_325(bool bParam0) //Position: 0xAAF1 / 43761
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_326("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_326(char* cParam0, char* cParam1, char* cParam2) //Position: 0xAB5B / 43867
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_327() //Position: 0xAB7A / 43898
{
	return "PBox_";
}

var Function_328() //Position: 0xAB88 / 43912
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_329() //Position: 0xABAE / 43950
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_330() //Position: 0xABD6 / 43990
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_331(int iParam0) //Position: 0xABFC / 44028
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_332(bool bParam0) //Position: 0xAC0E / 44046
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_333() //Position: 0xAC1E / 44062
{
	return "ID";
}

bool Function_334(bool bParam0, int iParam1) //Position: 0xAC29 / 44073
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_81((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_335())
			{
				return 0;
			}
			return !Function_81((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_81((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_335() //Position: 0xAC7E / 44158
{
	return Function_40(Global_79962, 1024);
}

vector3 Function_336(bool bParam0) //Position: 0xAC8E / 44174
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_337(bool bParam0) //Position: 0xACB5 / 44213
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

var Function_338() //Position: 0xACDC / 44252
{
	return "Type";
}

var Function_339() //Position: 0xACE9 / 44265
{
	return "PickupsSet";
}

var Function_340() //Position: 0xACFC / 44284
{
	return "PickupFlagsSet";
}

void Function_341() //Position: 0xAD13 / 44307
{
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "SQUAD_stage_one_guards"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "SQUAD_stage_one_snipers"));
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "SQUAD_stage_two_reinforcements"));
	Function_342(bLocal_101, Local_104.f_132, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_101, 0);
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "SQUAD_stage_three_horseback"));
	Function_342(bLocal_102, Local_104.f_132, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_102, 0);
	bLocal_103 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_104, "SQUAD_Horses"));
	return;
}

void Function_342(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xADF2 / 44530
{
	var uVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	Function_343(bParam0, 37, fParam2);
	uVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, bParam3, bParam1, 2, 1);
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam3, bParam1, iParam4);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, uVar1, uVar0);
}

void Function_343(bool bParam0, int iParam1, bool bParam2) //Position: 0xAE33 / 44595
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_344(var uParam0, bool bParam1) //Position: 0xAE7D / 44669
{
	Function_345(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	bLocal_19 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_42 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_42, 15);
	ITERATE_IN_LAYOUT(bLocal_42, bParam1);
	START_OBJECT_ITERATOR(bLocal_42);
	Global_78480.f_24 = *uParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_275(uParam0, 1);
	}
	Function_42(256);
	Function_104(64);
	Function_75(0);
	return;
}

void Function_345(var uParam0) //Position: 0xAEEE / 44782
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_346() //Position: 0xAEFC / 44796
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_348(4, 1);
	uVar0 = uVar0;
	Local_104 = CREATE_LAYOUT("TwinRocksMP_layout");
	Local_104.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_104, "vset_camp_boundaries_set");
	(*&Local_104 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_camp_wall_east", 2, -2411.939f, 27.225f, 2145.77f, 0.0f, -33.49957f, 0.0f, 11.21349f, 5.531206f, 24.30527f);
	ADD_TO_VOLUME_SET(Local_104.f_132, (*&Local_104 + 116)[0]);
	(*&Local_104 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_camp_wall_south", 2, -2433.1f, 27.225f, 2148.865f, 0.0f, -8.617216f, 0.0f, 9.716439f, 5.531206f, 14.33909f);
	ADD_TO_VOLUME_SET(Local_104.f_132, (*&Local_104 + 116)[1]);
	(*&Local_104 + 116)[2] = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_camp_wall_west", 2, -2433.432f, 26.27127f, 2124.222f, 0.0f, -8.617216f, 0.0f, 8.261333f, 5.531206f, 12.20934f);
	ADD_TO_VOLUME_SET(Local_104.f_132, (*&Local_104 + 116)[2]);
	Local_104.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_104, "vset_sniper_positions_set");
	(*&Local_104 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_camp_roof", 2, -2420.612f, 32.30972f, 2126.215f, 0.0f, -35.42813f, 0.0f, 3.925121f, 4.330785f, 3.648563f);
	ADD_TO_VOLUME_SET(Local_104.f_152, (*&Local_104 + 136)[0]);
	(*&Local_104 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_camp_rock_01", 2, -2412.931f, 35.71606f, 2172.031f, 0.0f, -351.0439f, 0.0f, 3.238135f, 4.330785f, 3.591834f);
	ADD_TO_VOLUME_SET(Local_104.f_152, (*&Local_104 + 136)[1]);
	(*&Local_104 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_camp_rock_02", 2, -2450.657f, 35.18782f, 2128.214f, 0.0f, -351.0439f, 0.0f, 3.238135f, 4.330785f, 3.591834f);
	ADD_TO_VOLUME_SET(Local_104.f_152, (*&Local_104 + 136)[2]);
	Local_104.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_104, "v_Clear_Vol", 2, -2422.587f, 27.5147f, 2140.119f, 0.0f, 298.4275f, 0.0f, 74.24721f, 18.90813f, 67.85725f);
	Local_104.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_104, "SpawnVol_0_set");
	(*&Local_104 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_0_sub_0", 2, -2348.029f, 36.00969f, 2168.135f, 0.0f, -87.99739f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
	ADD_TO_VOLUME_SET(Local_104.f_176, (*&Local_104 + 160)[0]);
	(*&Local_104 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_0_sub_1", 2, -2353.322f, 42.78277f, 2189.833f, 0.0f, -126.5316f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
	ADD_TO_VOLUME_SET(Local_104.f_176, (*&Local_104 + 160)[1]);
	(*&Local_104 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_0_sub_2", 2, -2346.557f, 41.64037f, 2137.88f, 0.0f, -98.02499f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
	ADD_TO_VOLUME_SET(Local_104.f_176, (*&Local_104 + 160)[2]);
	Local_104.f_192 = CREATE_VOLUME_SET_IN_LAYOUT(Local_104, "SpawnVol_1_set");
	(*&Local_104 + 180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_1_sub_0", 2, -2420.108f, 26.16451f, 2127.849f, 0.0f, 321.7123f, 0.0f, 3.87279f, 3.87279f, 3.87279f);
	ADD_TO_VOLUME_SET(Local_104.f_192, (*&Local_104 + 180)[0]);
	(*&Local_104 + 180)[1] = CREATE_VOLUME_IN_LAYOUT(Local_104, "spawnVol_1_sub_1", 2, -2424.87f, 26.16451f, 2121.466f, 0.0f, 412.2403f, 0.0f, 3.234763f, 3.234763f, 1.828287f);
	ADD_TO_VOLUME_SET(Local_104.f_192, (*&Local_104 + 180)[1]);
	*(&Local_104 + 196) = { -2416.0f, 25.95819f, 2132f };
	*(&Local_104 + 196 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 220) = { -2440f, 24.09419f, 2144f };
	*(&Local_104 + 220 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 244) = { -2424f, 24.59612f, 2152f };
	*(&Local_104 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 268) = { -2428f, 25.35552f, 2124f };
	*(&Local_104 + 268 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 292) = { -2437.83f, 24.3181f, 2135.008f };
	*(&Local_104 + 292 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 316) = { -2426.993f, 24.00165f, 2162.182f };
	*(&Local_104 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 340) = { -2412f, 25.60009f, 2148f };
	*(&Local_104 + 340 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 364) = { -2436f, 24.59611f, 2124f };
	*(&Local_104 + 364 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 388) = { -2400f, 27.86119f, 2096f };
	*(&Local_104 + 388 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 412) = { -2352.955f, 42.58049f, 2192.159f };
	*(&Local_104 + 412 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 436) = { -2512f, 24.59609f, 2148f };
	*(&Local_104 + 436 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 460) = { -2448.02f, 22.56768f, 2208.009f };
	*(&Local_104 + 460 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_104 + 484) = { -2426.006f, 25.26935f, 2134.308f };
	*(&Local_104 + 484 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_104.f_508 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_104, 8, 0);
	*(&Local_104 + 512[06]) = { -2426.742f, 26.69297f, 2120.457f };
	*(&Local_104 + 512[06] + 12) = { 0.0f, -325.2687f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_104, "f_Weapon_Pickup", -2426.742f, 26.69297f, 2120.457f, 0.0f, -325.2687f, 0.0f);
	Function_347(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_104.f_508);
	*(&Local_104 + 512[16]) = { -2435.252f, 24.69001f, 2124.0f };
	*(&Local_104 + 512[16] + 12) = { 0.0f, 15.76353f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_104, "f_Ammo_Pickup", -2435.252f, 24.69001f, 2124.0f, 0.0f, 15.76353f, 0.0f);
	Function_347(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_104.f_508);
	*(&Local_104 + 512[26]) = { -2413.022f, 25.99511f, 2127.062f };
	*(&Local_104 + 512[26] + 12) = { 0.0f, -298.0273f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_104, "f_Ammo_Pickup1", -2413.022f, 25.99511f, 2127.062f, 0.0f, -298.0273f, 0.0f);
	Function_347(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_104.f_508);
	*(&Local_104 + 588) = { -2421.732f, 22.93318f, 2247.928f };
	*(&Local_104 + 588 + 12) = { 0.0f, 2.984913f, 0.0f };
}

void Function_347(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB7D9 / 47065
{
	DECOR_SET_INT(iParam0, Function_338(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_333(), bParam2);
	}
	return;
}

void Function_348(int iParam0, int iParam1) //Position: 0xB7FD / 47101
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

int Function_349(int iParam0) //Position: 0xB846 / 47174
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_356(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_355();
			Function_380(&iLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_354())
			{
				iLocal_98 = 2;
			}
			else if (Function_350(&iLocal_45))
			{
				Function_355();
				Function_381(&iLocal_45, 5.0f);
			}
			break;
		
		case 0x00000002:
			if (iParam0->f_16 != 4294967295)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_350(int iParam0) //Position: 0xB8F2 / 47346
{
	if (Function_352(iParam0))
	{
		Function_351(iParam0);
		return 1;
	}
	return 0;
}

void Function_351(int iParam0) //Position: 0xB908 / 47368
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_352(int iParam0) //Position: 0xB91C / 47388
{
	if (Function_67(iParam0))
	{
		if (Function_353(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_353(int iParam0) //Position: 0xB937 / 47415
{
	return -Function_63(iParam0);
}

bool Function_354() //Position: 0xB943 / 47427
{
	return iLocal_20;
}

void Function_355() //Position: 0xB94B / 47435
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_356(bool bParam0) //Position: 0xB977 / 47479
{
	struct<17> Var0;
	
	Function_61(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (bParam0)
	{
		Function_35(&Var0, 4);
	}
	Function_54(&Var0);
	Function_55();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 47561);
	return;
}

void Function_357(bool bParam0) //Position: 0xB9C9 / 47561
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	Function_61(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, true, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_62(&iVar7);
	if (Function_117(&Var2))
	{
	}
	bVar8 = Function_108(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_116(&Var2, 1);
	Function_54(&Var2);
	return;
}

int Function_358() //Position: 0xBACC / 47820
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_359(&Local_104 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_25810].f_32))
		{
			return 0;
		}
		if (!Function_359(&iLocal_286))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_359(int iParam0) //Position: 0xBB06 / 47878
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_364();
	iVar1 = 0;
	if (!Function_88(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_363(iParam0[iVar03], 8);
		}
		else if (Function_362())
		{
			iVar1 = 1;
			Function_363(iParam0[iVar03], 8);
		}
		Function_363(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_88(iParam0[iVar03], 4))
		{
			if (!Function_88(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_88(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_88(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_363(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_88(iParam0[iVar03], 4))
		{
			if (!Function_88(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_363(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_360();
	return 1;
}

void Function_360() //Position: 0xBE81 / 48769
{
	if (!Function_361(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_361(int iParam0) //Position: 0xBEC1 / 48833
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_362() //Position: 0xBEDD / 48861
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_363(var uParam0, int iParam1) //Position: 0xBF08 / 48904
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_364() //Position: 0xBF19 / 48921
{
	if (!Function_361(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_365(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBF5B / 48987
{
	Function_366(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_366(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBF72 / 49010
{
	if (!Function_332(iParam1))
	{
		return;
	}
	Function_367(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_367(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBF95 / 49045
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

void Function_368(int iParam0, bool bParam1) //Position: 0xBFBF / 49087
{
	Function_372(iParam0);
	Function_372(iParam0 + 228);
	if (bParam1)
	{
		Function_369(iParam0);
	}
	return;
}

void Function_369(var uParam0) //Position: 0xBFDB / 49115
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_370(uParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_370(var uParam0, int iParam1) //Position: 0xC000 / 49152
{
	Function_371(uParam0, iParam1, 0);
	return;
}

void Function_371(int iParam0, int iParam1, int iParam2) //Position: 0xC00E / 49166
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_372(int iParam0) //Position: 0xC01F / 49183
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_374(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_373(iParam0, 0.0f);
	return;
}

void Function_373(var uParam0, int iParam1) //Position: 0xC04C / 49228
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_374(var uParam0) //Position: 0xC058 / 49240
{
	Function_367(uParam0, 4294967295, 0, 1);
	return;
}

void Function_375() //Position: 0xC066 / 49254
{
	Function_376(&Local_104 + 4, 486, 2, 1);
	Function_376(&Local_104 + 4, 492, 2, 1);
	Function_376(&Local_104 + 4, 487, 2, 1);
	Function_376(&Local_104 + 4, 488, 2, 1);
	Function_376(&Local_104 + 4, 491, 2, 1);
	Function_376(&Local_104 + 4, 489, 2, 1);
	Function_376(&Local_104 + 4, 490, 2, 1);
	Function_376(&Local_104 + 4, 493, 2, 1);
	return;
}

var Function_376(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC0D4 / 49364
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_88(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_363(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_363(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_377() //Position: 0xC1A4 / 49572
{
	Function_378(&iLocal_286, "mp_action_areas", 10, 0);
	Function_376(&iLocal_286, 486, 2, 0);
	Function_376(&iLocal_286, 487, 2, 0);
	Function_376(&iLocal_286, 488, 2, 0);
	Function_376(&iLocal_286, 489, 2, 0);
	Function_376(&iLocal_286, 490, 2, 0);
	Function_376(&iLocal_286, 491, 2, 0);
	Function_376(&iLocal_286, 492, 2, 0);
	Function_376(&iLocal_286, 493, 2, 0);
	return;
}

var Function_378(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC226 / 49702
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_379(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_363(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_379(var uParam0, int iParam1, int iParam2) //Position: 0xC25E / 49758
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_88(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_363(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_380(int iParam0, float fParam1) //Position: 0xC322 / 49954
{
	if (!Function_67(iParam0))
	{
		Function_381(iParam0, fParam1);
	}
	return;
}

void Function_381(int iParam0, float fParam1) //Position: 0xC338 / 49976
{
	Function_290(iParam0, -fParam1);
	return;
}

void Function_382(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xC346 / 49990
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_383(uParam4);
		if (0 == iVar0)
		{
			Function_68(uParam0, uParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_68(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_68(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_383(float fParam0) //Position: 0xC38C / 50060
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_41())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_41())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

bool Function_384(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xC3C0 / 50112
{
	if (!Function_426())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_226(38) <= 10 && NET_GET_PLAYMODE() != 0)
		{
			AWARD_ACHIEVEMENT(41);
		}
	}
	if (!uParam0->f_104 && GET_PLAYER_COMBATMODE() != 2)
	{
		uParam0->f_104 = 1;
	}
	if (bParam3)
	{
		Function_421();
	}
	Function_419(3);
	Function_418();
	if (StackVal != 0)
	{
		Function_416(bLocal_41, *uParam1, uParam2, 1);
		Function_415(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_412(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_397(54010, 53358);
			break;
		
		case 0x00000002:
			Function_397(50735, 50311);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_385(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xC487 / 50311
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_389(bParam1, uParam2, uParam3);
		bVar0 = Function_388(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_386(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_388(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_388(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_388(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_134(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_386(bool bParam0, bool bParam1, int iParam2) //Position: 0xC52A / 50474
{
	var uVar0;
	
	return Function_387(bParam0, bParam1, &uVar0, iParam2);
}

int Function_387(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC53B / 50491
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

int Function_388(int iParam0, bool bParam1) //Position: 0xC5A0 / 50592
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_226(iParam0);
	}
	if (!Function_136(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_389(bool bParam0, int iParam1, bool bParam2) //Position: 0xC60E / 50702
{
	if (bParam0)
	{
		if (Function_126())
		{
			NET_PLAYER_LIST_ADD_ITEM(bParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_390() //Position: 0xC62F / 50735
{
	if (!Function_391(1))
	{
		return 0;
	}
	if (Function_39(4096) || Function_39(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_33(8192, 1, 1);
	}
	else
	{
		Function_33(8192, 0, 1);
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_assists");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_defends");
	NET_PLAYER_LIST_SET_HEADER(6, "mp_plist_score");
	return 1;
}

bool Function_391(bool bParam0) //Position: 0xC6EB / 50923
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_126() || Function_396(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_394(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_126())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_392(Function_126());
	return 1;
}

void Function_392(bool bParam0) //Position: 0xC76C / 51052
{
	if (bParam0 || Function_39(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_39(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_39(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_39(1048576) || Function_39(4)) || Function_393(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_33(0x20000000, 0, 1);
	}
	return;
}

var Function_393(int iParam0, bool bParam1) //Position: 0xC7F5 / 51189
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_394(var uParam0) //Position: 0xC815 / 51221
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_395(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_395(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xC829 / 51241
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_396(bool bParam0, bool bParam1) //Position: 0xC86E / 51310
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

void Function_397(int iParam0, int iParam1) //Position: 0xC8A2 / 51362
{
	Function_398(iParam0, iParam1, 53351);
	return;
}

void Function_398(var uParam0, var uParam1, int iParam2) //Position: 0xC8B3 / 51379
{
	if (Function_39(0x4000000))
	{
		Function_37();
		Function_33(0x4000000, 0, 1);
	}
	if (Function_39(0x10000000))
	{
		Function_37();
		Function_33(0x10000000, 0, 1);
	}
	if (Function_39(2) != Function_39(0x2000000))
	{
		Function_37();
		Function_33(0x2000000, Function_39(2), 1);
	}
	if (Function_126())
	{
		Function_142(!Function_39(16));
	}
	if (Function_39(16))
	{
		Function_400(&uParam0, &uParam1, &iParam2);
		if (Function_39(8192))
		{
			if (!Function_39(4194304))
			{
				Function_33(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_39(8388608))
			{
				Function_33(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_399();
		}
		Function_33(16384, 1, 1);
	}
	else if (!Function_39(32))
	{
		Function_399();
	}
	Function_33(32768, 0, 1);
	return;
}

void Function_399() //Position: 0xCA4C / 51788
{
	if (Function_39(4194304))
	{
		Function_33(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_39(8388608))
	{
		Function_33(8388608, 0, 1);
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

void Function_400(var uParam0, var uParam1, int iParam2) //Position: 0xCB55 / 52053
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_33(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_39(0x40000000);
	bVar3 = !Function_39(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_136(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_401(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_386(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_39(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_386(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_401(bool bParam0, int iParam1, bool bParam2) //Position: 0xCCCD / 52429
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_393(iParam1, bParam2);
	}
	if (!Function_136(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_402(iParam1), 64);
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

var Function_402(int iParam0) //Position: 0xCD4E / 52558
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

int Function_403() //Position: 0xD067 / 53351
{
	return 1;
}

int Function_404(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD06E / 53358
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[32];
	bool bVar15;
	struct<8> Var16;
	bool bVar24;
	
	Function_389(bParam1, iParam2, bParam3);
	iVar0 = Function_408(bParam0);
	iVar2 = NET_GET_GAMER_POSSE_SIZE(bParam0);
	bVar3 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar4 = (iVar2 < 1 && bVar3 != bParam0);
	if (bLocal_16)
	{
		bVar1 = (iVar2 * 10000000);
		iVar5 = 16;
		if (iVar2 >= 1)
		{
			iVar5 = (16 - bVar3) * 10;
			if (bVar4)
			{
				iVar5++;
			}
		}
		bVar1 = (bVar1 + iVar5 * 10000);
		bVar1 = (bVar1 + Function_18((CEIL(Function_407(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_407(8, bParam0));
	}
	if (!bParam1)
	{
		Function_386(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_406(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_406(1) == Function_408(bParam0))
		{
			if (Function_401(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_407(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_407(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_405(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_405(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_407(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_405(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_405(&iVar6), FLOOR(Function_407(9, bParam0)));
		}
		else
		{
			Function_405(&iVar6);
		}
	}
	if (Function_401(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_405(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_405(int iParam0) //Position: 0xD22F / 53807
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_406(int iParam0) //Position: 0xD242 / 53826
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_407(int iParam0, bool bParam1) //Position: 0xD262 / 53858
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_27(iParam0);
	}
	if (!Function_136(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_408(bool bParam0) //Position: 0xD2CB / 53963
{
	if (!Function_136(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_409();
	}
	return Global_76943[bParam096];
}

var Function_409() //Position: 0xD2F0 / 54000
{
	return Global_78480;
}

int Function_410() //Position: 0xD2FA / 54010
{
	bool bVar0;
	int iVar1;
	
	if (!Function_391(1))
	{
		return 0;
	}
	bVar0 = false;
	bLocal_16 = false;
	while (bVar0 > 16 && !bLocal_16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bLocal_16 = NET_GET_GAMER_POSSE_SIZE(bVar0) < 1;
		}
		bVar0++;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	iVar1 = 2;
	if (Function_406(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_405(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_405(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_405(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_405(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_405(&iVar1), "mp_plist_mw");
	Function_411();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_405(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_411() //Position: 0xD41D / 54301
{
	if (Function_39(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_33(8192, 1, 1);
	}
	else if (Function_39(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_33(8192, 1, 1);
	}
	else
	{
		Function_33(8192, 0, 1);
	}
	return;
}

void Function_412(int iParam0) //Position: 0xD45A / 54362
{
	int iVar0;
	int iVar1;
	
	if (!NET_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	iParam0->f_16 = StackVal;
	(iParam0 + 16)->f_4 = StackVal;
	(iParam0 + 16)->f_24 = iLocal_21;
	if (iVar0 >= (iParam0 + 16)->f_20)
	{
		(iParam0 + 16)->f_20 = iVar0;
	}
	if (iLocal_18)
	{
		Function_414(&bLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_413(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_413(int iParam0) //Position: 0xD4D3 / 54483
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_414(int iParam0) //Position: 0xD4FE / 54526
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_415(var uParam0, bool bParam1) //Position: 0xD545 / 54597
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	if (!IS_ITERATOR_VALID(bLocal_42))
	{
		return;
	}
	bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_42);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_ACTORSET(bLocal_19, bVar1))
			{
				bVar2 = StackVal;
				if (IS_VOLUME_VALID(bVar2))
				{
					if (!IS_ACTOR_IN_VOLUME(bVar1, bVar2))
					{
						if (!DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
						{
							Function_103(bVar1);
							vVar3 = { StackVal, StackVal, Function_103(bVar1) };
							DECOR_SET_FLOAT(bVar1, "out_of_bounds_time", GET_CURRENT_GAME_TIME());
						}
						else if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(bVar1, "out_of_bounds_time") + fLocal_44))
						{
							bVar6 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar6))
							{
								REMOVE_BLIP(bVar6);
							}
							if (bParam1)
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
							}
							REMOVE_ACTORSET_MEMBER(bLocal_19, bVar1);
							SQUAD_LEAVE(bVar1);
							TASK_FLEE_ACTORSET(bVar1, Global_78576, -1.0f, -1.0f, 0, 0, 0);
							RELEASE_ACTOR(bVar1);
						}
					}
					else if (DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
					{
						DECOR_REMOVE(bVar1, "out_of_bounds_time");
					}
				}
			}
		}
		OBJECT_ITERATOR_NEXT(bLocal_42);
	}
	else
	{
		START_OBJECT_ITERATOR(bLocal_42);
	}
	return;
}

int Function_416(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xD690 / 54928
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (!IS_LAYOUTREF_VALID(bParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(bVar1, bParam0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar2);
			bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar5);
			bVar4 = GET_EVENT_PERPETRATOR(bVar5);
			bVar6 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (bParam3)
					{
						if (Function_417(bVar4) == bParam1)
						{
							Stack.Push(bVar6);
							Call_Loc(uParam2);
						}
					}
					else
					{
						Stack.Push(bVar6);
						Call_Loc(uParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		DESTROY_ITERATOR(bVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_417(bool bParam0) //Position: 0xD772 / 55154
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

void Function_418() //Position: 0xD7CC / 55244
{
	Function_419(4);
	return;
}

void Function_419(int iParam0) //Position: 0xD7D6 / 55254
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
			Function_420(iParam0);
		}
	}
	return;
}

void Function_420(bool bParam0) //Position: 0xD808 / 55304
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_421() //Position: 0xD817 / 55319
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				if (Function_423(bVar0, bLocal_19, 1, 0, 0, -1.0f))
				{
					Function_422();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_422() //Position: 0xD84C / 55372
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_423(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xD865 / 55397
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_425(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	if (bLocal_48 > GET_ACTORSET_SIZE(bParam1))
	{
		bLocal_48 = false;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, bLocal_48);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_424(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_424(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xD8CE / 55502
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_425(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD9BB / 55739
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					bVar3 = true;
					if (bParam1)
					{
						if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
						{
							bVar3 = false;
						}
					}
					if (bParam2)
					{
						if (IS_ACTOR_HOGTIED(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bParam3)
					{
						if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
						{
							bVar3 = false;
						}
					}
					if (bParam4)
					{
						bParam4 = bParam4;
					}
					if (bParam5)
					{
						if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bVar3)
					{
						iVar0++;
					}
				}
			}
			bVar2++;
		}
	}
	return iVar0;
}

bool Function_426() //Position: 0xDA69 / 55913
{
	int iVar0;
	
	if (!Function_28())
	{
		return 0;
	}
	iVar0 = NET_GET_SCRIPT_STATUS();
	if (iVar0 != 0 || iVar0 != 3)
	{
		return 0;
	}
	return 1;
}

void Function_427(bool bParam0) //Position: 0xDA8C / 55948
{
	bool bVar0;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (Function_428(bParam0))
	{
		Function_242(bParam0, bVar0);
		if (bVar0 == 1)
		{
			SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
			ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_104.f_156);
		}
	}
	return;
}

bool Function_428(bool bParam0) //Position: 0xDAC2 / 56002
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_429(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_19, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_19, bParam0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			bVar0 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
			SET_BLIP_MAX_DISTANCE(bVar0, 3.0f);
		}
		return 1;
	}
	return 0;
}

bool Function_429(bool bParam0) //Position: 0xDB0F / 56079
{
	if (IS_ACTOR_HORSE(bParam0) || IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam0) && NET_ACTOR_GET_SCRIPT_INT(bParam0) > 100)
	{
		return 1;
	}
	return 0;
}

bool Function_430(int iParam0) //Position: 0xDB3C / 56124
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*iParam0 != 4294967294)
	{
		bVar0 = StackVal;
		if (IS_VOLUME_VALID(bVar0))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		}
	}
	Function_55();
	if (!Function_445(16, 0))
	{
		return 0;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	iParam0->f_4 = 0;
	iParam0->f_8 = 0;
	iParam0->f_104 = 0;
	iParam0->f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	iParam0->f_16 = 4294967295;
	(iParam0 + 16)->f_4 = 0;
	(iParam0 + 16)->f_24 = 0;
	(iParam0 + 16)->f_28 = 2;
	(iParam0 + 16)->f_32 = 0;
	(iParam0 + 16)->f_36 = 0;
	(iParam0 + 16)->f_48 = 0;
	(iParam0 + 16)->f_68 = 0.0f;
	Function_289(iParam0 + 16 + 8);
	Function_303(iParam0, 57188);
	iVar1 = 0;
	while (iVar1 <= Local_51)
	{
		Local_51[iVar12] = 4294967295;
		Local_51[iVar12].f_4 = 2;
		iVar1++;
	}
	Local_49 = 4294967295;
	Local_49.f_4 = 2;
	iVar2 = 0;
	while (iVar2 <= iLocal_23)
	{
		iLocal_23[iVar2] = 4294967295;
		iVar2++;
	}
	Function_436(2);
	Function_435(1);
	iVar3 = 56560;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 56441);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 56402);
	return 1;
}

void Function_431(bool bParam0) //Position: 0xDC52 / 56402
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT() && !iLocal_21)
	{
		if (iVar0 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			iLocal_21 = 1;
		}
	}
	return;
}

void Function_432(bool bParam0) //Position: 0xDC79 / 56441
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	if (Var0.f_12 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
	{
		if (Var0 == 1)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (StackVal == NET_GET_HOST_OF_THIS_SCRIPT())
				{
					iLocal_20 = 1;
				}
			}
		}
		else if (Var0 == 0)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					if (IS_SLOT_VALID(StackVal))
					{
						iLocal_23[StackVal] = StackVal;
					}
				}
			}
		}
	}
	return;
}

void Function_433(bool bParam0) //Position: 0xDCF0 / 56560
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal || (StackVal != STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()) && Var0.f_12 != Global_29006))
	{
		if (IS_SLOT_VALID(bVar4))
		{
			bVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				Function_434(&bLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_434(var uParam0, int iParam1) //Position: 0xDD3D / 56637
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(*uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(*uParam0))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			MEMORY_IDENTIFY(bVar0, *iParam1);
			MEMORY_CONSIDER_AS_ENEMY(bVar0, *iParam1);
		}
		bVar1++;
	}
	return;
}

void Function_435(int iParam0) //Position: 0xDD92 / 56722
{
	Function_43(&Global_83864 + 1252, iParam0);
	return;
}

void Function_436(int iParam0) //Position: 0xDDA4 / 56740
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_172();
	Function_173();
	switch (iParam0)
	{
		case 0x00000001:
			Function_42(12288);
			Function_51(16384);
			break;
		
		case 0x00000002:
			Function_42(20480);
			Function_51(8192);
			break;
		
		default:
			Function_51(28672);
			break;
	}
	Function_51(2048);
	Function_438(0, 0);
	Function_437();
	return;
}

void Function_437() //Position: 0xDE68 / 56936
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_438(bool bParam0, bool bParam1) //Position: 0xDE81 / 56961
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_443(&Global_78480);
	Function_442(&Global_78480);
	uVar0 = Function_226(37);
	Function_440();
	if (!bParam0)
	{
		Function_222(37, uVar0);
	}
	Function_98(18264, 0);
	Function_439();
	return;
}

void Function_439() //Position: 0xDECD / 57037
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_440() //Position: 0xDEEC / 57068
{
	Function_441(&Global_78480 + 220);
	return;
}

void Function_441(int iParam0) //Position: 0xDEFB / 57083
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_442(int iParam0) //Position: 0xDF1C / 57116
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_443(int iParam0) //Position: 0xDF40 / 57152
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_444(var uParam0) //Position: 0xDF64 / 57188
{
	uParam0 = uParam0;
	return;
}

bool Function_445(var uParam0, bool bParam1) //Position: 0xDF6E / 57198
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_446("freemodetest");
	while (iVar1 == 2 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
		if (bVar2)
		{
			DRAW_STRING_CURRENT_FONT(0.05f, 0.05f, "Registering Net Script...", 1.0f, 1.0f, 1.0f, 1.0f);
		}
		if (NET_IS_IN_SESSION())
		{
			if (iVar1 == 0)
			{
				NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(uParam0);
			}
			else if (GET_CURRENT_GAME_TIME() < (fVar0 + 10.0f) && bParam1)
			{
				return 0;
			}
			if (iVar1 != 4 || iVar1 != 5)
			{
				if (bParam1)
				{
					return 0;
				}
				NET_UNREGISTER_AS_NET_SCRIPT();
			}
			iVar1 = NET_GET_SCRIPT_STATUS();
		}
	}
	return 1;
}

int Function_446(bool bParam0) //Position: 0xE021 / 57377
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

