//Decompiled with MagicRDR v1.0
//Function Count : 162
//Statics Count : 401
//Natives Count : 227
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
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	bool bLocal_22 = false;
	bool bLocal_23 = true;
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
	vector3 vLocal_72 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_75 = { 0.0f, 0.0f, 0.0f };
	struct<8> Local_78 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = false;
	bool bLocal_98 = false;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = false;
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	bool bLocal_117 = false;
	bool bLocal_118 = false;
	int iLocal_119 = 0;
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
	var uLocal_133 = 3;
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
	var uLocal_147 = 3;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 3;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 3;
	var uLocal_156 = 0;
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
	var uLocal_174 = 3;
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
	var uLocal_188 = 3;
	var uLocal_189 = 0;
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
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 3;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 3;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 3;
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
	bool bLocal_276 = false;
	bool bLocal_277 = false;
	float fLocal_278 = 0.0f;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	float fLocal_283 = 0.0f;
	vector3 vLocal_284 = { 0.0f, 0.0f, 0.0f };
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	float fLocal_290 = 0.0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = false;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	bool bLocal_344 = false;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	struct<51> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	struct<5> Var1;
	var uVar36;
	float fVar39;
	var uVar48;
	int iVar49;
	
	iLocal_11 = 0;
	iLocal_13 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	bLocal_102 = false;
	iLocal_103 = 0;
	iLocal_104 = 0;
	iLocal_105 = 0;
	iLocal_106 = 0;
	bLocal_107 = false;
	bLocal_108 = false;
	iLocal_109 = 1;
	iLocal_110 = 0;
	bLocal_111 = false;
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_282 = 0;
	iLocal_291 = 4294967295;
	iLocal_293 = 4294967295;
	iLocal_343 = 0;
	iLocal_348 = 0;
	iLocal_349 = 15;
	*(&Var1 + 20) = 1;
	fVar39 = 10.0f;
	bLocal_107 = Function_161("npressDemo");
	Function_160(&uLocal_345, 2.0f);
	GET_POSITION(GET_PLAYER_ACTOR(0), &uVar36);
	uVar48 = Function_159();
	ADD_TIME(&uVar48, 0, 23, false, 0);
	iLocal_14 = 0;
	iLocal_95 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_95, 1, 0, false, 0);
	iLocal_96 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_96, 0, 2, false, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			iLocal_14 = 5;
		}
		else if (Function_158() == 1)
		{
			iLocal_14 = 5;
		}
		else if (Global_3380)
		{
			iLocal_14 = 5;
		}
		else if (iLocal_104 != 0 && (IS_EARLIER_THAN(iLocal_96, GET_TIME_OF_DAY()) || IS_LATER_THAN(GET_TIME_OF_DAY(), Function_157(32))))
		{
			iLocal_14 = 5;
		}
		else if (IS_OBJECT_VALID(bLocal_113))
		{
			if (((IS_EARLIER_THAN(iLocal_95, GET_TIME_OF_DAY()) && VDIST(Global_34574, *(&ScriptParam_0 + 8)) < 50.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &ScriptParam_0 + 8, 3212836864)) && bLocal_107 != 0)
			{
				iLocal_14 = 5;
			}
		}
		else if (Global_3407 == 1)
		{
			iLocal_14 = 5;
		}
		if (Function_156(uLocal_99, 64) && IS_OBJECT_VALID(bLocal_118))
		{
			DESTROY_OBJECT(bLocal_118);
		}
		if (VDIST(Global_34574, vLocal_75) > 3.0f)
		{
			bLocal_22 = false;
		}
		else
		{
			bLocal_22 = 500;
		}
		if (Function_153(&uLocal_345, 0.5f))
		{
			bLocal_102 = true;
			Function_152(&uLocal_345);
			iLocal_348 = (iLocal_348 + 1 % 4);
		}
		switch (iLocal_14)
		{
			case 0x00000000:
				switch (iLocal_13)
				{
					case 0x00000000:
						if (Function_151(128))
						{
							if (IS_LAYOUTREF_VALID(Global_30616))
							{
								bLocal_12 = CREATE_OBJECT_ITERATOR(Global_30616);
							}
							else
							{
								iLocal_14 = 5;
							}
							iLocal_13++;
						}
						else
						{
							iLocal_14 = 5;
						}
						break;
					
					case 0x00000001:
						if (bLocal_107 == 1)
						{
							if (!Function_149(&Global_26303, 4, 4294967294, 0, 0, 1))
							{
								iLocal_14 = 5;
							}
						}
						else
						{
							if (Global_29006 == Global_30640[0])
							{
								iVar49 = 5;
								iLocal_293 = 4;
							}
							else if (Global_29006 == Global_30668[0])
							{
								iVar49 = 6;
								iLocal_293 = 5;
							}
							else if (Global_29006 == Global_30658[1])
							{
								iVar49 = 3;
								iLocal_293 = 6;
							}
							else
							{
								iLocal_293 = 4294967295;
								iVar49 = 0;
							}
							if (!iLocal_293 != 4294967295)
							{
								if (Function_147(iLocal_293, 8))
								{
									iVar49 = 0;
								}
							}
							else
							{
								iVar49 = 0;
							}
							if (Function_149(&Global_26303, Function_145(), 4294967294, 0, iVar49, 1))
							{
								if (Global_29006 == Global_30640[0])
								{
									if (Global_26055[4] || Function_143(32768))
									{
										if (!Function_147(2, 4))
										{
											Function_142(&Global_26303, 44);
										}
									}
								}
							}
							else
							{
								bLocal_22 = false;
								iLocal_14 = 5;
							}
						}
						iLocal_13++;
						break;
					
					case 0x00000002:
						Function_141();
						Global_26303.f_24 = Function_127(&Global_26303, 0, 80, 2000, 4294967295);
						iLocal_291 = Global_29006;
						Function_112();
						Function_111("EVENT_INIT: BOUNTYHUNTER_GET_A_VALID_REGION_FROM_STRUCT");
						iLocal_13++;
						break;
					
					case 0x00000003:
						if ((Global_3386 != 0 || IS_EARLIER_THAN(GET_TIME_OF_DAY(), Function_110(1))) || IS_LATER_THAN(GET_TIME_OF_DAY(), Function_157(32)))
						{
							bLocal_22 = 2000;
							break;
						}
						else if (Function_109(&(Global_29008[Global_29006]), 4))
						{
							iLocal_13++;
						}
						else
						{
							bLocal_22 = 2000;
							break;
						}
						break;
					
					case 0x00000004:
						if (Function_102(Global_29006))
						{
							iLocal_13++;
						}
						else
						{
							bLocal_22 = 600;
							break;
						}
						break;
					
					case 0x00000005:
						ScriptParam_0.f_52 = 5.0f;
						if (iLocal_100 == 0)
						{
							if (Function_100(0) == 1)
							{
								ScriptParam_0.f_64 = 5;
								(&ScriptParam_0 + 64)->f_4 = 512;
								Function_141();
								if (Function_99())
								{
									PRINTSTRING("WANTED POSTER spawnPos: ");
									PRINTVECTOR(*(&ScriptParam_0 + 8));
									PRINTNL();
									Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("wpLay") };
									bVar0 = CREATE_LAYOUT(&Local_78);
									if (!IS_LAYOUTREF_VALID(bVar0))
									{
										bLocal_22 = false;
										iLocal_14 = 5;
										break;
									}
									if (Function_96())
									{
										STREAMING_LOAD_BOUNDS(vLocal_284, fLocal_290, 0);
									}
									else
									{
										LOG_ERROR("Cannot load bounds for poster");
									}
									iLocal_13++;
									bLocal_22 = 1000;
								}
								else
								{
									iLocal_14 = 5;
									bLocal_22 = false;
								}
								Function_111("EVENT_INIT: WANTEDPOSTER_FindPosterFlag");
							}
							else
							{
								bLocal_22 = 3000;
							}
						}
						break;
					
					case 0x00000006:
						if (IS_OBJECT_VALID(bLocal_117))
						{
							if (Function_90(&uLocal_287, &fVar39, 0, 0))
							{
								GET_OBJECT_POSITION(bLocal_117, &ScriptParam_0 + 8);
								GET_OBJECT_ORIENTATION(bLocal_117, &ScriptParam_0 + 20);
								ScriptParam_0.f_48 = bLocal_117;
								bLocal_22 = false;
								iLocal_13 = 9;
								iLocal_14 = 1;
							}
							else
							{
								iLocal_14 = 5;
								bLocal_22 = false;
							}
						}
						else
						{
							iLocal_14 = 5;
							bLocal_22 = false;
						}
						break;
					
					case 0x00000007:
						break;
					
					default:
						LOG_ERROR("Wanted poster initilization went weird");
						iLocal_14 = 5;
						bLocal_22 = false;
						break;
				}
				if (iLocal_14 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_116));
				}
				break;
			
			case 0x00000001:
				if (STREAMING_ARE_BOUNDS_LOADED(vLocal_284, fLocal_290))
				{
					if (!Function_156(uLocal_99, 32) && iLocal_106 != 1)
					{
						if (Function_88(StackVal, StackVal, StackVal, StackVal, bVar0, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20)))
						{
							Function_87(&uLocal_99, 32);
						}
						else
						{
							bLocal_22 = false;
							iLocal_14 = 5;
							break;
						}
						PRINTSTRING("BOUNTYHUNTER spawnPos: ");
						PRINTVECTOR(*(&ScriptParam_0 + 8));
						PRINTNL();
					}
					Function_141();
					if (iLocal_106 == 0)
					{
						if (!Function_85(StackVal, StackVal, bVar0, *(&ScriptParam_0 + 8)))
						{
							bLocal_22 = false;
							iLocal_14 = 5;
							break;
						}
						iLocal_106 = 1;
					}
					Function_111("WANTEDPOSTER_CreatePosterBeforeHand");
					if (Function_156(uLocal_99, 32))
					{
						if (!Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0, bVar0, *(&ScriptParam_0 + 20)))
						{
							bLocal_22 = false;
							iLocal_14 = 5;
							break;
						}
						else if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_276) && !iLocal_282)
						{
							bLocal_22 = false;
							iLocal_14 = 5;
							break;
						}
						else if (iLocal_292 <= 5 && IS_OBJECT_VALID(bLocal_113))
						{
							Function_74(0);
							Function_152(&iLocal_86);
							iLocal_14 = 2;
							bLocal_22 = false;
						}
					}
				}
				if (iLocal_14 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_116));
				}
				break;
			
			case 0x00000002:
				if (!Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0, bVar0, *(&ScriptParam_0 + 20)))
				{
					iLocal_14 = 5;
				}
				else if (iLocal_104 == 1)
				{
					Function_72(1);
					if (IS_BLIP_VALID(bLocal_112))
					{
						SET_BLIP_BLINK(bLocal_112, 0, 0, 5f);
					}
					iLocal_14 = 3;
				}
				else if (Function_71(1, 0, 1, 1) || Function_70())
				{
					iLocal_14 = 5;
				}
				else if (Global_3403 || Global_3404)
				{
					iLocal_14 = 5;
				}
				else if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_276) && !iLocal_282)
				{
					bLocal_22 = false;
					iLocal_14 = 5;
				}
				else if (Function_69(iLocal_291))
				{
					if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
					{
						iLocal_14 = 5;
					}
				}
				if (iLocal_14 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_116));
				}
				break;
			
			case 0x00000003:
				if (Function_68(1))
				{
					Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0, bVar0, *(&ScriptParam_0 + 20));
				}
				if (Function_68(4294967295))
				{
					bLocal_111 = VDIST(Global_34574, vLocal_75) > 3.0f;
					if (StackVal < vLocal_75.y)
					{
						iLocal_280 = 1;
						bLocal_111 = VDIST(Global_34574, vLocal_75) > 6.0f;
					}
					else if (bLocal_111 == 0)
					{
						iLocal_280 = 0;
					}
					else if (Function_64(Global_34573, IS_CAMERA_FOCUS_ENABLED(bLocal_277), 0))
					{
						iLocal_280 = 1;
					}
					else if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
					{
						iLocal_280 = 1;
					}
					else
					{
						iLocal_280 = 0;
					}
				}
				if (iLocal_104 == 1)
				{
					if (IS_OBJECT_VALID(bLocal_116))
					{
						GET_OBJECT_POSITION(bLocal_116, &vLocal_75);
					}
					Function_141();
					if (!Function_156(uLocal_99, 64))
					{
						if (Function_68(0))
						{
							if (Global_3403 || Global_3404)
							{
								if (iLocal_103 == 1)
								{
									Function_51(0, bVar0);
								}
							}
							else if (Function_71(1, 0, 1, 1) || Function_70())
							{
								if (iLocal_103 == 1)
								{
									Function_51(0, bVar0);
								}
							}
							else if (iLocal_280 != 1 && bLocal_111 != 1)
							{
								if (iLocal_103 == 1)
								{
									Function_51(0, bVar0);
								}
							}
							else if (iLocal_103 == 0)
							{
								Function_51(1, bVar0);
							}
						}
					}
					Function_111("Activate Poster Check");
					if (Function_49())
					{
						if (Function_69(Global_26303.f_24))
						{
							bLocal_108 = true;
							Var1.f_4 = 512;
							Function_48();
							Function_48();
							if (Function_43(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_48(), Function_48(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var1, 1, 1, 0x40a00000, 4294967295, 0, 0))
							{
								Function_42(1);
							}
							else
							{
								LOG_ERROR("Problem setting bounty hunter beat from wanted poster");
							}
						}
						else
						{
							LOG_ERROR("Bad location found, search settings should be changed");
						}
						if (iLocal_105 == 1)
						{
							HUD_CLEAR_HELP_QUEUE();
						}
						iLocal_14 = 5;
						bLocal_22 = 1500;
					}
					else if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_276) && !iLocal_282)
					{
						bLocal_22 = false;
						iLocal_14 = 5;
					}
					else if (!Function_156(uLocal_99, 128))
					{
						Function_141();
						Function_72(1);
						if (IS_BLIP_VALID(bLocal_112))
						{
							SET_BLIP_BLINK(bLocal_112, 1, 0, 5f);
						}
						Function_87(&uLocal_99, 128);
						bLocal_22 = false;
						Function_111("showing blip");
					}
					else
					{
						Function_141();
						if (Function_68(3))
						{
							if (Global_3386 == 1)
							{
								if (Function_156(uLocal_99, 16) && iLocal_103 != 1)
								{
									if (bLocal_107 == 0)
									{
										if (Function_40())
										{
											Function_39(&iLocal_119);
											Function_31(&iLocal_119, "npm_bh_nb1", 0);
											Function_31(&iLocal_119, "npm_bh_nb2", 0);
										}
									}
									Function_30(&uLocal_99, 16);
									if (Function_28(&iLocal_119, 0, 0))
									{
										Function_24(&iLocal_119);
									}
								}
							}
						}
						Function_111("PlayerInTown Check");
					}
					if (iLocal_103 == 1)
					{
						if (IS_OBJECT_VALID(bLocal_277))
						{
							if (Function_156(uLocal_99, 64))
							{
								if (IS_OBJECT_VALID(bLocal_277))
								{
									SET_CAMERA_FOCUS_ENABLED(bLocal_277, 0);
									DESTROY_OBJECT(bLocal_277);
								}
							}
							else
							{
								Function_141();
								Function_21();
								Function_111("WANTEDPOSTER_UpdateContextUse");
								if (iLocal_109 == 0)
								{
									vLocal_72 = { 0.0f, 0.0f, -1.0f };
									Function_20(&vLocal_72, fLocal_283);
									vLocal_72 = { StackVal, StackVal, Function_20(&vLocal_72, fLocal_283) };
									Function_19(StackVal, StackVal, StackVal, StackVal, vLocal_75, Global_34574, &uLocal_69);
									fLocal_278 = VDOT(&vLocal_72, &uLocal_69);
									iLocal_279 = IS_CAMERA_FOCUS_ENABLED(bLocal_277);
									Function_141();
									if (iLocal_279 == 1)
									{
										if (IS_CAMERA_FOCUS_ACTIVE(bLocal_277) != 1 && !Function_156(uLocal_99, 1))
										{
											MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
											if (!Function_15(57, 0))
											{
												if (iLocal_291 == Global_30640[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2190.127f, 16.58f, 2614.479f, 6.985f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30717[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, 663.996f, 78.755f, 1315.594f, 181.049f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30693[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2664.823f, 31.387f, 4249.94f, 259.823f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30707[1])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -717.414f, 63.247f, 3292.827f, 139.017f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30685[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -4335.978f, 30.189f, 4382.272f, 7.678f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30668[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -817.061f, 93.809f, 2425.982f, 162.56f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30723[1])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -416.355f, 152.043f, 1603.441f, 282.897f, 1, 1, 1);
												}
												else if (iLocal_291 == Global_30658[1])
												{
													TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3679.052f, 42.778f, 2116.671f, 52.789f, 1, 1, 1);
												}
											}
											else if (iLocal_291 == Global_30640[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2190.127f, 16.58f, 2614.479f, 6.985f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30717[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, 663.996f, 78.755f, 1315.594f, 181.049f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30693[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2664.802f, 31.387f, 4249.888f, 257.764f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30707[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -717.414f, 63.247f, 3292.827f, 139.017f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30685[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -4335.978f, 30.189f, 4382.272f, 7.678f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30668[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -817.061f, 93.809f, 2425.982f, 162.56f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30723[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -416.355f, 152.043f, 1603.441f, 282.897f, 1, 1, 1);
											}
											else if (iLocal_291 == Global_30658[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(Global_34573, -3679.052f, 42.778f, 2116.671f, 52.789f, 1, 1, 1);
											}
											Function_87(&uLocal_99, 1);
										}
										else if (IS_CAMERA_FOCUS_ACTIVE(bLocal_277) != 0 && Function_156(uLocal_99, 1))
										{
											SET_ACTION_NODE_FOR_ACTOR(Global_34573, "post_wanted/PostWantedAnim");
											Function_30(&uLocal_99, 1);
										}
									}
									Function_111("camerafocus usage logic");
									Function_141();
									if ((iLocal_279 != 1 && fLocal_278 > 0.0f) && bLocal_111 != 1)
									{
										Function_51(0, bVar0);
									}
									else if (iLocal_279 != 0 && fLocal_278 < 0.0f)
									{
										Function_51(1, bVar0);
									}
									else if (Function_156(uLocal_99, 64) && iLocal_279 != 1)
									{
										Function_51(0, bVar0);
									}
									Function_111("camerafocus angle logic");
								}
								else if (IS_CAMERA_FOCUS_ENABLED(bLocal_277))
								{
									Function_51(0, bVar0);
								}
							}
						}
					}
				}
				if (Global_3386 == 0)
				{
					bLocal_22 = 3000;
					break;
				}
				if (iLocal_14 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_116));
				}
				break;
			
			case 0x00000005:
				RELEASE_LAYOUT_REF(bVar0);
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_22 = false;
				break;
		}
		WAIT(bLocal_22);
	}
	Function_8(bVar0);
	if (Function_156(uLocal_99, 4))
	{
		Function_3();
	}
	Function_1(iLocal_349);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF62 / 3938
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_2(105)), 0);
	return;
}

