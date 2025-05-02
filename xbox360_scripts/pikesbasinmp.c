//Decompiled with MagicRDR v1.0
//Function Count : 435
//Statics Count : 624
//Natives Count : 416
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
	var uLocal_44 = 0;
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
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	struct<989> Local_106 = { 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bLocal_607 = true;
	Local_378 = Global_30668[2];
	if (!Function_418(&Local_378))
	{
		TERMINATE_THIS_SCRIPT();
	}
	Function_417(&uLocal_604, 45.0f);
	iLocal_616 = 0;
	iLocal_619 = 0;
	iLocal_620 = 0;
	while (!IS_EXITFLAG_SET() && Function_83())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x8D / 141
{
	Function_79(&bLocal_406);
	Function_68(Local_106);
	if (IS_BLIP_VALID(bLocal_586))
	{
		REMOVE_BLIP(bLocal_586);
	}
	if (IS_BLIP_VALID(bLocal_587))
	{
		REMOVE_BLIP(bLocal_587);
	}
	if (IS_BLIP_VALID(bLocal_588))
	{
		REMOVE_BLIP(bLocal_588);
	}
	Function_66(&uLocal_612, 1, 0, 4294967295, 4294967295);
	Function_65();
	Function_2(&Local_378);
	return;
}

void Function_2(int iParam0) //Position: 0xDE / 222
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

void Function_3(int iParam0) //Position: 0x1B5 / 437
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x1C7 / 455
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x1D3 / 467
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

void Function_6() //Position: 0x1F3 / 499
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x228 / 552
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

int Function_8(float fParam0, int iParam1) //Position: 0x2E2 / 738
{
	if (!Function_25())
	{
		Global_83822 = 1;
	}
	Function_9(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x303 / 771
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x31F / 799
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x53F / 1343
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

var Function_12() //Position: 0xB6C / 2924
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB74 / 2932
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB85 / 2949
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

struct<32> Function_15(char* cParam0, char* cParam1) //Position: 0xC7A / 3194
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC93 / 3219
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xCF8 / 3320
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0xD0A / 3338
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xD1C / 3356
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

int Function_20(int iParam0) //Position: 0xE4C / 3660
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE5B / 3675
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xE94 / 3732
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xED1 / 3793
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x106B / 4203
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

bool Function_25() //Position: 0x1285 / 4741
{
	if (Function_27())
	{
		return (Function_26() != 1 || Function_26() != 0);
	}
	return 0;
}

int Function_26() //Position: 0x129E / 4766
{
	return Global_79349.f_16;
}

bool Function_27() //Position: 0x12AA / 4778
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_28() //Position: 0x12B3 / 4787
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

void Function_29() //Position: 0x130D / 4877
{
	Function_30(1024, 0, 1);
	Function_30(1, 0, 0);
	return;
}

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x1321 / 4897
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

void Function_31(int iParam0, int iParam1) //Position: 0x1349 / 4937
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_32(int iParam0, int iParam1) //Position: 0x135C / 4956
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_33() //Position: 0x136B / 4971
{
	if (Function_35())
	{
		Function_34();
	}
	Function_30(4096, 0, 1);
	return;
}

void Function_34() //Position: 0x1382 / 4994
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_35() //Position: 0x1391 / 5009
{
	return (Function_36(4096) || Function_36(4));
}

bool Function_36(bool bParam0) //Position: 0x13A2 / 5026
{
	return Function_37(Global_76905.f_132, bParam0);
}

bool Function_37(var uParam0, bool bParam1) //Position: 0x13B3 / 5043
{
	return (uParam0 && bParam1) == 0;
}

var Function_38() //Position: 0x13C0 / 5056
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_39(int iParam0) //Position: 0x13D5 / 5077
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

void Function_40(var uParam0, int iParam1) //Position: 0x142E / 5166
{
	Function_32(uParam0, iParam1);
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x143B / 5179
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_42(int iParam0) //Position: 0x1450 / 5200
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

bool Function_43(int iParam0) //Position: 0x150D / 5389
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x1523 / 5411
{
	Function_45(&Global_79338, iParam0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1532 / 5426
{
	Function_31(uParam0, iParam1);
	return;
}

void Function_46(int iParam0) //Position: 0x153F / 5439
{
	Function_45(&Global_83864 + 1252, iParam0);
	return;
}

void Function_47(int iParam0) //Position: 0x1551 / 5457
{
	Function_45(&Global_78617 + 52, iParam0);
	return;
}

void Function_48(int iParam0) //Position: 0x1562 / 5474
{
	Function_45(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_49() //Position: 0x159B / 5531
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_50() //Position: 0x15B2 / 5554
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

void Function_51(int iParam0) //Position: 0x15D4 / 5588
{
	Local_83 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_52() //Position: 0x15E2 / 5602
{
	Function_53();
	return;
}

void Function_53() //Position: 0x15EB / 5611
{
	Function_54(4294967286);
	return;
}

void Function_54(bool bParam0) //Position: 0x15F7 / 5623
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

void Function_55(var uParam0, int iParam1) //Position: 0x1634 / 5684
{
	Local_50[iParam12] = *uParam0;
	return;
}

void Function_56(int iParam0) //Position: 0x1643 / 5699
{
	Local_48 = *iParam0;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x164E / 5710
{
	*uParam0 = iParam1;
	return;
}

void Function_58(int iParam0) //Position: 0x1659 / 5721
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_83 };
	return;
}

void Function_59(int iParam0) //Position: 0x1667 / 5735
{
	*iParam0 = Local_48;
	return;
}

float Function_60(int iParam0) //Position: 0x1672 / 5746
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

void Function_61() //Position: 0x1743 / 5955
{
	if (!Function_62())
	{
	}
	return;
}

bool Function_62() //Position: 0x1750 / 5968
{
	return NET_IS_IN_SESSION();
}

bool Function_63(int iParam0) //Position: 0x1759 / 5977
{
	return Function_37(*iParam0, 2);
}

bool Function_64(int iParam0) //Position: 0x1766 / 5990
{
	return Function_37(*iParam0, 1);
}

void Function_65() //Position: 0x1773 / 6003
{
	Function_79(&Local_106 + 4);
	RELEASE_LAYOUT_REF(Local_106);
	return;
}

void Function_66(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1785 / 6021
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_67(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_67(int iParam0) //Position: 0x17A9 / 6057
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

void Function_68(int iParam0) //Position: 0x1CE6 / 7398
{
	if (IS_ACTORSET_VALID(bLocal_18))
	{
		Function_78(bLocal_18);
	}
	Function_76(iParam0);
	Function_69(1);
	return;
}

void Function_69(bool bParam0) //Position: 0x1D02 / 7426
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_75(1);
	}
	else
	{
		Function_74(1);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_70(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_70(bool bParam0, bool bParam1) //Position: 0x1D3A / 7482
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_73(GET_LOCAL_SLOT(), bParam0) && !Function_71(2))
		{
			return;
		}
		if (!Function_71(1))
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

bool Function_71(int iParam0) //Position: 0x1D87 / 7559
{
	return Function_72(Global_79337, iParam0);
}

bool Function_72(var uParam0, int iParam1) //Position: 0x1D96 / 7574
{
	return (uParam0 && iParam1) == 0;
}

int Function_73(bool bParam0, bool bParam1) //Position: 0x1DA3 / 7587
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

void Function_74(int iParam0) //Position: 0x1DC7 / 7623
{
	Function_45(&Global_79337, iParam0);
	return;
}

void Function_75(int iParam0) //Position: 0x1DD6 / 7638
{
	Function_40(&Global_79337, iParam0);
	return;
}

void Function_76(bool bParam0) //Position: 0x1DE5 / 7653
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
			Function_77(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_77(bool bParam0) //Position: 0x1E84 / 7812
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

void Function_78(bool bParam0) //Position: 0x1EB5 / 7861
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

void Function_79(int iParam0) //Position: 0x1F00 / 7936
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_80(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x1F26 / 7974
{
	if (Function_82(uParam0[iParam13], 4))
	{
		if (Function_82(uParam0[iParam13], 1))
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
			Function_81(uParam0[iParam13], 1);
			Function_81(uParam0[iParam13], 2);
			Function_81(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x2054 / 8276
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_82(int iParam0, int iParam1) //Position: 0x206E / 8302
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_83() //Position: 0x208B / 8331
{
	if (!Function_374(&Local_378, &Local_106, 56800, 0))
	{
		return 0;
	}
	if (Function_60(&uLocal_604) < 0.0f)
	{
		iLocal_610 = 1;
		Function_373(&uLocal_604, 45.0f);
	}
	if (StackVal != 11)
	{
		if (Function_64(&uLocal_613))
		{
			if (Function_60(&uLocal_613) <= 0.0f)
			{
				if (StackVal != 1 && !iLocal_585)
				{
					Function_371(&uLocal_612, 6, 40, 38, 10.0f);
				}
				else
				{
					Function_371(&uLocal_612, 38, 40, 38, 10.0f);
				}
				Function_373(&uLocal_613, 5.0f);
			}
		}
		else
		{
			Function_417(&uLocal_613, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_275();
			UNK_0x2148AC15(322, 10);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_266();
			UNK_0x2148AC15(322, 12);
			break;
		
		case 0x00000002:
			Function_225();
			break;
		
		case 0x00000004:
			Function_221();
			UNK_0x2148AC15(322, 15);
			break;
		
		case 0x0000000B:
			Function_84();
			break;
	}
	return 1;
}

void Function_84() //Position: 0x2182 / 8578
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_220();
			Function_66(&uLocal_612, 1, 0, 4294967295, 4294967295);
			Local_378.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_219();
			Function_85(&Local_378);
			break;
	}
	return;
}

var Function_85(int iParam0) //Position: 0x21C1 / 8641
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
				Function_218(iParam0 + 16 + 8);
			}
			if (!bLocal_91)
			{
				Function_10(458, 1, 0, 0);
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_60(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_217(), Function_216(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				Function_144(iParam0);
				Function_141(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_140())
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
				Function_139("MP_AA_already_finished");
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
			AUDIO_MUSIC_ONE_SHOT(Function_138(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_38()))
				{
					Function_136(Function_38(), 0);
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
			Function_131(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_125(*iParam0, Function_126());
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
						Function_131(iParam0);
					}
					else if (iLocal_16 == 1)
					{
						Function_122();
					}
				}
				else if (Function_121(15, 1, 1))
				{
					Function_120(1);
					Function_7(iParam0);
				}
				else if (Function_121(13, 1, 1))
				{
					Function_120(0);
					Function_7(iParam0);
				}
				else if (Function_119())
				{
					if (iLocal_16 == 1)
					{
						Function_131(iParam0);
					}
					else if (iLocal_16 == 2)
					{
						Function_122();
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
							Function_120(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_88))
						{
							Function_120(0);
						}
					}
				}
				else if (!iLocal_92)
				{
					iLocal_92 = 1;
					Function_5();
				}
			}
			Function_115();
			switch (Function_112(iParam0))
			{
				case 0x00000001:
					if (Function_98(99, 1, 0x3f800000))
					{
						Function_139("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_97(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_96(Global_12976.f_36);
							if (Function_94(StackVal, StackVal, Function_96(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_95 = 11;
					}
					break;
				
				case 0x00000000:
					Function_139("mp_aa_vote_skip_passed");
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
			if (!Function_93(8))
			{
				Function_92(1792, 0);
				Function_86(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_95 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_47(64);
			Function_69(1);
			iLocal_95 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_86(var uParam0, bool bParam1, int iParam2) //Position: 0x26BA / 9914
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
			Function_91(&(Global_29008[Global_29006]), 131072);
			Function_90(&(Global_29008[Global_29006]), 2097152);
			Function_88(Global_29006);
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
				if (Function_87(&(Global_29008[iVar0]), 4) || Function_87(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_90(&(Global_29008[iVar0]), 2097155);
					Function_91(&(Global_29008[iVar0]), 262144);
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

bool Function_87(var uParam0, int iParam1) //Position: 0x27C5 / 10181
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_88(int iParam0) //Position: 0x27E1 / 10209
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_89())
			{
				return;
			}
		}
		if (!Function_87(&(Global_29008[iParam0]), 2048))
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

bool Function_89() //Position: 0x2860 / 10336
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_87(&(Global_29008[iVar0]), 4) || Function_87(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_90(var uParam0, int iParam1) //Position: 0x28BD / 10429
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x28D4 / 10452
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_92(int iParam0, bool bParam1) //Position: 0x28E3 / 10467
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

bool Function_93(int iParam0) //Position: 0x291E / 10526
{
	return Function_72(Global_78617.f_52, iParam0);
}

bool Function_94(vector3 vParam0) //Position: 0x292F / 10543
{
	var uVar0[8];
	int iVar9;
	
	Function_95(&uVar0);
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

void Function_95(int iParam0) //Position: 0x2980 / 10624
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

vector3 Function_96(bool bParam0) //Position: 0x29DE / 10718
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_97(int iParam0) //Position: 0x29EF / 10735
{
	Function_40(&Global_78617 + 52, iParam0);
	return;
}

bool Function_98(bool bParam0, bool bParam1, float fParam2) //Position: 0x2A00 / 10752
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_111(bParam0);
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
	if (Function_110(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_109(&Var0, 0);
		Function_51(&Var0);
		Function_53();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_108(bParam0, iVar6, &uVar7))
	{
		if (Function_107())
		{
			if (!Function_106(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_105(&Var0, 1);
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
				if (Function_99(bParam0))
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

bool Function_99(int iParam0) //Position: 0x2C53 / 11347
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_104(bVar0))
		{
			iVar1 = Function_100(bVar0);
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

int Function_100(bool bParam0) //Position: 0x2C96 / 11414
{
	int iVar0;
	
	Function_103(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_59(&iVar0);
	}
	else
	{
		Function_102(&iVar0, bParam0);
	}
	return Function_101(&iVar0);
}

int Function_101(int iParam0) //Position: 0x2CBD / 11453
{
	return *iParam0;
}

void Function_102(var uParam0, int iParam1) //Position: 0x2CC6 / 11462
{
	*uParam0 = Local_50[iParam12];
	return;
}

void Function_103(int iParam0) //Position: 0x2CD5 / 11477
{
	Function_57(iParam0, 4294967286);
	return;
}

bool Function_104(bool bParam0) //Position: 0x2CE3 / 11491
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_50, bParam0);
}

void Function_105(var uParam0, bool bParam1) //Position: 0x2CF0 / 11504
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

bool Function_106(bool bParam0) //Position: 0x2D0A / 11530
{
	return Function_37(*bParam0, 2);
}

bool Function_107() //Position: 0x2D17 / 11543
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

bool Function_108(int iParam0, var uParam1, int iParam2) //Position: 0x2D35 / 11573
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
		if (Function_104(iVar0))
		{
			iVar1 = Function_100(iVar0);
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

void Function_109(int iParam0, bool bParam1) //Position: 0x2D86 / 11654
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

bool Function_110(int iParam0) //Position: 0x2DA0 / 11680
{
	return Function_37(*iParam0, 1);
}

void Function_111(int iParam0) //Position: 0x2DAD / 11693
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_59(&iVar1);
	if (Function_101(&iVar1) != bVar0)
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
		Function_105(&Var2, 0);
		Function_51(&Var2);
	}
	return;
}

bool Function_112(int iParam0) //Position: 0x2EAA / 11946
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
		if (Function_114(bVar4))
		{
			switch (Function_113(bVar4))
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

int Function_113(int iParam0) //Position: 0x30E6 / 12518
{
	return StackVal;
}

bool Function_114(bool bParam0) //Position: 0x30F4 / 12532
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_115() //Position: 0x310A / 12554
{
	Function_118(8);
	Function_116(&Global_79298);
	return;
}

void Function_116(int iParam0) //Position: 0x311C / 12572
{
	Function_117(iParam0, 0.0f);
	return;
}

void Function_117(int iParam0, float fParam1) //Position: 0x3128 / 12584
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_32(iParam0, 1);
	Function_31(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_118(int iParam0) //Position: 0x3149 / 12617
{
	Function_40(&Global_79338, iParam0);
	return;
}

bool Function_119() //Position: 0x3158 / 12632
{
	return Function_36(32768);
}

void Function_120(bool bParam0) //Position: 0x3165 / 12645
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_47(64);
	Local_50[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_121(int iParam0, int iParam1, bool bParam2) //Position: 0x3190 / 12688
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

void Function_122() //Position: 0x323D / 12861
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_124();
	Function_123();
	iLocal_16 = 2;
	return;
}

void Function_123() //Position: 0x3278 / 12920
{
	Function_30(1025, 1, 0);
	return;
}

void Function_124() //Position: 0x3286 / 12934
{
	if (!Function_35())
	{
		Function_34();
	}
	Function_30(4096, 1, 1);
	return;
}

void Function_125(var uParam0, var uParam1) //Position: 0x329E / 12958
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_126() //Position: 0x32C3 / 12995
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
		if (Function_114(iVar2))
		{
			iVar3 = Function_127(iVar2);
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

int Function_127(bool bParam0) //Position: 0x3302 / 13058
{
	return Function_128(0, bParam0);
}

int Function_128(int iParam0, bool bParam1) //Position: 0x330E / 13070
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_130(iParam0);
	}
	if (!Function_129(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_129(bool bParam0) //Position: 0x3375 / 13173
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

int Function_130(int iParam0) //Position: 0x3416 / 13334
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_131(int iParam0) //Position: 0x3426 / 13350
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_135(1);
	Function_124();
	Function_123();
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
	itos(&cVar0, Function_217(), 32);
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
	itos(&cVar0, Function_130(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_216(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_134());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_216(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_216(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_42);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_216(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_132(0, Function_60(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_16 = 1;
	return;
}

void Function_132(bool bParam0, int iParam1) //Position: 0x384A / 14410
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_133(iParam1) };
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

struct<16> Function_133(var uParam0) //Position: 0x3A77 / 14967
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

int Function_134() //Position: 0x3AE8 / 15080
{
	return Function_216(12);
}

void Function_135(bool bParam0) //Position: 0x3AF3 / 15091
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_30(16384, 0, 1);
	return;
}

void Function_136(bool bParam0, bool bParam1) //Position: 0x3B0D / 15117
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
	else if (!bParam1 || Function_137(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_137(bool bParam0, bool bParam1) //Position: 0x3B6A / 15210
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_138(int iParam0) //Position: 0x3B89 / 15241
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_139(bool bParam0) //Position: 0x3BE7 / 15335
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_140() //Position: 0x3BFB / 15355
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_141(int iParam0) //Position: 0x3C0A / 15370
{
	Function_143(iParam0, Global_30668[2], &Global_56612, 0);
	Function_143(iParam0, Global_30679[1], &Global_56612, 1);
	Function_143(iParam0, Global_30658[0], &Global_56612, 2);
	Function_143(iParam0, Global_30658[3], &Global_56612, 3);
	Function_143(iParam0, Global_30685[2], &Global_56612, 4);
	Function_143(iParam0, Global_30640[2], &Global_56612, 6);
	Function_143(iParam0, Global_30685[1], &Global_56612, 5);
	Function_143(iParam0, Global_30658[2], &Global_56612, 7);
	Function_142(iParam0, Global_30668[2], &Global_56688, 0);
	Function_142(iParam0, Global_30679[1], &Global_56688, 1);
	Function_142(iParam0, Global_30658[0], &Global_56688, 2);
	Function_142(iParam0, Global_30658[3], &Global_56688, 3);
	Function_142(iParam0, Global_30685[2], &Global_56688, 4);
	Function_142(iParam0, Global_30640[2], &Global_56688, 6);
	Function_142(iParam0, Global_30685[1], &Global_56688, 5);
	Function_142(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_142(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3D00 / 15616
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_134();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_134();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_134();
	}
}

void Function_143(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3DC4 / 15812
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_134();
	}
}

void Function_144(int iParam0) //Position: 0x3E05 / 15877
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_215(*iParam0) };
	Function_211(iParam0);
	Function_210(13, iParam0->f_92);
	Function_210(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_130(2));
	if (iParam0->f_104)
	{
		Function_209(3, 5);
	}
	else
	{
		Function_209(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_130(3));
	Function_115();
	Function_210(13, iParam0->f_92);
	iLocal_94 = 1;
	Function_145(Var0, 4294967295, 0, 0);
	return;
}

void Function_145(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3E71 / 15985
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_208(5, 1);
	Function_48(4096);
	switch (Function_26())
	{
		case 0x00000011:
		case 0x00000002:
			Function_170(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_164();
	Function_163();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_162(&Global_78480 + 220, &uVar0, 0);
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
					Function_162(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_146(bParam2);
}

void Function_146(bool bParam0) //Position: 0x3F83 / 16259
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_118(2);
	if (bParam0)
	{
		Function_118(1);
	}
	else
	{
		Function_44(1);
	}
	Function_147();
	return;
}

void Function_147() //Position: 0x400E / 16398
{
	Function_160();
	Function_159();
	Function_159();
	Function_158();
	Function_158();
	Function_157();
	Function_157();
	Function_154();
	Function_154();
	if (!Function_27())
	{
		Function_152();
		Function_151();
		Function_150();
		Function_149();
	}
	Function_148();
	return;
}

void Function_148() //Position: 0x4041 / 16449
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

void Function_149() //Position: 0x4147 / 16711
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

void Function_150() //Position: 0x417A / 16762
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

void Function_151() //Position: 0x4308 / 17160
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

void Function_152() //Position: 0x44BC / 17596
{
	Function_153(&Global_28260, 1, 0);
	return;
}

void Function_153(int iParam0, bool bParam1, var uParam2) //Position: 0x44CA / 17610
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

struct<8> Function_154() //Position: 0x46BB / 18107
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
				iVar2 = ((Function_156((50 + iVar4)) + Function_156((183 + iVar4))) + Function_156((90 + iVar4)));
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
	Function_155(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_155(int iParam0, bool bParam1, bool bParam2) //Position: 0x4756 / 18262
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

int Function_156(bool bParam0) //Position: 0x49F1 / 18929
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_157() //Position: 0x4A32 / 18994
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
		iVar2 = ((Function_156((50 + iVar3) + 15) + Function_156((183 + iVar3) + 15)) + Function_156((90 + iVar3) + 15));
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
	Function_155(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_158() //Position: 0x4ABB / 19131
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
			iVar2 = ((Function_156((50 + iVar3) + 8) + Function_156((183 + iVar3) + 8)) + Function_156((90 + iVar3) + 8));
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
	Function_155(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_159() //Position: 0x4B52 / 19282
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
		iVar2 = ((Function_156((50 + iVar3)) + Function_156((183 + iVar3))) + Function_156((90 + iVar3)));
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
	Function_155(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_160() //Position: 0x4BD1 / 19409
{
	Function_161(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_155(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_161(int iParam0, bool bParam1, int iParam2) //Position: 0x4BF7 / 19447
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

void Function_162(var uParam0, var uParam1, bool bParam2) //Position: 0x4E01 / 19969
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

void Function_163() //Position: 0x4E46 / 20038
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

void Function_164() //Position: 0x4E70 / 20080
{
	Function_165(&(Global_50170[522]));
	Function_165(&(Global_50170[622]));
	Function_165(&(Global_50170[722]));
	Function_165(&(Global_50170[822]));
	Function_165(&(Global_50170[922]));
	Function_165(&(Global_50170[1022]));
	Function_165(&(Global_50170[1122]));
	return;
}

void Function_165(bool bParam0) //Position: 0x4EB9 / 20153
{
	Global_56092[*bParam0] = 0;
	Function_166(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_166(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4ED3 / 20179
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_169(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_168(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_169(iParam0), &cVar0, 2, 2, true);
		Function_167(Function_169(iParam0), 0);
	}
}

void Function_167(bool bParam0, bool bParam1) //Position: 0x4F81 / 20353
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

struct<16> Function_168(int iParam0) //Position: 0x4FA6 / 20390
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_169(int iParam0) //Position: 0x4FDA / 20442
{
	return Global_50170[iParam022].f_24;
}

void Function_170(var uParam0, var uParam1, int iParam2) //Position: 0x4FE9 / 20457
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_207(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_199(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_206(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_198(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_166(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_207(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_199(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_206(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_198(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_166(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_207(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_171(17, 150, Function_206(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_198(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_166(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_171(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5192 / 20882
{
	Function_196(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_169(iParam0), 1.0f, false, 0);
	Function_192(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_189(iParam3);
	}
	Function_183(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_172();
}

void Function_172() //Position: 0x51F8 / 20984
{
	if (!Function_27())
	{
		if (!Function_182(1, 3, 1, 1))
		{
			Function_174(1);
			Function_173(1, 8);
		}
	}
	else
	{
		Function_146(0);
	}
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x5221 / 21025
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

void Function_174(bool bParam0) //Position: 0x5263 / 21091
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_175();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_147();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_31(&Global_63095, 1);
		Function_31(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_175() //Position: 0x52B4 / 21172
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_177(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_177(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_176(StackVal, StackVal, vVar0))
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

bool Function_176(vector3 vParam0) //Position: 0x5355 / 21333
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_177(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x536D / 21357
{
	int iVar0;
	
	iVar0 = Function_180(uParam2, uParam3);
	if (Function_179(iVar0))
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
	Function_178();
	return StackVal, StackVal, Function_178();
}

vector3 Function_178() //Position: 0x5454 / 21588
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_179(int iParam0) //Position: 0x545D / 21597
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_180(bool bParam0, bool bParam1) //Position: 0x5473 / 21619
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
				fVar2 = Function_181(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_181(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_179(bVar0) && !bParam1)
	{
		bVar0 = Function_180(bParam0, 1);
	}
	return bVar0;
}

float Function_181(vector3 vParam0, vector3 vParam3) //Position: 0x553A / 21818
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_182(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5557 / 21847
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

void Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x55FB / 22011
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_188();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_187(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_186(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_185(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_184(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_187(), iVar1 + 1);
	return;
}

struct<16> Function_184(int iParam0) //Position: 0x566D / 22125
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_185(int iParam0) //Position: 0x568E / 22158
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_186(int iParam0) //Position: 0x56AF / 22191
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_187() //Position: 0x56D0 / 22224
{
	return "CQueue_Count";
}

var Function_188() //Position: 0x56E5 / 22245
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_189(int iParam0) //Position: 0x5714 / 22292
{
	Function_190(iParam0, 1);
	return;
}

void Function_190(int iParam0, bool bParam1) //Position: 0x5720 / 22304
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_32(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_191((iVar0 % 32)));
	}
	else
	{
		Function_31(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_191((iVar0 % 32)));
	}
	return;
}

int Function_191(bool bParam0) //Position: 0x5776 / 22390
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_192(int iParam0, int iParam1) //Position: 0x5782 / 22402
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_195(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_169(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_194(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_193(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_169(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_169(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_169(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_193(int iParam0) //Position: 0x5804 / 22532
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_194(int iParam0) //Position: 0x5824 / 22564
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_195(int iParam0) //Position: 0x5855 / 22613
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

void Function_196(bool bParam0, bool bParam1) //Position: 0x59D3 / 22995
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_197();
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

var Function_197() //Position: 0x5B1F / 23327
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_198(var uParam0, bool bParam1, bool bParam2) //Position: 0x5B6C / 23404
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_199(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x5B84 / 23428
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
	Function_183(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_198(&fParam5, bParam8, iParam9);
	Function_166(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_201(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_189(iParam12);
	}
	Function_200(iParam0, 4);
	Function_172();
}

void Function_200(int iParam0, int iParam1) //Position: 0x5BFA / 23546
{
	Function_31(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5C0E / 23566
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_195(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_169(iParam0));
	if ((bParam3 && Function_205(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_169(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_194(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_203(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_193(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_169(iParam0), &Var7, 0, 2, Function_205(iParam0, 4));
			if (!bParam3)
			{
				Function_202(iParam0, 4);
			}
		}
	}
}

void Function_202(int iParam0, int iParam1) //Position: 0x5CCB / 23755
{
	Function_32(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_203(int iParam0) //Position: 0x5CDF / 23775
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_204(int iParam0) //Position: 0x5D0D / 23821
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_205(int iParam0, bool bParam1) //Position: 0x5D3D / 23869
{
	return Function_37(Global_50170[iParam022].f_32, bParam1);
}

bool Function_206() //Position: 0x5D51 / 23889
{
	return "MP_Unstoppable_Icon_128";
}

float Function_207(int iParam0) //Position: 0x5D71 / 23921
{
	return Global_50170[iParam022].f_12;
}

void Function_208(int iParam0, int iParam1) //Position: 0x5D80 / 23936
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0x5DA5 / 23973
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_210(int iParam0, int iParam1) //Position: 0x5DCE / 24014
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_211(int iParam0) //Position: 0x5DE8 / 24040
{
	struct<17> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_215(*iParam0) };
	bVar5 = TO_FLOAT(CEIL((Function_60(iParam0 + 16 + 8) / Var0.f_12)));
	switch (Function_212(11))
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
	fVar7 = (((TO_FLOAT(Function_216(29)) * fVar6) * Var0.f_16) * TO_FLOAT(bLocal_42));
	bVar8 = (fVar7 / bVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar8));
	iParam0->f_92 = (Function_217() + iParam0->f_88);
	return;
}

int Function_212(int iParam0) //Position: 0x5EC9 / 24265
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Function_216(iParam0);
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_214(iVar2))
		{
			if (Function_213(iParam0, iVar2) >= iVar0)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int Function_213(int iParam0, bool bParam1) //Position: 0x5F05 / 24325
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_216(iParam0);
	}
	if (!Function_129(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

bool Function_214(bool bParam0) //Position: 0x5F73 / 24435
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_129(bParam0);
}

struct<20> Function_215(int iParam0) //Position: 0x5F89 / 24457
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

int Function_216(int iParam0) //Position: 0x60DE / 24798
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_217() //Position: 0x60F7 / 24823
{
	return Function_130(0);
}

void Function_218(int iParam0) //Position: 0x6101 / 24833
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

void Function_219() //Position: 0x61C9 / 25033
{
	if ((&Local_378 + 16)->f_32)
	{
		if (IS_VOLUME_VALID(Local_106.f_228))
		{
			DESTROY_VOLUME(Local_106.f_228);
		}
		if (IS_OBJECT_VALID(bLocal_592))
		{
			DESTROY_OBJECT(bLocal_592);
			iLocal_609 = (iLocal_609 - 1);
		}
		if (IS_BLIP_VALID(bLocal_586))
		{
			REMOVE_BLIP(bLocal_586);
		}
	}
	if ((&Local_378 + 16)->f_36)
	{
		if (IS_VOLUME_VALID(Local_106.f_232))
		{
			DESTROY_VOLUME(Local_106.f_232);
		}
		if (IS_OBJECT_VALID(bLocal_593))
		{
			DESTROY_OBJECT(bLocal_593);
			iLocal_609 = (iLocal_609 - 1);
		}
		if (IS_BLIP_VALID(bLocal_587))
		{
			REMOVE_BLIP(bLocal_587);
		}
	}
	if ((&Local_378 + 16)->f_40)
	{
		if (IS_VOLUME_VALID(Local_106.f_236))
		{
			DESTROY_VOLUME(Local_106.f_236);
		}
		if (IS_OBJECT_VALID(bLocal_594))
		{
			DESTROY_OBJECT(bLocal_594);
			iLocal_609 = (iLocal_609 - 1);
		}
		if (IS_BLIP_VALID(bLocal_588))
		{
			REMOVE_BLIP(bLocal_588);
		}
	}
	return;
}

void Function_220() //Position: 0x6292 / 25234
{
	SET_VOLUME_PARAMS(Local_106.f_184, *(&Local_106 + 1064), *(&Local_106 + 1064 + 12), 5.0f, 5.0f, 5.0f);
	return;
}

void Function_221() //Position: 0x62B2 / 25266
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_224(&Local_378, 0);
			if (Function_223(bLocal_18) >= 1)
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_222("PIK_MP_Obj4", 0x40f00000, 1, 2, 0, 0, 0);
			}
			Local_378.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_219();
			if (Function_223(bLocal_18) < 0)
			{
				if (Function_98(11, 1, 0x3f800000))
				{
					Local_378.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_378.f_8 = 0;
			Local_378.f_4 = 11;
			break;
	}
	return;
}

void Function_222(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x6345 / 25413
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

int Function_223(bool bParam0) //Position: 0x6398 / 25496
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

void Function_224(var uParam0, bool bParam1) //Position: 0x63DE / 25566
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

void Function_225() //Position: 0x6415 / 25621
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_224(&Local_378, 0);
			Local_378.f_8 = 6;
			Function_263();
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_240();
			}
			Function_238();
			Function_228();
			if (iLocal_610)
			{
				if (Function_223(bLocal_18) != 0 && !Function_227())
				{
					Function_226();
				}
				iLocal_610 = 0;
			}
			if (Function_227())
			{
				if (Function_98(4, 1, 0x3f800000))
				{
					Local_378.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_378.f_8 = 0;
			Local_378.f_4 = 4;
			break;
	}
	return;
}

void Function_226() //Position: 0x64A7 / 25767
{
	if (!Function_227())
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		if (iLocal_609 >= 1)
		{
			Function_222("PIK_MP_obj4_Sub", 0x40f00000, 1, 2, 0, 0, 0);
		}
		else if (iLocal_609 == 1)
		{
			Function_222("PIK_MP_obj_LastBomb", 0x40f00000, 1, 2, 0, 0, 0);
		}
	}
	return;
}

bool Function_227() //Position: 0x650A / 25866
{
	if (((&Local_378 + 16)->f_32 && (&Local_378 + 16)->f_36) && (&Local_378 + 16)->f_40)
	{
		return 1;
	}
	return 0;
}

void Function_228() //Position: 0x652D / 25901
{
	Function_237();
	Function_236();
	Function_231();
	Function_230();
	if (Function_64(&uLocal_595))
	{
		if (Function_60(&uLocal_595) <= 0.0f && !(&Local_378 + 16)->f_32)
		{
			Function_229(0, GET_LOCAL_SLOT());
		}
	}
	if (Function_64(&iLocal_598))
	{
		if (Function_60(&iLocal_598) <= 0.0f && !(&Local_378 + 16)->f_36)
		{
			Function_229(1, GET_LOCAL_SLOT());
		}
	}
	if (Function_64(&iLocal_601))
	{
		if (Function_60(&iLocal_601) <= 0.0f && !(&Local_378 + 16)->f_40)
		{
			Function_229(2, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_229(int iParam0, bool bParam1) //Position: 0x65AB / 26027
{
	struct<5> Var0;
	
	Var0 = iParam0;
	Var0.f_4 = bParam1;
	NET_SCRIPTMSG_SEND(3, 87, &Var0, 2, 1);
	return;
}

void Function_230() //Position: 0x65C6 / 26054
{
	if (IS_ACTOR_VALID(Function_38()))
	{
		switch (iLocal_617)
		{
			case 0x00000000:
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_240))
				{
					SET_VOLUME_PARAMS(Local_106.f_184, *(&Local_106 + 1040), *(&Local_106 + 1040 + 12), 5.0f, 5.0f, 5.0f);
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_244))
				{
					SET_VOLUME_PARAMS(Local_106.f_184, *(&Local_106 + 992), *(&Local_106 + 992 + 12), 5.0f, 5.0f, 5.0f);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_248))
				{
					SET_VOLUME_PARAMS(Local_106.f_184, *(&Local_106 + 1016), *(&Local_106 + 1016 + 12), 5.0f, 5.0f, 5.0f);
				}
				break;
			}
	}
	iLocal_617++;
	if (iLocal_617 >= 2)
	{
		iLocal_617 = 0;
	}
	return;
}

void Function_231() //Position: 0x6680 / 26240
{
	var uVar0;
	
	if (!(&Local_378 + 16)->f_40 && !Function_64(&iLocal_601))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_594), "UseCase1", "LastUserObject", &uVar0)) || IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_594), "UseCase2", "LastUserObject", &uVar0)))
		{
			Function_232();
			Function_229(5, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_232() //Position: 0x66FB / 26363
{
	Function_234(FLOOR(100.0f), "XP_PIK_Bomb", 0);
	Function_233(2, FLOOR(100.0f));
	return;
}

void Function_233(int iParam0, bool bParam1) //Position: 0x6727 / 26407
{
	Function_209(iParam0, (Function_130(iParam0) + bParam1));
	return;
}

void Function_234(var uParam0, bool bParam1, int iParam2) //Position: 0x673A / 26426
{
	Function_235(uParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_217(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_217(), UI_GET_STRING(bParam1));
	}
	return;
}

void Function_235(var uParam0) //Position: 0x677D / 26493
{
	Function_233(0, uParam0);
	return;
}

void Function_236() //Position: 0x6789 / 26505
{
	var uVar0;
	
	if (!(&Local_378 + 16)->f_36 && !Function_64(&iLocal_598))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_593), "UseCase1", "LastUserObject", &uVar0)) || IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_593), "UseCase2", "LastUserObject", &uVar0)))
		{
			Function_232();
			Function_229(4, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_237() //Position: 0x6804 / 26628
{
	var uVar0;
	
	if (!(&Local_378 + 16)->f_32 && !Function_64(&uLocal_595))
	{
		if (IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_592), "UseCase1", "LastUserObject", &uVar0)) || IS_OBJECT_VALID(GRINGO_QUERY_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bLocal_592), "UseCase2", "LastUserObject", &uVar0)))
		{
			Function_232();
			Function_229(3, GET_LOCAL_SLOT());
		}
	}
	return;
}

void Function_238() //Position: 0x687F / 26751
{
	if (!iLocal_585)
	{
		if ((((&Local_378 + 16)->f_24 || Function_239()) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_618)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_611))
		{
			if (SQUAD_GET_SIZE(bLocal_98) >= 0)
			{
				Function_263();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_618);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_618);
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_611);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_611);
				iLocal_585 = 1;
			}
		}
	}
	return;
}

int Function_239() //Position: 0x68D0 / 26832
{
	if (IS_ACTOR_VALID(Function_38()))
	{
		switch (iLocal_616)
		{
			case 0x00000000:
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_264))
				{
					return 1;
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_220))
				{
					return 1;
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_224))
				{
					return 1;
				}
				break;
			}
	}
	iLocal_616++;
	if (iLocal_616 >= 2)
	{
		iLocal_616 = 0;
	}
	return 0;
}

void Function_240() //Position: 0x6944 / 26948
{
	if (!iLocal_620)
	{
		if (Function_64(&iLocal_621))
		{
			if (Function_60(&iLocal_621) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_378 + 16)->f_64)
				{
					case 0x00000000:
						Function_262();
						Function_261(&Local_106 + 176, bLocal_607);
						Function_260(Local_106.f_176, bLocal_18, 0, 0);
						break;
					
					case 0x00000001:
						Function_245();
						Function_261(&Local_106 + 180, bLocal_607);
						Function_260(Local_106.f_180, bLocal_18, 0, 0);
						break;
				}
				(&Local_378 + 16)->f_64++;
				Function_244(&iLocal_621);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_241(&iLocal_621);
		}
		if ((&Local_378 + 16)->f_64 >= 2)
		{
			iLocal_620 = 1;
		}
	}
	return;
}

void Function_241(int iParam0) //Position: 0x69F0 / 27120
{
	if (!Function_64(iParam0))
	{
		Function_242(iParam0, 0.0f);
	}
	return;
}

void Function_242(int iParam0, float fParam1) //Position: 0x6A05 / 27141
{
	Function_61();
	Function_243(iParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0x6A19 / 27161
{
	uParam0->f_4 = iParam1;
	Function_32(uParam0, 1);
	Function_31(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_244(int iParam0) //Position: 0x6A36 / 27190
{
	Function_242(iParam0, 0.0f);
	return;
}

void Function_245() //Position: 0x6A42 / 27202
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_180 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "PIK_Camp_Two_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c201", 478, -1306,503f, 79,32105f, 2212,006f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c202", 479, -1296,726f, 79,32105f, 2195,043f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c203", 480, -1283,305f, 80,80123f, 2193,51f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c204", 481, -1296,14f, 81,0722f, 2218,017f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c205", 482, -1283,982f, 79,32105f, 2206,93f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c206", 483, -1276,375f, 79,32105f, 2201,173f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c207", 484, -1288,141f, 79,32105f, 2214,887f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c208", 485, -1292,061f, 79,32105f, 2203,525f, 0.0f, 228,8367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_246(bool bParam0, int iParam1) //Position: 0x6E10 / 28176
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_259(bParam0);
			break;
		
		case 0x00000001:
			Function_258(bParam0);
			break;
		
		case 0x00000002:
			Function_257(bParam0);
			break;
		
		case 0x00000005:
			Function_256(bParam0);
			break;
		
		case 0x00000004:
			Function_255(bParam0);
			break;
		
		case 0x00000003:
			Function_254(bParam0);
			break;
		
		case 0x00000006:
			Function_253(bParam0);
			break;
		
		case 0x00000007:
			Function_252(bParam0);
			break;
		
		case 0x00000008:
			Function_251(bParam0);
			break;
		
		case 0x00000009:
			Function_249(bParam0);
			break;
		
		default:
			Function_247(bParam0);
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

void Function_247(bool bParam0) //Position: 0x6EDC / 28380
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
	Function_248(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_248(var uParam0, bool bParam1) //Position: 0x7240 / 29248
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

void Function_249(bool bParam0) //Position: 0x7262 / 29282
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_250(bool bParam0, int iParam1) //Position: 0x73FF / 29695
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

void Function_251(bool bParam0) //Position: 0x7432 / 29746
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_252(bool bParam0) //Position: 0x75DB / 30171
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_253(bool bParam0) //Position: 0x776C / 30572
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_254(bool bParam0) //Position: 0x789E / 30878
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_255(bool bParam0) //Position: 0x7A26 / 31270
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_256(bool bParam0) //Position: 0x7B80 / 31616
{
	Function_247(bParam0);
	Function_250(bParam0, 1);
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

void Function_257(bool bParam0) //Position: 0x7CBE / 31934
{
	Function_247(bParam0);
	Function_250(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_258(bool bParam0) //Position: 0x7CE1 / 31969
{
	Function_247(bParam0);
	Function_250(bParam0, 0);
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

void Function_259(bool bParam0) //Position: 0x7E4B / 32331
{
	Function_247(bParam0);
	Function_250(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_260(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7E86 / 32390
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

void Function_261(bool bParam0, bool bParam1) //Position: 0x7F08 / 32520
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

void Function_262() //Position: 0x7FA4 / 32676
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "PIK_Camp_One_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c01", 477, -1234,545f, 76,28918f, 2518,023f, 0.0f, 113,6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c02", 478, -1246,003f, 75,42966f, 2534,506f, 0.0f, 10,53605f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c03", 479, -1254,243f, 75,4409f, 2519,288f, 0.0f, 60,78152f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c04", 480, -1245,725f, 76,35268f, 2511,802f, 0.0f, 6,547087f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c05", 481, -1254,681f, 75,14344f, 2533,341f, 0.0f, 113,6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c06", 482, -1239,43f, 76,28918f, 2514,725f, 0.0f, 113,6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c07", 483, -1244,846f, 77,72587f, 2506,421f, 0.0f, 10,53298f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_c08", 484, -1259,63f, 74,19339f, 2527,865f, 0.0f, 113,6619f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_263() //Position: 0x836C / 33644
{
	Function_265(bLocal_98);
	Function_265(bLocal_99);
	Function_265(bLocal_101);
	Function_265(bLocal_103);
	Function_264(bLocal_98, Local_106.f_212, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_98, 0);
	Function_264(bLocal_99, Local_106.f_188, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_99, 0);
	Function_264(bLocal_99, Local_106.f_216, 0, 2);
	Function_264(bLocal_101, Local_106.f_220, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_101, 0);
	Function_264(bLocal_103, Local_106.f_224, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_103, 0);
	return;
}

var Function_264(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x83E1 / 33761
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

void Function_265(bool bParam0) //Position: 0x841C / 33820
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

void Function_266() //Position: 0x844E / 33870
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_224(&Local_378, 0);
			Local_378.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_267();
			}
			Function_238();
			Function_228();
			if (IS_ACTOR_VALID(Function_38()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_106.f_252) && (&Local_378 + 16)->f_44)
				{
					Function_229(6, GET_LOCAL_SLOT());
				}
			}
			if (iLocal_610)
			{
				if (Function_223(bLocal_18) == 0)
				{
					Function_226();
				}
				iLocal_610 = 0;
			}
			if (iLocal_608 && (&Local_378 + 16)->f_44)
			{
				if (Function_98(2, 1, 0x3f800000))
				{
					Local_378.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_378.f_8 = 0;
			Local_378.f_4 = 2;
			break;
	}
	return;
}

void Function_267() //Position: 0x8504 / 34052
{
	if (!iLocal_619)
	{
		if (Function_64(&iLocal_621))
		{
			if (Function_60(&iLocal_621) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_378 + 16)->f_60)
				{
					case 0x00000000:
						Function_274();
						Function_261(&Local_106 + 168, bLocal_607);
						Function_260(Local_106.f_168, bLocal_18, 0, 0);
						break;
					
					case 0x00000001:
						Function_269();
						Function_261(&Local_106 + 164, bLocal_607);
						Function_260(Local_106.f_164, bLocal_18, 0, 0);
						break;
					
					case 0x00000002:
						Function_268();
						break;
				}
				(&Local_378 + 16)->f_60++;
				Function_244(&iLocal_621);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_241(&iLocal_621);
		}
		if ((&Local_378 + 16)->f_60 >= 3)
		{
			iLocal_619 = 1;
			(&Local_378 + 16)->f_44 = 1;
		}
	}
	return;
}

void Function_268() //Position: 0x85C4 / 34244
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_172 = CREATE_ACTORSET_IN_LAYOUT(Local_106, "PIK_Cowsset", 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "RIDEABLE_ANIMAL_Cow", 1008, -1167,734f, 77,30194f, 2360f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_106.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "RIDEABLE_ANIMAL_Cow01", 1009, -1160,458f, 77,30194f, 2352,025f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_106.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "RIDEABLE_ANIMAL_Cow02", 1010, -1162,999f, 77,26513f, 2365,899f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_106.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "RIDEABLE_ANIMAL_Cow03", 1011, -1159,836f, 76,29803f, 2376.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_106.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "RIDEABLE_ANIMAL_Cow04", 1009, -1174,142f, 77,30194f, 2352,025f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_106.f_172, bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 12);
	return;
}

void Function_269() //Position: 0x8741 / 34625
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_164 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "PIK_Basin_Walls"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w01", 477, -1128,617f, 98,63f, 2370,485f, 0.0f, 157,26f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w02", 479, -1155,728f, 89,644f, 2338,909f, 0.0f, 200,394f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w03", 478, -1150,821f, 92,25713f, 2325,722f, 0.0f, 217,737f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w04", 480, -1144,478f, 82,582f, 2388,002f, 0.0f, 5,624f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w05", 482, -1175,037f, 79,331f, 2406,396f, 0.0f, -74,227f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w06", 481, -1134,054f, 96,66474f, 2352,682f, 0.0f, 195,9372f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_w09", 483, -1144,004f, 81,94096f, 2400,757f, 0.0f, 5,245351f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_164);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_270(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_270(bool bParam0, bool bParam1) //Position: 0x8B00 / 35584
{
	Function_273(bParam0);
	switch (bParam1)
	{
		case 0x00000001:
			Function_246(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
			SQUAD_JOIN(bParam0, bLocal_98);
			SET_ACTOR_SKIP_VISIBILITY_CHECK(bParam0, 1);
			break;
		
		case 0x00000002:
			Function_246(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
			SQUAD_JOIN(bParam0, bLocal_99);
			SET_ACTOR_SKIP_VISIBILITY_CHECK(bParam0, 1);
			break;
		
		case 0x00000003:
			Function_246(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
			SQUAD_JOIN(bParam0, bLocal_100);
			break;
		
		case 0x0000000B:
			SQUAD_JOIN(bParam0, bLocal_105);
			break;
		
		case 0x00000004:
			SQUAD_JOIN(bParam0, bLocal_101);
			break;
		
		case 0x00000005:
			SQUAD_JOIN(bParam0, bLocal_103);
			break;
		
		case 0x00000006:
			SQUAD_JOIN(bParam0, bLocal_102);
			Function_253(bParam0);
			GIVE_WEAPON_TO_ACTOR(bParam0, 9, false, 1, 1);
			break;
		
		case 0x00000007:
			SQUAD_JOIN(bParam0, bLocal_104);
			Function_253(bParam0);
			GIVE_WEAPON_TO_ACTOR(bParam0, 9, false, 1, 1);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_99);
			break;
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
	Function_271(bParam0, 1);
	return;
}

void Function_271(bool bParam0, bool bParam1) //Position: 0x8BF5 / 35829
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
	fVar1 = Function_272(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_272(int iParam0) //Position: 0x8C39 / 35897
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

void Function_273(bool bParam0) //Position: 0x8CCC / 36044
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

void Function_274() //Position: 0x8D8B / 36235
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_168 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "PIK_Basin_Floor_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f01", 477, -1185,393f, 76,303f, 2352,563f, 0.0f, 223,81f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f02", 478, -1202,336f, 75,294f, 2355,849f, 0.0f, 217,144f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f04", 480, -1192,986f, 75,337f, 2368,51f, 0.0f, 252,677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f06", 482, -1213,53f, 75,294f, 2360,712f, 0.0f, 252,677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f07", 483, -1207,042f, 75,294f, 2382,683f, 0.0f, 252,677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f09", 485, -1208,683f, 78,30584f, 2409,53f, 0.0f, 252,677f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_246(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f010", 480, -1234,534f, 73,75769f, 2375,895f, 0.0f, 99,56224f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "pik_guard_f011", 479, -1235,045f, 73,69958f, 2371,987f, 0.0f, 421,6692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_246(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_270(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_275() //Position: 0x91D6 / 37334
{
	int iVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_362(&Local_378))
			{
				Function_359();
				Function_352(&uLocal_443, 0);
				Function_349(&uLocal_443, 1, 11, 3, 1);
				Local_378.f_100 = "FTR_SONG_04";
				Local_378.f_8 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_340())
			{
				Local_378.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_337();
			Function_335(&Local_378, Local_106);
			Function_332();
			Function_296(Local_106, &uLocal_443, 1, 1);
			iVar0 = 38702;
			NET_SCRIPTMSG_REGISTER_HANDLER(87, iVar0);
			Function_283(&Local_378, 38642);
			bLocal_611 = CREATE_EVENT_TRAP("tntTrap", 17, Local_106);
			EVENT_TRAP_ON_VOLUME(bLocal_611, Local_106.f_188);
			RESET_PROPS_IN_VOLUME(Local_106.f_188, 1);
			Function_281();
			Function_219();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_618 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_106);
			EVENT_TRAP_ON_VOLUME(StackVal, bLocal_618);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_378 + 16)->f_52 = (2 * Function_280());
			}
			if (iLocal_609 == 3)
			{
				Function_222("PIK_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0);
			}
			else
			{
				Function_226();
			}
			Local_378.f_8 = 106;
			break;
		
		case 0x0000006A:
			Function_276(&Local_378);
			break;
	}
	return;
}

void Function_276(var uParam0) //Position: 0x933F / 37695
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_278(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_278(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_277();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_277() //Position: 0x9421 / 37921
{
	bLocal_91 = true;
	return;
}

void Function_278(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x942A / 37930
{
	if (iParam0 == Global_30668[2])
	{
		Function_279(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_279(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_279(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_279(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_279(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_279(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_279(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_279(7);
	}
}

void Function_279(int iParam0) //Position: 0x94BF / 38079
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

int Function_280() //Position: 0x9554 / 38228
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

void Function_281() //Position: 0x9583 / 38275
{
	Function_282();
	iLocal_609 = 3;
	if (!(&Local_378 + 16)->f_32)
	{
		bLocal_586 = ADD_BLIP_FOR_COORD(&Local_106 + 404, 330, 0, 2, 0);
		SET_BLIP_PRIORITY(bLocal_586, 2);
		SET_BLIP_NAME(bLocal_586, "mp_Weapon_Crate");
	}
	if (!(&Local_378 + 16)->f_36)
	{
		bLocal_587 = ADD_BLIP_FOR_COORD(&Local_106 + 432, 330, 0, 2, 0);
		SET_BLIP_PRIORITY(bLocal_587, 2);
		SET_BLIP_NAME(bLocal_587, "mp_Weapon_Crate");
	}
	if (!(&Local_378 + 16)->f_40)
	{
		bLocal_588 = ADD_BLIP_FOR_COORD(&Local_106 + 460, 330, 0, 2, 0);
		SET_BLIP_PRIORITY(bLocal_588, 2);
		SET_BLIP_NAME(bLocal_588, "mp_Weapon_Crate");
	}
	return;
}

void Function_282() //Position: 0x9641 / 38465
{
	bLocal_592 = CREATE_GRINGO_IN_LAYOUT(Local_106, "p_boom_box_01", "mp_rig_tnt", *(&Local_106 + 404), *(&Local_106 + 404 + 12));
	bLocal_593 = CREATE_GRINGO_IN_LAYOUT(Local_106, "p_boom_box_02", "mp_rig_tnt", *(&Local_106 + 432), *(&Local_106 + 432 + 12));
	bLocal_594 = CREATE_GRINGO_IN_LAYOUT(Local_106, "p_boom_box_03", "mp_rig_tnt", *(&Local_106 + 460), *(&Local_106 + 460 + 12));
	return;
}

void Function_283(var uParam0, int iParam1) //Position: 0x96E6 / 38630
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_284(int iParam0) //Position: 0x96F2 / 38642
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_PIK_Bomb"), iParam0);
	itos(&cVar0, Function_130(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

void Function_285(int iParam0) //Position: 0x972E / 38702
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 0x00000003:
			if (IS_VOLUME_VALID(Local_106.f_228))
			{
				DESTROY_VOLUME(Local_106.f_228);
			}
			Function_295(&uLocal_595, -10.0f);
			if (IS_BLIP_VALID(bLocal_586))
			{
				REMOVE_BLIP(bLocal_586);
			}
			bLocal_589 = ADD_BLIP_FOR_OBJECT(bLocal_592, 393, 0f, 2, 0);
			SET_BLIP_NAME(bLocal_589, "mp_Blip_Exploding_Crate");
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_294();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_260(bLocal_102, bLocal_18, 0, 0);
				Function_260(bLocal_101, bLocal_18, 0, 0);
			}
			Function_261(&bLocal_102, bLocal_607);
			Function_261(&bLocal_101, bLocal_607);
			Function_293(bLocal_102, &Local_106 + 492, 2, 1);
			Function_222("PIK_MP_Bomb_Planted", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(Local_106.f_232))
			{
				DESTROY_VOLUME(Local_106.f_232);
			}
			Function_295(&iLocal_598, -10.0f);
			if (IS_BLIP_VALID(bLocal_587))
			{
				REMOVE_BLIP(bLocal_587);
			}
			bLocal_590 = ADD_BLIP_FOR_OBJECT(bLocal_593, 393, 0f, 2, 0);
			SET_BLIP_NAME(bLocal_590, "mp_Blip_Exploding_Crate");
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_287();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_260(bLocal_104, bLocal_18, 0, 0);
				Function_260(bLocal_103, bLocal_18, 0, 0);
			}
			Function_261(&bLocal_104, bLocal_607);
			Function_261(&bLocal_103, bLocal_607);
			Function_293(bLocal_104, &Local_106 + 744, 2, 1);
			Function_222("PIK_MP_Bomb_Planted", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(Local_106.f_236))
			{
				DESTROY_VOLUME(Local_106.f_236);
			}
			Function_295(&iLocal_601, -10.0f);
			if (IS_BLIP_VALID(bLocal_588))
			{
				REMOVE_BLIP(bLocal_588);
			}
			bLocal_591 = ADD_BLIP_FOR_OBJECT(bLocal_594, 393, 0f, 2, 0);
			SET_BLIP_NAME(bLocal_591, "mp_Blip_Exploding_Crate");
			Function_222("PIK_MP_Bomb_Planted", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000000:
			if (!(&Local_378 + 16)->f_32)
			{
				(&Local_378 + 16)->f_32 = 1;
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					Function_286(&Local_106 + 404, "ExplosionLarge", 0, 1);
					Function_286(&Local_106 + 404, "CannonballExplosion", 0, 1);
				}
				if (IS_OBJECT_VALID(bLocal_592))
				{
					DESTROY_OBJECT(bLocal_592);
				}
				iLocal_609 = (iLocal_609 - 1);
				Function_226();
				if (IS_BLIP_VALID(bLocal_586))
				{
					REMOVE_BLIP(bLocal_586);
				}
				if (IS_BLIP_VALID(bLocal_589))
				{
					REMOVE_BLIP(bLocal_589);
				}
				Global_56612[09].f_12++;
			}
			break;
		
		case 0x00000001:
			if (!(&Local_378 + 16)->f_36)
			{
				(&Local_378 + 16)->f_36 = 1;
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					Function_286(&Local_106 + 432, "ExplosionLarge", 0, 1);
					Function_286(&Local_106 + 432, "CannonballExplosion", 0, 1);
				}
				if (IS_OBJECT_VALID(bLocal_593))
				{
					DESTROY_OBJECT(bLocal_593);
				}
				iLocal_609 = (iLocal_609 - 1);
				Function_226();
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
		
		case 0x00000002:
			if (!(&Local_378 + 16)->f_40)
			{
				(&Local_378 + 16)->f_40 = 1;
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					Function_286(&Local_106 + 460, "ExplosionLarge", 0, 1);
					Function_286(&Local_106 + 460, "CannonballExplosion", 0, 1);
				}
				if (IS_OBJECT_VALID(bLocal_594))
				{
					DESTROY_OBJECT(bLocal_594);
				}
				iLocal_609 = (iLocal_609 - 1);
				Function_226();
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
		
		case 0x00000006:
			iLocal_608 = 1;
			break;
	}
	return;
}

void Function_286(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x9B5C / 39772
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_287() //Position: 0x9B78 / 39800
{
	Function_292(5, "B", Local_106.f_272);
	Function_288(7, "B", Local_106.f_256);
	return;
}

void Function_288(char* cParam0, bool bParam1, bool bParam2) //Position: 0x9B98 / 39832
{
	iLocal_405 = Function_280();
	switch (iLocal_405)
	{
		case 0x00000003:
			Function_289(cParam0, bParam1, bParam2, 483, "pik_backup_sniper_01_", 6);
			Function_289(cParam0, bParam1, bParam2, 484, "pik_backup_sniper_02_", 6);
			Function_289(cParam0, bParam1, bParam2, 478, "pik_backup_sniper_03_", 6);
			Function_289(cParam0, bParam1, bParam2, 484, "pik_backup_sniper_04_", 6);
		
		case 0x00000002:
			Function_289(cParam0, bParam1, bParam2, 481, "pik_backup_sniper_05_", 6);
			Function_289(cParam0, bParam1, bParam2, 482, "pik_backup_sniper_06_", 6);
		
		case 0x00000001:
			Function_289(cParam0, bParam1, bParam2, 478, "pik_backup_sniper_07_", 6);
			Function_289(cParam0, bParam1, bParam2, 481, "pik_backup_sniper_08_", 6);
			Function_289(cParam0, bParam1, bParam2, 484, "pik_backup_sniper_09_", 6);
			break;
	}
	return;
}

void Function_289(int iParam0, char* cParam1, bool bParam2, bool bParam3, char* cParam4, int iParam5) //Position: 0x9D0E / 40206
{
	char* cVar0[32];
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	struct<5> Var15;
	
	strcpy(&cVar0, cParam4, 32);
	stradd(&cVar0, cParam1, 32);
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam2, &vVar9);
	Function_291(bParam2);
	Var15 = { StackVal, StackVal, Function_291(bParam2) };
	vVar9.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam2, &Var18);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar9, &vVar12, &Var15))
	{
		vVar12 = { StackVal, StackVal, vVar9 };
	}
	bVar8 = CREATE_ACTOR_IN_LAYOUT(Local_106, &cVar0, bParam3, vVar12, 0.0f, 0.0f, 0.0f);
	Function_246(bVar8, iParam5);
	SET_ACTOR_UPDATE_PRIORITY(bVar8, false);
	Function_290(bVar8, iParam0);
}

void Function_290(bool bParam0, bool bParam1) //Position: 0x9D80 / 40320
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_270(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

vector3 Function_291(bool bParam0) //Position: 0x9DA3 / 40355
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_292(char* cParam0, bool bParam1, bool bParam2) //Position: 0x9DB4 / 40372
{
	iLocal_405 = Function_280();
	switch (iLocal_405)
	{
		case 0x00000003:
			Function_289(cParam0, bParam1, bParam2, 483, "pik_backup_dyn_01_", 8);
			Function_289(cParam0, bParam1, bParam2, 484, "pik_backup_dyn_02_", 7);
			Function_289(cParam0, bParam1, bParam2, 478, "pik_backup_dyn_03_", 8);
			Function_289(cParam0, bParam1, bParam2, 484, "pik_backup_dyn_04_", 7);
		
		case 0x00000002:
			Function_289(cParam0, bParam1, bParam2, 481, "pik_backup_dyn_05_", 3);
			Function_289(cParam0, bParam1, bParam2, 482, "pik_backup_dyn_06_", 3);
		
		case 0x00000001:
			Function_289(cParam0, bParam1, bParam2, 478, "pik_backup_dyn_07_", 4);
			Function_289(cParam0, bParam1, bParam2, 481, "pik_backup_dyn_08_", 3);
			Function_289(cParam0, bParam1, bParam2, 484, "pik_backup_dyn_09_", 4);
			Function_289(cParam0, bParam1, bParam2, 477, "pik_backup_dyn_010_", 3);
			Function_289(cParam0, bParam1, bParam2, 477, "pik_backup_dyn_011_", 4);
			Function_289(cParam0, bParam1, bParam2, 477, "pik_backup_dyn_012_", 5);
			break;
	}
	return;
}

void Function_293(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x9F7A / 40826
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
				if (!Function_176(StackVal, StackVal, *uParam1[bVar06]))
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, uParam1[bVar06], bParam2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, uParam1[bVar06], 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar2, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
				else
				{
					GET_POSITION(bVar2, &uVar3);
					Var6.f_4 = GET_HEADING(bVar2);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar2, &uVar3, 3212836864);
				}
				TASK_PRIORITY_SET(bVar2, bParam3);
			}
		}
		bVar0++;
	}
}

void Function_294() //Position: 0xA032 / 41010
{
	Function_292(4, "A", Local_106.f_268);
	Function_288(6, "A", Local_106.f_260);
	return;
}

void Function_295(int iParam0, float fParam1) //Position: 0xA052 / 41042
{
	if (!Function_64(iParam0))
	{
		Function_242(iParam0, fParam1);
	}
	return;
}

int Function_296(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0xA068 / 41064
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

var Function_297() //Position: 0xA29C / 41628
{
	return "XPBonus";
}

void Function_298(bool bParam0, struct<2> Param1, var uParam3) //Position: 0xA2AC / 41644
{
	bool bVar0;
	
	if (Function_322(Param1))
	{
		bVar0 = Function_300(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_299(), bVar0);
	}
}

var Function_299() //Position: 0xA2D2 / 41682
{
	return "PackedWeapon";
}

var Function_300(struct<5> Param0) //Position: 0xA2E7 / 41703
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_301())) || SHIFT_LEFT(bParam2, Function_301() + 8));
}

bool Function_301() //Position: 0xA305 / 41733
{
	return Function_302(39);
}

int Function_302(bool bParam0) //Position: 0xA310 / 41744
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

void Function_303(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xA33E / 41790
{
	Function_314(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_308(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_307(), Function_306(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_305(), Function_304(iParam13, iParam14));
}

var Function_304(var uParam0, bool bParam1) //Position: 0xA38F / 41871
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_305() //Position: 0xA39F / 41887
{
	return "PackedGrass";
}

var Function_306(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA3B3 / 41907
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

var Function_307() //Position: 0xA3D8 / 41944
{
	return "PackedMetadata";
}

void Function_308(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xA3EF / 41967
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

vector3 Function_309() //Position: 0xA515 / 42261
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_310() //Position: 0xA526 / 42278
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_311() //Position: 0xA537 / 42295
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_312(var uParam0, int iParam1) //Position: 0xA548 / 42312
{
	*iParam1 = Function_313(uParam0, Function_301(), 0);
	iParam1->f_4 = Function_313(uParam0, Function_301() + 8, Function_301());
	return;
}

var Function_313(var uParam0, int iParam1, bool bParam2) //Position: 0xA56B / 42347
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_191((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_314(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xA58A / 42378
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

var Function_315() //Position: 0xA68E / 42638
{
	return "MPItemGiver";
}

struct<32> Function_316(bool bParam0) //Position: 0xA6A2 / 42658
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

struct<32> Function_317(char* cParam0, char* cParam1, char* cParam2) //Position: 0xA70C / 42764
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_318() //Position: 0xA72B / 42795
{
	return "PBox_";
}

var Function_319() //Position: 0xA739 / 42809
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_320() //Position: 0xA75F / 42847
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_321() //Position: 0xA787 / 42887
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_322(int iParam0) //Position: 0xA7AD / 42925
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_323(bool bParam0) //Position: 0xA7BF / 42943
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_324() //Position: 0xA7CF / 42959
{
	return "ID";
}

bool Function_325(bool bParam0, int iParam1) //Position: 0xA7DA / 42970
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_72((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_326())
			{
				return 0;
			}
			return !Function_72((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_72((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_326() //Position: 0xA82F / 43055
{
	return Function_37(Global_79962, 1024);
}

vector3 Function_327(bool bParam0) //Position: 0xA83F / 43071
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

vector3 Function_328(bool bParam0) //Position: 0xA866 / 43110
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

var Function_329() //Position: 0xA88D / 43149
{
	return "Type";
}

var Function_330() //Position: 0xA89A / 43162
{
	return "PickupsSet";
}

var Function_331() //Position: 0xA8AD / 43181
{
	return "PickupFlagsSet";
}

void Function_332() //Position: 0xA8C4 / 43204
{
	bLocal_98 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_one_wall_guards"));
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_one_floor_guards"));
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_two_Camp_One"));
	bLocal_103 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_two_Camp_Two"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_two_reinforcements"));
	Function_333(bLocal_100, Local_106.f_188, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_100, 0);
	bLocal_105 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_three_reinforce"));
	Function_333(bLocal_105, Local_106.f_188, 2.0f, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_105, 0);
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_2_Camp_1_Snipers"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_102, 0);
	bLocal_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_stage_2_Camp_2_Snipers"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_104, 0);
	Function_265(bLocal_101);
	Function_265(bLocal_103);
	Function_264(bLocal_101, Local_106.f_220, 10, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_101, 0);
	Function_264(bLocal_103, Local_106.f_224, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_103, 0);
	return;
}

void Function_333(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0xAA6F / 43631
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

void Function_334(bool bParam0, int iParam1, bool bParam2) //Position: 0xAAB0 / 43696
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

void Function_335(var uParam0, bool bParam1) //Position: 0xAAFA / 43770
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
		Function_224(uParam0, 1);
	}
	Function_39(256);
	Function_97(64);
	Function_69(0);
	return;
}

void Function_336(var uParam0) //Position: 0xAB6B / 43883
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_337() //Position: 0xAB79 / 43897
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
	
	Function_339(4, 1);
	uVar0 = uVar0;
	Local_106 = CREATE_LAYOUT("PikesBasinMP_layout");
	Local_106.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0", 2, -1115,387f, 105,8984f, 2420,911f, 0.0f, -133,4212f, 0.0f, 7,972938f, 3,357633f, 3,198586f);
	Local_106.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_basin_floor", 2, -1189,616f, 78,36932f, 2372,259f, 0.0f, 93,66437f, 0.0f, 76,24952f, 13,17369f, 80,13142f);
	Local_106.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_106, "vset_basin_walls_set");
	(*&Local_106 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_106, "nv_wall_01", 2, -1133,52f, 89,00108f, 2358,665f, 0.0f, 5,355344f, 0.0f, 27,96685f, 22,34155f, 77,44712f);
	ADD_TO_VOLUME_SET(Local_106.f_212, (*&Local_106 + 192)[0]);
	(*&Local_106 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_106, "nv_wall_02", 2, -1208,486f, 90,93515f, 2338,701f, 0.0f, 96,47578f, 0.0f, 24,86395f, 15,75636f, 130,3822f);
	ADD_TO_VOLUME_SET(Local_106.f_212, (*&Local_106 + 192)[1]);
	(*&Local_106 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_106, "nv_wall_03", 2, -1161,052f, 85,62198f, 2409,267f, 0.0f, 96,47578f, 0.0f, 19,46241f, 12,92826f, 43,62427f);
	ADD_TO_VOLUME_SET(Local_106.f_212, (*&Local_106 + 192)[2]);
	(*&Local_106 + 192)[3] = CREATE_VOLUME_IN_LAYOUT(Local_106, "nv_wall_04", 2, -1224,413f, 82,00768f, 2402,886f, 0.0f, 73,9457f, 0.0f, 12,89139f, 12,92826f, 37,10566f);
	ADD_TO_VOLUME_SET(Local_106.f_212, (*&Local_106 + 192)[3]);
	Local_106.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Rush_Entrance", 2, -1128,817f, 99,09205f, 2368,532f, 0.0f, -86,52528f, 0.0f, 20,60681f, 3,735385f, 10,45654f);
	Local_106.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Camp_One_Defend", 2, -1243,249f, 76,82948f, 2524,373f, 0.0f, -130,0666f, 0.0f, 36,83055f, 4,846051f, 23,2483f);
	Local_106.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Camp_Two_Defend", 2, -1292,302f, 80,47179f, 2204,523f, 0.0f, -130,0666f, 0.0f, 49,82747f, 6,058887f, 33,13203f);
	Local_106.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Camp_One_Use", 2, -1236,304f, 76,82948f, 2530,214f, 0.0f, -130,0666f, 0.0f, 7,959419f, 3,767244f, 4,168901f);
	Local_106.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Camp_Two_Use", 2, -1305,832f, 79,21188f, 2202,142f, 0.0f, -130,0666f, 0.0f, 6,329386f, 3,664712f, 3,743597f);
	Local_106.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Camp_Three_Use", 2, -1186,658f, 75,95692f, 2367,829f, 0.0f, -170,2645f, 0.0f, 6,620446f, 3,657635f, 3,911022f);
	Local_106.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Player_Spawn_Center_Trigger", 2, -1271,8f, 78,38062f, 2386,274f, 0.0f, -69,46291f, 0.0f, 85,19039f, 23,83149f, 39,17297f);
	Local_106.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Player_Spawn_Camp_One_Trigger", 2, -1270,803f, 83,3888f, 2490,9f, 0.0f, 29,99704f, 0.0f, 161,7996f, 33,80659f, 6,571191f);
	Local_106.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Player_Spawn_Camp_Two_Trigger", 2, -1258,405f, 80,83054f, 2252,312f, 0.0f, -183,889f, 0.0f, 178,7703f, 50,31342f, 10,31246f);
	Local_106.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Advance_Stage_Two", 2, -1283,628f, 78,38062f, 2360,906f, 0.0f, -86,63741f, 0.0f, 439,2049f, 47,93006f, 147,3658f);
	Local_106.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_BackupSpawn_camp2", 2, -1329,242f, 103,1452f, 2217,658f, 0.0f, -72,12047f, 0.0f, 17,98435f, 9,56881f, 13,94344f);
	Local_106.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_BackupSpawn_camp1", 2, -1267,676f, 103,1452f, 2568,067f, 0.0f, -179,7262f, 0.0f, 124,7634f, 21,08289f, 26,42896f);
	Local_106.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_Aggro", 2, -1189,884f, 89,19054f, 2368,072f, 0.0f, 93,66437f, 0.0f, 97,06813f, 45,04298f, 141,2956f);
	Local_106.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_BackupSpawn_camp1_Alt", 2, -1395,399f, 68,85619f, 2446,558f, 0.0f, -228,4407f, 0.0f, 16,23655f, 11,64954f, 14,60355f);
	Local_106.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_BackupSpawn_camp2_Alt", 2, -1256,111f, 87,88096f, 2120,53f, -14,74797f, -217,5229f, 0.0f, 9,642184f, 5,929856f, 18,99721f);
	Local_106.f_276 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_106, 8, 0);
	*(&Local_106 + 280[06]) = { -1209,719f, 75,25533f, 2358,206f };
	*(&Local_106 + 280[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Weapon_pickup", -1209,719f, 75,25533f, 2358,206f, 0.0f, 0.0f, 0.0f);
	Function_338(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_106.f_276);
	*(&Local_106 + 280[16]) = { -1190,067f, 75,29413f, 2378,721f };
	*(&Local_106 + 280[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Ammo_pickup", -1190,067f, 75,29413f, 2378,721f, 0.0f, 0.0f, 0.0f);
	Function_338(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_106.f_276);
	*(&Local_106 + 280[26]) = { -1180,055f, 76,29803f, 2348,818f };
	*(&Local_106 + 280[26] + 12) = { 0.0f, -320,7008f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Ammo_pickup1", -1180,055f, 76,29803f, 2348,818f, 0.0f, -320,7008f, 0.0f);
	Function_338(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_106.f_276);
	*(&Local_106 + 280[36]) = { -1248,167f, 75,29409f, 2522,76f };
	*(&Local_106 + 280[36] + 12) = { 0.0f, -214,851f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Ammo_pickup2", -1248,167f, 75,29409f, 2522,76f, 0.0f, -214,851f, 0.0f);
	Function_338(bVar4, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_106.f_276);
	*(&Local_106 + 280[46]) = { -1486,382f, 77,30194f, 2278,353f };
	*(&Local_106 + 280[46] + 12) = { 0.0f, -226,453f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Ammo_pickup3", -1486,382f, 77,30194f, 2278,353f, 0.0f, -226,453f, 0.0f);
	Function_338(bVar5, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_106.f_276);
	*(&Local_106 + 404) = { -1236,926f, 75,29413f, 2531,514f };
	*(&Local_106 + 404 + 12) = { 0.0f, -316,0946f, 0.0f };
	Local_106.f_428 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Explosion_flag1", -1236,926f, 75,29413f, 2531,514f, 0.0f, -316,0946f, 0.0f);
	*(&Local_106 + 432) = { -1306,005f, 79,20266f, 2201,967f };
	*(&Local_106 + 432 + 12) = { 0.0f, -495,4662f, 0.0f };
	Local_106.f_456 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Explosion_flag2", -1306,005f, 79,20266f, 2201,967f, 0.0f, -495,4662f, 0.0f);
	*(&Local_106 + 460) = { -1188.0f, 75,29413f, 2368.0f };
	*(&Local_106 + 460 + 12) = { 0.0f, -171,4956f, 0.0f };
	Local_106.f_484 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Explosion_flag3", -1188.0f, 75,29413f, 2368.0f, 0.0f, -171,4956f, 0.0f);
	Local_106.f_488 = CREATE_OBJECTSET_IN_LAYOUT("Sniper_CampOne_FlagsSet", Local_106, 8, 0);
	*(&Local_106 + 492[06]) = { -1224,269f, 93,28201f, 2534,207f };
	*(&Local_106 + 492[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn1", -1224,269f, 93,28201f, 2534,207f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_106.f_488);
	*(&Local_106 + 492[16]) = { -1248,401f, 92,01046f, 2539,816f };
	*(&Local_106 + 492[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn2", -1248,401f, 92,01046f, 2539,816f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_106.f_488);
	*(&Local_106 + 492[26]) = { -1237,604f, 92,07484f, 2542,884f };
	*(&Local_106 + 492[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn3", -1237,604f, 92,07484f, 2542,884f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_106.f_488);
	*(&Local_106 + 492[36]) = { -1227,339f, 93,23016f, 2540,436f };
	*(&Local_106 + 492[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn4", -1227,339f, 93,23016f, 2540,436f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_106.f_488);
	*(&Local_106 + 492[46]) = { -1254,943f, 91,77608f, 2539,148f };
	*(&Local_106 + 492[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn5", -1254,943f, 91,77608f, 2539,148f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_106.f_488);
	*(&Local_106 + 492[56]) = { -1219,801f, 93,61041f, 2521,696f };
	*(&Local_106 + 492[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn6", -1219,801f, 93,61041f, 2521,696f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_106.f_488);
	*(&Local_106 + 492[66]) = { -1219,341f, 93,69101f, 2525,905f };
	*(&Local_106 + 492[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn7", -1219,341f, 93,69101f, 2525,905f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_106.f_488);
	*(&Local_106 + 492[76]) = { -1221,279f, 93,42234f, 2529,13f };
	*(&Local_106 + 492[76] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn8", -1221,279f, 93,42234f, 2529,13f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_106.f_488);
	*(&Local_106 + 492[86]) = { -1232,45f, 92,45745f, 2544,43f };
	*(&Local_106 + 492[86] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampOne_Spawn9", -1232,45f, 92,45745f, 2544,43f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_106.f_488);
	*(&Local_106 + 712) = { -1220,778f, 93,57048f, 2538,711f };
	*(&Local_106 + 712 + 12) = { 0.0f, -104,6658f, 0.0f };
	Local_106.f_736 = CREATE_POINT_IN_LAYOUT(Local_106, "f_CampOne_Sniper_Spawn", -1220,778f, 93,57048f, 2538,711f, 0.0f, -104,6658f, 0.0f);
	Local_106.f_740 = CREATE_OBJECTSET_IN_LAYOUT("Sniper_CampTwo_FlagsSet", Local_106, 8, 0);
	*(&Local_106 + 744[06]) = { -1317,303f, 98,23827f, 2214,705f };
	*(&Local_106 + 744[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn1", -1317,303f, 98,23827f, 2214,705f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_106.f_740);
	*(&Local_106 + 744[16]) = { -1316,756f, 99,98769f, 2202,807f };
	*(&Local_106 + 744[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn2", -1316,756f, 99,98769f, 2202,807f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_106.f_740);
	*(&Local_106 + 744[26]) = { -1315,021f, 101,1757f, 2193,683f };
	*(&Local_106 + 744[26] + 12) = { 0.0f, -116,4929f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn3", -1315,021f, 101,1757f, 2193,683f, 0.0f, -116,4929f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_106.f_740);
	*(&Local_106 + 744[36]) = { -1297,613f, 101,7786f, 2183,596f };
	*(&Local_106 + 744[36] + 12) = { 0.0f, -141,3746f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn4", -1297,613f, 101,7786f, 2183,596f, 0.0f, -141,3746f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_106.f_740);
	*(&Local_106 + 744[46]) = { -1308,992f, 98,55336f, 2224,211f };
	*(&Local_106 + 744[46] + 12) = { 0.0f, -61,40345f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn5", -1308,992f, 98,55336f, 2224,211f, 0.0f, -61,40345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_106.f_740);
	*(&Local_106 + 744[56]) = { -1307,497f, 101,4587f, 2190,733f };
	*(&Local_106 + 744[56] + 12) = { 0.0f, -152,0595f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn6", -1307,497f, 101,4587f, 2190,733f, 0.0f, -152,0595f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_106.f_740);
	*(&Local_106 + 744[66]) = { -1305,611f, 101,5393f, 2189,891f };
	*(&Local_106 + 744[66] + 12) = { 0.0f, -148,0793f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn7", -1305,611f, 101,5393f, 2189,891f, 0.0f, -148,0793f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_106.f_740);
	*(&Local_106 + 744[76]) = { -1315,752f, 100,6047f, 2198,197f };
	*(&Local_106 + 744[76] + 12) = { 0.0f, -94,80099f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn8", -1315,752f, 100,6047f, 2198,197f, 0.0f, -94,80099f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_106.f_740);
	*(&Local_106 + 744[86]) = { -1315,969f, 100,9411f, 2196,158f };
	*(&Local_106 + 744[86] + 12) = { 0.0f, -91,82941f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_106, "f_Sniper_CampTwo_Spawn9", -1315,969f, 100,9411f, 2196,158f, 0.0f, -91,82941f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_106.f_740);
	*(&Local_106 + 964) = { -1311,7f, 102,3227f, 2184,843f };
	*(&Local_106 + 964 + 12) = { 0.0f, -104,6658f, 0.0f };
	Local_106.f_988 = CREATE_POINT_IN_LAYOUT(Local_106, "f_CampTwo_Sniper_Spawn", -1311,7f, 102,3227f, 2184,843f, 0.0f, -104,6658f, 0.0f);
	*(&Local_106 + 992) = { -1260,673f, 83,38879f, 2460,24f };
	*(&Local_106 + 992 + 12) = { 0.0f, 120,1856f, 0.0f };
	*(&Local_106 + 1016) = { -1312,648f, 73,39733f, 2316.0f };
	*(&Local_106 + 1016 + 12) = { 0.0f, -16,0507f, 0.0f };
	*(&Local_106 + 1040) = { -1260f, 89,349f, 2344,605f };
	*(&Local_106 + 1040 + 12) = { 0.0f, 107,9238f, 0.0f };
	*(&Local_106 + 1064) = { -1115,236f, 105,1247f, 2420,744f };
	*(&Local_106 + 1064 + 12) = { 0.0f, -324,5412f, 0.0f };
	return;
}

void Function_338(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBDD7 / 48599
{
	DECOR_SET_INT(bParam0, Function_329(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_324(), bParam2);
	}
	return;
}

void Function_339(int iParam0, int iParam1) //Position: 0xBDFB / 48635
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

bool Function_340() //Position: 0xBE44 / 48708
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_347())
		{
			return 0;
		}
		if (!Function_341(&bLocal_406))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_341(bool bParam0) //Position: 0xBE67 / 48743
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_346();
	iVar1 = 0;
	if (!Function_82(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_345(bParam0[iVar03], 8);
		}
		else if (Function_344())
		{
			iVar1 = 1;
			Function_345(bParam0[iVar03], 8);
		}
		Function_345(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_82(bParam0[iVar03], 4))
		{
			if (!Function_82(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_82(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_82(bParam0[03], 8) || iVar1));
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
				Function_345(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_82(bParam0[iVar03], 4))
		{
			if (!Function_82(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_345(bParam0[iVar03], 2);
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
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_345(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_345(bParam0[iVar03], 2);
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
	Function_342();
	return 1;
}

void Function_342() //Position: 0xC1E3 / 49635
{
	if (!Function_343(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_343(int iParam0) //Position: 0xC223 / 49699
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_344() //Position: 0xC23F / 49727
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

void Function_345(var uParam0, int iParam1) //Position: 0xC26A / 49770
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_346() //Position: 0xC27B / 49787
{
	if (!Function_343(128))
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

bool Function_347() //Position: 0xC2BD / 49853
{
	Function_348(&Local_106 + 4, 477, 2, 1);
	Function_348(&Local_106 + 4, 479, 2, 1);
	Function_348(&Local_106 + 4, 478, 2, 1);
	Function_348(&Local_106 + 4, 480, 2, 1);
	Function_348(&Local_106 + 4, 482, 2, 1);
	Function_348(&Local_106 + 4, 481, 2, 1);
	Function_348(&Local_106 + 4, 483, 2, 1);
	Function_348(&Local_106 + 4, 485, 2, 1);
	Function_348(&Local_106 + 4, 1008, 2, 1);
	Function_348(&Local_106 + 4, 1009, 2, 1);
	Function_348(&Local_106 + 4, 1010, 2, 1);
	Function_348(&Local_106 + 4, 1011, 2, 1);
	Function_348(&Local_106 + 4, 484, 2, 1);
	if (Function_341(&Local_106 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_348(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC379 / 50041
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_82(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_345(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_345(uParam0[iVar03], 8);
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

void Function_349(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC449 / 50249
{
	Function_350(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_350(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xC460 / 50272
{
	if (!Function_323(iParam1))
	{
		return;
	}
	Function_351(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_351(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC483 / 50307
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

void Function_352(int iParam0, bool bParam1) //Position: 0xC4AD / 50349
{
	Function_356(iParam0);
	Function_356(iParam0 + 228);
	if (bParam1)
	{
		Function_353(iParam0);
	}
	return;
}

void Function_353(int iParam0) //Position: 0xC4C9 / 50377
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_354(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_354(var uParam0, int iParam1) //Position: 0xC4E9 / 50409
{
	Function_355(uParam0, iParam1, 0);
	return;
}

void Function_355(int iParam0, int iParam1, int iParam2) //Position: 0xC4F7 / 50423
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_356(int iParam0) //Position: 0xC508 / 50440
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_358(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_357(iParam0, 0.0f);
	return;
}

void Function_357(var uParam0, int iParam1) //Position: 0xC535 / 50485
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_358(var uParam0) //Position: 0xC541 / 50497
{
	Function_351(uParam0, 4294967295, 0, 1);
	return;
}

void Function_359() //Position: 0xC54F / 50511
{
	Function_348(&bLocal_406, 477, 2, 0);
	Function_348(&bLocal_406, 478, 2, 0);
	Function_348(&bLocal_406, 479, 2, 0);
	Function_348(&bLocal_406, 480, 2, 0);
	Function_348(&bLocal_406, 481, 2, 0);
	Function_348(&bLocal_406, 482, 2, 0);
	Function_348(&bLocal_406, 483, 2, 0);
	Function_348(&bLocal_406, 484, 2, 0);
	Function_348(&bLocal_406, 485, 2, 0);
	Function_360(&bLocal_406, "mp_rig_tnt", 1, 0);
	Function_360(&bLocal_406, "mp_action_areas", 10, 0);
	return;
}

var Function_360(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC5F3 / 50675
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_361(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_345(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_361(var uParam0, int iParam1, int iParam2) //Position: 0xC62B / 50731
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_82(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_345(uParam0[iVar03], 4);
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

bool Function_362(int iParam0) //Position: 0xC6EF / 50927
{
	switch (iLocal_97)
	{
		case 0x00000000:
			Function_369(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_50, 33);
			bLocal_39 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_40 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_39);
			EVENT_TRAP_STORE_EVENTS(bLocal_40, 1);
			Function_368();
			Function_417(&uLocal_44, 5.0f);
			iLocal_97 = 1;
			break;
		
		case 0x00000001:
			if (Function_367())
			{
				iLocal_97 = 2;
			}
			else if (Function_363(&uLocal_44))
			{
				Function_368();
				Function_373(&uLocal_44, 5.0f);
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

bool Function_363(int iParam0) //Position: 0xC79B / 51099
{
	if (Function_365(iParam0))
	{
		Function_364(iParam0);
		return 1;
	}
	return 0;
}

void Function_364(int iParam0) //Position: 0xC7B1 / 51121
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_365(int iParam0) //Position: 0xC7C5 / 51141
{
	if (Function_64(iParam0))
	{
		if (Function_366(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_366(float fParam0) //Position: 0xC7E0 / 51168
{
	return -Function_60(fParam0);
}

bool Function_367() //Position: 0xC7EC / 51180
{
	return iLocal_19;
}

void Function_368() //Position: 0xC7F4 / 51188
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_369(bool bParam0) //Position: 0xC820 / 51232
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 51307);
	return;
}

void Function_370(int iParam0) //Position: 0xC86B / 51307
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
	if (Function_110(&Var2))
	{
	}
	bVar8 = Function_101(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_109(&Var2, 1);
	Function_51(&Var2);
	return;
}

void Function_371(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4) //Position: 0xC96E / 51566
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_372(fParam4);
		if (0 == iVar0)
		{
			Function_66(uParam0, iParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_66(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_66(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_372(float fParam0) //Position: 0xC9B4 / 51636
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

void Function_373(var uParam0, float fParam1) //Position: 0xC9E8 / 51688
{
	Function_242(uParam0, -fParam1);
	return;
}

bool Function_374(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xC9F6 / 51702
{
	if (!Function_414())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_216(38) <= 10 && NET_GET_PLAYMODE() != 0)
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
		Function_404(bLocal_40, *uParam1, uParam2, 1);
		Function_403(uParam0);
	}
	if (StackVal >= bLocal_42)
	{
		bLocal_42 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_400(uParam0);
	}
	switch (iLocal_16)
	{
		case 0x00000000:
		case 0x00000003:
			Function_386(55012, 54692);
			break;
		
		case 0x00000002:
			Function_386(52213, 51899);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_375(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xCABB / 51899
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_378(bParam1, uParam2, uParam3);
		bVar0 = Function_213(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_376(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_213(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_213(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_213(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_127(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_376(bool bParam0, int iParam1, int iParam2) //Position: 0xCB5E / 52062
{
	var uVar0;
	
	return Function_377(bParam0, iParam1, &uVar0, iParam2);
}

int Function_377(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xCB6F / 52079
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

void Function_378(bool bParam0, int iParam1, char* cParam2) //Position: 0xCBD4 / 52180
{
	if (bParam0)
	{
		if (Function_119())
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

int Function_379() //Position: 0xCBF5 / 52213
{
	if (!Function_380(1))
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

bool Function_380(bool bParam0) //Position: 0xCCB1 / 52401
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_119() || Function_385(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_383(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_119())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_381(Function_119());
	return 1;
}

void Function_381(bool bParam0) //Position: 0xCD32 / 52530
{
	if (bParam0 || Function_36(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_36(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_36(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_36(1048576) || Function_36(4)) || Function_382(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_30(0x20000000, 0, 1);
	}
	return;
}

var Function_382(int iParam0, bool bParam1) //Position: 0xCDBB / 52667
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_383(var uParam0) //Position: 0xCDDB / 52699
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_384(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_384(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xCDEF / 52719
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

int Function_385(bool bParam0, bool bParam1) //Position: 0xCE34 / 52788
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

void Function_386(int iParam0, int iParam1) //Position: 0xCE68 / 52840
{
	Function_387(iParam0, iParam1, 54685);
	return;
}

void Function_387(var uParam0, var uParam1, int iParam2) //Position: 0xCE79 / 52857
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
	if (Function_119())
	{
		Function_135(!Function_36(16));
	}
	if (Function_36(16))
	{
		Function_389(&uParam0, &uParam1, &iParam2);
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
			Function_388();
		}
		Function_30(16384, 1, 1);
	}
	else if (!Function_36(32))
	{
		Function_388();
	}
	Function_30(32768, 0, 1);
	return;
}

void Function_388() //Position: 0xD012 / 53266
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

void Function_389(var uParam0, var uParam1, int iParam2) //Position: 0xD11B / 53531
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
			if (!Function_129(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_390(bVar1, 2048, 1))
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
				if (Function_376(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_376(bVar1, (4294966296 - bVar1), 1))
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

bool Function_390(bool bParam0, int iParam1, bool bParam2) //Position: 0xD293 / 53907
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_382(iParam1, bParam2);
	}
	if (!Function_129(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_391(iParam1), 64);
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

var Function_391(int iParam0) //Position: 0xD314 / 54036
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

int Function_392() //Position: 0xD59D / 54685
{
	return 1;
}

int Function_393(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xD5A4 / 54692
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_378(bParam1, iParam2, cParam3);
	iVar0 = Function_397(bParam0);
	if (iVar0 == Function_396())
	{
		iVar1 = ((CEIL(Function_394(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_394(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_376(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_390(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_394(int iParam0, bool bParam1) //Position: 0xD63C / 54844
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_395(iParam0);
	}
	if (!Function_129(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_395(int iParam0) //Position: 0xD6A5 / 54949
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_396() //Position: 0xD6B5 / 54965
{
	return Global_78480;
}

int Function_397(bool bParam0) //Position: 0xD6BF / 54975
{
	if (!Function_129(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_396();
	}
	return Global_76943[bParam096];
}

int Function_398() //Position: 0xD6E4 / 55012
{
	if (!Function_380(1))
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
	Function_399();
	return 1;
}

void Function_399() //Position: 0xD780 / 55168
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

void Function_400(int iParam0) //Position: 0xD7BD / 55229
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
		Function_402(&bLocal_18);
		iLocal_17 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_22)
	{
		if (iLocal_22[iVar1] >= 4294967295)
		{
			iLocal_22[iVar1] = 4294967295;
			Function_401(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_401(int iParam0) //Position: 0xD836 / 55350
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_402(int iParam0) //Position: 0xD861 / 55393
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

void Function_403(int iParam0) //Position: 0xD8A8 / 55464
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
							Function_96(bVar1);
							vVar3 = { StackVal, StackVal, Function_96(bVar1) };
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

int Function_404(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xD9E4 / 55780
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

int Function_405(bool bParam0) //Position: 0xDAC6 / 56006
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

void Function_406() //Position: 0xDB20 / 56096
{
	Function_407(4);
	return;
}

void Function_407(int iParam0) //Position: 0xDB2A / 56106
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

void Function_408(int iParam0) //Position: 0xDB5C / 56156
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_409() //Position: 0xDB6B / 56171
{
	bool bVar0;
	
	if (!iLocal_21)
	{
		bVar0 = Function_38();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				if (Function_411(bVar0, bLocal_18, 1, 0, 0, -1.0f))
				{
					Function_410();
					iLocal_21 = 1;
				}
			}
		}
	}
	return;
}

void Function_410() //Position: 0xDBA0 / 56224
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_411(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xDBB9 / 56249
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
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, iLocal_47);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_412(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
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

bool Function_412(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDC22 / 56354
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

int Function_413(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDD0F / 56591
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

bool Function_414() //Position: 0xDDBD / 56765
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

void Function_415(bool bParam0) //Position: 0xDDE0 / 56800
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (Function_416(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_18, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_18, bParam0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			bVar1 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
		}
		SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(bParam0), -1.0f);
		if (bVar0 != 1 || bVar0 != 2)
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_106.f_264);
		}
		Function_270(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
	}
	return;
}

bool Function_416(bool bParam0) //Position: 0xDE4A / 56906
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

void Function_417(var uParam0, int iParam1) //Position: 0xDE77 / 56951
{
	if (!Function_64(uParam0))
	{
		Function_373(uParam0, iParam1);
	}
	return;
}

bool Function_418(int iParam0) //Position: 0xDE8D / 56973
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
	Function_241(iParam0 + 16 + 8);
	Function_283(iParam0, 58037);
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
	Function_424(2);
	Function_423(1);
	iVar3 = 57409;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 57290);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 57251);
	return 1;
}

void Function_419(int iParam0) //Position: 0xDFA3 / 57251
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

void Function_420(int iParam0) //Position: 0xDFCA / 57290
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

void Function_421(int iParam0) //Position: 0xE041 / 57409
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
				Function_422(&bLocal_18, &iVar5);
			}
		}
	}
	return;
}

void Function_422(var uParam0, int iParam1) //Position: 0xE08E / 57486
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

void Function_423(int iParam0) //Position: 0xE0E3 / 57571
{
	Function_40(&Global_83864 + 1252, iParam0);
	return;
}

void Function_424(int iParam0) //Position: 0xE0F5 / 57589
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
	Function_163();
	Function_164();
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
	Function_426(0, 0);
	Function_425();
	return;
}

void Function_425() //Position: 0xE1B9 / 57785
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_426(bool bParam0, bool bParam1) //Position: 0xE1D2 / 57810
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_431(&Global_78480);
	Function_430(&Global_78480);
	uVar0 = Function_216(37);
	Function_428();
	if (!bParam0)
	{
		Function_210(37, uVar0);
	}
	Function_92(18264, 0);
	Function_427();
	return;
}

void Function_427() //Position: 0xE21E / 57886
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_428() //Position: 0xE23D / 57917
{
	Function_429(&Global_78480 + 220);
	return;
}

void Function_429(int iParam0) //Position: 0xE24C / 57932
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

void Function_430(int iParam0) //Position: 0xE26D / 57965
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

void Function_431(int iParam0) //Position: 0xE291 / 58001
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

void Function_432(var uParam0) //Position: 0xE2B5 / 58037
{
	uParam0 = uParam0;
	return;
}

bool Function_433(var uParam0, bool bParam1) //Position: 0xE2BF / 58047
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

int Function_434(bool bParam0) //Position: 0xE372 / 58226
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

