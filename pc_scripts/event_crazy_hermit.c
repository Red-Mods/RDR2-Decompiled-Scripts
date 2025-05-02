//Decompiled with MagicRDR v1.0
//Function Count : 232
//Statics Count : 321
//Natives Count : 439
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
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[1] = { 0 };
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60[1] = { 0 };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 19;
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
	bool bLocal_143 = false;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	struct<2> Local_172 = { 0, 0 } ;
	var uLocal_174 = 0;
	struct<2> Local_175 = { 0, 0 } ;
	var uLocal_177 = 0;
	struct<2> Local_178 = { 0, 0 } ;
	var uLocal_180 = 0;
	struct<2> Local_181 = { 0, 0 } ;
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
	int iLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	struct<2> Local_196 = { 0, 0 } ;
	var uLocal_198 = 0;
	struct<2> Local_199 = { 0, 0 } ;
	var uLocal_201 = 0;
	struct<2> Local_202 = { 0, 0 } ;
	var uLocal_204 = 0;
	struct<2> Local_205 = { 0, 0 } ;
	var uLocal_207 = 0;
	struct<2> Local_208 = { 0, 0 } ;
	var uLocal_210 = 0;
	struct<2> Local_211 = { 0, 0 } ;
	var uLocal_213 = 0;
	struct<2> Local_214 = { 0, 0 } ;
	var uLocal_216 = 0;
	float fLocal_217 = 0.0f;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	var uLocal_227 = 0;
	bool bLocal_228 = false;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	float fLocal_237 = 0.0f;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	struct<2> Local_243 = { 0, 0 } ;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	float fLocal_254 = 0.0f;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	int iVar5;
	int iVar7;
	var uVar8;
	struct<2> Var9;
	struct<2> Var11;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	struct<2> Var18;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_31 = 0;
	iLocal_32 = 1;
	bLocal_33 = false;
	iLocal_34 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_38 = 0;
	bLocal_39 = false;
	iLocal_40 = 0;
	iLocal_41 = 0;
	iLocal_54 = 0;
	bLocal_143 = false;
	iLocal_144 = 0;
	iLocal_145 = 0;
	iLocal_151 = 0;
	uLocal_152 = CREATE_LAYOUT(Function_231());
	iLocal_156 = 0;
	iLocal_157 = 0;
	Local_172 = Vector(1.0f, 0.0f, 1.0f);
	uLocal_184 = Vector(-1,04f, 1,38f, 0,46f);
	uLocal_187 = Vector(-3,48f, -53,07f, 0.0f);
	uLocal_190 = Vector(0,86f, 1,43f, -1,04f);
	iLocal_193 = Vector(-3,48f, 134,64f, 0.0f);
	Local_196 = Vector(-2.0f, -0,7f, -2.0f);
	Local_199 = Vector(-2,06f, 0.0f, 1,04f);
	Local_202 = Vector(-0,69f, 0.0f, 1,56f);
	Local_205 = Vector(-0,66f, 0.0f, -1,47f);
	Local_208 = Vector(2,64f, 0.0f, -0,3f);
	Local_211 = Vector(180.0f, 0.0f, 180.0f);
	Local_214 = Vector(0.0f, 0.0f, 0.0f);
	fLocal_217 = 1.0f;
	uLocal_218 = Vector(0.0f, 0.0f, 0.0f);
	bLocal_228 = false;
	iLocal_238 = 0;
	iLocal_239 = 0;
	iLocal_242 = 0;
	iLocal_246 = 0;
	iLocal_247 = 1;
	iLocal_248 = 0;
	iLocal_249 = 0;
	iLocal_250 = 0;
	fLocal_254 = 2.0f;
	iLocal_257 = 0;
	iLocal_258 = 0;
	if (Global_26652[ScriptParam_0.f_644].f_16 == 0)
	{
		iLocal_55 = 0;
	}
	else if ((Global_26652[ScriptParam_0.f_644].f_16 % 2) == 1)
	{
		iLocal_55 = 1;
	}
	else
	{
		iLocal_55 = 0;
	}
	Function_230(&uLocal_46, 0.0f);
	uVar0 = Function_228(0, 1, 1, 0, 0);
	iVar5 = 0;
	iVar7 = 0;
	fVar13 = 0.0f;
	iLocal_150 = Function_227(1, 2);
	switch (Global_43787)
	{
		case 0x00000000:
			if (iLocal_150 == 0)
			{
				iLocal_64 = 217;
			}
			else
			{
				iLocal_64 = 155;
			}
			break;
		
		case 0x00000001:
			if (iLocal_150 == 0)
			{
				iLocal_64 = 319;
			}
			else
			{
				iLocal_64 = 320;
			}
			break;
		
		case 0x00000002:
			if (iLocal_150 == 0)
			{
				iLocal_64 = 218;
			}
			else
			{
				iLocal_64 = 168;
			}
			break;
	}
	Function_226(&iLocal_65, iLocal_64, 3, 0);
	Function_226(&iLocal_65, 541, 3, 0);
	Function_226(&iLocal_65, 543, 3, 0);
	Function_224(&iLocal_65, "dead_ground_male", 5, 0);
	Function_224(&iLocal_65, "custom/dead_ground_male", 8, 0);
	Function_224(&iLocal_65, "stand_shakehands", 5, 0);
	Function_224(&iLocal_65, "custom/stand_shakehands", 8, 0);
	Function_224(&iLocal_65, "crazy_hermit_waiving_over", 5, 0);
	Function_224(&iLocal_65, "custom/crazy_hermit_waiving_over", 8, 0);
	Function_224(&iLocal_65, "emo_hug", 5, 0);
	Function_224(&iLocal_65, "custom/emo_hug", 8, 0);
	switch (iLocal_55)
	{
		case 0x00000000:
			switch (Global_43787)
			{
				case 0x00000000:
					if (!Function_223("pressDemo3"))
					{
						if (Function_222())
						{
							iLocal_60[0] = 76;
						}
						else
						{
							iLocal_60[0] = 204;
						}
					}
					else
					{
						iLocal_60[0] = 76;
					}
					break;
				
				case 0x00000001:
					if (Function_222())
					{
						iLocal_60[0] = 312;
					}
					else
					{
						iLocal_60[0] = 311;
					}
					break;
				
				case 0x00000002:
					if (Function_222())
					{
						iLocal_60[0] = 203;
					}
					else
					{
						iLocal_60[0] = 33;
					}
					break;
			}
			Function_226(&iLocal_65, iLocal_60[0], 3, 0);
			Function_224(&iLocal_65, "$/tune/refGroups/campsiteSets/cam_hermitGruesome01x", 7, 0);
			break;
		
		case 0x00000001:
			iLocal_60[0] = RAND_INT_RANGE(1031, 1039);
			Function_226(&iLocal_65, iLocal_60[0], 3, 0);
			Function_224(&iLocal_65, "$/tune/refGroups/campsiteSets/cam_hermitNormal01x", 7, 0);
			break;
	}
	Function_221(iLocal_64);
	Function_221(iLocal_60[0]);
	iVar15 = (RAND_INT_RANGE(0, 2999) / 1000);
	if (iVar15 == 0)
	{
		iVar14 = "sit_ground_campfire_tend";
	}
	else if (iVar15 == 1)
	{
		iVar14 = "sit_ground_drink";
	}
	else if (iVar15 == 2)
	{
		iVar14 = "sit_ground_smoke";
	}
	else
	{
		iVar14 = "sit_ground_play_harmonica";
	}
	Function_224(&iLocal_65, "nthank_you", 5, 0);
	Function_224(&iLocal_65, "custom/thank_you", 8, 0);
	Function_224(&iLocal_65, &iVar14, 1, 0);
	Function_224(&iLocal_65, "Locked_Footlocker", 1, 0);
	Function_224(&iLocal_65, "nstreetdog", 8, 0);
	Function_224(&iLocal_65, "Emo_hug", 1, 0);
	if (Global_6625 == 1)
	{
		iLocal_54 = 5;
	}
	Function_220();
	iVar16 = 0;
	bVar17 = false;
	while (!IS_EXITFLAG_SET())
	{
		Function_219(StackVal, *(&ScriptParam_0 + 16));
		iLocal_166 = 600;
		if (bLocal_39 == 0)
		{
			if (Function_218(&bVar17, &iLocal_54, &iVar16, &iLocal_166, bLocal_143))
			{
				if (bVar17)
				{
					Function_217(&uLocal_56, 4294967295);
					Function_216(&bLocal_158);
				}
				else
				{
					Function_215(&uLocal_56, 4294967295);
					Function_214(&bLocal_158);
				}
			}
		}
		switch (iLocal_54)
		{
			case 0x00000000:
				if (Function_209(&iLocal_65))
				{
					uLocal_154 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_152, "temp", &iVar14, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_154), "UseCase1", "UseAnim", iLocal_64);
					iLocal_54 = 4;
					iLocal_166 = 0;
				}
				break;
			
			case 0x00000004:
				if (GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_154), "UseCase1", "UseAnim", iLocal_64))
				{
					iLocal_54 = 1;
					iLocal_166 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_169(&ScriptParam_0, &iLocal_166, &iLocal_157, &iLocal_156, 1))
				{
					iLocal_54 = 2;
					iLocal_166 = 0;
				}
				else if (iLocal_156 == 1)
				{
					iLocal_54 = 5;
					iLocal_166 = 0;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_168())
				{
					iLocal_54 = 5;
					iLocal_166 = 0;
					break;
				}
				uLocal_52 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_152, Function_231(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_52, &Global_54076, Function_231(), Vector(0.0f, 0,5f, -1.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				switch (iLocal_55)
				{
					case 0x00000000:
						iLocal_150 = 0;
						while (iLocal_150 <= 1)
						{
							Local_175 = Vector(StackVal, StackVal, StackVal) + Vector(Local_208, *(&ScriptParam_0 + 16), StackVal);
							Local_178 = Vector(0.0f, 0.0f, 0.0f);
							Local_181 = Vector(0.0f, 0.0f, 0.0f);
							FIND_GROUND_INTERSECTION(&Local_175, 2.0f, &Local_181, &Local_178);
							Function_167(Local_181, Local_178);
							uLocal_56[iLocal_150] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_152, Function_231(), iLocal_60[iLocal_150], Function_167(Local_181, Local_178));
							HOGTIE_ACTOR(&(uLocal_56[iLocal_150]));
							TASK_FLEE_ACTOR(&(uLocal_56[iLocal_150]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							SET_ACTOR_CAN_PLAY_GESTURES(&(uLocal_56[iLocal_150]), false);
							DECOR_SET_BOOL(&(uLocal_56[iLocal_150]), "CheckForCamera", 1);
							Function_166(&(uLocal_56[iLocal_150]), 4294967295 * 50);
							iLocal_150++;
						}
						uLocal_29 = Function_165(StackVal, StackVal, &uLocal_152, Function_231(), "$/tune/refGroups/campsiteSets/cam_hermitGruesome01x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						uVar8 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, Vector(Function_231(), &uLocal_152, StackVal) + Vector(Var9, *(&ScriptParam_0 + 16), "amb_campfire_light"));
						bLocal_158 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_231(), &uLocal_152, StackVal) + Vector(Local_199, *(&ScriptParam_0 + 16), iLocal_64), *(&ScriptParam_0 + 28));
						uLocal_27 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), &bLocal_158, StackVal) + Vector(Local_202, *(&ScriptParam_0 + 16), &iVar14), Vector(0.0f, 0.0f, 0.0f));
						DECOR_SET_BOOL(&bLocal_158, "criminal", 1);
						break;
					
					case 0x00000001:
						uLocal_56[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), &uLocal_152, StackVal) + Vector(Local_172, *(&ScriptParam_0 + 16), iLocal_60[0]), Vector(0.0f, 0.0f, 10.0f));
						TASK_STAND_STILL(&(uLocal_56[0]), -1.0f, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR(&(uLocal_56[0]), "streetDog_Main/navigation_streetdog/Default/DefaultGait/Idles/Sitting/sit_pre");
						Function_166(&(uLocal_56[0]), 0);
						Function_164(&(uLocal_56[0]));
						Function_165(StackVal, StackVal, &uLocal_152, Function_231(), "$/tune/refGroups/campsiteSets/cam_hermitNormal01x", *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
						bLocal_158 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), &uLocal_152, StackVal) + Vector(Local_199, *(&ScriptParam_0 + 16), iLocal_64), Vector(180.0f, 0.0f, 0.0f));
						uLocal_27 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_231(), &bLocal_158, StackVal) + Vector(Local_205, *(&ScriptParam_0 + 16), &iVar14), Vector(180.0f, 0.0f, 0.0f));
						uVar8 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, Vector(Function_231(), &uLocal_152, StackVal) + Vector(Var11, *(&ScriptParam_0 + 16), "amb_campfire_light"));
						break;
				}
				if (IS_OBJECT_VALID(&uVar8))
				{
					UNK_0x6745191B(StackVal, &uVar8, Vector(0.0f, 0.0f, 0.0f));
				}
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_158, false);
				Function_166(&bLocal_158, 0);
				Function_164(&bLocal_158);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&bLocal_158), 1,5f, 1, 1092616192);
				Function_163(&bLocal_158);
				GIVE_WEAPON_TO_ACTOR(&bLocal_158, 39, 0f, 1, 1);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_158, &Global_54076, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_158, 0);
				UNK_0x99AFD2D1(&bLocal_158, 1, 1);
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uLocal_27), 0);
				DESTROY_OBJECT(&uLocal_154);
				SNAP_OBJECT_TO_GROUND(&uLocal_27, 2.0f, 1, 1092616192);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_27)))
				{
					if (bLocal_228)
					{
						Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
					}
					TASK_USE_GRINGO(&bLocal_158, GET_GRINGO_FROM_OBJECT(&uLocal_27), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(&bLocal_158, &uLocal_27, "UseCase1", true, 0, 0);
				}
				Local_175 = Vector(StackVal, StackVal, StackVal) + Vector(Local_196, *(&ScriptParam_0 + 16), StackVal);
				Local_175.f_4 = (StackVal + 2.0f);
				Local_178 = Vector(0.0f, 0.0f, 0.0f);
				Var18 = Vector(0.0f, 0.0f, 0.0f);
				PRINTSTRING("Probe start pos");
				PRINTVECTOR(Local_175);
				PRINTSTRING("nProbe pos");
				PRINTVECTOR(Var18);
				Function_159(StackVal, &uLocal_167, &uLocal_168, &uLocal_169, 2,75f, *(&ScriptParam_0 + 16));
				Local_178.f_4 = 270.0f;
				PRINTVECTOR(Local_178);
				Local_181 = Vector(0.0f, 0.0f, 0.0f);
				FIND_GROUND_INTERSECTION(&Local_175, 2.0f, &Local_181, &Local_178);
				uLocal_146 = CREATE_GRINGO_IN_LAYOUT(&uLocal_152, Function_231(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Local_181, Local_211);
				SNAP_OBJECT_TO_GROUND(&uLocal_146, 7.0f, 1, 1092616192);
				uLocal_148 = GET_GRINGO_FROM_OBJECT(&uLocal_146);
				Function_155(StackVal, &uLocal_148, Var18, 2, 4294967295, 4294967295);
				Function_154(&iLocal_170, 1);
				iLocal_54 = 3;
				Function_153(&iLocal_166);
				iLocal_166 = 0;
				break;
			
			case 0x00000003:
				Function_153(&iLocal_166);
				Function_152();
				Function_139(StackVal, Function_152(), &bLocal_143, ScriptParam_0.f_64, &bLocal_158, 100, 0x42a00000, 1);
				Function_152();
				Function_139(StackVal, Function_152(), &bLocal_143, ScriptParam_0.f_64, &(uLocal_56[0]), 100, 0x42a00000, 1);
				if (!Function_133(ScriptParam_0.f_64, &bLocal_158, &iLocal_144, &iLocal_145, 0, 1, 1, 1))
				{
					iLocal_54 = 5;
					iLocal_166 = 0;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					if (IS_ACTOR_VALID(&bLocal_158))
					{
						GET_POSITION(&bLocal_158, &uLocal_163);
						iLocal_166 = 0;
					}
				}
				switch (iLocal_55)
				{
					case 0x00000000:
						if (Function_130(&bLocal_158, &uLocal_171, &fVar13, iLocal_170, bLocal_33, 0x40400000))
						{
							iLocal_151 = 3;
							bLocal_33 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_130(&bLocal_158, &uLocal_171, &fVar13, iLocal_170, bLocal_33, 0x40400000) || Function_130(&(uLocal_56[0]), &uLocal_171, &fVar13, iLocal_170, bLocal_33, 0x40400000))
						{
							iLocal_151 = 3;
							bLocal_33 = true;
						}
						break;
				}
				switch (iLocal_55)
				{
					case 0x00000000:
						if (IS_ACTOR_VALID(&(uLocal_56[0])))
						{
							Function_129(&(uLocal_56[0]));
							if (Function_127(StackVal, &Global_54076, Function_129(&(uLocal_56[0]))) < Function_125(1))
							{
								iLocal_166 = 0;
								iLocal_54 = 5;
								break;
							}
							else
							{
								Function_129(&(uLocal_56[0]));
								if (VDIST(Function_129(&(uLocal_56[0])), *(&ScriptParam_0 + 16)) < 20.0f)
								{
									TASK_FLEE_ACTOR(&(uLocal_56[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
									Function_124(&(uLocal_56[0]));
									iVar7 = 1;
									iLocal_166 = 0;
									iLocal_54 = 5;
								}
							}
						}
						else if (Function_127(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_125(1))
						{
							iLocal_166 = 0;
							iLocal_54 = 5;
							break;
						}
						break;
					
					case 0x00000001:
						if (Function_127(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_125(1))
						{
							iLocal_166 = 0;
							iLocal_54 = 5;
							break;
						}
						break;
				}
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					if (Function_127(StackVal, &bLocal_158, *(&ScriptParam_0 + 16)) < Function_125(1))
					{
						Function_122(&bLocal_158);
					}
				}
				switch (iLocal_55)
				{
					case 0x00000000:
						if (Function_83(&iLocal_151, &uLocal_56, uVar0))
						{
							iVar7 = 1;
							iLocal_54 = 5;
						}
						break;
					
					case 0x00000001:
						iLocal_166 = 0;
						if (IS_ACTOR_VALID(&bLocal_158))
						{
							if (Function_29(&iLocal_151, &uLocal_56))
							{
								iVar7 = 1;
								iLocal_54 = 5;
							}
						}
						else
						{
							iLocal_54 = 5;
						}
						break;
				}
				break;
			
			case 0x00000005:
				iLocal_54 = 6;
				iLocal_166 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_166 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iLocal_166);
		}
	}
	Function_215(&uLocal_56, 4294967295);
	Function_214(&bLocal_158);
	Function_28(&uLocal_167, &uLocal_168, &uLocal_169);
	Function_27(iLocal_64);
	Function_27(iLocal_60[0]);
	Function_122(&bLocal_158);
	Function_122(&(uLocal_56[0]));
	if (!bLocal_143)
	{
		Function_21(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
		if (IS_OBJECT_VALID(&uLocal_152))
		{
			Function_20(&bLocal_158);
			Function_19(&uLocal_56, 4294967295);
			UNK_0xA936E73B(&uLocal_152, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uLocal_152, 1);
		}
	}
	else if (iVar7 != 0 && bLocal_33 != 0)
	{
		switch (iLocal_55)
		{
			case 0x00000000:
				Function_19(&uLocal_56, 4294967295);
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 0);
				}
				if (bLocal_228)
				{
					Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
				}
				Function_20(&bLocal_158);
				break;
			
			case 0x00000001:
				if (bLocal_228)
				{
					Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
				}
				Function_10(&bLocal_158, GET_GRINGO_FROM_OBJECT(&uLocal_27), "UseCase1", 4294967295, 1, 2);
				Function_7(&bLocal_158, 1);
				if (IS_ACTOR_VALID(&(uLocal_56[0])))
				{
					if (IS_ACTOR_VALID(&bLocal_158))
					{
						RESET_ANIM_SET_FOR_ACTOR(&(uLocal_56[0]), 0);
						TASK_FOLLOW_ACTOR(&(uLocal_56[0]), &bLocal_158);
					}
					else
					{
						Function_19(&uLocal_56, 4294967295);
					}
				}
				break;
			}
	}
	if (Function_5(&bLocal_158, 0))
	{
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_158, 1);
		UNK_0x99AFD2D1(&bLocal_158, 0, 0);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_228)
	{
		Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
	}
	if (bLocal_228)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "RunNewCamera"))
	{
		DECOR_REMOVE(&Global_54076, "RunNewCamera");
	}
	if (IS_OBJECT_VALID(&uVar8))
	{
		UNK_0xE18028C1(&uVar8);
		DESTROY_OBJECT(&uVar8);
	}
	if (iLocal_36 == 1)
	{
		AUDIO_ENABLE_PLAYER_TAUNTS();
		iLocal_36 = 0;
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_222);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_222);
	if (IS_VOLUME_VALID(&iLocal_222))
	{
		DESTROY_VOLUME(&iLocal_222);
	}
	Function_1(&iLocal_65);
	UNK_0xA936E73B(&uLocal_152, 1);
	RELEASE_LAYOUT_REF(&uLocal_152);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xFD4 / 4052
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0xFFC / 4092
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

