//Decompiled with MagicRDR v1.0
//Function Count : 74
//Statics Count : 350
//Natives Count : 114
//Parameters Count : 2

#region Local Var
	struct<17> Local_0 = { 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_303 = 0;
	bool bLocal_304 = false;
	bool bLocal_305 = false;
	var uLocal_306 = 2;
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
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	int iLocal_347 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_303 = 0;
	Function_73(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(0);
	Function_72("Initializing RioBravo", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_304 = 1000;
		switch (iLocal_303)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_303 = 1;
				}
				bLocal_304 = false;
				break;
			
			case 0x00000001:
				if (Function_71())
				{
					iLocal_303 = 2;
				}
				bLocal_304 = false;
				break;
			
			case 0x00000002:
				if (Function_62())
				{
					Function_61(&(Global_29008[iScriptParam_0]), 32);
					iLocal_303 = 3;
					Function_57(Local_0);
				}
				bLocal_304 = false;
				break;
			
			case 0x00000003:
				bLocal_305 = LAUNCH_NEW_SCRIPT_WITH_ARGS("RioBravoVol", &iScriptParam_0, 2, 0);
				Function_56(&Global_6704, &Global_7790, iScriptParam_0);
				iLocal_303 = 5;
				bLocal_304 = false;
				break;
			
			case 0x00000005:
				if (Function_55(&Global_6704, &Global_7790, iScriptParam_0))
				{
					iLocal_303 = 4;
					bLocal_304 = false;
				}
				else
				{
					bLocal_304 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_54(&(Global_29008[iScriptParam_0]), 16))
				{
					iLocal_303 = 6;
				}
				bLocal_304 = false;
				break;
			
			case 0x00000006:
				Function_52(0, &uLocal_306, Local_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_52(1, &uLocal_306, Local_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_46(&Global_6704, &Global_7790, &uLocal_306, Global_6289, iScriptParam_0);
				Function_61(&(Global_29008[iScriptParam_0]), 8);
				if (Function_54(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_45(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_303 = 10;
				}
				else
				{
					iLocal_303 = 7;
				}
				bLocal_304 = false;
				break;
			
			case 0x00000007:
				Function_36(iScriptParam_0);
				if (!Global_26003[0])
				{
					CREATE_OBSTACLE_IN_LAYOUT(Local_0, "Ramita_Baya", -2396,204f, 13,939f, 3881,411f, 0.0f, 20.0f, 0.0f, 30.0f, 20.0f, 80.0f);
				}
				if (!Global_26003[9])
				{
					CREATE_OBSTACLE_IN_LAYOUT(Local_0, "Frontera_Bridge", -3554,509f, 20,54f, 4149,415f, 0.0f, 31.0f, 0.0f, 30.0f, 40.0f, 100.0f);
				}
				Function_35(64);
				iLocal_303 = 8;
				bLocal_304 = false;
				break;
			
			case 0x00000008:
				Function_34(0, Global_30640[0], -2080,289f, 16,962f, 2603,609f);
				if (!Function_33(&Global_30679))
				{
					Function_29(StackVal, 1, 0,5f, 0, Local_0, !Function_33(&Global_30679));
					Function_25(0, 8, 4, 0, 2);
					Function_35(64);
				}
				Function_61(&(Global_29008[iScriptParam_0]), 512);
				iLocal_303 = 9;
				bLocal_304 = false;
				break;
			
			case 0x00000009:
				if (!Function_33(&Global_30679))
				{
					Function_23(Local_0, iScriptParam_0);
				}
				Global_29004 = 0;
				Function_61(&(Global_29008[iScriptParam_0]), 4);
				Function_22("Finished Initializing RioBravo", 5.0f);
				iLocal_303 = 10;
				bLocal_304 = false;
				break;
			
			case 0x0000000A:
				if (!Function_33(&Global_30679))
				{
					if (iLocal_347)
					{
						iLocal_347 = 0;
						iLocal_303 = 8;
						bLocal_304 = false;
					}
				}
				else
				{
					iLocal_347 = 1;
				}
				if (Function_54(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_303 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_304);
	}
	Function_21(iScriptParam_0);
	Function_11(&Global_6704, &Global_7790, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_35(64);
	Function_45(&(Global_29008[iScriptParam_0]), 32);
	Function_45(&(Global_29008[iScriptParam_0]), 64);
	Function_45(&(Global_29008[iScriptParam_0]), 8);
	Function_45(&(Global_29008[iScriptParam_0]), 512);
	Function_45(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_305))
	{
		TERMINATE_SCRIPT(bLocal_305);
	}
	Function_22("Unloaded RioBravo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x494 / 1172
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

void Function_2(int iParam0) //Position: 0x4CA / 1226
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x4EC / 1260
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x502 / 1282
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x518 / 1304
{
	Function_6(&Local_5 + 4);
	RELEASE_LAYOUT_REF(Local_5);
	return;
}

void Function_6(int iParam0) //Position: 0x52A / 1322
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

void Function_7(var uParam0, int iParam1) //Position: 0x550 / 1360
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

void Function_8(var uParam0, int iParam1) //Position: 0x67E / 1662
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x698 / 1688
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x6B5 / 1717
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6C0 / 1728
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
	if (Function_54(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_45(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_54(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_54(&(Global_29008[iParam2]), 256))
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
			Function_61(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8AB / 2219
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

int Function_13(int iParam0) //Position: 0x9FA / 2554
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

int Function_14(int iParam0) //Position: 0xA25 / 2597
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

void Function_15(var uParam0, int iParam1) //Position: 0xA59 / 2649
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xA68 / 2664
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xA84 / 2692
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xA9B / 2715
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xAB7 / 2743
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

bool Function_20() //Position: 0xF65 / 3941
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0xF6E / 3950
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

void Function_22(bool bParam0, float fParam1) //Position: 0xFD9 / 4057
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

void Function_23(bool bParam0, bool bParam1) //Position: 0x1017 / 4119
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
		Function_24(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x1111 / 4369
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_25(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x111E / 4382
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
		Function_26();
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

void Function_26() //Position: 0x1202 / 4610
{
	int iVar0;
	
	Global_26960 = Function_27(StackVal);
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

int Function_27(bool bParam0) //Position: 0x1250 / 4688
{
	if (!Function_28(bParam0))
	{
		return 0;
	}
	return Global_26401[bParam0];
}

bool Function_28(bool bParam0) //Position: 0x1268 / 4712
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_29(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x127D / 4733
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
		Function_32();
	}
	if (bParam5)
	{
		Function_30(1048576);
	}
}

void Function_30(int iParam0) //Position: 0x1390 / 5008
{
	Function_31(&Global_28842, iParam0);
	return;
}

void Function_31(var uParam0, var uParam1) //Position: 0x139E / 5022
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_32() //Position: 0x13B9 / 5049
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_30(16384);
	}
	return;
}

bool Function_33(int iParam0) //Position: 0x13D5 / 5077
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

void Function_34(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1422 / 5154
{
	if (!Function_28(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

void Function_35(int iParam0) //Position: 0x1484 / 5252
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_36(int iParam0) //Position: 0x1497 / 5271
{
	Function_41(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_40(&Global_17483[1875] + 120, 1, 5.0f, 1, 640);
	Function_39(&Global_17483[1875] + 120, 5.0f);
	Function_38(&Global_17483[575] + 120, 19,9f, 0,7f);
	Function_37(&Global_17483[575] + 120, -4.0f, 2);
	return;
}

void Function_37(int iParam0, var uParam1, int iParam2) //Position: 0x152C / 5420
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_38(int iParam0, var uParam1, int iParam2) //Position: 0x1542 / 5442
{
	(iParam0 + 60)->f_44 = uParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_39(int iParam0, int iParam1) //Position: 0x1558 / 5464
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_40(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1566 / 5478
{
	iParam0->f_60 = uParam1;
	(iParam0 + 60)->f_4 = uParam2;
	(iParam0 + 60)->f_8 = uParam3;
	(iParam0 + 60)->f_16 = uParam4;
}

void Function_41(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x158C / 5516
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_42(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_42(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x15CE / 5582
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
					bVar2 = Function_44(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_43(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_44(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_43(int iParam0, int iParam1) //Position: 0x195E / 6494
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_44(int iParam0) //Position: 0x197F / 6527
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_45(var uParam0, int iParam1) //Position: 0x1995 / 6549
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_46(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x19AC / 6572
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_54(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_47(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_45(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_61(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x1A5E / 6750
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_54(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_50(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_49(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_48(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_48(bool bParam0, int iParam1) //Position: 0x1BC9 / 7113
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_49(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_49(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_49(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_49(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_49(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_49(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_49(vector3 vParam0) //Position: 0x1D05 / 7429
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_50(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x1D1D / 7453
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

var Function_51() //Position: 0x1E36 / 7734
{
	float fVar0;
	
	return fVar0;
}

void Function_52(int iParam0, var uParam1, bool bParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, vector3 vParam18) //Position: 0x1E3E / 7742
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_53(StackVal, StackVal, vParam3, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam3);
		PRINTNL();
	}
	if (Function_53(StackVal, StackVal, vParam6, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam6);
		PRINTNL();
	}
	if (Function_53(StackVal, StackVal, vParam9, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam9);
		PRINTNL();
	}
	if (Function_53(StackVal, StackVal, vParam12, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam12);
		PRINTNL();
	}
	if (Function_53(StackVal, StackVal, vParam15, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam15);
		PRINTNL();
	}
	if (Function_53(StackVal, StackVal, vParam18, 0.0f, 0.0f, 0.0f))
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

bool Function_53(vector3 vParam0, vector3 vParam3) //Position: 0x20E5 / 8421
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_54(var uParam0, int iParam1) //Position: 0x2112 / 8466
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_55(var uParam0, var uParam1, int iParam2) //Position: 0x212E / 8494
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
	if (Function_54(&(Global_29008[iParam2]), 0x40000000))
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

void Function_56(var uParam0, var uParam1, int iParam2) //Position: 0x21FA / 8698
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
	if (!Function_54(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_61(&(Global_29008[iParam2]), 0x40000000);
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

int Function_57(bool bParam0) //Position: 0x22D0 / 8912
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
			bVar11 = (Function_59() && !Function_58(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_59()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
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

bool Function_58(bool bParam0, bool bParam1) //Position: 0x2419 / 9241
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_59() //Position: 0x2439 / 9273
{
	if (Function_20())
	{
		return (Function_60() != 1 || Function_60() != 0);
	}
	return 0;
}

int Function_60() //Position: 0x2452 / 9298
{
	return Global_79349.f_16;
}

void Function_61(var uParam0, int iParam1) //Position: 0x245E / 9310
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_62() //Position: 0x246D / 9325
{
	bool bVar0;
	
	Function_70(3, 3);
	bVar0 = bVar0;
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_68(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	if (!Function_63(&Local_5 + 4))
	{
		return 0;
	}
	Local_5 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(Local_5))
	{
		Local_5 = CREATE_LAYOUT("RioBravo_layout");
	}
	Local_5.f_440 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint", -3160f, 44,41193f, 3292f, 0.0f, 0.0f, 0.0f);
	Local_5.f_444 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint1", -3119,047f, 47,93179f, 3283,574f, 0.0f, 0.0f, 0.0f);
	Local_5.f_448 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint3", -2000.0f, 42,88177f, 3572.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_452 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint4", -3512f, 13,42503f, 3144.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_456 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint5", -1948,986f, 30,338f, 3468,504f, 0.0f, 0.0f, 0.0f);
	Local_5.f_460 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint6", -2400,747f, 9,362f, 3965,143f, 0.0f, 0.0f, 0.0f);
	Local_5.f_464 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint7", -2832,009f, 20,221f, 3076,099f, 0.0f, 0.0f, 0.0f);
	Local_5.f_468 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint8", -2830,891f, 20,21f, 3077,916f, 0.0f, 0.0f, 0.0f);
	Local_5.f_472 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint9", -2827,172f, 20,218f, 3076,897f, 0.0f, 0.0f, 0.0f);
	Local_5.f_476 = CREATE_POINT_IN_LAYOUT(Local_5, "riof_bhint10", -3125,57f, 52,958f, 3331,625f, 0.0f, 328,684f, 0.0f);
	Local_5.f_480 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi44", "Campfire05", -2412.0f, 87,34119f, 3584.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_484 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi45", "Campfire02", -2572.0f, 74,29016f, 3584.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_484, "MP_ONLY", true);
	Local_5.f_488 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi46", "Campfire03", -2572.0f, 71,27844f, 3356.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_488, "MP_ONLY", true);
	Local_5.f_492 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi47", "Campfire03", -2768,054f, 52,20392f, 3217,685f, 0.0f, 8,063955f, 0.0f);
	Local_5.f_496 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi50", "Campfire03", -2969,647f, 65,25488f, 3431,97f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_496, "MP_ONLY", true);
	Local_5.f_500 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi51", "Campfire02", -2776,919f, 65,25488f, 3337,131f, 0.0f, 0.0f, 0.0f);
	Local_5.f_504 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi52", "Campfire05", -2946,151f, 63,24704f, 3464.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_508 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi53", "Campfire02", -2952.0f, 57,34185f, 3556.0f, 0.0f, -15,48365f, 0.0f);
	Local_5.f_512 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi54", "Campfire03", -3148,866f, 46,17646f, 3401,957f, 0.0f, 0.0f, 0.0f);
	Local_5.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi55", "Campfire05", -3009,556f, 41,16077f, 3208,908f, 0.0f, 0.0f, 0.0f);
	Local_5.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi56", "Campfire02", -3068.0f, 38,14902f, 3088.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi57", "Campfire03", -3492,942f, 35,17012f, 3266,903f, 0.0f, 40,60546f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_524, "MP_ONLY", true);
	Local_5.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cs_campfire_poi58", "Campfire05", -3298,114f, 37,14511f, 3195,066f, 0.0f, 29,4516f, 0.0f);
	Local_5.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire03", "Campfire03", -3434,625f, 28,1262f, 3950,98f, 0.0f, 180,9081f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_532, "MP_ONLY", true);
	Local_5.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire01", "Campfire05", -3433,697f, 30,11824f, 4052,614f, 0.0f, 223,8402f, 0.0f);
	Local_5.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire02", "Campfire02", -3528,167f, 30,47762f, 4067,276f, 0.0f, -112,4932f, 0.0f);
	Local_5.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire08", "Campfire03", -3740,026f, 19,07451f, 3702,391f, 0.0f, 51,89199f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_544, "MP_ONLY", true);
	Local_5.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire09", "Campfire05", -3649,542f, 16,07597f, 3386,271f, 0.0f, 142,2877f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_548, "MP_ONLY", true);
	Local_5.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire011", "Campfire05", -3676.0f, 16,06274f, 3340.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_552, "MP_ONLY", true);
	Local_5.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire012", "Campfire02", -3444f, 39,15295f, 3324f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_556, "MP_ONLY", true);
	Local_5.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire013", "Campfire05", -2340f, 16,06272f, 3792.0f, 0.0f, -30,82856f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_560, "MP_ONLY", true);
	Local_5.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire014", "Campfire01", -2396.0f, 13,59437f, 3924f, 0.0f, 377,9132f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_564, "MP_ONLY", true);
	Local_5.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire015", "Campfire05", -2503,747f, 71,9996f, 3732,213f, 0.0f, 318,8498f, 0.0f);
	Local_5.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire016", "Campfire05", -2874,909f, 36,10474f, 3731,685f, 0.0f, 51,39213f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_572, "MP_ONLY", true);
	Local_5.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire04", "Campfire04", -2910,835f, 37,14508f, 3123,243f, 0.0f, 84,71133f, 0.0f);
	Local_5.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage", "Player_Herb_RedSage", -2128.0f, 78,30591f, 3568f, 0.0f, 0.0f, 0.0f);
	Local_5.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage1", "Player_Herb_RedSage", -2060,095f, 65,44154f, 3567,905f, 0.0f, 0.0f, 0.0f);
	Local_5.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage2", "Player_Herb_RedSage", -2204.0f, 81,87195f, 3536.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage3", "Player_Herb_RedSage", -2196.0f, 72,28235f, 3622,289f, 0.0f, 0.0f, 0.0f);
	Local_5.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage4", "Player_Herb_RedSage", -2320.0f, 72,28235f, 3668,269f, 0.0f, 0.0f, 0.0f);
	Local_5.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_LockedFootlocker", "Locked_Footlocker", -3121,093f, 75,29359f, 3316,776f, 0.0f, -98,96357f, 0.0f);
	DECOR_SET_INT(Local_5.f_600, "GringoDollarAmt", 15);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stay6", "horse_stay", -3159,17f, 40,74809f, 3357,375f, 0.0f, -161,252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stay5", "horse_stay", -3161,255f, 40,81056f, 3357,217f, 0.0f, 1,104314f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stay4", "horse_stay", -3162,257f, 40,88935f, 3355,897f, 0.0f, -33,70702f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_rand_idle_stand1", "rand_idle_stand", -3163,328f, 48,60288f, 3338,12f, 0.0f, 24,23989f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_guntricks_e_any2", "stand_guntricks_e_any", -3170,379f, 48,039f, 3335,295f, 0.0f, -116,8604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_Sit_Ground7", "sit_ground_smoke", -3184,32f, 47,07455f, 3334,734f, 0.0f, 171,0371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Sit_Ground4", "stand_lookdistance_w_any", -2341,574f, 8,03136f, 3929,239f, 0.0f, -273,3786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Sit_Ground3", "rand_idle_stand", -2342,725f, 8,031624f, 3925,27f, 0.0f, -206,3736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Sit_Ground2", "Rand_Idle_Sit_Ground", -2343,372f, 8,031362f, 3929,253f, 0.0f, -329,1709f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", -2341,646f, 8,031359f, 3927,058f, 0.0f, -247,171f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_look_distance_binocs2", "look_distance_binocs", -2385,283f, 13,65843f, 3944,406f, 0.0f, -11,7156f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Ground_Campfire_Tend4", "sit_ground_smoke", -2392,38f, 9,035279f, 3975,027f, 0.0f, -256,7545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Ground_Campfire_Tend3", "Sit_Ground_Only", -2393,851f, 9,03528f, 3974,437f, 0.0f, -232,1839f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Ground_Campfire_Tend2", "Sit_Ground_Drink", -2395,36f, 9,035281f, 3973,386f, 0.0f, -181,9568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -2396,675f, 9,035282f, 3975,035f, 0.0f, -108,9257f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_horse_stay7", "horse_stay", -2418,596f, 8,455927f, 3947,523f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_horse_stay6", "horse_stay", -2417,423f, 8,40713f, 3948,75f, 0.0f, -126,3067f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_horse_tend5", "horse_tend", -2420,452f, 8,474426f, 3946,628f, 0.0f, -178,6461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_horse_stay5", "horse_stay", -2392,424f, 9,035282f, 3972,488f, 0.0f, -77,91962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_horse_stay", "horse_stay", -2390,601f, 9,035286f, 3974,18f, 0.0f, -77,91962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_horse_tend", "horse_tend", -2393,498f, 9,035286f, 3970,294f, 0.0f, -178,2487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_rand_idle_stand", "rand_idle_stand", -2410,299f, 8,794f, 3970,471f, 0.0f, 74,69887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_look_distance_binocs1", "look_distance_binocs", -2406,953f, 8,885f, 3972,906f, 0.0f, -179,8559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "pasted__Ram_Pee", "Pee", -2427,78f, 8,031357f, 3952,751f, 0.0f, -220,2258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_look_distance_binocs", "look_distance_binocs", -2379,605f, 13,45116f, 3959,745f, 0.0f, -145,4083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", -2403,277f, 8,82728f, 3971,173f, 0.0f, -235,7263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_stand_guntricks", "stand_guntricks_e_any", -2397,134f, 9,035282f, 3973,341f, 0.0f, -125,0145f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_smoking_stand", "smoking_stand", -2401,506f, 8,984141f, 3972f, 0.0f, 108,3262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", -2344,619f, 8,11066f, 3926,381f, 0.0f, -160,6333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_Sit_Ground6", "Rand_Idle_Sit_Ground", -3157,05f, 49,874f, 3335,208f, 0.0f, 199,8863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_play_harmonica2", "sit_ground_play_harmonica", -2826,924f, 20,222f, 3075,662f, 0.0f, -28,36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_peeing3", "stand_peeing_b_any", -2839,318f, 19,804f, 3087,875f, 0.0f, 88,69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_604), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", -2828,607f, 20,079f, 3076,498f, 0.0f, -10,50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_play_harmonica1", "sit_ground_play_harmonica", -2830,344f, 20,079f, 3077,056f, 0.0f, -28,36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", -2825,495f, 20,078f, 3065,822f, 0.0f, -10,50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", -3554,44f, 15,6855f, 3158,265f, 0.0f, 209,569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_608), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_rand_idle_stand3", "stand_lookdistance_w_any", -3552,909f, 15,63719f, 3157,377f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", -2011,576f, 45,81986f, 3593,491f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DIR_LockedFootlocker", "Locked_Footlocker", -1987,543f, 48,60604f, 3602,282f, 0.0f, -147,3852f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_INT(bVar0, "GringoDollarAmt", 10);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -1996.0f, 40,42086f, 3556.0f, 0.0f, 28,35921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_look_distance_binocs2", "look_distance_binocs", -1998,833f, 50,1581f, 3599,239f, 0.0f, 180,5422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -1983,027f, 48,83636f, 3599,454f, 0.0f, -152,7213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_horse_tend", "horse_tend", -2000,002f, 42,62162f, 3569,909f, 0.0f, -81,13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_horse_stay2", "horse_stay", -2000.0f, 41,35714f, 3561,477f, 0.0f, -81,13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_horse_stay1", "horse_stay", -2000.0f, 41,78054f, 3563,465f, 0.0f, -81,13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_horse_stay", "horse_stay", -1999,953f, 42,07273f, 3565,992f, 0.0f, -81,13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_rand_idle_stand", "rand_idle_stand", -1997,602f, 43,169f, 3578,858f, 0.0f, 34,43791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_look_distance_binocs1", "look_distance_binocs", -2013,013f, 45,82755f, 3597,033f, 0.0f, 205,1078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_stand_announce", "stand_announce", -1978,738f, 49,22998f, 3593,193f, 0.0f, -32,34185f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_stand_lookdistance_w_any", "stand_lookdistance_w_any", -1971,158f, 52,98363f, 3597,076f, 0.0f, -118,8713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_Pee", "Pee", -2005,785f, 45,09604f, 3597,083f, 0.0f, -149,6704f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_look_distance_binocs", "look_distance_binocs", -1992,156f, 42,48289f, 3572,075f, 0.0f, -64,38241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_sleeping_scripted", "sleeping_scripted", -1997,227f, 43,229f, 3575,407f, 0.0f, 29,99957f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_stand_drunk_throwbottle", "stand_drunk_throwbottle", -2002,435f, 43,169f, 3577,113f, 0.0f, -68,14408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_smoking_stand", "smoking_stand", -1994,3f, 44,10772f, 3587,234f, 0.0f, 27,99556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_sit_ground_play_harmonica", "sit_ground_play_harmonica", -1998,269f, 43,07348f, 3575,167f, 0.0f, -245,3799f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "DlR_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1999,387f, 43,169f, 3577,917f, 0.0f, 0,6212928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_rand_idle_stand2", "rand_idle_stand", -3555,438f, 15,60915f, 3159,332f, 0.0f, 171,8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", -3543,762f, 15,3694f, 3162,819f, 0.0f, -210,2364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", -3545,373f, 15,49567f, 3162,648f, 0.0f, 34,25905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_612), 0);
	Local_5.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", -3544,541f, 15,49885f, 3161,289f, 0.0f, 71,79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_616), 0);
	Local_5.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_look_distance_binocs2", "look_distance_binocs", -3545,451f, 15,64982f, 3159,776f, 0.0f, 138,5309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_620), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_horse_tend1", "horse_tend", -3495,967f, 19,65504f, 3136,116f, 0.0f, -91,20521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_horse_tend", "horse_tend", -3499,674f, 16,25382f, 3147,382f, 0.0f, 21,67242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_horse_stay2", "horse_stay", -3497,875f, 16,7437f, 3146,125f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_horse_stay1", "horse_stay", -3496f, 17,07369f, 3146,051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_horse_stay", "horse_stay", -3494,914f, 17,262f, 3150,906f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_look_distance_binocs1", "look_distance_binocs", -3516,268f, 15,515f, 3124,192f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_Pee", "Pee", -3492,114f, 19,66672f, 3136,246f, 0.0f, -26,90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_rand_idle_stand1", "rand_idle_stand", -3520,276f, 11,12099f, 3146,674f, 0.0f, 78,99949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_rand_idle_stand", "rand_idle_stand", -3509,928f, 13,78963f, 3146,481f, 0.0f, -82,29346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", -3511,514f, 13,83953f, 3143,129f, 0.0f, -161,3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", -3497,143f, 17,32072f, 3150,853f, 0.0f, -105,2133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_lean_rail", "look_distance_binocs", -3520,693f, 15,672f, 3127,985f, 0.0f, 37,36112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", -3516,66f, 15,74677f, 3134,089f, 0.0f, 41,5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_look_distance_binocs", "look_distance_binocs", -3503,269f, 15,4507f, 3126,436f, 0.0f, -47,4214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", -3507,42f, 14,41f, 3147,197f, 0.0f, 71,79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_horse_stay", "horse_stay", -2809,631f, 20,06283f, 3078,922f, 0.0f, 262,5791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_624), 0);
	Local_5.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_horse_stay1", "horse_stay", -2825,325f, 20,078f, 3061,285f, 0.0f, 291,1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_628), 0);
	Local_5.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_horse_stay2", "horse_stay", -2842,107f, 20,07843f, 3077,05f, 0.0f, -62,75959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_632), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_horse_stay3", "horse_stay", -2839,699f, 19,8962f, 3083,606f, 0.0f, -92,17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_horse_stay4", "horse_stay", -2833,166f, 20,082f, 3098,089f, 0.0f, -92,17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_horse_stay5", "horse_stay", -2832,59f, 20,078f, 3061,418f, 0.0f, 291,1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_636), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_guntricks2", "stand_guntricks_e_any", -2831,572f, 20,078f, 3071,561f, 0.0f, -37,21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_smoking_stand1", "smoking_stand", -2819,144f, 20,898f, 3097,647f, 0.0f, 8,869471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", -2860,124f, 18,071f, 3052,454f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", -2839,148f, 19,074f, 3047,189f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", -2816,013f, 19,074f, 3054,258f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", -2794,852f, 19,075f, 3074,642f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", -2807,877f, 20,397f, 3089,516f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", -2877,226f, 18,9f, 3088,852f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_peeing2", "stand_peeing_b_any", -2856,467f, 18,07058f, 3083,134f, 0.0f, 88,69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_640), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_guntricks1", "stand_guntricks_e_any", -2820,465f, 20,07843f, 3077,348f, 0.0f, -216,9882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_guntricks", "stand_guntricks_e_any", -2822,097f, 20,07843f, 3079,603f, 0.0f, -37,21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", -2832,129f, 20,19984f, 3075,018f, 0.0f, -91,55288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_lookdistance_binocs", "look_distance_binocs", -2810,723f, 20,06739f, 3080,786f, 0.0f, -93,60166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -2827,709f, 20,21305f, 3073,477f, 0.0f, -93,82076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_lean_fence_L_talking", "lean_fence_L_talking", -2815,689f, 20,069f, 3080,324f, 0.0f, -86,0629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_look_out_window_R", "look_out_window_R", -2827,741f, 20,22371f, 3077,974f, 0.0f, -183,1475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", -2834,184f, 20,0484f, 3078,272f, 0.0f, -269,9485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "mrc_stand_lookdistance", "stand_lookdistance_w_any", -2808,104f, 19,074f, 3061,17f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_Sit_Ground5", "Rand_Idle_Sit_Ground", -3159,587f, 49,208f, 3337,611f, 0.0f, 125,8836f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_horse_stay5", "horse_stay", -1931,363f, 31,714f, 3457,895f, 0.0f, -90,69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_horse_stay4", "horse_stay", -1922,429f, 33,198f, 3457,79f, 0.0f, -119,5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_guntricks1", "stand_guntricks_e_any", -1935,254f, 31,071f, 3465,635f, 0.0f, -37,21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_smoking_stand2", "smoking_stand", -1946,722f, 30,068f, 3464,956f, 0.0f, -120,1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", -1954,085f, 30,043f, 3461,345f, 0.0f, -10,50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", -1913,139f, 35,528f, 3465,48f, 0.0f, -10,50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", -1931,168f, 31,081f, 3472,563f, 0.0f, -10,50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_smoking_stand1", "smoking_stand", -1947,871f, 30,049f, 3454,507f, 0.0f, -120,1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_play_harmonica4", "sit_ground_play_harmonica", -1949,729f, 30,338f, 3468,748f, 0.0f, -28,36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_play_harmonica3", "sit_ground_play_harmonica", -1944,537f, 30,174f, 3462,752f, 0.0f, -28,36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_guntricks", "stand_guntricks_e_any", -1940,999f, 30,465f, 3466,823f, 0.0f, -37,21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_lookdistance4", "stand_lookdistance_w_any", -1938,157f, 40,077f, 3411,248f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_peeing4", "stand_peeing_b_any", -1938,611f, 31,35f, 3445,034f, 0.0f, 88,69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_644), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_lookdistance3", "stand_lookdistance_w_any", -1928,01f, 31,471f, 3470,586f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_lookdistance2", "stand_lookdistance_w_any", -1905,697f, 37,586f, 3460,313f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_lookdistance1", "stand_lookdistance_w_any", -1973,683f, 23,404f, 3452,104f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_stand_lookdistance", "stand_lookdistance_w_any", -1966,768f, 24,473f, 3444,756f, 0.0f, 12,70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_horse_stay3", "horse_stay", -1928,781f, 32,027f, 3459,594f, 0.0f, -90,69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_horse_stay2", "horse_stay", -1919,589f, 33,631f, 3452,771f, 0.0f, -119,5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_sit_play_harmonica", "sit_ground_play_harmonica", -1945,132f, 30,25158f, 3468,703f, 0.0f, -76,99028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_smoking_stand", "smoking_stand", -1944,187f, 30,25158f, 3467,699f, 0.0f, -120,1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_sleeping_scripted", "sleeping_scripted", -1948,295f, 30,42581f, 3469,483f, 0.0f, -56,70472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_lookdistance_b2", "look_distance_binocs", -1937,952f, 30,59689f, 3471,31f, 0.0f, -168,9819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_lookdistance_b1", "look_distance_binocs", -1955,76f, 29,60071f, 3464,03f, 0.0f, 93,37398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_look_out", "look_out_window_L", -1946,82f, 30,33619f, 3470,723f, 0.0f, -173,4546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", -1944,898f, 30,25158f, 3469,718f, 0.0f, -89,65778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "del_Pee", "Pee", -1949,664f, 30,068f, 3463,846f, 0.0f, -239,1129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3126,541f, 55,26898f, 3325,715f, 0.0f, 208,3396f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_drunk_throwbottle2", "stand_drunk_throwbottle", -3120f, 48,05134f, 3285,886f, 0.0f, -85,74197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3116,289f, 48,02755f, 3283,983f, 0.0f, -165,7704f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -3116,299f, 48,0468f, 3286,97f, 0.0f, 4,880137f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stay3", "horse_stay", -3122,469f, 44,295f, 3276,393f, 0.0f, -62,41935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stay2", "horse_stay", -3116,799f, 44,8482f, 3275,256f, 0.0f, -84,97229f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stay1", "horse_stay", -3148,185f, 45,21606f, 3285,917f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_horse_stayf", "horse_stay", -3145,843f, 44,94708f, 3284,708f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_guntricks_e_any1", "stand_guntricks_e_any", -3164,408f, 48,90765f, 3306,279f, 0.0f, -107,4971f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_yawning_n_any", "stand_yawning_n_any", -3147,888f, 52,50456f, 3331,406f, 0.0f, -25,10501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_guntricks_e_any", "stand_guntricks_e_any", -3162,687f, 43,39395f, 3284,156f, 0.0f, -116,8604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_rand_idle_stand", "rand_idle_stand", -3161,706f, 44,13537f, 3285,432f, 0.0f, -34,07877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_Pee", "Pee", -3181,828f, 44,61724f, 3291,591f, 0.0f, -145,4428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_smoking_stand", "smoking_stand", -3161,215f, 48,66968f, 3305,215f, 0.0f, -193,7699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3160,971f, 49,1858f, 3307,668f, 0.0f, 64,33193f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_Sit_Ground4", "Rand_Idle_Sit_Ground", -3118,486f, 48,08616f, 3286,486f, 0.0f, -57,33881f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Rep_look_distance_binocs6", "look_distance_binocs", -3116,516f, 47,90384f, 3282,219f, 0.0f, -15,7782f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_look_distance_binocs5", "look_distance_binocs", -3165,171f, 47,88364f, 3339,91f, 0.0f, 172,8329f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_lookdistance_w_any", "stand_lookdistance_w_any", -3208,021f, 48,54655f, 3325,991f, 0.0f, 60,81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_lookdistance_w_any6", "stand_lookdistance_w_any", -3151,599f, 55,1331f, 3326,926f, 0.0f, 60,81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_lookdistance_w_any4", "stand_lookdistance_w_any", -3153,294f, 44,676f, 3283,202f, 0.0f, 60,81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -3235,002f, 43,37407f, 3289,337f, 0.0f, 60,81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_stand_lookdistance_w_any5", "stand_lookdistance_w_any", -3239,588f, 45,36124f, 3323,61f, 0.0f, 60,81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_lookdistance_binocs1", "look_distance_binocs", -3093,237f, 54,06651f, 3295,742f, 0.0f, 50,78083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_lookdistance_binocs", "look_distance_binocs", -3199,912f, 49,23763f, 3294,363f, 0.0f, 50,78083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage5", "Player_Herb_RedSage", -2305,475f, 79,4324f, 3579,02f, 0.0f, 0.0f, 0.0f);
	Local_5.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage6", "Player_Herb_RedSage", -2312,041f, 85,33324f, 3522,133f, 0.0f, 0.0f, 0.0f);
	Local_5.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage7", "Player_Herb_RedSage", -2356,613f, 75,97663f, 3395,387f, 0.0f, 0.0f, 0.0f);
	Local_5.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage8", "Player_Herb_RedSage", -2328,49f, 23,83016f, 3758,703f, 0.0f, 0.0f, 0.0f);
	Local_5.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage9", "Player_Herb_RedSage", -2340,607f, 15,78902f, 3803,609f, 0.0f, 0.0f, 0.0f);
	Local_5.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage10", "Player_Herb_RedSage", -2584f, 18,96817f, 3836,951f, 0.0f, 0.0f, 0.0f);
	Local_5.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage12", "Player_Herb_RedSage", -2653,214f, 71,27073f, 3674,935f, 0.0f, 0.0f, 0.0f);
	Local_5.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage13", "Player_Herb_RedSage", -2752f, 64,25098f, 3660.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage14", "Player_Herb_RedSage", -2860,954f, 84,32941f, 3656.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage15", "Player_Herb_RedSage", -2772,946f, 78,30584f, 3622,849f, 0.0f, 0.0f, 0.0f);
	Local_5.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage16", "Player_Herb_RedSage", -2650,237f, 81,31765f, 3614,626f, 0.0f, 0.0f, 0.0f);
	Local_5.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage17", "Player_Herb_RedSage", -2579,453f, 75,2982f, 3571,804f, 0.0f, 0.0f, 0.0f);
	Local_5.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage18", "Player_Herb_RedSage", -2528.0f, 73,28625f, 3516.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage19", "Player_Herb_RedSage", -2398,533f, 88,00005f, 3578,744f, 0.0f, 0.0f, 0.0f);
	Local_5.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage54", "Player_Herb_RedSage", -3720.0f, 19,47223f, 4068f, 0.0f, 0.0f, 0.0f);
	Local_5.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage20", "Player_Herb_RedSage", -2480.0f, 77,30194f, 3512.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage21", "Player_Herb_RedSage", -2376.0f, 90,35297f, 3484.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage22", "Player_Herb_RedSage", -2544.0f, 72,28235f, 3524.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage23", "Player_Herb_RedSage", -2575,155f, 69,27057f, 3386,922f, 0.0f, 0.0f, 0.0f);
	Local_5.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage24", "Player_Herb_RedSage", -2340.0f, 91,34657f, 3470,586f, 0.0f, 0.0f, 0.0f);
	Local_5.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage25", "Player_Herb_RedSage", -2406,008f, 88,34509f, 3540f, 0.0f, 0.0f, 0.0f);
	Local_5.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage26", "Player_Herb_RedSage", -2568.0f, 70,27451f, 3372.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage27", "Player_Herb_RedSage", -2380.0f, 78,16766f, 3413,836f, 0.0f, 0.0f, 0.0f);
	Local_5.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage28", "Player_Herb_RedSage", -2523,415f, 63,24707f, 3292.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage29", "Player_Herb_RedSage", -2618,338f, 60,23529f, 3261,621f, 0.0f, 0.0f, 0.0f);
	Local_5.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage30", "Player_Herb_RedSage", -2584.0f, 72,2552f, 3344.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage31", "Player_Herb_RedSage", -2640,04f, 70,66639f, 3343,903f, 0.0f, 0.0f, 0.0f);
	Local_5.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage32", "Player_Herb_RedSage", -2623,346f, 61,2392f, 3252,757f, 0.0f, -100,696f, 0.0f);
	Local_5.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage33", "Player_Herb_RedSage", -2608.0f, 58,22832f, 3220,38f, 0.0f, 0.0f, 0.0f);
	Local_5.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage34", "Player_Herb_RedSage", -2567,059f, 76,3085f, 3620,357f, 0.0f, 0.0f, 0.0f);
	Local_5.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage35", "Player_Herb_RedSage", -2744.0f, 65,33836f, 3440.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage36", "Player_Herb_RedSage", -2668.0f, 68,70806f, 3370,733f, 0.0f, 0.0f, 0.0f);
	Local_5.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage37", "Player_Herb_RedSage", -2747,472f, 64,25887f, 3360.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage38", "Player_Herb_RedSage", -2618,21f, 72,28235f, 3336.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage39", "Player_Herb_RedSage", -2776.0f, 60,23529f, 3540.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage40", "Player_Herb_RedSage", -2932.0f, 56,2196f, 3516.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage41", "Player_Herb_RedSage", -2944.0f, 65,34352f, 3442,838f, 0.0f, 0.0f, 0.0f);
	Local_5.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage42", "Player_Herb_RedSage", -3007,288f, 64,25098f, 3432,222f, 0.0f, 0.0f, 0.0f);
	Local_5.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage43", "Player_Herb_RedSage", -3105,468f, 49,17103f, 3513,909f, 0.0f, 0.0f, 0.0f);
	Local_5.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage44", "Player_Herb_RedSage", -3060.0f, 46,18036f, 3596.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage45", "Player_Herb_RedSage", -3088.0f, 43,16861f, 3793,174f, 0.0f, 0.0f, 0.0f);
	Local_5.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage46", "Player_Herb_RedSage", -3100.0f, 44,6666f, 3712f, 0.0f, 0.0f, 0.0f);
	Local_5.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage47", "Player_Herb_RedSage", -3261,243f, 37,4289f, 3796,019f, 0.0f, 0.0f, 0.0f);
	Local_5.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage48", "Player_Herb_RedSage", -3312.0f, 28,1098f, 3874,001f, 0.0f, 0.0f, 0.0f);
	Local_5.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage49", "Player_Herb_RedSage", -3354,739f, 31,10819f, 3872f, 0.0f, 0.0f, 0.0f);
	Local_5.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage50", "Player_Herb_RedSage", -3479,23f, 29,11372f, 3790,93f, 0.0f, 0.0f, 0.0f);
	Local_5.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage51", "Player_Herb_RedSage", -3456.0f, 29,22464f, 3997,027f, 0.0f, 0.0f, 0.0f);
	Local_5.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage52", "Player_Herb_RedSage", -3517,215f, 30,6639f, 4050,653f, 0.0f, 0.0f, 0.0f);
	Local_5.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage53", "Player_Herb_RedSage", -3552.0f, 31,12157f, 4032f, 0.0f, 0.0f, 0.0f);
	Local_5.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage55", "Player_Herb_RedSage", -3780.0f, 12,04705f, 3864f, 0.0f, 0.0f, 0.0f);
	Local_5.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage56", "Player_Herb_RedSage", -3784,537f, 20,34153f, 3820f, 0.0f, 0.0f, 0.0f);
	Local_5.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage57", "Player_Herb_RedSage", -3680.0f, 38,12937f, 3776f, 0.0f, 0.0f, 0.0f);
	Local_5.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage58", "Player_Herb_RedSage", -3884.0f, 15,05882f, 3868f, 0.0f, 0.0f, 0.0f);
	Local_5.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage59", "Player_Herb_RedSage", -3740.0f, 16,88192f, 3676f, 0.0f, 0.0f, 0.0f);
	Local_5.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage60", "Player_Herb_RedSage", -3720.0f, 19,02363f, 3664f, 0.0f, 0.0f, 0.0f);
	Local_5.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage61", "Player_Herb_RedSage", -3633,163f, 26,13289f, 3667,891f, 0.0f, 0.0f, 0.0f);
	Local_5.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage62", "Player_Herb_RedSage", -3488f, 30,11765f, 3557,893f, 0.0f, 0.0f, 0.0f);
	Local_5.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage63", "Player_Herb_RedSage", -3600.0f, 28,1098f, 3548f, 0.0f, 0.0f, 0.0f);
	Local_5.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage64", "Player_Herb_RedSage", -3368.0f, 33,12941f, 3612f, 0.0f, 0.0f, 0.0f);
	Local_5.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage65", "Player_Herb_RedSage", -3304.0f, 37,14508f, 3639,991f, 0.0f, 0.0f, 0.0f);
	Local_5.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage66", "Player_Herb_RedSage", -3324.0f, 40,68421f, 3760f, 0.0f, 0.0f, 0.0f);
	Local_5.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage67", "Player_Herb_RedSage", -3212f, 40,15686f, 3554,35f, 0.0f, 0.0f, 0.0f);
	Local_5.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage68", "Player_Herb_RedSage", -3266,841f, 47,18433f, 3448f, 0.0f, 0.0f, 0.0f);
	Local_5.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage69", "Player_Herb_RedSage", -3159,258f, 46,17721f, 3395,738f, 0.0f, 0.0f, 0.0f);
	Local_5.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage70", "Player_Herb_RedSage", -3102,988f, 54,21176f, 3458,58f, 0.0f, 0.0f, 0.0f);
	Local_5.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage71", "Player_Herb_RedSage", -3284f, 45,18009f, 3437,367f, 0.0f, 0.0f, 0.0f);
	Local_5.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage72", "Player_Herb_RedSage", -3428f, 39,15937f, 3437,872f, 0.0f, 0.0f, 0.0f);
	Local_5.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage73", "Player_Herb_RedSage", -3370,748f, 39,15295f, 3353,252f, 0.0f, 0.0f, 0.0f);
	Local_5.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage74", "Player_Herb_RedSage", -3250,005f, 42,1647f, 3364f, 0.0f, 0.0f, 0.0f);
	Local_5.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage75", "Player_Herb_RedSage", -3408f, 37,14053f, 3344,301f, 0.0f, 0.0f, 0.0f);
	Local_5.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage76", "Player_Herb_RedSage", -3592.0f, 33,12939f, 3440f, 0.0f, 0.0f, 0.0f);
	Local_5.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage77", "Player_Herb_RedSage", -3736,011f, 8,031368f, 3367,968f, 0.0f, 0.0f, 0.0f);
	Local_5.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage78", "Player_Herb_RedSage", -3760.0f, 8,031368f, 3500,001f, 0.0f, 0.0f, 0.0f);
	Local_5.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage79", "Player_Herb_RedSage", -3696.0f, 8,031367f, 3427,292f, 0.0f, 0.0f, 0.0f);
	Local_5.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage80", "Player_Herb_RedSage", -3700,347f, 8,047106f, 3547,551f, 0.0f, 0.0f, 0.0f);
	Local_5.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage81", "Player_Herb_RedSage", -3692.0f, 14,05489f, 3268f, 0.0f, 0.0f, 0.0f);
	Local_5.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage82", "Player_Herb_RedSage", -3566,34f, 14,0549f, 3256f, 0.0f, 0.0f, 0.0f);
	Local_5.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage83", "Player_Herb_RedSage", -3368f, 36,95808f, 3240f, 0.0f, 0.0f, 0.0f);
	Local_5.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage84", "Player_Herb_RedSage", -3412f, 43,16864f, 3300f, 0.0f, 0.0f, 0.0f);
	Local_5.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage85", "Player_Herb_RedSage", -3278,227f, 42,16839f, 3394,21f, 0.0f, 0.0f, 0.0f);
	Local_5.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage86", "Player_Herb_RedSage", -3252f, 44,17255f, 3416f, 0.0f, 0.0f, 0.0f);
	Local_5.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage87", "Player_Herb_RedSage", -3023,994f, 42,12013f, 3277,905f, 0.0f, 0.0f, 0.0f);
	Local_5.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage88", "Player_Herb_RedSage", -3064.0f, 39,15292f, 3232.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage89", "Player_Herb_RedSage", -3244f, 38,06852f, 3156f, 0.0f, 0.0f, 0.0f);
	Local_5.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage90", "Player_Herb_RedSage", -3176f, 39,1916f, 3176f, 0.0f, 0.0f, 0.0f);
	Local_5.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage91", "Player_Herb_RedSage", -3116f, 39,30048f, 3144f, 0.0f, 0.0f, 0.0f);
	Local_5.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage92", "Player_Herb_RedSage", -2956.0f, 39,15292f, 3157,642f, 0.0f, 0.0f, 0.0f);
	Local_5.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage93", "Player_Herb_RedSage", -2852.0f, 45,17645f, 3212.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage94", "Player_Herb_RedSage", -2685,033f, 56,52071f, 3228,655f, 0.0f, 163,1573f, 0.0f);
	Local_5.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage95", "Player_Herb_RedSage", -2740.0f, 66,25882f, 3313,721f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage96", "Player_Herb_RedSage", -2932.0f, 57,57935f, 3392.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage97", "Player_Herb_RedSage", -3384f, 17,06667f, 3149,725f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage98", "Player_Herb_RedSage", -3552f, 14,0549f, 3244f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_RedSage99", "Player_Herb_RedSage", -2668.0f, 47,1843f, 3170,333f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -3360f, 17,06667f, 3160f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -3564,983f, 14,99426f, 3196,983f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -3480f, 36,41875f, 3330,627f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -3290,742f, 47,18433f, 3289,645f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -3089,406f, 58,04325f, 3314,362f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -2971,6f, 20,96024f, 3082,742f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -2783,719f, 37,38314f, 3134,997f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -2688.0f, 54,21176f, 3264.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -2680.0f, 44,17255f, 3152.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", -3028.0f, 40,15686f, 3200.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -3020.0f, 61,2392f, 3392.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -3082,824f, 52,20392f, 3390,854f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -2868.0f, 45,15871f, 3192.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -3144,361f, 22,33671f, 3087,783f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -3288f, 34,39495f, 3128f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", -3572f, 16,10337f, 3164f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", -3639,497f, 14,0549f, 3232f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", -2429,105f, 72,28235f, 3386,798f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", -2323,266f, 91,35687f, 3464f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", -2208.0f, 81,29002f, 3552.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", -2176.0f, 78,30591f, 3564f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage", "Player_Herb_DesertSage", -3788.0f, 8,031364f, 3344f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", -3564f, 37,14511f, 3396f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -3436f, 35,13725f, 3360f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", -3541,646f, 38,14902f, 3470,473f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -3413,799f, 34,9981f, 3570,201f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -3508.0f, 25,09804f, 3628f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -3604.0f, 28,1098f, 3656,467f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -3750,897f, 17,9346f, 3692f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -3820.0f, 9,024844f, 3792f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -3761,782f, 21,08235f, 3824f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", -3861,371f, 14,15964f, 3828f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", -3908.0f, 12,17647f, 3879,762f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", -3612.0f, 29,11754f, 3912f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", -3576.0f, 46,08669f, 3796f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", -3477,363f, 30,11763f, 3828f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", -3562,483f, 31,12157f, 3997,31f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", -3872.0f, 13,92223f, 3932f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", -3777,49f, 21,30838f, 4002,51f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", -3456.0f, 29,23476f, 3956f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", -3277,899f, 40,15022f, 3530,462f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", -3248.0f, 39,15292f, 3708f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rep_rand_idle_stand2", "rand_idle_stand", -3159,823f, 43,95999f, 3285,607f, 0.0f, 48,95183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_63(int iParam0) //Position: 0x937F / 37759
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_67();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_66(iParam0[iVar03], 8);
		}
		else if (Function_65())
		{
			iVar1 = 1;
			Function_66(iParam0[iVar03], 8);
		}
		Function_66(iParam0[iVar03], 16);
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
				Function_66(iParam0[iVar03], 1);
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
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
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
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
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
	Function_64();
	return 1;
}

void Function_64() //Position: 0x96FA / 38650
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

bool Function_65() //Position: 0x973A / 38714
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

void Function_66(var uParam0, int iParam1) //Position: 0x9765 / 38757
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_67() //Position: 0x9776 / 38774
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

var Function_68(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x97B8 / 38840
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_69(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_66(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_69(var uParam0, int iParam1, int iParam2) //Position: 0x97F0 / 38896
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_66(uParam0[iVar03], 4);
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

void Function_70(int iParam0, int iParam1) //Position: 0x98B4 / 39092
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

bool Function_71() //Position: 0x98FD / 39165
{
	var uVar0;
	
	Function_70(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("RioBravo_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_fom_TL", 2, -2698,75f, 67,26273f, 3594,622f, 0.0f, 46,90526f, 0.0f, 233,9071f, 51,19311f, 162,187f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_fom_TR", 2, -2816,708f, 67,26276f, 3471,476f, 0.0f, -43,06648f, 0.0f, 182,4189f, 56,81593f, 216,5262f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_fom_BL", 2, -2552,932f, 70,78741f, 3466,534f, 0.0f, 47,35273f, 0.0f, 164,3603f, 46,83172f, 200,9831f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_fom_BR", 2, -2689,511f, 69,99854f, 3324,288f, 0.0f, 47,24931f, 0.0f, 182,6157f, 58,32756f, 197,6764f);
	return 1;
}

void Function_72(bool bParam0, int iParam1) //Position: 0x9A38 / 39480
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

void Function_73(int iParam0) //Position: 0x9A73 / 39539
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

