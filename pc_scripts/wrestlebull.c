//Decompiled with MagicRDR v1.0
//Function Count : 41
//Statics Count : 183
//Natives Count : 101
//Parameters Count : 4

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	float fLocal_25 = 0.0f;
	float fLocal_26 = 0.0f;
	float fLocal_27 = 0.0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
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
	var uLocal_51 = 1;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0.0f;
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
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
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
	var uLocal_115 = 5;
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
	float fLocal_143 = 0.0f;
	float fLocal_144 = 0.0f;
	int iLocal_145 = 0;
	var uLocal_146 = 3;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	float fLocal_164 = 0.0f;
	bool bLocal_165 = false;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	struct<25> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_22 = 0;
	fLocal_23 = 12.0f;
	fLocal_24 = 16.0f;
	fLocal_25 = 26.0f;
	fLocal_26 = 30.0f;
	fLocal_27 = 1.0f;
	bLocal_35 = RAND_FLOAT_RANGE(3.0f, 8.0f);
	iLocal_36 = 1;
	iLocal_37 = 0;
	iLocal_55 = 0;
	iLocal_56 = 0;
	iLocal_64 = 0;
	fLocal_65 = 0.0f;
	iLocal_99 = 0;
	iLocal_100 = 0;
	fLocal_143 = 0,5f;
	fLocal_144 = 0.0f;
	iLocal_145 = 0;
	bLocal_165 = false;
	iLocal_178 = 0;
	while ((((((!IS_EXITFLAG_SET() && IS_ACTOR_VALID(&iScriptParam_0 + 8)) && IS_ACTOR_VALID(&iScriptParam_0)) && !Global_6627) && IS_ACTOR_PLAYER(&iScriptParam_0)) && Function_37(&iScriptParam_0, 1, 1, 1, 1, 0, 0, 1, 0)) && !iLocal_178)
	{
		switch (iLocal_145)
		{
			case 0x00000000:
				HUD_SET_MINIGAME_TYPE_LAYOUT(16);
				Function_35(&uLocal_146, "bull_breaking", 5, 0);
				Function_35(&uLocal_146, "custom/bull_breaking", 8, 0);
				Function_35(&uLocal_146, "nminigames", 10, 0);
				uLocal_166 = CREATE_LAYOUT("WrestleBullLayout");
				iLocal_145 = 1;
			
			case 0x00000001:
				if (Function_29(&uLocal_146))
				{
					bLocal_165 = true;
					SET_ANIM_SET_FOR_ACTOR(&iScriptParam_0, "bull_breaking", 0);
					SET_ANIM_SET_FOR_ACTOR(&iScriptParam_0 + 8, "bull_breaking", 0);
					fLocal_164 = 0.0f;
					iLocal_145 = 2;
				}
				break;
			
			case 0x00000002:
				if (ACTOR_HAS_ANIM_SET(&iScriptParam_0, "bull_breaking") && ACTOR_HAS_ANIM_SET(&iScriptParam_0 + 8, "bull_breaking"))
				{
					Function_28(&iLocal_160);
					Function_24(0, "{@UI.ACCEPT}", "HorseBreaking_WrestleBull", 1, 0, 0, 0, 0);
					fLocal_164 = 0.0f;
					iLocal_145 = 3;
				}
				break;
			
			case 0x00000003:
				if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
				{
					Function_23(0);
					TASK_FACE_ACTOR(&iScriptParam_0, &iScriptParam_0 + 8, 0, 3212836864);
					Function_20("WrestleBull_PressARightTimeHelp", 0x41200000, 1, 0, 2, 1, 0);
					SET_ACTOR_RIDEABLE(&iScriptParam_0 + 8, 0);
					fLocal_164 = 0.0f;
					iLocal_145 = 5;
				}
				else if (Function_16(&iLocal_160) < 10.0f)
				{
					iLocal_145 = 9;
				}
				break;
			
			case 0x00000005:
				if (GET_TASK_STATUS(&iScriptParam_0, 22) != 1)
				{
					SET_ACTION_NODE_FOR_ACTOR(&iScriptParam_0, "bull_breaking/Player/grab/ready_pre");
					Function_12(&iLocal_160);
					Function_11(&iScriptParam_0);
					*(&Local_168 + 12) = Function_11(&iScriptParam_0);
					Function_10(GET_OBJECT_FROM_ACTOR(&iScriptParam_0));
					Local_168 = Function_10(GET_OBJECT_FROM_ACTOR(&iScriptParam_0));
					Local_168.f_24 = 0;
					uLocal_176 = Function_6(&uLocal_166, 0, &Local_168, &iScriptParam_0, 1, 0, 0);
					fLocal_164 = 0.0f;
					iLocal_145 = 4;
				}
				break;
			
			case 0x00000004:
				if (Function_5(&iScriptParam_0, &iScriptParam_0 + 8) >= 5.0f)
				{
					Function_24(0, "{@UI.ACCEPT}", "HorseBreaking_TimedMount", 1, 0, 0, 0, 0);
					if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
					{
						Function_23(0);
						iLocal_145 = 7;
					}
					else if ((Function_5(&iScriptParam_0, &iScriptParam_0 + 8) >= 1.0f || IS_ACTION_NODE_PLAYING_PARTIAL(&iScriptParam_0, "default_character_Main/ReactionProcessing")) || Function_16(&iLocal_160) < 10.0f)
					{
						iLocal_145 = 8;
					}
				}
				else
				{
					Function_23(0);
				}
				break;
			
			case 0x00000007:
				SET_ACTOR_RIDEABLE(&iScriptParam_0 + 8, 1);
				ACTOR_MOUNT_ACTOR(&iScriptParam_0, &iScriptParam_0 + 8);
				iLocal_145 = 9;
				break;
			
			case 0x00000008:
				iLocal_145 = 9;
				break;
			
			case 0x00000009:
				iLocal_178 = 1;
				break;
		}
		WAIT(false);
	}
	Function_23(0);
	if (bLocal_165)
	{
		if (IS_ACTOR_VALID(&iScriptParam_0))
		{
			RESET_ANIM_SET_FOR_ACTOR(&iScriptParam_0, 0);
		}
		if (IS_ACTOR_VALID(&iScriptParam_0 + 8))
		{
			RESET_ANIM_SET_FOR_ACTOR(&iScriptParam_0 + 8, 0);
		}
	}
	Function_1(&uLocal_146);
	DESTROY_OBJECT(&uLocal_176);
	DESTROY_LAYOUT(&uLocal_166);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x426 / 1062
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x44E / 1102
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x599 / 1433
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x5B6 / 1462
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

