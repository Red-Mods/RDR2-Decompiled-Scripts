//Decompiled with MagicRDR v1.0
//Function Count : 193
//Statics Count : 215
//Natives Count : 319
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vLocal_33[3] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_43[3] = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_47[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_63[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_74 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_77 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_80 = { 0.0f, 0.0f, 0.0f };
	float fLocal_83 = 0.0f;
	vector3 vLocal_84 = { 0.0f, 0.0f, 0.0f };
	float fLocal_87 = 0.0f;
	int iLocal_88 = 0;
	vector3 vLocal_89 = { 0.0f, 0.0f, 0.0f };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	vector3 vLocal_94[2] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	float fLocal_101[2] = { 0.0f, 0.0f };
	vector3 vLocal_104 = { 0.0f, 0.0f, 0.0f };
	float fLocal_107 = 0.0f;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = false;
	bool bLocal_111 = false;
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	int iLocal_114[3] = { 0, 0, 0 };
	int iLocal_118[5] = { 0, 0, 0, 0, 0 };
	int iLocal_124[2] = { 0, 0 };
	bool bLocal_127 = false;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = false;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	bool bLocal_143[2] = { false, false };
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	char* cLocal_149 = NULL;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	bool bLocal_162 = false;
	int iLocal_163 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2[3];
	bool bVar6[5];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar66;
	int iVar67;
	int iVar68;
	bool bVar69;
	int iVar70;
	bool bVar71;
	float fVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	bool bVar79;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_31 = 0;
	iLocal_93 = 0;
	iLocal_128 = 1;
	iLocal_129 = 0;
	bLocal_130 = false;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_136 = 0;
	iLocal_148 = 0;
	bLocal_150 = false;
	iLocal_151 = 0;
	iLocal_152 = 0;
	iLocal_160 = 0;
	iLocal_163 = 0;
	if ((Global_16876[ScriptParam_0.f_566].f_12 % 4) == 0)
	{
		bLocal_32 = 2;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 4) == 1)
	{
		bLocal_32 = false;
	}
	else if ((Global_16876[ScriptParam_0.f_566].f_12 % 4) == 2)
	{
		bLocal_32 = 3;
	}
	else
	{
		bLocal_32 = true;
	}
	vLocal_80 = { -4354.0f, 30.0f, 4378.0f };
	fLocal_83 = 354.672f;
	vLocal_71 = { -4343.0f, 30.118f, 4378.945f };
	vLocal_33[03] = { -4345.0f, 30.117f, 4379.21f };
	fLocal_43[0] = 0.0f;
	vLocal_33[13] = { -4341.0f, 30.118f, 4378.938f };
	fLocal_43[1] = 0.0f;
	vLocal_33[23] = { StackVal, StackVal, vLocal_80 };
	fLocal_43[2] = fLocal_83;
	vLocal_84 = { -4354.701f, 30.159f, 4373.448f };
	fLocal_87 = 286.817f;
	vLocal_77 = { -4343.84f, 30.1176f, 4371.467f };
	vLocal_47[03] = { -4341.4f, 30.115f, 4371.8f };
	fLocal_63[0] = 0.0f;
	vLocal_47[13] = { -4346.09f, 30.1176f, 4371.567f };
	fLocal_63[1] = 0.0f;
	vLocal_47[23] = { StackVal, StackVal, vLocal_84 };
	fLocal_63[2] = fLocal_87;
	vLocal_74 = { vLocal_77.x, 30.0f, 4373.0f };
	vLocal_47[33] = { -4346.294f, 30.118f, 4389.091f };
	fLocal_63[3] = 341.919f;
	switch (bLocal_32)
	{
		case 0x00000000:
			vLocal_47[43] = { -4340.88f, 30.118f, 4385.204f };
			fLocal_63[4] = 25.632f;
			break;
		
		case 0x00000001:
			vLocal_47[43] = { -4342.76f, 30.12f, 4383.38f };
			fLocal_63[4] = 25.632f;
			break;
		
		case 0x00000003:
		case 0x00000002:
			vLocal_47[43] = { -4342.38f, 30.12f, 4386.26f };
			fLocal_63[4] = 25.632f;
			break;
	}
	vLocal_94[03] = { -4341.427f, 30.114f, 4381.91f };
	fLocal_101[0] = 180.0f;
	vLocal_94[13] = { -4344.385f, 30.118f, 4382.406f };
	fLocal_101[1] = 180.0f;
	vLocal_104 = { -4338.88f, 30.118f, 4385.204f };
	fLocal_107 = 180.0f;
	iVar0 = 0;
	bVar1 = CREATE_LAYOUT(Function_192());
	bVar14 = 17;
	Function_191(&uLocal_133, 0.0f);
	iVar66 = 0;
	iVar68 = 0;
	iVar70 = 0;
	fVar72 = 0.0f;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		Function_189(&bVar14, "stolen_panic", 5, 0);
		Function_189(&bVar14, "custom/stolen_panic", 8, 0);
		Function_189(&bVar14, "execution_idle", 5, 0);
		Function_189(&bVar14, "custom/execution_idle", 8, 0);
		Function_189(&bVar14, "mourn_loop", 1, 0);
		switch (bLocal_32)
		{
			case 0x00000000:
				Function_189(&bVar14, "stand_kneelvomit_n_any", 1, 0);
				break;
			
			case 0x00000001:
				Function_189(&bVar14, "rebel_riot02", 1, 0);
				break;
			
			case 0x00000003:
				Function_189(&bVar14, "firesquad_heldback", 1, 0);
				break;
			
			case 0x00000002:
				Function_189(&bVar14, "firesquad_shove", 1, 0);
				break;
		}
		iVar73 = Function_188(11, 3);
		switch (bLocal_32)
		{
			case 0x00000001:
				iLocal_118[4] = Function_187(268, 299, iLocal_118[3], iLocal_118[2], iLocal_118[4]);
				break;
			
			case 0x00000000:
			case 0x00000002:
			case 0x00000003:
				switch (iVar73)
				{
					case 0x00000000:
						iLocal_118[4] = 238;
						break;
					
					case 0x00000001:
						iLocal_118[4] = 240;
						break;
					
					case 0x00000002:
						iLocal_118[4] = 239;
						break;
				}
		}
		iVar67 = 0;
		while (iVar67 <= 4)
		{
			if (iVar67 == 2)
			{
				iVar74 = Function_188(11, 3);
				if (iVar74 == 0)
				{
					iLocal_118[2] = 299;
				}
				else if (iVar74 == 1)
				{
					iLocal_118[2] = 297;
				}
				else
				{
					iLocal_118[2] = 292;
				}
			}
			else if (iVar67 == 3)
			{
				iVar74 = Function_188(11, 3);
				if (iVar74 == 0)
				{
					iLocal_118[3] = 286;
				}
				else if (iVar74 == 1)
				{
					iLocal_118[3] = 278;
				}
				else
				{
					iLocal_118[3] = 274;
				}
			}
			else
			{
				iLocal_118[iVar67] = Function_178(Global_30750[0], 1, 0, 1);
			}
			iVar67++;
		}
		iVar67 = 0;
		while (iVar67 <= 3)
		{
			if (iVar67 == 2)
			{
				iLocal_114[2] = 394;
			}
			else
			{
				iLocal_114[iVar67] = RAND_INT_RANGE(379, 393);
			}
			iVar67++;
		}
		iLocal_124[0] = RAND_INT_RANGE(379, 393);
		iVar75 = Function_188(11, 2);
		if (iVar75 == 0)
		{
			iLocal_124[1] = 379;
		}
		else
		{
			iLocal_124[1] = 393;
		}
		switch (bLocal_32)
		{
			case 0x00000001:
				bLocal_127 = RAND_INT_RANGE(379, 393);
				break;
			
			case 0x00000003:
			case 0x00000002:
				bLocal_127 = Function_187(268, 299, iLocal_118[3], iLocal_118[2], iLocal_118[4]);
				break;
			}
	}
	Function_177(&bVar14, iLocal_118[4], 3, 0);
	iVar67 = 0;
	while (iVar67 <= 4)
	{
		if (iLocal_118[iVar67] == 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_177(&bVar14, iLocal_118[iVar67], 3, 0);
		}
		iVar67++;
	}
	if (iVar0 != 5)
	{
		Function_176(&iLocal_118, 5);
		iVar67 = 0;
		while (iVar67 <= 3)
		{
			if (iLocal_114[iVar67] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_177(&bVar14, iLocal_114[iVar67], 3, 0);
			}
			iVar67++;
		}
	}
	if (iVar0 != 5)
	{
		Function_176(&iLocal_114, 3);
		if (iLocal_124[0] != 4294967295 || iLocal_124[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_177(&bVar14, iLocal_124[0], 3, 0);
			Function_177(&bVar14, iLocal_124[1], 3, 0);
		}
	}
	switch (bLocal_32)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000002:
			if (iVar0 != 5)
			{
				Function_175(bLocal_127);
				if (bLocal_127 == 4294967295)
				{
					iVar0 = 5;
				}
				else
				{
					Function_177(&bVar14, bLocal_127, 3, 0);
				}
			}
			break;
	}
	iVar77 = 0;
	if (Function_174(0))
	{
		iVar0 = 5;
	}
	iVar78 = 0;
	bVar79 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar76 = 600;
		if (Function_173(&bVar79, &iVar0, &iVar78, &iVar76, bLocal_130))
		{
			if (bVar79)
			{
				Function_172(&bVar2, 4294967295);
				Function_172(&bVar6, 4294967295);
				Function_172(&bLocal_143, 4294967295);
				Function_171(&bLocal_142);
			}
			else
			{
				Function_170(&bVar2, 4294967295);
				Function_170(&bVar6, 4294967295);
				Function_170(&bLocal_143, 4294967295);
				Function_169(&bLocal_142);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_163(&bVar14))
				{
					iVar0 = 1;
				}
				iVar76 = 600;
				break;
			
			case 0x00000001:
				if (Function_161(&(vLocal_47[03]), &ScriptParam_0 + 52, 0, ScriptParam_0.f_32))
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_34574, vLocal_33[03]) > Function_160())
				{
					iVar0 = 5;
					iVar76 = 0;
					break;
				}
				if (Function_159(StackVal, StackVal, vLocal_47[13], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar0 = 5;
					break;
				}
				Function_158(-4346.42f, 30.87f, 4382.23f, &bVar12, &bVar13);
				Function_156(-4346.42f, 30.87f, 4382.23f, 0, 0);
				if (IS_GRINGO_VALID(bVar12))
				{
					GRINGO_ALLOW_ACTIVATION(bVar12, false);
				}
				if (IS_GRINGO_VALID(bVar13))
				{
					GRINGO_ALLOW_ACTIVATION(bVar13, false);
				}
				bVar71 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_192(), 0, vLocal_47[13], 0.0f, 0.0f, 0.0f, 30.0f, 25.0f, 30.0f);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar71);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar71);
				iVar67 = 0;
				while (iVar67 <= 3)
				{
					bVar2[iVar67] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_192(), iLocal_114[iVar67], vLocal_33[iVar673], 0.0f, fLocal_43[iVar67], 0.0f);
					TASK_STAND_STILL(bVar2[iVar67], -1.0f, 0, 0);
					Function_155(bVar2[iVar67], 0);
					SET_ACTOR_VISION_XRAY(bVar2[iVar67], 1);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar2[iVar67], false);
					if (iVar67 == 2)
					{
						GIVE_WEAPON_TO_ACTOR(bVar2[iVar67], 41, 0, 1, 1);
					}
					else
					{
						GIVE_WEAPON_TO_ACTOR(bVar2[iVar67], 42, 0, 1, 1);
					}
					iVar67++;
				}
				iVar67 = 0;
				while (iVar67 <= 5)
				{
					if (iVar67 == 3)
					{
					}
					else
					{
						bVar6[iVar67] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_192(), iLocal_118[iVar67], vLocal_47[iVar673], 0.0f, fLocal_63[iVar67], 0.0f);
						TASK_STAND_STILL(bVar6[iVar67], -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(bVar6[iVar67], false);
					}
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar6[iVar67]);
					if (iVar67 <= 3)
					{
						SET_ANIM_SET_FOR_ACTOR(bVar6[iVar67], "execution_idle", 0);
						SET_ACTION_NODE_FOR_ACTOR(bVar6[iVar67], "execution_idle/firingsquad");
					}
					if (iVar67 == 4)
					{
						switch (bLocal_32)
						{
							case 0x00000000:
								SET_ANIM_SET_FOR_ACTOR(bVar6[iVar67], "stolen_panic", 0);
								SET_ACTION_NODE_FOR_ACTOR(bVar6[iVar67], "stolen_panic/loop");
								break;
						}
						SET_ACTOR_CAN_PLAY_GESTURES(bVar6[iVar67], false);
						SET_ACTOR_CAN_BE_HARDLOCKED(bVar6[iVar67], 0);
						SET_ACTOR_UPDATE_PRIORITY(bVar6[iVar67], false);
					}
					iVar67++;
				}
				iVar67 = 0;
				while (iVar67 <= 2)
				{
					bLocal_143[iVar67] = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_192(), iLocal_124[iVar67], vLocal_94[iVar673], 0.0f, fLocal_101[iVar67], 0.0f);
					TASK_STAND_STILL(bLocal_143[iVar67], -1.0f, 0, 0);
					SET_ACTOR_CAN_PLAY_GESTURES(bLocal_143[iVar67], false);
					Function_155(bLocal_143[iVar67], 0);
					SET_ACTOR_VISION_XRAY(bLocal_143[iVar67], 1);
					iVar67++;
				}
				switch (bLocal_32)
				{
					case 0x00000001:
						bLocal_142 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_192(), bLocal_127, vLocal_104, 0.0f, fLocal_107, 0.0f);
						TASK_STAND_STILL(bLocal_142, -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(bLocal_142, false);
						Function_155(bLocal_142, 0);
						SET_ACTOR_VISION_XRAY(bLocal_142, 1);
						break;
					
					case 0x00000003:
					case 0x00000002:
						bLocal_142 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_192(), bLocal_127, vLocal_104, 0.0f, fLocal_107, 0.0f);
						TASK_STAND_STILL(bLocal_142, -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(bLocal_142, false);
						SET_ACTOR_VISION_XRAY(bLocal_142, 1);
						SET_ACTOR_UPDATE_PRIORITY(bLocal_142, false);
						break;
				}
				if (IS_ACTOR_VALID(bLocal_143[0]))
				{
					if (IS_ACTOR_VALID(bVar6[4]))
					{
						TASK_POINT_GUN_AT_OBJECT(bLocal_143[0], bVar6[4], -1.0f, 0);
					}
				}
				PRINTVECTOR(*(&ScriptParam_0 + 8));
				PRINTNL();
				PRINTVECTOR(Global_34574);
				PRINTNL();
				AI_GOAL_LOOK_AT_ACTOR(bVar2[0], bVar6[0], 1, 1065353216, 3212836864, 3212836864, 0);
				AI_GOAL_LOOK_AT_ACTOR(bVar2[1], bVar6[1], 1, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_ONE_SHOT_DEATH(bVar6[0], 1);
				SET_ACTOR_ONE_SHOT_DEATH(bVar6[1], 1);
				SET_ACTOR_ONE_SHOT_DEATH(bVar6[2], 1);
				if (!Function_150(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32))
				{
					iVar0 = 5;
					iVar76 = 0;
					break;
				}
				bVar69 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_192(), 3, vLocal_47[13], 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
				DECOR_SET_INT(bVar69, "script", GET_THIS_SCRIPT_ID());
				Function_144(&bVar69, ScriptParam_0.f_32);
				switch (bLocal_32)
				{
					case 0x00000000:
						Function_143(bVar6[4]);
						Function_142();
						bLocal_110 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_192(), "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", Function_143(bVar6[4]), Function_142());
						break;
					
					case 0x00000001:
						Function_143(bVar6[4]);
						bLocal_110 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_192(), "$/content/scripting/gringo/simplegringo/rebel_riot02", Function_143(bVar6[4]), 0.0f, 180.0f, 0.0f);
						break;
					
					case 0x00000002:
						Function_143(bVar6[4]);
						Function_142();
						bLocal_110 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_192(), "$/content/scripting/gringo/simplegringo/firesquad_shove", Function_143(bVar6[4]), Function_142());
						break;
					
					case 0x00000003:
						Function_143(bVar6[4]);
						bLocal_110 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_192(), "$/content/scripting/gringo/simplegringo/firesquad_heldback", Function_143(bVar6[4]), 0.0f, 270.0f, 0.0f);
						break;
				}
				SNAP_OBJECT_TO_GROUND(bLocal_110, 1.5f, false, 1092616192);
				SNAP_OBJECT_TO_GROUND(bLocal_111, 1.5f, false, 1092616192);
				Function_142();
				bLocal_111 = CREATE_GRINGO_IN_LAYOUT(bVar1, Function_192(), "$/content/scripting/gringo/simplegringo/Mourn_loop", vLocal_77, Function_142());
				Function_142();
				bLocal_112 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_192(), 2, -4342.923f, 30.118f, 4380.383f, Function_142(), 2.0f, 2.0f, 1.0f);
				Function_142();
				bLocal_113 = CREATE_VOLUME_IN_LAYOUT(bVar1, Function_192(), 2, -4344.0f, 30.0f, 4374.0f, Function_142(), 10.0f, 10.0f, 10.0f);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar6[3], bLocal_112);
				Function_141(&iVar77, 1);
				iVar0 = 3;
				iVar76 = 0;
				break;
			
			case 0x00000003:
				Function_137(bVar1, &(bVar6[3]));
				Function_125(&bVar2, 3, &bLocal_130, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				Function_125(&bVar6, 5, &bLocal_130, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_121(ScriptParam_0.f_56, bVar2[0], &iVar68, &iVar70, iLocal_129, 0, 1, 1))
				{
					iVar0 = 5;
					iVar76 = 0;
					break;
				}
				iVar67 = 0;
				while (iVar67 > 3 && iVar66 > 11)
				{
					if (IS_ACTOR_VALID(bVar2[iVar67]))
					{
						if (Function_120(bVar2[iVar67]))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar66 = 11;
						}
						else if (Function_117(bVar2[iVar67], &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
						{
							if ((iLocal_146 != 4 || iLocal_146 != 2) || iLocal_146 != 16)
							{
								Function_115(bVar2[iVar67]);
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar66 = 11;
						}
					}
					iVar67++;
				}
				if (iVar66 <= 11)
				{
					if (((Function_120(bLocal_143[0]) || Function_120(bLocal_143[1])) || Function_120(bLocal_142)) || Function_102(bLocal_112, bLocal_113))
					{
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar66 = 11;
					}
					else if (Function_117(bLocal_143[0], &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
					{
						if ((iLocal_146 != 4 || iLocal_146 != 2) || iLocal_146 != 16)
						{
							Function_115(bLocal_143[0]);
						}
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar66 = 11;
					}
					else if (Function_117(bLocal_143[1], &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
					{
						if ((iLocal_146 != 4 || iLocal_146 != 2) || iLocal_146 != 16)
						{
							Function_115(bLocal_143[1]);
						}
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar66 = 11;
					}
					else if (Function_117(bLocal_142, &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
					{
						if ((iLocal_146 != 4 || iLocal_146 != 2) || iLocal_146 != 16)
						{
							Function_115(bLocal_142);
						}
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar66 = 11;
					}
				}
				iVar67 = 0;
				while (iVar67 > 2 && iVar66 > 11)
				{
					if (IS_ACTOR_VALID(bLocal_143[iVar67]))
					{
						if (Function_120(bLocal_143[iVar67]))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar66 = 11;
						}
						else if (Function_117(bLocal_143[iVar67], &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
						{
							if ((iLocal_146 != 4 || iLocal_146 != 2) || iLocal_146 != 16)
							{
								Function_115(bLocal_143[iVar67]);
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar66 = 11;
						}
					}
					iVar67++;
				}
				if (iLocal_108 == 0)
				{
					if (IS_ACTOR_VALID(bVar6[3]))
					{
						if (Function_117(bVar6[3], &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
						{
							Function_101(bVar6[3]);
							Function_100(bVar6[3], 0, 0, 2);
							iLocal_108 = 1;
						}
					}
				}
				if (iLocal_109 == 0)
				{
					if (IS_ACTOR_VALID(bVar6[4]))
					{
						if (Function_117(bVar6[4], &iLocal_146, &fVar72, iVar77, 0, 0x40400000))
						{
							Function_101(bVar6[4]);
							Function_100(bVar6[4], 0, 0, 2);
							iLocal_109 = 1;
						}
					}
				}
				Function_99(bLocal_143[1]);
				switch (bLocal_32)
				{
					case 0x00000001:
						Function_98(bVar6[4], bLocal_142, bVar1);
						break;
					
					case 0x00000003:
					case 0x00000002:
						Function_97(bVar6[4], bLocal_142, bVar1);
						break;
				}
				if (!Function_94(StackVal, StackVal, Global_34573, vLocal_33[03], Function_95(1)))
				{
					iVar76 = 0;
					iVar0 = 5;
					break;
				}
				else if (Function_13(&iVar66, bVar1, &bVar2, &bVar6, &iVar76))
				{
					iVar0 = 5;
					iVar76 = 0;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar76 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar76 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar76);
		}
	}
	if (bLocal_150)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_170(&bVar2, 4294967295);
	Function_170(&bVar6, 4294967295);
	Function_170(&bLocal_143, 4294967295);
	Function_169(&bLocal_142);
	if (!bLocal_130)
	{
		Function_12(&bVar2, 4294967295);
		Function_12(&bVar6, 4294967295);
		Function_12(&bLocal_143, 4294967295);
		Function_11(&bLocal_142);
		if (IS_OBJECT_VALID(bVar1))
		{
			UNK_0xA936E73B(bVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar1, 1);
		}
	}
	else
	{
		if (Function_7(bVar2[2], 0))
		{
			AI_GOAL_AIM_CLEAR(bVar2[2]);
		}
		if (iLocal_92 == 0)
		{
			iVar67 = 0;
			while (iVar67 <= 3)
			{
				if (Function_7(bVar2[iVar67], 0))
				{
					TASK_CLEAR(bVar2[iVar67]);
					Function_100(bVar2[iVar67], 0, 0, 1);
				}
				iVar67++;
			}
			iVar67 = 0;
			while (iVar67 <= 2)
			{
				if (Function_7(bLocal_143[iVar67], 0))
				{
					TASK_CLEAR(bLocal_143[iVar67]);
					Function_100(bLocal_143[iVar67], 0, 0, 1);
				}
				iVar67++;
			}
			if (IS_ACTOR_VALID(bVar6[0]))
			{
				if (!Function_6(bVar6[0]))
				{
					if (IS_ACTOR_VALID(bVar6[0]))
					{
						Function_100(bVar6[0], 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bVar6[1]))
			{
				if (!Function_6(bVar6[1]))
				{
					if (IS_ACTOR_VALID(bVar6[1]))
					{
						Function_100(bVar6[1], 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bVar6[2]))
			{
				if (!Function_6(bVar6[2]))
				{
					if (IS_ACTOR_VALID(bVar6[2]))
					{
						Function_100(bVar6[2], 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bVar6[3]))
			{
				if (!Function_6(bVar6[3]))
				{
					if (IS_ACTOR_VALID(bVar6[3]))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar6[3], 1);
						Function_100(bVar6[3], 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bVar6[4]))
			{
				if (!Function_6(bVar6[4]))
				{
					if (IS_ACTOR_VALID(bVar6[4]))
					{
						AI_QUICK_EXIT_GRINGO(bVar6[4], 1);
						RESET_ANIM_SET_FOR_ACTOR(bVar6[4], 1);
						Function_100(bVar6[4], 2, 0, 1);
					}
				}
			}
			if (Function_7(bLocal_142, 0))
			{
				if (!Function_6(bLocal_142))
				{
					TASK_CLEAR(bLocal_142);
					AI_QUICK_EXIT_GRINGO(bLocal_142, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_142, 1);
					if (Function_174(0))
					{
						MEMORY_CONSIDER_AS(bLocal_142, Global_34573, 5);
					}
					Function_100(bLocal_142, 2, 0, 1);
				}
			}
		}
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	Function_5(&iLocal_118, 5);
	Function_5(&iLocal_114, 3);
	Function_5(&iLocal_124, 2);
	Function_156(-4346.0f, 30.0f, 4382.0f, 1, 0);
	if (IS_GRINGO_VALID(bVar12))
	{
		GRINGO_ALLOW_ACTIVATION(bVar12, true);
	}
	if (IS_GRINGO_VALID(bVar13))
	{
		GRINGO_ALLOW_ACTIVATION(bVar13, true);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar71);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar71);
	if (iLocal_88 == 1)
	{
		AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
		iLocal_88 = 0;
	}
	Function_1(&bVar14);
	RELEASE_LAYOUT_REF(bVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1408 / 5128
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x142E / 5166
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
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
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x155C / 5468
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x1576 / 5494
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0, int iParam1) //Position: 0x1593 / 5523
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*iParam0)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x15B5 / 5557
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

bool Function_7(bool bParam0, bool bParam1) //Position: 0x15DA / 5594
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_9(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_9(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_8(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_8(bool bParam0, int iParam1) //Position: 0x1676 / 5750
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_9(bool bParam0) //Position: 0x16C0 / 5824
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_10(bParam0);
		return 1;
	}
	return 0;
}

void Function_10(bool bParam0) //Position: 0x16D6 / 5846
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x1702 / 5890
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

void Function_12(bool bParam0, int iParam1) //Position: 0x172D / 5933
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_11(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x175A / 5978
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	uParam1 = uParam1;
	vVar1 = { -4347.74f, 30.118f, 4373.34f };
	Function_93(bLocal_143[0], (*uParam3)[3]);
	vVar4 = { -4296.0f, 23.0f, 4408.0f };
	switch (bLocal_32)
	{
		case 0x00000000:
			Function_92((*uParam3)[4], bLocal_143[1], *uParam0);
			break;
	}
	vVar7 = { -4344.0f, 30.0f, 4365.0f };
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_91(Global_34573, (*uParam2)[0]) > 150.0f)
			{
				uLocal_161 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &(vLocal_47[33]), 3);
				TASK_FACE_COORD(0, &(vLocal_47[33]), 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam3)[3], uLocal_161);
				TASK_SEQUENCE_RELEASE(uLocal_161, 1);
				Function_191(&uLocal_133, 0.0f);
				*uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_86(&uLocal_133, 2.0f))
			{
				Function_191(&uLocal_133, 0.0f);
				*uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_91(Global_34573, (*uParam2)[0]) > 25.0f)
			{
				Function_84();
				Function_83(11);
				uLocal_137 = CREATE_PATH_IN_LAYOUT(uParam1, Function_192(), 4);
				uLocal_138 = CREATE_PATH_IN_LAYOUT(uParam1, Function_192(), 4);
				uLocal_139 = CREATE_PATH_IN_LAYOUT(uParam1, Function_192(), 2);
				ADD_POINT_TO_PATH(uLocal_137, -4352.127f, 30.159f, 4371.853f);
				ADD_POINT_TO_PATH(uLocal_137, -4349.636f, 30.083f, 4371.513f);
				ADD_POINT_TO_PATH(uLocal_137, -4346.821f, 30.118f, 4372.609f);
				ADD_POINT_TO_PATH(uLocal_137, vLocal_74);
				ADD_POINT_TO_PATH(uLocal_138, -4352.127f, 30.159f, 4371.853f);
				ADD_POINT_TO_PATH(uLocal_138, vVar1);
				ADD_POINT_TO_PATH(uLocal_138, -4346.821f, 30.118f, 4372.609f);
				ADD_POINT_TO_PATH(uLocal_138, vLocal_77);
				ADD_POINT_TO_PATH(uLocal_139, -4342.0f, 30.0f, 4381.0f);
				ADD_POINT_TO_PATH(uLocal_139, -4343.0f, 30.0f, 4374.0f);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID((*uParam3)[2]))
			{
				uLocal_147 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, uLocal_138, 1, 0, 0, 1, 0);
				TASK_FACE_COORD(0, &vVar7, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam3)[2], uLocal_147);
				TASK_SEQUENCE_RELEASE(uLocal_147, 1);
			}
			if (IS_ACTOR_VALID((*uParam3)[3]))
			{
				SET_ANIM_SET_FOR_ACTOR((*uParam3)[3], "stolen_panic", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam3)[3], "stolen_panic/loop");
			}
			Function_191(&uLocal_133, 0.0f);
			*uParam0 = 3;
			break;
		
		case 0x00000003:
			if (Function_86(&uLocal_133, 3.0f))
			{
				if (IS_ACTOR_VALID((*uParam2)[2]))
				{
					GIVE_WEAPON_TO_ACTOR((*uParam2)[2], 41, 0.0f, 0, 1);
					ACTOR_PUT_WEAPON_IN_HAND((*uParam2)[2], 41, 1);
					Function_82((*uParam2)[2], 1, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 0);
					uLocal_147 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, uLocal_137, 1, 0, 0, 1, 0);
					TASK_GO_TO_COORD(false, &vLocal_71, 1);
					TASK_FACE_ACTOR(0, (*uParam3)[2], 0, 2.0f);
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam2)[2], uLocal_147);
					TASK_SEQUENCE_RELEASE(uLocal_147, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 0);
					AI_GOAL_AIM_AT_OBJECT((*uParam2)[2], GET_OBJECT_FROM_ACTOR((*uParam3)[2]), 1);
					switch (bLocal_32)
					{
						case 0x00000001:
							iLocal_131 = 1;
							break;
					}
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (GET_NTH_TASK_STATUS((*uParam2)[2], 2) == 0)
			{
				Function_80((*uParam3)[2], (*uParam2)[2]);
			}
			if (GET_TASK_STATUS((*uParam2)[2], 0) == 0)
			{
				TASK_STAND_STILL((*uParam2)[2], -1.0f, 0, 0);
				Function_191(&uLocal_133, 0.0f);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_86(&uLocal_133, 0.0f) && iLocal_132 != 0)
			{
				Function_79((*uParam2)[2], (*uParam3)[0], "eventExecutionMsg01", "eventExecutionMsg01", 2, 60, 0, 1);
				Function_191(&uLocal_133, 0.0f);
				TASK_CLEAR((*uParam2)[2]);
				GIVE_WEAPON_TO_ACTOR((*uParam2)[2], 41, 0.0f, 0, 1);
				ACTOR_PUT_WEAPON_IN_HAND((*uParam2)[2], 41, 1);
				Function_82((*uParam2)[2], 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 0);
				TASK_PRIORITY_SET((*uParam2)[2], 1);
				iLocal_132++;
			}
			*uParam4 = 0;
			if (Function_86(&uLocal_133, 0.0f) && iLocal_132 != 1)
			{
				Function_79((*uParam2)[2], (*uParam3)[0], "eventExecutionMsg02", "eventExecutionMsg02", 2, 60, 0, 1);
				TASK_CLEAR((*uParam2)[2]);
				TASK_POINT_GUN_AT_OBJECT((*uParam2)[0], (*uParam3)[1], -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT((*uParam2)[1], (*uParam3)[0], -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT((*uParam2)[2], (*uParam3)[2], -1.0f, 0);
				AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_NARROWLY_MISSED");
				AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_MISSED_TARGET");
				iLocal_88 = 1;
				Function_191(&uLocal_133, 0.0f);
				iLocal_132++;
			}
			if (Function_86(&uLocal_133, 2.0f) && iLocal_132 != 2)
			{
				Function_79((*uParam2)[2], (*uParam3)[0], "eventExecutionMsg03", "eventExecutionMsg03", 2, 60, 0, 1);
				Function_191(&uLocal_133, 0.0f);
				iLocal_132++;
			}
			if (Function_86(&uLocal_133, 1.0f) && iLocal_132 != 3)
			{
				AI_GOAL_AIM_CLEAR((*uParam2)[2]);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 28, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 31, -1.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 37, 2.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*uParam2)[2], 38, 0.5f);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*uParam2)[2], 0);
				MEMORY_REPORT_POSITION_AUTO((*uParam2)[2], (*uParam3)[2], 1);
				MEMORY_CONSIDER_AS_ENEMY((*uParam2)[2], (*uParam3)[2]);
				Function_78((*uParam2)[0], (*uParam3)[1]);
				Function_78((*uParam2)[1], (*uParam3)[0]);
				Function_78((*uParam2)[2], (*uParam3)[2]);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[2], 1);
				if (Function_74((*uParam3)[2], 0, 0, 0, 0, 0, 0, 0, 0))
				{
				}
				iLocal_131 = 1;
				if (IS_VOLUME_VALID(bLocal_112))
				{
					DESTROY_VOLUME(bLocal_112);
				}
				if (IS_VOLUME_VALID(bLocal_113))
				{
					DESTROY_VOLUME(bLocal_113);
				}
				Function_191(&uLocal_133, 0.0f);
				AUDIO_PLAY_VOCAL_EFFECT((*uParam3)[4], 9, 1);
				iLocal_132 = 0;
				*uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (iLocal_132 == 0)
			{
				iLocal_128 = 1;
				if (Function_7((*uParam3)[0], 0))
				{
					iLocal_128 = 0;
				}
				if (Function_7((*uParam3)[1], 0))
				{
					iLocal_128 = 0;
				}
				if (Function_7((*uParam3)[2], 0))
				{
					iLocal_128 = 0;
				}
				if (iLocal_128 == 1)
				{
					iLocal_132 = 1;
				}
			}
			if (iLocal_132 == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					MEMORY_CLEAR_EVENTS((*uParam2)[iVar0], 0);
					ACTOR_HOLSTER_WEAPON((*uParam2)[iVar0], 1);
					uLocal_147 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_GO_NEAR_COORD(false, &vVar4, 15.0f, 1);
					TASK_WANDER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam2)[iVar0], uLocal_147);
					TASK_SEQUENCE_RELEASE(uLocal_147, 1);
					Function_101((*uParam2)[iVar0]);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					MEMORY_CLEAR_EVENTS(bLocal_143[iVar0], 0);
					ACTOR_HOLSTER_WEAPON(bLocal_143[iVar0], 1);
					uLocal_147 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_GO_NEAR_COORD(false, &vVar4, 15.0f, 1);
					TASK_WANDER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_143[iVar0], uLocal_147);
					TASK_SEQUENCE_RELEASE(uLocal_147, 1);
					Function_101(bLocal_143[iVar0]);
					iVar0++;
				}
				iLocal_92 = 1;
				iLocal_132 = 2;
			}
			if (iLocal_132 == 2)
			{
				switch (bLocal_32)
				{
					case 0x00000000:
						if (Function_58((*uParam3)[4], uParam1) || iLocal_109)
						{
							if (iLocal_88 == 1)
							{
								AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
								iLocal_88 = 0;
							}
							return 1;
						}
						break;
					
					case 0x00000001:
						if (iLocal_69 == 1)
						{
							return 1;
						}
						break;
					
					case 0x00000003:
					case 0x00000002:
						if (iLocal_70 == 1)
						{
							return 1;
						}
						break;
					}
			}
			break;
		
		case 0x0000000B:
			if (iLocal_93 == 0)
			{
				Function_53(50, 1, 0);
				Function_15(200, 1, 0);
				iLocal_93 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (IS_ACTOR_VALID((*uParam3)[iVar0]))
				{
					TASK_FLEE_ACTOR((*uParam3)[iVar0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					if (!iLocal_136)
					{
						if (iVar0 == 2)
						{
							if (iLocal_118[2] == 299)
							{
								Function_79((*uParam3)[2], Global_34573, "firstTimeEscalera_msg06", "firstTimeEscalera_msg06", 5, 60, 1, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*uParam3)[2], 103, Global_34573, 0, 0, 5, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*uParam3)[iVar0], 103, Global_34573, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						iLocal_136 = 1;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (IS_ACTOR_VALID((*uParam2)[iVar0]))
				{
					if (!Function_120((*uParam2)[iVar0]))
					{
						if (Function_7((*uParam3)[iVar0], 0))
						{
							MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam2)[iVar0], 4294967295);
							AI_GOAL_AIM_CLEAR((*uParam2)[iVar0]);
							TASK_CLEAR((*uParam2)[iVar0]);
							if (iVar0 == 0)
							{
								if (Function_7((*uParam3)[iVar0], 0))
								{
									if (Function_7((*uParam2)[iVar0], 0))
									{
										SET_ACTOR_ONE_SHOT_DEATH((*uParam3)[iVar0], 1);
										Function_14((*uParam2)[iVar0], uParam3[iVar0]);
										uLocal_147 = TASK_SEQUENCE_OPEN();
										TASK_KILL_CHAR(false, (*uParam3)[iVar0]);
										TASK_KILL_CHAR(false, Global_34573);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM((*uParam2)[iVar0], uLocal_147);
										TASK_SEQUENCE_RELEASE(uLocal_147, 1);
									}
								}
								else
								{
									Function_14((*uParam2)[iVar0], &Global_34573);
								}
							}
							else
							{
								Function_14((*uParam2)[iVar0], &Global_34573);
							}
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (IS_ACTOR_VALID(bLocal_143[iVar0]))
				{
					if (!Function_120(bLocal_143[iVar0]))
					{
						Function_14(bLocal_143[iVar0], &Global_34573);
					}
				}
				iVar0++;
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_VALID((*uParam3)[0]))
			{
				if (IS_ACTOR_VALID((*uParam2)[0]))
				{
					if (Function_91((*uParam3)[0], (*uParam2)[0]) < 10.0f)
					{
						Function_14((*uParam2)[0], &Global_34573);
						iLocal_92 = 1;
						return 1;
					}
				}
				iLocal_92 = 1;
				return 1;
			}
			if (IS_ACTOR_VALID((*uParam2)[0]))
			{
				Function_14((*uParam2)[iVar0], &Global_34573);
			}
			iLocal_92 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_14(bool bParam0, int iParam1) //Position: 0x214A / 8522
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x222F / 8751
{
	int iVar0;
	bool bVar1;
	
	if (Function_52(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_51())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_50(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_49(1, bVar1);
			if (!bParam2)
			{
				if (!Function_48(Global_76848, 1))
				{
					Function_42(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_40(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_48(Global_76848, 2))
				{
					Function_42(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_39(1, bVar1, 0, 0);
	}
	else
	{
		Function_38(1, (4294967295 * bVar1), 0);
	}
	if (Function_50(1) <= 4294962296)
	{
		Function_25(1, 4294962296, 0);
	}
	else if (Function_50(1) >= 5000)
	{
		Function_25(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_24(1));
	iVar0 = Function_50(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_17(2, Function_23(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_17(2, Function_23(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_17(2, Function_23(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_17(2, Function_23(Global_12976.f_152), 0);
			}
			break;
	}
	Function_16(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0x2550 / 9552
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_17(int iParam0, char* cParam1, bool bParam2) //Position: 0x27AE / 10158
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_21(iParam0, cParam1, 0, 1);
	iVar1 = Function_18();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_18() //Position: 0x2933 / 10547
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_19();
	return 0;
}

void Function_19() //Position: 0x29D2 / 10706
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_20(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_20(int iParam0) //Position: 0x2A81 / 10881
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

int Function_21(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2ADF / 10975
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_22(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_22(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x2E31 / 11825
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_23(int iParam0) //Position: 0x2EB4 / 11956
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

float Function_24(int iParam0) //Position: 0x2F57 / 12119
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0x2F90 / 12176
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
		Function_37(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_36(iParam0);
	if (bParam2)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x322B / 12843
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_35(390))), 32);
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
					bVar19 = (Function_24(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_24(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_33(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_192(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_27(int iParam0) //Position: 0x3858 / 14424
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3869 / 14441
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x395E / 14686
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3977 / 14711
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_32(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_32(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x39DC / 14812
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_32(int iParam0, int iParam1) //Position: 0x39EE / 14830
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_33(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3A00 / 14848
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
	if (((Function_34(iParam0) != 19 || Function_34(iParam0) != 17) || Function_34(iParam0) != 10) || Function_34(iParam0) != 9)
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

int Function_34(int iParam0) //Position: 0x3B30 / 15152
{
	return Global_35278[iParam020].f_48;
}

var Function_35(int iParam0) //Position: 0x3B3F / 15167
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_36(int iParam0) //Position: 0x3B7C / 15228
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

int Function_37(int iParam0, bool bParam1, bool bParam2) //Position: 0x3D16 / 15638
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

int Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x3F5A / 16218
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4197 / 16791
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
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_40(int iParam0, bool bParam1) //Position: 0x43B7 / 17335
{
	bool bVar0;
	int iVar1;
	
	Function_38(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_41(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_18();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_41(int iParam0, int iParam1) //Position: 0x4553 / 17747
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_42(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4594 / 17812
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_44(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_43(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_43(char* cParam0, int iParam1) //Position: 0x4600 / 17920
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_44(bool bParam0, var uParam1, int iParam2) //Position: 0x4637 / 17975
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_46(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_45(uVar0))
		{
			case 0x00000002:
				if (!Function_48(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_45(char* cParam0) //Position: 0x46AF / 18095
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_46(int iParam0) //Position: 0x4750 / 18256
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_47(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_47(int iParam0, int iParam1) //Position: 0x478D / 18317
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_48(var uParam0, int iParam1) //Position: 0x47A0 / 18336
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_49(int iParam0, bool bParam1) //Position: 0x47B3 / 18355
{
	bool bVar0;
	int iVar1;
	
	Function_39(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_41(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_18();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_50(int iParam0) //Position: 0x4950 / 18768
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_51() //Position: 0x4991 / 18833
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_52(int iParam0) //Position: 0x49BC / 18876
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x49CB / 18891
{
	int iVar0;
	bool bVar1;
	
	if (Function_52(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_51())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_50(3);
	Function_55();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_49(3, bVar1);
		if (!bParam2)
		{
			if (!Function_48(Global_76848, 4))
			{
				Function_42(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_39(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_24(3));
	iVar0 = Function_50(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_17(4, Function_54(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_17(4, Function_54(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_17(4, Function_54(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_17(4, Function_54(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_17(4, Function_54(Global_12976.f_156), 1);
				Function_16(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

var Function_54(int iParam0) //Position: 0x4B9A / 19354
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_55() //Position: 0x4C29 / 19497
{
	Function_57(3, 0.0f);
	Function_56(3, 10000.0f);
	return;
}

int Function_56(int iParam0, int iParam1) //Position: 0x4C3F / 19519
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_57(int iParam0, int iParam1) //Position: 0x4C7F / 19583
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

int Function_58(bool bParam0, bool bParam1) //Position: 0x4CBF / 19647
{
	if (!Function_7(bParam0, 0))
	{
		return 1;
	}
	switch (iLocal_152)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_143(bParam0);
			bLocal_140 = CREATE_VOLUME_IN_LAYOUT(bParam1, Function_192(), 0, Function_143(bParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(bLocal_110, "volume", bLocal_140);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_110), "UseCase1", 1, 1);
			iLocal_152 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam0, 19) == 0)
			{
				Function_191(&uLocal_153, 0.0f);
				iLocal_152 = 2;
			}
			break;
		
		case 0x00000002:
			Function_86(&uLocal_153, 4.0f);
			Function_73(bLocal_111);
			bLocal_141 = CREATE_VOLUME_IN_LAYOUT(bParam1, Function_192(), 0, Function_73(bLocal_111), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(bLocal_111, "volume", bLocal_141);
			TASK_FOLLOW_PATH(bParam0, uLocal_139, 2, 0, 0, 1, 0);
			iLocal_152 = 3;
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(bParam0, 16) != 0 || Function_70(bParam0, bLocal_111) > 3.5f)
			{
				MEMORY_CLEAR_EVENTS(bParam0, 1);
				MEMORY_CLEAR_ALL(bParam0);
				TASK_CLEAR(bParam0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_111), true);
				Function_61(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_111), "UseCase1", 4294967295, 1, 0);
				Function_59(bParam0, 1);
				iLocal_152 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_152 = 5;
			break;
		
		case 0x00000005:
			iLocal_152 = 6;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_59(bool bParam0, int iParam1) //Position: 0x4E41 / 20033
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	if (!Function_6(bParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 64);
		return 0;
	}
	Function_60(bParam0, iParam1);
	return 1;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x4EE9 / 20201
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options", bParam1);
	return;
}

int Function_61(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4F0E / 20238
{
	if (!IS_GRINGO_VALID(bParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam2) != 0 || STRINGS_ARE_EQUAL(bParam2, ""))
	{
		return 0;
	}
	if (iParam3 <= 0)
	{
		iParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(bParam1), Global_6290);
		if (!(GET_TASK_STATUS(bParam0, 19) != 1 || GET_TASK_STATUS(bParam0, 19) != 3))
		{
			TASK_USE_GRINGO(bParam0, bParam1, bParam2, iParam3, 1);
			TASK_PRIORITY_SET(bParam0, iParam5);
		}
		Function_62(bParam0, 5, GET_OBJECT_FROM_GRINGO(bParam1), iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_62(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x4FA6 / 20390
{
	char* cVar0[32];
	
	Function_69();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_68(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_67(bParam0, 0);
	Function_66(bParam0, iParam1);
	Function_65(bParam0, bParam2);
	Function_64(bParam0, uParam3);
	if (Function_63(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_63(bool bParam0) //Position: 0x51F4 / 20980
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x5217 / 21015
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_65(bool bParam0, bool bParam1) //Position: 0x523A / 21050
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x525E / 21086
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x5284 / 21124
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_68(bool bParam0) //Position: 0x52A7 / 21159
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_69() //Position: 0x52C5 / 21189
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

float Function_70(bool bParam0, bool bParam1) //Position: 0x530F / 21263
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_72(bParam0);
			vVar0 = { StackVal, StackVal, Function_72(bParam0) };
			Function_71(bParam1);
			vVar3 = { StackVal, StackVal, Function_71(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_71(bool bParam0) //Position: 0x53AF / 21423
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

vector3 Function_72(bool bParam0) //Position: 0x541B / 21531
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

vector3 Function_73(bool bParam0) //Position: 0x5485 / 21637
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

bool Function_74(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x54AC / 21676
{
	int iVar0;
	
	if (bParam1)
	{
		Function_77(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_77(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_77(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_77(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_77(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_77(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_77(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_77(&iVar0, 1048576);
	}
	return Function_75(uParam0, iVar0);
}

int Function_75(bool bParam0, int iParam1) //Position: 0x551B / 21787
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_76(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_76(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x55F4 / 22004
{
	return (uParam0 && iParam1) == 0;
}

void Function_77(int iParam0, int iParam1) //Position: 0x5601 / 22017
{
	Function_141(iParam0, iParam1);
	return;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x560E / 22030
{
	vector3 vVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	Function_143(bParam0);
	vVar0 = { StackVal, StackVal, Function_143(bParam0) };
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &vVar0);
	return 1;
}

void Function_79(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5665 / 22117
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_91(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						uParam3 = uParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					uParam3 = uParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_80(bool bParam0, var uParam1) //Position: 0x56F5 / 22261
{
	if (iLocal_148 == 0)
	{
		if (iLocal_118[2] == 299)
		{
			Function_79(bParam0, uParam1, "firstTimeEscalera_msg04", "firstTimeEscalera_msg04", 2, 60, 1, 1);
		}
		else if (iLocal_118[2] == 297)
		{
			if (Function_81())
			{
				Function_79(bParam0, uParam1, "eventExecutionMsg04", "eventExecutionMsg04", 2, 60, 1, 1);
			}
			else
			{
				Function_79(bParam0, uParam1, "eventExecutionMsg05", "eventExecutionMsg05", 2, 60, 1, 1);
			}
		}
		else if (iLocal_118[2] == 292)
		{
			if (Function_81())
			{
				Function_79(bParam0, uParam1, "eventExecutionMsg04", "eventExecutionMsg04", 2, 60, 1, 1);
			}
			else
			{
				Function_79(bParam0, uParam1, "eventExecutionMsg05", "eventExecutionMsg05", 2, 60, 1, 1);
			}
		}
		iLocal_148 = 1;
	}
	return;
}

bool Function_81() //Position: 0x585D / 22621
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_82(bool bParam0, int iParam1, int iParam2) //Position: 0x5870 / 22640
{
	var uVar0;
	
	uVar0 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, iParam2);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, uVar0);
	TASK_SEQUENCE_RELEASE(uVar0, 1);
	TASK_PRIORITY_SET(bParam0, iParam1);
	return;
}

void Function_83(int iParam0) //Position: 0x589F / 22687
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_39(409, 1, 0, 0);
	}
	return;
}

void Function_84() //Position: 0x58D0 / 22736
{
	int iVar0;
	
	bLocal_150 = true;
	if (Global_29004 == 1)
	{
		iVar0 = Function_85(5);
		if (iVar0 == 0)
		{
			cLocal_149 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			cLocal_149 = "MEX_SONG_04";
		}
		else if (iVar0 == 2)
		{
			cLocal_149 = "MEX_SONG_05";
		}
		else if (iVar0 == 3)
		{
			cLocal_149 = "MEX_SONG_06";
		}
		else if (iVar0 == 4)
		{
			cLocal_149 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_149, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

var Function_85(bool bParam0) //Position: 0x5983 / 22915
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_86(var uParam0, bool bParam1) //Position: 0x599C / 22940
{
	if (Function_90(uParam0))
	{
		if (Function_87(uParam0) < bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_87(int iParam0) //Position: 0x59B8 / 22968
{
	if (Function_90(iParam0))
	{
		if (Function_88(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_88(int iParam0) //Position: 0x5A80 / 23168
{
	return Function_89(*iParam0, 2);
}

bool Function_89(var uParam0, int iParam1) //Position: 0x5A8D / 23181
{
	return (uParam0 && iParam1) == 0;
}

bool Function_90(int iParam0) //Position: 0x5A9A / 23194
{
	return Function_89(*iParam0, 1);
}

float Function_91(bool bParam0, bool bParam1) //Position: 0x5AA7 / 23207
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

void Function_92(bool bParam0, bool bParam1, int iParam2) //Position: 0x5B98 / 23448
{
	bool bVar0;
	
	if (iParam2 <= 10)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				switch (iLocal_156)
				{
					case 0x00000000:
						if (Function_91(Global_34573, bParam0) > 15.0f)
						{
							SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(bParam0, 53, bParam1, 1, 0, 0, 4294967295, 4294967295, 0);
							iLocal_160++;
							iLocal_156 = 1;
						}
						break;
					
					case 0x00000001:
						if (!IS_AMBIENT_SPEECH_PLAYING(bParam0))
						{
							Function_191(&uLocal_157, 0.0f);
							bVar0 = RAND_FLOAT_RANGE(10.0f, 15.0f);
							iLocal_156 = 2;
						}
						break;
					
					case 0x00000002:
						if (Function_86(&uLocal_157, bVar0))
						{
							if (iLocal_160 <= 3)
							{
								iLocal_156 = 0;
							}
							else
							{
								iLocal_156 = 3;
							}
						}
						break;
					
					case 0x00000003:
						break;
					}
				}
			}
	}
	return;
}

void Function_93(bool bParam0, bool bParam1) //Position: 0x5C43 / 23619
{
	if (iLocal_92 == 0)
	{
		if (Function_7(bParam0, 0))
		{
			if (Function_7(bParam1, 0))
			{
				if (GET_TASK_STATUS(bParam0, 35) != 1)
				{
					if (Function_91(bParam0, bParam1) > 10.0f)
					{
						TASK_POINT_GUN_AT_OBJECT(bParam0, bParam1, -1.0f, 0);
					}
				}
			}
		}
	}
	return;
}

bool Function_94(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x5C85 / 23685
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_72(bParam0);
		if (VDIST(Function_72(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

var Function_95(bool bParam0) //Position: 0x5D0F / 23823
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_96(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_96(var uParam0, int iParam1) //Position: 0x5D4A / 23882
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

int Function_97(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5DD3 / 24019
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!Function_7(bParam0, 0))
	{
		return 1;
	}
	if (!Function_7(bParam1, 0))
	{
		return 1;
	}
	switch (bLocal_32)
	{
		case 0x00000003:
			bVar0 = "nKneelCase";
			bVar1 = "nEXIT_HOLD";
			fVar2 = 1.0f;
			break;
		
		case 0x00000002:
			bVar0 = "ShovedCase";
			bVar1 = "SHOVE_ASIDE";
			fVar2 = 0.78f;
			break;
	}
	switch (iLocal_152)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_143(bParam0);
			bLocal_140 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_192(), 0, Function_143(bParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(bLocal_110, "volume", bLocal_140);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_110, "UseCase1", 1, 0, 0);
			SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_110, bVar0, 1, 0, 0);
			TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_110), "UseCase1", 1, 1);
			TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_110), bVar0, 1, 1);
			iLocal_152 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam0, 19) == 1)
			{
				iLocal_152 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_131)
			{
				Function_191(&uLocal_153, 0.0f);
				iLocal_152 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_86(&uLocal_153, 0.0f))
			{
				DECOR_SET_BOOL(bLocal_110, bVar1, 1);
				Function_191(&uLocal_153, 0.0f);
				iLocal_152 = 4;
			}
			break;
		
		case 0x00000004:
			if ((GET_TASK_STATUS(bParam0, 19) != 0 || Function_86(&uLocal_153, fVar2)) || GET_TASK_STATUS(bParam0, 19) != 4)
			{
				Function_73(bLocal_111);
				bLocal_141 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_192(), 0, Function_73(bLocal_111), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
				DECOR_SET_BOOL(bParam0, "VolOnly", 1);
				DECOR_SET_OBJECT(bLocal_111, "volume", bLocal_141);
				TASK_FOLLOW_PATH(bParam0, uLocal_139, 2, 0, 0, 1, 0);
				iLocal_152 = 5;
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(bParam0, 16) != 0 || Function_70(bParam0, bLocal_111) > 3.5f)
			{
				MEMORY_CLEAR_EVENTS(bParam0, 1);
				MEMORY_CLEAR_ALL(bParam0);
				MEMORY_CLEAR_EVENTS(bParam1, 1);
				MEMORY_CLEAR_ALL(bParam1);
				TASK_CLEAR(bParam0);
				TASK_CLEAR(bParam1);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_111), true);
				iLocal_70 = 1;
				Function_61(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_111), "UseCase1", 4294967295, 1, 0);
				Function_59(bParam0, 1);
				Function_100(bParam1, 0, 0, 2);
				iLocal_152 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_98(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6040 / 24640
{
	if (!Function_7(bParam1, 0))
	{
		return 1;
	}
	switch (iLocal_152)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_143(bParam0);
			bLocal_140 = CREATE_VOLUME_IN_LAYOUT(bParam2, Function_192(), 0, Function_143(bParam0), 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			DECOR_SET_BOOL(bParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(bLocal_110, "volume", bLocal_140);
			SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_110, "UseCase1", 1, 0, 0);
			SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_110, "UseCase2", 1, 0, 0);
			TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_110), "UseCase1", 1, 1);
			TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_110), "UseCase2", 1, 1);
			iLocal_152 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam1, 19) == 1)
			{
				Function_191(&uLocal_153, 0.0f);
				iLocal_152 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_131)
			{
				DECOR_SET_BOOL(bLocal_110, "EXIT_RIOT02", 1);
				Function_191(&uLocal_153, 0.0f);
				iLocal_152 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_VALID(bParam0))
			{
				KILL_ACTOR(bParam0);
				iLocal_69 = 1;
				Function_100(bParam1, 0, 0, 2);
				iLocal_152 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_152 = 5;
			break;
		
		case 0x00000005:
			iLocal_152 = 6;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_99(bool bParam0) //Position: 0x619B / 24987
{
	if (iLocal_92 == 0)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (Function_91(bParam0, Global_34573) > 8.0f)
			{
				if (GET_TASK_STATUS(bParam0, 35) != 1)
				{
					TASK_POINT_GUN_AT_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(Global_34573), -1.0f, 0);
					if (iLocal_151 == 0)
					{
						Function_79(bParam0, Global_34573, "eventExecutionMsg08", "eventExecutionMsg08", 5, 60, 1, 1);
						iLocal_151 = 1;
					}
				}
			}
			else if (GET_TASK_STATUS(bParam0, 35) == 1)
			{
				ACTOR_HOLSTER_WEAPON(bParam0, 1);
				TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
			}
		}
	}
	return;
}

int Function_100(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6237 / 25143
{
	int iVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_62(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_62(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_101(bool bParam0) //Position: 0x6317 / 25367
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

int Function_102(bool bParam0, bool bParam1) //Position: 0x6363 / 25443
{
	if (IS_VOLUME_VALID(bParam0))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, bParam0))
		{
			Function_114(0x10000000);
			Function_103(4, 28, Function_113(), 0, 1);
			return 1;
		}
	}
	if (IS_VOLUME_VALID(bParam1))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
		{
			Function_114(0x10000000);
			Function_103(4, 28, Function_113(), 0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x63BC / 25532
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_112(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_111(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_106(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_192(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_104();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_104() //Position: 0x664C / 26188
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_105(bVar0, bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_105(bool bParam0, bool bParam1) //Position: 0x66AF / 26287
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_106(bool bParam0) //Position: 0x66DE / 26334
{
	if (Function_110(256))
	{
		return 0;
	}
	if (Function_110(262144))
	{
		return 0;
	}
	if (Function_109())
	{
		return 0;
	}
	if (!Function_110(1))
	{
		return 0;
	}
	if (!Function_110(4096))
	{
		return 0;
	}
	if (bParam0 && Function_108(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_110(2048))
	{
		return 0;
	}
	if (Function_107() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

var Function_107() //Position: 0x6754 / 26452
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_108(int iParam0) //Position: 0x675D / 26461
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_109() //Position: 0x676E / 26478
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_110(int iParam0) //Position: 0x6787 / 26503
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_111(int iParam0) //Position: 0x67A5 / 26533
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_112(int iParam0) //Position: 0x67BB / 26555
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_113() //Position: 0x67D0 / 26576
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_114(int iParam0) //Position: 0x67E5 / 26597
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_115(bool bParam0) //Position: 0x6802 / 26626
{
	if (!Global_3403)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bParam0)) == 1)
				{
					if ((!Function_116(Function_113(), 35) && !Function_116(Function_113(), 7)) && !Function_116(Function_113(), 12))
					{
						Function_103(1, 35, Function_113(), GET_OBJECT_FROM_ACTOR(bParam0), 1);
					}
				}
			}
		}
	}
	return;
}

bool Function_116(bool bParam0, bool bParam1) //Position: 0x6869 / 26729
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_105(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(uVar3) != bParam0 && GET_CRIME_TYPE(uVar3) != bParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

bool Function_117(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x68E5 / 26853
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_91(bParam0, Global_34573);
		if (!Function_89(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*iParam1 = 8;
				Function_118(bParam0);
				return 1;
			}
		}
		if (!Function_89(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*iParam1 = 2;
				Function_118(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*iParam1 = 2;
				Function_118(bParam0);
				return 1;
			}
		}
		if (!Function_89(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*iParam1 = 4;
					Function_118(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*iParam1 = 4;
						Function_118(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_89(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*iParam1 = 1;
				Function_118(bParam0);
				return 1;
			}
		}
		if (!Function_89(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*iParam1 = 16;
					Function_118(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_118(bool bParam0) //Position: 0x6A7C / 27260
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_119(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_119(bool bParam0) //Position: 0x6AB0 / 27312
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_120(bool bParam0) //Position: 0x6AC7 / 27335
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

bool Function_121(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6ADE / 27358
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_91(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_124() && !*uParam2)
		{
			return 0;
		}
		if (Function_123(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_122(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_122(int iParam0, int iParam1) //Position: 0x6C0C / 27660
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_123(int iParam0) //Position: 0x6C2D / 27693
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_124() //Position: 0x6C6B / 27755
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_70(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_70(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_125(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x6D26 / 27942
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*iParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*bParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*bParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*iParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*iParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_136(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_135(0);
		}
		if (bParam6)
		{
			Function_133(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_131(iParam3);
		}
		Function_129(iParam3);
		if (Function_128(StackVal, 32768))
		{
			Function_126(1);
		}
		Global_16876[iParam36].f_12++;
		Function_39(408, 1, 0, 0);
	}
}

void Function_126(bool bParam0) //Position: 0x6E13 / 28179
{
	if (bParam0)
	{
		Function_127(0x10000000);
	}
	else
	{
		Function_114(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_127(int iParam0) //Position: 0x6E37 / 28215
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_128(var uParam0, int iParam1) //Position: 0x6E4A / 28234
{
	return (uParam0 && iParam1) == 0;
}

void Function_129(int iParam0) //Position: 0x6E57 / 28247
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_89(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_130(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_130(int iParam0) //Position: 0x6EFB / 28411
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_131(int iParam0) //Position: 0x6F11 / 28433
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_132(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_132(var uParam0, var uParam1, int iParam2) //Position: 0x6FAF / 28591
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_133(int iParam0, int iParam1) //Position: 0x6FC7 / 28615
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_134(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_134(int iParam0) //Position: 0x7049 / 28745
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_135(int iParam0) //Position: 0x7097 / 28823
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_130(900)), 0);
	return;
}

void Function_136(int iParam0) //Position: 0x70B9 / 28857
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_130(200)), 0);
	return;
}

int Function_137(bool bParam0, int iParam1) //Position: 0x70DA / 28890
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { -4335.0f, 26.0f, 4419.0f };
	vVar3 = { -4345.0f, 30.117f, 4379.21f };
	switch (iLocal_163)
	{
		case 0x00000000:
			if (Function_138(&vLocal_89, &bLocal_162))
			{
				*iParam1 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_192(), iLocal_118[3], vLocal_89, 0.0f, fLocal_63[3], 0.0f);
				SET_ACTOR_CAN_PLAY_GESTURES(*iParam1, false);
				iLocal_163 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(*iParam1))
			{
				if (Function_91(*iParam1, Global_34573) > 30.0f)
				{
					uLocal_161 = TASK_SEQUENCE_OPEN();
					if (bLocal_162)
					{
						TASK_GO_TO_COORD_NONSTOP(0, &vVar0, 3, 3212836864);
					}
					TASK_GO_TO_COORD(false, &(vLocal_47[33]), 3);
					TASK_FACE_COORD(0, &vVar3, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(*iParam1, uLocal_161);
					TASK_SEQUENCE_RELEASE(uLocal_161, 1);
					iLocal_163 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(*iParam1))
			{
				if (Function_91(Global_34573, *iParam1) > 20.0f)
				{
					Function_79(*iParam1, Global_34573, "eventFiringSquadMsg01", "eventFiringSquadMsg01", 5, 60, 1, 1);
					iLocal_163 = 3;
				}
			}
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

bool Function_138(var uParam0, int iParam1) //Position: 0x721C / 29212
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { -4329.0f, 28.0f, 4411.0f };
	vVar3 = { -4353.0f, 30.0f, 4404.0f };
	*uParam0 = { 0.0f, 0.0f, 0.0f };
	if (Function_140(StackVal, StackVal, Global_34573, vVar0) > 50.0f)
	{
		fVar6 = Function_140(StackVal, StackVal, Global_34573, vVar0);
		*iParam1 = 1;
		*uParam0 = { StackVal, StackVal, vVar0 };
	}
	if (Function_140(StackVal, StackVal, Global_34573, vVar3) > fVar6)
	{
		fVar6 = Function_140(StackVal, StackVal, Global_34573, vVar3);
		*iParam1 = 0;
		*uParam0 = { StackVal, StackVal, vVar3 };
	}
	if (Function_139(StackVal, StackVal, *uParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_139(vector3 vParam0) //Position: 0x72B2 / 29362
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_140(bool bParam0, vector3 vParam1) //Position: 0x72CA / 29386
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_72(bParam0);
		vVar0 = { StackVal, StackVal, Function_72(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_141(int iParam0, int iParam1) //Position: 0x7344 / 29508
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

vector3 Function_142() //Position: 0x7353 / 29523
{
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_143(bool bParam0) //Position: 0x735C / 29532
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_144(var uParam0, int iParam1) //Position: 0x736D / 29549
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_148(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_145(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_145(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x74CE / 29902
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_146(bool bParam0) //Position: 0x7569 / 30057
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_147("0", &cVar8, ""), 4);
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

struct<32> Function_147(char* cParam0, char* cParam1, char* cParam2) //Position: 0x75D3 / 30163
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_148(bool bParam0) //Position: 0x75F2 / 30194
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_149(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_140(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_149(iVar0);
						}
					}
					else if (Function_140(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_149(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_149(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_149(int iParam0) //Position: 0x7753 / 30547
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_150(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x77B4 / 30644
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	uParam1 = uParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_152("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_151(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_151(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_151(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_151(bool bParam0) //Position: 0x7A11 / 31249
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_152(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7A57 / 31319
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x7ACE / 31438
{
	char* cVar0[16];
	
	if (!Function_154())
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

bool Function_154() //Position: 0x7B0D / 31501
{
	if (Function_89(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_155(bool bParam0, int iParam1) //Position: 0x7B28 / 31528
{
	int iVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(iVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		iVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	if (!IS_OBJECTSET_VALID(iVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, iVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, iVar0);
	CLEAN_OBJECTSET(iVar0);
	return 1;
}

int Function_156(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x7BA1 / 31649
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_158(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_157(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_157(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_157(bool bParam0, bool bParam1) //Position: 0x7D02 / 32002
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_158(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7D0F / 32015
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(bVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
		if (!Function_154())
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
		}
		else
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &uParam0, 2.0f, 0);
		}
	}
}

bool Function_159(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7E52 / 32338
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

float Function_160() //Position: 0x7E6E / 32366
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_96(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_161(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7E9F / 32415
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_148(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_162(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_162(var uParam0, int iParam1) //Position: 0x7F6F / 32623
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

bool Function_163(int iParam0) //Position: 0x7F8D / 32653
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		Function_167(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_167(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
	Function_164();
	return 1;
}

void Function_164() //Position: 0x8309 / 33545
{
	if (!Function_165(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_165(int iParam0) //Position: 0x8349 / 33609
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_166() //Position: 0x8365 / 33637
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

void Function_167(var uParam0, int iParam1) //Position: 0x8390 / 33680
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_168() //Position: 0x83A1 / 33697
{
	if (!Function_165(128))
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

void Function_169(bool bParam0) //Position: 0x83E3 / 33763
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*bParam0, 1);
		}
	}
	return;
}

void Function_170(bool bParam0, int iParam1) //Position: 0x8425 / 33829
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_169(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_171(int iParam0) //Position: 0x8452 / 33874
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8495 / 33941
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_171(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x84C2 / 33986
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

bool Function_174(int iParam0) //Position: 0x852A / 34090
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_175(int iParam0) //Position: 0x85A0 / 34208
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_176(int iParam0, int iParam1) //Position: 0x85AB / 34219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*iParam0)[iVar0]);
		iVar0++;
	}
	return;
}

var Function_177(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x85CD / 34253
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_4(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_167(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_167(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_178(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x869D / 34461
{
	return Function_179(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x86B1 / 34481
{
	return Function_180(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_180(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x86CA / 34506
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_186();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_185(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_184(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_184(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_183(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_185(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_183(bVar0))
				{
					Function_182();
				}
				Function_181(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_185(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_181(int iParam0) //Position: 0x89BD / 35261
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_182() //Position: 0x8A71 / 35441
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_183(bool bParam0) //Position: 0x8AAB / 35499
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8AD8 / 35544
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_185(bool bParam0) //Position: 0x8C29 / 35881
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_186() //Position: 0x8C40 / 35904
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_182();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_182();
	return;
}

int Function_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x8C8B / 35979
{
	int iVar0;
	int iVar1[40];
	int iVar42;
	int iVar43;
	int iVar44;
	var uVar45;
	int iVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (iParam2 > 4294967295 || iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		iVar43 = (iParam0 + iVar42);
		if (((iVar43 == iParam2 && iVar43 == iParam3) && iVar43 == iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar43), "_cs"))
		{
			iVar1[iVar44] = iVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	iVar46 = RAND_INT_RANGE(0, (iVar44 - 1));
	uVar45 = iVar1[iVar46];
	return uVar45;
}

int Function_188(int iParam0, int iParam1) //Position: 0x8DA1 / 36257
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_189(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8DB7 / 36279
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_190(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_167(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_190(var uParam0, int iParam1, int iParam2) //Position: 0x8DEF / 36335
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_167(uParam0[iVar03], 4);
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

void Function_191(var uParam0, float fParam1) //Position: 0x8EB3 / 36531
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_141(uParam0, 1);
	Function_47(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_192() //Position: 0x8ED4 / 36564
{
	var uVar0;
	
	return uVar0;
}

