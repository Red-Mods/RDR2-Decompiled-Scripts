//Decompiled with MagicRDR v1.0
//Function Count : 393
//Statics Count : 1135
//Natives Count : 412
//Parameters Count : 48

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	bool bLocal_4 = false;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	float fLocal_8 = 0.0f;
	int iLocal_9 = 0;
	float fLocal_10 = 0.0f;
	float fLocal_11 = 0.0f;
	float fLocal_12 = 0.0f;
	float fLocal_13 = 0.0f;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0.0f;
	float fLocal_26 = 0.0f;
	int iLocal_27 = 0;
	char* cLocal_28[64] = "";
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = false;
	var uLocal_53 = 0;
	bool bLocal_54 = false;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	float fLocal_59 = 0.0f;
	float fLocal_60 = 0.0f;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	float fLocal_66 = 0.0f;
	float fLocal_67 = 0.0f;
	float fLocal_68 = 0.0f;
	float fLocal_69 = 0.0f;
	int iLocal_70 = 1;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	bool bLocal_74 = false;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<24> Local_79 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0 } ;
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
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = false;
	int iLocal_130 = 0;
	struct<45> Local_131 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_176 = 0;
	var uLocal_177 = 5;
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
	var uLocal_199 = 5;
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
	var uLocal_241 = 5;
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
	var uLocal_267 = 5;
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
	var uLocal_289 = 5;
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
	var uLocal_331 = 5;
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
	var uLocal_357 = 5;
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
	var uLocal_379 = 5;
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
	var uLocal_421 = 5;
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
	var uLocal_447 = 5;
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
	var uLocal_469 = 5;
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
	var uLocal_511 = 5;
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
	var uLocal_537 = 5;
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
	var uLocal_559 = 5;
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
	var uLocal_601 = 5;
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
	var uLocal_627 = 5;
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
	var uLocal_649 = 5;
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
	var uLocal_673 = 6;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
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
	var uLocal_689 = 0;
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
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 9;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
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
	var uLocal_725 = 0;
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
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	bool bLocal_745 = false;
	float fLocal_746 = 0.0f;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	float fLocal_751 = 0.0f;
	float fLocal_752 = 0.0f;
	struct<9> Local_753[16];
	var uLocal_898 = 0;
	var uLocal_899 = 5;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 5;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 5;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 5;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 5;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 5;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 5;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 5;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	struct<9> Local_1077 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1086 = 0;
	struct<24> ScriptParam_0 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0 } ;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
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
	var uScriptParam_47 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	char* cVar1[64];
	char* cVar17[64];
	bool bVar33;
	
	iLocal_0 = 0;
	iLocal_5 = 31;
	iLocal_6 = 33;
	iLocal_7 = 1;
	fLocal_8 = 2.0f;
	iLocal_16 = 1000;
	fLocal_25 = 5.0f;
	fLocal_26 = 1.0f;
	bLocal_30 = false;
	iLocal_31 = 0;
	bLocal_52 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	fLocal_59 = 0,2f;
	fLocal_60 = 0,2f;
	iLocal_61 = 0;
	iLocal_62 = 0;
	bLocal_74 = false;
	iLocal_130 = 4;
	fLocal_751 = 0.0f;
	fLocal_752 = 0.0f;
	Local_79 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_377();
	bVar0 = false;
	while (bVar0 <= 6)
	{
		strcpy(&cVar1, "Seat ", 64);
		stradd(&cVar1, I2STR(bVar0), 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": isOccupied", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iPlayerIndex", 64);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 6)
	{
		strcpy(&cVar1, "Player ", 64);
		stradd(&cVar1, I2STR(bVar0), 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, "n: iSeatId", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iCurrentBet", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iChips", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iRaiseAmount", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iPotSnapShot", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iTotalInPot", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iBidAmount", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ": iBidType", 64);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		strcpy(&cVar1, "Dice Pile (", 64);
		stradd(&cVar1, I2STR(bVar0), 64);
		stradd(&cVar1, ") #", 64);
		bVar33 = false;
		while (bVar33 <= 5)
		{
			cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
			stradd(&cVar17, I2STR(bVar33), 64);
			bVar33++;
		}
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ".iHandSize", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ".generation", 64);
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1 };
		stradd(&cVar17, ".Localgeneration", 64);
		bVar0++;
	}
	while (Function_217())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_79 };
		Function_192();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x2A5 / 677
{
	int iVar0;
	
	Function_190();
	if (iLocal_27)
	{
		Function_189(4, 1);
	}
	iVar0 = 0;
	while (iVar0 <= Local_131.f_2168)
	{
		if (IS_OBJECT_VALID(&Local_131 + 2168[iVar02] + 8))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Local_131 + 2168[iVar02] + 8), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_79 + 4[iVar0]))
		{
			DEREFERENCE_ACTOR(&Local_79 + 4[iVar0]);
			SET_DRAW_ACTOR(&Local_79 + 4[iVar0], 1);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_79 + 4[iVar0]);
		}
		iVar0++;
	}
	UI_EXIT("Dice");
	UI_EXIT("Scores");
	SET_DRAW_ACTOR(GET_PLAYER_ACTOR(0), 1);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(Function_188());
	Function_183();
	Function_182();
	RELEASE_LAYOUT_REF(&cLocal_28);
	Function_180(1);
	Function_179(1);
	Function_179(4);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(Function_188(), 1);
	if (iLocal_3)
	{
		Function_38(Local_79, 1, 1, 1, 0);
	}
	else if (bLocal_4)
	{
		Function_34(Local_79);
		if (!Function_33(Global_119934, 512))
		{
			Function_27(Function_188(), 512, 1, 0);
		}
	}
	else
	{
		Function_7(Local_79);
	}
	SET_ACTOR_INVULNERABILITY(Function_188(), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_3();
	Function_2(Function_188());
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_14);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_14);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(var uParam0) //Position: 0x3F3 / 1011
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

void Function_3() //Position: 0x419 / 1049
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_188(), true);
	Function_6(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_188()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_5();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(1);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_4();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_4() //Position: 0x49C / 1180
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_5() //Position: 0x4B1 / 1201
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_6(int iParam0) //Position: 0x4C7 / 1223
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x4DA / 1242
{
	Function_15(iParam0);
	Function_14();
	Function_11(2);
	Function_9((15 - Function_10(105)));
	Function_8(12);
	return;
}

void Function_8(int iParam0) //Position: 0x4FB / 1275
{
	(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_9(int iParam0) //Position: 0x518 / 1304
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_10(105)), 0);
	return;
}

int Function_10(int iParam0) //Position: 0x53B / 1339
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_11(int iParam0) //Position: 0x552 / 1362
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_13(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_13(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_13(&Global_21369 + 48);
	PRINTNL();
	Function_12(&iParam0);
	return;
}

void Function_12(int iParam0) //Position: 0x5F4 / 1524
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_10(90)), 0);
	return;
}

void Function_13(var uParam0) //Position: 0x617 / 1559
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

