//Decompiled with MagicRDR v1.0
//Function Count : 94
//Statics Count : 562
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<173> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0 } ;
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
	var uLocal_222 = 5;
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
	var uLocal_254 = 1;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 4;
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
	var uLocal_296 = 5;
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
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 10;
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
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_355 = 0;
	Unknown_Function();
	while (!IS_EXITFLAG_SET())
	{
		iLocal_356 = 1000;
		switch (iLocal_355)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_355 = 1;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4, 2);
				}
				iLocal_356 = 0;
				break;
			
			case 0x00000001:
				if (Function_93())
				{
					Global_62981 = 0;
					iLocal_355 = 2;
				}
				iLocal_356 = 0;
				break;
			
			case 0x00000002:
				if (Function_84())
				{
					Function_83(&(Global_29008[iScriptParam_0]), 32);
					iLocal_355 = 3;
				}
				iLocal_356 = 0;
				break;
			
			case 0x00000003:
				iLocal_357 = LAUNCH_NEW_SCRIPT_WITH_ARGS("AgaveViejoVol", &iScriptParam_0, 2, 0);
				Function_82(&Global_6907, &Global_8091, iScriptParam_0);
				iLocal_355 = 5;
				iLocal_356 = 0;
				break;
			
			case 0x00000005:
				if (Function_81(&Global_6907, &Global_8091, iScriptParam_0))
				{
					iLocal_355 = 4;
					iLocal_356 = 0;
				}
				else
				{
					iLocal_356 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_80(&(Global_29008[iScriptParam_0]), 16) && Function_79(Global_29155[iScriptParam_010]))
				{
					iLocal_355 = 6;
				}
				iLocal_356 = 0;
				break;
			
			case 0x00000006:
				Function_78(0, &uLocal_358, -1483.586f, 20.894f, 3914.605f);
				Function_77(0, &uLocal_358, -1481.873f, 20.902f, 3917.322f);
				Function_76(0, &uLocal_358, -1476.716f, 17.302f, 3906.466f);
				Function_75(0, &uLocal_358, -1503.194f, 17.702f, 3908.495f);
				Function_74(0, &uLocal_358, -1481.873f, 20.902f, 3917.322f);
				Function_73(0, &uLocal_358, -1483.586f, 20.894f, 3914.605f);
				Function_72(0, &uLocal_358, Local_49);
				Function_78(1, &uLocal_358, -1502.441f, 17.702f, 3908.643f);
				Function_77(1, &uLocal_358, -1528.322f, 15.549f, 3914.941f);
				Function_76(1, &uLocal_358, -1461.306f, 16.545f, 3943.836f);
				Function_75(1, &uLocal_358, -1518.804f, 15.227f, 3932.349f);
				Function_74(1, &uLocal_358, -1461.306f, 16.545f, 3943.836f);
				Function_73(1, &uLocal_358, -1484.237f, 17.202f, 3915.965f);
				Function_72(1, &uLocal_358, Local_49);
				Function_78(2, &uLocal_358, -1508.558f, 15.069f, 3886.614f);
				Function_77(2, &uLocal_358, -1515.017f, 15.175f, 3879.03f);
				Function_76(2, &uLocal_358, -1465.326f, 16.545f, 3947.066f);
				Function_75(2, &uLocal_358, -1462.262f, 14.804f, 3850.746f);
				Function_74(2, &uLocal_358, -1465.326f, 16.545f, 3947.066f);
				Function_73(2, &uLocal_358, -1482.069f, 17.202f, 3906.694f);
				Function_72(2, &uLocal_358, Local_49);
				Function_78(3, &uLocal_358, -1465.326f, 16.545f, 3947.066f);
				Function_77(3, &uLocal_358, -1511.724f, 15.18f, 3879.456f);
				Function_76(3, &uLocal_358, -1467.337f, 16.545f, 3942.122f);
				Function_75(3, &uLocal_358, -1509.094f, 15.18f, 3882.661f);
				Function_74(3, &uLocal_358, -1457.124f, 16.545f, 3946.441f);
				Function_73(3, &uLocal_358, -1478.075f, 16.546f, 3951.656f);
				Function_72(3, &uLocal_358, Local_49);
				Function_78(4, &uLocal_358, -1462.267f, 16.546f, 3944.521f);
				Function_77(4, &uLocal_358, -1508.92f, 15.069f, 3887.885f);
				Function_76(4, &uLocal_358, -1468.0f, 16.545f, 3944.168f);
				Function_75(4, &uLocal_358, -1508.92f, 15.069f, 3887.885f);
				Function_74(4, &uLocal_358, -1468.0f, 16.545f, 3944.168f);
				Function_73(4, &uLocal_358, -1480.001f, 16.546f, 3945.905f);
				Function_72(4, &uLocal_358, Local_49);
				Function_78(5, &uLocal_358, -1492.125f, 17.202f, 3900.201f);
				Function_77(5, &uLocal_358, -1469.88f, 17.202f, 3906.603f);
				Function_76(5, &uLocal_358, -1510.918f, 15.069f, 3880.18f);
				Function_75(5, &uLocal_358, -1469.88f, 17.202f, 3906.603f);
				Function_74(5, &uLocal_358, -1473.648f, 16.546f, 3958.927f);
				Function_73(5, &uLocal_358, -1482.005f, 16.546f, 3947.177f);
				Function_72(5, &uLocal_358, Local_49);
				Function_78(6, &uLocal_358, -1483.919f, 17.194f, 3898.009f);
				Function_77(6, &uLocal_358, -1469.685f, 17.202f, 3917.537f);
				Function_76(6, &uLocal_358, -1540.0f, 14.033f, 3840.001f);
				Function_75(6, &uLocal_358, -1520.461f, 15.107f, 3931.652f);
				Function_74(3, &uLocal_358, -1509.841f, 17.416f, 3906.289f);
				Function_73(6, &uLocal_358, -1466.942f, 16.564f, 3939.209f);
				Function_72(6, &uLocal_358, Local_49);
				Function_78(7, &uLocal_358, -1502.475f, 15.034f, 3873.255f);
				Function_77(7, &uLocal_358, -1502.475f, 15.034f, 3873.255f);
				Function_76(7, &uLocal_358, -1457.509f, 16.545f, 3943.039f);
				Function_75(7, &uLocal_358, -1502.475f, 15.034f, 3873.255f);
				Function_74(7, &uLocal_358, -1457.509f, 16.545f, 3943.039f);
				Function_73(7, &uLocal_358, -1465.222f, 16.546f, 3935.87f);
				Function_72(7, &uLocal_358, Local_49);
				Function_78(8, &uLocal_358, -1452f, 16.54457f, 3937.624f);
				Function_77(8, &uLocal_358, -1546.715f, 15.034f, 3918.657f);
				Function_76(8, &uLocal_358, -1583.672f, 15.233f, 3841.704f);
				Function_75(8, &uLocal_358, -1546.715f, 15.034f, 3918.657f);
				Function_74(8, &uLocal_358, -1477.84f, 16.545f, 3937.601f);
				Function_73(8, &uLocal_358, -1509.841f, 17.416f, 3906.289f);
				Function_72(8, &uLocal_358, Local_49);
				Function_78(9, &uLocal_358, -1465.222f, 16.546f, 3935.87f);
				Function_77(9, &uLocal_358, -1583.672f, 15.233f, 3841.704f);
				Function_76(9, &uLocal_358, -1546.715f, 15.034f, 3918.657f);
				Function_75(9, &uLocal_358, -1583.672f, 15.233f, 3841.704f);
				Function_74(9, &uLocal_358, -1546.715f, 15.034f, 3918.657f);
				Function_73(9, &uLocal_358, -1477.84f, 16.545f, 3937.601f);
				Function_72(9, &uLocal_358, Local_49);
				Function_68(&Global_6907, &Global_8091, &uLocal_358, Global_6289, iScriptParam_0);
				if (Function_80(&(Global_29008[iScriptParam_0]), 256) || !Function_67(2))
				{
					iLocal_559 = 1;
				}
				if (!Function_61(3, 2, "$/content/Ambient/JobSystem/job_HorseBreaking", -1459.919f, 14.803f, 3848.309f, 327, iScriptParam_0, 15, -1.0f, 15, 0))
				{
				}
				Function_60("Initializing AgaveViejo", GET_OBJECT_FROM_PERS_CHAR(&Local_49 + 1112));
				Function_83(&(Global_29008[iScriptParam_0]), 8);
				if (Function_80(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_59(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_355 = 10;
				}
				else
				{
					iLocal_355 = 7;
				}
				iLocal_356 = 0;
				break;
			
			case 0x00000007:
				switch (Global_30619)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000003:
						break;
				}
				Function_45(&Global_62527, 4, Global_30693[2], "$/content/Mexico/Mini_Games/ArmWrestling_AGV/ArmWrestling_AGV", 4294967295, 0, "AgvArmWrestling", 351, -1470.591f, 16.545f, 3946.4f, 2.5f, 0, 0);
				Function_44(&Global_62527, 4, 1);
				Function_43(&Global_62527, 4);
				iLocal_355 = 8;
				iLocal_356 = 0;
				break;
			
			case 0x00000008:
				Function_42(64);
				if (Function_37(iScriptParam_0, &Global_6907, iLocal_559))
				{
					Function_33(StackVal, 0, 0.1f, 4, Local_4, 1);
					Function_29(2, 4294967295, 4294967295, 0, 3);
					Function_26(Local_4);
				}
				else
				{
					Function_29(1, 10, 6, 5, 2);
					switch (Global_30619)
					{
						case 0x00000000:
						case 0x00000001:
							Function_33(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000002:
							Function_33(StackVal, 0, 0.5f, 4, Local_4, 1);
							break;
						
						case 0x00000003:
							Function_33(StackVal, 2, 0.5f, 4, Local_4, 1);
							break;
					}
					Function_26(Local_4);
				}
				Function_83(&(Global_29008[iScriptParam_0]), 512);
				iLocal_355 = 9;
				iLocal_356 = 0;
				break;
			
			case 0x00000009:
				Function_24(Local_4, iScriptParam_0);
				Function_83(&(Global_29008[iScriptParam_0]), 4);
				Function_23("Finished Initializing AgaveViejo", 5.0f);
				iLocal_355 = 10;
				iLocal_356 = 0;
				break;
			
			case 0x0000000A:
				if (!Function_22(Global_62981, 16))
				{
					if (Function_19(&(Global_30693[2])))
					{
						Function_18(&Global_62981, 16);
					}
				}
				if (Function_80(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_355 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_356);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4);
	Function_7(&Global_6907, &Global_8091, iScriptParam_0, (iLocal_559 || Global_3380));
	Function_6();
	Function_1();
	Function_59(&(Global_29008[iScriptParam_0]), 32);
	Function_59(&(Global_29008[iScriptParam_0]), 64);
	Function_59(&(Global_29008[iScriptParam_0]), 8);
	Function_59(&(Global_29008[iScriptParam_0]), 512);
	Function_59(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(iLocal_357))
	{
		TERMINATE_SCRIPT(iLocal_357);
	}
	Function_23("Unloaded AgaveViejo", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xB25 / 2853
{
	Function_2(&Local_49 + 4);
	RELEASE_LAYOUT_REF(Local_49);
	return;
}

void Function_2(int iParam0) //Position: 0xB37 / 2871
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xB5D / 2909
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xC8B / 3211
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0xCA5 / 3237
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0xCC2 / 3266
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_7(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xCCD / 3277
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	
	if (StackVal != 5 && Function_17())
	{
		return;
	}
	strcpy(&cVar0, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_80(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_59(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_13(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_13(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_12(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_13(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_12(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_80(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_67(2) || Function_80(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_13(uParam0[iVar162], 2) && !Function_13(uParam0[iVar162], 4))
		{
			Function_8(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_13(uParam0[iVar162], 2) && !Function_13(uParam0[iVar162], 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		uVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		iVar21 = GET_OBJECTSET_FROM_OBJECT(uVar20);
		if (IS_OBJECTSET_VALID(iVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(iVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, iVar21));
				CLEAN_OBJECTSET(iVar21);
			}
			DESTROY_OBJECTSET(iVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_83(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_8(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xECD / 3789
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_11(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_10(Global_29007), Function_9(Global_29007), 0, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_13(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_13(uParam0[iParam22], 1) && !bParam3)
	{
		Function_11(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_10(Global_29007), Function_9(Global_29007), 0, 0);
	}
}

int Function_9(int iParam0) //Position: 0x101C / 4124
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

int Function_10(int iParam0) //Position: 0x1047 / 4167
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

void Function_11(var uParam0, int iParam1) //Position: 0x107B / 4219
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x108A / 4234
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x10A1 / 4257
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_14() //Position: 0x10BD / 4285
{
	if (Function_22(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_15(int iParam0) //Position: 0x10D8 / 4312
{
	if (!Function_16(iParam0))
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

bool Function_16(int iParam0) //Position: 0x1586 / 5510
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_17() //Position: 0x159C / 5532
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_18(var uParam0, int iParam1) //Position: 0x15A5 / 5541
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_19(int iParam0) //Position: 0x15B4 / 5556
{
	var uVar0;
	
	Function_21(*iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_21(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(uVar0))
	{
		SET_PROP_FIXED(uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_20(*iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_20(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(uVar0))
	{
		SET_PROP_FIXED(uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_20(int iParam0) //Position: 0x16AF / 5807
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.656f, 16.56962f, 3948.088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.743f, 43.17878f, 3720.288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.16f, 20.97986f, 3881.796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.9332f, 85.11941f, 2118.893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_21(int iParam0) //Position: 0x175E / 5982
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.104f, 16.52992f, 3948.271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.721f, 43.17878f, 3720.842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.5623f, 20.97986f, 3882.657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.932f, 85.11941f, 2119.438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_22(var uParam0, int iParam1) //Position: 0x1809 / 6153
{
	return (uParam0 && iParam1) == 0;
}

void Function_23(char* cParam0, float fParam1) //Position: 0x1816 / 6166
{
	if (!Function_67(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_24(bool bParam0, int iParam1) //Position: 0x1854 / 6228
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = iParam1;
	Global_29006 = iParam1;
	if (IS_OBJECT_VALID(Global_29155[iParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[iParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_25(Global_29155[iParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_17())
	{
		SET_RICH_PRESENCE(2, Global_29155[iParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", iParam1);
	Global_30620 = 0;
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x194E / 6478
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_26(bool bParam0) //Position: 0x195B / 6491
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(cParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_28(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_27(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_27(var uParam0) //Position: 0x1A46 / 6726
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_28() //Position: 0x1A63 / 6755
{
	int iVar0;
	
	return iVar0;
}

void Function_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1A6B / 6763
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
	Global_26361.f_8 = iParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = iParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_30();
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

void Function_30() //Position: 0x1B4F / 6991
{
	int iVar0;
	
	Global_26960 = Function_31(StackVal);
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

int Function_31(int iParam0) //Position: 0x1B9D / 7069
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_32(bool bParam0) //Position: 0x1BB5 / 7093
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_33(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x1BCA / 7114
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(cParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(uParam4))
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
	Global_28842.f_24 = uParam4;
	Global_28842.f_32 = iParam1;
	uVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(uVar0))
	{
		ITERATE_ON_OBJECT_TYPE(uVar0, 9);
		ITERATE_ON_PARTIAL_NAME(uVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(uVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(uVar0));
		}
		DESTROY_ITERATOR(uVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_36();
	}
	if (bParam5)
	{
		Function_34(1048576);
	}
}

void Function_34(int iParam0) //Position: 0x1CDD / 7389
{
	Function_35(&Global_28842, iParam0);
	return;
}

void Function_35(var uParam0, var uParam1) //Position: 0x1CEB / 7403
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_36() //Position: 0x1D06 / 7430
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_34(16384);
	}
	return;
}

bool Function_37(int iParam0, var uParam1, bool bParam2) //Position: 0x1D22 / 7458
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_80(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_38(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_17())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *uParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

int Function_38(var uParam0, bool bParam1) //Position: 0x1DE2 / 7650
{
	int iVar0;
	
	iVar0 = Function_40(uParam0);
	if (!Function_39(iVar0))
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

bool Function_39(int iParam0) //Position: 0x1E1F / 7711
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_40(int iParam0) //Position: 0x1E36 / 7734
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(int iParam0) //Position: 0x1E50 / 7760
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_42(int iParam0) //Position: 0x1E66 / 7782
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x1E79 / 7801
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_44(var uParam0, int iParam1, float fParam2) //Position: 0x1E94 / 7828
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x1EB8 / 7864
{
	if (Function_17() && !bParam12)
	{
		return;
	}
	if (!Function_17() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_54(iParam2, iParam1, 4);
	if (STRING_LENGTH(iParam3) >= 0)
	{
		uParam0[iParam140]->f_8 = GET_ASSET_ID(iParam3, 4);
	}
	else
	{
		uParam0[iParam140]->f_8 = 4294967295;
	}
	uParam0[iParam140]->f_40 = "";
	uParam0[iParam140]->f_44 = "";
	uParam0[iParam140]->f_48 = iParam13;
	uParam0[iParam140]->f_96 = iParam7;
	uParam0[iParam140]->f_104 = 5;
	uParam0[iParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[iParam140]->f_132 = iParam4;
	uParam0[iParam140]->f_136 = 4294967295;
	uParam0[iParam140]->f_140 = 4294967295;
	uParam0[iParam140]->f_144 = 4294967295;
	strcpy(uParam0[iParam140] + 12, cParam6, 16);
	*(uParam0[iParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[iParam140]->f_64 = iParam11;
	uParam0[iParam140]->f_72 = iParam2;
	if (Global_25974[iParam1] && Function_53(iParam1))
	{
		Function_46(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_46(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x2004 / 8196
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_52(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	uVar2 = Function_51(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_50(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_49(uVar3);
		vVar7 = { StackVal, StackVal, Function_49(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_49(StackVal);
				vVar4 = { StackVal, StackVal, Function_49(StackVal) };
				if (Function_48(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_47(iParam1), 0.0f, 2, uVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_47(bool bParam0) //Position: 0x21E7 / 8679
{
	switch (bParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_48(vector3 vParam0, vector3 vParam3) //Position: 0x231E / 8990
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_49(int iParam0) //Position: 0x234B / 9035
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	iVar3 = iParam0 & 32767;
	iVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(iVar3);
	vVar0.f_8 = TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_50(vector3 vParam0) //Position: 0x23A2 / 9122
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

int Function_51(int iParam0) //Position: 0x23F0 / 9200
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_52(vector3 vParam0) //Position: 0x24A8 / 9384
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_53(int iParam0) //Position: 0x24C0 / 9408
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_54(int iParam0, int iParam1, int iParam2) //Position: 0x24E3 / 9443
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_58(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_55(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_55(iParam0, iParam1, iParam2, 4294967295);
}

int Function_55(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2541 / 9537
{
	var uVar0;
	
	if (!Function_57(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_58(iParam0, iParam1, iParam2);
	if (iParam3 != 4294967295 || iParam3 <= 275)
	{
		iParam3 = Function_56(uVar0);
	}
	if (iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[iParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
		Global_16198[iParam3] = 0;
		Global_13172[iParam311].f_4 = 0;
		Global_13172[iParam311].f_8 = 0;
		Global_13172[iParam311].f_12 = 0;
		Global_13172[iParam311].f_16 = 0;
		Global_13172[iParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return iParam3;
}

int Function_56(int iParam0) //Position: 0x2696 / 9878
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

bool Function_57(int iParam0) //Position: 0x26D4 / 9940
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_58(int iParam0, int iParam1, int iParam2) //Position: 0x26E9 / 9961
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_59(var uParam0, int iParam1) //Position: 0x2709 / 9993
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_60(var uParam0, bool bParam1) //Position: 0x2720 / 10016
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, *uParam0)), bParam1);
		}
		iVar0++;
	}
	return;
}

bool Function_61(int iParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x2768 / 10088
{
	var uVar0;
	
	Global_62484[iParam014].f_8 = GET_ASSET_ID(uParam1, 4);
	Global_62484[iParam014].f_12 = iParam0;
	Global_62484[iParam014].f_28 = uParam5;
	Global_62484[iParam014].f_24 = uParam7;
	Global_62484[iParam014].f_52 = uParam8;
	Global_62484[iParam014].f_16 = uParam9;
	Global_62484[iParam014].f_20 = uParam10;
	*(&Global_62484[iParam014] + 36) = { StackVal, StackVal, vParam2 };
	Global_62484[iParam014].f_48 = uParam6;
	uVar0 = Function_54(uParam7, iParam0, 6);
	if (Function_66(uVar0) == 0)
	{
		Function_63(uVar0, MAKE_TIME_OF_DAY_EX(1, 0, 0, 0));
	}
	uParam11 = uParam11;
	Function_62(&(Global_62484[iParam014]), 24);
	return 1;
}

void Function_62(var uParam0, int iParam1) //Position: 0x280B / 10251
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_63(int iParam0, int iParam1) //Position: 0x281A / 10266
{
	if (!Function_64(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_36 = iParam1;
	return;
}

bool Function_64(int iParam0) //Position: 0x2835 / 10293
{
	if (!Function_39(iParam0))
	{
		return 0;
	}
	if (!Function_65(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_65(int iParam0) //Position: 0x2859 / 10329
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_66(int iParam0) //Position: 0x286E / 10350
{
	if (!Function_39(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_67(int iParam0) //Position: 0x2888 / 10376
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_68(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x28A4 / 10404
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_67(2))
	{
		return;
	}
	if (Function_80(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_13(uParam0[iVar02], 2))
		{
			if (Function_69(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_59(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_83(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_69(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2956 / 10582
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_80(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_13(iParam0, 2))
	{
		return 1;
	}
	if (Function_13(iParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, 0))
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
		if (Function_52(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_12(iParam0, 4);
	}
	Function_70(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_70(var uParam0, bool bParam1) //Position: 0x2AC1 / 10945
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(uParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_52(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_52(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_71(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2BFD / 11261
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	uVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(uVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(uVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(uVar3), Function_28(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(uVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return uVar3;
}

void Function_72(int iParam0, var uParam1, bool bParam2) //Position: 0x2D16 / 11542
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(cParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	uParam1[iVar020]->f_72 = bParam2;
	return;
}

void Function_73(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D71 / 11633
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_74(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2DD7 / 11735
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_75(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2E3F / 11839
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_76(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2EA9 / 11945
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_77(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2F0E / 12046
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*(uParam1[iVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_78(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2F76 / 12150
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Function_48(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(iVar0);
		PRINTNL();
	}
	*uParam1[iVar020] = { StackVal, StackVal, vParam2 };
}

int Function_79(int iParam0) //Position: 0x2FD9 / 12249
{
	if (!Function_16(iParam0))
	{
		return 1;
	}
	return Function_80(&(Global_29008[iParam0]), 4);
}

bool Function_80(var uParam0, int iParam1) //Position: 0x2FF5 / 12277
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_81(var uParam0, var uParam1, int iParam2) //Position: 0x3011 / 12305
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_17())
	{
		return 1;
	}
	strcpy(&cVar1, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_80(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_13(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_13(uParam0[iVar02], 8))
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

void Function_82(var uParam0, var uParam1, int iParam2) //Position: 0x30F2 / 12530
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_17())
	{
		return;
	}
	strcpy(&cVar1, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_80(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_83(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_11(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_11(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x31DA / 12762
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_84() //Position: 0x31E9 / 12777
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	
	Function_92(3, 3);
	bVar0 = bVar0;
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/knl_hoe_soil", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/mex_washcloths", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/multistage_hoe", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/milk_cow", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/arm_wrestling_spectate", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_90(&Local_49 + 4, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	if (!Function_85(&Local_49 + 4))
	{
		return 0;
	}
	Local_49 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(Local_49))
	{
		Local_49 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	Local_49.f_488 = CREATE_OBJECTSET_IN_LAYOUT("nhoegrpSet", Local_49, 8, 0);
	*(&Local_49 + 492[06]) = { -1468.988f, 17.2016f, 3905.636f };
	*(&Local_49 + 492[06] + 12) = { 0.0f, 204.9791f, 0.0f };
	iVar1 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag9", -1468.988f, 17.2016f, 3905.636f, 0.0f, 204.9791f, 0.0f);
	DECOR_SET_STRING(iVar1, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar1, Local_49.f_488);
	*(&Local_49 + 492[16]) = { -1471.727f, 17.2016f, 3908.184f };
	*(&Local_49 + 492[16] + 12) = { 0.0f, 202.8735f, 0.0f };
	iVar2 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag1", -1471.727f, 17.2016f, 3908.184f, 0.0f, 202.8735f, 0.0f);
	DECOR_SET_STRING(iVar2, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar2, Local_49.f_488);
	*(&Local_49 + 492[26]) = { -1468.956f, 17.2016f, 3910.515f };
	*(&Local_49 + 492[26] + 12) = { 0.0f, 202.4568f, 0.0f };
	iVar3 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag2", -1468.956f, 17.2016f, 3910.515f, 0.0f, 202.4568f, 0.0f);
	DECOR_SET_STRING(iVar3, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar3, Local_49.f_488);
	*(&Local_49 + 492[36]) = { -1470.302f, 17.2016f, 3919.103f };
	*(&Local_49 + 492[36] + 12) = { 0.0f, 64.63643f, 0.0f };
	iVar4 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag3", -1470.302f, 17.2016f, 3919.103f, 0.0f, 64.63643f, 0.0f);
	DECOR_SET_STRING(iVar4, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar4, Local_49.f_488);
	*(&Local_49 + 492[46]) = { -1470.819f, 17.2016f, 3920.492f };
	*(&Local_49 + 492[46] + 12) = { 0.0f, -223.0396f, 0.0f };
	iVar5 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag4", -1470.819f, 17.2016f, 3920.492f, 0.0f, -223.0396f, 0.0f);
	DECOR_SET_STRING(iVar5, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar5, Local_49.f_488);
	*(&Local_49 + 492[56]) = { -1482.949f, 17.2016f, 3919.032f };
	*(&Local_49 + 492[56] + 12) = { 0.0f, 522.4911f, 0.0f };
	iVar6 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag5", -1482.949f, 17.2016f, 3919.032f, 0.0f, 522.4911f, 0.0f);
	DECOR_SET_STRING(iVar6, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar6, Local_49.f_488);
	*(&Local_49 + 492[66]) = { -1481.847f, 17.2016f, 3904.302f };
	*(&Local_49 + 492[66] + 12) = { 0.0f, 350.8373f, 0.0f };
	iVar7 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag6", -1481.847f, 17.2016f, 3904.302f, 0.0f, 350.8373f, 0.0f);
	DECOR_SET_STRING(iVar7, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(iVar7, Local_49.f_488);
	*(&Local_49 + 492[76]) = { -1469.644f, 17.202f, 3904.231f };
	*(&Local_49 + 492[76] + 12) = { 0.0f, -0.1112507f, 0.0f };
	iVar8 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag102", -1469.644f, 17.202f, 3904.231f, 0.0f, -0.1112507f, 0.0f);
	DECOR_SET_STRING(iVar8, "UseAnim", "exit");
	ADD_OBJECT_TO_OBJECTSET(iVar8, Local_49.f_488);
	Local_49.f_688 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", Local_49, 8, 0);
	*(&Local_49 + 692[06]) = { -1522.798f, 14.99596f, 3930.805f };
	*(&Local_49 + 692[06] + 12) = { 0.0f, -1.757305f, 0.0f };
	iVar9 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag15", -1522.798f, 14.99596f, 3930.805f, 0.0f, -1.757305f, 0.0f);
	DECOR_SET_STRING(iVar9, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar9, Local_49.f_688);
	*(&Local_49 + 692[16]) = { -1515.347f, 15.50746f, 3931.501f };
	*(&Local_49 + 692[16] + 12) = { 0.0f, -112.0334f, 0.0f };
	iVar10 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag11", -1515.347f, 15.50746f, 3931.501f, 0.0f, -112.0334f, 0.0f);
	DECOR_SET_STRING(iVar10, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar10, Local_49.f_688);
	*(&Local_49 + 692[26]) = { -1520.0f, 15.03867f, 3928.006f };
	*(&Local_49 + 692[26] + 12) = { 0.0f, 0.0f, 0.0f };
	iVar11 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag12", -1520.0f, 15.03867f, 3928.006f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(iVar11, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar11, Local_49.f_688);
	*(&Local_49 + 692[36]) = { -1514.47f, 15.65978f, 3930.477f };
	*(&Local_49 + 692[36] + 12) = { 0.0f, 0.0f, 0.0f };
	iVar12 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag13", -1514.47f, 15.65978f, 3930.477f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(iVar12, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar12, Local_49.f_688);
	*(&Local_49 + 692[46]) = { -1525.43f, 15.43945f, 3916.006f };
	*(&Local_49 + 692[46] + 12) = { 0.0f, -196.1929f, 0.0f };
	iVar13 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag14", -1525.43f, 15.43945f, 3916.006f, 0.0f, -196.1929f, 0.0f);
	DECOR_SET_STRING(iVar13, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar13, Local_49.f_688);
	Local_49.f_816 = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", Local_49, 8, 0);
	*(&Local_49 + 820[06]) = { -1468.873f, 14.804f, 3846.249f };
	*(&Local_49 + 820[06] + 12) = { 0.0f, 26.758f, 0.0f };
	iVar14 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag97", -1468.873f, 14.804f, 3846.249f, 0.0f, 26.758f, 0.0f);
	DECOR_SET_STRING(iVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(iVar14, Local_49.f_816);
	Local_49.f_848 = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", Local_49, 8, 0);
	*(&Local_49 + 852[06]) = { -1547.739f, 14.195f, 3838.161f };
	*(&Local_49 + 852[06] + 12) = { 0.0f, 16.139f, 0.0f };
	iVar15 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag96", -1547.739f, 14.195f, 3838.161f, 0.0f, 16.139f, 0.0f);
	DECOR_SET_STRING(iVar15, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(iVar15, Local_49.f_848);
	Local_49.f_880 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrp1Set", Local_49, 8, 0);
	*(&Local_49 + 884[06]) = { -1468.104f, 17.202f, 3905.31f };
	*(&Local_49 + 884[06] + 12) = { 0.0f, 352.2283f, 0.0f };
	iVar16 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag108", -1468.104f, 17.202f, 3905.31f, 0.0f, 352.2283f, 0.0f);
	DECOR_SET_STRING(iVar16, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar16, Local_49.f_880);
	*(&Local_49 + 884[16]) = { -1468.743f, 17.2016f, 3913.167f };
	*(&Local_49 + 884[16] + 12) = { 0.0f, 358.0765f, 0.0f };
	iVar17 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag105", -1468.743f, 17.2016f, 3913.167f, 0.0f, 358.0765f, 0.0f);
	DECOR_SET_STRING(iVar17, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar17, Local_49.f_880);
	*(&Local_49 + 884[26]) = { -1471.062f, 17.202f, 3918.815f };
	*(&Local_49 + 884[26] + 12) = { 0.0f, 63.388f, 0.0f };
	iVar18 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag106", -1471.062f, 17.202f, 3918.815f, 0.0f, 63.388f, 0.0f);
	DECOR_SET_STRING(iVar18, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar18, Local_49.f_880);
	*(&Local_49 + 884[36]) = { -1484f, 17.18989f, 3897.185f };
	*(&Local_49 + 884[36] + 12) = { 0.0f, -183.3923f, 0.0f };
	iVar19 = CREATE_POINT_IN_LAYOUT(Local_49, "Flag107", -1484f, 17.18989f, 3897.185f, 0.0f, -183.3923f, 0.0f);
	DECOR_SET_STRING(iVar19, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(iVar19, Local_49.f_880);
	Local_49.f_984 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp3Set", Local_49, 8, 0);
	*(&Local_49 + 988[06]) = { -1509.291f, 17.41558f, 3914.572f };
	*(&Local_49 + 988[06] + 12) = { 0.0f, -243.7382f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_49, "sweep1_3", -1509.291f, 17.41558f, 3914.572f, 0.0f, -243.7382f, 0.0f);
	DECOR_SET_STRING(bVar20, "UseAnim", "sweeping");
	DECOR_SET_INT(bVar20, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_49.f_984);
	DECOR_SET_INT(bVar20, "FlagSetNum", 3);
	*(&Local_49 + 988[16]) = { -1508.516f, 17.41558f, 3909.047f };
	*(&Local_49 + 988[16] + 12) = { 0.0f, -299.2566f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_49, "sweep2_2", -1508.516f, 17.41558f, 3909.047f, 0.0f, -299.2566f, 0.0f);
	DECOR_SET_STRING(bVar21, "UseAnim", "sweeping");
	DECOR_SET_INT(bVar21, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_49.f_984);
	DECOR_SET_INT(bVar21, "FlagSetNum", 3);
	*(&Local_49 + 988[26]) = { -1507.766f, 17.41558f, 3906.384f };
	*(&Local_49 + 988[26] + 12) = { 0.0f, -272.5389f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_49, "sweep3_3", -1507.766f, 17.41558f, 3906.384f, 0.0f, -272.5389f, 0.0f);
	DECOR_SET_STRING(bVar22, "UseAnim", "sweeping");
	DECOR_SET_INT(bVar22, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_49.f_984);
	DECOR_SET_INT(bVar22, "FlagSetNum", 3);
	*(&Local_49 + 988[36]) = { -1505.535f, 17.41558f, 3902.712f };
	*(&Local_49 + 988[36] + 12) = { 0.0f, -416.4438f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_49, "sweep4_4", -1505.535f, 17.41558f, 3902.712f, 0.0f, -416.4438f, 0.0f);
	DECOR_SET_STRING(bVar23, "UseAnim", "sweeping");
	DECOR_SET_INT(bVar23, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_49.f_984);
	DECOR_SET_INT(bVar23, "FlagSetNum", 3);
	*(&Local_49 + 988[46]) = { -1499.967f, 17.56363f, 3917.541f };
	*(&Local_49 + 988[46] + 12) = { 0.0f, 352.9069f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_49, "broom_pst3", -1499.967f, 17.56363f, 3917.541f, 0.0f, 352.9069f, 0.0f);
	DECOR_SET_STRING(bVar24, "UseAnim", "nbroom_pst");
	DECOR_SET_INT(bVar24, "FlagSetNum", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_49.f_984);
	DECOR_SET_INT(bVar24, "FlagSetNum", 3);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "nlean_rail", "nlean_rail", -1503.886f, 17.702f, 3914.355f, 0.0f, 78.17119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_hammer_table", "stand_hammer_table", -1504.827f, 15.06869f, 3882.007f, 0.0f, -68.48032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil", "knl_hoe_soil", -1471.374f, 17.22707f, 3911.655f, 0.0f, -346.6793f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil1", "knl_hoe_soil", -1469.88f, 17.202f, 3906.603f, 0.0f, 73.32478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand_nospawn1", "smoking_stand_nospawn", -1515.72f, 15.06869f, 3873.919f, 0.0f, -4.171082f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_washCloths", "mex_washCloths", -1523.562f, 15.53524f, 3913.098f, 0.0f, -176.0116f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand_nospawn2", "rand_idle_stand", -1548.224f, 15.03447f, 3916.911f, 0.0f, -254.4653f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand_nospawn3", "smoking_stand_nospawn", -1580.27f, 14.99868f, 3843.654f, 0.0f, -208.8197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_hammer_table1", "stand_hammer_table", -1499.561f, 15.03945f, 3882.641f, 0.0f, 110.4223f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand_nospawn4", "smoking_stand_nospawn", -1473.852f, 17.302f, 3912.452f, 0.0f, 415.3875f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_washCloths1", "mex_washCloths", -1528.48f, 15.56622f, 3913.241f, 0.0f, 28.48538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand_nospawn5", "smoking_stand_nospawn", -1548f, 14.17225f, 3837.896f, 0.0f, 204.6605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -1465.374f, 16.54457f, 3950.458f, 0.0f, -5.31854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1465.326f, 16.54457f, 3947.066f, 0.0f, 180.9886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1463.636f, 16.54457f, 3949.016f, 0.0f, -292.52f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -1462.436f, 16.54457f, 3941.564f, 0.0f, -150.7194f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "rand_idle_stand", "rand_idle_stand", -1467.337f, 16.54457f, 3942.122f, 0.0f, 218.9225f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_guntricks_e_any", "stand_guntricks_e_any", -1468.0f, 16.54457f, 3944.168f, 0.0f, -99.09139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil2", "knl_hoe_soil", -1467.821f, 17.202f, 3906.039f, 0.0f, 19.52302f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil3", "knl_hoe_soil", -1469.685f, 17.202f, 3917.537f, 0.0f, -216.4655f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil4", "knl_hoe_soil", -1470.666f, 17.20655f, 3921.45f, 0.0f, 86.31735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_49.f_1112 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), Local_49, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", -1524.267f, 15.48784f, 3915.537f, 0.0f, -113.7572f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, Local_49.f_1112)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -1478.555f, 14.805f, 3853.377f, 0.0f, -244.8757f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(1, Local_49.f_1112)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "rand_idle_stand1", "rand_idle_stand", -1509.04f, 17.416f, 3903.422f, 0.0f, -278.5679f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_49.f_1112)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -1513.657f, 15.06869f, 3873.66f, 0.0f, -113.9005f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_49.f_1112)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand22", "smoking_stand", -1532.379f, 14.11864f, 3894.207f, 0.0f, 117.0685f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_49.f_1112)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -1509.751f, 15.07638f, 3871.961f, 0.0f, 25.81026f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_49.f_1112)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_pocketwatch_e_any3", "stand_pocketwatch_e_any", -1462.179f, 14.80229f, 3850.418f, 0.0f, -216.875f, 0.0f), Local_49.f_1112);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(6, Local_49.f_1112)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel", "repair_kneel", -1526.268f, 14.034f, 3840.611f, 0.0f, -93.29059f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel1", "repair_kneel", -1530.362f, 14.03305f, 3838.781f, 0.0f, -279.4068f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel2", "repair_kneel", -1516.457f, 14.95476f, 3885.492f, 0.0f, 290.4165f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel3", "repair_kneel", -1495.746f, 17.2016f, 3900.395f, 0.0f, -100.0808f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel4", "repair_kneel", -1517.009f, 16.14261f, 3924.573f, 0.0f, -185.8395f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel5", "repair_kneel", -1540.603f, 15.03447f, 3925.674f, 0.0f, -410.1426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "repair_kneel6", "repair_kneel", -1462.229f, 14.80225f, 3846.617f, 0.0f, -332.5046f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_horseshoe", "stand_horseshoe", -1506.627f, 15.06869f, 3878.476f, 0.0f, -249.2752f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_horseshoe1", "stand_horseshoe", -1514.865f, 15.19236f, 3881.796f, 0.0f, -252.0428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "lean_fence_L_talking", "lean_fence_L_talking", -1501.645f, 17.702f, 3903.124f, 0.0f, 80.73307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "lean_fence_H_talking", "lean_fence_H_talking", -1468.904f, 17.202f, 3901.982f, 0.0f, -189.4935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Multistage_hoe", "Multistage_hoe", -1469.644f, 17.202f, 3904.231f, 0.0f, 4.834909f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "horse_tend", "horse_tend", -1475.865f, 14.804f, 3850.432f, 0.0f, 2.060024f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "horse_tend1", "horse_tend", -1473.409f, 14.804f, 3849.123f, 0.0f, -0.04932394f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_49.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_49, "horse_tend2", "horse_tend", -1469.974f, 14.804f, 3847.725f, 0.0f, -261.731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1116), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Multistage_bucket", "Multistage_bucket", -1527.698f, 15.54501f, 3912.213f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "horse_tend5", "horse_tend", -1513.503f, 15.18f, 3885.066f, 0.0f, 108.7944f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_horseshoe2", "stand_horseshoe", -1466.239f, 14.80225f, 3845.621f, 0.0f, -6.238536f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "look_distance_binocs", "look_distance_binocs", -1583.672f, 15.233f, 3841.704f, 0.0f, 86.03588f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "milk_cow", "milk_cow", -1547.821f, 14.034f, 3832.911f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "nmilk_cow1", "milk_cow", -1543.618f, 14.034f, 3832.997f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "nmilk_cow2", "milk_cow", -1540.163f, 14.034f, 3834.363f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "nmilk_cow3", "milk_cow", -1536.508f, 14.034f, 3835.043f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_hammer_wall", "stand_hammer_wall", -1551.084f, 14.034f, 3834.471f, 0.0f, -101.986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	DECOR_SET_STRING(bVar0, "UseAnim", "exit");
	DECOR_SET_STRING(bVar0, "UseAnim", "exit");
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "lean_fence_L", "lean_fence_L", -1481.873f, 20.902f, 3917.322f, 0.0f, -88.92303f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -1545.375f, 15.03447f, 3921.375f, 0.0f, 123.8903f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil5", "knl_hoe_soil", -1520.461f, 15.10742f, 3931.652f, 0.0f, 41.74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand", "smoking_stand", -1483.112f, 20.902f, 3921.551f, 0.0f, -169.2238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -1484.832f, 20.902f, 3919.396f, 0.0f, -96.82875f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil6", "knl_hoe_soil", -1479.809f, 17.202f, 3903.259f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "look_out_window_R", "look_out_window_R", -1480.022f, 17.302f, 3904.471f, 0.0f, -94.75592f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "sleeping_wall_scripted", "sleeping_wall_scripted", -1481.985f, 17.302f, 3915.548f, 0.0f, -178.8116f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil7", "knl_hoe_soil", -1517.791f, 15.2969f, 3931.977f, 0.0f, -48.36694f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "knl_hoe_soil8", "knl_hoe_soil", -1518.37f, 15.10406f, 3928.148f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_yawning_n_any", "stand_yawning_n_any", -1502.525f, 17.69016f, 3907.024f, 0.0f, 110.2036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "sit_no_table1", "sit_no_table", -1460.044f, 16.557f, 3946.428f, 0.0f, 14.92064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Pee", "Pee", -1450.339f, 16.54457f, 3945.888f, 0.0f, -91.77083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "sleeping_wall_scripted1", "sleeping_wall_scripted", -1452.033f, 16.54457f, 3937.491f, 0.0f, -166.2091f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "skin_scraper", "skin_scraper", -1481.266f, 14.80225f, 3855.542f, 0.0f, 13.81049f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "lean_rail1", "nlean_rail", -1531.801f, 14.03446f, 3838.799f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Sit_Ground_Drink", "Sit_Ground_Drink", -1457.124f, 16.54457f, 3946.441f, 0.0f, 56.92791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_49.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", -1474.818f, 16.548f, 3956.916f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1120), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "sit_camp_coffee_drink", "sit_camp_coffee_drink", -1462.267f, 16.546f, 3944.521f, 0.0f, -261.0739f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Sit_Ground_Drink1", "Sit_Ground_Drink", -1475.467f, 16.54457f, 3946.173f, 0.0f, -19.28305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Multistage_bucket1", "Multistage_bucket", -1483.919f, 17.194f, 3898.009f, 0.0f, -85.97762f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	DECOR_SET_INT(bVar0, "FlagSetNum", 1);
	Local_49.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_sleepBed_l1", "mex_sleepBed_l", -1480.657f, 16.546f, 3949.317f, 0.0f, -148.1573f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1124), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_sleepBed_r", "mex_sleepBed_r", -1477.953f, 16.546f, 3947.577f, 0.0f, 213.0571f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_sleepBed_r1", "mex_sleepBed_r", -1480.001f, 16.546f, 3945.905f, 0.0f, 33.33398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_sleepBed_l2", "mex_sleepBed_l", -1467.06f, 16.564f, 3939.242f, 0.0f, 105.7901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_sleepBed_l3", "mex_sleepBed_l", -1465.254f, 16.56536f, 3935.975f, 0.0f, -70.62105f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_49.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Multistage_sweeping_03", "Multistage_sweeping", -1499.973f, 17.56363f, 3917.548f, 0.0f, 171.2262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1128), 1);
	DECOR_SET_INT(Local_49.f_1128, "FlagSetNum", 3);
	Local_49.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -1510.18f, 17.41558f, 3908.153f, 0.0f, 107.8189f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1132), 1);
	Local_49.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -1509.841f, 17.41558f, 3906.289f, 0.0f, 50.70983f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1136), 1);
	Local_49.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -1479.349f, 16.54457f, 3939.397f, 0.0f, 76.0742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1140), 1);
	Local_49.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -1477.84f, 16.54457f, 3937.601f, 0.0f, 27.61599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1144), 1);
	Local_49.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", -1546.715f, 15.03447f, 3918.657f, 0.0f, 163.207f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1148), 1);
	Local_49.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand23", "smoking_stand", -1550.39f, 15.03447f, 3915.294f, 0.0f, 91.38368f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1152), 1);
	Local_49.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand24", "rand_idle_stand", -1544.27f, 15.03447f, 3922.966f, 0.0f, 111.8797f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1156), 1);
	Local_49.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand25", "smoking_stand", -1582.163f, 15.0725f, 3842.927f, 0.0f, 137.6652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1160), 1);
	Local_49.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand26", "smoking_stand", -1457.509f, 16.54457f, 3943.039f, 0.0f, 122.2502f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1164), 1);
	Local_49.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_49, "rand_idle_stand2", "rand_idle_stand", -1502.422f, 15.03303f, 3872.666f, 0.0f, -126.2428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1168), 1);
	Local_49.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_49, "smoking_stand27", "smoking_stand", -1478.472f, 16.54457f, 3938.528f, 0.0f, 55.73417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1172), 1);
	Local_49.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_49, "arm_wrestling_spectate1", "arm_wrestling_spectate", -1470.917f, 16.54662f, 3950.254f, 0.0f, 5.143475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1176), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_guntricks_e_any1", "stand_guntricks_e_any", -1470.211f, 16.54457f, 3944.001f, 0.0f, -139.6526f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_guntricks_e_any2", "stand_guntricks_e_any", -1462.606f, 16.54457f, 3947.076f, 0.0f, -243.6713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_guntricks_e_any3", "stand_guntricks_e_any", -1456.997f, 16.54457f, 3944.541f, 0.0f, -266.5351f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_49.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -1529.288f, 14.03305f, 3839.734f, 0.0f, -63.79673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1180), 1);
	Local_49.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_49, "lean_table", "lean_table", -1459.975f, 16.54457f, 3942.889f, 0.0f, -30.51801f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1184), 1);
	Local_49.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -1463.483f, 16.54457f, 3943.029f, 0.0f, -109.1718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1188), 1);
	Local_49.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -1466.99f, 16.54457f, 3949.445f, 0.0f, -422.5913f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1192), 1);
	Local_49.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -1466.777f, 16.54457f, 3947.17f, 0.0f, -505.4325f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1196), 1);
	Local_49.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -1462.058f, 16.54457f, 3950.57f, 0.0f, 59.91953f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1200), 1);
	Local_49.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -1457.836f, 16.54457f, 3941.808f, 0.0f, 142.1694f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1204), 1);
	Local_49.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_49, "stand_guntricks_e_any4", "stand_guntricks_e_any", -1509.81f, 17.41558f, 3910.547f, 0.0f, 51.15646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_49.f_1208), 1);
	Local_49.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_49, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", -1473.098f, 16.54662f, 3949.357f, 0.0f, -44.21534f, 0.0f);
	Local_49.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_49, "Rand_Idle_NearWall0", "Rand_Idle_NearWall", -1546.074f, 15.03447f, 3920.164f, 0.0f, 129.7915f, 0.0f);
	Local_49.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_49, "mex_stool_sit", "mex_stool_sit", -1463.714f, 16.54457f, 3951.358f, 0.0f, 26.77365f, 0.0f);
	return 1;
}

bool Function_85(int iParam0) //Position: 0x6AFF / 27391
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_89();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
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
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
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

void Function_86() //Position: 0x6E7A / 28282
{
	if (!Function_67(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_87() //Position: 0x6EBA / 28346
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

void Function_88(var uParam0, int iParam1) //Position: 0x6EE5 / 28389
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_89() //Position: 0x6EF6 / 28406
{
	if (!Function_67(128))
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

var Function_90(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6F38 / 28472
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_91(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_88(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_91(var uParam0, int iParam1, int iParam2) //Position: 0x6F70 / 28528
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
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

void Function_92(int iParam0, int iParam1) //Position: 0x7034 / 28724
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

bool Function_93() //Position: 0x707D / 28797
{
	var uVar0;
	
	Function_92(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_ring", 3, -1472.179f, 16.66442f, 3871.895f, 0.0f, 20.0f, 0.0f, 12.0f, 3.0f, 12.0f);
	*(&Local_4 + 8) = { -1472.254f, 16.3946f, 3871.771f };
	*(&Local_4 + 8 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_32 = CREATE_POINT_IN_LAYOUT(Local_4, "f_Horsebreaking", -1472.254f, 16.3946f, 3871.771f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 36) = { -1463.624f, 16.395f, 3871.771f };
	*(&Local_4 + 36 + 12) = { 0.0f, 86.15168f, 0.0f };
	Local_4.f_60 = CREATE_POINT_IN_LAYOUT(Local_4, "f_Onlooker1", -1463.624f, 16.395f, 3871.771f, 0.0f, 86.15168f, 0.0f);
	*(&Local_4 + 64) = { -1465.8f, 16.395f, 3862.353f };
	*(&Local_4 + 64 + 12) = { 0.0f, 151.0871f, 0.0f };
	Local_4.f_88 = CREATE_POINT_IN_LAYOUT(Local_4, "f_Onlooker2", -1465.8f, 16.395f, 3862.353f, 0.0f, 151.0871f, 0.0f);
	*(&Local_4 + 92) = { -1476.408f, 16.395f, 3863.545f };
	*(&Local_4 + 92 + 12) = { 0.0f, -135.22f, 0.0f };
	Local_4.f_116 = CREATE_POINT_IN_LAYOUT(Local_4, "f_Onlooker3", -1476.408f, 16.395f, 3863.545f, 0.0f, -135.22f, 0.0f);
	*(&Local_4 + 120) = { -1481.34f, 16.395f, 3875.777f };
	*(&Local_4 + 120 + 12) = { 0.0f, -68.64329f, 0.0f };
	Local_4.f_144 = CREATE_POINT_IN_LAYOUT(Local_4, "f_Onlooker4", -1481.34f, 16.395f, 3875.777f, 0.0f, -68.64329f, 0.0f);
	*(&Local_4 + 148) = { -1469.122f, 16.395f, 3879.373f };
	*(&Local_4 + 148 + 12) = { 0.0f, 17.80298f, 0.0f };
	Local_4.f_172 = CREATE_POINT_IN_LAYOUT(Local_4, "f_Onlooker5", -1469.122f, 16.395f, 3879.373f, 0.0f, 17.80298f, 0.0f);
}

