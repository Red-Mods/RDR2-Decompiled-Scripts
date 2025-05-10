//Decompiled with MagicRDR v1.0
//Function Count : 109
//Statics Count : 657
//Natives Count : 136
//Parameters Count : 2

#region Local Var
	struct<289> Local_0 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	bool bLocal_495 = false;
	bool bLocal_496 = false;
	var uLocal_497 = 0;
	var uLocal_498 = 5;
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
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	int iLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 1;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	int iLocal_651 = 0;
	var uLocal_652 = 0;
	float fLocal_653 = 0.0f;
	int iLocal_654 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_654 = 1;
	iLocal_493 = 0;
	Function_108(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_107("Initializing Cholla Springs", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_494 = 1000;
		switch (iLocal_493)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_493 = 1;
				}
				iLocal_494 = 0;
				break;
			
			case 0x00000001:
				if (Function_105())
				{
					iLocal_493 = 2;
				}
				iLocal_494 = 0;
				break;
			
			case 0x00000002:
				if (Function_96())
				{
					Function_95(&(Global_29008[iScriptParam_0]), 32);
					iLocal_493 = 3;
					Function_91(Local_0);
				}
				iLocal_494 = 0;
				break;
			
			case 0x00000003:
				bLocal_495 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ChollaSpringsVol", &iScriptParam_0, 2, 0);
				Function_90(&Global_6391, &Global_7327, iScriptParam_0);
				iLocal_493 = 5;
				iLocal_494 = 0;
				break;
			
			case 0x00000005:
				if (Function_89(&Global_6391, &Global_7327, iScriptParam_0))
				{
					iLocal_493 = 4;
					iLocal_494 = 0;
				}
				else
				{
					iLocal_494 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_88(&(Global_29008[iScriptParam_0]), 16))
				{
					if ((Global_63399 != 32 || Global_63399 != 16) || Global_63399 != 1)
					{
						SET_ENABLE_POINT_LIGHT(uLocal_652, 1);
						fLocal_653 = 0.0f;
						iLocal_651 = 1;
					}
					else
					{
						SET_ENABLE_POINT_LIGHT(uLocal_652, 0);
						fLocal_653 = 1.0f;
						iLocal_651 = 0;
					}
					iLocal_493 = 6;
				}
				iLocal_494 = 0;
				break;
			
			case 0x00000006:
				Function_87(0, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_86(0, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_85(0, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_84(0, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_83(0, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_81(0, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_80(0, &uLocal_498, Local_73);
				Function_87(1, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_86(1, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_85(1, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_84(1, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_83(1, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_81(1, &uLocal_498, -2923.128f, 13.051f, 2961.234f);
				Function_80(1, &uLocal_498, Local_73);
				Function_87(2, &uLocal_498, -2017.916f, 42.338f, 3014.271f);
				Function_86(2, &uLocal_498, -2017.916f, 42.338f, 3014.271f);
				Function_85(2, &uLocal_498, -2017.916f, 42.338f, 3014.271f);
				Function_84(2, &uLocal_498, -2017.916f, 42.338f, 3014.271f);
				Function_83(2, &uLocal_498, -2017.916f, 42.338f, 3014.271f);
				Function_81(2, &uLocal_498, -2017.916f, 42.338f, 3014.271f);
				Function_80(2, &uLocal_498, Local_73);
				Function_75(&Global_6391, &Global_7327, &uLocal_498, Global_6288, iScriptParam_0);
				Global_16875 = 0;
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_73.f_1672), false);
				if (DECOR_CHECK_EXIST(Local_73.f_1672, "SavingAtBedAllowed"))
				{
					DECOR_REMOVE(Local_73.f_1672, "SavingAtBedAllowed");
				}
				Function_74(Local_73.f_1672, Local_73.f_812);
				Function_95(&(Global_29008[iScriptParam_0]), 8);
				if (Function_88(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_73(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_493 = 10;
				}
				else
				{
					iLocal_493 = 7;
				}
				iLocal_494 = 0;
				break;
			
			case 0x00000007:
				Function_72(iScriptParam_0);
				if (Function_70(512))
				{
					Function_60(iScriptParam_0);
				}
				uLocal_497 = uLocal_497;
				Function_59(64);
				iLocal_493 = 8;
				iLocal_494 = 0;
				break;
			
			case 0x00000008:
				Function_58(0, Global_30640[0], -2080.289f, 16.962f, 2603.609f);
				if (!Function_57(&Global_30640))
				{
					Function_53(StackVal, 2, 0.5f, 0, Local_0, !Function_57(&Global_30640));
					Function_49(0, 8, 4, 0, 2);
					Function_59(64);
				}
				Function_95(&(Global_29008[iScriptParam_0]), 512);
				iLocal_493 = 9;
				iLocal_494 = 0;
				break;
			
			case 0x00000009:
				if (!Function_57(&Global_30640))
				{
					Function_47(Local_0, iScriptParam_0);
				}
				Global_29004 = 0;
				Function_95(&(Global_29008[iScriptParam_0]), 4);
				Function_46("Finished Initializing Cholla Springs", 5.0f);
				iLocal_493 = 10;
				iLocal_494 = 0;
				break;
			
			case 0x0000000A:
				if (Function_45(68) && iLocal_654)
				{
					bVar0 = FIND_NEAREST_DOOR(&Global_63541[6955] + 100, 10.0f);
					if (IS_DOOR_VALID(bVar0))
					{
						OPEN_DOOR_DIRECTION_FAST(bVar0, 1);
						iLocal_654 = 0;
					}
				}
				if (Global_16875)
				{
					if (!HAS_ITEM(Function_44(59), Global_34573))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_73.f_1672), false);
						if (DECOR_CHECK_EXIST(Local_73.f_1672, "SavingAtBedAllowed"))
						{
							DECOR_REMOVE(Local_73.f_1672, "SavingAtBedAllowed");
						}
						Global_16875 = 0;
					}
				}
				else if (HAS_ITEM(Function_44(59), Global_34573))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_73.f_1672), true);
					DECOR_SET_BOOL(Local_73.f_1672, "SavingAtBedAllowed", true);
					Global_16875 = 1;
				}
				Function_43();
				if (!Function_57(&Global_30640))
				{
					if (iLocal_599)
					{
						iLocal_599 = 0;
						iLocal_493 = 8;
						iLocal_494 = 0;
					}
				}
				else
				{
					iLocal_599 = 1;
				}
				Function_31(&(Global_26282[34]), "OFG", 20, Local_0, 3);
				if (Function_24(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_496))
					{
						bLocal_496 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_600, 51, 0);
					}
				}
				if (Function_88(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_493 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_494);
	}
	Function_23(iScriptParam_0);
	Function_11(&Global_6391, &Global_7327, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_59(64);
	Function_73(&(Global_29008[iScriptParam_0]), 32);
	Function_73(&(Global_29008[iScriptParam_0]), 64);
	Function_73(&(Global_29008[iScriptParam_0]), 8);
	Function_73(&(Global_29008[iScriptParam_0]), 512);
	Function_73(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_495))
	{
		TERMINATE_SCRIPT(bLocal_495);
	}
	Function_46("Unloaded Cholla Springs", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x6F7 / 1783
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

void Function_2(int iParam0) //Position: 0x72D / 1837
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x74F / 1871
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x765 / 1893
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x77B / 1915
{
	Function_6(&Local_73 + 4);
	RELEASE_LAYOUT_REF(Local_73);
	return;
}

void Function_6(int iParam0) //Position: 0x78D / 1933
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

void Function_7(var uParam0, int iParam1) //Position: 0x7B3 / 1971
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

void Function_8(var uParam0, int iParam1) //Position: 0x8E1 / 2273
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x8FB / 2299
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x918 / 2328
{
	Function_6(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x92A / 2346
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_22())
	{
		return;
	}
	strcpy(&cVar0, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_88(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_73(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_18(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_17(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_88(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_16(2) || Function_88(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_18(uParam0[iVar162], 2) && !Function_18(uParam0[iVar162], 4))
		{
			Function_12(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_18(uParam0[iVar162], 2) && !Function_18(uParam0[iVar162], 4))
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
		bVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(bVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(bVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar21));
				CLEAN_OBJECTSET(bVar21);
			}
			DESTROY_OBJECTSET(bVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_95(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xB2A / 2858
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

int Function_13(int iParam0) //Position: 0xC79 / 3193
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

int Function_14(int iParam0) //Position: 0xCA4 / 3236
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

void Function_15(var uParam0, int iParam1) //Position: 0xCD8 / 3288
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xCE7 / 3303
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xD03 / 3331
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xD1A / 3354
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xD36 / 3382
{
	if (Function_20(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, int iParam1) //Position: 0xD51 / 3409
{
	return (bParam0 && iParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xD5E / 3422
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

bool Function_22() //Position: 0x120C / 4620
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_23(int iParam0) //Position: 0x1215 / 4629
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

bool Function_24(int iParam0) //Position: 0x1280 / 4736
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_30()))
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
	if (Function_29())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_27(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_26(0))
	{
		return 0;
	}
	if (Function_22())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_25(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_25(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1303 / 4867
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

bool Function_26(int iParam0) //Position: 0x13A7 / 5031
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_27(int iParam0) //Position: 0x13C2 / 5058
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
		if (!Function_28(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_28(bool bParam0) //Position: 0x1476 / 5238
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_88(&(Global_29008[bParam0]), 2048);
}

bool Function_29() //Position: 0x1494 / 5268
{
	return Function_20(StackVal, 1);
}

var Function_30() //Position: 0x14A3 / 5283
{
	return StackVal;
}

void Function_31(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x14AE / 5294
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
			if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 250.0f)
			{
				Function_41(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 250.0f)
			{
				Function_41(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_40(iParam0, 63))
			{
				if (Function_39(76) || Function_45(76))
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
		if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 200.0f)
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
		if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 200.0f)
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
		if (!Function_40(iParam0, 63))
		{
			if (Function_39(76) || Function_45(76))
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

void Function_32() //Position: 0x16A9 / 5801
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

void Function_33() //Position: 0x16F0 / 5872
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

void Function_34(int iParam0, bool bParam1) //Position: 0x1742 / 5954
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

void Function_35(var uParam0, int iParam1) //Position: 0x176B / 5995
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_36(bool bParam0) //Position: 0x177A / 6010
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_37(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1786 / 6022
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

var Function_38() //Position: 0x1826 / 6182
{
	int iVar0;
	
	return iVar0;
}

int Function_39(int iParam0) //Position: 0x182E / 6190
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_40(int iParam0, bool bParam1) //Position: 0x1843 / 6211
{
	if (bParam1 <= 32)
	{
		return Function_20(*iParam0, Function_36(bParam1));
	}
	return Function_20(StackVal, Function_36((bParam1 - 32)));
}

void Function_41(int iParam0) //Position: 0x186E / 6254
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

void Function_42(bool bParam0) //Position: 0x189A / 6298
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

void Function_43() //Position: 0x18DF / 6367
{
	float fVar0;
	
	fVar0 = 0.1f;
	if (((Global_63399 != 32 || Global_63399 != 16) || Global_63399 != 1) && !iLocal_651)
	{
		fLocal_653 = (fLocal_653 - fVar0);
		if (fLocal_653 >= 0.0f)
		{
			fLocal_653 = 0.0f;
			SET_ENABLE_POINT_LIGHT(uLocal_652, 1);
			iLocal_651 = 1;
		}
	}
	else if (((Global_63399 != 2 || Global_63399 != 4) || Global_63399 != 8) && iLocal_651)
	{
		fLocal_653 = (fLocal_653 + fVar0);
		if (fLocal_653 <= 1.0f)
		{
			fLocal_653 = 1.0f;
			SET_ENABLE_POINT_LIGHT(uLocal_652, 0);
			iLocal_651 = 0;
		}
	}
	return;
}

var Function_44(bool bParam0) //Position: 0x1963 / 6499
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

int Function_45(int iParam0) //Position: 0x1A54 / 6740
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_46(bool bParam0, float fParam1) //Position: 0x1A69 / 6761
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

void Function_47(bool bParam0, bool bParam1) //Position: 0x1AA7 / 6823
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
		Function_48(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_22())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x1BA1 / 7073
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_49(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1BAE / 7086
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
		Function_50();
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

void Function_50() //Position: 0x1C92 / 7314
{
	int iVar0;
	
	Global_26960 = Function_51(StackVal);
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

int Function_51(bool bParam0) //Position: 0x1CE0 / 7392
{
	if (!Function_52(bParam0))
	{
		return 0;
	}
	return Global_26401[bParam0];
}

bool Function_52(bool bParam0) //Position: 0x1CF8 / 7416
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_53(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1D0D / 7437
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
		Function_56();
	}
	if (bParam5)
	{
		Function_54(1048576);
	}
}

void Function_54(int iParam0) //Position: 0x1E20 / 7712
{
	Function_55(&Global_28842, iParam0);
	return;
}

void Function_55(var uParam0, var uParam1) //Position: 0x1E2E / 7726
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_56() //Position: 0x1E49 / 7753
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_54(16384);
	}
	return;
}

bool Function_57(int iParam0) //Position: 0x1E65 / 7781
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

void Function_58(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1EB2 / 7858
{
	if (!Function_52(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

void Function_59(int iParam0) //Position: 0x1F14 / 7956
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_60(int iParam0) //Position: 0x1F27 / 7975
{
	if (Function_69(349) == 0)
	{
		Function_65(53, 2, 760, 0, 770, 2, 2, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 15, 0);
	}
	else
	{
		Function_65(53, 2, 760, 0, 770, 2, 0, 0, 4, iParam0, "$/content/DLC/MoOutfitsPack/event_jackalope", 63, 0, 50.0f, 2, 45, 0);
	}
	Function_64(&Global_17483[5375] + 120, 2, 8.0f, 1, 704);
	Function_63(&Global_17483[5375] + 120, 19.9f, 0.6f);
	Function_62(&Global_17483[5375] + 120, 0.0f, 2);
	Function_61(&Global_17483[5375] + 120, 10.0f);
	return;
}

void Function_61(int iParam0, int iParam1) //Position: 0x201F / 8223
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_62(int iParam0, float fParam1, int iParam2) //Position: 0x202D / 8237
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_63(int iParam0, float fParam1, int iParam2) //Position: 0x2043 / 8259
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_64(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x2059 / 8281
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_65(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x207F / 8319
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_66(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, uParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_66(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x20C1 / 8385
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
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0.5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0.5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0.5f));
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
	if (!Function_19())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
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
					bVar2 = Function_68(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_67(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_68(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_67(int iParam0, int iParam1) //Position: 0x2469 / 9321
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_68(int iParam0) //Position: 0x248A / 9354
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

int Function_69(int iParam0) //Position: 0x24A0 / 9376
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_70(int iParam0) //Position: 0x24E1 / 9441
{
	return Function_71(Global_83864.f_1252, iParam0);
}

int Function_71(var uParam0, int iParam1) //Position: 0x24F3 / 9459
{
	return (uParam0 && iParam1) == 0;
}

void Function_72(int iParam0) //Position: 0x2500 / 9472
{
	Function_65(18, 2, 100, 50, 50, 1, 32832, 1, 4, iParam0, "$/content/Ambient/Roaming/event_hangingb", 63, 2, 55.0f, 8, 65, 0);
	Function_64(&Global_17483[1875] + 120, 1, 5.0f, 1, 640);
	Function_61(&Global_17483[1875] + 120, 5.0f);
	Function_63(&Global_17483[575] + 120, 19.9f, 0.7f);
	Function_62(&Global_17483[575] + 120, -4.0f, 2);
	return;
}

void Function_73(var uParam0, int iParam1) //Position: 0x2595 / 9621
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

int Function_74(bool bParam0, bool bParam1) //Position: 0x25AC / 9644
{
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bParam0), "nPlayerUse", "MyRestartFlag", bParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

void Function_75(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2706 / 9990
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_88(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_76(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_73(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_95(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_76(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x27B8 / 10168
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_88(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(iParam0, 2))
	{
		return 1;
	}
	if (Function_18(iParam0, 4))
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
		uParam1->f_8 = Function_79(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_78(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(iParam0, 4);
	}
	Function_77(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_77(bool bParam0, int iParam1) //Position: 0x2923 / 10531
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_78(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_78(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_78(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_78(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_78(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_78(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_78(vector3 vParam0) //Position: 0x2A5F / 10847
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_79(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2A77 / 10871
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_38(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
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
	return bVar3;
}

void Function_80(int iParam0, var uParam1, bool bParam2) //Position: 0x2B90 / 11152
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

void Function_81(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2BEB / 11243
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_82(vector3 vParam0, vector3 vParam3) //Position: 0x2C51 / 11345
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_83(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2C7E / 11390
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_84(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2CE6 / 11494
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_85(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D50 / 11600
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_86(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2DB5 / 11701
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_87(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2E1D / 11805
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_88(var uParam0, int iParam1) //Position: 0x2E80 / 11904
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_89(var uParam0, var uParam1, int iParam2) //Position: 0x2E9C / 11932
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_22())
	{
		return 1;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_88(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
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

void Function_90(var uParam0, var uParam1, int iParam2) //Position: 0x2F7D / 12157
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_22())
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_88(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_95(&(Global_29008[iParam2]), 0x40000000);
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

int Function_91(bool bParam0) //Position: 0x3065 / 12389
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
			bVar8 = RAND_INT_RANGE(1, 10000) > 2750;
			bVar9 = (((bVar8 || DECOR_CHECK_EXIST(bVar0, "guero")) || DECOR_CHECK_EXIST(bVar0, "always")) || Global_3370);
			bVar10 = Function_22();
			bVar11 = (Function_93() && !Function_92(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_93()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
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

bool Function_92(bool bParam0, bool bParam1) //Position: 0x31AE / 12718
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_93() //Position: 0x31CE / 12750
{
	if (Function_22())
	{
		return (Function_94() != 1 || Function_94() != 0);
	}
	return 0;
}

int Function_94() //Position: 0x31E7 / 12775
{
	return Global_79349.f_16;
}

void Function_95(var uParam0, int iParam1) //Position: 0x31F3 / 12787
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_96() //Position: 0x3202 / 12802
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_104(3, 3);
	bVar0 = bVar0;
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_campfire", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire03_law", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire01_law", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_1", 1, 0);
	Function_102(&Local_73 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_97(&Local_73 + 4))
	{
		return 0;
	}
	Local_73 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(Local_73))
	{
		Local_73 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	Local_73.f_656 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint", -1864.0f, 25.66513f, 3304.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_660 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint1", -2307.94f, 24.22564f, 3004.581f, 0.0f, 0.0f, 0.0f);
	Local_73.f_664 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint2", -2328.088f, 17.06667f, 3172.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_668 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint3", -2872f, 74.29016f, 2177.927f, 0.0f, 0.0f, 0.0f);
	Local_73.f_672 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint4", -2832f, 49.97124f, 2422.863f, 0.0f, 0.0f, 0.0f);
	Local_73.f_676 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint5", -2832.009f, 20.221f, 3076.099f, 0.0f, 268.302f, 0.0f);
	Local_73.f_680 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint6", -1916.0f, 28.12522f, 2248.98f, 0.0f, 0.0f, 0.0f);
	Local_73.f_684 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint7", -2904.914f, 19.0745f, 2701.286f, 0.0f, 0.0f, 0.0f);
	Local_73.f_688 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint8", -3440.624f, 23.55206f, 2500.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_692 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint9", -1948.986f, 30.338f, 3468.504f, 0.0f, 4.794f, 0.0f);
	Local_73.f_696 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", Local_73, 8, 0);
	*(&Local_73 + 700[06]) = { -2934.529f, 14.297f, 2973.767f };
	*(&Local_73 + 700[06] + 12) = { 0.0f, 176.6796f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_73, "Flag2", -2934.529f, 14.297f, 2973.767f, 0.0f, 176.6796f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_73.f_696);
	*(&Local_73 + 700[16]) = { -2932.407f, 13.051f, 2969.621f };
	*(&Local_73 + 700[16] + 12) = { 0.0f, 88.681f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_73, "Flag1", -2932.407f, 13.051f, 2969.621f, 0.0f, 88.681f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_73.f_696);
	Local_73.f_752 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint10", -2002.36f, 43.13799f, 3572.674f, 0.0f, 0.0f, 0.0f);
	Local_73.f_756 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint11", -3504.35f, 16.25382f, 3138.471f, 0.0f, 0.0f, 0.0f);
	Local_73.f_760 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint12", -1233.881f, 22.28738f, 3209.578f, 0.0f, 0.0f, 0.0f);
	Local_73.f_764 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint13", -2827.172f, 20.218f, 3076.897f, 0.0f, 26.674f, 0.0f);
	Local_73.f_768 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhtreas", -2830.891f, 20.21f, 3077.916f, 0.0f, 36.637f, 0.0f);
	Local_73.f_772 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhtreas1", -2819.144f, 20.898f, 3097.647f, 0.0f, 167.963f, 0.0f);
	Local_73.f_776 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhtreas2", -2849.445f, 19.723f, 3104.265f, 0.0f, 238.743f, 0.0f);
	Local_73.f_780 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint14", -1911.676f, 29.161f, 2259.116f, 0.0f, 212.788f, 0.0f);
	Local_73.f_784 = CREATE_POINT_IN_LAYOUT(Local_73, "chof_bhint15", -2864.669f, 82.175f, 2160.382f, 0.0f, 198.307f, 0.0f);
	*(&Local_73 + 788) = { -2833.166f, 50.332f, 2417.407f };
	*(&Local_73 + 788 + 12) = { 0.0f, -76.14326f, 0.0f };
	Local_73.f_812 = CREATE_POINT_IN_LAYOUT(Local_73, "player_save_flag_PLE", -2833.166f, 50.332f, 2417.407f, 0.0f, -76.14326f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campsite_pee", "Pee", -2306.277f, 28.39551f, 2246.277f, 0.0f, 121.9837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_look_distance_b1", "look_distance_binocs", -2307.302f, 24.09412f, 3013.673f, 0.0f, 180.1332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_tend3", "horse_tend", -2315.239f, 23.18176f, 3001.263f, 0.0f, -134.7993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_stay", "horse_stay", -2317.562f, 24.09412f, 3013.69f, 0.0f, -236.7155f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_tend1", "horse_tend", -2313.096f, 24.09412f, 3015.129f, 0.0f, -50.75182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_tend", "horse_tend", -2310.636f, 24.09412f, 3016.065f, 0.0f, -50.75182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_tend5", "horse_tend", -2314.721f, 23.09976f, 2998.606f, 0.0f, -113.6393f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_stay5", "horse_stay", -2314.11f, 23.31754f, 3000.44f, 0.0f, -312.8547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_horse_stay4", "horse_stay", -2315.098f, 23.09695f, 2997.101f, 0.0f, -299.9993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_lookdistance", "stand_lookdistance_w_any", -2321.633f, 23.09019f, 2995.128f, 0.0f, 57.05201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_rowdydrink", "stand_drunk_rowdydrink", -2306.282f, 24.09412f, 3004.487f, 0.0f, 88.02834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_Pee4", "Pee", -2307.927f, 24.08537f, 3018.643f, 0.0f, -137.4129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_look_distance_b", "look_distance_binocs", -2312.529f, 24.0251f, 3007.667f, 0.0f, 101.1517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_sleeping_wall", "sleeping_wall_scripted", -2308.404f, 24.09412f, 3007.325f, 0.0f, -43.6532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_sstand6", "smoking_stand", -2309.569f, 24.09412f, 3005.758f, 0.0f, -39.61635f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_Ground3", "Rand_Idle_Sit_Ground", -2307.361f, 24.09412f, 3005.891f, 0.0f, 11.60332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_lobinocs5", "look_distance_binocs", -2306.032f, 24.05074f, 2993.701f, 0.0f, -7.349932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_NearWall2", "Rand_Idle_NearWall", -2309.781f, 24.09412f, 3004.131f, 0.0f, -134.4684f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_runk_throw", "stand_drunk_throwbottle", -2308.548f, 24.09412f, 3006.197f, 0.0f, -22.12869f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "twoCrw_Campfire_Tend", "Sit_Ground_Campfire_Tend", -2308.48f, 24.09412f, 3003.163f, 0.0f, -158.2691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campsite_stand_idle", "rand_idle_stand_nospawn", -2303.121f, 27.91747f, 2244.138f, 0.0f, -130.4733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance6", "stand_lookdistance_w_any", -1958.388f, 25.837f, 2253.862f, 0.0f, 532.3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -1928.494f, 28.198f, 2256.35f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_816), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_guntricks3", "stand_guntricks_e_any", -1913.875f, 28.405f, 2250.965f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_guntricks2", "stand_guntricks_e_any", -1918.708f, 28.993f, 2256.007f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", -1926.926f, 28.128f, 2248.919f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_820), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_horse_stay5", "horse_stay", -1931.363f, 31.714f, 3457.895f, 0.0f, -90.69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_horse_stay4", "horse_stay", -1922.429f, 33.198f, 3457.79f, 0.0f, -119.5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_guntricks1", "stand_guntricks_e_any", -1935.254f, 31.071f, 3465.635f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", -3554.44f, 15.6855f, 3158.265f, 0.0f, 209.569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_824), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_rand_idle_stand3", "stand_lookdistance_w_any", -3552.909f, 15.63719f, 3157.377f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_rand_idle_stand2", "rand_idle_stand", -3555.438f, 15.60915f, 3159.332f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", -3543.762f, 15.3694f, 3162.819f, 0.0f, -210.2364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", -3545.373f, 15.49567f, 3162.648f, 0.0f, 34.25905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_828), 0);
	Local_73.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", -3544.541f, 15.49885f, 3161.289f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_832), 0);
	Local_73.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_look_distance_binocs2", "look_distance_binocs", -3545.451f, 15.64982f, 3159.776f, 0.0f, 138.5309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_836), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_horse_tend1", "horse_tend", -3495.967f, 19.65504f, 3136.116f, 0.0f, -91.20521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_horse_tend", "horse_tend", -3499.674f, 16.25382f, 3147.382f, 0.0f, 21.67242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_horse_stay2", "horse_stay", -3497.875f, 16.7437f, 3146.125f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_horse_stay1", "horse_stay", -3496f, 17.07369f, 3146.051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_horse_stay", "horse_stay", -3494.914f, 17.262f, 3150.906f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_look_distance_binocs1", "look_distance_binocs", -3516.268f, 15.515f, 3124.192f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_Pee", "Pee", -3492.114f, 19.66672f, 3136.246f, 0.0f, -26.90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_rand_idle_stand1", "rand_idle_stand", -3520.276f, 11.12099f, 3146.674f, 0.0f, 78.99949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_rand_idle_stand", "rand_idle_stand", -3509.928f, 13.78963f, 3146.481f, 0.0f, -82.29346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", -3511.514f, 13.83953f, 3143.129f, 0.0f, -161.3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", -3497.143f, 17.32072f, 3150.853f, 0.0f, -105.2133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_lean_rail", "look_distance_binocs", -3520.693f, 15.672f, 3127.985f, 0.0f, 37.36112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", -3516.66f, 15.74677f, 3134.089f, 0.0f, 41.5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_look_distance_binocs", "look_distance_binocs", -3503.269f, 15.4507f, 3126.436f, 0.0f, -47.4214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_840), 0);
	Local_73.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", -3507.42f, 14.41f, 3147.197f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_844), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_smoking_stand2", "smoking_stand", -1946.722f, 30.068f, 3464.956f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", -1954.085f, 30.043f, 3461.345f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", -1913.139f, 35.528f, 3465.48f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", -1931.168f, 31.081f, 3472.563f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_smoking_stand1", "smoking_stand", -1947.871f, 30.049f, 3454.507f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DIR_LockedFootlocker", "Locked_Footlocker", -1987.543f, 48.60604f, 3602.282f, 0.0f, -147.379f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_INT(bVar0, "GringoDollarAmt", 11);
	Local_73.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_73, "lean_rail2", "nlean_rail", -2932.204f, 14.297f, 2980.332f, 0.0f, 179.9064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_848), 0);
	Local_73.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_73, "horse_tend1", "horse_tend", -2908.074f, 13.05095f, 2943.909f, 0.0f, 116.8855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_852), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_horse_tend1", "horse_tend", -101.656f, 55.227f, 2801.408f, 0.0f, -141.5272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_horse_tend", "horse_tend", -111.4741f, 55.2157f, 2810.284f, 0.0f, 66.63183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_horse_stay3", "horse_stay", -113.5305f, 55.2157f, 2812.0f, 0.0f, -134.0859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_horse_stay2", "horse_stay", -100.2657f, 55.2157f, 2800.768f, 0.0f, 38.61838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_horse_stay1", "horse_stay", -116.4423f, 55.2157f, 2812.442f, 0.0f, 146.8178f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Sit_Ground_Drink_Ven", "Sit_Ground_Drink", -2019.311f, 42.37034f, 3013.165f, 0.0f, -163.9837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "NearWall_Ven", "Rand_Idle_NearWall", -2003.049f, 41.99572f, 3043.089f, 0.0f, -36.88197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "sleeping_wall_Ven", "sleeping", -2006.959f, 42.16058f, 3043.295f, 0.0f, -91.77731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_worried_Ven", "stand_worried_n_any", -2008.618f, 42.041f, 3046.047f, 0.0f, -131.9067f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Pee_Ven", "Pee", -2005.099f, 42.04128f, 3055.422f, 0.0f, 1.465339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_lookdistanc_Ven", "stand_lookdistance_w_any", -1982.15f, 45.017f, 3070.941f, 0.0f, -164.3452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "lean_rail_Ven", "nlean_rail", -2017.916f, 42.338f, 3014.271f, 0.0f, -165.6215f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "look_distance_binocs_Ven", "look_distance_binocs", -2011.333f, 42.35631f, 3012.558f, 0.0f, -77.03822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "ook_out_window_R_Ven", "look_out_window_R", -2023.634f, 42.041f, 3010.935f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_horse_stay", "horse_stay", -102.823f, 55.2157f, 2802.823f, 0.0f, 49.26177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_sit_ground_smoke", "sit_ground_smoke", -105.7061f, 55.2157f, 2803.866f, 0.0f, -116.7412f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_play_harmonica", "sit_ground_play_harmonica", -113.111f, 55.2157f, 2806.26f, 0.0f, -108.6369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_stand_guntricks", "stand_guntricks_e_any", -111.1549f, 55.2157f, 2808f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_stand_yawning", "stand_yawning_n_any", -106.334f, 55.2157f, 2806.334f, 0.0f, 100.3735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_stand_lookdistanc", "stand_lookdistance_w_any", -117.9617f, 55.2157f, 2809.962f, 0.0f, 96.93845f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_smoking_stand", "smoking_stand", -109.5375f, 55.21568f, 2805.538f, 0.0f, 142.1955f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_look_distance_binocs", "look_distance_binocs", -114.3744f, 54.75f, 2814.374f, 0.0f, 191.7611f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Man_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -111.443f, 55.198f, 2804.726f, 0.0f, 182.6724f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_73, "lean_rail1", "nlean_rail", -2935.203f, 14.297f, 2977.5f, 0.0f, 91.34452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_856), 0);
	Local_73.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_hammer_tabletop", "nuse_shelf", -2901.083f, 13.05095f, 2953.657f, 0.0f, 46.55552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_860), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2900.832f, 16.386f, 2946.484f, 0.0f, 114.7093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_73, "nsit_docks", "nsit_docks", -2903.891f, 16.4614f, 2948.211f, 0.0f, 43.21585f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_864), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "look_distance_binocs", "look_distance_binocs", -2912f, 14.05486f, 2976f, 0.0f, 213.9748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2888.407f, 13.051f, 2930.088f, 0.0f, -89.05313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Multistage_bucket", "Multistage_bucket", -2905.335f, 13.051f, 2957.407f, 0.0f, 255.3506f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "any_washCloths", "any_washCloths", -2934.739f, 14.3303f, 2975.081f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_73, "horse_tend", "horse_tend", -2903.199f, 13.05095f, 2950.597f, 0.0f, 219.8719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_868), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Rand_Idle_NearWall_Shoulder_L", "Rand_Idle_NearWall_Shoulder_L", -2919.18f, 13.085f, 2991.829f, 0.0f, 265.6623f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_horseshoe", "stand_horseshoe", -2908.933f, 13.051f, 2956.028f, 0.0f, -12.4248f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "nlean_rail", "nlean_rail", -2925.291f, 14.297f, 2980.532f, 0.0f, -87.29653f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_hammer_wall", "stand_hammer_wall", -2899.185f, 13.051f, 2945.381f, 0.0f, 190.7813f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "lean_fence_L_talking", "lean_fence_L_talking", -2935.112f, 14.297f, 2978.921f, 0.0f, 87.12711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_horse_tend", "horse_tend", -1230.139f, 22.08622f, 3216.563f, 0.0f, 96.76688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1237.924f, 22.299f, 3209.018f, 0.0f, 88.8347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_872), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_horse_tend2", "horse_tend", -1249.513f, 23.42436f, 3210.53f, 0.0f, -91.21593f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_horse_tend1", "horse_tend", -1248.0f, 22.43698f, 3216.0f, 0.0f, -95.92507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_horse_stay2", "horse_stay", -1248f, 22.82869f, 3213.701f, 0.0f, 81.59499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_horse_stay1", "horse_stay", -1226.133f, 22.08622f, 3212.074f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_horse_stay", "horse_stay", -1224f, 22.08622f, 3209.978f, 0.0f, 35.12274f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_loobinocs", "look_distance_binocs", -1226.583f, 22.11765f, 3215.137f, 0.0f, -98.96873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_NearWall", "Rand_Idle_NearWall", -1240.39f, 22.069f, 3206.121f, 0.0f, 89.76422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn_rtand", "rand_idle_stand", -1220.766f, 23.494f, 3204.79f, 0.0f, -54.23795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "np2Grn_Pee", "Pee", -1228.186f, 22.25996f, 3204.888f, 0.0f, -31.56896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "p2Grn__e_any", "stand_guntricks_e_any", -1235.087f, 22.23831f, 3209.045f, 0.0f, 68.27065f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "P2Grn_rowdydrink", "stand_drunk_rowdydrink", -1233.846f, 22.23988f, 3207.39f, 0.0f, 128.9384f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "P2Grn__Ground", "Rand_Idle_Sit_Ground", -1238.468f, 22.3443f, 3207.1f, 0.0f, -144.53f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Grn_smoking_stand", "smoking_stand", -1233.558f, 22.2506f, 3212.879f, 0.0f, 1.289225f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", -2011.576f, 45.81986f, 3593.491f, 0.0f, -125.9303f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_stand_lookdistance1", "stand_lookdistance_w_any", -1975.478f, 48.8424f, 3604.32f, 0.0f, -132.8838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_horse_tend", "horse_tend", -1996.0f, 42.13971f, 3568.0f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_horse_stay2", "horse_stay", -2006.351f, 41.217f, 3562.468f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_horse_stay1", "horse_stay", -2006.351f, 41.66239f, 3564.456f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_horse_stay", "horse_stay", -1994.442f, 41.63882f, 3565.585f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_rand_idle_stand", "rand_idle_stand", -1997.602f, 43.169f, 3578.858f, 0.0f, 34.43791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_lookbinocs1", "look_distance_binocs", -2006.103f, 44.906f, 3599.149f, 0.0f, 181.4747f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_stand_announce", "stand_announce", -1989.706f, 48.9093f, 3595.814f, 0.0f, 40.51711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_stand_lookdistance", "stand_lookdistance_w_any", -1973.284f, 49.67323f, 3596.814f, 0.0f, -98.72509f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_Pee", "Pee", -1988f, 42.33515f, 3580.0f, 0.0f, -92.33208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_lookbinocs", "look_distance_binocs", -1994.93f, 42.25149f, 3569.405f, 0.0f, -33.84345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_sleeping_scripted", "sleeping_scripted", -1997.189f, 43.14079f, 3575.614f, 0.0f, 34.06158f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_throwbottle", "stand_drunk_throwbottle", -2002.435f, 43.169f, 3577.113f, 0.0f, -68.14408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_smoking_stand", "smoking_stand", -1995.996f, 44.17252f, 3584.72f, 0.0f, 0.2951546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_sit_harmonica", "sit_ground_play_harmonica", -1998.269f, 43.07529f, 3575.167f, 0.0f, -245.3799f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "DlR_Sit_Tend", "Sit_Ground_Campfire_Tend", -1999.387f, 43.169f, 3577.917f, 0.0f, 0.6212928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_play_harmonica4", "sit_ground_play_harmonica", -1949.729f, 30.338f, 3468.748f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_play_harmonica3", "sit_ground_play_harmonica", -1944.537f, 30.174f, 3462.752f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_guntricks", "stand_guntricks_e_any", -1940.999f, 30.465f, 3466.823f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_lookdistance4", "stand_lookdistance_w_any", -1938.157f, 40.077f, 3411.248f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_peeing4", "stand_peeing_b_any", -1938.611f, 31.35f, 3445.034f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_880), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_lookdistance3", "stand_lookdistance_w_any", -1928.01f, 31.471f, 3470.586f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_lookdistance2", "stand_lookdistance_w_any", -1905.697f, 37.586f, 3460.313f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_lookdistance1", "stand_lookdistance_w_any", -1973.683f, 23.404f, 3452.104f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_stand_lookdistance", "stand_lookdistance_w_any", -1966.768f, 24.473f, 3444.756f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_horse_stay3", "horse_stay", -1928.781f, 32.027f, 3459.594f, 0.0f, -90.69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_horse_stay2", "horse_stay", -1919.589f, 33.631f, 3452.771f, 0.0f, -119.5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_sit_play_harmonica", "sit_ground_play_harmonica", -1945.132f, 30.25158f, 3468.703f, 0.0f, -76.99028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_smoking_stand", "smoking_stand", -1944.187f, 30.25158f, 3467.699f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_sleeping_scripted", "sleeping_scripted", -1948.295f, 30.42581f, 3469.483f, 0.0f, -56.70472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_lookdistance_b2", "look_distance_binocs", -1937.952f, 30.59689f, 3471.31f, 0.0f, -168.9819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_lookdistance_b1", "look_distance_binocs", -1955.76f, 29.60071f, 3464.03f, 0.0f, 93.37398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_look_out", "look_out_window_L", -1946.82f, 30.33619f, 3470.723f, 0.0f, -173.4546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", -1944.898f, 30.25158f, 3469.718f, 0.0f, -89.65778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "del_Pee", "Pee", -1949.664f, 30.068f, 3463.846f, 0.0f, -239.1129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_yawning", "stand_yawning_n_any", -1910.459f, 29.215f, 2259.989f, 0.0f, 47.39015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_smoking_stand2", "smoking_stand", -1915.036f, 30.291f, 2265.368f, 0.0f, 91.15357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance5", "stand_lookdistance_w_any", -1927.442f, 27.087f, 2297.244f, 0.0f, 532.3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_Pee1", "Pee", -1923.613f, 27.28f, 2233.131f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance4", "stand_lookdistance_w_any", -1912.419f, 26.04f, 2214.9f, 0.0f, 369.6023f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance3", "stand_lookdistance_w_any", -1887.422f, 25.50956f, 2230.188f, 0.0f, 369.6023f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance2", "stand_lookdistance_w_any", -1889.173f, 26.06054f, 2294.459f, 0.0f, 532.3543f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_Sit_Ground1", "Rand_Idle_Sit_Ground", -1922.28f, 28.10736f, 2243.813f, 0.0f, -151.0814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_sit_ground_smoke1", "sit_ground_smoke", -1919.767f, 28.07989f, 2245.429f, 0.0f, -228.1689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_lookdistance_b1", "look_distance_binocs", -1953.821f, 26.43f, 2269.117f, 0.0f, 41.80516f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_llook_distance_bin2", "look_distance_binocs", -2915.209f, 18.79024f, 2710.875f, 0.0f, -240.6861f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker9", "Locked_Footlocker", -3433.135f, 23.59216f, 2500.124f, 0.0f, 179.9754f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_horse_tend", "horse_tend", -3432.923f, 23.90886f, 2489.69f, 0.0f, -220.4545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_horse_stay2", "horse_stay", -3430.707f, 23.75444f, 2500.938f, 0.0f, 69.35268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_horse_stay1", "horse_stay", -3429.728f, 24.09414f, 2491.26f, 0.0f, -232.7364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_horse_stay", "horse_stay", -3428.362f, 24.09412f, 2495.286f, 0.0f, 94.78333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_Pee", "Pee", -3433.225f, 23.594f, 2505.034f, 0.0f, 35.20251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_look_distance_b1", "look_distance_binocs", -3432f, 23.59217f, 2508.0f, 0.0f, -152.0119f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_look_distance_b", "look_distance_binocs", -3452f, 23.09019f, 2500f, 0.0f, -262.6823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", -3435.124f, 23.592f, 2497.544f, 0.0f, 102.2661f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_stand_guntricks2", "stand_guntricks_e_any", -3436.929f, 23.592f, 2494.608f, 0.0f, 49.04795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_stand_guntricks1", "stand_guntricks_e_any", -3437.837f, 23.592f, 2492.929f, 0.0f, -182.7671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_sleeping_wall", "sit_ground_smoke", -3446.411f, 23.09018f, 2499.819f, 0.0f, -223.3851f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_smoking_stand", "smoking_stand", -3436.582f, 23.592f, 2501.046f, 0.0f, 128.5334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", -3437.098f, 23.592f, 2502.806f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_Sit_Ground1", "Rand_Idle_Sit_Ground", -2903.393f, 19.075f, 2701.3f, 0.0f, 139.7804f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_llook_distance_bin1", "look_distance_binocs", -2901.03f, 19.0745f, 2710.082f, 0.0f, -187.8924f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_horse_stay3", "horse_stay", -2889.462f, 19.19097f, 2695.489f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_horse_stay2", "horse_stay", -2885.788f, 18.6661f, 2697.682f, 0.0f, -132.036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_horse_stay1", "horse_stay", -2912.183f, 18.66879f, 2715.71f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_horse_stay", "horse_stay", -2904.096f, 18.66879f, 2714.48f, 0.0f, 23.0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_horse_tend1", "horse_tend", -2888f, 18.6661f, 2700f, 0.0f, 62.70821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_horse_tend", "horse_tend", -2908.379f, 18.66879f, 2714.691f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_stand_guntricks", "stand_guntricks_e_any", -2905.96f, 19.075f, 2702.57f, 0.0f, -112.69f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_smoking_stand", "smoking_stand", -2902.563f, 19.075f, 2703.72f, 0.0f, 50.53659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_Sit_Ground", "Rand_Idle_Sit_Ground", -2904.813f, 19.075f, 2704.292f, 0.0f, -1.60452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_llook_distance_bin", "look_distance_binocs", -2899.741f, 19.0745f, 2709.509f, 0.0f, -110.9011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_lPee", "Pee", -2914.146f, 19.28531f, 2652.242f, 0.0f, 20.78754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_lstand_lookdistance", "stand_lookdistance_w_any", -2910.037f, 19.07449f, 2668.611f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Odd_lean_fence", "lean_fence_L_talking", -2921.907f, 19.0543f, 2710.088f, 0.0f, -405.9772f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_horse_stay", "horse_stay", -1913.693f, 28.11f, 2244.617f, 0.0f, 178.051f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance1", "stand_lookdistance_w_any", -1878.651f, 25.90808f, 2261.477f, 0.0f, 261.5796f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_lookdistance", "stand_lookdistance_w_any", -1938.915f, 27.18923f, 2248.859f, 0.0f, 415.6428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_horse_stay3", "horse_stay", -1883.159f, 25.808f, 2255.907f, 0.0f, 214.5367f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_horse_stay2", "horse_stay", -1887.953f, 25.778f, 2252.354f, 0.0f, 206.2613f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_horse_stay1", "horse_stay", -1890.348f, 26.039f, 2243.639f, 0.0f, 181.4791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_Pee", "Pee", -1910.703f, 29.06427f, 2265.037f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_sleepingscripted", "sleeping_wall_scripted", -1907.404f, 28.53935f, 2252.136f, 0.0f, -32.20943f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_smoking_stand1", "smoking_stand", -1918.182f, 28.912f, 2255.277f, 0.0f, 91.15357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_Sit_Ground", "Rand_Idle_Sit_Ground", -1920.754f, 28.0557f, 2248.032f, 0.0f, -5.000641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_sit_ground_smoke", "sit_ground_smoke", -1922.146f, 28.07582f, 2246.551f, 0.0f, -70.17099f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_guntricks1", "stand_guntricks_e_any", -1889.321f, 25.69709f, 2271.382f, 0.0f, -95.93178f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_stand_guntricks", "stand_guntricks_e_any", -1887.121f, 25.72222f, 2270.516f, 0.0f, -235.0462f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_smoking_stand", "smoking_stand", -1894.167f, 26.3774f, 2264.46f, 0.0f, -138.4957f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "han_lookdistance_b", "look_distance_binocs", -1925.775f, 30.04066f, 2265.69f, 0.0f, 146.1794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_horse_stay", "horse_stay", -1871.25f, 24.947f, 3304.927f, 0.0f, -66.14877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_horse_tend", "horse_tend", -1871.038f, 24.947f, 3306.689f, 0.0f, 100.4271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_look_distanceBin", "look_distance_binocs", -1900.0f, 24.2108f, 3300.0f, 0.0f, 58.03205f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_Sit_Ground", "Rand_Idle_Sit_Ground", -1858.272f, 25.08248f, 3308.799f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_stand_lookdistance", "stand_lookdistance_w_any", -1860.0f, 24.02274f, 3292.0f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_play_harmonica2", "sit_ground_play_harmonica", -2826.924f, 20.222f, 3075.662f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_peeing3", "stand_peeing_b_any", -2839.318f, 19.804f, 3087.875f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_888), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", -2828.607f, 20.079f, 3076.498f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_play_harmonica1", "sit_ground_play_harmonica", -2830.344f, 20.079f, 3077.056f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", -2825.495f, 20.078f, 3065.822f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_guntricks2", "stand_guntricks_e_any", -2831.572f, 20.078f, 3071.561f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_smoking_stand1", "smoking_stand", -2819.144f, 20.898f, 3097.647f, 0.0f, 8.869471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", -2860.124f, 18.071f, 3052.454f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", -2839.148f, 19.074f, 3047.189f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", -2816.013f, 19.074f, 3054.258f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", -2794.852f, 19.075f, 3074.642f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", -2807.877f, 20.397f, 3089.516f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", -2877.226f, 18.9f, 3088.852f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_horse_stay3", "horse_stay", -2839.699f, 19.8962f, 3083.606f, 0.0f, -92.17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_horse_stay2", "horse_stay", -2842.107f, 20.07843f, 3077.05f, 0.0f, -62.75959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_892), 0);
	Local_73.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_horse_stay1", "horse_stay", -2825.325f, 20.078f, 3061.285f, 0.0f, 291.1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_896), 0);
	Local_73.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_horse_stay", "horse_stay", -2809.631f, 20.06283f, 3078.922f, 0.0f, 262.5791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_900), 0);
	Local_73.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_peeing2", "stand_peeing_b_any", -2856.467f, 18.07058f, 3083.134f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_904), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_guntricks1", "stand_guntricks_e_any", -2820.465f, 20.07843f, 3077.348f, 0.0f, -216.9882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_guntricks", "stand_guntricks_e_any", -2822.097f, 20.07843f, 3079.603f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", -2832.129f, 20.19984f, 3075.018f, 0.0f, -91.55288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_lookdistance_binocs", "look_distance_binocs", -2810.723f, 20.06739f, 3080.786f, 0.0f, -93.60166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -2827.709f, 20.21305f, 3073.477f, 0.0f, -93.82076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_lean_fence_L_talking", "lean_fence_L_talking", -2815.689f, 20.069f, 3080.324f, 0.0f, -86.0629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_look_out_window_R", "look_out_window_R", -2827.741f, 20.22371f, 3077.974f, 0.0f, -183.1475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", -2834.184f, 20.0484f, 3078.272f, 0.0f, -269.9485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_stand_lookdistance", "stand_lookdistance_w_any", -2808.104f, 19.074f, 3061.17f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_lookdistance_bi", "look_distance_binocs", -1848.0f, 24.20136f, 3296.0f, 0.0f, -48.03191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_riverwash", "nriverwash", -1896.0f, 20.03532f, 3278.427f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_play_harmonica", "sit_ground_play_harmonica", -1864.677f, 25.66241f, 3306.876f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_Pee", "Pee", -1866.15f, 24.92944f, 3310.094f, 0.0f, -39.43715f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_swall_scripted", "sleeping_wall_scripted", -1860.336f, 24.94665f, 3308.0f, 0.0f, -90.61703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_rand_idle_stand1", "rand_idle_stand", -2889.7f, 74.951f, 2179.784f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_horse_stay1", "horse_stay", -2876.946f, 63.95793f, 2208.62f, 0.0f, -411.4891f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_horse_stay", "horse_stay", -2881.993f, 63.32512f, 2207.375f, 0.0f, -324.5696f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_Rand_Idlewall1", "Rand_Idle_NearWall", -2832.241f, 50.06886f, 2419.76f, 0.0f, -165.8873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "pleg_horse_tend", "horse_tend", -2837.17f, 50.06274f, 2419.742f, 0.0f, -174.6107f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "pleg_horse_stay3", "horse_stay", -2836.022f, 50.00851f, 2422.997f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "pleg_horse_stay2", "horse_stay", -2828.464f, 49.72395f, 2428.7f, 0.0f, 5.013465f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "pleg_horse_stay1", "horse_stay", -2829.578f, 50.06861f, 2422.836f, 0.0f, -98.19669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "pleg_horse_stay", "horse_stay", -2828.639f, 50.00851f, 2425.449f, 0.0f, -93.15823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_73, "pleg_stand_smoke", "smoking_stand_campfire", -2828.633f, 50.367f, 2415.569f, 0.0f, 6.046f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_908), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_lean_rail1", "stand_lookdistance_w_any", -2823.15f, 50.13624f, 2418.37f, 0.0f, -133.9271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_lean_rail", "stand_lookdistance_w_any", -2829.861f, 50.02065f, 2404.48f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "nPlHse_Pee", "Pee", -2837.53f, 49.99474f, 2417.286f, 0.0f, 92.59926f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_Rand_Idlewall", "Rand_Idle_NearWall", -2835.383f, 49.87704f, 2413.798f, 0.0f, 13.29576f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_Rand_Idle_Sit", "Rand_Idle_Sit_Ground", -2833.558f, 49.85797f, 2413.086f, 0.0f, 20.55275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_look_distance_b", "look_distance_binocs", -2818.289f, 50.16013f, 2441.946f, 0.0f, 145.3511f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "PlHse_stand_lookdistance", "stand_lookdistance_w_any", -2803.651f, 47.61401f, 2435.472f, 0.0f, 604.6125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_smoking_stand3", "smoking_stand", -2864.773f, 73.869f, 2177.522f, 0.0f, -140.3333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_Pee2", "Pee", -2884.337f, 68.098f, 2196.993f, 0.0f, -8.973413f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_smoking_stand2", "smoking_stand", -2889.596f, 68.07998f, 2189.904f, 0.0f, -115.3605f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_sleeping_wall", "sleeping_wall_scripted", -2868.646f, 69.94992f, 2190.018f, 0.0f, 30.61945f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_Pee1", "Pee", -2888.585f, 74.67922f, 2179.7f, 0.0f, 17.31714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_stand_guntricks", "stand_guntricks_e_any", -2851.004f, 74.49863f, 2160.491f, 0.0f, -178.8246f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "stand_yawning_n_any1", "stand_yawning_n_any", -2869.534f, 77.34993f, 2171.384f, 0.0f, -446.2964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_smoking_stand1", "smoking_stand", -2850.925f, 80.91016f, 2152.941f, 0.0f, -186.2538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_stand_yawning", "stand_yawning_n_any", -2863.793f, 82.21507f, 2162.268f, 0.0f, 47.39015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_smoking_stand", "smoking_stand", -2865.889f, 82.13461f, 2160.711f, 0.0f, 156.7821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_Rand_Idle_Sit1", "Rand_Idle_Sit_Ground", -2866.512f, 82.24068f, 2162.827f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_lookdistance_bin1", "look_distance_binocs", -2905.05f, 63.644f, 2225.066f, 0.0f, -67.55823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_lookdistance_b", "look_distance_binocs", -2856.574f, 62.45f, 2205.337f, 0.0f, -164.3135f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk__lookdistance2", "stand_lookdistance_w_any", -2848.564f, 66.814f, 2179.506f, 0.0f, 203.8714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_lookdistance1", "stand_lookdistance_w_any", -2884.276f, 68.109f, 2196.944f, 0.0f, 182.2417f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RatSnk_lookdistance_bin", "look_distance_binocs", -2877.223f, 63.679f, 2212.098f, 0.0f, -181.4657f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -1865.814f, 25.66671f, 3307.519f, 0.0f, 87.70355f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_stand_yawning_n_any", "stand_yawning_n_any", -1865.306f, 25.66399f, 3305.107f, 0.0f, 39.85841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_use_shelf", "nuse_shelf", -1862.918f, 25.66398f, 3306.517f, 0.0f, -88.87695f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_smoking_stand", "smoking_stand", -1856.748f, 24.94665f, 3306.175f, 0.0f, 8.869471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_lean_fence_L_talking", "nlean_rail", -1866.671f, 25.6088f, 3300.205f, 0.0f, 88.52171f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_lean_fence_L", "lean_fence_L", -1876.88f, 24.78501f, 3302.044f, 0.0f, 2.954553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_lean_rail", "nlean_rail", -1862.731f, 25.68472f, 3300.49f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_Rand_Idle_Sit_G1", "Rand_Idle_Sit_Ground", -2297.463f, 17.06667f, 3189.693f, 0.0f, -60.72914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_horse_stay1", "horse_stay", -2325.298f, 17.06667f, 3163.429f, 0.0f, -54.787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_horse_stay", "horse_stay", -2339.857f, 17.06667f, 3159.897f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_horse_tend4", "horse_tend", -2328.579f, 17.06667f, 3159.601f, 0.0f, -12.03976f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_horse_stay3", "horse_stay", -2332.498f, 17.06667f, 3159.259f, 0.0f, -183.6086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_horse_stay2", "horse_stay", -2336.508f, 17.06667f, 3159.829f, 0.0f, -164.9671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_stand_guntricks_1", "stand_guntricks_e_any", -2331.044f, 17.06667f, 3167.898f, 0.0f, -91.07268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_smoking_stand5", "smoking_stand", -2331.86f, 17.067f, 3173.427f, 0.0f, -145.6339f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_earWall1", "Rand_Idle_NearWall", -2335.833f, 17.06667f, 3165.465f, 0.0f, 2.348993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_rand_idle_stand", "rand_idle_stand", -2306.294f, 17.067f, 3165.18f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_Pee3", "Pee", -2284.865f, 17.47239f, 3186.339f, 0.0f, -36.12689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_look_distance_bin", "look_distance_binocs", -2307.035f, 19.98892f, 3193.416f, 0.0f, 213.3344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_smoking_stand4", "smoking_stand", -2296.114f, 17.06667f, 3187.239f, 0.0f, 139.1357f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_Rand_Idle_Sit_G", "Rand_Idle_Sit_Ground", -2295.173f, 17.06667f, 3189.489f, 0.0f, 61.58029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_stand_lookdistance_", "stand_lookdistance_w_any", -2313.974f, 18.98317f, 3139.142f, 0.0f, -81.86817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "RilCrg_sleeping_wall", "sleeping_wall_scripted", -2335.925f, 17.112f, 3171.869f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_horse_tend2", "horse_tend", -1862.967f, 24.924f, 3296.038f, 0.0f, 177.8756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_horse_stay1", "horse_stay", -1860.0f, 24.924f, 3296.0f, 0.0f, -34.19213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_horse_stay2", "horse_stay", -1861.859f, 24.929f, 3312.894f, 0.0f, -96.24462f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "LDJ_horse_tend3", "horse_tend", -1861.174f, 24.929f, 3314.454f, 0.0f, 84.86111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi1", "Campfire02", -2269.801f, 17.56864f, 2484f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_912, "MP_ONLY", true);
	Local_73.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi2", "Campfire03", -2338.0f, 18.57689f, 2508.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi3", "Campfire04", -2389.497f, 20.58039f, 2488f, 0.0f, 0.0f, 0.0f);
	Local_73.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi4", "Campfire05", -2375.945f, 20.57701f, 2516.959f, 0.0f, -28.58611f, 0.0f);
	Local_73.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi5", "Campfire01", -2400.0f, 27.73763f, 2624f, 0.0f, -90.08619f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_928, "MP_ONLY", true);
	Local_73.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi6", "Campfire02", -2397.63f, 21.08458f, 2447.949f, 0.0f, 0.0f, 0.0f);
	Local_73.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi7", "Campfire03", -2460.448f, 21.59076f, 2420.433f, 0.0f, 0.0f, 0.0f);
	Local_73.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi8", "Campfire04", -2485.235f, 22.58824f, 2348.1f, 0.0f, 6.492813f, 0.0f);
	Local_73.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi10", "Campfire01", -2563.905f, 27.10588f, 2228.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi12", "Campfire03", -2575.653f, 27.10814f, 2167.793f, 0.0f, 0.0f, 0.0f);
	Local_73.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi13", "Campfire01", -2578.209f, 25.09804f, 2113.374f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_952, "MP_ONLY", true);
	Local_73.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi14", "Campfire03", -2784f, 43.16864f, 2392.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_956, "MP_ONLY", true);
	Local_73.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi15", "Campfire01", -2732.012f, 39.15295f, 2479.944f, 0.0f, 0.0f, 0.0f);
	Local_73.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi16", "Campfire02", -2832f, 32.12549f, 2492.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi18", "Campfire03", -2852.006f, 51.20001f, 2392.037f, 0.0f, 0.0f, 0.0f);
	Local_73.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi19", "Campfire03_law", -2704.013f, 51.20001f, 2196.004f, 0.0f, 0.0f, 0.0f);
	Local_73.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi21", "Campfire02", -2944.32f, 65.25488f, 2289.136f, 0.0f, 0.0f, 0.0f);
	Local_73.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi23", "Campfire01_law", -2954.589f, 43.16993f, 2444.467f, 0.0f, -7.673816f, 0.0f);
	Local_73.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi24", "Campfire05", -2907.983f, 63.25003f, 2235.96f, 0.0f, 0.0f, 0.0f);
	Local_73.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi27", "Campfire03", -2859.865f, 27.10588f, 2529.76f, 0.0f, 54.23653f, 0.0f);
	Local_73.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi28", "Campfire04", -2984.561f, 31.33581f, 2579.961f, 0.0f, 0.0f, 0.0f);
	Local_73.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi29", "Campfire05", -2984f, 26.10196f, 2624f, 0.0f, 8.737748f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_996, "MP_ONLY", true);
	Local_73.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi30", "Campfire01", -2736f, 25.09805f, 2944f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1000, "MP_ONLY", true);
	Local_73.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi31", "Campfire02", -2112.0f, 20.58037f, 2736.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1004, "MP_ONLY", true);
	Local_73.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi32", "Campfire03", -2102.618f, 17.06668f, 2357.143f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1008, "MP_ONLY", true);
	Local_73.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi33", "Campfire05", -2069.571f, 17.06665f, 1996.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1012, "MP_ONLY", true);
	Local_73.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi34", "Campfire03_law", -2235.997f, 24.0941f, 2900.474f, 0.0f, -90.96239f, 0.0f);
	Local_73.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi35", "Campfire01", -2232.0f, 14.55685f, 2832.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi36", "Campfire02", -2327.977f, 23.09019f, 3042.621f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi37", "Campfire03", -2300.0f, 16.06275f, 3080.0f, 0.0f, -65.13084f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1028, "MP_ONLY", true);
	Local_73.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi38", "Campfire04", -2214.194f, 24.09412f, 3145.864f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi40", "Campfire01", -2416.725f, 28.1098f, 3178.042f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi41", "Campfire02", -2500.0f, 21.08235f, 3096.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi42", "Campfire03", -2544.0f, 22.08627f, 3076.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi43", "Campfire04", -1584.0f, 42.16473f, 3572.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi48", "Campfire03_bad", -2033.209f, 42.16473f, 3350.193f, 0.0f, -67.82351f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1052, "MP_ONLY", true);
	Local_73.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi49", "Campfire01", -2463.666f, 16.06274f, 2957.086f, 0.0f, -87.54749f, 0.0f);
	Local_73.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi59", "Campfire02", -3313.911f, 11.07134f, 2994.153f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi60", "Campfire03", -3168.0f, 14.0549f, 3016.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi61", "Campfire03", -2905.278f, 17.0667f, 2842.082f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi62", "Campfire04", -3109.608f, 16.06276f, 2793.519f, 0.0f, -179.8667f, 0.0f);
	Local_73.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi63", "Campfire03", -3432f, 36.64314f, 2768f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi64", "Campfire01", -2944f, 18.07059f, 2732f, 0.0f, -174.7564f, 0.0f);
	Local_73.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi65", "Campfire02", -2772f, 18.57256f, 2836f, 0.0f, -87.87708f, 0.0f);
	Local_73.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi66", "Campfire03", -2508.0f, 22.08626f, 2906.427f, 0.0f, -60.85707f, 0.0f);
	Local_73.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi67", "Campfire04", -3280f, 12.04706f, 2984f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi68", "Campfire03_bad", -2416.0f, 15.05881f, 2784f, 0.0f, -21.76875f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1096, "MP_ONLY", true);
	Local_73.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi70", "Campfire02", -1668.919f, 30.11763f, 3035.07f, 0.0f, 36.61399f, 0.0f);
	DECOR_SET_BOOL(Local_73.f_1100, "MP_ONLY", true);
	Local_73.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi71", "Campfire03", -3460f, 17.45671f, 2676f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_73, "cs_campfire_poi72", "Campfire04", -3468f, 21.58434f, 2480f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker", "Locked_Footlocker", -2813.631f, 21.05924f, 3098.029f, 0.0f, 258.3164f, 0.0f);
	Local_73.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker1", "Locked_Footlocker", -1660f, 39.55385f, 2584.0f, 0.0f, 171.0893f, 0.0f);
	Local_73.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker2", "Locked_Footlocker", -1950.584f, 30.338f, 3469.875f, 0.0f, -92.42374f, 0.0f);
	Local_73.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker4", "Locked_Footlocker", -2604.907f, 25.09647f, 2868.141f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker5", "Locked_Footlocker", -2854.107f, 74.559f, 2158.164f, 0.0f, -136.8519f, 0.0f);
	Local_73.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker6", "Locked_Footlocker", -2821.483f, 50.244f, 2438.324f, 0.0f, 319.7627f, 0.0f);
	Local_73.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker7", "Locked_Footlocker", -2330.187f, 39.57245f, 2356.538f, 0.0f, 138.4779f, 0.0f);
	Local_73.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker8", "Locked_Footlocker", -2359.105f, 32.39352f, 3237.303f, 0.0f, -95.38628f, 0.0f);
	Local_73.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -1809.164f, 34.13332f, 2614.975f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -1872.868f, 25.09804f, 2534.356f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -1819.221f, 33.12939f, 2498.033f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -1881.43f, 27.10588f, 2354.711f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -1776.0f, 42.16269f, 2420.654f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -1862.088f, 25.43321f, 2253.097f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -1863.983f, 24.80974f, 2124.637f, 0.0f, 111.3935f, 0.0f);
	Local_73.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -1953.868f, 25.73973f, 2156.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -2076.509f, 18.07056f, 2114.895f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", -2117.773f, 17.05431f, 2306.228f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -2062.649f, 16.06273f, 2395.693f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -2025.139f, 16.06274f, 2494.748f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -2186.835f, 16.56468f, 2494.746f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -2004.895f, 19.07037f, 2663.057f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -1888f, 26.09381f, 2740.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", -2097.638f, 16.07927f, 2757.475f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", -1936f, 26.09594f, 2816.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", -1750.301f, 29.11371f, 2951.231f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", -1713.958f, 29.11143f, 2785.685f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", -1793.629f, 32.12547f, 3028.976f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", -1599.583f, 31.12155f, 3058.855f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", -1681.41f, 30.58092f, 3150.357f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", -1986.594f, 41.1608f, 3140.292f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", -1953.15f, 43.16864f, 3336.652f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", -1998.062f, 38.17972f, 3299.311f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", -1649.182f, 39.15294f, 3581.322f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", -1926.915f, 32.84261f, 3450.15f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", -2208.176f, 27.10588f, 3275.162f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", -2272.921f, 21.08237f, 3141.617f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", -2304.0f, 16.06275f, 3103.27f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", -2506.098f, 20.07843f, 3029.75f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", -2267.31f, 25.62406f, 3004.974f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", -2380.0f, 15.05882f, 2916.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", -2400f, 15.05884f, 2816f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", -2386.359f, 26.56646f, 2669.375f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", -2430.064f, 28.93966f, 2539.944f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", -2446.346f, 21.06786f, 2434.44f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", -2465.73f, 22.34854f, 2327.623f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", -2564.0f, 33.12941f, 2264.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", -2484f, 24.59608f, 2124f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", -2594.33f, 31.12157f, 2228.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", -2721.778f, 48.18823f, 2246.322f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", -2821.329f, 50.19109f, 2278.865f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", -2787.912f, 45.17645f, 2364.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1320 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", -2931.98f, 42.1647f, 2445.57f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1324 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", -2725.072f, 43.66911f, 2588.745f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1328 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", -2886.282f, 24.30968f, 2586.586f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1332 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", -3057.38f, 23.59215f, 2636.545f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1336 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", -3162f, 27.03656f, 2619.981f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1340 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", -2972.393f, 18.99831f, 2724.636f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1344 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", -2931.138f, 16.5647f, 2769.227f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1348 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", -2820f, 15.04506f, 2880.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1352 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", -2677.099f, 37.0814f, 2862.823f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1356 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", -2583.262f, 24.07536f, 2836f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1360 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", -2944f, 13.05095f, 2988.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1364 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", -3025.173f, 12.04702f, 2939.328f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1368 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", -2996.0f, 16.06271f, 3052.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1372 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", -2870.417f, 18.05603f, 3068.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1376 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", -2961.148f, 39.14639f, 3152.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1380 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", -3364f, 34.76507f, 2897.138f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1384 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", -3451.863f, 38.68925f, 2782.621f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1388 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", -3516.026f, 18.00411f, 2658.301f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1392 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", -3466.109f, 20.10135f, 2579.818f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1396 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", -3487.573f, 21.96187f, 2449.466f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1400 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", -3451.715f, 32.39011f, 2378.037f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1404 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", -3329.114f, 33.22234f, 2416.813f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1408 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", -3153.094f, 32.99203f, 2528.005f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1412 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", -2877.417f, 27.083f, 2542.436f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1416 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", -2801.798f, 29.59754f, 2698.214f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1420 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", -2565.893f, 29.11371f, 2579.068f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1424 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", -2532.0f, 24.08308f, 2825.685f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1428 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", -2548.0f, 22.0697f, 3064.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1432 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", -2732.613f, 36.07454f, 3114.997f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1436 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", -2252.015f, 14.23525f, 2837.254f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1440 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", -2392.0f, 16.04904f, 3033.567f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1444 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", -2121.752f, 31.11604f, 3150.439f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1448 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", -2188.784f, 26.07653f, 3335.883f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1452 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", -1913.648f, 14.05918f, 3527.989f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1456 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", -1592.0f, 42.16473f, 3580.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1460 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", -1917.401f, 46.16298f, 3350.608f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1464 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", -2058.322f, 33.12001f, 3268.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1468 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", -2101.707f, 38.21952f, 3009.054f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1472 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", -2016.0f, 16.05705f, 2452.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1476 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", -1808.353f, 34.11918f, 3010.601f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1480 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", -2020.183f, 33.11653f, 2904.958f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1484 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", -1901.352f, 27.10078f, 2829.72f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1488 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", -1648.51f, 30.11284f, 3033.932f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1492 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", -1635.213f, 36.12833f, 2925.545f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1496 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", -1931.117f, 18.0657f, 2546.134f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1500 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", -2450.85f, 24.07297f, 2305.088f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1504 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", -2288f, 25.59441f, 2265.334f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1508 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", -2159.397f, 18.07059f, 2131.043f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1512 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", -2582.329f, 28.10516f, 2194.395f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1516 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", -1856f, 24.09851f, 2176.955f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1520 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", -1964.618f, 27.10588f, 2090.045f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1524 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", -1934.848f, 19.07001f, 2482.137f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1528 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", -2032.373f, 16.06274f, 2420.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1532 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", -2930.862f, 30.97843f, 2541.092f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1536 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_WildFeverFew100", "Player_Herb_WildFeverFew", -2977.802f, 23.03248f, 2678.177f, 0.0f, -131.8582f, 0.0f);
	Local_73.f_1540 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage", "Player_Herb_DesertSage", -3531.307f, 22.08626f, 2392f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1544 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", -3404f, 25.59999f, 2464f, 0.0f, 83.73667f, 0.0f);
	Local_73.f_1548 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -3409.871f, 35.75687f, 2366.129f, 0.0f, 108.7428f, 0.0f);
	Local_73.f_1552 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", -3501.291f, 17.07282f, 2676.421f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1556 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -3390.313f, 22.58824f, 2533.687f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1560 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -3357.473f, 28.10983f, 2833.473f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1564 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -3185.485f, 28.44057f, 2866.027f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1568 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -3111.059f, 22.47323f, 2672f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1572 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -3313.609f, 48.9672f, 2286.391f, 0.0f, -150.0233f, 0.0f);
	Local_73.f_1576 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -3439.223f, 45.05908f, 2292.257f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1580 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", -3520.0f, 18.57258f, 2592.073f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1584 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", -3377.422f, 11.94043f, 2970.384f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1588 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", -3087.329f, 12.04706f, 2967.311f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1592 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", -3040f, 12.04702f, 2928f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1596 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", -3046.282f, 19.91639f, 2709.539f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1600 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage", "Player_Herb_RedSage", -2952f, 14.05487f, 3009.02f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1604 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage1", "Player_Herb_RedSage", -2703.62f, 28.74411f, 2983.983f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1608 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage2", "Player_Herb_RedSage", -2602.854f, 20.07299f, 3008f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1612 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage3", "Player_Herb_RedSage", -2461.875f, 19.07451f, 3039.008f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1616 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage4", "Player_Herb_RedSage", -2370.378f, 15.05882f, 2993.947f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1620 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage5", "Player_Herb_RedSage", -2182.813f, 33.12939f, 3067.767f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1624 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage6", "Player_Herb_RedSage", -2204.127f, 29.11371f, 2952.043f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1628 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage7", "Player_Herb_RedSage", -2496.0f, 26.09545f, 2802.195f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1632 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage8", "Player_Herb_RedSage", -2327.571f, 15.20463f, 2857.772f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1636 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage9", "Player_Herb_RedSage", -2734.011f, 30.11765f, 2873.989f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1640 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage10", "Player_Herb_RedSage", -2969.938f, 17.10321f, 2784f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1644 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage11", "Player_Herb_RedSage", -3141.563f, 11.81059f, 2959.274f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1648 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage12", "Player_Herb_RedSage", -2420.0f, 16.06274f, 3068.0f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1652 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage13", "Player_Herb_RedSage", -2238.543f, 25.09804f, 3101.457f, 0.0f, 0.0f, 0.0f);
	Local_73.f_1656 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Player_Herb_RedSage14", "Player_Herb_RedSage", -2068.0f, 36.14114f, 2984f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "look_distance_binocsx", "look_distance_binocs", -2299.929f, 27.38924f, 2245.614f, 0.0f, -146.725f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_1660 = CREATE_GRINGO_IN_LAYOUT(Local_73, "treasure_hunting_1", "treasure_hunting_1", -1900.209f, 27.49931f, 2251.607f, 0.0f, 79.36184f, 0.0f);
	Local_73.f_1664 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -2833.042f, 50.35676f, 2415.177f, 0.0f, -157.8512f, 0.0f);
	Local_73.f_1668 = CREATE_GRINGO_IN_LAYOUT(Local_73, "Locked_Footlocker10", "Locked_Footlocker", -2337.794f, 17.06667f, 3172.046f, 0.0f, -72.43813f, 0.0f);
	DECOR_SET_INT(Local_73.f_1668, "Give_AvatarItem", 4);
	Local_73.f_1672 = CREATE_GRINGO_IN_LAYOUT(Local_73, "player_sleep_PLE", "player_sleep_bed_R", -2833.441f, 50.332f, 2417.903f, 0.0f, 103.9856f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_horse_stay4", "horse_stay", -2833.166f, 20.082f, 3098.089f, 0.0f, -92.17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_73.f_1676 = CREATE_GRINGO_IN_LAYOUT(Local_73, "mrc_horse_stay5", "horse_stay", -2832.59f, 20.078f, 3061.418f, 0.0f, 291.1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_73.f_1676), 0);
	return 1;
}

bool Function_97(int iParam0) //Position: 0xDD90 / 56720
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_101();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_100(iParam0[iVar03], 8);
		}
		else if (Function_99())
		{
			iVar1 = 1;
			Function_100(iParam0[iVar03], 8);
		}
		Function_100(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_100(iParam0[iVar03], 1);
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
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_100(iParam0[iVar03], 2);
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
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_100(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_100(iParam0[iVar03], 2);
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
	Function_98();
	return 1;
}

void Function_98() //Position: 0xE10B / 57611
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

bool Function_99() //Position: 0xE14B / 57675
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

void Function_100(var uParam0, int iParam1) //Position: 0xE176 / 57718
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_101() //Position: 0xE187 / 57735
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

var Function_102(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE1C9 / 57801
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_103(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_100(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_103(var uParam0, int iParam1, int iParam2) //Position: 0xE201 / 57857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_100(uParam0[iVar03], 4);
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

void Function_104(int iParam0, int iParam1) //Position: 0xE2C5 / 58053
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

bool Function_105() //Position: 0xE30E / 58126
{
	var uVar0;
	
	Function_104(3, 3);
	uVar0 = uVar0;
	Function_102(&Local_0 + 4, "p_uti_cover2x1x", 0, 0);
	Function_102(&Local_0 + 4, "p_uti_cover1x1x", 0, 0);
	Function_102(&Local_0 + 4, "p_uti_cover1x2x", 0, 0);
	if (!Function_97(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_Graveyard", 3, -2908.625f, 17.94441f, 2688.64f, 0.0f, 20.0f, 0.0f, 26.60202f, 7.525174f, 26.60202f);
	*(&Local_0 + 48) = { -2434.318f, 25.34245f, 2138.649f };
	*(&Local_0 + 48 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_72 = CREATE_POINT_IN_LAYOUT(Local_0, "CHO_twrCampfire", -2434.318f, 25.34245f, 2138.649f, 0.0f, 0.0f, 0.0f);
	Local_0.f_76 = Function_106(Local_0, "cover2x1x0", "p_uti_cover2x1x", -1874.574f, 25.15615f, 3310.97f, 0.0f, -55.16314f, 0.0f, 1);
	Local_0.f_80 = Function_106(Local_0, "cover2x1x1", "p_uti_cover2x1x", -1875.562f, 24.42323f, 3298.636f, 41.3482f, -94.0601f, -42.74914f, 1);
	Local_0.f_84 = Function_106(Local_0, "cover2x1x2", "p_uti_cover2x1x", -1894.304f, 25.13744f, 3305.493f, 79.69798f, -96.1249f, -80.11449f, 1);
	Local_0.f_88 = Function_106(Local_0, "cover1x1x0", "p_uti_cover1x1x", -1893.099f, 23.6921f, 3299.567f, 1.031222f, 0.0f, 0.0f, 1);
	Local_0.f_92 = Function_106(Local_0, "cover1x2x0", "p_uti_cover1x2x", -1872.981f, 24.77232f, 3301.277f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_96 = Function_106(Local_0, "cover1x1x1", "p_uti_cover1x1x", -1889.483f, 25.20171f, 3305.896f, 0.3153433f, 0.0f, 0.0f, 1);
	Local_0.f_100 = Function_106(Local_0, "cover1x1x2", "p_uti_cover1x1x", -1870.083f, 24.25316f, 3294.455f, 0.02395189f, 16.52971f, -1.150986f, 1);
	Local_0.f_104 = Function_106(Local_0, "cover2x1x3", "p_uti_cover2x1x", -1871.17f, 24.65515f, 3297.785f, 0.0f, -108.0473f, 0.0f, 1);
	Local_0.f_108 = Function_106(Local_0, "cover2x1x4", "p_uti_cover2x1x", -1898.048f, 24.17256f, 3300.073f, -86.26497f, -92.01823f, 86.6328f, 1);
	Local_0.f_112 = Function_106(Local_0, "cover1x2x1", "p_uti_cover1x2x", -1898.89f, 23.66671f, 3297.622f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_116 = Function_106(Local_0, "cover2x1x5", "p_uti_cover2x1x", -1868.45f, 24.91129f, 3314.147f, 0.0f, -122.8839f, 0.0f, 1);
	Local_0.f_120 = Function_106(Local_0, "cover1x1x3", "p_uti_cover1x1x", -1852.681f, 24.91608f, 3301.679f, 0.0f, -30.25064f, 0.0f, 1);
	Local_0.f_124 = Function_106(Local_0, "cover2x1x6", "p_uti_cover2x1x", -1855.119f, 24.97884f, 3301.298f, 0.0f, 59.71492f, 0.0f, 1);
	Local_0.f_128 = Function_106(Local_0, "cover2x1x7", "p_uti_cover2x1x", -1852.854f, 24.77687f, 3297.26f, -5.619742f, 57.96167f, -4.432617f, 1);
	Local_0.f_132 = Function_106(Local_0, "cover1x1x4", "p_uti_cover1x1x", -1877.822f, 25.19737f, 3307.809f, -2.465835f, -2.881502f, -3.360986f, 1);
	Local_0.f_136 = Function_106(Local_0, "cover2x1x8", "p_uti_cover2x1x", -1879.318f, 36.23691f, 3321.556f, 173.9886f, -168.316f, -179.2431f, 1);
	Local_0.f_140 = Function_106(Local_0, "cover1x1x5", "p_uti_cover1x1x", -1883.052f, 36.229f, 3320.932f, -11.42422f, -12.52498f, 3.229102f, 1);
	Local_0.f_144 = Function_106(Local_0, "cover1x2x2", "p_uti_cover1x2x", -1875.51f, 36.1945f, 3322.666f, -9.240377f, -19.99353f, -0.5183975f, 1);
	Local_0.f_148 = Function_106(Local_0, "cover2x1x9", "p_uti_cover2x1x", -1871.931f, 36.01286f, 3324.151f, 167.0025f, -157.7994f, -184.747f, 1);
	Local_0.f_152 = Function_106(Local_0, "cover2x1x10", "p_uti_cover2x1x", -1886.588f, 35.91621f, 3320.727f, 162.9637f, -175.6157f, -170.9016f, 1);
	Local_0.f_156 = Function_106(Local_0, "cover2x1x11", "p_uti_cover2x1x", -1937.624f, 27.33243f, 2260.236f, 0.0f, 95.86443f, 0.0f, 1);
	Local_0.f_160 = Function_106(Local_0, "cover2x1x12", "p_uti_cover2x1x", -1926.193f, 27.129f, 2285.985f, 0.0f, 156.8953f, 0.0f, 1);
	Local_0.f_164 = Function_106(Local_0, "cover2x1x13", "p_uti_cover2x1x", -1927.651f, 27.44351f, 2275.759f, 0.0f, -28.0458f, 0.0f, 1);
	Local_0.f_168 = Function_106(Local_0, "cover2x1x14", "p_uti_cover2x1x", -1938.835f, 27.18849f, 2252.075f, 0.0f, 89.23954f, 0.0f, 1);
	Local_0.f_172 = Function_106(Local_0, "cover1x2x3", "p_uti_cover1x2x", -1938.844f, 27.19193f, 2253.084f, -0.673139f, -0.07919134f, -0.06951825f, 1);
	Local_0.f_176 = Function_106(Local_0, "cover1x1x6", "p_uti_cover1x1x", -1932.0f, 27.79487f, 2250.824f, 0.0f, 7.039717f, 0.0f, 1);
	Local_0.f_180 = Function_106(Local_0, "cover1x1x7", "p_uti_cover1x1x", -1930.538f, 28.08783f, 2244.0f, 0.0f, 15.29191f, 0.0f, 1);
	Local_0.f_184 = Function_106(Local_0, "cover1x1x8", "p_uti_cover1x1x", -1916.584f, 27.95595f, 2242.491f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_188 = Function_106(Local_0, "cover1x1x9", "p_uti_cover1x1x", -1928.13f, 28.11059f, 2247.87f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_192 = Function_106(Local_0, "cover2x1x15", "p_uti_cover2x1x", -1935.932f, 27.03125f, 2234.192f, 0.0f, -137.268f, 0.0f, 1);
	Local_0.f_196 = Function_106(Local_0, "cover1x2x4", "p_uti_cover1x2x", -1942.899f, 26.81865f, 2238.644f, 0.0f, 47.61343f, 0.0f, 1);
	Local_0.f_200 = Function_106(Local_0, "cover2x1x16", "p_uti_cover2x1x", -1942.899f, 26.81865f, 2238.644f, 0.0f, 47.61343f, 0.0f, 1);
	Local_0.f_204 = Function_106(Local_0, "cover2x1x17", "p_uti_cover2x1x", -1949.317f, 26.52253f, 2253.317f, 0.0f, -77.24281f, 0.0f, 1);
	Local_0.f_208 = Function_106(Local_0, "cover2x1x18", "p_uti_cover2x1x", -1952.928f, 26.29795f, 2257.751f, 0.0f, -80.79298f, 0.0f, 1);
	Local_0.f_212 = Function_106(Local_0, "cover2x1x19", "p_uti_cover2x1x", -1943.015f, 27.06477f, 2275.347f, 0.0f, -62.59982f, 0.0f, 1);
	Local_0.f_216 = Function_106(Local_0, "cover2x1x20", "p_uti_cover2x1x", -1938.285f, 27.19747f, 2280.0f, 0.0f, -45.37524f, 0.0f, 1);
	Local_0.f_220 = Function_106(Local_0, "cover2x1x21", "p_uti_cover2x1x", -1943.22f, 27.10296f, 2280.717f, -2.120075f, -50.84748f, 2.269612f, 1);
	Local_0.f_224 = Function_106(Local_0, "cover1x1x10", "p_uti_cover1x1x", -1926.155f, 27.10197f, 2294.155f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_228 = Function_106(Local_0, "cover2x1x22", "p_uti_cover2x1x", -2831.469f, 50.00412f, 2405.231f, 0.0f, 0.7156401f, 0.0f, 1);
	Local_0.f_232 = Function_106(Local_0, "cover2x1x23", "p_uti_cover2x1x", -2793.605f, 43.169f, 2404.136f, 0.0f, -50.4087f, 0.0f, 1);
	Local_0.f_236 = Function_106(Local_0, "cover1x1x11", "p_uti_cover1x1x", -2794.258f, 43.559f, 2413.021f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_240 = Function_106(Local_0, "cover2x1x24", "p_uti_cover2x1x", -1898.208f, 25.01152f, 3304.696f, 70.42919f, -97.66837f, -70.31107f, 1);
	Local_0.f_244 = Function_106(Local_0, "cover2x1x25", "p_uti_cover2x1x", -1890.802f, 23.54468f, 3298.707f, 126.1768f, -93.78294f, -126.5071f, 1);
	Local_0.f_248 = Function_106(Local_0, "cover1x2x5", "p_uti_cover1x2x", -1897.234f, 25.1286f, 3305.447f, -0.673139f, -0.07919134f, -0.06951825f, 1);
	Local_0.f_252 = Function_106(Local_0, "cover2x1x26", "p_uti_cover2x1x", -1881.15f, 25.86003f, 3310.732f, 0.0f, -88.32053f, 0.0f, 1);
	Local_0.f_256 = Function_106(Local_0, "cover2x1x27", "p_uti_cover2x1x", -1881.845f, 25.85751f, 3312.087f, 0.0f, -114.1054f, 0.0f, 1);
	Local_0.f_260 = Function_106(Local_0, "cover1x1x12", "p_uti_cover1x1x", -1887.29f, 25.4781f, 3307.655f, -3.769616f, 0.0f, 0.0f, 1);
	Local_0.f_264 = Function_106(Local_0, "cover2x1x28", "p_uti_cover2x1x", -1874.386f, 25.15075f, 3312.564f, 0.3631007f, -80.21103f, 0.1407903f, 1);
	Local_0.f_268 = Function_106(Local_0, "cover1x2x6", "p_uti_cover1x2x", -1881.178f, 26.24035f, 3313.337f, -0.7079128f, -18.03272f, 0.1487029f, 1);
	Local_0.f_272 = Function_106(Local_0, "cover2x1x29", "p_uti_cover2x1x", -1870.552f, 24.71342f, 3296.645f, -39.57664f, -71.99532f, 39.89071f, 1);
	Local_0.f_276 = Function_106(Local_0, "cover2x1x30", "p_uti_cover2x1x", -1877.726f, 24.73512f, 3301.444f, 41.3482f, -94.0601f, -42.74914f, 1);
	Local_0.f_280 = Function_106(Local_0, "cover2x1x31", "p_uti_cover2x1x", -1876.875f, 24.98071f, 3306.579f, -2.250155f, -91.79108f, 0.9232733f, 1);
	Local_0.f_284 = Function_106(Local_0, "cover1x2x7", "p_uti_cover1x2x", -1883.164f, 24.05248f, 3299.422f, 0.0f, 0.0f, 0.0f, 1);
	Local_0.f_288 = Function_106(Local_0, "cover1x1x13", "p_uti_cover1x1x", -1883.099f, 23.85318f, 3298.402f, 0.0f, 0.0f, 0.0f, 1);
	return 1;
}

var Function_106(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xF242 / 62018
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_107(bool bParam0, int iParam1) //Position: 0xF26C / 62060
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

void Function_108(int iParam0) //Position: 0xF2A7 / 62119
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
		STREAMING_REQUEST_ACTOR(1177, 1, false);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_REQUEST_ACTOR(1179, 1, false);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_REQUEST_ACTOR(1178, 1, false);
	}
	return;
}

