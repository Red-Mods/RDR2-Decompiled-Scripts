//Decompiled with MagicRDR v1.0
//Function Count : 97
//Statics Count : 364
//Natives Count : 126
//Parameters Count : 2

#region Local Var
	struct<73> Local_0 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_263 = 0;
	bool bLocal_264 = false;
	var uLocal_265 = 0;
	bool bLocal_266 = false;
	bool bLocal_267 = false;
	bool bLocal_268 = false;
	var uLocal_269 = 2;
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
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
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
	var uLocal_332 = 1;
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
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_263 = 0;
	Function_96(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_95("Initializing GreatPlains", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_264 = 1000;
		switch (iLocal_263)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_263 = 1;
				}
				bLocal_264 = false;
				break;
			
			case 0x00000001:
				if (Function_93())
				{
					iLocal_263 = 2;
				}
				bLocal_264 = false;
				break;
			
			case 0x00000002:
				if (Function_84())
				{
					Function_83(&(Global_29008[iScriptParam_0]), 32);
					iLocal_263 = 3;
					Function_79(Local_0);
				}
				bLocal_264 = false;
				break;
			
			case 0x00000003:
				bLocal_266 = LAUNCH_NEW_SCRIPT_WITH_ARGS("GreatPlainsVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_7108, &Global_8388, iScriptParam_0);
				iLocal_263 = 5;
				bLocal_264 = false;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_7108, &Global_8388, iScriptParam_0))
				{
					iLocal_263 = 4;
					bLocal_264 = false;
				}
				else
				{
					bLocal_264 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_29008[iScriptParam_0]), 16))
				{
					iLocal_263 = 6;
				}
				bLocal_264 = false;
				break;
			
			case 0x00000006:
				Function_74(0, &uLocal_269, Local_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_74(1, &uLocal_269, Local_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_69(&Global_7108, &Global_8388, &uLocal_269, Global_6289, iScriptParam_0);
				Function_83(&(Global_29008[iScriptParam_0]), 8);
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_68(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_263 = 10;
				}
				else
				{
					iLocal_263 = 7;
				}
				bLocal_264 = false;
				break;
			
			case 0x00000007:
				Function_66(iScriptParam_0);
				if (Function_65(320) <= 20)
				{
					Function_61(21, 2, 25, 4294967276, 50, 1, 1024, 0, 4, iScriptParam_0, "$/content/Ambient/Roaming/event_last_buffalo", 63, 2, 130.0f, 8, 15, 0);
					Function_60(&Global_17483[2175] + 120, 2, 20.0f, 1, 752);
					Function_59(&Global_17483[2175] + 120, -10.0f, 4);
					Function_58(&Global_17483[2175] + 120, 20.0f);
					uLocal_265 = uLocal_265;
				}
				iLocal_263 = 8;
				bLocal_264 = false;
				break;
			
			case 0x00000008:
				Function_57(0, Global_30717[0], 772,1412f, 79,45659f, 1241,604f);
				if (!Function_56(&Global_30717))
				{
					Function_52(StackVal, 3, 0,5f, 0, Local_0, !Function_56(&Global_30717));
					Function_51(64);
					Function_47(0, 8, 4, 0, 3);
				}
				Function_83(&(Global_29008[iScriptParam_0]), 512);
				iLocal_263 = 9;
				bLocal_264 = false;
				break;
			
			case 0x00000009:
				if (!Function_56(&Global_30717))
				{
					Function_45(Local_0, iScriptParam_0);
				}
				Global_29004 = 2;
				Function_83(&(Global_29008[iScriptParam_0]), 4);
				Function_44("Finished Initializing GreatPlains", 5.0f);
				iLocal_263 = 10;
				bLocal_264 = false;
				break;
			
			case 0x0000000A:
				if (!Function_56(&Global_30717))
				{
					if (iLocal_310)
					{
						iLocal_310 = 0;
						iLocal_263 = 8;
						bLocal_264 = false;
					}
				}
				else
				{
					iLocal_310 = 1;
				}
				Function_31(&(Global_26282[24]), "BWG", 34, Local_0, 2);
				if (Function_30())
				{
					if (!IS_SCRIPT_VALID(iLocal_268))
					{
						bLocal_268 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/Roaming/event_last_buffalo", &uLocal_311, 51, 0);
					}
				}
				if (Function_22(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_267))
					{
						bLocal_267 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_311, 51, 0);
					}
				}
				if (Function_76(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_263 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_264);
	}
	Function_21(iScriptParam_0);
	Function_11(&Global_7108, &Global_8388, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_68(&(Global_29008[iScriptParam_0]), 32);
	Function_68(&(Global_29008[iScriptParam_0]), 64);
	Function_68(&(Global_29008[iScriptParam_0]), 8);
	Function_68(&(Global_29008[iScriptParam_0]), 512);
	Function_68(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_266))
	{
		TERMINATE_SCRIPT(bLocal_266);
	}
	Function_44("Unloaded GreatPlains", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x55A / 1370
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

void Function_2(int iParam0) //Position: 0x590 / 1424
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x5B2 / 1458
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x5C8 / 1480
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x5DE / 1502
{
	Function_6(&Local_19 + 4);
	RELEASE_LAYOUT_REF(Local_19);
	return;
}

void Function_6(int iParam0) //Position: 0x5F0 / 1520
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

void Function_7(var uParam0, int iParam1) //Position: 0x616 / 1558
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

void Function_8(var uParam0, int iParam1) //Position: 0x744 / 1860
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x75E / 1886
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x77B / 1915
{
	Function_6(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x78D / 1933
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_68(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_76(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_76(&(Global_29008[iParam2]), 256))
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
			Function_83(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x978 / 2424
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

int Function_13(int iParam0) //Position: 0xAC7 / 2759
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

int Function_14(int iParam0) //Position: 0xAF2 / 2802
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

void Function_15(var uParam0, int iParam1) //Position: 0xB26 / 2854
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xB35 / 2869
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xB51 / 2897
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xB68 / 2920
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xB84 / 2948
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

bool Function_20() //Position: 0x1032 / 4146
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0x103B / 4155
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

bool Function_22(int iParam0) //Position: 0x10A6 / 4262
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
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
	if (Function_27())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_25(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_24(0))
	{
		return 0;
	}
	if (Function_20())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_23(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_23(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1129 / 4393
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

bool Function_24(int iParam0) //Position: 0x11CD / 4557
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_25(int iParam0) //Position: 0x11E8 / 4584
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
		if (!Function_26(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_26(bool bParam0) //Position: 0x129C / 4764
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_76(&(Global_29008[bParam0]), 2048);
}

bool Function_27() //Position: 0x12BA / 4794
{
	return Function_28(StackVal, 1);
}

int Function_28(var uParam0, bool bParam1) //Position: 0x12C9 / 4809
{
	return (uParam0 && bParam1) == 0;
}

var Function_29() //Position: 0x12D6 / 4822
{
	return StackVal;
}

bool Function_30() //Position: 0x12E1 / 4833
{
	if (IS_SCRIPT_VALID(Global_3373))
	{
		return 0;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		return 0;
	}
	if (Global_17483[2175].f_292 == 1)
	{
		return 0;
	}
	if (Function_65(320) > 20)
	{
		return 0;
	}
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_17483[2175].f_264))
	{
		return 0;
	}
	if ((Global_29007 != 3 || Global_29007 != 4) || Global_29007 != 5)
	{
		return 0;
	}
	if (Function_20())
	{
		return 0;
	}
	if (Function_23(0, 0, 1, 1))
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x135B / 4955
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (StackVal)
	{
		if (iParam4 == 1)
		{
			if (VDIST(Global_34574, -1804,95f, 23,088f, 2810,314f) < 250.0f)
			{
				Function_42(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 250.0f)
			{
				Function_42(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_41(iParam0, 63))
			{
				if (Function_40(76) || Function_39(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_37(cParam1, iParam0, 3, bParam3);
						Function_34(iParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(Global_34574, -1804,95f, 23,088f, 2810,314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_33();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_32();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_41(iParam0, 63))
		{
			if (Function_40(76) || Function_39(76))
			{
				Function_37(cParam1, iParam0, 3, bParam3);
				Function_34(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_37(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_32() //Position: 0x1556 / 5462
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_34(&(Global_26282[34]), bVar0);
		bVar0++;
	}
	return;
}

void Function_33() //Position: 0x159D / 5533
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_34(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x15EF / 5615
{
	if (bParam1 <= 32)
	{
		Function_35(iParam0, Function_36(bParam1));
	}
	else
	{
		Function_35(iParam0 + 4, Function_36((bParam1 - 32)));
	}
	return;
}

void Function_35(var uParam0, bool bParam1) //Position: 0x1618 / 5656
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_36(bool bParam0) //Position: 0x1627 / 5671
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_37(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1633 / 5683
{
	bool bVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(iParam1->f_12))
	{
		iParam1->f_12 = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", bParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_41(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_38(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(bVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1->f_12);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

var Function_38() //Position: 0x16D3 / 5843
{
	int iVar0;
	
	return iVar0;
}

int Function_39(int iParam0) //Position: 0x16DB / 5851
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_40(int iParam0) //Position: 0x16F0 / 5872
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_41(int iParam0, bool bParam1) //Position: 0x1705 / 5893
{
	if (bParam1 <= 32)
	{
		return Function_28(*iParam0, Function_36(bParam1));
	}
	return Function_28(StackVal, Function_36((bParam1 - 32)));
}

void Function_42(int iParam0) //Position: 0x1730 / 5936
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_43(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_43(bool bParam0) //Position: 0x175C / 5980
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
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_44(bool bParam0, float fParam1) //Position: 0x17A1 / 6049
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

void Function_45(bool bParam0, bool bParam1) //Position: 0x17DF / 6111
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
		Function_46(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_46(var uParam0, int iParam1) //Position: 0x18D9 / 6361
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_47(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x18E6 / 6374
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
		Function_48();
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

void Function_48() //Position: 0x19CA / 6602
{
	int iVar0;
	
	Global_26960 = Function_49(StackVal);
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

int Function_49(int iParam0) //Position: 0x1A18 / 6680
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_50(int iParam0) //Position: 0x1A30 / 6704
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_51(bool bParam0) //Position: 0x1A45 / 6725
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_52(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1A58 / 6744
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
		Function_55();
	}
	if (bParam5)
	{
		Function_53(1048576);
	}
}

void Function_53(int iParam0) //Position: 0x1B6B / 7019
{
	Function_54(&Global_28842, iParam0);
	return;
}

void Function_54(var uParam0, var uParam1) //Position: 0x1B79 / 7033
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_55() //Position: 0x1B94 / 7060
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_53(16384);
	}
	return;
}

bool Function_56(int iParam0) //Position: 0x1BB0 / 7088
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

void Function_57(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1BFD / 7165
{
	if (!Function_50(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

void Function_58(int iParam0, int iParam1) //Position: 0x1C5F / 7263
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_59(int iParam0, float fParam1, int iParam2) //Position: 0x1C6D / 7277
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_60(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1C83 / 7299
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1CA9 / 7337
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_62(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_62(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1CEB / 7403
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
					bVar2 = Function_64(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_63(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_64(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_63(int iParam0, int iParam1) //Position: 0x207B / 8315
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_64(int iParam0) //Position: 0x209C / 8348
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

int Function_65(int iParam0) //Position: 0x20B2 / 8370
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_66(int iParam0) //Position: 0x20F3 / 8435
{
	Function_61(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_60(&Global_17483[1875] + 120, 1, 5.0f, 1, 640);
	Function_58(&Global_17483[1875] + 120, 5.0f);
	Function_67(&Global_17483[575] + 120, 19,9f, 0,7f);
	Function_59(&Global_17483[575] + 120, -4.0f, 2);
	return;
}

void Function_67(int iParam0, var uParam1, int iParam2) //Position: 0x2188 / 8584
{
	(iParam0 + 60)->f_44 = uParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_68(var uParam0, int iParam1) //Position: 0x219E / 8606
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_69(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x21B5 / 8629
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_76(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_70(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_68(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_83(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2267 / 8807
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_73(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_72(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_71(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_71(bool bParam0, int iParam1) //Position: 0x23D2 / 9170
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_72(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_72(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_72(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_72(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_72(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_72(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_72(vector3 vParam0) //Position: 0x250E / 9486
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_73(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2526 / 9510
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

void Function_74(int iParam0, var uParam1, bool bParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, vector3 vParam18) //Position: 0x263F / 9791
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_75(StackVal, StackVal, vParam3, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam3);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam6, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam6);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam9, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam9);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam12, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam12);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam15, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam15);
		PRINTNL();
	}
	if (Function_75(StackVal, StackVal, vParam18, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam18);
		PRINTNL();
	}
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam3 };
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam6 };
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam9 };
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam12 };
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam15 };
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam18 };
	uParam1[bVar020]->f_72 = bParam2;
}

bool Function_75(vector3 vParam0, vector3 vParam3) //Position: 0x28E6 / 10470
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_76(var uParam0, int iParam1) //Position: 0x2913 / 10515
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(var uParam0, var uParam1, int iParam2) //Position: 0x292F / 10543
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_20())
	{
		return 1;
	}
	if (Function_76(&(Global_29008[iParam2]), 0x40000000))
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

void Function_78(var uParam0, var uParam1, int iParam2) //Position: 0x29FB / 10747
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	if (!Function_76(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_83(&(Global_29008[iParam2]), 0x40000000);
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

int Function_79(bool bParam0) //Position: 0x2AD1 / 10961
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
			bVar10 = Function_20();
			bVar11 = (Function_81() && !Function_80(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_81()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
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

bool Function_80(bool bParam0, bool bParam1) //Position: 0x2C1A / 11290
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_81() //Position: 0x2C3A / 11322
{
	if (Function_20())
	{
		return (Function_82() != 1 || Function_82() != 0);
	}
	return 0;
}

int Function_82() //Position: 0x2C53 / 11347
{
	return Global_79349.f_16;
}

void Function_83(var uParam0, int iParam1) //Position: 0x2C5F / 11359
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_84() //Position: 0x2C6E / 11374
{
	bool bVar0;
	
	Function_92(3, 3);
	bVar0 = bVar0;
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_8", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire06", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/player_herb_goldencurrant", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/player_herb_prairiepoppy", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_90(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (!Function_85(&Local_19 + 4))
	{
		return 0;
	}
	Local_19 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(Local_19))
	{
		Local_19 = CREATE_LAYOUT("GreatPlains_layout");
	}
	Local_19.f_368 = CREATE_POINT_IN_LAYOUT(Local_19, "f_bhint", 150,9443f, 128,8552f, 1388.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_372 = CREATE_POINT_IN_LAYOUT(Local_19, "f_bhint1", 357,1578f, 79,43221f, 1985,98f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Locked_Footlocker", "Locked_Footlocker", 160,808f, 129,4933f, 1392,071f, 0.0f, -165,0192f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Locked_Footlocker1", "Locked_Footlocker", 467,636f, 75,51f, 1920,058f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Locked_Footlocker2", "Locked_Footlocker", 816,225f, 77,302f, 1714,051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Locked_Footlocker3", "Locked_Footlocker", 229,21f, 102,348f, 950,713f, 0.0f, 76,22884f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Locked_Footlocker4", "Locked_Footlocker", 30,60843f, 135,5277f, 1486,061f, 0.0f, 139,0777f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_19, "treasure_hunting_8", "treasure_hunting_8", 146,9445f, 128,5542f, 1387,368f, 0.0f, -2,976609f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", 157,088f, 128,6531f, 1412,838f, 0.0f, -119,0785f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_sleeping_wall_scripted", "sleeping_wall_scripted", 145,9573f, 129,7917f, 1403,865f, 0.0f, 114,7033f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", 149,7698f, 129,4657f, 1400,383f, 0.0f, -57,51074f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_Pee", "Pee", 149,4602f, 128,2654f, 1383,105f, 0.0f, -301,9947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_rand_idle_stand2", "rand_idle_stand", 152,4598f, 129,316f, 1399,699f, 0.0f, 105,5583f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_stand_guntricks_e_any1", "stand_guntricks_e_any", 149,0702f, 129,0827f, 1396,536f, 0.0f, -138,0183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_horse_tend6", "horse_tend", 151,546f, 129,495f, 1404,585f, 0.0f, -139,3574f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_horse_tend7", "horse_tend", 149,989f, 128,875f, 1392,185f, 0.0f, -117,0606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_horse_tend8w", "horse_tend", 151,0038f, 128,875f, 1390,909f, 0.0f, -118,8501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_smoking_stand2", "smoking_stand", 158,876f, 129,474f, 1395,151f, 0.0f, 77,17844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", 148,7914f, 127,7514f, 1379,212f, 0.0f, -299,6739f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_horse_stay", "horse_stay", 155,281f, 129,15f, 1403,048f, 0.0f, 60,28025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "BkTR_look_distance_binocs", "look_distance_binocs", 138,424f, 127,959f, 1391,745f, 0.0f, 5,710794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 146,8251f, 128,8514f, 1392,798f, 0.0f, 88,73585f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_380), 0);
	Local_19.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire010", "Campfire05", 697,4047f, 100,3921f, 1633,405f, 0.0f, 186,3506f, 0.0f);
	DECOR_SET_BOOL(Local_19.f_384, "MP_ONLY", true);
	Local_19.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire011", "Campfire05", 124.0f, 121,4745f, 1528f, 0.0f, -22,92498f, 0.0f);
	DECOR_SET_BOOL(Local_19.f_388, "MP_ONLY", true);
	Local_19.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire013", "Campfire05", 48,00003f, 100,9112f, 1836f, 0.0f, 0.0f, 0.0f);
	Local_19.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire014", "Campfire03", 88,00003f, 125,4902f, 1576,387f, 0.0f, 0.0f, 0.0f);
	Local_19.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad1", "Campfire01_bad", 212f, 115,4509f, 1544.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad10", "Campfire01_bad", 104.0f, 107,4196f, 1048.0f, 0.0f, 181,8817f, 0.0f);
	Local_19.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad11", "Campfire01_bad", 223,6124f, 101,9845f, 1883,817f, 0.0f, 92,0954f, 0.0f);
	Local_19.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad12", "Campfire01_bad", 316.0f, 113,4431f, 1344f, 0.0f, 100,1395f, 0.0f);
	Local_19.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad2", "Campfire01_bad", 366,315f, 115,451f, 1313,685f, 0.0f, 0.0f, 0.0f);
	Local_19.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad3", "Campfire01_bad", 331,9999f, 100,3922f, 1028f, 0.0f, 0.0f, 0.0f);
	Local_19.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad4", "Campfire01_bad", 524,2903f, 96,36452f, 933,6621f, 0.0f, 386,3335f, 0.0f);
	Local_19.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad6", "Campfire01_bad", 376f, 109,4274f, 1724,479f, 0.0f, 0.0f, 0.0f);
	Local_19.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad7", "Campfire01_bad", 264.0f, 101,3961f, 968,0002f, 0.0f, -94,60612f, 0.0f);
	Local_19.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad8", "Campfire01_bad", 656,164f, 90,43034f, 1031,825f, 0.0f, 0.0f, 0.0f);
	Local_19.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire021", "Campfire05", 404.0f, 108,4235f, 1654,104f, 0.0f, 0.0f, 0.0f);
	Local_19.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire022", "Campfire03", 168,0292f, 119,3628f, 1544,018f, 0.0f, 0.0f, 0.0f);
	Local_19.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire024", "Campfire03", 609,7366f, 93,37498f, 1076f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_19.f_448, "MP_ONLY", true);
	Local_19.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire025", "Campfire03", 526,9951f, 95,37256f, 1035,995f, 0.0f, 0.0f, 0.0f);
	Local_19.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire026", "Campfire02", 61,89545f, 109,4274f, 1120,972f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_19.f_456, "MP_ONLY", true);
	Local_19.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire027", "Campfire02", 874,3532f, 82,32153f, 1500,083f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_19.f_460, "MP_ONLY", true);
	Local_19.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire029", "Campfire06", 202,384f, 110,4314f, 1095,905f, 0.0f, 169,7201f, 0.0f);
	DECOR_SET_BOOL(Local_19.f_464, "MP_ONLY", true);
	Local_19.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire030", "Campfire02", 407,9999f, 102,4f, 1164.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire032", "Campfire06", -44,00024f, 117,7183f, 1596f, 0.0f, 0.0f, 0.0f);
	Local_19.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire033", "Campfire06", 33,6366f, 117,4587f, 1620.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_480 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad", "Campfire03_bad", 753,1762f, 93,36462f, 1582,798f, 0.0f, 0.0f, 0.0f);
	Local_19.f_484 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad1", "Campfire03_bad", 778,547f, 83,48665f, 1963,869f, 0.0f, 0.0f, 0.0f);
	Local_19.f_488 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad10", "Campfire03_bad", 316f, 101,3961f, 966,3281f, 0.0f, 0.0f, 0.0f);
	Local_19.f_492 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad12", "Campfire03_bad", 297,1872f, 106,4156f, 1160f, 0.0f, 0.0f, 0.0f);
	Local_19.f_496 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad13", "Campfire03_bad", 809,5115f, 77,30188f, 1717,511f, 0.0f, 184,6639f, 0.0f);
	Local_19.f_500 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad2", "Campfire03_bad", 701,194f, 84,54114f, 1975,863f, 0.0f, 0.0f, 0.0f);
	Local_19.f_504 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad3", "Campfire03_bad", 664.0f, 85,33325f, 1964,967f, 0.0f, 94,86598f, 0.0f);
	Local_19.f_508 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad4", "Campfire03_bad", 621,7342f, 86,33717f, 1961,646f, 0.0f, 0.0f, 0.0f);
	Local_19.f_512 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad6", "Campfire03_bad", 411,9999f, 107,4196f, 1720.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad8", "Campfire03_bad", 485,7573f, 98,38434f, 977,7575f, 0.0f, -74,91268f, 0.0f);
	Local_19.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire03_bad9", "Campfire03_bad", 555,5664f, 94,36865f, 994,2076f, 0.0f, 0.0f, 0.0f);
	Local_19.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire04", "Campfire04", 264,5958f, 107,4196f, 1087,714f, 0.0f, 0.0f, 0.0f);
	Local_19.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire06", "Campfire04", 302,5833f, 97,38037f, 1860,252f, 0.0f, -146,5471f, 0.0f);
	Local_19.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire07", "Campfire04", 260,1869f, 116,4403f, 1716,668f, 0.0f, 68,69151f, 0.0f);
	Local_19.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire09", "Campfire04", 427,9999f, 102,4f, 1048f, 0.0f, 0.0f, 0.0f);
	Local_19.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant", "Player_Herb_goldenCurrant", 695,1923f, 90,55561f, 1076f, 0.0f, 0.0f, 0.0f);
	Local_19.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant1", "Player_Herb_goldenCurrant", 560.0f, 94,36865f, 1012f, 0.0f, 0.0f, 0.0f);
	Local_19.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant10", "Player_Herb_goldenCurrant", -204.0f, 129,5059f, 1304.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant11", "Player_Herb_goldenCurrant", -36.0f, 112,0246f, 1284.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant12", "Player_Herb_goldenCurrant", 31,99994f, 118,4627f, 1324.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant14", "Player_Herb_goldenCurrant", -10,17844f, 126,9068f, 1437,727f, 0.0f, 0.0f, 0.0f);
	Local_19.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant15", "Player_Herb_goldenCurrant", -92.0f, 119,2099f, 1474,262f, 0.0f, 0.0f, 0.0f);
	Local_19.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant16", "Player_Herb_goldenCurrant", 20,94169f, 130,5098f, 1452,534f, 0.0f, 0.0f, 0.0f);
	Local_19.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant17", "Player_Herb_goldenCurrant", 95,99994f, 127,498f, 1416f, 0.0f, 0.0f, 0.0f);
	Local_19.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant18", "Player_Herb_goldenCurrant", 136.0f, 129,5059f, 1440f, 0.0f, 0.0f, 0.0f);
	Local_19.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant19", "Player_Herb_goldenCurrant", -20,00006f, 123,4811f, 1520,009f, 0.0f, 0.0f, 0.0f);
	Local_19.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant2", "Player_Herb_goldenCurrant", 467,9999f, 98,56538f, 1058,898f, 0.0f, 0.0f, 0.0f);
	Local_19.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant20", "Player_Herb_goldenCurrant", 99,99988f, 122,6617f, 1501,576f, 0.0f, 0.0f, 0.0f);
	Local_19.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant21", "Player_Herb_goldenCurrant", 28.0f, 124,3337f, 1572.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant22", "Player_Herb_goldenCurrant", 80,00003f, 124,834f, 1596.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant23", "Player_Herb_goldenCurrant", 8.0f, 116,4548f, 1636f, 0.0f, 0.0f, 0.0f);
	Local_19.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant24", "Player_Herb_goldenCurrant", 120f, 123,8186f, 1664.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant25", "Player_Herb_goldenCurrant", 8.0f, 115,2069f, 1704f, 0.0f, 0.0f, 0.0f);
	Local_19.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant26", "Player_Herb_goldenCurrant", 80.0f, 117,9192f, 1748.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant27", "Player_Herb_goldenCurrant", 49,58045f, 99,23539f, 1856.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant28", "Player_Herb_goldenCurrant", 112f, 84,60585f, 1929,137f, 0.0f, 0.0f, 0.0f);
	Local_19.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant29", "Player_Herb_goldenCurrant", 178,3197f, 88,87658f, 1971,804f, 0.0f, 0.0f, 0.0f);
	Local_19.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant3", "Player_Herb_goldenCurrant", 256f, 101,3961f, 1012f, 0.0f, 0.0f, 0.0f);
	Local_19.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant30", "Player_Herb_goldenCurrant", 204f, 91,35681f, 1936.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant31", "Player_Herb_goldenCurrant", 228f, 105,4117f, 1852.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant32", "Player_Herb_goldenCurrant", 380f, 97,38037f, 1820.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant33", "Player_Herb_goldenCurrant", 411,801f, 94,91784f, 1867,155f, 0.0f, 0.0f, 0.0f);
	Local_19.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant34", "Player_Herb_goldenCurrant", 528,3188f, 97,83836f, 1845,436f, 0.0f, 0.0f, 0.0f);
	Local_19.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant35", "Player_Herb_goldenCurrant", 616.0f, 86,33722f, 1956f, 0.0f, 0.0f, 0.0f);
	Local_19.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant36", "Player_Herb_goldenCurrant", 733,7625f, 85,77563f, 1913,762f, 0.0f, 0.0f, 0.0f);
	Local_19.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant37", "Player_Herb_goldenCurrant", 656,0001f, 99,38818f, 1832.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant38", "Player_Herb_goldenCurrant", 624.0f, 107,4196f, 1744.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant4", "Player_Herb_goldenCurrant", 123,8889f, 110,9025f, 1011,628f, 0.0f, 0.0f, 0.0f);
	Local_19.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant40", "Player_Herb_goldenCurrant", 574,8133f, 101,0377f, 1796,16f, 0.0f, 0.0f, 0.0f);
	Local_19.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant41", "Player_Herb_goldenCurrant", 747,9999f, 89,349f, 1884.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant42", "Player_Herb_goldenCurrant", 535,9999f, 108,4235f, 1725,181f, 0.0f, 0.0f, 0.0f);
	Local_19.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant43", "Player_Herb_goldenCurrant", 736,0001f, 95,3725f, 1636.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant44", "Player_Herb_goldenCurrant", 660.0f, 102,949f, 1776.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant45", "Player_Herb_goldenCurrant", 432f, 110,4313f, 1652,316f, 0.0f, 0.0f, 0.0f);
	Local_19.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant46", "Player_Herb_goldenCurrant", 616.0f, 102,883f, 1632.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant47", "Player_Herb_goldenCurrant", 839,9999f, 86,18433f, 1608.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant48", "Player_Herb_goldenCurrant", 799,9999f, 77,30188f, 1720.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant49", "Player_Herb_goldenCurrant", 599,9999f, 107,4196f, 1736.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant5", "Player_Herb_goldenCurrant", 128.0f, 111,4353f, 1088.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant50", "Player_Herb_goldenCurrant", 588.0f, 102,4792f, 1651,33f, 0.0f, 0.0f, 0.0f);
	Local_19.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant6", "Player_Herb_goldenCurrant", 240,0001f, 108,4235f, 1080.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant7", "Player_Herb_goldenCurrant", -41,29242f, 111,261f, 1197,522f, 0.0f, 0.0f, 0.0f);
	Local_19.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant8", "Player_Herb_goldenCurrant", 50,69914f, 111,0679f, 1212,378f, 0.0f, 0.0f, 0.0f);
	Local_19.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_goldenCurrant9", "Player_Herb_goldenCurrant", -104f, 113,2009f, 1240.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy", "Player_Herb_prairiePoppy", 152,8835f, 108,4235f, 1171,232f, 0.0f, 0.0f, 0.0f);
	Local_19.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy1", "Player_Herb_prairiePoppy", 288.0f, 107,363f, 1176f, 0.0f, 0.0f, 0.0f);
	Local_19.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy10", "Player_Herb_prairiePoppy", 100,0052f, 121,8024f, 1347,977f, 0.0f, 0.0f, 0.0f);
	Local_19.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy11", "Player_Herb_prairiePoppy", 99,65958f, 124,3904f, 1376,273f, 0.0f, 0.0f, 0.0f);
	Local_19.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy12", "Player_Herb_prairiePoppy", 166,9878f, 129,4901f, 1388,083f, 0.0f, 0.0f, 0.0f);
	Local_19.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy13", "Player_Herb_prairiePoppy", 235,9999f, 124,7943f, 1332f, 0.0f, 0.0f, 0.0f);
	Local_19.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy14", "Player_Herb_prairiePoppy", 281,4927f, 119,3126f, 1350,6f, 0.0f, 0.0f, 0.0f);
	Local_19.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy15", "Player_Herb_prairiePoppy", 227,9546f, 125,0979f, 1361,898f, 0.0f, 0.0f, 0.0f);
	Local_19.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy16", "Player_Herb_prairiePoppy", 153,7697f, 128,0826f, 1438,607f, 0.0f, 0.0f, 0.0f);
	Local_19.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy17", "Player_Herb_prairiePoppy", 217,1763f, 124,4003f, 1413,258f, 0.0f, 0.0f, 0.0f);
	Local_19.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy18", "Player_Herb_prairiePoppy", 117,3568f, 125,5178f, 1474,203f, 0.0f, 0.0f, 0.0f);
	Local_19.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy19", "Player_Herb_prairiePoppy", 240,9872f, 118,4365f, 1471,016f, 0.0f, 0.0f, 0.0f);
	Local_19.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy2", "Player_Herb_prairiePoppy", 360.0f, 103,381f, 1160f, 0.0f, 0.0f, 0.0f);
	Local_19.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy20", "Player_Herb_prairiePoppy", 337,9934f, 116,4312f, 1469,902f, 0.0f, 0.0f, 0.0f);
	Local_19.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy21", "Player_Herb_prairiePoppy", 309,7348f, 115,2243f, 1474,274f, 0.0f, 0.0f, 0.0f);
	Local_19.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy22", "Player_Herb_prairiePoppy", 415,5941f, 106,8482f, 1523,904f, 0.0f, 0.0f, 0.0f);
	Local_19.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy23", "Player_Herb_prairiePoppy", 376,0001f, 110,4313f, 1528f, 0.0f, 0.0f, 0.0f);
	Local_19.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy24", "Player_Herb_prairiePoppy", 343,8192f, 111,4151f, 1524.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy25", "Player_Herb_prairiePoppy", 287,9999f, 113,4431f, 1520.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy26", "Player_Herb_prairiePoppy", 247,9999f, 114,447f, 1524.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy27", "Player_Herb_prairiePoppy", 248f, 114,42f, 1544.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy28", "Player_Herb_prairiePoppy", 132.0f, 121,4745f, 1536f, 0.0f, 0.0f, 0.0f);
	Local_19.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy29", "Player_Herb_prairiePoppy", 144.0f, 123,4824f, 1592,555f, 0.0f, 0.0f, 0.0f);
	Local_19.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy3", "Player_Herb_prairiePoppy", 427,9999f, 107,4196f, 1288f, 0.0f, 0.0f, 0.0f);
	Local_19.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy30", "Player_Herb_prairiePoppy", 128,8151f, 124,4632f, 1636f, 0.0f, 0.0f, 0.0f);
	Local_19.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy31", "Player_Herb_prairiePoppy", 240f, 115,4509f, 1585,015f, 0.0f, 0.0f, 0.0f);
	Local_19.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy32", "Player_Herb_prairiePoppy", 271,9999f, 115,4509f, 1616,957f, 0.0f, 0.0f, 0.0f);
	Local_19.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy33", "Player_Herb_prairiePoppy", 348,0647f, 110,468f, 1682,394f, 0.0f, 0.0f, 0.0f);
	Local_19.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy34", "Player_Herb_prairiePoppy", 416f, 108,4235f, 1624,415f, 0.0f, 0.0f, 0.0f);
	Local_19.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy35", "Player_Herb_prairiePoppy", 419,9999f, 108,3964f, 1593,715f, 0.0f, 0.0f, 0.0f);
	Local_19.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy36", "Player_Herb_prairiePoppy", 256,9475f, 117,0458f, 1464,641f, 0.0f, 0.0f, 0.0f);
	Local_19.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy37", "Player_Herb_prairiePoppy", 227,9999f, 124,4671f, 1412f, 0.0f, 0.0f, 0.0f);
	Local_19.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy38", "Player_Herb_prairiePoppy", 343,9999f, 118,4272f, 1304.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy39", "Player_Herb_prairiePoppy", 423,9999f, 108,4087f, 1276.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy4", "Player_Herb_prairiePoppy", 359,3031f, 116,448f, 1304.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy40", "Player_Herb_prairiePoppy", 344,8217f, 113,2369f, 1395,043f, 0.0f, 0.0f, 0.0f);
	Local_19.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy41", "Player_Herb_prairiePoppy", 223,2836f, 120,2737f, 1452,303f, 0.0f, 0.0f, 0.0f);
	Local_19.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy42", "Player_Herb_prairiePoppy", 315,9999f, 113,4431f, 1504.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy43", "Player_Herb_prairiePoppy", 443,0988f, 107,2659f, 1570,524f, 0.0f, 0.0f, 0.0f);
	Local_19.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy44", "Player_Herb_prairiePoppy", 426,5165f, 109,3572f, 1618,344f, 0.0f, 0.0f, 0.0f);
	Local_19.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy45", "Player_Herb_prairiePoppy", 300f, 118,4304f, 1620.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy46", "Player_Herb_prairiePoppy", 279,6821f, 116,2279f, 1695,576f, 0.0f, 0.0f, 0.0f);
	Local_19.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy47", "Player_Herb_prairiePoppy", 175,9876f, 118,7702f, 1556,077f, 0.0f, 0.0f, 0.0f);
	Local_19.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy48", "Player_Herb_prairiePoppy", 370,0059f, 108,4235f, 1710,173f, 0.0f, 0.0f, 0.0f);
	Local_19.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy49", "Player_Herb_prairiePoppy", 333,5171f, 98,36597f, 1796.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy5", "Player_Herb_prairiePoppy", 454,1075f, 104,3669f, 1374,861f, 0.0f, 0.0f, 0.0f);
	Local_19.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy50", "Player_Herb_prairiePoppy", 225,4733f, 109,4706f, 1801,168f, 0.0f, 0.0f, 0.0f);
	Local_19.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy6", "Player_Herb_prairiePoppy", 431,9182f, 111,4168f, 1424,007f, 0.0f, 0.0f, 0.0f);
	Local_19.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy7", "Player_Herb_prairiePoppy", 204,0399f, 125,4902f, 1309,547f, 0.0f, 0.0f, 0.0f);
	Local_19.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy8", "Player_Herb_prairiePoppy", 203,9303f, 117,4588f, 1235,954f, 0.0f, 0.0f, 0.0f);
	Local_19.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_prairiePoppy9", "Player_Herb_prairiePoppy", 141,0508f, 121,4022f, 1317,086f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Pee3", "Pee", 362,1963f, 78,70888f, 1984,005f, 0.0f, -43,27293f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", 356,695f, 73,3355f, 1980,807f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_rand_idle_stand", "rand_idle_stand", 338,2788f, 74,5917f, 1942,472f, 0.0f, -164,8241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_rand_idle_stand2", "rand_idle_stand", 359,0939f, 78,39108f, 1991,795f, 0.0f, -161,0478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_rand_idle_stand3", "rand_idle_stand", 351,7272f, 76,34866f, 1986,588f, 0.0f, 68,45935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_sit_docks3", "nsit_docks", 361,7251f, 73,50711f, 1973,968f, 0.0f, -118,1669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Sit_Ground_Drink", "Sit_Ground_Drink", 353,6501f, 73,88201f, 1976,827f, 0.0f, -126,9591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Sit_Ground_Drink1", "Sit_Ground_Drink", 352,9845f, 76,39187f, 1984,406f, 0.0f, 52,31681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_sit_ground_smoke", "sit_ground_smoke", 357,5717f, 76,19849f, 1981,747f, 0.0f, -29,00372f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_sit_ground_smoke2", "sit_ground_smoke", 335,3785f, 74,60016f, 1940,426f, 0.0f, -21,86767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_sit_ground_smoke3", "sit_ground_smoke", 369,985f, 73,58916f, 1944,503f, 0.0f, -25,18101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_stand_lookdistance_w_any", "stand_lookdistance_w_any", 354,8198f, 79,43221f, 1982,737f, 0.0f, 62,95712f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_stand_lookdistance_w_any1", "stand_lookdistance_w_any", 346,8859f, 74,00498f, 1984,04f, 0.0f, 129,3219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_stand_yelling_down", "stand_yelling_down", 355,6973f, 79,401f, 1982,143f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_dealer_and_customer2", "dealer_and_customer", 355,8004f, 76,38882f, 1980,956f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_look_out_window_L", "look_out_window_L", 330,4944f, 74,60293f, 1937,513f, 0.0f, 107,1152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_940), 0);
	Local_19.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Rand_Idle_NearWall2", "Rand_Idle_NearWall", 331,1541f, 74,39916f, 1933,66f, 0.0f, 66,63307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_944), 0);
	Local_19.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_lean_fence_L_talking", "lean_fence_L_talking", 334,3096f, 74,59482f, 1942,392f, 0.0f, 153,1973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_948), 0);
	Local_19.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Rand_Idle_NearWall1", "Rand_Idle_NearWall", 371,9703f, 73,48869f, 1937,603f, 0.0f, -27,3343f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_952), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_sit_docks4", "nsit_docks", 375,2437f, 73,48671f, 1938,945f, 0.0f, -116,2048f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_Sit_Ground_Drink2", "Sit_Ground_Drink", 367,3382f, 73,4931f, 1936,028f, 0.0f, -113,1597f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_horse_stay", "horse_stay", 383,6137f, 73,36394f, 1917,677f, 0.0f, -128,7536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_956), 0);
	Local_19.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_horse_stay1", "horse_stay", 382,3799f, 73,32485f, 1919,193f, 0.0f, -113,8612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_960), 0);
	Local_19.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_lean_fence_back", "lean_fence_back", 377,7558f, 73,47366f, 1924,431f, 0.0f, -117,9854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_964), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "wrk_rand_idle_stand4", "rand_idle_stand", 371,8394f, 73,46868f, 1936,036f, 0.0f, -23,76552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Locked_Footlocker5", "Locked_Footlocker", 689,8721f, 78,78927f, 1034,879f, 0.0f, 321,2147f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad13", "Campfire01_bad", 388.0f, 98,04259f, 968,0001f, 0.0f, 0.0f, 0.0f);
	Local_19.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Campfire01_bad14", "Campfire01_bad", 800.0f, 90,02673f, 1612.0f, 0.0f, -76,12924f, 0.0f);
	return 1;
}

bool Function_85(int iParam0) //Position: 0x6F11 / 28433
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_89();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_88(iParam0[iVar03], 8);
		}
		else if (Function_87())
		{
			iVar1 = 1;
			Function_88(iParam0[iVar03], 8);
		}
		Function_88(iParam0[iVar03], 16);
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
				Function_88(iParam0[iVar03], 1);
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
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
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
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_88(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_88(iParam0[iVar03], 2);
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
	Function_86();
	return 1;
}

void Function_86() //Position: 0x728C / 29324
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

bool Function_87() //Position: 0x72CC / 29388
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

void Function_88(var uParam0, int iParam1) //Position: 0x72F7 / 29431
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_89() //Position: 0x7308 / 29448
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

var Function_90(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x734A / 29514
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_91(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_88(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_91(var uParam0, int iParam1, int iParam2) //Position: 0x7382 / 29570
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_88(uParam0[iVar03], 4);
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

void Function_92(int iParam0, int iParam1) //Position: 0x7446 / 29766
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

bool Function_93() //Position: 0x748F / 29839
{
	var uVar0;
	
	Function_92(3, 3);
	uVar0 = uVar0;
	Function_90(&Local_0 + 4, "p_uti_cover2x1x", 0, 0);
	Function_90(&Local_0 + 4, "p_uti_cover1x2x", 0, 0);
	Function_90(&Local_0 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_85(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("GreatPlains_layout");
	}
	*(&Local_0 + 44) = { 630,629f, 98,168f, 1815,987f };
	*(&Local_0 + 44 + 12) = { 0.0f, -107,0722f, 0.0f };
	Local_0.f_68 = CREATE_POINT_IN_LAYOUT(Local_0, "Temp_CarPos", 630,629f, 98,168f, 1815,987f, 0.0f, -107,0722f, 0.0f);
	Function_94(Local_0, "cover2x1x0", "p_uti_cover2x1x", 204,0001f, 123,4465f, 1639,79f, -177,334f, -108,671f, 177,5641f, 1);
	Function_94(Local_0, "cover2x1x1", "p_uti_cover2x1x", 238,4106f, 117,4588f, 1638,411f, -179,1112f, -163,7204f, 179,8408f, 1);
	Function_94(Local_0, "cover2x1x2", "p_uti_cover2x1x", 183,1441f, 124,4862f, 1647,144f, -175,7983f, -101,7259f, 175,9756f, 1);
	Function_94(Local_0, "cover2x1x3", "p_uti_cover2x1x", 140,4274f, 121,4745f, 1671,573f, -181,8654f, -62,77824f, 181,7489f, 1);
	Function_94(Local_0, "cover2x1x4", "p_uti_cover2x1x", 214,0656f, 123,2074f, 1651,26f, -178,8936f, -140,4584f, 179,3855f, 1);
	Function_94(Local_0, "cover2x1x5", "p_uti_cover2x1x", 127,9999f, 121,1553f, 1681,523f, -183,723f, -76,74288f, 183,714f, 1);
	Function_94(Local_0, "cover2x1x6", "p_uti_cover2x1x", 122,7811f, 123,4847f, 1671,714f, -183,723f, -76,74288f, 183,714f, 1);
	Function_94(Local_0, "cover2x1x7", "p_uti_cover2x1x", 110,9311f, 117,4152f, 1710,931f, -358,6223f, -51,73307f, 359,0082f, 1);
	Function_94(Local_0, "cover2x1x8", "p_uti_cover2x1x", 102,1142f, 117,0503f, 1708,001f, -357,9777f, -65,04119f, 358,2564f, 1);
	Function_94(Local_0, "cover2x1x9", "p_uti_cover2x1x", 27,02832f, 115,3725f, 1706,619f, -357,9777f, -65,04119f, 358,2564f, 1);
	Function_94(Local_0, "cover2x1x10", "p_uti_cover2x1x", 17,18051f, 115,5175f, 1716,66f, -357,9777f, -65,04119f, 358,2564f, 1);
	Function_94(Local_0, "cover2x1x11", "p_uti_cover2x1x", -5,595703f, 113,9409f, 1690,402f, -184,2235f, -78,33517f, 184,2265f, 1);
	Function_94(Local_0, "cover2x1x12", "p_uti_cover2x1x", -0,61668f, 116,3239f, 1720,784f, -355,7089f, -78,52127f, 355,8843f, 1);
	Function_94(Local_0, "cover2x1x13", "p_uti_cover2x1x", 4,000046f, 114,5231f, 1682,438f, -182,2104f, -67,28971f, 182,1291f, 1);
	Function_94(Local_0, "cover2x1x14", "p_uti_cover2x1x", 174,6896f, 125,4902f, 1638,69f, -159,3823f, -92,42357f, 159,4892f, 1);
	Function_94(Local_0, "cover2x1x15", "p_uti_cover2x1x", 196,7614f, 124,4862f, 1664.0f, -178,8384f, -137,2664f, 179,3017f, 1);
	Function_94(Local_0, "cover2x1x16", "p_uti_cover2x1x", 219,1994f, 120,7291f, 1630,848f, -178,8945f, -140,5174f, 179,387f, 1);
	Function_94(Local_0, "cover2x1x17", "p_uti_cover2x1x", 210,1214f, 121,4745f, 1624.0f, -178,159f, -117,6124f, 178,4585f, 1);
	Function_94(Local_0, "cover2x1x18", "p_uti_cover2x1x", 611,8726f, 99,22272f, 1804,307f, 66,32018f, 76,14228f, 66,93644f, 1);
	Function_94(Local_0, "cover2x1x19", "p_uti_cover2x1x", 611,6384f, 97,28822f, 1821,858f, -44,67248f, -110,6125f, 44,03279f, 1);
	Function_94(Local_0, "cover2x1x20", "p_uti_cover2x1x", 623,4265f, 99,05706f, 1808,646f, -24,61025f, -116,6806f, 23,7426f, 1);
	Function_94(Local_0, "cover2x1x21", "p_uti_cover2x1x", 634,2639f, 99,41155f, 1806,225f, -60,33696f, 98,28915f, -62,91229f, 1);
	Local_0.f_72 = Function_94(Local_0, "cover1x2x0", "p_uti_cover1x2x", 621,9322f, 97,37455f, 1823,587f, 8,674876f, -9,379588f, -0,5916787f, 1);
	Function_94(Local_0, "cover2x1x22", "p_uti_cover2x1x", 634,5735f, 97,88709f, 1824,994f, -23,33749f, -108,0665f, 26,44703f, 1);
	Function_94(Local_0, "cover1x1x0", "p_uti_cover1x1x", 617,8123f, 99,60641f, 1803,961f, 18,33718f, 51,66286f, 16,92836f, 1);
	return 1;
}

var Function_94(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x7C42 / 31810
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_95(bool bParam0, int iParam1) //Position: 0x7C6C / 31852
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

void Function_96(int iParam0) //Position: 0x7CA7 / 31911
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

