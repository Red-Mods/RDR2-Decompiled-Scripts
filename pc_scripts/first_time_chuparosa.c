//Decompiled with MagicRDR v1.0
//Function Count : 302
//Statics Count : 527
//Natives Count : 414
//Parameters Count : 62

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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0.0f;
	bool bLocal_27 = false;
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
	var uLocal_47 = 3;
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
	var uLocal_74 = 3;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 3;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 3;
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
	var uLocal_128 = 3;
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
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 3;
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
	var uLocal_209 = 3;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 3;
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
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	bool bLocal_305 = false;
	float fLocal_306 = 0.0f;
	bool bLocal_307 = false;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	struct<2> Local_315[5];
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
	struct<2> Local_337[4];
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	struct<2> Local_355[2];
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	struct<2> Local_365[2];
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	struct<2> Local_376 = { 0, 0 } ;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	struct<2> Local_381 = { 0, 0 } ;
	var uLocal_383 = 0;
	float fLocal_384 = 0.0f;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	bool bLocal_387 = false;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	bool bLocal_390 = false;
	bool bLocal_391 = false;
	int iLocal_392 = 0;
	bool bLocal_393 = false;
	bool bLocal_394 = false;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	int iLocal_400 = 0;
	var uLocal_401 = 0;
	int iLocal_402 = 0;
	var uLocal_403 = 0;
	bool bLocal_404 = false;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<2> Local_415[3];
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	struct<2> Local_429[3];
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	struct<2> Local_443 = { 0, 0 } ;
	var uLocal_445 = 0;
	struct<2> Local_446 = { 0, 0 } ;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	float fLocal_455 = 0.0f;
	bool bLocal_456 = false;
	bool bLocal_457 = false;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461 = 0;
	var uLocal_462 = 0;
	bool bLocal_463 = false;
	int iLocal_464 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3[14];
	var uVar18[4];
	int iVar23[6];
	int iVar30;
	var uVar31[4];
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	var uVar40;
	bool bVar41;
	bool bVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	var uVar46;
	var uVar47[14];
	var uVar62;
	int iVar99;
	var uVar100;
	int iVar101;
	bool bVar102;
	int iVar103;
	vector3 vVar104;
	vector3 vVar107;
	vector3 vVar110;
	vector3 vVar113;
	var uVar116;
	var uVar117;
	var uVar118;
	bool bVar119;
	var uVar120;
	int iVar122;
	bool bVar123;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	bLocal_27 = false;
	iLocal_302 = 0;
	iLocal_303 = 0;
	iLocal_304 = 0;
	bLocal_305 = false;
	fLocal_306 = 0.0f;
	Local_376 = Vector(-2557,061f, 26,102f, 4502,985f);
	Local_381 = Vector(-2735,128f, 32,517f, 4256,27f);
	fLocal_384 = 130,329f;
	bLocal_387 = false;
	iLocal_388 = 0;
	iLocal_389 = 1;
	bLocal_390 = false;
	bLocal_391 = false;
	iLocal_392 = 1;
	bLocal_393 = true;
	iLocal_408 = 0;
	iLocal_409 = 0;
	iLocal_413 = 1;
	bLocal_463 = false;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = CREATE_LAYOUT(Function_301());
	uVar3[0] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack00", Vector(-0,2520187f, 1,491357f, -0,5765639f), Vector(113,41f, 90.0f, 0.0f));
	uVar3[1] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack01", Vector(0,02637131f, 1,538229f, -0,5221871f), Vector(113,41f, 90.0f, 0.0f));
	uVar3[2] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack02", Vector(0,3096541f, 1,550158f, -0,5424162f), Vector(113,4098f, 90.0f, 0.0f));
	uVar3[3] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack03", Vector(-0,4165353f, 1,596779f, -0,07554072f), Vector(-103,3987f, 90.0f, 0.0f));
	uVar3[4] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack04", Vector(-0,1230195f, 1,60274f, -0,1512939f), Vector(-103,3671f, 89,06715f, 13,399f));
	uVar3[5] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack05", Vector(0,1624664f, 1,578784f, -0,1568331f), Vector(-123,6742f, 90.0f, 0.0f));
	uVar3[6] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack06", Vector(-0,1900117f, 1,576428f, 0,3473004f), Vector(129,7944f, 95,26188f, 10,95264f));
	uVar3[7] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack07", Vector(0,1188243f, 1,56953f, 0,4436796f), Vector(103,994f, 90.0f, 0.0f));
	uVar3[8] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack08", Vector(0,3579013f, 1,622782f, 0,4045452f), Vector(103,9941f, 90.0f, 0.0f));
	uVar3[9] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack09", Vector(-0,534498f, 1,499351f, -0,5765639f), Vector(113,41f, 90.0f, 0.0f));
	uVar3[10] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack010", Vector(0,4002378f, 1,635943f, -0,1568331f), Vector(-123,6742f, 90.0f, 0.0f));
	uVar3[11] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack011", Vector(-0,4872397f, 1,663396f, 0,3515187f), Vector(132,6347f, 92,76398f, 8,11237f));
	uVar3[12] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack012", Vector(-0,1757496f, 1,258301f, 1,588476f), Vector(0.0f, 4,646807f, 0.0f));
	uVar3[13] = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bVar2, "Sack013", Vector(0,3935626f, 1,258301f, 1,429322f), Vector(0.0f, -7,571244f, 0.0f));
	bVar41 = false;
	iVar43 = 0;
	iVar44 = 0;
	uVar46 = Function_299(2, 2, 1, 0, 0);
	Local_415[02] = Vector(-2653.0f, 31,122f, 4232,104f);
	Local_415[12] = Vector(-2736,69f, 32,243f, 4295,587f);
	Local_415[22] = Vector(-2758,32f, 32,125f, 4261,474f);
	Local_429[02] = Vector(0.0f, 144.0f, 0.0f);
	Local_429[12] = Vector(0.0f, 161.0f, 0.0f);
	Local_429[22] = Vector(0.0f, 141.0f, 0.0f);
	uVar62 = 18;
	Function_298(&bLocal_404, 0.0f);
	iVar99 = 0;
	bVar102 = false;
	if (Function_297(2, 0, 3))
	{
		uVar100 = Function_292(2, 0, 3);
		bVar102 = Function_291(uVar100) < 1;
	}
	else
	{
		iVar0 = 5;
	}
	Local_315[02] = Vector(-2723,042f, 32,597f, 4244,882f);
	Local_315[12] = Vector(-2726,575f, 33,194f, 4267,749f);
	Local_315[22] = Vector(-2743,296f, 33,018f, 4272,273f);
	Local_315[32] = Vector(-2726,251f, 32,706f, 4252,12f);
	Local_315[42] = Vector(-2725,266f, 32,769f, 4261,321f);
	Var38 = Vector(-2729,765f, 32,666f, 4257,792f);
	Local_365[02] = Vector(-2731,564f, 32,828f, 4254,517f);
	Local_365[12] = Vector(-2732,837f, 32,587f, 4253,192f);
	Local_355[02] = Vector(-2730,394f, 32,742f, 4253,734f);
	Local_355[12] = Vector(-2731,584f, 32,582f, 4252,395f);
	Local_337[02] = Vector(-2712,44f, 32,832f, 4279,707f);
	Local_337[12] = Vector(-2717,876f, 32,828f, 4284,475f);
	Local_337[22] = Vector(-2736,411f, 32,493f, 4287,633f);
	Local_337[32] = Vector(-2734,151f, 32,683f, 4283,529f);
	iVar103 = 0;
	if (!IS_POPSET_VALID(&(Global_46972[0])))
	{
		iVar0 = 5;
	}
	else
	{
		iVar23[0] = 262;
		iVar23[1] = 297;
		iVar23[2] = Function_289(&(Global_46972[0]), 1, 2, 1);
		iVar23[3] = Function_289(&(Global_46972[0]), 1, 2, 1);
		iVar23[4] = 311;
		bVar37 = Function_289(&(Global_46972[2]), 1, 2, 1);
		iVar101 = 0;
		while (iVar101 <= 5)
		{
			if (iVar23[iVar101] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_288(&uVar62, iVar23[iVar101], 3, 0);
			}
			iVar101++;
		}
		if (iVar0 != 5)
		{
			if (bVar37 == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_288(&uVar62, bVar37, 3, 0);
			}
			Function_288(&uVar62, 1199, 3, 0);
			Function_286(&uVar62, "multistage_movebox", 1, 0);
			Function_286(&uVar62, "smoking_stand", 1, 0);
			Function_286(&uVar62, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
			Function_286(&uVar62, "Stolen_Pleading_Panic_Return", 5, 0);
			Function_286(&uVar62, "custom/Stolen_Pleading_Panic_Return", 8, 0);
			Function_286(&uVar62, "thanks", 5, 0);
			Function_286(&uVar62, "custom/thanks", 8, 0);
			Function_285(&iVar23, 6);
		}
		if (Global_6625 == 1)
		{
			iVar0 = 5;
		}
		if (Function_284(0))
		{
			iVar0 = 5;
		}
	}
	iVar122 = 0;
	bVar123 = false;
	while (!IS_EXITFLAG_SET())
	{
		if (Function_283(&bVar123, &iVar0, &iVar122, &bVar119, bVar41))
		{
			if (bVar123)
			{
				Function_282(&uVar31, 4294967295);
				Function_281(&iVar30);
				Function_281(&iVar36);
			}
			else
			{
				Function_280(&uVar31, 4294967295);
				Function_279(&iVar30);
				Function_279(&iVar36);
			}
		}
		bVar119 = 600;
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_273(&uVar62))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				iVar0 = 2;
				break;
			
			case 0x00000002:
				if (!Function_268(ScriptParam_0.f_64, &iVar30, &iVar43, &iVar44, bLocal_391, !iLocal_411, 1, 0))
				{
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				if (VDIST(Global_54078, Local_381) > 35.0f)
				{
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				if (Function_267(StackVal, Local_381, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar0 = 5;
					break;
				}
				Function_266(&bLocal_457);
				uLocal_453 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bVar2, "vWorkerWander", 2,802597E-45f, Vector(-2735,136f, 33,121f, 4269,531f), Vector(0.0f, 10.0f, 0.0f), Vector(18.0f, 20.0f, 10.0f));
				uVar118 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bVar2, Function_301(), 0f, Local_381, Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
				uVar40 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bVar2, "vLawmanWander", 4,203895E-45f, Vector(-2726,448f, 32,702f, 4258,956f), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 10.0f, 3.0f));
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar117, 15);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uVar118, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar117);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar117);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar118);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar118);
				uVar31[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &bVar2, Function_301(), iVar23[0], Local_315[02], Vector(0.0f, 0.0f, 0.0f));
				SET_ACTOR_UPDATE_PRIORITY(&(uVar31[0]), false);
				TASK_STAND_STILL(&(uVar31[0]), -1.0f, 0, 0);
				uVar31[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &bVar2, Function_301(), iVar23[1], Local_315[12], Vector(0.0f, 0.0f, 0.0f));
				SET_ACTOR_UPDATE_PRIORITY(&(uVar31[1]), false);
				TASK_WANDER_IN_VOLUME(&(uVar31[1]), &uLocal_453, -1.0f);
				uVar31[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, &bVar2, Function_301(), iVar23[2], Local_315[22], Vector(0.0f, 0.0f, 0.0f));
				SET_ACTOR_UPDATE_PRIORITY(&(uVar31[2]), false);
				TASK_WANDER_IN_VOLUME(&(uVar31[2]), &uLocal_453, -1.0f);
				uVar31[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, &bVar2, Function_301(), iVar23[3], Local_315[32], Vector(0.0f, 0.0f, 0.0f));
				SET_ACTOR_UPDATE_PRIORITY(&(uVar31[3]), false);
				TASK_STAND_STILL(&(uVar31[3]), -1.0f, 0, 0);
				iVar30 = CREATE_ACTOR_IN_LAYOUT(StackVal, &bVar2, Function_301(), iVar23[4], Local_315[42], Vector(0.0f, 0.0f, 0.0f));
				SET_ACTOR_CAN_PLAY_GESTURES(&iVar30, false);
				SET_ACTOR_UPDATE_PRIORITY(&iVar30, false);
				uLocal_313 = CREATE_GRINGO_IN_LAYOUT(StackVal, &bVar2, "smoking_stand", "smoking_stand", Local_315[42], Vector(0.0f, 0.0f, 0.0f));
				GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(&uLocal_313), &iVar30);
				iVar36 = CREATE_ACTOR_IN_LAYOUT(StackVal, &bVar2, Function_301(), bVar37, Var38, Vector(0.0f, 0.0f, 0.0f));
				SET_ACTOR_CAN_PLAY_GESTURES(&iVar36, false);
				TASK_WANDER_IN_VOLUME(&iVar36, &uVar40, -1f);
				SET_ACTOR_STAY_WITHIN_VOLUME(&iVar36, &uVar40, 1, false);
				Function_265(&iVar36);
				Function_264(&iVar36, 0);
				Function_263(&iVar30);
				iLocal_402 = Function_259(StackVal, StackVal, &bVar2, Function_301(), 1199, 977, Local_381, Vector(0.0f, fLocal_384, 0.0f), 1, 976, 976, 976, 2);
				iVar101 = 0;
				while (iVar101 <= 14)
				{
					GET_OBJECT_POSITION(&(uVar3[iVar101]), &Local_443);
					GET_OBJECT_ORIENTATION(&(uVar3[iVar101]), &Local_446);
					uVar47[iVar101] = CREATE_PROP_IN_LAYOUT(StackVal, &iLocal_402, Function_301(), "p_gen_sackcorn02x", Local_381, Vector(0.0f, 0.0f, 0.0f), 0);
					ATTACH_OBJECTS_NO_DRV(&(uVar47[iVar101]), &iLocal_402, Function_301(), Local_443, Local_446);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(&(uVar47[iVar101]), 0);
					iVar101++;
				}
				WAIT(16);
				iVar101 = 0;
				while (iVar101 <= 14)
				{
					GET_OBJECT_POSITION(&(uVar47[iVar101]), &uLocal_308);
					uLocal_311 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &uLocal_308, 0,4f, 0);
					if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&uLocal_311)))
					{
						DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&uLocal_311));
					}
					iVar101++;
				}
				PRINTVECTOR(*(&ScriptParam_0 + 16));
				PRINTNL();
				PRINTVECTOR(Global_54078);
				PRINTNL();
				if (!Function_256(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40))
				{
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				uVar116 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_301(), 4,203895E-45f, Local_381, Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
				DECOR_SET_INT(&uVar116, "script", GET_THIS_SCRIPT_ID());
				Function_252(&uVar116, ScriptParam_0.f_40);
				vVar104 = Local_337[22];
				vVar107 = Local_337[32];
				vVar110 = Local_337[02];
				vVar113 = Local_337[12];
				Function_251(StackVal, StackVal, &(uVar31[0]), vVar104, &bVar2);
				Function_251(StackVal, StackVal, &(uVar31[1]), vVar107, &bVar2);
				Function_251(StackVal, StackVal, &(uVar31[2]), vVar110, &bVar2);
				Function_251(StackVal, StackVal, &(uVar31[3]), vVar113, &bVar2);
				uVar120 = CREATE_PROP_IN_LAYOUT(StackVal, &bVar2, Function_301(), "p_gen_sackcorn02x", Local_355[02], Vector(0.0f, 310.0f, 0.0f), 0);
				SNAP_OBJECT_TO_GROUND(&uVar120, 6.0f, 1, 1092616192);
				uVar18[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(Local_355[02]), 0,4f, 0);
				GRINGO_UPDATE_BOOL(&(uVar18[0]), "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(&(uVar18[0]), &(uVar31[0]));
				uVar120 = CREATE_PROP_IN_LAYOUT(StackVal, &bVar2, Function_301(), "p_gen_sackcorn02x", Local_355[12], Vector(0.0f, 320.0f, 0.0f), 0);
				SNAP_OBJECT_TO_GROUND(&uVar120, 6.0f, 1, 1092616192);
				uVar18[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(Local_355[12]), 0,4f, 0);
				GRINGO_UPDATE_BOOL(&(uVar18[1]), "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(&(uVar18[1]), &(uVar31[2]));
				uVar120 = CREATE_PROP_IN_LAYOUT(StackVal, &bVar2, Function_301(), "p_gen_sackcorn02x", Local_365[02], Vector(0.0f, 240.0f, 0.0f), 0);
				SNAP_OBJECT_TO_GROUND(&uVar120, 6.0f, 1, 1092616192);
				uVar18[2] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(Local_365[02]), 0,4f, 0);
				GRINGO_UPDATE_BOOL(&(uVar18[2]), "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(&(uVar18[2]), &(uVar31[3]));
				uVar120 = CREATE_PROP_IN_LAYOUT(StackVal, &bVar2, Function_301(), "p_gen_sackcorn02x", Local_365[12], Vector(0.0f, 260.0f, 0.0f), 0);
				SNAP_OBJECT_TO_GROUND(&uVar120, 6.0f, 1, 1092616192);
				uVar18[3] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/multistage_corn", &(Local_365[12]), 0,4f, 0);
				GRINGO_UPDATE_BOOL(&(uVar18[3]), "UseCase1", "DisableResetProp", 1);
				GRINGO_SET_ALL_USES_OWNERSHIP(&(uVar18[3]), &(uVar31[1]));
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar31[0]), 0);
				UNK_0x99AFD2D1(&(uVar31[0]), 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar31[1]), 0);
				UNK_0x99AFD2D1(&(uVar31[1]), 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iVar30, 0);
				UNK_0x99AFD2D1(&iVar30, 1, 1);
				iVar0 = 3;
				bVar119 = false;
				break;
			
			case 0x00000003:
				Function_250(&uVar31, 4, &bVar41, ScriptParam_0.f_64, 100, 0x42a00000, 1);
				Function_249();
				Function_238(StackVal, Function_249(), &bVar41, ScriptParam_0.f_64, &iVar30, 100, 0x42a00000, 1);
				Function_237(&bVar42);
				if (!iLocal_303)
				{
					if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_402, false))
					{
						iLocal_400 = GET_VEHICLE(&Global_54076);
						TELEPORT_ACTOR(&iVar30, &Local_376, 1, 1, 1);
						iLocal_303 = 1;
						Function_236(&iLocal_402);
						uLocal_379 = Function_228(3, 30, &Global_54076, &(uVar31[0]), 0);
						SET_CRIME_WITNESSED(&uLocal_379, 3);
					}
				}
				if (iLocal_411)
				{
					if (Function_226(&bLocal_457) < 300.0f)
					{
						Function_224("firstTimeChuparosa_timeout", iLocal_411, 1);
						iVar0 = 5;
						break;
					}
				}
				if (Function_223(2048))
				{
					iVar0 = 5;
					break;
				}
				if (!Function_268(ScriptParam_0.f_64, &iVar30, &iVar43, &iVar44, bLocal_391, iLocal_413, 1, 0) || ((Global_6647 || Global_6646) && !bLocal_391))
				{
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				if (!iLocal_411)
				{
					if (Function_284(0))
					{
						iVar1 = 14;
					}
					if (!iLocal_302)
					{
						if (((Function_220(&(uVar31[0]), &iLocal_375, &fLocal_306, 0, 0, 0x40400000) || Function_220(&(uVar31[1]), &iLocal_375, &fLocal_306, 0, 0, 0x40400000)) || Function_220(&(uVar31[2]), &iLocal_375, &fLocal_306, 0, 0, 0x40400000)) || Function_220(&(uVar31[3]), &iLocal_375, &fLocal_306, 0, 0, 0x40400000))
						{
							iLocal_302 = 1;
							switch (iLocal_375)
							{
								case 0x00000001:
									Function_219(&uVar31, 4294967295);
									iLocal_307 = 0;
									while (iLocal_307 <= 4)
									{
										TASK_CLEAR(&(uVar31[iLocal_307]));
										iLocal_307++;
									}
									break;
								
								case 0x00000002:
								case 0x00000010:
									Function_219(&uVar31, 4294967295);
									iLocal_307 = 0;
									while (iLocal_307 <= 4)
									{
										TASK_CLEAR(&(uVar31[iLocal_307]));
										iLocal_307++;
									}
									break;
								
								case 0x00000004:
									iLocal_307 = 0;
									while (iLocal_307 <= 4)
									{
										TASK_CLEAR(&(uVar31[iLocal_307]));
										iLocal_307++;
									}
									Function_219(&uVar31, 4294967295);
									break;
								
								case 0x00000008:
									Function_219(&uVar31, 4294967295);
									Function_218(&(uVar31[iVar45]), &Global_54076);
									break;
								}
							}
						}
				}
				if (bLocal_391)
				{
					Function_217(&iVar103, 1);
					Function_217(&iVar103, 16);
				}
				else
				{
					iVar103 = 0;
				}
				if (Function_220(&iVar30, &iLocal_375, &fLocal_306, iVar103, 0, 0x40400000))
				{
					switch (iLocal_375)
					{
						case 0x00000001:
							Function_224("failAggroDanger", iLocal_411, 1);
							Function_265(&iVar30);
							TASK_FLEE_ACTOR(&iVar30, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							break;
						
						case 0x00000002:
						case 0x00000010:
							Function_224("failAggroShot", iLocal_411, 1);
							Function_265(&iVar30);
							TASK_CLEAR(&iVar30);
							break;
						
						case 0x00000004:
							Function_224("failAggroHostile", iLocal_411, 1);
							Function_265(&iVar30);
							TASK_CLEAR(&iVar30);
							break;
						
						case 0x00000008:
							Function_224("failAggroAttacked", iLocal_411, 1);
							Function_218(&iVar30, &Global_54076);
							break;
					}
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				if (!iLocal_392 && !bLocal_393)
				{
					Function_236(&iLocal_400);
					Function_216("firstTimeChuparosa_wagonsDestroyed", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				if (IS_ACTOR_VALID(&iLocal_400))
				{
					if (!Function_215(&iLocal_400, 1, 1, 4294967295))
					{
						Function_236(&iLocal_400);
						Function_216("firstTimeChuparosa_wagonDestroyed", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = 5;
						bVar119 = false;
						break;
					}
				}
				if (bLocal_387 != 1 && IS_ACTOR_VALID(&iVar30))
				{
					if (!IS_ACTOR_ALIVE(&iVar30))
					{
						Function_224("crimeWagonThief_fail03", iLocal_411, 1);
						iVar0 = 5;
						bVar119 = false;
						break;
					}
				}
				else if (bLocal_387 == 1)
				{
					Function_224("crimeWagonThief_fail03", iLocal_411, 1);
					iVar0 = 5;
					bVar119 = false;
					break;
				}
				if (!iLocal_414)
				{
					if (!Function_212(&uVar31, 4, Function_213(1)))
					{
						iLocal_307 = 0;
						while (iLocal_307 <= 4)
						{
							TASK_CLEAR(&(uVar31[iLocal_307]));
							iLocal_307++;
						}
						iLocal_409 = 3;
						iLocal_414 = 1;
					}
				}
				if (iVar0 != 5)
				{
					switch (iVar1)
					{
						case 0x00000000:
						case 0x00000006:
						case 0x00000001:
						case 0x00000002:
						case 0x00000003:
						case 0x00000007:
							if (!Function_211(StackVal, &Global_54076, Local_381, Function_213(1)))
							{
								Function_224("firstTimeChuparosa_timeout", iLocal_411, 1);
								bVar119 = false;
								iVar0 = 5;
							}
							break;
						
						case 0x00000009:
							if (IS_ACTOR_VALID(&iLocal_400))
							{
								if (!Function_210(&Global_54076, &iLocal_400, Function_213(1)))
								{
									Function_216("firstTimeChuparosa_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
									iVar0 = 5;
									bVar119 = false;
								}
							}
							break;
						
						case 0x00000008:
							bLocal_456 = VDIST(Global_54078, Local_376);
							if (!Function_211(StackVal, &Global_54076, Local_376, fLocal_455))
							{
								Function_216("firstTimeChuparosa_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iVar0 = 5;
								bVar119 = false;
							}
							if (IS_ACTOR_VALID(&iLocal_400))
							{
								if (!Function_210(&Global_54076, &iLocal_400, Function_213(1)))
								{
									Function_216("firstTimeChuparosa_help04", 0x40f00000, 1, 2, 0, 0, 0, 0);
									iVar0 = 5;
									bVar119 = false;
								}
							}
							break;
						}
				}
				Function_112(&iVar1, &iVar99, &iVar30, uVar100, &bVar2, &bVar42, uVar46, &bVar119);
				Function_105(&uVar31, &uVar18);
				if (iVar1 == 14)
				{
					iVar0 = 5;
					bVar119 = false;
				}
				if (iVar1 != 13 && iLocal_409 <= 3)
				{
					iVar0 = 5;
					bVar119 = false;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar119 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar119 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar119);
		}
	}
	if (bLocal_27)
	{
		Function_22(&uLocal_28);
	}
	if (bLocal_463)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_280(&uVar31, 4294967295);
	Function_279(&iVar30);
	Function_279(&iVar36);
	Function_21(&iVar23, 5);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_449))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_449);
	}
	if (bLocal_390)
	{
		Function_20();
	}
	Function_18(&iVar30);
	if (IS_BLIP_VALID(&bLocal_394))
	{
		REMOVE_BLIP(&bLocal_394);
	}
	if (IS_BLIP_VALID(&uLocal_396))
	{
		REMOVE_BLIP(&uLocal_396);
	}
	if (IS_BLIP_VALID(&uLocal_398))
	{
		REMOVE_BLIP(&uLocal_398);
	}
	Function_236(&iLocal_402);
	Function_236(&iLocal_400);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar42)
	{
		Function_256(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (!bVar41)
	{
		Function_17(&iVar36);
		Function_17(&iVar30);
		Function_16(&uVar31, 4294967295);
		if (IS_OBJECT_VALID(&bVar2))
		{
			UNK_0xA936E73B(&bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&bVar2, 1);
		}
	}
	else
	{
		iVar101 = 0;
		while (iVar101 <= 4)
		{
			if (Function_14(&(uVar31[iVar101]), 0))
			{
				RESET_ANIM_SET_FOR_ACTOR(&(uVar31[iVar101]), 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar31[iVar101]), 1);
				UNK_0x99AFD2D1(&(uVar31[iVar101]), 0, 0);
				Function_265(&(uVar31[iVar101]));
				TASK_CLEAR(&(uVar31[iVar101]));
			}
			iVar101++;
		}
		if (Function_14(&iVar30, 0))
		{
			if (bLocal_305)
			{
				RESET_ANIM_SET_FOR_ACTOR(&iVar30, 0);
			}
			TASK_CLEAR(&iVar30);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iVar30, 1);
			UNK_0x99AFD2D1(&iVar30, 0, 0);
			Function_265(&iVar30);
			AI_GOAL_LOOK_CLEAR(&iVar30);
			if (!bLocal_391)
			{
				Function_5(&iVar30, 4, 0, 2);
			}
		}
		if (Function_14(&iVar36, 0))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar36);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iVar36, 1);
			UNK_0x99AFD2D1(&iVar36, 0, 0);
			Function_265(&iVar36);
			RELEASE_ACTOR_AS_AMBIENT(&iVar36);
		}
	}
	if (IS_ACTOR_VALID(&iLocal_402))
	{
		RELEASE_ACTOR(&iLocal_402);
	}
	if (IS_ACTOR_VALID(&iLocal_402))
	{
		RELEASE_ACTOR(&iLocal_402);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar117);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar117);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar118);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar118);
	Function_1(&uVar62);
	RELEASE_LAYOUT_REF(&bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x183A / 6202
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x1862 / 6242
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0x19AD / 6573
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x19CA / 6602
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_5(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x19E8 / 6632
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_6(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_6(&uParam0, &iParam1, &uParam2, &uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_6(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1AD6 / 6870
{
	char* cVar0[32];
	
	Function_13();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_12(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_11(&uParam0, 0);
	Function_10(&uParam0, iParam1);
	Function_9(&uParam0, &uParam2);
	Function_8(&uParam0, uParam3);
	if (Function_7(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_7(int iParam0) //Position: 0x1D42 / 7490
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_8(var uParam0, bool bParam1) //Position: 0x1D66 / 7526
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x1D8A / 7562
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_10(var uParam0, bool bParam1) //Position: 0x1DB0 / 7600
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x1DD7 / 7639
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_12(bool bParam0) //Position: 0x1DFB / 7675
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_13() //Position: 0x1E1A / 7706
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

bool Function_14(int iParam0, bool bParam1) //Position: 0x1E69 / 7785
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_18(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_18(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_15(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_15(int iParam0, int iParam1) //Position: 0x1F14 / 7956
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_16(var[] uParam0, int iParam1) //Position: 0x1F66 / 8038
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_17(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_17(int iParam0) //Position: 0x1F98 / 8088
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

int Function_18(int iParam0) //Position: 0x1FC8 / 8136
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_19(&iParam0);
		return 1;
	}
	return 0;
}

void Function_19(int iParam0) //Position: 0x1FE0 / 8160
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
			uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_20() //Position: 0x2013 / 8211
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_21(var[] uParam0, int iParam1) //Position: 0x203E / 8254
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_22(struct<1093> Param0) //Position: 0x2061 / 8289
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj");
	}
	if (Param0.f_984 == 5)
	{
		if (Function_104(Param0.f_1048, 32768))
		{
			Function_103(256);
		}
	}
	Function_102();
	Function_100(1);
	if (Function_104(Param0.f_1048, 32))
	{
		if (Function_98(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_41(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_38(Param0.f_1092);
					break;
				
				default:
					Function_29(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_23(&Param0, 0);
	}
	if (IS_VOLUME_VALID(&Param0 + 944))
	{
		DESTROY_VOLUME(&Param0 + 944);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		DESTROY_OBJECTSET(&Param0 + 992);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 32))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0 + 32);
		DESTROY_LAYOUT(&Param0 + 32);
	}
	if (Function_104(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_104(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_23(int iParam0, bool bParam1) //Position: 0x21E1 / 8673
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_28(&iParam0 + 1024);
		Function_26(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_25(&iParam0 + 1024);
			Function_28(&iParam0 + 1024);
			Function_24(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_26(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_24(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x2258 / 8792
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_25(int iParam0) //Position: 0x22D1 / 8913
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_26(var uParam0, bool bParam1, bool bParam2) //Position: 0x2309 / 8969
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_27(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
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

bool Function_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2392 / 9106
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_28(int iParam0) //Position: 0x23B2 / 9138
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_29(int iParam0) //Position: 0x23E7 / 9191
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_30("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x243A / 9274
{
	struct<4> Var0;
	
	if (!Function_98(iParam1))
	{
		return;
	}
	switch (Function_35(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_31(Function_33(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_35(iParam1), Function_33(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_35(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_31(int iParam0) //Position: 0x2564 / 9572
{
	char* cVar0[16];
	
	if (!Function_32())
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

bool Function_32() //Position: 0x259E / 9630
{
	if (Function_104(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_33(int iParam0) //Position: 0x25B9 / 9657
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_34(int iParam0) //Position: 0x25D9 / 9689
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x25F0 / 9712
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_36() //Position: 0x260B / 9739
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_37(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_37(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2852 / 10322
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_38(int iParam0) //Position: 0x287E / 10366
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_98(iParam0))
	{
		return;
	}
	iVar0 = Function_35(iParam0);
	if (StackVal == 2)
	{
		Function_30("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_39(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_39(int iParam0) //Position: 0x2924 / 10532
{
	char* cVar0[16];
	
	if (!Function_32())
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

struct<24> Function_40(char* cParam0) //Position: 0x2963 / 10595
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

void Function_41(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2BB9 / 11193
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	bVar0 = Function_35(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_97())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_33(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_39(Global_10966) };
		}
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_91();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_97())
	{
		Function_90();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_30("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_84(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
						switch (Function_33(iParam0))
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
			Function_44(1);
			Function_43(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_42(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_42(int iParam0, struct<41> Param1) //Position: 0x2E17 / 11799
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_43(bool bParam0, int iParam1) //Position: 0x2E55 / 11861
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_44(bool bParam0) //Position: 0x2E94 / 11924
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_75();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_46();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_45(&Global_99144, 1);
		Function_45(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x2EE9 / 12009
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_46() //Position: 0x2EFF / 12031
{
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_54(0);
	Function_54(0);
	Function_51();
	Function_50();
	Function_49();
	Function_48();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_47();
	return;
}

void Function_47() //Position: 0x2F4A / 12106
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_48() //Position: 0x3050 / 12368
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_49() //Position: 0x3083 / 12419
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_50() //Position: 0x3216 / 12822
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_51() //Position: 0x33CF / 13263
{
	Function_52(&Global_42918, 1, 0);
	return;
}

void Function_52(struct<2317> Param0) //Position: 0x33DD / 13277
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_53();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_53() //Position: 0x35FA / 13818
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_54(int iParam0) //Position: 0x360F / 13839
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
					iVar2 = ((Function_69((50 + iVar4)) + Function_69((183 + iVar4))) + Function_69((90 + iVar4)));
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
	Function_55(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x36B6 / 14006
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_68(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (&bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x3952 / 14674
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_66(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_60(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_301(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_57(int iParam0) //Position: 0x3F90 / 16272
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3FA1 / 16289
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0) //Position: 0x4099 / 16537
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x40B4 / 16564
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_62(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x411B / 16667
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x412D / 16685
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x413F / 16703
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_64(int iParam0) //Position: 0x4273 / 17011
{
	return Global_55480[iParam016].f_96;
}

float Function_65(int iParam0) //Position: 0x4282 / 17026
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_66(int iParam0) //Position: 0x42BB / 17083
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_67(int iParam0) //Position: 0x42F8 / 17144
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x4492 / 17554
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_69(bool bParam0) //Position: 0x46D6 / 18134
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_70() //Position: 0x4717 / 18199
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
		iVar2 = ((Function_69((50 + iVar3) + 15) + Function_69((183 + iVar3) + 15)) + Function_69((90 + iVar3) + 15));
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
	Function_55(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_71() //Position: 0x47A0 / 18336
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
			iVar2 = ((Function_69((50 + iVar3) + 8) + Function_69((183 + iVar3) + 8)) + Function_69((90 + iVar3) + 8));
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
	Function_55(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x4837 / 18487
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
		iVar2 = ((Function_69((50 + iVar3)) + Function_69((183 + iVar3))) + Function_69((90 + iVar3)));
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
	Function_55(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_73() //Position: 0x48B6 / 18614
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_74(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_55(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_74(int iParam0, bool bParam1, int iParam2) //Position: 0x48F3 / 18675
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_68(iParam0, bParam1, 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_56(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_75() //Position: 0x4AFF / 19199
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_32())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_77(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_77(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_76(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_76(char* cParam0) //Position: 0x4BB6 / 19382
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_77(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4BCE / 19406
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_217(&Global_99144, 1);
			Function_45(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_217(&Global_99144, 2);
			Function_45(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_217(&Global_99144, 2);
		Function_45(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_249();
	return StackVal, Function_249();
}

bool Function_78(int iParam0) //Position: 0x4CC6 / 19654
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x4CDC / 19676
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x4DA8 / 19880
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x4DC5 / 19909
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_82(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_217(&Global_99144, 2);
	Function_45(&Global_99144, 1);
	iParam1 = 0;
	if (Function_76(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x55F1 / 22001
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_104(uVar0, 0x1000000) || Function_104(uVar0, 0x2000000)) || Function_104(uVar0, 0x4000000)) || !Function_104(uVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x562C / 22060
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x563B / 22075
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(iParam0))
	{
		return;
	}
	switch (Function_35(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_33(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_88(12, 1, 0, 0);
				Function_87(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_88(13, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_88(14, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_88(15, 1, 0, 0);
				Function_87(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_88(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_33(iParam0))
			{
				case 0x00000000:
					if (Function_291(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_87(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_87(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_87(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_87(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_87(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_87(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_87(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_87(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_87(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_87(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_87(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_87(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_87(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_87(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_87(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_87(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_87(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_87(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_87(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_87(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_88(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_88(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_88(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_291(iParam0) == 1)
				{
					Function_88(458, 1, 0, 0);
					iVar0 = Function_33(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_87(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_87(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_87(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_87(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_87(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_87(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_87(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_87(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_291(iParam0) == 1)
			{
				Function_88(400, 1, 0, 0);
			}
			switch (Function_33(iParam0))
			{
				case 0x00000001:
					Function_88(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_87(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_87(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_88(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_87(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 9);
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

bool Function_85(int iParam0) //Position: 0x5B17 / 23319
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x5B2D / 23341
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

void Function_87(int iParam0, int iParam1) //Position: 0x5B4C / 23372
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5BB6 / 23478
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_68(iParam0, TO_FLOAT(bParam1), 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_89(iParam0);
	return 1;
}

void Function_89(int iParam0) //Position: 0x5DDE / 24030
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_90() //Position: 0x5E7C / 24188
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_69(0));
	PLAYSTAT_INT("HC_FAME", Function_69(3));
	PLAYSTAT_INT("HC_HONOR", Function_69(1));
	return;
}

void Function_91() //Position: 0x5FDE / 24542
{
	int iVar0;
	int iVar1;
	
	if (!Function_96(Global_10966))
	{
		return;
	}
	iVar0 = Function_69(24);
	iVar1 = Function_95(Global_10966);
	if (!Function_96(iVar0) && Function_94(iVar1) < 0)
	{
		Function_55(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_94(Function_95(iVar0)))
	{
		Function_55(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_92(int iParam0, char* cParam1) //Position: 0x605E / 24670
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x63B5 / 25525
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_94(int iParam0) //Position: 0x643D / 25661
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_95(int iParam0) //Position: 0x6457 / 25687
{
	if (!Function_96(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96(int iParam0) //Position: 0x6471 / 25713
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_97() //Position: 0x6487 / 25735
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_98(int iParam0) //Position: 0x64B2 / 25778
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	if (!Function_99(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_99(int iParam0) //Position: 0x64D6 / 25814
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_100(int iParam0) //Position: 0x64EB / 25835
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_101())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_101() //Position: 0x652B / 25899
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_102() //Position: 0x6550 / 25936
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_103(int iParam0) //Position: 0x6566 / 25958
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

bool Function_104(bool bParam0, int iParam1) //Position: 0x6583 / 25987
{
	return (bParam0 && iParam1) == 0;
}

void Function_105(float[] fParam0) //Position: 0x6590 / 26000
{
	bool bVar0;
	
	if (iLocal_304 == 0)
	{
		if (iLocal_411 == 1)
		{
			iLocal_304 = 1;
			Function_219(&fParam0, 4294967295);
		}
	}
	iLocal_307 = 0;
	while (iLocal_307 <= 4)
	{
		if (IS_ACTOR_VALID(&(fParam0[iLocal_307])))
		{
			if (!(GET_TASK_STATUS(&(fParam0[iLocal_307]), 19) != 3 || GET_TASK_STATUS(&(fParam0[iLocal_307]), 19) != 1))
			{
				TASK_WANDER_IN_VOLUME(&(fParam0[iLocal_307]), &uLocal_453, -1.0f);
			}
		}
		iLocal_307++;
	}
	switch (iLocal_409)
	{
		case 0x00000000:
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(fParam0[1]), 1.0f, 30.0f, 1, 1, 0) || CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(fParam0[0]), 1.0f, 30.0f, 1, 1, 0)) || Function_110(&bLocal_404, 5.0f))
			{
				Function_108(&(fParam0[1]), &(fParam0[0]), "firstTimeChuparosa_msg03", "firstTimeChuparosa_msg03", 5, 60, 0, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(fParam0[1]), 1);
				UNK_0x99AFD2D1(&(fParam0[1]), 0, 0);
				if (IS_GRINGO_VALID(&(iParam1[1])))
				{
					TASK_USE_GRINGO(&(fParam0[0]), &(iParam1[1]), "UseCase1", 1, 1);
				}
				if (IS_GRINGO_VALID(&(iParam1[0])))
				{
					TASK_USE_GRINGO(&(fParam0[3]), &(iParam1[0]), "UseCase1", 1, 1);
				}
				Function_298(&bLocal_404, 0.0f);
				iLocal_409 = 1;
			}
			break;
		
		case 0x00000001:
			if (iLocal_411 || iLocal_412)
			{
				if (Function_106(&Global_54076, &iLocal_402) > 60.0f)
				{
					Function_108(&(fParam0[0]), &(fParam0[1]), "firstTimeChuparosa_msg04", "firstTimeChuparosa_msg04", 5, 60, 0, 1);
					DECOR_SET_FLOAT(&(fParam0[1]), "workerTimer", GET_CURRENT_GAME_TIME());
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(fParam0[0]), 1);
					UNK_0x99AFD2D1(&(fParam0[0]), 0, 0);
					if (IS_GRINGO_VALID(&(iParam1[2])))
					{
						AI_QUICK_EXIT_GRINGO(&(fParam0[2]), 1);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, GET_OBJECT_FROM_GRINGO(&(iParam1[1])), 5.0f, 1, 0, 1);
						TASK_USE_GRINGO(false, &(iParam1[2]), "UseCase1", 1, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(fParam0[2]), bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
					if (IS_GRINGO_VALID(&(iParam1[3])))
					{
						AI_QUICK_EXIT_GRINGO(&(fParam0[1]), 1);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, GET_OBJECT_FROM_GRINGO(&(iParam1[3])), 5.0f, 1, 0, 1);
						TASK_USE_GRINGO(false, &(iParam1[3]), "UseCase1", 1, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(fParam0[1]), bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
					iLocal_409 = 2;
				}
			}
			break;
		
		case 0x00000002:
			iLocal_307 = 0;
			while (iLocal_307 <= 4)
			{
				if (IS_ACTOR_VALID(&(fParam0[iLocal_307])))
				{
					if (GET_TASK_STATUS(&(fParam0[iLocal_307]), 19) == 0)
					{
						uLocal_308 = Vector(-2698,77f, 33,394f, 4287,308f);
						bVar0 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &uLocal_308, 3,3f, 1);
						TASK_WANDER(0, -1.0f);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&(fParam0[iLocal_307]), bVar0);
						TASK_SEQUENCE_RELEASE(bVar0, 1);
					}
				}
				iLocal_307++;
			}
			if (((GET_TASK_STATUS(&(fParam0[0]), 0) >= 1 && GET_TASK_STATUS(&(fParam0[1]), 0) >= 1) && GET_TASK_STATUS(&(fParam0[2]), 0) >= 1) && GET_TASK_STATUS(&(fParam0[3]), 0) >= 1)
			{
				iLocal_409 = 3;
			}
			break;
		
		case 0x00000003:
			iLocal_307 = 0;
			while (iLocal_307 <= 4)
			{
				if (IS_ACTOR_VALID(&(fParam0[iLocal_307])))
				{
					TASK_CLEAR(&(fParam0[iLocal_307]));
				}
				iLocal_307++;
			}
			iLocal_409 = 4;
			break;
	}
	return;
}

float Function_106(bool bParam0, bool bParam1) //Position: 0x6977 / 26999
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_107(&bParam0);
			Var0 = Function_107(&bParam0);
			Function_107(&bParam1);
			Var2 = Function_107(&bParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_107(bool bParam0) //Position: 0x6A14 / 27156
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		GET_OBJECT_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_108(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6A82 / 27266
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_109(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &iParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

float Function_109(var uParam0, int iParam1) //Position: 0x6B2F / 27439
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_110(bool bParam0, float fParam1) //Position: 0x6C24 / 27684
{
	if (Function_111(&bParam0))
	{
		if (Function_226(&bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_111(bool bParam0) //Position: 0x6C42 / 27714
{
	return Function_104(bParam0, 1);
}

int Function_112(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x6C50 / 27728
{
	switch (uParam0)
	{
		case 0x0000000E:
			break;
		
		case 0x00000000:
			uParam7 = 0;
			if (Function_109(&Global_54076, &iParam2) > 100.0f)
			{
				if (Function_209(&iParam2, &Global_54076, &uParam1, &uParam4, 55.0f, &bLocal_387, &uLocal_385, &bLocal_404, &iLocal_408, 0x41600000, 1, 2, 3231711232, 0, 0, 0))
				{
					if (bLocal_387)
					{
						bLocal_391 = true;
						Function_108(&iParam2, &Global_54076, "firstTimeChuparosa_msg01", "firstTimeChuparosa_msg01", 5, 60, 1, 1);
						bLocal_394 = ADD_BLIP_FOR_ACTOR(&iParam2, 325, 0.0f, 3, 0);
						uParam5 = 1;
						Function_208(uParam3, 2);
						AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam2, &Global_54076, -1.0f, 1);
						Function_207(&bLocal_457);
						uParam0 = 1;
						Function_298(&bLocal_404, 0.0f);
					}
				}
				else
				{
					TASK_WANDER(&iParam2, -1.0f);
					uParam0 = 13;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_110(&bLocal_404, 3.0f))
			{
				Function_216("firstTimeChuparosa_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_307 = Function_204();
				if (!Function_76(StackVal, Local_415[iLocal_3072]))
				{
					SET_OBJECT_POSITION_ON_GROUND(&uLocal_313, Local_415[iLocal_3072]);
					SET_OBJECT_ORIENTATION(&uLocal_313, Local_429[iLocal_3072]);
					RESET_ANIM_SET_FOR_ACTOR(&iParam2, 1);
					TASK_USE_GRINGO(&iParam2, GET_GRINGO_FROM_OBJECT(&uLocal_313), "UseCase1", 4294967295, 2);
					AI_GOAL_LOOK_CLEAR(&iParam2);
					iLocal_410 = 0;
					Function_298(&bLocal_404, 0.0f);
					Function_207(&bLocal_457);
					uParam0 = 2;
				}
				else
				{
					SET_OBJECT_POSITION_ON_GROUND(&uLocal_313, Local_415[02]);
					SET_OBJECT_ORIENTATION(&uLocal_313, Local_429[02]);
					RESET_ANIM_SET_FOR_ACTOR(&iParam2, 1);
					TASK_USE_GRINGO(&iParam2, GET_GRINGO_FROM_OBJECT(&uLocal_313), "UseCase1", 4294967295, 2);
					AI_GOAL_LOOK_CLEAR(&iParam2);
					iLocal_410 = 0;
					Function_298(&bLocal_404, 0.0f);
					Function_207(&bLocal_457);
					uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (GET_TASK_STATUS(&iParam2, 19) != 1 && IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&iParam2))))
			{
				if (ACTORS_IN_RANGE(&iParam2, &Global_54076, 14.0f))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam2, 1);
					TASK_CLEAR(&iParam2);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam2, &Global_54076, -1.0f, 1);
					Function_203(&iLocal_410, &iParam2, 3212836864);
					Function_298(&bLocal_404, 0.0f);
					Function_207(&bLocal_457);
					uParam0 = 3;
				}
				if (Function_110(&bLocal_404, (15.0f + 5.0f)))
				{
					iLocal_412 = 1;
					DESTROY_OBJECT(&uLocal_313);
					REMOVE_BLIP(&bLocal_394);
					TASK_WANDER(&iParam2, -1.0f);
					uParam0 = 13;
				}
			}
			else
			{
				Function_207(&bLocal_404);
			}
			break;
		
		case 0x00000003:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam2, 1.0f, 10.0f, 1, 1, 0))
			{
				if (Function_203(&iLocal_410, &iParam2, 3212836864))
				{
					Function_201();
					Function_108(&iParam2, &Global_54076, "firstTimeChuparosa_msg02", "firstTimeChuparosa_msg02", 5, 60, 1, 1);
					Function_298(&bLocal_404, 0.0f);
					Function_207(&bLocal_457);
					uParam0 = 4;
				}
				if (Function_110(&bLocal_404, 15.0f))
				{
					iLocal_412 = 1;
					DESTROY_OBJECT(&uLocal_313);
					REMOVE_BLIP(&bLocal_394);
					TASK_WANDER(&iParam2, -1.0f);
					uParam0 = 13;
				}
			}
			else
			{
				Function_207(&bLocal_404);
			}
			break;
		
		case 0x00000004:
			if (!IS_AMBIENT_SPEECH_PLAYING(&iParam2))
			{
				AI_GOAL_LOOK_CLEAR(&iParam2);
				RESET_ANIM_SET_FOR_ACTOR(&iParam2, 1);
				uLocal_451 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam4, Function_301(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 4.0f, 15.0f));
				uLocal_449 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("firstTimeChuparosa_context", &uLocal_451, 10, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&uLocal_451), &iParam2, Function_301(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				Function_207(&bLocal_404);
				Function_207(&bLocal_457);
				uParam0 = 5;
			}
			if (Function_110(&bLocal_404, 15.0f))
			{
				iLocal_412 = 1;
				DESTROY_OBJECT(&uLocal_313);
				REMOVE_BLIP(&bLocal_394);
				TASK_WANDER(&iParam2, -1.0f);
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_449);
				DESTROY_VOLUME(&uLocal_451);
				uParam0 = 13;
			}
			break;
		
		case 0x00000005:
			if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_449))
			{
				Function_200(&uLocal_28, Function_292(1, 3, 2));
				Function_176(StackVal, &uLocal_28, 0, 4294967295, Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
				Function_145(&uLocal_28);
				bLocal_27 = true;
				Function_143(&iLocal_464, 7, 0, 4294967295, 4294967295);
				AI_GOAL_LOOK_CLEAR(&iParam2);
				if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
				{
					Function_108(&Global_54076, &iParam2, "firstTimeChuparosaPlayer_msg01", 0, 5, 60, 1, 1);
				}
				Function_19(&iParam2);
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_449);
				DESTROY_VOLUME(&uLocal_451);
				iLocal_413 = 0;
				iLocal_411 = 1;
				Function_207(&bLocal_457);
				uParam0 = 6;
			}
			if (!iLocal_411)
			{
				if (Function_110(&bLocal_404, 15.0f))
				{
					iLocal_412 = 1;
					DESTROY_OBJECT(&uLocal_313);
					REMOVE_BLIP(&bLocal_394);
					TASK_WANDER(&iParam2, -1.0f);
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_449);
					DESTROY_VOLUME(&uLocal_451);
					uParam0 = 13;
				}
			}
			break;
		
		case 0x00000006:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				SET_OBJECT_POSITION_ON_GROUND(&uLocal_313, Local_376);
				SET_OBJECT_ORIENTATION(StackVal, &uLocal_313, Vector(0.0f, 240.0f, 0.0f));
				iLocal_307 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &Local_376, 5.0f, 3);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&uLocal_313), "UseCase1", 4294967295, 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam2, iLocal_307);
				TASK_SEQUENCE_RELEASE(bLocal_307, 1);
				iLocal_410 = 0;
				uLocal_396 = ADD_BLIP_FOR_ACTOR(&iLocal_402, 325, 0.0f, 3, 0);
				SET_BLIP_NAME(&uLocal_396, "firstTimeChuparosa_supply_wagon");
				SET_BLIP_BLINK(&uLocal_396, 1, 0, 5f);
				Function_216("firstTimeChuparosa_help01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_207(&bLocal_457);
				uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&iLocal_400))
			{
				if (Function_284(0) && &Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false))
				{
					Function_216("firstTimeChuparosa_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					uParam0 = 9;
				}
			}
			if (iLocal_392)
			{
				if (!Function_215(&iLocal_402, 1, 1, 4294967295))
				{
					iLocal_392 = 0;
					Function_236(&iLocal_402);
				}
			}
			break;
		
		case 0x00000009:
			Function_207(&bLocal_457);
			Function_140();
			Function_143(&iLocal_464, 10, 0, 4294967295, 4294967295);
			if (!Function_215(&iLocal_400, 1, 1, 4294967295))
			{
				Function_236(&iLocal_400);
			}
			if (&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false) && !Function_284(0))
			{
				Function_143(&iLocal_464, 11, 0, 4294967295, 4294967295);
				GET_OBJECT_POSITION(&iParam2, &Local_443);
				fLocal_455 = VDIST(Local_443, Global_54078);
				fLocal_455 = (fLocal_455 + 200.0f);
				bLocal_394 = ADD_BLIP_FOR_ACTOR(&iParam2, 325, 0.0f, 3, 0);
				SET_BLIP_NAME(&bLocal_394, GET_ACTOR_ENUM_STRING(&iParam2));
				SET_BLIP_BLINK(&bLocal_394, 1, 0, 5f);
				Function_216("firstTimeChuparosa_help02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			Function_140();
			if (!Function_215(&iLocal_400, 1, 1, 4294967295))
			{
				Function_236(&iLocal_400);
			}
			if (Function_284(0))
			{
				Function_19(&iParam2);
				Function_216("firstTimeChuparosa_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				uParam0 = 9;
			}
			if (iLocal_389)
			{
				if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false))
				{
					if (Function_109(&Global_54076, &iParam2) > 50.0f)
					{
						if (Function_203(&iLocal_410, &iParam2, 3212836864))
						{
							SET_ANIM_SET_FOR_ACTOR(&iParam2, "Stolen_Pleading_Panic_Return", 0);
							SET_ACTION_NODE_FOR_ACTOR(&iParam2, "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
							bLocal_305 = true;
							iLocal_389 = 0;
						}
					}
				}
			}
			if (Function_109(&iLocal_400, &iParam2) > 14.0f)
			{
				if (!iLocal_388)
				{
					Function_216("firstTimeChuparosa_help03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					RESET_ANIM_SET_FOR_ACTOR(&iParam2, 1);
					iLocal_388 = 1;
				}
				if (&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false))
				{
					Function_143(&iLocal_464, 3, 0, 4294967295, 4294967295);
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						Function_108(&Global_54076, &iParam2, "firstTimeChuparosaPlayer_msg02", 0, 5, 60, 1, 1);
					}
					Function_236(&iLocal_400);
					uParam0 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_207(&bLocal_457);
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				Function_108(&iParam2, &Global_54076, "firstTimeChuparosa_msg05", "firstTimeChuparosa_msg05", 5, 60, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(&iParam2, 1);
				SET_ANIM_SET_FOR_ACTOR(&iParam2, "thanks", 0);
				SET_ACTION_NODE_FOR_ACTOR(&iParam2, "thanks");
				bLocal_305 = false;
				Function_236(&iParam2);
				Function_236(&iLocal_400);
				Function_139(bParam6, 1, 1);
				Function_135(4294967196, 1, 0);
				Function_116(20, 1, 0);
				Function_115(14);
				iLocal_411 = 0;
				uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_207(&bLocal_457);
			if (!IS_AMBIENT_SPEECH_PLAYING(&iParam2) && !Function_114(&iParam2, &iLocal_400, 0))
			{
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iParam2, &iLocal_400, 0, 4, 1);
			}
			if (Function_114(&iParam2, &iLocal_400, 0))
			{
				Function_108(&iParam2, &Global_54076, "firstTimeChuparosa_msg06", "firstTimeChuparosa_msg06", 5, 60, 1, 1);
				uParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_207(&bLocal_457);
			if (!IS_AMBIENT_SPEECH_PLAYING(&iParam2))
			{
				Function_19(&iParam2);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam2, 1);
				UNK_0x99AFD2D1(&iParam2, 0, 0);
				Function_113(StackVal, &iParam2, Vector(0.0f, 0.0f, 0.0f), 16, 4, 2, 1);
				uParam0 = 13;
			}
			break;
		
		case 0x0000000D:
			break;
	}
	return 0;
}

void Function_113(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x772E / 30510
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideCurve", &iParam3);
	}
	if (!Function_76(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&uParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&uParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&uParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&uParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
}

bool Function_114(int iParam0, int iParam1, bool bParam2) //Position: 0x784D / 30797
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_115(int iParam0) //Position: 0x7877 / 30839
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_88(409, 1, 0, 0);
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x78A8 / 30888
{
	int iVar0;
	bool bVar1;
	
	if (Function_134(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_69(3);
	Function_131();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_129(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_128(Global_119936, 4))
			{
				Function_123(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_88(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_65(3));
	iVar0 = Function_69(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_118(4, Function_122(Global_21369.f_248), 1);
				Function_117(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_118(4, Function_122(Global_21369.f_248), 1);
				Function_117(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_118(4, Function_122(Global_21369.f_248), 1);
				Function_117(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_118(4, Function_122(Global_21369.f_248), 1);
				Function_117(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_118(4, Function_122(Global_21369.f_248), 1);
				Function_117(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_117(int iParam0, int iParam1) //Position: 0x7A7C / 31356
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_118(int iParam0, char* cParam1) //Position: 0x7CE6 / 31974
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_92(iParam0, &cParam1, 0, 1);
	iVar1 = Function_119();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_119() //Position: 0x7E76 / 32374
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_120();
	return 0;
}

void Function_120() //Position: 0x7F17 / 32535
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_121(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_121(int iParam0) //Position: 0x7FD5 / 32725
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_122(int iParam0) //Position: 0x803C / 32828
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

void Function_123(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x80CB / 32971
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_125(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_124(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_124(char* cParam0) //Position: 0x8140 / 33088
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_125(int iParam0, var uParam1, int iParam2) //Position: 0x817A / 33146
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_127(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_126(uVar0))
		{
			case 0x00000002:
				if (!Function_128(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_126(char* cParam0) //Position: 0x81F6 / 33270
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

int Function_127(int iParam0) //Position: 0x8297 / 33431
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_45(&iVar1, 2147483648);
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

bool Function_128(var uParam0, int iParam1) //Position: 0x82D4 / 33492
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_129(int iParam0, bool bParam1) //Position: 0x82E7 / 33511
{
	bool bVar0;
	int iVar1;
	
	Function_88(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_130(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_119();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_130(int iParam0, int iParam1) //Position: 0x8493 / 33939
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_131() //Position: 0x84D8 / 34008
{
	Function_133(3, 0.0f);
	Function_132(3, 10000.0f);
	return;
}

int Function_132(int iParam0, int iParam1) //Position: 0x84EE / 34030
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_133(int iParam0, int iParam1) //Position: 0x852E / 34094
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_134(int iParam0) //Position: 0x856E / 34158
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_135(int iParam0, bool bParam1, bool bParam2) //Position: 0x857D / 34173
{
	int iVar0;
	bool bVar1;
	
	if (Function_134(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_69(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_129(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_128(Global_119936, 1))
				{
					Function_123(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_138(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_128(Global_119936, 2))
				{
					Function_123(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_88(1, bVar1, 0, 0);
	}
	else
	{
		Function_137(1, (4294967295 * bVar1), 0);
	}
	if (Function_69(1) <= 4294962296)
	{
		Function_55(1, 4294962296, 0);
	}
	else if (Function_69(1) >= 5000)
	{
		Function_55(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_65(1));
	iVar0 = Function_69(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_118(2, Function_136(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_118(2, Function_136(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_118(2, Function_136(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_118(2, Function_136(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_118(2, Function_136(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_118(2, Function_136(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_118(2, Function_136(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_118(2, Function_136(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_118(2, Function_136(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_118(2, Function_136(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_118(2, Function_136(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_118(2, Function_136(Global_21369.f_244), 0);
			}
			break;
	}
	Function_117(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_136(int iParam0) //Position: 0x88A4 / 34980
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

int Function_137(int iParam0, bool bParam1, int iParam2) //Position: 0x8947 / 35143
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_138(int iParam0, bool bParam1) //Position: 0x8B44 / 35652
{
	bool bVar0;
	int iVar1;
	
	Function_137(iParam0, bParam1, 0);
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
	iVar1 = Function_130(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_119();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_139(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8CEF / 36079
{
	bool bVar0;
	
	bVar0 = Function_69(0);
	if ((Function_69(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_88(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_69(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_88(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_69(597) + Function_69(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_140() //Position: 0x8DC1 / 36289
{
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_400)))
	{
		if (!&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false))
		{
			ADD_BLIP_FOR_ACTOR(&iLocal_400, 325, 0.0f, 3, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&iLocal_400), "firstTimeChuparosa_supply_wagon");
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_400)))
	{
		if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
		{
			if (&Global_54076 == GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_402, false))
			{
				Function_236(&iLocal_400);
				iLocal_400 = GET_VEHICLE(&Global_54076);
			}
		}
	}
	if (bLocal_390 == 1)
	{
		if (Function_284(0) || !&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false))
		{
			bLocal_390 = false;
			Function_20();
		}
	}
	else if (bLocal_390 == 0)
	{
		if (&Global_54076 != GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_400, false) && !Function_284(0))
		{
			bLocal_390 = true;
			Function_141(StackVal, Local_376, 2, 48, 1);
		}
	}
	return;
}

void Function_141(struct<2> Param0, var uParam2, var uParam3, var uParam4) //Position: 0x8EAF / 36527
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = uParam3;
	if (uParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (uParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_142(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_142(int iParam0) //Position: 0x8F70 / 36720
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

void Function_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x8FB9 / 36793
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_144(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_144(int iParam0) //Position: 0x8FE3 / 36835
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return &iVar0;
}

void Function_145(struct<1093> Param0) //Position: 0x9538 / 38200
{
	if (Function_104(Param0.f_1048, 4))
	{
		Function_175();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_174(1);
	if (Function_104(Param0.f_1048, 32))
	{
		if (Function_34(Param0.f_1092))
		{
			Function_173(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_23(&Param0, 0);
	}
	Function_217(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_104(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_146(&Param0, 1);
	return;
}

void Function_146(struct<1089> Param0) //Position: 0x95C7 / 38343
{
	int iVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				iVar0 = Function_172(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_171(&Param0) != 1)
				{
					Function_148(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_135(200, 1, 0);
				}
				else
				{
					Function_116(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_139(Param0.f_616, 1, 1);
				}
				else
				{
					Function_147(Param0.f_616, 1);
				}
			}
			else if (Param0.f_1088 == 3)
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

int Function_147(bool bParam0, bool bParam1) //Position: 0x96AC / 38572
{
	bool bVar0;
	
	bVar0 = Function_69(0);
	if ((Function_69(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_137(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_69(0));
	return 1;
}

void Function_148(int iParam0, char* cParam1, bool bParam2) //Position: 0x973D / 38717
{
	char* cVar0[32];
	
	if (!Function_170(3))
	{
		return;
	}
	if (Function_32())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (&bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_169())
						{
							Function_149(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_149(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_149(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_169())
					{
						Function_149(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_149(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_149(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_149(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_149(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x9853 / 38995
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_168(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_170(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_167(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_166(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_165(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_164(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_166(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_163(0, 0, 1, 1))
			{
				Function_44(1);
				Function_43(1, 0);
			}
			else
			{
				Function_162();
			}
		}
		Function_157(bParam0);
		if (StackVal && !Function_104(((((!Function_156() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_104((((Function_156() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_32())
		{
			if (!Function_128(Global_119934, 2))
			{
				Function_123(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_151();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_150(3, bParam1);
				break;
			
			case 0x00000005:
				Function_150(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_150(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_150(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_150(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_150(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_150(int iParam0, bool bParam1) //Position: 0x9AF2 / 39666
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_151() //Position: 0x9B61 / 39777
{
	if (Function_168(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_155(Global_42827);
			(&Global_42827 + 8) = Function_152(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_155(Global_42827);
			*(&Global_42827 + 8) = Function_152(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_152(int iParam0, int iParam1) //Position: 0x9BE1 / 39905
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_154(6, 0) || Function_154(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_153(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_154(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_153(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_153(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_153(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_153(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_154(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_153(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_153(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_153(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_153(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_153(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_153(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_153(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_154(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_153(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_154(6, 0) && Function_153(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_153(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_154(9, 0) && Function_153(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_153(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_154(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_76(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_76(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_76(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_153(int iParam0) //Position: 0xA844 / 43076
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_154(int iParam0, bool bParam1) //Position: 0xA859 / 43097
{
	int iVar0;
	
	iVar0 = Function_95(iParam0);
	if (!Function_34(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_155(int iParam0) //Position: 0xA897 / 43159
{
	int iVar0;
	int iVar1;
	
	if (!Function_168(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_156() //Position: 0xA8E6 / 43238
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_157(bool bParam0) //Position: 0xA913 / 43283
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_164(bParam0, Function_161(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_164(bParam0, Function_161(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_160(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_159(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_158(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_158(int iParam0) //Position: 0xAAC3 / 43715
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_168(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_159(var uParam0, int iParam1) //Position: 0xAB1A / 43802
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

var Function_160(int iParam0) //Position: 0xAB3F / 43839
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_168(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_161(bool bParam0) //Position: 0xAB95 / 43925
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_162() //Position: 0xABA1 / 43937
{
	return;
}

bool Function_163(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xABA7 / 43943
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_164(bool bParam0, int iParam1) //Position: 0xAC56 / 44118
{
	int iVar0;
	
	if (!Function_168(bParam0))
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

void Function_165(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xACB5 / 44213
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_39(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_166(int iParam0, int iParam1) //Position: 0xAD40 / 44352
{
	if (!Function_168(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_167(int iParam0, int iParam1) //Position: 0xAD95 / 44437
{
	int iVar0;
	
	if (!Function_168(iParam0))
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

bool Function_168(int iParam0) //Position: 0xADC2 / 44482
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_169() //Position: 0xADD8 / 44504
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_104(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_170(int iParam0) //Position: 0xAE08 / 44552
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_171(struct<1049> Param0) //Position: 0xAE24 / 44580
{
	return !Function_104(Param0.f_1048, 16384);
}

var Function_172(struct<921> Param0) //Position: 0xAE37 / 44599
{
	return Param0.f_920;
}

void Function_173(int iParam0, int iParam1) //Position: 0xAE43 / 44611
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		Function_36();
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
	iVar0 = Function_35(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_44(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_33(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_174(int iParam0) //Position: 0xAEAB / 44715
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_101())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_175() //Position: 0xAEE4 / 44772
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_176(struct<1093> Param0) //Position: 0xAEFA / 44794
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_199(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_76(StackVal, Param3))
	{
		(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_217(&Param0 + 1048, 4);
	}
	else
	{
		Function_45(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_34(Param0.f_1092))
		{
			Function_198(Param0.f_1092, 1);
			Function_217(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_217(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_180(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_179(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_207(&Param0 + 1032);
	}
	Function_207(&Param0 + 60);
	Function_177(0);
}

void Function_177(int iParam0) //Position: 0xB071 / 45169
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_178(105)), 0);
	return;
}

int Function_178(int iParam0) //Position: 0xB094 / 45204
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_179(var uParam0, bool bParam1) //Position: 0xB0AB / 45227
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_180(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5) //Position: 0xB0F2 / 45298
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_194(10.0f);
	Var12 = { StackVal, Function_194(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_193(&bParam4) || &bParam4 != 0)
		{
			bVar14 = Function_183(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &bParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_181(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_181(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_181(vector3 vParam0) //Position: 0xB1EC / 45548
{
	struct<2> Var0;
	
	if (!Function_182(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_182(int iParam0) //Position: 0xB339 / 45881
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

var Function_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB35D / 45917
{
	return Function_184(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_184(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xB37A / 45946
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_187(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_187(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_187(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_187(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_187(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_187(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_187(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_187(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_187(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_187(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_187(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_187(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_187(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_187(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_185(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_185(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0xB5DD / 46557
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_186(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_186(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_186(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_186(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_186(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_186(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_186(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_186(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_186(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_186(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_186(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_186(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_186(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_186(&(Global_46972[13]), &bVar0);
	}
	return Function_187(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_186(var uParam0, bool bParam1) //Position: 0xB74C / 46924
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_187(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xB810 / 47120
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_192();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_193(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_191(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_191(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_190(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_193(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_190(bVar0))
				{
					Function_189();
				}
				Function_188(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_193(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
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

void Function_188(int iParam0) //Position: 0xBB09 / 47881
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_189() //Position: 0xBBBD / 48061
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_190(bool bParam0) //Position: 0xBBF8 / 48120
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_191(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xBC25 / 48165
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
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

void Function_192() //Position: 0xBD80 / 48512
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_189();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_189();
	return;
}

bool Function_193(bool bParam0) //Position: 0xBDCC / 48588
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_194(int iParam0) //Position: 0xBDE3 / 48611
{
	Function_195(iParam0, 10);
	return StackVal, Function_195(iParam0, 10);
}

struct<8> Function_195(var uParam0, int iParam1) //Position: 0xBDF0 / 48624
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

struct<32> Function_196(struct<8> Param0) //Position: 0xBE0B / 48651
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_197("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_197(char* cParam0) //Position: 0xBE77 / 48759
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_198(int iParam0, int iParam1) //Position: 0xBE99 / 48793
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_98(iParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_44(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_33(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_39(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_199(int iParam0) //Position: 0xBF40 / 48960
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&cVar0, "procMisslayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196(&cVar0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_200(struct<1093> Param0) //Position: 0xBFBB / 49083
{
	if (Function_34(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_217(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

void Function_201() //Position: 0xC034 / 49204
{
	int iVar0;
	
	bLocal_463 = true;
	if (Global_43787 == 1)
	{
		iVar0 = Function_202(4);
		if (iVar0 == 0)
		{
			iLocal_461 = "MEX_SONG_04";
		}
		else if (iVar0 == 1)
		{
			iLocal_461 = "MEX_SONG_05";
		}
		else if (iVar0 == 2)
		{
			iLocal_461 = "MEX_SONG_06";
		}
		else if (iVar0 == 3)
		{
			iLocal_461 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iLocal_461, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	iLocal_464 = 3;
	return;
}

var Function_202(bool bParam0) //Position: 0xC0D5 / 49365
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_203(int iParam0, int iParam1, int iParam2) //Position: 0xC0EE / 49390
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			AI_QUICK_EXIT_GRINGO(&iParam1, 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
			TASK_FACE_ACTOR(0, &Global_54076, 1, &iParam2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&iParam1, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_PRIORITY_SET(&iParam1, false);
			iParam0 = 1;
			break;
		
		case 0x00000001:
			if (GET_NTH_TASK_STATUS(&iParam1, 0) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_204() //Position: 0xC160 / 49504
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 9999,9f;
	iVar1 = 4294967295;
	iVar2 = 3;
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		if (Function_205(StackVal, &Global_54076, Local_415[iVar32]) > fVar0)
		{
			fVar0 = Function_205(StackVal, &Global_54076, Local_415[iVar32]);
			iVar1 = iVar3;
		}
		iVar3++;
	}
	return iVar1;
}

float Function_205(int iParam0, struct<2> Param1) //Position: 0xC1B4 / 49588
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_206(&iParam0);
		Var0 = Function_206(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_206(int iParam0) //Position: 0xC22B / 49707
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_207(bool bParam0) //Position: 0xC297 / 49815
{
	Function_298(&bParam0, 0.0f);
	return;
}

void Function_208(int iParam0, float fParam1) //Position: 0xC2A4 / 49828
{
	if (!Function_98(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_12 = fParam1;
	return;
}

bool Function_209(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, bool bParam10, var uParam11, var uParam12, float fParam13, var uParam14, int iParam15) //Position: 0xC2BF / 49855
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&fParam13 == 0.0f && !uParam8)
	{
		if (&fParam13 > &fParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_109(&uParam0, &iParam1) > &fParam13)
		{
			uParam8 = 1;
			Function_108(&uParam0, &Global_54076, &uParam14, &uParam14, 5, 60, 1, &iParam15);
			Function_298(&uParam7, 0.0f);
		}
	}
	switch (uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
			fLocal_26 = Function_109(&uParam0, &Global_54076);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&uParam0, &iParam1, -1.0f, 1);
			uParam6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam3, Function_301(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &uParam6, &iParam1, Function_301(), Vector(0.0f, 0,5f, &uParam12), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&uParam0, &uParam6, 1.0f, &uParam11);
			TASK_PRIORITY_SET(&uParam0, true);
			uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(&Global_54076))
			{
				fVar0 = (&fParam9 - 3.0f);
			}
			else
			{
				fVar0 = &fParam9;
			}
			if ((Function_109(&uParam0, &iParam1) - fLocal_26) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (&bParam10)
				{
					TASK_CLEAR(&uParam0);
					TASK_FACE_ACTOR(&uParam0, &iParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(&uParam0);
				}
				uParam5 = 1;
				return 1;
			}
			if (!Function_14(&uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool Function_210(var uParam0, var uParam1, bool bParam2) //Position: 0xC47F / 50303
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

bool Function_211(int iParam0, struct<2> Param1, float fParam3) //Position: 0xC594 / 50580
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_206(&iParam0);
		if (VDIST(Function_206(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_212(var[] uParam0, int iParam1, float fParam2) //Position: 0xC620 / 50720
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			if (Function_109(&(uParam0[iVar0]), &Global_54076) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_213(bool bParam0) //Position: 0xC65F / 50783
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_214(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_214(var uParam0, int iParam1) //Position: 0xC69B / 50843
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

bool Function_215(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xC72C / 50988
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&uParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_216(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xC7FA / 51194
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_39(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_217(int iParam0, int iParam1) //Position: 0xC88F / 51343
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_218(int iParam0, int iParam1) //Position: 0xC8A0 / 51360
{
	if (IS_ACTOR_HUMAN(&iParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) == 0)
		{
			TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
	TASK_KILL_CHAR(&iParam0, &iParam1);
	TASK_PRIORITY_SET(&iParam0, true);
	return 1;
}

void Function_219(var[] uParam0, bool bParam1) //Position: 0xC996 / 51606
{
	int iVar0;
	
	if (&bParam1 == 4294967295)
	{
		bParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &bParam1)
	{
		Function_265(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_220(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xC9C9 / 51657
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_109(&iParam0, &Global_54076);
		if (!Function_104(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				iParam1 = 8;
				Function_221(&iParam0);
				return 1;
			}
		}
		if (!Function_104(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				iParam1 = 2;
				Function_221(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				iParam1 = 2;
				Function_221(&iParam0);
				return 1;
			}
		}
		if (!Function_104(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					iParam1 = 4;
					Function_221(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						iParam1 = 4;
						Function_221(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_104(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				iParam1 = 1;
				Function_221(&iParam0);
				return 1;
			}
		}
		if (!Function_104(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					iParam1 = 16;
					Function_221(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_221(int iParam0) //Position: 0xCB92 / 52114
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_222(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_222(int iParam0) //Position: 0xCBCF / 52175
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_223(int iParam0) //Position: 0xCBE8 / 52200
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_224(int iParam0, bool bParam1, bool bParam2) //Position: 0xCC06 / 52230
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_216(&iParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_225();
		}
	}
	return;
}

void Function_225() //Position: 0xCC31 / 52273
{
	switch (Global_43787)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

float Function_226(vector3 vParam0) //Position: 0xCCBA / 52410
{
	if (Function_111(&vParam0))
	{
		if (Function_227(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_227(int iParam0) //Position: 0xCD87 / 52615
{
	return Function_104(iParam0, 2);
}

var Function_228(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0xCD95 / 52629
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_235(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_234(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_231(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_301(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_229();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_229() //Position: 0xD048 / 53320
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_230(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_230(var uParam0, int iParam1) //Position: 0xD0BB / 53435
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_231(bool bParam0) //Position: 0xD0F1 / 53489
{
	if (Function_223(256))
	{
		return 0;
	}
	if (Function_223(262144))
	{
		return 0;
	}
	if (Function_233())
	{
		return 0;
	}
	if (!Function_223(1))
	{
		return 0;
	}
	if (!Function_223(4096))
	{
		return 0;
	}
	if (bParam0 && Function_232(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_223(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_232(int iParam0) //Position: 0xD167 / 53607
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_233() //Position: 0xD178 / 53624
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_234(int iParam0) //Position: 0xD191 / 53649
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_235(int iParam0) //Position: 0xD1A7 / 53671
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_236(int iParam0) //Position: 0xD1BC / 53692
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
		}
	}
	return;
}

void Function_237(bool bParam0) //Position: 0xD1EF / 53743
{
	if (bParam0)
	{
		return;
	}
	if (IS_ACTOR_VALID(&iLocal_402))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iLocal_402, 1065353216, 1117126656, 1, 1, 0))
		{
			bParam0 = 1;
		}
	}
	return;
}

void Function_238(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0xD229 / 53801
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_76(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_248(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_247(0);
		}
		if (&bParam7)
		{
			Function_245(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_243(iParam3);
			Global_6644 = 1;
		}
		Function_242(iParam3);
		if (Function_241(StackVal, 32768))
		{
			Function_239(1);
		}
		Global_26652[iParam34].f_16++;
		Function_88(408, 1, 0, 0);
	}
}

void Function_239(bool bParam0) //Position: 0xD33E / 54078
{
	if (bParam0)
	{
		Function_240(0x10000000);
	}
	else
	{
		Function_103(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_240(int iParam0) //Position: 0xD363 / 54115
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_241(var uParam0, int iParam1) //Position: 0xD376 / 54134
{
	return (uParam0 && iParam1) == 0;
}

void Function_242(int iParam0) //Position: 0xD383 / 54147
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_104(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_178(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

void Function_243(int iParam0) //Position: 0xD429 / 54313
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_244(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_244(vector3 vParam0) //Position: 0xD4C8 / 54472
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_245(int iParam0, bool bParam1) //Position: 0xD4E4 / 54500
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &bParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_246(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_246(struct<113> Param0) //Position: 0xD56B / 54635
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_247(int iParam0) //Position: 0xD5C9 / 54729
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_178(900)), 0);
	return;
}

void Function_248(int iParam0) //Position: 0xD5ED / 54765
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_178(200)), 0);
	return;
}

struct<8> Function_249() //Position: 0xD610 / 54800
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_250(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0xD61A / 54810
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar1])))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam0[iVar1]), 1.0f, &uParam5, 1, 1, 0))
			{
				uParam2 = 1;
				if (&iParam4 != 0)
				{
					Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam4));
				}
			}
		}
		iVar1++;
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_248(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_247(0);
		}
		if (&bParam6)
		{
			Function_245(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_243(iParam3);
		}
		Function_242(iParam3);
		if (Function_241(StackVal, 32768))
		{
			Function_239(1);
		}
		Global_26652[iParam34].f_16++;
		Function_88(408, 1, 0, 0);
	}
}

void Function_251(var uParam0, struct<2> Param1, var uParam3, bool bParam4) //Position: 0xD713 / 55059
{
	var uVar0;
	
	uVar0 = CREATE_POINT_IN_LAYOUT(&bParam4, Function_301(), Param1, *(&Param1 + 12));
	DECOR_SET_OBJECT(&uParam0, "MoveObj_Dest", &uVar0);
}

int Function_252(var uParam0, int iParam1) //Position: 0xD74B / 55115
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_254(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_253(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_253(int iParam0, var uParam1, struct<2> Param2) //Position: 0xD8B5 / 55477
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_196("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_254(int iParam0) //Position: 0xD95D / 55645
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_255(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_205(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_255(iVar0);
						}
					}
					else if (Function_205(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_255(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_255(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_255(int iParam0) //Position: 0xDACB / 56011
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_256(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xDB33 / 56115
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_258("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_257(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_257(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_257(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_257(bool bParam0) //Position: 0xDD9F / 56735
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_258(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xDDE9 / 56809
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_39(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

var Function_259(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xDE6E / 56942
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_262(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_261(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_260(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_260(int iParam0, bool[] bParam1) //Position: 0xE0C1 / 57537
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_261(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xE0F5 / 57589
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_262(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xE111 / 57617
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_263(int iParam0) //Position: 0xE13D / 57661
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	}
	return;
}

int Function_264(int iParam0, int iParam1) //Position: 0xE15A / 57690
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

void Function_265(int iParam0) //Position: 0xE1E5 / 57829
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

void Function_266(int iParam0) //Position: 0xE238 / 57912
{
	if (!Function_111(&iParam0))
	{
		Function_298(&iParam0, 0.0f);
	}
	return;
}

bool Function_267(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE24F / 57935
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_268(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xE270 / 57968
{
	if (StackVal & 64 == 64)
	{
		if (!iParam2)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_109(&Global_54076, &iParam1) > 15.0f)
				{
					iParam2 = 1;
				}
			}
		}
		if (Global_6637 && !iParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !iParam2)
		{
			return 0;
		}
		if (Function_271() && !iParam2)
		{
			return 0;
		}
		if (Function_270(iParam0) && !iParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && iParam7)
		{
			iParam3 = 1;
			return 0;
		}
		if (Global_6647 && iParam7)
		{
			iParam3 = 1;
			return 0;
		}
		if (Global_6635 && !iParam2)
		{
			return 0;
		}
		if (Global_6636 && !iParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !iParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_269(iParam0, &iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_269(int iParam0, int iParam1) //Position: 0xE3B3 / 58291
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_270(int iParam0) //Position: 0xE3D4 / 58324
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_271() //Position: 0xE414 / 58388
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_272(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_272(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_272(var uParam0, var uParam1) //Position: 0xE4D7 / 58583
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_206(&uParam0);
			Var0 = Function_206(&uParam0);
			Function_107(&uParam1);
			Var2 = Function_107(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_273(struct<2>[] Param0) //Position: 0xE579 / 58745
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_278();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_277(&(Param0[iVar02]), 8);
		}
		else if (Function_276())
		{
			iVar1 = 1;
			Function_277(&(Param0[iVar02]), 8);
		}
		Function_277(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_277(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_277(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_277(&(Param0[iVar02]), 2);
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
	Function_274();
	return 1;
}

void Function_274() //Position: 0xE93B / 59707
{
	if (!Function_275(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_275(int iParam0) //Position: 0xE97B / 59771
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_276() //Position: 0xE997 / 59799
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_277(struct<13> Param0) //Position: 0xE9C5 / 59845
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_278() //Position: 0xE9D8 / 59864
{
	if (!Function_275(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

void Function_279(int iParam0) //Position: 0xEA1A / 59930
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&iParam0, true);
		}
	}
	return;
}

void Function_280(var[] uParam0, int iParam1) //Position: 0xEA63 / 60003
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_279(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_281(int iParam0) //Position: 0xEA95 / 60053
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(&iParam0, false);
		}
	}
	return;
}

void Function_282(var[] uParam0, int iParam1) //Position: 0xEADF / 60127
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_281(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_283(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xEB11 / 60177
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

bool Function_284(int iParam0) //Position: 0xEB89 / 60297
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

void Function_285(var[] uParam0, int iParam1) //Position: 0xEBFF / 60415
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

var Function_286(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xEC22 / 60450
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_287(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_277(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_287(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xEC60 / 60512
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_277(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_288(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xED2F / 60719
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_277(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_277(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_289(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xEE0B / 60939
{
	return Function_290(&uParam0, iParam1, &iParam2, 4294967295, &iParam3);
}

var Function_290(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xEE22 / 60962
{
	return Function_187(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

int Function_291(int iParam0) //Position: 0xEE40 / 60992
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_292(bool bParam0, bool bParam1, bool bParam2) //Position: 0xEE5A / 61018
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_296(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_293(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_293(bParam0, bParam1, bParam2, 4294967295);
}

int Function_293(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xEEB8 / 61112
{
	var uVar0;
	
	if (!Function_295(bParam2))
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
	uVar0 = Function_296(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_294(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_294(int iParam0) //Position: 0xF01C / 61468
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_295(int iParam0) //Position: 0xF05A / 61530
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_296(int iParam0, int iParam1, int iParam2) //Position: 0xF06F / 61551
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_297(var uParam0, var uParam1, int iParam2) //Position: 0xF08F / 61583
{
	var uVar0;
	
	uVar0 = Function_292(uParam0, uParam1, iParam2);
	return Function_98(uVar0);
}

void Function_298(vector3 vParam0) //Position: 0xF0A5 / 61605
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_217(&vParam0, 1);
	Function_45(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_299(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF0CA / 61642
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_69(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_300(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_300(bool bParam0) //Position: 0xF1D1 / 61905
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

var Function_301() //Position: 0xF2C5 / 62149
{
	var uVar0;
	
	return &uVar0;
}

