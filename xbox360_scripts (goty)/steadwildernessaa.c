//Decompiled with MagicRDR v1.0
//Function Count : 368
//Statics Count : 183
//Natives Count : 364
//Parameters Count : 2

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
	char* cLocal_99 = NULL;
	bool bLocal_100 = false;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	struct<9> Local_103 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	bool bLocal_130 = false;
	var uLocal_131 = 8;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	bool bLocal_156 = false;
	bool bLocal_157 = false;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	bool bLocal_160 = false;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	bool bLocal_164 = false;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = false;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	cLocal_99 = "dlcx_";
	bLocal_100 = 100;
	iLocal_101 = 0;
	iLocal_174 = 1;
	if (!Function_348(&vLocal_103, uScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (!IS_EXITFLAG_SET() && Function_93())
	{
		WAIT(false);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x76 / 118
{
	if (NET_SCRIPT_GET_NUM_PARTICIPANTS() == 1)
	{
		if (SQUAD_IS_VALID(bLocal_156))
		{
			SQUAD_GOALS_CLEAR(bLocal_156);
			Function_92(bLocal_156);
			Function_91(bLocal_156);
		}
		if (IS_ACTORSET_VALID(bLocal_19))
		{
			Function_87(bLocal_19, Global_78576, -1.0f, -1.0f, 1, 1);
		}
	}
	if (IS_BLIP_VALID(bLocal_160))
	{
		REMOVE_BLIP(bLocal_160);
	}
	Function_86();
	Function_82(&uLocal_131);
	Function_71(bLocal_130);
	RELEASE_LAYOUT_REF(bLocal_130);
	Function_68(vLocal_103.x);
	Function_2(&vLocal_103);
	return;
}

void Function_2(int iParam0) //Position: 0xD8 / 216
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

void Function_3(int iParam0) //Position: 0x1B4 / 436
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x1C6 / 454
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x1D2 / 466
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

void Function_6() //Position: 0x1F2 / 498
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x227 / 551
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

int Function_8(float fParam0, var uParam1, bool bParam2) //Position: 0x2E2 / 738
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x312 / 786
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x32E / 814
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x54E / 1358
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

var Function_12() //Position: 0xB7B / 2939
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB83 / 2947
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB94 / 2964
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

struct<32> Function_15(char* cParam0, bool bParam1) //Position: 0xC89 / 3209
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xCA2 / 3234
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_17(int iParam0, int iParam1) //Position: 0xD07 / 3335
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_18(int iParam0, bool bParam1) //Position: 0xD19 / 3353
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xD2B / 3371
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

int Function_20(int iParam0) //Position: 0xE5B / 3675
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE6A / 3690
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xEA3 / 3747
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xEE0 / 3808
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x107A / 4218
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

void Function_25(int iParam0, float fParam1) //Position: 0x12BE / 4798
{
	Function_26(iParam0, (Function_27(iParam0) + fParam1));
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x12D1 / 4817
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_27(int iParam0) //Position: 0x12FA / 4858
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_28() //Position: 0x130A / 4874
{
	if (Function_30())
	{
		return (Function_29() != 1 || Function_29() != 0);
	}
	return 0;
}

int Function_29() //Position: 0x1323 / 4899
{
	return Global_79349.f_16;
}

bool Function_30() //Position: 0x132F / 4911
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_31() //Position: 0x1338 / 4920
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

void Function_32() //Position: 0x1392 / 5010
{
	Function_33(1024, 0, 1);
	Function_33(1, 0, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, int iParam2) //Position: 0x13A6 / 5030
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

void Function_34(var uParam0, int iParam1) //Position: 0x13CE / 5070
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_35(int iParam0, int iParam1) //Position: 0x13E1 / 5089
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_36() //Position: 0x13F0 / 5104
{
	if (Function_38())
	{
		Function_37();
	}
	Function_33(4096, 0, 1);
	return;
}

void Function_37() //Position: 0x1407 / 5127
{
	Function_33(32768, 1, 0);
	return;
}

bool Function_38() //Position: 0x1416 / 5142
{
	return (Function_39(4096) || Function_39(4));
}

bool Function_39(bool bParam0) //Position: 0x1427 / 5159
{
	return Function_40(Global_76905.f_132, bParam0);
}

bool Function_40(var uParam0, bool bParam1) //Position: 0x1438 / 5176
{
	return (uParam0 && bParam1) == 0;
}

var Function_41() //Position: 0x1445 / 5189
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_42(int iParam0) //Position: 0x145A / 5210
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

void Function_43(var uParam0, int iParam1) //Position: 0x14B3 / 5299
{
	Function_35(uParam0, iParam1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x14C0 / 5312
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, false, 0, 0, 0, 0);
	return;
}

struct<32> Function_45(int iParam0) //Position: 0x14D5 / 5333
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

bool Function_46(int iParam0) //Position: 0x1592 / 5522
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_47(int iParam0) //Position: 0x15A8 / 5544
{
	Function_48(&Global_79338, iParam0);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x15B7 / 5559
{
	Function_34(uParam0, iParam1);
	return;
}

void Function_49(int iParam0) //Position: 0x15C4 / 5572
{
	Function_48(&Global_83864 + 1252, iParam0);
	return;
}

void Function_50(int iParam0) //Position: 0x15D6 / 5590
{
	Function_48(&Global_78617 + 52, iParam0);
	return;
}

void Function_51(int iParam0) //Position: 0x15E7 / 5607
{
	Function_48(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_52() //Position: 0x1620 / 5664
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_53() //Position: 0x1637 / 5687
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

void Function_54(int iParam0) //Position: 0x1659 / 5721
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_55() //Position: 0x1667 / 5735
{
	Function_56();
	return;
}

void Function_56() //Position: 0x1670 / 5744
{
	Function_57(4294967286);
	return;
}

void Function_57(bool bParam0) //Position: 0x167C / 5756
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

void Function_58(var uParam0, int iParam1) //Position: 0x16B9 / 5817
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_59(int iParam0) //Position: 0x16C8 / 5832
{
	Local_49 = *iParam0;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x16D3 / 5843
{
	*uParam0 = iParam1;
	return;
}

void Function_61(int iParam0) //Position: 0x16DE / 5854
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_62(int iParam0) //Position: 0x16EC / 5868
{
	*iParam0 = Local_49;
	return;
}

float Function_63(int iParam0) //Position: 0x16F7 / 5879
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

void Function_64() //Position: 0x17C8 / 6088
{
	if (!Function_65())
	{
	}
	return;
}

bool Function_65() //Position: 0x17D5 / 6101
{
	return NET_IS_IN_SESSION();
}

bool Function_66(int iParam0) //Position: 0x17DE / 6110
{
	return Function_40(*iParam0, 2);
}

bool Function_67(int iParam0) //Position: 0x17EB / 6123
{
	return Function_40(*iParam0, 1);
}

void Function_68(int iParam0) //Position: 0x17F8 / 6136
{
	Function_70(&(Global_29008[iParam0]), 16);
	Function_70(&(Global_29008[iParam0]), 64);
	Function_70(&(Global_29008[iParam0]), 4);
	Function_69(64);
	return;
}

void Function_69(int iParam0) //Position: 0x1826 / 6182
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x1839 / 6201
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_71(int iParam0) //Position: 0x1850 / 6224
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

void Function_72(bool bParam0) //Position: 0x1874 / 6260
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

void Function_73(bool bParam0, bool bParam1) //Position: 0x18B8 / 6328
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

int Function_74(bool bParam0, bool bParam1) //Position: 0x1935 / 6453
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

void Function_75(int iParam0) //Position: 0x1959 / 6489
{
	Function_48(&Global_79337, iParam0);
	return;
}

void Function_76(int iParam0) //Position: 0x1968 / 6504
{
	Function_43(&Global_79337, iParam0);
	return;
}

bool Function_77(int iParam0) //Position: 0x1977 / 6519
{
	return Function_78(Global_79337, iParam0);
}

int Function_78(var uParam0, int iParam1) //Position: 0x1986 / 6534
{
	return (uParam0 && iParam1) == 0;
}

void Function_79(bool bParam0) //Position: 0x1993 / 6547
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

void Function_80(bool bParam0) //Position: 0x1A32 / 6706
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

void Function_81(bool bParam0) //Position: 0x1A63 / 6755
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

void Function_82(int iParam0) //Position: 0x1AAE / 6830
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

void Function_83(var uParam0, int iParam1) //Position: 0x1AD4 / 6868
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

void Function_84(var uParam0, int iParam1) //Position: 0x1C02 / 7170
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_85(int iParam0, int iParam1) //Position: 0x1C1C / 7196
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_86() //Position: 0x1C39 / 7225
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_87(bool bParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1C45 / 7237
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = Function_88(bVar1, uParam1);
			TASK_FLEE_ACTOR(bVar1, bVar2, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

var Function_88(var uParam0, bool bParam1) //Position: 0x1C95 / 7317
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(bParam1) != 0 || !IS_ACTORSET_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0)))
		{
			fVar3 = Function_89(uParam0, GET_ACTOR_FROM_ACTORSET(bParam1, bVar0));
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(bParam1, bVar1);
	}
	return "";
}

float Function_89(bool bParam0, bool bParam1) //Position: 0x1D1B / 7451
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_90(&uVar0, &uVar3);
	return iVar6;
}

var Function_90(var uParam0, int iParam1) //Position: 0x1D3A / 7482
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_91(bool bParam0) //Position: 0x1D58 / 7512
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_92(bool bParam0) //Position: 0x1D9F / 7583
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_93() //Position: 0x1DD4 / 7636
{
	bool bVar0;
	
	if (!Function_304(&vLocal_103, &bLocal_130, 41393, 1, 1))
	{
		return 0;
	}
	if (vLocal_103.y < 0 && vLocal_103.y > 11)
	{
		if (IS_ACTOR_ALIVE(Function_41()))
		{
			bVar0 = IS_ACTOR_IN_VOLUME(Function_41(), bLocal_159);
		}
		if (iLocal_176)
		{
			if (bVar0)
			{
				iLocal_176 = 0;
				Function_303(&uLocal_161, (5.0f - 1.0f));
			}
		}
		else
		{
			SET_BLIP_VISIBLE(bLocal_160, !bVar0);
			if (bVar0 && !bLocal_177)
			{
				Function_86();
			}
			if (iLocal_175)
			{
				if (!bVar0)
				{
					if (!Function_302())
					{
						if (IS_ACTOR_ALIVE(Function_41()))
						{
							Function_300("stead_MP_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_299(&uLocal_161);
							iLocal_175 = 0;
						}
					}
				}
			}
			else if (Function_297(&uLocal_161) < 5.0f)
			{
				iLocal_175 = 1;
			}
		}
	}
	bLocal_177 = bVar0;
	switch (vLocal_103.y)
	{
		case 0x00000000:
			Function_252();
			break;
		
		case 0x00000001:
			Function_250();
			break;
		
		case 0x00000002:
			Function_249();
			break;
		
		case 0x00000003:
			Function_248();
			break;
		
		case 0x00000004:
			Function_237();
			break;
		
		case 0x00000005:
			Function_231();
			break;
		
		case 0x0000000B:
			Function_94();
			break;
	}
	return 1;
}

void Function_94() //Position: 0x1EF2 / 7922
{
	int iVar0;
	
	switch (vLocal_103.z)
	{
		case 0x00000000:
			iVar0 = (Function_230(322) - iLocal_173);
			iVar0 = Function_17(iVar0, 0);
			Function_86();
			if (IS_BLIP_VALID(bLocal_160))
			{
				REMOVE_BLIP(bLocal_160);
			}
			Function_229(29, iVar0);
			vLocal_103.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_95(&vLocal_103);
			break;
	}
	return;
}

var Function_95(int iParam0) //Position: 0x1F48 / 8008
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
				Function_152(iParam0);
				Function_149(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_148())
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
				Function_147("MP_AA_already_finished");
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
			AUDIO_MUSIC_ONE_SHOT(Function_146(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_41()))
				{
					Function_144(Function_41(), 0);
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
			Function_139(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_133(*iParam0, Function_134());
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
						Function_139(iParam0);
					}
					else if (iLocal_17 == 1)
					{
						Function_130();
					}
				}
				else if (Function_129(15, 1, 1))
				{
					Function_128(1);
					Function_7(iParam0);
				}
				else if (Function_129(13, 1, 1))
				{
					Function_128(0);
					Function_7(iParam0);
				}
				else if (Function_127())
				{
					if (iLocal_17 == 1)
					{
						Function_139(iParam0);
					}
					else if (iLocal_17 == 2)
					{
						Function_130();
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
							Function_128(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_128(0);
						}
					}
				}
				else if (!iLocal_93)
				{
					iLocal_93 = 1;
					Function_5();
				}
			}
			Function_125();
			switch (Function_122(iParam0))
			{
				case 0x00000001:
					if (Function_108(99, 1, 0x3f800000))
					{
						Function_147("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_107(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_106(Global_12976.f_36);
							if (Function_103(StackVal, StackVal, Function_106(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_96 = 11;
					}
					break;
				
				case 0x00000000:
					Function_147("mp_aa_vote_skip_passed");
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
			if (!Function_102(8))
			{
				Function_101(1792, 0);
				Function_96(1, 0, 0);
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

void Function_96(var uParam0, bool bParam1, int iParam2) //Position: 0x2482 / 9346
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
			Function_100(&(Global_29008[Global_29006]), 131072);
			Function_70(&(Global_29008[Global_29006]), 2097152);
			Function_98(Global_29006);
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
				if (Function_97(&(Global_29008[iVar0]), 4) || Function_97(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_70(&(Global_29008[iVar0]), 2097155);
					Function_100(&(Global_29008[iVar0]), 262144);
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

bool Function_97(var uParam0, int iParam1) //Position: 0x258D / 9613
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_98(int iParam0) //Position: 0x25A9 / 9641
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_99())
			{
				return;
			}
		}
		if (!Function_97(&(Global_29008[iParam0]), 2048))
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

bool Function_99() //Position: 0x2628 / 9768
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_97(&(Global_29008[iVar0]), 4) || Function_97(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_100(var uParam0, int iParam1) //Position: 0x2691 / 9873
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_101(int iParam0, bool bParam1) //Position: 0x26A0 / 9888
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

bool Function_102(int iParam0) //Position: 0x26DB / 9947
{
	return Function_78(Global_78617.f_52, iParam0);
}

bool Function_103(vector3 vParam0) //Position: 0x26EC / 9964
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_105(&uVar0);
	iVar9 = Function_104(StackVal, StackVal, vParam0, 1, 1, 0);
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

var Function_104(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2760 / 10080
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

void Function_105(int iParam0) //Position: 0x27FB / 10235
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

vector3 Function_106(bool bParam0) //Position: 0x2859 / 10329
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_107(int iParam0) //Position: 0x286A / 10346
{
	Function_43(&Global_78617 + 52, iParam0);
	return;
}

bool Function_108(bool bParam0, bool bParam1, float fParam2) //Position: 0x287B / 10363
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_121(bParam0);
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
	if (Function_120(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_119(&Var0, 0);
		Function_54(&Var0);
		Function_56();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_118(bParam0, iVar6, &uVar7))
	{
		if (Function_117())
		{
			if (!Function_116(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, true, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_115(&Var0, 1);
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
				if (Function_109(bParam0))
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

bool Function_109(int iParam0) //Position: 0x2ACE / 10958
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_114(bVar0))
		{
			iVar1 = Function_110(bVar0);
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

int Function_110(bool bParam0) //Position: 0x2B11 / 11025
{
	int iVar0;
	
	Function_113(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_62(&iVar0);
	}
	else
	{
		Function_112(&iVar0, bParam0);
	}
	return Function_111(&iVar0);
}

int Function_111(int iParam0) //Position: 0x2B38 / 11064
{
	return *iParam0;
}

void Function_112(var uParam0, int iParam1) //Position: 0x2B41 / 11073
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_113(int iParam0) //Position: 0x2B50 / 11088
{
	Function_60(iParam0, 4294967286);
	return;
}

bool Function_114(bool bParam0) //Position: 0x2B5E / 11102
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_115(var uParam0, bool bParam1) //Position: 0x2B6B / 11115
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

bool Function_116(bool bParam0) //Position: 0x2B85 / 11141
{
	return Function_40(*bParam0, 2);
}

bool Function_117() //Position: 0x2B92 / 11154
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

bool Function_118(int iParam0, var uParam1, int iParam2) //Position: 0x2BB0 / 11184
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
		if (Function_114(iVar0))
		{
			iVar1 = Function_110(iVar0);
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

void Function_119(int iParam0, bool bParam1) //Position: 0x2C01 / 11265
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

bool Function_120(int iParam0) //Position: 0x2C1B / 11291
{
	return Function_40(*iParam0, 1);
}

void Function_121(int iParam0) //Position: 0x2C28 / 11304
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_62(&iVar1);
	if (Function_111(&iVar1) != bVar0)
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
		Function_115(&Var2, 0);
		Function_54(&Var2);
	}
	return;
}

bool Function_122(int iParam0) //Position: 0x2D25 / 11557
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
		if (Function_124(bVar4))
		{
			switch (Function_123(bVar4))
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

int Function_123(int iParam0) //Position: 0x2F61 / 12129
{
	return StackVal;
}

bool Function_124(bool bParam0) //Position: 0x2F6F / 12143
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_125() //Position: 0x2F85 / 12165
{
	Function_126(8);
	Function_299(&Global_79298);
	return;
}

void Function_126(int iParam0) //Position: 0x2F97 / 12183
{
	Function_43(&Global_79338, iParam0);
	return;
}

bool Function_127() //Position: 0x2FA6 / 12198
{
	return Function_39(32768);
}

void Function_128(bool bParam0) //Position: 0x2FB3 / 12211
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_50(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_129(int iParam0, int iParam1, bool bParam2) //Position: 0x2FDE / 12254
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

void Function_130() //Position: 0x308B / 12427
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_132();
	Function_131();
	iLocal_17 = 2;
	return;
}

void Function_131() //Position: 0x30C6 / 12486
{
	Function_33(1025, 1, 0);
	return;
}

void Function_132() //Position: 0x30D4 / 12500
{
	if (!Function_38())
	{
		Function_37();
	}
	Function_33(4096, 1, 1);
	return;
}

void Function_133(var uParam0, var uParam1) //Position: 0x30EC / 12524
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_134() //Position: 0x3111 / 12561
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
		if (Function_124(iVar2))
		{
			iVar3 = Function_135(iVar2);
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

int Function_135(bool bParam0) //Position: 0x3150 / 12624
{
	return Function_136(0, bParam0);
}

int Function_136(int iParam0, bool bParam1) //Position: 0x315C / 12636
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_138(iParam0);
	}
	if (!Function_137(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_137(bool bParam0) //Position: 0x31C3 / 12739
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

int Function_138(int iParam0) //Position: 0x3264 / 12900
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_139(int iParam0) //Position: 0x3274 / 12916
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_143(1);
	Function_132();
	Function_131();
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
	itos(&cVar0, Function_138(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_142());
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
	Function_140(0, Function_63(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_17 = 1;
	return;
}

void Function_140(bool bParam0, int iParam1) //Position: 0x3698 / 13976
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_141(iParam1) };
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

struct<16> Function_141(var uParam0) //Position: 0x38C5 / 14533
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

int Function_142() //Position: 0x3936 / 14646
{
	return Function_226(12);
}

void Function_143(bool bParam0) //Position: 0x3941 / 14657
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_33(16384, 0, 1);
	return;
}

void Function_144(bool bParam0, bool bParam1) //Position: 0x395B / 14683
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
	else if (!bParam1 || Function_145(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_145(bool bParam0, bool bParam1) //Position: 0x39B8 / 14776
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_146(int iParam0) //Position: 0x39D7 / 14807
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_147(bool bParam0) //Position: 0x3A35 / 14901
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, false, 0, 0, 0, 0);
	return;
}

bool Function_148() //Position: 0x3A49 / 14921
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_149(int iParam0) //Position: 0x3A58 / 14936
{
	Function_151(iParam0, Global_30668[2], &Global_56612, 0);
	Function_151(iParam0, Global_30679[1], &Global_56612, 1);
	Function_151(iParam0, Global_30658[0], &Global_56612, 2);
	Function_151(iParam0, Global_30658[3], &Global_56612, 3);
	Function_151(iParam0, Global_30685[2], &Global_56612, 4);
	Function_151(iParam0, Global_30640[2], &Global_56612, 6);
	Function_151(iParam0, Global_30685[1], &Global_56612, 5);
	Function_151(iParam0, Global_30658[2], &Global_56612, 7);
	Function_150(iParam0, Global_30668[2], &Global_56688, 0);
	Function_150(iParam0, Global_30679[1], &Global_56688, 1);
	Function_150(iParam0, Global_30658[0], &Global_56688, 2);
	Function_150(iParam0, Global_30658[3], &Global_56688, 3);
	Function_150(iParam0, Global_30685[2], &Global_56688, 4);
	Function_150(iParam0, Global_30640[2], &Global_56688, 6);
	Function_150(iParam0, Global_30685[1], &Global_56688, 5);
	Function_150(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_150(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3B4E / 15182
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_142();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_142();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_142();
	}
}

void Function_151(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3C12 / 15378
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_142();
	}
}

void Function_152(int iParam0) //Position: 0x3C53 / 15443
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_225(*iParam0) };
	Function_223(iParam0);
	Function_229(13, iParam0->f_92);
	Function_229(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_138(2));
	if (iParam0->f_104)
	{
		Function_222(3, 5);
	}
	else
	{
		Function_222(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_138(3));
	Function_125();
	Function_229(13, iParam0->f_92);
	Function_229(0, iParam0->f_92);
	iLocal_95 = 1;
	Function_153(Var0, 4294967295, 0, 0, 1);
	return;
}

void Function_153(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3CC8 / 15560
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_221(5, 1);
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
	Function_154(bParam2);
}

void Function_154(bool bParam0) //Position: 0x3DE4 / 15844
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_126(2);
	if (bParam0)
	{
		Function_126(1);
	}
	else
	{
		Function_47(1);
	}
	Function_155();
	return;
}

void Function_155() //Position: 0x3E6D / 15981
{
	Function_167();
	Function_166();
	Function_166();
	Function_165();
	Function_165();
	Function_164();
	Function_164();
	Function_162(0);
	Function_162(0);
	if (!Function_30())
	{
		Function_160();
		Function_159();
		Function_158();
		Function_157();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_156();
	return;
}

void Function_156() //Position: 0x3EBF / 16063
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

void Function_157() //Position: 0x3FC5 / 16325
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

void Function_158() //Position: 0x3FF8 / 16376
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

void Function_159() //Position: 0x4188 / 16776
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

void Function_160() //Position: 0x433C / 17212
{
	Function_161(&Global_28260, 1, 0);
	return;
}

void Function_161(int iParam0, bool bParam1, int iParam2) //Position: 0x434A / 17226
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

struct<8> Function_162(int iParam0) //Position: 0x453B / 17723
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
					iVar2 = ((Function_230((50 + iVar4)) + Function_230((183 + iVar4))) + Function_230((90 + iVar4)));
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
	Function_163(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_163(int iParam0, bool bParam1, bool bParam2) //Position: 0x45E1 / 17889
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

struct<8> Function_164() //Position: 0x487C / 18556
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
		iVar2 = ((Function_230((50 + iVar3) + 15) + Function_230((183 + iVar3) + 15)) + Function_230((90 + iVar3) + 15));
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
	Function_163(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_165() //Position: 0x4905 / 18693
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
			iVar2 = ((Function_230((50 + iVar3) + 8) + Function_230((183 + iVar3) + 8)) + Function_230((90 + iVar3) + 8));
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
	Function_163(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_166() //Position: 0x499C / 18844
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
		iVar2 = ((Function_230((50 + iVar3)) + Function_230((183 + iVar3))) + Function_230((90 + iVar3)));
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
	Function_163(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_167() //Position: 0x4A1B / 18971
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_168(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_163(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_168(int iParam0, bool bParam1, int iParam2) //Position: 0x4A54 / 19028
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

void Function_169(int iParam0) //Position: 0x4C5E / 19550
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

bool Function_170() //Position: 0x4D05 / 19717
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_171(var uParam0, var uParam1, bool bParam2) //Position: 0x4D10 / 19728
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

void Function_172() //Position: 0x4D55 / 19797
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

void Function_173() //Position: 0x4D7F / 19839
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

void Function_174(bool bParam0) //Position: 0x4DDF / 19935
{
	Global_56092[*bParam0] = 0;
	Function_175(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_175(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4DF9 / 19961
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

void Function_176(bool bParam0, bool bParam1) //Position: 0x4EB0 / 20144
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

bool Function_177(int iParam0, bool bParam1) //Position: 0x4ED5 / 20181
{
	return Function_40(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_178(int iParam0) //Position: 0x4EE9 / 20201
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_179(int iParam0) //Position: 0x4F1D / 20253
{
	return Global_50170[iParam022].f_24;
}

void Function_180(var uParam0, var uParam1, int iParam2) //Position: 0x4F2C / 20268
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_220(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_213(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_219(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_212(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_175(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_220(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_213(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_219(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_212(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_175(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_220(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_181(17, 150, Function_219(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_212(iParam2, bVar0, 50);
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

void Function_181(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x50D5 / 20693
{
	Function_210(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_179(iParam0), 1.0f, false, 0);
	Function_206(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_203(iParam3);
	}
	Function_197(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_182();
}

void Function_182() //Position: 0x513B / 20795
{
	if (!Function_30())
	{
		if (!Function_196(1, 3, 1, 1))
		{
			Function_184(1);
			Function_183(1, 8);
		}
	}
	else
	{
		Function_154(0);
	}
	return;
}

void Function_183(var uParam0, int iParam1) //Position: 0x5164 / 20836
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

void Function_184(bool bParam0) //Position: 0x51A6 / 20902
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
	Function_155();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_34(&Global_63095, 1);
		Function_34(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_185() //Position: 0x51F7 / 20983
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_195())
	{
		Function_192(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_192(&Global_34165 + 12, &Global_34165 + 16) };
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

bool Function_186(vector3 vParam0) //Position: 0x52B2 / 21170
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_187(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x52CA / 21194
{
	int iVar0;
	
	iVar0 = Function_190(uParam2, uParam3);
	if (Function_189(iVar0))
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
	Function_188();
	return StackVal, StackVal, Function_188();
}

vector3 Function_188() //Position: 0x53B1 / 21425
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_189(int iParam0) //Position: 0x53BA / 21434
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_190(bool bParam0, bool bParam1) //Position: 0x53D0 / 21456
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
				fVar2 = Function_191(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_191(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_189(bVar0) && !bParam1)
	{
		bVar0 = Function_190(bParam0, 1);
	}
	return bVar0;
}

float Function_191(vector3 vParam0, vector3 vParam3) //Position: 0x5497 / 21655
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_192(var uParam0, int iParam1) //Position: 0x54B4 / 21684
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_194(Global_34573, &vVar4);
	if (!Function_193(Global_30640[0]))
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
	if (!Function_193(Global_30640[2]))
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
	if (!Function_193(Global_30640[1]))
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
	if (!Function_193(Global_30658[1]))
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
	if (!Function_193(Global_30658[3]))
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
	if (!Function_193(Global_30658[2]))
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
	if (!Function_193(Global_30658[4]))
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
	if (!Function_193(Global_30668[0]))
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
	if (!Function_193(Global_30668[1]))
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
	if (!Function_193(Global_30668[2]))
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
	if (!Function_193(Global_30679[0]))
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
	if (!Function_193(Global_30685[0]))
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
	if (!Function_193(Global_30685[1]))
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
	if (!Function_193(Global_30685[2]))
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
	if (!Function_193(Global_30693[0]))
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
	if (!Function_193(Global_30693[1]))
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
	if (!Function_193(Global_30693[2]))
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
	if (!Function_193(Global_30707[2]))
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
	if (!Function_193(Global_30707[3]))
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
	if (!Function_193(Global_30707[0]))
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
	if (!Function_193(Global_30717[0]))
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
	if (!Function_193(Global_30723[2]))
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
	if (!Function_193(Global_30723[1]))
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
	if (!Function_193(Global_30723[0]))
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
	if (!Function_193(Global_30679[1]))
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
	if (!Function_193(Global_30707[1]))
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

bool Function_193(int iParam0) //Position: 0x5CD9 / 23769
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_40(uVar0, 0x1000000) || Function_40(uVar0, 0x2000000)) || Function_40(uVar0, 0x4000000)) || !Function_40(uVar0, 0x10000000));
}

void Function_194(bool bParam0, bool bParam1) //Position: 0x5D14 / 23828
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_195() //Position: 0x5D21 / 23841
{
	if (Function_40(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_196(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5D3C / 23868
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

void Function_197(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5DE0 / 24032
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_202();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_201(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_200(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_199(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_198(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_201(), iVar1 + 1);
	return;
}

struct<16> Function_198(int iParam0) //Position: 0x5E52 / 24146
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_199(int iParam0) //Position: 0x5E73 / 24179
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_200(int iParam0) //Position: 0x5E94 / 24212
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_201() //Position: 0x5EB5 / 24245
{
	return "CQueue_Count";
}

var Function_202() //Position: 0x5ECA / 24266
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_203(int iParam0) //Position: 0x5EF9 / 24313
{
	Function_204(iParam0, 1);
	return;
}

void Function_204(int iParam0, bool bParam1) //Position: 0x5F05 / 24325
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_35(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_205((iVar0 % 32)));
	}
	else
	{
		Function_34(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_205((iVar0 % 32)));
	}
	return;
}

int Function_205(bool bParam0) //Position: 0x5F5B / 24411
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_206(int iParam0, int iParam1) //Position: 0x5F67 / 24423
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_209(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_179(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_208(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_207(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_179(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_179(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_179(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_207(int iParam0) //Position: 0x5FE9 / 24553
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_208(int iParam0) //Position: 0x6009 / 24585
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_209(int iParam0) //Position: 0x603A / 24634
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

void Function_210(bool bParam0, bool bParam1) //Position: 0x61B8 / 25016
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_211();
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

var Function_211() //Position: 0x6304 / 25348
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_212(var uParam0, bool bParam1, bool bParam2) //Position: 0x6351 / 25425
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_213(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x6369 / 25449
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
	Function_197(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_212(&fParam5, bParam8, iParam9);
	Function_175(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_215(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_203(iParam12);
	}
	Function_214(iParam0, 4);
	Function_182();
}

void Function_214(int iParam0, int iParam1) //Position: 0x63DF / 25567
{
	Function_34(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_215(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x63F3 / 25587
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_209(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_179(iParam0));
	if ((bParam3 && Function_177(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_179(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_208(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_178(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_218(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_207(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_179(iParam0), &Var7, 0, 2, Function_177(iParam0, 4));
			if (!bParam3)
			{
				Function_216(iParam0, 4);
			}
		}
	}
}

void Function_216(int iParam0, int iParam1) //Position: 0x64B0 / 25776
{
	Function_35(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_217(int iParam0) //Position: 0x64C4 / 25796
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_218(int iParam0) //Position: 0x64F2 / 25842
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_219() //Position: 0x6522 / 25890
{
	return "MP_Unstoppable_Icon_128";
}

float Function_220(int iParam0) //Position: 0x6542 / 25922
{
	return Global_50170[iParam022].f_12;
}

void Function_221(int iParam0, int iParam1) //Position: 0x6551 / 25937
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_222(int iParam0, int iParam1) //Position: 0x6576 / 25974
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_223(int iParam0) //Position: 0x659F / 26015
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

void Function_224(var uParam0, int iParam1, int iParam2) //Position: 0x662E / 26158
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

struct<20> Function_225(int iParam0) //Position: 0x6653 / 26195
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

int Function_226(int iParam0) //Position: 0x690F / 26895
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_227() //Position: 0x6928 / 26920
{
	return Function_138(0);
}

void Function_228(int iParam0) //Position: 0x6932 / 26930
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

void Function_229(int iParam0, int iParam1) //Position: 0x69FA / 27130
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_230(bool bParam0) //Position: 0x6A14 / 27156
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

void Function_231() //Position: 0x6A55 / 27221
{
	switch (vLocal_103.z)
	{
		case 0x00000000:
			Function_236(&vLocal_103, 0);
			vLocal_103.f_8 = 6;
			Function_233(&iLocal_167);
			break;
		
		case 0x00000006:
			if (Function_232(bLocal_156) < 0)
			{
				if (Function_108(11, 1, 0x3f800000))
				{
					vLocal_103.f_8 = 106;
				}
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			else
			{
				Function_55();
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
				if (!iLocal_178)
				{
					Function_300("stead_MP_killRemainder", 7.5f, 1, 2, 1, 0, 0, 0);
					iLocal_178 = 1;
				}
			}
			break;
		
		case 0x0000006A:
			vLocal_103.f_8 = 0;
			vLocal_103.f_4 = 11;
			break;
	}
	return;
}

int Function_232(bool bParam0) //Position: 0x6B0B / 27403
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

void Function_233(int iParam0) //Position: 0x6B5B / 27483
{
	if (!Function_235(iParam0))
	{
		Function_234(iParam0, 0.0f);
	}
	return;
}

void Function_234(int iParam0, float fParam1) //Position: 0x6B70 / 27504
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_35(iParam0, 1);
	Function_34(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_235(int iParam0) //Position: 0x6B91 / 27537
{
	return Function_40(*iParam0, 1);
}

void Function_236(var uParam0, bool bParam1) //Position: 0x6B9E / 27550
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

void Function_237() //Position: 0x6BD5 / 27605
{
	switch (vLocal_103.z)
	{
		case 0x00000000:
			Function_236(&vLocal_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_247();
				Function_239();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_238(bLocal_156, bLocal_19, 0, 0);
				Function_238(bLocal_157, bLocal_19, 0, 0);
			}
			vLocal_103.f_8 = 6;
			Function_233(&iLocal_167);
			break;
		
		case 0x00000006:
			if (Function_232(bLocal_157) < 0)
			{
				if (Function_108(5, 1, 0x3f800000))
				{
					vLocal_103.f_8 = 106;
				}
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			else
			{
				Function_55();
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
				if (!iLocal_180)
				{
					if (IS_ACTOR_ALIVE(bLocal_158))
					{
						Function_300("stead_MP_obj02", 7.5f, 1, 2, 1, 0, 0, 0);
						iLocal_180 = 1;
					}
				}
			}
			break;
		
		case 0x0000006A:
			vLocal_103.f_8 = 0;
			vLocal_103.f_4 = 5;
			break;
	}
	return;
}

void Function_238(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6CB2 / 27826
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

void Function_239() //Position: 0x6D34 / 27956
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	
	iVar0 = Function_246();
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	vVar1 = { -4015.165f, 22.47003f, 2411.512f };
	fVar4 = 20.0f;
	fVar5 = 70.0f;
	switch (iVar0)
	{
		case 0x00000003:
			Function_240(StackVal, StackVal, vVar1, 1089, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1091, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1088, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1093, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1090, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1092, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1089, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1091, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1088, 81975, fVar4, fVar5);
		
		case 0x00000002:
			Function_240(StackVal, StackVal, vVar1, 1093, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1092, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1090, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1089, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1091, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1088, 81975, fVar4, fVar5);
		
		case 0x00000001:
			Function_240(StackVal, StackVal, vVar1, 1089, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1091, 81975, fVar4, fVar5);
			Function_240(StackVal, StackVal, vVar1, 1088, 81975, fVar4, fVar5);
			break;
	}
	return;
}

var Function_240(vector3 vParam0, int iParam3, bool bParam4, float fParam5, float fParam6) //Position: 0x6EDA / 28378
{
	var uVar0;
	bool bVar4;
	
	Function_244(&uVar0, vLocal_103.x);
	bVar4 = Function_243(StackVal, StackVal, vParam0, &bLocal_130, iParam3, &uVar0, fParam5, fParam6);
	if (IS_ACTOR_VALID(bVar4))
	{
		Function_242(bVar4);
		if (bParam4 == 81975)
		{
			SQUAD_JOIN(bVar4, bLocal_156);
		}
		else if (bParam4 == 34020)
		{
			SQUAD_JOIN(bVar4, bLocal_157);
		}
		SET_ACTOR_VOLUME_PARAMETERS(bVar4, 4, 1);
		ADD_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar4);
		NET_ACTOR_SET_SCRIPT_INT(bVar4, bParam4);
		Function_241(bVar4, 10, "COMMON_NULL");
	}
	return bVar4;
}

int Function_241(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6F64 / 28516
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

void Function_242(bool bParam0) //Position: 0x6FAA / 28586
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 75.0f);
		SET_ACTOR_HEALTH(bParam0, 75.0f);
		TASK_CLEAR(bParam0);
	}
	return;
}

var Function_243(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x6FD1 / 28625
{
	var uVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(fParam6, bParam7);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	bVar10 = AMBIENT_GET_POINT(&uVar0, 0);
	if (bVar10)
	{
	}
	else
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
		bVar10 = AMBIENT_GET_POINT(&uVar0, 0);
	}
	if (bVar10)
	{
		vVar11.x = 0.0f;
		vVar11.f_8 = 0.0f;
		vVar11.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&uVar0, 5.0f, &vVar3, &uVar6))
		{
			if (!Function_186(StackVal, StackVal, vVar3))
			{
				bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar11);
			}
		}
	}
	return bVar9;
}

void Function_244(char* cParam0, bool bParam1) //Position: 0x7070 / 28784
{
	strcpy(cParam0, Function_245(), 16);
	stradd(cParam0, INT_TO_STRING(bParam1), 16);
	stradd(cParam0, "_", 16);
	stradd(cParam0, &Global_29155[bParam110] + 20, 16);
	bLocal_100++;
	stradd(cParam0, INT_TO_STRING(bLocal_100), 16);
	return;
}

var Function_245() //Position: 0x70AA / 28842
{
	return cLocal_99;
}

var Function_246() //Position: 0x70B2 / 28850
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

void Function_247() //Position: 0x70E1 / 28897
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	vVar0 = { -4015.165f, 22.47003f, 2411.512f };
	fVar3 = 20.0f;
	fVar4 = 70.0f;
	bLocal_158 = Function_240(StackVal, StackVal, vVar0, 1087, 34020, fVar3, fVar4);
	if (IS_ACTOR_VALID(bLocal_158))
	{
		SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_158, 392, 0, 2, 0), "stead_MP_BossName");
		SET_ACTOR_MAX_HEALTH(bLocal_158, (GET_ACTOR_MAX_HEALTH(bLocal_158) * 2.5f));
	}
	return;
}

void Function_248() //Position: 0x7156 / 29014
{
	switch (vLocal_103.z)
	{
		case 0x00000000:
			Function_236(&vLocal_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_239();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_238(bLocal_156, bLocal_19, 0, 0);
			}
			if (!iLocal_179)
			{
				Function_300("stead_MP_obj01", 7.5f, 1, 2, 1, 0, 0, 0);
				iLocal_179 = 1;
			}
			vLocal_103.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_232(bLocal_156) < 0)
			{
				if (Function_108(4, 1, 0x3f800000))
				{
					vLocal_103.f_8 = 106;
				}
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			else
			{
				Function_55();
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			break;
		
		case 0x0000006A:
			vLocal_103.f_8 = 0;
			vLocal_103.f_4 = 4;
			break;
	}
	return;
}

void Function_249() //Position: 0x721A / 29210
{
	switch (vLocal_103.z)
	{
		case 0x00000000:
			Function_236(&vLocal_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_239();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_238(bLocal_156, bLocal_19, 0, 0);
			}
			if (!iLocal_179)
			{
				Function_300("stead_MP_obj01", 7.5f, 1, 2, 1, 0, 0, 0);
				iLocal_179 = 1;
			}
			vLocal_103.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_232(bLocal_156) < 0)
			{
				if (Function_108(3, 1, 0x3f800000))
				{
					vLocal_103.f_8 = 106;
				}
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			else
			{
				Function_55();
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			break;
		
		case 0x0000006A:
			vLocal_103.f_8 = 0;
			vLocal_103.f_4 = 4;
			break;
	}
	return;
}

void Function_250() //Position: 0x72DE / 29406
{
	switch (vLocal_103.z)
	{
		case 0x00000000:
			Function_236(&vLocal_103, 0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_239();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_238(bLocal_156, bLocal_19, 0, 0);
			}
			Function_251(&bLocal_156, iLocal_174);
			Function_300("stead_MP_obj01", 7.5f, 1, 2, 1, 0, 0, 0);
			iLocal_179 = 1;
			vLocal_103.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_232(bLocal_156) < 0)
			{
				if (Function_108(2, 1, 0x3f800000))
				{
					vLocal_103.f_8 = 106;
				}
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			else
			{
				Function_55();
				if (Function_297(&bLocal_164) < 4.0f)
				{
					Function_299(&bLocal_164);
				}
			}
			break;
		
		case 0x0000006A:
			vLocal_103.f_8 = 0;
			vLocal_103.f_4 = 2;
			break;
	}
	return;
}

void Function_251(var uParam0, int iParam1) //Position: 0x73A3 / 29603
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

void Function_252() //Position: 0x743F / 29759
{
	switch (vLocal_103.z)
	{
		case 0x00000000:
			if (Function_284(&vLocal_103))
			{
				Function_280();
				vLocal_103.f_8 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_273())
			{
				vLocal_103.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			bLocal_130 = CREATE_LAYOUT("steadWilderness");
			Function_271(&vLocal_103, bLocal_130);
			Function_269();
			Function_268();
			Function_266(bLocal_130, vLocal_103.x);
			Function_257(vLocal_103.x, bLocal_130);
			iLocal_173 = Function_230(322);
			iLocal_176 = 1;
			fLocal_44 = 5.0f;
			Function_233(&bLocal_164);
			vLocal_103.f_8 = 106;
			break;
		
		case 0x0000006A:
			Function_253(&vLocal_103);
			break;
	}
	return;
}

void Function_253(var uParam0) //Position: 0x74DD / 29917
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_255(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_255(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_254();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_254() //Position: 0x75BF / 30143
{
	bLocal_92 = true;
	return;
}

void Function_255(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x75C8 / 30152
{
	if (iParam0 == Global_30668[2])
	{
		Function_256(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_256(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_256(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_256(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_256(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_256(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_256(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_256(7);
	}
}

void Function_256(int iParam0) //Position: 0x765D / 30301
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

void Function_257(int iParam0, bool bParam1) //Position: 0x76F2 / 30450
{
	Function_100(&(Global_29008[iParam0]), 16);
	Function_100(&(Global_29008[iParam0]), 64);
	Function_100(&(Global_29008[iParam0]), 4);
	Function_69(64);
	Function_262(2, 4294967295, 4294967295, 0, 3);
	Function_258(StackVal, 0, 0.0f, 3, bParam1, 1);
	return;
}

void Function_258(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x773A / 30522
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_261();
	}
	if (bParam5)
	{
		Function_259(1048576);
	}
}

void Function_259(int iParam0) //Position: 0x784D / 30797
{
	Function_260(&Global_28842, iParam0);
	return;
}

void Function_260(var uParam0, var uParam1) //Position: 0x785B / 30811
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_261() //Position: 0x7876 / 30838
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_259(16384);
	}
	return;
}

void Function_262(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x7892 / 30866
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_263();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_263() //Position: 0x7976 / 31094
{
	int iVar0;
	
	Global_26960 = Function_264(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_264(int iParam0) //Position: 0x79C4 / 31172
{
	if (!Function_265(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_265(int iParam0) //Position: 0x79DC / 31196
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_266(bool bParam0, bool bParam1) //Position: 0x79F1 / 31217
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_267(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_30())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_267(var uParam0, var uParam1) //Position: 0x7AEB / 31467
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &uParam1);
	return;
}

void Function_268() //Position: 0x7AF8 / 31480
{
	bLocal_156 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_130, "AnimalSquad"));
	bLocal_157 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_130, "nBossSquad"));
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_156, 0, 1, 4294967295);
	TASK_ANIMAL_PATROL(StackVal, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_157, 0, 1, 4294967295);
	TASK_ANIMAL_PATROL(StackVal, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_156, 0);
	return;
}

void Function_269() //Position: 0x7B67 / 31591
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_130, "SpawnVol_0_set");
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_0", 2, -3996.229f, 20.58046f, 2440.722f, 0.0f, 206.729f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_1", 2, -4012.156f, 21.05478f, 2386.455f, 0.0f, 29.619f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_2", 2, -4021.333f, 21.56637f, 2387.077f, 0.0f, 293.823f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_3", 2, -3963.81f, 21.18161f, 2402.008f, 0.0f, 273.389f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_4", 2, -3981.117f, 21.0824f, 2424.0f, 0.0f, 242.046f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_5", 2, -4053.399f, 21.10386f, 2405.956f, 0.0f, 443.229f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_6", 2, -4048.674f, 20.42101f, 2423.884f, 0.0f, 471.494f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_7", 2, -4033.971f, 19.77394f, 2436.0f, 0.0f, 147.95f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_8", 2, -4016.519f, 19.57653f, 2447.481f, 0.0f, 177.709f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_9", 2, -3993.429f, 20.58043f, 2428.0f, 0.0f, 221.514f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_10", 2, -4021.827f, 19.80584f, 2434.173f, 0.0f, 523.553f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "SpawnVol_0_sub_11", 2, -3981.953f, 21.08242f, 2389.977f, 0.0f, 300.139f, 0.0f, 4.0f, 8.0f, 4.0f);
	ADD_TO_VOLUME_SET(bVar0, bVar1);
	bLocal_159 = CREATE_VOLUME_IN_LAYOUT(bLocal_130, "mpaa_warning_vol", 3, -4011.384f, 21.468f, 2412.499f, 0.0f, 20.0f, 0.0f, 66.923f, 50.0f, 66.75157f);
	bLocal_160 = Function_270(bLocal_159, 330, 0.0f);
	SET_BLIP_VISIBLE(bLocal_160, false);
	return;
}

bool Function_270(bool bParam0, bool bParam1, float fParam2) //Position: 0x7ECC / 32460
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == bParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, bParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_271(var uParam0, bool bParam1) //Position: 0x7F19 / 32537
{
	Function_272(bParam1);
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
		Function_236(uParam0, 1);
	}
	Function_42(256);
	Function_107(64);
	Function_72(0);
	return;
}

void Function_272(var uParam0) //Position: 0x7F8A / 32650
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_273() //Position: 0x7F98 / 32664
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_274(&uLocal_131))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_274(int iParam0) //Position: 0x7FB1 / 32689
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_279();
	iVar1 = 0;
	if (!Function_85(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_278(iParam0[iVar03], 8);
		}
		else if (Function_277())
		{
			iVar1 = 1;
			Function_278(iParam0[iVar03], 8);
		}
		Function_278(iParam0[iVar03], 16);
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
				Function_278(iParam0[iVar03], 1);
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
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
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
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
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
	Function_275();
	return 1;
}

void Function_275() //Position: 0x832E / 33582
{
	if (!Function_276(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_276(int iParam0) //Position: 0x836E / 33646
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_277() //Position: 0x838A / 33674
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

void Function_278(var uParam0, int iParam1) //Position: 0x83B5 / 33717
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_279() //Position: 0x83C6 / 33734
{
	if (!Function_276(128))
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

void Function_280() //Position: 0x8408 / 33800
{
	Function_282(&uLocal_131, "mp_action_areas", 10, 0);
	Function_281(&uLocal_131, 1088, 3, 0);
	Function_281(&uLocal_131, 1089, 3, 0);
	Function_281(&uLocal_131, 1090, 3, 0);
	Function_281(&uLocal_131, 1087, 3, 0);
	Function_281(&uLocal_131, 1091, 3, 0);
	Function_281(&uLocal_131, 1092, 3, 0);
	Function_281(&uLocal_131, 1093, 3, 0);
	return;
}

var Function_281(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8476 / 33910
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
			Function_278(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_278(uParam0[iVar03], 8);
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

var Function_282(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8546 / 34118
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_283(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_278(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_283(var uParam0, int iParam1, int iParam2) //Position: 0x857E / 34174
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_85(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_278(uParam0[iVar03], 4);
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

bool Function_284(int iParam0) //Position: 0x8642 / 34370
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_295(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_294();
			Function_293(&uLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_292())
			{
				iLocal_98 = 2;
			}
			else if (Function_288(&uLocal_45))
			{
				Function_294();
				Function_285(&uLocal_45, 5.0f);
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

void Function_285(var uParam0, float fParam1) //Position: 0x86EE / 34542
{
	Function_286(uParam0, -fParam1);
	return;
}

void Function_286(var uParam0, float fParam1) //Position: 0x86FC / 34556
{
	Function_64();
	Function_287(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_287(var uParam0, int iParam1) //Position: 0x8710 / 34576
{
	uParam0->f_4 = iParam1;
	Function_35(uParam0, 1);
	Function_34(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_288(int iParam0) //Position: 0x872D / 34605
{
	if (Function_290(iParam0))
	{
		Function_289(iParam0);
		return 1;
	}
	return 0;
}

void Function_289(int iParam0) //Position: 0x8743 / 34627
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_290(int iParam0) //Position: 0x8757 / 34647
{
	if (Function_67(iParam0))
	{
		if (Function_291(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_291(float fParam0) //Position: 0x8772 / 34674
{
	return -Function_63(fParam0);
}

bool Function_292() //Position: 0x877E / 34686
{
	return iLocal_20;
}

void Function_293(int iParam0, var uParam1) //Position: 0x8786 / 34694
{
	if (!Function_67(iParam0))
	{
		Function_285(iParam0, uParam1);
	}
	return;
}

void Function_294() //Position: 0x879C / 34716
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_295(bool bParam0) //Position: 0x87C8 / 34760
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 34842);
	return;
}

void Function_296(bool bParam0) //Position: 0x881A / 34842
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
	if (Function_120(&Var2))
	{
	}
	bVar8 = Function_111(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_119(&Var2, 1);
	Function_54(&Var2);
	return;
}

float Function_297(bool bParam0) //Position: 0x891D / 35101
{
	if (Function_235(bParam0))
	{
		if (Function_298(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_298(int iParam0) //Position: 0x89E5 / 35301
{
	return Function_40(*iParam0, 2);
}

void Function_299(bool bParam0) //Position: 0x89F2 / 35314
{
	Function_234(bParam0, 0.0f);
	return;
}

void Function_300(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x89FE / 35326
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
			Var0 = { StackVal, StackVal, StackVal, Function_301(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_301(int iParam0) //Position: 0x8A83 / 35459
{
	char* cVar0[16];
	
	if (!Function_195())
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

bool Function_302() //Position: 0x8AC2 / 35522
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_303(var uParam0, int iParam1) //Position: 0x8ACF / 35535
{
	if (!Function_235(uParam0))
	{
		Function_234(uParam0, iParam1);
	}
	return;
}

bool Function_304(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x8AE5 / 35557
{
	if (!Function_346())
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
		Function_341();
	}
	Function_339(3);
	Function_338();
	if (StackVal != 0)
	{
		Function_336(bLocal_41, *uParam1, uParam2, 1);
		Function_335(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_332(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_317(39455, 38803);
			break;
		
		case 0x00000002:
			Function_317(36180, 35756);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_305(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x8BAC / 35756
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_309(bParam1, uParam2, uParam3);
		bVar0 = Function_308(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_306(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_308(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_308(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_308(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_135(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_306(bool bParam0, bool bParam1, int iParam2) //Position: 0x8C4F / 35919
{
	var uVar0;
	
	return Function_307(bParam0, bParam1, &uVar0, iParam2);
}

int Function_307(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8C60 / 35936
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

int Function_308(int iParam0, bool bParam1) //Position: 0x8CC5 / 36037
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
	if (!Function_137(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_309(bool bParam0, int iParam1, bool bParam2) //Position: 0x8D33 / 36147
{
	if (bParam0)
	{
		if (Function_127())
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

int Function_310() //Position: 0x8D54 / 36180
{
	if (!Function_311(1))
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

bool Function_311(bool bParam0) //Position: 0x8E10 / 36368
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_127() || Function_316(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_314(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_127())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_312(Function_127());
	return 1;
}

void Function_312(bool bParam0) //Position: 0x8E91 / 36497
{
	if (bParam0 || Function_39(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_39(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_39(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_39(1048576) || Function_39(4)) || Function_313(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_33(0x20000000, 0, 1);
	}
	return;
}

var Function_313(int iParam0, bool bParam1) //Position: 0x8F1A / 36634
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_314(var uParam0) //Position: 0x8F3A / 36666
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_315(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_315(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x8F4E / 36686
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

int Function_316(bool bParam0, bool bParam1) //Position: 0x8F93 / 36755
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

void Function_317(int iParam0, int iParam1) //Position: 0x8FC7 / 36807
{
	Function_318(iParam0, iParam1, 38796);
	return;
}

void Function_318(var uParam0, var uParam1, int iParam2) //Position: 0x8FD8 / 36824
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
	if (Function_127())
	{
		Function_143(!Function_39(16));
	}
	if (Function_39(16))
	{
		Function_320(&uParam0, &uParam1, &iParam2);
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
			Function_319();
		}
		Function_33(16384, 1, 1);
	}
	else if (!Function_39(32))
	{
		Function_319();
	}
	Function_33(32768, 0, 1);
	return;
}

void Function_319() //Position: 0x9171 / 37233
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

void Function_320(var uParam0, var uParam1, int iParam2) //Position: 0x927A / 37498
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
			if (!Function_137(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_321(bVar1, 2048, 1))
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
				if (Function_306(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_306(bVar1, (4294966296 - bVar1), 1))
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

bool Function_321(bool bParam0, int iParam1, bool bParam2) //Position: 0x93F2 / 37874
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_313(iParam1, bParam2);
	}
	if (!Function_137(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_322(iParam1), 64);
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

var Function_322(int iParam0) //Position: 0x9473 / 38003
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

int Function_323() //Position: 0x978C / 38796
{
	return 1;
}

int Function_324(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9793 / 38803
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
	
	Function_309(bParam1, iParam2, bParam3);
	iVar0 = Function_328(bParam0);
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
		bVar1 = (bVar1 + Function_18((CEIL(Function_327(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_327(8, bParam0));
	}
	if (!bParam1)
	{
		Function_306(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_326(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_326(1) == Function_328(bParam0))
		{
			if (Function_321(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_327(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_327(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_325(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_325(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_327(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_325(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_325(&iVar6), FLOOR(Function_327(9, bParam0)));
		}
		else
		{
			Function_325(&iVar6);
		}
	}
	if (Function_321(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_325(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_325(int iParam0) //Position: 0x9954 / 39252
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_326(int iParam0) //Position: 0x9967 / 39271
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_327(int iParam0, bool bParam1) //Position: 0x9987 / 39303
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_27(iParam0);
	}
	if (!Function_137(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_328(bool bParam0) //Position: 0x99F0 / 39408
{
	if (!Function_137(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_329();
	}
	return Global_76943[bParam096];
}

var Function_329() //Position: 0x9A15 / 39445
{
	return Global_78480;
}

int Function_330() //Position: 0x9A1F / 39455
{
	bool bVar0;
	int iVar1;
	
	if (!Function_311(1))
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
	if (Function_326(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_325(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_325(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_325(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_325(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_325(&iVar1), "mp_plist_mw");
	Function_331();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_325(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_331() //Position: 0x9B42 / 39746
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

void Function_332(int iParam0) //Position: 0x9B7F / 39807
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
		Function_334(&bLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_333(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_333(int iParam0) //Position: 0x9BF8 / 39928
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_334(int iParam0) //Position: 0x9C23 / 39971
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

void Function_335(var uParam0, bool bParam1) //Position: 0x9C6A / 40042
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
							Function_106(bVar1);
							vVar3 = { StackVal, StackVal, Function_106(bVar1) };
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

int Function_336(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x9DB5 / 40373
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
						if (Function_337(bVar4) == bParam1)
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

int Function_337(bool bParam0) //Position: 0x9E97 / 40599
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

void Function_338() //Position: 0x9EF1 / 40689
{
	Function_339(4);
	return;
}

void Function_339(int iParam0) //Position: 0x9EFB / 40699
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
			Function_340(iParam0);
		}
	}
	return;
}

void Function_340(bool bParam0) //Position: 0x9F2D / 40749
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_341() //Position: 0x9F3C / 40764
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_41();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				if (Function_343(bVar0, bLocal_19, 1, 0, 0, -1.0f))
				{
					Function_342();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_342() //Position: 0x9F71 / 40817
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_343(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x9F8A / 40842
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_345(bParam1, 0, 0, 0, 0, 0) < 0)
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
		if (Function_344(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_344(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x9FF3 / 40947
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

int Function_345(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xA0E0 / 41184
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

bool Function_346() //Position: 0xA18E / 41358
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

void Function_347(bool bParam0) //Position: 0xA1B1 / 41393
{
	bool bVar0;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (bVar0 != 81975 || bVar0 != 34020)
	{
		TASK_CLEAR(bParam0);
		SET_MOTIVE_BY_ENUM(bParam0, 0, 0.0f);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam0, 0.1f);
		SET_ACTOR_VOLUME_PARAMETERS(bParam0, 4, 1);
		ADD_ACTOR_STAY_WITHIN_VOLUME(StackVal, bParam0);
		if (!IS_ACTOR_IN_ACTORSET(bLocal_19, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_19, bParam0);
		}
		if (bVar0 == 34020)
		{
			SQUAD_JOIN(bParam0, bLocal_157);
			Function_241(bParam0, 100, "COMMON_NULL");
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bParam0, 392, 0.0f, 2, 0), "stead_MP_bossName");
			}
			if (bLocal_158 == "")
			{
				bLocal_158 = bParam0;
			}
		}
		else
		{
			SQUAD_JOIN(bParam0, bLocal_156);
			Function_241(bParam0, 10, "COMMON_NULL");
		}
		if (!Function_235(&iLocal_170))
		{
			Function_233(&iLocal_170);
		}
	}
	return;
}

bool Function_348(var uParam0, int iParam1) //Position: 0xA29F / 41631
{
	if (!Function_28())
	{
		return 0;
	}
	*uParam0 = iParam1;
	if (!Function_349(uParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_349(int iParam0) //Position: 0xA2BF / 41663
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
	if (!Function_366(16, 0))
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
	Function_365(iParam0 + 16 + 8);
	Function_363(iParam0, 42739);
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
	Function_355(2);
	Function_354(1);
	iVar3 = 42099;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 41980);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 41941);
	return 1;
}

void Function_350(bool bParam0) //Position: 0xA3D5 / 41941
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

void Function_351(bool bParam0) //Position: 0xA3FC / 41980
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

void Function_352(bool bParam0) //Position: 0xA473 / 42099
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
				Function_353(&bLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_353(var uParam0, int iParam1) //Position: 0xA4C0 / 42176
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

void Function_354(int iParam0) //Position: 0xA515 / 42261
{
	Function_43(&Global_83864 + 1252, iParam0);
	return;
}

void Function_355(int iParam0) //Position: 0xA527 / 42279
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
	Function_357(0, 0);
	Function_356();
	return;
}

void Function_356() //Position: 0xA5EB / 42475
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_357(bool bParam0, bool bParam1) //Position: 0xA604 / 42500
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_362(&Global_78480);
	Function_361(&Global_78480);
	uVar0 = Function_226(37);
	Function_359();
	if (!bParam0)
	{
		Function_229(37, uVar0);
	}
	Function_101(18264, 0);
	Function_358();
	return;
}

void Function_358() //Position: 0xA650 / 42576
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_359() //Position: 0xA66F / 42607
{
	Function_360(&Global_78480 + 220);
	return;
}

void Function_360(int iParam0) //Position: 0xA67E / 42622
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

void Function_361(int iParam0) //Position: 0xA69F / 42655
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

void Function_362(int iParam0) //Position: 0xA6C3 / 42691
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

void Function_363(var uParam0, int iParam1) //Position: 0xA6E7 / 42727
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_364(var uParam0) //Position: 0xA6F3 / 42739
{
	uParam0 = uParam0;
	return;
}

void Function_365(int iParam0) //Position: 0xA6FD / 42749
{
	if (!Function_67(iParam0))
	{
		Function_286(iParam0, 0.0f);
	}
	return;
}

bool Function_366(var uParam0, bool bParam1) //Position: 0xA712 / 42770
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_367("freemodetest");
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

int Function_367(bool bParam0) //Position: 0xA7C5 / 42949
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

