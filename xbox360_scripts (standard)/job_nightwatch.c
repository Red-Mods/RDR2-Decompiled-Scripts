//Decompiled with MagicRDR v1.0
//Function Count : 388
//Statics Count : 676
//Natives Count : 568
//Parameters Count : 10

#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	var uLocal_2[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_9[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	bool bLocal_20[4] = { false, false, false, false };
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	float fLocal_37 = 0.0f;
	bool bLocal_38 = false;
	float fLocal_39 = 0.0f;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	struct<8> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_91 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_94 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_97 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_100 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_103 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_106 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_109 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_112 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_115 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_118 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_121 = { 0.0f, 0.0f, 0.0f };
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	vector3 vLocal_127 = { 0.0f, 0.0f, 0.0f };
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	vector3 vLocal_133 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_136 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_139 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_142 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_145 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_148[64] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	vector3 vLocal_341 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_344 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_347 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_350 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_353 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_356 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_359 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_362 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_365 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_368 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_371 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_374 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_377 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_380 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_383 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_386 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_389 = false;
	bool bLocal_390 = false;
	bool bLocal_391 = false;
	bool bLocal_392 = false;
	bool bLocal_393 = false;
	bool bLocal_394 = false;
	bool bLocal_395 = false;
	bool bLocal_396 = false;
	bool bLocal_397 = false;
	bool bLocal_398 = false;
	bool bLocal_399 = false;
	bool bLocal_400 = false;
	bool bLocal_401 = false;
	bool bLocal_402 = false;
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
	bool bLocal_406 = false;
	bool bLocal_407 = false;
	bool bLocal_408 = false;
	bool bLocal_409 = false;
	bool bLocal_410 = false;
	bool bLocal_411 = false;
	bool bLocal_412 = false;
	bool bLocal_413 = false;
	bool bLocal_414 = false;
	bool bLocal_415 = false;
	bool bLocal_416 = false;
	bool bLocal_417 = false;
	bool bLocal_418 = false;
	bool bLocal_419 = false;
	bool bLocal_420 = false;
	bool bLocal_421 = false;
	bool bLocal_422 = false;
	bool bLocal_423 = false;
	bool bLocal_424 = false;
	bool bLocal_425 = false;
	bool bLocal_426 = false;
	bool bLocal_427 = false;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
	bool bLocal_432 = false;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	bool bLocal_440 = false;
	bool bLocal_441 = false;
	bool bLocal_442 = false;
	bool bLocal_443 = false;
	bool bLocal_444 = false;
	bool bLocal_445 = false;
	bool bLocal_446 = false;
	bool bLocal_447 = false;
	bool bLocal_448 = false;
	bool bLocal_449 = false;
	bool bLocal_450 = false;
	bool bLocal_451 = false;
	bool bLocal_452 = false;
	bool bLocal_453 = false;
	bool bLocal_454 = false;
	bool bLocal_455 = false;
	bool bLocal_456 = false;
	bool bLocal_457 = false;
	bool bLocal_458 = false;
	struct<15> Local_459 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_474 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_485 = false;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	vector3 vLocal_488 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_491 = false;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	bool bLocal_494 = false;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	bool bLocal_497 = false;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	bool bLocal_500 = false;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	bool bLocal_503 = false;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	bool bLocal_506 = true;
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
	var uLocal_599 = 0;
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
	bool bLocal_621 = false;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	int iLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	bool bLocal_641 = true;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	bool bLocal_648 = false;
	bool bLocal_649 = false;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	bool bLocal_662 = false;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bLocal_0 = false;
	iLocal_1 = 2;
	iLocal_17 = 0;
	iLocal_18 = 0;
	bLocal_19 = false;
	iLocal_25 = 0;
	iLocal_26 = 0;
	iLocal_30 = 0;
	iLocal_31 = 4294967295;
	iLocal_32 = 10;
	iLocal_33 = 10;
	iLocal_36 = 0;
	fLocal_37 = 1.0f;
	bLocal_38 = 200.0f;
	fLocal_39 = 300.0f;
	bLocal_44 = 3.0f;
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_48 = 0;
	bLocal_49 = false;
	bLocal_50 = false;
	iLocal_51 = 0;
	bLocal_52 = false;
	iLocal_53 = 0;
	iLocal_54 = 0;
	iLocal_55 = 0;
	iLocal_56 = 0;
	iLocal_57 = 0;
	iLocal_58 = 1;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 1;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	iLocal_77 = 0;
	iLocal_78 = 1;
	iLocal_79 = 0;
	iLocal_622 = 0;
	iLocal_623 = 0;
	bLocal_648 = false;
	bLocal_649 = false;
	iLocal_654 = 31;
	iLocal_655 = 33;
	iLocal_656 = 1;
	iLocal_657 = 0;
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_658 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_662 = GET_PLAYER_ACTOR(0);
		Function_387(bLocal_662, &uLocal_663);
		ScriptParam_0.f_32 = 0.0f;
		if (!Function_98(&ScriptParam_0))
		{
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
		}
		WAIT(false);
	}
	Function_1(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<10> Param0) //Position: 0x11B / 283
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	Function_96(1);
	Function_94();
	if (IS_ACTOR_VALID(bLocal_389))
	{
		ACTOR_HOLSTER_WEAPON(bLocal_389, 1);
	}
	if (IS_BLIP_VALID(bLocal_420))
	{
		REMOVE_BLIP(bLocal_420);
	}
	if (IS_BLIP_VALID(bLocal_421))
	{
		REMOVE_BLIP(bLocal_421);
	}
	if (IS_BLIP_VALID(bLocal_422))
	{
		REMOVE_BLIP(bLocal_422);
	}
	if (IS_BLIP_VALID(bLocal_424))
	{
		REMOVE_BLIP(bLocal_424);
	}
	if (IS_BLIP_VALID(bLocal_423))
	{
		REMOVE_BLIP(bLocal_423);
	}
	if (IS_ACTOR_VALID(bLocal_391))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 0);
		Function_93(bLocal_391);
	}
	if (IS_ACTOR_VALID(bLocal_392))
	{
		Function_93(bLocal_392);
	}
	if (IS_ACTOR_VALID(bLocal_393))
	{
		Function_93(bLocal_393);
	}
	if (IS_ACTOR_VALID(bLocal_394))
	{
		Function_93(bLocal_394);
	}
	if (IS_OBJECTSET_VALID(bLocal_446))
	{
		DESTROY_OBJECTSET(bLocal_446);
	}
	if (Global_63096 == 1)
	{
		Function_90(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
	}
	if (IS_OBJECTSET_VALID(bLocal_447))
	{
		DESTROY_OBJECTSET(bLocal_447);
	}
	if (IS_ACTOR_VALID(bLocal_397))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 0);
		SET_ACTOR_FACTION(bLocal_397, 21);
		SET_ACTOR_CAN_BE_TARGETED(bLocal_397, true);
		SET_ACTOR_MAX_HEALTH(bLocal_397, 8.0f);
		Function_89(bLocal_397);
		MEMORY_CLEAR_ALL(bLocal_397);
		TASK_WANDER(bLocal_397, -1.0f);
		TASK_PRIORITY_SET(bLocal_397, 2);
		RELEASE_ACTOR(bLocal_397);
	}
	if (IS_ACTOR_VALID(bLocal_390))
	{
		TASK_WANDER(bLocal_390, 30.0f);
		MEMORY_CLEAR_ALL(bLocal_390);
		TASK_WANDER(bLocal_390, -1.0f);
		TASK_PRIORITY_SET(bLocal_390, 2);
		RELEASE_ACTOR(bLocal_390);
	}
	if (IS_ACTOR_VALID(bLocal_401))
	{
		DESTROY_ACTOR(bLocal_401);
	}
	if (SQUAD_IS_VALID(bLocal_411))
	{
		Function_88(bLocal_411);
	}
	if (IS_ACTOR_VALID(bLocal_398))
	{
		DESTROY_ACTOR(bLocal_398);
	}
	if (IS_ACTOR_VALID(bLocal_395))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_395, 0);
		RELEASE_ACTOR(bLocal_395);
	}
	if (IS_ACTOR_VALID(bLocal_396))
	{
		RELEASE_ACTOR(bLocal_396);
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_396, 1);
	}
	if (IS_ACTOR_VALID(bLocal_402))
	{
		RELEASE_ACTOR(bLocal_402);
	}
	if (IS_ACTORSET_VALID(bLocal_414))
	{
		Function_87(bLocal_414);
		Function_86(bLocal_414);
	}
	if (IS_ACTORSET_VALID(bLocal_416))
	{
		Function_87(bLocal_416);
		Function_86(bLocal_416);
	}
	if (IS_ACTORSET_VALID(bLocal_417))
	{
		Function_87(bLocal_417);
	}
	if (IS_ACTORSET_VALID(bLocal_415))
	{
		Function_87(bLocal_417);
	}
	if (IS_DOOR_VALID(bLocal_453))
	{
		if (!IS_DOOR_LOCKED(bLocal_453))
		{
			Function_85(bLocal_453, 1);
		}
	}
	if (IS_DOOR_VALID(bLocal_454))
	{
		if (!IS_DOOR_LOCKED(bLocal_454))
		{
			Function_85(bLocal_454, 1);
		}
	}
	if (IS_DOOR_VALID(bLocal_455))
	{
		if (!IS_DOOR_LOCKED(bLocal_455))
		{
			Function_85(bLocal_455, 1);
		}
	}
	if (IS_DOOR_VALID(bLocal_456))
	{
		if (!IS_DOOR_LOCKED(bLocal_456))
		{
			Function_85(bLocal_456, 1);
		}
	}
	if (IS_DOOR_VALID(bLocal_457))
	{
		if (!IS_DOOR_LOCKED(bLocal_457))
		{
			Function_85(bLocal_457, 1);
		}
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_HELP();
	RELEASE_LAYOUT_REF(bLocal_418);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_397, 1.0f);
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	if (Function_84(bLocal_621) == 2)
	{
		if (bLocal_648)
		{
			Function_26(bLocal_621, 1, 1, 0);
		}
		else if (bLocal_649)
		{
			Global_13172[bLocal_62111].f_36 = GET_TIME_OF_DAY();
			Function_16(bLocal_621);
		}
	}
	Function_15();
	Function_10();
	Function_8(28);
	Function_7(16);
	Function_5(1);
	Function_2(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
}

