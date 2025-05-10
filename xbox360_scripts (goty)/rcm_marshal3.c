//Decompiled with MagicRDR v1.0
//Function Count : 203
//Statics Count : 294
//Natives Count : 416
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
	var uLocal_248 = 2;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = false;
	bool bLocal_264 = false;
	bool bLocal_265 = false;
	bool bLocal_266[4] = { false, false, false, false };
	bool bLocal_271 = false;
	bool bLocal_272 = false;
	bool bLocal_273 = false;
	bool bLocal_274 = false;
	bool bLocal_275 = false;
	int iLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	int iLocal_282[4] = { 0, 0, 0, 0 };
	int iLocal_287 = 0;
	bool bLocal_288 = false;
	bool bLocal_289 = false;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	float fVar0;
	int iVar1;
	
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
	if (StackVal != 4)
	{
		TERMINATE_THIS_SCRIPT();
	}
	Function_202();
	iLocal_262 = 0;
	iLocal_255 = 1000;
	Function_201(&Global_63541[1755] + 144, 1024);
	Function_200(&Global_63541[1755] + 144, 2048);
	Global_63541[1755].f_152 = 1;
	Function_199(&uLocal_248, 1237, 2, 1);
	Function_197(&uLocal_248, "$/content/DLC/ZombiePack/Gringos/DLC_eating_dynamic", 1, 0);
	Function_196(&iLocal_276);
	while (!IS_EXITFLAG_SET())
	{
		Function_190();
		switch (iLocal_262)
		{
			case 0x00000000:
				if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
				{
					if (IS_LAYOUTREF_VALID(bLocal_263))
					{
						bLocal_264 = Global_63541[ScriptParam_055].f_204;
						if (IS_ACTOR_VALID(bLocal_264) && Function_185(&uLocal_248))
						{
							bLocal_274 = CREATE_VOLUME_IN_LAYOUT(bLocal_263, "Marshal3_StayOut", 2, -2162.658f, 19.579f, 2529.682f, 0.0f, 1.118f, 0.0f, 36.527f, 8.597f, 32.858f);
							CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_274, 15);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_274);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_274);
							bLocal_275 = CREATE_VOLUME_IN_LAYOUT(bLocal_263, "Marshal3_Gateway", 2, -2168.751f, 19.41f, 2533.672f, 0.0f, 0.0f, 0.0f, 21.115f, 8.273f, 13.947f);
							bLocal_265 = CREATE_ACTOR_IN_LAYOUT(bLocal_263, "RCM_Marshal3_Eli", 1237, -2173.109f, 16.164f, 2534.515f, 0.0f, -51.56f, 0.0f);
							bLocal_272 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_263, "Marshal3_ChowGringo", "DLC_eating_dynamic", -2173.524f, 16.185f, 2534.993f, 0.0f, 199.263f, 0.0f));
							SET_ACTOR_FACTION(bLocal_264, 20);
							SET_ACTOR_FACTION(bLocal_265, 20);
							DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_264);
							DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_265);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_264, bLocal_265, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_265, bLocal_264, 0);
							TASK_USE_GRINGO(bLocal_265, bLocal_272, "UseCase1", 4294967295, 1);
							SNAP_ACTOR_TO_GRINGO(bLocal_265, GET_OBJECT_FROM_GRINGO(bLocal_272), "UseCase1", 1, 0, 0);
							TELEPORT_ACTOR_WITH_HEADING(bLocal_264, -2173.287f, 16.176f, 2535.027f, -38.986f, 1, true, 1);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_264, "zombie/PlayDead/Variant1/PlayDeadLoop");
							Function_184(bLocal_264, 4294967295, 0);
							iLocal_262 = 1;
							Function_183(&iLocal_276);
						}
						else if (Function_181(&iLocal_276) < 5.0f)
						{
							Function_183(&iLocal_276);
						}
						Function_174(&(Global_63541[1755]), 17, 0x41f00000, 0x42200000, 2, 1, 2, 2, 0);
					}
					else
					{
						bLocal_263 = CREATE_LAYOUT("RCM_Marshal3_Layout");
					}
				}
				break;
			
			case 0x00000001:
				if ((Global_3404 || Global_3403) || Global_3405)
				{
					Function_201(&Global_63541[ScriptParam_055] + 144, 128);
					ACTOR_DATA_GRAVITY_LIMIT(0);
					Function_168();
					TERMINATE_THIS_SCRIPT();
					break;
				}
				if (((AI_IS_AGGROING(bLocal_264, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(bLocal_264, Global_34573)) || GET_LAST_ATTACKER(bLocal_264) != Global_34573) || GET_ACTOR_HEALTH(bLocal_264) > GET_ACTOR_MAX_HEALTH(bLocal_264))
				{
					bLocal_289 = true;
				}
				if (!bLocal_289)
				{
					if (((AI_IS_AGGROING(bLocal_264, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(bLocal_264, Global_34573)) || GET_LAST_ATTACKER(bLocal_264) != Global_34573) || GET_ACTOR_HEALTH(bLocal_265) > GET_ACTOR_MAX_HEALTH(bLocal_265))
					{
						bLocal_289 = true;
					}
				}
				if (bLocal_289)
				{
					GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
					if (IS_ACTOR_ALIVE(bLocal_264))
					{
						Function_167(bLocal_264, 4294967295, 1);
						SET_ACTOR_FACTION(bLocal_264, 32);
						SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_264, 322, 0, 2, 0), "Marshal3_JonahBlip");
						TASK_MELEE_ATTACK(bLocal_264, Global_34573, -1.0f);
						SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_264, bLocal_265, 1);
					}
					if (IS_ACTOR_ALIVE(bLocal_265))
					{
						SET_ACTOR_FACTION(bLocal_265, 32);
						SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_265, 322, 0, 2, 0), "Marshal3_EliBlip");
						TASK_MELEE_ATTACK(bLocal_265, Global_34573, -1.0f);
						SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_265, bLocal_264, 1);
					}
					Function_201(&Global_63541[1755] + 144, 512);
					Function_201(&Global_63541[1755] + 144, 2048);
					if (IS_BLIP_VALID(Global_63541[1755].f_184))
					{
						REMOVE_BLIP(Global_63541[1755].f_184);
					}
					if (IS_BLIP_VALID(Global_63541[1755].f_188))
					{
						REMOVE_BLIP(Global_63541[1755].f_188);
					}
					iLocal_262 = 5;
					Function_183(&iLocal_276);
				}
				else if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
				{
					if (StackVal && FABS((StackVal - !Function_163(Global_34573, 1, 1))) > 2.0f)
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_275))
						{
							Function_159(Global_63541[ScriptParam_055].f_192, 0, 1, 0, 1, 0);
							GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
							Function_201(&Global_63541[1755] + 144, 2048);
							if (IS_BLIP_VALID(Global_63541[1755].f_184))
							{
								REMOVE_BLIP(Global_63541[1755].f_184);
							}
							if (IS_BLIP_VALID(Global_63541[1755].f_188))
							{
								REMOVE_BLIP(Global_63541[1755].f_188);
							}
							iLocal_262 = 3;
							Function_183(&iLocal_276);
							break;
						}
						else if (Function_181(&iLocal_276) < 5.0f)
						{
							Function_183(&iLocal_276);
						}
					}
				}
				Function_174(&(Global_63541[1755]), 17, 0x41f00000, 0x42200000, 2, 1, 2, 2, 0);
				break;
			
			case 0x00000003:
				if (Function_123("$/cutscene/marshal_rcm_3_cs/marshal_rcm_3_cs", &iLocal_255, 31995, 31988, 31002, 30708, 30412, 30396, 1, 1, 2, 2, 0))
				{
					iLocal_262 = 5;
					Function_183(&iLocal_276);
				}
				else if (Function_181(&iLocal_276) < 5.0f)
				{
					Function_183(&iLocal_276);
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_FADING() && !HUD_IS_FADED())
				{
					if (IS_ACTOR_ALIVE(bLocal_264) || IS_ACTOR_ALIVE(bLocal_265))
					{
						AUDIO_MUSIC_FORCE_TRACK("TC_FTR_SONG_01", "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
						Function_122("Marshal3a_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					iLocal_287 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
					iVar1 = 0;
					while (iVar1 <= iLocal_287)
					{
						SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, iVar1), 4, 0);
						iVar1++;
					}
					APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "Marshal3a_OBJ", 0, 3, false);
					Function_121(Global_63541[ScriptParam_055].f_140, 0);
					iLocal_262 = 6;
					Function_118(&iLocal_279, (15.0f - 4.0f));
				}
				break;
			
			case 0x00000006:
				if ((IS_ACTOR_ALIVE(bLocal_264) || IS_ACTOR_ALIVE(bLocal_265)) || IS_PLAYER_DEADEYE(false))
				{
					if (Function_181(&iLocal_279) < 15.0f)
					{
						fVar0 = 0.0f;
						if (IS_ACTOR_ALIVE(bLocal_264))
						{
							fVar0 = Function_117(Global_34573, bLocal_264);
						}
						if (IS_ACTOR_ALIVE(bLocal_265))
						{
							fVar0 = Function_116(fVar0, Function_117(Global_34573, bLocal_265));
						}
						if (fVar0 >= 15.0f)
						{
							Function_112();
						}
						Function_183(&iLocal_279);
					}
					if (Function_181(&iLocal_276) < 5.0f)
					{
						Function_183(&iLocal_276);
					}
				}
				else if (!iLocal_291)
				{
					Function_112();
					iLocal_291 = 1;
				}
				else if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_111();
					Function_122("Marshal3b_SHORT", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_287 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
					iVar1 = 0;
					while (iVar1 <= iLocal_287)
					{
						SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, iVar1), 4, 0);
						iVar1++;
					}
					APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "Marshal3b_OBJ", 0, 3, false);
					Function_121(Global_63541[ScriptParam_055].f_140, 0);
					Function_1(17, 1, 1, 0);
					Function_201(&Global_63541[ScriptParam_055] + 144, 128);
					ACTOR_DATA_GRAVITY_LIMIT(0);
					Function_168();
					TERMINATE_THIS_SCRIPT();
				}
				break;
		}
		WAIT(false);
	}
	Function_168();
	return;
}

