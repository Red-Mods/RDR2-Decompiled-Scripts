//Decompiled with MagicRDR v1.0
//Function Count : 436
//Statics Count : 488
//Natives Count : 437
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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	float fLocal_43 = 0.0f;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	bool bLocal_47 = false;
	struct<5> Local_48 = { 0, 0, 16, 0, 0 } ;
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
	struct<5> Local_83 = { 0, 0, 0, 0, 0 } ;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = false;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	struct<509> Local_103 = { 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	iLocal_16 = 0;
	fLocal_43 = 60.0f;
	iLocal_90 = 0;
	bLocal_91 = false;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	vLocal_459 = { -2429,903f, 24,64f, 2141,453f };
	iLocal_466 = 0;
	bLocal_467 = true;
	bLocal_476 = false;
	iLocal_487 = 0;
	Local_257 = Global_30640[2];
	if (!Function_419(&Local_257))
	{
		TERMINATE_THIS_SCRIPT();
	}
	iLocal_483 = 0;
	while (!IS_EXITFLAG_SET() && Function_86())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x9A / 154
{
	Function_82(&iLocal_285);
	Function_71(Local_103);
	Function_70();
	CLOSE_DOOR_FAST(Function_69(Local_257, "ntwinRocks", "waterWheel01", 1));
	Function_68(Function_69(Local_257, "ntwinRocks", "waterWheel01", 1), 0);
	Function_67(Function_69(Local_257, "ntwinRocks", "waterWheel01", 1), 0);
	CLOSE_DOOR_FAST(Function_69(Local_257, "ntwinRocks", "waterWheel01", 2));
	Function_68(Function_69(Local_257, "ntwinRocks", "waterWheel01", 2), 0);
	Function_67(Function_69(Local_257, "ntwinRocks", "waterWheel01", 2), 0);
	if (IS_ACTOR_VALID(bLocal_462))
	{
		DESTROY_ACTOR(bLocal_462);
	}
	Function_65(&uLocal_477, 1, 0, 4294967295, 4294967295);
	Function_2(&Local_257);
	return;
}

void Function_2(int iParam0) //Position: 0x1AF / 431
{
	var uVar0;
	bool bVar16;
	
	PLAYSTAT_MP_DEED_COMPLETE_EX(GET_SHORT_SCRIPT_NAME(), CEIL(Function_60(iParam0 + 16 + 8)), NET_SCRIPT_GET_NUM_PARTICIPANTS(), iParam0->f_92);
	RELEASE_LAYOUT_REF(bLocal_39);
	Function_50();
	Function_49();
	HUD_CLEAR_OBJECTIVE();
	if (!Global_3403)
	{
		UI_EXIT("XpHud");
	}
	UI_EXIT("MpLinearSuppressor");
	Function_48(256);
	Function_48(4096);
	Function_47(64);
	Function_46(1);
	Function_44(8);
	if (*iParam0 != 4294967294)
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(*iParam0), 16);
		Function_41("net_player_left_region", UI_GET_STRING(&uVar0));
		bVar16 = StackVal;
		if (IS_VOLUME_VALID(bVar16))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar16);
		}
	}
	Global_78480.f_24 = 4294967294;
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	NET_UNREGISTER_AS_NET_SCRIPT();
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x286 / 646
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x298 / 664
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x2A4 / 676
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_89);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
	}
	return;
}

void Function_6() //Position: 0x2C4 / 708
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x2F9 / 761
{
	Function_39(131072);
	HUD_ENABLE(true);
	UI_INCLUDE("nMP_Ticker");
	UI_INCLUDE("WeaponAmmo");
	if (IS_WEAPON_DRAWN(Function_38()))
	{
		UI_ENTER("WeaponAmmo");
	}
	UI_UNFOCUS("HudGamerList");
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	Function_6();
	if (iLocal_90)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_90 = 0;
	}
	if (Function_35())
	{
		Function_33();
		Function_29();
		Function_28();
	}
	NET_PLAYER_LIST_RESET();
	if (iLocal_94)
	{
		iLocal_94 = 0;
		Function_8(TO_FLOAT(iParam0->f_92), "XP_AA_complete");
	}
	Function_46(1);
	Function_44(8);
	iLocal_16 = 3;
	return;
}

