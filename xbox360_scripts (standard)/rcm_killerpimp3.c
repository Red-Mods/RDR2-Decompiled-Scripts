//Decompiled with MagicRDR v1.0
//Function Count : 354
//Statics Count : 270
//Natives Count : 559
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
	int iLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	var uLocal_197 = 0;
	bool bLocal_198 = true;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	bool bLocal_205 = false;
	int iLocal_206 = 0;
	vector3 vLocal_207 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_210 = false;
	int iLocal_211 = 0;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	vector3 vLocal_236 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_239 = { 0.0f, 0.0f, 0.0f };
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = false;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
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
	iLocal_206 = 0;
	vLocal_207 = { -1332,692f, 13,051f, 4275,087f };
	vLocal_236 = { -1346,46f, 13,05f, 4285,61f };
	vLocal_239 = { -1348,21f, 13,05f, 4280,94f };
	iLocal_242 = 0;
	iLocal_265 = 0;
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
			iLocal_188 = 1000;
			bLocal_205 = true;
			Function_352(&bLocal_198, "dead_ground_male", 5, 0);
			Function_352(&bLocal_198, "RandomCharMissions", 10, 0);
			while (!IS_EXITFLAG_SET())
			{
				if (!IS_ACTOR_VALID(bLocal_195))
				{
					bLocal_195 = Global_63541[ScriptParam_055].f_204;
				}
				switch (iLocal_242)
				{
					case 0x00000000:
						if (!Function_349(&(Global_63541[ScriptParam_055]), 48, 0, 1))
						{
							Function_348(&Global_63541[ScriptParam_055] + 144, 64);
							Function_346(&(Global_63541[ScriptParam_055]), 48, 0, 1, 1);
							iLocal_242 = 13;
						}
						else if ((Function_342(&bLocal_198) && IS_ACTOR_VALID(bLocal_195)) && !Function_341(48))
						{
							if (IS_LAYOUTREF_VALID(bLocal_196))
							{
								if (IS_ACTOR_VALID(bLocal_195))
								{
									Function_340(bLocal_195);
									DISABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
									ENABLE_CHILD_SECTOR("sep_graveEva01x");
									Function_333(&(Global_63541[ScriptParam_055]), ScriptParam_0, 0x41f00000, 0x42200000, 0);
									Function_332(StackVal, StackVal, StackVal, StackVal, &iLocal_211, bLocal_195, vLocal_236, vLocal_239, 100, 2, bLocal_196, 0, 1, 1);
									iLocal_242 = 1;
								}
							}
							else if (!IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("KillerPimp_layout")))
							{
								Function_330();
								bLocal_196 = bLocal_267;
							}
							else
							{
								bLocal_196 = FIND_NAMED_LAYOUT("KillerPimp_layout");
							}
						}
						break;
					
					case 0x00000001:
						if (!Function_349(&(Global_63541[ScriptParam_055]), 48, 0, 1) || Function_341(48))
						{
							Function_348(&Global_63541[ScriptParam_055] + 144, 64);
							Function_346(&(Global_63541[ScriptParam_055]), 48, 0, 1, 1);
							iLocal_242 = 13;
						}
						else if (IS_OBJECT_VALID(Global_63541[ScriptParam_055].f_192))
						{
							if (Function_326(Global_63541[ScriptParam_055].f_192, 0, 1, 0, 0, 0))
							{
								Function_325(&(Global_63541[4855]));
								Global_63541[4855].f_152 = 1;
								iLocal_242 = 3;
							}
						}
						Function_333(&(Global_63541[ScriptParam_055]), ScriptParam_0, 0x41f00000, 0x42200000, 0);
						break;
					
					case 0x00000003:
						GATEWAY_DISABLE(Global_63541[ScriptParam_055].f_192, 1);
						iLocal_242 = 4;
						break;
					
					case 0x00000004:
						if (Function_294("$/cutscene/RCM_16_CS03/RCM_16_CS03", &iLocal_188, 76544, 76537, 75171, 75043, 74913, 74906, 1, 1, 2, 2, 0))
						{
							Function_293(&(Global_63541[4855]));
							iLocal_242 = 6;
						}
						Function_131(&iLocal_211, &iLocal_265, &iLocal_243, &iLocal_266, 48);
						break;
					
					case 0x00000006:
						if (Function_131(&iLocal_211, &iLocal_265, &iLocal_243, &iLocal_266, 48))
						{
							Function_128(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
							DESTROY_VOLUME(fLocal_210);
							Function_127();
							SET_PLAYER_CONTROL(0, 1, 0, 0);
							iLocal_242 = 7;
						}
						break;
					
					case 0x00000007:
						if (DECOR_GET_INT(Global_34573, "iDuelResult") == 5001)
						{
							Function_122(50, 1, 0);
							Function_108(100, 1, 0);
							Global_3412 = 1;
							Global_3416 = 7;
							UI_SET_STRING("GENERIC_DBUFFER64_0", UI_GET_STRING("KillerPimp_END"));
							Function_107("GENERIC_DBUFFER64_0", 7,5f, 0, 2, 0, 0, 0);
							Function_106(407, 1, 0, 0);
							Function_63(48, 1, 1, 0);
							Function_9();
							DECOR_REMOVE(Global_34573, "iDuelResult");
							ACTOR_DATA_GRAVITY_LIMIT(0);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							iLocal_242 = 13;
						}
						else
						{
							DECOR_REMOVE(Global_34573, "iDuelResult");
							ACTOR_DATA_GRAVITY_LIMIT(0);
							Function_348(&Global_63541[ScriptParam_055] + 144, 512);
							TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
							iLocal_242 = 13;
						}
						Function_8(&(Global_29008[Global_30693[4]]), 8192);
						break;
				}
				WAIT(false);
			}
			break;
	}
	if (IS_LAYOUTREF_VALID(bLocal_196))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_196);
		RELEASE_LAYOUT_REF(bLocal_196);
	}
	if (bLocal_205)
	{
		Function_7();
	}
	Function_3(&bLocal_198);
	Function_1(0, 0);
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0x4BD / 1213
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

void Function_2(bool bParam0) //Position: 0x4D8 / 1240
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

void Function_3(bool bParam0) //Position: 0x4F5 / 1269
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

void Function_4(var uParam0, int iParam1) //Position: 0x51B / 1307
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

void Function_5(var uParam0, int iParam1) //Position: 0x649 / 1609
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_6(int iParam0, int iParam1) //Position: 0x663 / 1635
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x680 / 1664
{
	RELEASE_LAYOUT_REF(bLocal_267);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x68C / 1676
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_9() //Position: 0x69B / 1691
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_TARGETED_JOURNAL_ENTRY();
	bVar1 = GET_JOURNAL_ENTRY_IN_LIST(0, 0);
	if (bVar0 == bVar1)
	{
		return;
	}
	Function_62(bVar0);
	if (bVar1 != 4294967295 || bVar1 != 0)
	{
		return;
	}
	Function_10(bVar1);
	return;
}