int Function_2(bool bParam0) //Position: 0xF83 / 3971
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_3() //Position: 0xF99 / 3993
{
	Function_4(&bLocal_23);
	return;
}

void Function_4(int iParam0) //Position: 0xFA4 / 4004
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0xFCA / 4042
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x10F8 / 4344
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(var uParam0, int iParam1) //Position: 0x1112 / 4370
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(bool bParam0) //Position: 0x112F / 4399
{
	if (bLocal_108)
	{
		TASK_CLEAR(Global_34573);
	}
	if (IS_OBJECT_VALID(bLocal_118))
	{
		DESTROY_OBJECT(bLocal_118);
	}
	if (Function_156(uLocal_99, 512))
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (IS_BLIP_VALID(bLocal_112))
	{
		REMOVE_BLIP(bLocal_112);
	}
	if (IS_ACTOR_VALID(bLocal_15))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_15);
		CLEAR_ACTOR_MAX_SPEED(bLocal_15);
	}
	if (IS_VOLUME_VALID(bLocal_97))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_97);
		DESTROY_VOLUME(bLocal_97);
	}
	if (IS_OBJECT_VALID(bLocal_113))
	{
		DESTROY_OBJECT(bLocal_113);
	}
	if (IS_OBJECT_VALID(bLocal_114))
	{
		DESTROY_OBJECT(bLocal_114);
	}
	if (IS_VOLUME_VALID(bLocal_98))
	{
		DESTROY_VOLUME(bLocal_98);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_276))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_276);
	}
	if (IS_OBJECT_VALID(bLocal_115))
	{
		DESTROY_OBJECT(bLocal_115);
	}
	if (IS_OBJECT_VALID(bLocal_116))
	{
		DESTROY_OBJECT(bLocal_116);
	}
	if (IS_OBJECT_VALID(bLocal_277))
	{
		DESTROY_OBJECT(bLocal_277);
	}
	Function_13();
	Function_11(1);
	Function_39(&iLocal_119);
	DESTROY_OBJECT(bLocal_115);
	Function_9();
	if (IS_BLIP_VALID(bLocal_112))
	{
		SET_BLIP_BLINK(bLocal_112, 0, 0, 5f);
	}
	if (IS_ITERATOR_VALID(bLocal_294))
	{
		DESTROY_ITERATOR(bLocal_294);
	}
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		DESTROY_LAYOUT(bParam0);
	}
	return;
}

