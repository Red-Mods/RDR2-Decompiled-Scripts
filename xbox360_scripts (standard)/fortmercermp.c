//Decompiled with MagicRDR v1.0
//Function Count : 439
//Statics Count : 629
//Natives Count : 417
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
	struct<989> Local_98 = { 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bLocal_616 = true;
	Local_377 = Global_30679[1];
	if (!Function_421(&Local_377))
	{
		TERMINATE_THIS_SCRIPT();
	}
	Function_420(&uLocal_625, 1.0f);
	iLocal_628 = 0;
	while (!IS_EXITFLAG_SET() && Function_85())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x81 / 129
{
	Function_81(&iLocal_405);
	Function_70(Local_98);
	Function_68();
	if (IS_OBJECT_VALID(bLocal_615))
	{
		DESTROY_OBJECT(bLocal_615);
	}
	Function_66(&uLocal_624, 1, 0, 4294967295, 4294967295);
	Function_65();
	Function_2(&Local_377);
	return;
}

void Function_2(int iParam0) //Position: 0xB7 / 183
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

void Function_3(int iParam0) //Position: 0x18E / 398
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x1A0 / 416
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x1AC / 428
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

void Function_6() //Position: 0x1CC / 460
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x201 / 513
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

int Function_8(float fParam0, int iParam1) //Position: 0x2BB / 699
{
	if (!Function_25())
	{
		Global_83822 = 1;
	}
	Function_9(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x2DC / 732
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x2F8 / 760
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x518 / 1304
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

var Function_12() //Position: 0xB45 / 2885
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB4D / 2893
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB5E / 2910
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

struct<32> Function_15(char* cParam0, char* cParam1) //Position: 0xC53 / 3155
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC6C / 3180
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xCD1 / 3281
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0xCE3 / 3299
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xCF5 / 3317
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

int Function_20(int iParam0) //Position: 0xE25 / 3621
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE34 / 3636
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xE6D / 3693
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xEAA / 3754
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1044 / 4164
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

bool Function_25() //Position: 0x125E / 4702
{
	if (Function_27())
	{
		return (Function_26() != 1 || Function_26() != 0);
	}
	return 0;
}

int Function_26() //Position: 0x1277 / 4727
{
	return Global_79349.f_16;
}

bool Function_27() //Position: 0x1283 / 4739
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_28() //Position: 0x128C / 4748
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

void Function_29() //Position: 0x12E6 / 4838
{
	Function_30(1024, 0, 1);
	Function_30(1, 0, 0);
	return;
}

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x12FA / 4858
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

void Function_31(int iParam0, int iParam1) //Position: 0x1322 / 4898
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_32(int iParam0, int iParam1) //Position: 0x1335 / 4917
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_33() //Position: 0x1344 / 4932
{
	if (Function_35())
	{
		Function_34();
	}
	Function_30(4096, 0, 1);
	return;
}

void Function_34() //Position: 0x135B / 4955
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_35() //Position: 0x136A / 4970
{
	return (Function_36(4096) || Function_36(4));
}

bool Function_36(bool bParam0) //Position: 0x137B / 4987
{
	return Function_37(Global_76905.f_132, bParam0);
}

bool Function_37(var uParam0, bool bParam1) //Position: 0x138C / 5004
{
	return (uParam0 && bParam1) == 0;
}

var Function_38() //Position: 0x1399 / 5017
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_39(int iParam0) //Position: 0x13AE / 5038
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

void Function_40(var uParam0, int iParam1) //Position: 0x1407 / 5127
{
	Function_32(uParam0, iParam1);
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1414 / 5140
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_42(int iParam0) //Position: 0x1429 / 5161
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

bool Function_43(int iParam0) //Position: 0x14E6 / 5350
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x14FC / 5372
{
	Function_45(&Global_79338, iParam0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x150B / 5387
{
	Function_31(uParam0, iParam1);
	return;
}

void Function_46(int iParam0) //Position: 0x1518 / 5400
{
	Function_45(&Global_83864 + 1252, iParam0);
	return;
}

void Function_47(int iParam0) //Position: 0x152A / 5418
{
	Function_45(&Global_78617 + 52, iParam0);
	return;
}

void Function_48(int iParam0) //Position: 0x153B / 5435
{
	Function_45(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_49() //Position: 0x1574 / 5492
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_50() //Position: 0x158B / 5515
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

void Function_51(int iParam0) //Position: 0x15AD / 5549
{
	Local_83 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_52() //Position: 0x15BB / 5563
{
	Function_53();
	return;
}

void Function_53() //Position: 0x15C4 / 5572
{
	Function_54(4294967286);
	return;
}

void Function_54(bool bParam0) //Position: 0x15D0 / 5584
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

void Function_55(var uParam0, int iParam1) //Position: 0x160D / 5645
{
	Local_50[iParam12] = *uParam0;
	return;
}

void Function_56(int iParam0) //Position: 0x161C / 5660
{
	Local_48 = *iParam0;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x1627 / 5671
{
	*uParam0 = iParam1;
	return;
}

void Function_58(int iParam0) //Position: 0x1632 / 5682
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_83 };
	return;
}

void Function_59(int iParam0) //Position: 0x1640 / 5696
{
	*iParam0 = Local_48;
	return;
}

float Function_60(var uParam0) //Position: 0x164B / 5707
{
	if (Function_64(uParam0))
	{
		if (Function_63(uParam0))
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

void Function_61() //Position: 0x171C / 5916
{
	if (!Function_62())
	{
	}
	return;
}

bool Function_62() //Position: 0x1729 / 5929
{
	return NET_IS_IN_SESSION();
}

bool Function_63(int iParam0) //Position: 0x1732 / 5938
{
	return Function_37(*iParam0, 2);
}

bool Function_64(var uParam0) //Position: 0x173F / 5951
{
	return Function_37(*uParam0, 1);
}

void Function_65() //Position: 0x174C / 5964
{
	Function_81(&Local_98 + 4);
	RELEASE_LAYOUT_REF(Local_98);
	return;
}

void Function_66(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x175E / 5982
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_67(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_67(int iParam0) //Position: 0x1782 / 6018
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

void Function_68() //Position: 0x1CBF / 7359
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_437)
	{
		Function_69(iLocal_437[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_446)
	{
		Function_69(iLocal_446[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_453)
	{
		Function_69(iLocal_453[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_464)
	{
		Function_69(iLocal_464[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_468)
	{
		Function_69(iLocal_468[iVar0]);
		iVar0++;
	}
	return;
}

void Function_69(bool bParam0) //Position: 0x1D6A / 7530
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	return;
}

void Function_70(int iParam0) //Position: 0x1DBE / 7614
{
	if (IS_ACTORSET_VALID(bLocal_18))
	{
		Function_80(bLocal_18);
	}
	Function_78(iParam0);
	Function_71(1);
	return;
}

void Function_71(bool bParam0) //Position: 0x1DDA / 7642
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_77(1);
	}
	else
	{
		Function_76(1);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_72(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_72(bool bParam0, bool bParam1) //Position: 0x1E12 / 7698
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_75(GET_LOCAL_SLOT(), bParam0) && !Function_73(2))
		{
			return;
		}
		if (!Function_73(1))
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

bool Function_73(int iParam0) //Position: 0x1E5F / 7775
{
	return Function_74(Global_79337, iParam0);
}

bool Function_74(var uParam0, int iParam1) //Position: 0x1E6E / 7790
{
	return (uParam0 && iParam1) == 0;
}

int Function_75(int iParam0, int iParam1) //Position: 0x1E7B / 7803
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_GET_GAMER_POSSE_LEADER(iParam0);
	iVar1 = NET_GET_GAMER_POSSE_LEADER(iParam1);
	if (iVar0 != iVar1 && iVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_76(int iParam0) //Position: 0x1E9F / 7839
{
	Function_45(&Global_79337, iParam0);
	return;
}

void Function_77(int iParam0) //Position: 0x1EAE / 7854
{
	Function_40(&Global_79337, iParam0);
	return;
}

void Function_78(bool bParam0) //Position: 0x1EBD / 7869
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
			Function_79(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_79(bool bParam0) //Position: 0x1F5C / 8028
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

void Function_80(bool bParam0) //Position: 0x1F8D / 8077
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

void Function_81(int iParam0) //Position: 0x1FD8 / 8152
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_82(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x1FFE / 8190
{
	if (Function_84(uParam0[iParam13], 4))
	{
		if (Function_84(uParam0[iParam13], 1))
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
			Function_83(uParam0[iParam13], 1);
			Function_83(uParam0[iParam13], 2);
			Function_83(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x212C / 8492
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_84(int iParam0, int iParam1) //Position: 0x2146 / 8518
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_85() //Position: 0x2163 / 8547
{
	if (!Function_367(&Local_377, &Local_98, 56205, 0))
	{
		return 0;
	}
	if (StackVal != 0)
	{
		if (StackVal != 11)
		{
			Function_358();
		}
	}
	if (StackVal != 11)
	{
		if (Function_64(&uLocal_621))
		{
			if (Function_60(&uLocal_621) <= 0.0f)
			{
				Function_356(&uLocal_624, 38, 40, 38, 10.0f);
				Function_353(&uLocal_621, 5.0f);
			}
		}
		else
		{
			Function_420(&uLocal_621, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_261();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_253();
			UNK_0x2148AC15(322, 10);
			break;
		
		case 0x00000002:
			Function_252();
			UNK_0x2148AC15(322, 12);
			break;
		
		case 0x00000003:
			Function_228();
			break;
		
		case 0x0000000B:
			Function_86();
			break;
	}
	return 1;
}

void Function_86() //Position: 0x2235 / 8757
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_225();
			if (bLocal_617)
			{
				Function_221();
			}
			Function_66(&uLocal_624, 1, 0, 4294967295, 4294967295);
			Local_377.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_87(&Local_377);
			break;
	}
	return;
}

var Function_87(int iParam0) //Position: 0x227A / 8826
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
				Function_146(iParam0);
				Function_143(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_142())
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
				Function_141("MP_AA_already_finished");
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
			AUDIO_MUSIC_ONE_SHOT(Function_140(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_38()))
				{
					Function_138(Function_38(), 0);
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
			Function_133(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_127(*iParam0, Function_128());
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
				if (IS_BUTTON_RELEASED(iVar0, 4, 1, 1))
				{
					Function_34();
					if (iLocal_16 == 2)
					{
						Function_133(iParam0);
					}
					else if (iLocal_16 == 1)
					{
						Function_124();
					}
				}
				else if (Function_123(15, 1, 1))
				{
					Function_122(1);
					Function_7(iParam0);
				}
				else if (Function_123(13, 1, 1))
				{
					Function_122(0);
					Function_7(iParam0);
				}
				else if (Function_121())
				{
					if (iLocal_16 == 1)
					{
						Function_133(iParam0);
					}
					else if (iLocal_16 == 2)
					{
						Function_124();
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
							Function_122(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_88))
						{
							Function_122(0);
						}
					}
				}
				else if (!iLocal_92)
				{
					iLocal_92 = 1;
					Function_5();
				}
			}
			Function_117();
			switch (Function_114(iParam0))
			{
				case 0x00000001:
					if (Function_100(99, 1, 0x3f800000))
					{
						Function_141("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_99(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_98(Global_12976.f_36);
							if (Function_96(StackVal, StackVal, Function_98(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_95 = 11;
					}
					break;
				
				case 0x00000000:
					Function_141("mp_aa_vote_skip_passed");
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
			if (!Function_95(8))
			{
				Function_94(1792, 0);
				Function_88(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_95 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_47(64);
			Function_71(1);
			iLocal_95 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_88(var uParam0, bool bParam1, int iParam2) //Position: 0x2773 / 10099
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
			Function_93(&(Global_29008[Global_29006]), 131072);
			Function_92(&(Global_29008[Global_29006]), 2097152);
			Function_90(Global_29006);
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
				if (Function_89(&(Global_29008[iVar0]), 4) || Function_89(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_92(&(Global_29008[iVar0]), 2097155);
					Function_93(&(Global_29008[iVar0]), 262144);
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

bool Function_89(var uParam0, int iParam1) //Position: 0x287E / 10366
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_90(int iParam0) //Position: 0x289A / 10394
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_91())
			{
				return;
			}
		}
		if (!Function_89(&(Global_29008[iParam0]), 2048))
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

bool Function_91() //Position: 0x2919 / 10521
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_89(&(Global_29008[iVar0]), 4) || Function_89(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_92(var uParam0, int iParam1) //Position: 0x2976 / 10614
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_93(var uParam0, int iParam1) //Position: 0x298D / 10637
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_94(int iParam0, bool bParam1) //Position: 0x299C / 10652
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

bool Function_95(int iParam0) //Position: 0x29D7 / 10711
{
	return Function_74(Global_78617.f_52, iParam0);
}

bool Function_96(vector3 vParam0) //Position: 0x29E8 / 10728
{
	var uVar0[8];
	int iVar9;
	
	Function_97(&uVar0);
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

void Function_97(int iParam0) //Position: 0x2A39 / 10809
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

vector3 Function_98(bool bParam0) //Position: 0x2A97 / 10903
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_99(int iParam0) //Position: 0x2AA8 / 10920
{
	Function_40(&Global_78617 + 52, iParam0);
	return;
}

bool Function_100(bool bParam0, bool bParam1, float fParam2) //Position: 0x2AB9 / 10937
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_113(bParam0);
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
	if (Function_112(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_111(&Var0, 0);
		Function_51(&Var0);
		Function_53();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_110(bParam0, iVar6, &uVar7))
	{
		if (Function_109())
		{
			if (!Function_108(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_107(&Var0, 1);
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
				if (Function_101(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
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

bool Function_101(int iParam0) //Position: 0x2D0C / 11532
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_106(bVar0))
		{
			iVar1 = Function_102(bVar0);
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

int Function_102(bool bParam0) //Position: 0x2D4F / 11599
{
	int iVar0;
	
	Function_105(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_59(&iVar0);
	}
	else
	{
		Function_104(&iVar0, bParam0);
	}
	return Function_103(&iVar0);
}

int Function_103(int iParam0) //Position: 0x2D76 / 11638
{
	return *iParam0;
}

void Function_104(var uParam0, int iParam1) //Position: 0x2D7F / 11647
{
	*uParam0 = Local_50[iParam12];
	return;
}

void Function_105(int iParam0) //Position: 0x2D8E / 11662
{
	Function_57(iParam0, 4294967286);
	return;
}

bool Function_106(bool bParam0) //Position: 0x2D9C / 11676
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_50, bParam0);
}

void Function_107(var uParam0, bool bParam1) //Position: 0x2DA9 / 11689
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

bool Function_108(bool bParam0) //Position: 0x2DC3 / 11715
{
	return Function_37(*bParam0, 2);
}

bool Function_109() //Position: 0x2DD0 / 11728
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

bool Function_110(int iParam0, var uParam1, int iParam2) //Position: 0x2DEE / 11758
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
		if (Function_106(iVar0))
		{
			iVar1 = Function_102(iVar0);
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

void Function_111(int iParam0, bool bParam1) //Position: 0x2E3F / 11839
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

bool Function_112(int iParam0) //Position: 0x2E59 / 11865
{
	return Function_37(*iParam0, 1);
}

void Function_113(int iParam0) //Position: 0x2E66 / 11878
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_59(&iVar1);
	if (Function_103(&iVar1) != bVar0)
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
		Function_107(&Var2, 0);
		Function_51(&Var2);
	}
	return;
}

bool Function_114(int iParam0) //Position: 0x2F63 / 12131
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
		if (Function_116(bVar4))
		{
			switch (Function_115(bVar4))
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

int Function_115(int iParam0) //Position: 0x319F / 12703
{
	return StackVal;
}

bool Function_116(bool bParam0) //Position: 0x31AD / 12717
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_117() //Position: 0x31C3 / 12739
{
	Function_120(8);
	Function_118(&Global_79298);
	return;
}

void Function_118(int iParam0) //Position: 0x31D5 / 12757
{
	Function_119(iParam0, 0.0f);
	return;
}

void Function_119(int iParam0, float fParam1) //Position: 0x31E1 / 12769
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_32(iParam0, 1);
	Function_31(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_120(int iParam0) //Position: 0x3202 / 12802
{
	Function_40(&Global_79338, iParam0);
	return;
}

bool Function_121() //Position: 0x3211 / 12817
{
	return Function_36(32768);
}

void Function_122(bool bParam0) //Position: 0x321E / 12830
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_47(64);
	Local_50[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_123(int iParam0, int iParam1, bool bParam2) //Position: 0x3249 / 12873
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

void Function_124() //Position: 0x32F6 / 13046
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_126();
	Function_125();
	iLocal_16 = 2;
	return;
}

void Function_125() //Position: 0x3331 / 13105
{
	Function_30(1025, 1, 0);
	return;
}

void Function_126() //Position: 0x333F / 13119
{
	if (!Function_35())
	{
		Function_34();
	}
	Function_30(4096, 1, 1);
	return;
}

void Function_127(var uParam0, var uParam1) //Position: 0x3357 / 13143
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_128() //Position: 0x337C / 13180
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
		if (Function_116(iVar2))
		{
			iVar3 = Function_129(iVar2);
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

int Function_129(bool bParam0) //Position: 0x33BB / 13243
{
	return Function_130(0, bParam0);
}

int Function_130(int iParam0, bool bParam1) //Position: 0x33C7 / 13255
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_132(iParam0);
	}
	if (!Function_131(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_131(bool bParam0) //Position: 0x342E / 13358
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

int Function_132(int iParam0) //Position: 0x34CF / 13519
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_133(int iParam0) //Position: 0x34DF / 13535
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_137(1);
	Function_126();
	Function_125();
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
	itos(&cVar0, Function_132(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_136());
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
	Function_134(0, Function_60(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_16 = 1;
	return;
}

void Function_134(bool bParam0, int iParam1) //Position: 0x3903 / 14595
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_135(iParam1) };
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

struct<16> Function_135(var uParam0) //Position: 0x3B30 / 15152
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

int Function_136() //Position: 0x3BA1 / 15265
{
	return Function_218(12);
}

void Function_137(bool bParam0) //Position: 0x3BAC / 15276
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_30(16384, 0, 1);
	return;
}

void Function_138(bool bParam0, bool bParam1) //Position: 0x3BC6 / 15302
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
	else if (!bParam1 || Function_139(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_139(bool bParam0, bool bParam1) //Position: 0x3C23 / 15395
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_140(int iParam0) //Position: 0x3C42 / 15426
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_141(bool bParam0) //Position: 0x3CA0 / 15520
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_142() //Position: 0x3CB4 / 15540
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_143(int iParam0) //Position: 0x3CC3 / 15555
{
	Function_145(iParam0, Global_30668[2], &Global_56612, 0);
	Function_145(iParam0, Global_30679[1], &Global_56612, 1);
	Function_145(iParam0, Global_30658[0], &Global_56612, 2);
	Function_145(iParam0, Global_30658[3], &Global_56612, 3);
	Function_145(iParam0, Global_30685[2], &Global_56612, 4);
	Function_145(iParam0, Global_30640[2], &Global_56612, 6);
	Function_145(iParam0, Global_30685[1], &Global_56612, 5);
	Function_145(iParam0, Global_30658[2], &Global_56612, 7);
	Function_144(iParam0, Global_30668[2], &Global_56688, 0);
	Function_144(iParam0, Global_30679[1], &Global_56688, 1);
	Function_144(iParam0, Global_30658[0], &Global_56688, 2);
	Function_144(iParam0, Global_30658[3], &Global_56688, 3);
	Function_144(iParam0, Global_30685[2], &Global_56688, 4);
	Function_144(iParam0, Global_30640[2], &Global_56688, 6);
	Function_144(iParam0, Global_30685[1], &Global_56688, 5);
	Function_144(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_144(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3DB9 / 15801
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_136();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_136();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_136();
	}
}

void Function_145(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3E7D / 15997
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_136();
	}
}

void Function_146(int iParam0) //Position: 0x3EBE / 16062
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_217(*iParam0) };
	Function_213(iParam0);
	Function_212(13, iParam0->f_92);
	Function_212(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_132(2));
	if (iParam0->f_104)
	{
		Function_211(3, 5);
	}
	else
	{
		Function_211(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_132(3));
	Function_117();
	Function_212(13, iParam0->f_92);
	iLocal_94 = 1;
	Function_147(Var0, 4294967295, 0, 0);
	return;
}

void Function_147(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3F2A / 16170
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
			Function_172(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_166();
	Function_165();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_164(&Global_78480 + 220, &uVar0, 0);
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
					Function_164(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_148(bParam2);
}

void Function_148(bool bParam0) //Position: 0x403E / 16446
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_120(2);
	if (bParam0)
	{
		Function_120(1);
	}
	else
	{
		Function_44(1);
	}
	Function_149();
	return;
}

void Function_149() //Position: 0x40C7 / 16583
{
	Function_162();
	Function_161();
	Function_161();
	Function_160();
	Function_160();
	Function_159();
	Function_159();
	Function_156();
	Function_156();
	if (!Function_27())
	{
		Function_154();
		Function_153();
		Function_152();
		Function_151();
	}
	Function_150();
	return;
}

void Function_150() //Position: 0x40FA / 16634
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

void Function_151() //Position: 0x4200 / 16896
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

void Function_152() //Position: 0x4233 / 16947
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

void Function_153() //Position: 0x43C1 / 17345
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

void Function_154() //Position: 0x4575 / 17781
{
	Function_155(&Global_28260, 1, 0);
	return;
}

void Function_155(int iParam0, bool bParam1, var uParam2) //Position: 0x4583 / 17795
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

struct<8> Function_156() //Position: 0x4774 / 18292
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
				iVar2 = ((Function_158((50 + iVar4)) + Function_158((183 + iVar4))) + Function_158((90 + iVar4)));
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
	Function_157(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_157(int iParam0, bool bParam1, bool bParam2) //Position: 0x480F / 18447
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

int Function_158(bool bParam0) //Position: 0x4AAA / 19114
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_159() //Position: 0x4AEB / 19179
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
		iVar2 = ((Function_158((50 + iVar3) + 15) + Function_158((183 + iVar3) + 15)) + Function_158((90 + iVar3) + 15));
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
	Function_157(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_160() //Position: 0x4B74 / 19316
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
			iVar2 = ((Function_158((50 + iVar3) + 8) + Function_158((183 + iVar3) + 8)) + Function_158((90 + iVar3) + 8));
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
	Function_157(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_161() //Position: 0x4C0B / 19467
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
		iVar2 = ((Function_158((50 + iVar3)) + Function_158((183 + iVar3))) + Function_158((90 + iVar3)));
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
	Function_157(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_162() //Position: 0x4C8A / 19594
{
	Function_163(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_157(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_163(int iParam0, bool bParam1, int iParam2) //Position: 0x4CB0 / 19632
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

void Function_164(var uParam0, var uParam1, bool bParam2) //Position: 0x4EBA / 20154
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

void Function_165() //Position: 0x4EFF / 20223
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

void Function_166() //Position: 0x4F29 / 20265
{
	Function_167(&(Global_50170[522]));
	Function_167(&(Global_50170[622]));
	Function_167(&(Global_50170[722]));
	Function_167(&(Global_50170[822]));
	Function_167(&(Global_50170[922]));
	Function_167(&(Global_50170[1022]));
	Function_167(&(Global_50170[1122]));
	return;
}

void Function_167(bool bParam0) //Position: 0x4F72 / 20338
{
	Global_56092[*bParam0] = 0;
	Function_168(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_168(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4F8C / 20364
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_171(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_170(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_171(iParam0), &cVar0, 2, 2, true);
		Function_169(Function_171(iParam0), 0);
	}
}

void Function_169(bool bParam0, bool bParam1) //Position: 0x503A / 20538
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

struct<16> Function_170(int iParam0) //Position: 0x505F / 20575
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_171(int iParam0) //Position: 0x5093 / 20627
{
	return Global_50170[iParam022].f_24;
}

void Function_172(var uParam0, var uParam1, int iParam2) //Position: 0x50A2 / 20642
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
						Function_168(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
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
						Function_168(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
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
					Function_173(17, 150, Function_208(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_168(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_173(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x524B / 21067
{
	Function_198(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_171(iParam0), 1.0f, false, 0);
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
	Function_174();
}

void Function_174() //Position: 0x52B1 / 21169
{
	if (!Function_27())
	{
		if (!Function_184(1, 3, 1, 1))
		{
			Function_176(1);
			Function_175(1, 8);
		}
	}
	else
	{
		Function_148(0);
	}
	return;
}

void Function_175(var uParam0, int iParam1) //Position: 0x52DA / 21210
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

void Function_176(bool bParam0) //Position: 0x531C / 21276
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_177();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_149();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_31(&Global_63095, 1);
		Function_31(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_177() //Position: 0x536D / 21357
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_179(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_179(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_178(StackVal, StackVal, vVar0))
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

bool Function_178(vector3 vParam0) //Position: 0x540E / 21518
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_179(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5426 / 21542
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
	Function_180();
	return StackVal, StackVal, Function_180();
}

vector3 Function_180() //Position: 0x550D / 21773
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_181(int iParam0) //Position: 0x5516 / 21782
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_182(bool bParam0, bool bParam1) //Position: 0x552C / 21804
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

float Function_183(vector3 vParam0, vector3 vParam3) //Position: 0x55F3 / 22003
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_184(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5610 / 22032
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

void Function_185(bool bParam0, bool bParam1, bool bParam2) //Position: 0x56B4 / 22196
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

struct<16> Function_186(int iParam0) //Position: 0x5726 / 22310
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_187(int iParam0) //Position: 0x5747 / 22343
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_188(int iParam0) //Position: 0x5768 / 22376
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_189() //Position: 0x5789 / 22409
{
	return "CQueue_Count";
}

var Function_190() //Position: 0x579E / 22430
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_191(int iParam0) //Position: 0x57CD / 22477
{
	Function_192(iParam0, 1);
	return;
}

void Function_192(int iParam0, bool bParam1) //Position: 0x57D9 / 22489
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

int Function_193(bool bParam0) //Position: 0x582F / 22575
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_194(int iParam0, int iParam1) //Position: 0x583B / 22587
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
		CLEAR_JOURNAL_ENTRY(Function_171(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_195(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_171(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_171(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_171(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_195(int iParam0) //Position: 0x58BD / 22717
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_196(int iParam0) //Position: 0x58DD / 22749
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_197(int iParam0) //Position: 0x590E / 22798
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

void Function_198(bool bParam0, bool bParam1) //Position: 0x5A8C / 23180
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

var Function_199() //Position: 0x5BD8 / 23512
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_200(var uParam0, bool bParam1, bool bParam2) //Position: 0x5C25 / 23589
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_201(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x5C3D / 23613
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
	Function_185(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_200(&fParam5, bParam8, iParam9);
	Function_168(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_203(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_191(iParam12);
	}
	Function_202(iParam0, 4);
	Function_174();
}

void Function_202(int iParam0, int iParam1) //Position: 0x5CB3 / 23731
{
	Function_31(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_203(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5CC7 / 23751
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
	CLEAR_JOURNAL_ENTRY(Function_171(iParam0));
	if ((bParam3 && Function_207(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_171(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_170(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_206(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_205(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_195(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_171(iParam0), &Var7, 0, 2, Function_207(iParam0, 4));
			if (!bParam3)
			{
				Function_204(iParam0, 4);
			}
		}
	}
}

void Function_204(int iParam0, int iParam1) //Position: 0x5D84 / 23940
{
	Function_32(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_205(int iParam0) //Position: 0x5D98 / 23960
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_206(int iParam0) //Position: 0x5DC6 / 24006
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_207(int iParam0, bool bParam1) //Position: 0x5DF6 / 24054
{
	return Function_37(Global_50170[iParam022].f_32, bParam1);
}

bool Function_208() //Position: 0x5E0A / 24074
{
	return "MP_Unstoppable_Icon_128";
}

float Function_209(int iParam0) //Position: 0x5E2A / 24106
{
	return Global_50170[iParam022].f_12;
}

void Function_210(int iParam0, int iParam1) //Position: 0x5E39 / 24121
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_211(int iParam0, int iParam1) //Position: 0x5E5E / 24158
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_212(int iParam0, int iParam1) //Position: 0x5E87 / 24199
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_213(int iParam0) //Position: 0x5EA1 / 24225
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

int Function_214(int iParam0) //Position: 0x5F82 / 24450
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

int Function_215(int iParam0, bool bParam1) //Position: 0x5FBE / 24510
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
	if (!Function_131(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

bool Function_216(bool bParam0) //Position: 0x602C / 24620
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_131(bParam0);
}

struct<20> Function_217(int iParam0) //Position: 0x6042 / 24642
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

int Function_218(int iParam0) //Position: 0x6197 / 24983
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_219() //Position: 0x61B0 / 25008
{
	return Function_132(0);
}

void Function_220(int iParam0) //Position: 0x61BA / 25018
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

void Function_221() //Position: 0x6282 / 25218
{
	Function_223(FLOOR(150.0f), "XP_FOM_Bonus", 0);
	Function_222(2, FLOOR(150.0f));
	return;
}

void Function_222(int iParam0, bool bParam1) //Position: 0x62AF / 25263
{
	Function_211(iParam0, (Function_132(iParam0) + bParam1));
	return;
}

void Function_223(var uParam0, bool bParam1, int iParam2) //Position: 0x62C2 / 25282
{
	Function_224(uParam0);
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

void Function_224(var uParam0) //Position: 0x6305 / 25349
{
	Function_222(0, uParam0);
	return;
}

void Function_225() //Position: 0x6311 / 25361
{
	Function_226();
	if (IS_VOLUME_VALID(Local_98.f_352))
	{
		DESTROY_VOLUME(Local_98.f_352);
	}
	if (!IS_VOLUME_VALID(Local_98.f_332))
	{
		Local_98.f_332 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "spawnvol_0_set");
		(*&Local_98 + 312)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_0", 2, -2614,285f, 69,22716f, 3392,246f, 0.0f, -39,53684f, 0.0f, 11,12016f, 3,88992f, 6,907949f);
		ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[0]);
		(*&Local_98 + 312)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_1", 2, -2647,976f, 70,60503f, 3365,659f, 0.0f, -13,94974f, 0.0f, 11,12016f, 3,88992f, 6,907949f);
		ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[1]);
		(*&Local_98 + 312)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_2", 2, -2593,494f, 69,60886f, 3422,265f, 0.0f, -88,47775f, 0.0f, 11,12016f, 5,076022f, 6,907949f);
		ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[2]);
		(*&Local_98 + 312)[3] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_3", 2, -2625,762f, 69,60886f, 3383,325f, 0.0f, -24,23981f, 0.0f, 6,077509f, 5,076022f, 5,039647f);
		ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[3]);
	}
	return;
}

void Function_226() //Position: 0x64AC / 25772
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_446)
	{
		Function_227(iLocal_446[iVar0], 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_464)
	{
		Function_227(iLocal_464[iVar0], 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_468)
	{
		Function_227(iLocal_468[iVar0], 1);
		OPEN_DOOR_DIRECTION(iLocal_468[iVar0], true);
		iVar0++;
	}
	if (IS_VOLUME_VALID(Local_98.f_332))
	{
		DESTROY_VOLUME(Local_98.f_332);
	}
	return;
}

void Function_227(bool bParam0, bool bParam1) //Position: 0x6536 / 25910
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

void Function_228() //Position: 0x6587 / 25991
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_251(&Local_377, 0);
			Function_250("TWR_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_249();
				Function_248();
				Function_233();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_232(&Local_98 + 120, bLocal_616);
				Function_232(&Local_98 + 144, bLocal_616);
				Function_232(&Local_98 + 132, bLocal_616);
				Function_231(Local_98.f_120, bLocal_18, 0, 0);
				Function_231(Local_98.f_144, bLocal_18, 0, 0);
				Function_231(Local_98.f_132, bLocal_18, 0, 0);
			}
			Function_250("FOM_MP_obj3", 0x40f00000, 1, 2, 0, 0, 0);
			Function_226();
			Local_377.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_230(bLocal_432, Function_38()))
			{
				bLocal_617 = true;
			}
			if (Function_229(bLocal_18) < 0)
			{
				if (Function_100(11, 1, 0x3f800000))
				{
					Local_377.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_377.f_8 = 0;
			Local_377.f_4 = 11;
			break;
	}
	return;
}

int Function_229(bool bParam0) //Position: 0x6692 / 26258
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

bool Function_230(bool bParam0, bool bParam1) //Position: 0x66D8 / 26328
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
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
						iVar0 = 1;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_231(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x674A / 26442
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

void Function_232(var uParam0, bool bParam1) //Position: 0x67CC / 26572
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

void Function_233() //Position: 0x6868 / 26728
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_132 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "nFOM_Boss1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_z_boss", 484, -2703,535f, 67,467f, 3458,354f, 0.0f, 87,77905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_132);
	GIVE_WEAPON_TO_ACTOR(bVar0, 10, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 15, 0,17578f, 1, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 26);
	Function_234(bVar0, 9);
	return;
}

void Function_234(bool bParam0, int iParam1) //Position: 0x68EE / 26862
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_247(bParam0);
			break;
		
		case 0x00000001:
			Function_246(bParam0);
			break;
		
		case 0x00000002:
			Function_245(bParam0);
			break;
		
		case 0x00000005:
			Function_244(bParam0);
			break;
		
		case 0x00000004:
			Function_243(bParam0);
			break;
		
		case 0x00000003:
			Function_242(bParam0);
			break;
		
		case 0x00000006:
			Function_241(bParam0);
			break;
		
		case 0x00000007:
			Function_240(bParam0);
			break;
		
		case 0x00000008:
			Function_239(bParam0);
			break;
		
		case 0x00000009:
			Function_237(bParam0);
			break;
		
		default:
			Function_235(bParam0);
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

void Function_235(bool bParam0) //Position: 0x69BA / 27066
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
	Function_236(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_236(var uParam0, bool bParam1) //Position: 0x6D1E / 27934
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

void Function_237(bool bParam0) //Position: 0x6D40 / 27968
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_238(bool bParam0, int iParam1) //Position: 0x6EDD / 28381
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

void Function_239(bool bParam0) //Position: 0x6F10 / 28432
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_240(bool bParam0) //Position: 0x70B9 / 28857
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_241(bool bParam0) //Position: 0x724A / 29258
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_242(bool bParam0) //Position: 0x737C / 29564
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_243(bool bParam0) //Position: 0x7504 / 29956
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_244(bool bParam0) //Position: 0x765E / 30302
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
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

void Function_245(bool bParam0) //Position: 0x779C / 30620
{
	Function_235(bParam0);
	Function_238(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_246(bool bParam0) //Position: 0x77BF / 30655
{
	Function_235(bParam0);
	Function_238(bParam0, 0);
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

void Function_247(bool bParam0) //Position: 0x7929 / 31017
{
	Function_235(bParam0);
	Function_238(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_248() //Position: 0x7964 / 31076
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_144 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_Guard_Boss2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_z2_01", 477, -2699,639f, 67,51066f, 3463,952f, 0.0f, 87,77905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_144);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0,5f, 1, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 16);
	Function_234(bVar0, 9);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 17);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_z2_04", 480, -2696,856f, 67,51066f, 3461,642f, 0.0f, 87,77905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_144);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0,5f, 1, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 16);
	Function_234(bVar0, 9);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 17);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_z2_05", 485, -2699,462f, 67,51066f, 3459,364f, 0.0f, 87,77905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_144);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0,5f, 1, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 16);
	Function_234(bVar0, 9);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 17);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_249() //Position: 0x7AF5 / 31477
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_120 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_Guard_Boss1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_z_01", 477, -2703,088f, 67,47607f, 3463,461f, 0.0f, -72,97276f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_120);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,08204f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 16);
	Function_234(bVar0, 9);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_z_04", 481, -2698,559f, 67,51066f, 3462,432f, 0.0f, 87,77905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_120);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,08204f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 16);
	Function_234(bVar0, 9);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_z_05", 482, -2699,639f, 67,51066f, 3463,952f, 0.0f, 87,77905f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_120);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,08204f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 16);
	Function_234(bVar0, 9);
	return;
}

void Function_250(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x7C50 / 31824
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

void Function_251(int iParam0, bool bParam1) //Position: 0x7CA3 / 31907
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_4 = *iParam0;
	vVar0.f_8 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 78, &vVar0, 4, 1);
	if (bParam1)
	{
		NET_SCRIPTMSG_SEND(2, 78, &vVar0, 4, 1);
	}
	return;
}

void Function_252() //Position: 0x7CDA / 31962
{
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_229(bLocal_18) >= 0)
			{
				Function_250("FOM_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			}
			Local_377.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_229(bLocal_18) < 0)
			{
				if (Function_100(3, 1, 0x3f800000))
				{
					Local_377.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_377.f_8 = 0;
			Local_377.f_4 = 3;
			break;
	}
	return;
}

void Function_253() //Position: 0x7D5E / 32094
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_251(&Local_377, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_260();
				Function_259();
				Function_258();
				Function_257();
				Function_256();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_232(&Local_98 + 116, bLocal_616);
				Function_231(Local_98.f_116, bLocal_18, 0, 0);
			}
			Function_250("FOM_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0);
			Local_377.f_8 = 6;
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_429, 0);
			break;
		
		case 0x00000006:
			if (!iLocal_618)
			{
				if (Function_60(&uLocal_625) < 0.0f)
				{
					Function_255();
					Function_353(&uLocal_625, 1.0f);
				}
			}
			if (Function_254(bLocal_433) >= 0 && Function_254(bLocal_434) >= 0)
			{
				if (Function_100(2, 1, 0x3f800000))
				{
					Local_377.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_377.f_8 = 0;
			Local_377.f_4 = 2;
			break;
	}
	return;
}

int Function_254(bool bParam0) //Position: 0x7E44 / 32324
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

void Function_255() //Position: 0x7E94 / 32404
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = SQUAD_GET_SIZE(bLocal_429);
	if (iVar1 >= 0)
	{
		bVar0 = false;
		while (bVar0 <= iVar1)
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_429, bVar0);
			if (!IS_ACTOR_IN_VOLUME(bVar2, Local_98.f_300))
			{
				TASK_GO_NEAR_COORD(bVar2, &Local_98 + 1068, 5.0f, 2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_256() //Position: 0x7EDF / 32479
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_140 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_Turret_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_t_01", 477, -2672,867f, 75,40635f, 3461,114f, 0.0f, -82,65762f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_140);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 22);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_t_02", 478, -2674,858f, 75,40623f, 3459,938f, 0.0f, -15,1276f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_140);
	GIVE_WEAPON_TO_ACTOR(bVar0, 23, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 22);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_t_03", 479, -2670,041f, 75,40576f, 3465,827f, 0.0f, -82,65762f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_140);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 22);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_257() //Position: 0x8073 / 32883
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_s_01", 485, -2695,64f, 75,87788f, 3428,252f, 0.0f, -82,65762f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	Function_234(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_s_02", 484, -2695,717f, 75,87788f, 3426,112f, 0.0f, -82,65762f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 5);
	Function_234(bVar0, 6);
	return;
}

void Function_258() //Position: 0x8125 / 33061
{
	bool bVar0;
	bool bVar1;
	
	Function_180();
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "nfom_boss2", 483, *(&Local_98 + 840[(&Local_377 + 16)->f_486]), Function_180());
	SET_ACTOR_FACTION(bVar0, 19);
	GIVE_WEAPON_TO_ACTOR(bVar0, 10, 0,5f, 1, 1);
	SQUAD_JOIN(bVar0, bLocal_433);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 27);
	Function_180();
	bVar1 = CREATE_ACTOR_IN_LAYOUT(Local_98, "nfom_boss3", 485, *(&Local_98 + 840[(&Local_377 + 16)->f_526]), Function_180());
	SET_ACTOR_FACTION(bVar1, 19);
	GIVE_WEAPON_TO_ACTOR(bVar1, 10, 0,5f, 1, 1);
	SQUAD_JOIN(bVar1, bLocal_434);
	NET_ACTOR_SET_SCRIPT_INT(bVar1, 28);
	return;
}

void Function_259() //Position: 0x81C5 / 33221
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_116 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_Court1_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c1_01", 478, -2656,453f, 67,26273f, 3438,109f, 0.0f, 77,96707f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_116);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c1_02", 479, -2670,101f, 67,26273f, 3426,724f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_116);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c1_03", 480, -2674,327f, 67,26273f, 3441,035f, 0.0f, -104,346f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_116);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c1_04", 481, -2660,499f, 67,26273f, 3445,456f, 0.0f, -104,346f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_116);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_260() //Position: 0x83B3 / 33715
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_g_01", 477, -2632,414f, 72,67149f, 3430,435f, 0.0f, -82,65762f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_g_02", 478, -2657,389f, 72,10101f, 3414,238f, 0.0f, 0.0f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_g_03", 479, -2651,671f, 72,69898f, 3420,067f, 0.0f, 316,5081f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_g_04", 483, -2645,105f, 72,69898f, 3426,6f, 0.0f, 316,5081f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 6);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_261() //Position: 0x8569 / 34153
{
	int iVar0;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_350();
			Function_348();
			Function_341(&uLocal_473, 0);
			Function_338(&uLocal_473, 1, 7, 3, 1);
			Local_377.f_100 = "FTR_SONG_04";
			Local_377.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_331() && Function_322(&Local_377))
			{
				if (Function_319())
				{
					Local_377.f_8 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_316();
			Function_314(&Local_377, Local_98);
			Function_278(Local_98, &uLocal_473, 1, 1);
			iVar0 = 36529;
			NET_SCRIPTMSG_REGISTER_HANDLER(82, iVar0);
			Function_273(&Local_377, 36468);
			bLocal_617 = false;
			Function_227(Function_272(Local_377, "fortMercer", "guardTowerProps01", 8), 0);
			OPEN_DOOR_DIRECTION(Function_272(Local_377, "fortMercer", "guardTowerProps01", 8), true);
			Function_227(Function_272(Local_377, "fortMercer", "guardTowerProps01", 7), 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_377 + 16)->f_48 = RAND_INT_RANGE(false, 2);
				(&Local_377 + 16)->f_52 = RAND_INT_RANGE(3, 5);
				NET_OBJECT_REPLICATION_MODE_START(17, 5);
				bLocal_615 = CREATE_PROP_IN_LAYOUT(Local_98, Function_12(), Function_271(), *(&Local_98 + 1068), *(&Local_98 + 1068 + 12), 1);
				NET_OBJECT_REPLICATION_MODE_END(17);
				UNK_0x5C4CAE3A(Local_98);
			}
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_04", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_268();
			Local_377.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_266())
			{
				Local_377.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_262(&Local_377);
			break;
	}
	return;
}

void Function_262(var uParam0) //Position: 0x8735 / 34613
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_264(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_264(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_263();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_263() //Position: 0x8817 / 34839
{
	bLocal_91 = true;
	return;
}

void Function_264(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x8820 / 34848
{
	if (iParam0 == Global_30668[2])
	{
		Function_265(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_265(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_265(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_265(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_265(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_265(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_265(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_265(7);
	}
}

void Function_265(int iParam0) //Position: 0x88B5 / 34997
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

bool Function_266() //Position: 0x894A / 35146
{
	if (!IS_LAYOUTREF_VALID(bLocal_619))
	{
		bLocal_619 = CREATE_LAYOUT(Function_12());
	}
	if (!IS_OBJECT_VALID(bLocal_620))
	{
		bLocal_620 = CREATE_WORLD_SECTOR(bLocal_619, "Fortmercer");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_620))
	{
		Function_267(bLocal_619, "potclay", Local_98.f_304);
		Function_267(bLocal_619, "bottle", Local_98.f_304);
		Function_267(bLocal_619, "blanket", Local_98.f_304);
		Function_267(bLocal_619, "flag1", Local_98.f_304);
		Function_267(bLocal_619, "rope", Local_98.f_304);
		Function_267(bLocal_619, "tarp0", Local_98.f_304);
		Function_267(bLocal_619, "nlantern07", Local_98.f_304);
		DESTROY_LAYOUT(bLocal_619);
		return 1;
	}
	return 0;
}

void Function_267(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A22 / 35362
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

void Function_268() //Position: 0x8A7B / 35451
{
	bLocal_422 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "top_gate_squad"));
	Function_270(bLocal_422, Local_98.f_172, 1, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_422, 0);
	bLocal_423 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_top_mid"));
	Function_270(bLocal_423, Local_98.f_208, 1, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_423, 0);
	bLocal_424 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_top_right"));
	Function_270(bLocal_424, Local_98.f_296, 1, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_424, 0);
	bLocal_425 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "courtyard_one_squad"));
	Function_270(bLocal_425, Local_98.f_192, 1, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_425, 0);
	bLocal_426 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_courtyard_two"));
	Function_270(bLocal_426, Local_98.f_260, 1, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_426, 0);
	bLocal_428 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "sniper_squad"));
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_428, true, 1, 4294967295);
	Function_269(0, 3212836864);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_428, 0);
	bLocal_430 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_guard_boss1"));
	Function_270(bLocal_430, Local_98.f_260, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_430, 0);
	bLocal_432 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "boss_squad"));
	Function_270(bLocal_432, Local_98.f_260, 0, 4294967295);
	bLocal_431 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_guard_boss2"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_431, 0);
	Function_270(bLocal_431, Local_98.f_308, 5, 4294967295);
	Function_180();
	bLocal_435 = CREATE_VOLUME_IN_LAYOUT(Local_98, "fom_boss2vol", 2, *(&Local_98 + 840[(&Local_377 + 16)->f_486]), Function_180(), 2,6f, 4,8f, 2,6f);
	Function_180();
	bLocal_436 = CREATE_VOLUME_IN_LAYOUT(Local_98, "fom_boss3vol", 2, *(&Local_98 + 840[(&Local_377 + 16)->f_526]), Function_180(), 2,6f, 4,8f, 2,6f);
	bLocal_433 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_boss2"));
	Function_270(bLocal_433, bLocal_435, 1, 4294967295);
	bLocal_434 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_boss3"));
	Function_270(bLocal_434, bLocal_436, 1, 4294967295);
	bLocal_427 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "default_FOM_squad"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_427, 0);
	SQUAD_GOAL_ADD_COMBAT(bLocal_427, 1, 4294967295, 0);
	bLocal_429 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "SQUAD_turret_Guard"));
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_429, true, 1, 1);
	TASK_USE_TURRET(0, bLocal_615, -1.0f);
	Function_270(bLocal_429, Local_98.f_300, 10, 4294967295);
	return;
}

void Function_269(bool bParam0, bool bParam1) //Position: 0x8D6C / 36204
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

void Function_270(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x8D87 / 36231
{
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, iParam2, bParam1, iParam3);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, 10, bParam1, 4, 1);
}

var Function_271() //Position: 0x8DB0 / 36272
{
	return "p_gen_gatlingGun01x";
}

bool Function_272(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x8DCC / 36300
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

void Function_273(var uParam0, int iParam1) //Position: 0x8E68 / 36456
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_274(int iParam0) //Position: 0x8E74 / 36468
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_FOM_Bonus"), iParam0);
	itos(&cVar0, Function_132(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

void Function_275(int iParam0) //Position: 0x8EB1 / 36529
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 3);
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		if (vVar0.y == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			if (vVar0.z != 1 && !(&Local_377 + 16)->f_32)
			{
				(&Local_377 + 16)->f_32 = 1;
			}
			else if (vVar0.z != 2 && !(&Local_377 + 16)->f_36)
			{
				(&Local_377 + 16)->f_36 = 1;
			}
			else if (vVar0.z != 3 && !iLocal_618)
			{
				iLocal_618 = 1;
				Function_276();
			}
		}
	}
	return;
}

void Function_276() //Position: 0x8F22 / 36642
{
	SQUAD_GOALS_CLEAR(bLocal_429);
	Function_277(bLocal_429);
	Function_270(bLocal_429, Local_98.f_300, 0, 4294967295);
	return;
}

void Function_277(bool bParam0) //Position: 0x8F41 / 36673
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

int Function_278(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x8F73 / 36723
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_313()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_312()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_312(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_311(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_310(bVar14);
				vVar7 = { StackVal, StackVal, Function_310(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
				Function_309(bVar14);
				vVar10 = { StackVal, StackVal, Function_309(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_307(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_306());
							if (Function_305(bVar5))
							{
								if (Function_304((*iParam1 + 228)[bVar52]))
								{
									Function_285(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_280(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_285(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_279(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_285(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_279() //Position: 0x91A7 / 37287
{
	return "XPBonus";
}

void Function_280(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x91B7 / 37303
{
	bool bVar0;
	
	if (Function_304(Param1))
	{
		bVar0 = Function_282(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_281(), bVar0);
	}
}

var Function_281() //Position: 0x91DD / 37341
{
	return "PackedWeapon";
}

var Function_282(struct<5> Param0) //Position: 0x91F2 / 37362
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_283())) || SHIFT_LEFT(bParam2, Function_283() + 8));
}

bool Function_283() //Position: 0x9210 / 37392
{
	return Function_284(39);
}

int Function_284(int iParam0) //Position: 0x921B / 37403
{
	float fVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		fVar0++;
	}
	return fVar0;
}

void Function_285(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0x9249 / 37449
{
	Function_296(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_290(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_289(), Function_288(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_287(), Function_286(iParam13, iParam14));
}

var Function_286(var uParam0, bool bParam1) //Position: 0x929A / 37530
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_287() //Position: 0x92AA / 37546
{
	return "PackedGrass";
}

var Function_288(bool bParam0, bool bParam1, bool bParam2) //Position: 0x92BE / 37566
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

var Function_289() //Position: 0x92E3 / 37603
{
	return "PackedMetadata";
}

void Function_290(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x92FA / 37626
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_281(), &uVar5))
				{
					Function_294(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_293();
				vVar0 = { StackVal, StackVal, Function_293() };
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
				Function_292();
				vVar0 = { StackVal, StackVal, Function_292() };
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
				Function_291();
				vVar0 = { StackVal, StackVal, Function_291() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_291() //Position: 0x9420 / 37920
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_292() //Position: 0x9431 / 37937
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_293() //Position: 0x9442 / 37954
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_294(var uParam0, int iParam1) //Position: 0x9453 / 37971
{
	*iParam1 = Function_295(uParam0, Function_283(), 0);
	iParam1->f_4 = Function_295(uParam0, Function_283() + 8, Function_283());
	return;
}

var Function_295(var uParam0, int iParam1, bool bParam2) //Position: 0x9476 / 38006
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_193((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_296(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x9495 / 38037
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_303();
			Function_292();
			vVar1 = { StackVal, StackVal, Function_292() };
			break;
		
		case 0x00000001:
			bVar0 = Function_302();
			Function_293();
			vVar1 = { StackVal, StackVal, Function_293() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_301();
			Function_291();
			vVar1 = { StackVal, StackVal, Function_291() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_300(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_298(Function_300()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_297(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_297() //Position: 0x9599 / 38297
{
	return "MPItemGiver";
}

struct<32> Function_298(bool bParam0) //Position: 0x95AD / 38317
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_299("0", &cVar8, ""), 4);
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

struct<32> Function_299(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9617 / 38423
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_300() //Position: 0x9636 / 38454
{
	return "PBox_";
}

var Function_301() //Position: 0x9644 / 38468
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_302() //Position: 0x966A / 38506
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_303() //Position: 0x9692 / 38546
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_304(int iParam0) //Position: 0x96B8 / 38584
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_305(bool bParam0) //Position: 0x96CA / 38602
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_306() //Position: 0x96DA / 38618
{
	return "ID";
}

bool Function_307(bool bParam0, int iParam1) //Position: 0x96E5 / 38629
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_74((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_308())
			{
				return 0;
			}
			return !Function_74((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_74((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_308() //Position: 0x973A / 38714
{
	return Function_37(Global_79962, 1024);
}

vector3 Function_309(bool bParam0) //Position: 0x974A / 38730
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

vector3 Function_310(bool bParam0) //Position: 0x9771 / 38769
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

var Function_311() //Position: 0x9798 / 38808
{
	return "Type";
}

var Function_312() //Position: 0x97A5 / 38821
{
	return "PickupsSet";
}

var Function_313() //Position: 0x97B8 / 38840
{
	return "PickupFlagsSet";
}

void Function_314(int iParam0, bool bParam1) //Position: 0x97CF / 38863
{
	Function_315(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	bLocal_18 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_41 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_41, 15);
	ITERATE_IN_LAYOUT(bLocal_41, bParam1);
	START_OBJECT_ITERATOR(bLocal_41);
	Global_78480.f_24 = *iParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_251(iParam0, 1);
	}
	Function_39(256);
	Function_99(64);
	Function_71(0);
	return;
}

void Function_315(var uParam0) //Position: 0x9840 / 38976
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_316() //Position: 0x984E / 38990
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
	
	Function_318(4, 1);
	uVar0 = uVar0;
	Local_98 = CREATE_LAYOUT("FortMercerMP_layout");
	Local_98.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_hideout_boss1", 2, -2701,337f, 68,48172f, 3461,916f, 0.0f, -132,7156f, 0.0f, 10,63054f, 4,756781f, 9,237298f);
	Local_98.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_courtyard1", 2, -2667,586f, 67,26273f, 3444,821f, 0.0f, -31,73247f, 0.0f, 34,36012f, 5,81681f, 36,13664f);
	Local_98.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_bat_gate_top_set");
	(*&Local_98 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_gate_top1", 2, -2649,764f, 74,39011f, 3422,576f, 0.0f, -46,74621f, 0.0f, 38,96434f, 3,866743f, 6,257025f);
	ADD_TO_VOLUME_SET(Local_98.f_172, (*&Local_98 + 156)[0]);
	(*&Local_98 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_gate_top2", 2, -2636,396f, 74,43246f, 3427,641f, -1,371131f, -46,55413f, 1,934034f, 9,440278f, 3,866743f, 8,972772f);
	ADD_TO_VOLUME_SET(Local_98.f_172, (*&Local_98 + 156)[1]);
	(*&Local_98 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_gate_top3", 2, -2649,764f, 74,39011f, 3422,576f, 0.0f, -46,74621f, 0.0f, 38,96434f, 3,866743f, 6,257025f);
	ADD_TO_VOLUME_SET(Local_98.f_172, (*&Local_98 + 156)[2]);
	Local_98.f_192 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_bat_court1_set");
	(*&Local_98 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court1_1", 2, -2666,486f, 68,38548f, 3426,427f, 0.0f, -41,77822f, 0.0f, 3,253278f, 4,262836f, 3,727644f);
	ADD_TO_VOLUME_SET(Local_98.f_192, (*&Local_98 + 176)[0]);
	(*&Local_98 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court1_2", 2, -2658,603f, 69,28145f, 3440,498f, 0.0f, -24,85896f, 0.0f, 3,842183f, 4,262836f, 4,908114f);
	ADD_TO_VOLUME_SET(Local_98.f_192, (*&Local_98 + 176)[1]);
	(*&Local_98 + 176)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court1_4", 2, -2657,78f, 68,38548f, 3433,846f, 0.0f, -41,77822f, 0.0f, 4,591557f, 4,262836f, 3,727644f);
	ADD_TO_VOLUME_SET(Local_98.f_192, (*&Local_98 + 176)[2]);
	Local_98.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_bat_wall_left_top_set");
	(*&Local_98 + 196)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_wall_left_top1", 2, -2657,652f, 73,77899f, 3463,858f, 0.0f, -30,91112f, 0.0f, 4,857299f, 3,866743f, 5,043544f);
	ADD_TO_VOLUME_SET(Local_98.f_208, (*&Local_98 + 196)[0]);
	(*&Local_98 + 196)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_wall_left_top2", 2, -2674,826f, 73,57981f, 3456,799f, 0.0f, -117,9128f, 0.0f, 2,828702f, 4,508381f, 23,26305f);
	ADD_TO_VOLUME_SET(Local_98.f_208, (*&Local_98 + 196)[1]);
	Local_98.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_court1_trigger_set");
	(*&Local_98 + 212)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_court1_trigger0", 2, -2670,226f, 72,27086f, 3447,209f, 0.0f, -31,73247f, 0.0f, 57,49546f, 14,34239f, 26,96267f);
	ADD_TO_VOLUME_SET(Local_98.f_228, (*&Local_98 + 212)[0]);
	(*&Local_98 + 212)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_court1_trigger1", 2, -2671,179f, 71,94351f, 3423,167f, 0.0f, -47,64829f, 0.0f, 8,904466f, 13,57342f, 25,47971f);
	ADD_TO_VOLUME_SET(Local_98.f_228, (*&Local_98 + 212)[1]);
	(*&Local_98 + 212)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_court1_trigger2", 2, -2645,374f, 66,57769f, 3435,058f, 0.0f, -13,74634f, 0.0f, 10,76551f, 5,81681f, 19,43314f);
	ADD_TO_VOLUME_SET(Local_98.f_228, (*&Local_98 + 212)[2]);
	Local_98.f_260 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_bat_court2_set");
	(*&Local_98 + 232)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court2_1", 2, -2702,925f, 68,7634f, 3479,694f, 0.0f, -41,77822f, 0.0f, 2,537442f, 4,262836f, 3,914063f);
	ADD_TO_VOLUME_SET(Local_98.f_260, (*&Local_98 + 232)[0]);
	(*&Local_98 + 232)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court2_2", 2, -2695,315f, 68,62077f, 3478,834f, 0.0f, -41,77822f, 0.0f, 3,391943f, 4,262836f, 3,914063f);
	ADD_TO_VOLUME_SET(Local_98.f_260, (*&Local_98 + 232)[1]);
	(*&Local_98 + 232)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court2_3", 2, -2690,237f, 68,6858f, 3483,152f, 0.0f, -41,77822f, 0.0f, 3,391943f, 4,262836f, 3,914063f);
	ADD_TO_VOLUME_SET(Local_98.f_260, (*&Local_98 + 232)[2]);
	(*&Local_98 + 232)[3] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court2_4", 2, -2684,086f, 68,6858f, 3484,455f, 0.0f, -41,77822f, 0.0f, 3,391943f, 4,262836f, 3,914063f);
	ADD_TO_VOLUME_SET(Local_98.f_260, (*&Local_98 + 232)[3]);
	(*&Local_98 + 232)[4] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court2_5", 2, -2694,311f, 68,62077f, 3491,124f, 0.0f, -84,06271f, 0.0f, 3,391943f, 4,262836f, 3,914063f);
	ADD_TO_VOLUME_SET(Local_98.f_260, (*&Local_98 + 232)[4]);
	(*&Local_98 + 232)[5] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_court2_6", 2, -2685,586f, 68,57594f, 3492,055f, 0.0f, -99,63879f, 0.0f, 3,391943f, 4,262836f, 3,914063f);
	ADD_TO_VOLUME_SET(Local_98.f_260, (*&Local_98 + 232)[5]);
	Local_98.f_276 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_court2_trigger_set");
	(*&Local_98 + 264)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_court2_trigger0", 2, -2679,528f, 72,27086f, 3457,261f, -1,844447f, -28,96193f, 1,637566f, 60,47758f, 14,34239f, 17,5026f);
	ADD_TO_VOLUME_SET(Local_98.f_276, (*&Local_98 + 264)[0]);
	(*&Local_98 + 264)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_court2_trigger1", 2, -2693,328f, 76,19392f, 3436,963f, -1,783808f, -25,22053f, 1,504485f, 26,0429f, 8,634947f, 20,00963f);
	ADD_TO_VOLUME_SET(Local_98.f_276, (*&Local_98 + 264)[1]);
	Local_98.f_296 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "vset_bat_top_right_set");
	(*&Local_98 + 280)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_right_top1", 2, -2671,003f, 73,5513f, 3423,219f, 0.0f, -133,1121f, 0.0f, 20,51724f, 3,866743f, 3,730412f);
	ADD_TO_VOLUME_SET(Local_98.f_296, (*&Local_98 + 280)[0]);
	(*&Local_98 + 280)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_right_top2", 2, -2661,278f, 73,5513f, 3413,416f, 0.0f, -133,1121f, 0.0f, 7,042109f, 3,866743f, 6,057983f);
	ADD_TO_VOLUME_SET(Local_98.f_296, (*&Local_98 + 280)[1]);
	(*&Local_98 + 280)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_bat_right_top3", 2, -2681,539f, 73,5513f, 3434,889f, 0.0f, -110,0344f, 0.0f, 3,974056f, 3,866743f, 6,053506f);
	ADD_TO_VOLUME_SET(Local_98.f_296, (*&Local_98 + 280)[2]);
	Local_98.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_Turret_Room", 2, -2672,062f, 75,99707f, 3464,795f, 0.0f, -30,91112f, 0.0f, 9,273711f, 5,753715f, 9,069383f);
	Local_98.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_Clear_vol", 2, -2666,63f, 69,64346f, 3443,949f, 0.0f, -47,59919f, 0.0f, 87,53434f, 17,59616f, 160,1154f);
	Local_98.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_98, "v_Side_Cover", 2, -2712,844f, 68,57594f, 3475,783f, 0.0f, 223,6823f, 0.0f, 22,52816f, 4,262836f, 11,45212f);
	Local_98.f_332 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "spawnvol_0_set");
	(*&Local_98 + 312)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_0", 2, -2614,285f, 69,22716f, 3392,246f, 0.0f, -39,53684f, 0.0f, 11,12016f, 3,88992f, 6,907949f);
	ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[0]);
	(*&Local_98 + 312)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_1", 2, -2647,976f, 70,60503f, 3365,659f, 0.0f, -13,94974f, 0.0f, 11,12016f, 3,88992f, 6,907949f);
	ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[1]);
	(*&Local_98 + 312)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_2", 2, -2593,494f, 69,60886f, 3422,265f, 0.0f, -88,47775f, 0.0f, 11,12016f, 5,076022f, 6,907949f);
	ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[2]);
	(*&Local_98 + 312)[3] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_0_sub_3", 2, -2625,762f, 69,60886f, 3383,325f, 0.0f, -24,23981f, 0.0f, 6,077509f, 5,076022f, 5,039647f);
	ADD_TO_VOLUME_SET(Local_98.f_332, (*&Local_98 + 312)[3]);
	Local_98.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_98, "spawnvol_1_set");
	(*&Local_98 + 336)[0] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_1_sub_0", 2, -2666,909f, 68,1784f, 3435,687f, 0.0f, -39,53684f, 0.0f, 7,115511f, 2,765433f, 4,532269f);
	ADD_TO_VOLUME_SET(Local_98.f_352, (*&Local_98 + 336)[0]);
	(*&Local_98 + 336)[1] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_1_sub_1", 2, -2667,667f, 68,1784f, 3454,86f, 0.0f, -122,6733f, 0.0f, 4,473636f, 2,765433f, 3,785152f);
	ADD_TO_VOLUME_SET(Local_98.f_352, (*&Local_98 + 336)[1]);
	(*&Local_98 + 336)[2] = CREATE_VOLUME_IN_LAYOUT(Local_98, "spawnvol_1_sub_2", 2, -2700,449f, 76,64136f, 3425,441f, 0.0f, 62,80801f, 0.0f, 2,947995f, 2,765433f, 1,437567f);
	ADD_TO_VOLUME_SET(Local_98.f_352, (*&Local_98 + 336)[2]);
	*(&Local_98 + 356) = { -2650,893f, 67,45486f, 3453,528f };
	*(&Local_98 + 356 + 12) = { 0.0f, -70,43929f, 0.0f };
	*(&Local_98 + 380) = { -2649,012f, 67,45486f, 3450,602f };
	*(&Local_98 + 380 + 12) = { 0.0f, 94,43314f, 0.0f };
	*(&Local_98 + 404) = { -2651,791f, 67,45486f, 3449,379f };
	*(&Local_98 + 404 + 12) = { 0.0f, -157,7963f, 0.0f };
	*(&Local_98 + 428) = { -2648,478f, 67,45486f, 3457,497f };
	*(&Local_98 + 428 + 12) = { 0.0f, -165,0697f, 0.0f };
	*(&Local_98 + 452) = { -2678,174f, 71,65486f, 3414,822f };
	*(&Local_98 + 452 + 12) = { 0.0f, 35,16219f, 0.0f };
	*(&Local_98 + 476) = { -2669,096f, 71,65486f, 3409,437f };
	*(&Local_98 + 476 + 12) = { 0.0f, 78,77777f, 0.0f };
	*(&Local_98 + 500) = { -2671,405f, 71,65486f, 3413,892f };
	*(&Local_98 + 500 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_98 + 524) = { -2683,399f, 71,65486f, 3419,174f };
	*(&Local_98 + 524 + 12) = { 0.0f, -69,61933f, 0.0f };
	*(&Local_98 + 548) = { -2667,5f, 67,45486f, 3407,411f };
	*(&Local_98 + 548 + 12) = { 0.0f, 113,6796f, 0.0f };
	*(&Local_98 + 572) = { -2670,751f, 67,45486f, 3412,266f };
	*(&Local_98 + 572 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_98 + 596) = { -2667,742f, 67,45486f, 3409,192f };
	*(&Local_98 + 596 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_98 + 620) = { -2670,751f, 67,45486f, 3408,836f };
	*(&Local_98 + 620 + 12) = { 0.0f, 65,51999f, 0.0f };
	*(&Local_98 + 644) = { -2671,66f, 71,65485f, 3467,362f };
	*(&Local_98 + 644 + 12) = { 0.0f, -118,0158f, 0.0f };
	*(&Local_98 + 668) = { -2673,361f, 71,65485f, 3461,092f };
	*(&Local_98 + 668 + 12) = { 0.0f, 62,72233f, 0.0f };
	*(&Local_98 + 692) = { -2675,012f, 71,65485f, 3464,295f };
	*(&Local_98 + 692 + 12) = { 0.0f, 62,72233f, 0.0f };
	*(&Local_98 + 716) = { -2670,656f, 71,65485f, 3464,852f };
	*(&Local_98 + 716 + 12) = { 0.0f, 62,72233f, 0.0f };
	*(&Local_98 + 740) = { -2650,244f, 67,45486f, 3447,917f };
	*(&Local_98 + 740 + 12) = { 0.0f, -77,24989f, 0.0f };
	*(&Local_98 + 764) = { -2649,935f, 67,45486f, 3443,897f };
	*(&Local_98 + 764 + 12) = { 0.0f, 73,68169f, 0.0f };
	*(&Local_98 + 788) = { -2647,811f, 67,45486f, 3447,283f };
	*(&Local_98 + 788 + 12) = { 0.0f, -19,9903f, 0.0f };
	*(&Local_98 + 812) = { -2650,618f, 67,45486f, 3446,262f };
	*(&Local_98 + 812 + 12) = { 0.0f, 175,2052f, 0.0f };
	Local_98.f_836 = CREATE_OBJECTSET_IN_LAYOUT("fset_boss_spawnsSet", Local_98, 8, 0);
	*(&Local_98 + 840[06]) = { -2666,69f, 67,455f, 3405,615f };
	*(&Local_98 + 840[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_98, "nf_boss2_1", -2666,69f, 67,455f, 3405,615f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_98.f_836);
	*(&Local_98 + 840[16]) = { -2668,419f, 67,263f, 3477,621f };
	*(&Local_98 + 840[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_98, "nf_boss2_2", -2668,419f, 67,263f, 3477,621f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_98.f_836);
	*(&Local_98 + 840[26]) = { -2643,708f, 67,455f, 3454,021f };
	*(&Local_98 + 840[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_98, "nf_boss2_3", -2643,708f, 67,455f, 3454,021f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_98.f_836);
	*(&Local_98 + 840[36]) = { -2641,177f, 67,26492f, 3440,275f };
	*(&Local_98 + 840[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_98, "nf_boss3_1", -2641,177f, 67,26492f, 3440,275f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_98.f_836);
	*(&Local_98 + 840[46]) = { -2696,22f, 67,46233f, 3444,548f };
	*(&Local_98 + 840[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_98, "nf_boss3_2", -2696,22f, 67,46233f, 3444,548f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_98.f_836);
	*(&Local_98 + 840[56]) = { -2677,488f, 71,655f, 3422,269f };
	*(&Local_98 + 840[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_98, "nf_boss3_3", -2677,488f, 71,655f, 3422,269f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_98.f_836);
	Local_98.f_988 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_98, 8, 0);
	*(&Local_98 + 992[06]) = { -2707,755f, 71,66231f, 3463,454f };
	*(&Local_98 + 992[06] + 12) = { -162,5055f, -88,47847f, 162,8935f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_98, "f_Weapon_pickup", -2707,755f, 71,66231f, 3463,454f, -162,5055f, -88,47847f, 162,8935f);
	Function_317(bVar7, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_98.f_988);
	*(&Local_98 + 992[16]) = { -2681,589f, 67,26978f, 3440,026f };
	*(&Local_98 + 992[16] + 12) = { 1,368493f, 250,4746f, -0,907652f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_98, "f_Ammo_pickup", -2681,589f, 67,26978f, 3440,026f, 1,368493f, 250,4746f, -0,907652f);
	Function_317(bVar8, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_98.f_988);
	*(&Local_98 + 992[26]) = { -2680,2f, 67,27399f, 3495,534f };
	*(&Local_98 + 992[26] + 12) = { -179,5421f, 2,821937f, 180,4047f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_98, "f_Ammo_pickup1", -2680,2f, 67,27399f, 3495,534f, -179,5421f, 2,821937f, 180,4047f);
	Function_317(bVar9, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_98.f_988);
	*(&Local_98 + 1068) = { -2671,585f, 75,45139f, 3460,591f };
	*(&Local_98 + 1068 + 12) = { 0.0f, -385,015f, 0.0f };
	*(&Local_98 + 1092) = { -2614,159f, 67,90951f, 3393,842f };
	*(&Local_98 + 1092 + 12) = { 0.0f, 128,5374f, 0.0f };
	return;
}

void Function_317(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAB7C / 43900
{
	DECOR_SET_INT(bParam0, Function_311(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_306(), bParam2);
	}
	return;
}

void Function_318(int iParam0, int iParam1) //Position: 0xABA0 / 43936
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

bool Function_319() //Position: 0xABE9 / 44009
{
	return Function_320();
}

var Function_320() //Position: 0xABF2 / 44018
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_437[0] = Function_272(Local_377, "fortMercer", "rightWingProps01", 1);
	iLocal_437[1] = Function_272(Local_377, "fortMercer", "rightWingProps01", 2);
	iLocal_437[2] = Function_272(Local_377, "fortMercer", "rightWingProps01", 5);
	iLocal_437[3] = Function_272(Local_377, "fortMercer", "rightWingProps01", 6);
	iLocal_437[4] = Function_272(Local_377, "fortMercer", "rightWingProps01", 7);
	iLocal_437[5] = Function_272(Local_377, "fortMercer", "rightWingProps01", 8);
	iLocal_437[6] = Function_272(Local_377, "fortMercer", "guardTowerProps02", 8);
	iLocal_437[7] = Function_272(Local_377, "fortMercer", "guardTowerProps02", 9);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_437)
	{
		if (iLocal_437[iVar0] == "")
		{
			iVar1 = 0;
		}
		Function_321(iLocal_437[iVar0], 1);
		iVar0++;
	}
	iLocal_446[0] = Function_272(Local_377, "fortMercer", "rightWingProps01", 12);
	iLocal_446[1] = Function_272(Local_377, "fortMercer", "rightWingProps01", 13);
	iLocal_446[2] = Function_272(Local_377, "fortMercer", "rightWingProps01", 14);
	iLocal_446[3] = Function_272(Local_377, "fortMercer", "rightWingProps01", 15);
	iLocal_446[4] = Function_272(Local_377, "fortMercer", "rightWingProps01", 16);
	iLocal_446[5] = Function_272(Local_377, "fortMercer", "rightWingProps01", 17);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_446)
	{
		if (iLocal_446[iVar0] == "")
		{
			iVar1 = 0;
		}
		Function_321(iLocal_446[iVar0], 1);
		iVar0++;
	}
	iLocal_453[0] = Function_272(Local_377, "fortMercer", "leftWingProps01", 7);
	iLocal_453[1] = Function_272(Local_377, "fortMercer", "leftWingProps01", 8);
	iLocal_453[2] = Function_272(Local_377, "fortMercer", "leftWingProps01", 9);
	iLocal_453[3] = Function_272(Local_377, "fortMercer", "leftWingProps01", 10);
	iLocal_453[4] = Function_272(Local_377, "fortMercer", "leftWingProps01", 11);
	iLocal_453[5] = Function_272(Local_377, "fortMercer", "leftWingProps01", 12);
	iLocal_453[6] = Function_272(Local_377, "fortMercer", "leftWingProps01", 21);
	iLocal_453[7] = Function_272(Local_377, "fortMercer", "leftWingProps01", 2);
	iLocal_453[8] = Function_272(Local_377, "fortMercer", "leftWingProps01", 1);
	iLocal_453[9] = Function_272(Local_377, "fortMercer", "leftWingProps01", 17);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_453)
	{
		if (iLocal_453[iVar0] == "")
		{
			iVar1 = 0;
		}
		Function_321(iLocal_453[iVar0], 1);
		iVar0++;
	}
	iLocal_464[0] = Function_272(Local_377, "fortMercer", "leftWingProps01", 14);
	iLocal_464[1] = Function_272(Local_377, "fortMercer", "leftWingProps01", 16);
	iLocal_464[2] = Function_272(Local_377, "fortMercer", "leftWingProps01", 25);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_464)
	{
		if (iLocal_464[iVar0] == "")
		{
			iVar1 = 0;
		}
		Function_321(iLocal_464[iVar0], 1);
		iVar0++;
	}
	iLocal_468[0] = Function_272(Local_377, "fortMercer", "corralProps01", 5);
	iLocal_468[1] = Function_272(Local_377, "fortMercer", "corralProps01", 9);
	CLOSE_DOOR_FAST(Function_272(Local_377, "fortMercer", "corralProps01", 9));
	iLocal_468[2] = Function_272(Local_377, "fortMercer", "corralProps01", 1);
	iLocal_468[3] = Function_272(Local_377, "fortMercer", "corralProps01", 2);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_468)
	{
		if (iLocal_468[iVar0] == "")
		{
			iVar1 = 0;
		}
		Function_321(iLocal_468[iVar0], 1);
		iVar0++;
	}
	return iVar1;
}

void Function_321(bool bParam0, bool bParam1) //Position: 0xB28C / 45708
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

int Function_322(int iParam0) //Position: 0xB2E0 / 45792
{
	switch (iLocal_97)
	{
		case 0x00000000:
			Function_329(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_50, 33);
			bLocal_39 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_40 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_39);
			EVENT_TRAP_STORE_EVENTS(bLocal_40, 1);
			Function_328();
			Function_420(&uLocal_44, 5.0f);
			iLocal_97 = 1;
			break;
		
		case 0x00000001:
			if (Function_327())
			{
				iLocal_97 = 2;
			}
			else if (Function_323(&uLocal_44))
			{
				Function_328();
				Function_353(&uLocal_44, 5.0f);
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

bool Function_323(int iParam0) //Position: 0xB38C / 45964
{
	if (Function_325(iParam0))
	{
		Function_324(iParam0);
		return 1;
	}
	return 0;
}

void Function_324(int iParam0) //Position: 0xB3A2 / 45986
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_325(int iParam0) //Position: 0xB3B6 / 46006
{
	if (Function_64(iParam0))
	{
		if (Function_326(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_326(float fParam0) //Position: 0xB3D1 / 46033
{
	return -Function_60(fParam0);
}

bool Function_327() //Position: 0xB3DD / 46045
{
	return iLocal_19;
}

void Function_328() //Position: 0xB3E5 / 46053
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_329(bool bParam0) //Position: 0xB411 / 46097
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 46172);
	return;
}

void Function_330(int iParam0) //Position: 0xB45C / 46172
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_58(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_59(&iVar7);
	if (Function_112(&Var2))
	{
	}
	bVar8 = Function_103(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), 0, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_111(&Var2, 1);
	Function_51(&Var2);
	return;
}

int Function_331() //Position: 0xB55F / 46431
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_332(&Local_98 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_37710].f_32))
		{
			return 0;
		}
		if (!Function_332(&iLocal_405))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_332(int iParam0) //Position: 0xB599 / 46489
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_337();
	iVar1 = 0;
	if (!Function_84(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_336(iParam0[iVar03], 8);
		}
		else if (Function_335())
		{
			iVar1 = 1;
			Function_336(iParam0[iVar03], 8);
		}
		Function_336(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_84(iParam0[iVar03], 4))
		{
			if (!Function_84(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_84(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_84(iParam0[03], 8) || iVar1));
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
				Function_336(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_84(iParam0[iVar03], 4))
		{
			if (!Function_84(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_336(iParam0[iVar03], 2);
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
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_336(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_336(iParam0[iVar03], 2);
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
	Function_333();
	return 1;
}

void Function_333() //Position: 0xB914 / 47380
{
	if (!Function_334(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_334(int iParam0) //Position: 0xB954 / 47444
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_335() //Position: 0xB970 / 47472
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

void Function_336(var uParam0, int iParam1) //Position: 0xB99B / 47515
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_337() //Position: 0xB9AC / 47532
{
	if (!Function_334(128))
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

void Function_338(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB9EE / 47598
{
	Function_339(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_339(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBA05 / 47621
{
	if (!Function_305(iParam1))
	{
		return;
	}
	Function_340(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_340(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBA28 / 47656
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

void Function_341(int iParam0, bool bParam1) //Position: 0xBA52 / 47698
{
	Function_345(iParam0);
	Function_345(iParam0 + 228);
	if (bParam1)
	{
		Function_342(iParam0);
	}
	return;
}

void Function_342(int iParam0) //Position: 0xBA6E / 47726
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_343(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_343(var uParam0, int iParam1) //Position: 0xBA8E / 47758
{
	Function_344(uParam0, iParam1, 0);
	return;
}

void Function_344(int iParam0, int iParam1, int iParam2) //Position: 0xBA9C / 47772
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_345(int iParam0) //Position: 0xBAAD / 47789
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_347(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_346(iParam0, 0.0f);
	return;
}

void Function_346(var uParam0, int iParam1) //Position: 0xBADA / 47834
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_347(var uParam0) //Position: 0xBAE6 / 47846
{
	Function_340(uParam0, 4294967295, 0, 1);
	return;
}

void Function_348() //Position: 0xBAF4 / 47860
{
	Function_349(&Local_98 + 4, 477, 2, 1);
	Function_349(&Local_98 + 4, 478, 2, 1);
	Function_349(&Local_98 + 4, 479, 2, 1);
	Function_349(&Local_98 + 4, 483, 2, 1);
	Function_349(&Local_98 + 4, 480, 2, 1);
	Function_349(&Local_98 + 4, 481, 2, 1);
	Function_349(&Local_98 + 4, 482, 2, 1);
	Function_349(&Local_98 + 4, 485, 2, 1);
	Function_349(&Local_98 + 4, 484, 2, 1);
	return;
}

var Function_349(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xBB6F / 47983
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_84(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_336(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_336(uParam0[iVar03], 8);
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

void Function_350() //Position: 0xBC3F / 48191
{
	Function_349(&iLocal_405, 372, 2, 1);
	Function_349(&iLocal_405, 373, 2, 1);
	Function_351(&iLocal_405, "mp_action_areas", 10, 0);
	return;
}

var Function_351(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBC79 / 48249
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_352(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_336(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_352(var uParam0, int iParam1, int iParam2) //Position: 0xBCB1 / 48305
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_84(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_336(uParam0[iVar03], 4);
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

void Function_353(var uParam0, float fParam1) //Position: 0xBD75 / 48501
{
	Function_354(uParam0, -fParam1);
	return;
}

void Function_354(var uParam0, float fParam1) //Position: 0xBD83 / 48515
{
	Function_61();
	Function_355(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_355(var uParam0, int iParam1) //Position: 0xBD97 / 48535
{
	uParam0->f_4 = iParam1;
	Function_32(uParam0, 1);
	Function_31(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_356(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xBDB4 / 48564
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_357(uParam4);
		if (0 == iVar0)
		{
			Function_66(uParam0, uParam2, 0, 4294967295, 4294967295);
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

int Function_357(float fParam0) //Position: 0xBDFA / 48634
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

void Function_358() //Position: 0xBE2E / 48686
{
	switch (iLocal_628)
	{
		case 0x00000000:
			if ((!iLocal_417 && !(&Local_377 + 16)->f_32) && IS_ACTOR_VALID(Function_38()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_98.f_228))
				{
					iLocal_417 = 1;
					Function_366(1);
				}
			}
			break;
		
		case 0x00000001:
			if ((!iLocal_416 && !(&Local_377 + 16)->f_36) && IS_ACTOR_VALID(Function_38()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_98.f_276))
				{
					iLocal_416 = 1;
					Function_366(2);
				}
			}
			break;
		
		case 0x00000002:
			if ((!iLocal_618 && !iLocal_421) && IS_ACTOR_VALID(Function_38()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_38(), Local_98.f_300))
				{
					iLocal_421 = 1;
					Function_366(3);
				}
			}
			break;
		
		case 0x00000003:
			if ((&Local_377 + 16)->f_32 && !iLocal_419)
			{
				iLocal_419 = 1;
				Function_361();
			}
			break;
		
		case 0x00000004:
			if ((&Local_377 + 16)->f_36 && !iLocal_418)
			{
				iLocal_418 = 1;
				Function_359();
			}
			break;
	}
	iLocal_628++;
	if (iLocal_628 >= 4)
	{
		iLocal_628 = 0;
	}
	return;
}

void Function_359() //Position: 0xBF2A / 48938
{
	Function_251(&Local_377, 0);
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
		Function_360();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_232(&Local_98 + 136, bLocal_616);
		Function_231(Local_98.f_136, bLocal_18, 0, 0);
	}
	return;
}

void Function_360() //Position: 0xBF60 / 48992
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_136 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_Court2_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c2_01", 484, -2692,892f, 67,26273f, 3483,591f, 0.0f, 77,96707f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_136);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_234(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c2_02", 482, -2703,305f, 67,26273f, 3482,781f, 0.0f, 77,96707f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_136);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c2_03", 479, -2690,925f, 67,26273f, 3494,206f, 0.0f, 77,96707f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_136);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_c2_04", 483, -2684,316f, 67,26273f, 3487,728f, 0.0f, 77,96707f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_136);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_234(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_361() //Position: 0xC146 / 49478
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_437)
	{
		Function_227(iLocal_437[iVar0], 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_453)
	{
		Function_227(iLocal_453[iVar0], 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_446)
	{
		Function_227(iLocal_446[iVar0], 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_464)
	{
		Function_227(iLocal_464[iVar0], 1);
		iVar0++;
	}
	OPEN_DOOR_DIRECTION(iLocal_464[0], false);
	ADD_TO_VOLUME_SET(Local_98.f_172, Local_98.f_208);
	Function_251(&Local_377, 0);
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
		Function_365();
		Function_364();
		Function_363();
		Function_362();
		NET_OBJECT_REPLICATION_MODE_END(15);
		Function_232(&Local_98 + 128, bLocal_616);
		Function_231(Local_98.f_128, bLocal_18, 0, 0);
	}
	return;
}

void Function_362() //Position: 0xC222 / 49698
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_m_01", 478, -2669,222f, 71,69341f, 3463,462f, 0.0f, -82,65762f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 23, 0,40202f, 1, 1);
	Function_234(bVar0, 3);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 27, 50.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_m_02", 480, -2670,677f, 71,70589f, 3463,622f, 0.0f, -82,65762f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_m_03", 479, -2667,42f, 71,66889f, 3464,24f, 0.0f, -82,65762f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_m_04", 482, -2668,967f, 71,61678f, 3465,408f, 0.0f, -82,65762f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_363() //Position: 0xC3ED / 50157
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_k_01", 483, -2653,905f, 67,52412f, 3453,146f, 0.0f, 77,96707f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_k_02", 485, -2654,556f, 67,46977f, 3447,759f, 0.0f, 116,3189f, 0.0f);
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_364() //Position: 0xC4CF / 50383
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_124 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_RightWingTop_Wave"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_rt_01", 481, -2679,804f, 71,76867f, 3416,428f, 0.0f, -72,97276f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_124);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_rt_02", 482, -2670,975f, 71,76867f, 3409,875f, 0.0f, -72,97276f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_124);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	Function_234(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_rt_03", 485, -2672,073f, 71,76867f, 3414,585f, 0.0f, -72,97276f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_124);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_234(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_365() //Position: 0xC660 / 50784
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_98.f_128 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_98, "FOM_RightWingBottom_Wave"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_rb_01", 478, -2674,973f, 67,60025f, 3412,043f, 0.0f, -175,7547f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_128);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_234(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_98, "fom_guard_rb_02", 477, -2666,34f, 67,60025f, 3413,281f, 0.0f, 185,6854f, 0.0f);
	SQUAD_JOIN(bVar0, Local_98.f_128);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,5f, 1, 1);
	Function_234(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_366(int iParam0) //Position: 0xC77D / 51069
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_4 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	vVar0.z = iParam0;
	NET_SCRIPTMSG_SEND(3, 82, &vVar0, 3, 1);
	return;
}

bool Function_367(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xC7A3 / 51107
{
	if (!Function_407())
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
		Function_402();
	}
	Function_400(3);
	Function_399();
	if (StackVal != 0)
	{
		Function_397(bLocal_40, *uParam1, uParam2, 1);
		Function_396(uParam0);
	}
	if (StackVal >= bLocal_42)
	{
		bLocal_42 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_393(uParam0);
	}
	switch (iLocal_16)
	{
		case 0x00000000:
		case 0x00000003:
			Function_379(54417, 54097);
			break;
		
		case 0x00000002:
			Function_379(51618, 51304);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_368(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xC868 / 51304
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_371(bParam1, uParam2, uParam3);
		bVar0 = Function_215(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_369(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_215(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_215(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_215(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_129(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_369(bool bParam0, int iParam1, int iParam2) //Position: 0xC90B / 51467
{
	var uVar0;
	
	return Function_370(bParam0, iParam1, &uVar0, iParam2);
}

int Function_370(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC91C / 51484
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

void Function_371(bool bParam0, int iParam1, char* cParam2) //Position: 0xC981 / 51585
{
	if (bParam0)
	{
		if (Function_121())
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

int Function_372() //Position: 0xC9A2 / 51618
{
	if (!Function_373(1))
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

bool Function_373(bool bParam0) //Position: 0xCA5E / 51806
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_121() || Function_378(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_376(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_121())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_374(Function_121());
	return 1;
}

void Function_374(bool bParam0) //Position: 0xCADF / 51935
{
	if (bParam0 || Function_36(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_36(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_36(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_36(1048576) || Function_36(4)) || Function_375(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_30(0x20000000, 0, 1);
	}
	return;
}

var Function_375(int iParam0, bool bParam1) //Position: 0xCB68 / 52072
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_376(var uParam0) //Position: 0xCB88 / 52104
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_377(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xCB9C / 52124
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

int Function_378(bool bParam0, bool bParam1) //Position: 0xCBE1 / 52193
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

void Function_379(int iParam0, int iParam1) //Position: 0xCC15 / 52245
{
	Function_380(iParam0, iParam1, 54090);
	return;
}

void Function_380(var uParam0, var uParam1, int iParam2) //Position: 0xCC26 / 52262
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
	if (Function_121())
	{
		Function_137(!Function_36(16));
	}
	if (Function_36(16))
	{
		Function_382(&uParam0, &uParam1, &iParam2);
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
			Function_381();
		}
		Function_30(16384, 1, 1);
	}
	else if (!Function_36(32))
	{
		Function_381();
	}
	Function_30(32768, 0, 1);
	return;
}

void Function_381() //Position: 0xCDBF / 52671
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

void Function_382(var uParam0, var uParam1, int iParam2) //Position: 0xCEC8 / 52936
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
			if (!Function_131(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_383(bVar1, 2048, 1))
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
				if (Function_369(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_369(bVar1, (4294966296 - bVar1), 1))
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

bool Function_383(bool bParam0, int iParam1, bool bParam2) //Position: 0xD040 / 53312
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_375(iParam1, bParam2);
	}
	if (!Function_131(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_384(iParam1), 64);
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

var Function_384(int iParam0) //Position: 0xD0C1 / 53441
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

int Function_385() //Position: 0xD34A / 54090
{
	return 1;
}

int Function_386(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xD351 / 54097
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_371(bParam1, iParam2, cParam3);
	iVar0 = Function_390(bParam0);
	if (iVar0 == Function_389())
	{
		iVar1 = ((CEIL(Function_387(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_387(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_369(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_383(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_387(int iParam0, bool bParam1) //Position: 0xD3E9 / 54249
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_388(iParam0);
	}
	if (!Function_131(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_388(int iParam0) //Position: 0xD452 / 54354
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_389() //Position: 0xD462 / 54370
{
	return Global_78480;
}

int Function_390(bool bParam0) //Position: 0xD46C / 54380
{
	if (!Function_131(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_389();
	}
	return Global_76943[bParam096];
}

int Function_391() //Position: 0xD491 / 54417
{
	if (!Function_373(1))
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
	Function_392();
	return 1;
}

void Function_392() //Position: 0xD52D / 54573
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

void Function_393(int iParam0) //Position: 0xD56A / 54634
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
		Function_395(&bLocal_18);
		iLocal_17 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_22)
	{
		if (iLocal_22[iVar1] >= 4294967295)
		{
			iLocal_22[iVar1] = 4294967295;
			Function_394(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_394(int iParam0) //Position: 0xD5E3 / 54755
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_395(int iParam0) //Position: 0xD60E / 54798
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

void Function_396(int iParam0) //Position: 0xD655 / 54869
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
							Function_98(bVar1);
							vVar3 = { StackVal, StackVal, Function_98(bVar1) };
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

int Function_397(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xD791 / 55185
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
						if (Function_398(bVar4) == bParam1)
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

int Function_398(bool bParam0) //Position: 0xD873 / 55411
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

void Function_399() //Position: 0xD8CD / 55501
{
	Function_400(4);
	return;
}

void Function_400(int iParam0) //Position: 0xD8D7 / 55511
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
			Function_401(iParam0);
		}
	}
	return;
}

void Function_401(int iParam0) //Position: 0xD909 / 55561
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_402() //Position: 0xD918 / 55576
{
	bool bVar0;
	
	if (!iLocal_21)
	{
		bVar0 = Function_38();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				if (Function_404(bVar0, bLocal_18, 1, 0, 0, -1.0f))
				{
					Function_403();
					iLocal_21 = 1;
				}
			}
		}
	}
	return;
}

void Function_403() //Position: 0xD94D / 55629
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_404(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xD966 / 55654
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_406(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, iLocal_47);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_405(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
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

bool Function_405(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD9CF / 55759
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

int Function_406(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDABC / 55996
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

bool Function_407() //Position: 0xDB6A / 56170
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

void Function_408(bool bParam0) //Position: 0xDB8D / 56205
{
	if (Function_418(bParam0))
	{
		switch (NET_ACTOR_GET_SCRIPT_INT(bParam0))
		{
			case 0x00000001:
				SQUAD_JOIN(bParam0, bLocal_422);
				break;
			
			case 0x00000002:
				SQUAD_JOIN(bParam0, bLocal_423);
				break;
			
			case 0x00000006:
				SQUAD_JOIN(bParam0, bLocal_424);
				break;
			
			case 0x00000005:
				SQUAD_JOIN(bParam0, bLocal_428);
				Function_417(bLocal_428, 200.0f, 0x40400000, 0x40000000);
				Function_416(bLocal_428, 100.0f);
				Function_415(bLocal_428, 1, 3212836864);
				break;
			
			case 0x00000003:
				SQUAD_JOIN(bParam0, bLocal_425);
				break;
			
			case 0x00000004:
				SQUAD_JOIN(bParam0, bLocal_426);
				break;
			
			case 0x00000007:
				Function_412(&bParam0, 75.0f, 0.0f, 1.0f, 2.0f, 0, 1, 9, 5);
				SQUAD_JOIN(bParam0, bLocal_429);
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(bParam0, 110.0f);
				break;
			
			case 0x00000010:
				SQUAD_JOIN(bParam0, bLocal_430);
				break;
			
			case 0x00000011:
				SQUAD_JOIN(bParam0, bLocal_431);
				break;
			
			case 0x0000001A:
				SQUAD_JOIN(bParam0, bLocal_432);
				bLocal_415 = bParam0;
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_415)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_415));
				}
				ADD_BLIP_FOR_ACTOR(bLocal_415, 392, 0, 2, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_415, (GET_ACTOR_MAX_HEALTH(bLocal_415) * 2.0f));
				SET_ACTOR_HEALTH(bLocal_415, (GET_ACTOR_HEALTH(bLocal_415) * 2.0f));
				break;
			
			case 0x0000001B:
				SQUAD_JOIN(bParam0, bLocal_433);
				break;
			
			case 0x0000001C:
				SQUAD_JOIN(bParam0, bLocal_434);
				break;
			
			default:
				SQUAD_JOIN(bParam0, bLocal_427);
				break;
			}
	}
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
	Function_234(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	Function_411(bParam0);
	Function_409(bParam0, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
	return;
}

void Function_409(bool bParam0, bool bParam1) //Position: 0xDD3D / 56637
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
	fVar1 = Function_410(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_410(int iParam0) //Position: 0xDD81 / 56705
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

void Function_411(bool bParam0) //Position: 0xDE14 / 56852
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

void Function_412(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, var uParam7, var uParam8) //Position: 0xDED3 / 57043
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		Function_414(*uParam0, bParam1, fParam2, fParam3);
		SET_ACTOR_VISION_MAX_RANGE(*uParam0, (GET_ACTOR_VISION_MAX_RANGE(*uParam0) * fParam4), 1);
		SET_ACTOR_VISION_MAX_RANGE(*uParam0, (GET_ACTOR_VISION_MAX_RANGE(*uParam0) * fParam4), 1);
		SET_ACTOR_VISION_XRAY(*uParam0, bParam5);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*uParam0, 5, bParam6);
		Function_413(uParam0, uParam7, uParam8);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_GENERIC_ASSAULT was passed an invalid actor");
	}
}

void Function_413(var uParam0, bool bParam1, bool bParam2) //Position: 0xDF6F / 57199
{
	DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam0);
	if (bParam2 != 4294967295)
	{
		GIVE_WEAPON_TO_ACTOR(*uParam0, bParam2, 0.0f, 1, 1);
	}
	GIVE_WEAPON_TO_ACTOR(*uParam0, bParam1, 1.0f, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(*uParam0, bParam1, 1);
	return;
}

void Function_414(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xDFA1 / 57249
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_415(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDFE8 / 57320
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
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
			GET_POSITION(bVar1, &uVar2);
			bVar5 = GET_HEADING(bVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar1, &uVar2, bVar5, bParam2);
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_416(bool bParam0, bool bParam1) //Position: 0xE041 / 57409
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_417(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE09A / 57498
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
			Function_414(bVar1, uParam1, uParam2, uParam3);
		}
		bVar0++;
	}
}

bool Function_418(bool bParam0) //Position: 0xE0E0 / 57568
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_419(bParam0))
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

bool Function_419(bool bParam0) //Position: 0xE12D / 57645
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

void Function_420(var uParam0, int iParam1) //Position: 0xE15A / 57690
{
	if (!Function_64(uParam0))
	{
		Function_353(uParam0, iParam1);
	}
	return;
}

bool Function_421(int iParam0) //Position: 0xE170 / 57712
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
	if (!Function_437(16, 0))
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
	Function_436(iParam0 + 16 + 8);
	Function_273(iParam0, 58776);
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
	Function_427(2);
	Function_426(1);
	iVar3 = 58148;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 58029);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 57990);
	return 1;
}

void Function_422(int iParam0) //Position: 0xE286 / 57990
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

void Function_423(int iParam0) //Position: 0xE2AD / 58029
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

void Function_424(int iParam0) //Position: 0xE324 / 58148
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
				Function_425(&bLocal_18, &iVar5);
			}
		}
	}
	return;
}

void Function_425(var uParam0, int iParam1) //Position: 0xE371 / 58225
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

void Function_426(int iParam0) //Position: 0xE3C6 / 58310
{
	Function_40(&Global_83864 + 1252, iParam0);
	return;
}

void Function_427(int iParam0) //Position: 0xE3D8 / 58328
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
	Function_165();
	Function_166();
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
	Function_429(0, 0);
	Function_428();
	return;
}

void Function_428() //Position: 0xE49C / 58524
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_429(bool bParam0, bool bParam1) //Position: 0xE4B5 / 58549
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_434(&Global_78480);
	Function_433(&Global_78480);
	uVar0 = Function_218(37);
	Function_431();
	if (!bParam0)
	{
		Function_212(37, uVar0);
	}
	Function_94(18264, 0);
	Function_430();
	return;
}

void Function_430() //Position: 0xE501 / 58625
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_431() //Position: 0xE520 / 58656
{
	Function_432(&Global_78480 + 220);
	return;
}

void Function_432(int iParam0) //Position: 0xE52F / 58671
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

void Function_433(int iParam0) //Position: 0xE550 / 58704
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

void Function_434(int iParam0) //Position: 0xE574 / 58740
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

void Function_435(var uParam0) //Position: 0xE598 / 58776
{
	uParam0 = uParam0;
	return;
}

void Function_436(int iParam0) //Position: 0xE5A2 / 58786
{
	if (!Function_64(iParam0))
	{
		Function_354(iParam0, 0.0f);
	}
	return;
}

bool Function_437(var uParam0, bool bParam1) //Position: 0xE5B7 / 58807
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_438("freemodetest");
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

int Function_438(bool bParam0) //Position: 0xE66A / 58986
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