float Function_5(float fParam0, int iParam1) //Position: 0x5D4 / 1492
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

var Function_6(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6) //Position: 0x6C9 / 1737
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WrestleBull_Challenge", 1, 1);
	}
	Function_7(&uVar0, &uParam2, &uParam3);
	if (fParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_7(var uParam0, Vector3 vParam1, int iParam2) //Position: 0x75E / 1886
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_8(&uVar0, &vParam1, &iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	return;
}

void Function_8(int iParam0, struct<25> Param1) //Position: 0x78C / 1932
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	Var0 = Vector(2,025223f, 0,687258f, 1,542038f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&iParam0, Var0);
	Var0 = Vector(0,831238f, 0,62969f, -0,50264f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&iParam0, Var0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &fParam2, 23);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &fParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 1,187767f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_9() //Position: 0x877 / 2167
{
	int iVar0;
	
	return &iVar0;
}

struct<8> Function_10(int iParam0) //Position: 0x880 / 2176
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_11(int iParam0) //Position: 0x8A9 / 2217
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_12(int iParam0) //Position: 0x8BB / 2235
{
	Function_13(&iParam0, 0.0f);
	return;
}

void Function_13(vector3 vParam0) //Position: 0x8C8 / 2248
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_15(&vParam0, 1);
	Function_14(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x8ED / 2285
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x903 / 2307
{
	uParam0 = (uParam0 || iParam1);
	return;
}

float Function_16(vector3 vParam0) //Position: 0x914 / 2324
{
	if (Function_19(&vParam0))
	{
		if (Function_17(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_17(int iParam0) //Position: 0x9E1 / 2529
{
	return Function_18(iParam0, 2);
}

bool Function_18(var uParam0, int iParam1) //Position: 0x9EF / 2543
{
	return (uParam0 && iParam1) == 0;
}

bool Function_19(int iParam0) //Position: 0x9FC / 2556
{
	return Function_18(iParam0, 1);
}

void Function_20(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA0A / 2570
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_21(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_21(int iParam0) //Position: 0xA95 / 2709
{
	char* cVar0[16];
	
	if (!Function_22())
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

bool Function_22() //Position: 0xAD4 / 2772
{
	if (Function_18(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_23(bool bParam0) //Position: 0xAEF / 2799
{
	UI_HIDE_PROMPT(bParam0);
	return 1;
}

int Function_24(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0xAFB / 2811
{
	if (!Function_27(uParam0, &uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_26(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_25(uParam0, &iParam2);
}

int Function_25(var uParam0, int iParam1) //Position: 0xB3E / 2878
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_26(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xB4D / 2893
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_27(var uParam0, int iParam1) //Position: 0xB8C / 2956
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

void Function_28(int iParam0) //Position: 0xB9B / 2971
{
	if (!Function_19(&iParam0))
	{
		Function_13(&iParam0, 0.0f);
	}
	return;
}

bool Function_29(struct<2>[] Param0) //Position: 0xBB2 / 2994
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_34();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_33(&(Param0[iVar02]), 8);
		}
		else if (Function_32())
		{
			iVar1 = 1;
			Function_33(&(Param0[iVar02]), 8);
		}
		Function_33(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_33(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_33(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_33(&(Param0[iVar02]), 2);
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
	Function_30();
	return 1;
}

void Function_30() //Position: 0xF74 / 3956
{
	if (!Function_31(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_31(int iParam0) //Position: 0xFB4 / 4020
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_32() //Position: 0xFD0 / 4048
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_33(struct<13> Param0) //Position: 0xFFE / 4094
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_34() //Position: 0x1011 / 4113
{
	if (!Function_31(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

var Function_35(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1053 / 4179
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_36(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_33(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_36(struct<2>[] Param0, int iParam1, bool bParam2) //Position: 0x1091 / 4241
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = bParam2;
			Function_33(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != bParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_37(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x1160 / 4448
{
	var uVar0;
	
	if (bParam1)
	{
		Function_40(&uVar0, 1);
	}
	if (&bParam2)
	{
		Function_40(&uVar0, 2);
	}
	if (&bParam3)
	{
		Function_40(&uVar0, 4);
	}
	if (&bParam4)
	{
		Function_40(&uVar0, 8);
	}
	if (&bParam5)
	{
		Function_40(&uVar0, 1024);
	}
	if (&bParam7)
	{
		Function_40(&uVar0, 16);
	}
	if (&bParam8)
	{
		Function_40(&uVar0, 32);
	}
	if (&bParam6)
	{
		Function_40(&uVar0, 1048576);
	}
	return Function_38(&uParam0, uVar0);
}

int Function_38(int iParam0, int iParam1) //Position: 0x11D7 / 4567
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_39(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_39(&iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(&iParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_39(var uParam0, int iParam1) //Position: 0x12C5 / 4805
{
	return (uParam0 && iParam1) == 0;
}

void Function_40(var uParam0, int iParam1) //Position: 0x12D2 / 4818
{
	Function_15(&uParam0, iParam1);
	return;
}

