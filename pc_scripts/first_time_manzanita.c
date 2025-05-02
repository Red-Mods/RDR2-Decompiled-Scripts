//Decompiled with MagicRDR v1.0
//Function Count : 219
//Statics Count : 286
//Natives Count : 380
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
	int iLocal_27 = 0;
	float fLocal_28 = 0.0f;
	var uLocal_29[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45[2] = { 0, 0 };
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57[5] = { 0, 0, 0, 0, 0 };
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<2> Local_71[5];
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
	var uLocal_93[2] = { 0, 0 };
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	struct<2> Local_99 = { 0, 0 } ;
	var uLocal_101 = 0;
	struct<2> Local_102 = { 0, 0 } ;
	var uLocal_104 = 0;
	struct<2> Local_105 = { 0, 0 } ;
	var uLocal_107 = 0;
	struct<2> Local_108 = { 0, 0 } ;
	var uLocal_110 = 0;
	float fLocal_111 = 0.0f;
	struct<2> Local_112 = { 0, 0 } ;
	var uLocal_114 = 0;
	float fLocal_115 = 0.0f;
	struct<2> Local_116 = { 0, 0 } ;
	var uLocal_118 = 0;
	float fLocal_119 = 0.0f;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<2> Local_124[2];
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = false;
	bool bLocal_137 = false;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = false;
	int iLocal_147 = 0;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	bool bLocal_155 = false;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	bool bLocal_159 = false;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	struct<8> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	bool bLocal_194 = false;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198[5] = { 0, 0, 0, 0, 0 };
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	bool bLocal_212 = false;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	var uLocal_222 = 0;
	bool bLocal_223 = false;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3[6];
	bool bVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	int iVar62;
	int iVar63;
	var uVar64;
	int iVar65;
	var uVar66;
	var uVar67;
	int iVar69;
	bool bVar70;
	int iVar71;
	bool bVar72;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_27 = 0;
	fLocal_28 = 0.0f;
	iLocal_134 = 0;
	iLocal_135 = 0;
	bLocal_136 = true;
	bLocal_137 = false;
	iLocal_138 = 0;
	iLocal_139 = 0;
	iLocal_140 = 0;
	iLocal_141 = 0;
	iLocal_142 = 0;
	iLocal_143 = 0;
	iLocal_144 = 0;
	iLocal_145 = 0;
	bLocal_146 = false;
	iLocal_147 = 0;
	bLocal_148 = false;
	bLocal_149 = false;
	bLocal_150 = false;
	iLocal_182 = 0;
	iLocal_216 = 0;
	iLocal_220 = 0;
	bLocal_223 = false;
	iVar0 = 0;
	iVar1 = 0;
	uVar2 = CREATE_LAYOUT(Function_218());
	uVar3[0] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar2, "Box01", Vector(-0,2782117f, 1,190343f, -0,3168345f), Vector(0.0f, 8,446964f, 0.0f));
	uVar3[1] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar2, "Box02", Vector(0,3035942f, 1,190343f, -0,464067f), Vector(0.0f, -5,249742f, 0.0f));
	uVar3[2] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar2, "Box03", Vector(-0,357126f, 1,190343f, 0,5068948f), Vector(0.0f, 2,257329f, 0.0f));
	uVar3[3] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar2, "Box04", Vector(0,2469973f, 1,190343f, 0,5566425f), Vector(0.0f, 8,310966f, 0.0f));
	uVar3[4] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar2, "Box05", Vector(0,2282872f, 1,190343f, 1,404086f), Vector(0.0f, 0.0f, 0.0f));
	uVar3[5] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uVar2, "Box06", Vector(-0,3566571f, 1,190343f, 1,410799f), Vector(0.0f, -6,674304f, 0.0f));
	bVar10 = false;
	iVar11 = 0;
	uVar12 = Function_216(2, 1, 1, 0, 0);
	uVar13 = 24;
	Function_215(&bLocal_151, 0.0f);
	iVar62 = 0;
	iVar63 = 8;
	if (Function_214(1, 1, 3))
	{
		uVar64 = Function_209(1, 1, 3);
	}
	else
	{
		iVar0 = 5;
	}
	Local_71[12] = Vector(-10.0f, 0.0f, -10.0f);
	Local_71[22] = Vector(4.0f, 0.0f, 0.0f);
	Local_71[32] = Vector(6.0f, 0.0f, -6.0f);
	Local_71[42] = Vector(3.0f, 0.0f, 5.0f);
	if (!IS_POPSET_VALID(&(Global_46972[4])) || !Function_208(1))
	{
		iVar0 = 5;
	}
	else
	{
		uLocal_93[0] = Function_204(1, 0, 0, 0, 1);
		uLocal_93[1] = Function_204(1, 0, 0, 0, 1);
		iLocal_198[1] = 474;
		iVar65 = 2;
		while (iVar65 < 4)
		{
			iLocal_198[iVar65] = Function_196(&(Global_46972[4]), 1, 2, 1);
			iVar65++;
		}
		iVar65 = 2;
		while (iVar65 < 4)
		{
			if (iLocal_198[iVar65] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_195(&uVar13, iLocal_198[iVar65], 3, 0);
			}
			iVar65++;
		}
		if (iVar0 != 5)
		{
			if (uLocal_93[0] != 4294967295 || uLocal_93[1] != 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_195(&uVar13, uLocal_93[0], 3, 0);
				Function_195(&uVar13, uLocal_93[1], 3, 0);
			}
		}
		if (iVar0 != 5)
		{
			Function_195(&uVar13, 1129, 3, 0);
			Function_193(&uVar13, "rand_idle_stand", 1, 0);
			Function_193(&uVar13, "loot_solo_loop", 1, 0);
			Function_193(&uVar13, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
			Function_193(&uVar13, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
			Function_193(&uVar13, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
			Function_193(&uVar13, "dead_ground_male", 5, 0);
			Function_193(&uVar13, "one_handed_wave", 5, 0);
			Function_193(&uVar13, "custom/one_handed_wave", 8, 0);
			Function_193(&uVar13, "excited_return", 5, 0);
			Function_193(&uVar13, "custom/excited_return", 8, 0);
			Function_193(&uVar13, "stand_wringhands_mobile", 5, 0);
			Function_193(&uVar13, "custom/stand_wringhands_mobile", 8, 0);
			Function_193(&uVar13, "thanks", 5, 0);
			Function_193(&uVar13, "custom/thanks", 8, 0);
			Function_195(&uVar13, iLocal_198[1], 3, 0);
			Function_195(&uVar13, 1199, 3, 0);
			iVar65 = 0;
			while (iVar65 <= 4)
			{
				Function_192(iLocal_198[iVar65 + 1]);
				iVar65++;
			}
		}
	}
	iVar69 = 0;
	if (Global_6625 == 1)
	{
		iVar0 = 5;
	}
	if (Function_191(0))
	{
		iVar0 = 5;
	}
	iVar71 = 0;
	bVar72 = false;
	if (Function_190())
	{
		uLocal_120 = "firstTimeManza_help01";
		uLocal_122 = "firstTimeManza_help09";
		Local_124[02] = Vector(-1.0f, 1.0f, -4.0f);
		Local_124[12] = Vector(4.0f, 1.0f, -4,5f);
		Local_105 = Vector(-426,631f, 151,292f, 1618,09f);
		Local_108 = Vector(-147,76f, 122,799f, 1725,989f);
		fLocal_111 = 284,786f;
		Local_112 = Vector(-135,568f, 124,758f, 1747,316f);
		fLocal_115 = 228,799f;
		Local_116 = Vector(-147,171f, 123,617f, 1736,58f);
		fLocal_119 = 0.0f;
	}
	else
	{
		uLocal_120 = "firstTimeManza_help15";
		uLocal_122 = "firstTimeManza_help14";
		Local_124[02] = Vector(-1.0f, 1.0f, -4.0f);
		Local_124[12] = Vector(4.0f, 1.0f, -4,5f);
		Local_105 = Vector(-426,631f, 151,292f, 1618,09f);
		Local_108 = Vector(-289,96f, 131,27f, 1315,04f);
		fLocal_111 = 14,89f;
		Local_112 = Vector(-313,781f, 131,471f, 1308,167f);
		fLocal_115 = 343,72f;
		Local_116 = Vector(-296,923f, 129,574f, 1298,41f);
		fLocal_119 = 197.0f;
	}
	while (!IS_EXITFLAG_SET())
	{
		bVar70 = 600;
		if (Function_189(&bVar72, &iVar0, &iVar71, &bVar70, bVar10))
		{
			if (bVar72)
			{
				Function_187(&uLocal_57, 4294967295);
			}
			else
			{
				Function_185(&uLocal_57, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_179(&uVar13))
				{
					uLocal_53 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), &uVar2, StackVal) + Vector(Local_124[02], Local_108, "loot_solo_loop"), Vector(0.0f, (fLocal_111 - 40.0f), 0.0f));
					uLocal_55 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), &uVar2, StackVal) + Vector(Local_124[12], Local_108, "loot_solo_loop"), Vector(0.0f, (fLocal_111 + 30.0f), 0.0f));
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_53), "UseCase1", "UseAnim", iLocal_198[2]);
					bVar70 = false;
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (VDIST(Global_54078, Local_105) > 35.0f && !ScriptParam_0.f_40)
				{
					iVar0 = 5;
					bVar70 = false;
					break;
				}
				if (Function_178(StackVal, Local_105, 0x3f800000, 0x42960000, 1, 1, 0) && !ScriptParam_0.f_40)
				{
					iVar0 = 5;
					break;
				}
				if (!Function_175(Global_46926[1]))
				{
					iVar0 = 5;
					break;
				}
				if (!bLocal_150)
				{
					if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_53), "UseCase1", "UseAnim", uLocal_93[0]))
					{
						bLocal_150 = true;
					}
				}
				if (!bLocal_149)
				{
					uLocal_57[0] = Function_172(&Global_12714, &Global_15312, 1, 0, 0, 1);
					bLocal_148 = true;
				}
				if (IS_ACTOR_VALID(&(uLocal_57[0])))
				{
					bLocal_149 = true;
					if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uLocal_57[0]), 1.0f, 45.0f, 1, 1, 0))
					{
						TELEPORT_ACTOR(&(uLocal_57[0]), &Local_105, 1, 1, 1);
						TASK_FACE_ACTOR(&(uLocal_57[0]), &Global_54076, 1, -1.0f);
						DECOR_SET_BOOL(&(uLocal_57[0]), "Stop_Crying", 1);
					}
					else
					{
						iVar0 = 5;
					}
				}
				else
				{
					bVar70 = 1000;
					iLocal_182++;
				}
				if (iLocal_182 >= 8)
				{
					if (ScriptParam_0.f_40 == 1)
					{
						Function_171("RC ACTOR could not be stolen, please relaunch with X", 0x40800000, 0, 2, 1, 0);
					}
					iVar0 = 5;
				}
				if (bLocal_149)
				{
					if (bLocal_150)
					{
						bVar70 = false;
						iVar0 = 2;
					}
				}
				break;
			
			case 0x00000002:
				uVar67 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar2, Function_218(), 0f, Local_108, Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 30.0f, 30.0f));
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar67);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uLocal_57[0]), false);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uLocal_57[0]), 0);
				SET_ACTOR_CAN_BE_HARDLOCKED(&(uLocal_57[0]), 0);
				TASK_STAND_STILL(&(uLocal_57[0]), -1.0f, 0, 0);
				if (bLocal_149)
				{
					iLocal_69 = Function_167(StackVal, StackVal, &uVar2, Function_218(), 1199, 976, Local_108, Vector(0.0f, fLocal_111, 0.0f), 1, 976, 976, 976, 2);
					AI_GLOBAL_SET_PERMANENT_DANGER(&iLocal_69, 1);
					START_VEHICLE(&iLocal_69);
					iVar65 = 0;
					while (iVar65 <= 6)
					{
						GET_OBJECT_POSITION(&(uVar3[iVar65]), &Local_99);
						GET_OBJECT_ORIENTATION(&(uVar3[iVar65]), &Local_102);
						uLocal_29[iVar65] = CREATE_PROP_IN_LAYOUT(StackVal, &uVar2, Function_218(), "p_gen_crate15x", Local_108, Vector(0.0f, 0.0f, 0.0f), 0);
						ATTACH_OBJECTS_NO_DRV(&(uLocal_29[iVar65]), &iLocal_69, Function_218(), Local_99, Local_102);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(&(uLocal_29[iVar65]), 0);
						iVar65++;
					}
					PRINTVECTOR(*(&ScriptParam_0 + 16));
					PRINTNL();
					PRINTVECTOR(Global_54078);
					PRINTNL();
					Function_165(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40);
					uVar66 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_218(), 4,203895E-45f, Local_105, Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 30.0f, ScriptParam_0.f_60));
					DECOR_SET_INT(&uVar66, "script", GET_THIS_SCRIPT_ID());
					Function_160(&uVar66, ScriptParam_0.f_40);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uLocal_57[0]), 0);
					UNK_0x99AFD2D1(&(uLocal_57[0]), 1, 1);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uLocal_57[1]), 0);
					UNK_0x99AFD2D1(&(uLocal_57[1]), 1, 1);
					Function_159(&iVar69, 1);
					Function_159(&iLocal_193, 1);
					iVar63 = 0;
					iVar0 = 3;
					bVar70 = false;
				}
				break;
			
			case 0x00000003:
				Function_158();
				Function_145(StackVal, Function_158(), &bVar10, ScriptParam_0.f_64, &(uLocal_57[0]), 100, 0x42a00000, 1);
				if (Function_142(&(uLocal_57[0]), &iLocal_191, &fLocal_28, 0, 0, 0x40400000))
				{
					switch (iLocal_191)
					{
						case 0x00000008:
							Function_140("victimFailAggroAttacked", iLocal_138, 1);
							break;
						
						case 0x00000001:
						case 0x00000010:
							Function_140("victimFailAggroDanger", iLocal_138, 1);
							break;
						
						case 0x00000004:
							Function_140("victimFailAggroHostile", iLocal_138, 1);
							break;
						
						case 0x00000002:
							Function_140("victimFailAggroShot", iLocal_138, 1);
							break;
					}
					iVar65 = 0;
					while (iVar65 <= 5)
					{
						if (Function_138(&(uLocal_57[iVar65]), 0))
						{
							TASK_WANDER(&(uLocal_57[iVar65]), 3212836864);
							TASK_PRIORITY_SET(&(uLocal_57[iVar65]), 2);
						}
						iVar65++;
					}
					RESET_ANIM_SET_FOR_ACTOR(&(uLocal_57[0]), 1);
					Function_137(&(uLocal_57[0]));
					TASK_FLEE_ACTOR(&(uLocal_57[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					iVar11 = 1;
					iVar0 = 5;
					bVar70 = false;
					break;
				}
				if (iLocal_139 && iVar1 > 9)
				{
					if (Function_135(&bLocal_194) < 300.0f)
					{
						Function_140("firstTimeChuparosa_timeout", iLocal_139, 1);
						iVar0 = 5;
						break;
					}
				}
				switch (iLocal_134)
				{
					case 0x00000000:
						if (!Function_134(&(uLocal_57[0]), &Global_54076, 150.0f, 0))
						{
							iVar0 = 5;
							bVar70 = false;
							break;
						}
						break;
					
					case 0x00000001:
						if (!Function_138(&(uLocal_57[0]), 0))
						{
							Function_140("firstTimeManza_help02", iLocal_138, 1);
							iVar0 = 5;
							bVar70 = false;
							break;
						}
						if (!iLocal_140)
						{
							if (!Function_133(StackVal, &Global_54076, Local_108, 700.0f))
							{
								Function_132(&uLocal_122, 0x41200000, 1, 0, 2, 1, 0);
								iLocal_140 = 1;
							}
						}
						if (!Function_133(StackVal, &Global_54076, Local_108, 800.0f) && iLocal_142 != 0)
						{
							Function_140("firstTimeManza_help03", iLocal_138, 1);
							iVar0 = 5;
							bVar70 = false;
							break;
						}
						if (!Function_131(&iLocal_69, 1, 1, 3) && !bLocal_146 != 1)
						{
							if (iLocal_144)
							{
								Function_128("firstTimeManza_help12", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
							else
							{
								Function_128("firstTimeManza_help08", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
						}
						break;
					
					case 0x00000002:
						if (!Function_138(&(uLocal_57[0]), 0))
						{
							Function_140("firstTimeManza_help02", iLocal_138, 1);
							iVar0 = 5;
						}
						if (!iLocal_141)
						{
							if (!Function_133(StackVal, &Global_54076, Vector(-431,522f, 152,568f, 1635,127f), 500.0f))
							{
								Function_132("firstTimeManza_help13", 0x41200000, 1, 0, 2, 1, 0);
								iLocal_141 = 1;
							}
						}
						if (!Function_133(StackVal, &Global_54076, Vector(-431,522f, 152,568f, 1635,127f), 600.0f))
						{
							if (iLocal_142 == 0)
							{
								Function_140("firstTimeManza_help03", iLocal_138, 1);
								iVar0 = 5;
								bVar70 = false;
								break;
							}
							else if (iLocal_142 == 1)
							{
								Function_140("firstTimeManza_help04", iLocal_138, 1);
								iVar0 = 5;
								bVar70 = false;
								break;
							}
						}
						if (!Function_131(&iLocal_69, 1, 1, 3))
						{
							if (iLocal_144)
							{
								Function_128("firstTimeManza_help12", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
							else
							{
								Function_128("firstTimeManza_help08", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								break;
							}
						}
						break;
				}
				if (Function_50(&iVar1, &uLocal_57, uVar64, &uVar2, uVar12, &bVar70))
				{
					iVar11 = 1;
					iVar0 = 5;
				}
				Function_39(&uVar2);
				Function_24(&iVar63, &uLocal_57, &uVar2);
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar70 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar70 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar70);
		}
	}
	iVar65 = 0;
	while (iVar65 <= 6)
	{
		if (IS_OBJECT_VALID(&(uVar3[iVar65])))
		{
			RELEASE_OBJECT_REF(&(uVar3[iVar65]));
		}
		iVar65++;
	}
	Function_21();
	if (bLocal_223)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		TASK_CLEAR(&Global_54076);
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
	{
		CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&Global_54076);
	}
	if (IS_AMBIENT_SPEECH_PLAYING(&(uLocal_57[0])))
	{
		CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(uLocal_57[0]));
	}
	Function_185(&uLocal_57, 4294967295);
	Function_19(&iLocal_69);
	if (iVar11 == 0)
	{
		Function_17(&uLocal_57, 4294967295);
	}
	iVar65 = 0;
	while (iVar65 <= 4)
	{
		Function_16(iLocal_198[iVar65 + 1]);
		iVar65++;
	}
	if (IS_BLIP_VALID(&uLocal_179))
	{
		REMOVE_BLIP(&uLocal_179);
	}
	Function_14(&(uLocal_57[0]));
	Function_14(&iLocal_69);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (Function_138(&(uLocal_57[0]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uLocal_57[0]), 1);
		UNK_0x99AFD2D1(&(uLocal_57[0]), 0, 0);
	}
	if (Function_138(&(uLocal_57[1]), 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uLocal_57[1]), 1);
		UNK_0x99AFD2D1(&(uLocal_57[1]), 0, 0);
	}
	if (bLocal_137)
	{
		Function_13();
	}
	Function_9(&uVar13);
	if (bLocal_148)
	{
		if (bLocal_149)
		{
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(uLocal_57[0]), 1);
			AI_GOAL_LOOK_CLEAR(&(uLocal_57[0]));
			RESET_ANIM_SET_FOR_ACTOR(&(uLocal_57[0]), 1);
			DECOR_REMOVE(&(uLocal_57[0]), "Stop_Crying");
		}
		Function_1(&Global_12714, &Global_15312, 1, 0);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar67);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar67);
	if (!bVar10)
	{
		Function_17(&uLocal_57, 4294967295);
		if (IS_OBJECT_VALID(&uVar2))
		{
			UNK_0xA936E73B(&uVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar2, 1);
		}
	}
	RELEASE_LAYOUT_REF(&uVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x10CC / 4300
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_8(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_8(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_8(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_7(&(Param0[iVar02]), 8);
	}
	Function_7(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_6(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_2(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_2(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x1174 / 4468
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_5(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_4(Global_43790), Function_3(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_8(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_8(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_5(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_4(Global_43790), Function_3(Global_43790), false, 0);
	}
}

int Function_3(int iParam0) //Position: 0x12DA / 4826
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_4(int iParam0) //Position: 0x1305 / 4869
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1) //Position: 0x1339 / 4921
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_6(int iParam0) //Position: 0x134A / 4938
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_7(var uParam0, int iParam1) //Position: 0x13F3 / 5107
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x140D / 5133
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x142A / 5162
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_10(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_10(struct<2>[] Param0, int iParam1) //Position: 0x1452 / 5202
{
	if (Function_12(&(Param0[iParam12]), 4))
	{
		if (Function_12(&(Param0[iParam12]), 1))
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
			Function_11(&(Param0[iParam12]), 1);
			Function_11(&(Param0[iParam12]), 2);
			Function_11(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_11(struct<13> Param0) //Position: 0x159D / 5533
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_12(struct<13> Param0) //Position: 0x15BA / 5562
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_13() //Position: 0x15D8 / 5592
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_14(int iParam0) //Position: 0x1603 / 5635
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_15(&iParam0);
		return 1;
	}
	return 0;
}

void Function_15(var uParam0) //Position: 0x161B / 5659
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

void Function_16(bool bParam0) //Position: 0x164E / 5710
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_17(var[] uParam0, int iParam1) //Position: 0x1659 / 5721
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_18(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_18(int iParam0) //Position: 0x168B / 5771
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

int Function_19(int iParam0) //Position: 0x16BB / 5819
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!Function_20(&iParam0))
		{
			RELEASE_ACTOR(&iParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_20(int iParam0) //Position: 0x16DD / 5853
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(GET_OBJECT_FROM_ACTOR(&iParam0))) == GET_GC_LAYOUT())
		{
			return 1;
		}
	}
	return 0;
}

void Function_21() //Position: 0x1701 / 5889
{
	if (SQUAD_IS_VALID(&uLocal_210))
	{
		Function_23(&uLocal_210);
		Function_22(&uLocal_210);
		SQUAD_MAKE_EMPTY(&uLocal_210);
		DESTROY_OBJECT(&uLocal_210);
	}
	return;
}

void Function_22(int iParam0) //Position: 0x172B / 5931
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_23(int iParam0) //Position: 0x1776 / 6006
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_24(var uParam0, var[] uParam1) //Position: 0x17AB / 6059
{
	if (iLocal_143 == 0)
	{
		iLocal_181 = 0;
		while (iLocal_181 <= 5)
		{
			if (iLocal_181 >= 0)
			{
				if (IS_ACTOR_VALID(&(uParam1[iLocal_181])))
				{
					if (ACTORS_IN_RANGE(&(uParam1[iLocal_181]), &Global_54076, 33.0f))
					{
						if (MEMORY_GET_IS_VISIBLE(&(uParam1[iLocal_181]), &Global_54076))
						{
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[iLocal_181]), 0);
							Function_37(&(uParam1[4]), &Global_54076, "TAUNT_FIGHT", 0, 5, 60, 1, 1);
							Function_36(&bLocal_151);
							iLocal_143 = 1;
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							uParam0 = 6;
						}
					}
					if (Function_142(&(uParam1[iLocal_181]), &uLocal_192, &fLocal_28, 0, 0, 0x40400000))
					{
						iLocal_143 = 1;
						AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
						uParam0 = 6;
					}
				}
			}
			iLocal_181++;
		}
	}
	switch (uParam0)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(&iLocal_69, &Local_99);
			if (STREAMING_ARE_BOUNDS_LOADED(Local_99, 10.0f))
			{
				SNAP_OBJECT_TO_GROUND(&uLocal_53, 5.0f, 0, 5.0f);
				SNAP_OBJECT_TO_GROUND(&uLocal_55, 5.0f, 0, 5.0f);
				GET_OBJECT_POSITION(&iLocal_69, &Local_99);
				iLocal_181 = 0;
				while (iLocal_181 <= 5)
				{
					if (iLocal_181 >= 0)
					{
						uParam1[iLocal_181] = Function_33(StackVal, StackVal, &iParam2, Function_218(), iLocal_198[iLocal_181], Local_71[iLocal_1812], Vector(0.0f, 0.0f, 0.0f), &iLocal_69);
						TASK_STAND_STILL(&(uParam1[iLocal_181]), -1.0f, 0, 0);
						MEMORY_CONSIDER_AS(&(uParam1[iLocal_181]), &Global_54076, 2);
						Function_32(&(uParam1[iLocal_181]));
						MEMORY_ATTACK_ON_SIGHT(&(uParam1[iLocal_181]), 0);
						DECOR_SET_BOOL(&(uParam1[iLocal_181]), "criminal", 1);
					}
					iLocal_181++;
				}
				CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, StackVal, Vector(Function_218(), &iParam2, StackVal) + Vector(Local_124[02], Local_108, uLocal_93[0]), Vector(0.0f, (fLocal_111 - 40.0f), 0.0f), "dead_ground_male");
				CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, StackVal, Vector(Function_218(), &iParam2, StackVal) + Vector(Local_124[12], Local_108, uLocal_93[1]), Vector(0.0f, (fLocal_111 + 30.0f), 0.0f), "dead_ground_male");
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Local_124[02], Local_108, 0), 1.0f, 1, 0);
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Local_124[12], Local_108, 0), 1.0f, 1, 0);
				CREATE_GRINGO_IN_LAYOUT(StackVal, &iParam2, Function_218(), "pee", Local_112, Vector(0.0f, fLocal_115, 0.0f));
				Local_99 = Local_112;
				uLocal_183 = LOCATE_GRINGO_OF_TYPE("pee", &Local_99, 3.0f, 0);
				SNAP_ACTOR_TO_GRINGO(&(uParam1[1]), GET_OBJECT_FROM_GRINGO(&uLocal_183), "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(&(uParam1[1]), &uLocal_183, "UseCase1", 4294967295, 1);
				uLocal_45[0] = CREATE_GRINGO_IN_LAYOUT(StackVal, &iParam2, Function_218(), "stand_lookdistance_w_any", Local_116, Vector(0.0f, fLocal_119, 0.0f));
				SNAP_OBJECT_TO_GROUND(&(uLocal_45[0]), 5.0f, 0, 1092616192);
				DECOR_SET_BOOL(&(uParam1[1]), "VolOnly", 1);
				uLocal_185 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam2, Function_218(), 0f, Local_116, Vector(0.0f, fLocal_119, 0.0f), Vector(3.0f, 3.0f, 3.0f));
				DECOR_SET_OBJECT(&(uLocal_45[0]), "volume", &uLocal_185);
				uLocal_45[1] = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), &iParam2, StackVal) + Vector(Local_71[32], Local_108, "stand_lookdistance_w_any"), Vector(0.0f, 0.0f, 0.0f));
				SNAP_OBJECT_TO_GROUND(&(uLocal_45[1]), 5.0f, 0, 1092616192);
				DECOR_SET_BOOL(&(uParam1[3]), "VolOnly", 1);
				uLocal_185 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(Function_218(), &iParam2, StackVal) + Vector(Local_71[32], Local_108, 0), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
				DECOR_SET_OBJECT(&(uLocal_45[1]), "volume", &uLocal_185);
				SNAP_ACTOR_TO_GRINGO(&(uParam1[3]), &(uLocal_45[1]), "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(&(uParam1[3]), GET_GRINGO_FROM_OBJECT(&(uLocal_45[1])), "UseCase1", 4294967295, 1);
				uLocal_51 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_218(), &iParam2, StackVal) + Vector(Local_71[42], Local_108, "rand_idle_stand"), Vector(0.0f, 0.0f, 0.0f));
				SNAP_ACTOR_TO_GRINGO(&(uParam1[4]), &uLocal_51, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(&(uParam1[4]), GET_GRINGO_FROM_OBJECT(&uLocal_51), "UseCase1", 4294967295, 1);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			SNAP_ACTOR_TO_GRINGO(&(uParam1[2]), &uLocal_53, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&(uParam1[2]), GET_GRINGO_FROM_OBJECT(&uLocal_53), "UseCase1", 4294967295, 1);
			uParam0 = 2;
			break;
		
		case 0x00000002:
			if (ACTORS_IN_RANGE(&Global_54076, &iLocal_69, 35.0f))
			{
				Function_37(&(uParam1[1]), &(uParam1[2]), "firstTimeManza_msg04", "firstTimeManza_msg04", 2, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[1]), 1);
				UNK_0x99AFD2D1(&(uParam1[1]), 0, 0);
				TASK_USE_GRINGO(&(uParam1[2]), GET_GRINGO_FROM_OBJECT(&uLocal_55), "UseCase1", 1, 1);
				Function_215(&bLocal_155, 0.0f);
				uParam0 = 4;
			}
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			if (Function_29(&bLocal_155, 5.0f))
			{
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&(uParam1[4]), &iLocal_69, 0, 2, 0);
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false) == &uParam1[4])
			{
				iLocal_144 = 1;
				TASK_CLEAR(&(uParam1[4]));
				TASK_CLEAR(&(uParam1[2]));
				Function_158();
				Local_99 = Function_158();
				Function_27(StackVal, &(uParam1[4]), Vector(0.0f, 0.0f, 0.0f), 16, 4, 2, 1);
				Function_27(StackVal, &(uParam1[1]), Vector(0.0f, 0.0f, 0.0f), 16, 4, 2, 1);
				Function_27(StackVal, &(uParam1[3]), Vector(0.0f, 0.0f, 0.0f), 16, 4, 2, 1);
				uParam0 = 7;
			}
			break;
		
		case 0x00000006:
			iLocal_181 = 0;
			while (iLocal_181 <= 5)
			{
				if (iLocal_181 >= 0)
				{
					if (Function_138(&(uParam1[iLocal_181]), 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uParam1[iLocal_181]), 1);
						Function_26(&(uParam1[iLocal_181]), &Global_54076, 4, 1);
						ADD_BLIP_FOR_ACTOR(&(uParam1[iLocal_181]), 322, 0, 2, 0);
						if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&(uParam1[iLocal_181])) && !IS_ACTOR_RIDING_VEHICLE(&(uParam1[iLocal_181])))
						{
							Function_25(&(uParam1[iLocal_181]), &Global_54076);
						}
						else
						{
							Function_26(&(uParam1[iLocal_181]), &Global_54076, 4, 1);
							ADD_BLIP_FOR_ACTOR(&(uParam1[iLocal_181]), 322, 0, 2, 0);
						}
					}
				}
				iLocal_181++;
			}
			uParam0 = 7;
			break;
		
		case 0x00000007:
			if (iLocal_144 == 1)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false) != &uParam1[4])
				{
					iLocal_144 = 0;
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &(uParam1[0]), 70.0f))
			{
				iLocal_181 = 0;
				while (iLocal_181 <= 5)
				{
					if (iLocal_181 >= 0)
					{
						if (IS_ACTOR_VALID(&(uParam1[iLocal_181])))
						{
							Function_15(&(uParam1[iLocal_181]));
							TASK_FLEE_ACTOR(&(uParam1[iLocal_181]), &(uParam1[0]), -1.0f, -1.0f, 0, 0, 0);
							RELEASE_ACTOR(&(uParam1[iLocal_181]));
						}
					}
					iLocal_181++;
				}
				iLocal_135 = 1;
				uParam0 = 8;
			}
			if (iLocal_143 == 1)
			{
				if (iLocal_135 == 0)
				{
					if (((!Function_138(&(uParam1[1]), 1) && !Function_138(&(uParam1[2]), 1)) && !Function_138(&(uParam1[4]), 1)) && !Function_138(&(uParam1[3]), 1))
					{
						iLocal_135 = 1;
					}
				}
			}
			if (bLocal_146 == 1)
			{
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			break;
	}
	return;
}