void Function_10(bool bParam0) //Position: 0x6CC / 1740
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
	if (Function_61())
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
	Function_62(GET_TARGETED_JOURNAL_ENTRY());
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
				if (Function_60(iVar6) && !Function_58(iVar6))
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
				Function_57();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_56(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_50();
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
				if (!Function_49(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_28(&(Global_63541[iVar155]), iVar3))
					{
						Function_27(&Global_63541[iVar155] + 144, 64);
						Function_23(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_11(&(Global_63541[iVar155]), 7);
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

void Function_11(int iParam0, int iParam1) //Position: 0x86E / 2158
{
	int iVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_49(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	iVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_22(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, iVar0, iVar0, iVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_12(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_12(int iParam0) //Position: 0x928 / 2344
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_22(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_21(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
}

int Function_13(var uParam0, int iParam1) //Position: 0x9CA / 2506
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
	Function_17(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_14(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_14(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xB2B / 2859
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_15(bool bParam0) //Position: 0xBC6 / 3014
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("0", &cVar8, ""), 4);
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

struct<32> Function_16(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC30 / 3120
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_17(bool bParam0) //Position: 0xC4F / 3151
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
						Function_20(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_18(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_20(iVar0);
						}
					}
					else if (Function_18(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_20(iVar0);
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
			Function_20(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_18(bool bParam0, vector3 vParam1) //Position: 0xDB0 / 3504
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_19(bParam0);
		vVar0 = { StackVal, StackVal, Function_19(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_19(bool bParam0) //Position: 0xE2A / 3626
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

void Function_20(int iParam0) //Position: 0xE94 / 3732
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

bool Function_21(int iParam0) //Position: 0xEF5 / 3829
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_22() //Position: 0xF0B / 3851
{
	int iVar0;
	
	return iVar0;
}

void Function_23(int iParam0, int iParam1) //Position: 0xF13 / 3859
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0,5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_25(StackVal, Function_26(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_24(iParam1)) || Global_74542[iParam110].f_12 != 1)
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

int Function_24(bool bParam0) //Position: 0x1058 / 4184
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_25(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7) //Position: 0x1084 / 4228
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, uParam7);
}

bool Function_26(int iParam0) //Position: 0x10A0 / 4256
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_27(var uParam0, int iParam1) //Position: 0x10B5 / 4277
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_28(int iParam0, int iParam1) //Position: 0x10C4 / 4292
{
	if (Function_49(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_26(iParam1))
	{
		Function_27(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_48(iParam1) || Function_47(iParam1)) || Function_341(iParam1))
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
	if (Function_21(iParam0->f_132))
	{
		if (Function_46(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_38(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_37(iParam0))
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
	if (!Function_29(iParam0, iParam1))
	{
		return 0;
	}
	Function_27(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_29(int iParam0, int iParam1) //Position: 0x11D9 / 4569
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_36(iParam0 + 172, 4))
		{
			if (!Function_35(iParam1))
			{
				return 0;
			}
		}
		if (Function_36(iParam0 + 172, 1))
		{
			if (!Function_47(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_36(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_33(iParam0->f_176);
			if (Function_30(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_36(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_30(iParam0->f_164))
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
				if (!Function_36(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_36(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_36(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_36(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_36(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_36(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_30(int iParam0) //Position: 0x131D / 4893
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	if (!Function_31(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_31(int iParam0) //Position: 0x1341 / 4929
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_32(int iParam0) //Position: 0x1356 / 4950
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_33(int iParam0) //Position: 0x136D / 4973
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_34(int iParam0) //Position: 0x1387 / 4999
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x139D / 5021
{
	return StackVal;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x13AD / 5037
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_37(int iParam0) //Position: 0x13C9 / 5065
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

bool Function_38(int iParam0) //Position: 0x1410 / 5136
{
	if (!Function_45(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_49(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_44(Global_76847, 0x8000000))
			{
				Function_39(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1469 / 5225
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_41(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_40(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_40(char* cParam0, int iParam1) //Position: 0x14D5 / 5333
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0x150C / 5388
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
		if (Function_43(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_42(uVar0))
		{
			case 0x00000002:
				if (!Function_44(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_42(char* cParam0) //Position: 0x1584 / 5508
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

int Function_43(int iParam0) //Position: 0x1625 / 5669
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_348(&iVar1, 2147483648);
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

bool Function_44(var uParam0, int iParam1) //Position: 0x1662 / 5730
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_45(int iParam0) //Position: 0x1675 / 5749
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1) //Position: 0x1691 / 5777
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_47(int iParam0) //Position: 0x16AD / 5805
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_48(int iParam0) //Position: 0x16C2 / 5826
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_49(bool bParam0, bool bParam1) //Position: 0x16D7 / 5847
{
	return (bParam0 && bParam1) == 0;
}

void Function_50() //Position: 0x16E4 / 5860
{
	if (Function_55(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_54(Global_28180);
			Global_28180.f_8 = Function_51(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_54(Global_28180);
			Global_28180.f_8 = Function_51(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_51(int iParam0, int iParam1) //Position: 0x175F / 5983
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
					if (Function_53(6, 0) || Function_53(12, 0))
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
					if (Function_47(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_53(5, 0))
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
					if (Function_47(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_47(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_47(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_47(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_53(26, 0))
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
					if (Function_47(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_47(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_47(27) && iVar18)
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
					if (Function_47(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_47(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_47(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_47(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_53(17, 0) && iVar15)
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
					if (Function_47(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_53(6, 0) && Function_47(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_47(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_53(9, 0) && Function_47(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_47(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_53(8, 0) && iVar19)
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
	if (Function_52(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_52(StackVal, StackVal, vVar3))
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
	if (!Function_52(StackVal, StackVal, vVar3))
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

bool Function_52(vector3 vParam0) //Position: 0x2350 / 9040
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_53(int iParam0, bool bParam1) //Position: 0x2368 / 9064
{
	int iVar0;
	
	iVar0 = Function_33(iParam0);
	if (!Function_32(iVar0))
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

int Function_54(int iParam0) //Position: 0x23A5 / 9125
{
	int iVar0;
	int iVar1;
	
	if (!Function_55(iParam0))
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

bool Function_55(int iParam0) //Position: 0x23F4 / 9204
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_56(int iParam0) //Position: 0x240A / 9226
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_58(iParam0))
	{
		return 0;
	}
	if (!Function_60(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_57() //Position: 0x2473 / 9331
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_58(int iParam0) //Position: 0x2496 / 9366
{
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_59(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_59(int iParam0, int iParam1) //Position: 0x24E7 / 9447
{
	int iVar0;
	
	if (!Function_55(iParam0))
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

bool Function_60(int iParam0) //Position: 0x2514 / 9492
{
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_59(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_61() //Position: 0x2566 / 9574
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_62(bool bParam0) //Position: 0x256F / 9583
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
			Function_57();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_63(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x25A9 / 9641
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
	if (!Function_44(Global_76846, 2097152))
	{
		Function_39(Global_34573, 2097152, 1, 0);
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
		Function_105(bVar1);
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
	Function_348(&Global_63541[iParam055] + 144, 64);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_104();
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
		Function_10(Global_63541[iParam055].f_140);
	}
	if (Global_63535.f_12 == iParam0)
	{
		Global_63535.f_20 = 0;
		Global_63535.f_16 = 999.0f;
		Global_63535.f_12 = 4294967295;
	}
	if (bParam2)
	{
		if (!Function_103(0, 0, 1, 1))
		{
			Function_67(1);
			Function_66(bParam1, 7);
		}
		else
		{
			Function_65();
		}
	}
	bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 1);
	if (IS_ACTOR_VALID(Global_63541[iParam055].f_204))
	{
		Function_64(iParam0, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
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

void Function_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2ADE / 10974
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

void Function_65() //Position: 0x2C51 / 11345
{
	return;
}

void Function_66(bool bParam0, int iParam1) //Position: 0x2C57 / 11351
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_61())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_67(bool bParam0) //Position: 0x2C99 / 11417
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_97();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_68();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_348(&Global_63095, 1);
		Function_348(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_68() //Position: 0x2CEA / 11498
{
	Function_95();
	Function_94();
	Function_94();
	Function_93();
	Function_93();
	Function_92();
	Function_92();
	Function_76();
	Function_76();
	if (!Function_61())
	{
		Function_73();
		Function_72();
		Function_71();
		Function_70();
	}
	Function_69();
	return;
}

void Function_69() //Position: 0x2D1D / 11549
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

void Function_70() //Position: 0x2E23 / 11811
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

void Function_71() //Position: 0x2E56 / 11862
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

void Function_72() //Position: 0x2FE4 / 12260
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

void Function_73() //Position: 0x3198 / 12696
{
	Function_74(&Global_28260, 1, 0);
	return;
}

void Function_74(int iParam0, bool bParam1, var uParam2) //Position: 0x31A6 / 12710
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
	
	bVar0 = Function_75();
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

var Function_75() //Position: 0x3397 / 13207
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_76() //Position: 0x33AC / 13228
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
				iVar2 = ((Function_91((50 + iVar4)) + Function_91((183 + iVar4))) + Function_91((90 + iVar4)));
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
	Function_77(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_77(int iParam0, bool bParam1, bool bParam2) //Position: 0x3447 / 13383
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
		Function_90(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_89(iParam0);
	if (bParam2)
	{
		Function_78(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_78(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x36E2 / 14050
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_88(390))), 32);
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
					bVar19 = (Function_87(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_87(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_85(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_82(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_79(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_22(), &Var9);
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

var Function_79(int iParam0) //Position: 0x3D0F / 15631
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_80(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3D20 / 15648
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_81(char* cParam0, char* cParam1) //Position: 0x3E15 / 15893
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_82(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3E2E / 15918
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_84(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_83(Function_84(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_83(int iParam0, int iParam1) //Position: 0x3E93 / 16019
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_84(int iParam0, bool bParam1) //Position: 0x3EA5 / 16037
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_85(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3EB7 / 16055
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
	if (((Function_86(iParam0) != 19 || Function_86(iParam0) != 17) || Function_86(iParam0) != 10) || Function_86(iParam0) != 9)
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

int Function_86(int iParam0) //Position: 0x3FE7 / 16359
{
	return Global_35278[iParam020].f_48;
}

float Function_87(int iParam0) //Position: 0x3FF6 / 16374
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_88(int iParam0) //Position: 0x4030 / 16432
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_89(int iParam0) //Position: 0x406D / 16493
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

int Function_90(int iParam0, bool bParam1, bool bParam2) //Position: 0x4207 / 16903
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

int Function_91(bool bParam0) //Position: 0x4421 / 17441
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_92() //Position: 0x4462 / 17506
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
		iVar2 = ((Function_91((50 + iVar3) + 15) + Function_91((183 + iVar3) + 15)) + Function_91((90 + iVar3) + 15));
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
	Function_77(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_93() //Position: 0x44EB / 17643
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
			iVar2 = ((Function_91((50 + iVar3) + 8) + Function_91((183 + iVar3) + 8)) + Function_91((90 + iVar3) + 8));
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
	Function_77(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_94() //Position: 0x4582 / 17794
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
		iVar2 = ((Function_91((50 + iVar3)) + Function_91((183 + iVar3))) + Function_91((90 + iVar3)));
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
	Function_77(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_95() //Position: 0x4601 / 17921
{
	Function_96(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_77(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_96(int iParam0, bool bParam1, int iParam2) //Position: 0x4627 / 17959
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
	Function_90(iParam0, bParam1, 1);
	Function_89(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_78(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_97() //Position: 0x4831 / 18481
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_98(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_98(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_52(StackVal, StackVal, vVar0))
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

vector3 Function_98(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x48D2 / 18642
{
	int iVar0;
	
	iVar0 = Function_101(uParam2, uParam3);
	if (Function_100(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_27(&Global_63095, 1);
			Function_348(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_27(&Global_63095, 2);
			Function_348(&Global_63095, 1);
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
		Function_27(&Global_63095, 2);
		Function_348(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_99();
	return StackVal, StackVal, Function_99();
}

vector3 Function_99() //Position: 0x49B9 / 18873
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_100(int iParam0) //Position: 0x49C2 / 18882
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_101(bool bParam0, bool bParam1) //Position: 0x49D8 / 18904
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
				fVar2 = Function_102(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_102(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_100(bVar0) && !bParam1)
	{
		bVar0 = Function_101(bParam0, 1);
	}
	return bVar0;
}

float Function_102(vector3 vParam0, vector3 vParam3) //Position: 0x4A9F / 19103
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_103(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4ABC / 19132
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

void Function_104() //Position: 0x4B60 / 19296
{
	bool bVar0;
	
	bVar0 = Function_91(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

void Function_105(bool bParam0) //Position: 0x4BBE / 19390
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

int Function_106(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4C04 / 19460
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
	Function_90(iParam0, TO_FLOAT(bParam1), 1);
	Function_89(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_78(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_107(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x4E24 / 20004
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

void Function_108(int iParam0, bool bParam1, bool bParam2) //Position: 0x4E77 / 20087
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
	iVar0 = Function_91(1);
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
			Function_120(1, bVar1);
			if (!bParam2)
			{
				if (!Function_44(Global_76848, 1))
				{
					Function_39(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_118(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_44(Global_76848, 2))
				{
					Function_39(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_106(1, bVar1, 0, 0);
	}
	else
	{
		Function_117(1, (4294967295 * bVar1), 0);
	}
	if (Function_91(1) <= 4294962296)
	{
		Function_77(1, 4294962296, 0);
	}
	else if (Function_91(1) >= 5000)
	{
		Function_77(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_87(1));
	iVar0 = Function_91(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_110(2, Function_116(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_110(2, Function_116(Global_12976.f_152), 0);
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
				Function_110(2, Function_116(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_110(2, Function_116(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_110(2, Function_116(Global_12976.f_152), 1);
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
				Function_110(2, Function_116(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_110(2, Function_116(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_110(2, Function_116(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_110(2, Function_116(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_110(2, Function_116(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_110(2, Function_116(Global_12976.f_152), 1);
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
				Function_110(2, Function_116(Global_12976.f_152), 0);
			}
			break;
	}
	Function_109(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_109(int iParam0, int iParam1) //Position: 0x518C / 20876
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

int Function_110(int iParam0, char* cParam1, bool bParam2) //Position: 0x53EA / 21482
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
	Function_114(iParam0, cParam1, 0, 1);
	iVar1 = Function_111();
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

int Function_111() //Position: 0x556F / 21871
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
	Function_112();
	return 0;
}

void Function_112() //Position: 0x560E / 22030
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
		Function_113(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x56BD / 22205
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

int Function_114(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x571B / 22299
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
		Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_115(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x5A6D / 23149
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

var Function_116(int iParam0) //Position: 0x5AF0 / 23280
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

int Function_117(int iParam0, bool bParam1, int iParam2) //Position: 0x5B93 / 23443
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
	Function_89(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_78(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_118(int iParam0, bool bParam1) //Position: 0x5D8E / 23950
{
	bool bVar0;
	int iVar1;
	
	Function_117(iParam0, bParam1, 0);
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
	iVar1 = Function_119(iParam0, 4294967295);
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
	iVar1 = Function_111();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_119(int iParam0, int iParam1) //Position: 0x5F2A / 24362
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

int Function_120(int iParam0, bool bParam1) //Position: 0x5F6B / 24427
{
	bool bVar0;
	int iVar1;
	
	Function_106(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_119(iParam0, 4294967295);
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
	iVar1 = Function_111();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_121(int iParam0) //Position: 0x6108 / 24840
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x6117 / 24855
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
	iVar0 = Function_91(3);
	Function_124();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_120(3, bVar1);
		if (!bParam2)
		{
			if (!Function_44(Global_76848, 4))
			{
				Function_39(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_106(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_87(3));
	iVar0 = Function_91(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_110(4, Function_123(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_110(4, Function_123(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_110(4, Function_123(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_110(4, Function_123(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_110(4, Function_123(Global_12976.f_156), 1);
				Function_109(Global_12976.f_152, Global_12976.f_156);
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

var Function_123(int iParam0) //Position: 0x62DA / 25306
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

void Function_124() //Position: 0x6369 / 25449
{
	Function_126(3, 0.0f);
	Function_125(3, 10000.0f);
	return;
}

int Function_125(int iParam0, int iParam1) //Position: 0x637F / 25471
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_126(int iParam0, int iParam1) //Position: 0x63BF / 25535
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_127() //Position: 0x63FF / 25599
{
	if (UI_ISACTIVE("dueling"))
	{
		UI_EXIT("dueling");
	}
	if (UI_ISACTIVE("ncutscenes"))
	{
		UI_EXIT("ncutscenes");
	}
	return;
}

void Function_128(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x6443 / 25667
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
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_75();
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
			if (Function_61())
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
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_106(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_130();
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
	Function_129(bParam9);
}

void Function_129(bool bParam0) //Position: 0x6533 / 25907
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
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

void Function_130() //Position: 0x65D8 / 26072
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x65ED / 26093
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
			Function_278(iParam0);
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
					Function_27(&Global_63541[iParam455] + 144, 512);
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
				Function_277(iParam0 + 60, iParam0->f_40, !IS_ACTOR_ALIVE(iParam0->f_44), *iParam0);
				Function_265(iParam0);
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
				if (Function_342(&bLocal_90))
				{
					Function_264(iParam2 + 44);
					*iParam1 = 2;
					SET_HUD_MAP_DRAW_ENABLED(0);
				}
				else
				{
					Function_261(iParam0);
				}
				break;
			
			case 0x00000002:
				if (Function_261(iParam0) || Function_259(iParam2 + 44) < 2.0f)
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
					Function_236(iParam0);
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
						Function_348(&Global_63541[iParam455] + 144, 512);
					}
					Function_2(1.0f);
					Function_278(iParam0);
					PRINTSTRING("Dueling - Fail");
					PRINTNL();
					return 1;
				}
				break;
			
			case 0x00000005:
				Function_342(&bLocal_90);
				Function_261(iParam0);
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					if (Function_342(&bLocal_90))
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
						Function_236(iParam0);
						if (iParam0->f_36)
						{
							iParam2->f_16 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", iParam0 + 68, 6, 0);
						}
						SET_HUD_MAP_DRAW_ENABLED(0);
						Global_3369 = 1;
					}
					Function_235(iParam0);
					if (Function_230(StackVal, iParam3, iParam2 + 32, *iParam0, !iParam0->f_36))
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
				Function_235(iParam0);
				if (Function_230(StackVal, iParam3, iParam2 + 32, *iParam0, !iParam0->f_36))
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
					Function_229("Dueling_Tutorial_DrawNow", "DUEL_CAMERA_CUT_MASTER", 3212836864, 0, 0, 0, 0);
					iParam2->f_64 = 1;
				}
				if (StackVal || IS_ACTION_NODE_PLAYING_PARTIAL(IS_ACTION_NODE_PLAYING_PARTIAL(StackVal, "draw"), "nhold_draw"))
				{
				}
				Function_226(iParam0);
				if (Function_225())
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
				else if (Function_224() == 5003)
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*iParam0), "iDuelResult", 5003);
					Function_264(iParam2 + 20);
					*iParam1 = 13;
				}
				break;
			
			case 0x0000000B:
				Function_226(iParam0);
				if (Function_224() >= 4294967295)
				{
					Function_143(iParam0, iParam2->f_60);
					if (iParam2->f_56)
					{
						if (!HAS_ACCESSORY_ENUM(StackVal, 0))
						{
							iParam2->f_56 = 0;
							Function_106(455, 1, 0, 0);
						}
					}
					Function_264(iParam2 + 20);
					if (Function_224() == 5003)
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
							Function_142(iParam0);
							*iParam1 = 12;
						}
					}
				}
				break;
			
			case 0x0000000C:
				Function_226(iParam0);
				if (Function_141())
				{
					if (!bLocal_164)
					{
						Function_136(iParam0);
					}
					iParam2->f_68 = 1;
				}
				if (Function_132(iParam0))
				{
					*iParam1 = 13;
				}
				break;
			
			case 0x0000000D:
				Function_226(iParam0);
				if (IS_ACTOR_VALID(StackVal))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(StackVal);
				}
				if (Function_141())
				{
					if (!bLocal_164)
					{
						Function_136(iParam0);
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
					Function_278(iParam0);
					PRINTSTRING("Dueling - Terminating Cleanly");
					PRINTNL();
					iParam2->f_84 = 1;
				}
				break;
			
			case 0x0000000E:
				if (!bLocal_164)
				{
					Function_136(iParam0);
				}
				if (IS_SCRIPT_VALID(iParam2->f_16))
				{
					TERMINATE_SCRIPT(iParam2->f_16);
				}
				Function_278(iParam0);
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
		Function_278(iParam0);
		PRINTSTRING("Dueling - Pass");
		PRINTNL();
		return 1;
	}
	if (iParam2->f_72)
	{
		if (iParam4 >= 4294967295)
		{
			Function_348(&Global_63541[iParam455] + 144, 512);
		}
		if (IS_SCRIPT_VALID(iParam2->f_16))
		{
			TERMINATE_SCRIPT(iParam2->f_16);
		}
		Function_278(iParam0);
		PRINTSTRING("Dueling - Fail");
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0) //Position: 0x6DB9 / 28089
{
	float fVar0;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_163);
	Function_133(iParam0, fVar0);
	if (fVar0 < 5.0f)
	{
		return 1;
	}
	return 0;
}

void Function_133(var uParam0, bool bParam1) //Position: 0x6DE5 / 28133
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
							Function_134(bVar2, bVar3);
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

void Function_134(bool bParam0, bool bParam1) //Position: 0x6EDA / 28378
{
	if ((bParam1 && 8) != 0)
	{
		Function_135(bParam0, bParam1, "hat_tip");
	}
	else if ((bParam1 && 32) != 0)
	{
	}
	else
	{
		Function_135(bParam0, bParam1, "Reaction");
	}
	return;
}

void Function_135(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6F1B / 28443
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

void Function_136(int iParam0) //Position: 0x6F91 / 28561
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
			if (Function_140(iParam0->f_44) == bLocal_161)
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
		Function_138(9);
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
	Function_137(1);
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

void Function_137(int iParam0) //Position: 0x727D / 29309
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_138(int iParam0) //Position: 0x7290 / 29328
{
	Function_139(&Global_28842, iParam0);
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0x729E / 29342
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

int Function_140(bool bParam0) //Position: 0x72B9 / 29369
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

bool Function_141() //Position: 0x7313 / 29459
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

void Function_142(int iParam0) //Position: 0x734A / 29514
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

void Function_143(var uParam0, int iParam1) //Position: 0x73E1 / 29665
{
	switch (Function_224())
	{
		case 0x0000138A:
			Function_159(Function_219(GET_ACTOR_ENUM(*uParam0), 6, 4), (!Global_3380 && !Function_218()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5002);
			MEMORY_CLEAR_ALL(StackVal);
			SET_ACTOR_FACE_STYLE(StackVal, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(StackVal, false);
			AI_GLOBAL_CLEAR_DANGER(StackVal);
			AUDIO_PLAY_VOCAL_EFFECT(StackVal, 10, 1);
			Function_106(451, 1, 0, 0);
			Function_106(454, 1, 0, 0);
			Function_106(452, 1, 0, 0);
			if (!Global_3380 && !(((Function_158(48) || Function_158(74)) || Function_158(51)) || Function_158(67)))
			{
				Function_122(100, 1, 0);
				Function_108(200, 1, 0);
			}
			Function_144(6, Global_29006);
			break;
		
		case 0x00001389:
			Function_159(Function_219(GET_ACTOR_ENUM(*uParam0), 6, 4), (!Global_3380 && !Function_218()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5001);
			Function_106(451, 1, 0, 0);
			Function_106(452, 1, 0, 0);
			if (!Global_3380 && !(((Function_158(48) || Function_158(74)) || Function_158(51)) || Function_158(67)))
			{
				Function_122(50, 1, 0);
			}
			if (iParam1 && !(((Function_158(48) || Function_158(74)) || Function_158(51)) || Function_158(67)))
			{
				if (!DECOR_CHECK_EXIST(StackVal, "honor"))
				{
					Function_108(4294967196, 1, 0);
				}
				else
				{
					DECOR_SET_BOOL(*uParam0, "bDrewFirst", true);
				}
			}
			Function_144(6, Global_29006);
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

void Function_144(int iParam0, int iParam1) //Position: 0x75E5 / 30181
{
	if (!Function_157(3))
	{
		return;
	}
	if (Function_61())
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
					Function_145(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_145(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_145(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_145(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_145(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_145(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_145(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_60(2) && !Function_58(2))
				{
					Function_145(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x76F3 / 30451
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_55(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_157(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_59(bParam0, 2))
	{
		Function_106(456, 1, 0, 0);
		Function_156(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_155(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_154(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_156(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_103(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 0);
			}
			else
			{
				Function_65();
			}
		}
		Function_149(bParam0);
		if (StackVal && !Function_49(((((!Function_148() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_49((((Function_148() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_44(Global_76846, 2))
		{
			Function_39(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_50();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_147(3, bParam1);
				break;
			
			case 0x00000005:
				Function_147(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_147(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_147(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_147(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_147(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_146(2, 24);
				break;
			
			case 0x00000003:
				Function_146(2, 25);
				break;
			
			case 0x0000000F:
				Function_146(2, 26);
				break;
			
			case 0x0000000D:
				Function_146(2, 27);
				break;
			
			case 0x0000000E:
				Function_146(2, 28);
				break;
			}
	}
}

void Function_146(int iParam0, bool bParam1) //Position: 0x7982 / 31106
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

void Function_147(int iParam0, bool bParam1) //Position: 0x79E9 / 31209
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

bool Function_148() //Position: 0x7A48 / 31304
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_149(bool bParam0) //Position: 0x7A75 / 31349
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
			if (Function_154(bParam0, Function_153(bVar24)))
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
			if (Function_154(bParam0, Function_153(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_152(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_151(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_150(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_150(int iParam0) //Position: 0x7C25 / 31781
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_55(iParam0))
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

void Function_151(bool bParam0, bool bParam1) //Position: 0x7C7C / 31868
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

var Function_152(int iParam0) //Position: 0x7CA1 / 31905
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_55(iParam0))
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

int Function_153(bool bParam0) //Position: 0x7CF7 / 31991
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_154(bool bParam0, int iParam1) //Position: 0x7D03 / 32003
{
	int iVar0;
	
	if (!Function_55(bParam0))
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

void Function_155(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7D62 / 32098
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

void Function_156(bool bParam0, int iParam1) //Position: 0x7DAD / 32173
{
	if (!Function_55(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_157(int iParam0) //Position: 0x7E02 / 32258
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_158(int iParam0) //Position: 0x7E1E / 32286
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_159(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x7E33 / 32307
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_217(12);
	Function_215(2);
	Function_213((15 - Function_214(105)));
	if (Function_212(bParam0) == 1)
	{
		iVar2 = Function_211(bParam0);
		Function_206(&(Global_3422[iVar240]));
		Function_205(4194304);
		if (bParam3)
		{
			Function_182(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_180(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_182(iVar2, &uVar0, 0);
		}
		bVar1 = Function_179();
		if (bParam1)
		{
			Function_176(iVar2, bParam0, bVar1);
			Function_175();
		}
	}
	Function_162(bParam0, bParam1, iParam2, bVar1);
	if (Function_212(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_161(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_212(bParam0) == 1)
		{
			iVar2 = Function_211(bParam0);
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
	Function_160();
}

void Function_160() //Position: 0x7F20 / 32544
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_53(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_161(int iParam0, bool bParam1) //Position: 0x7F50 / 32592
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
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
							Function_39(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_161(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_161(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_161(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_161(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_161(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_161(57, 0);
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

void Function_162(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8249 / 33353
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_30(bParam0))
	{
		Function_173();
		return;
	}
	iVar0 = Function_212(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_211(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_172(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_171(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_169();
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
		Function_167("DEED_COMPLETE", bParam0);
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
			Function_164(bParam0);
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
						switch (Function_211(bParam0))
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
			Function_67(1);
			Function_66(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_163(bParam0, &Var14);
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

void Function_163(int iParam0, int iParam1) //Position: 0x845B / 33883
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_164(bool bParam0) //Position: 0x8495 / 33941
{
	int iVar0;
	int iVar1;
	
	if (!Function_32(bParam0))
	{
		return;
	}
	switch (Function_212(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_211(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_106(12, 1, 0, 0);
				Function_146(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_106(13, 1, 0, 0);
				Function_146(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_106(14, 1, 0, 0);
				Function_146(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_106(15, 1, 0, 0);
				Function_146(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_106(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_211(bParam0))
			{
				case 0x00000000:
					if (Function_166(bParam0) == 1)
					{
						iVar0 = Function_165(bParam0);
						if (Function_21(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_146(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_146(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_146(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_146(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_146(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_146(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_146(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_146(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_146(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_146(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_146(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_146(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_146(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_146(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_146(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_146(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_146(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_146(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_146(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_146(4, 19);
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
								Function_106(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_106(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_106(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_165(bParam0) == 0)
			{
				if (Function_166(bParam0) == 1)
				{
					Function_106(458, 1, 0, 0);
					iVar0 = Function_211(bParam0);
					if (Function_21(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_146(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_146(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_146(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_146(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_146(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_146(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_146(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_146(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_166(bParam0) == 1)
			{
				Function_106(400, 1, 0, 0);
			}
			switch (Function_211(bParam0))
			{
				case 0x00000001:
					Function_106(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_146(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_146(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_146(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_106(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_146(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_146(6, 9);
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

int Function_165(bool bParam0) //Position: 0x8971 / 35185
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_166(bool bParam0) //Position: 0x8990 / 35216
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_167(char* cParam0, bool bParam1) //Position: 0x89AA / 35242
{
	struct<4> Var0;
	
	if (!Function_30(bParam1))
	{
		return;
	}
	switch (Function_212(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_168(Function_211(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_212(bParam1), Function_211(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_212(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_168(int iParam0) //Position: 0x8ACE / 35534
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_169() //Position: 0x8AF3 / 35571
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(Global_6269))
	{
		return;
	}
	iVar0 = Function_91(24);
	iVar1 = Function_33(Global_6269);
	if (!Function_34(iVar0) && Function_170(iVar1) < 0)
	{
		Function_77(24, Global_6269, 0);
		Function_114(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_170(Function_33(iVar0)))
	{
		Function_77(24, Global_6269, 0);
		Function_114(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_170(int iParam0) //Position: 0x8B73 / 35699
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_171(int iParam0) //Position: 0x8B8D / 35725
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_172(char* cParam0) //Position: 0x8BB7 / 35767
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

void Function_173() //Position: 0x8E0D / 36365
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
			Function_174(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_174(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9054 / 36948
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

void Function_175() //Position: 0x907D / 36989
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

void Function_176(int iParam0, int iParam1, bool bParam2) //Position: 0x90AB / 37035
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
	
	if (!Function_34(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_178(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_91(42) - Global_34165.f_116);
				bVar1 = (Function_91(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_88(49)) - Global_34165.f_124);
				bVar3 = (Function_91(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_91(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_177(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_122(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_171(iParam0) };
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

int Function_177(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x9347 / 37703
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

int Function_178(int iParam0) //Position: 0x950F / 38159
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

var Function_179() //Position: 0x95A4 / 38308
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_180(int iParam0) //Position: 0x95C9 / 38345
{
	if (!Function_34(iParam0))
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
			Function_122(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_122(25, 1, 0);
			Function_181(1, 1);
			break;
		
		case 0x00000015:
			Function_181(50, 1);
			Function_122(250, 1, 0);
			Function_108(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_122(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_181(50, 1);
			Function_122(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_181(5, 1);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_122(75, 1, 0);
			Function_108(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_181(5, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_181(25, 1);
			Function_122(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_181(10, 1);
			Function_122(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_122(50, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_122(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_108(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_181(20, 1);
			Function_122(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_181(25, 1);
			Function_122(150, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_181(10, 1);
			Function_122(150, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_122(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_108(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_108(100, 1, 0);
			Function_181(5, 1);
			break;
		
		case 0x0000000F:
			Function_181(3, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_108(125, 1, 0);
			Function_122(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_181(50, 1);
			Function_122(100, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_181(50, 1);
			Function_122(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_181(75, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_122(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_122(250, 1, 0);
			Function_108(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_122(75, 1, 0);
			Function_108(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_122(200, 1, 0);
			Function_108(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_122(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_122(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_181(50, 1);
			Function_122(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_181(100, 1);
			Function_122(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_122(200, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_122(300, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_122(300, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_122(300, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_122(500, 1, 0);
			Function_108(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_122(150, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_108(25, 1, 0);
			Function_181(100, 1);
			break;
		
		case 0x0000002A:
			Function_122(150, 1, 0);
			Function_108(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_108(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_108(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_108(150, 1, 0);
			Function_181(100, 1);
			break;
		
		case 0x00000035:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_108(150, 1, 0);
			Function_181(100, 1);
			break;
		
		case 0x00000032:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

int Function_181(bool bParam0, bool bParam1) //Position: 0x9A84 / 39556
{
	bool bVar0;
	
	bVar0 = Function_91(0);
	if ((Function_91(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_106(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_91(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_106(597, bParam0, 0, 0);
	}
	if ((Function_91(597) + Function_91(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_182(int iParam0, var uParam1, bool bParam2) //Position: 0x9B4F / 39759
{
	struct<4> Var0;
	
	if (!Function_34(iParam0))
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
			Function_203(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_201(Global_30640[0]);
			Function_201(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_199(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_201(Global_30668[0]);
			Function_197(0);
			Function_195(2, 1);
			Function_195(0, 1);
			Function_195(1, 1);
			break;
		
		case 0x00000003:
			Function_201(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_201(Global_30668[0]);
			Function_201(Global_30640[0]);
			Function_193(0, 1);
			Function_193(15, 1);
			Function_193(9, 1);
			Function_193(12, 1);
			Function_193(16, 1);
			Function_195(3, 1);
			break;
		
		case 0x00000005:
			Function_201(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_199(21, bParam2, 4);
			Function_201(Global_30668[0]);
			Function_195(39, 1);
			break;
		
		case 0x00000007:
			Function_201(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_201(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_60(4))
					{
						Function_192(4, 0, 0, 1);
					}
				}
			}
			Function_201(Global_30640[0]);
			Function_201(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_201(Global_30640[0]);
			Function_201(Global_30668[2]);
			Function_8(&(Global_29008[Global_30668[2]]), 32768);
			Function_191(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_199(9, bParam2, 4);
			Function_201(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_201(Global_30640[0]);
			Function_201(Global_30658[0]);
			Function_8(&(Global_29008[Global_30658[0]]), 32768);
			Function_191(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_201(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_201(Global_30640[0]);
			Function_201(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_201(Global_30640[1]);
			Function_201(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_201(Global_30679[0]);
			Function_201(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_201(Global_30658[5]);
			Function_201(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_199(21, bParam2, 4);
			Function_201(Global_30640[4]);
			Function_201(Global_30658[4]);
			Function_190(&Global_76847, 0x2000000);
			Function_190(&Global_76847, 0x4000000);
			Function_190(&Global_76847, 4096);
			Function_190(&Global_76847, 8);
			Function_190(&Global_76847, 8388608);
			Function_190(&Global_76847, 524288);
			Function_190(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_201(Global_30640[4]);
			Function_201(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_191(&(Global_29008[Global_30640[4]]), 256);
			Function_201(Global_30640[4]);
			Function_201(Global_30658[0]);
			Function_8(&(Global_29008[Global_30658[0]]), 32768);
			Function_191(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_201(Global_30640[0]);
			Function_201(Global_30640[5]);
			Function_199(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_201(Global_30658[3]);
			Function_8(&(Global_29008[Global_30658[3]]), 32768);
			Function_191(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_199(9, bParam2, 4);
			Function_201(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_8(&(Global_29008[Global_30679[1]]), 32768);
			Function_201(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_199(12, bParam2, 4);
			Function_191(&(Global_29008[Global_30679[1]]), 256);
			Function_201(Global_30668[3]);
			Function_201(Global_30693[0]);
			Function_201(Global_30685[0]);
			Function_197(4);
			Function_193(13, 1);
			Function_193(1, 1);
			Function_193(18, 1);
			Function_195(34, 1);
			Function_195(44, 1);
			Function_195(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_199(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_201(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_201(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_201(Global_30693[0]);
			Function_201(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_201(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_201(Global_30685[0]);
			Function_201(Global_30693[0]);
			Function_201(Global_30693[1]);
			Function_201(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_199(23, bParam2, 3);
			Function_193(23, 1);
			Function_201(Global_30685[0]);
			Function_201(Global_30685[2]);
			Function_8(&(Global_29008[Global_30685[2]]), 32768);
			Function_191(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_199(19, bParam2, 4);
			Function_201(Global_30685[0]);
			Function_201(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_199(24, bParam2, 3);
			Function_193(24, 1);
			Function_201(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_201(Global_30685[0]);
			Function_201(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_201(Global_30693[12]);
			Function_201(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_201(Global_30693[12]);
			Function_201(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_199(25, bParam2, 10);
			Function_201(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_201(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_201(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_199(13, bParam2, 4);
			Function_201(Global_30693[2]);
			Function_201(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_60(8))
				{
					Function_192(8, 0, 0, 1);
				}
			}
			Function_201(Global_30685[0]);
			Function_197(9);
			Function_193(7, 1);
			Function_193(11, 1);
			Function_193(3, 1);
			Function_193(20, 1);
			Function_195(57, 1);
			break;
		
		case 0x0000002A:
			Function_199(2, bParam2, 4);
			Function_201(Global_30717[0]);
			Function_201(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_201(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_201(Global_30717[0]);
			Function_201(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_201(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_201(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_201(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_199(17, bParam2, 4);
			Function_201(Global_30723[0]);
			Function_201(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_58(15))
				{
					Function_189(15, 0, 1);
				}
			}
			Function_191(&(Global_29008[Global_30717[1]]), 256);
			Function_197(11);
			Function_201(Global_30717[1]);
			Function_201(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_201(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_201(Global_30717[1]);
			Function_201(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_201(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_201(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_201(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_201(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_201(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_201(Global_30717[1]);
			Function_183(11);
			Function_197(12);
			Global_16537[1121].f_40 = 0;
			Function_195(56, 1);
			if (!bParam2)
			{
				if (!Function_60(9))
				{
					Function_192(9, 0, 0, 0);
				}
				if (!Function_60(10))
				{
					Function_192(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_168(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_183(int iParam0) //Position: 0xA43F / 42047
{
	bool bVar0;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_188(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_188(Global_16537[iParam021].f_72, 0);
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
			Function_184(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_184(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA5AE / 42414
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
		Function_186(Function_187(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_186(Function_187(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_186(StackVal);
				vVar1 = { StackVal, StackVal, Function_186(StackVal) };
				if (Function_185(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_185(vector3 vParam0, vector3 vParam3) //Position: 0xA6B4 / 42676
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_186(bool bParam0) //Position: 0xA6E1 / 42721
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

var Function_187(vector3 vParam0) //Position: 0xA738 / 42808
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

void Function_188(bool bParam0, bool bParam1) //Position: 0xA786 / 42886
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

void Function_189(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA7DA / 42970
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_55(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_58(bParam0))
	{
		if (!Function_60(bParam0))
		{
			Function_192(bParam0, 1, 0, 0);
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
		Function_106(457, 1, 0, 0);
		Function_156(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_103(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 0);
			}
			else
			{
				Function_65();
			}
		}
	}
	return;
}

void Function_190(var uParam0, int iParam1) //Position: 0xA978 / 43384
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_191(var uParam0, int iParam1) //Position: 0xA987 / 43399
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_192(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA99E / 43422
{
	struct<8> Var0;
	
	if (!Function_55(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_157(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_60(bParam0))
	{
		Function_106(456, 1, 0, 0);
		Function_156(bParam0, 2);
		if (bParam2)
		{
			if (!Function_103(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 5);
			}
			else
			{
				Function_65();
			}
		}
		Function_149(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_148() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_148() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_155(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_44(Global_76846, 2))
		{
			Function_39(Global_34573, 2, 1, 0);
		}
	}
}

int Function_193(int iParam0, int iParam1) //Position: 0xAAE8 / 43752
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_194(iParam0, iParam1);
	Function_39(Global_34573, 1, 4, 1);
	return 1;
}

int Function_194(int iParam0, int iParam1) //Position: 0xAB5B / 43867
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_195(int iParam0, int iParam1) //Position: 0xABB7 / 43959
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_196(iParam0, iParam1);
	Function_39(Global_34573, 1, 4, 1);
	return 1;
}

int Function_196(int iParam0, int iParam1) //Position: 0xAC28 / 44072
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_197(int iParam0) //Position: 0xAC82 / 44162
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_198(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_198(Global_16537[iParam021].f_72, 0);
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
			Function_106(468, 1, 0, 0);
			Function_146(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_155("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_184(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_192(14, 1, 0, 0);
				Function_145(14, 1, 0, 0, 0);
			}
			if (!Function_103(0, 0, 1, 1))
			{
				Function_67(1);
				Function_66(1, 6);
			}
			else
			{
				Function_65();
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
			Function_155("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_106(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_146(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_198(bool bParam0, bool bParam1) //Position: 0xAF2E / 44846
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

void Function_199(bool bParam0, bool bParam1, int iParam2) //Position: 0xAF7F / 44927
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_200(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_203(bParam0, 0, 0);
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

bool Function_200(int iParam0, int iParam1) //Position: 0xAFED / 45037
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_201(int iParam0) //Position: 0xB000 / 45056
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_46(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_8(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_106(473, 1, 0, 0);
		iVar0 = Function_202(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_106(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_106(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_106(476, 1, 0, 0);
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
		Function_146(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_146(7, 30);
	}
	if (Function_87(473) <= Function_88(473))
	{
		if (!Function_61())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_202(int iParam0) //Position: 0xB0FF / 45311
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_21(iParam0))
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

int Function_203(bool bParam0, bool bParam1, int iParam2) //Position: 0xB157 / 45399
{
	if (!Function_204(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_75(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_75(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_75(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_204(int iParam0) //Position: 0xB1AE / 45486
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_205(int iParam0) //Position: 0xB1C0 / 45504
{
	int iVar0;
	
	if (Function_49(iParam0, 1) && Function_49(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_206(int iParam0) //Position: 0xB1F4 / 45556
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
			Function_207(4, 0, 0);
		}
	}
	return;
}

void Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB25B / 45659
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
		Function_208(Global_16524, bVar0, 1);
	}
	return;
}

void Function_208(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB338 / 45880
{
	int iVar0;
	
	Function_210(bParam0);
	Function_105(bParam1);
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
	Function_209();
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

void Function_209() //Position: 0xB4B1 / 46257
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_210(int iParam0) //Position: 0xB4BD / 46269
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

int Function_211(bool bParam0) //Position: 0xB503 / 46339
{
	if (!Function_32(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_212(bool bParam0) //Position: 0xB523 / 46371
{
	if (!Function_32(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_213(int iParam0) //Position: 0xB53E / 46398
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_214(105)), 0);
	return;
}

int Function_214(int iParam0) //Position: 0xB55F / 46431
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_215(bool bParam0) //Position: 0xB575 / 46453
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_105(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_105(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_105(Global_12976.f_24);
	PRINTNL();
	Function_216(bParam0);
	return;
}

void Function_216(int iParam0) //Position: 0xB611 / 46609
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_214(90)), 0);
	return;
}

void Function_217(bool bParam0) //Position: 0xB632 / 46642
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

bool Function_218() //Position: 0xB64D / 46669
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_63541)
	{
		if (Function_158(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB672 / 46706
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_223(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_220(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_220(bParam0, bParam1, bParam2, 4294967295);
}

int Function_220(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB6D0 / 46800
{
	var uVar0;
	
	if (!Function_222(bParam2))
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
	uVar0 = Function_223(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_221(uVar0);
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

int Function_221(int iParam0) //Position: 0xB825 / 47141
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

bool Function_222(int iParam0) //Position: 0xB863 / 47203
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_223(int iParam0, int iParam1, bool bParam2) //Position: 0xB878 / 47224
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_224() //Position: 0xB898 / 47256
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

bool Function_225() //Position: 0xB904 / 47364
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

void Function_226(int iParam0) //Position: 0xB938 / 47416
{
	if (iLocal_154 == 0)
	{
		if (Function_228(iParam0))
		{
			Function_227(iParam0);
			iLocal_154 = 1;
		}
	}
	return;
}

void Function_227(int iParam0) //Position: 0xB954 / 47444
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
						Function_135(bVar2, bVar3, "GunfireShock");
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

bool Function_228(int iParam0) //Position: 0xB9EE / 47598
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

void Function_229(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xBA8C / 47756
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

bool Function_230(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xBABC / 47804
{
	if (!Function_234(iParam1))
	{
		Function_264(iParam1);
	}
	switch (*uParam0)
	{
		case 0x000003EC:
			UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(bParam3));
			UI_ENTER("RacePosition");
			PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
			if (Global_74542[5110] != 5 && bParam4)
			{
				Function_155("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
			}
			Function_232(iParam1);
			*uParam0 = 1006;
			break;
		
		case 0x000003EE:
			if (Function_259(iParam1) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
			{
				UI_EXIT("RacePosition");
			}
			if (Function_259(iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial0Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				Function_232(iParam1);
				*uParam0 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_259(iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial1Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_232(iParam1);
				*uParam0 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_259(iParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial2Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_231();
				Function_232(iParam1);
				*uParam0 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_231() //Position: 0xBCC8 / 48328
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
							Function_135(bVar2, bVar3, "point");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_232(int iParam0) //Position: 0xBD5B / 48475
{
	Function_233(iParam0, 0.0f);
	return;
}

void Function_233(int iParam0, float fParam1) //Position: 0xBD67 / 48487
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_27(iParam0, 1);
	Function_348(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_234(int iParam0) //Position: 0xBD88 / 48520
{
	return Function_49(*iParam0, 1);
}

void Function_235(int iParam0) //Position: 0xBD95 / 48533
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	iLocal_154 = 0;
	return;
}

void Function_236(int iParam0) //Position: 0xBDA8 / 48552
{
	var uVar0;
	bool bVar1;
	struct<61> Var2;
	
	bLocal_164 = false;
	iLocal_165 = 0;
	if (!IS_ACTOR_VALID(StackVal))
	{
		LOG_ERROR("dueler is not valid, exiting dueling");
		Function_278(iParam0);
		TERMINATE_THIS_SCRIPT();
	}
	AUDIO_ALLOW_PREDUEL_SPEECH(StackVal);
	AUDIO_ALLOW_PREDUEL_SPEECH(*iParam0);
	if (IS_VOLUME_VALID(iParam0->f_32))
	{
		FIRE_STOP_FLAMES_IN_VOLUME(iParam0->f_32);
		Function_258(iParam0->f_32);
		Function_257(iParam0->f_32, bLocal_161, 0);
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
	if (Function_255(1))
	{
		Function_253(9);
		iLocal_155 = 1;
	}
	Function_340(StackVal);
	if (!Function_252(GET_ACTOR_ENUM(*iParam0), 6, 4))
	{
		Function_220(GET_ACTOR_ENUM(*iParam0), 6, 4, 4294967295);
		iParam0->f_36 = 1;
	}
	else if (Function_166(Function_219(GET_ACTOR_ENUM(*iParam0), 6, 4)) < 0)
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
	Function_251(StackVal, 0);
	RESET_ANIM_SET_FOR_ACTOR(StackVal, 0);
	RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
	ACTOR_FORCE_WEAPON_RENDER(StackVal, 1, 1);
	ACTOR_ENABLE_VARIABLE_MESH(StackVal, 5, true);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_250(*iParam0);
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
		Function_249(iParam0->f_44);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, StackVal, StackVal, GET_OBJECT_HEADING(Function_249(iParam0->f_44)), 1, true, 1);
		RESET_ANIM_SET_FOR_ACTOR(iParam0->f_44, 1);
		SET_LINKED_ANIM_TARGET(StackVal, iParam0->f_44);
		SET_ANIM_SET_FOR_ACTOR(StackVal, "duel_hostage", 0);
		SET_ANIM_SET_FOR_ACTOR(iParam0->f_44, "duel_hostage", 0);
		DESTROY_OBJECT(DROP_ACCESSORY_ENUM(StackVal, 0));
		ADD_DUEL_HOSTAGE(iParam0->f_44, *iParam0);
		SET_EMOTION(iParam0->f_44, 3, -1.0f);
		TASK_FLEE_ACTOR(StackVal, iParam0->f_44, 20.0f, -1.0f, 0, 0, 0);
	}
	Function_261(iParam0);
	if (IS_VOLUME_VALID(iParam0->f_56))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bLocal_161, 4294967295, 1);
		LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, iParam0->f_56, "", 1);
		Function_248(bVar1);
		DESTROY_OBJECTSET(bVar1);
	}
	iLocal_166 = 0;
	*(&Var2 + 64) = 6;
	*(&Var2 + 140) = 6;
	uVar44 = 6;
	if (Function_246(&Var2, iParam0->f_64))
	{
		iLocal_166 = Var2.f_56;
		if (Var2.f_60 >= 0)
		{
			if (Var2.f_56 == 1)
			{
				Function_245(bLocal_161, &Var2, iParam0, &uVar44);
			}
			else if (Var2.f_56 == 2)
			{
				Function_242(50.0f, bLocal_161, &Var2, iParam0, &uVar44);
			}
		}
	}
	Function_239(iParam0, bLocal_161);
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
	Function_238(1);
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
	Function_237(&uLocal_158, 0.0f);
	return;
}

void Function_237(int iParam0, float fParam1) //Position: 0xC36B / 50027
{
	if (!Function_234(iParam0))
	{
		Function_233(iParam0, fParam1);
	}
	return;
}

void Function_238(int iParam0) //Position: 0xC381 / 50049
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

int Function_239(int iParam0, bool bParam1) //Position: 0xC39E / 50078
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
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bParam1, 15, 1);
	iVar2 = LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
	bLocal_153 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bParam1, 15, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1));
		if (((((StackVal == bVar4 && bVar4 == iParam0->f_44) && bVar4 == *iParam0) && IS_ACTOR_HUMAN(bVar4)) && !IS_OBJECT_IN_OBJECTSET(bVar4, bLocal_152)) && !DECOR_CHECK_EXIST(bVar4, "ignoreactorinduel"))
		{
			if (DECOR_CHECK_EXIST(bVar4, "DuelIsCrowdActor"))
			{
				Function_240(bVar4, iParam0, bParam1);
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

void Function_240(bool bParam0, var uParam1, int iParam2) //Position: 0xC4FB / 50427
{
	bool bVar0;
	var uVar1[2];
	
	iParam2 = iParam2;
	if (DECOR_CHECK_EXIST(bParam0, "DuelIsCrowdActor"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "DuelIsCrowdActor");
		Function_241(bVar0, &uVar1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, uVar1[0], 0);
		SET_ACTION_NODE_FOR_ACTOR(bParam0, uVar1[1]);
	}
	TASK_FACE_ACTOR(StackVal, bParam0, 1, 3212836864);
	TASK_PRIORITY_SET(bParam0, true);
	return;
}

void Function_241(var uParam0, int iParam1) //Position: 0xC572 / 50546
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

int Function_242(var uParam0, bool bParam1, int iParam2, int iParam3, var uParam4) //Position: 0xC70F / 50959
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
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bParam1, 15, 1);
	iVar5 = LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
	iVar6 = 0;
	bVar7 = false;
	while (bVar7 <= iVar5)
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar1));
		if ((((((((((StackVal == bVar8 && bVar8 == iParam3->f_44) && bVar8 == *iParam3) && IS_ACTOR_HUMAN(bVar8)) && !IS_ACTOR_HOGTIED(bVar8)) && !IS_ACTOR_RIDING_VEHICLE(bVar8)) && !IS_ACTOR_RIDING(bVar8)) && !IS_ACTOR_DRUNK(bVar8)) && !IS_OBJECT_IN_OBJECTSET(bVar8, bLocal_152)) && !DECOR_CHECK_EXIST(bVar8, "ignoreactorinduel")) && iVar6 > iParam2->f_60)
		{
			(*uParam4)[iVar6] = bVar8;
			Function_244(GET_PERS_CHAR_FROM_ACTOR(bVar8), 1);
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
	Function_243(uParam4, iVar6, 0, iParam2);
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

int Function_243(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xC8D6 / 51414
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
			Function_27(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_27(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_27(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_27(&bVar9, 64);
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

int Function_244(bool bParam0, bool bParam1) //Position: 0xCA19 / 51737
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

void Function_245(bool bParam0, int iParam1, int iParam2, var uParam3) //Position: 0xCABB / 51899
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

bool Function_246(int iParam0, int iParam1) //Position: 0xCB74 / 52084
{
	if (iParam1 <= 0)
	{
		return Function_247(iParam0, iParam1);
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

int Function_247(int iParam0, int iParam1) //Position: 0xF63D / 63037
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

void Function_248(bool bParam0) //Position: 0xFE5B / 65115
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

vector3 Function_249(bool bParam0) //Position: 0xFEA0 / 65184
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

void Function_250(bool bParam0) //Position: 0xFEC7 / 65223
{
	bool bVar0;
	void fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, true);
		if (Function_204(fVar1))
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

void Function_251(bool bParam0, bool bParam1) //Position: 0xFF67 / 65383
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

bool Function_252(bool bParam0, int iParam1, int iParam2) //Position: 0xFF87 / 65415
{
	int iVar0;
	
	iVar0 = Function_219(bParam0, iParam1, iParam2);
	return Function_30(iVar0);
}

void Function_253(int iParam0) //Position: 0xFF9D / 65437
{
	Function_254(&Global_28842, iParam0);
	return;
}

void Function_254(var uParam0, int iParam1) //Position: 0xFFAB / 65451
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_255(int iParam0) //Position: 0xFFCE / 65486
{
	return Function_256(&Global_28842, iParam0);
}

int Function_256(var uParam0, int iParam1) //Position: 0xFFDC / 65500
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_257(bool bParam0, bool bParam1, int iParam2) //Position: 0xFFF8 / 65528
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bParam1, 15, 1);
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

void Function_258(bool bParam0) //Position: 0x100DF / 65759
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

float Function_259(int iParam0) //Position: 0x10121 / 65825
{
	if (Function_234(iParam0))
	{
		if (Function_260(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_260(int iParam0) //Position: 0x101E9 / 66025
{
	return Function_49(*iParam0, 2);
}

int Function_261(int iParam0) //Position: 0x101F6 / 66038
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
		bLocal_151 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bLocal_161, 15, 1);
	}
	else
	{
		Function_263(bLocal_151);
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
			if (!bVar12 && !Function_262(Global_34207, bVar11))
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

bool Function_262(bool bParam0, int iParam1) //Position: 0x103B1 / 66481
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

void Function_263(bool bParam0) //Position: 0x1040B / 66571
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

void Function_264(int iParam0) //Position: 0x10443 / 66627
{
	if (!Function_234(iParam0))
	{
		Function_233(iParam0, 0.0f);
	}
	return;
}

void Function_265(int iParam0) //Position: 0x10458 / 66648
{
	struct<61> Var0;
	
	*(&Var0 + 64) = 6;
	*(&Var0 + 140) = 6;
	if (iParam0->f_64 <= 0)
	{
		if (Function_246(&Var0, iParam0->f_64))
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
						uLocal_167[iVar43] = Function_268(Global_30750[0], 1, 0, 1);
						Function_266(&bLocal_90, uLocal_167[iVar43], 3, 0);
						iVar43++;
					}
					iVar42++;
				}
			}
		}
	}
	return;
}

var Function_266(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x104DF / 66783
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
			Function_267(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_267(bParam0[iVar03], 8);
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

void Function_267(var uParam0, int iParam1) //Position: 0x105AF / 66991
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_268(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x105C0 / 67008
{
	return Function_269(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_269(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x105D4 / 67028
{
	return Function_270(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_270(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x105ED / 67053
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
		Function_276();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_275(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_274(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_274(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_273(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_275(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_273(bVar0))
				{
					Function_272();
				}
				Function_271(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_275(bVar1))
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

void Function_271(int iParam0) //Position: 0x108E0 / 67808
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

void Function_272() //Position: 0x10994 / 67988
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

bool Function_273(bool bParam0) //Position: 0x109CE / 68046
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

void Function_274(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x109FB / 68091
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

bool Function_275(bool bParam0) //Position: 0x10B4C / 68428
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_276() //Position: 0x10B63 / 68451
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_272();
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
	Function_272();
	return;
}

void Function_277(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10BAE / 68526
{
	Function_352(&bLocal_90, "duel_player", 5, 0);
	Function_352(&bLocal_90, "Dueling/duel_player", 8, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			Function_266(&bLocal_90, 59, 2, 0);
		}
		Function_352(&bLocal_90, "duel_hostage", 5, 0);
		Function_352(&bLocal_90, "Dueling/duel_hostage", 8, 0);
		bLocal_156 = "duel_hostage";
	}
	else
	{
		if ((Function_252(GET_ACTOR_ENUM(bParam3), 6, 4) && *uParam0 != 0) && !Global_3380)
		{
			if (Function_166(Function_219(GET_ACTOR_ENUM(bParam3), 6, 4)) > 10)
			{
				*uParam0 = 2;
			}
			else if (Function_166(Function_219(GET_ACTOR_ENUM(bParam3), 6, 4)) > 5)
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
						Function_352(&bLocal_90, "duel_easy_A_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Easy_A_npc", 8, 0);
						bLocal_156 = "duel_Easy_A_npc";
						break;
					
					case 0x00000001:
						Function_352(&bLocal_90, "duel_easy_B_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Easy_B_npc", 8, 0);
						bLocal_156 = "duel_Easy_B_npc";
						break;
				}
				break;
			
			case 0x00000001:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_352(&bLocal_90, "duel_mid_A_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Mid_A_npc", 8, 0);
						bLocal_156 = "duel_Mid_A_npc";
						break;
					
					case 0x00000001:
						Function_352(&bLocal_90, "duel_mid_B_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Mid_B_npc", 8, 0);
						bLocal_156 = "duel_Mid_B_npc";
						break;
					
					case 0x00000002:
						Function_352(&bLocal_90, "duel_mid_C_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Mid_C_npc", 8, 0);
						bLocal_156 = "duel_Mid_C_npc";
						break;
				}
				break;
			
			case 0x00000002:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_352(&bLocal_90, "duel_hard_A_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Hard_A_npc", 8, 0);
						bLocal_156 = "duel_Hard_A_npc";
						break;
					
					case 0x00000001:
						Function_352(&bLocal_90, "duel_hard_B_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Hard_B_npc", 8, 0);
						bLocal_156 = "duel_Hard_B_npc";
						break;
					
					case 0x00000002:
						Function_352(&bLocal_90, "duel_hard_C_npc", 5, 0);
						Function_352(&bLocal_90, "Dueling/duel_Hard_C_npc", 8, 0);
						bLocal_156 = "duel_Hard_C_npc";
						break;
				}
				break;
			}
	}
	uLocal_157 = bLocal_156;
	Function_352(&bLocal_90, "nminigames", 10, 0);
	Function_352(&bLocal_90, "crowd_duel", 5, 0);
	Function_352(&bLocal_90, "custom/crowd_duel_center", 8, 0);
	Function_352(&bLocal_90, "custom/crowd_duel_left", 8, 0);
	Function_352(&bLocal_90, "custom/crowd_duel_right", 8, 0);
}

void Function_278(int iParam0) //Position: 0x1103F / 69695
{
	if (!bLocal_164)
	{
		Function_136(iParam0);
	}
	if (!iLocal_165)
	{
		Function_279(iParam0);
	}
	return;
}

void Function_279(int iParam0) //Position: 0x1105B / 69723
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
	Function_280(iParam0);
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

int Function_280(int iParam0) //Position: 0x111A1 / 70049
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
					Function_292(GET_PERS_CHAR_FROM_ACTOR(bVar2));
				}
			}
			else if (iLocal_166 == 1)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				TASK_CLEAR(bVar2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, true);
				Function_283(bVar2, 1, 0, 2);
			}
			else if (iLocal_166 == 0)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				if ((bVar3 && 64) != 0)
				{
					Function_281(bVar2, bVar3, iParam0 + 8);
				}
				else
				{
					TASK_CLEAR(bVar2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, true);
					Function_283(bVar2, 1, 0, 2);
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

void Function_281(bool bParam0, var uParam1, int iParam2) //Position: 0x11356 / 70486
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	uParam1 = uParam1;
	TASK_CLEAR(bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 1, 0);
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_19(bParam0);
	vVar4 = { StackVal, StackVal, Function_19(bParam0) };
	Function_282(iParam2, &vVar4, &vVar1);
	TASK_GO_NEAR_COORD(false, &vVar1, 5.0f, true);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(bParam0, 2);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	return;
}

void Function_282(var uParam0, var uParam1, int iParam2) //Position: 0x113BB / 70587
{
	*iParam2 = { StackVal, StackVal, *uParam1 };
	*iParam2 = (*iParam2 + ((*uParam1 - *uParam0) * 3.0f));
	iParam2->f_8 = (StackVal + ((StackVal - StackVal) * 3.0f));
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	iParam2->f_8 = (StackVal + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	return;
}

int Function_283(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1140F / 70671
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
					Function_284(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_284(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_284(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x114EF / 70895
{
	char* cVar0[32];
	
	Function_291();
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
	if (Function_290(bParam0) == 1)
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
	Function_289(bParam0, 0);
	Function_288(bParam0, iParam1);
	Function_287(bParam0, uParam2);
	Function_286(bParam0, uParam3);
	if (Function_285(bParam0) != 5)
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

int Function_285(bool bParam0) //Position: 0x1173D / 71485
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_286(bool bParam0, bool bParam1) //Position: 0x11760 / 71520
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_287(bool bParam0, bool bParam1) //Position: 0x11783 / 71555
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_288(bool bParam0, bool bParam1) //Position: 0x117A7 / 71591
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_289(bool bParam0, bool bParam1) //Position: 0x117CD / 71629
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_290(bool bParam0) //Position: 0x117F0 / 71664
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_291() //Position: 0x1180E / 71694
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

int Function_292(bool bParam0) //Position: 0x11858 / 71768
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

void Function_293(bool bParam0) //Position: 0x118F2 / 71922
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_26316.f_56 |= 16384;
	if (IS_ACTOR_VALID(bParam0->f_204) && bParam0->f_136 == 358)
	{
		SET_ACTOR_INVULNERABILITY(bParam0->f_204, false);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, false);
	return;
}

bool Function_294(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x11933 / 71987
{
	var uVar0;
	var uVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(Global_34573, "RCM_Cutscene_HideActors"))
	{
		Function_307();
		Function_306();
		DECOR_SET_BOOL(Global_34573, "RCM_Cutscene_HideActors", true);
	}
	SET_RCM_ACTOR_CALL_OVER_SUPPRESS(2.0f);
	bVar8 = Function_295(uParam0, uParam1, &uVar0, &uVar7, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, uParam8, uParam9, uParam10, uParam11, uParam12, 1);
	if (bVar8)
	{
		DECOR_REMOVE(Global_34573, "RCM_Cutscene_HideActors");
		return 1;
	}
	return 0;
}

int Function_295(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x119DC / 72156
{
	if (!bParam15)
	{
		Function_303(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_302(iParam2) || iParam2->f_24 < 1))
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
				Function_232(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_301())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_300(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_232(iParam1 + 4);
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
					Function_300(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_259(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_259(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_298(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_300(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_232(iParam1 + 4);
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
						Function_2(1.0f);
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
						Function_296();
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
					Function_129(1);
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
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_302(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_296() //Position: 0x11FF0 / 73712
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_297();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_297() //Position: 0x12035 / 73781
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_298(bool bParam0, bool bParam1) //Position: 0x12047 / 73799
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_299(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_299(bool bParam0) //Position: 0x120C7 / 73927
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == bParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_300(bool bParam0) //Position: 0x120F6 / 73974
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
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
		bVar0++;
	}
	return 1;
}

bool Function_301() //Position: 0x121AE / 74158
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_302(int iParam0) //Position: 0x121E8 / 74216
{
	return iParam0->f_20;
}

void Function_303(var uParam0, int iParam1) //Position: 0x121F2 / 74226
{
	Function_304(uParam0, iParam1, 0);
	return;
}

void Function_304(var uParam0, bool bParam1, bool bParam2) //Position: 0x12200 / 74240
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
			Function_305(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_106(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
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
						Function_305(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_106(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

void Function_305(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1234C / 74572
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

int Function_306() //Position: 0x12375 / 74613
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

void Function_307() //Position: 0x123C0 / 74688
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), Global_63535, 15, 0);
	vVar3 = { StackVal, StackVal, Global_34574 };
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_22(), 2, vVar3, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	LOCATE_ACTORS_IN_VOLUME(bVar6, bVar2, 0, 1);
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(bVar2) - 1))
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar2));
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar8 = false;
			while (bVar8 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar8);
				if (GET_ACTOR_ENUM(bVar1) == GET_ACTOR_ENUM(bVar0))
				{
					if (!STRINGS_ARE_EQUAL(GET_LAYOUT_NAME(GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bVar0))), "cutscene layout"))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar0), bVar0);
					}
				}
				bVar8++;
			}
		}
		bVar7++;
	}
	DISBAND_OBJECTSET(bVar2);
	DESTROY_OBJECTSET(bVar2);
	DESTROY_VOLUME(bVar6);
	return;
}

int Function_308() //Position: 0x1249A / 74906
{
	return 1;
}

int Function_309() //Position: 0x124A1 / 74913
{
	if (HUD_IS_FADED())
	{
		Function_130();
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(bLocal_195, false);
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
		DECOR_SET_INT(bLocal_195, "iAdditionalMoney", 200);
		Function_340(bLocal_195);
		Function_251(bLocal_195, 0);
		Function_27(&Global_63541[4855] + 144, 512);
		GATEWAY_DISABLE(Global_63541[4855].f_192, 1);
		AI_STOP_IGNORING_ACTORS();
		DECOR_SET_BOOL(Global_34573, "unpauseduel", true);
	}
	iLocal_242 = 6;
	return 1;
}

int Function_310() //Position: 0x12523 / 75043
{
	Function_130();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(bLocal_195, false);
	SET_ACTOR_INVULNERABILITY(Global_34573, false);
	DECOR_SET_INT(bLocal_195, "iAdditionalMoney", 200);
	Function_340(bLocal_195);
	Function_251(bLocal_195, 0);
	Function_27(&Global_63541[4855] + 144, 512);
	GATEWAY_DISABLE(Global_63541[4855].f_192, 1);
	AI_STOP_IGNORING_ACTORS();
	DECOR_SET_BOOL(Global_34573, "unpauseduel", true);
	iLocal_265 = 6;
	iLocal_242 = 6;
	return 1;
}

int Function_311() //Position: 0x125A3 / 75171
{
	if (!iLocal_206)
	{
		Function_313(StackVal, StackVal, vLocal_207, bLocal_210);
		Function_312(Global_63541[4855].f_208, 0);
		iLocal_206 = 1;
	}
	Function_131(&iLocal_211, &iLocal_265, &iLocal_243, &iLocal_266, 48);
	return 1;
}

void Function_312(bool bParam0, bool bParam1) //Position: 0x125D9 / 75225
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (bVar1 >= 4294967295)
	{
		bVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			if (bParam1)
			{
				SHOW_PHYSINST(bVar3);
			}
			else
			{
				HIDE_PHYSINST(bVar3);
			}
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bVar1 + 1);
	}
	return;
}

void Function_313(vector3 vParam0) //Position: 0x12655 / 75349
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	vVar3 = { StackVal, StackVal, vParam0 };
	Function_315(0, 0x40400000);
	if (!Function_52(StackVal, StackVal, vParam0))
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
					vVar3 = (vParam0.x + 1,5f);
					vVar3.f_8 = (vParam0.z + 1,5f);
				}
			}
			else if (Function_314(bVar1, Global_34573) > 4.0f)
			{
				TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
				vVar3 = (vParam0.x + 1,5f);
				vVar3.f_8 = (vParam0.z + 1,5f);
			}
			TASK_CLEAR(bVar1);
			TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bVar1, true);
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
						vVar3 = (vParam0.x + 2,5f);
						vVar3.f_8 = (vParam0.z + 2,5f);
					}
				}
				else if (Function_314(bVar0, Global_34573) > 4.0f)
				{
					TELEPORT_ACTOR(bVar0, &vVar3, 1, 1, 1);
					vVar3 = (vParam0.x + 2,5f);
					vVar3.f_8 = (vParam0.z + 2,5f);
				}
				TASK_CLEAR(bVar0);
				TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bVar0, true);
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
			else if (Function_314(bVar2, Global_34573) > 8.0f)
			{
				TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
			}
		}
	}
}

float Function_314(bool bParam0, bool bParam1) //Position: 0x127DB / 75739
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

void Function_315(bool bParam0, float fParam1) //Position: 0x128CC / 75980
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_317();
	Function_316();
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

void Function_316() //Position: 0x129CA / 76234
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_317() //Position: 0x129FC / 76284
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

int Function_318() //Position: 0x12AF9 / 76537
{
	return 1;
}

int Function_319() //Position: 0x12B00 / 76544
{
	bLocal_210 = CREATE_VOLUME_IN_LAYOUT(bLocal_196, "tempcutscenevol", 2, *(&Global_63541[4855] + 100), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Function_322(0, 0, 1, 1, 0, 1, 1, bLocal_210, 1, 1, 1, 1);
	Function_320(StackVal, StackVal, bLocal_196, *(&Global_63541[4855] + 112), &bLocal_210, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_320(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x12B66 / 76646
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
				Function_321(bVar1, bParam0);
			}
		}
		if (!Function_52(StackVal, StackVal, vVar2))
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

void Function_321(bool bParam0, bool bParam1) //Position: 0x12DD4 / 77268
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

void Function_322(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12E49 / 77385
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
	Function_130();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_75();
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
			if (Function_61())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
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
				Function_324(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_22(), 2, Function_324(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_106(19, 1, 0, 0);
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
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_323()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_323()));
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
	if (Function_45(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_205(0x4000000);
	}
	if (Function_45(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_205(0x8000000);
	}
}

var Function_323() //Position: 0x130F2 / 78066
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

vector3 Function_324(bool bParam0) //Position: 0x13171 / 78193
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_325(bool bParam0) //Position: 0x13182 / 78210
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_26316.f_56 & 16384;
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	if (IS_ACTOR_VALID(bParam0->f_204))
	{
		SET_ACTOR_INVULNERABILITY(bParam0->f_204, true);
		MEMORY_CLEAR_EVENTS(bParam0->f_204, 1);
	}
	SET_ACTOR_INVULNERABILITY(Global_34573, true);
	return;
}

bool Function_326(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x131CC / 78284
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
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_329(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_328(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_328(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_327(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_327(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, true);
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

int Function_327(int iParam0, int iParam1) //Position: 0x133DE / 78814
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_52(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_52(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_328(bool bParam0, bool bParam1) //Position: 0x13449 / 78921
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_329(bool bParam0, bool bParam1) //Position: 0x13468 / 78952
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
	else if (!bParam1 || Function_328(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_330() //Position: 0x134C5 / 79045
{
	var uVar0;
	
	Function_331(4, 1);
	uVar0 = uVar0;
	bLocal_267 = CREATE_LAYOUT("KillerPimp_layout");
	return;
}

void Function_331(int iParam0, float fParam1) //Position: 0x134EE / 79086
{
	switch (fParam1)
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

void Function_332(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, var uParam13) //Position: 0x13537 / 79159
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

int Function_333(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x135CE / 79310
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
					uVar2 = Function_335(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &uVar1, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
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
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_334(iParam0));
							}
						}
						if (IS_ACTORSET_VALID(bParam4))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(bParam4))
							{
								bVar5 = GET_ACTOR_FROM_ACTORSET(bParam4, bVar4);
								if (IS_ACTOR_VALID(bVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(bVar5), bVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_335(StackVal, StackVal, GET_ASSET_NAME(iParam0->f_68, 9), &iVar3, *(iParam0 + 100), 0, fParam2, fParam3, 2, 1, 2, 2, 0, 1);
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

float Function_334(float fParam0) //Position: 0x1372F / 79663
{
	if (fParam0->f_168 != 4294967295)
	{
		if (Global_74542[fParam0->f_16810].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_334(&(Global_63541[fParam0->f_16855]));
	}
	return 0;
}

int Function_335(bool bParam0, int iParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x13764 / 79716
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_338(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_339()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
				if (!Function_52(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6,28f));
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
					Function_336();
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
	else if ((!Function_338(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_339()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*iParam1 = 0;
	}
	else if (!Function_338(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_336() //Position: 0x139AA / 80298
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &vVar7, &Var10);
			Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_337(char* cParam0, vector3 vParam1) //Position: 0x139FE / 80382
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

bool Function_338(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x13B26 / 80678
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_19(bParam0);
		if (VDIST(Function_19(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_339() //Position: 0x13BB0 / 80816
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_340(bool bParam0) //Position: 0x13BBF / 80831
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

bool Function_341(int iParam0) //Position: 0x13BF3 / 80883
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_342(bool bParam0) //Position: 0x13C08 / 80904
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_345();
	iVar1 = 0;
	if (!Function_6(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_267(bParam0[iVar03], 8);
		}
		else if (Function_344())
		{
			iVar1 = 1;
			Function_267(bParam0[iVar03], 8);
		}
		Function_267(bParam0[iVar03], 16);
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
				Function_267(bParam0[iVar03], 1);
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
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_267(bParam0[iVar03], 2);
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
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_267(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_267(bParam0[iVar03], 2);
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
	Function_343();
	return 1;
}

void Function_343() //Position: 0x13F83 / 81795
{
	if (!Function_45(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_344() //Position: 0x13FC3 / 81859
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

void Function_345() //Position: 0x13FEE / 81902
{
	if (!Function_45(128))
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

void Function_346(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x14033 / 81971
{
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (((!bParam2 || Function_47(iParam1)) || Function_341(iParam1)) || iParam1 != iParam0->f_20)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	else if (bParam2)
	{
		if (Function_49(Global_63541[iParam155].f_144, 64) && iParam1 == iParam0->f_20)
		{
			Function_23(iParam0, iParam1);
		}
		if (!(Function_47(iParam1) || Function_341(iParam1)))
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
		if (!Function_49(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_348(iParam0 + 144, 32);
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
		Function_347(iParam0);
	}
	Function_348(iParam0 + 144, 256);
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

void Function_347(int iParam0) //Position: 0x141DD / 82397
{
	if (Function_49(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_348(iParam0 + 144, 1);
	}
	if (Function_49(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_348(iParam0 + 144, 8);
	}
	if (Function_49(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_348(iParam0 + 144, 2);
	}
	if (Function_49(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_348(iParam0 + 144, 4);
	}
	return;
}

void Function_348(int iParam0, int iParam1) //Position: 0x1425F / 82527
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_349(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x14272 / 82546
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_36(iParam0 + 172, 4))
		{
			if (!Function_35(iParam1))
			{
				return 0;
			}
		}
		if (Function_36(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_47(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_36(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_53(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_36(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_351(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_350(iParam0);
	}
	return 1;
}

int Function_350(int iParam0) //Position: 0x14326 / 82726
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_36(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_36(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_36(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_36(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_36(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_36(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_351(int iParam0, bool bParam1) //Position: 0x143D2 / 82898
{
	if (!Function_30(iParam0))
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

var Function_352(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x14408 / 82952
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_353(bParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_267(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_353(var uParam0, int iParam1, int iParam2) //Position: 0x14440 / 83008
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_267(uParam0[iVar03], 4);
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

