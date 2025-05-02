//Decompiled with MagicRDR v1.0
//Function Count : 320
//Statics Count : 864
//Natives Count : 416
//Parameters Count : 58

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 1;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	bool bLocal_24 = false;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = false;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71 = 0.0f;
	int iLocal_72 = 0;
	bool bLocal_73 = false;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	struct<29> Local_83 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_130 = 2;
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
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	float fLocal_143 = 0.0f;
	int iLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	struct<45> Local_148 = { 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 2;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 2;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 2;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 2;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 2;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 2;
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
	var uLocal_290 = 2;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 2;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 2;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 2;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 2;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 2;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 2;
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
	var uLocal_349 = 34;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 4;
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
	var uLocal_365 = 4;
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
	var uLocal_377 = 4;
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
	var uLocal_389 = 4;
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
	var uLocal_401 = 4;
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
	var uLocal_413 = 4;
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
	var uLocal_425 = 4;
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
	var uLocal_437 = 4;
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
	var uLocal_449 = 4;
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
	var uLocal_461 = 4;
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
	var uLocal_473 = 4;
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
	var uLocal_485 = 4;
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
	var uLocal_497 = 4;
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
	var uLocal_509 = 4;
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
	var uLocal_521 = 4;
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
	var uLocal_533 = 4;
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
	var uLocal_545 = 4;
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
	var uLocal_557 = 4;
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
	var uLocal_569 = 4;
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
	var uLocal_581 = 4;
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
	var uLocal_593 = 4;
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
	var uLocal_605 = 4;
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
	var uLocal_617 = 4;
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
	var uLocal_629 = 4;
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
	var uLocal_641 = 4;
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
	var uLocal_653 = 4;
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
	var uLocal_665 = 4;
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
	var uLocal_677 = 4;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 4;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 4;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 4;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 4;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 4;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 4;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 11;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 5;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	struct<29> ScriptParam_0 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 2;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	iLocal_9 = 1000;
	bLocal_24 = true;
	iLocal_34 = 0;
	iLocal_37 = 2;
	iLocal_62 = 4294967295;
	fLocal_71 = 0,2f;
	iLocal_72 = 2;
	bLocal_73 = false;
	iLocal_74 = 0;
	iLocal_75 = 0;
	iLocal_76 = 0;
	bLocal_141 = 99;
	Local_83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_301();
	while (Function_216())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_83 };
		Function_193();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x6B / 107
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uLocal_38))
	{
		DESTROY_OBJECT(&uLocal_38);
	}
	AI_STOP_IGNORING_ACTORS();
	Function_191(Function_192());
	iVar0 = 0;
	while (iVar0 <= Local_83.f_56)
	{
		if (IS_ACTOR_VALID(&Local_83 + 4[iVar0]))
		{
			SET_DRAW_ACTOR(&Local_83 + 4[iVar0], 1);
			TASK_CLEAR(&Local_83 + 4[iVar0]);
			DEREFERENCE_ACTOR(&Local_83 + 4[iVar0]);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_83 + 4[iVar0]);
		}
		iVar0++;
	}
	ALLOW_TUMBLEWEEDS(1);
	SET_ANIMATION_OVERRIDE_SCALE(GET_PLAYER_ACTOR(0), 1.0f);
	Function_188();
	UI_EXIT("Hands");
	UI_EXIT("Scorebox");
	UI_EXIT("Scorebox_Bet");
	UI_EXIT("Scorebox_Cash");
	UI_EXIT("Scorebox_Player1");
	UI_EXIT("Scorebox_Player2");
	Function_187();
	CLEAR_PLAYER_BLOOD();
	SET_PLAYER_BLOOD_FADE_RATE(30.0f);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(GET_PLAYER_ACTOR(0), 1);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	if (IS_OBJECT_VALID(&iLocal_40))
	{
		UNK_0x7246F438(&iLocal_40);
		DESTROY_OBJECT(&iLocal_40);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CANCEL_TIME_WARP(0);
	HUD_ENABLE(1);
	HUD_TIMER_DISPLAY(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_185(1);
	Function_184(1);
	Function_184(2);
	Function_179();
	Function_178();
	RELEASE_LAYOUT_REF(&uLocal_35);
	if (iLocal_2)
	{
		Function_30(Local_83, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_26(Local_83);
	}
	else
	{
		Function_6(Local_83);
	}
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_2();
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_29);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_29);
	AUDIO_MG_FILLET_END();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x1F9 / 505
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_192(), true);
	Function_5(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_192()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_4();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(1);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_3();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_3() //Position: 0x27C / 636
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_4() //Position: 0x291 / 657
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_5(int iParam0) //Position: 0x2A7 / 679
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_6(int iParam0) //Position: 0x2BA / 698
{
	Function_14(iParam0);
	Function_13();
	Function_10(2);
	Function_8((15 - Function_9(105)));
	Function_7(12);
	return;
}

void Function_7(int iParam0) //Position: 0x2DB / 731
{
	(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_8(int iParam0) //Position: 0x2F8 / 760
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_9(105)), 0);
	return;
}

int Function_9(int iParam0) //Position: 0x31B / 795
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_10(int iParam0) //Position: 0x332 / 818
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_12(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_12(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_12(&Global_21369 + 48);
	PRINTNL();
	Function_11(&iParam0);
	return;
}

void Function_11(int iParam0) //Position: 0x3D4 / 980
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_9(90)), 0);
	return;
}

