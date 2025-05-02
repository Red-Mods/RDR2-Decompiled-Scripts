//Decompiled with MagicRDR v1.0
//Function Count : 287
//Statics Count : 745
//Natives Count : 403
//Parameters Count : 62

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	struct<4> Local_5[12];
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
	var uLocal_103 = 20;
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
	int iLocal_191 = 0;
	int iLocal_192 = 0;
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
	var uLocal_208 = 6;
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
	var uLocal_230 = 2;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	struct<85> Local_249 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
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
	int iLocal_348 = 0;
	var uLocal_349[4] = { 0, 0, 0, 0 };
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 4;
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
	int iLocal_373 = 0;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	char* cLocal_384[16] = "";
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	bool bLocal_395 = false;
	bool bLocal_396 = false;
	bool bLocal_397 = false;
	bool bLocal_398 = false;
	bool bLocal_399 = false;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	int iLocal_402 = 0;
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
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
	var uLocal_425 = 3;
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
	var uLocal_452 = 3;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 3;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 3;
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
	var uLocal_506 = 3;
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
	var uLocal_533 = 3;
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
	var uLocal_561 = 3;
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
	var uLocal_587 = 3;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 3;
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
	var uLocal_621 = 0;
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
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	bool bLocal_682 = false;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3[1];
	int iVar5[1];
	var uVar7;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	float fVar47;
	int iVar48;
	var uVar49;
	int iVar50;
	bool bVar51;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_240 = 0;
	iLocal_241 = 0;
	iLocal_283 = 0;
	iLocal_286 = 0;
	iLocal_348 = 1;
	iLocal_375 = 0;
	strcpy(&cLocal_384, "thief", 16);
	iLocal_392 = 0;
	iLocal_393 = 0;
	iLocal_394 = 0;
	bLocal_395 = false;
	bLocal_396 = false;
	bLocal_397 = false;
	bLocal_398 = false;
	bLocal_399 = true;
	bLocal_403 = false;
	bLocal_404 = false;
	bLocal_405 = false;
	bLocal_682 = false;
	iVar0 = 0;
	uVar1 = CREATE_LAYOUT(Function_286());
	uVar7 = 16;
	Function_285(&uLocal_369, 0.0f);
	bVar40 = false;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar46 = 0;
	fVar47 = 0.0f;
	if (!IS_POPSET_VALID(&(Global_46972[0])))
	{
		iVar0 = 5;
	}
	else
	{
		Function_283(&uVar7, "Dueling/duel_Easy_A_npc", 8, 0);
		Function_283(&uVar7, "Dueling/duel_Easy_B_npc", 8, 0);
		Function_283(&uVar7, "spit_to_duel", 5, 0);
		Function_283(&uVar7, "custom/spit_to_duel", 8, 0);
		Function_283(&uVar7, "stand_ambient", 5, 0);
		Function_283(&uVar7, "custom/stand_ambient", 8, 0);
		Function_283(&uVar7, "stand_guntricks_e_any", 1, 0);
		Function_283(&uVar7, "ready2_duel_challenger", 5, 0);
		Function_283(&uVar7, "custom/ready2_duel_challenger", 8, 0);
		iVar48 = Function_282(10, 4);
		switch (Global_43787)
		{
			case 0x00000000:
				if (iVar48 == 0)
				{
					iVar5[0] = 140;
				}
				else if (iVar48 == 1)
				{
					iVar5[0] = 141;
				}
				else if (iVar48 == 2)
				{
					iVar5[0] = 139;
				}
				else
				{
					iVar5[0] = 142;
				}
				break;
			
			case 0x00000001:
				if (iVar48 == 0)
				{
					iVar5[0] = 281;
				}
				else if (iVar48 == 1)
				{
					iVar5[0] = 278;
				}
				else if (iVar48 == 2)
				{
					iVar5[0] = 281;
				}
				else
				{
					iVar5[0] = 278;
				}
				break;
			
			case 0x00000002:
				if (iVar48 == 0)
				{
					iVar5[0] = 140;
				}
				else if (iVar48 == 1)
				{
					iVar5[0] = 141;
				}
				else if (iVar48 == 2)
				{
					iVar5[0] = 139;
				}
				else
				{
					iVar5[0] = 142;
				}
				break;
		}
		Function_281(&uVar7, iVar5[0], 3, 0);
		Function_280(&iVar5, 1);
		iVar45 = 0;
		while (iVar45 <= 4)
		{
			uLocal_349[iVar45] = Function_278(&(Global_46972[0]), 1, 0, 1);
			if (uLocal_349[iVar45] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_281(&uVar7, uLocal_349[iVar45], 3, 0);
			}
			iVar45++;
		}
		if (iVar0 != 5)
		{
			Function_280(&uLocal_349, 4);
		}
		if (Global_6625 == 1)
		{
			iVar0 = 5;
		}
	}
	iVar50 = 0;
	bVar51 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar44 = 600;
		if (Function_277(&bVar51, &iVar0, &iVar50, &iVar44, bVar40))
		{
			if (bVar51)
			{
				Function_275(&uVar3, 4294967295);
			}
			else
			{
				if (iVar46 >= 3)
				{
					iVar0 = 6;
				}
				Function_273(&uVar3, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_267(&uVar7))
				{
					iVar0 = 1;
					iVar44 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_263(StackVal, ScriptParam_0.f_40, ScriptParam_0.f_60, &Local_291, &iLocal_347, Vector(0.0f, 0.0f, 0.0f), 1))
				{
					*(&ScriptParam_0 + 16) = Local_291;
					*(&ScriptParam_0 + 28) = *(&Local_291 + 12);
					iVar0 = 2;
					iVar44 = 0;
				}
				else
				{
					iVar0 = 5;
					iVar44 = 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_259(ScriptParam_0.f_64, 0, &iVar41, &bLocal_403, 0, 1, 1, 1))
				{
					iVar0 = 5;
					iVar44 = 0;
					break;
				}
				if ((StackVal || Function_257(VDIST(Global_54078, *(&ScriptParam_0 + 16)) > Function_258(), *(&ScriptParam_0 + 16), 1.0f, 65.0f, 1, 1, 0)) && !ScriptParam_0.f_40)
				{
					PRINTVECTOR(*(&ScriptParam_0 + 16));
					PRINTNL();
					PRINTVECTOR(Global_54078);
					PRINTNL();
					iVar0 = 5;
					iVar44 = 0;
					break;
				}
				uLocal_400 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, &uVar1, Function_286(), "stand_guntricks_e_any", Vector(*(&ScriptParam_0 + 16), 0.0f, 0.0f));
				memcpy(&cLocal_384, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255("duel"), 4);
				uVar3[0] = CREATE_ACTOR_IN_LAYOUT(&uVar1, &cLocal_384, iVar5[0], *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
				DECOR_SET_BOOL(&(uVar3[0]), "nnostickup", 1);
				DECOR_SET_STRING(&(uVar3[0]), "TAUNT_AUDIO", "DUEL");
				TASK_USE_GRINGO(&(uVar3[0]), GET_GRINGO_FROM_OBJECT(&uLocal_400), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(&(uVar3[0]), &uLocal_400, "UseCase1", 0, 0, 0);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&(uVar3[0]), 0);
				ACTOR_ENABLE_VARIABLE_MESH(&(uVar3[0]), 5, 1);
				ACTOR_FORCE_WEAPON_RENDER(&(uVar3[0]), 1, 1);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar3[0]), false);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[0]), 0);
				UNK_0x99AFD2D1(&(uVar3[0]), 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&(uVar3[0]));
				GIVE_WEAPON_TO_ACTOR(&(uVar3[0]), 4, 0f, 1, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&(uVar3[0]), &Global_54076, -1.0f, 0);
				iVar0 = 3;
				iVar44 = 0;
				if (!Function_252(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40))
				{
					iVar0 = 5;
					iVar44 = 0;
					break;
				}
				uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_286(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
				DECOR_SET_INT(&uVar2, "script", GET_THIS_SCRIPT_ID());
				Function_247(&uVar2, ScriptParam_0.f_40);
				break;
			
			case 0x00000003:
				if (!Function_259(ScriptParam_0.f_64, &(uVar3[0]), &iVar41, &bLocal_403, bLocal_395, 1, 1, 1))
				{
					if (bLocal_395 == 1)
					{
						Function_244("duelHelp05", bLocal_395, 1);
						if (IS_OBJECT_VALID(&iLocal_373))
						{
							Function_243(&iLocal_373);
						}
					}
					iVar0 = 5;
					iVar44 = 0;
					break;
				}
				if (IS_ACTOR_VALID(&(uVar3[0])))
				{
					if (Function_242(&Global_54076, &(uVar3[0])) < Function_240(1))
					{
						if (bLocal_395 == 1)
						{
							Function_244("duelHelp05", bLocal_395, 1);
							if (IS_OBJECT_VALID(&iLocal_373))
							{
								Function_243(&iLocal_373);
							}
						}
						iVar0 = 5;
						iVar44 = 0;
						break;
					}
					else if (Function_237(&(uVar3[0]), &iLocal_402, &fVar47, uVar49, 0, 0x40400000) && !iLocal_393)
					{
						if (IS_OBJECT_VALID(&iLocal_373))
						{
							Function_243(&iLocal_373);
						}
						switch (iLocal_402)
						{
							case 0x00000001:
								Function_244("duelHelp03", bLocal_395, 1);
								bLocal_403 = true;
								break;
							
							case 0x00000002:
								Function_244("duelHelp04", bLocal_395, 1);
								bLocal_404 = true;
								break;
							
							case 0x00000010:
								Function_244("duelHelp04", bLocal_395, 1);
								if (bLocal_395 || iVar46 < 4)
								{
									bLocal_404 = true;
								}
								else
								{
									bLocal_403 = true;
								}
								break;
							
							case 0x00000004:
								Function_244("duelHelp10", bLocal_395, 1);
								bLocal_404 = true;
								break;
							
							case 0x00000008:
								if (GET_LAST_HIT_FLAGS(&(uVar3[0])) != 1)
								{
									Function_236(&(uVar3[0]));
								}
								if (bLocal_395)
								{
									Function_233(4294967196, 1, 0);
								}
								Function_244("duelHelp02", bLocal_395, 1);
								bLocal_403 = true;
								break;
						}
						iVar0 = 5;
						iVar44 = 0;
						break;
					}
				}
				if (Function_231(&(uVar3[0]), 0))
				{
					if (Function_242(&Global_54076, &(uVar3[0])) < Function_240(1))
					{
						if (bLocal_395 == 1)
						{
							Function_230("duelHelp05", 0x41200000, 1, 0, 2, 1, 0);
							if (IS_OBJECT_VALID(&iLocal_373))
							{
								Function_243(&iLocal_373);
							}
						}
						iVar0 = 5;
						break;
					}
				}
				else if (!iLocal_393)
				{
					if (GET_LAST_ATTACKER(&(uVar3[0])) == &Global_54076)
					{
						Function_233(4294967196, 1, 0);
					}
					iVar0 = 5;
				}
				if (IS_ACTOR_VALID(&(uVar3[0])) && !iLocal_393)
				{
					if (GET_LAST_ATTACKER(&(uVar3[0])) == &Global_54076)
					{
						Function_233(4294967196, 1, 0);
						iVar0 = 5;
						Function_230("duelHelp02", 0x41200000, 1, 0, 2, 1, 0);
						if (IS_OBJECT_VALID(&iLocal_373))
						{
							Function_243(&iLocal_373);
						}
					}
				}
				if (Function_109(&iVar46, &uVar3, &uVar1, &iVar41, &iVar44, ScriptParam_0.f_40))
				{
					iVar0 = 5;
					iVar44 = 0;
				}
				if (iVar46 >= 0)
				{
					Function_108();
					Function_96(StackVal, Function_108(), &bVar40, ScriptParam_0.f_64, &(uVar3[0]), 100, 0x42a00000, 1);
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar44 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar44 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar44);
		}
	}
	if (bLocal_396)
	{
		Function_26(&uLocal_406);
	}
	Function_273(&uVar3, 4294967295);
	if (bLocal_682)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_287))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_287);
	}
	if (IS_VOLUME_VALID(&uLocal_289))
	{
		DESTROY_VOLUME(&uLocal_289);
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (bLocal_398)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&uLocal_382))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_382);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&uLocal_382))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_382);
		}
		Function_25();
	}
	if (iLocal_392 && !bLocal_397)
	{
		Function_10(453, 1, 0, 0);
	}
	if (!bVar40)
	{
		if (Function_231(&(uVar3[0]), 0))
		{
			TASK_WANDER(&(uVar3[0]), -1.0f);
			TASK_PRIORITY_SET(&(uVar3[0]), 2);
		}
		if (IS_OBJECT_VALID(&uVar1))
		{
			UNK_0xA936E73B(&uVar1, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar1, 1);
		}
		Function_252(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	if (Function_231(&(uVar3[0]), 0))
	{
		if (DECOR_CHECK_EXIST(&(uVar3[0]), "nnostickup"))
		{
			DECOR_REMOVE(&(uVar3[0]), "nnostickup");
		}
		AI_GOAL_LOOK_CLEAR(&(uVar3[0]));
		if (IS_MOVER_FROZEN(&(uVar3[0])))
		{
			SET_MOVER_FROZEN(&(uVar3[0]), 0);
		}
		Function_9(&(uVar3[0]));
		Function_8(&(uVar3[0]), 4294967196);
		RESET_ANIM_SET_FOR_ACTOR(&(uVar3[0]), 1);
		if (bLocal_403)
		{
			TASK_FLEE_ACTOR(&(uVar3[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		}
		else if (bLocal_404)
		{
			Function_7(&(uVar3[0]), &Global_54076);
		}
		else if (bLocal_405)
		{
			TASK_TAUNT_ACTOR_IN_PLACE(&(uVar3[0]), &Global_54076, 11.0f);
		}
		else
		{
			TASK_WANDER(&(uVar3[0]), -1.0f);
		}
		Function_6(&(uVar3[0]));
		AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uVar3[0]), 1);
		UNK_0x99AFD2D1(&(uVar3[0]), 0, 0);
	}
	if (IS_BLIP_VALID(&uLocal_378))
	{
		REMOVE_BLIP(&uLocal_378);
	}
	if (IS_OBJECT_VALID(&iLocal_373))
	{
		Function_243(&iLocal_373);
	}
	Function_2(&uVar7);
	Function_1(&iVar5, 1);
	Function_1(&uLocal_349, 4);
	RELEASE_LAYOUT_REF(&uVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var[] uParam0, int iParam1) //Position: 0xAF6 / 2806
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

void Function_2(int iParam0) //Position: 0xB19 / 2841
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0xB41 / 2881
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0xC8C / 3212
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0xCA9 / 3241
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0xCC7 / 3271
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

int Function_7(var uParam0, int iParam1) //Position: 0xD1A / 3354
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

void Function_8(var uParam0, bool bParam1) //Position: 0xE10 / 3600
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_9(int iParam0) //Position: 0xE32 / 3634
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_REMOVE(&iParam0, "nocrime");
	}
	return;
}

int Function_10(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xE67 / 3687
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
	Function_24(iParam0, TO_FLOAT(bParam1), 1);
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_11(iParam0);
	return 1;
}

void Function_11(bool bParam0) //Position: 0x108F / 4239
{
	switch (bParam0)
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

void Function_12(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x112D / 4397
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_21(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_21(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_19(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_16(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_14(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_13(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_286(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_13(int iParam0) //Position: 0x176B / 5995
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_14(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x177C / 6012
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_15(char* cParam0) //Position: 0x1873 / 6259
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_16(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x188E / 6286
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_18(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_17(Function_18(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_17(int iParam0, int iParam1) //Position: 0x18F5 / 6389
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_18(int iParam0, int iParam1) //Position: 0x1907 / 6407
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_19(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1919 / 6425
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
	if (((Function_20(iParam0) != 19 || Function_20(iParam0) != 17) || Function_20(iParam0) != 10) || Function_20(iParam0) != 9)
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

int Function_20(int iParam0) //Position: 0x1A4D / 6733
{
	return Global_55480[iParam016].f_96;
}

float Function_21(int iParam0) //Position: 0x1A5C / 6748
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_22(int iParam0) //Position: 0x1A95 / 6805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_23(int iParam0) //Position: 0x1AD2 / 6866
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

int Function_24(int iParam0, float fParam1, bool bParam2) //Position: 0x1C6C / 7276
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_25() //Position: 0x1EB0 / 7856
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_ACTORSET_VALID(&uLocal_284))
	{
		iVar0 = GET_OBJECTSET_SIZE(&uLocal_284);
		bVar1 = false;
		while (bVar1 <= iVar0)
		{
			uVar2 = GET_ACTOR_FROM_ACTORSET(&uLocal_284, bVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uVar2, 1);
			}
			bVar1++;
		}
		DESTROY_ACTORSET(&uLocal_284);
	}
	return;
}

void Function_26(struct<1093> Param0) //Position: 0x1F00 / 7936
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
		if (Function_95(Param0.f_1048, 32768))
		{
			Function_94(256);
		}
	}
	Function_93();
	Function_91(1);
	if (Function_95(Param0.f_1048, 32))
	{
		if (Function_89(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_45(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_42(Param0.f_1092);
					break;
				
				default:
					Function_33(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_27(&Param0, 0);
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
	if (Function_95(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_95(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_27(int iParam0, bool bParam1) //Position: 0x2080 / 8320
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_32(&iParam0 + 1024);
		Function_30(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_29(&iParam0 + 1024);
			Function_32(&iParam0 + 1024);
			Function_28(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_30(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_28(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x20F7 / 8439
{
	int iVar0;
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
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		iVar0++;
	}
}

void Function_29(int iParam0) //Position: 0x2170 / 8560
{
	int iVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0));
		iVar0++;
	}
	return;
}

void Function_30(var uParam0, bool bParam1, bool bParam2) //Position: 0x21A8 / 8616
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_31(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
			iVar0++;
		}
	}
	return;
}

bool Function_31(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2231 / 8753
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_32(int iParam0) //Position: 0x2251 / 8785
{
	int iVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0));
		iVar0++;
	}
	return;
}

void Function_33(int iParam0) //Position: 0x2286 / 8838
{
	int iVar0;
	
	if (!Function_89(iParam0))
	{
		Function_40();
		return;
	}
	iVar0 = Function_39(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_34("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x22D9 / 8921
{
	struct<4> Var0;
	
	if (!Function_89(iParam1))
	{
		return;
	}
	switch (Function_39(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_35(Function_37(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_39(iParam1), Function_37(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_39(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_39(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_39(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_39(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_39(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_35(int iParam0) //Position: 0x2403 / 9219
{
	char* cVar0[16];
	
	if (!Function_36())
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

bool Function_36() //Position: 0x243D / 9277
{
	if (Function_95(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_37(int iParam0) //Position: 0x2458 / 9304
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_38(int iParam0) //Position: 0x2478 / 9336
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_39(int iParam0) //Position: 0x248F / 9359
{
	if (!Function_38(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_40() //Position: 0x24AA / 9386
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
			Function_41(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_41(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x26F1 / 9969
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_42(int iParam0) //Position: 0x271D / 10013
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_89(iParam0))
	{
		return;
	}
	iVar0 = Function_39(iParam0);
	if (StackVal == 2)
	{
		Function_34("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_43(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_43(int iParam0) //Position: 0x27C3 / 10179
{
	char* cVar0[16];
	
	if (!Function_36())
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

struct<24> Function_44(char* cParam0) //Position: 0x2802 / 10242
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

void Function_45(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2A58 / 10840
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_89(iParam0))
	{
		Function_40();
		return;
	}
	iVar0 = Function_39(iParam0);
	if (!iVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_88())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_10966 = Function_37(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_43(Global_10966) };
		}
		if (Function_88())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_82();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_88())
	{
		Function_81();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_34("DEED_COMPLETE", iParam0);
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
			Function_76(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
						switch (Function_37(iParam0))
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
			Function_48(1);
			Function_47(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_46(iParam0, &Var14);
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

void Function_46(int iParam0, struct<41> Param1) //Position: 0x2CB6 / 11446
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_47(bool bParam0, int iParam1) //Position: 0x2CF4 / 11508
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

void Function_48(bool bParam0) //Position: 0x2D33 / 11571
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_66();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_50();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_49(&Global_99144, 1);
		Function_49(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_49(int iParam0, int iParam1) //Position: 0x2D88 / 11656
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_50() //Position: 0x2D9E / 11678
{
	Function_64();
	Function_63();
	Function_63();
	Function_62();
	Function_62();
	Function_61();
	Function_61();
	Function_58(0);
	Function_58(0);
	Function_55();
	Function_54();
	Function_53();
	Function_52();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_51();
	return;
}

void Function_51() //Position: 0x2DE9 / 11753
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

void Function_52() //Position: 0x2EEF / 12015
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

void Function_53() //Position: 0x2F22 / 12066
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

void Function_54() //Position: 0x30B5 / 12469
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

void Function_55() //Position: 0x326E / 12910
{
	Function_56(&Global_42918, 1, 0);
	return;
}

void Function_56(struct<2317> Param0) //Position: 0x327C / 12924
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_57();
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[iVar3] = _GET_AMMO_AMOUNT(&uVar0, iVar3, 0);
			iVar3++;
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

var Function_57() //Position: 0x3499 / 13465
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_58(int iParam0) //Position: 0x34AE / 13486
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
					iVar2 = ((Function_60((50 + iVar4)) + Function_60((183 + iVar4))) + Function_60((90 + iVar4)));
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
	Function_59(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_59(int iParam0, bool bParam1, bool bParam2) //Position: 0x3555 / 13653
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
		Function_24(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_23(iParam0);
	if (&bParam2)
	{
		Function_12(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_60(int iParam0) //Position: 0x37F1 / 14321
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

struct<8> Function_61() //Position: 0x3832 / 14386
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
		iVar2 = ((Function_60((50 + iVar3) + 15) + Function_60((183 + iVar3) + 15)) + Function_60((90 + iVar3) + 15));
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
	Function_59(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_62() //Position: 0x38BB / 14523
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
			iVar2 = ((Function_60((50 + iVar3) + 8) + Function_60((183 + iVar3) + 8)) + Function_60((90 + iVar3) + 8));
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
	Function_59(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_63() //Position: 0x3952 / 14674
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
		iVar2 = ((Function_60((50 + iVar3)) + Function_60((183 + iVar3))) + Function_60((90 + iVar3)));
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
	Function_59(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_64() //Position: 0x39D1 / 14801
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_65(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_59(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_65(int iParam0, float fParam1, int iParam2) //Position: 0x3A0E / 14862
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_24(iParam0, fParam1, 1);
	Function_23(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_12(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_66() //Position: 0x3C1A / 15386
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_36())
	{
		Function_73(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_73(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_68(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_68(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_67(StackVal, Var0))
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

bool Function_67(char* cParam0) //Position: 0x3CD1 / 15569
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_68(var uParam0, var uParam1, float fParam2, float fParam3) //Position: 0x3CE9 / 15593
{
	int iVar0;
	
	iVar0 = Function_71(&fParam2, &fParam3);
	if (Function_70(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_69(&Global_99144, 1);
			Function_49(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_69(&Global_99144, 2);
			Function_49(&Global_99144, 1);
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
		Function_69(&Global_99144, 2);
		Function_49(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_108();
	return StackVal, Function_108();
}

void Function_69(var uParam0, int iParam1) //Position: 0x3DE1 / 15841
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_70(int iParam0) //Position: 0x3DF2 / 15858
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_71(bool bParam0, bool bParam1) //Position: 0x3E08 / 15880
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
				fVar2 = Function_72(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_72(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_70(iVar0) && !&bParam1)
	{
		iVar0 = Function_71(&bParam0, 1);
	}
	return iVar0;
}

float Function_72(struct<2> Param0, struct<2> Param2) //Position: 0x3ED4 / 16084
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_73(float fParam0, int iParam1) //Position: 0x3EF1 / 16113
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_75(&Global_54076, &Var3);
	if (!Function_74(Global_46760[0]))
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
	if (!Function_74(Global_46760[2]))
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
	if (!Function_74(Global_46760[1]))
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
	if (!Function_74(Global_46796[1]))
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
	if (!Function_74(Global_46796[3]))
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
	if (!Function_74(Global_46796[2]))
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
	if (!Function_74(Global_46796[4]))
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
	if (!Function_74(Global_46816[0]))
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
	if (!Function_74(Global_46816[1]))
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
	if (!Function_74(Global_46816[2]))
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
	if (!Function_74(Global_46838[0]))
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
	if (!Function_74(Global_46850[0]))
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
	if (!Function_74(Global_46850[1]))
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
	if (!Function_74(Global_46850[2]))
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
	if (!Function_74(Global_46866[0]))
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
	if (!Function_74(Global_46866[1]))
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
	if (!Function_74(Global_46866[2]))
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
	if (!Function_74(Global_46894[2]))
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
	if (!Function_74(Global_46894[3]))
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
	if (!Function_74(Global_46894[0]))
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
	if (!Function_74(Global_46914[0]))
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
	if (!Function_74(Global_46926[2]))
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
	if (!Function_74(Global_46926[1]))
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
	if (!Function_74(Global_46926[0]))
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
	if (!Function_74(Global_46838[1]))
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
	if (!Function_74(Global_46894[1]))
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
	Function_69(&Global_99144, 2);
	Function_49(&Global_99144, 1);
	iParam1 = 0;
	if (Function_67(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_74(int iParam0) //Position: 0x4720 / 18208
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_95(uVar0, 0x1000000) || Function_95(uVar0, 0x2000000)) || Function_95(uVar0, 0x4000000)) || !Function_95(uVar0, 0x10000000));
}

void Function_75(var uParam0, int iParam1) //Position: 0x475B / 18267
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_76(int iParam0) //Position: 0x476A / 18282
{
	int iVar0;
	int iVar1;
	
	if (!Function_38(iParam0))
	{
		return;
	}
	switch (Function_39(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_37(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_10(12, 1, 0, 0);
				Function_80(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_10(13, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_10(14, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_10(15, 1, 0, 0);
				Function_80(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_10(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_37(iParam0))
			{
				case 0x00000000:
					if (Function_79(iParam0) == 1)
					{
						iVar0 = Function_78(iParam0);
						if (Function_77(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_80(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_80(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_80(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_80(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_80(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_80(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_80(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_80(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_80(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_80(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_80(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_80(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_80(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_80(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_80(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_80(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_80(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_80(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_80(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_80(4, 19);
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
								Function_10(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_10(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_10(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_78(iParam0) == 0)
			{
				if (Function_79(iParam0) == 1)
				{
					Function_10(458, 1, 0, 0);
					iVar0 = Function_37(iParam0);
					if (Function_77(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_80(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_80(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_80(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_80(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_80(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_80(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_80(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_80(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_79(iParam0) == 1)
			{
				Function_10(400, 1, 0, 0);
			}
			switch (Function_37(iParam0))
			{
				case 0x00000001:
					Function_10(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_80(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_80(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_80(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_10(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_80(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_80(6, 9);
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

bool Function_77(int iParam0) //Position: 0x4C46 / 19526
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_78(int iParam0) //Position: 0x4C5C / 19548
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_79(int iParam0) //Position: 0x4C7B / 19579
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_80(int iParam0, int iParam1) //Position: 0x4C95 / 19605
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iVar0);
	return;
	return;
}

void Function_81() //Position: 0x4CFF / 19711
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
	PLAYSTAT_INT("HC_MONEY", Function_60(0));
	PLAYSTAT_INT("HC_FAME", Function_60(3));
	PLAYSTAT_INT("HC_HONOR", Function_60(1));
	return;
}

void Function_82() //Position: 0x4E61 / 20065
{
	int iVar0;
	int iVar1;
	
	if (!Function_87(Global_10966))
	{
		return;
	}
	iVar0 = Function_60(24);
	iVar1 = Function_86(Global_10966);
	if (!Function_87(iVar0) && Function_85(iVar1) < 0)
	{
		Function_59(24, Global_10966, 0);
		Function_83(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_85(Function_86(iVar0)))
	{
		Function_59(24, Global_10966, 0);
		Function_83(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_83(int iParam0, char* cParam1) //Position: 0x4EE1 / 20193
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
		Function_84(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_84(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x5238 / 21048
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_85(int iParam0) //Position: 0x52C0 / 21184
{
	if (!Function_89(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_86(int iParam0) //Position: 0x52DA / 21210
{
	if (!Function_87(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_87(int iParam0) //Position: 0x52F4 / 21236
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_88() //Position: 0x530A / 21258
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_89(int iParam0) //Position: 0x5335 / 21301
{
	if (!Function_38(iParam0))
	{
		return 0;
	}
	if (!Function_90(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x5359 / 21337
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_91(int iParam0) //Position: 0x536E / 21358
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_92())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_92() //Position: 0x53AE / 21422
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

void Function_93() //Position: 0x53D3 / 21459
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_94(int iParam0) //Position: 0x53E9 / 21481
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

bool Function_95(bool bParam0, bool bParam1) //Position: 0x5406 / 21510
{
	return (bParam0 && bParam1) == 0;
}

void Function_96(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x5413 / 21523
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
	else if (!Function_67(StackVal, Param0))
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
			Function_107(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_106(0);
		}
		if (&bParam7)
		{
			Function_104(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_102(iParam3);
			Global_6644 = 1;
		}
		Function_100(iParam3);
		if (Function_99(StackVal, 32768))
		{
			Function_97(1);
		}
		Global_26652[iParam34].f_16++;
		Function_10(408, 1, 0, 0);
	}
}

void Function_97(bool bParam0) //Position: 0x5528 / 21800
{
	if (bParam0)
	{
		Function_98(0x10000000);
	}
	else
	{
		Function_94(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_98(int iParam0) //Position: 0x554D / 21837
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_99(var uParam0, int iParam1) //Position: 0x5560 / 21856
{
	return (uParam0 && iParam1) == 0;
}

void Function_100(int iParam0) //Position: 0x556D / 21869
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_95(StackVal, 524288))
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
			bVar1 = Function_101(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_101(int iParam0) //Position: 0x5613 / 22035
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_102(int iParam0) //Position: 0x562A / 22058
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
	Function_103(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_103(vector3 vParam0) //Position: 0x56C9 / 22217
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_104(int iParam0, bool bParam1) //Position: 0x56E5 / 22245
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
			Function_105(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_105(struct<113> Param0) //Position: 0x576C / 22380
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

void Function_106(int iParam0) //Position: 0x57CA / 22474
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_101(900)), 0);
	return;
}

void Function_107(int iParam0) //Position: 0x57EE / 22510
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_101(200)), 0);
	return;
}

struct<8> Function_108() //Position: 0x5811 / 22545
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_109(var uParam0, var[] uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x581B / 22555
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	
	bVar4 = false;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_229(uParam5))
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 20.0f, 1, 1, 0))
			{
				uParam3 = 1;
				AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[0]), &Global_54076, -1.0f, 1);
				AI_QUICK_EXIT_GRINGO(&(uParam1[0]), 1);
				iVar5 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[0]), iVar5);
				TASK_SEQUENCE_RELEASE(iVar5, 1);
				uParam0 = 1;
				uParam4 = 0;
			}
			break;
		
		case 0x00000001:
			uParam4 = 0;
			if (GET_NTH_TASK_STATUS(&(uParam1[0]), 0) == 0)
			{
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "stand_ambient", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "stand_ambient/one_hnd");
				Function_226();
				Function_225(&(uParam1[0]), &Global_54076, "duelRude_msg01", "duelRude_msg01", 5, 60, 1, 1);
				Function_285(&uLocal_369, 0.0f);
				uLocal_378 = ADD_BLIP_FOR_ACTOR(&(uParam1[0]), 325, 0.0f, 3, 0);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &(uParam1[0]), 1.0f, 10.0f, 1, 1, 0) && !IS_ACTOR_PLAYING_NODE_IN_TREE(&(uParam1[0]), "stand_ambient/one_hnd"))
			{
				AI_GOAL_LOOK_CLEAR(&(uParam1[0]));
				RESET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), 1);
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "spit_to_duel", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "spit_to_duel");
				uParam0 = 3;
			}
			else if (Function_242(&Global_54076, &(uParam1[0])) < 50.0f || Function_221(&uLocal_369, 15.0f))
			{
				Function_219(&(uParam1[0]));
				TASK_WANDER(&(uParam1[0]), 3212836864);
				Function_6(&(uParam1[0]));
				return 1;
			}
			break;
		
		case 0x00000003:
			uParam4 = 0;
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[0]), "spit_to_duel"))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW(&(uParam1[0]), &Global_54076, -1.0f, 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "default_character_Main/AI_Taunt/TauntIdle/TauntC/TauntC");
				Function_225(&(uParam1[0]), &Global_54076, "duelRude_msg02", "duelRude_msg02", 5, 60, 1, 1);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(&(uParam1[0]), 1);
				UNK_0x99AFD2D1(&(uParam1[0]), 0, 0);
				Function_285(&uLocal_369, 0.0f);
				uParam0 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_221(&uLocal_369, 3.0f) && !IS_AMBIENT_SPEECH_PLAYING(&(uParam1[0])))
			{
				TASK_TAUNT_ACTOR_IN_PLACE(&(uParam1[0]), &Global_54076, -1.0f);
				iLocal_392 = 1;
				uLocal_289 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam2, Function_286(), 0f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 4.0f, 15.0f));
				uLocal_287 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("acceptDuelChallenge", &uLocal_289, 25, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
				ATTACH_OBJECTS(StackVal, StackVal, &uLocal_289, &(uParam1[0]), Function_286(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				Function_230("duelHelp08", 0x41200000, 1, 0, 2, 1, 0);
				Function_285(&uLocal_369, 0.0f);
				uParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_287))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uLocal_287))
				{
					Function_213(&uLocal_406, Function_214(1, 3, 2));
					Function_191(StackVal, &uLocal_406, 0, 4294967295, Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
					Function_140(&uLocal_406);
					bLocal_396 = true;
					bLocal_395 = true;
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_225(&Global_54076, &(uParam1[0]), "duelRudePlayer_msg01", 0, 5, 60, 1, 1);
					Function_219(&(uParam1[0]));
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_287);
					DESTROY_VOLUME(&uLocal_289);
					HUD_CLEAR_HELP();
					Function_230("duelHelp06", 0x41200000, 1, 0, 2, 1, 0);
					Function_285(&uLocal_369, 0.0f);
					uParam0 = 6;
				}
				else if (Function_221(&uLocal_369, 30.0f))
				{
					Function_244("duelHelp05", bLocal_395, 1);
					if (Function_242(&(uParam1[0]), &Global_54076) > 30.0f)
					{
						bLocal_405 = true;
						Function_225(&(uParam1[0]), &Global_54076, "FIGHT", 0, 5, 60, 1, 1);
					}
					return 1;
				}
			}
			return 1;
			break;
		
		case 0x00000006:
			if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076) && Function_221(&uLocal_369, 3.0f))
			{
				if (!Function_263(StackVal, uParam5, 0.0f, &Local_291, &iLocal_347, Local_291, 0))
				{
					LOG_ERROR("Failed to populate duel IDX");
					return 1;
				}
				if (!Function_138(&Local_291, iLocal_347))
				{
					LOG_ERROR("Failed to populate duel data");
					return 1;
				}
				uLocal_382 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam2, Function_286(), 4,203895E-45f, *(&Local_291 + 24), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 10.0f, 20.0f));
				Function_137(&uParam2, &uLocal_382, &Local_291 + 24, 20.0f);
				bLocal_398 = true;
				Var2 = *(&Local_291 + 24);
				UNK_0x44986367(StackVal, Function_135(StackVal, &Var0, *(&Local_291 + 24), *(&Local_291 + 36)));
				VNORMALIZE(&Var0);
				VSCALE(&Var0, (VDIST(*(&Local_291 + 24), *(&Local_291 + 36)) * 0,5f));
				Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Var2, StackVal);
				Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0,2f, 0.0f), Var2, StackVal);
				uLocal_380 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam2, Function_286(), 0f, Var2, Vector(0.0f, 0.0f, 0.0f), Vector(2,5f, 2,5f, 2,5f));
				iLocal_373 = Function_134(&uParam2, Function_286(), &uLocal_380, &Global_54076, 0, 330, 4294967295, 0, 0, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_373)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_373));
					ADD_BLIP_FOR_OBJECT(&iLocal_373, 330, 0.0f, 3, 0);
				}
				AI_GOAL_LOOK_CLEAR(&(uParam1[0]));
				iVar5 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &Local_291 + 36, 1);
				TASK_FACE_COORD(0, &Local_291 + 24, 0);
				TASK_FACE_COORD(0, &Local_291 + 24, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(uParam1[0]), iVar5);
				TASK_SEQUENCE_RELEASE(iVar5, 1);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&(uParam1[0]), 8, "FASTWALK");
				Function_285(&uLocal_369, 0.0f);
				uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			uParam4 = 0;
			if (GET_NTH_TASK_STATUS(&(uParam1[0]), 1) != 0 && bLocal_399 != 1)
			{
				SET_ANIM_SET_FOR_ACTOR(&(uParam1[0]), "ready2_duel_challenger", 0);
				SET_ACTION_NODE_FOR_ACTOR(&(uParam1[0]), "ready2_duel_challenger");
				_AIATTENTIONATTRACTOR(&uParam2, *(&Local_291 + 36), 1045220557, 1065353216, 0, 0);
				SET_MOVER_FROZEN(&(uParam1[0]), 1);
				bLocal_399 = false;
				Function_285(&uLocal_369, 0.0f);
			}
			else if (bLocal_399)
			{
				Function_285(&uLocal_369, 0.0f);
			}
			if (Function_221(&uLocal_369, 30.0f))
			{
				Function_244("duelHelp05", bLocal_395, 1);
				Function_243(&iLocal_373);
				if (Function_242(&(uParam1[0]), &Global_54076) > 30.0f)
				{
					bLocal_405 = true;
					Function_225(&(uParam1[0]), &Global_54076, "FIGHT", 0, 5, 60, 1, 1);
				}
				return 1;
			}
			if (GATEWAY_UPDATE(&iLocal_373))
			{
				_AIATTENTIONATTRACTOR(&uParam2, *(&Local_291 + 36), 1045220557, 1065353216, 0, 0);
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
				{
					if (iLocal_394)
					{
						iLocal_394 = 0;
						HUD_CLEAR_HELP();
					}
					Function_230("duelHelp01", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (!IS_ACTOR_ON_FOOT(&Global_54076))
				{
					if (iLocal_394)
					{
						iLocal_394 = 0;
						HUD_CLEAR_HELP();
					}
					Function_230("duelHelp09", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					if (IS_MOVER_FROZEN(&(uParam1[0])))
					{
						SET_MOVER_FROZEN(&(uParam1[0]), 0);
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_236(&(uParam1[0]));
					if (IS_BLIP_VALID(&uLocal_378))
					{
						REMOVE_BLIP(&uLocal_378);
					}
					HUD_CLEAR_HELP_QUEUE();
					DESTROY_VOLUME(&uLocal_289);
					Function_243(&iLocal_373);
					Function_8(&(uParam1[0]), 0);
					uParam0 = 8;
					iLocal_393 = 1;
					uParam4 = 0;
				}
			}
			else if (Function_131(&Global_54076, &iLocal_373) > 7.0f)
			{
				if (iLocal_348)
				{
					Function_285(&uLocal_369, 0.0f);
					iLocal_348 = 0;
				}
				if (iLocal_394 == 0)
				{
					HUD_CLEAR_HELP();
					Function_230("duelHelp07", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_394 = 1;
				}
			}
			else if (Function_221(&uLocal_369, 6.0f) && iLocal_394 != 1)
			{
				iLocal_394 = 0;
				HUD_CLEAR_HELP();
			}
			break;
		
		case 0x00000008:
			if (Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iLocal_375, &(uParam1[0]), &Global_54076, &uParam2, &Local_291 + 24, &Local_291 + 36, &bVar4, &uLocal_382, &uLocal_349, 4, iLocal_347, Local_291, &uLocal_359, &uLocal_376, 1, 2, 0))
			{
				if (bVar4)
				{
					AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_403 = true;
					Function_110(10);
					bLocal_397 = true;
					return 1;
				}
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_110(int iParam0) //Position: 0x620B / 25099
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_10(409, 1, 0, 0);
	}
	return;
}

bool Function_111(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10, struct<53> Param11) //Position: 0x623C / 25148
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	float fVar6;
	float fVar7;
	float fVar8;
	
	switch (uParam0)
	{
		case 0x00000000:
			if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			if (HUD_IS_FADED())
			{
				STREAMING_OVERRIDE_MAIN_POI(StackVal, StackVal, StackVal, Vector(StackVal, Function_135(Param4, 0.0f, Param4, Param5), 0.0f));
				Function_129(9);
				iLocal_283 = 1;
				Function_104(0, GET_THIS_SCRIPT_ID());
				iParam40 = Function_120(0, 1, 0, 0, 0, 0, 1, 0);
				if (IS_ACTOR_VALID(&iParam40))
				{
					if (!DECOR_CHECK_EXIST(&iParam40, "HorseLeash"))
					{
						bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/horseHitch", &Global_54078, 50.0f, 0);
						if (IS_GRINGO_VALID(&bVar0))
						{
							iVar3 = GET_ACTOR_FROM_OBJECT(Function_119(&bVar0, "UseCase1"));
							if (IS_ACTOR_VALID(&iVar3) && !&iVar3 != &iParam40)
							{
								DESTROY_ACTOR(GET_ACTOR_FROM_OBJECT(Function_119(&bVar0, "UseCase1")));
							}
							DECOR_SET_BOOL(&iParam40, "ignoreactorinduel", 1);
							GRINGO_GET_USE_COMPONENT_POSITION_EXT(&bVar0, "UseCase1", &Var1);
							SET_OBJECT_POSITION(&iParam40, Var1);
							SET_OBJECT_ORIENTATION(StackVal, &iParam40, Vector(0.0f, GRINGO_GET_USE_COMPONENT_HEADING_EXT(&bVar0, "UseCase1"), 0.0f));
							SNAP_ACTOR_TO_GRINGO(&iParam40, GET_OBJECT_FROM_GRINGO(&bVar0), "UseCase1", 1, 0, 0);
							TASK_USE_GRINGO(&iParam40, &bVar0, "UseCase1", 1, 1);
						}
						else
						{
							LOG_ERROR("Could not find horse hitch gringo for duel");
							DESTROY_ACTOR(&iParam40);
						}
					}
				}
				if (&bParam41)
				{
					iLocal_286 = iParam9;
					if (Param11.f_60 <= iParam9)
					{
						iLocal_286 = Param11.f_60;
					}
					if (Param11.f_56 == 0)
					{
						Function_117(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uParam8, iLocal_286, &uParam3, &uParam1, Param11, &uParam39);
					}
				}
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uParam7, 15);
				HUD_CLEAR_HELP_QUEUE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
			MAKE_ACTOR_READY_FOR_ACTION(&uParam1, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			HUD_ENABLE(1);
			SET_HUD_MAP_DRAW_ENABLED(0);
			TELEPORT_ACTOR(&uParam1, &Param5, 1, 1, 1);
			GIVE_WEAPON_TO_ACTOR(&uParam1, 4, 0f, 1, 1);
			if (Function_60(451) <= 1)
			{
				Local_249.f_80 = 0;
			}
			else if (Function_60(451) <= 3)
			{
				Local_249.f_80 = 1;
			}
			else
			{
				Local_249.f_80 = 2;
			}
			if (&iParam42 <= Local_249.f_80)
			{
				Local_249.f_80 = &iParam42;
			}
			Local_249.f_68 = Function_18(150, (50 + Function_60(451) * 15));
			Local_249.f_64 = &uParam43;
			if (Function_88())
			{
				if (Function_60(451) < 1)
				{
					Local_249.f_80 = 1;
					Local_249.f_64 = 0;
					Local_249.f_68 = 175;
				}
				else
				{
					Local_249.f_80 = 2;
					Local_249.f_64 = 0;
					Local_249.f_68 = 195;
				}
			}
			Local_249 = &uParam2;
			*(&Local_249 + 8) = &uParam1;
			*(&Local_249 + 16) = Param4;
			*(&Local_249 + 28) = Param5;
			uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_249 + 28), *(&Local_249 + 16), StackVal);
			fVar6 = UNK_0x9C40E671(&uVar4);
			fVar7 = Param11.f_48;
			fVar8 = Param11.f_52;
			*(&Local_249 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam3, "Duel_StayOut", 2,802597E-45f, *(&Local_249 + 28), Vector(0.0f, fVar6, 0.0f), Vector(fVar7, 10.0f, fVar8));
			Local_249.f_48 = 1;
			Local_249.f_84 = uParam10;
			uLocal_281 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_249, 32, 0);
			if (!IS_SCRIPT_VALID(&uLocal_281))
			{
				Function_114();
				return 0;
			}
			uParam0 = 2;
			break;
		
		case 0x00000002:
			if (!IS_SCRIPT_VALID(&uLocal_281))
			{
				switch (DECOR_GET_INT(&uParam2, "iDuelResult"))
				{
					case 0x00001389:
						if (IS_ACTOR_VALID(&uParam1))
						{
							Function_113(&uParam1);
							*(&Local_249 + 28) = Function_113(&uParam1);
						}
						if (IS_ACTOR_VALID(&iParam40))
						{
							if (DECOR_CHECK_EXIST(&iParam40, "ignoreactorinduel"))
							{
								DECOR_REMOVE(&iParam40, "ignoreactorinduel");
							}
						}
						if (&bParam41)
						{
							Function_112(&uParam39, iLocal_286);
						}
						Function_114();
						uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138A:
						TASK_FLEE_ACTOR(&uParam1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						if (IS_ACTOR_VALID(&uParam1))
						{
							Function_113(&uParam1);
							*(&Local_249 + 28) = Function_113(&uParam1);
						}
						if (IS_ACTOR_VALID(&iParam40))
						{
							if (DECOR_CHECK_EXIST(&iParam40, "ignoreactorinduel"))
							{
								DECOR_REMOVE(&iParam40, "ignoreactorinduel");
							}
						}
						if (&bParam41)
						{
							Function_112(&uParam39, iLocal_286);
						}
						Function_114();
						uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138B:
						if (IS_ACTOR_VALID(&iParam40))
						{
							if (DECOR_CHECK_EXIST(&iParam40, "ignoreactorinduel"))
							{
								DECOR_REMOVE(&iParam40, "ignoreactorinduel");
							}
						}
						Function_114();
						uParam6 = 1;
						return 1;
						break;
					
					case 0x0000138D:
						if (IS_ACTOR_VALID(&iParam40))
						{
							if (DECOR_CHECK_EXIST(&iParam40, "ignoreactorinduel"))
							{
								DECOR_REMOVE(&iParam40, "ignoreactorinduel");
							}
						}
						Function_114();
						uParam6 = 1;
						return 1;
						break;
					
					default:
						break;
					}
			}
			break;
	}
	return 1;
}

void Function_112(var[] uParam0, int iParam1) //Position: 0x67EE / 26606
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(uParam0[iVar0]), 1);
		iVar0++;
	}
	return;
}

struct<8> Function_113(var uParam0) //Position: 0x6813 / 26643
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_114() //Position: 0x6825 / 26661
{
	if (iLocal_283)
	{
		Function_115(9);
		iLocal_283 = 0;
	}
	return;
}

void Function_115(int iParam0) //Position: 0x683A / 26682
{
	Function_116(&Global_43580, iParam0);
	return;
}

void Function_116(var uParam0, int iParam1) //Position: 0x6848 / 26696
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_117(var[] uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var[] uParam32) //Position: 0x6867 / 26727
{
	int iVar0;
	var uVar1;
	float fVar3;
	
	uParam3 = &uParam3;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(*(&iParam4 + 64[iVar02]), *(&iParam4 + 36), StackVal);
		fVar3 = UNK_0x9C40E671(&uVar1);
		uParam32[iVar0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam2, Function_286(), uParam0[iVar0], *(&iParam4 + 64[iVar02]), Vector(0.0f, fVar3, 0.0f));
		TASK_FACE_COORD(&(uParam32[iVar0]), &iParam4 + 36, 1);
		TASK_PRIORITY_SET(&(uParam32[iVar0]), true);
		iVar0++;
	}
	Function_118(&uParam32, iParam1, 1, &iParam4);
}

int Function_118(var[] uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x68F3 / 26867
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	float fVar10;
	
	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = 4294967295;
	iVar1 = RAND_INT_RANGE(0, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + iVar1) % iParam1);
		if (IS_ACTOR_MALE(&(uParam0[iVar3])))
		{
			if ((*&iParam3 + 168)[iVar3] & 4096 != 0)
			{
				if (UNK_0xE094DB31(&(uParam0[iVar3]), 0))
				{
					iVar0 = iVar3;
				}
			}
		}
		iVar2++;
	}
	iVar4 = 4294967295;
	iVar1 = RAND_INT_RANGE(0, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + iVar1) % iParam1);
		if (((*&iParam3 + 168)[iVar6] && iVar5) != 0)
		{
			iVar4 = iVar6;
		}
		iVar2++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= iParam1)
	{
		bVar9 = (*&iParam3 + 168)[iVar8];
		if (!bParam2)
		{
			Function_69(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_69(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_69(&bVar9, 16);
		}
		if (bParam2)
		{
			fVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (fVar10 < 0,5f || iVar7 <= 3)
			{
				Function_69(&bVar9, 64);
			}
			else
			{
				iVar7++;
			}
		}
		DECOR_SET_INT(&(uParam0[iVar8]), "DuelIsCrowdActor", bVar9);
		iVar8++;
	}
	return 1;
}

var Function_119(var uParam0, bool bParam1) //Position: 0x6A3F / 27199
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &bParam1);
}

var Function_120(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x6A4E / 27214
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	iVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_128(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_127())
		{
			return "";
		}
	}
	if (!Function_125())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_124();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_123(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_123(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_123(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_123(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_122(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_122(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_286(), iVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_286(), 1,391489E-42f, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_67(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_286(), iVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (iVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (iVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_286(), 1,391489E-42f, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_121(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6DAB / 28075
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_122(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6DF5 / 28149
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_123(int iParam0) //Position: 0x6E95 / 28309
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_124() //Position: 0x6EBE / 28350
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

bool Function_125() //Position: 0x6F36 / 28470
{
	if (Function_126() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_126() //Position: 0x6F4C / 28492
{
	return Global_21369.f_244;
}

bool Function_127() //Position: 0x6F57 / 28503
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_128(var uParam0, bool bParam1, bool bParam2) //Position: 0x6F77 / 28535
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_69(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_69(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_129(int iParam0) //Position: 0x6FA6 / 28582
{
	Function_130(&Global_43580, iParam0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6FB4 / 28596
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

float Function_131(bool bParam0, int iParam1) //Position: 0x6FDC / 28636
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_133(&bParam0);
			Var0 = Function_133(&bParam0);
			Function_132(&iParam1);
			Var2 = Function_132(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_132(int iParam0) //Position: 0x707E / 28798
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_133(bool bParam0) //Position: 0x70EC / 28908
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

var Function_134(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x7158 / 29016
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &uParam6, &uParam7, &uParam8, &uParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &uParam8);
	}
	return &uVar0;
}

var Function_135(struct<2> Param0, struct<2> Param2) //Position: 0x71E9 / 29161
{
	var uVar0;
	
	Function_136(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_136(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x7203 / 29187
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_137(var uParam0, var uParam1, struct<2> Param2) //Position: 0x7227 / 29223
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_286(), &uParam0, 15, 1);
	uLocal_284 = CREATE_ACTORSET_IN_LAYOUT(&uParam0, "DuelExemptedFromStayout", 0);
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, Function_286(), 0f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector((fParam3 * 1,5f), 20.0f, (fParam3 * 1,5f)));
	iVar2 = LOCATE_ACTORS_IN_VOLUME(&uVar1, &uVar0, 0, 1);
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		uVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, &uVar0));
		if (IS_ACTOR_VALID(&uVar4) && DOES_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uVar4))
		{
			bVar5 = false;
			if (IS_ACTOR_HORSE(&uVar4) && DECOR_CHECK_EXIST(&uVar4, "HorseLeash"))
			{
				bVar5 = true;
			}
			else if (!IS_ACTOR_OUTDOORS(&uVar4))
			{
				bVar5 = true;
			}
			if (bVar5)
			{
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uVar4, 0);
				ADD_ACTORSET_MEMBER(&uLocal_284, &uVar4);
			}
		}
		iVar3++;
	}
	DESTROY_OBJECTSET(&uVar0);
	DESTROY_VOLUME(&uVar1);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam1);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam1);
}

bool Function_138(struct<61> Param0) //Position: 0x7331 / 29489
{
	if (iParam1 <= 0)
	{
		return Function_139(&Param0, iParam1);
	}
	if (Global_43789 == Global_46760[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-2175,953f, 16,256f, 2611,705f);
			*(&Param0 + 36) = Vector(-2166,595f, 16,214f, 2611,732f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2160,472f, 16,902f, 2605,667f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-2158,75f, 16,881f, 2605,917f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2155,889f, 16,434f, 2617,996f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2157,149f, 16,447f, 2619,214f);
			(*&Param0 + 168)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-2157,237f, 16,256f, 2611,759f);
			*(&Param0 + 36) = Vector(-2166,595f, 16,214f, 2611,732f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2164,137f, 16,909f, 2619,3f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-2171,411f, 16,449f, 2619,825f);
			(*&Param0 + 168)[1] = 7168;
			*(&Param0 + 64[22]) = Vector(-2173,083f, 16,449f, 2620,048f);
			(*&Param0 + 168)[2] = 12800;
			*(&Param0 + 64[32]) = Vector(-2168,264f, 16,881f, 2605,223f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-2141,009f, 16,097f, 2610,77f);
			*(&Param0 + 36) = Vector(-2152,214f, 16,097f, 2611,114f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2163,959f, 16,909f, 2619,74f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2165,694f, 16,909f, 2620,008f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2161,763f, 16,881f, 2605,855f);
			(*&Param0 + 168)[2] = 4352;
			*(&Param0 + 64[32]) = Vector(-2157,148f, 16,881f, 2602,253f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-2163,419f, 16,097f, 2611,458f);
			*(&Param0 + 36) = Vector(-2152,214f, 16,097f, 2611,114f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2146,166f, 16,399f, 2604,041f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2144,782f, 16,437f, 2604,025f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2134,941f, 16,449f, 2619,2f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-2142,436f, 16,451f, 2620,109f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-2109,022f, 16,306f, 2610,545f);
			*(&Param0 + 36) = Vector(-2120,304f, 16,097f, 2610,42f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2128,746f, 16,582f, 2618,448f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2130,542f, 16,583f, 2618,705f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2132,521f, 16,583f, 2618,72f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(-2131,128f, 16,617f, 2603,082f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-2131,586f, 16,306f, 2610,295f);
			*(&Param0 + 36) = Vector(-2120,304f, 16,097f, 2610,42f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 130.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2109,311f, 17,032f, 2602,233f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-2084,119f, 16,722f, 2620,025f);
			(*&Param0 + 168)[1] = 2304;
			*(&Param0 + 64[22]) = Vector(-2110,06f, 16,574f, 2618,706f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2112,009f, 16,574f, 2618,81f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(&Param0 + 24) = Vector(-2181,665f, 16,199f, 2626,591f);
			*(&Param0 + 36) = Vector(-2181,558f, 16,27f, 2617,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 70.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2187,365f, 16,947f, 2611,735f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2187,344f, 16,947f, 2610,434f);
			(*&Param0 + 168)[1] = 16896;
			*(&Param0 + 64[22]) = Vector(-2175,141f, 16,563f, 2603,119f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2173,878f, 16,846f, 2603,615f);
			(*&Param0 + 168)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(&Param0 + 24) = Vector(-2181,451f, 16,199f, 2607,999f);
			*(&Param0 + 36) = Vector(-2181,558f, 16,27f, 2617,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2171,507f, 16,91f, 2626,342f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2171,085f, 17,419f, 2628,723f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2188,435f, 46,438f, 2629,844f);
			(*&Param0 + 168)[2] = 6400;
			*(&Param0 + 64[32]) = Vector(-2186,93f, 16,354f, 2624,667f);
			(*&Param0 + 168)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(&Param0 + 24) = Vector(-2182,602f, 16,279f, 2582,669f);
			*(&Param0 + 36) = Vector(-2182,557f, 16,283f, 2592,741f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2175,813f, 16,892f, 2598,68f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2175,771f, 16,892f, 2599,781f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2187,98f, 16,947f, 2605,092f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2188,852f, 16,947f, 2604,008f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(&Param0 + 24) = Vector(-2182,512f, 16,279f, 2602,813f);
			*(&Param0 + 36) = Vector(-2182,557f, 16,283f, 2592,741f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2192,36f, 16,58f, 2590,16f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-2175,242f, 16,431f, 2579,68f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(-2174,96f, 16,393f, 2581,227f);
			(*&Param0 + 168)[2] = 12800;
			*(&Param0 + 64[32]) = Vector(-2174,707f, 16,359f, 2583,002f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
	}
	if (Global_43789 == Global_46816[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-833,757f, 92,093f, 2405,053f);
			*(&Param0 + 36) = Vector(-824,86f, 92,111f, 2405,911f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-826,829f, 92,604f, 2399,558f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-825,39f, 92,604f, 2400,278f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-817,222f, 92,228f, 2400,68f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-815,883f, 92,122f, 2401,766f);
			(*&Param0 + 168)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-815,963f, 92,093f, 2406,769f);
			*(&Param0 + 36) = Vector(-824,86f, 92,111f, 2405,911f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-834,486f, 92,625f, 2412,879f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-833,019f, 92,604f, 2398,71f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(-830,829f, 92,597f, 2398,705f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-827,994f, 92,604f, 2399,416f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-948,017f, 90,246f, 2443,329f);
			*(&Param0 + 36) = Vector(-940,246f, 90,101f, 2439,536f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-944,354f, 90,362f, 2433,664f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-943,069f, 90,368f, 2432,761f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-936,299f, 90,374f, 2429,44f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-935,053f, 90,383f, 2429,297f);
			(*&Param0 + 168)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-932,475f, 90,246f, 2435,743f);
			*(&Param0 + 36) = Vector(-940,246f, 90,101f, 2439,536f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-943,643f, 90,353f, 2452,65f);
			(*&Param0 + 168)[0] = 7168;
			*(&Param0 + 64[12]) = Vector(-945,45f, 90,35f, 2452,563f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-957,561f, 90,786f, 2438,436f);
			(*&Param0 + 168)[2] = 2304;
			*(&Param0 + 64[32]) = Vector(-953,349f, 90,786f, 2436,586f);
			(*&Param0 + 168)[3] = 20736;
			return 1;
		}
		else if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-773,226f, 92,264f, 2441,655f);
			*(&Param0 + 36) = Vector(-779,513f, 92,261f, 2435,719f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-789,443f, 92,336f, 2433,929f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(-788,805f, 93,291f, 2415,236f);
			(*&Param0 + 168)[1] = 4352;
			*(&Param0 + 64[22]) = Vector(-782,939f, 93,132f, 2421,574f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-781,724f, 93,106f, 2422,239f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-785,8f, 92,264f, 2429,783f);
			*(&Param0 + 36) = Vector(-779,513f, 92,261f, 2435,719f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-789,063f, 93,199f, 2416,324f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(-787,695f, 93,291f, 2416,819f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-784,003f, 92,958f, 2422,655f);
			(*&Param0 + 168)[2] = 4096;
			*(&Param0 + 64[32]) = Vector(-788,074f, 92,302f, 2435,201f);
			(*&Param0 + 168)[3] = 4096;
			return 1;
		}
	}
	if (Global_43789 == Global_46816[1])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(161,801f, 73,036f, 2209,601f);
			*(&Param0 + 36) = Vector(154,678f, 73,036f, 2214,532f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(151,093f, 73,781f, 2231,127f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(149,66f, 73,778f, 2229,832f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(149,334f, 73,78f, 2232,961f);
			(*&Param0 + 168)[2] = 20736;
			*(&Param0 + 64[32]) = Vector(130,805f, 73,285f, 2225,233f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(147,555f, 73,036f, 2219,463f);
			*(&Param0 + 36) = Vector(154,678f, 73,036f, 2214,532f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(132,103f, 73,286f, 2222,323f);
			(*&Param0 + 168)[0] = 256;
			*(&Param0 + 64[12]) = Vector(163,447f, 73,758f, 2196,496f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(164,755f, 73,755f, 2196,096f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(168,478f, 73,286f, 2214,951f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(112,178f, 73,036f, 2307,669f);
			*(&Param0 + 36) = Vector(113,796f, 73,036f, 2299,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(110,108f, 73,286f, 2288,538f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(121,847f, 73,286f, 2288,113f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(121,773f, 73,286f, 2289,774f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(121,96f, 73,286f, 2291,226f);
			(*&Param0 + 168)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(115,414f, 73,036f, 2290,921f);
			*(&Param0 + 36) = Vector(113,796f, 73,036f, 2299,295f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(117,484f, 73,286f, 2310,052f);
			(*&Param0 + 168)[0] = 6400;
			*(&Param0 + 64[12]) = Vector(105,745f, 73,286f, 2310,477f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(105,819f, 73,286f, 2308,816f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(105,632f, 73,286f, 2307,364f);
			(*&Param0 + 168)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(125,52f, 72,495f, 2253,003f);
			*(&Param0 + 36) = Vector(123,009f, 73,014f, 2261,074f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(112,309f, 73,767f, 2280,208f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(112,308f, 73,641f, 2277,641f);
			(*&Param0 + 168)[1] = 9216;
			*(&Param0 + 64[22]) = Vector(113,096f, 73,649f, 2273,542f);
			(*&Param0 + 168)[2] = 512;
			*(&Param0 + 64[32]) = Vector(113,108f, 73,66f, 2271,663f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(120,498f, 72,495f, 2269,145f);
			*(&Param0 + 36) = Vector(123,009f, 73,014f, 2261,074f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(112,671f, 73,644f, 2276,903f);
			(*&Param0 + 168)[0] = 256;
			*(&Param0 + 64[12]) = Vector(117,043f, 73,643f, 2240,313f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(118,516f, 73,712f, 2240,557f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(124,33f, 76,749f, 2238,564f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	if (Global_43789 == Global_46850[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-4297,778f, 22,269f, 4404,503f);
			*(&Param0 + 36) = Vector(-4304,795f, 22,573f, 4404,685f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4306,099f, 22,155f, 4415,161f);
			(*&Param0 + 168)[0] = 256;
			*(&Param0 + 64[12]) = Vector(-4311,022f, 23,058f, 4412,995f);
			(*&Param0 + 168)[1] = 4608;
			*(&Param0 + 64[22]) = Vector(-4311,679f, 23,058f, 4411,987f);
			(*&Param0 + 168)[2] = 13312;
			*(&Param0 + 64[32]) = Vector(-4313,768f, 26,886f, 4406,992f);
			(*&Param0 + 168)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-4304,795f, 22,573f, 4404,685f);
			*(&Param0 + 36) = Vector(-4297,778f, 22,269f, 4404,503f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4305,446f, 22,139f, 4414,692f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(-4306,939f, 22,322f, 4414,795f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-4309,754f, 23,058f, 4413,441f);
			(*&Param0 + 168)[2] = 6400;
			*(&Param0 + 64[32]) = Vector(-4313,768f, 26,886f, 4406,992f);
			(*&Param0 + 168)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-4267,992f, 18,109f, 4437,149f);
			*(&Param0 + 36) = Vector(-4275,026f, 18,178f, 4441,885f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4278,334f, 18,071f, 4449,653f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4279,857f, 18,071f, 4449,824f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-4281,086f, 18,071f, 4438,504f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(-4279,52f, 18,071f, 4437,386f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-4282,06f, 18,109f, 4446,621f);
			*(&Param0 + 36) = Vector(-4275,026f, 18,178f, 4441,885f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4277,958f, 18,071f, 4437,547f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4276,217f, 18,076f, 4436,355f);
			(*&Param0 + 168)[1] = 4608;
			*(&Param0 + 64[22]) = Vector(-4270,787f, 18,071f, 4432,743f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(-4269,763f, 18,071f, 4433,286f);
			(*&Param0 + 168)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-4318,445f, 22,086f, 4450,013f);
			*(&Param0 + 36) = Vector(-4318,897f, 22,086f, 4440,917f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4330,111f, 25,409f, 4422,815f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4329,889f, 25,581f, 4421,464f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-4329,611f, 25,573f, 4420,175f);
			(*&Param0 + 168)[2] = 4352;
			*(&Param0 + 64[32]) = Vector(-4312,611f, 22,004f, 4423,452f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-4319,349f, 22,086f, 4431,821f);
			*(&Param0 + 36) = Vector(-4318,897f, 22,086f, 4440,917f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 60.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-4322,033f, 22,087f, 4455,366f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-4323,083f, 22,087f, 4453,766f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-4324,211f, 22,094f, 4451,612f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(-4325,245f, 22,128f, 4450,168f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
	}
	if (Global_43789 == Global_46866[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-2732,999f, 32,668f, 4258,262f);
			*(&Param0 + 36) = Vector(-2724,731f, 32,559f, 4254,918f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2720,958f, 32,28f, 4245,056f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2719,41f, 32,28f, 4244,509f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2713,209f, 32,808f, 4256,949f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2714,787f, 32,827f, 4257,932f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-2716,179f, 32,668f, 4250,88f);
			*(&Param0 + 36) = Vector(-2724,589f, 33,196f, 4254,571f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2725,793f, 32,826f, 4264,401f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2726,701f, 32,825f, 4265,115f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2737,822f, 32,607f, 4253,199f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(-2736,711f, 32,607f, 4251,915f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-2678,78f, 31,48f, 4241,123f);
			*(&Param0 + 36) = Vector(-2688,745f, 31,42f, 4241,607f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2700,972f, 31,57f, 4254,442f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2702,482f, 32,011f, 4254,482f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2704,879f, 32,28f, 4235,066f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-2704,098f, 32,176f, 4233,792f);
			(*&Param0 + 168)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-2698,71f, 31,48f, 4242,091f);
			*(&Param0 + 36) = Vector(-2688,745f, 31,42f, 4241,607f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 80.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-2679,489f, 32,5f, 4232,727f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2677,893f, 32,5f, 4233,058f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-2671,652f, 31,192f, 4248,009f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-2683,122f, 31,548f, 4248,685f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	if (Global_43789 == Global_46894[2])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(-819,766f, 12,801f, 3773,009f);
			*(&Param0 + 36) = Vector(-813,468f, 12,801f, 3766,967f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-804,586f, 13,051f, 3742,726f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-803,14f, 13,551f, 3764,739f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(-804,056f, 13,551f, 3765,803f);
			(*&Param0 + 168)[2] = 20992;
			*(&Param0 + 64[32]) = Vector(-805,158f, 13,551f, 3767,062f);
			(*&Param0 + 168)[3] = 512;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(-807,17f, 12,801f, 3760,925f);
			*(&Param0 + 36) = Vector(-813,468f, 12,801f, 3766,967f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-809,813f, 13,551f, 3771,118f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-812,055f, 13,551f, 3773,48f);
			(*&Param0 + 168)[1] = 16896;
			*(&Param0 + 64[22]) = Vector(-813,522f, 13,551f, 3774,942f);
			(*&Param0 + 168)[2] = 13312;
			*(&Param0 + 64[32]) = Vector(-816,089f, 13,551f, 3777,198f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(-787,179f, 12,801f, 3736,633f);
			*(&Param0 + 36) = Vector(-793,017f, 12,801f, 3743,048f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-811,045f, 13,051f, 3750,048f);
			(*&Param0 + 168)[0] = 1024;
			*(&Param0 + 64[12]) = Vector(-810,352f, 13,051f, 3748,774f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-806,995f, 13,051f, 3746,105f);
			(*&Param0 + 168)[2] = 21504;
			*(&Param0 + 64[32]) = Vector(-806,253f, 13,051f, 3744,332f);
			(*&Param0 + 168)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(-798,855f, 12,801f, 3749,463f);
			*(&Param0 + 36) = Vector(-793,017f, 12,801f, 3743,048f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-789,346f, 13,04f, 3730,211f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-786,917f, 13,037f, 3728,203f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-785,021f, 13,051f, 3724,668f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(-782,264f, 13,036f, 3740,828f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(-804,814f, 13,051f, 3719,617f);
			*(&Param0 + 36) = Vector(-798,673f, 13,051f, 3713,655f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-800,2f, 13,12f, 3705,603f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-799,261f, 13,12f, 3704,608f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-797,36f, 13,12f, 3703,65f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(-788,266f, 13,051f, 3712,833f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(-798,673f, 13,051f, 3713,655f);
			*(&Param0 + 36) = Vector(-804,814f, 13,051f, 3719,617f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-804,219f, 13,051f, 3729,436f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-805,748f, 13,051f, 3729,628f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-808,559f, 13,051f, 3730,366f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(-813,656f, 13,051f, 3715,872f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	if (Global_43789 == Global_46914[0])
	{
		if (iParam1 == 0)
		{
			*(&Param0 + 24) = Vector(735,953f, 78,306f, 1324,242f);
			*(&Param0 + 36) = Vector(735,953f, 78,306f, 1315,071f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(729,253f, 48,486f, 1309,157f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(729,192f, 78,486f, 1307,499f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(742,653f, 78,425f, 1306,141f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(743,264f, 78,425f, 1307,125f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(&Param0 + 24) = Vector(735,953f, 78,306f, 1305,9f);
			*(&Param0 + 36) = Vector(735,953f, 78,306f, 1315,071f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(742,376f, 78,425f, 1320,613f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(741,937f, 78,425f, 1321,135f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(741,855f, 78,425f, 1322,617f);
			(*&Param0 + 168)[2] = 16896;
			*(&Param0 + 64[32]) = Vector(729,187f, 78,486f, 1322,833f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(&Param0 + 24) = Vector(788,067f, 78,306f, 1292,354f);
			*(&Param0 + 36) = Vector(788,064f, 78,306f, 1301,43f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(794,4f, 78,456f, 1312,086f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(794,491f, 78,456f, 1313,429f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(781,088f, 78,413f, 1322,206f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(780,901f, 78,413f, 1320,856f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(&Param0 + 24) = Vector(788,061f, 78,306f, 1310,506f);
			*(&Param0 + 36) = Vector(788,064f, 78,306f, 1301,43f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(782,021f, 78,419f, 1294,476f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(779,472f, 78,42f, 1290,639f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(780,614f, 78,42f, 1289,73f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(797,764f, 78,468f, 1288,355f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(&Param0 + 24) = Vector(686,033f, 78,197f, 1303,161f);
			*(&Param0 + 36) = Vector(685,943f, 78,195f, 1312,249f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(692,386f, 78,49f, 1319,771f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(693,316f, 78,474f, 1329,634f);
			(*&Param0 + 168)[1] = 256;
			*(&Param0 + 64[22]) = Vector(680,325f, 79,321f, 1325,2f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(679,214f, 79,322f, 1323,885f);
			(*&Param0 + 168)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(&Param0 + 24) = Vector(685,853f, 78,197f, 1321,337f);
			*(&Param0 + 36) = Vector(685,943f, 78,195f, 1312,249f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(671,907f, 78,472f, 1293,629f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(671,832f, 78,47f, 1291,321f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(691,761f, 78,49f, 1290,059f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(691,998f, 78,49f, 1296,535f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(&Param0 + 24) = Vector(739,831f, 78,306f, 1252,583f);
			*(&Param0 + 36) = Vector(730,21f, 78,306f, 1252,583f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(723,05f, 78,471f, 1260,361f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(719,061f, 78,471f, 1260,12f);
			(*&Param0 + 168)[1] = 5120;
			*(&Param0 + 64[22]) = Vector(718,014f, 78,471f, 1259,29f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(699,142f, 78,527f, 1242,135f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(&Param0 + 24) = Vector(720,589f, 78,306f, 1252,583f);
			*(&Param0 + 36) = Vector(730,21f, 78,306f, 1252,583f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(743,34f, 78,504f, 1244,251f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(755,658f, 78,422f, 1260,858f);
			(*&Param0 + 168)[1] = 512;
			*(&Param0 + 64[22]) = Vector(746,283f, 78,422f, 1259,612f);
			(*&Param0 + 168)[2] = 5120;
			*(&Param0 + 64[32]) = Vector(744,823f, 78,421f, 1260,437f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(&Param0 + 24) = Vector(686,412f, 78,306f, 1351,855f);
			*(&Param0 + 36) = Vector(686,271f, 78,306f, 1361,19f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(693,253f, 78,381f, 1375,135f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(691,817f, 78,373f, 1376,577f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(681,885f, 78,446f, 1380,694f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(680,597f, 78,502f, 1372,951f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(&Param0 + 24) = Vector(686,13f, 78,306f, 1370,525f);
			*(&Param0 + 36) = Vector(686,271f, 78,306f, 1361,19f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 220.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(679,044f, 78,306f, 1346,869f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(678,93f, 79,291f, 1340,874f);
			(*&Param0 + 168)[1] = 4352;
			*(&Param0 + 64[22]) = Vector(692,642f, 78,485f, 1345,834f);
			(*&Param0 + 168)[2] = 1024;
			*(&Param0 + 64[32]) = Vector(693,52f, 78,485f, 1347,342f);
			(*&Param0 + 168)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(&Param0 + 24) = Vector(732,158f, 78,314f, 1399,543f);
			*(&Param0 + 36) = Vector(741,11f, 78,306f, 1397,618f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(750,645f, 78,611f, 1386,18f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(751,968f, 78,606f, 1385,991f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(756,953f, 78,306f, 1385,658f);
			(*&Param0 + 168)[2] = 512;
			*(&Param0 + 64[32]) = Vector(751,965f, 80,39f, 1404,842f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(&Param0 + 24) = Vector(750,062f, 78,314f, 1395,693f);
			*(&Param0 + 36) = Vector(741,11f, 78,306f, 1397,618f);
			Param0.f_48 = 10.0f;
			Param0.f_52 = 175.0f;
			Param0.f_56 = 0;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(734,462f, 79,769f, 1408,614f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(731,99f, 79,78f, 1408,546f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(727,562f, 78,811f, 1408,402f);
			(*&Param0 + 168)[2] = 256;
			*(&Param0 + 64[32]) = Vector(723,946f, 78,804f, 1407,98f);
			(*&Param0 + 168)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_139(struct<61> Param0) //Position: 0xA0B8 / 41144
{
	if (iLocal_4 != 0)
	{
		Param0.f_56 = 1;
		Param0.f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967295)
	{
		Param0.f_56 = 1;
		Param0.f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967292)
	{
		Param0.f_48 = 10.0f;
		Param0.f_52 = 30.0f;
		Param0.f_56 = 1;
		Param0.f_60 = 4;
		*(&Param0 + 64[02]) = Vector(111,425f, 73,767f, 2280,372f);
		(*&Param0 + 168)[0] = 5120;
		*(&Param0 + 64[12]) = Vector(112,086f, 73,639f, 2278,207f);
		(*&Param0 + 168)[1] = 12800;
		*(&Param0 + 64[22]) = Vector(113,136f, 73,646f, 2273,555f);
		(*&Param0 + 168)[2] = 1024;
		*(&Param0 + 64[32]) = Vector(113,364f, 73,645f, 2272,118f);
		(*&Param0 + 168)[3] = 16896;
		return 1;
	}
	if (iParam1 == 4294967294)
	{
		if (Global_43789 == Global_46816[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-806,792f, 92,727f, 2373,401f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-807,277f, 92,736f, 2375,261f);
			(*&Param0 + 168)[1] = 12800;
			*(&Param0 + 64[22]) = Vector(-809,876f, 92,834f, 2381,274f);
			(*&Param0 + 168)[2] = 35072;
			*(&Param0 + 64[32]) = Vector(-823,197f, 92,307f, 2378,322f);
			(*&Param0 + 168)[3] = 1024;
			*(&Param0 + 64[42]) = Vector(-823,026f, 92,375f, 2376,612f);
			(*&Param0 + 168)[4] = 35072;
			*(&Param0 + 64[52]) = Vector(-822,463f, 92,431f, 2375,01f);
			(*&Param0 + 168)[5] = 20992;
			return 1;
		}
		if (Global_43789 == Global_46760[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 110.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-2160,207f, 16,882f, 2605,83f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-2158,595f, 16,881f, 2605,596f);
			(*&Param0 + 168)[1] = 8704;
			*(&Param0 + 64[22]) = Vector(-2159,184f, 16,894f, 2605,341f);
			(*&Param0 + 168)[2] = 35072;
			*(&Param0 + 64[32]) = Vector(-2155,752f, 16,449f, 2618,374f);
			(*&Param0 + 168)[3] = 35072;
			*(&Param0 + 64[42]) = Vector(-2153,08f, 16,371f, 2616,611f);
			(*&Param0 + 168)[4] = 17408;
			*(&Param0 + 64[52]) = Vector(-2154,778f, 16,401f, 2617,199f);
			(*&Param0 + 168)[5] = 4608;
			return 1;
		}
		if (Global_43789 == Global_46816[1])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 90.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(155,69f, 73,755f, 2200,008f);
			(*&Param0 + 168)[0] = 39168;
			*(&Param0 + 64[12]) = Vector(158,627f, 73,755f, 2198,852f);
			(*&Param0 + 168)[1] = 13312;
			*(&Param0 + 64[22]) = Vector(160,233f, 73,755f, 2197,97f);
			(*&Param0 + 168)[2] = 4608;
			*(&Param0 + 64[32]) = Vector(172,272f, 73,286f, 2210,202f);
			(*&Param0 + 168)[3] = 35072;
			*(&Param0 + 64[42]) = Vector(169,259f, 73,286f, 2213,359f);
			(*&Param0 + 168)[4] = 21504;
			*(&Param0 + 64[52]) = Vector(168,629f, 73,286f, 2214,713f);
			(*&Param0 + 168)[5] = 4608;
			return 1;
		}
		if (Global_43789 == Global_46894[2])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-809,175f, 16,665f, 3709,376f);
			(*&Param0 + 168)[0] = 5120;
			*(&Param0 + 64[12]) = Vector(-807,866f, 16,665f, 3708,143f);
			(*&Param0 + 168)[1] = 20992;
			*(&Param0 + 64[22]) = Vector(-806,33f, 16,665f, 3706,44f);
			(*&Param0 + 168)[2] = 20992;
			*(&Param0 + 64[32]) = Vector(-800,715f, 16,665f, 3700,73f);
			(*&Param0 + 168)[3] = 4352;
			*(&Param0 + 64[42]) = Vector(-785,693f, 13,051f, 3713,464f);
			(*&Param0 + 168)[4] = 35072;
			*(&Param0 + 64[52]) = Vector(-785,114f, 13,051f, 3716,611f);
			(*&Param0 + 168)[5] = 35072;
			return 1;
		}
		if (Global_43789 == Global_46914[1])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-143,332f, 119,009f, 1353,172f);
			*(&Param0 + 64[12]) = Vector(-144,653f, 120,644f, 1357,015f);
			*(&Param0 + 64[22]) = Vector(-144,869f, 119,855f, 1359,631f);
			*(&Param0 + 64[32]) = Vector(-129,628f, 118,869f, 1352,225f);
			*(&Param0 + 64[42]) = Vector(-128,989f, 118,869f, 1358,801f);
			*(&Param0 + 64[52]) = Vector(-129,897f, 118,869f, 1361,462f);
			return 1;
		}
		if (Global_43789 == Global_46914[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 100.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 0;
			*(&Param0 + 64[02]) = Vector(853,294f, 77,517f, 1279,476f);
			*(&Param0 + 64[12]) = Vector(852,864f, 77,517f, 1282,613f);
			*(&Param0 + 64[22]) = Vector(853,532f, 77,517f, 1283,355f);
			*(&Param0 + 64[32]) = Vector(859,177f, 77,517f, 1267,618f);
			*(&Param0 + 64[42]) = Vector(861,636f, 77,517f, 1278,204f);
			*(&Param0 + 64[52]) = Vector(861,581f, 77,517f, 1279,349f);
			return 1;
		}
		if (Global_43789 == Global_46866[0])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 50.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 6;
			*(&Param0 + 64[02]) = Vector(-2689,855f, 31,151f, 4274,476f);
			(*&Param0 + 168)[0] = 35072;
			*(&Param0 + 64[12]) = Vector(-2689,877f, 31,151f, 4278,589f);
			(*&Param0 + 168)[1] = 13312;
			*(&Param0 + 64[22]) = Vector(-2690,326f, 31,152f, 4279,999f);
			(*&Param0 + 168)[2] = 512;
			*(&Param0 + 64[32]) = Vector(-2703,691f, 31,151f, 4280,464f);
			(*&Param0 + 168)[3] = 35072;
			*(&Param0 + 64[42]) = Vector(-2704,23f, 31,155f, 4278,981f);
			(*&Param0 + 168)[4] = 21504;
			*(&Param0 + 64[52]) = Vector(-2703,474f, 31,146f, 4271,279f);
			(*&Param0 + 168)[5] = 4608;
			return 1;
		}
	}
	if (iParam1 == 4294967293)
	{
		if (Global_43789 == Global_46796[4])
		{
			Param0.f_48 = 10.0f;
			Param0.f_52 = 30.0f;
			Param0.f_56 = 1;
			Param0.f_60 = 4;
			*(&Param0 + 64[02]) = Vector(-3679,563f, 8,483f, 3479,026f);
			(*&Param0 + 168)[0] = 4352;
			*(&Param0 + 64[12]) = Vector(-3675,23f, 8,26f, 3484,906f);
			(*&Param0 + 168)[1] = 1024;
			*(&Param0 + 64[22]) = Vector(-3673,747f, 8,256f, 3481,049f);
			(*&Param0 + 168)[2] = 8704;
			*(&Param0 + 64[32]) = Vector(-3675,517f, 8,201f, 3492,157f);
			(*&Param0 + 168)[3] = 4352;
			return 1;
		}
	}
	Param0.f_48 = 10.0f;
	Param0.f_52 = 30.0f;
	Param0.f_56 = 1;
	Param0.f_60 = 0;
	return 1;
}

void Function_140(struct<1093> Param0) //Position: 0xA95A / 43354
{
	if (Function_95(Param0.f_1048, 4))
	{
		Function_190();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_189(1);
	if (Function_95(Param0.f_1048, 32))
	{
		if (Function_38(Param0.f_1092))
		{
			Function_188(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_27(&Param0, 0);
	}
	Function_69(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_95(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_141(&Param0, 1);
	return;
}

void Function_141(struct<1089> Param0) //Position: 0xA9E9 / 43497
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
				iVar0 = Function_187(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_186(&Param0) != 1)
				{
					Function_164(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_233(200, 1, 0);
				}
				else
				{
					Function_145(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_144(Param0.f_616, 1, 1);
				}
				else
				{
					Function_142(Param0.f_616, 1);
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

int Function_142(bool bParam0, bool bParam1) //Position: 0xAACE / 43726
{
	bool bVar0;
	
	bVar0 = Function_60(0);
	if ((Function_60(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_143(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_60(0));
	return 1;
}

int Function_143(int iParam0, bool bParam1, int iParam2) //Position: 0xAB5F / 43871
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
	Function_23(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_12(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_144(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAD5C / 44380
{
	bool bVar0;
	
	bVar0 = Function_60(0);
	if ((Function_60(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_10(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_60(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_10(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_60(597) + Function_60(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_145(int iParam0, bool bParam1, bool bParam2) //Position: 0xAE2E / 44590
{
	int iVar0;
	bool bVar1;
	
	if (Function_163(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_88())
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
	iVar0 = Function_60(3);
	Function_160();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_158(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_157(Global_119936, 4))
			{
				Function_152(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_10(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_21(3));
	iVar0 = Function_60(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_147(4, Function_151(Global_21369.f_248), 1);
				Function_146(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_147(4, Function_151(Global_21369.f_248), 1);
				Function_146(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_147(4, Function_151(Global_21369.f_248), 1);
				Function_146(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_147(4, Function_151(Global_21369.f_248), 1);
				Function_146(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_147(4, Function_151(Global_21369.f_248), 1);
				Function_146(Global_21369.f_244, Global_21369.f_248);
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

void Function_146(int iParam0, int iParam1) //Position: 0xB002 / 45058
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

int Function_147(int iParam0, char* cParam1) //Position: 0xB26C / 45676
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
	Function_83(iParam0, &cParam1, 0, 1);
	iVar1 = Function_148();
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

int Function_148() //Position: 0xB3FC / 46076
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
	Function_149();
	return 0;
}

void Function_149() //Position: 0xB49D / 46237
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
		Function_150(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_150(int iParam0) //Position: 0xB55B / 46427
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

var Function_151(int iParam0) //Position: 0xB5C1 / 46529
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

void Function_152(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB650 / 46672
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_154(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_153(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_153(char* cParam0) //Position: 0xB6C5 / 46789
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

bool Function_154(int iParam0, var uParam1, int iParam2) //Position: 0xB6FF / 46847
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
		if (Function_156(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_155(uVar0))
		{
			case 0x00000002:
				if (!Function_157(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_155(char* cParam0) //Position: 0xB77B / 46971
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

int Function_156(int iParam0) //Position: 0xB81C / 47132
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_49(&iVar1, 2147483648);
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

bool Function_157(var uParam0, int iParam1) //Position: 0xB859 / 47193
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0, bool bParam1) //Position: 0xB86C / 47212
{
	bool bVar0;
	int iVar1;
	
	Function_10(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_159(iParam0, 4294967295);
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
	iVar1 = Function_148();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_159(int iParam0, int iParam1) //Position: 0xBA18 / 47640
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

void Function_160() //Position: 0xBA5D / 47709
{
	Function_162(3, 0.0f);
	Function_161(3, 10000.0f);
	return;
}

int Function_161(int iParam0, int iParam1) //Position: 0xBA73 / 47731
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_162(int iParam0, int iParam1) //Position: 0xBAB3 / 47795
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_163(int iParam0) //Position: 0xBAF3 / 47859
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_164(int iParam0, char* cParam1, bool bParam2) //Position: 0xBB02 / 47874
{
	char* cVar0[32];
	
	if (!Function_185(3))
	{
		return;
	}
	if (Function_36())
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
						if (IS_PS3() || Function_184())
						{
							Function_165(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_165(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_165(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_184())
					{
						Function_165(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_165(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_165(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_165(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_165(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBC18 / 48152
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_183(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_185(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_182(bParam0, 2))
	{
		Function_10(456, 1, 0, 0);
		Function_181(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_230(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_180(bParam0, iParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || iParam1);
		Function_181(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_179(0, 0, 1, 1))
			{
				Function_48(1);
				Function_47(1, 0);
			}
			else
			{
				Function_178();
			}
		}
		Function_173(bParam0);
		if (StackVal && !Function_95(((((!Function_172() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_95((((Function_172() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_36())
		{
			if (!Function_157(Global_119934, 2))
			{
				Function_152(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_167();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_166(3, iParam1);
				break;
			
			case 0x00000005:
				Function_166(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_166(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_166(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_166(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_166(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_80(2, 24);
				break;
			
			case 0x00000003:
				Function_80(2, 25);
				break;
			
			case 0x0000000F:
				Function_80(2, 26);
				break;
			
			case 0x0000000D:
				Function_80(2, 27);
				break;
			
			case 0x0000000E:
				Function_80(2, 28);
				break;
			}
	}
}

void Function_166(int iParam0, int iParam1) //Position: 0xBEB7 / 48823
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&iParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_167() //Position: 0xBF26 / 48934
{
	if (Function_183(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_171(Global_42827);
			*(&Global_42827 + 8) = Function_168(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_171(Global_42827);
			*(&Global_42827 + 8) = Function_168(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_168(int iParam0, int iParam1) //Position: 0xBFA6 / 49062
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
					if (Function_170(6, 0) || Function_170(12, 0))
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
					if (Function_169(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_170(5, 0))
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
					if (Function_169(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_169(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_169(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_169(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_170(26, 0))
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
					if (Function_169(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_169(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_169(27) && iVar16)
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
					if (Function_169(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_169(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_169(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_169(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_170(17, 0) && iVar13)
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
					if (Function_169(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_170(6, 0) && Function_169(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_169(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_170(9, 0) && Function_169(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_169(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_170(8, 0) && iVar17)
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
	if (Function_67(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_67(StackVal, vVar2))
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
	if (!Function_67(StackVal, vVar2))
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

int Function_169(int iParam0) //Position: 0xCC0D / 52237
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_170(int iParam0, bool bParam1) //Position: 0xCC22 / 52258
{
	int iVar0;
	
	iVar0 = Function_86(iParam0);
	if (!Function_38(iVar0))
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

int Function_171(int iParam0) //Position: 0xCC60 / 52320
{
	int iVar0;
	int iVar1;
	
	if (!Function_183(iParam0))
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

bool Function_172() //Position: 0xCCAF / 52399
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_173(bool bParam0) //Position: 0xCCDC / 52444
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	int iVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		iVar24 = 0;
		while (iVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_180(bParam0, Function_177(iVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, 0);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, 0);
			}
			iVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		iVar24 = 0;
		while (iVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_180(bParam0, Function_177(iVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			iVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_176(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_175(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_174(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_174(int iParam0) //Position: 0xCE8C / 52876
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_183(iParam0))
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

void Function_175(var uParam0, int iParam1) //Position: 0xCEE3 / 52963
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

var Function_176(int iParam0) //Position: 0xCF08 / 53000
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_183(iParam0))
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

int Function_177(int iParam0) //Position: 0xCF5E / 53086
{
	return SHIFT_LEFT(1, iParam0);
}

void Function_178() //Position: 0xCF6A / 53098
{
	return;
}

bool Function_179(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xCF70 / 53104
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

bool Function_180(bool bParam0, int iParam1) //Position: 0xD01F / 53279
{
	int iVar0;
	
	if (!Function_183(bParam0))
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

void Function_181(int iParam0, int iParam1) //Position: 0xD07E / 53374
{
	if (!Function_183(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_182(int iParam0, int iParam1) //Position: 0xD0D3 / 53459
{
	int iVar0;
	
	if (!Function_183(iParam0))
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

bool Function_183(int iParam0) //Position: 0xD100 / 53504
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_184() //Position: 0xD116 / 53526
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_95(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_185(int iParam0) //Position: 0xD146 / 53574
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_186(struct<1049> Param0) //Position: 0xD162 / 53602
{
	return !Function_95(Param0.f_1048, 16384);
}

var Function_187(struct<921> Param0) //Position: 0xD175 / 53621
{
	return Param0.f_920;
}

void Function_188(int iParam0, int iParam1) //Position: 0xD181 / 53633
{
	int iVar0;
	
	if (!Function_89(iParam0))
	{
		Function_40();
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
	iVar0 = Function_39(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_48(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_37(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_189(int iParam0) //Position: 0xD1E9 / 53737
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_92())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_190() //Position: 0xD222 / 53794
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_191(struct<1093> Param0) //Position: 0xD238 / 53816
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_212(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_67(StackVal, Param3))
	{
		(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_69(&Param0 + 1048, 4);
	}
	else
	{
		Function_49(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_38(Param0.f_1092))
		{
			Function_211(Param0.f_1092, 1);
			Function_69(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_69(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_195(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_194(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_193(&Param0 + 1032);
	}
	Function_193(&Param0 + 60);
	Function_192(0);
}

void Function_192(int iParam0) //Position: 0xD3AF / 54191
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_101(105)), 0);
	return;
}

void Function_193(int iParam0) //Position: 0xD3D2 / 54226
{
	Function_285(&iParam0, 0.0f);
	return;
}

void Function_194(var uParam0, bool bParam1) //Position: 0xD3DF / 54239
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		iVar0++;
	}
	return;
}

void Function_195(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5) //Position: 0xD426 / 54310
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_209(10.0f);
	Var12 = { StackVal, Function_209(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_208(&iParam4) || &iParam4 != 0)
		{
			bVar14 = Function_198(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &iParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_196(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_196(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_196(vector3 vParam0) //Position: 0xD520 / 54560
{
	struct<2> Var0;
	
	if (!Function_197(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, iParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_197(int iParam0) //Position: 0xD66D / 54893
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

var Function_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD691 / 54929
{
	return Function_199(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_199(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xD6AE / 54958
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_202(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_202(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_202(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_202(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_202(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_202(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_202(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_202(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_202(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_202(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_202(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_202(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_202(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_202(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_200(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_200(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0xD911 / 55569
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_201(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_201(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_201(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_201(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_201(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_201(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_201(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_201(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_201(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_201(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_201(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_201(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_201(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_201(&(Global_46972[13]), &bVar0);
	}
	return Function_202(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_201(var uParam0, bool bParam1) //Position: 0xDA80 / 55936
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

var Function_202(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xDB44 / 56132
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_207();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_208(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_206(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_206(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_205(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_208(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_205(iVar0))
				{
					Function_204();
				}
				Function_203(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_208(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
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
	return iVar0;
}

void Function_203(int iParam0) //Position: 0xDE3D / 56893
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

void Function_204() //Position: 0xDEF1 / 57073
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

bool Function_205(int iParam0) //Position: 0xDF2C / 57132
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_206(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xDF59 / 57177
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

void Function_207() //Position: 0xE0B4 / 57524
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_204();
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
	Function_204();
	return;
}

bool Function_208(int iParam0) //Position: 0xE100 / 57600
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_209(int iParam0) //Position: 0xE117 / 57623
{
	Function_210(iParam0, 10);
	return StackVal, Function_210(iParam0, 10);
}

struct<8> Function_210(var uParam0, int iParam1) //Position: 0xE124 / 57636
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_211(int iParam0, int iParam1) //Position: 0xE13F / 57663
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_89(iParam0))
	{
		Function_40();
		return;
	}
	iVar0 = Function_39(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_48(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_37(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_43(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_212(int iParam0) //Position: 0xE1E6 / 57830
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&cVar0, "procMisslayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(&cVar0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_213(struct<1093> Param0) //Position: 0xE261 / 57953
{
	if (Function_38(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_69(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_214(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE2B8 / 58040
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_218(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_215(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_215(bParam0, bParam1, bParam2, 4294967295);
}

int Function_215(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xE316 / 58134
{
	var uVar0;
	
	if (!Function_217(bParam2))
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
	uVar0 = Function_218(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_216(uVar0);
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

var Function_216(int iParam0) //Position: 0xE47A / 58490
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

bool Function_217(int iParam0) //Position: 0xE4B8 / 58552
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_218(int iParam0, int iParam1, int iParam2) //Position: 0xE4CD / 58573
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_219(int iParam0) //Position: 0xE4ED / 58605
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_220(&iParam0);
		return 1;
	}
	return 0;
}

void Function_220(var uParam0) //Position: 0xE505 / 58629
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

bool Function_221(var uParam0, float fParam1) //Position: 0xE538 / 58680
{
	if (Function_224(&uParam0))
	{
		if (Function_222(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_222(vector3 vParam0) //Position: 0xE556 / 58710
{
	if (Function_224(&vParam0))
	{
		if (Function_223(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_223(int iParam0) //Position: 0xE623 / 58915
{
	return Function_95(iParam0, 2);
}

bool Function_224(bool bParam0) //Position: 0xE631 / 58929
{
	return Function_95(bParam0, 1);
}

void Function_225(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xE63F / 58943
{
	uParam1 = &uParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_242(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&uParam1))
			{
				uParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &uParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &uParam2, &uParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

void Function_226() //Position: 0xE6EC / 59116
{
	int iVar0;
	
	bLocal_682 = true;
	if (Global_43787 == 0)
	{
		iVar0 = Function_228(3);
		if (iVar0 == 0)
		{
			uLocal_680 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			uLocal_680 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			uLocal_680 = "FTR_SONG_07";
		}
	}
	else if (Global_43787 == 2)
	{
		if (Function_227())
		{
			uLocal_680 = "NRT_SONG_04";
		}
		else
		{
			uLocal_680 = "NRT_SONG_05";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar0 = Function_228(3);
		if (iVar0 == 0)
		{
			uLocal_680 = "MEX_SONG_01";
		}
		else if (iVar0 == 1)
		{
			uLocal_680 = "MEX_SONG_03";
		}
		else if (iVar0 == 2)
		{
			uLocal_680 = "MEX_SONG_05";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&uLocal_680, "PASTORAL", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_227() //Position: 0xE803 / 59395
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

int Function_228(bool bParam0) //Position: 0xE816 / 59414
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_229(bool bParam0) //Position: 0xE82F / 59439
{
	return 0;
	if (!IS_ACTOR_ON_FOOT(&Global_54076))
	{
		if (bParam0)
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_B("You must be on foot to get challenged to a duel. Once you are on foot the challenger will respond to you.", 10.0f, 1, 2, 1, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_230(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xE8C7 / 59591
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_43(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_231(int iParam0, bool bParam1) //Position: 0xE952 / 59730
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
			Function_219(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_219(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_232(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
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

int Function_232(int iParam0, int iParam1) //Position: 0xE9FD / 59901
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

void Function_233(int iParam0, bool bParam1, bool bParam2) //Position: 0xEA4F / 59983
{
	int iVar0;
	bool bVar1;
	
	if (Function_163(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_88())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_60(1);
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
			Function_158(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_157(Global_119936, 1))
				{
					Function_152(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_235(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_157(Global_119936, 2))
				{
					Function_152(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_10(1, bVar1, 0, 0);
	}
	else
	{
		Function_143(1, (4294967295 * bVar1), 0);
	}
	if (Function_60(1) <= 4294962296)
	{
		Function_59(1, 4294962296, 0);
	}
	else if (Function_60(1) >= 5000)
	{
		Function_59(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_21(1));
	iVar0 = Function_60(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_147(2, Function_234(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_147(2, Function_234(Global_21369.f_244), 0);
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
				Function_147(2, Function_234(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_147(2, Function_234(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_147(2, Function_234(Global_21369.f_244), 1);
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
				Function_147(2, Function_234(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_147(2, Function_234(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_147(2, Function_234(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_147(2, Function_234(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_147(2, Function_234(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_147(2, Function_234(Global_21369.f_244), 1);
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
				Function_147(2, Function_234(Global_21369.f_244), 0);
			}
			break;
	}
	Function_146(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_234(int iParam0) //Position: 0xED76 / 60790
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

int Function_235(int iParam0, bool bParam1) //Position: 0xEE19 / 60953
{
	bool bVar0;
	int iVar1;
	
	Function_143(iParam0, bParam1, 0);
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
	iVar1 = Function_159(iParam0, 4294967295);
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
	iVar1 = Function_148();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_236(bool bParam0) //Position: 0xEFC4 / 61380
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

int Function_237(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0xEFFB / 61435
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
		fVar0 = Function_242(&iParam0, &Global_54076);
		if (!Function_95(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_238(&iParam0);
				return 1;
			}
		}
		if (!Function_95(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_238(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_238(&iParam0);
				return 1;
			}
		}
		if (!Function_95(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_238(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_238(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_95(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_238(&iParam0);
				return 1;
			}
		}
		if (!Function_95(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_238(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_238(int iParam0) //Position: 0xF1C4 / 61892
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_239(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_239(int iParam0) //Position: 0xF201 / 61953
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_240(bool bParam0) //Position: 0xF21A / 61978
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_241(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_241(var uParam0, int iParam1) //Position: 0xF256 / 62038
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

float Function_242(var uParam0, int iParam1) //Position: 0xF2E7 / 62183
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

void Function_243(int iParam0) //Position: 0xF3DC / 62428
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_244(var uParam0, bool bParam1, bool bParam2) //Position: 0xF472 / 62578
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_246(&uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (&bParam2)
		{
			Function_245();
		}
	}
	return;
}

void Function_245() //Position: 0xF49D / 62621
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

void Function_246(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0xF526 / 62758
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
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_43(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

int Function_247(var uParam0, int iParam1) //Position: 0xF5BB / 62907
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
	Function_249(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_248(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_248(int iParam0, var uParam1, struct<2> Param2) //Position: 0xF725 / 63269
{
	struct<8> Var0;
	
	(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_249(bool bParam0) //Position: 0xF7CD / 63437
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
						Function_251(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_250(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_251(iVar0);
						}
					}
					else if (Function_250(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_251(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&bParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_251(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_250(var uParam0, struct<2> Param1) //Position: 0xF93B / 63803
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_133(&uParam0);
		Var0 = Function_133(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_251(int iParam0) //Position: 0xF9B2 / 63922
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

bool Function_252(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xFA1A / 64026
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
		Function_254("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_253(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_253(&bVar0);
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
			Function_253(&bVar0);
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

void Function_253(bool bParam0) //Position: 0xFC86 / 64646
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

void Function_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xFCD0 / 64720
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_43(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<32> Function_255(char* cParam0) //Position: 0xFD55 / 64853
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_256(char* cParam0) //Position: 0xFDC1 / 64961
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_257(struct<2> Param0, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFDE3 / 64995
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &fParam2, &fParam3, &iParam4, &iParam5, &iParam6);
}

float Function_258() //Position: 0xFE04 / 65028
{
	float fVar0;
	var uVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_241(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_259(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xFE35 / 65077
{
	if (StackVal & 64 == 64)
	{
		if (!iParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_242(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_262() && !iParam2)
		{
			return 0;
		}
		if (Function_261(iParam0) && !iParam2)
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
		if (!Function_260(iParam0, &iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_260(int iParam0, int iParam1) //Position: 0xFF78 / 65400
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

int Function_261(int iParam0) //Position: 0xFF99 / 65433
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

int Function_262() //Position: 0xFFD9 / 65497
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
						if (Function_131(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_131(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_263(var uParam0, float fParam1, bool bParam2, int iParam3, struct<2> Param4, bool bParam6) //Position: 0x1009E / 65694
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	if (Global_43789 == Global_46760[0])
	{
		iVar0 = 10;
		(&Local_5[04] + 12) = Vector(-2175,953f, 16,256f, 2611,705f);
		*(&Local_5[14] + 12) = Vector(-2157,237f, 16,256f, 2611,759f);
		Local_5[04] = Vector(-2167,807f, 16,444f, 2607,576f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = 205.0f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(-2141,009f, 16,097f, 2610,77f);
		*(&Local_5[34] + 12) = Vector(-2163,419f, 16,097f, 2611,458f);
		Local_5[24] = Vector(-2152,337f, 16,413f, 2617,464f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 354,044f;
		Local_5[34].f_24 = Local_5[24].f_24;
		*(&Local_5[44] + 12) = Vector(-2109,022f, 16,306f, 2610,545f);
		*(&Local_5[54] + 12) = Vector(-2131,586f, 16,306f, 2610,295f);
		Local_5[44] = Vector(-2117,347f, 16,347f, 2617,75f);
		Local_5[54] = Local_5[44];
		Local_5[44].f_24 = -3.0f;
		Local_5[54].f_24 = Local_5[44].f_24;
		*(&Local_5[64] + 12) = Vector(-2181,665f, 16,199f, 2626,591f);
		*(&Local_5[74] + 12) = Vector(-2181,451f, 16,199f, 2607,999f);
		Local_5[64] = Vector(-2186,093f, 16,341f, 2617,544f);
		Local_5[74] = Local_5[64];
		Local_5[64].f_24 = 253.0f;
		Local_5[74].f_24 = Local_5[64].f_24;
		*(&Local_5[84] + 12) = Vector(-2182,602f, 16,279f, 2582,669f);
		*(&Local_5[94] + 12) = Vector(-2182,512f, 16,279f, 2602,813f);
		Local_5[84] = Vector(-2177,891f, 16,454f, 2592,662f);
		Local_5[94] = Local_5[84];
		Local_5[84].f_24 = 90.0f;
		Local_5[94].f_24 = Local_5[84].f_24;
	}
	else if (Global_43789 == Global_46816[0])
	{
		iVar0 = 6;
		*(&Local_5[04] + 12) = Vector(-833,757f, 92,093f, 2405,053f);
		*(&Local_5[14] + 12) = Vector(-815,963f, 92,093f, 2406,769f);
		Local_5[04] = Vector(-825,105f, 92,566f, 2400,488f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = 167.0f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(-948,017f, 90,246f, 2443,329f);
		*(&Local_5[34] + 12) = Vector(-932,475f, 90,246f, 2435,743f);
		Local_5[24] = Vector(-936,871f, 90,326f, 2444,74f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 27.0f;
		Local_5[34].f_24 = Local_5[24].f_24;
		*(&Local_5[44] + 12) = Vector(-773,226f, 92,264f, 2441,655f);
		*(&Local_5[54] + 12) = Vector(-785,8f, 92,264f, 2429,783f);
		Local_5[44] = Vector(-775,843f, 92,305f, 2432,765f);
		Local_5[54] = Local_5[44];
		Local_5[44].f_24 = 126,229f;
		Local_5[54].f_24 = Local_5[44].f_24;
	}
	else if (Global_43789 == Global_46816[1])
	{
		iVar0 = 6;
		*(&Local_5[04] + 12) = Vector(161,801f, 73,036f, 2209,601f);
		*(&Local_5[14] + 12) = Vector(147,555f, 73,036f, 2219,463f);
		Local_5[04] = Vector(159,933f, 73,286f, 2221,292f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = 86,752f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(112,178f, 73,036f, 2307,669f);
		*(&Local_5[34] + 12) = Vector(115,414f, 73,036f, 2290,921f);
		Local_5[24] = Vector(119,576f, 73,286f, 2300,245f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 62,994f;
		Local_5[34].f_24 = Local_5[24].f_24;
		*(&Local_5[44] + 12) = Vector(125,52f, 72,495f, 2253,003f);
		*(&Local_5[54] + 12) = Vector(120,498f, 72,495f, 2269,145f);
		Local_5[44] = Vector(121,158f, 72,679f, 2260,647f);
		Local_5[54] = Local_5[44];
		Local_5[44].f_24 = 256,943f;
		Local_5[54].f_24 = Local_5[44].f_24;
	}
	else if (Global_43789 == Global_46850[0])
	{
		iVar0 = 6;
		*(&Local_5[04] + 12) = Vector(-4297,778f, 22,269f, 4404,503f);
		*(&Local_5[14] + 12) = Vector(-4304,795f, 22,573f, 4404,685f);
		Local_5[04] = Vector(-4299,19f, 22,005f, 4410,046f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = -46,99f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(-4267,992f, 18,109f, 4437,149f);
		*(&Local_5[34] + 12) = Vector(-4282,06f, 18,109f, 4446,621f);
		Local_5[24] = Vector(-4275,12f, 18,128f, 4437,712f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 221,481f;
		Local_5[34].f_24 = Local_5[24].f_24;
		*(&Local_5[44] + 12) = Vector(-4318,445f, 22,086f, 4450,013f);
		*(&Local_5[54] + 12) = Vector(-4319,349f, 22,086f, 4431,821f);
		Local_5[44] = Vector(-4325,721f, 22,518f, 4441,153f);
		Local_5[54] = Local_5[44];
		Local_5[44].f_24 = 262,357f;
		Local_5[54].f_24 = Local_5[44].f_24;
	}
	else if (Global_43789 == Global_46866[0])
	{
		iVar0 = 4;
		*(&Local_5[04] + 12) = Vector(-2732,999f, 32,668f, 4258,262f);
		*(&Local_5[14] + 12) = Vector(-2716,179f, 32,668f, 4250,88f);
		Local_5[04] = Vector(-2723,667f, 32,437f, 4248,966f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = 171,264f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(-2678,78f, 31,48f, 4241,123f);
		*(&Local_5[34] + 12) = Vector(-2698,71f, 31,48f, 4242,091f);
		Local_5[24] = Vector(-2686,525f, 31,359f, 4246,266f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 12,963f;
		Local_5[34].f_24 = Local_5[24].f_24;
	}
	else if (Global_43789 == Global_46894[2])
	{
		iVar0 = 6;
		*(&Local_5[04] + 12) = Vector(-819,766f, 12,801f, 3773,009f);
		*(&Local_5[14] + 12) = Vector(-807,17f, 12,801f, 3760,925f);
		Local_5[04] = Vector(-811,221f, 13,03f, 3769,003f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = 44,673f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(-787,179f, 12,801f, 3736,633f);
		*(&Local_5[34] + 12) = Vector(-798,855f, 12,801f, 3749,463f);
		Local_5[24] = Vector(-796,067f, 13,023f, 3740,458f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 229,193f;
		Local_5[34].f_24 = Local_5[24].f_24;
		*(&Local_5[44] + 12) = Vector(-804,814f, 13,051f, 3719,617f);
		*(&Local_5[54] + 12) = Vector(-798,673f, 13,051f, 3713,655f);
		Local_5[44] = Vector(-805,863f, 13,051f, 3712,442f);
		Local_5[54] = Local_5[44];
		Local_5[44].f_24 = 219,125f;
		Local_5[54].f_24 = Local_5[44].f_24;
	}
	else if (Global_43789 == Global_46914[0])
	{
		iVar0 = 12;
		*(&Local_5[04] + 12) = Vector(735,953f, 78,306f, 1324,242f);
		*(&Local_5[14] + 12) = Vector(735,953f, 78,306f, 1305,9f);
		Local_5[04] = Vector(728,04f, 78,466f, 1318,389f);
		Local_5[14] = Local_5[04];
		Local_5[04].f_24 = -88,791f;
		Local_5[14].f_24 = Local_5[04].f_24;
		*(&Local_5[24] + 12) = Vector(788,067f, 78,306f, 1292,354f);
		*(&Local_5[34] + 12) = Vector(788,061f, 78,306f, 1310,506f);
		Local_5[24] = Vector(781,558f, 78,435f, 1297,9f);
		Local_5[34] = Local_5[24];
		Local_5[24].f_24 = 269,756f;
		Local_5[34].f_24 = Local_5[24].f_24;
		*(&Local_5[44] + 12) = Vector(686,033f, 78,197f, 1303,161f);
		*(&Local_5[54] + 12) = Vector(685,853f, 78,197f, 1321,337f);
		Local_5[44] = Vector(679,536f, 78,145f, 1310,718f);
		Local_5[54] = Local_5[44];
		Local_5[44].f_24 = -59,97f;
		Local_5[54].f_24 = Local_5[44].f_24;
		*(&Local_5[64] + 12) = Vector(739,831f, 78,306f, 1252,583f);
		*(&Local_5[74] + 12) = Vector(720,589f, 78,306f, 1252,583f);
		Local_5[64] = Vector(733,714f, 78,435f, 1246,104f);
		Local_5[74] = Local_5[64];
		Local_5[64].f_24 = 179,849f;
		Local_5[74].f_24 = Local_5[64].f_24;
		*(&Local_5[84] + 12) = Vector(686,412f, 78,306f, 1351,855f);
		*(&Local_5[94] + 12) = Vector(686,13f, 78,306f, 1370,525f);
		Local_5[84] = Vector(681,521f, 78,493f, 1359,064f);
		Local_5[94] = Local_5[84];
		Local_5[84].f_24 = -43,152f;
		Local_5[94].f_24 = Local_5[84].f_24;
		*(&Local_5[104] + 12) = Vector(732,158f, 78,314f, 1399,543f);
		*(&Local_5[114] + 12) = Vector(750,062f, 78,314f, 1395,693f);
		Local_5[104] = Vector(737,693f, 78,306f, 1403,752f);
		Local_5[114] = Local_5[104];
		Local_5[104].f_24 = 36,937f;
		Local_5[114].f_24 = Local_5[104].f_24;
	}
	else
	{
		return 0;
	}
	bVar1 = 1E+08.0f;
	iParam3 = 4294967295;
	if (&bParam6)
	{
		iVar3 = 0;
		while (iVar3 <= iVar0)
		{
			bVar2 = VDIST(Global_54078, Local_5[iVar34]);
			if (bVar2 > bVar1)
			{
				if (uParam0 || Function_264(&(Local_5[iVar34]), &bVar2, &fParam1))
				{
					bVar1 = bVar2;
					iParam3 = iVar3;
					bParam2 = Local_5[iVar34];
					*(&bParam2 + 12) = Vector(0.0f, Local_5[iVar34].f_24, 0.0f);
				}
			}
			iVar3++;
		}
	}
	else
	{
		iVar3 = 0;
		while (iVar3 <= iVar0)
		{
			bVar2 = VDIST(Global_54078, *(&Local_5[iVar34] + 12));
			if (bVar2 > bVar1)
			{
				if (VDIST(Local_5[iVar34], Param4) > 1.0f)
				{
					bVar1 = bVar2;
					iParam3 = iVar3;
				}
			}
			iVar3++;
		}
	}
	if (iParam3 >= 4294967295)
	{
		return 1;
	}
	return 0;
}

int Function_264(struct<2> Param0, int iParam2) //Position: 0x10CC0 / 68800
{
	if (uParam1 < Function_258())
	{
		if (!Function_257(StackVal, Param0, 1.0f, 65.0f, 1, 1, 0))
		{
			if (Function_265(&Param0, &iParam2, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_265(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x10D00 / 68864
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_249(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_266(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_266(struct<2> Param0) //Position: 0x10DDC / 69084
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

bool Function_267(struct<2>[] Param0) //Position: 0x10DFB / 69115
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_272();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_271(&(Param0[iVar02]), 8);
		}
		else if (Function_270())
		{
			iVar1 = 1;
			Function_271(&(Param0[iVar02]), 8);
		}
		Function_271(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_271(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_271(&(Param0[iVar02]), 2);
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
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_271(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_271(&(Param0[iVar02]), 2);
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
	Function_268();
	return 1;
}

void Function_268() //Position: 0x111BD / 70077
{
	if (!Function_269(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_269(int iParam0) //Position: 0x111FD / 70141
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_270() //Position: 0x11219 / 70169
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

void Function_271(struct<13> Param0) //Position: 0x11247 / 70215
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_272() //Position: 0x1125A / 70234
{
	if (!Function_269(128))
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

void Function_273(var[] uParam0, int iParam1) //Position: 0x1129C / 70300
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_274(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_274(int iParam0) //Position: 0x112CE / 70350
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_275(var[] uParam0, int iParam1) //Position: 0x11317 / 70423
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_276(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_276(int iParam0) //Position: 0x11349 / 70473
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_277(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x11393 / 70547
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

var Function_278(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1140B / 70667
{
	return Function_279(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_279(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x11422 / 70690
{
	return Function_202(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

void Function_280(var[] uParam0, int iParam1) //Position: 0x11440 / 70720
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

var Function_281(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11463 / 70755
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_271(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_271(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_282(int iParam0, int iParam1) //Position: 0x1153F / 70975
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

var Function_283(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x11555 / 70997
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_284(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_271(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_284(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x11593 / 71059
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_271(&(Param0[iVar02]), 4);
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

void Function_285(vector3 vParam0) //Position: 0x11662 / 71266
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_69(&vParam0, 1);
	Function_49(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

var Function_286() //Position: 0x11687 / 71303
{
	var uVar0;
	
	return &uVar0;
}