void Function_14() //Position: 0x661 / 1633
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x67A / 1658
{
	int iVar0;
	
	if (!Function_25(iParam0))
	{
		Function_23();
		return;
	}
	iVar0 = Function_22(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_16("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x6CD / 1741
{
	struct<4> Var0;
	
	if (!Function_25(iParam1))
	{
		return;
	}
	switch (Function_22(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_17(Function_20(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_22(iParam1), Function_20(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_22(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_22(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_22(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_22(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_22(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_17(int iParam0) //Position: 0x7F7 / 2039
{
	char* cVar0[16];
	
	if (!Function_18())
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

bool Function_18() //Position: 0x831 / 2097
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(bool bParam0, int iParam1) //Position: 0x84C / 2124
{
	return (bParam0 && iParam1) == 0;
}

int Function_20(int iParam0) //Position: 0x859 / 2137
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_21(int iParam0) //Position: 0x879 / 2169
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_22(int iParam0) //Position: 0x890 / 2192
{
	if (!Function_21(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_23() //Position: 0x8AB / 2219
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
			Function_24(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_24(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAF2 / 2802
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_25(int iParam0) //Position: 0xB1E / 2846
{
	if (!Function_21(iParam0))
	{
		return 0;
	}
	if (!Function_26(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_26(int iParam0) //Position: 0xB42 / 2882
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_27(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB57 / 2903
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_29(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_28(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_28(char* cParam0) //Position: 0xBCC / 3020
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

bool Function_29(int iParam0, var uParam1, int iParam2) //Position: 0xC06 / 3078
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
		if (Function_31(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_30(uVar0))
		{
			case 0x00000002:
				if (!Function_33(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_30(char* cParam0) //Position: 0xC82 / 3202
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

int Function_31(int iParam0) //Position: 0xD23 / 3363
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_32(&iVar1, 2147483648);
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

void Function_32(int iParam0, int iParam1) //Position: 0xD60 / 3424
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0xD76 / 3446
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_34(int iParam0) //Position: 0xD89 / 3465
{
	Function_35(iParam0);
	Function_11(2);
	Function_8(12);
	Function_9((15 - Function_10(105)));
	return;
}

void Function_35(int iParam0) //Position: 0xDA7 / 3495
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_25(iParam0))
	{
		return;
	}
	iVar0 = Function_22(iParam0);
	if (StackVal == 2)
	{
		Function_16("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_36(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_36(int iParam0) //Position: 0xE4D / 3661
{
	char* cVar0[16];
	
	if (!Function_18())
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

struct<24> Function_37(char* cParam0) //Position: 0xE8C / 3724
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

void Function_38(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x10E2 / 4322
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_8(12);
	Function_11(2);
	Function_9((15 - Function_10(105)));
	if (Function_22(iParam0) == 1)
	{
		iVar2 = Function_20(iParam0);
		Function_174(&(Global_6667[iVar228]));
		Function_173(4194304);
		if (&bParam3)
		{
			Function_125(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_119(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_125(iVar2, &uVar0, 0);
		}
		bVar1 = Function_118();
		if (&bParam1)
		{
			Function_102(iVar2, iParam0, bVar1);
			Function_101();
		}
	}
	Function_44(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_22(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_43(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_22(iParam0) == 1)
		{
			iVar2 = Function_20(iParam0);
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
	Function_39();
}

void Function_39() //Position: 0x11D6 / 4566
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_40(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_40(int iParam0, bool bParam1) //Position: 0x1208 / 4616
{
	int iVar0;
	
	iVar0 = Function_41(iParam0);
	if (!Function_21(iVar0))
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

int Function_41(int iParam0) //Position: 0x1246 / 4678
{
	if (!Function_42(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_42(int iParam0) //Position: 0x1260 / 4704
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_43(int iParam0, bool bParam1) //Position: 0x1276 / 4726
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
							Function_27(&Global_54076, 0x1000000, 3, 0);
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
							Function_27(&Global_54076, 0x1000000, 3, 0);
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
							Function_27(&Global_54076, 0x1000000, 3, 0);
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
							Function_27(&Global_54076, 0x1000000, 3, 0);
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
							Function_27(&Global_54076, 0x1000000, 3, 0);
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
							Function_27(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_43(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_43(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_43(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_43(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_43(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_43(57, 0);
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

void Function_44(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1573 / 5491
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_25(iParam0))
	{
		Function_23();
		return;
	}
	bVar0 = Function_22(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_100())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_20(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_36(Global_10966) };
		}
		if (Function_100())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_96();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_100())
	{
		Function_95();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_16("DEED_COMPLETE", iParam0);
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
			Function_88(iParam0);
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
						switch (Function_20(iParam0))
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
			Function_47(1);
			Function_46(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_45(iParam0, &Var14);
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

void Function_45(int iParam0, struct<41> Param1) //Position: 0x17D1 / 6097
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_46(bool bParam0, int iParam1) //Position: 0x180F / 6159
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

void Function_47(bool bParam0) //Position: 0x184E / 6222
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_77();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_32(&Global_99144, 1);
		Function_32(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_48() //Position: 0x18A3 / 6307
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_55(0);
	Function_55(0);
	Function_53();
	Function_52();
	Function_51();
	Function_50();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_49();
	return;
}

void Function_49() //Position: 0x18EE / 6382
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

void Function_50() //Position: 0x19F4 / 6644
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

void Function_51() //Position: 0x1A27 / 6695
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

void Function_52() //Position: 0x1BBA / 7098
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

void Function_53() //Position: 0x1D73 / 7539
{
	Function_54(&Global_42918, 1, 0);
	return;
}

void Function_54(struct<2317> Param0) //Position: 0x1D81 / 7553
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_188();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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

struct<8> Function_55(int iParam0) //Position: 0x1F9E / 8094
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
					iVar2 = ((Function_71((50 + iVar4)) + Function_71((183 + iVar4))) + Function_71((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x2045 / 8261
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
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (&bParam2)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x22E1 / 8929
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_68(390))), 32);
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
					bVar19 = (Function_67(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_67(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_65(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_62(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_58(), &Var9);
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

var Function_58() //Position: 0x291F / 10527
{
	int iVar0;
	
	return &iVar0;
}

var Function_59(int iParam0) //Position: 0x2928 / 10536
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2939 / 10553
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_61(char* cParam0) //Position: 0x2A30 / 10800
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A4B / 10827
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_64(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

bool Function_63(int iParam0, int iParam1) //Position: 0x2AB2 / 10930
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_64(int iParam0, bool bParam1) //Position: 0x2AC4 / 10948
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AD6 / 10966
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
	if (((Function_66(iParam0) != 19 || Function_66(iParam0) != 17) || Function_66(iParam0) != 10) || Function_66(iParam0) != 9)
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

int Function_66(int iParam0) //Position: 0x2C0A / 11274
{
	return Global_55480[iParam016].f_96;
}

float Function_67(int iParam0) //Position: 0x2C19 / 11289
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_68(int iParam0) //Position: 0x2C52 / 11346
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_69(int iParam0) //Position: 0x2C8F / 11407
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E29 / 11817
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

int Function_71(bool bParam0) //Position: 0x306D / 12397
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_72() //Position: 0x30AE / 12462
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
		iVar2 = ((Function_71((50 + iVar3) + 15) + Function_71((183 + iVar3) + 15)) + Function_71((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x3137 / 12599
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
			iVar2 = ((Function_71((50 + iVar3) + 8) + Function_71((183 + iVar3) + 8)) + Function_71((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x31CE / 12750
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
		iVar2 = ((Function_71((50 + iVar3)) + Function_71((183 + iVar3))) + Function_71((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_75() //Position: 0x324D / 12877
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x328A / 12938
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
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77() //Position: 0x3496 / 13462
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_18())
	{
		Function_85(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_85(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_79(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_79(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_78(StackVal, Var0))
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

bool Function_78(char* cParam0) //Position: 0x354D / 13645
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_79(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3565 / 13669
{
	int iVar0;
	
	iVar0 = Function_83(&uParam2, &fParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_81(&Global_99144, 1);
			Function_32(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_81(&Global_99144, 2);
			Function_32(&Global_99144, 1);
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
		Function_81(&Global_99144, 2);
		Function_32(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_80();
	return StackVal, Function_80();
}

struct<8> Function_80() //Position: 0x365D / 13917
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_81(int iParam0, int iParam1) //Position: 0x3667 / 13927
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_82(int iParam0) //Position: 0x3678 / 13944
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x368E / 13966
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
				fVar2 = Function_84(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(iVar0) && !&bParam1)
	{
		iVar0 = Function_83(&bParam0, 1);
	}
	return iVar0;
}

float Function_84(struct<2> Param0, struct<2> Param2) //Position: 0x375A / 14170
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_85(float fParam0, int iParam1) //Position: 0x3777 / 14199
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_87(&Global_54076, &Var3);
	if (!Function_86(Global_46760[0]))
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
	if (!Function_86(Global_46760[2]))
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
	if (!Function_86(Global_46760[1]))
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
	if (!Function_86(Global_46796[1]))
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
	if (!Function_86(Global_46796[3]))
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
	if (!Function_86(Global_46796[2]))
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
	if (!Function_86(Global_46796[4]))
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
	if (!Function_86(Global_46816[0]))
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
	if (!Function_86(Global_46816[1]))
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
	if (!Function_86(Global_46816[2]))
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
	if (!Function_86(Global_46838[0]))
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
	if (!Function_86(Global_46850[0]))
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
	if (!Function_86(Global_46850[1]))
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
	if (!Function_86(Global_46850[2]))
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
	if (!Function_86(Global_46866[0]))
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
	if (!Function_86(Global_46866[1]))
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
	if (!Function_86(Global_46866[2]))
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
	if (!Function_86(Global_46894[2]))
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
	if (!Function_86(Global_46894[3]))
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
	if (!Function_86(Global_46894[0]))
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
	if (!Function_86(Global_46914[0]))
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
	if (!Function_86(Global_46926[2]))
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
	if (!Function_86(Global_46926[1]))
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
	if (!Function_86(Global_46926[0]))
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
	if (!Function_86(Global_46838[1]))
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
	if (!Function_86(Global_46894[1]))
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
	Function_81(&Global_99144, 2);
	Function_32(&Global_99144, 1);
	iParam1 = 0;
	if (Function_78(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_86(int iParam0) //Position: 0x3FA3 / 16291
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_19(uVar0, 0x1000000) || Function_19(uVar0, 0x2000000)) || Function_19(uVar0, 0x4000000)) || !Function_19(uVar0, 0x10000000));
}

void Function_87(var uParam0, int iParam1) //Position: 0x3FDE / 16350
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_88(int iParam0) //Position: 0x3FED / 16365
{
	int iVar0;
	int iVar1;
	
	if (!Function_21(iParam0))
	{
		return;
	}
	switch (Function_22(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_20(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_93(12, 1, 0, 0);
				Function_92(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_93(13, 1, 0, 0);
				Function_92(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_93(14, 1, 0, 0);
				Function_92(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_93(15, 1, 0, 0);
				Function_92(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_93(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_20(iParam0))
			{
				case 0x00000000:
					if (Function_91(iParam0) == 1)
					{
						iVar0 = Function_90(iParam0);
						if (Function_89(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_92(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_92(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_92(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_92(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_92(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_92(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_92(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_92(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_92(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_92(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_92(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_92(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_92(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_92(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_92(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_92(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_92(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_92(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_92(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_92(4, 19);
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
								Function_93(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_93(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_93(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_90(iParam0) == 0)
			{
				if (Function_91(iParam0) == 1)
				{
					Function_93(458, 1, 0, 0);
					iVar0 = Function_20(iParam0);
					if (Function_89(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_92(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_92(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_92(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_92(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_92(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_92(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_92(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_92(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_91(iParam0) == 1)
			{
				Function_93(400, 1, 0, 0);
			}
			switch (Function_20(iParam0))
			{
				case 0x00000001:
					Function_93(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_92(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_92(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_92(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_93(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_92(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_92(6, 9);
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

bool Function_89(int iParam0) //Position: 0x44CB / 17611
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_90(int iParam0) //Position: 0x44E1 / 17633
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_91(int iParam0) //Position: 0x4500 / 17664
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_92(int iParam0, int iParam1) //Position: 0x451A / 17690
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

int Function_93(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4584 / 17796
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_94(iParam0);
	return 1;
}

void Function_94(int iParam0) //Position: 0x47AC / 18348
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

void Function_95() //Position: 0x484A / 18506
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
	PLAYSTAT_INT("HC_MONEY", Function_71(0));
	PLAYSTAT_INT("HC_FAME", Function_71(3));
	PLAYSTAT_INT("HC_HONOR", Function_71(1));
	return;
}

void Function_96() //Position: 0x49AC / 18860
{
	int iVar0;
	int iVar1;
	
	if (!Function_42(Global_10966))
	{
		return;
	}
	iVar0 = Function_71(24);
	iVar1 = Function_41(Global_10966);
	if (!Function_42(iVar0) && Function_99(iVar1) < 0)
	{
		Function_56(24, Global_10966, 0);
		Function_97(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_99(Function_41(iVar0)))
	{
		Function_56(24, Global_10966, 0);
		Function_97(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_97(int iParam0, char* cParam1) //Position: 0x4A2C / 18988
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
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_98(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4D83 / 19843
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

int Function_99(int iParam0) //Position: 0x4E0B / 19979
{
	if (!Function_25(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_100() //Position: 0x4E25 / 20005
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_101() //Position: 0x4E50 / 20048
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

void Function_102(int iParam0, int iParam1, bool bParam2) //Position: 0x4E7E / 20094
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
	
	if (!Function_42(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_117(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_17(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_71(42) - Global_53524.f_168);
				bVar1 = (Function_71(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_17(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_68(49)) - Global_53524.f_176);
				bVar3 = (Function_71(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_17(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_71(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_17(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_17(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_116(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_103(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_36(iParam0) };
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

void Function_103(int iParam0, bool bParam1, bool bParam2) //Position: 0x511A / 20762
{
	int iVar0;
	bool bVar1;
	
	if (Function_115(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_100())
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
	iVar0 = Function_71(3);
	Function_112();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_110(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_33(Global_119936, 4))
			{
				Function_27(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_93(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_67(3));
	iVar0 = Function_71(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_105(4, Function_109(Global_21369.f_248), 1);
				Function_104(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_105(4, Function_109(Global_21369.f_248), 1);
				Function_104(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_105(4, Function_109(Global_21369.f_248), 1);
				Function_104(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_105(4, Function_109(Global_21369.f_248), 1);
				Function_104(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_105(4, Function_109(Global_21369.f_248), 1);
				Function_104(Global_21369.f_244, Global_21369.f_248);
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

void Function_104(int iParam0, int iParam1) //Position: 0x52EE / 21230
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_105(int iParam0, char* cParam1) //Position: 0x5558 / 21848
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
	Function_97(iParam0, &cParam1, 0, 1);
	iVar1 = Function_106();
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

int Function_106() //Position: 0x56E8 / 22248
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
	Function_107();
	return 0;
}

void Function_107() //Position: 0x5789 / 22409
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
		Function_108(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_108(int iParam0) //Position: 0x5847 / 22599
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

var Function_109(int iParam0) //Position: 0x58AD / 22701
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

int Function_110(int iParam0, bool bParam1) //Position: 0x593C / 22844
{
	bool bVar0;
	int iVar1;
	
	Function_93(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_111(iParam0, 4294967295);
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
	iVar1 = Function_106();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_111(int iParam0, int iParam1) //Position: 0x5AE8 / 23272
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

void Function_112() //Position: 0x5B2D / 23341
{
	Function_114(3, 0.0f);
	Function_113(3, 10000.0f);
	return;
}

int Function_113(int iParam0, int iParam1) //Position: 0x5B43 / 23363
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_114(int iParam0, int iParam1) //Position: 0x5B83 / 23427
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_115(int iParam0) //Position: 0x5BC3 / 23491
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_116(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5BD2 / 23506
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

int Function_117(int iParam0) //Position: 0x5D9A / 23962
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

var Function_118() //Position: 0x5E2F / 24111
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_119(int iParam0) //Position: 0x5E54 / 24148
{
	if (!Function_42(iParam0))
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
			Function_103(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_103(25, 1, 0);
			Function_124(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_124(50, 1, 1);
			Function_103(250, 1, 0);
			Function_120(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_103(75, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_124(50, 1, 1);
			Function_103(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_124(5, 1, 1);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_103(75, 1, 0);
			Function_120(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_124(5, 1, 1);
			Function_103(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_120(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_124(25, 1, 1);
			Function_103(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_124(10, 1, 1);
			Function_103(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_103(50, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_103(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_120(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_124(20, 1, 1);
			Function_103(75, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_124(25, 1, 1);
			Function_103(150, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_124(10, 1, 1);
			Function_103(150, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_103(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_120(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_120(100, 1, 0);
			Function_124(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_124(3, 1, 1);
			Function_103(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_120(125, 1, 0);
			Function_103(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_124(50, 1, 1);
			Function_103(100, 1, 0);
			Function_120(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_124(50, 1, 1);
			Function_103(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_124(75, 1, 1);
			Function_103(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_103(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_103(75, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_103(250, 1, 0);
			Function_120(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_103(75, 1, 0);
			Function_120(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_103(200, 1, 0);
			Function_120(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_103(75, 1, 0);
			Function_120(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_103(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_124(50, 1, 1);
			Function_103(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_124(100, 1, 1);
			Function_103(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_103(200, 1, 0);
			Function_120(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_103(300, 1, 0);
			Function_120(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_103(300, 1, 0);
			Function_120(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_103(300, 1, 0);
			Function_120(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_103(500, 1, 0);
			Function_120(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_103(150, 1, 0);
			Function_120(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_120(25, 1, 0);
			Function_124(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_103(150, 1, 0);
			Function_120(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_120(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_120(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_120(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_120(150, 1, 0);
			Function_124(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_120(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_120(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_120(150, 1, 0);
			Function_124(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_120(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_120(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_120(int iParam0, bool bParam1, bool bParam2) //Position: 0x6323 / 25379
{
	int iVar0;
	bool bVar1;
	
	if (Function_115(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_100())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_71(1);
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
			Function_110(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_33(Global_119936, 1))
				{
					Function_27(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_123(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_33(Global_119936, 2))
				{
					Function_27(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_93(1, bVar1, 0, 0);
	}
	else
	{
		Function_122(1, (4294967295 * bVar1), 0);
	}
	if (Function_71(1) <= 4294962296)
	{
		Function_56(1, 4294962296, 0);
	}
	else if (Function_71(1) >= 5000)
	{
		Function_56(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_67(1));
	iVar0 = Function_71(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_105(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_105(2, Function_121(Global_21369.f_244), 0);
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
				Function_105(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_105(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_105(2, Function_121(Global_21369.f_244), 1);
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
				Function_105(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_105(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_105(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_105(2, Function_121(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_105(2, Function_121(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_105(2, Function_121(Global_21369.f_244), 1);
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
				Function_105(2, Function_121(Global_21369.f_244), 0);
			}
			break;
	}
	Function_104(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_121(int iParam0) //Position: 0x664A / 26186
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

int Function_122(int iParam0, bool bParam1, int iParam2) //Position: 0x66ED / 26349
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
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_123(int iParam0, bool bParam1) //Position: 0x68EA / 26858
{
	bool bVar0;
	int iVar1;
	
	Function_122(iParam0, bParam1, 0);
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
	iVar1 = Function_111(iParam0, 4294967295);
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
	iVar1 = Function_106();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_124(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A95 / 27285
{
	bool bVar0;
	
	bVar0 = Function_71(0);
	if ((Function_71(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_93(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_93(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_71(597) + Function_71(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_125(int iParam0, var uParam1, bool bParam2) //Position: 0x6B67 / 27495
{
	struct<4> Var0;
	
	if (!Function_42(iParam0))
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
			Function_171(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_168(Global_46760[0]);
			Function_168(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_166(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_168(Global_46816[0]);
			Function_158(0);
			Function_156(2, 1);
			Function_156(0, 1);
			Function_156(1, 1);
			break;
		
		case 0x00000003:
			Function_168(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_168(Global_46816[0]);
			Function_168(Global_46760[0]);
			Function_154(0, 1);
			Function_154(15, 1);
			Function_154(9, 1);
			Function_154(12, 1);
			Function_154(16, 1);
			Function_156(3, 1);
			break;
		
		case 0x00000005:
			Function_168(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_166(21, &bParam2, 4);
			Function_168(Global_46816[0]);
			Function_156(39, 1);
			break;
		
		case 0x00000007:
			Function_168(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_168(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_153())
				{
					if (!Function_152(4))
					{
						Function_142(4, 0, 0, 1, 0);
					}
				}
			}
			Function_168(Global_46760[0]);
			Function_168(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_168(Global_46760[0]);
			Function_168(Global_46816[2]);
			Function_141(&(Global_43791[Global_46816[2]]), 32768);
			Function_140(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_166(9, &bParam2, 4);
			Function_168(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_168(Global_46760[0]);
			Function_168(Global_46796[0]);
			Function_141(&(Global_43791[Global_46796[0]]), 32768);
			Function_140(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_168(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_168(Global_46760[0]);
			Function_168(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_168(Global_46760[1]);
			Function_168(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_168(Global_46838[0]);
			Function_168(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_168(Global_46796[5]);
			Function_168(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_166(21, &bParam2, 4);
			Function_168(Global_46760[4]);
			Function_168(Global_46796[4]);
			Function_139(&Global_119935, 0x2000000);
			Function_139(&Global_119935, 0x4000000);
			Function_139(&Global_119935, 4096);
			Function_139(&Global_119935, 8);
			Function_139(&Global_119935, 8388608);
			Function_139(&Global_119935, 524288);
			Function_139(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_168(Global_46760[4]);
			Function_168(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_140(&(Global_43791[Global_46760[4]]), 256);
			Function_168(Global_46760[4]);
			Function_168(Global_46796[0]);
			Function_141(&(Global_43791[Global_46796[0]]), 32768);
			Function_140(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_168(Global_46760[0]);
			Function_168(Global_46760[5]);
			Function_166(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_168(Global_46796[3]);
			Function_141(&(Global_43791[Global_46796[3]]), 32768);
			Function_140(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_166(9, &bParam2, 4);
			Function_168(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_141(&(Global_43791[Global_46838[1]]), 32768);
			Function_168(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_166(12, &bParam2, 4);
			Function_140(&(Global_43791[Global_46838[1]]), 256);
			Function_168(Global_46816[3]);
			Function_168(Global_46866[0]);
			Function_168(Global_46850[0]);
			Function_158(4);
			Function_154(13, 1);
			Function_154(1, 1);
			Function_154(18, 1);
			Function_156(34, 1);
			Function_156(44, 1);
			Function_156(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_166(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_168(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_168(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_168(Global_46866[0]);
			Function_168(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_168(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_168(Global_46850[0]);
			Function_168(Global_46866[0]);
			Function_168(Global_46866[1]);
			Function_168(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_166(23, &bParam2, 3);
			Function_154(23, 1);
			Function_168(Global_46850[0]);
			Function_168(Global_46850[2]);
			Function_141(&(Global_43791[Global_46850[2]]), 32768);
			Function_140(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_166(19, &bParam2, 4);
			Function_168(Global_46850[0]);
			Function_168(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_166(24, &bParam2, 3);
			Function_154(24, 1);
			Function_168(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_168(Global_46850[0]);
			Function_168(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_168(Global_46866[12]);
			Function_168(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_168(Global_46866[12]);
			Function_168(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_166(25, &bParam2, 10);
			Function_168(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_168(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_168(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_166(13, &bParam2, 4);
			Function_168(Global_46866[2]);
			Function_168(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_152(8))
				{
					Function_142(8, 0, 0, 1, 0);
				}
			}
			Function_168(Global_46850[0]);
			Function_158(9);
			Function_154(7, 1);
			Function_154(11, 1);
			Function_154(3, 1);
			Function_154(20, 1);
			Function_156(57, 1);
			break;
		
		case 0x0000002A:
			Function_166(2, &bParam2, 4);
			Function_168(Global_46914[0]);
			Function_168(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_168(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_168(Global_46914[0]);
			Function_168(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_168(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_168(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_168(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_166(17, &bParam2, 4);
			Function_168(Global_46926[0]);
			Function_168(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_137(15))
				{
					Function_132(15, 0, 1);
				}
			}
			Function_92(2, 26);
			Function_140(&(Global_43791[Global_46914[1]]), 256);
			Function_158(11);
			Function_168(Global_46914[1]);
			Function_168(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_168(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_168(Global_46914[1]);
			Function_168(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_168(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_168(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_168(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_168(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_168(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_168(Global_46914[1]);
			Function_126(11);
			Function_158(12);
			Global_26200[1114].f_40 = 0;
			Function_156(56, 1);
			if (!&bParam2)
			{
				if (!Function_152(9))
				{
					Function_142(9, 0, 0, 0, 0);
				}
				if (!Function_152(10))
				{
					Function_142(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_17(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_126(int iParam0) //Position: 0x7482 / 29826
{
	var uVar0;
	
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_131(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_131(&Global_26200[iParam014] + 88, 0);
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
			Function_127(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_127(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x75FF / 30207
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
		Function_129(Function_130(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_129(Function_130(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_129(StackVal);
				Var1 = Function_129(StackVal);
				if (Function_128(StackVal, StackVal, Var1, Var3))
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

bool Function_128(struct<2> Param0, struct<2> Param2) //Position: 0x770A / 30474
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_129(int iParam0) //Position: 0x7736 / 30518
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

var Function_130(vector3 vParam0) //Position: 0x778D / 30605
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

void Function_131(var uParam0, int iParam1) //Position: 0x77DB / 30683
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

void Function_132(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7836 / 30774
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_136(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_137(bParam0))
	{
		if (!Function_152(bParam0))
		{
			Function_142(bParam0, 1, 0, 0, 1);
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
		Function_93(457, 1, 0, 0);
		Function_135(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_134(0, 0, 1, 1))
			{
				Function_47(1);
				Function_46(1, 0);
			}
			else
			{
				Function_133();
			}
		}
	}
	return;
}

void Function_133() //Position: 0x79D7 / 31191
{
	return;
}

bool Function_134(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x79DD / 31197
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

void Function_135(bool bParam0, int iParam1) //Position: 0x7A8C / 31372
{
	if (!Function_136(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_136(int iParam0) //Position: 0x7AE1 / 31457
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_137(int iParam0) //Position: 0x7AF7 / 31479
{
	if (!Function_136(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_138(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_138(int iParam0, int iParam1) //Position: 0x7B48 / 31560
{
	int iVar0;
	
	if (!Function_136(iParam0))
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

void Function_139(var uParam0, int iParam1) //Position: 0x7B75 / 31605
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_140(var uParam0, int iParam1) //Position: 0x7B86 / 31622
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_141(var uParam0, int iParam1) //Position: 0x7BA0 / 31648
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_142(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7BB1 / 31665
{
	char* cVar0[32];
	
	if (!Function_136(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_151(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_152(bParam0))
	{
		Function_93(456, 1, 0, 0);
		Function_135(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_134(0, 0, 1, 1))
			{
				Function_47(1);
				Function_46(1, 5);
			}
			else
			{
				Function_133();
			}
		}
		Function_145(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_144() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_144() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_143(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_18())
		{
			if (!Function_33(Global_119934, 2))
			{
				Function_27(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_143(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7D0D / 32013
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_36(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_144() //Position: 0x7D98 / 32152
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_145(bool bParam0) //Position: 0x7DC5 / 32197
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
			if (Function_149(bParam0, Function_150(bVar24)))
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
			if (Function_149(bParam0, Function_150(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_148(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_147(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_146(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_146(int iParam0) //Position: 0x7F75 / 32629
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_136(iParam0))
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

void Function_147(char* cParam0, int iParam1) //Position: 0x7FCC / 32716
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_148(int iParam0) //Position: 0x7FF1 / 32753
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_136(iParam0))
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

bool Function_149(bool bParam0, int iParam1) //Position: 0x8048 / 32840
{
	int iVar0;
	
	if (!Function_136(bParam0))
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

int Function_150(bool bParam0) //Position: 0x80A7 / 32935
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_151(int iParam0) //Position: 0x80B3 / 32947
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_152(int iParam0) //Position: 0x80CF / 32975
{
	if (!Function_136(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_138(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_153() //Position: 0x8121 / 33057
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_19(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_154(int iParam0, int iParam1) //Position: 0x8151 / 33105
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_155(iParam0, iParam1);
	Function_27(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_155(int iParam0, int iParam1) //Position: 0x81C6 / 33222
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_156(int iParam0, int iParam1) //Position: 0x8223 / 33315
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_157(iParam0, iParam1);
	Function_27(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_157(int iParam0, int iParam1) //Position: 0x8296 / 33430
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_158(int iParam0) //Position: 0x82F1 / 33521
{
	var uVar0;
	var uVar1;
	
	if (!Function_82(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_165(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_165(&Global_26200[iParam014] + 88, 0);
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
			Function_93(468, 1, 0, 0);
			Function_92(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_143("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_127(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_142(14, 1, 0, 0, 0);
				Function_159(14, 1, 0, 0, 0);
			}
			if (!Function_134(0, 0, 1, 1))
			{
				Function_47(1);
				Function_46(1, 6);
			}
			else
			{
				Function_133();
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
			Function_143("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_93(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_92(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_159(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x85B1 / 34225
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_136(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_151(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_138(bParam0, 2))
	{
		Function_93(456, 1, 0, 0);
		Function_135(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_143(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_149(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_135(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_134(0, 0, 1, 1))
			{
				Function_47(1);
				Function_46(1, 0);
			}
			else
			{
				Function_133();
			}
		}
		Function_145(bParam0);
		if (StackVal && !Function_19(((((!Function_144() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_19((((Function_144() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_18())
		{
			if (!Function_33(Global_119934, 2))
			{
				Function_27(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_161();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_160(3, bParam1);
				break;
			
			case 0x00000005:
				Function_160(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_160(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_160(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_160(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_160(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_92(2, 24);
				break;
			
			case 0x00000003:
				Function_92(2, 25);
				break;
			
			case 0x0000000F:
				Function_92(2, 26);
				break;
			
			case 0x0000000D:
				Function_92(2, 27);
				break;
			
			case 0x0000000E:
				Function_92(2, 28);
				break;
			}
	}
}

void Function_160(int iParam0, bool bParam1) //Position: 0x8850 / 34896
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

void Function_161() //Position: 0x88BF / 35007
{
	if (Function_136(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_164(Global_42827);
			(&Global_42827 + 8) = Function_162(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_164(Global_42827);
			*(&Global_42827 + 8) = Function_162(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_162(int iParam0, int iParam1) //Position: 0x893F / 35135
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
					if (Function_40(6, 0) || Function_40(12, 0))
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
					if (Function_163(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_40(5, 0))
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
					if (Function_163(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_163(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_163(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_163(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_40(26, 0))
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
					if (Function_163(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_163(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_163(27) && iVar16)
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
					if (Function_163(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_163(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_163(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_163(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_40(17, 0) && iVar13)
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
					if (Function_163(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_40(6, 0) && Function_163(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_163(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_40(9, 0) && Function_163(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_163(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_40(8, 0) && iVar17)
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
	if (Function_78(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_78(StackVal, vVar2))
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
	if (!Function_78(StackVal, vVar2))
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

int Function_163(int iParam0) //Position: 0x95A2 / 38306
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_164(int iParam0) //Position: 0x95B7 / 38327
{
	int iVar0;
	int iVar1;
	
	if (!Function_136(iParam0))
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

void Function_165(var uParam0, int iParam1) //Position: 0x9606 / 38406
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

void Function_166(bool bParam0, bool bParam1, int iParam2) //Position: 0x965E / 38494
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_167(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_171(bParam0, 0, 0);
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

bool Function_167(int iParam0, int iParam1) //Position: 0x96D1 / 38609
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_168(int iParam0) //Position: 0x96E5 / 38629
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_170(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_141(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_93(473, 1, 0, 0);
		iVar0 = Function_169(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_93(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_93(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_93(476, 1, 0, 0);
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
		Function_92(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_92(7, 30);
	}
	if (Function_67(473) <= Function_68(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_169(int iParam0) //Position: 0x97D6 / 38870
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_89(iParam0))
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

bool Function_170(var uParam0, int iParam1) //Position: 0x982E / 38958
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_171(bool bParam0, bool bParam1, int iParam2) //Position: 0x984B / 38987
{
	if (!Function_172(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_188(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_188(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_188(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_172(int iParam0) //Position: 0x98A5 / 39077
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_173(int iParam0) //Position: 0x98B7 / 39095
{
	int iVar0;
	
	if (Function_19(iParam0, 1) && Function_19(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_174(struct<185> Param0) //Position: 0x98EB / 39147
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
			Function_175(4, 0, 0);
		}
	}
	return;
}

void Function_175(bool bParam0, var uParam1, int iParam2) //Position: 0x9956 / 39254
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
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_176(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_176(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9A40 / 39488
{
	int iVar0;
	
	Function_178(bParam0);
	Function_13(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, &bParam1);
	Function_177();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_177() //Position: 0x9BBF / 39871
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_178(int iParam0) //Position: 0x9BCB / 39883
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

void Function_179(int iParam0) //Position: 0x9C11 / 39953
{
	if (Function_19(iParam0, 1) && !Function_19(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_180(int iParam0) //Position: 0x9C3E / 39998
{
	Function_181(&Global_43580, iParam0);
	return;
}

void Function_181(var uParam0, var uParam1) //Position: 0x9C4C / 40012
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_182() //Position: 0x9C6B / 40043
{
	return;
}

void Function_183() //Position: 0x9C71 / 40049
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_184(&uLocal_707);
	return;
}

void Function_184(int iParam0) //Position: 0x9C80 / 40064
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_185(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_185(struct<2>[] Param0, int iParam1) //Position: 0x9CA8 / 40104
{
	if (Function_187(&(Param0[iParam12]), 4))
	{
		if (Function_187(&(Param0[iParam12]), 1))
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
			Function_186(&(Param0[iParam12]), 1);
			Function_186(&(Param0[iParam12]), 2);
			Function_186(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_186(struct<13> Param0) //Position: 0x9DF3 / 40435
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_187(struct<13> Param0) //Position: 0x9E10 / 40464
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_188() //Position: 0x9E2E / 40494
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_189(bool bParam0, bool bParam1) //Position: 0x9E43 / 40515
{
	switch (bParam0)
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

void Function_190() //Position: 0x9FC9 / 40905
{
	Function_191(9);
	Function_191(8);
	Function_191(7);
	Function_191(6);
	Function_191(5);
	Function_191(4);
	Function_191(3);
	Function_191(2);
	Function_191(1);
	Function_191(0);
	return;
}

int Function_191(int iParam0) //Position: 0xA003 / 40963
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_192() //Position: 0xA00F / 40975
{
	var uVar0[3];
	int iVar4;
	
	if (Function_215(0))
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		iVar4 = Function_201(&uLocal_17, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_195();
			Function_194(0);
		}
		else if (iVar4 == 1)
		{
			Function_195();
			Function_194(1);
		}
		else if (iVar4 == 2)
		{
			Function_195();
			Function_194(2);
		}
	}
	else
	{
		Function_193(10, 3);
	}
	return;
}

void Function_193(int iParam0, int iParam1) //Position: 0xA0A0 / 41120
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

void Function_194(int iParam0) //Position: 0xA1ED / 41453
{
	iLocal_1 = 3;
	iLocal_2 = 0;
	iLocal_9 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: PASS", 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: FAIL", 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: CANCEL", 0, 0, 0, 0);
			break;
		
		default:
			NET_LOG(true, "nLiarsDice", "Quitting Poker: <SOME OTHER REASON>", 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_195() //Position: 0xA2DF / 41695
{
	Function_196();
	Function_193(10, 3);
	return;
}

void Function_196() //Position: 0xA2EE / 41710
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
	SET_ACTOR_INVULNERABILITY(Function_188(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_188());
	UI_POP("nDebugMenu");
	return;
}

void Function_197() //Position: 0xA339 / 41785
{
	Function_198(25, 2);
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0xA345 / 41797
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

void Function_199(int iParam0, int iParam1) //Position: 0xA571 / 42353
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

bool Function_200() //Position: 0xA6BE / 42686
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
				if (!Function_19(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_201(struct<17> Param0) //Position: 0xA726 / 42790
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

void Function_202(int iParam0, int iParam1, int iParam2) //Position: 0xA81A / 43034
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

bool Function_203(struct<17> Param0) //Position: 0xA87A / 43130
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

void Function_204(bool bParam0) //Position: 0xAA0D / 43533
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

void Function_205(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xAA4B / 43595
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

var Function_206(int iParam0, struct<21> Param1) //Position: 0xAB01 / 43777
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_207(vector3 vParam0) //Position: 0xAB28 / 43816
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

int Function_208() //Position: 0xABD4 / 43988
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

void Function_209(vector3 vParam0) //Position: 0xAC10 / 44048
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

int Function_210(int iParam0) //Position: 0xACB9 / 44217
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_19(iParam0, 0x40000000))
		{
			Function_81(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_19(iParam0, 0x40000000))
		{
			Function_81(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_32(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_19(iParam0, 0x20000000))
		{
			Function_81(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_19(iParam0, 0x20000000))
		{
			Function_81(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_32(&iParam0, 0x20000000);
	return 0;
}

var Function_211(struct<21> Param0) //Position: 0xADD9 / 44505
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

void Function_212(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xAF93 / 44947
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

var Function_213(int iParam0, struct<13> Param1) //Position: 0xB02F / 45103
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_214(struct<17> Param0) //Position: 0xB04B / 45131
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

bool Function_215(int iParam0) //Position: 0xB0A5 / 45221
{
	if (!Function_216(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_216(int iParam0) //Position: 0xB0BA / 45242
{
	if (iParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

bool Function_217() //Position: 0xB0E1 / 45281
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(Function_188()))
	{
		Function_376();
		return 0;
	}
	bLocal_745 = (GET_CURRENT_GAME_TIME() - fLocal_746);
	if (bLocal_745 < 0,033333f)
	{
		bLocal_745 = 0,0333333f;
	}
	fLocal_746 = GET_CURRENT_GAME_TIME();
	Function_76(432, bLocal_745, 0);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_79 + 4[iVar0]))
		{
			if (GET_LAST_ATTACKER(&Local_79 + 4[iVar0]) == Function_188())
			{
				Function_376();
				return 0;
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_376();
		return 0;
	}
	iLocal_3 = 0;
	bLocal_4 = false;
	switch (iLocal_1)
	{
		case 0x00000063:
			Function_374(&Local_131);
			iLocal_1 = 0;
			break;
		
		case 0x00000000:
			Function_362();
			break;
		
		case 0x00000001:
			Function_246();
			break;
		
		case 0x00000003:
			Function_237();
			break;
		
		case 0x00000065:
			iLocal_3 = 1;
			break;
		
		case 0x00000029:
			if (Function_228(&uLocal_75, &iLocal_32))
			{
				Function_194(0);
			}
			break;
		
		default:
			return 0;
	}
	if (iLocal_3)
	{
		Function_218();
		return 0;
	}
	if (bLocal_4)
	{
		Function_376();
		return 0;
	}
	return 1;
}

void Function_218() //Position: 0xB1E6 / 45542
{
	if (Global_43789 == Global_46894[2])
	{
		Function_227(7, Global_46894[2]);
	}
	if (Function_226(50) && Local_79 != Function_221(Global_46816[1], 7, 4))
	{
		Function_219(64, 1, 0);
	}
	iLocal_3 = 1;
	Function_1();
	return;
}

int Function_219(bool bParam0, bool bParam1, int iParam2) //Position: 0xB227 / 45607
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_220(bParam0), Function_188()) == 0)
		{
			ADD_ITEM(Function_220(bParam0), Function_188(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_220(bParam0), Function_188(), &iParam2);
	return 1;
}

var Function_220(bool bParam0) //Position: 0xB275 / 45685
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_221(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB369 / 45929
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_225(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_222(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_222(bParam0, bParam1, bParam2, 4294967295);
}

int Function_222(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xB3C7 / 46023
{
	var uVar0;
	
	if (!Function_224(bParam2))
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
	uVar0 = Function_225(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_223(uVar0);
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

var Function_223(int iParam0) //Position: 0xB52B / 46379
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

bool Function_224(int iParam0) //Position: 0xB569 / 46441
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_225(int iParam0, int iParam1, int iParam2) //Position: 0xB57E / 46462
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_226(int iParam0) //Position: 0xB59E / 46494
{
	if (Global_116927[iParam06] == 5)
	{
		return 1;
	}
	return 0;
}

void Function_227(int iParam0, int iParam1) //Position: 0xB5B3 / 46515
{
	if (!Function_151(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_153())
				{
					Function_159(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_159(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_159(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_159(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_159(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_159(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_159(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_152(2) && !Function_137(2))
				{
					Function_159(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_228(struct<2> Param0) //Position: 0xB6BE / 46782
{
	Param0 = { StackVal, Param0 };
	switch (iLocal_2)
	{
		case 0x00000000:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			else
			{
				Function_4();
				Function_191(6);
				Function_191(5);
				Function_191(4);
				Function_191(3);
				Function_191(2);
				Function_191(1);
				Function_191(0);
				Function_143("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_235(&iParam1);
				iLocal_2 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_229(&iParam1, 10,5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_229(var uParam0, int iParam1) //Position: 0xB763 / 46947
{
	if (Function_231(&uParam0, iParam1))
	{
		Function_230(&uParam0);
		return 1;
	}
	return 0;
}

void Function_230(vector3 vParam0) //Position: 0xB77D / 46973
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_231(int iParam0, float fParam1) //Position: 0xB794 / 46996
{
	if (Function_234(&iParam0))
	{
		if (Function_232(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_232(vector3 vParam0) //Position: 0xB7B2 / 47026
{
	if (Function_234(&vParam0))
	{
		if (Function_233(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_233(int iParam0) //Position: 0xB87F / 47231
{
	return Function_19(iParam0, 2);
}

bool Function_234(int iParam0) //Position: 0xB88D / 47245
{
	return Function_19(iParam0, 1);
}

void Function_235(int iParam0) //Position: 0xB89B / 47259
{
	Function_236(&iParam0, 0.0f);
	return;
}

void Function_236(vector3 vParam0) //Position: 0xB8A8 / 47272
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_81(&vParam0, 1);
	Function_32(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_237() //Position: 0xB8CD / 47309
{
	int iVar0;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (iLocal_9 == 1)
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
			}
			UI_EXIT("Dice");
			UI_EXIT("Scores");
			Function_190();
			Function_4();
			if (iLocal_9 != 0 && !Function_245(Function_22(Local_79), Function_20(Local_79)))
			{
				Function_93(410, 1, 0, 0);
				Function_92(6, 13);
			}
			iLocal_2 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_131 + 2168)[Local_131.f_22802])
			{
				Function_244(&iLocal_57, GET_GRINGO_FROM_OBJECT(&Local_131 + 2168[Local_131.f_22802] + 8));
				Function_240(&Local_131, Function_242(1));
			}
			iLocal_2 = 7;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_131.f_2168)
			{
				if ((*&Local_131 + 2168)[iVar02])
				{
					RESET_ANIM_SET_FOR_ACTOR(&(Local_131[StackVal45]), 1);
					SET_ANIM_SET_FOR_ACTOR(&(Local_131[StackVal45]), "liars_dice_ambient", 0);
					while (!ACTOR_HAS_ANIM_SET(&(Local_131[StackVal45]), "liars_dice_ambient") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					SET_ACTION_NODE_FOR_ACTOR(&(Local_131[StackVal45]), "liars_dice/fake_liars_dice/check_lift");
					SET_AUTO_CONVERSATION_LOOK(&(Local_131[StackVal45]), 1);
					TASK_PRIORITY_SET(&(Local_131[StackVal45]), 2);
				}
				Function_239(GET_GRINGO_FROM_OBJECT(&Local_131 + 2168[iVar02] + 8));
				iVar0++;
			}
			Function_238(&Local_131);
			iLocal_2 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "liars_dice/stand"))
			{
				iLocal_2 = 9;
			}
			break;
		
		case 0x00000009:
			if (iLocal_9 == 0)
			{
				iLocal_3 = 1;
			}
			else if (iLocal_9 == 1)
			{
				bLocal_4 = true;
			}
			else if (iLocal_9 == 2)
			{
				Function_1();
			}
			break;
	}
	return;
}

void Function_238(struct<45>[] Param0) //Position: 0xBB68 / 47976
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			iVar1 = StackVal;
			if (IS_OBJECT_VALID(&Param0[iVar145] + 152))
			{
				DESTROY_OBJECT(&Param0[iVar145] + 152);
			}
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (IS_OBJECT_VALID(&Param0[iVar145] + 72[iVar2]))
				{
					DESTROY_OBJECT(&Param0[iVar145] + 72[iVar2]);
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	return;
}

void Function_239(var uParam0) //Position: 0xBBEF / 48111
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&uParam0, "UseCase1");
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
	while (bVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uVar0);
		uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar2, &uParam0);
		if (IS_PHYSINST_VALID(&uVar3))
		{
			SHOW_PHYSINST(&uVar3);
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, bVar1 + 1);
	}
	return;
}

void Function_240(struct<2273> Param0) //Position: 0xBC69 / 48233
{
	(*&Param0 + 2168)[Param0[iParam145].f_1242] = 0;
	(&Param0 + 2168[Param0[iParam145].f_1242])->f_4 = 4294967295;
	if (IS_ACTOR_VALID(&(Param0[iParam145])))
	{
		GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&Param0 + 2168[Param0[iParam145].f_1242] + 8));
		if (Param0[iParam145].f_120 == 3)
		{
			DESTROY_ACTOR(&(Param0[iParam145]));
		}
		else
		{
			TASK_CLEAR(&(Param0[iParam145]));
			if (!IS_ACTOR_PLAYER(&(Param0[iParam145])))
			{
				TASK_FLEE_ACTOR(&(Param0[iParam145]), GET_PLAYER_ACTOR(0), 100.0f, -1.0f, 0, 0, 0);
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&(Param0[iParam145]), 1);
			ACTOR_END_FORCE_HOLSTER(&(Param0[iParam145]));
		}
	}
	Param0[iParam145] = "";
	Param0[iParam145].f_124 = 4294967295;
	Function_241(&Param0[iParam145] + 72, 5);
	DESTROY_OBJECT(&Param0[iParam145] + 152);
	Param0[iParam145].f_128 = 1000;
	strcpy(&Param0[iParam145] + 8, "", 32);
	Param0.f_2272 = (Param0.f_2272 - 1);
	return;
}

void Function_241(var[] uParam0, int iParam1) //Position: 0xBD79 / 48505
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_OBJECT_VALID(&(uParam0[iVar0])))
		{
			DESTROY_OBJECT(&(uParam0[iVar0]));
			uParam0[iVar0] = "";
		}
		iVar0++;
	}
	return;
}

int Function_242(int iParam0) //Position: 0xBDB5 / 48565
{
	return Function_243(Local_131.f_2280, &iParam0);
}

int Function_243(int iParam0, int iParam1) //Position: 0xBDC6 / 48582
{
	int iVar0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
		SCRIPT_BREAKPOINT("Invalid Seat Index!");
	}
	iVar0 = StackVal;
	if (iParam1 && (iVar0 > 0 || iVar0 <= 6))
	{
		SCRIPT_BREAKPOINT("Was going to return invalid PlayerIndex in PLAYER_IN_SEAT");
	}
	return iVar0;
}

void Function_244(var uParam0, int iParam1) //Position: 0xBE4F / 48719
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
		fVar10 = 1,3f;
		fVar11 = 0,4f;
		fVar12 = 1,2f;
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
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

bool Function_245(int iParam0, int iParam1) //Position: 0xBFC6 / 49094
{
	int iVar0;
	
	if (!Function_224(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (Function_22(iVar0) != iParam0 && Function_20(iVar0) != iParam1)
		{
			if (Function_91(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_246() //Position: 0xC00B / 49163
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<16> Var4;
	bool bVar20;
	bool bVar21;
	float fVar22;
	float fVar23;
	var uVar24;
	var uVar34;
	struct<2> Var35;
	struct<2> Var37;
	bool bVar39;
	bool bVar40;
	int iVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	int iVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	bool bVar51;
	
	if (bLocal_54)
	{
		Function_236(&iLocal_32, (Function_232(&iLocal_32) + 0,2f));
	}
	iVar2 = "";
	if ((*&Local_131 + 2168)[Local_131.f_22762])
	{
		iVar2 = &Local_131[Function_361(1)45];
	}
	Function_358(&Local_131);
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if ((iLocal_127 == 0 && iLocal_127 == 10) && iLocal_127 == 15)
		{
			if (UNK_0xDA674AE0("@MINIGAME.SKIP_TO_PLAYER", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_128 = iLocal_127;
				Function_357(26, 0);
				bLocal_52 = true;
			}
		}
	}
	if (HUD_IS_SHOWING_HELP_TEXT())
	{
		if ((UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) && iLocal_127 == 10)
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			Function_356(&iLocal_70);
		}
	}
	bVar21 = (IS_PC() && IS_USING_KEYBOARD_AND_MOUSE());
	fVar22 = GET_CURRENT_GAME_TIME();
	fVar23 = (fVar22 - fLocal_751);
	switch (iLocal_127)
	{
		case 0x0000001A:
			if (HUD_IS_FADED())
			{
				iVar0 = 0;
				while (iVar0 <= Local_131.f_2168)
				{
					if ((*&Local_131 + 2168)[iVar02])
					{
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(Local_131[StackVal45]));
					}
					iVar0++;
				}
				Function_4();
				Function_355();
				Function_357(iLocal_128, 0);
			}
			break;
		
		case 0x00000000:
			iLocal_130 = 0;
			if (bLocal_52)
			{
				Function_4();
				Function_355();
				SET_ACTION_NODE_FOR_ACTOR(&(Local_131[Function_242(1)45]), "liars_dice/idle");
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_52 = false;
			}
			if (Function_350(&iLocal_70, 0))
			{
				Function_143("LiarsDice_AnteHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			AUDIO_RESET_SPEECH_HISTORY();
			UI_EXIT("Dice");
			UI_ENTER("Scores");
			UI_EXIT("nScores.s1");
			UI_EXIT("nScores.s2");
			UI_LABEL_SET_TEXT("nScores.s0", "LiarsDice_CashLabel");
			UI_LABEL_SET_VALUE("nScores.s0", Function_349());
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_AnteOrQuitValue", Function_347(Local_79.f_76), "", "", "", 0, 2, 0, 0, 0);
			}
			iLocal_56 = 0;
			if (UNK_0xDA674AE0("@LIARS_DICE.ANTE", 1, 0))
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Function_346(Local_79.f_76, 0);
				UI_LABEL_SET_VALUE("nScores.s0", Function_349());
				SAY_SINGLE_LINE_CONTEXT(&(Local_131[Function_242(1)45]), 479, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				Function_357(1, 0);
			}
			break;
		
		case 0x0000000D:
			Function_345(bLocal_129);
			Function_357(14, 0);
			break;
		
		case 0x0000000E:
			memcpy(&uVar24, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("ACKNOWLEDGE: ", I2STR(bLocal_129)), 6);
			if (Function_324(bLocal_129, 0, 0x3f800000))
			{
				Function_357(bLocal_129, 0);
			}
			break;
		
		case 0x00000001:
			iLocal_130 = 3;
			if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_52)
			{
				Function_4();
				Function_357(2, 1);
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING(&iVar2, "liars_dice/idle") || bLocal_52)
			{
				UI_EXIT("Scores");
				Function_357(3, 1);
			}
			break;
		
		case 0x00000003:
			Function_323(&iLocal_57);
			Local_131.f_2288 = 0;
			Local_131.f_2292 = 1;
			UI_LABEL_SET_VALUE("NumberOfDice", false);
			UI_LABEL_SET_VALUE("DiceNumber", true);
			Local_131.f_2296 = 4294967295;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_131 + 2168)[iVar02])
				{
					if (Local_131[Function_243(iVar0, 1)45].f_120 == 3)
					{
						Function_240(&Local_131, Function_243(iVar0, 1));
					}
					else
					{
						Local_131[Function_243(iVar0, 1)45].f_168 = 1;
						Local_131[Function_243(iVar0, 1)45].f_172 = 1;
					}
				}
				iVar0++;
			}
			Function_357(4, 0);
			break;
		
		case 0x00000004:
			iLocal_55 = 0;
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_131 + 2168)[iVar02])
				{
					iVar3 = Function_243(iVar0, 1);
					if (Function_322(&Local_131, iVar3))
					{
						if (1 || iVar3 != Function_242(1))
						{
							Function_320(&Local_131, iVar3);
						}
						SET_ACTION_NODE_FOR_ACTOR(&(Local_131[iVar345]), "liars_dice/cup_shuffle_pre");
					}
					else if (iVar3 == Function_242(1))
					{
						Function_318(&vLocal_753[Function_319(&Local_131, Function_242(1))9] + 56);
					}
				}
				iVar0++;
			}
			if (Function_350(&iLocal_70, 1))
			{
				Function_143("LiarsDice_ShuffleHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_357(5, 0);
			break;
		
		case 0x00000005:
			Function_357(6, 0);
			break;
		
		case 0x00000006:
			Function_317(&Local_131);
			if (Function_316(&Local_131) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_357(7, 1);
			}
			else if (bLocal_52)
			{
				Function_314(&Local_131);
				Function_357(7, 1);
			}
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_131 + 2168)[iVar02])
				{
					iVar3 = Function_243(iVar0, 1);
					iVar1 = 0;
					while (iVar1 <= Function_313(&Local_131, iVar3))
					{
						if (!IS_OBJECT_VALID(&uVar34))
						{
							uVar34 = CREATE_OBJECT_LOCATOR(&Local_131[iVar345] + 152, Function_58());
						}
						switch (iVar1)
						{
							case 0x00000000:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar34, &Local_131[iVar345] + 152, "die01", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								break;
							
							case 0x00000001:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar34, &Local_131[iVar345] + 152, "die02", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								break;
							
							case 0x00000002:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar34, &Local_131[iVar345] + 152, "die03", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								break;
							
							case 0x00000003:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar34, &Local_131[iVar345] + 152, "die04", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								break;
							
							case 0x00000004:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar34, &Local_131[iVar345] + 152, "die05", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								break;
							
							case 0x00000005:
								OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(StackVal, StackVal, &uVar34, &Local_131[iVar345] + 152, "die06", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								break;
						}
						GET_OBJECT_POSITION(&uVar34, &Var35);
						GET_OBJECT_ORIENTATION(&uVar34, &Var37);
						if (0 && iVar3 == Function_242(1))
						{
						}
						else
						{
							(&Local_131[iVar345] + 72[iVar1]) = CREATE_PROP_IN_LAYOUT(&cLocal_28, Function_58(), "$/fragments/p_gen_dice01x", Var35, Var37, 0);
						}
						Function_310(Function_312(&Local_131, iVar3, iVar1), &Local_131[iVar345] + 72[iVar1]);
						iVar1++;
					}
				}
				iVar0++;
			}
			REMOVE_ALL_OBJECT_ATTACHMENTS(&Local_131[Function_361(1)45] + 152);
			Function_357(8, 0);
			break;
		
		case 0x00000008:
			iVar3 = Function_361(1);
			bVar39 = Local_131[iVar345].f_120;
			if (uLocal_53 && bVar39 == 2)
			{
				bVar39 = true;
			}
			iLocal_130 = 1;
			if (Function_322(&Local_131, iVar3))
			{
				switch (bVar39)
				{
					case 0x00000001:
						if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && Local_131.f_2300 != 0.0f)
						{
							if (iLocal_31 || bLocal_52)
							{
								Function_308(&iLocal_57, &iVar2, &(Local_131[Function_242(1)45]), 1);
							}
							else
							{
								Function_308(&iLocal_57, &iVar2, &(Local_131[Function_242(1)45]), 0);
							}
						}
						Local_131[iVar345].f_172 = Local_131.f_2292;
						Local_131[iVar345].f_168 = Local_131.f_2288;
						Function_235(&iLocal_36);
						Function_235(&iLocal_32);
						Function_357(10, 0);
						break;
					
					case 0x00000000:
						if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && Local_131.f_2300 != 0.0f)
						{
							if (iLocal_31 || bLocal_52)
							{
								Function_308(&iLocal_57, &iVar2, &(Local_131[Function_242(1)45]), 1);
							}
							else
							{
								Function_308(&iLocal_57, &iVar2, &(Local_131[Function_242(1)45]), 0);
							}
						}
						Function_357(11, 0);
						break;
					
					case 0x00000002:
						if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && Local_131.f_2300 != 0.0f)
						{
							if (iLocal_31)
							{
								Function_308(&iLocal_57, &iVar2, &(Local_131[Function_242(1)45]), 1);
							}
							else
							{
								Function_308(&iLocal_57, &iVar2, &(Local_131[Function_242(1)45]), 0);
							}
						}
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(Function_361(1), &Local_131) };
						PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						Function_357(12, 0);
						break;
					
					case 0x00000003:
						NET_LOG(false, "nLiarsDice", "Encountered Linkdead player", 0, 0, 0, 0);
						Function_357(12, 0);
						break;
				}
			}
			else
			{
				Function_357(9, 0);
			}
			Function_305(&Local_131);
			break;
		
		case 0x00000009:
			Local_131.f_2276 = Function_304(&Local_131 + 2168, Local_131.f_2276);
			Function_190();
			Function_357(8, 0);
			Function_305(&Local_131);
			break;
		
		case 0x0000000C:
			iVar3 = Function_361(1);
			Function_303(&Local_131);
			if (Local_131[iVar345].f_120 == 3)
			{
				if (Function_302(&Local_131))
				{
					Function_301(&Local_131, &vLocal_1077 + 8, &vLocal_1077 + 4);
					vLocal_1077 = 6;
				}
				else
				{
					vLocal_1077 = 5;
				}
			}
			if (vLocal_1077.x != 0)
			{
				switch (vLocal_1077.x)
				{
					case 0x00000001:
					case 0x00000006:
						if (Function_350(&iLocal_70, 4))
						{
							Function_143("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						Local_131[iVar345].f_168 = vLocal_1077.z;
						Local_131[iVar345].f_172 = vLocal_1077.y;
						Function_300(&Local_131, iVar3, vLocal_1077.x != 6);
						SET_ACTION_NODE_FOR_ACTOR(&(Local_131[iVar345]), "liars_dice/verbal_bid");
						Function_357(16, 0);
						break;
					
					case 0x00000002:
					case 0x00000005:
						if (Function_350(&iLocal_70, 5))
						{
							Function_143("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						iLocal_55 = 0;
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iVar3, &Local_131) };
						if (vLocal_1077.x == 2)
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_AutoCallOutBluff", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						}
						SET_ACTION_NODE_FOR_ACTOR(&(Local_131[iVar345]), "liars_dice/verbal_callout");
						Function_357(17, 0);
						break;
					
					case 0x00000003:
						if (Function_350(&iLocal_70, 6))
						{
							Function_143("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
						}
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iVar3, &Local_131) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Call_SpotOn", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						iLocal_55 = 1;
						SET_ACTION_NODE_FOR_ACTOR(&(Local_131[iVar345]), "liars_dice/verbal_bid");
						Function_357(17, 0);
						break;
					
					default:
						break;
				}
				Function_235(&iLocal_32);
				vLocal_1077 = 0;
			}
			Function_305(&Local_131);
			break;
		
		case 0x0000000A:
			Function_299();
			iLocal_130 = 2;
			if (bLocal_52)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				bLocal_52 = false;
			}
			bVar20 = (Local_131.f_2288 != Function_298(&Local_131) && Local_131.f_2292 != 6);
			if (bVar20 && Function_350(&iLocal_70, 9))
			{
				Function_143("LiarsDice_MaxBidHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_350(&iLocal_70, 2))
			{
				Function_143("LiarsDice_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			else if (Function_297(&Local_131, Function_361(1)))
			{
				if (Function_350(&iLocal_70, 6))
				{
					Function_143("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			bVar40 = RAND_INT_RANGE(0, true);
			switch (bVar40)
			{
				case 0x00000000:
					iVar41 = Function_304(&Local_131 + 2168, Local_131.f_2276);
					break;
				
				case 0x00000001:
					iVar41 = Function_296(&Local_131 + 2168, Local_131.f_2276);
					break;
			}
			if (!iVar41 != 4294967295 && !iVar41 != Local_131.f_2276)
			{
				bVar42 = RAND_INT_RANGE(0, (100 * CEIL(Function_232(&iLocal_36))));
				if (bVar42 > 30 && Function_232(&iLocal_32) < 4.0f)
				{
					if (IS_ACTION_NODE_PLAYING(&(Local_131[Function_243(iVar41, 1)45]), "liars_dice/cup_idle"))
					{
						if (!bLocal_52)
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_131[Function_243(iVar41, 1)45]), "liars_dice/check_lift");
						}
						Function_235(&iLocal_32);
					}
				}
				else if (Function_232(&iLocal_32) < 1.0f)
				{
					if (IS_ACTION_NODE_PLAYING(&(Local_131[Function_243(iVar41, 1)45]), "liars_dice/check_idle"))
					{
						if (!bLocal_52)
						{
							SET_ACTION_NODE_FOR_ACTOR(&(Local_131[Function_243(iVar41, 1)45]), "liars_dice/check_close");
						}
						Function_235(&iLocal_32);
					}
				}
			}
			if (!bVar20)
			{
				Function_292(&Local_131);
				Function_303(&Local_131);
			}
			else
			{
				Function_291(&Local_131);
			}
			if (!HUD_IS_SHOWING_HELP_TEXT() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_232(&iLocal_40) < 8.0f)
				{
					if (Local_131.f_2288 == 0)
					{
						Function_290("LiarsDice_EnterFirstBid", -1.0f, 1, 2, 0, 0, 0, 0);
					}
					else if (bVar20)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_MaxBid", Function_347(Local_131.f_2288), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					else if (Local_131.f_2288 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid_Single", Function_347(Local_131.f_2288), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(-1.0f, "LiarsDice_RaiseBid", Function_347(Local_131.f_2288), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			Function_285(&Local_131, bVar20);
			if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iLocal_57) || CAMERA_GET_CURRENT_TRANSITION_TYPE(&iLocal_57) != 1)
			{
				Function_284(&iLocal_57, &Local_131, Function_242(1), 0);
			}
			if (UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0))
			{
				if (!IS_ACTION_NODE_PLAYING(&iVar2, "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&iVar2, "liars_dice/check_sweep");
					fLocal_66 = 0.0f;
					fLocal_69 = -1.0f;
				}
				Function_283(&iLocal_57, &Local_131, Function_361(1), 1);
				Function_357(15, 0);
				Function_282(1);
			}
			else
			{
				Function_282(0);
			}
			break;
		
		case 0x0000000F:
			Function_299();
			fLocal_752 = (fLocal_752 + fVar23);
			if ((!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && Local_131.f_2300 >= 0.0f) || bLocal_52)
			{
				Function_357(10, 0);
				Function_281(&iLocal_57, &Local_131, Function_361(1), 1, 0.0f);
				Function_280();
				SET_ACTION_NODE_FOR_ACTOR(&iVar2, "liars_dice/cup_idle");
			}
			else
			{
				Function_283(&iLocal_57, &Local_131, Function_361(1), 1);
			}
			Function_279(&Local_131, &iVar2);
			bVar20 = (Local_131.f_2288 != Function_298(&Local_131) && Local_131.f_2292 != 6);
			if (!bVar20)
			{
				Function_292(&Local_131);
				Function_303(&Local_131);
			}
			else
			{
				Function_291(&Local_131);
			}
			Function_285(&Local_131, bVar20);
			break;
		
		case 0x00000010:
			if ((Function_232(&iLocal_32) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				Function_4();
				Function_357(9, 1);
			}
			else
			{
				Function_303(&Local_131);
			}
			Function_305(&Local_131);
			break;
		
		case 0x0000000B:
			Function_235(&iLocal_32);
			if (Function_276(&Local_131, Function_361(1)))
			{
				if (Function_350(&iLocal_70, 4))
				{
					Function_143("LiarsDice_AIBidHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_357(16, 0);
			}
			else
			{
				if (Function_350(&iLocal_70, 5))
				{
					Function_143("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				Function_357(17, 0);
			}
			Function_305(&Local_131);
			break;
		
		case 0x00000011:
			iLocal_130 = 3;
			if ((Function_232(&iLocal_32) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				if (Function_350(&iLocal_70, 7))
				{
					Function_143("LiarsDice_RevealHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				if (IS_ACTION_NODE_PLAYING(&(Local_131[Function_242(1)45]), "liars_dice/check_sweep"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&(Local_131[Function_242(1)45]), "liars_dice/cup_idle");
				}
				Function_190();
				Function_323(&iLocal_57);
				if (!bLocal_52)
				{
					iVar0 = 0;
					while (iVar0 <= 6)
					{
						if ((*&Local_131 + 2168)[iVar02])
						{
							if (Function_322(&Local_131, Function_243(iVar0, 1)))
							{
								if (0 && Local_131[Function_243(iVar0, 1)45].f_120 == 1)
								{
									Function_275(Function_243(iVar0, 1));
								}
								SET_ACTION_NODE_FOR_ACTOR(&(Local_131[Function_243(iVar0, 1)45]), "liars_dice/cup_reveal");
							}
						}
						iVar0++;
					}
				}
				Function_235(&iLocal_32);
				iLocal_63 = Local_131.f_2276;
				bLocal_74 = false;
				Function_357(18, 1);
			}
			else
			{
				Function_291(&Local_131);
				Function_305(&Local_131);
			}
			break;
		
		case 0x00000012:
			if (((IS_ACTION_NODE_PLAYING(&(Local_131[Function_361(1)45]), "liars_dice/idle") && Function_232(&iLocal_32) < 2.0f) && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				Function_274(&iLocal_57, &Local_131, Function_361(1), 1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				bVar43 = Function_273(&(vLocal_753[Function_319(&Local_131, Function_361(1))9]), Local_131.f_2292);
				bLocal_74 = (bLocal_74 + bVar43);
				if (Function_361(1) == Function_242(1))
				{
					if (bVar43 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_None", Function_272(), Function_289(Local_131.f_2292), I2STR(bLocal_74), 0, 0, 2, 0, 0, 0);
					}
					else if (bVar43 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show_Single", Function_272(), Function_347(bVar43), Function_289(Local_131.f_2292), I2STR(bLocal_74), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_You_Show", Function_272(), Function_347(bVar43), Function_289(Local_131.f_2292), I2STR(bLocal_74), 0, 2, 0, 0, 0);
					}
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(Function_361(1), &Local_131) };
					if (bVar43 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_None", &Var4, Function_289(Local_131.f_2292), I2STR(bLocal_74), 0, 0, 2, 0, 0, 0);
					}
					else if (bVar43 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show_Single", &Var4, Function_347(bVar43), Function_289(Local_131.f_2292), I2STR(bLocal_74), 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Show", &Var4, Function_347(bVar43), Function_289(Local_131.f_2292), I2STR(bLocal_74), 0, 2, 0, 0, 0);
					}
				}
				Function_235(&iLocal_32);
				Function_357(19, 0);
			}
			else
			{
				Function_291(&Local_131);
			}
			break;
		
		case 0x00000013:
			if ((Function_232(&iLocal_32) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				Local_131.f_2276 = Function_271(&Local_131, Local_131.f_2276);
				if (Local_131.f_2276 != iLocal_63 || (bLocal_74 <= Local_131.f_2288 && !iLocal_55))
				{
					Local_131.f_2276 = iLocal_63;
					Function_357(20, 1);
				}
				else
				{
					Function_357(18, 0);
				}
			}
			else
			{
				Function_291(&Local_131);
			}
			break;
		
		case 0x00000014:
			Function_323(&iLocal_57);
			bVar44 = Function_270(&Local_131, Local_131.f_2292);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (iLocal_55)
			{
				if (bVar44 == Local_131.f_2288)
				{
					iVar45 = Local_131[Function_361(1)45].f_124;
					iLocal_64 = StackVal;
					if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn_Single", Function_347(bVar44), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Bid_SpotOn", Function_347(bVar44), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					Function_235(&iLocal_32);
					Function_357(21, 1);
				}
				else
				{
					iLocal_64 = Local_131.f_2296;
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_None", Function_289(Local_131.f_2292), 0, 0, 0, 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn_Single", Function_347(bVar44), Function_289(Local_131.f_2292), 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_SpotOn", Function_347(bVar44), Function_289(Local_131.f_2292), 0, 0, 0, 2, 0, 0, 0);
					}
					Function_235(&iLocal_32);
					Function_357(22, 1);
				}
			}
			else
			{
				iLocal_64 = Local_131.f_2296;
				if (bVar44 <= Local_131.f_2288)
				{
					if (bVar44 == 0)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_None", Function_289(Local_131.f_2292), "", "", "", 0, 2, 0, 0, 0);
					}
					else if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong_Single", Function_347(bVar44), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidWrong", Function_347(bVar44), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					Function_235(&iLocal_32);
					Function_357(21, 1);
				}
				else
				{
					if (bVar44 == 1)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight_Single", Function_347(Local_131.f_2288), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BidRight", Function_347(Local_131.f_2288), Function_289(Local_131.f_2292), "", "", 0, 2, 0, 0, 0);
					}
					Function_235(&iLocal_32);
					Function_357(22, 1);
				}
			}
			break;
		
		case 0x00000015:
			if ((Function_232(&iLocal_32) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				if (Function_350(&iLocal_70, 8))
				{
					Function_143("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iLocal_64, &Local_131) };
				if (iLocal_55)
				{
					if (Function_313(&Local_131, iLocal_64) >= 1)
					{
						if (iLocal_64 == Function_242(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_SpotOn", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_64 == Function_242(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_SpotOn", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
					}
				}
				else if (Function_313(&Local_131, iLocal_64) >= 1)
				{
					if (iLocal_64 == Function_242(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesDie", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_64 == Function_242(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_BlufferLosesLastDie", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
				}
				Function_357(23, 0);
			}
			else
			{
				Function_291(&Local_131);
			}
			break;
		
		case 0x00000016:
			if ((Function_232(&iLocal_32) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				if (Function_350(&iLocal_70, 8))
				{
					Function_143("LiarsDice_LoseDieHelp", 9.0f, 1, 0, 2, 1, 0);
				}
				iLocal_64 = Function_361(1);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iLocal_64, &Local_131) };
				if (iLocal_55)
				{
					if (Function_313(&Local_131, Function_361(1)) >= 1)
					{
						if (iLocal_64 == Function_242(1))
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_SpotOn", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						}
					}
					else if (iLocal_64 == Function_242(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_SpotOn", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
					}
					iLocal_55 = 0;
				}
				else if (Function_313(&Local_131, Function_361(1)) >= 1)
				{
					if (iLocal_64 == Function_242(1))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesDie", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
					}
				}
				else if (iLocal_64 == Function_242(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallerLosesLastDie", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
				}
				Function_357(23, 0);
			}
			else
			{
				Function_291(&Local_131);
			}
			break;
		
		case 0x00000017:
			Function_269(&iLocal_57, &(Local_131[iLocal_6445]));
			Function_267(&Local_131, iLocal_64);
			if (Function_313(&Local_131, Function_361(1)) >= 0)
			{
				if (!HUD_IS_FADED())
				{
					if (iLocal_64 == Function_242(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_131[iLocal_6445]), 480, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_266())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_131[iLocal_6445]), 277, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_131[Function_242(1)45]), 481, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			else if (iLocal_64 == Function_242(1))
			{
				if (!HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_131[iLocal_6445]), 482, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			else
			{
				if (!HUD_IS_FADED())
				{
					if (Function_266())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_131[iLocal_6445]), 279, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_131[Function_242(1)45]), 483, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_226(50) && Local_79 != Function_221(Global_46816[1], 7, 4))
				{
					Function_219(64, 1, 0);
				}
			}
			Function_357(25, 0);
			break;
		
		case 0x00000019:
			if (1 | Function_265(Function_319(&Local_131, iLocal_64)))
			{
				Function_263();
				Function_235(&iLocal_32);
				iLocal_65 = Function_313(&Local_131, iLocal_64);
				uLocal_747 = ATTACH_OBJECTS(StackVal, StackVal, &Local_131[iLocal_6445] + 72[iLocal_65], GET_OBJECT_FROM_ACTOR(&(Local_131[iLocal_6445])), "hip_l_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				SET_ACTION_NODE_FOR_ACTOR(&(Local_131[iLocal_6445]), "liars_dice/dice_toss");
				Function_357(24, 0);
			}
			break;
		
		case 0x00000018:
			if (IS_ACTION_NODE_PLAYING(&(Local_131[iLocal_6445]), "liars_dice/idle") || bLocal_52)
			{
				if (IS_ATTACHMENT_VALID(&uLocal_747))
				{
					REMOVE_OBJECT_ATTACHMENT(&uLocal_747);
					SET_OBJECT_POSITION(&Local_131[iLocal_6445] + 72[iLocal_65], *(&Local_131[iLocal_6445] + 176[iLocal_652]));
					SET_OBJECT_ORIENTATION(&Local_131[iLocal_6445] + 72[iLocal_65], *(&Local_131[iLocal_6445] + 264[iLocal_652]));
					bVar46 = RAND_INT_RANGE(1, 6);
					Function_310(bVar46, &Local_131[iLocal_6445] + 72[iLocal_65]);
				}
				if (iLocal_55)
				{
					if (iLocal_64 == Local_131.f_2296)
					{
						iLocal_55 = 0;
					}
					else
					{
						iVar47 = Local_131[iLocal_6445].f_124;
						iVar48 = iLocal_64;
						iLocal_64 = Function_243(Function_271(&Local_131, iVar47), 1);
						Function_357(21, 0);
					}
				}
				else if (!HUD_IS_SHOWING_HELP_TEXT() || bLocal_52)
				{
					if (Function_260(&(Local_131[Function_242(1)45])) && Function_259(&Local_131) < 1)
					{
						Local_131.f_2276 = Local_131[iLocal_6445].f_124;
						Function_357(3, 0);
					}
					else
					{
						Function_357(27, 0);
					}
				}
			}
			break;
		
		case 0x0000001B:
			if (Function_259(&Local_131) == 1)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if ((*&Local_131 + 2168)[iVar02])
					{
						if (Function_322(&Local_131, Function_243(iVar0, 1)))
						{
							iVar49 = Function_243(iVar0, 1);
						}
					}
					iVar0++;
				}
				Function_269(&iLocal_57, &(Local_131[iVar4945]));
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iVar49, &Local_131) };
				if (iVar49 == Function_242(1))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_Winner", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
				}
				if (!HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(&(Local_131[iVar4945]), 278, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (iVar49 == Function_242(1))
				{
					bLocal_30 = true;
					Function_124((Local_79.f_76 * Function_258(&Local_131)), 1, 1);
					PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
					bVar50 = Function_313(&Local_131, Function_242(1));
					PRINTSTRING("Player has won and he has a die count of ");
					PRINTINT(bVar50);
					PRINTNL();
					if (bVar50 == 5)
					{
						Function_93(431, 1, 0, 0);
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(10))
						{
							AWARD_ACHIEVEMENT(10);
						}
					}
					if (!HUD_IS_FADED())
					{
						SAY_SINGLE_LINE_CONTEXT(&(Local_131[Function_242(1)45]), 484, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					Function_93(429, ((Local_79.f_76 * Function_258(&Local_131)) - Local_79.f_76), 0, 0);
					Function_93(450, ((Local_79.f_76 * Function_258(&Local_131)) - Local_79.f_76), 0, 0);
					if ((Function_71(597) + Function_71(450)) >= 10000)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
						{
							AWARD_ACHIEVEMENT(24);
						}
					}
				}
				else
				{
					Function_93(430, 1, 0, 0);
					Function_122(429, Local_79.f_76, 0);
					Function_122(450, Local_79.f_76, 0);
					bVar51 = DECOR_GET_INT(&(Local_131[iVar4945]), "iAdditionalMoney");
					DECOR_SET_INT(&(Local_131[iVar4945]), "iAdditionalMoney", (bVar51 + (Local_79.f_76 * Function_257(&Local_131))));
				}
				Function_235(&iLocal_32);
			}
			else
			{
				Function_93(430, 1, 0, 0);
				Function_122(429, Local_79.f_76, 0);
				Function_122(450, Local_79.f_76, 0);
				Local_131.f_2284 = 0;
			}
			Function_256(&Local_131);
			Function_357(29, 1);
			break;
		
		case 0x0000001D:
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				if ((*&Local_131 + 2168)[iVar02])
				{
					Function_255(&Local_131, Function_243(iVar0, 1), 5);
				}
				iVar0++;
			}
			Function_357(30, 0);
			break;
		
		case 0x0000001E:
			if (1 | Function_253())
			{
				Function_263();
				Function_357(28, 0);
			}
			break;
		
		case 0x0000001C:
			if ((Function_232(&iLocal_32) < 3.0f && !HUD_IS_SHOWING_HELP_TEXT()) || bLocal_52)
			{
				Function_269(&iLocal_57, Function_188());
				Local_131.f_2276 = Local_131.f_2280;
				Function_357(0, 1);
			}
			break;
		
		case 0x0000001F:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_188()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_188()), "bQuitMinigame"))
				{
					if (bLocal_30)
					{
						Function_194(0);
					}
					else
					{
						Function_194(1);
					}
				}
				else
				{
					Function_357(iLocal_128, 0);
				}
				UI_EXIT("Liarsdice_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_188()), "bQuitMinigame");
			}
			break;
	}
	Function_252(&Local_131);
	Function_251(&Local_131, Function_242(1));
	if ((UNK_0x973F30EE("@UI.CANCELMINIGAME", 1, 0) && !HUD_IS_FADING()) && !HUD_IS_FADED())
	{
		if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_188()), "bQuitMinigame"))
		{
			UI_ENTER("Liarsdice_Quit_Confirmation_Popup");
		}
		iLocal_128 = iLocal_127;
		iLocal_127 = 31;
	}
	Function_190();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_130)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(2, "{@MINIGAME.SKIP_HELP}", "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_247(1, "{@LIARS_DICE.ANTE}", "LiarsDice_Ante", 1, 0, 0, 0, 0);
				Function_247(0, "{@UI.CANCELMINIGAME}", "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(4, "{@MINIGAME.SKIP_HELP}", "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_247(3, "{@MINIGAME.LOOK_AT_HAND}", "LiarsDice_Look", 1, 0, 0, 0, 0);
				Function_247(1, "{@MINIGAME.SKIP_TO_PLAYER}", "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_247(0, "{@UI.CANCELMINIGAME}", "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(3, "{@MINIGAME.SKIP_HELP}", "LiarsDice_SkipHelp", 1, 0, 0, 0, 0);
				}
				Function_247(1, "{@MINIGAME.SKIP_TO_PLAYER}", "LiarsDice_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_247(0, "{@UI.CANCELMINIGAME}", "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0))
				{
					Function_247(8, "{@MINIGAME.LOOK_AROUND} {@CAMERA.LEFT}{@CAMERA.RIGHT}", "LiarsDice_LookAround", 1, 0, 0, 0, 0);
				}
				Function_247(7, "{@MINIGAME.LOOK_AT_HAND}", "LiarsDice_Look", 1, 0, 0, 0, 0);
				if (!bVar20)
				{
					Function_247(5, "{@MINIGAME.INCREASE_BET}{@MINIGAME.DECREASE_BET}", "LiarsDice_DieAmount", 1, 0, 0, 0, 0);
					Function_247(4, "{@LIARS_DICE.CHANGE_DICE_UP}{@LIARS_DICE.CHANGE_DICE_DOWN}", "LiarsDice_DieType", 1, 0, 0, 0, 0);
				}
				if (Local_131.f_2296 != 4294967295)
				{
					Function_247(3, "{@LIARS_DICE.ANTE}", "LiarsDice_CallBluff", 1, 0, 0, 0, 0);
					Function_247(2, "{@LIARS_DICE.SPOT_ON}", "LiarsDice_SpotOn", 1, 0, 0, 0, 0);
				}
				if (!bVar20)
				{
					Function_247(1, "{@UI.ACCEPT}", "LiarsDice_Bid", 1, 0, 0, 0, 0);
				}
				Function_247(0, "{@UI.CANCELMINIGAME}", "LiarsDice_Quit", 1, 0, 0, 0, 0);
				break;
			}
	}
	fLocal_751 = GET_CURRENT_GAME_TIME();
	return;
}

int Function_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE7C2 / 59330
{
	if (!Function_250(uParam0, &iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_249(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_248(uParam0, &iParam2);
}

int Function_248(var uParam0, int iParam1) //Position: 0xE805 / 59397
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE814 / 59412
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_250(var uParam0, int iParam1) //Position: 0xE853 / 59475
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

void Function_251(struct<45>[] Param0, int iParam1) //Position: 0xE862 / 59490
{
	if (iParam1 >= 4294967295)
	{
		SET_CURRENT_MINIGAME_INT("_pxxChipsAmount", Param0[iParam145].f_128);
	}
	return;
}

void Function_252(struct<2285> Param0) //Position: 0xE88D / 59533
{
	SET_CURRENT_MINIGAME_INT("_pxxPotAmount", Param0.f_2284);
	return;
}

int Function_253() //Position: 0xE8AD / 59565
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_753, bVar0))
		{
			if (!Function_254(&(uLocal_1043[bVar0]), &vLocal_753[bVar09] + 56))
			{
				return 0;
			}
			iVar1 = 1;
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_254(var uParam0, int iParam1) //Position: 0xE8F2 / 59634
{
	return uParam0 == iParam1;
}

void Function_255(struct<45>[] Param0, int iParam1, int iParam2) //Position: 0xE901 / 59649
{
	int iVar0;
	
	if (1 || Param0[iParam145].f_120 != 1)
	{
		iVar0 = Function_319(&Param0, iParam1);
		vLocal_753[iVar09].f_48 = iParam2;
		Function_318(&vLocal_753[iVar09] + 56);
	}
	return;
}

void Function_256(struct<45> Param0) //Position: 0xE938 / 59704
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_2168)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			Function_241(&Param0[StackVal45] + 72, 5);
		}
		iVar0++;
	}
	return;
}

int Function_257(struct<45>[] Param0) //Position: 0xE979 / 59769
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			if (Function_260(&(Param0[Function_243(iVar0, 1)45])))
			{
				if (Param0[Function_243(iVar0, 1)45].f_128 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_258(int iParam0) //Position: 0xE9CB / 59851
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&iParam0 + 2168)[iVar02])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_259(int iParam0) //Position: 0xE9FB / 59899
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&iParam0 + 2168)[iVar02])
		{
			if (Function_322(&iParam0, Function_243(iVar0, 1)))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_260(int iParam0) //Position: 0xEA3A / 59962
{
	return Function_261(&iParam0) < 0;
}

int Function_261(int iParam0) //Position: 0xEA48 / 59976
{
	return vLocal_753[Function_262(&iParam0)9].f_48;
}

int Function_262(struct<125> Param0) //Position: 0xEA5B / 59995
{
	return Param0.f_124;
}

void Function_263() //Position: 0xEA66 / 60006
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&vLocal_753, bVar0))
		{
			Function_264(&(uLocal_1043[bVar0]), &vLocal_753[bVar09] + 56);
		}
		bVar0++;
	}
	return;
}

void Function_264(var uParam0, int iParam1) //Position: 0xEA9D / 60061
{
	uParam0 = iParam1;
	return;
}

bool Function_265(int iParam0) //Position: 0xEAAB / 60075
{
	return Function_254(&(uLocal_1043[iParam0]), &vLocal_753[iParam09] + 56);
}

bool Function_266() //Position: 0xEAC4 / 60100
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(0, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

void Function_267(struct<45>[] Param0, int iParam1) //Position: 0xEADF / 60127
{
	if (Param0[iParam145].f_120 == 2)
	{
		return;
	}
	Function_268(&Param0, iParam1, 4294967295);
	return;
}

void Function_268(int iParam0, int iParam1, int iParam2) //Position: 0xEAFC / 60156
{
	int iVar0;
	
	iVar0 = Function_319(&iParam0, iParam1);
	vLocal_753[iVar09].f_48 = (vLocal_753[iVar09].f_48 + iParam2);
	Function_318(&vLocal_753[iVar09] + 56);
	return;
}

void Function_269(int iParam0, int iParam1) //Position: 0xEB2D / 60205
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	
	GET_POSITION(&iParam1, &Var0);
	GET_ACTOR_AXIS(&iParam1, &Var2, 2);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(-1,1f, -1,1f, -1,1f), StackVal, StackVal);
	Var4.f_4 = (StackVal + 1,1f);
	Var6 = Var0;
	Var6.f_4 = (StackVal + 1,05f);
	SET_CAMERA_POSITION(&iParam0, Var4);
	SET_CAMERA_TARGET_POSITION(&iParam0, Var6, 0);
	SET_CAMERA_FOV(&iParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_31 = 1;
	return;
}

var Function_270(int iParam0, int iParam1) //Position: 0xEBBD / 60349
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&iParam0 + 2168)[iVar02])
		{
			iVar1 = (iVar1 + Function_273(&(vLocal_753[Function_319(&iParam0, Function_243(iVar0, 1))9]), iParam1));
		}
		iVar0++;
	}
	return iVar1;
}

int Function_271(int iParam0, int iParam1) //Position: 0xEC02 / 60418
{
	int iVar0;
	
	iVar0 = Function_304(&iParam0 + 2168, iParam1);
	while (!Function_322(&iParam0, Function_243(iVar0, 1)) && iVar0 == iParam1)
	{
		iVar0 = Function_304(&iParam0 + 2168, iVar0);
	}
	if (iParam1 == iVar0)
	{
		return 4294967295;
	}
	return iVar0;
}

var Function_272() //Position: 0xEC49 / 60489
{
	UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	return "Generic_DBuffer32_0";
}

bool Function_273(var uParam0, int iParam1) //Position: 0xEC8B / 60555
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= uParam0.f_48)
	{
		if (uParam0[iVar0] == iParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void Function_274(var uParam0, struct<45>[] Param1, int iParam2, bool bParam3) //Position: 0xECBE / 60606
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<2> Var11;
	struct<2> Var13;
	
	iVar6 = Param1[iParam245].f_124;
	GET_OBJECT_POSITION(&Param1 + 2168[iVar62] + 8, &Var0);
	GET_OBJECT_AXIS(&Param1 + 2168[iVar62] + 8, &Var2, 2);
	GET_OBJECT_AXIS(&Param1 + 2168[iVar62] + 8, &Var4, 0);
	if (ACTOR_HAS_ANIM_SET(&(Param1[iParam245]), "liars_dice"))
	{
		fVar7 = -0,26f;
		fVar8 = 1.0f;
		fVar9 = 0,83f;
		fVar10 = 0,08f;
	}
	else if (ACTOR_HAS_ANIM_SET(&(Param1[iParam245]), "liars_dice_gped"))
	{
		fVar7 = -0,26f;
		fVar8 = 1.0f;
		fVar9 = 0,63f;
		fVar10 = 0,07f;
	}
	else if (ACTOR_HAS_ANIM_SET(&(Param1[iParam245]), "liars_dice_hillb"))
	{
		fVar7 = -0,13f;
		fVar8 = 1.0f;
		fVar9 = 0,93f;
		fVar10 = 0,06f;
	}
	else
	{
		fVar7 = -0,26f;
		fVar8 = 1.0f;
		fVar9 = 0,83f;
		fVar10 = 0,08f;
	}
	Var11 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(fVar9, fVar9, fVar9), StackVal, StackVal);
	Var11.f_4 = (StackVal + fVar8);
	Var11 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var11, StackVal) * Vector(fVar7, fVar7, fVar7), StackVal, StackVal);
	GET_OBJECT_POSITION(&Param1[iParam245] + 72[0], &Var13);
	Var13.f_4 = (StackVal + fVar10);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var11);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var13, 0);
	SET_CAMERA_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	if (bParam3)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_31 = 1;
}

void Function_275(int iParam0) //Position: 0xEE99 / 61081
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	iVar1 = Function_313(&Local_131, iParam0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (!GET_OBJECT_POSITION(&Local_131[iParam045] + 72[iVar0], &Var2))
		{
		}
		if (!GET_OBJECT_ORIENTATION(&Local_131[iParam045] + 72[iVar0], &Var4))
		{
		}
		DESTROY_OBJECT(&Local_131[iParam045] + 72[iVar0]);
		*(&Local_131[iParam045] + 72[iVar0]) = CREATE_PROP_IN_LAYOUT(&cLocal_28, Function_58(), "$/fragments/p_gen_dice01x", Var2, Var4, 0);
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

bool Function_276(struct<45> Param0) //Position: 0xEF3D / 61245
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<16> Var5;
	bool bVar21;
	bool bVar22;
	
	bVar0 = Function_273(&(vLocal_753[Function_319(&Param0, iParam1)9]), Param0.f_2292);
	bVar1 = (Function_298(&Param0) - Function_313(&Param0, iParam1));
	bVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (Param0.f_2288 == 1)
	{
		bVar3 = 1,8f;
	}
	else
	{
		bVar3 = (TO_FLOAT((Param0.f_2288 - bVar0)) / bVar2);
	}
	if (Function_298(&Param0) <= ((5 * Param0.f_2272) / 2))
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = 2;
	}
	PRINTSTRING("Last bid was ");
	PRINTINT(Param0.f_2288);
	PRINTSTRING(" ");
	PRINTINT(Param0.f_2292);
	PRINTNL();
	PRINTSTRING("-------- DO WE CALL OUT BLUFF --------");
	PRINTNL();
	PRINTSTRING("AI has ");
	PRINTINT(bVar0);
	PRINTSTRING(" of ");
	PRINTINT(Param0.f_2292);
	PRINTSTRING("n in hand.");
	PRINTNL();
	PRINTSTRING("iNumMaxDie is ");
	PRINTINT(bVar1);
	PRINTNL();
	PRINTSTRING("iBidApex is ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	PRINTSTRING("fOverBidRatio is ");
	PRINTFLOAT(bVar3);
	PRINTNL();
	Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iParam1, &Param0) };
	if (bVar3 < 1,8f)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		HUD_CLEAR_OBJECTIVE();
		PRINT_OBJECTIVE_FORMAT(4.0f, "LiarsDice_CallOutBluff", &Var5, 0, 0, 0, 0, 2, 0, 0, 0);
		if (!HUD_IS_FADED())
		{
			if (Function_266())
			{
				SAY_SINGLE_LINE_CONTEXT(&(Param0[iParam145]), 275, Function_188(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else if (Param0[Function_242(1)45].f_168 != Param0.f_2288 && Param0[Function_242(1)45].f_172 != Param0.f_2292)
			{
				SAY_SINGLE_LINE_CONTEXT(&(Param0[Function_242(1)45]), 489, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
		if (IS_AMBIENT_SPEECH_PLAYING(&(Param0[iParam145])))
		{
			SET_ACTION_NODE_FOR_ACTOR(&(Param0[iParam145]), "liars_dice/verbal_callout");
		}
		return 0;
	}
	bVar21 = Function_278(&(vLocal_753[Function_319(&Param0, iParam1)9]));
	bVar0 = Function_273(&(vLocal_753[Function_319(&Param0, iParam1)9]), bVar21);
	bVar1 = (Function_298(&Param0) - Function_313(&Param0, iParam1));
	bVar2 = TO_FLOAT((bVar1 / 5));
	Param0[iParam145].f_168 = (Param0.f_2288 + RAND_INT_RANGE(1, bVar4));
	Param0[iParam145].f_172 = bVar21;
	bVar3 = (TO_FLOAT((Param0[iParam145].f_168 - bVar0)) / bVar2);
	PRINTSTRING("-------- DO WE BID REAL OR BLUFF --------");
	PRINTNL();
	PRINTSTRING("AI has ");
	PRINTINT(bVar0);
	PRINTSTRING(" of ");
	PRINTINT(bVar21);
	PRINTSTRING("n in hand.");
	PRINTNL();
	PRINTSTRING("iNumMaxDie is ");
	PRINTINT(bVar1);
	PRINTNL();
	PRINTSTRING("iBidApex is ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	PRINTSTRING("fOverBidRatio is ");
	PRINTFLOAT(bVar3);
	PRINTNL();
	if (bVar3 < 1,5f)
	{
		if (Param0.f_2292 <= 6)
		{
			Param0[iParam145].f_172 = RAND_INT_RANGE(Param0.f_2292 + 1, 6);
			bVar0 = Function_273(&(vLocal_753[Function_319(&Param0, iParam1)9]), Param0[iParam145].f_172);
			Param0[iParam145].f_168 = (Param0.f_2288 + RAND_INT_RANGE(0, bVar4));
			bVar3 = (TO_FLOAT((Param0[iParam145].f_168 - bVar0)) / bVar2);
		}
		if (bVar3 < 1,5f)
		{
			PRINTSTRING("AI Bluffing");
			PRINTNL();
			bVar22 = RAND_INT_RANGE(0, true);
			if (bVar22 == 0)
			{
				PRINTSTRING("Bluffing with iMostCommonType");
				PRINTNL();
				Param0[iParam145].f_172 = bVar21;
			}
			else
			{
				PRINTSTRING("Bluffing with previous made bid type");
				PRINTNL();
				Param0[iParam145].f_172 = Function_277(&Param0);
			}
			if (Param0[iParam145].f_172 != Param0.f_2292)
			{
				bVar4 = true;
			}
			Param0[iParam145].f_168 = (Param0.f_2288 + RAND_INT_RANGE(1, bVar4));
		}
	}
	else
	{
		PRINTSTRING("AI Bids With Confidence");
		PRINTNL();
	}
	Function_300(&Param0, iParam1, 0);
	if (!HUD_IS_FADED())
	{
		if (Function_266())
		{
			SAY_SINGLE_LINE_CONTEXT(&(Param0[iParam145]), 276, Function_188(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&(Param0[Function_242(1)45]), 490, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
	}
	if (IS_AMBIENT_SPEECH_PLAYING(&(Param0[iParam145])))
	{
		SET_ACTION_NODE_FOR_ACTOR(&(Param0[iParam145]), "liars_dice/verbal_bid");
	}
	PRINTSTRING("AI Bids ");
	PRINTINT(Param0[iParam145].f_168);
	PRINTSTRING(" ");
	PRINTINT(Param0[iParam145].f_172);
	PRINTNL();
	return 1;
}

var Function_277(struct<45>[] Param0) //Position: 0xF4BC / 62652
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = RAND_INT_RANGE(0, 10);
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 1;
	while (iVar1 <= bVar0)
	{
		if ((*&Param0 + 2168)[Param0[iVar245].f_1242])
		{
			if (Function_322(&Param0, iVar2))
			{
				if (Param0[iVar245].f_172 <= 1 && Param0[iVar245].f_172 >= 6)
				{
					iVar3 = Param0[iVar245].f_172;
					iVar1++;
				}
			}
		}
		iVar2++;
		if (iVar2 > 6)
		{
			iVar2 = 0;
		}
	}
	return iVar3;
}

var Function_278(int iParam0) //Position: 0xF538 / 62776
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 1;
	while (iVar2 < 6)
	{
		iVar3 = Function_273(&iParam0, iVar2);
		if (iVar3 >= iVar1)
		{
			iVar1 = iVar3;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

void Function_279(struct<2301> Param0) //Position: 0xF571 / 62833
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0))
	{
		fVar0 = 1.0f;
	}
	else
	{
		fVar0 = 0.0f;
	}
	bVar1 = (fVar0 - Param0.f_2300);
	if (FABS(bVar1) > 0,1f)
	{
		bVar1 = 0.0f;
	}
	if (fVar0 != 0.0f)
	{
		bVar1 = -1.0f;
	}
	fVar2 = (1.0f * bVar1);
	fVar3 = 0.0f;
	fVar4 = ((-fLocal_66 * fLocal_25) * 0,03333333f);
	fLocal_67 = (((fLocal_66 + (fVar2 / fLocal_26)) + fVar4) + fVar3);
	fLocal_68 = (fLocal_69 + (fLocal_67 * bLocal_745));
	if (fLocal_68 > -1.0f)
	{
		fLocal_67 = 0.0f;
		fLocal_68 = -1.0f;
	}
	else if (fLocal_68 < 1.0f)
	{
		fLocal_67 = 0.0f;
		fLocal_68 = 1.0f;
	}
	Param0.f_2300 = ((fLocal_68 / 2.0f) + 0,5f);
	fLocal_66 = fLocal_67;
	fLocal_69 = fLocal_68;
	SET_PANIM_PHASE(&iParam1, Param0.f_2300);
	return;
}

void Function_280() //Position: 0xF63B / 63035
{
	fLocal_10 = 0.0f;
	fLocal_11 = 0.0f;
	fLocal_12 = 0.0f;
	fLocal_13 = 0.0f;
	return;
}

void Function_281(var uParam0, struct<45>[] Param1, int iParam2, bool bParam3, bool bParam4) //Position: 0xF64D / 63053
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	struct<2> Var14;
	struct<2> Var16;
	struct<2> Var18;
	
	GET_POSITION(&(Param1[iParam245]), &Var0);
	GET_ACTOR_AXIS(&(Param1[iParam245]), &Var2, 2);
	GET_ACTOR_AXIS(&(Param1[iParam245]), &Var4, 0);
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var6.f_4 = (StackVal + 1,4f);
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var6, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var8.f_4 = (StackVal + 0,85f);
	iVar10 = Function_304(&Param1 + 2168, Param1[iParam245].f_124);
	iVar11 = Function_296(&Param1 + 2168, Param1[iParam245].f_124);
	if (bParam4 > 0.0f)
	{
		if (iVar10 != 4294967295 || iVar10 != Param1[iParam245].f_124)
		{
			bParam4 = 0.0f;
		}
		else
		{
			SET_DRAW_ACTOR(&(Param1[iParam245]), 1);
			GET_OBJECT_POSITION(&Param1[StackVal45] + 152, &Var12);
			Var16 = Vector(StackVal, StackVal, StackVal) - Vector(Var8, Var12, StackVal);
			Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS(bParam4)), Var16, Var8), StackVal, StackVal);
			Var18 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var12, StackVal);
			Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS((bParam4 * 0,65f))), Var18, Var6), StackVal, StackVal);
		}
	}
	else if (bParam4 < 0.0f)
	{
		if (iVar11 != 4294967295 || iVar11 != Param1[iParam245].f_124)
		{
			bParam4 = 0.0f;
		}
		else
		{
			SET_DRAW_ACTOR(&(Param1[iParam245]), 0);
			GET_OBJECT_POSITION(&Param1[StackVal45] + 152, &Var14);
			Var16 = Vector(StackVal, StackVal, StackVal) - Vector(Var8, Var14, StackVal);
			Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS(bParam4)), Var16, Var8), StackVal, StackVal);
			Var18 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var14, StackVal);
			Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(FABS((bParam4 * 0,65f))), Var18, Var6), StackVal, StackVal);
		}
	}
	else
	{
		SET_DRAW_ACTOR(&(Param1[iParam245]), 1);
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var6);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var8, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	if (bParam3)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_31 = 0;
}

void Function_282(int iParam0) //Position: 0xF89C / 63644
{
	return;
}

void Function_283(var uParam0, struct<45>[] Param1, int iParam2, bool bParam3) //Position: 0xF8A2 / 63650
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	GET_OBJECT_POSITION(&(Param1[iParam245]), &Var0);
	Var2 = Var0;
	GET_OBJECT_AXIS(&(Param1[iParam245]), &Var4, 0);
	GET_OBJECT_AXIS(&(Param1[iParam245]), &Var8, 1);
	GET_OBJECT_AXIS(&(Param1[iParam245]), &Var6, 2);
	if (ACTOR_HAS_ANIM_SET(&(Param1[iParam245]), "liars_dice"))
	{
		if (GET_CAMERA_ASPECT_RATIO(GET_GAME_CAMERA()) < 1,8f)
		{
			fVar10 = 0,05f;
			fVar11 = 1.0f;
			fVar12 = 0,25f;
			fVar13 = -0,18f;
			fVar14 = 0,65f;
			fVar15 = -0,5f;
		}
		else
		{
			fVar10 = 0,05f;
			fVar11 = 0,95f;
			fVar12 = 0,25f;
			fVar13 = -0,18f;
			fVar14 = 0,75f;
			fVar15 = -0,5f;
		}
	}
	else if (ACTOR_HAS_ANIM_SET(&(Param1[iParam245]), "liars_dice_gped"))
	{
		fVar10 = 0,05f;
		fVar11 = 0,95f;
		fVar12 = 0,45f;
		fVar13 = -0,13f;
		fVar14 = 0,75f;
		fVar15 = -0,5f;
	}
	else if (ACTOR_HAS_ANIM_SET(&(Param1[iParam245]), "liars_dice_hillb"))
	{
		fVar10 = 0,1f;
		fVar11 = 0,95f;
		fVar12 = 0,25f;
		fVar13 = 0,22f;
		fVar14 = 0,75f;
		fVar15 = -0,5f;
	}
	else
	{
		fVar10 = 0,05f;
		fVar11 = 0,95f;
		fVar12 = 0,25f;
		fVar13 = -0,18f;
		fVar14 = 0,75f;
		fVar15 = -0,5f;
	}
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var0, StackVal) * Vector(fVar10, fVar10, fVar10), StackVal, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var8, Var0, StackVal) * Vector(fVar11, fVar11, fVar11), StackVal, StackVal);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var0, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var2, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var8, Var2, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var2, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_DRAW_ACTOR(&(Param1[iParam245]), 1);
	SET_CAMERA_POSITION(&uParam0, Var0);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var2, 0);
	SET_CAMERA_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	if (bParam3)
	{
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_31 = 1;
}

void Function_284(var uParam0, struct<45>[] Param1, int iParam2, bool bParam3) //Position: 0xFB1C / 64284
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	struct<2> Var21;
	struct<2> Var23;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	uVar0 = &Param1[iParam245];
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return;
	}
	GET_POSITION(&uVar0, &Var1);
	GET_ACTOR_AXIS(&uVar0, &Var3, 2);
	GET_ACTOR_AXIS(&uVar0, &Var5, 0);
	fVar7 = 0.0f;
	if (UNK_0x062C5047("@MINIGAME.LOOK_AROUND", 1, 0))
	{
		if (UNK_0xDA674AE0("@MINIGAME.LOOK_AROUND", 1, 0))
		{
			Global_140720 = 0.0f;
		}
		Global_140720 = (Global_140720 + (GET_MOUSE_AXIS_X() * 0,01f));
		if (Global_140720 > -1.0f)
		{
			Global_140720 = 0.0f;
			Global_140720 = -1.0f;
		}
		else if (Global_140720 < 1.0f)
		{
			Global_140720 = 0.0f;
			Global_140720 = 1.0f;
		}
		fVar7 = Global_140720;
	}
	else
	{
		fVar7 = GET_ANALOGUE_ACTION("@CAMERA.MOVE_X", 1);
	}
	fVar8 = 0.0f;
	fVar9 = (fVar7 * 2.0f);
	fVar10 = (fVar8 * 1.0f);
	fVar11 = (-1.0f * fLocal_12);
	fVar12 = (fVar11 + fVar9);
	fVar13 = (-0,5f * fLocal_13);
	fVar14 = (fVar13 + fVar10);
	fVar15 = ((-fLocal_10 * 10.0f) * bLocal_745);
	fVar16 = ((-fLocal_11 * 5.0f) * bLocal_745);
	fVar17 = ((fLocal_10 + (fVar12 / 1.0f)) + fVar15);
	fVar18 = ((fLocal_11 + (fVar14 / 1.0f)) + fVar16);
	fVar19 = (fLocal_12 + (fVar17 * bLocal_745));
	fVar20 = (fLocal_13 + (fVar18 * bLocal_745));
	if (fVar19 > -1.0f)
	{
		fVar17 = 0.0f;
		fVar19 = -1.0f;
	}
	else if (fVar19 < 1.0f)
	{
		fVar17 = 0.0f;
		fVar19 = 1.0f;
	}
	if (fVar20 > -1.0f)
	{
		fVar18 = 0.0f;
		fVar20 = -1.0f;
	}
	else if (fVar20 < 1.0f)
	{
		fVar18 = 0.0f;
		fVar20 = 1.0f;
	}
	fLocal_10 = fVar17;
	fLocal_12 = fVar19;
	fLocal_11 = fVar18;
	fLocal_13 = fVar20;
	Var21 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var21.f_4 = (StackVal + 1,4f);
	Var21 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var21, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	GET_POSITION(&uVar0, &Var1);
	GET_ACTOR_AXIS(&uVar0, &Var3, 2);
	GET_ACTOR_AXIS(&uVar0, &Var5, 0);
	Var23 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var5, Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var3, Var1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal), StackVal) * Vector(fVar19, fVar19, fVar19), StackVal, StackVal);
	Var23.f_4 = (StackVal + 0,85f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var21);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var23, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
}

void Function_285(struct<2297> Param0) //Position: 0xFDA8 / 64936
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_361(1);
	uVar1 = &Param0[iVar045];
	bVar2 = Function_288(&iLocal_36);
	if ((UNK_0xDA674AE0("@UI.ACCEPT", 1, 0) && !bParam1) || (bVar2 && Function_302(&Param0)))
	{
		if (bVar2)
		{
			Function_301(&Param0, &Param0[iVar045] + 168, &Param0[iVar045] + 172);
		}
		if (Param0[iVar045].f_168 < Param0.f_2288 || (Param0[iVar045].f_172 < Param0.f_2292 && Param0[iVar045].f_168 <= Param0.f_2288))
		{
			HUD_CLEAR_OBJECTIVE();
			Function_300(&Param0, iVar0, bVar2);
			Function_235(&iLocal_32);
			Function_190();
			SAY_SINGLE_LINE_CONTEXT(&uVar1, 486, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (IS_AMBIENT_SPEECH_PLAYING(&uVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "liars_dice/verbal_bid");
			}
			if (bVar2)
			{
				Function_287(6, Param0.f_2292, Param0.f_2288);
			}
			else
			{
				Function_287(1, Param0.f_2292, Param0.f_2288);
			}
			SET_DRAW_ACTOR(&uVar1, 1);
			Function_357(16, 0);
		}
		else
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_OBJECTIVE();
			Function_235(&iLocal_40);
			Function_286("LiarsDice_IllegalBid", 0x40800000, 0, 2, 1, 0);
		}
		return;
	}
	if (!Param0.f_2296 != 4294967295)
	{
		if (UNK_0xDA674AE0("@LIARS_DICE.ANTE", 1, 0) || bVar2)
		{
			Function_190();
			Function_235(&iLocal_32);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (bVar2)
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "LiarsDice_AutoCallOutBluff_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "LiarsDice_CallOutBluff_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
			}
			SAY_SINGLE_LINE_CONTEXT(&uVar1, 487, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Function_350(&iLocal_70, 5))
			{
				Function_143("LiarsDice_AICallOutHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			if (IS_AMBIENT_SPEECH_PLAYING(&uVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "liars_dice/verbal_callout");
			}
			if (bVar2)
			{
				Function_287(5, 0, 0);
			}
			else
			{
				Function_287(2, 0, 0);
			}
			SET_DRAW_ACTOR(&uVar1, 1);
			Function_357(17, 0);
			return;
		}
		if (UNK_0xDA674AE0("@LIARS_DICE.SPOT_ON", 1, 0))
		{
			SAY_SINGLE_LINE_CONTEXT(&uVar1, 488, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			if (Function_350(&iLocal_70, 6))
			{
				Function_143("LiarsDice_SpotOnHelp", 9.0f, 1, 0, 2, 1, 0);
			}
			Function_190();
			Function_235(&iLocal_32);
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			PRINT_OBJECTIVE_FORMAT(7,5f, "LiarsDice_Call_SpotOn_You", Function_272(), 0, 0, 0, 0, 2, 0, 0, 0);
			if (IS_AMBIENT_SPEECH_PLAYING(&uVar1))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "liars_dice/verbal_bid");
			}
			Function_287(3, 0, 0);
			SET_DRAW_ACTOR(&uVar1, 1);
			iLocal_55 = 1;
			Function_357(17, 0);
			return;
		}
	}
	return;
}

void Function_286(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x100FF / 65791
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_36(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_287(int iParam0, int iParam1, int iParam2) //Position: 0x10184 / 65924
{
	struct<9> Var0;
	
	return;
	vVar0 = iParam0;
	vVar0.y = iParam1;
	vVar0.z = iParam2;
	NET_SCRIPTMSG_SEND(3, 31, &vVar0, 4, 0);
	switch (vVar0.x)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

int Function_288(vector3 vParam0) //Position: 0x101E3 / 66019
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	return 0;
	bVar0 = (30.0f - Function_232(&vParam0));
	bVar1 = CEIL(bVar0);
	if (bVar0 >= 0.0f)
	{
		vParam0.f_8 = 0.0f;
		return 1;
	}
	iVar2 = 0;
	if (vParam0.z >= 0.0f)
	{
		HUD_CLEAR_SMALL_TEXT();
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		iVar2 = 1;
	}
	if (bVar1 > CEIL(vParam0.z) || iVar2)
	{
		FLASH_SET_INT("numberSystem", "TimerNumber", bVar1);
		vParam0.z = bVar0;
		switch (bVar1)
		{
			case 0x00000005:
				Function_143("Minigame_Timeout_Warning", 5.0f, 1, 0, 2, 1, 0);
				FLASH_SET_INT("numberSystem", "TimerColor", 2);
				FLASH_SET_INT("numberSystem", "TimerAlert", true);
			
			case 0x00000004:
				PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
				break;
			
			case 0x00000003:
			case 0x00000002:
				PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
				break;
			
			case 0x00000001:
			case 0x00000000:
				PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
				break;
			}
	}
	return 0;
}

var Function_289(bool bParam0) //Position: 0x10331 / 66353
{
	switch (bParam0)
	{
		case 0x00000001:
			return "LiarsDice_Die_1_Icon";
			break;
		
		case 0x00000002:
			return "LiarsDice_Die_2_Icon";
			break;
		
		case 0x00000003:
			return "LiarsDice_Die_3_Icon";
			break;
		
		case 0x00000004:
			return "LiarsDice_Die_4_Icon";
			break;
		
		case 0x00000005:
			return "LiarsDice_Die_5_Icon";
			break;
		
		case 0x00000006:
			return "LiarsDice_Die_6_Icon";
			break;
	}
	return "LiarsDice_Die_1_Icon";
}

void Function_290(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x1041B / 66587
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
			Var0 = { StackVal, StackVal, StackVal, Function_36(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

void Function_291(struct<2293> Param0) //Position: 0x104B0 / 66736
{
	UI_ENTER("Dice");
	UI_ENTER("NumberOfDice");
	UI_ENTER("DiceNumber");
	if (Param0.f_2276 != Param0.f_2280 && iLocal_127 != 10)
	{
		UI_ENTER("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_Bid");
	}
	else
	{
		UI_EXIT("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_CurrentBid");
	}
	UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_DieAmountLabel");
	UI_LABEL_SET_TEXT("DiceNumber", "LiarsDice_DieTypeLabel");
	UI_LABEL_SET_VALUE("NumberOfDice", Param0.f_2288);
	UI_LABEL_SET_VALUE("DiceNumber", Param0.f_2292);
	return;
}

void Function_292(struct<45>[] Param0) //Position: 0x105F4 / 67060
{
	if (UNK_0xDA674AE0("@MINIGAME.INCREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.INCREASE_BET", 1, 0))
	{
		if (iLocal_61 == 1)
		{
			fLocal_59 = (fLocal_59 - (0,004f * Function_295()));
		}
		else
		{
			fLocal_59 = 0,2f;
		}
		iLocal_61 = 1;
		if (Function_232(&iLocal_44) < fLocal_59 && Function_232(&iLocal_44) < (1.0f / 30.0f))
		{
			Param0[Function_361(1)45].f_168++;
			Function_235(&iLocal_44);
			if (Function_294(&Local_131, Param0[Function_361(1)45].f_168) == Param0[Function_361(1)45].f_168)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if (UNK_0xDA674AE0("@MINIGAME.DECREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.DECREASE_BET", 1, 0))
	{
		if (iLocal_61 == 4294967295)
		{
			fLocal_59 = (fLocal_59 - (0,004f * Function_295()));
		}
		else
		{
			fLocal_59 = 0,2f;
		}
		iLocal_61 = 4294967295;
		if (Function_232(&iLocal_44) < fLocal_59 && Function_232(&iLocal_44) < (1.0f / 30.0f))
		{
			Param0[Function_361(1)45].f_168 = (Param0[Function_361(1)45].f_168 - 1);
			Function_235(&iLocal_44);
			if (Function_294(&Local_131, Param0[Function_361(1)45].f_168) == Param0[Function_361(1)45].f_168)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_61 = 0;
		fLocal_59 = 0,2f;
	}
	Param0[Function_361(1)45].f_168 = Function_294(&Param0, Param0[Function_361(1)45].f_168);
	if (UNK_0x062C5047("@LIARS_DICE.CHANGE_DICE_UP", 1, 0))
	{
		if (iLocal_62 == 1)
		{
			fLocal_60 = (fLocal_60 - (0,004f * Function_295()));
		}
		else
		{
			fLocal_60 = 0,2f;
		}
		iLocal_62 = 1;
		if (Function_232(&iLocal_48) < fLocal_60 && Function_232(&iLocal_48) < (1.0f / 30.0f))
		{
			Param0[Function_361(1)45].f_172++;
			Function_235(&iLocal_48);
			if (Function_293(Param0[Function_361(1)45].f_172) == Param0[Function_361(1)45].f_172)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
			}
		}
	}
	else if (UNK_0x062C5047("@LIARS_DICE.CHANGE_DICE_DOWN", 1, 0))
	{
		if (iLocal_62 == 4294967295)
		{
			fLocal_60 = (fLocal_60 - (0,004f * Function_295()));
		}
		else
		{
			fLocal_60 = 0,2f;
		}
		iLocal_62 = 4294967295;
		if (Function_232(&iLocal_48) < fLocal_60 && Function_232(&iLocal_48) < (1.0f / 30.0f))
		{
			Param0[Function_361(1)45].f_172 = (Param0[Function_361(1)45].f_172 - 1);
			Function_235(&iLocal_48);
			if (Function_293(Param0[Function_361(1)45].f_172) == Param0[Function_361(1)45].f_172)
			{
				PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
			}
		}
	}
	else
	{
		iLocal_62 = 0;
		fLocal_60 = 0,2f;
	}
	Param0[Function_361(1)45].f_172 = Function_293(Param0[Function_361(1)45].f_172);
	return;
}

int Function_293(int iParam0) //Position: 0x1095F / 67935
{
	if (iParam0 <= 1)
	{
		iParam0 = 1;
	}
	else if (iParam0 >= 6)
	{
		iParam0 = 6;
	}
	return iParam0;
}

int Function_294(struct<2289> Param0) //Position: 0x1097C / 67964
{
	return Function_63(1, Function_64(Function_298(&Param0), Function_63(bParam1, Param0.f_2288)));
}

float Function_295() //Position: 0x1099A / 67994
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

var Function_296(struct<2>[] Param0, int iParam1) //Position: 0x109A9 / 68009
{
	int iVar0;
	
	iVar0 = (iParam1 - 1);
	while (iVar0 > 0)
	{
		if (Param0[iVar02])
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	iVar0 = (Param0 - 1);
	while (iVar0 > iParam1)
	{
		if (Param0[iVar02])
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	if (iParam1 > 0 || iParam1 < 6)
	{
		SCRIPT_BREAKPOINT("WARNING! ABOUT TO ARRAY OVERRUN in GET_SEAT_RIGHT_OF!");
	}
	if (Param0[iParam12])
	{
		return iParam1;
	}
	return 4294967295;
}

bool Function_297(struct<2293> Param0) //Position: 0x10A4B / 68171
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_273(&(vLocal_753[Function_319(&Param0, iParam1)9]), Param0.f_2292);
	bVar1 = (Function_298(&Param0) - Function_313(&Param0, iParam1));
	fVar2 = (TO_FLOAT(bVar1) / 5.0f);
	if (Param0.f_2288 == 1)
	{
		fVar3 = 1,8f;
	}
	else
	{
		fVar3 = (TO_FLOAT((Param0.f_2288 - iVar0)) / fVar2);
	}
	if (FABS((1,8f - fVar3)) >= 0,7f)
	{
		return 1;
	}
	PRINTSTRING("TABLE_BID_IS_GOOD_CANDIDATE_FOR_SPOT_ON returning ");
	PRINTFLOAT(FABS((1,8f - fVar3)));
	PRINTNL();
	return 0;
}

int Function_298(int iParam0) //Position: 0x10B0B / 68363
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&iParam0 + 2168)[iVar02])
		{
			iVar1 = (iVar1 + Function_313(&iParam0, Function_243(iVar0, 1)));
		}
		iVar0++;
	}
	return iVar1;
}

void Function_299() //Position: 0x10B46 / 68422
{
	return;
}

void Function_300(struct<45> Param0) //Position: 0x10B4C / 68428
{
	var uVar0;
	struct<16> Var1;
	
	Param0.f_2288 = Param0[iParam145].f_168;
	Param0.f_2292 = Param0[iParam145].f_172;
	Param0.f_2296 = iParam1;
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_306(iParam1, &Param0) };
	if (Param0.f_2288 == 1)
	{
		if (Param0[iParam145].f_120 == 1)
		{
			if (&bParam2)
			{
				uVar0 = "LiarsDice_PlayerAutoBidYou_Single";
			}
			else
			{
				uVar0 = "LiarsDice_PlayerBidYou_Single";
			}
		}
		else if (&bParam2)
		{
			uVar0 = "LiarsDice_PlayerAutoBid_Single";
		}
		else
		{
			uVar0 = "LiarsDice_PlayerBid_Single";
		}
	}
	else if (Param0[iParam145].f_120 == 1)
	{
		if (&bParam2)
		{
			uVar0 = "LiarsDice_PlayerAutoBidYou";
		}
		else
		{
			uVar0 = "LiarsDice_PlayerBidYou";
		}
	}
	else if (&bParam2)
	{
		uVar0 = "LiarsDice_PlayerAutoBid";
	}
	else
	{
		uVar0 = "LiarsDice_PlayerBid";
	}
	if (Param0[iParam145].f_120 == 1)
	{
		PRINT_OBJECTIVE_FORMAT(7,5f, &uVar0, Function_272(), Function_347(Param0[iParam145].f_168), Function_289(Param0[iParam145].f_172), 0, 0, 2, 0, 0, 0);
	}
	else
	{
		PRINT_OBJECTIVE_FORMAT(7,5f, &uVar0, &Var1, Function_347(Param0[iParam145].f_168), Function_289(Param0[iParam145].f_172), 0, 0, 2, 0, 0, 0);
	}
	return;
}

void Function_301(struct<2289> Param0) //Position: 0x10D43 / 68931
{
	uParam1 = Param0.f_2288 + 1;
	iParam2 = 1;
	return;
}

bool Function_302(struct<2289> Param0) //Position: 0x10D5A / 68954
{
	return Param0.f_2288 > Function_298(&Param0);
}

void Function_303(struct<45> Param0) //Position: 0x10D6D / 68973
{
	UI_ENTER("Dice");
	UI_ENTER("NumberOfDice");
	UI_ENTER("DiceNumber");
	if (Param0.f_2276 == Param0.f_2280)
	{
		UI_ENTER("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_Bid");
	}
	else
	{
		UI_EXIT("ArrowVisibility");
		UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_CurrentBid");
	}
	UI_LABEL_SET_TEXT("NumberOfDice", "LiarsDice_DieAmountLabel");
	UI_LABEL_SET_TEXT("DiceNumber", "LiarsDice_DieTypeLabel");
	UI_LABEL_SET_VALUE(StackVal, Param0["NumberOfDice"45].f_168);
	UI_LABEL_SET_VALUE(StackVal, Param0["DiceNumber"45].f_172);
	return;
}

int Function_304(struct<2>[] Param0, int iParam1) //Position: 0x10ECC / 69324
{
	int iVar0;
	
	iVar0 = iParam1 + 1;
	while (iVar0 < (Param0 - 1))
	{
		if (Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		if (Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iParam1 > 0 || iParam1 < 6)
	{
		SCRIPT_BREAKPOINT("WARNING! ABOUT TO ARRAY OVERRUN in GET_SEAT_LEFT_OF!");
	}
	if (Param0[iParam12])
	{
		return iParam1;
	}
	return 4294967295;
}

void Function_305(struct<45> Param0) //Position: 0x10F6F / 69487
{
	bool bVar0;
	var uVar1;
	
	Function_299();
	bVar0 = false;
	if ((*&Param0 + 2168)[Param0.f_22802])
	{
		if (Function_260(&(Param0[Function_242(1)45])))
		{
			if (Function_361(0) != Function_242(0))
			{
				uVar1 = &Param0[Function_242(1)45];
				if ((UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) || Local_131.f_2300 == 0.0f) && !bLocal_52)
				{
					if (!IS_ACTION_NODE_PLAYING(&uVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar1, "liars_dice/check_sweep");
						fLocal_66 = 0.0f;
						fLocal_69 = -1.0f;
					}
					Function_283(&iLocal_57, &Param0, Function_242(1), 1);
					Function_279(&Param0, &uVar1);
					Function_191(6);
					Function_282(1);
				}
				else
				{
					Function_247(6, "{@MINIGAME.LOOK_AT_HAND}", "LiarsDice_Look", 1, 0, 0, 0, 0);
					if (IS_ACTION_NODE_PLAYING(&uVar1, "liars_dice/check_sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&uVar1, "liars_dice/cup_idle");
						bVar0 = true;
					}
					Function_282(0);
				}
			}
		}
		else
		{
			Function_282(0);
		}
	}
	else
	{
		Function_282(0);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (Function_361(0) >= 4294967295)
		{
			if (Function_361(0) != Function_242(0))
			{
				Function_308(&iLocal_57, &(Local_131[Function_361(0)45]), &(Local_131[Function_242(1)45]), 1);
			}
		}
	}
	return;
}

struct<64> Function_306(int iParam0, struct<45>[] Param1) //Position: 0x11108 / 69896
{
	struct<16> Var0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
	}
	if (!Function_307(&(Param1[iParam045]), &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&Param1[iParam045] + 8), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_307(var uParam0, char* cParam1) //Position: 0x11144 / 69956
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			strcpy(&cParam1, "Poker_Name_P", 64);
		}
		else
		{
			strcpy(&cParam1, GET_ACTOR_ENUM_STRING(&uParam0), 64);
		}
		return 1;
	}
	return 0;
}

void Function_308(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11184 / 70020
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	struct<2> Var12;
	
	if (!IS_ACTOR_VALID(&iParam1) || !IS_ACTOR_VALID(&iParam2))
	{
		return;
	}
	GET_POSITION(&iParam2, &Var0);
	GET_ACTOR_AXIS(&iParam2, &Var2, 2);
	GET_ACTOR_AXIS(&iParam2, &Var4, 0);
	Var6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var6.f_4 = (StackVal + 1,4f);
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var4, Var6, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	GET_POSITION(&iParam1, &Var0);
	GET_ACTOR_AXIS(&iParam1, &Var2, 2);
	GET_ACTOR_AXIS(&iParam1, &Var4, 0);
	if (&iParam1 == &iParam2)
	{
		Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
		Var8.f_4 = (StackVal + 0,85f);
	}
	else
	{
		Var8 = Var0;
		Var8.f_4 = (StackVal + 1,07f);
	}
	GET_CAMERA_POSITION(&uParam0, &Var10);
	GET_CAMERA_DIRECTION(&uParam0, &Var12);
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(&uParam0) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0))
	{
		if (bParam3)
		{
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
			}
			SET_CAMERA_POSITION(&uParam0, Var6);
			SET_CAMERA_TARGET_POSITION(&uParam0, Var8, 0);
			SET_CAMERA_FOV(&uParam0, 31.0f);
		}
		else
		{
			if (!IS_OBJECT_VALID(&uLocal_1083))
			{
				uLocal_1083 = CREATE_CAMERASHOT_IN_LAYOUT(&cLocal_28, Function_58());
			}
			if (!IS_OBJECT_VALID(&iLocal_1085))
			{
				iLocal_1085 = CREATE_CAMERASHOT_IN_LAYOUT(&cLocal_28, Function_58());
			}
			Function_309(&uLocal_1083);
			Function_309(&iLocal_1085);
			SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&uLocal_1083, 5.0f);
			SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iLocal_1085, 5.0f);
			SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&uLocal_1083, 1);
			SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iLocal_1085, 1);
			SET_CAMERASHOT_POSITION(&uLocal_1083, Var10);
			SET_CAMERASHOT_DIRECTION(&uLocal_1083, Var12, 0);
			SET_CAMERASHOT_FOV(&uLocal_1083, 31.0f);
			SET_CAMERASHOT_POSITION(&iLocal_1085, Var6);
			SET_CAMERASHOT_TARGET_POSITION(&iLocal_1085, Var8, 0);
			SET_CAMERASHOT_FOV(&iLocal_1085, 31.0f);
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
			}
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(&uParam0, &uLocal_1083, &iLocal_1085, 0,75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(&uParam0, &iLocal_1085, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_31 = 0;
}

void Function_309(int iParam0) //Position: 0x113B2 / 70578
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	return;
}

void Function_310(bool bParam0, int iParam1) //Position: 0x113C5 / 70597
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	struct<2> Var6;
	struct<2> Var8;
	
	GET_CENTER_OF_GRAVITY(GET_PHYSINST_FROM_OBJECT(&iParam1), &Var0);
	GET_OBJECT_AXIS(&iParam1, &uVar2, 0);
	GET_OBJECT_AXIS(&iParam1, &uVar4, 2);
	switch (bParam0)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			ROTATE_OBJECT_AROUND_AXIS(&iParam1, &uVar4, 90.0f);
			break;
		
		case 0x00000003:
			ROTATE_OBJECT_AROUND_AXIS(&iParam1, &uVar2, 90.0f);
			break;
		
		case 0x00000004:
			ROTATE_OBJECT_AROUND_AXIS(&iParam1, &uVar2, 270.0f);
			break;
		
		case 0x00000005:
			ROTATE_OBJECT_AROUND_AXIS(&iParam1, &uVar4, 270.0f);
			break;
		
		case 0x00000006:
			ROTATE_OBJECT_AROUND_AXIS(&iParam1, &uVar2, 180.0f);
			break;
	}
	GET_CENTER_OF_GRAVITY(GET_PHYSINST_FROM_OBJECT(&iParam1), &Var8);
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var8, StackVal);
	Function_311(&iParam1);
	SET_OBJECT_POSITION(Vector(StackVal, StackVal, StackVal) - Vector(Var6, Function_311(&iParam1), &iParam1));
	return;
}

struct<8> Function_311(int iParam0) //Position: 0x114A3 / 70819
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

var Function_312(int iParam0, int iParam1, int iParam2) //Position: 0x114CC / 70860
{
	return vLocal_753[Function_319(&iParam0, iParam1)9][iParam2];
}

int Function_313(int iParam0, int iParam1) //Position: 0x114E3 / 70883
{
	return vLocal_753[Function_319(&iParam0, iParam1)9].f_48;
}

void Function_314(struct<45>[] Param0) //Position: 0x114F8 / 70904
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			if (Function_322(&Param0, Function_243(iVar0, 1)))
			{
				SET_ACTION_NODE_FOR_ACTOR(&(Param0[Function_243(iVar0, 1)45]), "liars_dice/cup_idle_skip");
				if (IS_ATTACHMENT_VALID(&Param0[Function_243(iVar0, 1)45] + 160))
				{
					REMOVE_OBJECT_ATTACHMENT(&Param0[Function_243(iVar0, 1)45] + 160);
				}
				Function_315(&(Param0[Function_243(iVar0, 1)45]), &Var1, &Var3, 0);
				SET_OBJECT_POSITION(&Param0[Function_243(iVar0, 1)45] + 152, Var1);
				SET_OBJECT_ORIENTATION(&Param0[Function_243(iVar0, 1)45] + 152, Var3);
			}
		}
		iVar0++;
	}
	return;
}

void Function_315(float fParam0, struct<2> Param1, bool bParam3) //Position: 0x115BC / 71100
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		if (ACTOR_HAS_ANIM_SET(&fParam0, "liars_dice"))
		{
			if (&bParam3)
			{
				Var0 = Vector(-0,1758f, 0,9004f, -0,1056f);
				Var2 = Vector(0.0f, -174,7526f, 180.0f);
			}
			else
			{
				Var0 = Vector(-0,0554f, 0,9f, -0,0912f);
				Var2 = Vector(0.0f, -165,8963f, 180.0f);
			}
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "liars_dice_hillb"))
		{
			if (&bParam3)
			{
				Var0 = Vector(0,2916f, 0,9002f, -0,0912f);
				Var2 = Vector(0.0f, -23,3589f, 180.0f);
			}
			else
			{
				Var0 = Vector(0,1794f, 0,9f, -0,0529f);
				Var2 = Vector(0.0f, -22,6924f, 180.0f);
			}
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "liars_dice_gped"))
		{
			if (&bParam3)
			{
				Var0 = Vector(-0,159f, 0,9f, 0,025f);
				Var2 = Vector(0.0f, 193,498f, 180.0f);
			}
			else
			{
				Var0 = Vector(-0,038f, 0,9f, 0,052f);
				Var2 = Vector(0.0f, 211,495f, 180.0f);
			}
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

int Function_316(struct<45>[] Param0) //Position: 0x1177C / 71548
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			if (Function_322(&Param0, Function_243(iVar0, 1)))
			{
				if (!IS_ACTION_NODE_PLAYING(&(Param0[Function_243(iVar0, 1)45]), "liars_dice/cup_idle"))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_317(struct<45> Param0) //Position: 0x117DC / 71644
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_2168)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			if (IS_ACTION_NODE_PLAYING(&(Param0[StackVal45]), "liars_dice/cup_shuffle_pst") || bLocal_52)
			{
				if (IS_OBJECT_VALID(&Param0[045] + 72[StackVal]))
				{
					Function_241(StackVal, Function_313(&Param0[StackVal45] + 72, &Param0));
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_318(int iParam0) //Position: 0x11883 / 71811
{
	iParam0++;
	return;
}

int Function_319(struct<45>[] Param0, int iParam1) //Position: 0x11893 / 71827
{
	return Function_262(&(Param0[iParam145]));
}

void Function_320(struct<45>[] Param0, int iParam1) //Position: 0x118A3 / 71843
{
	int iVar0;
	
	if (Param0[iParam145].f_120 == 2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Function_313(&Param0, iParam1))
	{
		Function_321(&(vLocal_753[Function_319(&Param0, iParam1)9][iVar0]));
		iVar0++;
	}
	Function_318(&vLocal_753[Function_319(&Param0, iParam1)9] + 56);
	return;
}

void Function_321(int iParam0) //Position: 0x118F6 / 71926
{
	iParam0 = RAND_INT_RANGE(1, 6);
	return;
}

bool Function_322(int iParam0, int iParam1) //Position: 0x11905 / 71941
{
	return Function_313(&iParam0, iParam1) < 0;
}

void Function_323(int iParam0) //Position: 0x11915 / 71957
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	
	Var0 = *(&Local_79 + 60);
	Var0.f_4 = (StackVal + 0,2f);
	uVar4 = Function_188();
	GET_ACTOR_AXIS(&uVar4, &Var5, 0);
	GET_ACTOR_AXIS(&uVar4, &Var7, 1);
	GET_ACTOR_AXIS(&uVar4, &Var9, 2);
	Function_87(&uVar4, &Var2);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var5, Var2, StackVal) * Vector(-1,2f, -1,2f, -1,2f), StackVal, StackVal);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var7, Var2, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var9, Var2, StackVal) * Vector(1,2f, 1,2f, 1,2f), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&iParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&iParam0);
	}
	SET_CAMERA_POSITION(&iParam0, Var2);
	SET_CAMERA_TARGET_POSITION(&iParam0, Var0, 0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&iParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&iParam0, 0, 2.0f, 2.0f, 0, 0, 0, 0, 0, 0);
	}
	iLocal_31 = 1;
	return;
}

bool Function_324(bool bParam0, bool bParam1, float fParam2) //Position: 0x119E6 / 72166
{
	struct<17> Var0;
	
	if (&bParam1)
	{
		Function_345(bParam0);
	}
	Function_344(&Var0);
	fVar3 = 0.0f;
	iVar4 = 0;
	if ((fVar3 - Var0.f_12) <= &fParam2)
	{
		Var0.f_12 = fVar3;
		iVar4 = 1;
		Function_343(&Var0);
	}
	if (Function_342(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_341(&Var0, 0);
		Function_343(&Var0);
		Function_338();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_337(bParam0, iVar4, &uVar5))
	{
		if (Function_336())
		{
			if (!Function_335(&Var0))
			{
				Var6 = bParam0;
				Var6.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var6, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var6)));
				Function_334(&Var0, 1);
				Function_343(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar3;
			Function_343(&Var0);
		}
		else
		{
			fVar7 = (fVar3 - Var0.f_16);
			if (fVar7 <= 60.0f || (uVar5 && fVar7 <= 25.0f))
			{
				if (Function_325(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var8 = GET_LOCAL_SLOT();
					Var8.f_4 = fVar3;
					NET_SCRIPTMSG_SEND(1, 104, &Var8, 4, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_343(&Var0);
	}
	return 0;
}

bool Function_325(int iParam0) //Position: 0x11C39 / 72761
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_332(iVar0))
		{
			iVar1 = Function_326(iVar0);
			if (iVar1 == iParam0)
			{
				if (iVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_326(int iParam0) //Position: 0x11C7C / 72828
{
	int iVar0;
	
	Function_330(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_329(&iVar0);
	}
	else
	{
		Function_328(&iVar0, iParam0);
	}
	return Function_327(&iVar0);
}

int Function_327(int iParam0) //Position: 0x11CA3 / 72867
{
	return iParam0;
}

void Function_328(int iParam0, int iParam1) //Position: 0x11CAD / 72877
{
	iParam0 = &Global_120101[iParam188] + 184;
	return;
}

void Function_329(int iParam0) //Position: 0x11CC2 / 72898
{
	iParam0 = &Global_122919 + 184;
	return;
}

void Function_330(int iParam0) //Position: 0x11CD3 / 72915
{
	Function_331(&iParam0, 4294967286);
	return;
}

void Function_331(var uParam0, int iParam1) //Position: 0x11CE2 / 72930
{
	uParam0 = iParam1;
	return;
}

bool Function_332(int iParam0) //Position: 0x11CEE / 72942
{
	return Function_333(iParam0);
}

int Function_333(bool bParam0) //Position: 0x11CF9 / 72953
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_123163 + 96)[bParam0] > Global_123163.f_92)
	{
		(*&Global_123163 + 96)[bParam0] = Global_123163.f_92;
		(&Global_123163 + 96[bParam0])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_120101, bParam0);
	}
	return StackVal;
}

void Function_334(int iParam0, bool bParam1) //Position: 0x11D9A / 73114
{
	if (bParam1)
	{
		Function_81(&iParam0, 2);
	}
	else
	{
		Function_32(&iParam0, 2);
	}
	return;
}

bool Function_335(bool bParam0) //Position: 0x11DB6 / 73142
{
	return Function_19(bParam0, 2);
}

bool Function_336() //Position: 0x11DC4 / 73156
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	return 0;
}

bool Function_337(int iParam0, var uParam1, bool bParam2) //Position: 0x11DD8 / 73176
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_332(iVar0))
		{
			iVar1 = Function_326(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					bParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_338() //Position: 0x11E2A / 73258
{
	Function_339(4294967286);
	return;
}

void Function_339(int iParam0) //Position: 0x11E36 / 73270
{
	int iVar0;
	struct<9> Var1;
	
	if (iParam0 != 4294967286)
	{
		Function_329(&iVar0);
		Function_344(&vVar1);
		vVar1.z = iVar0;
		Function_343(&vVar1);
	}
	Function_331(&iVar0, iParam0);
	Function_340(&iVar0);
	return;
}

void Function_340(int iParam0) //Position: 0x11E65 / 73317
{
	*(&Global_122919 + 184) = &iParam0;
	return;
}

void Function_341(int iParam0, bool bParam1) //Position: 0x11E76 / 73334
{
	if (bParam1)
	{
		Function_81(&iParam0, 1);
	}
	else
	{
		Function_32(&iParam0, 1);
	}
	return;
}

bool Function_342(int iParam0) //Position: 0x11E92 / 73362
{
	return Function_19(iParam0, 1);
}

void Function_343(vector3 vParam0) //Position: 0x11EA0 / 73376
{
	Global_123163 = { StackVal, StackVal, vParam0 };
	return;
}

void Function_344(vector3 vParam0) //Position: 0x11EB1 / 73393
{
	vParam0 = { StackVal, StackVal, Global_123163 };
	return;
}

void Function_345(int iParam0) //Position: 0x11EC2 / 73410
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar21;
	
	bVar0 = iParam0;
	Function_329(&uVar1);
	if (Function_327(&uVar1) != bVar0)
	{
		Function_344(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar5, "Next lockstep state same as last state (", 64);
			stradd(&cVar5, I2STR(bVar0), 64);
			stradd(&cVar5, "). May be fine.", 64);
			if (Function_19(Var2, 4))
			{
			}
		}
		bVar21 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar21), I2STR(bVar21), I2STR(bVar0), 0);
		Var2.f_12 = 0.0f;
		Function_339(bVar0);
		Function_334(&Var2, 0);
		Function_343(&Var2);
	}
	return;
}

int Function_346(bool bParam0, bool bParam1) //Position: 0x11FBD / 73661
{
	bool bVar0;
	
	bVar0 = Function_71(0);
	if ((Function_71(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_122(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_71(0));
	return 1;
}

var Function_347(bool bParam0) //Position: 0x1204E / 73806
{
	bool bVar0;
	
	bVar0 = Function_348();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_348() //Position: 0x12068 / 73832
{
	Global_10990 = (Global_10990 + 1 % 10);
	switch (Global_10990)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

int Function_349() //Position: 0x12124 / 74020
{
	return Function_71(0);
}

bool Function_350(int iParam0, int iParam1) //Position: 0x1212E / 74030
{
	if (!Function_354(&iParam0, iParam1))
	{
		Function_351(&iParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_351(var[] uParam0, int iParam1) //Position: 0x1214B / 74059
{
	Function_81(&(uParam0[Function_353(iParam1)]), Function_352(iParam1));
	return;
}

int Function_352(int iParam0) //Position: 0x12163 / 74083
{
	return Function_150((iParam0 % 32));
}

int Function_353(int iParam0) //Position: 0x12171 / 74097
{
	return (iParam0 / 32);
}

bool Function_354(var[] uParam0, bool bParam1) //Position: 0x1217C / 74108
{
	return Function_19(uParam0[Function_353(bParam1)], Function_352(bParam1));
}

void Function_355() //Position: 0x12194 / 74132
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_356(int[] iParam0) //Position: 0x121A6 / 74150
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

void Function_357(bool bParam0, int iParam1) //Position: 0x121C6 / 74182
{
	iLocal_127 = bParam0;
	return;
}

void Function_358(struct<45>[] Param0) //Position: 0x121D0 / 74192
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&Param0 + 2168)[iVar02])
		{
			uVar1 = &Param0[StackVal45];
			if ((((((((IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/cup_shuffle_pre") || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/cup_shuffle_pre_2")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/cup_shuffle_pst")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/check_sweep")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/check_lift")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/check_close")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/check_idle")) || IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/cup_reveal_2")) && !HUD_IS_FADED())
			{
				Function_360(&(Param0[StackVal45]));
			}
			else
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "liars_dice/idle"))
				{
					iVar2 = 1;
				}
				else
				{
					iVar2 = 0;
				}
				Function_359(&(Param0[StackVal45]), iVar2);
			}
		}
		iVar0++;
	}
	return;
}

void Function_359(int iParam0, bool bParam1) //Position: 0x1236F / 74607
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ATTACHMENT_VALID(&iParam0 + 160))
	{
		if (bParam1)
		{
		}
		REMOVE_OBJECT_ATTACHMENT(&iParam0 + 160);
		Function_315(&iParam0, &Var0, &Var2, bParam1);
		SET_OBJECT_POSITION(&iParam0 + 152, Var0);
		SET_OBJECT_ORIENTATION(&iParam0 + 152, Var2);
	}
	return;
}

void Function_360(int iParam0) //Position: 0x123BB / 74683
{
	if (!IS_ATTACHMENT_VALID(&iParam0 + 160))
	{
		*(&iParam0 + 160) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 152, &iParam0, "pelvis_attachment", "grab", 4294967295);
	}
	return;
}

int Function_361(int iParam0) //Position: 0x123FD / 74749
{
	return Function_243(Local_131.f_2276, &iParam0);
}

void Function_362() //Position: 0x1240E / 74766
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	switch (iLocal_2)
	{
		case 0x00000000:
			if (Function_363())
			{
				Local_131.f_2276 = Local_131.f_2280;
				Function_269(&iLocal_57, &(Local_131[Function_242(1)45]));
				iVar0 = 0;
				while (iVar0 <= Local_131.f_2168)
				{
					if ((*&Local_131 + 2168)[iVar02])
					{
						Function_315(&(Local_131[Function_243(iVar0, 1)45]), &Var1, &Var3, 1);
						*(&Local_131[Function_243(iVar0, 1)45] + 152) = CREATE_PROP_IN_LAYOUT(&cLocal_28, Function_58(), "$/fragments/p_gen_diceCup01x", Var1, Var3, 1);
					}
					iVar0++;
				}
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_235(&iLocal_32);
				iLocal_2 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_1 = 1;
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				iLocal_127 = 0;
			}
			break;
	}
	return;
}

bool Function_363() //Position: 0x124EA / 74986
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_16)
	{
		case 0x000003E8:
			iLocal_16 = 1005;
			if (IS_VOLUME_VALID(&iLocal_14))
			{
				if (IS_OBJECTSET_VALID(&uLocal_749))
				{
					Function_373(&uLocal_749);
				}
				else
				{
					uLocal_749 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &cLocal_28, 15, 1);
				}
				iVar1 = LOCATE_ACTORS_IN_VOLUME(&iLocal_14, &uLocal_749, 0, 1);
				bVar0 = false;
				while (bVar0 <= iVar1)
				{
					iVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_749));
					if (!Function_372(&iVar2))
					{
						if ((IS_ACTOR_HOGTIED(&iVar2) || IS_ACTOR_CRIPPLED(&iVar2, 5)) || IS_ACTOR_VEHICLE(&iVar2))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_16 = 1004;
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(&iLocal_14))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(&iLocal_14);
					if (IS_OBJECTSET_VALID(&uLocal_749))
					{
						Function_373(&uLocal_749);
					}
					else
					{
						uLocal_749 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &cLocal_28, 15, 1);
					}
					iVar1 = LOCATE_ACTORS_IN_VOLUME(&iLocal_14, &uLocal_749, 0, 1);
					bVar0 = false;
					while (bVar0 <= iVar1)
					{
						iVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_749));
						if (!Function_372(&iVar2))
						{
							if ((IS_ACTOR_HOGTIED(&iVar2) || IS_ACTOR_CRIPPLED(&iVar2, 5)) || IS_ACTOR_VEHICLE(&iVar2))
							{
								DESTROY_ACTOR(&iVar2);
							}
						}
						bVar0++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_16 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar0 = false;
			while (StackVal <= bVar0)
			{
				if (IS_ACTOR_VALID(&Local_79 + 4[bVar0]))
				{
					Function_367(&Local_79 + 4[bVar0], &Local_131, bVar0);
					if (&Local_79 + 4[bVar0] != Function_188())
					{
						SET_DRAW_ACTOR(&Local_79 + 4[bVar0], 0);
					}
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 <= 6)
			{
				Function_366(GET_GRINGO_FROM_OBJECT(&Local_131 + 2168[bVar02] + 8));
				if (!(*&Local_131 + 2168)[bVar02])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Local_131 + 2168[bVar02] + 8), false);
				}
				bVar0++;
			}
			Function_364();
			SAY_SINGLE_LINE_CONTEXT(&(Local_131[Function_242(1)45]), 485, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_16 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING(Function_188(), "liars_dice/idle"))
			{
				bVar0 = false;
				while (StackVal <= bVar0)
				{
					if (IS_ACTOR_VALID(&Local_79 + 4[bVar0]))
					{
						SET_DRAW_ACTOR(&Local_79 + 4[bVar0], 1);
					}
					bVar0++;
				}
				return 1;
			}
			break;
		
		case 0x000003EF:
			if (Function_324(1008, 1, 0x3f800000))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_364() //Position: 0x1276A / 75626
{
	int iVar0;
	var uVar1;
	
	Function_365(Function_188());
	if (Function_115(4))
	{
		iLocal_27 = 1;
		Function_189(4, 0);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_79 + 4[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH(&Local_79 + 4[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_79 + 4[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_79 + 4[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_79 + 4[iVar0], 4, true);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_79 + 4[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		uVar1 = &Local_79 + 4[iVar0];
		if (IS_ACTOR_VALID(&uVar1))
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uVar1, 26, false);
		}
		iVar0++;
	}
	return;
}

void Function_365(int iParam0) //Position: 0x12820 / 75808
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&iParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_366(int iParam0) //Position: 0x12846 / 75846
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(&iParam0, "UseCase1");
	bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, 0);
	while (bVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar1, &uVar0);
		uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar2, &iParam0);
		if (IS_PHYSINST_VALID(&uVar3))
		{
			HIDE_PHYSINST(&uVar3);
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, bVar1 + 1);
	}
	return;
}

int Function_367(var uParam0, struct<2281> Param1) //Position: 0x128C0 / 75968
{
	var uVar2;
	bool bVar3;
	
	if (iParam2 == 4294967295 && !(*&Param1 + 2168)[iParam22])
	{
		Function_369(&(Param1[Param1.f_227245]), &uParam0, iParam2);
		(*&Param1 + 2168)[iParam22] = 1;
		(&Param1 + 2168[iParam22])->f_4 = Param1.f_2272;
		Param1.f_2272++;
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Param1.f_2280 = iParam2;
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 0);
			SET_ANIM_SET_FOR_ACTOR(&uParam0, "liars_dice", 0);
			while (!ACTOR_HAS_ANIM_SET(&uParam0, "liars_dice") && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
			uVar2 = GET_OBJECT_FROM_ACTOR(&uParam0);
			uVar2 = GET_OBJECT_FROM_ACTOR(Function_188());
			Function_368(&iLocal_57, GET_GRINGO_FROM_OBJECT(&Param1 + 2168[Param1.f_22802] + 8));
			if (!SNAP_ACTOR_TO_GRINGO(&uParam0, &Param1 + 2168[iParam22] + 8, "UseCase2", false, 0, 1))
			{
			}
		}
		else
		{
			TASK_USE_GRINGO(&uParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 2168[iParam22] + 8), "UseCase1", 4294967295, 1);
			bVar3 = RAND_INT_RANGE(0, 2);
			switch (bVar3)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&uParam0, "liars_dice", 0);
					while (!ACTOR_HAS_ANIM_SET(&uParam0, "liars_dice") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&uParam0, "liars_dice_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(&uParam0, "liars_dice_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&uParam0, "liars_dice_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(&uParam0, "liars_dice_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
			}
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "liars_dice/idle");
			TASK_PRIORITY_SET(&uParam0, true);
		}
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
		return 0;
	}
	return 1;
}

void Function_368(var uParam0, int iParam1) //Position: 0x12B3A / 76602
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
		fVar10 = 0,75f;
		fVar11 = 0,4f;
		fVar12 = 1,13f;
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
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_369(struct<173> Param0) //Position: 0x12CB1 / 76977
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	
	if (!AI_IGNORE_ACTOR(&uParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(&uParam1, 1);
	SET_AUTO_CONVERSATION_LOOK(&uParam1, 0);
	Param0.f_168 = 1;
	Param0.f_172 = 1;
	Param0 = &uParam1;
	Param0.f_124 = iParam2;
	if (IS_ACTOR_PLAYER(&Param0))
	{
		Param0.f_120 = 1;
	}
	else if (Function_371(&uParam1) >= 4294967295)
	{
		Param0.f_120 = 2;
	}
	else
	{
		Param0.f_120 = 0;
	}
	Function_370(&(vLocal_753[Function_262(&Param0)9]));
	Param0.f_132 = 0;
	Param0.f_136 = 0;
	Param0.f_144 = 0;
	Param0.f_140 = 0;
	strcpy(&Param0 + 8, "__invalid__", 32);
	bVar0 = false;
	while (bVar0 <= 5)
	{
		*(&Param0 + 176[bVar02]) = *(&Local_79 + 60);
		Var1 = Vector(0.0f, 0.0f, 0.0f);
		fVar3 = (-TO_FLOAT(bVar0) * 5.0f);
		UNK_0x44986367(&Var1, ((IntToFloat((4294967236 * Param0.f_124)) + fVar3) + Local_79.f_72));
		*(&Param0 + 176[bVar02]) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var1, *(&Param0 + 176[bVar02]), StackVal) * Vector(0,25f, 0,25f, 0,25f), StackVal, StackVal);
		*(&Param0 + 264[bVar02]) = Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_79 + 60), *(&Param0 + 176[bVar02]), StackVal);
		(&Param0 + 264[bVar02])->f_4 = UNK_0x9C40E671(&Param0 + 264[bVar02]);
		bVar0++;
	}
	ACTOR_HOLSTER_WEAPON(&Param0, 1);
	return;
}

void Function_370(bool bParam0) //Position: 0x12E16 / 77334
{
	int iVar0;
	
	bParam0.f_48 = 5;
	iVar0 = 0;
	while (iVar0 <= bParam0.f_48)
	{
		bParam0[iVar0] = RAND_INT_RANGE(1, 6);
		iVar0++;
	}
	return;
}

int Function_371(int iParam0) //Position: 0x12E44 / 77380
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (IS_ACTOR_LOCAL_PLAYER(&iParam0))
	{
		return GET_LOCAL_SLOT();
	}
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		return GET_ACTOR_SLOT(&iParam0);
	}
	if (DECOR_GET_INT_VERBOSE(&iParam0, "FakeSlot", &iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

bool Function_372(int iParam0) //Position: 0x12E8A / 77450
{
	int iVar0;
	
	if (&iParam0 == Function_188())
	{
		return 1;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_79 + 4[iVar0]))
		{
			if (&iParam0 == &Local_79 + 4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_373(var uParam0) //Position: 0x12ED1 / 77521
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

void Function_374(struct<2301> Param0) //Position: 0x12F11 / 77585
{
	Param0.f_2300 = 0.0f;
	Param0.f_2288 = 0;
	Param0.f_2292 = 1;
	Param0.f_2296 = 4294967295;
	Param0.f_2272 = 0;
	Param0.f_2276 = 0;
	Function_375(&Param0 + 2168);
	return;
}

void Function_375(struct<2>[] Param0) //Position: 0x12F4A / 77642
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar02] = 0;
		Param0[iVar02].f_4 = 4294967295;
		uVar1 = *(&Local_79 + 84[iVar02]);
		*(&Param0[iVar02] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &uVar1, 1.0f, 0));
		while (!IS_OBJECT_VALID(&Param0[iVar02] + 8) && !IS_EXITFLAG_SET())
		{
			*(&Param0[iVar02] + 8) = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &uVar1, 1.0f, 0));
			WAIT(false);
		}
		DECOR_SET_BOOL(&Param0[iVar02] + 8, "ForceAllowRain", 1);
		iVar0++;
	}
	return;
}

void Function_376() //Position: 0x1305D / 77917
{
	bLocal_4 = true;
	Function_1();
	return;
}

void Function_377() //Position: 0x13069 / 77929
{
	int iVar0;
	
	HUD_ENABLE(0);
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(8);
	Function_391();
	cLocal_28 = CREATE_LAYOUT("LiarsDiceDynamic");
	Function_390();
	Function_381();
	Function_380(&iLocal_32);
	Function_380(&iLocal_36);
	Function_380(&iLocal_40);
	Function_380(&iLocal_44);
	Function_380(&iLocal_48);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_746 = GET_CURRENT_GAME_TIME();
	iLocal_57 = CREATE_CAMERA_IN_LAYOUT(&cLocal_28, "LiarsDiceCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(&iLocal_57, "nliarsdice");
	INIT_CAMERA_FROM_GAME_CAMERA(&iLocal_57);
	iLocal_1 = 99;
	Function_378(&iLocal_70);
	if (Function_245(4, 7) || iLocal_0)
	{
		Function_356(&iLocal_70);
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID(&Local_79 + 4[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Local_79 + 4[iVar0], 1);
			REFERENCE_ACTOR(&Local_79 + 4[iVar0]);
			CLEAR_LAST_HIT(&Local_79 + 4[iVar0]);
		}
		iVar0++;
	}
	iLocal_14 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cLocal_28, "LiarsDice_StayOutvol", 2,802597E-45f, *(&Local_79 + 60), Vector(0.0f, 0.0f, 0.0f), Vector(2,75f, 2.0f, 2,75f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_14);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_14);
	return;
}

void Function_378(int iParam0) //Position: 0x1319C / 78236
{
	Function_379(&iParam0);
	return;
}

void Function_379(int[] iParam0) //Position: 0x131A8 / 78248
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

void Function_380(var uParam0) //Position: 0x131C8 / 78280
{
	if (!Function_234(&uParam0))
	{
		Function_236(&uParam0, 0.0f);
	}
	return;
}

void Function_381() //Position: 0x131DF / 78303
{
	Function_388(&uLocal_707, "liars_dice", 5, 0);
	Function_388(&uLocal_707, "liars_dice_gped", 5, 0);
	Function_388(&uLocal_707, "liars_dice_hillb", 5, 0);
	Function_388(&uLocal_707, "$/fragments/p_gen_diceCup01x", 0, 1);
	Function_388(&uLocal_707, "$/fragments/p_gen_dice01x", 0, 1);
	Function_388(&uLocal_707, "liars_dice", 1, 0);
	Function_388(&uLocal_707, "fake_liars_dice", 1, 0);
	Function_388(&uLocal_707, "nminigames", 10, 0);
	while (!Function_382(&uLocal_707) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	UI_PUSH("Minigame");
	while (!UNK_0x9D20BDC4("numberSystem") && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	return;
}

bool Function_382(struct<2>[] Param0) //Position: 0x1330C / 78604
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_387();
	iVar1 = 0;
	if (!Function_187(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_386(&(Param0[iVar02]), 8);
		}
		else if (Function_385())
		{
			iVar1 = 1;
			Function_386(&(Param0[iVar02]), 8);
		}
		Function_386(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_187(&(Param0[iVar02]), 4))
		{
			if (!Function_187(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_187(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_187(&(Param0[02]), 8) || iVar1));
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
				Function_386(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_187(&(Param0[iVar02]), 4))
		{
			if (!Function_187(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_386(&(Param0[iVar02]), 2);
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
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_386(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_386(&(Param0[iVar02]), 2);
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
	Function_383();
	return 1;
}

void Function_383() //Position: 0x136CE / 79566
{
	if (!Function_384(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_384(int iParam0) //Position: 0x1370E / 79630
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_385() //Position: 0x1372A / 79658
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

void Function_386(struct<13> Param0) //Position: 0x13758 / 79704
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_387() //Position: 0x1376B / 79723
{
	if (!Function_384(128))
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

var Function_388(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x137AD / 79789
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_389(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_386(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_389(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x137EB / 79851
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_187(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_386(&(Param0[iVar02]), 4);
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

void Function_390() //Position: 0x138BA / 80058
{
	return;
}

void Function_391() //Position: 0x138C0 / 80064
{
	Global_42259 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_4();
	Function_392();
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

void Function_392() //Position: 0x138F0 / 80112
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