void Function_9() //Position: 0x1230 / 4656
{
	if (!Function_10(StackVal, StackVal, vLocal_284))
	{
		STREAMING_UNLOAD_BOUNDS();
	}
	vLocal_284 = { 0.0f, 0.0f, 0.0f };
	return;
}

bool Function_10(vector3 vParam0) //Position: 0x124D / 4685
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_11(int iParam0) //Position: 0x1265 / 4709
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_12())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_12() //Position: 0x12A1 / 4769
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

void Function_13() //Position: 0x12C6 / 4806
{
	if (iLocal_101 == 0)
	{
		if (IS_ACTOR_VALID(bLocal_15))
		{
			if (Global_3403 == 0)
			{
				TASK_CLEAR(bLocal_15);
				TASK_WANDER(bLocal_15, 3212836864);
				iLocal_349 = 30;
			}
			AI_CONVERSE_ENABLE(bLocal_15);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bLocal_15, 1);
			RELEASE_ACTOR(bLocal_15);
			Function_14(bLocal_15, 1);
		}
		iLocal_101 = 1;
	}
	return;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x130E / 4878
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

bool Function_15(int iParam0, bool bParam1) //Position: 0x133D / 4925
{
	int iVar0;
	
	iVar0 = Function_17(iParam0);
	if (!Function_16(iVar0))
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

bool Function_16(int iParam0) //Position: 0x137A / 4986
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_17(int iParam0) //Position: 0x1391 / 5009
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x13AB / 5035
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_19(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x13C1 / 5057
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_20(var uParam0, bool bParam1) //Position: 0x13E4 / 5092
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

void Function_21() //Position: 0x13FE / 5118
{
	if (!Function_156(uLocal_99, 64))
	{
		if (iLocal_103 == 1)
		{
			if (!Function_156(uLocal_99, 256))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_276))
				{
					if (IS_OBJECT_VALID(bLocal_118))
					{
						DESTROY_OBJECT(bLocal_118);
					}
					MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
					Function_87(&uLocal_99, 256);
				}
				if (iLocal_109 == 1)
				{
					Function_23();
				}
			}
			if (Function_156(uLocal_99, 256))
			{
				if (iLocal_104 != 1 && iLocal_110 != 0)
				{
					SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_116, "nPlayerUse", 0, 1, 0);
					TASK_CLEAR(Global_34573);
					TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_116), "nPlayerUse", 1, 1);
					TASK_PRIORITY_SET(Global_34573, 1);
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_276))
					{
						Function_87(&uLocal_99, 512);
						iLocal_282 = 1;
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_276);
						ENABLE_USE_CONTEXTS(0);
					}
					iLocal_110 = 1;
					Function_22();
				}
			}
		}
	}
	return;
}

void Function_22() //Position: 0x14CA / 5322
{
	SET_OBJECT_POSITION(bLocal_98, 50.0f, 50.0f, 50.0f);
	SET_CAMERA_FOCUS_ENABLED(bLocal_277, 0);
	iLocal_109 = 1;
	return;
}

void Function_23() //Position: 0x14EF / 5359
{
	SET_OBJECT_POSITION(bLocal_98, vLocal_75);
	SET_CAMERA_FOCUS_ENABLED(bLocal_277, 1);
	iLocal_109 = 0;
	return;
}

