//Decompiled with MagicRDR v1.0
//Function Count : 208
//Statics Count : 307
//Natives Count : 436
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
	int iLocal_9 = 0;
	var uLocal_10 = 12;
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
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	var uLocal_95 = 20;
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
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
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
	var uLocal_172 = 6;
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
	int iLocal_190 = 0;
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
	var uLocal_206 = 11;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
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
	var uLocal_228 = 11;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	bool bLocal_255 = false;
	bool bLocal_256 = false;
	bool bLocal_257 = false;
	bool bLocal_258 = true;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	bool bLocal_283 = false;
	bool bLocal_284 = false;
	bool bLocal_285 = false;
	bool bLocal_286[2] = { false, false };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	bool bLocal_291 = false;
	vector3 vLocal_292 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_295 = false;
	vector3 vLocal_296 = { 0.0f, 0.0f, 0.0f };
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = false;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_9 = 0;
	iLocal_159 = 0;
	iLocal_160 = 0;
	iLocal_190 = 0;
	iLocal_246 = 16;
	iLocal_247 = 0;
	vLocal_292 = { -3138.782f, 45.291f, 3383.388f };
	vLocal_296 = { -3121.788f, 46.104f, 3403.028f };
	iLocal_303 = 0;
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			iVar0 = 0;
			iLocal_248 = 1000;
			Function_207(&bLocal_258, 1202, 3, 0);
			Function_207(&bLocal_258, 1220, 3, 0);
			Function_207(&bLocal_258, 977, 3, 0);
			Function_207(&bLocal_258, 978, 3, 0);
			Function_207(&bLocal_258, 546, 3, 0);
			Function_205(&bLocal_258, "$/content/DLC/ZombiePack/Gringos/DLC_merchant_2_A", 1, 0);
			Function_205(&bLocal_258, "$/content/DLC/ZombiePack/Gringos/DLC_merchant_2_B", 1, 0);
			Function_205(&bLocal_258, "$/content/scripting/gringo/simplegringo/missionend_marstonsmoke", 1, 0);
			while (!IS_EXITFLAG_SET())
			{
				switch (iVar0)
				{
					case 0x00000000:
						if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
						{
							if (IS_LAYOUTREF_VALID(bLocal_255))
							{
								if (Function_200(&bLocal_258))
								{
									bLocal_285 = CREATE_ACTOR_IN_LAYOUT(bLocal_255, "Nigel", 546, *(&Global_63541[955] + 100), 0.0f, Global_63541[955].f_124, 0.0f);
									bLocal_283 = Function_196(bLocal_255, "RCM Merchant Coach", 1202, 977, -3121.0f, 46.1f, 3401.0f, 0.0f, 122.423f, 0.0f, 0, 978, 976, 976, 4);
									bLocal_284 = CREATE_ACTOR_IN_LAYOUT(bLocal_255, "RCM Merchant Zombie", 1220, -3121.0f, 46.1f, 3401.0f, 0.0f, 122.423f, 0.0f);
									bLocal_256 = CREATE_GRINGO_IN_LAYOUT(bLocal_255, "westDickensCower", "$/content/DLC/ZombiePack/Gringos/DLC_merchant_2_A", -3121.0f, 46.1f, 3401.0f, 0.0f, 122.423f, 0.0f);
									AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_285, false);
									AI_IGNORE_ACTOR(bLocal_284);
									SET_ACTOR_OVERHEALTH_MODE(bLocal_284, true);
									SET_ACTOR_INVULNERABILITY(bLocal_283, 1);
									TELEPORT_ACTOR_WITH_HEADING(bLocal_285, -3121.0f, 48.6f, 3401.0f, 190.083f, 1, true, 1);
									SNAP_ACTOR_TO_GRINGO(bLocal_285, bLocal_256, "UseCase1", 1, 0, 0);
									TASK_USE_GRINGO(bLocal_285, GET_GRINGO_FROM_OBJECT(bLocal_256), "UseCase1", 4294967295, 1);
									TASK_PRIORITY_SET(bLocal_285, 1);
									bLocal_257 = CREATE_GRINGO_IN_LAYOUT(bLocal_255, "zombieGringo", "$/content/DLC/ZombiePack/Gringos/DLC_merchant_2_B", -3121.0f, 46.1f, 3401.0f, 0.0f, 122.423f, 0.0f);
									SNAP_ACTOR_TO_GRINGO(bLocal_284, bLocal_257, "UseCase1", 1, 0, 0);
									TASK_USE_GRINGO(bLocal_284, GET_GRINGO_FROM_OBJECT(bLocal_257), "UseCase1", 4294967295, 1);
									TASK_PRIORITY_SET(bLocal_284, 1);
									DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_285);
									bLocal_295 = CREATE_VOLUME_IN_LAYOUT(bLocal_255, "ZombiesStayOut", 2, *(&Global_63541[955] + 100), 0.0f, Global_63541[955].f_124, 0.0f, 20.0f, 20.0f, 20.0f);
									ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_295);
									ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_295);
									SET_ACTOR_FACTION(bLocal_285, 20);
									if (IS_ACTOR_VALID(bLocal_283))
									{
										bVar1 = false;
										while (bVar1 <= GET_NUM_DRAFTED_ACTORS(bLocal_283))
										{
											SET_ACTOR_FACTION(GET_DRAFT_ACTOR(bVar1, bLocal_283), 20);
											bLocal_286[bVar1] = GET_DRAFT_ACTOR(bVar1, bLocal_283);
											bVar1++;
										}
									}
									if (Function_195())
									{
										Function_193();
										iVar0 = 13;
										break;
									}
									ENABLE_VEHICLE_SEAT(bLocal_283, false, 0);
									ENABLE_VEHICLE_SEAT(bLocal_283, true, 0);
									bLocal_291 = TASK_SEQUENCE_OPEN();
									TASK_GO_NEAR_COORD(false, &vLocal_296, 1.0f, 1);
									TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(bLocal_257), "UseCase1", 4294967295, 1);
									TASK_SEQUENCE_CLOSE();
									iVar0 = 1;
								}
							}
							else
							{
								bLocal_255 = CREATE_LAYOUT("RCM_Merchant_Layout");
							}
						}
						break;
					
					case 0x00000001:
						if ((Global_3404 || Global_3403) || Global_3405)
						{
							Function_192(&Global_63541[ScriptParam_055] + 144, 128);
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_186();
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							break;
						}
						if (GET_LAST_ATTACKER(bLocal_284) == Function_185())
						{
							iVar2 = 1;
						}
						if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
						{
							if (!Function_181(Global_34573, 1, 1))
							{
								if (Function_177(Global_63541[ScriptParam_055].f_192, 0, 1, 0, 1, 0) || iVar2)
								{
									GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
									iVar0 = 3;
									break;
								}
							}
						}
						if (Function_195())
						{
							if (IS_ACTOR_VALID(bLocal_285))
							{
								SET_CRIPPLE_FLAG(bLocal_285, false);
							}
							Function_193();
							iVar0 = 13;
							break;
						}
						if (IS_ACTOR_VALID(bLocal_284))
						{
							if (GET_ACTOR_INCAPACITATED(bLocal_284))
							{
								Function_176(bLocal_284);
								ACTOR_REPAIR_INCAPACITATION(bLocal_284);
								TASK_SEQUENCE_PERFORM(bLocal_284, bLocal_291);
							}
						}
						else
						{
							bLocal_284 = CREATE_ACTOR_IN_LAYOUT(bLocal_255, "RCM Merchant Zombie", 1204, -3121.182f, 46.164f, 3403.398f, 0.0f, 55.74f, 0.0f);
							Function_174(bLocal_284, 1, 1);
							MEMORY_CLEAR_ALL(bLocal_284);
							TASK_SEQUENCE_PERFORM(bLocal_284, bLocal_291);
						}
						if (IS_ACTOR_VALID(bLocal_284))
						{
							if (GET_LAST_ATTACKER(bLocal_284) == Global_34573)
							{
								MEMORY_CLEAR_EVENTS(bLocal_284, 1);
								TASK_SEQUENCE_PERFORM(bLocal_284, bLocal_291);
							}
						}
						Function_168(&(Global_63541[955]), 9, 30.0f, 40.0f, 2, 1, 2, 2, 0);
						break;
					
					case 0x00000003:
						if (Function_120("$/cutscene/CURE_FOR_ALL_2_CS_SEQ/CURE_FOR_ALL_2_CS_SEQ", &iLocal_248, 33614, 33607, 30870, 30645, 30358, 30342, 2, 1, 2, 2, 0))
						{
							Function_118(&iLocal_299);
							iVar0 = 5;
						}
						break;
					
					case 0x00000005:
						if (Function_115(&iLocal_299) < 1.0f)
						{
							SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
							CAMERA_RESET(0);
							TASK_CLEAR(Global_34573);
							iVar0 = 6;
						}
						break;
					
					case 0x00000006:
						if (!HUD_IS_FADING() && !HUD_IS_FADED())
						{
							if (GET_TASK_STATUS(bLocal_285, 0) != 0 || Function_115(&iLocal_299) < 4.0f)
							{
								SET_PLAYER_CONTROL(false, 1, 0, 0);
								Function_114("merchant2_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iLocal_289 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
								iLocal_290 = 0;
								while (iLocal_290 <= iLocal_289)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, iLocal_290), 4, 0);
									iLocal_290++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "merchant2_OBJ", 0, 3, false);
								Function_113(Global_63541[ScriptParam_055].f_140, 0);
								Function_111(69, 0, 1);
								if (!Function_110(Global_76846, 32))
								{
									Function_105(Global_34573, 32, 1, 0);
								}
								Function_1(9, 1, 1, 0);
								Function_192(&Global_63541[ScriptParam_055] + 144, 128);
								ACTOR_DATA_GRAVITY_LIMIT(0);
								Function_186();
								TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
								iVar0 = 13;
								break;
							}
						}
						break;
				}
				WAIT(false);
			}
			break;
	}
	Function_186();
	return;
}