int Function_25(var uParam0, int iParam1) //Position: 0x1F5E / 8030
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

int Function_26(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2054 / 8276
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_27(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x20B4 / 8372
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_28(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, 1);
}

bool Function_28(vector3 vParam0) //Position: 0x21D3 / 8659
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_29(bool bParam0, float fParam1) //Position: 0x21EB / 8683
{
	if (Function_30(&bParam0))
	{
		if (Function_135(&bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_30(int iParam0) //Position: 0x2209 / 8713
{
	return Function_31(iParam0, 1);
}

bool Function_31(var uParam0, int iParam1) //Position: 0x2217 / 8727
{
	return (uParam0 && iParam1) == 0;
}

void Function_32(bool bParam0) //Position: 0x2224 / 8740
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

var Function_33(var uParam0, var uParam1, bool bParam2, struct<2> Param3, struct<2> Param5, var uParam7) //Position: 0x225B / 8795
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Param3;
	Var2 = Param5;
	Function_34(&uParam7, 0, &Var0, &Var2);
	uVar4 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Var0, Var2);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&uVar4), 50.0f, 0, 1092616192);
	return &uVar4;
}

void Function_34(var uParam0, bool bParam1, struct<2> Param2) //Position: 0x22AA / 8874
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_35(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_35(vector3 vParam0) //Position: 0x23D7 / 9175
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_28(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_28(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_36(bool bParam0) //Position: 0x244D / 9293
{
	Function_215(&bParam0, 0.0f);
	return;
}

void Function_37(int iParam0, float fParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x245A / 9306
{
	fParam1 = &fParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_38(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&fParam1))
			{
				fParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &fParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &fParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

float Function_38(int iParam0, int iParam1) //Position: 0x2507 / 9479
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

void Function_39(int iParam0) //Position: 0x25FC / 9724
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	struct<2> Var8;
	var uVar10;
	bool bVar11;
	
	switch (iLocal_216)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(&uVar0))
			{
				Local_163 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("nbirdpoint") };
				Var1 = Local_108;
				uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, &iParam0, &Local_163, Var1, Vector(0.0f, 0.0f, 0.0f));
				iVar3 = 1;
			}
			Local_163 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("nbirdSquad") };
			uLocal_210 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iParam0, &Local_163));
			if (SQUAD_IS_VALID(&uLocal_210))
			{
				Function_42(&Global_43578, &uLocal_210, 6, &uVar0, 1129, 33.0f);
				Function_41(&uLocal_210, 0);
			}
			if (iVar3 == 1)
			{
				DESTROY_OBJECT(&uVar0);
			}
			Function_36(&bLocal_212);
			iLocal_216 = 1;
			break;
		
		case 0x00000001:
			if (Function_29(&bLocal_212, 7.0f))
			{
				Var1 = Local_108;
				bVar11 = false;
				while (bVar11 < (SQUAD_GET_SIZE(&uLocal_210) - 1))
				{
					uVar10 = SQUAD_GET_ACTOR_BY_INDEX(&uLocal_210, bVar11);
					Var8 = Vector(0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 9.0f));
					ROTATE_VECTOR_XZ(&Var8, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
					uVar4 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Var1, StackVal);
					TASK_BIRD_SOAR_AT_COORD(&uVar10, &uVar4, -1.0f, 1106247680);
					bVar11++;
				}
				Function_40(&uLocal_210, 1);
				Function_36(&bLocal_212);
			}
			break;
		
		case 0x00000002:
			Function_21();
			iLocal_216 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_40(var uParam0, bool bParam1) //Position: 0x2742 / 10050
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_41(var uParam0, bool bParam1) //Position: 0x2783 / 10115
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_42(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x27CA / 10186
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_46(10.0f);
	Var12 = { StackVal, Function_46(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_45(&bParam4) || &bParam4 != 0)
		{
			bVar14 = Function_204(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &bParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_43(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_43(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_43(vector3 vParam0) //Position: 0x28C4 / 10436
{
	struct<2> Var0;
	
	if (!Function_44(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_44(int iParam0) //Position: 0x2A11 / 10769
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

bool Function_45(bool bParam0) //Position: 0x2A35 / 10805
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_46(int iParam0) //Position: 0x2A4C / 10828
{
	Function_47(iParam0, 10);
	return StackVal, Function_47(iParam0, 10);
}

struct<8> Function_47(var uParam0, int iParam1) //Position: 0x2A59 / 10841
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

struct<32> Function_48(struct<8> Param0) //Position: 0x2A74 / 10868
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_49(char* cParam0) //Position: 0x2AE0 / 10976
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_50(var uParam0, var[] uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2B02 / 11010
{
	bool bVar0;
	var uVar1;
	
	uParam2 = uParam2;
	switch (uParam0)
	{
		case 0x00000000:
			uParam0 = 1;
			break;
		
		case 0x00000001:
			if (Function_127(&iLocal_27, &(uParam1[0]), &bLocal_151, &uLocal_179, "one_handed_wave", "one_handed_wave/one_handed_wave_mobile/wave", "firstTimeManza_msg03", "firstTimeManza_msg03", "firstTimeManza_msg01", "firstTimeManza_msg01", "", "", 5.0f, 5.0f, 35.0f, 20.0f, "stand_wringhands_mobile", "stand_wringhands_mobile"))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[0]), &Global_54076, -1f, 0);
				uParam0 = 2;
				Function_215(&bLocal_151, 0.0f);
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000002:
			if (Function_125(&bLocal_151, 0.0f))
			{
				Function_37(&(uParam1[0]), &Global_54076, "firstTimeManza_msg02", "firstTimeManza_msg02", 5, 60, 1, 1);
			}
			if (!IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
			{
				uLocal_187 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam3, Function_218(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 4.0f, 10.0f));
				uLocal_189 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("firstTimeManza_context", &uLocal_187, 10, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_187), &(uParam1[0]), Function_218(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uParam0 = 3;
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000003:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_189))
			{
				Function_124();
				AI_GOAL_LOOK_CLEAR(&(uParam1[0]));
				SAY_SINGLE_LINE_CONTEXT(&Global_54076, 344, &(uParam1[0]), 1, 0, 5, 4294967295, 4294967295, 0, 1);
				Function_15(&(uParam1[0]));
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_189);
				DESTROY_VOLUME(&uLocal_187);
				iLocal_138 = 1;
				iLocal_139 = 1;
				iLocal_139 = iLocal_139;
				uParam0 = 4;
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000004:
			if (!IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
			{
				iLocal_134 = 1;
				Function_128("firstTimeManza_help11", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uParam0 = 5;
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000005:
			if (!iLocal_147)
			{
				if (!Function_123())
				{
					HUD_CLEAR_HELP();
					Function_132(&uLocal_120, 8.0f, 1, 0, 2, 1, 0);
					iLocal_147 = 1;
				}
			}
			if (iLocal_145 == 0)
			{
				if (iLocal_135 == 1)
				{
					if (Function_135(&bLocal_151) < 2.0f)
					{
						AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						iLocal_145 = 1;
					}
				}
				else if (iLocal_135 == 0)
				{
					Function_36(&bLocal_151);
				}
				if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_145 = 1;
				}
			}
			if (iLocal_145 == 1)
			{
				Function_128("firstTimeManza_help05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uLocal_217 = Function_122(StackVal, StackVal, &uParam3, "gManzanita", Vector(-431,522f, 152,568f, 1635,127f), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 4.0f, 1, 3, 4294967295, 4294967295, 1, 3212836864, 3212836864, 1);
				ADD_BLIP_FOR_OBJECT(&uLocal_217, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&uLocal_217), 3);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&uLocal_217), "firstTimeManza_gatewayBlip");
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &(uParam1[0]), Vector(-435,469f, 152,436f, 1637,698f), 260.0f, 1, 1, 1);
				TASK_STAND_STILL(&(uParam1[0]), -1.0f, 0, 0);
				iLocal_142 = 1;
				Function_121(&iLocal_69);
				bLocal_137 = true;
				GET_OBJECT_POSITION(&uLocal_217, &Local_99);
				Function_119(StackVal, Local_99, 0, 16, 1);
				iLocal_134 = 2;
				uParam0 = 6;
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000006:
			Function_118();
			if (Function_38(&iLocal_69, &(uParam1[0])) > 66.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
				TASK_FACE_ACTOR(&(uParam1[0]), &Global_54076, 1, -1.0f);
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "excited_return", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "excited_return/mobile_and_loop/loop");
				uParam0 = 7;
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000007:
			Function_118();
			if (GATEWAY_UPDATE(&uLocal_217))
			{
				if (!iLocal_219)
				{
					if (&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
					{
						Function_132("firstTimeManza_help10", 9.0f, 1, 0, 2, 1, 0);
					}
					iLocal_219 = 1;
				}
				if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					Function_37(&Global_54076, &(uLocal_57[0]), "firstTimeManzaPlayer_msg01", "firstTimeManzaPlayer_msg01", 5, 60, 1, 1);
					STOP_VEHICLE(&iLocal_69);
					RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
					TASK_FACE_ACTOR(&(uParam1[0]), &Global_54076, 1, -1.0f);
					Function_121(&(uParam1[0]));
					bLocal_137 = false;
					Function_13();
					Function_117(&uLocal_217);
					iLocal_220 = 0;
					uParam0 = 8;
					Function_36(&bLocal_194);
				}
			}
			break;
		
		case 0x00000008:
			uParam5 = 0;
			if (Function_115(&uLocal_57) && !IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
			{
				iLocal_138 = 0;
				uParam0 = 9;
				Function_36(&bLocal_194);
			}
			break;
		
		case 0x00000009:
			Local_99 = Vector(-453,147f, 153,642f, 1629,196f);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[0]), 1);
			UNK_0x99AFD2D1(&(uParam1[0]), 0, 0);
			Function_114(uParam4, 1, 1);
			iLocal_135 = 1;
			bLocal_136 = true;
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (bVar0 >= 0)
				{
					if (IS_ACTOR_ALIVE(&(uParam1[bVar0])))
					{
						iLocal_135 = 0;
					}
					else
					{
						bLocal_136 = false;
					}
				}
				bVar0++;
			}
			if (iLocal_135)
			{
				Function_109(50, 1, 0);
			}
			else if (bLocal_136)
			{
				Function_109(200, 1, 0);
			}
			else
			{
				Function_109(100, 1, 0);
			}
			bVar0 = false;
			while (bVar0 <= 5)
			{
				if (bVar0 >= 0)
				{
					if (IS_ACTOR_VALID(&(uParam1[bVar0])))
					{
						Function_121(&(uParam1[bVar0]));
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[bVar0]), 1);
						UNK_0x99AFD2D1(&(uParam1[bVar0]), 0, 0);
					}
				}
				bVar0++;
			}
			Function_85(20, 1, 0);
			Function_69(16);
			Function_65(uParam2, 2);
			uParam0 = 10;
			break;
		
		case 0x0000000A:
			if (bLocal_148)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
				{
					MEMORY_CLEAR_ALL(&(uParam1[0]));
					Function_1(&Global_12714, &Global_15312, 1, 0);
					Local_99 = Vector(-453,338f, 153,643f, 1613,641f);
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(0, &Local_99, 3.0f, 1);
					TASK_WANDER(0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&(uParam1[0]), bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					bLocal_148 = false;
				}
			}
			if (!Function_60(&Global_54076, &iLocal_69, Function_63(1)))
			{
				uParam0 = 11;
				return 1;
			}
			if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false) != &Global_54076 && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
			{
				uVar1 = Function_51(3, 19, &Global_54076, &iLocal_69, 0);
				SET_CRIME_WITNESSED(&uVar1, 3);
				uParam0 = 11;
				return 1;
			}
			break;
	}
	return 0;
}

var Function_51(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x32ED / 13037
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_59(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_58(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_54(1))
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
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_218(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_52();
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
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_52() //Position: 0x35A0 / 13728
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_53(&uVar0, &uVar1);
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

void Function_53(var uParam0, int iParam1) //Position: 0x3613 / 13843
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

bool Function_54(bool bParam0) //Position: 0x3649 / 13897
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_56())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_55(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_57(2048))
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

int Function_55(int iParam0) //Position: 0x36BF / 14015
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_56() //Position: 0x36D0 / 14032
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

bool Function_57(int iParam0) //Position: 0x36E9 / 14057
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(int iParam0) //Position: 0x3707 / 14087
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_59(int iParam0) //Position: 0x371D / 14109
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_60(int iParam0, var uParam1, float fParam2) //Position: 0x3732 / 14130
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_62(&iParam0);
			Function_61(&uParam1);
			if (VDIST(Function_62(&iParam0), Function_61(&uParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

struct<8> Function_61(int iParam0) //Position: 0x3850 / 14416
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

struct<8> Function_62(int iParam0) //Position: 0x38BE / 14526
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

var Function_63(bool bParam0) //Position: 0x392A / 14634
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_64(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_64(var uParam0, int iParam1) //Position: 0x3966 / 14694
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

void Function_65(int iParam0, int iParam1) //Position: 0x39F7 / 14839
{
	if (!Function_66(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_12 = iParam1;
	return;
}

bool Function_66(int iParam0) //Position: 0x3A12 / 14866
{
	if (!Function_68(iParam0))
	{
		return 0;
	}
	if (!Function_67(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_67(int iParam0) //Position: 0x3A36 / 14902
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_68(int iParam0) //Position: 0x3A4B / 14923
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_69(int iParam0) //Position: 0x3A62 / 14946
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_70(409, 1, 0, 0);
	}
	return;
}

int Function_70(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3A93 / 14995
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
	Function_84(iParam0, TO_FLOAT(bParam1), 1);
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_72(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_71(iParam0);
	return 1;
}

void Function_71(bool bParam0) //Position: 0x3CBB / 15547
{
	switch (bParam0)
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

void Function_72(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3D59 / 15705
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_82(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_81(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_81(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_79(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_76(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_73(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_218(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_73(int iParam0) //Position: 0x439C / 17308
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_74(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x43AD / 17325
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_75(char* cParam0) //Position: 0x44A4 / 17572
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_76(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x44BF / 17599
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_78(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_77(Function_78(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_77(int iParam0, int iParam1) //Position: 0x4526 / 17702
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_78(int iParam0, bool bParam1) //Position: 0x4538 / 17720
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_79(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x454A / 17738
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
	if (((Function_80(iParam0) != 19 || Function_80(iParam0) != 17) || Function_80(iParam0) != 10) || Function_80(iParam0) != 9)
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

int Function_80(int iParam0) //Position: 0x467E / 18046
{
	return Global_55480[iParam016].f_96;
}

float Function_81(int iParam0) //Position: 0x468D / 18061
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_82(int iParam0) //Position: 0x46C6 / 18118
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_83(int iParam0) //Position: 0x4703 / 18179
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

int Function_84(int iParam0, bool bParam1, bool bParam2) //Position: 0x489D / 18589
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

void Function_85(int iParam0, bool bParam1, bool bParam2) //Position: 0x4AE1 / 19169
{
	int iVar0;
	bool bVar1;
	
	if (Function_108(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_107())
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
	iVar0 = Function_106(3);
	Function_103();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_101(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_100(Global_119936, 4))
			{
				Function_94(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_70(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_81(3));
	iVar0 = Function_106(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_87(4, Function_93(Global_21369.f_248), 1);
				Function_86(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_87(4, Function_93(Global_21369.f_248), 1);
				Function_86(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_87(4, Function_93(Global_21369.f_248), 1);
				Function_86(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_87(4, Function_93(Global_21369.f_248), 1);
				Function_86(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_87(4, Function_93(Global_21369.f_248), 1);
				Function_86(Global_21369.f_244, Global_21369.f_248);
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

void Function_86(int iParam0, int iParam1) //Position: 0x4CB5 / 19637
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

int Function_87(int iParam0, char* cParam1) //Position: 0x4F1F / 20255
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
	Function_91(iParam0, &cParam1, 0, 1);
	iVar1 = Function_88();
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

int Function_88() //Position: 0x50AF / 20655
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
	Function_89();
	return 0;
}

void Function_89() //Position: 0x5150 / 20816
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_90(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_90(int iParam0) //Position: 0x520E / 21006
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

int Function_91(int iParam0, char* cParam1) //Position: 0x5274 / 21108
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
		Function_92(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_92(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x55CB / 21963
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_93(int iParam0) //Position: 0x5653 / 22099
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

void Function_94(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x56E2 / 22242
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_96(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_95(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_95(char* cParam0) //Position: 0x5757 / 22359
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

bool Function_96(int iParam0, var uParam1, int iParam2) //Position: 0x5791 / 22417
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
		if (Function_98(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_97(uVar0))
		{
			case 0x00000002:
				if (!Function_100(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_97(char* cParam0) //Position: 0x580D / 22541
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

int Function_98(int iParam0) //Position: 0x58AE / 22702
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_99(&iVar1, 2147483648);
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

void Function_99(int iParam0, int iParam1) //Position: 0x58EB / 22763
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x5901 / 22785
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_101(int iParam0, bool bParam1) //Position: 0x5914 / 22804
{
	bool bVar0;
	int iVar1;
	
	Function_70(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_102(iParam0, 4294967295);
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
	iVar1 = Function_88();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_102(int iParam0, int iParam1) //Position: 0x5AC0 / 23232
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

void Function_103() //Position: 0x5B05 / 23301
{
	Function_105(3, 0.0f);
	Function_104(3, 10000.0f);
	return;
}

int Function_104(int iParam0, int iParam1) //Position: 0x5B1B / 23323
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_105(int iParam0, int iParam1) //Position: 0x5B5B / 23387
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

int Function_106(bool bParam0) //Position: 0x5B9B / 23451
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_107() //Position: 0x5BDC / 23516
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_108(int iParam0) //Position: 0x5C07 / 23559
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5C16 / 23574
{
	int iVar0;
	bool bVar1;
	
	if (Function_108(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_107())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_106(1);
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
			Function_101(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_100(Global_119936, 1))
				{
					Function_94(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_113(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_100(Global_119936, 2))
				{
					Function_94(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_70(1, bVar1, 0, 0);
	}
	else
	{
		Function_112(1, (4294967295 * bVar1), 0);
	}
	if (Function_106(1) <= 4294962296)
	{
		Function_111(1, 4294962296, 0);
	}
	else if (Function_106(1) >= 5000)
	{
		Function_111(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_81(1));
	iVar0 = Function_106(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_87(2, Function_110(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_87(2, Function_110(Global_21369.f_244), 0);
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
				Function_87(2, Function_110(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_87(2, Function_110(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_87(2, Function_110(Global_21369.f_244), 1);
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
				Function_87(2, Function_110(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_87(2, Function_110(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_87(2, Function_110(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_87(2, Function_110(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_87(2, Function_110(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_87(2, Function_110(Global_21369.f_244), 1);
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
				Function_87(2, Function_110(Global_21369.f_244), 0);
			}
			break;
	}
	Function_86(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_110(int iParam0) //Position: 0x5F3D / 24381
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

int Function_111(int iParam0, bool bParam1, bool bParam2) //Position: 0x5FE0 / 24544
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
		Function_84(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_83(iParam0);
	if (&bParam2)
	{
		Function_72(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_112(int iParam0, bool bParam1, int iParam2) //Position: 0x627C / 25212
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
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_72(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_113(int iParam0, bool bParam1) //Position: 0x6479 / 25721
{
	bool bVar0;
	int iVar1;
	
	Function_112(iParam0, bParam1, 0);
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
	iVar1 = Function_102(iParam0, 4294967295);
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
	iVar1 = Function_88();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_114(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6624 / 26148
{
	bool bVar0;
	
	bVar0 = Function_106(0);
	if ((Function_106(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_70(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_106(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_70(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_106(597) + Function_106(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

int Function_115(int[] iParam0) //Position: 0x66F6 / 26358
{
	struct<2> Var0;
	
	if (!Function_30(&bLocal_159))
	{
		Function_116(&bLocal_159);
	}
	switch (iLocal_220)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_VEHICLE(&Global_54076) && GET_VEHICLE(&Global_54076) != &iLocal_69)
			{
				Function_13();
				iLocal_220 = 1;
			}
			break;
		
		case 0x00000001:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
			TASK_CLEAR(&Global_54076);
			if (IS_ACTOR_RIDING_VEHICLE(&Global_54076) && GET_VEHICLE(&Global_54076) != &iLocal_69)
			{
				STOP_VEHICLE(GET_VEHICLE(&Global_54076));
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
			}
			Function_36(&bLocal_159);
			iLocal_220 = 2;
			break;
		
		case 0x00000002:
			GET_ACTOR_VELOCITY(&Global_54076, &Var0);
			if (VMAG(Var0) > 5,5f)
			{
				Function_36(&bLocal_159);
				iLocal_220 = 3;
			}
			break;
		
		case 0x00000003:
			TASK_CLEAR(&Global_54076);
			TASK_VEHICLE_LEAVE(&Global_54076);
			iLocal_220 = 4;
			break;
		
		case 0x00000004:
			if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
			{
				START_VEHICLE(&iLocal_69);
				RESET_ANIM_SET_FOR_ACTOR(&(iParam0[0]), 1);
				SET_ANIM_SET_FOR_ACTOR(&(iParam0[0]), "thanks", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(iParam0[0]), "thanks");
				Function_37(&(iParam0[0]), &Global_54076, "firstTimeManza_msg05", "firstTimeManza_msg05", 5, 60, 1, 1);
				START_VEHICLE(&iLocal_69);
				TASK_CLEAR(&Global_54076);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_220 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_116(int iParam0) //Position: 0x6880 / 26752
{
	if (!Function_30(&iParam0))
	{
		Function_215(&iParam0, 0.0f);
	}
	return;
}

void Function_117(var uParam0) //Position: 0x6897 / 26775
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&uParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&uParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&uParam0);
	}
	return;
}

void Function_118() //Position: 0x692D / 26925
{
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_69)))
	{
		if (!&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
		{
			iLocal_142 = 0;
			ADD_BLIP_FOR_ACTOR(&iLocal_69, 325, 0.0f, 3, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&iLocal_69), "firstTimeManza_missingWagon");
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_69)))
	{
		if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
		{
			iLocal_142 = 1;
			Function_121(&iLocal_69);
		}
	}
	if (bLocal_137 == 1)
	{
		if (!&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
		{
			bLocal_137 = false;
			Function_13();
		}
	}
	else if (bLocal_137 == 0)
	{
		if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_69, false))
		{
			bLocal_137 = true;
			GET_OBJECT_POSITION(&uLocal_217, &Local_99);
			Function_119(StackVal, Local_99, 0, 16, 0);
		}
	}
	return;
}

void Function_119(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x69F7 / 27127
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_120(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_120(var uParam0) //Position: 0x6AB8 / 27320
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

void Function_121(float fParam0) //Position: 0x6B01 / 27393
{
	float fVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		fVar0 = GET_BLIP_ON_OBJECT(&fParam0);
		while (IS_BLIP_VALID(&fVar0))
		{
			REMOVE_BLIP(&fVar0);
			fVar0 = GET_BLIP_ON_OBJECT(&fParam0);
		}
	}
	return;
}

var Function_122(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, int iParam15) //Position: 0x6B34 / 27444
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &uParam11, 0, &uParam12, &iParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

bool Function_123() //Position: 0x6C1F / 27679
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_124() //Position: 0x6C4C / 27724
{
	bLocal_223 = true;
	if (Global_43787 == 2)
	{
		if (Function_190())
		{
			iLocal_221 = "NRT_SONG_04";
		}
		else
		{
			iLocal_221 = "NRT_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_221, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_125(int iParam0, float fParam1) //Position: 0x6CA3 / 27811
{
	if (Function_29(&iParam0, fParam1))
	{
		Function_126(&iParam0);
		return 1;
	}
	return 0;
}

void Function_126(vector3 vParam0) //Position: 0x6CBD / 27837
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_127(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, float fParam13, var uParam14, var uParam15, var uParam16, var uParam17) //Position: 0x6CD4 / 27860
{
	bool bVar0;
	
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_38(&iParam1, &Global_54076) > 65.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam1, &Global_54076, -1.0f, 1);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam1, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(&iParam1, false);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam1, 1.0f, &uParam14, 1, 0, 0))
			{
				if (GET_NTH_TASK_STATUS(&iParam1, 0) == 0)
				{
					uParam3 = ADD_BLIP_FOR_ACTOR(&iParam1, 325, 0, 2, 0);
					SET_BLIP_NAME(&uParam3, GET_ACTOR_ENUM_STRING(&iParam1));
					SET_ANIM_SET_FOR_ACTOR(&iParam1, &uParam4, 0);
					SET_ACTION_NODE_FOR_ACTOR(&iParam1, &uParam5);
					Function_215(&iParam2, 0.0f);
					Function_37(&iParam1, &Global_54076, &uParam6, &uParam7, 5, 60, 1, 1);
					uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_29(&iParam2, &uParam12) && !IS_AMBIENT_SPEECH_PLAYING(&iParam1))
			{
				if (IS_AMBIENT_SPEECH_PLAYING(&iParam1))
				{
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam1);
				}
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam1, 1.0f, &uParam15, 1, 0, 0))
				{
					if (IS_STRING_VALID(&uParam16))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
						SET_ANIM_SET_FOR_ACTOR(&iParam1, &uParam16, 0);
						SET_ACTION_NODE_FOR_ACTOR(&iParam1, &uParam17);
					}
					Function_37(&iParam1, &Global_54076, &uParam8, &bParam9, 5, 60, 1, 1);
					Function_215(&iParam2, 0.0f);
					uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_29(&iParam2, &fParam13) && !IS_AMBIENT_SPEECH_PLAYING(&iParam1))
			{
				if (IS_STRING_VALID(&uParam10))
				{
					Function_37(&iParam1, &Global_54076, &uParam10, &bParam11, 5, 60, 1, 1);
				}
				Function_215(&iParam2, 0.0f);
				REMOVE_BLIP(&uParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_128(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6E9F / 28319
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_129(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

struct<16> Function_129(int iParam0) //Position: 0x6F34 / 28468
{
	char* cVar0[16];
	
	if (!Function_130())
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

bool Function_130() //Position: 0x6F73 / 28531
{
	if (Function_31(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_131(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6F8E / 28558
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&uParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_132(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x705C / 28764
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_129(Global_10966) };
		}
		PRINT_HELP_B(&fParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&fParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_133(int iParam0, struct<2> Param1, float fParam3) //Position: 0x70E7 / 28903
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_62(&iParam0);
		if (VDIST(Function_62(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_134(int iParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x7173 / 29043
{
	if (!Function_138(&iParam0, 0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
		{
			if (&bParam3)
			{
				Function_109(4294967196, 1, 0);
			}
		}
		return 0;
	}
	if (Function_38(&iParam0, &iParam1) < &fParam2 && &fParam2 == -1.0f)
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
	{
		if (&bParam3)
		{
			Function_109(4294967196, 1, 0);
		}
		TASK_KILL_CHAR(&iParam0, &Global_54076);
		return 0;
	}
	return 1;
}

float Function_135(vector3 vParam0) //Position: 0x71F8 / 29176
{
	if (Function_30(&vParam0))
	{
		if (Function_136(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_136(int iParam0) //Position: 0x72C5 / 29381
{
	return Function_31(iParam0, 2);
}

void Function_137(int iParam0) //Position: 0x72D3 / 29395
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

bool Function_138(int iParam0, bool bParam1) //Position: 0x7326 / 29478
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_14(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_14(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_139(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_139(int iParam0, int iParam1) //Position: 0x73D1 / 29649
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

void Function_140(var uParam0, bool bParam1, bool bParam2) //Position: 0x7423 / 29731
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_128(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_141();
		}
	}
	return;
}

void Function_141() //Position: 0x744E / 29774
{
	switch (Global_43787)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

bool Function_142(int iParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x74D7 / 29911
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_38(&iParam0, &Global_54076);
		if (!Function_31(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_143(&iParam0);
				return 1;
			}
		}
		if (!Function_31(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_143(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_143(&iParam0);
				return 1;
			}
		}
		if (!Function_31(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_143(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_143(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_31(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_143(&iParam0);
				return 1;
			}
		}
		if (!Function_31(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_143(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_143(int iParam0) //Position: 0x76A0 / 30368
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_144(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_144(bool bParam0) //Position: 0x76DD / 30429
{
	SAY_SINGLE_LINE_CONTEXT(&bParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_145(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x76F6 / 30454
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_28(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_157(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_156(0);
		}
		if (&bParam7)
		{
			Function_154(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_152(iParam3);
			Global_6644 = 1;
		}
		Function_150(iParam3);
		if (Function_149(StackVal, 32768))
		{
			Function_146(1);
		}
		Global_26652[iParam34].f_16++;
		Function_70(408, 1, 0, 0);
	}
}

void Function_146(bool bParam0) //Position: 0x780B / 30731
{
	if (bParam0)
	{
		Function_148(0x10000000);
	}
	else
	{
		Function_147(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_147(int iParam0) //Position: 0x7830 / 30768
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_148(int iParam0) //Position: 0x784D / 30797
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_149(var uParam0, int iParam1) //Position: 0x7860 / 30816
{
	return (uParam0 && iParam1) == 0;
}

void Function_150(int iParam0) //Position: 0x786D / 30829
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_31(StackVal, 524288))
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
			bVar1 = Function_151(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_151(int iParam0) //Position: 0x7913 / 30995
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_152(int iParam0) //Position: 0x792A / 31018
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
	Function_153(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_153(vector3 vParam0) //Position: 0x79C9 / 31177
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_154(int iParam0, int iParam1) //Position: 0x79E5 / 31205
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
			Function_155(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_155(struct<113> Param0) //Position: 0x7A6C / 31340
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

void Function_156(int iParam0) //Position: 0x7ACA / 31434
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_151(900)), 0);
	return;
}

void Function_157(var uParam0) //Position: 0x7AEE / 31470
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&uParam0 + Function_151(200)), 0);
	return;
}

struct<8> Function_158() //Position: 0x7B11 / 31505
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_159(int iParam0, int iParam1) //Position: 0x7B1B / 31515
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_160(var uParam0, int iParam1) //Position: 0x7B2C / 31532
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
	Function_162(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_161(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_161(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7C96 / 31894
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_162(int iParam0) //Position: 0x7D3E / 32062
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
						Function_164(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_163(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_164(iVar0);
						}
					}
					else if (Function_163(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_164(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_164(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_163(var uParam0, struct<2> Param1) //Position: 0x7EAC / 32428
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_62(&uParam0);
		Var0 = Function_62(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_164(int iParam0) //Position: 0x7F23 / 32547
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

int Function_165(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7F8B / 32651
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
		Function_171("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_166(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_166(&bVar0);
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
			Function_166(&bVar0);
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

void Function_166(bool bParam0) //Position: 0x8239 / 33337
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

var Function_167(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x8283 / 33411
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_170(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_169(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_168(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_168(int iParam0, bool[] bParam1) //Position: 0x84D6 / 34006
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_169(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x850A / 34058
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_170(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x8526 / 34086
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_171(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x8552 / 34130
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_129(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

var Function_172(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x85D7 / 34263
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_8(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_8(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_8(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_5(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_174(StackVal, &Global_10996, Function_218(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_8(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_5(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_5(&(Param0[iVar02]), 1);
	Function_173(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_173(int iParam0, bool bParam1) //Position: 0x879E / 34718
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_174(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x8850 / 34896
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_218(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

bool Function_175(int iParam0) //Position: 0x8977 / 35191
{
	if (!Function_177(iParam0))
	{
		return 1;
	}
	return Function_176(&(Global_43791[iParam0]), 4);
}

int Function_176(var uParam0, int iParam1) //Position: 0x8993 / 35219
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_177(int iParam0) //Position: 0x89B0 / 35248
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_178(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x89C6 / 35270
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_179(struct<2>[] Param0) //Position: 0x89E7 / 35303
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_184();
	iVar1 = 0;
	if (!Function_12(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_183(&(Param0[iVar02]), 8);
		}
		else if (Function_182())
		{
			iVar1 = 1;
			Function_183(&(Param0[iVar02]), 8);
		}
		Function_183(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_12(&(Param0[iVar02]), 4))
		{
			if (!Function_12(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_12(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_12(&(Param0[02]), 8) || iVar1));
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
				Function_183(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_12(&(Param0[iVar02]), 4))
		{
			if (!Function_12(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_183(&(Param0[iVar02]), 2);
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
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_183(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_183(&(Param0[iVar02]), 2);
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
	Function_180();
	return 1;
}

void Function_180() //Position: 0x8DA9 / 36265
{
	if (!Function_181(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_181(int iParam0) //Position: 0x8DE9 / 36329
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_182() //Position: 0x8E05 / 36357
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

void Function_183(struct<13> Param0) //Position: 0x8E33 / 36403
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_184() //Position: 0x8E46 / 36422
{
	if (!Function_181(128))
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

void Function_185(var[] uParam0, int iParam1) //Position: 0x8E88 / 36488
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_186(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_186(int iParam0) //Position: 0x8EBA / 36538
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&iParam0, true);
		}
	}
	return;
}

void Function_187(var[] uParam0, int iParam1) //Position: 0x8F03 / 36611
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_188(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_188(int iParam0) //Position: 0x8F35 / 36661
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(&iParam0, false);
		}
	}
	return;
}

bool Function_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8F7F / 36735
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

bool Function_190() //Position: 0x8FF7 / 36855
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_191(int iParam0) //Position: 0x900A / 36874
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

void Function_192(bool bParam0) //Position: 0x9080 / 36992
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_193(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x908B / 37003
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_194(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_183(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_194(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x90C9 / 37065
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_12(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_183(&(Param0[iVar02]), 4);
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

var Function_195(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x9198 / 37272
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_12(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_183(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_183(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_196(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9274 / 37492
{
	return Function_197(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_197(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x928B / 37515
{
	return Function_198(StackVal, &iParam0, iParam1, &bParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_198(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x92A9 / 37545
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&iParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_203();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_45(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_202(&iParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_202(&iParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_201(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_45(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_201(bVar0))
				{
					Function_200();
				}
				Function_199(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_45(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
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
	return bVar0;
}

void Function_199(int iParam0) //Position: 0x95A2 / 38306
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

void Function_200() //Position: 0x9656 / 38486
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

bool Function_201(bool bParam0) //Position: 0x9691 / 38545
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_202(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x96BE / 38590
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

void Function_203() //Position: 0x9819 / 38937
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_200();
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
	Function_200();
	return;
}

var Function_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9865 / 39013
{
	return Function_205(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_205(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x9882 / 39042
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_198(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_198(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_198(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_198(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_198(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_198(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_198(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_198(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_198(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_198(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_198(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_198(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_198(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_198(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_206(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_206(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x9AE5 / 39653
{
	int iVar0;
	
	iVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_207(&(Global_46972[0]), &iVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_207(&(Global_46972[1]), &iVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_207(&(Global_46972[2]), &iVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_207(&(Global_46972[3]), &iVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_207(&(Global_46972[4]), &iVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_207(&(Global_46972[5]), &iVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_207(&(Global_46972[6]), &iVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_207(&(Global_46972[7]), &iVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_207(&(Global_46972[8]), &iVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_207(&(Global_46972[9]), &iVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_207(&(Global_46972[10]), &iVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_207(&(Global_46972[11]), &iVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_207(&(Global_46972[12]), &iVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_207(&(Global_46972[13]), &iVar0);
	}
	return Function_198(StackVal, &iVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_207(var uParam0, int iParam1) //Position: 0x9C54 / 40020
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&iParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&iParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

bool Function_208(int iParam0) //Position: 0x9D18 / 40216
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

int Function_209(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9E98 / 40600
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_213(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_210(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_210(bParam0, bParam1, bParam2, 4294967295);
}

int Function_210(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x9EF6 / 40694
{
	var uVar0;
	
	if (!Function_212(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_213(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_211(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_211(int iParam0) //Position: 0xA05A / 41050
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_212(int iParam0) //Position: 0xA098 / 41112
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_213(int iParam0, int iParam1, int iParam2) //Position: 0xA0AD / 41133
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_214(var uParam0, var uParam1, int iParam2) //Position: 0xA0CD / 41165
{
	var uVar0;
	
	uVar0 = Function_209(uParam0, uParam1, iParam2);
	return Function_66(uVar0);
}

void Function_215(vector3 vParam0) //Position: 0xA0E3 / 41187
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_159(&vParam0, 1);
	Function_99(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_216(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA108 / 41224
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_106(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_217(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_217(bool bParam0) //Position: 0xA20F / 41487
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

var Function_218() //Position: 0xA303 / 41731
{
	var uVar0;
	
	return &uVar0;
}