void Function_24(int iParam0) //Position: 0x1509 / 5385
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
			Function_25(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

void Function_25(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x15A3 / 5539
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_26(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_26(int iParam0) //Position: 0x161E / 5662
{
	char* cVar0[16];
	
	if (!Function_27())
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

bool Function_27() //Position: 0x165D / 5725
{
	if (Function_156(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_28(int iParam0, int iParam1, int iParam2) //Position: 0x1678 / 5752
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(iParam0 + 4));
	bVar3 = VDIST(Global_34574, *(iParam0 + 16));
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
	else if (Function_29() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_480 <= iParam0->f_404)
	{
		if (STRING_LENGTH(iParam0 + 336[iParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_29() //Position: 0x1716 / 5910
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_30(var uParam0, int iParam1) //Position: 0x1743 / 5955
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

int Function_31(int iParam0, bool bParam1, int iParam2) //Position: 0x1756 / 5974
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
	if (Function_156(iParam0->f_584, 32))
	{
		if (!Function_37(iParam0->f_624))
		{
			return 0;
		}
	}
	iVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	iVar21 = Function_34(Function_36(iParam0->f_624), Function_35(iParam0->f_624));
	iVar22 = Function_32(Function_36(iParam0->f_624), Function_35(iParam0->f_624));
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

int Function_32(int iParam0, int iParam1) //Position: 0x18B5 / 6325
{
	int iVar0;
	int iVar1;
	
	if (!Function_33(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_36(iVar1) != iParam0 && Function_35(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_33(int iParam0) //Position: 0x1901 / 6401
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_34(int iParam0, int iParam1) //Position: 0x1916 / 6422
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_36(iVar1) != iParam0 && Function_35(iVar1) != iParam1)
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

int Function_35(int iParam0) //Position: 0x1962 / 6498
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

int Function_36(int iParam0) //Position: 0x1981 / 6529
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

bool Function_37(int iParam0) //Position: 0x199C / 6556
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_38(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_38(int iParam0) //Position: 0x19C0 / 6592
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_39(int iParam0) //Position: 0x19D5 / 6613
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_336 - 1))
	{
		strcpy(iParam0 + 336[iVar04], "", 16);
		(*iParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	iParam0->f_480 = 0;
	return;
}

bool Function_40() //Position: 0x1A11 / 6673
{
	if (Function_41(359) < 0 || Function_41(358) < 0)
	{
		return 0;
	}
	return 1;
}

int Function_41(int iParam0) //Position: 0x1A31 / 6705
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_42(bool bParam0) //Position: 0x1A72 / 6770
{
	if (bParam0 == 1)
	{
		Function_87(&Global_26303 + 8, 1);
	}
	else
	{
		Function_30(&Global_26303 + 8, 1);
	}
	return;
}

bool Function_43(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x1A93 / 6803
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_47(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_46(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_45(&(Global_25267[iVar058]), 1);
					Function_44(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_44(var uParam0, int iParam1) //Position: 0x1BD5 / 7125
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1BEF / 7151
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_46(int iParam0, int iParam1) //Position: 0x1C00 / 7168
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_47(int iParam0, int iParam1) //Position: 0x1D6C / 7532
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_48() //Position: 0x1D89 / 7561
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_49() //Position: 0x1D92 / 7570
{
	if (Function_156(uLocal_99, 256) && Function_50(&iLocal_92))
	{
		if (Function_156(uLocal_99, 64) && GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_116))
		{
			return 1;
		}
		if (Function_153(&iLocal_92, 4.0f))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_116)))
			{
				GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(bLocal_116));
			}
			return 1;
		}
		return 0;
	}
	if (Function_68(4294967295))
	{
		if (iLocal_104 == 1)
		{
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_116))
			{
				bLocal_22 = false;
			}
			if (GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(bLocal_116) && !Function_156(uLocal_99, 64))
			{
				DESTROY_OBJECT(bLocal_277);
				Function_22();
				Function_87(&uLocal_99, 64);
			}
			if (Function_156(uLocal_99, 256))
			{
				iLocal_95 = GET_TIME_OF_DAY();
				ADD_TIME(&iLocal_95, 1, 0, false, 0);
				Function_152(&iLocal_92);
				bLocal_22 = false;
			}
		}
	}
	return 0;
}

bool Function_50(int iParam0) //Position: 0x1E54 / 7764
{
	return Function_156(*iParam0, 1);
}

void Function_51(int iParam0, bool bParam1) //Position: 0x1E61 / 7777
{
	if (!Function_52(bParam1))
	{
	}
	if (iParam0 == 0)
	{
		if (IS_OBJECT_VALID(bLocal_277))
		{
			SET_CAMERA_FOCUS_ENABLED(bLocal_277, 0);
		}
		Function_72(0);
		Function_22();
	}
	else
	{
		if (IS_OBJECT_VALID(bLocal_277))
		{
			SET_CAMERA_FOCUS_ENABLED(bLocal_277, 1);
		}
		Function_72(1);
		Function_23();
	}
	iLocal_103 = iParam0;
	return;
}

bool Function_52(int iParam0) //Position: 0x1EAB / 7851
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	iVar6 = 1;
	if (!IS_OBJECT_VALID(bLocal_113))
	{
		return 0;
	}
	Function_63(&vVar0, &vVar3);
	SET_OBJECT_POSITION(bLocal_113, vVar0);
	SET_OBJECT_ORIENTATION(bLocal_113, vVar3);
	if (IS_OBJECT_VALID(bLocal_118))
	{
		DESTROY_OBJECT(bLocal_118);
	}
	if (!Function_156(uLocal_99, 256))
	{
		Function_53(iParam0, &bLocal_113, &bLocal_118, Global_26303.f_12);
	}
	return iVar6;
}

int Function_53(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1F05 / 7941
{
	var uVar0;
	bool bVar3;
	struct<8> Var4;
	var uVar12;
	var uVar28;
	var uVar44;
	var uVar60;
	
	if (!IS_OBJECT_VALID(*uParam1))
	{
		return 0;
	}
	GET_OBJECT_POSITION(*uParam1, &uVar0);
	Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("posterText") };
	Function_62(uParam3, &uVar44);
	bVar3 = Function_61(Global_26303.f_20);
	Function_60(bVar3, &uVar60);
	Function_59(Global_26303.f_24, &uVar12);
	Function_54(&uVar28);
	PRINTSTRING("Bounty Gang: ");
	PRINTINT(bVar3);
	PRINTNL();
	if (IS_OBJECT_VALID(*uParam2))
	{
		DESTROY_OBJECT(*uParam2);
	}
	*uParam2 = UNK_0x211DE185(uParam0, &Var4, "pm_wp_text", &uVar60, &uVar44, &uVar12, &uVar28, *uParam1, 0, 4278649856);
	if (!IS_OBJECT_VALID(*uParam2))
	{
		return 0;
	}
	return 1;
}

void Function_54(int iParam0) //Position: 0x1FC1 / 8129
{
	memcpy(iParam0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(&Global_26303), 16);
	return;
}

struct<32> Function_55(int iParam0) //Position: 0x1FD3 / 8147
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	
	iVar8 = Function_56(iParam0, 0);
	iVar9 = Function_56(iParam0, 1);
	UI_SET_MONEY("blah", "wanted_poster_dead_amount", iVar8);
	UI_SET_MONEY("blah", "wanted_poster_alive_amount", iVar9);
	strcpy(&cVar0, "wanted_poster_bounty_format", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_56(int iParam0, bool bParam1) //Position: 0x2063 / 8291
{
	bool bVar0;
	char* cVar1[32];
	
	switch (iParam0->f_12)
	{
		case 0x00000001:
			if (bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
		
		case 0x00000000:
		case 0x00000002:
			if (bParam1)
			{
				bVar0 = 80;
			}
			else
			{
				bVar0 = 40;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				bVar0 = 120;
			}
			else
			{
				bVar0 = 60;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				bVar0 = 200;
			}
			else
			{
				bVar0 = 100;
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				bVar0 = 300;
			}
			else
			{
				bVar0 = 150;
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				bVar0 = 400;
			}
			else
			{
				bVar0 = 200;
			}
			break;
		
		default:
			if (bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
			if (bParam1 == 1)
			{
				strcpy(&cVar1, "Bounty Alive reward: ", 32);
			}
			else
			{
				strcpy(&cVar1, "Bounty Dead reward: ", 32);
			}
			stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	}
	if (Function_58() > 4)
	{
		bVar0 *= 2;
	}
	if (Function_57())
	{
		return (bVar0 / 2);
	}
	return bVar0;
}

bool Function_57() //Position: 0x2186 / 8582
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_58() //Position: 0x21B1 / 8625
{
	return Global_12976.f_152;
}

void Function_59(int iParam0, char* cParam1) //Position: 0x21BC / 8636
{
	strcpy(cParam1, GET_OBJECT_NAME(StackVal), 64);
	return;
}

void Function_60(char* cParam0, char* cParam1) //Position: 0x21D2 / 8658
{
	switch (cParam0)
	{
		case 0x00000004:
			strcpy(cParam1, "npm_bh_ban", 64);
			break;
		
		case 0x00000006:
			strcpy(cParam1, "npm_bh_ctl", 64);
			break;
		
		case 0x00000001:
			strcpy(cParam1, "pm_bh_dtch", 64);
			break;
		
		case 0x00000005:
			strcpy(cParam1, "npm_bh_dnd", 64);
			break;
		
		case 0x00000003:
			strcpy(cParam1, "npm_bh_tre", 64);
			break;
		
		case 0x00000007:
			strcpy(cParam1, "npm_bh_gen", 64);
			break;
		
		case 0x00000000:
			strcpy(cParam1, "", 64);
			LOG_ERROR("WANTEDPOSTER_GetGangString - Invalid gang type");
			break;
	}
	return;
}

int Function_61(bool bParam0) //Position: 0x22BA / 8890
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

void Function_62(char* cParam0, char* cParam1) //Position: 0x2369 / 9065
{
	switch (cParam0)
	{
		case 0x00000001:
			strcpy(cParam1, "pm_bh_wpc1", 64);
			break;
		
		case 0x00000002:
			strcpy(cParam1, "pm_bh_wpc2", 64);
			break;
		
		case 0x00000003:
			strcpy(cParam1, "pm_bh_wpc3", 64);
			break;
		
		case 0x00000004:
			strcpy(cParam1, "pm_bh_wpc4", 64);
			break;
		
		case 0x00000005:
			strcpy(cParam1, "pm_bh_wpc5", 64);
			break;
		
		case 0x00000006:
			strcpy(cParam1, "pm_bh_wpc6", 64);
			break;
		
		case 0x00000000:
			strcpy(cParam1, "pm_bh_wpcd", 64);
			break;
		
		default:
			strcpy(cParam1, "pm_bh_wpc1", 64);
			break;
	}
	return;
}

var Function_63(var uParam0, int iParam1) //Position: 0x2440 / 9280
{
	int iVar0;
	
	iVar0 = 1;
	if (iLocal_291 == Global_30640[0])
	{
		*uParam0 = { -2190.419f, 17.62955f, 2613.313f };
		*iParam1 = { -0.042413f, 1.854375f, -0.5594838f };
	}
	else if (iLocal_291 == Global_30717[0])
	{
		*uParam0 = { 664.2913f, 79.80457f, 1316.56f };
		*iParam1 = { 179.9807f, -0.002636f, -179.4155f };
	}
	else if (iLocal_291 == Global_30668[0])
	{
		*uParam0 = { -817.2354f, 94.85875f, 2427.042f };
		*iParam1 = { -179.4077f, 12.68162f, -179.3707f };
	}
	else if (iLocal_291 == Global_30658[1])
	{
		*uParam0 = { -3679.977f, 43.82752f, 2116.094f };
		*iParam1 = { -0.688952f, 45.63879f, -0.90303f };
	}
	else if (iLocal_291 == Global_30685[0])
	{
		*uParam0 = { -4336.39f, 31.23863f, 4381.447f };
		*iParam1 = { -0.068632f, 5.60906f, -0.567574f };
	}
	else if (iLocal_291 == Global_30723[1])
	{
		*uParam0 = { -415.3171f, 153.0927f, 1602.938f };
		*iParam1 = { 2.397115f, -76.85792f, -2.474441f };
	}
	else if (iLocal_291 == Global_30707[1])
	{
		*uParam0 = { -717.9177f, 64.29659f, 3293.778f };
		*iParam1 = { -179.5706f, 37.63261f, -179.2682f };
	}
	else if (iLocal_291 == Global_30693[0])
	{
		*uParam0 = { -2663.823f, 32.43675f, 4249.949f };
		*iParam1 = { 176.3454f, -80.69141f, -176.3203f };
	}
	else
	{
		LOG_ERROR("Undefined wanted poster location");
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_64(bool bParam0, bool bParam1, bool bParam2) //Position: 0x261C / 9756
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_67(bParam0))
	{
		return 1;
	}
	if (Function_66(bParam0))
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
	if (Function_65())
	{
		return 1;
	}
	return 0;
}

bool Function_65() //Position: 0x26D2 / 9938
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_66(bool bParam0) //Position: 0x26E9 / 9961
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_67(bool bParam0) //Position: 0x26F4 / 9972
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_68(int iParam0) //Position: 0x2702 / 9986
{
	if (bLocal_102)
	{
		if (iLocal_348 != iParam0 || iParam0 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_69(int iParam0) //Position: 0x271E / 10014
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_70() //Position: 0x2734 / 10036
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_71(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x273D / 10045
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

void Function_72(int iParam0) //Position: 0x27E1 / 10209
{
	bool bVar0;
	
	if (IS_BLIP_VALID(bLocal_112))
	{
		REMOVE_BLIP(bLocal_112);
	}
	if (IS_OBJECT_VALID(bLocal_113))
	{
		bVar0 = bLocal_113;
	}
	else if (IS_OBJECT_VALID(bLocal_115))
	{
		bVar0 = bLocal_115;
	}
	if (iParam0 != 1 && IS_OBJECT_VALID(bVar0))
	{
		bLocal_112 = ADD_BLIP_FOR_OBJECT(bVar0, 393, 0f, 2, 0);
		SET_BLIP_SCALE(bLocal_112, 1.0f);
		UNK_0x6077F3AE(bLocal_112, 0);
		Function_73(1, 0x41200000);
	}
	return;
}

void Function_73(int iParam0, float fParam1) //Position: 0x2841 / 10305
{
	if (!Function_12())
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

void Function_74(var uParam0) //Position: 0x2878 / 10360
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (uParam0 + Function_2(90)), 0);
	return;
}

bool Function_75(struct<37> Param0, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, bool bParam51, vector3 vParam52) //Position: 0x2899 / 10393
{
	int iVar0;
	var uVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	iVar0 = 1;
	vParam52 = { StackVal, StackVal, vParam52 };
	bParam51 = bParam51;
	Function_141();
	if (iLocal_292 == 8)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_15) || IS_ACTOR_DEAD(bLocal_15))
	{
		return 0;
	}
	GET_POSITION(bLocal_15, &uVar1);
	if (iLocal_292 < 3)
	{
		if (Global_63399 == 32)
		{
			if (Param0.f_36 == 0)
			{
				iLocal_292 = 8;
				iLocal_14 = 5;
				return 0;
			}
		}
	}
	if ((iLocal_292 == 8 && iLocal_292 == 7) && iLocal_104 != 1)
	{
		if (Function_84(bLocal_15))
		{
			Function_83();
			iLocal_292 = 7;
		}
	}
	switch (iLocal_292)
	{
		case 0x00000000:
			if (bLocal_107)
			{
				vVar4 = { -2660.408f, 31.386f, 4255.722f };
			}
			else
			{
				GET_OBJECT_POSITION(bLocal_115, &vVar4);
			}
			Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("wandvol") };
			vVar7 = { StackVal, StackVal, vVar4 };
			vVar7.f_4 = (vVar7.y - 1.0f);
			bLocal_97 = CREATE_VOLUME_IN_LAYOUT(bParam51, &Local_78, 3, vVar7, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f);
			ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(bLocal_97, 2);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_15, 1);
			if (bLocal_107)
			{
				TASK_CLEAR(bLocal_15);
				TASK_WANDER_IN_VOLUME(bLocal_15, bLocal_97, -1f);
				TASK_PRIORITY_SET(bLocal_15, 2);
				SET_ACTOR_INVULNERABILITY(bLocal_15, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_15, 0);
			}
			AI_CONVERSE_DISABLE(bLocal_15);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_15, 1);
			Function_14(bLocal_15, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_15, false);
			iLocal_292 = 1;
			break;
		
		case 0x00000001:
			if (bLocal_107)
			{
				GET_OBJECT_POSITION(bLocal_115, &vVar4);
				if (VDIST(Global_34574, vVar4) > 25.0f)
				{
					MAKE_ACTOR_READY_FOR_ACTION(bLocal_15, 1);
					TASK_CLEAR(bLocal_15);
					TASK_USE_GRINGO(bLocal_15, GET_GRINGO_FROM_OBJECT(bLocal_115), "UseCase1", 1, 1);
					TASK_PRIORITY_SET(bLocal_15, 0);
					SET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bLocal_97), vVar4);
					iLocal_292 = 3;
				}
			}
			else
			{
				MAKE_ACTOR_READY_FOR_ACTION(bLocal_15, 1);
				TASK_CLEAR(bLocal_15);
				TASK_USE_GRINGO(bLocal_15, GET_GRINGO_FROM_OBJECT(bLocal_115), "UseCase1", 1, 1);
				TASK_PRIORITY_SET(bLocal_15, 2);
				iLocal_292 = 3;
			}
			break;
		
		case 0x00000003:
			if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bLocal_115)) == 0)
			{
				Function_152(&iLocal_89);
				iLocal_292 = 4;
			}
			else if (GET_TASK_STATUS(bLocal_15, 19) == 1 && GET_TASK_STATUS(bLocal_15, 19) == 3)
			{
				iLocal_292 = 7;
			}
			if (GET_CURRENT_GRINGO(bLocal_15) == GET_GRINGO_FROM_OBJECT(bLocal_115))
			{
				iLocal_292 = 5;
			}
			break;
		
		case 0x00000004:
			if (Function_153(&iLocal_89, 2.0f))
			{
				TASK_CLEAR(bLocal_15);
				TASK_USE_GRINGO(bLocal_15, GET_GRINGO_FROM_OBJECT(bLocal_115), "UseCase1", 1, 1);
				TASK_PRIORITY_SET(bLocal_15, 2);
				iLocal_292 = 3;
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(bLocal_15, 19) != 0 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_15), "PosterDone"))
			{
				Function_77(bParam51);
			}
			else if (((iLocal_104 != 0 && !IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_15, "stand_place_poster")) && GET_CURRENT_GRINGO(bLocal_15) == GET_GRINGO_FROM_OBJECT(bLocal_115)) && !GET_TASK_STATUS(bLocal_15, 19) != 0)
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_15), "PosterGood"))
				{
					Function_77(bParam51);
				}
				else
				{
					Function_83();
					iLocal_292 = 7;
					iVar0 = 0;
				}
			}
			else if (GET_TASK_STATUS(bLocal_15, 19) != 0 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bLocal_15), "PosterGood"))
			{
				Function_77(bParam51);
			}
			break;
		
		case 0x00000006:
			if (Function_76(bParam51) == 1)
			{
				Function_51(1, bParam51);
				iLocal_104 = 1;
				if (IS_BLIP_VALID(bLocal_112))
				{
					SET_BLIP_BLINK(bLocal_112, 1, 0, 5f);
				}
				Function_87(&uLocal_99, 16);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_15, bLocal_97, 1, 0);
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_15), "PosterGood");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bLocal_15), "PosterDone");
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_15, 0);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_97);
			iLocal_292 = 8;
			break;
		
		case 0x00000007:
			if (!Function_156(uLocal_99, 8))
			{
				Function_87(&uLocal_99, 8);
				TASK_CLEAR(bLocal_15);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_15, 1);
				Function_9();
			}
			if (MAKE_ACTOR_READY_FOR_ACTION(bLocal_15, 1))
			{
				iLocal_292 = 8;
			}
			break;
		
		case 0x00000008:
			break;
	}
	if (iLocal_292 == 8)
	{
		Function_13();
	}
	Function_111("WANTEDPOSTER_UpdateMissionGiver");
	return iVar0;
}

