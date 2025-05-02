//Decompiled with MagicRDR v1.0
//Function Count : 105
//Statics Count : 1031
//Natives Count : 151
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<197> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_213 = 28;
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
	var uLocal_383 = 26;
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
	var uLocal_541 = 4;
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
	var uLocal_567 = 1;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 9;
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
	int iLocal_679 = 0;
	bool bLocal_680 = false;
	struct<4> Local_681[11];
	bool bLocal_726 = false;
	var uLocal_727 = 15;
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
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
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
	var uLocal_784 = 0;
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
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
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
	var uLocal_917 = 0;
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
	var uLocal_935 = 0;
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
	var uLocal_953 = 0;
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
	var uLocal_971 = 0;
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
	var uLocal_989 = 0;
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
	var uLocal_1007 = 0;
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
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_679 = 0;
	Function_104("Initializing Rathskeller Fork", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_680 = 1000;
		switch (iLocal_679)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_679 = 1;
				}
				bLocal_680 = false;
				break;
			
			case 0x00000001:
				if (Function_103())
				{
					Global_62981 = 0;
					iLocal_679 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
				}
				bLocal_680 = false;
				break;
			
			case 0x00000002:
				if (Function_94())
				{
					Function_93(&(Global_29008[iScriptParam_0]), 32);
					Local_681[04] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand5"), 1, 0, 0, 0, 0, 1) };
					Local_681[14] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand4"), 1, 0, 0, 0, 0, 1) };
					Local_681[24] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand6"), 1, 0, 0, 0, 0, 1) };
					Local_681[34] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand1"), 1, 0, 0, 0, 0, 1) };
					Local_681[44] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand"), 1, 0, 0, 0, 0, 1) };
					Local_681[54] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand3"), 1, 0, 0, 0, 0, 1) };
					Local_681[64] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_54, "rand_idle_stand2"), 1, 0, 0, 0, 0, 1) };
					Local_681[74] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(Local_54, "sit_ground_smoke"), 1, 0, 0, 0, 0, 1) };
					Local_681[84] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards1"), 1, 0, 0, 0, 0, 1) };
					Local_681[94] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(Local_54, "sit_ground_smoke1"), 1, 0, 0, 0, 0, 1) };
					Local_681[104] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards2"), FIND_OBJECT_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards"), 1, 0, 0, 0, 0, 1) };
					iLocal_679 = 3;
				}
				bLocal_680 = false;
				break;
			
			case 0x00000003:
				bLocal_726 = LAUNCH_NEW_SCRIPT_WITH_ARGS("RathskellerForkVol", &iScriptParam_0, 2, 0);
				Function_91(&Global_6402, &Global_7343, iScriptParam_0);
				iLocal_679 = 5;
				bLocal_680 = false;
				break;
			
			case 0x00000005:
				if (Function_90(&Global_6402, &Global_7343, iScriptParam_0))
				{
					iLocal_679 = 4;
					bLocal_680 = false;
				}
				else
				{
					bLocal_680 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_89(&(Global_29008[iScriptParam_0]), 16) && Function_88(Global_29155[iScriptParam_010]))
				{
					iLocal_679 = 6;
				}
				bLocal_680 = false;
				break;
			
			case 0x00000006:
				Function_87(0, &uLocal_727, -3670,592f, 42,766f, 2100,083f);
				Function_86(0, &uLocal_727, -3658,562f, 42,571f, 2147,467f);
				Function_85(0, &uLocal_727, -3670,592f, 42,766f, 2100,083f);
				Function_84(0, &uLocal_727, -3688,003f, 42,277f, 2127,998f);
				Function_83(0, &uLocal_727, -3670,592f, 42,766f, 2100,083f);
				Function_82(0, &uLocal_727, -3660,158f, 42,768f, 2090,503f);
				Function_81(0, &uLocal_727, Local_4);
				Function_87(1, &uLocal_727, -3685,734f, 42,769f, 2111,356f);
				Function_86(1, &uLocal_727, -3650,303f, 42,768f, 2103,17f);
				Function_85(1, &uLocal_727, -3670,726f, 42,768f, 2096,519f);
				Function_84(1, &uLocal_727, -3647,079f, 42,711f, 2112,356f);
				Function_83(1, &uLocal_727, -3670,661f, 42,766f, 2098,251f);
				Function_82(1, &uLocal_727, -3646,978f, 42,768f, 2100,589f);
				Function_81(1, &uLocal_727, Local_4);
				Function_87(2, &uLocal_727, -3670,297f, 42,768f, 2102,956f);
				Function_86(2, &uLocal_727, -3623,776f, 42,478f, 2120,918f);
				Function_85(2, &uLocal_727, -3672,274f, 42,80352f, 2100,944f);
				Function_84(2, &uLocal_727, -3643,017f, 42,773f, 2115,174f);
				Function_83(2, &uLocal_727, -3670,297f, 42,768f, 2102,956f);
				Function_82(2, &uLocal_727, -3682,271f, 42,768f, 2115,177f);
				Function_81(2, &uLocal_727, Local_4);
				Function_87(3, &uLocal_727, -3672,566f, 42,77f, 2105,963f);
				Function_86(3, &uLocal_727, -3657,91f, 42,571f, 2148,834f);
				Function_85(3, &uLocal_727, -3659,798f, 42,165f, 2158,655f);
				Function_84(3, &uLocal_727, -3678,203f, 42,315f, 2128,193f);
				Function_83(3, &uLocal_727, -3659,798f, 42,165f, 2158,655f);
				Function_82(3, &uLocal_727, -3636,883f, 42,768f, 2100,621f);
				Function_81(3, &uLocal_727, Local_4);
				Function_87(4, &uLocal_727, -3666,529f, 42,768f, 2105,641f);
				Function_86(4, &uLocal_727, -3630,075f, 42,286f, 2137,849f);
				Function_85(4, &uLocal_727, -3647,079f, 42,711f, 2112,356f);
				Function_84(4, &uLocal_727, -3693,331f, 41,826f, 2147,339f);
				Function_83(4, &uLocal_727, -3666,529f, 42,768f, 2105,641f);
				Function_82(4, &uLocal_727, -3679,415f, 42,768f, 2105,135f);
				Function_81(4, &uLocal_727, Local_4);
				Function_87(5, &uLocal_727, -3676,228f, 42,787f, 2101,954f);
				Function_86(5, &uLocal_727, -3653,545f, 42,257f, 2150,282f);
				Function_85(5, &uLocal_727, -3666,709f, 42,766f, 2100,732f);
				Function_84(5, &uLocal_727, -3657,945f, 42,246f, 2160,425f);
				Function_83(5, &uLocal_727, -3668,85f, 42,766f, 2104,488f);
				Function_82(5, &uLocal_727, -3636.0f, 42,764f, 2105,484f);
				Function_81(5, &uLocal_727, Local_4);
				Function_87(6, &uLocal_727, -3673,58f, 42,566f, 2123,779f);
				Function_86(6, &uLocal_727, -3625,358f, 42,487f, 2116,833f);
				Function_85(6, &uLocal_727, -3669,69f, 42,766f, 2103,976f);
				Function_84(6, &uLocal_727, -3623,776f, 42,478f, 2120,918f);
				Function_83(6, &uLocal_727, -3672,274f, 42,80352f, 2100,944f);
				Function_82(6, &uLocal_727, -3681,774f, 42,812f, 2107,741f);
				Function_81(6, &uLocal_727, Local_4);
				Function_87(7, &uLocal_727, -3660,158f, 42,768f, 2090,503f);
				Function_86(7, &uLocal_727, -3647,722f, 42,774f, 2103,401f);
				Function_85(7, &uLocal_727, -3668,553f, 42,167f, 2153,184f);
				Function_84(7, &uLocal_727, -3668,553f, 42,167f, 2153,184f);
				Function_83(7, &uLocal_727, -3665,814f, 42,766f, 2104,718f);
				Function_82(7, &uLocal_727, -3647,722f, 42,774f, 2103,401f);
				Function_81(7, &uLocal_727, Local_4);
				Function_87(8, &uLocal_727, -3652,983f, 42,206f, 2131,918f);
				Function_86(8, &uLocal_727, -3659,361f, 42,296f, 2162,807f);
				Function_85(8, &uLocal_727, -3647,722f, 42,774f, 2103,401f);
				Function_84(8, &uLocal_727, -3650,303f, 42,768f, 2103,17f);
				Function_83(8, &uLocal_727, -3674,748f, 42,769f, 2115,355f);
				Function_82(8, &uLocal_727, -3680,114f, 42,7658f, 2109,337f);
				Function_81(8, &uLocal_727, Local_4);
				Function_87(9, &uLocal_727, -3634,12f, 42,311f, 2143,24f);
				Function_86(9, &uLocal_727, -3693,331f, 41,826f, 2147,339f);
				Function_85(9, &uLocal_727, -3640,476f, 42,812f, 2100,515f);
				Function_84(9, &uLocal_727, -3660,273f, 42,235f, 2137,475f);
				Function_83(9, &uLocal_727, -3674,429f, 42,566f, 2120,43f);
				Function_82(9, &uLocal_727, -3688,371f, 42,768f, 2114,1f);
				Function_81(9, &uLocal_727, Local_4);
				Function_87(10, &uLocal_727, -3665,977f, 42,768f, 2102,392f);
				Function_86(10, &uLocal_727, -3691,681f, 42,257f, 2121,8f);
				Function_85(10, &uLocal_727, -3658,872f, 42,165f, 2159,994f);
				Function_84(10, &uLocal_727, -3690,252f, 42,25f, 2127,047f);
				Function_83(10, &uLocal_727, -3640,476f, 42,812f, 2100,515f);
				Function_82(10, &uLocal_727, -3675,654f, 42,771f, 2108,884f);
				Function_81(10, &uLocal_727, Local_4);
				Function_87(11, &uLocal_727, -3657,002f, 42,768f, 2086,946f);
				Function_86(11, &uLocal_727, -3693,271f, 42,232f, 2124,929f);
				Function_85(11, &uLocal_727, -3674,996f, 42,534f, 2122,054f);
				Function_84(11, &uLocal_727, -3693,271f, 42,232f, 2124,929f);
				Function_83(11, &uLocal_727, -3658,872f, 42,165f, 2159,994f);
				Function_82(11, &uLocal_727, -3670,965f, 42,566f, 2122,636f);
				Function_81(11, &uLocal_727, Local_4);
				Function_87(12, &uLocal_727, -3674,996f, 42,534f, 2122,054f);
				Function_86(12, &uLocal_727, -3697,168f, 42,316f, 2124,111f);
				Function_85(12, &uLocal_727, -3674,748f, 42,769f, 2115,355f);
				Function_84(12, &uLocal_727, -3697,168f, 42,316f, 2124,111f);
				Function_83(12, &uLocal_727, -3652,986f, 42,571f, 2096,569f);
				Function_82(12, &uLocal_727, -3689,62f, 42,77f, 2119,567f);
				Function_81(12, &uLocal_727, Local_4);
				Function_87(13, &uLocal_727, -3691,756f, 42,771f, 2117,631f);
				Function_86(13, &uLocal_727, -3678,143f, 42,255f, 2149,356f);
				Function_85(13, &uLocal_727, -3693,271f, 42,232f, 2124,929f);
				Function_84(13, &uLocal_727, -3665,977f, 42,768f, 2102,392f);
				Function_83(13, &uLocal_727, -3645,426f, 42,773f, 2096,524f);
				Function_82(13, &uLocal_727, -3647,079f, 42,711f, 2112,356f);
				Function_81(13, &uLocal_727, Local_4);
				Function_87(14, &uLocal_727, -3640,871f, 42,781f, 2105,339f);
				Function_86(14, &uLocal_727, -3640,871f, 42,781f, 2105,339f);
				Function_85(14, &uLocal_727, -3640,871f, 42,781f, 2105,339f);
				Function_84(14, &uLocal_727, -3640,871f, 42,781f, 2105,339f);
				Function_83(14, &uLocal_727, -3640,871f, 42,781f, 2105,339f);
				Function_82(14, &uLocal_727, -3640,871f, 42,781f, 2105,339f);
				Function_81(14, &uLocal_727, Local_4);
				if (Global_25974[2])
				{
					Function_80(&(Global_6402[142]), 2);
				}
				else
				{
					Function_79(&(Global_6402[142]), 2);
				}
				Function_78(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_54 + 2360));
				Function_78(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_54 + 2364));
				Function_78(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_54 + 2392));
				Function_78(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_54 + 2424));
				Function_78(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_54 + 2464));
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_54, "ratv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_54, "ratv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_54, "ratv_players_room"));
				}
				else
				{
					LOG_ERROR("RAT: Cannot find ratv_players_room to restrict players room");
				}
				Function_74(&Global_6402, &Global_7343, &uLocal_727, Global_6289, iScriptParam_0);
				if (Function_89(&(Global_29008[iScriptParam_0]), 256) || !Function_73(2))
				{
					iLocal_1028 = 1;
				}
				Function_66(3, Local_54.f_2468, Local_54.f_2328, Local_54.f_2356, Function_72(iScriptParam_0, "rathskellerFork", "saloon01", 5), 0, Local_4.f_196);
				if (Global_3380)
				{
				}
				Function_93(&(Global_29008[iScriptParam_0]), 8);
				if (Function_89(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_65(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_679 = 10;
				}
				else
				{
					iLocal_679 = 7;
				}
				bLocal_680 = false;
				break;
			
			case 0x00000007:
				uVar0 = uVar0;
				Function_51(&Global_62527, 5, Global_30658[1], "$/content/Frontier/Mini_Games/HorseShoes_RAT/HorseShoes_RAT", 4294967295, 0, "RatHorseShoes", 350, -3662,194f, 42,235f, 2134,375f, 2,5f, 0, FIND_VOLUME_IN_LAYOUT(Local_4, "ratv_horseshoepit"));
				Function_51(&Global_62527, 2, Global_30658[1], "$/content/Frontier/Mini_Games/BlackJack_RAT/BlackJack_RAT", 4294967295, 0, "RatBlackJack", 349, -3640,282f, 42,782f, 2104,079f, 10.0f, 0, 0);
				Function_50(&Global_62527, 2, 20);
				Function_44(iScriptParam_0);
				iLocal_679 = 8;
				bLocal_680 = false;
				break;
			
			case 0x00000008:
				if (Function_39(iScriptParam_0, &Global_6402, iLocal_1028))
				{
					Function_35(StackVal, 0, 0,1f, 4, Local_4, 1);
					Function_31(2, 4294967295, 4294967295, 0, 3);
					Function_28(Local_4);
				}
				else
				{
					Function_35(StackVal, 1, 0,5f, 4, Local_4, 1);
					Function_31(0, 8, 4, 5, 2);
					Function_28(Local_4);
				}
				Function_93(&(Global_29008[iScriptParam_0]), 512);
				iLocal_679 = 9;
				bLocal_680 = false;
				break;
			
			case 0x00000009:
				Function_26(Local_4, iScriptParam_0);
				Function_93(&(Global_29008[iScriptParam_0]), 4);
				Function_25("Finished Initializing Rathskeller Fork", 5.0f);
				iLocal_679 = 10;
				bLocal_680 = false;
				break;
			
			case 0x0000000A:
				if (!Function_24(Global_62981, 2))
				{
					if (Function_22(&(Global_30658[1])))
					{
						Function_21(&Global_62981, 2);
					}
				}
				Function_18(&Local_681);
				if (Function_89(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_679 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_680);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	Function_11(&Global_6402, &Global_7343, iScriptParam_0, (iLocal_1028 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_65(&(Global_29008[iScriptParam_0]), 32);
	Function_65(&(Global_29008[iScriptParam_0]), 64);
	Function_65(&(Global_29008[iScriptParam_0]), 8);
	Function_65(&(Global_29008[iScriptParam_0]), 512);
	Function_65(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_726))
	{
		TERMINATE_SCRIPT(bLocal_726);
	}
	Function_25("Unloaded Rathskeller Fork", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x121B / 4635
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

void Function_2(int iParam0) //Position: 0x1251 / 4689
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x1273 / 4723
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x1289 / 4745
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x129F / 4767
{
	Function_6(&Local_54 + 4);
	RELEASE_LAYOUT_REF(Local_54);
	return;
}

void Function_6(int iParam0) //Position: 0x12B1 / 4785
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

void Function_7(var uParam0, int iParam1) //Position: 0x12D7 / 4823
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

void Function_8(var uParam0, int iParam1) //Position: 0x1405 / 5125
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x141F / 5151
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x143C / 5180
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1447 / 5191
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_17())
	{
		return;
	}
	if (Function_89(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_16(iParam2), 12));
		Function_65(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_15(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_15(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_79(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_15(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_79(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_89(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_73(2) || Function_89(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_15(uParam0[iVar02], 2) && !Function_15(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_15(uParam0[iVar02], 2) && !Function_15(uParam0[iVar02], 4))
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
			Function_93(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1632 / 5682
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_80(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_15(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_15(uParam0[iParam22], 1) && !bParam3)
	{
		Function_80(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1781 / 6017
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

int Function_14(int iParam0) //Position: 0x17AC / 6060
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

bool Function_15(var uParam0, int iParam1) //Position: 0x17E0 / 6112
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_16(int iParam0) //Position: 0x17FC / 6140
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

bool Function_17() //Position: 0x1CAA / 7338
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_18(int iParam0) //Position: 0x1CB3 / 7347
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (*iParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*iParam0)[bVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*iParam0)[bVar04], "UseCase1")))
			{
				Function_21(iParam0[bVar04] + 8, 64);
				if (Function_24(StackVal, 2))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_24(StackVal, 4), "UseCase1")))
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_24(StackVal, 16))
				{
					Function_19(iParam0[bVar04] + 8, 64);
				}
				else if (Function_24(StackVal, 32))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_19(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_19(iParam0[bVar04] + 8, 64);
				}
				if (Function_24(StackVal, 2))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_24(StackVal, 4))
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
			}
			else
			{
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[bVar04])
					{
						if (Function_24(StackVal, 64))
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_24(Function_24(StackVal, 64), 16))
					{
						Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_19(iParam0[bVar04] + 8, 64);
						if (Function_24(StackVal, 1))
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_24(Function_24(StackVal, 64), 16))
				{
					Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_19(iParam0[bVar04] + 8, 64);
					if (Function_24(StackVal, 1))
					{
						Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_20(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_24(StackVal, 64))
					{
						if (Function_24(StackVal, 32))
						{
							Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_24(StackVal, 8))
					{
						Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_19(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_24(StackVal, 64))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_24(StackVal, 8))
				{
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_19(iParam0[bVar04] + 8, 64);
					Function_20(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_24(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_19(var uParam0, bool bParam1) //Position: 0x2443 / 9283
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_20(vector3 vParam0) //Position: 0x2456 / 9302
{
	if (Function_24(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

void Function_21(var uParam0, int iParam1) //Position: 0x247D / 9341
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_22(int iParam0) //Position: 0x248C / 9356
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Function_23(*iParam0, iVar1);
		bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(*iParam0, iVar1), 1.0f, "p_gen_stool01x", 1);
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make blackjack stool fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

vector3 Function_23(int iParam0, int iParam1) //Position: 0x251E / 9502
{
	if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2685,328f, 31,35269f, 4284,425f;
				break;
			
			case 0x00000001:
				return -2686,254f, 31,35269f, 4284,686f;
				break;
			
			case 0x00000002:
				return -2686,982f, 31,35269f, 4284,026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -3640,897f, 42,76801f, 2104,235f;
				break;
			
			case 0x00000001:
				return -3640,023f, 42,76801f, 2104,636f;
				break;
			
			case 0x00000002:
				return -3639,895f, 42,76801f, 2105,61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 719,9783f, 78,4736f, 1312,265f;
				break;
			
			case 0x00000001:
				return 719,0787f, 78,4736f, 1312,605f;
				break;
			
			case 0x00000002:
				return 718,2963f, 78,4736f, 1312,011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 172,2084f, 73,75179f, 2224,902f;
				break;
			
			case 0x00000001:
				return 170,9445f, 73,75179f, 2224,73f;
				break;
			
			case 0x00000002:
				return 170,7396f, 73,74976f, 2223,559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_24(bool bParam0, int iParam1) //Position: 0x26C6 / 9926
{
	return (bParam0 && iParam1) == 0;
}

void Function_25(bool bParam0, float fParam1) //Position: 0x26D3 / 9939
{
	if (!Function_73(128))
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

void Function_26(bool bParam0, bool bParam1) //Position: 0x2711 / 10001
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
		Function_27(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_17())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x280B / 10251
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_28(bool bParam0) //Position: 0x2818 / 10264
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_30(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_29(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_29(var uParam0) //Position: 0x2903 / 10499
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_30() //Position: 0x2920 / 10528
{
	int iVar0;
	
	return iVar0;
}

void Function_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2928 / 10536
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
		Function_32();
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

void Function_32() //Position: 0x2A0C / 10764
{
	int iVar0;
	
	Global_26960 = Function_33(StackVal);
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

int Function_33(int iParam0) //Position: 0x2A5A / 10842
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_34(bool bParam0) //Position: 0x2A72 / 10866
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_35(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A87 / 10887
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
	Global_28842.f_32 = iParam1;
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
		Function_38();
	}
	if (bParam5)
	{
		Function_36(1048576);
	}
}

void Function_36(int iParam0) //Position: 0x2B9A / 11162
{
	Function_37(&Global_28842, iParam0);
	return;
}

void Function_37(var uParam0, var uParam1) //Position: 0x2BA8 / 11176
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_38() //Position: 0x2BC3 / 11203
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_36(16384);
	}
	return;
}

bool Function_39(int iParam0, var uParam1, bool bParam2) //Position: 0x2BDF / 11231
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_89(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_40(49, 0))
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

int Function_40(var uParam0, bool bParam1) //Position: 0x2C9F / 11423
{
	int iVar0;
	
	iVar0 = Function_42(uParam0);
	if (!Function_41(iVar0))
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

bool Function_41(int iParam0) //Position: 0x2CDC / 11484
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_42(int iParam0) //Position: 0x2CF3 / 11507
{
	if (!Function_43(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_43(int iParam0) //Position: 0x2D0D / 11533
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_44(int iParam0) //Position: 0x2D23 / 11555
{
	Function_46(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_45(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_45(int iParam0, var uParam1, float fParam2) //Position: 0x2D8A / 11658
{
	iParam0->f_120 = uParam1;
	(iParam0 + 120)->f_4 = fParam2;
	return;
}

void Function_46(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x2D9E / 11678
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_47(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16);
	Global_17483[iParam075].f_92 = uParam9;
}

void Function_47(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x2DE0 / 11744
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
					bVar2 = Function_49(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_48(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_49(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_48(int iParam0, int iParam1) //Position: 0x3170 / 12656
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_49(int iParam0) //Position: 0x3191 / 12689
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_50(var uParam0, int iParam1, float fParam2) //Position: 0x31A7 / 12711
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x31CB / 12747
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
	uParam0[iParam140]->f_4 = Function_60(iParam2, iParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[iParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
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
	if (Global_25974[iParam1] && Function_59(iParam1))
	{
		Function_52(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_52(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x3317 / 13079
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_58(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_57(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_56(StackVal, StackVal, vParam2);
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
		Function_55(uVar3);
		vVar7 = { StackVal, StackVal, Function_55(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_55(StackVal);
				vVar4 = { StackVal, StackVal, Function_55(StackVal) };
				if (Function_54(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_53(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_53(bool bParam0) //Position: 0x34FA / 13562
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

bool Function_54(vector3 vParam0, vector3 vParam3) //Position: 0x3631 / 13873
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_55(bool bParam0) //Position: 0x365E / 13918
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_56(vector3 vParam0) //Position: 0x36B5 / 14005
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

int Function_57(int iParam0) //Position: 0x3703 / 14083
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

bool Function_58(vector3 vParam0) //Position: 0x37BB / 14267
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_59(int iParam0) //Position: 0x37D3 / 14291
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_60(bool bParam0, bool bParam1, bool bParam2) //Position: 0x37F6 / 14326
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_64(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_61(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_61(bParam0, bParam1, bParam2, 4294967295);
}

int Function_61(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3854 / 14420
{
	var uVar0;
	
	if (!Function_63(bParam2))
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
	uVar0 = Function_64(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_62(uVar0);
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

int Function_62(int iParam0) //Position: 0x39A9 / 14761
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

bool Function_63(int iParam0) //Position: 0x39E7 / 14823
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_64(int iParam0, int iParam1, int iParam2) //Position: 0x39FC / 14844
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_65(var uParam0, int iParam1) //Position: 0x3A1C / 14876
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_66(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x3A33 / 14899
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_71(bParam1, bParam2);
	if (!Function_70(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_69(bParam4, 0);
		}
		else
		{
			Function_68(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_69(bParam5, 0);
		}
		else
		{
			Function_68(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", true);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), false);
			if (DECOR_CHECK_EXIST(bParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(bParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		GET_OBJECT_POSITION(bParam6, &uVar0);
		bVar3[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		bVar3[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(bVar3[0]))
		{
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_67(bVar3[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar6) && !bVar6 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar6);
			}
			GRINGO_ENABLE_SPAWN(bVar3[0], 0);
		}
		if (IS_GRINGO_VALID(bVar3[1]))
		{
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_67(bVar3[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar7) && !bVar7 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar7, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar7, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar7);
			}
			GRINGO_ENABLE_SPAWN(bVar3[1], 0);
		}
		if (Global_16537[iParam021].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(bParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(bParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", true);
		}
	}
	Global_16537[iParam021].f_68 = bParam4;
	Global_16537[iParam021].f_72 = bParam5;
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_56))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_56);
		Global_16537[iParam021].f_56 = "";
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_60))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_60);
		Global_16537[iParam021].f_60 = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iParam021].f_64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iParam021].f_64);
		Global_16537[iParam021].f_64 = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(bParam2, &(Global_16537[iParam021]));
	}
	Global_16537[iParam021].f_12 = GET_OBJECT_HEADING(bParam2);
	GET_OBJECT_POSITION(bParam3, &Global_16537[iParam021] + 16);
	Global_16537[iParam021].f_76 = bParam6;
}

var Function_67(bool bParam0, bool bParam1) //Position: 0x3DC6 / 15814
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_68(bool bParam0, bool bParam1) //Position: 0x3DD3 / 15827
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

void Function_69(bool bParam0, bool bParam1) //Position: 0x3E27 / 15911
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

bool Function_70(int iParam0) //Position: 0x3E78 / 15992
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_71(bool bParam0, bool bParam1) //Position: 0x3E8E / 16014
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

var Function_72(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x3FE8 / 16360
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_4(iParam0))
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

bool Function_73(int iParam0) //Position: 0x4087 / 16519
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_74(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x40A3 / 16547
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_73(2))
	{
		return;
	}
	if (Function_89(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_15(uParam0[iVar02], 2))
		{
			if (Function_75(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_65(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_93(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_75(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x4155 / 16725
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_89(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_15(uParam0, 2))
	{
		return 1;
	}
	if (Function_15(uParam0, 4))
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
		uParam1->f_8 = Function_77(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_58(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_79(uParam0, 4);
	}
	Function_76(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_76(bool bParam0, bool bParam1) //Position: 0x42C0 / 17088
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_58(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_58(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_58(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_58(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_58(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_58(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_77(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x43FC / 17404
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

void Function_78(var uParam0, bool bParam1) //Position: 0x4515 / 17685
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x455D / 17757
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x4574 / 17780
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_81(int iParam0, var uParam1, bool bParam2) //Position: 0x4583 / 17795
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

void Function_82(int iParam0, var uParam1, vector3 vParam2) //Position: 0x45DE / 17886
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_54(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_83(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4644 / 17988
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_54(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_84(int iParam0, var uParam1, vector3 vParam2) //Position: 0x46AC / 18092
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_54(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_85(int iParam0, var uParam1, vector3 vParam2) //Position: 0x4716 / 18198
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_54(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_86(int iParam0, var uParam1, vector3 vParam2) //Position: 0x477B / 18299
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_54(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_87(int iParam0, var uParam1, vector3 vParam2) //Position: 0x47E3 / 18403
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_54(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_88(int iParam0) //Position: 0x4846 / 18502
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_89(&(Global_29008[iParam0]), 4);
}

bool Function_89(var uParam0, int iParam1) //Position: 0x4862 / 18530
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_90(var uParam0, var uParam1, int iParam2) //Position: 0x487E / 18558
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_17())
	{
		return 1;
	}
	if (Function_89(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_16(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_15(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_15(uParam0[iVar02], 8))
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

void Function_91(var uParam0, var uParam1, bool bParam2) //Position: 0x494A / 18762
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_17())
	{
		return;
	}
	if (!Function_89(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_16(bParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_16(bParam2), 12));
			Function_93(&(Global_29008[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_80(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_80(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

struct<16> Function_92(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4A20 / 18976
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_21(&Var0 + 8, 1);
	}
	else
	{
		Function_19(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_21(&Var0 + 8, 2);
	}
	else
	{
		Function_19(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_21(&Var0 + 8, 4);
	}
	else
	{
		Function_19(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_21(&Var0 + 8, 8);
	}
	else
	{
		Function_19(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_21(&Var0 + 8, 16);
	}
	else
	{
		Function_19(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_21(&Var0 + 8, 32);
	}
	else
	{
		Function_19(&Var0 + 8, 32);
	}
	Function_19(&Var0 + 8, 64);
	Function_19(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

void Function_93(var uParam0, int iParam1) //Position: 0x4AE9 / 19177
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_94() //Position: 0x4AF8 / 19192
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	
	Function_102(3, 3);
	bVar0 = bVar0;
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/knl_hoe_soil", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/pitch_hay", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/cow_knl", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/multistage_hoe", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/whore_and_john", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/whore_flirt", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_link", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/prostitute_bed", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_washfacebowl_n_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_campfire", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/bar_lean_stand", 1, 0);
	Function_100(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	if (!Function_95(&Local_54 + 4))
	{
		return 0;
	}
	Local_54 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (!IS_LAYOUTREF_VALID(Local_54))
	{
		Local_54 = CREATE_LAYOUT("RathskellerFork_layout");
	}
	Local_54.f_632 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_54, 8, 0);
	*(&Local_54 + 636[06]) = { -3690,421f, 42,76657f, 2117,526f };
	*(&Local_54 + 636[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag21", -3690,421f, 42,76657f, 2117,526f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_54.f_632);
	*(&Local_54 + 636[16]) = { -3688,761f, 42,76756f, 2115,26f };
	*(&Local_54 + 636[16] + 12) = { 0.0f, -99,3821f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag1", -3688,761f, 42,76756f, 2115,26f, 0.0f, -99,3821f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_54.f_632);
	*(&Local_54 + 636[26]) = { -3688,601f, 42,77974f, 2117,189f };
	*(&Local_54 + 636[26] + 12) = { 0.0f, -59,99129f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag2", -3688,601f, 42,77974f, 2117,189f, 0.0f, -59,99129f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_54.f_632);
	*(&Local_54 + 636[36]) = { -3685,851f, 42,76657f, 2117,984f };
	*(&Local_54 + 636[36] + 12) = { 2,574276f, -121,3001f, -1,489254f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag3", -3685,851f, 42,76657f, 2117,984f, 2,574276f, -121,3001f, -1,489254f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_54.f_632);
	*(&Local_54 + 636[46]) = { -3687,377f, 42,76657f, 2119,794f };
	*(&Local_54 + 636[46] + 12) = { 0.0f, -53,5044f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag4", -3687,377f, 42,76657f, 2119,794f, 0.0f, -53,5044f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_54.f_632);
	*(&Local_54 + 636[56]) = { -3686,753f, 42,7828f, 2121,331f };
	*(&Local_54 + 636[56] + 12) = { 0.0f, -42,168f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag5", -3686,753f, 42,7828f, 2121,331f, 0.0f, -42,168f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_54.f_632);
	*(&Local_54 + 636[66]) = { -3685,178f, 42,76667f, 2110,612f };
	*(&Local_54 + 636[66] + 12) = { 0.0f, -7,313276f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag6", -3685,178f, 42,76667f, 2110,612f, 0.0f, -7,313276f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_54.f_632);
	*(&Local_54 + 636[76]) = { -3681,503f, 42,76526f, 2108,236f };
	*(&Local_54 + 636[76] + 12) = { 0.0f, -136,4688f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag7", -3681,503f, 42,76526f, 2108,236f, 0.0f, -136,4688f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_54.f_632);
	*(&Local_54 + 636[86]) = { -3683,452f, 42,76667f, 2110,805f };
	*(&Local_54 + 636[86] + 12) = { 0.0f, -31,74464f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag8", -3683,452f, 42,76667f, 2110,805f, 0.0f, -31,74464f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_54.f_632);
	*(&Local_54 + 636[96]) = { -3681,585f, 42,76667f, 2110,805f };
	*(&Local_54 + 636[96] + 12) = { 0.0f, -47,57779f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag9", -3681,585f, 42,76667f, 2110,805f, 0.0f, -47,57779f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_54.f_632);
	*(&Local_54 + 636[106]) = { -3680,94f, 42,76666f, 2112,286f };
	*(&Local_54 + 636[106] + 12) = { 0.0f, -50,56416f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag10", -3680,94f, 42,76666f, 2112,286f, 0.0f, -50,56416f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_54.f_632);
	*(&Local_54 + 636[116]) = { -3681,104f, 42,76667f, 2113,848f };
	*(&Local_54 + 636[116] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag11", -3681,104f, 42,76667f, 2113,848f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_54.f_632);
	*(&Local_54 + 636[126]) = { -3678,296f, 42,76667f, 2112,776f };
	*(&Local_54 + 636[126] + 12) = { 0.0f, -50,14564f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag12", -3678,296f, 42,76667f, 2112,776f, 0.0f, -50,14564f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_54.f_632);
	*(&Local_54 + 636[136]) = { -3676,016f, 42,76659f, 2102,59f };
	*(&Local_54 + 636[136] + 12) = { 0.0f, -96,77204f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag13", -3676,016f, 42,76659f, 2102,59f, 0.0f, -96,77204f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_54.f_632);
	*(&Local_54 + 636[146]) = { -3678,728f, 42,79834f, 2104,601f };
	*(&Local_54 + 636[146] + 12) = { 0.0f, -11,86133f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag14", -3678,728f, 42,79834f, 2104,601f, 0.0f, -11,86133f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_54.f_632);
	*(&Local_54 + 636[156]) = { -3677,173f, 42,76661f, 2104,406f };
	*(&Local_54 + 636[156] + 12) = { -1,71737f, -62,85891f, 3,577658f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag15", -3677,173f, 42,76661f, 2104,406f, -1,71737f, -62,85891f, 3,577658f);
	DECOR_SET_STRING(bVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_54.f_632);
	*(&Local_54 + 636[166]) = { -3677,039f, 42,76942f, 2107,316f };
	*(&Local_54 + 636[166] + 12) = { 0.0f, 39,49364f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag16", -3677,039f, 42,76942f, 2107,316f, 0.0f, 39,49364f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_54.f_632);
	*(&Local_54 + 636[176]) = { -3675,624f, 42,77847f, 2104,71f };
	*(&Local_54 + 636[176] + 12) = { 0.0f, -79,55956f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag17", -3675,624f, 42,77847f, 2104,71f, 0.0f, -79,55956f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_54.f_632);
	*(&Local_54 + 636[186]) = { -3675,201f, 42,76962f, 2106,584f };
	*(&Local_54 + 636[186] + 12) = { 0.0f, -46,32114f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag18", -3675,201f, 42,76962f, 2106,584f, 0.0f, -46,32114f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_54.f_632);
	*(&Local_54 + 636[196]) = { -3673,926f, 42,65609f, 2107,91f };
	*(&Local_54 + 636[196] + 12) = { 0.0f, -34,26025f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag20", -3673,926f, 42,65609f, 2107,91f, 0.0f, -34,26025f, 0.0f);
	DECOR_SET_STRING(bVar20, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_54.f_632);
	*(&Local_54 + 636[206]) = { -3673,49f, 42,77097f, 2099,876f };
	*(&Local_54 + 636[206] + 12) = { 0.0f, -8,626788f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag26", -3673,49f, 42,77097f, 2099,876f, 0.0f, -8,626788f, 0.0f);
	DECOR_SET_STRING(bVar21, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_54.f_632);
	*(&Local_54 + 636[216]) = { -3671,24f, 42,77168f, 2097,54f };
	*(&Local_54 + 636[216] + 12) = { 0.0f, -88,5133f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag22", -3671,24f, 42,77168f, 2097,54f, 0.0f, -88,5133f, 0.0f);
	DECOR_SET_STRING(bVar22, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_54.f_632);
	*(&Local_54 + 636[226]) = { -3670,883f, 42,77168f, 2099,783f };
	*(&Local_54 + 636[226] + 12) = { 0.0f, -48,68703f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag23", -3670,883f, 42,77168f, 2099,783f, 0.0f, -48,68703f, 0.0f);
	DECOR_SET_STRING(bVar23, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_54.f_632);
	*(&Local_54 + 636[236]) = { -3667,238f, 42,77149f, 2100,325f };
	*(&Local_54 + 636[236] + 12) = { 0.0f, -42,16856f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag24", -3667,238f, 42,77149f, 2100,325f, 0.0f, -42,16856f, 0.0f);
	DECOR_SET_STRING(bVar24, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_54.f_632);
	*(&Local_54 + 636[246]) = { -3665,39f, 42,77127f, 2102,768f };
	*(&Local_54 + 636[246] + 12) = { 6,483119f, -77,13678f, -7,462729f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag25", -3665,39f, 42,77127f, 2102,768f, 6,483119f, -77,13678f, -7,462729f);
	DECOR_SET_STRING(bVar25, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_54.f_632);
	*(&Local_54 + 636[256]) = { -3669,585f, 42,768f, 2103,871f };
	*(&Local_54 + 636[256] + 12) = { 0.0f, -43,54906f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag105", -3669,585f, 42,768f, 2103,871f, 0.0f, -43,54906f, 0.0f);
	DECOR_SET_STRING(bVar26, "Useanim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_54.f_632);
	*(&Local_54 + 636[266]) = { -3667,494f, 42,768f, 2105,735f };
	*(&Local_54 + 636[266] + 12) = { 0.0f, -100,0641f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag103", -3667,494f, 42,768f, 2105,735f, 0.0f, -100,0641f, 0.0f);
	DECOR_SET_STRING(bVar27, "Useanim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_54.f_632);
	*(&Local_54 + 636[276]) = { -3674,031f, 42,768f, 2100,339f };
	*(&Local_54 + 636[276] + 12) = { 0.0f, 131,7315f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag104", -3674,031f, 42,768f, 2100,339f, 0.0f, 131,7315f, 0.0f);
	DECOR_SET_STRING(bVar28, "Useanim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_54.f_632);
	Local_54.f_1312 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", Local_54, 8, 0);
	*(&Local_54 + 1316[06]) = { -3633,964f, 42,75944f, 2103,98f };
	*(&Local_54 + 1316[06] + 12) = { 0.0f, -186,5125f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag47", -3633,964f, 42,75944f, 2103,98f, 0.0f, -186,5125f, 0.0f);
	DECOR_SET_STRING(bVar29, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_54.f_1312);
	*(&Local_54 + 1316[16]) = { -3635,916f, 42,75944f, 2101,338f };
	*(&Local_54 + 1316[16] + 12) = { 0.0f, 177,4509f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag28", -3635,916f, 42,75944f, 2101,338f, 0.0f, 177,4509f, 0.0f);
	DECOR_SET_STRING(bVar30, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_54.f_1312);
	*(&Local_54 + 1316[26]) = { -3638,646f, 42,75944f, 2101,697f };
	*(&Local_54 + 1316[26] + 12) = { 0.0f, 253,8592f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag29", -3638,646f, 42,75944f, 2101,697f, 0.0f, 253,8592f, 0.0f);
	DECOR_SET_STRING(bVar31, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_54.f_1312);
	*(&Local_54 + 1316[36]) = { -3641,857f, 42,75944f, 2095,534f };
	*(&Local_54 + 1316[36] + 12) = { 0.0f, -76,46706f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag30", -3641,857f, 42,75944f, 2095,534f, 0.0f, -76,46706f, 0.0f);
	DECOR_SET_STRING(bVar32, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_54.f_1312);
	*(&Local_54 + 1316[46]) = { -3639,907f, 42,75944f, 2097,151f };
	*(&Local_54 + 1316[46] + 12) = { 0.0f, -53,90505f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag31", -3639,907f, 42,75944f, 2097,151f, 0.0f, -53,90505f, 0.0f);
	DECOR_SET_STRING(bVar33, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_54.f_1312);
	*(&Local_54 + 1316[56]) = { -3638,593f, 42,75944f, 2098,571f };
	*(&Local_54 + 1316[56] + 12) = { 0.0f, -53,43711f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag32", -3638,593f, 42,75944f, 2098,571f, 0.0f, -53,43711f, 0.0f);
	DECOR_SET_STRING(bVar34, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_54.f_1312);
	*(&Local_54 + 1316[66]) = { -3644,539f, 42,75944f, 2097,561f };
	*(&Local_54 + 1316[66] + 12) = { 0.0f, -113,4357f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag33", -3644,539f, 42,75944f, 2097,561f, 0.0f, -113,4357f, 0.0f);
	DECOR_SET_STRING(bVar35, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_54.f_1312);
	*(&Local_54 + 1316[76]) = { -3640,97f, 42,75944f, 2101,338f };
	*(&Local_54 + 1316[76] + 12) = { 0.0f, -133,2514f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag34", -3640,97f, 42,75944f, 2101,338f, 0.0f, -133,2514f, 0.0f);
	DECOR_SET_STRING(bVar36, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_54.f_1312);
	*(&Local_54 + 1316[86]) = { -3636,482f, 42,75944f, 2106,477f };
	*(&Local_54 + 1316[86] + 12) = { 0.0f, -171,396f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag35", -3636,482f, 42,75944f, 2106,477f, 0.0f, -171,396f, 0.0f);
	DECOR_SET_STRING(bVar37, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_54.f_1312);
	*(&Local_54 + 1316[96]) = { -3638,555f, 42,75944f, 2107,986f };
	*(&Local_54 + 1316[96] + 12) = { 0.0f, 164,1823f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag36", -3638,555f, 42,75944f, 2107,986f, 0.0f, 164,1823f, 0.0f);
	DECOR_SET_STRING(bVar38, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_54.f_1312);
	*(&Local_54 + 1316[106]) = { -3638,548f, 42,75944f, 2104,128f };
	*(&Local_54 + 1316[106] + 12) = { 0.0f, 148,0136f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag37", -3638,548f, 42,75944f, 2104,128f, 0.0f, 148,0136f, 0.0f);
	DECOR_SET_STRING(bVar39, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_54.f_1312);
	*(&Local_54 + 1316[116]) = { -3642,714f, 42,75944f, 2104,737f };
	*(&Local_54 + 1316[116] + 12) = { 0.0f, 267,3085f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag38", -3642,714f, 42,75944f, 2104,737f, 0.0f, 267,3085f, 0.0f);
	DECOR_SET_STRING(bVar40, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_54.f_1312);
	*(&Local_54 + 1316[126]) = { -3647,173f, 42,75944f, 2099,934f };
	*(&Local_54 + 1316[126] + 12) = { 0.0f, -112,4485f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag39", -3647,173f, 42,75944f, 2099,934f, 0.0f, -112,4485f, 0.0f);
	DECOR_SET_STRING(bVar41, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_54.f_1312);
	*(&Local_54 + 1316[136]) = { -3649,158f, 42,75944f, 2100,696f };
	*(&Local_54 + 1316[136] + 12) = { 0.0f, -222,4845f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag40", -3649,158f, 42,75944f, 2100,696f, 0.0f, -222,4845f, 0.0f);
	DECOR_SET_STRING(bVar42, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_54.f_1312);
	*(&Local_54 + 1316[146]) = { -3647,137f, 42,75944f, 2102,642f };
	*(&Local_54 + 1316[146] + 12) = { 0.0f, -14,34616f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag41", -3647,137f, 42,75944f, 2102,642f, 0.0f, -14,34616f, 0.0f);
	DECOR_SET_STRING(bVar43, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_54.f_1312);
	*(&Local_54 + 1316[156]) = { -3645,21f, 42,75944f, 2103,936f };
	*(&Local_54 + 1316[156] + 12) = { 0.0f, -64,68635f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag42", -3645,21f, 42,75944f, 2103,936f, 0.0f, -64,68635f, 0.0f);
	DECOR_SET_STRING(bVar44, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_54.f_1312);
	*(&Local_54 + 1316[166]) = { -3639,448f, 42,75944f, 2109,435f };
	*(&Local_54 + 1316[166] + 12) = { 0.0f, -202,6411f, 0.0f };
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag43", -3639,448f, 42,75944f, 2109,435f, 0.0f, -202,6411f, 0.0f);
	DECOR_SET_STRING(bVar45, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_54.f_1312);
	*(&Local_54 + 1316[176]) = { -3642,616f, 42,75944f, 2109,995f };
	*(&Local_54 + 1316[176] + 12) = { 0.0f, -137,0038f, 0.0f };
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag44", -3642,616f, 42,75944f, 2109,995f, 0.0f, -137,0038f, 0.0f);
	DECOR_SET_STRING(bVar46, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_54.f_1312);
	*(&Local_54 + 1316[186]) = { -3650,916f, 42,75944f, 2098,718f };
	*(&Local_54 + 1316[186] + 12) = { 0.0f, 169,8372f, 0.0f };
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag45", -3650,916f, 42,75944f, 2098,718f, 0.0f, 169,8372f, 0.0f);
	DECOR_SET_STRING(bVar47, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_54.f_1312);
	*(&Local_54 + 1316[196]) = { -3653,219f, 42,75944f, 2097,228f };
	*(&Local_54 + 1316[196] + 12) = { 0.0f, -208,6359f, 0.0f };
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag46", -3653,219f, 42,75944f, 2097,228f, 0.0f, -208,6359f, 0.0f);
	DECOR_SET_STRING(bVar48, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_54.f_1312);
	*(&Local_54 + 1316[206]) = { -3650,011f, 42,77294f, 2088,753f };
	*(&Local_54 + 1316[206] + 12) = { 0.0f, -138,8999f, 0.0f };
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag69", -3650,011f, 42,77294f, 2088,753f, 0.0f, -138,8999f, 0.0f);
	DECOR_SET_STRING(bVar49, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_54.f_1312);
	*(&Local_54 + 1316[216]) = { -3652,235f, 42,77294f, 2090,793f };
	*(&Local_54 + 1316[216] + 12) = { 0.0f, -131,6734f, 0.0f };
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag48", -3652,235f, 42,77294f, 2090,793f, 0.0f, -131,6734f, 0.0f);
	DECOR_SET_STRING(bVar50, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_54.f_1312);
	*(&Local_54 + 1316[226]) = { -3654,371f, 42,77294f, 2093,413f };
	*(&Local_54 + 1316[226] + 12) = { 0.0f, -84,18175f, 0.0f };
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag49", -3654,371f, 42,77294f, 2093,413f, 0.0f, -84,18175f, 0.0f);
	DECOR_SET_STRING(bVar51, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_54.f_1312);
	*(&Local_54 + 1316[236]) = { -3656,444f, 42,77294f, 2094,846f };
	*(&Local_54 + 1316[236] + 12) = { 0.0f, -97,07621f, 0.0f };
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag59", -3656,444f, 42,77294f, 2094,846f, 0.0f, -97,07621f, 0.0f);
	DECOR_SET_STRING(bVar52, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_54.f_1312);
	*(&Local_54 + 1316[246]) = { -3656,406f, 42,77294f, 2096,931f };
	*(&Local_54 + 1316[246] + 12) = { 0.0f, -121,33f, 0.0f };
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag60", -3656,406f, 42,77294f, 2096,931f, 0.0f, -121,33f, 0.0f);
	DECOR_SET_STRING(bVar53, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_54.f_1312);
	*(&Local_54 + 1316[256]) = { -3650,087f, 42,768f, 2102,919f };
	*(&Local_54 + 1316[256] + 12) = { 0.0f, -220,8158f, 0.0f };
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_54, "FLAG0", -3650,087f, 42,768f, 2102,919f, 0.0f, -220,8158f, 0.0f);
	DECOR_SET_STRING(bVar54, "Useanim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_54.f_1312);
	Local_54.f_1944 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", Local_54, 8, 0);
	*(&Local_54 + 1948[06]) = { -3696,788f, 42,351f, 2128,458f };
	*(&Local_54 + 1948[06] + 12) = { 0.0f, 158,399f, 0.0f };
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag72", -3696,788f, 42,351f, 2128,458f, 0.0f, 158,399f, 0.0f);
	DECOR_SET_STRING(bVar55, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_54.f_1944);
	*(&Local_54 + 1948[16]) = { -3697,068f, 42,315f, 2123,621f };
	*(&Local_54 + 1948[16] + 12) = { 0.0f, 368,8086f, 0.0f };
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag70", -3697,068f, 42,315f, 2123,621f, 0.0f, 368,8086f, 0.0f);
	DECOR_SET_STRING(bVar56, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_54.f_1944);
	*(&Local_54 + 1948[26]) = { -3695,489f, 42,313f, 2125,914f };
	*(&Local_54 + 1948[26] + 12) = { 0.0f, 144,37f, 0.0f };
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag102", -3695,489f, 42,313f, 2125,914f, 0.0f, 144,37f, 0.0f);
	DECOR_SET_STRING(bVar57, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_54.f_1944);
	*(&Local_54 + 1948[36]) = { -3691,544f, 42,27983f, 2121,915f };
	*(&Local_54 + 1948[36] + 12) = { 0.0f, -48,48328f, 0.0f };
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag101", -3691,544f, 42,27983f, 2121,915f, 0.0f, -48,48328f, 0.0f);
	DECOR_SET_STRING(bVar58, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_54.f_1944);
	Local_54.f_2048 = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", Local_54, 8, 0);
	*(&Local_54 + 2052[06]) = { -3626,25f, 42,33508f, 2126,921f };
	*(&Local_54 + 2052[06] + 12) = { -0,8580113f, -3,415175f, 0,2293949f };
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag100", -3626,25f, 42,33508f, 2126,921f, -0,8580113f, -3,415175f, 0,2293949f);
	DECOR_SET_STRING(bVar59, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_54.f_2048);
	Local_54.f_2080 = CREATE_OBJECTSET_IN_LAYOUT("nhoegrpSet", Local_54, 8, 0);
	*(&Local_54 + 2084[06]) = { -3698,595f, 42,353f, 2127,94f };
	*(&Local_54 + 2084[06] + 12) = { 0.0f, 25,743f, 0.0f };
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag106", -3698,595f, 42,353f, 2127,94f, 0.0f, 25,743f, 0.0f);
	DECOR_SET_STRING(bVar60, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_54.f_2080);
	*(&Local_54 + 2084[16]) = { -3697,83f, 42,319f, 2124,484f };
	*(&Local_54 + 2084[16] + 12) = { 0.0f, 44,604f, 0.0f };
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag107", -3697,83f, 42,319f, 2124,484f, 0.0f, 44,604f, 0.0f);
	DECOR_SET_STRING(bVar61, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_54.f_2080);
	*(&Local_54 + 2084[26]) = { -3696,609f, 42,315f, 2122,793f };
	*(&Local_54 + 2084[26] + 12) = { 0.0f, 28,512f, 0.0f };
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag108", -3696,609f, 42,315f, 2122,793f, 0.0f, 28,512f, 0.0f);
	DECOR_SET_STRING(bVar62, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_54.f_2080);
	*(&Local_54 + 2084[36]) = { -3694,974f, 42,278f, 2120,977f };
	*(&Local_54 + 2084[36] + 12) = { 0.0f, 58,089f, 0.0f };
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag109", -3694,974f, 42,278f, 2120,977f, 0.0f, 58,089f, 0.0f);
	DECOR_SET_STRING(bVar63, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_54.f_2080);
	*(&Local_54 + 2084[46]) = { -3692,893f, 42,22f, 2122,521f };
	*(&Local_54 + 2084[46] + 12) = { 0.0f, 307,94f, 0.0f };
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag110", -3692,893f, 42,22f, 2122,521f, 0.0f, 307,94f, 0.0f);
	DECOR_SET_STRING(bVar64, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_54.f_2080);
	*(&Local_54 + 2084[56]) = { -3694,005f, 42,287f, 2127,495f };
	*(&Local_54 + 2084[56] + 12) = { 0.0f, 122,822f, 0.0f };
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag111", -3694,005f, 42,287f, 2127,495f, 0.0f, 122,822f, 0.0f);
	DECOR_SET_STRING(bVar65, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_54.f_2080);
	*(&Local_54 + 2084[66]) = { -3696,49f, 42,345f, 2127,585f };
	*(&Local_54 + 2084[66] + 12) = { 0.0f, 358,753f, 0.0f };
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag112", -3696,49f, 42,345f, 2127,585f, 0.0f, 358,753f, 0.0f);
	DECOR_SET_STRING(bVar66, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_54.f_2080);
	*(&Local_54 + 2084[76]) = { -3697,156f, 42,34469f, 2122,77f };
	*(&Local_54 + 2084[76] + 12) = { 0.0f, 93,692f, 0.0f };
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag113", -3697,156f, 42,34469f, 2122,77f, 0.0f, 93,692f, 0.0f);
	DECOR_SET_STRING(bVar67, "UseAnim", "exit");
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_54.f_2080);
	*(&Local_54 + 2084[86]) = { -3697,338f, 42,354f, 2128,995f };
	*(&Local_54 + 2084[86] + 12) = { 0.0f, 300,583f, 0.0f };
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_54, "Flag114", -3697,338f, 42,354f, 2128,995f, 0.0f, 300,583f, 0.0f);
	DECOR_SET_STRING(bVar68, "UseAnim", "work");
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_54.f_2080);
	*(&Local_54 + 2304) = { -3652,31f, 42,81397f, 2086,111f };
	*(&Local_54 + 2304 + 12) = { 0.0f, -137,2072f, 0.0f };
	Local_54.f_2328 = CREATE_POINT_IN_LAYOUT(Local_54, "player_save_flag_RAT", -3652,31f, 42,81397f, 2086,111f, 0.0f, -137,2072f, 0.0f);
	*(&Local_54 + 2332) = { -3650,2f, 42,81396f, 2088,115f };
	*(&Local_54 + 2332 + 12) = { 0.0f, 44,37267f, 0.0f };
	Local_54.f_2356 = CREATE_POINT_IN_LAYOUT(Local_54, "player_purchase_flag_RAT", -3650,2f, 42,81396f, 2088,115f, 0.0f, 44,37267f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -3690,972f, 42,29477f, 2136,922f, 0.0f, -46,26979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel", "repair_kneel", -3663,223f, 42,33854f, 2140,282f, 0.0f, -132,9075f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "dealer_and_customer", "dealer_and_customer", -3678,143f, 42,25486f, 2149,356f, 0.0f, -44,55724f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend", "horse_tend", -3667,517f, 42,16472f, 2159,047f, 0.0f, -44,43609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend1", "horse_tend", -3669,857f, 42,16472f, 2156,374f, 0.0f, -44,96939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend2", "horse_tend", -3664,325f, 42,16472f, 2161,49f, 0.0f, -45,79664f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend3", "horse_tend", -3658,466f, 42,16472f, 2142,841f, 0.0f, -409,3874f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_hoe_soil", "knl_hoe_soil", -3696,611f, 42,37539f, 2129,348f, 0.0f, -4,837045f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_hoe_soil2", "knl_hoe_soil", -3693,992f, 42,3201f, 2121,669f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "pitch_hay1", "npitch_hay", -3623,776f, 42,47753f, 2120,917f, 0.0f, -39,90781f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_horseshoe", "stand_horseshoe", -3668,916f, 42,26382f, 2157,463f, 0.0f, -223,8171f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3693,331f, 41,82631f, 2147,339f, 0.0f, 152,0693f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -3673,459f, 42,80467f, 2110,356f, 0.0f, 225,5732f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_guntricks_e_any", "stand_guntricks_e_any", -3682,397f, 42,77182f, 2121,455f, 0.0f, -23,29353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_hammerground_w_any", "stand_hammerground_w_any", -3643,018f, 42,77326f, 2115,174f, 0.0f, 79,13505f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel1", "repair_kneel", -3634,21f, 42,36747f, 2111,366f, 0.0f, -318,2672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend4", "horse_tend", -3658,072f, 42,20523f, 2138,98f, 0.0f, -490,6287f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lean_fence_L_talking", "lean_fence_L_talking", -3652,983f, 42,20594f, 2131,918f, 0.0f, 133,7825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "cow_knl", "cow_knl", -3617,306f, 42,4679f, 2117,167f, 0.0f, 11,85904f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Pee", "Pee", -3689,654f, 42,24635f, 2141,875f, 0.0f, -249,466f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "look_distance_binocs", "look_distance_binocs", -3630,075f, 42,2864f, 2137,849f, 0.0f, -135,5146f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lean_fence_H_talking1", "lean_fence_H_talking", -3651,179f, 42,4371f, 2157,729f, 0.0f, -135,0432f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_chopveggies_w_any", "stand_chopveggies_w_any", -3676,219f, 42,76995f, 2100,772f, 0.0f, -224,7426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_stirringpot_w_any", "stand_stirringpot_w_any", -3672,016f, 42,76637f, 2101,302f, 0.0f, 127,0199f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "look_out_window_R", "look_out_window_R", -3634,856f, 42,768f, 2100,554f, 0.0f, -44,7819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand1", "smoking_stand", -3671,104f, 42,7681f, 2108,43f, 0.0f, -103,1583f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -3649,59f, 42,86943f, 2106,141f, 0.0f, -225,4669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -3676,486f, 42,76659f, 2114,697f, 0.0f, -97,41667f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand2", "smoking_stand", -3641,632f, 42,76752f, 2107,387f, 0.0f, -27,25682f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", -3667,49f, 42,5698f, 2096,09f, 0.0f, -47,31372f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3644,648f, 42,77397f, 2098,745f, 0.0f, -62,41047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand3", "smoking_stand", -3648,117f, 42,77431f, 2099,389f, 0.0f, 188,7344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "nlean_rail", "nlean_rail", -3655,866f, 42,22029f, 2132,881f, 0.0f, 226,4491f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_fence_low", "sit_fence_low", -3642,916f, 42,35201f, 2142,815f, 0.0f, -225,5986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand4", "smoking_stand", -3644,14f, 42,76117f, 2100.0f, 0.0f, 199,6582f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel2", "repair_kneel", -3658,676f, 42,15199f, 2163,222f, 0.0f, -223,7318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3637,961f, 42,76351f, 2102,534f, 0.0f, -117,2092f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_guntricks_e_any1", "stand_guntricks_e_any", -3639,935f, 42,76358f, 2101,6f, 0.0f, -180,2906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_guntricks_e_any2", "stand_guntricks_e_any", -3640,04f, 42,76315f, 2103,36f, 0.0f, -1,545796f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -3620,629f, 42,31486f, 2124,605f, 0.0f, 44,51436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel3", "repair_kneel", -3625,358f, 42,48705f, 2116,833f, 0.0f, -135,5011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "look_out_window_R1", "look_out_window_R", -3674,748f, 42,76939f, 2115,354f, 0.0f, -133,1731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand5", "smoking_stand", -3619,019f, 42,42979f, 2120,017f, 0.0f, 113,1382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel4", "repair_kneel", -3668,553f, 42,16705f, 2153,184f, 0.0f, 136,3032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_hoe_soil3", "knl_hoe_soil", -3695,152f, 42,30843f, 2127,682f, 0.0f, -31,76305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_hoe_soil4", "knl_hoe_soil", -3696,121f, 42,33998f, 2125,727f, 0.0f, 196,1988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_hoe_soil5", "knl_hoe_soil", -3699,151f, 42,36283f, 2125,514f, 0.0f, 105,9174f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_hoe_soil6", "knl_hoe_soil", -3690,835f, 42,30843f, 2124,568f, 0.0f, 300,9577f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel5", "repair_kneel", -3692,732f, 42,30072f, 2129,306f, 0.0f, 50,84814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Multistage_bucket", "Multistage_bucket", -3691,542f, 42,27983f, 2121,917f, 0.0f, 312,5376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_hammer_wall", "stand_hammer_wall", -3672,585f, 42,167f, 2150,423f, 0.0f, -136,6001f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand6", "smoking_stand", -3649,072f, 42,78126f, 2106,972f, 0.0f, -244,2243f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "dealer_and_customer1", "dealer_and_customer", -3645,426f, 42,77294f, 2096,523f, 0.0f, 207,1207f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "repair_kneel6", "repair_kneel", -3620,925f, 42,46792f, 2117,331f, 0.0f, -41,25616f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2360 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_54, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "Multistage_sweeping1", "Multistage_sweeping", -3650,068f, 42,768f, 2102,936f, 0.0f, -45,14526f, 0.0f), Local_54.f_2360);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_54.f_2360)), 0);
	Local_54.f_2364 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_54, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "Multistage_sweeping", "Multistage_sweeping", -3674,031f, 42,768f, 2100,339f, 0.0f, 314,3657f, 0.0f), Local_54.f_2364);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_54.f_2364)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -3685,798f, 42,769f, 2111,31f, 0.0f, 132,7999f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", -3682,298f, 42,768f, 2115,287f, 0.0f, -140,5107f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", -3681,634f, 42,75061f, 2107,677f, 0.0f, -317,4218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -3683,319f, 42,77f, 2114,444f, 0.0f, 43,43344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", -3680,014f, 42,7658f, 2109,219f, 0.0f, -133,1889f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l3", "lie_sleep_on_bed_l", -3672,43f, 42,77f, 2105,851f, 0.0f, -50,42917f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l4", "lie_sleep_on_bed_l", -3676,126f, 42,787f, 2101,858f, 0.0f, 43,37592f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l5", "lie_sleep_on_bed_l", -3679,415f, 42,768f, 2105,135f, 0.0f, 134,6079f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r2", "lie_sleep_on_bed_r", -3675,632f, 42,771f, 2108,978f, 0.0f, -225,1235f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r3", "lie_sleep_on_bed_r", -3656,941f, 42,768f, 2087,012f, 0.0f, -47,25218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r4", "lie_sleep_on_bed_r", -3689,51f, 42,77f, 2119,477f, 0.0f, 136,5863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r5", "lie_sleep_on_bed_r", -3691,626f, 42,771f, 2117,741f, 0.0f, 49,93003f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r6", "lie_sleep_on_bed_r", -3688,435f, 42,768f, 2114,091f, 0.0f, -44,581f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r7", "lie_sleep_on_bed_r", -3686,445f, 42,772f, 2115,536f, 0.0f, -132,988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_r8", "lie_sleep_on_bed_r", -3684,57f, 42,768f, 2117,463f, 0.0f, -131,0115f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lie_sleep_on_bed_l7", "lie_sleep_on_bed_l", -3660,02f, 42,81221f, 2090,36f, 0.0f, 45,92337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Multistage_hoe", "Multistage_hoe", -3697,928f, 42,34469f, 2123,577f, 0.0f, 46,3017f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "cow_knl1", "cow_knl", -3619,761f, 42,45244f, 2114,313f, 0.0f, -40,09426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "whore_and_john", "whore_and_john", -3636,883f, 42,76779f, 2100,621f, 0.0f, 131,1144f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "whore_and_john1", "whore_and_john", -3643,306f, 42,76891f, 2104,857f, 0.0f, -109,7883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "whore_flirt", "whore_flirt", -3639,543f, 42,78828f, 2107,495f, 0.0f, 18,30103f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "mex_flirt_sit_stool_link", "mex_flirt_sit_stool_link", -3656,9f, 42,797f, 2087,39f, 0.0f, -43,34005f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Prostitute_bed", "Prostitute_bed", -3680,713f, 42,768f, 2111,125f, 0.0f, -45,1647f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -3681,795f, 42,76839f, 2112.0f, 0.0f, -42,04699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "whore_and_john2", "whore_and_john", -3684,124f, 42,80353f, 2122,052f, 0.0f, -127,6782f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_washfacebowl_n_any", "stand_washfacebowl_n_any", -3662,781f, 42,768f, 2087,984f, 0.0f, 90,93678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3636f, 42,76351f, 2105,484f, 0.0f, -193,829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "mex_flirt_sit_link1", "mex_flirt_sit_stool_link", -3644,465f, 42,76454f, 2107,746f, 0.0f, -225,4346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "mex_flirt_sit_link", "mex_flirt_sit_stool_link", -3637,848f, 42,76454f, 2108,629f, 0.0f, -135,7247f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2368 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -3668,978f, 42,23467f, 2138,684f, 0.0f, -20,40278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2368), 0);
	Local_54.f_2372 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", -3653,021f, 42,23467f, 2130,14f, 0.0f, 35,84902f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2372), 0);
	Local_54.f_2376 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_spit", "stand_spit", -3658,095f, 42,23141f, 2135,001f, 0.0f, 38,56444f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2376), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_spit1", "stand_spit", -3665,333f, 42,23467f, 2140,746f, 0.0f, 17,45105f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "knl_watertrough", "knl_watertrough", -3693,38f, 42,27715f, 2120,221f, 0.0f, -46,09961f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2380 = CREATE_GRINGO_IN_LAYOUT(Local_54, "fake_horseshoe", "fake_horseshoe", -3657,917f, 42,30736f, 2131,19f, 0.0f, 50,54691f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2380), 1);
	Local_54.f_2384 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Locked_Footlocker", "Locked_Footlocker", -3652,851f, 42,82499f, 2087,113f, 0.0f, -44,40221f, 0.0f);
	DECOR_SET_BOOL(Local_54.f_2384, "PlayerHouseChest", true);
	Local_54.f_2388 = CREATE_GRINGO_IN_LAYOUT(Local_54, "fake_horseshoe1", "fake_horseshoe", -3666,226f, 42,223f, 2139,29f, 0.0f, -48,195f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2388), 1);
	Local_54.f_2392 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_54, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_yelling_mid", "stand_yelling_mid", -3658,562f, 42,57069f, 2147,467f, 0.0f, 207,7159f, 0.0f), Local_54.f_2392);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_yelling_mid1", "stand_yelling_mid", -3688,003f, 42,2773f, 2127,998f, 0.0f, 74,41666f, 0.0f), Local_54.f_2392);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_yawning_n_any", "stand_yawning_n_any", -3669,503f, 42,76637f, 2099,742f, 0.0f, 188,9062f, 0.0f), Local_54.f_2392);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_pocketwatch_e_any3", "stand_pocketwatch_e_any", -3670,811f, 42,76637f, 2100,495f, 0.0f, -105,7943f, 0.0f), Local_54.f_2392);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand", "rand_idle_stand", -3691,152f, 42,24957f, 2127,741f, 0.0f, -90,84197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2396 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand1", "rand_idle_stand", -3690,252f, 42,24957f, 2127,047f, 0.0f, -120,6156f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2396), 0);
	Local_54.f_2400 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand2", "rand_idle_stand", -3690,869f, 42,24957f, 2126,173f, 0.0f, -144,2641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2400), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand3", "rand_idle_stand", -3691,64f, 42,24957f, 2126,79f, 0.0f, -110,4093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand4", "rand_idle_stand", -3657,91f, 42,57069f, 2148,833f, 0.0f, 23,77878f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand5", "rand_idle_stand", -3658,55f, 42,57069f, 2149,316f, 0.0f, -0,01377678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand6", "rand_idle_stand", -3657,065f, 42,57069f, 2148,859f, 0.0f, 46,80066f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2404 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards", "Rand_Idle_Sit_Ground", -3658,872f, 42,16473f, 2159,994f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2404), 0);
	Local_54.f_2408 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards1", "Rand_Idle_Sit_Ground", -3658,213f, 42,16473f, 2158,717f, 0.0f, 118,2466f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2408), 0);
	Local_54.f_2412 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -3659,139f, 42,16473f, 2158,054f, 0.0f, -170,3818f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2412), 0);
	Local_54.f_2416 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_ground_smoke1", "Rand_Idle_Sit_Ground", -3657,855f, 42,16473f, 2159,935f, 0.0f, -319,4555f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2416), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "look_out_window_L", "look_out_window_L", -3647,079f, 42,71093f, 2112,356f, 0.0f, 140,2832f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "look_out_window_R2", "look_out_window_R", -3650,679f, 42,71093f, 2108,386f, 0.0f, 158,2746f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", -3642,713f, 42,77612f, 2112,965f, 0.0f, -225,4669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand7", "smoking_stand", -3649,401f, 42,5548f, 2112,234f, 0.0f, -184,0231f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand7", "rand_idle_stand", -3642,208f, 42,78126f, 2114,526f, 0.0f, -155,6731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2420 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_barrel", "sit_barrel", -3645,295f, 42,71093f, 2111,056f, 0.0f, 353,9027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2420), 0);
	Local_54.f_2424 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_54, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "Sit_Ground_Play_Cards2", "Rand_Idle_Sit_Ground", -3659,798f, 42,16473f, 2158,655f, 0.0f, 233,0516f, 0.0f), Local_54.f_2424);
	Local_54.f_2428 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -3673,58f, 42,53664f, 2123,779f, 0.0f, 0.0f, 0.0f);
	Local_54.f_2432 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -3672,531f, 42,56611f, 2120,62f, 0.0f, 154,8617f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2432), 0);
	Local_54.f_2436 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", -3671,173f, 42,50059f, 2123,19f, 0.0f, 80,60349f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2436), 0);
	Local_54.f_2440 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3674,429f, 42,55119f, 2120,43f, 0.0f, -156,2721f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2440), 0);
	Local_54.f_2444 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand_campfire", "smoking_stand_campfire", -3672,125f, 42,50681f, 2124,27f, 0.0f, 36,03042f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2444), 0);
	Local_54.f_2448 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand_campfire1", "smoking_stand_campfire", -3673,105f, 42,47565f, 2124,826f, 0.0f, 1,958713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2448), 0);
	Local_54.f_2452 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand", "smoking_stand", -3631,076f, 42,16984f, 2138,03f, 0.0f, -184,2408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2452), 0);
	Local_54.f_2456 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3634,12f, 42,3114f, 2143,24f, 0.0f, -131,3094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2456), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Pee1", "Pee", -3635,495f, 42,32895f, 2143,513f, 0.0f, 76,97f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_54, "look_distance_binocs1", "look_distance_binocs", -3684,896f, 42,07087f, 2152,015f, 0.0f, -210,7167f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_54.f_2460 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand9", "smoking_stand", -3679,415f, 41,98303f, 2148,848f, 0.0f, -231,9652f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2460), 0);
	Local_54.f_2464 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_54, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "nuse_shelf", "nuse_shelf", -3640,034f, 42,75944f, 2096,736f, 0.0f, -41,21271f, 0.0f), Local_54.f_2464);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "use_shelf1", "nuse_shelf", -3638,566f, 42,75944f, 2098,021f, 0.0f, -41,21271f, 0.0f), Local_54.f_2464);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_54, "use_shelf2", "nuse_shelf", -3641,632f, 42,75944f, 2095,337f, 0.0f, -41,21271f, 0.0f), Local_54.f_2464);
	Local_54.f_2468 = CREATE_GRINGO_IN_LAYOUT(Local_54, "player_sleep_RAT", "player_sleep_bed_L", -3654,174f, 42,82661f, 2084,243f, 0.0f, -584,6696f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_2468), 0);
	Local_54.f_2472 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Bar_lean_stand", "Bar_lean_stand", -3643,095f, 42,75898f, 2098,185f, 0.0f, -46,0139f, 0.0f);
	Local_54.f_2476 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Bar_lean_stand1", "Bar_lean_stand", -3641,202f, 42,78251f, 2100,146f, 0.0f, -46,0139f, 0.0f);
	Local_54.f_2480 = CREATE_GRINGO_IN_LAYOUT(Local_54, "leaning_stand", "leaning_stand", -3644,218f, 42,78251f, 2097,021f, 0.0f, -45,65455f, 0.0f);
	Local_54.f_2484 = CREATE_GRINGO_IN_LAYOUT(Local_54, "leaning_stand1", "leaning_stand", -3639,145f, 42,78251f, 2101,42f, 0.0f, -7,077547f, 0.0f);
	Local_54.f_2488 = CREATE_GRINGO_IN_LAYOUT(Local_54, "leaning_stand2", "leaning_stand", -3642,16f, 42,78251f, 2099,104f, 0.0f, -44,50163f, 0.0f);
	Local_54.f_2492 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Bar_lean_stand2", "Bar_lean_stand", -3640,199f, 42,75898f, 2098,163f, 0.0f, -223,2867f, 0.0f);
	Local_54.f_2496 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Bar_lean_stand3", "Bar_lean_stand", -3639,067f, 42,75898f, 2099,017f, 0.0f, -156,6802f, 0.0f);
	return 1;
}

bool Function_95(int iParam0) //Position: 0xA55B / 42331
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_99();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_98(iParam0[iVar03], 8);
		}
		else if (Function_97())
		{
			iVar1 = 1;
			Function_98(iParam0[iVar03], 8);
		}
		Function_98(iParam0[iVar03], 16);
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
				Function_98(iParam0[iVar03], 1);
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
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_98(iParam0[iVar03], 2);
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
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_98(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_98(iParam0[iVar03], 2);
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
	Function_96();
	return 1;
}

void Function_96() //Position: 0xA8D6 / 43222
{
	if (!Function_73(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_97() //Position: 0xA916 / 43286
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

void Function_98(var uParam0, int iParam1) //Position: 0xA941 / 43329
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_99() //Position: 0xA952 / 43346
{
	if (!Function_73(128))
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

var Function_100(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA994 / 43412
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_101(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_98(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_101(var uParam0, int iParam1, int iParam2) //Position: 0xA9CC / 43468
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_98(uParam0[iVar03], 4);
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

void Function_102(int iParam0, int iParam1) //Position: 0xAA90 / 43664
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

bool Function_103() //Position: 0xAAD9 / 43737
{
	var uVar0;
	
	Function_102(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("RathskellerFork_layout");
	}
	*(&Local_4 + 4) = { -3682,141f, 42,5698f, 2113,858f };
	*(&Local_4 + 4 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "rat_flag_bunk", -3682,141f, 42,5698f, 2113,858f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 32) = { -3641,758f, 42,56982f, 2102,225f };
	*(&Local_4 + 32 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_56 = CREATE_POINT_IN_LAYOUT(Local_4, "rat_flag_main", -3641,758f, 42,56982f, 2102,225f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 60) = { -3656f, 42,56982f, 2088.0f };
	*(&Local_4 + 60 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_84 = CREATE_POINT_IN_LAYOUT(Local_4, "rat_flag_judge", -3656f, 42,56982f, 2088.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 88) = { -3658,599f, 42,16472f, 2149,401f };
	*(&Local_4 + 88 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_112 = CREATE_POINT_IN_LAYOUT(Local_4, "rat_flag_stable", -3658,599f, 42,16472f, 2149,401f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 116) = { -3670,337f, 42,5698f, 2101,66f };
	*(&Local_4 + 116 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_140 = CREATE_POINT_IN_LAYOUT(Local_4, "rat_flag_bunk1", -3670,337f, 42,5698f, 2101,66f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 144) = { -3659,985f, 42,56141f, 2095,988f };
	*(&Local_4 + 144 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_168 = CREATE_POINT_IN_LAYOUT(Local_4, "rat_flag_yard", -3659,985f, 42,56141f, 2095,988f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 172) = { -3653,14f, 42,5694f, 2108,013f };
	*(&Local_4 + 172 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_196 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -3653,14f, 42,5694f, 2108,013f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_104(bool bParam0, var uParam1) //Position: 0xAD3F / 44351
{
	if (!Function_73(128))
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