void Function_3(struct<13> Param0) //Position: 0x1147 / 4423
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x1164 / 4452
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(bool bParam0, bool bParam1) //Position: 0x1182 / 4482
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
			Function_122(&bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 163840))
		{
			Function_122(&bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (Function_6(&bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 16384))
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

int Function_6(int iParam0, int iParam1) //Position: 0x122D / 4653
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

int Function_7(var uParam0, int iParam1) //Position: 0x127F / 4735
{
	char* cVar0[64];
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 64);
		return 0;
	}
	if (!Function_9(&uParam0))
	{
		strcpy(&cVar0, "ACTORROAM_SET_OPTIONS_FOR_ACTOR: invalid actor ", 64);
		stradd(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 64);
		return 0;
	}
	Function_8(&uParam0, iParam1);
	return 1;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x132C / 4908
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_options", bParam1);
	return;
}

bool Function_9(bool bParam0) //Position: 0x1352 / 4946
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

int Function_10(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0x137A / 4986
{
	if (!IS_GRINGO_VALID(&uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&uParam2) != 0 || STRINGS_ARE_EQUAL(&uParam2, ""))
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
		GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&uParam1), &Global_10998);
		if (!(GET_TASK_STATUS(&uParam0, 19) != 1 || GET_TASK_STATUS(&uParam0, 19) != 3))
		{
			TASK_USE_GRINGO(&uParam0, &uParam1, &uParam2, &iParam3, 1);
			TASK_PRIORITY_SET(&uParam0, &iParam5);
		}
		Function_11(&uParam0, 5, GET_OBJECT_FROM_GRINGO(&uParam1), &iParam4, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_11(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4) //Position: 0x1427 / 5159
{
	char* cVar0[32];
	
	Function_18();
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
	if (Function_17(&uParam0) == 1)
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
	Function_16(&uParam0, 0);
	Function_15(&uParam0, iParam1);
	Function_14(&uParam0, &bParam2);
	Function_13(&uParam0, uParam3);
	if (Function_12(&uParam0) != 5)
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

int Function_12(int iParam0) //Position: 0x1693 / 5779
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_13(var uParam0, bool bParam1) //Position: 0x16B7 / 5815
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x16DB / 5851
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_15(var uParam0, bool bParam1) //Position: 0x1701 / 5889
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_16(var uParam0, bool bParam1) //Position: 0x1728 / 5928
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_17(bool bParam0) //Position: 0x174C / 5964
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_18() //Position: 0x176B / 5995
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

void Function_19(var[] uParam0, int iParam1) //Position: 0x17BA / 6074
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_20(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_20(bool bParam0) //Position: 0x17EC / 6124
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

bool Function_21(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x181C / 6172
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_22(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_22(&bVar0);
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
			Function_22(&bVar0);
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

void Function_22(bool bParam0) //Position: 0x1A88 / 6792
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

void Function_23(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1AD2 / 6866
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_24(int iParam0) //Position: 0x1B57 / 6999
{
	char* cVar0[16];
	
	if (!Function_25())
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

bool Function_25() //Position: 0x1B96 / 7062
{
	if (Function_26(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_26(int iParam0, int iParam1) //Position: 0x1BB1 / 7089
{
	return (iParam0 && iParam1) == 0;
}

void Function_27(bool bParam0) //Position: 0x1BBE / 7102
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

void Function_28(var uParam0, var uParam1, int iParam2) //Position: 0x1BC9 / 7113
{
	if (uParam0 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(uParam0);
	}
	if (uParam1 != 4294967295)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(uParam1);
	}
	if (iParam2 != 4294967295)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam2);
	}
	return;
}

bool Function_29(var uParam0, int[] iParam1) //Position: 0x1BFC / 7164
{
	var uVar0;
	
	GET_POSITION(&bLocal_158, &uVar0);
	switch (uParam0)
	{
		case 0x00000000:
			if (iLocal_38 == 0)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bLocal_158, 1.0f, 47.0f, 1, 0, 0))
				{
					SET_ACTOR_VISION_MAX_RANGE(&bLocal_158, 80.0f, 1);
					SET_ACTOR_VISION_FIELD_OF_VIEW(&bLocal_158, 359.0f);
					MEMORY_REPORT_POSITION(&bLocal_158, &Global_54076, &uVar0);
					AI_QUICK_EXIT_GRINGO(&bLocal_158, 1);
					TASK_FACE_ACTOR(&bLocal_158, &Global_54076, 1, 3212836864);
					Function_81();
					AI_SET_SHOTS_PER_BURST(&bLocal_158, 1);
					Function_80(&bLocal_158, &Global_54076);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_158, 13, 1);
					TASK_PRIORITY_SET(&bLocal_158, true);
					Function_230(&uLocal_46, 0.0f);
					Function_79(1);
					iLocal_247 = 0;
					uParam0 = 1;
				}
			}
			else if (IS_ACTOR_VALID(&bLocal_158))
			{
				if (Function_78(&Global_54076, &bLocal_158) >= 25.0f)
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_27));
					AI_QUICK_EXIT_GRINGO(&bLocal_158, 1);
					Function_230(&uLocal_46, 0.0f);
					uParam0 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_77(&(iParam1[0])))
			{
				uParam0 = 3;
			}
			Function_230(&uLocal_46, 0.0f);
			uParam0 = 2;
			break;
		
		case 0x00000002:
			if (iLocal_247 == 0)
			{
				if (Function_73(&uLocal_46, 2.0f))
				{
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bLocal_158);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_158);
					Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg01", "eventCrazyHermit_msg01", 2, 60, 1, 1);
					iLocal_247 = 1;
				}
			}
			if (iLocal_38 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					if (Function_78(&Global_54076, &bLocal_158) < 55.0f || (Function_73(&uLocal_46, 10.0f) && Function_78(&Global_54076, &bLocal_158) < 30.0f))
					{
						if (Function_77(&(iParam1[0])) == 0)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_27)))
							{
								if (bLocal_228)
								{
									Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
								}
								RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 0);
								TASK_CLEAR(&bLocal_158);
								iLocal_38 = 1;
								TASK_USE_GRINGO(&bLocal_158, GET_GRINGO_FROM_OBJECT(&uLocal_27), "UseCase1", 4294967295, 1);
							}
							uParam0 = 0;
						}
					}
				}
			}
			if (Function_77(&(iParam1[0])))
			{
				uParam0 = 3;
			}
			Function_71();
			if (Function_73(&uLocal_46, 2.0f))
			{
				TASK_POINT_GUN_AT_OBJECT(&bLocal_158, &Global_54076, -1.0f, 0);
				Function_230(&uLocal_46, 0.0f);
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_247 == 0)
			{
				if (Function_73(&uLocal_46, 2.0f))
				{
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bLocal_158);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_158);
					Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg01", "eventCrazyHermit_msg01", 2, 60, 1, 1);
					iLocal_247 = 1;
				}
			}
			if (iLocal_38 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					if (Function_78(&Global_54076, &bLocal_158) < 55.0f || (Function_73(&uLocal_46, 10.0f) && Function_78(&Global_54076, &bLocal_158) < 30.0f))
					{
						if (Function_77(&(iParam1[0])) == 0)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_27)))
							{
								if (bLocal_228)
								{
									Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
								}
								RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 0);
								TASK_CLEAR(&bLocal_158);
								iLocal_38 = 1;
								TASK_USE_GRINGO(&bLocal_158, GET_GRINGO_FROM_OBJECT(&uLocal_27), "UseCase1", 4294967295, 1);
							}
							uParam0 = 0;
						}
					}
				}
			}
			else
			{
				iLocal_248 = 1;
			}
			Function_71();
			if (Function_77(&(iParam1[0])) || iLocal_248)
			{
				if (iLocal_31 == 0)
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_158, 13, 0);
					COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&bLocal_158, 0.0f, 0.0f);
					AI_RESET_FIRING_FSM(&bLocal_158);
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bLocal_158);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_158);
					Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg02", "eventCrazyHermit_msg02", 5, 60, 1, 1);
					if (bLocal_228)
					{
						Function_161(&iLocal_229, 34, 0, 4294967295, 4294967295);
					}
					Function_70(&bLocal_158, &Global_54076);
					RESET_ANIM_SET_FOR_ACTOR(&(iParam1[0]), 1);
					Function_70(&(iParam1[0]), &Global_54076);
					Function_166(&(iParam1[0]), 0);
					TASK_PRIORITY_SET(&bLocal_158, false);
					ADD_BLIP_FOR_ACTOR(&bLocal_158, 322, 0.0f, 3, 0);
					ADD_BLIP_FOR_ACTOR(&(iParam1[0]), 322, 0.0f, 3, 0);
					iLocal_31 = 1;
				}
			}
			if (Function_69(&bLocal_158, &bLocal_35))
			{
				switch (bLocal_35)
				{
					case 0x00000000:
						if (iLocal_249 == 0)
						{
							Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg03", "eventCrazyHermit_msg03", 5, 60, 1, 1);
							iLocal_249 = 1;
						}
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_158, 1);
						UNK_0x99AFD2D1(&bLocal_158, 0, 0);
						Function_30(50, 1, 0);
						return 1;
						break;
					
					case 0x00000001:
						if (iLocal_249 == 0)
						{
							Function_72(&Global_54076, 0, "eventCrazyHermitPlayer_msg01", "eventCrazyHermitPlayer_msg01", 5, 60, 1, 1);
							iLocal_249 = 1;
						}
						return 1;
						break;
					
					case 0x00000002:
						if (iLocal_249 == 0)
						{
							Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg03", "eventCrazyHermit_msg03", 5, 60, 1, 1);
							iLocal_249 = 1;
						}
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_158, 1);
						UNK_0x99AFD2D1(&bLocal_158, 0, 0);
						Function_30(50, 1, 0);
						return 1;
						break;
					}
			}
			break;
	}
	return 0;
}

void Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x2167 / 8551
{
	int iVar0;
	bool bVar1;
	
	if (Function_68(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_67())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_66(1);
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
			Function_65(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_64(Global_119936, 1))
				{
					Function_58(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_56(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_64(Global_119936, 2))
				{
					Function_58(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_54(1, bVar1, 0, 0);
	}
	else
	{
		Function_53(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_40(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_40(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_39(1));
	iVar0 = Function_66(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_32(2, Function_38(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_32(2, Function_38(Global_21369.f_244), 0);
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
				Function_32(2, Function_38(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_32(2, Function_38(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_32(2, Function_38(Global_21369.f_244), 1);
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
				Function_32(2, Function_38(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_32(2, Function_38(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_32(2, Function_38(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_32(2, Function_38(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_32(2, Function_38(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_32(2, Function_38(Global_21369.f_244), 1);
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
				Function_32(2, Function_38(Global_21369.f_244), 0);
			}
			break;
	}
	Function_31(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_31(int iParam0, int iParam1) //Position: 0x248E / 9358
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

int Function_32(int iParam0, char* cParam1) //Position: 0x26F8 / 9976
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
	Function_36(iParam0, &cParam1, 0, 1);
	iVar1 = Function_33();
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

int Function_33() //Position: 0x2888 / 10376
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
	Function_34();
	return 0;
}

void Function_34() //Position: 0x2929 / 10537
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
		Function_35(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_35(int iParam0) //Position: 0x29E7 / 10727
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

int Function_36(int iParam0, char* cParam1) //Position: 0x2A4D / 10829
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
		Function_37(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_37(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x2DA4 / 11684
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

var Function_38(int iParam0) //Position: 0x2E2C / 11820
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

float Function_39(int iParam0) //Position: 0x2ECF / 11983
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x2F08 / 12040
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
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (&bParam2)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_41(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x31A4 / 12708
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
					fVar19 = (Function_39(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_39(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_48(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_45(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_42(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_231(), &Var9);
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

var Function_42(int iParam0) //Position: 0x37E2 / 14306
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_43(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x37F3 / 14323
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_44(char* cParam0) //Position: 0x38EA / 14570
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3905 / 14597
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_47(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_46(Function_47(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_46(int iParam0, int iParam1) //Position: 0x396C / 14700
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_47(int iParam0, bool bParam1) //Position: 0x397E / 14718
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_48(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3990 / 14736
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
	if (((Function_49(iParam0) != 19 || Function_49(iParam0) != 17) || Function_49(iParam0) != 10) || Function_49(iParam0) != 9)
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

int Function_49(int iParam0) //Position: 0x3AC4 / 15044
{
	return Global_55480[iParam016].f_96;
}

var Function_50(int iParam0) //Position: 0x3AD3 / 15059
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_51(int iParam0) //Position: 0x3B10 / 15120
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

int Function_52(int iParam0, float fParam1, bool bParam2) //Position: 0x3CAA / 15530
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

int Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x3EEE / 16110
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
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_41(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_54(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x40ED / 16621
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
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_55(iParam0);
	return 1;
}

void Function_55(int iParam0) //Position: 0x4315 / 17173
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

int Function_56(int iParam0, bool bParam1) //Position: 0x43B3 / 17331
{
	bool bVar0;
	int iVar1;
	
	Function_53(iParam0, bParam1, 0);
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
	iVar1 = Function_57(iParam0, 4294967295);
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
	iVar1 = Function_33();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_57(int iParam0, int iParam1) //Position: 0x455E / 17758
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

void Function_58(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x45A3 / 17827
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_60(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_59(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_59(char* cParam0) //Position: 0x4618 / 17944
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

bool Function_60(int iParam0, var uParam1, int iParam2) //Position: 0x4652 / 18002
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
		if (Function_62(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_61(uVar0))
		{
			case 0x00000002:
				if (!Function_64(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_61(char* cParam0) //Position: 0x46CE / 18126
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

int Function_62(int iParam0) //Position: 0x476F / 18287
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_63(&iVar1, 2147483648);
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

void Function_63(int iParam0, int iParam1) //Position: 0x47AC / 18348
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_64(var uParam0, int iParam1) //Position: 0x47C2 / 18370
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_65(int iParam0, bool bParam1) //Position: 0x47D5 / 18389
{
	bool bVar0;
	int iVar1;
	
	Function_54(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_57(iParam0, 4294967295);
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
	iVar1 = Function_33();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

int Function_66(bool bParam0) //Position: 0x4981 / 18817
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_67() //Position: 0x49C2 / 18882
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_68(int iParam0) //Position: 0x49ED / 18925
{
	return (*&Global_21369 + 168)[iParam0];
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x49FC / 18940
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		iParam1 = 1;
		return 1;
	}
	if (!Function_5(&bParam0, 0))
	{
		iParam1 = 1;
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&bParam0))
	{
		iParam1 = 0;
		return 1;
	}
	if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), 65536))
	{
		iParam1 = 2;
		return 1;
	}
	return 0;
}

int Function_70(bool bParam0, int iParam1) //Position: 0x4A53 / 19027
{
	if (IS_ACTOR_HUMAN(&bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&bParam0) == 0)
		{
			TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&bParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&bParam0, &iParam1, 1);
	TASK_KILL_CHAR(&bParam0, &iParam1);
	TASK_PRIORITY_SET(&bParam0, true);
	return 1;
}

void Function_71() //Position: 0x4B49 / 19273
{
	if (Function_5(&bLocal_158, 0))
	{
		switch (iLocal_246)
		{
			case 0x00000000:
				if (IS_ACTOR_HOGTIED(&bLocal_158))
				{
					Function_122(&bLocal_158);
					if (bLocal_228)
					{
						Function_161(&iLocal_229, 34, 0, 4294967295, 4294967295);
					}
					Function_70(&bLocal_158, &Global_54076);
					Function_124(&bLocal_158);
					iLocal_246 = 1;
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_HOGTIED(&bLocal_158))
				{
					if (bLocal_228)
					{
						Function_161(&iLocal_229, 34, 0, 4294967295, 4294967295);
					}
					Function_70(&bLocal_158, &Global_54076);
					iLocal_246 = 0;
				}
				break;
			}
	}
	return;
}

void Function_72(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x4BCA / 19402
{
	bParam1 = &bParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_78(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &bParam2, &bParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &bParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_73(var uParam0, float fParam1) //Position: 0x4C77 / 19575
{
	if (Function_76(&uParam0))
	{
		if (Function_74(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_74(vector3 vParam0) //Position: 0x4C95 / 19605
{
	if (Function_76(&vParam0))
	{
		if (Function_75(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_75(int iParam0) //Position: 0x4D62 / 19810
{
	return Function_26(iParam0, 2);
}

bool Function_76(int iParam0) //Position: 0x4D70 / 19824
{
	return Function_26(iParam0, 1);
}

bool Function_77(int iParam0) //Position: 0x4D7E / 19838
{
	if (GET_LAST_ATTACKER(&bLocal_158) == &Global_54076)
	{
		return 1;
	}
	if (bLocal_33)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(&bLocal_158))
	{
		if (Function_78(&Global_54076, &bLocal_158) > 12.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_78(bool bParam0, bool bParam1) //Position: 0x4DD1 / 19921
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&bParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_79(int iParam0) //Position: 0x4EC6 / 20166
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_54(409, 1, 0, 0);
	}
	return;
}

void Function_80(var uParam0, var uParam1) //Position: 0x4EF7 / 20215
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(&uParam0, &uParam1, &uVar0);
	return;
}

void Function_81() //Position: 0x4F10 / 20240
{
	int iVar0;
	
	bLocal_228 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_82(3);
		if (iVar0 == 0)
		{
			iLocal_226 = "FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_226 = "FTR_SONG_02";
		}
		else if (iVar0 == 2)
		{
			iLocal_226 = "FTR_SONG_04";
		}
	}
	else if (Global_43787 == 2)
	{
		iLocal_226 = "NRT_SONG_05";
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_82(3);
		if (iVar0 == 0)
		{
			iLocal_226 = "MEX_SONG_04";
		}
		else if (iVar0 == 1)
		{
			iLocal_226 = "MEX_SONG_06";
		}
		else
		{
			iLocal_226 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_226, "IDLE", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_229 = 1;
	return;
}

int Function_82(bool bParam0) //Position: 0x4FFC / 20476
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_83(var uParam0, int[] iParam1, int iParam2) //Position: 0x5015 / 20501
{
	switch (uParam0)
	{
		case 0x00000000:
			if (!Function_5(&bLocal_158, 0))
			{
				if (bLocal_228)
				{
					Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
				}
				iLocal_36 = 1;
				ADD_COMPANION_PERMANENT();
				uParam0 = 4;
				break;
			}
			if (iLocal_38 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					if (Function_78(&Global_54076, &bLocal_158) > 55.0f)
					{
						SET_ACTOR_VISION_MAX_RANGE(&bLocal_158, 80.0f, 1);
						SET_ACTOR_VISION_FIELD_OF_VIEW(&bLocal_158, 359.0f);
						GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_27));
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 1);
						DELETE_ALL_WEAPONS_FROM_ACTOR(&(iParam1[0]));
						TASK_CLEAR(&bLocal_158);
						MEMORY_IDENTIFY(&bLocal_158, &Global_54076);
						Function_81();
						AI_GOAL_LOOK_AT_ACTOR(&bLocal_158, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
						TASK_FACE_ACTOR(&bLocal_158, &Global_54076, 1, -1.0f);
						Function_230(&uLocal_46, 0.0f);
						Function_79(1);
						uParam0 = 1;
					}
				}
			}
			else if (IS_ACTOR_VALID(&bLocal_158))
			{
				if (Function_78(&Global_54076, &bLocal_158) >= 25.0f)
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_27));
					AI_QUICK_EXIT_GRINGO(&bLocal_158, 1);
					Function_230(&uLocal_46, 0.0f);
					uParam0 = 3;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_73(&uLocal_46, 1.0f))
			{
				TASK_FACE_ACTOR(&bLocal_158, &Global_54076, 1, 3212836864);
			}
			if (Function_73(&uLocal_46, 2.0f))
			{
				if (Function_121(&bLocal_158, &Global_54076, 0x3f000000))
				{
					ADD_BLIP_FOR_ACTOR(&bLocal_158, 325, 0.0f, 3, 0);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_158, "crazy_hermit_waiving_over", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_158, "crazy_hermit_waiving_over/wave");
					CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bLocal_158);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_158);
					Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg04", "eventCrazyHermit_msg04", 5, 60, 1, 1);
					Function_230(&uLocal_46, 0.0f);
					uParam0 = 3;
				}
			}
			if (IS_ACTOR_VALID(&bLocal_158))
			{
				if (Function_78(&Global_54076, &bLocal_158) > 15.0f)
				{
					Function_230(&uLocal_46, 0.0f);
					uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_71();
			if (iLocal_250 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					if ((bLocal_33 && iLocal_31 != 0) || iLocal_38)
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_158, 13, 0);
						COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&bLocal_158, 0.0f, 0.0f);
						AI_RESET_FIRING_FSM(&bLocal_158);
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 1);
						AI_QUICK_EXIT_GRINGO(&bLocal_158, 1);
						Function_124(&bLocal_158);
						TASK_CLEAR(&bLocal_158);
						if (bLocal_228)
						{
							Function_161(&iLocal_229, 34, 0, 4294967295, 4294967295);
						}
						Function_70(&bLocal_158, &Global_54076);
						Function_120(&bLocal_158, &Global_54076, 4, 1);
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_158, 1);
						UNK_0x99AFD2D1(&bLocal_158, 0, 0);
						Function_122(&bLocal_158);
						ADD_BLIP_FOR_ACTOR(&bLocal_158, 322, 0.0f, 3, 0);
						iLocal_31 = 1;
						iLocal_250 = 1;
					}
					else if (Function_78(&Global_54076, &bLocal_158) > 12.0f && iLocal_31 != 0)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(&bLocal_158))
						{
							iLocal_31 = 1;
							if (IS_BLIP_VALID(&uLocal_50))
							{
								REMOVE_BLIP(&uLocal_50);
							}
							AI_QUICK_EXIT_GRINGO(&bLocal_158, 1);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_158, 13, 0);
							COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&bLocal_158, 0.0f, 0.0f);
							AI_RESET_FIRING_FSM(&bLocal_158);
							Function_124(&bLocal_158);
							TASK_CLEAR(&bLocal_158);
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 1);
							Function_122(&bLocal_158);
							ADD_BLIP_FOR_ACTOR(&bLocal_158, 322, 0.0f, 3, 0);
							if (bLocal_228)
							{
								Function_161(&iLocal_229, 34, 0, 4294967295, 4294967295);
							}
							Function_70(&bLocal_158, &Global_54076);
							Function_120(&bLocal_158, &Global_54076, 4, 1);
							Function_230(&uLocal_46, 0.0f);
							iLocal_40 = 1;
							Function_122(&bLocal_158);
							ADD_BLIP_FOR_ACTOR(&bLocal_158, 322, 0.0f, 3, 0);
							CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bLocal_158);
							CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_158);
							Function_72(&bLocal_158, &Global_54076, "eventCrazyHermit_msg05", "eventCrazyHermit_msg05", 5, 60, 1, 1);
							AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_158, 1);
							UNK_0x99AFD2D1(&bLocal_158, 0, 0);
							iLocal_250 = 1;
							TASK_PRIORITY_SET(&bLocal_158, true);
						}
					}
				}
			}
			else if (iLocal_38 == 1)
			{
				if (iLocal_41 == 0)
				{
					if (Function_78(&Global_54076, &bLocal_158) > 30.0f)
					{
						AI_QUICK_EXIT_GRINGO(&bLocal_158, 1);
						if (bLocal_228)
						{
							Function_161(&iLocal_229, 34, 0, 4294967295, 4294967295);
						}
						Function_70(&bLocal_158, &Global_54076);
						iLocal_41 = 1;
					}
				}
			}
			if (iLocal_38 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_158))
				{
					if (Function_78(&Global_54076, &bLocal_158) < 55.0f || (Function_73(&uLocal_46, 10.0f) && Function_78(&Global_54076, &bLocal_158) < 30.0f))
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_27)))
						{
							if (bLocal_228)
							{
								Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
							}
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_158, 1);
							TASK_CLEAR(&bLocal_158);
							TASK_USE_GRINGO(&bLocal_158, GET_GRINGO_FROM_OBJECT(&uLocal_27), "UseCase1", 4294967295, 1);
						}
						iLocal_38 = 1;
						Function_122(&bLocal_158);
						uParam0 = 0;
					}
				}
			}
			if (IS_ACTOR_VALID(&bLocal_158))
			{
				if (Function_69(&bLocal_158, &bLocal_35))
				{
					Function_72(&Global_54076, &bLocal_158, "eventCrazyHermitPlayer_msg01", "eventCrazyHermitPlayer_msg01", 5, 60, 1, 1);
					if (Function_5(&(iParam1[0]), 0))
					{
						if ((IS_ACTOR_VALID(&(iParam1[0])) && Function_78(&(iParam1[0]), &Global_54076) > 30.0f) && IS_ACTOR_HOGTIED(&(iParam1[0])))
						{
							if (bLocal_228)
							{
								Function_161(&iLocal_229, 1, 0, 4294967295, 4294967295);
							}
							iLocal_36 = 1;
							ADD_COMPANION_PERMANENT();
							uParam0 = 4;
						}
						else if (Function_5(&(iParam1[0]), 0) && !IS_ACTOR_HOGTIED(&(iParam1[0])))
						{
							if (iLocal_37 == 1)
							{
								return 1;
							}
							Function_230(&uLocal_42, 0.0f);
							uParam0 = 5;
						}
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 0x00000004:
			Function_71();
			if (IS_ACTOR_VALID(&(iParam1[0])))
			{
				if (IS_ACTOR_HOGTIED(&(iParam1[0])))
				{
					if (!Function_118(&(iParam1[0]), &iLocal_221))
					{
						if (iLocal_32 && Function_78(&(iParam1[0]), &Global_54076) > 35.0f)
						{
							ADD_COMPANION_PERMANENT();
							AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_54076, 428, 0);
							iLocal_36 = 1;
							STOP_PED_SPEAKING(&(iParam1[0]), 1);
							STOP_PED_SPEAKING(&(iParam1[0]), 0);
							Function_72(&(iParam1[0]), &Global_54076, "eventCrazyHermit_msg06", "eventCrazyHermit_msg06", 5, 60, 1, 1);
							ADD_BLIP_FOR_ACTOR(&(iParam1[0]), 325, 0.0f, 3, 0);
							iLocal_32 = 0;
						}
					}
				}
				iLocal_166 = 0;
				if (Function_118(&(iParam1[0]), &iLocal_221))
				{
					if (GET_LAST_ATTACKER(&(iParam1[0])) != &Global_54076)
					{
						MEMORY_CLEAR_EVENTS(&(iParam1[0]), 0);
						Function_122(&(iParam1[0]));
						Function_230(&uLocal_42, 0.0f);
						uParam0 = 5;
					}
					else if (GET_LAST_ATTACKER(&(iParam1[0])) == &Global_54076)
					{
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000005:
			Function_71();
			if (Function_85(&(iParam1[0]), &Global_54076, &uLocal_152, &iLocal_34, &iLocal_239, iParam2))
			{
				if (iLocal_34 == 1)
				{
					if (iLocal_36 == 1)
					{
						AUDIO_ENABLE_PLAYER_TAUNTS();
						iLocal_36 = 0;
					}
					if (Function_5(&bLocal_158, 0))
					{
						Function_30(100, 1, 0);
					}
					else
					{
						Function_30(50, 1, 0);
					}
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(iParam1[0]), 1);
					UNK_0x99AFD2D1(&(iParam1[0]), 0, 0);
					MEMORY_CLEAR_ALL(&(iParam1[0]));
					Function_84(&(iParam1[0]), 4, 0, 1);
					return 1;
				}
			}
			if (Function_5(&(iParam1[0]), 0))
			{
				Function_84(&(iParam1[0]), 4, 0, 1);
			}
			return 1;
			break;
	}
	return 0;
}

int Function_84(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x57A2 / 22434
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_11(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_11(&uParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_85(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x5890 / 22672
{
	int iVar0;
	
	iVar0 = 30;
	iLocal_166 = 0;
	if (uParam4 <= 0 && uParam4 > 3)
	{
		if (Function_5(&bParam0, 0))
		{
			if (Function_78(&bParam0, &bParam1) < IntToFloat(iVar0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				return 0;
			}
		}
	}
	if (uParam4 <= 0 && uParam4 >= 3)
	{
		if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 0;
		}
	}
	switch (uParam4)
	{
		case 0x00000000:
			MEMORY_CLEAR_EVENTS(&bParam0, 0);
			ACTOR_START_FORCE_HOLSTER(&bParam0, 1, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bParam0, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
			Function_129(&bParam0);
			Local_243 = Function_129(&bParam0);
			uLocal_240 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uLocal_152, Function_231(), "$/content/scripting/gringo/SimpleGringo/Emo_hug", Local_243, Vector(0.0f, 0.0f, 0.0f));
			SNAP_OBJECT_TO_GROUND(&uLocal_240, 7.0f, 1, 1092616192);
			Local_243 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(6.0f, 0.0f, 0.0f), Local_243, StackVal);
			Function_117(StackVal, Local_243);
			uParam4 = 3;
			break;
		
		case 0x00000003:
			if (iLocal_242 == 0)
			{
				if (Function_73(&uLocal_42, 3,3f) || DECOR_CHECK_EXIST(&Global_54076, "RunNewCamera"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
					AI_QUICK_EXIT_GRINGO(&bParam0, 1);
					AI_QUICK_EXIT_GRINGO(&Global_54076, 1);
					MAKE_ACTOR_READY_FOR_ACTION(&bParam0, 1);
					MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
					Function_112(&uParam2, &uLocal_224, &bLocal_39);
					Function_110(&uLocal_224, &uLocal_184, &uLocal_187);
					if (DECOR_CHECK_EXIST(&Global_54076, "RunNewCamera"))
					{
						DECOR_REMOVE(&Global_54076, "RunNewCamera");
					}
					iLocal_242 = 1;
				}
			}
			if (IS_ACTOR_ALIVE(&bParam0))
			{
				if (!FIRE_IS_ACTOR_ON_FIRE(&bParam0))
				{
					if (!IS_ACTOR_HOGTIED(&bParam0))
					{
						if (Function_108())
						{
							if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
							{
								if (Function_86(&iLocal_238, &bParam0, &uParam2, uParam5))
								{
									uParam4 = 4;
								}
							}
						}
					}
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				uParam4 = 6;
			}
			iLocal_166 = 0;
			break;
		
		case 0x00000004:
			uParam4 = 5;
			break;
		
		case 0x00000005:
			uParam4 = 6;
			break;
		
		case 0x00000006:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			uParam3 = 1;
			return 1;
			break;
	}
	return 1;
}

bool Function_86(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x5ADB / 23259
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	int iVar6;
	
	iVar6 = 1;
	if (IS_ACTOR_VALID(&bParam1))
	{
		if (!IS_ACTOR_ALIVE(&bParam1))
		{
			if (uParam0 >= 0)
			{
				Function_102(&uLocal_224, &bLocal_39);
				ACTOR_END_FORCE_HOLSTER(&Global_54076);
				return 1;
			}
		}
	}
	switch (uParam0)
	{
		case 0x00000000:
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
			RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
			Function_129(&Global_54076);
			Function_101(StackVal, &uParam2, Function_129(&Global_54076));
			Function_230(&uLocal_46, 0.0f);
			AI_GOAL_LOOK_AT_ACTOR(&Global_54076, &bParam1, 0, 1065353216, 3212836864, 3212836864, 0);
			Function_100(&uLocal_52);
			uVar0 = Function_100(&uLocal_52);
			Function_98(&uVar0, 5.0f, &Var2, &uVar4, &iVar6);
			SET_OBJECT_POSITION(&bParam1, Var2);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Global_54076, 1);
			Function_95(&bParam1, &Global_54076);
			Function_94(&bParam1, 0);
			Function_89(20, 1, 0);
			Function_30(50, 1, 0);
			Function_88(uParam3, 1, 1);
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam1);
			if (IS_ACTOR_MALE(&bParam1))
			{
				SET_LINKED_ANIM_TARGET(&Global_54076, &bParam1);
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "emo_hug", 0);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "emo_hug/emo_hug");
				Function_230(&uLocal_46, 0.0f);
				uParam0 = 1;
			}
			else
			{
				SET_LINKED_ANIM_TARGET(&Global_54076, &bParam1);
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "stand_shakehands", 0);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "stand_shakehands/hug");
				CLEAR_ALTERNATE_SPEECH_CONTEXT_FOR_PAIN(&bParam1);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bParam1);
				Function_72(&bParam1, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				Function_230(&uLocal_46, 0.0f);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			Function_87(&bParam1);
			if (Function_73(&uLocal_46, 2.0f))
			{
				Function_110(&uLocal_224, &uLocal_190, &iLocal_193);
				Function_230(&uLocal_46, 0.0f);
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&bParam1), 0,5f, 0, 1092616192);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			Function_87(&bParam1);
			if (IS_ACTOR_MALE(&bParam1))
			{
				if (Function_73(&uLocal_46, 2.0f))
				{
					Function_72(&Global_54076, &bParam1, "eventCrazyHermitPlayer_msg02", "eventCrazyHermitPlayer_msg02", 5, 60, 1, 1);
					Function_102(&uLocal_224, &bLocal_39);
					ACTOR_END_FORCE_HOLSTER(&Global_54076);
					return 1;
				}
			}
			if (Function_73(&uLocal_46, 2.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bParam1, 0);
				Function_72(&Global_54076, &bParam1, "eventCrazyHermitPlayer_msg02", "eventCrazyHermitPlayer_msg02", 5, 60, 1, 1);
				Function_102(&uLocal_224, &bLocal_39);
				ACTOR_END_FORCE_HOLSTER(&Global_54076);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_87(bool bParam0) //Position: 0x5DC0 / 24000
{
	switch (iLocal_230)
	{
		case 0x00000000:
			if (Function_5(&bParam0, 0))
			{
				if (IS_ACTOR_MALE(&bParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&bParam0))
					{
						if (Function_78(&bParam0, &Global_54076) > 50.0f)
						{
							Function_230(&uLocal_232, 0.0f);
							fLocal_237 = 0,5f;
							iLocal_230 = 1;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (Function_5(&bParam0, 0))
			{
				if (Function_73(&uLocal_232, fLocal_237))
				{
					if (Function_78(&bParam0, &Global_54076) > 40.0f)
					{
						Function_72(&bParam0, &Global_54076, "Major_Shock", 0, 5, 60, 1, 1);
						iLocal_230 = 0;
					}
				}
			}
			else
			{
				iLocal_230 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

int Function_88(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5E7D / 24189
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_54(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_54(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_66(597) + Function_66(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_89(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F4F / 24399
{
	int iVar0;
	bool bVar1;
	
	if (Function_68(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_67())
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
	iVar0 = Function_66(3);
	Function_91();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_65(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_64(Global_119936, 4))
			{
				Function_58(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_54(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_39(3));
	iVar0 = Function_66(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_32(4, Function_90(Global_21369.f_248), 1);
				Function_31(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_32(4, Function_90(Global_21369.f_248), 1);
				Function_31(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_32(4, Function_90(Global_21369.f_248), 1);
				Function_31(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_32(4, Function_90(Global_21369.f_248), 1);
				Function_31(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_32(4, Function_90(Global_21369.f_248), 1);
				Function_31(Global_21369.f_244, Global_21369.f_248);
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

var Function_90(int iParam0) //Position: 0x6123 / 24867
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

void Function_91() //Position: 0x61B2 / 25010
{
	Function_93(3, 0.0f);
	Function_92(3, 10000.0f);
	return;
}

int Function_92(int iParam0, int iParam1) //Position: 0x61C8 / 25032
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_93(int iParam0, int iParam1) //Position: 0x6208 / 25096
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

void Function_94(var uParam0, bool bParam1) //Position: 0x6248 / 25160
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_95(var uParam0, int iParam1) //Position: 0x626D / 25197
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_96(StackVal, &uParam0, Var0);
	return;
}

void Function_96(bool bParam0, struct<2> Param1) //Position: 0x6289 / 25225
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_97(&bParam0, &bParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_97(GET_MOUNT(&bParam0), &bParam0, Param1), 1);
	}
	return;
}

var Function_97(bool bParam0, struct<2> Param1) //Position: 0x62C4 / 25284
{
	struct<2> Var0;
	
	Function_129(&bParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_129(&bParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

int Function_98(vector3 vParam0) //Position: 0x6345 / 25413
{
	struct<2> Var0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var0);
		if (VDIST(vParam0, Var0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_99(StackVal, Param2))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_99(StackVal, Param2))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_99(vector3 vParam0) //Position: 0x63E2 / 25570
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_100(int iParam0) //Position: 0x63FA / 25594
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_101(var uParam0, struct<2> Param1) //Position: 0x6423 / 25635
{
	iLocal_222 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_231(), 0f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 35.0f, 30.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_222);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_222);
	return;
}

void Function_102(var uParam0, bool bParam1) //Position: 0x645A / 25690
{
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&Global_54076), 1.0f, 0, 1092616192);
	Function_103(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	REMOVE_CAMERA_FROM_CHANNEL(&uParam0, 0);
	DESTROY_CAMERA(&uParam0);
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	bParam1 = 0;
	return;
}

void Function_103(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x649F / 25759
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_107();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_54(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_106();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_104(&uParam9, &uParam10);
}

void Function_104(var uParam0, bool bParam1) //Position: 0x656E / 25966
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_105();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_105() //Position: 0x663D / 26173
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_106() //Position: 0x66B5 / 26293
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

var Function_107() //Position: 0x66CA / 26314
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_108() //Position: 0x66DF / 26335
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (IS_ACTOR_ON_LADDER(&Global_54076))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFTED(&Global_54076))
		{
			return 0;
		}
		if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				return 0;
			}
		}
		if (Function_109())
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

bool Function_109() //Position: 0x672C / 26412
{
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
	{
		return 1;
	}
	return 0;
}

void Function_110(var uParam0, struct<2> Param1) //Position: 0x6742 / 26434
{
	float fVar0;
	struct<2> Var1;
	
	fVar0 = Function_111(&Global_54076);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&Global_54076), Param1, &Var1);
	SET_CAMERA_POSITION(&uParam0, Var1);
	SET_CAMERA_ORIENTATION(StackVal, &uParam0, Vector(vParam2, (vParam2.y + fVar0), vParam2.z), 0);
	return;
}

var Function_111(int iParam0) //Position: 0x6786 / 26502
{
	return GET_HEADING(&iParam0);
}

void Function_112(var uParam0, var uParam1, float fParam2) //Position: 0x6792 / 26514
{
	struct<2> Var0;
	var uVar2;
	
	fParam2 = 1;
	uParam1 = CREATE_CAMERA_IN_LAYOUT(&uParam0, Function_231(), 0);
	SET_ACTOR_POSTURE(&Global_54076, 0);
	Function_129(&Global_54076);
	Var0 = Function_129(&Global_54076);
	CLEAR_AMBIENT_OBJECTS_SPHERE(Var0, 10.0f, 39);
	Function_152();
	uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, Function_231(), 2,802597E-45f, Var0, Function_152(), Vector(10.0f, 10.0f, 10.0f));
	DELETE_PROJECTILES_IN_VOLUME(&uVar2);
	DESTROY_VOLUME(&uVar2);
	Function_113(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	SET_CURRENT_CAMERA_ON_CHANNEL(&uParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&uParam1);
	return;
}

void Function_113(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x6827 / 26663
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_106();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_107();
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (GET_WEAPON_IN_HAND(&bVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&bVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&bVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&bVar1, 0);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, 1);
			AI_IGNORE_ACTOR(&bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_129(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_231(), 2,802597E-45f, Function_129(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_54(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_25())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_116()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_116()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_115(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_114(0x4000000);
	}
	if (Function_115(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_114(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_114(int iParam0) //Position: 0x6AD9 / 27353
{
	int iVar0;
	
	if (Function_26(iParam0, 1) && Function_26(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_115(int iParam0) //Position: 0x6B0D / 27405
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_116() //Position: 0x6B29 / 27433
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_117(struct<2> Param0) //Position: 0x6BB7 / 27575
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	Function_129(&Global_54076);
	uVar1 = Function_129(&Global_54076);
	if (Function_127(StackVal, &Global_54076, Param0) > 10.0f)
	{
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &Param0, 1, 1, 1);
			TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			TELEPORT_ACTOR(&Global_54076, &uVar1, 1, 1, 1);
		}
	}
	return;
}

bool Function_118(var uParam0, int iParam1) //Position: 0x6C18 / 27672
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = DECOR_GET_OBJECT(&uParam0, "HogtiedGringoAttached");
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uVar1))
				{
					uVar0 = GET_ACTOR_FROM_OBJECT(Function_119(GET_GRINGO_FROM_OBJECT(&uVar1), "Cut_Free"));
					if (IS_ACTOR_VALID(&uVar0))
					{
						if (IS_ACTOR_LOCAL_PLAYER(&uVar0))
						{
							iParam1 = 1;
						}
					}
				}
			}
		}
	}
	if (iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

var Function_119(var uParam0, int iParam1) //Position: 0x6CA9 / 27817
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

int Function_120(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6CB8 / 27832
{
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&bParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&bParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &bParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &bParam0);
			}
		}
	}
	return 1;
}

bool Function_121(Vector3 vParam0, var uParam1, float fParam2) //Position: 0x6D18 / 27928
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&vParam0) && IS_ACTOR_VALID(&uParam1))
	{
		GET_POSITION(&vParam0, &Var0);
		GET_POSITION(&uParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&vParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

int Function_122(bool bParam0) //Position: 0x6DB7 / 28087
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_123(&bParam0);
		return 1;
	}
	return 0;
}

void Function_123(var uParam0) //Position: 0x6DCF / 28111
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

void Function_124(bool bParam0) //Position: 0x6E02 / 28162
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "nnostickup"))
		{
			DECOR_REMOVE(&bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
		TASK_PRIORITY_SET(&bParam0, 2);
	}
	return;
}

float Function_125(bool bParam0) //Position: 0x6E55 / 28245
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_126(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_126(float fParam0, int iParam1) //Position: 0x6E91 / 28305
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

float Function_127(bool bParam0, struct<2> Param1) //Position: 0x6F22 / 28450
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_128(&bParam0);
		Var0 = Function_128(&bParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_128(int iParam0) //Position: 0x6F99 / 28569
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

struct<8> Function_129(bool bParam0) //Position: 0x7005 / 28677
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_130(bool bParam0, var uParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x7017 / 28695
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
		fVar0 = Function_78(&bParam0, &Global_54076);
		if (!Function_26(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&bParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_131(&bParam0);
				return 1;
			}
		}
		if (!Function_26(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&bParam0, 1.0f))
			{
				uParam1 = 2;
				Function_131(&bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&bParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_131(&bParam0);
				return 1;
			}
		}
		if (!Function_26(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&bParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &bParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&bParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &bParam0 && MEMORY_GET_IS_VISIBLE(&bParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_131(&bParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_131(&bParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_26(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_131(&bParam0);
				return 1;
			}
		}
		if (!Function_26(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_131(&bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_131(int iParam0) //Position: 0x71E0 / 29152
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_132(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_132(bool bParam0) //Position: 0x721D / 29213
{
	SAY_SINGLE_LINE_CONTEXT(&bParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_133(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x7236 / 29238
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_78(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_136() && !uParam2)
		{
			return 0;
		}
		if (Function_135(iParam0) && !uParam2)
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
		if (!Function_134(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x7379 / 29561
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

int Function_135(int iParam0) //Position: 0x739A / 29594
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

int Function_136() //Position: 0x73DA / 29658
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
						if (Function_137(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_137(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_137(int iParam0, var uParam1) //Position: 0x749D / 29853
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_128(&iParam0);
			Var0 = Function_128(&iParam0);
			Function_138(&uParam1);
			Var2 = Function_138(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_138(bool bParam0) //Position: 0x753F / 30015
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		GET_OBJECT_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_139(struct<2> Param0, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x75AD / 30125
{
	int iVar0;
	
	iVar0 = 0;
	if (!iParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &iParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			iParam2 = 1;
		}
	}
	else if (!Function_99(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &iParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			iParam2 = 1;
		}
	}
	if (iParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_151(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_150(0);
		}
		if (&bParam7)
		{
			Function_148(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_146(iParam3);
			Global_6644 = 1;
		}
		Function_144(iParam3);
		if (Function_143(StackVal, 32768))
		{
			Function_140(1);
		}
		Global_26652[iParam34].f_16++;
		Function_54(408, 1, 0, 0);
	}
}

void Function_140(bool bParam0) //Position: 0x76C2 / 30402
{
	if (bParam0)
	{
		Function_142(0x10000000);
	}
	else
	{
		Function_141(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_141(int iParam0) //Position: 0x76E7 / 30439
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_142(int iParam0) //Position: 0x7704 / 30468
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_143(var uParam0, int iParam1) //Position: 0x7717 / 30487
{
	return (uParam0 && iParam1) == 0;
}

void Function_144(int iParam0) //Position: 0x7724 / 30500
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_26(StackVal, 524288))
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
			bVar1 = Function_145(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_145(int iParam0) //Position: 0x77CA / 30666
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_146(int iParam0) //Position: 0x77E1 / 30689
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
	Function_147(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_147(vector3 vParam0) //Position: 0x7880 / 30848
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x789C / 30876
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
			Function_149(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_149(struct<113> Param0) //Position: 0x7923 / 31011
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

void Function_150(int iParam0) //Position: 0x7981 / 31105
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_145(900)), 0);
	return;
}

void Function_151(var uParam0) //Position: 0x79A5 / 31141
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&uParam0 + Function_145(200)), 0);
	return;
}

struct<8> Function_152() //Position: 0x79C8 / 31176
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_153(int iParam0) //Position: 0x79D2 / 31186
{
	switch (iLocal_258)
	{
		case 0x00000000:
			if (iLocal_55 == 0)
			{
				GET_OBJECT_POSITION(&uLocal_29, &Local_214);
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Vector(-1,5f, 0,3f, 0,3f), Local_214, 0), 0,6f, 1, 1);
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Vector(1,5f, 0,3f, -1.0f), Local_214, 0), 0,6f, 1, 1);
				CREATE_DECAL(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0,5f, 0,3f, 1,2f), Local_214, 0), 0,6f, 1, 1);
				iParam0 = 0;
				iLocal_258 = 1;
			}
			else
			{
				iLocal_258 = 3;
			}
			break;
		
		case 0x00000001:
			iLocal_258 = 2;
			break;
		
		case 0x00000002:
			iLocal_258 = 3;
			break;
		
		case 0x00000003:
			return 1;
			break;
	}
	return 0;
}

void Function_154(var uParam0, bool bParam1) //Position: 0x7A8A / 31370
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_155(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5) //Position: 0x7A9B / 31387
{
	var uVar0;
	var uVar1;
	var uVar2[6];
	bool bVar9;
	int iVar10;
	char* cVar11[32];
	
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Param1, 1.0f, "p_gen_footlockerfull01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		uVar1 = GET_OBJECT_FROM_PHYSINST(&uVar0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			ROTATE_OBJECT_UPRIGHT_TO_GROUND(&uVar1, 1, 5.0f);
		}
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GringoDollarAmt", Function_228(&iParam3, 1, 1, 0, 0));
	Function_164(GET_OBJECT_FROM_GRINGO(&uParam0));
	if (&iParam4 == 4294967295)
	{
		bVar9 = false;
		Function_158(&Global_54076, &uVar2, &bVar9);
		if (bVar9 >= 0)
		{
			PRINTINT(bVar9);
			iVar10 = RAND_INT_RANGE(0, (bVar9 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar2[iVar10]));
			iParam4 = Function_157(&Global_54076, uVar2[iVar10]);
		}
		else
		{
			LOG_ERROR("Player has no valid weapon categories");
		}
	}
	else
	{
		iParam4 = Function_157(&Global_54076, &iParam4);
	}
	if (&iParam4 == 4294967295)
	{
		LOG_ERROR("Trying to give invalid ammo");
	}
	strcpy(&cVar11, "Ammo_", 32);
	straddi(&cVar11, GET_AMMO_ENUM(&iParam4), 32);
	PRINTSTRING(&cVar11);
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), &cVar11, FLOOR((2.0f * GET_WEAPON_MAX_AMMO(&iParam4))));
	if (&iParam5 == 4294967295)
	{
		iParam5 = Function_156();
	}
	DECOR_SET_INT(GET_OBJECT_FROM_GRINGO(&uParam0), "GiveItem", &iParam5);
}

int Function_156() //Position: 0x7C24 / 31780
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 6);
	if (iVar0 == 0)
	{
		iVar1 = 3;
	}
	else if (iVar0 == 1)
	{
		iVar1 = 1;
	}
	else if (iVar0 == 2)
	{
		iVar1 = 0;
	}
	else if (iVar0 == 3)
	{
		iVar1 = 2;
	}
	else if (iVar0 == 4)
	{
		iVar1 = 8;
	}
	else if (iVar0 == 5)
	{
		iVar1 = 6;
	}
	else
	{
		iVar1 = 7;
	}
	return iVar1;
}

int Function_157(var uParam0, int iParam1) //Position: 0x7C7F / 31871
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_158(var uParam0, int[] iParam1, bool bParam2) //Position: 0x7C91 / 31889
{
	bParam2 = 0;
	if (Function_157(&uParam0, 39) != 4294967295)
	{
		iParam1[bParam2] = 39;
		bParam2++;
	}
	if (Function_157(&uParam0, 41) != 4294967295)
	{
		iParam1[bParam2] = 41;
		bParam2++;
	}
	if (Function_157(&uParam0, 40) != 4294967295)
	{
		iParam1[bParam2] = 40;
		bParam2++;
	}
	if (Function_157(&uParam0, 42) != 4294967295)
	{
		iParam1[bParam2] = 42;
		bParam2++;
	}
	if (Function_157(&uParam0, 43) != 4294967295)
	{
		iParam1[bParam2] = 43;
		bParam2++;
	}
	if (Function_157(&uParam0, 48) != 4294967295)
	{
		iParam1[bParam2] = 48;
		bParam2++;
	}
	if (Function_157(&uParam0, 44) != 4294967295)
	{
		iParam1[bParam2] = 44;
		bParam2++;
	}
	return;
}

void Function_159(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x7D83 / 32131
{
	var uVar0[5];
	int iVar6;
	
	if (uParam0 != 4294967295)
	{
		uParam0 = CLEAR_AREA_OF_TREE_TYPE(Param4, (fParam3 + 2.0f), "");
	}
	if (uParam1 != 4294967295)
	{
		uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(Param4, (fParam3 + 2.0f));
	}
	if (uParam2 != 4294967295)
	{
		uParam2 = CLEAR_AREA_OF_GRASS(Param4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (Function_160(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(&(uVar0[iVar6])))
				{
					DESTROY_OBJECT(&(uVar0[iVar6]));
				}
				iVar6++;
			}
		}
	}
}

int Function_160(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x7E2E / 32302
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&cParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar4, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar4, &uParam1);
		iVar3 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (IS_OBJECT_VALID(&iVar3))
			{
				GET_OBJECT_POSITION(&iVar3, &Var1);
				if (VDIST(Param5, Var1) > fParam3)
				{
					cParam2[iVar0] = &iVar3;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(&uVar4);
						return iVar0;
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		DESTROY_ITERATOR(&uVar4);
		return iVar0;
	}
	return iVar0;
}

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7ED4 / 32468
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_162(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_162(int iParam0) //Position: 0x7EFE / 32510
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
	return &iVar0;
}

void Function_163(int iParam0) //Position: 0x854E / 34126
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 15)
	{
		return;
	}
	AI_SET_ENABLE_STICKUP_OVERRIDE(GET_ACTOR_FROM_OBJECT(&iParam0), 0);
	return;
}

void Function_164(bool bParam0) //Position: 0x8577 / 34167
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

var Function_165(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x85AE / 34222
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					iVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, iVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

void Function_166(int iParam0, bool bParam1) //Position: 0x8705 / 34565
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	DECOR_SET_INT(&iParam0, "honor", bParam1);
	return;
}

struct<8> Function_167(vector3 vParam0) //Position: 0x8727 / 34599
{
	struct<2> Var0;
	
	Var0 = (-1.0f * (ATAN2_DEGREE(vParam0.y, vParam0.z) - 90.0f));
	Var0.f_4 = 0.0f;
	Var0.f_8 = (ATAN2_DEGREE(vParam0.y, vParam0.x) - 90.0f);
	return StackVal, Var0;
}

float Function_168() //Position: 0x875E / 34654
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_126(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_169(struct<65> Param0) //Position: 0x878F / 34703
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_205(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_203(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_170(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_23("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_23("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_21(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_205(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_203(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_170(struct<73> Param0) //Position: 0x8B4D / 35661
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_202(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_125(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_125(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_201(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_200(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_199(StackVal, &Param0 + 8, Var7, Function_168());
				}
				else
				{
					uVar0 = Function_198(StackVal, &Param0 + 8, Var7, Function_168(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_202(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_197(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_125(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_196(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_195(&Var7, &uVar5);
				Var3 = Function_195(&Var7, &uVar5);
				if (!Function_99(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_126(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_192(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_188(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_187(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_186(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_26(StackVal, 131072))
				{
					if (StackVal || Function_185(Function_185(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_184(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_180(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_179((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_179((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_178(&Var12);
				*(&Param0 + 16) = Function_178(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, iVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_187(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_186(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_187(Function_186(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_26(StackVal, 131072))
			{
				if (StackVal || Function_185(Function_185(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_180(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_175((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_172(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_172(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					Param0.f_56 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_171(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_171(struct<2> Param0) //Position: 0x9414 / 37908
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_172(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x944B / 37963
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!&bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_173(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_173(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_173(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_173(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_173(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_173(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_173(&Global_11826, &Global_13998, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_173(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_173(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_173(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_173(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_173(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_173(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_173(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_173(&Global_12472, &Global_14954, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_46760[0])
	{
		return Function_173(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_173(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_173(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_173(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_173(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_173(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_173(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_173(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_173(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_173(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_173(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_173(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_173(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_173(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_173(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_173(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_173(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_173(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_173(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_173(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_173(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_173(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_173(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_173(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_173(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_173(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_173(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x9A61 / 39521
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_174(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_174(var uParam0, int iParam1) //Position: 0x9ABB / 39611
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_175(int iParam0) //Position: 0x9AD8 / 39640
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_176(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_176(int iParam0) //Position: 0x9B40 / 39744
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_177(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

var Function_177(var uParam0) //Position: 0x9B7E / 39806
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

struct<8> Function_178(vector3 vParam0) //Position: 0x9BCB / 39883
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_179(int iParam0, int iParam1) //Position: 0x9BED / 39917
{
	if (&iParam1 != 0)
	{
		return &iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

bool Function_180(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x9C1F / 39967
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
	Function_182(4294967295);
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
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_181(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_181(struct<2> Param0) //Position: 0x9CFB / 40187
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_182(int iParam0) //Position: 0x9D1A / 40218
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
						Function_183(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_127(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_183(iVar0);
						}
					}
					else if (Function_127(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_183(iVar0);
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
			Function_183(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_183(int iParam0) //Position: 0x9E88 / 40584
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

bool Function_184(struct<2> Param0) //Position: 0x9EF0 / 40688
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_185(struct<2> Param0) //Position: 0x9F95 / 40853
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_186(struct<2> Param0) //Position: 0x9FE3 / 40931
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_187(struct<2> Param0) //Position: 0xA03E / 41022
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_188(bool bParam0) //Position: 0xA0BD / 41149
{
	float fVar0;
	bool bVar1;
	
	Function_126(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_191(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_189(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_189(struct<33> Param0) //Position: 0xA26F / 41583
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_190(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0xA39B / 41883
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_191(float fParam0) //Position: 0xA3EC / 41964
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_192(int iParam0, struct<2> Param1) //Position: 0xA433 / 42035
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_194();
	Function_191(0);
	Function_193(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_190(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_189(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_193(bool bParam0) //Position: 0xA5E8 / 42472
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_194() //Position: 0xA69B / 42651
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_195(struct<2> Param0) //Position: 0xA6AA / 42666
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	int iVar18;
	int iVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_178(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_178(&iVar18), StackVal);
		Function_178(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_178(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_126(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_178(&iVar21);
			Var8 = Function_178(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_178(&iVar18);
			Var8 = Function_178(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_196(struct<2> Param0, struct<5> Param2) //Position: 0xA7C4 / 42948
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_99(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_99(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(0);
	}
	return 0;
}

bool Function_197(bool bParam0) //Position: 0xA907 / 43271
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_198(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xA91D / 43293
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_180(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_199(var uParam0, struct<2> Param1, float fParam3) //Position: 0xA9D2 / 43474
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_180(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_200(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0xAA64 / 43620
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_201(var uParam0, struct<2> Param1, float fParam3) //Position: 0xAB06 / 43782
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

int Function_202(int iParam0) //Position: 0xAB8C / 43916
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_231());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_231());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_203(var uParam0, int iParam1) //Position: 0xABC2 / 43970
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
	Function_182(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_204(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_204(int iParam0, var uParam1, struct<2> Param2) //Position: 0xAD2C / 44332
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_207("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_205(var uParam0, struct<2> Param1) //Position: 0xADD4 / 44500
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_206(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_206(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0xAE02 / 44546
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_207(char* cParam0) //Position: 0xAE26 / 44582
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_208("0", &cVar8, ""), 4);
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

struct<32> Function_208(char* cParam0) //Position: 0xAE92 / 44690
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_209(struct<2>[] Param0) //Position: 0xAEB4 / 44724
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_213();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_212(&(Param0[iVar02]), 8);
		}
		else if (Function_211())
		{
			iVar1 = 1;
			Function_212(&(Param0[iVar02]), 8);
		}
		Function_212(&(Param0[iVar02]), 16);
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
				Function_212(&(Param0[iVar02]), 1);
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
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_212(&(Param0[iVar02]), 2);
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
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_212(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_212(&(Param0[iVar02]), 2);
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
	Function_210();
	return 1;
}

void Function_210() //Position: 0xB276 / 45686
{
	if (!Function_115(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_211() //Position: 0xB2B6 / 45750
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

void Function_212(struct<13> Param0) //Position: 0xB2E4 / 45796
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_213() //Position: 0xB2F7 / 45815
{
	if (!Function_115(128))
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

void Function_214(bool bParam0) //Position: 0xB339 / 45881
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

void Function_215(var[] uParam0, int iParam1) //Position: 0xB382 / 45954
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_214(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_216(int iParam0) //Position: 0xB3B4 / 46004
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

void Function_217(var[] uParam0, int iParam1) //Position: 0xB3FE / 46078
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_216(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB430 / 46128
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

void Function_219(var uParam0, var uParam1) //Position: 0xB4A8 / 46248
{
	return;
}

void Function_220() //Position: 0xB4AE / 46254
{
	return;
}

void Function_221(bool bParam0) //Position: 0xB4B4 / 46260
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_222() //Position: 0xB4BF / 46271
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_223(int iParam0) //Position: 0xB4D2 / 46290
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

var Function_224(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xB4F4 / 46324
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&iParam1, iParam2);
	iVar0 = Function_225(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_212(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_225(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB532 / 46386
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_212(&(Param0[iVar02]), 4);
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

var Function_226(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xB601 / 46593
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_212(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_212(&(Param0[iVar02]), 8);
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

var Function_227(int iParam0, int iParam1) //Position: 0xB6DD / 46813
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB6F3 / 46835
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_66(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_229(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

var Function_229(bool bParam0) //Position: 0xB7FA / 47098
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_230(vector3 vParam0) //Position: 0xB8EE / 47342
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_154(&vParam0, 1);
	Function_63(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_231() //Position: 0xB913 / 47379
{
	var uVar0;
	
	return &uVar0;
}

