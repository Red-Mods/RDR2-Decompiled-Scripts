//Decompiled with MagicRDR v1.0
//Function Count : 92
//Statics Count : 375
//Natives Count : 121
//Parameters Count : 2

#region Local Var
	struct<29> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_274 = 0;
	struct<2> Local_275 = { 0, 0 } ;
	bool bLocal_277 = false;
	bool bLocal_278 = false;
	bool bLocal_279 = false;
	var uLocal_280 = 2;
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
	int iLocal_321 = 0;
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
	var uLocal_343 = 1;
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
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_274 = 0;
	Local_275 = { StackVal, ScriptParam_0 };
	SET_DUST_LEVEL(2);
	Function_91(ScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	Function_90("Initializing Gaptooth Ridge", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_277 = 1000;
		switch (iLocal_274)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_274 = 1;
				}
				bLocal_277 = false;
				break;
			
			case 0x00000001:
				if (Function_89())
				{
					iLocal_274 = 2;
				}
				bLocal_277 = false;
				break;
			
			case 0x00000002:
				if (Function_80())
				{
					Function_79(&(Global_29008[Local_275]), 32);
					Function_75(Local_0);
					iLocal_274 = 3;
				}
				bLocal_277 = false;
				break;
			
			case 0x00000003:
				bLocal_278 = LAUNCH_NEW_SCRIPT_WITH_ARGS("GaptoothRidgeVol", &Local_275, 2, 0);
				Function_74(&Global_6532, &Global_7536, ScriptParam_0);
				iLocal_274 = 5;
				bLocal_277 = false;
				break;
			
			case 0x00000005:
				if (Function_73(&Global_6532, &Global_7536, ScriptParam_0))
				{
					iLocal_274 = 4;
					bLocal_277 = false;
				}
				else
				{
					bLocal_277 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_72(&(Global_29008[Local_275]), 16))
				{
					iLocal_274 = 6;
				}
				bLocal_277 = false;
				break;
			
			case 0x00000006:
				Function_67(&Global_6532, &Global_7536, &uLocal_280, Global_6288, ScriptParam_0);
				Function_79(&(Global_29008[Local_275]), 8);
				if (Function_72(&(Global_29008[ScriptParam_0]), 131072))
				{
					Function_66(&(Global_29008[ScriptParam_0]), 131072);
					iLocal_274 = 10;
				}
				else
				{
					iLocal_274 = 7;
				}
				bLocal_277 = false;
				break;
			
			case 0x00000007:
				Function_57(ScriptParam_0);
				Function_56(64);
				iLocal_274 = 8;
				bLocal_277 = false;
				break;
			
			case 0x00000008:
				Function_55(0, Global_30640[0], -2080,289f, 16,962f, 2603,609f);
				if (!Function_54(&Global_30658))
				{
					Function_50(StackVal, 2, 0,5f, 0, Local_0, !Function_54(&Global_30658));
					Function_46(0, 8, 4, 0, 2);
					Function_56(64);
				}
				Function_79(&(Global_29008[Local_275]), 512);
				iLocal_274 = 9;
				bLocal_277 = false;
				break;
			
			case 0x00000009:
				if (!Function_54(&Global_30658))
				{
					Function_44(Local_0, ScriptParam_0);
				}
				Global_29004 = 0;
				Function_79(&(Global_29008[Local_275]), 4);
				Function_43("Finished Initializing Gaptooth Ridge", 5.0f);
				iLocal_274 = 10;
				bLocal_277 = false;
				break;
			
			case 0x0000000A:
				if (!Function_54(&Global_30658))
				{
					if (iLocal_321)
					{
						iLocal_321 = 0;
						iLocal_274 = 8;
						bLocal_277 = false;
					}
				}
				else
				{
					iLocal_321 = 1;
				}
				Function_30(&(Global_26282[44]), "TWG", 18, Local_0, 4);
				if (Function_22(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_279))
					{
						bLocal_279 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_322, 51, 0);
					}
				}
				if (Function_72(&(Global_29008[ScriptParam_0]), 131072))
				{
					iLocal_274 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_277);
	}
	Function_21(ScriptParam_0);
	Function_11(&Global_6532, &Global_7536, ScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(ScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_56(64);
	Function_66(&(Global_29008[Local_275]), 32);
	Function_66(&(Global_29008[Local_275]), 64);
	Function_66(&(Global_29008[Local_275]), 8);
	Function_66(&(Global_29008[Local_275]), 512);
	Function_66(&(Global_29008[Local_275]), 4);
	if (IS_SCRIPT_VALID(bLocal_278))
	{
		TERMINATE_SCRIPT(bLocal_278);
	}
	Function_43("Unloaded Gaptooth Ridge", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x3D7 / 983
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

void Function_2(int iParam0) //Position: 0x40D / 1037
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x42F / 1071
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x445 / 1093
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x45B / 1115
{
	Function_6(&Local_8 + 4);
	RELEASE_LAYOUT_REF(Local_8);
	return;
}

void Function_6(int iParam0) //Position: 0x46D / 1133
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

void Function_7(var uParam0, int iParam1) //Position: 0x493 / 1171
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

void Function_8(var uParam0, int iParam1) //Position: 0x5C1 / 1473
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x5DB / 1499
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x5F8 / 1528
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x603 / 1539
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
	if (Function_72(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_66(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_72(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_72(&(Global_29008[iParam2]), 256))
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
			Function_79(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7EE / 2030
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

int Function_13(int iParam0) //Position: 0x93D / 2365
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

int Function_14(int iParam0) //Position: 0x968 / 2408
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

void Function_15(var uParam0, int iParam1) //Position: 0x99C / 2460
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0x9AB / 2475
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0x9C7 / 2503
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0x9DE / 2526
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x9FA / 2554
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

bool Function_20() //Position: 0xEA8 / 3752
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0xEB1 / 3761
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

bool Function_22(int iParam0) //Position: 0xF1C / 3868
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

bool Function_23(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xF9F / 3999
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

bool Function_24(int iParam0) //Position: 0x1043 / 4163
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_25(int iParam0) //Position: 0x105E / 4190
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

bool Function_26(bool bParam0) //Position: 0x1112 / 4370
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_72(&(Global_29008[bParam0]), 2048);
}

bool Function_27() //Position: 0x1130 / 4400
{
	return Function_28(StackVal, 1);
}

int Function_28(var uParam0, bool bParam1) //Position: 0x113F / 4415
{
	return (uParam0 && bParam1) == 0;
}

var Function_29() //Position: 0x114C / 4428
{
	return StackVal;
}

void Function_30(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1157 / 4439
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
				Function_41(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 250.0f)
			{
				Function_41(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_40(iParam0, 63))
			{
				if (Function_39(76) || Function_38(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_36(cParam1, iParam0, 3, bParam3);
						Function_33(iParam0, 63);
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
			Function_32();
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
			Function_31();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_40(iParam0, 63))
		{
			if (Function_39(76) || Function_38(76))
			{
				Function_36(cParam1, iParam0, 3, bParam3);
				Function_33(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_36(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_31() //Position: 0x1352 / 4946
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_33(&(Global_26282[34]), bVar0);
		bVar0++;
	}
	return;
}

void Function_32() //Position: 0x1399 / 5017
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_33(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_33(int iParam0, bool bParam1) //Position: 0x13EB / 5099
{
	if (bParam1 <= 32)
	{
		Function_34(iParam0, Function_35(bParam1));
	}
	else
	{
		Function_34(iParam0 + 4, Function_35((bParam1 - 32)));
	}
	return;
}

void Function_34(var uParam0, bool bParam1) //Position: 0x1414 / 5140
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_35(bool bParam0) //Position: 0x1423 / 5155
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_36(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x142F / 5167
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
		if (bVar5 != 0 || Function_40(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_37(), &cVar1, bParam2, bVar5, 4278716679);
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

var Function_37() //Position: 0x14CF / 5327
{
	int iVar0;
	
	return iVar0;
}

int Function_38(int iParam0) //Position: 0x14D7 / 5335
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_39(int iParam0) //Position: 0x14EC / 5356
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_40(int iParam0, bool bParam1) //Position: 0x1501 / 5377
{
	if (bParam1 <= 32)
	{
		return Function_28(*iParam0, Function_35(bParam1));
	}
	return Function_28(StackVal, Function_35((bParam1 - 32)));
}

void Function_41(int iParam0) //Position: 0x152C / 5420
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_42(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_42(bool bParam0) //Position: 0x1558 / 5464
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

void Function_43(bool bParam0, float fParam1) //Position: 0x159D / 5533
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x15DB / 5595
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
		Function_45(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x16D5 / 5845
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x16E2 / 5858
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
		Function_47();
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

void Function_47() //Position: 0x17C6 / 6086
{
	int iVar0;
	
	Global_26960 = Function_48(StackVal);
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

int Function_48(bool bParam0) //Position: 0x1814 / 6164
{
	if (!Function_49(bParam0))
	{
		return 0;
	}
	return Global_26401[bParam0];
}

bool Function_49(bool bParam0) //Position: 0x182C / 6188
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1841 / 6209
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
		Function_53();
	}
	if (bParam5)
	{
		Function_51(1048576);
	}
}

void Function_51(int iParam0) //Position: 0x1954 / 6484
{
	Function_52(&Global_28842, iParam0);
	return;
}

void Function_52(var uParam0, var uParam1) //Position: 0x1962 / 6498
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_53() //Position: 0x197D / 6525
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_51(16384);
	}
	return;
}

bool Function_54(int iParam0) //Position: 0x1999 / 6553
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

void Function_55(int iParam0, var uParam1, vector3 vParam2) //Position: 0x19E6 / 6630
{
	if (!Function_49(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

void Function_56(int iParam0) //Position: 0x1A48 / 6728
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_57(int iParam0) //Position: 0x1A5B / 6747
{
	Function_62(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_61(&Global_17483[1875] + 120, 1, 5.0f, 1, 640);
	Function_60(&Global_17483[1875] + 120, 5.0f);
	Function_59(&Global_17483[575] + 120, 19,9f, 0,7f);
	Function_58(&Global_17483[575] + 120, -4.0f, 2);
	return;
}

void Function_58(int iParam0, var uParam1, int iParam2) //Position: 0x1AF0 / 6896
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_59(int iParam0, var uParam1, int iParam2) //Position: 0x1B06 / 6918
{
	(iParam0 + 60)->f_44 = uParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_60(int iParam0, int iParam1) //Position: 0x1B1C / 6940
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1B2A / 6954
{
	iParam0->f_60 = uParam1;
	(iParam0 + 60)->f_4 = uParam2;
	(iParam0 + 60)->f_8 = uParam3;
	(iParam0 + 60)->f_16 = uParam4;
}

void Function_62(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x1B50 / 6992
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_63(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_63(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1B92 / 7058
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
					bVar2 = Function_65(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_64(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_65(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_64(int iParam0, int iParam1) //Position: 0x1F22 / 7970
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_65(int iParam0) //Position: 0x1F43 / 8003
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_66(var uParam0, int iParam1) //Position: 0x1F59 / 8025
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_67(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1F70 / 8048
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_72(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_68(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_66(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_79(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2022 / 8226
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_72(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_71(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_70(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_69(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_69(bool bParam0, int iParam1) //Position: 0x218D / 8589
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_70(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_70(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_70(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_70(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_70(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_70(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_70(vector3 vParam0) //Position: 0x22C9 / 8905
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_71(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x22E1 / 8929
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

bool Function_72(var uParam0, int iParam1) //Position: 0x23FA / 9210
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_73(var uParam0, var uParam1, int iParam2) //Position: 0x2416 / 9238
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
	if (Function_72(&(Global_29008[iParam2]), 0x40000000))
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

void Function_74(var uParam0, var uParam1, int iParam2) //Position: 0x24E2 / 9442
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
	if (!Function_72(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_79(&(Global_29008[iParam2]), 0x40000000);
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

int Function_75(bool bParam0) //Position: 0x25B8 / 9656
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
			bVar11 = (Function_77() && !Function_76(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_77()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
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

bool Function_76(bool bParam0, bool bParam1) //Position: 0x2701 / 9985
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_77() //Position: 0x2721 / 10017
{
	if (Function_20())
	{
		return (Function_78() != 1 || Function_78() != 0);
	}
	return 0;
}

int Function_78() //Position: 0x273A / 10042
{
	return Global_79349.f_16;
}

void Function_79(var uParam0, int iParam1) //Position: 0x2746 / 10054
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_80() //Position: 0x2755 / 10069
{
	bool bVar0;
	
	Function_88(3, 3);
	bVar0 = bVar0;
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_86(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_3", 1, 0);
	if (!Function_81(&Local_8 + 4))
	{
		return 0;
	}
	Local_8 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(Local_8))
	{
		Local_8 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	Local_8.f_380 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint", -4349,063f, 25,66054f, 2755,295f, 0.0f, 0.0f, 0.0f);
	Local_8.f_384 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint1", -4314,583f, 5,097f, 3743,292f, 0.0f, 0.0f, 0.0f);
	Local_8.f_388 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint2", -3512.0f, 13,42503f, 3144.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_392 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint3", -4013,675f, 21,468f, 2399,785f, 0.0f, 73,49f, 0.0f);
	Local_8.f_396 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint4", -3434,18f, 23,592f, 2499,154f, 0.0f, 0.0f, 0.0f);
	Local_8.f_400 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint5", -4018,102f, 21,094f, 2395,404f, 0.0f, 5,037f, 0.0f);
	Local_8.f_404 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint6", -4019,233f, 21,468f, 2398,425f, 0.0f, 215,465f, 0.0f);
	Local_8.f_408 = CREATE_POINT_IN_LAYOUT(Local_8, "gtrf_bhint8", -4016,299f, 21,468f, 2398,219f, 0.0f, 219,242f, 0.0f);
	Local_8.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire30", "Campfire02", -4316.0f, 8,03138f, 3512.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire29", "Campfire03", -3396f, 33,12941f, 2868f, 0.0f, 0.0f, 0.0f);
	Local_8.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire26", "Campfire01", -3810,477f, 42,66663f, 3001,018f, 0.0f, 0.0f, 0.0f);
	Local_8.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire25", "Campfire02", -3831,993f, 11,16853f, 3182,332f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_424, "MP_ONLY", true);
	Local_8.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire24", "Campfire03", -4090,07f, 30,11763f, 2754,07f, 0.0f, -15,18934f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sil_stand_guntricks_e_any", "stand_guntricks_e_any", -4012,576f, 21,031f, 2390,771f, 0.0f, -161,3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", -3554,44f, 15,6855f, 3158,265f, 0.0f, 209,569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_432), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_rand_idle_stand3", "stand_lookdistance_w_any", -3552,909f, 15,63719f, 3157,377f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_rand_idle_stand2", "rand_idle_stand", -3555,438f, 15,60915f, 3159,332f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", -3543,762f, 15,3694f, 3162,819f, 0.0f, -210,2364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", -3545,373f, 15,49567f, 3162,648f, 0.0f, 34,25905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_436), 0);
	Local_8.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", -3544,541f, 15,49885f, 3161,289f, 0.0f, 71,79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_440), 0);
	Local_8.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_look_distance_binocs2", "look_distance_binocs", -3545,451f, 15,64982f, 3159,776f, 0.0f, 138,5309f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_horse_tend1", "horse_tend", -3495,967f, 19,65504f, 3136,116f, 0.0f, -91,20521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", -3437,098f, 23,592f, 2502,806f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_smoking_stand", "smoking_stand", -3436,582f, 23,592f, 2501,046f, 0.0f, 128,5334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_sleeping_wall", "sleeping_wall_scripted", -3447,271f, 23,09f, 2499,005f, 0.0f, -71,2832f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_stand_guntricks1", "stand_guntricks_e_any", -3437,837f, 23,592f, 2492,929f, 0.0f, -182,7671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_stand_guntricks2", "stand_guntricks_e_any", -3437,837f, 23,592f, 2494,971f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", -3434,18f, 23,592f, 2495,733f, 0.0f, 102,2661f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_look_distance_b", "look_distance_binocs", -3404,325f, 23,462f, 2509,804f, 0.0f, -132,933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_look_distance_b1", "look_distance_binocs", -3428,11f, 24,024f, 2508,341f, 0.0f, -218,5979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_Pee", "Pee", -3433,225f, 23,594f, 2505,034f, 0.0f, 35,20251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_horse_stay", "horse_stay", -3429,818f, 23,89949f, 2495,733f, 0.0f, -80,89567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_horse_stay1", "horse_stay", -3430,55f, 24,05026f, 2493,8f, 0.0f, -80,89567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_horse_stay2", "horse_stay", -3427,528f, 24,09412f, 2497,654f, 0.0f, -80,89567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Ham_horse_tend", "horse_tend", -3431,699f, 24,01186f, 2488,961f, 0.0f, -240,6283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_horse_tend", "horse_tend", -3499,674f, 16,25382f, 3147,382f, 0.0f, 21,67242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_horse_stay2", "horse_stay", -3497,875f, 16,7437f, 3146,125f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_horse_stay1", "horse_stay", -3496f, 17,07369f, 3146,051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_horse_stay", "horse_stay", -3494,914f, 17,262f, 3150,906f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_look_distance_binocs1", "look_distance_binocs", -3516,268f, 15,515f, 3124,192f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_Pee", "Pee", -3492,114f, 19,66672f, 3136,246f, 0.0f, -26,90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_rand_idle_stand1", "rand_idle_stand", -3520,276f, 11,12099f, 3146,674f, 0.0f, 78,99949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_rand_idle_stand", "rand_idle_stand", -3509,928f, 13,78963f, 3146,481f, 0.0f, -82,29346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", -3511,514f, 13,83953f, 3143,129f, 0.0f, -161,3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", -3497,143f, 17,32072f, 3150,853f, 0.0f, -105,2133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_lean_rail", "look_distance_binocs", -3520,693f, 15,672f, 3127,985f, 0.0f, 37,36112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", -3516,66f, 15,74677f, 3134,089f, 0.0f, 41,5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_look_distance_binocs", "look_distance_binocs", -3503,269f, 15,4507f, 3126,436f, 0.0f, -47,4214f, 0.0f);
	Local_8.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", -3507,42f, 14,41f, 3147,197f, 0.0f, 71,79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_452), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sil_rand_idle_stand3", "rand_idle_stand", -4023,081f, 21,083f, 2397,041f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sil_rand_idle_stand2", "rand_idle_stand", -4020,073f, 21,237f, 2393,398f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sil_rand_idle_stand1", "rand_idle_stand", -4016,466f, 21,146f, 2392,174f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sil_rand_idle_stand", "rand_idle_stand", -4018,865f, 21,126f, 2394,072f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_smoking_stand2", "smoking_stand", -4012,661f, 21,083f, 2394,79f, 0.0f, -145,0029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sil_Pee", "Pee", -4023,667f, 21,581f, 2384,949f, 0.0f, -26,90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_stand_lookdistance2", "stand_lookdistance_w_any", -4030,676f, 20,114f, 2430,51f, 0.0f, -163,9767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_stand_lookdistance1", "stand_lookdistance_w_any", -3989,216f, 21,083f, 2403,324f, 0.0f, 196,0233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_stand_lookdistance", "stand_lookdistance_w_any", -4006,974f, 20,809f, 2415,464f, 0.0f, -163,9767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Srtch_tand1", "rand_idle_stand", -4021,151f, 20,963f, 2406,973f, 0.0f, 19,92132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_smoking_stand1", "smoking_stand", -4023,764f, 21,029f, 2404,943f, 0.0f, -145,0029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_horse_tend1", "horse_tend", -4008,54f, 21,08242f, 2403,371f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_horse_stay1", "horse_stay", -4011,225f, 21,08242f, 2403,748f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_horse_stay", "horse_stay", -4018,831f, 20,98951f, 2406,15f, 0.0f, -343,0331f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_horse_tend", "horse_tend", -4017,555f, 21,00073f, 2405,466f, 0.0f, -162,3719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_smoking_stand", "smoking_stand", -4016,168f, 21,46727f, 2403,016f, 0.0f, -145,0029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_NearWall", "Rand_Idle_NearWall", -4018,77f, 21,08617f, 2403,276f, 0.0f, -154,2826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_lean_rail", "nlean_rail", -4022,136f, 21,09104f, 2395,346f, 0.0f, 111,8315f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_look_out_window_L", "look_out_window_L", -4017,984f, 21,53371f, 2401,449f, 0.0f, -162,0249f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_Campfire_Tend", "Sit_Ground_Campfire_Tend", -4018,937f, 21,468f, 2399,804f, 0.0f, 109,2064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Sil_lie_sleep", "lie_sleep_on_bed_l", -4014,51f, 21,46768f, 2397,119f, 0.0f, 17,92818f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire23", "Campfire04", -4057,467f, 20,57743f, 2423,884f, 0.0f, 0.0f, 0.0f);
	Local_8.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire22", "Campfire05", -3716f, 22,08629f, 2432.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire21", "Campfire01", -4153,488f, 29,90032f, 2734,569f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_sleeping_wall_scripted", "sleeping_wall_scripted", -4344,907f, 25,66f, 2754,942f, 0.0f, 92,61431f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_sleeping_scripted1", "sleeping_scripted", -4352,348f, 25,73698f, 2756,987f, 0.0f, 152,4998f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_sleeping_scripted", "sleeping_scripted", -4346,533f, 25,72214f, 2760,332f, 0.0f, 266,5974f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_horse_stay4", "horse_stay", -4327,33f, 22,86164f, 2739,777f, 0.0f, 359,664f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_stand_lookdistance1", "stand_lookdistance_w_any", -4323,297f, 25,25694f, 2767,16f, 0.0f, 164,4313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_horse_stay3", "horse_stay", -4332,893f, 23,56775f, 2744,058f, 0.0f, 220,287f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_horse_stay1", "horse_stay", -4334,617f, 23,76846f, 2744,07f, 0.0f, 214,233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "scrg_smoking_stand", "smoking_stand", -4315,55f, 5,001161f, 3736,073f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "scrg_horse_stay", "horse_stay", -4304,485f, 5,33743f, 3740,595f, 0.0f, 91,16744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "scrg_horse_stay1", "horse_stay", -4304,792f, 5,033688f, 3742,499f, 0.0f, 93,17829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "scrg_horse_stay2", "horse_stay", -4304,333f, 4,743784f, 3753,198f, 0.0f, 58,93742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "scrg_horse_stay3", "horse_stay", -4305,479f, 4,682098f, 3754,989f, 0.0f, 44,86414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_8, "scrg_horse_stay4", "horse_stay", -4307,521f, 4,700052f, 3756,242f, 0.0f, 28,09162f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_468), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Srtch_tand", "rand_idle_stand", -4313,591f, 5,043624f, 3731,379f, 0.0f, 19,92132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Srtch_stand_lookdistance", "stand_lookdistance_w_any", -4313,458f, 4,998623f, 3757,347f, 0.0f, -159,4057f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "nSrtch_Pee", "Pee", -4302,91f, 4,6f, 3746,519f, 0.0f, -60,70978f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Srtch_horse_tend", "horse_tend", -4291,733f, 4,015f, 3725,523f, 0.0f, -30,20316f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Srtch_leantalking", "lean_fence_H_talking", -4319,066f, 4,969989f, 3738,232f, 0.0f, -87,61311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Srtch_stand_guntrick", "stand_guntricks_e_any", -4312,03f, 5,001168f, 3748,336f, 0.0f, -164,7508f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_stand_guntricks", "stand_guntricks_e_any", -4346,817f, 25,65767f, 2757,716f, 0.0f, -197,8129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_look_distance_2", "look_distance_binocs", -4292.0f, 26,16155f, 2740f, 0.0f, -55,24271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_look_distance_1", "look_distance_binocs", -4312,805f, 26,48f, 2781,945f, 0.0f, -163,8071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_horse_stay", "horse_stay", -4348,085f, 25,66132f, 2751,858f, 0.0f, -58,94202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_horse_tend", "horse_tend", -4348,798f, 25,73481f, 2750,844f, 0.0f, 126,0001f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_Pee", "Pee", -4324,907f, 23,21055f, 2741,697f, 0.0f, -67,74636f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_stand_rowdydrink", "stand_dnd_rowdydrink", -4345,435f, 25,648f, 2762,341f, 0.0f, 52,18678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_smoking_stand1", "smoking_stand", -4345,533f, 25,66132f, 2752,487f, 0.0f, -30,65489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -4351,443f, 25,66132f, 2760,146f, 0.0f, -48,31028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_look_distance_binocs", "look_distance_binocs", -4340,744f, 27,61138f, 2753,304f, 0.0f, -57,35819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_campfire_talk", "campfire_talk", -4348,996f, 25,66f, 2757,668f, 0.0f, -21,34858f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Cuev_smoking_stand", "smoking_stand", -4345,924f, 25,656f, 2759,327f, 0.0f, 81,03186f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire20", "Campfire02", -4276.0f, 12,047f, 2900f, 0.0f, 0.0f, 0.0f);
	Local_8.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire19", "Campfire04", -4328.0f, 32,17341f, 3064f, 0.0f, 0.0f, 0.0f);
	Local_8.f_480 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire18", "Campfire05", -4536.0f, 30,091f, 3016f, 0.0f, 0.0f, 0.0f);
	Local_8.f_484 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire16", "Campfire02", -4260.0f, 7,027458f, 3572.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_484, "MP_ONLY", true);
	Local_8.f_488 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire15", "Campfire03", -4255,67f, 3,01177f, 3761,939f, 0.0f, 0.0f, 0.0f);
	Local_8.f_492 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire14", "Campfire04", -4504.0f, 3,150441f, 3736f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_492, "MP_ONLY", true);
	Local_8.f_496 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire13", "Campfire05", -4560,422f, 29,20336f, 3058,014f, 0.0f, 0.0f, 0.0f);
	Local_8.f_500 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire12", "Campfire01", -4489,798f, 32,71708f, 3066,173f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_500, "MP_ONLY", true);
	Local_8.f_504 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire11", "Campfire02", -4430,458f, 25,59995f, 2953,446f, 0.0f, 0.0f, 0.0f);
	Local_8.f_508 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire9", "Campfire05", -4424.0f, 7,027458f, 3428.0f, 0.0f, 20,57529f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_508, "MP_ONLY", true);
	Local_8.f_512 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire8", "Campfire01", -3896f, 29,11374f, 2468.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire7", "Campfire02", -4020f, 21,08232f, 2576.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_516, "MP_ONLY", true);
	Local_8.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire6", "Campfire03", -4188.0f, 16,56464f, 2912f, 0.0f, 0.0f, 0.0f);
	Local_8.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire5", "Campfire04", -3968.0f, 9,035286f, 3240f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_524, "MP_ONLY", true);
	Local_8.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire3", "Campfire03", -3748f, 38,65096f, 2896f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_528, "MP_ONLY", true);
	Local_8.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire2", "Campfire04", -3804f, 40,65882f, 2796f, 0.0f, 0.0f, 0.0f);
	Local_8.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_8, "gtr_CampFire1", "Campfire05", -3857,285f, 44,73392f, 2706,642f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_536, "MP_ONLY", true);
	Local_8.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_8, "silg_treasure_scrap", "Locked_Footlocker", -4016,413f, 21,46768f, 2396,955f, 0.0f, 109,0013f, 0.0f);
	DECOR_SET_BOOL(Local_8.f_540, "scrap", true);
	Local_8.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage", "Player_Herb_DesertSage", -3952.0f, 9,047268f, 3836f, 0.0f, 0.0f, 0.0f);
	Local_8.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", -4072.0f, 7,008393f, 3804,831f, 0.0f, 0.0f, 0.0f);
	Local_8.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -4036.0f, 8,031368f, 3740f, 0.0f, 0.0f, 0.0f);
	Local_8.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -3884.0f, 9,035286f, 3588f, 0.0f, 0.0f, 0.0f);
	Local_8.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -3708.0f, 20,00255f, 3722,527f, 0.0f, 0.0f, 0.0f);
	Local_8.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -3774,253f, 17,56825f, 3780.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -3709,885f, 23,09019f, 3576.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -3604f, 33,12941f, 3410,084f, 0.0f, 0.0f, 0.0f);
	Local_8.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -3534,479f, 34,13447f, 3535,625f, 0.0f, 0.0f, 0.0f);
	Local_8.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", -3564f, 35,14058f, 3470,161f, 0.0f, 0.0f, 0.0f);
	Local_8.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", -3658,068f, 16,06274f, 3401,932f, 0.0f, 0.0f, 0.0f);
	Local_8.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", -3489,141f, 36,14825f, 3432,11f, 0.0f, 0.0f, 0.0f);
	Local_8.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", -3481,672f, 36,44746f, 3318,328f, 0.0f, 0.0f, 0.0f);
	Local_8.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", -3397,868f, 38,14902f, 3376f, 0.0f, 0.0f, 0.0f);
	Local_8.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", -3532f, 38,14902f, 3486,979f, 0.0f, 0.0f, 0.0f);
	Local_8.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", -3314,075f, 44,86954f, 3468f, 0.0f, 0.0f, 0.0f);
	Local_8.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", -3246,021f, 49,19217f, 3461,98f, 0.0f, 0.0f, 0.0f);
	Local_8.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", -3172,93f, 40,41358f, 3368,436f, 0.0f, 0.0f, 0.0f);
	Local_8.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", -4268.0f, 3,129975f, 3764.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", -4255,395f, 4,015678f, 3666,991f, 0.0f, 0.0f, 0.0f);
	Local_8.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", -4400.0f, 7,02992f, 3546,233f, 0.0f, 0.0f, 0.0f);
	Local_8.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", -4235,268f, 6,018927f, 3604,036f, 0.0f, 0.0f, 0.0f);
	Local_8.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", -4100.0f, 8,031364f, 3652.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", -4007,208f, 9,035286f, 3678,818f, 0.0f, 0.0f, 0.0f);
	Local_8.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", -3975,274f, 9,035286f, 3607,208f, 0.0f, 0.0f, 0.0f);
	Local_8.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", -4076.0f, 8,031368f, 3505,56f, 0.0f, 0.0f, 0.0f);
	Local_8.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", -4256.0f, 12,04707f, 3472.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", -4404.0f, 7,027458f, 3476.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", -4471,791f, 6,023648f, 3568,106f, 0.0f, 0.0f, 0.0f);
	Local_8.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage30", "Player_Herb_DesertSage", -4764.0f, 3,011771f, 3825,594f, 0.0f, 0.0f, 0.0f);
	Local_8.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage31", "Player_Herb_DesertSage", -4809,424f, 3,011765f, 3524,559f, 0.0f, 0.0f, 0.0f);
	Local_8.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage32", "Player_Herb_DesertSage", -4908.0f, 3,994267f, 3520.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage33", "Player_Herb_DesertSage", -4516.0f, 11,04314f, 3336.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage34", "Player_Herb_DesertSage", -4269,605f, 7,027458f, 3334,644f, 0.0f, 0.0f, 0.0f);
	Local_8.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage35", "Player_Herb_DesertSage", -4164.0f, 9,035301f, 3396.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage36", "Player_Herb_DesertSage", -4292,033f, 7,027458f, 3386,503f, 0.0f, 0.0f, 0.0f);
	Local_8.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage37", "Player_Herb_DesertSage", -4226,439f, 7,027458f, 3298,602f, 0.0f, 0.0f, 0.0f);
	Local_8.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage38", "Player_Herb_DesertSage", -4437,59f, 8,505199f, 3274,462f, 0.0f, 0.0f, 0.0f);
	Local_8.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage39", "Player_Herb_DesertSage", -4491,802f, 9,035066f, 3220,199f, 0.0f, 0.0f, 0.0f);
	Local_8.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage40", "Player_Herb_DesertSage", -4556,113f, 16,06275f, 3168.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage41", "Player_Herb_DesertSage", -4565,822f, 29,76156f, 3043,362f, 0.0f, 0.0f, 0.0f);
	Local_8.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage42", "Player_Herb_DesertSage", -4420,134f, 34,06581f, 3067,813f, 0.0f, 0.0f, 0.0f);
	Local_8.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage43", "Player_Herb_DesertSage", -4294,341f, 36,14112f, 3008f, 0.0f, 0.0f, 0.0f);
	Local_8.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage44", "Player_Herb_DesertSage", -4414,286f, 25,59914f, 2990,792f, 0.0f, 0.0f, 0.0f);
	Local_8.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage45", "Player_Herb_DesertSage", -4403,191f, 22,08621f, 2910,951f, 0.0f, 0.0f, 0.0f);
	Local_8.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage46", "Player_Herb_DesertSage", -4382,816f, 22,0862f, 2910,604f, 0.0f, 0.0f, 0.0f);
	Local_8.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage47", "Player_Herb_DesertSage", -4060.0f, 8,031368f, 3264f, 0.0f, 0.0f, 0.0f);
	Local_8.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage48", "Player_Herb_DesertSage", -4100.0f, 11,04314f, 3196.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage49", "Player_Herb_DesertSage", -3948.0f, 14,38007f, 3142,053f, 0.0f, 0.0f, 0.0f);
	Local_8.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage50", "Player_Herb_DesertSage", -4090,483f, 32,12549f, 3059,999f, 0.0f, 0.0f, 0.0f);
	Local_8.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage51", "Player_Herb_DesertSage", -3848f, 43,16864f, 3012f, 0.0f, 0.0f, 0.0f);
	Local_8.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage52", "Player_Herb_DesertSage", -3713,901f, 39,15966f, 3045,659f, 0.0f, 0.0f, 0.0f);
	Local_8.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage53", "Player_Herb_DesertSage", -3778,651f, 38,40936f, 3011,134f, 0.0f, 0.0f, 0.0f);
	Local_8.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage54", "Player_Herb_DesertSage", -3771,132f, 24,91142f, 2916,551f, 0.0f, 0.0f, 0.0f);
	Local_8.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage55", "Player_Herb_DesertSage", -3741,274f, 39,65488f, 2852f, 0.0f, 0.0f, 0.0f);
	Local_8.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage56", "Player_Herb_DesertSage", -3850,146f, 41,66276f, 2818,583f, 0.0f, 0.0f, 0.0f);
	Local_8.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage57", "Player_Herb_DesertSage", -3787,081f, 39,6091f, 2748f, 0.0f, 0.0f, 0.0f);
	Local_8.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage58", "Player_Herb_DesertSage", -3745,765f, 44,04614f, 2675,957f, 0.0f, 0.0f, 0.0f);
	Local_8.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage59", "Player_Herb_DesertSage", -3684,408f, 45,17479f, 2734,258f, 0.0f, 0.0f, 0.0f);
	Local_8.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage60", "Player_Herb_DesertSage", -3724f, 41,16078f, 2767,084f, 0.0f, 0.0f, 0.0f);
	Local_8.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage61", "Player_Herb_DesertSage", -3596,568f, 35,13754f, 2868f, 0.0f, 0.0f, 0.0f);
	Local_8.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage62", "Player_Herb_DesertSage", -3621,026f, 38,65096f, 2758,974f, 0.0f, 0.0f, 0.0f);
	Local_8.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage63", "Player_Herb_DesertSage", -3596,868f, 19,57643f, 2628,868f, 0.0f, 0.0f, 0.0f);
	Local_8.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage64", "Player_Herb_DesertSage", -3676f, 27,81974f, 2608.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage65", "Player_Herb_DesertSage", -3849,412f, 27,1059f, 2548.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage66", "Player_Herb_DesertSage", -3937,188f, 29,12008f, 2589,45f, 0.0f, 0.0f, 0.0f);
	Local_8.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage67", "Player_Herb_DesertSage", -4042,042f, 19,07454f, 2513,958f, 0.0f, 0.0f, 0.0f);
	Local_8.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage68", "Player_Herb_DesertSage", -3810,401f, 21,08241f, 2482,219f, 0.0f, 0.0f, 0.0f);
	Local_8.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage69", "Player_Herb_DesertSage", -3780f, 21,58438f, 2388.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage70", "Player_Herb_DesertSage", -3773,926f, 26,10201f, 2308.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage71", "Player_Herb_DesertSage", -3637,146f, 32,62749f, 2284.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage72", "Player_Herb_DesertSage", -3688f, 28,61178f, 2309,697f, 0.0f, 0.0f, 0.0f);
	Local_8.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage73", "Player_Herb_DesertSage", -4080f, 27,60781f, 2572.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage74", "Player_Herb_DesertSage", -4138,697f, 24,59602f, 2632f, 0.0f, 0.0f, 0.0f);
	Local_8.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage75", "Player_Herb_DesertSage", -4172,763f, 25,54855f, 2642,833f, 0.0f, 0.0f, 0.0f);
	Local_8.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage76", "Player_Herb_DesertSage", -4162,929f, 29,45779f, 2711,155f, 0.0f, 0.0f, 0.0f);
	Local_8.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage77", "Player_Herb_DesertSage", -3988,466f, 22,60344f, 2719,299f, 0.0f, 0.0f, 0.0f);
	Local_8.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage78", "Player_Herb_DesertSage", -4069,154f, 29,094f, 2756.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage79", "Player_Herb_DesertSage", -4200.0f, 15,52993f, 2867,578f, 0.0f, 0.0f, 0.0f);
	Local_8.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage80", "Player_Herb_DesertSage", -4187,933f, 18,57248f, 3024f, 0.0f, 0.0f, 0.0f);
	Local_8.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage81", "Player_Herb_DesertSage", -4176.0f, 7,027458f, 3252,478f, 0.0f, 0.0f, 0.0f);
	Local_8.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage82", "Player_Herb_DesertSage", -4512.0f, 10,9085f, 3268f, 0.0f, 0.0f, 0.0f);
	Local_8.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage83", "Player_Herb_DesertSage", -4308.0f, 30,76601f, 3056f, 0.0f, 0.0f, 0.0f);
	Local_8.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage84", "Player_Herb_DesertSage", -4650,549f, 41,28893f, 3426,549f, 0.0f, 0.0f, 0.0f);
	Local_8.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage85", "Player_Herb_DesertSage", -4288.0f, 6,023537f, 3584.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage86", "Player_Herb_DesertSage", -4064.0f, 8,031368f, 3436f, 0.0f, 0.0f, 0.0f);
	Local_8.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage87", "Player_Herb_DesertSage", -4128.0f, 7,027458f, 3297,254f, 0.0f, 0.0f, 0.0f);
	Local_8.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage88", "Player_Herb_DesertSage", -3880.0f, 11,77989f, 3804f, 0.0f, 0.0f, 0.0f);
	Local_8.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage90", "Player_Herb_DesertSage", -4522,118f, 3,104359f, 3733,303f, 0.0f, 0.0f, 0.0f);
	Local_8.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage91", "Player_Herb_DesertSage", -4269,966f, 5,025835f, 3629,378f, 0.0f, 0.0f, 0.0f);
	Local_8.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage92", "Player_Herb_DesertSage", -3568,036f, 35,13725f, 3505,278f, 0.0f, 0.0f, 0.0f);
	Local_8.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage93", "Player_Herb_DesertSage", -4092f, 34,69775f, 2891,08f, 0.0f, 0.0f, 0.0f);
	Local_8.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage94", "Player_Herb_DesertSage", -3856f, 40,15688f, 2912,489f, 0.0f, 0.0f, 0.0f);
	Local_8.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage95", "Player_Herb_DesertSage", -3432f, 10,54121f, 3020f, 0.0f, 0.0f, 0.0f);
	Local_8.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage96", "Player_Herb_DesertSage", -4351,688f, 31,55952f, 2960f, 0.0f, 0.0f, 0.0f);
	Local_8.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage98", "Player_Herb_DesertSage", -3636,967f, 24,09412f, 3748f, 0.0f, 0.0f, 0.0f);
	Local_8.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage99", "Player_Herb_DesertSage", -3712,517f, 27,10588f, 3876f, 0.0f, 0.0f, 0.0f);
	Local_8.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_DesertSage100", "Player_Herb_DesertSage", -3745,852f, 23,04988f, 4014,149f, 0.0f, 0.0f, 0.0f);
	Local_8.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage", "Player_Herb_RedSage", -3932.0f, 11,12991f, 3866,598f, 0.0f, 0.0f, 0.0f);
	Local_8.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage1", "Player_Herb_RedSage", -4108.0f, 7,027443f, 3752.0f, 0.0f, -47,3344f, 0.0f);
	Local_8.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage2", "Player_Herb_RedSage", -3823,903f, 8,950692f, 3773,063f, 0.0f, 0.0f, 0.0f);
	Local_8.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage4", "Player_Herb_RedSage", -3873,778f, 10,04307f, 3564,585f, 0.0f, 231,0161f, 0.0f);
	Local_8.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage5", "Player_Herb_RedSage", -3708.0f, 8,031372f, 3533,32f, 0.0f, 0.0f, 0.0f);
	Local_8.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage6", "Player_Herb_RedSage", -3753,52f, 8,031372f, 3378,48f, 0.0f, 0.0f, 0.0f);
	Local_8.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage7", "Player_Herb_RedSage", -3808.0f, 8,031368f, 3488,421f, 0.0f, 0.0f, 0.0f);
	Local_8.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage8", "Player_Herb_RedSage", -3836.0f, 8,031364f, 3339,555f, 0.0f, 0.0f, 0.0f);
	Local_8.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage9", "Player_Herb_RedSage", -3682,142f, 16,06274f, 3372,312f, 0.0f, 0.0f, 0.0f);
	Local_8.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage10", "Player_Herb_RedSage", -3716.0f, 8,031372f, 3392f, 0.0f, 0.0f, 0.0f);
	Local_8.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage11", "Player_Herb_RedSage", -3836.0f, 8,031372f, 3328f, 0.0f, 0.0f, 0.0f);
	Local_8.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage12", "Player_Herb_RedSage", -3920.0f, 9,242051f, 3296,819f, 0.0f, 0.0f, 0.0f);
	Local_8.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage13", "Player_Herb_RedSage", -4012f, 8,031368f, 3328f, 0.0f, 0.0f, 0.0f);
	Local_8.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_RedSage14", "Player_Herb_RedSage", -4088.0f, 9,030048f, 3476f, 0.0f, 0.0f, 0.0f);
	Local_8.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -3628f, 38,65094f, 2724.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -3632,644f, 22,96937f, 2600f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -3728f, 20,58045f, 2544.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -3869,212f, 42,72093f, 2827,31f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -3585,45f, 35,19801f, 2884f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -3601,879f, 44,77793f, 2964f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -3680f, 11,04314f, 3128f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -3628,368f, 13,02255f, 3189,57f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -3816,532f, 15,06214f, 3152.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", -4069,874f, 33,22112f, 3111,949f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -4076,621f, 33,12941f, 3030,53f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -4136,493f, 18,17956f, 3042,862f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -4019,553f, 25,34963f, 2737,871f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -3732.0f, 39,15295f, 2884.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -4058,721f, 8,031364f, 3232.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_8, "treasure_hunting_3", "treasure_hunting_3", -4091,036f, 33,90623f, 2932,154f, 0.0f, -25,38655f, 0.0f);
	Local_8.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Locked_Footlocker", "Locked_Footlocker", -4316,186f, 5,10062f, 3745,366f, 0.0f, -28,64388f, 0.0f);
	Local_8.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Locked_Footlocker1", "Locked_Footlocker", -4350,417f, 25,66132f, 2761,992f, 0.0f, -56,73796f, 0.0f);
	return 1;
}

bool Function_81(int iParam0) //Position: 0x7B6A / 31594
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_85();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_84(iParam0[iVar03], 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_84(iParam0[iVar03], 8);
		}
		Function_84(iParam0[iVar03], 16);
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
				Function_84(iParam0[iVar03], 1);
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
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
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
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_84(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_84(iParam0[iVar03], 2);
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x7EE5 / 32485
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

bool Function_83() //Position: 0x7F25 / 32549
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

void Function_84(var uParam0, int iParam1) //Position: 0x7F50 / 32592
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_85() //Position: 0x7F61 / 32609
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

var Function_86(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7FA3 / 32675
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_87(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_84(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_87(var uParam0, int iParam1, int iParam2) //Position: 0x7FDB / 32731
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_84(uParam0[iVar03], 4);
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

void Function_88(int iParam0, int iParam1) //Position: 0x80A0 / 32928
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

bool Function_89() //Position: 0x80E9 / 33001
{
	var uVar0;
	
	Function_88(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&Local_0 + 4) = { -3899,251f, 30,91323f, 2935,108f };
	*(&Local_0 + 4 + 12) = { 0.0f, 129,2136f, 0.0f };
	Local_0.f_28 = CREATE_POINT_IN_LAYOUT(Local_0, "gtrf_two_crows", -3899,251f, 30,91323f, 2935,108f, 0.0f, 129,2136f, 0.0f);
	return 1;
}

void Function_90(bool bParam0, int iParam1) //Position: 0x818E / 33166
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

void Function_91(int iParam0) //Position: 0x81C9 / 33225
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

