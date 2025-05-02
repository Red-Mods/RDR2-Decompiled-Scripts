//Decompiled with MagicRDR v1.0
//Function Count : 432
//Statics Count : 470
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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_39 = false;
	var uLocal_40 = 0;
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
	var uLocal_98 = 27;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
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
	var uLocal_155 = 27;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 17;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 6;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	bool bLocal_240 = false;
	bool bLocal_241 = false;
	bool bLocal_242 = false;
	bool bLocal_243 = false;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	bool bLocal_246 = false;
	bool bLocal_247 = false;
	struct<501> Local_248 = { 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bLocal_448 = true;
	Local_374 = Global_30685[2];
	if (!Function_415(&Local_374))
	{
		TERMINATE_THIS_SCRIPT();
	}
	while (!IS_EXITFLAG_SET() && Function_84())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x76 / 118
{
	Function_80(&iLocal_402);
	Function_69(Local_248);
	Function_68();
	Function_67(bLocal_245);
	Function_65(&uLocal_455, 1, 0, 4294967295, 4294967295);
	Function_2(&Local_374);
	UNK_0x444C3C32(1, 4, 0);
	return;
}

void Function_2(int iParam0) //Position: 0xA5 / 165
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

void Function_3(int iParam0) //Position: 0x17C / 380
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_7(iParam0);
	Function_4();
	return;
}

void Function_4() //Position: 0x18E / 398
{
	Function_6();
	Function_5();
	return;
}

void Function_5() //Position: 0x19A / 410
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

void Function_6() //Position: 0x1BA / 442
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_7(int iParam0) //Position: 0x1EF / 495
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