int Function_76(int iParam0) //Position: 0x2CAA / 11434
{
	if (!IS_OBJECT_VALID(bLocal_113))
	{
		LOG_ERROR("invalid poster object");
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_116))
	{
		if (IS_GRINGO_READY(bLocal_116))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_116), true);
			return 1;
		}
	}
	if (!Function_52(iParam0))
	{
		LOG_ERROR("Could not force the poster position/rotation");
	}
	Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("bhGet") };
	bLocal_116 = CREATE_GRINGO_ON_OBJECT(bLocal_113, &Local_78, "$/content/scripting/gringo/simplegringo/get_wanted_poster", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	GET_OBJECT_POSITION(bLocal_113, &vLocal_75);
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_116)))
	{
		return 0;
		LOG_ERROR("invalid get wanted poster gringo created");
	}
	fLocal_283 = (GET_OBJECT_HEADING(bLocal_116) + 180.0f);
	iLocal_104 = 1;
	Function_9();
	return 1;
	return 0;
}

void Function_77(bool bParam0) //Position: 0x2DE5 / 11749
{
	DESTROY_OBJECT(bLocal_113);
	Function_79(bParam0);
	bLocal_113 = bLocal_114;
	bLocal_114 = "";
	Function_52(bParam0);
	bLocal_277 = CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(bParam0, Function_78(), bLocal_113, "wantedPoster", 2.5f, 2.5001f);
	if (!IS_OBJECT_VALID(bLocal_277))
	{
		LOG_ERROR("Could not create wanted poster camera focus");
	}
	else
	{
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_277, "npm_bh_cfp");
		SET_CAMERA_FOCUS_PLAYER_INVULNERABLE(bLocal_277, 1);
		SET_CAMERA_FOCUS_PLAYER_INPUT_DISABLED(bLocal_277, 1);
	}
	iLocal_292 = 6;
	return;
}

