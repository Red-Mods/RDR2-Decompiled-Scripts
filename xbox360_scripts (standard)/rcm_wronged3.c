//Decompiled with MagicRDR v1.0
//Function Count : 315
//Statics Count : 274
//Natives Count : 486
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 12;
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
	bool bLocal_90 = true;
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
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	bool bLocal_153 = false;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	bool bLocal_156 = false;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	float fLocal_163 = 0.0f;
	bool bLocal_164 = false;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167[6] = { 0, 0, 0, 0, 0, 0 };
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
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	bool bLocal_188 = false;
	bool bLocal_189 = false;
	bool bLocal_190 = false;
	int iLocal_191 = 0;
	bool bLocal_192 = false;
	bool bLocal_193 = false;
	bool bLocal_194 = false;
	bool bLocal_195 = true;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	bool bLocal_205 = false;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	bool bLocal_208 = false;
	vector3 vLocal_209 = { 0.0f, 0.0f, 0.0f };
	int iLocal_212 = 0;
	bool bLocal_213 = false;
	var uLocal_214 = 0;
	bool bLocal_215 = false;
	struct<49> Local_216 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_265 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_268 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_271 = false;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
	iLocal_185 = 0;
	iLocal_186 = 16;
	iLocal_187 = 0;
	bLocal_205 = false;
	iLocal_206 = 1;
	iLocal_207 = 1;
	bLocal_208 = false;
	iLocal_263 = 0;
	vLocal_265 = { 735,66f, 78,306f, 1304,552f };
	vLocal_268 = { 735,404f, 78,306f, 1317,181f };
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
			iLocal_191 = 0;
			bLocal_208 = true;
			Function_314(&bLocal_195, 359, 3, 0);
			Function_312(&bLocal_195, "dead_ground_male", 5, 0);
			Function_312(&bLocal_195, "RandomCharMissions", 10, 0);
			while (!IS_EXITFLAG_SET())
			{
				bLocal_188 = Global_63541[ScriptParam_055].f_204;
				switch (iLocal_191)
				{
					case 0x00000000:
						if (!Function_309(&(Global_63541[ScriptParam_055]), 74, 0, 1))
						{
							Function_308(&Global_63541[ScriptParam_055] + 144, 64);
							Function_306(&(Global_63541[ScriptParam_055]), 74, 0, 1, 1);
							iLocal_191 = 13;
						}
						else if (Function_301(&bLocal_195) && IS_ACTOR_VALID(bLocal_188))
						{
							if (IS_LAYOUTREF_VALID(bLocal_189))
							{
								if (Global_74542[7410].f_20 == 0)
								{
									if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
									{
										if (!IS_OBJECT_VALID(bLocal_190))
										{
											bLocal_190 = CREATE_OBJECTSET_IN_LAYOUT("Wronged_Loot", bLocal_189, 12, 0);
											DECOR_SET_OBJECT(bLocal_188, "lootCorpse_objSet", bLocal_190);
											DECOR_SET_INT(bLocal_188, "nOnlyMoney", 200);
											DECOR_SET_BOOL(bLocal_188, "Weapon", false);
											DECOR_SET_BOOL(bLocal_188, "WrongedKilled", true);
										}
										SET_ACTOR_INVULNERABILITY(bLocal_188, false);
										SET_ACTOR_INVULNERABILITY(Global_34573, false);
										Global_63541[ScriptParam_055].f_152 = 1;
										Function_300(bLocal_188, 0);
										Function_299(bLocal_188);
										MEMORY_ATTACK_ON_SIGHT(bLocal_188, 1);
										COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_188, 4, 15.0f);
										if (SQUAD_IS_VALID(SQUAD_GET(bLocal_188)))
										{
											SQUAD_GOALS_CLEAR(SQUAD_GET(bLocal_188));
										}
										if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192) && IS_ACTOR_VALID(bLocal_188))
										{
											iLocal_191 = 1;
										}
										else if (!IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
										{
										}
										else if (!IS_ACTOR_VALID(bLocal_188))
										{
										}
									}
								}
								else if (Global_74542[7410].f_20 == 1)
								{
									if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
									{
										RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
									}
									if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
									{
										Function_298(Global_63541[ScriptParam_055].f_192);
									}
									if (IS_BLIP_VALID(Global_63541[ScriptParam_055].f_184))
									{
										REMOVE_BLIP(Global_63541[ScriptParam_055].f_184);
									}
									Function_297(&Global_63541[ScriptParam_055] + 144, 2048);
									Function_297(&Global_63541[ScriptParam_055] + 144, 512);
									if (IS_LAYOUTREF_VALID(bLocal_189) && IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
									{
										bLocal_194 = CREATE_OBJECT_ITERATOR(bLocal_189);
										ITERATE_IN_LAYOUT(bLocal_194, GET_GC_LAYOUT());
										ITERATE_ON_OBJECT_TYPE(bLocal_194, 29);
										bLocal_193 = START_OBJECT_ITERATOR(bLocal_194);
										while (IS_OBJECT_VALID(bLocal_193))
										{
											if (DECOR_GET_BOOL(bLocal_193, "WaterKilled"))
											{
												bLocal_192 = bLocal_193;
												GET_OBJECT_POSITION(bLocal_192, &vLocal_209);
												REFERENCE_OBJECT(bLocal_192);
												*(&Global_63541[7455] + 100) = { StackVal, StackVal, vLocal_209 };
												bLocal_205 = true;
											}
											bLocal_193 = OBJECT_ITERATOR_NEXT(bLocal_194);
										}
										DESTROY_ITERATOR(bLocal_194);
										iLocal_191 = 3;
									}
								}
							}
							else if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Wronged_layout")))
							{
								Function_295();
								bLocal_189 = bLocal_271;
							}
							else
							{
								bLocal_189 = FIND_NAMED_LAYOUT("Wronged_layout");
							}
						}
						break;
					
					case 0x00000001:
						if (!Function_309(&(Global_63541[ScriptParam_055]), 74, 0, 1))
						{
							Function_308(&Global_63541[ScriptParam_055] + 144, 64);
							Function_306(&(Global_63541[ScriptParam_055]), 74, 0, 1, 1);
							iLocal_191 = 13;
						}
						else if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
						{
							if (IS_ACTOR_VALID(bLocal_188) && ((((IS_ACTOR_HOGTIED(bLocal_188) || IS_AI_ACTOR_ENGAGED_IN_COMBAT(bLocal_188)) || AI_IS_AGGROING(bLocal_188, Global_34573)) || AI_IS_HOSTILE_OR_ENEMY(bLocal_188, Global_34573)) || Function_294(Global_34573, bLocal_188, 1, 1, 0, 3212836864)))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
								{
									RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
								}
								if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
								{
									Function_298(Global_63541[ScriptParam_055].f_192);
								}
								if (IS_BLIP_VALID(Global_63541[ScriptParam_055].f_184))
								{
									REMOVE_BLIP(Global_63541[ScriptParam_055].f_184);
								}
								Function_297(&Global_63541[ScriptParam_055] + 144, 2048);
								Function_297(&Global_63541[ScriptParam_055] + 144, 512);
								HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(bLocal_188, true);
								HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bLocal_188, 322);
								SET_ACTOR_FACTION(bLocal_188, 19);
								TASK_SHOOT_FROM_POSITION(bLocal_188, Global_34573, &Global_63541[ScriptParam_055] + 100);
								TASK_PRIORITY_SET(bLocal_188, true);
								iLocal_191 = 5;
							}
							else if (!IS_ACTOR_VALID(bLocal_188) || !IS_ACTOR_ALIVE(bLocal_188))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
								{
									RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
								}
								if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
								{
									Function_298(Global_63541[ScriptParam_055].f_192);
								}
								if (IS_BLIP_VALID(Global_63541[ScriptParam_055].f_184))
								{
									REMOVE_BLIP(Global_63541[ScriptParam_055].f_184);
								}
								Function_297(&Global_63541[ScriptParam_055] + 144, 2048);
								Function_297(&Global_63541[ScriptParam_055] + 144, 512);
								iLocal_191 = 5;
							}
							if (GATEWAY_UPDATE(Global_63541[ScriptParam_055].f_192))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200) && !Function_290(Global_34573, 0, 1))
								{
									iLocal_191 = 2;
								}
								else if (((!IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200) && HAS_STRING_TABLE_LOADED("RandomCharMissions")) && IS_LAYOUTREF_VALID(bLocal_189)) && !Function_290(Global_34573, 0, 1))
								{
									Global_63541[ScriptParam_055].f_200 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(&Global_63541[ScriptParam_055] + 24, GATEWAY_GET_VOLUME(Global_63541[ScriptParam_055].f_192), 30, 5, 0, false, 0, 0, 4294967295, 0);
								}
							}
							else if (Function_290(Global_34573, 0, 1) && IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
							{
								RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
							}
						}
						break;
					
					case 0x00000002:
						if (IS_ACTOR_VALID(bLocal_188) && ((((IS_ACTOR_HOGTIED(bLocal_188) || IS_AI_ACTOR_ENGAGED_IN_COMBAT(bLocal_188)) || AI_IS_AGGROING(bLocal_188, Global_34573)) || AI_IS_HOSTILE_OR_ENEMY(bLocal_188, Global_34573)) || Function_294(Global_34573, bLocal_188, 1, 1, 0, 3212836864)))
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
							{
								RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
							}
							if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
							{
								Function_298(Global_63541[ScriptParam_055].f_192);
							}
							if (IS_BLIP_VALID(Global_63541[ScriptParam_055].f_184))
							{
								REMOVE_BLIP(Global_63541[ScriptParam_055].f_184);
							}
							Function_297(&Global_63541[ScriptParam_055] + 144, 2048);
							Function_297(&Global_63541[ScriptParam_055] + 144, 512);
							HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(bLocal_188, true);
							HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bLocal_188, 322);
							SET_ACTOR_FACTION(bLocal_188, 19);
							TASK_SHOOT_FROM_POSITION(bLocal_188, Global_34573, &Global_63541[ScriptParam_055] + 100);
							TASK_PRIORITY_SET(bLocal_188, true);
							iLocal_191 = 5;
						}
						else if (!IS_ACTOR_VALID(bLocal_188) || !IS_ACTOR_ALIVE(bLocal_188))
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
							{
								RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
							}
							if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
							{
								Function_298(Global_63541[ScriptParam_055].f_192);
							}
							if (IS_BLIP_VALID(Global_63541[ScriptParam_055].f_184))
							{
								REMOVE_BLIP(Global_63541[ScriptParam_055].f_184);
							}
							Function_297(&Global_63541[ScriptParam_055] + 144, 2048);
							Function_297(&Global_63541[ScriptParam_055] + 144, 512);
							iLocal_191 = 5;
						}
						if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
						{
							if (GATEWAY_UPDATE(Global_63541[ScriptParam_055].f_192))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200) && Global_74542[ScriptParam_010] != 5)
								{
									if ((StackVal && FABS((StackVal - !Function_290(Global_34573, 0, 1))) > 2.0f) && IS_SCRIPT_USE_CONTEXT_PRESSED(Global_63541[ScriptParam_055].f_200))
									{
										RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
										if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
										{
											GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
										}
										HUD_FADE_OUT(1.0f, 1f, 1);
										SET_PLAYER_CONTROL(0, 0, 0, 0);
										iLocal_191 = 6;
									}
								}
							}
							if (Function_290(Global_34573, 0, 1) || !GATEWAY_UPDATE(Global_63541[ScriptParam_055].f_192))
							{
								if (IS_SCRIPT_USE_CONTEXT_VALID(Global_63541[ScriptParam_055].f_200))
								{
									RELEASE_SCRIPT_USE_CONTEXT(Global_63541[ScriptParam_055].f_200);
									iLocal_191 = 1;
								}
							}
						}
						break;
					
					case 0x00000003:
						if (!bLocal_205)
						{
							bLocal_192 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_189, Function_289(), 359, *(&Global_63541[ScriptParam_055] + 100), 0.0f, 180.0f, 0.0f, "dead_ground_male");
							if (!IS_OBJECT_VALID(bLocal_190))
							{
								bLocal_190 = CREATE_OBJECTSET_IN_LAYOUT("Wronged_Loot", bLocal_189, 12, 0);
								DECOR_SET_OBJECT(bLocal_188, "lootCorpse_objSet", bLocal_190);
								DECOR_SET_INT(bLocal_188, "nOnlyMoney", 200);
								DECOR_SET_BOOL(bLocal_188, "Weapon", false);
								DECOR_SET_BOOL(bLocal_188, "WrongedKilled", true);
							}
							SET_CORPSE_PERMANENT(bLocal_192, 1);
							REFERENCE_OBJECT(bLocal_192);
							iLocal_191 = 11;
						}
						else
						{
							iLocal_191 = 11;
						}
						break;
					
					case 0x00000006:
						if (HUD_IS_FADED())
						{
							GATEWAY_DISABLE(Global_63541[7455].f_192, 1);
							Function_297(&Global_63541[7455] + 144, 512);
							Function_288();
							MAKE_ACTOR_READY_FOR_ACTION(bLocal_188, 1);
							TASK_STAND_STILL(bLocal_188, -1.0f, 0, 0);
							bLocal_215 = CREATE_VOLUME_IN_LAYOUT(bLocal_189, Function_289(), 2, vLocal_268, 0.0f, 0.0f, 0.0f, 12.0f, 10.0f, 40.0f);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_215);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_215);
							if (IS_BLIP_VALID(Global_63541[ScriptParam_055].f_184))
							{
								REMOVE_BLIP(Global_63541[ScriptParam_055].f_184);
							}
							TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_265, 178,098f, 1, true, 1);
							TELEPORT_ACTOR_WITH_HEADING(bLocal_188, vLocal_268, 3,323f, 1, true, 1);
							Function_287(StackVal, StackVal, StackVal, StackVal, &Local_216, bLocal_188, vLocal_265, vLocal_268, 175, 0, bLocal_189, 0, 0, 0);
							Local_216.f_48 = 1;
							Function_125(&Local_216, &iLocal_263, &iLocal_241, &iLocal_264, 74);
							iLocal_191 = 9;
						}
						break;
					
					case 0x00000005:
						if (!IS_ACTOR_ALIVE(bLocal_188))
						{
							Global_74542[7410].f_20 = 1;
							if (!IS_OBJECT_VALID(bLocal_190))
							{
								bLocal_190 = CREATE_OBJECTSET_IN_LAYOUT("Wronged_Loot", bLocal_189, 12, 0);
								DECOR_SET_OBJECT(bLocal_188, "lootCorpse_objSet", bLocal_190);
							}
							if (iLocal_207)
							{
								Function_124("Wronged2a_SHORT", 0x40f00000, 1, 2, 0, 0, 0);
								Global_74542[7510].f_16 = 1;
								iLocal_212 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
								bLocal_213 = false;
								while (bLocal_213 <= iLocal_212)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, bLocal_213), 4, 0);
									bLocal_213++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "Wronged2a_OBJ", 0, 3, false);
								Function_123(Global_63541[ScriptParam_055].f_140, 0);
								iLocal_207 = 0;
							}
							iLocal_191 = 8;
						}
						else if (IS_ACTOR_HOGTIED(bLocal_188) || (UNK_0x7A207FFE(bLocal_188) && GET_LAST_ATTACKER(bLocal_188) != Global_34573))
						{
							if (iLocal_206)
							{
								Function_122("RCM_Wronged_Kill_Money", 0x41200000, 1, 0, 2, 1, 0);
								iLocal_206 = 0;
							}
							iLocal_191 = 5;
						}
						else if (!GET_TASK_STATUS(bLocal_188, 8) != 1 || (!GET_TASK_STATUS(bLocal_188, 4294967295) != 3 && IS_ACTOR_ALIVE(bLocal_188)))
						{
							TASK_SHOOT_FROM_POSITION(bLocal_188, Global_34573, &Global_63541[ScriptParam_055] + 100);
							TASK_PRIORITY_SET(bLocal_188, true);
							if (iLocal_207)
							{
								Function_124("Wronged2a_SHORT", 7,5f, 1, 0, 0, 0, 0);
								iLocal_212 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
								bLocal_213 = false;
								while (bLocal_213 <= iLocal_212)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, bLocal_213), 4, 0);
									bLocal_213++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "Wronged2a_OBJ", 0, 3, false);
								Function_123(Global_63541[ScriptParam_055].f_140, 0);
								iLocal_207 = 0;
							}
						}
						break;
					
					case 0x00000008:
						if (IS_LAYOUTREF_VALID(bLocal_189) && IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
						{
							bLocal_194 = CREATE_OBJECT_ITERATOR(bLocal_189);
							ITERATE_IN_LAYOUT(bLocal_194, GET_GC_LAYOUT());
							ITERATE_ON_OBJECT_TYPE(bLocal_194, 29);
							bLocal_193 = START_OBJECT_ITERATOR(bLocal_194);
							while (IS_OBJECT_VALID(bLocal_193))
							{
								if (DECOR_GET_BOOL(bLocal_193, "WrongedKilled"))
								{
									bLocal_192 = bLocal_193;
									REFERENCE_OBJECT(bLocal_192);
									GET_OBJECT_POSITION(bLocal_192, &vLocal_209);
									*(&Global_63541[7455] + 100) = { StackVal, StackVal, vLocal_209 };
									iLocal_191 = 11;
								}
								bLocal_193 = OBJECT_ITERATOR_NEXT(bLocal_194);
							}
							DESTROY_ITERATOR(bLocal_194);
						}
						break;
					
					case 0x00000009:
						if (Function_125(&Local_216, &iLocal_263, &iLocal_241, &iLocal_264, 74))
						{
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							REQUEST_STRING_TABLE("RandomCharMissions");
							iLocal_191 = 10;
						}
						break;
					
					case 0x0000000A:
						if (DECOR_GET_INT(Global_34573, "iDuelResult") == 5001)
						{
							if (HAS_STRING_TABLE_LOADED("RandomCharMissions"))
							{
								Global_74542[7410].f_20 = 1;
								Global_74542[7510].f_16 = 2;
								Function_106(50, 1, 0);
								Function_124("Wronged3a_OBJ", 0x40f00000, 1, 2, 0, 0, 0);
								iLocal_212 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
								bLocal_213 = false;
								while (bLocal_213 <= iLocal_212)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, bLocal_213), 4, 0);
									bLocal_213++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "Wronged3a_OBJ", 0, 3, false);
								Function_123(Global_63541[ScriptParam_055].f_140, 0);
								iLocal_191 = 8;
							}
						}
						else
						{
							Global_74542[7410].f_20 = 0;
							DECOR_REMOVE(Global_34573, "iDuelResult");
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_308(&Global_63541[ScriptParam_055] + 144, 512);
							Function_297(&Global_63541[ScriptParam_055] + 144, 128);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							iLocal_191 = 13;
						}
						break;
					
					case 0x0000000B:
						if (GET_OBJECTSET_SIZE(bLocal_190) != 0)
						{
							bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bLocal_190);
							if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bVar0))
							{
								HUD_CLEAR_HELP();
								UI_REMOVE_MESSAGE_IN_QUEUE("Wronged_Help3", 1, 0);
								Function_124("Wronged3_SHORT", 0x40f00000, 1, 2, 0, 0, 0);
								iLocal_212 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[ScriptParam_055].f_140);
								bLocal_213 = false;
								while (bLocal_213 <= iLocal_212)
								{
									SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[ScriptParam_055].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[ScriptParam_055].f_140, bLocal_213), 4, 0);
									bLocal_213++;
								}
								APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[ScriptParam_055].f_140, "Wronged3_OBJ", 0, 3, false);
								Function_123(Global_63541[ScriptParam_055].f_140, 0);
								Function_13(74, 1, 1, 0);
								DECOR_REMOVE(Global_34573, "iDuelResult");
								ACTOR_DATA_GRAVITY_LIMIT(0);
								Function_297(&Global_63541[ScriptParam_055] + 144, 128);
								Function_308(&Global_63541[ScriptParam_055] + 144, 512);
								TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
								iLocal_191 = 13;
							}
						}
						if (StackVal && !Function_9(StackVal, Function_10(Global_34573, bLocal_192) < 100.0f, vLocal_209, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							Function_122("Wronged_HELP2", 0x41200000, 1, 0, 2, 1, 0);
							Function_308(&Global_63541[ScriptParam_055] + 144, 2048);
							Function_8(74);
							DESTROY_OBJECT(bLocal_192);
							Function_297(&Global_63541[ScriptParam_055] + 144, 128);
							ACTOR_DATA_GRAVITY_LIMIT(0);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
						}
						break;
				}
				WAIT(false);
			}
			break;
	}
	Function_308(&Global_63541[ScriptParam_055] + 144, 512);
	Function_308(&Global_63541[ScriptParam_055] + 144, 2048);
	if (IS_LAYOUTREF_VALID(bLocal_189))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_189);
		RELEASE_LAYOUT_REF(bLocal_189);
	}
	if (IS_OBJECT_VALID(bLocal_192))
	{
		RELEASE_OBJECT_REF(bLocal_192);
	}
	if (IS_VOLUME_VALID(bLocal_215))
	{
		DESTROY_VOLUME(bLocal_215);
	}
	if (bLocal_208)
	{
		Function_7();
	}
	Function_3(&bLocal_195);
	Function_1(0, 0);
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0x1047 / 4167
{
	if (bParam0)
	{
		CAMERA_RESET(0);
	}
	if (bParam1)
	{
		Function_2(1.0f);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(bool bParam0) //Position: 0x1062 / 4194
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

void Function_3(bool bParam0) //Position: 0x107F / 4223
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_4(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x10A5 / 4261
{
	if (Function_6(uParam0[iParam13], 4))
	{
		if (Function_6(uParam0[iParam13], 1))
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
			Function_5(uParam0[iParam13], 1);
			Function_5(uParam0[iParam13], 2);
			Function_5(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x11D3 / 4563
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_6(int iParam0, int iParam1) //Position: 0x11ED / 4589
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x120A / 4618
{
	RELEASE_LAYOUT_REF(bLocal_271);
	return;
}

void Function_8(bool bParam0) //Position: 0x1216 / 4630
{
	char* cVar0[32];
	
	Global_74542[bParam010] = 7;
	Global_74542[bParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam010] + 4, Global_63541[bParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_63541[bParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
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
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam055].f_140, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_9(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1378 / 4984
{
}

float Function_10(bool bParam0, bool bParam1) //Position: 0x1394 / 5012
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_12(bParam0);
			vVar0 = { StackVal, StackVal, Function_12(bParam0) };
			Function_11(bParam1);
			vVar3 = { StackVal, StackVal, Function_11(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_11(bool bParam0) //Position: 0x1434 / 5172
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

vector3 Function_12(bool bParam0) //Position: 0x14A0 / 5280
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

void Function_13(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x150A / 5386
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
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
	
	if (bParam1)
	{
		PLAY_SOUND_FRONTEND("HUD_MENU_JOURNAL_MASTER");
	}
	if (!Function_105(Global_76846, 2097152))
	{
		Function_100(Global_34573, 2097152, 1, 0);
	}
	iVar0 = iParam0;
	if (iVar0 + 1 <= 77)
	{
		if (Global_63541[iVar0 + 155].f_160)
		{
			bVar2 = (GET_DAY(GET_TIME_OF_DAY()) + GET_DAY(Global_63541[iVar0 + 155].f_156));
			bVar3 = (GET_HOUR(GET_TIME_OF_DAY()) + GET_HOUR(Global_63541[iVar0 + 155].f_156));
			iVar4 = (GET_MINUTE(GET_TIME_OF_DAY()) + GET_MINUTE(Global_63541[iVar0 + 155].f_156));
			iVar5 = (GET_SECOND(GET_TIME_OF_DAY()) + GET_SECOND(Global_63541[iVar0 + 155].f_156));
			bVar1 = MAKE_TIME_OF_DAY_EX(bVar2, bVar3, iVar4, iVar5);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
		}
		PRINTSTRING("Time next quest leg will be available: ");
		Function_99(bVar1);
		PRINTNL();
		Global_63541[iVar0 + 155].f_156 = bVar1;
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
	Function_308(&Global_63541[iParam055] + 144, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_98();
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
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
	{
		Function_56(Global_63541[iParam055].f_140);
	}
	if (Global_63535.f_12 == iParam0)
	{
		Global_63535.f_20 = 0;
		Global_63535.f_16 = 999.0f;
		Global_63535.f_12 = 4294967295;
	}
	if (bParam2)
	{
		if (!Function_55(0, 0, 1, 1))
		{
			Function_18(1);
			Function_16(bParam1, 7);
		}
		else
		{
			Function_15();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 1);
	if (IS_ACTOR_VALID(Global_63541[iParam055].f_204))
	{
		Function_14(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
		if (iParam0 == 35)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(Global_63541[iParam055].f_204, "RCM_CALL_OVER", "RCM_STILL_HERE_PRE2");
		}
		if (iParam0 == 36)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(Global_63541[iParam055].f_204, "RCM_STILL_HERE", "RCM_STILL_HERE_POST2");
		}
		if (iParam0 == 58)
		{
			AUDIO_ADD_ALTERNATE_CONTEXT(Global_63541[iParam055].f_204, "RCM_STILL_HERE", "RCM_COMPLETE_STILL_HERE");
		}
		if (iParam0 == 70)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		if (iParam0 == 26)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		if (iParam0 == 55)
		{
			SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			return;
		}
		SET_RCM_ACTOR_CALL_OVER_ENABLE(Global_63541[iParam055].f_204, 1, 1, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23);
	}
	else
	{
		PRINTSTRING("SET_RCM_ACTOR_CALL_OVER_ENABLE called with invalid actor.");
		PRINTNL();
	}
}

void Function_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1A3F / 6719
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
			*uParam5 = 2,5f;
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

void Function_15() //Position: 0x1BB2 / 7090
{
	return;
}

void Function_16(bool bParam0, int iParam1) //Position: 0x1BB8 / 7096
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_17())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_17() //Position: 0x1BFA / 7162
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_18(bool bParam0) //Position: 0x1C03 / 7171
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_48();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_19();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_308(&Global_63095, 1);
		Function_308(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_19() //Position: 0x1C54 / 7252
{
	Function_46();
	Function_45();
	Function_45();
	Function_44();
	Function_44();
	Function_43();
	Function_43();
	Function_27();
	Function_27();
	if (!Function_17())
	{
		Function_24();
		Function_23();
		Function_22();
		Function_21();
	}
	Function_20();
	return;
}

void Function_20() //Position: 0x1C87 / 7303
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

void Function_21() //Position: 0x1D8D / 7565
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

void Function_22() //Position: 0x1DC0 / 7616
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

void Function_23() //Position: 0x1F4E / 8014
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

void Function_24() //Position: 0x2102 / 8450
{
	Function_25(&Global_28260, 1, 0);
	return;
}

void Function_25(int iParam0, bool bParam1, var uParam2) //Position: 0x2110 / 8464
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
	
	bVar0 = Function_26();
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

var Function_26() //Position: 0x2301 / 8961
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_27() //Position: 0x2316 / 8982
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
				iVar2 = ((Function_42((50 + iVar4)) + Function_42((183 + iVar4))) + Function_42((90 + iVar4)));
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
	Function_28(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_28(int iParam0, bool bParam1, bool bParam2) //Position: 0x23B1 / 9137
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
		Function_41(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_40(iParam0);
	if (bParam2)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x264C / 9804
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_39(390))), 32);
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
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_36(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_33(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_30(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_289(), &Var9);
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

var Function_30(int iParam0) //Position: 0x2C79 / 11385
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_31(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2C8A / 11402
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_32(char* cParam0, char* cParam1) //Position: 0x2D7F / 11647
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2D98 / 11672
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_35(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x2DFD / 11773
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x2E0F / 11791
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2E21 / 11809
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
	if (((Function_37(iParam0) != 19 || Function_37(iParam0) != 17) || Function_37(iParam0) != 10) || Function_37(iParam0) != 9)
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

int Function_37(int iParam0) //Position: 0x2F51 / 12113
{
	return Global_35278[iParam020].f_48;
}

float Function_38(int iParam0) //Position: 0x2F60 / 12128
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_39(int iParam0) //Position: 0x2F99 / 12185
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_40(int iParam0) //Position: 0x2FD6 / 12246
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

int Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x3170 / 12656
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

int Function_42(bool bParam0) //Position: 0x338A / 13194
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_43() //Position: 0x33CB / 13259
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
		iVar2 = ((Function_42((50 + iVar3) + 15) + Function_42((183 + iVar3) + 15)) + Function_42((90 + iVar3) + 15));
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
	Function_28(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_44() //Position: 0x3454 / 13396
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
			iVar2 = ((Function_42((50 + iVar3) + 8) + Function_42((183 + iVar3) + 8)) + Function_42((90 + iVar3) + 8));
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
	Function_28(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_45() //Position: 0x34EB / 13547
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
		iVar2 = ((Function_42((50 + iVar3)) + Function_42((183 + iVar3))) + Function_42((90 + iVar3)));
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
	Function_28(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_46() //Position: 0x356A / 13674
{
	Function_47(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_28(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_47(int iParam0, bool bParam1, int iParam2) //Position: 0x3590 / 13712
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
	Function_41(iParam0, bParam1, 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_29(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_48() //Position: 0x379A / 14234
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_50(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_50(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_49(StackVal, StackVal, vVar0))
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

bool Function_49(vector3 vParam0) //Position: 0x383B / 14395
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_50(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3853 / 14419
{
	int iVar0;
	
	iVar0 = Function_53(uParam2, uParam3);
	if (Function_52(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_297(&Global_63095, 1);
			Function_308(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_297(&Global_63095, 2);
			Function_308(&Global_63095, 1);
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
		Function_297(&Global_63095, 2);
		Function_308(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_51();
	return StackVal, StackVal, Function_51();
}

vector3 Function_51() //Position: 0x393A / 14650
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_52(int iParam0) //Position: 0x3943 / 14659
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_53(bool bParam0, bool bParam1) //Position: 0x3959 / 14681
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
				fVar2 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_54(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_52(bVar0) && !bParam1)
	{
		bVar0 = Function_53(bParam0, 1);
	}
	return bVar0;
}

float Function_54(vector3 vParam0, vector3 vParam3) //Position: 0x3A20 / 14880
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_55(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3A3D / 14909
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_56(bool bParam0) //Position: 0x3AE1 / 15073
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	if (Function_17())
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (bVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_97(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_96(iVar6) && !Function_94(iVar6))
				{
					if (bParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_93();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_92(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_87();
				TARGET_JOURNAL_ENTRY(bParam0);
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
				if (!Function_86(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_70(&(Global_63541[iVar155]), iVar3))
					{
						Function_297(&Global_63541[iVar155] + 144, 64);
						Function_67(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_57(&(Global_63541[iVar155]), 7);
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

void Function_57(int iParam0, int iParam1) //Position: 0x3C83 / 15491
{
	int iVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_86(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	iVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_289(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, iVar0, iVar0, iVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_58(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_58(int iParam0) //Position: 0x3D3D / 15677
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_289(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_66(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
}

int Function_59(var uParam0, int iParam1) //Position: 0x3DDF / 15839
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
	Function_63(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_60(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_60(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3F40 / 16192
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_61(bool bParam0) //Position: 0x3FDB / 16347
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("0", &cVar8, ""), 4);
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

struct<32> Function_62(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4047 / 16455
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_63(bool bParam0) //Position: 0x4066 / 16486
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
						Function_65(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_64(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_65(iVar0);
						}
					}
					else if (Function_64(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_65(iVar0);
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
			Function_65(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_64(bool bParam0, vector3 vParam1) //Position: 0x41C7 / 16839
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_12(bParam0);
		vVar0 = { StackVal, StackVal, Function_12(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_65(int iParam0) //Position: 0x4241 / 16961
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

bool Function_66(int iParam0) //Position: 0x42A2 / 17058
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_67(int iParam0, int iParam1) //Position: 0x42B8 / 17080
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0,5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_9(StackVal, Function_69(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_68(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1,25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, true);
		SET_BLIP_COLOR(iParam0->f_188, 0,58f, 0,35f, 0,72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0,5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0,58f, 0,35f, 0,72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

int Function_68(int iParam0) //Position: 0x43FD / 17405
{
	if ((Global_74542[iParam010] != 3 || Global_74542[iParam010] != 4) || Global_74542[iParam010] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_69(int iParam0) //Position: 0x4429 / 17449
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_70(int iParam0, int iParam1) //Position: 0x443E / 17470
{
	if (Function_86(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_69(iParam1))
	{
		Function_297(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_85(iParam1) || Function_84(iParam1)) || Function_83(iParam1))
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
	if (Function_66(iParam0->f_132))
	{
		if (Function_82(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_80(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_79(iParam0))
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
	if (!Function_71(iParam0, iParam1))
	{
		return 0;
	}
	Function_297(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_71(int iParam0, int iParam1) //Position: 0x4553 / 17747
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_78(iParam0 + 172, 4))
		{
			if (!Function_77(iParam1))
			{
				return 0;
			}
		}
		if (Function_78(iParam0 + 172, 1))
		{
			if (!Function_84(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_78(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_75(iParam0->f_176);
			if (Function_72(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_78(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_72(iParam0->f_164))
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
				if (!Function_78(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_78(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_78(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_78(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_78(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_78(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_72(int iParam0) //Position: 0x4697 / 18071
{
	if (!Function_74(iParam0))
	{
		return 0;
	}
	if (!Function_73(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_73(int iParam0) //Position: 0x46BB / 18107
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_74(int iParam0) //Position: 0x46D0 / 18128
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_75(int iParam0) //Position: 0x46E7 / 18151
{
	if (!Function_76(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_76(int iParam0) //Position: 0x4701 / 18177
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x4717 / 18199
{
	return StackVal;
}

bool Function_78(var uParam0, int iParam1) //Position: 0x4727 / 18215
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x4743 / 18243
{
	if (!iParam0->f_152)
	{
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(false, iParam0->f_204, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x478A / 18314
{
	if (!Function_81(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_86(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_105(Global_76847, 0x8000000))
			{
				Function_100(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_81(int iParam0) //Position: 0x47E3 / 18403
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1) //Position: 0x47FF / 18431
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_83(int iParam0) //Position: 0x481B / 18459
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_84(int iParam0) //Position: 0x4830 / 18480
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_85(int iParam0) //Position: 0x4845 / 18501
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_86(bool bParam0, bool bParam1) //Position: 0x485A / 18522
{
	return (bParam0 && bParam1) == 0;
}

void Function_87() //Position: 0x4867 / 18535
{
	if (Function_91(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_90(Global_28180);
			Global_28180.f_8 = Function_88(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_90(Global_28180);
			Global_28180.f_8 = Function_88(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_88(int iParam0, int iParam1) //Position: 0x48E2 / 18658
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
					if (Function_89(6, 0) || Function_89(12, 0))
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
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
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
					if (Function_84(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_89(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
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
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
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
					if (Function_84(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_84(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_84(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_84(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_89(26, 0))
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
					if (Function_84(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_84(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_84(27) && iVar18)
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
					if (Function_84(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_84(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_84(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_84(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_89(17, 0) && iVar15)
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
					if (Function_84(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_89(6, 0) && Function_84(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_84(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_89(9, 0) && Function_84(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_84(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_89(8, 0) && iVar19)
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
	if (Function_49(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_49(StackVal, StackVal, vVar3))
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
	if (!Function_49(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

bool Function_89(int iParam0, bool bParam1) //Position: 0x54D3 / 21715
{
	int iVar0;
	
	iVar0 = Function_75(iParam0);
	if (!Function_74(iVar0))
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

int Function_90(int iParam0) //Position: 0x5510 / 21776
{
	int iVar0;
	int iVar1;
	
	if (!Function_91(iParam0))
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

bool Function_91(int iParam0) //Position: 0x555F / 21855
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_92(int iParam0) //Position: 0x5575 / 21877
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_91(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_94(iParam0))
	{
		return 0;
	}
	if (!Function_96(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_93() //Position: 0x55DE / 21982
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_94(int iParam0) //Position: 0x5601 / 22017
{
	if (!Function_91(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_95(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_95(int iParam0, int iParam1) //Position: 0x5652 / 22098
{
	int iVar0;
	
	if (!Function_91(iParam0))
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

bool Function_96(int iParam0) //Position: 0x567F / 22143
{
	if (!Function_91(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_95(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_97(bool bParam0) //Position: 0x56D1 / 22225
{
	bool bVar0;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			Function_93();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_98() //Position: 0x570B / 22283
{
	bool bVar0;
	
	bVar0 = Function_42(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_99(bool bParam0) //Position: 0x5769 / 22377
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

void Function_100(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x57AF / 22447
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_102(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_101(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_101(char* cParam0, int iParam1) //Position: 0x581B / 22555
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

bool Function_102(bool bParam0, var uParam1, int iParam2) //Position: 0x5852 / 22610
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
		if (Function_104(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_103(uVar0))
		{
			case 0x00000002:
				if (!Function_105(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_103(char* cParam0) //Position: 0x58CA / 22730
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

int Function_104(int iParam0) //Position: 0x596B / 22891
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_308(&iVar1, 2147483648);
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

bool Function_105(var uParam0, int iParam1) //Position: 0x59A8 / 22952
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_106(int iParam0, bool bParam1, bool bParam2) //Position: 0x59BB / 22971
{
	int iVar0;
	bool bVar1;
	
	if (Function_121(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_42(3);
	Function_118();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_116(3, bVar1);
		if (!bParam2)
		{
			if (!Function_105(Global_76848, 4))
			{
				Function_100(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_115(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_38(3));
	iVar0 = Function_42(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_108(4, Function_114(Global_12976.f_156), 1);
				Function_107(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_108(4, Function_114(Global_12976.f_156), 1);
				Function_107(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_108(4, Function_114(Global_12976.f_156), 1);
				Function_107(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_108(4, Function_114(Global_12976.f_156), 1);
				Function_107(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_108(4, Function_114(Global_12976.f_156), 1);
				Function_107(Global_12976.f_152, Global_12976.f_156);
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

void Function_107(int iParam0, int iParam1) //Position: 0x5B7E / 23422
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_108(int iParam0, char* cParam1, bool bParam2) //Position: 0x5DDC / 24028
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
	Function_112(iParam0, cParam1, 0, 1);
	iVar1 = Function_109();
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

int Function_109() //Position: 0x5F61 / 24417
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
	Function_110();
	return 0;
}

void Function_110() //Position: 0x6000 / 24576
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
		Function_111(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_111(int iParam0) //Position: 0x60AF / 24751
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

int Function_112(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x610D / 24845
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
		Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_113(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x645F / 25695
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

var Function_114(int iParam0) //Position: 0x64E2 / 25826
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

int Function_115(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6571 / 25969
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
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_116(int iParam0, bool bParam1) //Position: 0x6791 / 26513
{
	bool bVar0;
	int iVar1;
	
	Function_115(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_117(iParam0, 4294967295);
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
	iVar1 = Function_109();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_117(int iParam0, int iParam1) //Position: 0x692E / 26926
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

void Function_118() //Position: 0x696F / 26991
{
	Function_120(3, 0.0f);
	Function_119(3, 10000.0f);
	return;
}

int Function_119(int iParam0, int iParam1) //Position: 0x6985 / 27013
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_120(int iParam0, int iParam1) //Position: 0x69C5 / 27077
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_121(int iParam0) //Position: 0x6A05 / 27141
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_122(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6A14 / 27156
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_123(bool bParam0, bool bParam1) //Position: 0x6A5F / 27231
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

void Function_124(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x6A84 / 27268
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

bool Function_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6AD7 / 27351
{
	vector3 vVar0;
	
	while (!iParam2->f_84)
	{
		if ((*iParam1 < 0 && *iParam1 > 3) && (GET_CURRENT_GAME_TIME() - iParam2->f_80) < 30.0f)
		{
			if (HUD_IS_FADED())
			{
				Function_2(1.0f);
			}
			Function_272(iParam0);
			PRINTSTRING("Dueling - Streaming Time Out");
			PRINTNL();
		}
		switch (*iParam1)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(StackVal))
				{
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(StackVal);
				}
				bLocal_161 = CREATE_LAYOUT("dueling_layout");
				if (!IS_VOLUME_VALID(iParam0->f_32))
				{
					vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), *(iParam0 + 8), StackVal) };
					VSCALE(&vVar0, 0,5f);
					iParam0->f_32 = CREATE_VOLUME_IN_LAYOUT(bLocal_161, "Duel_StayOut", 2, vVar0, 0.0f, 0.0f, 0.0f, 15.0f, 10.0f, 15.0f);
				}
				iParam0->f_64 = 4294967293;
				if (iParam4 >= 4294967295)
				{
					Function_297(&Global_63541[iParam455] + 144, 512);
				}
				if (iParam0->f_60 == 0)
				{
					bLocal_162 = RAND_INT_RANGE(false, true);
				}
				else
				{
					bLocal_162 = RAND_INT_RANGE(false, 2);
				}
				iParam2->f_80 = GET_CURRENT_GAME_TIME();
				if (IS_ACTOR_DRUNK(*iParam0))
				{
					SET_ACTOR_DRUNK(*iParam0, 0);
				}
				SATCHEL_SET_ENABLED(0);
				if (HAS_ACCESSORY_ENUM(StackVal, 0))
				{
					iParam2->f_56 = 1;
				}
				*iParam3 = 1004;
				Function_271(iParam0 + 60, iParam0->f_40, !IS_ACTOR_ALIVE(iParam0->f_44), *iParam0);
				Function_261(iParam0);
				if (iParam0->f_92)
				{
					Global_3369 = 0;
					*iParam1 = 5;
				}
				else
				{
					*iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_301(&bLocal_90))
				{
					Function_260(iParam2 + 44);
					*iParam1 = 2;
					SET_HUD_MAP_DRAW_ENABLED(0);
				}
				else
				{
					Function_257(iParam0);
				}
				break;
			
			case 0x00000002:
				if (Function_257(iParam0) || Function_255(iParam2 + 44) < 2.0f)
				{
					*iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				Global_3369 = 1;
				SET_HUD_MAP_DRAW_ENABLED(0);
				if (StackVal && IS_ACTOR_ALIVE(IS_ACTOR_ALIVE(*iParam0)))
				{
					iParam0->f_68 = 0;
					Function_233(iParam0);
					if (HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_IN(1.0f, 1065353216);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					if (iParam0->f_36)
					{
						iParam2->f_16 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", iParam0 + 68, 6, 0);
					}
					if (!DECOR_CHECK_EXIST(*iParam0, "bIsDuelActive"))
					{
						DECOR_SET_BOOL(*iParam0, "bIsDuelActive", true);
					}
					*iParam1 = 7;
				}
				else
				{
					if (iParam4 >= 4294967295)
					{
						Function_308(&Global_63541[iParam455] + 144, 512);
					}
					Function_2(1.0f);
					Function_272(iParam0);
					PRINTSTRING("Dueling - Fail");
					PRINTNL();
					return 1;
				}
				break;
			
			case 0x00000005:
				Function_301(&bLocal_90);
				Function_257(iParam0);
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					if (Function_301(&bLocal_90))
					{
						CAMERA_RESET(0);
						if (HUD_IS_FADED())
						{
							HUD_FADE_IN(1.0f, 1065353216);
						}
					}
				}
				else
				{
					if (!Global_3369)
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						RESET_ANIM_SET_FOR_ACTOR(StackVal, 1);
						AI_IGNORE_ACTOR(StackVal);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						GIVE_WEAPON_TO_ACTOR(StackVal, 4, false, 1, 1);
						TELEPORT_ACTOR(StackVal, iParam0 + 20, 1, 1, 0);
						iParam0->f_68 = 0;
						Function_233(iParam0);
						if (iParam0->f_36)
						{
							iParam2->f_16 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", iParam0 + 68, 6, 0);
						}
						SET_HUD_MAP_DRAW_ENABLED(0);
						Global_3369 = 1;
					}
					Function_232(iParam0);
					if (Function_227(StackVal, iParam3, iParam2 + 32, *iParam0, !iParam0->f_36))
					{
						if (iParam0->f_92 && DECOR_CHECK_EXIST(*iParam0, "unpauseduel"))
						{
							DECOR_REMOVE(*iParam0, "unpauseduel");
						}
						*iParam1 = 10;
					}
				}
				break;
			
			case 0x00000007:
				Function_232(iParam0);
				if (Function_227(StackVal, iParam3, iParam2 + 32, *iParam0, !iParam0->f_36))
				{
					CAMERA_RESET(0);
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					*iParam1 = 10;
				}
				break;
			
			case 0x0000000A:
				if ((StackVal || IS_ACTION_NODE_PLAYING_PARTIAL(IS_ACTION_NODE_PLAYING_PARTIAL(StackVal, "draw"), "nhold_draw")) && !iParam2->f_64)
				{
					Function_226("Dueling_Tutorial_DrawNow", "DUEL_CAMERA_CUT_MASTER", 3212836864, 0, 0, 0, 0);
					iParam2->f_64 = 1;
				}
				if (StackVal || IS_ACTION_NODE_PLAYING_PARTIAL(IS_ACTION_NODE_PLAYING_PARTIAL(StackVal, "draw"), "nhold_draw"))
				{
				}
				Function_223(iParam0);
				if (Function_222())
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					if (!StackVal)
					{
						DYNAMICMIXER_DETRIGGERSTATE(iParam2->f_12, 1);
						iParam2->f_4 = 0;
						iParam2->f_4 = StackVal;
					}
					if (!IS_WEAPON_DRAWN(StackVal))
					{
						iParam2->f_60 = 1;
					}
					*iParam1 = 11;
				}
				else if (Function_221() == 5003)
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*iParam0), "iDuelResult", 5003);
					Function_260(iParam2 + 20);
					*iParam1 = 13;
				}
				break;
			
			case 0x0000000B:
				Function_223(iParam0);
				if (Function_221() >= 4294967295)
				{
					Function_137(iParam0, iParam2->f_60);
					if (iParam2->f_56)
					{
						if (!HAS_ACCESSORY_ENUM(StackVal, 0))
						{
							iParam2->f_56 = 0;
							Function_115(455, 1, 0, 0);
						}
					}
					Function_260(iParam2 + 20);
					if (Function_221() == 5003)
					{
						iParam2->f_72 = 1;
						*iParam1 = 13;
					}
					else
					{
						iParam2->f_76 = 1;
						if (iParam0->f_96)
						{
							*iParam1 = 14;
						}
						else
						{
							Function_136(iParam0);
							*iParam1 = 12;
						}
					}
				}
				break;
			
			case 0x0000000C:
				Function_223(iParam0);
				if (Function_135())
				{
					if (!bLocal_164)
					{
						Function_130(iParam0);
					}
					iParam2->f_68 = 1;
				}
				if (Function_126(iParam0))
				{
					*iParam1 = 13;
				}
				break;
			
			case 0x0000000D:
				Function_223(iParam0);
				if (IS_ACTOR_VALID(StackVal))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(StackVal);
				}
				if (Function_135())
				{
					if (!bLocal_164)
					{
						Function_130(iParam0);
					}
					iParam2->f_68 = 1;
				}
				if (iParam2->f_68)
				{
					if (IS_SCRIPT_VALID(iParam2->f_16))
					{
						TERMINATE_SCRIPT(iParam2->f_16);
					}
					if (IS_ACTOR_VALID(*iParam0))
					{
						if (IS_ACTOR_ALIVE(*iParam0) && DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(*iParam0), "iDuelResult") != 5003)
						{
							LOG_ERROR("player should be dead, killing him!");
							SET_ACTOR_INVULNERABILITY(*iParam0, false);
							KILL_ACTOR(*iParam0);
						}
					}
					Function_272(iParam0);
					PRINTSTRING("Dueling - Terminating Cleanly");
					PRINTNL();
					iParam2->f_84 = 1;
				}
				break;
			
			case 0x0000000E:
				if (!bLocal_164)
				{
					Function_130(iParam0);
				}
				if (IS_SCRIPT_VALID(iParam2->f_16))
				{
					TERMINATE_SCRIPT(iParam2->f_16);
				}
				Function_272(iParam0);
				PRINTSTRING("Dueling - Terminating Cleanly");
				PRINTNL();
				iParam2->f_84 = 1;
				break;
		}
		return 0;
	}
	if (iParam2->f_76)
	{
		if (IS_SCRIPT_VALID(iParam2->f_16))
		{
			TERMINATE_SCRIPT(iParam2->f_16);
		}
		Function_272(iParam0);
		PRINTSTRING("Dueling - Pass");
		PRINTNL();
		return 1;
	}
	if (iParam2->f_72)
	{
		if (iParam4 >= 4294967295)
		{
			Function_308(&Global_63541[iParam455] + 144, 512);
		}
		if (IS_SCRIPT_VALID(iParam2->f_16))
		{
			TERMINATE_SCRIPT(iParam2->f_16);
		}
		Function_272(iParam0);
		PRINTSTRING("Dueling - Fail");
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_126(int iParam0) //Position: 0x72A3 / 29347
{
	float fVar0;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_163);
	Function_127(iParam0, fVar0);
	if (fVar0 < 5.0f)
	{
		return 1;
	}
	return 0;
}

void Function_127(var uParam0, bool bParam1) //Position: 0x72CF / 29391
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0 };
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					if (DECOR_CHECK_EXIST(bVar2, "DuelCrowdActorReactionTimer"))
					{
						if (bParam1 < DECOR_GET_FLOAT(bVar2, "DuelCrowdActorReactionTimer"))
						{
							bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
							Function_128(bVar2, bVar3);
							DECOR_REMOVE(bVar2, "DuelCrowdActorReactionTimer");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_128(bool bParam0, bool bParam1) //Position: 0x73C4 / 29636
{
	if ((bParam1 && 8) != 0)
	{
		Function_129(bParam0, bParam1, "hat_tip");
	}
	else if ((bParam1 && 32) != 0)
	{
	}
	else
	{
		Function_129(bParam0, bParam1, "Reaction");
	}
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7405 / 29701
{
	char* cVar0[64];
	
	if ((bParam1 && 512) != 0)
	{
		strcpy(&cVar0, "crowd_duel_left/", 64);
	}
	else if ((bParam1 && 1024) != 0)
	{
		strcpy(&cVar0, "crowd_duel_right/", 64);
	}
	else
	{
		strcpy(&cVar0, "crowd_duel_center/", 64);
	}
	stradd(&cVar0, bParam2, 64);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, &cVar0);
	return;
}

void Function_130(int iParam0) //Position: 0x747B / 29819
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		if (IS_ACTOR_ALIVE(StackVal))
		{
			AI_GOAL_AIM_CLEAR(StackVal);
			ACTOR_FORCE_WEAPON_RENDER(StackVal, 1, 0);
			if (IS_ACTOR_CRIPPLED(StackVal, 5))
			{
				DECOR_SET_BOOL(StackVal, "Duel", true);
			}
		}
		else
		{
			DECOR_SET_BOOL(StackVal, "Duel", true);
		}
		AUDIO_DISALLOW_PREDUEL_SPEECH(StackVal);
	}
	AUDIO_DISALLOW_PREDUEL_SPEECH(*iParam0);
	SATCHEL_SET_ENABLED(1);
	AI_GLOBAL_CLEAR_ALL_DANGER();
	AI_STOP_IGNORING_ACTORS();
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		if (IS_ACTOR_ALIVE(StackVal))
		{
			STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(StackVal);
		}
	}
	if (IS_VOLUME_VALID(iParam0->f_56))
	{
		RESET_PROPS_IN_VOLUME(iParam0->f_56, 1);
	}
	if (IS_ACTORSET_VALID(bLocal_152))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(bLocal_152))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_152, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				TASK_CLEAR(bVar1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
				if (IS_ACTOR_HORSE(bVar1))
				{
					SET_ALLOW_RIDE_BY_PLAYER(bVar1, 1);
				}
			}
			bVar0++;
		}
		DESTROY_ACTORSET(bLocal_152);
	}
	if (IS_OBJECTSET_VALID(bLocal_151))
	{
		DESTROY_OBJECTSET(bLocal_151);
	}
	if (IS_ACTOR_VALID(iParam0->f_44))
	{
		if (IS_LAYOUTREF_VALID(bLocal_161))
		{
			if (Function_134(iParam0->f_44) == bLocal_161)
			{
				RELEASE_ACTOR(iParam0->f_44);
			}
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_44);
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial0Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial0Complete");
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial1Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial1Complete");
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial2Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial2Complete");
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial3Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial3Complete");
	}
	if (iLocal_155)
	{
		Function_132(9);
		iLocal_155 = 0;
	}
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (IS_OBJECT_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
		if (DECOR_CHECK_EXIST(*iParam0, "bHostageDraw"))
		{
			DECOR_REMOVE(*iParam0, "bHostageDraw");
		}
	}
	if (IS_ACTOR_ALIVE(*iParam0))
	{
		if (!DECOR_CHECK_EXIST(*iParam0, "bIsDuelOver"))
		{
			DECOR_SET_BOOL(*iParam0, "bIsDuelOver", true);
		}
		Global_62993 = 0;
	}
	Function_131(1);
	if (!Global_3380)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
			REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(iParam0->f_32, 0);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
		}
	}
	CAMERA_RESET(0);
	bLocal_164 = true;
	return;
}

void Function_131(int iParam0) //Position: 0x7767 / 30567
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_132(int iParam0) //Position: 0x777A / 30586
{
	Function_133(&Global_28842, iParam0);
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x7788 / 30600
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

int Function_134(bool bParam0) //Position: 0x77A3 / 30627
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

bool Function_135() //Position: 0x77FD / 30717
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x0000138E:
				return 1;
				break;
			
			default:
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_136(int iParam0) //Position: 0x7834 / 30772
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	fLocal_163 = GET_CURRENT_GAME_TIME();
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					bVar3 = RAND_FLOAT_RANGE(1,5f, 2.0f);
					DECOR_SET_FLOAT(bVar2, "DuelCrowdActorReactionTimer", bVar3);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x78CB / 30923
{
	switch (Function_221())
	{
		case 0x0000138A:
			Function_155(Function_216(GET_ACTOR_ENUM(*uParam0), 6, 4), (!Global_3380 && !Function_215()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5002);
			MEMORY_CLEAR_ALL(StackVal);
			SET_ACTOR_FACE_STYLE(StackVal, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(StackVal, false);
			AI_GLOBAL_CLEAR_DANGER(StackVal);
			AUDIO_PLAY_VOCAL_EFFECT(StackVal, 10, 1);
			Function_115(451, 1, 0, 0);
			Function_115(454, 1, 0, 0);
			Function_115(452, 1, 0, 0);
			if (!Global_3380 && !(((Function_154(48) || Function_154(74)) || Function_154(51)) || Function_154(67)))
			{
				Function_106(100, 1, 0);
				Function_150(200, 1, 0);
			}
			Function_138(6, Global_29006);
			break;
		
		case 0x00001389:
			Function_155(Function_216(GET_ACTOR_ENUM(*uParam0), 6, 4), (!Global_3380 && !Function_215()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5001);
			Function_115(451, 1, 0, 0);
			Function_115(452, 1, 0, 0);
			if (!Global_3380 && !(((Function_154(48) || Function_154(74)) || Function_154(51)) || Function_154(67)))
			{
				Function_106(50, 1, 0);
			}
			if (iParam1 && !(((Function_154(48) || Function_154(74)) || Function_154(51)) || Function_154(67)))
			{
				if (!DECOR_CHECK_EXIST(StackVal, "honor"))
				{
					Function_150(4294967196, 1, 0);
				}
				else
				{
					DECOR_SET_BOOL(*uParam0, "bDrewFirst", true);
				}
			}
			Function_138(6, Global_29006);
			break;
		
		case 0x0000138C:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5004);
			break;
		
		case 0x0000138B:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5003);
			break;
		
		case 0x0000138D:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5005);
			break;
	}
	return;
}

void Function_138(int iParam0, int iParam1) //Position: 0x7ACF / 31439
{
	if (!Function_149(3))
	{
		return;
	}
	if (Function_17())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3())
				{
					Function_139(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_139(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_139(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_139(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_139(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_139(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_139(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_96(2) && !Function_94(2))
				{
					Function_139(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7BDD / 31709
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_91(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_149(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_95(bParam0, 2))
	{
		Function_115(456, 1, 0, 0);
		Function_148(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_122(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_147(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_148(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_55(0, 0, 1, 1))
			{
				Function_18(1);
				Function_16(1, 0);
			}
			else
			{
				Function_15();
			}
		}
		Function_143(bParam0);
		if (StackVal && !Function_86(((((!Function_142() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_86((((Function_142() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_105(Global_76846, 2))
		{
			Function_100(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_87();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_141(3, bParam1);
				break;
			
			case 0x00000005:
				Function_141(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_141(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_141(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_141(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_141(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_140(2, 24);
				break;
			
			case 0x00000003:
				Function_140(2, 25);
				break;
			
			case 0x0000000F:
				Function_140(2, 26);
				break;
			
			case 0x0000000D:
				Function_140(2, 27);
				break;
			
			case 0x0000000E:
				Function_140(2, 28);
				break;
			}
	}
}

void Function_140(int iParam0, bool bParam1) //Position: 0x7E6C / 32364
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_141(int iParam0, bool bParam1) //Position: 0x7ED3 / 32467
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

bool Function_142() //Position: 0x7F32 / 32562
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_143(bool bParam0) //Position: 0x7F5F / 32607
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_147(bParam0, Function_146(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_147(bParam0, Function_146(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_145(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_123(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_144(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_144(int iParam0) //Position: 0x8111 / 33041
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_91(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

var Function_145(int iParam0) //Position: 0x8168 / 33128
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_91(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

int Function_146(bool bParam0) //Position: 0x81BE / 33214
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(bool bParam0, int iParam1) //Position: 0x81CA / 33226
{
	int iVar0;
	
	if (!Function_91(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_148(bool bParam0, int iParam1) //Position: 0x8229 / 33321
{
	if (!Function_91(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_149(int iParam0) //Position: 0x827E / 33406
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_150(int iParam0, bool bParam1, bool bParam2) //Position: 0x829A / 33434
{
	int iVar0;
	bool bVar1;
	
	if (Function_121(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_42(1);
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
			Function_116(1, bVar1);
			if (!bParam2)
			{
				if (!Function_105(Global_76848, 1))
				{
					Function_100(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_153(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_105(Global_76848, 2))
				{
					Function_100(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_115(1, bVar1, 0, 0);
	}
	else
	{
		Function_152(1, (4294967295 * bVar1), 0);
	}
	if (Function_42(1) <= 4294962296)
	{
		Function_28(1, 4294962296, 0);
	}
	else if (Function_42(1) >= 5000)
	{
		Function_28(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_38(1));
	iVar0 = Function_42(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_108(2, Function_151(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_108(2, Function_151(Global_12976.f_152), 0);
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
				Function_108(2, Function_151(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_108(2, Function_151(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_108(2, Function_151(Global_12976.f_152), 1);
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
				Function_108(2, Function_151(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_108(2, Function_151(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_108(2, Function_151(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_108(2, Function_151(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_108(2, Function_151(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_108(2, Function_151(Global_12976.f_152), 1);
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
				Function_108(2, Function_151(Global_12976.f_152), 0);
			}
			break;
	}
	Function_107(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_151(int iParam0) //Position: 0x85AF / 34223
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

int Function_152(int iParam0, bool bParam1, int iParam2) //Position: 0x8652 / 34386
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
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_153(int iParam0, bool bParam1) //Position: 0x884D / 34893
{
	bool bVar0;
	int iVar1;
	
	Function_152(iParam0, bParam1, 0);
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
	iVar1 = Function_117(iParam0, 4294967295);
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
	iVar1 = Function_109();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

bool Function_154(int iParam0) //Position: 0x89E9 / 35305
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_155(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x89FE / 35326
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_214(12);
	Function_212(2);
	Function_210((15 - Function_211(105)));
	if (Function_209(bParam0) == 1)
	{
		iVar2 = Function_208(bParam0);
		Function_203(&(Global_3422[iVar240]));
		Function_202(4194304);
		if (bParam3)
		{
			Function_178(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_176(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_178(iVar2, &uVar0, 0);
		}
		bVar1 = Function_175();
		if (bParam1)
		{
			Function_172(iVar2, bParam0, bVar1);
			Function_171();
		}
	}
	Function_158(bParam0, bParam1, iParam2, bVar1);
	if (Function_209(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_157(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_209(bParam0) == 1)
		{
			iVar2 = Function_208(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_156();
}

void Function_156() //Position: 0x8AEB / 35563
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_89(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_157(int iParam0, bool bParam1) //Position: 0x8B1B / 35611
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_157(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_157(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_157(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_157(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_157(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_157(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8E12 / 36370
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_72(bParam0))
	{
		Function_169();
		return;
	}
	iVar0 = Function_209(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_208(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_168(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_167(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_165();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_163("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_160(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_208(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_18(1);
			Function_16(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_159(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_159(int iParam0, int iParam1) //Position: 0x9024 / 36900
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_160(bool bParam0) //Position: 0x905E / 36958
{
	int iVar0;
	int iVar1;
	
	if (!Function_74(bParam0))
	{
		return;
	}
	switch (Function_209(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_208(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_115(12, 1, 0, 0);
				Function_140(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_115(13, 1, 0, 0);
				Function_140(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_115(14, 1, 0, 0);
				Function_140(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_115(15, 1, 0, 0);
				Function_140(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_115(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_208(bParam0))
			{
				case 0x00000000:
					if (Function_162(bParam0) == 1)
					{
						iVar0 = Function_161(bParam0);
						if (Function_66(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_140(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_140(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_140(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_140(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_140(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_140(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_140(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_140(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_140(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_140(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_140(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_140(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_140(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_140(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_140(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_140(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_140(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_140(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_140(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_140(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_115(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_115(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_115(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_161(bParam0) == 0)
			{
				if (Function_162(bParam0) == 1)
				{
					Function_115(458, 1, 0, 0);
					iVar0 = Function_208(bParam0);
					if (Function_66(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_140(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_140(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_140(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_140(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_140(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_140(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_140(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_140(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_162(bParam0) == 1)
			{
				Function_115(400, 1, 0, 0);
			}
			switch (Function_208(bParam0))
			{
				case 0x00000001:
					Function_115(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_140(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_140(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_140(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_115(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_140(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_140(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_161(bool bParam0) //Position: 0x953A / 38202
{
	if (!Function_74(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_162(bool bParam0) //Position: 0x9559 / 38233
{
	if (!Function_74(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_163(char* cParam0, bool bParam1) //Position: 0x9573 / 38259
{
	struct<4> Var0;
	
	if (!Function_72(bParam1))
	{
		return;
	}
	switch (Function_209(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_164(Function_208(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_209(bParam1), Function_208(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_209(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_209(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_209(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_209(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_209(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_164(int iParam0) //Position: 0x9697 / 38551
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_165() //Position: 0x96BC / 38588
{
	int iVar0;
	int iVar1;
	
	if (!Function_76(Global_6269))
	{
		return;
	}
	iVar0 = Function_42(24);
	iVar1 = Function_75(Global_6269);
	if (!Function_76(iVar0) && Function_166(iVar1) < 0)
	{
		Function_28(24, Global_6269, 0);
		Function_112(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_166(Function_75(iVar0)))
	{
		Function_28(24, Global_6269, 0);
		Function_112(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_166(int iParam0) //Position: 0x973C / 38716
{
	if (!Function_72(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_167(int iParam0) //Position: 0x9756 / 38742
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_168(char* cParam0) //Position: 0x9780 / 38784
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_169() //Position: 0x99D6 / 39382
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_170(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_170(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9C1D / 39965
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

void Function_171() //Position: 0x9C46 / 40006
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x9C74 / 40052
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_76(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_174(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_42(42) - Global_34165.f_116);
				bVar1 = (Function_42(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_39(49)) - Global_34165.f_124);
				bVar3 = (Function_42(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_42(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_173(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_106(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_167(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

int Function_173(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x9F10 / 40720
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_174(int iParam0) //Position: 0xA0D8 / 41176
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_175() //Position: 0xA16D / 41325
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_176(int iParam0) //Position: 0xA192 / 41362
{
	if (!Function_76(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_106(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_106(25, 1, 0);
			Function_177(1, 1);
			break;
		
		case 0x00000015:
			Function_177(50, 1);
			Function_106(250, 1, 0);
			Function_150(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_106(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_106(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_177(50, 1);
			Function_106(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_177(5, 1);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_106(75, 1, 0);
			Function_150(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_177(5, 1);
			Function_106(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_106(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_177(25, 1);
			Function_106(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_177(10, 1);
			Function_106(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_106(50, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_106(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_106(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_150(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_177(20, 1);
			Function_106(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_177(25, 1);
			Function_106(150, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_177(10, 1);
			Function_106(150, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_106(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_150(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_150(100, 1, 0);
			Function_177(5, 1);
			break;
		
		case 0x0000000F:
			Function_177(3, 1);
			Function_106(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_150(125, 1, 0);
			Function_106(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_177(50, 1);
			Function_106(100, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_177(50, 1);
			Function_106(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_177(75, 1);
			Function_106(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_106(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_106(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_106(250, 1, 0);
			Function_150(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_106(75, 1, 0);
			Function_150(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_106(200, 1, 0);
			Function_150(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_106(75, 1, 0);
			Function_150(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_106(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_177(50, 1);
			Function_106(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_177(100, 1);
			Function_106(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_106(200, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_106(300, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_106(300, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_106(300, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_106(500, 1, 0);
			Function_150(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_106(150, 1, 0);
			Function_150(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_150(25, 1, 0);
			Function_177(100, 1);
			break;
		
		case 0x0000002A:
			Function_106(150, 1, 0);
			Function_150(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_150(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_150(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_150(150, 1, 0);
			Function_177(100, 1);
			break;
		
		case 0x00000035:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_150(150, 1, 0);
			Function_177(100, 1);
			break;
		
		case 0x00000032:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_150(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

int Function_177(bool bParam0, bool bParam1) //Position: 0xA64D / 42573
{
	bool bVar0;
	
	bVar0 = Function_42(0);
	if ((Function_42(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_115(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_42(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_115(597, bParam0, 0, 0);
	}
	if ((Function_42(597) + Function_42(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_178(int iParam0, var uParam1, bool bParam2) //Position: 0xA718 / 42776
{
	struct<4> Var0;
	
	if (!Function_76(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_200(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_198(Global_30640[0]);
			Function_198(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_196(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_198(Global_30668[0]);
			Function_194(0);
			Function_192(2, 1);
			Function_192(0, 1);
			Function_192(1, 1);
			break;
		
		case 0x00000003:
			Function_198(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_198(Global_30668[0]);
			Function_198(Global_30640[0]);
			Function_190(0, 1);
			Function_190(15, 1);
			Function_190(9, 1);
			Function_190(12, 1);
			Function_190(16, 1);
			Function_192(3, 1);
			break;
		
		case 0x00000005:
			Function_198(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_196(21, bParam2, 4);
			Function_198(Global_30668[0]);
			Function_192(39, 1);
			break;
		
		case 0x00000007:
			Function_198(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_198(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_96(4))
					{
						Function_189(4, 0, 0, 1);
					}
				}
			}
			Function_198(Global_30640[0]);
			Function_198(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_198(Global_30640[0]);
			Function_198(Global_30668[2]);
			Function_188(&(Global_29008[Global_30668[2]]), 32768);
			Function_187(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_196(9, bParam2, 4);
			Function_198(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_198(Global_30640[0]);
			Function_198(Global_30658[0]);
			Function_188(&(Global_29008[Global_30658[0]]), 32768);
			Function_187(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_198(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_198(Global_30640[0]);
			Function_198(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_198(Global_30640[1]);
			Function_198(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_198(Global_30679[0]);
			Function_198(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_198(Global_30658[5]);
			Function_198(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_196(21, bParam2, 4);
			Function_198(Global_30640[4]);
			Function_198(Global_30658[4]);
			Function_186(&Global_76847, 0x2000000);
			Function_186(&Global_76847, 0x4000000);
			Function_186(&Global_76847, 4096);
			Function_186(&Global_76847, 8);
			Function_186(&Global_76847, 8388608);
			Function_186(&Global_76847, 524288);
			Function_186(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_198(Global_30640[4]);
			Function_198(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_187(&(Global_29008[Global_30640[4]]), 256);
			Function_198(Global_30640[4]);
			Function_198(Global_30658[0]);
			Function_188(&(Global_29008[Global_30658[0]]), 32768);
			Function_187(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_198(Global_30640[0]);
			Function_198(Global_30640[5]);
			Function_196(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_198(Global_30658[3]);
			Function_188(&(Global_29008[Global_30658[3]]), 32768);
			Function_187(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_196(9, bParam2, 4);
			Function_198(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_188(&(Global_29008[Global_30679[1]]), 32768);
			Function_198(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_196(12, bParam2, 4);
			Function_187(&(Global_29008[Global_30679[1]]), 256);
			Function_198(Global_30668[3]);
			Function_198(Global_30693[0]);
			Function_198(Global_30685[0]);
			Function_194(4);
			Function_190(13, 1);
			Function_190(1, 1);
			Function_190(18, 1);
			Function_192(34, 1);
			Function_192(44, 1);
			Function_192(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_196(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_198(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_198(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_198(Global_30693[0]);
			Function_198(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_198(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_198(Global_30685[0]);
			Function_198(Global_30693[0]);
			Function_198(Global_30693[1]);
			Function_198(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_196(23, bParam2, 3);
			Function_190(23, 1);
			Function_198(Global_30685[0]);
			Function_198(Global_30685[2]);
			Function_188(&(Global_29008[Global_30685[2]]), 32768);
			Function_187(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_196(19, bParam2, 4);
			Function_198(Global_30685[0]);
			Function_198(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_196(24, bParam2, 3);
			Function_190(24, 1);
			Function_198(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_198(Global_30685[0]);
			Function_198(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_198(Global_30693[12]);
			Function_198(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_198(Global_30693[12]);
			Function_198(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_196(25, bParam2, 10);
			Function_198(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_198(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_198(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_196(13, bParam2, 4);
			Function_198(Global_30693[2]);
			Function_198(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_96(8))
				{
					Function_189(8, 0, 0, 1);
				}
			}
			Function_198(Global_30685[0]);
			Function_194(9);
			Function_190(7, 1);
			Function_190(11, 1);
			Function_190(3, 1);
			Function_190(20, 1);
			Function_192(57, 1);
			break;
		
		case 0x0000002A:
			Function_196(2, bParam2, 4);
			Function_198(Global_30717[0]);
			Function_198(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_198(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_198(Global_30717[0]);
			Function_198(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_198(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_198(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_198(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_196(17, bParam2, 4);
			Function_198(Global_30723[0]);
			Function_198(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_94(15))
				{
					Function_185(15, 0, 1);
				}
			}
			Function_187(&(Global_29008[Global_30717[1]]), 256);
			Function_194(11);
			Function_198(Global_30717[1]);
			Function_198(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_198(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_198(Global_30717[1]);
			Function_198(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_198(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_198(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_198(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_198(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_198(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_198(Global_30717[1]);
			Function_179(11);
			Function_194(12);
			Global_16537[1121].f_40 = 0;
			Function_192(56, 1);
			if (!bParam2)
			{
				if (!Function_96(9))
				{
					Function_189(9, 0, 0, 0);
				}
				if (!Function_96(10))
				{
					Function_189(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_179(int iParam0) //Position: 0xB008 / 45064
{
	bool bVar0;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_184(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_184(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_180(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_180(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB177 / 45431
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_182(Function_183(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_182(Function_183(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_182(StackVal);
				vVar1 = { StackVal, StackVal, Function_182(StackVal) };
				if (Function_181(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_181(vector3 vParam0, vector3 vParam3) //Position: 0xB27D / 45693
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_182(bool bParam0) //Position: 0xB2AA / 45738
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_183(vector3 vParam0) //Position: 0xB301 / 45825
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_184(bool bParam0, bool bParam1) //Position: 0xB34F / 45903
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

void Function_185(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB3A3 / 45987
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_91(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_94(bParam0))
	{
		if (!Function_96(bParam0))
		{
			Function_189(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_115(457, 1, 0, 0);
		Function_148(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_55(0, 0, 1, 1))
			{
				Function_18(1);
				Function_16(1, 0);
			}
			else
			{
				Function_15();
			}
		}
	}
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0xB541 / 46401
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_187(var uParam0, int iParam1) //Position: 0xB550 / 46416
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0xB567 / 46439
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_189(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB576 / 46454
{
	struct<8> Var0;
	
	if (!Function_91(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_149(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_96(bParam0))
	{
		Function_115(456, 1, 0, 0);
		Function_148(bParam0, 2);
		if (bParam2)
		{
			if (!Function_55(0, 0, 1, 1))
			{
				Function_18(1);
				Function_16(1, 5);
			}
			else
			{
				Function_15();
			}
		}
		Function_143(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_142() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_142() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_122(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_105(Global_76846, 2))
		{
			Function_100(Global_34573, 2, 1, 0);
		}
	}
}

int Function_190(int iParam0, int iParam1) //Position: 0xB6C0 / 46784
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_191(iParam0, iParam1);
	Function_100(Global_34573, 1, 4, 1);
	return 1;
}

int Function_191(int iParam0, int iParam1) //Position: 0xB733 / 46899
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_192(int iParam0, int iParam1) //Position: 0xB78F / 46991
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_193(iParam0, iParam1);
	Function_100(Global_34573, 1, 4, 1);
	return 1;
}

int Function_193(int iParam0, int iParam1) //Position: 0xB800 / 47104
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_194(int iParam0) //Position: 0xB85A / 47194
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_195(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_195(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_115(468, 1, 0, 0);
			Function_140(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_122("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_180(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_189(14, 1, 0, 0);
				Function_139(14, 1, 0, 0, 0);
			}
			if (!Function_55(0, 0, 1, 1))
			{
				Function_18(1);
				Function_16(1, 6);
			}
			else
			{
				Function_15();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_122("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_115(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_140(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_195(bool bParam0, bool bParam1) //Position: 0xBB06 / 47878
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

void Function_196(bool bParam0, bool bParam1, int iParam2) //Position: 0xBB57 / 47959
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_197(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_200(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_197(int iParam0, int iParam1) //Position: 0xBBC5 / 48069
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_198(int iParam0) //Position: 0xBBD8 / 48088
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_82(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_188(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_115(473, 1, 0, 0);
		iVar0 = Function_199(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_115(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_115(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_115(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_140(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_140(7, 30);
	}
	if (Function_38(473) <= Function_39(473))
	{
		if (!Function_17())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_199(int iParam0) //Position: 0xBCD7 / 48343
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_66(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_200(bool bParam0, bool bParam1, int iParam2) //Position: 0xBD2F / 48431
{
	if (!Function_201(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_26(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_26(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_26(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_201(int iParam0) //Position: 0xBD86 / 48518
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_202(int iParam0) //Position: 0xBD98 / 48536
{
	int iVar0;
	
	if (Function_86(iParam0, 1) && Function_86(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_203(int iParam0) //Position: 0xBDCC / 48588
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_204(4, 0, 0);
		}
	}
	return;
}

void Function_204(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBE33 / 48691
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_205(Global_16524, bVar0, 1);
	}
	return;
}

void Function_205(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBF10 / 48912
{
	int iVar0;
	
	Function_207(bParam0);
	Function_99(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_206();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_206() //Position: 0xC08A / 49290
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_207(int iParam0) //Position: 0xC096 / 49302
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

int Function_208(bool bParam0) //Position: 0xC0DC / 49372
{
	if (!Function_74(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_209(bool bParam0) //Position: 0xC0FC / 49404
{
	if (!Function_74(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_210(int iParam0) //Position: 0xC117 / 49431
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_211(105)), 0);
	return;
}

int Function_211(int iParam0) //Position: 0xC138 / 49464
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_212(bool bParam0) //Position: 0xC14E / 49486
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_99(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_99(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_99(Global_12976.f_24);
	PRINTNL();
	Function_213(bParam0);
	return;
}

void Function_213(int iParam0) //Position: 0xC1EA / 49642
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_211(90)), 0);
	return;
}

void Function_214(bool bParam0) //Position: 0xC20B / 49675
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

bool Function_215() //Position: 0xC226 / 49702
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_63541)
	{
		if (Function_154(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_216(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC24B / 49739
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_220(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_217(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_217(bParam0, bParam1, bParam2, 4294967295);
}

int Function_217(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC2A9 / 49833
{
	var uVar0;
	
	if (!Function_219(bParam2))
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
	uVar0 = Function_220(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_218(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_218(int iParam0) //Position: 0xC3FE / 50174
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_219(int iParam0) //Position: 0xC43C / 50236
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_220(int iParam0, int iParam1, bool bParam2) //Position: 0xC451 / 50257
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_221() //Position: 0xC471 / 50289
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001389:
				return 5001;
				break;
			
			case 0x0000138A:
				return 5002;
				break;
			
			case 0x0000138C:
				return 5004;
				break;
			
			case 0x0000138B:
				return 5003;
				break;
			
			case 0x0000138D:
				return 5005;
				break;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_222() //Position: 0xC4DD / 50397
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001388:
				return 1;
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_223(int iParam0) //Position: 0xC511 / 50449
{
	if (iLocal_154 == 0)
	{
		if (Function_225(iParam0))
		{
			Function_224(iParam0);
			iLocal_154 = 1;
		}
	}
	return;
}

void Function_224(int iParam0) //Position: 0xC52D / 50477
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
					if ((bVar3 && 32) == 0)
					{
						Function_129(bVar2, bVar3, "GunfireShock");
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

bool Function_225(int iParam0) //Position: 0xC5C7 / 50631
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = 0;
	bVar1 = GET_EVENT_LAYOUT();
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	if (IS_OBJECT_VALID(bVar3))
	{
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar6 = GET_EVENT_FROM_OBJECT(bVar3);
			if (IS_EVENT_VALID(bVar6))
			{
				if (GET_EVENT_TYPE(bVar6) == 6)
				{
					bVar4 = GET_EVENT_PERPETRATOR(bVar6);
					if (IS_OBJECT_VALID(bVar4))
					{
						if (GET_OBJECT_TYPE(bVar4) == 15)
						{
							bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
							if (IS_ACTOR_VALID(bVar5))
							{
								if (bVar5 == *iParam0)
								{
									iVar0 = 1;
								}
								else if (StackVal == bVar5)
								{
									iVar0 = 1;
								}
							}
						}
					}
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return iVar0;
}

void Function_226(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xC665 / 50789
{
	if (IS_STRING_VALID(bParam3))
	{
		PRINT_BIG_FORMAT(bParam2, bParam0, bParam3, iParam4, iParam5, iParam6, 0, iParam1);
	}
	else
	{
		PRINT_BIG(bParam0, bParam2, 0, 0, iParam1);
	}
}

bool Function_227(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC695 / 50837
{
	if (!Function_231(iParam1))
	{
		Function_260(iParam1);
	}
	switch (*uParam0)
	{
		case 0x000003EC:
			UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(bParam3));
			UI_ENTER("RacePosition");
			PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
			if (Global_74542[5110] != 5 && bParam4)
			{
				Function_122("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
			}
			Function_229(iParam1);
			*uParam0 = 1006;
			break;
		
		case 0x000003EE:
			if (Function_255(iParam1) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
			{
				UI_EXIT("RacePosition");
			}
			if (Function_255(iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial0Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				Function_229(iParam1);
				*uParam0 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_255(iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial1Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_229(iParam1);
				*uParam0 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_255(iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial2Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_228();
				Function_229(iParam1);
				*uParam0 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_228() //Position: 0xC8A1 / 51361
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
					if ((bVar3 && 16384) != 0)
					{
						if ((bVar3 && 16) != 0)
						{
							Function_129(bVar2, bVar3, "point");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_229(int iParam0) //Position: 0xC934 / 51508
{
	Function_230(iParam0, 0.0f);
	return;
}

void Function_230(int iParam0, float fParam1) //Position: 0xC940 / 51520
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_297(iParam0, 1);
	Function_308(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_231(int iParam0) //Position: 0xC961 / 51553
{
	return Function_86(*iParam0, 1);
}

void Function_232(int iParam0) //Position: 0xC96E / 51566
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	iLocal_154 = 0;
	return;
}

void Function_233(int iParam0) //Position: 0xC981 / 51585
{
	var uVar0;
	bool bVar1;
	struct<61> Var2;
	
	bLocal_164 = false;
	iLocal_165 = 0;
	if (!IS_ACTOR_VALID(StackVal))
	{
		LOG_ERROR("dueler is not valid, exiting dueling");
		Function_272(iParam0);
		TERMINATE_THIS_SCRIPT();
	}
	AUDIO_ALLOW_PREDUEL_SPEECH(StackVal);
	AUDIO_ALLOW_PREDUEL_SPEECH(*iParam0);
	if (IS_VOLUME_VALID(iParam0->f_32))
	{
		FIRE_STOP_FLAMES_IN_VOLUME(iParam0->f_32);
		Function_254(iParam0->f_32);
		Function_253(iParam0->f_32, bLocal_161, 0);
	}
	else
	{
		FIRE_STOP_ALL_FIRES();
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*iParam0))
	{
		FIRE_STOP_ON_ACTOR(*iParam0);
	}
	if (FIRE_IS_ACTOR_ON_FIRE(StackVal))
	{
		FIRE_STOP_ON_ACTOR(StackVal);
	}
	iLocal_155 = 0;
	if (Function_251(1))
	{
		Function_249(9);
		iLocal_155 = 1;
	}
	Function_299(StackVal);
	if (!Function_248(GET_ACTOR_ENUM(*iParam0), 6, 4))
	{
		Function_217(GET_ACTOR_ENUM(*iParam0), 6, 4, 4294967295);
		iParam0->f_36 = 1;
	}
	else if (Function_162(Function_216(GET_ACTOR_ENUM(*iParam0), 6, 4)) < 0)
	{
		if (!iParam0->f_36)
		{
		}
		iParam0->f_36 = 1;
	}
	else
	{
		iParam0->f_36 = 0;
	}
	iParam0->f_68 = 0;
	(iParam0 + 68)->f_4 = -1.0f;
	(iParam0 + 68)->f_8 = *iParam0;
	(iParam0 + 68)->f_12 = StackVal;
	SATCHEL_SET_ENABLED(0);
	if (iParam0->f_60 != 3)
	{
		MEMORY_CONSIDER_AS_ENEMY(StackVal, *iParam0);
		SET_ACTOR_UPDATE_PRIORITY(StackVal, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(StackVal, 100.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 53, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 54, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 31, -1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 59, 0.0f);
	}
	Function_300(StackVal, 0);
	RESET_ANIM_SET_FOR_ACTOR(StackVal, 0);
	RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
	ACTOR_FORCE_WEAPON_RENDER(StackVal, 1, 1);
	ACTOR_ENABLE_VARIABLE_MESH(StackVal, 5, true);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_247(*iParam0);
	if (!iParam0->f_40)
	{
		uVar0 = "Dueling_Tell_Sequence_Tutorial";
	}
	else
	{
		uVar0 = "Dueling_Tell_Sequence_Hostage";
	}
	if (!BEGIN_DUEL(StackVal, *iParam0, *(iParam0 + 8), *(iParam0 + 20), "duel_player", bLocal_156, "duel_player", uLocal_157, uVar0))
	{
		LOG_ERROR("Duel could not start");
	}
	if (iParam0->f_40)
	{
		if (!IS_ACTOR_ALIVE(iParam0->f_44))
		{
			iParam0->f_44 = CREATE_ACTOR_IN_LAYOUT(bLocal_161, "duelhostage", 59, *(iParam0 + 20), 0.0f, 0.0f, 0.0f);
		}
		Function_246(iParam0->f_44);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, StackVal, StackVal, GET_OBJECT_HEADING(Function_246(iParam0->f_44)), 1, true, 1);
		RESET_ANIM_SET_FOR_ACTOR(iParam0->f_44, 1);
		SET_LINKED_ANIM_TARGET(StackVal, iParam0->f_44);
		SET_ANIM_SET_FOR_ACTOR(StackVal, "duel_hostage", 0);
		SET_ANIM_SET_FOR_ACTOR(iParam0->f_44, "duel_hostage", 0);
		DESTROY_OBJECT(DROP_ACCESSORY_ENUM(StackVal, 0));
		ADD_DUEL_HOSTAGE(iParam0->f_44, *iParam0);
		SET_EMOTION(iParam0->f_44, 3, -1.0f);
		TASK_FLEE_ACTOR(StackVal, iParam0->f_44, 20.0f, -1.0f, 0, 0, 0);
	}
	Function_257(iParam0);
	if (IS_VOLUME_VALID(iParam0->f_56))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_289(), bLocal_161, 4294967295, 1);
		LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, iParam0->f_56, "", 1);
		Function_245(bVar1);
		DESTROY_OBJECTSET(bVar1);
	}
	iLocal_166 = 0;
	*(&Var2 + 64) = 6;
	*(&Var2 + 140) = 6;
	uVar44 = 6;
	if (Function_243(&Var2, iParam0->f_64))
	{
		iLocal_166 = Var2.f_56;
		if (Var2.f_60 >= 0)
		{
			if (Var2.f_56 == 1)
			{
				Function_242(bLocal_161, &Var2, iParam0, &uVar44);
			}
			else if (Var2.f_56 == 2)
			{
				Function_239(50.0f, bLocal_161, &Var2, iParam0, &uVar44);
			}
		}
	}
	Function_236(iParam0, bLocal_161);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(StackVal);
	if (iParam0->f_60 != 0 && iParam0->f_52 < 50)
	{
		iParam0->f_52 = 50;
	}
	else if (iParam0->f_60 == 1)
	{
		if (iParam0->f_52 >= 75)
		{
			iParam0->f_52 = 75;
		}
		else if (iParam0->f_52 > 50 && !Global_3380)
		{
			iParam0->f_52 = 50;
		}
	}
	else if ((iParam0->f_60 != 1 && iParam0->f_52 > 75) && !Global_3380)
	{
		iParam0->f_52 = 75;
	}
	if (iParam0->f_36)
	{
		if (!SET_DUEL_DIFFICULTY(*iParam0, (10.0f * 2.0f), iParam0->f_52, iParam0->f_48))
		{
			LOG_ERROR("Duel could not set difficulty");
		}
	}
	else if (!SET_DUEL_DIFFICULTY(*iParam0, 10.0f, iParam0->f_52, iParam0->f_48))
	{
		LOG_ERROR("Duel could not set difficulty");
	}
	if (DECOR_CHECK_EXIST(*iParam0, "iDuelResult"))
	{
		DECOR_REMOVE(*iParam0, "iDuelResult");
	}
	Global_62993 = 1;
	iVar51 = GET_OBJECT_MODEL_NAME(*iParam0);
	ADD_NEW_EVENT_RESPONSE(5001, 38, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5002, 39, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5003, 40, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5004, 41, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5000, 44, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5006, 43, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5005, 42, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(5007, 46, 15, iVar51);
	ADD_NEW_EVENT_RESPONSE(StackVal, 5006, 43, GET_OBJECT_MODEL_NAME(15));
	_DYNAMICMIXER_2();
	Function_235(1);
	TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
	TASK_PRIORITY_SET(StackVal, true);
	MEMORY_ALLOW_SHOOTING(StackVal, true);
	ACTOR_END_FORCE_HOLSTER(StackVal);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(StackVal, 0);
	MEMORY_CONSIDER_AS_ENEMY(StackVal, Global_34573);
	MEMORY_ATTACK_ON_SIGHT(StackVal, 1);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(GET_ACTOR_FACTION(StackVal), GET_ACTOR_FACTION(*iParam0), 1.0f);
	FIRE_STOP_ON_ACTOR(StackVal);
	AI_CLEAR_DONT_HARM_ACTOR(*iParam0);
	TASK_CLEAR(*iParam0);
	FIRE_STOP_ON_ACTOR(*iParam0);
	SET_ACTOR_INVULNERABILITY(*iParam0, false);
	Function_234(&uLocal_158, 0.0f);
	return;
}

void Function_234(int iParam0, float fParam1) //Position: 0xCF44 / 53060
{
	if (!Function_231(iParam0))
	{
		Function_230(iParam0, fParam1);
	}
	return;
}

void Function_235(int iParam0) //Position: 0xCF5A / 53082
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

int Function_236(int iParam0, bool bParam1) //Position: 0xCF77 / 53111
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam1, "volAmbientSpectators", 2, *(iParam0 + 8), 0.0f, 0.0f, 0.0f, 80.0f, 50.0f, 80.0f);
	if (!IS_VOLUME_VALID(bVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TASK_NEARBY_ACTORS: Unable to create search volume.");
		return 0;
	}
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_289(), bParam1, 15, 1);
	iVar2 = LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
	bLocal_153 = CREATE_OBJECTSET_IN_LAYOUT(Function_289(), bParam1, 15, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1));
		if (((((StackVal == bVar4 && bVar4 == iParam0->f_44) && bVar4 == *iParam0) && IS_ACTOR_HUMAN(bVar4)) && !IS_OBJECT_IN_OBJECTSET(bVar4, bLocal_152)) && !DECOR_CHECK_EXIST(bVar4, "ignoreactorinduel"))
		{
			if (DECOR_CHECK_EXIST(bVar4, "DuelIsCrowdActor"))
			{
				Function_237(bVar4, iParam0, bParam1);
				ADD_OBJECT_TO_OBJECTSET(bVar4, bLocal_153);
			}
		}
		bVar3++;
	}
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (IS_OBJECTSET_VALID(bVar1))
	{
		DESTROY_OBJECTSET(bVar1);
	}
	return 1;
}

void Function_237(bool bParam0, var uParam1, int iParam2) //Position: 0xD0D4 / 53460
{
	bool bVar0;
	var uVar1[2];
	
	iParam2 = iParam2;
	if (DECOR_CHECK_EXIST(bParam0, "DuelIsCrowdActor"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "DuelIsCrowdActor");
		Function_238(bVar0, &uVar1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, uVar1[0], 0);
		SET_ACTION_NODE_FOR_ACTOR(bParam0, uVar1[1]);
	}
	TASK_FACE_ACTOR(StackVal, bParam0, 1, 3212836864);
	TASK_PRIORITY_SET(bParam0, true);
	return;
}

void Function_238(var uParam0, int iParam1) //Position: 0xD14B / 53579
{
	bool bVar0;
	
	bVar0 = false;
	if (uParam0 & 16 != 0)
	{
		if (uParam0 & 16384 == 0)
		{
			bVar0 = true;
		}
	}
	if (uParam0 & 32 != 0)
	{
		(*iParam1)[0] = "stand_wringhands";
		(*iParam1)[1] = "stand_wringhands";
	}
	else if (uParam0 & 256 != 0)
	{
		(*iParam1)[0] = "crowd_duel";
		if (bVar0)
		{
			(*iParam1)[1] = "crowd_duel_center/point";
		}
		else
		{
			(*iParam1)[1] = "crowd_duel_center";
		}
	}
	else if (uParam0 & 512 != 0)
	{
		(*iParam1)[0] = "crowd_duel";
		if (bVar0)
		{
			(*iParam1)[1] = "crowd_duel_left/point";
		}
		else
		{
			(*iParam1)[1] = "crowd_duel_left";
		}
	}
	else if (uParam0 & 1024 != 0)
	{
		(*iParam1)[0] = "crowd_duel";
		if (bVar0)
		{
			(*iParam1)[1] = "crowd_duel_right/point";
		}
		else
		{
			(*iParam1)[1] = "crowd_duel_right";
		}
	}
	else
	{
		(*iParam1)[0] = "crowd_duel";
		(*iParam1)[1] = "crowd_duel_center";
	}
	return;
}

int Function_239(var uParam0, bool bParam1, int iParam2, int iParam3, var uParam4) //Position: 0xD2E8 / 53992
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	bool bVar12;
	
	vVar2 = { uParam0, 50.0f, uParam0 };
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam1, "volAmbientSpecsToGrab", 2, *(iParam3 + 8), 0.0f, 0.0f, 0.0f, vVar2);
	if (!IS_VOLUME_VALID(bVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TELEPORT_SPECTATORS: Unable to create search volume.");
		return 0;
	}
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_289(), bParam1, 15, 1);
	iVar5 = LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
	iVar6 = 0;
	bVar7 = false;
	while (bVar7 <= iVar5)
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar1));
		if ((((((((((StackVal == bVar8 && bVar8 == iParam3->f_44) && bVar8 == *iParam3) && IS_ACTOR_HUMAN(bVar8)) && !IS_ACTOR_HOGTIED(bVar8)) && !IS_ACTOR_RIDING_VEHICLE(bVar8)) && !IS_ACTOR_RIDING(bVar8)) && !IS_ACTOR_DRUNK(bVar8)) && !IS_OBJECT_IN_OBJECTSET(bVar8, bLocal_152)) && !DECOR_CHECK_EXIST(bVar8, "ignoreactorinduel")) && iVar6 > iParam2->f_60)
		{
			(*uParam4)[iVar6] = bVar8;
			Function_241(GET_PERS_CHAR_FROM_ACTOR(bVar8), 1);
			vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam2 + 64[iVar63]), *(iParam3 + 20), StackVal) };
			bVar12 = UNK_0x9C40E671(&vVar9);
			TELEPORT_ACTOR_WITH_HEADING(bVar8, *(iParam2 + 64[iVar63]), bVar12, 1, true, 1);
			TASK_CLEAR(bVar8);
			RESET_ANIM_SET_FOR_ACTOR(bVar8, 1);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar8, 1);
			TASK_FACE_COORD(bVar8, iParam2 + 36, 1);
			TASK_PRIORITY_SET(bVar8, true);
			iVar6++;
		}
		bVar7++;
	}
	Function_240(uParam4, iVar6, 0, iParam2);
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (IS_OBJECTSET_VALID(bVar1))
	{
		DESTROY_OBJECTSET(bVar1);
	}
	return 1;
}

int Function_240(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xD4AF / 54447
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + bVar1) % iParam1);
		if (IS_ACTOR_MALE((*uParam0)[iVar3]))
		{
			if ((*iParam3 + 140)[iVar3] & 4096 != 0)
			{
				if (UNK_0xE094DB31((*uParam0)[iVar3], 0))
				{
					iVar0 = iVar3;
				}
			}
		}
		iVar2++;
	}
	iVar4 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + bVar1) % iParam1);
		if (((*iParam3 + 140)[iVar6] && iVar5) != 0)
		{
			iVar4 = iVar6;
		}
		iVar2++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= iParam1)
	{
		bVar9 = (*iParam3 + 140)[iVar8];
		if (!bParam2)
		{
			Function_297(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_297(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_297(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_297(&bVar9, 64);
			}
			else
			{
				iVar7++;
			}
		}
		DECOR_SET_INT((*uParam0)[iVar8], "DuelIsCrowdActor", bVar9);
		iVar8++;
	}
	return 1;
}

int Function_241(bool bParam0, bool bParam1) //Position: 0xD5F2 / 54770
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

void Function_242(bool bParam0, int iParam1, int iParam2, var uParam3) //Position: 0xD694 / 54932
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	
	*iParam2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam2 };
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= iParam1->f_60)
	{
		uVar2 = (*iParam1 + 140)[iVar1];
		if (uVar2 & 32768 == 0)
		{
			vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam1 + 64[iVar13]), *(iParam2 + 20), StackVal) };
			bVar6 = UNK_0x9C40E671(&vVar3);
		}
	}
}

bool Function_243(int iParam0, int iParam1) //Position: 0xD74D / 55117
{
	if (iParam1 <= 0)
	{
		return Function_244(iParam0, iParam1);
	}
	if (Global_29006 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2175,953f, 16,256f, 2611,705f };
			*(iParam0 + 36) = { -2166,595f, 16,214f, 2611,732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2160,472f, 16,902f, 2605,667f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2158,75f, 16,881f, 2605,917f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2155,889f, 16,434f, 2617,996f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2157,149f, 16,447f, 2619,214f };
			(*iParam0 + 140)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2157,237f, 16,256f, 2611,759f };
			*(iParam0 + 36) = { -2166,595f, 16,214f, 2611,732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2164,137f, 16,909f, 2619,3f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -2171,411f, 16,449f, 2619,825f };
			(*iParam0 + 140)[1] = 7168;
			*(iParam0 + 64[23]) = { -2173,083f, 16,449f, 2620,048f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2168,264f, 16,881f, 2605,223f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2141,009f, 16,097f, 2610,77f };
			*(iParam0 + 36) = { -2152,214f, 16,097f, 2611,114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2163,959f, 16,909f, 2619,74f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2165,694f, 16,909f, 2620,008f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2161,763f, 16,881f, 2605,855f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -2157,148f, 16,881f, 2602,253f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2163,419f, 16,097f, 2611,458f };
			*(iParam0 + 36) = { -2152,214f, 16,097f, 2611,114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2146,166f, 16,399f, 2604,041f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2144,782f, 16,437f, 2604,025f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2134,941f, 16,449f, 2619,2f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2142,436f, 16,451f, 2620,109f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -2109,022f, 16,306f, 2610,545f };
			*(iParam0 + 36) = { -2120,304f, 16,097f, 2610,42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2128,746f, 16,582f, 2618,448f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2130,542f, 16,583f, 2618,705f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2132,521f, 16,583f, 2618,72f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -2131,128f, 16,617f, 2603,082f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -2131,586f, 16,306f, 2610,295f };
			*(iParam0 + 36) = { -2120,304f, 16,097f, 2610,42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2109,311f, 17,032f, 2602,233f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2084,119f, 16,722f, 2620,025f };
			(*iParam0 + 140)[1] = 2304;
			*(iParam0 + 64[23]) = { -2110,06f, 16,574f, 2618,706f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2112,009f, 16,574f, 2618,81f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { -2181,665f, 16,199f, 2626,591f };
			*(iParam0 + 36) = { -2181,558f, 16,27f, 2617,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 70.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2187,365f, 16,947f, 2611,735f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2187,344f, 16,947f, 2610,434f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -2175,141f, 16,563f, 2603,119f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2173,878f, 16,846f, 2603,615f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { -2181,451f, 16,199f, 2607,999f };
			*(iParam0 + 36) = { -2181,558f, 16,27f, 2617,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2171,507f, 16,91f, 2626,342f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2171,085f, 17,419f, 2628,723f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2188,435f, 46,438f, 2629,844f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -2186,93f, 16,354f, 2624,667f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { -2182,602f, 16,279f, 2582,669f };
			*(iParam0 + 36) = { -2182,557f, 16,283f, 2592,741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2175,813f, 16,892f, 2598,68f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2175,771f, 16,892f, 2599,781f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2187,98f, 16,947f, 2605,092f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2188,852f, 16,947f, 2604,008f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { -2182,512f, 16,279f, 2602,813f };
			*(iParam0 + 36) = { -2182,557f, 16,283f, 2592,741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2192,36f, 16,58f, 2590,16f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2175,242f, 16,431f, 2579,68f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -2174,96f, 16,393f, 2581,227f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2174,707f, 16,359f, 2583,002f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -833,757f, 92,093f, 2405,053f };
			*(iParam0 + 36) = { -824,86f, 92,111f, 2405,911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -826,829f, 92,604f, 2399,558f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -825,39f, 92,604f, 2400,278f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -817,222f, 92,228f, 2400,68f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -815,883f, 92,122f, 2401,766f };
			(*iParam0 + 140)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -815,963f, 92,093f, 2406,769f };
			*(iParam0 + 36) = { -824,86f, 92,111f, 2405,911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -834,486f, 92,625f, 2412,879f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -833,019f, 92,604f, 2398,71f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -830,829f, 92,597f, 2398,705f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -827,994f, 92,604f, 2399,416f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -948,017f, 90,246f, 2443,329f };
			*(iParam0 + 36) = { -940,246f, 90,101f, 2439,536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -944,354f, 90,362f, 2433,664f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -943,069f, 90,368f, 2432,761f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -936,299f, 90,374f, 2429,44f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -935,053f, 90,383f, 2429,297f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -932,475f, 90,246f, 2435,743f };
			*(iParam0 + 36) = { -940,246f, 90,101f, 2439,536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -943,643f, 90,353f, 2452,65f };
			(*iParam0 + 140)[0] = 7168;
			*(iParam0 + 64[13]) = { -945,45f, 90,35f, 2452,563f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -957,561f, 90,786f, 2438,436f };
			(*iParam0 + 140)[2] = 2304;
			*(iParam0 + 64[33]) = { -953,349f, 90,786f, 2436,586f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -773,226f, 92,264f, 2441,655f };
			*(iParam0 + 36) = { -779,513f, 92,261f, 2435,719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,443f, 92,336f, 2433,929f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -788,805f, 93,291f, 2415,236f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { -782,939f, 93,132f, 2421,574f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -781,724f, 93,106f, 2422,239f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -785,8f, 92,264f, 2429,783f };
			*(iParam0 + 36) = { -779,513f, 92,261f, 2435,719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,063f, 93,199f, 2416,324f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -787,695f, 93,291f, 2416,819f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -784,003f, 92,958f, 2422,655f };
			(*iParam0 + 140)[2] = 4096;
			*(iParam0 + 64[33]) = { -788,074f, 92,302f, 2435,201f };
			(*iParam0 + 140)[3] = 4096;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 161,801f, 73,036f, 2209,601f };
			*(iParam0 + 36) = { 154,678f, 73,036f, 2214,532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 151,093f, 73,781f, 2231,127f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 149,66f, 73,778f, 2229,832f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { 149,334f, 73,78f, 2232,961f };
			(*iParam0 + 140)[2] = 20736;
			*(iParam0 + 64[33]) = { 130,805f, 73,285f, 2225,233f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 147,555f, 73,036f, 2219,463f };
			*(iParam0 + 36) = { 154,678f, 73,036f, 2214,532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 132,103f, 73,286f, 2222,323f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 163,447f, 73,758f, 2196,496f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 164,755f, 73,755f, 2196,096f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 168,478f, 73,286f, 2214,951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 112,178f, 73,036f, 2307,669f };
			*(iParam0 + 36) = { 113,796f, 73,036f, 2299,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 110,108f, 73,286f, 2288,538f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 121,847f, 73,286f, 2288,113f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 121,773f, 73,286f, 2289,774f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 121,96f, 73,286f, 2291,226f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 115,414f, 73,036f, 2290,921f };
			*(iParam0 + 36) = { 113,796f, 73,036f, 2299,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 117,484f, 73,286f, 2310,052f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 105,745f, 73,286f, 2310,477f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 105,819f, 73,286f, 2308,816f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 105,632f, 73,286f, 2307,364f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 125,52f, 72,495f, 2253,003f };
			*(iParam0 + 36) = { 123,009f, 73,014f, 2261,074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112,309f, 73,767f, 2280,208f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { 112,308f, 73,641f, 2277,641f };
			(*iParam0 + 140)[1] = 9216;
			*(iParam0 + 64[23]) = { 113,096f, 73,649f, 2273,542f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 113,108f, 73,66f, 2271,663f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 120,498f, 72,495f, 2269,145f };
			*(iParam0 + 36) = { 123,009f, 73,014f, 2261,074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112,671f, 73,644f, 2276,903f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 117,043f, 73,643f, 2240,313f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 118,516f, 73,712f, 2240,557f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 124,33f, 76,749f, 2238,564f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -4297,778f, 22,269f, 4404,503f };
			*(iParam0 + 36) = { -4304,795f, 22,573f, 4404,685f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4306,099f, 22,155f, 4415,161f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { -4311,022f, 23,058f, 4412,995f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4311,679f, 23,058f, 4411,987f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -4313,768f, 26,886f, 4406,992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -4304,795f, 22,573f, 4404,685f };
			*(iParam0 + 36) = { -4297,778f, 22,269f, 4404,503f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4305,446f, 22,139f, 4414,692f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -4306,939f, 22,322f, 4414,795f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4309,754f, 23,058f, 4413,441f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -4313,768f, 26,886f, 4406,992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -4267,992f, 18,109f, 4437,149f };
			*(iParam0 + 36) = { -4275,026f, 18,178f, 4441,885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4278,334f, 18,071f, 4449,653f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4279,857f, 18,071f, 4449,824f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -4281,086f, 18,071f, 4438,504f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4279,52f, 18,071f, 4437,386f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -4282,06f, 18,109f, 4446,621f };
			*(iParam0 + 36) = { -4275,026f, 18,178f, 4441,885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4277,958f, 18,071f, 4437,547f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4276,217f, 18,076f, 4436,355f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4270,787f, 18,071f, 4432,743f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4269,763f, 18,071f, 4433,286f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -4318,445f, 22,086f, 4450,013f };
			*(iParam0 + 36) = { -4318,897f, 22,086f, 4440,917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4330,111f, 25,409f, 4422,815f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4329,889f, 25,581f, 4421,464f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4329,611f, 25,573f, 4420,175f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -4312,611f, 22,004f, 4423,452f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -4319,349f, 22,086f, 4431,821f };
			*(iParam0 + 36) = { -4318,897f, 22,086f, 4440,917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4322,033f, 22,087f, 4455,366f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4323,083f, 22,087f, 4453,766f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4324,211f, 22,094f, 4451,612f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -4325,245f, 22,128f, 4450,168f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2732,999f, 32,668f, 4258,262f };
			*(iParam0 + 36) = { -2724,731f, 32,559f, 4254,918f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2720,958f, 32,28f, 4245,056f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2719,41f, 32,28f, 4244,509f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2713,209f, 32,808f, 4256,949f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2714,787f, 32,827f, 4257,932f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2716,179f, 32,668f, 4250,88f };
			*(iParam0 + 36) = { -2724,589f, 33,196f, 4254,571f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2725,793f, 32,826f, 4264,401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2726,701f, 32,825f, 4265,115f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2737,822f, 32,607f, 4253,199f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2736,711f, 32,607f, 4251,915f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2678,78f, 31,48f, 4241,123f };
			*(iParam0 + 36) = { -2688,745f, 31,42f, 4241,607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2700,972f, 31,57f, 4254,442f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2702,482f, 32,011f, 4254,482f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2704,879f, 32,28f, 4235,066f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2704,098f, 32,176f, 4233,792f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2698,71f, 31,48f, 4242,091f };
			*(iParam0 + 36) = { -2688,745f, 31,42f, 4241,607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2679,489f, 32,5f, 4232,727f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2677,893f, 32,5f, 4233,058f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2671,652f, 31,192f, 4248,009f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2683,122f, 31,548f, 4248,685f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -819,766f, 12,801f, 3773,009f };
			*(iParam0 + 36) = { -813,468f, 12,801f, 3766,967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804,586f, 13,051f, 3742,726f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -803,14f, 13,551f, 3764,739f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -804,056f, 13,551f, 3765,803f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -805,158f, 13,551f, 3767,062f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -807,17f, 12,801f, 3760,925f };
			*(iParam0 + 36) = { -813,468f, 12,801f, 3766,967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -809,813f, 13,551f, 3771,118f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -812,055f, 13,551f, 3773,48f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -813,522f, 13,551f, 3774,942f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -816,089f, 13,551f, 3777,198f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -787,179f, 12,801f, 3736,633f };
			*(iParam0 + 36) = { -793,017f, 12,801f, 3743,048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -811,045f, 13,051f, 3750,048f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -810,352f, 13,051f, 3748,774f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806,995f, 13,051f, 3746,105f };
			(*iParam0 + 140)[2] = 21504;
			*(iParam0 + 64[33]) = { -806,253f, 13,051f, 3744,332f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -798,855f, 12,801f, 3749,463f };
			*(iParam0 + 36) = { -793,017f, 12,801f, 3743,048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,346f, 13,04f, 3730,211f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -786,917f, 13,037f, 3728,203f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -785,021f, 13,051f, 3724,668f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -782,264f, 13,036f, 3740,828f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -804,814f, 13,051f, 3719,617f };
			*(iParam0 + 36) = { -798,673f, 13,051f, 3713,655f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -800,2f, 13,12f, 3705,603f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -799,261f, 13,12f, 3704,608f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -797,36f, 13,12f, 3703,65f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -788,266f, 13,051f, 3712,833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -798,673f, 13,051f, 3713,655f };
			*(iParam0 + 36) = { -804,814f, 13,051f, 3719,617f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804,219f, 13,051f, 3729,436f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -805,748f, 13,051f, 3729,628f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -808,559f, 13,051f, 3730,366f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -813,656f, 13,051f, 3715,872f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 735,953f, 78,306f, 1324,242f };
			*(iParam0 + 36) = { 735,953f, 78,306f, 1315,071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 729,253f, 48,486f, 1309,157f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 729,192f, 78,486f, 1307,499f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 742,653f, 78,425f, 1306,141f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 743,264f, 78,425f, 1307,125f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 735,953f, 78,306f, 1305,9f };
			*(iParam0 + 36) = { 735,953f, 78,306f, 1315,071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 742,376f, 78,425f, 1320,613f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 741,937f, 78,425f, 1321,135f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 741,855f, 78,425f, 1322,617f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 729,187f, 78,486f, 1322,833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 788,067f, 78,306f, 1292,354f };
			*(iParam0 + 36) = { 788,064f, 78,306f, 1301,43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 794,4f, 78,456f, 1312,086f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 794,491f, 78,456f, 1313,429f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 781,088f, 78,413f, 1322,206f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 780,901f, 78,413f, 1320,856f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 788,061f, 78,306f, 1310,506f };
			*(iParam0 + 36) = { 788,064f, 78,306f, 1301,43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 782,021f, 78,419f, 1294,476f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 779,472f, 78,42f, 1290,639f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 780,614f, 78,42f, 1289,73f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 797,764f, 78,468f, 1288,355f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 686,033f, 78,197f, 1303,161f };
			*(iParam0 + 36) = { 685,943f, 78,195f, 1312,249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 692,386f, 78,49f, 1319,771f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 693,316f, 78,474f, 1329,634f };
			(*iParam0 + 140)[1] = 256;
			*(iParam0 + 64[23]) = { 680,325f, 79,321f, 1325,2f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 679,214f, 79,322f, 1323,885f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 685,853f, 78,197f, 1321,337f };
			*(iParam0 + 36) = { 685,943f, 78,195f, 1312,249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 671,907f, 78,472f, 1293,629f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 671,832f, 78,47f, 1291,321f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 691,761f, 78,49f, 1290,059f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 691,998f, 78,49f, 1296,535f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { 739,831f, 78,306f, 1252,583f };
			*(iParam0 + 36) = { 730,21f, 78,306f, 1252,583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 723,05f, 78,471f, 1260,361f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 719,061f, 78,471f, 1260,12f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 718,014f, 78,471f, 1259,29f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 699,142f, 78,527f, 1242,135f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { 720,589f, 78,306f, 1252,583f };
			*(iParam0 + 36) = { 730,21f, 78,306f, 1252,583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 743,34f, 78,504f, 1244,251f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 755,658f, 78,422f, 1260,858f };
			(*iParam0 + 140)[1] = 512;
			*(iParam0 + 64[23]) = { 746,283f, 78,422f, 1259,612f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { 744,823f, 78,421f, 1260,437f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { 686,412f, 78,306f, 1351,855f };
			*(iParam0 + 36) = { 686,271f, 78,306f, 1361,19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 693,253f, 78,381f, 1375,135f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 691,817f, 78,373f, 1376,577f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 681,885f, 78,446f, 1380,694f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 680,597f, 78,502f, 1372,951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { 686,13f, 78,306f, 1370,525f };
			*(iParam0 + 36) = { 686,271f, 78,306f, 1361,19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 679,044f, 78,306f, 1346,869f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 678,93f, 79,291f, 1340,874f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { 692,642f, 78,485f, 1345,834f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 693,52f, 78,485f, 1347,342f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(iParam0 + 24) = { 732,158f, 78,314f, 1399,543f };
			*(iParam0 + 36) = { 741,11f, 78,306f, 1397,618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 750,645f, 78,611f, 1386,18f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 751,968f, 78,606f, 1385,991f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 756,953f, 78,306f, 1385,658f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 751,965f, 80,39f, 1404,842f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(iParam0 + 24) = { 750,062f, 78,314f, 1395,693f };
			*(iParam0 + 36) = { 741,11f, 78,306f, 1397,618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 175.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 734,462f, 79,769f, 1408,614f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 731,99f, 79,78f, 1408,546f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 727,562f, 78,811f, 1408,402f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 723,946f, 78,804f, 1407,98f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_244(int iParam0, int iParam1) //Position: 0x10219 / 66073
{
	if (iLocal_4 != 0)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967295)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967292)
	{
		iParam0->f_48 = 10.0f;
		iParam0->f_52 = 30.0f;
		iParam0->f_56 = 1;
		iParam0->f_60 = 4;
		*(iParam0 + 64[03]) = { 111,425f, 73,767f, 2280,372f };
		(*iParam0 + 140)[0] = 5120;
		*(iParam0 + 64[13]) = { 112,086f, 73,639f, 2278,207f };
		(*iParam0 + 140)[1] = 12800;
		*(iParam0 + 64[23]) = { 113,136f, 73,646f, 2273,555f };
		(*iParam0 + 140)[2] = 1024;
		*(iParam0 + 64[33]) = { 113,364f, 73,645f, 2272,118f };
		(*iParam0 + 140)[3] = 16896;
		return 1;
	}
	if (iParam1 == 4294967294)
	{
		if (Global_29006 == Global_30668[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -806,792f, 92,727f, 2373,401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807,277f, 92,736f, 2375,261f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -809,876f, 92,834f, 2381,274f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -823,197f, 92,307f, 2378,322f };
			(*iParam0 + 140)[3] = 1024;
			*(iParam0 + 64[43]) = { -823,026f, 92,375f, 2376,612f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -822,463f, 92,431f, 2375,01f };
			(*iParam0 + 140)[5] = 20992;
			return 1;
		}
		if (Global_29006 == Global_30640[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2160,207f, 16,882f, 2605,83f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2158,595f, 16,881f, 2605,596f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2159,184f, 16,894f, 2605,341f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -2155,752f, 16,449f, 2618,374f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2153,08f, 16,371f, 2616,611f };
			(*iParam0 + 140)[4] = 17408;
			*(iParam0 + 64[53]) = { -2154,778f, 16,401f, 2617,199f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30668[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { 155,69f, 73,755f, 2200,008f };
			(*iParam0 + 140)[0] = 39168;
			*(iParam0 + 64[13]) = { 158,627f, 73,755f, 2198,852f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { 160,233f, 73,755f, 2197,97f };
			(*iParam0 + 140)[2] = 4608;
			*(iParam0 + 64[33]) = { 172,272f, 73,286f, 2210,202f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { 169,259f, 73,286f, 2213,359f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { 168,629f, 73,286f, 2214,713f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30707[2])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -809,175f, 16,665f, 3709,376f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807,866f, 16,665f, 3708,143f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806,33f, 16,665f, 3706,44f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -800,715f, 16,665f, 3700,73f };
			(*iParam0 + 140)[3] = 4352;
			*(iParam0 + 64[43]) = { -785,693f, 13,051f, 3713,464f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -785,114f, 13,051f, 3716,611f };
			(*iParam0 + 140)[5] = 35072;
			return 1;
		}
		if (Global_29006 == Global_30717[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -143,332f, 119,009f, 1353,172f };
			*(iParam0 + 64[13]) = { -144,653f, 120,644f, 1357,015f };
			*(iParam0 + 64[23]) = { -144,869f, 119,855f, 1359,631f };
			*(iParam0 + 64[33]) = { -129,628f, 118,869f, 1352,225f };
			*(iParam0 + 64[43]) = { -128,989f, 118,869f, 1358,801f };
			*(iParam0 + 64[53]) = { -129,897f, 118,869f, 1361,462f };
			return 1;
		}
		if (Global_29006 == Global_30717[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 100.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 853,294f, 77,517f, 1279,476f };
			*(iParam0 + 64[13]) = { 852,864f, 77,517f, 1282,613f };
			*(iParam0 + 64[23]) = { 853,532f, 77,517f, 1283,355f };
			*(iParam0 + 64[33]) = { 859,177f, 77,517f, 1267,618f };
			*(iParam0 + 64[43]) = { 861,636f, 77,517f, 1278,204f };
			*(iParam0 + 64[53]) = { 861,581f, 77,517f, 1279,349f };
			return 1;
		}
		if (Global_29006 == Global_30693[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 50.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2689,855f, 31,151f, 4274,476f };
			(*iParam0 + 140)[0] = 35072;
			*(iParam0 + 64[13]) = { -2689,877f, 31,151f, 4278,589f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { -2690,326f, 31,152f, 4279,999f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { -2703,691f, 31,151f, 4280,464f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2704,23f, 31,155f, 4278,981f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { -2703,474f, 31,146f, 4271,279f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
	}
	if (iParam1 == 4294967293)
	{
		if (Global_29006 == Global_30658[4])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -3679,563f, 8,483f, 3479,026f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -3675,23f, 8,26f, 3484,906f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -3673,747f, 8,256f, 3481,049f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -3675,517f, 8,201f, 3492,157f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	iParam0->f_48 = 10.0f;
	iParam0->f_52 = 30.0f;
	iParam0->f_56 = 1;
	iParam0->f_60 = 0;
	return 1;
}

void Function_245(bool bParam0) //Position: 0x10A37 / 68151
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

vector3 Function_246(bool bParam0) //Position: 0x10A7C / 68220
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

void Function_247(bool bParam0) //Position: 0x10AA3 / 68259
{
	bool bVar0;
	void fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, true);
		if (Function_201(fVar1))
		{
			fVar2 = ACTOR_GET_WEAPON_AMMO(bParam0, fVar1);
			fVar3 = (GET_WEAPON_MAX_AMMO(fVar1) - fVar2);
			fVar4 = _GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(fVar1), 0);
			if (fVar3 < fVar4)
			{
				bVar0 = (_GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(fVar1), 0) + GET_WEAPON_MAX_AMMO(fVar1));
				if (bVar0 <= 0.0f)
				{
					_SET_ACTOR_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
				}
			}
			ACTOR_ADD_WEAPON_AMMO(bParam0, fVar1, fVar3);
			bVar0 = (_GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(fVar1), 0) - fVar3);
			if (bVar0 <= 0.0f)
			{
				_SET_ACTOR_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
			}
		}
	}
	return;
}

bool Function_248(bool bParam0, int iParam1, int iParam2) //Position: 0x10B43 / 68419
{
	int iVar0;
	
	iVar0 = Function_216(bParam0, iParam1, iParam2);
	return Function_72(iVar0);
}

void Function_249(int iParam0) //Position: 0x10B59 / 68441
{
	Function_250(&Global_28842, iParam0);
	return;
}

void Function_250(var uParam0, int iParam1) //Position: 0x10B67 / 68455
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_251(int iParam0) //Position: 0x10B8A / 68490
{
	return Function_252(&Global_28842, iParam0);
}

int Function_252(var uParam0, int iParam1) //Position: 0x10B98 / 68504
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_253(bool bParam0, bool bParam1, int iParam2) //Position: 0x10BB4 / 68532
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_289(), bParam1, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((!ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3) && IS_ACTOR_VEHICLE(bVar3)) && bVar3 == iParam2)
			{
				bVar4 = false;
				while (bVar4 <= GET_NUM_DRAFTED_ACTORS(bVar3))
				{
					bVar5 = GET_DRAFT_ACTOR(bVar4, bVar3);
					if (IS_ACTOR_VALID(bVar5))
					{
						DESTROY_ACTOR(bVar5);
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= (GET_NUM_AVAILABLE_SEATS(bVar3) + GET_NUM_OCCUPIED_SEATS(bVar3)))
				{
					if (IS_SEAT_OCCUPIED(bVar3, bVar4))
					{
						bVar6 = GET_ACTOR_IN_VEHICLE_SEAT(bVar3, bVar4);
						if (IS_ACTOR_VALID(bVar6))
						{
							DESTROY_ACTOR(bVar6);
						}
					}
					bVar4++;
				}
				DESTROY_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

void Function_254(bool bParam0) //Position: 0x10C9A / 68762
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_VOLUME(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 29)
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

float Function_255(int iParam0) //Position: 0x10CDC / 68828
{
	if (Function_231(iParam0))
	{
		if (Function_256(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_256(int iParam0) //Position: 0x10DA4 / 69028
{
	return Function_86(*iParam0, 2);
}

int Function_257(int iParam0) //Position: 0x10DB1 / 69041
{
	bool bVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<9> Var13;
	
	if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(iParam0->f_32, 0);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
	{
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
	}
	if (!IS_OBJECTSET_VALID(bLocal_151))
	{
		bLocal_151 = CREATE_OBJECTSET_IN_LAYOUT(Function_289(), bLocal_161, 15, 1);
	}
	else
	{
		Function_259(bLocal_151);
	}
	if (!IS_ACTORSET_VALID(bLocal_152))
	{
		bLocal_152 = CREATE_ACTORSET_IN_LAYOUT(bLocal_161, "DuelFleedActors", 0);
	}
	bVar0 = LOCATE_ACTORS_IN_VOLUME(iParam0->f_32, bLocal_151, 0, 1);
	strcpy(&cVar1, "************** ", 32);
	stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	bVar9 = false;
	while (bVar9 <= bVar0)
	{
		bVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar9, bLocal_151));
		if ((((StackVal == bVar11 && bVar11 == iParam0->f_44) && bVar11 == *iParam0) && !DECOR_CHECK_EXIST(bVar11, "ignoreactorinduel")) && !DECOR_CHECK_EXIST(bVar11, "DuelIsCrowdActor"))
		{
			bVar10 = true;
			bVar12 = false;
			if (IS_ACTOR_HORSE(bVar11))
			{
				if (!IS_ACTOR_MOUNTED(bVar11))
				{
					DESTROY_ACTOR(bVar11);
					bVar12 = true;
				}
				else
				{
					SET_ALLOW_RIDE_BY_PLAYER(bVar11, 0);
				}
			}
			if (!bVar12 && !Function_258(Global_34207, bVar11))
			{
				if (!GET_TASK_STATUS(bVar11, 25) != 1)
				{
					AI_SET_NAV_ACTOR_WIDTH(bVar11, 0,5f);
					TASK_CLEAR(bVar11);
					vVar13 = { 0.0f, 0.0f, 0.0f };
					GET_VOLUME_SCALE(iParam0->f_32, &vVar13);
					fVar16 = vVar13.z;
					if (fVar16 < 40.0f)
					{
						fVar16 = -1.0f;
					}
					TASK_FLEE_ACTOR(bVar11, *iParam0, fVar16, -1.0f, 0, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar11, iParam0->f_32, 4, 1);
					if (!IS_ACTOR_IN_ACTORSET(bLocal_152, bVar11))
					{
						ADD_ACTORSET_MEMBER(bLocal_152, bVar11);
					}
				}
			}
		}
		bVar9++;
	}
	if (bVar10)
	{
		return 0;
	}
	return 1;
}

bool Function_258(bool bParam0, int iParam1) //Position: 0x10F6C / 69484
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (0 != TRAIN_GET_LOD_LEVEL(bParam0) || TRAIN_GET_NUM_CARS(bParam0) != 0)
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = TRAIN_GET_NUM_CARS(bParam0);
	bVar0 = false;
	while (bVar0 <= iVar1)
	{
		bVar2 = TRAIN_GET_CAR(bParam0, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			if (GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bParam0, bVar0)) == iParam1)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_259(bool bParam0) //Position: 0x10FC6 / 69574
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
	}
	return;
}

void Function_260(int iParam0) //Position: 0x10FFE / 69630
{
	if (!Function_231(iParam0))
	{
		Function_230(iParam0, 0.0f);
	}
	return;
}

void Function_261(int iParam0) //Position: 0x11013 / 69651
{
	struct<61> Var0;
	
	*(&Var0 + 64) = 6;
	*(&Var0 + 140) = 6;
	if (iParam0->f_64 <= 0)
	{
		if (Function_243(&Var0, iParam0->f_64))
		{
			if (Var0.f_56 == 1)
			{
				iVar43 = 0;
				iVar42 = 0;
				while (iVar42 <= Var0.f_60)
				{
					uVar44 = (*&Var0 + 140)[iVar42];
					if (uVar44 & 32768 == 0)
					{
						uLocal_167[iVar43] = Function_262(Global_30750[0], 1, 0, 1);
						Function_314(&bLocal_90, uLocal_167[iVar43], 3, 0);
						iVar43++;
					}
					iVar42++;
				}
			}
		}
	}
	return;
}

var Function_262(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1109A / 69786
{
	return Function_263(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x110AE / 69806
{
	return Function_264(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_264(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x110C7 / 69831
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
		Function_270();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_269(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_268(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_268(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_267(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_269(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_267(bVar0))
				{
					Function_266();
				}
				Function_265(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_269(bVar1))
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

void Function_265(int iParam0) //Position: 0x113BA / 70586
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

void Function_266() //Position: 0x1146E / 70766
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

bool Function_267(bool bParam0) //Position: 0x114A8 / 70824
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

void Function_268(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x114D5 / 70869
{
	bool bVar0;
	
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

bool Function_269(bool bParam0) //Position: 0x11626 / 71206
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_270() //Position: 0x1163D / 71229
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_266();
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
	Function_266();
	return;
}

void Function_271(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11688 / 71304
{
	Function_312(&bLocal_90, "duel_player", 5, 0);
	Function_312(&bLocal_90, "Dueling/duel_player", 8, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			Function_314(&bLocal_90, 59, 2, 0);
		}
		Function_312(&bLocal_90, "duel_hostage", 5, 0);
		Function_312(&bLocal_90, "Dueling/duel_hostage", 8, 0);
		bLocal_156 = "duel_hostage";
	}
	else
	{
		if ((Function_248(GET_ACTOR_ENUM(bParam3), 6, 4) && *uParam0 != 0) && !Global_3380)
		{
			if (Function_162(Function_216(GET_ACTOR_ENUM(bParam3), 6, 4)) > 10)
			{
				*uParam0 = 2;
			}
			else if (Function_162(Function_216(GET_ACTOR_ENUM(bParam3), 6, 4)) > 5)
			{
				*uParam0 = 1;
			}
		}
		switch (*uParam0)
		{
			case 0x00000003:
				bLocal_156 = "duel_player";
				break;
			
			case 0x00000000:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_312(&bLocal_90, "duel_easy_A_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Easy_A_npc", 8, 0);
						bLocal_156 = "duel_Easy_A_npc";
						break;
					
					case 0x00000001:
						Function_312(&bLocal_90, "duel_easy_B_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Easy_B_npc", 8, 0);
						bLocal_156 = "duel_Easy_B_npc";
						break;
				}
				break;
			
			case 0x00000001:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_312(&bLocal_90, "duel_mid_A_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Mid_A_npc", 8, 0);
						bLocal_156 = "duel_Mid_A_npc";
						break;
					
					case 0x00000001:
						Function_312(&bLocal_90, "duel_mid_B_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Mid_B_npc", 8, 0);
						bLocal_156 = "duel_Mid_B_npc";
						break;
					
					case 0x00000002:
						Function_312(&bLocal_90, "duel_mid_C_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Mid_C_npc", 8, 0);
						bLocal_156 = "duel_Mid_C_npc";
						break;
				}
				break;
			
			case 0x00000002:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_312(&bLocal_90, "duel_hard_A_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Hard_A_npc", 8, 0);
						bLocal_156 = "duel_Hard_A_npc";
						break;
					
					case 0x00000001:
						Function_312(&bLocal_90, "duel_hard_B_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Hard_B_npc", 8, 0);
						bLocal_156 = "duel_Hard_B_npc";
						break;
					
					case 0x00000002:
						Function_312(&bLocal_90, "duel_hard_C_npc", 5, 0);
						Function_312(&bLocal_90, "Dueling/duel_Hard_C_npc", 8, 0);
						bLocal_156 = "duel_Hard_C_npc";
						break;
				}
				break;
			}
	}
	uLocal_157 = bLocal_156;
	Function_312(&bLocal_90, "nminigames", 10, 0);
	Function_312(&bLocal_90, "crowd_duel", 5, 0);
	Function_312(&bLocal_90, "custom/crowd_duel_center", 8, 0);
	Function_312(&bLocal_90, "custom/crowd_duel_left", 8, 0);
	Function_312(&bLocal_90, "custom/crowd_duel_right", 8, 0);
}

void Function_272(int iParam0) //Position: 0x11B19 / 72473
{
	if (!bLocal_164)
	{
		Function_130(iParam0);
	}
	if (!iLocal_165)
	{
		Function_273(iParam0);
	}
	return;
}

void Function_273(int iParam0) //Position: 0x11B35 / 72501
{
	if (DECOR_CHECK_EXIST(*iParam0, "bIsDuelActive"))
	{
		DECOR_REMOVE(*iParam0, "bIsDuelActive");
	}
	if (DECOR_CHECK_EXIST(*iParam0, "bIsDuelOver"))
	{
		DECOR_REMOVE(*iParam0, "bIsDuelOver");
	}
	if (DECOR_CHECK_EXIST(*iParam0, "bDrewFirst"))
	{
		DECOR_REMOVE(*iParam0, "bDrewFirst");
	}
	Function_274(iParam0);
	if (IS_LAYOUTREF_VALID(bLocal_161))
	{
		DESTROY_LAYOUT(bLocal_161);
	}
	REMOVE_EVENT_RESPONSE(38, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(39, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(40, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(41, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(37, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(44, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(43, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(42, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(46, 15, "PLAYER");
	Global_3369 = 0;
	Function_3(&bLocal_90);
	iLocal_165 = 1;
	Global_3382 = 0;
	if (iParam0->f_96)
	{
	}
	return;
}

int Function_274(int iParam0) //Position: 0x11C7B / 72827
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
		{
			bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
			if (DECOR_CHECK_EXIST(bVar2, "DuelCrowdActorReactionTimer"))
			{
				DECOR_REMOVE(bVar2, "DuelCrowdActorReactionTimer");
			}
			if ((bVar3 && 1) != 0)
			{
			}
			else if ((bVar3 && 2) != 0)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
			}
			else if (iLocal_166 == 2)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				TASK_CLEAR(bVar2);
				if ((bVar3 && 4) != 0)
				{
					Function_286(GET_PERS_CHAR_FROM_ACTOR(bVar2));
				}
			}
			else if (iLocal_166 == 1)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				TASK_CLEAR(bVar2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, true);
				Function_277(bVar2, 1, 0, 2);
			}
			else if (iLocal_166 == 0)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				if ((bVar3 && 64) != 0)
				{
					Function_275(bVar2, bVar3, iParam0 + 8);
				}
				else
				{
					TASK_CLEAR(bVar2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, true);
					Function_277(bVar2, 1, 0, 2);
				}
			}
		}
		bVar1++;
	}
	if (IS_OBJECTSET_VALID(bLocal_153))
	{
		DESTROY_OBJECTSET(bLocal_153);
	}
	return 1;
}

void Function_275(bool bParam0, var uParam1, int iParam2) //Position: 0x11E30 / 73264
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	uParam1 = uParam1;
	TASK_CLEAR(bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 1, 0);
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_12(bParam0);
	vVar4 = { StackVal, StackVal, Function_12(bParam0) };
	Function_276(iParam2, &vVar4, &vVar1);
	TASK_GO_NEAR_COORD(false, &vVar1, 5.0f, true);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(bParam0, 2);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	return;
}

void Function_276(var uParam0, var uParam1, int iParam2) //Position: 0x11E95 / 73365
{
	*iParam2 = { StackVal, StackVal, *uParam1 };
	*iParam2 = (*iParam2 + ((*uParam1 - *uParam0) * 3.0f));
	iParam2->f_8 = (StackVal + ((StackVal - StackVal) * 3.0f));
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	iParam2->f_8 = (StackVal + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	return;
}

int Function_277(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x11EE9 / 73449
{
	bool bVar0;
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
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_278(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_278(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_278(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x11FC9 / 73673
{
	char* cVar0[32];
	
	Function_285();
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
	if (Function_284(bParam0) == 1)
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
	Function_283(bParam0, 0);
	Function_282(bParam0, iParam1);
	Function_281(bParam0, uParam2);
	Function_280(bParam0, uParam3);
	if (Function_279(bParam0) != 5)
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

int Function_279(bool bParam0) //Position: 0x12217 / 74263
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_280(bool bParam0, bool bParam1) //Position: 0x1223A / 74298
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_281(bool bParam0, bool bParam1) //Position: 0x1225D / 74333
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_282(bool bParam0, bool bParam1) //Position: 0x12281 / 74369
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_283(bool bParam0, bool bParam1) //Position: 0x122A7 / 74407
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_284(bool bParam0) //Position: 0x122CA / 74442
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_285() //Position: 0x122E8 / 74472
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

int Function_286(bool bParam0) //Position: 0x12332 / 74546
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_287(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, var uParam13) //Position: 0x123CC / 74700
{
	vector3 vVar0;
	
	*iParam0 = Global_34573;
	iParam0->f_4 = uParam1;
	*(iParam0 + 8) = { StackVal, StackVal, vParam2 };
	*(iParam0 + 20) = { StackVal, StackVal, vParam5 };
	iParam0->f_52 = uParam8;
	iParam0->f_48 = uParam13;
	iParam0->f_60 = uParam9;
	iParam0->f_92 = uParam12;
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), *(iParam0 + 8), StackVal) };
	VSCALE(&vVar0, 0,5f);
	iParam0->f_32 = CREATE_VOLUME_IN_LAYOUT(bParam10, "Duel_StayOut", 2, vVar0, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	iParam0->f_64 = 4294967293;
	iParam0->f_96 = uParam11;
}

void Function_288() //Position: 0x12463 / 74851
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

var Function_289() //Position: 0x12478 / 74872
{
	int iVar0;
	
	return iVar0;
}

bool Function_290(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12480 / 74880
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_293(bParam0))
	{
		return 1;
	}
	if (Function_292(bParam0))
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
	if (Function_291())
	{
		return 1;
	}
	return 0;
}

bool Function_291() //Position: 0x12536 / 75062
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_292(bool bParam0) //Position: 0x1254D / 75085
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_293(bool bParam0) //Position: 0x12558 / 75096
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

int Function_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12566 / 75110
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

void Function_295() //Position: 0x12653 / 75347
{
	var uVar0;
	
	Function_296(4, 1);
	uVar0 = uVar0;
	bLocal_271 = CREATE_LAYOUT("Wronged_layout");
	return;
}

void Function_296(int iParam0, int iParam1) //Position: 0x12679 / 75385
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

void Function_297(var uParam0, int iParam1) //Position: 0x126C2 / 75458
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_298(bool bParam0) //Position: 0x126D1 / 75473
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_299(bool bParam0) //Position: 0x1275B / 75611
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_300(bool bParam0, bool bParam1) //Position: 0x1278F / 75663
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

bool Function_301(bool bParam0) //Position: 0x127AF / 75695
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_305();
	iVar1 = 0;
	if (!Function_6(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_304(bParam0[iVar03], 8);
		}
		else if (Function_303())
		{
			iVar1 = 1;
			Function_304(bParam0[iVar03], 8);
		}
		Function_304(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_6(bParam0[iVar03], 4))
		{
			if (!Function_6(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_6(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_6(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_304(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_6(bParam0[iVar03], 4))
		{
			if (!Function_6(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_304(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_304(bParam0[iVar03], 2);
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
	Function_302();
	return 1;
}

void Function_302() //Position: 0x12B2A / 76586
{
	if (!Function_81(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_303() //Position: 0x12B6A / 76650
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

void Function_304(var uParam0, int iParam1) //Position: 0x12B95 / 76693
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_305() //Position: 0x12BA6 / 76710
{
	if (!Function_81(128))
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

void Function_306(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x12BE8 / 76776
{
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (((!bParam2 || Function_84(iParam1)) || Function_83(iParam1)) || iParam1 != iParam0->f_20)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	else if (bParam2)
	{
		if (Function_86(Global_63541[iParam155].f_144, 64) && iParam1 == iParam0->f_20)
		{
			Function_67(iParam0, iParam1);
		}
		if (!(Function_84(iParam1) || Function_83(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
			SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
	}
	if (IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_86(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_308(iParam0 + 144, 32);
	}
	if (IS_OBJECT_VALID(iParam0->f_212))
	{
		RELEASE_OBJECT_REF(iParam0->f_212);
	}
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		DESTROY_VOLUME(iParam0->f_216);
	}
	if (bParam4)
	{
		Function_307(iParam0);
	}
	Function_308(iParam0 + 144, 256);
	switch (Global_74542[iParam110])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_74542[iParam110] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(iParam0->f_196) && iParam3)
	{
		TERMINATE_SCRIPT(iParam0->f_196);
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(iParam0->f_204))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_204);
				AI_CONVERSE_ENABLE(iParam0->f_204);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(iParam0->f_204)))
				{
					DESTROY_OBJECT(SQUAD_GET(iParam0->f_204));
				}
				RELEASE_ACTOR(iParam0->f_204);
			}
			break;
		
		default:
			break;
	}
}

void Function_307(int iParam0) //Position: 0x12D92 / 77202
{
	if (Function_86(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_308(iParam0 + 144, 1);
	}
	if (Function_86(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_308(iParam0 + 144, 8);
	}
	if (Function_86(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_308(iParam0 + 144, 2);
	}
	if (Function_86(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_308(iParam0 + 144, 4);
	}
	return;
}

void Function_308(int iParam0, int iParam1) //Position: 0x12E14 / 77332
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_309(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x12E27 / 77351
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_78(iParam0 + 172, 4))
		{
			if (!Function_77(iParam1))
			{
				return 0;
			}
		}
		if (Function_78(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_84(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_78(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_89(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_78(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_311(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_310(iParam0);
	}
	return 1;
}

int Function_310(int iParam0) //Position: 0x12EDB / 77531
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_78(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_78(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_78(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_78(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_78(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_78(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_311(int iParam0, bool bParam1) //Position: 0x12F87 / 77703
{
	if (!Function_72(iParam0))
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

var Function_312(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x12FBD / 77757
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_313(bParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_304(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_313(var uParam0, int iParam1, int iParam2) //Position: 0x12FF5 / 77813
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_304(uParam0[iVar03], 4);
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

var Function_314(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x130B9 / 78009
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_6(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_304(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_304(bParam0[iVar03], 8);
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