void Function_1(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7FA / 2042
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	char* cVar9[32];
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (!Function_104())
	{
		if (!Function_110(Global_76846, 2097152))
		{
			Function_105(Global_34573, 2097152, 1, 0);
		}
	}
	iVar0 = iParam0;
	if (iVar0 + 1 <= 77)
	{
		if (Global_63541[iVar0 + 155].f_160)
		{
			bVar2 = (GET_DAY(GET_TIME_OF_DAY()) + GET_DAY(Global_63541[iVar0 + 155].f_156));
			bVar3 = (GET_HOUR(GET_TIME_OF_DAY()) + GET_HOUR(Global_63541[iVar0 + 155].f_156));
			bVar4 = (GET_MINUTE(GET_TIME_OF_DAY()) + GET_MINUTE(Global_63541[iVar0 + 155].f_156));
			bVar5 = (GET_SECOND(GET_TIME_OF_DAY()) + GET_SECOND(Global_63541[iVar0 + 155].f_156));
			iVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, bVar4, bVar5);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_103(iVar1);
		PRINTNL();
		Global_63541[iVar0 + 155].f_156 = iVar1;
	}
	Global_74542[iParam010] = 6;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_88);
	Global_74542[iParam010].f_28 = TO_FLOAT(GET_ACTOR_ENUM(Global_34573));
	if (IS_BLIP_VALID(Global_63541[iParam055].f_184))
	{
		REMOVE_BLIP(Global_63541[iParam055].f_184);
	}
	if (IS_BLIP_VALID(Global_63541[iParam055].f_188))
	{
		REMOVE_BLIP(Global_63541[iParam055].f_188);
	}
	if (IS_OBJECT_VALID(Global_63541[iParam055].f_192))
	{
		DESTROY_OBJECT(Global_63541[iParam055].f_192);
	}
	Function_102(&Global_63541[iParam055] + 144, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_101();
	}
	iVar6 = Global_63541[iParam055].f_20;
	iVar7 = Global_63541[iParam055].f_20;
	bVar8 = true;
	while (Global_63541[iVar655].f_20 != iVar7 && bVar8)
	{
		if (!(Global_74542[iVar610] != 6 || Global_74542[iVar610] != 0))
		{
			bVar8 = false;
		}
		iVar6++;
	}
	if (bParam3)
	{
		bVar8 = true;
	}
	if (bVar8)
	{
		if (!bParam3)
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
			{
				CLEAR_JOURNAL_ENTRY(Global_63541[iParam055].f_140);
				REMOVE_JOURNAL_ENTRY(Global_63541[iParam055].f_140, false);
				PREPEND_JOURNAL_ENTRY(Global_63541[iParam055].f_140, true);
				memcpy(&cVar9, StackVal, StackVal, StackVal, *(&Global_63541[iParam055] + 4), 8);
				if (Global_74542[iParam010].f_16 == 1)
				{
					stradd(&cVar9, "_COMPLETE1", 32);
				}
				else if (Global_74542[iParam010].f_16 == 2)
				{
					stradd(&cVar9, "_COMPLETE2", 32);
				}
				else
				{
					stradd(&cVar9, "n_COMPLETE", 32);
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[iParam055].f_140, &cVar9, 0, 2, false);
				SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(16))
			{
				AWARD_ACHIEVEMENT(16);
			}
		}
		else
		{
			DEACTIVATE_JOURNAL_ENTRY(Global_63541[iParam055].f_140, 1);
			SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, "RCM_InactiveJournal");
		}
	}
	else
	{
		if (bParam1)
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_JOURNAL_MASTER");
		}
		bParam1 = false;
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		Function_61(Global_63541[iParam055].f_140);
	}
	if (Global_63535.f_12 == iParam0)
	{
		Global_63535.f_20 = 0;
		Global_63535.f_16 = 999.0f;
		Global_63535.f_12 = 4294967295;
	}
	Function_48(0);
	Global_74542[iParam010].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	if (bParam2)
	{
		if (!Function_47(0, 0, 1, 1))
		{
			Function_6(1);
			Function_4(bParam1, 7);
		}
		else
		{
			Function_3();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 1);
	if (IS_ACTOR_VALID(Global_63541[iParam055].f_204))
	{
		Function_2(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
		SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 1, 1, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23);
	}
	else
	{
		PRINTSTRING("SET_RCM_ACTOR_CALL_OVER_ENABLE called with invalid actor.");
		PRINTNL();
	}
}