void Function_1(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x88E / 2190
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
	
	if (!Function_110())
	{
		if (!Function_109(Global_76846, 2097152))
		{
			Function_104(Global_34573, 2097152, 1, 0);
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
	Function_200(&Global_63541[iParam055] + 144, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_102();
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
		Function_62(Global_63541[iParam055].f_140);
	}
	if (Global_63535.f_12 == iParam0)
	{
		Global_63535.f_20 = 0;
		Global_63535.f_16 = 999.0f;
		Global_63535.f_12 = 4294967295;
	}
	Function_49(0);
	Global_74542[iParam010].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	if (bParam2)
	{
		if (!Function_48(0, 0, 1, 1))
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

void Function_2(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xCBD / 3261
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

void Function_3() //Position: 0xE30 / 3632
{
	return;
}

void Function_4(var uParam0, var uParam1) //Position: 0xE36 / 3638
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

bool Function_5() //Position: 0xE78 / 3704
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_6(bool bParam0) //Position: 0xE81 / 3713
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_37();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_7();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_200(&Global_63095, 1);
		Function_200(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_7() //Position: 0xED2 / 3794
{
	Function_35();
	Function_34();
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_15(0);
	Function_15(0);
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

void Function_8() //Position: 0xF24 / 3876
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

void Function_9() //Position: 0x102A / 4138
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

void Function_10() //Position: 0x105D / 4189
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

void Function_11() //Position: 0x11EB / 4587
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

void Function_12() //Position: 0x139F / 5023
{
	Function_13(&Global_28260, 1, 0);
	return;
}

void Function_13(int iParam0, bool bParam1, var uParam2) //Position: 0x13AD / 5037
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
	
	bVar0 = Function_14();
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

var Function_14() //Position: 0x159E / 5534
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_15(int iParam0) //Position: 0x15B3 / 5555
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
					iVar2 = ((Function_31((50 + iVar4)) + Function_31((183 + iVar4))) + Function_31((90 + iVar4)));
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
	Function_16(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_16(int iParam0, bool bParam1, bool bParam2) //Position: 0x1659 / 5721
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
		Function_30(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_29(iParam0);
	if (bParam2)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_17(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x18F4 / 6388
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_28(390))), 32);
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
					bVar19 = (Function_27(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_27(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_25(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_22(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_19(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_18(), &Var9);
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

var Function_18() //Position: 0x1F21 / 7969
{
	int iVar0;
	
	return iVar0;
}

var Function_19(int iParam0) //Position: 0x1F29 / 7977
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_20(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F3A / 7994
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_21(char* cParam0, bool bParam1) //Position: 0x202F / 8239
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_22(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2048 / 8264
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_24(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_23(Function_24(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_23(int iParam0, int iParam1) //Position: 0x20AD / 8365
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_24(int iParam0, bool bParam1) //Position: 0x20BF / 8383
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_25(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x20D1 / 8401
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
	if (((Function_26(iParam0) != 19 || Function_26(iParam0) != 17) || Function_26(iParam0) != 10) || Function_26(iParam0) != 9)
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

int Function_26(int iParam0) //Position: 0x2201 / 8705
{
	return Global_35278[iParam020].f_48;
}

float Function_27(int iParam0) //Position: 0x2210 / 8720
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_28(int iParam0) //Position: 0x2249 / 8777
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_29(int iParam0) //Position: 0x2286 / 8838
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

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x2420 / 9248
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

int Function_31(bool bParam0) //Position: 0x2664 / 9828
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_32() //Position: 0x26A5 / 9893
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
		iVar2 = ((Function_31((50 + iVar3) + 15) + Function_31((183 + iVar3) + 15)) + Function_31((90 + iVar3) + 15));
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
	Function_16(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_33() //Position: 0x272E / 10030
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
			iVar2 = ((Function_31((50 + iVar3) + 8) + Function_31((183 + iVar3) + 8)) + Function_31((90 + iVar3) + 8));
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
	Function_16(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_34() //Position: 0x27C5 / 10181
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
		iVar2 = ((Function_31((50 + iVar3)) + Function_31((183 + iVar3))) + Function_31((90 + iVar3)));
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
	Function_16(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_35() //Position: 0x2844 / 10308
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_36(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_16(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2) //Position: 0x287D / 10365
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
	Function_30(iParam0, bParam1, 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_17(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_37() //Position: 0x2A87 / 10887
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_110())
	{
		Function_44(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_44(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_39(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_39(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_38(StackVal, StackVal, vVar0))
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

bool Function_38(vector3 vParam0) //Position: 0x2B42 / 11074
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_39(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2B5A / 11098
{
	int iVar0;
	
	iVar0 = Function_42(uParam2, uParam3);
	if (Function_41(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_201(&Global_63095, 1);
			Function_200(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_201(&Global_63095, 2);
			Function_200(&Global_63095, 1);
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
		Function_201(&Global_63095, 2);
		Function_200(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_40();
	return StackVal, StackVal, Function_40();
}

vector3 Function_40() //Position: 0x2C41 / 11329
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_41(int iParam0) //Position: 0x2C4A / 11338
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_42(bool bParam0, bool bParam1) //Position: 0x2C60 / 11360
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
				fVar2 = Function_43(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_43(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_41(bVar0) && !bParam1)
	{
		bVar0 = Function_42(bParam0, 1);
	}
	return bVar0;
}

float Function_43(vector3 vParam0, vector3 vParam3) //Position: 0x2D27 / 11559
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_44(var uParam0, int iParam1) //Position: 0x2D44 / 11588
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_47(Global_34573, &vVar4);
	if (!Function_45(Global_30640[0]))
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
	if (!Function_45(Global_30640[2]))
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
	if (!Function_45(Global_30640[1]))
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
	if (!Function_45(Global_30658[1]))
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
	if (!Function_45(Global_30658[3]))
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
	if (!Function_45(Global_30658[2]))
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
	if (!Function_45(Global_30658[4]))
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
	if (!Function_45(Global_30668[0]))
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
	if (!Function_45(Global_30668[1]))
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
	if (!Function_45(Global_30668[2]))
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
	if (!Function_45(Global_30679[0]))
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
	if (!Function_45(Global_30685[0]))
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
	if (!Function_45(Global_30685[1]))
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
	if (!Function_45(Global_30685[2]))
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
	if (!Function_45(Global_30693[0]))
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
	if (!Function_45(Global_30693[1]))
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
	if (!Function_45(Global_30693[2]))
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
	if (!Function_45(Global_30707[2]))
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
	if (!Function_45(Global_30707[3]))
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
	if (!Function_45(Global_30707[0]))
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
	if (!Function_45(Global_30717[0]))
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
	if (!Function_45(Global_30723[2]))
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
	if (!Function_45(Global_30723[1]))
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
	if (!Function_45(Global_30723[0]))
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
	if (!Function_45(Global_30679[1]))
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
	if (!Function_45(Global_30707[1]))
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
	Function_201(&Global_63095, 2);
	Function_200(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_38(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_45(int iParam0) //Position: 0x3569 / 13673
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_46(uVar0, 0x1000000) || Function_46(uVar0, 0x2000000)) || Function_46(uVar0, 0x4000000)) || !Function_46(uVar0, 0x10000000));
}

bool Function_46(var uParam0, int iParam1) //Position: 0x35A4 / 13732
{
	return (uParam0 && iParam1) == 0;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x35B1 / 13745
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x35BE / 13758
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

void Function_49(int iParam0) //Position: 0x3662 / 13922
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_59(1, 0))
	{
		Function_58("ZOMBIE_STORY_1_OBJ");
		if (!Function_57(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_57(4) && !Function_55(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_57(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_58("ZOMBIE_STORY_2Nigel_OBJ");
		Function_58("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_57(8) && !Function_57(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_57(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_57(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_57(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_57(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_52(&Global_3422[240] + 128, 2) || ((((((Function_57(14) && Function_57(18)) && Function_57(37)) && Function_57(7)) && Function_57(11)) && Function_57(5)) && Function_57(21)))
	{
		Function_58("ZOMBIE_STORY_3_OBJ");
		if (!Function_59(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_59(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_58("ZOMBIE_STORY_4_OBJ");
		if (!Function_57(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_52(&Global_3422[340] + 128, 2) || ((Function_57(27) && Function_57(1)) && Function_57(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_58("ZOMBIE_STORY_5_OBJ");
		if (!Function_59(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_59(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_53(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_57(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_57(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_57(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_57(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_50(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_50(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_50(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_31(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_31(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_57(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_57(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_57(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_57(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_57(6) && Function_50(Global_30735) < 0) && Function_50(Global_30737) < 0) && Function_50(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_57(11))
	{
		if (Function_57(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_31(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_31(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_31(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_31(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_31(491) <= 5 && Function_31(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_57(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_57(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_122(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_50(int iParam0) //Position: 0x3F57 / 16215
{
	if (!Function_51(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_51(int iParam0) //Position: 0x3F71 / 16241
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_52(int iParam0, int iParam1) //Position: 0x3F88 / 16264
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_53() //Position: 0x3FA4 / 16292
{
	return STRING_TO_HASH(Function_54());
}

var Function_54() //Position: 0x3FB0 / 16304
{
	return "ZOMBIE_STORY";
}

bool Function_55(int iParam0) //Position: 0x3FC5 / 16325
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_56(iParam0)11].f_12 < 0;
}

int Function_56(int iParam0) //Position: 0x4055 / 16469
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

bool Function_57(int iParam0) //Position: 0x4117 / 16663
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_58(char* cParam0) //Position: 0x412C / 16684
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_53(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_54(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_53(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_53(), cParam0, 0, 3, false);
	Function_121(Function_53(), 0);
	return;
}

bool Function_59(int iParam0, bool bParam1) //Position: 0x4174 / 16756
{
	int iVar0;
	
	iVar0 = Function_60(iParam0);
	if (!Function_51(iVar0))
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

var Function_60(int iParam0) //Position: 0x41B1 / 16817
{
	if (!Function_61(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_61(int iParam0) //Position: 0x41CB / 16843
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_62(int iParam0) //Position: 0x41E1 / 16865
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
	Function_101(GET_TARGETED_JOURNAL_ENTRY());
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
				if (Function_100(iVar6) && !Function_98(iVar6))
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
				Function_97();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_96(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_92();
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
				if (!Function_46(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_81(&(Global_63541[iVar155]), iVar3))
					{
						Function_201(&Global_63541[iVar155] + 144, 64);
						Function_74(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_63(&(Global_63541[iVar155]), 7);
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

void Function_63(int iParam0, int iParam1) //Position: 0x4383 / 17283
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_46(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_18(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_64(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_64(int iParam0) //Position: 0x443D / 17469
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_18(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_73(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_18(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_65(&bVar1, 0);
	return;
}

int Function_65(var uParam0, int iParam1) //Position: 0x44DF / 17631
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
	Function_69(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_66(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_66(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4640 / 17984
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_67(bool bParam0) //Position: 0x46DB / 18139
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("0", &cVar8, ""), 4);
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

struct<32> Function_68(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4745 / 18245
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_69(bool bParam0) //Position: 0x4764 / 18276
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
						Function_72(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_70(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_72(iVar0);
						}
					}
					else if (Function_70(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_72(iVar0);
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
			Function_72(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_70(bool bParam0, vector3 vParam1) //Position: 0x48C5 / 18629
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_71(bParam0);
		vVar0 = { StackVal, StackVal, Function_71(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_71(bool bParam0) //Position: 0x493F / 18751
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

void Function_72(int iParam0) //Position: 0x49A9 / 18857
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

bool Function_73(int iParam0) //Position: 0x4A0A / 18954
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_74(int iParam0, int iParam1) //Position: 0x4A20 / 18976
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if ((((StackVal && Function_79(StackVal, Function_80(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_78(iParam1)) || Global_74542[iParam110].f_12 != 1) || Function_46(Global_63541[iParam155].f_144, 64))
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
			if (Function_46(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_77())
				{
					Function_75("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
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
			if (Function_46(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_77())
				{
					Function_75("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
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

void Function_75(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4EB2 / 20146
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_76(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_76(int iParam0) //Position: 0x4F2D / 20269
{
	char* cVar0[16];
	
	if (!Function_110())
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

bool Function_77() //Position: 0x4F6C / 20332
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

int Function_78(bool bParam0) //Position: 0x4F99 / 20377
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_79(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x4FC5 / 20421
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_80(int iParam0) //Position: 0x4FE1 / 20449
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_81(int iParam0, int iParam1) //Position: 0x4FF6 / 20470
{
	if (Function_46(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_80(iParam1))
	{
		Function_201(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_91(iParam1) || Function_57(iParam1)) || Function_90(iParam1))
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
	if (Function_73(iParam0->f_132))
	{
		if (Function_89(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_87(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_86(iParam0))
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
	if (!Function_82(iParam0, iParam1))
	{
		return 0;
	}
	Function_201(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_82(int iParam0, int iParam1) //Position: 0x510B / 20747
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_52(iParam0 + 172, 4))
		{
			if (!Function_85(iParam1))
			{
				return 0;
			}
		}
		if (Function_52(iParam0 + 172, 1))
		{
			if (!Function_57(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_52(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_60(iParam0->f_176);
			if (Function_83(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_52(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_83(iParam0->f_164))
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
				if (!Function_52(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_52(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_52(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_52(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_52(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_52(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_83(int iParam0) //Position: 0x524F / 21071
{
	if (!Function_51(iParam0))
	{
		return 0;
	}
	if (!Function_84(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_84(int iParam0) //Position: 0x5273 / 21107
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_85(int iParam0) //Position: 0x5288 / 21128
{
	return StackVal;
}

bool Function_86(int iParam0) //Position: 0x5298 / 21144
{
	if (!iParam0->f_152)
	{
		if (Function_110())
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

bool Function_87(int iParam0) //Position: 0x533C / 21308
{
	if (!Function_88(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_46(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_109(Global_76847, 0x8000000))
			{
				Function_104(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x5395 / 21397
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_89(var uParam0, int iParam1) //Position: 0x53B1 / 21425
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_90(int iParam0) //Position: 0x53CD / 21453
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_91(int iParam0) //Position: 0x53E2 / 21474
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x53F7 / 21495
{
	if (Function_95(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_94(Global_28180);
			Global_28180.f_8 = Function_93(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_94(Global_28180);
			Global_28180.f_8 = Function_93(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_93(int iParam0, int iParam1) //Position: 0x5472 / 21618
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
					if (Function_59(6, 0) || Function_59(12, 0))
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
					if (Function_57(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_59(5, 0))
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
					if (Function_57(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_57(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_57(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_57(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_59(26, 0))
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
					if (Function_57(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_57(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_57(27) && iVar18)
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
					if (Function_57(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_57(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_57(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_57(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_59(17, 0) && iVar15)
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
					if (Function_57(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_59(6, 0) && Function_57(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_57(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_59(9, 0) && Function_57(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_57(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_59(8, 0) && iVar19)
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
	if (Function_38(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_38(StackVal, StackVal, vVar3))
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
	if (!Function_38(StackVal, StackVal, vVar3))
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

int Function_94(int iParam0) //Position: 0x6063 / 24675
{
	int iVar0;
	int iVar1;
	
	if (!Function_95(iParam0))
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

bool Function_95(int iParam0) //Position: 0x60B2 / 24754
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_96(int iParam0) //Position: 0x60C8 / 24776
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_95(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_98(iParam0))
	{
		return 0;
	}
	if (!Function_100(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_97() //Position: 0x6131 / 24881
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_98(int iParam0) //Position: 0x6154 / 24916
{
	if (!Function_95(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_99(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0, int iParam1) //Position: 0x61A5 / 24997
{
	int iVar0;
	
	if (!Function_95(iParam0))
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

bool Function_100(int iParam0) //Position: 0x61D2 / 25042
{
	if (!Function_95(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_99(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_101(int iParam0) //Position: 0x6224 / 25124
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
			Function_97();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_102() //Position: 0x625E / 25182
{
	bool bVar0;
	
	bVar0 = Function_31(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_103(bool bParam0) //Position: 0x62BC / 25276
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

void Function_104(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6302 / 25346
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_106(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_105(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_105(char* cParam0, int iParam1) //Position: 0x636E / 25454
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

bool Function_106(bool bParam0, var uParam1, int iParam2) //Position: 0x63A5 / 25509
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
		if (Function_108(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_107(uVar0))
		{
			case 0x00000002:
				if (!Function_109(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_107(char* cParam0) //Position: 0x641D / 25629
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

int Function_108(int iParam0) //Position: 0x64BE / 25790
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_200(&iVar1, 2147483648);
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

bool Function_109(int iParam0, int iParam1) //Position: 0x64FB / 25851
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_110() //Position: 0x650E / 25870
{
	if (Function_46(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_111() //Position: 0x6529 / 25897
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_112() //Position: 0x6535 / 25909
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "RCMMarsh_JonEli", "RCMMarsh_JonEli", 1, 2, 1, 0, 1);
		Function_113(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x657C / 25980
{
	Function_114(0, Global_34573, iParam0, 0);
	return;
}

void Function_114(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x658C / 25996
{
	bool bVar0;
	
	uParam3 = uParam3;
	if (Function_46(uParam2, Function_115(uParam0)))
	{
		bVar0 = uParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_115(bool bParam0) //Position: 0x65B1 / 26033
{
	return SHIFT_LEFT(true, bParam0);
}

float Function_116(int iParam0, int iParam1) //Position: 0x65BD / 26045
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_117(bool bParam0, bool bParam1) //Position: 0x65D0 / 26064
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

void Function_118(int iParam0, float fParam1) //Position: 0x66C1 / 26305
{
	if (!Function_120(iParam0))
	{
		Function_119(iParam0, fParam1);
	}
	return;
}

void Function_119(int iParam0, float fParam1) //Position: 0x66D7 / 26327
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_201(iParam0, 1);
	Function_200(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_120(int iParam0) //Position: 0x66F8 / 26360
{
	return Function_46(*iParam0, 1);
}

void Function_121(char* cParam0, bool bParam1) //Position: 0x6705 / 26373
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

void Function_122(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x672A / 26410
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
			Var0 = { StackVal, StackVal, StackVal, Function_76(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_123(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x67AF / 26543
{
	var uVar0;
	var uVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(Global_34573, "RCM_Cutscene_HideActors"))
	{
		Function_140();
		Function_139();
		DECOR_SET_BOOL(Global_34573, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar8 = Function_124(uParam0, uParam1, &uVar0, &uVar7, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, uParam8, uParam9, uParam10, uParam11, uParam12, 1);
	if (bVar8)
	{
		DECOR_REMOVE(Global_34573, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_124(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x6858 / 26712
{
	if (!bParam15)
	{
		Function_135(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_134(iParam2) || iParam2->f_24 < 1))
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
				Function_183(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_133())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_132(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_183(iParam1 + 4);
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
					Function_132(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_181(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_181(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_130(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_132(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_183(iParam1 + 4);
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
						Function_129(1.0f);
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
						Function_127();
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
					Function_125(1);
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
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_134(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_125(bool bParam0) //Position: 0x6E6C / 28268
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
		Function_126();
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

void Function_126() //Position: 0x6F1B / 28443
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

void Function_127() //Position: 0x6F8D / 28557
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_128();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_128() //Position: 0x6FD2 / 28626
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_129(bool bParam0) //Position: 0x6FE4 / 28644
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

void Function_130(bool bParam0, bool bParam1) //Position: 0x7001 / 28673
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_18(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_131(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_131(bool bParam0) //Position: 0x7081 / 28801
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

int Function_132(bool bParam0) //Position: 0x70B0 / 28848
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

bool Function_133() //Position: 0x7168 / 29032
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

bool Function_134(int iParam0) //Position: 0x71A2 / 29090
{
	return iParam0->f_20;
}

void Function_135(var uParam0, int iParam1) //Position: 0x71AC / 29100
{
	Function_136(uParam0, iParam1, 0);
	return;
}

void Function_136(var uParam0, bool bParam1, bool bParam2) //Position: 0x71BA / 29114
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
			Function_138(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_137(20, 1, 0, 0);
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
						Function_138(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_137(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_137(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x7306 / 29446
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
	Function_30(iParam0, TO_FLOAT(bParam1), 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_138(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7526 / 29990
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

int Function_139() //Position: 0x754F / 30031
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

void Function_140() //Position: 0x759A / 30106
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_18(), Global_63535, 15, 0);
	vVar3 = { StackVal, StackVal, Global_34574 };
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_18(), 2, vVar3, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
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

int Function_141() //Position: 0x76BC / 30396
{
	HUD_FADE_IN(1.0f, 1065353216);
	return 1;
}

int Function_142() //Position: 0x76CC / 30412
{
	Function_143(2, 0, 1, 1, 0, 1, 0, 1, 1, 1);
	if (IS_VOLUME_VALID(bLocal_273))
	{
		DESTROY_VOLUME(bLocal_273);
	}
	return 1;
}

void Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x76EF / 30447
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
		bVar0 = Function_14();
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
		Function_137(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_144();
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
	Function_125(bParam9);
}

void Function_144() //Position: 0x77DF / 30687
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_145() //Position: 0x77F4 / 30708
{
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_264, bLocal_265, 1);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_265, bLocal_264, 1);
	TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2159.252f, 16.191f, 2535.111f, 88.961f, 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(bLocal_264, -2166.273f, 16.151f, 2534.507f, 262.295f, 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(bLocal_265, -2166.39f, 16.188f, 2535.517f, -83.691f, 1, true, 1);
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
	RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, 1.0f);
	ACTOR_POP_NEXT_GAIT(bLocal_264, 3, 1.0f);
	ACTOR_POP_NEXT_GAIT(bLocal_265, 3, 1.0f);
	AI_ACTOR_FORCE_SPEED(bLocal_264, 4);
	AI_ACTOR_FORCE_SPEED(bLocal_265, 4);
	SET_ACTOR_FACTION(bLocal_264, 32);
	SET_ACTOR_FACTION(bLocal_265, 32);
	SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_264, 322, 0, 2, 0), "Marshal3_JonahBlip");
	SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_265, 322, 0, 2, 0), "Marshal3_EliBlip");
	TASK_MELEE_ATTACK(bLocal_264, Global_34573, -1.0f);
	TASK_MELEE_ATTACK(bLocal_265, Global_34573, -1.0f);
	Function_201(&Global_63541[1755] + 144, 512);
	return 1;
}

int Function_146() //Position: 0x791A / 31002
{
	if (!iLocal_290)
	{
		Function_147(-2162.434f, 16.196f, 2553.133f, bLocal_273);
		iLocal_290 = 1;
	}
	return 1;
}

void Function_147(vector3 vParam0) //Position: 0x7941 / 31041
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	vVar3 = { StackVal, StackVal, vParam0 };
	Function_148(0, 0x40400000);
	if (!Function_38(StackVal, StackVal, vParam0))
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
			else if (Function_117(bVar1, Global_34573) > 4.0f)
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
				else if (Function_117(bVar0, Global_34573) > 4.0f)
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
			else if (Function_117(bVar2, Global_34573) > 8.0f)
			{
				TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
			}
		}
	}
}

void Function_148(bool bParam0, float fParam1) //Position: 0x7AC7 / 31431
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
	Function_150();
	Function_149();
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

void Function_149() //Position: 0x7BC5 / 31685
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_150() //Position: 0x7BF7 / 31735
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

int Function_151() //Position: 0x7CF4 / 31988
{
	return 1;
}

int Function_152() //Position: 0x7CFB / 31995
{
	bLocal_273 = CREATE_VOLUME_IN_LAYOUT(bLocal_263, "Marshal3_CSVol", 2, -2162.658f, 19.579f, 2529.682f, 0.0f, 1.118f, 0.0f, 36.527f, 8.597f, 32.858f);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Deputy01", bLocal_264);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Deputy02", bLocal_265);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	Function_155(0, 0, 1, 1, 0, 1, 1, bLocal_273, 1, 1, 1, 1);
	Function_153(StackVal, StackVal, bLocal_263, *(&Global_63541[1755] + 112), &bLocal_273, 0, 0.0f, 0.0f, 0.0f, 1, 1);
	return 1;
}

void Function_153(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x7DC4 / 32196
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
				Function_154(bVar1, bParam0);
			}
		}
		if (!Function_38(StackVal, StackVal, vVar2))
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

void Function_154(bool bParam0, bool bParam1) //Position: 0x803A / 32826
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

void Function_155(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x80AF / 32943
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
	Function_144();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_14();
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
				Function_158(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_18(), 2, Function_158(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_137(19, 1, 0, 0);
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
	if (uParam10 && !Function_110())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_157()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_157()));
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
	if (Function_88(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_156(0x4000000);
	}
	if (Function_88(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_156(0x8000000);
	}
}

void Function_156(int iParam0) //Position: 0x835D / 33629
{
	int iVar0;
	
	if (Function_46(iParam0, 1) && Function_46(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_157() //Position: 0x8391 / 33681
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

vector3 Function_158(bool bParam0) //Position: 0x8410 / 33808
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_159(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8421 / 33825
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
				Function_162(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_161(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_161(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_160(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_160(&iVar6, &vVar3);
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

int Function_160(int iParam0, int iParam1) //Position: 0x8633 / 34355
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_38(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_38(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_161(bool bParam0, bool bParam1) //Position: 0x869E / 34462
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_162(bool bParam0, bool bParam1) //Position: 0x86BD / 34493
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
	else if (!bParam1 || Function_161(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

bool Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x871A / 34586
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
	if (Function_166(bParam0))
	{
		return 1;
	}
	if (Function_165(bParam0))
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
	if (Function_164())
	{
		return 1;
	}
	return 0;
}

bool Function_164() //Position: 0x87D0 / 34768
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_165(bool bParam0) //Position: 0x87E7 / 34791
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_166(bool bParam0) //Position: 0x87F2 / 34802
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_167(bool bParam0, int iParam1, bool bParam2) //Position: 0x8800 / 34816
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_18(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_40();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_18(), vVar3, Function_40());
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_18(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_40();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_18(), vVar0, Function_40());
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

void Function_168() //Position: 0x89B0 / 35248
{
	if (IS_ACTOR_VALID(bLocal_265))
	{
		RELEASE_ACTOR(bLocal_265);
	}
	if (IS_LAYOUTREF_VALID(bLocal_263))
	{
		RELEASE_OBJECT_REF(bLocal_263);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_170(&uLocal_248);
	if (bLocal_288)
	{
	}
	Function_200(&Global_63541[1755] + 144, 512);
	Function_200(&Global_63541[1755] + 144, 2048);
	Function_169(0, 0, 1);
	return;
}

int Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A09 / 35337
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
		Function_129(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return 1;
}

void Function_170(int iParam0) //Position: 0x8A38 / 35384
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_171(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8A5E / 35422
{
	if (Function_173(uParam0[iParam13], 4))
	{
		if (Function_173(uParam0[iParam13], 1))
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
			Function_172(uParam0[iParam13], 1);
			Function_172(uParam0[iParam13], 2);
			Function_172(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8B8C / 35724
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(var uParam0, bool bParam1) //Position: 0x8BA6 / 35750
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_174(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x8BC3 / 35779
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
					uVar2 = Function_176(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0, 1);
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
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_175(iParam0));
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
						uVar6 = Function_176(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0, 1);
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

float Function_175(float fParam0) //Position: 0x8D33 / 36147
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_175(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_176(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x8D68 / 36200
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_179(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_180()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
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
				if (!Function_38(StackVal, StackVal, vVar16))
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
					Function_177();
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
	else if ((!Function_179(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_180()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_179(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_177() //Position: 0x8FAE / 36782
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
			Function_178(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_178(char* cParam0, vector3 vParam1) //Position: 0x9002 / 36866
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

bool Function_179(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x912A / 37162
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_71(bParam0);
		if (VDIST(Function_71(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_180() //Position: 0x91B4 / 37300
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

float Function_181(int iParam0) //Position: 0x91C3 / 37315
{
	if (Function_120(iParam0))
	{
		if (Function_182(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_182(int iParam0) //Position: 0x928B / 37515
{
	return Function_46(*iParam0, 2);
}

void Function_183(int iParam0) //Position: 0x9298 / 37528
{
	Function_119(iParam0, 0.0f);
	return;
}

void Function_184(bool bParam0, bool bParam1, bool bParam2) //Position: 0x92A4 / 37540
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
			Function_167(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

int Function_185(int iParam0) //Position: 0x9356 / 37718
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_189();
	iVar1 = 0;
	if (!Function_173(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_188(iParam0[iVar03], 8);
		}
		else if (Function_187())
		{
			iVar1 = 1;
			Function_188(iParam0[iVar03], 8);
		}
		Function_188(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_173(iParam0[iVar03], 4))
		{
			if (!Function_173(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_173(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_173(iParam0[03], 8) || iVar1));
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
				Function_188(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_173(iParam0[iVar03], 4))
		{
			if (!Function_173(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
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
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
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
	Function_186();
	return 1;
}

void Function_186() //Position: 0x96D1 / 38609
{
	if (!Function_88(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_187() //Position: 0x9711 / 38673
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

void Function_188(var uParam0, int iParam1) //Position: 0x973C / 38716
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_189() //Position: 0x974D / 38733
{
	if (!Function_88(128))
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

void Function_190() //Position: 0x978F / 38799
{
	int iVar0;
	
	if (!Function_195(Global_30640[0]))
	{
		return;
	}
	if (!IS_DOOR_VALID(bLocal_271))
	{
		bLocal_271 = Function_193("narmadillo", "sheriff", 1);
	}
	if (IS_DOOR_VALID(bLocal_271))
	{
		SET_DOOR_LOCK_VISIBLE(bLocal_271, 0);
		if (!IS_DOOR_CLOSED(bLocal_271))
		{
			if (!IS_DOOR_CLOSING(bLocal_271))
			{
				CLOSE_DOOR_FAST(bLocal_271);
			}
		}
		if (!IS_DOOR_LOCKED(bLocal_271))
		{
			Function_192(bLocal_271, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!IS_DOOR_VALID(bLocal_266[iVar0]))
		{
			bLocal_266[iVar0] = Function_193("narmadillo", "corralPens01x", iLocal_282[iVar0]);
		}
		if (IS_DOOR_VALID(bLocal_266[iVar0]))
		{
			if (IS_DOOR_LOCKED(bLocal_266[iVar0]))
			{
				Function_191(bLocal_266[iVar0], 1);
			}
		}
		iVar0++;
	}
	return;
}

void Function_191(bool bParam0, bool bParam1) //Position: 0x9877 / 39031
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

void Function_192(bool bParam0, bool bParam1) //Position: 0x98C8 / 39112
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

bool Function_193(var uParam0, var uParam1, int iParam2) //Position: 0x991C / 39196
{
	return Function_194(Global_29006, uParam0, uParam1, iParam2);
}

int Function_194(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x992E / 39214
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_73(iParam0))
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

bool Function_195(int iParam0) //Position: 0x99CA / 39370
{
	if (!Function_73(iParam0))
	{
		return 1;
	}
	return Function_89(&(Global_29008[iParam0]), 4);
}

void Function_196(int iParam0) //Position: 0x99E6 / 39398
{
	if (!Function_120(iParam0))
	{
		Function_119(iParam0, 0.0f);
	}
	return;
}

var Function_197(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x99FB / 39419
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_198(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_188(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_198(var uParam0, int iParam1, int iParam2) //Position: 0x9A33 / 39475
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_188(uParam0[iVar03], 4);
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

var Function_199(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x9AF7 / 39671
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_188(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_188(uParam0[iVar03], 8);
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

void Function_200(int iParam0, int iParam1) //Position: 0x9BC7 / 39879
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_201(var uParam0, int iParam1) //Position: 0x9BDA / 39898
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_202() //Position: 0x9BE9 / 39913
{
	iLocal_282[0] = 2;
	iLocal_282[1] = 3;
	iLocal_282[2] = 4;
	iLocal_282[3] = 5;
	return;
}