void Function_2(bool bParam0) //Position: 0x42A / 1066
{
	if (bParam0)
	{
		Function_4(0x10000000);
	}
	else
	{
		Function_3(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_3(int iParam0) //Position: 0x44E / 1102
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_4(int iParam0) //Position: 0x46B / 1131
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_5(int iParam0) //Position: 0x47E / 1150
{
	Function_6(&Global_28842, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x48C / 1164
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_7(int iParam0) //Position: 0x4A7 / 1191
{
	int iVar0;
	
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 1;
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		if (!Global_30767[iVar0])
		{
			Global_30837 = 1;
			return;
		}
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

void Function_8(bool bParam0) //Position: 0x4EB / 1259
{
	if (Function_9(bParam0, 1) && !Function_9(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_9(bool bParam0, bool bParam1) //Position: 0x518 / 1304
{
	return (bParam0 && bParam1) == 0;
}

void Function_10() //Position: 0x525 / 1317
{
	Function_11(&bLocal_506);
	return;
}

void Function_11(int iParam0) //Position: 0x531 / 1329
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_12(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x557 / 1367
{
	if (Function_14(uParam0[iParam13], 4))
	{
		if (Function_14(uParam0[iParam13], 1))
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
			Function_13(uParam0[iParam13], 1);
			Function_13(uParam0[iParam13], 2);
			Function_13(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x685 / 1669
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_14(int iParam0, int iParam1) //Position: 0x69F / 1695
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_15() //Position: 0x6BC / 1724
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_16(bool bParam0) //Position: 0x6D0 / 1744
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_24(bParam0))
	{
		return;
	}
	iVar0 = Function_23(bParam0);
	if (StackVal == 2)
	{
		Function_19("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_18(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_17(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_17(int iParam0) //Position: 0x776 / 1910
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_18(char* cParam0) //Position: 0x7A0 / 1952
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

void Function_19(char* cParam0, bool bParam1) //Position: 0x9F6 / 2550
{
	struct<4> Var0;
	
	if (!Function_24(bParam1))
	{
		return;
	}
	switch (Function_23(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_20(Function_21(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_23(bParam1), Function_21(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_23(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_23(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_23(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_23(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_23(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_20(int iParam0) //Position: 0xB1A / 2842
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_21(bool bParam0) //Position: 0xB3F / 2879
{
	if (!Function_22(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_22(int iParam0) //Position: 0xB5F / 2911
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_23(bool bParam0) //Position: 0xB76 / 2934
{
	if (!Function_22(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_24(int iParam0) //Position: 0xB91 / 2961
{
	if (!Function_22(iParam0))
	{
		return 0;
	}
	if (!Function_25(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_25(int iParam0) //Position: 0xBB5 / 2997
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_26(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBCA / 3018
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_24(bParam0))
	{
		Function_82();
		return;
	}
	iVar0 = Function_23(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_21(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_18(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_17(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_76();
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
		Function_19("DEED_COMPLETE", bParam0);
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
			Function_70(bParam0);
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
						switch (Function_21(bParam0))
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
			Function_30(1);
			Function_28(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_27(bParam0, &Var14);
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

void Function_27(int iParam0, int iParam1) //Position: 0xDDC / 3548
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_28(int iParam0, int iParam1) //Position: 0xE16 / 3606
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_29())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_29() //Position: 0xE58 / 3672
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_30(bool bParam0) //Position: 0xE61 / 3681
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_62();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_32();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_31(&Global_63095, 1);
		Function_31(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_31(int iParam0, int iParam1) //Position: 0xEB2 / 3762
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_32() //Position: 0xEC5 / 3781
{
	Function_60();
	Function_59();
	Function_59();
	Function_58();
	Function_58();
	Function_57();
	Function_57();
	Function_40();
	Function_40();
	if (!Function_29())
	{
		Function_37();
		Function_36();
		Function_35();
		Function_34();
	}
	Function_33();
	return;
}

void Function_33() //Position: 0xEF8 / 3832
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

void Function_34() //Position: 0xFFE / 4094
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

void Function_35() //Position: 0x1031 / 4145
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

void Function_36() //Position: 0x11BF / 4543
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

void Function_37() //Position: 0x1373 / 4979
{
	Function_38(&Global_28260, 1, 0);
	return;
}

void Function_38(int iParam0, bool bParam1, var uParam2) //Position: 0x1381 / 4993
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
	var uVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_39();
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

var Function_39() //Position: 0x1572 / 5490
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_40() //Position: 0x1587 / 5511
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
				iVar2 = ((Function_56((50 + iVar4)) + Function_56((183 + iVar4))) + Function_56((90 + iVar4)));
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
	Function_41(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x1622 / 5666
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
		Function_55(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_54(iParam0);
	if (bParam2)
	{
		Function_42(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_42(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x18BD / 6333
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_53(390))), 32);
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
					bVar19 = (Function_52(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_52(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_50(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_47(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_44(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_43(), &Var9);
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

var Function_43() //Position: 0x1EEA / 7914
{
	int iVar0;
	
	return iVar0;
}

var Function_44(int iParam0) //Position: 0x1EF2 / 7922
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_45(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F03 / 7939
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_46(char* cParam0, char* cParam1) //Position: 0x1FF8 / 8184
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_47(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2011 / 8209
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_49(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_48(Function_49(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_48(int iParam0, int iParam1) //Position: 0x2076 / 8310
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_49(int iParam0, bool bParam1) //Position: 0x2088 / 8328
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_50(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x209A / 8346
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
	if (((Function_51(iParam0) != 19 || Function_51(iParam0) != 17) || Function_51(iParam0) != 10) || Function_51(iParam0) != 9)
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

int Function_51(int iParam0) //Position: 0x21CA / 8650
{
	return Global_35278[iParam020].f_48;
}

float Function_52(int iParam0) //Position: 0x21D9 / 8665
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_53(int iParam0) //Position: 0x2212 / 8722
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_54(int iParam0) //Position: 0x224F / 8783
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

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x23E9 / 9193
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

int Function_56(bool bParam0) //Position: 0x2603 / 9731
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_57() //Position: 0x2644 / 9796
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
		iVar2 = ((Function_56((50 + iVar3) + 15) + Function_56((183 + iVar3) + 15)) + Function_56((90 + iVar3) + 15));
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
	Function_41(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_58() //Position: 0x26CD / 9933
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
			iVar2 = ((Function_56((50 + iVar3) + 8) + Function_56((183 + iVar3) + 8)) + Function_56((90 + iVar3) + 8));
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
	Function_41(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_59() //Position: 0x2764 / 10084
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
		iVar2 = ((Function_56((50 + iVar3)) + Function_56((183 + iVar3))) + Function_56((90 + iVar3)));
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
	Function_41(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_60() //Position: 0x27E3 / 10211
{
	Function_61(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_41(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_61(int iParam0, bool bParam1, int iParam2) //Position: 0x2809 / 10249
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
	Function_55(iParam0, bParam1, 1);
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_42(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_62() //Position: 0x2A13 / 10771
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_64(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_64(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_63(StackVal, StackVal, vVar0))
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

bool Function_63(vector3 vParam0) //Position: 0x2AB4 / 10932
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_64(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2ACC / 10956
{
	int iVar0;
	
	iVar0 = Function_68(uParam2, uParam3);
	if (Function_67(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_66(&Global_63095, 1);
			Function_31(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_66(&Global_63095, 2);
			Function_31(&Global_63095, 1);
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
		Function_66(&Global_63095, 2);
		Function_31(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_65();
	return StackVal, StackVal, Function_65();
}

vector3 Function_65() //Position: 0x2BB3 / 11187
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_66(int iParam0, int iParam1) //Position: 0x2BBC / 11196
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_67(int iParam0) //Position: 0x2BCB / 11211
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_68(bool bParam0, bool bParam1) //Position: 0x2BE1 / 11233
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
				fVar2 = Function_69(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_69(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_67(bVar0) && !bParam1)
	{
		bVar0 = Function_68(bParam0, 1);
	}
	return bVar0;
}

float Function_69(vector3 vParam0, vector3 vParam3) //Position: 0x2CA8 / 11432
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_70(bool bParam0) //Position: 0x2CC5 / 11461
{
	int iVar0;
	int iVar1;
	
	if (!Function_22(bParam0))
	{
		return;
	}
	switch (Function_23(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_21(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_75(12, 1, 0, 0);
				Function_74(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_75(13, 1, 0, 0);
				Function_74(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_75(14, 1, 0, 0);
				Function_74(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_75(15, 1, 0, 0);
				Function_74(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_75(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_21(bParam0))
			{
				case 0x00000000:
					if (Function_73(bParam0) == 1)
					{
						iVar0 = Function_72(bParam0);
						if (Function_71(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_74(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_74(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_74(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_74(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_74(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_74(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_74(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_74(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_74(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_74(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_74(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_74(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_74(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_74(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_74(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_74(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_74(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_74(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_74(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_74(4, 19);
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
								Function_75(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_75(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_75(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_72(bParam0) == 0)
			{
				if (Function_73(bParam0) == 1)
				{
					Function_75(458, 1, 0, 0);
					iVar0 = Function_21(bParam0);
					if (Function_71(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_74(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_74(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_74(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_74(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_74(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_74(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_74(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_74(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_73(bParam0) == 1)
			{
				Function_75(400, 1, 0, 0);
			}
			switch (Function_21(bParam0))
			{
				case 0x00000001:
					Function_75(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_74(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_74(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_74(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_75(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_74(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_74(6, 9);
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

bool Function_71(int iParam0) //Position: 0x31A1 / 12705
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_72(bool bParam0) //Position: 0x31B7 / 12727
{
	if (!Function_22(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_73(bool bParam0) //Position: 0x31D6 / 12758
{
	if (!Function_22(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_74(int iParam0, bool bParam1) //Position: 0x31F0 / 12784
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

int Function_75(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3257 / 12887
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
	Function_55(iParam0, TO_FLOAT(bParam1), 1);
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_42(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_76() //Position: 0x3477 / 13431
{
	int iVar0;
	int iVar1;
	
	if (!Function_81(Global_6269))
	{
		return;
	}
	iVar0 = Function_56(24);
	iVar1 = Function_80(Global_6269);
	if (!Function_81(iVar0) && Function_79(iVar1) < 0)
	{
		Function_41(24, Global_6269, 0);
		Function_77(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_79(Function_80(iVar0)))
	{
		Function_41(24, Global_6269, 0);
		Function_77(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_77(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x34F7 / 13559
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
		Function_78(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_78(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3849 / 14409
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

int Function_79(int iParam0) //Position: 0x38CC / 14540
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_80(int iParam0) //Position: 0x38E6 / 14566
{
	if (!Function_81(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_81(int iParam0) //Position: 0x3900 / 14592
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_82() //Position: 0x3916 / 14614
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
			Function_83(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_83(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3B5D / 15197
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

int Function_84(bool bParam0) //Position: 0x3B86 / 15238
{
	if (!Function_24(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_85(bool bParam0, bool bParam1) //Position: 0x3BA0 / 15264
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

void Function_86(bool bParam0) //Position: 0x3BF4 / 15348
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RESET_ANIM_SET_FOR_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0), 0);
				TASK_CLEAR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
				AI_SET_ENABLE_STICKUP_OVERRIDE(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0), 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_87(bool bParam0) //Position: 0x3C4D / 15437
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1)))
			{
				if (IS_ACTOR_RIDING_VEHICLE(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1)))
				{
					bVar0 = GET_VEHICLE(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					RELEASE_ACTOR(bVar0);
				}
				else if (IS_ACTOR_RIDING(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1)))
				{
					bVar0 = GET_MOUNT(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
					RELEASE_ACTOR(bVar0);
				}
				else
				{
					RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar1));
				}
			}
			bVar1++;
		}
	}
	return;
}

void Function_88(bool bParam0) //Position: 0x3CE6 / 15590
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
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_89(bool bParam0) //Position: 0x3D2A / 15658
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		}
	}
	return;
}

void Function_90(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x3D4A / 15690
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
		bVar0 = Function_39();
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
			if (Function_29())
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
		Function_75(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_92();
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
	Function_91(iParam9);
}

void Function_91(bool bParam0) //Position: 0x3E3A / 15930
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

void Function_92() //Position: 0x3EDF / 16095
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_93(bool bParam0) //Position: 0x3EF4 / 16116
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

void Function_94() //Position: 0x3F20 / 16160
{
	if (IS_VOLUME_VALID(bLocal_425))
	{
		DESTROY_VOLUME(bLocal_425);
	}
	if (IS_OBJECT_VALID(bLocal_437))
	{
		Function_95(bLocal_437);
	}
	if (IS_BLIP_VALID(bLocal_419))
	{
		REMOVE_BLIP(bLocal_419);
	}
	return;
}

void Function_95(bool bParam0) //Position: 0x3F53 / 16211
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

void Function_96(int iParam0) //Position: 0x3FDD / 16349
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_97())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_97() //Position: 0x401B / 16411
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

bool Function_98(bool bParam0) //Position: 0x4040 / 16448
{
	*bParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0 };
	switch (iLocal_658)
	{
		case 0x00000000:
			if (Function_378(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0) == 1)
			{
				iLocal_658 = 1;
			}
			break;
		
		case 0x00000001:
			Function_371(bParam0);
			Global_27768 = 1;
			if (!Function_370(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0))
			{
				return 0;
			}
			iLocal_658 = 4;
			break;
		
		case 0x00000004:
			if (Function_369(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0))
			{
				Function_368(&bLocal_659);
				iLocal_658 = 9;
			}
			break;
		
		case 0x00000009:
			if (bParam0->f_24 < 0.0f && Function_367(&bLocal_659, bParam0->f_24))
			{
				iLocal_658 = 11;
			}
			else
			{
				Function_152(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0, &iLocal_658);
			}
			break;
		
		case 0x0000000A:
			Function_121(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0);
			Function_102(5, 1, 0);
			iLocal_658 = 13;
			break;
		
		case 0x0000000B:
			Function_101(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0);
			iLocal_658 = 13;
			break;
		
		case 0x0000000C:
			Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0);
			iLocal_658 = 13;
			break;
		
		case 0x0000000D:
			Function_99(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam0);
			iLocal_658 = 14;
			break;
		
		case 0x0000000E:
			return 0;
			break;
	}
	return 1;
}

void Function_99(struct<10> Param0) //Position: 0x414E / 16718
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
}

void Function_100(struct<10> Param0) //Position: 0x4160 / 16736
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
}

void Function_101(struct<10> Param0) //Position: 0x4172 / 16754
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	bLocal_649 = true;
	if (bLocal_649)
	{
		Global_13172[bLocal_62111].f_36 = GET_TIME_OF_DAY();
		Function_16(bLocal_621);
	}
}

void Function_102(int iParam0, bool bParam1, bool bParam2) //Position: 0x41A1 / 16801
{
	int iVar0;
	bool bVar1;
	
	if (Function_120(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_56(3);
	Function_117();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_115(3, bVar1);
		if (!bParam2)
		{
			if (!Function_114(Global_76848, 4))
			{
				Function_109(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_75(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_52(3));
	iVar0 = Function_56(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_104(4, Function_108(Global_12976.f_156), 1);
				Function_103(Global_12976.f_152, Global_12976.f_156);
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

void Function_103(int iParam0, int iParam1) //Position: 0x4364 / 17252
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

int Function_104(int iParam0, char* cParam1, bool bParam2) //Position: 0x45C2 / 17858
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
	Function_77(iParam0, cParam1, 0, 1);
	iVar1 = Function_105();
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

int Function_105() //Position: 0x4747 / 18247
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
	Function_106();
	return 0;
}

void Function_106() //Position: 0x47E6 / 18406
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
		Function_107(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_107(int iParam0) //Position: 0x4895 / 18581
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

var Function_108(int iParam0) //Position: 0x48F3 / 18675
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

void Function_109(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4982 / 18818
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_111(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_110(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_110(char* cParam0, int iParam1) //Position: 0x49EE / 18926
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

bool Function_111(bool bParam0, var uParam1, int iParam2) //Position: 0x4A25 / 18981
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
		if (Function_113(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_112(uVar0))
		{
			case 0x00000002:
				if (!Function_114(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_112(char* cParam0) //Position: 0x4A9D / 19101
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

int Function_113(int iParam0) //Position: 0x4B3E / 19262
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_31(&iVar1, 2147483648);
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

bool Function_114(var uParam0, int iParam1) //Position: 0x4B7B / 19323
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_115(int iParam0, bool bParam1) //Position: 0x4B8E / 19342
{
	bool bVar0;
	int iVar1;
	
	Function_75(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_116(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_116(int iParam0, int iParam1) //Position: 0x4D2B / 19755
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

void Function_117() //Position: 0x4D6C / 19820
{
	Function_119(3, 0.0f);
	Function_118(3, 10000.0f);
	return;
}

int Function_118(int iParam0, int iParam1) //Position: 0x4D82 / 19842
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_119(int iParam0, int iParam1) //Position: 0x4DC2 / 19906
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_120(bool bParam0) //Position: 0x4E02 / 19970
{
	return (*&Global_12976 + 104)[bParam0];
}

void Function_121(struct<29> Param0) //Position: 0x4E11 / 19985
{
	int iVar0;
	
	Param0.f_28 = ((iLocal_17 + iLocal_18) * Function_150(1, 0, 1, 0, 1));
	if (Function_149() > 4)
	{
		Param0.f_28 *= 2;
	}
	if (Param0.f_28 < 15)
	{
		Param0.f_28 = 15;
	}
	if (Param0.f_28 >= Function_150(2, 1, 1, 0, 0) * 2)
	{
		Param0.f_28 = Function_150(2, 1, 1, 0, 0) * 2;
	}
	iVar0 = Function_148(StackVal);
	if (iVar0 >= 0)
	{
		if (Param0.f_28 * 2 >= iVar0)
		{
			Function_145(StackVal, iVar0);
		}
		else
		{
			Function_145(StackVal, Param0.f_28 * 2);
			Param0.f_28 = (Param0.f_28 * 2 - iVar0);
		}
	}
	if (Param0.f_28 >= 0)
	{
		Function_144(Param0.f_28, 1);
	}
	Function_122(StackVal, 1);
	bLocal_648 = true;
	if (bLocal_648)
	{
		Function_26(bLocal_621, 1, 1, 0);
	}
}

void Function_122(int iParam0, int iParam1) //Position: 0x4ED9 / 20185
{
	if (!Function_143(3))
	{
		return;
	}
	if (Function_29())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			if (iParam1 == Global_30668[0])
			{
				Function_123(5, 2, 0, 0, 1);
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_123(9, 16, 0, 0, 1);
			}
			else if (iParam1 == Global_30693[0])
			{
				Function_123(7, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30693[0])
			{
				Function_123(8, 4, 0, 0, 1);
			}
			else if (iParam1 == Global_30640[1])
			{
				if (IS_PS3())
				{
					Function_123(4, 2, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_123(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4F78 / 20344
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_142(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_143(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_141(bParam0, 2))
	{
		Function_75(456, 1, 0, 0);
		Function_140(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_139(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_138(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_140(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_137(0, 0, 1, 1))
			{
				Function_30(1);
				Function_28(1, 0);
			}
			else
			{
				Function_136();
			}
		}
		Function_131(bParam0);
		if (StackVal && !Function_9(((((!Function_130() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_9((((Function_130() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_114(Global_76846, 2))
		{
			Function_109(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_125();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_124(3, bParam1);
				break;
			
			case 0x00000005:
				Function_124(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_124(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_124(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_124(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_124(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_74(2, 24);
				break;
			
			case 0x00000003:
				Function_74(2, 25);
				break;
			
			case 0x0000000F:
				Function_74(2, 26);
				break;
			
			case 0x0000000D:
				Function_74(2, 27);
				break;
			
			case 0x0000000E:
				Function_74(2, 28);
				break;
			}
	}
}

void Function_124(int iParam0, bool bParam1) //Position: 0x5207 / 20999
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

void Function_125() //Position: 0x5266 / 21094
{
	if (Function_142(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_129(Global_28180);
			Global_28180.f_8 = Function_126(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_129(Global_28180);
			Global_28180.f_8 = Function_126(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_126(int iParam0, int iParam1) //Position: 0x52E1 / 21217
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
					if (Function_128(6, 0) || Function_128(12, 0))
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
					if (Function_127(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_128(5, 0))
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
					if (Function_127(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_127(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_127(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_127(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_128(26, 0))
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
					if (Function_127(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_127(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_127(27) && iVar18)
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
					if (Function_127(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_127(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_127(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_127(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_128(17, 0) && iVar15)
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
					if (Function_127(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_128(6, 0) && Function_127(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_127(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_128(9, 0) && Function_127(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_127(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_128(8, 0) && iVar19)
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
	if (Function_63(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_63(StackVal, StackVal, vVar3))
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
	if (!Function_63(StackVal, StackVal, vVar3))
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

int Function_127(int iParam0) //Position: 0x5ED2 / 24274
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0, bool bParam1) //Position: 0x5EE7 / 24295
{
	int iVar0;
	
	iVar0 = Function_80(iParam0);
	if (!Function_22(iVar0))
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

int Function_129(int iParam0) //Position: 0x5F24 / 24356
{
	int iVar0;
	int iVar1;
	
	if (!Function_142(iParam0))
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

bool Function_130() //Position: 0x5F73 / 24435
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_131(bool bParam0) //Position: 0x5FA0 / 24480
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
			if (Function_138(bParam0, Function_135(bVar24)))
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
			if (Function_138(bParam0, Function_135(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_134(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_133(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_132(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_132(int iParam0) //Position: 0x6150 / 24912
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_142(iParam0))
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

void Function_133(bool bParam0, bool bParam1) //Position: 0x61A7 / 24999
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

var Function_134(int iParam0) //Position: 0x61CC / 25036
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_142(iParam0))
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

int Function_135(bool bParam0) //Position: 0x6222 / 25122
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_136() //Position: 0x622E / 25134
{
	return;
}

bool Function_137(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6234 / 25140
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

bool Function_138(bool bParam0, int iParam1) //Position: 0x62D8 / 25304
{
	int iVar0;
	
	if (!Function_142(bParam0))
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

void Function_139(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6337 / 25399
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

void Function_140(int iParam0, int iParam1) //Position: 0x6382 / 25474
{
	if (!Function_142(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_141(int iParam0, int iParam1) //Position: 0x63D7 / 25559
{
	int iVar0;
	
	if (!Function_142(iParam0))
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

bool Function_142(int iParam0) //Position: 0x6404 / 25604
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x641A / 25626
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_144(bool bParam0, bool bParam1) //Position: 0x6436 / 25654
{
	bool bVar0;
	
	bVar0 = Function_56(0);
	if ((Function_56(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_75(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_56(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_75(597, bParam0, 0, 0);
	}
	if ((Function_56(597) + Function_56(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_145(int iParam0, bool bParam1) //Position: 0x6501 / 25857
{
	if (!Function_147(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_146(222, Global_26401[iParam0], 0);
		if (Function_56(222) <= 0)
		{
			Function_41(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_41((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_146((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_146(222, bParam1, 0);
	}
	return;
}

int Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x658A / 25994
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
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_42(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

bool Function_147(int iParam0) //Position: 0x6785 / 26501
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_148(int iParam0) //Position: 0x679A / 26522
{
	if (!Function_147(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

int Function_149() //Position: 0x67B2 / 26546
{
	return Global_12976.f_152;
}

int Function_150(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x67BD / 26557
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
	switch (iParam1)
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
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_56(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_151(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_151(bool bParam0) //Position: 0x68BF / 26815
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

void Function_152(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x69B0 / 27056
{
	bool bVar0;
	
	iLocal_624 = Global_29006;
	*uParam10 = *uParam10;
	bVar0 = GET_PLAYER_ACTOR(0);
	if (IS_ACTOR_VALID(bLocal_410))
	{
		DESTROY_ACTOR(bLocal_410);
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &vLocal_91);
	if (Global_29006 == Global_30668[0])
	{
		Function_366(Global_30616);
	}
	if (IS_ACTOR_VALID(bLocal_400))
	{
		GET_POSITION(bLocal_400, &vLocal_115);
	}
	if (IS_ACTOR_VALID(bLocal_402))
	{
		GET_POSITION(bLocal_402, &uLocal_130);
	}
	if (IS_ACTOR_VALID(bLocal_398))
	{
		GET_POSITION(bLocal_398, &vLocal_112);
	}
	if (DECOR_CHECK_EXIST(GET_LAST_ATTACK_TARGET(Global_34573), "PlayerHogtied") == 1)
	{
		DECOR_REMOVE(GET_LAST_ATTACK_TARGET(Global_34573), "PlayerHogtied");
		iLocal_17 = (iLocal_17 - 1);
	}
	if (iLocal_60 != 1 && IS_ACTOR_ALIVE(bLocal_395))
	{
		if (!Function_364(bLocal_395))
		{
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (IS_VOLUME_VALID(bLocal_434))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_397, bLocal_434))
			{
				Function_363(&Local_459, 2, 3.0f, 0, 4294967295);
				Function_362(StackVal, StackVal, &Local_474, 0, vLocal_91, 0.0f, 0.0f, 10.0f, 0.0f, 2.0f, 1);
				Function_355(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_474, Local_459, 1);
				vLocal_362 = { StackVal, StackVal, Function_355(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_474, Local_459, 1) };
				if (!Function_63(StackVal, StackVal, vLocal_362))
				{
					TELEPORT_ACTOR(bLocal_397, &vLocal_362, 1, 1, 1);
				}
				else
				{
					KILL_ACTOR(bLocal_397);
				}
			}
		}
	}
	if (iLocal_657 < 5 && iLocal_657 > 17)
	{
		if (Global_63096 != 1 && iLocal_70 != 0)
		{
			iLocal_70 = 1;
			Function_354(&bLocal_494);
			Function_354(&bLocal_503);
			Function_354(&bLocal_485);
			Function_354(&vLocal_488);
			if (IS_ACTOR_VALID(bLocal_391))
			{
				Function_353(&bLocal_391);
			}
			if (IS_ACTOR_VALID(bLocal_400))
			{
				Function_353(&bLocal_400);
			}
		}
		else if (Global_63096 != 0 && iLocal_70 != 1)
		{
			Function_352(&bLocal_494);
			Function_352(&bLocal_503);
			Function_352(&bLocal_485);
			Function_352(&vLocal_488);
			if (IS_ACTOR_VALID(bLocal_391))
			{
				Function_351(&bLocal_391);
			}
			if (IS_ACTOR_VALID(bLocal_400))
			{
				Function_351(&bLocal_400);
			}
			iLocal_70 = 0;
		}
	}
	if (IS_ACTOR_VALID(bLocal_397))
	{
		if (IS_ACTOR_ALIVE(bLocal_397) == 0)
		{
			iLocal_657 = 23;
			if (Global_29006 == Global_30668[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30717[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30693[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_92();
			Function_350("JOB_NIGHT_DogDied", 0x40f00000, 1, 2, 0, 0, 0);
			Function_349();
		}
		else if ((bLocal_52 != 1 && iLocal_51 != 0) && Function_348(&bLocal_503) < 35.0f)
		{
			iLocal_657 = 23;
			if (Global_29006 == Global_30668[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30717[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30693[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_92();
			Function_350("JOB_NIGHT_DogAbandoned", 0x40f00000, 1, 2, 0, 0, 0);
			Function_349();
		}
	}
	if (IS_ACTOR_VALID(bLocal_390))
	{
		if (IS_ACTOR_ALIVE(bLocal_390) != 0 || GET_LAST_ATTACKER(bLocal_390) != Global_34573)
		{
			iLocal_657 = 23;
			if (Global_29006 == Global_30668[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30717[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30693[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_92();
			Function_350("JOB_NIGHT_ForemanDied", 0x40f00000, 1, 2, 0, 0, 0);
		}
	}
	if (GET_LAST_ATTACKER(bLocal_396) == Global_34573)
	{
		iLocal_657 = 23;
		if (Global_29006 == Global_30668[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30717[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30693[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_92();
		Function_350("JOB_NIGHT_HorseAttacked", 0x40f00000, 1, 2, 0, 0, 0);
		Function_349();
	}
	if (GET_LAST_ATTACKER(bLocal_395) == Global_34573)
	{
		iLocal_657 = 23;
		if (Global_29006 == Global_30668[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30717[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30693[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_92();
		Function_350("JOB_NIGHT_ProctorAttacked", 0x40f00000, 1, 2, 0, 0, 0);
		Function_349();
	}
	if ((Global_63399 != 2 && iLocal_68 != 0) && (IS_HUD_MAP_VISIBLE() != 1 && !IS_BLIP_VALID(bLocal_422)))
	{
		if (((10 * iLocal_17) + (5 * iLocal_18)) == 0)
		{
			iLocal_657 = 23;
			if (Global_29006 == Global_30668[0])
			{
				AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30717[0])
			{
				AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			else if (Global_29006 == Global_30693[0])
			{
				AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
			}
			Function_92();
			Function_350("JOB_NIGHT_TimeUp", 0x40f00000, 1, 2, 0, 0, 0);
			Function_349();
		}
		else
		{
			iLocal_1 = 0;
			iLocal_68 = 1;
		}
	}
	if (StackVal != iLocal_624)
	{
		iLocal_657 = 23;
		if (Global_29006 == Global_30668[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30717[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30693[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_92();
		Function_350("JOB_NIGHT_LeftRegion", 0x40f00000, 1, 2, 0, 0, 0);
		Function_349();
	}
	if (Global_3404 || Global_3403)
	{
		iLocal_657 = 23;
		if (Global_29006 == Global_30668[0])
		{
			AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30717[0])
		{
			AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		else if (Global_29006 == Global_30693[0])
		{
			AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
		}
		Function_92();
		Function_350("JOB_NIGHT_BrokeLaw", 0x40f00000, 1, 2, 0, 0, 0);
		Function_349();
	}
	if (IS_ACTOR_ALIVE(bLocal_390))
	{
		if (Function_344(bLocal_390, &uLocal_82, &fLocal_37, uLocal_35, 0, 0x40400000))
		{
			if (!iLocal_45)
			{
				TASK_PRIORITY_SET(bLocal_390, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_390, true);
				AI_SET_ENABLE_STICKUP_OVERRIDE(bLocal_390, 1);
				iLocal_45 = 1;
			}
		}
	}
	if (!(IS_ACTOR_ALIVE(bVar0) && IS_ACTOR_VALID(bVar0)))
	{
		*uParam10 = 11;
	}
	else
	{
		if (bLocal_50)
		{
			Function_315(bLocal_621);
			if (!Function_84(bLocal_621) != 2)
			{
				if (bLocal_649)
				{
					*uParam10 = 11;
				}
				else
				{
					*uParam10 = 10;
				}
			}
		}
		switch (iLocal_657)
		{
			case 0x00000000:
				GET_POSITION(Global_34573, &vLocal_91);
				bLocal_0 = RAND_INT_RANGE(false, 2);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_431);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_431);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_431, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bLocal_431);
				ACTOR_HOLSTER_WEAPON(Global_34573, 0);
				iLocal_623 = 1;
				Function_314(Global_30616);
				Function_297();
				if (Global_29006 != Global_30693[0] || Global_29006 != Global_30668[0])
				{
					bLocal_441 = CREATE_GRINGO_IN_LAYOUT(bLocal_418, "nw_dog_sit", "dog_sitting", vLocal_103, vLocal_106);
				}
				iLocal_657 = 1;
				break;
			
			case 0x00000001:
				TASK_STAND_STILL(bLocal_390, -1.0f, 0, 0);
				GET_POSITION(bLocal_395, &vLocal_139);
				Function_296(Global_34573, 0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_293(bLocal_395, Global_34573);
				TASK_CLEAR(Global_34573);
				TASK_FACE_COORD(Global_34573, &vLocal_139, 1);
				bLocal_27 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD_AND_STAY(false, &vLocal_365, 1, bLocal_41);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_395, bLocal_27);
				TASK_SEQUENCE_RELEASE(bLocal_27, 1);
				TASK_PRIORITY_SET(bLocal_395, true);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_395, Global_34573, -1.0f, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_395, 10.0f, 0);
				SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, false);
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_395, false);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_395, false);
				Function_368(&bLocal_494);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_94, bLocal_40, 1, true, 0);
				Function_289(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				TELEPORT_ACTOR(bLocal_409, &vLocal_383, 1, 1, 1);
				if (Global_29006 == Global_30668[0])
				{
					iLocal_1 = 0;
					Function_285(bLocal_418, 0, 1, 0, 0);
					bLocal_448 = CREATE_OBJECTSET_IN_LAYOUT("nightwatchdoors", bLocal_418, 4294967295, 0);
					Function_282();
					TASK_USE_GRINGO(bLocal_397, GET_GRINGO_FROM_OBJECT(bLocal_441), "UseCase1", 4294967295, 1);
				}
				else if (Global_29006 == Global_30717[0])
				{
					Function_277(bLocal_418, 0, 1, 0, 0);
					Function_368(&bLocal_494);
					TASK_FOLLOW_ACTOR(bLocal_397, bLocal_395);
				}
				else if (Global_29006 == Global_30693[0])
				{
					Function_273(bLocal_418, 0, 1, 0, 0);
					bLocal_434 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_nightwatchTeleportVol");
					TASK_USE_GRINGO(bLocal_397, GET_GRINGO_FROM_OBJECT(bLocal_441), "UseCase1", 4294967295, 1);
					Function_368(&bLocal_494);
				}
				Function_269();
				iLocal_657 = 3;
				break;
			
			case 0x00000003:
				if (Global_29006 == Global_30693[0])
				{
					if (Function_348(&bLocal_494) <= 5,7f)
					{
						SAY_SINGLE_LINE_CONTEXT(bLocal_395, 199, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_395, 6.0f, 0);
						TASK_CLEAR(Global_34573);
						FORCE_LOOK_AT_ACTOR(Global_34573, bLocal_395, 5.0f);
						Function_368(&bLocal_494);
						iLocal_657 = 4;
					}
				}
				else if (Global_29006 == Global_30717[0])
				{
					if (Function_348(&bLocal_494) <= 4.0f)
					{
						SAY_SINGLE_LINE_CONTEXT(bLocal_395, 199, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_395, 6.0f, 0);
						TASK_CLEAR(Global_34573);
						FORCE_LOOK_AT_ACTOR(Global_34573, bLocal_395, 5.0f);
						Function_368(&bLocal_494);
						iLocal_657 = 4;
					}
				}
				else if (Global_29006 == Global_30668[0])
				{
					if (Function_348(&bLocal_494) <= 6,5f)
					{
						SAY_SINGLE_LINE_CONTEXT(bLocal_395, 199, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
						TASK_FACE_ACTOR(Global_34573, bLocal_395, 0, 2.0f);
						Function_368(&bLocal_494);
						iLocal_657 = 4;
					}
				}
				break;
			
			case 0x00000004:
				if (Function_266())
				{
					if (Global_29006 != Global_30668[0] && !IS_GRINGO_VALID(bLocal_450))
					{
						bLocal_450 = LOCATE_GRINGO_OF_TYPE("bench_chair", &vLocal_97, 17.0f, 0);
					}
					else if (Global_29006 != Global_30693[0] && !IS_GRINGO_VALID(bLocal_450))
					{
						bLocal_450 = LOCATE_GRINGO_OF_TYPE("mex_bench_chair_sit", &vLocal_97, 7.0f, 0);
						bLocal_451 = LOCATE_GRINGO_OF_TYPE("mex_bench_stool_sit", &vLocal_91, 15.0f, 0);
					}
					if (Global_29006 == Global_30668[0])
					{
						if (Function_348(&bLocal_494) <= 3,5f)
						{
							Function_90(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
							DESTROY_VOLUME(bLocal_431);
							Function_368(&bLocal_494);
							iLocal_657 = 5;
						}
					}
					else if (Global_29006 == Global_30693[0])
					{
						if (Function_348(&bLocal_494) <= 5.0f)
						{
							Function_90(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
							DESTROY_VOLUME(bLocal_431);
							Function_368(&bLocal_494);
							iLocal_657 = 5;
						}
					}
					else if (Global_29006 == Global_30717[0])
					{
						if (Function_348(&bLocal_494) <= 3,5f)
						{
							Function_90(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
							DESTROY_VOLUME(bLocal_431);
							Function_368(&bLocal_494);
							iLocal_657 = 5;
						}
					}
				}
				else if (Function_348(&bLocal_494) <= 20.0f)
				{
					iLocal_657 = 23;
					if (Global_29006 == Global_30668[0])
					{
						AUDIO_MUSIC_ONE_SHOT("FTR_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					else if (Global_29006 == Global_30717[0])
					{
						AUDIO_MUSIC_ONE_SHOT("NRT_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					else if (Global_29006 == Global_30693[0])
					{
						AUDIO_MUSIC_ONE_SHOT("MEX_JOB_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					Function_92();
					Function_265();
				}
				break;
			
			case 0x00000005:
				iLocal_53 = 0;
				if (iLocal_54 == 0)
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_395, 202, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					TASK_CLEAR(bLocal_395);
					TASK_CLEAR(Global_34573);
					TASK_CLEAR(bLocal_390);
					if (Global_29006 == Global_30668[0])
					{
						if (IS_GRINGO_VALID(bLocal_451))
						{
							TASK_USE_GRINGO(bLocal_395, bLocal_451, "UseCase1", true, 1);
						}
						else
						{
							TASK_GO_TO_OBJECT(bLocal_395, bLocal_396, 1, 0, 1);
						}
					}
					else
					{
						TASK_GO_TO_COORD(bLocal_395, &vLocal_136, 1);
					}
					Function_350("JOB_NIGHT_FollowDog", 0x40f00000, 1, 2, 0, 0, 0);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					TASK_GO_TO_COORD(bLocal_397, &vLocal_374, 1);
					SET_ACTOR_UPDATE_PRIORITY(bLocal_397, false);
				}
			}
		}
	}
}
}

var Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x828E / 33422
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_43(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nightwatch_chu_end", 2, 1);
	}
	Function_154(&bVar0);
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

void Function_154(int iParam0) //Position: 0x830C / 33548
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_156(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_155(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1.0f, 0, 0.0f);
	return;
}

void Function_155(int iParam0) //Position: 0x8354 / 33620
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54,86999f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2747,75f, 33,87614f, 4252,167f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,006568f, -2,315368f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_156(int iParam0) //Position: 0x83BE / 33726
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54,86999f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2748,182f, 33,91851f, 4250,685f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,016169f, -1,636895f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_157(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x8428 / 33832
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_43(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nightwatch_blk_end", 2, 1);
	}
	Function_158(&bVar0);
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

void Function_158(int iParam0) //Position: 0x84A6 / 33958
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_160(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_159(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 5.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_159(int iParam0) //Position: 0x84E5 / 34021
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 687,9427f, 79,30278f, 1373,953f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,098651f, -0,76738f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_160(int iParam0) //Position: 0x854F / 34127
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 689,8436f, 80,9686f, 1376,145f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,40827f, -0,812226f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x85B9 / 34233
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_43(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nightwatch_hen_end", 2, 1);
	}
	Function_162(&bVar0);
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

void Function_162(int iParam0) //Position: 0x8637 / 34359
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_164(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_163(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 0, 5.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1,5f, 1);
	return;
}

void Function_163(int iParam0) //Position: 0x867A / 34426
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -827,9062f, 94,63351f, 2419,163f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,169246f, -2,670755f, 0,010927f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_164(int iParam0) //Position: 0x86E8 / 34536
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -825,986f, 94,62144f, 2418,435f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,029986f, -2,623744f, 0,010776f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_165(int iParam0) //Position: 0x8756 / 34646
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

void Function_166(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0x879D / 34717
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR(bVar0, &uParam1, iParam4, iParam5, iParam6);
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR(bVar0, &uParam1, iParam4, iParam5, iParam6);
			}
			else
			{
				TELEPORT_ACTOR(bParam0, &uParam1, iParam4, iParam5, iParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

int Function_167(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x882C / 34860
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
				Function_296(bVar1, bParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_169(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_169(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_168(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_168(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
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

int Function_168(int iParam0, int iParam1) //Position: 0x8A3E / 35390
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_63(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_63(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_169(bool bParam0, bool bParam1) //Position: 0x8AA9 / 35497
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

int Function_170(bool bParam0, bool bParam1) //Position: 0x8AC8 / 35528
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_171(bool bParam0) //Position: 0x8B1E / 35614
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_172() //Position: 0x8B62 / 35682
{
	if (Function_173(&bLocal_485, 25.0f) && bLocal_52 != 0)
	{
		if (STREAMING_ARE_BOUNDS_LOADED(vLocal_145, 5.0f) == 0)
		{
			STREAMING_LOAD_BOUNDS(vLocal_145, 5.0f, 1);
		}
		Function_368(&bLocal_500);
		iLocal_58 = 0;
		if ((iLocal_30 != 0 || iLocal_30 != 1) || iLocal_30 != 6)
		{
			if (!Function_258(bLocal_391, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_REVOLVER_FAR_HI_POWER_MULTI", vLocal_118);
			}
		}
		else if (iLocal_30 != 2 || iLocal_30 != 7)
		{
			AUDIO_PLAY_VOCAL_EFFECT(bLocal_400, 9, 1);
		}
		else if (iLocal_30 == 3)
		{
			AUDIO_PLAY_VOCAL_EFFECT(bLocal_408, 9, 1);
		}
		else if (iLocal_30 == 5)
		{
			PLAY_SOUND_FROM_POSITION("COYOTE_HOWL_MASTER", vLocal_118);
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 210, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_368(&vLocal_488);
		if (iLocal_30 != 5)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 216, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_173(bool bParam0, float fParam1) //Position: 0x8C74 / 35956
{
	if (Function_367(bParam0, fParam1))
	{
		Function_174(bParam0);
		return 1;
	}
	return 0;
}

void Function_174(var uParam0) //Position: 0x8C8C / 35980
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

bool Function_175() //Position: 0x8CA0 / 36000
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	GET_POSITION(GET_PLAYER_ACTOR(0), &vLocal_91);
	if (IS_ACTOR_VALID(bLocal_397))
	{
		GET_POSITION(bLocal_397, &vVar1);
	}
	switch (iLocal_622)
	{
		case 0x00000000:
			break;
		
		case 0x00000003:
			if (!Function_364(bLocal_395))
			{
				Function_232("JOB_NIGHT_ProctorDead", 4.0f);
			}
			break;
		
		case 0x00000004:
			if (iLocal_30 == 0)
			{
				iVar0 = Function_231(bLocal_391, bLocal_400);
			}
			else if (iLocal_30 == 1)
			{
				iVar0 = Function_230(bLocal_391, bLocal_400);
			}
			else if (iLocal_30 == 2)
			{
				iVar0 = Function_228(bLocal_391, bLocal_400);
			}
			else if (iLocal_30 == 3)
			{
				iVar0 = Function_225(bLocal_391, bLocal_400);
			}
			else if (iLocal_30 == 4)
			{
				iVar0 = Function_223(bLocal_391, bLocal_400);
			}
			else if (iLocal_30 == 5)
			{
				iVar0 = Function_213(bLocal_401);
			}
			else if (iLocal_30 == 6)
			{
				iVar0 = Function_210(bLocal_391, bLocal_400, bLocal_402);
			}
			else if (iLocal_30 == 7)
			{
				iVar0 = Function_194(bLocal_413, bLocal_400);
			}
			else if (iLocal_30 == 8)
			{
				iVar0 = Function_178(bLocal_391, bLocal_400);
			}
			if (bLocal_52)
			{
				if (VDIST(vLocal_91, vVar1) > 10.0f)
				{
					if (iLocal_51)
					{
						iLocal_59 = 0;
						TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_397);
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_397, 5,5f);
						Function_262(StackVal, StackVal, vLocal_118, 3);
					}
					else
					{
						iLocal_59 = 0;
						TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_397);
						RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 1);
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_397, 2.0f);
						Function_262(StackVal, StackVal, vLocal_118, 2);
					}
				}
			}
			else if (Function_348(&bLocal_494) <= 5.0f)
			{
				if (iLocal_30 != 7)
				{
					if (((VDIST(vLocal_91, vVar1) < 20.0f && !IS_BLIP_VALID(bLocal_423)) && !IS_BLIP_VALID(bLocal_424)) && !IS_BLIP_VALID(bLocal_422))
					{
						if (iLocal_59 == 0)
						{
							PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
							iLocal_59 = 1;
						}
						Function_176();
						if (!HUD_IS_SHOWING_OBJECTIVE())
						{
							Function_350("JOB_NIGHT_KeepUpWithDog", 4,5f, 1, 2, 0, 0, 0);
						}
					}
				}
				else if (VDIST(vLocal_91, vVar1) < 20.0f && Function_171(bLocal_413))
				{
					if (iLocal_59 == 0)
					{
						PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
						iLocal_59 = 1;
					}
					Function_176();
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						Function_350("JOB_NIGHT_KeepUpWithDog", 4,5f, 1, 2, 0, 0, 0);
					}
				}
			}
			break;
	}
	return iVar0;
}

void Function_176() //Position: 0x8F2D / 36653
{
	Function_368(&bLocal_503);
	TASK_CLEAR(bLocal_397);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_397, "dog_sniffing/sniff_for_pre");
	TASK_PRIORITY_SET(bLocal_397, true);
	if (Function_177(&bLocal_485))
	{
		Function_354(&bLocal_485);
	}
	bLocal_52 = true;
	return;
}

bool Function_177(bool bParam0) //Position: 0x8F7C / 36732
{
	return Function_9(*bParam0, 1);
}

int Function_178(bool bParam0, bool bParam1) //Position: 0x8F89 / 36745
{
	int iVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
			TASK_CLEAR(bParam1);
			Function_193(bParam1, bLocal_430, 2, 0);
			DESTROY_OBJECT(bLocal_442);
		}
		Function_89(bLocal_397);
		iLocal_64 = 0;
		Function_192(bParam0, 73);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		iLocal_18++;
		if (IS_ACTOR_VALID(bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
			TASK_CLEAR(bParam1);
			Function_193(bParam1, bLocal_430, 2, 0);
			DESTROY_OBJECT(bLocal_442);
		}
		if (VDIST(vLocal_91, vLocal_103) > 10.0f || GET_LAST_ATTACKER(bParam0) != bLocal_397)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_368(&bLocal_494);
		Function_89(bLocal_397);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		Function_192(bParam0, 73);
		return 0;
	}
	if ((IS_ACTOR_IN_HOGTIE(bParam0) || UNK_0x7A207FFE(bParam0)) || iLocal_72 != 1)
	{
		iLocal_18++;
		iLocal_17++;
		DECOR_SET_BOOL(bLocal_391, "PlayerHogtied", true);
		Function_189(50, 1, 0);
		if (iLocal_72 == 1)
		{
			Function_139("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		else
		{
			Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		if (!UNK_0x7A207FFE(bParam0) && iLocal_72 != 0)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 213, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		}
		if (IS_ACTOR_VALID(bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
			TASK_CLEAR(bParam1);
			Function_193(bParam1, bLocal_430, 2, 0);
			DESTROY_OBJECT(bLocal_442);
		}
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		Function_89(bLocal_397);
		Function_188(bParam0, 4294967291);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		Function_192(bParam0, 73);
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	iVar0 = Function_186(bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 67);
			break;
		
		case 0x00000043:
			if (iLocal_33 == 10)
			{
				iLocal_33 = 8;
			}
			else
			{
				iLocal_32 = 8;
			}
			if (Function_185(StackVal, StackVal, &bLocal_448, vLocal_118, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(bLocal_453))
			{
				Function_184(bLocal_453, 1);
				OPEN_DOOR_DIRECTION_FAST(bLocal_453, false);
			}
			else if (Function_185(StackVal, StackVal, &bLocal_448, vLocal_118, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(bLocal_455))
			{
				Function_184(bLocal_455, 1);
				OPEN_DOOR_DIRECTION_FAST(bLocal_455, false);
			}
			else if (Function_185(StackVal, StackVal, &bLocal_448, vLocal_118, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(bLocal_456))
			{
				Function_184(bLocal_456, 1);
				OPEN_DOOR_DIRECTION_FAST(bLocal_456, false);
			}
			else if (Function_185(StackVal, StackVal, &bLocal_448, vLocal_118, 0, 0x42960000) == GET_OBJECT_FROM_PHYSINST(bLocal_457))
			{
				Function_184(bLocal_457, 1);
				OPEN_DOOR_DIRECTION_FAST(bLocal_457, false);
			}
			Function_184(bLocal_454, 1);
			OPEN_DOOR_DIRECTION_FAST(bLocal_454, false);
			GET_OBJECT_AXIS(bLocal_438, &vLocal_356, 2);
			vLocal_368 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vLocal_356, vLocal_118, StackVal) * Vector(2.0f, 2.0f, 2.0f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vLocal_368, 10.0f, &vLocal_368, &uVar1);
			REFERENCE_ACTOR(bParam0);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			SET_ACTOR_FACTION(bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			SET_ACTOR_FACTION(bParam1, 1);
			bLocal_430 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_nwcorral");
			Function_368(&vLocal_488);
			Function_183(bParam1);
			Function_183(bParam0);
			Function_188(bParam0, 0);
			bLocal_429 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, Function_43(), 2, vLocal_100, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			if (IS_VOLUME_VALID(bLocal_429))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_429);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_429);
				Function_192(bParam0, 72);
			}
			break;
		
		case 0x00000048:
			if (IS_ACTOR_VALID(bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				GET_POSITION(bParam1, &vLocal_115);
				TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
				AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 0);
				TELEPORT_ACTOR(bParam0, &vLocal_368, 1, 1, 1);
				TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
				PRINTVECTOR(vLocal_368);
			}
			else
			{
				LOG_ERROR("The rustler is not valid");
			}
			Function_182(bParam1, bParam0);
			bLocal_442 = CREATE_GRINGO_IN_LAYOUT(bLocal_418, "nw_cow", "$/content/scripting/gringo/SimpleGringo/pull_cow", vLocal_115, 0.0f, 0.0f, 0.0f);
			bLocal_458 = CREATE_LEASH_OBJECT(bLocal_418, Function_43(), RAND_FLOAT_RANGE(1,8f, 2.0f), 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
			Function_192(bParam0, 68);
			break;
		
		case 0x00000044:
			if (IS_OBJECT_VALID(bLocal_442))
			{
				TASK_CLEAR(bParam0);
				TASK_CLEAR(bParam1);
				SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_442, "Pull", true, 0, 0);
				SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_442, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_442), "Pull", 4294967295, 1);
				TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_442), "UseCase1", 4294967295, 1);
				LEASH_ATTACH_TO_OBJECT_BONE(bLocal_458, bParam0, "finger_11_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0);
				LEASH_ATTACH_TO_OBJECT_BONE(bLocal_458, bParam1, "neck02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 0);
				Function_192(bParam0, 69);
			}
			break;
		
		case 0x00000045:
			if ((((VDIST(vLocal_91, vLocal_100) >= 25.0f && (Function_258(bParam0, 0,65f, 0x42960000, 1, 1, 0) || Function_258(bParam1, 0,65f, 0x42960000, 1, 1, 0))) || VDIST(vLocal_91, vLocal_100) >= 10.0f) || GET_LAST_ATTACKER(bParam0) != Global_34573) || GET_LAST_ATTACKER(bParam1) != Global_34573)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
					iLocal_51 = 1;
				}
				Function_368(&bLocal_494);
				Function_350("JOB_NIGHT_SubdueCowThief", 5.0f, 1, 2, 0, 0, 0);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 70);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x00000046:
			GET_POSITION(bParam0, &vLocal_100);
			if (GET_TASK_STATUS(bLocal_397, 4294967295) != 0 && iLocal_79 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(bLocal_397, bParam0);
				iLocal_79 = 1;
			}
			if (((GET_LAST_ATTACKER(bParam0) != Global_34573 || Function_180(bParam1)) || GET_LAST_ATTACKER(bParam1) != Global_34573) || VDIST2(vLocal_91, vLocal_100) > 1.0f)
			{
				LEASH_DETACH_OBJECT(bLocal_458, 0);
				LEASH_DETACH_OBJECT(bLocal_458, 1);
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				TASK_KILL_CHAR(bParam0, Global_34573);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				DESTROY_OBJECT(bLocal_458);
				if (IS_ACTOR_ALIVE(bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
					TASK_CLEAR(bParam1);
					Function_193(bParam1, bLocal_430, 2, 0);
				}
				Function_192(bParam0, 73);
			}
			else if ((IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1) && iLocal_71 != 0) && VDIST(vLocal_91, vLocal_100) >= 15.0f)
			{
				Function_368(&bLocal_494);
				iLocal_71 = 1;
			}
			else if ((iLocal_71 != 1 && Function_348(&bLocal_494) < 2.0f) && IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1))
			{
				TASK_FLEE_COORD(bParam0, &vLocal_371, 3, -1.0f, 20.0f, 0);
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				LEASH_DETACH_OBJECT(bLocal_458, 0);
				LEASH_DETACH_OBJECT(bLocal_458, 1);
				if (IS_ACTOR_ALIVE(bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
					TASK_CLEAR(bParam1);
					Function_193(bParam1, bLocal_430, 2, 0);
				}
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				Function_368(&bLocal_494);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_OBJECT(bLocal_458);
				Function_192(bParam0, 71);
			}
			else if (Function_348(&bLocal_494) < 15.0f)
			{
				LEASH_DETACH_OBJECT(bLocal_458, 0);
				LEASH_DETACH_OBJECT(bLocal_458, 1);
				TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &vLocal_100);
				if (IS_ACTOR_ALIVE(bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
					TASK_CLEAR(bParam1);
					Function_193(bParam1, bLocal_430, 2, 0);
				}
				TASK_KILL_CHAR(bParam0, Global_34573);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_OBJECT(bLocal_458);
				Function_192(bParam0, 73);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 2.0f) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				TASK_FLEE_COORD(bParam0, &vLocal_371, 3, -1.0f, 20.0f, 0);
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				LEASH_DETACH_OBJECT(bLocal_458, 0);
				LEASH_DETACH_OBJECT(bLocal_458, 1);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				if (IS_ACTOR_ALIVE(bParam1))
				{
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
					TASK_CLEAR(bParam1);
					Function_193(bParam1, bLocal_430, 2, 0);
				}
				Function_368(&bLocal_494);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_OBJECT(bLocal_458);
				Function_192(bParam0, 71);
			}
			break;
		
		case 0x00000047:
			Function_387(bParam0, &vLocal_100);
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (Function_348(&bLocal_494) < 10.0f && VDIST(vLocal_91, vLocal_100) <= 10.0f)
				{
					iLocal_72 = 1;
					Function_192(bParam0, 49);
				}
				if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || Function_180(bParam0)) || Function_348(&bLocal_494) < 12.0f)
				{
					iLocal_72 = 0;
					TASK_KILL_CHAR(bParam0, Global_34573);
					TASK_KILL_CHAR(bLocal_397, bParam0);
					Function_192(bParam0, 73);
					if (Function_348(&bLocal_494) < 12.0f)
					{
					}
				}
			}
			break;
		
		case 0x00000049:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_179(bool bParam0) //Position: 0x99A3 / 39331
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

bool Function_180(bool bParam0) //Position: 0x99E9 / 39401
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_181(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x99F7 / 39415
{
	if (((Function_367(&iParam3, 55.0f) && !WOULD_ACTOR_BE_VISIBLE(397, &uParam0, 3212836864)) && !((IS_BLIP_VALID(bLocal_422) || IS_BLIP_VALID(bLocal_424)) || IS_BLIP_VALID(bLocal_423))) || GET_TASK_STATUS(bLocal_397, 64) != 4)
	{
		if (GET_TASK_STATUS(bLocal_397, 64) == 4)
		{
		}
		RESET_ANIM_SET_FOR_ACTOR(*bParam7, 0);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 0);
		DESTROY_ACTOR(*bParam6);
		DESTROY_ACTOR(*bParam7);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		return 0;
	}
	return 1;
	return 1;
}

void Function_182(bool bParam0, bool bParam1) //Position: 0x9A7A / 39546
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	GET_POSITION(bParam0, &vVar1);
	GET_POSITION(bParam1, &vVar4);
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar4, StackVal) };
	bVar0 = UNK_0x9C40E671(&vVar7);
	SET_ACTOR_HEADING(bParam0, bVar0, 1);
	return;
}

void Function_183(bool bParam0) //Position: 0x9AAA / 39594
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

void Function_184(bool bParam0, bool bParam1) //Position: 0x9ADE / 39646
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

int Function_185(bool bParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x9B2F / 39727
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(*bParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(*bParam0) < 0)
	{
		return "";
	}
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(*bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, *bParam0);
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vParam1, vVar4);
		if ((bVar2 >= bVar3 && bVar2 <= fParam4) && bVar2 >= fParam5)
		{
			bVar3 = bVar2;
			bVar1 = bVar0;
		}
		bVar7++;
	}
	return bVar1;
}

int Function_186(bool bParam0) //Position: 0x9BB2 / 39858
{
	if (!DECOR_CHECK_EXIST(bParam0, "nightwatch_state"))
	{
		return 0;
	}
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "nightwatch_state");
}

bool Function_187(bool bParam0) //Position: 0x9BF1 / 39921
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_188(bool bParam0, bool bParam1) //Position: 0x9C03 / 39939
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_189(int iParam0, bool bParam1, bool bParam2) //Position: 0x9C23 / 39971
{
	int iVar0;
	bool bVar1;
	
	if (Function_120(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_56(1);
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
			Function_115(1, bVar1);
			if (!bParam2)
			{
				if (!Function_114(Global_76848, 1))
				{
					Function_109(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_191(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_114(Global_76848, 2))
				{
					Function_109(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_75(1, bVar1, 0, 0);
	}
	else
	{
		Function_146(1, (4294967295 * bVar1), 0);
	}
	if (Function_56(1) <= 4294962296)
	{
		Function_41(1, 4294962296, 0);
	}
	else if (Function_56(1) >= 5000)
	{
		Function_41(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_52(1));
	iVar0 = Function_56(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_104(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_104(2, Function_190(Global_12976.f_152), 0);
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
				Function_104(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_104(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_104(2, Function_190(Global_12976.f_152), 1);
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
				Function_104(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_104(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_104(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_104(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_104(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_104(2, Function_190(Global_12976.f_152), 1);
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
				Function_104(2, Function_190(Global_12976.f_152), 0);
			}
			break;
	}
	Function_103(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_190(int iParam0) //Position: 0x9F38 / 40760
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

int Function_191(int iParam0, bool bParam1) //Position: 0x9FDB / 40923
{
	bool bVar0;
	int iVar1;
	
	Function_146(iParam0, bParam1, 0);
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
	iVar1 = Function_116(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_192(bool bParam0, bool bParam1) //Position: 0xA177 / 41335
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "nightwatch_state", bParam1);
	return;
}

void Function_193(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA19B / 41371
{
	var uVar0;
	var uVar3;
	
	GET_VOLUME_CENTER(bParam1, &uVar0);
	FIND_GROUND_INTERSECTION(&uVar0, 10.0f, &uVar0, &uVar3);
	TASK_GO_TO_COORD(bParam0, &uVar0, iParam2);
	TASK_PRIORITY_SET(bParam0, bParam3);
}

int Function_194(bool bParam0, bool bParam1) //Position: 0xA1C9 / 41417
{
	int iVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		iLocal_64 = 0;
		Function_368(&bLocal_494);
		AI_STOP_IGNORING_ACTOR(bLocal_397);
		Function_209(bParam0, 49);
		return 0;
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0) == 0)
	{
		iLocal_18++;
		if (IS_ACTOR_VALID(bLocal_391))
		{
			if (UNK_0x7A207FFE(bLocal_391) || IS_ACTOR_HOGTIED(bLocal_391))
			{
				iLocal_17++;
				DECOR_SET_BOOL(bLocal_391, "PlayerHogtied", true);
				Function_188(bLocal_391, 4294967291);
				Function_93(bLocal_391);
			}
		}
		if (IS_ACTOR_VALID(bLocal_392))
		{
			if (UNK_0x7A207FFE(bLocal_392) || IS_ACTOR_HOGTIED(bLocal_392))
			{
				iLocal_17++;
				DECOR_SET_BOOL(bLocal_392, "PlayerHogtied", true);
				Function_188(bLocal_392, 4294967291);
				Function_93(bLocal_392);
			}
		}
		if (IS_ACTOR_VALID(bLocal_393))
		{
			if (UNK_0x7A207FFE(bLocal_393) || IS_ACTOR_HOGTIED(bLocal_393))
			{
				iLocal_17++;
				DECOR_SET_BOOL(bLocal_393, "PlayerHogtied", true);
				Function_188(bLocal_393, 4294967291);
				Function_93(bLocal_393);
			}
		}
		if (IS_ACTOR_VALID(bLocal_394))
		{
			if (UNK_0x7A207FFE(bLocal_394) || IS_ACTOR_HOGTIED(bLocal_394))
			{
				iLocal_17++;
				DECOR_SET_BOOL(bLocal_394, "PlayerHogtied", true);
				Function_188(bLocal_394, 4294967291);
				Function_93(bLocal_394);
			}
		}
		if (SQUAD_IS_VALID(bParam0))
		{
			Function_208(bParam0);
			Function_207(bParam0);
		}
		if (VDIST(vLocal_91, vLocal_103) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		AI_STOP_IGNORING_ACTOR(bLocal_397);
		if (IS_ACTOR_VALID(bParam1))
		{
			TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, 10.0f, 0, 0, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		}
		Function_209(bParam0, 49);
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	iVar0 = Function_206(bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_209(bParam0, 44);
			break;
		
		case 0x0000002C:
			vLocal_121 = { 0,1f, 0.0f, 0.0f };
			if (iLocal_33 == 10)
			{
				iLocal_33 = 7;
			}
			else
			{
				iLocal_32 = 7;
			}
			if (SQUAD_IS_VALID(bParam0))
			{
				GET_POSITION(bLocal_391, &vLocal_100);
				SQUAD_SET_FACTION(bParam0, 1);
				Function_205(bParam0, 1);
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				SET_ACTOR_FACTION(bParam1, 20);
				SET_ACTOR_ONE_SHOT_DEATH(bParam1, true);
			}
			Function_368(&vLocal_488);
			bLocal_440 = CREATE_GRINGO_IN_LAYOUT(bLocal_418, "Harass", "$/content/scripting/gringo/simplegringo/bandito_harass", vLocal_115, 0.0f, 0.0f, 0.0f);
			Function_209(bParam0, 45);
			break;
		
		case 0x0000002D:
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_440)))
			{
				SNAP_ACTOR_TO_GRINGO(bLocal_391, bLocal_440, "harass_A", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(bLocal_392, bLocal_440, "harass_B", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(bLocal_393, bLocal_440, "harass_C", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(bLocal_394, bLocal_440, "harass_D", false, 0, 0);
				SNAP_ACTOR_TO_GRINGO(bParam1, bLocal_440, "victim", false, 0, 0);
				TASK_USE_GRINGO(bLocal_391, GET_GRINGO_FROM_OBJECT(bLocal_440), "harass_A", 4294967295, 1);
				TASK_USE_GRINGO(bLocal_392, GET_GRINGO_FROM_OBJECT(bLocal_440), "harass_B", 4294967295, 1);
				TASK_USE_GRINGO(bLocal_393, GET_GRINGO_FROM_OBJECT(bLocal_440), "harass_C", 4294967295, 1);
				TASK_USE_GRINGO(bLocal_394, GET_GRINGO_FROM_OBJECT(bLocal_440), "harass_D", 4294967295, 1);
				TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_440), "victim", 4294967295, 1);
				Function_209(bParam0, 46);
			}
			return Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, vLocal_91, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x0000002E:
			if (Function_203(bParam0, 1.0f, 50.0f, 1, 1) || Function_202(bParam0, Global_34573, 0))
			{
				Function_201(bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_350("JOB_NIGHT_SaveWoman", 5.0f, 1, 2, 0, 0, 0);
				Function_368(&bLocal_494);
				iLocal_51 = 1;
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_368(&bLocal_497);
				Function_209(bParam0, 47);
			}
			return Function_204(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, vLocal_91, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x0000002F:
			if (GET_TASK_STATUS(bLocal_397, 4294967295) != 0 && iLocal_79 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(bLocal_397, bLocal_391);
				iLocal_79 = 1;
			}
			if (Function_348(&bLocal_497) < bLocal_44)
			{
				AUDIO_PLAY_VOCAL_EFFECT(bParam1, 9, 1);
				Function_368(&bLocal_497);
				bLocal_44 = RAND_FLOAT_RANGE(5.0f, 10.0f);
			}
			if (((((Function_348(&bLocal_494) < 8.0f && VDIST(vLocal_91, vLocal_115) > 8.0f) || Function_202(bParam0, Global_34573, 0)) || GET_LAST_ATTACKER(bParam1) != Global_34573) || Function_202(bParam0, bLocal_397, 0)) || Function_348(&bLocal_494) < 30.0f)
			{
				TASK_CLEAR(bLocal_397);
				Function_198(bLocal_397, bParam0, 1);
				Function_197(bLocal_397, bLocal_415);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_208(bParam0);
				Function_196(bParam0, Global_34573, 4);
				Function_195(bParam0, Global_34573);
				SET_ACTOR_FACTION(bParam1, 3);
				AI_IGNORE_ACTOR(bLocal_397);
				TASK_CLEAR(bParam1);
				TASK_CROUCH(bParam1, 3.0f);
				Function_209(bParam0, 49);
			}
			break;
		
		case 0x00000031:
			if (UNK_0x7A207FFE(bLocal_391) && iLocal_74 != 0)
			{
				Function_93(bLocal_391);
				iLocal_74 = 1;
			}
			if (UNK_0x7A207FFE(bLocal_392) && iLocal_75 != 0)
			{
				Function_93(bLocal_392);
				iLocal_75 = 1;
			}
			if (UNK_0x7A207FFE(bLocal_393) && iLocal_76 != 0)
			{
				Function_93(bLocal_393);
				iLocal_76 = 1;
			}
			if (UNK_0x7A207FFE(bLocal_394) && iLocal_77 != 0)
			{
				Function_93(bLocal_394);
				iLocal_77 = 1;
			}
			if (GET_TASK_STATUS(bLocal_397, 5) == 1 && iLocal_78 != 1)
			{
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				iLocal_78 = 0;
			}
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_195(bool bParam0, bool bParam1) //Position: 0xA7FC / 43004
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_196(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA84E / 43086
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
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_197(bool bParam0, bool bParam1) //Position: 0xA893 / 43155
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6[20];
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = GET_ACTORSET_SIZE(bParam1);
		if (iVar0 >= 20)
		{
			iVar0 = 20;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			iVar6[iVar2] = iVar2;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar4 = RAND_INT_RANGE(false, (iVar0 - 1));
			iVar5 = iVar6[bVar4];
			iVar6[bVar4] = iVar6[iVar2];
			iVar6[iVar2] = iVar5;
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < (iVar0 - 1))
		{
			bVar3 = iVar6[iVar2];
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam1, bVar3);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					TASK_KILL_CHAR(bParam0, bVar1);
					MEMORY_CONSIDER_AS_ENEMY(bParam0, bVar1);
				}
			}
			iVar2++;
		}
	}
	return;
}

void Function_198(var uParam0, bool bParam1, int iParam2) //Position: 0xA955 / 43349
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_199(&uParam0, bVar1, iParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_199(var uParam0, bool bParam1, bool bParam2) //Position: 0xA99F / 43423
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_200(bParam1);
			vVar0 = { StackVal, StackVal, Function_200(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*uParam0, bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(*uParam0, bParam1, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

vector3 Function_200(bool bParam0) //Position: 0xAAA7 / 43687
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

void Function_201(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0xAB11 / 43793
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

int Function_202(bool bParam0, bool bParam1, int iParam2) //Position: 0xABFB / 44027
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_LAST_ATTACKER(bVar1) == bParam1)
			{
				return 1;
			}
			if (iParam2 == 1)
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					if (GET_LAST_ATTACKER(GET_MOUNT(bVar1)) == bParam1)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_203(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xAC6D / 44141
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_258(bVar1, iParam1, iParam2, iParam3, iParam4, 0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_204(vector3 vParam0, vector3 vParam3, bool bParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xACB2 / 44210
{
	if ((((VDIST(vParam0, vParam3) < 20.0f && Function_367(&bParam6, 55.0f)) && !WOULD_ACTOR_BE_VISIBLE(397, &vParam3, 3212836864)) && !(((IS_BLIP_VALID(bLocal_422) || IS_BLIP_VALID(bLocal_424)) || IS_BLIP_VALID(bLocal_423)) || Function_170(bLocal_413, 1))) || GET_TASK_STATUS(bLocal_397, 64) != 4)
	{
		if (GET_TASK_STATUS(bLocal_397, 64) == 4)
		{
		}
		RESET_ANIM_SET_FOR_ACTOR(*bParam10, 0);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 0);
		Function_88(*bParam9);
		DESTROY_ACTOR(*bParam10);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		return 0;
	}
	return 1;
	return 1;
}

void Function_205(bool bParam0, int iParam1) //Position: 0xAD4F / 44367
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
			RESET_ANIM_SET_FOR_ACTOR(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

int Function_206(bool bParam0) //Position: 0xAD8F / 44431
{
	if (!DECOR_CHECK_EXIST(bParam0, "nightwatch_state"))
	{
		return 0;
	}
	return DECOR_GET_INT(GET_OBJECT_FROM_SQUAD(bParam0), "nightwatch_state");
}

void Function_207(bool bParam0) //Position: 0xADCE / 44494
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

void Function_208(bool bParam0) //Position: 0xAE03 / 44547
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

void Function_209(bool bParam0, bool bParam1) //Position: 0xAE35 / 44597
{
	DECOR_SET_INT(GET_OBJECT_FROM_SQUAD(bParam0), "nightwatch_state", bParam1);
	return;
}

int Function_210(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAE59 / 44633
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (((!IS_ACTOR_HOGTIED(bParam1) && !UNK_0x7A207FFE(bParam1)) && VDIST(vLocal_115, vLocal_91) > 10.0f) && IS_ACTOR_ALIVE(bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				SAY_SINGLE_LINE_CONTEXT(bParam1, 103, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				if (IS_ACTOR_VALID(bLocal_402))
				{
					TASK_MOUNT(bParam1, bLocal_402, 0, 1, 2, 2147483647);
				}
			}
		}
		Function_89(bLocal_397);
		iLocal_64 = 0;
		Function_192(bParam0, 65);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		iLocal_18++;
		if (IS_ACTOR_VALID(bParam1))
		{
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
			if (((!IS_ACTOR_HOGTIED(bParam1) && !UNK_0x7A207FFE(bParam1)) && IS_ACTOR_ALIVE(bParam1)) && VDIST(vLocal_115, vLocal_91) > 10.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(bParam1, 103, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			}
			else
			{
				MEMORY_CONSIDER_AS(bParam1, Global_34573, 2);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 50.0f, 20.0f, 0, 0, 0);
			}
		}
		if (VDIST(vLocal_91, vLocal_103) > 15.0f || GET_LAST_ATTACKER(bParam0) != bLocal_397)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_368(&bLocal_494);
		Function_89(bLocal_397);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		DEREFERENCE_ACTOR(bParam2);
		Function_192(bParam0, 65);
		return 0;
	}
	if (IS_ACTOR_IN_HOGTIE(bParam0) || UNK_0x7A207FFE(bParam0))
	{
		iLocal_18++;
		iLocal_17++;
		Function_368(&bLocal_494);
		DECOR_SET_BOOL(bLocal_391, "PlayerHogtied", true);
		Function_189(50, 1, 0);
		Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		if (!UNK_0x7A207FFE(bParam0))
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 213, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (VDIST(vLocal_91, vLocal_103) > 15.0f || GET_LAST_ATTACKER(bParam0) != bLocal_397)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		if (IS_ACTOR_VALID(bParam1))
		{
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			TASK_FLEE_ACTOR(bParam1, Global_34573, 20.0f, 20.0f, 0, 0, 0);
		}
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		Function_89(bLocal_397);
		Function_188(bParam0, 4294967291);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		DEREFERENCE_ACTOR(bParam2);
		Function_192(bParam0, 65);
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	bVar0 = Function_186(bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 56);
			break;
		
		case 0x00000038:
			if (iLocal_33 == 10)
			{
				iLocal_33 = 6;
			}
			else
			{
				iLocal_32 = 6;
			}
			REFERENCE_ACTOR(bParam0);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			SET_ACTOR_FACTION(bParam0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, Global_34573);
			REFERENCE_ACTOR(bParam2);
			TASK_CLEAR(bParam2);
			TASK_PRIORITY_SET(bParam2, false);
			SET_ACTOR_FACTION(bParam2, 1);
			Function_368(&vLocal_488);
			Function_192(bParam0, 57);
			Function_183(bParam1);
			Function_183(bParam0);
			Function_188(bParam0, 0);
			Function_183(bParam2);
			break;
		
		case 0x00000039:
			if (IS_ACTOR_VALID(bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				GET_POSITION(bParam1, &vLocal_115);
				SET_ACTOR_FACTION(bParam1, 21);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bParam1);
				SET_ANIM_SET_FOR_ACTOR(bParam1, "stand_surrender", 0);
				TASK_CLEAR(bParam1);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				TASK_DRAW_HOLSTER_WEAPON(bParam0, 1);
				GET_POSITION(bParam0, &vLocal_100);
				AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 0);
			}
			else
			{
				LOG_ERROR("The rustler is not valid");
			}
			if (IS_ACTOR_VALID(bParam2))
			{
				TASK_CLEAR(bParam2);
			}
			else
			{
				LOG_ERROR("The Horse is not valid");
			}
			Function_192(bParam0, 58);
			break;
		
		case 0x0000003A:
			vLocal_121 = { 2.0f, 0.0f, 0.0f };
			if (!IS_ACTOR_MOUNTED(bParam2))
			{
				ACTOR_MOUNT_ACTOR(bParam1, bParam2);
				GET_ACTOR_OFFSET_WORLD_COORDS(bParam2, &vLocal_121, &uLocal_124);
				FIND_GROUND_INTERSECTION(&uLocal_124, 10.0f, &vLocal_127, &uVar1);
				TELEPORT_ACTOR(bParam0, &vLocal_127, 1, 1, 1);
				PRINTVECTOR(vLocal_127);
			}
			if (IS_ACTOR_MOUNTED(bParam2))
			{
				Function_293(bParam0, bParam1);
				TASK_DRAW_HOLSTER_WEAPON(bParam0, 1);
				AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 0);
				TASK_POINT_GUN_AT_OBJECT(bParam0, bParam1, -1.0f, 0);
				Function_192(bParam0, 59);
			}
			break;
		
		case 0x0000003B:
			if ((!IS_ACTION_NODE_PLAYING(bParam1, "stand_surrender/horse_surrender") && IS_ACTOR_RIDING(bParam1)) && IS_ACTOR_VALID(bParam1))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_400, "stand_surrender/horse_surrender");
				TASK_PRIORITY_SET(bParam1, true);
				Function_192(bParam0, 61);
			}
			break;
		
		case 0x0000003D:
			if (VDIST(vLocal_91, vLocal_100) >= 30.0f && iLocal_66 != 0)
			{
				Function_211(StackVal, StackVal, vLocal_118);
				iLocal_66 = 1;
			}
			if ((((VDIST(vLocal_91, vLocal_100) >= 40.0f && (Function_258(bParam0, 0,65f, 0x42960000, 1, 1, 0) || Function_258(bParam1, 0,65f, 0x42960000, 1, 1, 0))) || VDIST(vLocal_91, vLocal_100) >= 10.0f) || GET_LAST_ATTACKER(bParam0) != Global_34573) || GET_LAST_ATTACKER(bParam1) != Global_34573)
			{
				SET_ACTOR_HEALTH(bParam1, 1.0f);
				TASK_CLEAR(bParam0);
				TASK_CLEAR(bParam1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				SET_ACTOR_FACTION(bParam1, 20);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
					iLocal_51 = 1;
				}
				bLocal_29 = TASK_SEQUENCE_OPEN();
				TASK_CLEAR(false);
				TASK_MOUNT(false, bParam2, 1, 1, 2, 2147483647);
				TASK_KILL_CHAR(false, bParam1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam0, bLocal_29);
				TASK_SEQUENCE_RELEASE(bLocal_29, 1);
				Function_368(&bLocal_494);
				Function_350("JOB_NIGHT_SubdueHorseThief", 5.0f, 1, 2, 0, 0, 0);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 62);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x0000003E:
			if (Function_348(&bLocal_494) <= 2.0f || GET_LAST_ATTACKER(bParam0) != Global_34573)
			{
				if (IS_ACTOR_ALIVE(bParam1))
				{
					TASK_KILL_CHAR(bLocal_397, bParam0);
					TASK_FLEE_ACTOR(bParam1, Global_34573, 50.0f, 25.0f, 1, 0, 0);
					SET_ACTOR_FACTION(bParam0, 19);
				}
				Function_192(bParam0, 63);
			}
			break;
		
		case 0x0000003F:
			GET_POSITION(bParam2, &uLocal_130);
			GET_POSITION(bParam1, &vLocal_115);
			if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam0) != bLocal_397) || GET_LAST_ATTACKER(bParam1) != bParam0)
			{
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				TASK_KILL_CHAR(bParam0, Global_34573);
				Function_192(bParam0, 65);
			}
			if (!IS_ACTOR_ALIVE(bParam1) || VDIST(vLocal_100, vLocal_115) < 10.0f)
			{
				TASK_KILL_CHAR(bParam0, Global_34573);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_192(bParam0, 65);
			}
			break;
		
		case 0x00000041:
			break;
		
		case 0x00000042:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_211(vector3 vParam0) //Position: 0xB60A / 46602
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = 3;
	iVar7 = 324;
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_418);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar2 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "rustlerVol", 2, vParam0, 0.0f, 0.0f, 0.0f, 30.0f, 10.0f, 30.0f);
	if (IS_VOLUME_VALID(bVar2))
	{
		ITERATE_IN_VOLUME(bVar0, GET_OBJECT_FROM_VOLUME(bVar2));
	}
	else
	{
		LOG_ERROR("AlertNerbyActors: Unable to create search volume.");
	}
	bVar4 = CREATE_ACTORSET_IN_LAYOUT(bLocal_418, "nwActorSet", 0);
	if (!IS_ACTORSET_VALID(bVar4))
	{
		LOG_ERROR("AlertNerbyActors: Unable to create actor set.");
	}
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
		bVar5 = GET_ACTOR_ENUM(bVar3);
		if (((bVar3 == bLocal_391 && bVar3 == bLocal_400) && bVar3 == bLocal_397) && bVar3 == bLocal_390)
		{
			if (bVar5 <= iVar6 && bVar5 >= iVar7)
			{
				ADD_ACTORSET_MEMBER(bVar4, bVar3);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (GET_ACTORSET_SIZE(bVar4) >= 0)
	{
		PRINTINT(GET_ACTORSET_SIZE(bVar4));
		Function_212(bVar4, bLocal_391, 40.0f, 10.0f, 0, 0);
	}
	if (IS_ACTORSET_VALID(bVar4))
	{
		DESTROY_ACTORSET(bVar4);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	if (IS_VOLUME_VALID(bVar2))
	{
		DESTROY_VOLUME(bVar2);
	}
	return;
}

void Function_212(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xB79C / 47004
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

int Function_213(bool bParam0) //Position: 0xB7E3 / 47075
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("INVALID COYOTE");
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0) || iLocal_62 != 1)
	{
		SAY_SINGLE_LINE_CONTEXT(Global_34573, 209, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		DESTROY_VOLUME(bLocal_426);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		iLocal_18++;
		return 0;
	}
	bVar0 = Function_186(bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 50);
			break;
		
		case 0x00000032:
			if (iLocal_33 == 10)
			{
				iLocal_33 = 5;
			}
			else
			{
				iLocal_32 = 5;
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_109);
				PRINTSTRING("aCoyote is spawned here:");
				PRINTVECTOR(vLocal_109);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bParam0, 11, false);
				Function_183(bParam0);
			}
			GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vLocal_121, &uLocal_124);
			FIND_GROUND_INTERSECTION(&uLocal_124, 10.0f, &uLocal_124, &uVar1);
			if (SQUAD_IS_VALID(bLocal_411))
			{
				Function_219(bLocal_411, bParam0, 3, 1.0f, 0.0f, 1);
			}
			REFERENCE_ACTOR(bParam0);
			Function_368(&vLocal_488);
			Function_192(bParam0, 51);
			break;
		
		case 0x00000033:
			Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("nCoyoteVol") };
			GET_POSITION(bParam0, &vLocal_109);
			bLocal_426 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, &Local_83, 2, vLocal_109, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
			Function_192(bParam0, 52);
			break;
		
		case 0x00000034:
			if (IS_VOLUME_VALID(bLocal_426))
			{
				TASK_CLEAR(bParam0);
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, bLocal_426, 4, true);
				Function_216(bLocal_411, bLocal_426, 4, 1);
				SQUAD_SET_FACTION(bLocal_411, 20);
				SET_ACTOR_FACTION(bLocal_401, 19);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_411, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, bLocal_426, -1.0f);
				KILL_ACTOR(bLocal_407);
				Function_192(bParam0, 53);
			}
			break;
		
		case 0x00000035:
			GET_POSITION(bLocal_401, &vLocal_109);
			if (Function_258(bParam0, 0,65f, 50.0f, 1, 1, 0) || VDIST(vLocal_109, vLocal_91) >= 15.0f)
			{
				if (IS_BLIP_VALID(bLocal_423) == 0)
				{
					bLocal_423 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
					iLocal_51 = 1;
					Function_350("JOB_NIGHT_CoyoteKill", 0x40f00000, 1, 2, 0, 0, 0);
					Function_215(bLocal_411);
					PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
					MEMORY_IDENTIFY(bParam0, Global_34573);
					TASK_KILL_CHAR(bParam0, Global_34573);
					SET_MOTIVE_BY_ENUM(bParam0, 0, 0.0f);
					AUDIO_SET_PLAYER_MOOD(1, 0);
					Function_192(bParam0, 54);
				}
			}
			if ((VDIST(vLocal_91, vLocal_109) < 20.0f && Function_367(&vLocal_488, 55.0f)) || (!WOULD_ACTOR_BE_VISIBLE(397, &vLocal_109, 3212836864) && Function_367(&vLocal_488, 55.0f)))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 208, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				DESTROY_ACTOR(bParam0);
				Function_214(&bLocal_411);
				iLocal_62 = 1;
				iLocal_64 = 0;
				Function_368(&bLocal_494);
				return 0;
			}
			if (GET_TASK_STATUS(bLocal_397, 64) == 4)
			{
				DESTROY_ACTOR(bParam0);
				Function_214(&bLocal_411);
				iLocal_62 = 1;
				iLocal_64 = 0;
				Function_368(&bLocal_494);
				return 0;
			}
			break;
		
		case 0x00000036:
			if (((GET_TASK_STATUS(bLocal_397, 4294967295) != 0 && iLocal_79 != 0) || IS_ACTOR_IN_VOLUME(Global_34573, bLocal_426)) || IS_ACTOR_IN_VOLUME(bLocal_397, bLocal_426))
			{
				TASK_CLEAR(bLocal_397);
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				iLocal_79 = 1;
				Function_192(bParam0, 55);
			}
			break;
		
		case 0x00000037:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_214(bool bParam0) //Position: 0xBB5D / 47965
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_215(bool bParam0) //Position: 0xBBAC / 48044
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

void Function_216(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBBF3 / 48115
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
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

struct<32> Function_217(bool bParam0) //Position: 0xBC42 / 48194
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_218("0", &cVar8, ""), 4);
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

struct<32> Function_218(char* cParam0, char* cParam1, char* cParam2) //Position: 0xBCAC / 48300
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_219(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0xBCCB / 48331
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	struct<5> Var9;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_222(bParam1);
			vVar3 = { StackVal, StackVal, Function_222(bParam1) };
			Function_221(bParam1);
			Var9 = { StackVal, StackVal, Function_221(bParam1) };
			vVar6 = { StackVal, StackVal, vVar3 };
			vVar6.f_4 = (vVar6.y + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						vVar6.x = vVar3.x;
						vVar6.f_8 = (vVar6.z + fParam3);
					}
					if (bParam5)
					{
						Var9.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_220(StackVal, StackVal, StackVal, bVar2, vVar6, 1, 1, 1);
					iVar1++;
					vVar6.x = (vVar6.x + fParam3);
				}
				bVar0++;
			}
		}
	}
}

void Function_220(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xBD7F / 48511
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

vector3 Function_221(bool bParam0) //Position: 0xBE38 / 48696
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_222(bool bParam0) //Position: 0xBE5F / 48735
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

int Function_223(bool bParam0, bool bParam1) //Position: 0xBE86 / 48774
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		iLocal_64 = 0;
		Function_368(&bLocal_494);
		Function_192(bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		iLocal_18++;
		if (VDIST(vLocal_91, vLocal_103) > 10.0f || GET_LAST_ATTACKER(bParam0) != bLocal_397)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
		TASK_CLEAR(bParam1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		iLocal_69 = 0;
		DEREFERENCE_ACTOR(bParam1);
		Function_192(bParam0, 49);
		return 0;
	}
	if (IS_ACTOR_IN_HOGTIE(bParam0) || UNK_0x7A207FFE(bParam0))
	{
		iLocal_18++;
		iLocal_17++;
		DECOR_SET_BOOL(bParam0, "PlayerHogtied", true);
		Function_189(50, 1, 0);
		Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
		TASK_CLEAR(bParam1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		Function_188(bParam0, 4294967291);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		iLocal_69 = 0;
		DEREFERENCE_ACTOR(bParam1);
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	bVar0 = Function_186(bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 39);
			break;
		
		case 0x00000027:
			iLocal_53 = 0;
			REFERENCE_ACTOR(bParam0);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			SET_ACTOR_FACTION(bParam0, 1);
			Function_293(bParam0, bParam1);
			Function_293(bParam1, bParam0);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, Global_34573);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, bParam0);
			Function_368(&vLocal_488);
			Function_183(bParam0);
			Function_188(bParam0, 0);
			Function_224(bParam1);
			Function_192(bParam0, 40);
			break;
		
		case 0x00000028:
			if (iLocal_33 == 10)
			{
				iLocal_33 = 4;
			}
			else
			{
				iLocal_32 = 4;
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				TASK_STAND_STILL(bParam1, -1.0f, 1, 0);
				SET_ANIM_SET_FOR_ACTOR(bParam1, "stand_ambient", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam1, "stand_ambient/help_loop");
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				TASK_STAND_STILL(bParam0, -1.0f, 1, 0);
				GET_POSITION(bParam0, &vLocal_100);
				SET_ANIM_SET_FOR_ACTOR(bParam0, "stand_yelling", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "stand_yelling/YellingMid");
			}
			Function_192(bParam0, 41);
			break;
		
		case 0x00000029:
			GET_POSITION(bParam0, &vLocal_100);
			if ((VDIST(vLocal_91, vLocal_100) >= 25.0f && (Function_258(bParam0, 0x3f800000, 0x42960000, 1, 1, 0) || Function_258(bParam1, 0x3f800000, 0x42960000, 1, 1, 0))) || VDIST(vLocal_91, vLocal_100) >= 10.0f)
			{
				Function_368(&bLocal_494);
				AUDIO_PLAY_VOCAL_EFFECT(bParam0, 9, 1);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				Function_350("JOB_NIGHT_SubdueThief", 0x40f00000, 1, 2, 0, 0, 0);
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
					iLocal_51 = 1;
				}
				TASK_CLEAR(bLocal_397);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				TASK_PRIORITY_SET(bLocal_397, true);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 42);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x0000002A:
			if (Function_348(&bLocal_494) < 4.0f && iLocal_79 != 0)
			{
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_CLEAR(bParam1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_FLEE_ACTOR(bParam1, bParam0, -1.0f, 5.0f, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				iLocal_79 = 1;
			}
			if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || VDIST(vLocal_91, vLocal_100) > 10.0f) || GET_LAST_ATTACKER(bParam0) != bLocal_397)
			{
				if (VDIST(vLocal_91, vLocal_103) >= 15.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_KILL_CHAR(bParam0, Global_34573);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_FLEE_ACTOR(bParam1, bParam0, -1.0f, 5.0f, 0, 0, 0);
				Function_368(&bLocal_494);
				Function_192(bParam0, 43);
			}
			if ((VDIST(vLocal_91, vLocal_115) > 5.0f || Function_348(&bLocal_494) < 7.0f) && iLocal_69 != 0)
			{
				if (VDIST(vLocal_91, vLocal_103) >= 15.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_KILL_CHAR(bParam0, Global_34573);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_CLEAR(bParam1);
				TASK_FLEE_ACTOR(bParam1, bParam0, -1.0f, 5.0f, 0, 0, 0);
				Function_368(&bLocal_494);
				Function_192(bParam0, 43);
				iLocal_69 = 1;
			}
			break;
		
		case 0x0000002B:
			if (Function_348(&bLocal_494) < 5.0f)
			{
				TASK_CLEAR(bParam1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				TASK_FLEE_ACTOR(bParam1, bParam0, -1.0f, 5.0f, 0, 0, 0);
				Function_192(bParam0, 49);
			}
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_224(bool bParam0) //Position: 0xC452 / 50258
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

int Function_225(bool bParam0, bool bParam1) //Position: 0xC484 / 50308
{
	int iVar0;
	var uVar4;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		iLocal_64 = 0;
		Function_368(&bLocal_494);
		Function_192(bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		iLocal_18++;
		if (VDIST(vLocal_91, vLocal_103) > 10.0f || GET_LAST_ATTACKER(bParam0) != bLocal_397)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		TASK_FLEE_ACTOR(bParam1, bParam0, 50.0f, 20.0f, 0, 0, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		Function_368(&bLocal_494);
		TASK_CLEAR(bParam1);
		RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		DESTROY_VOLUME(bLocal_435);
		DESTROY_ACTOR(bLocal_408);
		Function_192(bParam0, 49);
		return 0;
	}
	if ((IS_ACTOR_IN_HOGTIE(bParam0) || UNK_0x7A207FFE(bParam0)) || iLocal_72 != 1)
	{
		iLocal_18++;
		iLocal_17++;
		Function_189(50, 1, 0);
		if (iLocal_72 == 0)
		{
			DECOR_SET_BOOL(bParam0, "PlayerHogtied", true);
			Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		else
		{
			Function_139("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
			if (VDIST(vLocal_91, vLocal_103) > 8.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		TASK_CLEAR(bParam1);
		RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		Function_188(bParam0, 4294967291);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		DESTROY_VOLUME(bLocal_435);
		DESTROY_ACTOR(bLocal_408);
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	iVar0 = Function_186(bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 33);
			break;
		
		case 0x00000021:
			iLocal_53 = 0;
			REFERENCE_ACTOR(bParam0);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			SET_ACTOR_FACTION(bParam0, 1);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, Global_34573);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, bParam0);
			GET_OBJECT_AXIS(bLocal_438, &vLocal_356, 2);
			vLocal_341 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vLocal_356, vLocal_118, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal) };
			Function_368(&vLocal_488);
			Function_183(bParam0);
			Function_188(bParam0, 0);
			Function_192(bParam0, 34);
			break;
		
		case 0x00000022:
			if (iLocal_33 == 10)
			{
				iLocal_33 = 3;
			}
			else
			{
				iLocal_32 = 3;
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(bParam0, "look_in_window", 0);
				TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				TELEPORT_ACTOR(bParam1, &vLocal_341, 1, 1, 1);
				TASK_FLEE_ACTOR(bParam1, bParam0, 100.0f, -1.0f, 0, 0, 0);
			}
			FIND_GROUND_INTERSECTION(&vLocal_118, 5.0f, &vLocal_118, &uVar4);
			GET_OBJECT_AXIS(bLocal_438, &vLocal_356, 2);
			vLocal_359 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vLocal_356, vLocal_118, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
			bLocal_435 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, Function_43(), 2, vLocal_100, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
			if (IS_VOLUME_VALID(bLocal_435))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_435);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_435);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_435, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bLocal_435);
			}
			Function_192(bParam0, 35);
			break;
		
		case 0x00000023:
			if (HAS_ANIM_SET_LOADED("look_in_window"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "look_in_window");
				TASK_PRIORITY_SET(bParam0, true);
				if (Global_29006 == Global_30668[0])
				{
					Function_221(bLocal_438);
					bLocal_408 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, Function_43(), 54, vLocal_359, Function_221(bLocal_438));
				}
				else if (Global_29006 == Global_30717[0])
				{
					Function_221(bLocal_438);
					bLocal_408 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, Function_43(), 76, vLocal_359, Function_221(bLocal_438));
				}
				else if (Global_29006 == Global_30693[0])
				{
					Function_221(bLocal_438);
					bLocal_408 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, Function_43(), 253, vLocal_359, Function_221(bLocal_438));
				}
				TASK_STAND_STILL(bLocal_408, -1.0f, 0, 0);
				Function_192(bParam0, 36);
			}
			if (VDIST(vLocal_91, vLocal_100) > 10.0f)
			{
				Function_192(bParam0, 36);
			}
			break;
		
		case 0x00000024:
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
			}
			if ((VDIST(vLocal_91, vLocal_115) > 15.0f && iLocal_53 != 0) && !Function_258(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SAY_SINGLE_LINE_CONTEXT(bParam1, 63, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(bParam1);
				Function_296(bParam1, 0);
				Function_227(bParam1, bParam0);
				Function_226(&bLocal_485, 28.0f);
				iLocal_53 = 1;
			}
			if (Function_258(bParam0, 0,65f, 20.0f, 1, 1, 0) || GET_LAST_ATTACKER(bParam0) != Global_34573)
			{
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
					iLocal_51 = 1;
					TASK_CLEAR(bParam1);
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
					Function_350("JOB_NIGHT_StopBreakIn", 0x40f00000, 1, 2, 0, 0, 0);
				}
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
				Function_368(&bLocal_494);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 37);
			}
			if (VDIST(vLocal_91, vLocal_100) >= 3.0f)
			{
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
					iLocal_51 = 1;
					TASK_CLEAR(bParam1);
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
					Function_350("JOB_NIGHT_StopBreakIn", 0x40f00000, 1, 2, 0, 0, 0);
				}
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 207, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				Function_368(&bLocal_494);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 38);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x00000025:
			if (GET_TASK_STATUS(bLocal_397, 4294967295) != 0 && iLocal_79 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(bLocal_397, bParam0);
				iLocal_79 = 1;
			}
			if (GET_LAST_ATTACKER(bParam0) != Global_34573 || Function_180(bParam0))
			{
				Function_192(bParam0, 48);
			}
			else if ((IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && iLocal_71 != 0)
			{
				Function_368(&bLocal_494);
				iLocal_71 = 1;
			}
			else if ((iLocal_71 != 1 && Function_348(&bLocal_494) < 0,75f) && IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(bParam1);
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_368(&bLocal_494);
				Function_192(bParam0, 38);
			}
			else if (Function_348(&bLocal_494) < 4.0f)
			{
				Function_368(&bLocal_494);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 207, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_192(bParam0, 38);
			}
			else if (VDIST2(vLocal_91, vLocal_100) >= 1.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_368(&bLocal_494);
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_192(bParam0, 38);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 2.0f) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && !(GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam1) != Global_34573))
			{
				TASK_CLEAR(bParam0);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				MAKE_ACTOR_READY_FOR_ACTION(bParam0, 1);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_368(&bLocal_494);
				Function_192(bParam0, 38);
			}
			break;
		
		case 0x00000026:
			GET_POSITION(bParam0, &vLocal_100);
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (Function_348(&bLocal_494) < 10.0f && VDIST(vLocal_91, vLocal_100) <= 10.0f)
				{
					iLocal_72 = 1;
					Function_192(bParam0, 49);
				}
				if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || Function_180(bParam0)) || Function_348(&bLocal_494) < 13.0f)
				{
					iLocal_72 = 0;
					Function_192(bParam0, 48);
				}
			}
			break;
		
		case 0x00000030:
			if (VDIST(vLocal_103, vLocal_91) > 5.0f && !IS_ACTOR_IN_HOGTIE(bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(bLocal_397, bParam0);
			TASK_CLEAR(bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			SAY_SINGLE_LINE_CONTEXT(bParam0, 28, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			TASK_KILL_CHAR(bParam0, Global_34573);
			Function_368(&bLocal_494);
			Function_192(bParam0, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_226(bool bParam0, float fParam1) //Position: 0xCDFF / 52735
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_66(bParam0, 1);
	Function_31(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_227(bool bParam0, bool bParam1) //Position: 0xCE20 / 52768
{
	struct<9> Var0;
	float fVar9;
	
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	vVar6 = { (vVar3.x - vVar0.x), 0.0f, (vVar3.z - vVar0.z) };
	fVar9 = (GET_HEADING(bParam0) - UNK_0x9C40E671(&vVar6));
	SET_ANIM_SET_FOR_ACTOR(bParam0, "pointing", 0);
	while (fVar9 > -0,1f || fVar9 < 360,1f)
	{
		if (fVar9 > -0,1f)
		{
			fVar9 = (fVar9 + 360.0f);
		}
		else if (fVar9 < 360,1f)
		{
			fVar9 = (fVar9 - 360.0f);
		}
	}
	if (fVar9 > 22,5f || fVar9 < 337,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/000");
	}
	else if (fVar9 > 67,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/045");
	}
	else if (fVar9 > 112,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/090");
	}
	else if (fVar9 > 157,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/135");
	}
	else if (fVar9 > 202,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/180");
	}
	else if (fVar9 > 247,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/225");
	}
	else if (fVar9 > 292,5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/270");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/315");
	}
	return;
}

int Function_228(bool bParam0, bool bParam1) //Position: 0xCFBD / 53181
{
	int iVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(bParam0) && !IS_BLIP_VALID(bLocal_424))
	{
		iLocal_64 = 0;
		Function_368(&bLocal_494);
		Function_192(bParam0, 49);
		return 0;
	}
	if ((!IS_ACTOR_ALIVE(bParam0) && !IS_BLIP_VALID(bLocal_424)) || (UNK_0x7A207FFE(bParam0) && !IS_BLIP_VALID(bLocal_424)))
	{
		iLocal_18++;
		if (IS_VOLUME_VALID(bLocal_427))
		{
			DESTROY_VOLUME(bLocal_427);
		}
		if (UNK_0x7A207FFE(bParam0))
		{
			iLocal_17++;
			TASK_CLEAR(bParam0);
			MEMORY_CLEAR_ALL(bParam0);
			if (IS_BLIP_VALID(bLocal_422))
			{
				REMOVE_BLIP(bLocal_422);
			}
			Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		}
		else if (!IS_ACTOR_ALIVE(bParam1))
		{
		}
		if (IS_ACTOR_ALIVE(bParam1))
		{
			MEMORY_CONSIDER_AS(bParam1, Global_34573, 2);
			if (VDIST(vLocal_91, vLocal_103) > 10.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (IS_ACTOR_HOGTIED(bParam1))
			{
				iLocal_17++;
				DECOR_SET_BOOL(bParam1, "PlayerHogtied", true);
				Function_188(bParam1, 4294967291);
				DEREFERENCE_ACTOR(bParam1);
			}
			else
			{
				TASK_CLEAR(bParam1);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 50.0f, 20.0f, 0, 0, 0);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
			}
		}
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		Function_192(bParam0, 49);
		return 0;
	}
	if ((IS_ACTOR_IN_HOGTIE(bParam0) && !IS_BLIP_VALID(bLocal_424)) || ((iLocal_65 != 1 && !IS_BLIP_VALID(bLocal_424)) && !IS_BLIP_VALID(bLocal_422)))
	{
		iLocal_18++;
		iLocal_17++;
		DECOR_SET_BOOL(bParam0, "PlayerHogtied", true);
		Function_189(50, 1, 0);
		if (IS_ACTOR_HOGTIED(bParam1))
		{
			iLocal_17++;
			DECOR_SET_BOOL(bParam1, "PlayerHogtied", true);
			if (!IS_GRINGO_VALID(bLocal_452))
			{
				bLocal_452 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/hogtie_pickup", &vLocal_115, 5.0f, 0);
			}
			if (IS_GRINGO_VALID(bLocal_452) && IS_ACTOR_ALIVE(bParam1))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bLocal_452), "DisablePlayerCarry", true);
			}
			Function_188(bParam1, 4294967291);
			DEREFERENCE_ACTOR(bParam1);
		}
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		if (iLocal_65 == 1)
		{
			MEMORY_CLEAR_ALL(bParam0);
			MEMORY_CLEAR_ALL(bParam1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bParam0, 1);
			TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
			TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
			if (((!IS_ACTOR_HOGTIED(bParam0) && IS_ACTOR_ALIVE(bParam0)) && !UNK_0x7A207FFE(bParam0)) && ((!IS_ACTOR_HOGTIED(bParam1) && IS_ACTOR_ALIVE(bParam1)) && !UNK_0x7A207FFE(bParam1)))
			{
				Function_139("JOB_NIGHT_FleeHelpPlural", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_139("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (iLocal_65 == 0)
		{
			Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 213, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (VDIST(vLocal_91, vLocal_103) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		iLocal_65 = 0;
		Function_188(bParam0, 4294967291);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		return 0;
	}
	if ((IS_ACTOR_HOGTIED(bParam1) || UNK_0x7A207FFE(bParam1)) && IS_BLIP_VALID(bLocal_424))
	{
		REMOVE_BLIP(bLocal_424);
		Function_368(&bLocal_494);
		if (!IS_GRINGO_VALID(bLocal_452))
		{
			bLocal_452 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/hogtie_pickup", &vLocal_115, 5.0f, 0);
		}
		if (IS_GRINGO_VALID(bLocal_452) && IS_ACTOR_ALIVE(bParam1))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bLocal_452), "DisablePlayerCarry", true);
		}
	}
	if ((IS_ACTOR_HOGTIED(bParam0) || UNK_0x7A207FFE(bParam0)) && IS_BLIP_VALID(bLocal_422))
	{
		REMOVE_BLIP(bLocal_422);
		Function_368(&bLocal_494);
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam1)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam1) != 0) && iLocal_81 != 0) && GET_TASK_STATUS(bParam1, 5) != 1)
	{
		iLocal_81 = 1;
		TASK_MELEE_ATTACK(bParam1, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	if (iLocal_81 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam1)))
	{
		TASK_CLEAR(bParam1);
		TASK_KILL_CHAR(bParam1, Global_34573);
		iLocal_81 = 0;
	}
	iVar0 = Function_206(bLocal_412);
	switch (iVar0)
	{
		case 0x00000000:
			Function_209(bLocal_412, 26);
			break;
		
		case 0x0000001A:
			iLocal_53 = 0;
			REFERENCE_ACTOR(bParam0);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			Function_368(&vLocal_488);
			Function_183(bParam1);
			Function_188(bParam0, 0);
			Function_188(bParam1, 0);
			Function_183(bParam0);
			Function_209(bLocal_412, 27);
			break;
		
		case 0x0000001B:
			vLocal_121 = { 1.0f, 0.0f, 0.0f };
			iLocal_61 = 1;
			if (iLocal_33 == 10)
			{
				iLocal_33 = 2;
			}
			else
			{
				iLocal_32 = 2;
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				TASK_CLEAR(bParam1);
				GET_POSITION(bParam1, &vLocal_115);
				MEMORY_PREFER_MELEE(bParam1, 1);
				_SET_ACTOR_HEALTH_3(bParam1, 180.0f);
				ACTOR_START_FORCE_HOLSTER(bParam1, 0, 0);
				DECOR_SET_BOOL(bParam1, "bDisableCutFree", true);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				_SET_ACTOR_HEALTH_3(bParam0, 180.0f);
				GET_POSITION(bParam0, &vLocal_100);
				MEMORY_PREFER_MELEE(bParam0, 1);
				ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
			}
			else
			{
				LOG_ERROR("The Rustler is not valid");
			}
			GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vLocal_121, &uLocal_124);
			FIND_GROUND_INTERSECTION(&uLocal_124, 10.0f, &uLocal_124, &uVar1);
			TELEPORT_ACTOR(bParam1, &uLocal_124, 1, 1, 1);
			bLocal_427 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, Function_43(), 2, vLocal_100, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
			if (IS_VOLUME_VALID(bLocal_427))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam1, bLocal_427, 2, true);
				SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, bLocal_427, 2, true);
				Function_209(bLocal_412, 28);
			}
			break;
		
		case 0x0000001C:
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
				SET_ACTOR_KO_POINTS(bParam0, 100.0f);
				TASK_MELEE_ATTACK(bParam0, bParam1, -1.0f);
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
				SET_ACTOR_KO_POINTS(bParam1, 100.0f);
				TASK_MELEE_ATTACK(bParam1, bParam0, -1.0f);
			}
			else
			{
				TASK_KILL_CHAR(bParam0, Global_34573);
			}
			if (Function_258(bParam0, 0,75f, 45.0f, 1, 1, 0) || Function_258(bParam1, 0,75f, 45.0f, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(bParam0))
				{
					if (IS_BLIP_VALID(bLocal_422) == 0)
					{
						bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
						iLocal_51 = 1;
					}
				}
				if (IS_ACTOR_VALID(bParam1))
				{
					if (IS_BLIP_VALID(bLocal_424) == 0)
					{
						bLocal_424 = ADD_BLIP_FOR_ACTOR(bParam1, 322, 0, 2, 0);
						iLocal_51 = 1;
					}
				}
				Function_350("JOB_NIGHT_BrawlStart", 5.0f, 1, 2, 0, 0, 0);
				Function_139("JOB_NIGHT_BrawlHelp", 0x41200000, 1, 0, 2, 1, 0);
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
				if (VDIST(vLocal_91, vLocal_103) > 5.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 216, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_368(&bLocal_494);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				Function_209(bLocal_412, 29);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x0000001D:
			if (iLocal_79 != 0 && GET_TASK_STATUS(bLocal_397, 4294967295) != 0)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(bLocal_397, bParam0);
				iLocal_79 = 1;
			}
			if ((iLocal_71 != 0 && VDIST(vLocal_91, vLocal_100) >= 15.0f) && (Function_229(0, bLocal_412, 1) && Function_179(GET_WEAPON_IN_HAND(Global_34573))))
			{
				Function_368(&bLocal_494);
				iLocal_71 = 1;
			}
			if ((iLocal_61 != 1 && Function_348(&bLocal_494) <= 15.0f) || Function_348(&bLocal_494) <= 20.0f)
			{
				DECOR_SET_BOOL(bParam1, "bDoNotBlock", true);
				SET_ACTOR_KO_POINTS(bParam1, 1.0f);
				iLocal_61 = 0;
				SAY_SINGLE_LINE_CONTEXT(bParam1, 99, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_209(bLocal_412, 30);
			}
			else if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 2.0f) && Function_179(GET_WEAPON_IN_HAND(Global_34573)))
			{
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
				TASK_PRIORITY_SET(bParam1, true);
				Function_368(&bLocal_494);
				Function_209(bLocal_412, 32);
			}
			else if (UNK_0x7A207FFE(bParam1) != 1 || UNK_0x7A207FFE(bParam0) != 1)
			{
				MEMORY_PREFER_MELEE(bParam0, 0);
				MEMORY_PREFER_MELEE(bParam1, 0);
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				ACTOR_END_FORCE_HOLSTER(bParam0);
				ACTOR_END_FORCE_HOLSTER(bParam1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
				GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
				if (UNK_0x7A207FFE(bParam1) == 0)
				{
					SAY_SINGLE_LINE_CONTEXT(bParam1, 99, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					GIVE_WEAPON_TO_ACTOR(bParam1, 22, 1.0f, 0, 1);
					TASK_MELEE_ATTACK(bParam1, Global_34573, -1.0f);
					MEMORY_IDENTIFY(bLocal_397, bParam1);
					TASK_KILL_CHAR(bLocal_397, bParam1);
					TASK_PRIORITY_SET(bLocal_397, true);
				}
				else
				{
					TASK_KILL_CHAR(bLocal_397, bParam0);
					SAY_SINGLE_LINE_CONTEXT(bParam0, 27, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
				}
				if (UNK_0x7A207FFE(bParam0) == 1)
				{
					Function_209(bLocal_412, 31);
				}
				else
				{
					Function_209(bLocal_412, 49);
				}
			}
			else if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam1) != Global_34573) || !IS_ACTOR_ALIVE(bParam0))
			{
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				CLEAR_LAST_HIT(bParam0);
				bLocal_34 = RAND_INT_RANGE(false, 2);
				if ((bLocal_34 != 0 || (GET_LAST_HIT_FLAGS(bParam0) != 2 && GET_LAST_ATTACKER(bParam0) != Global_34573)) || (GET_LAST_HIT_FLAGS(bParam1) != 2 && GET_LAST_ATTACKER(bParam1) != Global_34573))
				{
					TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
					TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
					Function_368(&bLocal_494);
					CLEAR_LAST_ATTACK(Global_34573);
					CLEAR_LAST_HIT(bParam1);
					Function_209(bLocal_412, 32);
				}
				else
				{
					MEMORY_PREFER_MELEE(bParam0, 0);
					MEMORY_PREFER_MELEE(bParam1, 0);
					SAY_SINGLE_LINE_CONTEXT(bParam0, 27, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					ACTOR_END_FORCE_HOLSTER(bParam0);
					ACTOR_END_FORCE_HOLSTER(bParam1);
					TASK_DRAW_HOLSTER_WEAPON(bParam0, 1);
					TASK_DRAW_HOLSTER_WEAPON(bParam1, 1);
					TASK_KILL_CHAR(bParam1, Global_34573);
					TASK_KILL_CHAR(bParam0, Global_34573);
					TASK_KILL_CHAR(bLocal_397, bParam0);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 28, 0.0f);
					Function_209(bLocal_412, 31);
				}
			}
			else if ((iLocal_71 != 1 && Function_348(&bLocal_494) < 1.0f) && Function_229(0, bLocal_412, 1))
			{
				Function_368(&bLocal_494);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				CLEAR_LAST_HIT(bParam0);
				CLEAR_LAST_HIT(bParam1);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
				TASK_PRIORITY_SET(bParam1, true);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				Function_209(bLocal_412, 32);
			}
			break;
		
		case 0x0000001E:
			if (UNK_0x7A207FFE(bParam1))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				ACTOR_END_FORCE_HOLSTER(bParam0);
				GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 0);
				ACTOR_PUT_WEAPON_IN_HAND(bParam0, 22, 1);
				TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
				if (IS_BLIP_VALID(bLocal_424))
				{
					REMOVE_BLIP(bLocal_424);
				}
				SET_ACTOR_KO_POINTS(bParam0, 30.0f);
				Function_368(&bLocal_494);
				SAY_SINGLE_LINE_CONTEXT(bParam0, 27, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_209(bLocal_412, 49);
			}
			else if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam1) != Global_34573) || !IS_ACTOR_ALIVE(bParam0))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				CLEAR_LAST_HIT(bParam0);
				CLEAR_LAST_ATTACK(Global_34573);
				ACTOR_END_FORCE_HOLSTER(bParam1);
				if (IS_ACTOR_VALID(bParam0))
				{
					ACTOR_END_FORCE_HOLSTER(bParam0);
				}
				GIVE_WEAPON_TO_ACTOR(bParam1, 22, 1.0f, 0, 0);
				ACTOR_PUT_WEAPON_IN_HAND(bParam1, 22, 1);
				Function_209(bLocal_412, 31);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 2.0f) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && !(GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam1) != Global_34573))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_368(&bLocal_494);
				Function_209(bLocal_412, 32);
			}
			break;
		
		case 0x0000001F:
			if ((((UNK_0x7A207FFE(bParam1) || !IS_ACTOR_ALIVE(bParam1)) || IS_ACTOR_HOGTIED(bParam1)) && IS_BLIP_VALID(bLocal_424)) || GET_LAST_ATTACKER(bParam1) != Global_34573)
			{
				if (!((UNK_0x7A207FFE(bParam1) || !IS_ACTOR_ALIVE(bParam1)) || IS_ACTOR_HOGTIED(bParam1)))
				{
					TASK_MELEE_ATTACK(bParam1, Global_34573, -1.0f);
				}
				else
				{
					REMOVE_BLIP(bLocal_424);
				}
				Function_209(bLocal_412, 48);
			}
			if (iLocal_67 != 0 && ((UNK_0x7A207FFE(bParam0) || IS_ACTOR_HOGTIED(bParam0)) || !IS_ACTOR_ALIVE(bParam0)))
			{
				if (IS_BLIP_VALID(bLocal_424))
				{
					SAY_SINGLE_LINE_CONTEXT(bParam1, 27, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					MEMORY_IDENTIFY(bLocal_397, bParam1);
					TASK_KILL_CHAR(bLocal_397, bParam1);
					TASK_KILL_CHAR(bParam1, Global_34573);
				}
				if (IS_BLIP_VALID(bLocal_422))
				{
					REMOVE_BLIP(bLocal_422);
				}
				iLocal_67 = 1;
			}
			if ((GET_LAST_HIT_FLAGS(bParam0) != 2 && GET_LAST_ATTACKER(bParam0) != Global_34573) || (GET_LAST_HIT_FLAGS(bParam1) != 2 && GET_LAST_ATTACKER(bParam1) != Global_34573))
			{
				Function_368(&bLocal_494);
				SET_ACTOR_KO_POINTS(bParam0, 1.0f);
				TASK_CLEAR(bParam1);
				TASK_CLEAR(bParam0);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				if (iLocal_69 == 0)
				{
					SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_69 = 1;
				}
				else
				{
					Function_209(bLocal_412, 48);
				}
				CLEAR_LAST_HIT(bParam0);
				CLEAR_LAST_HIT(bParam1);
				CLEAR_LAST_ATTACK(Global_34573);
				Function_209(bLocal_412, 32);
			}
			break;
		
		case 0x00000020:
			if (Function_348(&bLocal_494) <= 10.0f)
			{
				if (IS_BLIP_VALID(bLocal_424))
				{
					REMOVE_BLIP(bLocal_424);
					MEMORY_CLEAR_ALL(bParam1);
					ACTOR_HOLSTER_WEAPON(bParam1, 1);
				}
				if (IS_BLIP_VALID(bLocal_422))
				{
					REMOVE_BLIP(bLocal_422);
					MEMORY_CLEAR_ALL(bParam0);
					ACTOR_HOLSTER_WEAPON(bParam0, 1);
				}
				iLocal_65 = 1;
				CLEAR_LAST_HIT(bParam0);
				CLEAR_LAST_ATTACK(bParam0);
				Function_209(bLocal_412, 49);
			}
			if ((GET_LAST_ATTACKER(bParam0) != Global_34573 && GET_LAST_HIT_FLAGS(bParam0) == 2) || (GET_LAST_ATTACKER(bParam1) != Global_34573 && GET_LAST_HIT_FLAGS(bParam1) == 2))
			{
				MEMORY_PREFER_MELEE(bParam0, 0);
				MEMORY_PREFER_MELEE(bParam1, 0);
				TASK_CLEAR(bParam0);
				ACTOR_END_FORCE_HOLSTER(bParam0);
				TASK_DRAW_HOLSTER_WEAPON(bParam0, 1);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				if (!UNK_0x7A207FFE(bParam1))
				{
					TASK_CLEAR(bParam1);
					ACTOR_END_FORCE_HOLSTER(bParam1);
					TASK_DRAW_HOLSTER_WEAPON(bParam1, 1);
					TASK_KILL_CHAR(bParam1, Global_34573);
					SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 28, 0.0f);
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
				TASK_KILL_CHAR(bParam0, Global_34573);
				Function_209(bLocal_412, 31);
			}
			break;
		
		case 0x00000030:
			GET_POSITION(bLocal_397, &vLocal_103);
			if (VDIST(vLocal_103, vLocal_91) > 15.0f && !IS_ACTOR_IN_HOGTIE(bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(bLocal_397, bParam0);
			TASK_CLEAR(bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			bLocal_29 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, 3.0f, 1, 0, 0);
			TASK_KILL_CHAR(false, Global_34573);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam0, bLocal_29);
			TASK_SEQUENCE_RELEASE(bLocal_29, 1);
			Function_368(&bLocal_494);
			CLEAR_LAST_HIT(bParam0);
			Function_209(bLocal_412, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_229(bool bParam0, bool bParam1, int iParam2) //Position: 0xE0A0 / 57504
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (IS_PLAYER_TARGETTING_ACTOR(bParam0, bVar1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_230(bool bParam0, bool bParam1) //Position: 0xE0F1 / 57585
{
	int iVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		iLocal_64 = 0;
		Function_368(&bLocal_494);
		Function_192(bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		iLocal_18++;
		if (IS_ACTOR_ALIVE(bParam1))
		{
			MEMORY_CONSIDER_AS(bParam1, Global_34573, 2);
			TASK_FLEE_ACTOR(bParam1, bParam0, -1.0f, 5.0f, 0, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
			iLocal_18++;
		}
		if (GET_LAST_ATTACKER(bParam0) == bLocal_397)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		Function_192(bParam0, 49);
		return 0;
	}
	if (IS_ACTOR_IN_HOGTIE(bParam0) || UNK_0x7A207FFE(bParam0))
	{
		iLocal_18++;
		iLocal_17++;
		DECOR_SET_BOOL(bParam0, "PlayerHogtied", true);
		Function_189(50, 1, 0);
		Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		if (VDIST(vLocal_91, vLocal_103) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		if (IS_ACTOR_ALIVE(bParam1))
		{
			MEMORY_CLEAR_ALL(bParam1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam1, true);
		}
		Function_188(bParam0, 4294967291);
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	iVar0 = Function_186(bParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 18);
			break;
		
		case 0x00000012:
			iLocal_53 = 0;
			iLocal_55 = 0;
			REFERENCE_ACTOR(bParam0);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			SET_ACTOR_FACTION(bParam0, 1);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, Global_34573);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, bParam0);
			Function_368(&vLocal_488);
			Function_183(bParam0);
			Function_188(bParam0, 0);
			Function_224(bParam1);
			Function_192(bParam0, 19);
			break;
		
		case 0x00000013:
			vLocal_121 = { 1,5f, 0.0f, 0.0f };
			if (iLocal_33 == 10)
			{
				iLocal_33 = 1;
			}
			else
			{
				iLocal_32 = 1;
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				SET_ANIM_SET_FOR_ACTOR(bParam1, "stand_surrender", 0);
				SET_ACTOR_FACTION(bParam1, 23);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bParam1);
				TASK_STAND_STILL(bParam1, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("The Victim is not valid");
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				TASK_DRAW_HOLSTER_WEAPON(bParam0, 1);
				GET_POSITION(bParam0, &vLocal_100);
				GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vLocal_121, &uLocal_124);
				AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 0);
				TASK_POINT_GUN_AT_OBJECT(bParam0, bParam1, -1.0f, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			}
			else
			{
				LOG_ERROR("The rustler is not valid");
			}
			FIND_GROUND_INTERSECTION(&uLocal_124, 10.0f, &uLocal_124, &uVar1);
			TELEPORT_ACTOR(bParam1, &uLocal_124, 1, 1, 1);
			if (VDIST(vLocal_115, vLocal_100) > 10.0f && SET_ANIM_SET_FOR_ACTOR(bParam1, "stand_surrender", 0) != 1)
			{
				Function_192(bParam0, 20);
			}
			break;
		
		case 0x00000014:
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
			}
			if (VDIST(vLocal_115, vLocal_100) > 5.0f && IS_ACTOR_VALID(bParam1))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				Function_293(bParam1, bParam0);
				Function_293(bParam0, bParam1);
				SET_ACTION_NODE_FOR_ACTOR(bParam1, "stand_surrender");
				Function_192(bParam0, 21);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x00000015:
			GET_POSITION(bParam0, &vLocal_100);
			if (IS_ACTOR_ALIVE(bParam0) == 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_CLEAR(bParam1);
				TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_192(bParam0, 22);
			}
			if ((((Function_258(bParam0, 1.0f, 40.0f, 1, 1, 0) || Function_258(bParam1, 1.0f, 40.0f, 1, 1, 0)) || VDIST(vLocal_91, vLocal_100) >= 5.0f) || GET_LAST_ATTACKER(bParam0) != Global_34573) || GET_LAST_ATTACKER(bParam1) != Global_34573)
			{
				Function_350("JOB_NIGHT_SubdueCriminal", 5.0f, 1, 2, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				if (!IS_BLIP_VALID(bLocal_422))
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
					iLocal_51 = 1;
				}
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
				Function_368(&bLocal_494);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 22);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x00000016:
			if (GET_TASK_STATUS(bLocal_397, 4294967295) != 0 && iLocal_79 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(bLocal_397, bParam0);
				iLocal_79 = 1;
			}
			if (VDIST(vLocal_100, vLocal_115) < 10.0f)
			{
				if ((!IS_ACTOR_ALIVE(bParam0) || IS_ACTOR_HOGTIED(bParam0)) || Function_180(bParam0))
				{
					PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
					TASK_CLEAR(bParam1);
					TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
					Function_192(bParam0, 49);
				}
				else if (IS_ACTOR_ALIVE(bParam0))
				{
					PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
					TASK_KILL_CHAR(bParam0, Global_34573);
					RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
					TASK_CLEAR(bParam1);
					TASK_FLEE_ACTOR(bParam1, Global_34573, 75.0f, -1.0f, 0, 0, 0);
					Function_192(bParam0, 48);
				}
			}
			if (Function_348(&bLocal_494) < 5.0f && iLocal_56 != 0)
			{
				SAY_SINGLE_LINE_CONTEXT(bParam1, 51, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				iLocal_56 = 1;
			}
			if (Function_348(&bLocal_494) < 10.0f && iLocal_57 != 0)
			{
				SAY_SINGLE_LINE_CONTEXT(bParam0, 27, bParam1, 1, 0, 0, 4294967295, 4294967295, 0, 1);
				iLocal_57 = 1;
			}
			if (((VDIST(vLocal_91, vLocal_100) >= 20.0f && IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1)) && iLocal_55 != 0) || Function_348(&bLocal_494) < 15.0f)
			{
				SET_ACTOR_HEALTH(bParam1, 5.0f);
				Function_368(&bLocal_497);
				iLocal_55 = 1;
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_192(bParam0, 23);
			}
			if (((VDIST(vLocal_91, vLocal_100) >= 2.0f || GET_LAST_ATTACKER(bParam0) != bLocal_397) || GET_LAST_ATTACKER(bParam0) != Global_34573) || iLocal_73 != 1)
			{
				SET_ACTOR_HEALTH(bParam1, 5.0f);
				TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &vLocal_100);
				TASK_CLEAR(bLocal_397);
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_397, false);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_CLEAR(bParam1);
				TASK_FLEE_ACTOR(bParam1, bParam0, 75.0f, -1.0f, 0, 0, 0);
				Function_192(bParam0, 24);
			}
			if (!IS_ACTOR_ALIVE(bParam0) || IS_ACTOR_HOGTIED(bParam0))
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_CLEAR(bParam1);
				TASK_FLEE_ACTOR(bParam1, bParam0, 75.0f, -1.0f, 0, 0, 0);
			}
			if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 2.0f) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && !(GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam1) != Global_34573))
			{
				iLocal_73 = 1;
			}
			break;
		
		case 0x00000017:
			if (((iLocal_55 != 1 && Function_348(&bLocal_497) <= 2.0f) || VDIST(vLocal_91, vLocal_100) >= 3.0f) || Function_180(bParam1))
			{
				if (IS_ACTOR_ALIVE(bParam1))
				{
					SET_ACTOR_HEALTH(bParam1, 5.0f);
					TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &vLocal_100);
					if (VDIST(vLocal_91, vLocal_100) >= 3.0f)
					{
						Function_139("JOB_NIGHT_HoldupHelp", 0x41200000, 1, 0, 2, 1, 0);
					}
					Function_192(bParam0, 24);
				}
				else
				{
					TASK_KILL_CHAR(bParam0, Global_34573);
					Function_192(bParam0, 49);
				}
			}
			if (GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam0) != bLocal_397)
			{
				TASK_CLEAR(bParam1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				TASK_FLEE_ACTOR(bParam1, bParam0, 50.0f, 20.0f, 0, 0, 0);
				Function_192(bParam0, 48);
			}
			break;
		
		case 0x00000018:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				Function_192(bParam0, 25);
			}
			else
			{
				TASK_KILL_CHAR(bParam0, Global_34573);
				Function_192(bParam0, 49);
			}
			break;
		
		case 0x00000019:
			if (!IS_ACTOR_ALIVE(bParam1))
			{
				SAY_SINGLE_LINE_CONTEXT(bParam0, 27, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_192(bParam0, 48);
			}
			if (GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam0) != bLocal_397)
			{
				TASK_CLEAR(bParam1);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 0);
				TASK_FLEE_ACTOR(bParam1, bParam0, 50.0f, 20.0f, 0, 0, 0);
				SAY_SINGLE_LINE_CONTEXT(bParam0, 3, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_192(bParam0, 48);
			}
			if (VDIST(vLocal_100, vLocal_115) < 10.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				TASK_CLEAR(bParam1);
				TASK_FLEE_ACTOR(bParam1, bParam0, 75.0f, -1.0f, 0, 0, 0);
				Function_192(bParam0, 48);
			}
			if (Function_180(bParam1))
			{
				TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &vLocal_100);
				Function_192(bParam0, 48);
			}
			break;
		
		case 0x00000030:
			if (VDIST(vLocal_103, vLocal_91) > 5.0f && !IS_ACTOR_IN_HOGTIE(bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(bParam0, 28, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(bLocal_397, bParam0);
			TASK_CLEAR(bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			bLocal_29 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_FLEE_ACTOR(false, bLocal_397, -1.0f, 1.0f, 1, 0, 0);
			TASK_KILL_CHAR(false, Global_34573);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam0, bLocal_29);
			TASK_SEQUENCE_RELEASE(bLocal_29, 1);
			Function_368(&bLocal_494);
			Function_192(bParam0, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_231(bool bParam0, bool bParam1) //Position: 0xEB2D / 60205
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		iLocal_64 = 0;
		Function_368(&bLocal_494);
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_ACTOR_ALIVE(bParam1))
			{
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
			}
		}
		Function_192(bParam0, 49);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		iLocal_18++;
		if (VDIST(vLocal_91, vLocal_103) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 215, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		Function_368(&bLocal_494);
		iLocal_64 = 0;
		DEREFERENCE_ACTOR(bParam1);
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_ACTOR_ALIVE(bParam1))
			{
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
			}
		}
		Function_192(bParam0, 49);
		return 0;
	}
	if ((IS_ACTOR_HOGTIED(bParam0) || UNK_0x7A207FFE(bParam0)) || iLocal_72 != 1)
	{
		iLocal_18++;
		iLocal_17++;
		if (iLocal_72 == 0)
		{
			DECOR_SET_BOOL(bParam0, "PlayerHogtied", true);
			Function_139("JOB_NIGHT_WaitForHelp", 0x41200000, 1, 0, 2, 1, 0);
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 213, bParam0, 1, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (VDIST(vLocal_91, vLocal_103) > 10.0f)
		{
			SAY_SINGLE_LINE_CONTEXT(Global_34573, 206, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		if (iLocal_72 == 1)
		{
			Function_139("JOB_NIGHT_FleeHelp", 0x41200000, 1, 0, 2, 1, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
		}
		Function_189(50, 1, 0);
		if (IS_BLIP_VALID(bLocal_422))
		{
			REMOVE_BLIP(bLocal_422);
		}
		Function_188(bParam0, 4294967291);
		Function_368(&bLocal_494);
		DEREFERENCE_ACTOR(bParam1);
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_ACTOR_ALIVE(bParam1))
			{
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
			}
		}
		iLocal_64 = 0;
		return 0;
	}
	if (Function_348(&bLocal_500) <= 1,5f && iLocal_58 != 0)
	{
		PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
		iLocal_58 = 1;
	}
	if (((!Function_187(GET_WEAPON_IN_HAND(bParam0)) && GET_NUM_WEAPONS_IN_INVENTORY(bParam0) != 0) && iLocal_80 != 0) && GET_TASK_STATUS(bParam0, 5) != 1)
	{
		iLocal_80 = 1;
		TASK_MELEE_ATTACK(bParam0, Global_34573, -1.0f);
	}
	if (iLocal_80 != 1 && Function_187(GET_WEAPON_IN_HAND(bParam0)))
	{
		TASK_CLEAR(bParam0);
		TASK_KILL_CHAR(bParam0, Global_34573);
		iLocal_80 = 0;
	}
	bVar0 = Function_186(bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 12);
			break;
		
		case 0x0000000C:
			iLocal_53 = 0;
			REFERENCE_ACTOR(bParam0);
			TASK_CLEAR(bParam0);
			TASK_PRIORITY_SET(bParam0, false);
			SET_ACTOR_FACTION(bParam0, 1);
			REFERENCE_ACTOR(bParam1);
			TASK_CLEAR(bParam1);
			TASK_PRIORITY_SET(bParam1, false);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, Global_34573);
			MEMORY_CONSIDER_ACCORDING_TO_FACTION(bParam1, bParam0);
			Function_368(&vLocal_488);
			Function_183(bParam1);
			Function_188(bParam1, 0);
			Function_183(bParam0);
			Function_188(bParam0, 0);
			Function_192(bParam0, 13);
			break;
		
		case 0x0000000D:
			vLocal_121 = { 0,1f, 0.0f, 0.0f };
			if (iLocal_33 == 10)
			{
				iLocal_33 = 0;
			}
			else
			{
				iLocal_32 = 0;
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
				RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
				SET_ACTOR_INVULNERABILITY(bParam1, true);
				SET_ALLOW_EXECUTE(bParam1, 0);
				SET_ALLOW_COLD_WEATHER_BREATH(bParam1, 0);
				SET_ACTOR_CAN_BE_TARGETED(bParam1, false);
			}
			SET_LINKED_ANIM_TARGET(bParam0, bParam1);
			GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vLocal_121, &uLocal_124);
			FIND_GROUND_INTERSECTION(&uLocal_124, 1.0f, &uLocal_124, &uVar1);
			TELEPORT_ACTOR(bParam1, &uLocal_124, 1, 1, 1);
			bLocal_439 = CREATE_GRINGO_IN_LAYOUT(bLocal_418, "Corpse", "$/content/scripting/gringo/SimpleGringo/body_left_for_dead_gped_loot", vLocal_115, 0.0f, 0.0f, 0.0f);
			Function_192(bParam0, 14);
			break;
		
		case 0x0000000E:
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_439)))
			{
				TASK_CLEAR(bParam0);
				TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bLocal_439), "Robber", 4294967295, 1);
				TASK_USE_GRINGO(bParam1, GET_GRINGO_FROM_OBJECT(bLocal_439), "UseCase1", 4294967295, 1);
				Function_192(bParam0, 15);
			}
			else
			{
				LOG_ERROR("invalid corpse gringo");
			}
			if (IS_ACTOR_VALID(bParam0))
			{
				GET_POSITION(bParam0, &vLocal_100);
				Function_293(bParam0, bParam1);
			}
			else
			{
				LOG_ERROR("The corpse looter is not valid");
			}
			if (IS_ACTOR_VALID(bParam1))
			{
				GET_POSITION(bParam1, &vLocal_115);
				DECOR_SET_BOOL(bParam1, "CanBeLasso", false);
			}
			else
			{
				LOG_ERROR("The Corpse is not valid");
			}
			if ((VDIST(vLocal_91, vLocal_100) >= 20.0f && iLocal_53 != 0) && Function_258(bParam0, 0,65f, 0x42960000, 1, 1, 0))
			{
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
					iLocal_51 = 1;
				}
				Function_350("JOB_NIGHT_SubdueLooter", 7.0f, 1, 2, 0, 0, 0);
				iLocal_53 = 1;
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 15);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x0000000F:
			GET_POSITION(bParam0, &vLocal_100);
			if (((VDIST(vLocal_91, vLocal_100) >= 25.0f && iLocal_53 != 0) && Function_258(bParam0, 0,75f, 0x42960000, 1, 1, 0)) || GET_LAST_ATTACKER(bParam0) != Global_34573)
			{
				if (IS_BLIP_VALID(bLocal_422) == 0)
				{
					bLocal_422 = ADD_BLIP_FOR_ACTOR(bLocal_391, 322, 0, 2, 0);
					iLocal_51 = 1;
				}
				if (GET_LAST_ATTACKER(bParam0) == Global_34573)
				{
					TASK_KILL_CHAR(bLocal_397, bParam0);
					Function_192(bParam0, 48);
				}
				Function_350("JOB_NIGHT_SubdueLooter", 7.0f, 1, 2, 0, 0, 0);
				Function_368(&bLocal_494);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_192(bParam0, 16);
			}
			return Function_181(StackVal, StackVal, StackVal, StackVal, vLocal_100, vLocal_488, &bParam0, &bParam1);
			break;
		
		case 0x00000010:
			if (GET_TASK_STATUS(bLocal_397, 4294967295) != 0 && iLocal_79 != 0)
			{
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
				TASK_ANIMAL_CIRCLE_AGGRESSIVELY(bLocal_397, bParam0);
				iLocal_79 = 1;
			}
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				TASK_KILL_CHAR(bLocal_397, bParam0);
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
				Function_192(bParam0, 48);
			}
			else if (((IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && iLocal_71 != 0) && VDIST(vLocal_91, vLocal_100) >= 15.0f)
			{
				Function_368(&bLocal_494);
				iLocal_71 = 1;
			}
			else if (((iLocal_71 != 1 && Function_348(&bLocal_494) < 2.0f) && IS_PLAYER_TARGETTING_ACTOR(false, bParam0, 1)) || VDIST(vLocal_91, vLocal_100) >= 3.0f)
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				Function_368(&bLocal_494);
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
				Function_192(bParam0, 17);
			}
			else if (Function_348(&bLocal_494) < 8.0f && Function_258(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 214, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				MEMORY_IDENTIFY(bLocal_397, bParam0);
				TASK_CLEAR(bLocal_397);
				TASK_KILL_CHAR(bLocal_397, bParam0);
				PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_GROWL_MASTER", 0);
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
				Function_192(bParam0, 48);
			}
			else if ((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) < 1.0f && (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 2.0f) && Function_179(GET_WEAPON_IN_HAND(Global_34573))) && !(GET_LAST_ATTACKER(bParam0) != Global_34573 || GET_LAST_ATTACKER(bParam1) != Global_34573))
			{
				AI_QUICK_EXIT_GRINGO(bParam0, 1);
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				TASK_CLEAR(bParam0);
				TASK_FOLLOW_ACTOR(bLocal_397, Global_34573);
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 211, bParam0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				TASK_FLEE_ACTOR(bParam0, Global_34573, 75.0f, -1.0f, 0, 0, 0);
				SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
				Function_368(&bLocal_494);
				SET_ACTOR_INVULNERABILITY(bParam1, false);
				KILL_ACTOR(bParam1);
				Function_192(bParam0, 17);
			}
			break;
		
		case 0x00000011:
			GET_POSITION(bParam0, &vLocal_100);
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (Function_348(&bLocal_494) < 10.0f && VDIST(vLocal_91, vLocal_100) <= 10.0f)
				{
					iLocal_72 = 1;
					Function_192(bParam0, 49);
				}
				if ((GET_LAST_ATTACKER(bParam0) != Global_34573 || Function_180(bParam0)) || Function_348(&bLocal_494) < 12.0f)
				{
					iLocal_72 = 0;
					Function_192(bParam0, 48);
				}
			}
			break;
		
		case 0x00000030:
			if (VDIST(vLocal_103, vLocal_91) > 5.0f && !IS_ACTOR_IN_HOGTIE(bParam0))
			{
				SAY_SINGLE_LINE_CONTEXT(Global_34573, 212, bLocal_397, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			TASK_KILL_CHAR(bLocal_397, bParam0);
			TASK_CLEAR(bParam0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
			SAY_SINGLE_LINE_CONTEXT(bParam0, 28, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			bLocal_29 = TASK_SEQUENCE_OPEN();
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_FLEE_ACTOR(false, Global_34573, -1.0f, 3.0f, 1, 0, 0);
			TASK_KILL_CHAR(false, Global_34573);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam0, bLocal_29);
			TASK_SEQUENCE_RELEASE(bLocal_29, 1);
			Function_368(&bLocal_494);
			Function_192(bParam0, 49);
			break;
		
		case 0x00000031:
			break;
		
		default:
			break;
	}
	return 1;
}

void Function_232(bool bParam0, float fParam1) //Position: 0xF47C / 62588
{
	if (!Function_177(&bLocal_491))
	{
		Function_368(&bLocal_491);
		Function_139(bParam0, fParam1, 1, 0, 2, 1, 0);
	}
	if (Function_173(&bLocal_491, (fParam1 * 2.0f)))
	{
	}
	return;
}

int Function_233(bool bParam0) //Position: 0xF4AB / 62635
{
	bool bVar0;
	
	bParam0 = bParam0;
	vLocal_133 = { StackVal, StackVal, vLocal_145 };
	if (Function_63(StackVal, StackVal, vLocal_133))
	{
		return 0;
	}
	strcpy(&Local_83, "Rustler", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	bVar0 = RAND_INT_RANGE(false, 5);
	PRINTSTRING("SpawnedRustlerCowTheft - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	vLocal_133.x = (vLocal_133.x + 0,1f);
	bLocal_400 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_43(), 1009, vLocal_133, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(bLocal_416, bLocal_400);
	vLocal_133.x = (vLocal_133.x + 0,2f);
	if (bLocal_0 == 0)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	ADD_ACTORSET_MEMBER(bLocal_414, bLocal_391);
	DECOR_SET_BOOL(bLocal_391, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_391, "bDisableCutFree", true);
	_SET_ACTOR_HEALTH_3(bLocal_391, 180.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_391, true);
	SET_ACTOR_MAX_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_391, false);
	AI_BEHAVIOR_SET_ALLOW(bLocal_391, 0, 0);
	bLocal_436 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "CrimeVol", 2, vLocal_133, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
	if (IS_VOLUME_VALID(bLocal_436))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_436, 15);
	}
	if (!IS_ACTOR_VALID(bLocal_391))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_400))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Victim.");
		return 0;
	}
	return 1;
}

int Function_234() //Position: 0xF712 / 63250
{
	if (Function_236(iLocal_36, 1))
	{
		Function_235(&iLocal_36, 1);
		return 477;
	}
	if (Function_236(iLocal_36, 2))
	{
		Function_235(&iLocal_36, 2);
		return 478;
	}
	if (Function_236(iLocal_36, 4))
	{
		Function_235(&iLocal_36, 4);
		return 398;
	}
	if (Function_236(iLocal_36, 8))
	{
		Function_235(&iLocal_36, 8);
		return 399;
	}
	if (Function_236(iLocal_36, 16))
	{
		Function_235(&iLocal_36, 16);
		return 479;
	}
	if (Function_236(iLocal_36, 32))
	{
		Function_235(&iLocal_36, 32);
		return 397;
	}
	if (Function_236(iLocal_36, 64))
	{
		Function_235(&iLocal_36, 64);
		return 475;
	}
	if (Function_236(iLocal_36, 128))
	{
		Function_235(&iLocal_36, 128);
		return 476;
	}
	if (Function_236(iLocal_36, 256))
	{
		Function_235(&iLocal_36, 256);
		return 397;
	}
	if (Function_236(iLocal_36, 512))
	{
		Function_235(&iLocal_36, 512);
		return 398;
	}
	if (Function_236(iLocal_36, 1024))
	{
		Function_235(&iLocal_36, 1024);
		return 399;
	}
	if (Function_236(iLocal_36, 2048))
	{
		Function_235(&iLocal_36, 2048);
		return 474;
	}
	if (Function_236(iLocal_36, 4096))
	{
		Function_235(&iLocal_36, 4096);
		return 502;
	}
	if (Function_236(iLocal_36, 8192))
	{
		Function_235(&iLocal_36, 8192);
		return 410;
	}
	if (Function_236(iLocal_36, 16384))
	{
		Function_235(&iLocal_36, 16384);
		return 500;
	}
	if (Function_236(iLocal_36, 32768))
	{
		Function_235(&iLocal_36, 32768);
		return 501;
	}
	if (Function_236(iLocal_36, 65536))
	{
		Function_235(&iLocal_36, 65536);
		return 411;
	}
	if (Function_236(iLocal_36, 131072))
	{
		Function_235(&iLocal_36, 131072);
		return 499;
	}
	return 4294967295;
}

void Function_235(int iParam0, int iParam1) //Position: 0xF8A7 / 63655
{
	Function_31(iParam0, iParam1);
	return;
}

bool Function_236(int iParam0, bool bParam1) //Position: 0xF8B4 / 63668
{
	return (iParam0 && bParam1) == 0;
}

int Function_237() //Position: 0xF8C1 / 63681
{
	if (Function_236(iLocal_36, 1))
	{
		Function_235(&iLocal_36, 1);
		return 479;
	}
	if (Function_236(iLocal_36, 2))
	{
		Function_235(&iLocal_36, 2);
		return 397;
	}
	if (Function_236(iLocal_36, 4))
	{
		Function_235(&iLocal_36, 4);
		return 398;
	}
	if (Function_236(iLocal_36, 8))
	{
		Function_235(&iLocal_36, 8);
		return 399;
	}
	if (Function_236(iLocal_36, 16))
	{
		Function_235(&iLocal_36, 16);
		return 477;
	}
	if (Function_236(iLocal_36, 32))
	{
		Function_235(&iLocal_36, 32);
		return 478;
	}
	if (Function_236(iLocal_36, 64))
	{
		Function_235(&iLocal_36, 64);
		return 399;
	}
	if (Function_236(iLocal_36, 128))
	{
		Function_235(&iLocal_36, 128);
		return 474;
	}
	if (Function_236(iLocal_36, 256))
	{
		Function_235(&iLocal_36, 256);
		return 475;
	}
	if (Function_236(iLocal_36, 512))
	{
		Function_235(&iLocal_36, 512);
		return 476;
	}
	if (Function_236(iLocal_36, 1024))
	{
		Function_235(&iLocal_36, 1024);
		return 397;
	}
	if (Function_236(iLocal_36, 2048))
	{
		Function_235(&iLocal_36, 2048);
		return 398;
	}
	if (Function_236(iLocal_36, 4096))
	{
		Function_235(&iLocal_36, 4096);
		return 411;
	}
	if (Function_236(iLocal_36, 8192))
	{
		Function_235(&iLocal_36, 8192);
		return 499;
	}
	if (Function_236(iLocal_36, 16384))
	{
		Function_235(&iLocal_36, 16384);
		return 500;
	}
	if (Function_236(iLocal_36, 32768))
	{
		Function_235(&iLocal_36, 32768);
		return 501;
	}
	if (Function_236(iLocal_36, 65536))
	{
		Function_235(&iLocal_36, 65536);
		return 502;
	}
	if (Function_236(iLocal_36, 131072))
	{
		Function_235(&iLocal_36, 131072);
		return 410;
	}
	return 4294967295;
}

int Function_238() //Position: 0xFA56 / 64086
{
	if (Function_236(iLocal_36, 1))
	{
		Function_235(&iLocal_36, 1);
		return 477;
	}
	if (Function_236(iLocal_36, 2))
	{
		Function_235(&iLocal_36, 2);
		return 478;
	}
	if (Function_236(iLocal_36, 4))
	{
		Function_235(&iLocal_36, 4);
		return 479;
	}
	if (Function_236(iLocal_36, 8))
	{
		Function_235(&iLocal_36, 8);
		return 397;
	}
	if (Function_236(iLocal_36, 16))
	{
		Function_235(&iLocal_36, 16);
		return 398;
	}
	if (Function_236(iLocal_36, 32))
	{
		Function_235(&iLocal_36, 32);
		return 399;
	}
	if (Function_236(iLocal_36, 64))
	{
		Function_235(&iLocal_36, 64);
		return 397;
	}
	if (Function_236(iLocal_36, 128))
	{
		Function_235(&iLocal_36, 128);
		return 398;
	}
	if (Function_236(iLocal_36, 256))
	{
		Function_235(&iLocal_36, 256);
		return 399;
	}
	if (Function_236(iLocal_36, 512))
	{
		Function_235(&iLocal_36, 512);
		return 474;
	}
	if (Function_236(iLocal_36, 1024))
	{
		Function_235(&iLocal_36, 1024);
		return 475;
	}
	if (Function_236(iLocal_36, 2048))
	{
		Function_235(&iLocal_36, 2048);
		return 476;
	}
	if (Function_236(iLocal_36, 4096))
	{
		Function_235(&iLocal_36, 4096);
		return 502;
	}
	if (Function_236(iLocal_36, 8192))
	{
		Function_235(&iLocal_36, 8192);
		return 410;
	}
	if (Function_236(iLocal_36, 16384))
	{
		Function_235(&iLocal_36, 16384);
		return 411;
	}
	if (Function_236(iLocal_36, 32768))
	{
		Function_235(&iLocal_36, 32768);
		return 499;
	}
	if (Function_236(iLocal_36, 65536))
	{
		Function_235(&iLocal_36, 65536);
		return 500;
	}
	if (Function_236(iLocal_36, 131072))
	{
		Function_235(&iLocal_36, 131072);
		return 501;
	}
	return 4294967295;
}

int Function_239(bool bParam0) //Position: 0xFBEB / 64491
{
	bParam0 = bParam0;
	vLocal_133 = { StackVal, StackVal, vLocal_145 };
	bLocal_413 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_418, "nwHarassSquad"));
	if (Function_63(StackVal, StackVal, vLocal_133))
	{
		return 0;
	}
	strcpy(&Local_83, "Rustler", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	PRINTSTRING("spawning RustlerSquadHarass ");
	PRINTNL();
	if (bLocal_0 == 0)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_391, bLocal_428, 4, false);
	ADD_ACTORSET_MEMBER(bLocal_415, bLocal_391);
	_SET_ACTOR_HEALTH_3(bLocal_391, 180.0f);
	Function_183(bLocal_391);
	Function_188(bLocal_391, 0);
	DECOR_SET_BOOL(bLocal_391, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_391, "bDisableCutFree", true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_391, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_391, false);
	strcpy(&Local_83, "nRustler_A", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	if (bLocal_0 == 0)
	{
		bLocal_392 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_392 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_392 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_392, bLocal_428, 4, false);
	ADD_ACTORSET_MEMBER(bLocal_415, bLocal_392);
	_SET_ACTOR_HEALTH_3(bLocal_392, 180.0f);
	Function_183(bLocal_392);
	Function_188(bLocal_392, 0);
	DECOR_SET_BOOL(bLocal_392, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_392, "bDisableCutFree", true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_392, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_392, false);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	strcpy(&Local_83, "nRustler_B", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	if (bLocal_0 == 0)
	{
		bLocal_393 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_393 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_393 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_391, bLocal_428, 4, false);
	ADD_ACTORSET_MEMBER(bLocal_415, bLocal_393);
	_SET_ACTOR_HEALTH_3(bLocal_393, 180.0f);
	Function_183(bLocal_393);
	Function_188(bLocal_393, 0);
	DECOR_SET_BOOL(bLocal_393, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_393, "bDisableCutFree", true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_393, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_393, false);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	strcpy(&Local_83, "nRustler_C", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	if (bLocal_0 == 0)
	{
		bLocal_394 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_394 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_394 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_391, bLocal_428, 4, false);
	ADD_ACTORSET_MEMBER(bLocal_415, bLocal_394);
	_SET_ACTOR_HEALTH_3(bLocal_394, 180.0f);
	Function_183(bLocal_394);
	Function_188(bLocal_394, 0);
	DECOR_SET_BOOL(bLocal_394, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_394, "bDisableCutFree", true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_394, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_394, false);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	strcpy(&Local_83, "Victim", 32);
	if (Global_29006 == Global_30717[0])
	{
		bLocal_400 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 76, vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (Global_29006 == Global_30693[0])
	{
		bLocal_400 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 253, vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	_SET_ACTOR_HEALTH_3(bLocal_400, 180.0f);
	Function_183(bLocal_400);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_400, false);
	bLocal_436 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "CrimeVol", 2, vLocal_133, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
	if (IS_VOLUME_VALID(bLocal_436))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_436, 15);
	}
	if (!IS_ACTOR_VALID(bLocal_391))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_392))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create RustlerA.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_393))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create RustlerB.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_394))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create RustlerC.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_400))
	{
		LOG_ERROR("SpawnedRustlerSquadHarass: Unable to create Victim.");
		return 0;
	}
	Function_240(bLocal_415, bLocal_413, 0);
	SQUAD_SET_FACTION(bLocal_413, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_413, 526848);
	return 1;
}

void Function_240(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10213 / 66067
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar2 = GET_OBJECT_FROM_SQUAD(bParam1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar0 = false;
			while (bVar0 <= GET_ACTORSET_SIZE(bParam0))
			{
				bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					SQUAD_JOIN(bVar1, bParam1);
					if (bParam2)
					{
						TASK_CLEAR(bVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

int Function_241(bool bParam0) //Position: 0x10271 / 66161
{
	bool bVar0;
	
	bParam0 = bParam0;
	vLocal_133 = { StackVal, StackVal, vLocal_145 };
	if (Function_63(StackVal, StackVal, vLocal_133))
	{
		return 0;
	}
	strcpy(&Local_83, "Rustler", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	bVar0 = RAND_INT_RANGE(false, 5);
	PRINTSTRING("SpawnedRustlerHorseTheft - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	bLocal_402 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_43(), bLocal_16, vLocal_133, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(bLocal_417, bLocal_402);
	ACCESSORIZE_HORSE(bLocal_402, false);
	vLocal_133.x = (vLocal_133.x + 0,2f);
	bLocal_400 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_43(), iLocal_9[bVar0], vLocal_133, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(bLocal_416, bLocal_400);
	_SET_ACTOR_HEALTH_3(bLocal_400, 180.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_400, false);
	vLocal_133.x = (vLocal_133.x + 0,2f);
	if (bLocal_0 == 0)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	ADD_ACTORSET_MEMBER(bLocal_414, bLocal_391);
	DECOR_SET_BOOL(bLocal_391, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_391, "bDisableCutFree", true);
	_SET_ACTOR_HEALTH_3(bLocal_391, 180.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_391, true);
	SET_ACTOR_MAX_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_391, false);
	AI_BEHAVIOR_SET_ALLOW(bLocal_391, 0, 0);
	bLocal_436 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "CrimeVol", 2, vLocal_133, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
	if (IS_VOLUME_VALID(bLocal_436))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_436, 15);
	}
	if (!IS_ACTOR_VALID(bLocal_391))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_400))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Victim.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_402))
	{
		LOG_ERROR("SpawnedRustlerHorseTheft: Unable to create Horse.");
		return 0;
	}
	return 1;
}

int Function_242(bool bParam0) //Position: 0x1055B / 66907
{
	bParam0 = bParam0;
	vLocal_133 = { StackVal, StackVal, vLocal_145 };
	if (Function_63(StackVal, StackVal, vLocal_133))
	{
		return 0;
	}
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("nwCoyote") };
	bLocal_401 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 1049, vLocal_133, 0.0f, 0.0f, 0.0f);
	ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_401, 46, 2.0f);
	ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_401, 47, 2.0f);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("Chicken") };
	bLocal_403 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, 1016, vLocal_133, 0.0f, 0.0f, 0.0f);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("Chicken") };
	bLocal_404 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, 1016, vLocal_133, 0.0f, 0.0f, 0.0f);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("Chicken") };
	vLocal_133.x = (vLocal_133.x + 0,1f);
	bLocal_405 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, 1016, vLocal_133, 0.0f, 0.0f, 0.0f);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("Chicken") };
	vLocal_133.x = (vLocal_133.x + 0,1f);
	bLocal_406 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, 1016, vLocal_133, 0.0f, 0.0f, 0.0f);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217("Chicken") };
	vLocal_133.x = (vLocal_133.x + 0,1f);
	bLocal_407 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, 1016, vLocal_133, 0.0f, 0.0f, 0.0f);
	bLocal_411 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_418, "nwChickens"));
	SQUAD_JOIN(bLocal_403, bLocal_411);
	SQUAD_JOIN(bLocal_404, bLocal_411);
	SQUAD_JOIN(bLocal_406, bLocal_411);
	SQUAD_JOIN(bLocal_407, bLocal_411);
	PRINTSTRING("aCoyote is being spawned at : ");
	PRINTVECTOR(vLocal_133);
	PRINTNL();
	if (!IS_ACTOR_VALID(bLocal_401))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create aCoyote.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_403))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken1.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_404))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken2.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_405))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken3.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_406))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken4.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_407))
	{
		LOG_ERROR("SpawnedCoyoteAttack: Unable to create Chicken5.");
		return 0;
	}
	return 1;
}

int Function_243(bool bParam0) //Position: 0x108AD / 67757
{
	bool bVar0;
	
	bParam0 = bParam0;
	vLocal_133 = { StackVal, StackVal, vLocal_145 };
	if (Function_63(StackVal, StackVal, vLocal_133))
	{
		return 0;
	}
	strcpy(&Local_83, "Rustler", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	bVar0 = RAND_INT_RANGE(false, 5);
	PRINTSTRING("SpawnedRustlerSquadAttack - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	if (bLocal_0 == 0)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 1)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	else if (bLocal_0 == 2)
	{
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, 0.0f, 0.0f, 0.0f);
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_391, bLocal_428, 4, false);
	ADD_ACTORSET_MEMBER(bLocal_414, bLocal_391);
	_SET_ACTOR_HEALTH_3(bLocal_391, 180.0f);
	DECOR_SET_BOOL(bLocal_391, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_391, "bDisableCutFree", true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_391, true);
	SET_ACTOR_MAX_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_391, false);
	AI_BEHAVIOR_SET_ALLOW(bLocal_391, 0, 0);
	vLocal_133.x = (vLocal_133.x + 0,1f);
	bLocal_400 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_43(), iLocal_9[bVar0], vLocal_133, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(bLocal_414, bLocal_400);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_400, true);
	_SET_ACTOR_HEALTH_3(bLocal_400, 180.0f);
	SET_ACTOR_MAX_HEALTH(bLocal_400, 32.0f);
	SET_ACTOR_HEALTH(bLocal_400, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_400, false);
	AI_BEHAVIOR_SET_ALLOW(bLocal_400, 0, 0);
	bLocal_436 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "CrimeVol", 2, vLocal_133, 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 30.0f);
	if (IS_VOLUME_VALID(bLocal_436))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_436, 15);
	}
	if (!IS_ACTOR_VALID(bLocal_391))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_400))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Victim.");
		return 0;
	}
	bLocal_412 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_418, "nwFightSquad"));
	Function_240(bLocal_414, bLocal_412, 0);
	return 1;
}

int Function_244(bool bParam0) //Position: 0x10B6F / 68463
{
	bool bVar0;
	
	bParam0 = bParam0;
	vLocal_133 = { StackVal, StackVal, vLocal_145 };
	if (Function_63(StackVal, StackVal, vLocal_133))
	{
		return 0;
	}
	strcpy(&Local_83, "Rustler", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	bVar0 = RAND_INT_RANGE(false, 5);
	PRINTSTRING("SpawnedRustlerAttack - When we spawn, this is what we're spawning: ");
	PRINTINT(uLocal_2[bVar0]);
	PRINTNL();
	if (bLocal_0 == 0)
	{
		Function_221(bLocal_438);
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_238(), vLocal_133, Function_221(bLocal_438));
	}
	else if (bLocal_0 == 1)
	{
		Function_221(bLocal_438);
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_237(), vLocal_133, Function_221(bLocal_438));
	}
	else if (bLocal_0 == 2)
	{
		Function_221(bLocal_438);
		bLocal_391 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_83, Function_234(), vLocal_133, Function_221(bLocal_438));
	}
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_391, bLocal_428, 4, false);
	_SET_ACTOR_HEALTH_3(bLocal_391, 180.0f);
	ADD_ACTORSET_MEMBER(bLocal_414, bLocal_391);
	DECOR_SET_BOOL(bLocal_391, "MinigameAttack", true);
	DECOR_SET_BOOL(bLocal_391, "bDisableCutFree", true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_391, true);
	SET_ACTOR_MAX_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_HEALTH(bLocal_391, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_391, false);
	AI_BEHAVIOR_SET_ALLOW(bLocal_391, 0, 0);
	if (iLocal_30 == 4)
	{
		vLocal_133.x = (vLocal_133.x + 1.0f);
	}
	else
	{
		vLocal_133.x = (vLocal_133.x + 0,1f);
	}
	bLocal_400 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_43(), iLocal_9[bVar0], vLocal_133, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(bLocal_416, bLocal_400);
	_SET_ACTOR_HEALTH_3(bLocal_400, 180.0f);
	SET_ACTOR_MAX_HEALTH(bLocal_400, 32.0f);
	SET_ACTOR_HEALTH(bLocal_400, 32.0f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_400, false);
	bLocal_436 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "CrimeVol", 2, vLocal_133, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
	if (IS_VOLUME_VALID(bLocal_436))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_390, bLocal_436))
		{
			TASK_FLEE_ACTOR(bLocal_390, bLocal_391, 50.0f, 50.0f, 0, 0, 0);
		}
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_436);
		CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_436, 15);
	}
	if (!IS_ACTOR_VALID(bLocal_391))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Rustler.");
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_400))
	{
		LOG_ERROR("SpawnedRustlerAttack: Unable to create Victim.");
		return 0;
	}
	return 1;
}

bool Function_245(bool bParam0) //Position: 0x10E32 / 69170
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_250();
	iVar1 = 0;
	if (!Function_14(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_249(bParam0[iVar03], 8);
		}
		else if (Function_248())
		{
			iVar1 = 1;
			Function_249(bParam0[iVar03], 8);
		}
		Function_249(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_14(bParam0[iVar03], 4))
		{
			if (!Function_14(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_14(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_14(bParam0[03], 8) || iVar1));
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
				Function_249(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_14(bParam0[iVar03], 4))
		{
			if (!Function_14(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_249(bParam0[iVar03], 2);
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
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_249(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_249(bParam0[iVar03], 2);
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
	Function_246();
	return 1;
}

void Function_246() //Position: 0x111AD / 70061
{
	if (!Function_247(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_247(int iParam0) //Position: 0x111ED / 70125
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_248() //Position: 0x11209 / 70153
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

void Function_249(var uParam0, int iParam1) //Position: 0x11234 / 70196
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_250() //Position: 0x11245 / 70213
{
	if (!Function_247(128))
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

bool Function_251(int iParam0) //Position: 0x11287 / 70279
{
	switch (iLocal_623)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			Function_252(iParam0);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

void Function_252(var uParam0) //Position: 0x112B2 / 70322
{
	var uVar0;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vLocal_91);
	if (IS_ACTOR_VALID(bLocal_397))
	{
		GET_POSITION(bLocal_397, &uVar0);
	}
	if (IS_ACTOR_VALID(bLocal_391))
	{
		GET_POSITION(bLocal_391, &vLocal_100);
	}
	if (!iLocal_48)
	{
		if (!Function_177(&bLocal_485))
		{
			Function_368(&bLocal_485);
		}
		if (iLocal_64 == 0)
		{
			Function_253();
			vLocal_145 = { StackVal, StackVal, Function_253() };
			iLocal_64 = 1;
			*uParam0 = 11;
		}
	}
	return;
}

vector3 Function_253() //Position: 0x1130E / 70414
{
	while ((iLocal_31 != iLocal_32 || iLocal_31 != iLocal_33) || iLocal_31 != 4294967295)
	{
		bLocal_438 = Function_255(StackVal, StackVal, &bLocal_446, vLocal_91, 45.0f, 95.0f);
		if (IS_OBJECT_VALID(bLocal_438))
		{
			if (DECOR_GET_INT(bLocal_438, "FlagType") == 0)
			{
				iLocal_30 = 0;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 1)
			{
				iLocal_30 = 1;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 2)
			{
				iLocal_30 = 2;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 3)
			{
				iLocal_30 = 3;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 4)
			{
				iLocal_30 = 4;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 5)
			{
				iLocal_30 = 5;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 6)
			{
				iLocal_30 = 6;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 7)
			{
				iLocal_30 = 7;
			}
			else if (DECOR_GET_INT(bLocal_438, "FlagType") == 8)
			{
				iLocal_30 = 8;
			}
		}
		iLocal_31 = iLocal_30;
	}
	GET_OBJECT_POSITION(bLocal_438, &vLocal_118);
	PRINTSTRING("Nightwatch scanner found a point at: ");
	PRINTVECTOR(vLocal_118);
	PRINTNL();
	if (!Function_63(StackVal, StackVal, vLocal_118))
	{
		Function_94();
		iLocal_48 = 1;
		Function_368(&bLocal_497);
		bLocal_49 = Function_254(StackVal, StackVal, vLocal_118);
	}
	else
	{
		LOG_ERROR("FAILED TO GET A VALID BLIP POSITION");
	}
	return StackVal, StackVal, vLocal_118;
}

int Function_254(vector3 vParam0) //Position: 0x114CE / 70862
{
	vParam0 = { StackVal, StackVal, vParam0 };
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	switch (iLocal_623)
	{
		case 0x00000000:
			iLocal_622 = 3;
			break;
		
		case 0x00000001:
			iLocal_622 = 4;
			break;
		
		default:
			break;
	}
	return 1;
}

var Function_255(var uParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x1150B / 70923
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	
	bVar2 = CREATE_LAYOUT(Function_43());
	if (!IS_LAYOUTREF_VALID(bVar2))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(*uParam0) < 0)
	{
		return "";
	}
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), bVar2, 4294967295, 0);
	if (!IS_OBJECTSET_VALID(bVar3))
	{
		DESTROY_OBJECTSET(bVar3);
		return "";
	}
	bVar8 = false;
	while (bVar8 < (GET_OBJECTSET_SIZE(*uParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar8, *uParam0);
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar4 = VDIST(vParam1, vVar5);
		PRINTSTRING("*_*currentDistance: ");
		PRINTFLOAT(bVar4);
		PRINTNL();
		if (bVar4 < fParam4 && bVar4 > fParam5)
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bVar3);
			PRINTSTRING("*_*Within range, so volume object added");
			PRINTNL();
		}
		bVar8++;
	}
	PRINTSTRING("*_*Finished culling objects");
	PRINTNL();
	uVar1 = Function_264(&bVar3);
	DESTROY_OBJECTSET(bVar3);
	DESTROY_LAYOUT(bVar2);
	return uVar1;
}

bool Function_256(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x1162E / 71214
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, iParam8, iParam10, iParam13, 0, uParam14, uParam17);
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
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
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

bool Function_257(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7) //Position: 0x116F9 / 71417
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, uParam7);
}

bool Function_258(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11715 / 71445
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

vector3 Function_259() //Position: 0x1172F / 71471
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	while (!bVar1)
	{
		bVar0 = RAND_INT_RANGE(false, (bLocal_19 - 1));
		if (!Function_260(bVar0))
		{
			bLocal_20[iLocal_25] = bVar0;
			iLocal_25++;
			iLocal_26++;
			if (iLocal_25 >= 3)
			{
				iLocal_25 = 0;
			}
			bVar1 = true;
		}
	}
	PRINTSTRING("JobNightwatch_GetPatrolPos: Patrol position found: ");
	PRINTVECTOR(vLocal_148[bVar03]);
	PRINTNL();
	return StackVal, StackVal, vLocal_148[bVar03];
}

bool Function_260(int iParam0) //Position: 0x117CC / 71628
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iParam0 == bLocal_20[iVar0])
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_261() //Position: 0x117FA / 71674
{
	if (IS_ACTOR_VALID(bLocal_397))
	{
		GET_POSITION(bLocal_397, &vLocal_103);
	}
	if (bLocal_52)
	{
		if (Function_69(StackVal, StackVal, StackVal, StackVal, vLocal_91, vLocal_103) > 10.0f)
		{
			if (iLocal_51)
			{
				iLocal_59 = 0;
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_397);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_397, 5,5f);
				Function_262(StackVal, StackVal, vLocal_118, 3);
			}
			else
			{
				iLocal_59 = 0;
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_397);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 1);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_397, 2.0f);
				Function_262(StackVal, StackVal, vLocal_118, 2);
			}
		}
	}
	else if (Function_69(StackVal, StackVal, StackVal, StackVal, vLocal_91, vLocal_103) < 20.0f)
	{
		if (iLocal_59 == 0)
		{
			PLAY_SOUND_FROM_ACTOR(bLocal_397, "DOG_BARK_NOW_MASTER", 0);
			iLocal_59 = 1;
		}
		Function_176();
		if (!HUD_IS_SHOWING_OBJECTIVE())
		{
			Function_350("JOB_NIGHT_KeepUpWithDog", 4,5f, 1, 2, 0, 0, 0);
		}
	}
	return;
}

void Function_262(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x118DC / 71900
{
	TASK_CLEAR(bLocal_397);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_397, 1);
	TASK_GO_TO_COORD_NONSTOP(bLocal_397, &uParam0, iParam3, 1.0f);
	TASK_PRIORITY_SET(bLocal_397, true);
	if (Function_263(&bLocal_485))
	{
		Function_352(&bLocal_485);
	}
	bLocal_52 = false;
}

bool Function_263(bool bParam0) //Position: 0x11915 / 71957
{
	return Function_9(*bParam0, 2);
}

var Function_264(bool bParam0) //Position: 0x11922 / 71970
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = "";
	if (IS_OBJECTSET_VALID(*bParam0))
	{
		bVar1 = GET_OBJECTSET_SIZE(*bParam0);
		if (bVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(bVar1)));
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, *bParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return bVar0;
}

void Function_265() //Position: 0x11988 / 72072
{
	iLocal_632 = 0;
	return;
}

bool Function_266() //Position: 0x11992 / 72082
{
	if (Function_268() == 1)
	{
		DELETE_PROJECTILES_IN_VOLUME(bLocal_431);
		if (IS_ACTOR_VALID(bLocal_410))
		{
			DESTROY_ACTOR(bLocal_410);
		}
	}
	else
	{
		return 0;
	}
	Function_267(1);
	return 1;
}

void Function_267(int iParam0) //Position: 0x119BE / 72126
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_97())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

int Function_268() //Position: 0x119F3 / 72179
{
	if (!Function_245(&bLocal_506))
	{
		return 0;
	}
	return 1;
}

void Function_269() //Position: 0x11A06 / 72198
{
	Function_272(&bLocal_506, 87, 3, 0);
	if (Global_29006 == Global_30668[0])
	{
		Function_272(&bLocal_506, 54, 3, 0);
		Function_272(&bLocal_506, 1049, 3, 0);
		Function_272(&bLocal_506, 1016, 3, 0);
		Function_272(&bLocal_506, 1009, 3, 0);
		Function_272(&bLocal_506, 397, 2, 0);
		Function_272(&bLocal_506, 398, 2, 0);
		Function_272(&bLocal_506, 399, 2, 0);
		Function_272(&bLocal_506, 477, 2, 0);
		Function_272(&bLocal_506, 478, 2, 0);
		Function_272(&bLocal_506, 479, 2, 0);
		Function_270(&bLocal_506, "$/content/scripting/gringo/simplegringo/pull_cow", 1, 0);
	}
	if (Global_29006 == Global_30717[0])
	{
		Function_272(&bLocal_506, 76, 3, 0);
		Function_272(&bLocal_506, 474, 2, 0);
		Function_272(&bLocal_506, 475, 2, 0);
		Function_272(&bLocal_506, 476, 2, 0);
		Function_272(&bLocal_506, 397, 2, 0);
		Function_272(&bLocal_506, 398, 2, 0);
		Function_272(&bLocal_506, 399, 2, 0);
		Function_270(&bLocal_506, "stand_yelling", 5, 0);
		Function_270(&bLocal_506, "custom/stand_yelling", 8, 0);
		Function_270(&bLocal_506, "stolen_pleading", 5, 0);
		Function_270(&bLocal_506, "custom/stolen_pleading", 8, 0);
		Function_270(&bLocal_506, "$/content/scripting/gringo/simplegringo/smoking_stand_loose", 1, 0);
	}
	if (Global_29006 == Global_30693[0])
	{
		Function_272(&bLocal_506, 253, 3, 0);
		Function_272(&bLocal_506, 502, 2, 0);
		Function_272(&bLocal_506, 410, 2, 0);
		Function_272(&bLocal_506, 411, 2, 0);
		Function_272(&bLocal_506, 499, 2, 0);
		Function_272(&bLocal_506, 500, 2, 0);
		Function_272(&bLocal_506, 501, 2, 0);
		Function_270(&bLocal_506, "$/content/scripting/gringo/simplegringo/bandito_harass", 1, 0);
		Function_270(&bLocal_506, "stand_yelling", 5, 0);
		Function_270(&bLocal_506, "custom/stand_yelling", 8, 0);
		Function_270(&bLocal_506, "stolen_pleading", 5, 0);
		Function_270(&bLocal_506, "custom/stolen_pleading", 8, 0);
	}
	Function_270(&bLocal_506, "stand_ambient", 5, 0);
	Function_270(&bLocal_506, "custom/stand_ambient", 8, 0);
	Function_270(&bLocal_506, "stand_surrender", 5, 0);
	Function_270(&bLocal_506, "custom/stand_surrender", 8, 0);
	Function_270(&bLocal_506, "body_left_for_dead_gped_loot", 5, 0);
	Function_270(&bLocal_506, "custom/body_left_for_dead_gped_loot", 8, 0);
	Function_270(&bLocal_506, "$/content/scripting/gringo/SimpleGringo/body_left_for_dead_gped_loot", 1, 0);
	Function_270(&bLocal_506, "handoff", 5, 0);
	Function_270(&bLocal_506, "custom/handoff", 8, 0);
	Function_270(&bLocal_506, "pointing", 5, 0);
	Function_270(&bLocal_506, "custom/pointing", 8, 0);
	Function_270(&bLocal_506, "look_in_window", 5, 0);
	Function_270(&bLocal_506, "custom/look_in_window", 8, 0);
	return;
}

var Function_270(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x11EC7 / 73415
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_271(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_249(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_271(var uParam0, int iParam1, int iParam2) //Position: 0x11EFF / 73471
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_14(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_249(uParam0[iVar03], 4);
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

var Function_272(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11FC3 / 73667
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_14(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_249(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_249(bParam0[iVar03], 8);
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

var Function_273(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x12093 / 73875
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_43(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nightwatch_chu_intro", 2, 1);
	}
	Function_274(&bVar0);
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

void Function_274(int iParam0) //Position: 0x12113 / 74003
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_276(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_275(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7,5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 4.0f, 1);
	return;
}

void Function_275(int iParam0) //Position: 0x12156 / 74070
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49,7196f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2729,017f, 33,36131f, 4251,337f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,033152f, 1,254023f, 0,001078f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_276(int iParam0) //Position: 0x121C4 / 74180
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49,7196f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2729,305f, 34,64253f, 4251,197f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,357295f, 1,484761f, 0,00115f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x12232 / 74290
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_43(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nightwatch_blk_intro", 3, 1);
	}
	Function_278(&bVar0);
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

void Function_278(int iParam0) //Position: 0x122B2 / 74418
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_281(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_280(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_279(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_279(int iParam0) //Position: 0x12303 / 74499
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 688,1966f, 79,57518f, 1363,217f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,07177f, 1,87541f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_280(int iParam0) //Position: 0x1236D / 74605
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,61139f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 681,9458f, 79,82878f, 1365,838f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,039237f, 0,804415f, -0,001725f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_281(var uParam0) //Position: 0x123DB / 74715
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 53,61139f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 683,1879f, 79,90371f, 1364,341f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,031627f, 0,37632f, -0,001724f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_282() //Position: 0x12449 / 74825
{
	bLocal_453 = Function_283("hennigansRanch", "stable02", 3);
	bLocal_454 = Function_283("hennigansRanch", "stable02", 5);
	bLocal_455 = Function_283("hennigansRanch", "stable02", 11);
	bLocal_456 = Function_283("hennigansRanch", "stable02", 8);
	bLocal_457 = Function_283("hennigansRanch", "stable02", 7);
	if (IS_DOOR_VALID(bLocal_453))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_453, bLocal_448);
	}
	else
	{
		LOG_ERROR("dDoor1 is not valid");
	}
	if (IS_DOOR_VALID(bLocal_454))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_454, bLocal_448);
	}
	else
	{
		LOG_ERROR("dDoor2) is not valid");
	}
	if (IS_DOOR_VALID(bLocal_455))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_455, bLocal_448);
	}
	else
	{
		LOG_ERROR("dDoor3) is not valid");
	}
	if (IS_DOOR_VALID(bLocal_456))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_456, bLocal_448);
	}
	else
	{
		LOG_ERROR("dDoor4) is not valid");
	}
	if (IS_DOOR_VALID(bLocal_457))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_457, bLocal_448);
	}
	else
	{
		LOG_ERROR("dDoor5) is not valid");
	}
	return;
}

int Function_283(var uParam0, var uParam1, int iParam2) //Position: 0x125EF / 75247
{
	return Function_284(Global_29006, uParam0, uParam1, iParam2);
}

int Function_284(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x12601 / 75265
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_71(iParam0))
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

var Function_285(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1269D / 75421
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_43(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nightwatch_hen_intro", 2, 1);
	}
	Function_286(&bVar0);
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

void Function_286(int iParam0) //Position: 0x1271D / 75549
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_288(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_287(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 10.0f, 1, 1);
	return;
}

void Function_287(int iParam0) //Position: 0x12764 / 75620
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40,85058f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -821,0756f, 94,41666f, 2417,594f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,016686f, 2,992479f, -0,003264f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_288(bool bParam0) //Position: 0x127D2 / 75730
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 40,85058f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -821,364f, 95,734f, 2418,143f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,263473f, 3,036014f, -0,003381f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_289(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12840 / 75840
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_92();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_39();
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
			if (Function_29())
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
				Function_292(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_43(), 2, Function_292(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_75(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_291()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_291()));
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
	if (Function_247(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_290(0x4000000);
	}
	if (Function_247(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_290(0x8000000);
	}
}

void Function_290(int iParam0) //Position: 0x12AE9 / 76521
{
	int iVar0;
	
	if (Function_9(iParam0, 1) && Function_9(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_291() //Position: 0x12B1D / 76573
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

vector3 Function_292(bool bParam0) //Position: 0x12B9C / 76700
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_293(bool bParam0, bool bParam1) //Position: 0x12BAD / 76717
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_294(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_294(bool bParam0, vector3 vParam1) //Position: 0x12BC7 / 76743
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_295(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_295(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_295(bool bParam0, vector3 vParam1) //Position: 0x12BFF / 76799
{
	vector3 vVar0;
	
	Function_292(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_292(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_296(bool bParam0, bool bParam1) //Position: 0x12C82 / 76930
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
	else if (!bParam1 || Function_169(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_297() //Position: 0x12CDF / 77023
{
	bool bVar0;
	int iVar1;
	
	strcpy(&Local_83, "nnwForeman", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	if (Global_29006 == Global_30693[0])
	{
		bLocal_390 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 460, -2748,45f, 32,61f, 4250,71f, 0.0f, 0.0f, 0.0f);
	}
	else if (Global_29006 == Global_30668[0])
	{
		bLocal_390 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 436, -832,14f, 93,36f, 2435,72f, 0.0f, 0.0f, 0.0f);
	}
	else if (Global_29006 == Global_30717[0])
	{
		bLocal_390 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 185, vLocal_97, 0.0f, 0.0f, 0.0f);
		bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "nwvolEndguy", 2, 686,35f, 78,3f, 1370,36f, 0.0f, 0.0f, 0.0f, 30.0f, 30.0f, 10.0f);
		bLocal_443 = CREATE_GRINGO_IN_LAYOUT(bLocal_418, "nwEndGringo", "smoking_stand_loose", vLocal_377, vLocal_380);
	}
	if (!IS_ACTOR_VALID(bLocal_390))
	{
		LOG_ERROR("NIGHTWATCH: Invalid actor nightwatchEndguy.");
	}
	Function_313(StackVal, StackVal, vLocal_103);
	TASK_PRIORITY_SET(bLocal_390, true);
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_390, bVar0, 4, false);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,5f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_397, 0,01f);
	strcpy(&Local_83, "nnwProctor", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	if (Global_30616 == FIND_NAMED_LAYOUT("HennigansRanch_layout"))
	{
		bLocal_395 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 35, vLocal_344, vLocal_347);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Blackwater_layout"))
	{
		bLocal_395 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 184, vLocal_344, vLocal_347);
	}
	else if (Global_30616 == FIND_NAMED_LAYOUT("Chuparosa_layout"))
	{
		bLocal_395 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 396, vLocal_344, 0.0f, 247,615f, 0.0f);
	}
	SET_ACTOR_FACTION(bLocal_395, 23);
	DECOR_SET_BOOL(bLocal_395, "CanBeLasso", false);
	strcpy(&Local_83, "nwProctorHorse", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	bLocal_396 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 976, vLocal_136, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_FACTION(bLocal_396, 23);
	DECOR_SET_BOOL(bLocal_396, "CanBeLasso", false);
	SET_ALLOW_RIDE_BY_PLAYER(bLocal_396, 0);
	Function_293(bLocal_395, bLocal_389);
	Function_293(bLocal_396, bLocal_389);
	TASK_STAND_STILL(bLocal_395, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_396, -1.0f, 0, 0);
	bLocal_414 = CREATE_ACTORSET_IN_LAYOUT(bLocal_418, "actsetRustlers", 0);
	bLocal_415 = CREATE_ACTORSET_IN_LAYOUT(bLocal_418, "actsetHarass", 0);
	bLocal_416 = CREATE_ACTORSET_IN_LAYOUT(bLocal_418, "actsetVictims", 0);
	bLocal_417 = CREATE_ACTORSET_IN_LAYOUT(bLocal_418, "actsetHorses", 0);
	iVar1 = 0;
	Function_311();
	if (Function_310(2))
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			iLocal_9[iVar1] = Function_299(2, 1, 2, 4294967295, 1);
			Function_272(&bLocal_506, iLocal_9[iVar1], 2, 0);
			PRINTSTRING("STREAMING: VICTIM ACTOR ENUM: ");
			PRINTINT(iLocal_9[iVar1]);
			PRINTNL();
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 6)
		{
			iLocal_9[iVar1] = 87;
			Function_272(&bLocal_506, iLocal_9[iVar1], 2, 0);
			iVar1++;
		}
	}
	if (Function_310(64))
	{
		bLocal_16 = Function_298(983, 991, 1000, 4294967295, 4294967295);
		Function_272(&bLocal_506, bLocal_16, 2, 0);
	}
	else
	{
		bLocal_16 = 983;
		Function_272(&bLocal_506, bLocal_16, 2, 0);
	}
	return;
}

var Function_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x130E3 / 78051
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	bool bVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1204)
	{
		return 4294967295;
	}
	if (iParam2 > 4294967295 || iParam2 <= 1204)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == iParam2 && bVar43 == iParam3) && bVar43 == iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	bVar46 = RAND_INT_RANGE(false, (iVar44 - 1));
	uVar45 = bVar1[bVar46];
	return uVar45;
}

var Function_299(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x131F9 / 78329
{
	return Function_300(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_300(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x13212 / 78354
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_303(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_303(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_303(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_303(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_303(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_303(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_303(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_303(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_303(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_303(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_303(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_303(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_303(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_303(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_301(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_301(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0x13467 / 78951
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_302(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_302(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_302(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_302(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_302(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_302(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_302(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_302(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_302(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_302(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_302(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_302(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_302(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_302(Global_30750[13], bVar0);
	}
	return Function_303(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_302(bool bParam0, bool bParam1) //Position: 0x135B8 / 79288
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

var Function_303(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x13676 / 79478
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
		Function_309();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_308(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_307(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_307(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_306(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_308(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_306(bVar0))
				{
					Function_305();
				}
				Function_304(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_308(bVar1))
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

void Function_304(int iParam0) //Position: 0x13969 / 80233
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

void Function_305() //Position: 0x13A1D / 80413
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

bool Function_306(bool bParam0) //Position: 0x13A57 / 80471
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

void Function_307(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13A84 / 80516
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

bool Function_308(bool bParam0) //Position: 0x13BD5 / 80853
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_309() //Position: 0x13BEC / 80876
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_305();
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
	Function_305();
	return;
}

bool Function_310(bool bParam0) //Position: 0x13C37 / 80951
{
	bool bVar0;
	
	switch (bParam0)
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

void Function_311() //Position: 0x13DA9 / 81321
{
	if (Global_29006 == Global_30668[0])
	{
		Function_312(&iLocal_36, 1);
		Function_312(&iLocal_36, 2);
		Function_312(&iLocal_36, 4);
		Function_312(&iLocal_36, 8);
		Function_312(&iLocal_36, 16);
		Function_312(&iLocal_36, 32);
	}
	else if (Global_29006 == Global_30717[0])
	{
		Function_312(&iLocal_36, 64);
		Function_312(&iLocal_36, 128);
		Function_312(&iLocal_36, 256);
		Function_312(&iLocal_36, 512);
		Function_312(&iLocal_36, 1024);
		Function_312(&iLocal_36, 2048);
	}
	else if (Global_29006 == Global_30693[0])
	{
		Function_312(&iLocal_36, 4096);
		Function_312(&iLocal_36, 8192);
		Function_312(&iLocal_36, 16384);
		Function_312(&iLocal_36, 32768);
		Function_312(&iLocal_36, 65536);
		Function_312(&iLocal_36, 131072);
	}
	return;
}

void Function_312(int iParam0, int iParam1) //Position: 0x13E61 / 81505
{
	Function_66(iParam0, iParam1);
	return;
}

int Function_313(vector3 vParam0) //Position: 0x13E6E / 81518
{
	strcpy(&Local_83, "nwWatchDog", 32);
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_217(&Local_83) };
	if (!IS_ACTOR_VALID(bLocal_397) && Global_29006 != Global_30668[0])
	{
		bLocal_397 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 1037, vParam0, vLocal_106);
	}
	else if (!IS_ACTOR_VALID(bLocal_397) && Global_29006 != Global_30693[0])
	{
		bLocal_397 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 1033, vParam0, vLocal_106);
	}
	else if (!IS_ACTOR_VALID(bLocal_397) && Global_29006 != Global_30717[0])
	{
		bLocal_397 = CREATE_ACTOR_IN_LAYOUT(bLocal_418, &Local_83, 1045, vParam0, vLocal_106);
	}
	else
	{
		LOG_ERROR("FAILED TO CREATE NIGHTWATCH DOG");
	}
	if (IS_ACTOR_VALID(bLocal_397))
	{
		bLocal_421 = ADD_BLIP_FOR_ACTOR(bLocal_397, 325, 0, 2, 0);
		SET_ACTOR_FACTION(bLocal_397, 20);
		SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_397, bLocal_428, 1, 3);
		SET_ACTOR_CAN_BE_TARGETED(bLocal_397, false);
		AI_IGNORE_ACTOR(bLocal_397);
		DECOR_SET_BOOL(bLocal_397, "CanBeLasso", false);
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_397, 3212836864, 3212836864, 4, 1, 0);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_397, 46, 2.0f);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_397, 47, 2.0f);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(bLocal_397, 0, 50.0f);
		ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_397, 5, false);
		SET_ACTOR_USE_COARSE_BOUNDS(bLocal_397, 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_397, false);
		SET_ACTOR_MAX_HEALTH(bLocal_397, 40.0f);
		Function_89(bLocal_397);
		SET_CRIPPLE_ENABLE(bLocal_397, 0);
		DECOR_SET_BOOL(bLocal_397, "NoBleedOut", true);
		bLocal_428 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_nightwatchVol");
		if (IS_VOLUME_VALID(bLocal_428))
		{
		}
		return 1;
	}
	return 0;
}

void Function_314(bool bParam0) //Position: 0x14032 / 81970
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	iVar1 = 0;
	bVar2 = false;
	iVar6 = 31;
	bVar8 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, "nwFlagGroupSet"));
	if (Global_29006 == Global_30717[0])
	{
		bVar2 = false;
		while (bVar2 <= GET_OBJECTSET_SIZE(bVar8))
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar8);
			switch (bVar2)
			{
				case 0x00000000:
					Function_222(bVar0);
					vLocal_94 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_40 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_94, 10.0f, &vLocal_94, &uVar3);
					break;
				
				case 0x00000001:
					Function_222(bVar0);
					vLocal_365 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_41 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_365, 10.0f, &vLocal_365, &uVar3);
					break;
				
				case 0x00000002:
					Function_222(bVar0);
					vLocal_97 = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_97, 10.0f, &vLocal_97, &uVar3);
					bLocal_43 = GET_OBJECT_HEADING(bVar0);
					break;
				
				case 0x00000003:
					Function_222(bVar0);
					vLocal_103 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_106 = { StackVal, StackVal, Function_221(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_103, 10.0f, &vLocal_103, &uVar3);
					break;
				
				case 0x00000004:
					Function_222(bVar0);
					vLocal_136 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x00000005:
					Function_222(bVar0);
					vLocal_374 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x00000006:
					Function_222(bVar0);
					vLocal_344 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_347 = { StackVal, StackVal, Function_221(bVar0) };
					break;
				
				case 0x00000007:
					Function_222(bVar0);
					vLocal_350 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_42 = GET_OBJECT_HEADING(bVar0);
					break;
				
				case 0x00000008:
					Function_222(bVar0);
					vLocal_353 = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_103, 10.0f, &vLocal_103, &uVar3);
					break;
				
				case 0x00000009:
					Function_222(bVar0);
					vLocal_377 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_380 = { StackVal, StackVal, Function_221(bVar0) };
					break;
				
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
				case 0x00000010:
				case 0x00000011:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 2);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", true);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000001A:
				case 0x0000001B:
				case 0x0000001C:
				case 0x0000001D:
				case 0x0000001E:
				case 0x0000001F:
				case 0x00000020:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", false);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000021:
				case 0x00000022:
				case 0x00000023:
				case 0x00000024:
				case 0x00000025:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 3);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000026:
				case 0x00000027:
				case 0x00000028:
				case 0x00000029:
				case 0x0000002A:
				case 0x0000002B:
				case 0x0000002C:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 6);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000002D:
				case 0x0000002E:
				case 0x0000002F:
				case 0x00000030:
				case 0x00000031:
				case 0x00000032:
				case 0x00000033:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 4);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
			}
			bVar2++;
		}
	}
	else if (Global_29006 == Global_30693[0])
	{
		bVar2 = false;
		while (bVar2 <= GET_OBJECTSET_SIZE(bVar8))
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar8);
			switch (bVar2)
			{
				case 0x00000000:
					Function_222(bVar0);
					vLocal_94 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_40 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_94, 10.0f, &vLocal_94, &uVar3);
					break;
				
				case 0x00000001:
					Function_222(bVar0);
					vLocal_365 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_41 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_365, 10.0f, &vLocal_365, &uVar3);
					break;
				
				case 0x00000002:
					Function_222(bVar0);
					vLocal_97 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_43 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_97, 10.0f, &vLocal_97, &uVar3);
					break;
				
				case 0x00000003:
					Function_222(bVar0);
					vLocal_103 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_106 = { StackVal, StackVal, Function_221(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_103, 10.0f, &vLocal_103, &uVar3);
					break;
				
				case 0x00000004:
					Function_222(bVar0);
					vLocal_136 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x00000005:
					Function_222(bVar0);
					vLocal_374 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x00000006:
					Function_222(bVar0);
					vLocal_344 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_347 = { StackVal, StackVal, Function_221(bVar0) };
					break;
				
				case 0x00000007:
					Function_222(bVar0);
					vLocal_350 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_42 = GET_OBJECT_HEADING(bVar0);
					break;
				
				case 0x00000008:
					Function_222(bVar0);
					vLocal_353 = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_103, 10.0f, &vLocal_103, &uVar3);
					break;
				
				case 0x00000009:
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 2);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000010:
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", true);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
				case 0x00000019:
				case 0x0000001A:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", false);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000001B:
				case 0x0000001C:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 3);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x0000001D:
				case 0x0000001E:
				case 0x0000001F:
				case 0x00000020:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 6);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000021:
				case 0x00000022:
				case 0x00000023:
				case 0x00000024:
				case 0x00000025:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 4);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000026:
				case 0x00000027:
				case 0x00000028:
				case 0x00000029:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 7);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
			}
			bVar2++;
		}
	}
	else if (Global_29006 == Global_30668[0])
	{
		if (!Function_128(22, 0))
		{
			bVar7 = iVar6;
		}
		else
		{
			bVar7 = GET_OBJECTSET_SIZE(bVar8);
		}
		bVar2 = false;
		while (bVar2 <= bVar7)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bVar8);
			switch (bVar2)
			{
				case 0x00000000:
					Function_222(bVar0);
					vLocal_94 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_40 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_94, 10.0f, &vLocal_94, &uVar3);
					break;
				
				case 0x00000001:
					Function_222(bVar0);
					vLocal_365 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_41 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_365, 10.0f, &vLocal_365, &uVar3);
					break;
				
				case 0x00000002:
					Function_222(bVar0);
					vLocal_97 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_43 = GET_OBJECT_HEADING(bVar0);
					FIND_GROUND_INTERSECTION(&vLocal_97, 10.0f, &vLocal_97, &uVar3);
					break;
				
				case 0x00000003:
					Function_222(bVar0);
					vLocal_103 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_106 = { StackVal, StackVal, Function_221(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_103, 10.0f, &vLocal_103, &uVar3);
					break;
				
				case 0x00000004:
					Function_222(bVar0);
					vLocal_136 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x00000005:
					Function_222(bVar0);
					vLocal_374 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x00000006:
					Function_222(bVar0);
					vLocal_344 = { StackVal, StackVal, Function_222(bVar0) };
					Function_221(bVar0);
					vLocal_347 = { StackVal, StackVal, Function_221(bVar0) };
					break;
				
				case 0x00000007:
					Function_222(bVar0);
					vLocal_350 = { StackVal, StackVal, Function_222(bVar0) };
					bLocal_42 = GET_OBJECT_HEADING(bVar0);
					break;
				
				case 0x00000008:
					Function_222(bVar0);
					vLocal_353 = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&vLocal_103, 10.0f, &vLocal_103, &uVar3);
					break;
				
				case 0x00000009:
					Function_222(bVar0);
					vLocal_371 = { StackVal, StackVal, Function_222(bVar0) };
					break;
				
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
				case 0x00000010:
				case 0x00000011:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 2);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 8);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000016:
				case 0x00000017:
				case 0x00000018:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 3);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000019:
				case 0x0000001A:
				case 0x0000001B:
				case 0x0000001C:
				case 0x0000001D:
				case 0x0000001E:
				case 0x0000001F:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 6);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
				
				case 0x00000020:
				case 0x00000021:
				case 0x00000022:
				case 0x00000023:
					ADD_OBJECT_TO_OBJECTSET(bVar0, bLocal_446);
					DECOR_SET_INT(bVar0, "FlagType", 5);
					Function_222(bVar0);
					vLocal_148[iVar13] = { StackVal, StackVal, Function_222(bVar0) };
					FIND_GROUND_INTERSECTION(&(vLocal_148[iVar13]), 10.0f, &(vLocal_148[iVar13]), &uVar3);
					iVar1++;
					break;
			}
			bVar2++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		bLocal_20[iVar1] = 4294967295;
		iVar1++;
	}
	bLocal_19 = GET_OBJECTSET_SIZE(bLocal_446);
	return;
}

void Function_315(int iParam0) //Position: 0x14C3A / 85050
{
	int iVar0[3];
	int iVar4;
	
	if (Function_342(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_328(&uLocal_634, &iVar0, "RDR JOB MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_327(iParam0);
			bLocal_648 = true;
			Function_320();
			Function_319();
		}
		else if (iVar4 == 1)
		{
			Function_318(iParam0);
			bLocal_649 = true;
			Function_320();
			Function_319();
		}
		else if (iVar4 == 2)
		{
			Function_320();
			Function_316(iParam0);
			Function_320();
		}
	}
	return;
}

void Function_316(int iParam0) //Position: 0x14CD0 / 85200
{
	Function_317(iParam0);
	return;
}

void Function_317(bool bParam0) //Position: 0x14CDB / 85211
{
	int iVar0;
	
	if (!Function_24(bParam0))
	{
		Function_82();
		return;
	}
	iVar0 = Function_23(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_19("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_318(var uParam0) //Position: 0x14D2E / 85294
{
	bLocal_649 = true;
	if (bLocal_649)
	{
		Function_16(uParam0);
	}
	return;
}

void Function_319() //Position: 0x14D43 / 85315
{
	return;
}

void Function_320() //Position: 0x14D49 / 85321
{
	Function_322();
	Function_321(10, 3);
	return;
}

void Function_321(int iParam0, int iParam1) //Position: 0x14D58 / 85336
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_322() //Position: 0x14E8F / 85647
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_326())
	{
		Function_325(10, 3);
	}
	else
	{
		Function_323();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_39(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_39());
	UI_POP("nDebugMenu");
	return;
}

void Function_323() //Position: 0x14EDA / 85722
{
	Function_324(25, 2);
	return;
}

void Function_324(int iParam0, int iParam1) //Position: 0x14EE6 / 85734
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_325(int iParam0, int iParam1) //Position: 0x150E4 / 86244
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_326() //Position: 0x1521B / 86555
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
				if (!Function_9(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_327(int iParam0) //Position: 0x15282 / 86658
{
	bLocal_648 = true;
	if (bLocal_648)
	{
		Function_26(iParam0, 1, 1, 0);
	}
	return;
}

var Function_328(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1529A / 86682
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_341(&Var15, &Var0);
	uVar20 = Function_340(*uParam1, &Var15);
	Function_339(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_338(uParam0, uVar20);
	Function_336(StackVal, uParam0, Var15.f_12);
	Function_334(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_333(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_330(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_329(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_329(int iParam0, int iParam1, int iParam2) //Position: 0x15361 / 86881
{
	bool bVar0;
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
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_330(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x153BD / 86973
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
				Function_332(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_332(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
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
				Function_329(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_331(bParam1->f_32);
	}
	else
	{
		Function_331(bParam1->f_32);
	}
	return 0;
}

void Function_331(bool bParam0) //Position: 0x15543 / 87363
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_332(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x1557D / 87421
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_333(int iParam0, var uParam1, int iParam2) //Position: 0x1562B / 87595
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_334(var uParam0, int iParam1, int iParam2) //Position: 0x1564F / 87631
{
	switch (Function_335())
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

int Function_335() //Position: 0x156EB / 87787
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

void Function_336(var uParam0, int iParam1, int iParam2) //Position: 0x15727 / 87847
{
	switch (Function_337(uParam0))
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

int Function_337(int iParam0) //Position: 0x157BF / 87999
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_39()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_9(*iParam0, 0x40000000))
		{
			Function_66(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_9(*iParam0, 0x40000000))
		{
			Function_66(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_31(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_39()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_9(*iParam0, 0x20000000))
		{
			Function_66(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_9(*iParam0, 0x20000000))
		{
			Function_66(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_31(iParam0, 0x20000000);
	return 0;
}

var Function_338(var uParam0, int iParam1) //Position: 0x1590A / 88330
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

void Function_339(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x15A59 / 88665
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_340(int iParam0, int iParam1) //Position: 0x15AEC / 88812
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_341(var uParam0, int iParam1) //Position: 0x15B06 / 88838
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1,6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_342(int iParam0) //Position: 0x15B54 / 88916
{
	if (!Function_343(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_343(bool bParam0) //Position: 0x15B68 / 88936
{
	if (bParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_344(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x15B8C / 88972
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
		fVar0 = Function_347(bParam0, Global_34573);
		if (!Function_9(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_345(bParam0);
				return 1;
			}
		}
		if (!Function_9(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_345(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_345(bParam0);
				return 1;
			}
		}
		if (!Function_9(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_345(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_345(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_9(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_345(bParam0);
				return 1;
			}
		}
		if (!Function_9(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_345(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_345(bool bParam0) //Position: 0x15D23 / 89379
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_346(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_346(bool bParam0) //Position: 0x15D57 / 89431
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_347(bool bParam0, bool bParam1) //Position: 0x15D6E / 89454
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

float Function_348(bool bParam0) //Position: 0x15E5F / 89695
{
	if (Function_177(bParam0))
	{
		if (Function_263(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_349() //Position: 0x15F27 / 89895
{
	iLocal_632 = 2;
	return;
}

void Function_350(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x15F31 / 89905
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

void Function_351(bool bParam0) //Position: 0x15F84 / 89988
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, true);
	}
	return;
}

void Function_352(bool bParam0) //Position: 0x15FA8 / 90024
{
	if (Function_177(bParam0))
	{
		if (Function_263(bParam0))
		{
			bParam0->f_4 = (StackVal - GET_CURRENT_GAME_TIME());
			bParam0->f_8 = 0.0f;
			Function_31(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_353(bool bParam0) //Position: 0x1606F / 90223
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, false);
		SET_ACTOR_MAX_SPEED(*bParam0, 5);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, false);
	}
	return;
}

void Function_354(bool bParam0) //Position: 0x16094 / 90260
{
	if (Function_177(bParam0))
	{
		if (!Function_263(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_66(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

vector3 Function_355(struct<41> Param0) //Position: 0x16153 / 90451
{
	vector3 vVar0;
	
	if (bParam26)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_63(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_361(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_359();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_358(Param0.f_20);
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param11.f_28 == 0.0f)
	{
		Param0.f_40 = Param11.f_28;
	}
	if (Param0.f_40 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_40, (-1.0f * Param0.f_40));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_65();
	return StackVal, StackVal, Function_65();
}

void Function_356(struct<33> Param0) //Position: 0x16282 / 90754
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_357(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x163AE / 91054
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_358(bool bParam0) //Position: 0x163FF / 91135
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_359() //Position: 0x164B2 / 91314
{
	float fVar0;
	bool bVar1;
	
	Function_360(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_360(var uParam0, int iParam1) //Position: 0x164C6 / 91334
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_361(bool bParam0) //Position: 0x1654F / 91471
{
	if (bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_362(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x16593 / 91539
{
	iParam0->f_20 = uParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = uParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = uParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = uParam9;
}

void Function_363(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x165CF / 91599
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

bool Function_364(bool bParam0) //Position: 0x165F8 / 91640
{
	bool bVar0;
	vector3 vVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		Function_192(bParam0, 10);
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		Function_192(bParam0, 10);
		return 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vLocal_139);
	}
	if (IS_ACTOR_VALID(bLocal_399))
	{
		if (!Function_258(bLocal_399, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(vLocal_91, vLocal_97) < 25.0f)
		{
			DESTROY_ACTOR(bLocal_399);
		}
	}
	bVar0 = Function_186(bParam0);
	switch (bVar0)
	{
		case 0x00000000:
			Function_192(bParam0, 1);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(bParam0))
			{
				DECOR_SET_BOOL(bParam0, "CanBeLasso", false);
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
			GIVE_WEAPON_TO_ACTOR(bParam0, 21, false, 1, 1);
			ACTOR_SET_NEXT_WEAPON(bParam0, 21);
			TASK_PRIORITY_SET(bParam0, false);
			MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
			Function_192(bParam0, 2);
			break;
		
		case 0x00000002:
			if (IS_ACTOR_MOUNTED(bLocal_396))
			{
				TASK_CLEAR(bLocal_395);
				TASK_CLEAR(bLocal_396);
				TASK_WANDER(bParam0, 3212836864);
				Function_192(bParam0, 3);
			}
			else if (IS_ACTOR_IN_HOGTIE(bLocal_391))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bLocal_396);
				bLocal_398 = bLocal_391;
				TASK_GO_NEAR_ACTOR(bLocal_395, bLocal_398, 4.0f, 4);
				if (IS_ACTOR_VALID(bLocal_398))
				{
					GET_POSITION(bLocal_398, &vLocal_112);
				}
				Function_192(bParam0, 4);
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_IN_HOGTIE(bLocal_391))
			{
				TASK_CLEAR(bLocal_395);
				TASK_CLEAR(bLocal_396);
				bLocal_398 = bLocal_391;
				TASK_GO_NEAR_ACTOR(bLocal_395, bLocal_398, 4.0f, 4);
				if (IS_ACTOR_VALID(bLocal_398))
				{
					GET_POSITION(bLocal_398, &vLocal_112);
				}
				Function_192(bParam0, 4);
			}
			break;
		
		case 0x00000004:
			if (!IS_GRINGO_VALID(bLocal_449))
			{
				bLocal_449 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/hogtie_pickup", &vLocal_112, 5.0f, 0);
			}
			if (IS_GRINGO_VALID(bLocal_449) && IS_ACTOR_ALIVE(bLocal_398))
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bLocal_449), "DisablePlayerCarry", true);
				SET_INTENDED_HOGTIE_MASTER(bLocal_395, bLocal_396);
				SET_LINKED_ANIM_TARGET(bLocal_398, bLocal_396);
				if (IS_ACTOR_VALID(bLocal_398))
				{
					if (VDIST(vLocal_139, vLocal_112) >= 15.0f)
					{
						TASK_CLEAR(bLocal_395);
						bLocal_27 = TASK_SEQUENCE_OPEN();
						TASK_DISMOUNT(false, 1);
						TASK_USE_GRINGO(false, bLocal_449, "Pickup_Ground", true, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_395, bLocal_27);
						TASK_SEQUENCE_RELEASE(bLocal_27, 1);
						TASK_PRIORITY_SET(bParam0, true);
						TASK_STAND_STILL(bLocal_396, -1.0f, 0, 0);
						Function_192(bParam0, 5);
					}
				}
			}
			if (IS_ACTOR_ALIVE(bLocal_398) == 0)
			{
				TASK_CLEAR(bLocal_395);
				TASK_CLEAR(bLocal_396);
				TASK_WANDER(bLocal_395, 3212836864);
				Function_192(bParam0, 2);
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(bLocal_395, 0) != 1)
			{
				if (!Function_365(&bLocal_395, &bLocal_396, 0, 1))
				{
					Function_365(&bLocal_395, &bLocal_396, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_395, 200, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					Function_192(bParam0, 6);
				}
			}
			else if (GET_TASK_STATUS(bLocal_395, 0) != 4 && !Function_258(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				DESTROY_ACTOR(bLocal_398);
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_449));
				Function_192(bParam0, 2);
			}
			break;
		
		case 0x00000006:
			if (GET_ATTACHED_HOGTIE_VICTIM(bLocal_396) == bLocal_398)
			{
				TASK_MOUNT(bLocal_395, bLocal_396, 0, 1, 2, 2147483647);
				Function_192(bParam0, 7);
			}
			else if (GET_TASK_STATUS(bLocal_395, 0) != 4 && !Function_258(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				DESTROY_ACTOR(bLocal_398);
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_449));
				TASK_CLEAR(bLocal_395);
				TASK_MOUNT(bLocal_395, bLocal_396, 0, 1, 2, 2147483647);
				Function_192(bParam0, 2);
			}
			break;
		
		case 0x00000007:
			GET_POSITION(bLocal_396, &vVar1);
			if (IS_ACTOR_MOUNTED(bLocal_396))
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_395, 203, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				TASK_CLEAR(bLocal_396);
				TASK_GO_NEAR_COORD(bLocal_395, &vLocal_97, 10.0f, 3);
				Function_192(bParam0, 8);
			}
			break;
		
		case 0x00000008:
			GET_POSITION(bLocal_396, &vVar1);
			if (VDIST(vVar1, vLocal_97) > 15.0f)
			{
				TASK_CLEAR(bLocal_396);
				TASK_CLEAR(bLocal_395);
				TASK_STAND_STILL(bLocal_396, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_395, -1.0f, 0, 0);
				Function_192(bParam0, 9);
			}
			if ((!Function_258(bLocal_398, 0x3f800000, 0x42960000, 1, 1, 0) && !Function_258(bLocal_395, 0x3f800000, 0x42960000, 1, 1, 0)) && !Function_258(bLocal_396, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (VDIST(vLocal_91, vVar1) < 50.0f)
				{
					DESTROY_ACTOR(bLocal_398);
					DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_449));
					Function_192(bParam0, 2);
				}
			}
			break;
		
		case 0x00000009:
			GET_POSITION(bLocal_396, &vVar1);
			if ((!Function_258(bLocal_398, 0x3f800000, 0x42960000, 1, 1, 0) && !Function_258(bLocal_395, 0x3f800000, 0x42960000, 1, 1, 0)) && !Function_258(bLocal_396, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (VDIST(vLocal_91, vVar1) < 25.0f)
				{
					DESTROY_ACTOR(bLocal_398);
					DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_449));
					Function_192(bParam0, 2);
				}
			}
			if (IS_GRINGO_VALID(bLocal_449))
			{
				TASK_CLEAR(bLocal_395);
				bLocal_28 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 1);
				TASK_USE_GRINGO(false, bLocal_449, "Pickup_Horse", true, 1);
				TASK_GO_NEAR_COORD(false, &vLocal_97, 3.0f, 4);
				TASK_USE_GRINGO(false, bLocal_449, "nDrop_Body", true, 1);
				TASK_MOUNT(false, bLocal_396, 0, 1, 2, 2147483647);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_395, bLocal_28);
				TASK_SEQUENCE_RELEASE(bLocal_28, 1);
				Function_192(bParam0, 11);
			}
			break;
		
		case 0x0000000B:
			if (GET_TASK_STATUS(bLocal_395, 0) != 1)
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_449));
				bLocal_399 = bLocal_398;
				Function_192(bParam0, 2);
			}
			break;
		
		case 0x0000000A:
			break;
		
		default:
			break;
	}
	return 1;
}

bool Function_365(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x16BD1 / 93137
{
	var uVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	
	if (!IS_ACTOR_VALID(*bParam0))
	{
		LOG_ERROR("HOGTIE CARRIER not valid.");
		return 0;
	}
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("HOGTIE VICTIM not valid.");
		return 0;
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(*bParam0, "head", &uVar0))
	{
		LOG_ERROR("NAMED BONE not valid for actor.");
		return 0;
	}
	iVar3 = 0;
	bVar5 = GET_ATTACHED_HOGTIE_VICTIM(*bParam0);
	if (IS_ACTOR_VALID(bVar5))
	{
		bVar4 = GET_GRINGO_FROM_OBJECT(DECOR_GET_OBJECT(bVar5, "HogtieGringoAttached"));
	}
	while (!IS_GRINGO_VALID(bVar4) && iVar3 > 5)
	{
		GET_OBJECT_NAMED_BONE_POSITION(*bParam0, "head", &uVar0);
		bVar4 = LOCATE_GRINGO_OF_TYPE("hogtie_pickup", &uVar0, 0,5f, 1);
		iVar3++;
	}
	if (iVar3 > 5)
	{
		return 0;
	}
	TASK_PRIORITY_SET(*bParam1, true);
	TASK_STAND_STILL(*bParam1, -1.0f, 0, 0);
	bVar6 = GET_HEADING(*bParam1);
	vVar7 = { 0.0f, 0.0f, 0.0f };
	if (bParam2)
	{
		GET_OBJECT_RELATIVE_POSITION(*bParam1, 1,0011f, 0,0002f, 0,2262f, &vVar7);
		DECOR_SET_BOOL(*bParam0, "Hogtie_PutOnHorse_L", false);
		bVar6 = (bVar6 + 90.0f);
	}
	else
	{
		GET_OBJECT_RELATIVE_POSITION(*bParam1, -1,3385f, 0,0002f, 0,0723f, &vVar7);
		DECOR_SET_BOOL(*bParam0, "Hogtie_PutOnHorse_L", true);
		bVar6 = (bVar6 + 250.0f);
	}
	bVar10 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_PRECISELY(0, &vVar7, iParam3, bVar6, 0,1f, 0.0f, 0, 0);
	TASK_USE_GRINGO(false, bVar4, "PutOn_Horse", true, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(*bParam0, bVar10);
	TASK_SEQUENCE_RELEASE(bVar10, 1);
	return 1;
}

void Function_366(bool bParam0) //Position: 0x16DD6 / 93654
{
	bool bVar0;
	bool bVar1;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		if (IS_ITERATOR_VALID(bVar0))
		{
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				while (IS_OBJECT_VALID(bVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar1)))
					{
						if ((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1030 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1031) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1032) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1037) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1038) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1039) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1040)
						{
							DESTROY_OBJECT(bVar1);
						}
					}
					bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
				}
			}
			DESTROY_ITERATOR(bVar0);
		}
	}
	return;
}

bool Function_367(bool bParam0, float fParam1) //Position: 0x16E9B / 93851
{
	if (Function_177(bParam0))
	{
		if (Function_348(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_368(bool bParam0) //Position: 0x16EB7 / 93879
{
	Function_226(bParam0, 0.0f);
	return;
}

bool Function_369(struct<10> Param0) //Position: 0x16EC3 / 93891
{
	iLocal_60 = 0;
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iLocal_622 = iLocal_622;
	Function_296(Global_34573, 0);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (Function_177(&bLocal_494) == 0)
	{
		Function_368(&bLocal_494);
	}
	if (Function_177(&bLocal_503) == 0)
	{
		Function_368(&bLocal_503);
	}
	if (Function_177(&bLocal_485) == 0)
	{
		Function_368(&bLocal_485);
	}
	if (Function_177(&bLocal_500) == 0)
	{
		Function_368(&bLocal_500);
	}
	bLocal_389 = GET_PLAYER_ACTOR(0);
	if (IS_ACTOR_VALID(bLocal_389))
	{
		GET_POSITION(bLocal_389, &vLocal_91);
	}
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 0);
	if (IS_ACTOR_DRUNK(Global_34573))
	{
		SET_ACTOR_DRUNK(Global_34573, 0);
	}
	if (iLocal_47 == 0)
	{
		if (!IS_OBJECTSET_VALID(bLocal_446))
		{
			bLocal_446 = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), bLocal_418, 8, 0);
		}
		if (!IS_OBJECTSET_VALID(bLocal_447))
		{
			bLocal_447 = CREATE_OBJECTSET_IN_LAYOUT(Function_43(), bLocal_418, 9, 0);
		}
		iLocal_47 = 1;
	}
	HUD_CLEAR_HELP();
	return 1;
}

bool Function_370(struct<10> Param0) //Position: 0x16F9A / 94106
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return 1;
}

void Function_371(var uParam0) //Position: 0x16FAD / 94125
{
	uParam0->f_28 = 0;
	uParam0->f_24 = -1.0f;
	Function_376(1);
	Function_290(28);
	Function_374(0, 0);
	Function_2(1);
	Function_373(StackVal, 1, 10);
	Function_372();
	ACTOR_HOLSTER_WEAPON(Global_34573, 1);
	if (Global_29006 == Global_30717[0])
	{
		SET_POP_DENSITY_MULTIPLIER(0,25f);
	}
	else
	{
		SET_POP_DENSITY_MULTIPLIER(0,5f);
	}
	if (Global_29006 == Global_30668[0])
	{
		vLocal_383 = { -813,79f, 92,84f, 2420,51f };
	}
	else if (Global_29006 == Global_30717[0])
	{
		vLocal_383 = { 687,02f, 78,31f, 1378,38f };
	}
	else if (Global_29006 == Global_30693[0])
	{
		vLocal_383 = { -2739,24f, 32,45f, 4260,57f };
		bLocal_410 = LOCATE_NAMED_ACTOR(-2730,673f, 32,29004f, 4250,744f, 5.0f, "nBankWagon", 0);
	}
	Function_66(&uLocal_35, 1);
	Function_66(&uLocal_35, 16);
	return;
}

void Function_372() //Position: 0x17099 / 94361
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_373(bool bParam0, int iParam1, int iParam2) //Position: 0x170AD / 94381
{
	if (bParam0)
	{
		PRINTSTRING("CALLING DESTROY GC OBJECTS!");
		PRINTNL();
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAR_ALL_CORPSES();
	Function_92();
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(iParam1);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_372();
	STREAMING_EVICT_ALL();
	iParam2 = iParam2;
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_270(&bLocal_641, "jobs", 10, 0);
	Function_290(8192);
	return;
}

void Function_374(int iParam0, int iParam1) //Position: 0x1711E / 94494
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_375(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_375(int iParam0) //Position: 0x171A0 / 94624
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_376(int iParam0) //Position: 0x171EE / 94702
{
	Function_377(&Global_28842, iParam0);
	return;
}

void Function_377(var uParam0, bool bParam1) //Position: 0x171FC / 94716
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

int Function_378(struct<10> Param0) //Position: 0x1721F / 94751
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	GET_POSITION(Global_34573, &vLocal_91);
	if (!bLocal_50)
	{
		bLocal_621 = Function_382(StackVal, 1, 6);
		Function_381(bLocal_621, 1);
		bLocal_50 = true;
	}
	if (!Function_379(64, 0, 4294967295, 0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(bLocal_418))
	{
		bLocal_418 = CREATE_LAYOUT("nightwatchLayout");
	}
	if (!IS_VOLUME_VALID(bLocal_431))
	{
		bLocal_431 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "IntroCutscene", 2, vLocal_91, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
		bLocal_432 = CREATE_VOLUME_IN_LAYOUT(bLocal_418, "IntroHorse", 2, vLocal_91, 0.0f, 0.0f, 0.0f, 50.0f, 50.0f, 50.0f);
		bLocal_409 = GET_ACTORS_HORSE(Global_34573);
		if (IS_ACTOR_VALID(bLocal_409))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_409, bLocal_432))
			{
				Function_296(bLocal_409, 0);
			}
		}
	}
	bLocal_389 = GET_PLAYER_ACTOR(0);
	if (!iLocal_46)
	{
		iLocal_46 = 1;
		Function_272(&bLocal_506, 976, 3, 0);
		if (Global_29006 == Global_30668[0])
		{
			Function_272(&bLocal_506, 35, 3, 0);
			Function_272(&bLocal_506, 436, 3, 0);
			Function_272(&bLocal_506, 1037, 3, 0);
			Function_270(&bLocal_506, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
		}
		if (Global_29006 == Global_30717[0])
		{
			Function_272(&bLocal_506, 184, 3, 0);
			Function_272(&bLocal_506, 185, 3, 0);
			Function_272(&bLocal_506, 1045, 3, 0);
		}
		if (Global_29006 == Global_30693[0])
		{
			Function_272(&bLocal_506, 396, 3, 0);
			Function_272(&bLocal_506, 1033, 3, 0);
			Function_272(&bLocal_506, 460, 2, 0);
			Function_270(&bLocal_506, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
		}
		Function_270(&bLocal_506, "jobs", 10, 0);
		Function_270(&bLocal_506, "custom/dog_sniffing", 8, 0);
	}
	if (Function_268() == 1)
	{
		DELETE_PROJECTILES_IN_VOLUME(bLocal_431);
		if (IS_ACTOR_VALID(bLocal_410))
		{
			DESTROY_ACTOR(bLocal_410);
		}
	}
	else
	{
		return 0;
	}
	Function_267(1);
	return 1;
}

bool Function_379(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17494 / 95380
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_380(Global_30750[0], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_380(Global_30750[1], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_380(Global_30750[2], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_380(Global_30750[3], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_380(Global_30750[4], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_380(Global_30750[5], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_380(Global_30750[6], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_380(Global_30750[7], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_380(Global_30750[8], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_380(Global_30750[9], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_380(Global_30750[10], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_380(Global_30750[11], bParam1, bParam2, bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_380(Global_30750[12], bParam1, bParam2, bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_380(Global_30750[13], bParam1, bParam2, bParam3);
			break;
		
		case 0x40000000:
			iVar0 = 0;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_380(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1765C / 95836
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_381(int iParam0, int iParam1) //Position: 0x17683 / 95875
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_24(iParam0))
	{
		Function_82();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_23(iParam0);
	if (StackVal != 2)
	{
		Function_19("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_30(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_21(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_18(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_17(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

int Function_382(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17793 / 96147
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_386(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_383(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_383(bParam0, bParam1, bParam2, 4294967295);
}

int Function_383(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x177F1 / 96241
{
	var uVar0;
	
	if (!Function_385(bParam2))
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
	uVar0 = Function_386(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_384(uVar0);
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

int Function_384(int iParam0) //Position: 0x17946 / 96582
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

bool Function_385(int iParam0) //Position: 0x17984 / 96644
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_386(int iParam0, int iParam1, int iParam2) //Position: 0x17999 / 96665
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_387(bool bParam0, bool bParam1) //Position: 0x179B9 / 96697
{
	GET_POSITION(bParam0, bParam1);
	return;
}

