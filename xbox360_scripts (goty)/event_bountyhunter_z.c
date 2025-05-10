//Decompiled with MagicRDR v1.0
//Function Count : 437
//Statics Count : 590
//Natives Count : 657
//Parameters Count : 51

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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	bool bLocal_24[6] = { false, false, false, false, false, false };
	bool bLocal_31[12] = { false, false, false, false, false, false, false, false, false, false, false, false };
	bool bLocal_44 = false;
	int iLocal_45[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_65 = true;
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
	bool bLocal_156 = true;
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
	int iLocal_175 = 0;
	bool bLocal_176 = false;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	struct<8> Local_179 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	int iLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int iLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	bool bLocal_216 = false;
	bool bLocal_217 = false;
	bool bLocal_218 = false;
	bool bLocal_219 = false;
	bool bLocal_220[6] = { false, false, false, false, false, false };
	bool bLocal_227 = false;
	bool bLocal_228 = false;
	bool bLocal_229 = false;
	bool bLocal_230 = false;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = false;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	bool bLocal_261 = false;
	bool bLocal_262 = false;
	bool bLocal_263 = false;
	bool bLocal_264 = false;
	bool bLocal_265 = false;
	bool bLocal_266 = false;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	bool bLocal_274 = false;
	bool bLocal_275 = false;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	bool bLocal_278 = false;
	struct<625> Local_279 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var7;
	int iVar12;
	var uVar47;
	
	iLocal_15 = 0;
	iLocal_16 = 0;
	iLocal_231 = 4294967295;
	iLocal_232 = 0;
	iLocal_233 = 0;
	iLocal_234 = 0;
	iLocal_235 = 0;
	iLocal_236 = 0;
	iLocal_237 = 0;
	iLocal_238 = 0;
	iLocal_239 = 0;
	iLocal_240 = 0;
	iLocal_241 = 0;
	iLocal_242 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iLocal_248 = 1;
	iLocal_249 = 0;
	iLocal_250 = 1;
	iLocal_251 = 0;
	iLocal_252 = 0;
	iLocal_253 = 0;
	iLocal_254 = 0;
	iLocal_255 = 0;
	bLocal_256 = false;
	iLocal_257 = 0;
	iLocal_258 = 0;
	iLocal_259 = 0;
	iLocal_260 = 0;
	bLocal_274 = "";
	iLocal_277 = 4294967295;
	iLocal_532 = 0;
	iLocal_537 = 0;
	*(&iVar12 + 20) = 1;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var1);
	uVar47 = Function_436();
	ADD_TIME(&uVar47, 0, 0, 10, 0);
	ScriptParam_0.f_52 = 100.0f;
	iLocal_23 = 0;
	iLocal_215 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_215, 2, 0, false, 0);
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bountyHunterLay") };
	bLocal_278 = CREATE_LAYOUT(&Local_179);
	Local_279.f_492 = 4294967295;
	Function_433();
	if (Function_432() == 0)
	{
		if (Function_431(Global_30679[1]))
		{
			if (Function_429(&Global_26303, Global_30679[1]))
			{
			}
			else
			{
				iLocal_175 = 0;
				iLocal_23 = 5;
			}
		}
		else if (Function_431(Global_30707[1]))
		{
			if (Function_429(&Global_26303, Global_30707[1]))
			{
			}
			else
			{
				iLocal_175 = 0;
				iLocal_23 = 5;
			}
		}
		else
		{
			iLocal_175 = 0;
			iLocal_23 = 5;
		}
	}
	iLocal_526 = (*&Global_26401 + 36[0181][75])[3];
	iLocal_527 = (*&Global_26401 + 36[0181][225])[3];
	iLocal_528 = (*&Global_26401 + 36[0181][125])[3];
	iLocal_529 = (*&Global_26401 + 36[1181][75])[3];
	iLocal_530 = (*&Global_26401 + 36[1181][225])[3];
	iLocal_531 = (*&Global_26401 + 36[1181][125])[3];
	if (StackVal || !Function_428(Global_26303.f_24) != 1)
	{
		LOG_ERROR("Bad Bounty Hunter Region Calculated?");
	}
	ScriptParam_0.f_44 = Global_26303.f_24;
	Function_422(&Local_279, Function_423(Global_26303.f_28));
	Function_421(&Local_279, 0);
	Function_420(&Local_279, 1);
	PRINTSTRING("Bounty Hunter Target Volume = ");
	PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)));
	PRINTNL();
	PRINTSTRING("Deed ID = Region: ");
	PRINTINT(Function_419(Local_279.f_624));
	Global_26303.f_24 = Function_415(&Global_26303);
	if (Function_428(Global_26303.f_24) && Global_26303.f_24 < 0)
	{
		if (Function_428(Global_26303.f_24))
		{
			bLocal_275 = Global_26303.f_24;
			bLocal_217 = StackVal;
			Function_414();
			Function_413();
			PRINTSTRING("Bounty Hunter Target Volume = ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_217)));
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Invalid. No starting region found for bountyhunter");
		}
		Function_412(1);
	}
	else
	{
		iLocal_23 = 5;
	}
	iLocal_277 = Global_26303.f_28;
	Function_411();
	while (!IS_EXITFLAG_SET())
	{
		if ((StackVal && !Function_409(!Function_410(0, 0, 1, 1), 4096)) && !iLocal_244)
		{
			Function_408(&Global_26303 + 8, 4096);
			Global_3412 = 0;
			Function_387(1);
			Function_386(0, 4294967295);
		}
		iLocal_175 = 1000;
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			iLocal_23 = 5;
		}
		else if (!Function_428(bLocal_275))
		{
			iLocal_23 = 5;
		}
		else if (!Function_428(iLocal_277) && iLocal_178 <= 7)
		{
			iLocal_23 = 5;
		}
		else if (Global_3380 != 1 && 0 != ScriptParam_0.f_36)
		{
			Function_345(13);
		}
		else if (Global_3403 && Function_344())
		{
			iLocal_240 = 1;
			Function_345(10);
		}
		else if (Function_343() != 1 && iLocal_238 != 0)
		{
			iLocal_238 = 1;
			Function_345(10);
		}
		else if (iLocal_178 >= 5 && !Function_342("npressDemo"))
		{
			if (IS_EARLIER_THAN(iLocal_215, GET_TIME_OF_DAY()))
			{
				iLocal_23 = 5;
			}
		}
		if (Global_3382 && iLocal_178 > 8)
		{
			Function_326();
		}
		if (HAS_ITEM(Function_325(72), Global_34573))
		{
			if (iLocal_250 == 1)
			{
				if (UI_ISACTIVE("WantedPoster"))
				{
					Function_324();
					PAUSE_GAME(GET_THIS_SCRIPT_ID());
					iLocal_250 = 0;
				}
			}
			else if (!UI_ISACTIVE("WantedPoster"))
			{
				Function_323();
				UNPAUSE_GAME();
				iLocal_250 = 1;
			}
		}
		else
		{
			UNPAUSE_GAME();
		}
		Function_318();
		Function_311(&Local_279, 0, 0);
		switch (iLocal_23)
		{
			case 0x00000000:
				if (Function_310() || ScriptParam_0.f_36 != 1)
				{
					if (Function_309() == 1)
					{
						strcpy(&Local_179, "bountyhunter", 32);
						Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Local_179) };
						Function_345(1);
						if (!HAS_ITEM(Function_325(72), Global_34573))
						{
							Function_308(72, 1, 0);
						}
						CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
						if (Function_344())
						{
							Global_26303.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_joua", 0, 0, 0);
						}
						else
						{
							Global_26303.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou1", 0, 0, 0);
						}
						Function_307(&iLocal_208);
						Function_307(&iLocal_205);
						Function_307(&iLocal_202);
						iLocal_23 = 3;
						iLocal_175 = 0;
					}
				}
				else
				{
					iLocal_175 = 1000;
				}
				break;
			
			case 0x00000003:
				if (Global_3385 == 0)
				{
					Function_305();
					switch (iLocal_178)
					{
						case 0x00000001:
							GET_VOLUME_CENTER(bLocal_217, &Var1);
							Function_304(StackVal, StackVal, StackVal, StackVal, Var1, Global_34574, &Var1);
							if ((VMAG(Var1) > 450.0f && Function_303(64)) && Function_303(8))
							{
								if (!Function_409(StackVal, 8))
								{
									Function_296();
									Function_408(&Global_26303 + 8, 8);
								}
								iLocal_178 = 2;
								iLocal_175 = 0;
							}
							if (Function_295(&Local_279, 0, 0) != 0 && Function_294(&iLocal_193, 10.0f))
							{
								if (IS_BLIP_VALID(bLocal_265))
								{
									SET_BLIP_BLINK(bLocal_265, 0, 0, 5f);
								}
							}
							uLocal_214 = Global_26303.f_12;
							if (!IS_BLIP_VALID(bLocal_265))
							{
								Function_292(1);
							}
							break;
						
						case 0x00000002:
							if (Function_291())
							{
								if (Global_30621[Global_29004] != Function_289(bLocal_275) && (Function_287(&(Global_29008[Function_288(bLocal_275)]), 32) || Function_286()))
								{
									iLocal_178 = 3;
									iLocal_175 = 0;
								}
							}
							break;
						
						case 0x00000003:
							if (bLocal_275 == Global_30693[1] || Function_285(24))
							{
								if (iLocal_234 == 0)
								{
									GET_VOLUME_CENTER(bLocal_217, &Var1);
									Function_284(bLocal_217);
									Var7 = { StackVal, StackVal, Function_284(bLocal_217) };
									Function_304(StackVal, StackVal, StackVal, StackVal, Global_34574, Var7, &Var1);
									if (StackVal && !Function_409(VMAG(Var1) > 250.0f, 4))
									{
										Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("restrictVol") };
										bVar10 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Local_179, 3, Var7, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, ScriptParam_0.f_52, ScriptParam_0.f_52);
										DECOR_SET_INT(bVar10, "script", GET_THIS_SCRIPT_ID());
										Function_280(&bVar10, ScriptParam_0.f_32);
										Function_408(&Global_26303 + 8, 4);
										ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(bLocal_217, 0);
									}
									Function_304(StackVal, StackVal, StackVal, StackVal, Global_34574, Var7, &Var1);
									if (VMAG(Var1) > 200.0f && !Function_279(&Local_279))
									{
										Function_278(&Local_279, 1);
										Function_277(&Local_279, "pm_bh_nrng", 1);
										Function_269(StackVal, StackVal, &Local_279, 0, 4294967295, Var1, 1, 1, 3);
									}
									iVar11 = 4294967294;
									if (Function_428(iLocal_276))
									{
										if (Function_287(&(Global_29008[iLocal_276]), 32))
										{
											iVar11 = iLocal_276;
										}
									}
									if (!Function_428(iVar11))
									{
										if (Function_428(Global_29005))
										{
											if (Function_287(&(Global_29008[Global_29005]), 32))
											{
												iVar11 = Global_29005;
											}
										}
									}
									Function_304(StackVal, StackVal, StackVal, StackVal, Global_34574, Var7, &Var1);
									if (((VMAG(Var1) > 200.0f || IS_ACTOR_IN_VOLUME(Global_34573, bLocal_217)) && Function_428(iVar11)) && !Global_3391)
									{
										Function_268(bLocal_275);
										Var1 = { StackVal, StackVal, Function_268(bLocal_275) };
										if (!Function_267(StackVal, StackVal, Var1))
										{
											if (STREAMING_ARE_BOUNDS_LOADED(Var1, 10.0f))
											{
												if (Function_249())
												{
													iLocal_234 = 1;
												}
												else
												{
													iLocal_231 = 4;
													iLocal_23 = 5;
													iLocal_175 = 0;
													break;
												}
											}
										}
										else
										{
											LOG_ERROR("PoiObject at zero? Tell Ben.");
										}
									}
								}
								else
								{
									if (IS_ACTOR_VALID(bLocal_44))
									{
										GET_POSITION(bLocal_44, &Var7);
										GET_POSITION(Global_34573, &Var1);
										if (ACTORS_IN_RANGE(Global_34573, bLocal_44, 100.0f))
										{
											if (ABS(FLOOR((StackVal - StackVal))) <= 15)
											{
												Function_345(4);
												iLocal_175 = 0;
											}
										}
									}
									if (iLocal_234 == 1)
									{
										if (!Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
										{
											iLocal_23 = 5;
											iLocal_175 = 0;
											break;
										}
									}
								}
							}
							break;
						
						case 0x00000004:
							if (Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0) == 0)
							{
								iLocal_23 = 5;
								iLocal_175 = 0;
							}
							break;
						
						case 0x00000005:
						case 0x00000007:
							Function_307(&iLocal_193);
							if (!Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
							{
								if (iLocal_235 == 1)
								{
									iLocal_23 = 5;
									iLocal_175 = 0;
								}
								break;
							}
							break;
					}
				}
				else
				{
					Function_292(0);
					iLocal_175 = 5000;
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					strcpy(&Local_179, "bh print try ", 32);
					stradd(&Local_179, INT_TO_STRING(bLocal_538), 32);
					bLocal_538++;
					Function_185(&Local_179, 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				if (iLocal_243 == 0)
				{
					if (IS_OBJECT_VALID(bLocal_261))
					{
						Function_184(bLocal_261);
					}
					iLocal_243 = 1;
					if (!IS_ACTOR_ALIVE(Global_34573) || iLocal_231 == 2)
					{
						iLocal_248 = 0;
					}
					if (iLocal_248 == 0)
					{
						Function_307(&iLocal_196);
						Function_109();
						iLocal_247 = 1;
					}
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				}
				if (iLocal_247 != 0 && iLocal_243 != 1)
				{
					if (iLocal_246 == 0)
					{
						if (iLocal_248 == 1)
						{
							if (!IS_ACTOR_ALIVE(bLocal_24[0]))
							{
								Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhHndShake") };
								if (Function_108(iLocal_45[0]))
								{
									Function_107();
									bLocal_24[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_278, Vector(vLocal_439, iLocal_45[0], &Local_179) + Vector(-5.0f, -5.0f, -1.0f), Function_107());
									Function_106(&Local_279, bLocal_24[0], 1);
								}
							}
							iVar0 = 0;
							while (iVar0 < 5)
							{
								if (IS_ACTOR_VALID(bLocal_24[iVar0]))
								{
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[iVar0]);
									if (IS_MOVER_FROZEN(bLocal_24[iVar0]))
									{
										SET_MOVER_FROZEN(bLocal_24[iVar0], 0);
									}
									AI_GOAL_LOOK_CLEAR(bLocal_24[iVar0]);
								}
								iVar0++;
							}
							if (iLocal_277 == Global_30679[1])
							{
								Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhPosObj") };
								bLocal_262 = CREATE_POINT_IN_LAYOUT(bLocal_278, &Local_179, Global_34574, 0.0f, 0.0f, 0.0f);
								Function_104(&Local_279, Global_34573, bLocal_262, bLocal_24[0]);
								Function_103(&Local_279, 1);
							}
							else if (iLocal_277 == Global_30707[1])
							{
								Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhPosObj") };
								bLocal_262 = CREATE_POINT_IN_LAYOUT(bLocal_278, &Local_179, Global_34574, 0.0f, 0.0f, 0.0f);
								Function_104(&Local_279, Global_34573, bLocal_262, bLocal_24[0]);
								Function_103(&Local_279, 1);
							}
							else
							{
								Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhPosObj") };
								bLocal_262 = CREATE_POINT_IN_LAYOUT(bLocal_278, &Local_179, Global_34574, 0.0f, 0.0f, 0.0f);
								Function_104(&Local_279, Global_34573, bLocal_262, bLocal_24[0]);
								Function_103(&Local_279, 1);
							}
							Function_84(&Local_279, bLocal_278, 1);
							iLocal_246 = 1;
						}
						else
						{
							iLocal_247 = 1;
							Function_307(&iLocal_196);
						}
					}
					if (iLocal_246 == 1)
					{
						if (Function_64(&Local_279) == 5)
						{
							Function_40(&Local_279);
							Function_109();
							Function_307(&iLocal_196);
							if (IS_ACTOR_VALID(bLocal_44))
							{
								DESTROY_ACTOR(bLocal_44);
							}
							iLocal_247 = 1;
						}
					}
				}
				else
				{
					if (Function_294(&iLocal_196, 5.0f))
					{
						if (IS_ACTOR_ALIVE(bLocal_44))
						{
							Function_30();
						}
						Function_28(0);
						Function_27(12);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						RELEASE_LAYOUT_REF(bLocal_278);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
					else
					{
						if (GET_TASK_STATUS(bLocal_24[0], 19) == 4)
						{
							TASK_CLEAR(bLocal_24[0]);
							TASK_WANDER(bLocal_24[0], 3212836864);
						}
						if (IS_ACTOR_ALIVE(bLocal_44))
						{
							if (!UNK_0x7A207FFE(bLocal_44))
							{
								Function_26();
							}
						}
					}
					Function_311(&Local_279, 0, 0);
				}
				if (StackVal && !Function_409(iLocal_247 != 1, 64))
				{
					Function_23();
					Function_408(&Global_26303 + 8, 64);
				}
				iLocal_175 = 0;
				break;
		}
		WAIT(iLocal_175);
	}
	if (iLocal_231 == 2)
	{
		if (Global_26303.f_40 != 10 || Global_26303.f_40 != 16)
		{
			PRINT_HELP_B("pm_bh_completed_all", 7.5f, 1, 0, 0, 1, 0, 0);
		}
	}
	Function_1();
	DESTROY_ITERATOR(StackVal);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xC87 / 3207
{
	bool bVar0;
	bool bVar1;
	
	Function_23();
	REMOVE_OBJECT_ATTACHMENT(uLocal_449);
	if (IS_OBJECT_VALID(bLocal_227))
	{
		DESTROY_VOLUME(bLocal_227);
	}
	if (IS_OBJECT_VALID(bLocal_219))
	{
		DESTROY_VOLUME(bLocal_219);
	}
	REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(bLocal_217, 0);
	if (IS_VOLUME_VALID(bLocal_216))
	{
		DESTROY_VOLUME(bLocal_216);
	}
	if (IS_OBJECTSET_VALID(bLocal_436))
	{
		DESTROY_OBJECTSET(bLocal_436);
	}
	if (IS_OBJECTSET_VALID(bLocal_437))
	{
		DESTROY_OBJECTSET(bLocal_437);
	}
	if (IS_OBJECTSET_VALID(bLocal_438))
	{
		DESTROY_OBJECTSET(bLocal_438);
	}
	Function_292(0);
	bVar0 = false;
	while (bVar0 < (bLocal_176 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_31[bVar0]))
		{
			DEREFERENCE_ACTOR(bLocal_31[bVar0]);
		}
		if (IS_ACTOR_ALIVE(bLocal_31[bVar0]) && IS_ACTOR_VALID(bLocal_31[bVar0]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_31[bVar0])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_31[bVar0]));
			}
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_31[bVar0]), "bountyhunter_blip");
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_31[bVar0]), "bhnt_state");
			if (StackVal && Function_409(bVar0 != 0, 256))
			{
				DESTROY_ACTOR(bLocal_44);
			}
			else if (IS_ACTOR_ALIVE(Global_34573))
			{
				RELEASE_ACTOR_AS_AMBIENT(bLocal_31[bVar0]);
			}
			else
			{
				RELEASE_ACTOR(bLocal_31[bVar0]);
			}
		}
		bVar0++;
	}
	if (IS_ACTORSET_VALID(bLocal_450))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				DEREFERENCE_ACTOR(bVar1);
				RELEASE_ACTOR(bVar1);
			}
			bVar0++;
		}
		DESTROY_ACTORSET(bLocal_450);
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (IS_ACTOR_VALID(bLocal_24[bVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_24[bVar0], 0);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_24[bVar0], 1);
			RELEASE_ACTOR(bLocal_24[bVar0]);
			DEREFERENCE_ACTOR(bLocal_24[bVar0]);
		}
		bVar0++;
	}
	if (Function_22())
	{
		Function_14();
	}
	Function_12(1);
	if (IS_OBJECT_VALID(bLocal_261))
	{
		Function_184(bLocal_261);
	}
	Function_9();
	Function_109();
	if (IS_LAYOUTREF_VALID(bLocal_278))
	{
		DESTROY_LAYOUT(bLocal_278);
	}
	Function_4();
	if (iLocal_232 == 0)
	{
		Function_412(0);
		Function_2(1);
		iLocal_232 = 1;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xE8F / 3727
{
	Function_412(0);
	Function_433();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	if (iParam0 == 1)
	{
		Function_3(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0xED1 / 3793
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_4() //Position: 0xEE4 / 3812
{
	Function_5(&bLocal_65);
	Function_5(&bLocal_156);
	return;
}

void Function_5(bool bParam0) //Position: 0xEF4 / 3828
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_6(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0xF1A / 3866
{
	if (Function_8(uParam0[iParam13], 4))
	{
		if (Function_8(uParam0[iParam13], 1))
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
			Function_7(uParam0[iParam13], 1);
			Function_7(uParam0[iParam13], 2);
			Function_7(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x1048 / 4168
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(int iParam0, int iParam1) //Position: 0x1062 / 4194
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9() //Position: 0x107F / 4223
{
	if (SQUAD_IS_VALID(bLocal_533))
	{
		Function_11(bLocal_533);
		Function_10(bLocal_533);
		DESTROY_OBJECT(bLocal_533);
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x10A3 / 4259
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

void Function_11(bool bParam0) //Position: 0x10D5 / 4309
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

void Function_12(int iParam0) //Position: 0x1119 / 4377
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_13())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_13() //Position: 0x1155 / 4437
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_14() //Position: 0x117A / 4474
{
	Function_16();
	Function_15(10, 3);
	return;
}

void Function_15(int iParam0, int iParam1) //Position: 0x1189 / 4489
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_16() //Position: 0x12C0 / 4800
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_21())
	{
		Function_20(10, 3);
	}
	else
	{
		Function_18();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_17(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_17());
	UI_POP("nDebugMenu");
	return;
}

var Function_17() //Position: 0x130B / 4875
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_18() //Position: 0x1320 / 4896
{
	Function_19(25, 2);
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0x132C / 4908
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_20(int iParam0, int iParam1) //Position: 0x152A / 5418
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_21() //Position: 0x1661 / 5729
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_409(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_22() //Position: 0x16C8 / 5832
{
	return Global_34580;
}

void Function_23() //Position: 0x16D1 / 5841
{
	int iVar0;
	bool bVar1;
	
	if (!Function_409(StackVal, 64))
	{
		Function_408(&Global_26303 + 8, 64);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		if (SQUAD_IS_VALID(bLocal_228))
		{
			SQUAD_GOALS_CLEAR(bLocal_228);
			DESTROY_OBJECT(bLocal_228);
		}
		if (SQUAD_IS_VALID(bLocal_230))
		{
			SQUAD_GOALS_CLEAR(bLocal_230);
			DESTROY_OBJECT(bLocal_230);
		}
		if (SQUAD_IS_VALID(bLocal_229))
		{
			SQUAD_GOALS_CLEAR(bLocal_229);
			DESTROY_OBJECT(bLocal_229);
		}
		if (iLocal_233 == 1)
		{
			if (IS_ACTOR_VALID(bLocal_44))
			{
				DESTROY_ACTOR(bLocal_44);
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(bLocal_24[iVar0]))
			{
				Function_25(Global_34573, bLocal_24[iVar0], 1, 1);
				MEMORY_CLEAR_EVENTS(bLocal_24[iVar0], 1);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_24[iVar0], 1);
				DEREFERENCE_ACTOR(bLocal_24[iVar0]);
				MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bLocal_24[iVar0]);
				GIVE_WEAPON_TO_ACTOR(bLocal_24[iVar0], 40, 0, 1, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[iVar0]);
				Function_24(bLocal_24[iVar0]);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_24[iVar0], 1);
				SET_ACTOR_FACTION(bLocal_24[iVar0], 7);
				TASK_CLEAR(bLocal_24[iVar0]);
				TASK_PRIORITY_SET(bLocal_24[iVar0], 3);
				bVar1 = TASK_SEQUENCE_OPEN();
				if (iLocal_231 == 2)
				{
					TASK_DRAW_HOLSTER_WEAPON(false, 0);
				}
				TASK_WANDER(false, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_24[iVar0], bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_24[iVar0], 1);
				RELEASE_ACTOR(bLocal_24[iVar0]);
				if (iLocal_231 == 2)
				{
					MEMORY_CLEAR_ALL(bLocal_24[iVar0]);
					CLEAR_LAST_HIT(bLocal_24[iVar0]);
					ACTOR_HOLSTER_WEAPON(bLocal_24[iVar0], 0);
					AI_IGNORE_ACTOR(bLocal_24[iVar0]);
				}
			}
			if (IS_VOLUME_VALID(bLocal_220[iVar0]))
			{
				DESTROY_VOLUME(bLocal_220[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

void Function_24(bool bParam0) //Position: 0x1859 / 6233
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_REMOVE(bParam0, "nocrime");
	}
	return;
}

int Function_25(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x188B / 6283
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, iParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, iParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_26() //Position: 0x18DE / 6366
{
	SET_ACTOR_HEALTH(bLocal_44, GET_ACTOR_MAX_HEALTH(bLocal_44));
	AI_IGNORE_ACTOR(bLocal_44);
	_SET_ACTOR_HEALTH_3(bLocal_44, 5.0f);
	SET_ACTOR_KO_POINTS(bLocal_44, 0.0f);
	return;
}

void Function_27(bool bParam0) //Position: 0x1900 / 6400
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_28(int iParam0) //Position: 0x191B / 6427
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_29(105)), 0);
	return;
}

int Function_29(bool bParam0) //Position: 0x193C / 6460
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_30() //Position: 0x1952 / 6482
{
	SET_CRIPPLE_FLAG(bLocal_44, 0);
	SET_ACTOR_HEALTH(bLocal_44, GET_ACTOR_MAX_HEALTH(bLocal_44));
	SET_ACTOR_KO_POINTS(bLocal_44, GET_ACTOR_MAX_KO_POINTS(bLocal_44));
	SET_ACTOR_UNKILLABLE(bLocal_44, 0);
	Function_33(bLocal_44, 1254, 4294967295, 4294967295, 0, 0, 0, 1);
	TASK_MELEE_ATTACK(bLocal_44, Global_34573, -1.0f);
	SET_ACTOR_FACTION(bLocal_44, 32);
	AI_STOP_IGNORING_ACTOR(bLocal_44);
	MEMORY_EVERYBODY_FORGET_ABOUT(bLocal_44);
	MEMORY_CLEAR_ALL(bLocal_44);
	MEMORY_CONSIDER_AS_ENEMY(bLocal_44, Global_34573);
	ADD_ACTORSET_MEMBER(bLocal_450, bLocal_44);
	SET_ACTOR_OVERHEALTH_MODE(bLocal_44, false);
	if (GET_ACTOR_INCAPACITATED(bLocal_44))
	{
		ACTOR_REPAIR_INCAPACITATION(bLocal_44);
	}
	Function_31(bLocal_44, 0, 0);
	return;
}

void Function_31(bool bParam0, int iParam1, bool bParam2) //Position: 0x19D1 / 6609
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_32(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_107();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_32(), vVar3, Function_107());
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
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_32(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_107();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_32(), vVar0, Function_107());
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

var Function_32() //Position: 0x1B81 / 7041
{
	int iVar0;
	
	return iVar0;
}

void Function_33(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x1B89 / 7049
{
	var uVar0;
	
	if (Function_39(bParam0) && !Function_38(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (iParam2 == 4294967294 && iParam3 == 4294967294)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, iParam2, iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_36(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_35(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_34(bParam0, iParam4, iParam5);
}

void Function_34(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1DEC / 7660
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
			Function_31(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_35(bool bParam0) //Position: 0x1E9E / 7838
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

void Function_36(bool bParam0) //Position: 0x1ED2 / 7890
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_37(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_37(var uParam0, bool bParam1) //Position: 0x2236 / 8758
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_38(bool bParam0, int iParam1) //Position: 0x2258 / 8792
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_39(bool bParam0) //Position: 0x229A / 8858
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_40(int iParam0) //Position: 0x22BA / 8890
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_540);
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar2)) && GET_ACTOR_FROM_OBJECT(bVar2) == Global_34573)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(bVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_409(iParam0->f_584, 512) && Function_409(iParam0->f_584, 256))
	{
		if (IS_OBJECT_VALID(iParam0->f_500))
		{
			DESTROY_OBJECT(iParam0->f_500);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_496));
		}
		if (IS_OBJECT_VALID(iParam0->f_504))
		{
			DESTROY_VOLUME(iParam0->f_504);
		}
		while (GET_OBJECTSET_SIZE(iParam0->f_540) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			if (IS_OBJECT_VALID(bVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0->f_540);
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar0)))
					{
						Function_63(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(bVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(iParam0->f_540);
		}
		if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
		{
			Function_63(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
		}
		*(iParam0 + 544) = { 0.0f, 0.0f, 0.0f };
		iParam0->f_556 = 0;
		Function_44(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_43(1.0f);
		Function_42(iParam0, 5);
		if (Function_409(iParam0->f_584, 32768))
		{
			Function_41(256);
		}
		Function_408(iParam0 + 584, 512);
		Function_3(iParam0 + 584, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_41(int iParam0) //Position: 0x2475 / 9333
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x2492 / 9362
{
	iParam0->f_532 = iParam1;
	return;
}

void Function_43(bool bParam0) //Position: 0x249F / 9375
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

void Function_44(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x24BC / 9404
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
		bVar0 = Function_17();
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
			if (Function_62())
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
		Function_48(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_47();
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
	Function_45(uParam9);
}

void Function_45(int iParam0) //Position: 0x25AC / 9644
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
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
		Function_46();
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

void Function_46() //Position: 0x265B / 9819
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

void Function_47() //Position: 0x26CD / 9933
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_48(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x26E2 / 9954
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
	Function_61(iParam0, TO_FLOAT(bParam1), 1);
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_49(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2902 / 10498
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_59(390))), 32);
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
					bVar19 = (Function_58(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_58(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_53(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_50(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_50(int iParam0) //Position: 0x2F2F / 12079
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2F40 / 12096
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_52(char* cParam0, bool bParam1) //Position: 0x3035 / 12341
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_53(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x304E / 12366
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_55(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_54(Function_55(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_54(int iParam0, int iParam1) //Position: 0x30B3 / 12467
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_55(int iParam0, bool bParam1) //Position: 0x30C5 / 12485
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x30D7 / 12503
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x3207 / 12807
{
	return Global_35278[iParam020].f_48;
}

float Function_58(int iParam0) //Position: 0x3216 / 12822
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_59(int iParam0) //Position: 0x324F / 12879
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_60(int iParam0) //Position: 0x328C / 12940
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

int Function_61(int iParam0, bool bParam1, bool bParam2) //Position: 0x3426 / 13350
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

bool Function_62() //Position: 0x366A / 13930
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3673 / 13939
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

int Function_64(int iParam0) //Position: 0x370D / 14093
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	struct<5> Var9;
	bool bVar15;
	bool bVar16;
	char* cVar17[64];
	bool bVar33;
	
	if (iLocal_277 == Global_30679[1])
	{
		bVar16 = true;
	}
	else
	{
		bVar16 = false;
	}
	switch (iParam0->f_532)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_267(StackVal, StackVal, *(iParam0 + 544)))
			{
				GET_POSITION(Global_34573, iParam0 + 544);
			}
			if (!Function_267(StackVal, StackVal, *(iParam0 + 544)))
			{
				STREAMING_LOAD_BOUNDS(*(iParam0 + 544), 10.0f, 0);
			}
			switch (iParam0->f_536)
			{
				case 0x00000001:
					if (IS_ACTOR_PLAYER(Global_34573))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					SQUAD_GOALS_CLEAR(bLocal_229);
					Function_83(bLocal_229);
					Function_81(Global_34573, 0);
					REQUEST_ACTION_TREE("custom/handoff");
					REQUEST_ANIM_SET("handoff", 0);
					if (IS_PLAYER_DEADEYE(0))
					{
						CANCEL_DEADEYE();
						CANCEL_TIME_WARP(1);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Global_34573), "procStop", true);
					if (iParam0->f_560 == 1)
					{
						Function_42(iParam0, 4);
						Function_307(iParam0 + 508);
					}
					else
					{
						Function_42(iParam0, 3);
					}
					break;
				
				default:
					Function_42(iParam0, 4);
					Function_307(iParam0 + 508);
					break;
			}
			break;
		
		case 0x00000003:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procStop") == 1)
			{
				GET_ACTOR_VELOCITY(Global_34573, &vVar12);
				if (VMAG(vVar12) > 1.0f)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj", GET_MOUNT(Global_34573));
						TASK_CLEAR(Global_34573);
						TASK_DISMOUNT(Global_34573, 1);
						TASK_PRIORITY_SET(Global_34573, 1);
					}
					else if (IS_ACTOR_VALID(GET_VEHICLE(Global_34573)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj", GET_VEHICLE(Global_34573));
						Function_72(GET_VEHICLE(Global_34573), 0, 0, 2);
						TASK_CLEAR(Global_34573);
						TASK_VEHICLE_LEAVE(Global_34573);
						TASK_PRIORITY_SET(Global_34573, 1);
					}
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
				}
			}
			else if (!(((GET_TASK_STATUS(Global_34573, 12) != 1 || GET_TASK_STATUS(Global_34573, 12) != 3) || GET_TASK_STATUS(Global_34573, 55) != 1) || GET_TASK_STATUS(Global_34573, 55) != 3))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))))
				{
					START_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj")));
				}
				bVar1 = Function_71(iParam0, 1);
				if (IS_ACTOR_VALID(bVar1))
				{
					TASK_CLEAR(Global_34573);
					TASK_GO_NEAR_ACTOR(Global_34573, bVar1, 2.5f, 1);
					TASK_PRIORITY_SET(Global_34573, 1);
				}
				else
				{
					LOG_ERROR("Cutscene could not find actor for player to greet");
				}
				Function_42(iParam0, 4);
				Function_307(iParam0 + 508);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_500))
			{
				switch (iParam0->f_536)
				{
					case 0x00000001:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								if (HUD_IS_FADED())
								{
									if (HAS_ANIM_SET_LOADED("handoff") || Function_294(iParam0 + 508, 1.0f))
									{
										if (bVar16)
										{
											vVar3 = { -2653.531f, 67.263f, 3425.407f };
											TELEPORT_ACTOR(Global_34573, &vVar3, 1, 1, 1);
											vVar3 = { -2654.323f, 67.263f, 3426.423f };
											TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
										}
										else
										{
											vVar3 = { -707.851f, 63.247f, 3285.772f };
											TELEPORT_ACTOR(Global_34573, &vVar3, 1, 1, 1);
											vVar3 = { -706.93f, 63.25f, 3284.69f };
											TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
										}
										Function_67(bVar2, Global_34573);
										Function_67(Global_34573, bVar2);
										Function_307(iParam0 + 508);
										iParam0->f_556++;
									}
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_71(iParam0, 1);
								if (IS_ACTOR_VALID(bVar0))
								{
									Function_66(bVar0, &vVar3);
								}
								else
								{
									vVar3 = { 0.0f, 0.0f, 0.0f };
								}
								if ((Function_294(iParam0 + 508, 0.5f) || iParam0->f_560 != 1) || VDIST(Global_34574, vVar3) > 3.0f)
								{
									if (IS_OBJECT_VALID(iParam0->f_504))
									{
										DESTROY_VOLUME(iParam0->f_504);
									}
									if (bVar16)
									{
										vVar3 = { -2655.584f, 67.263f, 3422.558f };
									}
									else
									{
										vVar3 = { -716.264f, 63.247f, 3292.297f };
									}
									Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhCutsceneVol") };
									iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Local_179, 3, vVar3, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
									if (bVar16)
									{
										vVar3 = { -2655.584f, 67.263f, 3422.558f };
										Var9 = { 0.0f, 334.845f, 0.0f };
									}
									else
									{
										vVar3 = { -707.02f, 63.247f, 3284.883f };
										Var9 = { 0.0f, 72.427f, 0.0f };
									}
									TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar0, vVar3, 1, 1, 1);
									PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
									ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
									ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
									CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
									DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
									if (IS_ACTORSET_VALID(bLocal_450))
									{
										Function_65(&bLocal_450);
									}
									if (bVar16)
									{
										vVar3 = { -2655.584f, 67.263f, 3422.558f };
										Var9 = { 0.0f, 334.845f, 0.0f };
									}
									else
									{
										vVar3 = { -708.121f, 63.247f, 3286.062f };
										Var9 = { 0.0f, 72.427f, 0.0f };
									}
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, "handoffGringo", "$/content/scripting/gringo/simplegringo/handoff", vVar3, Var9));
									TASK_GO_NEAR_COORD(Global_34573, &vVar3, 3.0f, 1);
									Function_25(bVar0, Function_71(iParam0, 0), 0, 1);
									bVar15 = false;
									while (bVar15 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
									{
										bVar0 = Function_71(iParam0, bVar15);
										if (IS_ACTOR_VALID(bVar0))
										{
											if (!IS_ACTOR_PLAYER(bVar0))
											{
												SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
												TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
											}
											switch (bVar15)
											{
												case 0x00000000:
													if (bVar16)
													{
														vVar3 = { -2656.256f, 67.797f, 3423.427f };
														Var9 = { 0.0f, 234.172f, 0.0f };
													}
													else
													{
														vVar3 = { -704.415f, 63.247f, 3286.654f };
														Var9 = { 0.0f, 200.189f, 0.0f };
													}
													CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar0);
													TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar0, vVar3, 1, 0, 1);
													Function_63(bVar0, 1, 1);
													MEMORY_CLEAR_EVENTS(bVar0, 0);
													TASK_CLEAR(bVar0);
													if (bVar16)
													{
														vVar3 = { -2668.377f, 67.956f, 3436.608f };
														Var9 = { 0.0f, 346.0f, 0.0f };
														vVar6 = { -2642.666f, 68.36f, 3412.139f };
													}
													else
													{
														vVar3 = { -703.092f, 63.247f, 3299.374f };
														Var9 = { 0.0f, 56.578f, 0.0f };
														vVar6 = { -728.42f, 64.669f, 3281.75f };
													}
													Function_63(bVar0, 1, 1);
													SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar0, 1);
													AI_GOAL_SHOOT_AT_COORD(bVar0, &vVar6);
													TASK_GO_TO_COORD_AND_STAY(StackVal, bVar0, &vVar3, 1.401298E-45f);
													TASK_PRIORITY_SET(bVar0, 1);
													DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
													break;
												
												case 0x00000001:
													Function_63(bVar0, 1, 1);
													SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar0, 1);
													CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar0);
													MEMORY_CONSIDER_AS(bVar0, Global_34573, 0);
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
													TASK_PRIORITY_SET(bVar0, 1);
													DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
													break;
												
												case 0x00000002:
													DESTROY_ACTOR(bVar0);
													break;
												
												case 0x00000003:
													DESTROY_ACTOR(bVar0);
													break;
												
												case 0x00000004:
													DESTROY_ACTOR(bVar0);
													break;
												
												case 0x00000005:
													DESTROY_ACTOR(bVar0);
													break;
												
												case 0x00000006:
													DESTROY_ACTOR(bVar0);
													break;
												
												default:
													LOG_ERROR("Unknown actor index for PROCMISSION_CUTSCENE_TYPE_BOUNTY_");
													break;
												}
										}
										bVar15++;
									}
									if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
									{
										bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"));
										if (IS_ACTOR_VALID(bVar0))
										{
											DESTROY_ACTOR(bVar0);
										}
									}
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
									{
										DESTROY_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
									}
									if (IS_ACTOR_VALID(Global_12976.f_36))
									{
										DESTROY_ACTOR(Global_12976.f_36);
									}
									bVar1 = Function_71(iParam0, 0);
									if (!IS_ACTOR_VALID(bVar1))
									{
										bVar1 = Global_34573;
									}
									bVar2 = Function_71(iParam0, 1);
									Function_63(bVar2, 1, 1);
									if (bVar16)
									{
										vVar3 = { -2653.531f, 67.263f, 3425.407f };
										TELEPORT_ACTOR(Global_34573, &vVar3, 1, 1, 1);
										vVar3 = { -2654.323f, 67.263f, 3426.423f };
										TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
									}
									else
									{
										vVar3 = { -707.851f, 63.247f, 3285.772f };
										TELEPORT_ACTOR(Global_34573, &vVar3, 1, 1, 1);
										vVar3 = { -706.93f, 63.25f, 3284.69f };
										TELEPORT_ACTOR(bVar2, &vVar3, 1, 1, 1);
									}
									Function_67(bVar2, Global_34573);
									Function_67(Global_34573, bVar2);
									TASK_CLEAR(Global_34573);
									RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
									RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
									SET_ANIM_SET_FOR_ACTOR(bVar2, "handoff", 0);
									SET_LINKED_ANIM_TARGET(bVar2, Global_34573);
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "handoff");
									Function_307(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_294(iParam0 + 508, 0.01f))
								{
									Function_43(1.0f);
									Function_307(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (!HUD_IS_FADING() && !HUD_IS_FADED())
								{
									bVar1 = Function_71(iParam0, 0);
									if (!IS_ACTOR_VALID(bVar1))
									{
										bVar1 = Global_34573;
									}
									bVar2 = Function_71(iParam0, 1);
									if (bVar16)
									{
										strcpy(&cVar17, "MISSING_PERSON_REWARD_P_", 64);
										if (Global_26303.f_40 <= 10)
										{
											stradd(&cVar17, "0", 64);
										}
										stradd(&cVar17, INT_TO_STRING(Global_26303.f_40), 64);
									}
									else
									{
										strcpy(&cVar17, "MISSING_PERSON_REWARD_P_0", 64);
										bVar33 = (Global_26303.f_40 - 10);
										stradd(&cVar17, INT_TO_STRING(bVar33), 64);
									}
									PRINTSTRING(&cVar17);
									PRINTSTRING("******");
									PRINTNL();
									SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(bVar2, &cVar17, Global_34573, "PLAYER_RESPOND_TO_THANKS_Z_M", 1, 1, 1, 0);
									Function_307(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_294(iParam0 + 508, 7.0f))
								{
									bVar2 = Function_71(iParam0, 1);
									REMOVE_ACTION_TREE("custom/handoff");
									REMOVE_ANIM_SET("handoff");
									CLEAR_LINKED_ANIM_TARGET(Global_34573);
									RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
									RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
									Function_42(iParam0, 5);
									bVar15 = false;
									while (bVar15 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
									{
										bVar0 = Function_71(iParam0, bVar15);
										if (IS_ACTOR_VALID(bVar0))
										{
											MEMORY_CLEAR_EVENTS(bVar0, 0);
											Function_63(bVar0, 0, 1);
										}
										Function_63(bVar0, 0, 1);
										bVar15++;
									}
									iParam0->f_556++;
								}
								break;
							
							default:
								break;
						}
						break;
					
					case 0x00000000:
					default:
						LOG_ERROR("Undefined cutscene type");
						break;
				}
			}
			else
			{
				Function_43(1.0f);
				REMOVE_ACTION_TREE("custom/handoff");
				REMOVE_ANIM_SET("handoff");
				Function_42(iParam0, 5);
			}
			break;
		
		case 0x00000005:
			break;
		
		default:
			LOG_ERROR("Unhandled cutscene case");
			break;
	}
	return iParam0->f_532;
}

void Function_65(int iParam0) //Position: 0x42DD / 17117
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

void Function_66(bool bParam0, int iParam1) //Position: 0x4324 / 17188
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x4331 / 17201
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_68(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_68(bool bParam0, vector3 vParam1) //Position: 0x434B / 17227
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_69(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_69(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_69(bool bParam0, vector3 vParam1) //Position: 0x4383 / 17283
{
	vector3 vVar0;
	
	Function_70(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_70(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_70(bool bParam0) //Position: 0x4406 / 17414
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_71(int iParam0, bool bParam1) //Position: 0x4417 / 17431
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = "";
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_540);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bVar3), "procCutsceneIdx") == bParam1)
				{
					bVar2 = bVar3;
					bVar0 = GET_OBJECTSET_SIZE(iParam0->f_540) + 1;
				}
			}
		}
		bVar0++;
	}
	return bVar2;
}

int Function_72(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x4492 / 17554
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
					Function_73(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_73(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_73(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4572 / 17778
{
	char* cVar0[32];
	
	Function_80();
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
	if (Function_79(bParam0) == 1)
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
	Function_78(bParam0, 0);
	Function_77(bParam0, iParam1);
	Function_76(bParam0, uParam2);
	Function_75(bParam0, uParam3);
	if (Function_74(bParam0) != 5)
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

int Function_74(bool bParam0) //Position: 0x47C0 / 18368
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x47E3 / 18403
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x4806 / 18438
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x482A / 18474
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_78(bool bParam0, bool bParam1) //Position: 0x4850 / 18512
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_79(bool bParam0) //Position: 0x4873 / 18547
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_80() //Position: 0x4891 / 18577
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

void Function_81(bool bParam0, bool bParam1) //Position: 0x48DB / 18651
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
	else if (!bParam1 || Function_82(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_82(bool bParam0, bool bParam1) //Position: 0x4938 / 18744
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_83(bool bParam0) //Position: 0x4957 / 18775
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

int Function_84(int iParam0, var uParam1, bool bParam2) //Position: 0x499E / 18846
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = bVar1;
	switch (iParam0->f_536)
	{
		case 0x00000001:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			REFERENCE_OBJECT(bVar0);
			Function_63(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			if (iLocal_277 == Global_30679[1])
			{
				iParam0->f_500 = Function_97(uParam1, 0, 1, 1, 0);
			}
			else
			{
				iParam0->f_500 = Function_91(uParam1, 0, 1, 1, 0);
			}
			break;
	}
	Function_42(iParam0, 1);
	if (bParam2 == 1)
	{
		Function_408(iParam0 + 584, 32768);
		Function_90(256);
	}
	Function_85(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_408(iParam0 + 584, 256);
	return 1;
}

void Function_85(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x4A67 / 19047
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
	HUD_ENABLE(0);
	Function_47();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_17();
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
			if (Function_62())
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
				Function_70(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_32(), 2, Function_70(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_48(19, 1, 0, 0);
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
	if (uParam10 && !Function_89())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_88()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_88()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
		Function_86(0x4000000);
	}
	if (Function_87(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_86(0x8000000);
	}
}

void Function_86(bool bParam0) //Position: 0x4D15 / 19733
{
	bool bVar0;
	
	if (Function_409(bParam0, 1) && Function_409(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_87(int iParam0) //Position: 0x4D49 / 19785
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_88() //Position: 0x4D65 / 19813
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

bool Function_89() //Position: 0x4DE4 / 19940
{
	if (Function_409(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_90(int iParam0) //Position: 0x4DFF / 19967
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

var Function_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x4E12 / 19986
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "missingPersonReturnElPresidio", 4, 1);
	}
	Function_92(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_92(int iParam0) //Position: 0x4E9B / 20123
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_96(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_95(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_94(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_93(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 25.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*iParam0, 3, 1);
	return;
}

void Function_93(int iParam0) //Position: 0x4EF9 / 20217
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -710.2491f, 64.69716f, 3283.914f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.049189f, -2.033144f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_94(int iParam0) //Position: 0x4F9F / 20383
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -709.6307f, 64.69374f, 3283.188f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.044305f, -2.267533f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_95(int iParam0) //Position: 0x5045 / 20549
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -724.7874f, 65.17257f, 3285.026f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.025612f, -2.264807f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_96(int iParam0) //Position: 0x50EB / 20715
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -725.3794f, 68.59247f, 3284.409f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.011136f, -2.267333f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

var Function_97(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x5191 / 20881
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_32(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "missingPersonReturnFortMercer", 4, 1);
	}
	Function_98(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_98(int iParam0) //Position: 0x521A / 21018
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_102(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_101(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_100(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_99(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 2, 3, 25.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*iParam0, 3, 1);
	return;
}

void Function_99(int iParam0) //Position: 0x5278 / 21112
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2652.428f, 68.54108f, 3428.384f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.027235f, 0.584554f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_100(int iParam0) //Position: 0x531A / 21274
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2651.387f, 68.55533f, 3427.366f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.031002f, 1.122704f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_101(int iParam0) //Position: 0x53BC / 21436
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2646.727f, 68.98794f, 3412.211f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.050896f, 2.540627f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_102(int iParam0) //Position: 0x545E / 21598
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2650.684f, 72.57206f, 3412.697f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.065498f, -2.605389f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_103(bool bParam0, int iParam1) //Position: 0x5500 / 21760
{
	bParam0->f_536 = iParam1;
	return;
}

int Function_104(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x550D / 21773
{
	struct<8> Var0;
	
	Function_105(bParam0);
	if (!IS_OBJECTSET_VALID(bParam0->f_540))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("cutscTargets") };
		bParam0->f_540 = CREATE_OBJECTSET_IN_LAYOUT(&Var0, bParam0->f_28, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam1, bParam0->f_540);
	}
	if (IS_OBJECT_VALID(bParam2))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam2, bParam0->f_540);
	}
	if (IS_OBJECT_VALID(bParam3))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam3, bParam0->f_540);
	}
	return 1;
}

void Function_105(int iParam0) //Position: 0x5590 / 21904
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_106(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5605 / 22021
{
	struct<8> Var0;
	
	Function_105(bParam0);
	if (!IS_OBJECTSET_VALID(bParam0->f_540))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("cutscTargets") };
		bParam0->f_540 = CREATE_OBJECTSET_IN_LAYOUT(&Var0, bParam0->f_28, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam1, bParam0->f_540);
		DECOR_SET_INT(bParam1, "procCutsceneIdx", bParam2);
	}
	else
	{
		LOG_ERROR("PROCMISSION_CUTSCENE_ADD_TARGET - Invalid target passed in");
	}
	return;
}

vector3 Function_107() //Position: 0x56B3 / 22195
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_108(bool bParam0) //Position: 0x56BC / 22204
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_109() //Position: 0x56D3 / 22227
{
	int iVar0;
	bool bVar1;
	
	if (iLocal_244 == 1)
	{
		return;
	}
	Function_182();
	Function_292(0);
	Function_181(72, 1);
	Function_155();
	iVar0 = 0;
	while (iVar0 < (bLocal_176 - 1))
	{
		if (IS_ACTOR_VALID(bLocal_31[iVar0]))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_31[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_231 == 2)
	{
		bVar1 = GET_MOST_RECENT_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar1))
		{
			DESTROY_ACTOR(bVar1);
		}
		Function_154(0);
		if (iLocal_232 == 0)
		{
			Function_412(0);
			Function_2(1);
			iLocal_232 = 1;
		}
		Function_420(&Local_279, 2);
		if ((*&Global_26401 + 16)[0] >= 0)
		{
			(*&Global_26401 + 16)[0] = 0;
			Function_153("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
		else if ((*&Global_26401 + 16)[1] >= 0)
		{
			(*&Global_26401 + 16)[1] = 0;
			Function_153("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	else if (iLocal_231 == 3)
	{
		if (IS_OBJECT_VALID(bLocal_274))
		{
			DESTROY_OBJECT(bLocal_274);
		}
		if (iLocal_232 == 0)
		{
			Function_412(0);
			Function_2(1);
			iLocal_232 = 1;
		}
		Function_420(&Local_279, 3);
		if (iLocal_240 == 1)
		{
			Function_149(0, 0, 1);
			Function_149(1, 0, 1);
		}
		else
		{
			Function_149(0, 1, 1);
			Function_149(1, 1, 1);
		}
	}
	else
	{
		iLocal_231 = 4;
		Function_420(&Local_279, iLocal_231);
		Function_149(0, 1, 1);
		Function_149(1, 1, 1);
	}
	Function_146();
	CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
	APPEND_JOURNAL_ENTRY(Global_26303.f_36, 1);
	Function_145(&Local_279, 1);
	Function_110(&Local_279);
	Function_292(0);
	iLocal_244 = 1;
	return;
}

void Function_110(int iParam0) //Position: 0x5856 / 22614
{
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (iParam0->f_532 == 5)
	{
		if (Function_409(iParam0->f_584, 32768))
		{
			Function_41(256);
		}
	}
	Function_144();
	Function_12(1);
	if (Function_409(iParam0->f_584, 32))
	{
		if (Function_142(iParam0->f_624))
		{
			switch (iParam0->f_620)
			{
				case 0x00000002:
					Function_127(iParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_124(iParam0->f_624);
					break;
				
				default:
					Function_116(iParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_111(iParam0, 0);
	}
	if (IS_VOLUME_VALID(iParam0->f_504))
	{
		DESTROY_VOLUME(iParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		DESTROY_OBJECTSET(iParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(iParam0->f_28);
		DESTROY_LAYOUT(iParam0->f_28);
	}
	if (Function_409(iParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_409(iParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_111(int iParam0, bool bParam1) //Position: 0x59B3 / 22963
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_10(iParam0->f_568);
		Function_114(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_113(iParam0->f_568);
			Function_10(iParam0->f_568);
			Function_112(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_114(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_112(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x5A18 / 23064
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_113(bool bParam0) //Position: 0x5A86 / 23174
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_114(var uParam0, bool bParam1, bool bParam2) //Position: 0x5ABB / 23227
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_115(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_115(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x5B37 / 23351
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_116(int iParam0) //Position: 0x5B51 / 23377
{
	int iVar0;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	iVar0 = Function_121(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_117("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_117(char* cParam0, int iParam1) //Position: 0x5BA4 / 23460
{
	struct<4> Var0;
	
	if (!Function_142(iParam1))
	{
		return;
	}
	switch (Function_121(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_118(Function_119(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_121(iParam1), Function_119(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_118(int iParam0) //Position: 0x5CC8 / 23752
{
	char* cVar0[16];
	
	if (!Function_89())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_119(int iParam0) //Position: 0x5D02 / 23810
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_120(int iParam0) //Position: 0x5D22 / 23842
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_121(int iParam0) //Position: 0x5D39 / 23865
{
	if (!Function_120(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_122() //Position: 0x5D54 / 23892
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
			Function_123(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_123(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5F9B / 24475
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_124(int iParam0) //Position: 0x5FC4 / 24516
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_142(iParam0))
	{
		return;
	}
	iVar0 = Function_121(iParam0);
	if (StackVal == 2)
	{
		Function_117("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_125(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_125(int iParam0) //Position: 0x606A / 24682
{
	char* cVar0[16];
	
	if (!Function_89())
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

struct<24> Function_126(char* cParam0) //Position: 0x60A9 / 24745
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

void Function_127(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x62FF / 25343
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	bVar0 = Function_121(iParam0);
	if (!bVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_141())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_119(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_125(Global_6269) };
		}
		if (Function_141())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_134();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_141())
	{
		Function_132();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_117("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_129(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_119(iParam0))
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
			Function_387(1);
			Function_386(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_128(iParam0, &Var14);
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

void Function_128(int iParam0, int iParam1) //Position: 0x6553 / 25939
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_129(int iParam0) //Position: 0x658D / 25997
{
	int iVar0;
	int iVar1;
	
	if (!Function_120(iParam0))
	{
		return;
	}
	switch (Function_121(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_119(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_48(12, 1, 0, 0);
				Function_131(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_48(13, 1, 0, 0);
				Function_131(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_48(14, 1, 0, 0);
				Function_131(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_48(15, 1, 0, 0);
				Function_131(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_48(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_119(iParam0))
			{
				case 0x00000000:
					if (Function_130(iParam0) == 1)
					{
						iVar0 = Function_419(iParam0);
						if (Function_428(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_131(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_131(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_131(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_131(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_131(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_131(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_131(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_131(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_131(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_131(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_131(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_131(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_131(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_131(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_131(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_131(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_131(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_131(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_131(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_131(4, 19);
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
								Function_48(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_48(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_48(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_419(iParam0) == 0)
			{
				if (Function_130(iParam0) == 1)
				{
					Function_48(458, 1, 0, 0);
					iVar0 = Function_119(iParam0);
					if (Function_428(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_131(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_131(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_131(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_131(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_131(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_131(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_131(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_131(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_130(iParam0) == 1)
			{
				Function_48(400, 1, 0, 0);
			}
			switch (Function_119(iParam0))
			{
				case 0x00000001:
					Function_48(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_131(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_131(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_131(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_48(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_131(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_131(6, 9);
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

int Function_130(int iParam0) //Position: 0x6A69 / 27241
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_131(int iParam0, bool bParam1) //Position: 0x6A83 / 27267
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

void Function_132() //Position: 0x6AEA / 27370
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_133(0));
	PLAYSTAT_INT("HC_FAME", Function_133(3));
	PLAYSTAT_INT("HC_HONOR", Function_133(1));
	return;
}

int Function_133(bool bParam0) //Position: 0x6C42 / 27714
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

void Function_134() //Position: 0x6C83 / 27779
{
	int iVar0;
	int iVar1;
	
	if (!Function_140(Global_6269))
	{
		return;
	}
	iVar0 = Function_133(24);
	iVar1 = Function_139(Global_6269);
	if (!Function_140(iVar0) && Function_138(iVar1) < 0)
	{
		Function_137(24, Global_6269, 0);
		Function_135(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_138(Function_139(iVar0)))
	{
		Function_137(24, Global_6269, 0);
		Function_135(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_135(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6D03 / 27907
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
		Function_136(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x7055 / 28757
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_137(int iParam0, bool bParam1, bool bParam2) //Position: 0x70D8 / 28888
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
		Function_61(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_60(iParam0);
	if (bParam2)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_138(int iParam0) //Position: 0x7373 / 29555
{
	if (!Function_142(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_139(int iParam0) //Position: 0x738D / 29581
{
	if (!Function_140(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_140(int iParam0) //Position: 0x73A7 / 29607
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_141() //Position: 0x73BD / 29629
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_142(int iParam0) //Position: 0x73E8 / 29672
{
	if (!Function_120(iParam0))
	{
		return 0;
	}
	if (!Function_143(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x740C / 29708
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_144() //Position: 0x7421 / 29729
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_145(int iParam0, int iParam1) //Position: 0x7435 / 29749
{
	if (iParam1 == 1)
	{
		Function_408(iParam0 + 584, 32);
	}
	else
	{
		Function_3(iParam0 + 584, 32);
	}
	return;
}

void Function_146() //Position: 0x7458 / 29784
{
	int iVar0;
	
	Global_26960 = Function_147(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_147(int iParam0) //Position: 0x74A6 / 29862
{
	if (!Function_148(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_148(int iParam0) //Position: 0x74BE / 29886
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_149(int iParam0, bool bParam1, bool bParam2) //Position: 0x74D3 / 29907
{
	if ((*&Global_26401 + 16)[iParam0] >= 0)
	{
		Function_152(iParam0, (*&Global_26401 + 16)[iParam0]);
		(*&Global_26401 + 16)[iParam0] = 0;
		if (bParam2)
		{
			Function_150(iParam0, 0, 0, Function_29(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				Function_153("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_150(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x753C / 30012
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&iVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], iVar0) || Function_151((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = iVar0;
	}
}

var Function_151(bool bParam0) //Position: 0x7582 / 30082
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_152(int iParam0, bool bParam1) //Position: 0x75A7 / 30119
{
	if (!Function_148(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_48((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_48(222, bParam1, 0, 0);
	return;
}

void Function_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x75EC / 30188
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

void Function_154(int iParam0) //Position: 0x7667 / 30311
{
	Global_12976.f_8 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 8, 0, 0, (iParam0 + Function_29(90)), 0);
	return;
}

void Function_155() //Position: 0x7688 / 30344
{
	int iVar0;
	
	if (iLocal_231 == 2)
	{
		Function_180(&Local_279);
		Function_48(657, 1, 0, 0);
		iVar0 = uLocal_214;
		if (_GET_AMMO_AMOUNT(Global_34573, 7, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 7))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 7, (IntToFloat(iVar0) + 5.0f), 0, 1);
		}
		if (_GET_AMMO_AMOUNT(Global_34573, 8, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 8))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 8, (IntToFloat(iVar0) + 5.0f), 0, 1);
		}
		if (_GET_AMMO_AMOUNT(Global_34573, 10, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 10))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, 10, (IntToFloat(iVar0) + 5.0f), 0, 1);
		}
		if (iLocal_277 == Global_30707[1])
		{
			if (!Function_179(4, 0))
			{
				Function_156(18, 8, 0, 0, 0);
			}
			else
			{
				Function_156(23, 8, 0, 0, 0);
			}
		}
	}
	if (iLocal_242 == 1)
	{
		Function_43(1.0f);
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7745 / 30533
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_178(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_177(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_176(bParam0, 2))
	{
		Function_48(456, 1, 0, 0);
		Function_175(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_153(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_174(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_175(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_410(0, 0, 1, 1))
			{
				Function_387(1);
				Function_386(1, 0);
			}
			else
			{
				Function_173();
			}
		}
		Function_168(bParam0);
		if (StackVal && !Function_409(((((!Function_167() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_409((((Function_167() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_89())
		{
			if (!Function_166(Global_76846, 2))
			{
				Function_161(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_158();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_157(3, bParam1);
				break;
			
			case 0x00000005:
				Function_157(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_157(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_157(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_157(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_157(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_131(2, 24);
				break;
			
			case 0x00000003:
				Function_131(2, 25);
				break;
			
			case 0x0000000F:
				Function_131(2, 26);
				break;
			
			case 0x0000000D:
				Function_131(2, 27);
				break;
			
			case 0x0000000E:
				Function_131(2, 28);
				break;
			}
	}
}

void Function_157(int iParam0, bool bParam1) //Position: 0x79DB / 31195
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_158() //Position: 0x7A46 / 31302
{
	if (Function_178(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_159(int iParam0, int iParam1) //Position: 0x7AC1 / 31425
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
					if (Function_179(6, 0) || Function_179(12, 0))
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
					if (Function_285(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_179(5, 0))
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
					if (Function_285(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_285(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_285(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_285(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_179(26, 0))
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
					if (Function_285(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_285(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_285(27) && iVar18)
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
					if (Function_285(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_285(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_285(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_285(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_179(17, 0) && iVar15)
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
					if (Function_285(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_179(6, 0) && Function_285(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_285(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_179(9, 0) && Function_285(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_285(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_179(8, 0) && iVar19)
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
	if (Function_267(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_267(StackVal, StackVal, vVar3))
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
	if (!Function_267(StackVal, StackVal, vVar3))
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

int Function_160(int iParam0) //Position: 0x86C0 / 34496
{
	int iVar0;
	int iVar1;
	
	if (!Function_178(iParam0))
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

void Function_161(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x870F / 34575
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_163(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_162(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_162(char* cParam0, int iParam1) //Position: 0x877B / 34683
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

bool Function_163(bool bParam0, var uParam1, int iParam2) //Position: 0x87B2 / 34738
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
		if (Function_165(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_164(uVar0))
		{
			case 0x00000002:
				if (!Function_166(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_164(char* cParam0) //Position: 0x882A / 34858
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

int Function_165(int iParam0) //Position: 0x88CB / 35019
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_3(&iVar1, 2147483648);
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

bool Function_166(int iParam0, int iParam1) //Position: 0x8908 / 35080
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_167() //Position: 0x891B / 35099
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_168(bool bParam0) //Position: 0x8948 / 35144
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
			if (Function_174(bParam0, Function_172(bVar24)))
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
			if (Function_174(bParam0, Function_172(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_171(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_170(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_169(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_169(int iParam0) //Position: 0x8AF8 / 35576
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_178(iParam0))
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

void Function_170(var uParam0, int iParam1) //Position: 0x8B4F / 35663
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_171(int iParam0) //Position: 0x8B74 / 35700
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_178(iParam0))
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

int Function_172(bool bParam0) //Position: 0x8BCA / 35786
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_173() //Position: 0x8BD6 / 35798
{
	return;
}

bool Function_174(bool bParam0, int iParam1) //Position: 0x8BDC / 35804
{
	int iVar0;
	
	if (!Function_178(bParam0))
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

void Function_175(int iParam0, int iParam1) //Position: 0x8C3B / 35899
{
	if (!Function_178(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_176(int iParam0, int iParam1) //Position: 0x8C90 / 35984
{
	int iVar0;
	
	if (!Function_178(iParam0))
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

bool Function_177(int iParam0) //Position: 0x8CBD / 36029
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_178(int iParam0) //Position: 0x8CD9 / 36057
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_179(int iParam0, bool bParam1) //Position: 0x8CEF / 36079
{
	int iVar0;
	
	iVar0 = Function_139(iParam0);
	if (!Function_120(iVar0))
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

void Function_180(bool bParam0) //Position: 0x8D2C / 36140
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (bParam0->f_336 - 1))
	{
		strcpy(bParam0 + 336[iVar04], "", 16);
		(*bParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_480 = 0;
	return;
}

int Function_181(bool bParam0, bool bParam1) //Position: 0x8D68 / 36200
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_325(bParam0), Function_17()) >= 0)
		{
			DELETE_ITEM(Function_325(bParam0), Function_17(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_325(bParam0), Function_17(), 1);
	return 1;
}

void Function_182() //Position: 0x8DAF / 36271
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_453)
	{
		if (Local_453[iVar08])
		{
			if (IS_DOOR_VALID(Local_453[iVar08].f_24))
			{
				Function_183(Local_453[iVar08].f_24, 1);
			}
		}
		iVar0++;
	}
	iLocal_257 = 1;
	return;
}

void Function_183(bool bParam0, bool bParam1) //Position: 0x8DF3 / 36339
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

void Function_184(bool bParam0) //Position: 0x8E44 / 36420
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

void Function_185(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8ECE / 36558
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
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_186(struct<51> Param0) //Position: 0x8F53 / 36691
{
	int iVar0;
	var uVar1;
	float fVar2;
	
	fVar2 = -1.0f;
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	if (!IS_LAYOUTREF_VALID(bLocal_278))
	{
	}
	if (iLocal_178 <= 5)
	{
		if (IS_ACTOR_VALID(bLocal_44))
		{
			if (ACTORS_IN_RANGE(bLocal_44, Global_34573, 45.0f))
			{
				Function_345(5);
			}
		}
		iVar0 = 0;
		while (iVar0 < (bLocal_176 - 1))
		{
			if (IS_ACTOR_VALID(bLocal_31[iVar0]))
			{
				if (IS_ACTOR_DRUNK(bLocal_31[iVar0]))
				{
					SET_ACTOR_DRUNK(bLocal_31[iVar0], 0);
				}
				if ((Function_245(bLocal_31[iVar0], &uVar1, &fVar2, 0, 0, 0x40400000) || GET_LAST_ATTACK_TARGET(bLocal_31[iVar0]) != Global_34573) || AI_IS_AGGROING(bLocal_31[iVar0], Global_34573))
				{
					if (!Function_345(5))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_178 > 5)
	{
		iLocal_177 = Function_244();
	}
	Function_230();
	if (IS_ACTOR_VALID(bLocal_44))
	{
		Function_227();
	}
	if (iLocal_178 > 5)
	{
		Function_220();
	}
	else
	{
		Function_212();
	}
	if (iLocal_178 == 7)
	{
		if (Global_26303.f_40 <= 16)
		{
			if (!IS_OBJECT_VALID(bLocal_274))
			{
				if (iLocal_277 == Global_30679[1])
				{
					if (Global_26303.f_40 <= 10)
					{
						bLocal_274 = Function_211(Global_30679[1], "fortMercer_layout", -2651.921f, 68.3f, 3424.928f, -0.4054303f, 580.7257f, -3.193105f, 4294967295);
					}
				}
				else if (Global_26303.f_40 <= 16)
				{
					bLocal_274 = Function_211(Global_30707[1], "elpresidio_layout", -717.9177f, 64.29659f, 3293.778f, -179.5706f, 37.63261f, -179.2682f, 4294967295);
				}
			}
		}
		if (!IS_OBJECT_VALID(bLocal_261) && !IS_VOLUME_VALID(bLocal_218))
		{
			Function_210();
			if (!Function_267(StackVal, StackVal, vLocal_439))
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhGateway") };
				bLocal_261 = Function_209(StackVal, StackVal, bLocal_278, &Local_179, vLocal_439, 0.0f, 0.0f, 0.0f, Global_34573, (2.5f * 6.0f), 5, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
				if (IS_OBJECT_VALID(bLocal_261))
				{
					Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGatewayVol") };
					bLocal_218 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vLocal_439, 0.0f, fLocal_448, 0.0f, 10.0f, 10.0f, 5.0f);
				}
				else
				{
					LOG_ERROR("Problem creating dropoff gateway");
				}
				Function_292(1);
			}
			else
			{
				LOG_ERROR("Invalid dropOffPos found");
			}
			Function_208(&bLocal_486);
			Function_206();
		}
		else if (StackVal && !Function_409(Function_200(), 2048))
		{
			Function_198();
			Function_408(&Global_26303 + 8, 2048);
		}
		else if (Function_409(StackVal, 2048))
		{
			if (StackVal && !Function_409(VDIST(Global_34574, vLocal_439) > 100.0f, 512))
			{
				Function_197();
				Function_408(&Global_26303 + 8, 512);
			}
		}
	}
	if (iLocal_178 == 7)
	{
		if (Global_3407)
		{
			Function_345(10);
		}
	}
	if (Function_187())
	{
		return 0;
	}
	if (iLocal_178 == 7)
	{
	}
	return 1;
}

bool Function_187() //Position: 0x926C / 37484
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_235 == 1)
	{
		return 1;
	}
	if (Function_428(iLocal_277))
	{
		if (iLocal_178 > 7)
		{
			if (iLocal_236 == 1)
			{
				if (IS_VOLUME_VALID(bLocal_218))
				{
					if (IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
					{
						bVar3 = false;
						if (!iLocal_258)
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_218))
							{
								if (IS_ACTOR_VALID(bLocal_44) && IS_ACTOR_ALIVE(bLocal_44))
								{
									if (IS_ACTOR_IN_VOLUME(bLocal_44, bLocal_218) || ACTORS_IN_RANGE(Global_34573, bLocal_44, 30.0f))
									{
										if (Function_194(StackVal, StackVal, vLocal_442, 20.0f) >= 0)
										{
											bVar0 = false;
											while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
											{
												bVar2 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
												if (IS_ACTOR_VALID(bVar2))
												{
													if (IS_ACTOR_ALIVE(bVar2))
													{
														if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
														{
															ADD_BLIP_FOR_ACTOR(bVar2, 322, 0, 2, 0);
														}
													}
												}
												bVar0++;
											}
											Function_278(&Local_279, 1);
											Function_277(&Local_279, "pm_bh_killUn", 1);
											iLocal_258 = 1;
											Function_292(1);
											Function_184(bLocal_261);
											AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
										}
										else
										{
											bVar3 = true;
										}
									}
								}
							}
						}
						else if (!iLocal_259)
						{
							if (Function_194(StackVal, StackVal, vLocal_442, 20.0f) < 0)
							{
								if (!Function_193(&iLocal_211))
								{
									Function_307(&iLocal_211);
								}
								else if (Function_294(&iLocal_211, 3.0f))
								{
									bVar0 = false;
									while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
									{
										bVar2 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
										if (IS_ACTOR_VALID(bVar2))
										{
											if (IS_ACTOR_ALIVE(bVar2))
											{
												if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
												{
													Function_192(bVar2);
												}
											}
										}
										bVar0++;
									}
									iLocal_259 = 1;
									Function_278(&Local_279, 1);
									Function_277(&Local_279, "pm_bh_goToGate", 1);
									Function_292(1);
								}
							}
							else if (Function_193(&iLocal_211))
							{
								Function_191(&iLocal_211);
							}
						}
						else if (IS_ACTOR_IN_VOLUME(Global_34573, bLocal_218))
						{
							if (IS_ACTOR_VALID(bLocal_44) && IS_ACTOR_ALIVE(bLocal_44))
							{
								if (IS_ACTOR_IN_VOLUME(bLocal_44, bLocal_218) || ACTORS_IN_RANGE(Global_34573, bLocal_44, 20.0f))
								{
									bVar3 = true;
								}
							}
						}
						if (!bVar3)
						{
							if ((IS_ACTOR_IN_VOLUME(Global_34573, bLocal_486) && Function_190(bLocal_44) != 8) || IS_ACTOR_IN_VOLUME(bLocal_44, bLocal_486))
							{
								bVar3 = true;
							}
						}
						if (iVar1 != 0 && bVar3 != 1)
						{
							bVar0 = false;
							while (bVar0 < 5)
							{
								Function_35(bLocal_24[bVar0]);
								bVar0++;
							}
							iVar1 = 1;
							if (iVar1 == 1)
							{
								if (IS_ACTOR_PLAYER(Global_34573))
								{
									SET_PLAYER_CONTROL(0, 0, 0, 0);
								}
								Function_189(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
								Function_188(Global_34573);
								Function_345(8);
							}
						}
					}
				}
			}
		}
	}
	return iLocal_235;
}

void Function_188(bool bParam0) //Position: 0x94EA / 38122
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_PLAYER(Global_34573))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
		}
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
	}
	return;
}

void Function_189(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x9516 / 38166
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

int Function_190(bool bParam0) //Position: 0x953F / 38207
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_state");
}

void Function_191(int iParam0) //Position: 0x955A / 38234
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_192(bool bParam0) //Position: 0x956E / 38254
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

bool Function_193(int iParam0) //Position: 0x959A / 38298
{
	return Function_409(*iParam0, 1);
}

int Function_194(vector3 vParam0, float fParam3) //Position: 0x95A7 / 38311
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	Function_107();
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_32(), 3, vParam0, Function_107(), fParam3, 1.0f, fParam3);
	if (!IS_VOLUME_VALID(bVar0))
	{
		return 0;
	}
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), Global_30616, 15, 1);
	iVar2 = 0;
	if (IS_OBJECTSET_VALID(bVar1))
	{
		LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
		iVar5 = GET_OBJECTSET_SIZE(bVar1);
		if (iVar5 < 0)
		{
			return iVar2;
		}
		bVar3 = false;
		while (bVar3 <= iVar5)
		{
			bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1);
			if (IS_OBJECT_VALID(bVar6))
			{
				bVar4 = GET_ACTOR_FROM_OBJECT(bVar6);
				if (IS_ACTOR_VALID(bVar4))
				{
					if (IS_ACTOR_ALIVE(bVar4))
					{
						if (!IS_ACTOR_HORSE(bVar4))
						{
							if (Function_196(bVar4))
							{
								if (bVar4 != Global_34573)
								{
									if (!IS_ACTOR_HOGTIED(bVar4))
									{
										if (!IS_ACTOR_IN_ACTORSET(bLocal_450, bVar4))
										{
											if (Function_195(bVar4))
											{
												SQUAD_JOIN(bVar4, bLocal_230);
											}
											else
											{
												SQUAD_JOIN(bVar4, bLocal_228);
											}
											if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar4)))
											{
												ADD_BLIP_FOR_ACTOR(bVar4, 322, 0, 2, 0);
											}
											ADD_ACTORSET_MEMBER(bLocal_450, bVar4);
											REFERENCE_ACTOR(bVar4);
										}
										iVar2++;
									}
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	bVar3 = false;
	while (bVar3 <= GET_ACTORSET_SIZE(bLocal_450))
	{
		bVar4 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar3);
		if (IS_ACTOR_VALID(bVar4))
		{
			if (!IS_ACTOR_IN_VOLUME(bVar4, bVar0))
			{
				Function_192(bVar4);
				REMOVE_ACTORSET_MEMBER(bLocal_450, bVar4);
				SQUAD_LEAVE(bVar4);
				DEREFERENCE_ACTOR(bVar4);
				RELEASE_ACTOR_AS_AMBIENT(bVar4);
			}
		}
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar1);
	return iVar2;
}

bool Function_195(bool bParam0) //Position: 0x9720 / 38688
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_196(bool bParam0) //Position: 0x9740 / 38720
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_38(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

void Function_197() //Position: 0x978B / 38795
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(bLocal_24[iVar0]))
		{
			if (iVar0 == 0)
			{
				TASK_CLEAR(bLocal_24[iVar0]);
				TASK_FACE_ACTOR(bLocal_24[iVar0], Global_34573, 1, 3212836864);
				TASK_PRIORITY_SET(bLocal_24[iVar0], 2);
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_24[iVar0], Global_34573, -1.0f, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_24[iVar0], 0);
			if (IS_MOVER_FROZEN(bLocal_24[iVar0]))
			{
				SET_MOVER_FROZEN(bLocal_24[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (iLocal_277 == Global_30679[1])
	{
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		bLocal_220[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, -2660.768f, 67.263f, 3428.706f, 0.0f, 0.0f, 0.0f, 5.0f, 4.0f, 5.0f);
		SET_OBJECT_POSITION(bLocal_24[0], -2660.768f, 67.263f, 3428.706f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[0], bLocal_220[0], 1, 1);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		bLocal_220[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, -2648.331f, 67.263f, 3403.011f, 0.0f, 314.982f, 0.0f, 10.0f, 4.0f, 5.0f);
		SET_OBJECT_POSITION(bLocal_24[1], -2645.699f, 67.263f, 3413.741f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[1], bLocal_220[1], 3, 0);
		SET_OBJECT_POSITION(bLocal_24[2], -2646.205f, 67.263f, 3411.177f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[2], bLocal_220[1], 3, 0);
		SET_OBJECT_POSITION(bLocal_24[3], -2641.76f, 67.263f, 3419.482f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[3], bLocal_220[1], 3, 0);
		SET_OBJECT_POSITION(bLocal_24[4], -2641.76f, 67.263f, 3419.482f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[2], bLocal_220[1], 3, 0);
		SET_OBJECT_POSITION(bLocal_24[5], -2641.76f, 67.263f, 3419.482f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[3], bLocal_220[1], 3, 0);
		TASK_CLEAR(bLocal_24[0]);
		TASK_PRIORITY_SET(bLocal_24[0], 3);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_24[0], 0.0f);
		GIVE_WEAPON_TO_ACTOR(bLocal_24[0], 40, 0.0f, 1, 1);
	}
	else if (iLocal_277 == Global_30707[1])
	{
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		bLocal_220[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 3, -710.131f, 63.247f, 3296.8f, 0.0f, 0.0f, 0.0f, 5.0f, 4.0f, 5.0f);
		SET_OBJECT_POSITION(bLocal_24[0], -714.085f, 63.247f, 3293.886f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[0], bLocal_220[0], 1, 1);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		bLocal_220[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, -721.489f, 63.247f, 3280.714f, 0.0f, 117.359f, 0.0f, 10.0f, 4.0f, 5.0f);
		SET_OBJECT_POSITION(bLocal_24[1], -723.78f, 63.247f, 3286.078f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[1], bLocal_220[1], 1, 1);
		SET_OBJECT_POSITION(bLocal_24[2], -721.978f, 63.247f, 3280.356f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[2], bLocal_220[1], 1, 1);
		SET_OBJECT_POSITION(bLocal_24[3], -727.102f, 63.247f, 3288.233f);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[3], bLocal_220[1], 1, 1);
		TASK_CLEAR(bLocal_24[0]);
		TASK_PRIORITY_SET(bLocal_24[0], 3);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_24[0], 0.0f);
		GIVE_WEAPON_TO_ACTOR(bLocal_24[0], 40, 0.0f, 1, 1);
	}
	return;
}

int Function_198() //Position: 0x9AE3 / 39651
{
	int iVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(bLocal_24[0]))
	{
		if (iLocal_277 != Global_30679[1] || iLocal_277 != Global_30707[1])
		{
			if (IS_ACTOR_VALID(bLocal_44))
			{
				Function_106(&Local_279, bLocal_44, 0);
			}
			Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhHndShake") };
			if (Function_108(iLocal_45[0]))
			{
				Function_107();
				bLocal_24[0] = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, iLocal_45[0], vLocal_445, Function_107());
				Function_106(&Local_279, bLocal_24[0], 1);
			}
			if (Function_108(iLocal_45[1]))
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGunner") };
				Function_107();
				bLocal_24[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_278, Vector(vLocal_439, iLocal_45[1], &Local_179) + Vector(1.0f, 0.0f, 1.0f), Function_107());
				Function_106(&Local_279, bLocal_24[1], 2);
			}
			if (Function_108(iLocal_45[2]))
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGunner") };
				Function_107();
				bLocal_24[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_278, Vector(vLocal_439, iLocal_45[2], &Local_179) + Vector(0.0f, 0.0f, 0.0f), Function_107());
				Function_106(&Local_279, bLocal_24[2], 3);
			}
			if (Function_108(iLocal_45[3]))
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGunner") };
				Function_107();
				bLocal_24[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_278, Vector(vLocal_439, iLocal_45[3], &Local_179) + Vector(0.0f, 0.0f, 1.0f), Function_107());
				Function_106(&Local_279, bLocal_24[3], 4);
			}
			if (Function_108(iLocal_45[4]))
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhWalker") };
				Function_107();
				bLocal_24[4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_278, Vector(vLocal_439, iLocal_45[4], &Local_179) + Vector(1.0f, 0.0f, 0.0f), Function_107());
				Function_106(&Local_279, bLocal_24[4], 5);
			}
			if (Function_108(iLocal_45[5]))
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhWalker") };
				Function_107();
				bLocal_24[5] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, bLocal_278, Vector(vLocal_439, iLocal_45[5], &Local_179) + Vector(1.0f, 0.0f, -1.0f), Function_107());
				Function_106(&Local_279, bLocal_24[5], 6);
			}
		}
		else
		{
			Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bountyDropGuy") };
			Function_107();
			bLocal_24[0] = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, iLocal_45[0], vLocal_439, Function_107());
			if (!IS_ACTOR_VALID(bLocal_24[0]))
			{
				LOG_ERROR("Problem creating dropOffGuy");
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(bLocal_24[iVar0]))
			{
				TASK_CLEAR(bLocal_24[iVar0]);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_24[iVar0], 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_24[iVar0], 0);
				Function_25(bLocal_24[iVar0], Global_34573, 0, 0);
				if (IS_ACTOR_ALIVE(bLocal_44))
				{
					Function_25(bLocal_24[iVar0], bLocal_44, 0, 1);
				}
				SQUAD_JOIN(bLocal_24[iVar0], bLocal_229);
				REFERENCE_ACTOR(bLocal_24[iVar0]);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_24[iVar0], 0.1f);
				MEMORY_ALLOW_TAKE_COVER(bLocal_24[iVar0], 0);
				iVar1 = 0;
				while (iVar1 < 5)
				{
					Function_25(bLocal_24[iVar0], bLocal_24[iVar1], 0, 0);
					iVar1++;
				}
			}
			iVar0++;
		}
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_229, 0);
		Function_199(&Local_279 + 540);
		Function_292(1);
		iLocal_236 = 1;
	}
	return 1;
}

void Function_199(var uParam0) //Position: 0x9DF6 / 40438
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		PRINTSTRING("Contents of OBJECTSET ");
		if (STRING_LENGTH(GET_OBJECT_NAME(*uParam0)) >= 0)
		{
			PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		}
		else
		{
			PRINTSTRING("n(no name)");
		}
		PRINTNL();
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(*uParam0) - 1))
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, *uParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				PRINTINT(bVar1);
				PRINTSTRING(") ");
				PRINTSTRING(GET_OBJECT_NAME(bVar0));
				PRINTNL();
			}
			bVar1++;
		}
		PRINTSTRING("Displayed ");
		PRINTINT(GET_OBJECTSET_SIZE(*uParam0));
		PRINTSTRING("n objects.");
	}
	return;
}

bool Function_200() //Position: 0x9EBA / 40634
{
	if (iLocal_241 == 0)
	{
		return 0;
	}
	if (!Function_201(&bLocal_156))
	{
		return 0;
	}
	return 1;
}

bool Function_201(bool bParam0) //Position: 0x9ED4 / 40660
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_205();
	iVar1 = 0;
	if (!Function_8(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_204(bParam0[iVar03], 8);
		}
		else if (Function_203())
		{
			iVar1 = 1;
			Function_204(bParam0[iVar03], 8);
		}
		Function_204(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_8(bParam0[iVar03], 4))
		{
			if (!Function_8(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_8(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_8(bParam0[03], 8) || iVar1));
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
				Function_204(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_8(bParam0[iVar03], 4))
		{
			if (!Function_8(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_204(bParam0[iVar03], 2);
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
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_204(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_204(bParam0[iVar03], 2);
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
	Function_202();
	return 1;
}

void Function_202() //Position: 0xA24F / 41551
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

bool Function_203() //Position: 0xA28F / 41615
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

void Function_204(var uParam0, int iParam1) //Position: 0xA2BA / 41658
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_205() //Position: 0xA2CB / 41675
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

void Function_206() //Position: 0xA30D / 41741
{
	int iVar0;
	
	if (iLocal_277 == Global_30679[1])
	{
		iLocal_45[0] = 107;
		iLocal_45[1] = 444;
		iLocal_45[2] = 375;
		iLocal_45[3] = 449;
		iLocal_45[4] = 4294967295;
		iLocal_45[5] = 4294967295;
	}
	else if (iLocal_277 == Global_30707[1])
	{
		iLocal_45[0] = 268;
		iLocal_45[1] = 531;
		iLocal_45[2] = 414;
		iLocal_45[3] = 394;
		iLocal_45[4] = 4294967295;
		iLocal_45[5] = 4294967295;
	}
	else
	{
		LOG_ERROR("Invalid bounty hunter AE");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Function_108(iLocal_45[iVar0]))
		{
			Function_207(&bLocal_156, iLocal_45[iVar0], 3, 0);
		}
		iVar0++;
	}
	iLocal_241 = 1;
	return;
}

var Function_207(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA3D5 / 41941
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_8(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_204(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_204(bParam0[iVar03], 8);
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

void Function_208(float fParam0) //Position: 0xA4A5 / 42149
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	
	if (IS_VOLUME_VALID(*fParam0))
	{
		DESTROY_VOLUME(*fParam0);
	}
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVolSet") };
	*fParam0 = CREATE_VOLUME_SET_IN_LAYOUT(bLocal_278, &Local_179);
	if (iLocal_277 == Global_30679[1])
	{
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -2641.491f, 71.655f, 3442.535f };
		fVar4 = 270.648f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -2659.466f, 71.655f, 3477.794f };
		fVar4 = 100.567f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -2730.855f, 71.498f, 3474.863f };
		fVar4 = 121.226f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -2697.938f, 71.656f, 3419.079f };
		fVar4 = 74.619f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
	}
	else
	{
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -716.347f, 66.753f, 3274.991f };
		fVar4 = 171.546f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -689.719f, 69.625f, 3321.432f };
		fVar4 = 51.372f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		vVar1 = { -683.206f, 66.391f, 3291.753f };
		fVar4 = 349.269f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar1, 0.0f, fVar4, 0.0f, 2.0f, 2.0f, 2.0f);
		ADD_TO_VOLUME_SET(*fParam0, bVar0);
	}
	return;
}

bool Function_209(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0xA70F / 42767
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, uParam8, iParam10, iParam13, 0, iParam14, iParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (iParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_210() //Position: 0xA7DA / 42970
{
	if (iLocal_277 == Global_30707[1])
	{
		vLocal_445 = { -714.085f, 63.247f, 3293.886f };
		vLocal_439 = { -723.146f, 63.247f, 3286.348f };
		fLocal_448 = 63.252f;
		vLocal_442 = { -733.258f, 63.02f, 3282.045f };
	}
	else if (iLocal_277 == Global_30679[1])
	{
		vLocal_445 = { -2660.768f, 67.263f, 3428.706f };
		vLocal_439 = { -2646.26f, 67.263f, 3414.39f };
		fLocal_448 = 314.213f;
		vLocal_442 = { -2639.8f, 67.263f, 3408.189f };
	}
	else
	{
		LOG_ERROR("Dropoff position not properly defined.");
	}
	return;
}

bool Function_211(int iParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8) //Position: 0xA8B2 / 43186
{
	bool bVar0;
	char* cVar1[64];
	bool bVar17;
	
	if (Function_431(iParam0))
	{
		bVar0 = FIND_NAMED_LAYOUT(bParam1);
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			if (bParam8 == 4294967295)
			{
				bParam8 = Global_26303.f_40 + 1;
				if (bParam8 == 6)
				{
					bParam8 = 7;
				}
			}
			if (bParam8 < 16)
			{
				strcpy(&cVar1, "$/fragments/p_pos_missing", 64);
				if (bParam8 <= 10)
				{
					stradd(&cVar1, "0", 64);
				}
				stradd(&cVar1, INT_TO_STRING(bParam8), 64);
				stradd(&cVar1, "x", 64);
				bVar17 = CREATE_PROP_IN_LAYOUT(bVar0, "mpNextPoster", &cVar1, vParam2, vParam5, 0);
				if (!IS_OBJECT_VALID(bVar17))
				{
					return "";
				}
				SET_PROP_AI_OBSTACLE_ENABLED(bVar17, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bVar17, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar17, 0);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar17), 1);
				return bVar17;
			}
		}
	}
	return "";
}

void Function_212() //Position: 0xA982 / 43394
{
	int iVar0;
	
	if (IS_ACTORSET_VALID(bLocal_450))
	{
		if (GET_ACTORSET_SIZE(bLocal_450) <= bLocal_176)
		{
			if (!Function_193(&iLocal_190))
			{
				Function_219(&iLocal_190, 10.0f);
			}
			else if (Function_217(&iLocal_190) < 5.0f)
			{
				PRINTNL();
				PRINTNL();
				PRINTSTRING("Number of Missing Person Zombies before spawning: ");
				PRINTINT(GET_ACTORSET_SIZE(bLocal_450));
				PRINTNL();
				iVar0 = Function_216();
				Function_213(iVar0, 0);
				PRINTNL();
				PRINTSTRING("Number of Missing Person Zombies after spawning: ");
				PRINTINT(GET_ACTORSET_SIZE(bLocal_450));
				PRINTNL();
				PRINTNL();
				Function_191(&iLocal_190);
			}
		}
	}
	return;
}

void Function_213(int iParam0, int iParam1) //Position: 0xAA5F / 43615
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 <= iParam0)
	{
		if (IS_OBJECTSET_VALID(bLocal_452))
		{
			Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieReAttacker") };
			bVar6 = Function_215(&bLocal_452);
			if (IS_OBJECT_VALID(bVar6))
			{
				bVar9 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % 12);
				if (bVar9 > 12)
				{
					bVar9 = 11;
				}
				bVar8 = iLocal_52[bVar9];
				GET_OBJECT_POSITION(bVar6, &vVar0);
				GET_OBJECT_ORIENTATION(bVar6, &vVar3);
				vVar0 = { (vVar0.x + RAND_FLOAT_RANGE(-0.5f, 0.5f)), vVar0.y, (vVar0.z + RAND_FLOAT_RANGE(-0.5f, 0.5f)) };
				bVar7 = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, bVar8, vVar0, vVar3);
			}
			if (IS_ACTOR_VALID(bVar7))
			{
				DECOR_SET_BOOL(bVar7, "bShopDontKill", true);
				REFERENCE_ACTOR(bVar7);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar7, 1);
				if (!IS_ACTOR_VALID(bVar7))
				{
				}
				Function_214(bVar7, 0);
				Function_35(GET_OBJECT_FROM_ACTOR(bVar7));
				ADD_ACTORSET_MEMBER(bLocal_450, bVar7);
				if (!Function_196(bVar7))
				{
					Function_33(bVar7, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				}
				if (!Function_195(bVar7))
				{
					SQUAD_JOIN(bVar7, bLocal_228);
				}
				else
				{
					SQUAD_JOIN(bVar7, bLocal_230);
				}
				SET_ACTOR_FACTION(bVar7, 32);
				if (WOULD_ACTOR_BE_VISIBLE(bVar8, &vVar0, 150.0f) || iParam1)
				{
					Function_34(bVar7, 1, 1);
				}
				PRINTSTRING("Created zombie of type: ");
				PRINTSTRING(GET_ACTOR_ENUM_STRING(bVar7));
				PRINTNL();
				PRINTSTRING("Which is variation ");
				PRINTINT(bVar9);
				PRINTSTRING(" of ");
				PRINTINT(11);
				PRINTNL();
				MEMORY_CONSIDER_AS_ENEMY(bLocal_44, bVar7);
				MEMORY_REPORT_POSITION_AUTO(bLocal_44, bVar7, 1);
			}
		}
		iVar10++;
	}
	return;
}

void Function_214(bool bParam0, bool bParam1) //Position: 0xAC21 / 44065
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "bhnt_state", bParam1);
	return;
}

bool Function_215(bool bParam0) //Position: 0xAC3F / 44095
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = "";
	if (IS_OBJECTSET_VALID(*bParam0))
	{
		iVar1 = GET_OBJECTSET_SIZE(*bParam0);
		if (iVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(iVar1)));
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, *bParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return bVar0;
}

int Function_216() //Position: 0xACA5 / 44197
{
	switch (Global_26303.f_12)
	{
		case 0x00000001:
			return RAND_INT_RANGE(1, 2);
		
		case 0x00000002:
			return RAND_INT_RANGE(1, 3);
		
		case 0x00000003:
			return RAND_INT_RANGE(2, 3);
		
		case 0x00000004:
			return RAND_INT_RANGE(2, 4);
		
		case 0x00000005:
			return RAND_INT_RANGE(3, 4);
		
		case 0x00000006:
			return RAND_INT_RANGE(3, 5);
		
		default:
	}
	return 2;
	return 1;
}

float Function_217(int iParam0) //Position: 0xAD00 / 44288
{
	if (Function_193(iParam0))
	{
		if (Function_218(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_218(int iParam0) //Position: 0xADC8 / 44488
{
	return Function_409(*iParam0, 2);
}

void Function_219(int iParam0, float fParam1) //Position: 0xADD5 / 44501
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_408(iParam0, 1);
	Function_3(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_220() //Position: 0xADF6 / 44534
{
	int iVar0;
	
	if (GET_ACTORSET_SIZE(bLocal_450) <= bLocal_176)
	{
		if (!Function_193(&iLocal_190))
		{
			Function_219(&iLocal_190, 4.0f);
		}
		else if (Function_217(&iLocal_190) < 5.0f)
		{
			iVar0 = Function_216();
			if (iLocal_177 != 4294967295)
			{
				if (StackVal && !Function_225(StackVal, IS_OBJECT_VALID(bLocal_261), Global_34573, vLocal_442, 150.0f))
				{
					if (!Local_493[iLocal_1774].f_12)
					{
						if (Function_225(StackVal, StackVal, Global_34573, Local_493[iLocal_1774], 150.0f))
						{
							PRINTNL();
							PRINTNL();
							PRINTSTRING("Number of Missing Person Zombies before spawning: ");
							PRINTINT(GET_ACTORSET_SIZE(bLocal_450));
							PRINTNL();
							Function_221(StackVal, StackVal, iVar0 * 2, Local_493[iLocal_1774], 0);
							PRINTNL();
							PRINTSTRING("Number of Missing Person Zombies after spawning: ");
							PRINTINT(GET_ACTORSET_SIZE(bLocal_450));
							PRINTNL();
							PRINTNL();
						}
					}
				}
			}
			else if (!iLocal_254)
			{
				if (StackVal && Function_225(StackVal, IS_OBJECT_VALID(bLocal_261), Global_34573, vLocal_442, 150.0f))
				{
					PRINTNL();
					PRINTNL();
					PRINTSTRING("Number of Missing Person Zombies before spawning: ");
					PRINTINT(GET_ACTORSET_SIZE(bLocal_450));
					PRINTNL();
					Function_221(StackVal, StackVal, iVar0 * 3, vLocal_442, 1);
					PRINTNL();
					PRINTSTRING("Number of Missing Person Zombies after spawning: ");
					PRINTINT(GET_ACTORSET_SIZE(bLocal_450));
					PRINTNL();
					PRINTNL();
				}
			}
			if (GET_ACTORSET_SIZE(bLocal_450) >= bLocal_176)
			{
				Function_191(&iLocal_190);
				if (iLocal_177 != 4294967295)
				{
					Local_493[iLocal_1774].f_12 = 1;
				}
				else
				{
					iLocal_254 = 1;
				}
			}
		}
	}
	return;
}

void Function_221(int iParam0, vector3 vParam1, bool bParam4) //Position: 0xAFFA / 45050
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	float fVar10;
	
	if (bParam4)
	{
		fVar10 = 30.0f;
	}
	else
	{
		fVar10 = 15.0f;
	}
	if (IS_VOLUME_VALID(bLocal_227))
	{
		GET_VOLUME_CENTER(bLocal_227, &vVar6);
		if (VDIST(vVar6, vParam1) < 25.0f)
		{
			DESTROY_VOLUME(bLocal_227);
		}
	}
	if (!IS_VOLUME_VALID(bLocal_227))
	{
		Function_107();
		bLocal_227 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, "AmbushVolume", 2, vParam1, Function_107(), fVar10, fVar10, fVar10);
	}
	iVar9 = 0;
	while (iVar9 <= iParam0)
	{
		if (Function_224())
		{
			vVar0 = { RAND_FLOAT_RANGE(-2.5f, 2.5f), 0.0f, RAND_FLOAT_RANGE(-4.0f, 4.0f) };
		}
		else
		{
			vVar0 = { RAND_FLOAT_RANGE(-10.0f, 10.0f), 0.0f, RAND_FLOAT_RANGE(-10.0f, 10.0f) };
		}
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vParam1, StackVal) };
		Function_222(StackVal, StackVal, vVar3, 0);
		iVar9++;
	}
}

void Function_222(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xB0D9 / 45273
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	
	if (bParam3)
	{
		fVar12 = 25.0f;
	}
	else
	{
		fVar12 = 5.0f;
	}
	if (FIND_GROUND_INTERSECTION(&uParam0, fVar12, &vVar0, &vVar6))
	{
		Function_223(StackVal, StackVal, vVar6);
		vVar3 = { StackVal, StackVal, Function_223(StackVal, StackVal, vVar6) };
		Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieSpawn") };
		bVar11 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % 12);
		if (bVar11 > 12)
		{
			bVar11 = 11;
		}
		bVar10 = iLocal_52[bVar11];
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, bVar10, vVar0, vVar3);
		DECOR_SET_BOOL(bVar9, "bShopDontKill", true);
		REFERENCE_ACTOR(bVar9);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar9, 1);
		if (!IS_ACTOR_VALID(bVar9))
		{
		}
		Function_214(bVar9, 0);
		Function_35(GET_OBJECT_FROM_ACTOR(bVar9));
		ADD_ACTORSET_MEMBER(bLocal_450, bVar9);
		if (!Function_196(bVar9))
		{
			Function_33(bVar9, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
		}
		if (!Function_195(bVar9))
		{
			SQUAD_JOIN(bVar9, bLocal_228);
		}
		else
		{
			SQUAD_JOIN(bVar9, bLocal_230);
		}
		SET_ACTOR_FACTION(bVar9, 32);
		if (!bParam3)
		{
			Function_34(bVar9, 1, 1);
		}
		PRINTSTRING("Created zombie of type: ");
		PRINTSTRING(GET_ACTOR_ENUM_STRING(bVar9));
		PRINTNL();
		PRINTSTRING("Which is variation ");
		PRINTINT(bVar11);
		PRINTSTRING(" of ");
		PRINTINT(11);
		PRINTNL();
		MEMORY_CONSIDER_AS_ENEMY(bLocal_44, bVar9);
		MEMORY_REPORT_POSITION_AUTO(bLocal_44, bVar9, 1);
		bVar11 = false;
		while (bVar11 <= bLocal_24)
		{
			if (IS_ACTOR_VALID(bLocal_24[bVar11]))
			{
				MEMORY_CONSIDER_AS_ENEMY(bLocal_24[bVar11], bVar9);
				MEMORY_REPORT_POSITION_AUTO(bLocal_24[bVar11], bVar9, 1);
			}
			bVar11++;
		}
		if (IS_VOLUME_VALID(bLocal_227))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar9, bLocal_227, 4, 1);
			DECOR_SET_BOOL(bVar9, "bhAmbusher", true);
		}
	}
}

vector3 Function_223(vector3 vParam0) //Position: 0xB2A7 / 45735
{
	vector3 vVar0;
	
	vVar0.x = (-1.0f * (ATAN2_DEGREE(vParam0.y, vParam0.z) - 90.0f));
	vVar0.f_4 = 0.0f;
	vVar0.f_8 = (ATAN2_DEGREE(vParam0.y, vParam0.x) - 90.0f);
	return StackVal, StackVal, vVar0;
}

bool Function_224() //Position: 0xB2DE / 45790
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_225(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xB2F1 / 45809
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_226(bParam0);
		if (VDIST(Function_226(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_226(bool bParam0) //Position: 0xB37B / 45947
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

void Function_227() //Position: 0xB3E5 / 46053
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (IS_VOLUME_VALID(bLocal_227))
	{
		GET_VOLUME_CENTER(bLocal_227, &vVar4);
		if (Function_229(StackVal, StackVal, Global_34573, vVar4) > 25.0f)
		{
			DESTROY_VOLUME(bLocal_227);
		}
		else if (iLocal_177 != 4294967295)
		{
			if (VDIST(vVar4, Local_493[iLocal_1774]) < 25.0f)
			{
				DESTROY_VOLUME(bLocal_227);
			}
		}
		else if (VDIST(vVar4, vLocal_442) < 25.0f)
		{
			DESTROY_VOLUME(bLocal_227);
		}
	}
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (!ACTORS_IN_RANGE(bVar1, bLocal_44, 65.0f) && !ACTORS_IN_RANGE(bVar1, Global_34573, 65.0f))
				{
					if (iLocal_177 != 4294967295)
					{
						if (!Function_225(StackVal, StackVal, bVar1, Local_493[iLocal_1774], 15.0f))
						{
							REMOVE_ACTORSET_MEMBER(bLocal_450, bVar1);
							Function_192(bVar1);
							SQUAD_LEAVE(bVar1);
							DEREFERENCE_ACTOR(bVar1);
							RELEASE_ACTOR(bVar1);
						}
					}
					else if (!Function_225(StackVal, StackVal, bVar1, vLocal_442, 25.0f))
					{
						REMOVE_ACTORSET_MEMBER(bLocal_450, bVar1);
						Function_192(bVar1);
						SQUAD_LEAVE(bVar1);
						DEREFERENCE_ACTOR(bVar1);
						RELEASE_ACTOR(bVar1);
					}
				}
				else if (IS_ACTOR_HOGTIED(bVar1))
				{
					REMOVE_ACTORSET_MEMBER(bLocal_450, bVar1);
					Function_192(bVar1);
					SQUAD_LEAVE(bVar1);
					DEREFERENCE_ACTOR(bVar1);
					RELEASE_ACTOR(bVar1);
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar1, "bhAmbusher"))
					{
						bVar2 = GET_LAST_ATTACKER(bVar1);
						if (IS_ACTOR_VALID(bVar2))
						{
							if (bVar2 != Global_34573 || SQUAD_GET(bVar2) != bLocal_229)
							{
								TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
								DECOR_REMOVE(bVar1, "bhAmbusher");
								if (IS_VOLUME_VALID(bLocal_227))
								{
									DESTROY_VOLUME(bLocal_227);
								}
							}
						}
						if (IS_VOLUME_VALID(bLocal_227))
						{
							if (Function_228(bVar1, bLocal_227, 15.0f))
							{
								TASK_OVERRIDE_SET_MOVETYPE(bVar1, 1);
							}
							else
							{
								TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
								DECOR_REMOVE(bVar1, "bhAmbusher");
							}
						}
						else
						{
							TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
							DECOR_REMOVE(bVar1, "bhAmbusher");
						}
					}
					if (iLocal_178 == 7)
					{
						if (IS_ACTOR_RIDING(Global_34573))
						{
							if (!iLocal_252)
							{
								if (Function_225(StackVal, StackVal, Global_34573, vLocal_439, 75.0f))
								{
									if (ACTORS_IN_RANGE(Global_34573, bVar1, 2.0f))
									{
										TASK_FLEE_ACTOR(GET_MOUNT(Global_34573), Global_34573, 20.0f, 10.0f, 0, 0, 0);
										if (IS_ACTOR_RIDING(bLocal_44))
										{
											TASK_DISMOUNT(bLocal_44, 1);
										}
										SET_ACTOR_HEALTH(bLocal_44, GET_ACTOR_MAX_HEALTH(bLocal_44));
										SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
										iLocal_252 = 1;
									}
								}
							}
						}
					}
					bVar3 = Function_190(bVar1);
					switch (bVar3)
					{
						case 0x00000000:
							Function_214(bVar1, 3);
							break;
						
						case 0x00000008:
						case 0x00000004:
							break;
						
						case 0x00000003:
							TASK_CLEAR(bVar1);
							Function_214(bVar1, 4);
							break;
						
						default:
							Function_214(bVar1, 0);
							break;
						}
				}
			}
			else if (!Function_190(bVar1) != 33)
			{
				if (IS_ACTOR_VALID(bVar1))
				{
					if (Function_193(&iLocal_190))
					{
						PRINTNL();
						if (Function_217(&iLocal_190) < 1.0f)
						{
							Function_219(&iLocal_190, (Function_217(&iLocal_190) - 1.0f));
						}
						else
						{
							Function_307(&iLocal_190);
						}
					}
					else
					{
						Function_307(&iLocal_190);
						Function_307(&iLocal_190);
					}
					PRINTSTRING("Time to next zombie attack: ");
					PRINTFLOAT((5.0f - Function_217(&iLocal_190)));
					PRINTNL();
					PRINTNL();
					REMOVE_ACTORSET_MEMBER(bLocal_450, bVar1);
					SQUAD_LEAVE(bVar1);
				}
				Function_214(bVar1, 33);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_228(bool bParam0, bool bParam1, float fParam2) //Position: 0xB78E / 46990
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_284(bParam1);
		Function_226(bParam0);
		if (VDIST(Function_284(bParam1), Function_226(bParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

float Function_229(bool bParam0, vector3 vParam1) //Position: 0xB818 / 47128
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_226(bParam0);
		vVar0 = { StackVal, StackVal, Function_226(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_230() //Position: 0xB892 / 47250
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (IS_ACTOR_VALID(bLocal_44))
	{
		if (IS_ACTOR_ALIVE(bLocal_44))
		{
			GET_POSITION(bLocal_44, &vVar0);
			if (iLocal_178 > 5)
			{
				if (Function_243(StackVal, StackVal, vVar0) == 1)
				{
					Function_345(6);
				}
			}
			if (IS_ACTOR_VALID(bLocal_44))
			{
				iVar8 = Function_190(bLocal_44);
			}
			if (IS_ACTOR_RIDING(bLocal_44))
			{
				if ((iVar8 == 28 && iVar8 == 26) && iVar8 == 30)
				{
					Function_214(bLocal_44, 28);
					iVar8 = 28;
				}
			}
			switch (iVar8)
			{
				case 0x00000000:
					TASK_PRIORITY_SET(bLocal_44, 1);
					iLocal_251 = 0;
					Function_268(bLocal_275);
					vVar3 = { StackVal, StackVal, Function_268(bLocal_275) };
					TELEPORT_ACTOR(bLocal_44, &vVar3, 1, 1, 1);
					if (IS_VOLUME_VALID(bLocal_219))
					{
						DESTROY_VOLUME(bLocal_219);
					}
					Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpDefend") };
					Function_70(bLocal_44);
					bLocal_219 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, Function_70(bLocal_44), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_44, bLocal_219, 4, 1);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_219);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_219);
					FIRE_STOP_FLAMES_IN_VOLUME(bLocal_219);
					RESET_RMPTFX_IN_VOLUME(bLocal_219);
					CLEAR_ACTOR_PROOF(bLocal_44, 16);
					bLocal_451 = Function_241(bLocal_44, bLocal_278);
					Function_214(bLocal_44, 1);
					break;
				
				case 0x00000001:
					Function_210();
					if (ACTORS_IN_RANGE(Global_34573, bLocal_44, 10.0f) && Function_240(bLocal_450, bLocal_44, 25.0f) >= 1)
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_44);
						if (IS_VOLUME_VALID(bLocal_219))
						{
							DESTROY_VOLUME(bLocal_219);
						}
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_44, 0.75f);
						Function_214(bLocal_44, 7);
					}
					else if (Function_229(StackVal, StackVal, bLocal_44, vLocal_439) < 50.0f)
					{
						TASK_CLEAR(bLocal_44);
						if (!IS_VOLUME_VALID(bLocal_219))
						{
							Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpDefend") };
							Function_70(bLocal_44);
							bLocal_219 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, Function_70(bLocal_44), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_44, bLocal_219, 4, 1);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_219);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_219);
						}
						TASK_FLEE_ACTORSET(bLocal_44, bLocal_450, 5.0f, 3.0f, 0, 1, 0);
						if (iLocal_178 > 4)
						{
							Function_239(bLocal_451);
						}
						if (iLocal_251)
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							if (!ACTORS_IN_RANGE(Global_34573, bLocal_44, 20.0f))
							{
								SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_44, "MISSING_PLAYER_DESERTS_P", 1, 0, 2, 0);
								Function_307(&iLocal_199);
							}
						}
						else
						{
							iLocal_251 = 1;
						}
						Function_292(1);
						Function_214(bLocal_44, 2);
					}
					else
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_44);
						if (IS_VOLUME_VALID(bLocal_219))
						{
							DESTROY_VOLUME(bLocal_219);
						}
						SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_44, "MISSING_SPRINT_LINE", 1, 0, 2, 0);
						Function_307(&iLocal_199);
						Function_214(bLocal_44, 7);
						Function_292(1);
					}
					TASK_PRIORITY_SET(bLocal_44, 1);
					ACTOR_END_FORCE_HOLSTER(bLocal_44);
					MEMORY_ALLOW_SHOOTING(bLocal_44, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_44, 0);
					GIVE_WEAPON_TO_ACTOR(bLocal_44, 40, 0, 1, 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_44, 0.1f);
					break;
				
				case 0x00000002:
					if (bLocal_256 && !iLocal_255)
					{
						if (Function_240(bLocal_450, bLocal_44, 35.0f) < 1)
						{
							if (!iLocal_257)
							{
								if (ACTORS_IN_RANGE(Global_34573, bLocal_44, 25.0f))
								{
									Function_278(&Local_279, 1);
									Function_277(&Local_279, "pm_bh_fnd3", 1);
									SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_44, "MISSING_PLAYER_NEAR_P", 1, 0, 2, 0);
									Function_307(&iLocal_199);
									iLocal_257 = 1;
								}
								else
								{
									Function_237(iVar8);
								}
							}
							else if (ACTORS_IN_RANGE(Global_34573, bLocal_44, 5.0f))
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_44);
								if (IS_VOLUME_VALID(bLocal_219))
								{
									DESTROY_VOLUME(bLocal_219);
								}
								SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_44, "MISSING_PLAYER_NEAR_P", 1, 0, 2, 0);
								Function_307(&iLocal_199);
								Function_214(bLocal_44, 7);
							}
							else
							{
								Function_237(iVar8);
							}
						}
						else
						{
							if (GET_TASK_STATUS(bLocal_44, 50) != 1)
							{
								TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_44, -1.0f);
							}
							Function_237(iVar8);
						}
					}
					else if (Function_240(bLocal_450, bLocal_44, 25.0f) < 1)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_44, 10.0f))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_44);
							if (IS_VOLUME_VALID(bLocal_219))
							{
								DESTROY_VOLUME(bLocal_219);
							}
							SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_44, "MISSING_PLAYER_NEAR_P", 1, 0, 2, 0);
							Function_307(&iLocal_199);
							Function_214(bLocal_44, 7);
						}
						else
						{
							Function_237(iVar8);
						}
					}
					else
					{
						if (GET_TASK_STATUS(bLocal_44, 87) != 1)
						{
							if (Function_240(bLocal_450, bLocal_44, 3.0f) >= 1)
							{
								TASK_FLEE_ACTORSET(bLocal_44, bLocal_450, 5.0f, 10.0f, 0, 1, 0);
							}
							else if (GET_TASK_STATUS(bLocal_44, 5) != 1)
							{
								bVar7 = Function_234(bLocal_44, bLocal_450);
								if (IS_ACTOR_VALID(bVar7))
								{
									TASK_KILL_CHAR(bLocal_44, bVar7);
								}
							}
						}
						Function_237(iVar8);
					}
					break;
				
				case 0x0000000E:
					if (Function_229(StackVal, StackVal, bLocal_44, vLocal_439) >= 10.0f)
					{
						TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_44, &vLocal_439, 0.0f, -1f);
						Function_214(bLocal_44, 17);
					}
					else if (GET_TASK_STATUS(bLocal_44, 61) != 1)
					{
						TASK_GO_NEAR_COORD(bLocal_44, &vLocal_439, 5.0f, 4);
					}
					break;
				
				case 0x00000011:
					if (GET_TASK_STATUS(bLocal_44, 18) != 1)
					{
						TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_44, &vLocal_439, 0.0f, -1f);
					}
					break;
				
				case 0x00000007:
					if (!iLocal_255)
					{
						Function_213(Function_216(), 1);
						iLocal_255 = 1;
						iLocal_257 = 1;
					}
					AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
					Function_233(bLocal_451);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_44, Global_34573, 5.0f, 4);
					TASK_PRIORITY_SET(bLocal_44, 1);
					Function_345(7);
					Function_214(bLocal_44, 8);
					break;
				
				case 0x00000008:
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						SET_ALLOW_RIDE_BY_AI(GET_MOUNT(Global_34573), 1);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_44, 1);
						if (IS_ACTOR_MALE(bLocal_44))
						{
							SET_ANIM_SET_FOR_ACTOR(bLocal_44, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(bLocal_44, "fema_ride_passenger", 0);
							AI_SET_ALLOWED_MOUNT_DIRECTIONS(bLocal_44, 79);
						}
						if (!iLocal_260)
						{
							SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_TELL_MISSING_PERSON_TO_GET_ON_HORSE", true, true, 2, 0, true, true);
							iLocal_260 = 1;
						}
						SET_MOUNTS_AS_PASSENGER(bLocal_44, 1);
						TASK_MOUNT(bLocal_44, GET_MOUNT(Global_34573), 0, 1, 4, 2147483647);
						TASK_PRIORITY_SET(bLocal_44, 1);
						Function_214(bLocal_44, 26);
					}
					else if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_44, GET_VEHICLE(Global_34573), 1, 4, 0);
						TASK_PRIORITY_SET(bLocal_44, 1);
						Function_214(bLocal_44, 27);
					}
					else if (!ACTORS_IN_RANGE(Global_34573, bLocal_44, 25.0f))
					{
						Function_214(bLocal_44, 1);
					}
					else
					{
						Function_237(iVar8);
					}
					break;
				
				case 0x0000001A:
					if (!IS_ACTOR_RIDING(Global_34573) || !ACTORS_IN_RANGE(Global_34573, bLocal_44, 25.0f))
					{
						Function_214(bLocal_44, 1);
					}
					else if (IS_ACTOR_RIDING(bLocal_44))
					{
						TASK_CLEAR(bLocal_44);
						ACTOR_START_FORCE_HOLSTER(bLocal_44, 1, 0);
						MEMORY_ALLOW_SHOOTING(bLocal_44, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_44, 1);
						Function_214(bLocal_44, 28);
						Function_345(7);
					}
					else if (ACTORS_IN_RANGE(Global_34573, bLocal_44, 3.0f))
					{
						Function_232();
					}
					break;
				
				case 0x0000001B:
					if (!IS_ACTOR_DRIVING_VEHICLE(Global_34573) || !ACTORS_IN_RANGE(Global_34573, bLocal_44, 25.0f))
					{
						Function_214(bLocal_44, 1);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(bLocal_44))
					{
						TASK_CLEAR(bLocal_44);
						ACTOR_START_FORCE_HOLSTER(bLocal_44, 1, 0);
						MEMORY_ALLOW_SHOOTING(bLocal_44, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_44, 1);
						Function_214(bLocal_44, 29);
						Function_345(7);
					}
					break;
				
				case 0x0000001C:
					iVar6 = 1;
					if (!IS_ACTOR_RIDING(Global_34573) || !IS_ACTOR_RIDING(bLocal_44))
					{
						TASK_DISMOUNT(bLocal_44, 1);
						TASK_PRIORITY_SET(bLocal_44, 1);
						Function_214(bLocal_44, 30);
					}
					else if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_44, "PassengerMount"))
					{
						Function_232();
					}
					else
					{
						Function_231();
						Function_237(iVar8);
					}
					break;
				
				case 0x0000001D:
					iVar6 = 1;
					if (!IS_ACTOR_RIDING(Global_34573))
					{
						TASK_VEHICLE_LEAVE(bLocal_44);
						TASK_PRIORITY_SET(bLocal_44, 1);
						Function_214(bLocal_44, 30);
					}
					else
					{
						Function_237(iVar8);
					}
					break;
				
				case 0x0000001E:
					if (IS_ACTOR_RIDING(bLocal_44))
					{
						if (GET_TASK_STATUS(bLocal_44, 12) != 1)
						{
							TASK_DISMOUNT(bLocal_44, 1);
							TASK_PRIORITY_SET(bLocal_44, 1);
						}
					}
					if (!IS_ACTOR_RIDING_VEHICLE(bLocal_44) && !IS_ACTOR_RIDING(bLocal_44))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_44, 1);
						Function_214(bLocal_44, 1);
					}
					break;
				
				default:
					Function_214(bLocal_44, 1);
					break;
				}
			}
	}
	if (iLocal_178 == 7)
	{
		if (IS_ACTOR_VALID(bLocal_44))
		{
			if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip") == 1)
			{
				if (iVar6 == 1)
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip", false);
					Function_292(1);
				}
			}
			else if (iVar6 == 0)
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip", true);
				Function_292(1);
			}
		}
		if (IS_VOLUME_VALID(bLocal_220[1]) && IS_VOLUME_VALID(bLocal_218))
		{
			if (!DECOR_CHECK_EXIST(bLocal_220[1], "bFallbackVolume"))
			{
				if (Function_229(StackVal, StackVal, bLocal_44, vLocal_439) > 15.0f)
				{
					if (iLocal_277 == Global_30679[1])
					{
						DESTROY_VOLUME(bLocal_220[1]);
						bLocal_220[1] = bLocal_218;
						DECOR_SET_BOOL(bLocal_220[1], "bFallbackVolume", true);
						iVar9 = 0;
						while (iVar9 <= bLocal_24)
						{
							if (iVar9 != 0)
							{
								SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[iVar9], bLocal_220[1], 4, 0);
							}
							iVar9++;
						}
					}
					else
					{
						DESTROY_VOLUME(bLocal_220[1]);
						bLocal_220[1] = bLocal_218;
						DECOR_SET_BOOL(bLocal_220[1], "bFallbackVolume", true);
						iVar9 = 0;
						while (iVar9 <= bLocal_24)
						{
							if (iVar9 != 0)
							{
								SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24[iVar9], bLocal_220[1], 4, 0);
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	if (!IS_ACTOR_VALID(bLocal_44))
	{
		iLocal_253 = 1;
		Function_345(10);
	}
	else if (GET_ACTOR_HEALTH(bLocal_44) >= 0.0f || GET_ACTOR_INCAPACITATED(bLocal_44))
	{
		iLocal_253 = 1;
		Function_26();
		Function_345(10);
	}
	else if (IS_ACTOR_CRIPPLED(bLocal_44, 3))
	{
		iLocal_253 = 1;
		Function_26();
		Function_345(10);
	}
	return;
}

void Function_231() //Position: 0xC234 / 49716
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (GET_TASK_STATUS(bVar1, 6) != 1 || GET_TASK_STATUS(bVar1, 84) != 1)
				{
					TASK_CLEAR(bVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_232() //Position: 0xC285 / 49797
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bLocal_44, 5.0f))
				{
					if (GET_TASK_STATUS(bVar1, 6) != 1)
					{
						TASK_STAND_STILL(bVar1, 3.0f, 0, 0);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_233(bool bParam0) //Position: 0xC2D9 / 49881
{
	if (IS_OBJECT_VALID(bParam0))
	{
		SET_CAMERA_FOCUS_ENABLED(bParam0, 0);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bParam0, 0);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bParam0, "pm_bh_look");
	}
	return;
}

var Function_234(var uParam0, bool bParam1) //Position: 0xC305 / 49925
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(bParam1) != 0 || !IS_ACTORSET_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0)))
		{
			fVar3 = Function_235(uParam0, GET_ACTOR_FROM_ACTORSET(bParam1, bVar0));
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
		return GET_ACTOR_FROM_ACTORSET(bParam1, bVar1);
	}
	return "";
}

float Function_235(bool bParam0, bool bParam1) //Position: 0xC38B / 50059
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_236(&uVar0, &uVar3);
	return iVar6;
}

var Function_236(var uParam0, int iParam1) //Position: 0xC3AA / 50090
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_237(int iParam0) //Position: 0xC3C8 / 50120
{
	bool bVar0;
	
	if (!Function_193(&iLocal_199))
	{
		Function_238(&iLocal_199, 10.0f);
	}
	else if (Function_294(&iLocal_199, 5.0f))
	{
		bVar0 = GET_LAST_ATTACK_TARGET(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar0)) > 1.0f)
			{
				if (ACTORS_IN_RANGE(bLocal_44, bVar0, 10.0f) || ACTORS_IN_RANGE(bLocal_44, Global_34573, 6.0f))
				{
					if (GET_ACTOR_HEALTH(bVar0) > 1.0f)
					{
						if (GET_ACTOR_FACTION(bVar0) == 32)
						{
							SAY_SINGLE_LINE_STRING(bLocal_44, "PLAYER_KILLS_ZOMBIE_P", true, true, 2, 0, true, false);
							Function_307(&iLocal_199);
						}
						else if (IS_ACTOR_HUMAN(bVar0))
						{
							SAY_SINGLE_LINE_STRING(bLocal_44, "PLAYER_KILLS_INNOCENT_P", true, true, 2, 0, true, false);
							Function_307(&iLocal_199);
						}
					}
				}
			}
		}
		bVar0 = GET_LAST_ATTACK_TARGET(bLocal_44);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar0)) > 1.0f)
			{
				if (GET_ACTOR_HEALTH(bVar0) > 1.0f)
				{
					if (GET_ACTOR_FACTION(bVar0) == 32)
					{
						SAY_SINGLE_LINE_STRING(bLocal_44, "SURVIVOR_TAUNTS_ZOMBIES_Z", true, true, 2, 0, true, false);
						Function_307(&iLocal_199);
					}
				}
			}
		}
		if (IS_ACTORSET_VALID(bLocal_450))
		{
			if (Function_240(bLocal_450, bLocal_44, 25.0f) > 1)
			{
				if (Function_294(&iLocal_199, 15.0f))
				{
					SAY_SINGLE_LINE_STRING(bLocal_44, "CRIES_OUT_IN_TEROR", true, true, 2, 0, true, false);
					Function_307(&iLocal_199);
				}
			}
			else if ((iParam0 != 28 || iParam0 != 29) || iParam0 != 8)
			{
				if (Function_294(&iLocal_199, 15.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_44, "MISSING_RETURN_LINE_P", "", false, 0, 0, 2, 0, 0, "GOSSIP_ABOUT_ZOMBIES", 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING(bLocal_44, "MISSING_RETURN_LINE_P", true, true, 2, 0, true, false);
					}
					Function_307(&iLocal_199);
				}
			}
		}
	}
	return;
}

void Function_238(int iParam0, float fParam1) //Position: 0xC5D7 / 50647
{
	if (!Function_193(iParam0))
	{
		Function_219(iParam0, fParam1);
	}
	return;
}

void Function_239(bool bParam0) //Position: 0xC5ED / 50669
{
	if (IS_OBJECT_VALID(bParam0))
	{
		SET_CAMERA_FOCUS_ENABLED(bParam0, 1);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bParam0, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bParam0, "pm_bh_look");
	}
	return;
}

int Function_240(bool bParam0, bool bParam1, int iParam2) //Position: 0xC619 / 50713
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(bParam0);
	iVar3 = 0;
	if (IS_ACTOR_VALID(bParam1))
	{
		if (IS_ACTOR_ALIVE(bParam1))
		{
			bVar2 = false;
			while (bVar2 < (iVar0 - 1))
			{
				bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_ALIVE(bVar1))
					{
						if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
						{
							iVar3++;
						}
					}
				}
				bVar2++;
			}
		}
	}
	return iVar3;
}

var Function_241(var uParam0, int iParam1) //Position: 0xC67B / 50811
{
	bool bVar0;
	
	bVar0 = Function_242(iParam1, "missingPersonFocus", uParam0, 50.0f, 100.0f);
	SET_CAMERA_FOCUS_PROMPT_TEXT(bVar0, "pm_bh_look");
	SET_CAMERA_FOCUS_ENABLED(bVar0, 0);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bVar0, 0);
	return bVar0;
}

var Function_242(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4) //Position: 0xC6C9 / 50889
{
	if (IS_ACTOR_RIDING(bParam2) || IS_ACTOR_RIDING_VEHICLE(bParam2))
	{
		return CREATE_CAMERA_FOCUS_POINT_OBJECT(uParam0, uParam1, bParam2, 0.0f, 0.6f, 0.0f, uParam3, uParam4);
	}
	return CREATE_CAMERA_FOCUS_POINT_OBJECT(uParam0, uParam1, bParam2, 0.0f, 1.6f, 0.0f, uParam3, uParam4);
}

int Function_243(vector3 vParam0) //Position: 0xC70D / 50957
{
	if (Global_3391 == 0)
	{
		if (VDIST(vParam0, Global_34574) < 280.0f && !WOULD_ACTOR_BE_VISIBLE(false, &vParam0, 3212836864))
		{
			Function_408(&Global_26303 + 8, 256);
			return 1;
		}
		if ((VDIST(vParam0, Global_34574) < 220.0f && Function_294(&iLocal_202, 25.0f)) && iLocal_249 != 1)
		{
			iLocal_249 = 0;
			Function_307(&iLocal_202);
			Function_278(&Local_279, 1);
			if (IS_ACTOR_HOGTIED(bLocal_44))
			{
				Function_277(&Local_279, "npm_bh_es3", 1);
			}
			else
			{
				Function_277(&Local_279, "npm_bh_es2", 1);
			}
		}
		else if (VDIST(vParam0, Global_34574) > 220.0f)
		{
			iLocal_249 = 1;
		}
	}
	return 0;
}

var Function_244() //Position: 0xC7CF / 51151
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 1000.0f;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		fVar3 = Function_229(StackVal, StackVal, Global_34573, Local_493[iVar04]);
		if (fVar3 > fVar2)
		{
			if (StackVal > Function_229(StackVal, fVar3, Global_34573, vLocal_442))
			{
				fVar2 = Function_229(StackVal, StackVal, Global_34573, Local_493[iVar04]);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (StackVal > Function_229(StackVal, Function_229(StackVal, StackVal, Global_34573, Local_493[iVar14]), Global_34573, vLocal_442))
	{
		return iVar1;
	}
	return 4294967295;
}

int Function_245(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xC853 / 51283
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
		fVar0 = Function_248(bParam0, Global_34573);
		if (!Function_409(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_246(bParam0);
				return 1;
			}
		}
		if (!Function_409(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_246(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_246(bParam0);
				return 1;
			}
		}
		if (!Function_409(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_246(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_246(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_409(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_246(bParam0);
				return 1;
			}
		}
		if (!Function_409(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_246(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_246(bool bParam0) //Position: 0xC9EA / 51690
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_247(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_247(bool bParam0) //Position: 0xCA1E / 51742
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_248(bool bParam0, bool bParam1) //Position: 0xCA35 / 51765
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

bool Function_249() //Position: 0xCB26 / 52006
{
	int iVar0;
	vector3 vVar1;
	
	strcpy(&Local_179, "zombieMeleeSquad", 32);
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Local_179) };
	bLocal_228 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_278, &Local_179));
	strcpy(&Local_179, "zombieShooterSquad", 32);
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Local_179) };
	bLocal_230 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_278, &Local_179));
	strcpy(&Local_179, "missingPersonSquad", 32);
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Local_179) };
	bLocal_229 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_278, &Local_179));
	strcpy(&Local_179, "nzombieset", 32);
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Local_179) };
	bLocal_450 = CREATE_ACTORSET_IN_LAYOUT(bLocal_278, &Local_179, 0);
	if (!IS_VOLUME_VALID(bLocal_217))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bLocal_217))
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_217, 15);
	}
	Function_268(bLocal_275);
	vVar1 = { StackVal, StackVal, Function_268(bLocal_275) };
	Function_292(1);
	Function_254();
	Function_268(bLocal_275);
	vVar1 = { StackVal, StackVal, Function_268(bLocal_275) };
	TELEPORT_ACTOR(bLocal_44, &vVar1, 1, 1, 1);
	if (!IS_OBJECTSET_VALID(bLocal_452))
	{
		iVar0 = 1;
		while (iVar0 < (bLocal_176 - 1))
		{
			Function_253();
			vVar1 = { StackVal, StackVal, Function_253() };
			TELEPORT_ACTOR(bLocal_31[iVar0], &vVar1, 1, 1, 1);
			iVar0++;
		}
	}
	Function_252(bLocal_228, Global_34573, 4);
	Function_252(bLocal_229, Global_34573, 0);
	Function_251(bLocal_228, bLocal_228, 0);
	Function_250(bLocal_229, 1, 3);
	Local_279.f_492 = 32;
	Function_292(1);
	return 1;
}

void Function_250(bool bParam0, int iParam1, int iParam2) //Position: 0xCC89 / 52361
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
				TASK_DRAW_HOLSTER_WEAPON(bVar1, iParam1);
				TASK_PRIORITY_SET(bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_251(bool bParam0, bool bParam1, int iParam2) //Position: 0xCCD8 / 52440
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_252(bParam1, bVar1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_252(bool bParam0, bool bParam1, int iParam2) //Position: 0xCD24 / 52516
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, iParam2);
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(bParam1, bVar1);
				MEMORY_CONSIDER_AS(bParam1, bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

vector3 Function_253() //Position: 0xCD92 / 52626
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	Function_268(bLocal_275);
	vVar3 = { StackVal, StackVal, Function_268(bLocal_275) };
	if (!Function_267(StackVal, StackVal, vVar3))
	{
		AMBIENT_SET_SEARCH_CENTER(vVar3);
		AMBIENT_SET_DISTANCE_FILTER(1.0f, 20.0f);
		if (AMBIENT_GET_POINT(&vVar0, 0))
		{
			return StackVal, StackVal, vVar0;
		}
		vVar0 = { (vVar3.x + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar3.y + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar3.z + RAND_FLOAT_RANGE(0.0f, 5.0f)) };
		vVar3 = { StackVal, StackVal, vVar0 };
		FIND_GROUND_INTERSECTION(&vVar3, 25.0f, &vVar0, &uVar6);
	}
	return StackVal, StackVal, vVar0;
}

int Function_254() //Position: 0xCE09 / 52745
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar15;
	
	Function_268(bLocal_275);
	vVar9 = { StackVal, StackVal, Function_268(bLocal_275) };
	Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpDefend") };
	bLocal_219 = CREATE_VOLUME_IN_LAYOUT(bLocal_278, &Local_179, 2, vVar9, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	FIRE_STOP_FLAMES_IN_VOLUME(bLocal_219);
	RESET_RMPTFX_IN_VOLUME(bLocal_219);
	iVar7 = 0;
	while (iVar7 < (bLocal_176 - 1))
	{
		bVar0 = iLocal_52[iVar7];
		if (!Function_108(bVar0) || bVar0 != 0)
		{
			bVar0 = Function_257(8, 0, 0, 4294967295, 1);
		}
		if (!IS_OBJECTSET_VALID(bLocal_452))
		{
			bVar13 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), bLocal_278, 4294967295, 0);
			bVar12 = Function_215(&bVar13);
			if (IS_OBJECT_VALID(bVar12))
			{
				GET_OBJECT_POSITION(bVar12, &vVar1);
				REMOVE_OBJECT_FROM_OBJECTSET(bVar12, bVar13);
			}
			else
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				FIND_GROUND_INTERSECTION(&vVar1, 40.0f, &vVar1, &vVar4);
			}
			DESTROY_OBJECTSET(bVar13);
			if (iVar7 == 0)
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("missingPerson") };
				vVar1 = { (vVar1.x + IntToFloat(iVar7 * 1)), (vVar1.y + IntToFloat(iVar7 * 1)), (vVar1.z + IntToFloat(iVar7 * 1)) };
				bLocal_31[iVar7] = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, Global_26303.f_20, vVar1, 0.0f, 0.0f, 0.0f);
			}
			else
			{
				Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieAttacker") };
				vVar1 = { (vVar1.x + IntToFloat(iVar7 * 1)), (vVar1.y + IntToFloat(iVar7 * 1)), (vVar1.z + IntToFloat(iVar7 * 1)) };
				bLocal_31[iVar7] = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, bVar0, vVar1, 0.0f, 0.0f, 0.0f);
			}
		}
		else if (iVar7 == 0)
		{
			Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("missingPerson") };
			Function_268(bLocal_275);
			vVar1 = { StackVal, StackVal, Function_268(bLocal_275) };
			bLocal_31[iVar7] = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, Global_26303.f_20, vVar1, 0.0f, 0.0f, 0.0f);
		}
		else
		{
			Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieAttacker") };
			bVar12 = Function_215(&bLocal_452);
			if (IS_OBJECT_VALID(bVar12))
			{
				GET_OBJECT_POSITION(bVar12, &vVar1);
				GET_OBJECT_ORIENTATION(bVar12, &vVar4);
				vVar1 = { (vVar1.x + RAND_FLOAT_RANGE(-0.5f, 0.5f)), vVar1.y, (vVar1.z + RAND_FLOAT_RANGE(-0.5f, 0.5f)) };
				bLocal_31[iVar7] = CREATE_ACTOR_IN_LAYOUT(bLocal_278, &Local_179, bVar0, vVar1, vVar4);
			}
		}
		DECOR_SET_BOOL(bLocal_31[iVar7], "bShopDontKill", true);
		REFERENCE_ACTOR(bLocal_31[iVar7]);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_31[iVar7], 1);
		if (!IS_ACTOR_VALID(bLocal_31[iVar7]))
		{
			return 0;
		}
		Function_214(bLocal_31[iVar7], 0);
		Function_35(GET_OBJECT_FROM_ACTOR(bLocal_31[iVar7]));
		if (iVar7 == 0)
		{
			Function_268(bLocal_275);
			vVar9 = { StackVal, StackVal, Function_268(bLocal_275) };
			TELEPORT_ACTOR(bLocal_44, &vVar9, 1, 1, 1);
			iVar8 = 32;
			Function_256(&Local_279, iVar8);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_31[iVar7]);
		if (iVar7 == 0)
		{
			bLocal_44 = bLocal_31[iVar7];
			MEMORY_ALLOW_SHOOTING(bLocal_44, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_44, 0);
			SET_ACTOR_FACTION(bLocal_44, 20);
			GIVE_WEAPON_TO_ACTOR(bLocal_44, 40, 0, 1, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_44, 0.1f);
			ACTOR_END_FORCE_HOLSTER(bLocal_44);
			SQUAD_JOIN(bLocal_44, bLocal_229);
			SQUAD_GOAL_ADD_COMBAT(bLocal_229, 0, 4294967295, 0);
			TASK_PRIORITY_SET(bLocal_44, 1);
			DECOR_SET_BOOL(bLocal_44, "BeLassoBounceOff", true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_44, 0, 0);
			MEMORY_CONSIDER_AS(bLocal_44, Global_34573, 0);
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bLocal_44, 3);
			SET_ACTOR_UNKILLABLE(bLocal_44, 1);
			SET_ACTOR_OVERHEALTH_MODE(bLocal_44, true);
			fVar14 = GET_ACTOR_MAX_HEALTH(bLocal_44);
			fVar15 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bLocal_44);
			SET_ACTOR_MAX_HEALTH(bLocal_44, (fVar14 * 1.8f));
			SET_ACTOR_HEALTH(bLocal_44, (fVar14 * 1.8f));
			fVar15 = (fVar15 * 1.6f);
			Function_255(bLocal_44, fVar15, 0x40400000, 0x40000000);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_44, 1.0f, 2.0f);
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_44, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_44, 1);
			UNK_0x261A4C0E(bLocal_44, 40, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_44, 28, 1.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_44, 0, 1);
			AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bLocal_44, 0, 1);
			SET_ACTOR_PROOF(bLocal_44, 16);
		}
		else
		{
			ADD_ACTORSET_MEMBER(bLocal_450, bLocal_31[iVar7]);
			if (!Function_196(bLocal_31[iVar7]))
			{
				Function_33(bLocal_31[iVar7], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
			}
			if (!Function_195(bLocal_31[iVar7]))
			{
				SQUAD_JOIN(bLocal_31[iVar7], bLocal_228);
			}
			else
			{
				SQUAD_JOIN(bLocal_31[iVar7], bLocal_230);
			}
			SET_ACTOR_FACTION(bLocal_31[iVar7], 32);
			MEMORY_CONSIDER_AS_ENEMY(bLocal_44, bLocal_31[iVar7]);
			MEMORY_REPORT_POSITION_AUTO(bLocal_44, bLocal_31[iVar7], 1);
		}
		SET_ACTOR_VOLUME_PARAMETERS(bLocal_31[iVar7], 1, 0);
		iVar7++;
	}
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_44, 0.1f);
	return 1;
}

void Function_255(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xD26F / 53871
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_256(var uParam0, int iParam1) //Position: 0xD2B6 / 53942
{
	uParam0->f_492 = iParam1;
	return;
}

bool Function_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xD2C3 / 53955
{
	return Function_258(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_258(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xD2DC / 53980
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_261(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_261(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_261(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_261(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_261(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_261(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_261(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_261(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_261(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_261(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_261(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_261(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_261(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_261(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_259(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_259(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0xD531 / 54577
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_260(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_260(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_260(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_260(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_260(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_260(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_260(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_260(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_260(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_260(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_260(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_260(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_260(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_260(Global_30750[13], bVar0);
	}
	return Function_261(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_260(bool bParam0, bool bParam1) //Position: 0xD682 / 54914
{
	int iVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_261(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xD740 / 55104
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
		Function_266();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_108(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_265(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_265(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_264(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_108(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_264(bVar0))
				{
					Function_263();
				}
				Function_262(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_108(bVar1))
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

void Function_262(int iParam0) //Position: 0xDA33 / 55859
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

void Function_263() //Position: 0xDAE7 / 56039
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

bool Function_264(bool bParam0) //Position: 0xDB21 / 56097
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

void Function_265(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xDB4E / 56142
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

void Function_266() //Position: 0xDC9F / 56479
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_263();
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
	Function_263();
	return;
}

bool Function_267(vector3 vParam0) //Position: 0xDCEA / 56554
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_268(bool bParam0) //Position: 0xDD02 / 56578
{
	vector3 vVar0;
	
	if (bParam0 == Global_30679[3])
	{
		vVar0 = { -3118.961f, 49.42f, 3286.439f };
	}
	else if (bParam0 == Global_30640[5])
	{
		vVar0 = { -1864.33f, 25.664f, 3306.285f };
	}
	else if (bParam0 == Global_30640[13])
	{
		vVar0 = { -1949.244f, 30.338f, 3469.343f };
	}
	else if (bParam0 == Global_30640[16])
	{
		vVar0 = { -2007.135f, 42.041f, 3046.983f };
	}
	else if (bParam0 == Global_30640[3])
	{
		vVar0 = { -2335.732f, 17.067f, 3169.393f };
	}
	else if (bParam0 == Global_30658[4])
	{
		vVar0 = { -3690.673f, 9.528f, 3468.674f };
	}
	else if (bParam0 == Global_30668[5])
	{
		vVar0 = { -1235.133f, 22.243f, 3208.729f };
	}
	else if (bParam0 == Global_30658[6])
	{
		vVar0 = { -4314.44f, 5.097f, 3743.612f };
	}
	else if (bParam0 == Global_30658[7])
	{
		vVar0 = { -4015.083f, 21.468f, 2398.392f };
	}
	else if (bParam0 == Global_30640[15])
	{
		vVar0 = { -2901.481f, 16.386f, 2946.03f };
	}
	else if (bParam0 == Global_30640[1])
	{
		vVar0 = { -3245.906f, 16.316f, 2715.521f };
	}
	else if (bParam0 == Global_30679[0])
	{
		vVar0 = { -3196.196f, 41.156f, 3738.181f };
	}
	else if (bParam0 == Global_30640[14])
	{
		vVar0 = { -2303.734f, 24.287f, 3008.607f };
	}
	else if (bParam0 == Global_30640[0])
	{
		vVar0 = { -2129.758f, 16.612f, 2630.102f };
	}
	else if (bParam0 == Global_30640[11])
	{
		vVar0 = { -2829.906f, 20.079f, 3076.325f };
	}
	else if (bParam0 == Global_30640[2])
	{
		vVar0 = { -2426.047f, 26.369f, 2120.875f };
	}
	else if (bParam0 == Global_30658[1])
	{
		vVar0 = { -3646.912f, 42.814f, 2093.528f };
	}
	else if (bParam0 == Global_30658[3])
	{
		vVar0 = { -4453.476f, 12.618f, 3223.782f };
	}
	else if (bParam0 == Global_30668[8])
	{
		vVar0 = { 123.738f, 72.413f, 2671.731f };
	}
	else if (bParam0 == Global_30693[3])
	{
		vVar0 = { -2233.617f, 23.09f, 4449.934f };
	}
	else if (bParam0 == Global_30707[3])
	{
		vVar0 = { 344.477f, 78.948f, 3455.223f };
	}
	else if (bParam0 == Global_30707[8])
	{
		vVar0 = { -83.019f, 53.032f, 2844.255f };
	}
	else if (bParam0 == Global_30693[11])
	{
		vVar0 = { -1146.471f, 28.072f, 4818.883f };
	}
	else if (bParam0 == Global_30693[8])
	{
		vVar0 = { -1450.569f, 19.691f, 4914.006f };
	}
	else if (bParam0 == Global_30693[12])
	{
		vVar0 = { -2150.069f, 18.748f, 4971.016f };
	}
	else if (bParam0 == Global_30707[2])
	{
		vVar0 = { -804.788f, 16.665f, 3699.215f };
	}
	else if (bParam0 == Global_30707[0])
	{
		vVar0 = { -403.609f, 27.601f, 3892.949f };
	}
	else if (bParam0 == Global_30693[2])
	{
		vVar0 = { -1470.671f, 17.202f, 3914.359f };
	}
	else if (bParam0 == Global_30707[4])
	{
		vVar0 = { -1323.309f, 82.925f, 3596.965f };
	}
	else if (bParam0 == Global_30707[5])
	{
		vVar0 = { -594.065f, 30.878f, 4006.953f };
	}
	else if (bParam0 == Global_30693[1])
	{
		vVar0 = { -1717.67f, 11.281f, 4220.109f };
	}
	else if (bParam0 == Global_30640[10])
	{
		vVar0 = { -2832.871f, 50.332f, 2416.219f };
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(StackVal, &vVar0);
	}
	return StackVal, StackVal, vVar0;
}

void Function_269(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0xE1AA / 57770
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_105(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_267(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_408(iParam0 + 584, 4);
	}
	else
	{
		Function_3(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_120(iParam0->f_624))
		{
			Function_276(iParam0->f_624, 1);
			Function_408(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_408(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_271(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_270(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_307(iParam0 + 572);
	}
	Function_307(iParam0 + 44);
	Function_28(0);
}

void Function_270(bool bParam0, bool bParam1) //Position: 0xE2F9 / 58105
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
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_271(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, float fParam5) //Position: 0xE33A / 58170
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_274(10.0f);
	Var14 = { StackVal, Function_274(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_108(iParam4) || iParam4 != 0)
		{
			bVar16 = Function_257(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = iParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_272(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(bParam3, Function_272(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_272(var uParam0, int iParam1) //Position: 0xE42C / 58412
{
	vector3 vVar0;
	
	if (!Function_273(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, iParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_273(int iParam0) //Position: 0xE56D / 58733
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_274(int iParam0) //Position: 0xE58F / 58767
{
	Function_275(iParam0, 10);
	return StackVal, Function_275(iParam0, 10);
}

struct<8> Function_275(var uParam0, int iParam1) //Position: 0xE59C / 58780
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_276(int iParam0, int iParam1) //Position: 0xE5B5 / 58805
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	iVar0 = Function_121(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_387(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_119(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_125(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

var Function_277(int iParam0, bool bParam1, int iParam2) //Position: 0xE65B / 58971
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(iParam0 + 56[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(iParam0 + 56[iVar24], bParam1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(bParam1))
	{
		iVar0 = 0;
	}
	strcpy(iParam0 + 56[iVar24], bParam1, 16);
	(*iParam0 + 112)[iVar2] = 0;
	(*iParam0 + 128)[iVar2] = iParam2;
	return iVar0;
}

void Function_278(bool bParam0, bool bParam1) //Position: 0xE6D4 / 59092
{
	int iVar0;
	
	if (bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (bParam0->f_56 - 1))
	{
		strcpy(bParam0 + 56[iVar04], "", 16);
		(*bParam0 + 112)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_108 = 0;
	return;
}

bool Function_279(int iParam0) //Position: 0xE71D / 59165
{
	if (Function_409(iParam0->f_584, 1024))
	{
		return 1;
	}
	return 0;
}

int Function_280(var uParam0, int iParam1) //Position: 0xE737 / 59191
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
	Function_282(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_281(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_281(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xE898 / 59544
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_282(bool bParam0) //Position: 0xE933 / 59699
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
						Function_283(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_229(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_283(iVar0);
						}
					}
					else if (Function_229(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_283(iVar0);
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
			Function_283(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_283(int iParam0) //Position: 0xEA94 / 60052
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

vector3 Function_284(bool bParam0) //Position: 0xEAF5 / 60149
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_285(int iParam0) //Position: 0xEB06 / 60166
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_286() //Position: 0xEB1B / 60187
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_268(bLocal_275);
	vVar3 = { StackVal, StackVal, Function_268(bLocal_275) };
	Function_304(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3, &vVar0);
	if (Function_287(&(Global_29008[Global_29005]), 32) && VMAG(vVar0) > 100.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_287(var uParam0, int iParam1) //Position: 0xEB5A / 60250
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_288(int iParam0) //Position: 0xEB76 / 60278
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_428(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = 4294967295;
		}
		else if (StackVal == 2)
		{
			iVar0 = iParam0;
		}
		else if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 6 != 5) != 3) != 4) != 7)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			LOG_ERROR("GET_DISTRICT_FROM_REGION - This area type needs to be defined");
			iVar0 = Global_29155[iParam010];
		}
	}
	return iVar0;
}

int Function_289(int iParam0) //Position: 0xEC4C / 60492
{
	return Function_290(iParam0);
}

int Function_290(int iParam0) //Position: 0xEC57 / 60503
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_428(iParam0))
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

bool Function_291() //Position: 0xECAF / 60591
{
	if (!Function_201(&bLocal_65))
	{
		return 0;
	}
	return 1;
}

void Function_292(int iParam0) //Position: 0xECC1 / 60609
{
	bool bVar0;
	
	if (IS_BLIP_VALID(bLocal_265))
	{
		REMOVE_BLIP(bLocal_265);
	}
	if (IS_BLIP_VALID(bLocal_266))
	{
		REMOVE_BLIP(bLocal_266);
	}
	if (IS_OBJECT_VALID(bLocal_264))
	{
		DESTROY_OBJECT(bLocal_264);
	}
	if (iParam0 == 1)
	{
		if (IS_VOLUME_VALID(bLocal_218))
		{
			if (!iLocal_258)
			{
				bLocal_266 = ADD_BLIP_FOR_OBJECT(GET_VOLUME_FROM_OBJECT(bLocal_218), 330, -1.0f, 3, 0);
				SET_BLIP_PRIORITY(bLocal_266, 3);
			}
			else if (iLocal_259)
			{
				bLocal_266 = ADD_BLIP_FOR_OBJECT(GET_VOLUME_FROM_OBJECT(bLocal_218), 330, -1.0f, 3, 0);
				SET_BLIP_PRIORITY(bLocal_266, 3);
			}
		}
		switch (iLocal_178)
		{
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				if (IS_VOLUME_VALID(bLocal_219))
				{
					bLocal_265 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(bLocal_219), 549, -1.0f, 3, 0);
					SET_BLIP_PRIORITY(bLocal_265, 3);
				}
				else if (IS_VOLUME_VALID(bLocal_217))
				{
					if (!IS_OBJECT_VALID(bLocal_264))
					{
						Function_268(bLocal_275);
						bLocal_264 = CREATE_POINT_IN_LAYOUT(bLocal_278, "targetBlip", Function_268(bLocal_275), 0.0f, 0.0f, 0.0f);
					}
					bLocal_265 = ADD_BLIP_FOR_OBJECT(bLocal_264, 549, 0f, 2, 0);
					SET_BLIP_PRIORITY(bLocal_265, 3);
				}
				if (IS_BLIP_VALID(bLocal_265) && iLocal_532 != 0)
				{
					SET_BLIP_BLINK(bLocal_265, 1, 0, 5f);
					Function_307(&iLocal_193);
					iLocal_532 = 1;
				}
				bVar0 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_26303.f_20);
				SET_BLIP_NAME(bLocal_265, bVar0);
				SET_BLIP_COLOR(bLocal_265, 0.34f, 0.58f, 0.74f, 1.0f);
				break;
			
			case 0x00000005:
				Function_252(bLocal_228, Global_34573, 4);
			
			case 0x00000004:
			case 0x00000006:
				if (IS_ACTOR_VALID(bLocal_44))
				{
					if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip") == 0)
					{
						DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip", true);
					}
					if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip") == 1)
					{
						bLocal_265 = ADD_BLIP_FOR_ACTOR(bLocal_44, 549, -1.0f, 3, 0);
						SET_BLIP_PRIORITY(bLocal_265, 3);
					}
				}
				if (IS_ACTOR_ALIVE(bLocal_44))
				{
					bVar0 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_26303.f_20);
					if (IS_BLIP_VALID(bLocal_265))
					{
						SET_BLIP_NAME(bLocal_265, bVar0);
						SET_BLIP_COLOR(bLocal_265, 0.34f, 0.58f, 0.74f, 1.0f);
					}
				}
				else if (IS_BLIP_VALID(bLocal_265))
				{
					SET_BLIP_NAME(bLocal_265, "npm_bh_tnm");
					SET_BLIP_IMPAIRMENT_MASK(bLocal_265, 0);
				}
				break;
			
			case 0x00000007:
				if (iLocal_245 == 0)
				{
					if (IS_ACTOR_VALID(bLocal_44))
					{
						if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip") == 0)
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip", true);
						}
						if (IS_ACTOR_ALIVE(bLocal_44))
						{
							if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_44), "bountyhunter_blip") == 1)
							{
								bLocal_265 = ADD_BLIP_FOR_ACTOR(bLocal_44, 549, -1.0f, 3, 0);
								bVar0 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_26303.f_20);
								SET_BLIP_NAME(bLocal_265, bVar0);
								SET_BLIP_COLOR(bLocal_265, 0.34f, 0.58f, 0.74f, 1.0f);
							}
						}
					}
				}
				break;
		}
		Function_293(1, 0x41200000);
	}
	return;
}

void Function_293(int iParam0, float fParam1) //Position: 0xEFC8 / 61384
{
	if (!Function_13())
	{
		switch (iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_294(int iParam0, float fParam1) //Position: 0xEFFF / 61439
{
	if (Function_193(iParam0))
	{
		if (Function_217(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_295(bool bParam0, int iParam1, int iParam2) //Position: 0xF01B / 61467
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(bParam0 + 4));
	bVar3 = VDIST(Global_34574, *(bParam0 + 16));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_167() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!bParam0->f_480 <= bParam0->f_404)
	{
		if (STRING_LENGTH(bParam0 + 336[bParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_296() //Position: 0xF0B9 / 61625
{
	int iVar0;
	char* cVar1[64];
	struct<8> Var17;
	
	bLocal_176 = Global_26303.f_16;
	if (bLocal_176 == 0)
	{
		bLocal_176 = 4;
		LOG_ERROR("0 BOUNTY ENEMIES?");
	}
	strcpy(&cVar1, "bh number of enemies = ", 64);
	stradd(&cVar1, INT_TO_STRING(bLocal_176), 64);
	Function_299(&iLocal_52, Global_26303.f_12);
	iVar0 = 0;
	while (iVar0 <= iLocal_52)
	{
		Function_207(&bLocal_65, iLocal_52[iVar0], 2, 0);
		PRINTSTRING("Adding to the bad guy enums: ");
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iLocal_52[iVar0]));
		PRINTNL();
		iVar0++;
	}
	Function_207(&bLocal_65, Global_26303.f_20, 2, 0);
	Function_297(&bLocal_65, "dlc_zombiepack_pmp", 10, 0);
	if (Global_26303.f_40 <= 16)
	{
		strcpy(&Var17, "$/fragments/p_pos_missing", 32);
		if (Global_26303.f_40 + 1 <= 10)
		{
			stradd(&Var17, "0", 32);
		}
		stradd(&Var17, INT_TO_STRING(Global_26303.f_40 + 1), 32);
		stradd(&Var17, "x", 32);
		Function_297(&bLocal_65, &Var17, 0, 0);
	}
	Function_297(&bLocal_65, "$/content/scripting/gringo/simplegringo/handoff", 1, 0);
	Function_297(&bLocal_65, "$/content/scripting/gringo/SimpleGringo/Locked_FootLocker", 1, 0);
	Function_207(&bLocal_65, 1129, 3, 0);
	return;
}

var Function_297(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF27C / 62076
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_298(bParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_204(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_298(var uParam0, int iParam1, int iParam2) //Position: 0xF2B4 / 62132
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_204(uParam0[iVar03], 4);
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

void Function_299(var uParam0, int iParam1) //Position: 0xF378 / 62328
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam1 == 0)
	{
		iParam1 = 3;
	}
	switch (iParam1)
	{
		case 0x00000001:
			(*uParam0)[iVar1] = 1216;
			iVar1++;
			(*uParam0)[iVar1] = 1214;
			iVar1++;
			(*uParam0)[iVar1] = 1215;
			iVar1++;
			break;
		
		case 0x00000002:
			(*uParam0)[iVar1] = 1204;
			iVar1++;
			(*uParam0)[iVar1] = 1219;
			iVar1++;
			(*uParam0)[iVar1] = 1218;
			iVar1++;
			(*uParam0)[iVar1] = 1217;
			iVar1++;
			break;
		
		case 0x00000003:
			(*uParam0)[iVar1] = 1204;
			iVar1++;
			(*uParam0)[iVar1] = 1205;
			iVar1++;
			(*uParam0)[iVar1] = 1220;
			iVar1++;
			(*uParam0)[iVar1] = 1221;
			iVar1++;
			break;
		
		case 0x00000004:
			(*uParam0)[iVar1] = 1222;
			iVar1++;
			(*uParam0)[iVar1] = 1209;
			iVar1++;
			(*uParam0)[iVar1] = 1214;
			iVar1++;
			(*uParam0)[iVar1] = 1215;
			iVar1++;
			(*uParam0)[iVar1] = 1216;
			iVar1++;
			(*uParam0)[iVar1] = 1217;
			iVar1++;
			break;
		
		case 0x00000005:
			(*uParam0)[iVar1] = 1208;
			iVar1++;
			(*uParam0)[iVar1] = 1209;
			iVar1++;
			(*uParam0)[iVar1] = 1222;
			iVar1++;
			(*uParam0)[iVar1] = 1221;
			iVar1++;
			(*uParam0)[iVar1] = 1218;
			iVar1++;
			(*uParam0)[iVar1] = 1219;
			iVar1++;
			break;
		
		case 0x00000006:
			(*uParam0)[iVar1] = 1208;
			iVar1++;
			(*uParam0)[iVar1] = 1209;
			iVar1++;
			(*uParam0)[iVar1] = 1222;
			iVar1++;
			(*uParam0)[iVar1] = 1204;
			iVar1++;
			(*uParam0)[iVar1] = 1220;
			iVar1++;
			(*uParam0)[iVar1] = 1221;
			iVar1++;
			break;
		
		default:
			LOG_ERROR("Unhandled Bounty Hunter Target Type");
			break;
	}
	while (iVar1 <= 12)
	{
		bVar0 = Function_300(uParam0);
		if (Function_108(bVar0))
		{
			(*uParam0)[iVar1] = bVar0;
			iVar1++;
		}
	}
	return;
}

var Function_300(int iParam0) //Position: 0xF5CD / 62925
{
	bool bVar0;
	
	bVar0 = Function_302(Global_30750[1], 4, 0, 1);
	if (Function_108(bVar0))
	{
		if (!Function_301(bVar0, iParam0))
		{
			return bVar0;
		}
		bVar0 = Function_302(Global_30750[0], 4, 0, 1);
		if (Function_108(bVar0))
		{
			if (!Function_301(bVar0, iParam0))
			{
				return bVar0;
			}
			bVar0 = Function_302(Global_30750[3], 4, 0, 1);
			if (Function_108(bVar0))
			{
				if (!Function_301(bVar0, iParam0))
				{
					return bVar0;
				}
				bVar0 = Function_302(Global_30750[2], 4, 0, 1);
				if (Function_108(bVar0))
				{
					return bVar0;
				}
			}
		}
	}
	return 4294967295;
}

bool Function_301(bool bParam0, int iParam1) //Position: 0xF662 / 63074
{
	int iVar0;
	
	if (bParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_302(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF694 / 63124
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0, 0.0f, 0.0f, 0.0f);
}

var Function_303(int iParam0) //Position: 0xF6AB / 63147
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(Global_30750[0]);
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(Global_30750[1]);
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(Global_30750[2]);
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(Global_30750[3]);
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(Global_30750[4]);
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(Global_30750[5]);
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(Global_30750[6]);
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(Global_30750[7]);
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(Global_30750[8]);
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(Global_30750[9]);
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(Global_30750[10]);
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(Global_30750[11]);
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(Global_30750[12]);
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(Global_30750[13]);
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

void Function_304(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF81D / 63517
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_305() //Position: 0xF840 / 63552
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	
	switch (iLocal_537)
	{
		case 0x00000000:
			if (iLocal_234 == 1)
			{
				if (IS_ACTOR_ALIVE(bLocal_44))
				{
					if (!IS_OBJECT_VALID(bVar0))
					{
						Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbirdpoint") };
						Function_70(bLocal_44);
						vVar1 = { StackVal, StackVal, Function_70(bLocal_44) };
						bVar0 = CREATE_POINT_IN_LAYOUT(bLocal_278, &Local_179, vVar1, 0.0f, 0.0f, 0.0f);
						iVar4 = 1;
					}
					if (!SQUAD_IS_VALID(bLocal_533))
					{
						Local_179 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbirdSquad") };
						bLocal_533 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_278, &Local_179));
						if (SQUAD_IS_VALID(bLocal_533))
						{
							Function_271(bLocal_278, bLocal_533, 3, bVar0, 1129, 0x41200000);
							Function_270(bLocal_533, 0);
						}
					}
					if (iVar4 == 1)
					{
						DESTROY_OBJECT(bVar0);
					}
					Function_307(&iLocal_534);
					iLocal_537 = 1;
				}
				else
				{
					iLocal_537 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_294(&iLocal_534, 7.0f))
			{
				if (SQUAD_IS_VALID(bLocal_533))
				{
					if (IS_ACTOR_VALID(bLocal_44))
					{
						Function_70(bLocal_44);
						vVar1 = { StackVal, StackVal, Function_70(bLocal_44) };
						bVar15 = false;
						while (bVar15 < (SQUAD_GET_SIZE(bLocal_533) - 1))
						{
							bVar14 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_533, bVar15);
							vVar11 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 9.0f) };
							ROTATE_VECTOR_XZ(&vVar11, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
							vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal) };
							FIND_GROUND_INTERSECTION(&vVar5, 100.0f, &vVar5, &uVar8);
							TASK_BIRD_LAND_AT_COORD(bVar14, &vVar5);
							bVar15++;
						}
						Function_306(bLocal_533, 1);
						Function_307(&iLocal_534);
					}
				}
				else
				{
					iLocal_537 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_9();
			iLocal_537 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_306(bool bParam0, int iParam1) //Position: 0xF9C9 / 63945
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_307(int iParam0) //Position: 0xFA04 / 64004
{
	Function_219(iParam0, 0.0f);
	return;
}

int Function_308(bool bParam0, bool bParam1, int iParam2) //Position: 0xFA10 / 64016
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_325(bParam0), Function_17()) == 0)
		{
			ADD_ITEM(Function_325(bParam0), Function_17(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_325(bParam0), Function_17(), iParam2);
	return 1;
}

int Function_309() //Position: 0xFA5B / 64091
{
	if (!Function_201(&bLocal_65))
	{
		return 0;
	}
	return 1;
}

int Function_310() //Position: 0xFA6D / 64109
{
	if (Global_3380)
	{
		return 0;
	}
	return 1;
}

void Function_311(bool bParam0, int iParam1, int iParam2) //Position: 0xFA7C / 64124
{
	if (iParam2 == 1)
	{
		if (Function_317(bParam0, iParam1, iParam2))
		{
			Function_316(bParam0);
		}
		else if (Function_315(bParam0, iParam1))
		{
			Function_313(bParam0);
		}
		if (Function_295(bParam0, iParam1, iParam2))
		{
			Function_312(bParam0);
		}
	}
	else if (Function_317(bParam0, iParam1, 0))
	{
		Function_316(bParam0);
	}
	else if (Function_295(bParam0, iParam1, 0))
	{
		Function_312(bParam0);
	}
	else if (Function_315(bParam0, iParam1))
	{
		Function_313(bParam0);
	}
	return;
}

void Function_312(int iParam0) //Position: 0xFAF6 / 64246
{
	char* cVar0[32];
	
	if (iParam0->f_480 <= iParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, iParam0 + 336[iParam0->f_4804], 32);
		if ((*iParam0 + 388)[iParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, iParam0 + 336[iParam0->f_4804], iParam0 + 404[iParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_153(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

var Function_313(bool bParam0) //Position: 0xFB90 / 64400
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_409(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_314(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_307(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_314(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_307(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_314(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFC75 / 64629
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_315(int iParam0, int iParam1) //Position: 0xFCEC / 64748
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_167())
	{
		iVar0 = 0;
	}
	else if (Function_294(iParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_316(int iParam0) //Position: 0xFD8F / 64911
{
	char* cVar0[32];
	
	if (iParam0->f_108 <= iParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, iParam0 + 56[iParam0->f_1084], 32);
		if ((*iParam0 + 112)[iParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7.5f, iParam0 + 56[iParam0->f_1084], iParam0 + 144[iParam0->f_1086], "", "", "", "", 0, (*iParam0 + 128)[iParam0->f_108], 0, 0);
		}
		else
		{
			Function_185(iParam0 + 56[iParam0->f_1084], 8.5f, (*iParam0 + 128)[iParam0->f_108], 2, 0, 0, 0, 0);
		}
		iParam0->f_108++;
	}
	return;
}

bool Function_317(int iParam0, int iParam1, int iParam2) //Position: 0xFE31 / 65073
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_167() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_108 <= iParam0->f_56)
	{
		if (STRING_LENGTH(iParam0 + 56[iParam0->f_1084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_318() //Position: 0xFEE8 / 65256
{
	Function_319(iLocal_257);
	return;
}

void Function_319(bool bParam0) //Position: 0xFEF4 / 65268
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_453)
	{
		if (Local_453[iVar08])
		{
			if (!IS_DOOR_VALID(Local_453[iVar08].f_24))
			{
				if (Function_431(StackVal))
				{
					if (!Local_453[iVar08].f_28)
					{
						Local_453[iVar08].f_24 = Function_322(StackVal, StackVal, Local_453[iVar08].f_12, Local_453[iVar08].f_16);
					}
					else
					{
						Local_453[iVar08].f_24 = Function_321(StackVal, StackVal, Local_453[iVar08].f_12, Local_453[iVar08].f_16);
					}
					if (IS_DOOR_VALID(Local_453[iVar08].f_24))
					{
					}
				}
			}
			else if (bParam0)
			{
				if (IS_DOOR_LOCKED(Local_453[iVar08].f_24))
				{
					Function_183(Local_453[iVar08].f_24, 1);
					OPEN_DOOR_DIRECTION(Local_453[iVar08].f_24, Local_453[iVar08].f_20);
					SET_DOOR_CURRENT_SPEED(Local_453[iVar08].f_24, 15.0f, 0.0f);
				}
			}
			else
			{
				if (!IS_DOOR_LOCKED(Local_453[iVar08].f_24))
				{
					Function_320(Local_453[iVar08].f_24, 1);
				}
				if (!IS_DOOR_CLOSED(Local_453[iVar08].f_24) && !IS_DOOR_CLOSING(Local_453[iVar08].f_24))
				{
					CLOSE_DOOR(Local_453[iVar08].f_24, 1.0f);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_320(bool bParam0, bool bParam1) //Position: 0x10050 / 65616
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

var Function_321(int iParam0, bool bParam1, char* cParam2, int iParam3) //Position: 0x100A4 / 65700
{
	bool bVar0;
	char* cVar1[8];
	char* cVar3[32];
	bool bVar11;
	
	if (!Function_428(iParam0))
	{
		return "";
	}
	bVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), bParam1);
	if (!IS_WORLD_SECTOR_LOADED(bVar0))
	{
		DESTROY_OBJECT(bVar0);
		return "";
	}
	strcpy(&cVar1, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar1, "0", 8);
	}
	straddi(&cVar1, iParam3, 8);
	memcpy(&cVar3, Global_29155[iParam010].f_20, 8);
	stradd(&cVar3, "_", 32);
	stradd(&cVar3, cParam2, 32);
	stradd(&cVar3, "*", 32);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bVar0, &cVar3, &cVar1);
	DESTROY_OBJECT(bVar0);
	if (!IS_OBJECT_VALID(bVar11))
	{
		PRINTSTRING("Door not found:");
		PRINTSTRING(&cVar3);
		PRINTSTRING(" door");
		PRINTSTRING(&cVar1);
		PRINTNL();
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar11);
}

var Function_322(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x10179 / 65913
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_428(iParam0))
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

void Function_323() //Position: 0x10215 / 66069
{
	SET_OBJECT_POSITION(bLocal_263, 0.0f, 20.0f, 0.0f);
	return;
}

void Function_324() //Position: 0x10229 / 66089
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = GET_GAME_CAMERA();
	vVar4 = { -0.18683f, -0.296919f, -0.621785f };
	GET_OBJECT_RELATIVE_POSITION(bVar0, vVar4, &vVar1);
	GET_OBJECT_ORIENTATION(bVar0, &vVar7);
	SET_OBJECT_POSITION(bLocal_263, vVar1);
	SET_OBJECT_ORIENTATION(bLocal_263, vVar7);
	SET_CAMERA_ASPECT_RATIO(bVar0, 0.0f);
	SET_CAMERA_FOV(bVar0, 42.97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(bVar0, 0.3f);
	SET_CAMERA_FAR_CLIP_PLANE(bVar0, 2800.0f);
	SET_CAMERA_COLLISION_PARAMETERS(bVar0, 0.3f, 1);
	SET_CAMERA_COLLISION_ENABLED(bVar0, 0);
	RESET_CAMERA_TARGET(bVar0, 0);
	RESET_CAMERA_TARGETDOF(bVar0);
	return;
}

var Function_325(bool bParam0) //Position: 0x102B1 / 66225
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

int Function_326() //Position: 0x103A2 / 66466
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	
	if (Function_341())
	{
		uVar0[0] = "BountyHunter Pass";
		uVar0[1] = "BountyHunter Fail";
		uVar0[2] = "BountyHunter Cancel";
		uVar0[3] = "BountyHunter Collect Proof";
		iVar5 = Function_327(&uLocal_267, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar5 == 0)
		{
			Function_14();
			Function_345(11);
		}
		else if (iVar5 == 1)
		{
			Function_14();
			Function_345(12);
		}
		else if (iVar5 == 2)
		{
			Function_14();
			Function_345(13);
		}
		else if (iVar5 == 3)
		{
			Function_14();
			iVar6 = 0;
			while (iVar6 < (bLocal_176 - 1))
			{
				KILL_ACTOR(bLocal_31[iVar6]);
				iVar6++;
			}
			Function_345(7);
			Function_292(1);
		}
		iLocal_175 = 0;
		return 1;
	}
	return 0;
}

var Function_327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x104AF / 66735
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_340(&Var15, &Var0);
	uVar20 = Function_339(*uParam1, &Var15);
	Function_338(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_337(uParam0, uVar20);
	Function_335(StackVal, uParam0, Var15.f_12);
	Function_333(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_332(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_329(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_328(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_328(int iParam0, int iParam1, int iParam2) //Position: 0x10576 / 66934
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_329(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x105D2 / 67026
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_331(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_331(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_328(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_330(bParam1->f_32);
	}
	else
	{
		Function_330(bParam1->f_32);
	}
	return 0;
}

void Function_330(bool bParam0) //Position: 0x10758 / 67416
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_331(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x10792 / 67474
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_332(int iParam0, var uParam1, int iParam2) //Position: 0x10840 / 67648
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_333(var uParam0, int iParam1, int iParam2) //Position: 0x10864 / 67684
{
	switch (Function_334())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_334() //Position: 0x10900 / 67840
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_335(var uParam0, int iParam1, int iParam2) //Position: 0x1093C / 67900
{
	switch (Function_336(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_336(int iParam0) //Position: 0x109D4 / 68052
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_17()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_409(*iParam0, 0x40000000))
		{
			Function_408(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_409(*iParam0, 0x40000000))
		{
			Function_408(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_3(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_17()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_409(*iParam0, 0x20000000))
		{
			Function_408(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_409(*iParam0, 0x20000000))
		{
			Function_408(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_3(iParam0, 0x20000000);
	return 0;
}

var Function_337(var uParam0, int iParam1) //Position: 0x10B1F / 68383
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_338(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x10C6E / 68718
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_339(int iParam0, int iParam1) //Position: 0x10D01 / 68865
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_340(var uParam0, var uParam1) //Position: 0x10D1B / 68891
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_341() //Position: 0x10D69 / 68969
{
	return Global_30920;
}

bool Function_342(bool bParam0) //Position: 0x10D72 / 68978
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_343() //Position: 0x10D91 / 69009
{
	if (Function_148(StackVal))
	{
		if ((((((*&Global_26401 + 36[0181][75])[3] < iLocal_526 || (*&Global_26401 + 36[0181][225])[3] < iLocal_527) || (*&Global_26401 + 36[0181][125])[3] < iLocal_528) || (*&Global_26401 + 36[1181][75])[3] < iLocal_529) || (*&Global_26401 + 36[1181][225])[3] < iLocal_530) || (*&Global_26401 + 36[1181][125])[3] < iLocal_531)
		{
			return 1;
		}
		iLocal_526 = (*&Global_26401 + 36[0181][75])[3];
		iLocal_527 = (*&Global_26401 + 36[0181][225])[3];
		iLocal_528 = (*&Global_26401 + 36[0181][125])[3];
		iLocal_529 = (*&Global_26401 + 36[1181][75])[3];
		iLocal_530 = (*&Global_26401 + 36[1181][225])[3];
		iLocal_531 = (*&Global_26401 + 36[1181][125])[3];
	}
	return 0;
}

bool Function_344() //Position: 0x10E8A / 69258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_26401.f_16 - 1))
	{
		if ((*&Global_26401 + 16)[iVar0] >= 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_345(int iParam0) //Position: 0x10EB8 / 69304
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	
	iVar1 = 1;
	if (!iLocal_178 != iParam0)
	{
		switch (iParam0)
		{
			case 0x00000001:
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				if (IS_VOLUME_VALID(bLocal_217))
				{
					bVar3 = GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_217));
				}
				if (IS_STRING_VALID(bVar3) && STRING_LENGTH(bVar3) < 0)
				{
					Function_384(bLocal_275);
					Function_278(&Local_279, 1);
					if (Function_409(StackVal, 16))
					{
						Function_277(&Local_279, "npm_bh_mt3", 1);
						Function_3(&Global_26303 + 8, 16);
					}
					else
					{
						Function_277(&Local_279, "npm_bh_mt2", 1);
					}
					strcpy(&Local_179, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(bLocal_217)), 32);
					Function_383(&Local_279, &Local_179, 0);
				}
				else if (!Function_342("npressDemo"))
				{
					if (Function_382())
					{
						Function_378(&Local_279, "pm_bh_h", 0);
					}
				}
				break;
			
			case 0x00000004:
				Function_239(bLocal_451);
				if (iLocal_277 == Global_30679[1])
				{
					AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				}
				else
				{
					AUDIO_MUSIC_FORCE_TRACK("MEX_ZMB_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				}
				Function_10(bLocal_228);
				SQUAD_GOALS_CLEAR(bLocal_228);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_228, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 1, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, bLocal_44, 2.0f, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 3, 3, 4294967295);
				TASK_WANDER(false, -1.0f);
				Function_10(bLocal_230);
				SQUAD_GOALS_CLEAR(bLocal_230);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_230, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_230, 0, 1, 1);
				TASK_TAUNT_ACTOR(0, bLocal_44, 10.0f, 25.0f, 0, -1.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_230, 1, 1, 4294967295);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, bLocal_44, 25.0f, 1);
				if (iLocal_237 == 0)
				{
					Function_278(&Local_279, 1);
					Function_277(&Local_279, "pm_bh_fnd1", 1);
					iLocal_237 = 1;
					if (iLocal_178 <= 4)
					{
						Function_9();
						Function_351(&Local_279);
						if (Function_341())
						{
							Function_14();
						}
						Function_307(&uLocal_187);
						if (IS_BLIP_VALID(bLocal_265))
						{
							SET_BLIP_BLINK(bLocal_265, 0, 0, 5f);
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_350();
				if (iLocal_239 == 0)
				{
					if (IS_ACTOR_ALIVE(bLocal_44))
					{
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_349() };
						PRINTSTRING(&Var4);
						PRINTSTRING("******");
						PRINTNL();
						SAY_SINGLE_LINE_STRING_OVER_PAIN(Global_34573, &Var4, 1, 1, 2, 0);
					}
					iLocal_239 = 1;
				}
				AUDIO_SET_PLAYER_MOOD(1, 0);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(bLocal_265))
				{
					SET_BLIP_BLINK(bLocal_265, 0, 0, 5f);
				}
				Function_348(1);
				Function_10(bLocal_228);
				SQUAD_GOALS_CLEAR(bLocal_228);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_228, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 0, 0, 1);
				TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
				if (!bLocal_256)
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 1, 0, 1);
					TASK_MELEE_ATTACK(false, bLocal_44, -1.0f);
				}
				else
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 1, 0, 1);
					TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
				}
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 2, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 7.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 3, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, bLocal_44, 7.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 4, 3, 4294967295);
				TASK_WANDER(false, -1.0f);
				Function_10(bLocal_228);
				SQUAD_GOALS_CLEAR(bLocal_230);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_230, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_230, 0, 3, 2);
				TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &uLocal_487, 0, 0, 0, 0, 0, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_230, 1, 3, 4294967295);
				TASK_FOLLOW_AND_ATTACK_OBJECT(false, bLocal_44, &uLocal_490, 0, 0, 0, 0, 0, 1);
				bVar0 = false;
				while (bVar0 <= GET_ACTORSET_SIZE(bLocal_450))
				{
					bVar2 = GET_ACTOR_FROM_ACTORSET(bLocal_450, bVar0);
					if (IS_ACTOR_VALID(bVar2))
					{
						Function_347(bVar2);
					}
					bVar0++;
				}
				break;
			
			case 0x00000007:
				AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				AUDIO_SET_PLAYER_MOOD(0, 0);
				SQUAD_GOALS_CLEAR(bLocal_228);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_228, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 0, 0, 1);
				TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 1, 0, 1);
				TASK_MELEE_ATTACK(false, bLocal_44, -1.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 2, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 5.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 3, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, bLocal_44, 5.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_228, 4, 3, 4294967295);
				TASK_WANDER(false, -1.0f);
				SQUAD_GOALS_CLEAR(bLocal_230);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_230, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_230, 0, 3, 1);
				TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &uLocal_487, 0, 0, 0, 0, 0, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_230, 1, 3, 4294967295);
				TASK_FOLLOW_AND_ATTACK_OBJECT(false, bLocal_44, &uLocal_490, 0, 0, 0, 0, 0, 1);
				CLEAR_JOURNAL_ENTRY(Global_26303.f_36);
				APPEND_JOURNAL_ENTRY(Global_26303.f_36, 0);
				if (iLocal_245 == 1)
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou2", 0, 0, 0);
				}
				else
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_26303.f_36, "pm_bh_jou3", 0, 0, 0);
				}
				if (Function_382())
				{
					Function_180(&Local_279);
					Function_378(&Local_279, "pm_bh_fndhelp", 0);
				}
				Function_278(&Local_279, 1);
				Function_277(&Local_279, "pm_bh_oh_z", 1);
				strcpy(&Local_179, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)), 32);
				Function_383(&Local_279, &Local_179, 0);
				break;
			
			case 0x0000000B:
				Function_351(&Local_279);
			
			case 0x00000008:
				iLocal_235 = 1;
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				if (IS_ACTOR_ALIVE(Global_34573))
				{
					DELETE_ITEM(Function_325(72), Global_34573, 0);
				}
				if (iLocal_245 == 0)
				{
					Function_346(&Local_279, 1);
				}
				else
				{
					Function_346(&Local_279, 0);
				}
				if (iParam0 == 8)
				{
					iLocal_248 = 1;
				}
				else
				{
					bVar0 = false;
					while (bVar0 < (bLocal_176 - 1))
					{
						if (IS_ACTOR_ALIVE(bLocal_31[bVar0]) && IS_ACTOR_VALID(bLocal_31[bVar0]))
						{
							if (bVar0 == 0)
							{
								REMOVE_OBJECT_FROM_ATTACHMENT(bLocal_31[bVar0]);
								FREE_FROM_HOGTIE(bLocal_31[bVar0]);
								DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(bLocal_31[bVar0]), "sHogtie", "kneel");
								HOGTIE_ACTOR(bLocal_31[bVar0]);
								DELETE_ACCESSORY("ANKLE_BIND", bLocal_31[bVar0]);
							}
							RELEASE_ACTOR_AS_AMBIENT(bLocal_31[bVar0]);
						}
						bVar0++;
					}
				}
				iVar1 = 0;
				iLocal_231 = 2;
				iLocal_23 = 5;
				break;
			
			case 0x00000009:
				if (!Function_342("npressDemo"))
				{
					Function_278(&Local_279, 1);
					Function_277(&Local_279, "npm_bh_diw", 1);
				}
				Function_311(&Local_279, 0, 0);
				Function_307(&iLocal_196);
				iLocal_231 = 4;
				iLocal_23 = 5;
				iVar1 = 0;
				break;
			
			case 0x0000000C:
				Function_351(&Local_279);
			
			case 0x0000000A:
				Function_278(&Local_279, 1);
				if (iLocal_240 == 1)
				{
				}
				else if (iLocal_238 == 1)
				{
					Function_277(&Local_279, "pm_bh_alaw", 1);
				}
				else if (iLocal_253)
				{
					if (GET_LAST_ATTACKER(bLocal_44) == Global_34573)
					{
						Function_277(&Local_279, "pm_bh_dead0", 1);
					}
					else
					{
						Function_277(&Local_279, "pm_bh_dead1", 1);
					}
				}
				else if (IS_ACTOR_HOGTIED(bLocal_44))
				{
					Function_277(&Local_279, "npm_bh_es0", 1);
				}
				else
				{
					Function_277(&Local_279, "npm_bh_es1", 1);
				}
				Function_311(&Local_279, 0, 1);
				iLocal_233 = 0;
				iLocal_231 = 3;
				iLocal_23 = 5;
				iVar1 = 0;
				break;
			
			case 0x00000006:
				Function_278(&Local_279, 1);
				if (IS_ACTOR_HOGTIED(bLocal_44))
				{
					Function_277(&Local_279, "npm_bh_es0", 1);
				}
				else
				{
					Function_277(&Local_279, "npm_bh_es1", 1);
				}
				Function_311(&Local_279, 0, 0);
				iLocal_233 = 1;
				iLocal_231 = 3;
				iLocal_23 = 5;
				iVar1 = 0;
				break;
			
			case 0x0000000D:
				iLocal_23 = 5;
				iLocal_231 = 4;
				break;
			
			default:
				break;
		}
		iLocal_178 = iParam0;
		Function_292(1);
	}
	return iVar1;
}

void Function_346(int iParam0, int iParam1) //Position: 0x11624 / 71204
{
	if (iParam1 == 0)
	{
		Function_408(iParam0 + 584, 16384);
	}
	else
	{
		Function_3(iParam0 + 584, 16384);
	}
	return;
}

void Function_347(bool bParam0) //Position: 0x11649 / 71241
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		if (bParam0 != bLocal_44)
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
			bVar0 = GET_CURRENT_GRINGO(bParam0);
			if (IS_GRINGO_VALID(bVar0))
			{
				GRINGO_DEACTIVATE(bVar0);
			}
			Function_214(bParam0, 16);
			MEMORY_GET_MUST_IDENTIFY(bParam0, Global_34573);
			SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
			SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
		}
	}
	return;
}

void Function_348(int iParam0) //Position: 0x1169A / 71322
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_13())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

struct<64> Function_349() //Position: 0x116CF / 71375
{
	char* cVar0[64];
	
	switch (Global_26303.f_20)
	{
		case 0x00000009:
			strcpy(&cVar0, "FIND_Asian_Male_Laborer01", 64);
			break;
		
		case 0x00000018:
			strcpy(&cVar0, "FIND_Black_Female_Traveler01", 64);
			break;
		
		case 0x0000001D:
			strcpy(&cVar0, "FIND_Black_Male_FactoryWorker02", 64);
			break;
		
		case 0x00000038:
			strcpy(&cVar0, "FIND_Caucasian_Female_Farmer10", 64);
			break;
		
		case 0x00000044:
			strcpy(&cVar0, "FIND_Caucasian_Female_Prostitute04", 64);
			break;
		
		case 0x00000059:
			strcpy(&cVar0, "FIND_Caucasian_Male_Businessman02", 64);
			break;
		
		case 0x0000005F:
			strcpy(&cVar0, "FIND_Caucasian_Male_Businessman07", 64);
			break;
		
		case 0x00000060:
			strcpy(&cVar0, "FIND_Caucasian_Male_DocksWorker01", 64);
			break;
		
		case 0x000000A8:
			strcpy(&cVar0, "FIND_Caucasian_Male_Laborer26", 64);
			break;
		
		case 0x000000A9:
			strcpy(&cVar0, "FIND_Caucasian_Male_Laborer27", 64);
			break;
		
		case 0x000000ED:
			strcpy(&cVar0, "FIND_Hispanic_Female_Farmer01", 64);
			break;
		
		case 0x000000F5:
			strcpy(&cVar0, "FIND_Hispanic_Female_Prostitute01", 64);
			break;
		
		case 0x0000010A:
			strcpy(&cVar0, "FIND_Hispanic_Male_Doctor01", 64);
			break;
		
		case 0x0000010D:
			strcpy(&cVar0, "FIND_Hispanic_Male_Farmer06", 64);
			break;
		
		case 0x00000114:
			strcpy(&cVar0, "FIND_Hispanic_Male_Generic_Shopkeeper04", 64);
			break;
		
		case 0x00000121:
			strcpy(&cVar0, "FIND_Hispanic_Male_Laborer05", 64);
			break;
		
		default:
			strcpy(&cVar0, "GENERIC_FIND_MISSING_PERSONS", 64);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_350() //Position: 0x119F4 / 72180
{
	if (Global_26303.f_28 == Global_30679[1])
	{
		Local_493[04] = { -2734.201f, 52.597f, 3232.82f };
		Local_493[14] = { -2428.155f, 33.298f, 3199.148f };
		Local_493[24] = { -3292.178f, 35.991f, 3131.298f };
		Local_493[34] = { -2827.205f, 65.714f, 3581.248f };
		Local_493[44] = { -2795.279f, 36.54f, 3119.951f };
		Local_493[54] = { -2956.503f, 46.211f, 3281.013f };
	}
	else
	{
		Local_493[04] = { -785.108f, 12.801f, 3732.498f };
		Local_493[14] = { -502.108f, 17.467f, 3873.661f };
		Local_493[24] = { -1222.832f, 68.909f, 3753.275f };
		Local_493[34] = { 390.536f, 37.491f, 3279.565f };
		Local_493[44] = { -1598.714f, 25.715f, 3725.918f };
		Local_493[54] = { -1191.45f, 38.123f, 3360.997f };
		Local_493[64] = { -1316.214f, 13.794f, 4112.835f };
	}
	return;
}

void Function_351(int iParam0) //Position: 0x11B36 / 72502
{
	if (Function_409(iParam0->f_584, 4))
	{
		Function_377();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_348(1);
	if (Function_409(iParam0->f_584, 32))
	{
		if (Function_120(iParam0->f_624))
		{
			Function_376(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_111(iParam0, 0);
	}
	Function_408(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_409(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_352(iParam0, 1);
	return;
}

void Function_352(int iParam0, int iParam1) //Position: 0x11BB7 / 72631
{
	char* cVar0;
	
	if (iParam0->f_620 != 0 && iParam1 != 1)
	{
		iParam0->f_620 = iParam1;
	}
	else if (iParam0->f_620 == 1)
	{
		iParam0->f_620 = iParam1;
		if (iParam0->f_488 != 4294967295)
		{
			if (iParam0->f_620 == 2)
			{
				cVar0 = Function_375(iParam0);
				if ((cVar0 == 4294967295 && cVar0 == 0) && Function_374(iParam0) != 1)
				{
					Function_372(iParam0->f_488, cVar0, 1);
				}
				if (iParam0->f_484 != 1 || iParam0->f_484 != 0)
				{
					Function_369(200, 1, 0);
				}
				else
				{
					Function_356(50, 1, 0);
				}
				if (iParam0->f_332 > 0)
				{
					Function_355(iParam0->f_332, 1);
				}
				else
				{
					Function_353(iParam0->f_332, 1);
				}
			}
			else if (iParam0->f_620 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_353(bool bParam0, bool bParam1) //Position: 0x11C8C / 72844
{
	bool bVar0;
	
	bVar0 = Function_133(0);
	if ((Function_133(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_354(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_133(0));
	return 1;
}

int Function_354(int iParam0, bool bParam1, int iParam2) //Position: 0x11D1C / 72988
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
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_355(bool bParam0, bool bParam1) //Position: 0x11F17 / 73495
{
	bool bVar0;
	
	bVar0 = Function_133(0);
	if ((Function_133(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_48(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_133(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_48(597, bParam0, 0, 0);
	}
	if ((Function_133(597) + Function_133(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_356(int iParam0, bool bParam1, bool bParam2) //Position: 0x11FE2 / 73698
{
	int iVar0;
	bool bVar1;
	
	if (Function_368(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_141())
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
	iVar0 = Function_133(3);
	Function_365();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_363(3, bVar1);
		if (!bParam2)
		{
			if (!Function_166(Global_76848, 4))
			{
				Function_161(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_48(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_58(3));
	iVar0 = Function_133(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_358(4, Function_362(Global_12976.f_156), 1);
				Function_357(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_358(4, Function_362(Global_12976.f_156), 1);
				Function_357(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_358(4, Function_362(Global_12976.f_156), 1);
				Function_357(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_358(4, Function_362(Global_12976.f_156), 1);
				Function_357(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_358(4, Function_362(Global_12976.f_156), 1);
				Function_357(Global_12976.f_152, Global_12976.f_156);
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

void Function_357(int iParam0, int iParam1) //Position: 0x121B1 / 74161
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

int Function_358(int iParam0, char* cParam1, bool bParam2) //Position: 0x1240F / 74767
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
	Function_135(iParam0, cParam1, 0, 1);
	iVar1 = Function_359();
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

int Function_359() //Position: 0x12594 / 75156
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
	Function_360();
	return 0;
}

void Function_360() //Position: 0x12633 / 75315
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
		Function_361(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_361(int iParam0) //Position: 0x126E2 / 75490
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

var Function_362(int iParam0) //Position: 0x12740 / 75584
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

int Function_363(int iParam0, bool bParam1) //Position: 0x127CF / 75727
{
	bool bVar0;
	int iVar1;
	
	Function_48(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_364(iParam0, 4294967295);
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
	iVar1 = Function_359();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_364(int iParam0, int iParam1) //Position: 0x1296C / 76140
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

void Function_365() //Position: 0x129AD / 76205
{
	Function_367(3, 0.0f);
	Function_366(3, 10000.0f);
	return;
}

int Function_366(int iParam0, int iParam1) //Position: 0x129C3 / 76227
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_367(int iParam0, int iParam1) //Position: 0x12A03 / 76291
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_368(int iParam0) //Position: 0x12A43 / 76355
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_369(int iParam0, bool bParam1, bool bParam2) //Position: 0x12A52 / 76370
{
	int iVar0;
	bool bVar1;
	
	if (Function_368(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_141())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_133(1);
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
			Function_363(1, bVar1);
			if (!bParam2)
			{
				if (!Function_166(Global_76848, 1))
				{
					Function_161(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_371(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_166(Global_76848, 2))
				{
					Function_161(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_48(1, bVar1, 0, 0);
	}
	else
	{
		Function_354(1, (4294967295 * bVar1), 0);
	}
	if (Function_133(1) <= 4294962296)
	{
		Function_137(1, 4294962296, 0);
	}
	else if (Function_133(1) >= 5000)
	{
		Function_137(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_58(1));
	iVar0 = Function_133(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_358(2, Function_370(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_358(2, Function_370(Global_12976.f_152), 0);
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
				Function_358(2, Function_370(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_358(2, Function_370(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_358(2, Function_370(Global_12976.f_152), 1);
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
				Function_358(2, Function_370(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_358(2, Function_370(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_358(2, Function_370(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_358(2, Function_370(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_358(2, Function_370(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_358(2, Function_370(Global_12976.f_152), 1);
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
				Function_358(2, Function_370(Global_12976.f_152), 0);
			}
			break;
	}
	Function_357(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_370(int iParam0) //Position: 0x12D73 / 77171
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

int Function_371(int iParam0, bool bParam1) //Position: 0x12E16 / 77334
{
	bool bVar0;
	int iVar1;
	
	Function_354(iParam0, bParam1, 0);
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
	iVar1 = Function_364(iParam0, 4294967295);
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
	iVar1 = Function_359();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_372(int iParam0, char* cParam1, bool bParam2) //Position: 0x12FB2 / 77746
{
	char* cVar0[32];
	
	if (!Function_177(3))
	{
		return;
	}
	if (Function_62())
	{
		return;
	}
	if (Function_89())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_373())
						{
							Function_156(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_156(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_156(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_373())
					{
						Function_156(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_156(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_156(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_156(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

bool Function_373() //Position: 0x130CE / 78030
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_409(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_374(int iParam0) //Position: 0x130FE / 78078
{
	return !Function_409(iParam0->f_584, 16384);
}

var Function_375(int iParam0) //Position: 0x13110 / 78096
{
	return iParam0->f_492;
}

void Function_376(int iParam0, var uParam1) //Position: 0x1311B / 78107
{
	int iVar0;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_121(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && uParam1)
	{
		Function_387(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_119(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_377() //Position: 0x13182 / 78210
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

int Function_378(int iParam0, bool bParam1, int iParam2) //Position: 0x13196 / 78230
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_409(iParam0->f_584, 32))
	{
		if (!Function_142(iParam0->f_624))
		{
			return 0;
		}
	}
	iVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	iVar21 = Function_381(Function_121(iParam0->f_624), Function_419(iParam0->f_624));
	iVar22 = Function_379(Function_121(iParam0->f_624), Function_419(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(iVar21, iVar20))
	{
		ADD_TIME(&iVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(iVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(iParam0 + 336[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(iParam0 + 336[iVar174], bParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(iParam0 + 336[iVar174], bParam1, 16);
			if (iParam2 == 1)
			{
				(*iParam0 + 388)[iVar17] = iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_379(int iParam0, int iParam1) //Position: 0x132F5 / 78581
{
	int iVar0;
	int iVar1;
	
	if (!Function_380(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_121(iVar1) != iParam0 && Function_419(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_380(int iParam0) //Position: 0x13341 / 78657
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_381(int iParam0, int iParam1) //Position: 0x13356 / 78678
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_121(iVar1) != iParam0 && Function_419(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(Global_13172[iVar111].f_36, iVar0))
			{
				iVar0 = Global_13172[iVar111].f_36;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_382() //Position: 0x133A2 / 78754
{
	if (Function_133(359) < 0 || Function_133(358) < 0)
	{
		return 0;
	}
	return 1;
}

int Function_383(int iParam0, bool bParam1, bool bParam2) //Position: 0x133C2 / 78786
{
	if (IS_STRING_VALID(cParam1))
	{
		strcpy(iParam0 + 144[06], bParam1, 24);
		(*iParam0 + 112)[0] = 1;
	}
	else
	{
		strcpy(iParam0 + 144[06], "", 24);
		(*iParam0 + 112)[0] = 0;
	}
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(iParam0 + 144[16], bParam2, 24);
		(*iParam0 + 112)[1] = 1;
	}
	else
	{
		strcpy(iParam0 + 144[16], "", 24);
		(*iParam0 + 112)[1] = 0;
	}
	return 1;
}

void Function_384(int iParam0) //Position: 0x1342D / 78893
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_287(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_385(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_48(473, 1, 0, 0);
		iVar0 = Function_290(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_48(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_48(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_48(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_131(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_131(7, 30);
	}
	if (Function_58(473) <= Function_59(473))
	{
		if (!Function_62())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

void Function_385(var uParam0, int iParam1) //Position: 0x1352C / 79148
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_386(bool bParam0, int iParam1) //Position: 0x1353B / 79163
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_62())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_387(bool bParam0) //Position: 0x1357D / 79229
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_401();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_388();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_3(&Global_63095, 1);
		Function_3(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_388() //Position: 0x135CE / 79310
{
	Function_399();
	Function_398();
	Function_398();
	Function_397();
	Function_397();
	Function_396();
	Function_396();
	Function_395(0);
	Function_395(0);
	if (!Function_62())
	{
		Function_393();
		Function_392();
		Function_391();
		Function_390();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_389();
	return;
}

void Function_389() //Position: 0x13620 / 79392
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

void Function_390() //Position: 0x13726 / 79654
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

void Function_391() //Position: 0x13759 / 79705
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

void Function_392() //Position: 0x138E7 / 80103
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

void Function_393() //Position: 0x13A9B / 80539
{
	Function_394(&Global_28260, 1, 0);
	return;
}

void Function_394(int iParam0, bool bParam1, int iParam2) //Position: 0x13AA9 / 80553
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_17();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

struct<8> Function_395(char* cParam0) //Position: 0x13C9A / 81050
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_133((50 + iVar4)) + Function_133((183 + iVar4))) + Function_133((90 + iVar4)));
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
	Function_137(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_396() //Position: 0x13D40 / 81216
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
		iVar2 = ((Function_133((50 + iVar3) + 15) + Function_133((183 + iVar3) + 15)) + Function_133((90 + iVar3) + 15));
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
	Function_137(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_397() //Position: 0x13DC9 / 81353
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
			iVar2 = ((Function_133((50 + iVar3) + 8) + Function_133((183 + iVar3) + 8)) + Function_133((90 + iVar3) + 8));
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
	Function_137(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_398() //Position: 0x13E60 / 81504
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
		iVar2 = ((Function_133((50 + iVar3)) + Function_133((183 + iVar3))) + Function_133((90 + iVar3)));
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
	Function_137(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_399() //Position: 0x13EDF / 81631
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_400(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_137(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_400(int iParam0, bool bParam1, int iParam2) //Position: 0x13F18 / 81688
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
	Function_61(iParam0, bParam1, 1);
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_49(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_401() //Position: 0x1414E / 82254
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_89())
	{
		Function_406(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_406(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_402(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_402(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_267(StackVal, StackVal, vVar0))
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

vector3 Function_402(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x14209 / 82441
{
	int iVar0;
	
	iVar0 = Function_404(uParam2, uParam3);
	if (Function_403(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_408(&Global_63095, 1);
			Function_3(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_408(&Global_63095, 2);
			Function_3(&Global_63095, 1);
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
		Function_408(&Global_63095, 2);
		Function_3(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_107();
	return StackVal, StackVal, Function_107();
}

bool Function_403(int iParam0) //Position: 0x142F0 / 82672
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_404(bool bParam0, bool bParam1) //Position: 0x14306 / 82694
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
				fVar2 = Function_405(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_405(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_403(bVar0) && !bParam1)
	{
		bVar0 = Function_404(bParam0, 1);
	}
	return bVar0;
}

float Function_405(vector3 vParam0, vector3 vParam3) //Position: 0x143CD / 82893
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_406(var uParam0, int iParam1) //Position: 0x143EA / 82922
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_66(Global_34573, &vVar4);
	if (!Function_407(Global_30640[0]))
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
	if (!Function_407(Global_30640[2]))
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
	if (!Function_407(Global_30640[1]))
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
	if (!Function_407(Global_30658[1]))
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
	if (!Function_407(Global_30658[3]))
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
	if (!Function_407(Global_30658[2]))
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
	if (!Function_407(Global_30658[4]))
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
	if (!Function_407(Global_30668[0]))
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
	if (!Function_407(Global_30668[1]))
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
	if (!Function_407(Global_30668[2]))
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
	if (!Function_407(Global_30679[0]))
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
	if (!Function_407(Global_30685[0]))
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
	if (!Function_407(Global_30685[1]))
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
	if (!Function_407(Global_30685[2]))
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
	if (!Function_407(Global_30693[0]))
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
	if (!Function_407(Global_30693[1]))
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
	if (!Function_407(Global_30693[2]))
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
	if (!Function_407(Global_30707[2]))
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
	if (!Function_407(Global_30707[3]))
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
	if (!Function_407(Global_30707[0]))
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
	if (!Function_407(Global_30717[0]))
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
	if (!Function_407(Global_30723[2]))
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
	if (!Function_407(Global_30723[1]))
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
	if (!Function_407(Global_30723[0]))
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
	if (!Function_407(Global_30679[1]))
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
	if (!Function_407(Global_30707[1]))
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
	Function_408(&Global_63095, 2);
	Function_3(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_267(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_407(int iParam0) //Position: 0x14C0F / 85007
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_409(bVar0, 0x1000000) || Function_409(bVar0, 0x2000000)) || Function_409(bVar0, 0x4000000)) || !Function_409(bVar0, 0x10000000));
}

void Function_408(int iParam0, int iParam1) //Position: 0x14C4A / 85066
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_409(bool bParam0, int iParam1) //Position: 0x14C59 / 85081
{
	return (bParam0 && iParam1) == 0;
}

bool Function_410(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x14C66 / 85094
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

void Function_411() //Position: 0x14D0A / 85258
{
	Function_297(&bLocal_65, "dlc_zombiepack_pmp", 10, 0);
	Function_297(&bLocal_65, "stats", 10, 0);
	Function_297(&bLocal_65, "gent_ride_passenger", 5, 0);
	Function_297(&bLocal_65, "fema_ride_passenger", 5, 0);
	return;
}

void Function_412(int iParam0) //Position: 0x14D7B / 85371
{
	if (iParam0 == 1)
	{
		Function_408(&Global_26303 + 8, 1);
	}
	else
	{
		Function_3(&Global_26303 + 8, 1);
	}
	return;
}

void Function_413() //Position: 0x14D9C / 85404
{
	if (bLocal_275 == Global_30640[5])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30640[5];
		Local_453[08].f_12 = "lakeDonJulio";
		Local_453[08].f_8 = "shack01props01";
		Local_453[08].f_16 = 1;
		Local_453[08].f_20 = 1;
		Local_453[08].f_28 = 1;
	}
	else if (bLocal_275 == Global_30640[13])
	{
	}
	else if (bLocal_275 == Global_30640[16])
	{
	}
	else if (bLocal_275 == Global_30640[3])
	{
	}
	else if (bLocal_275 == Global_30658[4])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30658[4];
		Local_453[08].f_12 = "benedictPoint";
		Local_453[08].f_8 = "trainStation01Props01";
		Local_453[08].f_16 = 1;
		Local_453[08].f_20 = 0;
		Local_453[08].f_28 = 1;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30658[4];
		Local_453[18].f_12 = "benedictPoint";
		Local_453[18].f_8 = "trainStation01Props01";
		Local_453[18].f_16 = 2;
		Local_453[18].f_20 = 1;
		Local_453[18].f_28 = 1;
		Local_453[28] = 1;
		Local_453[28].f_4 = Global_30658[4];
		Local_453[28].f_12 = "benedictPoint";
		Local_453[28].f_8 = "trainStation01Props01";
		Local_453[28].f_16 = 3;
		Local_453[28].f_20 = 0;
		Local_453[28].f_28 = 1;
		Local_453[38] = 1;
		Local_453[38].f_4 = Global_30658[4];
		Local_453[38].f_12 = "benedictPoint";
		Local_453[38].f_8 = "trainStation01Props01";
		Local_453[38].f_16 = 4;
		Local_453[38].f_20 = 1;
		Local_453[38].f_28 = 1;
	}
	else if (bLocal_275 == Global_30658[3])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30658[3];
		Local_453[08].f_12 = "gaptoothBreach_03";
		Local_453[08].f_8 = "supplyShack01props01";
		Local_453[08].f_16 = 3;
		Local_453[08].f_20 = 1;
		Local_453[08].f_28 = 0;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30658[3];
		Local_453[18].f_12 = "gaptoothBreach_03";
		Local_453[18].f_8 = "supplyShack01props01";
		Local_453[18].f_16 = 2;
		Local_453[18].f_20 = 1;
		Local_453[18].f_28 = 0;
		Local_453[28] = 1;
		Local_453[28].f_4 = Global_30658[3];
		Local_453[28].f_12 = "gaptoothBreach_03";
		Local_453[28].f_8 = "supplyShack01props01";
		Local_453[28].f_16 = 5;
		Local_453[28].f_20 = 1;
		Local_453[28].f_28 = 0;
	}
	else if (bLocal_275 == Global_30640[15])
	{
	}
	else if (bLocal_275 == Global_30640[1])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30640[1];
		Local_453[08].f_12 = "ridgewoodFarm";
		Local_453[08].f_8 = "mainHouse01Props01";
		Local_453[08].f_16 = 2;
		Local_453[08].f_20 = 1;
		Local_453[08].f_28 = 1;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30640[1];
		Local_453[18].f_12 = "ridgewoodFarm";
		Local_453[18].f_8 = "mainHouse01Props01";
		Local_453[18].f_16 = 14;
		Local_453[18].f_20 = 0;
		Local_453[18].f_28 = 1;
	}
	else if (bLocal_275 == Global_30679[0])
	{
	}
	else if (bLocal_275 == Global_30640[14])
	{
	}
	else if (bLocal_275 == Global_30640[0])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30640[0];
		Local_453[08].f_12 = "narmadillo";
		Local_453[08].f_8 = "ruinedBankProps01";
		Local_453[08].f_16 = 2;
		Local_453[08].f_20 = 0;
		Local_453[08].f_28 = 1;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30640[0];
		Local_453[18].f_12 = "narmadillo";
		Local_453[18].f_8 = "ruinedBankProps01";
		Local_453[18].f_16 = 4;
		Local_453[18].f_20 = 0;
		Local_453[18].f_28 = 1;
	}
	else if (bLocal_275 == Global_30707[3])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30707[3];
		Local_453[08].f_12 = "torquemada01";
		Local_453[08].f_8 = "mainStructure01props01";
		Local_453[08].f_16 = 2;
		Local_453[08].f_20 = 0;
		Local_453[08].f_28 = 0;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30707[3];
		Local_453[18].f_12 = "torquemada01";
		Local_453[18].f_8 = "mainStructure01props01";
		Local_453[18].f_16 = 10;
		Local_453[18].f_20 = 1;
		Local_453[18].f_28 = 0;
	}
	else if (bLocal_275 == Global_30707[2])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30707[2];
		Local_453[08].f_12 = "casaMadrugada";
		Local_453[08].f_8 = "whorehouse01Props01";
		Local_453[08].f_16 = 6;
		Local_453[08].f_20 = 1;
		Local_453[08].f_28 = 1;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30707[2];
		Local_453[18].f_12 = "casaMadrugada";
		Local_453[18].f_8 = "whorehouse01Props01";
		Local_453[18].f_16 = 5;
		Local_453[18].f_20 = 0;
		Local_453[18].f_28 = 1;
	}
	else if (bLocal_275 == Global_30707[0])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30707[0];
		Local_453[08].f_12 = "elMatadero01";
		Local_453[08].f_8 = "slaughterHouse01props01";
		Local_453[08].f_16 = 1;
		Local_453[08].f_20 = 1;
		Local_453[08].f_28 = 0;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30707[0];
		Local_453[18].f_12 = "elMatadero01";
		Local_453[18].f_8 = "slaughterHouse01props01";
		Local_453[18].f_16 = 2;
		Local_453[18].f_20 = 0;
		Local_453[18].f_28 = 0;
		Local_453[28] = 1;
		Local_453[28].f_4 = Global_30707[0];
		Local_453[28].f_12 = "elMatadero01";
		Local_453[28].f_8 = "slaughterHouse01props01";
		Local_453[28].f_16 = 3;
		Local_453[28].f_20 = 0;
		Local_453[28].f_28 = 0;
	}
	else if (bLocal_275 == Global_30693[2])
	{
	}
	else if (bLocal_275 == Global_30707[4])
	{
	}
	else if (bLocal_275 == Global_30693[1])
	{
		bLocal_256 = true;
		Local_453[08] = 1;
		Local_453[08].f_4 = Global_30693[1];
		Local_453[08].f_12 = "lashermanas";
		Local_453[08].f_8 = "prayerRoom01Props01";
		Local_453[08].f_16 = 11;
		Local_453[08].f_20 = 1;
		Local_453[08].f_28 = 1;
		Local_453[18] = 1;
		Local_453[18].f_4 = Global_30693[1];
		Local_453[18].f_12 = "lashermanas";
		Local_453[18].f_8 = "prayerRoom01Props01";
		Local_453[18].f_16 = 12;
		Local_453[18].f_20 = 0;
		Local_453[18].f_28 = 1;
	}
	else
	{
		LOG_ERROR("Missing Persons: unhandled location spawn points.");
	}
	return;
}

void Function_414() //Position: 0x1576E / 87918
{
	vector3 vVar0[5];
	float fVar16[5];
	int iVar22;
	bool bVar23;
	
	if (!IS_OBJECTSET_VALID(bLocal_452))
	{
		bLocal_452 = CREATE_OBJECTSET_IN_LAYOUT("zombiespawnset", bLocal_278, 8, 1);
	}
	if (bLocal_275 == Global_30640[5])
	{
		vVar0[03] = { -1864.743f, 24.924f, 3296.365f };
		fVar16[0] = 184.028f;
		vVar0[13] = { -1858.08f, 25.059f, 3308.678f };
		fVar16[1] = 0.782f;
		vVar0[23] = { -1878.678f, 24.78f, 3310.663f };
		fVar16[2] = 319.002f;
		vVar0[33] = { -1871.677f, 24.923f, 3300.376f };
		fVar16[3] = 275.11f;
		vVar0[43] = { -1888.976f, 24.524f, 3305.415f };
		fVar16[4] = 291.559f;
	}
	else if (bLocal_275 == Global_30640[13])
	{
		vVar0[03] = { -1926.95f, 32.096f, 3464.557f };
		fVar16[0] = 113.583f;
		vVar0[13] = { -1953.436f, 29.378f, 3473.306f };
		fVar16[1] = 281.092f;
		vVar0[23] = { -1953.737f, 29.972f, 3462.801f };
		fVar16[2] = 238.478f;
		vVar0[33] = { -1962.782f, 26.043f, 3445.146f };
		fVar16[3] = 260.067f;
		vVar0[43] = { -1929.203f, 37.688f, 3419.257f };
		fVar16[4] = 178.575f;
	}
	else if (bLocal_275 == Global_30640[16])
	{
		vVar0[03] = { -2015.367f, 42.122f, 3015.473f };
		fVar16[0] = 190.734f;
		vVar0[13] = { -1998.525f, 42.088f, 3053.703f };
		fVar16[1] = 50.563f;
		vVar0[23] = { -2015.842f, 42.041f, 3042.002f };
		fVar16[2] = 235.381f;
		vVar0[33] = { -1999.785f, 42.041f, 3033.278f };
		fVar16[3] = 152.561f;
		vVar0[43] = { -2024.216f, 42.041f, 3013.539f };
		fVar16[4] = 190.594f;
	}
	else if (bLocal_275 == Global_30640[3])
	{
		vVar0[03] = { -2317.711f, 17.067f, 3190.225f };
		fVar16[0] = 19.568f;
		vVar0[13] = { -2292.442f, 17.067f, 3183.256f };
		fVar16[1] = 92.678f;
		vVar0[23] = { -2304.687f, 17.087f, 3158.002f };
		fVar16[2] = 111.196f;
		vVar0[33] = { -2323.122f, 17.074f, 3152.098f };
		fVar16[3] = 153.837f;
		vVar0[43] = { -2341.379f, 17.274f, 3171.074f };
		fVar16[4] = 277.331f;
	}
	else if (bLocal_275 == Global_30658[4])
	{
		vVar0[03] = { -3671.168f, 8.267f, 3473.887f };
		fVar16[0] = 104.901f;
		vVar0[13] = { -3674.73f, 8.04f, 3503.94f };
		fVar16[1] = 9.263f;
		vVar0[23] = { -3695.806f, 8.43f, 3451.708f };
		fVar16[2] = 212.029f;
		vVar0[33] = { -3677.822f, 8.354f, 3464.26f };
		fVar16[3] = 119.429f;
		vVar0[43] = { -3703.608f, 8.651f, 3473.019f };
		fVar16[4] = 290.304f;
	}
	else if (bLocal_275 == Global_30658[3])
	{
		vVar0[03] = { -4448.649f, 21.09f, 3194.198f };
		fVar16[0] = 113.019f;
		vVar0[13] = { -4437.685f, 9.478f, 3210.763f };
		fVar16[1] = 69.37f;
		vVar0[23] = { -4466.163f, 9.153f, 3226.035f };
		fVar16[2] = 313.754f;
		vVar0[33] = { -4465.179f, 16.356f, 3211.708f };
		fVar16[3] = 255.195f;
		vVar0[43] = { -4444.32f, 8.984f, 3218.083f };
		fVar16[4] = 35.873f;
	}
	else if (bLocal_275 == Global_30640[15])
	{
		vVar0[03] = { -2909.349f, 13.051f, 2945.653f };
		fVar16[0] = 221.038f;
		vVar0[13] = { -2900.731f, 13.051f, 2947.321f };
		fVar16[1] = 87.143f;
		vVar0[23] = { -2903.308f, 13.051f, 2950.498f };
		fVar16[2] = 64.469f;
		vVar0[33] = { -2931.863f, 12.426f, 2958.618f };
		fVar16[3] = 303.274f;
		vVar0[43] = { -2917.766f, 13.517f, 2978.641f };
		fVar16[4] = 349.744f;
	}
	else if (bLocal_275 == Global_30640[1])
	{
		vVar0[03] = { -3257.5f, 16.308f, 2727.449f };
		fVar16[0] = 266.257f;
		vVar0[13] = { -3231.844f, 15.957f, 2728.76f };
		fVar16[1] = 78.466f;
		vVar0[23] = { -3222.27f, 16.101f, 2714.374f };
		fVar16[2] = 100.676f;
		vVar0[33] = { -3238.94f, 15.921f, 2732.915f };
		fVar16[3] = 83.091f;
		vVar0[43] = { -3256.753f, 15.972f, 2715.602f };
		fVar16[4] = 192.544f;
	}
	else if (bLocal_275 == Global_30679[0])
	{
		vVar0[03] = { -3159.301f, 43.165f, 3732.541f };
		fVar16[0] = 100.174f;
		vVar0[13] = { -3217.006f, 40.157f, 3722.45f };
		fVar16[1] = 212.984f;
		vVar0[23] = { -3187.682f, 41.629f, 3753.23f };
		fVar16[2] = 8.052f;
		vVar0[33] = { -3159.357f, 43.169f, 3752.85f };
		fVar16[3] = 60.316f;
		vVar0[43] = { -3177.539f, 41.946f, 3723.433f };
		fVar16[4] = 123.631f;
	}
	else if (bLocal_275 == Global_30640[14])
	{
		vVar0[03] = { -2307.739f, 24.094f, 3012.534f };
		fVar16[0] = 11.052f;
		vVar0[13] = { -2312.1f, 23.672f, 3000.959f };
		fVar16[1] = 233.043f;
		vVar0[23] = { -2300.867f, 24.094f, 2986.392f };
		fVar16[2] = 168.024f;
		vVar0[33] = { -2307.512f, 23.412f, 3026.23f };
		fVar16[3] = 16.567f;
		vVar0[43] = { -2326.87f, 23.09f, 3010.99f };
		fVar16[4] = 262.54f;
	}
	else if (bLocal_275 == Global_30640[0])
	{
		vVar0[03] = { -2130.745f, 16.447f, 2645.467f };
		fVar16[0] = 338.745f;
		vVar0[13] = { -2118.261f, 16.302f, 2645.184f };
		fVar16[1] = 68.438f;
		vVar0[23] = { -2141.534f, 16.449f, 2619.682f };
		fVar16[2] = 310.934f;
		vVar0[33] = { -2132.26f, 16.201f, 2606.282f };
		fVar16[3] = 193.861f;
		vVar0[43] = { -2114.023f, 16.495f, 2604.881f };
		fVar16[4] = 139.516f;
	}
	else if (bLocal_275 == Global_30707[3])
	{
		vVar0[03] = { 366.438f, 76.298f, 3445.81f };
		fVar16[0] = 133.422f;
		vVar0[13] = { 356.238f, 77.459f, 3462.039f };
		fVar16[1] = 46.664f;
		vVar0[23] = { 338.52f, 78.306f, 3459.81f };
		fVar16[2] = 322.897f;
		vVar0[33] = { 347.291f, 76.298f, 3447.231f };
		fVar16[3] = 227.469f;
		vVar0[43] = { 335.556f, 76.278f, 3440.161f };
		fVar16[4] = 260.415f;
	}
	else if (bLocal_275 == Global_30707[2])
	{
		vVar0[03] = { -804.864f, 16.665f, 3692.388f };
		fVar16[0] = 11.616f;
		vVar0[13] = { -812.934f, 16.665f, 3694.437f };
		fVar16[1] = 249.799f;
		vVar0[23] = { -827.322f, 16.665f, 3709.247f };
		fVar16[2] = 310.064f;
		vVar0[33] = { -818.341f, 16.665f, 3699.982f };
		fVar16[3] = 214.655f;
		vVar0[43] = { -812.788f, 16.665f, 3693.572f };
		fVar16[4] = 209.787f;
	}
	else if (bLocal_275 == Global_30707[0])
	{
		vVar0[03] = { -411.818f, 23.853f, 3913.663f };
		fVar16[0] = 330.284f;
		vVar0[13] = { -397.824f, 24.112f, 3906.219f };
		fVar16[1] = 341.729f;
		vVar0[23] = { -423.009f, 23.17f, 3915.786f };
		fVar16[2] = 275.119f;
		vVar0[33] = { -404.59f, 25.046f, 3929.721f };
		fVar16[3] = 356.238f;
		vVar0[43] = { -427.654f, 22.083f, 3924.683f };
		fVar16[4] = 318.9f;
	}
	else if (bLocal_275 == Global_30693[2])
	{
		vVar0[03] = { -1492.954f, 17.202f, 3899.458f };
		fVar16[0] = 342.605f;
		vVar0[13] = { -1470.411f, 17.196f, 3898.539f };
		fVar16[1] = 58.701f;
		vVar0[23] = { -1474.271f, 16.883f, 3926.486f };
		fVar16[2] = 146.483f;
		vVar0[33] = { -1503.285f, 17.201f, 3922.811f };
		fVar16[3] = 232.992f;
		vVar0[43] = { -1475.031f, 16.545f, 3940.707f };
		fVar16[4] = 42.586f;
	}
	else if (bLocal_275 == Global_30707[4])
	{
		vVar0[03] = { -1299.621f, 76.963f, 3619.0f };
		fVar16[0] = 54.317f;
		vVar0[13] = { -1311.821f, 77.3f, 3622.382f };
		fVar16[1] = 333.277f;
		vVar0[23] = { -1305.274f, 77.622f, 3597.396f };
		fVar16[2] = 82.902f;
		vVar0[33] = { -1334.778f, 81.488f, 3608.436f };
		fVar16[3] = 2.867f;
		vVar0[43] = { -1337.695f, 81.02f, 3589.016f };
		fVar16[4] = 330.266f;
	}
	else if (bLocal_275 == Global_30693[1])
	{
		vVar0[03] = { -1719.562f, 8.206f, 4215.835f };
		fVar16[0] = 84.614f;
		vVar0[13] = { -1732.778f, 8.206f, 4220.444f };
		fVar16[1] = 321.368f;
		vVar0[23] = { -1743.328f, 9.288f, 4210.2f };
		fVar16[2] = 264.199f;
		vVar0[33] = { -1717.733f, 8.031f, 4252.317f };
		fVar16[3] = 356.208f;
		vVar0[43] = { -1714.232f, 8.07f, 4215.73f };
		fVar16[4] = 89.72f;
	}
	else
	{
		LOG_ERROR("Missing Persons: unhandled location spawn points.");
	}
	if (IS_OBJECTSET_VALID(bLocal_452))
	{
		iVar22 = 0;
		while (iVar22 <= vVar0)
		{
			if (!Function_267(StackVal, StackVal, vVar0[iVar223]))
			{
				bVar23 = CREATE_POINT_IN_LAYOUT(bLocal_278, Function_32(), vVar0[iVar223], 0.0f, fVar16[iVar22], 0.0f);
				if (IS_OBJECT_VALID(bVar23))
				{
					ADD_OBJECT_TO_OBJECTSET(bVar23, bLocal_452);
				}
			}
			iVar22++;
		}
	}
	return;
}

var Function_415(int iParam0) //Position: 0x163D6 / 91094
{
	int iVar0;
	
	iVar0 = Function_416(iParam0->f_20);
	switch (iVar0)
	{
		case 0x00000000:
			iParam0->f_24 = Global_30640[3];
			return Global_30640[3];
			break;
		
		case 0x00000001:
			iParam0->f_24 = Global_30640[5];
			return Global_30640[5];
			break;
		
		case 0x00000002:
			iParam0->f_24 = Global_30640[16];
			return Global_30640[16];
			break;
		
		case 0x00000003:
			iParam0->f_24 = Global_30640[15];
			return Global_30640[15];
			break;
		
		case 0x00000004:
			iParam0->f_24 = Global_30658[4];
			return Global_30658[4];
			break;
		
		case 0x00000005:
			iParam0->f_24 = Global_30640[13];
			return Global_30640[13];
			break;
		
		case 0x00000006:
			iParam0->f_24 = Global_30658[3];
			return Global_30658[3];
			break;
		
		case 0x00000007:
			iParam0->f_24 = Global_30640[1];
			return Global_30640[1];
			break;
		
		case 0x00000008:
			iParam0->f_24 = Global_30679[0];
			return Global_30679[0];
			break;
		
		case 0x00000009:
			iParam0->f_24 = Global_30640[0];
			return Global_30640[0];
			break;
		
		case 0x0000000A:
			iParam0->f_24 = Global_30707[4];
			return Global_30707[4];
			break;
		
		case 0x0000000B:
			iParam0->f_24 = Global_30707[3];
			return Global_30707[3];
			break;
		
		case 0x0000000C:
			iParam0->f_24 = Global_30693[1];
			return Global_30693[1];
			break;
		
		case 0x0000000D:
			iParam0->f_24 = Global_30693[2];
			return Global_30693[2];
			break;
		
		case 0x0000000E:
			iParam0->f_24 = Global_30707[0];
			return Global_30707[0];
			break;
		
		case 0x0000000F:
			iParam0->f_24 = Global_30707[2];
			return Global_30707[2];
			break;
		
		case 0x00000010:
			iParam0->f_24 = Global_30640[10];
			return Global_30640[10];
			break;
		
		default:
			iParam0->f_24 = Global_30679[3];
			return Global_30679[3];
			break;
	}
	return 4294967295;
}

var Function_416(int iParam0) //Position: 0x165C3 / 91587
{
	int iVar0;
	struct<21> Var1;
	
	iVar0 = 4294967295;
	iVar12 = 0;
	while (iVar12 <= 17)
	{
		if (Function_417(&Var1, iVar12) == 1)
		{
			if (iParam0 == Var1.f_20)
			{
				iVar0 = iVar12;
				iVar12 = 45;
			}
		}
		iVar12++;
	}
	return iVar0;
}

int Function_417(var uParam0, int iParam1) //Position: 0x165FD / 91645
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 1;
			uParam0->f_20 = 56;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000001:
			uParam0->f_12 = 1;
			uParam0->f_20 = 24;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000002:
			uParam0->f_12 = 2;
			uParam0->f_20 = 95;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000003:
			uParam0->f_12 = 2;
			uParam0->f_20 = 96;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000004:
			uParam0->f_12 = 2;
			uParam0->f_20 = 29;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000005:
			uParam0->f_12 = 2;
			uParam0->f_20 = 168;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000006:
			uParam0->f_12 = 3;
			uParam0->f_20 = 9;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000007:
			uParam0->f_12 = 3;
			uParam0->f_20 = 89;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000008:
			uParam0->f_12 = 3;
			uParam0->f_20 = 169;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000009:
			uParam0->f_12 = 4;
			uParam0->f_20 = 68;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 266;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 269;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 4;
			uParam0->f_20 = 245;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 4;
			uParam0->f_20 = 289;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 5;
			uParam0->f_20 = 276;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 6;
			uParam0->f_20 = 237;
			uParam0->f_24 = Global_30707[1];
			uParam0->f_28 = Global_30707[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		case 0x00000010:
			uParam0->f_12 = 1;
			uParam0->f_20 = 339;
			uParam0->f_24 = Global_30679[1];
			uParam0->f_28 = Global_30679[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 0;
			uParam0->f_16 = Function_418(uParam0->f_12);
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_418(int iParam0) //Position: 0x16A30 / 92720
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 6;
			break;
		
		case 0x00000004:
			iVar0 = 6;
			break;
		
		case 0x00000005:
			iVar0 = 7;
			break;
		
		case 0x00000006:
			iVar0 = 7;
			break;
		
		case 0x00000000:
		default:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int Function_419(int iParam0) //Position: 0x16A93 / 92819
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

void Function_420(bool bParam0, int iParam1) //Position: 0x16AB2 / 92850
{
	int iVar0;
	
	if (bParam0->f_620 != 0 && iParam1 != 1)
	{
		bParam0->f_620 = iParam1;
	}
	else if (bParam0->f_620 == 1)
	{
		bParam0->f_620 = iParam1;
		if (bParam0->f_488 != 4294967295)
		{
			if (bParam0->f_620 == 2)
			{
				iVar0 = Function_375(bParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_374(bParam0) != 1)
				{
					Function_372(bParam0->f_488, iVar0, 1);
				}
			}
			else if (bParam0->f_620 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

void Function_421(var uParam0, int iParam1) //Position: 0x16B44 / 92996
{
	uParam0->f_488 = iParam1;
	return;
}

void Function_422(int iParam0, int iParam1) //Position: 0x16B51 / 93009
{
	if (Function_120(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_408(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_423(int iParam0) //Position: 0x16BA6 / 93094
{
	if (Function_428(iParam0))
	{
		return Function_424(iParam0, 0, 2);
	}
	return 4294967295;
}

int Function_424(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16BC0 / 93120
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_427(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_425(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_425(bParam0, bParam1, bParam2, 4294967295);
}

int Function_425(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16C1E / 93214
{
	var uVar0;
	
	if (!Function_380(bParam2))
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
	uVar0 = Function_427(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_426(uVar0);
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

int Function_426(int iParam0) //Position: 0x16D73 / 93555
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

var Function_427(int iParam0, int iParam1, int iParam2) //Position: 0x16DB1 / 93617
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_428(int iParam0) //Position: 0x16DD1 / 93649
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_429(var uParam0, int iParam1) //Position: 0x16DE7 / 93671
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 1;
	bVar2 = 4294967295;
	if (Function_432())
	{
		return 0;
	}
	uVar1 = Function_423(iParam1);
	bVar2 = Function_130(uVar1);
	if (Function_430(uParam0->f_20) != 16 && !Function_285(21))
	{
		Function_417(uParam0, 16);
	}
	else if (Function_289(iParam1) == Global_30621[0])
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_417(uParam0, 0);
				break;
			
			case 0x00000001:
				Function_417(uParam0, 1);
				break;
			
			case 0x00000002:
				Function_417(uParam0, 2);
				break;
			
			case 0x00000003:
				Function_417(uParam0, 3);
				break;
			
			case 0x00000004:
				Function_417(uParam0, 4);
				break;
			
			case 0x00000005:
				Function_417(uParam0, 6);
				break;
			
			case 0x00000006:
				Function_417(uParam0, 7);
				break;
			
			case 0x00000007:
				Function_417(uParam0, 8);
				break;
			
			case 0x00000008:
				Function_417(uParam0, 9);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Frontier.");
				Function_417(uParam0, 10);
				iVar0 = 0;
				break;
		}
	}
	else
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_417(uParam0, 10);
				break;
			
			case 0x00000001:
				Function_417(uParam0, 11);
				break;
			
			case 0x00000002:
				Function_417(uParam0, 12);
				break;
			
			case 0x00000003:
				Function_417(uParam0, 13);
				break;
			
			case 0x00000004:
				Function_417(uParam0, 14);
				break;
			
			case 0x00000005:
				Function_417(uParam0, 15);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Mexico.");
				Function_417(uParam0, 10);
				iVar0 = 0;
				break;
			}
	}
	uParam0->f_32 = 0;
	uParam0->f_16 = Function_418(uParam0->f_12);
	if (iParam1 != 4294967294)
	{
		uParam0->f_24 = iParam1;
	}
	return iVar0;
}

int Function_430(int iParam0) //Position: 0x17021 / 94241
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	
	iVar1 = 4294967295;
	if (Function_108(iParam0))
	{
		while (iVar0 <= 17)
		{
			Function_417(&Var2, iVar0);
			if (Var2.f_20 == iParam0)
			{
				iVar1 = iVar0;
				iVar0 = 17 + 1;
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool Function_431(int iParam0) //Position: 0x1705F / 94303
{
	if (!Function_428(iParam0))
	{
		return 1;
	}
	return Function_287(&(Global_29008[iParam0]), 4);
}

bool Function_432() //Position: 0x1707B / 94331
{
	return Function_409(StackVal, 1);
}

void Function_433() //Position: 0x1708A / 94346
{
	Function_3(&Global_26303 + 8, 2);
	Function_3(&Global_26303 + 8, 4);
	Function_3(&Global_26303 + 8, 8);
	Function_3(&Global_26303 + 8, 16);
	Function_3(&Global_26303 + 8, 32);
	Function_3(&Global_26303 + 8, 64);
	Function_3(&Global_26303 + 8, 128);
	Function_3(&Global_26303 + 8, 256);
	Function_3(&Global_26303 + 8, 512);
	Function_3(&Global_26303 + 8, 1024);
	Function_3(&Global_26303 + 8, 2048);
	Function_3(&Global_26303 + 8, 131072);
	Function_3(&Global_26303 + 8, 262144);
	Function_3(&Global_26303 + 8, 524288);
	return;
}

struct<32> Function_434(bool bParam0) //Position: 0x17124 / 94500
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_435("0", &cVar8, ""), 4);
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

struct<32> Function_435(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1718E / 94606
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_436() //Position: 0x171AD / 94637
{
	return StackVal;
}