void Function_12(var uParam0) //Position: 0x3F7 / 1015
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_13() //Position: 0x441 / 1089
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_14(int iParam0) //Position: 0x45A / 1114
{
	int iVar0;
	
	if (!Function_24(iParam0))
	{
		Function_22();
		return;
	}
	iVar0 = Function_21(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_15("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x4AD / 1197
{
	struct<4> Var0;
	
	if (!Function_24(iParam1))
	{
		return;
	}
	switch (Function_21(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_16(Function_19(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_21(iParam1), Function_19(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_21(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_21(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_21(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_21(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_21(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_16(int iParam0) //Position: 0x5D7 / 1495
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0x611 / 1553
{
	if (Function_18(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_18(bool bParam0, int iParam1) //Position: 0x62C / 1580
{
	return (bParam0 && iParam1) == 0;
}

int Function_19(int iParam0) //Position: 0x639 / 1593
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x659 / 1625
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_21(int iParam0) //Position: 0x670 / 1648
{
	if (!Function_20(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_22() //Position: 0x68B / 1675
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
			Function_23(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_23(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8D2 / 2258
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_24(int iParam0) //Position: 0x8FE / 2302
{
	if (!Function_20(iParam0))
	{
		return 0;
	}
	if (!Function_25(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_25(int iParam0) //Position: 0x922 / 2338
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_26(int iParam0) //Position: 0x937 / 2359
{
	Function_27(iParam0);
	Function_10(2);
	Function_7(12);
	Function_8((15 - Function_9(105)));
	return;
}

void Function_27(int iParam0) //Position: 0x955 / 2389
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_24(iParam0))
	{
		return;
	}
	iVar0 = Function_21(iParam0);
	if (StackVal == 2)
	{
		Function_15("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_28(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_28(int iParam0) //Position: 0x9FB / 2555
{
	char* cVar0[16];
	
	if (!Function_17())
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

struct<24> Function_29(char* cParam0) //Position: 0xA3A / 2618
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

void Function_30(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC90 / 3216
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_7(12);
	Function_10(2);
	Function_8((15 - Function_9(105)));
	if (Function_21(iParam0) == 1)
	{
		iVar2 = Function_19(iParam0);
		Function_173(&(Global_6667[iVar228]));
		Function_172(4194304);
		if (&bParam3)
		{
			Function_124(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_118(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_124(iVar2, &uVar0, 0);
		}
		bVar1 = Function_117();
		if (&bParam1)
		{
			Function_101(iVar2, iParam0, bVar1);
			Function_100();
		}
	}
	Function_43(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_21(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_35(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_21(iParam0) == 1)
		{
			iVar2 = Function_19(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_31();
}

void Function_31() //Position: 0xD84 / 3460
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_32(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_32(int iParam0, bool bParam1) //Position: 0xDB6 / 3510
{
	int iVar0;
	
	iVar0 = Function_33(iParam0);
	if (!Function_20(iVar0))
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

int Function_33(int iParam0) //Position: 0xDF4 / 3572
{
	if (!Function_34(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_34(int iParam0) //Position: 0xE0E / 3598
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_35(int iParam0, bool bParam1) //Position: 0xE24 / 3620
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_36(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_36(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_36(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_36(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_36(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_36(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_35(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_35(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_35(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_35(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_35(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_35(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_36(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1121 / 4385
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_38(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_37(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_37(char* cParam0) //Position: 0x1196 / 4502
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

bool Function_38(int iParam0, var uParam1, int iParam2) //Position: 0x11D0 / 4560
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
		if (Function_41(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_40(uVar0))
		{
			case 0x00000002:
				if (!Function_39(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_39(var uParam0, int iParam1) //Position: 0x124C / 4684
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_40(char* cParam0) //Position: 0x125F / 4703
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

int Function_41(int iParam0) //Position: 0x1300 / 4864
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_42(&iVar1, 2147483648);
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

void Function_42(int iParam0, int iParam1) //Position: 0x133D / 4925
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_43(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1353 / 4947
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_24(iParam0))
	{
		Function_22();
		return;
	}
	bVar0 = Function_21(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_99())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_19(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_28(Global_10966) };
		}
		if (Function_99())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_95();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_99())
	{
		Function_94();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_15("DEED_COMPLETE", iParam0);
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
			Function_87(iParam0);
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
						switch (Function_19(iParam0))
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
			Function_46(1);
			Function_45(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_44(iParam0, &Var14);
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

void Function_44(int iParam0, struct<41> Param1) //Position: 0x15B1 / 5553
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_45(bool bParam0, int iParam1) //Position: 0x15EF / 5615
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

void Function_46(bool bParam0) //Position: 0x162E / 5678
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_76();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_42(&Global_99144, 1);
		Function_42(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_47() //Position: 0x1683 / 5763
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_54(0);
	Function_54(0);
	Function_52();
	Function_51();
	Function_50();
	Function_49();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x16CE / 5838
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

void Function_49() //Position: 0x17D4 / 6100
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

void Function_50() //Position: 0x1807 / 6151
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

void Function_51() //Position: 0x199A / 6554
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

void Function_52() //Position: 0x1B53 / 6995
{
	Function_53(&Global_42918, 1, 0);
	return;
}

void Function_53(struct<2317> Param0) //Position: 0x1B61 / 7009
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
	
	uVar0 = Function_192();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
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

struct<8> Function_54(int iParam0) //Position: 0x1D7E / 7550
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
					iVar2 = ((Function_70((50 + iVar4)) + Function_70((183 + iVar4))) + Function_70((90 + iVar4)));
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

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E25 / 7717
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
		Function_69(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_68(iParam0);
	if (&bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20C1 / 8385
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_67(390))), 32);
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
					bVar19 = (Function_66(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_66(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_64(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_61(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_58(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_57(), &Var9);
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

var Function_57() //Position: 0x26FF / 9983
{
	int iVar0;
	
	return &iVar0;
}

var Function_58(int iParam0) //Position: 0x2708 / 9992
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_59(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2719 / 10009
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_60(char* cParam0) //Position: 0x2810 / 10256
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_61(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x282B / 10283
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_63(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_62(Function_63(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_62(int iParam0, int iParam1) //Position: 0x2892 / 10386
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_63(int iParam0, bool bParam1) //Position: 0x28A4 / 10404
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28B6 / 10422
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
	if (((Function_65(iParam0) != 19 || Function_65(iParam0) != 17) || Function_65(iParam0) != 10) || Function_65(iParam0) != 9)
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

int Function_65(int iParam0) //Position: 0x29EA / 10730
{
	return Global_55480[iParam016].f_96;
}

float Function_66(int iParam0) //Position: 0x29F9 / 10745
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_67(int iParam0) //Position: 0x2A32 / 10802
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_68(int iParam0) //Position: 0x2A6F / 10863
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

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C09 / 11273
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

int Function_70(bool bParam0) //Position: 0x2E4D / 11853
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_71() //Position: 0x2E8E / 11918
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
		iVar2 = ((Function_70((50 + iVar3) + 15) + Function_70((183 + iVar3) + 15)) + Function_70((90 + iVar3) + 15));
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

struct<8> Function_72() //Position: 0x2F17 / 12055
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
			iVar2 = ((Function_70((50 + iVar3) + 8) + Function_70((183 + iVar3) + 8)) + Function_70((90 + iVar3) + 8));
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

struct<8> Function_73() //Position: 0x2FAE / 12206
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
		iVar2 = ((Function_70((50 + iVar3)) + Function_70((183 + iVar3))) + Function_70((90 + iVar3)));
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

void Function_74() //Position: 0x302D / 12333
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_55(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x306A / 12394
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
	Function_69(iParam0, bParam1, 1);
	Function_68(iParam0);
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

void Function_76() //Position: 0x3276 / 12918
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_17())
	{
		Function_84(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_84(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_77(StackVal, Var0))
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
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_77(char* cParam0) //Position: 0x332D / 13101
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_78(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3345 / 13125
{
	int iVar0;
	
	iVar0 = Function_82(&uParam2, &fParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_80(&Global_99144, 1);
			Function_42(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_80(&Global_99144, 2);
			Function_42(&Global_99144, 1);
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
		Function_80(&Global_99144, 2);
		Function_42(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_79();
	return StackVal, Function_79();
}

struct<8> Function_79() //Position: 0x343D / 13373
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_80(int iParam0, int iParam1) //Position: 0x3447 / 13383
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_81(int iParam0) //Position: 0x3458 / 13400
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x346E / 13422
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
				fVar2 = Function_83(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_83(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_81(iVar0) && !&bParam1)
	{
		iVar0 = Function_82(&bParam0, 1);
	}
	return iVar0;
}

float Function_83(struct<2> Param0, struct<2> Param2) //Position: 0x353A / 13626
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_84(float fParam0, int iParam1) //Position: 0x3557 / 13655
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_86(&Global_54076, &Var3);
	if (!Function_85(Global_46760[0]))
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
	if (!Function_85(Global_46760[2]))
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
	if (!Function_85(Global_46760[1]))
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
	if (!Function_85(Global_46796[1]))
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
	if (!Function_85(Global_46796[3]))
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
	if (!Function_85(Global_46796[2]))
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
	if (!Function_85(Global_46796[4]))
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
	if (!Function_85(Global_46816[0]))
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
	if (!Function_85(Global_46816[1]))
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
	if (!Function_85(Global_46816[2]))
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
	if (!Function_85(Global_46838[0]))
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
	if (!Function_85(Global_46850[0]))
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
	if (!Function_85(Global_46850[1]))
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
	if (!Function_85(Global_46850[2]))
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
	if (!Function_85(Global_46866[0]))
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
	if (!Function_85(Global_46866[1]))
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
	if (!Function_85(Global_46866[2]))
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
	if (!Function_85(Global_46894[2]))
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
	if (!Function_85(Global_46894[3]))
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
	if (!Function_85(Global_46894[0]))
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
	if (!Function_85(Global_46914[0]))
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
	if (!Function_85(Global_46926[2]))
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
	if (!Function_85(Global_46926[1]))
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
	if (!Function_85(Global_46926[0]))
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
	if (!Function_85(Global_46838[1]))
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
	if (!Function_85(Global_46894[1]))
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
	Function_80(&Global_99144, 2);
	Function_42(&Global_99144, 1);
	iParam1 = 0;
	if (Function_77(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_85(int iParam0) //Position: 0x3D83 / 15747
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_18(uVar0, 0x1000000) || Function_18(uVar0, 0x2000000)) || Function_18(uVar0, 0x4000000)) || !Function_18(uVar0, 0x10000000));
}

void Function_86(var uParam0, int iParam1) //Position: 0x3DBE / 15806
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_87(int iParam0) //Position: 0x3DCD / 15821
{
	int iVar0;
	int iVar1;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	switch (Function_21(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_19(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_92(12, 1, 0, 0);
				Function_91(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_92(13, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_92(14, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_92(15, 1, 0, 0);
				Function_91(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_92(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_19(iParam0))
			{
				case 0x00000000:
					if (Function_90(iParam0) == 1)
					{
						iVar0 = Function_89(iParam0);
						if (Function_88(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_91(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_91(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_91(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_91(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_91(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_91(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_91(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_91(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_91(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_91(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_91(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_91(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_91(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_91(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_91(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_91(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_91(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_91(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_91(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_91(4, 19);
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
								Function_92(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_92(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_92(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_89(iParam0) == 0)
			{
				if (Function_90(iParam0) == 1)
				{
					Function_92(458, 1, 0, 0);
					iVar0 = Function_19(iParam0);
					if (Function_88(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_91(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_91(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_91(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_91(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_91(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_91(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_91(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_91(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_90(iParam0) == 1)
			{
				Function_92(400, 1, 0, 0);
			}
			switch (Function_19(iParam0))
			{
				case 0x00000001:
					Function_92(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_91(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_91(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_91(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_92(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_91(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_91(6, 9);
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

bool Function_88(int iParam0) //Position: 0x42A9 / 17065
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_89(int iParam0) //Position: 0x42BF / 17087
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_90(int iParam0) //Position: 0x42DE / 17118
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_91(int iParam0, int iParam1) //Position: 0x42F8 / 17144
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

int Function_92(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4362 / 17250
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
	Function_69(iParam0, TO_FLOAT(bParam1), 1);
	Function_68(iParam0);
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
	Function_93(iParam0);
	return 1;
}

void Function_93(int iParam0) //Position: 0x458A / 17802
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

void Function_94() //Position: 0x4628 / 17960
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
	PLAYSTAT_INT("HC_MONEY", Function_70(0));
	PLAYSTAT_INT("HC_FAME", Function_70(3));
	PLAYSTAT_INT("HC_HONOR", Function_70(1));
	return;
}

void Function_95() //Position: 0x478A / 18314
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(Global_10966))
	{
		return;
	}
	iVar0 = Function_70(24);
	iVar1 = Function_33(Global_10966);
	if (!Function_34(iVar0) && Function_98(iVar1) < 0)
	{
		Function_55(24, Global_10966, 0);
		Function_96(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_98(Function_33(iVar0)))
	{
		Function_55(24, Global_10966, 0);
		Function_96(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_96(int iParam0, char* cParam1) //Position: 0x480A / 18442
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
		Function_97(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_97(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B61 / 19297
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

int Function_98(int iParam0) //Position: 0x4BE9 / 19433
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_99() //Position: 0x4C03 / 19459
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_100() //Position: 0x4C2E / 19502
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_101(int iParam0, int iParam1, bool bParam2) //Position: 0x4C5C / 19548
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_34(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_116(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_70(42) - Global_53524.f_168);
				bVar1 = (Function_70(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_67(49)) - Global_53524.f_176);
				bVar3 = (Function_70(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_70(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_115(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_102(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_28(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_102(int iParam0, bool bParam1, bool bParam2) //Position: 0x4EF8 / 20216
{
	int iVar0;
	bool bVar1;
	
	if (Function_114(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_99())
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
	iVar0 = Function_70(3);
	Function_111();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_109(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_39(Global_119936, 4))
			{
				Function_36(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_92(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_66(3));
	iVar0 = Function_70(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
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

void Function_103(int iParam0, int iParam1) //Position: 0x50CC / 20684
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

int Function_104(int iParam0, char* cParam1) //Position: 0x5336 / 21302
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
	Function_96(iParam0, &cParam1, 0, 1);
	iVar1 = Function_105();
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

int Function_105() //Position: 0x54C6 / 21702
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
	Function_106();
	return 0;
}

void Function_106() //Position: 0x5567 / 21863
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
		Function_107(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_107(int iParam0) //Position: 0x5625 / 22053
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

var Function_108(int iParam0) //Position: 0x568B / 22155
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

int Function_109(int iParam0, bool bParam1) //Position: 0x571A / 22298
{
	bool bVar0;
	int iVar1;
	
	Function_92(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_110(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_110(int iParam0, int iParam1) //Position: 0x58C6 / 22726
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

void Function_111() //Position: 0x590B / 22795
{
	Function_113(3, 0.0f);
	Function_112(3, 10000.0f);
	return;
}

int Function_112(int iParam0, int iParam1) //Position: 0x5921 / 22817
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_113(int iParam0, int iParam1) //Position: 0x5961 / 22881
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_114(int iParam0) //Position: 0x59A1 / 22945
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x59B0 / 22960
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_116(int iParam0) //Position: 0x5B78 / 23416
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_117() //Position: 0x5C0D / 23565
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_118(int iParam0) //Position: 0x5C32 / 23602
{
	if (!Function_34(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_102(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_102(25, 1, 0);
			Function_123(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_123(50, 1, 1);
			Function_102(250, 1, 0);
			Function_119(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_123(50, 1, 1);
			Function_102(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_123(5, 1, 1);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_102(75, 1, 0);
			Function_119(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_123(5, 1, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_123(25, 1, 1);
			Function_102(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_123(10, 1, 1);
			Function_102(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_102(50, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_102(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_119(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_123(20, 1, 1);
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_123(25, 1, 1);
			Function_102(150, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_123(10, 1, 1);
			Function_102(150, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_102(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_119(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_119(100, 1, 0);
			Function_123(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_123(3, 1, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_119(125, 1, 0);
			Function_102(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_123(50, 1, 1);
			Function_102(100, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_123(50, 1, 1);
			Function_102(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_123(75, 1, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_102(250, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_102(75, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_102(200, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_102(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_123(50, 1, 1);
			Function_102(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_123(100, 1, 1);
			Function_102(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_102(200, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_102(500, 1, 0);
			Function_119(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_102(150, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_119(25, 1, 0);
			Function_123(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_102(150, 1, 0);
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_119(150, 1, 0);
			Function_123(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_119(150, 1, 0);
			Function_123(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_119(int iParam0, bool bParam1, bool bParam2) //Position: 0x6101 / 24833
{
	int iVar0;
	bool bVar1;
	
	if (Function_114(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_99())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_70(1);
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
			Function_109(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_39(Global_119936, 1))
				{
					Function_36(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_122(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_39(Global_119936, 2))
				{
					Function_36(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_92(1, bVar1, 0, 0);
	}
	else
	{
		Function_121(1, (4294967295 * bVar1), 0);
	}
	if (Function_70(1) <= 4294962296)
	{
		Function_55(1, 4294962296, 0);
	}
	else if (Function_70(1) >= 5000)
	{
		Function_55(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_66(1));
	iVar0 = Function_70(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_104(2, Function_120(Global_21369.f_244), 0);
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
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_104(2, Function_120(Global_21369.f_244), 1);
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
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_104(2, Function_120(Global_21369.f_244), 1);
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
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			break;
	}
	Function_103(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_120(int iParam0) //Position: 0x6428 / 25640
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

int Function_121(int iParam0, bool bParam1, int iParam2) //Position: 0x64CB / 25803
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
	Function_68(iParam0);
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

int Function_122(int iParam0, bool bParam1) //Position: 0x66C8 / 26312
{
	bool bVar0;
	int iVar1;
	
	Function_121(iParam0, bParam1, 0);
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
	iVar1 = Function_110(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_123(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6873 / 26739
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_92(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_92(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_70(597) + Function_70(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_124(int iParam0, var uParam1, bool bParam2) //Position: 0x6945 / 26949
{
	struct<4> Var0;
	
	if (!Function_34(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_170(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_167(Global_46760[0]);
			Function_167(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_167(Global_46816[0]);
			Function_157(0);
			Function_155(2, 1);
			Function_155(0, 1);
			Function_155(1, 1);
			break;
		
		case 0x00000003:
			Function_167(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_167(Global_46816[0]);
			Function_167(Global_46760[0]);
			Function_153(0, 1);
			Function_153(15, 1);
			Function_153(9, 1);
			Function_153(12, 1);
			Function_153(16, 1);
			Function_155(3, 1);
			break;
		
		case 0x00000005:
			Function_167(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_165(21, &bParam2, 4);
			Function_167(Global_46816[0]);
			Function_155(39, 1);
			break;
		
		case 0x00000007:
			Function_167(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_167(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_152())
				{
					if (!Function_151(4))
					{
						Function_141(4, 0, 0, 1, 0);
					}
				}
			}
			Function_167(Global_46760[0]);
			Function_167(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_167(Global_46760[0]);
			Function_167(Global_46816[2]);
			Function_140(&(Global_43791[Global_46816[2]]), 32768);
			Function_139(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_165(9, &bParam2, 4);
			Function_167(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_167(Global_46760[0]);
			Function_167(Global_46796[0]);
			Function_140(&(Global_43791[Global_46796[0]]), 32768);
			Function_139(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_167(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_167(Global_46760[0]);
			Function_167(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_167(Global_46760[1]);
			Function_167(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_167(Global_46838[0]);
			Function_167(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_167(Global_46796[5]);
			Function_167(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_165(21, &bParam2, 4);
			Function_167(Global_46760[4]);
			Function_167(Global_46796[4]);
			Function_138(&Global_119935, 0x2000000);
			Function_138(&Global_119935, 0x4000000);
			Function_138(&Global_119935, 4096);
			Function_138(&Global_119935, 8);
			Function_138(&Global_119935, 8388608);
			Function_138(&Global_119935, 524288);
			Function_138(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_167(Global_46760[4]);
			Function_167(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_139(&(Global_43791[Global_46760[4]]), 256);
			Function_167(Global_46760[4]);
			Function_167(Global_46796[0]);
			Function_140(&(Global_43791[Global_46796[0]]), 32768);
			Function_139(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_167(Global_46760[0]);
			Function_167(Global_46760[5]);
			Function_165(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_167(Global_46796[3]);
			Function_140(&(Global_43791[Global_46796[3]]), 32768);
			Function_139(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_165(9, &bParam2, 4);
			Function_167(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_140(&(Global_43791[Global_46838[1]]), 32768);
			Function_167(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_165(12, &bParam2, 4);
			Function_139(&(Global_43791[Global_46838[1]]), 256);
			Function_167(Global_46816[3]);
			Function_167(Global_46866[0]);
			Function_167(Global_46850[0]);
			Function_157(4);
			Function_153(13, 1);
			Function_153(1, 1);
			Function_153(18, 1);
			Function_155(34, 1);
			Function_155(44, 1);
			Function_155(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_165(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_167(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_167(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_167(Global_46866[0]);
			Function_167(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_167(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_167(Global_46850[0]);
			Function_167(Global_46866[0]);
			Function_167(Global_46866[1]);
			Function_167(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_165(23, &bParam2, 3);
			Function_153(23, 1);
			Function_167(Global_46850[0]);
			Function_167(Global_46850[2]);
			Function_140(&(Global_43791[Global_46850[2]]), 32768);
			Function_139(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_165(19, &bParam2, 4);
			Function_167(Global_46850[0]);
			Function_167(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_165(24, &bParam2, 3);
			Function_153(24, 1);
			Function_167(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_167(Global_46850[0]);
			Function_167(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_167(Global_46866[12]);
			Function_167(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_167(Global_46866[12]);
			Function_167(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_165(25, &bParam2, 10);
			Function_167(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_167(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_167(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_165(13, &bParam2, 4);
			Function_167(Global_46866[2]);
			Function_167(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_151(8))
				{
					Function_141(8, 0, 0, 1, 0);
				}
			}
			Function_167(Global_46850[0]);
			Function_157(9);
			Function_153(7, 1);
			Function_153(11, 1);
			Function_153(3, 1);
			Function_153(20, 1);
			Function_155(57, 1);
			break;
		
		case 0x0000002A:
			Function_165(2, &bParam2, 4);
			Function_167(Global_46914[0]);
			Function_167(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_167(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_167(Global_46914[0]);
			Function_167(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_167(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_167(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_167(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_165(17, &bParam2, 4);
			Function_167(Global_46926[0]);
			Function_167(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_136(15))
				{
					Function_131(15, 0, 1);
				}
			}
			Function_91(2, 26);
			Function_139(&(Global_43791[Global_46914[1]]), 256);
			Function_157(11);
			Function_167(Global_46914[1]);
			Function_167(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_167(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_167(Global_46914[1]);
			Function_167(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_167(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_167(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_167(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_167(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_167(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_167(Global_46914[1]);
			Function_125(11);
			Function_157(12);
			Global_26200[1114].f_40 = 0;
			Function_155(56, 1);
			if (!&bParam2)
			{
				if (!Function_151(9))
				{
					Function_141(9, 0, 0, 0, 0);
				}
				if (!Function_151(10))
				{
					Function_141(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_125(int iParam0) //Position: 0x7260 / 29280
{
	var uVar0;
	
	if (!Function_81(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_130(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_130(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_126(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73DD / 29661
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_128(Function_129(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_128(Function_129(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_128(StackVal);
				Var1 = Function_128(StackVal);
				if (Function_127(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_127(struct<2> Param0, struct<2> Param2) //Position: 0x74E8 / 29928
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_128(int iParam0) //Position: 0x7514 / 29972
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_129(vector3 vParam0) //Position: 0x756B / 30059
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_130(var uParam0, int iParam1) //Position: 0x75B9 / 30137
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7614 / 30228
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_136(bParam0))
	{
		if (!Function_151(bParam0))
		{
			Function_141(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_92(457, 1, 0, 0);
		Function_134(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_46(1);
				Function_45(1, 0);
			}
			else
			{
				Function_132();
			}
		}
	}
	return;
}

void Function_132() //Position: 0x77B5 / 30645
{
	return;
}

bool Function_133(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77BB / 30651
{
	iParam0 = &iParam0;
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
	if (Global_6636 && iParam2)
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
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_134(bool bParam0, int iParam1) //Position: 0x786A / 30826
{
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_135(int iParam0) //Position: 0x78BF / 30911
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_136(int iParam0) //Position: 0x78D5 / 30933
{
	if (!Function_135(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_137(int iParam0, int iParam1) //Position: 0x7926 / 31014
{
	int iVar0;
	
	if (!Function_135(iParam0))
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

void Function_138(var uParam0, int iParam1) //Position: 0x7953 / 31059
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0x7964 / 31076
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0x797E / 31102
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_141(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x798F / 31119
{
	char* cVar0[32];
	
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_150(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_151(bParam0))
	{
		Function_92(456, 1, 0, 0);
		Function_134(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_46(1);
				Function_45(1, 5);
			}
			else
			{
				Function_132();
			}
		}
		Function_144(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_143() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_143() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_142(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_17())
		{
			if (!Function_39(Global_119934, 2))
			{
				Function_36(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_142(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7AEB / 31467
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_28(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_143() //Position: 0x7B76 / 31606
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_144(bool bParam0) //Position: 0x7BA3 / 31651
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
			if (Function_148(bParam0, Function_149(bVar24)))
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
			if (Function_148(bParam0, Function_149(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_147(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_146(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_145(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_145(int iParam0) //Position: 0x7D53 / 32083
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_135(iParam0))
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

void Function_146(var uParam0, int iParam1) //Position: 0x7DAA / 32170
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

var Function_147(int iParam0) //Position: 0x7DCF / 32207
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_135(iParam0))
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

bool Function_148(bool bParam0, int iParam1) //Position: 0x7E25 / 32293
{
	int iVar0;
	
	if (!Function_135(bParam0))
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

int Function_149(bool bParam0) //Position: 0x7E84 / 32388
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_150(int iParam0) //Position: 0x7E90 / 32400
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_151(int iParam0) //Position: 0x7EAC / 32428
{
	if (!Function_135(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_152() //Position: 0x7EFE / 32510
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_18(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7F2E / 32558
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_154(iParam0, iParam1);
	Function_36(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x7FA3 / 32675
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_155(int iParam0, int iParam1) //Position: 0x8000 / 32768
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_156(iParam0, iParam1);
	Function_36(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_156(int iParam0, int iParam1) //Position: 0x8073 / 32883
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_157(int iParam0) //Position: 0x80CE / 32974
{
	var uVar0;
	var uVar1;
	
	if (!Function_81(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_164(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_164(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_92(468, 1, 0, 0);
			Function_91(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_142("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_126(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_141(14, 1, 0, 0, 0);
				Function_158(14, 1, 0, 0, 0);
			}
			if (!Function_133(0, 0, 1, 1))
			{
				Function_46(1);
				Function_45(1, 6);
			}
			else
			{
				Function_132();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_142("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_92(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_91(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_158(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x838E / 33678
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_150(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_137(bParam0, 2))
	{
		Function_92(456, 1, 0, 0);
		Function_134(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_142(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_148(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_134(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_46(1);
				Function_45(1, 0);
			}
			else
			{
				Function_132();
			}
		}
		Function_144(bParam0);
		if (StackVal && !Function_18(((((!Function_143() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_18((((Function_143() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_17())
		{
			if (!Function_39(Global_119934, 2))
			{
				Function_36(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_160();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_159(3, bParam1);
				break;
			
			case 0x00000005:
				Function_159(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_159(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_159(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_159(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_159(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_91(2, 24);
				break;
			
			case 0x00000003:
				Function_91(2, 25);
				break;
			
			case 0x0000000F:
				Function_91(2, 26);
				break;
			
			case 0x0000000D:
				Function_91(2, 27);
				break;
			
			case 0x0000000E:
				Function_91(2, 28);
				break;
			}
	}
}

void Function_159(int iParam0, bool bParam1) //Position: 0x862D / 34349
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

void Function_160() //Position: 0x869C / 34460
{
	if (Function_135(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_163(Global_42827);
			(&Global_42827 + 8) = Function_161(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_163(Global_42827);
			*(&Global_42827 + 8) = Function_161(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_161(int iParam0, int iParam1) //Position: 0x871C / 34588
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
					if (Function_32(6, 0) || Function_32(12, 0))
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
					if (Function_162(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_32(5, 0))
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
					if (Function_162(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_162(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_162(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_162(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_32(26, 0))
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
					if (Function_162(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_162(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_162(27) && iVar16)
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
					if (Function_162(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_162(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_162(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_162(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_32(17, 0) && iVar13)
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
					if (Function_162(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_32(6, 0) && Function_162(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_162(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_32(9, 0) && Function_162(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_162(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_32(8, 0) && iVar17)
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
	if (Function_77(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_77(StackVal, vVar2))
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
	if (!Function_77(StackVal, vVar2))
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

int Function_162(int iParam0) //Position: 0x937F / 37759
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_163(int iParam0) //Position: 0x9394 / 37780
{
	int iVar0;
	int iVar1;
	
	if (!Function_135(iParam0))
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

void Function_164(var uParam0, int iParam1) //Position: 0x93E3 / 37859
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_165(bool bParam0, bool bParam1, int iParam2) //Position: 0x943B / 37947
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_166(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_170(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_166(int iParam0, int iParam1) //Position: 0x94AE / 38062
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_167(int iParam0) //Position: 0x94C2 / 38082
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_169(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_140(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_92(473, 1, 0, 0);
		iVar0 = Function_168(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_92(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_92(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_92(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_91(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_91(7, 30);
	}
	if (Function_66(473) <= Function_67(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_168(int iParam0) //Position: 0x95B3 / 38323
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_88(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_169(var uParam0, int iParam1) //Position: 0x960B / 38411
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_170(bool bParam0, bool bParam1, int iParam2) //Position: 0x9628 / 38440
{
	if (!Function_171(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_192(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_192(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_192(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_171(int iParam0) //Position: 0x9682 / 38530
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_172(int iParam0) //Position: 0x9694 / 38548
{
	int iVar0;
	
	if (Function_18(iParam0, 1) && Function_18(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_173(struct<185> Param0) //Position: 0x96C8 / 38600
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_174(4, 0, 0);
		}
	}
	return;
}

void Function_174(int iParam0, var uParam1, int iParam2) //Position: 0x9733 / 38707
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_175(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_175(int iParam0, int iParam1, bool bParam2) //Position: 0x981D / 38941
{
	int iVar0;
	
	Function_177(iParam0);
	Function_12(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_176();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_176() //Position: 0x999C / 39324
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_177(int iParam0) //Position: 0x99A8 / 39336
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_178() //Position: 0x99EE / 39406
{
	return;
}

void Function_179() //Position: 0x99F4 / 39412
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_180(&uLocal_784);
	return;
}

void Function_180(int iParam0) //Position: 0x9A03 / 39427
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_181(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_181(struct<2>[] Param0, int iParam1) //Position: 0x9A2B / 39467
{
	if (Function_183(&(Param0[iParam12]), 4))
	{
		if (Function_183(&(Param0[iParam12]), 1))
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
			Function_182(&(Param0[iParam12]), 1);
			Function_182(&(Param0[iParam12]), 2);
			Function_182(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_182(struct<13> Param0) //Position: 0x9B76 / 39798
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_183(struct<13> Param0) //Position: 0x9B93 / 39827
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_184(int iParam0) //Position: 0x9BB1 / 39857
{
	if (Function_18(iParam0, 1) && !Function_18(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_185(int iParam0) //Position: 0x9BDE / 39902
{
	Function_186(&Global_43580, iParam0);
	return;
}

void Function_186(var uParam0, var uParam1) //Position: 0x9BEC / 39916
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_187() //Position: 0x9C0B / 39947
{
	if (VMAG(*(&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

void Function_188() //Position: 0x9D3D / 40253
{
	Function_189();
	return;
}

void Function_189() //Position: 0x9D46 / 40262
{
	Function_190(0);
	Function_190(1);
	Function_190(2);
	Function_190(3);
	Function_190(4);
	Function_190(5);
	return;
}

int Function_190(int iParam0) //Position: 0x9D6A / 40298
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_191(var uParam0) //Position: 0x9D76 / 40310
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&uParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

int Function_192() //Position: 0x9D9C / 40348
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_193() //Position: 0x9DB1 / 40369
{
	var uVar0[3];
	int iVar4;
	
	if (Function_215())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		iVar4 = Function_201(&uLocal_10, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_8 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_8 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_8 = 2;
		}
	}
	return;
}

void Function_194() //Position: 0x9E47 / 40519
{
	Function_196();
	Function_195(10, 3);
	return;
}

void Function_195(int iParam0, int iParam1) //Position: 0x9E56 / 40534
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_196() //Position: 0x9FA3 / 40867
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_200())
	{
		Function_199(10, 3);
	}
	else
	{
		Function_197();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_192(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_192());
	UI_POP("nDebugMenu");
	return;
}

void Function_197() //Position: 0x9FEE / 40942
{
	Function_198(25, 2);
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0x9FFA / 40954
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_199(int iParam0, int iParam1) //Position: 0xA226 / 41510
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_200() //Position: 0xA373 / 41843
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_18(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_201(struct<17> Param0) //Position: 0xA3DB / 41947
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_214(&Var12, &Var0);
	uVar15 = Function_213(uParam1, &Var12);
	Function_212(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_211(&Param0, uVar15);
	Function_209(StackVal, &Param0, Var12.f_12);
	Function_207(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_206(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_203(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_202(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_202(int iParam0, int iParam1, int iParam2) //Position: 0xA4CF / 42191
{
	var uVar0;
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
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_203(struct<17> Param0) //Position: 0xA52F / 42287
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_205(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_205(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_202(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_204(Param1.f_64);
	}
	else
	{
		Function_204(Param1.f_64);
	}
	return 0;
}

void Function_204(bool bParam0) //Position: 0xA6C2 / 42690
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_205(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xA700 / 42752
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_206(int iParam0, struct<21> Param1) //Position: 0xA7B6 / 42934
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_207(vector3 vParam0) //Position: 0xA7DD / 42973
{
	switch (Function_208())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_208() //Position: 0xA889 / 43145
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

void Function_209(vector3 vParam0) //Position: 0xA8C5 / 43205
{
	switch (Function_210(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_210(int iParam0) //Position: 0xA96E / 43374
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_18(iParam0, 0x40000000))
		{
			Function_80(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_18(iParam0, 0x40000000))
		{
			Function_80(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_42(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_18(iParam0, 0x20000000))
		{
			Function_80(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_18(iParam0, 0x20000000))
		{
			Function_80(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_42(&iParam0, 0x20000000);
	return 0;
}

var Function_211(struct<21> Param0) //Position: 0xAA8E / 43662
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_212(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xAC48 / 44104
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_213(int iParam0, struct<13> Param1) //Position: 0xACE4 / 44260
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_214(struct<17> Param0) //Position: 0xAD00 / 44288
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_215() //Position: 0xAD5A / 44378
{
	return Global_47307;
}

bool Function_216() //Position: 0xAD63 / 44387
{
	int iVar0;
	var uVar1;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_300();
		return 0;
	}
	bLocal_142 = (GET_CURRENT_GAME_TIME() - fLocal_143);
	if (bLocal_142 < 0,033333f)
	{
		bLocal_142 = 0,0333333f;
	}
	fLocal_143 = GET_CURRENT_GAME_TIME();
	Function_75(440, bLocal_142, 0);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_83 + 4[iVar0]))
		{
			if (GET_LAST_ATTACKER(&Local_83 + 4[iVar0]) == Function_192())
			{
				Function_300();
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_148.f_728)
	{
		if ((*&Local_148 + 728)[iVar02])
		{
			uVar1 = &Local_148[StackVal45];
			if (IS_ACTOR_VALID(&uVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar1)) > 1.0f && GET_LAST_ATTACKER(&uVar1) != GET_PLAYER_ACTOR(0))
				{
					HUD_CLEAR_OBJECTIVE();
					PRINT_OBJECTIVE_FORMAT(StackVal, StackVal, 4.0f, &Local_148[&Local_148["Poker_Attacks"45] + 845] + 8, "", "", 0, 2, 0, 0, 0);
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 1;
					Function_300();
					return 0;
				}
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_300();
		return 0;
	}
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			Function_298(&Local_148);
			iLocal_0 = 0;
			break;
		
		case 0x00000000:
			Function_287();
			break;
		
		case 0x00000001:
			Function_228();
			break;
		
		case 0x00000003:
			Function_219();
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000065:
			iLocal_2 = 1;
			break;
		
		default:
			return 0;
	}
	if (iLocal_2)
	{
		Function_217();
		return 0;
	}
	if (bLocal_3)
	{
		Function_300();
		return 0;
	}
	return 1;
}

void Function_217() //Position: 0xAF03 / 44803
{
	if (Global_43789 == Global_46894[3])
	{
		Function_218(8, Global_46894[3]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_218(int iParam0, int iParam1) //Position: 0xAF26 / 44838
{
	if (!Function_150(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_152())
				{
					Function_158(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_158(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_158(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_158(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_158(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_158(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_158(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_151(2) && !Function_136(2))
				{
					Function_158(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_219() //Position: 0xB031 / 45105
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (iLocal_8 == 1)
			{
			}
			else if (iLocal_8 == 0)
			{
				Function_227("5Fillet_PlayerWin", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (IS_ACTOR_VALID(&(Local_148[045])))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&(Local_148[045])), "ff_stop_looping"))
				{
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(Local_148[045])), "ff_stop_looping");
				}
			}
			if (iLocal_8 == 1)
			{
				if (Global_43787 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_43787 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_43787 == 2)
				{
					AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				if (Local_148.f_796 <= Local_83.f_56)
				{
					iVar1 = RAND_INT_RANGE(Local_148.f_796, (Local_83.f_56 - 1));
					iVar2 = RAND_INT_RANGE(0, true);
					if (IS_ACTOR_VALID(&Local_83 + 4[iVar1]))
					{
						if (iVar2 == 0)
						{
							SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[iVar1], 61, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else if (iVar2 == 1)
						{
							SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[iVar1], 60, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			Function_188();
			UI_EXIT("Hands");
			UI_EXIT("Scorebox");
			UI_EXIT("Scorebox_Bet");
			UI_EXIT("Scorebox_Cash");
			UI_EXIT("Scorebox_Player1");
			UI_EXIT("Scorebox_Player2");
			Function_3();
			if (iLocal_8 != 0 && !Function_225(Function_21(Local_83), Function_19(Local_83)))
			{
				Function_92(410, 1, 0, 0);
				Function_91(6, 15);
			}
			if (iLocal_8 != 0)
			{
				Global_21684[Local_837].f_20 = 0;
			}
			iLocal_1 = 12;
			break;
		
		case 0x0000000C:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				DESTROY_OBJECT(&Local_148[iVar045] + 152);
				iVar0++;
			}
			if (IS_ACTOR_VALID(&(Local_148[045])))
			{
				SET_DRAW_ACTOR(&(Local_148[045]), 0);
			}
			if ((*&Local_148 + 728)[Local_148.f_7722])
			{
				Function_224(&uLocal_60, GET_GRINGO_FROM_OBJECT(&Local_148 + 728[Local_148.f_7722] + 8));
				Function_223(StackVal, &Local_148);
			}
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_148.f_728)
			{
				if ((*&Local_148 + 728)[iVar02])
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_148[StackVal45]), "fivefingerfillet/Fake/ready/enter");
				}
				iVar0++;
			}
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if ((Function_222(&Local_148) && GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0)) != "") && !IS_ACTION_NODE_PLAYING(Function_192(), "fivefingerfillet/stand"))
			{
				Function_221(4, 1);
				if (IS_ACTOR_VALID(&(Local_148[045])))
				{
					SET_DRAW_ACTOR(&(Local_148[045]), 1);
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					Function_220(GET_GRINGO_FROM_OBJECT(&Local_148 + 728[iVar02] + 8));
					iVar0++;
				}
				if (iLocal_8 == 0)
				{
					iLocal_2 = 1;
				}
				else if (iLocal_8 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_8 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_220(var uParam0) //Position: 0xB407 / 46087
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar2, &uParam0);
			if (IS_PHYSINST_VALID(&uVar3))
			{
				SHOW_PHYSINST(&uVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar4, &uParam0);
			if (IS_PHYSINST_VALID(&uVar5))
			{
				SHOW_PHYSINST(&uVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_221(int iParam0, bool bParam1) //Position: 0xB507 / 46343
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_21369 + 168)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, true);
			}
			else
			{
				(*&Global_21369 + 168)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 9, 200.0f);
				(*&Global_21369 + 168)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, false);
				(*&Global_21369 + 168)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 10, 200.0f);
				(*&Global_21369 + 168)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, false);
				(*&Global_21369 + 168)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, false);
				(*&Global_21369 + 168)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, true);
				(*&Global_21369 + 168)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_21369 + 168)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
			}
			else
			{
				(*&Global_21369 + 168)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, false);
			}
			break;
	}
	return;
}

int Function_222(struct<45> Param0) //Position: 0xB68D / 46733
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= Param0.f_728)
	{
		if ((*&Param0 + 728)[iVar02])
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&(Param0[StackVal45]), "fivefingerfillet/Fake"))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void Function_223(struct<45> Param0) //Position: 0xB6F0 / 46832
{
	(*&Param0 + 728)[Param0[iParam145].f_1362] = 0;
	(&Param0 + 728[Param0[iParam145].f_1362])->f_4 = 4294967295;
	TASK_CLEAR(&(Param0[iParam145]));
	if (!&Param0[iParam145] != GET_PLAYER_ACTOR(0))
	{
		TASK_WANDER(&(Param0[iParam145]), 3212836864);
		SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Param0[iParam145]), &uLocal_29, 1, 1);
		AI_SET_NAV_SUBGRID_CELL_SIZE(&(Param0[iParam145]), 0,35f);
	}
	if (&Param0[iParam145] == GET_PLAYER_ACTOR(0))
	{
		GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&Param0 + 728[Param0[iParam145].f_1362] + 8));
	}
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&(Param0[iParam145]), 1);
	SET_ANIMATION_OVERRIDE_SCALE(&(Param0[iParam145]), 1.0f);
	ACTOR_END_FORCE_HOLSTER(&(Param0[iParam145]));
	Param0[iParam145] = "";
	Param0[iParam145].f_136 = 4294967295;
	strcpy(&Param0[iParam145] + 8, "", 64);
	Param0.f_768 = (Param0.f_768 - 1);
	if (IS_ATTACHMENT_VALID(&Param0[iParam145] + 160))
	{
		REMOVE_OBJECT_ATTACHMENT(&Param0[iParam145] + 160);
	}
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xB803 / 47107
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<2> Var15;
	struct<2> Var17;
	
	if (IS_GRINGO_VALID(&iParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iParam1), &Var0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var2, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var4, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var6, 2);
		fVar8 = 0,6f;
		fVar9 = 1.0f;
		fVar10 = 1,2f;
		fVar11 = 0,4f;
		fVar12 = 1,24f;
		fVar13 = -0,4f;
		fVar14 = 37.0f;
		Var15 = Var0;
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var15, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var15, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var15, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
		Var17 = Var0;
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var17, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var17, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var17, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
		}
		SET_CAMERA_POSITION(&uParam0, Var15);
		SET_CAMERA_TARGET_POSITION(&uParam0, Var17, 0);
		SET_CAMERA_FOV(&uParam0, fVar14);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_FIVEFINGERFILLET_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

bool Function_225(int iParam0, int iParam1) //Position: 0xB985 / 47493
{
	int iVar0;
	
	if (!Function_226(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (Function_21(iVar0) != iParam0 && Function_19(iVar0) != iParam1)
		{
			if (Function_90(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_226(bool bParam0) //Position: 0xB9CA / 47562
{
	if (bParam0 >= 0 || bParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_227(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xB9DF / 47583
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
			Var0 = { StackVal, StackVal, StackVal, Function_28(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_228() //Position: 0xBA74 / 47732
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar12;
	bool bVar13;
	struct<25> Var14;
	
	UI_LABEL_SET_VALUE("Scorebox_Player2", Local_148[145].f_144);
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		if (IS_ATTACHMENT_VALID(&Local_148[iVar645] + 160))
		{
			if ((((((((!IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "npc_loop") && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "player_loop")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/npc_loop/loop_or_quit/countme")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/ready/idle")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/ready/enter")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/ready/exit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/win")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/lose")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(Local_148[iVar645]), "fivefingerfillet/time_loss"))
			{
				REMOVE_OBJECT_ATTACHMENT(&Local_148[iVar645] + 160);
				Function_286(&(Local_148[iVar645]), &Var2, &Var4);
				SET_OBJECT_POSITION(&Local_148[iVar645] + 152, Var2);
				SET_OBJECT_ORIENTATION(&Local_148[iVar645] + 152, Var4);
			}
		}
		iVar6++;
	}
	switch (iLocal_1)
	{
		case 0x00000023:
			Local_148.f_792 = 1;
			Local_148.f_792 = Function_285(Local_148.f_792, &Local_148);
			UI_ENTER("Scorebox");
			UI_ENTER("Scorebox_Bet");
			UI_ENTER("Scorebox_Cash");
			UI_ENTER("Scorebox_Player1");
			UI_ENTER("Scorebox_Player2");
			UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_148[045] + 8);
			UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_148[145] + 8);
			UI_LABEL_SET_VALUE_B("Scorebox_Player1", 2);
			UI_LABEL_SET_VALUE_B("Scorebox_Player2", 2);
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_148[045].f_144);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_148[145].f_144);
			UI_LABEL_SET_TEXT("Scorebox_Bet", "5Fillet_BetAmount");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
			UI_REFRESH("Scorebox_Bet");
			UI_LABEL_SET_TEXT("Scorebox_Cash", "5Fillet_CashLabel");
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			UI_REFRESH("Scorebox_Cash");
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&bLocal_58);
			Function_280(&(Local_148[145]));
			Function_279(&Local_148, 1);
			Local_148[145].f_144 = 0;
			Local_148.f_2540 = 0;
			SAY_SINGLE_LINE_CONTEXT(&(Local_148[045]), 262, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			Function_278();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_227("5Fillet_EnterBetObjective", -1.0f, 1, 2, 0, 0, 0, 0);
			iLocal_1 = 45;
			break;
		
		case 0x0000002D:
			iVar7 = Local_148.f_792;
			if (UNK_0xDA674AE0("@MINIGAME.INCREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.INCREASE_BET", 1, 0))
			{
				if (Function_277(&iLocal_144) < fLocal_71 && Function_277(&iLocal_144) < (1.0f / 30.0f))
				{
					if (fLocal_71 < 0.0f)
					{
						Local_148.f_792++;
					}
					else if (fLocal_71 < -0,5f)
					{
						Local_148.f_792 += 10;
					}
					else
					{
						Local_148.f_792 += 100;
					}
					Local_148.f_792 = Function_285(Local_148.f_792, &Local_148);
					Function_276(&iLocal_144);
				}
				fLocal_71 = (fLocal_71 - (0,008f * Function_275()));
			}
			else if (UNK_0xDA674AE0("@MINIGAME.DECREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.DECREASE_BET", 1, 0))
			{
				if (Function_277(&iLocal_144) < fLocal_71 && Function_277(&iLocal_144) < (1.0f / 30.0f))
				{
					if (fLocal_71 < 0.0f)
					{
						Local_148.f_792 = (Local_148.f_792 - 1);
					}
					else if (fLocal_71 < -0,5f)
					{
						Local_148.f_792 = (Local_148.f_792 - 10);
					}
					else
					{
						Local_148.f_792 = (Local_148.f_792 - 100);
					}
					Local_148.f_792 = Function_285(Local_148.f_792, &Local_148);
					Function_276(&iLocal_144);
				}
				fLocal_71 = (fLocal_71 - (0,008f * Function_275()));
			}
			else
			{
				fLocal_71 = 0,2f;
			}
			iVar7 = (iVar7 - Local_148.f_792);
			if (iVar7 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			Function_271(3, "{@MINIGAME.INCREASE_BET}{@MINIGAME.DECREASE_BET}", "5Fillet_ChangeBet", 1, 0, 0, 0, 0);
			Function_271(2, "{@UI.ACCEPT}", "5Fillet_EnterBet", 1, 0, 0, 0, 0);
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_190(4);
				Function_190(3);
				Function_190(2);
				Function_270(Local_148.f_792, 0);
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				DECOR_SET_INT(&(Local_148[045]), "iAdditionalMoney", Local_148.f_792);
				SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 455, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				if (Local_148.f_792 >= ((Local_148[045].f_332 - Local_148[045].f_328) * 3 / 4))
				{
					if (Local_148[045].f_224 == 0)
					{
						Local_148[045].f_224 = 1;
					}
					else if (Local_148[045].f_224 == 1)
					{
						Local_148[045].f_224 = 2;
					}
					else if (Local_148[045].f_224 == 2)
					{
						Local_148[045].f_224 = 3;
					}
					else if (Local_148[045].f_224 == 3)
					{
						(*&Local_148[045] + 300)[0]++;
						(*&Local_148[045] + 300)[1]++;
					}
				}
				else if (Local_148.f_792 >= ((Local_148[045].f_332 - Local_148[045].f_328) / 2))
				{
					(*&Local_148[045] + 300)[0]++;
					(*&Local_148[045] + 300)[1]++;
				}
				if (bLocal_73)
				{
					iLocal_1 = 48;
				}
				else
				{
					iLocal_1 = 0;
				}
			}
			Function_278();
			break;
		
		case 0x00000000:
			Function_3();
			Function_266();
			(&Local_148[045] + 160) = ATTACH_OBJECTS_USING_LOCATOR(&Local_148[045] + 152, GET_OBJECT_FROM_ACTOR(&(Local_148[045])), "pelvis_attachment", "grab", 4294967295);
			SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/ready/enter");
			Function_276(&iLocal_63);
			SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/idle_watching");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			SAY_SINGLE_LINE_CONTEXT(&(Local_148[045]), 263, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			Function_278();
			iLocal_1 = 15;
			break;
		
		case 0x0000000F:
			if (IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/ready/idle"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[045]), ((*&Local_148[045] + 200)[Local_148.f_2540] * 0,75f));
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/npc_loop");
				Function_276(&iLocal_63);
				Local_148[045].f_168 = 0;
				Local_148[045].f_324 = 0;
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(Local_148[045])), "ff_stop_looping");
				UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
				if (bLocal_24)
				{
					UI_ENTER("Hands");
					UI_EXIT("Hands.s0");
					UI_EXIT("Hands.s1");
					UI_EXIT("Hands.s2");
					UI_EXIT("Hands.s3");
					UI_EXIT("Hands.s4");
					if (Local_148[045].f_144 == 1)
					{
						UI_ENTER("Hands.s0");
					}
					else if (Local_148[045].f_144 == 2)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
					}
					else if (Local_148[045].f_144 == 3)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
					}
					else if (Local_148[045].f_144 == 4)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
						UI_ENTER("Hands.s3");
					}
					UI_ENTER("HandsTimer");
					UI_LABEL_SET_TEXT("HandsTimer", "5Fillet_TimeToBeat");
					Function_276(&iLocal_25);
				}
				Function_265(&Local_148);
				Function_264(&(Local_148[145]));
				iLocal_1 = 46;
			}
			else if (UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0))
			{
				if (bLocal_24)
				{
					UI_ENTER("Hands");
					UI_EXIT("Hands.s0");
					UI_EXIT("Hands.s1");
					UI_EXIT("Hands.s2");
					UI_EXIT("Hands.s3");
					UI_EXIT("Hands.s4");
					if (Local_148[045].f_144 == 1)
					{
						UI_ENTER("Hands.s0");
					}
					else if (Local_148[045].f_144 == 2)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
					}
					else if (Local_148[045].f_144 == 3)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
					}
					else if (Local_148[045].f_144 == 4)
					{
						UI_ENTER("Hands.s0");
						UI_ENTER("Hands.s1");
						UI_ENTER("Hands.s2");
						UI_ENTER("Hands.s3");
					}
					UI_ENTER("HandsTimer");
					UI_LABEL_SET_TEXT("HandsTimer", "5Fillet_TimeToBeat");
					UI_LABEL_SET_VALUE("HandsTimer", CEIL((*&Local_148[045] + 336)[Local_148.f_2540]));
					Function_263(&iLocal_25, (*&Local_148[045] + 336)[Local_148.f_2540]);
					Function_261(&iLocal_25);
				}
				Function_190(0);
				iLocal_1 = 48;
			}
			else
			{
				Function_271(0, "{@MINIGAME.SKIP_HELP}", "5Fillet_Skip", 1, 0, 0, 0, 0);
			}
			Function_278();
			break;
		
		case 0x0000002E:
			if ((((IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/win/win_A") || IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/win/win_B")) || IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/win/win_C")) || UNK_0xDA674AE0("@UI.ACCEPT", 1, 0)) || UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0))
			{
				if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0) || UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
				}
				if (bLocal_24)
				{
					Function_261(&iLocal_25);
					if (!UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0))
					{
						(*&Local_148[045] + 336)[Local_148.f_2540] = Function_277(&iLocal_25);
					}
					Function_263(&iLocal_25, (*&Local_148[045] + 336)[Local_148.f_2540]);
					Function_261(&iLocal_25);
				}
				iVar6 = 0;
				while (iVar6 <= 6)
				{
					if (IS_OBJECT_VALID(&(uLocal_42[iVar6])))
					{
						DESTROY_OBJECT(&(uLocal_42[iVar6]));
					}
					iVar6++;
				}
				DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&(Local_148[045])), "ff_stop_looping", true);
				Function_190(0);
				SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[045]), 1.0f);
				iLocal_1 = 48;
			}
			else if (IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/npc_loop/loop_or_quit/countme"))
			{
				Local_148[045].f_324++;
				if (Local_148[045].f_324 > (*&Local_148[045] + 300)[Local_148.f_2540])
				{
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&(Local_148[045])), "ff_stop_looping", true);
				}
			}
			else
			{
				Function_271(0, "{@MINIGAME.SKIP_HELP}", "5Fillet_Skip", 1, 0, 0, 0, 0);
			}
			UI_LABEL_SET_VALUE("HandsTimer", CEIL(Function_277(&iLocal_25)));
			Function_278();
			break;
		
		case 0x00000030:
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_148.f_2540 + 1);
			*(&Local_148[145] + 160) = ATTACH_OBJECTS_USING_LOCATOR(&Local_148[145] + 152, GET_OBJECT_FROM_ACTOR(&(Local_148[145])), "pelvis_attachment", "grab", 4294967295);
			SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/ready/enter");
			Local_148[145].f_168 = 0;
			SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 456, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			UI_ENTER("Hands");
			UI_EXIT("Hands.s0");
			UI_EXIT("Hands.s1");
			UI_EXIT("Hands.s2");
			UI_EXIT("Hands.s3");
			UI_EXIT("Hands.s4");
			if (Local_148[045].f_144 == 1)
			{
				UI_ENTER("Hands.s0");
			}
			else if (Local_148[045].f_144 == 2)
			{
				UI_ENTER("Hands.s0");
				UI_ENTER("Hands.s1");
			}
			else if (Local_148[045].f_144 == 3)
			{
				UI_ENTER("Hands.s0");
				UI_ENTER("Hands.s1");
				UI_ENTER("Hands.s2");
			}
			else if (Local_148[045].f_144 == 4)
			{
				UI_ENTER("Hands.s0");
				UI_ENTER("Hands.s1");
				UI_ENTER("Hands.s2");
				UI_ENTER("Hands.s3");
			}
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_227("5Fillet_HowToPlayHelp", 0x40f00000, 1, 2, 0, 0, 0, 0);
			iLocal_1 = 49;
			Function_278();
			break;
		
		case 0x00000031:
			if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/ready/idle"))
			{
				Function_279(&Local_148, 1);
				Function_276(&iLocal_63);
				Function_261(&iLocal_63);
				switch (iLocal_37)
				{
					case 0x00000000:
						Function_280(&(Local_148[145]));
						break;
					
					case 0x00000001:
						Function_260(&(Local_148[145]));
						break;
					
					case 0x00000002:
						Function_264(&(Local_148[145]));
						break;
				}
				HUD_CLEAR_OBJECTIVE();
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/player_loop");
				iLocal_82 = 1;
				Function_276(&iLocal_67);
				iLocal_1 = 6;
			}
			else
			{
				UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
				if (IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/ready/idle"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/ready/exit");
				}
			}
			Function_278();
			break;
		
		case 0x00000006:
			if (IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/idle"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/idle_watching");
			}
			if (IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/ready/idle"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/ready/exit");
			}
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_148.f_792);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			if (iLocal_82 != 1)
			{
				if (Local_148.f_796 <= Local_83.f_56)
				{
					if (Function_277(&iLocal_67) < 0,5f)
					{
						iVar8 = RAND_INT_RANGE(0, 100);
						if (iVar8 <= 1)
						{
							iVar9 = RAND_INT_RANGE(Local_148.f_796, (Local_83.f_56 - 1));
							iVar10 = RAND_INT_RANGE(0, true);
							Function_276(&iLocal_67);
							if (iVar10 == 0)
							{
								SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[iVar9], 61, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[iVar9], 60, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
				}
			}
			switch (iLocal_82)
			{
				case 0x00000001:
					if (UNK_0xDA674AE0("@FIVE_FINGER.A_BUTTON", 1, 0) || iLocal_34)
					{
						Function_190(5);
						Function_190(0);
						if (bLocal_24)
						{
							Function_276(&iLocal_25);
						}
						Function_258(&Local_148);
						iLocal_82 = 8;
					}
					else
					{
						Function_278();
						if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/ready/idle"))
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/player_loop");
						}
						if (StackVal == DECOR_GET_INT(&(Local_148[145]), "icon_on"))
						{
							SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), 0.0f);
							Function_254(&Local_148);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_277(&iLocal_63) < 0,5f)
					{
						SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), (*&Local_148[045] + 200)[Local_148.f_2540]);
						iLocal_82 = 4;
					}
					break;
				
				case 0x00000004:
					if (DECOR_GET_INT(&(Local_148[145]), "icon_on") == 99)
					{
					}
					else
					{
						Function_254(&Local_148);
						iLocal_82 = 5;
					}
					if ((((UNK_0xDA674AE0("@FIVE_FINGER.A_BUTTON", 1, 0) || UNK_0xDA674AE0("@FIVE_FINGER.B_BUTTON", 1, 0)) || UNK_0xDA674AE0("@FIVE_FINGER.C_BUTTON", 1, 0)) || UNK_0xDA674AE0("@FIVE_FINGER.D_BUTTON", 1, 0)) || iLocal_34)
					{
						Function_253(&Local_148);
					}
					break;
				
				case 0x00000005:
					if (StackVal == DECOR_GET_INT(&(Local_148[145]), "icon_on"))
					{
						iLocal_82 = 6;
					}
					if ((((UNK_0xDA674AE0("@FIVE_FINGER.A_BUTTON", 1, 0) || UNK_0xDA674AE0("@FIVE_FINGER.B_BUTTON", 1, 0)) || UNK_0xDA674AE0("@FIVE_FINGER.C_BUTTON", 1, 0)) || UNK_0xDA674AE0("@FIVE_FINGER.D_BUTTON", 1, 0)) || iLocal_34)
					{
						Function_253(&Local_148);
					}
					break;
				
				case 0x00000006:
					if (StackVal == DECOR_GET_INT(&(Local_148[145]), "icon_on"))
					{
						SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), ((*&Local_148[045] + 200)[Local_148.f_2540] / (*&Local_148[045] + 252)[Local_148.f_2540]));
						Function_252(&Local_148);
						if (UNK_0xDA674AE0(&iLocal_32, 1, 0) || iLocal_34)
						{
							Function_258(&Local_148);
							iLocal_82 = 8;
						}
						else if (Function_251())
						{
							Function_248(&Local_148);
						}
					}
					else
					{
						Function_252(&Local_148);
						if (UNK_0xDA674AE0(&iLocal_32, 1, 0) || iLocal_34)
						{
							Function_258(&Local_148);
							iLocal_82 = 8;
						}
						else if (Function_251())
						{
							Function_248(&Local_148);
						}
						else
						{
							UNK_0x7246F438(&iLocal_40);
							DESTROY_OBJECT(&iLocal_40);
							iLocal_72 = 2;
							iLocal_82 = 7;
						}
					}
					break;
				
				case 0x00000007:
					if (UNK_0xDA674AE0(&iLocal_32, 1, 0) || iLocal_34)
					{
						Function_258(&Local_148);
						iLocal_82 = 8;
					}
					else if (Function_251())
					{
						Function_248(&Local_148);
					}
					else if (iLocal_72 == 0)
					{
						Function_248(&Local_148);
					}
					else
					{
						iLocal_72 = (iLocal_72 - 1);
					}
					break;
				
				case 0x00000008:
					if (IS_ACTOR_ANIM_PHASE_LOCKED(&(Local_148[145])))
					{
						iLocal_62 = (*&Local_148[045] + 228)[Local_148.f_2540];
						if (iLocal_62 == 0)
						{
							RELEASE_ACTOR_ANIM_PHASE_LOCK(&(Local_148[145]));
							SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), (*&Local_148[045] + 200)[Local_148.f_2540]);
							GET_OBJECT_POSITION(&uLocal_38, &Var0);
							AUDIO_MG_FILLET_PULL_FROM_TABLE();
							Function_247(&Local_148);
						}
						else
						{
							iLocal_62 = (iLocal_62 - 1);
							iLocal_82 = 9;
						}
					}
					break;
				
				case 0x00000009:
					if (iLocal_62 == 0)
					{
						RELEASE_ACTOR_ANIM_PHASE_LOCK(&(Local_148[145]));
						SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), (*&Local_148[045] + 200)[Local_148.f_2540]);
						AUDIO_MG_FILLET_PULL_FROM_TABLE();
						PLAY_SOUND_FROM_POSITION("KNIFE_OUT_WOOD_MASTER", Var0);
						Function_247(&Local_148);
					}
					else
					{
						iLocal_62 = (iLocal_62 - 1);
					}
					break;
			}
			if (iLocal_1 != 86)
			{
				if (bLocal_24)
				{
					if (!Function_246(&Local_148))
					{
						if (!Function_245(&iLocal_25))
						{
							bVar12 = CEIL(((*&Local_148[045] + 336)[Local_148.f_2540] - Function_277(&iLocal_25)));
							if (bVar12 < 2)
							{
								if (bLocal_31 != bVar12)
								{
									PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
								}
							}
							UI_LABEL_SET_VALUE("HandsTimer", bVar12);
							bLocal_31 = bVar12;
							if (((*&Local_148[045] + 336)[Local_148.f_2540] - Function_277(&iLocal_25)) >= 0.0f)
							{
								if (Local_148[045].f_144 + 1 <= 5)
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
									Function_227("5Fillet_TimesUp", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								else
								{
									HUD_CLEAR_OBJECTIVE();
									HUD_CLEAR_OBJECTIVE_QUEUE();
									Function_227("5Fillet_PlayerLose", 0x40f00000, 1, 2, 0, 0, 0, 0);
								}
								Function_244(&Local_148);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000056:
			iLocal_62 = (iLocal_62 - 1);
			if (iLocal_62 < 0)
			{
				SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 457, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				if (Local_148[045].f_144 + 1 <= 5 && !bLocal_73)
				{
					Function_227("5Fillet_PlayerLose", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				if (Local_148[045].f_144 == 0)
				{
					UI_ENTER("Hands.s0");
				}
				else if (Local_148[045].f_144 == 1)
				{
					UI_ENTER("Hands.s1");
				}
				else if (Local_148[045].f_144 == 2)
				{
					UI_ENTER("Hands.s2");
				}
				else if (Local_148[045].f_144 == 3)
				{
					UI_ENTER("Hands.s3");
				}
				else if (Local_148[045].f_144 == 4)
				{
					UI_ENTER("Hands.s4");
				}
				Function_243(&Local_148, 1);
				iLocal_1 = 11;
				if (bLocal_24)
				{
					Function_261(&iLocal_25);
					UI_LABEL_SET_VALUE("HandsTimer", CEIL((*&Local_148[045] + 336)[Local_148.f_2540]));
				}
			}
			break;
		
		case 0x00000068:
			SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 458, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Local_148[045].f_144 == 0)
			{
				UI_ENTER("Hands.s0");
			}
			else if (Local_148[045].f_144 == 1)
			{
				UI_ENTER("Hands.s1");
			}
			else if (Local_148[045].f_144 == 2)
			{
				UI_ENTER("Hands.s2");
			}
			else if (Local_148[045].f_144 == 3)
			{
				UI_ENTER("Hands.s3");
			}
			else if (Local_148[045].f_144 == 4)
			{
				UI_ENTER("Hands.s4");
			}
			iLocal_1 = 11;
			if (bLocal_24)
			{
				Function_261(&iLocal_25);
				UI_LABEL_SET_VALUE("HandsTimer", CEIL((*&Local_148[045] + 336)[Local_148.f_2540]));
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/ready/idle"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), 1.0f);
				iLocal_1 = 8;
			}
			else if ((IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/win/win_A") || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/win/win_B")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/win/player/win_A"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), 1.0f);
				iLocal_1 = 7;
			}
			else if ((((((((((IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/s_0/s_0_pst") || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_1/0_1_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/1_0/1_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_2/0_2_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/2_0/2_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/3_0/3_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_3/0_3_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_4/0_4_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/4_0/4_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_5/0_5_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/5_0/5_0_pst"))
			{
				SET_ANIMATION_OVERRIDE_SCALE(&(Local_148[145]), 1.0f);
				RELEASE_ACTOR_ANIM_PHASE_LOCK(&(Local_148[145]));
				if (!IS_OBJECT_VALID(&Local_148[145] + 184))
				{
					Function_242(&Local_148);
					if (((((IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/s_0/s_0_pst") || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/1_0/1_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/2_0/2_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/3_0/3_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/4_0/4_0_pst")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/5_0/5_0_pst"))
					{
						bVar13 = false;
					}
					else if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_1/0_1_pst"))
					{
						bVar13 = true;
					}
					else if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_2/0_2_pst"))
					{
						bVar13 = 2;
					}
					else if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_3/0_3_pst"))
					{
						bVar13 = 3;
					}
					else if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_4/0_4_pst"))
					{
						bVar13 = 4;
					}
					else if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_5/0_5_pst"))
					{
						bVar13 = 4;
					}
					PRINTSTRING("Pricking finger ");
					PRINTINT(bVar13);
					PRINTNL();
					PRICK_PLAYER_FINGER(bVar13);
				}
			}
			else if ((((((((((IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/s_0") || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_1")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/1_0")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_2")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/2_0")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/3_0")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_3")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_4")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/4_0")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/0_5")) || IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/lose/player/5_0"))
			{
			}
			break;
		
		case 0x00000007:
			Function_3();
			HUD_CLEAR_OBJECTIVE();
			Function_276(&iLocal_63);
			UI_EXIT("HandsTimer");
			Local_148[145].f_144++;
			if (Local_148[145].f_144 <= 2 || (iLocal_75 && Local_148[145].f_144 != 1))
			{
				UI_EXIT("Hands");
				Function_123(Local_148.f_792 * 2, 0, 1);
				DECOR_SET_INT(&(Local_148[045]), "iAdditionalMoney", false);
				PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
				Function_92(437, Local_148.f_792, 0, 0);
				Function_92(450, Local_148.f_792, 0, 0);
				if ((Function_70(597) + Function_70(450)) >= 10000)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
					{
						AWARD_ACHIEVEMENT(24);
					}
				}
				Global_21684[Local_837].f_20++;
				if (Global_21684[Local_837].f_20 >= Function_70(439))
				{
					Function_55(439, Global_21684[Local_837].f_20, 0);
				}
				if (Local_148.f_796 == Local_83.f_56)
				{
					if (Function_241())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_148[045]), 267, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 459, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 0;
				}
				else
				{
					if (Function_241())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_148[045]), 264, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 460, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					Function_240(GET_PLAYER_ACTOR(0));
					*(&Var14 + 12) = Function_240(GET_PLAYER_ACTOR(0));
					Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
					Var14 = Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
					Var14.f_24 = 0;
					bLocal_58 = Function_236(&uLocal_35, 0, &Var14, 1, 0, 0);
					uLocal_56 = &Local_148[045];
					Function_223(&Local_148, 0);
					iLocal_1 = 9;
				}
			}
			else
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_227("FiveFingerFillet_RoundWon", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (Function_241())
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_148[045]), 264, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 460, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(&iLocal_40))
			{
				UNK_0x7246F438(&iLocal_40);
				DESTROY_OBJECT(&iLocal_40);
			}
			if (Local_148.f_796 != Local_83.f_56)
			{
				SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[Local_148.f_796], 61, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			HUD_CLEAR_OBJECTIVE();
			Function_276(&iLocal_63);
			if (Local_148[045].f_144 + 1 <= 5 && !bLocal_73)
			{
				Function_121(437, Local_148.f_792, 0);
				Function_121(450, Local_148.f_792, 0);
				Global_21684[Local_837].f_20 = 0;
				SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 461, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_92(438, 1, 0, 0);
				if (Local_148.f_796 <= Local_83.f_56)
				{
					iVar18 = RAND_INT_RANGE(Local_148.f_796, (Local_83.f_56 - 1));
					iVar19 = RAND_INT_RANGE(0, true);
					Function_276(&iLocal_67);
					SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[iVar18], 60, &(Local_148[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 1;
			}
			else
			{
				iLocal_1 = 10;
			}
			break;
		
		case 0x00000009:
			if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/idle"))
			{
				Function_3();
				if (Local_148[145].f_144 <= 2 || (iLocal_75 && Local_148[145].f_144 != 1))
				{
					Local_148[045].f_144 = 0;
					if (Local_148.f_796 == 1)
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/first_callout");
					}
					else if (Local_148.f_796 <= Local_83.f_56)
					{
						SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/second_callout");
					}
					if (Local_148.f_796 != Local_83.f_56)
					{
						if (!IS_ACTION_NODE_PLAYING(&uLocal_56, "fivefingerfillet/stand"))
						{
							DESTROY_ACTOR(&uLocal_56);
						}
						SAY_SINGLE_LINE_CONTEXT(&Local_83 + 4[Local_148.f_796], 160, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 462, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 463, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					iLocal_1 = 106;
				}
				else
				{
					Local_148.f_2540 = Local_148[145].f_144;
					if (bLocal_73)
					{
						iLocal_1 = 48;
					}
					else
					{
						iLocal_1 = 0;
					}
				}
			}
			break;
		
		case 0x0000000A:
			Function_3();
			Local_148[045].f_144++;
			iLocal_1 = 106;
			break;
		
		case 0x0000006A:
			DESTROY_OBJECT(&Local_148[145] + 184);
			DESTROY_OBJECT(&Local_148[145] + 192);
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_284());
			if (Local_148[145].f_144 <= 2 || (iLocal_75 && Local_148[145].f_144 != 1))
			{
				Function_276(&iLocal_63);
				if (Local_148.f_796 != Local_83.f_56)
				{
					if (!IS_ACTION_NODE_PLAYING(&uLocal_56, "fivefingerfillet/stand"))
					{
						DESTROY_ACTOR(&uLocal_56);
						if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Local_83 + 4[Local_148.f_796])))
						{
							GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO(&Local_83 + 4[Local_148.f_796]));
						}
						Function_276(&iLocal_63);
						iLocal_1 = 34;
					}
				}
				else
				{
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 0;
				}
			}
			else if (Local_148[045].f_144 <= 5 && !bLocal_73)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 1;
			}
			else
			{
				Function_278();
				iLocal_1 = 47;
			}
			break;
		
		case 0x00000022:
			if ((GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(&Local_148 + 728[02] + 8), "UseCase1") != "" && !IS_ACTOR_VALID(&uLocal_56)) && MAKE_ACTOR_READY_FOR_ACTION(&Local_83 + 4[Local_148.f_796], 1))
			{
				Function_233(&Local_83 + 4[Local_148.f_796], &Local_148, 0, GET_ACTOR_ENUM_STRING(&Local_83 + 4[Local_148.f_796]), ((4 - Local_83.f_56) + Local_148.f_796), 1);
				Local_148.f_796++;
				Function_276(&iLocal_63);
				iLocal_1 = 40;
			}
			else if (Local_148.f_796 != Local_83.f_56)
			{
				if (!IS_ACTION_NODE_PLAYING(&uLocal_56, "fivefingerfillet/stand"))
				{
					DESTROY_ACTOR(&uLocal_56);
				}
			}
			if (Function_277(&iLocal_63) < 10.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 2;
			}
			break;
		
		case 0x00000028:
			if (IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/Fake/sit"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&bLocal_58);
				Function_240(GET_PLAYER_ACTOR(0));
				(&Var20 + 12) = Function_240(GET_PLAYER_ACTOR(0));
				Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var20 = Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var20.f_24 = 0;
				bLocal_58 = Function_229(&uLocal_35, 0, &Var20, 1, 0, 0);
				Function_276(&iLocal_63);
				iLocal_1 = 36;
			}
			if (Function_277(&iLocal_63) < 10.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 2;
			}
			break;
		
		case 0x00000024:
			if (!IS_ACTION_NODE_PLAYING(&(Local_148[045]), "fivefingerfillet/Fake/sit"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/idle");
				iLocal_1 = 35;
			}
			if (Function_277(&iLocal_63) < 10.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_8 = 2;
			}
			break;
		
		case 0x0000002F:
			Local_148[145].f_168 = 0;
			if (IS_ACTION_NODE_PLAYING(&(Local_148[145]), "fivefingerfillet/ready/idle"))
			{
				Function_279(&Local_148, 1);
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/player_loop");
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000016:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
				{
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_8 = 2;
				}
				else
				{
					iLocal_1 = iLocal_22;
					iLocal_0 = iLocal_23;
				}
				UI_EXIT("Fivefingerfillet_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame");
			}
			break;
	}
	return;
}

var Function_229(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xE64B / 58955
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "5Fillet_OppSit", 2, 1);
	}
	Function_230(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "minigame");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_230(float fParam0, int iParam1) //Position: 0xE6DE / 59102
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 0);
	Function_232(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 1);
	Function_231(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&fParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&fParam0, 1, 0, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&fParam0, 0, 1);
	return;
}

void Function_231(var uParam0, struct<25> Param1) //Position: 0xE729 / 59177
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var0 = Vector(-0,840515f, 0,917482f, 1,675858f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	Var0 = Vector(-0,131741f, 1,124052f, 0,087639f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&uParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

void Function_232(Vector3 vParam0, struct<25> Param1) //Position: 0xE82B / 59435
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&vParam0, 1);
	SET_CAMERASHOT_FOV(&vParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&vParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&vParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&vParam0, 0);
	Var0 = Vector(-1,086689f, 0,929619f, 1,843185f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&vParam0, Var0);
	Var0 = Vector(-0,12188f, 1,12377f, 0,056633f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&vParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&vParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&vParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&vParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&vParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&vParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&vParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&vParam0, 16.0f);
	return;
}

void Function_233(int iParam0, struct<773> Param1) //Position: 0xE92D / 59693
{
	int iVar0;
	int iVar1;
	
	if (!iParam2 != 4294967295 && !(*&Param1 + 728)[iParam22])
	{
		iVar0 = 0;
		while (iVar0 < Param1.f_768)
		{
			if (&Param1[iVar045] == "")
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
		Function_235(&(Param1[iVar145]), &iParam0, iParam2, &iParam3, iParam4);
		(*&Param1 + 728)[iParam22] = 1;
		(&Param1 + 728[iParam22])->f_4 = iVar1;
		Param1.f_768++;
		if (&iParam0 == GET_PLAYER_ACTOR(0))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Param1.f_772 = iParam2;
			Function_234(&uLocal_60, GET_GRINGO_FROM_OBJECT(&Param1 + 728[iParam22] + 8));
			if (!SNAP_ACTOR_TO_GRINGO(&iParam0, &Param1 + 728[iParam22] + 8, "UseCase1", false, 0, 1))
			{
			}
		}
		else
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param1 + 728[iParam22] + 8), true);
			if (&bParam5)
			{
				SNAP_ACTOR_TO_GRINGO(&iParam0, &Param1 + 728[iParam22] + 8, "UseCase1", false, 0, 0);
				TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 728[iParam22] + 8), "UseCase1", 4294967295, 1);
			}
			else
			{
				TASK_USE_GRINGO(&iParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 728[iParam22] + 8), "UseCase1", 4294967295, 1);
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "fivefingerfillet/idle");
			}
			TASK_PRIORITY_SET(&iParam0, true);
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(&iParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_234(var uParam0, int iParam1) //Position: 0xEB4F / 60239
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<2> Var15;
	struct<2> Var17;
	
	if (IS_GRINGO_VALID(&iParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iParam1), &Var0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var2, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var4, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&iParam1), &Var6, 2);
		fVar8 = 0,6f;
		fVar9 = 1.0f;
		fVar10 = 0,8f;
		fVar11 = 0,4f;
		fVar12 = 1,16f;
		fVar13 = -0,4f;
		fVar14 = 37.0f;
		Var15 = Var0;
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var15, StackVal) * Vector(fVar8, fVar8, fVar8), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var15, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
		Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var15, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
		Var17 = Var0;
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var17, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var17, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
		Var17 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var17, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
		}
		SET_CAMERA_POSITION(&uParam0, Var15);
		SET_CAMERA_TARGET_POSITION(&uParam0, Var17, 0);
		SET_CAMERA_FOV(&uParam0, fVar14);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_FIVEFINGERFILLET_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_235(struct<333> Param0) //Position: 0xECD1 / 60625
{
	if (!AI_IGNORE_ACTOR(&cParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(&cParam1, 1);
	Param0.f_144 = 0;
	Param0.f_140 = 1.0f;
	Param0 = &cParam1;
	Param0.f_136 = uParam2;
	if (&cParam1 == GET_PLAYER_ACTOR(0))
	{
		strcpy(&Param0 + 8, "Poker_Name_P", 64);
	}
	else
	{
		strcpy(&Param0 + 8, &cParam3, 64);
	}
	ACTOR_HOLSTER_WEAPON(&Param0, 1);
	Param0.f_148 = iParam4;
	switch (iParam4)
	{
		case 0xFFFFFFFF:
			(*&Param0 + 200)[0] = -1.0f;
			break;
		
		case 0x00000000:
			(*&Param0 + 200)[0] = 0,8f;
			(*&Param0 + 200)[1] = 1,2f;
			(*&Param0 + 228)[0] = 1;
			(*&Param0 + 228)[1] = 1;
			(*&Param0 + 252)[0] = 2.0f;
			(*&Param0 + 252)[1] = 2.0f;
			(*&Param0 + 276)[0] = 128.0f;
			(*&Param0 + 276)[1] = 128.0f;
			(*&Param0 + 300)[0] = 1;
			(*&Param0 + 300)[1] = 2;
			Param0.f_224 = 0;
			Param0.f_328 = 1;
			if (Function_99())
			{
				Param0.f_332 = 3;
			}
			else
			{
				Param0.f_332 = 5;
			}
			(*&Param0 + 336)[0] = 7.0f;
			(*&Param0 + 336)[1] = 9.0f;
			break;
		
		case 0x00000001:
			(*&Param0 + 200)[0] = 0,8f;
			(*&Param0 + 200)[1] = 1,3f;
			(*&Param0 + 228)[0] = 1;
			(*&Param0 + 228)[1] = 1;
			(*&Param0 + 252)[0] = 2.0f;
			(*&Param0 + 252)[1] = 2.0f;
			(*&Param0 + 276)[0] = 128.0f;
			(*&Param0 + 276)[1] = 128.0f;
			(*&Param0 + 300)[0] = 1;
			(*&Param0 + 300)[1] = 2;
			Param0.f_224 = 1;
			if (Function_99())
			{
				Param0.f_328 = 1;
				Param0.f_332 = 5;
			}
			else
			{
				Param0.f_328 = 3;
				Param0.f_332 = 10;
			}
			(*&Param0 + 336)[0] = 7.0f;
			(*&Param0 + 336)[1] = 8.0f;
			break;
		
		case 0x00000002:
			(*&Param0 + 200)[0] = 1.0f;
			(*&Param0 + 200)[1] = 1,3f;
			(*&Param0 + 228)[0] = 0;
			(*&Param0 + 228)[1] = 0;
			(*&Param0 + 252)[0] = 2.0f;
			(*&Param0 + 252)[1] = 2.0f;
			(*&Param0 + 276)[0] = 128.0f;
			(*&Param0 + 276)[1] = 128.0f;
			(*&Param0 + 300)[0] = 1;
			(*&Param0 + 300)[1] = 2;
			Param0.f_224 = 2;
			if (Function_99())
			{
				Param0.f_328 = 3;
				Param0.f_332 = 12;
			}
			else
			{
				Param0.f_328 = 10;
				Param0.f_332 = 25;
			}
			(*&Param0 + 336)[0] = 6.0f;
			(*&Param0 + 336)[1] = 8.0f;
			break;
		
		case 0x00000003:
			(*&Param0 + 200)[0] = 1,1f;
			(*&Param0 + 200)[1] = 1,4f;
			(*&Param0 + 228)[0] = 0;
			(*&Param0 + 228)[1] = 0;
			(*&Param0 + 252)[0] = 2.0f;
			(*&Param0 + 252)[1] = 2.0f;
			(*&Param0 + 276)[0] = 128.0f;
			(*&Param0 + 276)[1] = 128.0f;
			(*&Param0 + 300)[0] = 1;
			(*&Param0 + 300)[1] = 3;
			Param0.f_224 = 3;
			if (Function_99())
			{
				Param0.f_328 = 5;
				Param0.f_332 = 25;
			}
			else
			{
				Param0.f_328 = 25;
				Param0.f_332 = 100;
			}
			(*&Param0 + 336)[0] = 5.0f;
			(*&Param0 + 336)[1] = 11.0f;
			break;
	}
}

var Function_236(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xF05A / 61530
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "5Finger_ChangeOpponent", 1, 1);
	}
	Function_237(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "minigame");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_237(float fParam0, int iParam1) //Position: 0xF0F5 / 61685
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 0);
	Function_238(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&fParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&fParam0, 0, 4.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&fParam0, 0, 1);
	return;
}

void Function_238(var uParam0, struct<25> Param1) //Position: 0xF12B / 61739
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var0 = Vector(-1,018317f, 0,975367f, -2,003327f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector((&Param1 + 12), Var0, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	Var0 = Vector(0,004787f, 1,099193f, -0,072784f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&uParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 2);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

struct<8> Function_239(bool bParam0) //Position: 0xF235 / 62005
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_240(bool bParam0) //Position: 0xF25E / 62046
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_241() //Position: 0xF270 / 62064
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 100);
	if (iVar0 >= 50)
	{
		return 1;
	}
	return 0;
}

void Function_242(struct<45>[] Param0) //Position: 0xF28B / 62091
{
	struct<5> Var0;
	var uVar5;
	
	if (IS_OBJECT_VALID(&Param0[145] + 152) && !IS_OBJECT_VALID(&Param0[145] + 184))
	{
		GET_OBJECT_POSITION(&Param0[145] + 152, &Var2);
		GET_OBJECT_POSITION(&uLocal_38, &Var0);
		fVar4 = (StackVal - StackVal);
		*(&Param0[145] + 184) = CREATE_RMPTFX_EMITTER_ON_BONE(StackVal, Function_57(), "script_fivefingers_blood_drip", "pelvis_attachment", GET_OBJECT_FROM_ACTOR(&(Param0[145])), Vector(0.0f, fVar4, 0.0f), &uLocal_35);
		if (IS_OBJECT_VALID(&Param0[145] + 184))
		{
			UNK_0x6745191B(StackVal, &Param0[145] + 184, Vector(0.0f, 0.0f, 0.0f));
		}
		else
		{
			LOG_ERROR("Table.Players[1].oKnifeBloodParticle is not valid");
		}
	}
	else
	{
		LOG_ERROR("Table.Players[1].oKnife is NOT valid");
	}
	if (!IS_OBJECT_VALID(&Param0[145] + 192))
	{
		switch (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&(Param0[145])), "finger"))
		{
			case 0x00000000:
				uVar5 = "thumb_03_l";
				break;
			
			case 0x00000001:
				uVar5 = "finger_13_l";
				break;
			
			case 0x00000002:
				uVar5 = "finger_23_l";
				break;
			
			case 0x00000003:
				uVar5 = "finger_33_l";
				break;
			
			case 0x00000004:
				uVar5 = "finger_43_l";
				break;
		}
		*(&Param0[145] + 192) = CREATE_RMPTFX_EMITTER_ON_BONE(StackVal, Function_57(), "script_fivefingers_blood", &uVar5, GET_OBJECT_FROM_ACTOR(&(Param0[145])), Vector(0.0f, 0.0f, 0.0f), &uLocal_35);
		UNK_0x6745191B(StackVal, &Param0[145] + 192, Vector(0.0f, 0.0f, 0.0f));
	}
	return;
}

void Function_243(struct<45>[] Param0) //Position: 0xF4A8 / 62632
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	
	if (IS_OBJECT_VALID(&Param0[145] + 152))
	{
		GET_OBJECT_POSITION(&uLocal_38, &Var0);
		if (bParam1)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 1;
		}
		iVar3 = 0;
		while (iVar3 <= iVar2)
		{
			if (bParam1)
			{
				iVar5 = 1;
				fVar4 = 0,1f;
			}
			else
			{
				iVar5 = 1;
				fVar4 = 0,01f;
			}
			CREATE_DECAL(iVar5, Var0, fVar4, 1, 0);
			iVar3++;
		}
	}
	return;
}

void Function_244(struct<45> Param0) //Position: 0xF510 / 62736
{
	PRINTSTRING("Do Hit Time Up");
	PRINTNL();
	SET_ACTION_NODE_FOR_ACTOR(&(Param0[145]), "fivefingerfillet/time_loss");
	RELEASE_ACTOR_ANIM_PHASE_LOCK(&(Param0[145]));
	SET_ANIMATION_OVERRIDE_SCALE(&(Param0[145]), (*&Param0[045] + 200)[Param0.f_2540]);
	UNK_0x7246F438(&iLocal_40);
	DESTROY_OBJECT(&iLocal_40);
	Function_189();
	iLocal_1 = 104;
	return;
}

bool Function_245(int iParam0) //Position: 0xF58D / 62861
{
	return Function_18(iParam0, 2);
}

bool Function_246(struct<45> Param0) //Position: 0xF59B / 62875
{
	if (Param0[145].f_168 > 11)
	{
		if (Param0[145].f_324 + 1 > (*&Param0[045] + 300)[Param0.f_2540])
		{
			return 1;
		}
	}
	return 0;
}

void Function_247(struct<45> Param0) //Position: 0xF5D0 / 62928
{
	if (Param0[145].f_168 > 11)
	{
		Param0[145].f_324++;
		if (Param0[145].f_324 > (*&Param0[045] + 300)[Param0.f_2540])
		{
			HUD_TIMER_PAUSE();
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&(Param0[145])), "ff_stop_looping", true);
			Function_189();
			iLocal_1 = 11;
		}
		else
		{
			Param0[145].f_168 = 1;
			iLocal_82 = 4;
		}
	}
	else
	{
		iLocal_82 = 4;
	}
	return;
}

void Function_248(struct<45>[] Param0) //Position: 0xF654 / 63060
{
	PRINTSTRING("Supposed to hit - ");
	PRINTINT(bLocal_141);
	PRINTNL();
	SET_ACTION_NODE_FOR_ACTOR(&(Param0[145]), Function_250(&Param0, 0));
	SET_ANIMATION_OVERRIDE_SCALE(&(Param0[145]), 0.0f);
	SAY_SINGLE_LINE_CONTEXT(&(Param0[045]), 266, &(Param0[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
	Function_249();
	UNK_0x7246F438(&iLocal_40);
	DESTROY_OBJECT(&iLocal_40);
	Function_189();
	iLocal_1 = 86;
	iLocal_62 = 2;
	return;
}

void Function_249() //Position: 0xF6CC / 63180
{
	var uVar0;
	
	GET_OBJECT_POSITION(&uLocal_38, &uVar0);
	AUDIO_MG_FILLET_HIT_FINGER();
	return;
}

var Function_250(struct<45>[] Param0) //Position: 0xF6DE / 63198
{
	bool bVar0;
	
	if (bParam1)
	{
		bVar0 = (Param0[145].f_168 - 1);
	}
	else
	{
		bVar0 = Param0[145].f_168;
	}
	switch (bVar0)
	{
		case 0x00000000:
			return "fivefingerfillet/lose/player/s_0/s_0_pst";
			break;
		
		case 0x00000001:
			return "fivefingerfillet/lose/player/0_1/0_1_pst";
			break;
		
		case 0x00000002:
			return "fivefingerfillet/lose/player/1_0/1_0_pst";
			break;
		
		case 0x00000003:
			return "fivefingerfillet/lose/player/0_2/0_2_pst";
			break;
		
		case 0x00000004:
			return "fivefingerfillet/lose/player/2_0/2_0_pst";
			break;
		
		case 0x00000005:
			return "fivefingerfillet/lose/player/0_3/0_3_pst";
			break;
		
		case 0x00000006:
			return "fivefingerfillet/lose/player/3_0/3_0_pst";
			break;
		
		case 0x00000007:
			return "fivefingerfillet/lose/player/0_4/0_4_pst";
			break;
		
		case 0x00000008:
			return "fivefingerfillet/lose/player/4_0/4_0_pst";
			break;
		
		case 0x00000009:
			return "fivefingerfillet/lose/player/0_5/0_5_pst";
			break;
		
		case 0x0000000A:
			return "fivefingerfillet/lose/player/5_0/5_0_pst";
			break;
	}
	return "";
}

bool Function_251() //Position: 0xF953 / 63827
{
	if (UNK_0xDA674AE0("@FIVE_FINGER.A_BUTTON", 1, 0) && !STRINGS_ARE_EQUAL(&iLocal_32, "@FIVE_FINGER.A_BUTTON"))
	{
		return 1;
	}
	if (UNK_0xDA674AE0("@FIVE_FINGER.B_BUTTON", 1, 0) && !STRINGS_ARE_EQUAL(&iLocal_32, "@FIVE_FINGER.B_BUTTON"))
	{
		return 1;
	}
	if (UNK_0xDA674AE0("@FIVE_FINGER.C_BUTTON", 1, 0) && !STRINGS_ARE_EQUAL(&iLocal_32, "@FIVE_FINGER.C_BUTTON"))
	{
		return 1;
	}
	if (UNK_0xDA674AE0("@FIVE_FINGER.D_BUTTON", 1, 0) && !STRINGS_ARE_EQUAL(&iLocal_32, "@FIVE_FINGER.D_BUTTON"))
	{
		return 1;
	}
	return 0;
}

void Function_252(struct<45>[] Param0) //Position: 0xFA6E / 64110
{
	switch (Param0[045].f_224)
	{
		case 0x00000000:
			iLocal_32 = "@FIVE_FINGER.A_BUTTON";
			break;
		
		case 0x00000001:
			switch ((*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224])
			{
				case 0x00000000:
					iLocal_32 = "@FIVE_FINGER.A_BUTTON";
					break;
				
				case 0x00000003:
					iLocal_32 = "@FIVE_FINGER.B_BUTTON";
					break;
				
				case 0x00000002:
					iLocal_32 = "@FIVE_FINGER.B_BUTTON";
					break;
				
				case 0x00000001:
					iLocal_32 = "@FIVE_FINGER.B_BUTTON";
					break;
			}
			break;
		
		case 0x00000002:
			switch ((*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224])
			{
				case 0x00000000:
					iLocal_32 = "@FIVE_FINGER.A_BUTTON";
					break;
				
				case 0x00000003:
					iLocal_32 = "@FIVE_FINGER.B_BUTTON";
					break;
				
				case 0x00000002:
					iLocal_32 = "@FIVE_FINGER.C_BUTTON";
					break;
				
				case 0x00000001:
					iLocal_32 = "@FIVE_FINGER.B_BUTTON";
					break;
			}
			break;
		
		case 0x00000003:
			switch ((*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224])
			{
				case 0x00000000:
					iLocal_32 = "@FIVE_FINGER.A_BUTTON";
					break;
				
				case 0x00000003:
					iLocal_32 = "@FIVE_FINGER.B_BUTTON";
					break;
				
				case 0x00000002:
					iLocal_32 = "@FIVE_FINGER.C_BUTTON";
					break;
				
				case 0x00000001:
					iLocal_32 = "@FIVE_FINGER.D_BUTTON";
					break;
			}
			break;
	}
	return;
}

void Function_253(struct<45>[] Param0) //Position: 0xFCEB / 64747
{
	PRINTSTRING("Hit Early - Supposed to hit - ");
	PRINTINT(StackVal);
	PRINTNL();
	SET_ACTION_NODE_FOR_ACTOR(&(Param0[145]), Function_250(&Param0, 1));
	SET_ANIMATION_OVERRIDE_SCALE(&(Param0[145]), 0.0f);
	SAY_SINGLE_LINE_CONTEXT(&(Param0[045]), 266, &(Param0[145]), 0, 0, 0, 4294967295, 4294967295, 0, 1);
	Function_249();
	UNK_0x7246F438(&iLocal_40);
	DESTROY_OBJECT(&iLocal_40);
	Function_189();
	iLocal_1 = 86;
	iLocal_62 = 2;
	return;
}

void Function_254(int iParam0) //Position: 0xFD87 / 64903
{
	if (IS_RMPTFX_FINISHED(&iLocal_40) && !IS_OBJECT_VALID(&iLocal_40))
	{
		DESTROY_OBJECT(&iLocal_40);
		Function_255(&iParam0);
	}
	return;
}

void Function_255(struct<45>[] Param0) //Position: 0xFDAA / 64938
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (Param0[145].f_168 <= 11)
	{
		Function_257(StackVal, &(Param0[145]), &Var0, &Var2, 0);
		switch (StackVal)
		{
			case 0x00000000:
				bLocal_141 = false;
				iLocal_40 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "HitHereParticle", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224]), Var0);
				UNK_0x6745191B(&iLocal_40, Var2);
				break;
			
			case 0x00000001:
				bLocal_141 = true;
				iLocal_40 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "HitHereParticle", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224]), Var0);
				UNK_0x6745191B(&iLocal_40, Var2);
				break;
			
			case 0x00000002:
				bLocal_141 = 2;
				iLocal_40 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "HitHereParticle", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224]), Var0);
				UNK_0x6745191B(&iLocal_40, Var2);
				break;
			
			case 0x00000003:
				bLocal_141 = 3;
				iLocal_40 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "HitHereParticle", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224]), Var0);
				UNK_0x6745191B(&iLocal_40, Var2);
				break;
			
			case 0x00000004:
				bLocal_141 = 4;
				iLocal_40 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "HitHereParticle", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224]), Var0);
				UNK_0x6745191B(&iLocal_40, Var2);
				break;
			
			case 0x00000005:
				bLocal_141 = 5;
				iLocal_40 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "HitHereParticle", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[Param0[145].f_168]6] + 8)[Param0[045].f_224]), Var0);
				UNK_0x6745191B(&iLocal_40, Var2);
				break;
			}
	}
	return;
}

var Function_256(struct<45>[] Param0, int iParam1) //Position: 0x10055 / 65621
{
	int iVar0;
	
	if (IS_SWITCH())
	{
	}
	else if (IS_PS3())
	{
	}
	else if (IS_PS4())
	{
	}
	switch (Param0[045].f_224)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000001:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_x";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_x";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_a";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_1";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_a";
					}
					break;
				
				case 0x00000002:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_cir";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_cir";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_b";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_2";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_b";
					}
					break;
				
				case 0x00000000:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_x";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_x";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_a";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_1";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_a";
					}
					break;
				
				case 0x00000003:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_cir";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_cir";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_b";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_2";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_b";
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_cir";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_cir";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_b";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_2";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_b";
					}
					break;
				
				case 0x00000002:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_tri";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_tri";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_x";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_3";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_y";
					}
					break;
				
				case 0x00000000:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_x";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_x";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_a";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_1";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_a";
					}
					break;
				
				case 0x00000003:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_cir";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_cir";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_b";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_2";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_b";
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_sq";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_sq";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_y";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_4";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_x";
					}
					break;
				
				case 0x00000002:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_tri";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_tri";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_x";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_3";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_y";
					}
					break;
				
				case 0x00000000:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_x";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_x";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_a";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_1";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_a";
					}
					break;
				
				case 0x00000003:
					if (IS_PS3())
					{
						iVar0 = "script_fivefingers_ps3_cir";
					}
					else if (IS_PS4())
					{
						iVar0 = "script_fivefingers_ps4_cir";
					}
					else if (IS_SWITCH())
					{
						iVar0 = "script_fivefingers_switch_b";
					}
					else if (IS_USING_KEYBOARD_AND_MOUSE())
					{
						iVar0 = "script_fivefingers_pc_kb_2";
					}
					else
					{
						iVar0 = "script_fivefingers_pc_controller_b";
					}
					break;
			}
			break;
		
		case 0x00000000:
			if (IS_PS3())
			{
				iVar0 = "script_fivefingers_ps3_x";
			}
			else if (IS_PS4())
			{
				iVar0 = "script_fivefingers_ps4_x";
			}
			else if (IS_SWITCH())
			{
				iVar0 = "script_fivefingers_switch_a";
			}
			else if (IS_USING_KEYBOARD_AND_MOUSE())
			{
				iVar0 = "script_fivefingers_pc_kb_1";
			}
			else
			{
				iVar0 = "script_fivefingers_pc_controller_a";
			}
			break;
	}
	PRINTSTRING(&iVar0);
	PRINTNL();
	return &iVar0;
}

void Function_257(float fParam0, struct<2> Param1, int iParam3, bool bParam4) //Position: 0x10B87 / 68487
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		switch (iParam3)
		{
			case 0x00000000:
				if (&bParam4)
				{
					Var0 = Vector(0,1243f, 0,803f, 0,2043f);
					Var2 = Vector(0.0f, 315.0f, 0.0f);
				}
				else
				{
					Var0 = Vector(0,0864f, 0,803f, 0,1524f);
					Var2 = Vector(0.0f, 90.0f, 0.0f);
				}
				break;
			
			case 0x00000001:
				if (&bParam4)
				{
					Var0 = Vector(0,1494f, 0,803f, 0,1482f);
					Var2 = Vector(0.0f, 315.0f, 0.0f);
				}
				else
				{
					Var0 = Vector(0,1115f, 0,803f, 0,0963f);
					Var2 = Vector(0.0f, 90.0f, 0.0f);
				}
				break;
			
			case 0x00000002:
				if (&bParam4)
				{
					Var0 = Vector(0,1595f, 0,803f, 0,0821f);
					Var2 = Vector(0.0f, 315.0f, 0.0f);
				}
				else
				{
					Var0 = Vector(0,1216f, 0,803f, 0,0302f);
					Var2 = Vector(0.0f, 125.0f, 0.0f);
				}
				break;
			
			case 0x00000003:
				if (&bParam4)
				{
					Var0 = Vector(0,1239f, 0,803f, 0,0472f);
					Var2 = Vector(0.0f, 315.0f, 0.0f);
				}
				else
				{
					Var0 = Vector(0,086f, 0,803f, -0,0047f);
					Var2 = Vector(0.0f, 140.0f, 0.0f);
				}
				break;
			
			case 0x00000004:
				if (&bParam4)
				{
					Var0 = Vector(0,0773f, 0,803f, 0,0404f);
					Var2 = Vector(0.0f, 315.0f, 0.0f);
				}
				else
				{
					Var0 = Vector(0,0393f, 0,803f, -0,0115f);
					Var2 = Vector(0.0f, 175.0f, 0.0f);
				}
				break;
			
			case 0x00000005:
				if (&bParam4)
				{
					Var0 = Vector(0,0265f, 0,803f, 0,0558f);
					Var2 = Vector(0.0f, 315.0f, 0.0f);
				}
				else
				{
					Var0 = Vector(-0,0114f, 0,803f, 0,0039f);
					Var2 = Vector(0.0f, 185.0f, 0.0f);
				}
				break;
		}
		GET_OBJECT_RELATIVE_ORIENTATION(&fParam0, Var2, &Param2);
		GET_OBJECT_RELATIVE_POSITION(&fParam0, Var0, &Param1);
		PRINTSTRING("Marker Position returning ");
		PRINTVECTOR(Param1);
		PRINTNL();
		PRINTSTRING("Marker Orientation returning ");
		PRINTVECTOR(Param2);
		PRINTNL();
	}
}

void Function_258(struct<45> Param0) //Position: 0x10DE8 / 69096
{
	Function_259();
	SET_ACTOR_ANIM_PHASE_LOCK(&(Param0[145]), (*&Param0 + 804)[(*&Param0 + 2444)[Param0[145].f_168]6]);
	Param0[145].f_168++;
	if (IS_OBJECT_VALID(&iLocal_40))
	{
		UNK_0x7246F438(&iLocal_40);
		DESTROY_OBJECT(&iLocal_40);
	}
	SET_ANIMATION_OVERRIDE_SCALE(&(Param0[145]), ((*&Param0[045] + 200)[Param0.f_2540] * (*&Param0[045] + 276)[Param0.f_2540]));
	if (Param0[145].f_168 > 11)
	{
		if (Param0[145].f_324 + 1 > (*&Param0[045] + 300)[Param0.f_2540])
		{
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&(Param0[145])), "ff_stop_looping", true);
		}
	}
	return;
}

void Function_259() //Position: 0x10EB4 / 69300
{
	var uVar0;
	
	GET_OBJECT_POSITION(&uLocal_38, &uVar0);
	AUDIO_MG_FILLET_HIT_TABLE();
	return;
}

void Function_260(int iParam0) //Position: 0x10EC6 / 69318
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	
	GET_POSITION(&iParam0, &Var0);
	GET_ACTOR_AXIS(&iParam0, &Var2, 2);
	GET_ACTOR_AXIS(&iParam0, &Var4, 0);
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(0,6f, 0,6f, 0,6f), StackVal, StackVal);
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var6, StackVal) * Vector(0,65f, 0,65f, 0,65f), StackVal, StackVal);
	Var6.f_4 = (StackVal + 2,4f);
	Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,18f, 0,18f, 0,18f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var8, StackVal) * Vector(0,2f, 0,2f, 0,2f), StackVal, StackVal);
	Var8.f_4 = (StackVal + 0,9f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uLocal_60) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_60);
	}
	SET_CAMERA_POSITION(&uLocal_60, Var6);
	SET_CAMERA_TARGET_POSITION(&uLocal_60, Var8, 0);
	SET_CAMERA_FOV(&uLocal_60, 43.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uLocal_60, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uLocal_60, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_261(vector3 vParam0) //Position: 0x10FA9 / 69545
{
	if (Function_262(&vParam0))
	{
		if (!Function_245(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_80(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_262(int iParam0) //Position: 0x1106D / 69741
{
	return Function_18(iParam0, 1);
}

void Function_263(vector3 vParam0) //Position: 0x1107B / 69755
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_80(&vParam0, 1);
	Function_42(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_264(int iParam0) //Position: 0x110A0 / 69792
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	
	GET_POSITION(&iParam0, &Var0);
	GET_ACTOR_AXIS(&iParam0, &Var2, 2);
	GET_ACTOR_AXIS(&iParam0, &Var4, 0);
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(0,41f, 0,41f, 0,41f), StackVal, StackVal);
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var6, StackVal) * Vector(0,47f, 0,47f, 0,47f), StackVal, StackVal);
	Var6.f_4 = (StackVal + 1,46f);
	Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(1,02f, 1,02f, 1,02f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var8, StackVal) * Vector(1,53f, 1,53f, 1,53f), StackVal, StackVal);
	Var8.f_4 = (StackVal + -0,37f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uLocal_60) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uLocal_60);
	}
	SET_CAMERA_POSITION(&uLocal_60, Var6);
	SET_CAMERA_TARGET_POSITION(&uLocal_60, Var8, 0);
	SET_CAMERA_FOV(&uLocal_60, 43.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(&uLocal_60, 0,1f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uLocal_60, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uLocal_60, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_265(struct<45>[] Param0) //Position: 0x11186 / 70022
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		switch (iVar0)
		{
			case 0x00000000:
				iVar5 = 0;
				break;
			
			case 0x00000001:
				iVar5 = 1;
				break;
			
			case 0x00000002:
				iVar5 = 3;
				break;
			
			case 0x00000003:
				iVar5 = 5;
				break;
			
			case 0x00000004:
				iVar5 = 7;
				break;
			
			case 0x00000005:
				iVar5 = 9;
				break;
		}
		Function_257(StackVal, &(Param0[045]), &Var1, &Var3, 1);
		switch (StackVal)
		{
			case 0x00000000:
				uLocal_42[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "AIHitHereParticles_0", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[iVar5]6] + 8)[Param0[045].f_224]), Var1);
				UNK_0x6745191B(&(uLocal_42[iVar0]), Var3);
				break;
			
			case 0x00000001:
				uLocal_42[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "AIHitHereParticles_1", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[iVar5]6] + 8)[Param0[045].f_224]), Var1);
				UNK_0x6745191B(&(uLocal_42[iVar0]), Var3);
				break;
			
			case 0x00000002:
				uLocal_42[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "AIHitHereParticles_2", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[iVar5]6] + 8)[Param0[045].f_224]), Var1);
				UNK_0x6745191B(&(uLocal_42[iVar0]), Var3);
				break;
			
			case 0x00000003:
				uLocal_42[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "AIHitHereParticles_3", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[iVar5]6] + 8)[Param0[045].f_224]), Var1);
				UNK_0x6745191B(&(uLocal_42[iVar0]), Var3);
				break;
			
			case 0x00000004:
				uLocal_42[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "AIHitHereParticles_4", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[iVar5]6] + 8)[Param0[045].f_224]), Var1);
				UNK_0x6745191B(&(uLocal_42[iVar0]), Var3);
				break;
			
			case 0x00000005:
				uLocal_42[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_35, "AIHitHereParticles_5", Function_256(&Param0, (*&Param0 + 804[(*&Param0 + 2444)[iVar5]6] + 8)[Param0[045].f_224]), Var1);
				UNK_0x6745191B(&(uLocal_42[iVar0]), Var3);
				break;
		}
		iVar0++;
	}
	return;
}

void Function_266() //Position: 0x11482 / 70786
{
	struct<25> Var0;
	
	Function_240(GET_PLAYER_ACTOR(0));
	*(&Var0 + 12) = Function_240(GET_PLAYER_ACTOR(0));
	Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
	Var0 = Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
	Var0.f_24 = 0;
	if (IS_OBJECT_VALID(&bLocal_58))
	{
		DESTROY_OBJECT(&bLocal_58);
	}
	bLocal_58 = Function_267(&uLocal_35, 0, &Var0, 1, 0, 0);
	return;
}

var Function_267(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x114C4 / 70852
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "5Finger_Opponent", 1, 1);
	}
	Function_268(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "minigame");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_268(float fParam0, int iParam1) //Position: 0x11559 / 71001
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 0);
	Function_269(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&fParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&fParam0, 0, 0);
	return;
}

void Function_269(var uParam0, struct<25> Param1) //Position: 0x11584 / 71044
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 26,00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var0 = Vector(-2,513374f, 1,189849f, 0,195869f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	Var0 = Vector(-0,034489f, 1,173827f, -0,23905f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&uParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

int Function_270(bool bParam0, bool bParam1) //Position: 0x11686 / 71302
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_121(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	return 1;
}

int Function_271(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11717 / 71447
{
	if (!Function_274(uParam0, &iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_273(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_272(uParam0, &iParam2);
}

int Function_272(var uParam0, int iParam1) //Position: 0x1175A / 71514
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11769 / 71529
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_274(var uParam0, int iParam1) //Position: 0x117A8 / 71592
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

float Function_275() //Position: 0x117B7 / 71607
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

void Function_276(int iParam0) //Position: 0x117C6 / 71622
{
	Function_263(&iParam0, 0.0f);
	return;
}

float Function_277(vector3 vParam0) //Position: 0x117D3 / 71635
{
	if (Function_262(&vParam0))
	{
		if (Function_245(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_278() //Position: 0x118A0 / 71840
{
	Function_271(5, "{@UI.CANCELMINIGAME}", "5Fillet_Quit", 1, 0, 0, 0, 0);
	if (UNK_0x973F30EE("@UI.CANCELMINIGAME", 1, 0))
	{
		if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
		{
			UI_ENTER("Fivefingerfillet_Quit_Confirmation_Popup");
		}
		PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
		iLocal_22 = iLocal_1;
		iLocal_23 = iLocal_0;
		iLocal_1 = 22;
		iLocal_0 = 1;
	}
	return;
}

void Function_279(struct<45> Param0) //Position: 0x1196F / 72047
{
	iLocal_82 = 1;
	iLocal_62 = 4294967295;
	bLocal_141 = 99;
	SET_ANIMATION_OVERRIDE_SCALE(&(Param0[iParam145]), (*&Param0[045] + 200)[Param0.f_2540]);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(Param0[iParam145])), "ff_early");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(Param0[iParam145])), "ff_late");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(Param0[iParam145])), "ff_stop_looping");
	Param0[iParam145].f_168 = 0;
	Param0[iParam145].f_324 = 0;
	return;
}

void Function_280(bool bParam0) //Position: 0x11A03 / 72195
{
	struct<25> Var0;
	
	Function_240(&bParam0);
	*(&Var0 + 12) = Function_240(&bParam0);
	Function_239(GET_OBJECT_FROM_ACTOR(&bParam0));
	Var0 = Function_239(GET_OBJECT_FROM_ACTOR(&bParam0));
	Var0.f_24 = 0;
	bLocal_58 = Function_281(&uLocal_35, 0, &Var0, 1, 0, 0);
	return;
}

var Function_281(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x11A34 / 72244
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "5Fillet_Bet", 1, 1);
	}
	Function_282(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "minigame");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_282(var uParam0, int iParam1) //Position: 0x11AC4 / 72388
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_283(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 0, 0);
	return;
}

void Function_283(Vector3 vParam0, struct<25> Param1) //Position: 0x11AEF / 72431
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&vParam0, 1);
	SET_CAMERASHOT_FOV(&vParam0, 26,00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&vParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&vParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&vParam0, 0);
	Var0 = Vector(-1,883446f, 1,198896f, -0,840721f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&vParam0, Var0);
	Var0 = Vector(0,121666f, 1,013283f, -0,073273f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&vParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&vParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&vParam0, 16.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&vParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&vParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&vParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&vParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&vParam0, 16.0f);
	return;
}

int Function_284() //Position: 0x11BE9 / 72681
{
	return Function_70(0);
}

var Function_285(int iParam0, struct<45>[] Param1) //Position: 0x11BF3 / 72691
{
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam0 < Param1[045].f_328)
	{
		iParam0 = Param1[045].f_328;
	}
	if (Param1[045].f_332 == 4294967295)
	{
		if (iParam0 > Function_284())
		{
			iParam0 = Function_284();
		}
	}
	else if (iParam0 > Param1[045].f_332)
	{
		iParam0 = Param1[045].f_332;
	}
	if (iParam0 > Function_284())
	{
		iParam0 = Function_284();
	}
	return iParam0;
}

void Function_286(int iParam0, float fParam1, var uParam2) //Position: 0x11C60 / 72800
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (&iParam0 == Function_192())
		{
			Var0 = Vector(0,3968f, 1,0426f, -0,007f);
			Var2 = Vector(-166.0f, -20.0f, 8.0f);
		}
		else
		{
			Var0 = Vector(0,4602f, 1,0426f, 0,1558f);
			Var2 = Vector(-166.0f, -20.0f, 8.0f);
		}
		GET_OBJECT_RELATIVE_ORIENTATION(&iParam0, Var2, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&iParam0, Var0, &fParam1);
	}
	return;
}

void Function_287() //Position: 0x11CE3 / 72931
{
	struct<25> Var0;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_292())
			{
				Function_240(GET_PLAYER_ACTOR(0));
				*(&Var0 + 12) = Function_240(GET_PLAYER_ACTOR(0));
				Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var0 = Function_239(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var0.f_24 = 0;
				bLocal_58 = Function_288(&uLocal_35, 0, &Var0, 1, 0, 0);
				SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&bLocal_58), "minigame");
				Function_276(&iLocal_63);
				if (!IS_OBJECT_VALID(&Local_148[145] + 152))
				{
					*(&Local_148[145] + 152) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_35, Function_57(), "$/fragments/melee_knife05x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					Function_286(&(Local_148[145]), &Var4, &Var6);
					SET_OBJECT_POSITION(&Local_148[145] + 152, Var4);
					SET_OBJECT_ORIENTATION(&Local_148[145] + 152, Var6);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(&Local_148[145] + 152, 0);
					SET_PROP_AI_OBSTACLE_ENABLED(&Local_148[145] + 152, 0);
					uLocal_38 = CREATE_OBJECT_LOCATOR(&Local_148[145] + 152, Function_57());
					OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uLocal_38, &Local_148[145] + 152, "tip", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				}
				if (!IS_OBJECT_VALID(&Local_148[045] + 152))
				{
					*(&Local_148[045] + 152) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_35, Function_57(), "$/fragments/melee_knife05x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					Function_286(&(Local_148[045]), &Var4, &Var6);
					SET_OBJECT_POSITION(&Local_148[045] + 152, Var4);
					SET_OBJECT_ORIENTATION(&Local_148[045] + 152, Var6);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(&Local_148[045] + 152, 0);
					SET_PROP_AI_OBSTACLE_ENABLED(&Local_148[045] + 152, 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[045]), "fivefingerfillet/intro");
				SET_ACTION_NODE_FOR_ACTOR(&(Local_148[145]), "fivefingerfillet/intro");
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_276(&iLocal_63);
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(&bLocal_58) != 1 || UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0))
				{
					END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&bLocal_58);
					DESTROY_OBJECT(&bLocal_58);
					Function_280(&(Local_148[145]));
					Function_190(0);
					iLocal_0 = 1;
					iLocal_1 = 35;
				}
				else
				{
					Function_278();
					Function_271(0, "{@MINIGAME.SKIP_HELP}", "5Fillet_Skip", 1, 0, 0, 0, 0);
				}
			}
			break;
	}
	return;
}

var Function_288(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x11F7A / 73594
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "5Finger_Intro", 2, 1);
	}
	Function_289(&uVar0, &uParam2);
	if (fParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "minigame");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_289(float fParam0, int iParam1) //Position: 0x1200C / 73740
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 0);
	Function_291(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 1);
	Function_290(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&fParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&fParam0, 0, 1, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&fParam0, 1, 1);
	return;
}

void Function_290(var uParam0, struct<25> Param1) //Position: 0x12057 / 73815
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 26,00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var0 = Vector(-1,883446f, 1,198896f, -0,840721f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	Var0 = Vector(0,121666f, 1,013283f, -0,073273f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&uParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&uParam0, 16.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&uParam0, 16.0f);
	return;
}

void Function_291(Vector3 vParam0, struct<25> Param1) //Position: 0x12151 / 74065
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&vParam0, 1);
	SET_CAMERASHOT_FOV(&vParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&vParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&vParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&vParam0, 0);
	Var0 = Vector(-4,821865f, 1,261886f, -0,822046f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&vParam0, Var0);
	Var0 = Vector(0,088856f, 0,940627f, -0,596203f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_TARGET_POSITION(&vParam0, Var0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&vParam0, 7.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&vParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&vParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&vParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&vParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&vParam0, 2);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&vParam0, 16.0f);
	return;
}

bool Function_292() //Position: 0x1224F / 74319
{
	bool bVar0;
	int iVar1;
	
	switch (iLocal_9)
	{
		case 0x000003E8:
			iLocal_9 = 1005;
			if (IS_VOLUME_VALID(&uLocal_29))
			{
				if (IS_OBJECTSET_VALID(&uLocal_79))
				{
					Function_297(&uLocal_79);
				}
				else
				{
					uLocal_79 = CREATE_OBJECTSET_IN_LAYOUT(Function_57(), &uLocal_35, 15, 1);
				}
				iLocal_81 = LOCATE_ACTORS_IN_VOLUME(&uLocal_29, &uLocal_79, 0, 1);
				bVar0 = false;
				while (bVar0 <= iLocal_81)
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_79));
					if (!Function_296(&iVar1))
					{
						if (((IS_ACTOR_HOGTIED(&iVar1) || IS_ACTOR_CRIPPLED(&iVar1, 5)) || IS_ACTOR_VEHICLE(&iVar1)) || IS_ACTOR_HORSE(&iVar1))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_9 = 1004;
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(&uLocal_29))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(&uLocal_29);
					if (IS_OBJECTSET_VALID(&uLocal_79))
					{
						Function_297(&uLocal_79);
					}
					else
					{
						uLocal_79 = CREATE_OBJECTSET_IN_LAYOUT(Function_57(), &uLocal_35, 15, 1);
					}
					iLocal_81 = LOCATE_ACTORS_IN_VOLUME(&uLocal_29, &uLocal_79, 0, 1);
					bVar0 = false;
					while (bVar0 <= iLocal_81)
					{
						iVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_79));
						if (!Function_296(&iVar1))
						{
							if (((IS_ACTOR_HOGTIED(&iVar1) || IS_ACTOR_CRIPPLED(&iVar1, 5)) || IS_ACTOR_VEHICLE(&iVar1)) || IS_ACTOR_HORSE(&iVar1))
							{
								DESTROY_ACTOR(&iVar1);
							}
						}
						bVar0++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_9 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (IS_ACTOR_VALID(&Local_83 + 4[0]))
			{
				Function_233(&Local_83 + 4[0], &Local_148, 0, GET_ACTOR_ENUM_STRING(&Local_83 + 4[0]), (4 - Local_83.f_56), 0);
			}
			if (IS_ACTOR_VALID(&Local_83 + 48))
			{
				Function_233(&Local_83 + 48, &Local_148, 1, GET_ACTOR_ENUM_STRING(&Local_83 + 48), 4294967295, 0);
			}
			SET_DRAW_ACTOR(&Local_83 + 4[0], 0);
			SAY_SINGLE_LINE_CONTEXT(&(Local_148[145]), 464, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			bVar0 = false;
			while (bVar0 <= 2)
			{
				Function_295(GET_GRINGO_FROM_OBJECT(&Local_148 + 728[bVar02] + 8));
				bVar0++;
			}
			Function_294();
			Function_293(Function_192());
			iLocal_9 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_192(), "fivefingerfillet/Idle"))
			{
				SET_DRAW_ACTOR(&Local_83 + 4[0], 1);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_293(var uParam0) //Position: 0x12486 / 74886
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&uParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_294() //Position: 0x124AC / 74924
{
	int iVar0;
	
	Function_221(4, 0);
	iVar0 = 0;
	while (iVar0 <= Local_83.f_56)
	{
		if (IS_ACTOR_VALID(&Local_83 + 4[iVar0]))
		{
			if (ACTOR_HAS_VARIABLE_MESH(&Local_83 + 4[iVar0], 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Local_83 + 4[iVar0], 1, false);
			}
			if (ACTOR_HAS_VARIABLE_MESH(&Local_83 + 4[iVar0], 2))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Local_83 + 4[iVar0], 2, false);
			}
			if (ACTOR_HAS_VARIABLE_MESH(&Local_83 + 4[iVar0], 3))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Local_83 + 4[iVar0], 3, true);
			}
			if (ACTOR_HAS_VARIABLE_MESH(&Local_83 + 4[iVar0], 4))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Local_83 + 4[iVar0], 4, true);
			}
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_83 + 4[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_295(var uParam0) //Position: 0x1255F / 75103
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&uVar2, &uParam0);
			if (IS_PHYSINST_VALID(&uVar3))
			{
				HIDE_PHYSINST(&uVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, &uVar0);
			uVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar4, &uParam0);
			if (IS_PHYSINST_VALID(&uVar5))
			{
				HIDE_PHYSINST(&uVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, iVar1 + 1);
		}
	}
	return;
}

bool Function_296(int iParam0) //Position: 0x1265F / 75359
{
	int iVar0;
	
	if (&iParam0 == GET_PLAYER_ACTOR(0))
	{
		return 1;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_83 + 4[iVar0]))
		{
			if (&iParam0 == &Local_83 + 4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_297(var uParam0) //Position: 0x126A7 / 75431
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
	}
	return;
}

void Function_298(struct<2541> Param0) //Position: 0x126E7 / 75495
{
	Param0.f_768 = 0;
	Function_299(&Param0 + 728);
	Param0.f_776 = 0,5f;
	Param0.f_796 = 1;
	Param0.f_2540 = 0;
	(*&Param0 + 804)[06] = 0,95f;
	(&Param0 + 804[06])->f_4 = 0;
	(*&Param0 + 804[06] + 8)[0] = 0;
	(*&Param0 + 804[06] + 8)[1] = 0;
	(*&Param0 + 804[06] + 8)[2] = 0;
	(*&Param0 + 804[06] + 8)[3] = 0;
	(*&Param0 + 804)[26] = 0,09434f;
	(&Param0 + 804[26])->f_4 = 1;
	(*&Param0 + 804[26] + 8)[0] = 0;
	(*&Param0 + 804[26] + 8)[1] = 3;
	(*&Param0 + 804[26] + 8)[2] = 3;
	(*&Param0 + 804[26] + 8)[3] = 3;
	(*&Param0 + 804)[46] = 0,194969f;
	(&Param0 + 804[46])->f_4 = 0;
	(*&Param0 + 804[46] + 8)[0] = 0;
	(*&Param0 + 804[46] + 8)[1] = 0;
	(*&Param0 + 804[46] + 8)[2] = 0;
	(*&Param0 + 804[46] + 8)[3] = 0;
	(*&Param0 + 804)[86] = 0,295597f;
	(&Param0 + 804[86])->f_4 = 2;
	(*&Param0 + 804[86] + 8)[0] = 0;
	(*&Param0 + 804[86] + 8)[1] = 3;
	(*&Param0 + 804[86] + 8)[2] = 2;
	(*&Param0 + 804[86] + 8)[3] = 2;
	(*&Param0 + 804)[126] = 0,396226f;
	(&Param0 + 804[126])->f_4 = 0;
	(*&Param0 + 804[126] + 8)[0] = 0;
	(*&Param0 + 804[126] + 8)[1] = 0;
	(*&Param0 + 804[126] + 8)[2] = 0;
	(*&Param0 + 804[126] + 8)[3] = 0;
	(*&Param0 + 804)[176] = 0,496855f;
	(&Param0 + 804[176])->f_4 = 3;
	(*&Param0 + 804[176] + 8)[0] = 0;
	(*&Param0 + 804[176] + 8)[1] = 3;
	(*&Param0 + 804[176] + 8)[2] = 3;
	(*&Param0 + 804[176] + 8)[3] = 1;
	(*&Param0 + 804)[226] = 0,597484f;
	(&Param0 + 804[226])->f_4 = 0;
	(*&Param0 + 804[226] + 8)[0] = 0;
	(*&Param0 + 804[226] + 8)[1] = 0;
	(*&Param0 + 804[226] + 8)[2] = 0;
	(*&Param0 + 804[226] + 8)[3] = 0;
	(*&Param0 + 804)[256] = 0,698113f;
	(&Param0 + 804[256])->f_4 = 4;
	(*&Param0 + 804[256] + 8)[0] = 0;
	(*&Param0 + 804[256] + 8)[1] = 3;
	(*&Param0 + 804[256] + 8)[2] = 2;
	(*&Param0 + 804[256] + 8)[3] = 3;
	(*&Param0 + 804)[296] = 0,798742f;
	(&Param0 + 804[296])->f_4 = 0;
	(*&Param0 + 804[296] + 8)[0] = 0;
	(*&Param0 + 804[296] + 8)[1] = 0;
	(*&Param0 + 804[296] + 8)[2] = 0;
	(*&Param0 + 804[296] + 8)[3] = 0;
	(*&Param0 + 804)[316] = 0,899371f;
	(&Param0 + 804[316])->f_4 = 5;
	(*&Param0 + 804[316] + 8)[0] = 0;
	(*&Param0 + 804[316] + 8)[1] = 3;
	(*&Param0 + 804[316] + 8)[2] = 3;
	(*&Param0 + 804[316] + 8)[3] = 2;
	(*&Param0 + 804)[336] = 0,995f;
	(&Param0 + 804[336])->f_4 = 0;
	(*&Param0 + 804[336] + 8)[0] = 0;
	(*&Param0 + 804[336] + 8)[1] = 0;
	(*&Param0 + 804[336] + 8)[2] = 0;
	(*&Param0 + 804[336] + 8)[3] = 0;
	(*&Param0 + 2444)[0] = 0;
	(*&Param0 + 2444)[1] = 2;
	(*&Param0 + 2444)[2] = 4;
	(*&Param0 + 2444)[3] = 8;
	(*&Param0 + 2444)[4] = 12;
	(*&Param0 + 2444)[5] = 17;
	(*&Param0 + 2444)[6] = 22;
	(*&Param0 + 2444)[7] = 25;
	(*&Param0 + 2444)[8] = 29;
	(*&Param0 + 2444)[9] = 31;
	(*&Param0 + 2444)[10] = 33;
	return;
}

void Function_299(struct<2>[] Param0) //Position: 0x12B6E / 76654
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar02] = 0;
		switch (iVar0)
		{
			case 0x00000000:
				uVar1 = *(&Local_83 + 188[02]);
				*(&Param0[iVar02] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar1, 1.0f, 0));
				while (!IS_OBJECT_VALID(&Param0[iVar02] + 8) && !IS_EXITFLAG_SET())
				{
					*(&Param0[iVar02] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar1, 1.0f, 0));
					WAIT(false);
				}
				break;
			
			case 0x00000001:
				uVar1 = *(&Local_83 + 188[12]);
				*(&Param0[iVar02] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_FiveFingerFillet", &uVar1, 1.0f, 0));
				while (!IS_OBJECT_VALID(&Param0[iVar02] + 8) && !IS_EXITFLAG_SET())
				{
					*(&Param0[iVar02] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_FiveFingerFillet", &uVar1, 1.0f, 0));
					WAIT(false);
				}
				break;
			
			default:
				LOG_ERROR("Looking for more chairs then we have flags");
				break;
		}
		Param0[iVar02].f_4 = 4294967295;
		iVar0++;
	}
	return;
}

void Function_300() //Position: 0x12D8D / 77197
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_301() //Position: 0x12D99 / 77209
{
	bool bVar0;
	var uVar1;
	
	AUDIO_MG_FILLET_START(*(&Local_83 + 188[02]));
	Function_188();
	UI_EXIT("Hands");
	UI_EXIT("Scores");
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(9);
	Function_318(1);
	Function_172(1);
	Function_172(2);
	Function_316();
	uLocal_35 = CREATE_LAYOUT(Function_57());
	Function_315();
	Function_306();
	Function_305(&iLocal_63);
	Function_305(&iLocal_67);
	Function_305(&iLocal_144);
	Function_305(&iLocal_25);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	iLocal_0 = 99;
	uLocal_29 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_35, "Poker_StayOutvol", 2,802597E-45f, *(&Local_83 + 188[02]), Vector(0.0f, 0.0f, 0.0f), Vector(3,75f, 4.0f, 3,75f));
	bVar0 = false;
	while (StackVal <= bVar0)
	{
		if (IS_ACTOR_VALID(&Local_83 + 4[bVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Local_83 + 4[bVar0], 1);
			REFERENCE_ACTOR(&Local_83 + 4[bVar0]);
		}
		bVar0++;
	}
	uLocal_79 = CREATE_OBJECTSET_IN_LAYOUT(Function_57(), &uLocal_35, 15, 1);
	iLocal_81 = LOCATE_ACTORS_IN_VOLUME(&uLocal_29, &uLocal_79, 0, 1);
	PRINTSTRING("There are ");
	PRINTINT(iLocal_81);
	PRINTSTRING(" actors in the way");
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= bLocal_81)
	{
		uVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_79));
		if (!Function_296(&uVar1))
		{
			AI_SET_NAV_ACTOR_WIDTH(&uVar1, 0,5f);
			TASK_CLEAR(&uVar1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &uLocal_29, 4, 1);
		}
		bVar0++;
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_29);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_29);
	uLocal_60 = CREATE_CAMERA_IN_LAYOUT(&uLocal_35, "FiveFingerFilletCamera", 2);
	ALLOW_TUMBLEWEEDS(0);
	CLEAR_TUMBLEWEEDS();
	SET_PLAYER_BLOOD_FADE_RATE(1000.0f);
	Function_303(&uLocal_18);
	if (Function_225(4, 8))
	{
		Function_302(&uLocal_18);
	}
	return;
}

void Function_302(int[] iParam0) //Position: 0x12F60 / 77664
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_303(int iParam0) //Position: 0x12F80 / 77696
{
	Function_304(&iParam0);
	return;
}

void Function_304(int[] iParam0) //Position: 0x12F8C / 77708
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_305(var uParam0) //Position: 0x12FAC / 77740
{
	if (!Function_262(&uParam0))
	{
		Function_263(&uParam0, 0.0f);
	}
	return;
}

void Function_306() //Position: 0x12FC3 / 77763
{
	Function_313(&uLocal_784, "$/fragments/melee_knife05x", 0, 1);
	Function_313(&uLocal_784, "$/fragments/melee_knife02x", 0, 1);
	Function_313(&uLocal_784, "FiveFingerFillet", 1, 0);
	Function_313(&uLocal_784, "fake_FiveFingerFillet", 1, 0);
	Function_313(&uLocal_784, "nminigames", 10, 0);
	while (!Function_307(&uLocal_784) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	UI_PUSH("Minigame");
	return;
}

bool Function_307(struct<2>[] Param0) //Position: 0x1308C / 77964
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_312();
	iVar1 = 0;
	if (!Function_183(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_311(&(Param0[iVar02]), 8);
		}
		else if (Function_310())
		{
			iVar1 = 1;
			Function_311(&(Param0[iVar02]), 8);
		}
		Function_311(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_183(&(Param0[iVar02]), 4))
		{
			if (!Function_183(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_183(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_183(&(Param0[02]), 8) || iVar1));
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
				Function_311(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_183(&(Param0[iVar02]), 4))
		{
			if (!Function_183(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_311(&(Param0[iVar02]), 2);
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
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_311(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_311(&(Param0[iVar02]), 2);
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
	Function_308();
	return 1;
}

void Function_308() //Position: 0x1344E / 78926
{
	if (!Function_309(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_309(int iParam0) //Position: 0x1348E / 78990
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_310() //Position: 0x134AA / 79018
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

void Function_311(struct<13> Param0) //Position: 0x134D8 / 79064
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_312() //Position: 0x134EB / 79083
{
	if (!Function_309(128))
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

var Function_313(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1352D / 79149
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_314(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_311(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_314(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1356B / 79211
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_183(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_311(&(Param0[iVar02]), 4);
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

void Function_315() //Position: 0x1363A / 79418
{
	return;
}

void Function_316() //Position: 0x13640 / 79424
{
	Global_42259 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_3();
	Function_317();
	if (!Global_6627)
	{
		Global_6627 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_317() //Position: 0x13670 / 79472
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_318(int iParam0) //Position: 0x13686 / 79494
{
	Function_319(&Global_43580, iParam0);
	return;
}

void Function_319(var uParam0, var uParam1) //Position: 0x13694 / 79508
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