var Function_78() //Position: 0x2E8B / 11915
{
	int iVar0;
	
	return iVar0;
}

void Function_79(bool bParam0) //Position: 0x2E93 / 11923
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (iLocal_281 == 0)
	{
		if (!Function_80(Function_81(Global_26303.f_20)))
		{
			strcpy(&cVar0, "$/fragments/p_pos_wanted", 64);
			if (Global_26303.f_40 <= 10)
			{
				stradd(&cVar0, "0", 64);
			}
			stradd(&cVar0, INT_TO_STRING(Global_26303.f_40), 64);
			stradd(&cVar0, "x", 64);
		}
		else
		{
			strcpy(&cVar0, "$/fragments/p_pos_wanted61x", 64);
		}
		Function_63(&vVar16, &vVar19);
		Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("nbhNewPost") };
		bLocal_114 = CREATE_PROP_IN_LAYOUT(bParam0, &Local_78, &cVar0, vVar16, vVar19, 0);
		if (IS_OBJECT_VALID(bLocal_114))
		{
			SET_PROP_AI_OBSTACLE_ENABLED(bLocal_114, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_114, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_114, 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bLocal_114), 1);
			iLocal_281 = 1;
		}
		else
		{
			LOG_ERROR("WANTEDPOSTER - Invalid backup object returned by prop creation");
		}
	}
	return;
}

bool Function_80(bool bParam0) //Position: 0x2FB8 / 12216
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

bool Function_81(bool bParam0) //Position: 0x300A / 12298
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	
	iVar1 = 4294967295;
	if (Function_82(bParam0))
	{
		while (iVar0 <= 45)
		{
			Function_142(&Var2, iVar0);
			if (Var2.f_20 == bParam0)
			{
				iVar1 = iVar0;
				iVar0 = 45 + 1;
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool Function_82(bool bParam0) //Position: 0x3048 / 12360
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_83() //Position: 0x305F / 12383
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar3 = { 0.0f, -1.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(bLocal_115, vVar3, &vVar0);
	SET_OBJECT_POSITION(bLocal_113, vVar0);
	return;
}

bool Function_84(bool bParam0) //Position: 0x3082 / 12418
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

bool Function_85(bool bParam0, vector3 vParam1) //Position: 0x3099 / 12441
{
	var uVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	if (Function_10(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	vVar3 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, -1.0f, 0.0f) };
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(bLocal_113))
	{
		return 0;
	}
	GET_OBJECT_RELATIVE_POSITION(bLocal_115, vVar3, &uVar0);
	bVar22 = Function_81(Global_26303.f_20);
	if (!Function_86(bVar22))
	{
		LOG_ERROR("Invalid bounty hunter actorenum");
		return 0;
	}
	if (!Function_80(bVar22))
	{
		strcpy(&cVar6, "$/fragments/p_pos_wanted", 64);
		if (Global_26303.f_40 <= 10)
		{
			stradd(&cVar6, "0", 64);
		}
		stradd(&cVar6, INT_TO_STRING(Global_26303.f_40), 64);
		stradd(&cVar6, "x", 64);
	}
	else
	{
		strcpy(&cVar6, "$/fragments/p_pos_wanted61x", 64);
	}
	Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("bhPoster") };
	bLocal_113 = CREATE_PROP_IN_LAYOUT(bParam0, &Local_78, &cVar6, vVar3, 0.0f, 0.0f, 0.0f, 0);
	if (!IS_OBJECT_VALID(bLocal_113))
	{
		return 0;
	}
	SET_PROP_AI_OBSTACLE_ENABLED(bLocal_113, 0);
	SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_113, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_113, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bLocal_113), 1);
	Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("wpcntxt") };
	bLocal_98 = CREATE_VOLUME_IN_LAYOUT(bParam0, &Local_78, 3, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.5f, 2.0f, 2.5f);
	if (!IS_VOLUME_VALID(bLocal_98))
	{
		return 0;
	}
	bLocal_276 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("get_wanted_poster", bLocal_98, 36, 4, 0, false, 0, 0, 4294967295, 0);
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_276))
	{
		return 0;
	}
	return 1;
}

bool Function_86(int iParam0) //Position: 0x3250 / 12880
{
	if (iParam0 > 0 || iParam0 <= 45)
	{
		return 0;
	}
	return 1;
}