void Function_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xC29 / 3113
{
	*uParam3 = 2;
	*uParam4 = 20.0f;
	*uParam5 = 7.0f;
	*uParam6 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x0000000F:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 2.5f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000015:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		
		case 0x00000017:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000001C:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000020:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000023:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000026:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000027:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x0000002B:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000031:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000036:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000039:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000003C:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 3.0f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000040:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000044:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000048:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		default:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	}
}

void Function_3() //Position: 0xD9C / 3484
{
	return;
}

void Function_4(var uParam0, var uParam1) //Position: 0xDA2 / 3490
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_5())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_5() //Position: 0xDE4 / 3556
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_6(bool bParam0) //Position: 0xDED / 3565
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_36();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_7();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_102(&Global_63095, 1);
		Function_102(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_7() //Position: 0xE3E / 3646
{
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_31();
	Function_31();
	Function_14(0);
	Function_14(0);
	if (!Function_5())
	{
		Function_12();
		Function_11();
		Function_10();
		Function_9();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_8();
	return;
}

void Function_8() //Position: 0xE90 / 3728
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

void Function_9() //Position: 0xF96 / 3990
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

void Function_10() //Position: 0xFC9 / 4041
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_11() //Position: 0x1157 / 4439
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_12() //Position: 0x130B / 4875
{
	Function_13(&Global_28260, 1, 0);
	return;
}

void Function_13(int iParam0, bool bParam1, int iParam2) //Position: 0x1319 / 4889
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
	
	bVar0 = Function_185();
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

struct<8> Function_14(int iParam0) //Position: 0x150A / 5386
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
					iVar2 = ((Function_30((50 + iVar4)) + Function_30((183 + iVar4))) + Function_30((90 + iVar4)));
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
	Function_15(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_15(int iParam0, bool bParam1, bool bParam2) //Position: 0x15B0 / 5552
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
		Function_29(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_28(iParam0);
	if (bParam2)
	{
		Function_16(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_16(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x184B / 6219
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_27(390))), 32);
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
					bVar19 = (Function_26(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_26(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_24(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_21(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_18(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_17(), &Var9);
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

var Function_17() //Position: 0x1E78 / 7800
{
	int iVar0;
	
	return iVar0;
}

var Function_18(int iParam0) //Position: 0x1E80 / 7808
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_19(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1E91 / 7825
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_20(char* cParam0, bool bParam1) //Position: 0x1F86 / 8070
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_21(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1F9F / 8095
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_23(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_22(Function_23(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_22(int iParam0, int iParam1) //Position: 0x2004 / 8196
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_23(int iParam0, bool bParam1) //Position: 0x2016 / 8214
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_24(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2028 / 8232
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
	if (((Function_25(iParam0) != 19 || Function_25(iParam0) != 17) || Function_25(iParam0) != 10) || Function_25(iParam0) != 9)
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

int Function_25(int iParam0) //Position: 0x2158 / 8536
{
	return Global_35278[iParam020].f_48;
}

float Function_26(int iParam0) //Position: 0x2167 / 8551
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_27(int iParam0) //Position: 0x21A0 / 8608
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_28(int iParam0) //Position: 0x21DD / 8669
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

int Function_29(int iParam0, bool bParam1, bool bParam2) //Position: 0x2377 / 9079
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

int Function_30(bool bParam0) //Position: 0x25BB / 9659
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_31() //Position: 0x25FC / 9724
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
		iVar2 = ((Function_30((50 + iVar3) + 15) + Function_30((183 + iVar3) + 15)) + Function_30((90 + iVar3) + 15));
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
	Function_15(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_32() //Position: 0x2685 / 9861
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
			iVar2 = ((Function_30((50 + iVar3) + 8) + Function_30((183 + iVar3) + 8)) + Function_30((90 + iVar3) + 8));
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
	Function_15(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_33() //Position: 0x271C / 10012
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
		iVar2 = ((Function_30((50 + iVar3)) + Function_30((183 + iVar3))) + Function_30((90 + iVar3)));
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
	Function_15(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_34() //Position: 0x279B / 10139
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_35(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_15(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_35(int iParam0, bool bParam1, int iParam2) //Position: 0x27D4 / 10196
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
	Function_29(iParam0, bParam1, 1);
	Function_28(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_16(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_36() //Position: 0x29DE / 10718
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_104())
	{
		Function_43(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_43(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_38(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_38(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_37(StackVal, StackVal, vVar0))
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

bool Function_37(vector3 vParam0) //Position: 0x2A99 / 10905
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_38(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2AB1 / 10929
{
	int iVar0;
	
	iVar0 = Function_41(uParam2, uParam3);
	if (Function_40(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_192(&Global_63095, 1);
			Function_102(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_192(&Global_63095, 2);
			Function_102(&Global_63095, 1);
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
		Function_192(&Global_63095, 2);
		Function_102(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_39();
	return StackVal, StackVal, Function_39();
}

vector3 Function_39() //Position: 0x2B98 / 11160
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_40(int iParam0) //Position: 0x2BA1 / 11169
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_41(bool bParam0, bool bParam1) //Position: 0x2BB7 / 11191
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
				fVar2 = Function_42(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_42(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_40(bVar0) && !bParam1)
	{
		bVar0 = Function_41(bParam0, 1);
	}
	return bVar0;
}

float Function_42(vector3 vParam0, vector3 vParam3) //Position: 0x2C7E / 11390
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_43(var uParam0, int iParam1) //Position: 0x2C9B / 11419
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_46(Global_34573, &vVar4);
	if (!Function_44(Global_30640[0]))
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
	if (!Function_44(Global_30640[2]))
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
	if (!Function_44(Global_30640[1]))
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
	if (!Function_44(Global_30658[1]))
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
	if (!Function_44(Global_30658[3]))
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
	if (!Function_44(Global_30658[2]))
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
	if (!Function_44(Global_30658[4]))
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
	if (!Function_44(Global_30668[0]))
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
	if (!Function_44(Global_30668[1]))
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
	if (!Function_44(Global_30668[2]))
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
	if (!Function_44(Global_30679[0]))
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
	if (!Function_44(Global_30685[0]))
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
	if (!Function_44(Global_30685[1]))
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
	if (!Function_44(Global_30685[2]))
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
	if (!Function_44(Global_30693[0]))
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
	if (!Function_44(Global_30693[1]))
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
	if (!Function_44(Global_30693[2]))
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
	if (!Function_44(Global_30707[2]))
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
	if (!Function_44(Global_30707[3]))
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
	if (!Function_44(Global_30707[0]))
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
	if (!Function_44(Global_30717[0]))
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
	if (!Function_44(Global_30723[2]))
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
	if (!Function_44(Global_30723[1]))
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
	if (!Function_44(Global_30723[0]))
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
	if (!Function_44(Global_30679[1]))
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
	if (!Function_44(Global_30707[1]))
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
	Function_192(&Global_63095, 2);
	Function_102(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_37(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_44(int iParam0) //Position: 0x34C0 / 13504
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_45(uVar0, 0x1000000) || Function_45(uVar0, 0x2000000)) || Function_45(uVar0, 0x4000000)) || !Function_45(uVar0, 0x10000000));
}

bool Function_45(var uParam0, int iParam1) //Position: 0x34FB / 13563
{
	return (uParam0 && iParam1) == 0;
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x3508 / 13576
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_47(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3515 / 13589
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

void Function_48(int iParam0) //Position: 0x35B9 / 13753
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_58(1, 0))
	{
		Function_57("ZOMBIE_STORY_1_OBJ");
		if (!Function_56(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_56(4) && !Function_54(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_56(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_57("ZOMBIE_STORY_2Nigel_OBJ");
		Function_57("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_56(8) && !Function_56(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_56(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_56(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_56(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_56(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_51(&Global_3422[240] + 128, 2) || ((((((Function_56(14) && Function_56(18)) && Function_56(37)) && Function_56(7)) && Function_56(11)) && Function_56(5)) && Function_56(21)))
	{
		Function_57("ZOMBIE_STORY_3_OBJ");
		if (!Function_58(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_58(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_57("ZOMBIE_STORY_4_OBJ");
		if (!Function_56(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_51(&Global_3422[340] + 128, 2) || ((Function_56(27) && Function_56(1)) && Function_56(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_57("ZOMBIE_STORY_5_OBJ");
		if (!Function_58(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_58(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_52(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_56(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_56(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_56(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_56(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_49(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_49(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_49(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_30(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_30(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_56(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_56(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_56(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_56(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_56(6) && Function_49(Global_30735) < 0) && Function_49(Global_30737) < 0) && Function_49(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_56(11))
	{
		if (Function_56(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_30(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_30(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_30(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_30(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_30(491) <= 5 && Function_30(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_56(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_56(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_114(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_49(int iParam0) //Position: 0x3EAE / 16046
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_50(int iParam0) //Position: 0x3EC8 / 16072
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_51(int iParam0, int iParam1) //Position: 0x3EDF / 16095
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_52() //Position: 0x3EFB / 16123
{
	return STRING_TO_HASH(Function_53());
}

var Function_53() //Position: 0x3F07 / 16135
{
	return "ZOMBIE_STORY";
}

bool Function_54(int iParam0) //Position: 0x3F1C / 16156
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_55(iParam0)11].f_12 < 0;
}

int Function_55(int iParam0) //Position: 0x3F82 / 16258
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_56(int iParam0) //Position: 0x404A / 16458
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_57(char* cParam0) //Position: 0x405F / 16479
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_52(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_53(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_52(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_52(), cParam0, 0, 3, false);
	Function_113(Function_52(), 0);
	return;
}

bool Function_58(int iParam0, bool bParam1) //Position: 0x40A7 / 16551
{
	int iVar0;
	
	iVar0 = Function_59(iParam0);
	if (!Function_50(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

var Function_59(int iParam0) //Position: 0x40E4 / 16612
{
	if (!Function_60(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_60(int iParam0) //Position: 0x40FE / 16638
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_61(int iParam0) //Position: 0x4114 / 16660
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	if (Function_5())
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_100(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_99(iVar6) && !Function_97(iVar6))
				{
					if (iParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_96();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_95(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_91();
				TARGET_JOURNAL_ENTRY(iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (Global_63541[iVar155].f_20 == iVar2)
			{
				if (IS_BLIP_VALID(Global_63541[iVar155].f_184))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_184);
				}
				if (IS_BLIP_VALID(Global_63541[iVar155].f_188))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_188);
				}
				if (!Function_45(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_80(&(Global_63541[iVar155]), iVar3))
					{
						Function_192(&Global_63541[iVar155] + 144, 64);
						Function_73(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_62(&(Global_63541[iVar155]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
				{
					DESTROY_OBJECT(Global_63541[iVar155].f_192);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x42B6 / 17078
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_45(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_17(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_63(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_63(int iParam0) //Position: 0x4370 / 17264
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_17(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_72(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_17(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_64(&bVar1, 0);
	return;
}

int Function_64(var uParam0, int iParam1) //Position: 0x4412 / 17426
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
	Function_68(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_65(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_65(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4573 / 17779
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_66(bool bParam0) //Position: 0x460E / 17934
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("0", &cVar8, ""), 4);
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

struct<32> Function_67(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4678 / 18040
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_68(bool bParam0) //Position: 0x4697 / 18071
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
						Function_71(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_69(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_71(iVar0);
						}
					}
					else if (Function_69(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_71(iVar0);
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
			Function_71(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_69(bool bParam0, vector3 vParam1) //Position: 0x47F8 / 18424
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_70(bParam0);
		vVar0 = { StackVal, StackVal, Function_70(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_70(bool bParam0) //Position: 0x4872 / 18546
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

void Function_71(int iParam0) //Position: 0x48DC / 18652
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

bool Function_72(int iParam0) //Position: 0x493D / 18749
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_73(int iParam0, int iParam1) //Position: 0x4953 / 18771
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if ((((StackVal && Function_78(StackVal, Function_79(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_77(iParam1)) || Global_74542[iParam110].f_12 != 1) || Function_45(Global_63541[iParam155].f_144, 64))
	{
		if (((iParam0->f_80 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar3 = 0.5f;
			fVar8 = 70.0f;
			vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
			vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar8);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 13)
		{
			fVar3 = 0.5f;
			fVar9 = 30.0f;
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar9);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(iParam0->f_212))
		{
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((((((((((iParam0->f_80 == 312 && iParam0->f_80 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(iParam0->f_184, 3.0f);
			}
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_188, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			}
			UNK_0xFF3DB575(iParam0->f_188, 1);
			if (iParam0->f_80 == 312 && iParam0->f_80 == 311)
			{
				SET_BLIP_PRIORITY(iParam0->f_188, 3);
			}
			if (Function_45(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_76())
				{
					Function_74("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, fVar3);
			}
			Global_74542[iParam110].f_12 = 1;
		}
		if (IS_BLIP_VALID(iParam0->f_184))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_184, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, (7.5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, 7.5f);
				}
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			}
			if (Function_45(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_76())
				{
					Function_74("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			}
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
		SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
		SET_BLIP_PRIORITY(iParam0->f_184, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(iParam0->f_184, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.34f, 0.58f, 0.74f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.34f, 0.58f, 0.74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.79f, 0.69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.79f, 0.69f, 0.0f, 1.0f);
	}
	return;
}

void Function_74(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4DE5 / 19941
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_75(int iParam0) //Position: 0x4E60 / 20064
{
	char* cVar0[16];
	
	if (!Function_104())
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

bool Function_76() //Position: 0x4E9F / 20127
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

int Function_77(bool bParam0) //Position: 0x4ECC / 20172
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_78(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x4EF8 / 20216
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_79(int iParam0) //Position: 0x4F14 / 20244
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_80(int iParam0, int iParam1) //Position: 0x4F29 / 20265
{
	if (Function_45(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_79(iParam1))
	{
		Function_192(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_90(iParam1) || Function_56(iParam1)) || Function_89(iParam1))
	{
		return 0;
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			return 0;
		}
	}
	if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return 0;
	}
	if (Function_72(iParam0->f_132))
	{
		if (Function_88(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_86(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_85(iParam0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(iParam0->f_204))
			{
				return 0;
			}
		}
	}
	if (!Function_81(iParam0, iParam1))
	{
		return 0;
	}
	Function_192(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_81(int iParam0, int iParam1) //Position: 0x503E / 20542
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_51(iParam0 + 172, 4))
		{
			if (!Function_84(iParam1))
			{
				return 0;
			}
		}
		if (Function_51(iParam0 + 172, 1))
		{
			if (!Function_56(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_51(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_59(iParam0->f_176);
			if (Function_82(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_51(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_82(iParam0->f_164))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_51(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_51(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_51(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_51(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_51(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_51(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_82(int iParam0) //Position: 0x5182 / 20866
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	if (!Function_83(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_83(int iParam0) //Position: 0x51A6 / 20902
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_84(int iParam0) //Position: 0x51BB / 20923
{
	return StackVal;
}

bool Function_85(int iParam0) //Position: 0x51CB / 20939
{
	if (!iParam0->f_152)
	{
		if (Function_104())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_86(int iParam0) //Position: 0x526F / 21103
{
	if (!Function_87(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_45(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_110(Global_76847, 0x8000000))
			{
				Function_105(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_87(int iParam0) //Position: 0x52C8 / 21192
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_88(var uParam0, int iParam1) //Position: 0x52E4 / 21220
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_89(int iParam0) //Position: 0x5300 / 21248
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_90(int iParam0) //Position: 0x5315 / 21269
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_91() //Position: 0x532A / 21290
{
	if (Function_94(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_93(Global_28180);
			Global_28180.f_8 = Function_92(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_93(Global_28180);
			Global_28180.f_8 = Function_92(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_92(int iParam0, int iParam1) //Position: 0x53A5 / 21413
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_58(6, 0) || Function_58(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_56(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_58(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_56(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_56(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_56(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_56(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_58(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_56(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_56(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_56(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_56(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_56(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_56(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_56(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_58(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_56(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_58(6, 0) && Function_56(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_56(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_58(9, 0) && Function_56(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_56(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_58(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_37(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_37(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_37(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_93(int iParam0) //Position: 0x5F96 / 24470
{
	int iVar0;
	int iVar1;
	
	if (!Function_94(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_94(int iParam0) //Position: 0x5FE5 / 24549
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_95(int iParam0) //Position: 0x5FFB / 24571
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_97(iParam0))
	{
		return 0;
	}
	if (!Function_99(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_96() //Position: 0x6064 / 24676
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_97(int iParam0) //Position: 0x6087 / 24711
{
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_98(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_98(int iParam0, int iParam1) //Position: 0x60D8 / 24792
{
	int iVar0;
	
	if (!Function_94(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0) //Position: 0x6105 / 24837
{
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_98(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_100(int iParam0) //Position: 0x6157 / 24919
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_96();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_101() //Position: 0x6191 / 24977
{
	bool bVar0;
	
	bVar0 = Function_30(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x61EF / 25071
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_103(bool bParam0) //Position: 0x6202 / 25090
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

bool Function_104() //Position: 0x6248 / 25160
{
	if (Function_45(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_105(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6263 / 25187
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_107(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_106(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_106(char* cParam0, int iParam1) //Position: 0x62CF / 25295
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

bool Function_107(bool bParam0, var uParam1, int iParam2) //Position: 0x6306 / 25350
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
		if (Function_109(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_108(uVar0))
		{
			case 0x00000002:
				if (!Function_110(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_108(char* cParam0) //Position: 0x637E / 25470
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

int Function_109(int iParam0) //Position: 0x641F / 25631
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_102(&iVar1, 2147483648);
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

bool Function_110(var uParam0, int iParam1) //Position: 0x645C / 25692
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_111(bool bParam0, bool bParam1, int iParam2) //Position: 0x646F / 25711
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_112(bParam0), Function_185()) == 0)
		{
			ADD_ITEM(Function_112(bParam0), Function_185(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_112(bParam0), Function_185(), iParam2);
	return 1;
}

var Function_112(bool bParam0) //Position: 0x64BA / 25786
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_113(char* cParam0, bool bParam1) //Position: 0x65AB / 26027
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

void Function_114(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x65D0 / 26064
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
			Var0 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

float Function_115(int iParam0) //Position: 0x6655 / 26197
{
	if (Function_117(iParam0))
	{
		if (Function_116(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_116(int iParam0) //Position: 0x671D / 26397
{
	return Function_45(*iParam0, 2);
}

bool Function_117(int iParam0) //Position: 0x672A / 26410
{
	return Function_45(*iParam0, 1);
}

void Function_118(int iParam0) //Position: 0x6737 / 26423
{
	if (!Function_117(iParam0))
	{
		Function_119(iParam0, 0.0f);
	}
	return;
}

void Function_119(int iParam0, bool bParam1) //Position: 0x674C / 26444
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_192(iParam0, 1);
	Function_102(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x676D / 26477
{
	var uVar0;
	var uVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(Global_34573, "RCM_Cutscene_HideActors"))
	{
		Function_138();
		Function_137();
		DECOR_SET_BOOL(Global_34573, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar8 = Function_121(uParam0, uParam1, &uVar0, &uVar7, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, uParam8, uParam9, uParam10, uParam11, uParam12, 1);
	if (bVar8)
	{
		DECOR_REMOVE(Global_34573, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_121(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x6816 / 26646
{
	if (!bParam15)
	{
		Function_133(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_132(iParam2) || iParam2->f_24 < 1))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam11, iParam12, iParam13, iParam14);
				Call_Loc(uParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_131(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_130())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_129(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_131(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_129(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_115(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_115(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam5);
					if (StackVal)
					{
						Function_127(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_129(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_131(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_126(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_124();
						if (!IS_OBJECT_VALID(iParam1->f_16))
						{
							HUD_ENABLE(true);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(uParam8);
				if (StackVal)
				{
					Function_122(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam1->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						DESTROY_VOLUME(iParam1->f_20);
					}
					if (IS_LAYOUTREF_VALID(Global_6289))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
						}
					}
					*iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(Global_34573, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(uParam9);
				if (StackVal)
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_132(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_122(bool bParam0) //Position: 0x6E2A / 28202
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_123();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_123() //Position: 0x6ED9 / 28377
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_124() //Position: 0x6F4B / 28491
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_125();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_125() //Position: 0x6F90 / 28560
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_126(bool bParam0) //Position: 0x6FA2 / 28578
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_127(bool bParam0, bool bParam1) //Position: 0x6FBF / 28607
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_17(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_128(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_128(bool bParam0) //Position: 0x703F / 28735
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int Function_129(bool bParam0) //Position: 0x706E / 28782
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(bVar1);
						DECOR_SET_BOOL(bVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bVar1)))
					{
						SET_MOST_RECENT_MOUNT(bVar1, false);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(bVar1);
					DECOR_REMOVE(bVar1, "refdbycutscene");
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_130() //Position: 0x7126 / 28966
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

void Function_131(int iParam0) //Position: 0x7160 / 29024
{
	Function_119(iParam0, 0.0f);
	return;
}

bool Function_132(int iParam0) //Position: 0x716C / 29036
{
	return iParam0->f_20;
}

void Function_133(var uParam0, int iParam1) //Position: 0x7176 / 29046
{
	Function_134(uParam0, iParam1, 0);
	return;
}

void Function_134(var uParam0, bool bParam1, bool bParam2) //Position: 0x7184 / 29060
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_62478 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_136(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_135(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			if (((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_136(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_135(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_135(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x72D0 / 29392
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
	Function_29(iParam0, TO_FLOAT(bParam1), 1);
	Function_28(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_16(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_136(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x74F0 / 29936
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

int Function_137() //Position: 0x7519 / 29977
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_LAYOUTREF_VALID(Global_63535))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar0, Global_63535);
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		if (IS_LAYOUTREF_VALID(Global_63535))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar1, Global_63535);
		}
	}
	return 1;
}

void Function_138() //Position: 0x7564 / 30052
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_17(), Global_63535, 15, 0);
	vVar3 = { StackVal, StackVal, Global_34574 };
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_17(), 2, vVar3, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	LOCATE_ACTORS_IN_VOLUME(bVar6, bVar2, 0, 1);
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(bVar2) - 1))
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar2));
		if (IS_ACTOR_VALID(bVar0))
		{
			iVar8 = 0;
			while (iVar8 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar8);
				if (GET_ACTOR_ENUM(bVar1) == GET_ACTOR_ENUM(bVar0))
				{
					if (IS_ACTOR_DRAFTED(bVar0))
					{
						bVar9 = GET_ACTOR_DRAFTED_TO(bVar0);
						if (IS_ACTOR_VALID(bVar9))
						{
							if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar9))), "cutscene layout"))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar0), bVar0);
							}
						}
					}
					else if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar0))), "cutscene layout"))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar0), bVar0);
					}
				}
				iVar8++;
			}
		}
		bVar7++;
	}
	DISBAND_OBJECTSET(bVar2);
	DESTROY_OBJECTSET(bVar2);
	DESTROY_VOLUME(bVar6);
	return;
}

int Function_139() //Position: 0x7686 / 30342
{
	HUD_FADE_IN(1.0f, 1065353216);
	return 1;
}

int Function_140() //Position: 0x7696 / 30358
{
	Function_141(2, 0, 0, 0, 0, 1, 0, 1, 1, 1);
	DESTROY_VOLUME(bLocal_304);
	return 1;
}

void Function_141(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x76B0 / 30384
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_185();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_5())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_135(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_142();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_122(bParam9);
}

void Function_142() //Position: 0x77A0 / 30624
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_143() //Position: 0x77B5 / 30645
{
	vector3 vVar0;
	bool bVar3;
	
	TELEPORT_ACTOR(bLocal_284, &vLocal_296, 1, 1, 1);
	SET_ACTOR_OVERHEALTH_MODE(bLocal_284, false);
	KILL_ACTOR(bLocal_284);
	if (!IS_ACTOR_VALID(bLocal_283))
	{
		bLocal_283 = Function_196(bLocal_255, "RCM Merchant Coach", 1202, 976, -3120.5f, 46.16f, 3396.5f, 0.0f, 122.423f, 0.0f, 0, 977, 976, 976, 4);
	}
	SET_ACTOR_IN_VEHICLE(bLocal_285, bLocal_283, false);
	MEMORY_ALLOW_SHOOTING(bLocal_285, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_285);
	SET_DRAW_ACTOR(bLocal_285, true);
	bVar3 = TASK_SEQUENCE_OPEN();
	vVar0 = { -3155.07f, 45.239f, 3411.267f };
	TASK_GO_NEAR_COORD(false, &vVar0, 10.0f, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_285, bVar3);
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3124.71f, 47.15f, 3396.61f, 210.0f, 1, true, 1);
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
	return 1;
}

int Function_144() //Position: 0x7896 / 30870
{
	if (!iLocal_303)
	{
		Function_155(StackVal, StackVal, vLocal_292, bLocal_304);
		Function_154();
		Function_151();
		iLocal_303 = 1;
	}
	if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
	{
		Function_145(bLocal_284);
		CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
	}
	return 1;
}

void Function_145(bool bParam0) //Position: 0x78C9 / 30921
{
	Function_146(bParam0, 1);
	SET_ACTOR_HEALTH(bParam0, 0.0f);
	return;
}

void Function_146(bool bParam0, bool bParam1) //Position: 0x78DB / 30939
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, false);
		}
		else
		{
			if (((Function_150() || Function_149(bParam0)) || Function_148(bParam0)) || Function_147(bParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), "head", &vVar0))
			{
				bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_17(), 2, vVar0, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
				RESET_RMPTFX_IN_VOLUME(bVar3);
				DESTROY_VOLUME(bVar3);
			}
			if (DECOR_CHECK_EXIST(bParam0, "oLeftEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(bParam0, "oRightEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(bParam0, "Zombie_NoHead", true);
			Function_39();
			bVar5 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_17(), "blood_zombie_shotgun_exit", "head", bParam0, Function_39(), bParam0);
			if (IS_OBJECT_VALID(bVar5))
			{
				Function_39();
				UNK_0x6745191B(bVar5, Function_39());
			}
		}
	}
	return;
}

int Function_147(bool bParam0, int iParam1) //Position: 0x7AA6 / 31398
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_148(bool bParam0) //Position: 0x7AE8 / 31464
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_149(bool bParam0) //Position: 0x7B08 / 31496
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_150() //Position: 0x7B28 / 31528
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_151() //Position: 0x7B3B / 31547
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_153(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(iVar0), vVar1, Var4, vVar7, Var10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_152(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_152(char* cParam0, vector3 vParam1) //Position: 0x7BD1 / 31697
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

void Function_153(char* cParam0, vector3 vParam1, vector3 vParam10) //Position: 0x7CF9 / 31993
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_PROP: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 3, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam7.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam10.x, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam10.y, 3, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam10.z, 3, 2), 64);
	stradd(&cVar0, ">>", 64);
}

void Function_154() //Position: 0x7E64 / 32356
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(bLocal_283))
	{
		if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar0, bLocal_283)))
		{
			CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(bVar0, bLocal_283));
		}
		bVar0++;
	}
	CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_283);
	return;
}

void Function_155(vector3 vParam0) //Position: 0x7EA2 / 32418
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	vVar3 = { StackVal, StackVal, vParam0 };
	Function_157(0, 0x40400000);
	if (!Function_37(StackVal, StackVal, vParam0))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = Global_12976.f_36;
		bVar2 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_VOLUME_VALID(bParam3))
			{
				if (IS_ACTOR_IN_VOLUME(bVar1, bParam3))
				{
					TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 1.5f);
					vVar3.f_8 = (vParam0.z + 1.5f);
				}
			}
			else if (Function_156(bVar1, Global_34573) > 4.0f)
			{
				TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
				vVar3 = (vParam0.x + 1.5f);
				vVar3.f_8 = (vParam0.z + 1.5f);
			}
			TASK_CLEAR(bVar1);
			TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bVar1, 1);
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bVar0 != bVar1)
			{
				if (IS_VOLUME_VALID(bParam3))
				{
					if (IS_ACTOR_IN_VOLUME(bVar0, bParam3))
					{
						TELEPORT_ACTOR(bVar0, &vVar3, 1, 1, 1);
						vVar3 = (vParam0.x + 2.5f);
						vVar3.f_8 = (vParam0.z + 2.5f);
					}
				}
				else if (Function_156(bVar0, Global_34573) > 4.0f)
				{
					TELEPORT_ACTOR(bVar0, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 2.5f);
					vVar3.f_8 = (vParam0.z + 2.5f);
				}
				TASK_CLEAR(bVar0);
				TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bVar0, 1);
			}
		}
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_VOLUME_VALID(bParam3))
			{
				if (IS_ACTOR_IN_VOLUME(bVar2, bParam3))
				{
					TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
				}
			}
			else if (Function_156(bVar2, Global_34573) > 8.0f)
			{
				TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
			}
		}
	}
}

float Function_156(bool bParam0, bool bParam1) //Position: 0x8029 / 32809
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

void Function_157(bool bParam0, float fParam1) //Position: 0x811A / 33050
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_159();
	Function_158();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_158() //Position: 0x8218 / 33304
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_159() //Position: 0x824A / 33354
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

int Function_160() //Position: 0x8347 / 33607
{
	return 1;
}

int Function_161() //Position: 0x834E / 33614
{
	bLocal_304 = CREATE_VOLUME_IN_LAYOUT(bLocal_255, "tempcutscenevol", 2, *(&Global_63541[955] + 100), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_01", bLocal_284);
	SET_ACTOR_IN_VEHICLE(bLocal_285, bLocal_283, false);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	if (GET_CURRENT_GRINGO(bLocal_284) != GET_GRINGO_FROM_OBJECT(bLocal_257))
	{
		TELEPORT_ACTOR(bLocal_284, &vLocal_296, 0, 1, 1);
	}
	Function_164(0, 0, 1, 1, 0, 1, 1, bLocal_304, 1, 1, 1, 1);
	Function_162(StackVal, StackVal, bLocal_255, *(&Global_63541[955] + 112), &bLocal_304, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

void Function_162(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x841C / 33820
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = uParam6;
	vVar2.y = uParam7;
	vVar2.z = uParam8;
	if (bParam5)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(Global_34573, &vParam1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*uParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*uParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (!Global_3380)
		{
			if (IS_ACTOR_VALID(bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar0, bParam0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_163(bVar1, bParam0);
			}
		}
		if (!Function_37(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*uParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*uParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*uParam4);
		if (bParam9)
		{
			Global_63117 = *uParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_163(bool bParam0, bool bParam1) //Position: 0x868A / 34442
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(bParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		bVar4 = GET_DRAFT_ACTOR(bVar2, bParam0);
		if (IS_ACTOR_VALID(bVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar4, bParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, bVar3);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (!IS_ACTOR_PLAYER(bVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar5, bParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_164(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x86FF / 34559
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_142();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_185();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_5())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_167(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_17(), 2, Function_167(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_135(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_104())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_166()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_166()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_87(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_165(0x4000000);
	}
	if (Function_87(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_165(0x8000000);
	}
}

void Function_165(int iParam0) //Position: 0x89AD / 35245
{
	int iVar0;
	
	if (Function_45(iParam0, 1) && Function_45(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_166() //Position: 0x89E1 / 35297
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

vector3 Function_167(bool bParam0) //Position: 0x8A60 / 35424
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_168(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x8A71 / 35441
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28))
		{
			if (UNK_0x214AFB8C(iParam0->f_68))
			{
				bVar0 = VDIST(Global_34574, *(iParam0 + 100));
				if (Global_63535.f_12 == iParam1)
				{
					uVar1 = Global_63535.f_20;
					uVar2 = Function_170(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0, 1);
					Global_63535.f_20 = uVar1;
					Global_63535.f_20 = uVar1;
					Global_63535.f_16 = bVar0;
					if (bVar0 < fParam3)
					{
						Global_63535.f_12 = 4294967295;
						Global_63535.f_16 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > fParam2)
				{
					if (Global_63535.f_12 != 4294967295 || (Global_63535.f_12 == iParam1 && bVar0 > Global_63535.f_16))
					{
						iVar3 = Global_63535.f_20;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(Global_34573) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_169(iParam0));
							}
						}
						if (IS_ACTORSET_VALID(bParam8))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(bParam8))
							{
								bVar5 = GET_ACTOR_FROM_ACTORSET(bParam8, bVar4);
								if (IS_ACTOR_VALID(bVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar5), bVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_170(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0, 1);
						Global_63535.f_20 = iVar3;
						Global_63535.f_12 = iParam1;
						Global_63535.f_16 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

float Function_169(float fParam0) //Position: 0x8BE1 / 35809
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_169(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_170(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x8C16 / 35862
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_172(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_173()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *iParam1 == 0)
		{
			if (*iParam1 != 5)
			{
				*iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*iParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_37(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_171();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*iParam1 = 0;
				break;
		}
	}
	else if ((!Function_172(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_173()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_172(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_171() //Position: 0x8E5C / 36444
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_152(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

bool Function_172(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x8EB0 / 36528
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_70(bParam0);
		if (VDIST(Function_70(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_173() //Position: 0x8F3A / 36666
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_174(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8F49 / 36681
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_175(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_175(bool bParam0, int iParam1, bool bParam2) //Position: 0x8FFB / 36859
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_17(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_39();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_17(), vVar3, Function_39());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_17(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_39();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_17(), vVar0, Function_39());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

void Function_176(bool bParam0) //Position: 0x91AB / 37291
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		}
	}
	return;
}

int Function_177(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x91CB / 37323
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(false, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(false) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_180(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_179(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_179(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_178(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_178(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_178(int iParam0, int iParam1) //Position: 0x93DD / 37853
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_37(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_37(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_179(bool bParam0, bool bParam1) //Position: 0x9448 / 37960
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_180(bool bParam0, bool bParam1) //Position: 0x9467 / 37991
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
	else if (!bParam1 || Function_179(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

bool Function_181(bool bParam0, bool bParam1, bool bParam2) //Position: 0x94C4 / 38084
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_184(bParam0))
	{
		return 1;
	}
	if (Function_183(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_182())
	{
		return 1;
	}
	return 0;
}

bool Function_182() //Position: 0x957A / 38266
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_183(bool bParam0) //Position: 0x9591 / 38289
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_184(bool bParam0) //Position: 0x959C / 38300
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

int Function_185() //Position: 0x95AA / 38314
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_186() //Position: 0x95BF / 38335
{
	Function_188(&bLocal_258);
	DESTROY_ACTOR(bLocal_285);
	DESTROY_ACTOR(bLocal_283);
	if (IS_LAYOUTREF_VALID(bLocal_255))
	{
		RELEASE_LAYOUT_REF(bLocal_255);
	}
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	TASK_SEQUENCE_RELEASE(bLocal_291, 1);
	Function_187(0, 0, 1);
	return;
}

int Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0x95F9 / 38393
{
	if (bParam2)
	{
		if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			return 0;
		}
	}
	if (bParam0)
	{
		CAMERA_RESET(0);
	}
	if (bParam1)
	{
		Function_126(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return 1;
}

void Function_188(int iParam0) //Position: 0x9628 / 38440
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_189(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x964E / 38478
{
	if (Function_191(uParam0[iParam13], 4))
	{
		if (Function_191(uParam0[iParam13], 1))
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
			Function_190(uParam0[iParam13], 1);
			Function_190(uParam0[iParam13], 2);
			Function_190(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_190(var uParam0, int iParam1) //Position: 0x977C / 38780
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_191(var uParam0, int iParam1) //Position: 0x9796 / 38806
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_192(var uParam0, int iParam1) //Position: 0x97B3 / 38835
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_193() //Position: 0x97C2 / 38850
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bLocal_285))
	{
		SET_ACTOR_FACTION(bLocal_285, 3);
		if (IS_ACTOR_VALID(bLocal_283))
		{
			if (GET_NUM_DRAFTED_ACTORS(bLocal_283) >= 0)
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER(false, bLocal_283, 1, 4);
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_285, bVar0);
			}
			else
			{
				TASK_FLEE_ACTOR(bLocal_285, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
			SET_ACTOR_INVULNERABILITY(bLocal_283, 0);
		}
		else
		{
			TASK_FLEE_ACTOR(bLocal_285, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (IS_ACTOR_VALID(bLocal_286[iVar1]))
		{
			SET_ACTOR_FACTION(bLocal_286[iVar1], 3);
		}
		iVar1++;
	}
	if (IS_ACTOR_VALID(bLocal_284))
	{
		TASK_MELEE_ATTACK(bLocal_284, Global_34573, -1.0f);
	}
	Function_194(9, 1);
	Function_192(&Global_63541[955] + 144, 128);
	Function_186();
	ACTOR_DATA_GRAVITY_LIMIT(0);
	TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	return;
}

void Function_194(int iParam0, bool bParam1) //Position: 0x9897 / 39063
{
	char* cVar0[32];
	
	Global_74542[iParam010] = 7;
	Global_74542[iParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[iParam010] + 4, Global_63541[iParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[iParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (bParam1)
	{
		switch (Global_29004)
		{
			case 0x00000000:
				strcpy(&cVar0, "FTR", 32);
				break;
			
			case 0x00000001:
				strcpy(&cVar0, "MEX", 32);
				break;
			
			case 0x00000002:
				strcpy(&cVar0, "NOR", 32);
				break;
			
			default:
				PRINTSTRING("Unknown territory");
				PRINTINT(Global_29004);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_110(Global_76846, 8192))
	{
		Function_105(Global_34573, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[iParam055].f_140, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_195() //Position: 0x9A17 / 39447
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bLocal_285))
	{
		if (GET_LAST_ATTACKER(bLocal_285) == Global_34573)
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(bLocal_283))
	{
		bVar0 = false;
		while (bVar0 <= GET_NUM_DRAFTED_ACTORS(bLocal_283))
		{
			if (GET_LAST_ATTACKER(GET_DRAFT_ACTOR(bVar0, bLocal_283)) == Global_34573)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_196(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x9A68 / 39528
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_199(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_198(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_197(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_197(int iParam0, int iParam1) //Position: 0x9C9C / 40092
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_198(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x9CCE / 40142
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_199(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9CE6 / 40166
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

bool Function_200(int iParam0) //Position: 0x9D0D / 40205
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_204();
	iVar1 = 0;
	if (!Function_191(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_203(iParam0[iVar03], 8);
		}
		else if (Function_202())
		{
			iVar1 = 1;
			Function_203(iParam0[iVar03], 8);
		}
		Function_203(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_191(iParam0[iVar03], 4))
		{
			if (!Function_191(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_191(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_191(iParam0[03], 8) || iVar1));
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
				Function_203(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_191(iParam0[iVar03], 4))
		{
			if (!Function_191(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
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
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
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
	Function_201();
	return 1;
}

void Function_201() //Position: 0xA088 / 41096
{
	if (!Function_87(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_202() //Position: 0xA0C8 / 41160
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

void Function_203(var uParam0, int iParam1) //Position: 0xA0F3 / 41203
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_204() //Position: 0xA104 / 41220
{
	if (!Function_87(128))
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

var Function_205(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA146 / 41286
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_206(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_203(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_206(var uParam0, int iParam1, int iParam2) //Position: 0xA17E / 41342
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_191(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_203(uParam0[iVar03], 4);
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

var Function_207(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA242 / 41538
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_191(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_203(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_203(uParam0[iVar03], 8);
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

