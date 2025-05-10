//Decompiled with MagicRDR v1.0
//Function Count : 91
//Statics Count : 361
//Natives Count : 118
//Parameters Count : 2

#region Local Var
	struct<5> Local_0 = { 0, 0, 0, 41, 0 } ;
	var uLocal_5 = 0;
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
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	struct<2> Local_178 = { 0, 0 } ;
	bool bLocal_180 = false;
	var uLocal_181 = 0;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	bool bLocal_184 = false;
	bool bLocal_185 = false;
	var uLocal_186 = 6;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
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
	var uLocal_203 = 0;
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
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
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
	int iLocal_307 = 0;
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
	var uLocal_329 = 1;
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
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_177 = 0;
	Local_178 = { StackVal, ScriptParam_0 };
	Function_90(ScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_89("Initializing Hennigan's Stead", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_180 = 1000;
		switch (iLocal_177)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_177 = 1;
				}
				bLocal_180 = false;
				break;
			
			case 0x00000001:
				if (Function_88())
				{
					iLocal_177 = 2;
				}
				bLocal_180 = false;
				break;
			
			case 0x00000002:
				if (Function_79())
				{
					Function_78(&(Global_29008[Local_178]), 32);
					iLocal_177 = 3;
					Function_76(Local_0);
				}
				bLocal_180 = false;
				break;
			
			case 0x00000003:
				bLocal_182 = LAUNCH_NEW_SCRIPT_WITH_ARGS("HennigansSteadVol", &Local_178, 2, 0);
				Function_75(&Global_6550, &Global_7562, ScriptParam_0);
				iLocal_177 = 5;
				bLocal_180 = false;
				break;
			
			case 0x00000005:
				if (Function_74(&Global_6550, &Global_7562, ScriptParam_0))
				{
					iLocal_177 = 4;
					bLocal_180 = false;
				}
				else
				{
					bLocal_180 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_73(&(Global_29008[Local_178]), 16))
				{
					iLocal_177 = 6;
				}
				bLocal_180 = false;
				break;
			
			case 0x00000006:
				Function_72(0, &uLocal_186, -944,133f, 102,366f, 2743,287f);
				Function_71(0, &uLocal_186, -944,133f, 102,366f, 2743,287f);
				Function_70(0, &uLocal_186, -944,133f, 102,366f, 2743,287f);
				Function_69(0, &uLocal_186, -944,133f, 102,366f, 2743,287f);
				Function_68(0, &uLocal_186, -944,133f, 102,366f, 2743,287f);
				Function_66(0, &uLocal_186, -944,133f, 102,366f, 2743,287f);
				Function_65(0, &uLocal_186, Local_2);
				Function_72(1, &uLocal_186, -941,958f, 102,394f, 2739,952f);
				Function_71(1, &uLocal_186, -941,958f, 102,394f, 2739,952f);
				Function_70(1, &uLocal_186, -941,958f, 102,394f, 2739,952f);
				Function_69(1, &uLocal_186, -941,958f, 102,394f, 2739,952f);
				Function_68(1, &uLocal_186, -941,958f, 102,394f, 2739,952f);
				Function_66(1, &uLocal_186, -941,958f, 102,394f, 2739,952f);
				Function_65(1, &uLocal_186, Local_2);
				Function_72(2, &uLocal_186, 118,66f, 72,43f, 2676,99f);
				Function_71(2, &uLocal_186, 118,66f, 72,43f, 2676,99f);
				Function_70(2, &uLocal_186, 118,66f, 72,43f, 2676,99f);
				Function_69(2, &uLocal_186, 118,66f, 72,43f, 2676,99f);
				Function_68(2, &uLocal_186, 118,66f, 72,43f, 2676,99f);
				Function_66(2, &uLocal_186, 118,66f, 72,43f, 2676,99f);
				Function_65(2, &uLocal_186, Local_2);
				Function_72(3, &uLocal_186, 126,44f, 72,46f, 2675,08f);
				Function_71(3, &uLocal_186, 126,44f, 72,46f, 2675,08f);
				Function_70(3, &uLocal_186, 126,44f, 72,46f, 2675,08f);
				Function_69(3, &uLocal_186, 126,44f, 72,46f, 2675,08f);
				Function_68(3, &uLocal_186, 126,44f, 72,46f, 2675,08f);
				Function_66(3, &uLocal_186, 126,44f, 72,46f, 2675,08f);
				Function_65(3, &uLocal_186, Local_2);
				Function_59(&Global_6550, &Global_7562, &uLocal_186, Global_6288, ScriptParam_0);
				Function_78(&(Global_29008[Local_178]), 8);
				if (Function_73(&(Global_29008[ScriptParam_0]), 131072))
				{
					Function_58(&(Global_29008[ScriptParam_0]), 131072);
					if ((!Global_26003[1] && !Global_26003[2]) && !Global_26003[3])
					{
						CREATE_OBSTACLE_IN_LAYOUT(Local_0, "Butter_Bridge", 33,938f, 94,713f, 2742,488f, 0.0f, 214.0f, 0.0f, 30.0f, 40.0f, 100.0f);
					}
					if (Global_26003[2] && !Global_26003[3])
					{
						CREATE_OBSTACLE_IN_LAYOUT(Local_0, "Butter_Bridge", 33,938f, 94,713f, 2742,488f, 0.0f, 214.0f, 0.0f, 30.0f, 40.0f, 100.0f);
					}
					iLocal_177 = 10;
				}
				else
				{
					iLocal_177 = 7;
				}
				bLocal_180 = false;
				break;
			
			case 0x00000007:
				uLocal_181 = uLocal_181;
				Function_49(ScriptParam_0);
				Function_48(64);
				if (Function_47(1) != 9 && Function_46(301) != 0.0f)
				{
					bLocal_183 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_boar", 0);
				}
				if (!Global_26003[4])
				{
					CREATE_OBSTACLE_IN_LAYOUT(Local_0, "Tanners_Span", -559,71f, 103,778f, 2079,285f, 0.0f, 293.0f, 0.0f, 30.0f, 20.0f, 100.0f);
				}
				if (!Global_26003[12])
				{
					CREATE_OBSTACLE_IN_LAYOUT(Local_0, "Masons_Bridge", -143,489f, 81,505f, 2210,089f, 0.0f, 26.0f, 0.0f, 30.0f, 20.0f, 80.0f);
				}
				iLocal_177 = 8;
				bLocal_180 = false;
				break;
			
			case 0x00000008:
				Function_45(0, Global_30668[0], -819,6454f, 93,80083f, 2436,405f);
				if (!Function_44(&Global_30668))
				{
					Function_40(StackVal, 2, 0,5f, 0, Local_0, !Function_44(&Global_30668));
					Function_36(0, 8, 4, 0, 2);
					Function_48(64);
				}
				Function_78(&(Global_29008[Local_178]), 512);
				iLocal_177 = 9;
				bLocal_180 = false;
				break;
			
			case 0x00000009:
				if (!Function_44(&Global_30668))
				{
					Function_34(Local_0, ScriptParam_0);
				}
				Global_29004 = 0;
				Function_78(&(Global_29008[Local_178]), 4);
				Function_33("Finished Initializing Hennigan's Stead", 5.0f);
				iLocal_177 = 10;
				bLocal_180 = false;
				break;
			
			case 0x0000000A:
				if (!Function_44(&Global_30668))
				{
					if (iLocal_307)
					{
						iLocal_307 = 0;
						iLocal_177 = 8;
						bLocal_180 = false;
					}
				}
				else
				{
					iLocal_307 = 1;
				}
				if (Function_32() && Function_30())
				{
					if (IS_VOLUME_VALID(StackVal))
					{
						if (IS_ACTOR_IN_VOLUME(StackVal, Function_29()))
						{
							if (!IS_SCRIPT_VALID(bLocal_184))
							{
								bLocal_184 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/boarWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(bLocal_184))
						{
							TERMINATE_SCRIPT(bLocal_184);
						}
					}
				}
				if (Function_21(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_185))
					{
						bLocal_185 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_308, 51, 0);
					}
				}
				if (Function_73(&(Global_29008[ScriptParam_0]), 131072))
				{
					iLocal_177 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_180);
	}
	Function_20(ScriptParam_0);
	Function_11(&Global_6550, &Global_7562, ScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(ScriptParam_0);
	Function_48(64);
	Function_58(&(Global_29008[Local_178]), 32);
	Function_58(&(Global_29008[Local_178]), 64);
	Function_58(&(Global_29008[Local_178]), 8);
	Function_58(&(Global_29008[Local_178]), 512);
	Function_58(&(Global_29008[Local_178]), 4);
	if (IS_SCRIPT_VALID(bLocal_182))
	{
		TERMINATE_SCRIPT(bLocal_182);
	}
	if (IS_SCRIPT_VALID(bLocal_183))
	{
		TERMINATE_SCRIPT(bLocal_183);
	}
	if (IS_SCRIPT_VALID(bLocal_184))
	{
		TERMINATE_SCRIPT(bLocal_184);
	}
	Function_33("Unloaded Hennigan's Stead", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x7C7 / 1991
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x7FD / 2045
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x81F / 2079
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x835 / 2101
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x84B / 2123
{
	Function_6(&Local_2 + 4);
	RELEASE_LAYOUT_REF(Local_2);
	return;
}

void Function_6(int iParam0) //Position: 0x85D / 2141
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x883 / 2179
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x9B1 / 2481
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x9CB / 2507
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x9E8 / 2536
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9F3 / 2547
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_32())
	{
		return;
	}
	if (Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_58(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_17(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_73(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_73(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_78(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xBDE / 3038
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_18(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xD2D / 3373
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

int Function_14(int iParam0) //Position: 0xD58 / 3416
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

void Function_15(var uParam0, int iParam1) //Position: 0xD8C / 3468
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xD9B / 3483
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xDB7 / 3511
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xDCE / 3534
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xDEA / 3562
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_20(int iParam0) //Position: 0x1298 / 4760
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_21(int iParam0) //Position: 0x1303 / 4867
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_28()))
	{
		return 0;
	}
	if (Global_63399 != 32 || Global_63399 != 1)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3404)
	{
		return 0;
	}
	if (Function_26())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_24(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_23(0))
	{
		return 0;
	}
	if (Function_32())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_22(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_22(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1386 / 4998
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

bool Function_23(int iParam0) //Position: 0x142A / 5162
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_24(int iParam0) //Position: 0x1445 / 5189
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
		if (!Function_25(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_25(bool bParam0) //Position: 0x14F9 / 5369
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_73(&(Global_29008[bParam0]), 2048);
}

bool Function_26() //Position: 0x1517 / 5399
{
	return Function_27(StackVal, 1);
}

int Function_27(var uParam0, bool bParam1) //Position: 0x1526 / 5414
{
	return (uParam0 && bParam1) == 0;
}

var Function_28() //Position: 0x1533 / 5427
{
	return StackVal;
}

var Function_29() //Position: 0x153E / 5438
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_30() //Position: 0x1553 / 5459
{
	if (Function_32())
	{
		return (Function_31() != 1 || Function_31() != 0);
	}
	return 0;
}

int Function_31() //Position: 0x156C / 5484
{
	return Global_79349.f_16;
}

bool Function_32() //Position: 0x1578 / 5496
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_33(bool bParam0, float fParam1) //Position: 0x1581 / 5505
{
	if (!Function_16(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_34(bool bParam0, bool bParam1) //Position: 0x15BF / 5567
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_35(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_32())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_35(var uParam0, int iParam1) //Position: 0x16B9 / 5817
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_36(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x16C6 / 5830
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_37();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_37() //Position: 0x17AA / 6058
{
	int iVar0;
	
	Global_26960 = Function_38(StackVal);
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

int Function_38(bool bParam0) //Position: 0x17F8 / 6136
{
	if (!Function_39(bParam0))
	{
		return 0;
	}
	return Global_26401[bParam0];
}

bool Function_39(bool bParam0) //Position: 0x1810 / 6160
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_40(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1825 / 6181
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_43();
	}
	if (bParam5)
	{
		Function_41(1048576);
	}
}

void Function_41(int iParam0) //Position: 0x1938 / 6456
{
	Function_42(&Global_28842, iParam0);
	return;
}

void Function_42(var uParam0, var uParam1) //Position: 0x1946 / 6470
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_43() //Position: 0x1961 / 6497
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_41(16384);
	}
	return;
}

bool Function_44(int iParam0) //Position: 0x197D / 6525
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_4((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_45(int iParam0, var uParam1, vector3 vParam2) //Position: 0x19CA / 6602
{
	if (!Function_39(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

float Function_46(int iParam0) //Position: 0x1A2C / 6700
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_47(int iParam0) //Position: 0x1A65 / 6757
{
	if (Function_32() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_48(int iParam0) //Position: 0x1A8D / 6797
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_49(int iParam0) //Position: 0x1AA0 / 6816
{
	Function_54(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_53(&Global_17483[1875] + 120, 1, 5.0f, 1, 640);
	Function_52(&Global_17483[1875] + 120, 5.0f);
	Function_51(&Global_17483[575] + 120, 19,9f, 0,7f);
	Function_50(&Global_17483[575] + 120, -4.0f, 2);
	return;
}

void Function_50(int iParam0, var uParam1, int iParam2) //Position: 0x1B35 / 6965
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_51(int iParam0, var uParam1, int iParam2) //Position: 0x1B4B / 6987
{
	(iParam0 + 60)->f_44 = uParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_52(int iParam0, int iParam1) //Position: 0x1B61 / 7009
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1B6F / 7023
{
	iParam0->f_60 = uParam1;
	(iParam0 + 60)->f_4 = uParam2;
	(iParam0 + 60)->f_8 = uParam3;
	(iParam0 + 60)->f_16 = uParam4;
}

void Function_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x1B95 / 7061
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_55(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_55(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1BD7 / 7127
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_57(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_56(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_57(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_56(int iParam0, int iParam1) //Position: 0x1F67 / 8039
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_57(int iParam0) //Position: 0x1F88 / 8072
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_58(var uParam0, int iParam1) //Position: 0x1F9E / 8094
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_59(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1FB5 / 8117
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_73(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_60(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_58(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_78(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2067 / 8295
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_73(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(uParam0, 2))
	{
		return 1;
	}
	if (Function_18(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_63(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_62(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_61(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_61(bool bParam0, int iParam1) //Position: 0x21D2 / 8658
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_62(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_62(vector3 vParam0) //Position: 0x230E / 8974
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_63(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2326 / 8998
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

var Function_64() //Position: 0x243F / 9279
{
	int iVar0;
	
	return iVar0;
}

void Function_65(int iParam0, var uParam1, bool bParam2) //Position: 0x2447 / 9287
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	uParam1[bVar020]->f_72 = bParam2;
	return;
}

void Function_66(int iParam0, var uParam1, vector3 vParam2) //Position: 0x24A2 / 9378
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_67(vector3 vParam0, vector3 vParam3) //Position: 0x2508 / 9480
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_68(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2535 / 9525
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_69(int iParam0, var uParam1, vector3 vParam2) //Position: 0x259D / 9629
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_70(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2607 / 9735
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_71(int iParam0, var uParam1, vector3 vParam2) //Position: 0x266C / 9836
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_72(int iParam0, var uParam1, vector3 vParam2) //Position: 0x26D4 / 9940
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_73(var uParam0, int iParam1) //Position: 0x2737 / 10039
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_74(var uParam0, var uParam1, int iParam2) //Position: 0x2753 / 10067
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_32())
	{
		return 1;
	}
	if (Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_19(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_75(var uParam0, var uParam1, int iParam2) //Position: 0x281F / 10271
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_32())
	{
		return;
	}
	if (!Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_78(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

int Function_76(bool bParam0) //Position: 0x28F5 / 10485
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 12);
		ITERATE_ON_PARTIAL_NAME(bVar7, "nCampfire0");
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			bVar8 = RAND_INT_RANGE(true, 10000) > 2750;
			bVar9 = (((bVar8 || DECOR_CHECK_EXIST(bVar0, "guero")) || DECOR_CHECK_EXIST(bVar0, "always")) || Global_3370);
			bVar10 = Function_32();
			bVar11 = (Function_30() && !Function_77(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_30()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
			{
			}
			else if (bVar10 && !bVar11)
			{
				bVar12 = GET_GRINGO_FROM_OBJECT(bVar0);
				if (IS_GRINGO_VALID(bVar12))
				{
					GRINGO_ALLOW_ACTIVATION(bVar12, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(bVar0, &vVar1);
				GET_OBJECT_ORIENTATION(bVar0, &uVar4);
				strcpy(&cVar13, "p", 32);
				stradd(&cVar13, GET_OBJECT_NAME(bVar0), 32);
				CREATE_POINT_IN_LAYOUT(bParam0, &cVar13, vVar1, 0.0f, 0.0f, 0.0f);
				DESTROY_OBJECT(bVar0);
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_77(int iParam0, bool bParam1) //Position: 0x2A3E / 10814
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_78(var uParam0, int iParam1) //Position: 0x2A5E / 10846
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_79() //Position: 0x2A6D / 10861
{
	bool bVar0;
	
	Function_87(3, 3);
	bVar0 = bVar0;
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_85(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	if (!Function_80(&Local_2 + 4))
	{
		return 0;
	}
	Local_2 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(Local_2))
	{
		Local_2 = CREATE_LAYOUT("HennigansStead_layout");
	}
	Local_2.f_500 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint1", -1260,309f, 109,4274f, 2764.0f, 0.0f, 0.0f, 0.0f);
	Local_2.f_504 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint2", 118,7035f, 72,28235f, 2676.0f, 0.0f, 0.0f, 0.0f);
	Local_2.f_508 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint3", -1236f, 22,08622f, 3209,463f, 0.0f, 0.0f, 0.0f);
	Local_2.f_512 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint4", -275,5703f, 73,237f, 2391,477f, 0.0f, 88,54858f, 0.0f);
	Local_2.f_516 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint8", -175,9999f, 72,39375f, 2332.0f, 0.0f, 88,54858f, 0.0f);
	Local_2.f_520 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint5", -275,5844f, 73,237f, 2393,654f, 0.0f, 0.0f, 0.0f);
	Local_2.f_524 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint6", -117,8339f, 72,35263f, 2437,834f, 0.0f, 0.0f, 0.0f);
	*(&Local_2 + 528) = { -108,0001f, 55,2157f, 2808.0f };
	*(&Local_2 + 528 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_2.f_552 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint7", -108,0001f, 55,2157f, 2808.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_2 + 556) = { -499,047f, 75,045f, 2209,638f };
	*(&Local_2 + 556 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_2.f_580 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint9", -499,047f, 75,045f, 2209,638f, 0.0f, 0.0f, 0.0f);
	*(&Local_2 + 584) = { -479,216f, 74,86f, 2216,221f };
	*(&Local_2 + 584 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_2.f_608 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint10", -479,216f, 74,86f, 2216,221f, 0.0f, 0.0f, 0.0f);
	*(&Local_2 + 612) = { -492,624f, 73,197f, 2215,717f };
	*(&Local_2 + 612 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_2.f_636 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint11", -492,624f, 73,197f, 2215,717f, 0.0f, 0.0f, 0.0f);
	Local_2.f_640 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint12", -1278,561f, 109,428f, 2748,028f, 0.0f, 0.0f, 0.0f);
	Local_2.f_644 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint13", -1301,064f, 109,312f, 2760,115f, 0.0f, 0.0f, 0.0f);
	Local_2.f_648 = CREATE_POINT_IN_LAYOUT(Local_2, "brbf_bhint", -486,841f, 20,486f, 3033,398f, 0.0f, 0.0f, 0.0f);
	Local_2.f_652 = CREATE_POINT_IN_LAYOUT(Local_2, "brbf_bhtreas", -474,747f, 22,192f, 3020,728f, 0.0f, 124,597f, 0.0f);
	Local_2.f_656 = CREATE_POINT_IN_LAYOUT(Local_2, "brbf_bhtreas1", -494,267f, 20,081f, 3021,206f, 0.0f, 353,651f, 0.0f);
	Local_2.f_660 = CREATE_POINT_IN_LAYOUT(Local_2, "hgnf_bhint14", -1284,527f, 109,428f, 2777,638f, 0.0f, 192,563f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire059", "Campfire03", 156,6837f, 94,36859f, 2732.0f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_sit_ground_smoke1", "sit_ground_smoke", -1290,285f, 109,428f, 2772,222f, 0.0f, 83,22361f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "nMesc_Pee2", "Pee", -1287,66f, 109,428f, 2794,27f, 0.0f, 96,73806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "nMesc_Pee1", "Pee", -1298,734f, 109,524f, 2776,841f, 0.0f, 96,73806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_rand_idle_stand4", "rand_idle_stand", -1300,399f, 109,428f, 2770,623f, 0.0f, 109,37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay41", "horse_stay", -283,3955f, 73,24915f, 2391,313f, 0.0f, -108,7701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_2.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -1223,988f, 22,24839f, 3209,047f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_664), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", -555,1674f, 98,38434f, 2635,168f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", -444f, 96,37646f, 2640.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", -360f, 97,38037f, 2576.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", -194,2945f, 72,28235f, 2424.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", -259,3197f, 75,29413f, 2460.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", -279,608f, 77,30195f, 2495,608f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", -204,0001f, 95,37256f, 2672.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", -29,24244f, 96,31554f, 2602,664f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", 29,16964f, 93,36469f, 2668,45f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", -36,00005f, 96,37646f, 2712.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", 177,1115f, 102,4101f, 2588,1f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", 206,8056f, 108,4235f, 2538,181f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", 143,7577f, 73,28625f, 2408,242f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", 111,9999f, 106,4157f, 2569,412f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", 43,99994f, 86,33722f, 2162,004f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", 95,99993f, 73,28625f, 2368.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", 12,00003f, 78,30591f, 2416f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew82", "Player_Herb_WildFeverFew", -68,00001f, 77,30194f, 2452,171f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", -68.0f, 74,29022f, 2336.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", -126,4242f, 74,29022f, 2380,598f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", -143,7193f, 73,28625f, 2431,689f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", -255,2952f, 72,28235f, 2363,295f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", -254,8817f, 76,11722f, 2447,886f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", -442,5462f, 92,42317f, 2431,439f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", -498,2016f, 92,36078f, 2466,082f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", -424f, 97,38037f, 2580.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", -538,4169f, 98,38431f, 2616,292f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", -388f, 96,37646f, 2672.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", -417,5648f, 98,38428f, 2721,565f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", -546,5907f, 96,37646f, 2494,59f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", -576,0001f, 98,38428f, 2544f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", -711,9999f, 99,38824f, 2600f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", -647,9999f, 101,3961f, 2609,018f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", -595,8665f, 99,38828f, 2703,866f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", -727,9998f, 100,3922f, 2696f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", -707,9999f, 103,4039f, 2752f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", -691,4358f, 97,39969f, 2803,564f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", -975,5092f, 104,2495f, 2749,441f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", -866,3646f, 100,3922f, 2698,365f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", -880,0001f, 100,3922f, 2740.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", -872,2901f, 97,38037f, 2820,291f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", -776,0001f, 93,36469f, 2356f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", -687,5164f, 98,04729f, 2401,762f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", -785,8874f, 104,959f, 2280,578f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", -881,8164f, 110,4574f, 2594,953f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", -1048f, 101,3961f, 2464.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", -808,0001f, 100,3922f, 2561,289f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", -920.0f, 92,36078f, 2304f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", -1081,386f, 102,4f, 2312.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", -1128.0f, 110,4313f, 2208.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", -835,6993f, 111,4353f, 2119,555f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", -1113,683f, 105,4117f, 2112f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", -1108.0f, 104,4078f, 2492.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", -1093,78f, 104,461f, 2528,803f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", -1021,638f, 109,4289f, 2592f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", -955,6125f, 107,4232f, 2656,625f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", -944,0001f, 102,3681f, 2756.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", -1040f, 102,4f, 2792.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", -1028f, 101,3961f, 2860.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", -928,6227f, 101,3961f, 2852,623f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", -1008,839f, 100,3922f, 2932,839f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", -1056f, 100,3922f, 2848.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", -1172f, 95,37256f, 2892,693f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", -1360f, 95,37256f, 2908.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", -1320f, 96,37646f, 2980,488f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", -1200,504f, 110,2503f, 2844,896f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", -1328f, 118,4628f, 2800.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", -1444,78f, 115,451f, 2700.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", -1184f, 98,38432f, 2581,499f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", -1152.0f, 99,99776f, 2483,981f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew29", "Player_Herb_WildFeverFew", -1258,333f, 92,15118f, 2541,586f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", -1331,99f, 94,37176f, 2584,034f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", -1367,219f, 96,36912f, 2526,926f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", -1435,734f, 97,38392f, 2523,012f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_stay7", "horse_stay", -487,679f, 72,291f, 2206,794f, 0.0f, 234,1342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_tend7", "horse_tend", -491,2f, 72,336f, 2199,114f, 0.0f, -170,8492f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_stay6", "horse_stay", -494,0805f, 72,54624f, 2198,433f, 0.0f, 70,08273f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_tend6", "horse_tend", -501,2441f, 75,6872f, 2227,825f, 0.0f, 175,3533f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_sit_ground_smoke2", "sit_ground_smoke", -484,8762f, 71,99495f, 2203,452f, 0.0f, -51,32996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_sit_ground_smoke", "sit_ground_smoke", -481,8283f, 71,87337f, 2201,816f, 0.0f, 129,3626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", -485,2202f, 72,02464f, 2201,932f, 0.0f, -94,26432f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", -482,8451f, 71,85525f, 2203,732f, 0.0f, 18,83562f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -477,8831f, 71,81006f, 2202,998f, 0.0f, -86,38677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -481,474f, 71,80349f, 2199,808f, 0.0f, -18,62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -486,1086f, 72,11655f, 2200,902f, 0.0f, -18,62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", -485,8302f, 72,53257f, 2211,344f, 0.0f, 162,0719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", -489,738f, 75,217f, 2246,711f, 0.0f, 210,8284f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -483,6721f, 72,0414f, 2200,771f, 0.0f, -156,7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_rand_idle_stand2", "rand_idle_stand", -513,642f, 78,714f, 2228,851f, 0.0f, 139,7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_rand_idle_stand1", "rand_idle_stand", -494,992f, 74,165f, 2222,989f, 0.0f, 139,7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", -476,394f, 72,594f, 2208,338f, 0.0f, 103,7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -487,985f, 72,13816f, 2203,913f, 0.0f, -80,51714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_tend5", "horse_tend", -485,1934f, 73,68908f, 2227,357f, 0.0f, 175,3533f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_stay5", "horse_stay", -483,493f, 72,62349f, 2208,31f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_tend4", "horse_tend", -486,133f, 73,017f, 2219,355f, 0.0f, -170,8492f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_horse_stay4", "horse_stay", -494,391f, 73,535f, 2216,439f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_Pee2", "Pee", -500,917f, 75,958f, 2222,902f, 0.0f, 28,07549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", -503,7881f, 76,21277f, 2224,989f, 0.0f, -154,3103f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", -509,9192f, 76,2117f, 2242,053f, 0.0f, 220,4564f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", -1468.0f, 99,38824f, 2560,833f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", -1549,159f, 101,3961f, 2545,159f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", -1552f, 99,38818f, 2588.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", -1635,405f, 104,4078f, 2508,201f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", -1362,88f, 97,13873f, 2502,447f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", -1476.0f, 101,3961f, 2506,032f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", -1560.0f, 107,4196f, 2492,373f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", -1548.0f, 98,38428f, 2204.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", -1553,751f, 100,3922f, 2276.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", -1592.0f, 102,4f, 2304.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", -1556.0f, 101,3961f, 2345,271f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -1627,523f, 96,37029f, 2150,974f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -1841,983f, 54,47337f, 1869,646f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -1824.0f, 57,18702f, 1852,473f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "repair_kneel1", "repair_kneel", -902,2922f, 100,3209f, 2754,921f, 0.0f, 214,3136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -905,372f, 102,4f, 2714,956f, 0.0f, -33,62195f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_fence_low1", "sit_fence_low", -926,543f, 102,3234f, 2736,779f, 0.0f, 116,8946f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "repair_kneel", "repair_kneel", -931,642f, 102,4139f, 2749,984f, 0.0f, 137,5986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_fence_low", "sit_fence_low", -894,3243f, 100,392f, 2739,188f, 0.0f, -84,98307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_hammer_wall", "stand_hammer_wall", -928,8274f, 102,4108f, 2743,607f, 0.0f, 127,8027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "nsit_docks", "nsit_docks", -928,1281f, 105,605f, 2752,568f, 0.0f, 37,12743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "any_washCloths", "any_washCloths", -933,0951f, 102,4479f, 2758,384f, 0.0f, -65,5621f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "look_out_window_L", "look_out_window_L", -982,127f, 104,716f, 2722,818f, 0.0f, 91,278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_docks1", "nsit_docks", -982,0966f, 104,716f, 2721,483f, 0.0f, 67,37092f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -1258,205f, 103,8316f, 2092,937f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -1440,801f, 98,38428f, 2152,988f, 0.0f, 80,5882f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -1442,045f, 99,40326f, 2240,109f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -890,355f, 99,87654f, 2194,054f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -1016f, 111,3676f, 2224f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -1617,097f, 93,76676f, 2187,019f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -1760,903f, 96,82294f, 1933,656f, 0.0f, 54,47325f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -1269,262f, 110,4314f, 2072,898f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -1910,234f, 40,64242f, 1863,484f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -1816,805f, 53,13725f, 1890,521f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -1959,485f, 75,21778f, 1828,361f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_tend41", "horse_tend", -282,807f, 73,153f, 2397,404f, 0.0f, -105,3701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay31", "horse_stay", -285,8602f, 73,25476f, 2394,963f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_sit_docks1", "nsit_docks", -290,5338f, 72,49307f, 2419,896f, 0.0f, -179,4226f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay71", "horse_stay", -119,6366f, 72,03043f, 2427,21f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_tend31", "horse_tend", -121,785f, 72,25f, 2429,164f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay61", "horse_stay", -132,6584f, 73,51955f, 2425,296f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay51", "horse_stay", -130,0145f, 73,31475f, 2424,778f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_stand_lookdistanc21", "stand_lookdistance_w_any", -112,3357f, 73,28622f, 2448,212f, 0.0f, -113,7659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "nStil_Pee1", "Pee", -104,0126f, 72,15959f, 2431,303f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_stand_lookdistance11", "stand_lookdistance_w_any", -121,4438f, 73,18758f, 2444,482f, 0.0f, 82,29852f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_Rand_Idle_NearWall11", "Rand_Idle_NearWall", -112,6356f, 72,353f, 2443,39f, 0.0f, -25,94683f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_campfire_talk1", "campfire_talk", -115,0204f, 72,35263f, 2440,231f, 0.0f, 131,5032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_Campfire_Tend11", "Sit_Ground_Campfire_Tend", -112,7236f, 72,353f, 2441,722f, 0.0f, 69,00607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_stand_lookdistance1", "stand_lookdistance_w_any", -279,7706f, 73,139f, 2391,325f, 0.0f, 22,22883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_Rand_Idle_NearWall", "Rand_Idle_NearWall", -274,7329f, 73,15596f, 2395,753f, 0.0f, 179,5037f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -274,4596f, 73,25157f, 2391,465f, 0.0f, -92,90387f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_lean_rail", "nlean_rail", -275,3539f, 73,12715f, 2398,184f, 0.0f, -179,8969f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_rand_idle_stand1", "rand_idle_stand", -274,7468f, 73,148f, 2396,871f, 0.0f, 254,0465f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_Campfire_Tend", "Sit_Ground_Campfire_Tend", -171,5715f, 72,39375f, 2330,361f, 0.0f, 89,22446f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_horse_tend1", "horse_tend", -109,4213f, 55,21569f, 2806,907f, 0.0f, -141,5272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_horse_tend", "horse_tend", -111,8189f, 55,2157f, 2809,007f, 0.0f, 103,6899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_horse_stay3", "horse_stay", -114,0363f, 55,2157f, 2810,398f, 0.0f, -134,0859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_horse_stay2", "horse_stay", -112,4162f, 55,2157f, 2807,465f, 0.0f, 91,06381f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_horse_stay1", "horse_stay", -118,7427f, 55,2157f, 2812,998f, 0.0f, 206,9627f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_horse_stay", "horse_stay", -109,9179f, 55,21569f, 2807,491f, 0.0f, 49,26177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_smoking_stand", "smoking_stand", -104,1135f, 55,47424f, 2807,156f, 0.0f, 211,2294f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_sit_ground_smoke", "sit_ground_smoke", -103,5438f, 55,44496f, 2801,546f, 0.0f, -132,4733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_play_harmonica", "sit_ground_play_harmonica", -104,0469f, 55,32558f, 2803,035f, 0.0f, -82,07317f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_stand_guntricks_e_any", "stand_guntricks_e_any", -102,1707f, 55,36632f, 2804,345f, 0.0f, -3,558987f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_stand_lookdistance", "stand_lookdistance_w_any", -117,0521f, 55,2157f, 2805,38f, 0.0f, 58,87966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "pasted__Man_Pee", "Pee", -95,50251f, 55,21611f, 2799,677f, 0.0f, 241,5218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "pasted__Man_smoking_stand", "smoking_stand", -100,1235f, 55,34239f, 2802,147f, 0.0f, 74,89233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_look_distance_binocs", "look_distance_binocs", -119,8045f, 55,2157f, 2815,365f, 0.0f, 172,6626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay2", "horse_stay", -176,4697f, 72,47968f, 2336,637f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay1", "horse_stay", -178,5961f, 72,28235f, 2344,056f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_stay", "horse_stay", -176,0005f, 72,40929f, 2338,774f, 0.0f, 85,15128f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_tend1", "horse_tend", -182,9534f, 72,61275f, 2342,223f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -178,0995f, 72,53835f, 2332,596f, 0.0f, -18,7411f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_stand_guntricks_e_any", "stand_guntricks_e_any", -174,1021f, 72,39375f, 2332,586f, 0.0f, -23,18213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_look_distance_binocs", "look_distance_binocs", -163,9925f, 72,23011f, 2335,94f, 0.0f, -4,903682f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_rand_idle_stand", "rand_idle_stand", -169,1717f, 72,3328f, 2331,828f, 0.0f, -11,84327f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_smoking_stand", "smoking_stand", -172,7588f, 72,39375f, 2331,682f, 0.0f, 10,0226f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -174,9404f, 72,39375f, 2330,198f, 0.0f, -99,68264f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Stil_horse_tend", "horse_tend", -173,0439f, 72,21784f, 2337,289f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_rand_idle_stand3", "rand_idle_stand", -1310,823f, 108,507f, 2759,502f, 0.0f, 109,37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_rand_idle_stand2", "rand_idle_stand", -1290,639f, 109,428f, 2772,813f, 0.0f, 109,37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_rand_idle_stand1", "rand_idle_stand", -1277,641f, 109,427f, 2777,696f, 0.0f, 109,37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay11", "horse_stay", -1277,705f, 109,427f, 2753,559f, 0.0f, 9,925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay10", "horse_stay", -1290,404f, 116,455f, 2716,549f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay9", "horse_stay", -1303,118f, 108,424f, 2746,513f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay8", "horse_stay", -1291,411f, 108,424f, 2745,976f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_stand_holy_water", "stand_holy_water", -1266,753f, 109,4274f, 2762,999f, 0.0f, 91,55917f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_Campfire_Tend2", "Sit_Ground_Campfire_Tend", -1304,773f, 111,4353f, 2731,426f, 0.0f, -138,5776f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand1", "smoking_stand", -1302,064f, 111,4353f, 2730,996f, 0.0f, 125,0703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_sleeping_wal1", "sleeping_wall_scripted", -1267,786f, 109,4274f, 2786,777f, 0.0f, -234,9549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay12", "horse_stay", -1246,143f, 109,779f, 2734,597f, 0.0f, 9,925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay7", "horse_stay", -1309,688f, 109,325f, 2771,592f, 0.0f, 9,925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay6", "horse_stay", -1279,988f, 109,427f, 2788,018f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay5", "horse_stay", -1284,899f, 109,428f, 2779,304f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay4", "horse_stay", -1275,122f, 109,427f, 2793,871f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_stand_guntricks1", "stand_guntricks_e_any", -1273,336f, 109,4274f, 2749,484f, 0.0f, -76,89563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_Locked_Footlocker", "Locked_Footlocker", 112,1806f, 71,25297f, 2685,642f, 0.0f, -155,5412f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_INT(bVar0, "GringoDollarAmt", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_LockedFootlocker", "Locked_Footlocker", -1231,767f, 22,25275f, 3206,919f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_INT(bVar0, "GringoDollarAmt", true);
	Local_2.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_Campfire_Tend", "Sit_Ground_Drink", -1232,077f, 22,27966f, 3211,868f, 0.0f, 68,73868f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_668), 0);
	Local_2.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_2, "look_out_window_L1", "look_out_window_L", -1237,542f, 22,2412f, 3212,973f, 0.0f, 178,7504f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_672), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_horse_tend2", "horse_tend", -1246,379f, 22,62883f, 3213,033f, 0.0f, -101,8198f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_horse_tend1", "horse_tend", -1252,025f, 23,933f, 3209,663f, 0.0f, -95,92507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_horse_tend", "horse_tend", -1218,964f, 24,87803f, 3201,336f, 0.0f, 96,76688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_horse_stay2", "horse_stay", -1249,464f, 23,35681f, 3211,482f, 0.0f, -78,81496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_horse_stay1", "horse_stay", -1217,079f, 24,57645f, 3202,547f, 0.0f, 88,79853f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_horse_stay", "horse_stay", -1216,456f, 23,98988f, 3204,24f, 0.0f, 63,17963f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_look_distance_binocs", "look_distance_binocs", -1230,744f, 22,27831f, 3209,075f, 0.0f, -98,96873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_Rand_Idle_NearWall", "Rand_Idle_NearWall", -1240,388f, 22,12842f, 3206,192f, 0.0f, 88,11987f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_Pee", "Pee", -1225,842f, 22,606f, 3204,7f, 0.0f, -31,56896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_stand_guntricks_e_any", "stand_guntricks_e_any", -1236,22f, 22,24551f, 3207,925f, 0.0f, 36,00572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -1234,064f, 22,25175f, 3207,401f, 0.0f, -97,59713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1238,701f, 22,34453f, 3206,441f, 0.0f, -115,5628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Grn_smoking_stand", "smoking_stand", -1233,578f, 22,25408f, 3212.0f, 0.0f, 45,14069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_hhorse_tend2", "horse_tend", 97,78033f, 71,27844f, 2684.0f, 0.0f, -203,1011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_hhorse_tend1", "horse_tend", 100,0754f, 71,27844f, 2683,136f, 0.0f, -181,4435f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_hhorse_tend", "horse_tend", 108f, 71,27842f, 2675,017f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_hhorse_stay2", "horse_stay", 102,0794f, 71,27847f, 2682,786f, 0.0f, -35,9964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_hhorse_stay1", "horse_stay", 106,0782f, 71,15269f, 2676,675f, 0.0f, 33,68391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bac_horse_stay", "horse_stay", 102,9418f, 71,1523f, 2677,747f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bach_use_shelf", "nuse_shelf", 124,6688f, 72,42136f, 2671,896f, 0.0f, 294,9007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bach_lie_sleep", "lie_sleep_on_bed_r", 123,6714f, 72,42126f, 2669,944f, 0.0f, -63,85365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bach_look_out_window", "look_out_window_L", 121,8701f, 72,41193f, 2670,781f, 0.0f, 117,1071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bach_look_distance", "stand_lookdistance_w_any", 129,3817f, 72,4876f, 2674,44f, 0.0f, -93,00282f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bach_smoking_stand", "rand_idle_stand", 126,5116f, 72,4119f, 2675,403f, 0.0f, 182,2345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Bach_NearWall_Shoulder_R", "Rand_Idle_NearWall", 122,0145f, 72,40353f, 2674,539f, 0.0f, -240,2579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_stand_guntricks", "stand_guntricks_e_any", -1270,788f, 109,4274f, 2749,184f, 0.0f, 84,16376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_drunk_throwbottle", "stand_drunk_throwbottle", -1265,812f, 109,4274f, 2746,996f, 0.0f, -70,91444f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_drunk_rowdydrink", "stand_drunk_rowdydrink", -1263,234f, 109,4274f, 2748,075f, 0.0f, -8,879789f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_play_harmonica", "sit_ground_play_harmonica", -1264,823f, 109,4274f, 2745,407f, 0.0f, -131,5376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -1261,675f, 109,4274f, 2745,347f, 0.0f, 97,42413f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_Sit_Ground1", "Rand_Idle_Sit_Ground", -1261,765f, 109,4274f, 2747,085f, 0.0f, -317,9632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay3", "horse_stay", -1246,143f, 109,779f, 2734,597f, 0.0f, 9,925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay2", "horse_stay", -1231,185f, 109,4274f, 2745,39f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay1", "horse_stay", -1251,29f, 109,4274f, 2761,342f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_horse_stay", "horse_stay", -1255,198f, 109,4274f, 2763,017f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_Pee", "Pee", -1235,608f, 109,4274f, 2751,687f, 0.0f, 96,73806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_rand_idle_stand", "rand_idle_stand", -1249,862f, 109,5147f, 2754,044f, 0.0f, 109,37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_sleeping_wall_scripted", "sleeping_wall_scripted", -1241,34f, 108,515f, 2755,404f, 0.0f, 122,3701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_smoking_stand", "smoking_stand", -1244,553f, 109,4274f, 2768,205f, 0.0f, -77,75138f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1243,383f, 109,4517f, 2766,101f, 0.0f, -156,7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1242,411f, 109,4274f, 2769,383f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_sit_ground_smoke", "sit_ground_smoke", -1240,573f, 109,4021f, 2768,07f, 0.0f, 83,22361f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_stand_lookdistance2", "stand_lookdistance_w_any", -1339,527f, 116,455f, 2778,435f, 0.0f, -160,6844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_stand_lookdistance1", "stand_lookdistance_w_any", -1286,395f, 116,417f, 2719,064f, 0.0f, -160,6844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_stand_lookdistance", "stand_lookdistance_w_any", -1281,565f, 113,7627f, 2808.0f, 0.0f, -160,6844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Mesc_lookdistance_binocs", "look_distance_binocs", -1246,043f, 112,232f, 2789,971f, 0.0f, -122,5477f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire056", "Campfire03_bad", -362,1945f, 97,38037f, 2566,195f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire055", "Campfire05", -478,236f, 97,38037f, 2650,236f, 0.0f, -87,95684f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire054", "Campfire05", -552,0001f, 98,38428f, 2648f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire052", "Campfire05", -1045,133f, 109,4274f, 2254,867f, 0.0f, -62,4227f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire051", "Campfire01_bad", -1119,719f, 105,4117f, 2122,559f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire050", "Campfire05", -1552,548f, 99,38824f, 2164f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire049", "Campfire04", -948,0001f, 106,4156f, 2704f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire048", "Campfire05", -784,0001f, 97,38317f, 2664,547f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire047", "Campfire04", 32,0001f, 98,38428f, 2912,956f, 0.0f, 85,25139f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_yawning_n_any1", "stand_yawning_n_any", -484,842f, 20,486f, 3036,186f, 0.0f, 103,7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_smoking_stand4", "smoking_stand", -490,907f, 20,081f, 3028,224f, 0.0f, -92,93414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_rand_idle_stand3", "rand_idle_stand", -483,113f, 20,354f, 3018,092f, 0.0f, -27,62441f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_rand_idle_stand2", "rand_idle_stand", -485,8575f, 20,11623f, 3020,444f, 0.0f, -16,63606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_guntricks_e_any1", "stand_guntricks_e_any", -487,818f, 20,08f, 3027,049f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_lookdistance3", "stand_lookdistance_w_any", -472,17f, 23,539f, 3002,219f, 0.0f, -22,8892f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_rand_idle_stand1", "rand_idle_stand", -479,193f, 21,395f, 3011,36f, 0.0f, -54,23795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_yawning_n_any", "stand_yawning_n_any", -490,8237f, 20,09063f, 3018,624f, 0.0f, 314,5764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_smoking_stand3", "smoking_stand", -489,166f, 22,934f, 3008,071f, 0.0f, 125,0703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_smoking_stand2", "smoking_stand", -486,841f, 20,486f, 3033,398f, 0.0f, -92,93414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_rand_idle_stand", "rand_idle_stand", -487,3976f, 20,04222f, 3030,592f, 0.0f, 0,05803982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_lookdistance2", "stand_lookdistance_w_any", -516,832f, 22,626f, 3011,923f, 0.0f, 71,97202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_guntricks_e_any", "stand_guntricks_e_any", -484,013f, 20,46403f, 3030,633f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_horse_stay3", "horse_stay", -486,5086f, 20,25895f, 3023,12f, 0.0f, -73,51933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_horse_stay2", "horse_stay", -485,694f, 20,12819f, 3025,852f, 0.0f, -70,77419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_Pee1", "Pee", -502,053f, 22,795f, 3020,031f, 0.0f, -245,9337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_smoking_stand1", "smoking_stand", -481,0595f, 20,49036f, 3034,915f, 0.0f, -92,93414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_horse_stay1", "horse_stay", -497,898f, 22,734f, 3008,745f, 0.0f, -71,77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_horse_stay", "horse_stay", -501,242f, 22,723f, 3007,798f, 0.0f, -71,77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -488,8596f, 20,48626f, 3033,328f, 0.0f, 21,64087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_look_out_window_L", "look_out_window_L", -486,3459f, 20,5107f, 3032,663f, 0.0f, -66,49553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_lookdistance1", "stand_lookdistance_w_any", -499.0f, 22,663f, 3009,645f, 0.0f, 247,5717f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_Pee", "Pee", -491,229f, 20,038f, 3030,695f, 0.0f, 62,1369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_stand_lookdistance", "stand_lookdistance_w_any", -481,405f, 24,341f, 2997,675f, 0.0f, -22,8892f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_Rand_Idle_NearWall", "Rand_Idle_NearWall", -490,3297f, 20,08626f, 3026,724f, 0.0f, -66,90773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_lean_rail", "nlean_rail", -488,092f, 20,47741f, 3037,65f, 0.0f, -162,8951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire046", "Campfire01", 33,71349f, 94,36859f, 2583,156f, 0.0f, 178,6161f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire045", "Campfire01_bad", 52,73235f, 93,36469f, 2577,877f, 0.0f, 89,43166f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire044", "Campfire01_bad", -12,00003f, 95,37256f, 2596.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire043", "Campfire04", -354,289f, 82,32156f, 2196,203f, 0.0f, 89,04195f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire042", "Campfire04", -336,0105f, 76,29803f, 2377,477f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire041", "Campfire04", -508.0f, 88,88226f, 2344f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire040", "Campfire01", -35,7155f, 89,34904f, 2530,951f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire039", "Campfire01", 205,6499f, 104,4238f, 2584,944f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire038", "Campfire01", 17,18601f, 90,35291f, 2542,814f, 0.0f, 97,82784f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire037", "Campfire01", 40,7115f, 92,36078f, 2551,289f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire035", "Campfire01", -38,61609f, 96,30435f, 2695,379f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire034", "Campfire01", -381,8329f, 86,93017f, 2089,833f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire033", "Campfire01", -488,6985f, 91,35676f, 2124,877f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire031", "Campfire01", -636.0f, 96,37646f, 2228.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire030", "Campfire01", -653,2507f, 96,37646f, 2253,657f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire029", "Campfire01", -747,4767f, 101,396f, 2171,295f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire028", "Campfire01", -1376f, 117,4588f, 2610,934f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire027", "Campfire01", -1277,852f, 117,4588f, 2611,575f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire026", "Campfire01", -1526,463f, 99,3818f, 2225,518f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire025", "Campfire01", -1316,073f, 94,34322f, 2566,855f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire024", "Campfire01", -1333,725f, 96,38882f, 2246,294f, 0.0f, 27,59212f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire023", "Campfire01", -1185,474f, 112,0102f, 2160,028f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire022", "Campfire01", -1040f, 101,3961f, 2468.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire021", "Campfire01", -412,0001f, 97,38037f, 2694,152f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire019", "Campfire01", -956,2631f, 106,4156f, 2682,451f, 0.0f, -103,3852f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire018", "Campfire03", -871,9999f, 97,38037f, 2804f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire017", "Campfire01", -1047,587f, 102,4f, 2790,888f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire016", "Campfire01", -1120,982f, 99,38824f, 2791,018f, 0.0f, 109,0583f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire015", "Campfire01", -993,5774f, 101,4007f, 2895,97f, 0.0f, 101,4003f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire014", "Campfire01", -1236f, 95,37256f, 2896.0f, 0.0f, 68,2284f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire013", "Campfire01", -1298,68f, 96,37646f, 2961,082f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire012", "Campfire01", -1361,375f, 94,26417f, 2970,619f, 0.0f, -228,3143f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire011", "Campfire01", -1380,812f, 118,49f, 2847,833f, 0.0f, -105,805f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire010", "Campfire01", -1472,835f, 80,31372f, 2817,708f, 0.0f, 100,8404f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire09", "Campfire01", -1453,252f, 80,31372f, 2824.0f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire08", "Campfire01", -1459,474f, 118,4628f, 2734,008f, 0.0f, 55,5816f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire07", "Campfire01", -1570,172f, 100,3922f, 2143,943f, 0.0f, -86,05379f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire06", "Campfire01", -1626,055f, 104,4078f, 2499,888f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire05", "Campfire01", -1642,908f, 103,4039f, 2463,479f, 0.0f, 117,6219f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire03", "Campfire01", -1711,887f, 46,18039f, 2185,038f, 0.0f, 87,34352f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire01", "Campfire01", -1769,727f, 42,1647f, 2423,407f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire060", "Campfire01", -990,0055f, 101,4004f, 2855,315f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire061", "Campfire01", -1024,396f, 101,3961f, 2870,422f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire062", "Campfire01", -1084,115f, 101,3961f, 2804,115f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire063", "Campfire01", -1092f, 100,3922f, 2832f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire064", "Campfire01", -1134,502f, 99,38824f, 2802,502f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire065", "Campfire01", -1050,557f, 101,3961f, 2816.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire066", "Campfire01", -852,0001f, 100,3922f, 2688f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire067", "Campfire01", -859,4987f, 100,3922f, 2717,108f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire068", "Campfire01", -871,4346f, 100,3922f, 2684f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire069", "Campfire01", -936,0001f, 107,4196f, 2656,35f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire070", "Campfire01", -970,7598f, 106,4156f, 2658,76f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire071", "Campfire01", -948,9295f, 106,4156f, 2676f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire072", "Campfire01", -543,9219f, 102,4f, 2759,639f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire074", "Campfire01", -567,9999f, 102,4f, 2757,253f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire075", "Campfire01", -518,1526f, 100,3922f, 2732,255f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire076", "Campfire01_bad", -571,8811f, 101,3961f, 2738,932f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire077", "Campfire01", -609,6843f, 99,38828f, 2696,082f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire079", "Campfire01", -427,4243f, 98,38428f, 2718,325f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire081", "Campfire01", -55,99994f, 89,349f, 2528,528f, 0.0f, 58,17722f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire083", "Campfire01", -332,4246f, 76,29803f, 2366,257f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire084", "Campfire01", -315,9999f, 76,29803f, 2358,513f, 0.0f, 109,6635f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire085", "Campfire01", -33,10468f, 95,37256f, 2589,066f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire086", "Campfire01", 3,064902f, 95,3725f, 2876,447f, 0.0f, -86,96823f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire087", "Campfire01", -808,0001f, 99,38824f, 2660.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire088", "Campfire01", -786,0499f, 97,38037f, 2608.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire089", "Campfire01", -1065,151f, 100,3922f, 2836.0f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire090", "Campfire01", 1,620422f, 74,29016f, 2340,822f, 0.0f, -126,948f, 0.0f);
	DECOR_SET_BOOL(bVar0, "MP_ONLY", true);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire091", "Campfire01", 29,07159f, 75,29413f, 2373,896f, 0.0f, -42,47477f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire092", "Campfire01", 1,678968f, 76,29803f, 2390,144f, 0.0f, 113,8837f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire093", "Campfire01", 4,160243f, 78,30591f, 2425,663f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire094", "Campfire01", -39,99992f, 76,29803f, 2396,489f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire095", "Campfire01", -71,99994f, 74,29022f, 2343,664f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire096", "Campfire01", -11,99994f, 89,34901f, 2527,622f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire097", "Campfire01", -43,89724f, 79,30981f, 2433,757f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire098", "Campfire01", -161,3723f, 81,31763f, 2504,029f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire099", "Campfire01_bad", -201,9949f, 72,28236f, 2428,262f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire0100", "Campfire01", -224,935f, 75,29413f, 2486,827f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_2, "Campfire0101", "Campfire01", -259,9999f, 78,30591f, 2497,48f, 0.0f, 0.0f, 0.0f);
	Local_2.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Locked_Footlocker", "Locked_Footlocker", -72,00005f, 54,39764f, 2820.0f, 0.0f, -599,5076f, 0.0f);
	Local_2.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_2, "any_washCloths1", "any_washCloths", 119,6759f, 72,28231f, 2672,96f, 0.0f, 101,6139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_680), 0);
	Local_2.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_2, "rand_idle_stand", "rand_idle_stand", 125,609f, 72,40736f, 2675,811f, 0.0f, 221,8964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_684), 0);
	Local_2.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_docks2", "nsit_docks", 120,7647f, 71,27381f, 2683,097f, 0.0f, -154,344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_688), 0);
	Local_2.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_2, "digging", "digging", 129,3431f, 72,33885f, 2666,097f, 0.0f, -53,53743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_692), 0);
	Local_2.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_2, "mex_flirt_sit_stool_attached", "mex_flirt_sit_stool_attached_link", 123,4719f, 72,37572f, 2675,644f, 0.0f, 21,733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_2.f_696), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "brb_rand_idle_stand4", "rand_idle_stand", -479,348f, 20,168f, 3030,72f, 0.0f, -16,63606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_sit_ground_smoke1", "sit_ground_smoke", -101,755f, 55,48045f, 2800,974f, 0.0f, -174,9355f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Man_stand_lookdistance1", "stand_lookdistance_w_any", -117,9614f, 55,2157f, 2809,237f, 0.0f, 110,4136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_80(int iParam0) //Position: 0xA50F / 42255
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_84();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_83(iParam0[iVar03], 8);
		}
		else if (Function_82())
		{
			iVar1 = 1;
			Function_83(iParam0[iVar03], 8);
		}
		Function_83(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_83(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_83(iParam0[iVar03], 2);
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
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_83(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_83(iParam0[iVar03], 2);
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
	Function_81();
	return 1;
}

void Function_81() //Position: 0xA88A / 43146
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_82() //Position: 0xA8CA / 43210
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

void Function_83(var uParam0, int iParam1) //Position: 0xA8F5 / 43253
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_84() //Position: 0xA906 / 43270
{
	if (!Function_16(128))
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

var Function_85(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA948 / 43336
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_86(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_83(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_86(var uParam0, int iParam1, int iParam2) //Position: 0xA980 / 43392
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_83(uParam0[iVar03], 4);
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

void Function_87(int iParam0, int iParam1) //Position: 0xAA44 / 43588
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

bool Function_88() //Position: 0xAA8D / 43661
{
	var uVar0;
	
	Function_87(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("HennigansStead_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_helperHerdDest", 3, -764.0f, 101,3961f, 2200.0f, 0.0f, 20.0f, 0.0f, 26,34139f, 9,701624f, 26,34139f);
	return 1;
}

void Function_89(bool bParam0, int iParam1) //Position: 0xAB25 / 43813
{
	if (!Function_16(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_90(int iParam0) //Position: 0xAB60 / 43872
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_REQUEST_ACTOR(1177, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_REQUEST_ACTOR(1179, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_REQUEST_ACTOR(1178, true, false);
	}
	return;
}