void Function_87(var uParam0, int iParam1) //Position: 0x3266 / 12902
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_88(bool bParam0, vector3 vParam1, vector3 vParam4) //Position: 0x3275 / 12917
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	vVar0 = { StackVal, StackVal, vParam1 };
	Function_141();
	Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("bhGringo") };
	vVar0 = { StackVal, StackVal, vParam1 };
	bLocal_115 = CREATE_GRINGO_IN_LAYOUT(bParam0, &Local_78, "$/content/scripting/gringo/SimpleGringo/stand_place_poster", vVar0, vParam4);
	if (!IS_OBJECT_VALID(bLocal_115))
	{
		SCRIPT_BREAKPOINT("Invalid gringo created");
		return 0;
	}
	Function_111("WANTEDPOSTER_CreateScene - GRINGO");
	if (!Function_10(StackVal, StackVal, vLocal_284))
	{
		PRINTSTRING("Setting the bounds position");
		PRINTVECTOR(vLocal_284);
		PRINTNL();
		vVar0 = { StackVal, StackVal, vLocal_284 };
	}
	else
	{
		LOG_ERROR("Invalid boundsPos");
	}
	Function_141();
	Local_78 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("nmissgiver") };
	bLocal_15 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_78, (&bLocal_15 + 4)->f_12, vVar0, vParam4);
	Function_111("WANTEDPOSTER_CreateScene - ACTOR");
	Function_141();
	if (IS_ACTOR_VALID(bLocal_15))
	{
		SET_ACTOR_UPDATE_PRIORITY(bLocal_15, false);
		(&bLocal_15 + 4)->f_4 = 1;
		(&bLocal_15 + 4)->f_8 = 0;
		iLocal_292 = 0;
		if (!Function_89(bLocal_15, 0))
		{
		}
	}
	else
	{
		return 0;
	}
	Function_111("WANTEDPOSTER_CreateScene - ACTORSETUP");
	return 1;
}

bool Function_89(bool bParam0, bool bParam1) //Position: 0x3460 / 13408
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

