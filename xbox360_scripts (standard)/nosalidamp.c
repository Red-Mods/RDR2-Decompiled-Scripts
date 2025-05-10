//Decompiled with MagicRDR v1.0
//Function Count : 440
//Statics Count : 470
//Natives Count : 446
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
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	struct<469> Local_105 = { 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_296 = 0;
	bLocal_439 = true;
	Local_260 = Global_30685[1];
	if (!Function_423(&Local_260))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (!IS_EXITFLAG_SET() && Function_83())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	if (IS_LAYOUTREF_VALID(bLocal_468))
	{
		DESTROY_LAYOUT(bLocal_468);
	}
	if (IS_LAYOUTREF_VALID(bLocal_468))
	{
		DESTROY_LAYOUT(bLocal_468);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x98 / 152
{
	Function_79(&iLocal_288);
	Function_68(Local_105);
	Function_67();
	Function_65(&uLocal_449, 1, 0, 4294967295, 4294967295);
	Function_2(&Local_260);
	return;
}

void Function_2(int iParam0) //Position: 0xBC / 188
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

void Function_3(int iParam0) //Position: 0x193 / 403
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x1A5 / 421
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x1B1 / 433
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

void Function_6() //Position: 0x1D1 / 465
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x206 / 518
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

int Function_8(float fParam0, int iParam1) //Position: 0x2C0 / 704
{
	if (!Function_25())
	{
		Global_83822 = 1;
	}
	Function_9(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x2E1 / 737
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x2FD / 765
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x51D / 1309
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

var Function_12() //Position: 0xB4A / 2890
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB52 / 2898
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB63 / 2915
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

struct<32> Function_15(char* cParam0, char* cParam1) //Position: 0xC58 / 3160
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC71 / 3185
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xCD6 / 3286
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0xCE8 / 3304
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xCFA / 3322
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

int Function_20(int iParam0) //Position: 0xE2A / 3626
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE39 / 3641
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xE72 / 3698
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xEAF / 3759
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1049 / 4169
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

bool Function_25() //Position: 0x1263 / 4707
{
	if (Function_27())
	{
		return (Function_26() != 1 || Function_26() != 0);
	}
	return 0;
}

int Function_26() //Position: 0x127C / 4732
{
	return Global_79349.f_16;
}

bool Function_27() //Position: 0x1288 / 4744
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_28() //Position: 0x1291 / 4753
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

void Function_29() //Position: 0x12EB / 4843
{
	Function_30(1024, 0, 1);
	Function_30(1, 0, 0);
	return;
}

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x12FF / 4863
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

void Function_31(int iParam0, int iParam1) //Position: 0x1327 / 4903
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_32(int iParam0, int iParam1) //Position: 0x133A / 4922
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_33() //Position: 0x1349 / 4937
{
	if (Function_35())
	{
		Function_34();
	}
	Function_30(4096, 0, 1);
	return;
}

void Function_34() //Position: 0x1360 / 4960
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_35() //Position: 0x136F / 4975
{
	return (Function_36(4096) || Function_36(4));
}

bool Function_36(bool bParam0) //Position: 0x1380 / 4992
{
	return Function_37(Global_76905.f_132, bParam0);
}

bool Function_37(var uParam0, bool bParam1) //Position: 0x1391 / 5009
{
	return (uParam0 && bParam1) == 0;
}

var Function_38() //Position: 0x139E / 5022
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_39(int iParam0) //Position: 0x13B3 / 5043
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

void Function_40(var uParam0, int iParam1) //Position: 0x140C / 5132
{
	Function_32(uParam0, iParam1);
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1419 / 5145
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_42(int iParam0) //Position: 0x142E / 5166
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

bool Function_43(int iParam0) //Position: 0x14EB / 5355
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x1501 / 5377
{
	Function_45(&Global_79338, iParam0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1510 / 5392
{
	Function_31(uParam0, iParam1);
	return;
}

void Function_46(int iParam0) //Position: 0x151D / 5405
{
	Function_45(&Global_83864 + 1252, iParam0);
	return;
}

void Function_47(int iParam0) //Position: 0x152F / 5423
{
	Function_45(&Global_78617 + 52, iParam0);
	return;
}

void Function_48(int iParam0) //Position: 0x1540 / 5440
{
	Function_45(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_49() //Position: 0x1579 / 5497
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_50() //Position: 0x1590 / 5520
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

void Function_51(int iParam0) //Position: 0x15B2 / 5554
{
	Local_83 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_52() //Position: 0x15C0 / 5568
{
	Function_53();
	return;
}

void Function_53() //Position: 0x15C9 / 5577
{
	Function_54(4294967286);
	return;
}

void Function_54(bool bParam0) //Position: 0x15D5 / 5589
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

void Function_55(var uParam0, int iParam1) //Position: 0x1612 / 5650
{
	Local_50[iParam12] = *uParam0;
	return;
}

void Function_56(int iParam0) //Position: 0x1621 / 5665
{
	Local_48 = *iParam0;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x162C / 5676
{
	*uParam0 = iParam1;
	return;
}

void Function_58(int iParam0) //Position: 0x1637 / 5687
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_83 };
	return;
}

void Function_59(int iParam0) //Position: 0x1645 / 5701
{
	*iParam0 = Local_48;
	return;
}

float Function_60(int iParam0) //Position: 0x1650 / 5712
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

void Function_61() //Position: 0x1721 / 5921
{
	if (!Function_62())
	{
	}
	return;
}

bool Function_62() //Position: 0x172E / 5934
{
	return NET_IS_IN_SESSION();
}

bool Function_63(int iParam0) //Position: 0x1737 / 5943
{
	return Function_37(*iParam0, 2);
}

bool Function_64(int iParam0) //Position: 0x1744 / 5956
{
	return Function_37(*iParam0, 1);
}

void Function_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1751 / 5969
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_66(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_66(int iParam0) //Position: 0x1775 / 6005
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

void Function_67() //Position: 0x1CB2 / 7346
{
	Function_79(&Local_105 + 4);
	RELEASE_LAYOUT_REF(Local_105);
	return;
}

void Function_68(int iParam0) //Position: 0x1CC4 / 7364
{
	if (IS_ACTORSET_VALID(bLocal_18))
	{
		Function_78(bLocal_18);
	}
	Function_76(iParam0);
	Function_69(1);
	return;
}

void Function_69(bool bParam0) //Position: 0x1CE0 / 7392
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

void Function_70(bool bParam0, bool bParam1) //Position: 0x1D18 / 7448
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

bool Function_71(int iParam0) //Position: 0x1D65 / 7525
{
	return Function_72(Global_79337, iParam0);
}

bool Function_72(var uParam0, int iParam1) //Position: 0x1D74 / 7540
{
	return (uParam0 && iParam1) == 0;
}

int Function_73(bool bParam0, bool bParam1) //Position: 0x1D81 / 7553
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

void Function_74(int iParam0) //Position: 0x1DA5 / 7589
{
	Function_45(&Global_79337, iParam0);
	return;
}

void Function_75(int iParam0) //Position: 0x1DB4 / 7604
{
	Function_40(&Global_79337, iParam0);
	return;
}

void Function_76(bool bParam0) //Position: 0x1DC3 / 7619
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

void Function_77(bool bParam0) //Position: 0x1E62 / 7778
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

void Function_78(bool bParam0) //Position: 0x1E93 / 7827
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

void Function_79(int iParam0) //Position: 0x1EDE / 7902
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

void Function_80(var uParam0, int iParam1) //Position: 0x1F04 / 7940
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

void Function_81(var uParam0, int iParam1) //Position: 0x2032 / 8242
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_82(int iParam0, int iParam1) //Position: 0x204C / 8268
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_83() //Position: 0x2069 / 8297
{
	if (!Function_381(&Local_260, &Local_105, 53532, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_64(&iLocal_453))
		{
			if (Function_60(&iLocal_453) <= 0.0f)
			{
				if (StackVal == 3)
				{
					if ((Function_380(bLocal_18) - Function_379(bLocal_104)) < 4)
					{
						Function_377(&uLocal_449, 38, 38, 38, 10.0f);
					}
					else
					{
						Function_377(&uLocal_449, 38, 40, 38, 10.0f);
					}
				}
				else
				{
					Function_377(&uLocal_449, 38, 40, 38, 10.0f);
				}
				Function_376(&iLocal_453, 5.0f);
			}
		}
		else
		{
			Function_375(&iLocal_453, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_286();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_275();
			break;
		
		case 0x00000002:
			Function_264();
			break;
		
		case 0x00000003:
			Function_231();
			break;
		
		case 0x0000000B:
			Function_84();
			break;
	}
	return 1;
}

void Function_84() //Position: 0x2151 / 8529
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_227();
			Function_65(&uLocal_449, 1, 0, 4294967295, 4294967295);
			UI_SET_STRING_FORMAT("Generic_Dbuffer32_3", UI_GET_STRING("XP_NOS_Bonus"), I2STR(bLocal_458), 0, 0);
			Function_225((FLOOR(25.0f) * bLocal_458), "Generic_Dbuffer32_3", 0);
			Function_224(2, (FLOOR(25.0f) * bLocal_458));
			Function_222(bLocal_18);
			Function_219();
			Local_260.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_85(&Local_260);
			break;
	}
	return;
}

var Function_85(int iParam0) //Position: 0x21FE / 8702
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

void Function_86(var uParam0, bool bParam1, int iParam2) //Position: 0x26F7 / 9975
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

bool Function_87(var uParam0, int iParam1) //Position: 0x2802 / 10242
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_88(int iParam0) //Position: 0x281E / 10270
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

bool Function_89() //Position: 0x289D / 10397
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

void Function_90(var uParam0, int iParam1) //Position: 0x28FA / 10490
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x2911 / 10513
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_92(int iParam0, bool bParam1) //Position: 0x2920 / 10528
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

bool Function_93(int iParam0) //Position: 0x295B / 10587
{
	return Function_72(Global_78617.f_52, iParam0);
}

bool Function_94(vector3 vParam0) //Position: 0x296C / 10604
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

void Function_95(int iParam0) //Position: 0x29BD / 10685
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

vector3 Function_96(bool bParam0) //Position: 0x2A1B / 10779
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_97(int iParam0) //Position: 0x2A2C / 10796
{
	Function_40(&Global_78617 + 52, iParam0);
	return;
}

bool Function_98(bool bParam0, bool bParam1, float fParam2) //Position: 0x2A3D / 10813
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

bool Function_99(int iParam0) //Position: 0x2C90 / 11408
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

int Function_100(bool bParam0) //Position: 0x2CD3 / 11475
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

int Function_101(int iParam0) //Position: 0x2CFA / 11514
{
	return *iParam0;
}

void Function_102(var uParam0, int iParam1) //Position: 0x2D03 / 11523
{
	*uParam0 = Local_50[iParam12];
	return;
}

void Function_103(int iParam0) //Position: 0x2D12 / 11538
{
	Function_57(iParam0, 4294967286);
	return;
}

bool Function_104(bool bParam0) //Position: 0x2D20 / 11552
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_50, bParam0);
}

void Function_105(var uParam0, bool bParam1) //Position: 0x2D2D / 11565
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

bool Function_106(bool bParam0) //Position: 0x2D47 / 11591
{
	return Function_37(*bParam0, 2);
}

bool Function_107() //Position: 0x2D54 / 11604
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

bool Function_108(int iParam0, var uParam1, int iParam2) //Position: 0x2D72 / 11634
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

void Function_109(int iParam0, bool bParam1) //Position: 0x2DC3 / 11715
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

bool Function_110(int iParam0) //Position: 0x2DDD / 11741
{
	return Function_37(*iParam0, 1);
}

void Function_111(int iParam0) //Position: 0x2DEA / 11754
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

bool Function_112(int iParam0) //Position: 0x2EE7 / 12007
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

int Function_113(int iParam0) //Position: 0x3123 / 12579
{
	return StackVal;
}

bool Function_114(bool bParam0) //Position: 0x3131 / 12593
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_115() //Position: 0x3147 / 12615
{
	Function_118(8);
	Function_116(&Global_79298);
	return;
}

void Function_116(int iParam0) //Position: 0x3159 / 12633
{
	Function_117(iParam0, 0.0f);
	return;
}

void Function_117(int iParam0, float fParam1) //Position: 0x3165 / 12645
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_32(iParam0, 1);
	Function_31(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_118(int iParam0) //Position: 0x3186 / 12678
{
	Function_40(&Global_79338, iParam0);
	return;
}

bool Function_119() //Position: 0x3195 / 12693
{
	return Function_36(32768);
}

void Function_120(bool bParam0) //Position: 0x31A2 / 12706
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_47(64);
	Local_50[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_121(int iParam0, int iParam1, bool bParam2) //Position: 0x31CD / 12749
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

void Function_122() //Position: 0x327A / 12922
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_124();
	Function_123();
	iLocal_16 = 2;
	return;
}

void Function_123() //Position: 0x32B5 / 12981
{
	Function_30(1025, 1, 0);
	return;
}

void Function_124() //Position: 0x32C3 / 12995
{
	if (!Function_35())
	{
		Function_34();
	}
	Function_30(4096, 1, 1);
	return;
}

void Function_125(var uParam0, var uParam1) //Position: 0x32DB / 13019
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_126() //Position: 0x3300 / 13056
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

int Function_127(bool bParam0) //Position: 0x333F / 13119
{
	return Function_128(0, bParam0);
}

int Function_128(int iParam0, bool bParam1) //Position: 0x334B / 13131
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

bool Function_129(bool bParam0) //Position: 0x33B2 / 13234
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

int Function_130(int iParam0) //Position: 0x3453 / 13395
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_131(int iParam0) //Position: 0x3463 / 13411
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

void Function_132(bool bParam0, int iParam1) //Position: 0x3887 / 14471
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

struct<16> Function_133(var uParam0) //Position: 0x3AB4 / 15028
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

int Function_134() //Position: 0x3B25 / 15141
{
	return Function_216(12);
}

void Function_135(bool bParam0) //Position: 0x3B30 / 15152
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_30(16384, 0, 1);
	return;
}

void Function_136(bool bParam0, bool bParam1) //Position: 0x3B4A / 15178
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

float Function_137(bool bParam0, bool bParam1) //Position: 0x3BA7 / 15271
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_138(int iParam0) //Position: 0x3BC6 / 15302
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_139(bool bParam0) //Position: 0x3C24 / 15396
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_140() //Position: 0x3C38 / 15416
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_141(int iParam0) //Position: 0x3C47 / 15431
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

void Function_142(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3D3D / 15677
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

void Function_143(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3E01 / 15873
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_134();
	}
}

void Function_144(int iParam0) //Position: 0x3E42 / 15938
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

void Function_145(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3EAE / 16046
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

void Function_146(bool bParam0) //Position: 0x3FC0 / 16320
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

void Function_147() //Position: 0x4078 / 16504
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

void Function_148() //Position: 0x40AB / 16555
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

void Function_149() //Position: 0x41B1 / 16817
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

void Function_150() //Position: 0x41E4 / 16868
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

void Function_151() //Position: 0x4372 / 17266
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

void Function_152() //Position: 0x4526 / 17702
{
	Function_153(&Global_28260, 1, 0);
	return;
}

void Function_153(int iParam0, bool bParam1, var uParam2) //Position: 0x4534 / 17716
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

struct<8> Function_154() //Position: 0x4725 / 18213
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

int Function_155(int iParam0, bool bParam1, bool bParam2) //Position: 0x47C0 / 18368
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

int Function_156(bool bParam0) //Position: 0x4A5B / 19035
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_157() //Position: 0x4A9C / 19100
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

struct<8> Function_158() //Position: 0x4B25 / 19237
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

struct<8> Function_159() //Position: 0x4BBC / 19388
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

void Function_160() //Position: 0x4C3B / 19515
{
	Function_161(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_155(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_161(int iParam0, bool bParam1, int iParam2) //Position: 0x4C61 / 19553
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

void Function_162(var uParam0, var uParam1, bool bParam2) //Position: 0x4E6B / 20075
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

void Function_163() //Position: 0x4EB0 / 20144
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

void Function_164() //Position: 0x4EDA / 20186
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

void Function_165(bool bParam0) //Position: 0x4F23 / 20259
{
	Global_56092[*bParam0] = 0;
	Function_166(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_166(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4F3D / 20285
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

void Function_167(bool bParam0, bool bParam1) //Position: 0x4FEB / 20459
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

struct<16> Function_168(int iParam0) //Position: 0x5010 / 20496
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_169(int iParam0) //Position: 0x5044 / 20548
{
	return Global_50170[iParam022].f_24;
}

void Function_170(var uParam0, var uParam1, int iParam2) //Position: 0x5053 / 20563
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

void Function_171(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x51FC / 20988
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

void Function_172() //Position: 0x5262 / 21090
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

void Function_173(var uParam0, int iParam1) //Position: 0x528B / 21131
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

void Function_174(bool bParam0) //Position: 0x52CD / 21197
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

void Function_175() //Position: 0x531E / 21278
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

bool Function_176(vector3 vParam0) //Position: 0x53BF / 21439
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_177(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x53D7 / 21463
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

vector3 Function_178() //Position: 0x54BE / 21694
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_179(int iParam0) //Position: 0x54C7 / 21703
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_180(bool bParam0, bool bParam1) //Position: 0x54DD / 21725
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

float Function_181(vector3 vParam0, vector3 vParam3) //Position: 0x55A4 / 21924
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_182(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x55C1 / 21953
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

void Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5665 / 22117
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

struct<16> Function_184(int iParam0) //Position: 0x56D7 / 22231
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_185(int iParam0) //Position: 0x56F8 / 22264
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_186(int iParam0) //Position: 0x5719 / 22297
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_187() //Position: 0x573A / 22330
{
	return "CQueue_Count";
}

var Function_188() //Position: 0x574F / 22351
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_189(int iParam0) //Position: 0x577E / 22398
{
	Function_190(iParam0, 1);
	return;
}

void Function_190(int iParam0, bool bParam1) //Position: 0x578A / 22410
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

int Function_191(bool bParam0) //Position: 0x57E0 / 22496
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_192(int iParam0, int iParam1) //Position: 0x57EC / 22508
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

struct<16> Function_193(int iParam0) //Position: 0x586E / 22638
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_194(int iParam0) //Position: 0x588E / 22670
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_195(int iParam0) //Position: 0x58BF / 22719
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

void Function_196(bool bParam0, bool bParam1) //Position: 0x5A3D / 23101
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

var Function_197() //Position: 0x5B89 / 23433
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_198(var uParam0, bool bParam1, bool bParam2) //Position: 0x5BD6 / 23510
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_199(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x5BEE / 23534
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

void Function_200(int iParam0, int iParam1) //Position: 0x5C64 / 23652
{
	Function_31(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5C78 / 23672
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

void Function_202(int iParam0, int iParam1) //Position: 0x5D35 / 23861
{
	Function_32(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_203(int iParam0) //Position: 0x5D49 / 23881
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_204(int iParam0) //Position: 0x5D77 / 23927
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_205(int iParam0, bool bParam1) //Position: 0x5DA7 / 23975
{
	return Function_37(Global_50170[iParam022].f_32, bParam1);
}

bool Function_206() //Position: 0x5DBB / 23995
{
	return "MP_Unstoppable_Icon_128";
}

float Function_207(int iParam0) //Position: 0x5DDB / 24027
{
	return Global_50170[iParam022].f_12;
}

void Function_208(int iParam0, int iParam1) //Position: 0x5DEA / 24042
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0x5E0F / 24079
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_210(int iParam0, int iParam1) //Position: 0x5E38 / 24120
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_211(int iParam0) //Position: 0x5E52 / 24146
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

int Function_212(int iParam0) //Position: 0x5F33 / 24371
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

int Function_213(int iParam0, bool bParam1) //Position: 0x5F6F / 24431
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

bool Function_214(bool bParam0) //Position: 0x5FDD / 24541
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_129(bParam0);
}

struct<20> Function_215(int iParam0) //Position: 0x5FF3 / 24563
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

int Function_216(int iParam0) //Position: 0x6148 / 24904
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_217() //Position: 0x6161 / 24929
{
	return Function_130(0);
}

void Function_218(int iParam0) //Position: 0x616B / 24939
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

void Function_219() //Position: 0x6233 / 25139
{
	Function_221(bLocal_103);
	SQUAD_GOALS_CLEAR(bLocal_103);
	Function_220(bLocal_103);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_103, false, 1, 4294967295);
	TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
	return;
}

void Function_220(bool bParam0) //Position: 0x625E / 25182
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_221(bool bParam0) //Position: 0x62AB / 25259
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

void Function_222(bool bParam0) //Position: 0x62DD / 25309
{
	bool bVar0;
	
	Function_223(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_223(int iParam0) //Position: 0x6325 / 25381
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_224(int iParam0, int iParam1) //Position: 0x637E / 25470
{
	Function_209(iParam0, (Function_130(iParam0) + iParam1));
	return;
}

void Function_225(var uParam0, bool bParam1, int iParam2) //Position: 0x6391 / 25489
{
	Function_226(uParam0);
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

void Function_226(var uParam0) //Position: 0x63D4 / 25556
{
	Function_224(0, uParam0);
	return;
}

void Function_227() //Position: 0x63E0 / 25568
{
	Function_228();
	if (IS_VOLUME_VALID(Local_105.f_224))
	{
		DESTROY_VOLUME(Local_105.f_224);
	}
	if (!IS_VOLUME_VALID(Local_105.f_208))
	{
		Local_105.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_0_set");
		(*&Local_105 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_0", 2, -4672,083f, 7,614759f, 4033,99f, 0.0f, -149,9253f, 0.0f, 6,519532f, 5,229682f, 4,778091f);
		ADD_TO_VOLUME_SET(Local_105.f_208, (*&Local_105 + 192)[0]);
		(*&Local_105 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_1", 2, -4708,104f, 7,614759f, 4052,44f, 0.0f, -177,9577f, 0.0f, 6,519532f, 5,229682f, 4,778091f);
		ADD_TO_VOLUME_SET(Local_105.f_208, (*&Local_105 + 192)[1]);
		(*&Local_105 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_2", 2, -4650,949f, 3,253418f, 3994,83f, 0.0f, -132,7232f, 0.0f, 6,519532f, 5,229682f, 4,778091f);
		ADD_TO_VOLUME_SET(Local_105.f_208, (*&Local_105 + 192)[2]);
	}
	return;
}

void Function_228() //Position: 0x6518 / 25880
{
	Function_229();
	if (IS_VOLUME_VALID(Local_105.f_208))
	{
		DESTROY_VOLUME(Local_105.f_208);
	}
	return;
}

void Function_229() //Position: 0x6532 / 25906
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_440)
	{
		Function_230(iLocal_440[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_230(bool bParam0, bool bParam1) //Position: 0x655A / 25946
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

void Function_231() //Position: 0x65AB / 26027
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_263(&Local_260, 0);
			Function_262("NOS_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			Function_228();
			Function_375(&iLocal_450, 15.0f);
			Local_260.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_234();
			}
			if (Function_60(&iLocal_450) <= 0.0f)
			{
				Function_232();
				Function_376(&iLocal_450, 15.0f);
			}
			if ((&Local_260 + 16)->f_48 < 3 && Function_380(bLocal_18) >= 0)
			{
				if (Function_98(11, 1, 0x3f800000))
				{
					Local_260.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_260.f_8 = 0;
			Local_260.f_4 = 11;
			break;
	}
	return;
}

void Function_232() //Position: 0x666A / 26218
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bLocal_103))
	{
		Function_233(SQUAD_GET_ACTOR_BY_INDEX(bLocal_103, bVar0), Global_78576);
		bVar0++;
	}
	return;
}

void Function_233(bool bParam0, bool bParam1) //Position: 0x6694 / 26260
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6[20];
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = GET_ACTORSET_SIZE(bParam1);
		if (iVar0 >= 20)
		{
			iVar0 = 20;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			iVar6[iVar2] = iVar2;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar4 = RAND_INT_RANGE(false, (iVar0 - 1));
			iVar5 = iVar6[bVar4];
			iVar6[bVar4] = iVar6[iVar2];
			iVar6[iVar2] = iVar5;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar3 = iVar6[iVar2];
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam1, bVar3);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					TASK_KILL_CHAR(bParam0, bVar1);
					MEMORY_CONSIDER_AS_ENEMY(bParam0, bVar1);
				}
			}
			iVar2++;
		}
	}
	return;
}

void Function_234() //Position: 0x6756 / 26454
{
	if (Function_380(bLocal_18) < 3)
	{
		(&Local_260 + 16)->f_48++;
		if ((&Local_260 + 16)->f_48 <= 3)
		{
			Function_235(I2STR((&Local_260 + 16)->f_48));
		}
	}
	return;
}

void Function_235(int iParam0) //Position: 0x678D / 26509
{
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	Function_261(5, iParam0);
	Function_237(6, iParam0);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_236(bLocal_102, bLocal_18, 0, 0);
	Function_236(bLocal_103, bLocal_18, 0, 0);
	return;
}

void Function_236(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x67BC / 26556
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

void Function_237(char* cParam0, bool bParam1) //Position: 0x683E / 26686
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	iLocal_287 = Function_260();
	vVar0 = { StackVal, StackVal, *(&Local_105 + 312) };
	fVar3 = 50.0f;
	fVar4 = 75.0f;
	switch (iLocal_287)
	{
		case 0x00000003:
			Function_238(StackVal, StackVal, cParam0, bParam1, vVar0, 1045, "NOS_backup_dog_01_", fVar3, fVar4, 3);
			Function_238(StackVal, StackVal, cParam0, bParam1, vVar0, 1045, "NOS_backup_dog_03_", fVar3, fVar4, 4);
		
		case 0x00000002:
			Function_238(StackVal, StackVal, cParam0, bParam1, vVar0, 1045, "NOS_backup_dog_04_", fVar3, fVar4, 3);
			Function_238(StackVal, StackVal, cParam0, bParam1, vVar0, 1045, "NOS_backup_dog_05_", fVar3, fVar4, 4);
		
		case 0x00000001:
			Function_238(StackVal, StackVal, cParam0, bParam1, vVar0, 1045, "NOS_backup_dog_06_", fVar3, fVar4, 5);
			Function_238(StackVal, StackVal, cParam0, bParam1, vVar0, 1045, "NOS_backup_dog_07_", fVar3, fVar4, 4);
			break;
	}
	return;
}

var Function_238(int iParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8, int iParam9) //Position: 0x6976 / 26998
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	bVar8 = Function_259(StackVal, StackVal, vParam2, &Local_105, uParam5, &cVar0, fParam7, fParam8);
	Function_245(bVar8, iParam9);
	Function_239(bVar8, iParam0);
	return bVar8;
}

void Function_239(bool bParam0, bool bParam1) //Position: 0x69AD / 27053
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_240(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

void Function_240(bool bParam0, bool bParam1) //Position: 0x69D0 / 27088
{
	switch (bParam1)
	{
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_98);
			break;
		
		case 0x00000005:
			SQUAD_JOIN(bParam0, bLocal_102);
			break;
		
		case 0x00000006:
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				SET_BLIP_SCALE(GET_BLIP_ON_ACTOR(bParam0), 0,75f);
			}
			SQUAD_JOIN(bParam0, bLocal_103);
			MEMORY_PREFER_MELEE(bParam0, 1);
			MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
			Function_244(bParam0, 10, "COMMON_NULL");
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_99);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_101);
			break;
		
		case 0x00000004:
			SQUAD_JOIN(bParam0, bLocal_100);
			break;
		
		case 0x00000007:
			if (IS_ACTOR_IN_ACTORSET(bLocal_18, bParam0))
			{
				REMOVE_ACTORSET_MEMBER(bLocal_18, bParam0);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
				}
			}
			SQUAD_JOIN(bParam0, bLocal_104);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_98);
			break;
	}
	if (bParam1 == 7 && bParam1 == 6)
	{
		Function_243(bParam0);
		Function_241(bParam0, 1);
		SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
		AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
		SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
		Function_245(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	}
	return;
}

void Function_241(bool bParam0, bool bParam1) //Position: 0x6AF8 / 27384
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
	fVar1 = Function_242(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_242(int iParam0) //Position: 0x6B3C / 27452
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

void Function_243(bool bParam0) //Position: 0x6BCF / 27599
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

int Function_244(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6C8E / 27790
{
	if (!DECOR_SET_INT(bParam0, "nKillBonus", bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam2))
	{
		if (!DECOR_SET_STRING(bParam0, "KillBonusClass", bParam2))
		{
			return 0;
		}
	}
	return 1;
}

void Function_245(bool bParam0, int iParam1) //Position: 0x6CD4 / 27860
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_258(bParam0);
			break;
		
		case 0x00000001:
			Function_257(bParam0);
			break;
		
		case 0x00000002:
			Function_256(bParam0);
			break;
		
		case 0x00000005:
			Function_255(bParam0);
			break;
		
		case 0x00000004:
			Function_254(bParam0);
			break;
		
		case 0x00000003:
			Function_253(bParam0);
			break;
		
		case 0x00000006:
			Function_252(bParam0);
			break;
		
		case 0x00000007:
			Function_251(bParam0);
			break;
		
		case 0x00000008:
			Function_250(bParam0);
			break;
		
		case 0x00000009:
			Function_248(bParam0);
			break;
		
		default:
			Function_246(bParam0);
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

void Function_246(bool bParam0) //Position: 0x6DA0 / 28064
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
	Function_247(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_247(var uParam0, bool bParam1) //Position: 0x7104 / 28932
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

void Function_248(bool bParam0) //Position: 0x7126 / 28966
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_249(bool bParam0, int iParam1) //Position: 0x72C3 / 29379
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

void Function_250(bool bParam0) //Position: 0x72F6 / 29430
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_251(bool bParam0) //Position: 0x749F / 29855
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_252(bool bParam0) //Position: 0x7630 / 30256
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_253(bool bParam0) //Position: 0x7762 / 30562
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_254(bool bParam0) //Position: 0x78EA / 30954
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_255(bool bParam0) //Position: 0x7A44 / 31300
{
	Function_246(bParam0);
	Function_249(bParam0, 1);
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

void Function_256(bool bParam0) //Position: 0x7B82 / 31618
{
	Function_246(bParam0);
	Function_249(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_257(bool bParam0) //Position: 0x7BA5 / 31653
{
	Function_246(bParam0);
	Function_249(bParam0, 0);
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

void Function_258(bool bParam0) //Position: 0x7D0F / 32015
{
	Function_246(bParam0);
	Function_249(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

var Function_259(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x7D4A / 32074
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
		if (!Function_176(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

int Function_260() //Position: 0x7DD6 / 32214
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

void Function_261(char* cParam0, int iParam1) //Position: 0x7E05 / 32261
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	iLocal_287 = Function_260();
	vVar0 = { StackVal, StackVal, *(&Local_105 + 312) };
	fVar3 = 50.0f;
	fVar4 = 75.0f;
	switch (iLocal_287)
	{
		case 0x00000003:
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 531, "NOS_backup_dyn_01_", fVar3, fVar4, 3);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 521, "NOS_backup_dyn_02_", fVar3, fVar4, 3);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 529, "NOS_backup_dyn_03_", fVar3, fVar4, 4);
		
		case 0x00000002:
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 521, "NOS_backup_dyn_04_", fVar3, fVar4, 3);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 523, "NOS_backup_dyn_05_", fVar3, fVar4, 4);
		
		case 0x00000001:
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 516, "NOS_backup_dyn_06_", fVar3, fVar4, 5);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 521, "NOS_backup_dyn_07_", fVar3, fVar4, 4);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 517, "NOS_backup_dyn_08_", fVar3, fVar4, 5);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 522, "NOS_backup_dyn_09_", fVar3, fVar4, 4);
			Function_238(StackVal, StackVal, cParam0, iParam1, vVar0, 518, "NOS_backup_dyn_010_", fVar3, fVar4, 5);
			break;
	}
	return;
}

void Function_262(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x7FE2 / 32738
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

void Function_263(var uParam0, bool bParam1) //Position: 0x8035 / 32821
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

void Function_264() //Position: 0x806C / 32876
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_263(&Local_260, 0);
			Function_274(&Local_105 + 168, bLocal_439);
			Function_274(&Local_105 + 172, bLocal_439);
			Function_274(&Local_105 + 176, bLocal_439);
			Function_262("NOS_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			Local_260.f_8 = 6;
			Function_229();
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_266();
			}
			if (!iLocal_296)
			{
				if (SQUAD_GET_SIZE(bLocal_99) < 0 && SQUAD_GET_SIZE(bLocal_101) < 0)
				{
					Function_265(bLocal_99, Local_105.f_468, 0, 2, -1.0f, 1, 0);
					Function_265(bLocal_101, Local_105.f_340, 0, 2, -1.0f, 1, 0);
					iLocal_296 = 1;
				}
			}
			if ((Function_380(bLocal_18) - Function_379(bLocal_104)) >= 0 && (&Local_260 + 16)->f_36)
			{
				if (Function_98(3, 1, 0x3f800000))
				{
					Local_260.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_260.f_8 = 0;
			Local_260.f_4 = 3;
			break;
	}
	return;
}

void Function_265(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x8162 / 33122
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) >= GET_OBJECTSET_SIZE(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam1))
	{
		bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		if (IS_OBJECT_VALID(bVar5))
		{
			DECOR_REMOVE_ALL(bVar5);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam1))
	{
		bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		if (IS_OBJECT_VALID(bVar5))
		{
			GET_OBJECT_POSITION(bVar5, &vVar7);
			bVar4 = FIND_NEAREST_COVER_LOCATION(&vVar7, 2,5f, GET_OBJECT_HEADING(bVar5), 90.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar4))
			{
				DECOR_SET_INT(bVar5, "cover", bVar4);
				bVar2 = false;
				bVar1 = false;
				while (bVar1 <= bVar0)
				{
					if (!bVar2)
					{
						bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(((bVar0 - bVar1) - 1), bParam1);
						if (IS_OBJECT_VALID(bVar6))
						{
							if (DECOR_CHECK_EXIST(bVar6, "cover"))
							{
								if (bVar4 == DECOR_GET_INT(bVar6, "cover"))
								{
									bVar2 = true;
									GET_OBJECT_POSITION(bVar6, &vVar10);
									GET_COVER_LOCATION_BASE_POSITION(bVar4, &vVar13);
									if (VDIST(vVar7, vVar13) > VDIST(vVar10, vVar13))
									{
										DECOR_REMOVE(bVar6, "cover");
									}
									else
									{
										DECOR_REMOVE(bVar5, "cover");
									}
								}
							}
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (IS_ACTOR_ALIVE(bVar3))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
				if (IS_OBJECT_VALID(bVar5))
				{
					GET_POSITION(bVar3, &vVar7);
					GET_OBJECT_POSITION(bVar5, &vVar10);
					bVar4 = "";
					if (DECOR_CHECK_EXIST(bVar5, "cover"))
					{
						bVar4 = DECOR_GET_INT(bVar5, "cover");
					}
					bVar1 = TASK_SEQUENCE_OPEN();
					if (iParam6 && bVar0 == 0)
					{
						TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,1f, 0,35f), 0, 0);
					}
					if (IS_COVER_LOCATION_VALID(bVar4))
					{
						if (bParam3 != 2)
						{
							if (VDIST(vVar7, vVar10) < 5.0f)
							{
								TASK_GO_TO_COORD_NONSTOP(false, &vVar10, bParam3, 3212836864);
							}
						}
						if (bParam5)
						{
							TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar4, bParam4, 1086324736);
						}
						else
						{
							TASK_HIDE_AT_COVER(false, bVar4, bParam4, 6f, 1);
						}
					}
					else if (bParam5)
					{
						TASK_GO_NEAR_COORD(false, &vVar10, 5.0f, bParam3);
						TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vVar10, GET_OBJECT_HEADING(bVar5), bParam4);
					}
					else
					{
						TASK_GO_TO_COORD(false, &vVar10, bParam3);
						UNK_0x44986367(&vVar13, GET_OBJECT_HEADING(bVar5));
						vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar13, vVar10, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal) };
						TASK_FACE_COORD(false, &vVar10, 0);
						TASK_CROUCH(false, bParam4);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_CLEAR(bVar3);
					TASK_PRIORITY_SET(bVar3, bParam2);
					TASK_SEQUENCE_PERFORM(bVar3, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
			}
		}
		bVar0++;
	}
}

void Function_266() //Position: 0x840E / 33806
{
	if (!iLocal_460)
	{
		if (Function_64(&iLocal_464))
		{
			if (Function_60(&iLocal_464) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_260 + 16)->f_64)
				{
					case 0x00000000:
						Function_273();
						Function_236(Local_105.f_168, bLocal_18, 0, 0);
						Function_274(&Local_105 + 168, bLocal_439);
						break;
					
					case 0x00000001:
						Function_272();
						Function_236(Local_105.f_172, bLocal_18, 0, 0);
						Function_274(&Local_105 + 172, bLocal_439);
						break;
					
					case 0x00000002:
						Function_271();
						Function_236(Local_105.f_176, bLocal_18, 0, 0);
						Function_274(&Local_105 + 176, bLocal_439);
						break;
				}
				(&Local_260 + 16)->f_64++;
				Function_270(&iLocal_461);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_267(&iLocal_464);
		}
		if ((&Local_260 + 16)->f_64 >= 3)
		{
			(&Local_260 + 16)->f_36 = 1;
			iLocal_460 = 1;
		}
	}
	return;
}

void Function_267(int iParam0) //Position: 0x84E3 / 34019
{
	if (!Function_64(iParam0))
	{
		Function_268(iParam0, 0.0f);
	}
	return;
}

void Function_268(var uParam0, float fParam1) //Position: 0x84F8 / 34040
{
	Function_61();
	Function_269(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_269(var uParam0, int iParam1) //Position: 0x850C / 34060
{
	uParam0->f_4 = iParam1;
	Function_32(uParam0, 1);
	Function_31(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_270(int iParam0) //Position: 0x8529 / 34089
{
	Function_268(iParam0, 0.0f);
	return;
}

void Function_271() //Position: 0x8535 / 34101
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "NOS_Side_House"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_s_01", 532, -4757,208f, 3,157851f, 4026,81f, 0.0f, -66,22168f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	Function_240(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_s_02", 517, -4756,524f, 3,157851f, 4028,363f, 0.0f, -66,22168f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	Function_240(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_s_03", 525, -4751,527f, 3,157851f, 4024,591f, 0.0f, -66,22168f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	Function_240(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_s_04", 523, -4751,04f, 3,157851f, 4026,891f, 0.0f, -66,22168f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	Function_240(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_272() //Position: 0x8728 / 34600
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_172 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "NOS_Dock_House"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_b_01", 522, -4731,159f, 3,157715f, 3956,659f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_172);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	Function_240(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_b_03", 529, -4733,311f, 3,157851f, 3958,256f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_172);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	Function_240(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_b_04", 529, -4733,632f, 3,155385f, 3963,31f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_172);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	Function_240(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_b_05", 532, -4734,952f, 3,191278f, 3956,747f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_172);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	Function_240(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_273() //Position: 0x891B / 35099
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_168 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "NOS_Center_House"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_h_01", 516, -4708,558f, 3,173866f, 3966,851f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_168);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_240(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_h_02", 517, -4710,091f, 3,16765f, 3966,777f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_168);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_240(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_h_04", 520, -4709,469f, 3,16765f, 3965,309f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_168);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_240(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_h_05", 522, -4709,511f, 3,16765f, 3964,039f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_168);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_240(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_274(var uParam0, bool bParam1) //Position: 0x8B10 / 35600
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
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

void Function_275() //Position: 0x8BAC / 35756
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_263(&Local_260, 0);
			Function_274(&Local_105 + 164, bLocal_439);
			Function_274(&Local_105 + 180, bLocal_439);
			Function_262("NOS_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0);
			Local_260.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_283();
			}
			Function_278();
			if ((GET_CURRENT_GAME_TIME() - fLocal_448) < 1.0f)
			{
				if (Function_277(bLocal_104, Function_38()))
				{
					fLocal_448 = GET_CURRENT_GAME_TIME();
					Function_276();
				}
			}
			if ((Function_380(bLocal_18) - Function_379(bLocal_104)) >= 0 && (&Local_260 + 16)->f_32)
			{
				if (Function_98(2, 1, 0x3f800000))
				{
					Local_260.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_260.f_8 = 0;
			Local_260.f_4 = 2;
			break;
	}
	return;
}

void Function_276() //Position: 0x8C7D / 35965
{
	bLocal_458++;
	return;
}

bool Function_277(bool bParam0, bool bParam1) //Position: 0x8C8B / 35979
{
	bool bVar0;
	bool bVar1;
	void fVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	fVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (fVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					if (!IS_ACTOR_ALIVE(bVar3))
					{
						bVar0 = true;
					}
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_278() //Position: 0x8CFD / 36093
{
	if (!iLocal_295)
	{
		if (((&Local_260 + 16)->f_24 || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_456)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_457))
		{
			Function_279();
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_456);
			EVENT_TRAP_CLEAR_EVENTS(bLocal_456);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_457);
			EVENT_TRAP_CLEAR_EVENTS(bLocal_457);
			iLocal_295 = 1;
		}
	}
	return;
}

void Function_279() //Position: 0x8D41 / 36161
{
	Function_221(bLocal_98);
	Function_221(bLocal_104);
	Function_282(bLocal_98, Local_105.f_184, 0, 4294967295);
	SQUAD_SET_FACTION(bLocal_98, 19);
	Function_281(bLocal_98, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_104, false, 1, 4294967295);
	TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
	Function_280(bLocal_104);
	return;
}

void Function_280(bool bParam0) //Position: 0x8D85 / 36229
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
			Function_77(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_281(bool bParam0, int iParam1) //Position: 0x8DC1 / 36289
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

var Function_282(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x8E02 / 36354
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return bVar0;
	}
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, iParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
	return bVar0;
}

void Function_283() //Position: 0x8E3D / 36413
{
	if (!iLocal_459)
	{
		if (Function_64(&iLocal_461))
		{
			if (Function_60(&iLocal_461) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_260 + 16)->f_60)
				{
					case 0x00000000:
						Function_285();
						Function_274(&Local_105 + 164, bLocal_439);
						Function_236(Local_105.f_164, bLocal_18, 0, 0);
						break;
					
					case 0x00000001:
						Function_284();
						Function_274(&Local_105 + 180, bLocal_439);
						Function_236(bLocal_104, bLocal_18, 0, 0);
						break;
				}
				(&Local_260 + 16)->f_60++;
				Function_270(&iLocal_461);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_267(&iLocal_461);
		}
		if ((&Local_260 + 16)->f_60 >= 2)
		{
			(&Local_260 + 16)->f_32 = 1;
			iLocal_459 = 1;
		}
	}
	return;
}

void Function_284() //Position: 0x8EEF / 36591
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_180 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "NOS_Civilians"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_civ_01", 237, -4722,28f, 3,036527f, 3982,28f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	Function_240(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_civ_02", 269, -4725,689f, 2,96356f, 3948.0f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	Function_245(bVar0, 5);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	Function_240(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_civ_03", 312, -4710,04f, 3,036527f, 3972.0f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	Function_245(bVar0, 5);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	Function_240(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_civ_04", 253, -4702,597f, 3,036527f, 3981,574f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	Function_245(bVar0, 5);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	Function_240(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_civ_05", 253, -4707,29f, 3,036527f, 3950,062f, 0.0f, 41,86003f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	Function_245(bVar0, 5);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	Function_240(bVar0, 7);
	return;
}

void Function_285() //Position: 0x90E6 / 37094
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_164 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "NOS_Initial_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_01", 516, -4716,027f, 3,046631f, 3977,841f, 0.0f, -227,6557f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_02", 517, -4694,245f, 3,046631f, 3974,039f, 0.0f, -161,4397f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_03", 520, -4726,902f, 3,240615f, 3980,877f, 0.0f, 143,2989f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_04", 517, -4706,202f, 3,046631f, 3941,104f, 0.0f, -81,80867f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_07", 522, -4691,294f, 3,046631f, 3964,2f, 0.0f, -67,82178f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_08", 525, -4713,125f, 3,046631f, 3989,169f, 0.0f, -179,5386f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_09", 529, -4702,883f, 3,036527f, 3950,644f, 0.0f, 82,48409f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_010", 531, -4732.0f, 3,036526f, 3984.0f, 0.0f, 12,30394f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "nos_guard_012", 520, -4714,537f, 3,036527f, 3942,537f, 0.0f, -50,34467f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_164);
	Function_245(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_240(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_286() //Position: 0x9560 / 38240
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_372();
			Function_370();
			Function_363(&uLocal_297, 0);
			Function_360(&uLocal_297, 1, 20, 3, 1);
			Local_260.f_100 = "MEX_SONG_02";
			Local_260.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_353() && Function_344(&Local_260))
			{
				Local_260.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_341();
			if (IS_STRING_VALID(_GET_PARAM_VALUE("NetNosFakePlayer", "Yes")))
			{
				Function_337();
			}
			Function_335(&Local_260, Local_105);
			Function_299(Local_105, &uLocal_297, 1, 1);
			Function_297(&Local_260, 40309);
			Function_296();
			Function_293();
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_456 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_105);
			EVENT_TRAP_ON_VOLUME(bLocal_456, Local_105.f_184);
			bLocal_457 = CREATE_EVENT_TRAP("nHorseTrap", 87, Local_105);
			EVENT_TRAP_ON_VOLUME(bLocal_457, Local_105.f_184);
			Local_260.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_291())
			{
				Local_260.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_287(&Local_260);
			break;
	}
	return;
}

void Function_287(var uParam0) //Position: 0x96AA / 38570
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_289(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_289(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_288();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_288() //Position: 0x978C / 38796
{
	bLocal_91 = true;
	return;
}

void Function_289(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x9795 / 38805
{
	if (iParam0 == Global_30668[2])
	{
		Function_290(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_290(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_290(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_290(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_290(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_290(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_290(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_290(7);
	}
}

void Function_290(int iParam0) //Position: 0x982A / 38954
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

bool Function_291() //Position: 0x98BF / 39103
{
	if (!IS_LAYOUTREF_VALID(bLocal_468))
	{
		bLocal_468 = CREATE_LAYOUT(Function_12());
	}
	if (!IS_OBJECT_VALID(bLocal_469))
	{
		bLocal_469 = CREATE_WORLD_SECTOR(bLocal_468, "Nosalida");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_469))
	{
		Function_292(bLocal_468, "pot", Local_105.f_228);
		Function_292(bLocal_468, "bottle", Local_105.f_228);
		Function_292(bLocal_468, "blanket", Local_105.f_228);
		Function_292(bLocal_468, "tarp", Local_105.f_228);
		Function_292(bLocal_468, "trap", Local_105.f_228);
		Function_292(bLocal_468, "break", Local_105.f_228);
		Function_292(bLocal_468, "crate13", Local_105.f_228);
		DESTROY_LAYOUT(bLocal_468);
		return 1;
	}
	return 0;
}

void Function_292(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9987 / 39303
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

void Function_293() //Position: 0x99E0 / 39392
{
	int iVar0;
	
	iLocal_440[0] = Function_295(Local_260, "Nosalida", "centerHouse01props01", 1);
	iLocal_440[1] = Function_295(Local_260, "Nosalida", "centerHouse01props01", 2);
	iLocal_440[2] = Function_295(Local_260, "Nosalida", "mainStructure01props01", 2);
	iLocal_440[3] = Function_295(Local_260, "Nosalida", "mainStructure01props01", 3);
	iLocal_440[4] = Function_295(Local_260, "Nosalida", "mainStructure01props01", 1);
	iLocal_440[5] = Function_295(Local_260, "Nosalida", "waterFrontHouse01props01", 1);
	iLocal_440[6] = Function_295(Local_260, "Nosalida", "waterFrontHouse01props01", 2);
	iVar0 = 0;
	while (iVar0 <= iLocal_440)
	{
		Function_294(iLocal_440[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_294(bool bParam0, bool bParam1) //Position: 0x9B5C / 39772
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

var Function_295(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x9BB0 / 39856
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

void Function_296() //Position: 0x9C4C / 40012
{
	bLocal_98 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_stage_one_guards"));
	bLocal_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "nSQUAD_Civ"));
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_stage_two_guards"));
	Function_282(bLocal_102, Local_105.f_184, 0, 4294967295);
	bLocal_103 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_stage_two_guardDogs"));
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_103, false, 1, 4294967295);
	Function_233(0, Global_78576);
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_stage_two_C_House"));
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_stage_two_D_House"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_stage_two_S_House"));
	Function_282(bLocal_100, Local_105.f_184, 0, 4294967295);
	return;
}

void Function_297(var uParam0, int iParam1) //Position: 0x9D69 / 40297
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_298(int iParam0) //Position: 0x9D75 / 40309
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("Generic_Dbuffer32_3"), iParam0);
	itos(&cVar0, Function_130(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

int Function_299(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x9DB9 / 40377
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_334()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_333()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_333(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_332(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_331(bVar14);
				vVar7 = { StackVal, StackVal, Function_331(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
				Function_330(bVar14);
				vVar10 = { StackVal, StackVal, Function_330(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_328(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_327());
							if (Function_326(bVar5))
							{
								if (Function_325((*iParam1 + 228)[bVar52]))
								{
									Function_306(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_301(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_306(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_300(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_306(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_300() //Position: 0x9FED / 40941
{
	return "XPBonus";
}

void Function_301(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x9FFD / 40957
{
	bool bVar0;
	
	if (Function_325(Param1))
	{
		bVar0 = Function_303(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_302(), bVar0);
	}
}

var Function_302() //Position: 0xA023 / 40995
{
	return "PackedWeapon";
}

var Function_303(struct<5> Param0) //Position: 0xA038 / 41016
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_304())) || SHIFT_LEFT(bParam2, Function_304() + 8));
}

bool Function_304() //Position: 0xA056 / 41046
{
	return Function_305(39);
}

int Function_305(bool bParam0) //Position: 0xA061 / 41057
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

void Function_306(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xA08F / 41103
{
	Function_317(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_311(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_310(), Function_309(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_308(), Function_307(iParam13, iParam14));
}

var Function_307(var uParam0, bool bParam1) //Position: 0xA0E0 / 41184
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_308() //Position: 0xA0F0 / 41200
{
	return "PackedGrass";
}

var Function_309(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA104 / 41220
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

var Function_310() //Position: 0xA129 / 41257
{
	return "PackedMetadata";
}

void Function_311(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xA140 / 41280
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_302(), &uVar5))
				{
					Function_315(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_314();
				vVar0 = { StackVal, StackVal, Function_314() };
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
				Function_313();
				vVar0 = { StackVal, StackVal, Function_313() };
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
				Function_312();
				vVar0 = { StackVal, StackVal, Function_312() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_312() //Position: 0xA266 / 41574
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_313() //Position: 0xA277 / 41591
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_314() //Position: 0xA288 / 41608
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_315(var uParam0, int iParam1) //Position: 0xA299 / 41625
{
	*iParam1 = Function_316(uParam0, Function_304(), 0);
	iParam1->f_4 = Function_316(uParam0, Function_304() + 8, Function_304());
	return;
}

var Function_316(var uParam0, int iParam1, bool bParam2) //Position: 0xA2BC / 41660
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_191((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_317(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xA2DB / 41691
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_324();
			Function_313();
			vVar1 = { StackVal, StackVal, Function_313() };
			break;
		
		case 0x00000001:
			bVar0 = Function_323();
			Function_314();
			vVar1 = { StackVal, StackVal, Function_314() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_322();
			Function_312();
			vVar1 = { StackVal, StackVal, Function_312() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_321(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_319(Function_321()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_318(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_318() //Position: 0xA3DF / 41951
{
	return "MPItemGiver";
}

struct<32> Function_319(bool bParam0) //Position: 0xA3F3 / 41971
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320("0", &cVar8, ""), 4);
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

struct<32> Function_320(char* cParam0, char* cParam1, char* cParam2) //Position: 0xA45D / 42077
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_321() //Position: 0xA47C / 42108
{
	return "PBox_";
}

var Function_322() //Position: 0xA48A / 42122
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_323() //Position: 0xA4B0 / 42160
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_324() //Position: 0xA4D8 / 42200
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_325(int iParam0) //Position: 0xA4FE / 42238
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_326(bool bParam0) //Position: 0xA510 / 42256
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_327() //Position: 0xA520 / 42272
{
	return "ID";
}

bool Function_328(bool bParam0, int iParam1) //Position: 0xA52B / 42283
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_72((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_329())
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

bool Function_329() //Position: 0xA580 / 42368
{
	return Function_37(Global_79962, 1024);
}

vector3 Function_330(bool bParam0) //Position: 0xA590 / 42384
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

vector3 Function_331(bool bParam0) //Position: 0xA5B7 / 42423
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

var Function_332() //Position: 0xA5DE / 42462
{
	return "Type";
}

var Function_333() //Position: 0xA5EB / 42475
{
	return "PickupsSet";
}

var Function_334() //Position: 0xA5FE / 42494
{
	return "PickupFlagsSet";
}

void Function_335(var uParam0, bool bParam1) //Position: 0xA615 / 42517
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
		Function_263(uParam0, 1);
	}
	Function_39(256);
	Function_97(64);
	Function_69(0);
	return;
}

void Function_336(var uParam0) //Position: 0xA686 / 42630
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_337() //Position: 0xA694 / 42644
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	
	iLocal_467 = CREATE_LAYOUT("TestLayout");
	Function_340(&vVar1);
	SET_ACTOR_INVULNERABILITY(Function_38(), true);
	SET_ACTOR_FACTION(Function_38(), 2);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		bVar4 = Function_338(StackVal, StackVal, iLocal_467, Function_12(), 378, Function_12(), 976, vVar1, 0.0f, 0.0f, 0.0f);
		SNAP_OBJECT_TO_GROUND(bVar4, 100.0f, false, 1092616192);
		TASK_FOLLOW_ACTOR(bVar4, Function_38());
		TASK_PRIORITY_SET(bVar4, 3);
		SET_ACTOR_FACTION(bVar4, 20);
		SET_ACTOR_INVULNERABILITY(bVar4, true);
		vVar1.x = (vVar1.x + 5.0f);
		iVar0++;
	}
	return;
}

var Function_338(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0xA721 / 42785
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_339(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_339(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_339(int iParam0) //Position: 0xA846 / 43078
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

int Function_340(bool bParam0) //Position: 0xA85D / 43101
{
	bool bVar0;
	
	bVar0 = Function_38();
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, bParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(bParam0, 0))
	{
		return 0;
	}
	return 1;
}

void Function_341() //Position: 0xA887 / 43143
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
	
	Function_343(4, 1);
	uVar0 = uVar0;
	Local_105 = CREATE_LAYOUT("NosalidaMP_layout");
	Local_105.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_105, "v_nos_total", 2, -4721,133f, 0,5717764f, 3953,599f, 0.0f, -4,884439f, 0.0f, 65,51109f, 11,82368f, 102,1693f);
	Local_105.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_105, "v_Side_house", 2, -4754,23f, 4,636025f, 4026,294f, 0.0f, -76,0853f, 0.0f, 4,428981f, 3,831543f, 8,523279f);
	Local_105.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_0_set");
	(*&Local_105 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_0", 2, -4672,083f, 7,614759f, 4033,99f, 0.0f, -149,9253f, 0.0f, 6,519532f, 5,229682f, 4,778091f);
	ADD_TO_VOLUME_SET(Local_105.f_208, (*&Local_105 + 192)[0]);
	(*&Local_105 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_1", 2, -4708,104f, 7,614759f, 4052,44f, 0.0f, -177,9577f, 0.0f, 6,519532f, 5,229682f, 4,778091f);
	ADD_TO_VOLUME_SET(Local_105.f_208, (*&Local_105 + 192)[1]);
	(*&Local_105 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_2", 2, -4650,949f, 3,253418f, 3994,83f, 0.0f, -132,7232f, 0.0f, 6,519532f, 5,229682f, 4,778091f);
	ADD_TO_VOLUME_SET(Local_105.f_208, (*&Local_105 + 192)[2]);
	Local_105.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_1_set");
	(*&Local_105 + 212)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_1_sub_0", 2, -4733,432f, 3,771025f, 3955,065f, 0.0f, -640,5844f, 0.0f, 2,176465f, 2,476871f, 5,185035f);
	ADD_TO_VOLUME_SET(Local_105.f_224, (*&Local_105 + 212)[0]);
	(*&Local_105 + 212)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_1_sub_1", 2, -4708,677f, 3,648481f, 3963,688f, 0,3898832f, -728,4413f, 0,009913344f, 3,175622f, 2,003271f, 2,874054f);
	ADD_TO_VOLUME_SET(Local_105.f_224, (*&Local_105 + 212)[1]);
	Local_105.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_105, "v_ClearVol", 2, -4729,02f, 0,5728605f, 3972,191f, 0.0f, -4,884439f, 0.0f, 97,36871f, 31,04478f, 158,6314f);
	Local_105.f_232 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_105, 8, 0);
	*(&Local_105 + 236[06]) = { -4732,255f, 3,161633f, 3953,233f };
	*(&Local_105 + 236[06] + 12) = { 0.0f, -374,395f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_105, "f_Weapon_pickup", -4732,255f, 3,161633f, 3953,233f, 0.0f, -374,395f, 0.0f);
	Function_342(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_105.f_232);
	*(&Local_105 + 236[16]) = { -4715,087f, 3,036527f, 3940.0f };
	*(&Local_105 + 236[16] + 12) = { 0.0f, -316,0148f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_105, "f_Ammo_pickup", -4715,087f, 3,036527f, 3940.0f, 0.0f, -316,0148f, 0.0f);
	Function_342(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_105.f_232);
	*(&Local_105 + 236[26]) = { -4721,191f, 3,036527f, 3986,5f };
	*(&Local_105 + 236[26] + 12) = { 0.0f, -93,80778f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_105, "f_Ammo_pickup1", -4721,191f, 3,036527f, 3986,5f, 0.0f, -93,80778f, 0.0f);
	Function_342(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_105.f_232);
	*(&Local_105 + 312) = { -4703,707f, 3,036526f, 3964.0f };
	*(&Local_105 + 312 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_105.f_336 = CREATE_POINT_IN_LAYOUT(Local_105, "f_NOS_Center", -4703,707f, 3,036526f, 3964.0f, 0.0f, 0.0f, 0.0f);
	Local_105.f_340 = CREATE_OBJECTSET_IN_LAYOUT("Dock_House_FlagsSet", Local_105, 8, 0);
	*(&Local_105 + 344[06]) = { -4736,899f, 3,298f, 3952,156f };
	*(&Local_105 + 344[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_105, "f_d_Cover1", -4736,899f, 3,298f, 3952,156f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_105.f_340);
	*(&Local_105 + 344[16]) = { -4738,005f, 3,298f, 3964,058f };
	*(&Local_105 + 344[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_105, "f_d_Cover2", -4738,005f, 3,298f, 3964,058f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_105.f_340);
	*(&Local_105 + 344[26]) = { -4732,432f, 3,16f, 3958,421f };
	*(&Local_105 + 344[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_105, "f_d_Cover3", -4732,432f, 3,16f, 3958,421f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_105.f_340);
	*(&Local_105 + 344[36]) = { -4737,245f, 3,037f, 3970,109f };
	*(&Local_105 + 344[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_105, "f_d_Cover4", -4737,245f, 3,037f, 3970,109f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_105.f_340);
	*(&Local_105 + 344[46]) = { -4737,245f, 3,037f, 3973,591f };
	*(&Local_105 + 344[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_105, "f_d_Cover5", -4737,245f, 3,037f, 3973,591f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_105.f_340);
	Local_105.f_468 = CREATE_OBJECTSET_IN_LAYOUT("Center_House_FlagsSet", Local_105, 8, 0);
	*(&Local_105 + 472[06]) = { -4707,637f, 3,158f, 3969,013f };
	*(&Local_105 + 472[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_105, "f_c_Cover1", -4707,637f, 3,158f, 3969,013f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_105.f_468);
	*(&Local_105 + 472[16]) = { -4707,036f, 3,158f, 3967,254f };
	*(&Local_105 + 472[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_105, "f_c_Cover2", -4707,036f, 3,158f, 3967,254f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_105.f_468);
	*(&Local_105 + 472[26]) = { -4716,671f, 3,037f, 3938,701f };
	*(&Local_105 + 472[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_105, "f_c_Cover3", -4716,671f, 3,037f, 3938,701f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_105.f_468);
	*(&Local_105 + 472[36]) = { -4696,152f, 3,037f, 3978,855f };
	*(&Local_105 + 472[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_105, "f_c_Cover4", -4696,152f, 3,037f, 3978,855f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_105.f_468);
	*(&Local_105 + 472[46]) = { -4719,532f, 2,886f, 3961,663f };
	*(&Local_105 + 472[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_105, "f_c_Cover5", -4719,532f, 2,886f, 3961,663f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_105.f_468);
	*(&Local_105 + 596) = { -4672,02f, 5,019634f, 4032,018f };
	*(&Local_105 + 596 + 12) = { 0.0f, 13,6429f, 0.0f };
	return;
}

void Function_342(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB0D2 / 45266
{
	DECOR_SET_INT(bParam0, Function_332(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_327(), bParam2);
	}
	return;
}

void Function_343(int iParam0, int iParam1) //Position: 0xB0F6 / 45302
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

int Function_344(int iParam0) //Position: 0xB13F / 45375
{
	switch (iLocal_97)
	{
		case 0x00000000:
			Function_351(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_50, 33);
			bLocal_39 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_40 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_39);
			EVENT_TRAP_STORE_EVENTS(bLocal_40, 1);
			Function_350();
			Function_375(&iLocal_44, 5.0f);
			iLocal_97 = 1;
			break;
		
		case 0x00000001:
			if (Function_349())
			{
				iLocal_97 = 2;
			}
			else if (Function_345(&iLocal_44))
			{
				Function_350();
				Function_376(&iLocal_44, 5.0f);
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

bool Function_345(int iParam0) //Position: 0xB1EB / 45547
{
	if (Function_347(iParam0))
	{
		Function_346(iParam0);
		return 1;
	}
	return 0;
}

void Function_346(int iParam0) //Position: 0xB201 / 45569
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_347(int iParam0) //Position: 0xB215 / 45589
{
	if (Function_64(iParam0))
	{
		if (Function_348(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_348(int iParam0) //Position: 0xB230 / 45616
{
	return -Function_60(iParam0);
}

bool Function_349() //Position: 0xB23C / 45628
{
	return iLocal_19;
}

void Function_350() //Position: 0xB244 / 45636
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_351(bool bParam0) //Position: 0xB270 / 45680
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 45755);
	return;
}

void Function_352(int iParam0) //Position: 0xB2BB / 45755
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

int Function_353() //Position: 0xB3BE / 46014
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_354(&Local_105 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_26010].f_32))
		{
			return 0;
		}
		if (!Function_354(&iLocal_288))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_354(int iParam0) //Position: 0xB3F8 / 46072
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_359();
	iVar1 = 0;
	if (!Function_82(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_358(iParam0[iVar03], 8);
		}
		else if (Function_357())
		{
			iVar1 = 1;
			Function_358(iParam0[iVar03], 8);
		}
		Function_358(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_82(iParam0[iVar03], 4))
		{
			if (!Function_82(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_82(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_82(iParam0[03], 8) || iVar1));
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
				Function_358(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_82(iParam0[iVar03], 4))
		{
			if (!Function_82(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_358(iParam0[iVar03], 2);
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
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_358(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_358(iParam0[iVar03], 2);
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
	Function_355();
	return 1;
}

void Function_355() //Position: 0xB773 / 46963
{
	if (!Function_356(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_356(int iParam0) //Position: 0xB7B3 / 47027
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_357() //Position: 0xB7CF / 47055
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

void Function_358(var uParam0, int iParam1) //Position: 0xB7FA / 47098
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_359() //Position: 0xB80B / 47115
{
	if (!Function_356(128))
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

void Function_360(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB84D / 47181
{
	Function_361(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_361(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB864 / 47204
{
	if (!Function_326(iParam1))
	{
		return;
	}
	Function_362(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_362(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB887 / 47239
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

void Function_363(int iParam0, bool bParam1) //Position: 0xB8B1 / 47281
{
	Function_367(iParam0);
	Function_367(iParam0 + 228);
	if (bParam1)
	{
		Function_364(iParam0);
	}
	return;
}

void Function_364(int iParam0) //Position: 0xB8CD / 47309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_365(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_365(var uParam0, int iParam1) //Position: 0xB8ED / 47341
{
	Function_366(uParam0, iParam1, 0);
	return;
}

void Function_366(int iParam0, int iParam1, int iParam2) //Position: 0xB8FB / 47355
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_367(int iParam0) //Position: 0xB90C / 47372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_369(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_368(iParam0, 0.0f);
	return;
}

void Function_368(var uParam0, int iParam1) //Position: 0xB939 / 47417
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_369(var uParam0) //Position: 0xB945 / 47429
{
	Function_362(uParam0, 4294967295, 0, 1);
	return;
}

void Function_370() //Position: 0xB953 / 47443
{
	Function_371(&Local_105 + 4, 516, 2, 1);
	Function_371(&Local_105 + 4, 517, 2, 1);
	Function_371(&Local_105 + 4, 520, 2, 1);
	Function_371(&Local_105 + 4, 522, 2, 1);
	Function_371(&Local_105 + 4, 525, 2, 1);
	Function_371(&Local_105 + 4, 529, 2, 1);
	Function_371(&Local_105 + 4, 531, 2, 1);
	Function_371(&Local_105 + 4, 532, 2, 1);
	Function_371(&Local_105 + 4, 523, 2, 1);
	Function_371(&Local_105 + 4, 237, 2, 1);
	Function_371(&Local_105 + 4, 269, 2, 1);
	Function_371(&Local_105 + 4, 312, 2, 1);
	Function_371(&Local_105 + 4, 253, 2, 1);
	return;
}

var Function_371(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xBA00 / 47616
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
			Function_358(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_358(uParam0[iVar03], 8);
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

void Function_372() //Position: 0xBAD0 / 47824
{
	Function_373(&iLocal_288, "mp_action_areas", 10, 0);
	Function_371(&iLocal_288, 1045, 2, 1);
	return;
}

var Function_373(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBAFE / 47870
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_374(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_358(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_374(var uParam0, int iParam1, int iParam2) //Position: 0xBB36 / 47926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_82(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_358(uParam0[iVar03], 4);
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

void Function_375(int iParam0, float fParam1) //Position: 0xBBFA / 48122
{
	if (!Function_64(iParam0))
	{
		Function_376(iParam0, fParam1);
	}
	return;
}

void Function_376(int iParam0, float fParam1) //Position: 0xBC10 / 48144
{
	Function_268(iParam0, -fParam1);
	return;
}

void Function_377(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4) //Position: 0xBC1E / 48158
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_378(fParam4);
		if (0 == iVar0)
		{
			Function_65(uParam0, iParam2, 0, 4294967295, 4294967295);
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

int Function_378(float fParam0) //Position: 0xBC64 / 48228
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

int Function_379(bool bParam0) //Position: 0xBC98 / 48280
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_380(bool bParam0) //Position: 0xBCE8 / 48360
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

bool Function_381(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xBD2E / 48430
{
	if (!Function_421())
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
		Function_416();
	}
	Function_414(3);
	Function_413();
	if (StackVal != 0)
	{
		Function_411(bLocal_40, *uParam1, uParam2, 1);
		Function_410(uParam0);
	}
	if (StackVal >= bLocal_42)
	{
		bLocal_42 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_407(uParam0);
	}
	switch (iLocal_16)
	{
		case 0x00000000:
		case 0x00000003:
			Function_393(51744, 51424);
			break;
		
		case 0x00000002:
			Function_393(48941, 48627);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_382(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xBDF3 / 48627
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_385(bParam1, uParam2, uParam3);
		bVar0 = Function_213(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_383(bParam0, bVar0, 0);
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

bool Function_383(bool bParam0, int iParam1, int iParam2) //Position: 0xBE96 / 48790
{
	var uVar0;
	
	return Function_384(bParam0, iParam1, &uVar0, iParam2);
}

int Function_384(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xBEA7 / 48807
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

void Function_385(bool bParam0, int iParam1, char* cParam2) //Position: 0xBF0C / 48908
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

int Function_386() //Position: 0xBF2D / 48941
{
	if (!Function_387(1))
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

bool Function_387(bool bParam0) //Position: 0xBFE9 / 49129
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_119() || Function_392(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_390(1) };
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
	Function_388(Function_119());
	return 1;
}

void Function_388(bool bParam0) //Position: 0xC06E / 49262
{
	if (bParam0 || Function_36(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_36(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_36(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_36(1048576) || Function_36(4)) || Function_389(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_30(0x20000000, 0, 1);
	}
	return;
}

var Function_389(int iParam0, bool bParam1) //Position: 0xC0F7 / 49399
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_390(var uParam0) //Position: 0xC117 / 49431
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_391(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_391(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xC12B / 49451
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

int Function_392(bool bParam0, bool bParam1) //Position: 0xC170 / 49520
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

void Function_393(int iParam0, int iParam1) //Position: 0xC1A4 / 49572
{
	Function_394(iParam0, iParam1, 51417);
	return;
}

void Function_394(var uParam0, var uParam1, int iParam2) //Position: 0xC1B5 / 49589
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
		Function_396(&uParam0, &uParam1, &iParam2);
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
			Function_395();
		}
		Function_30(16384, 1, 1);
	}
	else if (!Function_36(32))
	{
		Function_395();
	}
	Function_30(32768, 0, 1);
	return;
}

void Function_395() //Position: 0xC34E / 49998
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

void Function_396(var uParam0, var uParam1, int iParam2) //Position: 0xC457 / 50263
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
			else if (!Function_397(bVar1, 2048, 1))
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
				if (Function_383(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_383(bVar1, (4294966296 - bVar1), 1))
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

bool Function_397(bool bParam0, int iParam1, bool bParam2) //Position: 0xC5CF / 50639
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_389(iParam1, bParam2);
	}
	if (!Function_129(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_398(iParam1), 64);
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

var Function_398(int iParam0) //Position: 0xC650 / 50768
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

int Function_399() //Position: 0xC8D9 / 51417
{
	return 1;
}

int Function_400(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xC8E0 / 51424
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_385(bParam1, iParam2, cParam3);
	iVar0 = Function_404(bParam0);
	if (iVar0 == Function_403())
	{
		iVar1 = ((CEIL(Function_401(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_401(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_383(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_397(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_401(int iParam0, bool bParam1) //Position: 0xC978 / 51576
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_402(iParam0);
	}
	if (!Function_129(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_402(int iParam0) //Position: 0xC9E1 / 51681
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_403() //Position: 0xC9F1 / 51697
{
	return Global_78480;
}

int Function_404(bool bParam0) //Position: 0xC9FB / 51707
{
	if (!Function_129(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_403();
	}
	return Global_76943[bParam096];
}

int Function_405() //Position: 0xCA20 / 51744
{
	if (!Function_387(1))
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
	Function_406();
	return 1;
}

void Function_406() //Position: 0xCABC / 51900
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

void Function_407(int iParam0) //Position: 0xCAF9 / 51961
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
		Function_409(&bLocal_18);
		iLocal_17 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_22)
	{
		if (iLocal_22[iVar1] >= 4294967295)
		{
			iLocal_22[iVar1] = 4294967295;
			Function_408(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_408(int iParam0) //Position: 0xCB72 / 52082
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_409(int iParam0) //Position: 0xCB9D / 52125
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

void Function_410(int iParam0) //Position: 0xCBE4 / 52196
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

int Function_411(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xCD20 / 52512
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
						if (Function_412(bVar4) == bParam1)
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

int Function_412(bool bParam0) //Position: 0xCE02 / 52738
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

void Function_413() //Position: 0xCE5C / 52828
{
	Function_414(4);
	return;
}

void Function_414(int iParam0) //Position: 0xCE66 / 52838
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
			Function_415(iParam0);
		}
	}
	return;
}

void Function_415(int iParam0) //Position: 0xCE98 / 52888
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_416() //Position: 0xCEA7 / 52903
{
	bool bVar0;
	
	if (!iLocal_21)
	{
		bVar0 = Function_38();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				if (Function_418(bVar0, bLocal_18, 1, 0, 0, -1.0f))
				{
					Function_417();
					iLocal_21 = 1;
				}
			}
		}
	}
	return;
}

void Function_417() //Position: 0xCEDC / 52956
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_418(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xCEF5 / 52981
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_420(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, iLocal_47);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_419(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
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

bool Function_419(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCF5E / 53086
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

int Function_420(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD04B / 53323
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

bool Function_421() //Position: 0xD0F9 / 53497
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

void Function_422(bool bParam0) //Position: 0xD11C / 53532
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (!IS_ACTOR_IN_ACTORSET(bLocal_18, bParam0))
	{
		ADD_ACTORSET_MEMBER(bLocal_18, bParam0);
	}
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		bVar1 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	}
	SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(bParam0), -1.0f);
	Function_240(bParam0, bVar0);
	if (bVar0 == 1)
	{
		ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_105.f_184);
	}
	return;
}

bool Function_423(int iParam0) //Position: 0xD174 / 53620
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
	if (!Function_438(16, 0))
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
	Function_267(iParam0 + 16 + 8);
	Function_297(iParam0, 54684);
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
	Function_429(2);
	Function_428(1);
	iVar3 = 54056;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 53937);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 53898);
	return 1;
}

void Function_424(int iParam0) //Position: 0xD28A / 53898
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

void Function_425(int iParam0) //Position: 0xD2B1 / 53937
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

void Function_426(int iParam0) //Position: 0xD328 / 54056
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
				Function_427(&bLocal_18, &iVar5);
			}
		}
	}
	return;
}

void Function_427(var uParam0, int iParam1) //Position: 0xD375 / 54133
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

void Function_428(int iParam0) //Position: 0xD3CA / 54218
{
	Function_40(&Global_83864 + 1252, iParam0);
	return;
}

void Function_429(int iParam0) //Position: 0xD3DC / 54236
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
	Function_431(0, 0);
	Function_430();
	return;
}

void Function_430() //Position: 0xD4A0 / 54432
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_431(bool bParam0, bool bParam1) //Position: 0xD4B9 / 54457
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_436(&Global_78480);
	Function_435(&Global_78480);
	uVar0 = Function_216(37);
	Function_433();
	if (!bParam0)
	{
		Function_210(37, uVar0);
	}
	Function_92(18264, 0);
	Function_432();
	return;
}

void Function_432() //Position: 0xD505 / 54533
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_433() //Position: 0xD524 / 54564
{
	Function_434(&Global_78480 + 220);
	return;
}

void Function_434(int iParam0) //Position: 0xD533 / 54579
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

void Function_435(int iParam0) //Position: 0xD554 / 54612
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

void Function_436(int iParam0) //Position: 0xD578 / 54648
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

void Function_437(var uParam0) //Position: 0xD59C / 54684
{
	uParam0 = uParam0;
	return;
}

bool Function_438(var uParam0, bool bParam1) //Position: 0xD5A6 / 54694
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_439("freemodetest");
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

int Function_439(bool bParam0) //Position: 0xD659 / 54873
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

