//Decompiled with MagicRDR v1.0
//Function Count : 446
//Statics Count : 625
//Natives Count : 423
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
	var uLocal_45 = 0;
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
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	struct<989> Local_107 = { 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_608 = 1;
	Local_379 = Global_30668[2];
	if (!Function_429(&Local_379))
	{
		TERMINATE_THIS_SCRIPT();
	}
	Function_428(&uLocal_605, 45.0f);
	iLocal_617 = 0;
	iLocal_620 = 0;
	iLocal_621 = 0;
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

void Function_1() //Position: 0x90 / 144
{
	Function_82(&bLocal_407);
	Function_71(Local_107);
	if (IS_BLIP_VALID(bLocal_587))
	{
		REMOVE_BLIP(bLocal_587);
	}
	if (IS_BLIP_VALID(bLocal_588))
	{
		REMOVE_BLIP(bLocal_588);
	}
	if (IS_BLIP_VALID(bLocal_589))
	{
		REMOVE_BLIP(bLocal_589);
	}
	Function_69(&uLocal_613, 1, 0, 4294967295, 4294967295);
	Function_68();
	Function_2(&Local_379);
	return;
}

void Function_2(int iParam0) //Position: 0xE1 / 225
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

void Function_3(int iParam0) //Position: 0x1BD / 445
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x1CF / 463
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x1DB / 475
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

void Function_6() //Position: 0x1FB / 507
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x230 / 560
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

int Function_8(float fParam0, var uParam1, bool bParam2) //Position: 0x2EB / 747
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x31B / 795
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x337 / 823
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x557 / 1367
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

var Function_12() //Position: 0xB84 / 2948
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB8C / 2956
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB9D / 2973
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

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0xC92 / 3218
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xCAB / 3243
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xD10 / 3344
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_18(int iParam0, bool bParam1) //Position: 0xD22 / 3362
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xD34 / 3380
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

int Function_20(int iParam0) //Position: 0xE64 / 3684
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE73 / 3699
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xEAC / 3756
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xEE9 / 3817
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1083 / 4227
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

void Function_25(int iParam0, float fParam1) //Position: 0x12C7 / 4807
{
	Function_26(iParam0, (Function_27(iParam0) + fParam1));
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x12DA / 4826
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_27(int iParam0) //Position: 0x1303 / 4867
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_28() //Position: 0x1313 / 4883
{
	if (Function_30())
	{
		return (Function_29() != 1 || Function_29() != 0);
	}
	return 0;
}

int Function_29() //Position: 0x132C / 4908
{
	return Global_79349.f_16;
}

bool Function_30() //Position: 0x1338 / 4920
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_31() //Position: 0x1341 / 4929
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

void Function_32() //Position: 0x139B / 5019
{
	Function_33(1024, 0, 1);
	Function_33(1, 0, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x13AF / 5039
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

void Function_34(int iParam0, int iParam1) //Position: 0x13D7 / 5079
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_35(int iParam0, int iParam1) //Position: 0x13EA / 5098
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_36() //Position: 0x13F9 / 5113
{
	if (Function_38())
	{
		Function_37();
	}
	Function_33(4096, 0, 1);
	return;
}

void Function_37() //Position: 0x1410 / 5136
{
	Function_33(32768, 1, 0);
	return;
}

bool Function_38() //Position: 0x141F / 5151
{
	return (Function_39(4096) || Function_39(4));
}

bool Function_39(bool bParam0) //Position: 0x1430 / 5168
{
	return Function_40(Global_76905.f_132, bParam0);
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x1441 / 5185
{
	return (uParam0 && bParam1) == 0;
}

var Function_41() //Position: 0x144E / 5198
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42(int iParam0) //Position: 0x1463 / 5219
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

void Function_43(var uParam0, int iParam1) //Position: 0x14BC / 5308
{
	Function_35(uParam0, iParam1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x14C9 / 5321
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, false, 0, 0, 0, 0);
	return;
}

struct<32> Function_45(int iParam0) //Position: 0x14DE / 5342
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

bool Function_46(int iParam0) //Position: 0x159B / 5531
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_47(int iParam0) //Position: 0x15B1 / 5553
{
	Function_48(&Global_79338, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x15C0 / 5568
{
	Function_34(uParam0, iParam1);
	return;
}

void Function_49(int iParam0) //Position: 0x15CD / 5581
{
	Function_48(&Global_83864 + 1252, iParam0);
	return;
}

void Function_50(int iParam0) //Position: 0x15DF / 5599
{
	Function_48(&Global_78617 + 52, iParam0);
	return;
}

void Function_51(int iParam0) //Position: 0x15F0 / 5616
{
	Function_48(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_52() //Position: 0x1629 / 5673
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_53() //Position: 0x1640 / 5696
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

void Function_54(int iParam0) //Position: 0x1662 / 5730
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_55() //Position: 0x1670 / 5744
{
	Function_56();
	return;
}

void Function_56() //Position: 0x1679 / 5753
{
	Function_57(4294967286);
	return;
}

void Function_57(bool bParam0) //Position: 0x1685 / 5765
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

void Function_58(var uParam0, int iParam1) //Position: 0x16C2 / 5826
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_59(int iParam0) //Position: 0x16D1 / 5841
{
	Local_49 = *iParam0;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x16DC / 5852
{
	*uParam0 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x16E7 / 5863
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_62(int iParam0) //Position: 0x16F5 / 5877
{
	*iParam0 = Local_49;
	return;
}

float Function_63(int iParam0) //Position: 0x1700 / 5888
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

void Function_64() //Position: 0x17D1 / 6097
{
	if (!Function_65())
	{
	}
	return;
}

bool Function_65() //Position: 0x17DE / 6110
{
	return NET_IS_IN_SESSION();
}

bool Function_66(int iParam0) //Position: 0x17E7 / 6119
{
	return Function_40(*iParam0, 2);
}

bool Function_67(int iParam0) //Position: 0x17F4 / 6132
{
	return Function_40(*iParam0, 1);
}

void Function_68() //Position: 0x1801 / 6145
{
	Function_82(&Local_107 + 4);
	RELEASE_LAYOUT_REF(Local_107);
	return;
}

void Function_69(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1813 / 6163
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_70(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_70(int iParam0) //Position: 0x1837 / 6199
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

void Function_71(int iParam0) //Position: 0x1D8A / 7562
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

void Function_72(bool bParam0) //Position: 0x1DAE / 7598
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

void Function_73(bool bParam0, bool bParam1) //Position: 0x1DF2 / 7666
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

int Function_74(bool bParam0, bool bParam1) //Position: 0x1E6F / 7791
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

void Function_75(int iParam0) //Position: 0x1E93 / 7827
{
	Function_48(&Global_79337, iParam0);
	return;
}

void Function_76(int iParam0) //Position: 0x1EA2 / 7842
{
	Function_43(&Global_79337, iParam0);
	return;
}

bool Function_77(int iParam0) //Position: 0x1EB1 / 7857
{
	return Function_78(Global_79337, iParam0);
}

bool Function_78(var uParam0, int iParam1) //Position: 0x1EC0 / 7872
{
	return (uParam0 && iParam1) == 0;
}

void Function_79(bool bParam0) //Position: 0x1ECD / 7885
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

void Function_80(bool bParam0) //Position: 0x1F6C / 8044
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

void Function_81(bool bParam0) //Position: 0x1F9D / 8093
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

void Function_82(int iParam0) //Position: 0x1FE8 / 8168
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

void Function_83(var uParam0, int iParam1) //Position: 0x200E / 8206
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

void Function_84(var uParam0, int iParam1) //Position: 0x213C / 8508
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_85(int iParam0, int iParam1) //Position: 0x2156 / 8534
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_86() //Position: 0x2173 / 8563
{
	if (!Function_383(&Local_379, &Local_107, 60794, 0, 0))
	{
		return 0;
	}
	if (Function_63(&uLocal_605) < 0.0f)
	{
		iLocal_611 = 1;
		Function_382(&uLocal_605, 45.0f);
	}
	if (StackVal != 11)
	{
		if (Function_67(&uLocal_614))
		{
			if (Function_63(&uLocal_614) <= 0.0f)
			{
				if (StackVal != 1 && !iLocal_586)
				{
					Function_380(&uLocal_613, 6, 40, 38, 10.0f);
				}
				else
				{
					Function_380(&uLocal_613, 38, 40, 38, 10.0f);
				}
				Function_382(&uLocal_614, 5.0f);
			}
		}
		else
		{
			Function_428(&uLocal_614, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_284();
			UNK_0x2148AC15(322, 10);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_275();
			UNK_0x2148AC15(322, 12);
			break;
		
		case 0x00000002:
			Function_234();
			break;
		
		case 0x00000004:
			Function_229();
			UNK_0x2148AC15(322, 15);
			break;
		
		case 0x0000000B:
			Function_87();
			break;
	}
	return 1;
}

void Function_87() //Position: 0x226B / 8811
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_228();
			Function_69(&uLocal_613, 1, 0, 4294967295, 4294967295);
			Local_379.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_227();
			Function_88(&Local_379);
			break;
	}
	return;
}

var Function_88(int iParam0) //Position: 0x22AA / 8874
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

void Function_89(var uParam0, bool bParam1, int iParam2) //Position: 0x27E4 / 10212
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

bool Function_90(var uParam0, int iParam1) //Position: 0x28EF / 10479
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_91(int iParam0) //Position: 0x290B / 10507
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

bool Function_92() //Position: 0x298A / 10634
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

void Function_93(var uParam0, int iParam1) //Position: 0x29F3 / 10739
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_94(var uParam0, int iParam1) //Position: 0x2A0A / 10762
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_95(int iParam0, bool bParam1) //Position: 0x2A19 / 10777
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

bool Function_96(int iParam0) //Position: 0x2A54 / 10836
{
	return Function_78(Global_78617.f_52, iParam0);
}

bool Function_97(vector3 vParam0) //Position: 0x2A65 / 10853
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

var Function_98(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2AD9 / 10969
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

void Function_99(int iParam0) //Position: 0x2B74 / 11124
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

vector3 Function_100(bool bParam0) //Position: 0x2BD2 / 11218
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_101(int iParam0) //Position: 0x2BE3 / 11235
{
	Function_43(&Global_78617 + 52, iParam0);
	return;
}

bool Function_102(bool bParam0, bool bParam1, float fParam2) //Position: 0x2BF4 / 11252
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

bool Function_103(int iParam0) //Position: 0x2E47 / 11847
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

int Function_104(bool bParam0) //Position: 0x2E8A / 11914
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

int Function_105(int iParam0) //Position: 0x2EB1 / 11953
{
	return *iParam0;
}

void Function_106(var uParam0, int iParam1) //Position: 0x2EBA / 11962
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_107(int iParam0) //Position: 0x2EC9 / 11977
{
	Function_60(iParam0, 4294967286);
	return;
}

bool Function_108(bool bParam0) //Position: 0x2ED7 / 11991
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_109(var uParam0, bool bParam1) //Position: 0x2EE4 / 12004
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

bool Function_110(bool bParam0) //Position: 0x2EFE / 12030
{
	return Function_40(*bParam0, 2);
}

bool Function_111() //Position: 0x2F0B / 12043
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

bool Function_112(int iParam0, var uParam1, int iParam2) //Position: 0x2F29 / 12073
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

void Function_113(int iParam0, bool bParam1) //Position: 0x2F7A / 12154
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

bool Function_114(int iParam0) //Position: 0x2F94 / 12180
{
	return Function_40(*iParam0, 1);
}

void Function_115(int iParam0) //Position: 0x2FA1 / 12193
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

bool Function_116(int iParam0) //Position: 0x309E / 12446
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

int Function_117(int iParam0) //Position: 0x32DA / 13018
{
	return StackVal;
}

bool Function_118(bool bParam0) //Position: 0x32E8 / 13032
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_119() //Position: 0x32FE / 13054
{
	Function_122(8);
	Function_120(&Global_79298);
	return;
}

void Function_120(int iParam0) //Position: 0x3310 / 13072
{
	Function_121(iParam0, 0.0f);
	return;
}

void Function_121(int iParam0, float fParam1) //Position: 0x331C / 13084
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_35(iParam0, 1);
	Function_34(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_122(int iParam0) //Position: 0x333D / 13117
{
	Function_43(&Global_79338, iParam0);
	return;
}

bool Function_123() //Position: 0x334C / 13132
{
	return Function_39(32768);
}

void Function_124(bool bParam0) //Position: 0x3359 / 13145
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_50(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_125(int iParam0, int iParam1, bool bParam2) //Position: 0x3384 / 13188
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

void Function_126() //Position: 0x3431 / 13361
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_128();
	Function_127();
	iLocal_17 = 2;
	return;
}

void Function_127() //Position: 0x346C / 13420
{
	Function_33(1025, 1, 0);
	return;
}

void Function_128() //Position: 0x347A / 13434
{
	if (!Function_38())
	{
		Function_37();
	}
	Function_33(4096, 1, 1);
	return;
}

void Function_129(var uParam0, var uParam1) //Position: 0x3492 / 13458
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_130() //Position: 0x34B7 / 13495
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

int Function_131(bool bParam0) //Position: 0x34F6 / 13558
{
	return Function_132(0, bParam0);
}

int Function_132(int iParam0, bool bParam1) //Position: 0x3502 / 13570
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

bool Function_133(bool bParam0) //Position: 0x3569 / 13673
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

int Function_134(int iParam0) //Position: 0x360A / 13834
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_135(int iParam0) //Position: 0x361A / 13850
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

void Function_136(bool bParam0, int iParam1) //Position: 0x3A3E / 14910
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

struct<16> Function_137(var uParam0) //Position: 0x3C6B / 15467
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

int Function_138() //Position: 0x3CDC / 15580
{
	return Function_224(12);
}

void Function_139(bool bParam0) //Position: 0x3CE7 / 15591
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_33(16384, 0, 1);
	return;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x3D01 / 15617
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

float Function_141(bool bParam0, bool bParam1) //Position: 0x3D5E / 15710
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_142(int iParam0) //Position: 0x3D7D / 15741
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_143(bool bParam0) //Position: 0x3DDB / 15835
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, false, 0, 0, 0, 0);
	return;
}

bool Function_144() //Position: 0x3DEF / 15855
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_145(int iParam0) //Position: 0x3DFE / 15870
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

void Function_146(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3EF4 / 16116
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

void Function_147(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3FB8 / 16312
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_138();
	}
}

void Function_148(int iParam0) //Position: 0x3FF9 / 16377
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

void Function_149(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4070 / 16496
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

void Function_150(bool bParam0) //Position: 0x418C / 16780
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

void Function_151() //Position: 0x4215 / 16917
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

void Function_152() //Position: 0x4267 / 16999
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

void Function_153() //Position: 0x436D / 17261
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

void Function_154() //Position: 0x43A0 / 17312
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

void Function_155() //Position: 0x452E / 17710
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

void Function_156() //Position: 0x46E2 / 18146
{
	Function_157(&Global_28260, 1, 0);
	return;
}

void Function_157(int iParam0, bool bParam1, int iParam2) //Position: 0x46F0 / 18160
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

struct<8> Function_158(int iParam0) //Position: 0x48E1 / 18657
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

int Function_159(int iParam0, bool bParam1, bool bParam2) //Position: 0x4987 / 18823
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

int Function_160(bool bParam0) //Position: 0x4C22 / 19490
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_161() //Position: 0x4C63 / 19555
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

struct<8> Function_162() //Position: 0x4CEC / 19692
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

struct<8> Function_163() //Position: 0x4D83 / 19843
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

void Function_164() //Position: 0x4E02 / 19970
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

int Function_165(int iParam0, bool bParam1, int iParam2) //Position: 0x4E3B / 20027
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

void Function_166(int iParam0) //Position: 0x5045 / 20549
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

bool Function_167() //Position: 0x50EC / 20716
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_168(var uParam0, var uParam1, bool bParam2) //Position: 0x50F7 / 20727
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

void Function_169() //Position: 0x513C / 20796
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

void Function_170() //Position: 0x5166 / 20838
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

void Function_171(bool bParam0) //Position: 0x51C6 / 20934
{
	Global_56092[*bParam0] = 0;
	Function_172(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_172(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x51E0 / 20960
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

void Function_173(char* cParam0, bool bParam1) //Position: 0x5297 / 21143
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

bool Function_174(int iParam0, bool bParam1) //Position: 0x52BC / 21180
{
	return Function_40(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_175(int iParam0) //Position: 0x52D0 / 21200
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_176(int iParam0) //Position: 0x5304 / 21252
{
	return Global_50170[iParam022].f_24;
}

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x5313 / 21267
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

void Function_178(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x54BC / 21692
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

void Function_179() //Position: 0x5522 / 21794
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

void Function_180(var uParam0, int iParam1) //Position: 0x554B / 21835
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

void Function_181(bool bParam0) //Position: 0x558D / 21901
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

void Function_182() //Position: 0x55DE / 21982
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

bool Function_183(vector3 vParam0) //Position: 0x5699 / 22169
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_184(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x56B1 / 22193
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

vector3 Function_185() //Position: 0x5798 / 22424
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_186(int iParam0) //Position: 0x57A1 / 22433
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_187(bool bParam0, bool bParam1) //Position: 0x57B7 / 22455
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

float Function_188(vector3 vParam0, vector3 vParam3) //Position: 0x587E / 22654
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_189(var uParam0, int iParam1) //Position: 0x589B / 22683
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

bool Function_190(int iParam0) //Position: 0x60C0 / 24768
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

void Function_191(bool bParam0, bool bParam1) //Position: 0x60FB / 24827
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_192() //Position: 0x6108 / 24840
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_193(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6123 / 24867
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

void Function_194(bool bParam0, bool bParam1, bool bParam2) //Position: 0x61C7 / 25031
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

struct<16> Function_195(int iParam0) //Position: 0x6239 / 25145
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_196(int iParam0) //Position: 0x625A / 25178
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_197(int iParam0) //Position: 0x627B / 25211
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_198() //Position: 0x629C / 25244
{
	return "CQueue_Count";
}

var Function_199() //Position: 0x62B1 / 25265
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_200(int iParam0) //Position: 0x62E0 / 25312
{
	Function_201(iParam0, 1);
	return;
}

void Function_201(int iParam0, bool bParam1) //Position: 0x62EC / 25324
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

int Function_202(bool bParam0) //Position: 0x6342 / 25410
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_203(int iParam0, int iParam1) //Position: 0x634E / 25422
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

struct<16> Function_204(int iParam0) //Position: 0x63D0 / 25552
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_175(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_205(int iParam0) //Position: 0x63F0 / 25584
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_206(int iParam0) //Position: 0x6421 / 25633
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

void Function_207(bool bParam0, bool bParam1) //Position: 0x659F / 26015
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

var Function_208() //Position: 0x66EB / 26347
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_209(var uParam0, bool bParam1, bool bParam2) //Position: 0x6738 / 26424
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_210(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x6750 / 26448
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

void Function_211(int iParam0, int iParam1) //Position: 0x67C6 / 26566
{
	Function_34(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x67DA / 26586
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

void Function_213(int iParam0, int iParam1) //Position: 0x6897 / 26775
{
	Function_35(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_214(int iParam0) //Position: 0x68AB / 26795
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_215(int iParam0) //Position: 0x68D9 / 26841
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_216() //Position: 0x6909 / 26889
{
	return "MP_Unstoppable_Icon_128";
}

float Function_217(int iParam0) //Position: 0x6929 / 26921
{
	return Global_50170[iParam022].f_12;
}

void Function_218(int iParam0, int iParam1) //Position: 0x6938 / 26936
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_219(int iParam0, int iParam1) //Position: 0x695D / 26973
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_220(int iParam0, int iParam1) //Position: 0x6986 / 27014
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_221(int iParam0) //Position: 0x69A0 / 27040
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

void Function_222(var uParam0, int iParam1, int iParam2) //Position: 0x6A2F / 27183
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

struct<20> Function_223(int iParam0) //Position: 0x6A54 / 27220
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

int Function_224(int iParam0) //Position: 0x6D10 / 27920
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_225() //Position: 0x6D29 / 27945
{
	return Function_134(0);
}

void Function_226(int iParam0) //Position: 0x6D33 / 27955
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

void Function_227() //Position: 0x6DFB / 28155
{
	if ((&Local_379 + 16)->f_32)
	{
		if (IS_VOLUME_VALID(Local_107.f_228))
		{
			DESTROY_VOLUME(Local_107.f_228);
		}
		if (IS_OBJECT_VALID(bLocal_593))
		{
			DESTROY_OBJECT(bLocal_593);
			iLocal_610 = (iLocal_610 - 1);
		}
		if (IS_BLIP_VALID(bLocal_587))
		{
			REMOVE_BLIP(bLocal_587);
		}
	}
	if ((&Local_379 + 16)->f_36)
	{
		if (IS_VOLUME_VALID(Local_107.f_232))
		{
			DESTROY_VOLUME(Local_107.f_232);
		}
		if (IS_OBJECT_VALID(bLocal_594))
		{
			DESTROY_OBJECT(bLocal_594);
			iLocal_610 = (iLocal_610 - 1);
		}
		if (IS_BLIP_VALID(bLocal_588))
		{
			REMOVE_BLIP(bLocal_588);
		}
	}
	if ((&Local_379 + 16)->f_40)
	{
		if (IS_VOLUME_VALID(Local_107.f_236))
		{
			DESTROY_VOLUME(Local_107.f_236);
		}
		if (IS_OBJECT_VALID(bLocal_595))
		{
			DESTROY_OBJECT(bLocal_595);
			iLocal_610 = (iLocal_610 - 1);
		}
		if (IS_BLIP_VALID(bLocal_589))
		{
			REMOVE_BLIP(bLocal_589);
		}
	}
	return;
}

void Function_228() //Position: 0x6EC4 / 28356
{
	SET_VOLUME_PARAMS(Local_107.f_184, *(&Local_107 + 1064), *(&Local_107 + 1064 + 12), 5.0f, 5.0f, 5.0f);
	return;
}

void Function_229() //Position: 0x6EE4 / 28388
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_233(&Local_379, 0);
			if (Function_232(bLocal_19) >= 1)
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_230("PIK_MP_Obj4", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			Local_379.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_227();
			if (Function_232(bLocal_19) < 0)
			{
				if (Function_102(11, 1, 0x3f800000))
				{
					Local_379.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_379.f_8 = 0;
			Local_379.f_4 = 11;
			break;
	}
	return;
}

void Function_230(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6F78 / 28536
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
			Var0 = { StackVal, StackVal, StackVal, Function_231(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_231(int iParam0) //Position: 0x6FFD / 28669
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

int Function_232(bool bParam0) //Position: 0x703C / 28732
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

void Function_233(var uParam0, bool bParam1) //Position: 0x7082 / 28802
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

void Function_234() //Position: 0x70B9 / 28857
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_233(&Local_379, 0);
			Local_379.f_8 = 6;
			Function_272();
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_249();
			}
			Function_247();
			Function_237();
			if (iLocal_611)
			{
				if (Function_232(bLocal_19) != 0 && !Function_236())
				{
					Function_235();
				}
				iLocal_611 = 0;
			}
			if (Function_236())
			{
				if (Function_102(4, 1, 0x3f800000))
				{
					Local_379.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_379.f_8 = 0;
			Local_379.f_4 = 4;
			break;
	}
	return;
}

void Function_235() //Position: 0x714B / 29003
{
	if (!Function_236())
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		if (iLocal_610 >= 1)
		{
			Function_230("PIK_MP_obj4_Sub", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
		else if (iLocal_610 == 1)
		{
			Function_230("PIK_MP_obj_LastBomb", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
	}
	return;
}

bool Function_236() //Position: 0x71B0 / 29104
{
	if (((&Local_379 + 16)->f_32 && (&Local_379 + 16)->f_36) && (&Local_379 + 16)->f_40)
	{
		return 1;
	}
	return 0;
}

void Function_237() //Position: 0x71D3 / 29139
{
	Function_246();
	Function_245();
	Function_240();
	Function_239();
	if (Function_67(&uLocal_596))
	{
		if (Function_63(&uLocal_596) <= 0.0f && !(&Local_379 + 16)->f_32)
		{
			Function_238(0, GET_LOCAL_SLOT());
		}
	}
	if (Function_67(&iLocal_599))
	{
		if (Function_63(&iLocal_599) <= 0.0f && !(&Local_379 + 16)->f_36)
		{
			Function_238(1, GET_LOCAL_SLOT());
		}
	}
	if (Function_67(&iLocal_602))
	{
		if (Function_63(&iLocal_602) <= 0.0f && !(&Local_379 + 16)->f_40)
		{
			Function_238(2, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_238(int iParam0, bool bParam1) //Position: 0x7251 / 29265
{
	struct<5> Var0;
	
	Var0 = iParam0;
	Var0.f_4 = bParam1;
	NET_SCRIPTMSG_SEND(3, 87, &Var0, 2, 1);
	return;
}

void Function_239() //Position: 0x726C / 29292
{
	if (IS_ACTOR_VALID(Function_41()))
	{
		switch (iLocal_618)
		{
			case 0x00000000:
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_240))
				{
					SET_VOLUME_PARAMS(Local_107.f_184, *(&Local_107 + 1040), *(&Local_107 + 1040 + 12), 5.0f, 5.0f, 5.0f);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_244))
				{
					SET_VOLUME_PARAMS(Local_107.f_184, *(&Local_107 + 992), *(&Local_107 + 992 + 12), 5.0f, 5.0f, 5.0f);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_248))
				{
					SET_VOLUME_PARAMS(Local_107.f_184, *(&Local_107 + 1016), *(&Local_107 + 1016 + 12), 5.0f, 5.0f, 5.0f);
				}
				break;
			}
	}
	iLocal_618++;
	if (iLocal_618 >= 2)
	{
		iLocal_618 = 0;
	}
	return;
}

void Function_240() //Position: 0x7326 / 29478
{
	var uVar0;
	
	if (!(&Local_379 + 16)->f_40 && !Function_67(&iLocal_602))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_595), "UseCase1", "LastUserObject", &uVar0)) || IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_595), "UseCase2", "LastUserObject", &uVar0)))
		{
			Function_241();
			Function_238(5, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_241() //Position: 0x73A1 / 29601
{
	Function_243(FLOOR(100.0f), "XP_PIK_Bomb", 0);
	Function_242(2, FLOOR(100.0f));
	return;
}

void Function_242(int iParam0, bool bParam1) //Position: 0x73CD / 29645
{
	Function_219(iParam0, (Function_134(iParam0) + bParam1));
	return;
}

void Function_243(var uParam0, bool bParam1, int iParam2) //Position: 0x73E0 / 29664
{
	Function_244(uParam0);
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

void Function_244(var uParam0) //Position: 0x7423 / 29731
{
	Function_242(0, uParam0);
	return;
}

void Function_245() //Position: 0x742F / 29743
{
	var uVar0;
	
	if (!(&Local_379 + 16)->f_36 && !Function_67(&iLocal_599))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_594), "UseCase1", "LastUserObject", &uVar0)) || IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_594), "UseCase2", "LastUserObject", &uVar0)))
		{
			Function_241();
			Function_238(4, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_246() //Position: 0x74AA / 29866
{
	var uVar0;
	
	if (!(&Local_379 + 16)->f_32 && !Function_67(&uLocal_596))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_593), "UseCase1", "LastUserObject", &uVar0)) || IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_593), "UseCase2", "LastUserObject", &uVar0)))
		{
			Function_241();
			Function_238(3, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_247() //Position: 0x7525 / 29989
{
	if (!iLocal_586)
	{
		if ((((&Local_379 + 16)->f_24 || Function_248()) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_619)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_612))
		{
			if (SQUAD_GET_SIZE(bLocal_99) >= 0)
			{
				Function_272();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_619);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_619);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_612);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_612);
				iLocal_586 = 1;
			}
		}
	}
	return;
}

int Function_248() //Position: 0x7576 / 30070
{
	if (IS_ACTOR_VALID(Function_41()))
	{
		switch (iLocal_617)
		{
			case 0x00000000:
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_264))
				{
					return 1;
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_220))
				{
					return 1;
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_224))
				{
					return 1;
				}
				break;
			}
	}
	iLocal_617++;
	if (iLocal_617 >= 2)
	{
		iLocal_617 = 0;
	}
	return 0;
}

void Function_249() //Position: 0x75EA / 30186
{
	if (!iLocal_621)
	{
		if (Function_67(&iLocal_622))
		{
			if (Function_63(&iLocal_622) < 0.5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_379 + 16)->f_64)
				{
					case 0x00000000:
						Function_271();
						Function_270(&Local_107 + 176, iLocal_608);
						Function_269(Local_107.f_176, bLocal_19, 0, 0);
						break;
					
					case 0x00000001:
						Function_254();
						Function_270(&Local_107 + 180, iLocal_608);
						Function_269(Local_107.f_180, bLocal_19, 0, 0);
						break;
				}
				(&Local_379 + 16)->f_64++;
				Function_253(&iLocal_622);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_250(&iLocal_622);
		}
		if ((&Local_379 + 16)->f_64 >= 2)
		{
			iLocal_621 = 1;
		}
	}
	return;
}

void Function_250(int iParam0) //Position: 0x7696 / 30358
{
	if (!Function_67(iParam0))
	{
		Function_251(iParam0, 0.0f);
	}
	return;
}

void Function_251(int iParam0, float fParam1) //Position: 0x76AB / 30379
{
	Function_64();
	Function_252(iParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_252(var uParam0, int iParam1) //Position: 0x76BF / 30399
{
	uParam0->f_4 = iParam1;
	Function_35(uParam0, 1);
	Function_34(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_253(int iParam0) //Position: 0x76DC / 30428
{
	Function_251(iParam0, 0.0f);
	return;
}

void Function_254() //Position: 0x76E8 / 30440
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_107.f_180 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "PIK_Camp_Two_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c201", 478, -1306.503f, 79.32105f, 2212.006f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c202", 479, -1296.726f, 79.32105f, 2195.043f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c203", 480, -1283.305f, 80.80123f, 2193.51f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c204", 481, -1296.14f, 81.0722f, 2218.017f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c205", 482, -1283.982f, 79.32105f, 2206.93f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c206", 483, -1276.375f, 79.32105f, 2201.173f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c207", 484, -1288.141f, 79.32105f, 2214.887f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c208", 485, -1292.061f, 79.32105f, 2203.525f, 0.0f, 228.8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_255(bool bParam0, int iParam1) //Position: 0x7AB6 / 31414
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_268(bParam0);
			break;
		
		case 0x00000001:
			Function_267(bParam0);
			break;
		
		case 0x00000002:
			Function_266(bParam0);
			break;
		
		case 0x00000005:
			Function_265(bParam0);
			break;
		
		case 0x00000004:
			Function_264(bParam0);
			break;
		
		case 0x00000003:
			Function_263(bParam0);
			break;
		
		case 0x00000006:
			Function_262(bParam0);
			break;
		
		case 0x00000007:
			Function_261(bParam0);
			break;
		
		case 0x00000008:
			Function_260(bParam0);
			break;
		
		case 0x00000009:
			Function_258(bParam0);
			break;
		
		default:
			Function_256(bParam0);
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

void Function_256(bool bParam0) //Position: 0x7B82 / 31618
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
	Function_257(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_257(var uParam0, bool bParam1) //Position: 0x7EE6 / 32486
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

void Function_258(bool bParam0) //Position: 0x7F08 / 32520
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_259(bool bParam0, int iParam1) //Position: 0x80A8 / 32936
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

void Function_260(bool bParam0) //Position: 0x80DB / 32987
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_261(bool bParam0) //Position: 0x8284 / 33412
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_262(bool bParam0) //Position: 0x8415 / 33813
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_263(bool bParam0) //Position: 0x8547 / 34119
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_264(bool bParam0) //Position: 0x86CF / 34511
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_265(bool bParam0) //Position: 0x8829 / 34857
{
	Function_256(bParam0);
	Function_259(bParam0, 1);
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

void Function_266(bool bParam0) //Position: 0x8967 / 35175
{
	Function_256(bParam0);
	Function_259(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_267(bool bParam0) //Position: 0x898A / 35210
{
	Function_256(bParam0);
	Function_259(bParam0, 0);
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

void Function_268(bool bParam0) //Position: 0x8AF4 / 35572
{
	Function_256(bParam0);
	Function_259(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_269(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x8B2F / 35631
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

void Function_270(bool bParam0, int iParam1) //Position: 0x8BB1 / 35761
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

void Function_271() //Position: 0x8C4D / 35917
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_107.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "PIK_Camp_One_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c01", 477, -1234.545f, 76.28918f, 2518.023f, 0.0f, 113.6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c02", 478, -1246.003f, 75.42966f, 2534.506f, 0.0f, 10.53605f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c03", 479, -1254.243f, 75.4409f, 2519.288f, 0.0f, 60.78152f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c04", 480, -1245.725f, 76.35268f, 2511.802f, 0.0f, 6.547087f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c05", 481, -1254.681f, 75.14344f, 2533.341f, 0.0f, 113.6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c06", 482, -1239.43f, 76.28918f, 2514.725f, 0.0f, 113.6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c07", 483, -1244.846f, 77.72587f, 2506.421f, 0.0f, 10.53298f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_c08", 484, -1259.63f, 74.19339f, 2527.865f, 0.0f, 113.6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_272() //Position: 0x9012 / 36882
{
	Function_274(bLocal_99);
	Function_274(bLocal_100);
	Function_274(bLocal_102);
	Function_274(bLocal_104);
	Function_273(bLocal_99, Local_107.f_212, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_99, 0);
	Function_273(bLocal_100, Local_107.f_188, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_100, 0);
	Function_273(bLocal_100, Local_107.f_216, 0, 2);
	Function_273(bLocal_102, Local_107.f_220, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_102, 0);
	Function_273(bLocal_104, Local_107.f_224, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_104, 0);
	return;
}

var Function_273(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x9087 / 36999
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

void Function_274(bool bParam0) //Position: 0x90C2 / 37058
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

void Function_275() //Position: 0x90F4 / 37108
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_233(&Local_379, 0);
			Local_379.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_276();
			}
			Function_247();
			Function_237();
			if (IS_ACTOR_VALID(Function_41()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_41(), Local_107.f_252) && (&Local_379 + 16)->f_44)
				{
					Function_238(6, GET_LOCAL_SLOT());
				}
			}
			if (iLocal_611)
			{
				if (Function_232(bLocal_19) == 0)
				{
					Function_235();
				}
				iLocal_611 = 0;
			}
			if (iLocal_609 && (&Local_379 + 16)->f_44)
			{
				if (Function_102(2, 1, 0x3f800000))
				{
					Local_379.f_8 = 106;
				}
			}
			else
			{
				Function_55();
			}
			break;
		
		case 0x0000006A:
			Local_379.f_8 = 0;
			Local_379.f_4 = 2;
			break;
	}
	return;
}

void Function_276() //Position: 0x91AA / 37290
{
	if (!iLocal_620)
	{
		if (Function_67(&iLocal_622))
		{
			if (Function_63(&iLocal_622) < 0.5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_379 + 16)->f_60)
				{
					case 0x00000000:
						Function_283();
						Function_270(&Local_107 + 168, iLocal_608);
						Function_269(Local_107.f_168, bLocal_19, 0, 0);
						break;
					
					case 0x00000001:
						Function_278();
						Function_270(&Local_107 + 164, iLocal_608);
						Function_269(Local_107.f_164, bLocal_19, 0, 0);
						break;
					
					case 0x00000002:
						Function_277();
						break;
				}
				(&Local_379 + 16)->f_60++;
				Function_253(&iLocal_622);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_250(&iLocal_622);
		}
		if ((&Local_379 + 16)->f_60 >= 3)
		{
			iLocal_620 = 1;
			(&Local_379 + 16)->f_44 = 1;
		}
	}
	return;
}

void Function_277() //Position: 0x926A / 37482
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_107.f_172 = CREATE_ACTORSET_IN_LAYOUT(Local_107, "PIK_Cowsset", 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "RIDEABLE_ANIMAL_Cow", 1008, -1167.734f, 77.30194f, 2360f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_107.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "RIDEABLE_ANIMAL_Cow01", 1009, -1160.458f, 77.30194f, 2352.025f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_107.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "RIDEABLE_ANIMAL_Cow02", 1010, -1162.999f, 77.26513f, 2365.899f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_107.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "RIDEABLE_ANIMAL_Cow03", 1011, -1159.836f, 76.29803f, 2376.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_107.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "RIDEABLE_ANIMAL_Cow04", 1009, -1174.142f, 77.30194f, 2352.025f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_107.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	return;
}

void Function_278() //Position: 0x93E7 / 37863
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_107.f_164 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "PIK_Basin_Walls"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w01", 477, -1128.617f, 98.63f, 2370.485f, 0.0f, 157.26f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w02", 479, -1155.728f, 89.644f, 2338.909f, 0.0f, 200.394f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w03", 478, -1150.821f, 92.25713f, 2325.722f, 0.0f, 217.737f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w04", 480, -1144.478f, 82.582f, 2388.002f, 0.0f, 5.624f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w05", 482, -1175.037f, 79.331f, 2406.396f, 0.0f, -74.227f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w06", 481, -1134.054f, 96.66474f, 2352.682f, 0.0f, 195.9372f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_w09", 483, -1144.004f, 81.94096f, 2400.757f, 0.0f, 5.245351f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_279(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_279(bool bParam0, bool bParam1) //Position: 0x97A6 / 38822
{
	Function_282(bParam0);
	switch (bParam1)
	{
		case 0x00000001:
			Function_255(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
			SQUAD_JOIN(bParam0, bLocal_99);
			SET_ACTOR_SKIP_VISIBILITY_CHECK(bParam0, 1);
			break;
		
		case 0x00000002:
			Function_255(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
			SQUAD_JOIN(bParam0, bLocal_100);
			SET_ACTOR_SKIP_VISIBILITY_CHECK(bParam0, 1);
			break;
		
		case 0x00000003:
			Function_255(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
			SQUAD_JOIN(bParam0, bLocal_101);
			break;
		
		case 0x0000000B:
			SQUAD_JOIN(bParam0, bLocal_106);
			break;
		
		case 0x00000004:
			SQUAD_JOIN(bParam0, bLocal_102);
			break;
		
		case 0x00000005:
			SQUAD_JOIN(bParam0, bLocal_104);
			break;
		
		case 0x00000006:
			SQUAD_JOIN(bParam0, bLocal_103);
			Function_262(bParam0);
			GIVE_WEAPON_TO_ACTOR(bParam0, 9, 0, 1, 1);
			break;
		
		case 0x00000007:
			SQUAD_JOIN(bParam0, bLocal_105);
			Function_262(bParam0);
			GIVE_WEAPON_TO_ACTOR(bParam0, 9, 0, 1, 1);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_100);
			break;
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
	Function_280(bParam0, 1);
	return;
}

void Function_280(bool bParam0, bool bParam1) //Position: 0x989B / 39067
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
	fVar1 = Function_281(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_281(int iParam0) //Position: 0x98DF / 39135
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

void Function_282(bool bParam0) //Position: 0x9972 / 39282
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

void Function_283() //Position: 0x9A31 / 39473
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_107.f_168 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "PIK_Basin_Floor_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f01", 477, -1185.393f, 76.303f, 2352.563f, 0.0f, 223.81f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f02", 478, -1202.336f, 75.294f, 2355.849f, 0.0f, 217.144f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f04", 480, -1192.986f, 75.337f, 2368.51f, 0.0f, 252.677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f06", 482, -1213.53f, 75.294f, 2360.712f, 0.0f, 252.677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f07", 483, -1207.042f, 75.294f, 2382.683f, 0.0f, 252.677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f09", 485, -1208.683f, 78.30584f, 2409.53f, 0.0f, 252.677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.5f, 1, 1);
	Function_255(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f010", 480, -1234.534f, 73.75769f, 2375.895f, 0.0f, 99.56224f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_107, "pik_guard_f011", 479, -1235.045f, 73.69958f, 2371.987f, 0.0f, 421.6692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_107.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.5f, 1, 1);
	Function_255(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_279(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_284() //Position: 0x9E7C / 40572
{
	int iVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_371(&Local_379))
			{
				Function_368();
				Function_361(&uLocal_444, 0);
				Function_358(&uLocal_444, 1, 11, 3, 1);
				Local_379.f_100 = "FTR_SONG_04";
				Local_379.f_8 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_349())
			{
				Local_379.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_346();
			Function_344(&Local_379, Local_107);
			Function_341();
			Function_305(Local_107, &uLocal_444, 1, 1);
			iVar0 = 41941;
			NET_SCRIPTMSG_REGISTER_HANDLER(87, iVar0);
			Function_292(&Local_379, 41881);
			bLocal_612 = CREATE_EVENT_TRAP("tntTrap", 17, Local_107);
			EVENT_TRAP_ON_VOLUME(bLocal_612, Local_107.f_188);
			RESET_PROPS_IN_VOLUME(Local_107.f_188, 1);
			Function_290();
			Function_227();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_619 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_107);
			EVENT_TRAP_ON_VOLUME(StackVal, bLocal_619);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_379 + 16)->f_52 = (2 * Function_289());
			}
			if (iLocal_610 == 3)
			{
				Function_230("PIK_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				Function_235();
			}
			Local_379.f_8 = 106;
			break;
		
		case 0x0000006A:
			Function_285(&Local_379);
			break;
	}
	return;
}

void Function_285(var uParam0) //Position: 0x9FE6 / 40934
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_287(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_287(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_286();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_286() //Position: 0xA0C8 / 41160
{
	bLocal_92 = true;
	return;
}

void Function_287(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0xA0D1 / 41169
{
	if (iParam0 == Global_30668[2])
	{
		Function_288(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_288(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_288(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_288(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_288(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_288(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_288(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_288(7);
	}
}

void Function_288(int iParam0) //Position: 0xA166 / 41318
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

int Function_289() //Position: 0xA1FB / 41467
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

void Function_290() //Position: 0xA22A / 41514
{
	Function_291();
	iLocal_610 = 3;
	if (!(&Local_379 + 16)->f_32)
	{
		bLocal_587 = ADD_BLIP_FOR_COORD(&Local_107 + 404, 330, 0f, 2, 0);
		SET_BLIP_PRIORITY(bLocal_587, 2);
		SET_BLIP_NAME(bLocal_587, "mp_Weapon_Crate");
	}
	if (!(&Local_379 + 16)->f_36)
	{
		bLocal_588 = ADD_BLIP_FOR_COORD(&Local_107 + 432, 330, 0f, 2, 0);
		SET_BLIP_PRIORITY(bLocal_588, 2);
		SET_BLIP_NAME(bLocal_588, "mp_Weapon_Crate");
	}
	if (!(&Local_379 + 16)->f_40)
	{
		bLocal_589 = ADD_BLIP_FOR_COORD(&Local_107 + 460, 330, 0f, 2, 0);
		SET_BLIP_PRIORITY(bLocal_589, 2);
		SET_BLIP_NAME(bLocal_589, "mp_Weapon_Crate");
	}
	return;
}

void Function_291() //Position: 0xA2E8 / 41704
{
	bLocal_593 = CREATE_GRINGO_IN_LAYOUT(Local_107, "p_boom_box_01", "mp_rig_tnt", *(&Local_107 + 404), *(&Local_107 + 404 + 12));
	bLocal_594 = CREATE_GRINGO_IN_LAYOUT(Local_107, "p_boom_box_02", "mp_rig_tnt", *(&Local_107 + 432), *(&Local_107 + 432 + 12));
	bLocal_595 = CREATE_GRINGO_IN_LAYOUT(Local_107, "p_boom_box_03", "mp_rig_tnt", *(&Local_107 + 460), *(&Local_107 + 460 + 12));
	return;
}

void Function_292(var uParam0, int iParam1) //Position: 0xA38D / 41869
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_293(int iParam0) //Position: 0xA399 / 41881
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_PIK_Bomb"), iParam0);
	itos(&cVar0, Function_134(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

void Function_294(bool bParam0) //Position: 0xA3D5 / 41941
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 0x00000003:
			if (IS_VOLUME_VALID(Local_107.f_228))
			{
				DESTROY_VOLUME(Local_107.f_228);
			}
			Function_304(&uLocal_596, -10.0f);
			if (IS_BLIP_VALID(bLocal_587))
			{
				REMOVE_BLIP(bLocal_587);
			}
			bLocal_590 = ADD_BLIP_FOR_OBJECT(bLocal_593, 393, 0f, 2, 0);
			SET_BLIP_NAME(bLocal_590, "mp_Blip_Exploding_Crate");
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_303();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_269(bLocal_103, bLocal_19, 0, 0);
				Function_269(bLocal_102, bLocal_19, 0, 0);
			}
			Function_270(&bLocal_103, iLocal_608);
			Function_270(&bLocal_102, iLocal_608);
			Function_302(bLocal_103, &Local_107 + 492, 2, 1);
			Function_230("PIK_MP_Bomb_Planted", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(Local_107.f_232))
			{
				DESTROY_VOLUME(Local_107.f_232);
			}
			Function_304(&iLocal_599, -10.0f);
			if (IS_BLIP_VALID(bLocal_588))
			{
				REMOVE_BLIP(bLocal_588);
			}
			bLocal_591 = ADD_BLIP_FOR_OBJECT(bLocal_594, 393, 0f, 2, 0);
			SET_BLIP_NAME(bLocal_591, "mp_Blip_Exploding_Crate");
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_296();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_269(bLocal_105, bLocal_19, 0, 0);
				Function_269(bLocal_104, bLocal_19, 0, 0);
			}
			Function_270(&bLocal_105, iLocal_608);
			Function_270(&bLocal_104, iLocal_608);
			Function_302(bLocal_105, &Local_107 + 744, 2, 1);
			Function_230("PIK_MP_Bomb_Planted", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(Local_107.f_236))
			{
				DESTROY_VOLUME(Local_107.f_236);
			}
			Function_304(&iLocal_602, -10.0f);
			if (IS_BLIP_VALID(bLocal_589))
			{
				REMOVE_BLIP(bLocal_589);
			}
			bLocal_592 = ADD_BLIP_FOR_OBJECT(bLocal_595, 393, 0f, 2, 0);
			SET_BLIP_NAME(bLocal_592, "mp_Blip_Exploding_Crate");
			Function_230("PIK_MP_Bomb_Planted", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000000:
			if (!(&Local_379 + 16)->f_32)
			{
				(&Local_379 + 16)->f_32 = 1;
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					Function_295(&Local_107 + 404, "ExplosionLarge", 0, 1);
					Function_295(&Local_107 + 404, "CannonballExplosion", 0, 1);
				}
				if (IS_OBJECT_VALID(bLocal_593))
				{
					DESTROY_OBJECT(bLocal_593);
				}
				iLocal_610 = (iLocal_610 - 1);
				Function_235();
				if (IS_BLIP_VALID(bLocal_587))
				{
					REMOVE_BLIP(bLocal_587);
				}
				if (IS_BLIP_VALID(bLocal_590))
				{
					REMOVE_BLIP(bLocal_590);
				}
				Global_56612[09].f_12++;
			}
			break;
		
		case 0x00000001:
			if (!(&Local_379 + 16)->f_36)
			{
				(&Local_379 + 16)->f_36 = 1;
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					Function_295(&Local_107 + 432, "ExplosionLarge", 0, 1);
					Function_295(&Local_107 + 432, "CannonballExplosion", 0, 1);
				}
				if (IS_OBJECT_VALID(bLocal_594))
				{
					DESTROY_OBJECT(bLocal_594);
				}
				iLocal_610 = (iLocal_610 - 1);
				Function_235();
				if (IS_BLIP_VALID(bLocal_588))
				{
					REMOVE_BLIP(bLocal_588);
				}
				if (IS_BLIP_VALID(bLocal_591))
				{
					REMOVE_BLIP(bLocal_591);
				}
				Global_56612[09].f_12++;
			}
			break;
		
		case 0x00000002:
			if (!(&Local_379 + 16)->f_40)
			{
				(&Local_379 + 16)->f_40 = 1;
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					Function_295(&Local_107 + 460, "ExplosionLarge", 0, 1);
					Function_295(&Local_107 + 460, "CannonballExplosion", 0, 1);
				}
				if (IS_OBJECT_VALID(bLocal_595))
				{
					DESTROY_OBJECT(bLocal_595);
				}
				iLocal_610 = (iLocal_610 - 1);
				Function_235();
				if (IS_BLIP_VALID(bLocal_589))
				{
					REMOVE_BLIP(bLocal_589);
				}
				if (IS_BLIP_VALID(bLocal_592))
				{
					REMOVE_BLIP(bLocal_592);
				}
				Global_56612[09].f_12++;
			}
			break;
		
		case 0x00000006:
			iLocal_609 = 1;
			break;
	}
	return;
}

void Function_295(var uParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0xA806 / 43014
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_296() //Position: 0xA822 / 43042
{
	Function_301(5, "B", Local_107.f_272);
	Function_297(7, "B", Local_107.f_256);
	return;
}

void Function_297(char* cParam0, bool bParam1, bool bParam2) //Position: 0xA842 / 43074
{
	iLocal_406 = Function_289();
	switch (iLocal_406)
	{
		case 0x00000003:
			Function_298(cParam0, bParam1, bParam2, 483, "pik_backup_sniper_01_", 6);
			Function_298(cParam0, bParam1, bParam2, 484, "pik_backup_sniper_02_", 6);
			Function_298(cParam0, bParam1, bParam2, 478, "pik_backup_sniper_03_", 6);
			Function_298(cParam0, bParam1, bParam2, 484, "pik_backup_sniper_04_", 6);
		
		case 0x00000002:
			Function_298(cParam0, bParam1, bParam2, 481, "pik_backup_sniper_05_", 6);
			Function_298(cParam0, bParam1, bParam2, 482, "pik_backup_sniper_06_", 6);
		
		case 0x00000001:
			Function_298(cParam0, bParam1, bParam2, 478, "pik_backup_sniper_07_", 6);
			Function_298(cParam0, bParam1, bParam2, 481, "pik_backup_sniper_08_", 6);
			Function_298(cParam0, bParam1, bParam2, 484, "pik_backup_sniper_09_", 6);
			break;
	}
	return;
}

void Function_298(int iParam0, char* cParam1, bool bParam2, bool bParam3, char* cParam4, int iParam5) //Position: 0xA9B8 / 43448
{
	char* cVar0[32];
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	struct<5> Var15;
	
	strcpy(&cVar0, cParam4, 32);
	stradd(&cVar0, cParam1, 32);
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam2, &vVar9);
	Function_300(bParam2);
	Var15 = { StackVal, StackVal, Function_300(bParam2) };
	vVar9.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam2, &Var18);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar9, &vVar12, &Var15))
	{
		vVar12 = { StackVal, StackVal, vVar9 };
	}
	bVar8 = CREATE_ACTOR_IN_LAYOUT(Local_107, &cVar0, bParam3, vVar12, 0.0f, 0.0f, 0.0f);
	Function_255(bVar8, iParam5);
	SET_ACTOR_UPDATE_PRIORITY(bVar8, false);
	Function_299(bVar8, iParam0);
}

void Function_299(bool bParam0, bool bParam1) //Position: 0xAA2A / 43562
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_279(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

vector3 Function_300(bool bParam0) //Position: 0xAA4D / 43597
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_301(char* cParam0, bool bParam1, bool bParam2) //Position: 0xAA5E / 43614
{
	iLocal_406 = Function_289();
	switch (iLocal_406)
	{
		case 0x00000003:
			Function_298(cParam0, bParam1, bParam2, 483, "pik_backup_dyn_01_", 8);
			Function_298(cParam0, bParam1, bParam2, 484, "pik_backup_dyn_02_", 7);
			Function_298(cParam0, bParam1, bParam2, 478, "pik_backup_dyn_03_", 8);
			Function_298(cParam0, bParam1, bParam2, 484, "pik_backup_dyn_04_", 7);
		
		case 0x00000002:
			Function_298(cParam0, bParam1, bParam2, 481, "pik_backup_dyn_05_", 3);
			Function_298(cParam0, bParam1, bParam2, 482, "pik_backup_dyn_06_", 3);
		
		case 0x00000001:
			Function_298(cParam0, bParam1, bParam2, 478, "pik_backup_dyn_07_", 4);
			Function_298(cParam0, bParam1, bParam2, 481, "pik_backup_dyn_08_", 3);
			Function_298(cParam0, bParam1, bParam2, 484, "pik_backup_dyn_09_", 4);
			Function_298(cParam0, bParam1, bParam2, 477, "pik_backup_dyn_010_", 3);
			Function_298(cParam0, bParam1, bParam2, 477, "pik_backup_dyn_011_", 4);
			Function_298(cParam0, bParam1, bParam2, 477, "pik_backup_dyn_012_", 5);
			break;
	}
	return;
}

void Function_302(bool bParam0, var uParam1, int iParam2, int iParam3) //Position: 0xAC24 / 44068
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<5> Var6;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (!Function_183(StackVal, StackVal, *uParam1[bVar06]))
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, uParam1[bVar06], iParam2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, uParam1[bVar06], -1f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar2, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
				else
				{
					GET_POSITION(bVar2, &uVar3);
					Var6.f_4 = GET_HEADING(bVar2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar2, &uVar3, -1f);
				}
				TASK_PRIORITY_SET(bVar2, iParam3);
			}
		}
		bVar0++;
	}
}

void Function_303() //Position: 0xACDC / 44252
{
	Function_301(4, "A", Local_107.f_268);
	Function_297(6, "A", Local_107.f_260);
	return;
}

void Function_304(int iParam0, float fParam1) //Position: 0xACFC / 44284
{
	if (!Function_67(iParam0))
	{
		Function_251(iParam0, fParam1);
	}
	return;
}

int Function_305(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0xAD12 / 44306
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

var Function_306() //Position: 0xAF46 / 44870
{
	return "XPBonus";
}

void Function_307(bool bParam0, struct<2> Param1, var uParam3) //Position: 0xAF56 / 44886
{
	bool bVar0;
	
	if (Function_331(Param1))
	{
		bVar0 = Function_309(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_308(), bVar0);
	}
}

var Function_308() //Position: 0xAF7C / 44924
{
	return "PackedWeapon";
}

var Function_309(struct<5> Param0) //Position: 0xAF91 / 44945
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_310())) || SHIFT_LEFT(bParam2, Function_310() + 8));
}

bool Function_310() //Position: 0xAFAF / 44975
{
	return Function_311(39);
}

int Function_311(bool bParam0) //Position: 0xAFBA / 44986
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

void Function_312(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xAFE8 / 45032
{
	Function_323(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_317(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_316(), Function_315(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_314(), Function_313(iParam13, iParam14));
}

var Function_313(var uParam0, bool bParam1) //Position: 0xB039 / 45113
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_314() //Position: 0xB049 / 45129
{
	return "PackedGrass";
}

var Function_315(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB05D / 45149
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

var Function_316() //Position: 0xB082 / 45186
{
	return "PackedMetadata";
}

void Function_317(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xB099 / 45209
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

vector3 Function_318() //Position: 0xB1C4 / 45508
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_319() //Position: 0xB1D5 / 45525
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_320() //Position: 0xB1E6 / 45542
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_321(var uParam0, int iParam1) //Position: 0xB1F7 / 45559
{
	*iParam1 = Function_322(uParam0, Function_310(), 0);
	iParam1->f_4 = Function_322(uParam0, Function_310() + 8, Function_310());
	return;
}

var Function_322(var uParam0, int iParam1, bool bParam2) //Position: 0xB21A / 45594
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_202((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_323(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xB239 / 45625
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

var Function_324() //Position: 0xB33D / 45885
{
	return "MPItemGiver";
}

struct<32> Function_325(bool bParam0) //Position: 0xB351 / 45905
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

struct<32> Function_326(char* cParam0, char* cParam1, char* cParam2) //Position: 0xB3BB / 46011
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_327() //Position: 0xB3DA / 46042
{
	return "PBox_";
}

var Function_328() //Position: 0xB3E8 / 46056
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_329() //Position: 0xB40E / 46094
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_330() //Position: 0xB436 / 46134
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_331(int iParam0) //Position: 0xB45C / 46172
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_332(bool bParam0) //Position: 0xB46E / 46190
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_333() //Position: 0xB47E / 46206
{
	return "ID";
}

bool Function_334(bool bParam0, int iParam1) //Position: 0xB489 / 46217
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_78((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_335())
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

bool Function_335() //Position: 0xB4DE / 46302
{
	return Function_40(Global_79962, 1024);
}

vector3 Function_336(bool bParam0) //Position: 0xB4EE / 46318
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

vector3 Function_337(bool bParam0) //Position: 0xB515 / 46357
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

var Function_338() //Position: 0xB53C / 46396
{
	return "Type";
}

var Function_339() //Position: 0xB549 / 46409
{
	return "PickupsSet";
}

var Function_340() //Position: 0xB55C / 46428
{
	return "PickupFlagsSet";
}

void Function_341() //Position: 0xB573 / 46451
{
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_one_wall_guards"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_one_floor_guards"));
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_two_Camp_One"));
	bLocal_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_two_Camp_Two"));
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_two_reinforcements"));
	Function_342(bLocal_101, Local_107.f_188, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_101, 0);
	bLocal_106 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_three_reinforce"));
	Function_342(bLocal_106, Local_107.f_188, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_106, 0);
	bLocal_103 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_2_Camp_1_Snipers"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_103, 0);
	bLocal_105 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_107, "SQUAD_stage_2_Camp_2_Snipers"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_105, 0);
	Function_274(bLocal_102);
	Function_274(bLocal_104);
	Function_273(bLocal_102, Local_107.f_220, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_102, 0);
	Function_273(bLocal_104, Local_107.f_224, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_104, 0);
	return;
}

void Function_342(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xB71E / 46878
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

void Function_343(bool bParam0, int iParam1, bool bParam2) //Position: 0xB75F / 46943
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

void Function_344(var uParam0, bool bParam1) //Position: 0xB7A9 / 47017
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
		Function_233(uParam0, 1);
	}
	Function_42(256);
	Function_101(64);
	Function_72(0);
	return;
}

void Function_345(var uParam0) //Position: 0xB81A / 47130
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_346() //Position: 0xB828 / 47144
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
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	
	Function_348(4, 1);
	uVar0 = uVar0;
	Local_107 = CREATE_LAYOUT("PikesBasinMP_layout");
	Local_107.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_107, "spawnvol_0", 2, -1115.387f, 105.8984f, 2420.911f, 0.0f, -133.4212f, 0.0f, 7.972938f, 3.357633f, 3.198586f);
	Local_107.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_basin_floor", 2, -1189.616f, 78.36932f, 2372.259f, 0.0f, 93.66437f, 0.0f, 76.24952f, 13.17369f, 80.13142f);
	Local_107.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_107, "vset_basin_walls_set");
	(*&Local_107 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_107, "nv_wall_01", 2, -1133.52f, 89.00108f, 2358.665f, 0.0f, 5.355344f, 0.0f, 27.96685f, 22.34155f, 77.44712f);
	ADD_TO_VOLUME_SET(Local_107.f_212, (*&Local_107 + 192)[0]);
	(*&Local_107 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_107, "nv_wall_02", 2, -1208.486f, 90.93515f, 2338.701f, 0.0f, 96.47578f, 0.0f, 24.86395f, 15.75636f, 130.3822f);
	ADD_TO_VOLUME_SET(Local_107.f_212, (*&Local_107 + 192)[1]);
	(*&Local_107 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_107, "nv_wall_03", 2, -1161.052f, 85.62198f, 2409.267f, 0.0f, 96.47578f, 0.0f, 19.46241f, 12.92826f, 43.62427f);
	ADD_TO_VOLUME_SET(Local_107.f_212, (*&Local_107 + 192)[2]);
	(*&Local_107 + 192)[3] = CREATE_VOLUME_IN_LAYOUT(Local_107, "nv_wall_04", 2, -1224.413f, 82.00768f, 2402.886f, 0.0f, 73.9457f, 0.0f, 12.89139f, 12.92826f, 37.10566f);
	ADD_TO_VOLUME_SET(Local_107.f_212, (*&Local_107 + 192)[3]);
	Local_107.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Rush_Entrance", 2, -1128.817f, 99.09205f, 2368.532f, 0.0f, -86.52528f, 0.0f, 20.60681f, 3.735385f, 10.45654f);
	Local_107.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Camp_One_Defend", 2, -1243.249f, 76.82948f, 2524.373f, 0.0f, -130.0666f, 0.0f, 36.83055f, 4.846051f, 23.2483f);
	Local_107.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Camp_Two_Defend", 2, -1292.302f, 80.47179f, 2204.523f, 0.0f, -130.0666f, 0.0f, 49.82747f, 6.058887f, 33.13203f);
	Local_107.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Camp_One_Use", 2, -1236.304f, 76.82948f, 2530.214f, 0.0f, -130.0666f, 0.0f, 7.959419f, 3.767244f, 4.168901f);
	Local_107.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Camp_Two_Use", 2, -1305.832f, 79.21188f, 2202.142f, 0.0f, -130.0666f, 0.0f, 6.329386f, 3.664712f, 3.743597f);
	Local_107.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Camp_Three_Use", 2, -1186.658f, 75.95692f, 2367.829f, 0.0f, -170.2645f, 0.0f, 6.620446f, 3.657635f, 3.911022f);
	Local_107.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Player_Spawn_Center_Trigger", 2, -1271.8f, 78.38062f, 2386.274f, 0.0f, -69.46291f, 0.0f, 85.19039f, 23.83149f, 39.17297f);
	Local_107.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Player_Spawn_Camp_One_Trigger", 2, -1270.803f, 83.3888f, 2490.9f, 0.0f, 29.99704f, 0.0f, 161.7996f, 33.80659f, 6.571191f);
	Local_107.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Player_Spawn_Camp_Two_Trigger", 2, -1258.405f, 80.83054f, 2252.312f, 0.0f, -183.889f, 0.0f, 178.7703f, 50.31342f, 10.31246f);
	Local_107.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Advance_Stage_Two", 2, -1283.628f, 78.38062f, 2360.906f, 0.0f, -86.63741f, 0.0f, 439.2049f, 47.93006f, 147.3658f);
	Local_107.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_BackupSpawn_camp2", 2, -1329.242f, 103.1452f, 2217.658f, 0.0f, -72.12047f, 0.0f, 17.98435f, 9.56881f, 13.94344f);
	Local_107.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_BackupSpawn_camp1", 2, -1267.676f, 103.1452f, 2568.067f, 0.0f, -179.7262f, 0.0f, 124.7634f, 21.08289f, 26.42896f);
	Local_107.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_Aggro", 2, -1189.884f, 89.19054f, 2368.072f, 0.0f, 93.66437f, 0.0f, 97.06813f, 45.04298f, 141.2956f);
	Local_107.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_BackupSpawn_camp1_Alt", 2, -1395.399f, 68.85619f, 2446.558f, 0.0f, -228.4407f, 0.0f, 16.23655f, 11.64954f, 14.60355f);
	Local_107.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_107, "v_BackupSpawn_camp2_Alt", 2, -1256.111f, 87.88096f, 2120.53f, -14.74797f, -217.5229f, 0.0f, 9.642184f, 5.929856f, 18.99721f);
	Local_107.f_276 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_107, 8, 0);
	*(&Local_107 + 280[06]) = { -1209.719f, 75.25533f, 2358.206f };
	*(&Local_107 + 280[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Weapon_pickup", -1209.719f, 75.25533f, 2358.206f, 0.0f, 0.0f, 0.0f);
	Function_347(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_107.f_276);
	*(&Local_107 + 280[16]) = { -1190.067f, 75.29413f, 2378.721f };
	*(&Local_107 + 280[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Ammo_pickup", -1190.067f, 75.29413f, 2378.721f, 0.0f, 0.0f, 0.0f);
	Function_347(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_107.f_276);
	*(&Local_107 + 280[26]) = { -1180.055f, 76.29803f, 2348.818f };
	*(&Local_107 + 280[26] + 12) = { 0.0f, -320.7008f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Ammo_pickup1", -1180.055f, 76.29803f, 2348.818f, 0.0f, -320.7008f, 0.0f);
	Function_347(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_107.f_276);
	*(&Local_107 + 280[36]) = { -1248.167f, 75.29409f, 2522.76f };
	*(&Local_107 + 280[36] + 12) = { 0.0f, -214.851f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Ammo_pickup2", -1248.167f, 75.29409f, 2522.76f, 0.0f, -214.851f, 0.0f);
	Function_347(bVar4, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_107.f_276);
	*(&Local_107 + 280[46]) = { -1486.382f, 77.30194f, 2278.353f };
	*(&Local_107 + 280[46] + 12) = { 0.0f, -226.453f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Ammo_pickup3", -1486.382f, 77.30194f, 2278.353f, 0.0f, -226.453f, 0.0f);
	Function_347(bVar5, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_107.f_276);
	*(&Local_107 + 404) = { -1236.926f, 75.29413f, 2531.514f };
	*(&Local_107 + 404 + 12) = { 0.0f, -316.0946f, 0.0f };
	Local_107.f_428 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Explosion_flag1", -1236.926f, 75.29413f, 2531.514f, 0.0f, -316.0946f, 0.0f);
	*(&Local_107 + 432) = { -1306.005f, 79.20266f, 2201.967f };
	*(&Local_107 + 432 + 12) = { 0.0f, -495.4662f, 0.0f };
	Local_107.f_456 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Explosion_flag2", -1306.005f, 79.20266f, 2201.967f, 0.0f, -495.4662f, 0.0f);
	*(&Local_107 + 460) = { -1188.0f, 75.29413f, 2368.0f };
	*(&Local_107 + 460 + 12) = { 0.0f, -171.4956f, 0.0f };
	Local_107.f_484 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Explosion_flag3", -1188.0f, 75.29413f, 2368.0f, 0.0f, -171.4956f, 0.0f);
	Local_107.f_488 = CREATE_OBJECTSET_IN_LAYOUT("Sniper_CampOne_FlagsSet", Local_107, 8, 0);
	*(&Local_107 + 492[06]) = { -1224.269f, 93.28201f, 2534.207f };
	*(&Local_107 + 492[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn1", -1224.269f, 93.28201f, 2534.207f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_107.f_488);
	*(&Local_107 + 492[16]) = { -1248.401f, 92.01046f, 2539.816f };
	*(&Local_107 + 492[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn2", -1248.401f, 92.01046f, 2539.816f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_107.f_488);
	*(&Local_107 + 492[26]) = { -1237.604f, 92.07484f, 2542.884f };
	*(&Local_107 + 492[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn3", -1237.604f, 92.07484f, 2542.884f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_107.f_488);
	*(&Local_107 + 492[36]) = { -1227.339f, 93.23016f, 2540.436f };
	*(&Local_107 + 492[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn4", -1227.339f, 93.23016f, 2540.436f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_107.f_488);
	*(&Local_107 + 492[46]) = { -1254.943f, 91.77608f, 2539.148f };
	*(&Local_107 + 492[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn5", -1254.943f, 91.77608f, 2539.148f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_107.f_488);
	*(&Local_107 + 492[56]) = { -1219.801f, 93.61041f, 2521.696f };
	*(&Local_107 + 492[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn6", -1219.801f, 93.61041f, 2521.696f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_107.f_488);
	*(&Local_107 + 492[66]) = { -1219.341f, 93.69101f, 2525.905f };
	*(&Local_107 + 492[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn7", -1219.341f, 93.69101f, 2525.905f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_107.f_488);
	*(&Local_107 + 492[76]) = { -1221.279f, 93.42234f, 2529.13f };
	*(&Local_107 + 492[76] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn8", -1221.279f, 93.42234f, 2529.13f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_107.f_488);
	*(&Local_107 + 492[86]) = { -1232.45f, 92.45745f, 2544.43f };
	*(&Local_107 + 492[86] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampOne_Spawn9", -1232.45f, 92.45745f, 2544.43f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_107.f_488);
	*(&Local_107 + 712) = { -1220.778f, 93.57048f, 2538.711f };
	*(&Local_107 + 712 + 12) = { 0.0f, -104.6658f, 0.0f };
	Local_107.f_736 = CREATE_POINT_IN_LAYOUT(Local_107, "f_CampOne_Sniper_Spawn", -1220.778f, 93.57048f, 2538.711f, 0.0f, -104.6658f, 0.0f);
	Local_107.f_740 = CREATE_OBJECTSET_IN_LAYOUT("Sniper_CampTwo_FlagsSet", Local_107, 8, 0);
	*(&Local_107 + 744[06]) = { -1317.303f, 98.23827f, 2214.705f };
	*(&Local_107 + 744[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn1", -1317.303f, 98.23827f, 2214.705f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_107.f_740);
	*(&Local_107 + 744[16]) = { -1316.756f, 99.98769f, 2202.807f };
	*(&Local_107 + 744[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn2", -1316.756f, 99.98769f, 2202.807f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_107.f_740);
	*(&Local_107 + 744[26]) = { -1315.021f, 101.1757f, 2193.683f };
	*(&Local_107 + 744[26] + 12) = { 0.0f, -116.4929f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn3", -1315.021f, 101.1757f, 2193.683f, 0.0f, -116.4929f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_107.f_740);
	*(&Local_107 + 744[36]) = { -1297.613f, 101.7786f, 2183.596f };
	*(&Local_107 + 744[36] + 12) = { 0.0f, -141.3746f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn4", -1297.613f, 101.7786f, 2183.596f, 0.0f, -141.3746f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_107.f_740);
	*(&Local_107 + 744[46]) = { -1308.992f, 98.55336f, 2224.211f };
	*(&Local_107 + 744[46] + 12) = { 0.0f, -61.40345f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn5", -1308.992f, 98.55336f, 2224.211f, 0.0f, -61.40345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_107.f_740);
	*(&Local_107 + 744[56]) = { -1307.497f, 101.4587f, 2190.733f };
	*(&Local_107 + 744[56] + 12) = { 0.0f, -152.0595f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn6", -1307.497f, 101.4587f, 2190.733f, 0.0f, -152.0595f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_107.f_740);
	*(&Local_107 + 744[66]) = { -1305.611f, 101.5393f, 2189.891f };
	*(&Local_107 + 744[66] + 12) = { 0.0f, -148.0793f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn7", -1305.611f, 101.5393f, 2189.891f, 0.0f, -148.0793f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_107.f_740);
	*(&Local_107 + 744[76]) = { -1315.752f, 100.6047f, 2198.197f };
	*(&Local_107 + 744[76] + 12) = { 0.0f, -94.80099f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn8", -1315.752f, 100.6047f, 2198.197f, 0.0f, -94.80099f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_107.f_740);
	*(&Local_107 + 744[86]) = { -1315.969f, 100.9411f, 2196.158f };
	*(&Local_107 + 744[86] + 12) = { 0.0f, -91.82941f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_107, "f_Sniper_CampTwo_Spawn9", -1315.969f, 100.9411f, 2196.158f, 0.0f, -91.82941f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_107.f_740);
	*(&Local_107 + 964) = { -1311.7f, 102.3227f, 2184.843f };
	*(&Local_107 + 964 + 12) = { 0.0f, -104.6658f, 0.0f };
	Local_107.f_988 = CREATE_POINT_IN_LAYOUT(Local_107, "f_CampTwo_Sniper_Spawn", -1311.7f, 102.3227f, 2184.843f, 0.0f, -104.6658f, 0.0f);
	*(&Local_107 + 992) = { -1260.673f, 83.38879f, 2460.24f };
	*(&Local_107 + 992 + 12) = { 0.0f, 120.1856f, 0.0f };
	*(&Local_107 + 1016) = { -1312.648f, 73.39733f, 2316.0f };
	*(&Local_107 + 1016 + 12) = { 0.0f, -16.0507f, 0.0f };
	*(&Local_107 + 1040) = { -1260f, 89.349f, 2344.605f };
	*(&Local_107 + 1040 + 12) = { 0.0f, 107.9238f, 0.0f };
	*(&Local_107 + 1064) = { -1115.236f, 105.1247f, 2420.744f };
	*(&Local_107 + 1064 + 12) = { 0.0f, -324.5412f, 0.0f };
	return;
}

void Function_347(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCA89 / 51849
{
	DECOR_SET_INT(iParam0, Function_338(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_333(), bParam2);
	}
	return;
}

void Function_348(int iParam0, int iParam1) //Position: 0xCAAD / 51885
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

bool Function_349() //Position: 0xCAF6 / 51958
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_356())
		{
			return 0;
		}
		if (!Function_350(&bLocal_407))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_350(bool bParam0) //Position: 0xCB19 / 51993
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_355();
	iVar1 = 0;
	if (!Function_85(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_354(bParam0[iVar03], 8);
		}
		else if (Function_353())
		{
			iVar1 = 1;
			Function_354(bParam0[iVar03], 8);
		}
		Function_354(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_85(bParam0[iVar03], 4))
		{
			if (!Function_85(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_85(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_85(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_354(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_85(bParam0[iVar03], 4))
		{
			if (!Function_85(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_354(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_354(bParam0[iVar03], 2);
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

void Function_351() //Position: 0xCE94 / 52884
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

bool Function_352(int iParam0) //Position: 0xCED4 / 52948
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_353() //Position: 0xCEF0 / 52976
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

void Function_354(var uParam0, int iParam1) //Position: 0xCF1B / 53019
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_355() //Position: 0xCF2C / 53036
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

bool Function_356() //Position: 0xCF6E / 53102
{
	Function_357(&Local_107 + 4, 477, 2, 1);
	Function_357(&Local_107 + 4, 479, 2, 1);
	Function_357(&Local_107 + 4, 478, 2, 1);
	Function_357(&Local_107 + 4, 480, 2, 1);
	Function_357(&Local_107 + 4, 482, 2, 1);
	Function_357(&Local_107 + 4, 481, 2, 1);
	Function_357(&Local_107 + 4, 483, 2, 1);
	Function_357(&Local_107 + 4, 485, 2, 1);
	Function_357(&Local_107 + 4, 1008, 2, 1);
	Function_357(&Local_107 + 4, 1009, 2, 1);
	Function_357(&Local_107 + 4, 1010, 2, 1);
	Function_357(&Local_107 + 4, 1011, 2, 1);
	Function_357(&Local_107 + 4, 484, 2, 1);
	if (Function_350(&Local_107 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_357(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD02A / 53290
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

void Function_358(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD0FA / 53498
{
	Function_359(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_359(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xD111 / 53521
{
	if (!Function_332(iParam1))
	{
		return;
	}
	Function_360(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_360(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD134 / 53556
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

void Function_361(int iParam0, bool bParam1) //Position: 0xD15E / 53598
{
	Function_365(iParam0);
	Function_365(iParam0 + 228);
	if (bParam1)
	{
		Function_362(iParam0);
	}
	return;
}

void Function_362(int iParam0) //Position: 0xD17A / 53626
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_363(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_363(var uParam0, int iParam1) //Position: 0xD19A / 53658
{
	Function_364(uParam0, iParam1, 0);
	return;
}

void Function_364(int iParam0, int iParam1, int iParam2) //Position: 0xD1A8 / 53672
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_365(int iParam0) //Position: 0xD1B9 / 53689
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_367(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_366(iParam0, 0.0f);
	return;
}

void Function_366(var uParam0, int iParam1) //Position: 0xD1E6 / 53734
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_367(var uParam0) //Position: 0xD1F2 / 53746
{
	Function_360(uParam0, 4294967295, 0, 1);
	return;
}

void Function_368() //Position: 0xD200 / 53760
{
	Function_357(&bLocal_407, 477, 2, 0);
	Function_357(&bLocal_407, 478, 2, 0);
	Function_357(&bLocal_407, 479, 2, 0);
	Function_357(&bLocal_407, 480, 2, 0);
	Function_357(&bLocal_407, 481, 2, 0);
	Function_357(&bLocal_407, 482, 2, 0);
	Function_357(&bLocal_407, 483, 2, 0);
	Function_357(&bLocal_407, 484, 2, 0);
	Function_357(&bLocal_407, 485, 2, 0);
	Function_369(&bLocal_407, "mp_rig_tnt", 1, 0);
	Function_369(&bLocal_407, "mp_action_areas", 10, 0);
	return;
}

var Function_369(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD2A4 / 53924
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_370(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_354(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_370(var uParam0, int iParam1, int iParam2) //Position: 0xD2DC / 53980
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

bool Function_371(int iParam0) //Position: 0xD3A0 / 54176
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_378(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_377();
			Function_428(&uLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_376())
			{
				iLocal_98 = 2;
			}
			else if (Function_372(&uLocal_45))
			{
				Function_377();
				Function_382(&uLocal_45, 5.0f);
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

bool Function_372(int iParam0) //Position: 0xD44C / 54348
{
	if (Function_374(iParam0))
	{
		Function_373(iParam0);
		return 1;
	}
	return 0;
}

void Function_373(int iParam0) //Position: 0xD462 / 54370
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_374(int iParam0) //Position: 0xD476 / 54390
{
	if (Function_67(iParam0))
	{
		if (Function_375(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_375(float fParam0) //Position: 0xD491 / 54417
{
	return -Function_63(fParam0);
}

bool Function_376() //Position: 0xD49D / 54429
{
	return iLocal_20;
}

void Function_377() //Position: 0xD4A5 / 54437
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_378(bool bParam0) //Position: 0xD4D1 / 54481
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 54563);
	return;
}

void Function_379(bool bParam0) //Position: 0xD523 / 54563
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

void Function_380(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4) //Position: 0xD626 / 54822
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_381(fParam4);
		if (0 == iVar0)
		{
			Function_69(uParam0, iParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_69(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_69(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_381(float fParam0) //Position: 0xD66C / 54892
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

void Function_382(var uParam0, float fParam1) //Position: 0xD6A0 / 54944
{
	Function_251(uParam0, -fParam1);
	return;
}

bool Function_383(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xD6AE / 54958
{
	if (!Function_425())
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
		Function_420();
	}
	Function_418(3);
	Function_417();
	if (StackVal != 0)
	{
		Function_415(bLocal_41, *uParam1, uParam2, 1);
		Function_414(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_411(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_396(58856, 58204);
			break;
		
		case 0x00000002:
			Function_396(55581, 55157);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_384(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD775 / 55157
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_388(bParam1, uParam2, uParam3);
		bVar0 = Function_387(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_385(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_387(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_387(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_387(28, bParam0));
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

bool Function_385(bool bParam0, bool bParam1, int iParam2) //Position: 0xD818 / 55320
{
	var uVar0;
	
	return Function_386(bParam0, bParam1, &uVar0, iParam2);
}

int Function_386(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xD829 / 55337
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

int Function_387(int iParam0, bool bParam1) //Position: 0xD88E / 55438
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

void Function_388(bool bParam0, int iParam1, bool bParam2) //Position: 0xD8FC / 55548
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

int Function_389() //Position: 0xD91D / 55581
{
	if (!Function_390(1))
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

bool Function_390(bool bParam0) //Position: 0xD9D9 / 55769
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_123() || Function_395(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_393(1) };
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
	Function_391(Function_123());
	return 1;
}

void Function_391(bool bParam0) //Position: 0xDA5A / 55898
{
	if (bParam0 || Function_39(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_39(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_39(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_39(1048576) || Function_39(4)) || Function_392(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_33(0x20000000, 0, 1);
	}
	return;
}

var Function_392(int iParam0, bool bParam1) //Position: 0xDAE3 / 56035
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_393(var uParam0) //Position: 0xDB03 / 56067
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_394(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_394(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xDB17 / 56087
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

int Function_395(bool bParam0, bool bParam1) //Position: 0xDB5C / 56156
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

void Function_396(int iParam0, int iParam1) //Position: 0xDB90 / 56208
{
	Function_397(iParam0, iParam1, 58197);
	return;
}

void Function_397(var uParam0, var uParam1, int iParam2) //Position: 0xDBA1 / 56225
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
		Function_399(&uParam0, &uParam1, &iParam2);
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
			Function_398();
		}
		Function_33(16384, 1, 1);
	}
	else if (!Function_39(32))
	{
		Function_398();
	}
	Function_33(32768, 0, 1);
	return;
}

void Function_398() //Position: 0xDD3A / 56634
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

void Function_399(var uParam0, var uParam1, int iParam2) //Position: 0xDE43 / 56899
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
			else if (!Function_400(bVar1, 2048, 1))
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
				if (Function_385(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_385(bVar1, (4294966296 - bVar1), 1))
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

bool Function_400(bool bParam0, int iParam1, bool bParam2) //Position: 0xDFBB / 57275
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_392(iParam1, bParam2);
	}
	if (!Function_133(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_401(iParam1), 64);
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

var Function_401(int iParam0) //Position: 0xE03C / 57404
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

int Function_402() //Position: 0xE355 / 58197
{
	return 1;
}

int Function_403(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE35C / 58204
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
	
	Function_388(bParam1, iParam2, bParam3);
	iVar0 = Function_407(bParam0);
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
		bVar1 = (bVar1 + Function_18((CEIL(Function_406(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_406(8, bParam0));
	}
	if (!bParam1)
	{
		Function_385(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_405(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_405(1) == Function_407(bParam0))
		{
			if (Function_400(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_406(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_406(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_404(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_404(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_406(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_404(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_404(&iVar6), FLOOR(Function_406(9, bParam0)));
		}
		else
		{
			Function_404(&iVar6);
		}
	}
	if (Function_400(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_404(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_404(int iParam0) //Position: 0xE51D / 58653
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_405(int iParam0) //Position: 0xE530 / 58672
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_406(int iParam0, bool bParam1) //Position: 0xE550 / 58704
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

int Function_407(bool bParam0) //Position: 0xE5B9 / 58809
{
	if (!Function_133(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_408();
	}
	return Global_76943[bParam096];
}

var Function_408() //Position: 0xE5DE / 58846
{
	return Global_78480;
}

int Function_409() //Position: 0xE5E8 / 58856
{
	bool bVar0;
	int iVar1;
	
	if (!Function_390(1))
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
	if (Function_405(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_404(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_404(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_404(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_404(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_404(&iVar1), "mp_plist_mw");
	Function_410();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_404(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_410() //Position: 0xE70B / 59147
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

void Function_411(int iParam0) //Position: 0xE748 / 59208
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
		Function_413(&bLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_412(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_412(int iParam0) //Position: 0xE7C1 / 59329
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_413(int iParam0) //Position: 0xE7EC / 59372
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

void Function_414(var uParam0, bool bParam1) //Position: 0xE833 / 59443
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

int Function_415(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xE97E / 59774
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
						if (Function_416(bVar4) == bParam1)
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

int Function_416(bool bParam0) //Position: 0xEA60 / 60000
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

void Function_417() //Position: 0xEABA / 60090
{
	Function_418(4);
	return;
}

void Function_418(int iParam0) //Position: 0xEAC4 / 60100
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
			Function_419(iParam0);
		}
	}
	return;
}

void Function_419(bool bParam0) //Position: 0xEAF6 / 60150
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_420() //Position: 0xEB05 / 60165
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				if (Function_422(bVar0, bLocal_19, 1, 0, 0, -1.0f))
				{
					Function_421();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_421() //Position: 0xEB3A / 60218
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_422(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xEB53 / 60243
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_424(bParam1, 0, 0, 0, 0, 0) < 0)
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
		if (Function_423(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_423(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xEBBC / 60348
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

int Function_424(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xECA9 / 60585
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

bool Function_425() //Position: 0xED57 / 60759
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

void Function_426(bool bParam0) //Position: 0xED7A / 60794
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (Function_427(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_19, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_19, bParam0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			bVar1 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
		}
		SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(bParam0), -1.0f);
		if (bVar0 != 1 || bVar0 != 2)
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_107.f_264);
		}
		Function_279(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
	}
	return;
}

bool Function_427(bool bParam0) //Position: 0xEDE4 / 60900
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

void Function_428(var uParam0, int iParam1) //Position: 0xEE11 / 60945
{
	if (!Function_67(uParam0))
	{
		Function_382(uParam0, iParam1);
	}
	return;
}

bool Function_429(int iParam0) //Position: 0xEE27 / 60967
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
	if (!Function_444(16, 0))
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
	Function_250(iParam0 + 16 + 8);
	Function_292(iParam0, 62031);
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
	Function_435(2);
	Function_434(1);
	iVar3 = 61403;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 61284);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 61245);
	return 1;
}

void Function_430(bool bParam0) //Position: 0xEF3D / 61245
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

void Function_431(bool bParam0) //Position: 0xEF64 / 61284
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

void Function_432(bool bParam0) //Position: 0xEFDB / 61403
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
				Function_433(&bLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_433(var uParam0, int iParam1) //Position: 0xF028 / 61480
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

void Function_434(int iParam0) //Position: 0xF07D / 61565
{
	Function_43(&Global_83864 + 1252, iParam0);
	return;
}

void Function_435(int iParam0) //Position: 0xF08F / 61583
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
	Function_437(0, 0);
	Function_436();
	return;
}

void Function_436() //Position: 0xF153 / 61779
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_437(bool bParam0, bool bParam1) //Position: 0xF16C / 61804
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_442(&Global_78480);
	Function_441(&Global_78480);
	uVar0 = Function_224(37);
	Function_439();
	if (!bParam0)
	{
		Function_220(37, uVar0);
	}
	Function_95(18264, 0);
	Function_438();
	return;
}

void Function_438() //Position: 0xF1B8 / 61880
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_439() //Position: 0xF1D7 / 61911
{
	Function_440(&Global_78480 + 220);
	return;
}

void Function_440(int iParam0) //Position: 0xF1E6 / 61926
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

void Function_441(int iParam0) //Position: 0xF207 / 61959
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

void Function_442(int iParam0) //Position: 0xF22B / 61995
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

void Function_443(var uParam0) //Position: 0xF24F / 62031
{
	uParam0 = uParam0;
	return;
}

bool Function_444(var uParam0, bool bParam1) //Position: 0xF259 / 62041
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_445("freemodetest");
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

int Function_445(bool bParam0) //Position: 0xF30C / 62220
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