bool Function_90(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x34D9 / 13529
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
	Function_92(4294967295);
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
			else if (Function_91(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_91(var uParam0, int iParam1) //Position: 0x35A9 / 13737
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_92(bool bParam0) //Position: 0x35C7 / 13767
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
						Function_95(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_93(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_95(iVar0);
						}
					}
					else if (Function_93(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_95(iVar0);
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
			Function_95(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_93(bool bParam0, vector3 vParam1) //Position: 0x3728 / 14120
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_94(bParam0);
		vVar0 = { StackVal, StackVal, Function_94(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_94(bool bParam0) //Position: 0x37A2 / 14242
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

void Function_95(int iParam0) //Position: 0x380C / 14348
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

bool Function_96() //Position: 0x386D / 14445
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (iLocal_291 == Global_30640[0])
	{
		vVar0 = { -2191.256f, 16.943f, 2603.014f };
		vVar3 = { -2170.909f, 16.874f, 2591.107f };
		vVar6 = { -2163.57f, 16.391f, 2584.042f };
	}
	else if (iLocal_291 == Global_30717[0])
	{
		vVar0 = { 702.462f, 78.306f, 1346.007f };
		vVar3 = { 700.721f, 78.359f, 1302.521f };
		vVar6 = { 677.636f, 78.555f, 1224.394f };
	}
	else if (iLocal_291 == Global_30668[0])
	{
		vVar0 = { -824.226f, 93.344f, 2440.564f };
		vVar3 = { -812.179f, 92.26f, 2376.612f };
		vVar6 = { -768.31f, 92.879f, 2413.724f };
	}
	else if (iLocal_291 == Global_30658[1])
	{
		vVar0 = { -3689.717f, 42.574f, 2116.131f };
		vVar3 = { -3633.973f, 42.309f, 2142.744f };
		vVar6 = { -3661.634f, 42.571f, 2099.374f };
	}
	else if (iLocal_291 == Global_30685[0])
	{
		vVar0 = { -4292.663f, 29.753f, 4387.0f };
		vVar3 = { -4353.992f, 29.344f, 4413.363f };
		vVar6 = { -4308.613f, 23.106f, 4401.273f };
	}
	else if (iLocal_291 == Global_30723[1])
	{
		vVar0 = { -464.296f, 152.352f, 1586.306f };
		vVar3 = { -403.744f, 151.585f, 1617.957f };
		vVar6 = { -450.624f, 153.275f, 1635.315f };
	}
	else if (iLocal_291 == Global_30707[1])
	{
		vVar0 = { -712.614f, 66.81f, 3275.213f };
		vVar3 = { -718.829f, 67.513f, 3288.952f };
		vVar6 = { -717.856f, 63.328f, 3298.042f };
	}
	else if (iLocal_291 == Global_30693[0])
	{
		vVar0 = { -2653.145f, 31.387f, 4263.75f };
		vVar3 = { -2655.729f, 35.704f, 4257.177f };
		vVar6 = { -2645.429f, 31.078f, 4247.096f };
	}
	else
	{
		return 0;
	}
	if (!WOULD_ACTOR_BE_VISIBLE((&bLocal_15 + 4)->f_12, &vVar0, 3212836864))
	{
		vLocal_284 = { StackVal, StackVal, vVar0 };
	}
	else if (!WOULD_ACTOR_BE_VISIBLE((&bLocal_15 + 4)->f_12, &vVar3, 3212836864))
	{
		vLocal_284 = { StackVal, StackVal, vVar3 };
	}
	else
	{
		vLocal_284 = { StackVal, StackVal, vVar6 };
	}
	fLocal_290 = 25.0f;
	if (bLocal_107 && iLocal_291 != Global_30693[0])
	{
		vLocal_284 = { -2658.637f, 31.386f, 4257.7f };
	}
	return 1;
}

struct<32> Function_97(bool bParam0) //Position: 0x3B2B / 15147
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("0", &cVar8, ""), 4);
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

struct<32> Function_98(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3B95 / 15253
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_99() //Position: 0x3BB4 / 15284
{
	vector3 vVar0;
	var uVar3;
	int iVar6;
	
	iVar6 = 1;
	if (!Function_69(iLocal_291))
	{
		LOG_ERROR("WANTEDPOSTER_FindPosterFlag - Invalid wanted poster region");
		return 0;
	}
	Function_63(&vVar0, &uVar3);
	ITERATE_ON_PARTIAL_NAME(bLocal_12, "f_merc_");
	ITERATE_ON_OBJECT_TYPE(bLocal_12, 8);
	ITERATE_IN_SPHERE(bLocal_12, vVar0, 5.0f);
	bLocal_117 = START_OBJECT_ITERATOR(bLocal_12);
	if (!IS_OBJECT_VALID(bLocal_117))
	{
		iVar6 = 0;
	}
	if (IS_OBJECT_VALID(bLocal_12))
	{
		DESTROY_ITERATOR(bLocal_12);
	}
	return iVar6;
}

int Function_100(int iParam0) //Position: 0x3C53 / 15443
{
	if (iParam0 == 1)
	{
		if (Global_3386 == 1)
		{
			return 0;
		}
	}
	if (Global_3386 == 0)
	{
		return 0;
	}
	if (Global_29006 == Global_30640[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30717[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30668[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30658[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30685[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30723[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30693[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30707[1])
	{
		if (!Function_101(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_101(int iParam0) //Position: 0x3D07 / 15623
{
	if (!Function_69(iParam0))
	{
		return 0;
	}
	return Function_109(&(Global_29008[iParam0]), 2048);
}

bool Function_102(int iParam0) //Position: 0x3D25 / 15653
{
	if (!Function_103(&bLocal_23))
	{
		return 0;
	}
	if (!Function_109(&(Global_29008[iParam0]), 8))
	{
		return 0;
	}
	return 1;
}

bool Function_103(int iParam0) //Position: 0x3D49 / 15689
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_108();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_107(iParam0[iVar03], 8);
		}
		else if (Function_106())
		{
			iVar1 = 1;
			Function_107(iParam0[iVar03], 8);
		}
		Function_107(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_7(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_107(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_107(iParam0[iVar03], 2);
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
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_107(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_107(iParam0[iVar03], 2);
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
	Function_104();
	return 1;
}

void Function_104() //Position: 0x40C4 / 16580
{
	if (!Function_105(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_105(int iParam0) //Position: 0x4104 / 16644
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_106() //Position: 0x4120 / 16672
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

void Function_107(var uParam0, int iParam1) //Position: 0x414B / 16715
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_108() //Position: 0x415C / 16732
{
	if (!Function_105(128))
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

bool Function_109(var uParam0, int iParam1) //Position: 0x419E / 16798
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_110(int iParam0) //Position: 0x41BA / 16826
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 32)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

void Function_111(bool bParam0) //Position: 0x4226 / 16934
{
	if (iLocal_343 == 1)
	{
		bLocal_344 = (GET_PROFILE_TIME() - bLocal_344);
		PRINTSTRING(">>>>> BH_Profile for ");
		PRINTSTRING(bParam0);
		PRINTSTRING(": ");
		PRINTSTRING(FLOAT_TO_STRING_FORMATED(bLocal_344, 6, 8));
		PRINTNL();
		if (bLocal_344 < 5000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was super long. You should check this.");
		}
		else if (bLocal_344 < 2500.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was really long. You should check this.");
		}
		else if (bLocal_344 < 1000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was kinda long. You should check this.");
		}
	}
	return;
}

void Function_112() //Position: 0x4356 / 17238
{
	struct<8> Var0;
	char* cVar8[64];
	int iVar24;
	
	iVar24 = 4;
	if (bLocal_107)
	{
		(&bLocal_15 + 4)->f_12 = 457;
	}
	else if (Function_15(40, 0) && iLocal_291 != Global_30707[1])
	{
		if (Function_126())
		{
			(&bLocal_15 + 4)->f_12 = 752;
		}
		else
		{
			(&bLocal_15 + 4)->f_12 = 754;
		}
	}
	else
	{
		(&bLocal_15 + 4)->f_12 = Function_116(iVar24, 0, 2, 4294967295, 1);
	}
	Function_115(&bLocal_23, (&bLocal_15 + 4)->f_12, 2, 0);
	strcpy(&cVar8, "WANTEDPOSTER - spawning AE_", 64);
	straddi(&cVar8, (&bLocal_15 + 4)->f_12, 64);
	Function_113(&bLocal_23, "$/content/scripting/gringo/simplegringo/get_wanted_poster", 1, 0);
	Function_113(&bLocal_23, "$/content/scripting/gringo/SimpleGringo/stand_place_poster", 1, 0);
	strcpy(&Var0, "$/fragments/p_pos_wanted", 32);
	if (Global_26303.f_40 <= 10)
	{
		stradd(&Var0, "0", 32);
	}
	stradd(&Var0, INT_TO_STRING(Global_26303.f_40), 32);
	stradd(&Var0, "x", 32);
	Function_113(&bLocal_23, &Var0, 0, 0);
	Function_113(&bLocal_23, "stand_place_poster", 5, 0);
	Function_113(&bLocal_23, "custom/stand_place_poster", 8, 0);
	Function_113(&bLocal_23, "stand_poster", 5, 0);
	Function_113(&bLocal_23, "custom/stand_poster", 8, 0);
	Function_113(&bLocal_23, "post_wanted", 5, 0);
	Function_113(&bLocal_23, "custom/post_wanted", 8, 0);
	Function_113(&bLocal_23, "procmissions", 10, 0);
	Function_87(&uLocal_99, 4);
	return;
}

var Function_113(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x458D / 17805
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_114(bParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_107(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_114(var uParam0, int iParam1, int iParam2) //Position: 0x45C5 / 17861
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_107(uParam0[iVar03], 4);
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

var Function_115(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x4689 / 18057
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_107(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_107(uParam0[iVar03], 8);
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

var Function_116(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4759 / 18265
{
	return Function_117(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_117(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x4772 / 18290
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_120(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_120(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_120(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_120(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_120(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_120(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_120(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_120(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_120(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_120(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_120(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_120(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_120(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_120(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_118(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_118(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x49C7 / 18887
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_119(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_119(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_119(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_119(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_119(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_119(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_119(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_119(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_119(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_119(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_119(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_119(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_119(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_119(Global_30750[13], bVar0);
	}
	return Function_120(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_119(bool bParam0, bool bParam1) //Position: 0x4B18 / 19224
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_120(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x4BD6 / 19414
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
		Function_125();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_82(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_124(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_124(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_123(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_82(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_123(bVar0))
				{
					Function_122();
				}
				Function_121(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_82(bVar1))
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

void Function_121(int iParam0) //Position: 0x4EC9 / 20169
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

void Function_122() //Position: 0x4F7D / 20349
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

bool Function_123(bool bParam0) //Position: 0x4FB7 / 20407
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

void Function_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4FE4 / 20452
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

void Function_125() //Position: 0x5135 / 20789
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_122();
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
	Function_122();
	return;
}

bool Function_126() //Position: 0x5180 / 20864
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_127(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5193 / 20883
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	iParam3 = iParam3;
	iParam2 = iParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_128(uVar0, 80.0f, 20000.0f, iParam1, 1, iParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_128(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x521E / 21022
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1.001638E+07.0f;
	iVar601 = 0;
	iVar602 = 0;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_69(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_139(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_138(StackVal);
		vVar296 = { StackVal, StackVal, Function_138(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_139(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_109(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				bVar304[iVar601] = bVar302;
				iVar601++;
				if (Function_133(Function_134(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					bVar451[iVar602] = bVar302;
					iVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_132(&iVar1, &bVar304, iVar601);
		Function_132(&iVar148, &bVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_131(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_131(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_131(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_131(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_131(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_69(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_130();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_138(StackVal);
		vVar296 = { StackVal, StackVal, Function_138(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_131(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_131(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_131(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_131(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_131(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_69(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_130();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_138(StackVal);
		vVar296 = { StackVal, StackVal, Function_138(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

struct<32> Function_129(int iParam0) //Position: 0x58C7 / 22727
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_69(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_130() //Position: 0x5984 / 22916
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

int Function_131(int iParam0, int iParam1) //Position: 0x59B2 / 22962
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_132(int iParam0, bool bParam1, int iParam2) //Position: 0x59C4 / 22980
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_133(int iParam0) //Position: 0x5A52 / 23122
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

int Function_134(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5A6C / 23148
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_137(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_135(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_135(bParam0, bParam1, bParam2, 4294967295);
}

int Function_135(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5ACA / 23242
{
	var uVar0;
	
	if (!Function_33(bParam2))
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
	uVar0 = Function_137(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_136(uVar0);
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

int Function_136(int iParam0) //Position: 0x5C1F / 23583
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

var Function_137(int iParam0, int iParam1, int iParam2) //Position: 0x5C5D / 23645
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

vector3 Function_138(bool bParam0) //Position: 0x5C7D / 23677
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_139(int iParam0) //Position: 0x5C8E / 23694
{
	return Function_140(iParam0);
}

int Function_140(int iParam0) //Position: 0x5C99 / 23705
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_69(iParam0))
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

void Function_141() //Position: 0x5CF1 / 23793
{
	if (iLocal_343 == 1)
	{
		bLocal_344 = GET_PROFILE_TIME();
	}
	return;
}

bool Function_142(var uParam0, int iParam1) //Position: 0x5D04 / 23812
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_143(int iParam0) //Position: 0x6477 / 25719
{
	return Function_144(Global_83864.f_1252, iParam0);
}

int Function_144(var uParam0, bool bParam1) //Position: 0x6489 / 25737
{
	return (uParam0 && bParam1) == 0;
}

int Function_145() //Position: 0x6496 / 25750
{
	int iVar0;
	
	iVar0 = Function_146(0);
	return iVar0;
}

var Function_146(int iParam0) //Position: 0x64A4 / 25764
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_41(358) + Function_41(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_131(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_147(int iParam0, int iParam1) //Position: 0x6528 / 25896
{
	int iVar0;
	
	if (!Function_148(iParam0))
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

bool Function_148(bool bParam0) //Position: 0x6587 / 25991
{
	if (bParam0 > 0 || bParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x659D / 26013
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_158())
	{
		return 0;
	}
	uParam0->f_16 = Function_150(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_145();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_142(&Var96, iVar1) == 1)
		{
			if (Function_139(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_61(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_80(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_142(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_127(uParam0, iParam4, 80, 20000, uParam0->f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_150(int iParam0) //Position: 0x6807 / 26631
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_151(int iParam0) //Position: 0x68D5 / 26837
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_25267 - 1))
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_47(&(Global_25267[iVar058]), 4) && !IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_152(int iParam0) //Position: 0x6924 / 26916
{
	Function_160(iParam0, 0.0f);
	return;
}

bool Function_153(int iParam0, float fParam1) //Position: 0x6930 / 26928
{
	if (Function_50(iParam0))
	{
		if (Function_154(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_154(int iParam0) //Position: 0x694C / 26956
{
	if (Function_50(iParam0))
	{
		if (Function_155(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_155(int iParam0) //Position: 0x6A14 / 27156
{
	return Function_156(*iParam0, 2);
}

bool Function_156(var uParam0, int iParam1) //Position: 0x6A21 / 27169
{
	return (uParam0 && iParam1) == 0;
}

var Function_157(int iParam0) //Position: 0x6A2E / 27182
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 1)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

bool Function_158() //Position: 0x6A9A / 27290
{
	return Function_156(StackVal, 1);
}

var Function_159() //Position: 0x6AA9 / 27305
{
	return StackVal;
}

void Function_160(var uParam0, float fParam1) //Position: 0x6AB4 / 27316
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_87(uParam0, 1);
	Function_30(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

int Function_161(bool bParam0) //Position: 0x6AD5 / 27349
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

