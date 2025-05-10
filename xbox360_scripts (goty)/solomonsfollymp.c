//Decompiled with MagicRDR v1.0
//Function Count : 435
//Statics Count : 474
//Natives Count : 425
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
	struct<561> Local_99 = { 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_457 = 1;
	bLocal_461 = false;
	Local_277 = Global_30658[2];
	if (!Function_418(&Local_277))
	{
		TERMINATE_THIS_SCRIPT();
	}
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

void Function_1() //Position: 0x7D / 125
{
	Function_82(&iLocal_306);
	Function_71(Local_99);
	Function_70();
	Function_68(&uLocal_462, 1, 0, 4294967295, 4294967295);
	Function_2(&Local_277);
	return;
}

void Function_2(int iParam0) //Position: 0xA1 / 161
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

void Function_3(int iParam0) //Position: 0x17D / 381
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x18F / 399
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x19B / 411
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

void Function_6() //Position: 0x1BB / 443
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x1F0 / 496
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

int Function_8(float fParam0, var uParam1, bool bParam2) //Position: 0x2AB / 683
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x2DB / 731
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x2F7 / 759
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x517 / 1303
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

var Function_12() //Position: 0xB44 / 2884
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB4C / 2892
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB5D / 2909
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

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0xC52 / 3154
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC6B / 3179
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xCD0 / 3280
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_18(int iParam0, bool bParam1) //Position: 0xCE2 / 3298
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xCF4 / 3316
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

int Function_20(int iParam0) //Position: 0xE24 / 3620
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE33 / 3635
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xE6C / 3692
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xEA9 / 3753
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1043 / 4163
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

void Function_25(int iParam0, float fParam1) //Position: 0x1287 / 4743
{
	Function_26(iParam0, (Function_27(iParam0) + fParam1));
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x129A / 4762
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_27(int iParam0) //Position: 0x12C3 / 4803
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_28() //Position: 0x12D3 / 4819
{
	if (Function_30())
	{
		return (Function_29() != 1 || Function_29() != 0);
	}
	return 0;
}

int Function_29() //Position: 0x12EC / 4844
{
	return Global_79349.f_16;
}

bool Function_30() //Position: 0x12F8 / 4856
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_31() //Position: 0x1301 / 4865
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

void Function_32() //Position: 0x135B / 4955
{
	Function_33(1024, 0, 1);
	Function_33(1, 0, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x136F / 4975
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

void Function_34(int iParam0, int iParam1) //Position: 0x1397 / 5015
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_35(int iParam0, int iParam1) //Position: 0x13AA / 5034
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_36() //Position: 0x13B9 / 5049
{
	if (Function_38())
	{
		Function_37();
	}
	Function_33(4096, 0, 1);
	return;
}

void Function_37() //Position: 0x13D0 / 5072
{
	Function_33(32768, 1, 0);
	return;
}

bool Function_38() //Position: 0x13DF / 5087
{
	return (Function_39(4096) || Function_39(4));
}

bool Function_39(bool bParam0) //Position: 0x13F0 / 5104
{
	return Function_40(Global_76905.f_132, bParam0);
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x1401 / 5121
{
	return (uParam0 && bParam1) == 0;
}

var Function_41() //Position: 0x140E / 5134
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42(int iParam0) //Position: 0x1423 / 5155
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

void Function_43(var uParam0, int iParam1) //Position: 0x147C / 5244
{
	Function_35(uParam0, iParam1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x1489 / 5257
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, false, 0, 0, 0, 0);
	return;
}

struct<32> Function_45(int iParam0) //Position: 0x149E / 5278
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

bool Function_46(int iParam0) //Position: 0x155B / 5467
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_47(int iParam0) //Position: 0x1571 / 5489
{
	Function_48(&Global_79338, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x1580 / 5504
{
	Function_34(uParam0, iParam1);
	return;
}

void Function_49(int iParam0) //Position: 0x158D / 5517
{
	Function_48(&Global_83864 + 1252, iParam0);
	return;
}

void Function_50(int iParam0) //Position: 0x159F / 5535
{
	Function_48(&Global_78617 + 52, iParam0);
	return;
}

void Function_51(int iParam0) //Position: 0x15B0 / 5552
{
	Function_48(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_52() //Position: 0x15E9 / 5609
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_53() //Position: 0x1600 / 5632
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

void Function_54(int iParam0) //Position: 0x1622 / 5666
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_55() //Position: 0x1630 / 5680
{
	Function_56();
	return;
}

void Function_56() //Position: 0x1639 / 5689
{
	Function_57(4294967286);
	return;
}

void Function_57(bool bParam0) //Position: 0x1645 / 5701
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

void Function_58(var uParam0, int iParam1) //Position: 0x1682 / 5762
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_59(int iParam0) //Position: 0x1691 / 5777
{
	Local_49 = *iParam0;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x169C / 5788
{
	*uParam0 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x16A7 / 5799
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_62(int iParam0) //Position: 0x16B5 / 5813
{
	*iParam0 = Local_49;
	return;
}

float Function_63(int iParam0) //Position: 0x16C0 / 5824
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

void Function_64() //Position: 0x1791 / 6033
{
	if (!Function_65())
	{
	}
	return;
}

bool Function_65() //Position: 0x179E / 6046
{
	return NET_IS_IN_SESSION();
}

bool Function_66(int iParam0) //Position: 0x17A7 / 6055
{
	return Function_40(*iParam0, 2);
}

bool Function_67(int iParam0) //Position: 0x17B4 / 6068
{
	return Function_40(*iParam0, 1);
}

void Function_68(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x17C1 / 6081
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_69(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_69(int iParam0) //Position: 0x17E5 / 6117
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

void Function_70() //Position: 0x1D38 / 7480
{
	Function_82(&Local_99 + 4);
	RELEASE_LAYOUT_REF(Local_99);
	return;
}

void Function_71(int iParam0) //Position: 0x1D4A / 7498
{
	if (IS_ACTORSET_VALID(bLocal_19))
	{
		Function_81(bLocal_19);
	}
	Function_79(iParam0);
	if (!Function_77(4))
	{
		Function_72(1);
	}
	return;
}

void Function_72(bool bParam0) //Position: 0x1D6E / 7534
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_77(4))
		{
			Function_76(1);
		}
		else
		{
			return;
		}
	}
	Function_75(1);
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

void Function_73(bool bParam0, bool bParam1) //Position: 0x1DB2 / 7602
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_74(GET_LOCAL_SLOT(), bParam0) && !Function_77(2))
		{
			return;
		}
		if (!Function_77(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_77(4))
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

int Function_74(bool bParam0, bool bParam1) //Position: 0x1E2F / 7727
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

void Function_75(int iParam0) //Position: 0x1E53 / 7763
{
	Function_48(&Global_79337, iParam0);
	return;
}

void Function_76(int iParam0) //Position: 0x1E62 / 7778
{
	Function_43(&Global_79337, iParam0);
	return;
}

bool Function_77(int iParam0) //Position: 0x1E71 / 7793
{
	return Function_78(Global_79337, iParam0);
}

bool Function_78(var uParam0, int iParam1) //Position: 0x1E80 / 7808
{
	return (uParam0 && iParam1) == 0;
}

void Function_79(bool bParam0) //Position: 0x1E8D / 7821
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

void Function_80(bool bParam0) //Position: 0x1F2C / 7980
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

void Function_81(bool bParam0) //Position: 0x1F5D / 8029
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

void Function_82(int iParam0) //Position: 0x1FA8 / 8104
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

void Function_83(var uParam0, int iParam1) //Position: 0x1FCE / 8142
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

void Function_84(var uParam0, int iParam1) //Position: 0x20FC / 8444
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_85(int iParam0, int iParam1) //Position: 0x2116 / 8470
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_86() //Position: 0x2133 / 8499
{
	if (!Function_372(&Local_277, &Local_99, 54621, 0, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_67(&iLocal_463))
		{
			if (Function_63(&iLocal_463) <= 0.0f)
			{
				Function_370(&uLocal_462, 38, 40, 38, 10.0f);
				Function_369(&iLocal_463, 5.0f);
			}
		}
		else
		{
			Function_368(&iLocal_463, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_283();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_274();
			break;
		
		case 0x00000002:
			Function_268();
			break;
		
		case 0x00000003:
			Function_264();
			break;
		
		case 0x00000004:
			Function_235();
			break;
		
		case 0x0000000B:
			Function_87();
			break;
	}
	return 1;
}

void Function_87() //Position: 0x21EC / 8684
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_68(&uLocal_462, 1, 0, 4294967295, 4294967295);
			Function_227();
			Local_277.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_88(&Local_277);
			break;
	}
	return;
}

var Function_88(int iParam0) //Position: 0x2228 / 8744
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
				Function_226(iParam0 + 16 + 8);
			}
			if (!bLocal_92)
			{
				if (((*iParam0 == Global_30717[2] && *iParam0 == Global_30640[13]) && *iParam0 == Global_30707[4]) && *iParam0 == Global_30658[7])
				{
					Function_10(458, 1, 0, 0);
				}
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_63(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_225(), Function_224(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_STRING_VALID(iParam0->f_100))
				{
					AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				}
				Function_148(iParam0);
				Function_145(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_144())
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
				Function_143("MP_AA_already_finished");
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
			AUDIO_MUSIC_ONE_SHOT(Function_142(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_41()))
				{
					Function_140(Function_41(), 0);
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
			Function_135(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_129(*iParam0, Function_130());
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
						Function_135(iParam0);
					}
					else if (iLocal_17 == 1)
					{
						Function_126();
					}
				}
				else if (Function_125(15, 1, 1))
				{
					Function_124(1);
					Function_7(iParam0);
				}
				else if (Function_125(13, 1, 1))
				{
					Function_124(0);
					Function_7(iParam0);
				}
				else if (Function_123())
				{
					if (iLocal_17 == 1)
					{
						Function_135(iParam0);
					}
					else if (iLocal_17 == 2)
					{
						Function_126();
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
							Function_124(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_124(0);
						}
					}
				}
				else if (!iLocal_93)
				{
					iLocal_93 = 1;
					Function_5();
				}
			}
			Function_119();
			switch (Function_116(iParam0))
			{
				case 0x00000001:
					if (Function_102(99, 1, 0x3f800000))
					{
						Function_143("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_101(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_100(Global_12976.f_36);
							if (Function_97(StackVal, StackVal, Function_100(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_96 = 11;
					}
					break;
				
				case 0x00000000:
					Function_143("mp_aa_vote_skip_passed");
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
			if (!Function_96(8))
			{
				Function_95(1792, 0);
				Function_89(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_96 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_50(64);
			if (!Function_77(4))
			{
				Function_72(1);
			}
			iLocal_96 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_89(var uParam0, bool bParam1, int iParam2) //Position: 0x2762 / 10082
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

bool Function_90(var uParam0, int iParam1) //Position: 0x286D / 10349
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_91(int iParam0) //Position: 0x2889 / 10377
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

bool Function_92() //Position: 0x2908 / 10504
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
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

void Function_93(var uParam0, int iParam1) //Position: 0x2971 / 10609
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_94(var uParam0, int iParam1) //Position: 0x2988 / 10632
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_95(int iParam0, bool bParam1) //Position: 0x2997 / 10647
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

bool Function_96(int iParam0) //Position: 0x29D2 / 10706
{
	return Function_78(Global_78617.f_52, iParam0);
}

bool Function_97(vector3 vParam0) //Position: 0x29E3 / 10723
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_99(&uVar0);
	iVar9 = Function_98(StackVal, StackVal, vParam0, 1, 1, 0);
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

var Function_98(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A57 / 10839
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

void Function_99(int iParam0) //Position: 0x2AF2 / 10994
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

vector3 Function_100(bool bParam0) //Position: 0x2B50 / 11088
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_101(int iParam0) //Position: 0x2B61 / 11105
{
	Function_43(&Global_78617 + 52, iParam0);
	return;
}

bool Function_102(bool bParam0, bool bParam1, float fParam2) //Position: 0x2B72 / 11122
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_115(bParam0);
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
	if (Function_114(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_113(&Var0, 0);
		Function_54(&Var0);
		Function_56();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_112(bParam0, iVar6, &uVar7))
	{
		if (Function_111())
		{
			if (!Function_110(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_109(&Var0, 1);
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
				if (Function_103(bParam0))
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

bool Function_103(int iParam0) //Position: 0x2DC5 / 11717
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_108(bVar0))
		{
			iVar1 = Function_104(bVar0);
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

int Function_104(bool bParam0) //Position: 0x2E08 / 11784
{
	int iVar0;
	
	Function_107(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_62(&iVar0);
	}
	else
	{
		Function_106(&iVar0, bParam0);
	}
	return Function_105(&iVar0);
}

int Function_105(int iParam0) //Position: 0x2E2F / 11823
{
	return *iParam0;
}

void Function_106(var uParam0, int iParam1) //Position: 0x2E38 / 11832
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_107(int iParam0) //Position: 0x2E47 / 11847
{
	Function_60(iParam0, 4294967286);
	return;
}

bool Function_108(bool bParam0) //Position: 0x2E55 / 11861
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_109(var uParam0, bool bParam1) //Position: 0x2E62 / 11874
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

bool Function_110(bool bParam0) //Position: 0x2E7C / 11900
{
	return Function_40(*bParam0, 2);
}

bool Function_111() //Position: 0x2E89 / 11913
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

bool Function_112(int iParam0, var uParam1, int iParam2) //Position: 0x2EA7 / 11943
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
		if (Function_108(iVar0))
		{
			iVar1 = Function_104(iVar0);
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

void Function_113(int iParam0, bool bParam1) //Position: 0x2EF8 / 12024
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

bool Function_114(int iParam0) //Position: 0x2F12 / 12050
{
	return Function_40(*iParam0, 1);
}

void Function_115(int iParam0) //Position: 0x2F1F / 12063
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_62(&iVar1);
	if (Function_105(&iVar1) != bVar0)
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
		Function_109(&Var2, 0);
		Function_54(&Var2);
	}
	return;
}

bool Function_116(int iParam0) //Position: 0x301C / 12316
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
		if (Function_118(bVar4))
		{
			switch (Function_117(bVar4))
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

int Function_117(int iParam0) //Position: 0x3258 / 12888
{
	return StackVal;
}

bool Function_118(bool bParam0) //Position: 0x3266 / 12902
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_119() //Position: 0x327C / 12924
{
	Function_122(8);
	Function_120(&Global_79298);
	return;
}

void Function_120(int iParam0) //Position: 0x328E / 12942
{
	Function_121(iParam0, 0.0f);
	return;
}

void Function_121(int iParam0, float fParam1) //Position: 0x329A / 12954
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_35(iParam0, 1);
	Function_34(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_122(int iParam0) //Position: 0x32BB / 12987
{
	Function_43(&Global_79338, iParam0);
	return;
}

bool Function_123() //Position: 0x32CA / 13002
{
	return Function_39(32768);
}

void Function_124(bool bParam0) //Position: 0x32D7 / 13015
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_50(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_125(int iParam0, int iParam1, bool bParam2) //Position: 0x3302 / 13058
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

void Function_126() //Position: 0x33AF / 13231
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_128();
	Function_127();
	iLocal_17 = 2;
	return;
}

void Function_127() //Position: 0x33EA / 13290
{
	Function_33(1025, 1, 0);
	return;
}

void Function_128() //Position: 0x33F8 / 13304
{
	if (!Function_38())
	{
		Function_37();
	}
	Function_33(4096, 1, 1);
	return;
}

void Function_129(var uParam0, var uParam1) //Position: 0x3410 / 13328
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_130() //Position: 0x3435 / 13365
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
		if (Function_118(iVar2))
		{
			iVar3 = Function_131(iVar2);
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

int Function_131(bool bParam0) //Position: 0x3474 / 13428
{
	return Function_132(0, bParam0);
}

int Function_132(int iParam0, bool bParam1) //Position: 0x3480 / 13440
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_134(iParam0);
	}
	if (!Function_133(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_133(bool bParam0) //Position: 0x34E7 / 13543
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

int Function_134(int iParam0) //Position: 0x3588 / 13704
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_135(int iParam0) //Position: 0x3598 / 13720
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_139(1);
	Function_128();
	Function_127();
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
	itos(&cVar0, Function_225(), 32);
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
	itos(&cVar0, Function_134(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_224(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_138());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_224(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_224(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_43);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_224(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_136(0, Function_63(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_17 = 1;
	return;
}

void Function_136(bool bParam0, int iParam1) //Position: 0x39BC / 14780
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_137(iParam1) };
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

struct<16> Function_137(var uParam0) //Position: 0x3BE9 / 15337
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

int Function_138() //Position: 0x3C5A / 15450
{
	return Function_224(12);
}

void Function_139(bool bParam0) //Position: 0x3C65 / 15461
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_33(16384, 0, 1);
	return;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x3C7F / 15487
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
	else if (!bParam1 || Function_141(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_141(bool bParam0, bool bParam1) //Position: 0x3CDC / 15580
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_142(int iParam0) //Position: 0x3CFB / 15611
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_143(bool bParam0) //Position: 0x3D59 / 15705
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, false, 0, 0, 0, 0);
	return;
}

bool Function_144() //Position: 0x3D6D / 15725
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_145(int iParam0) //Position: 0x3D7C / 15740
{
	Function_147(iParam0, Global_30668[2], &Global_56612, 0);
	Function_147(iParam0, Global_30679[1], &Global_56612, 1);
	Function_147(iParam0, Global_30658[0], &Global_56612, 2);
	Function_147(iParam0, Global_30658[3], &Global_56612, 3);
	Function_147(iParam0, Global_30685[2], &Global_56612, 4);
	Function_147(iParam0, Global_30640[2], &Global_56612, 6);
	Function_147(iParam0, Global_30685[1], &Global_56612, 5);
	Function_147(iParam0, Global_30658[2], &Global_56612, 7);
	Function_146(iParam0, Global_30668[2], &Global_56688, 0);
	Function_146(iParam0, Global_30679[1], &Global_56688, 1);
	Function_146(iParam0, Global_30658[0], &Global_56688, 2);
	Function_146(iParam0, Global_30658[3], &Global_56688, 3);
	Function_146(iParam0, Global_30685[2], &Global_56688, 4);
	Function_146(iParam0, Global_30640[2], &Global_56688, 6);
	Function_146(iParam0, Global_30685[1], &Global_56688, 5);
	Function_146(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_146(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3E72 / 15986
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_138();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_138();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_138();
	}
}

void Function_147(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3F36 / 16182
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_138();
	}
}

void Function_148(int iParam0) //Position: 0x3F77 / 16247
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_223(*iParam0) };
	Function_221(iParam0);
	Function_220(13, iParam0->f_92);
	Function_220(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_134(2));
	if (iParam0->f_104)
	{
		Function_219(3, 5);
	}
	else
	{
		Function_219(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_134(3));
	Function_119();
	Function_220(13, iParam0->f_92);
	Function_220(0, iParam0->f_92);
	iLocal_95 = 1;
	Function_149(Var0, 4294967295, 0, 0, 1);
	return;
}

void Function_149(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3FEC / 16364
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_218(5, 1);
	Function_51(4096);
	switch (Function_29())
	{
		case 0x00000011:
		case 0x00000002:
			Function_177(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_170();
	Function_169();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_168(&Global_78480 + 220, &uVar0, 0);
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
				Function_166(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_168(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_150(bParam2);
}

void Function_150(bool bParam0) //Position: 0x410A / 16650
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_122(2);
	if (bParam0)
	{
		Function_122(1);
	}
	else
	{
		Function_47(1);
	}
	Function_151();
	return;
}

void Function_151() //Position: 0x4193 / 16787
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
	if (!Function_30())
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

void Function_152() //Position: 0x41E5 / 16869
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

void Function_153() //Position: 0x42EB / 17131
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

void Function_154() //Position: 0x431E / 17182
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

void Function_155() //Position: 0x44AC / 17580
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

void Function_156() //Position: 0x4660 / 18016
{
	Function_157(&Global_28260, 1, 0);
	return;
}

void Function_157(int iParam0, bool bParam1, int iParam2) //Position: 0x466E / 18030
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

struct<8> Function_158(int iParam0) //Position: 0x485F / 18527
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

int Function_159(int iParam0, bool bParam1, bool bParam2) //Position: 0x4905 / 18693
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

int Function_160(bool bParam0) //Position: 0x4BA0 / 19360
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_161() //Position: 0x4BE1 / 19425
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

struct<8> Function_162() //Position: 0x4C6A / 19562
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

struct<8> Function_163() //Position: 0x4D01 / 19713
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

void Function_164() //Position: 0x4D80 / 19840
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

int Function_165(int iParam0, bool bParam1, int iParam2) //Position: 0x4DB9 / 19897
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

void Function_166(int iParam0) //Position: 0x4FC3 / 20419
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_35(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_27(8));
	bVar0[0] = FLOOR(Function_27(8));
	if (Function_27(8) < 0.0f)
	{
		if (Function_167())
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
		if (Function_167())
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

bool Function_167() //Position: 0x506A / 20586
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_168(var uParam0, var uParam1, bool bParam2) //Position: 0x5075 / 20597
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

void Function_169() //Position: 0x50BA / 20666
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

void Function_170() //Position: 0x50E4 / 20708
{
	if (Global_83864.f_1264 > 6)
	{
		Function_171(&(Global_50170[522]));
		Function_171(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_171(&(Global_50170[722]));
		Function_171(&(Global_50170[822]));
		Function_171(&(Global_50170[922]));
		Function_171(&(Global_50170[1022]));
		Function_171(&(Global_50170[1122]));
	}
	return;
}

void Function_171(bool bParam0) //Position: 0x5144 / 20804
{
	Global_56092[*bParam0] = 0;
	Function_172(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_172(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x515E / 20830
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_176(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_175(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_176(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_174(iParam0, 4))
	{
		Function_173(Function_176(iParam0), 0);
	}
}

void Function_173(bool bParam0, bool bParam1) //Position: 0x5215 / 21013
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

bool Function_174(int iParam0, bool bParam1) //Position: 0x523A / 21050
{
	return Function_40(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_175(int iParam0) //Position: 0x524E / 21070
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_176(int iParam0) //Position: 0x5282 / 21122
{
	return Global_50170[iParam022].f_24;
}

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x5291 / 21137
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_217(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_210(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_216(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_209(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_172(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_217(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_210(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_216(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_209(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_172(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_217(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_178(17, 150, Function_216(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_209(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_172(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_178(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x543A / 21562
{
	Function_207(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_176(iParam0), 1.0f, false, 0);
	Function_203(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_200(iParam3);
	}
	Function_194(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_179();
}

void Function_179() //Position: 0x54A0 / 21664
{
	if (!Function_30())
	{
		if (!Function_193(1, 3, 1, 1))
		{
			Function_181(1);
			Function_180(1, 8);
		}
	}
	else
	{
		Function_150(0);
	}
	return;
}

void Function_180(var uParam0, int iParam1) //Position: 0x54C9 / 21705
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

void Function_181(bool bParam0) //Position: 0x550B / 21771
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_182();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_151();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_34(&Global_63095, 1);
		Function_34(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_182() //Position: 0x555C / 21852
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_192())
	{
		Function_189(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_189(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_184(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_184(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_183(StackVal, StackVal, vVar0))
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

bool Function_183(vector3 vParam0) //Position: 0x5617 / 22039
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_184(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x562F / 22063
{
	int iVar0;
	
	iVar0 = Function_187(uParam2, uParam3);
	if (Function_186(iVar0))
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
	Function_185();
	return StackVal, StackVal, Function_185();
}

vector3 Function_185() //Position: 0x5716 / 22294
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_186(int iParam0) //Position: 0x571F / 22303
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_187(bool bParam0, bool bParam1) //Position: 0x5735 / 22325
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
				fVar2 = Function_188(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_188(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_186(bVar0) && !bParam1)
	{
		bVar0 = Function_187(bParam0, 1);
	}
	return bVar0;
}

float Function_188(vector3 vParam0, vector3 vParam3) //Position: 0x57FC / 22524
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_189(var uParam0, int iParam1) //Position: 0x5819 / 22553
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_191(Global_34573, &vVar4);
	if (!Function_190(Global_30640[0]))
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
	if (!Function_190(Global_30640[2]))
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
	if (!Function_190(Global_30640[1]))
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
	if (!Function_190(Global_30658[1]))
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
	if (!Function_190(Global_30658[3]))
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
	if (!Function_190(Global_30658[2]))
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
	if (!Function_190(Global_30658[4]))
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
	if (!Function_190(Global_30668[0]))
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
	if (!Function_190(Global_30668[1]))
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
	if (!Function_190(Global_30668[2]))
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
	if (!Function_190(Global_30679[0]))
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
	if (!Function_190(Global_30685[0]))
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
	if (!Function_190(Global_30685[1]))
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
	if (!Function_190(Global_30685[2]))
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
	if (!Function_190(Global_30693[0]))
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
	if (!Function_190(Global_30693[1]))
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
	if (!Function_190(Global_30693[2]))
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
	if (!Function_190(Global_30707[2]))
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
	if (!Function_190(Global_30707[3]))
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
	if (!Function_190(Global_30707[0]))
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
	if (!Function_190(Global_30717[0]))
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
	if (!Function_190(Global_30723[2]))
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
	if (!Function_190(Global_30723[1]))
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
	if (!Function_190(Global_30723[0]))
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
	if (!Function_190(Global_30679[1]))
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
	if (!Function_190(Global_30707[1]))
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
	if (Function_183(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_190(int iParam0) //Position: 0x603E / 24638
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

void Function_191(bool bParam0, bool bParam1) //Position: 0x6079 / 24697
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_192() //Position: 0x6086 / 24710
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_193(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x60A1 / 24737
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

void Function_194(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6145 / 24901
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_199();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_198(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_197(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_196(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_195(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_198(), iVar1 + 1);
	return;
}

struct<16> Function_195(int iParam0) //Position: 0x61B7 / 25015
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_196(int iParam0) //Position: 0x61D8 / 25048
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_197(int iParam0) //Position: 0x61F9 / 25081
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_198() //Position: 0x621A / 25114
{
	return "CQueue_Count";
}

var Function_199() //Position: 0x622F / 25135
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_200(int iParam0) //Position: 0x625E / 25182
{
	Function_201(iParam0, 1);
	return;
}

void Function_201(int iParam0, bool bParam1) //Position: 0x626A / 25194
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_35(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_202((iVar0 % 32)));
	}
	else
	{
		Function_34(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_202((iVar0 % 32)));
	}
	return;
}

int Function_202(bool bParam0) //Position: 0x62C0 / 25280
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_203(int iParam0, int iParam1) //Position: 0x62CC / 25292
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_206(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_176(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_205(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_175(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_204(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_176(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_176(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_176(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_204(int iParam0) //Position: 0x634E / 25422
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_175(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_205(int iParam0) //Position: 0x636E / 25454
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_206(int iParam0) //Position: 0x639F / 25503
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

void Function_207(bool bParam0, bool bParam1) //Position: 0x651D / 25885
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_208();
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

var Function_208() //Position: 0x6669 / 26217
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_209(var uParam0, bool bParam1, bool bParam2) //Position: 0x66B6 / 26294
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_210(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x66CE / 26318
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_175(iParam0) };
	Function_194(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_209(&fParam5, bParam8, iParam9);
	Function_172(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_212(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_200(iParam12);
	}
	Function_211(iParam0, 4);
	Function_179();
}

void Function_211(int iParam0, int iParam1) //Position: 0x6744 / 26436
{
	Function_34(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6758 / 26456
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_206(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_176(iParam0));
	if ((bParam3 && Function_174(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_176(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_205(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_175(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_215(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_214(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_204(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_176(iParam0), &Var7, 0, 2, Function_174(iParam0, 4));
			if (!bParam3)
			{
				Function_213(iParam0, 4);
			}
		}
	}
}

void Function_213(int iParam0, int iParam1) //Position: 0x6815 / 26645
{
	Function_35(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_214(int iParam0) //Position: 0x6829 / 26665
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_215(int iParam0) //Position: 0x6857 / 26711
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_216() //Position: 0x6887 / 26759
{
	return "MP_Unstoppable_Icon_128";
}

float Function_217(int iParam0) //Position: 0x68A7 / 26791
{
	return Global_50170[iParam022].f_12;
}

void Function_218(int iParam0, int iParam1) //Position: 0x68B6 / 26806
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_219(int iParam0, int iParam1) //Position: 0x68DB / 26843
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_220(int iParam0, int iParam1) //Position: 0x6904 / 26884
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_221(int iParam0) //Position: 0x691E / 26910
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_223(*iParam0) };
	fVar5 = (StackVal - Function_63(iParam0 + 16 + 8));
	Function_222(&fVar5, 600.0f, 30.0f);
	bVar6 = TO_FLOAT(bLocal_43);
	bVar7 = TO_FLOAT(Function_224(34));
	fVar8 = ((bVar6 * (bVar6 + 1.0f)) * 0.5f);
	fVar9 = ((bVar7 * (bVar7 + 1.0f)) * 0.5f);
	fVar10 = (fVar8 + fVar9);
	fVar11 = (fVar10 * Var0.f_12);
	bVar12 = (fVar11 / fVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar12));
	iParam0->f_92 = (Function_225() + iParam0->f_88);
	return;
}

void Function_222(var uParam0, int iParam1, int iParam2) //Position: 0x69AD / 27053
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

struct<20> Function_223(int iParam0) //Position: 0x69D2 / 27090
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

int Function_224(int iParam0) //Position: 0x6C8E / 27790
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_225() //Position: 0x6CA7 / 27815
{
	return Function_134(0);
}

void Function_226(int iParam0) //Position: 0x6CB1 / 27825
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

void Function_227() //Position: 0x6D79 / 28025
{
	Function_228();
	if (IS_VOLUME_VALID(Local_99.f_168))
	{
		DESTROY_VOLUME(Local_99.f_168);
	}
	if (!IS_VOLUME_VALID(Local_99.f_148))
	{
		Local_99.f_148 = CREATE_VOLUME_SET_IN_LAYOUT(Local_99, "SpawnVol_0_set");
		(*&Local_99 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_0_sub_0", 2, -3832.179f, 9.689736f, 3726.5f, 0.0f, -125.9504f, 0.0f, 8.913229f, 7.476769f, 7.600158f);
		ADD_TO_VOLUME_SET(Local_99.f_148, (*&Local_99 + 132)[0]);
		(*&Local_99 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_0_sub_1", 2, -3814.845f, 8.58287f, 3658.716f, 0.0f, -102.6838f, 0.0f, 8.913229f, 7.476769f, 7.600158f);
		ADD_TO_VOLUME_SET(Local_99.f_148, (*&Local_99 + 132)[1]);
		(*&Local_99 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_0_sub_2", 2, -3815.09f, 8.58287f, 3621.07f, 0.0f, -79.02432f, 0.0f, 8.913229f, 7.476769f, 7.600158f);
		ADD_TO_VOLUME_SET(Local_99.f_148, (*&Local_99 + 132)[2]);
	}
	return;
}

void Function_228() //Position: 0x6EB1 / 28337
{
	Function_229();
	if (IS_VOLUME_VALID(Local_99.f_148))
	{
		DESTROY_VOLUME(Local_99.f_148);
	}
	return;
}

void Function_229() //Position: 0x6ECB / 28363
{
	Function_233(Function_234(Local_277, "solomonsFolly", "houseProps01", 1), 0);
	Function_230();
	return;
}

void Function_230() //Position: 0x6EFE / 28414
{
	Function_232(bLocal_310);
	Function_232(bLocal_311);
	Function_231(bLocal_310, Local_99.f_116, 10, 4294967295);
	Function_231(bLocal_311, Local_99.f_128, 5, 3);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_310, 0);
	Function_231(bLocal_311, Local_99.f_124, 10, 4294967295);
	Function_231(bLocal_311, Local_99.f_120, 5, 3);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_311, 0);
	return;
}

var Function_231(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6F56 / 28502
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

void Function_232(bool bParam0) //Position: 0x6F91 / 28561
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

void Function_233(bool bParam0, bool bParam1) //Position: 0x6FC3 / 28611
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

var Function_234(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x7014 / 28692
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
	uParam1 = uParam1;
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

void Function_235() //Position: 0x70B0 / 28848
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_263(&Local_277, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_261(4, I2STR((&Local_277 + 16)->f_48));
				Function_238(5, "B");
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_237(bLocal_313, bLocal_19, 0, 0);
			}
			Local_277.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_236(bLocal_19) < 0)
			{
				if (Function_102(11, 1, 0x3f800000))
				{
					Local_277.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_277.f_8 = 0;
			Local_277.f_4 = 11;
			break;
	}
	return;
}

int Function_236(bool bParam0) //Position: 0x714A / 29002
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(bParam0);
	iVar3 = 0;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar3++;
			}
		}
		bVar2++;
	}
	return iVar3;
}

void Function_237(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7190 / 29072
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

void Function_238(char* cParam0, bool bParam1) //Position: 0x7212 / 29202
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	iLocal_305 = Function_260();
	vVar0 = { StackVal, StackVal, *(&Local_99 + 172) };
	fVar3 = 25.0f;
	fVar4 = 75.0f;
	switch (iLocal_305)
	{
		case 0x00000003:
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 492, "sol_backup_dyn_01_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 493, "sol_backup_dyn_02_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 491, "sol_backup_dyn_03_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 489, "sol_backup_dyn_04_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 493, "sol_backup_dyn_05_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 492, "sol_backup_dyn_06_", fVar3, fVar4);
		
		case 0x00000002:
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 489, "sol_backup_dyn_07_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 491, "sol_backup_dyn_08_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 486, "sol_backup_dyn_09_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 487, "sol_backup_dyn_010_", fVar3, fVar4);
		
		case 0x00000001:
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 488, "sol_backup_dyn_011_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 487, "sol_backup_dyn_012_", fVar3, fVar4);
			Function_239(StackVal, StackVal, cParam0, bParam1, vVar0, 486, "sol_backup_dyn_013_", fVar3, fVar4);
			break;
	}
	return;
}

void Function_239(var uParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8) //Position: 0x7452 / 29778
{
	char* cVar0[32];
	var uVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	uVar8 = Function_259(StackVal, StackVal, vParam2, &Local_99, uParam5, &cVar0, fParam7, fParam8);
	Function_240(uVar8, uParam0);
}

void Function_240(bool bParam0, bool bParam1) //Position: 0x7480 / 29824
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_241(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

void Function_241(bool bParam0, bool bParam1) //Position: 0x74A3 / 29859
{
	var uVar0;
	
	Function_258(bParam0);
	switch (bParam1)
	{
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_310);
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_311);
			DEEQUIP_ACCESSORY(bParam0, 0);
			DEEQUIP_ACCESSORY(bParam0, 1);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_312);
			break;
		
		case 0x00000004:
			SQUAD_JOIN(bParam0, bLocal_313);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 10.0f, 5.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 75.0f);
			GIVE_WEAPON_TO_ACTOR(bParam0, 24, 1.0f, 1, 1);
			ACTOR_SET_WEAPON_AMMO(bParam0, 24, 1.0f);
			GET_POSITION(bParam0, &uVar0);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, 0.0f, -1.0f);
			GIVE_WEAPON_TO_ACTOR(bParam0, 9, 0.0f, 1, 1);
			SET_ACTOR_MAX_HEALTH(bParam0, 1.0f);
			SET_ACTOR_HEALTH(bParam0, 1.0f);
			break;
		
		case 0x00000005:
			SQUAD_JOIN(bParam0, bLocal_314);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_310);
			break;
	}
	Function_244(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	Function_242(bParam0, 1);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
	return;
}

void Function_242(bool bParam0, bool bParam1) //Position: 0x75A1 / 30113
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
	fVar1 = Function_243(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_243(int iParam0) //Position: 0x75E5 / 30181
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

void Function_244(bool bParam0, int iParam1) //Position: 0x7678 / 30328
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_257(bParam0);
			break;
		
		case 0x00000001:
			Function_256(bParam0);
			break;
		
		case 0x00000002:
			Function_255(bParam0);
			break;
		
		case 0x00000005:
			Function_254(bParam0);
			break;
		
		case 0x00000004:
			Function_253(bParam0);
			break;
		
		case 0x00000003:
			Function_252(bParam0);
			break;
		
		case 0x00000006:
			Function_251(bParam0);
			break;
		
		case 0x00000007:
			Function_250(bParam0);
			break;
		
		case 0x00000008:
			Function_249(bParam0);
			break;
		
		case 0x00000009:
			Function_247(bParam0);
			break;
		
		default:
			Function_245(bParam0);
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

void Function_245(bool bParam0) //Position: 0x7744 / 30532
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
	Function_246(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_246(var uParam0, bool bParam1) //Position: 0x7AA8 / 31400
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

void Function_247(bool bParam0) //Position: 0x7ACA / 31434
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_248(bool bParam0, int iParam1) //Position: 0x7C67 / 31847
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

void Function_249(bool bParam0) //Position: 0x7C9A / 31898
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_250(bool bParam0) //Position: 0x7E43 / 32323
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_251(bool bParam0) //Position: 0x7FD4 / 32724
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_252(bool bParam0) //Position: 0x8107 / 33031
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_253(bool bParam0) //Position: 0x828F / 33423
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_254(bool bParam0) //Position: 0x83E9 / 33769
{
	Function_245(bParam0);
	Function_248(bParam0, 1);
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

void Function_255(bool bParam0) //Position: 0x8527 / 34087
{
	Function_245(bParam0);
	Function_248(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_256(bool bParam0) //Position: 0x854A / 34122
{
	Function_245(bParam0);
	Function_248(bParam0, 0);
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

void Function_257(bool bParam0) //Position: 0x86B4 / 34484
{
	Function_245(bParam0);
	Function_248(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_258(bool bParam0) //Position: 0x86EF / 34543
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

var Function_259(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x87AE / 34734
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
		if (!Function_183(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

var Function_260() //Position: 0x883A / 34874
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

void Function_261(char* cParam0, bool bParam1) //Position: 0x8869 / 34921
{
	Function_262(StackVal, StackVal, StackVal, StackVal, cParam0, bParam1, 487, "sol_TNT_Backup_01_", *(&Local_99 + 308[06]), *(&Local_99 + 308[06] + 12));
	Function_262(StackVal, StackVal, StackVal, StackVal, cParam0, bParam1, 488, "sol_TNT_Backup_03_", *(&Local_99 + 308[26]), *(&Local_99 + 308[26] + 12));
	return;
}

void Function_262(bool bParam0, char* cParam1, bool bParam2, char* cParam3, vector3 vParam4, vector3 vParam7) //Position: 0x88D9 / 35033
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, cParam3, 32);
	stradd(&cVar0, cParam1, 32);
	bVar8 = CREATE_ACTOR_IN_LAYOUT(Local_99, &cVar0, bParam2, vParam4, vParam7);
	Function_240(bVar8, bParam0);
}

void Function_263(char* cParam0, bool bParam1) //Position: 0x8907 / 35079
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_4 = *cParam0;
	vVar0.f_8 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 78, &vVar0, 4, 1);
	if (bParam1)
	{
		NET_SCRIPTMSG_SEND(2, 78, &vVar0, 4, 1);
	}
	return;
}

void Function_264() //Position: 0x893E / 35134
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_228();
			Function_263(&Local_277, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_238(5, "a");
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_237(bLocal_314, bLocal_19, 0, 0);
			}
			Function_267(&bLocal_314, iLocal_457);
			if (Function_236(bLocal_19) > 0)
			{
				Function_265("SOL_MP_obj3", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			Local_277.f_8 = 6;
			break;
		
		case 0x00000006:
			if (StackVal && ((Function_236(bLocal_19) > 3 && Local_277.f_16 != 3 != 6) || Local_277.f_16 < 3))
			{
				if (Function_102(4, 1, 0x3f800000))
				{
					Local_277.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_277.f_8 = 0;
			Local_277.f_4 = 4;
			break;
	}
	return;
}

void Function_265(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8A14 / 35348
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
			Var0 = { StackVal, StackVal, StackVal, Function_266(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_266(int iParam0) //Position: 0x8A99 / 35481
{
	char* cVar0[16];
	
	if (!Function_192())
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

void Function_267(bool bParam0, int iParam1) //Position: 0x8AD8 / 35544
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

void Function_268() //Position: 0x8B74 / 35700
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_229();
			Function_263(&Local_277, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_273();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_237(Local_99.f_108, bLocal_19, 0, 0);
			}
			Function_267(&Local_99 + 108, iLocal_457);
			Function_368(&iLocal_458, 30.0f);
			Function_265("SOL_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Local_277.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_236(bLocal_19) < 0)
			{
				if (Function_102(3, 1, 0x3f800000))
				{
					if (Function_63(&iLocal_458) > 0.0f)
					{
						bLocal_461 = true;
						if (bLocal_461)
						{
							Function_269();
						}
					}
					Local_277.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_277.f_8 = 0;
			Local_277.f_4 = 3;
			break;
	}
	return;
}

void Function_269() //Position: 0x8C46 / 35910
{
	Function_271(FLOOR(100.0f), "XP_SOL_Bonus", 0);
	Function_270(2, FLOOR(100.0f));
	return;
}

void Function_270(int iParam0, bool bParam1) //Position: 0x8C73 / 35955
{
	Function_219(iParam0, (Function_134(iParam0) + bParam1));
	return;
}

void Function_271(var uParam0, bool bParam1, int iParam2) //Position: 0x8C86 / 35974
{
	Function_272(uParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_225(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_225(), UI_GET_STRING(bParam1));
	}
	return;
}

void Function_272(var uParam0) //Position: 0x8CC9 / 36041
{
	Function_270(0, uParam0);
	return;
}

void Function_273() //Position: 0x8CD5 / 36053
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_99.f_108 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SOL_Stage2_Guards"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_s03", 488, -3860.413f, 5.20958f, 3666.51f, 0.0f, 198.8512f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_108);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_s04", 489, -3858.641f, 5.20958f, 3666.393f, 0.0f, 198.8512f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_108);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_s05", 492, -3859.712f, 5.20958f, 3665.378f, 0.0f, 198.8512f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_108);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_s06", 493, -3859.873f, 5.207132f, 3667.322f, 0.0f, 198.8512f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_108);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_274() //Position: 0x8E7F / 36479
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_263(&Local_277, 0);
			Function_265("SOL_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Local_277.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_276();
			}
			Function_275();
			if (Function_236(bLocal_19) >= 3 && (&Local_277 + 16)->f_32)
			{
				if (Function_102(2, 1, 0x3f800000))
				{
					Local_277.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_277.f_8 = 0;
			Local_277.f_4 = 2;
			break;
	}
	return;
}

void Function_275() //Position: 0x8F17 / 36631
{
	if (!iLocal_304)
	{
		if (((&Local_277 + 16)->f_24 || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_466)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_467))
		{
			if (SQUAD_GET_SIZE(bLocal_310) < 2 && SQUAD_GET_SIZE(bLocal_311) < 2)
			{
				Function_230();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_466);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_466);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_467);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_467);
				iLocal_304 = 1;
			}
		}
	}
	return;
}

void Function_276() //Position: 0x8F6F / 36719
{
	if (!iLocal_468)
	{
		if (Function_67(&iLocal_469))
		{
			if (Function_63(&iLocal_469) < 0.5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_277 + 16)->f_60)
				{
					case 0x00000000:
						Function_282();
						Function_237(Local_99.f_104, bLocal_19, 0, 0);
						Function_267(&Local_99 + 104, iLocal_457);
						break;
					
					case 0x00000001:
						Function_281();
						Function_237(Local_99.f_112, bLocal_19, 0, 0);
						Function_267(&Local_99 + 112, iLocal_457);
						break;
				}
				(&Local_277 + 16)->f_60++;
				Function_280(&iLocal_469);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_277(&iLocal_469);
		}
		if ((&Local_277 + 16)->f_60 >= 2)
		{
			iLocal_468 = 1;
			(&Local_277 + 16)->f_32 = 1;
		}
	}
	return;
}

void Function_277(int iParam0) //Position: 0x9023 / 36899
{
	if (!Function_67(iParam0))
	{
		Function_278(iParam0, 0.0f);
	}
	return;
}

void Function_278(var uParam0, float fParam1) //Position: 0x9038 / 36920
{
	Function_64();
	Function_279(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_279(var uParam0, int iParam1) //Position: 0x904C / 36940
{
	uParam0->f_4 = iParam1;
	Function_35(uParam0, 1);
	Function_34(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_280(var uParam0) //Position: 0x9069 / 36969
{
	Function_278(uParam0, 0.0f);
	return;
}

void Function_281() //Position: 0x9075 / 36981
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_99.f_112 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SOL_Barn_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b01", 486, -3886.148f, 11.36244f, 3658.236f, 0.0f, -41.16725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b02", 487, -3890.601f, 11.36244f, 3658.206f, 0.0f, -41.16725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b03", 488, -3888.952f, 8.031368f, 3659.048f, 0.0f, -41.16725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b04", 489, -3887.583f, 8.104259f, 3658.877f, 0.0f, -41.16725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b05", 490, -3884.912f, 8.104259f, 3658.088f, 0.0f, 56.21496f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b06", 491, -3891.069f, 8.031368f, 3652f, 0.0f, 56.21496f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b07", 492, -3885.847f, 8.031368f, 3651.407f, 0.0f, 56.21496f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_b08", 493, -3889.506f, 8.031368f, 3654.494f, 0.0f, 56.21496f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_112);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_282() //Position: 0x93E8 / 37864
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_99.f_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SOL_Initial_Guards"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i01", 486, -3862.031f, 8.118885f, 3653.188f, 0.0f, -41.16725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i02", 487, -3879.24f, 8.093512f, 3662.684f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i03", 488, -3880.288f, 8.101496f, 3648.005f, 0.0f, -111.6254f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i04", 489, -3855.294f, 8.163998f, 3669.246f, 0.0f, -45.97623f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i05", 490, -3854.022f, 8.137858f, 3660.252f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i06", 491, -3864.537f, 8.049578f, 3661.516f, 0.0f, -94.93613f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i07", 493, -3884.643f, 11.53323f, 3654.486f, 0.0f, 242.6703f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	Function_244(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i08", 492, -3879.705f, 8.03137f, 3671.708f, 0.0f, 234.2645f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i09", 491, -3872.968f, 8.021689f, 3645.974f, 0.0f, 220.4166f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_99, "sol_guard_i010", 488, -3857.055f, 8.021689f, 3646.115f, 0.0f, 220.4166f, 0.0f);
	SQUAD_JOIN(bVar0, Local_99.f_104);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_283() //Position: 0x983E / 38974
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_365();
			Function_363();
			Function_356(&uLocal_315, 0);
			Function_353(&uLocal_315, 1, 23, 5, 1);
			Local_277.f_100 = "FTR_SONG_08";
			Local_277.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_346() && Function_337(&Local_277))
			{
				Local_277.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_334();
			Function_332(&Local_277, Local_99);
			Function_329();
			Function_328(Function_234(Local_277, "solomonsFolly", "houseProps01", 1), 0);
			Function_292(Local_99, &uLocal_315, 1, 1);
			Function_290(&Local_277, 40210);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_466 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_99);
			EVENT_TRAP_ON_VOLUME(bLocal_466, Local_99.f_116);
			bLocal_467 = CREATE_EVENT_TRAP("ExplosionTrap", 17, Local_99);
			EVENT_TRAP_ON_VOLUME(bLocal_467, Local_99.f_116);
			Local_277.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_288())
			{
				Local_277.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_284(&Local_277);
			break;
	}
	return;
}

void Function_284(var uParam0) //Position: 0x998E / 39310
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_286(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_286(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_285();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_285() //Position: 0x9A70 / 39536
{
	bLocal_92 = true;
	return;
}

void Function_286(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x9A79 / 39545
{
	if (iParam0 == Global_30668[2])
	{
		Function_287(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_287(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_287(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_287(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_287(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_287(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_287(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_287(7);
	}
}

void Function_287(int iParam0) //Position: 0x9B0E / 39694
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

bool Function_288() //Position: 0x9BA3 / 39843
{
	if (!IS_LAYOUTREF_VALID(bLocal_472))
	{
		bLocal_472 = CREATE_LAYOUT(Function_12());
	}
	if (!IS_OBJECT_VALID(bLocal_473))
	{
		bLocal_473 = CREATE_WORLD_SECTOR(bLocal_472, "SolomonsFolly");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_473))
	{
		Function_289(bLocal_472, "pot0", Local_99.f_116);
		Function_289(bLocal_472, "bottle", Local_99.f_116);
		Function_289(bLocal_472, "cloth", Local_99.f_116);
		Function_289(bLocal_472, "blanket", Local_99.f_116);
		Function_289(bLocal_472, "cratebreak", Local_99.f_116);
		Function_289(bLocal_472, "tarp0", Local_99.f_116);
		Function_289(bLocal_472, "trap0", Local_99.f_116);
		Function_289(bLocal_472, "chair", Local_99.f_116);
		Function_289(bLocal_472, "wheel", Local_99.f_116);
		Function_289(bLocal_472, "debris", Local_99.f_116);
		DESTROY_LAYOUT(bLocal_472);
		return 1;
	}
	return 0;
}

void Function_289(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9CAD / 40109
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

void Function_290(var uParam0, int iParam1) //Position: 0x9D06 / 40198
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_291(int iParam0) //Position: 0x9D12 / 40210
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_SOL_Bonus"), iParam0);
	itos(&cVar0, Function_134(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

int Function_292(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x9D4F / 40271
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_327()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_326()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_326(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_325(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_324(bVar14);
				vVar7 = { StackVal, StackVal, Function_324(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_323(bVar14);
				vVar10 = { StackVal, StackVal, Function_323(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_321(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_320());
							if (Function_319(bVar5))
							{
								if (Function_318((*iParam1 + 228)[bVar52]))
								{
									Function_299(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_294(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_299(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_293(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_299(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_293() //Position: 0x9F83 / 40835
{
	return "XPBonus";
}

void Function_294(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x9F93 / 40851
{
	bool bVar0;
	
	if (Function_318(Param1))
	{
		bVar0 = Function_296(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_295(), bVar0);
	}
}

var Function_295() //Position: 0x9FB9 / 40889
{
	return "PackedWeapon";
}

var Function_296(struct<5> Param0) //Position: 0x9FCE / 40910
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_297())) || SHIFT_LEFT(bParam2, Function_297() + 8));
}

bool Function_297() //Position: 0x9FEC / 40940
{
	return Function_298(39);
}

int Function_298(bool bParam0) //Position: 0x9FF7 / 40951
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

void Function_299(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xA025 / 40997
{
	Function_310(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_304(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_303(), Function_302(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_301(), Function_300(iParam13, iParam14));
}

var Function_300(var uParam0, bool bParam1) //Position: 0xA076 / 41078
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_301() //Position: 0xA086 / 41094
{
	return "PackedGrass";
}

var Function_302(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA09A / 41114
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

var Function_303() //Position: 0xA0BF / 41151
{
	return "PackedMetadata";
}

void Function_304(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xA0D6 / 41174
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_295(), &uVar5))
				{
					Function_308(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_307();
				vVar0 = { StackVal, StackVal, Function_307() };
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
				Function_306();
				vVar0 = { StackVal, StackVal, Function_306() };
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
				Function_305();
				vVar0 = { StackVal, StackVal, Function_305() };
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

vector3 Function_305() //Position: 0xA201 / 41473
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_306() //Position: 0xA212 / 41490
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_307() //Position: 0xA223 / 41507
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_308(var uParam0, int iParam1) //Position: 0xA234 / 41524
{
	*iParam1 = Function_309(uParam0, Function_297(), 0);
	iParam1->f_4 = Function_309(uParam0, Function_297() + 8, Function_297());
	return;
}

var Function_309(var uParam0, int iParam1, bool bParam2) //Position: 0xA257 / 41559
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_202((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_310(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xA276 / 41590
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_317();
			Function_306();
			vVar1 = { StackVal, StackVal, Function_306() };
			break;
		
		case 0x00000001:
			bVar0 = Function_316();
			Function_307();
			vVar1 = { StackVal, StackVal, Function_307() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_315();
			Function_305();
			vVar1 = { StackVal, StackVal, Function_305() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_314(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_312(Function_314()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_311(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_311() //Position: 0xA37A / 41850
{
	return "MPItemGiver";
}

struct<32> Function_312(bool bParam0) //Position: 0xA38E / 41870
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_313("0", &cVar8, ""), 4);
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

struct<32> Function_313(char* cParam0, char* cParam1, char* cParam2) //Position: 0xA3F8 / 41976
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_314() //Position: 0xA417 / 42007
{
	return "PBox_";
}

var Function_315() //Position: 0xA425 / 42021
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_316() //Position: 0xA44B / 42059
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_317() //Position: 0xA473 / 42099
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_318(int iParam0) //Position: 0xA499 / 42137
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_319(bool bParam0) //Position: 0xA4AB / 42155
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_320() //Position: 0xA4BB / 42171
{
	return "ID";
}

bool Function_321(bool bParam0, int iParam1) //Position: 0xA4C6 / 42182
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_78((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_322())
			{
				return 0;
			}
			return !Function_78((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_78((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_322() //Position: 0xA51B / 42267
{
	return Function_40(Global_79962, 1024);
}

vector3 Function_323(bool bParam0) //Position: 0xA52B / 42283
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

vector3 Function_324(bool bParam0) //Position: 0xA552 / 42322
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

var Function_325() //Position: 0xA579 / 42361
{
	return "Type";
}

var Function_326() //Position: 0xA586 / 42374
{
	return "PickupsSet";
}

var Function_327() //Position: 0xA599 / 42393
{
	return "PickupFlagsSet";
}

void Function_328(bool bParam0, bool bParam1) //Position: 0xA5B0 / 42416
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

void Function_329() //Position: 0xA604 / 42500
{
	bLocal_310 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SQUAD_stage_one_guards"));
	bLocal_311 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SQUAD_stage_one_barn_guards"));
	bLocal_312 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SQUAD_stage_two_guards"));
	Function_330(bLocal_312, Local_99.f_120, 0.0f, 4294967295, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_312, 0);
	bLocal_313 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SQUAD_stage_two_tnt"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_313, 0);
	bLocal_314 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_99, "SQUAD_stage_three_guards"));
	Function_330(bLocal_314, Local_99.f_116, 3.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_314, 0);
	return;
}

void Function_330(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xA6F4 / 42740
{
	var uVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	Function_331(bParam0, 37, fParam2);
	uVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, bParam3, bParam1, 2, 1);
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam3, bParam1, iParam4);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, uVar1, uVar0);
}

void Function_331(bool bParam0, int iParam1, bool bParam2) //Position: 0xA735 / 42805
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

void Function_332(var uParam0, bool bParam1) //Position: 0xA77F / 42879
{
	Function_333(bParam1);
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
		Function_263(uParam0, 1);
	}
	Function_42(256);
	Function_101(64);
	Function_72(0);
	return;
}

void Function_333(var uParam0) //Position: 0xA7F0 / 42992
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_334() //Position: 0xA7FE / 43006
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	
	Function_336(4, 1);
	uVar0 = uVar0;
	Local_99 = CREATE_LAYOUT("SolomonsFollyMP_layout");
	Local_99.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_99, "v_sol_total", 2, -3873.344f, 12.09621f, 3655.206f, 0.0f, 0.0f, 0.0f, 60.4158f, 12.01898f, 77.89906f);
	Local_99.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_99, "v_sol_barn_outside", 2, -3888.305f, 11.29722f, 3654.635f, 0.0f, 0.0f, 0.0f, 13.45415f, 12.01898f, 15.28438f);
	Local_99.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_99, "v_sol_barn_inside", 2, -3888.691f, 10.13415f, 3654.831f, 0.0f, 0.0f, 0.0f, 9.816661f, 5.40252f, 10.73684f);
	Local_99.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_99, "v_sol_Broken_House", 2, -3859.971f, 9.834156f, 3666.381f, 0.0f, 0.0f, 0.0f, 6.424783f, 4.149919f, 7.788229f);
	Local_99.f_148 = CREATE_VOLUME_SET_IN_LAYOUT(Local_99, "SpawnVol_0_set");
	(*&Local_99 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_0_sub_0", 2, -3832.179f, 9.689736f, 3726.5f, 0.0f, -125.9504f, 0.0f, 8.913229f, 7.476769f, 7.600158f);
	ADD_TO_VOLUME_SET(Local_99.f_148, (*&Local_99 + 132)[0]);
	(*&Local_99 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_0_sub_1", 2, -3814.845f, 8.58287f, 3658.716f, 0.0f, -102.6838f, 0.0f, 8.913229f, 7.476769f, 7.600158f);
	ADD_TO_VOLUME_SET(Local_99.f_148, (*&Local_99 + 132)[1]);
	(*&Local_99 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_0_sub_2", 2, -3815.09f, 8.58287f, 3621.07f, 0.0f, -79.02432f, 0.0f, 8.913229f, 7.476769f, 7.600158f);
	ADD_TO_VOLUME_SET(Local_99.f_148, (*&Local_99 + 132)[2]);
	Local_99.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_99, "SpawnVol_1_set");
	(*&Local_99 + 152)[0] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_01_Sub_0", 2, -3859.637f, 6.347124f, 3667.18f, 0.0f, -362.8265f, 0.0f, 2.61276f, 2.145998f, 3.204233f);
	ADD_TO_VOLUME_SET(Local_99.f_168, (*&Local_99 + 152)[0]);
	(*&Local_99 + 152)[1] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_01_Sub_1", 2, -3859.382f, 9.16323f, 3667.193f, 0.0f, -362.8265f, 0.0f, 2.61276f, 2.145998f, 3.204233f);
	ADD_TO_VOLUME_SET(Local_99.f_168, (*&Local_99 + 152)[1]);
	(*&Local_99 + 152)[2] = CREATE_VOLUME_IN_LAYOUT(Local_99, "spawnvol_01_Sub_2", 2, -3888.321f, 9.047256f, 3653.44f, 0.0f, -269.7047f, 0.0f, 2.61276f, 2.145998f, 3.204233f);
	ADD_TO_VOLUME_SET(Local_99.f_168, (*&Local_99 + 152)[2]);
	*(&Local_99 + 172) = { -3871.907f, 7.900541f, 3655.19f };
	*(&Local_99 + 172 + 12) = { 0.0f, -279.4036f, 0.0f };
	Local_99.f_196 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_99, 8, 0);
	*(&Local_99 + 200[06]) = { -3884.642f, 11.36244f, 3657.18f };
	*(&Local_99 + 200[06] + 12) = { 0.0f, -88.7841f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_99, "f_weapon_pickup", -3884.642f, 11.36244f, 3657.18f, 0.0f, -88.7841f, 0.0f);
	Function_335(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_99.f_196);
	*(&Local_99 + 200[16]) = { -3854.993f, 8.117328f, 3662.385f };
	*(&Local_99 + 200[16] + 12) = { 0.0f, -185.4285f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Ammo_pickup", -3854.993f, 8.117328f, 3662.385f, 0.0f, -185.4285f, 0.0f);
	Function_335(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_99.f_196);
	*(&Local_99 + 200[26]) = { -3886.977f, 8.031368f, 3648.904f };
	*(&Local_99 + 200[26] + 12) = { 0.0f, -357.7897f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Ammo_pickup1", -3886.977f, 8.031368f, 3648.904f, 0.0f, -357.7897f, 0.0f);
	Function_335(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_99.f_196);
	*(&Local_99 + 276) = { -3899.0f, 26.519f, 3707.736f };
	*(&Local_99 + 276 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_99.f_300 = CREATE_POINT_IN_LAYOUT(Local_99, "f_TNT_Spawn", -3899.0f, 26.519f, 3707.736f, 0.0f, 0.0f, 0.0f);
	Local_99.f_304 = CREATE_OBJECTSET_IN_LAYOUT("TNT_Throw_FlagsSet", Local_99, 8, 0);
	*(&Local_99 + 308[06]) = { -3888.142f, 25.759f, 3701.095f };
	*(&Local_99 + 308[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_99, "f_TNT_Throw", -3888.142f, 25.759f, 3701.095f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_99.f_304);
	*(&Local_99 + 308[16]) = { -3898.088f, 26.051f, 3702.864f };
	*(&Local_99 + 308[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_99, "f_TNT_Throw1", -3898.088f, 26.051f, 3702.864f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_99.f_304);
	*(&Local_99 + 308[26]) = { -3901.156f, 26.214f, 3702.331f };
	*(&Local_99 + 308[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_99, "f_TNT_Throw2", -3901.156f, 26.214f, 3702.331f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_99.f_304);
	Local_99.f_384 = CREATE_OBJECTSET_IN_LAYOUT("Barn_Cover_FlagsSet", Local_99, 8, 0);
	*(&Local_99 + 388[06]) = { -3884.229f, 11.14631f, 3656.36f };
	*(&Local_99 + 388[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover", -3884.229f, 11.14631f, 3656.36f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_99.f_384);
	*(&Local_99 + 388[16]) = { -3884.565f, 8.031368f, 3651.435f };
	*(&Local_99 + 388[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover1", -3884.565f, 8.031368f, 3651.435f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_99.f_384);
	*(&Local_99 + 388[26]) = { -3884.378f, 8.031368f, 3655.622f };
	*(&Local_99 + 388[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover2", -3884.378f, 8.031368f, 3655.622f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_99.f_384);
	*(&Local_99 + 388[36]) = { -3893.1f, 8.031368f, 3655.388f };
	*(&Local_99 + 388[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover3", -3893.1f, 8.031368f, 3655.388f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_99.f_384);
	*(&Local_99 + 388[46]) = { -3893.1f, 8.031368f, 3651.608f };
	*(&Local_99 + 388[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover4", -3893.1f, 8.031368f, 3651.608f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_99.f_384);
	*(&Local_99 + 388[56]) = { -3883.179f, 8.031368f, 3664f };
	*(&Local_99 + 388[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover5", -3883.179f, 8.031368f, 3664f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_99.f_384);
	*(&Local_99 + 388[66]) = { -3883.179f, 8.031368f, 3648.65f };
	*(&Local_99 + 388[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_99, "f_Cover6", -3883.179f, 8.031368f, 3648.65f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_99.f_384);
	Local_99.f_560 = CREATE_OBJECTSET_IN_LAYOUT("Broken_House_Cover_FlagsSet", Local_99, 8, 0);
	*(&Local_99 + 564[06]) = { -3861.973f, 8.108f, 3665.189f };
	*(&Local_99 + 564[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_99, "nf_h_Cover", -3861.973f, 8.108f, 3665.189f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_99.f_560);
	*(&Local_99 + 564[16]) = { -3861.211f, 8.139576f, 3669.081f };
	*(&Local_99 + 564[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_99, "f_h_Cover1", -3861.211f, 8.139576f, 3669.081f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_99.f_560);
	*(&Local_99 + 564[26]) = { -3857.708f, 8.108f, 3667.155f };
	*(&Local_99 + 564[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_99, "f_h_Cover2", -3857.708f, 8.108f, 3667.155f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_99.f_560);
	*(&Local_99 + 564[36]) = { -3868.311f, 8.018096f, 3666.409f };
	*(&Local_99 + 564[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_99, "f_h_Cover3", -3868.311f, 8.018096f, 3666.409f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_99.f_560);
	*(&Local_99 + 564[46]) = { -3852.352f, 8.180896f, 3671.267f };
	*(&Local_99 + 564[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_99, "f_h_Cover4", -3852.352f, 8.180896f, 3671.267f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_99.f_560);
	*(&Local_99 + 564[56]) = { -3854.436f, 8.031368f, 3649.564f };
	*(&Local_99 + 564[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_99, "f_h_Cover5", -3854.436f, 8.031368f, 3649.564f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_99.f_560);
	return;
}

void Function_335(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB30D / 45837
{
	DECOR_SET_INT(iParam0, Function_325(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_320(), bParam2);
	}
	return;
}

void Function_336(int iParam0, int iParam1) //Position: 0xB331 / 45873
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

int Function_337(int iParam0) //Position: 0xB37A / 45946
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_344(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_343();
			Function_368(&iLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_342())
			{
				iLocal_98 = 2;
			}
			else if (Function_338(&iLocal_45))
			{
				Function_343();
				Function_369(&iLocal_45, 5.0f);
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

bool Function_338(int iParam0) //Position: 0xB426 / 46118
{
	if (Function_340(iParam0))
	{
		Function_339(iParam0);
		return 1;
	}
	return 0;
}

void Function_339(int iParam0) //Position: 0xB43C / 46140
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_340(int iParam0) //Position: 0xB450 / 46160
{
	if (Function_67(iParam0))
	{
		if (Function_341(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_341(int iParam0) //Position: 0xB46B / 46187
{
	return -Function_63(iParam0);
}

bool Function_342() //Position: 0xB477 / 46199
{
	return iLocal_20;
}

void Function_343() //Position: 0xB47F / 46207
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_344(bool bParam0) //Position: 0xB4AB / 46251
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 46333);
	return;
}

void Function_345(bool bParam0) //Position: 0xB4FD / 46333
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
	if (Function_114(&Var2))
	{
	}
	bVar8 = Function_105(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_113(&Var2, 1);
	Function_54(&Var2);
	return;
}

int Function_346() //Position: 0xB600 / 46592
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_347(&Local_99 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_27710].f_32))
		{
			return 0;
		}
		if (!Function_347(&iLocal_306))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_347(int iParam0) //Position: 0xB63A / 46650
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_352();
	iVar1 = 0;
	if (!Function_85(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_351(iParam0[iVar03], 8);
		}
		else if (Function_350())
		{
			iVar1 = 1;
			Function_351(iParam0[iVar03], 8);
		}
		Function_351(iParam0[iVar03], 16);
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
				Function_351(iParam0[iVar03], 1);
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
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
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
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_351(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_351(iParam0[iVar03], 2);
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
	Function_348();
	return 1;
}

void Function_348() //Position: 0xB9B5 / 47541
{
	if (!Function_349(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_349(int iParam0) //Position: 0xB9F5 / 47605
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_350() //Position: 0xBA11 / 47633
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

void Function_351(var uParam0, int iParam1) //Position: 0xBA3C / 47676
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_352() //Position: 0xBA4D / 47693
{
	if (!Function_349(128))
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

void Function_353(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBA8F / 47759
{
	Function_354(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_354(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBAA6 / 47782
{
	if (!Function_319(iParam1))
	{
		return;
	}
	Function_355(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_355(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBAC9 / 47817
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

void Function_356(int iParam0, bool bParam1) //Position: 0xBAF3 / 47859
{
	Function_360(iParam0);
	Function_360(iParam0 + 228);
	if (bParam1)
	{
		Function_357(iParam0);
	}
	return;
}

void Function_357(int iParam0) //Position: 0xBB0F / 47887
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_358(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_358(var uParam0, int iParam1) //Position: 0xBB2F / 47919
{
	Function_359(uParam0, iParam1, 0);
	return;
}

void Function_359(int iParam0, int iParam1, int iParam2) //Position: 0xBB3D / 47933
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_360(int iParam0) //Position: 0xBB4E / 47950
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_362(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_361(iParam0, 0.0f);
	return;
}

void Function_361(var uParam0, int iParam1) //Position: 0xBB7B / 47995
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_362(var uParam0) //Position: 0xBB87 / 48007
{
	Function_355(uParam0, 4294967295, 0, 1);
	return;
}

void Function_363() //Position: 0xBB95 / 48021
{
	Function_364(&Local_99 + 4, 486, 2, 1);
	Function_364(&Local_99 + 4, 487, 2, 1);
	Function_364(&Local_99 + 4, 488, 2, 1);
	Function_364(&Local_99 + 4, 489, 2, 1);
	Function_364(&Local_99 + 4, 490, 2, 1);
	Function_364(&Local_99 + 4, 491, 2, 1);
	Function_364(&Local_99 + 4, 493, 2, 1);
	Function_364(&Local_99 + 4, 492, 2, 1);
	return;
}

var Function_364(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xBC03 / 48131
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
			Function_351(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_351(uParam0[iVar03], 8);
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

void Function_365() //Position: 0xBCD3 / 48339
{
	Function_366(&iLocal_306, "mp_action_areas", 10, 0);
	return;
}

var Function_366(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBCF5 / 48373
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_367(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_351(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_367(var uParam0, int iParam1, int iParam2) //Position: 0xBD2D / 48429
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_85(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_351(uParam0[iVar03], 4);
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

void Function_368(int iParam0, float fParam1) //Position: 0xBDF1 / 48625
{
	if (!Function_67(iParam0))
	{
		Function_369(iParam0, fParam1);
	}
	return;
}

void Function_369(int iParam0, float fParam1) //Position: 0xBE07 / 48647
{
	Function_278(iParam0, -fParam1);
	return;
}

void Function_370(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xBE15 / 48661
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_371(uParam4);
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

int Function_371(float fParam0) //Position: 0xBE5B / 48731
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

bool Function_372(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xBE8F / 48783
{
	if (!Function_414())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_224(38) <= 10 && NET_GET_PLAYMODE() != 0)
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
		Function_409();
	}
	Function_407(3);
	Function_406();
	if (StackVal != 0)
	{
		Function_404(bLocal_41, *uParam1, uParam2, 1);
		Function_403(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_400(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_385(52683, 52031);
			break;
		
		case 0x00000002:
			Function_385(49408, 48982);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_373(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xBF56 / 48982
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_377(bParam1, uParam2, uParam3);
		bVar0 = Function_376(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_374(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_376(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_376(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_376(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_131(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_374(bool bParam0, bool bParam1, int iParam2) //Position: 0xBFF9 / 49145
{
	var uVar0;
	
	return Function_375(bParam0, bParam1, &uVar0, iParam2);
}

int Function_375(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC00C / 49164
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

int Function_376(int iParam0, bool bParam1) //Position: 0xC071 / 49265
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_224(iParam0);
	}
	if (!Function_133(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_377(bool bParam0, int iParam1, bool bParam2) //Position: 0xC0DF / 49375
{
	if (bParam0)
	{
		if (Function_123())
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

int Function_378() //Position: 0xC100 / 49408
{
	if (!Function_379(1))
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

bool Function_379(bool bParam0) //Position: 0xC1BC / 49596
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_123() || Function_384(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_382(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_123())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_380(Function_123());
	return 1;
}

void Function_380(bool bParam0) //Position: 0xC23D / 49725
{
	if (bParam0 || Function_39(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_39(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_39(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_39(1048576) || Function_39(4)) || Function_381(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_33(0x20000000, 0, 1);
	}
	return;
}

var Function_381(int iParam0, bool bParam1) //Position: 0xC2C6 / 49862
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_382(var uParam0) //Position: 0xC2E6 / 49894
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_383(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_383(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xC2FA / 49914
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

int Function_384(bool bParam0, bool bParam1) //Position: 0xC33F / 49983
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

void Function_385(int iParam0, int iParam1) //Position: 0xC373 / 50035
{
	Function_386(iParam0, iParam1, 52024);
	return;
}

void Function_386(var uParam0, var uParam1, int iParam2) //Position: 0xC384 / 50052
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
	if (Function_123())
	{
		Function_139(!Function_39(16));
	}
	if (Function_39(16))
	{
		Function_388(&uParam0, &uParam1, &iParam2);
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
			Function_387();
		}
		Function_33(16384, 1, 1);
	}
	else if (!Function_39(32))
	{
		Function_387();
	}
	Function_33(32768, 0, 1);
	return;
}

void Function_387() //Position: 0xC51D / 50461
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

void Function_388(var uParam0, var uParam1, int iParam2) //Position: 0xC626 / 50726
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
			if (!Function_133(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_389(bVar1, 2048, 1))
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
				if (Function_374(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_374(bVar1, (4294966296 - bVar1), 1))
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

bool Function_389(bool bParam0, int iParam1, bool bParam2) //Position: 0xC79E / 51102
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_381(iParam1, bParam2);
	}
	if (!Function_133(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_390(iParam1), 64);
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

var Function_390(int iParam0) //Position: 0xC81F / 51231
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

int Function_391() //Position: 0xCB38 / 52024
{
	return 1;
}

int Function_392(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xCB3F / 52031
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
	
	Function_377(bParam1, iParam2, bParam3);
	iVar0 = Function_396(bParam0);
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
		bVar1 = (bVar1 + Function_18((CEIL(Function_395(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_395(8, bParam0));
	}
	if (!bParam1)
	{
		Function_374(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_394(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_394(1) == Function_396(bParam0))
		{
			if (Function_389(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_395(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_395(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_393(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_393(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_395(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_393(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_393(&iVar6), FLOOR(Function_395(9, bParam0)));
		}
		else
		{
			Function_393(&iVar6);
		}
	}
	if (Function_389(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_393(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_393(int iParam0) //Position: 0xCD00 / 52480
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_394(int iParam0) //Position: 0xCD13 / 52499
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_395(int iParam0, bool bParam1) //Position: 0xCD33 / 52531
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_27(iParam0);
	}
	if (!Function_133(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_396(bool bParam0) //Position: 0xCD9C / 52636
{
	if (!Function_133(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_397();
	}
	return Global_76943[bParam096];
}

var Function_397() //Position: 0xCDC1 / 52673
{
	return Global_78480;
}

int Function_398() //Position: 0xCDCB / 52683
{
	bool bVar0;
	int iVar1;
	
	if (!Function_379(1))
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
	if (Function_394(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_393(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_393(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_393(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_393(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_393(&iVar1), "mp_plist_mw");
	Function_399();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_393(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_399() //Position: 0xCEEE / 52974
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

void Function_400(int iParam0) //Position: 0xCF2B / 53035
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
		Function_402(&bLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_401(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_401(int iParam0) //Position: 0xCFA4 / 53156
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_402(int iParam0) //Position: 0xCFCF / 53199
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

void Function_403(var uParam0, bool bParam1) //Position: 0xD016 / 53270
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
							Function_100(bVar1);
							vVar3 = { StackVal, StackVal, Function_100(bVar1) };
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

int Function_404(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xD161 / 53601
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
						if (Function_405(bVar4) == bParam1)
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

int Function_405(bool bParam0) //Position: 0xD243 / 53827
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

void Function_406() //Position: 0xD29D / 53917
{
	Function_407(4);
	return;
}

void Function_407(int iParam0) //Position: 0xD2A7 / 53927
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
			Function_408(iParam0);
		}
	}
	return;
}

void Function_408(bool bParam0) //Position: 0xD2D9 / 53977
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_409() //Position: 0xD2E8 / 53992
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				if (Function_411(bVar0, bLocal_19, 1, 0, 0, -1.0f))
				{
					Function_410();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_410() //Position: 0xD31D / 54045
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_411(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xD336 / 54070
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_413(bParam1, 0, 0, 0, 0, 0) < 0)
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
		if (Function_412(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_412(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xD39F / 54175
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

int Function_413(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD48C / 54412
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

bool Function_414() //Position: 0xD53A / 54586
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

void Function_415(bool bParam0) //Position: 0xD55D / 54621
{
	if (Function_416(bParam0))
	{
		Function_241(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
	}
	return;
}

bool Function_416(bool bParam0) //Position: 0xD575 / 54645
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_417(bParam0))
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

bool Function_417(bool bParam0) //Position: 0xD5C2 / 54722
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

bool Function_418(int iParam0) //Position: 0xD5EF / 54767
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
	if (!Function_433(16, 0))
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
	Function_277(iParam0 + 16 + 8);
	Function_290(iParam0, 55831);
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
	Function_424(2);
	Function_423(1);
	iVar3 = 55203;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 55084);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 55045);
	return 1;
}

void Function_419(bool bParam0) //Position: 0xD705 / 55045
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

void Function_420(bool bParam0) //Position: 0xD72C / 55084
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

void Function_421(bool bParam0) //Position: 0xD7A3 / 55203
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
				Function_422(&bLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_422(var uParam0, int iParam1) //Position: 0xD7F0 / 55280
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

void Function_423(int iParam0) //Position: 0xD845 / 55365
{
	Function_43(&Global_83864 + 1252, iParam0);
	return;
}

void Function_424(int iParam0) //Position: 0xD857 / 55383
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
	Function_169();
	Function_170();
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
	Function_426(0, 0);
	Function_425();
	return;
}

void Function_425() //Position: 0xD91B / 55579
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_426(bool bParam0, bool bParam1) //Position: 0xD934 / 55604
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_431(&Global_78480);
	Function_430(&Global_78480);
	uVar0 = Function_224(37);
	Function_428();
	if (!bParam0)
	{
		Function_220(37, uVar0);
	}
	Function_95(18264, 0);
	Function_427();
	return;
}

void Function_427() //Position: 0xD980 / 55680
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_428() //Position: 0xD99F / 55711
{
	Function_429(&Global_78480 + 220);
	return;
}

void Function_429(int iParam0) //Position: 0xD9AE / 55726
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

void Function_430(int iParam0) //Position: 0xD9CF / 55759
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

void Function_431(int iParam0) //Position: 0xD9F3 / 55795
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

void Function_432(var uParam0) //Position: 0xDA17 / 55831
{
	uParam0 = uParam0;
	return;
}

bool Function_433(var uParam0, bool bParam1) //Position: 0xDA21 / 55841
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_434("freemodetest");
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

int Function_434(bool bParam0) //Position: 0xDAD4 / 56020
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