int Function_8(float fParam0, int iParam1) //Position: 0x2A9 / 681
{
	if (!Function_25())
	{
		Global_83822 = 1;
	}
	Function_9(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x2CA / 714
{
	Function_10(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x2E6 / 742
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

void Function_11(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x506 / 1286
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

var Function_12() //Position: 0xB33 / 2867
{
	int iVar0;
	
	return iVar0;
}

var Function_13(int iParam0) //Position: 0xB3B / 2875
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xB4C / 2892
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

struct<32> Function_15(char* cParam0, char* cParam1) //Position: 0xC41 / 3137
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xC5A / 3162
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_18(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0xCBF / 3263
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, bool bParam1) //Position: 0xCD1 / 3281
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xCE3 / 3299
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

int Function_20(int iParam0) //Position: 0xE13 / 3603
{
	return Global_35278[iParam020].f_48;
}

float Function_21(int iParam0) //Position: 0xE22 / 3618
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0xE5B / 3675
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_23(int iParam0) //Position: 0xE98 / 3736
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

int Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0x1032 / 4146
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

bool Function_25() //Position: 0x124C / 4684
{
	if (Function_27())
	{
		return (Function_26() != 1 || Function_26() != 0);
	}
	return 0;
}

int Function_26() //Position: 0x1265 / 4709
{
	return Global_79349.f_16;
}

bool Function_27() //Position: 0x1271 / 4721
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_28() //Position: 0x127A / 4730
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

void Function_29() //Position: 0x12D4 / 4820
{
	Function_30(1024, 0, 1);
	Function_30(1, 0, 0);
	return;
}

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x12E8 / 4840
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

void Function_31(int iParam0, int iParam1) //Position: 0x1310 / 4880
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_32(int iParam0, int iParam1) //Position: 0x1323 / 4899
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_33() //Position: 0x1332 / 4914
{
	if (Function_35())
	{
		Function_34();
	}
	Function_30(4096, 0, 1);
	return;
}

void Function_34() //Position: 0x1349 / 4937
{
	Function_30(32768, 1, 0);
	return;
}

bool Function_35() //Position: 0x1358 / 4952
{
	return (Function_36(4096) || Function_36(4));
}

bool Function_36(bool bParam0) //Position: 0x1369 / 4969
{
	return Function_37(Global_76905.f_132, bParam0);
}

bool Function_37(var uParam0, bool bParam1) //Position: 0x137A / 4986
{
	return (uParam0 && bParam1) == 0;
}

var Function_38() //Position: 0x1387 / 4999
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_39(int iParam0) //Position: 0x139C / 5020
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

void Function_40(var uParam0, int iParam1) //Position: 0x13F5 / 5109
{
	Function_32(uParam0, iParam1);
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1402 / 5122
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_42(int iParam0) //Position: 0x1417 / 5143
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

bool Function_43(int iParam0) //Position: 0x14D4 / 5332
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x14EA / 5354
{
	Function_45(&Global_79338, iParam0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x14F9 / 5369
{
	Function_31(uParam0, iParam1);
	return;
}

void Function_46(int iParam0) //Position: 0x1506 / 5382
{
	Function_45(&Global_83864 + 1252, iParam0);
	return;
}

void Function_47(int iParam0) //Position: 0x1518 / 5400
{
	Function_45(&Global_78617 + 52, iParam0);
	return;
}

void Function_48(int iParam0) //Position: 0x1529 / 5417
{
	Function_45(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_49() //Position: 0x1562 / 5474
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_50() //Position: 0x1579 / 5497
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

void Function_51(var uParam0) //Position: 0x159B / 5531
{
	Local_83 = { StackVal, StackVal, StackVal, StackVal, *uParam0 };
	return;
}

void Function_52() //Position: 0x15A9 / 5545
{
	Function_53();
	return;
}

void Function_53() //Position: 0x15B2 / 5554
{
	Function_54(4294967286);
	return;
}

void Function_54(bool bParam0) //Position: 0x15BE / 5566
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

void Function_55(var uParam0, int iParam1) //Position: 0x15FB / 5627
{
	Local_50[iParam12] = *uParam0;
	return;
}

void Function_56(int iParam0) //Position: 0x160A / 5642
{
	Local_48 = *iParam0;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x1615 / 5653
{
	*uParam0 = iParam1;
	return;
}

void Function_58(int iParam0) //Position: 0x1620 / 5664
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_83 };
	return;
}

void Function_59(int iParam0) //Position: 0x162E / 5678
{
	*iParam0 = Local_48;
	return;
}

float Function_60(int iParam0) //Position: 0x1639 / 5689
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

void Function_61() //Position: 0x170A / 5898
{
	if (!Function_62())
	{
	}
	return;
}

bool Function_62() //Position: 0x1717 / 5911
{
	return NET_IS_IN_SESSION();
}

bool Function_63(int iParam0) //Position: 0x1720 / 5920
{
	return Function_37(*iParam0, 2);
}

bool Function_64(int iParam0) //Position: 0x172D / 5933
{
	return Function_37(*iParam0, 1);
}

void Function_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x173A / 5946
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_66(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_66(int iParam0) //Position: 0x175E / 5982
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

void Function_67(bool bParam0) //Position: 0x1C9B / 7323
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
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_68() //Position: 0x1CDF / 7391
{
	Function_80(&Local_248 + 4);
	RELEASE_LAYOUT_REF(Local_248);
	return;
}

void Function_69(int iParam0) //Position: 0x1CF1 / 7409
{
	if (IS_ACTORSET_VALID(bLocal_18))
	{
		Function_79(bLocal_18);
	}
	Function_77(iParam0);
	Function_70(1);
	return;
}

void Function_70(bool bParam0) //Position: 0x1D0D / 7437
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_76(1);
	}
	else
	{
		Function_75(1);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_71(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_71(bool bParam0, bool bParam1) //Position: 0x1D45 / 7493
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_74(GET_LOCAL_SLOT(), bParam0) && !Function_72(2))
		{
			return;
		}
		if (!Function_72(1))
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

bool Function_72(int iParam0) //Position: 0x1D92 / 7570
{
	return Function_73(Global_79337, iParam0);
}

bool Function_73(var uParam0, int iParam1) //Position: 0x1DA1 / 7585
{
	return (uParam0 && iParam1) == 0;
}

int Function_74(bool bParam0, bool bParam1) //Position: 0x1DAE / 7598
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

void Function_75(int iParam0) //Position: 0x1DD2 / 7634
{
	Function_45(&Global_79337, iParam0);
	return;
}

void Function_76(int iParam0) //Position: 0x1DE1 / 7649
{
	Function_40(&Global_79337, iParam0);
	return;
}

void Function_77(bool bParam0) //Position: 0x1DF0 / 7664
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
			Function_78(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_78(bool bParam0) //Position: 0x1E8F / 7823
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

void Function_79(bool bParam0) //Position: 0x1EC0 / 7872
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

void Function_80(int iParam0) //Position: 0x1F0B / 7947
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_81(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x1F31 / 7985
{
	if (Function_83(uParam0[iParam13], 4))
	{
		if (Function_83(uParam0[iParam13], 1))
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
			Function_82(uParam0[iParam13], 1);
			Function_82(uParam0[iParam13], 2);
			Function_82(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x205F / 8287
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_83(int iParam0, int iParam1) //Position: 0x2079 / 8313
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_84() //Position: 0x2096 / 8342
{
	if (!Function_371(&Local_374, &Local_248, 53873, 0))
	{
		return 0;
	}
	if (StackVal != 11)
	{
		if (Function_64(&iLocal_456))
		{
			if (Function_60(&iLocal_456) <= 0.0f)
			{
				if (StackVal != 1 && !iLocal_445)
				{
					Function_369(&uLocal_455, 6, 40, 38, 10.0f);
				}
				else
				{
					Function_369(&uLocal_455, 38, 40, 38, 10.0f);
				}
				Function_368(&iLocal_456, 5.0f);
			}
		}
		else
		{
			Function_367(&iLocal_456, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_291();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_276();
			break;
		
		case 0x00000002:
			Function_231();
			UNK_0x2148AC15(322, 10);
			break;
		
		case 0x0000000B:
			Function_85();
			break;
	}
	return 1;
}

void Function_85() //Position: 0x215F / 8543
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_224();
			Function_223(bLocal_245);
			SQUAD_GOALS_CLEAR(bLocal_245);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_245, false, 0, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_248.f_172, -1.0f);
			Function_222(bLocal_245, bLocal_18, 0, 0);
			Function_222(bLocal_247, bLocal_18, 0, 0);
			Function_221();
			Function_219(StackVal, StackVal, bLocal_247, Function_221(), Global_78576, 0x43160000);
			Function_65(&uLocal_455, 1, 0, 4294967295, 4294967295);
			Local_374.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_86(&Local_374);
			break;
	}
	return;
}

var Function_86(int iParam0) //Position: 0x21DA / 8666
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
				Function_145(iParam0);
				Function_142(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_141())
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
				Function_140("MP_AA_already_finished");
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
			AUDIO_MUSIC_ONE_SHOT(Function_139(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_38()))
				{
					Function_137(Function_38(), 0);
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
			Function_132(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_126(*iParam0, Function_127());
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
						Function_132(iParam0);
					}
					else if (iLocal_16 == 1)
					{
						Function_123();
					}
				}
				else if (Function_122(15, 1, 1))
				{
					Function_121(1);
					Function_7(iParam0);
				}
				else if (Function_122(13, 1, 1))
				{
					Function_121(0);
					Function_7(iParam0);
				}
				else if (Function_120())
				{
					if (iLocal_16 == 1)
					{
						Function_132(iParam0);
					}
					else if (iLocal_16 == 2)
					{
						Function_123();
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
							Function_121(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_88))
						{
							Function_121(0);
						}
					}
				}
				else if (!iLocal_92)
				{
					iLocal_92 = 1;
					Function_5();
				}
			}
			Function_116();
			switch (Function_113(iParam0))
			{
				case 0x00000001:
					if (Function_99(99, 1, 0x3f800000))
					{
						Function_140("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_98(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_97(Global_12976.f_36);
							if (Function_95(StackVal, StackVal, Function_97(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_95 = 11;
					}
					break;
				
				case 0x00000000:
					Function_140("mp_aa_vote_skip_passed");
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
			if (!Function_94(8))
			{
				Function_93(1792, 0);
				Function_87(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_95 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_47(64);
			Function_70(1);
			iLocal_95 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_87(var uParam0, bool bParam1, int iParam2) //Position: 0x26D3 / 9939
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
			Function_92(&(Global_29008[Global_29006]), 131072);
			Function_91(&(Global_29008[Global_29006]), 2097152);
			Function_89(Global_29006);
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
				if (Function_88(&(Global_29008[iVar0]), 4) || Function_88(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_91(&(Global_29008[iVar0]), 2097155);
					Function_92(&(Global_29008[iVar0]), 262144);
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

bool Function_88(var uParam0, int iParam1) //Position: 0x27DE / 10206
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_89(int iParam0) //Position: 0x27FA / 10234
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_90())
			{
				return;
			}
		}
		if (!Function_88(&(Global_29008[iParam0]), 2048))
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

bool Function_90() //Position: 0x2879 / 10361
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_88(&(Global_29008[iVar0]), 4) || Function_88(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_91(var uParam0, int iParam1) //Position: 0x28D6 / 10454
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_92(var uParam0, int iParam1) //Position: 0x28ED / 10477
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_93(int iParam0, bool bParam1) //Position: 0x28FC / 10492
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

bool Function_94(int iParam0) //Position: 0x2937 / 10551
{
	return Function_73(Global_78617.f_52, iParam0);
}

bool Function_95(vector3 vParam0) //Position: 0x2948 / 10568
{
	var uVar0[8];
	int iVar9;
	
	Function_96(&uVar0);
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

void Function_96(int iParam0) //Position: 0x2999 / 10649
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

vector3 Function_97(bool bParam0) //Position: 0x29F7 / 10743
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_98(int iParam0) //Position: 0x2A08 / 10760
{
	Function_40(&Global_78617 + 52, iParam0);
	return;
}

bool Function_99(bool bParam0, bool bParam1, float fParam2) //Position: 0x2A19 / 10777
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_112(bParam0);
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
	if (Function_111(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_110(&Var0, 0);
		Function_51(&Var0);
		Function_53();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_109(bParam0, iVar6, &uVar7))
	{
		if (Function_108())
		{
			if (!Function_107(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_106(&Var0, 1);
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
				if (Function_100(bParam0))
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

bool Function_100(int iParam0) //Position: 0x2C6C / 11372
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_105(bVar0))
		{
			iVar1 = Function_101(bVar0);
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

int Function_101(bool bParam0) //Position: 0x2CAF / 11439
{
	int iVar0;
	
	Function_104(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_59(&iVar0);
	}
	else
	{
		Function_103(&iVar0, bParam0);
	}
	return Function_102(&iVar0);
}

int Function_102(int iParam0) //Position: 0x2CD6 / 11478
{
	return *iParam0;
}

void Function_103(var uParam0, int iParam1) //Position: 0x2CDF / 11487
{
	*uParam0 = Local_50[iParam12];
	return;
}

void Function_104(int iParam0) //Position: 0x2CEE / 11502
{
	Function_57(iParam0, 4294967286);
	return;
}

bool Function_105(bool bParam0) //Position: 0x2CFC / 11516
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_50, bParam0);
}

void Function_106(var uParam0, bool bParam1) //Position: 0x2D09 / 11529
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

bool Function_107(bool bParam0) //Position: 0x2D23 / 11555
{
	return Function_37(*bParam0, 2);
}

bool Function_108() //Position: 0x2D30 / 11568
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

bool Function_109(int iParam0, var uParam1, int iParam2) //Position: 0x2D4E / 11598
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
		if (Function_105(iVar0))
		{
			iVar1 = Function_101(iVar0);
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

void Function_110(var uParam0, bool bParam1) //Position: 0x2D9F / 11679
{
	if (bParam1)
	{
		Function_32(uParam0, 1);
	}
	else
	{
		Function_31(uParam0, 1);
	}
	return;
}

bool Function_111(int iParam0) //Position: 0x2DB9 / 11705
{
	return Function_37(*iParam0, 1);
}

void Function_112(int iParam0) //Position: 0x2DC6 / 11718
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_59(&iVar1);
	if (Function_102(&iVar1) != bVar0)
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
		Function_106(&Var2, 0);
		Function_51(&Var2);
	}
	return;
}

bool Function_113(int iParam0) //Position: 0x2EC3 / 11971
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
		if (Function_115(bVar4))
		{
			switch (Function_114(bVar4))
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

int Function_114(int iParam0) //Position: 0x30FF / 12543
{
	return StackVal;
}

bool Function_115(bool bParam0) //Position: 0x310D / 12557
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_116() //Position: 0x3123 / 12579
{
	Function_119(8);
	Function_117(&Global_79298);
	return;
}

void Function_117(int iParam0) //Position: 0x3135 / 12597
{
	Function_118(iParam0, 0.0f);
	return;
}

void Function_118(int iParam0, float fParam1) //Position: 0x3141 / 12609
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_32(iParam0, 1);
	Function_31(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_119(int iParam0) //Position: 0x3162 / 12642
{
	Function_40(&Global_79338, iParam0);
	return;
}

bool Function_120() //Position: 0x3171 / 12657
{
	return Function_36(32768);
}

void Function_121(bool bParam0) //Position: 0x317E / 12670
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_47(64);
	Local_50[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_122(int iParam0, int iParam1, bool bParam2) //Position: 0x31A9 / 12713
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

void Function_123() //Position: 0x3256 / 12886
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_125();
	Function_124();
	iLocal_16 = 2;
	return;
}

void Function_124() //Position: 0x3291 / 12945
{
	Function_30(1025, 1, 0);
	return;
}

void Function_125() //Position: 0x329F / 12959
{
	if (!Function_35())
	{
		Function_34();
	}
	Function_30(4096, 1, 1);
	return;
}

void Function_126(var uParam0, var uParam1) //Position: 0x32B7 / 12983
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_127() //Position: 0x32DC / 13020
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
		if (Function_115(iVar2))
		{
			iVar3 = Function_128(iVar2);
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

int Function_128(bool bParam0) //Position: 0x331B / 13083
{
	return Function_129(0, bParam0);
}

int Function_129(int iParam0, bool bParam1) //Position: 0x3327 / 13095
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_131(iParam0);
	}
	if (!Function_130(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_130(bool bParam0) //Position: 0x338E / 13198
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

int Function_131(int iParam0) //Position: 0x342F / 13359
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_132(int iParam0) //Position: 0x343F / 13375
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_136(1);
	Function_125();
	Function_124();
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
	itos(&cVar0, Function_131(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_135());
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
	Function_133(0, Function_60(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_16 = 1;
	return;
}

void Function_133(bool bParam0, int iParam1) //Position: 0x3863 / 14435
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_134(iParam1) };
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

struct<16> Function_134(var uParam0) //Position: 0x3A90 / 14992
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

int Function_135() //Position: 0x3B01 / 15105
{
	return Function_216(12);
}

void Function_136(bool bParam0) //Position: 0x3B0C / 15116
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_30(16384, 0, 1);
	return;
}

void Function_137(bool bParam0, bool bParam1) //Position: 0x3B26 / 15142
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
	else if (!bParam1 || Function_138(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_138(bool bParam0, bool bParam1) //Position: 0x3B83 / 15235
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_139(int iParam0) //Position: 0x3BA2 / 15266
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_140(bool bParam0) //Position: 0x3C00 / 15360
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_141() //Position: 0x3C14 / 15380
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_142(int iParam0) //Position: 0x3C23 / 15395
{
	Function_144(iParam0, Global_30668[2], &Global_56612, 0);
	Function_144(iParam0, Global_30679[1], &Global_56612, 1);
	Function_144(iParam0, Global_30658[0], &Global_56612, 2);
	Function_144(iParam0, Global_30658[3], &Global_56612, 3);
	Function_144(iParam0, Global_30685[2], &Global_56612, 4);
	Function_144(iParam0, Global_30640[2], &Global_56612, 6);
	Function_144(iParam0, Global_30685[1], &Global_56612, 5);
	Function_144(iParam0, Global_30658[2], &Global_56612, 7);
	Function_143(iParam0, Global_30668[2], &Global_56688, 0);
	Function_143(iParam0, Global_30679[1], &Global_56688, 1);
	Function_143(iParam0, Global_30658[0], &Global_56688, 2);
	Function_143(iParam0, Global_30658[3], &Global_56688, 3);
	Function_143(iParam0, Global_30685[2], &Global_56688, 4);
	Function_143(iParam0, Global_30640[2], &Global_56688, 6);
	Function_143(iParam0, Global_30685[1], &Global_56688, 5);
	Function_143(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_143(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3D19 / 15641
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_135();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_135();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_135();
	}
}

void Function_144(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x3DDD / 15837
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_135();
	}
}

void Function_145(int iParam0) //Position: 0x3E1E / 15902
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_215(*iParam0) };
	Function_211(iParam0);
	Function_210(13, iParam0->f_92);
	Function_210(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_131(2));
	if (iParam0->f_104)
	{
		Function_209(3, 5);
	}
	else
	{
		Function_209(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_131(3));
	Function_116();
	Function_210(13, iParam0->f_92);
	iLocal_94 = 1;
	Function_146(Var0, 4294967295, 0, 0);
	return;
}

void Function_146(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3E8A / 16010
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
			Function_171(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_165();
	Function_164();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_163(&Global_78480 + 220, &uVar0, 0);
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
					Function_163(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_147(bParam2);
}

void Function_147(bool bParam0) //Position: 0x3F9C / 16284
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_119(2);
	if (bParam0)
	{
		Function_119(1);
	}
	else
	{
		Function_44(1);
	}
	Function_148();
	return;
}

void Function_148() //Position: 0x4078 / 16504
{
	Function_161();
	Function_160();
	Function_160();
	Function_159();
	Function_159();
	Function_158();
	Function_158();
	Function_155();
	Function_155();
	if (!Function_27())
	{
		Function_153();
		Function_152();
		Function_151();
		Function_150();
	}
	Function_149();
	return;
}

void Function_149() //Position: 0x40AB / 16555
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

void Function_150() //Position: 0x41B1 / 16817
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

void Function_151() //Position: 0x41E4 / 16868
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

void Function_152() //Position: 0x4372 / 17266
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

void Function_153() //Position: 0x4526 / 17702
{
	Function_154(&Global_28260, 1, 0);
	return;
}

void Function_154(int iParam0, bool bParam1, var uParam2) //Position: 0x4534 / 17716
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

struct<8> Function_155() //Position: 0x4725 / 18213
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
				iVar2 = ((Function_157((50 + iVar4)) + Function_157((183 + iVar4))) + Function_157((90 + iVar4)));
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
	Function_156(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x47C0 / 18368
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

int Function_157(bool bParam0) //Position: 0x4A5B / 19035
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_158() //Position: 0x4A9C / 19100
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
		iVar2 = ((Function_157((50 + iVar3) + 15) + Function_157((183 + iVar3) + 15)) + Function_157((90 + iVar3) + 15));
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
	Function_156(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_159() //Position: 0x4B25 / 19237
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
			iVar2 = ((Function_157((50 + iVar3) + 8) + Function_157((183 + iVar3) + 8)) + Function_157((90 + iVar3) + 8));
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
	Function_156(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_160() //Position: 0x4BBC / 19388
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
		iVar2 = ((Function_157((50 + iVar3)) + Function_157((183 + iVar3))) + Function_157((90 + iVar3)));
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
	Function_156(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_161() //Position: 0x4C3B / 19515
{
	Function_162(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_156(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_162(int iParam0, bool bParam1, int iParam2) //Position: 0x4C61 / 19553
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

void Function_163(var uParam0, var uParam1, bool bParam2) //Position: 0x4E6B / 20075
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

void Function_164() //Position: 0x4EB0 / 20144
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

void Function_165() //Position: 0x4EDA / 20186
{
	Function_166(&(Global_50170[522]));
	Function_166(&(Global_50170[622]));
	Function_166(&(Global_50170[722]));
	Function_166(&(Global_50170[822]));
	Function_166(&(Global_50170[922]));
	Function_166(&(Global_50170[1022]));
	Function_166(&(Global_50170[1122]));
	return;
}

void Function_166(bool bParam0) //Position: 0x4F23 / 20259
{
	Global_56092[*bParam0] = 0;
	Function_167(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_167(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4F3D / 20285
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_170(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_169(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_170(iParam0), &cVar0, 2, 2, true);
		Function_168(Function_170(iParam0), 0);
	}
}

void Function_168(bool bParam0, bool bParam1) //Position: 0x4FEB / 20459
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

struct<16> Function_169(int iParam0) //Position: 0x5010 / 20496
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_170(int iParam0) //Position: 0x5044 / 20548
{
	return Global_50170[iParam022].f_24;
}

void Function_171(var uParam0, var uParam1, int iParam2) //Position: 0x5053 / 20563
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
						Function_167(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
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
						Function_167(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
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
					Function_172(17, 150, Function_206(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_198(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_167(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_172(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x51FC / 20988
{
	Function_196(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_170(iParam0), 1.0f, false, 0);
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
	Function_173();
}

void Function_173() //Position: 0x5262 / 21090
{
	if (!Function_27())
	{
		if (!Function_182(1, 3, 1, 1))
		{
			Function_175(1);
			Function_174(1, 8);
		}
	}
	else
	{
		Function_147(0);
	}
	return;
}

void Function_174(var uParam0, int iParam1) //Position: 0x528B / 21131
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

void Function_175(bool bParam0) //Position: 0x52CD / 21197
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_176();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_148();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_31(&Global_63095, 1);
		Function_31(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_176() //Position: 0x531E / 21278
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_178(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_178(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_177(StackVal, StackVal, vVar0))
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

bool Function_177(vector3 vParam0) //Position: 0x53BF / 21439
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_178(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x53D7 / 21463
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
	Function_221();
	return StackVal, StackVal, Function_221();
}

bool Function_179(int iParam0) //Position: 0x54BE / 21694
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_180(bool bParam0, bool bParam1) //Position: 0x54D4 / 21716
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

float Function_181(vector3 vParam0, vector3 vParam3) //Position: 0x559B / 21915
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_182(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x55B8 / 21944
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

void Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x565C / 22108
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

struct<16> Function_184(int iParam0) //Position: 0x56CE / 22222
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_185(int iParam0) //Position: 0x56EF / 22255
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_186(int iParam0) //Position: 0x5710 / 22288
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_187() //Position: 0x5731 / 22321
{
	return "CQueue_Count";
}

var Function_188() //Position: 0x5746 / 22342
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_189(int iParam0) //Position: 0x5775 / 22389
{
	Function_190(iParam0, 1);
	return;
}

void Function_190(int iParam0, bool bParam1) //Position: 0x5781 / 22401
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

int Function_191(bool bParam0) //Position: 0x57D7 / 22487
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_192(int iParam0, int iParam1) //Position: 0x57E3 / 22499
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
		CLEAR_JOURNAL_ENTRY(Function_170(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_194(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_169(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_193(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_170(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_170(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_170(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_193(int iParam0) //Position: 0x5865 / 22629
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_169(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_194(int iParam0) //Position: 0x5885 / 22661
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_195(int iParam0) //Position: 0x58B6 / 22710
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

void Function_196(bool bParam0, bool bParam1) //Position: 0x5A34 / 23092
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

var Function_197() //Position: 0x5B80 / 23424
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_198(var uParam0, bool bParam1, bool bParam2) //Position: 0x5BCD / 23501
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_199(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x5BE5 / 23525
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_169(iParam0) };
	Function_183(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_198(&fParam5, bParam8, iParam9);
	Function_167(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_201(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_189(iParam12);
	}
	Function_200(iParam0, 4);
	Function_173();
}

void Function_200(int iParam0, int iParam1) //Position: 0x5C5B / 23643
{
	Function_31(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5C6F / 23663
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
	CLEAR_JOURNAL_ENTRY(Function_170(iParam0));
	if ((bParam3 && Function_205(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_170(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_194(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_169(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_203(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_193(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_170(iParam0), &Var7, 0, 2, Function_205(iParam0, 4));
			if (!bParam3)
			{
				Function_202(iParam0, 4);
			}
		}
	}
}

void Function_202(int iParam0, int iParam1) //Position: 0x5D2C / 23852
{
	Function_32(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_203(int iParam0) //Position: 0x5D40 / 23872
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_204(int iParam0) //Position: 0x5D6E / 23918
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_205(int iParam0, bool bParam1) //Position: 0x5D9E / 23966
{
	return Function_37(Global_50170[iParam022].f_32, bParam1);
}

bool Function_206() //Position: 0x5DB2 / 23986
{
	return "MP_Unstoppable_Icon_128";
}

float Function_207(int iParam0) //Position: 0x5DD2 / 24018
{
	return Global_50170[iParam022].f_12;
}

void Function_208(int iParam0, int iParam1) //Position: 0x5DE1 / 24033
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0x5E06 / 24070
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_210(int iParam0, int iParam1) //Position: 0x5E2F / 24111
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_211(int iParam0) //Position: 0x5E49 / 24137
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

int Function_212(int iParam0) //Position: 0x5F2A / 24362
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

int Function_213(int iParam0, bool bParam1) //Position: 0x5F66 / 24422
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
	if (!Function_130(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

bool Function_214(bool bParam0) //Position: 0x5FD4 / 24532
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_130(bParam0);
}

struct<20> Function_215(int iParam0) //Position: 0x5FEA / 24554
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

int Function_216(int iParam0) //Position: 0x613F / 24895
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_217() //Position: 0x6158 / 24920
{
	return Function_131(0);
}

void Function_218(bool bParam0) //Position: 0x6162 / 24930
{
	if (Function_64(bParam0))
	{
		if (!Function_63(bParam0))
		{
			Function_61();
			bParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_32(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_219(bool bParam0, vector3 vParam1, bool bParam4, int iParam5) //Position: 0x622A / 25130
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
					if (Function_177(StackVal, StackVal, vParam1))
					{
						TASK_FLEE_ACTORSET(bVar1, bParam4, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_GO_TO_COORD(bVar1, &vParam1, 3);
					}
					if (!Function_220(bVar1, Global_34573, iParam5))
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

bool Function_220(bool bParam0, bool bParam1, bool bParam2) //Position: 0x62A3 / 25251
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

vector3 Function_221() //Position: 0x63B4 / 25524
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_222(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x63BD / 25533
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

void Function_223(bool bParam0) //Position: 0x643F / 25663
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

void Function_224() //Position: 0x6471 / 25713
{
	Function_225();
	if (IS_VOLUME_VALID(Local_248.f_236))
	{
		DESTROY_VOLUME(Local_248.f_236);
	}
	if (!IS_VOLUME_VALID(Local_248.f_216))
	{
		Local_248.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_248, "SpawnVol_0_set");
		(*&Local_248 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_0_sub_0", 2, -3172,288f, 44,91516f, 4588,405f, 0.0f, -118,3486f, 0.0f, 4,682272f, 5,515346f, 5,070396f);
		ADD_TO_VOLUME_SET(Local_248.f_216, (*&Local_248 + 200)[0]);
		(*&Local_248 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_0_sub_1", 2, -3160,648f, 37,88779f, 4548,238f, 0.0f, -87,26968f, 0.0f, 6,847756f, 4,636385f, 5,070396f);
		ADD_TO_VOLUME_SET(Local_248.f_216, (*&Local_248 + 200)[1]);
		(*&Local_248 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_0_sub_2", 2, -3177,195f, 36,66467f, 4507,135f, 0.0f, -58,69168f, 0.0f, 6,847756f, 4,636385f, 5,070396f);
	}
	return;
}

void Function_225() //Position: 0x659B / 26011
{
	Function_226();
	if (IS_VOLUME_VALID(Local_248.f_216))
	{
		DESTROY_VOLUME(Local_248.f_216);
	}
	return;
}

void Function_226() //Position: 0x65B5 / 26037
{
	Function_223(bLocal_240);
	Function_223(bLocal_241);
	Function_223(bLocal_246);
	Function_223(bLocal_245);
	Function_230(bLocal_240, Local_248.f_172, 4, 4294967295);
	Function_230(bLocal_240, Local_248.f_188, 3, 2);
	Function_230(bLocal_240, Local_248.f_192, 1, 4);
	Function_230(bLocal_240, Local_248.f_196, 2, 2);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_240, 0);
	Function_230(bLocal_246, Local_248.f_172, 0, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_246, 0);
	Function_229(bLocal_241, 1, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_241, 0);
	Function_228(bLocal_245, &Local_248 + 352, 2, 1);
	Function_227(bLocal_240, 1);
	Function_227(bLocal_241, 1);
	SQUAD_SET_FACTION(bLocal_240, 19);
	SQUAD_SET_FACTION(bLocal_241, 19);
	return;
}

void Function_227(bool bParam0, int iParam1) //Position: 0x664D / 26189
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

void Function_228(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x668E / 26254
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (bVar0 <= *uParam1)
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (IS_ACTOR_ALIVE(bVar2))
				{
					if (!Function_177(StackVal, StackVal, *uParam1[bVar06]))
					{
						bVar1 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD(false, uParam1[bVar06], bParam2);
						TASK_CROUCH(false, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar2, bVar1);
						TASK_SEQUENCE_RELEASE(bVar1, 1);
					}
					TASK_PRIORITY_SET(bVar2, bParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_229(bool bParam0, bool bParam1, bool bParam2) //Position: 0x671A / 26394
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

var Function_230(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6773 / 26483
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

void Function_231() //Position: 0x67AE / 26542
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_275(&Local_374, 0);
			Function_225();
			Function_274("TES_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			Function_273(bLocal_247);
			Local_374.f_8 = 6;
			break;
		
		case 0x00000006:
			Function_237();
			Function_221();
			Function_219(StackVal, StackVal, bLocal_247, Function_221(), Global_78576, 150.0f);
			if ((&Local_374 + 16)->f_48 < 4 && Function_236(bLocal_18) >= 0)
			{
				if (Function_99(11, 1, 0x3f800000))
				{
					Local_374.f_8 = 106;
					bLocal_449 = Function_235(bLocal_245);
					UI_SET_STRING_FORMAT("Generic_Dbuffer32_3", UI_GET_STRING("XP_TES_Whores"), I2STR(bLocal_449), 0, 0);
					Function_233((FLOOR(50.0f) * bLocal_449), "Generic_Dbuffer32_3", 0);
					Function_232(2, (FLOOR(50.0f) * bLocal_449));
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_374.f_8 = 0;
			Local_374.f_4 = 11;
			break;
	}
	return;
}

void Function_232(int iParam0, int iParam1) //Position: 0x68CB / 26827
{
	Function_209(iParam0, (Function_131(iParam0) + iParam1));
	return;
}

void Function_233(var uParam0, bool bParam1, int iParam2) //Position: 0x68DE / 26846
{
	Function_234(uParam0);
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

void Function_234(int iParam0) //Position: 0x6921 / 26913
{
	Function_232(0, iParam0);
	return;
}

int Function_235(bool bParam0) //Position: 0x692D / 26925
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

int Function_236(bool bParam0) //Position: 0x697A / 27002
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

void Function_237() //Position: 0x69C0 / 27072
{
	bool bVar0;
	
	bVar0 = NET_IS_HOST_OF_THIS_SCRIPT();
	if (Function_236(bLocal_18) >= 3 && !(&Local_374 + 16)->f_36)
	{
		if (bVar0)
		{
			(&Local_374 + 16)->f_48++;
		}
		if ((&Local_374 + 16)->f_48 <= 4)
		{
			if (bVar0)
			{
				(&Local_374 + 16)->f_36 = 1;
				(&Local_374 + 16)->f_64 = 0;
			}
			iLocal_466 = 0;
		}
	}
	if (bVar0)
	{
		if ((&Local_374 + 16)->f_36)
		{
			Function_238(I2STR((&Local_374 + 16)->f_48));
		}
	}
	return;
}

void Function_238(int iParam0) //Position: 0x6A33 / 27187
{
	if (!iLocal_466)
	{
		if (Function_64(&iLocal_467))
		{
			if (Function_60(&iLocal_467) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_374 + 16)->f_64)
				{
					case 0x00000000:
						Function_272(3, iParam0);
						Function_271(&bLocal_242, bLocal_448);
						Function_222(bLocal_242, bLocal_18, 0, 0);
						break;
					
					case 0x00000001:
						Function_269(5, iParam0);
						Function_271(&bLocal_243, bLocal_448);
						Function_222(bLocal_243, bLocal_18, 0, 0);
						break;
					
					case 0x00000002:
						Function_243(4, iParam0);
						Function_271(&bLocal_244, bLocal_448);
						Function_222(bLocal_244, bLocal_18, 0, 0);
						break;
				}
				(&Local_374 + 16)->f_64++;
				Function_242(&iLocal_463);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_239(&iLocal_467);
		}
		if ((&Local_374 + 16)->f_64 >= 3)
		{
			(&Local_374 + 16)->f_36 = 0;
			iLocal_466 = 1;
		}
	}
	return;
}

void Function_239(int iParam0) //Position: 0x6B05 / 27397
{
	if (!Function_64(iParam0))
	{
		Function_240(iParam0, 0.0f);
	}
	return;
}

void Function_240(var uParam0, float fParam1) //Position: 0x6B1A / 27418
{
	Function_61();
	Function_241(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_241(var uParam0, int iParam1) //Position: 0x6B2E / 27438
{
	uParam0->f_4 = iParam1;
	Function_32(uParam0, 1);
	Function_31(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_242(int iParam0) //Position: 0x6B4B / 27467
{
	Function_240(iParam0, 0.0f);
	return;
}

void Function_243(char* cParam0, bool bParam1) //Position: 0x6B57 / 27479
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	
	iLocal_401 = Function_268();
	vVar0 = { StackVal, StackVal, *(&Local_248 + 320) };
	fVar3 = 75.0f;
	bVar4 = 100.0f;
	switch (iLocal_401)
	{
		case 0x00000003:
			Function_244(StackVal, StackVal, cParam0, bParam1, vVar0, 503, "tes_backup_horse_01_", fVar3, bVar4, 5);
		
		case 0x00000002:
			Function_244(StackVal, StackVal, cParam0, bParam1, vVar0, 499, "tes_backup_horse_04_", fVar3, bVar4, 5);
		
		case 0x00000001:
			Function_244(StackVal, StackVal, cParam0, bParam1, vVar0, 496, "tes_backup_horse_06_", fVar3, bVar4, 5);
			break;
	}
	return;
}

void Function_244(bool bParam0, char* cParam1, vector3 vParam2, bool bParam5, char* cParam6, float fParam7, bool bParam8, int iParam9) //Position: 0x6C17 / 27671
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	strcpy(&Var0, cParam6, 32);
	stradd(&Var0, cParam1, 32);
	bVar8 = Function_267(StackVal, StackVal, vParam2, &Local_248, bParam5, &Var0, fParam7, bParam8);
	Function_97(bVar8);
	bVar9 = CREATE_ACTOR_IN_LAYOUT(Local_248, Function_12(), 978, Function_97(bVar8), 0.0f, 0.0f, 0.0f);
	ACTOR_MOUNT_ACTOR(bVar8, bVar9);
	ACCESSORIZE_HORSE(bVar9, 3);
	Function_253(bVar8, iParam9);
	Function_245(bVar8, bParam0);
	Function_245(bVar9, 8);
}

void Function_245(bool bParam0, bool bParam1) //Position: 0x6C77 / 27767
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_246(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

void Function_246(bool bParam0, bool bParam1) //Position: 0x6C9A / 27802
{
	switch (bParam1)
	{
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_240);
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_241);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, false);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, false);
			SET_ACTOR_ALLOW_DISARM(bParam0, false);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_242);
			break;
		
		case 0x00000004:
			Function_250(&bParam0, 35.0f, 10.0f, 3.0f, 1.0f, 1, 0, 1, 23, 4294967295);
			SQUAD_JOIN(bParam0, bLocal_244);
			break;
		
		case 0x00000005:
			DEEQUIP_ACCESSORY(bParam0, 0);
			DEEQUIP_ACCESSORY(bParam0, 1);
			Function_250(&bParam0, 10.0f, 15.0f, 1,5f, 1.0f, 1, 0, 1, 25, 5);
			SQUAD_JOIN(bParam0, bLocal_243);
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
			SQUAD_JOIN(bParam0, bLocal_245);
			break;
		
		case 0x00000006:
			SQUAD_JOIN(bParam0, bLocal_246);
			break;
		
		case 0x00000008:
			SQUAD_JOIN(bParam0, bLocal_247);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_240);
			break;
	}
	if (bParam1 == 7 && bParam1 == 8)
	{
		Function_249(bParam0);
		Function_247(bParam0, 1);
		SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
		AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
		Function_253(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
		SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
		ADD_ACTOR_STAY_WITHIN_VOLUME(StackVal, bParam0);
	}
	return;
}

void Function_247(bool bParam0, bool bParam1) //Position: 0x6DFD / 28157
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
	fVar1 = Function_248(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_248(int iParam0) //Position: 0x6E41 / 28225
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

void Function_249(bool bParam0) //Position: 0x6ED4 / 28372
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

void Function_250(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9) //Position: 0x6F93 / 28563
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		Function_252(*bParam0, fParam1, fParam2, fParam3);
		SET_ACTOR_VISION_MAX_RANGE(*bParam0, (GET_ACTOR_VISION_MAX_RANGE(*bParam0) * fParam4), 1);
		SET_ACTOR_VISION_XRAY(*bParam0, bParam5);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 6, bParam6);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 16, bParam7);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 16, 30.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(*bParam0, 27, 100.0f);
		Function_251(bParam0, iParam8, iParam9);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_GENERIC_THROWER was passed an invalid actor");
	}
}

void Function_251(var uParam0, bool bParam1, bool bParam2) //Position: 0x7042 / 28738
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

void Function_252(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x7074 / 28788
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

void Function_253(bool bParam0, int iParam1) //Position: 0x70BB / 28859
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_266(bParam0);
			break;
		
		case 0x00000001:
			Function_265(bParam0);
			break;
		
		case 0x00000002:
			Function_264(bParam0);
			break;
		
		case 0x00000005:
			Function_263(bParam0);
			break;
		
		case 0x00000004:
			Function_262(bParam0);
			break;
		
		case 0x00000003:
			Function_261(bParam0);
			break;
		
		case 0x00000006:
			Function_260(bParam0);
			break;
		
		case 0x00000007:
			Function_259(bParam0);
			break;
		
		case 0x00000008:
			Function_258(bParam0);
			break;
		
		case 0x00000009:
			Function_256(bParam0);
			break;
		
		default:
			Function_254(bParam0);
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

void Function_254(bool bParam0) //Position: 0x7187 / 29063
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
	Function_255(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_255(bool bParam0, bool bParam1) //Position: 0x74EB / 29931
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

void Function_256(bool bParam0) //Position: 0x750D / 29965
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_257(bool bParam0, int iParam1) //Position: 0x76AA / 30378
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

void Function_258(bool bParam0) //Position: 0x76DD / 30429
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_259(bool bParam0) //Position: 0x7886 / 30854
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_260(bool bParam0) //Position: 0x7A17 / 31255
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_261(bool bParam0) //Position: 0x7B49 / 31561
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_262(bool bParam0) //Position: 0x7CD1 / 31953
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_263(bool bParam0) //Position: 0x7E2B / 32299
{
	Function_254(bParam0);
	Function_257(bParam0, 1);
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

void Function_264(bool bParam0) //Position: 0x7F69 / 32617
{
	Function_254(bParam0);
	Function_257(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_265(bool bParam0) //Position: 0x7F8C / 32652
{
	Function_254(bParam0);
	Function_257(bParam0, 0);
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

void Function_266(bool bParam0) //Position: 0x80FA / 33018
{
	Function_254(bParam0);
	Function_257(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

var Function_267(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x8135 / 33077
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
		if (!Function_177(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*iParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

int Function_268() //Position: 0x81C1 / 33217
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

void Function_269(char* cParam0, bool bParam1) //Position: 0x81F0 / 33264
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	iLocal_401 = Function_268();
	vVar0 = { StackVal, StackVal, *(&Local_248 + 320) };
	fVar3 = 50.0f;
	fVar4 = 85.0f;
	switch (iLocal_401)
	{
		case 0x00000003:
			Function_270(StackVal, StackVal, cParam0, bParam1, vVar0, 504, "tes_backup_roof_01_", fVar3, fVar4);
		
		case 0x00000002:
			Function_270(StackVal, StackVal, cParam0, bParam1, vVar0, 503, "tes_backup_roof_02_", fVar3, fVar4);
		
		case 0x00000001:
			Function_270(StackVal, StackVal, cParam0, bParam1, vVar0, 500, "tes_backup_roof_03_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, bParam1, vVar0, 498, "tes_backup_roof_04_", fVar3, fVar4);
			break;
	}
	return;
}

void Function_270(int iParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8) //Position: 0x82D2 / 33490
{
	char* cVar0[32];
	var uVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	uVar8 = Function_267(StackVal, StackVal, vParam2, &Local_248, uParam5, &cVar0, fParam7, fParam8);
	Function_245(uVar8, iParam0);
}

void Function_271(bool bParam0, bool bParam1) //Position: 0x8300 / 33536
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

void Function_272(char* cParam0, int iParam1) //Position: 0x839C / 33692
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	iLocal_401 = Function_268();
	vVar0 = { StackVal, StackVal, *(&Local_248 + 320) };
	fVar3 = 50.0f;
	fVar4 = 85.0f;
	switch (iLocal_401)
	{
		case 0x00000003:
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 499, "tes_backup_dyn_01_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 502, "tes_backup_dyn_02_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 504, "tes_backup_dyn_03_", fVar3, fVar4);
		
		case 0x00000002:
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 503, "tes_backup_dyn_04_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 500, "tes_backup_dyn_05_", fVar3, fVar4);
		
		case 0x00000001:
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 496, "tes_backup_dyn_06_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 498, "tes_backup_dyn_07_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 497, "tes_backup_dyn_08_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 501, "tes_backup_dyn_09_", fVar3, fVar4);
			Function_270(StackVal, StackVal, cParam0, iParam1, vVar0, 499, "tes_backup_dyn_010_", fVar3, fVar4);
			break;
	}
	return;
}

void Function_273(bool bParam0) //Position: 0x8565 / 34149
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
			Function_78(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_274(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x85A1 / 34209
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

void Function_275(var uParam0, bool bParam1) //Position: 0x85F4 / 34292
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

void Function_276() //Position: 0x862B / 34347
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_275(&Local_374, 0);
			Function_239(&iLocal_450);
			Function_271(&bLocal_240, bLocal_448);
			Function_274("TES_MP_obj1", 0x40f00000, 1, 2, 0, 0, 0);
			Local_374.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_282();
			}
			Function_281();
			if (Function_60(&iLocal_450) < 60.0f && !iLocal_446)
			{
				Function_278(&bLocal_246, &uLocal_447);
				TASK_TAUNT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_246, false), uLocal_447, 2.0f, 3.0f, 0, -1.0f);
				ADD_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(bLocal_246, false), Local_248.f_172);
				iLocal_446 = 1;
			}
			if ((Function_236(bLocal_18) >= 3 && Function_277(bLocal_241) != 0) && (&Local_374 + 16)->f_32)
			{
				if (Function_99(2, 1, 0x3f800000))
				{
					Local_374.f_8 = 106;
				}
			}
			else
			{
				Function_52();
			}
			break;
		
		case 0x0000006A:
			Local_374.f_8 = 0;
			Local_374.f_4 = 2;
			break;
	}
	return;
}

int Function_277(bool bParam0) //Position: 0x8716 / 34582
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

var Function_278(var uParam0, int iParam1) //Position: 0x8766 / 34662
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		*iParam1 = "";
		return 1E+08.0f;
	}
	if (SQUAD_GET_SIZE(*uParam0) == 0)
	{
		*iParam1 = "";
		return 1E+08.0f;
	}
	if (!NET_IS_IN_SESSION())
	{
		*iParam1 = Function_38();
		bVar0 = Function_280(*uParam0, *iParam1, 0, 0);
		if (IS_ACTOR_VALID(bVar0))
		{
			return Function_279(*iParam1, bVar0);
		}
		return 1E+08.0f;
	}
	iVar4 = 1E+08.0f;
	*iParam1 = "";
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			bVar0 = "";
			if (bVar1 == GET_LOCAL_SLOT())
			{
				bVar2 = Function_38();
			}
			else
			{
				bVar2 = GET_SLOT_ACTOR(bVar1);
			}
			if (IS_ACTOR_VALID(bVar2))
			{
				bVar0 = Function_280(*uParam0, bVar2, 0, 0);
				if (IS_ACTOR_VALID(bVar0))
				{
					fVar3 = Function_279(bVar2, bVar0);
					if (fVar3 > iVar4)
					{
						iVar4 = fVar3;
						*iParam1 = bVar2;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar4;
}

var Function_279(bool bParam0, bool bParam1) //Position: 0x8841 / 34881
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_280(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8932 / 35122
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4), iVar5))
			{
				bVar4 = "";
			}
		}
		if (bParam3)
		{
			if (IS_ACTOR_RIDING(bVar4))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_279(bVar4, bParam1);
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
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
	}
	return "";
}

void Function_281() //Position: 0x89EC / 35308
{
	if (!iLocal_445)
	{
		if ((((&Local_374 + 16)->f_24 || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_459)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_460)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_461))
		{
			Function_226();
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_459);
			EVENT_TRAP_CLEAR_EVENTS(bLocal_459);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_460);
			EVENT_TRAP_CLEAR_EVENTS(bLocal_460);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_461);
			EVENT_TRAP_CLEAR_EVENTS(bLocal_461);
			iLocal_445 = 1;
		}
	}
	return;
}

void Function_282() //Position: 0x8A43 / 35395
{
	if (!iLocal_462)
	{
		if (Function_64(&iLocal_463))
		{
			if (Function_60(&iLocal_463) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_374 + 16)->f_60)
				{
					case 0x00000000:
						Function_290();
						Function_222(Local_248.f_156, bLocal_18, 0, 0);
						break;
					
					case 0x00000001:
						Function_289();
						Function_222(Local_248.f_144, bLocal_18, 0, 0);
						break;
					
					case 0x00000002:
						Function_288();
						Function_222(Local_248.f_148, bLocal_18, 0, 0);
						break;
					
					case 0x00000003:
						Function_287();
						Function_222(Local_248.f_152, bLocal_18, 0, 0);
						break;
					
					case 0x00000004:
						Function_286();
						Function_222(Local_248.f_140, bLocal_18, 0, 0);
						break;
					
					case 0x00000005:
						Function_285();
						Function_222(Local_248.f_160, bLocal_18, 0, 0);
						break;
					
					case 0x00000006:
						Function_284();
						Function_222(Local_248.f_168, bLocal_18, 0, 0);
						break;
					
					case 0x00000007:
						Function_283();
						break;
				}
				(&Local_374 + 16)->f_60++;
				Function_242(&iLocal_463);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_239(&iLocal_463);
		}
		if ((&Local_374 + 16)->f_60 >= 8)
		{
			(&Local_374 + 16)->f_32 = 1;
			iLocal_462 = 1;
		}
	}
	return;
}

void Function_283() //Position: 0x8B63 / 35683
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_164 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Whores"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_whore_01", 65, -3250,856f, 38,14893f, 4543,658f, 0.0f, 185,5403f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_164);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 23);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_whore_02", 66, -3247,838f, 38,14893f, 4544,383f, 0.0f, 179,874f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_164);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 23);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_whore_03", 67, -3239,754f, 38,1489f, 4554,591f, 0.0f, 8,685385f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_164);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 23);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_whore_04", 68, -3256.0f, 38,1489f, 4550,49f, 0.0f, 354,5401f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_164);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 23);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_whore_05", 68, -3267,365f, 38,14893f, 4551,365f, 0.0f, 369,5385f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_164);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 23);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 7);
	return;
}

void Function_284() //Position: 0x8D4C / 36172
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_168 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Honcho_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_honcho_boss", 496, -3258,231f, 39,24408f, 4556,183f, 0.0f, 1,42971f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_168);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	Function_246(bVar0, 6);
	Function_253(bVar0, 3);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_285() //Position: 0x8DF5 / 36341
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_160 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Reinf_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_reinf_01", 501, -3258,174f, 39,2428f, 4560,553f, 0.0f, 237,769f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_160);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_286() //Position: 0x8E90 / 36496
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_140 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Initial_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad0_02", 497, -3299,692f, 39,128f, 4545,679f, 0.0f, 103,501f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_140);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	Function_253(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad0_03", 498, -3233,115f, 38,103f, 4551,116f, 0.0f, -135,8959f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_140);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	Function_253(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad0_04", 496, -3232,918f, 38,153f, 4547,091f, 0.0f, -59,738f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_140);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	Function_253(bVar0, 5);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_287() //Position: 0x9023 / 36899
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_152 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Initial_Quad3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad3_01", 501, -3264,16f, 38,372f, 4536,095f, 0.0f, 245,662f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_152);
	Function_253(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad3_02", 496, -3268,889f, 40,141f, 4537,233f, 0.0f, 222,57f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_152);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	Function_253(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad3_03", 501, -3288,875f, 38,149f, 4539,983f, 0.0f, 156,983f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_152);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,5f, 1, 1);
	Function_253(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad3_04", 500, -3275,452f, 38,128f, 4548,06f, 0.0f, 47,588f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_152);
	Function_253(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_288() //Position: 0x9250 / 37456
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_148 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Initial_Quad2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad2_01", 499, -3249,33f, 39,153f, 4562,354f, 0.0f, 159,532f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_148);
	Function_253(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad2_02", 503, -3259,202f, 39,432f, 4566,906f, 0.0f, 82,271f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_148);
	Function_253(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_289() //Position: 0x9370 / 37744
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_144 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Initial_Quad1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad1_01", 498, -3236,777f, 38,3f, 4534,167f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_144);
	GIVE_WEAPON_TO_ACTOR(bVar0, 17, 0,5f, 1, 1);
	Function_253(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad1_02", 500, -3247,156f, 38,3f, 4534,891f, 0.0f, 164,184f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_144);
	Function_253(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad1_03", 500, -3240,18f, 38,3f, 4540,096f, 0.0f, 193,587f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_144);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,5f, 1, 1);
	Function_253(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	Function_246(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_290() //Position: 0x9520 / 38176
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_248.f_156 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "TES_Initial_Quad4"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad4_01", 501, -3278,045f, 42,48905f, 4561,387f, 0.0f, 275,8745f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_156);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_246(bVar0, 2);
	Function_253(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad4_02", 501, -3239,926f, 41,47462f, 4540,225f, 0.0f, 204,6642f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_156);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_246(bVar0, 2);
	Function_253(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad4_03", 501, -3240,976f, 42,67955f, 4564,031f, 0.0f, 237,769f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_156);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_246(bVar0, 2);
	Function_253(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_248, "tes_quad4_04", 501, -3260,508f, 42,31918f, 4564,25f, 0.0f, 237,769f, 0.0f);
	SQUAD_JOIN(bVar0, Local_248.f_156);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 1);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	Function_246(bVar0, 2);
	Function_253(bVar0, 6);
	return;
}

void Function_291() //Position: 0x971A / 38682
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_363();
			Function_356(&uLocal_98, 0);
			Function_353(&uLocal_98, 1, 2, 3, 1);
			Local_374.f_100 = "MEX_SONG_05";
			Local_374.f_8 = 1;
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (Function_346() && Local_374)
			{
				Local_374.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_345();
			Function_343(&Local_374, 43245);
			Function_341(&Local_374, Local_248);
			Function_305(Local_248, &uLocal_98, 1, 1);
			NET_SCRIPTMSG_REGISTER_HANDLER(89, 40772);
			Function_343(&Local_374, 40704);
			Function_300();
			Function_298(Function_299(Local_374, "tesoroAzul", "wall01x", 1), 0);
			Function_298(Function_299(Local_374, "tesoroAzul", "wall01x", 2), 0);
			Function_298(Function_299(Local_374, "tesoroAzul", "wall01x", 3), 0);
			Function_298(Function_299(Local_374, "tesoroAzul", "wall01x", 4), 0);
			Function_298(Function_299(Local_374, "tesoroAzul", "house01props01x", 1), 0);
			Function_298(Function_299(Local_374, "tesoroAzul", "house01props01x", 2), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_459 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_248);
			EVENT_TRAP_ON_VOLUME(bLocal_459, Local_248.f_172);
			bLocal_460 = CREATE_EVENT_TRAP("nHorseTrap", 87, Local_248);
			EVENT_TRAP_ON_VOLUME(bLocal_460, Local_248.f_172);
			bLocal_461 = CREATE_EVENT_TRAP("tntTrap", 17, Local_248);
			EVENT_TRAP_ON_VOLUME(bLocal_461, Local_248.f_172);
			Local_374.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_296())
			{
				Local_374.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_292(&Local_374);
			break;
	}
	return;
}

void Function_292(var uParam0) //Position: 0x9943 / 39235
{
	uParam0->f_8 = 0;
	if (uParam0->f_16 != 0)
	{
		uParam0->f_4 = uParam0->f_16;
		Function_294(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
	}
	else
	{
		uParam0->f_4 = 1;
		Function_294(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0);
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
			Function_293();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_293() //Position: 0x9A25 / 39461
{
	bLocal_91 = true;
	return;
}

void Function_294(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x9A2E / 39470
{
	if (iParam0 == Global_30668[2])
	{
		Function_295(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_295(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_295(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_295(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_295(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_295(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_295(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_295(7);
	}
}

void Function_295(int iParam0) //Position: 0x9AC3 / 39619
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

bool Function_296() //Position: 0x9B58 / 39768
{
	if (!IS_LAYOUTREF_VALID(bLocal_453))
	{
		bLocal_453 = CREATE_LAYOUT(Function_12());
	}
	if (!IS_OBJECT_VALID(bLocal_454))
	{
		bLocal_454 = CREATE_WORLD_SECTOR(bLocal_453, "Tesoroazul");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_454))
	{
		Function_297(bLocal_453, "potclay", Local_248.f_172);
		Function_297(bLocal_453, "bottle", Local_248.f_172);
		Function_297(bLocal_453, "blanket", Local_248.f_172);
		DESTROY_LAYOUT(bLocal_453);
		return 1;
	}
	return 0;
}

void Function_297(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9BDE / 39902
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

void Function_298(bool bParam0, bool bParam1) //Position: 0x9C37 / 39991
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

bool Function_299(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x9C88 / 40072
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

void Function_300() //Position: 0x9D24 / 40228
{
	bLocal_240 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_stage_one_guards"));
	bLocal_241 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_stage_one_Sniper"));
	bLocal_245 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_Whores"));
	bLocal_246 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_Honcho"));
	bLocal_242 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_stage_two_reinforcements"));
	Function_301(bLocal_242, Local_248.f_180, 3.0f, 5, 3);
	Function_301(bLocal_242, Local_248.f_176, 3.0f, 10, 4294967295);
	bLocal_244 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_stage_two_horseback"));
	SET_PATH_LOOPING(Local_248.f_500, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_244, true, 0, 4294967295);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_248.f_500, 4, 1, 0, 1, false);
	bLocal_243 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_stage_two_rooftop"));
	Function_301(bLocal_243, Local_248.f_176, 3.0f, 0, 2);
	bLocal_247 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_248, "SQUAD_Horses"));
	return;
}

void Function_301(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x9E75 / 40565
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	Function_302(bParam0, 37, fParam2);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, bParam3, bParam1, 2, 1);
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam3, bParam1, iParam4);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
}

void Function_302(bool bParam0, int iParam1, bool bParam2) //Position: 0x9EB6 / 40630
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

void Function_303(int iParam0) //Position: 0x9F00 / 40704
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("Generic_Dbuffer32_3"), iParam0);
	itos(&cVar0, Function_131(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

void Function_304(int iParam0) //Position: 0x9F44 / 40772
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	if (StackVal == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
	{
		switch (Var0)
		{
			case 0x00000000:
				Function_274("TES_MP_WaveOne", 0x40f00000, 1, 2, 0, 0, 0);
				break;
			
			case 0x00000001:
				Function_274("TES_MP_WaveTwo", 0x40f00000, 1, 2, 0, 0, 0);
				break;
			
			case 0x00000002:
				Function_274("TES_MP_WaveThree", 0x40f00000, 1, 2, 0, 0, 0);
				break;
			
			case 0x00000003:
				Function_274("TES_MP_WaveFour", 0x40f00000, 1, 2, 0, 0, 0);
				break;
			}
	}
	return;
}

int Function_305(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0xA006 / 40966
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
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
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

var Function_306() //Position: 0xA23A / 41530
{
	return "XPBonus";
}

void Function_307(bool bParam0, struct<2> Param1, var uParam3) //Position: 0xA24A / 41546
{
	bool bVar0;
	
	if (Function_331(Param1))
	{
		bVar0 = Function_309(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_308(), bVar0);
	}
}

var Function_308() //Position: 0xA270 / 41584
{
	return "PackedWeapon";
}

var Function_309(struct<5> Param0) //Position: 0xA285 / 41605
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_310())) || SHIFT_LEFT(bParam2, Function_310() + 8));
}

bool Function_310() //Position: 0xA2A3 / 41635
{
	return Function_311(39);
}

int Function_311(bool bParam0) //Position: 0xA2AE / 41646
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

void Function_312(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xA2DC / 41692
{
	Function_323(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_317(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_316(), Function_315(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_314(), Function_313(iParam13, iParam14));
}

var Function_313(var uParam0, bool bParam1) //Position: 0xA32D / 41773
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_314() //Position: 0xA33D / 41789
{
	return "PackedGrass";
}

var Function_315(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA351 / 41809
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

var Function_316() //Position: 0xA376 / 41846
{
	return "PackedMetadata";
}

void Function_317(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xA38D / 41869
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
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_318() //Position: 0xA4B3 / 42163
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_319() //Position: 0xA4C4 / 42180
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_320() //Position: 0xA4D5 / 42197
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_321(var uParam0, int iParam1) //Position: 0xA4E6 / 42214
{
	*iParam1 = Function_322(uParam0, Function_310(), 0);
	iParam1->f_4 = Function_322(uParam0, Function_310() + 8, Function_310());
	return;
}

var Function_322(var uParam0, int iParam1, bool bParam2) //Position: 0xA509 / 42249
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_191((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_323(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xA528 / 42280
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

var Function_324() //Position: 0xA62C / 42540
{
	return "MPItemGiver";
}

struct<32> Function_325(bool bParam0) //Position: 0xA640 / 42560
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

struct<32> Function_326(char* cParam0, char* cParam1, char* cParam2) //Position: 0xA6AA / 42666
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_327() //Position: 0xA6C9 / 42697
{
	return "PBox_";
}

var Function_328() //Position: 0xA6D7 / 42711
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_329() //Position: 0xA6FD / 42749
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_330() //Position: 0xA725 / 42789
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_331(int iParam0) //Position: 0xA74B / 42827
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_332(bool bParam0) //Position: 0xA75D / 42845
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_333() //Position: 0xA76D / 42861
{
	return "ID";
}

bool Function_334(bool bParam0, int iParam1) //Position: 0xA778 / 42872
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_73((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_335())
			{
				return 0;
			}
			return !Function_73((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_73((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_335() //Position: 0xA7CD / 42957
{
	return Function_37(Global_79962, 1024);
}

vector3 Function_336(bool bParam0) //Position: 0xA7DD / 42973
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

vector3 Function_337(bool bParam0) //Position: 0xA804 / 43012
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

var Function_338() //Position: 0xA82B / 43051
{
	return "Type";
}

var Function_339() //Position: 0xA838 / 43064
{
	return "PickupsSet";
}

var Function_340() //Position: 0xA84B / 43083
{
	return "PickupFlagsSet";
}

void Function_341(var uParam0, bool bParam1) //Position: 0xA862 / 43106
{
	Function_342(bParam1);
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
		Function_275(uParam0, 1);
	}
	Function_39(256);
	Function_98(64);
	Function_70(0);
	return;
}

void Function_342(int iParam0) //Position: 0xA8D3 / 43219
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_343(var uParam0, int iParam1) //Position: 0xA8E1 / 43233
{
	uParam0->f_96 = iParam1;
	return;
}

void Function_344(int iParam0) //Position: 0xA8ED / 43245
{
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_TES_Whores"), iParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_449);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iParam0 = (iParam0 - 1);
	return;
}

void Function_345() //Position: 0xA925 / 43301
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
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_248 = CREATE_LAYOUT("TesoroAzulMP_layout");
	Local_248.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_total", 2, -3265,558f, 43,34511f, 4548,43f, 0.0f, 0.0f, 0.0f, 67,4185f, 13,7396f, 45,04267f);
	Local_248.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_WestGate", 2, -3280,587f, 43,34511f, 4549,446f, 0.0f, 0.0f, 0.0f, 30,43488f, 13,7396f, 35,54831f);
	Local_248.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_EastGate", 2, -3250,782f, 43,34511f, 4549,446f, 0.0f, 0.0f, 0.0f, 30,43488f, 13,7396f, 35,54831f);
	Local_248.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_Church_Roof", 2, -3259,293f, 39,51106f, 4552,304f, 0.0f, 0.0f, 0.0f, 17,71045f, 3,075963f, 2,201911f);
	Local_248.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_Quad1", 2, -3241,948f, 41,74776f, 4549,446f, 0.0f, 0.0f, 0.0f, 14,90093f, 13,7396f, 40,71325f);
	Local_248.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_Quad2", 2, -3263,256f, 41,74776f, 4549,446f, 0.0f, 0.0f, 0.0f, 14,90093f, 13,7396f, 40,71325f);
	Local_248.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_248, "v_tes_Quad3", 2, -3285,48f, 41,74776f, 4549,446f, 0.0f, 0.0f, 0.0f, 14,90093f, 13,7396f, 40,71325f);
	Local_248.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_248, "SpawnVol_0_set");
	(*&Local_248 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_0_sub_0", 2, -3172,288f, 44,91516f, 4588,405f, 0.0f, -118,3486f, 0.0f, 4,682272f, 5,515346f, 5,070396f);
	ADD_TO_VOLUME_SET(Local_248.f_216, (*&Local_248 + 200)[0]);
	(*&Local_248 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_0_sub_1", 2, -3160,648f, 37,88779f, 4548,238f, 0.0f, -87,26968f, 0.0f, 6,847756f, 4,636385f, 5,070396f);
	ADD_TO_VOLUME_SET(Local_248.f_216, (*&Local_248 + 200)[1]);
	(*&Local_248 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_0_sub_2", 2, -3177,195f, 36,66467f, 4507,135f, 0.0f, -58,69168f, 0.0f, 6,847756f, 4,636385f, 5,070396f);
	ADD_TO_VOLUME_SET(Local_248.f_216, (*&Local_248 + 200)[2]);
	Local_248.f_236 = CREATE_VOLUME_SET_IN_LAYOUT(Local_248, "SpawnVol_1_set");
	(*&Local_248 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_1_sub_0", 2, -3257,756f, 39,42986f, 4560,399f, 0.0f, 180,8579f, 0.0f, 2,326928f, 2,97169f, 2,105674f);
	ADD_TO_VOLUME_SET(Local_248.f_236, (*&Local_248 + 220)[0]);
	(*&Local_248 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_1_sub_1", 2, -3258,352f, 43,2326f, 4559,94f, 0.0f, 179,6222f, 0.0f, 4,503315f, 2,132437f, 2,105674f);
	ADD_TO_VOLUME_SET(Local_248.f_236, (*&Local_248 + 220)[1]);
	(*&Local_248 + 220)[2] = CREATE_VOLUME_IN_LAYOUT(Local_248, "spawnvol_1_sub_2", 2, -3246,563f, 39,70726f, 4561,78f, 0.0f, -0,7615272f, 0.0f, 1,684798f, 2,132437f, 2,725391f);
	ADD_TO_VOLUME_SET(Local_248.f_236, (*&Local_248 + 220)[2]);
	Local_248.f_240 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_248, 8, 0);
	*(&Local_248 + 244[06]) = { -3261,957f, 42,45774f, 4562,19f };
	*(&Local_248 + 244[06] + 12) = { 0.0f, 97,48968f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_248, "f_WeaponPickup", -3261,957f, 42,45774f, 4562,19f, 0.0f, 97,48968f, 0.0f);
	Unknown_Function();
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_248.f_240);
	*(&Local_248 + 244[16]) = { -3293,516f, 39,25993f, 4555f };
	*(&Local_248 + 244[16] + 12) = { 0.0f, -544,3273f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_248, "f_AmmoPickup", -3293,516f, 39,25993f, 4555f, 0.0f, -544,3273f, 0.0f);
	Unknown_Function();
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_248.f_240);
	*(&Local_248 + 244[26]) = { -3240,033f, 37,20203f, 4530,032f };
	*(&Local_248 + 244[26] + 12) = { 0.0f, -356,0922f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_248, "f_AmmoPickup1", -3240,033f, 37,20203f, 4530,032f, 0.0f, -356,0922f, 0.0f);
	Unknown_Function();
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_248.f_240);
	*(&Local_248 + 320) = { -3258,649f, 38,1489f, 4545,347f };
	*(&Local_248 + 320 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_248.f_344 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Tes_Center", -3258,649f, 38,1489f, 4545,347f, 0.0f, 0.0f, 0.0f);
	Local_248.f_348 = CREATE_OBJECTSET_IN_LAYOUT("f_Whore_CoverSet", Local_248, 8, 0);
	*(&Local_248 + 352[06]) = { -3239,637f, 38,1489f, 4558,078f };
	*(&Local_248 + 352[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Cover1", -3239,637f, 38,1489f, 4558,078f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_248.f_348);
	*(&Local_248 + 352[16]) = { -3249,864f, 38,14893f, 4537,068f };
	*(&Local_248 + 352[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Cover2", -3249,864f, 38,14893f, 4537,068f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_248.f_348);
	*(&Local_248 + 352[26]) = { -3252.0f, 38,14893f, 4552,085f };
	*(&Local_248 + 352[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Cover3", -3252.0f, 38,14893f, 4552,085f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_248.f_348);
	*(&Local_248 + 352[36]) = { -3265,815f, 38,14893f, 4552.0f };
	*(&Local_248 + 352[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Cover4", -3265,815f, 38,14893f, 4552.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_248.f_348);
	*(&Local_248 + 352[46]) = { -3293,554f, 39,15281f, 4551,259f };
	*(&Local_248 + 352[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Cover5", -3293,554f, 39,15281f, 4551,259f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_248.f_348);
	*(&Local_248 + 352[56]) = { -3279,941f, 38,14892f, 4538,727f };
	*(&Local_248 + 352[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_248, "f_Cover6", -3279,941f, 38,14892f, 4538,727f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_248.f_348);
}

int Function_346() //Position: 0xB5C9 / 46537
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_347(&Local_248 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_37410].f_32))
		{
			return 0;
		}
		if (!Function_347(&iLocal_402))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_347(int iParam0) //Position: 0xB603 / 46595
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_352();
	iVar1 = 0;
	if (!Function_83(iParam0[iVar03], 16))
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
		if (Function_83(iParam0[iVar03], 4))
		{
			if (!Function_83(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_83(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_83(iParam0[03], 8) || iVar1));
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
		if (Function_83(iParam0[iVar03], 4))
		{
			if (!Function_83(iParam0[iVar03], 2))
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

void Function_348() //Position: 0xB97E / 47486
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

bool Function_349(int iParam0) //Position: 0xB9BE / 47550
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_350() //Position: 0xB9DA / 47578
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

void Function_351(var uParam0, int iParam1) //Position: 0xBA05 / 47621
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_352() //Position: 0xBA16 / 47638
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

void Function_353(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBA58 / 47704
{
	Function_354(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_354(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBA6F / 47727
{
	if (!Function_332(iParam1))
	{
		return;
	}
	Function_355(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_355(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBA92 / 47762
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

void Function_356(int iParam0, bool bParam1) //Position: 0xBABC / 47804
{
	Function_360(iParam0);
	Function_360(iParam0 + 228);
	if (bParam1)
	{
		Function_357(iParam0);
	}
	return;
}

void Function_357(int iParam0) //Position: 0xBAD8 / 47832
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

void Function_358(var uParam0, int iParam1) //Position: 0xBAF8 / 47864
{
	Function_359(uParam0, iParam1, 0);
	return;
}

void Function_359(int iParam0, int iParam1, int iParam2) //Position: 0xBB06 / 47878
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_360(int iParam0) //Position: 0xBB17 / 47895
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

void Function_361(var uParam0, int iParam1) //Position: 0xBB44 / 47940
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_362(var uParam0) //Position: 0xBB50 / 47952
{
	Function_355(uParam0, 4294967295, 0, 1);
	return;
}

void Function_363() //Position: 0xBB5E / 47966
{
	Function_365(&iLocal_402, "mp_action_areas", 10, 0);
	Function_364(&iLocal_402, 496, 2, 1);
	Function_364(&iLocal_402, 497, 2, 1);
	Function_364(&iLocal_402, 498, 2, 1);
	Function_364(&iLocal_402, 499, 2, 1);
	Function_364(&iLocal_402, 500, 2, 1);
	Function_364(&iLocal_402, 501, 2, 1);
	Function_364(&iLocal_402, 502, 2, 1);
	Function_364(&iLocal_402, 503, 2, 1);
	Function_364(&iLocal_402, 504, 2, 1);
	Function_364(&iLocal_402, 65, 2, 1);
	Function_364(&iLocal_402, 66, 2, 1);
	Function_364(&iLocal_402, 67, 2, 1);
	Function_364(&iLocal_402, 68, 2, 1);
	return;
}

var Function_364(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xBC18 / 48152
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_83(uParam0[iVar03], 4))
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

var Function_365(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBCE8 / 48360
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_366(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_351(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_366(var uParam0, int iParam1, int iParam2) //Position: 0xBD20 / 48416
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_83(uParam0[iVar03], 4))
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

void Function_367(int iParam0, float fParam1) //Position: 0xBDE4 / 48612
{
	if (!Function_64(iParam0))
	{
		Function_368(iParam0, fParam1);
	}
	return;
}

void Function_368(int iParam0, float fParam1) //Position: 0xBDFA / 48634
{
	Function_240(iParam0, -fParam1);
	return;
}

void Function_369(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4) //Position: 0xBE08 / 48648
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_370(fParam4);
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

int Function_370(float fParam0) //Position: 0xBE4E / 48718
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

bool Function_371(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xBE82 / 48770
{
	if (!Function_411())
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
		Function_406();
	}
	Function_404(3);
	Function_403();
	if (StackVal != 0)
	{
		Function_401(uLocal_40, *uParam1, uParam2, 1);
		Function_400(uParam0);
	}
	if (StackVal >= bLocal_42)
	{
		bLocal_42 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_397(uParam0);
	}
	switch (iLocal_16)
	{
		case 0x00000000:
		case 0x00000003:
			Function_383(52085, 51765);
			break;
		
		case 0x00000002:
			Function_383(49286, 48967);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_372(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xBF47 / 48967
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_375(bParam1, uParam2, uParam3);
		bVar0 = Function_213(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_373(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_213(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_213(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_213(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_128(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_373(bool bParam0, int iParam1, int iParam2) //Position: 0xBFEA / 49130
{
	var uVar0;
	
	return Function_374(bParam0, iParam1, &uVar0, iParam2);
}

int Function_374(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC000 / 49152
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

void Function_375(bool bParam0, int iParam1, char* cParam2) //Position: 0xC065 / 49253
{
	if (bParam0)
	{
		if (Function_120())
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

int Function_376() //Position: 0xC086 / 49286
{
	if (!Function_377(1))
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

bool Function_377(bool bParam0) //Position: 0xC142 / 49474
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_120() || Function_382(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_380(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_120())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_378(Function_120());
	return 1;
}

void Function_378(bool bParam0) //Position: 0xC1C3 / 49603
{
	if (bParam0 || Function_36(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_36(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_36(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_36(1048576) || Function_36(4)) || Function_379(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_30(0x20000000, 0, 1);
	}
	return;
}

var Function_379(int iParam0, bool bParam1) //Position: 0xC24C / 49740
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_380(var uParam0) //Position: 0xC26C / 49772
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_381(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xC280 / 49792
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

int Function_382(bool bParam0, bool bParam1) //Position: 0xC2C5 / 49861
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

void Function_383(int iParam0, int iParam1) //Position: 0xC2F9 / 49913
{
	Function_384(iParam0, iParam1, 51758);
	return;
}

void Function_384(var uParam0, var uParam1, int iParam2) //Position: 0xC30A / 49930
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
	if (Function_120())
	{
		Function_136(!Function_36(16));
	}
	if (Function_36(16))
	{
		Function_386(&uParam0, &uParam1, &iParam2);
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
			Function_385();
		}
		Function_30(16384, 1, 1);
	}
	else if (!Function_36(32))
	{
		Function_385();
	}
	Function_30(32768, 0, 1);
	return;
}

void Function_385() //Position: 0xC4A3 / 50339
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

void Function_386(var uParam0, var uParam1, int iParam2) //Position: 0xC5AC / 50604
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
			if (!Function_130(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_387(bVar1, 2048, 1))
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
				if (Function_373(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_373(bVar1, (4294966296 - bVar1), 1))
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

bool Function_387(bool bParam0, int iParam1, bool bParam2) //Position: 0xC724 / 50980
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_379(iParam1, bParam2);
	}
	if (!Function_130(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_388(iParam1), 64);
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

var Function_388(int iParam0) //Position: 0xC7A5 / 51109
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

int Function_389() //Position: 0xCA2E / 51758
{
	return 1;
}

int Function_390(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xCA35 / 51765
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_375(bParam1, iParam2, cParam3);
	iVar0 = Function_394(bParam0);
	if (iVar0 == Function_393())
	{
		iVar1 = ((CEIL(Function_391(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_391(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_373(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_387(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_391(int iParam0, bool bParam1) //Position: 0xCACD / 51917
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_392(iParam0);
	}
	if (!Function_130(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_392(int iParam0) //Position: 0xCB36 / 52022
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_393() //Position: 0xCB46 / 52038
{
	return Global_78480;
}

int Function_394(bool bParam0) //Position: 0xCB50 / 52048
{
	if (!Function_130(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_393();
	}
	return Global_76943[bParam096];
}

int Function_395() //Position: 0xCB75 / 52085
{
	if (!Function_377(1))
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
	Function_396();
	return 1;
}

void Function_396() //Position: 0xCC11 / 52241
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

void Function_397(int iParam0) //Position: 0xCC4E / 52302
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
		Function_399(&bLocal_18);
		iLocal_17 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_22)
	{
		if (iLocal_22[iVar1] >= 4294967295)
		{
			iLocal_22[iVar1] = 4294967295;
			Function_398(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_398(int iParam0) //Position: 0xCCC7 / 52423
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_399(int iParam0) //Position: 0xCCF2 / 52466
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

void Function_400(int iParam0) //Position: 0xCD39 / 52537
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
							Function_97(bVar1);
							vVar3 = { StackVal, StackVal, Function_97(bVar1) };
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

int Function_401(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xCE75 / 52853
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
						if (Function_402(bVar4) == bParam1)
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

int Function_402(bool bParam0) //Position: 0xCF57 / 53079
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

void Function_403() //Position: 0xCFB1 / 53169
{
	Function_404(4);
	return;
}

void Function_404(int iParam0) //Position: 0xCFBB / 53179
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
			Function_405(iParam0);
		}
	}
	return;
}

void Function_405(int iParam0) //Position: 0xCFED / 53229
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_406() //Position: 0xCFFC / 53244
{
	bool bVar0;
	
	if (!iLocal_21)
	{
		bVar0 = Function_38();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				if (Function_408(bVar0, bLocal_18, 1, 0, 0, -1.0f))
				{
					Function_407();
					iLocal_21 = 1;
				}
			}
		}
	}
	return;
}

void Function_407() //Position: 0xD031 / 53297
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_408(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xD04A / 53322
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_410(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, iLocal_47);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_409(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
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

bool Function_409(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD0B3 / 53427
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

int Function_410(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD1A0 / 53664
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

bool Function_411() //Position: 0xD24E / 53838
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

void Function_412(bool bParam0) //Position: 0xD271 / 53873
{
	bool bVar0;
	
	bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	if (Function_413(bParam0))
	{
		Function_246(bParam0, bVar0);
	}
	if (bVar0 == 7)
	{
		ADD_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_248.f_172);
	}
	return;
}

bool Function_413(bool bParam0) //Position: 0xD29C / 53916
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_414(bParam0))
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

bool Function_414(bool bParam0) //Position: 0xD2E9 / 53993
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

bool Function_415(int iParam0) //Position: 0xD316 / 54038
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
	if (!Function_430(16, 0))
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
	Function_239(iParam0 + 16 + 8);
	Function_343(iParam0, 55102);
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
	Function_421(2);
	Function_420(1);
	iVar3 = 54474;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 54355);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 54316);
	return 1;
}

void Function_416(int iParam0) //Position: 0xD42C / 54316
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

void Function_417(int iParam0) //Position: 0xD453 / 54355
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

void Function_418(int iParam0) //Position: 0xD4CA / 54474
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
				Function_419(&bLocal_18, &iVar5);
			}
		}
	}
	return;
}

void Function_419(var uParam0, int iParam1) //Position: 0xD517 / 54551
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

void Function_420(int iParam0) //Position: 0xD56C / 54636
{
	Function_40(&Global_83864 + 1252, iParam0);
	return;
}

void Function_421(int iParam0) //Position: 0xD57E / 54654
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
	Function_164();
	Function_165();
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
	Function_423(0, 0);
	Function_422();
	return;
}

void Function_422() //Position: 0xD642 / 54850
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_423(bool bParam0, bool bParam1) //Position: 0xD65B / 54875
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_428(&Global_78480);
	Function_427(&Global_78480);
	uVar0 = Function_216(37);
	Function_425();
	if (!bParam0)
	{
		Function_210(37, uVar0);
	}
	Function_93(18264, 0);
	Function_424();
	return;
}

void Function_424() //Position: 0xD6A7 / 54951
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_425() //Position: 0xD6C6 / 54982
{
	Function_426(&Global_78480 + 220);
	return;
}

void Function_426(int iParam0) //Position: 0xD6D5 / 54997
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

void Function_427(int iParam0) //Position: 0xD6F6 / 55030
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

void Function_428(int iParam0) //Position: 0xD71A / 55066
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

void Function_429(var uParam0) //Position: 0xD73E / 55102
{
	uParam0 = uParam0;
	return;
}

bool Function_430(var uParam0, bool bParam1) //Position: 0xD748 / 55112
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_431("freemodetest");
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

int Function_431(bool bParam0) //Position: 0xD7FB / 55291
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