int Function_8(float fParam0, int iParam1) //Position: 0x3B3 / 947
{
	if (!Function_25())
	{
		Global_83822 = 1;
	}
	Function_9(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x3D4 / 980
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x3F0 / 1008
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x610 / 1552
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

var Function_12() //Position: 0xC3D / 3133
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xC45 / 3141
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xC56 / 3158
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

struct<32> Function_15(char* cParam0, char* cParam1) //Position: 0xD4B / 3403
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xD64 / 3428
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xDC9 / 3529
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0xDDB / 3547
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xDED / 3565
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

int Function_20(int iParam0) //Position: 0xF1D / 3869
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xF2C / 3884
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xF65 / 3941
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xFA2 / 4002
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x113C / 4412
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

bool Function_25() //Position: 0x1356 / 4950
{
	if (Function_27())
	{
		return (Function_26() != 1 || Function_26() != 0);
	}
	return 0;
}

int Function_26() //Position: 0x136F / 4975
{
	return Global_79349.f_16;
}

bool Function_27() //Position: 0x137B / 4987
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_28() //Position: 0x1384 / 4996
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		bLocal_89 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_replay", true, 15, false, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
	{
		bLocal_88 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_skip", true, 13, false, 0, 0, 0, 4294967295, 0);
	}
	return;
}

void Function_29() //Position: 0x13DE / 5086
{
	Function_30(1024, 0, 1);
	Function_30(1, 0, 0);
	return;
}

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x13F2 / 5106
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_32(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_31(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_31(int iParam0, int iParam1) //Position: 0x141A / 5146
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_32(int iParam0, int iParam1) //Position: 0x142D / 5165
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_33() //Position: 0x143C / 5180
{
	if (Function_35())
	{
		Function_34();
	}
	Function_30(4096, 0, 1);
	return;
}

void Function_34() //Position: 0x1453 / 5203
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_35() //Position: 0x1462 / 5218
{
	return (Function_36(4096) || Function_36(4));
}

bool Function_36(bool bParam0) //Position: 0x1473 / 5235
{
	return Function_37(Global_76905.f_132, bParam0);
}

bool Function_37(var uParam0, bool bParam1) //Position: 0x1484 / 5252
{
	return (uParam0 && bParam1) == 0;
}

var Function_38() //Position: 0x1491 / 5265
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_39(int iParam0) //Position: 0x14A6 / 5286
{
	Function_40(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x14FF / 5375
{
	Function_32(uParam0, iParam1);
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x150C / 5388
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_42(int iParam0) //Position: 0x1521 / 5409
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_43(iParam0))
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

bool Function_43(int iParam0) //Position: 0x15DE / 5598
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x15F4 / 5620
{
	Function_45(&Global_79338, iParam0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1603 / 5635
{
	Function_31(uParam0, iParam1);
	return;
}

void Function_46(int iParam0) //Position: 0x1610 / 5648
{
	Function_45(&Global_83864 + 1252, iParam0);
	return;
}

void Function_47(int iParam0) //Position: 0x1622 / 5666
{
	Function_45(&Global_78617 + 52, iParam0);
	return;
}

void Function_48(int iParam0) //Position: 0x1633 / 5683
{
	Function_45(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_49() //Position: 0x166C / 5740
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_50() //Position: 0x1683 / 5763
{
	struct<17> Var0;
	
	Function_52();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_51(&Var0);
	return;
}

void Function_51(int iParam0) //Position: 0x16A5 / 5797
{
	Local_83 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_52() //Position: 0x16B3 / 5811
{
	Function_53();
	return;
}

void Function_53() //Position: 0x16BC / 5820
{
	Function_54(4294967286);
	return;
}

void Function_54(bool bParam0) //Position: 0x16C8 / 5832
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_59(&uVar0);
		Function_58(&vVar1);
		vVar1.z = uVar0;
		Function_51(&vVar1);
	}
	Function_57(&uVar0, bParam0);
	Function_56(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_55(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x1705 / 5893
{
	Local_50[iParam12] = *uParam0;
	return;
}

void Function_56(int iParam0) //Position: 0x1714 / 5908
{
	Local_48 = *iParam0;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x171F / 5919
{
	*uParam0 = iParam1;
	return;
}

void Function_58(int iParam0) //Position: 0x172A / 5930
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_83 };
	return;
}

void Function_59(int iParam0) //Position: 0x1738 / 5944
{
	*iParam0 = Local_48;
	return;
}

float Function_60(int iParam0) //Position: 0x1743 / 5955
{
	if (Function_64(iParam0))
	{
		if (Function_63(iParam0))
		{
			return StackVal;
		}
		Function_61();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_61() //Position: 0x1814 / 6164
{
	if (!Function_62())
	{
	}
	return;
}

bool Function_62() //Position: 0x1821 / 6177
{
	return NET_IS_IN_SESSION();
}

bool Function_63(int iParam0) //Position: 0x182A / 6186
{
	return Function_37(*iParam0, 2);
}

bool Function_64(int iParam0) //Position: 0x1837 / 6199
{
	return Function_37(*iParam0, 1);
}

void Function_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1844 / 6212
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_66(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_66(int iParam0) //Position: 0x1868 / 6248
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

void Function_67(bool bParam0, bool bParam1) //Position: 0x1DA5 / 7589
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

void Function_68(bool bParam0, bool bParam1) //Position: 0x1DDF / 7647
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

bool Function_69(int iParam0, int iParam1, char* cParam2, int iParam3) //Position: 0x1E33 / 7731
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_43(iParam0))
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

void Function_70() //Position: 0x1ECF / 7887
{
	Function_82(&Local_103 + 4);
	RELEASE_LAYOUT_REF(Local_103);
	return;
}

void Function_71(int iParam0) //Position: 0x1EE1 / 7905
{
	if (IS_ACTORSET_VALID(bLocal_18))
	{
		Function_81(bLocal_18);
	}
	Function_79(iParam0);
	Function_72(1);
	return;
}

void Function_72(bool bParam0) //Position: 0x1EFD / 7933
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_78(1);
	}
	else
	{
		Function_77(1);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_73(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_73(bool bParam0, bool bParam1) //Position: 0x1F35 / 7989
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_76(GET_LOCAL_SLOT(), bParam0) && !Function_74(2))
		{
			return;
		}
		if (!Function_74(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
	}
	return;
}

bool Function_74(int iParam0) //Position: 0x1F82 / 8066
{
	return Function_75(Global_79337, iParam0);
}

bool Function_75(var uParam0, int iParam1) //Position: 0x1F91 / 8081
{
	return (uParam0 && iParam1) == 0;
}

int Function_76(bool bParam0, bool bParam1) //Position: 0x1F9E / 8094
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

void Function_77(int iParam0) //Position: 0x1FC2 / 8130
{
	Function_45(&Global_79337, iParam0);
	return;
}

void Function_78(int iParam0) //Position: 0x1FD1 / 8145
{
	Function_40(&Global_79337, iParam0);
	return;
}

void Function_79(bool bParam0) //Position: 0x1FE0 / 8160
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
			Function_80(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_80(bool bParam0) //Position: 0x207F / 8319
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

void Function_81(bool bParam0) //Position: 0x20B0 / 8368
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

void Function_82(int iParam0) //Position: 0x20FB / 8443
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_83(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x2121 / 8481
{
	if (Function_85(uParam0[iParam13], 4))
	{
		if (Function_85(uParam0[iParam13], 1))
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
			Function_84(uParam0[iParam13], 1);
			Function_84(uParam0[iParam13], 2);
			Function_84(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_84(var uParam0, int iParam1) //Position: 0x224F / 8783
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_85(int iParam0, int iParam1) //Position: 0x2269 / 8809
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_86() //Position: 0x2286 / 8838
{
	if (!Function_375(&Local_257, &Local_103, 51956, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_64(&iLocal_478))
		{
			if (Function_60(&iLocal_478) <= 0.0f)
			{
				Function_373(&uLocal_477, 6, 40, 38, 10.0f);
				Function_372(&iLocal_478, 5.0f);
			}
		}
		else
		{
			Function_371(&iLocal_478, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_287();
			UNK_0x444C3C32(0, 4, 0);
			UNK_0x2148AC15(322, 10);
			break;
		
		case 0x00000001:
			Function_277();
			break;
		
		case 0x00000002:
			Function_267();
			break;
		
		case 0x00000003:
			Function_225();
			break;
		
		case 0x0000000B:
			Function_87();
			break;
	}
	return 1;
}

void Function_87() //Position: 0x2332 / 9010
{
	switch (StackVal)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID(Local_103.f_192))
			{
				DESTROY_VOLUME(Local_103.f_192);
			}
			if (!IS_VOLUME_VALID(Local_103.f_176))
			{
				Local_103.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_103, "SpawnVol_0_set");
				(*&Local_103 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_0_sub_0", 2, -2348,029f, 36,00969f, 2168,135f, 0.0f, -87,99739f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
				ADD_TO_VOLUME_SET(Local_103.f_176, (*&Local_103 + 160)[0]);
				(*&Local_103 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_0_sub_1", 2, -2353,322f, 42,78277f, 2189,833f, 0.0f, -126,5316f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
				ADD_TO_VOLUME_SET(Local_103.f_176, (*&Local_103 + 160)[1]);
				(*&Local_103 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_0_sub_2", 2, -2346,557f, 41,64037f, 2137,88f, 0.0f, -98,02499f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
				ADD_TO_VOLUME_SET(Local_103.f_176, (*&Local_103 + 160)[2]);
			}
			Function_224();
			Function_222(StackVal, StackVal, bLocal_102, Function_224(), Global_78576, 0x43160000);
			Function_221(bLocal_102, bLocal_18, 0, 0);
			Local_257.f_8 = 6;
			Function_65(&uLocal_477, 1, 0, 4294967295, 4294967295);
			break;
		
		case 0x00000006:
			Function_88(&Local_257);
			break;
	}
	return;
}

var Function_88(int iParam0) //Position: 0x24B4 / 9396
{
	int iVar0;
	int iVar1;
	char* cVar2[16];
	bool bVar6;
	
	iVar1 = 0;
	switch (iLocal_95)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_220(iParam0 + 16 + 8);
			}
			if (!bLocal_91)
			{
				Function_10(458, 1, 0, 0);
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_60(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_219(), Function_218(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				Function_147(iParam0);
				Function_144(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_143())
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
				Function_142("MP_AA_already_finished");
			}
			if ((iParam0 + 16)->f_28 == 2)
			{
				iLocal_95 = 1;
			}
			else
			{
				iLocal_95 = 15;
			}
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT(Function_141(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_38()))
				{
					Function_139(Function_38(), 0);
					if (IS_ACTOR_INSIDE_VEHICLE(Function_38()))
					{
						bVar6 = GET_VEHICLE(Function_38());
						if (IS_ACTOR_VALID(bVar6))
						{
							START_VEHICLE(bVar6);
						}
					}
				}
				SET_PLAYER_CONTROL(0, 0, 1, 1);
			}
			Function_48(131072);
			CANCEL_DEADEYE();
			ENABLE_USE_CONTEXTS(0);
			iLocal_90 = 1;
			SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
			UI_EXCLUDE("nMP_Ticker");
			UI_EXIT("WeaponAmmo");
			UI_EXCLUDE("WeaponAmmo");
			UI_SET_TEXT("mp_aa_stats_vote_skip", "Common_Null");
			UI_SET_TEXT("mp_aa_stats_vote_replay", "Common_Null");
			iLocal_95 = 2;
			break;
		
		case 0x00000002:
			iLocal_96++;
			if (iLocal_96 >= 5)
			{
				iLocal_95 = 6;
			}
			break;
		
		case 0x00000006:
			Function_134(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_128(*iParam0, Function_129());
			}
			iLocal_95 = 7;
			break;
		
		case 0x00000007:
			iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
			if (iLocal_16 != 3)
			{
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					if (IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 0, 1, 1);
					}
				}
				if (IS_BUTTON_RELEASED(iVar0, 4, 1, true))
				{
					Function_34();
					if (iLocal_16 == 2)
					{
						Function_134(iParam0);
					}
					else if (iLocal_16 == 1)
					{
						Function_125();
					}
				}
				else if (Function_124(15, 1, 1))
				{
					Function_123(1);
					Function_7(iParam0);
				}
				else if (Function_124(13, 1, 1))
				{
					Function_123(0);
					Function_7(iParam0);
				}
				else if (Function_122())
				{
					if (iLocal_16 == 1)
					{
						Function_134(iParam0);
					}
					else if (iLocal_16 == 2)
					{
						Function_125();
					}
				}
			}
			else
			{
				if (UI_ISACTIVE("NotorietyMeter") && !iLocal_93)
				{
					Function_5();
					iLocal_93 = 1;
				}
				else if (!UI_ISACTIVE("NotorietyMeter") && iLocal_93)
				{
					iLocal_93 = 0;
					Function_28();
				}
				if (!UI_ISACTIVE("RadialWeaponQuickPick"))
				{
					if (iLocal_92)
					{
						iLocal_92 = 0;
						Function_28();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_123(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_88))
						{
							Function_123(0);
						}
					}
				}
				else if (!iLocal_92)
				{
					iLocal_92 = 1;
					Function_5();
				}
			}
			Function_118();
			switch (Function_115(iParam0))
			{
				case 0x00000001:
					if (Function_101(99, 1, 0x3f800000))
					{
						Function_142("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_100(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_99(Global_12976.f_36);
							if (Function_97(StackVal, StackVal, Function_99(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_95 = 11;
					}
					break;
				
				case 0x00000000:
					Function_142("mp_aa_vote_skip_passed");
					PLAYSTAT_INT("AA vote passed", false);
					(iParam0 + 16)->f_28 = 0;
					iLocal_95 = 15;
					break;
				
				case 0x00000002:
					Function_52();
					break;
			}
			break;
		
		case 0x0000000B:
			iVar1 = 1;
			if (!Function_96(8))
			{
				Function_95(1792, 0);
				Function_89(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_95 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_47(64);
			Function_72(1);
			iLocal_95 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_89(var uParam0, bool bParam1, int iParam2) //Position: 0x29AD / 10669
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
		if (Function_43(Global_29006))
		{
			Function_94(&(Global_29008[Global_29006]), 131072);
			Function_93(&(Global_29008[Global_29006]), 2097152);
			Function_91(Global_29006);
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
				if (Function_90(&(Global_29008[iVar0]), 4) || Function_90(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_93(&(Global_29008[iVar0]), 2097155);
					Function_94(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_27())
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

bool Function_90(var uParam0, int iParam1) //Position: 0x2AB8 / 10936
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_91(int iParam0) //Position: 0x2AD4 / 10964
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_92())
			{
				return;
			}
		}
		if (!Function_90(&(Global_29008[iParam0]), 2048))
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

bool Function_92() //Position: 0x2B53 / 11091
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_90(&(Global_29008[iVar0]), 4) || Function_90(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_93(var uParam0, int iParam1) //Position: 0x2BB0 / 11184
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_94(var uParam0, int iParam1) //Position: 0x2BC7 / 11207
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_95(int iParam0, bool bParam1) //Position: 0x2BD6 / 11222
{
	if (bParam1)
	{
		Function_32(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_31(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_96(int iParam0) //Position: 0x2C11 / 11281
{
	return Function_75(Global_78617.f_52, iParam0);
}

bool Function_97(vector3 vParam0) //Position: 0x2C22 / 11298
{
	var uVar0[8];
	int iVar9;
	
	Function_98(&uVar0);
	iVar9 = 0;
	while (iVar9 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar9++;
	}
	return 0;
}

void Function_98(int iParam0) //Position: 0x2C73 / 11379
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

vector3 Function_99(bool bParam0) //Position: 0x2CD1 / 11473
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_100(int iParam0) //Position: 0x2CE2 / 11490
{
	Function_40(&Global_78617 + 52, iParam0);
	return;
}

bool Function_101(bool bParam0, bool bParam1, float fParam2) //Position: 0x2CF3 / 11507
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_114(bParam0);
	}
	Function_58(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_51(&Var0);
	}
	if (Function_113(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_112(&Var0, 0);
		Function_51(&Var0);
		Function_53();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_111(bParam0, iVar6, &uVar7))
	{
		if (Function_110())
		{
			if (!Function_109(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_108(&Var0, 1);
				Function_51(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_51(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_102(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, false, 0);
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
		Function_51(&Var0);
	}
	return 0;
}

bool Function_102(int iParam0) //Position: 0x2F46 / 12102
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_107(bVar0))
		{
			iVar1 = Function_103(bVar0);
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

int Function_103(bool bParam0) //Position: 0x2F89 / 12169
{
	int iVar0;
	
	Function_106(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_59(&iVar0);
	}
	else
	{
		Function_105(&iVar0, bParam0);
	}
	return Function_104(&iVar0);
}

int Function_104(int iParam0) //Position: 0x2FB0 / 12208
{
	return *iParam0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x2FB9 / 12217
{
	*uParam0 = Local_50[iParam12];
	return;
}

void Function_106(int iParam0) //Position: 0x2FC8 / 12232
{
	Function_57(iParam0, 4294967286);
	return;
}

bool Function_107(bool bParam0) //Position: 0x2FD6 / 12246
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_50, bParam0);
}

void Function_108(var uParam0, bool bParam1) //Position: 0x2FE3 / 12259
{
	if (bParam1)
	{
		Function_32(uParam0, 2);
	}
	else
	{
		Function_31(uParam0, 2);
	}
	return;
}

bool Function_109(bool bParam0) //Position: 0x2FFD / 12285
{
	return Function_37(*bParam0, 2);
}

bool Function_110() //Position: 0x300A / 12298
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

bool Function_111(int iParam0, var uParam1, int iParam2) //Position: 0x3028 / 12328
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
		if (Function_107(iVar0))
		{
			iVar1 = Function_103(iVar0);
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

void Function_112(int iParam0, bool bParam1) //Position: 0x3079 / 12409
{
	if (bParam1)
	{
		Function_32(iParam0, 1);
	}
	else
	{
		Function_31(iParam0, 1);
	}
	return;
}

bool Function_113(int iParam0) //Position: 0x3093 / 12435
{
	return Function_37(*iParam0, 1);
}

void Function_114(int iParam0) //Position: 0x30A0 / 12448
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_59(&iVar1);
	if (Function_104(&iVar1) != bVar0)
	{
		Function_58(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_37(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_54(bVar0);
		Function_108(&Var2, 0);
		Function_51(&Var2);
	}
	return;
}

bool Function_115(int iParam0) //Position: 0x319D / 12701
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
		if (Function_117(bVar4))
		{
			switch (Function_116(bVar4))
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
	if (iLocal_16 == 2)
	{
		UI_SET_TEXT("mp_aa_plist_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_plist_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_plist_vote_skip");
		UI_REFRESH("mp_aa_plist_vote_replay");
	}
	else if (iLocal_16 == 1)
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

int Function_116(int iParam0) //Position: 0x33D9 / 13273
{
	return StackVal;
}

bool Function_117(bool bParam0) //Position: 0x33E7 / 13287
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_118() //Position: 0x33FD / 13309
{
	Function_121(8);
	Function_119(&Global_79298);
	return;
}

void Function_119(int iParam0) //Position: 0x340F / 13327
{
	Function_120(iParam0, 0.0f);
	return;
}

void Function_120(int iParam0, float fParam1) //Position: 0x341B / 13339
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_32(iParam0, 1);
	Function_31(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_121(int iParam0) //Position: 0x343C / 13372
{
	Function_40(&Global_79338, iParam0);
	return;
}

bool Function_122() //Position: 0x344B / 13387
{
	return Function_36(32768);
}

void Function_123(bool bParam0) //Position: 0x3458 / 13400
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_47(64);
	Local_50[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_124(int iParam0, int iParam1, bool bParam2) //Position: 0x3483 / 13443
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

void Function_125() //Position: 0x3530 / 13616
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_127();
	Function_126();
	iLocal_16 = 2;
	return;
}

void Function_126() //Position: 0x356B / 13675
{
	Function_30(1025, 1, 0);
	return;
}

void Function_127() //Position: 0x3579 / 13689
{
	if (!Function_35())
	{
		Function_34();
	}
	Function_30(4096, 1, 1);
	return;
}

void Function_128(var uParam0, var uParam1) //Position: 0x3591 / 13713
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_129() //Position: 0x35B6 / 13750
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
		if (Function_117(iVar2))
		{
			iVar3 = Function_130(iVar2);
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

int Function_130(bool bParam0) //Position: 0x35F5 / 13813
{
	return Function_131(0, bParam0);
}

int Function_131(int iParam0, bool bParam1) //Position: 0x3601 / 13825
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_133(iParam0);
	}
	if (!Function_132(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_132(bool bParam0) //Position: 0x3668 / 13928
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

int Function_133(int iParam0) //Position: 0x3709 / 14089
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_134(int iParam0) //Position: 0x3719 / 14105
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_138(1);
	Function_127();
	Function_126();
	UI_UNFOCUS("HudGamerList");
	UI_ENTER("AAPrompts_Stats");
	Function_30(16384, 1, 1);
	Function_30(32768, 0, 1);
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
	itos(&cVar0, Function_219(), 32);
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
	itos(&cVar0, Function_133(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_218(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_137());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_218(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_218(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_42);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_218(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_135(0, Function_60(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_16 = 1;
	return;
}

void Function_135(bool bParam0, int iParam1) //Position: 0x3B3D / 15165
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_136(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), 0);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), 0);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), 0);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), 0);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), 0);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_136(var uParam0) //Position: 0x3D6A / 15722
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

int Function_137() //Position: 0x3DDB / 15835
{
	return Function_218(12);
}

void Function_138(bool bParam0) //Position: 0x3DE6 / 15846
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_30(16384, 0, 1);
	return;
}

void Function_139(bool bParam0, bool bParam1) //Position: 0x3E00 / 15872
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
	else if (!bParam1 || Function_140(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_140(bool bParam0, bool bParam1) //Position: 0x3E5D / 15965
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_141(int iParam0) //Position: 0x3E7C / 15996
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_142(bool bParam0) //Position: 0x3EDA / 16090
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_143() //Position: 0x3EEE / 16110
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_144(int iParam0) //Position: 0x3EFD / 16125
{
	Function_146(iParam0, Global_30668[2], &Global_56612, 0);
	Function_146(iParam0, Global_30679[1], &Global_56612, 1);
	Function_146(iParam0, Global_30658[0], &Global_56612, 2);
	Function_146(iParam0, Global_30658[3], &Global_56612, 3);
	Function_146(iParam0, Global_30685[2], &Global_56612, 4);
	Function_146(iParam0, Global_30640[2], &Global_56612, 6);
	Function_146(iParam0, Global_30685[1], &Global_56612, 5);
	Function_146(iParam0, Global_30658[2], &Global_56612, 7);
	Function_145(iParam0, Global_30668[2], &Global_56688, 0);
	Function_145(iParam0, Global_30679[1], &Global_56688, 1);
	Function_145(iParam0, Global_30658[0], &Global_56688, 2);
	Function_145(iParam0, Global_30658[3], &Global_56688, 3);
	Function_145(iParam0, Global_30685[2], &Global_56688, 4);
	Function_145(iParam0, Global_30640[2], &Global_56688, 6);
	Function_145(iParam0, Global_30685[1], &Global_56688, 5);
	Function_145(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_145(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3FF3 / 16371
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_137();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_137();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_137();
	}
}

void Function_146(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x40B9 / 16569
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_137();
	}
}

void Function_147(int iParam0) //Position: 0x40FA / 16634
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_217(*iParam0) };
	Function_213(iParam0);
	Function_212(13, iParam0->f_92);
	Function_212(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_133(2));
	if (iParam0->f_104)
	{
		Function_211(3, 5);
	}
	else
	{
		Function_211(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_133(3));
	Function_118();
	Function_212(13, iParam0->f_92);
	iLocal_94 = 1;
	Function_148(Var0, 4294967295, 0, 0);
	return;
}

void Function_148(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4166 / 16742
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_210(5, 1);
	Function_48(4096);
	switch (Function_26())
	{
		case 0x00000011:
		case 0x00000002:
			Function_173(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_167();
	Function_166();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_165(&Global_78480 + 220, &uVar0, 0);
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
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_165(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_149(bParam2);
}

void Function_149(bool bParam0) //Position: 0x4278 / 17016
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_121(2);
	if (bParam0)
	{
		Function_121(1);
	}
	else
	{
		Function_44(1);
	}
	Function_150();
	return;
}

void Function_150() //Position: 0x4301 / 17153
{
	Function_163();
	Function_162();
	Function_162();
	Function_161();
	Function_161();
	Function_160();
	Function_160();
	Function_157();
	Function_157();
	if (!Function_27())
	{
		Function_155();
		Function_154();
		Function_153();
		Function_152();
	}
	Function_151();
	return;
}

void Function_151() //Position: 0x4334 / 17204
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

void Function_152() //Position: 0x443A / 17466
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

void Function_153() //Position: 0x446D / 17517
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

void Function_154() //Position: 0x45FB / 17915
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

void Function_155() //Position: 0x47AF / 18351
{
	Function_156(&Global_28260, 1, 0);
	return;
}

void Function_156(int iParam0, bool bParam1, var uParam2) //Position: 0x47BD / 18365
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_38();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

struct<8> Function_157() //Position: 0x49AE / 18862
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
				iVar2 = ((Function_159((50 + iVar4)) + Function_159((183 + iVar4))) + Function_159((90 + iVar4)));
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
	Function_158(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_158(int iParam0, bool bParam1, bool bParam2) //Position: 0x4A49 / 19017
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

int Function_159(bool bParam0) //Position: 0x4CE4 / 19684
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_160() //Position: 0x4D25 / 19749
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
		iVar2 = ((Function_159((50 + iVar3) + 15) + Function_159((183 + iVar3) + 15)) + Function_159((90 + iVar3) + 15));
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
	Function_158(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_161() //Position: 0x4DAE / 19886
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
			iVar2 = ((Function_159((50 + iVar3) + 8) + Function_159((183 + iVar3) + 8)) + Function_159((90 + iVar3) + 8));
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
	Function_158(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_162() //Position: 0x4E45 / 20037
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
		iVar2 = ((Function_159((50 + iVar3)) + Function_159((183 + iVar3))) + Function_159((90 + iVar3)));
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
	Function_158(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_163() //Position: 0x4EC4 / 20164
{
	Function_164(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_158(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_164(int iParam0, bool bParam1, int iParam2) //Position: 0x4EEA / 20202
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

void Function_165(var uParam0, var uParam1, bool bParam2) //Position: 0x50F4 / 20724
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

void Function_166() //Position: 0x5139 / 20793
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

void Function_167() //Position: 0x5163 / 20835
{
	Function_168(&(Global_50170[522]));
	Function_168(&(Global_50170[622]));
	Function_168(&(Global_50170[722]));
	Function_168(&(Global_50170[822]));
	Function_168(&(Global_50170[922]));
	Function_168(&(Global_50170[1022]));
	Function_168(&(Global_50170[1122]));
	return;
}

void Function_168(bool bParam0) //Position: 0x51AC / 20908
{
	Global_56092[*bParam0] = 0;
	Function_169(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_169(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x51C6 / 20934
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_172(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_171(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_172(iParam0), &cVar0, 2, 2, true);
		Function_170(Function_172(iParam0), 0);
	}
}

void Function_170(bool bParam0, bool bParam1) //Position: 0x5274 / 21108
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

struct<16> Function_171(int iParam0) //Position: 0x5299 / 21145
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_172(int iParam0) //Position: 0x52CD / 21197
{
	return Global_50170[iParam022].f_24;
}

void Function_173(var uParam0, var uParam1, int iParam2) //Position: 0x52DC / 21212
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_209(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_201(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_208(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_169(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_209(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_201(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_208(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_169(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_209(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_174(17, 150, Function_208(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_169(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_174(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5485 / 21637
{
	Function_198(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_172(iParam0), 1.0f, false, 0);
	Function_194(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_191(iParam3);
	}
	Function_185(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_175();
}

void Function_175() //Position: 0x54EB / 21739
{
	if (!Function_27())
	{
		if (!Function_184(1, 3, 1, 1))
		{
			Function_177(1);
			Function_176(1, 8);
		}
	}
	else
	{
		Function_149(0);
	}
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x5514 / 21780
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_27())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_177(bool bParam0) //Position: 0x5556 / 21846
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_178();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_150();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_31(&Global_63095, 1);
		Function_31(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_178() //Position: 0x55A7 / 21927
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_180(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_180(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_179(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

bool Function_179(vector3 vParam0) //Position: 0x5648 / 22088
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_180(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5660 / 22112
{
	int iVar0;
	
	iVar0 = Function_182(uParam2, uParam3);
	if (Function_181(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_32(&Global_63095, 1);
			Function_31(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_32(&Global_63095, 2);
			Function_31(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_32(&Global_63095, 2);
		Function_31(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_224();
	return StackVal, StackVal, Function_224();
}

bool Function_181(int iParam0) //Position: 0x5747 / 22343
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_182(bool bParam0, bool bParam1) //Position: 0x575D / 22365
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
				fVar2 = Function_183(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_183(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_181(bVar0) && !bParam1)
	{
		bVar0 = Function_182(bParam0, 1);
	}
	return bVar0;
}

float Function_183(vector3 vParam0, vector3 vParam3) //Position: 0x5824 / 22564
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_184(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5841 / 22593
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

void Function_185(bool bParam0, bool bParam1, bool bParam2) //Position: 0x58E5 / 22757
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_190();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_189(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_188(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_187(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_186(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_189(), iVar1 + 1);
	return;
}

struct<16> Function_186(int iParam0) //Position: 0x5957 / 22871
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_187(int iParam0) //Position: 0x5978 / 22904
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_188(int iParam0) //Position: 0x5999 / 22937
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_189() //Position: 0x59BA / 22970
{
	return "CQueue_Count";
}

var Function_190() //Position: 0x59CF / 22991
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_191(int iParam0) //Position: 0x59FE / 23038
{
	Function_192(iParam0, 1);
	return;
}

void Function_192(int iParam0, bool bParam1) //Position: 0x5A0A / 23050
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_32(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_193((iVar0 % 32)));
	}
	else
	{
		Function_31(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_193((iVar0 % 32)));
	}
	return;
}

int Function_193(bool bParam0) //Position: 0x5A60 / 23136
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_194(int iParam0, int iParam1) //Position: 0x5A6C / 23148
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_197(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_172(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_171(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_195(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_172(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_172(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_172(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_195(int iParam0) //Position: 0x5AEE / 23278
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_171(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_196(int iParam0) //Position: 0x5B0E / 23310
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_197(int iParam0) //Position: 0x5B3F / 23359
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

void Function_198(bool bParam0, bool bParam1) //Position: 0x5CBD / 23741
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_199();
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

var Function_199() //Position: 0x5E09 / 24073
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_200(var uParam0, bool bParam1, bool bParam2) //Position: 0x5E56 / 24150
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_201(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x5E6E / 24174
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_171(iParam0) };
	Function_185(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_200(&fParam5, bParam8, iParam9);
	Function_169(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_203(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_191(iParam12);
	}
	Function_202(iParam0, 4);
	Function_175();
}

void Function_202(int iParam0, int iParam1) //Position: 0x5EE4 / 24292
{
	Function_31(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_203(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5EF8 / 24312
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_197(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_172(iParam0));
	if ((bParam3 && Function_207(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_172(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_171(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_206(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_205(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_195(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_172(iParam0), &Var7, 0, 2, Function_207(iParam0, 4));
			if (!bParam3)
			{
				Function_204(iParam0, 4);
			}
		}
	}
}

void Function_204(int iParam0, int iParam1) //Position: 0x5FB5 / 24501
{
	Function_32(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_205(int iParam0) //Position: 0x5FC9 / 24521
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_206(int iParam0) //Position: 0x5FF7 / 24567
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_207(int iParam0, bool bParam1) //Position: 0x6027 / 24615
{
	return Function_37(Global_50170[iParam022].f_32, bParam1);
}

bool Function_208() //Position: 0x603B / 24635
{
	return "MP_Unstoppable_Icon_128";
}

float Function_209(int iParam0) //Position: 0x605B / 24667
{
	return Global_50170[iParam022].f_12;
}

void Function_210(int iParam0, int iParam1) //Position: 0x606A / 24682
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_211(int iParam0, int iParam1) //Position: 0x608F / 24719
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_212(int iParam0, int iParam1) //Position: 0x60B8 / 24760
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_213(int iParam0) //Position: 0x60D2 / 24786
{
	struct<17> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_217(*iParam0) };
	bVar5 = TO_FLOAT(CEIL((Function_60(iParam0 + 16 + 8) / Var0.f_12)));
	switch (Function_214(11))
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			fVar6 = 1.0f;
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			fVar6 = 2.0f;
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			fVar6 = 3.0f;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
			fVar6 = 4.0f;
			break;
	}
	fVar7 = (((TO_FLOAT(Function_218(29)) * fVar6) * Var0.f_16) * TO_FLOAT(bLocal_42));
	bVar8 = (fVar7 / bVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar8));
	iParam0->f_92 = (Function_219() + iParam0->f_88);
	return;
}

int Function_214(int iParam0) //Position: 0x61B3 / 25011
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Function_218(iParam0);
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_216(iVar2))
		{
			if (Function_215(iParam0, iVar2) >= iVar0)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int Function_215(int iParam0, bool bParam1) //Position: 0x61EF / 25071
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_218(iParam0);
	}
	if (!Function_132(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

bool Function_216(bool bParam0) //Position: 0x625D / 25181
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_132(bParam0);
}

struct<20> Function_217(int iParam0) //Position: 0x6273 / 25203
{
	struct<5> Var0;
	
	Var0.f_12 = 30.0f;
	Var0.f_16 = 5.0f;
	if (iParam0 == Global_30640[2])
	{
		Var0 = 15;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30679[1])
	{
		Var0 = 17;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30658[3])
	{
		Var0 = 14;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30685[1])
	{
		Var0 = 21;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30668[2])
	{
		Var0 = 13;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 900;
	}
	else if (iParam0 == Global_30658[2])
	{
		Var0 = 18;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 600;
	}
	else if (iParam0 == Global_30685[2])
	{
		Var0 = 16;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[0])
	{
		Var0 = 20;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30717[3])
	{
		Var0 = 19;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else
	{
		Var0 = 4294967295;
		Var0.f_4 = 300.0f;
	}
	return StackVal, StackVal, StackVal, StackVal, Var0;
}

int Function_218(int iParam0) //Position: 0x63C8 / 25544
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_219() //Position: 0x63E1 / 25569
{
	return Function_133(0);
}

void Function_220(int iParam0) //Position: 0x63EB / 25579
{
	if (Function_64(iParam0))
	{
		if (!Function_63(iParam0))
		{
			Function_61();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_32(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_221(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x64B3 / 25779
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

void Function_222(bool bParam0, vector3 vParam1, bool bParam4, int iParam5) //Position: 0x6535 / 25909
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
					if (Function_179(StackVal, StackVal, vParam1))
					{
						TASK_FLEE_ACTORSET(bVar1, bParam4, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_GO_TO_COORD(bVar1, &vParam1, 3);
					}
					if (!Function_223(bVar1, Global_34573, iParam5))
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

bool Function_223(bool bParam0, bool bParam1, bool bParam2) //Position: 0x65AE / 26030
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
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

vector3 Function_224() //Position: 0x66BF / 26303
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_225() //Position: 0x66C8 / 26312
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_266(&Local_257, 0);
			Function_265("TWR_MP_obj3", 0x40f00000, 1, 2, 0, 0, 0);
			Function_257();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_230();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_221(bLocal_100, bLocal_18, 0, 0);
				Function_221(bLocal_101, bLocal_18, 0, 0);
			}
			Function_229(bLocal_102);
			Function_228(&bLocal_100, bLocal_467);
			Function_228(&bLocal_101, bLocal_467);
			Local_257.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_224();
			Function_222(StackVal, StackVal, bLocal_102, Function_224(), Global_78576, 0x43160000);
			Function_227();
			if (Function_226(bLocal_18) < 0)
			{
				if (Function_101(12, 1, 0x3f800000))
				{
					if (NET_IS_HOST_OF_THIS_SCRIPT())
					{
						(&Local_257 + 16)->f_48++;
					}
					Local_257.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			if (iLocal_487 != (&Local_257 + 16)->f_48)
			{
				iLocal_487 = (&Local_257 + 16)->f_48;
				if ((&Local_257 + 16)->f_48 <= (&Local_257 + 16)->f_52)
				{
					Local_257.f_8 = 0;
					Local_257.f_4 = 3;
				}
				else
				{
					Local_257.f_8 = 0;
					Local_257.f_4 = 11;
				}
			}
			break;
	}
	return;
}

int Function_226(bool bParam0) //Position: 0x67EB / 26603
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

void Function_227() //Position: 0x6831 / 26673
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bLocal_101))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_101, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if ((IS_ACTOR_IN_VOLUME(bVar1, Local_103.f_156) && IS_ACTOR_RIDING(bVar1)) && IS_ACTOR_ALIVE(bVar1))
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

void Function_228(bool bParam0, bool bParam1) //Position: 0x688E / 26766
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
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, bParam1);
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

void Function_229(bool bParam0) //Position: 0x692A / 26922
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
			Function_80(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_230() //Position: 0x6966 / 26982
{
	Function_255(3, I2STR((&Local_257 + 16)->f_48));
	Function_231(4, I2STR((&Local_257 + 16)->f_48));
	return;
}

void Function_231(char* cParam0, bool bParam1) //Position: 0x6988 / 27016
{
	float fVar0;
	bool bVar1;
	
	bLocal_284 = Function_254();
	fVar0 = 75.0f;
	bVar1 = 100.0f;
	switch (bLocal_284)
	{
		case 0x00000003:
			Function_232(StackVal, StackVal, cParam0, bParam1, vLocal_459, 493, "twr_backup_horse_01_", 0, fVar0, bVar1, 9);
		
		case 0x00000002:
			Function_232(StackVal, StackVal, cParam0, bParam1, vLocal_459, 489, "twr_backup_horse_07_", 0, fVar0, bVar1, 7);
		
		case 0x00000001:
			Function_232(StackVal, StackVal, cParam0, bParam1, vLocal_459, 491, "twr_backup_horse_013_", 1, fVar0, bVar1, 8);
			break;
	}
	return;
}

void Function_232(bool bParam0, char* cParam1, vector3 vParam2, bool bParam5, char* cParam6, bool bParam7, float fParam8, bool bParam9, int iParam10) //Position: 0x6A46 / 27206
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	strcpy(&Var0, cParam6, 32);
	stradd(&Var0, cParam1, 32);
	bVar8 = Function_253(StackVal, StackVal, vParam2, &Local_103, bParam5, &Var0, fParam8, bParam9);
	Function_99(bVar8);
	bVar9 = CREATE_ACTOR_IN_LAYOUT(Local_103, Function_12(), 981, Function_99(bVar8), 0.0f, 0.0f, 0.0f);
	ACCESSORIZE_HORSE(bVar9, 3);
	TASK_MOUNT(bVar8, bVar9, 1, 1, 2, 2147483647);
	if (bParam7)
	{
		DEEQUIP_ACCESSORY(bVar8, 0);
		DEEQUIP_ACCESSORY(bVar8, 1);
	}
	Function_239(bVar8, iParam10);
	Function_238(bVar8, bParam0);
	Function_233(bVar9, 5);
}

void Function_233(bool bParam0, bool bParam1) //Position: 0x6ABD / 27325
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_FACTION(bParam0, 21);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
		Function_234(bParam0, bParam1);
	}
	return;
}

void Function_234(bool bParam0, bool bParam1) //Position: 0x6AE0 / 27360
{
	Function_239(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
	switch (bParam1)
	{
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_98);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_100);
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 5.0f, 2);
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_99);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, true);
			break;
		
		case 0x00000004:
			DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
			MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bParam0);
			MEMORY_ALLOW_THROWING_EXPLOSIVES(bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 16, true);
			GIVE_WEAPON_TO_ACTOR(bParam0, 23, 10.0f, 1, 1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 3.0f, 2.0f);
			MEMORY_PREFER_RIDING(bParam0, true);
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 10.0f, 2);
			SQUAD_JOIN(bParam0, bLocal_101);
			break;
		
		case 0x00000005:
			SQUAD_JOIN(bParam0, bLocal_102);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_98);
			break;
	}
	Function_237(bParam0);
	Function_235(bParam0, 1);
	return;
}

void Function_235(bool bParam0, bool bParam1) //Position: 0x6BC7 / 27591
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
	fVar1 = Function_236(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_236(int iParam0) //Position: 0x6C0B / 27659
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
			return 1,2f;
			break;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return 1,4f;
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
			return 1,5f;
			break;
		
		default:
			return 1.0f;
			break;
	}
	return 1.0f;
}

void Function_237(bool bParam0) //Position: 0x6C9E / 27806
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

void Function_238(bool bParam0, bool bParam1) //Position: 0x6D5D / 27997
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
		Function_234(bParam0, bParam1);
	}
	return;
}

void Function_239(bool bParam0, int iParam1) //Position: 0x6D80 / 28032
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_252(bParam0);
			break;
		
		case 0x00000001:
			Function_251(bParam0);
			break;
		
		case 0x00000002:
			Function_250(bParam0);
			break;
		
		case 0x00000005:
			Function_249(bParam0);
			break;
		
		case 0x00000004:
			Function_248(bParam0);
			break;
		
		case 0x00000003:
			Function_247(bParam0);
			break;
		
		case 0x00000006:
			Function_246(bParam0);
			break;
		
		case 0x00000007:
			Function_245(bParam0);
			break;
		
		case 0x00000008:
			Function_244(bParam0);
			break;
		
		case 0x00000009:
			Function_242(bParam0);
			break;
		
		default:
			Function_240(bParam0);
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

void Function_240(bool bParam0) //Position: 0x6E4C / 28236
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_241(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_241(bool bParam0, bool bParam1) //Position: 0x71B0 / 29104
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_242(bool bParam0) //Position: 0x71D2 / 29138
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_243(bool bParam0, int iParam1) //Position: 0x736F / 29551
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

void Function_244(bool bParam0) //Position: 0x73A2 / 29602
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_245(bool bParam0) //Position: 0x754B / 30027
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_246(bool bParam0) //Position: 0x76DC / 30428
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
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
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_247(bool bParam0) //Position: 0x780E / 30734
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	return;
}

void Function_248(bool bParam0) //Position: 0x7996 / 31126
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	return;
}

void Function_249(bool bParam0) //Position: 0x7AF0 / 31472
{
	Function_240(bParam0);
	Function_243(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_250(bool bParam0) //Position: 0x7C2E / 31790
{
	Function_240(bParam0);
	Function_243(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_251(bool bParam0) //Position: 0x7C51 / 31825
{
	Function_240(bParam0);
	Function_243(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,25f);
	return;
}

void Function_252(bool bParam0) //Position: 0x7DBB / 32187
{
	Function_240(bParam0);
	Function_243(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

var Function_253(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x7DF6 / 32246
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
		if (!Function_179(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

bool Function_254() //Position: 0x7E82 / 32386
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

void Function_255(char* cParam0, bool bParam1) //Position: 0x7EB1 / 32433
{
	float fVar0;
	float fVar1;
	
	bLocal_284 = Function_254();
	fVar0 = 75.0f;
	fVar1 = 100.0f;
	switch (bLocal_284)
	{
		case 0x00000003:
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 492, "twr_backup_dyn_01_", 1, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 493, "twr_backup_dyn_02_", 0, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 489, "twr_backup_dyn_03_", 0, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 490, "twr_backup_dyn_05_", 0, fVar0, fVar1);
		
		case 0x00000002:
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 489, "twr_backup_dyn_07_", 1, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 491, "twr_backup_dyn_08_", 1, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 490, "twr_backup_dyn_09_", 1, fVar0, fVar1);
		
		case 0x00000001:
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 488, "twr_backup_dyn_011_", 0, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 487, "twr_backup_dyn_012_", 0, fVar0, fVar1);
			Function_256(StackVal, StackVal, cParam0, bParam1, vLocal_459, 486, "twr_backup_dyn_013_", 0, fVar0, fVar1);
			break;
	}
	return;
}

void Function_256(var uParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, bool bParam7, float fParam8, float fParam9) //Position: 0x8087 / 32903
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	bVar8 = Function_253(StackVal, StackVal, vParam2, &Local_103, uParam5, &cVar0, fParam8, fParam9);
	if (bParam7)
	{
		DEEQUIP_ACCESSORY(bVar8, 0);
		DEEQUIP_ACCESSORY(bVar8, 1);
	}
	Function_238(bVar8, uParam0);
}

void Function_257() //Position: 0x80C6 / 32966
{
	Function_258();
	if (IS_VOLUME_VALID(Local_103.f_176))
	{
		DESTROY_VOLUME(Local_103.f_176);
	}
	return;
}

void Function_258() //Position: 0x80E0 / 32992
{
	Function_260();
	Function_259(Function_69(Local_257, "ntwinRocks", "waterWheel01", 1), 0);
	Function_259(Function_69(Local_257, "ntwinRocks", "waterWheel01", 2), 0);
	return;
}

void Function_259(bool bParam0, bool bParam1) //Position: 0x8135 / 33077
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

void Function_260() //Position: 0x8186 / 33158
{
	bool bVar0;
	bool bVar1;
	
	Function_264(bLocal_99);
	Function_264(bLocal_98);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_99, 0);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bLocal_99))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_99, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_263(bVar1, 3212836864);
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= (SQUAD_GET_SIZE(bLocal_98) / 2))
	{
		TASK_GO_NEAR_ACTORSET(SQUAD_GET_ACTOR_BY_INDEX(bLocal_98, bVar0), Global_78576, 15.0f, 0);
		bVar0++;
	}
	Function_262(bLocal_98, Local_103.f_132, 5, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_98, 0);
	Function_261(bLocal_98, 1);
	Function_261(bLocal_99, 1);
	SQUAD_SET_FACTION(bLocal_98, 19);
	SQUAD_SET_FACTION(bLocal_99, 19);
	return;
}

void Function_261(bool bParam0, int iParam1) //Position: 0x822A / 33322
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

var Function_262(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x826B / 33387
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return bVar0;
	}
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
	return bVar0;
}

void Function_263(bool bParam0, bool bParam1) //Position: 0x82A6 / 33446
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_264(bool bParam0) //Position: 0x82C1 / 33473
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

void Function_265(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x82F3 / 33523
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_266(var uParam0, bool bParam1) //Position: 0x8346 / 33606
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

void Function_267() //Position: 0x837D / 33661
{
	bool bVar0;
	bool bVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_266(&Local_257, 0);
			Function_265("TWR_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			Function_258();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_257 + 16)->f_52 = Function_254();
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_276();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_221(bLocal_100, bLocal_18, 0, 0);
			}
			Function_228(&bLocal_100, bLocal_467);
			Function_371(&iLocal_470, 30.0f);
			Local_257.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Function_60(&iLocal_473) < 0.0f)
				{
					Function_272(&bLocal_99);
					if (SQUAD_GET_SIZE(bLocal_99) != 1 && !iLocal_482)
					{
						Function_264(bLocal_99);
						SQUAD_GOALS_CLEAR(bLocal_99);
						bVar0 = false;
						while (bVar0 <= SQUAD_GET_SIZE(bLocal_99))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_99, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (IS_ACTOR_ALIVE(bVar1))
								{
									TASK_GO_NEAR_ACTORSET(bVar1, Global_78576, 1.0f, 0);
								}
							}
							bVar0++;
						}
						iLocal_482 = 1;
					}
					Function_372(&iLocal_473, 10.0f);
				}
			}
			if (Function_226(bLocal_18) < 0)
			{
				if (Function_101(3, 1, 0x3f800000))
				{
					if (Function_60(&iLocal_470) > 0.0f)
					{
						bLocal_476 = true;
						if (bLocal_476)
						{
							Function_268();
						}
					}
					Local_257.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_257.f_8 = 0;
			Local_257.f_4 = 3;
			break;
	}
	return;
}

void Function_268() //Position: 0x84CC / 33996
{
	Function_270(FLOOR(100.0f), "XP_TWR_Bonus", 0);
	Function_269(2, FLOOR(100.0f));
	return;
}

void Function_269(int iParam0, bool bParam1) //Position: 0x84F9 / 34041
{
	Function_211(iParam0, (Function_133(iParam0) + bParam1));
	return;
}

void Function_270(var uParam0, bool bParam1, int iParam2) //Position: 0x850C / 34060
{
	Function_271(uParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_219(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_219(), UI_GET_STRING(bParam1));
	}
	return;
}

void Function_271(int iParam0) //Position: 0x854F / 34127
{
	Function_269(0, iParam0);
	return;
}

void Function_272(bool bParam0) //Position: 0x855B / 34139
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
					Function_275(*bParam0, GET_SLOT_ACTOR(bVar0));
					Function_274(*bParam0, GET_SLOT_ACTOR(bVar0), 0);
					Function_273(*bParam0, GET_SLOT_ACTOR(bVar0), 4);
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

void Function_273(bool bParam0, bool bParam1, bool bParam2) //Position: 0x85F1 / 34289
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

void Function_274(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8636 / 34358
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
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
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

void Function_275(bool bParam0, bool bParam1) //Position: 0x86A1 / 34465
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

void Function_276() //Position: 0x86F3 / 34547
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_103.f_112 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "TWR_Reinf_House02"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_01", 492, -2420,162f, 26,22526f, 2128,248f, 0.0f, -114,9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	Function_239(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_02", 490, -2419,293f, 26,22526f, 2131,023f, 0.0f, -114,9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	Function_239(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_03", 491, -2419,332f, 26,22526f, 2125,7f, 0.0f, -114,9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	Function_239(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_04", 487, -2422,153f, 26,22526f, 2126,963f, 0.0f, -114,9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	Function_239(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_05", 488, -2423,179f, 26,22526f, 2127,775f, 0.0f, -114,9558f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	Function_239(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_06", 493, -2423,74f, 26,72426f, 2123,823f, 0.0f, 118,2892f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	Function_239(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_house2_07", 489, -2424,969f, 26,70716f, 2122,654f, 0.0f, 118,2892f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_112);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	Function_239(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_277() //Position: 0x8A77 / 35447
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_266(&Local_257, 0);
			Function_228(&Local_103 + 108, bLocal_467);
			Function_228(&Local_103 + 104, bLocal_467);
			Function_265("TWR_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0);
			Function_371(&iLocal_473, 10.0f);
			Local_257.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_279();
				if (Function_60(&iLocal_473) < 0.0f)
				{
					Function_272(&bLocal_99);
					Function_372(&iLocal_473, 10.0f);
				}
			}
			Function_278();
			if (Function_226(bLocal_18) >= 3 && (&Local_257 + 16)->f_32)
			{
				if (Function_101(2, 1, 0x3f800000))
				{
					Local_257.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_257.f_8 = 0;
			Local_257.f_4 = 2;
			break;
	}
	return;
}

void Function_278() //Position: 0x8B48 / 35656
{
	if (!iLocal_316)
	{
		if (((&Local_257 + 16)->f_24 || IS_ACTOR_IN_VOLUME(Function_38(), Local_103.f_156)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_481))
		{
			if (SQUAD_GET_SIZE(bLocal_98) >= 2)
			{
				Function_260();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_481);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_481);
				iLocal_316 = 1;
			}
		}
	}
	return;
}

void Function_279() //Position: 0x8B8D / 35725
{
	if (!iLocal_483)
	{
		if (Function_64(&iLocal_484))
		{
			if (Function_60(&iLocal_484) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_257 + 16)->f_60)
				{
					case 0x00000000:
						Function_286();
						Function_221(Local_103.f_104, bLocal_18, 0, 0);
						Function_228(&Local_103 + 104, bLocal_467);
						break;
					
					case 0x00000001:
						Function_285();
						Function_221(Local_103.f_108, bLocal_18, 0, 0);
						Function_228(&Local_103 + 108, bLocal_467);
						break;
					
					case 0x00000002:
						Function_284();
						break;
				}
				(&Local_257 + 16)->f_60++;
				Function_283(&iLocal_484);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_280(&iLocal_484);
		}
		if ((&Local_257 + 16)->f_60 >= 3)
		{
			(&Local_257 + 16)->f_32 = 1;
			iLocal_483 = 1;
		}
	}
	return;
}

void Function_280(int iParam0) //Position: 0x8C4D / 35917
{
	if (!Function_64(iParam0))
	{
		Function_281(iParam0, 0.0f);
	}
	return;
}

void Function_281(var uParam0, float fParam1) //Position: 0x8C62 / 35938
{
	Function_61();
	Function_282(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_282(var uParam0, int iParam1) //Position: 0x8C76 / 35958
{
	uParam0->f_4 = iParam1;
	Function_32(uParam0, 1);
	Function_31(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_283(var uParam0) //Position: 0x8C93 / 35987
{
	Function_281(uParam0, 0.0f);
	return;
}

void Function_284() //Position: 0x8C9F / 35999
{
	bool bVar0;
	
	bLocal_284 = Function_254();
	switch (bLocal_284)
	{
		case 0x00000003:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn08", 492, *(&Local_103 + 196), *(&Local_103 + 196 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn07", 493, *(&Local_103 + 220), *(&Local_103 + 220 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn06", 491, *(&Local_103 + 244), *(&Local_103 + 244 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
		
		case 0x00000002:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn05", 489, *(&Local_103 + 268), *(&Local_103 + 268 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn04", 490, *(&Local_103 + 292), *(&Local_103 + 292 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
		
		case 0x00000001:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn03", 486, *(&Local_103 + 316), *(&Local_103 + 316 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn02", 487, *(&Local_103 + 340), *(&Local_103 + 340 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "TWR_Spawn_Dyn01", 488, *(&Local_103 + 364), *(&Local_103 + 364 + 12));
			SQUAD_JOIN(bVar0, Local_103.f_104);
			SET_ACTOR_FACTION(bVar0, 1);
			TASK_WANDER(bVar0, -1.0f);
			break;
	}
	return;
}

void Function_285() //Position: 0x8ECA / 36554
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_103.f_108 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "TWR_snipers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_sniper_01", 491, -2450,716f, 33,52565f, 2129,406f, 0.0f, -234,5678f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_108);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_234(bVar0, 2);
	Function_239(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_sniper_02", 489, -2413,033f, 34,29689f, 2170,624f, 0.0f, 48,31993f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_108);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_234(bVar0, 2);
	Function_239(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_sniper_03", 490, -2420,742f, 30,90931f, 2126,562f, 0.0f, 48,31993f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_108);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_234(bVar0, 2);
	Function_239(bVar0, 6);
	return;
}

void Function_286() //Position: 0x9072 / 36978
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_103.f_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "TWR_Initial_Guards"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_spawn_01", 486, -2415,097f, 25,13294f, 2150,785f, 0.0f, 87,21748f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0,5f, 1, 1);
	Function_239(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_234(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_spawn_02", 492, -2433,615f, 24,63136f, 2121,336f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_239(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_234(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_spawn_03", 487, -2407,367f, 25,95819f, 2130,453f, 0.0f, -159,6211f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0,5f, 1, 1);
	Function_239(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_234(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_spawn_04", 488, -2420,15f, 24,09419f, 2156,583f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_239(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_234(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_103, "twr_spawn_05", 487, -2438,124f, 23,6237f, 2152,848f, 0.0f, 182,1785f, 0.0f);
	SQUAD_JOIN(bVar0, Local_103.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_239(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_234(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_287() //Position: 0x931C / 37660
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_368();
			Function_366();
			Function_359(&uLocal_317, 0);
			Function_356(&uLocal_317, 1, 3, 3, 1);
			Local_257.f_100 = "FTR_SONG_05";
			Local_257.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_349() && Function_340(&Local_257))
			{
				Local_257.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_337();
			Function_335(&Local_257, Local_103);
			Function_332();
			Function_296(Local_103, &uLocal_317, 1, 1);
			Function_68(Function_69(Local_257, "ntwinRocks", "waterWheel01", 1), 0);
			Function_67(Function_69(Local_257, "ntwinRocks", "waterWheel01", 1), 0);
			Function_68(Function_69(Local_257, "ntwinRocks", "waterWheel01", 2), 0);
			Function_67(Function_69(Local_257, "ntwinRocks", "waterWheel01", 2), 0);
			Function_294(&Local_257, 38860);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_481 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_103);
			EVENT_TRAP_ON_VOLUME(bLocal_481, Local_103.f_156);
			iLocal_487 = (&Local_257 + 16)->f_48;
			Local_257.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_292())
			{
				Local_257.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_288(&Local_257);
			break;
	}
	return;
}

void Function_288(var uParam0) //Position: 0x94BF / 38079
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_290(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_290(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_289();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_289() //Position: 0x95A1 / 38305
{
	bLocal_91 = true;
	return;
}

void Function_290(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x95AA / 38314
{
	if (iParam0 == Global_30668[2])
	{
		Function_291(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_291(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_291(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_291(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_291(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_291(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_291(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_291(7);
	}
}

void Function_291(int iParam0) //Position: 0x963F / 38463
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

bool Function_292() //Position: 0x96D4 / 38612
{
	if (!IS_LAYOUTREF_VALID(bLocal_468))
	{
		bLocal_468 = CREATE_LAYOUT(Function_12());
	}
	if (!IS_OBJECT_VALID(bLocal_469))
	{
		bLocal_469 = CREATE_WORLD_SECTOR(bLocal_468, "nTwinRocks");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_469))
	{
		Function_293(bLocal_468, "pot0", Local_103.f_156);
		Function_293(bLocal_468, "bottle", Local_103.f_156);
		Function_293(bLocal_468, "debris", Local_103.f_156);
		Function_293(bLocal_468, "chair", Local_103.f_156);
		DESTROY_LAYOUT(bLocal_468);
		return 1;
	}
	return 0;
}

void Function_293(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9767 / 38759
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

void Function_294(char* cParam0, int iParam1) //Position: 0x97C0 / 38848
{
	cParam0->f_96 = iParam1;
	return;
}

void Function_295(int iParam0) //Position: 0x97CC / 38860
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_TWR_Bonus"), iParam0);
	itos(&cVar0, Function_133(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

int Function_296(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x9809 / 38921
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_331()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_330()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_330(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_329(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_328(bVar14);
				vVar7 = { StackVal, StackVal, Function_328(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
				Function_327(bVar14);
				vVar10 = { StackVal, StackVal, Function_327(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_325(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_324());
							if (Function_323(bVar5))
							{
								if (Function_322((*iParam1 + 228)[bVar52]))
								{
									Function_303(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_298(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_303(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_297(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_303(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_297() //Position: 0x9A3D / 39485
{
	return "XPBonus";
}

void Function_298(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x9A4D / 39501
{
	bool bVar0;
	
	if (Function_322(Param1))
	{
		bVar0 = Function_300(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_299(), bVar0);
	}
}

var Function_299() //Position: 0x9A73 / 39539
{
	return "PackedWeapon";
}

var Function_300(struct<5> Param0) //Position: 0x9A88 / 39560
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_301())) || SHIFT_LEFT(bParam2, Function_301() + 8));
}

bool Function_301() //Position: 0x9AA6 / 39590
{
	return Function_302(39);
}

int Function_302(bool bParam0) //Position: 0x9AB1 / 39601
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

void Function_303(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x9ADF / 39647
{
	Function_314(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_308(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_307(), Function_306(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_305(), Function_304(iParam13, iParam14));
}

var Function_304(var uParam0, bool bParam1) //Position: 0x9B30 / 39728
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_305() //Position: 0x9B40 / 39744
{
	return "PackedGrass";
}

var Function_306(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9B54 / 39764
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

var Function_307() //Position: 0x9B79 / 39801
{
	return "PackedMetadata";
}

void Function_308(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x9B90 / 39824
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_299(), &uVar5))
				{
					Function_312(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_311();
				vVar0 = { StackVal, StackVal, Function_311() };
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
				Function_310();
				vVar0 = { StackVal, StackVal, Function_310() };
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
				Function_309();
				vVar0 = { StackVal, StackVal, Function_309() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_309() //Position: 0x9CB6 / 40118
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_310() //Position: 0x9CC7 / 40135
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_311() //Position: 0x9CD8 / 40152
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_312(var uParam0, int iParam1) //Position: 0x9CE9 / 40169
{
	*iParam1 = Function_313(uParam0, Function_301(), 0);
	iParam1->f_4 = Function_313(uParam0, Function_301() + 8, Function_301());
	return;
}

var Function_313(var uParam0, int iParam1, bool bParam2) //Position: 0x9D0C / 40204
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_193((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_314(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x9D2B / 40235
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_321();
			Function_310();
			vVar1 = { StackVal, StackVal, Function_310() };
			break;
		
		case 0x00000001:
			bVar0 = Function_320();
			Function_311();
			vVar1 = { StackVal, StackVal, Function_311() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_319();
			Function_309();
			vVar1 = { StackVal, StackVal, Function_309() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_318(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_316(Function_318()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_315(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_315() //Position: 0x9E2F / 40495
{
	return "MPItemGiver";
}

struct<32> Function_316(bool bParam0) //Position: 0x9E43 / 40515
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_317("0", &cVar8, ""), 4);
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

struct<32> Function_317(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9EAD / 40621
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_318() //Position: 0x9ECC / 40652
{
	return "PBox_";
}

var Function_319() //Position: 0x9EDA / 40666
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_320() //Position: 0x9F00 / 40704
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_321() //Position: 0x9F28 / 40744
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_322(int iParam0) //Position: 0x9F4E / 40782
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_323(bool bParam0) //Position: 0x9F60 / 40800
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_324() //Position: 0x9F70 / 40816
{
	return "ID";
}

bool Function_325(bool bParam0, int iParam1) //Position: 0x9F7B / 40827
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_75((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_326())
			{
				return 0;
			}
			return !Function_75((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_75((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_326() //Position: 0x9FD0 / 40912
{
	return Function_37(Global_79962, 1024);
}

vector3 Function_327(bool bParam0) //Position: 0x9FE0 / 40928
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

vector3 Function_328(bool bParam0) //Position: 0xA007 / 40967
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

var Function_329() //Position: 0xA02E / 41006
{
	return "Type";
}

var Function_330() //Position: 0xA03B / 41019
{
	return "PickupsSet";
}

var Function_331() //Position: 0xA04E / 41038
{
	return "PickupFlagsSet";
}

void Function_332() //Position: 0xA065 / 41061
{
	bLocal_98 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "SQUAD_stage_one_guards"));
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "SQUAD_stage_one_snipers"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "SQUAD_stage_two_reinforcements"));
	Function_333(bLocal_100, Local_103.f_132, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_100, 0);
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "SQUAD_stage_three_horseback"));
	Function_333(bLocal_101, Local_103.f_132, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_101, 0);
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_103, "SQUAD_Horses"));
	return;
}

void Function_333(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xA144 / 41284
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	Function_334(bParam0, 37, fParam2);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, bParam3, bParam1, 2, 1);
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam3, bParam1, iParam4);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
}

void Function_334(bool bParam0, int iParam1, bool bParam2) //Position: 0xA185 / 41349
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

void Function_335(var uParam0, bool bParam1) //Position: 0xA1CF / 41423
{
	Function_336(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	bLocal_18 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_41 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_41, 15);
	ITERATE_IN_LAYOUT(bLocal_41, bParam1);
	START_OBJECT_ITERATOR(bLocal_41);
	Global_78480.f_24 = *uParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_266(uParam0, 1);
	}
	Function_39(256);
	Function_100(64);
	Function_72(0);
	return;
}

void Function_336(var uParam0) //Position: 0xA240 / 41536
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_337() //Position: 0xA24E / 41550
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_339(4, 1);
	uVar0 = uVar0;
	Local_103 = CREATE_LAYOUT("TwinRocksMP_layout");
	Local_103.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_103, "vset_camp_boundaries_set");
	(*&Local_103 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_camp_wall_east", 2, -2411,939f, 27,225f, 2145,77f, 0.0f, -33,49957f, 0.0f, 11,21349f, 5,531206f, 24,30527f);
	ADD_TO_VOLUME_SET(Local_103.f_132, (*&Local_103 + 116)[0]);
	(*&Local_103 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_camp_wall_south", 2, -2433,1f, 27,225f, 2148,865f, 0.0f, -8,617216f, 0.0f, 9,716439f, 5,531206f, 14,33909f);
	ADD_TO_VOLUME_SET(Local_103.f_132, (*&Local_103 + 116)[1]);
	(*&Local_103 + 116)[2] = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_camp_wall_west", 2, -2433,432f, 26,27127f, 2124,222f, 0.0f, -8,617216f, 0.0f, 8,261333f, 5,531206f, 12,20934f);
	ADD_TO_VOLUME_SET(Local_103.f_132, (*&Local_103 + 116)[2]);
	Local_103.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_103, "vset_sniper_positions_set");
	(*&Local_103 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_camp_roof", 2, -2420,612f, 32,30972f, 2126,215f, 0.0f, -35,42813f, 0.0f, 3,925121f, 4,330785f, 3,648563f);
	ADD_TO_VOLUME_SET(Local_103.f_152, (*&Local_103 + 136)[0]);
	(*&Local_103 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_camp_rock_01", 2, -2412,931f, 35,71606f, 2172,031f, 0.0f, -351,0439f, 0.0f, 3,238135f, 4,330785f, 3,591834f);
	ADD_TO_VOLUME_SET(Local_103.f_152, (*&Local_103 + 136)[1]);
	(*&Local_103 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_camp_rock_02", 2, -2450,657f, 35,18782f, 2128,214f, 0.0f, -351,0439f, 0.0f, 3,238135f, 4,330785f, 3,591834f);
	ADD_TO_VOLUME_SET(Local_103.f_152, (*&Local_103 + 136)[2]);
	Local_103.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_103, "v_Clear_Vol", 2, -2422,587f, 27,5147f, 2140,119f, 0.0f, 298,4275f, 0.0f, 74,24721f, 18,90813f, 67,85725f);
	Local_103.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_103, "SpawnVol_0_set");
	(*&Local_103 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_0_sub_0", 2, -2348,029f, 36,00969f, 2168,135f, 0.0f, -87,99739f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
	ADD_TO_VOLUME_SET(Local_103.f_176, (*&Local_103 + 160)[0]);
	(*&Local_103 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_0_sub_1", 2, -2353,322f, 42,78277f, 2189,833f, 0.0f, -126,5316f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
	ADD_TO_VOLUME_SET(Local_103.f_176, (*&Local_103 + 160)[1]);
	(*&Local_103 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_0_sub_2", 2, -2346,557f, 41,64037f, 2137,88f, 0.0f, -98,02499f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
	ADD_TO_VOLUME_SET(Local_103.f_176, (*&Local_103 + 160)[2]);
	Local_103.f_192 = CREATE_VOLUME_SET_IN_LAYOUT(Local_103, "SpawnVol_1_set");
	(*&Local_103 + 180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_1_sub_0", 2, -2420,108f, 26,16451f, 2127,849f, 0.0f, 321,7123f, 0.0f, 3,87279f, 3,87279f, 3,87279f);
	ADD_TO_VOLUME_SET(Local_103.f_192, (*&Local_103 + 180)[0]);
	(*&Local_103 + 180)[1] = CREATE_VOLUME_IN_LAYOUT(Local_103, "spawnVol_1_sub_1", 2, -2424,87f, 26,16451f, 2121,466f, 0.0f, 412,2403f, 0.0f, 3,234763f, 3,234763f, 1,828287f);
	ADD_TO_VOLUME_SET(Local_103.f_192, (*&Local_103 + 180)[1]);
	*(&Local_103 + 196) = { -2416.0f, 25,95819f, 2132f };
	*(&Local_103 + 196 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 220) = { -2440f, 24,09419f, 2144f };
	*(&Local_103 + 220 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 244) = { -2424f, 24,59612f, 2152f };
	*(&Local_103 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 268) = { -2428f, 25,35552f, 2124f };
	*(&Local_103 + 268 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 292) = { -2437,83f, 24,3181f, 2135,008f };
	*(&Local_103 + 292 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 316) = { -2426,993f, 24,00165f, 2162,182f };
	*(&Local_103 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 340) = { -2412f, 25,60009f, 2148f };
	*(&Local_103 + 340 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 364) = { -2436f, 24,59611f, 2124f };
	*(&Local_103 + 364 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 388) = { -2400f, 27,86119f, 2096f };
	*(&Local_103 + 388 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 412) = { -2352,955f, 42,58049f, 2192,159f };
	*(&Local_103 + 412 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 436) = { -2512f, 24,59609f, 2148f };
	*(&Local_103 + 436 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 460) = { -2448,02f, 22,56768f, 2208,009f };
	*(&Local_103 + 460 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_103 + 484) = { -2426,006f, 25,26935f, 2134,308f };
	*(&Local_103 + 484 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_103.f_508 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_103, 8, 0);
	*(&Local_103 + 512[06]) = { -2426,742f, 26,69297f, 2120,457f };
	*(&Local_103 + 512[06] + 12) = { 0.0f, -325,2687f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_103, "f_Weapon_Pickup", -2426,742f, 26,69297f, 2120,457f, 0.0f, -325,2687f, 0.0f);
	Function_338(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_103.f_508);
	*(&Local_103 + 512[16]) = { -2435,252f, 24,69001f, 2124.0f };
	*(&Local_103 + 512[16] + 12) = { 0.0f, 15,76353f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_103, "f_Ammo_Pickup", -2435,252f, 24,69001f, 2124.0f, 0.0f, 15,76353f, 0.0f);
	Function_338(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_103.f_508);
	*(&Local_103 + 512[26]) = { -2413,022f, 25,99511f, 2127,062f };
	*(&Local_103 + 512[26] + 12) = { 0.0f, -298,0273f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_103, "f_Ammo_Pickup1", -2413,022f, 25,99511f, 2127,062f, 0.0f, -298,0273f, 0.0f);
	Function_338(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_103.f_508);
	*(&Local_103 + 588) = { -2421,732f, 22,93318f, 2247,928f };
	*(&Local_103 + 588 + 12) = { 0.0f, 2,984913f, 0.0f };
}

void Function_338(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAB2D / 43821
{
	DECOR_SET_INT(bParam0, Function_329(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_324(), bParam2);
	}
	return;
}

void Function_339(int iParam0, int iParam1) //Position: 0xAB51 / 43857
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

int Function_340(int iParam0) //Position: 0xAB9A / 43930
{
	switch (iLocal_97)
	{
		case 0x00000000:
			Function_347(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_50, 33);
			bLocal_39 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_40 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_39);
			EVENT_TRAP_STORE_EVENTS(bLocal_40, 1);
			Function_346();
			Function_371(&iLocal_44, 5.0f);
			iLocal_97 = 1;
			break;
		
		case 0x00000001:
			if (Function_345())
			{
				iLocal_97 = 2;
			}
			else if (Function_341(&iLocal_44))
			{
				Function_346();
				Function_372(&iLocal_44, 5.0f);
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

bool Function_341(int iParam0) //Position: 0xAC46 / 44102
{
	if (Function_343(iParam0))
	{
		Function_342(iParam0);
		return 1;
	}
	return 0;
}

void Function_342(int iParam0) //Position: 0xAC5C / 44124
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_343(int iParam0) //Position: 0xAC70 / 44144
{
	if (Function_64(iParam0))
	{
		if (Function_344(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_344(int iParam0) //Position: 0xAC8B / 44171
{
	return -Function_60(iParam0);
}

bool Function_345() //Position: 0xAC97 / 44183
{
	return iLocal_19;
}

void Function_346() //Position: 0xAC9F / 44191
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_347(bool bParam0) //Position: 0xACCB / 44235
{
	struct<17> Var0;
	
	Function_58(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	if (bParam0)
	{
		Function_32(&Var0, 4);
	}
	Function_51(&Var0);
	Function_52();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 44310);
	return;
}

void Function_348(int iParam0) //Position: 0xAD16 / 44310
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_58(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, 0);
		return;
	}
	Function_59(&iVar7);
	if (Function_113(&Var2))
	{
	}
	bVar8 = Function_104(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_112(&Var2, 1);
	Function_51(&Var2);
	return;
}

int Function_349() //Position: 0xAE19 / 44569
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_350(&Local_103 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_25710].f_32))
		{
			return 0;
		}
		if (!Function_350(&iLocal_285))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_350(int iParam0) //Position: 0xAE53 / 44627
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_355();
	iVar1 = 0;
	if (!Function_85(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_354(iParam0[iVar03], 8);
		}
		else if (Function_353())
		{
			iVar1 = 1;
			Function_354(iParam0[iVar03], 8);
		}
		Function_354(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_85(iParam0[iVar03], 4))
		{
			if (!Function_85(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_85(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_85(iParam0[03], 8) || iVar1));
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
				Function_354(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_85(iParam0[iVar03], 4))
		{
			if (!Function_85(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_354(iParam0[iVar03], 2);
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
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_354(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_354(iParam0[iVar03], 2);
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
	Function_351();
	return 1;
}

void Function_351() //Position: 0xB1CE / 45518
{
	if (!Function_352(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_352(int iParam0) //Position: 0xB20E / 45582
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_353() //Position: 0xB22A / 45610
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

void Function_354(var uParam0, int iParam1) //Position: 0xB255 / 45653
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_355() //Position: 0xB266 / 45670
{
	if (!Function_352(128))
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

void Function_356(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB2A8 / 45736
{
	Function_357(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_357(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB2BF / 45759
{
	if (!Function_323(iParam1))
	{
		return;
	}
	Function_358(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_358(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB2E2 / 45794
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

void Function_359(int iParam0, bool bParam1) //Position: 0xB30C / 45836
{
	Function_363(iParam0);
	Function_363(iParam0 + 228);
	if (bParam1)
	{
		Function_360(iParam0);
	}
	return;
}

void Function_360(int iParam0) //Position: 0xB328 / 45864
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_361(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_361(var uParam0, int iParam1) //Position: 0xB348 / 45896
{
	Function_362(uParam0, iParam1, 0);
	return;
}

void Function_362(int iParam0, int iParam1, int iParam2) //Position: 0xB356 / 45910
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_363(int iParam0) //Position: 0xB367 / 45927
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_365(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_364(iParam0, 0.0f);
	return;
}

void Function_364(var uParam0, int iParam1) //Position: 0xB394 / 45972
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_365(var uParam0) //Position: 0xB3A0 / 45984
{
	Function_358(uParam0, 4294967295, 0, 1);
	return;
}

void Function_366() //Position: 0xB3AE / 45998
{
	Function_367(&Local_103 + 4, 486, 2, 1);
	Function_367(&Local_103 + 4, 492, 2, 1);
	Function_367(&Local_103 + 4, 487, 2, 1);
	Function_367(&Local_103 + 4, 488, 2, 1);
	Function_367(&Local_103 + 4, 491, 2, 1);
	Function_367(&Local_103 + 4, 489, 2, 1);
	Function_367(&Local_103 + 4, 490, 2, 1);
	Function_367(&Local_103 + 4, 493, 2, 1);
	return;
}

var Function_367(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB41C / 46108
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_85(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_354(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_354(uParam0[iVar03], 8);
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

void Function_368() //Position: 0xB4EC / 46316
{
	Function_369(&iLocal_285, "mp_action_areas", 10, 0);
	Function_367(&iLocal_285, 486, 2, 0);
	Function_367(&iLocal_285, 487, 2, 0);
	Function_367(&iLocal_285, 488, 2, 0);
	Function_367(&iLocal_285, 489, 2, 0);
	Function_367(&iLocal_285, 490, 2, 0);
	Function_367(&iLocal_285, 491, 2, 0);
	Function_367(&iLocal_285, 492, 2, 0);
	Function_367(&iLocal_285, 493, 2, 0);
	return;
}

var Function_369(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB56E / 46446
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_370(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_354(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_370(var uParam0, int iParam1, int iParam2) //Position: 0xB5A6 / 46502
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_85(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_354(uParam0[iVar03], 4);
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

void Function_371(int iParam0, float fParam1) //Position: 0xB66A / 46698
{
	if (!Function_64(iParam0))
	{
		Function_372(iParam0, fParam1);
	}
	return;
}

void Function_372(int iParam0, float fParam1) //Position: 0xB680 / 46720
{
	Function_281(iParam0, -fParam1);
	return;
}

void Function_373(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xB68E / 46734
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_374(uParam4);
		if (0 == iVar0)
		{
			Function_65(uParam0, uParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_65(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_65(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_374(float fParam0) //Position: 0xB6D4 / 46804
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_38())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_38())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

bool Function_375(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xB708 / 46856
{
	if (!Function_415())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_218(38) <= 10 && NET_GET_PLAYMODE() != 0)
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
		Function_410();
	}
	Function_408(3);
	Function_407();
	if (StackVal != 0)
	{
		Function_405(bLocal_40, *uParam1, uParam2, 1);
		Function_404(uParam0);
	}
	if (StackVal >= bLocal_42)
	{
		bLocal_42 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_401(uParam0);
	}
	switch (iLocal_16)
	{
		case 0x00000000:
		case 0x00000003:
			Function_387(50168, 49848);
			break;
		
		case 0x00000002:
			Function_387(47367, 47053);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_376(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xB7CD / 47053
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_379(bParam1, uParam2, uParam3);
		bVar0 = Function_215(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_377(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_215(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_215(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_215(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_130(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_377(bool bParam0, int iParam1, int iParam2) //Position: 0xB870 / 47216
{
	var uVar0;
	
	return Function_378(bParam0, iParam1, &uVar0, iParam2);
}

int Function_378(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB881 / 47233
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

void Function_379(bool bParam0, int iParam1, char* cParam2) //Position: 0xB8E6 / 47334
{
	if (bParam0)
	{
		if (Function_122())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_380() //Position: 0xB907 / 47367
{
	if (!Function_381(1))
	{
		return 0;
	}
	if (Function_36(4096) || Function_36(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_30(8192, 1, 1);
	}
	else
	{
		Function_30(8192, 0, 1);
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

bool Function_381(bool bParam0) //Position: 0xB9C3 / 47555
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_122() || Function_386(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_384(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_122())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_382(Function_122());
	return 1;
}

void Function_382(bool bParam0) //Position: 0xBA44 / 47684
{
	if (bParam0 || Function_36(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_36(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_36(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_36(1048576) || Function_36(4)) || Function_383(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_30(0x20000000, 0, 1);
	}
	return;
}

var Function_383(int iParam0, bool bParam1) //Position: 0xBACD / 47821
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_384(var uParam0) //Position: 0xBAED / 47853
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_385(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_385(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xBB01 / 47873
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

int Function_386(bool bParam0, bool bParam1) //Position: 0xBB46 / 47942
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

void Function_387(int iParam0, int iParam1) //Position: 0xBB7A / 47994
{
	Function_388(iParam0, iParam1, 49841);
	return;
}

void Function_388(var uParam0, var uParam1, int iParam2) //Position: 0xBB8B / 48011
{
	if (Function_36(0x4000000))
	{
		Function_34();
		Function_30(0x4000000, 0, 1);
	}
	if (Function_36(0x10000000))
	{
		Function_34();
		Function_30(0x10000000, 0, 1);
	}
	if (Function_36(2) != Function_36(0x2000000))
	{
		Function_34();
		Function_30(0x2000000, Function_36(2), 1);
	}
	if (Function_122())
	{
		Function_138(!Function_36(16));
	}
	if (Function_36(16))
	{
		Function_390(&uParam0, &uParam1, &iParam2);
		if (Function_36(8192))
		{
			if (!Function_36(4194304))
			{
				Function_30(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_36(8388608))
			{
				Function_30(8388608, 1, 1);
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
			Function_389();
		}
		Function_30(16384, 1, 1);
	}
	else if (!Function_36(32))
	{
		Function_389();
	}
	Function_30(32768, 0, 1);
	return;
}

void Function_389() //Position: 0xBD24 / 48420
{
	if (Function_36(4194304))
	{
		Function_30(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_36(8388608))
	{
		Function_30(8388608, 0, 1);
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

void Function_390(var uParam0, var uParam1, int iParam2) //Position: 0xBE2D / 48685
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_30(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_36(0x40000000);
	bVar3 = !Function_36(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_132(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_391(bVar1, 2048, 1))
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
				if (Function_377(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_36(4))
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
			if (Function_377(bVar1, (4294966296 - bVar1), 1))
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

bool Function_391(bool bParam0, int iParam1, bool bParam2) //Position: 0xBFA5 / 49061
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_383(iParam1, bParam2);
	}
	if (!Function_132(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_392(iParam1), 64);
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

var Function_392(int iParam0) //Position: 0xC028 / 49192
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
	}
	return "UNKNOWN";
}

int Function_393() //Position: 0xC2B1 / 49841
{
	return 1;
}

int Function_394(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xC2B8 / 49848
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_379(bParam1, iParam2, cParam3);
	iVar0 = Function_398(bParam0);
	if (iVar0 == Function_397())
	{
		iVar1 = ((CEIL(Function_395(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_395(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_377(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_391(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_395(int iParam0, bool bParam1) //Position: 0xC350 / 50000
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_396(iParam0);
	}
	if (!Function_132(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_396(int iParam0) //Position: 0xC3B9 / 50105
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_397() //Position: 0xC3C9 / 50121
{
	return Global_78480;
}

int Function_398(bool bParam0) //Position: 0xC3D3 / 50131
{
	if (!Function_132(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_397();
	}
	return Global_76943[bParam096];
}

int Function_399() //Position: 0xC3F8 / 50168
{
	if (!Function_381(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_mw");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_400();
	return 1;
}

void Function_400() //Position: 0xC494 / 50324
{
	if (Function_36(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_30(8192, 1, 1);
	}
	else if (Function_36(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_30(8192, 1, 1);
	}
	else
	{
		Function_30(8192, 0, 1);
	}
	return;
}

void Function_401(int iParam0) //Position: 0xC4D1 / 50385
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
	(iParam0 + 16)->f_24 = iLocal_20;
	if (iVar0 >= (iParam0 + 16)->f_20)
	{
		(iParam0 + 16)->f_20 = iVar0;
	}
	if (iLocal_17)
	{
		Function_403(&bLocal_18);
		iLocal_17 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_22)
	{
		if (iLocal_22[iVar1] >= 4294967295)
		{
			iLocal_22[iVar1] = 4294967295;
			Function_402(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_402(int iParam0) //Position: 0xC54A / 50506
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_403(int iParam0) //Position: 0xC575 / 50549
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

void Function_404(int iParam0) //Position: 0xC5BC / 50620
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	if (!IS_ITERATOR_VALID(bLocal_41))
	{
		return;
	}
	bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_41);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_ACTORSET(bLocal_18, bVar1))
			{
				bVar2 = StackVal;
				if (IS_VOLUME_VALID(bVar2))
				{
					if (!IS_ACTOR_IN_VOLUME(bVar1, bVar2))
					{
						if (!DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
						{
							Function_99(bVar1);
							vVar3 = { StackVal, StackVal, Function_99(bVar1) };
							DECOR_SET_FLOAT(bVar1, "out_of_bounds_time", GET_CURRENT_GAME_TIME());
						}
						else if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(bVar1, "out_of_bounds_time") + fLocal_43))
						{
							bVar6 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar6))
							{
								REMOVE_BLIP(bVar6);
							}
							REMOVE_ACTORSET_MEMBER(bLocal_18, bVar1);
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
		OBJECT_ITERATOR_NEXT(bLocal_41);
	}
	else
	{
		START_OBJECT_ITERATOR(bLocal_41);
	}
	return;
}

int Function_405(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xC6F8 / 50936
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
						if (Function_406(bVar4) == bParam1)
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

int Function_406(bool bParam0) //Position: 0xC7DA / 51162
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

void Function_407() //Position: 0xC834 / 51252
{
	Function_408(4);
	return;
}

void Function_408(int iParam0) //Position: 0xC83E / 51262
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
			Function_409(iParam0);
		}
	}
	return;
}

void Function_409(int iParam0) //Position: 0xC870 / 51312
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_410() //Position: 0xC87F / 51327
{
	bool bVar0;
	
	if (!iLocal_21)
	{
		bVar0 = Function_38();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				if (Function_412(bVar0, bLocal_18, 1, 0, 0, -1.0f))
				{
					Function_411();
					iLocal_21 = 1;
				}
			}
		}
	}
	return;
}

void Function_411() //Position: 0xC8B4 / 51380
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_412(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xC8CD / 51405
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_414(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, iLocal_47);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_413(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_47++;
	if (bLocal_47 > GET_ACTORSET_SIZE(bParam1))
	{
		bLocal_47 = false;
	}
	return 0;
}

bool Function_413(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xC936 / 51510
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
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
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
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
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

int Function_414(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCA23 / 51747
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

bool Function_415() //Position: 0xCAD1 / 51921
{
	int iVar0;
	
	if (!Function_25())
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

void Function_416(bool bParam0) //Position: 0xCAF4 / 51956
{
	bool bVar0;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (Function_417(bParam0))
	{
		Function_234(bParam0, bVar0);
		if (bVar0 == 1)
		{
			SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
			ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_103.f_156);
		}
	}
	return;
}

bool Function_417(bool bParam0) //Position: 0xCB2A / 52010
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_418(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_18, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_18, bParam0);
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

bool Function_418(bool bParam0) //Position: 0xCB77 / 52087
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

bool Function_419(int iParam0) //Position: 0xCBA4 / 52132
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
	Function_52();
	if (!Function_434(16, 0))
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
	Function_280(iParam0 + 16 + 8);
	Function_294(iParam0, 53196);
	iVar1 = 0;
	while (iVar1 <= Local_50)
	{
		Local_50[iVar12] = 4294967295;
		Local_50[iVar12].f_4 = 2;
		iVar1++;
	}
	Local_48 = 4294967295;
	Local_48.f_4 = 2;
	iVar2 = 0;
	while (iVar2 <= iLocal_22)
	{
		iLocal_22[iVar2] = 4294967295;
		iVar2++;
	}
	Function_425(2);
	Function_424(1);
	iVar3 = 52568;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 52449);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 52410);
	return 1;
}

void Function_420(int iParam0) //Position: 0xCCBA / 52410
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT() && !iLocal_20)
	{
		if (iVar0 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			iLocal_20 = 1;
		}
	}
	return;
}

void Function_421(int iParam0) //Position: 0xCCE1 / 52449
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	if (Var0.f_12 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
	{
		if (Var0 == 1)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (StackVal == NET_GET_HOST_OF_THIS_SCRIPT())
				{
					iLocal_19 = 1;
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
						iLocal_22[StackVal] = StackVal;
					}
				}
			}
		}
	}
	return;
}

void Function_422(int iParam0) //Position: 0xCD58 / 52568
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal || (StackVal != STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()) && Var0.f_12 != Global_29006))
	{
		if (IS_SLOT_VALID(bVar4))
		{
			iVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				Function_423(&bLocal_18, &iVar5);
			}
		}
	}
	return;
}

void Function_423(var uParam0, int iParam1) //Position: 0xCDA5 / 52645
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

void Function_424(int iParam0) //Position: 0xCDFA / 52730
{
	Function_40(&Global_83864 + 1252, iParam0);
	return;
}

void Function_425(int iParam0) //Position: 0xCE0C / 52748
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
	Function_166();
	Function_167();
	switch (iParam0)
	{
		case 0x00000001:
			Function_39(12288);
			Function_48(16384);
			break;
		
		case 0x00000002:
			Function_39(20480);
			Function_48(8192);
			break;
		
		default:
			Function_48(28672);
			break;
	}
	Function_48(2048);
	Function_427(0, 0);
	Function_426();
	return;
}

void Function_426() //Position: 0xCED0 / 52944
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_427(bool bParam0, bool bParam1) //Position: 0xCEE9 / 52969
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_432(&Global_78480);
	Function_431(&Global_78480);
	uVar0 = Function_218(37);
	Function_429();
	if (!bParam0)
	{
		Function_212(37, uVar0);
	}
	Function_95(18264, 0);
	Function_428();
	return;
}

void Function_428() //Position: 0xCF35 / 53045
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_429() //Position: 0xCF54 / 53076
{
	Function_430(&Global_78480 + 220);
	return;
}

void Function_430(int iParam0) //Position: 0xCF63 / 53091
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

void Function_431(int iParam0) //Position: 0xCF84 / 53124
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

void Function_432(int iParam0) //Position: 0xCFA8 / 53160
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

void Function_433(var uParam0) //Position: 0xCFCC / 53196
{
	uParam0 = uParam0;
	return;
}

bool Function_434(var uParam0, bool bParam1) //Position: 0xCFD6 / 53206
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_435("freemodetest");
	while (iVar1 == 2 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
		if (bVar2)
		{
			DRAW_STRING_CURRENT_FONT(0,05f, 0,05f, "Registering Net Script...", 1.0f, 1.0f, 1.0f, 1.0f);
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

int Function_435(bool bParam0) //Position: 0xD089 / 53385
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

