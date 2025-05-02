//Decompiled with MagicRDR v1.0
//Function Count : 193
//Statics Count : 291
//Natives Count : 318
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	struct<2> Local_42[3];
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	float fLocal_56[3] = { 0.0f, 0.0f, 0.0f };
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<2> Local_64[5];
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
	float fLocal_86[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<2> Local_103 = { 0, 0 } ;
	var uLocal_105 = 0;
	struct<2> Local_106 = { 0, 0 } ;
	var uLocal_108 = 0;
	struct<2> Local_109 = { 0, 0 } ;
	var uLocal_111 = 0;
	float fLocal_112 = 0.0f;
	struct<2> Local_113 = { 0, 0 } ;
	var uLocal_115 = 0;
	float fLocal_116 = 0.0f;
	int iLocal_117 = 0;
	struct<2> Local_118 = { 0, 0 } ;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	struct<2> Local_123[2];
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	float fLocal_133[2] = { 0.0f, 0.0f };
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<2> Local_139 = { 0, 0 } ;
	var uLocal_141 = 0;
	float fLocal_142 = 0.0f;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	bool bLocal_147 = false;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	int iLocal_153[3] = { 0, 0, 0 };
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161[5] = { 0, 0, 0, 0, 0 };
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173[2] = { 0, 0 };
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	bool bLocal_179 = false;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = false;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
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
	bool bLocal_200 = false;
	var uLocal_201 = 0;
	var uLocal_202[2] = { 0, 0 };
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	bool bLocal_213 = false;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	int iLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = false;
	int iLocal_228 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2[3];
	var uVar6[5];
	var uVar12;
	var uVar13;
	var uVar14;
	int iVar49;
	int iVar50;
	int iVar51;
	var uVar52;
	int iVar53;
	var uVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	bool bVar62;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_40 = 0;
	iLocal_122 = 0;
	iLocal_180 = 1;
	iLocal_181 = 0;
	bLocal_182 = false;
	iLocal_183 = 0;
	iLocal_184 = 0;
	iLocal_189 = 0;
	iLocal_210 = 0;
	bLocal_213 = false;
	iLocal_214 = 0;
	iLocal_215 = 0;
	iLocal_225 = 0;
	iLocal_228 = 0;
	if ((Global_26652[ScriptParam_0.f_644].f_16 % 4) == 0)
	{
		bLocal_41 = 2;
	}
	else if ((Global_26652[ScriptParam_0.f_644].f_16 % 4) == 1)
	{
		bLocal_41 = false;
	}
	else if ((Global_26652[ScriptParam_0.f_644].f_16 % 4) == 2)
	{
		bLocal_41 = 3;
	}
	else
	{
		bLocal_41 = true;
	}
	Local_109 = Vector(-4354.0f, 30.0f, 4378.0f);
	fLocal_112 = 354,672f;
	uLocal_100 = Vector(-4343.0f, 30,118f, 4378,945f);
	Local_42[02] = Vector(-4345.0f, 30,117f, 4379,21f);
	fLocal_56[0] = 0.0f;
	Local_42[12] = Vector(-4341.0f, 30,118f, 4378,938f);
	fLocal_56[1] = 0.0f;
	Local_42[22] = Local_109;
	fLocal_56[2] = fLocal_112;
	Local_113 = Vector(-4354,701f, 30,159f, 4373,448f);
	fLocal_116 = 286,817f;
	Local_106 = Vector(-4343,84f, 30,1176f, 4371,467f);
	Local_64[02] = Vector(-4341,4f, 30,115f, 4371,8f);
	fLocal_86[0] = 0.0f;
	Local_64[12] = Vector(-4346,09f, 30,1176f, 4371,567f);
	fLocal_86[1] = 0.0f;
	Local_64[22] = Local_113;
	fLocal_86[2] = fLocal_116;
	Local_103 = Vector(Local_106, 30.0f, 4373.0f);
	Local_64[32] = Vector(-4346,294f, 30,118f, 4389,091f);
	fLocal_86[3] = 341,919f;
	switch (bLocal_41)
	{
		case 0x00000000:
			Local_64[42] = Vector(-4340,88f, 30,118f, 4385,204f);
			fLocal_86[4] = 25,632f;
			break;
		
		case 0x00000001:
			Local_64[42] = Vector(-4342,76f, 30,12f, 4383,38f);
			fLocal_86[4] = 25,632f;
			break;
		
		case 0x00000003:
		case 0x00000002:
			Local_64[42] = Vector(-4342,38f, 30,12f, 4386,26f);
			fLocal_86[4] = 25,632f;
			break;
	}
	Local_123[02] = Vector(-4341,427f, 30,114f, 4381,91f);
	fLocal_133[0] = 180.0f;
	Local_123[12] = Vector(-4344,385f, 30,118f, 4382,406f);
	fLocal_133[1] = 180.0f;
	Local_139 = Vector(-4338,88f, 30,118f, 4385,204f);
	fLocal_142 = 180.0f;
	iVar0 = 0;
	uVar1 = CREATE_LAYOUT(Function_192());
	uVar14 = 17;
	Function_191(&uLocal_185, 0.0f);
	iVar49 = 0;
	iVar51 = 0;
	iVar53 = 0;
	fVar55 = 0.0f;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	if (!IS_POPSET_VALID(&(Global_46972[0])))
	{
		iVar0 = 5;
	}
	else
	{
		Function_189(&uVar14, "stolen_panic", 5, 0);
		Function_189(&uVar14, "custom/stolen_panic", 8, 0);
		Function_189(&uVar14, "execution_idle", 5, 0);
		Function_189(&uVar14, "custom/execution_idle", 8, 0);
		Function_189(&uVar14, "mourn_loop", 1, 0);
		switch (bLocal_41)
		{
			case 0x00000000:
				Function_189(&uVar14, "stand_kneelvomit_n_any", 1, 0);
				break;
			
			case 0x00000001:
				Function_189(&uVar14, "rebel_riot02", 1, 0);
				break;
			
			case 0x00000003:
				Function_189(&uVar14, "firesquad_heldback", 1, 0);
				break;
			
			case 0x00000002:
				Function_189(&uVar14, "firesquad_shove", 1, 0);
				break;
		}
		iVar56 = Function_188(11, 3);
		switch (bLocal_41)
		{
			case 0x00000001:
				iLocal_161[4] = Function_187(268, 299, iLocal_161[3], iLocal_161[2], iLocal_161[4]);
				break;
			
			case 0x00000000:
			case 0x00000002:
			case 0x00000003:
				switch (iVar56)
				{
					case 0x00000000:
						iLocal_161[4] = 238;
						break;
					
					case 0x00000001:
						iLocal_161[4] = 240;
						break;
					
					case 0x00000002:
						iLocal_161[4] = 239;
						break;
				}
		}
		iVar50 = 0;
		while (iVar50 <= 4)
		{
			if (iVar50 == 2)
			{
				iVar57 = Function_188(11, 3);
				if (iVar57 == 0)
				{
					iLocal_161[2] = 299;
				}
				else if (iVar57 == 1)
				{
					iLocal_161[2] = 297;
				}
				else
				{
					iLocal_161[2] = 292;
				}
			}
			else if (iVar50 == 3)
			{
				iVar57 = Function_188(11, 3);
				if (iVar57 == 0)
				{
					iLocal_161[3] = 286;
				}
				else if (iVar57 == 1)
				{
					iLocal_161[3] = 278;
				}
				else
				{
					iLocal_161[3] = 274;
				}
			}
			else
			{
				iLocal_161[iVar50] = Function_178(&(Global_46972[0]), 1, 0, 1);
			}
			iVar50++;
		}
		iVar50 = 0;
		while (iVar50 <= 3)
		{
			if (iVar50 == 2)
			{
				iLocal_153[2] = 394;
			}
			else
			{
				iLocal_153[iVar50] = RAND_INT_RANGE(379, 393);
			}
			iVar50++;
		}
		iLocal_173[0] = RAND_INT_RANGE(379, 393);
		iVar58 = Function_188(11, 2);
		if (iVar58 == 0)
		{
			iLocal_173[1] = 379;
		}
		else
		{
			iLocal_173[1] = 393;
		}
		switch (bLocal_41)
		{
			case 0x00000001:
				bLocal_179 = RAND_INT_RANGE(379, 393);
				break;
			
			case 0x00000003:
			case 0x00000002:
				bLocal_179 = Function_187(268, 299, iLocal_161[3], iLocal_161[2], iLocal_161[4]);
				break;
			}
	}
	Function_177(&uVar14, iLocal_161[4], 3, 0);
	iVar50 = 0;
	while (iVar50 <= 4)
	{
		if (iLocal_161[iVar50] == 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_177(&uVar14, iLocal_161[iVar50], 3, 0);
		}
		iVar50++;
	}
	if (iVar0 != 5)
	{
		Function_176(&iLocal_161, 5);
		iVar50 = 0;
		while (iVar50 <= 3)
		{
			if (iLocal_153[iVar50] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_177(&uVar14, iLocal_153[iVar50], 3, 0);
			}
			iVar50++;
		}
	}
	if (iVar0 != 5)
	{
		Function_176(&iLocal_153, 3);
		if (iLocal_173[0] != 4294967295 || iLocal_173[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_177(&uVar14, iLocal_173[0], 3, 0);
			Function_177(&uVar14, iLocal_173[1], 3, 0);
		}
	}
	switch (bLocal_41)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000002:
			if (iVar0 != 5)
			{
				Function_175(bLocal_179);
				if (bLocal_179 == 4294967295)
				{
					iVar0 = 5;
				}
				else
				{
					Function_177(&uVar14, bLocal_179, 3, 0);
				}
			}
			break;
	}
	iVar60 = 0;
	if (Function_174(0))
	{
		iVar0 = 5;
	}
	iVar61 = 0;
	bVar62 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar59 = 600;
		if (Function_173(&bVar62, &iVar0, &iVar61, &iVar59, bLocal_182))
		{
			if (bVar62)
			{
				Function_172(&uVar2, 4294967295);
				Function_172(&uVar6, 4294967295);
				Function_172(&uLocal_202, 4294967295);
				Function_171(&bLocal_200);
			}
			else
			{
				Function_170(&uVar2, 4294967295);
				Function_170(&uVar6, 4294967295);
				Function_170(&uLocal_202, 4294967295);
				Function_169(&bLocal_200);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_163(&uVar14))
				{
					iVar0 = 1;
				}
				iVar59 = 600;
				break;
			
			case 0x00000001:
				if (Function_161(&(Local_64[02]), &ScriptParam_0 + 60, 0, ScriptParam_0.f_40))
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_54078, Local_42[02]) > Function_160())
				{
					iVar0 = 5;
					iVar59 = 0;
					break;
				}
				if (Function_159(StackVal, Local_64[12], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar0 = 5;
					break;
				}
				Function_158(StackVal, Vector(-4346,42f, 30,87f, 4382,23f), &uVar12, &uVar13);
				Function_156(StackVal, Vector(-4346,42f, 30,87f, 4382,23f), 0, 0);
				if (IS_GRINGO_VALID(&uVar12))
				{
					GRINGO_ALLOW_ACTIVATION(&uVar12, false);
				}
				if (IS_GRINGO_VALID(&uVar13))
				{
					GRINGO_ALLOW_ACTIVATION(&uVar13, false);
				}
				uVar54 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar1, Function_192(), 0f, Local_64[12], Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 25.0f, 30.0f));
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar54);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar54);
				iVar50 = 0;
				while (iVar50 <= 3)
				{
					uVar2[iVar50] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar1, Function_192(), iLocal_153[iVar50], Local_42[iVar502], Vector(0.0f, fLocal_56[iVar50], 0.0f));
					TASK_STAND_STILL(&(uVar2[iVar50]), -1.0f, 0, 0);
					Function_155(&(uVar2[iVar50]), 0);
					SET_ACTOR_VISION_XRAY(&(uVar2[iVar50]), 1);
					SET_ACTOR_CAN_PLAY_GESTURES(&(uVar2[iVar50]), false);
					if (iVar50 == 2)
					{
						GIVE_WEAPON_TO_ACTOR(&(uVar2[iVar50]), 41, 0f, 1, 1);
					}
					else
					{
						GIVE_WEAPON_TO_ACTOR(&(uVar2[iVar50]), 42, 0f, 1, 1);
					}
					iVar50++;
				}
				iVar50 = 0;
				while (iVar50 <= 5)
				{
					if (iVar50 == 3)
					{
					}
					else
					{
						uVar6[iVar50] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar1, Function_192(), iLocal_161[iVar50], Local_64[iVar502], Vector(0.0f, fLocal_86[iVar50], 0.0f));
						TASK_STAND_STILL(&(uVar6[iVar50]), -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(&(uVar6[iVar50]), false);
					}
					DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar6[iVar50]));
					if (iVar50 <= 3)
					{
						SET_ANIM_SET_FOR_ACTOR(&(uVar6[iVar50]), "execution_idle", 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uVar6[iVar50]), "execution_idle/firingsquad");
					}
					if (iVar50 == 4)
					{
						switch (bLocal_41)
						{
							case 0x00000000:
								SET_ANIM_SET_FOR_ACTOR(&(uVar6[iVar50]), "stolen_panic", 0);
								SET_ACTION_NODE_FOR_ACTOR(&(uVar6[iVar50]), "stolen_panic/loop");
								break;
						}
						SET_ACTOR_CAN_PLAY_GESTURES(&(uVar6[iVar50]), false);
						SET_ACTOR_CAN_BE_HARDLOCKED(&(uVar6[iVar50]), 0);
						SET_ACTOR_UPDATE_PRIORITY(&(uVar6[iVar50]), false);
					}
					iVar50++;
				}
				iVar50 = 0;
				while (iVar50 <= 2)
				{
					uLocal_202[iVar50] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar1, Function_192(), iLocal_173[iVar50], Local_123[iVar502], Vector(0.0f, fLocal_133[iVar50], 0.0f));
					TASK_STAND_STILL(&(uLocal_202[iVar50]), -1.0f, 0, 0);
					SET_ACTOR_CAN_PLAY_GESTURES(&(uLocal_202[iVar50]), false);
					Function_155(&(uLocal_202[iVar50]), 0);
					SET_ACTOR_VISION_XRAY(&(uLocal_202[iVar50]), 1);
					iVar50++;
				}
				switch (bLocal_41)
				{
					case 0x00000001:
						bLocal_200 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar1, Function_192(), bLocal_179, Local_139, Vector(0.0f, fLocal_142, 0.0f));
						TASK_STAND_STILL(&bLocal_200, -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_200, false);
						Function_155(&bLocal_200, 0);
						SET_ACTOR_VISION_XRAY(&bLocal_200, 1);
						break;
					
					case 0x00000003:
					case 0x00000002:
						bLocal_200 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uVar1, Function_192(), bLocal_179, Local_139, Vector(0.0f, fLocal_142, 0.0f));
						TASK_STAND_STILL(&bLocal_200, -1.0f, 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_200, false);
						SET_ACTOR_VISION_XRAY(&bLocal_200, 1);
						SET_ACTOR_UPDATE_PRIORITY(&bLocal_200, false);
						break;
				}
				if (IS_ACTOR_VALID(&(uLocal_202[0])))
				{
					if (IS_ACTOR_VALID(&(uVar6[4])))
					{
						TASK_POINT_GUN_AT_OBJECT(&(uLocal_202[0]), &(uVar6[4]), -1.0f, 0);
					}
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				AI_GOAL_LOOK_AT_ACTOR(&(uVar2[0]), &(uVar6[0]), 1, 1065353216, 3212836864, 3212836864, 0);
				AI_GOAL_LOOK_AT_ACTOR(&(uVar2[1]), &(uVar6[1]), 1, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_ONE_SHOT_DEATH(&(uVar6[0]), 1);
				SET_ACTOR_ONE_SHOT_DEATH(&(uVar6[1]), 1);
				SET_ACTOR_ONE_SHOT_DEATH(&(uVar6[2]), 1);
				if (!Function_150(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40))
				{
					iVar0 = 5;
					iVar59 = 0;
					break;
				}
				uVar52 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_192(), 4,203895E-45f, Local_64[12], Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
				DECOR_SET_INT(&uVar52, "script", GET_THIS_SCRIPT_ID());
				Function_144(&uVar52, ScriptParam_0.f_40);
				switch (bLocal_41)
				{
					case 0x00000000:
						Function_143(&(uVar6[4]));
						Function_142();
						uLocal_145 = CREATE_GRINGO_IN_LAYOUT(&uVar1, Function_192(), "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", Function_143(&(uVar6[4])), Function_142());
						break;
					
					case 0x00000001:
						Function_143(&(uVar6[4]));
						uLocal_145 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar1, Function_192(), "$/content/scripting/gringo/simplegringo/rebel_riot02", Function_143(&(uVar6[4])), Vector(0.0f, 180.0f, 0.0f));
						break;
					
					case 0x00000002:
						Function_143(&(uVar6[4]));
						Function_142();
						uLocal_145 = CREATE_GRINGO_IN_LAYOUT(&uVar1, Function_192(), "$/content/scripting/gringo/simplegringo/firesquad_shove", Function_143(&(uVar6[4])), Function_142());
						break;
					
					case 0x00000003:
						Function_143(&(uVar6[4]));
						uLocal_145 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uVar1, Function_192(), "$/content/scripting/gringo/simplegringo/firesquad_heldback", Function_143(&(uVar6[4])), Vector(0.0f, 270.0f, 0.0f));
						break;
				}
				SNAP_OBJECT_TO_GROUND(&uLocal_145, 1,5f, 0, 1092616192);
				SNAP_OBJECT_TO_GROUND(&bLocal_147, 1,5f, 0, 1092616192);
				Function_142();
				bLocal_147 = CREATE_GRINGO_IN_LAYOUT(&uVar1, Function_192(), "$/content/scripting/gringo/simplegringo/Mourn_loop", Local_106, Function_142());
				Function_142();
				uLocal_149 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar1, Function_192(), 2,802597E-45f, Vector(-4342,923f, 30,118f, 4380,383f), Function_142(), Vector(2.0f, 2.0f, 1.0f));
				Function_142();
				uLocal_151 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar1, Function_192(), 2,802597E-45f, Vector(-4344.0f, 30.0f, 4374.0f), Function_142(), Vector(10.0f, 10.0f, 10.0f));
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uVar6[3]), &uLocal_149);
				Function_141(&iVar60, 1);
				iVar0 = 3;
				iVar59 = 0;
				break;
			
			case 0x00000003:
				Function_137(&uVar1, &(uVar6[3]));
				Function_125(&uVar2, 3, &bLocal_182, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				Function_125(&uVar6, 5, &bLocal_182, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				if (!Function_121(ScriptParam_0.f_64, &(uVar2[0]), &iVar51, &iVar53, iLocal_181, 0, 1, 1))
				{
					iVar0 = 5;
					iVar59 = 0;
					break;
				}
				iVar50 = 0;
				while (iVar50 > 3 && iVar49 > 11)
				{
					if (IS_ACTOR_VALID(&(uVar2[iVar50])))
					{
						if (Function_120(&(uVar2[iVar50])))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar49 = 11;
						}
						else if (Function_117(&(uVar2[iVar50]), &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
						{
							if ((iLocal_208 != 4 || iLocal_208 != 2) || iLocal_208 != 16)
							{
								Function_115(&(uVar2[iVar50]));
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar49 = 11;
						}
					}
					iVar50++;
				}
				if (iVar49 <= 11)
				{
					if (((Function_120(&(uLocal_202[0])) || Function_120(&(uLocal_202[1]))) || Function_120(&bLocal_200)) || Function_103(&uLocal_149, &uLocal_151))
					{
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar49 = 11;
					}
					else if (Function_117(&(uLocal_202[0]), &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
					{
						if ((iLocal_208 != 4 || iLocal_208 != 2) || iLocal_208 != 16)
						{
							Function_115(&(uLocal_202[0]));
						}
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar49 = 11;
					}
					else if (Function_117(&(uLocal_202[1]), &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
					{
						if ((iLocal_208 != 4 || iLocal_208 != 2) || iLocal_208 != 16)
						{
							Function_115(&(uLocal_202[1]));
						}
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar49 = 11;
					}
					else if (Function_117(&bLocal_200, &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
					{
						if ((iLocal_208 != 4 || iLocal_208 != 2) || iLocal_208 != 16)
						{
							Function_115(&bLocal_200);
						}
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
						iVar49 = 11;
					}
				}
				iVar50 = 0;
				while (iVar50 > 2 && iVar49 > 11)
				{
					if (IS_ACTOR_VALID(&(uLocal_202[iVar50])))
					{
						if (Function_120(&(uLocal_202[iVar50])))
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar49 = 11;
						}
						else if (Function_117(&(uLocal_202[iVar50]), &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
						{
							if ((iLocal_208 != 4 || iLocal_208 != 2) || iLocal_208 != 16)
							{
								Function_115(&(uLocal_202[iVar50]));
							}
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
							iVar49 = 11;
						}
					}
					iVar50++;
				}
				if (iLocal_143 == 0)
				{
					if (IS_ACTOR_VALID(&(uVar6[3])))
					{
						if (Function_117(&(uVar6[3]), &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
						{
							Function_102(&(uVar6[3]));
							Function_101(&(uVar6[3]), 0, 0, 2);
							iLocal_143 = 1;
						}
					}
				}
				if (iLocal_144 == 0)
				{
					if (IS_ACTOR_VALID(&(uVar6[4])))
					{
						if (Function_117(&(uVar6[4]), &iLocal_208, &fVar55, iVar60, 0, 0x40400000))
						{
							Function_102(&(uVar6[4]));
							Function_101(&(uVar6[4]), 0, 0, 2);
							iLocal_144 = 1;
						}
					}
				}
				Function_100(&(uLocal_202[1]));
				switch (bLocal_41)
				{
					case 0x00000001:
						Function_99(&(uVar6[4]), &bLocal_200, &uVar1);
						break;
					
					case 0x00000003:
					case 0x00000002:
						Function_98(&(uVar6[4]), &bLocal_200, &uVar1);
						break;
				}
				if (!Function_95(StackVal, &Global_54076, Local_42[02], Function_96(1)))
				{
					iVar59 = 0;
					iVar0 = 5;
					break;
				}
				else if (Function_13(&iVar49, &uVar1, &uVar2, &uVar6, &iVar59))
				{
					iVar0 = 5;
					iVar59 = 0;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar59 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar59 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar59);
		}
	}
	if (bLocal_213)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_170(&uVar2, 4294967295);
	Function_170(&uVar6, 4294967295);
	Function_170(&uLocal_202, 4294967295);
	Function_169(&bLocal_200);
	if (!bLocal_182)
	{
		Function_12(&uVar2, 4294967295);
		Function_12(&uVar6, 4294967295);
		Function_12(&uLocal_202, 4294967295);
		Function_11(&bLocal_200);
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
	}
	else
	{
		if (Function_7(&(uVar2[2]), 0))
		{
			AI_GOAL_AIM_CLEAR(&(uVar2[2]));
		}
		if (iLocal_121 == 0)
		{
			iVar50 = 0;
			while (iVar50 <= 3)
			{
				if (Function_7(&(uVar2[iVar50]), 0))
				{
					TASK_CLEAR(&(uVar2[iVar50]));
					Function_101(&(uVar2[iVar50]), 0, 0, 1);
				}
				iVar50++;
			}
			iVar50 = 0;
			while (iVar50 <= 2)
			{
				if (Function_7(&(uLocal_202[iVar50]), 0))
				{
					TASK_CLEAR(&(uLocal_202[iVar50]));
					Function_101(&(uLocal_202[iVar50]), 0, 0, 1);
				}
				iVar50++;
			}
			if (IS_ACTOR_VALID(&(uVar6[0])))
			{
				if (!Function_6(&(uVar6[0])))
				{
					if (IS_ACTOR_VALID(&(uVar6[0])))
					{
						Function_101(&(uVar6[0]), 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&(uVar6[1])))
			{
				if (!Function_6(&(uVar6[1])))
				{
					if (IS_ACTOR_VALID(&(uVar6[1])))
					{
						Function_101(&(uVar6[1]), 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&(uVar6[2])))
			{
				if (!Function_6(&(uVar6[2])))
				{
					if (IS_ACTOR_VALID(&(uVar6[2])))
					{
						Function_101(&(uVar6[2]), 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&(uVar6[3])))
			{
				if (!Function_6(&(uVar6[3])))
				{
					if (IS_ACTOR_VALID(&(uVar6[3])))
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uVar6[3]), 1);
						Function_101(&(uVar6[3]), 2, 0, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(&(uVar6[4])))
			{
				if (!Function_6(&(uVar6[4])))
				{
					if (IS_ACTOR_VALID(&(uVar6[4])))
					{
						AI_QUICK_EXIT_GRINGO(&(uVar6[4]), 1);
						RESET_ANIM_SET_FOR_ACTOR(&(uVar6[4]), 1);
						Function_101(&(uVar6[4]), 2, 0, 1);
					}
				}
			}
			if (Function_7(&bLocal_200, 0))
			{
				if (!Function_6(&bLocal_200))
				{
					TASK_CLEAR(&bLocal_200);
					AI_QUICK_EXIT_GRINGO(&bLocal_200, 1);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_200, 1);
					if (Function_174(0))
					{
						MEMORY_CONSIDER_AS(&bLocal_200, &Global_54076, 5);
					}
					Function_101(&bLocal_200, 2, 0, 1);
				}
			}
		}
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	Function_5(&iLocal_161, 5);
	Function_5(&iLocal_153, 3);
	Function_5(&iLocal_173, 2);
	Function_156(StackVal, Vector(-4346.0f, 30.0f, 4382.0f), 1, 0);
	if (IS_GRINGO_VALID(&uVar12))
	{
		GRINGO_ALLOW_ACTIVATION(&uVar12, true);
	}
	if (IS_GRINGO_VALID(&uVar13))
	{
		GRINGO_ALLOW_ACTIVATION(&uVar13, true);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar54);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar54);
	if (iLocal_117 == 1)
	{
		AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
		iLocal_117 = 0;
	}
	Function_1(&uVar14);
	RELEASE_LAYOUT_REF(&uVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x14C4 / 5316
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x14EC / 5356
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

void Function_3(struct<13> Param0) //Position: 0x1637 / 5687
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x1654 / 5716
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int[] iParam0, int iParam1) //Position: 0x1672 / 5746
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_6(bool bParam0) //Position: 0x1695 / 5781
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&bParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

bool Function_7(bool bParam0, bool bParam1) //Position: 0x16BD / 5821
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&bParam0))
		{
			if (!(GET_TASK_STATUS(&bParam0, 25) != 1 || GET_TASK_STATUS(&bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&bParam0, 0);
				TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&bParam0, true);
			}
			Function_9(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_9(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_8(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_8(int iParam0, int iParam1) //Position: 0x1768 / 5992
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_9(int iParam0) //Position: 0x17BA / 6074
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_10(&iParam0);
		return 1;
	}
	return 0;
}

void Function_10(var uParam0) //Position: 0x17D2 / 6098
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_11(bool bParam0) //Position: 0x1805 / 6149
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

void Function_12(var[] uParam0, int iParam1) //Position: 0x1835 / 6197
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_11(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_13(var uParam0, var uParam1, var[] uParam2) //Position: 0x1867 / 6247
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar5;
	
	uParam1 = &uParam1;
	Var1 = Vector(-4347,74f, 30,118f, 4373,34f);
	Function_94(&(uLocal_202[0]), &(uParam3[3]));
	uVar3 = Vector(-4296.0f, 23.0f, 4408.0f);
	switch (bLocal_41)
	{
		case 0x00000000:
			Function_93(&(uParam3[4]), &(uLocal_202[1]), uParam0);
			break;
	}
	uVar5 = Vector(-4344.0f, 30.0f, 4365.0f);
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_92(&Global_54076, &(uParam2[0])) > 150.0f)
			{
				iLocal_226 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &(Local_64[32]), 3);
				TASK_FACE_COORD(0, &(Local_64[32]), 0);
				TASK_STAND_STILL(0, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam3[3]), iLocal_226);
				TASK_SEQUENCE_RELEASE(iLocal_226, 1);
				Function_191(&uLocal_185, 0.0f);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_87(&uLocal_185, 2.0f))
			{
				Function_191(&uLocal_185, 0.0f);
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_92(&Global_54076, &(uParam2[0])) > 25.0f)
			{
				Function_85();
				Function_84(11);
				uLocal_190 = CREATE_PATH_IN_LAYOUT(&uParam1, Function_192(), 4);
				uLocal_192 = CREATE_PATH_IN_LAYOUT(&uParam1, Function_192(), 4);
				uLocal_194 = CREATE_PATH_IN_LAYOUT(&uParam1, Function_192(), 2);
				ADD_POINT_TO_PATH(StackVal, &uLocal_190, Vector(-4352,127f, 30,159f, 4371,853f));
				ADD_POINT_TO_PATH(StackVal, &uLocal_190, Vector(-4349,636f, 30,083f, 4371,513f));
				ADD_POINT_TO_PATH(StackVal, &uLocal_190, Vector(-4346,821f, 30,118f, 4372,609f));
				ADD_POINT_TO_PATH(&uLocal_190, Local_103);
				ADD_POINT_TO_PATH(StackVal, &uLocal_192, Vector(-4352,127f, 30,159f, 4371,853f));
				ADD_POINT_TO_PATH(&uLocal_192, Var1);
				ADD_POINT_TO_PATH(StackVal, &uLocal_192, Vector(-4346,821f, 30,118f, 4372,609f));
				ADD_POINT_TO_PATH(&uLocal_192, Local_106);
				ADD_POINT_TO_PATH(StackVal, &uLocal_194, Vector(-4342.0f, 30.0f, 4381.0f));
				ADD_POINT_TO_PATH(StackVal, &uLocal_194, Vector(-4343.0f, 30.0f, 4374.0f));
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&(uParam3[2])))
			{
				iLocal_209 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &uLocal_192, 1, 0, 0, 1, 0);
				TASK_FACE_COORD(0, &uVar5, 0);
				TASK_STAND_STILL(0, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam3[2]), iLocal_209);
				TASK_SEQUENCE_RELEASE(iLocal_209, 1);
			}
			if (IS_ACTOR_VALID(&(uParam3[3])))
			{
				SET_ANIM_SET_FOR_ACTOR(&(uParam3[3]), "stolen_panic", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam3[3]), "stolen_panic/loop");
			}
			Function_191(&uLocal_185, 0.0f);
			uParam0 = 3;
			break;
		
		case 0x00000003:
			if (Function_87(&uLocal_185, 3.0f))
			{
				if (IS_ACTOR_VALID(&(uParam2[2])))
				{
					GIVE_WEAPON_TO_ACTOR(&(uParam2[2]), 41, 0.0f, 0, 1);
					ACTOR_PUT_WEAPON_IN_HAND(&(uParam2[2]), 41, 1);
					Function_83(&(uParam2[2]), 1, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam2[2]), 0);
					iLocal_209 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &uLocal_190, 1, 0, 0, 1, 0);
					TASK_GO_TO_COORD(0, &uLocal_100, 1);
					TASK_FACE_ACTOR(0, &(uParam3[2]), 0, 2.0f);
					TASK_STAND_STILL(0, 5.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uParam2[2]), iLocal_209);
					TASK_SEQUENCE_RELEASE(iLocal_209, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam2[2]), 0);
					AI_GOAL_AIM_AT_OBJECT(&(uParam2[2]), GET_OBJECT_FROM_ACTOR(&(uParam3[2])), 1);
					switch (bLocal_41)
					{
						case 0x00000001:
							iLocal_183 = 1;
							break;
					}
					uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (GET_NTH_TASK_STATUS(&(uParam2[2]), 2) == 0)
			{
				Function_81(&(uParam3[2]), &(uParam2[2]));
			}
			if (GET_TASK_STATUS(&(uParam2[2]), 0) == 0)
			{
				TASK_STAND_STILL(&(uParam2[2]), -1.0f, 0, 0);
				Function_191(&uLocal_185, 0.0f);
				uParam0 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_87(&uLocal_185, 0.0f) && iLocal_184 != 0)
			{
				Function_80(&(uParam2[2]), &(uParam3[0]), "eventExecutionMsg01", "eventExecutionMsg01", 2, 60, 0, 1);
				Function_191(&uLocal_185, 0.0f);
				TASK_CLEAR(&(uParam2[2]));
				GIVE_WEAPON_TO_ACTOR(&(uParam2[2]), 41, 0.0f, 0, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&(uParam2[2]), 41, 1);
				Function_83(&(uParam2[2]), 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam2[2]), 0);
				TASK_PRIORITY_SET(&(uParam2[2]), true);
				iLocal_184++;
			}
			uParam4 = 0;
			if (Function_87(&uLocal_185, 0.0f) && iLocal_184 != 1)
			{
				Function_80(&(uParam2[2]), &(uParam3[0]), "eventExecutionMsg02", "eventExecutionMsg02", 2, 60, 0, 1);
				TASK_CLEAR(&(uParam2[2]));
				TASK_POINT_GUN_AT_OBJECT(&(uParam2[0]), &(uParam3[1]), -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT(&(uParam2[1]), &(uParam3[0]), -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT(&(uParam2[2]), &(uParam3[2]), -1.0f, 0);
				AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_NARROWLY_MISSED");
				AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_MISSED_TARGET");
				iLocal_117 = 1;
				Function_191(&uLocal_185, 0.0f);
				iLocal_184++;
			}
			if (Function_87(&uLocal_185, 2.0f) && iLocal_184 != 2)
			{
				Function_80(&(uParam2[2]), &(uParam3[0]), "eventExecutionMsg03", "eventExecutionMsg03", 2, 60, 0, 1);
				Function_191(&uLocal_185, 0.0f);
				iLocal_184++;
			}
			if (Function_87(&uLocal_185, 1.0f) && iLocal_184 != 3)
			{
				AI_GOAL_AIM_CLEAR(&(uParam2[2]));
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam2[2]), 28, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam2[2]), 31, -1.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam2[2]), 37, 2.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&(uParam2[2]), 38, 0,5f);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&(uParam2[2]), 0);
				MEMORY_REPORT_POSITION_AUTO(&(uParam2[2]), &(uParam3[2]), 1);
				MEMORY_CONSIDER_AS_ENEMY(&(uParam2[2]), &(uParam3[2]));
				Function_79(&(uParam2[0]), &(uParam3[1]));
				Function_79(&(uParam2[1]), &(uParam3[0]));
				Function_79(&(uParam2[2]), &(uParam3[2]));
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam2[2]), 1);
				if (Function_75(&(uParam3[2]), 0, 0, 0, 0, 0, 0, 0, 0))
				{
				}
				iLocal_183 = 1;
				if (IS_VOLUME_VALID(&uLocal_149))
				{
					DESTROY_VOLUME(&uLocal_149);
				}
				if (IS_VOLUME_VALID(&uLocal_151))
				{
					DESTROY_VOLUME(&uLocal_151);
				}
				Function_191(&uLocal_185, 0.0f);
				AUDIO_PLAY_VOCAL_EFFECT(&(uParam3[4]), 9, 1);
				iLocal_184 = 0;
				uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (iLocal_184 == 0)
			{
				iLocal_180 = 1;
				if (Function_7(&(uParam3[0]), 0))
				{
					iLocal_180 = 0;
				}
				if (Function_7(&(uParam3[1]), 0))
				{
					iLocal_180 = 0;
				}
				if (Function_7(&(uParam3[2]), 0))
				{
					iLocal_180 = 0;
				}
				if (iLocal_180 == 1)
				{
					iLocal_184 = 1;
				}
			}
			if (iLocal_184 == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					MEMORY_CLEAR_EVENTS(&(uParam2[iVar0]), 0);
					ACTOR_HOLSTER_WEAPON(&(uParam2[iVar0]), 1);
					iLocal_209 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_GO_NEAR_COORD(0, &uVar3, 15.0f, 1);
					TASK_WANDER(0, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uParam2[iVar0]), iLocal_209);
					TASK_SEQUENCE_RELEASE(iLocal_209, 1);
					Function_102(&(uParam2[iVar0]));
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					MEMORY_CLEAR_EVENTS(&(uLocal_202[iVar0]), 0);
					ACTOR_HOLSTER_WEAPON(&(uLocal_202[iVar0]), 1);
					iLocal_209 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_GO_NEAR_COORD(0, &uVar3, 15.0f, 1);
					TASK_WANDER(0, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uLocal_202[iVar0]), iLocal_209);
					TASK_SEQUENCE_RELEASE(iLocal_209, 1);
					Function_102(&(uLocal_202[iVar0]));
					iVar0++;
				}
				iLocal_121 = 1;
				iLocal_184 = 2;
			}
			if (iLocal_184 == 2)
			{
				switch (bLocal_41)
				{
					case 0x00000000:
						if (Function_59(&(uParam3[4]), &uParam1) || iLocal_144)
						{
							if (iLocal_117 == 1)
							{
								AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
								iLocal_117 = 0;
							}
							return 1;
						}
						break;
					
					case 0x00000001:
						if (iLocal_98 == 1)
						{
							return 1;
						}
						break;
					
					case 0x00000003:
					case 0x00000002:
						if (iLocal_99 == 1)
						{
							return 1;
						}
						break;
					}
			}
			break;
		
		case 0x0000000B:
			if (iLocal_122 == 0)
			{
				Function_54(50, 1, 0);
				Function_15(200, 1, 0);
				iLocal_122 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (IS_ACTOR_VALID(&(uParam3[iVar0])))
				{
					TASK_FLEE_ACTOR(&(uParam3[iVar0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					if (!iLocal_189)
					{
						if (iVar0 == 2)
						{
							if (iLocal_161[2] == 299)
							{
								Function_80(&(uParam3[2]), &Global_54076, "firstTimeEscalera_msg06", "firstTimeEscalera_msg06", 5, 60, 1, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&(uParam3[2]), 103, &Global_54076, 0, 0, 5, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&(uParam3[iVar0]), 103, &Global_54076, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						iLocal_189 = 1;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (IS_ACTOR_VALID(&(uParam2[iVar0])))
				{
					if (!Function_120(&(uParam2[iVar0])))
					{
						if (Function_7(&(uParam3[iVar0]), 0))
						{
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam2[iVar0]), 4294967295);
							AI_GOAL_AIM_CLEAR(&(uParam2[iVar0]));
							TASK_CLEAR(&(uParam2[iVar0]));
							if (iVar0 == 0)
							{
								if (Function_7(&(uParam3[iVar0]), 0))
								{
									if (Function_7(&(uParam2[iVar0]), 0))
									{
										SET_ACTOR_ONE_SHOT_DEATH(&(uParam3[iVar0]), 1);
										Function_14(&(uParam2[iVar0]), &(uParam3[iVar0]));
										iLocal_209 = TASK_SEQUENCE_OPEN();
										TASK_KILL_CHAR(0, &(uParam3[iVar0]));
										TASK_KILL_CHAR(0, &Global_54076);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(&(uParam2[iVar0]), iLocal_209);
										TASK_SEQUENCE_RELEASE(iLocal_209, 1);
									}
								}
								else
								{
									Function_14(&(uParam2[iVar0]), &Global_54076);
								}
							}
							else
							{
								Function_14(&(uParam2[iVar0]), &Global_54076);
							}
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (IS_ACTOR_VALID(&(uLocal_202[iVar0])))
				{
					if (!Function_120(&(uLocal_202[iVar0])))
					{
						Function_14(&(uLocal_202[iVar0]), &Global_54076);
					}
				}
				iVar0++;
			}
			break;
		
		case 0x0000000C:
			if (IS_ACTOR_VALID(&(uParam3[0])))
			{
				if (IS_ACTOR_VALID(&(uParam2[0])))
				{
					if (Function_92(&(uParam3[0]), &(uParam2[0])) < 10.0f)
					{
						Function_14(&(uParam2[0]), &Global_54076);
						iLocal_121 = 1;
						return 1;
					}
				}
				iLocal_121 = 1;
				return 1;
			}
			if (IS_ACTOR_VALID(&(uParam2[0])))
			{
				Function_14(&(uParam2[iVar0]), &Global_54076);
			}
			iLocal_121 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_14(var uParam0, int iParam1) //Position: 0x2354 / 9044
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

void Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x244A / 9290
{
	int iVar0;
	bool bVar1;
	
	if (Function_53(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_52())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_51(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_50(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_49(Global_119936, 1))
				{
					Function_43(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_41(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_49(Global_119936, 2))
				{
					Function_43(&Global_54076, 2, 3, 0);
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
	if (Function_51(1) <= 4294962296)
	{
		Function_25(1, 4294962296, 0);
	}
	else if (Function_51(1) >= 5000)
	{
		Function_25(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_24(1));
	iVar0 = Function_51(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_17(2, Function_23(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_17(2, Function_23(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_17(2, Function_23(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_17(2, Function_23(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_17(2, Function_23(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_17(2, Function_23(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_17(2, Function_23(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_17(2, Function_23(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_17(2, Function_23(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_17(2, Function_23(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_17(2, Function_23(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_17(2, Function_23(Global_21369.f_244), 0);
			}
			break;
	}
	Function_16(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0x2771 / 10097
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_17(int iParam0, char* cParam1) //Position: 0x29DB / 10715
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_21(iParam0, &cParam1, 0, 1);
	iVar1 = Function_18();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_18() //Position: 0x2B6B / 11115
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_19();
	return 0;
}

void Function_19() //Position: 0x2C0C / 11276
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_20(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_20(int iParam0) //Position: 0x2CCA / 11466
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_21(int iParam0, char* cParam1) //Position: 0x2D30 / 11568
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_22(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_22(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x3087 / 12423
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_23(int iParam0) //Position: 0x310F / 12559
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

float Function_24(int iParam0) //Position: 0x31B2 / 12722
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0x31EB / 12779
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_37(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_36(iParam0);
	if (&bParam2)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_26(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3487 / 13447
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_35(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_24(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_24(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_33(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_192(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_27(int iParam0) //Position: 0x3AC5 / 15045
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3AD6 / 15062
{
	char* cVar0[32];
	
	if (&bParam3)
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x3BCD / 15309
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3BE8 / 15336
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_32(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_32(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x3C4F / 15439
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_32(int iParam0, int iParam1) //Position: 0x3C61 / 15457
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_33(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3C73 / 15475
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_34(int iParam0) //Position: 0x3DA7 / 15783
{
	return Global_55480[iParam016].f_96;
}

var Function_35(int iParam0) //Position: 0x3DB6 / 15798
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_36(int iParam0) //Position: 0x3DF3 / 15859
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_37(int iParam0, float fParam1, bool bParam2) //Position: 0x3F8D / 16269
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x41D3 / 16851
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_39(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x43D0 / 17360
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_40(iParam0);
	return 1;
}

void Function_40(int iParam0) //Position: 0x45F8 / 17912
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

int Function_41(int iParam0, bool bParam1) //Position: 0x4696 / 18070
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
	iVar1 = Function_42(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_18();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_42(int iParam0, int iParam1) //Position: 0x4841 / 18497
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_43(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4886 / 18566
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_45(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_44(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_44(char* cParam0) //Position: 0x48FB / 18683
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_45(int iParam0, var uParam1, int iParam2) //Position: 0x4935 / 18741
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_47(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_46(uVar0))
		{
			case 0x00000002:
				if (!Function_49(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_46(char* cParam0) //Position: 0x49B1 / 18865
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

int Function_47(int iParam0) //Position: 0x4A52 / 19026
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_48(&iVar1, 2147483648);
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

void Function_48(int iParam0, int iParam1) //Position: 0x4A8F / 19087
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_49(var uParam0, int iParam1) //Position: 0x4AA5 / 19109
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x4AB8 / 19128
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
	iVar1 = Function_42(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_18();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_51(int iParam0) //Position: 0x4C64 / 19556
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_52() //Position: 0x4CA5 / 19621
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_53(int iParam0) //Position: 0x4CD0 / 19664
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x4CDF / 19679
{
	int iVar0;
	bool bVar1;
	
	if (Function_53(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_52())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_51(3);
	Function_56();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_50(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_49(Global_119936, 4))
			{
				Function_43(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_39(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_24(3));
	iVar0 = Function_51(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_17(4, Function_55(Global_21369.f_248), 1);
				Function_16(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_17(4, Function_55(Global_21369.f_248), 1);
				Function_16(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_17(4, Function_55(Global_21369.f_248), 1);
				Function_16(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_17(4, Function_55(Global_21369.f_248), 1);
				Function_16(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_17(4, Function_55(Global_21369.f_248), 1);
				Function_16(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

var Function_55(int iParam0) //Position: 0x4EB3 / 20147
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

void Function_56() //Position: 0x4F42 / 20290
{
	Function_58(3, 0.0f);
	Function_57(3, 10000.0f);
	return;
}

int Function_57(int iParam0, int iParam1) //Position: 0x4F58 / 20312
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_58(int iParam0, int iParam1) //Position: 0x4F98 / 20376
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_59(int iParam0, int iParam1) //Position: 0x4FD8 / 20440
{
	if (!Function_7(&iParam0, 0))
	{
		return 1;
	}
	switch (iLocal_215)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_143(&iParam0);
			uLocal_196 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam1, Function_192(), 0f, Function_143(&iParam0), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
			DECOR_SET_BOOL(&iParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(&uLocal_145, "volume", &uLocal_196);
			RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
			TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&uLocal_145), "UseCase1", 1, 1);
			iLocal_215 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&iParam0, 19) == 0)
			{
				Function_191(&uLocal_216, 0.0f);
				iLocal_215 = 2;
			}
			break;
		
		case 0x00000002:
			Function_87(&uLocal_216, 4.0f);
			Function_74(&bLocal_147);
			uLocal_198 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam1, Function_192(), 0f, Function_74(&bLocal_147), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
			DECOR_SET_BOOL(&iParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(&bLocal_147, "volume", &uLocal_198);
			TASK_FOLLOW_PATH(&iParam0, &uLocal_194, 2, 0, 0, 1, 0);
			iLocal_215 = 3;
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(&iParam0, 16) != 0 || Function_71(&iParam0, &bLocal_147) > 3,5f)
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 1);
				MEMORY_CLEAR_ALL(&iParam0);
				TASK_CLEAR(&iParam0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&bLocal_147), true);
				Function_62(&iParam0, GET_GRINGO_FROM_OBJECT(&bLocal_147), "UseCase1", 4294967295, 1, 0);
				Function_60(&iParam0, 1);
				iLocal_215 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_215 = 5;
			break;
		
		case 0x00000005:
			iLocal_215 = 6;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_60(int iParam0, int iParam1) //Position: 0x517B / 20859
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&iParam0)), 64);
		return 0;
	}
	if (!Function_6(&iParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&iParam0)), 64);
		return 0;
	}
	Function_61(&iParam0, iParam1);
	return 1;
}

void Function_61(var uParam0, bool bParam1) //Position: 0x5228 / 21032
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_options", bParam1);
	return;
}

int Function_62(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x524E / 21070
{
	if (!IS_GRINGO_VALID(&iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam2) != 0 || STRINGS_ARE_EQUAL(&iParam2, ""))
	{
		return 0;
	}
	if (&iParam3 <= 0)
	{
		iParam3 = 4294967295;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&iParam1), &Global_10998);
		if (!(GET_TASK_STATUS(&uParam0, 19) != 1 || GET_TASK_STATUS(&uParam0, 19) != 3))
		{
			TASK_USE_GRINGO(&uParam0, &iParam1, &iParam2, &iParam3, 1);
			TASK_PRIORITY_SET(&uParam0, &iParam5);
		}
		Function_63(&uParam0, 5, GET_OBJECT_FROM_GRINGO(&iParam1), &iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_63(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x52FB / 21243
{
	char* cVar0[32];
	
	Function_70();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_69(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_68(&uParam0, 0);
	Function_67(&uParam0, iParam1);
	Function_66(&uParam0, &iParam2);
	Function_65(&uParam0, uParam3);
	if (Function_64(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_64(int iParam0) //Position: 0x5567 / 21863
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_65(var uParam0, bool bParam1) //Position: 0x558B / 21899
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_66(var uParam0, int iParam1) //Position: 0x55AF / 21935
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_67(var uParam0, bool bParam1) //Position: 0x55D5 / 21973
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_68(var uParam0, bool bParam1) //Position: 0x55FC / 22012
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_69(bool bParam0) //Position: 0x5620 / 22048
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_70() //Position: 0x563F / 22079
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

float Function_71(int iParam0, bool bParam1) //Position: 0x568E / 22158
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_73(&iParam0);
			Var0 = Function_73(&iParam0);
			Function_72(&bParam1);
			Var2 = Function_72(&bParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_72(int iParam0) //Position: 0x5730 / 22320
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_73(int iParam0) //Position: 0x579E / 22430
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_74(bool bParam0) //Position: 0x580A / 22538
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_75(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x5833 / 22579
{
	int iVar0;
	
	if (bParam1)
	{
		Function_78(&iVar0, 1);
	}
	if (&bParam2)
	{
		Function_78(&iVar0, 2);
	}
	if (&bParam3)
	{
		Function_78(&iVar0, 4);
	}
	if (&bParam4)
	{
		Function_78(&iVar0, 8);
	}
	if (&bParam5)
	{
		Function_78(&iVar0, 1024);
	}
	if (&bParam7)
	{
		Function_78(&iVar0, 16);
	}
	if (&bParam8)
	{
		Function_78(&iVar0, 32);
	}
	if (&bParam6)
	{
		Function_78(&iVar0, 1048576);
	}
	return Function_76(&uParam0, iVar0);
}

int Function_76(int iParam0, int iParam1) //Position: 0x58AA / 22698
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_77(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_77(&iParam1, 64))
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

bool Function_77(var uParam0, int iParam1) //Position: 0x5998 / 22936
{
	return (uParam0 && iParam1) == 0;
}

void Function_78(int iParam0, int iParam1) //Position: 0x59A5 / 22949
{
	Function_141(&iParam0, iParam1);
	return;
}

int Function_79(int iParam0, bool bParam1) //Position: 0x59B3 / 22963
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	Function_143(&iParam0);
	iVar0 = Function_143(&iParam0);
	TASK_SHOOT_FROM_POSITION(&iParam0, &bParam1, &iVar0);
	return 1;
}

void Function_80(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5A0D / 23053
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_92(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

void Function_81(var uParam0, bool bParam1) //Position: 0x5ABA / 23226
{
	if (iLocal_210 == 0)
	{
		if (iLocal_161[2] == 299)
		{
			Function_80(&uParam0, &bParam1, "firstTimeEscalera_msg04", "firstTimeEscalera_msg04", 2, 60, 1, 1);
		}
		else if (iLocal_161[2] == 297)
		{
			if (Function_82())
			{
				Function_80(&uParam0, &bParam1, "eventExecutionMsg04", "eventExecutionMsg04", 2, 60, 1, 1);
			}
			else
			{
				Function_80(&uParam0, &bParam1, "eventExecutionMsg05", "eventExecutionMsg05", 2, 60, 1, 1);
			}
		}
		else if (iLocal_161[2] == 292)
		{
			if (Function_82())
			{
				Function_80(&uParam0, &bParam1, "eventExecutionMsg04", "eventExecutionMsg04", 2, 60, 1, 1);
			}
			else
			{
				Function_80(&uParam0, &bParam1, "eventExecutionMsg05", "eventExecutionMsg05", 2, 60, 1, 1);
			}
		}
		iLocal_210 = 1;
	}
	return;
}

bool Function_82() //Position: 0x5C2C / 23596
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_83(var uParam0, bool bParam1, int iParam2) //Position: 0x5C3F / 23615
{
	int iVar0;
	
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(0, &iParam2);
	TASK_STAND_STILL(0, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, iVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	TASK_PRIORITY_SET(&uParam0, bParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x5C71 / 23665
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_39(409, 1, 0, 0);
	}
	return;
}

void Function_85() //Position: 0x5CA2 / 23714
{
	int iVar0;
	
	bLocal_213 = true;
	if (Global_43787 == 1)
	{
		iVar0 = Function_86(5);
		if (iVar0 == 0)
		{
			iLocal_211 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_211 = "MEX_SONG_04";
		}
		else if (iVar0 == 2)
		{
			iLocal_211 = "MEX_SONG_05";
		}
		else if (iVar0 == 3)
		{
			iLocal_211 = "MEX_SONG_06";
		}
		else if (iVar0 == 4)
		{
			iLocal_211 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_211, "SUSPENSE_LOW", -3.0f, 500, 4294967295, 3212836864, 0);
	return;
}

var Function_86(bool bParam0) //Position: 0x5D5B / 23899
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_87(var uParam0, float fParam1) //Position: 0x5D74 / 23924
{
	if (Function_91(&uParam0))
	{
		if (Function_88(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_88(vector3 vParam0) //Position: 0x5D92 / 23954
{
	if (Function_91(&vParam0))
	{
		if (Function_89(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_89(int iParam0) //Position: 0x5E5F / 24159
{
	return Function_90(iParam0, 2);
}

bool Function_90(var uParam0, int iParam1) //Position: 0x5E6D / 24173
{
	return (uParam0 && iParam1) == 0;
}

bool Function_91(int iParam0) //Position: 0x5E7A / 24186
{
	return Function_90(iParam0, 1);
}

float Function_92(int iParam0, int iParam1) //Position: 0x5E88 / 24200
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_93(int iParam0, var uParam1, int iParam2) //Position: 0x5F7D / 24445
{
	float fVar0;
	
	if (iParam2 <= 10)
	{
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				switch (iLocal_220)
				{
					case 0x00000000:
						if (Function_92(&Global_54076, &iParam0) > 15.0f)
						{
							SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(&iParam0, 53, &uParam1, 1, 0, 0, 4294967295, 4294967295, 0);
							iLocal_225++;
							iLocal_220 = 1;
						}
						break;
					
					case 0x00000001:
						if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
						{
							Function_191(&uLocal_221, 0.0f);
							fVar0 = RAND_FLOAT_RANGE(10.0f, 15.0f);
							iLocal_220 = 2;
						}
						break;
					
					case 0x00000002:
						if (Function_87(&uLocal_221, fVar0))
						{
							if (iLocal_225 <= 3)
							{
								iLocal_220 = 0;
							}
							else
							{
								iLocal_220 = 3;
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

void Function_94(int iParam0, int iParam1) //Position: 0x602F / 24623
{
	if (iLocal_121 == 0)
	{
		if (Function_7(&iParam0, 0))
		{
			if (Function_7(&iParam1, 0))
			{
				if (GET_TASK_STATUS(&iParam0, 35) != 1)
				{
					if (Function_92(&iParam0, &iParam1) > 10.0f)
					{
						TASK_POINT_GUN_AT_OBJECT(&iParam0, &iParam1, -1.0f, 0);
					}
				}
			}
		}
	}
	return;
}

bool Function_95(int iParam0, struct<2> Param1, float fParam3) //Position: 0x6078 / 24696
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_73(&iParam0);
		if (VDIST(Function_73(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

var Function_96(bool bParam0) //Position: 0x6104 / 24836
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_97(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_97(var uParam0, int iParam1) //Position: 0x6140 / 24896
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

int Function_98(int iParam0, int iParam1, int iParam2) //Position: 0x61D1 / 25041
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	if (!Function_7(&iParam0, 0))
	{
		return 1;
	}
	if (!Function_7(&iParam1, 0))
	{
		return 1;
	}
	switch (bLocal_41)
	{
		case 0x00000003:
			uVar0 = "nKneelCase";
			uVar1 = "nEXIT_HOLD";
			fVar2 = 1.0f;
			break;
		
		case 0x00000002:
			uVar0 = "ShovedCase";
			uVar1 = "SHOVE_ASIDE";
			fVar2 = 0,78f;
			break;
	}
	switch (iLocal_215)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_143(&iParam0);
			uLocal_196 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam2, Function_192(), 0f, Function_143(&iParam0), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
			DECOR_SET_BOOL(&iParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(&uLocal_145, "volume", &uLocal_196);
			RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
			SNAP_ACTOR_TO_GRINGO(&iParam0, &uLocal_145, "UseCase1", 1, 0, 0);
			SNAP_ACTOR_TO_GRINGO(&iParam1, &uLocal_145, &uVar0, 1, 0, 0);
			TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&uLocal_145), "UseCase1", 1, 1);
			TASK_USE_GRINGO(&iParam1, GET_GRINGO_FROM_OBJECT(&uLocal_145), &uVar0, 1, 1);
			iLocal_215 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&iParam0, 19) == 1)
			{
				iLocal_215 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_183)
			{
				Function_191(&uLocal_216, 0.0f);
				iLocal_215 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_87(&uLocal_216, 0.0f))
			{
				DECOR_SET_BOOL(&uLocal_145, &uVar1, 1);
				Function_191(&uLocal_216, 0.0f);
				iLocal_215 = 4;
			}
			break;
		
		case 0x00000004:
			if ((GET_TASK_STATUS(&iParam0, 19) != 0 || Function_87(&uLocal_216, fVar2)) || GET_TASK_STATUS(&iParam0, 19) != 4)
			{
				Function_74(&bLocal_147);
				uLocal_198 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam2, Function_192(), 0f, Function_74(&bLocal_147), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
				DECOR_SET_BOOL(&iParam0, "VolOnly", 1);
				DECOR_SET_OBJECT(&bLocal_147, "volume", &uLocal_198);
				TASK_FOLLOW_PATH(&iParam0, &uLocal_194, 2, 0, 0, 1, 0);
				iLocal_215 = 5;
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(&iParam0, 16) != 0 || Function_71(&iParam0, &bLocal_147) > 3,5f)
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 1);
				MEMORY_CLEAR_ALL(&iParam0);
				MEMORY_CLEAR_EVENTS(&iParam1, 1);
				MEMORY_CLEAR_ALL(&iParam1);
				TASK_CLEAR(&iParam0);
				TASK_CLEAR(&iParam1);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&bLocal_147), true);
				iLocal_99 = 1;
				Function_62(&iParam0, GET_GRINGO_FROM_OBJECT(&bLocal_147), "UseCase1", 4294967295, 1, 0);
				Function_60(&iParam0, 1);
				Function_101(&iParam1, 0, 0, 2);
				iLocal_215 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

int Function_99(int iParam0, var uParam1, int iParam2) //Position: 0x6474 / 25716
{
	if (!Function_7(&uParam1, 0))
	{
		return 1;
	}
	switch (iLocal_215)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			Function_143(&iParam0);
			uLocal_196 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam2, Function_192(), 0f, Function_143(&iParam0), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
			DECOR_SET_BOOL(&iParam0, "VolOnly", 1);
			DECOR_SET_OBJECT(&uLocal_145, "volume", &uLocal_196);
			SNAP_ACTOR_TO_GRINGO(&uParam1, &uLocal_145, "UseCase1", 1, 0, 0);
			SNAP_ACTOR_TO_GRINGO(&iParam0, &uLocal_145, "UseCase2", 1, 0, 0);
			TASK_USE_GRINGO(&uParam1, GET_GRINGO_FROM_OBJECT(&uLocal_145), "UseCase1", 1, 1);
			TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&uLocal_145), "UseCase2", 1, 1);
			iLocal_215 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&uParam1, 19) == 1)
			{
				Function_191(&uLocal_216, 0.0f);
				iLocal_215 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_183)
			{
				DECOR_SET_BOOL(&uLocal_145, "EXIT_RIOT02", 1);
				Function_191(&uLocal_216, 0.0f);
				iLocal_215 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_VALID(&iParam0))
			{
				KILL_ACTOR(&iParam0);
				iLocal_98 = 1;
				Function_101(&uParam1, 0, 0, 2);
				iLocal_215 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_215 = 5;
			break;
		
		case 0x00000005:
			iLocal_215 = 6;
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_100(int iParam0) //Position: 0x65E5 / 26085
{
	if (iLocal_121 == 0)
	{
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (Function_92(&iParam0, &Global_54076) > 8.0f)
			{
				if (GET_TASK_STATUS(&iParam0, 35) != 1)
				{
					TASK_POINT_GUN_AT_OBJECT(&iParam0, GET_OBJECT_FROM_ACTOR(&Global_54076), -1.0f, 0);
					if (iLocal_214 == 0)
					{
						Function_80(&iParam0, &Global_54076, "eventExecutionMsg08", "eventExecutionMsg08", 5, 60, 1, 1);
						iLocal_214 = 1;
					}
				}
			}
			else if (GET_TASK_STATUS(&iParam0, 35) == 1)
			{
				ACTOR_HOLSTER_WEAPON(&iParam0, 1);
				TASK_STAND_STILL(&iParam0, -1.0f, 0, 0);
			}
		}
	}
	return;
}

int Function_101(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x668C / 26252
{
	int iVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(iVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_63(&uVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_63(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_102(int iParam0) //Position: 0x677A / 26490
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

int Function_103(int iParam0, int iParam1) //Position: 0x67CD / 26573
{
	if (IS_VOLUME_VALID(&iParam0))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0))
		{
			Function_114(0x10000000);
			Function_104(4, 28, Function_113(), 0, 1);
			return 1;
		}
	}
	if (IS_VOLUME_VALID(&iParam1))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
		{
			Function_114(0x10000000);
			Function_104(4, 28, Function_113(), 0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_104(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x682C / 26668
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
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
	if (!IS_ACTOR_VALID(&iParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_107(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &iParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_192(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_105();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&iParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_105() //Position: 0x6ADF / 27359
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_106(&uVar0, &iVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_106(var uParam0, int iParam1) //Position: 0x6B52 / 27474
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_107(bool bParam0) //Position: 0x6B88 / 27528
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
	if (Global_6621)
	{
		return 0;
	}
	if (Function_110(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_108(int iParam0) //Position: 0x6BFE / 27646
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_109() //Position: 0x6C0F / 27663
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_110(int iParam0) //Position: 0x6C28 / 27688
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_111(int iParam0) //Position: 0x6C46 / 27718
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_112(int iParam0) //Position: 0x6C5C / 27740
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_113() //Position: 0x6C71 / 27761
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_114(int iParam0) //Position: 0x6C86 / 27782
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_115(bool bParam0) //Position: 0x6CA3 / 27811
{
	if (!Global_6646)
	{
		if (IS_ACTOR_VALID(&bParam0))
		{
			if (IS_ACTOR_ALIVE(&bParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(&bParam0)) == 1)
				{
					if ((!Function_116(Function_113(), 35) && !Function_116(Function_113(), 7)) && !Function_116(Function_113(), 12))
					{
						Function_104(1, 35, Function_113(), GET_OBJECT_FROM_ACTOR(&bParam0), 1);
					}
				}
			}
		}
	}
	return;
}

bool Function_116(int iParam0, bool bParam1) //Position: 0x6D0E / 27918
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_106(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (GET_CRIME_CRIMINAL(&uVar3) != &iParam0 && GET_CRIME_TYPE(&uVar3) != bParam1)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

bool Function_117(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6D9D / 28061
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&bParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&bParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&bParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&bParam0) && !&bParam4)
	{
		fVar0 = Function_92(&bParam0, &Global_54076);
		if (!Function_90(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&bParam0) == &Global_54076)
			{
				iParam1 = 8;
				Function_118(&bParam0);
				return 1;
			}
		}
		if (!Function_90(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&bParam0, 1.0f))
			{
				iParam1 = 2;
				Function_118(&bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&bParam0, 1.0f, 1.0f))
			{
				iParam1 = 2;
				Function_118(&bParam0);
				return 1;
			}
		}
		if (!Function_90(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&bParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &bParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&bParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &bParam0 && MEMORY_GET_IS_VISIBLE(&bParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					iParam1 = 4;
					Function_118(&bParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						iParam1 = 4;
						Function_118(&bParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_90(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				iParam1 = 1;
				Function_118(&bParam0);
				return 1;
			}
		}
		if (!Function_90(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					iParam1 = 16;
					Function_118(&bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_118(int iParam0) //Position: 0x6F66 / 28518
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_119(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_119(int iParam0) //Position: 0x6FA3 / 28579
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_120(bool bParam0) //Position: 0x6FBC / 28604
{
	return DECOR_CHECK_EXIST(&bParam0, "nsharedlaw");
}

bool Function_121(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6FD4 / 28628
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_92(&Global_54076, &iParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_124() && !uParam2)
		{
			return 0;
		}
		if (Function_123(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_122(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_122(int iParam0, int iParam1) //Position: 0x7117 / 28951
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_123(int iParam0) //Position: 0x7138 / 28984
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_124() //Position: 0x7178 / 29048
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
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
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_71(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_71(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_125(var[] uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x723B / 29243
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!iParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar1])))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam0[iVar1]), 1.0f, &iParam5, 1, 1, 0))
			{
				iParam2 = 1;
				if (&iParam4 != 0)
				{
					Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam4));
				}
			}
		}
		iVar1++;
	}
	if (iParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_136(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_135(0);
		}
		if (&bParam6)
		{
			Function_133(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_131(iParam3);
		}
		Function_129(iParam3);
		if (Function_128(StackVal, 32768))
		{
			Function_126(1);
		}
		Global_26652[iParam34].f_16++;
		Function_39(408, 1, 0, 0);
	}
}

void Function_126(bool bParam0) //Position: 0x7334 / 29492
{
	if (bParam0)
	{
		Function_127(0x10000000);
	}
	else
	{
		Function_114(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_127(int iParam0) //Position: 0x7359 / 29529
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_128(var uParam0, int iParam1) //Position: 0x736C / 29548
{
	return (uParam0 && iParam1) == 0;
}

void Function_129(int iParam0) //Position: 0x7379 / 29561
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_90(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_130(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_130(int iParam0) //Position: 0x741F / 29727
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_131(int iParam0) //Position: 0x7436 / 29750
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_132(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_132(vector3 vParam0) //Position: 0x74D5 / 29909
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_133(int iParam0, int iParam1) //Position: 0x74F1 / 29937
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_134(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_134(struct<113> Param0) //Position: 0x7578 / 30072
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_135(int iParam0) //Position: 0x75D6 / 30166
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_130(900)), 0);
	return;
}

void Function_136(int iParam0) //Position: 0x75FA / 30202
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_130(200)), 0);
	return;
}

int Function_137(var uParam0, int iParam1) //Position: 0x761D / 30237
{
	var uVar0;
	var uVar2;
	
	uVar0 = Vector(-4335.0f, 26.0f, 4419.0f);
	uVar2 = Vector(-4345.0f, 30,117f, 4379,21f);
	switch (iLocal_228)
	{
		case 0x00000000:
			if (Function_138(&Local_118, &bLocal_227))
			{
				iParam1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam0, Function_192(), iLocal_161[3], Local_118, Vector(0.0f, fLocal_86[3], 0.0f));
				SET_ACTOR_CAN_PLAY_GESTURES(&iParam1, false);
				iLocal_228 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_92(&iParam1, &Global_54076) > 30.0f)
				{
					iLocal_226 = TASK_SEQUENCE_OPEN();
					if (bLocal_227)
					{
						TASK_GO_TO_COORD_NONSTOP(0, &uVar0, 3, 3212836864);
					}
					TASK_GO_TO_COORD(0, &(Local_64[32]), 3);
					TASK_FACE_COORD(0, &uVar2, 0);
					TASK_STAND_STILL(0, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iParam1, iLocal_226);
					TASK_SEQUENCE_RELEASE(iLocal_226, 1);
					iLocal_228 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_92(&Global_54076, &iParam1) > 20.0f)
				{
					Function_80(&iParam1, &Global_54076, "eventFiringSquadMsg01", "eventFiringSquadMsg01", 5, 60, 1, 1);
					iLocal_228 = 3;
				}
			}
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

bool Function_138(struct<2> Param0) //Position: 0x776C / 30572
{
	struct<2> Var0;
	struct<2> Var2;
	float fVar4;
	
	Var0 = Vector(-4329.0f, 28.0f, 4411.0f);
	Var2 = Vector(-4353.0f, 30.0f, 4404.0f);
	Param0 = Vector(0.0f, 0.0f, 0.0f);
	if (Function_140(StackVal, &Global_54076, Var0) > 50.0f)
	{
		fVar4 = Function_140(StackVal, &Global_54076, Var0);
		iParam1 = 1;
		Param0 = Var0;
	}
	if (Function_140(StackVal, &Global_54076, Var2) > fVar4)
	{
		fVar4 = Function_140(StackVal, &Global_54076, Var2);
		iParam1 = 0;
		Param0 = Var2;
	}
	if (Function_139(StackVal, Param0))
	{
		return 0;
	}
	return 1;
}

bool Function_139(vector3 vParam0) //Position: 0x780A / 30730
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_140(var uParam0, struct<2> Param1) //Position: 0x7822 / 30754
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_73(&uParam0);
		Var0 = Function_73(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_141(int iParam0, int iParam1) //Position: 0x7899 / 30873
{
	iParam0 = (iParam0 || iParam1);
	return;
}

struct<8> Function_142() //Position: 0x78AA / 30890
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_143(int iParam0) //Position: 0x78B4 / 30900
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_144(var uParam0, int iParam1) //Position: 0x78C6 / 30918
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_148(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_145(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_145(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7A30 / 31280
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_146("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_146(char* cParam0) //Position: 0x7AD8 / 31448
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_147("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_147(char* cParam0) //Position: 0x7B44 / 31556
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_148(bool bParam0) //Position: 0x7B66 / 31590
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_149(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_140(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_149(iVar0);
						}
					}
					else if (Function_140(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_149(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&bParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
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

void Function_149(int iParam0) //Position: 0x7CD4 / 31956
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_150(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7D3C / 32060
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	uParam1 = &uParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_152("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_151(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_151(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_151(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_151(bool bParam0) //Position: 0x7FA8 / 32680
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x7FF2 / 32754
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x8078 / 32888
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

bool Function_154() //Position: 0x80B7 / 32951
{
	if (Function_90(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_155(int iParam0, int iParam1) //Position: 0x80D2 / 32978
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

int Function_156(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x815D / 33117
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_158(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam2)
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 1);
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_157(&(uVar0[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar4) && !&iVar4 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar4);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[0]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_157(&(uVar0[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[1]), false);
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

var Function_157(var uParam0, int iParam1) //Position: 0x82DA / 33498
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_158(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x82E9 / 33513
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &iParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &iParam0);
		if (!Function_154())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &iParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &iParam0, 2.0f, 0);
		}
	}
}

bool Function_159(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8433 / 33843
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

float Function_160() //Position: 0x8454 / 33876
{
	float fVar0;
	var uVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_97(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_161(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x8485 / 33925
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_148(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_162(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_162(struct<2> Param0) //Position: 0x8561 / 34145
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

bool Function_163(struct<2>[] Param0) //Position: 0x8580 / 34176
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(&(Param0[iVar02]), 8);
		}
		Function_167(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_167(&(Param0[iVar02]), 1);
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
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_167(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_167(&(Param0[iVar02]), 2);
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

void Function_164() //Position: 0x8942 / 35138
{
	if (!Function_165(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_165(int iParam0) //Position: 0x8982 / 35202
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_166() //Position: 0x899E / 35230
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

void Function_167(struct<13> Param0) //Position: 0x89CC / 35276
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_168() //Position: 0x89DF / 35295
{
	if (!Function_165(128))
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

void Function_169(bool bParam0) //Position: 0x8A21 / 35361
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_DRAW_ACTOR(&bParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		if (IS_ACTOR_ANIMAL(&bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&bParam0, 1);
		}
	}
	return;
}

void Function_170(var[] uParam0, int iParam1) //Position: 0x8A6A / 35434
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_169(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_171(int iParam0) //Position: 0x8A9C / 35484
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

void Function_172(var[] uParam0, int iParam1) //Position: 0x8AE6 / 35558
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_171(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8B18 / 35608
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

bool Function_174(int iParam0) //Position: 0x8B90 / 35728
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

void Function_175(int iParam0) //Position: 0x8C06 / 35846
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

void Function_176(int[] iParam0, int iParam1) //Position: 0x8C11 / 35857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0[iVar0]);
		iVar0++;
	}
	return;
}

var Function_177(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8C34 / 35892
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_167(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_167(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_178(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8D10 / 36112
{
	return Function_179(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8D27 / 36135
{
	return Function_180(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_180(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x8D45 / 36165
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_186();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_185(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_184(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_184(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_183(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_185(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_183(iVar0))
				{
					Function_182();
				}
				Function_181(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_185(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_181(int iParam0) //Position: 0x903E / 36926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_182() //Position: 0x90F2 / 37106
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_183(int iParam0) //Position: 0x912D / 37165
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_184(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x915A / 37210
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
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

bool Function_185(int iParam0) //Position: 0x92B5 / 37557
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_186() //Position: 0x92CC / 37580
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_182();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_182();
	return;
}

int Function_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9318 / 37656
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
	if (&iParam2 > 4294967295 || &iParam2 <= 1311)
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
		if (((iVar43 == &iParam2 && iVar43 == &iParam3) && iVar43 == &iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar43), "_cs"))
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

int Function_188(int iParam0, int iParam1) //Position: 0x9433 / 37939
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_189(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x9449 / 37961
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_190(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_167(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_190(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x9487 / 38023
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_167(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_191(vector3 vParam0) //Position: 0x9556 / 38230
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_141(&vParam0, 1);
	Function_48(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_192() //Position: 0x957B / 38267
{
	var uVar0;
	
	return &uVar0;
}

