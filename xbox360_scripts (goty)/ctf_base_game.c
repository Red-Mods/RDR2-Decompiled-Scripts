//Decompiled with MagicRDR v1.0
//Function Count : 737
//Statics Count : 1319
//Natives Count : 592
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
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
	var uLocal_28 = 11;
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
	var uLocal_50 = 11;
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
	bool bLocal_68 = false;
	bool bLocal_69 = false;
	int iLocal_70 = 0;
	float fLocal_71 = 0.0f;
	bool bLocal_72 = false;
	struct<2> Local_73[16];
	bool bLocal_106 = false;
	int iLocal_107 = 0;
	bool bLocal_108 = false;
	vector3 vLocal_109 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_112 = { 0.0f, 0.0f, 0.0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	struct<7> Local_118 = { 15, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_234 = 16;
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
	var uLocal_251 = 2;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	struct<8> Local_254 = { 15, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_375 = 2;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 5;
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
	var uLocal_420 = 4;
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
	struct<437> Local_443 = { 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_969 = 3;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 16;
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
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
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
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 16;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 16;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 3;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	
	iLocal_10 = 5;
	iLocal_12 = 0;
	bLocal_68 = 16;
	bLocal_69 = false;
	iLocal_70 = 0;
	fLocal_71 = 1.0f;
	bLocal_106 = true;
	iLocal_107 = 10;
	vLocal_109 = { 0.0f, 0.3f, 0.0f };
	vLocal_112 = { 0.0f, 1.0f, 0.0f };
	iLocal_115 = 1;
	iLocal_116 = 4194304;
	iLocal_117 = 0;
	if (!Function_619())
	{
		TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	}
	Function_618();
	iVar0 = NET_GET_PLAYMODE();
	uVar1 = Function_617();
	iVar2 = 1;
	iVar3 = 0;
	while ((!IS_EXITFLAG_SET() && iVar2) && NET_IS_IN_SESSION())
	{
		switch (iVar3)
		{
			case 0x00000000:
				if (Function_615(83569) && UNK_0xA80C6DE6(&Local_118))
				{
					NET_LOG(1, "CTF Data", "CBA and HBV synched. MOVING ON.", false, false, false, false);
					iVar3 = 1;
					fVar4 = 0.0f;
				}
				else if (Function_614())
				{
					NET_LOG(1, "CTF Data", "BAILING ON SYNC: GAME IS OVER.", false, false, false, false);
					iVar2 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_507())
				{
					NET_LOG(1, "CTF Data", "DATA SUNK AND INITED. MOVING ON.", false, false, false, false);
					iVar3 = 2;
				}
				else if (Function_614())
				{
					NET_LOG(1, "CTF Data", "BAILING ON SYNC: GAME IS OVER.", false, false, false, false);
					iVar2 = 0;
				}
				break;
			
			case 0x00000002:
				iVar2 = Function_164();
				break;
		}
		WAIT(0);
	}
	if (iVar0 != 1 || iVar0 != 3)
	{
		iVar5 = 0;
	}
	else
	{
		iVar5 = Function_160();
	}
	if (NET_IS_IN_SESSION())
	{
		if (Function_614())
		{
			if (iVar5 >= 0)
			{
			}
			Function_158(0, Function_159(15));
			if (Function_155())
			{
				Function_103(iVar5, Function_149(), 1, 1, 0);
			}
			else
			{
				Function_103(iVar5, 4294967295, 1, 1, 0);
			}
			Function_52(0);
		}
		else
		{
			if (iVar5 >= 0)
			{
			}
			Function_3(iVar5);
			Function_52(1);
		}
	}
	else
	{
		Function_3(iVar5);
		Function_52(0);
	}
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(GET_LOCAL_SLOT())))
		{
			SET_ACTOR_IS_THE_BEASTMASTER(GET_SLOT_ACTOR(GET_LOCAL_SLOT()), 0);
		}
	}
	Function_1();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x243 / 579
{
	if (bLocal_106)
	{
		Function_2();
		PRINTSTRING("Game End");
		PRINTNL();
	}
	return;
}

void Function_2() //Position: 0x262 / 610
{
	if (bLocal_106)
	{
		PRINTSTRING("[RESPAWNLOG],");
		PRINTFLOAT(NET_GET_NET_TIME());
		PRINTSTRING(",");
		if (NET_IS_IN_SESSION())
		{
			PRINTSTRING(GET_SLOT_NAME(GET_LOCAL_SLOT()));
		}
		else
		{
			PRINTSTRING("OutOfSession");
		}
		PRINTSTRING(",");
	}
	return;
}

void Function_3(int iParam0) //Position: 0x2B8 / 696
{
	bool bVar0;
	int iVar1[67];
	int iVar69;
	
	Function_44();
	Function_43();
	UI_EXIT("XpHud");
	if (iParam0 >= 0)
	{
		bVar0 = 4294967295;
		if (NET_IS_IN_SESSION())
		{
			bVar0 = GET_LOCAL_SLOT();
		}
		NET_START_LB_UPDATE(0);
		iVar1[6] = 1;
		NET_UPDATE_LEADERBOARD(bVar0, iParam0, 4294967295, &iVar1);
		NET_UPDATE_LEADERBOARD(bVar0, 3, 4294967295, &iVar1);
		NET_END_LB_UPDATE();
		Global_84364.f_776 = 4294967295;
		Function_5(0);
		if (NET_IS_IN_SESSION())
		{
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar69 = UNK_0xA684E813();
				if (iVar69 >= 4294967295)
				{
					Function_4(&Global_76943[iVar6996] + 220, &iVar1, 1);
					NET_REPORT_FRIEND_SCORES(iVar69, iParam0, &iVar1);
				}
			}
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1, bool bParam2) //Position: 0x34A / 842
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*iParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*iParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_5(bool bParam0) //Position: 0x38F / 911
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_40(2);
	if (bParam0)
	{
		Function_40(1);
	}
	else
	{
		Function_37(1);
	}
	Function_6();
	return;
}

void Function_6() //Position: 0x418 / 1048
{
	Function_35();
	Function_34();
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_15(0);
	Function_15(0);
	if (!Function_14())
	{
		Function_11();
		Function_10();
		Function_9();
		Function_8();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_7();
	return;
}

void Function_7() //Position: 0x46A / 1130
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

void Function_8() //Position: 0x570 / 1392
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

void Function_9() //Position: 0x5A3 / 1443
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_10() //Position: 0x731 / 1841
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_11() //Position: 0x8E5 / 2277
{
	Function_12(&Global_28260, 1, 0);
	return;
}

void Function_12(int iParam0, bool bParam1, var uParam2) //Position: 0x8F3 / 2291
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_13();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
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

bool Function_13() //Position: 0xAE4 / 2788
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_14() //Position: 0xAF9 / 2809
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_15(int iParam0) //Position: 0xB02 / 2818
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
					iVar2 = ((Function_31((50 + iVar4)) + Function_31((183 + iVar4))) + Function_31((90 + iVar4)));
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
	Function_16(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_16(int iParam0, bool bParam1, bool bParam2) //Position: 0xBA8 / 2984
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
		Function_30(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_29(iParam0);
	if (bParam2)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_17(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xE43 / 3651
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_28(390))), 32);
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
					bVar19 = (Function_27(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_27(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_25(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_22(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_19(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_18(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_18() //Position: 0x1470 / 5232
{
	int iVar0;
	
	return iVar0;
}

var Function_19(int iParam0) //Position: 0x1478 / 5240
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_20(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1489 / 5257
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_21(char* cParam0, bool bParam1) //Position: 0x157E / 5502
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_22(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1597 / 5527
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_24(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_23(Function_24(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_23(int iParam0, bool bParam1) //Position: 0x15FC / 5628
{
	if (iParam0 >= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

int Function_24(int iParam0, bool bParam1) //Position: 0x160E / 5646
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_25(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1620 / 5664
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
	if (((Function_26(iParam0) != 19 || Function_26(iParam0) != 17) || Function_26(iParam0) != 10) || Function_26(iParam0) != 9)
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

int Function_26(int iParam0) //Position: 0x1750 / 5968
{
	return Global_35278[iParam020].f_48;
}

float Function_27(int iParam0) //Position: 0x175F / 5983
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_28(int iParam0) //Position: 0x1798 / 6040
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_29(int iParam0) //Position: 0x17D5 / 6101
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

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x196F / 6511
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

int Function_31(bool bParam0) //Position: 0x1BB3 / 7091
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_32() //Position: 0x1BF4 / 7156
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
		iVar2 = ((Function_31((50 + iVar3) + 15) + Function_31((183 + iVar3) + 15)) + Function_31((90 + iVar3) + 15));
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
	Function_16(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_33() //Position: 0x1C7D / 7293
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
			iVar2 = ((Function_31((50 + iVar3) + 8) + Function_31((183 + iVar3) + 8)) + Function_31((90 + iVar3) + 8));
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
	Function_16(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_34() //Position: 0x1D14 / 7444
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
		iVar2 = ((Function_31((50 + iVar3)) + Function_31((183 + iVar3))) + Function_31((90 + iVar3)));
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
	Function_16(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_35() //Position: 0x1D93 / 7571
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_36(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_16(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2) //Position: 0x1DCC / 7628
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
	Function_30(iParam0, bParam1, 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_17(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_37(int iParam0) //Position: 0x1FD6 / 8150
{
	Function_38(&Global_79338, iParam0);
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x1FE5 / 8165
{
	Function_39(uParam0, iParam1);
	return;
}

void Function_39(int iParam0, int iParam1) //Position: 0x1FF2 / 8178
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_40(int iParam0) //Position: 0x2005 / 8197
{
	Function_41(&Global_79338, iParam0);
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x2014 / 8212
{
	Function_42(uParam0, iParam1);
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x2021 / 8225
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_43() //Position: 0x2030 / 8240
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_44() //Position: 0x205A / 8282
{
	if (Global_83864.f_1264 > 6)
	{
		Function_45(&(Global_50170[522]));
		Function_45(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_45(&(Global_50170[722]));
		Function_45(&(Global_50170[822]));
		Function_45(&(Global_50170[922]));
		Function_45(&(Global_50170[1022]));
		Function_45(&(Global_50170[1122]));
	}
	return;
}

void Function_45(bool bParam0) //Position: 0x20BA / 8378
{
	Global_56092[*bParam0] = 0;
	Function_46(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_46(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x20D4 / 8404
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_51(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_50(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_51(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_48(iParam0, 4))
	{
		Function_47(Function_51(iParam0), 0);
	}
}

void Function_47(var uParam0, int iParam1) //Position: 0x218B / 8587
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

bool Function_48(int iParam0, int iParam1) //Position: 0x21B0 / 8624
{
	return Function_49(Global_50170[iParam022].f_32, iParam1);
}

bool Function_49(int iParam0, int iParam1) //Position: 0x21C4 / 8644
{
	return (iParam0 && iParam1) == 0;
}

struct<16> Function_50(int iParam0) //Position: 0x21D1 / 8657
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_51(int iParam0) //Position: 0x2205 / 8709
{
	return Global_50170[iParam022].f_24;
}

void Function_52(int iParam0) //Position: 0x2214 / 8724
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	HUD_CLEAR_OBJECTIVE();
	CLEAR_PRINTED_OBJECTIVE();
	UNREGISTER_SCRIPT_WITH_AUDIO();
	Function_101(&Local_443 + 564);
	Function_84(&Local_443);
	Function_71(iParam0);
	Function_69(&Local_443 + 3388);
	Function_68();
	Function_53(&Local_443 + 452, 1);
	NET_ACTOR_SET_EQUIP_TYPE(2);
	if (Global_83864.f_1264 > 15)
	{
		Global_56092[35] = 0;
		Function_46(35, 0.0f, 0, 0, 4294967295, 4294967295);
	}
	if (Global_83864.f_1264 > 20)
	{
		Global_56092[43] = 0;
		Function_46(43, 0.0f, 0, 0, 4294967295, 4294967295);
	}
	return;
}

void Function_53(int iParam0, bool bParam1) //Position: 0x2290 / 8848
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (IS_VOLUME_VALID(iParam0->f_84))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_84);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_84);
		DESTROY_VOLUME(iParam0->f_84);
	}
	if (IS_OBJECT_VALID(iParam0->f_40))
	{
		DESTROY_OBJECT(iParam0->f_40);
	}
	if (Function_67(iParam0, 8))
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
		UI_EXIT("MpWeaponSuppressor");
	}
	Function_66(0);
	if (bParam1)
	{
		if (IS_ACTOR_VALID(Function_13()))
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(Function_13(), 0.1f, 0.9f, 0);
		}
		UI_EXIT("XpHud");
		UI_EXIT("MpWeaponSuppressor");
		SET_HUD_MAP_DRAW_ENABLED(1);
		if (*iParam0 != 4 || *iParam0 != 8)
		{
			UI_EXIT("MPSplash");
		}
	}
	else if (!Function_67(iParam0, 64))
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
		UI_SHOW("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_RESTORE("WeaponAmmo");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	UI_EXIT("HudMPNoFun");
	Function_60(iParam0, bParam1);
	Function_58();
	if (iParam0->f_96 >= 4294967295)
	{
		NET_GAMER_SET_TEAM(iParam0->f_96, 3);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
		bVar0 = Function_13();
		if (IS_ACTOR_VALID(bVar0))
		{
			DECOR_REMOVE(bVar0, "ForceAim");
		}
	}
	Function_54(iParam0 + 48);
	return;
}

void Function_54(int iParam0) //Position: 0x2412 / 9234
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_55(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x2438 / 9272
{
	if (Function_57(uParam0[iParam13], 4))
	{
		if (Function_57(uParam0[iParam13], 1))
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
			Function_56(uParam0[iParam13], 1);
			Function_56(uParam0[iParam13], 2);
			Function_56(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_56(var uParam0, int iParam1) //Position: 0x2566 / 9574
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_57(int iParam0, int iParam1) //Position: 0x2580 / 9600
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_58() //Position: 0x259D / 9629
{
	Function_59(1024, 0, 1);
	Function_59(1, 0, 0);
	return;
}

void Function_59(int iParam0, bool bParam1, int iParam2) //Position: 0x25B1 / 9649
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_42(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_39(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_60(int iParam0, bool bParam1) //Position: 0x25D9 / 9689
{
	if (Function_67(iParam0, 2))
	{
		PPP_UNLOAD_PRESET(Function_65());
		PPP_UNLOAD_PRESET(Function_64());
		Function_63(iParam0, 2);
	}
	if (IS_OBJECT_VALID(iParam0->f_100))
	{
		DESTROY_OBJECT(iParam0->f_100);
	}
	if (Function_67(iParam0, 4))
	{
		PPP_UNLOAD_PRESET(Function_62());
		Function_63(iParam0, 4);
	}
	if (bParam1)
	{
		Function_61();
	}
	return;
}

void Function_61() //Position: 0x2628 / 9768
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	return;
}

var Function_62() //Position: 0x2631 / 9777
{
	return "MP_ShowdownBlueTeam.ppp";
}

void Function_63(int iParam0, int iParam1) //Position: 0x2651 / 9809
{
	Function_39(iParam0 + 24, iParam1);
	return;
}

var Function_64() //Position: 0x2660 / 9824
{
	return "MP_WinningFrame.ppp";
}

var Function_65() //Position: 0x267C / 9852
{
	return "MP_ShowdownRedTeam.ppp";
}

void Function_66(bool bParam0) //Position: 0x269B / 9883
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bParam0)
			{
				NET_GAMER_ICON_FORCE_VISIBILITY(bVar0, 2);
			}
			else
			{
				NET_GAMER_ICON_FORCE_VISIBILITY(bVar0, 0);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_67(int iParam0, int iParam1) //Position: 0x26D0 / 9936
{
	return Function_49(iParam0->f_24, iParam1);
}

void Function_68() //Position: 0x26DF / 9951
{
	return;
}

void Function_69(int iParam0) //Position: 0x26E5 / 9957
{
	PPP_UNLOAD_PRESET(iParam0->f_52);
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	Function_54(iParam0 + 64);
	if (IS_OBJECT_VALID(iParam0->f_28))
	{
		DESTROY_OBJECT(iParam0->f_28);
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	UI_EXIT("LoadingSpinner");
	UI_INCLUDE("FameText");
	if (!UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		UI_SHOW("FameText");
	}
	HUD_ENABLE(1);
	Function_70(5);
	if (iParam0->f_108 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_108);
		iParam0->f_108 = 0;
	}
	if (iParam0->f_112 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_112);
		iParam0->f_112 = 0;
	}
	return;
}

void Function_70(int iParam0) //Position: 0x2792 / 10130
{
	Function_38(&Global_83864 + 1252, iParam0);
	return;
}

void Function_71(bool bParam0) //Position: 0x27A4 / 10148
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if ((&Local_254 + 520[bVar05])->f_16 >= 4294967295)
		{
			RESET_THIS_TREE_TYPE_CLEARING((&Local_254 + 520[bVar05])->f_16);
		}
		if (IS_BLIP_VALID(StackVal))
		{
			REMOVE_BLIP(StackVal);
		}
		(&Local_254 + 520[bVar05])->f_16 = 4294967295;
		bVar0++;
	}
	if (Function_81())
	{
		bVar0 = false;
		while (bVar0 <= Local_254.f_648)
		{
			Function_78(Function_79(bVar0, 1));
			bVar0++;
		}
	}
	bVar0 = false;
	while (bVar0 <= 15)
	{
		Function_74(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bVar0, 4294967295);
		bVar0++;
	}
	UNK_0x2148AC15(4294967295, 0);
	Function_73(Local_254.f_512);
	if (IS_LAYOUTREF_VALID(Local_254.f_660))
	{
		DESTROY_LAYOUT(Local_254.f_660);
	}
	Function_72(&Local_254 + 716);
	Function_72(&Local_254 + 720);
	Function_54(&Local_254 + 664);
	return;
}

void Function_72(int iParam0) //Position: 0x2896 / 10390
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(*iParam0);
	}
	return;
}

int Function_73(bool bParam0) //Position: 0x28AB / 10411
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

int Function_74(bool bParam0, bool bParam1) //Position: 0x28C1 / 10433
{
	Function_77("DESPAWN_BAG", bParam0);
	if (IS_OBJECT_VALID(StackVal))
	{
		Function_76(StackVal);
		if (!bParam1 || !NET_IS_IN_SESSION())
		{
			DESTROY_OBJECT(StackVal);
		}
		else
		{
			RELEASE_OBJECT_REF(StackVal);
		}
	}
	Function_75(bParam0);
	if (IS_BLIP_VALID(Local_254[bParam08]))
	{
		REMOVE_BLIP(Local_254[bParam08]);
	}
	return 1;
}

void Function_75(int iParam0) //Position: 0x2932 / 10546
{
	Function_77("REMOVE_GLOW_FROM_BAG", iParam0);
	if (!Function_49(Local_254[iParam08].f_24, 1))
	{
		return;
	}
	Function_39(&Local_254[iParam08] + 24, 1);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT_GLOW(StackVal);
	}
	return;
}

void Function_76(bool bParam0) //Position: 0x298A / 10634
{
	var uVar0;
	char* cVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		uVar0 = _GET_OBJECT_ATTACHMENT(bParam0);
		if (IS_ATTACHMENT_VALID(uVar0))
		{
			REMOVE_OBJECT_ATTACHMENT(uVar0);
		}
		cVar1 = GET_OBJECT_ANIMATOR_ON_OBJECT(bParam0);
		if (IS_OBJECT_ANIMATOR_VALID(cVar1))
		{
			DESTROY_OBJECT_ANIMATOR(cVar1);
		}
	}
	return;
}

void Function_77(var uParam0, int iParam1) //Position: 0x29C0 / 10688
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	return;
}

void Function_78(bool bParam0) //Position: 0x29CE / 10702
{
	var uVar0;
	
	if (DECOR_GET_INT_VERBOSE(bParam0, "ClearRequest", &uVar0))
	{
		RESET_THIS_TREE_TYPE_CLEARING(uVar0);
	}
	return;
}

bool Function_79(bool bParam0, bool bParam1) //Position: 0x29F5 / 10741
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_80(), 24);
	if (bParam1)
	{
		stradd(&cVar0, I2STR(bParam0), 24);
	}
	else
	{
		stradd(&cVar0, I2STR(Local_118[bParam07]), 24);
	}
	return FIND_OBJECT_IN_LAYOUT(Local_254.f_656, &cVar0);
}

var Function_80() //Position: 0x2A2A / 10794
{
	return "FlagSpawn_";
}

bool Function_81() //Position: 0x2A3D / 10813
{
	return !(Function_83() || Function_82());
}

bool Function_82() //Position: 0x2A4B / 10827
{
	return Local_254.f_740 != 2;
}

bool Function_83() //Position: 0x2A58 / 10840
{
	return Local_254.f_740 != 3;
}

void Function_84(int iParam0) //Position: 0x2A65 / 10853
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_98();
	bVar0 = Function_13();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_188))
	{
		DESTROY_OBJECT(iParam0->f_188);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	Function_95(!Function_96(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_94(81920, 0);
	Function_94(8388608, 0);
	Function_85(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_85(int iParam0) //Position: 0x2B17 / 11031
{
	Function_91(iParam0);
	Function_86(iParam0, 0);
	Function_59(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_86(int iParam0, bool bParam1) //Position: 0x2B51 / 11089
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_87(StackVal, StackVal, Function_90(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_120))
	{
		DESTROY_OBJECT(iParam0->f_120);
	}
	if (bParam1)
	{
		iParam0->f_120 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		RELEASE_OBJECT_REF(iParam0->f_156);
	}
	if (IS_VOLUME_VALID(iParam0->f_424))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
		DESTROY_VOLUME(iParam0->f_424);
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
	}
	if (Function_49(iParam0->f_48, 2))
	{
		Function_39(iParam0 + 48, 2);
	}
	Function_42(iParam0 + 48, 1);
	return;
}

var Function_87(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x2BE2 / 11234
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	bVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_89(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_89(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_89(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_89(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_89(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_89(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(bVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(bVar2, false, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return bVar2;
}

void Function_88(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x2D1B / 11547
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *bParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
}

vector3 Function_89(var uParam0, bool bParam1) //Position: 0x2D70 / 11632
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_90() //Position: 0x2D8A / 11658
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_91(int iParam0) //Position: 0x2DB9 / 11705
{
	Function_93(iParam0);
	Function_92(1048576);
	return;
}

void Function_92(int iParam0) //Position: 0x2DCB / 11723
{
	Function_38(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_93(int iParam0) //Position: 0x2E04 / 11780
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_94(int iParam0, bool bParam1) //Position: 0x2E1B / 11803
{
	if (bParam1)
	{
		Function_42(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_39(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_95(bool bParam0) //Position: 0x2E56 / 11862
{
	if (bParam0)
	{
		UI_EXIT("MPSplash");
	}
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("NotorietyMeter");
	UI_RESTORE("NotorietyMeter");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

bool Function_96(bool bParam0) //Position: 0x2EDD / 11997
{
	return Function_97(Global_79336, bParam0);
}

bool Function_97(var uParam0, bool bParam1) //Position: 0x2EEC / 12012
{
	return (uParam0 && bParam1) == 0;
}

void Function_98() //Position: 0x2EF9 / 12025
{
	if (Function_100(8))
	{
		Function_99();
	}
	Function_59(8, 0, 1);
	return;
}

void Function_99() //Position: 0x2F11 / 12049
{
	Function_59(32768, 1, 0);
	return;
}

bool Function_100(int iParam0) //Position: 0x2F20 / 12064
{
	return Function_49(Global_76905.f_132, iParam0);
}

void Function_101(int iParam0) //Position: 0x2F31 / 12081
{
	Function_102(iParam0, 0);
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x2F3D / 12093
{
	if (uParam0->f_72)
	{
		uParam0->f_72 = 0;
		UI_HIDE("ScoreGraph");
		UI_DEACTIVATE("ScoreGraph");
		uParam0->f_68 = iParam1;
	}
	return;
}

void Function_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2F75 / 12149
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_148(5, 1);
	Function_92(4096);
	switch (Function_147())
	{
		case 0x00000011:
		case 0x00000002:
			Function_107(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_44();
	Function_43();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_4(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
			if (bParam3)
			{
				uVar0[0] = uVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam1, &uVar0);
				uVar0[0] = uVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam1, &uVar0);
			}
			uVar0[0] = uVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam1, &uVar0);
			if (bParam4)
			{
				Function_104(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_4(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_5(bParam2);
}

void Function_104(int iParam0) //Position: 0x3091 / 12433
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_42(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_106(8));
	bVar0[0] = FLOOR(Function_106(8));
	if (Function_106(8) < 0.0f)
	{
		if (Function_105())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_106(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_106(7));
		bVar68[0] = bVar68[13];
		if (Function_105())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &bVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &bVar68);
		}
	}
	return;
}

bool Function_105() //Position: 0x3138 / 12600
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_106(int iParam0) //Position: 0x3143 / 12611
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_107(var uParam0, var uParam1, int iParam2) //Position: 0x3153 / 12627
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_139(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_145(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_46(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_139(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_145(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_46(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_108(17, 150, Function_145(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_46(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_108(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x32FC / 13052
{
	Function_136(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_51(iParam0), 1.0f, 0, 0);
	Function_132(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_129(iParam3);
	}
	Function_124(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_109();
}

void Function_109() //Position: 0x3362 / 13154
{
	if (!Function_14())
	{
		if (!Function_123(1, 3, 1, 1))
		{
			Function_111(1);
			Function_110(1, 8);
		}
	}
	else
	{
		Function_5(0);
	}
	return;
}

void Function_110(var uParam0, int iParam1) //Position: 0x338B / 13195
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_14())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_111(bool bParam0) //Position: 0x33CD / 13261
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_112();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_6();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_39(&Global_63095, 1);
		Function_39(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_112() //Position: 0x341E / 13342
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_122())
	{
		Function_119(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_119(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_114(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_114(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_113(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_113(vector3 vParam0) //Position: 0x34D9 / 13529
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_114(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x34F1 / 13553
{
	int iVar0;
	
	iVar0 = Function_117(uParam2, uParam3);
	if (Function_116(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_42(&Global_63095, 1);
			Function_39(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_42(&Global_63095, 2);
			Function_39(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_42(&Global_63095, 2);
		Function_39(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_115();
	return StackVal, StackVal, Function_115();
}

vector3 Function_115() //Position: 0x35D8 / 13784
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_116(int iParam0) //Position: 0x35E1 / 13793
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_117(bool bParam0, bool bParam1) //Position: 0x35F7 / 13815
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
				fVar2 = Function_118(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_118(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_116(bVar0) && !bParam1)
	{
		bVar0 = Function_117(bParam0, 1);
	}
	return bVar0;
}

float Function_118(vector3 vParam0, vector3 vParam3) //Position: 0x36BE / 14014
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_119(var uParam0, int iParam1) //Position: 0x36DB / 14043
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_121(Global_34573, &vVar4);
	if (!Function_120(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_120(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_42(&Global_63095, 2);
	Function_39(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_113(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_120(int iParam0) //Position: 0x3F00 / 16128
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_49(iVar0, 0x1000000) || Function_49(iVar0, 0x2000000)) || Function_49(iVar0, 0x4000000)) || !Function_49(iVar0, 0x10000000));
}

void Function_121(bool bParam0, int iParam1) //Position: 0x3F3B / 16187
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_122() //Position: 0x3F48 / 16200
{
	if (Function_49(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_123(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3F63 / 16227
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

void Function_124(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4008 / 16392
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_90();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_128(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_127(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_126(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_125(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_128(), iVar1 + 1);
	return;
}

struct<16> Function_125(int iParam0) //Position: 0x407A / 16506
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_126(int iParam0) //Position: 0x409B / 16539
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_127(int iParam0) //Position: 0x40BC / 16572
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_128() //Position: 0x40DD / 16605
{
	return "CQueue_Count";
}

void Function_129(int iParam0) //Position: 0x40F2 / 16626
{
	Function_130(iParam0, 1);
	return;
}

void Function_130(int iParam0, bool bParam1) //Position: 0x40FE / 16638
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_42(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_131((iVar0 % 32)));
	}
	else
	{
		Function_39(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_131((iVar0 % 32)));
	}
	return;
}

int Function_131(bool bParam0) //Position: 0x4154 / 16724
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_132(int iParam0, int iParam1) //Position: 0x4160 / 16736
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_135(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_51(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_50(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_133(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_51(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_51(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_51(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_133(int iParam0) //Position: 0x41E2 / 16866
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_50(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_134(int iParam0) //Position: 0x4202 / 16898
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_135(int iParam0) //Position: 0x4233 / 16947
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_136(bool bParam0, bool bParam1) //Position: 0x43B1 / 17329
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_137();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

var Function_137() //Position: 0x44FD / 17661
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_138(var uParam0, bool bParam1, bool bParam2) //Position: 0x454A / 17738
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_139(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x4562 / 17762
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_50(iParam0) };
	Function_124(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_138(&fParam5, bParam8, iParam9);
	Function_46(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_141(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_129(iParam12);
	}
	Function_140(iParam0, 4);
	Function_109();
}

void Function_140(int iParam0, int iParam1) //Position: 0x45D8 / 17880
{
	Function_39(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_141(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x45EC / 17900
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_135(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_51(iParam0));
	if ((bParam3 && Function_48(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_51(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_50(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_144(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_133(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_51(iParam0), &Var7, 0, 2, Function_48(iParam0, 4));
			if (!bParam3)
			{
				Function_142(iParam0, 4);
			}
		}
	}
}

void Function_142(int iParam0, int iParam1) //Position: 0x46A9 / 18089
{
	Function_42(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_143(int iParam0) //Position: 0x46BD / 18109
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_144(int iParam0) //Position: 0x46EB / 18155
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_145() //Position: 0x471B / 18203
{
	return "MP_Unstoppable_Icon_128";
}

float Function_146(int iParam0) //Position: 0x473B / 18235
{
	return Global_50170[iParam022].f_12;
}

int Function_147() //Position: 0x474A / 18250
{
	return Global_79349.f_16;
}

void Function_148(int iParam0, int iParam1) //Position: 0x4756 / 18262
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_149() //Position: 0x477B / 18299
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_150(GET_LOCAL_SLOT(), 1, 0);
}

int Function_150(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4792 / 18322
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_154(bParam0))
			{
				if (!Function_151(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_151(bool bParam0, int iParam1, bool bParam2) //Position: 0x47D6 / 18390
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_153(iParam1, bParam2);
	}
	if (!Function_154(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_152(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_152(int iParam0) //Position: 0x4857 / 18519
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_153(int iParam0, bool bParam1) //Position: 0x4B70 / 19312
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_154(bool bParam0) //Position: 0x4B90 / 19344
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

bool Function_155() //Position: 0x4C31 / 19505
{
	return Function_156(2);
}

bool Function_156(int iParam0) //Position: 0x4C3B / 19515
{
	return Function_157(&Global_79349, iParam0);
}

int Function_157(var uParam0, int iParam1) //Position: 0x4C4A / 19530
{
	return Function_49(uParam0->f_44, iParam1);
}

void Function_158(int iParam0, int iParam1) //Position: 0x4C59 / 19545
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_159(int iParam0) //Position: 0x4C73 / 19571
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_160() //Position: 0x4C8C / 19596
{
	switch (Local_254.f_740)
	{
		case 0x00000000:
			if (Function_163())
			{
				return 102;
			}
			if (Function_162())
			{
				return 104;
			}
			if (Function_161())
			{
				return 103;
			}
			return 2;
			break;
		
		case 0x00000003:
			if (Function_163())
			{
				return 100;
			}
			if (Function_162())
			{
				return 99;
			}
			if (Function_161())
			{
				return 101;
			}
			return 11;
			break;
		
		case 0x00000001:
			if (Function_163())
			{
				return 105;
			}
			if (Function_162())
			{
				return 107;
			}
			if (Function_161())
			{
				return 106;
			}
			return 12;
			break;
	}
	return 4294967295;
}

bool Function_161() //Position: 0x4D2C / 19756
{
	return Function_49(Global_79962, 512);
}

bool Function_162() //Position: 0x4D3C / 19772
{
	return Function_49(Global_79962, 256);
}

bool Function_163() //Position: 0x4D4C / 19788
{
	return Function_49(Global_79962, 16384);
}

int Function_164() //Position: 0x4D5C / 19804
{
	int iVar0;
	
	iVar0 = 1;
	Function_505(3);
	Function_505(2);
	Function_429();
	if (NET_IS_SESSION_HOST())
	{
		Function_424();
	}
	Function_422();
	iVar0 = Function_165();
	return iVar0;
}

int Function_165() //Position: 0x4D84 / 19844
{
	int iVar0;
	
	Function_414();
	if (Function_413(&Local_443))
	{
		if (GET_NUM_PLAYERS() < 1)
		{
			Function_404(4294967293);
		}
		if (Function_403())
		{
			Function_401();
		}
		else if (Function_614())
		{
			Function_400(&Local_443);
			if (Function_399())
			{
				if (Function_398() == GET_LOCAL_SLOT())
				{
					Function_396(&Local_443, 1, 1, 0);
					Function_148(10, 1);
				}
				else
				{
					switch (Function_398())
					{
						case 0xFFFFFFFE:
						case 0xFFFFFFFD:
							Function_148(10, 1);
							Function_396(&Local_443, 1, 1, 0);
							break;
						
						case 0xFFFFFFFB:
							Function_396(&Local_443, 0, 1, 1);
							break;
						
						default:
							Function_396(&Local_443, 0, 1, 0);
							break;
						}
				}
			}
			else if (Function_398() == Function_149())
			{
				Function_396(&Local_443, 1, 1, 0);
				Function_148(10, 1);
			}
			else
			{
				switch (Function_398())
				{
					case 0xFFFFFFFE:
					case 0xFFFFFFFD:
						Function_148(10, 1);
						Function_396(&Local_443, 1, 1, 0);
						break;
					
					case 0xFFFFFFFB:
						Function_396(&Local_443, 0, 1, 1);
						break;
					
					default:
						Function_396(&Local_443, 0, 1, 0);
						break;
					}
				}
			}
	}
	if (Function_297(&Local_443 + 452, &Local_118 + 440))
	{
		if (!Local_443.f_436)
		{
			Local_443.f_436 = 1;
			Function_296(&Local_443 + 564);
			Function_293(&Local_443);
			if (Function_292(&Local_443))
			{
				Function_291(&Local_443, 0);
				Function_290(&Local_443);
			}
			Function_289(&Local_443, 0);
		}
		if (NET_IS_SESSION_HOST())
		{
			if (!Function_288(&Global_78578 + 96))
			{
				Function_285(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	if (Function_403())
	{
		Function_280(&Local_443 + 564, 4294967295);
	}
	else
	{
		Function_280(&Local_443 + 564, Global_83591);
	}
	iVar0 = Function_166(&Local_443);
	if (iVar0 == 0)
	{
	}
	else if (iVar0 == 2)
	{
	}
	else if (iVar0 == 3)
	{
		return 0;
	}
	return 1;
}

int Function_166(int iParam0) //Position: 0x4F35 / 20277
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	
	bVar0 = Function_13();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	if (IS_SCRIPT_VALID(Global_78617.f_28))
	{
		iParam0->f_64 = 0.0f;
	}
	else
	{
		iParam0->f_64 = Function_279((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_155())
	{
		if (bVar1)
		{
			switch (Function_149())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(bVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(bVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(bVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(bVar0, iParam0->f_52);
	}
	if (Function_278(iParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_49(iParam0->f_44, 2) || Function_49(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
				{
					if (Function_277() && IS_PS3())
					{
						iParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, 0, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						iParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
	}
	if (((Function_278(iParam0) && Function_276(4096)) && Function_275()) && !Function_96(32768))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_49(iParam0->f_44, 2) || Function_49(iParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
				{
					iParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
					Function_274(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_273(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
	}
	fVar8 = Function_272();
	if (bVar1)
	{
		bVar9 = Function_271(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_112 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_156(8192) || Function_49(iParam0->f_48, 512)) && !Function_153(1, 1))
			{
				iVar6 = Function_270(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_49(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_42(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_268("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_267(2, NET_GET_NET_TIME());
								Function_264(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_94(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(bVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_106(2));
						if (!Function_153(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_39(iParam0 + 48, 512);
							ACTOR_REPAIR_INCAPACITATION(bVar0);
							SET_PLAYER_CONTROL(0, 1, 1, 1);
							SET_ACTOR_HEALTH(bVar0, 60.0f);
							DECOR_REMOVE(bVar0, "NoRegen");
							CLEAR_ACTOR_PROOF(bVar0, 129);
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
						else if ((fVar7 <= fVar8 || iVar6 >= 0) || !bVar9)
						{
							if (!bVar9)
							{
								DECOR_SET_BOOL(bVar0, "Drowned", true);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", true);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_94(65536, 0);
					Function_39(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_94(8388608, 1);
					iParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_153(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_428) <= 2.0f)
					{
						Function_94(8388608, 0);
					}
				}
			}
			if (Function_263(iParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_49(iParam0->f_44, 16))
					{
						Function_42(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_262(iParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_39(iParam0 + 48, 32);
					*iParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(iParam0->f_188))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_188))
				{
					Function_261(iParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_59(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_168);
			Function_94(65536, 0);
			Function_94(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_49(iParam0->f_44, 8))
			{
				Function_260(0);
			}
			else if (bVar1)
			{
				iParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(0))
				{
					CANCEL_DEADEYE();
				}
			}
			CANCEL_TIME_WARP(0);
			UI_DISABLE("PM_Weapons");
			if (UI_ISACTIVE("SatchelTab_Weapons"))
			{
				UI_EXIT("SatchelTab_Weapons");
				UI_FOCUS("nPauseMenu");
			}
			iParam0->f_56 = 4294967295;
			iParam0->f_68 = 0.0f;
			if (Function_259(iParam0 + 116, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_112 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_112 = "";
						break;
					
					default:
						break;
					}
			}
			Function_255(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_239(iParam0, iParam0->f_12 != 0);
			}
			Function_237(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_237(iParam0, 1);
			if ((iParam0->f_12 >= 0 && iParam0->f_64 <= 4.0f) || (iParam0->f_12 < 0 && iParam0->f_64 <= 2.0f))
			{
				if (iParam0->f_12 < 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iParam0->f_64 = 0.0f;
			*iParam0 = 5;
		
		case 0x00000005:
			Function_237(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_49(iParam0->f_44, 512))
				{
					*iParam0 = 8;
				}
				else if (iParam0->f_12 < 1)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_237(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_236();
				Function_59(32, 0, 1);
				Function_95(1);
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_237(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_98();
			}
			break;
		
		case 0x00000008:
			if (Function_49(iParam0->f_44, 2))
			{
				if (Function_49(iParam0->f_44, 512))
				{
					if (!Function_49(iParam0->f_48, 4096))
					{
						Function_86(iParam0, 1);
						Function_42(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_153(16384, 1))
						{
							Function_86(iParam0, 0);
							Function_94(16384, 1);
							iParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(iParam0->f_84))
					{
						TERMINATE_SCRIPT(iParam0->f_84);
					}
					Function_237(iParam0, 1);
				}
			}
			else
			{
				Function_237(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_237(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
				if (iParam0->f_64 > 0.0f)
				{
					iParam0->f_64 = 0.0f;
				}
			}
			if (iParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				iParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_95(1);
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_234();
				Function_98();
				Function_59(32, 0, 1);
				iParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_90(), Function_18(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_108 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_108 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
				}
				iParam0->f_108 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_108, 1, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_108, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_176);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_49(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_164);
					Function_42(iParam0 + 48, 8);
				}
				if (Function_229(StackVal, Function_49(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_214(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_49(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else
				{
					return 0;
				}
			}
			if (iVar4 == 2)
			{
			}
			else if (iVar4 == 1)
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (Function_49(iParam0->f_44, 1))
				{
					Function_39(iParam0 + 44, 1);
				}
				else
				{
					Function_91(iParam0);
					Function_86(iParam0, 0);
				}
				bVar0 = Function_13();
				Function_213(bVar0);
				if (Function_49(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_188))
				{
					DESTROY_OBJECT(iParam0->f_188);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_424))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
					DESTROY_VOLUME(iParam0->f_424);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_210(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*iParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && iParam0->f_64 > 60.0f)
			{
				if (iParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_209(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_49(iParam0->f_44, 8))
				{
					Function_208(iParam0 + 192, 0, 1, 1);
					Function_202(iParam0 + 192);
					Function_193(&bVar0, 0, 0, 0);
					Function_193(&bVar0, 0, 0, 0);
					Function_192(bVar0);
				}
				else
				{
					Function_208(iParam0 + 192, 1, 1, 1);
				}
				iParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_188, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_191(bVar0);
					vVar10 = { StackVal, StackVal, Function_191(bVar0) };
					bVar13 = Function_190(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_189(bVar13))
					{
						if (StackVal || Function_275() == 7)
						{
							iParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_185(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_184(&(Global_29008[StackVal]), 4194304);
				}
				Function_273(32);
				*iParam0 = 13;
			}
			if (!Function_49(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_184);
				if (StackVal)
				{
					Function_42(iParam0 + 48, 128);
					Function_39(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_273(32);
				Function_185(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_189(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_182(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_182(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_182(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*iParam0 = 14;
					}
				}
				else
				{
					bVar14 = Global_29155[StackVal10];
					if (Function_189(bVar14))
					{
						if (StackVal && (!Function_183(bVar14) && !Function_182(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_181(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_180();
			if (!Function_49(iParam0->f_44, 32))
			{
				if (Function_179())
				{
					bVar15 = 4294967295;
					if (iParam0->f_152 >= 4294967295)
					{
						bVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_152);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
					}
					if (bVar15 == 4294967295)
					{
						bVar15 = Function_178(bVar0, 40);
						if (bVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
						}
						else
						{
							bVar15 = Function_178(bVar0, 39);
							if (bVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
							}
							else
							{
								bVar15 = Function_178(bVar0, 42);
								if (bVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
								}
								else
								{
									bVar15 = Function_178(bVar0, 41);
									if (bVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
									}
									else
									{
										bVar15 = Function_178(bVar0, 43);
										if (bVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
										}
										else
										{
											bVar15 = Function_178(bVar0, 48);
											if (bVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
											}
											else
											{
												bVar15 = Function_178(bVar0, 46);
												if (bVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, bVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_49(iParam0->f_44, 64))
				{
					Function_177(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_94(16384, 0);
			Function_176(bVar0, !Function_49(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_160);
			iParam0->f_112 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_237(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_95(1);
			}
			else if (!Function_174())
			{
				Call_Loc(iParam0->f_172);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_168(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_167(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_237(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_237(iParam0, 1);
			Call_Loc(iParam0->f_180);
			if (StackVal)
			{
				if (Function_49(iParam0->f_44, 4))
				{
					*iParam0 = 17;
				}
				else
				{
					*iParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_237(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_237(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_237(iParam0, 1);
			if (Function_174())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_235(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_167(int iParam0) //Position: 0x5FF0 / 24560
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_168(int iParam0) //Position: 0x600C / 24588
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_234();
		iVar0 = "";
		if (Function_49(iParam0->f_44, 256))
		{
			if (Function_49(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_288(&Global_78578 + 96))
			{
				if (FABS(Function_169(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, iVar0);
		NET_LOG(1, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

float Function_169(int iParam0) //Position: 0x60FD / 24829
{
	return -Function_170(iParam0);
}

float Function_170(int iParam0) //Position: 0x6109 / 24841
{
	if (Function_288(iParam0))
	{
		if (Function_173(iParam0))
		{
			return StackVal;
		}
		Function_171();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_171() //Position: 0x61DA / 25050
{
	if (!Function_172())
	{
	}
	return;
}

bool Function_172() //Position: 0x61E7 / 25063
{
	return NET_IS_IN_SESSION();
}

bool Function_173(bool bParam0) //Position: 0x61F0 / 25072
{
	return Function_49(*bParam0, 2);
}

bool Function_174() //Position: 0x61FD / 25085
{
	return (HUD_IS_FADED() || Function_175(0));
}

bool Function_175(bool bParam0) //Position: 0x620B / 25099
{
	int iVar0;
	
	if (UI_ISACTIVE("MPSplash"))
	{
		if (UNK_0x9D20BDC4("networking"))
		{
			iVar0 = FLASH_GET_INT("networking", "splash.style");
			switch (iVar0)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
				case 0x00000009:
					if (FLASH_GET_INT("networking", "splashDone") == 2)
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else if (bParam0)
		{
		}
	}
	else if (bParam0)
	{
	}
	return 0;
}

void Function_176(bool bParam0, int iParam1) //Position: 0x62AF / 25263
{
	struct<5> Var0;
	
	Function_94(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_276(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

void Function_177(bool bParam0) //Position: 0x6305 / 25349
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

int Function_178(bool bParam0, int iParam1) //Position: 0x6322 / 25378
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_179() //Position: 0x6333 / 25395
{
	return !Function_275();
}

void Function_180() //Position: 0x633D / 25405
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_13();
	if (IS_ACTOR_VALID(bVar1))
	{
		bVar0 = false;
		while (bVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, bVar0))
			{
				SET_WEAPON_GOLD(bVar1, bVar0, Global_83823[bVar0]);
			}
			bVar0++;
		}
	}
	return;
}

void Function_181(bool bParam0) //Position: 0x637C / 25468
{
	if (!Function_189(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_184(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_182(var uParam0, int iParam1) //Position: 0x63D7 / 25559
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_183(bool bParam0) //Position: 0x63F3 / 25587
{
	if (!Function_189(bParam0))
	{
		return 1;
	}
	return Function_182(&(Global_29008[bParam0]), 4);
}

void Function_184(var uParam0, int iParam1) //Position: 0x640F / 25615
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_185(int iParam0, bool bParam1, int iParam2) //Position: 0x641E / 25630
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_189(Global_29006))
		{
			Function_184(&(Global_29008[Global_29006]), 131072);
			Function_188(&(Global_29008[Global_29006]), 2097152);
			Function_186(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_182(&(Global_29008[iVar0]), 4) || Function_182(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_188(&(Global_29008[iVar0]), 2097155);
					Function_184(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_14())
			{
			}
			WAIT(0);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_186(int iParam0) //Position: 0x6529 / 25897
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_187())
			{
				return;
			}
		}
		if (!Function_182(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_187() //Position: 0x65A8 / 26024
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_182(&(Global_29008[iVar0]), 4) || Function_182(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_188(var uParam0, int iParam1) //Position: 0x6611 / 26129
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_189(bool bParam0) //Position: 0x6628 / 26152
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_190(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x663E / 26174
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
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
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_191(bool bParam0) //Position: 0x66D9 / 26329
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_192(bool bParam0) //Position: 0x66EA / 26346
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		bVar1 = GET_WEAPON_EQUIPPED(bParam0, bVar0);
		if (bVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, bVar1, GET_WEAPON_MAX_AMMO(bVar1));
		}
		bVar0++;
	}
	return;
}

var Function_193(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x671D / 26397
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(*bParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			bVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002F:
					case 0x00000030:
						bVar23 = false;
						break;
					
					default:
						bVar23 = true;
						break;
				}
			}
			else
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				if (ACTOR_HAS_WEAPON(*bParam0, bVar2))
				{
					bVar3 = GET_AMMO_ENUM(bVar2);
					if (Function_201(bVar3, 1))
					{
						iVar5[bVar3] = 1;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 17)
		{
			if (iVar5[iVar1])
			{
				bVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_200(&Global_83591 + 276, bVar3)), 1, 0);
				iVar0 = 1;
			}
			iVar1++;
		}
		switch (iParam3)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				iVar1 = 0;
				while (iVar1 <= 27)
				{
					bVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_199(bVar2))
					{
						if (Function_198(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_201(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				bVar2 = false;
				while (bVar2 <= 40)
				{
					if (Global_84559[bVar2])
					{
						bVar3 = GET_AMMO_ENUM(bVar2);
						if (Function_201(bVar3, 1))
						{
							bVar24 = (Function_200(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
							}
						}
					}
					bVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_90(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_90(), &cVar28, &uVar26))
						{
							Function_194(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_201(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, Var36, 0.0f, 0, 0);
								}
							}
						}
						iVar27++;
					}
				}
				break;
			}
	}
	if (iVar0 && iParam1)
	{
		CLEAR_STAT_MESSAGE();
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 5f, 0, 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
	}
	return iVar0;
}

void Function_194(var uParam0, int iParam1) //Position: 0x6A00 / 27136
{
	*iParam1 = Function_195(uParam0, Function_196(), 0);
	iParam1->f_4 = Function_195(uParam0, Function_196() + 8, Function_196());
	return;
}

var Function_195(var uParam0, int iParam1, bool bParam2) //Position: 0x6A23 / 27171
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_131((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_196() //Position: 0x6A42 / 27202
{
	return Function_197(39);
}

int Function_197(int iParam0) //Position: 0x6A4D / 27213
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, true);
		iVar0++;
	}
	return iVar0;
}

bool Function_198(bool bParam0) //Position: 0x6A7B / 27259
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_199(bool bParam0) //Position: 0x6A9D / 27293
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_200(int iParam0, bool bParam1) //Position: 0x6AAF / 27311
{
	if (Function_201(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_201(bool bParam0, int iParam1) //Position: 0x6AC9 / 27337
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_202(int iParam0) //Position: 0x6ADC / 27356
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_205(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_13()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_204(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_203(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_90(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_90(), &cVar5, &uVar3))
			{
				Function_194(uVar3, &Var13);
				Function_203(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_203(struct<5> Param0) //Position: 0x6B83 / 27523
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_199(Param0))
	{
		return;
	}
	bVar0 = Function_13();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_201(bVar1, 1))
			{
				bVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					bVar2 = (bVar2 - _GET_AMMO_AMOUNT(bVar0, bVar1, 0));
				}
				if (bVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, bVar1, bVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

bool Function_204(int iParam0) //Position: 0x6C03 / 27651
{
	return Function_97(Global_83864.f_1252, iParam0);
}

void Function_205(int iParam0, int iParam1) //Position: 0x6C15 / 27669
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = Function_13();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_206(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_206(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_206(23, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 23, 1.0f, 0, 0);
		}
		iVar1 = 0;
		while (iVar1 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar1] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, (*iParam0 + 1088)[iVar1]);
			}
			iVar1++;
		}
		if (iParam0->f_1124 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1124))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1124);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1128))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1128);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1120 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1120))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1120);
			}
			else
			{
				bVar3 = true;
			}
		}
		if (bVar3)
		{
			iVar4 = Function_178(bVar2, 40);
			if (iVar4 == 4294967295)
			{
				iVar4 = Function_178(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, iVar4);
		}
	}
	return;
}

bool Function_206(int iParam0, int iParam1) //Position: 0x6D92 / 28050
{
	return Function_207(iParam0, iParam1) < 4294967295;
}

int Function_207(int iParam0, int iParam1) //Position: 0x6DA1 / 28065
{
	int iVar0;
	
	if (!Function_199(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (iParam0 == (*iParam1)[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_208(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6DD4 / 28116
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_13();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam1)
	{
		DELETE_ALL_INVENTORY_FROM_ACTOR(bVar0);
	}
	SETUP_ASSOCIATED_FRAGMENTS(bVar0);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		Function_203(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_209(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6E1F / 28191
{
	float fVar0;
	bool bVar1;
	
	if (Function_14() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= bParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x6EBC / 28348
{
	int iVar0;
	
	if (bParam1)
	{
		Function_41(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_41(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_41(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_41(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_41(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_41(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_41(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_41(&iVar0, 1048576);
	}
	return Function_211(bParam0, iVar0);
}

bool Function_211(bool bParam0, int iParam1) //Position: 0x6F2B / 28459
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_212(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_212(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_212(var uParam0, int iParam1) //Position: 0x7004 / 28676
{
	return (uParam0 && iParam1) == 0;
}

void Function_213(bool bParam0) //Position: 0x7011 / 28689
{
	Function_94(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_214(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x7032 / 28722
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_13();
	Function_225();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_224();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_211(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_276(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && iParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		bVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, bVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && iParam7))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(bVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!bParam6)
	{
		Function_221(bVar0, 0);
		Function_216();
		Function_215(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_190(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_189(uVar14))
			{
				Var10.f_4 = uVar14;
			}
			else
			{
				Var10.f_4 = Global_29006;
			}
			NET_SCRIPTMSG_SEND(2, 8, &Var10, 4, 1);
			NET_SCRIPTMSG_SEND(3, 8, &Var10, 4, 1);
		}
	}
	return 1;
}

void Function_215(char* cParam0, vector3 vParam1) //Position: 0x71A9 / 29097
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_216() //Position: 0x71E7 / 29159
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_220(iVar1))
		{
			uVar2 = Function_219(iVar1);
			Function_217(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_217(int iParam0, bool bParam1) //Position: 0x7219 / 29209
{
	if (!Function_220(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_218(222, Global_26401[iParam0], 0);
		if (Function_31(222) <= 0)
		{
			Function_16(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_16((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_218((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_218(222, bParam1, 0);
	}
	return;
}

int Function_218(int iParam0, bool bParam1, int iParam2) //Position: 0x72A2 / 29346
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
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_17(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_219(int iParam0) //Position: 0x749D / 29853
{
	if (!Function_220(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_220(int iParam0) //Position: 0x74B5 / 29877
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_221(bool bParam0, bool bParam1) //Position: 0x74CA / 29898
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_223(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_156(8192) && !Function_153(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_275())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 13, 5.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	iVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(iVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(iVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_222())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_222() //Position: 0x75D2 / 30162
{
	return Function_49(Global_79962, 2048);
}

var Function_223(int iParam0) //Position: 0x75E2 / 30178
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return iVar0;
}

void Function_224() //Position: 0x7617 / 30231
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_225() //Position: 0x762C / 30252
{
	Function_228();
	Function_44();
	Function_226();
	return;
}

void Function_226() //Position: 0x763B / 30267
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_227();
	return;
}

void Function_227() //Position: 0x766F / 30319
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_228() //Position: 0x7680 / 30336
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_229(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7699 / 30361
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	vector3 vVar12;
	bool bVar15;
	char* cVar16[64];
	bool bVar32;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_233(bParam0);
	Var6 = { StackVal, StackVal, Function_233(bParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar12);
	if (!bParam1)
	{
		vVar12.f_4 = (vVar12.y + 180.0f);
	}
	bVar15 = GET_OBJECT_OWNER(bParam0);
	if (IS_OBJECT_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_OBJECT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_232(bVar32);
			vVar12.f_4 = Function_230(StackVal, StackVal, StackVal, StackVal, vVar3, Function_232(bVar32));
		}
	}
	return Function_214(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_230(vector3 vParam0, vector3 vParam3) //Position: 0x7750 / 30544
{
	var uVar0;
	
	Function_231(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x776A / 30570
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_232(bool bParam0) //Position: 0x778D / 30605
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

vector3 Function_233(bool bParam0) //Position: 0x77B4 / 30644
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_234() //Position: 0x77C5 / 30661
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_235(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x77DA / 30682
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_236() //Position: 0x7803 / 30723
{
	if (!Function_100(8))
	{
		Function_99();
	}
	Function_59(8, 1, 1);
	return;
}

void Function_237(int iParam0, int iParam1) //Position: 0x781C / 30748
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_120))
	{
		return;
	}
	if (Function_49(iParam0->f_48, 256) || Function_49(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_49(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_120);
	if (!Function_211(iParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_120, true);
			Function_39(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_128);
				DETACH_CAMERASHOT(iParam0->f_132);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_238(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_49(iParam0->f_48, 8192))
		{
			Function_42(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(iParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_112);
				Function_274(1048576);
			}
			if (IS_OBJECT_VALID(iParam0->f_124) && IS_OBJECT_VALID(iParam0->f_128))
			{
				GET_POSITION(iParam0->f_112, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_128, iParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_132, iParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_128, iParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_132, iParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_128, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_132, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_128, iParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_132, iParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_128, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_132, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_128, iParam0->f_112, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_132, iParam0->f_112, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_112, 1);
		}
	}
	return;
}

void Function_238(int iParam0) //Position: 0x7A17 / 31255
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_DIRECTION(bVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_POSITION(bVar0, vVar1);
	SET_CAMERASHOT_FOV(bVar0, GET_CAMERASHOT_FOV(iParam0->f_124));
	return;
}

void Function_239(int iParam0, int iParam1) //Position: 0x7A58 / 31320
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_13();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_191(bVar0);
		vVar1 = { StackVal, StackVal, Function_191(bVar0) };
		Function_254(bVar0);
		vVar4 = { StackVal, StackVal, Function_254(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	bVar7 = Function_90();
	iParam0->f_156 = FIND_OBJECT_IN_LAYOUT(bVar7, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		SET_OBJECT_POSITION(iParam0->f_156, vVar1);
		SET_OBJECT_ORIENTATION(iParam0->f_156, vVar4);
	}
	else
	{
		iParam0->f_156 = CREATE_POINT_IN_LAYOUT(bVar7, "DeathAnchorPoint", vVar1, vVar4);
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_112))
	{
		iParam0->f_120 = Function_250(bVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_42(iParam0 + 48, 256);
	}
	else
	{
		Function_191(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_191(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_242(bVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_241(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_42(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_240(iParam0->f_120);
	return;
}

void Function_240(int iParam0) //Position: 0x7BED / 31725
{
	Function_224();
	Global_63118 = iParam0;
	return;
}

void Function_241(bool bParam0, bool bParam1) //Position: 0x7BFB / 31739
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_242(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x7C10 / 31760
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_18(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_243(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_243(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7C92 / 31890
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_249(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_248(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_247(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_246(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_245(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_244(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0.65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0.25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1.5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0.35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0.35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_244(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7DAD / 32173
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_245(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7EC2 / 32450
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_246(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7FDB / 32731
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_247(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x80E6 / 32998
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_248(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x81EC / 33260
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3.512409f, 1.385313f, 11.99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.000168f, 1.399967f, 0.006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_249(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x829C / 33436
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6.044836f, 1.844389f, 8.871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.125951f, 1.612884f, -0.415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_250(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8353 / 33619
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_18(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_251(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_251(var uParam0, int iParam1) //Position: 0x83CA / 33738
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_253(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_252(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_252(var uParam0, bool bParam1) //Position: 0x8436 / 33846
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.221893f, 12.0f, 0.202029f };
	Function_254(bParam1);
	vVar3 = { StackVal, StackVal, Function_254(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_232(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_232(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_254(bParam1);
	vVar6 = { StackVal, StackVal, Function_254(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_232(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_232(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_253(var uParam0, bool bParam1) //Position: 0x84F8 / 34040
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.17905f, 10.0f, 0.125767f };
	Function_254(bParam1);
	vVar3 = { StackVal, StackVal, Function_254(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_232(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_232(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_254(bParam1);
	vVar6 = { StackVal, StackVal, Function_254(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_232(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_232(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_254(bool bParam0) //Position: 0x85BA / 34234
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

void Function_255(int iParam0) //Position: 0x85E1 / 34273
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	bool bVar23;
	
	if (!Function_49(iParam0->f_48, 2048))
	{
		Function_42(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		bVar3 = false;
		if (!IS_ACTOR_VALID(iParam0->f_112))
		{
			bVar3 = true;
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_112))
		{
			if (IS_SLOT_VALID(StackVal))
			{
				bVar2 = (&Global_78617 + 2604)->f_12;
				if (Function_199(bVar2) && RAND_INT_RANGE(0, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_257(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_256("MPSplashItem.s1"));
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_112))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_112));
			bVar2 = GET_WEAPON_IN_HAND(iParam0->f_112);
			bVar1 = true;
		}
		else
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		if (bVar0)
		{
			UI_INCLUDE("MPSplashItem.s0");
			UI_INCLUDE("MPSplashItem.s1");
			UI_ENTER("MPSplash");
			UI_EXIT("FameText");
			UI_EXCLUDE("FameText");
			UI_EXIT("NotorietyMeter");
			UI_EXCLUDE("NotorietyMeter");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_199(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_112, &vVar20);
						bVar23 = CEIL((VDIST(vVar20, *(&Global_78617 + 2604 + 16)) * 1.093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar23), UI_GET_STRING("stat_yd"));
						UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
					}
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				}
			}
		}
	}
	return;
}

bool Function_256(int iParam0) //Position: 0x8907 / 35079
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

struct<64> Function_257(bool bParam0) //Position: 0x8B1B / 35611
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_277())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_258();
	}
	if (!Function_154(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_154(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_258() //Position: 0x8BC1 / 35777
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_259(var uParam0, int iParam1) //Position: 0x8BD2 / 35794
{
	if (Function_263(uParam0, iParam1))
	{
		Function_262(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_260(int iParam0) //Position: 0x8BEC / 35820
{
	Function_12(&Global_79378, 0, iParam0);
	return;
}

void Function_261(bool bParam0, bool bParam1) //Position: 0x8BFC / 35836
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_90(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_199(bVar2))
			{
				SET_WEAPON_GOLD(bParam1, bVar2, Global_83823[bVar2]);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(bParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0x8C78 / 35960
{
	*uParam0 = *iParam1;
	return;
}

bool Function_263(var uParam0, int iParam1) //Position: 0x8C84 / 35972
{
	return *uParam0 == *iParam1;
}

void Function_264(int iParam0, int iParam1) //Position: 0x8C91 / 35985
{
	Function_265(iParam0, (Function_266(iParam0) + iParam1));
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0x8CA4 / 36004
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_266(int iParam0) //Position: 0x8CCD / 36045
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_267(int iParam0, int iParam1) //Position: 0x8CDD / 36061
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8D06 / 36102
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_269(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_269(int iParam0) //Position: 0x8D81 / 36225
{
	char* cVar0[16];
	
	if (!Function_122())
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

var Function_270(int iParam0, bool bParam1, int iParam2) //Position: 0x8DC0 / 36288
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_154(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_151(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_271(int iParam0) //Position: 0x8E07 / 36359
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_272() //Position: 0x8E1D / 36381
{
	if (Function_49(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_49(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_273(int iParam0) //Position: 0x8E53 / 36435
{
	Function_38(&Global_78617 + 52, iParam0);
	return;
}

void Function_274(int iParam0) //Position: 0x8E64 / 36452
{
	Function_41(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_275() //Position: 0x8EBD / 36541
{
	if (Function_14())
	{
		return (Function_147() != 1 || Function_147() != 0);
	}
	return 0;
}

bool Function_276(bool bParam0) //Position: 0x8ED6 / 36566
{
	return Function_97(Global_78617.f_52, bParam0);
}

bool Function_277() //Position: 0x8EE7 / 36583
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_278(int iParam0) //Position: 0x8EF5 / 36597
{
	return (*iParam0 <= 1 && *iParam0 >= 14);
}

var Function_279(int iParam0, int iParam1) //Position: 0x8F07 / 36615
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_280(int iParam0, bool bParam1) //Position: 0x8F1A / 36634
{
	bool bVar0;
	int iVar1;
	
	if (!iParam0->f_68)
	{
		return;
	}
	if (Function_284())
	{
		Function_102(iParam0, 1);
		return;
	}
	iParam0->f_76 = (iParam0->f_76 - 1);
	if (!iParam0->f_72 || iParam0->f_76 > 0)
	{
		iParam0->f_76 = iLocal_10;
		bVar0 = false;
		if (!iParam0->f_72)
		{
			iParam0->f_72 = 1;
			UI_SHOW("ScoreGraph");
			bVar0 = true;
		}
		if (!iParam0->f_64)
		{
			iVar1 = NET_GET_SESSION_GAMER_COUNT();
			if (iParam0->f_52 != iVar1)
			{
				iParam0->f_52 = iVar1;
				bVar0 = true;
			}
		}
		if (iParam0->f_56 != bParam1)
		{
			iParam0->f_56 = bParam1;
			bVar0 = true;
		}
		Stack.Push(bVar0);
		Stack.Push(iParam0);
		Stack.Push(iParam0 + 24);
		Call_Loc(iParam0->f_48);
		bVar0 = (StackVal || StackVal);
		if (bVar0)
		{
			NET_SCOREGRAPH_CLEAR_MARKERS();
			if (iParam0->f_64)
			{
				NET_SCOREGRAPH_SETUP(2, 1, iParam0->f_60);
				if (StackVal > StackVal)
				{
					Function_283(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 0);
					Function_283(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 5);
				}
				else
				{
					Function_283(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 0);
					Function_283(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 5);
				}
			}
			else
			{
				NET_SCOREGRAPH_SETUP(iParam0->f_52, 0, iParam0->f_60);
				if (StackVal >= 4294967295)
				{
					if (*iParam0 == iParam0->f_24)
					{
						Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 1);
					}
					else if (*iParam0 <= iParam0->f_24)
					{
						Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
					}
					else
					{
						Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
						Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
					}
				}
				else
				{
					Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
				}
			}
		}
	}
	return;
}

void Function_281(struct<21> Param0) //Position: 0x9093 / 37011
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(Param0.f_16))
	{
		stradd(&cVar0, Param0.f_16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(Param0.f_20))
	{
		stradd(&cVar0, Param0.f_20, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_PLAYER_LABEL(StackVal, StackVal, Function_282((Param0 + iParam7), bParam6), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_PLAYER_SCORE(StackVal, StackVal, StackVal, Function_282((Param0 + iParam7), bParam6));
	}
}

var Function_282(bool bParam0, bool bParam1) //Position: 0x9108 / 37128
{
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

void Function_283(struct<21> Param0) //Position: 0x912A / 37162
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(Param0.f_16))
	{
		stradd(&cVar0, Param0.f_16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(Param0.f_20))
	{
		stradd(&cVar0, Param0.f_20, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_TEAM_LABEL(StackVal, iParam8, Function_282(bParam6, bParam7), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_TEAM_SCORE(StackVal, StackVal, iParam8, Function_282(bParam6, bParam7));
	}
}

bool Function_284() //Position: 0x9195 / 37269
{
	return Function_100(16384);
}

void Function_285(int iParam0, float fParam1) //Position: 0x91A1 / 37281
{
	Function_286(iParam0, -fParam1);
	return;
}

void Function_286(var uParam0, float fParam1) //Position: 0x91AF / 37295
{
	Function_171();
	Function_287(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_287(var uParam0, int iParam1) //Position: 0x91C3 / 37315
{
	uParam0->f_4 = iParam1;
	Function_42(uParam0, 1);
	Function_39(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_288(int iParam0) //Position: 0x91E0 / 37344
{
	return Function_49(*iParam0, 1);
}

void Function_289(int iParam0, bool bParam1) //Position: 0x91ED / 37357
{
	if (bParam1)
	{
		Function_42(iParam0 + 44, 32);
	}
	else
	{
		Function_39(iParam0 + 44, 32);
	}
	return;
}

void Function_290(int iParam0) //Position: 0x920D / 37389
{
	Function_39(iParam0 + 44, 512);
	return;
}

void Function_291(int iParam0, bool bParam1) //Position: 0x921D / 37405
{
	if (bParam1)
	{
		Function_42(iParam0 + 44, 2);
	}
	else
	{
		Function_39(iParam0 + 44, 2);
	}
	return;
}

bool Function_292(int iParam0) //Position: 0x923B / 37435
{
	return Function_49(iParam0->f_44, 32);
}

void Function_293(int iParam0) //Position: 0x924A / 37450
{
	Function_294(iParam0, 37477);
	return;
}

void Function_294(int iParam0, int iParam1) //Position: 0x9259 / 37465
{
	iParam0->f_176 = iParam1;
	return;
}

int Function_295() //Position: 0x9265 / 37477
{
	return 0;
}

void Function_296(int iParam0) //Position: 0x926C / 37484
{
	iParam0->f_68 = 1;
	return;
}

bool Function_297(int iParam0, int iParam1) //Position: 0x9277 / 37495
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = "";
	if (!Function_395(iParam1) && *iParam0 > 9)
	{
		*iParam0 = 9;
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_389(iParam0 + 48))
			{
				*iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_67(iParam0, 1) || Function_67(iParam0, 64))
			{
				if (Function_67(iParam0, 64))
				{
					Function_388(1);
				}
				else
				{
					Function_387();
				}
				bVar1 = Function_13();
				if (Function_67(iParam0, 8))
				{
				}
				else
				{
					Function_386(bVar1);
				}
				if (Function_288(iParam1) || Function_385(2))
				{
					Function_384(iParam0);
					if (Function_67(iParam0, 8))
					{
						*iParam0 = 5;
					}
					else
					{
						Function_383(bVar1, iParam0);
						*iParam0 = 7;
					}
				}
				else
				{
					*iParam0 = 2;
					iParam0->f_108 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_381(iParam1, 0, (iParam0->f_108 % 300) != 0))
			{
				Function_388(1);
				*iParam0 = 3;
				iParam0->f_108 = 0;
			}
			else
			{
				Function_374(iParam0, iParam1);
				iParam0->f_108++;
			}
			break;
		
		case 0x00000003:
			if (Function_381(iParam1, 1, (iParam0->f_108 % 300) != 0))
			{
				Function_384(iParam0);
				iParam0->f_44 = 4294967295;
				if (Function_67(iParam0, 8))
				{
					if (!Function_373(2097152) && !Function_373(4194304))
					{
						Function_370(iParam1);
					}
					if (Function_67(iParam0, 64))
					{
						*iParam0 = 5;
					}
					else
					{
						iParam0->f_36 = Function_355(Function_369(), Function_149());
						Function_348(iParam0);
						*iParam0 = 4;
						Function_66(1);
					}
				}
				else
				{
					if (IS_STRING_VALID(&Global_83591 + 28[09]))
					{
						Function_347(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
					}
					if (Function_67(iParam0, 64))
					{
						*iParam0 = 7;
					}
					else
					{
						iParam0->f_36 = Function_333(Function_369(), iParam0);
						Function_327(iParam0, iParam1);
						*iParam0 = 8;
						Function_326(iParam0);
					}
				}
				if (NET_IS_SESSION_HOST())
				{
					Function_325(2, 1);
				}
			}
			else
			{
				iParam0->f_108++;
				Function_374(iParam0, iParam1);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_348(iParam0);
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 1, 1);
				Function_60(iParam0, 1);
				*iParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (!Function_288(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_285(iParam1, 6.0f);
				}
			}
			else if (Function_324(iParam1))
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_323("showdown_draw", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_322("GENMESS_SDOWNSTARTS", 0);
				DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
				if (!Function_67(iParam0, 64))
				{
					Function_319();
					bVar1 = Function_13();
					Function_318(bVar1, iParam0);
				}
				Function_58();
				*iParam0 = 9;
			}
			else
			{
				bVar0 = CEIL(Function_169(iParam1));
				if (StackVal != bVar0)
				{
					iParam0->f_4 = bVar0;
					switch (StackVal)
					{
						case 0x00000004:
							Function_323("showdown_ready", iVar2, 2.0f, 0, 0, 0, 0);
							Function_322("GENMESS_SDABOUTSTART", 0);
							break;
						}
					}
			}
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_327(iParam0, iParam1);
			}
			else
			{
				if (!Function_67(iParam0, 64))
				{
					UI_SHOW("Reticle");
					SET_PLAYER_CONTROL(0, 1, 1, 1);
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
				}
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (!Function_288(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_285(iParam1, (4.0f + 1.0f));
				}
			}
			else if (Function_324(iParam1))
			{
				if (!Function_67(iParam0, 64))
				{
					Function_60(iParam0, 1);
					Function_319();
					UI_EXIT("MPSplash");
					Function_317(Function_13(), iParam0);
				}
				Function_58();
				Function_323("standoff_go", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_322("GENMESS_STANDSTART", 0);
				AUDIO_MUSIC_SUSPEND(0);
				*iParam0 = 9;
			}
			else
			{
				bVar0 = CEIL(Function_169(iParam1));
				if (StackVal != bVar0)
				{
					iParam0->f_4 = bVar0;
					if (bVar0 != 4 && 0)
					{
						Function_323("standoff_wait", iVar2, 2.0f, 0, 0, 0, 0);
					}
					else if (bVar0 == 4)
					{
						Function_322("GENMESS_STANDABOUTSTART", 0);
						Function_323("showdown_ready", iVar2, 3.0f, 0, 0, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000009:
			Function_53(iParam0, 0);
			if (NET_IS_SESSION_HOST())
			{
				Function_316(iParam1 + 12);
			}
			*iParam0 = 10;
		
		case 0x0000000A:
			Function_314(iParam0);
			if (Function_300(iParam0, iParam1))
			{
				*iParam0 = 11;
				Function_299();
				iParam0->f_88 = GET_CURRENT_GAME_TIME();
			}
			break;
		
		case 0x0000000B:
			Function_314(iParam0);
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 6.0f)
			{
				UI_HIDE("XpHud");
				Function_53(iParam0, 1);
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (NET_IS_SESSION_HOST())
			{
				Function_325(3, 0);
				iParam1->f_16 = 0;
			}
			Function_314(iParam0);
			if (!Function_67(iParam0, 128))
			{
				if (iParam0->f_88 != 0.0f || (GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 10.0f)
				{
					if (Function_172())
					{
						if (Function_288(&Global_78578 + 96))
						{
							if (Function_169(&Global_78578 + 96) < (Global_83591.f_16 * 0.5f))
							{
								if (IS_STRING_VALID(&Global_83591 + 28[09]))
								{
									Function_347(&Global_83591 + 28[09], (&Global_83591 + 28[09])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
							else if (Function_169(&Global_78578 + 96) < 30.0f)
							{
								if (IS_STRING_VALID(&Global_83591 + 28[19]))
								{
									Function_347(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
						}
					}
					Function_298(iParam0, 128);
				}
			}
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_298(int iParam0, int iParam1) //Position: 0x9871 / 39025
{
	Function_42(iParam0 + 24, iParam1);
	return;
}

void Function_299() //Position: 0x9880 / 39040
{
	float fVar0;
	bool bVar1;
	
	fVar0 = (UI_ANIM_GET_TIME("XpComboTimer") / 20.0f);
	bVar1 = FLOOR((32.0f * fVar0));
	UI_ANIM_SETUP("XpComboTimer", 0.0f, bVar1, bVar1);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

bool Function_300(int iParam0, int iParam1) //Position: 0x98D6 / 39126
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	int iVar8;
	
	if (NET_IS_SESSION_HOST() && iParam1->f_20 != 4294967295)
	{
		Function_312(iParam0, iParam1);
	}
	if (iParam1->f_20 == 4294967295)
	{
		return 0;
	}
	iVar0 = "";
	if (iParam1->f_20 == 4294967292)
	{
		if (Function_67(iParam0, 8))
		{
			Function_323("showdown_timeout", iVar0, 2.0f, 0, 0, 0, 0);
			Function_322("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_323("standoff_timeout", iVar0, 2.0f, 0, 0, 0, 0);
			Function_322("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		Function_310("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		return 1;
	}
	if (iParam1->f_20 == 4294967291)
	{
		Function_323("showdown_tie", iVar0, 2.0f, 0, 0, 0, 0);
		Function_310("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (Function_67(iParam0, 8))
		{
			Function_322("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_322("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		return 1;
	}
	if (Function_67(iParam0, 8))
	{
		bVar1 = Function_49(iParam1->f_20, 4);
		iVar2 = iParam1->f_20 & 1;
		Var3 = { StackVal, StackVal, StackVal, Function_306(iVar2, 0) };
		if (iVar2 == Function_149())
		{
			bVar7 = "mp_teammsg_blue_start";
			iVar8 = "mp_teammsg_blue_end";
			Function_310("FTR_BOUNTY_HUNTER_COMPLETE_SONG_01", 1, 0, 0, 0, 0);
			if (Function_305(iParam1, GET_LOCAL_SLOT()))
			{
				if (bVar1)
				{
					Function_301(100.0f, "xp_showdown_flawless", 1);
					Function_322("GENMESS_SDSURVIVEUNTOUCH", 0);
				}
				else
				{
					Function_301(50.0f, "xp_showdown_flawless", 1);
					Function_322("GENMESS_GANGWINSSDOWN", 0);
				}
			}
			else
			{
				Function_322("GENMESS_GANGWINSSDOWN", 0);
			}
		}
		else
		{
			Function_310("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
			bVar7 = "mp_teammsg_red_start";
			iVar8 = "mp_teammsg_red_end";
			Function_322("GENMESS_GANGLOSESDSTART", 0);
		}
		Function_61();
		Function_323("showdown_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, bVar7, &Var3, iVar8, 0);
		if (bVar1)
		{
			Function_323("showdown_flawless", "HUD_MP_PRINT_AWESOME_MASTER", 2.0f, 0, 0, 0, 0);
		}
	}
	else
	{
		Function_310("MEX_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (iParam1->f_20 == GET_LOCAL_SLOT())
		{
			Function_301(75.0f, "xp_standoff", 1);
			Function_323("standoff_won_you", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, 0, 0, 0, 0);
			Function_322("GENMESS_WINSOSTARTMATCH", 0);
		}
		else
		{
			Function_322("GENMESS_LOSESOSTARTMATCH", 0);
			Function_323("standoff_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, Function_256(iParam1->f_20), 0, 0, 0);
		}
	}
	return 1;
}

int Function_301(bool bParam0, float fParam1, bool bParam2) //Position: 0x9D84 / 40324
{
	if (!Function_275())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_304(8, bParam0);
	}
	Function_302(487, (bParam0 * Global_3362), fParam1);
	return 1;
}

void Function_302(var uParam0, bool bParam1, int iParam2) //Position: 0x9DB4 / 40372
{
	Function_303(uParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_303(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x9DD0 / 40400
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
	Function_30(iParam0, TO_FLOAT(bParam1), 1);
	Function_29(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_304(var uParam0, float fParam1) //Position: 0x9FF0 / 40944
{
	Function_267(uParam0, (Function_106(uParam0) + fParam1));
	return;
}

bool Function_305(int iParam0, bool bParam1) //Position: 0xA003 / 40963
{
	return ((!Function_151(bParam1, 2, 1) && !Function_151(bParam1, 16384, 1)) && (*iParam0 + 24)[bParam1] == 4294967295);
}

struct<16> Function_306(int iParam0, int iParam1) //Position: 0xA027 / 40999
{
	return StackVal, StackVal, StackVal, Function_307(Function_308(iParam0), iParam1);
}

struct<16> Function_307(bool bParam0, bool bParam1) //Position: 0xA039 / 41017
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_308(int iParam0) //Position: 0xA06E / 41070
{
	if (!Function_309())
	{
		return 0;
	}
	return StackVal;
}

bool Function_309() //Position: 0xA087 / 41095
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA094 / 41108
{
	AUDIO_MUSIC_ONE_SHOT(uParam0, Function_311(iParam1), iParam2, iParam3, iParam4, iParam5);
}

var Function_311(int iParam0) //Position: 0xA0AE / 41134
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
	return iVar0;
}

void Function_312(int iParam0, int iParam1) //Position: 0xA601 / 42497
{
	bool bVar0;
	var uVar1[2];
	var uVar4[2];
	int iVar7;
	bool bVar8;
	
	if (!Function_288(iParam1))
	{
	}
	else if (Function_170(iParam1) < 20.0f)
	{
		iParam1->f_20 = 4294967292;
		return;
	}
	if (Function_67(iParam0, 8))
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_313(bVar0))
			{
				iVar7 = Function_150(bVar0, 0, 0);
				if (iVar7 >= 4294967295)
				{
					uVar4[iVar7]++;
					if (Function_305(iParam1, bVar0))
					{
						uVar1[iVar7]++;
					}
				}
			}
			bVar0++;
		}
		if (uVar1[0] < 0 && uVar1[1] < 0)
		{
			return;
		}
		if (uVar1[0] >= 0 && uVar1[1] >= 0)
		{
			iParam1->f_20 = 4294967291;
			return;
		}
		bVar0 = false;
		while (bVar0 <= 2)
		{
			if (uVar1[bVar0] >= 0)
			{
				iParam1->f_20 = bVar0;
				if (uVar1[bVar0] == uVar4[bVar0])
				{
					Function_42(iParam1 + 20, 4);
				}
				return;
			}
			bVar0++;
		}
	}
	else
	{
		bVar8 = 4294967295;
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_313(bVar0))
			{
				if (Function_305(iParam1, bVar0))
				{
					if (bVar8 == 4294967295)
					{
						bVar8 = bVar0;
					}
					else
					{
						return;
					}
				}
			}
			bVar0++;
		}
		if (bVar8 >= 4294967295)
		{
			iParam1->f_20 = bVar8;
		}
		else
		{
			iParam1->f_20 = 4294967292;
		}
	}
	return;
}

bool Function_313(bool bParam0) //Position: 0xA746 / 42822
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_154(bParam0);
}

void Function_314(int iParam0) //Position: 0xA75C / 42844
{
	bool bVar0;
	
	if (Function_67(iParam0, 8))
	{
		if (!Function_67(iParam0, 256))
		{
			bVar0 = Function_13();
			if (!Function_211(bVar0, 0))
			{
				Function_298(iParam0, 256);
			}
			else if (!ACTOR_HAS_ANIM_SET(bVar0, Function_315()))
			{
				Function_298(iParam0, 256);
			}
			else if (!IS_ACTOR_PLAYING_NODE_IN_TREE(bVar0, "MP_Showdown/Idles"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				Function_298(iParam0, 256);
			}
		}
	}
	return;
}

bool Function_315() //Position: 0xA7D4 / 42964
{
	return "mp_showdown";
}

void Function_316(int iParam0) //Position: 0xA7E8 / 42984
{
	*iParam0++;
	return;
}

void Function_317(bool bParam0, int iParam1) //Position: 0xA7F6 / 42998
{
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, iParam1->f_28);
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_MAX_SPEED(bParam0, 3);
	}
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_318(bool bParam0, var uParam1) //Position: 0xA841 / 43073
{
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_END_FORCE_HOLSTER(bParam0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, uParam1->f_28);
	}
	if (Function_373(2097152) || Function_373(4194304))
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			SET_ACTOR_MAX_SPEED(bParam0, 3);
		}
	}
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_319() //Position: 0xA89F / 43167
{
	UI_SHOW("XpHud");
	UNK_0xA6403262(4294967295, UI_GET_STRING("Common_Null"));
	UI_SHOW("XPMultiplier");
	UI_SHOW("XPComboTimer");
	UI_SET_TEXT("XPComboLevel", Function_320(0));
	UI_ANIM_SETUP("XpComboTimer", 20.0f, 32, false);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

var Function_320(bool bParam0) //Position: 0xA92B / 43307
{
	bool bVar0;
	
	bVar0 = Function_321();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_321() //Position: 0xA942 / 43330
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
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

void Function_322(bool bParam0, bool bParam1) //Position: 0xA9FE / 43518
{
	bool bVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		bVar0 = "";
		if (bParam1)
		{
			bVar0 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_323(float fParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xAA3E / 43582
{
	if (IS_STRING_VALID(bParam3))
	{
		PRINT_BIG_FORMAT(fParam2, fParam0, bParam3, iParam4, iParam5, iParam6, 0, iParam1);
	}
	else
	{
		PRINT_BIG(fParam0, fParam2, 0, 0, iParam1);
	}
}

bool Function_324(int iParam0) //Position: 0xAA6E / 43630
{
	if (Function_288(iParam0))
	{
		if (Function_169(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_325(int iParam0, bool bParam1) //Position: 0xAA89 / 43657
{
	if (!NET_IS_SESSION_HOST() && NET_IS_IN_SESSION())
	{
		return;
	}
	if (bParam1)
	{
		Function_42(&Global_78578 + 88, iParam0);
	}
	else
	{
		Function_39(&Global_78578 + 88, iParam0);
	}
	return;
}

void Function_326(int iParam0) //Position: 0xAAB9 / 43705
{
	if (iParam0->f_96 != 4294967295)
	{
		NET_GAMER_ICON_FORCE_VISIBILITY(iParam0->f_96, 2);
	}
	NET_GAMER_ICON_FORCE_VISIBILITY(GET_LOCAL_SLOT(), 2);
	return;
}

void Function_327(int iParam0, int iParam1) //Position: 0xAAD6 / 43734
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_67(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_332();
			Function_322(&Global_79349 + 48, 0);
			Function_298(iParam0, 32);
		}
	}
	UI_SUPPRESS("WeaponAmmo");
	UI_EXCLUDE("WeaponAmmo");
	if (iParam0->f_44 != iVar0)
	{
		iParam0->f_44 = iVar0;
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0x00000000:
				iParam0->f_96 = Function_331(iParam1);
				NET_GAMER_SET_TEAM(iParam0->f_96, 0);
				break;
			
			case 0x00000001:
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000002:
				DECOR_SET_BOOL(Function_13(), "ForceAim", true);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				Function_330("standoff_title");
				break;
			
			case 0x00000003:
				DECOR_SET_BOOL(Function_13(), "ForceAim", true);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				PPP_LOAD_PRESET(Function_64());
				iParam0->f_100 = Function_329(Function_13());
				Function_298(iParam0, 2);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000005:
				Function_60(iParam0, 0);
				if (iParam0->f_96 != 4294967295)
				{
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("standoff_help_target"), UI_GET_STRING(Function_256(iParam0->f_96)), false, false);
					UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_1");
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s1", "standoff_help");
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0x00000007:
				break;
			
			case 0x00000008:
				break;
			
			case 0x00000009:
				break;
			
			case 0x0000000A:
				break;
			
			case 0x0000000B:
				Function_328(8, 0.0f, 4000, 1000);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			}
	}
	return;
}

void Function_328(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xACFE / 44286
{
	AUDIO_MUSIC_SET_MOOD(Function_311(iParam0), iParam1, iParam2, iParam3);
}

var Function_329(bool bParam0) //Position: 0xAD14 / 44308
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_191(bParam0);
	vVar6 = { StackVal, StackVal, Function_191(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0.5f, -0.5f, -0.5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_13(), "LookItMeLight", vVar6, 6.0f, 6.0f, 6.0f, 2.5f);
}

void Function_330(bool bParam0) //Position: 0xAD89 / 44425
{
	UI_SET_TEXT("MPSplashItem.s0", cParam0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", 17);
	UI_ENTER("MPSplash");
	return;
}

var Function_331(bool bParam0) //Position: 0xADEC / 44524
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if ((*bParam0 + 24)[bVar1] == 4294967295 && bVar1 == bVar2)
		{
			iVar0++;
		}
		bVar1++;
	}
	if (iVar0 < 0)
	{
		return 4294967295;
	}
	iVar3 = (RAND_INT_RANGE(0, 1000) % iVar0);
	iVar4 = 0;
	bVar1 = (bVar2 + 1 % 16);
	bVar5 = false;
	while (!bVar5 && iVar4 > 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if ((*bParam0 + 24)[bVar1] == 4294967295 && iVar4 <= iVar3)
			{
				bVar5 = true;
			}
			else
			{
				iVar4++;
			}
		}
		if (!bVar5)
		{
			bVar1 = (bVar1 + 1 % 16);
		}
	}
	if (!bVar5)
	{
		return 4294967295;
	}
	return bVar1;
}

void Function_332() //Position: 0xAE95 / 44693
{
	PRINT_HELP_FORMAT(6.0f, "CTF_ffa_rules_0", I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0, 0, 2, 0, 0);
	Function_268("CTF_ffa_rules_1", 5.0f, 1, 0, 2, 1, 0);
	return;
}

int Function_333(bool bParam0, bool bParam1) //Position: 0xAEEA / 44778
{
	var uVar0;
	var uVar1;
	
	uVar0 = Function_346(Function_13(), "Me");
	uVar1 = Function_345(bParam0);
	bParam1->f_40 = CREATE_OBJECT_LOCATOR(uVar0, "gunLocator");
	if (!OBJECT_LOCATOR_ATTACH_TO_OBJECT_BONE(bParam1->f_40, uVar0, "wrist_r_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f))
	{
	}
	return Function_334(bParam0, 0, uVar0, uVar1, bParam1->f_40, 1, 0, 0);
}

int Function_334(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xAF53 / 44883
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_18(), 9, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Standoff", 9, 1);
	}
	Function_335(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_335(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAFD2 / 45010
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_344(&bVar0, uParam1, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_343(&bVar0, uParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_342(&bVar0, uParam1, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_341(&bVar0, uParam1, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_340(&bVar0, uParam1, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_339(&bVar0, uParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_338(&bVar0, uParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_337(&bVar0, uParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_336(&bVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 0, 0.05f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 1.5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 4, 5, 2.5f, 6, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 0.45f, 7);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 5, 6, 4.0f, 8, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 0.5f, 9);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 6, 7, 1.5f, 10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 7, 1.0f, 11);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 7, 8, 0.2f, 12, 0);
}

void Function_336(var uParam0, bool bParam1) //Position: 0xB136 / 45366
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.700737f, 1.6177f, 0.676565f, -3.701995f, 9.551663f, -0.076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_337(var uParam0, bool bParam1) //Position: 0xB1AB / 45483
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.700737f, 1.6177f, 0.676565f, -3.701995f, 9.551663f, -0.076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 8.6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_338(var uParam0, bool bParam1) //Position: 0xB258 / 45656
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.700737f, 1.6177f, 0.676565f, -3.928657f, 42.53037f, -0.03432f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 5.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_339(var uParam0, bool bParam1) //Position: 0xB301 / 45825
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.441266f, 1.590829f, 0.323404f, -3.052203f, -37.19361f, -0.093048f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 5.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_340(var uParam0, bool bParam1, bool bParam2) //Position: 0xB3AA / 45994
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.441266f, 1.590829f, 0.323404f, -3.701995f, 9.551663f, -0.076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 8.6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_341(var uParam0, bool bParam1, bool bParam2) //Position: 0xB45F / 46175
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.0f, 18.23245f, 4.313523f, -67.08659f, 0.237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0.380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31.69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_342(var uParam0, bool bParam1, bool bParam2) //Position: 0xB522 / 46370
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.0f, 18.23245f, 4.313523f, -67.08659f, 0.237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0.380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31.69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_343(var uParam0, bool bParam1) //Position: 0xB5E9 / 46569
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 45.75f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.562671f, 1.496117f, -1.597335f, -3.967331f, 158.1299f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.103045f, 1.372172f, 0.061185f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.964602f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 19.216f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 5.9696f);
	return;
}

void Function_344(var uParam0, bool bParam1, bool bParam2) //Position: 0xB6B5 / 46773
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.8127f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.351376f, 1.457621f, -1.083728f, -1.094235f, 158.9572f, -10.40062f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.06695f, 1.435368f, 0.003617f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0.181525f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.04f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_345(bool bParam0) //Position: 0xB79F / 47007
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, "StandoffCenter");
}

var Function_346(bool bParam0, bool bParam1) //Position: 0xB7BB / 47035
{
	if (IS_ACTOR_VALID(bParam0))
	{
	}
	else
	{
		bParam0 = Function_13();
	}
	return GET_OBJECT_FROM_ACTOR(bParam0);
}

void Function_347(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB7D6 / 47062
{
	AUDIO_MUSIC_FORCE_TRACK(cParam0, Function_311(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_348(int iParam0) //Position: 0xB7F2 / 47090
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_67(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_354();
			Function_322(&Global_79349 + 48, 0);
			Function_298(iParam0, 32);
		}
	}
	bVar1 = iVar0;
	if (iParam0->f_92 < 0.0f)
	{
		iParam0->f_92 = (iParam0->f_92 - GET_UNWARPED_REALTIME_SECONDS());
		if (iParam0->f_92 >= 0.0f)
		{
			switch (bVar1)
			{
				case 0x00000002:
					DECOR_SET_INT(Function_13(), "Go", true);
					break;
				
				case 0x00000004:
					DECOR_SET_INT(Function_13(), "Go2", true);
					break;
				
				case 0x00000006:
					DECOR_SET_INT(Function_13(), "Go3", true);
					break;
				}
			}
	}
	if (iParam0->f_44 != iVar0)
	{
		iParam0->f_44 = iVar0;
		switch (bVar1)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_62());
				Function_298(iParam0, 4);
				UI_SET_STYLE("MPSplashTitle", 16);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Var2 = { StackVal, StackVal, StackVal, Function_306(Function_149(), 1) };
				Function_353(Function_149());
				UI_SET_TEXT("MPSplashTitle", &Var2);
				break;
			
			case 0x00000003:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_13(), "Go");
				Function_60(iParam0, 1);
				Function_322("ANNOUNCE_VS", 0);
				CANCEL_TIME_WARP(0);
				break;
			
			case 0x00000004:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_65());
				Function_298(iParam0, 2);
				Var2 = { StackVal, StackVal, StackVal, Function_306(Function_351(Function_149()), 1) };
				Function_353(Function_351(Function_149()));
				UI_SET_TEXT("MPSplashTitle", &Var2);
				UI_SET_STYLE("MPSplashTitle", 15);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000005:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_13(), "Go2");
				Function_60(iParam0, 1);
				CANCEL_TIME_WARP(0);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000006:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_62());
				iParam0->f_100 = Function_350(Function_13());
				Function_298(iParam0, 4);
				Function_322("ANNOUNCE_YOU", 0);
				UI_SET_TEXT("MPSplashItem.s0", Function_349(GET_LOCAL_SLOT()));
				UI_SET_STRING("Generic_Dbuffer128_0", &Global_78480 + 32);
				if (Function_277())
				{
					if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(GET_LOCAL_SLOT())))
					{
						UI_SET_STRING("Generic_Dbuffer128_0", NET_GAMER_GET_JPN_TITLE(GET_LOCAL_SLOT()));
					}
				}
				UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
				UI_SET_STYLE("MPSplashTitle", 17);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000007:
				DECOR_REMOVE(Function_13(), "Go3");
				CANCEL_TIME_WARP(1);
				UI_EXIT("MPSplash");
				Function_60(iParam0, 1);
				if (IS_PS3())
				{
					Function_268("showdown_draw_help_ps3", (2.5f + 1.0f), 0, 0, 2, 1, 0);
				}
				else
				{
					Function_268("showdown_draw_help", (2.5f + 1.0f), 0, 0, 2, 1, 0);
				}
				break;
			}
	}
	return;
}

var Function_349(bool bParam0) //Position: 0xBC5C / 48220
{
	switch (bParam0)
	{
		case 0x00000000:
			return "MPPlayerName_0";
		
		case 0x00000001:
			return "MPPlayerName_1";
		
		case 0x00000002:
			return "MPPlayerName_2";
		
		case 0x00000003:
			return "MPPlayerName_3";
		
		case 0x00000004:
			return "MPPlayerName_4";
		
		case 0x00000005:
			return "MPPlayerName_5";
		
		case 0x00000006:
			return "MPPlayerName_6";
		
		case 0x00000007:
			return "MPPlayerName_7";
		
		case 0x00000008:
			return "MPPlayerName_8";
		
		case 0x00000009:
			return "MPPlayerName_9";
		
		case 0x0000000A:
			return "MPPlayerName_10";
		
		case 0x0000000B:
			return "MPPlayerName_11";
		
		case 0x0000000C:
			return "MPPlayerName_12";
		
		case 0x0000000D:
			return "MPPlayerName_13";
		
		case 0x0000000E:
			return "MPPlayerName_14";
		
		case 0x0000000F:
			return "MPPlayerName_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

var Function_350(bool bParam0) //Position: 0xBE00 / 48640
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_191(bParam0);
	vVar6 = { StackVal, StackVal, Function_191(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0.5f, -0.5f, -0.5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_13(), "LookItMeLight", vVar6, 1.0f, 1.0f, 1.0f, 2.5f);
}

int Function_351(int iParam0) //Position: 0xBE75 / 48757
{
	if (iParam0 == 4294967295)
	{
		return 4294967295;
	}
	return Function_352(iParam0);
}

int Function_352(int iParam0) //Position: 0xBE88 / 48776
{
	return (iParam0 + 1 % 2);
}

void Function_353(int iParam0) //Position: 0xBE94 / 48788
{
	struct<16> Var0;
	
	strcpy(&Var0, "ANNOUNCE_TEAM_", 64);
	straddi(&Var0, Function_308(iParam0), 64);
	Function_322(&Var0, 0);
	return;
}

void Function_354() //Position: 0xBEBE / 48830
{
	switch (Global_79349.f_16)
	{
		case 0x00000009:
			PRINT_HELP_FORMAT(6.0f, "CTF_sym_rules_0", I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0, 0, 2, 0, 0);
			Function_268("CTF_sym_rules_1", 5.0f, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000008:
			PRINT_HELP_FORMAT(6.0f, "CTF_one_rules_0", I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0, 0, 2, 0, 0);
			Function_268("CTF_one_rules_1", 5.0f, 1, 0, 2, 1, 0);
			break;
	}
	return;
}

int Function_355(bool bParam0, bool bParam1) //Position: 0xBF7F / 49023
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = Function_351(bParam1);
	uVar1 = Function_367(bParam0, bParam1);
	uVar2 = Function_367(bParam0, iVar0);
	uVar3 = Function_346(Function_13(), "Me");
	return Function_356(bParam0, 0, uVar3, uVar1, uVar2, 0, 0, 0);
}

int Function_356(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xBFBA / 49082
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_18(), 9, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Showdown2", 9, 1);
	}
	Function_357(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 2.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_357(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0xC03B / 49211
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_366(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_365(&bVar0, uParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_364(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_363(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_362(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_361(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_360(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_359(&bVar0, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_358(&bVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 12.5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 1.5f, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "Go", 2, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 1.5f, 3, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "Go2", 4, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 2.5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 5, cParam1, "Go3", 6, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 4.5f, 7);
}

void Function_358(var uParam0, bool bParam1, bool bParam2) //Position: 0xC170 / 49520
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65.44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.5f, 6.064114f, 4.464365f, -37.3141f, -2.927814f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42.778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_359(var uParam0, bool bParam1, bool bParam2) //Position: 0xC22C / 49708
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65.44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.5f, 6.064114f, 4.4647f, -37.3141f, -2.927871f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42.778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_360(var uParam0, bool bParam1) //Position: 0xC2E8 / 49896
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 18.542f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 1.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.674432f, 0.879538f, 1.537114f, -0.349963f, 9.024257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.41889f, 0.869587f, -0.071906f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_361(var uParam0, bool bParam1) //Position: 0xC374 / 50036
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 7.228f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.725417f, 1.294801f, -2.751867f, 2.473631f, 165.6309f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.533f, -0.21f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.64f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18.028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_362(var uParam0, bool bParam1) //Position: 0xC43C / 50236
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 6.728f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.07f, 1.175f, -4.092f, 0.0f, 179.5041f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.074344f, 1.538012f, -0.054681f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18.028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 1.8226f);
	return;
}

void Function_363(var uParam0, bool bParam1) //Position: 0xC500 / 50432
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8.5f, 1.469942f, -1.747687f, -1.032928f, -98.24805f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.161f, 1.317305f, 0.622f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_364(var uParam0, bool bParam1) //Position: 0xC5C8 / 50632
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8.5f, 1.469955f, -0.105855f, -1.02399f, -89.95139f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.024f, 1.317f, -0.115f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_365(var uParam0, bool bParam1) //Position: 0xC690 / 50832
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8.5f, 1.47f, -1.747912f, -1.011041f, 105.8626f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.153f, 1.316862f, 0.622f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 1.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_366(var uParam0, bool bParam1) //Position: 0xC758 / 51032
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8.5f, 1.469824f, -0.105534f, -1.030178f, 89.93437f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.023677f, 1.317106f, -0.115403f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_367(bool bParam0, int iParam1) //Position: 0xC820 / 51232
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, Function_368(iParam1));
}

var Function_368(int iParam0) //Position: 0xC830 / 51248
{
	if (iParam0 == 0)
	{
		return "Showdown_A";
	}
	if (iParam0 == 1)
	{
		return "Showdown_B";
	}
	return "__invalid__";
}

bool Function_369() //Position: 0xC872 / 51314
{
	return Global_83591.f_140;
}

void Function_370(int iParam0) //Position: 0xC87E / 51326
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bVar1 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((*iParam0 + 24)[bVar0] != 4294967295)
				{
					Function_371(bVar1, 0, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_371(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC8C2 / 51394
{
	if (!ACTOR_HAS_ANIM_SET(bParam0, Function_315()))
	{
		if (!SET_ANIM_SET_FOR_ACTOR(bParam0, Function_315(), 0))
		{
			return 0;
		}
	}
	if (bParam1)
	{
		return 1;
	}
	if (bParam2)
	{
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_372());
	}
	TASK_ACTION_PERFORM(bParam0, Function_372());
	return 1;
}

var Function_372() //Position: 0xC904 / 51460
{
	return "MP_Showdown/Idles";
}

bool Function_373(int iParam0) //Position: 0xC91E / 51486
{
	return Function_49((&Global_83591 + 140)->f_56, iParam0);
}

void Function_374(int iParam0, int iParam1) //Position: 0xC931 / 51505
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	int iVar9;
	
	bVar0 = GET_LOCAL_SLOT();
	if (bVar0 != 4294967295)
	{
		iVar1 = (*iParam1 + 24)[bVar0];
		if (iVar1 != 4294967295)
		{
			bVar2 = false;
			if (Function_67(iParam0, 8))
			{
				iVar9 = Function_149();
				if (iVar9 != 4294967295)
				{
					bVar2 = Function_377(Function_369(), iVar9, &vVar3, &uVar6, iVar1, (*iParam1 + 92)[iVar9]);
				}
			}
			else
			{
				bVar2 = Function_375(Function_369(), &vVar3, &uVar6, iVar1, 16);
			}
			if (bVar2)
			{
				SET_OBJECT_POSITION(Function_13(), vVar3);
			}
		}
	}
	return;
}

int Function_375(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC9A5 / 51621
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = Function_345(bParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar0, &vVar1))
	{
		return 0;
	}
	if (bParam3 >= 4294967295)
	{
		bVar5 = TO_FLOAT(bParam4);
		bVar4 = TO_FLOAT(bParam3);
	}
	else
	{
		bVar5 = TO_FLOAT(NET_GET_SESSION_GAMER_COUNT());
		bVar4 = TO_FLOAT(Function_376(GET_LOCAL_SLOT()));
	}
	*uParam2 = { 0.0f, ((360.0f / bVar5) * bVar4), 0.0f };
	UNK_0x44986367(StackVal, &vVar6);
	if (DECOR_CHECK_EXIST(bVar0, "Narrow"))
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(2.8f, 2.8f, 2.8f), StackVal, StackVal) };
	}
	else
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal) };
	}
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, iParam1, &uVar12))
	{
		*iParam1 = { StackVal, StackVal, vVar9 };
	}
	return 1;
}

var Function_376(bool bParam0) //Position: 0xCA70 / 51824
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == bParam0)
			{
				return iVar1;
			}
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

bool Function_377(bool bParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xCAAB / 51883
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	var uVar13;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	bVar0 = Function_367(bParam0, iParam1);
	if (!IS_OBJECT_VALID(bVar0))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar0, &vVar1))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	if (bParam4 >= 4294967295)
	{
		bVar4 = TO_FLOAT(bParam5);
		bVar5 = TO_FLOAT(bParam4);
	}
	else
	{
		bVar4 = TO_FLOAT(Function_379(iParam1));
		bVar5 = TO_FLOAT(Function_378(GET_LOCAL_SLOT(), 1));
	}
	fVar6 = (bVar5 - ((bVar4 - 1.0f) / 2.0f));
	GET_OBJECT_ORIENTATION(bVar0, uParam3);
	DECOR_GET_VECTOR(bVar0, "Right", &vVar7);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar7, vVar1, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) * Vector(fVar6, fVar6, fVar6), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar10, 2.0f, iParam2, &uVar13))
	{
		if (bParam4 == 4294967295)
		{
		}
		*iParam2 = { StackVal, StackVal, vVar10 };
	}
	return 1;
}

var Function_378(bool bParam0, bool bParam1) //Position: 0xCB7C / 52092
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = Function_150(bParam0, bParam1, 0);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 == bParam0)
		{
			return iVar1;
		}
		if (Function_150(bVar0, bParam1, 0) == iVar2)
		{
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

int Function_379(int iParam0) //Position: 0xCBC3 / 52163
{
	return Function_380(iParam0, 1);
}

int Function_380(int iParam0, bool bParam1) //Position: 0xCBCF / 52175
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1) || !bParam1)
		{
			if (Function_150(bVar1, bParam1, 0) == iParam0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_381(int iParam0, bool bParam1, bool bParam2) //Position: 0xCC0C / 52236
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bParam2 = bParam2;
	bVar4 = NET_IS_SESSION_HOST();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if ((*iParam0 + 24)[bVar1] == 4294967295)
			{
				iVar2++;
			}
			else if (Function_154(bVar1))
			{
				if (Function_382(bVar1) || !bParam1)
				{
					bVar3 = GET_SLOT_ACTOR(bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (Function_209(bVar3, 1, 0x41700000))
						{
							iVar0++;
						}
					}
				}
			}
		}
		else if (bVar4 && (*iParam0 + 24)[bVar1] == 4294967295)
		{
			(*iParam0 + 24)[bVar1] = 4294967295;
		}
		bVar1++;
	}
	return iVar0 != (NET_GET_SESSION_GAMER_COUNT() - iVar2);
}

bool Function_382(bool bParam0) //Position: 0xCCA7 / 52391
{
	return Function_151(bParam0, 4, 1);
}

void Function_383(bool bParam0, int iParam1) //Position: 0xCCB4 / 52404
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_SET_BOOL(bParam0, "ForceAim", true);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_FORCE_PLAYER_AIM_MODE(0, 1);
		iParam1->f_28 = GET_PLAYER_CONTROL_CONFIG(0);
		SET_PLAYER_CONTROL_CONFIG(0, 4);
		SET_PLAYER_CONTROL(0, 1, 1, 1);
	}
	UI_SUPPRESS("Reticle");
	UI_ENTER("MpWeaponSuppressor");
	return;
}

void Function_384(int iParam0) //Position: 0xCD19 / 52505
{
	if (!Function_67(iParam0, 16))
	{
		HUD_FADE_IN(1.5f, 1065353216);
		SET_HUD_MAP_DRAW_ENABLED(0);
		UI_SUPPRESS("Reticle");
		UI_SUPPRESS("WeaponAmmo");
		UI_EXCLUDE("WeaponAmmo");
		NET_GAMER_ICONS_SHOW_LOCAL(1);
		if (Function_67(iParam0, 8))
		{
			if (Function_67(iParam0, 64))
			{
				Function_330("common_null");
				UI_EXIT("HudMPNoFun");
			}
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MP_SHOWDOWN2", iParam0 + 76);
			if (IS_STRING_VALID(&Global_83591 + 28[09]))
			{
				Function_347(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
			}
		}
		else if (Function_67(iParam0, 64))
		{
			Function_330("standoff_title");
			UI_EXIT("HudMPNoFun");
		}
		Function_298(iParam0, 16);
	}
	return;
}

bool Function_385(int iParam0) //Position: 0xCE26 / 52774
{
	if (!Function_309())
	{
		return 0;
	}
	return Function_49(Global_78578.f_88, iParam0);
}

int Function_386(int iParam0) //Position: 0xCE40 / 52800
{
	iParam0 = iParam0;
	UI_ENTER("MpWeaponSuppressor");
	return 1;
}

void Function_387() //Position: 0xCE63 / 52835
{
	Function_59(1024, 1, 0);
	Function_59(1, 0, 0);
	return;
}

void Function_388(int iParam0) //Position: 0xCE77 / 52855
{
	Function_94(4, iParam0);
	return;
}

bool Function_389(int iParam0) //Position: 0xCE83 / 52867
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_394();
	iVar1 = 0;
	if (!Function_57(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_393(iParam0[iVar03], 8);
		}
		else if (Function_392())
		{
			iVar1 = 1;
			Function_393(iParam0[iVar03], 8);
		}
		Function_393(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_57(iParam0[iVar03], 4))
		{
			if (!Function_57(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_57(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_57(iParam0[03], 8) || iVar1));
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
				Function_393(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_57(iParam0[iVar03], 4))
		{
			if (!Function_57(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_393(iParam0[iVar03], 2);
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
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_393(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_393(iParam0[iVar03], 2);
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
	Function_390();
	return 1;
}

void Function_390() //Position: 0xD1FE / 53758
{
	if (!Function_391(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_391(int iParam0) //Position: 0xD23E / 53822
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_392() //Position: 0xD25A / 53850
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

void Function_393(var uParam0, int iParam1) //Position: 0xD285 / 53893
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_394() //Position: 0xD296 / 53910
{
	if (!Function_391(128))
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

bool Function_395(int iParam0) //Position: 0xD2D8 / 53976
{
	if (iParam0->f_16 != Function_385(1))
	{
	}
	return iParam0->f_16;
}

void Function_396(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD2ED / 53997
{
	if (bParam1)
	{
		Function_148(7, 1);
		Function_148(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_155())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_159(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_397())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_159(37) > 3)
					{
						AWARD_ACHIEVEMENT(44);
					}
				}
			}
		}
		Function_42(iParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_158(37, 0);
		Function_39(iParam0 + 44, 4);
	}
	else
	{
		Function_148(6, 1);
		Function_158(37, 0);
		Function_39(iParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_42(iParam0 + 44, 256);
	}
	else
	{
		Function_39(iParam0 + 44, 256);
	}
}

bool Function_397() //Position: 0xD39B / 54171
{
	return Function_156(16);
}

int Function_398() //Position: 0xD3A6 / 54182
{
	if (!Function_309())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_399() //Position: 0xD3BB / 54203
{
	return Local_254.f_740 != 0;
}

void Function_400(bool bParam0) //Position: 0xD3C8 / 54216
{
	if (!Function_413(bParam0))
	{
	}
	if (!Function_96(2048))
	{
		Function_274(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

void Function_401() //Position: 0xD3FB / 54267
{
	if (!Local_443.f_432)
	{
		Local_443.f_432 = 1;
		AUDIO_MUSIC_SET_MOOD("OVERTIME", 0, 4294967295, 4294967295);
		if (Function_399())
		{
			Function_268("CTF_mul_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_322("GENMESS_OTENGAGED", 0);
		}
		else if (Function_83())
		{
			Function_268("CTF_sym_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_291(&Local_443, 1);
			Function_322("GENMESS_SDENGAGED", 0);
		}
		else if (Function_402())
		{
			Function_268("CTF_one_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_291(&Local_443, 1);
			Function_322("GENMESS_SDENGAGED", 0);
		}
	}
	return;
}

bool Function_402() //Position: 0xD500 / 54528
{
	return Local_254.f_740 != 1;
}

bool Function_403() //Position: 0xD50D / 54541
{
	return Function_398() != 4294967290;
}

void Function_404(bool bParam0) //Position: 0xD51A / 54554
{
	bool bVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		Function_411(bParam0);
		Function_409();
		Function_408(bParam0);
		if (bParam0 > 0)
		{
			if (Function_399())
			{
				NET_LOG(1, "CTF Host", "CTF has determined a winner: #%s, %s with score %s", I2STR(bParam0), UI_GET_STRING(Function_349(bParam0)), I2STR(Function_406(bParam0)), false);
			}
			else
			{
				NET_LOG(1, "CTF Host", "CTF has determined a winning team: #%s with score %s", I2STR(bParam0), I2STR(Function_405(bParam0)), false, false);
			}
		}
		else
		{
			NET_LOG(1, "CTF Host", "CTF is moving to overtime", false, false, false, false);
		}
	}
	else
	{
		bVar0 = bParam0;
		NET_SCRIPTMSG_SEND(3, 5, &bVar0, 1, 1);
	}
	return;
}

bool Function_405(int iParam0) //Position: 0xD634 / 54836
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

int Function_406(bool bParam0) //Position: 0xD650 / 54864
{
	return Function_407(0, bParam0);
}

int Function_407(int iParam0, bool bParam1) //Position: 0xD65C / 54876
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_266(iParam0);
	}
	if (!Function_154(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_408(int iParam0) //Position: 0xD6C3 / 54979
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_409() //Position: 0xD6D7 / 54999
{
	if (Function_204(32))
	{
		if (Function_410() > 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(62))
			{
				AWARD_ACHIEVEMENT(62);
			}
		}
	}
	return;
}

int Function_410() //Position: 0xD6FB / 55035
{
	return Local_254.f_748;
}

void Function_411(int iParam0) //Position: 0xD706 / 55046
{
	if (iParam0 != Function_149() && Function_412())
	{
		if (Function_204(32))
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(59))
			{
				AWARD_ACHIEVEMENT(59);
			}
		}
	}
	return;
}

bool Function_412() //Position: 0xD730 / 55088
{
	return Local_254.f_744;
}

bool Function_413(bool bParam0) //Position: 0xD73B / 55099
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_414() //Position: 0xD74F / 55119
{
	Function_415(&Global_78578 + 96, &Local_254 + 628, &Local_443 + 440, Global_83591.f_16, 0, 0);
	return;
}

void Function_415(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5) //Position: 0xD771 / 55153
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (Function_172())
	{
		if (Function_288(iParam0))
		{
			bVar0 = CEIL(Function_169(iParam0));
			bVar1 = CEIL((fParam3 * 0.5f));
			if (*uParam1 != bVar0)
			{
				*uParam1 = bVar0;
				if (bVar0 < 22)
				{
					if (*uParam2 != 6)
					{
						if (*uParam2 == 5)
						{
							AUDIO_MUSIC_PLAY_PREPARED();
							*uParam2 = 6;
						}
						else
						{
							fVar2 = ((((22.0f - Function_169(iParam0)) + 1.0f) * 1000.0f) / 178979.0f);
							if (bVar0 >= 1)
							{
								Function_310(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, fVar2, 1, 1);
								*uParam2 = 5;
							}
							else
							{
								AUDIO_MUSIC_ONE_SHOT(&Global_83591 + 28[29], "OVERTIME", 0.0f, fVar2, 0, 1);
								*uParam2 = 6;
							}
						}
					}
				}
				else if (bVar0 < 23)
				{
					if (*uParam2 != 5)
					{
						*uParam2 = 5;
						if (IS_STRING_VALID(&Global_83591 + 28[29]))
						{
							Function_310(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, 0.0f, 1, 1);
						}
					}
				}
				else if (bVar0 < 31)
				{
					if (*uParam2 != 4)
					{
						*uParam2 = 4;
						AUDIO_MUSIC_SUSPEND(8000);
					}
				}
				else if (bVar0 < 60)
				{
					if (*uParam2 != 3)
					{
						AUDIO_MUSIC_SET_MOOD("LOUD_TENSION", 0, 4294967295, 4294967295);
						if (!IS_STRING_VALID(bParam5))
						{
							bParam5 = "GENMESS_GCRUNNINGDOWN";
						}
						Function_322(bParam5, 0);
						*uParam2 = 3;
					}
				}
				else if (bVar0 < 66)
				{
					if (*uParam2 != 2)
					{
						AUDIO_MUSIC_SET_MOOD("QUIET_TENSION", 0, 4294967295, 4294967295);
						*uParam2 = 2;
					}
				}
				else if (bVar0 < bVar1)
				{
					if (*uParam2 != 1)
					{
						if (IS_STRING_VALID(&Global_83591 + 28[19]))
						{
							Function_347(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0, 4294967295, 4294967295, 3212836864, 0);
						}
						*uParam2 = 1;
					}
				}
				if ((bVar0 <= (bVar1 - 10) && bVar0 >= bVar1 + 10) || (bVar0 >= 15 && bVar0 <= 0))
				{
					Function_421();
					if (bVar0 >= 5 && (Global_76905.f_128 % 2) != 1)
					{
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
					if (bVar0 == bVar1)
					{
						Function_420("mp_match_half_over");
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
				}
				else if (!bParam4)
				{
					Function_419();
				}
			}
			if (!Function_403())
			{
				Function_417("mp_time_remaining_header");
				Function_416(Function_23(0, bVar0), bVar0 >= 5);
			}
			else
			{
				Function_417("mp_time_overtime_header");
				Function_416(ABS(bVar0), bVar0 < 4294967291);
			}
		}
	}
}

void Function_416(bool bParam0, bool bParam1) //Position: 0xDA4D / 55885
{
	if (Global_76905.f_128 != bParam0)
	{
		Function_59(0x20000000, 1, 1);
	}
	Global_76905.f_128 = bParam0;
	Function_59(65536, bParam1, 1);
	return;
}

void Function_417(char* cParam0) //Position: 0xDA7A / 55930
{
	if (Function_418(cParam0, &Global_76905))
	{
		Function_59(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_418(bool bParam0, bool bParam1) //Position: 0xDA9E / 55966
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_419() //Position: 0xDAD2 / 56018
{
	if (Function_100(1048576))
	{
		Function_59(0x10000000, 1, 1);
	}
	Function_59(1048576, 0, 1);
	return;
}

void Function_420(bool bParam0) //Position: 0xDAF5 / 56053
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

void Function_421() //Position: 0xDB09 / 56073
{
	if (!Function_100(1048576))
	{
		Function_59(0x10000000, 1, 1);
	}
	Function_59(1048576, 1, 1);
	return;
}

void Function_422() //Position: 0xDB2D / 56109
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
			{
				if (StackVal < 0.0f)
				{
					if (StackVal + 10.0f) < NET_GET_NET_TIME()
					{
						if (!Function_423(bVar0))
						{
							SET_ACTOR_IS_THE_BEASTMASTER(GET_SLOT_ACTOR(bVar0), 1);
							DECOR_SET_BOOL(GET_SLOT_ACTOR(bVar0), "beastmaster", true);
						}
					}
					else if (Function_423(bVar0))
					{
						SET_ACTOR_IS_THE_BEASTMASTER(GET_SLOT_ACTOR(bVar0), 0);
						DECOR_SET_BOOL(GET_SLOT_ACTOR(bVar0), "beastmaster", false);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

bool Function_423(bool bParam0) //Position: 0xDBD1 / 56273
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(bParam0)))
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(GET_SLOT_ACTOR(bParam0), "beastmaster"))
	{
		return 0;
	}
	return DECOR_GET_BOOL(GET_SLOT_ACTOR(bParam0), "beastmaster");
}

int Function_424() //Position: 0xDC22 / 56354
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_399())
	{
		if (Function_428() && !Function_614())
		{
			NET_LOG(1, "Local State", "CTF_CLASSIC has determined that there's only one team remaining, we're quitting.", false, false, false, false);
			Function_404(4294967294);
		}
	}
	if (Function_324(&Global_78578 + 96))
	{
		if (!Function_614())
		{
			bVar0 = Function_426(Function_399(), 1, 1);
			if (bVar0 != 4294967291)
			{
				Function_404(bVar0);
			}
			else if (!Function_403())
			{
				Function_404(4294967290);
			}
			else if (!Function_399())
			{
				bVar0 = Function_425();
				if (bVar0 != 4294967295)
				{
					Function_404(bVar0);
				}
				else if (Function_170(&Global_78578 + 96) <= 180.0f)
				{
					Function_404(4294967291);
				}
			}
		}
	}
	else if (!Function_614())
	{
		bVar1 = Function_426(Function_399(), 0, 1);
		if (bVar1 != 4294967295)
		{
			Function_404(bVar1);
		}
	}
	return 0;
}

bool Function_425() //Position: 0xDD38 / 56632
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	bVar2 = false;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		switch (Function_150(bVar0, 1, 0))
		{
			case 0x00000000:
				if (!Function_151(bVar0, 16386, 0))
				{
					bVar1 = true;
				}
				break;
			
			case 0x00000001:
				if (!Function_151(bVar0, 16386, 0))
				{
					bVar2 = true;
				}
				break;
			
			default:
				break;
		}
		bVar0++;
	}
	if (bVar1 && !bVar2)
	{
		return 0;
	}
	if (!bVar1 && bVar2)
	{
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		return 4294967291;
	}
	return 4294967295;
}

int Function_426(bool bParam0, bool bParam1, int iParam2) //Position: 0xDDC3 / 56771
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar1 = 4294967295;
	if (bParam1)
	{
		iVar2 = 4294967295;
	}
	else
	{
		iVar2 = Global_83591;
	}
	if (bParam0)
	{
		iVar3 = 0;
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_313(bVar0))
			{
				iVar4 = Function_406(bVar0);
				if (iVar4 >= iVar2)
				{
					iVar2 = iVar4;
					bVar1 = bVar0;
					iVar3 = 0;
				}
				else if (iVar4 == iVar2)
				{
					if (bVar1 == 4294967295)
					{
						iVar3 = 0;
						bVar1 = bVar0;
						iVar2 = iVar4;
					}
					else
					{
						iVar3 = 1;
					}
				}
			}
			bVar0++;
		}
		if (iVar3 && iParam2)
		{
			return 4294967291;
		}
	}
	bVar1 = Function_427(iVar2);
	return bVar1;
}

bool Function_427(int iParam0) //Position: 0xDE52 / 56914
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_405(0);
	iVar1 = Function_405(1);
	if (iVar0 <= iParam0 || iVar1 <= iParam0)
	{
		if (iVar0 == iVar1)
		{
			return 4294967291;
		}
		if (iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	return 4294967295;
}

int Function_428() //Position: 0xDE8F / 56975
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 4294967295;
	bVar2 = false;
	while (bVar2 <= 16)
	{
		iVar1 = Function_150(bVar2, 1, 0);
		if (iVar1 >= 4294967295)
		{
			if (iVar0 == 4294967295)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 != iVar1)
			{
				return 0;
			}
		}
		bVar2++;
	}
	return 1;
}

void Function_429() //Position: 0xDED1 / 57041
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	float fVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	var uVar24;
	vector3 vVar27;
	vector3 vVar30;
	bool bVar33;
	bool bVar34;
	int iVar35;
	bool bVar36;
	var uVar37;
	var uVar38;
	var uVar41;
	var uVar44;
	struct<5> Var47;
	
	Function_498(Local_254.f_512);
	bVar0 = Function_13();
	if (Function_399())
	{
		if (Function_259(&Local_254 + 624, &Local_118 + 436))
		{
			Function_496();
		}
	}
	else if (Function_402())
	{
		if (Function_259(&Local_254 + 624, &Local_118 + 436))
		{
			Function_492();
			Function_39(&Local_254 + 724, 4);
		}
	}
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	Local_254.f_632 = 0;
	bVar4 = Function_211(bVar0, 95);
	if (bVar4)
	{
		iVar6 = Function_491(bVar0);
	}
	if (bVar4)
	{
		if (FIRE_IS_ACTOR_ON_FIRE(bVar0))
		{
			if (IS_ACTOR_PLAYING_NODE_IN_TREE(bVar0, "default_character_Main\\ReactionProcessing\\ReactionProcessing_Player\\Fire"))
			{
				bVar4 = false;
			}
		}
	}
	if (bVar4 && iVar6)
	{
		bVar5 = (Function_490(bVar0) || Function_489(bVar0));
		if (!bVar5 && Local_254.f_496 > 2)
		{
			Local_254.f_632 = Function_488(bVar0);
		}
	}
	if (Local_254.f_632)
	{
		Function_487(Local_254.f_496);
		vVar11 = { StackVal, StackVal, Function_487(Local_254.f_496) };
		if (!GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vVar11, &vVar1))
		{
			GET_POSITION(bVar0, &vVar1);
		}
		if (GET_ACTOR_VELOCITY(bVar0, &vVar14))
		{
			Function_486();
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(Function_486(), vVar14, vVar1), StackVal, StackVal) };
		}
	}
	bVar17 = Function_485();
	if (Local_254.f_504 != 4294967295)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			GET_OBJECT_POSITION(StackVal, &vVar7);
		}
	}
	fVar18 = GET_CURRENT_GAME_TIME();
	if (Local_254.f_504 < 4294967295 && Local_254.f_632)
	{
		if (!Function_484(Local_254.f_504))
		{
			Function_483();
		}
		else if (!Function_482(Local_254.f_504))
		{
			Function_483();
		}
		else
		{
			Function_479(Local_254.f_504, &vVar1);
		}
	}
	if (Local_254.f_496 >= 0)
	{
		if (!bVar4)
		{
			if (!IS_ACTOR_IN_WATER(bVar0))
			{
				if (Local_254.f_496 == 2)
				{
					Function_478((*&Local_254 + 484)[0], 0, (*&Local_254 + 484)[1]);
					Function_474((*&Local_254 + 484)[1], 0);
				}
				else
				{
					Function_478((*&Local_254 + 484)[0], 0, 4294967295);
				}
				Function_474((*&Local_254 + 484)[0], 0);
			}
			else
			{
				if (Local_254.f_496 == 2)
				{
					Function_472((*&Local_254 + 484)[1], 0, GET_LOCAL_SLOT());
					Function_474((*&Local_254 + 484)[1], 0);
				}
				Function_472((*&Local_254 + 484)[0], 0, GET_LOCAL_SLOT());
				Function_474((*&Local_254 + 484)[0], 0);
			}
		}
		else if (!IS_ACTOR_IN_VOLUME(bVar0, Local_254.f_516))
		{
			Function_268("CTF_ran_too_far_help", 0x41200000, 1, 0, 2, 1, 0);
			if (Local_254.f_496 == 2)
			{
				Function_472((*&Local_254 + 484)[1], 1, GET_LOCAL_SLOT());
				Function_474((*&Local_254 + 484)[1], 0);
			}
			Function_472((*&Local_254 + 484)[0], 1, GET_LOCAL_SLOT());
			Function_474((*&Local_254 + 484)[0], 0);
		}
	}
	bVar20 = NET_IS_SESSION_HOST();
	iVar19 = 0;
	while (iVar19 <= Function_24(3, bVar17))
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			if (NET_IS_OBJECT_LOCAL(StackVal))
			{
				Function_232(StackVal);
				vVar27 = { StackVal, StackVal, Function_232(StackVal) };
				vVar30 = { StackVal, StackVal, vVar27 };
				vVar30.f_4 = (vVar30.y + 8.0f);
				if (!IS_OBJECT_IN_VOLUME(StackVal, Local_254.f_516) || FIND_WATER_INTERSECTION(vVar30, vVar27, &uVar21, &uVar24))
				{
					NET_LOG(1, "CTF", "Bag #%s, locally owned and carried by %s, went out of bounds or Underwater. Returning", I2STR(Local_254.f_500), I2STR(Function_471(Local_254.f_500)), false, false);
					Function_472(Local_254.f_500, 1, 4294967293);
				}
			}
		}
		if (Local_254.f_500 == 0)
		{
			if (Local_254.f_504 == 4294967295)
			{
				Function_483();
			}
			else if (!Function_484(Local_254.f_504) || Function_470(Local_254.f_504, 4294967291))
			{
				Function_483();
			}
		}
		if (bVar20)
		{
			bVar33 = Function_471(Local_254.f_500);
			if (bVar33 != 4294967294)
			{
				if (!IS_SLOT_VALID(bVar33))
				{
					Function_478(Local_254.f_500, 1, 4294967295);
				}
			}
		}
		if (Function_484(Local_254.f_500))
		{
			switch (StackVal)
			{
				case 0x00000000:
					Function_469(Local_254.f_500);
					if (bVar20 && !Function_614())
					{
						if (Function_81())
						{
							if (Function_468(&Local_118[Local_254.f_5007] + 12, 5.0f))
							{
								Function_467(Local_254.f_500);
							}
						}
						else if (Function_468(&Local_118[Local_254.f_5007] + 12, 2.0f))
						{
							Function_467(Local_254.f_500);
						}
					}
					break;
				
				case 0x00000005:
					if (GATEWAY_UPDATE((&Local_254 + 520[25])->f_12))
					{
						if (Function_49(Local_254.f_724, 4))
						{
							Function_39(&Local_254 + 724, 4);
							if (!Function_385(1))
							{
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_466("CTF_one_obj_stayonpoint", 0x40f00000, 1, 2, 0, 0, 0, 0);
							}
						}
					}
					else if (!Function_49(Local_254.f_724, 4))
					{
						Function_42(&Local_254 + 724, 4);
						if (!Function_385(1))
						{
							HUD_CLEAR_OBJECTIVE_QUEUE();
							Function_466("CTF_one_obj_get2point", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
					}
				
				case 0x00000004:
					Function_469(Local_254.f_500);
					if (bVar20)
					{
						if (Function_399())
						{
							if (Local_118.f_424 >= 4294967295)
							{
								if (Local_254.f_500 != Local_118.f_424 && !Function_614())
								{
									if (Function_468(&Local_118[Local_254.f_5007] + 12, 10.0f))
									{
										Local_118.f_424 = 4294967294;
										Local_118.f_428 = Function_465();
										Local_118.f_432 = Function_463();
										Function_316(&Local_118 + 436);
										Function_462(Local_118.f_428, Local_118.f_432);
									}
								}
							}
							else if (Local_118.f_424 == 4294967294)
							{
								if (Local_254.f_500 <= Local_118.f_428)
								{
									if (Function_468(&Local_118[Local_254.f_5007] + 12, (0.2f * IntToFloat(Local_254.f_500))))
									{
										Function_461(Local_254.f_500);
										Function_467(Local_254.f_500);
									}
								}
							}
						}
						else if (Function_402())
						{
							if (Local_118.f_424 >= 4294967295)
							{
								if (Local_254.f_500 != Local_118.f_424 && !Function_614())
								{
									if (Function_468(&Local_118[Local_254.f_5007] + 12, 15.0f))
									{
										Local_118.f_424 = 4294967294;
										Function_461(Local_254.f_500);
										Function_459(Local_254.f_500);
										Function_316(&Local_118 + 436);
									}
								}
							}
							else if (Local_118.f_424 == 4294967294)
							{
								if (Function_468(&Local_118[Local_254.f_5007] + 12, 15.0f))
								{
									Function_462(Local_118.f_428, 0);
									Function_467(Local_254.f_500);
								}
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_451(Local_254.f_500);
					if (bVar20)
					{
						if (Function_449(&Local_118[Local_254.f_5007] + 12, 60.0f))
						{
							NET_LOG(1, "CTF", "Bag %s deemed on ground too long, returning", I2STR(Local_254.f_500), false, false, false);
							Function_472(Local_254.f_500, 1, 4294967293);
						}
					}
					if (Local_254.f_632)
					{
						if (Function_448(Local_254.f_500))
						{
							Function_479(Local_254.f_500, &vVar1);
						}
					}
					break;
				
				case 0x00000001:
					Function_451(Local_254.f_500);
					if (Local_254.f_632 && Function_448(Local_254.f_500))
					{
						Function_479(Local_254.f_500, &vVar1);
					}
					break;
				
				case 0x00000003:
					Function_451(Local_254.f_500);
					break;
				
				default:
					break;
			}
		}
		else
		{
			if (bVar20)
			{
				if (Local_118.f_424 == 4294967294)
				{
					if (Local_254.f_500 <= Local_118.f_428)
					{
						Function_461(Local_254.f_500);
						Function_467(Local_254.f_500);
					}
				}
			}
			Function_469(Local_254.f_500);
		}
		Local_254.f_500 = (Local_254.f_500 + 1 % bVar17);
		iVar19++;
	}
	if (Function_399())
	{
		Function_446();
	}
	if (!Function_614())
	{
		bVar34 = false;
		iVar35 = 0;
		bVar36 = false;
		if (Local_254.f_632)
		{
			if (Local_254.f_504 < 4294967295 && Local_254.f_508 >= 2.5f)
			{
				if (GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vLocal_112, &uVar38))
				{
					Var47 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_109, vVar7, StackVal) };
					if (Function_445(Local_254.f_504))
					{
						Var47.f_4 = (StackVal + 0.1f);
					}
					if (!FIND_INTERSECTION(&uVar38, &Var47, &uVar44, &uVar41, iLocal_117, iLocal_115, iLocal_116))
					{
						if ((fVar18 - Local_254.f_640) >= 1.5f)
						{
							Function_72(&Local_254 + 716);
						}
						else if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_254.f_716))
						{
							bVar34 = true;
						}
						else if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_254.f_716))
						{
							Function_444(Local_254.f_504, Local_254.f_496 < 0);
							Local_254.f_640 = fVar18;
							Function_72(&Local_254 + 716);
						}
					}
					else
					{
						Function_72(&Local_254 + 716);
					}
				}
				else
				{
					Function_72(&Local_254 + 716);
				}
			}
			else
			{
				Function_72(&Local_254 + 716);
			}
		}
		else
		{
			Function_72(&Local_254 + 716);
		}
		if (Local_254.f_496 >= 0)
		{
			Function_443(1, 1);
			Function_442(1, bVar0);
			if (Local_254.f_496 == 2)
			{
				SET_CUSTOM_ANIM_SPEED(bVar0, 0.8f);
			}
			else
			{
				SET_CUSTOM_ANIM_SPEED(bVar0, 0.9f);
			}
			if (Function_49(Local_254.f_724, 2))
			{
				if (!IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, false))
				{
					Function_39(&Local_254 + 724, 2);
				}
			}
			if (Function_440() && iVar6)
			{
				if ((fVar18 - Local_254.f_644) >= 1.5f)
				{
				}
				else if (!Function_489(bVar0))
				{
					Function_438((*&Local_254 + 484)[0], (*&Local_254 + 484)[1]);
					iVar50 = (*&Local_254 + 484)[0];
					Function_436(iVar50);
					Function_76(StackVal);
					Function_232(StackVal);
					SET_OBJECT_POSITION(StackVal, Vector(Function_232(StackVal), StackVal, StackVal) + Vector(0.0f, -1000.0f, 0.0f));
					DESTROY_OBJECT(StackVal);
					if (Local_254.f_496 == 1)
					{
						iVar50 = (*&Local_254 + 484)[1];
						Function_436(iVar50);
						Function_76(StackVal);
						Function_232(StackVal);
						SET_OBJECT_POSITION(StackVal, Vector(Function_232(StackVal), StackVal, StackVal) + Vector(0.0f, -1000.0f, 0.0f));
						DESTROY_OBJECT(StackVal);
					}
					Function_72(&Local_254 + 720);
				}
			}
			if (Local_254.f_496 >= 0)
			{
				if (Local_254.f_732)
				{
					if ((IS_ATTACHMENT_VALID(Local_254.f_728) || DECOR_CHECK_EXIST(bVar0, "CTF_FastAttach")) || (fVar18 - Local_254.f_736) <= 3.0f)
					{
						if (DECOR_CHECK_EXIST(bVar0, "CTF_AttachNow") || (fVar18 - Local_254.f_736) <= 3.0f)
						{
							Local_254.f_732 = 0;
							REMOVE_OBJECT_ATTACHMENT(Local_254.f_728);
							Local_254.f_728 = "";
							uVar37 = Function_435(bVar0);
							Function_433((Local_254.f_496 - 1), uVar37);
							Function_432((Local_254.f_496 - 1), uVar37);
							ATTACH_OBJECTS(StackVal, bVar0, Function_434((Local_254.f_496 - 1)), Function_433((Local_254.f_496 - 1), uVar37), Function_432((Local_254.f_496 - 1), uVar37), 4294967295);
							SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
							DECOR_REMOVE(bVar0, "CTF_AttachNow");
							DECOR_REMOVE(bVar0, "CTF_FastAttach");
						}
					}
					else if (DECOR_CHECK_EXIST(bVar0, "CTF_Attach1st"))
					{
						Local_254.f_728 = ATTACH_OBJECTS_USING_LOCATOR(StackVal, bVar0, Function_431((Local_254.f_496 - 1)), "grab", Local_254.f_496 + 1);
						SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
						SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, 0);
						DECOR_REMOVE(bVar0, "CTF_Attach1st");
						Local_254.f_736 = fVar18;
					}
				}
			}
		}
		else
		{
			Function_430();
			Local_254.f_732 = 0;
		}
		if (bVar5)
		{
			Function_72(&Local_254 + 720);
			Function_72(&Local_254 + 716);
		}
		else if (bVar34)
		{
			if (bVar36)
			{
				Local_254.f_716 = ADD_SCRIPT_USE_CONTEXT("CTF_action_return", iLocal_107, 4, 0, 0, 0, 0, 4294967295, 0);
			}
			else if (Local_254.f_496 <= 2)
			{
				if (Local_254.f_496 == 0)
				{
					Local_254.f_716 = ADD_SCRIPT_USE_CONTEXT("CTF_action_grab", iLocal_107, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else
				{
					Local_254.f_716 = ADD_SCRIPT_USE_CONTEXT("CTF_action_dblgrab", iLocal_107, 4, 0, 0, 0, 0, 4294967295, 0);
				}
			}
		}
	}
	else
	{
		Function_72(&Local_254 + 720);
		Function_72(&Local_254 + 716);
	}
	return;
}

void Function_430() //Position: 0xEB50 / 60240
{
	Function_443(1, 0);
	Function_442(0, 0);
	return;
}

var Function_431(int iParam0) //Position: 0xEB60 / 60256
{
	if (iParam0 == 0)
	{
		return "clavicle_l_attachment";
	}
	if (iParam0 == 1)
	{
		return "clavicle_r_attachment";
	}
	return "";
}

vector3 Function_432(int iParam0, bool bParam1) //Position: 0xEBAA / 60330
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return -17.8245f, 182.8487f, 9.7832f;
		}
		if (iParam0 == 1)
		{
			return 172.679f, 8.9688f, -196.476f;
		}
	}
	if (iParam0 == 0)
	{
		return -6.8245f, 182.8487f, 18.7832f;
	}
	if (iParam0 == 1)
	{
		return 172.679f, 8.9688f, -196.476f;
	}
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_433(int iParam0, bool bParam1) //Position: 0xEC19 / 60441
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return -0.0936f, -0.0867f, -0.0455f;
		}
		if (iParam0 == 1)
		{
			return 0.0422f, -0.0717f, -0.0232f;
		}
	}
	if (iParam0 == 0)
	{
		return -0.0362f, -0.137f, -0.0356f;
	}
	if (iParam0 == 1)
	{
		return 0.0398f, -0.133f, -0.0272f;
	}
	return 0.0f, 0.0f, 0.0f;
}

var Function_434(int iParam0) //Position: 0xEC88 / 60552
{
	if (iParam0 == 0)
	{
		return "clavicle_l";
	}
	if (iParam0 == 1)
	{
		return "clavicle_r";
	}
	return "";
}

bool Function_435(bool bParam0) //Position: 0xECBC / 60604
{
	bool bVar0;
	
	bVar0 = GET_ACTORENUM_MP_ANIM_SET_NAME(GET_ACTOR_ENUM(bParam0));
	if (STRINGS_ARE_EQUAL(bVar0, "fat"))
	{
		return 1;
	}
	return 0;
}

void Function_436(int iParam0) //Position: 0xECDD / 60637
{
	int iVar0;
	
	Function_77("ENSURE_BAG_CARRYING_FIDELITY", iParam0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((*&Local_254 + 484)[iVar0] == iParam0)
		{
			(*&Local_254 + 484)[iVar0] = 4294967295;
			Function_437();
		}
		iVar0++;
	}
	return;
}

void Function_437() //Position: 0xED34 / 60724
{
	Local_254.f_496 = Function_23(0, (Local_254.f_496 - 1));
	return;
}

void Function_438(int iParam0, int iParam1) //Position: 0xED4A / 60746
{
	struct<13> Var0;
	
	if (!Function_439(iParam0, 74))
	{
		return;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_4 = iParam0;
	Var0.f_8 = iParam1;
	Var0.f_12 = NET_GET_NET_TIME();
	if (iParam1 == 4294967295)
	{
		Function_215(StackVal, StackVal, "CTF_Cap", Global_34574);
	}
	else
	{
		Function_215(StackVal, StackVal, "CTF_CapDbl", Global_34574);
	}
	NET_LOG(StackVal, 1, "CTF", "SENDing cap. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 74, &Var0, 4, 1);
	return;
}

bool Function_439(int iParam0, int iParam1) //Position: 0xEE04 / 60932
{
	float fVar0;
	
	fVar0 = NET_GET_NET_TIME();
	if (StackVal || (StackVal == iParam1 - fVar0) <= 1.0f)
	{
		Local_254[iParam08].f_8 = iParam1;
		(&Local_254[iParam08] + 8)->f_4 = fVar0;
		return 1;
	}
	return 0;
}

int Function_440() //Position: 0xEE46 / 60998
{
	bool bVar0;
	
	if (Function_399())
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= 5)
		{
			if (Function_441(Local_118.f_432, bVar0))
			{
				if (GATEWAY_UPDATE((&Local_254 + 520[bVar05])->f_12))
				{
					return 1;
				}
			}
			bVar0++;
		}
		return 0;
	}
	if (Function_82())
	{
		if (bLocal_108)
		{
			return 0;
		}
		return GATEWAY_UPDATE((&Local_254 + 520[05])->f_12);
	}
	return GATEWAY_UPDATE((&Local_254 + 520[Function_149()5])->f_12);
}

bool Function_441(var uParam0, bool bParam1) //Position: 0xEEB6 / 61110
{
	return Function_49(uParam0, Function_131(bParam1));
}

void Function_442(bool bParam0, bool bParam1) //Position: 0xEEC6 / 61126
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	var uVar11;
	
	iVar2 = 2;
	bVar3 = false;
	if (Function_82())
	{
		iVar2 = 1;
	}
	else if (Function_399())
	{
		iVar2 = 5;
		bVar3 = true;
	}
	bVar4 = 4294967295;
	if ((Function_399() && bParam0) && IS_ACTOR_VALID(bParam1))
	{
		fVar5 = 1E+08.0f;
		Function_191(bParam1);
		vVar6 = { StackVal, StackVal, Function_191(bParam1) };
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			if (Function_441(Local_118.f_432, bVar1))
			{
				Function_232((*&Local_254 + 520)[bVar15]);
				fVar9 = VDIST2(vVar6, Function_232((*&Local_254 + 520)[bVar15]));
				if (fVar9 > fVar5)
				{
					fVar5 = fVar9;
					bVar4 = bVar1;
				}
			}
			bVar1++;
		}
	}
	bVar1 = false;
	while (bVar1 <= iVar2)
	{
		if (Function_441(Local_118.f_432, bVar1) || !bVar3)
		{
			bVar10 = false;
			if (Function_82())
			{
				if (bParam0)
				{
					iVar0 = 330;
					bVar10 = true;
				}
				else
				{
					iVar0 = 330;
				}
			}
			else if (bVar3)
			{
				if (bParam0)
				{
					iVar0 = 330;
					bVar10 = true;
				}
				else
				{
					iVar0 = 485;
				}
			}
			else if (bVar1 == Function_149())
			{
				if (bParam0)
				{
					iVar0 = 330;
					bVar10 = true;
				}
				else
				{
					iVar0 = 494;
				}
			}
			else
			{
				iVar0 = 491;
			}
			if (IS_BLIP_VALID(StackVal))
			{
				if (GET_BLIP_ICON(StackVal) != iVar0)
				{
					CHANGE_BLIP_ICON(StackVal, iVar0);
				}
			}
			else
			{
				(&Local_254 + 520[bVar15])->f_4 = ADD_BLIP_FOR_OBJECT((*&Local_254 + 520)[bVar15], iVar0, 0f, 2, 0);
			}
			if (bVar10)
			{
				SET_BLIP_PRIORITY(StackVal, 4);
			}
			else
			{
				SET_BLIP_PRIORITY(StackVal, 2);
			}
			if (Function_399())
			{
				if (bParam0 && bVar1 == bVar4)
				{
					SET_BLIP_SCALE(StackVal, 0.75f);
				}
				else
				{
					SET_BLIP_SCALE(StackVal, 1.0f);
				}
			}
			if (bParam0 && ((bVar3 || Function_82()) || bVar1 != Function_149()))
			{
				if (!IS_OBJECT_VALID((&Local_254 + 520[bVar15])->f_12))
				{
					(&Local_254 + 520[bVar15])->f_12 = CREATE_GATEWAY_IN_LAYOUT(Local_254.f_656, "", (*&Local_254 + 520)[bVar15], Function_13(), 2, 4294967295, 0, 0, 1, 1);
					uVar11 = _GET_OBJECT_ATTACHMENT((*&Local_254 + 520)[bVar15]);
					if (IS_ATTACHMENT_VALID(uVar11))
					{
						ATTACH_OBJECTS((&Local_254 + 520[bVar15])->f_12, GET_OBJECT_ATTACHED_TO(uVar11), "", 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
			}
			else if (IS_OBJECT_VALID((&Local_254 + 520[bVar15])->f_12))
			{
				DESTROY_OBJECT((&Local_254 + 520[bVar15])->f_12);
			}
		}
		else
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			if (IS_OBJECT_VALID((&Local_254 + 520[bVar15])->f_12))
			{
				DESTROY_OBJECT((&Local_254 + 520[bVar15])->f_12);
			}
		}
		bVar1++;
	}
	return;
}

void Function_443(int iParam0, bool bParam1) //Position: 0xF16F / 61807
{
	if (bParam1)
	{
		Function_42(&Global_78480 + 128, iParam0);
	}
	else
	{
		Function_39(&Global_78480 + 128, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = Global_78480.f_128;
	}
	return;
}

void Function_444(int iParam0, bool bParam1) //Position: 0xF1AA / 61866
{
	struct<13> Var0;
	
	if (!Function_439(iParam0, 70))
	{
		return;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		Var0.f_8 = 2;
	}
	else
	{
		Var0.f_8 = 1;
	}
	NET_LOG(StackVal, 1, "CTF", "SENDing ask. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 70, &Var0, 4, 1);
	return;
}

bool Function_445(bool bParam0) //Position: 0xF240 / 62016
{
	Function_77("CTF_IS_BAG_AT_BASE", bParam0);
	return StackVal != 1;
}

void Function_446() //Position: 0xF26A / 62058
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = GET_CURRENT_GAME_TIME();
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Function_470(iVar0, 4294967291))
		{
			if (IS_BLIP_VALID(Local_254[iVar08]))
			{
				fVar2 = (((fVar1 - Local_254[iVar08].f_16) - 3.5f) - 0.5f);
				if (fVar2 < 0.0f)
				{
					fVar2 = (1.0f - (fVar2 / 0.75f));
					Function_447(StackVal);
					vVar3 = { StackVal, StackVal, Function_447(StackVal) };
					SET_BLIP_COLOR(Local_254[iVar08], vVar3.x, vVar3.y, vVar3.z, fVar2);
				}
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_447(int iParam0) //Position: 0xF2EF / 62191
{
	vector3 vVar0;
	
	if (!NET_GET_GAMER_RGB_COLOR(iParam0, &vVar0, &vVar0 + 4, &vVar0 + 8))
	{
		vVar0 = { (68.0f / 255.0f), (68.0f / 255.0f), (68.0f / 255.0f) };
	}
	return StackVal, StackVal, vVar0;
}

bool Function_448(int iParam0) //Position: 0xF331 / 62257
{
	Function_77("CTF_FLAG_IS_OUR_TEAMS", iParam0);
	return (!Function_83() || iParam0 == Function_149());
}

bool Function_449(int iParam0, float fParam1) //Position: 0xF35F / 62303
{
	if (Function_468(iParam0, fParam1))
	{
		Function_450(iParam0);
		return 1;
	}
	return 0;
}

void Function_450(int iParam0) //Position: 0xF377 / 62327
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_451(int iParam0) //Position: 0xF38B / 62347
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<9> Var5;
	
	Function_77("ENSURE_BAG_EXISTS", iParam0);
	if (!IS_OBJECT_VALID(StackVal))
	{
		if (!Function_81() || Function_458(iParam0))
		{
			if (Function_455(iParam0))
			{
				if (Function_402())
				{
					if (IS_OBJECT_VALID((&Local_254 + 520[25])->f_12))
					{
						DESTROY_OBJECT((&Local_254 + 520[25])->f_12);
					}
				}
				if (Function_81())
				{
					bVar0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "nLightning", "script_lightning_marker", 0.0f, 0.0f, 0.0f, 1, false);
					UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
				}
				Function_262(&Local_254[iParam08] + 28, &Local_118[iParam07] + 24);
			}
			else
			{
				return 0;
			}
		}
		return 0;
	}
	bVar1 = false;
	iVar2 = 4294967295;
	bVar3 = false;
	bVar4 = false;
	fVar8 = 1.0f;
	if (Function_470(iParam0, GET_LOCAL_SLOT()) || (Function_153(16384, 1) && Function_470(iParam0, Global_78617.f_48)))
	{
		bVar1 = true;
		Function_75(iParam0);
	}
	else
	{
		Function_453(iParam0, 1);
		if (Function_83())
		{
			if (Function_470(iParam0, 4294967291))
			{
				if (iParam0 == Function_149())
				{
					iVar2 = 480;
				}
				else
				{
					iVar2 = 473;
				}
				bVar1 = true;
			}
			else if (iParam0 == Function_149())
			{
				iVar2 = 478;
			}
			else
			{
				iVar2 = 471;
			}
		}
		else if (Function_399())
		{
			if (Function_470(iParam0, 4294967291))
			{
				iVar2 = 459;
				fVar9 = (GET_CURRENT_GAME_TIME() - Local_254[iParam08].f_16);
				if (StackVal || NET_IS_GAMER_RADAR_BLIP_VISIBLE(fVar9 > 3.5f))
				{
					bVar1 = true;
				}
				else
				{
					Function_447(StackVal);
					vVar5 = { StackVal, StackVal, Function_447(StackVal) };
					if (fVar9 <= 3.5f && fVar9 > ((3.5f + 0.75f) + 0.5f))
					{
						bVar4 = true;
						fVar8 = 0.8f;
					}
					else
					{
						Local_254[iParam08].f_16 = GET_CURRENT_GAME_TIME();
						bVar1 = true;
					}
					bVar3 = true;
				}
			}
			else if (Local_254.f_496 < 0)
			{
				iVar2 = 457;
				bVar3 = true;
				vVar5 = { (214.0f / 255.0f), (167.0f / 255.0f), (92.0f / 255.0f) };
			}
			else
			{
				iVar2 = 457;
			}
		}
		else if (Function_402())
		{
			if (Function_470(iParam0, 4294967291))
			{
				if (IS_BLIP_VALID(StackVal))
				{
					REMOVE_BLIP(StackVal);
				}
				if (Function_452(Function_471(iParam0)))
				{
					iVar2 = 480;
				}
				else
				{
					iVar2 = 473;
				}
				fVar10 = (GET_CURRENT_GAME_TIME() - Local_254[iParam08].f_16);
				if (StackVal || NET_IS_GAMER_RADAR_BLIP_VISIBLE(fVar10 > 3.5f))
				{
					bVar1 = true;
				}
				else if (fVar10 <= 3.5f && fVar10 > ((3.5f + 0.75f) + 0.5f))
				{
					bVar4 = true;
					fVar8 = 0.8f;
				}
				else
				{
					Local_254[iParam08].f_16 = GET_CURRENT_GAME_TIME();
					bVar1 = true;
				}
			}
			else
			{
				iVar2 = 464;
			}
		}
		else if (Function_82())
		{
			if (Function_470(iParam0, 4294967291))
			{
				iVar2 = 480;
			}
			else if (Local_254.f_496 < 0)
			{
				iVar2 = 457;
				bVar3 = true;
				vVar5 = { (105.0f / 255.0f), (145.0f / 255.0f), (59.0f / 255.0f) };
			}
			else
			{
				iVar2 = 457;
			}
		}
	}
	if (!Function_82())
	{
		iVar11 = Function_471(iParam0);
		if (Local_254[iParam08].f_20 != iVar11)
		{
			if (iVar11 == 4294967294)
			{
				NET_GAMER_SET_BLIP_OVERRIDE(Local_254[iParam08].f_20, 4294967295);
			}
			else
			{
				NET_GAMER_SET_BLIP_OVERRIDE(iVar11, iVar2);
			}
			Local_254[iParam08].f_20 = bVar11;
		}
	}
	iVar12 = 0;
	if (bVar1)
	{
		if (IS_BLIP_VALID(Local_254[iParam08]))
		{
			REMOVE_BLIP(Local_254[iParam08]);
		}
	}
	else if (!IS_BLIP_VALID(Local_254[iParam08]))
	{
		if (bVar4)
		{
			Function_232(StackVal);
			vVar13 = { StackVal, StackVal, Function_232(StackVal) };
			Local_254[iParam08] = ADD_BLIP_FOR_COORD(&vVar13, iVar2, 0.0f, 4, 0);
		}
		else
		{
			Local_254[iParam08] = ADD_BLIP_FOR_OBJECT(StackVal, iVar2, 0.0f, 3, 0);
		}
		iVar12 = 1;
	}
	else if (GET_BLIP_ICON(Local_254[iParam08]) != iVar2)
	{
		CHANGE_BLIP_ICON(Local_254[iParam08], iVar2);
		iVar12 = 1;
	}
	if (iVar12 || (Function_49(Local_254[iParam08].f_24, 2) == bVar3 && !bVar1))
	{
		if (bVar3)
		{
			SET_BLIP_COLOR(Local_254[iParam08], vVar5.x, vVar5.y, vVar5.z, 1.0f);
			Function_42(&Local_254[iParam08] + 24, 2);
		}
		else if (Function_49(Local_254[iParam08].f_24, 2))
		{
			SET_BLIP_COLOR(Local_254[iParam08], 1.0f, 1.0f, 1.0f, 1.0f);
			Function_39(&Local_254[iParam08] + 24, 2);
		}
		SET_BLIP_SCALE(Local_254[iParam08], fVar8);
	}
	return 1;
}

bool Function_452(bool bParam0) //Position: 0xF7FC / 63484
{
	if (Function_150(bParam0, 1, 0) != 4294967295 && Function_149() != 4294967295)
	{
		return 0;
	}
	return Function_150(bParam0, 1, 0) != Function_149();
}

void Function_453(int iParam0, bool bParam1) //Position: 0xF824 / 63524
{
	int iVar0;
	
	Function_77("ADD_GLOW_TO_BAG", iParam0);
	if (Function_49(Local_254[iParam08].f_24, 1))
	{
		return;
	}
	iVar0 = 4;
	if (Function_83())
	{
		if (iParam0 == Function_149())
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (Function_82())
	{
		iVar0 = 3;
	}
	if (bParam1)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			Function_454();
			CREATE_OBJECT_GLOW(StackVal, iVar0, Function_454(), 1);
			Function_42(&Local_254[iParam08] + 24, 1);
		}
	}
	else if (IS_OBJECT_VALID(StackVal))
	{
		Function_454();
		CREATE_OBJECT_GLOW(StackVal, iVar0, Function_454(), 1);
		Function_42(&Local_254[iParam08] + 24, 1);
	}
	return;
}

vector3 Function_454() //Position: 0xF8DB / 63707
{
	return 0.0f, 0.2f, 0.0f;
}

bool Function_455(bool bParam0) //Position: 0xF8E8 / 63720
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	
	Function_77("nSPAWN_BAG", bParam0);
	strcpy(&cVar0, "CTFBag_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	if (!Function_457(bParam0, &vVar16, &vVar19, 1))
	{
		strcpy(&cVar0, "Couldn't find base #", 64);
		stradd(&cVar0, I2STR(Local_118[bParam07]), 64);
		return 0;
	}
	bVar22 = "";
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 6);
		bVar22 = CREATE_PROP_IN_LAYOUT(Local_254.f_660, &cVar0, Function_456(), vVar16, vVar19, 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
		if (IS_OBJECT_VALID(bVar22))
		{
			NET_OBJECT_SET_SCRIPT_INT(bVar22, bParam0 + 100);
			UNK_0x1306549E(bVar22, Local_254.f_660);
			Local_254[bParam08].f_4 = bVar22;
		}
		else
		{
			return 0;
		}
	}
	bVar23 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_254.f_660, "nBagFinder"));
	if (!IS_ITERATOR_VALID(bVar23))
	{
		bVar23 = CREATE_NAMED_OBJECT_ITERATOR(Local_254.f_660, "nBagFinder");
		ITERATE_IN_LAYOUT(bVar23, Local_254.f_660);
		ITERATE_ON_OBJECT_TYPE(bVar23, 17);
	}
	bVar24 = START_OBJECT_ITERATOR(bVar23);
	bVar26 = false;
	while (IS_OBJECT_VALID(bVar24) && !bVar26)
	{
		iVar25 = NET_OBJECT_GET_SCRIPT_INT(bVar24);
		if (bParam0 == (iVar25 - 100))
		{
			bVar22 = bVar24;
			bVar26 = true;
		}
		bVar24 = OBJECT_ITERATOR_NEXT(bVar23);
	}
	if (IS_OBJECT_VALID(bVar22))
	{
	}
	else
	{
		return 0;
	}
	Local_254[bParam08].f_4 = bVar22;
	return 1;
}

var Function_456() //Position: 0xFA41 / 64065
{
	return "p_gen_moneybag03x";
}

bool Function_457(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xFA5B / 64091
{
	struct<5> Var0;
	vector3 vVar6;
	var uVar9;
	char* cVar12[64];
	bool bVar28;
	char* cVar29[64];
	
	if (Function_83())
	{
		if (IS_VOLUME_VALID((*&Local_254 + 520)[bParam05]))
		{
			GET_VOLUME_SCALE((*&Local_254 + 520)[bParam05], &Var0);
			GET_VOLUME_CENTER((*&Local_254 + 520)[bParam05], &vVar3);
			GET_OBJECT_ORIENTATION((*&Local_254 + 520)[bParam05], uParam2);
			if (FIND_GROUND_INTERSECTION(StackVal, (&vVar3 * 0.5f), &vVar6, &uVar9))
			{
				*uParam1 = { StackVal, StackVal, vVar6 };
			}
			else
			{
				*uParam1 = { StackVal, StackVal, vVar3 };
			}
			if (bParam3)
			{
				uParam2->f_4 = (StackVal + 90.0f);
				uParam1->f_4 = (StackVal + 0.15f);
			}
			return 1;
		}
		strcpy(&cVar12, "CTF: Invalid volume in GET_BASE for flag #", 64);
		stradd(&cVar12, I2STR(bParam0), 64);
	}
	else
	{
		bVar28 = Function_79(bParam0, 0);
		if (IS_OBJECT_VALID(bVar28))
		{
			GET_OBJECT_POSITION(bVar28, uParam1);
			GET_OBJECT_ORIENTATION(bVar28, uParam2);
			if (bParam3 && Function_402())
			{
				uParam2->f_4 = (StackVal + 90.0f);
				uParam1->f_4 = (StackVal + 0.15f);
			}
			return 1;
		}
		strcpy(&cVar29, "CTF: Unable to find Base #", 64);
		stradd(&cVar29, I2STR(Local_118[bParam07]), 64);
		stradd(&cVar29, " for bag #", 64);
		stradd(&cVar29, I2STR(bParam0), 64);
	}
	return 0;
}

int Function_458(int iParam0) //Position: 0xFBC6 / 64454
{
	Function_77("HAS_HOST_PICKED_NEW_BASE", iParam0);
	if (!UNK_0xA80C6DE6(&Local_118))
	{
		return 0;
	}
	return Function_263(&Local_254[iParam08] + 28, &Local_118[iParam07] + 24);
}

void Function_459(int iParam0) //Position: 0xFC0A / 64522
{
	Function_77("CTF_HOST_BAG_PRE_SPAWNING", iParam0);
	Local_118[iParam07].f_8 = 4294967294;
	Local_118[iParam07].f_4 = 5;
	Function_460(&Local_118[iParam07] + 12);
	Function_316(&Local_118[iParam07] + 24);
	return;
}

void Function_460(int iParam0) //Position: 0xFC5B / 64603
{
	Function_286(iParam0, 0.0f);
	return;
}

void Function_461(int iParam0) //Position: 0xFC67 / 64615
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!NET_IS_SESSION_HOST())
	{
		return;
	}
	Function_77("PICK_NEW_RANDOM_BASE", iParam0);
	iVar0 = (RAND_INT_RANGE(0, 5000) % Local_254.f_648);
	bVar1 = true;
	if (Function_399())
	{
		iVar2 = iVar0;
		bVar4 = true;
		while (bVar4)
		{
			bVar1 = true;
			bVar3 = false;
			while (bVar3 > 15 && bVar1)
			{
				if ((bVar3 == iParam0 && Local_118[bVar37] != iVar0) && Function_484(bVar3))
				{
					bVar1 = false;
				}
				bVar3++;
			}
			if (bVar1)
			{
				bVar4 = false;
			}
			else
			{
				iVar0 = (iVar0 + 1 % Local_254.f_648);
				if (iVar0 == iVar2)
				{
					bVar4 = false;
				}
			}
		}
	}
	if (bVar1)
	{
		Local_118[iParam07] = iVar0;
	}
	Function_316(&Local_118[iParam07] + 24);
	return;
}

void Function_462(int iParam0, int iParam1) //Position: 0xFD29 / 64809
{
	struct<13> Var0;
	
	Var0 = 4294967294;
	Var0.f_12 = iParam0;
	Var0.f_8 = iParam1;
	iVar4 = 0;
	while (iVar4 <= (iParam0 - 1))
	{
		Function_460(&Local_118[iVar47] + 12);
		iVar4++;
	}
	NET_LOG(1, "CTF", "SENDing bag replenish.", false, false, false, false);
	NET_SCRIPTMSG_SEND(3, 4, &Var0, 4, 1);
	return;
}

var Function_463() //Position: 0xFD91 / 64913
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	iVar0 = Function_24((Function_23(1, (NET_GET_SESSION_GAMER_COUNT() - 1)) / 4) + 2, Local_254.f_652);
	iVar1 = 0;
	bVar2 = true;
	if (iVar0 >= (Local_254.f_652 / 2))
	{
		iVar1 = (SHIFT_LEFT(true, Local_254.f_652) - 1);
		bVar2 = false;
	}
	iVar4 = iVar0;
	if (!bVar2)
	{
		iVar4 = (Local_254.f_652 - iVar0);
	}
	iVar3 = 0;
	while (iVar3 <= iVar4)
	{
		bVar5 = (RAND_INT_RANGE(0, 100000) % Local_254.f_652);
		iVar6 = Function_131(bVar5);
		while (bVar2 == Function_49(iVar1, iVar6))
		{
			bVar5 = (bVar5 + 1 % Local_254.f_652);
			iVar6 = Function_131(bVar5);
		}
		if (bVar2)
		{
			Function_42(&iVar1, iVar6);
		}
		else
		{
			Function_39(&iVar1, iVar6);
		}
		iVar3++;
	}
	Function_464(iVar1, Local_254.f_652);
	PRINTNL();
	return iVar1;
}

void Function_464(int iParam0, int iParam1) //Position: 0xFE58 / 65112
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_49(iParam0, Function_131(bVar0)))
		{
			PRINTINT(true);
		}
		else
		{
			PRINTINT(false);
		}
		if ((bVar0 % iParam1) != 0 && bVar0 < 0)
		{
			PRINTSTRING(" ");
		}
		bVar0 = (bVar0 + 4294967295);
	}
	return;
}

int Function_465() //Position: 0xFE9F / 65183
{
	if (Function_82())
	{
		return (3 * GET_NUM_PLAYERS());
	}
	return Function_24(Function_23(1, (NET_GET_SESSION_GAMER_COUNT() - 1)), Local_254.f_648);
}

void Function_466(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xFEC2 / 65218
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_269(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, iParam2, iVar4, iParam5, iParam6);
	}
}

void Function_467(int iParam0) //Position: 0xFF47 / 65351
{
	Function_77("CTF_HOST_BAG_AT_BASE", iParam0);
	Local_118[iParam07].f_8 = 4294967294;
	Local_118[iParam07].f_4 = 1;
	Function_460(&Local_118[iParam07] + 12);
	Function_316(&Local_118[iParam07] + 24);
	return;
}

bool Function_468(int iParam0, float fParam1) //Position: 0xFF93 / 65427
{
	if (Function_288(iParam0))
	{
		if (Function_170(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int Function_469(int iParam0) //Position: 0xFFAF / 65455
{
	Function_77("ENSURE_BAG_DOESNT_EXIST", iParam0);
	Function_436(iParam0);
	if (Local_254[iParam08].f_20 != 4294967294)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(Local_254[iParam08].f_20, 4294967295);
		Local_254[iParam08].f_20 = 4294967294;
	}
	return Function_74(iParam0, 0);
}

bool Function_470(int iParam0, bool bParam1) //Position: 0x10005 / 65541
{
	Function_77("CTF_IS_BAG_CARRIED", iParam0);
	if (bParam1 != 4294967291)
	{
		return Function_471(iParam0) != bParam1;
	}
	return Function_471(iParam0) == 4294967294;
}

int Function_471(int iParam0) //Position: 0x1003F / 65599
{
	Function_77("CTF_WHO_HAS_BAG", iParam0);
	return StackVal;
}

void Function_472(int iParam0, bool bParam1, bool bParam2) //Position: 0x10064 / 65636
{
	struct<13> Var0;
	
	if (!Function_439(iParam0, 75))
	{
		return;
	}
	if (bParam1)
	{
		Var0.f_8 = bParam2;
		Function_473(iParam0);
		Function_215(StackVal, StackVal, "CTF_Timeout", Function_473(iParam0));
	}
	else
	{
		Function_473(iParam0);
		Function_215(StackVal, StackVal, "CTF_Return", Function_473(iParam0));
		Var0.f_8 = 4294967295;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		if (bParam2 == 4294967293)
		{
			NET_LOG(StackVal, 1, "CTF", I2STR("SENDing timed out return for bag %s @ %s, Timed out"), F2STR(Var0.f_12, 5, 5), false, false);
		}
		else
		{
			NET_LOG(StackVal, 1, "CTF", I2STR("SENDing timed out return for bag %s @ %s, ringed out by me, slot #%s"), F2STR(Var0.f_12, 5, 5), I2STR(bParam2), false);
		}
	}
	else
	{
		NET_LOG(StackVal, 1, "CTF", "SENDing return. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	}
	NET_SCRIPTMSG_SEND(3, 75, &Var0, 4, 1);
	return;
}

vector3 Function_473(int iParam0) //Position: 0x101F5 / 66037
{
	vector3 vVar0;
	
	Function_77("GET_BAG_POS", iParam0);
	if (GET_OBJECT_POSITION(StackVal, &vVar0))
	{
		return StackVal, StackVal, vVar0;
	}
	return -1.0f, -1.0f, -1.0f;
}

void Function_474(int iParam0, int iParam1) //Position: 0x10226 / 66086
{
	Function_436(iParam0);
	Function_39(&Local_254[iParam08] + 24, 1);
	Function_475(StackVal, Function_13(), Local_254.f_496, iParam1);
	REMOVE_CAMERA_COLLISION_EXCLUSION(StackVal, GET_GAME_CAMERA());
	return;
}

void Function_475(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10260 / 66144
{
	bool bVar0;
	struct<5> Var1;
	
	Function_477(bParam1, bParam0);
	Function_476(bParam1);
	bVar0 = GET_PHYSINST_FROM_OBJECT(bParam1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		if (IS_PHYSINST_READY(bVar0))
		{
			SET_PROP_FIXED(bVar0, 0);
			Var1 = { 0.0f, 0.0f, 0.0f };
			if (bParam3)
			{
				vVar4 = { 0.0f, 0.0f, 0.0f };
				if (IS_ACTOR_VALID(bParam0))
				{
					GET_ACTOR_VELOCITY(bParam0, &Var1);
					GET_ACTOR_AXIS(bParam0, &vVar4, 0);
				}
				if (iParam2 == 0)
				{
					Var1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, Var1, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
				}
				else if (iParam2 == 1)
				{
					Var1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, Var1, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
				}
			}
			Var1.f_4 = (StackVal - 3.0f);
			if (SET_PROP_VELOCITY(bVar0, &Var1))
			{
			}
			ACTIVATE_PHYSINST(bVar0);
		}
	}
}

void Function_476(bool bParam0) //Position: 0x10316 / 66326
{
	char* cVar0;
	
	cVar0 = GET_OBJECT_ANIMATOR_ON_OBJECT(bParam0);
	if (IS_OBJECT_ANIMATOR_VALID(cVar0))
	{
		DESTROY_OBJECT_ANIMATOR(cVar0);
	}
	return;
}

void Function_477(bool bParam0, bool bParam1) //Position: 0x10330 / 66352
{
	if (IS_ACTOR_VALID(bParam1))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), 1);
	}
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 1);
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	return;
}

void Function_478(int iParam0, bool bParam1, int iParam2) //Position: 0x1035A / 66394
{
	struct<13> Var0;
	
	if (bParam1)
	{
		Var0 = 4294967293;
		Function_473(iParam0);
		Function_215(StackVal, StackVal, "CTF_TimeoutDrop", Function_473(iParam0));
	}
	else
	{
		if (!Function_439(iParam0, 73))
		{
			return;
		}
		Var0 = GET_LOCAL_SLOT();
		if (iParam2 == 4294967295)
		{
			Function_473(iParam0);
			Function_215(StackVal, StackVal, "CTF_Drop", Function_473(iParam0));
		}
		else
		{
			Function_473(iParam0);
			Function_215(StackVal, StackVal, "CTF_DropDbl", Function_473(iParam0));
		}
	}
	Var0.f_4 = iParam0;
	Var0.f_8 = iParam2;
	Var0.f_12 = NET_GET_NET_TIME();
	NET_SCRIPTMSG_SEND(3, 73, &Var0, 4, 1);
	NET_LOG(StackVal, 1, "CTF", "SENDing drop. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	return;
}

void Function_479(int iParam0, int iParam1) //Position: 0x1043E / 66622
{
	float fVar0;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		fVar0 = Function_480(StackVal, StackVal, StackVal, *iParam1);
		if (iParam0 == Local_254.f_504)
		{
			Local_254.f_508 = fVar0;
		}
		else if (fVar0 > Local_254.f_508)
		{
			Local_254.f_504 = iParam0;
			Local_254.f_508 = fVar0;
		}
	}
	return;
}

var Function_480(bool bParam0, vector3 vParam1) //Position: 0x10490 / 66704
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!Function_113(StackVal, StackVal, vParam1))
		{
			Function_481(bParam0);
			vVar0 = { StackVal, StackVal, Function_481(bParam0) };
			return VDIST(vVar0, vParam1);
		}
		LOG_ERROR("Attempting to get distance between an obj and some coords, but the coords are <<0,0,0>>. Returning 0.0!");
	}
	else
	{
		LOG_ERROR("Attempting to get distance between an obj and some coords, but the obj is invalid. Returning 0.0!");
	}
	return 0.0f;
}

vector3 Function_481(bool bParam0) //Position: 0x1059D / 66973
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_482(bool bParam0) //Position: 0x10609 / 67081
{
	Function_77("CTF_IS_BAG_IN_WORLD", bParam0);
	return StackVal == 0;
}

void Function_483() //Position: 0x10634 / 67124
{
	Local_254.f_504 = 4294967295;
	Local_254.f_508 = 1E+08.0f;
	return;
}

bool Function_484(bool bParam0) //Position: 0x1064A / 67146
{
	Function_77("CTF_IS_BAG_IN_PLAY", bParam0);
	return StackVal == 4294967295;
}

int Function_485() //Position: 0x10674 / 67188
{
	if (Function_399() || Function_82())
	{
		return 15;
	}
	if (Function_83())
	{
		return 2;
	}
	return 1;
}

vector3 Function_486() //Position: 0x10693 / 67219
{
	return 0.25f, 0.0f, 0.25f;
}

vector3 Function_487(int iParam0) //Position: 0x106A4 / 67236
{
	if (iParam0 == 0)
	{
		return -0.317f, 0.0f, -0.364f;
	}
	if (iParam0 == 1)
	{
		return 0.313f, 0.0f, -0.387f;
	}
	return 0.0f, 0.0f, 0.0f;
}

int Function_488(bool bParam0) //Position: 0x106D4 / 67284
{
	if (!IS_ACTOR_ON_FOOT(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_JUMPING(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_USING_COVER(bParam0))
	{
		return 0;
	}
	if (GET_PLAYER_ZOOM_STATE(0) != 0)
	{
		return 0;
	}
	if (!IS_ACTOR_READY_FOR_ACTION(bParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_489(bool bParam0) //Position: 0x1071B / 67355
{
	return DECOR_CHECK_EXIST(bParam0, "CTF_Lifting");
}

var Function_490(bool bParam0) //Position: 0x10734 / 67380
{
	return DECOR_CHECK_EXIST(bParam0, "CTF_Dropping");
}

int Function_491(bool bParam0) //Position: 0x1074E / 67406
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_ON_FOOT(bParam0))
	{
		return IS_ACTOR_ON_GROUND(bParam0);
	}
	bVar0 = GET_MOUNT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	bVar0 = GET_VEHICLE(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	return 0;
}

void Function_492() //Position: 0x1079E / 67486
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (Function_457(0, &vVar0, &vVar3, 0))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		(&Local_254 + 520[25])->f_8 = Function_494(StackVal, StackVal, StackVal, StackVal, Function_495(), "chest", vVar0, vVar3, 2.0f);
		NET_OBJECT_REPLICATION_MODE_END(17);
		Function_493();
		bVar6 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "nLightning", "script_lightning_marker", 0.0f, 0.0f, 0.0f, 1, false);
		UNK_0x6745191B(bVar6, 0.0f, 0.0f, 0.0f);
		if (IS_BLIP_VALID(StackVal))
		{
			REMOVE_BLIP(StackVal);
		}
		(&Local_254 + 520[25])->f_4 = ADD_BLIP_FOR_OBJECT(StackVal, 330, 0f, 2, 0);
		if (IS_OBJECT_VALID((&Local_254 + 520[25])->f_12))
		{
			DESTROY_OBJECT((&Local_254 + 520[25])->f_12);
		}
		if (IS_VOLUME_VALID((*&Local_254 + 520)[25]))
		{
			DESTROY_VOLUME((*&Local_254 + 520)[25]);
		}
		(*&Local_254 + 520)[25] = CREATE_VOLUME_IN_LAYOUT(Local_254.f_656, "standHereVol", 3, vVar0, vVar3, 3.0f, 3.0f, 3.0f);
		(&Local_254 + 520[25])->f_12 = CREATE_GATEWAY_IN_LAYOUT(Local_254.f_656, "", (*&Local_254 + 520)[25], Function_13(), 2, 4294967295, 0, 0, 1, 1);
	}
	return;
}

void Function_493() //Position: 0x10900 / 67840
{
	Function_322("CTSBAG_CHESTAPPEARSNEWRND", 0);
	return;
}

int Function_494(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, float fParam8) //Position: 0x10926 / 67878
{
	bool bVar0;
	
	bVar0 = CREATE_PROP_IN_LAYOUT(Local_254.f_660, bParam1, bParam0, vParam2, vParam5, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!SNAP_OBJECT_TO_GROUND(bVar0, fParam8, false, 1092616192))
		{
		}
	}
	return bVar0;
}

bool Function_495() //Position: 0x10960 / 67936
{
	return "$/fragments/p_gen_mpChestYellow01x";
}

void Function_496() //Position: 0x1098B / 67979
{
	int iVar0;
	
	iVar0 = 0;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_441(Local_118.f_432, iVar0))
		{
			if (!IS_OBJECT_VALID(StackVal))
			{
				(&Local_254 + 520[iVar05])->f_8 = Function_497(Function_495(), (*&Local_254 + 520)[iVar05]);
			}
		}
		else if (IS_OBJECT_VALID(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

int Function_497(var uParam0, bool bParam1) //Position: 0x10A12 / 68114
{
	char* cVar0[32];
	struct<5> Var8;
	vector3 vVar14;
	
	strcpy(&cVar0, GET_OBJECT_NAME(bParam1), 32);
	stradd(&cVar0, "marker", 32);
	GET_OBJECT_POSITION(bParam1, &vVar11);
	GET_VOLUME_SCALE(bParam1, &Var8);
	GET_OBJECT_ORIENTATION(bParam1, &vVar14);
	return Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, uParam0, &cVar0, vVar11, (vVar14 * 0.5f));
}

void Function_498(bool bParam0) //Position: 0x10A5E / 68190
{
	bool bVar0;
	int iVar1;
	
	bVar0 = "";
	iVar1 = Function_504(bParam0, &bVar0);
	while (IS_OBJECT_VALID(bVar0))
	{
		switch (iVar1)
		{
			case 0x00000045:
				Function_502(bVar0);
				break;
			
			case 0x0000004C:
				Function_501(bVar0);
				break;
			
			case 0x00000046:
				Function_500(bVar0);
				break;
		}
		iVar1 = Function_504(bParam0, &bVar0);
	}
	Function_499(bParam0);
	return;
}

void Function_499(bool bParam0) //Position: 0x10ABB / 68283
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_500(bool bParam0) //Position: 0x10ACE / 68302
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	return;
}

void Function_501(bool bParam0) //Position: 0x10AE2 / 68322
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	iVar2 = 0;
	while (iVar2 <= Local_254.f_496)
	{
		if (StackVal == bVar1)
		{
			if (NET_IS_OBJECT_LOCAL(bVar1))
			{
				if (!NET_OBJECT_LOCK_OWNERSHIP(bVar1, 1))
				{
				}
			}
		}
		iVar2++;
	}
	return;
}

void Function_502(bool bParam0) //Position: 0x10B35 / 68405
{
	var uVar0;
	int iVar1;
	
	if (NET_IS_SESSION_HOST())
	{
		if (DECOR_GET_INT_VERBOSE(bParam0, "Slot", &uVar0))
		{
			iVar1 = 0;
			while (iVar1 <= 15)
			{
				if (Function_470(iVar1, uVar0))
				{
					Function_503(iVar1);
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_503(int iParam0) //Position: 0x10B74 / 68468
{
	Function_77("CTF_HOST_DROP_BAG", iParam0);
	Local_118[iParam07].f_8 = 4294967294;
	Local_118[iParam07].f_4 = 2;
	Function_460(&Local_118[iParam07] + 12);
	Function_316(&Local_118[iParam07] + 24);
	return;
}

int Function_504(bool bParam0, bool bParam1) //Position: 0x10BBD / 68541
{
	int iVar0;
	
	*bParam1 = "";
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		*bParam1 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		iVar0 = GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(*bParam1));
		REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, bParam0);
		return iVar0;
	}
	return 0;
}

void Function_505(int iParam0) //Position: 0x10BFC / 68604
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_506(iParam0);
		}
	}
	return;
}

void Function_506(var uParam0) //Position: 0x10C2E / 68654
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

bool Function_507() //Position: 0x10C3D / 68669
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	if (Function_399())
	{
		bVar1 = false;
		if (!Function_613(Local_254.f_656))
		{
		}
		else if ((Function_96(1024) && !Function_395(&Local_118 + 440)) && Function_288(&Global_78578 + 96))
		{
		}
		else if (bVar0 > 0 || bVar0 <= 16)
		{
			return 0;
		}
		if ((&Local_118 + 440)->f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_611(&Local_118 + 440, 0);
			}
			return 0;
		}
		if ((*&Local_118 + 440 + 24)[bVar0] == 4294967295)
		{
			Function_298(&Local_443 + 452, 64);
			Function_598(&Local_443, 0, 0, 0, 1);
		}
		else
		{
			Function_598(&Local_443, 1, 0, 0, 1);
			Function_289(&Local_443, 1);
			Function_294(&Local_443, 82253);
		}
		Function_291(&Local_443, 1);
		Function_595(Function_369(), &Local_443 + 452);
		Function_594(StackVal, StackVal, &Local_443, Function_595(Function_369(), &Local_443 + 452));
		bVar1 = true;
		if (!bVar1)
		{
			Function_593(&Local_443 + 452);
			if (NET_IS_SESSION_HOST())
			{
				Function_285(&Global_78578 + 96, Global_83591.f_16);
			}
		}
		Function_592(&Local_443, 1);
	}
	else
	{
		bVar2 = false;
		if (!Function_591(Local_254.f_656))
		{
		}
		else if ((Function_96(1024) && !Function_395(&Local_118 + 440)) && Function_288(&Global_78578 + 96))
		{
		}
		else if (bVar0 > 0 || bVar0 <= 16)
		{
			return 0;
		}
		if ((&Local_118 + 440)->f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_611(&Local_118 + 440, 1);
			}
			return 0;
		}
		if ((*&Local_118 + 440 + 24)[bVar0] == 4294967295)
		{
			Function_298(&Local_443 + 452, 64);
			Function_598(&Local_443, 0, 0, 0, 1);
		}
		else
		{
			Function_598(&Local_443, 1, 0, 0, 1);
			Function_289(&Local_443, 1);
			Function_294(&Local_443, 81925);
		}
		Function_291(&Local_443, 1);
		Function_595(Function_369(), &Local_443 + 452);
		Function_594(StackVal, StackVal, &Local_443, Function_595(Function_369(), &Local_443 + 452));
		bVar2 = true;
		if (NET_IS_SESSION_HOST())
		{
			Function_450(&Global_78578 + 96);
		}
		Function_592(&Local_443, 2);
		if (!bVar2)
		{
			Function_593(&Local_443 + 452);
			if (NET_IS_SESSION_HOST())
			{
				Function_285(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	Function_578(&Local_443, 80268);
	Function_523(&Local_443, 70507);
	Function_514(&Local_443, 69504);
	Function_510(&Local_443, 69294);
	Function_509(&Local_443, 30);
	Function_508(&Local_443, 0);
	return 1;
}

void Function_508(int iParam0, bool bParam1) //Position: 0x10E76 / 69238
{
	if (bParam1)
	{
		Function_39(iParam0 + 44, 128);
	}
	else
	{
		Function_42(iParam0 + 44, 128);
	}
	return;
}

void Function_509(int iParam0, int iParam1) //Position: 0x10E96 / 69270
{
	iParam0->f_52 = iParam1;
	return;
}

void Function_510(int iParam0, int iParam1) //Position: 0x10EA2 / 69282
{
	iParam0->f_184 = iParam1;
	return;
}

int Function_511() //Position: 0x10EAE / 69294
{
	return Function_512(&Local_443 + 644);
}

int Function_512(int iParam0) //Position: 0x10EBD / 69309
{
	bool bVar0;
	struct<5> Var1;
	
	if (iParam0->f_1452 < 4294967295)
	{
		return 0;
	}
	fVar3 = NET_GET_NET_TIME();
	bVar4 = GET_LOCAL_SLOT();
	iVar5 = Function_149();
	if (FIRE_ARE_ANY_FLAMES_IN_VOLUME((*iParam0)[iParam0->f_14526]))
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 != bVar4)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				if (iVar5 != 4294967295 || Function_150(bVar0, 1, 0) == iVar5)
				{
					if (Function_513(bVar0, &Var1))
					{
						if (StackVal && StackVal > (StackVal && (Var1 != iParam0->f_1452 - fVar3) >= 15.0f))
						{
							return 1;
						}
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_513(bool bParam0, int iParam1) //Position: 0x10F55 / 69461
{
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_73, bParam0))
	{
		*iParam1 = { StackVal, Local_73[bParam02] };
		return 1;
	}
	return 0;
}

void Function_514(int iParam0, int iParam1) //Position: 0x10F74 / 69492
{
	iParam0->f_160 = iParam1;
	return;
}

void Function_515(var uParam0) //Position: 0x10F80 / 69504
{
	if (!Function_521(uParam0, &Local_443 + 452, &Local_118 + 440))
	{
		if (Function_399())
		{
			Function_519(Function_520());
		}
		else
		{
			Function_519(Function_518());
		}
		if (Function_373(8388608))
		{
			Function_516();
		}
	}
	return;
}

void Function_516() //Position: 0x10FBC / 69564
{
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	Function_191(Function_13());
	Function_254(GET_OBJECT_FROM_ACTOR(Function_13()));
	bLocal_72 = CREATE_ACTOR_IN_LAYOUT(Function_369(), Function_18(), Global_83864.f_1284, Function_191(Function_13()), Function_254(GET_OBJECT_FROM_ACTOR(Function_13())));
	SNAP_OBJECT_TO_GROUND(bLocal_72, 50.0f, false, 1092616192);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(bLocal_72))
	{
		ACCESSORIZE_HORSE(bLocal_72, 3);
		Function_517(bLocal_72, 0);
		if (!IS_ACTOR_MOUNTED(bLocal_72))
		{
			if (!ACTOR_MOUNT_ACTOR(Function_13(), bLocal_72))
			{
			}
		}
	}
	return;
}

void Function_517(bool bParam0, bool bParam1) //Position: 0x1102C / 69676
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

bool Function_518() //Position: 0x1106F / 69743
{
	if (Function_149() > 0 || Function_149() < 2)
	{
		return 4294967295;
	}
	return Function_405(Function_149());
}

void Function_519(bool bParam0) //Position: 0x1108B / 69771
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	HUD_CLEAR_OBJECTIVE_QUEUE();
	bVar0 = bParam0;
	if (!Function_82())
	{
		bVar0 = (Global_83591 - bParam0);
	}
	if (bVar0 != 0 || Function_614())
	{
		return;
	}
	if (Function_399())
	{
		iVar2 = 4294967295;
		iVar2 = Function_426(1, 1, 0);
		if (Function_403() && bParam0 != iVar2)
		{
			iVar1 = "CTF_mul_obj_capped_overtime";
		}
		else if (bParam0 == 0)
		{
			iVar1 = "CTF_mul_objective";
		}
		else
		{
			iVar1 = "CTF_mul_obj_capped";
		}
		Function_466(iVar1, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	else if (Function_82())
	{
		PRINT_OBJECTIVE_FORMAT(7.5f, "GAP_CO_bag_update", Function_320(bParam0), false, 0, 0, 0, 2, 0, 0, 0);
	}
	else
	{
		if (Function_83())
		{
			if (bVar0 != 1 || Function_403())
			{
				bVar0 = true;
				iVar1 = "CTF_sym_obj_capped_last";
			}
			else if (bParam0 == 0)
			{
				iVar1 = "CTF_sym_objective";
			}
			else
			{
				iVar1 = "CTF_sym_obj_capped";
			}
		}
		else if (Function_402())
		{
			if (bVar0 != 1 || Function_403())
			{
				bVar0 = true;
				iVar1 = "CTF_one_obj_capped_last";
			}
			else if (bParam0 == 0)
			{
				iVar1 = "CTF_one_objective";
			}
			else
			{
				iVar1 = "CTF_one_obj_capped";
			}
		}
		PRINT_OBJECTIVE_FORMAT(7.5f, iVar1, Function_320(bVar0), false, 0, 0, 0, 2, 0, 0, 0);
	}
	return;
}

bool Function_520() //Position: 0x1125B / 70235
{
	return Function_266(0);
}

bool Function_521(bool bParam0, int iParam1, int iParam2) //Position: 0x11265 / 70245
{
	bool bVar0;
	
	Function_298(iParam1, 1);
	if (Function_395(iParam2) && !Function_522(iParam1))
	{
		SET_ACTOR_POSTURE(bParam0, 0);
		bVar0 = Function_178(bParam0, 40);
		if (Function_373(2097152))
		{
			if (ACTOR_HAS_WEAPON(bParam0, 29))
			{
				bVar0 = 29;
			}
			else if (ACTOR_HAS_WEAPON(bParam0, 25))
			{
				bVar0 = 25;
			}
		}
		if (Function_373(4194304))
		{
			if (ACTOR_HAS_WEAPON(bParam0, 15))
			{
				bVar0 = 15;
			}
		}
		if (bVar0 == 4294967295)
		{
			bVar0 = Function_178(bParam0, 39);
			if (bVar0 == 4294967295)
			{
				bVar0 = 22;
			}
		}
		if ((Function_67(iParam1, 8) && !Function_373(2097152)) && !Function_373(4194304))
		{
			ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 1, 0);
			ACTOR_SET_NEXT_WEAPON(bParam0, bVar0);
		}
		else
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(bParam0, 0.1f, 0.9f, 1);
			SET_ACTOR_MAX_SPEED(bParam0, 5);
			iParam1->f_28 = GET_PLAYER_CONTROL_CONFIG(0);
			SET_PLAYER_CONTROL_CONFIG(0, 4);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar0, 0);
		}
		return 1;
	}
	return 0;
}

bool Function_522(int iParam0) //Position: 0x11353 / 70483
{
	return *iParam0 <= 12;
}

void Function_523(int iParam0, int iParam1) //Position: 0x1135F / 70495
{
	iParam0->f_172 = iParam1;
	return;
}

void Function_524() //Position: 0x1136B / 70507
{
	if (Function_577(&Local_443, Function_398()))
	{
		Function_322("GENMESS_GAMEOVER", 0);
	}
	else
	{
		Function_561(&Local_443, 76322);
		Function_101(&Local_443 + 564);
		if (Function_399())
		{
			Function_556(&Local_443);
		}
		else
		{
			Function_525(&Local_443);
		}
	}
	return;
}

void Function_525(bool bParam0) //Position: 0x113BF / 70591
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar3 = Function_149();
	uVar4 = "";
	bVar5 = false;
	if (Function_83())
	{
		if (Function_49(Global_79962, 512))
		{
			bVar5 = CEIL(50.0f);
			uVar4 = "xp_hardcore";
		}
		else if (Function_49(Global_79962, 256))
		{
			bVar5 = CEIL(100.0f);
			uVar4 = "xp_veteran";
		}
	}
	else if (Function_402())
	{
		if (Function_49(Global_79962, 512))
		{
			bVar5 = CEIL(50.0f);
			uVar4 = "xp_hardcore";
		}
		else if (Function_49(Global_79962, 256))
		{
			bVar5 = CEIL(100.0f);
			uVar4 = "xp_veteran";
		}
	}
	Function_411(Function_398());
	if (Function_398() == iVar3)
	{
		Function_555(Function_308(iVar3));
		bVar1 = "mp_teammsg_blue_start";
		bVar2 = "mp_teammsg_blue_end";
		uVar0 = Function_554(iVar3);
		Function_544(&Local_443 + 3388, Function_549(iVar3, 1), CEIL(250.0f), 1, iVar3, uVar4, bVar5);
		if (Function_83())
		{
			Function_543(&Global_50170[3222] + 4, &Global_50170[3222] + 8, &Global_50170[3222] + 12);
		}
		else if (Function_402())
		{
			Function_541(&Global_50170[4022] + 4, &Global_50170[4022] + 8, &Global_50170[4022] + 12);
		}
	}
	else if (Function_308(iVar3) == 15)
	{
		bVar1 = "mp_teammsg_red_start";
		bVar2 = "mp_teammsg_red_end";
		iVar6 = Function_351(iVar3);
		uVar0 = Function_540(iVar3);
		Function_322("GENMESS_LOSE_TEAM_15", 0);
		Function_544(&Local_443 + 3388, Function_549(iVar6, 1), 0, 0, iVar6, uVar4, bVar5);
		if (Function_83())
		{
			Function_539(&Global_50170[3722] + 4, &Global_50170[3722] + 8, &Global_50170[3722] + 12);
		}
		else if (Function_402())
		{
			Function_537(&Global_50170[4522] + 4, &Global_50170[4522] + 8, &Global_50170[4522] + 12);
		}
	}
	else
	{
		bVar1 = "mp_teammsg_red_start";
		bVar2 = "mp_teammsg_red_end";
		iVar7 = Function_351(iVar3);
		uVar0 = Function_554(iVar7);
		Function_536(Function_308(iVar7));
		Function_544(&Local_443 + 3388, Function_549(iVar7, 1), 0, 0, iVar7, uVar4, bVar5);
		if (Function_83())
		{
			Function_539(&Global_50170[3722] + 4, &Global_50170[3722] + 8, &Global_50170[3722] + 12);
		}
		else if (Function_402())
		{
			Function_537(&Global_50170[4522] + 4, &Global_50170[4522] + 8, &Global_50170[4522] + 12);
		}
	}
	if (Function_83())
	{
		Function_534(&Global_50170[3622] + 4, &Global_50170[3622] + 8, &Global_50170[3622] + 12);
	}
	else if (Function_402())
	{
		Function_531(&Global_50170[4422] + 4, &Global_50170[4422] + 8, &Global_50170[4422] + 12);
	}
	Function_101(&Local_443 + 564);
	Function_527(&Global_50170[1422] + 4, &Global_50170[1422] + 8, &Global_50170[1422] + 12);
	Function_526(bParam0, uVar0, bVar1, bVar2, 0, 0);
	return;
}

void Function_526(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1172A / 71466
{
	int iVar0;
	
	iParam0->f_16 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		(*iParam0 + 20)[iVar0] = "";
		iVar0++;
	}
	if (IS_STRING_VALID(bParam2))
	{
		(*iParam0 + 20)[0] = bParam2;
	}
	if (IS_STRING_VALID(bParam3))
	{
		(*iParam0 + 20)[1] = bParam3;
	}
	if (IS_STRING_VALID(bParam4))
	{
		(*iParam0 + 20)[2] = bParam4;
	}
	if (IS_STRING_VALID(bParam5))
	{
		(*iParam0 + 20)[3] = bParam5;
	}
}

void Function_527(var uParam0, var uParam1, var uParam2) //Position: 0x11799 / 71577
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 18)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(14);
				if (Function_530() >= 0)
				{
					if ((Function_529() / Function_530()) > 5)
					{
						Global_50170[1422].f_28++;
						bVar0 = Global_50170[1422].f_28;
					}
				}
				else if (Function_529() > 5)
				{
					Global_50170[1422].f_28++;
					bVar0 = Global_50170[1422].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_108(14, 150, Function_528(), 3028);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(14, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_528() //Position: 0x1185A / 71770
{
	return "MP_KDR_Icon_128";
}

int Function_529() //Position: 0x11872 / 71794
{
	return Function_159(11);
}

int Function_530() //Position: 0x1187D / 71805
{
	return Function_159(12);
}

void Function_531(var uParam0, var uParam1, var uParam2) //Position: 0x11888 / 71816
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(44);
				if (Function_533())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_108(44, 150, Function_532(), 3082);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(44, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_532() //Position: 0x118FB / 71931
{
	return "MP_GrabtheBag2_Icon_128";
}

bool Function_533() //Position: 0x1191B / 71963
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = Function_520();
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_313(bVar1) && bVar2 == bVar1)
		{
			if (iVar0 < Function_406(bVar1))
			{
				return 0;
			}
		}
		bVar1++;
	}
	return 1;
}

void Function_534(var uParam0, var uParam1, var uParam2) //Position: 0x11959 / 72025
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(36);
				if (Function_533())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_108(36, 150, Function_535(), 3062);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(36, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_535() //Position: 0x119CC / 72140
{
	return "MP_HoldYourOwn_Icon_128";
}

void Function_536(int iParam0) //Position: 0x119EC / 72172
{
	struct<16> Var0;
	
	if (iParam0 == 15)
	{
		Function_555(iParam0);
		return;
	}
	strcpy(&Var0, "GENMESS_LOSE_TEAM_", 64);
	straddi(&Var0, iParam0, 64);
	Function_322(&Var0, 0);
	return;
}

void Function_537(var uParam0, var uParam1, var uParam2) //Position: 0x11A24 / 72228
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(45);
				if (Function_538())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_108(45, 150, Function_532(), 3083);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(45, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_538() //Position: 0x11A97 / 72343
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	iVar1 = Function_406(bVar0);
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (Function_313(bVar2) && bVar0 == bVar2)
		{
			if ((*&Global_78578 + 20)[bVar2] == (*&Global_78578 + 20)[bVar0])
			{
				if (iVar1 < Function_406(bVar2))
				{
					return 0;
				}
			}
		}
		bVar2++;
	}
	return 1;
}

void Function_539(var uParam0, var uParam1, int iParam2) //Position: 0x11AEE / 72430
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(37);
				if (Function_538())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_108(37, 150, Function_535(), 3063);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_46(37, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

var Function_540(int iParam0) //Position: 0x11B61 / 72545
{
	switch (Function_308(iParam0))
	{
		case 0xFFFFFFF6:
			return "TeamLose_-10";
		
		case 0xFFFFFFF7:
			return "TeamLose_-9";
		
		case 0xFFFFFFF8:
			return "TeamLose_-8";
		
		case 0xFFFFFFF9:
			return "TeamLose_-7";
		
		case 0xFFFFFFFA:
			return "TeamLose_-6";
		
		case 0xFFFFFFFB:
			return "TeamLose_-5";
		
		case 0xFFFFFFFC:
			return "TeamLose_-4";
		
		case 0xFFFFFFFD:
			return "TeamLose_-3";
		
		case 0xFFFFFFFE:
			return "TeamLose_-2";
		
		case 0xFFFFFFFF:
			return "TeamLose_-1";
		
		case 0x00000000:
			return "TeamLose_0";
		
		case 0x00000001:
			return "TeamLose_1";
		
		case 0x00000002:
			return "TeamLose_2";
		
		case 0x00000003:
			return "TeamLose_3";
		
		case 0x00000004:
			return "TeamLose_4";
		
		case 0x00000005:
			return "TeamLose_5";
		
		case 0x00000006:
			return "TeamLose_6";
		
		case 0x00000007:
			return "TeamLose_7";
		
		case 0x00000008:
			return "TeamLose_8";
		
		case 0x00000009:
			return "TeamLose_9";
		
		case 0x0000000A:
			return "TeamLose_10";
		
		case 0x0000000B:
			return "TeamLose_11";
		
		case 0x0000000C:
			return "TeamLose_12";
		
		case 0x0000000D:
			return "TeamLose_13";
		
		case 0x0000000E:
			return "TeamLose_14";
		
		case 0x0000000F:
			return "TeamLose_15";
		
		case 0x00000010:
			return "TeamLose_16";
		
		case 0x00000011:
			return "TeamLose_17";
		
		case 0x00000012:
			return "TeamLose_18";
		
		case 0x00000013:
			return "TeamLose_19";
		
		case 0x00000014:
			return "TeamLose_20";
		
		default:
	}
	return "TeamLose_unx";
}

void Function_541(var uParam0, var uParam1, var uParam2) //Position: 0x11E02 / 73218
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(40);
				Global_50170[4022].f_28++;
				bVar0 = Global_50170[4022].f_28;
				if (bVar0 > 1)
				{
					Function_139(40, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_542(), 3068);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(40, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(40);
				Global_50170[4022].f_28++;
				bVar0 = Global_50170[4022].f_28;
				if (bVar0 > 5)
				{
					Function_139(40, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_542(), 3069);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_46(40, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(40);
				Global_50170[4022].f_28++;
				bVar0 = Global_50170[4022].f_28;
				if (bVar0 > 20)
				{
					Function_108(40, 150, Function_542(), 3070);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_46(40, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_542() //Position: 0x11F84 / 73604
{
	return "MP_GrabTheBag_Icon_128";
}

void Function_543(var uParam0, var uParam1, int iParam2) //Position: 0x11FA3 / 73635
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(32);
				Global_50170[3222].f_28++;
				bVar0 = Global_50170[3222].f_28;
				if (bVar0 > 1)
				{
					Function_139(32, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_535(), 3048);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_46(32, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(32);
				Global_50170[3222].f_28++;
				bVar0 = Global_50170[3222].f_28;
				if (bVar0 > 5)
				{
					Function_139(32, uParam0, 2, uParam1, 2, *iParam2, 0, 100, bVar0, 20, 150, Function_535(), 3049);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_46(32, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(32);
				Global_50170[3222].f_28++;
				bVar0 = Global_50170[3222].f_28;
				if (bVar0 > 20)
				{
					Function_108(32, 150, Function_535(), 3050);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 20);
					if (*iParam2 == fVar1)
					{
						Function_46(32, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_544(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x12124 / 74020
{
	iParam0->f_24 = bParam1;
	iParam0->f_32 = iParam3;
	iParam0->f_36 = iParam4;
	iParam0->f_40 = bParam2;
	iParam0->f_48 = uParam5;
	iParam0->f_44 = bParam6;
	if (bParam1 > 0)
	{
		iParam0->f_20 = Function_407(9, bParam1);
		if (!IS_ACTORENUM_INSTALLED(iParam0->f_20))
		{
			iParam0->f_20 = 869;
		}
		Function_548(iParam0 + 64, iParam0->f_20, 3, 0);
	}
	else
	{
		iParam0->f_20 = 4294967295;
	}
	Function_546(iParam0 + 64, "MP_victory", 5, 0);
	Function_546(iParam0 + 64, "custom/mp_victory", 8, 0);
	Function_389(iParam0 + 64);
	Function_545(5);
	Function_387();
}

void Function_545(int iParam0) //Position: 0x121CE / 74190
{
	Function_41(&Global_83864 + 1252, iParam0);
	return;
}

var Function_546(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x121E0 / 74208
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_547(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_393(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_547(var uParam0, int iParam1, int iParam2) //Position: 0x12218 / 74264
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_57(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_393(uParam0[iVar03], 4);
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

var Function_548(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x122DC / 74460
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_57(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_393(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_393(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_549(int iParam0, int iParam1) //Position: 0x123AC / 74668
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 4294957296;
	bVar2 = 4294967295;
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (Function_313(bVar3))
		{
			if ((*&Global_78578 + 20)[bVar3] == iParam0)
			{
				iVar1 = Function_550(bVar3, iParam1);
				if (iVar0 < iVar1)
				{
					iVar0 = iVar1;
					bVar2 = bVar3;
				}
			}
		}
		bVar3++;
	}
	return bVar2;
}

var Function_550(bool bParam0, int iParam1) //Position: 0x123FE / 74750
{
	return ((((Function_406(bParam0) / iParam1) * 100000) + Function_553(bParam0) * 100) - Function_551(bParam0));
}

int Function_551(bool bParam0) //Position: 0x1241F / 74783
{
	return Function_552(12, bParam0);
}

int Function_552(int iParam0, bool bParam1) //Position: 0x1242C / 74796
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_159(iParam0);
	}
	if (!Function_154(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_553(int iParam0) //Position: 0x1249A / 74906
{
	return Function_552(11, iParam0);
}

var Function_554(int iParam0) //Position: 0x124A7 / 74919
{
	switch (Function_308(iParam0))
	{
		case 0xFFFFFFF6:
			return "TeamWin_-10";
		
		case 0xFFFFFFF7:
			return "TeamWin_-9";
		
		case 0xFFFFFFF8:
			return "TeamWin_-8";
		
		case 0xFFFFFFF9:
			return "TeamWin_-7";
		
		case 0xFFFFFFFA:
			return "TeamWin_-6";
		
		case 0xFFFFFFFB:
			return "TeamWin_-5";
		
		case 0xFFFFFFFC:
			return "TeamWin_-4";
		
		case 0xFFFFFFFD:
			return "TeamWin_-3";
		
		case 0xFFFFFFFE:
			return "TeamWin_-2";
		
		case 0xFFFFFFFF:
			return "TeamWin_-1";
		
		case 0x00000000:
			return "nTeamWin_0";
		
		case 0x00000001:
			return "nTeamWin_1";
		
		case 0x00000002:
			return "nTeamWin_2";
		
		case 0x00000003:
			return "nTeamWin_3";
		
		case 0x00000004:
			return "nTeamWin_4";
		
		case 0x00000005:
			return "nTeamWin_5";
		
		case 0x00000006:
			return "nTeamWin_6";
		
		case 0x00000007:
			return "nTeamWin_7";
		
		case 0x00000008:
			return "nTeamWin_8";
		
		case 0x00000009:
			return "nTeamWin_9";
		
		case 0x0000000A:
			return "TeamWin_10";
		
		case 0x0000000B:
			return "TeamWin_11";
		
		case 0x0000000C:
			return "TeamWin_12";
		
		case 0x0000000D:
			return "TeamWin_13";
		
		case 0x0000000E:
			return "TeamWin_14";
		
		case 0x0000000F:
			return "TeamWin_15";
		
		case 0x00000010:
			return "TeamWin_16";
		
		case 0x00000011:
			return "TeamWin_17";
		
		case 0x00000012:
			return "TeamWin_18";
		
		case 0x00000013:
			return "TeamWin_19";
		
		case 0x00000014:
			return "TeamWin_20";
		
		default:
	}
	return "TeamWin_unx";
}

void Function_555(int iParam0) //Position: 0x12728 / 75560
{
	struct<16> Var0;
	
	strcpy(&Var0, "GENMESS_WIN_TEAM_", 64);
	straddi(&Var0, iParam0, 64);
	Function_322(&Var0, 0);
	return;
}

void Function_556(var uParam0) //Position: 0x12752 / 75602
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	uVar0 = "";
	bVar1 = false;
	if (Function_49(Global_79962, 512))
	{
		bVar1 = CEIL(50.0f);
		uVar0 = "xp_hardcore";
	}
	else if (Function_49(Global_79962, 256))
	{
		bVar1 = CEIL(100.0f);
		uVar0 = "xp_veteran";
	}
	bVar2 = Function_398();
	Function_526(uParam0, "DM_victory", Function_256(bVar2), 0, 0, 0);
	if (bVar2 == GET_LOCAL_SLOT())
	{
		Function_560();
		Function_558(&Global_50170[4722] + 4, &Global_50170[4722] + 8, &Global_50170[4722] + 12);
		Function_544(&Local_443 + 3388, bVar2, 0, 1, 4294967295, uVar0, bVar1);
	}
	else
	{
		Function_557();
		Function_544(&Local_443 + 3388, bVar2, 0, 0, 4294967295, uVar0, bVar1);
	}
	Function_527(&Global_50170[1422] + 4, &Global_50170[1422] + 8, &Global_50170[1422] + 12);
	return;
}

void Function_557() //Position: 0x1283F / 75839
{
	Function_322("GENMESS_GAMELOST", 0);
	return;
}

void Function_558(var uParam0, var uParam1, var uParam2) //Position: 0x1285C / 75868
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(47);
				Global_50170[4722].f_28++;
				bVar0 = Global_50170[4722].f_28;
				if (bVar0 > 1)
				{
					Function_139(47, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_559(), 3087);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(47, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(47);
				Global_50170[4722].f_28++;
				bVar0 = Global_50170[4722].f_28;
				if (bVar0 > 5)
				{
					Function_139(47, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_559(), 3088);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_46(47, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(47);
				Global_50170[4722].f_28++;
				bVar0 = Global_50170[4722].f_28;
				if (bVar0 > 20)
				{
					Function_108(47, 150, Function_559(), 3089);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_46(47, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_559() //Position: 0x129DD / 76253
{
	return "MP_Goldrush_icon_128";
}

void Function_560() //Position: 0x129FA / 76282
{
	Function_322("GENMESS_GAMEWON", 0);
	return;
}

void Function_561(int iParam0, int iParam1) //Position: 0x12A16 / 76310
{
	iParam0->f_180 = iParam1;
	return;
}

int Function_562() //Position: 0x12A22 / 76322
{
	if (Function_563(&Local_443 + 3388, Local_254.f_656))
	{
		Function_69(&Local_443 + 3388);
		return 1;
	}
	return 0;
}

bool Function_563(int iParam0, bool bParam1) //Position: 0x12A45 / 76357
{
	int iVar0;
	
	if (!iParam0->f_32)
	{
		iVar0 = 5;
	}
	switch (iParam0->f_56)
	{
		case 0x00000000:
			Function_576();
			UI_HIDE("FameText");
			UI_EXCLUDE("FameText");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			CANCEL_DEADEYE();
			UI_PUSH("MPSplash");
			UI_ENTER("HudMPNoFun");
			UI_SET_STYLE("MPSplashTitle", (0 + iVar0));
			Function_575(iParam0, 1, "VS_WAITING_FOR_MOVIE_TO_BE_READY");
			break;
		
		case 0x00000001:
			if (!UNK_0x9D20BDC4("networking"))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1000.0f, 1065353216);
				}
			}
			else
			{
				if (iParam0->f_104 < 5.0f)
				{
					Function_575(iParam0, 2, "VS_STREAMING");
				}
				iParam0->f_104 = (iParam0->f_104 + 1.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_389(iParam0 + 64) && FLASH_GET_INT("networking", "splashDone") < 0)
			{
				UI_ENTER("LoadingSpinner");
				UI_HIDE("WeaponAmmo");
				UI_EXIT("XpHud");
				HUD_CLEAR_HELP();
				HUD_ENABLE(0);
				UI_EXCLUDE("MPSplashItem.s0");
				UI_EXCLUDE("MPSplashItem.s1");
				UI_EXCLUDE("MPSplashItem.s2");
				UI_EXCLUDE("MPSplashItem.s3");
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				UI_REFRESH("MPSplash");
				if (VDIST(*(&Global_79349 + 28), Global_34574) >= 200.0f)
				{
					*(iParam0 + 8) = { StackVal, StackVal, *(&Global_79349 + 28) };
				}
				else
				{
					Function_573(StackVal, StackVal, Global_34574);
					*(iParam0 + 8) = { StackVal, StackVal, Function_573(StackVal, StackVal, Global_34574) };
					iParam0->f_108 = CLEAR_AREA_OF_GRASS(*(iParam0 + 8), 2.0f);
					iParam0->f_112 = CLEAR_AREA_OF_TREE_TYPE(*(iParam0 + 8), 5.0f, "");
				}
				*iParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "CloneAnchor", *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
				iParam0->f_28 = Function_570(bParam1, 0, *iParam0, 1, 0, 0);
				if (!iParam0->f_32)
				{
					SET_CAMERASHOT_TARGET_OBJECT_ROLL(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0.0f);
					SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0.180749f, 1.206322f, -0.246788f, 0.0f, 0.0f, 0.0f, 0);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					DESTROY_ACTOR(Global_34573);
				}
				Function_575(iParam0, 4, "VS_LOADING");
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (iParam0->f_20 != 4294967295)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 0);
					iParam0->f_4 = CREATE_ACTOR_IN_LAYOUT(bParam1, "Clone", iParam0->f_20, *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
					NET_OBJECT_REPLICATION_MODE_END(15);
					SET_AMBIENT_VOICE_NAME(StackVal, Function_223(GET_ACTOR_ENUM(StackVal)));
					SET_ACTOR_INVULNERABILITY(StackVal, 1);
					SET_ACTOR_PROOF(StackVal, 4294967295);
				}
				if (!IS_POINT_LIGHT_VALID(CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(*(iParam0 + 8), "winLight", bParam1) + Vector(-0.75f, 1.5f, -0.75f), 1.0f, 1.0f, 1.0f, 2.5f)))
				{
				}
				if (iParam0->f_32)
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_won_header");
				}
				else
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_lost_header");
				}
				if (iParam0->f_36 == 4294967295)
				{
					UI_SET_TEXT("MPSplashItem.s0", Function_349(iParam0->f_24));
					Function_569(iParam0->f_24);
				}
				else
				{
					Function_568("MPSplashItem.s0", iParam0->f_36);
					if (iParam0->f_20 != 4294967295)
					{
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_mvp"), UI_GET_STRING(Function_349(iParam0->f_24)), false, false);
						UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
					}
					else
					{
						UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
					}
				}
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_REFRESH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				Function_575(iParam0, 3, "VS_WAITING_FOR_READY");
			}
			break;
		
		case 0x00000003:
			if (StackVal || (StackVal && Function_209(HAS_INVENTORY_COMPONENT(iParam0->f_20 != 4294967295), 1, 0x41700000)))
			{
				if (iParam0->f_20 != 4294967295)
				{
					Function_566(StackVal);
					SET_ANIM_SET_FOR_ACTOR(StackVal, "mp_victory", 1);
					SET_ACTION_NODE_FOR_ACTOR(StackVal, "mp_victory");
				}
				PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM_MASTER");
				if (iParam0->f_36 == 4294967295)
				{
					if (iParam0->f_32)
					{
						iParam0->f_52 = "MP_VS_White.ppp";
					}
					else
					{
						iParam0->f_52 = "MP_VS_Red.ppp";
					}
				}
				else if (iParam0->f_32)
				{
					iParam0->f_52 = "MP_VS_Blue.ppp";
				}
				else
				{
					iParam0->f_52 = "MP_VS_Red.ppp";
				}
				PPP_LOAD_PRESET(iParam0->f_52);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				Function_576();
				Function_575(iParam0, 6, "VS_SPLASH_APPEAR");
			}
			break;
		
		case 0x00000006:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				UI_SET_STYLE("MPSplashTitle", (2 + iVar0));
				HUD_FADE_IN(0.0f, 1065353216);
				Function_575(iParam0, 7, "VS_SPLASH_APPEAR_WAIT");
			}
			break;
		
		case 0x00000007:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0.5f)
				{
					if (iParam0->f_20 != 4294967295)
					{
						SAY_SINGLE_LINE_STRING(StackVal, "MPTAUNT", true, true, 4, 0, true, false);
						Function_575(iParam0, 10, "VS_WAIT_FOR_CHATTY_CATHY");
					}
					else if (iParam0->f_104 < 5.0f)
					{
						Function_575(iParam0, 11, "VS_MATCH_BONUS");
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_ANY_SPEECH_PLAYING(StackVal))
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 1.0f)
				{
					Function_575(iParam0, 11, "VS_MATCH_BONUS");
				}
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_40 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_565(iParam0->f_40);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_301(TO_FLOAT(iParam0->f_40), 0, 1);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_40 >= 0)
			{
				Function_575(iParam0, 12, "VS_AIM_BONUS");
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_44 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_564(iParam0);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_301(TO_FLOAT(iParam0->f_44), 0, 1);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_44 >= 0)
			{
				if (iParam0->f_20 != 4294967295)
				{
					DECOR_SET_BOOL(StackVal, "HolsterTheDamnedThing", true);
					Function_575(iParam0, 13, "VS_WAIT_FOR_START_HOLSTER");
				}
				else
				{
					Function_575(iParam0, 14, "VS_OUTRO");
				}
			}
			break;
		
		case 0x0000000D:
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_104 < 15.0f)
			{
				Function_575(iParam0, 14, "VS_OUTRO");
			}
			break;
		
		case 0x0000000E:
			if (!DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_20 != 4294967295)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0.6f)
				{
					UI_SET_STYLE("MPSplashTitle", (4 + iVar0));
					Function_575(iParam0, 15, "VS_OUTRO_FADE");
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_175(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_564(int iParam0) //Position: 0x13448 / 78920
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0->f_44, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", iParam0->f_48);
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_565(int iParam0) //Position: 0x134D6 / 79062
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", "mp_plist_match_bonus");
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_566(bool bParam0) //Position: 0x13575 / 79221
{
	bool bVar0;
	
	bVar0 = Function_567();
	GIVE_WEAPON_TO_ACTOR(bParam0, bVar0, 0, 1, 1);
	ACTOR_SET_WEAPON_AMMO(bParam0, bVar0, 9.0f);
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar0, 1);
	return;
}

int Function_567() //Position: 0x1359F / 79263
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		switch (UNK_0xDB679ED9((*&Global_83591 + 276)[iVar02]))
		{
			case 0x00000027:
			case 0x00000028:
				return (*&Global_83591 + 276)[iVar02];
			
			default:
		}
		iVar0++;
	}
	return 5;
}

void Function_568(char* cParam0, int iParam1) //Position: 0x135E4 / 79332
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_306(iParam1, 1) };
	UI_SET_TEXT(cParam0, &Var0);
	return;
}

void Function_569(bool bParam0) //Position: 0x135FB / 79355
{
	struct<16> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_257(bParam0) };
	UI_SET_STRING("Generic_Dbuffer128_0", &Var0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	return;
}

var Function_570(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x13653 / 79443
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_18(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Victory", 1, 1);
	}
	Function_571(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_571(var uParam0, int iParam1) //Position: 0x136CB / 79563
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_572(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_572(var uParam0, bool bParam1) //Position: 0x136F1 / 79601
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.004f, 1.051545f, -0.924536f, 9.279476f, -164.752f, 29.3796f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.180749f, 1.166322f, -0.246788f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.512771f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_573(vector3 vParam0) //Position: 0x1378C / 79756
{
	vector3 vVar0;
	
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 100.0f);
	Function_574(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	return StackVal, StackVal, vParam0;
}

void Function_574(bool bParam0) //Position: 0x137EF / 79855
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

void Function_575(var uParam0, int iParam1, int iParam2) //Position: 0x138A2 / 80034
{
	uParam0->f_56 = iParam1;
	uParam0->f_104 = 0.0f;
	return;
}

void Function_576() //Position: 0x138B3 / 80051
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

bool Function_577(var uParam0, int iParam1) //Position: 0x138C5 / 80069
{
	switch (iParam1)
	{
		case 0xFFFFFFFE:
			Function_526(uParam0, "MP_endgame_OneTeamLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFD:
			Function_526(uParam0, "MP_endgame_EverybodyLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFC:
			Function_526(uParam0, "MP_endgame_OutOfTime", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFB:
			Function_526(uParam0, "MP_Endgame_draw", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_578(int iParam0, int iParam1) //Position: 0x13980 / 80256
{
	iParam0->f_164 = iParam1;
	return;
}

void Function_579() //Position: 0x1398C / 80268
{
	var uVar0;
	
	Function_586(&Local_443 + 644, !Function_399());
	uVar0 = Function_581(&Local_443 + 644, 1);
	Function_580(&Local_443, uVar0);
	return;
}

void Function_580(var uParam0, bool bParam1) //Position: 0x139B3 / 80307
{
	if (IS_VOLUME_VALID(bParam1))
	{
		uParam0->f_8 = bParam1;
	}
	return;
}

var Function_581(int iParam0, int iParam1) //Position: 0x139CA / 80330
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9[60];
	int iVar70;
	
	iVar3 = 0;
	iParam0->f_2736 = NET_GET_NET_TIME();
	bVar6 = GET_LOCAL_SLOT();
	iVar7 = Function_149();
	bVar8 = (IS_VOLUME_VALID(iParam0->f_1448) && iParam1);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1444)
	{
		iParam0[iVar06]->f_20 = 0.0f;
		if (FIRE_ARE_ANY_FLAMES_IN_VOLUME((*iParam0)[iVar06]))
		{
			iParam0[iVar06]->f_20 = -1000.0f;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if ((iParam0 + 1460[iVar1106])->f_420)
			{
				bVar2 = false;
				while (bVar2 <= 16)
				{
					if ((iParam0 + 1460[iVar1106] + 28[bVar26])->f_16)
					{
						if (iVar1 != 2)
						{
							if (IS_VOLUME_VALID(StackVal) && iParam1)
							{
								if (IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 1460[iVar1106] + 28[bVar26])))
								{
									iParam0[iVar06]->f_20 = (iParam0[iVar06]->f_20 + (307.0f * (*iParam0 + 1460)[iVar1106]));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 2.0f, 0.0f));
								}
							}
							else if (bVar8)
							{
								if (IS_POINT_IN_VOLUME(*(iParam0 + 1460[iVar1106] + 28[bVar26]), iParam0->f_1448))
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 1.0f, 0.5f));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
								}
							}
							else
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
							}
						}
						else if (bVar2 != bVar6 || Function_584(iParam0 + 1460[iVar1106] + 28[bVar26], iParam0->f_2736))
						{
							iParam0[iVar06]->f_20 = (StackVal + Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
						}
						else
						{
							(iParam0 + 1460[iVar1106] + 28[bVar26])->f_16 = 0;
						}
					}
					bVar2++;
				}
			}
			iVar1++;
		}
		bVar2 = false;
		while (bVar2 <= 16)
		{
			if (bVar2 != bVar6)
			{
				if (IS_SLOT_VALID(bVar2))
				{
					if (iVar7 != 4294967295 || Function_150(bVar2, 1, 0) == iVar7)
					{
						if (Function_513(bVar2, &Var4))
						{
							if (StackVal && (Var4 < 4294967295 - iParam0->f_2736) >= 15.0f)
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_585(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0[Var46] + 8), *(iParam0 + 1460[2106]), 0x3f800000, 0x3f800000));
							}
						}
					}
				}
			}
			bVar2++;
		}
		if (bLocal_106)
		{
			if ((iVar3 % 10) == 0)
			{
				PRINTNL();
				Function_2();
				PRINTSTRING("Weighting,");
			}
			PRINTSTRING(GET_OBJECT_NAME((*iParam0)[iVar06]));
			PRINTSTRING(",");
			Function_583(iParam0[iVar06]->f_20);
			PRINTSTRING(",");
			iVar3++;
		}
		iVar0++;
	}
	if (bLocal_106)
	{
		PRINTNL();
	}
	iVar70 = 1;
	iVar0 = 1;
	while (iVar0 < (iParam0->f_1444 - 1))
	{
		if (iParam0[iVar06]->f_20 < iParam0[iVar9[0]6]->f_20)
		{
			iVar9[0] = iVar0;
			iVar70 = 1;
		}
		else if (iParam0[iVar06]->f_20 != iParam0[iVar9[0]6]->f_20)
		{
			iVar9[iVar70] = iVar0;
			iVar70++;
		}
		iVar0++;
	}
	iVar0 = iVar9[(RAND_INT_RANGE(0, 10000) % iVar70)];
	iParam0->f_1452 = iVar0;
	(iParam0 + 1452)->f_4 = NET_GET_NET_TIME();
	Function_582(iParam0 + 1452);
	return (*iParam0)[iVar06];
}

void Function_582(int iParam0) //Position: 0x13DF7 / 81399
{
	Local_73[GET_LOCAL_SLOT()2] = { StackVal, *iParam0 };
	return;
}

void Function_583(bool bParam0) //Position: 0x13E0A / 81418
{
	if (bLocal_106)
	{
		PRINTINT(ROUND(bParam0));
	}
	return;
}

var Function_584(var uParam0, float fParam1) //Position: 0x13E1D / 81437
{
	return (fParam1 - uParam0->f_12) >= 20.0f;
}

float Function_585(vector3 vParam0, vector3 vParam3, struct<25> Param6) //Position: 0x13E30 / 81456
{
	float fVar0;
	float fVar1;
	
	if (fParam14 != 0.0f)
	{
		return 0.0f;
	}
	fVar0 = (VDIST2(vParam0, vParam3) * fParam13);
	fVar1 = 0.0f;
	if (StackVal >= fVar0)
	{
		fVar1 = (StackVal * Param6);
	}
	else if (fVar0 >= Param6.f_12)
	{
		fVar1 = (Param6.f_16 * Param6);
	}
	else if (fVar0 >= Param6.f_20)
	{
		fVar1 = (Param6.f_24 * Param6);
	}
	return (fVar1 * fParam14);
}

void Function_586(int iParam0, bool bParam1) //Position: 0x13E9A / 81562
{
	(iParam0 + 1460[0106])->f_420 = 1;
	if (bParam1)
	{
		Function_587(iParam0, 0, Function_351(Function_149()));
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	else
	{
		Function_587(iParam0, 0, 4294967295);
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	return;
}

void Function_587(int iParam0, int iParam1, int iParam2) //Position: 0x13EDF / 81631
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 != GET_LOCAL_SLOT())
		{
			Function_588(iParam0, iVar0, iParam1, iParam2);
		}
		else
		{
			(iParam0 + 1460[iParam1106] + 28[iVar06])->f_16 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_588(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x13F20 / 81696
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	(iParam0 + 1460[iParam2106] + 28[bParam16])->f_16 = 0;
	if (IS_SLOT_VALID(bParam1))
	{
		bVar3 = false;
		if (iParam3 != 4294967295 || Function_150(bParam1, 1, 0) != iParam3)
		{
			bVar4 = GET_SLOT_ACTOR(bParam1);
			if (IS_ACTOR_VALID(bVar4))
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					Function_121(bVar4, &vVar0);
					bVar3 = true;
				}
			}
			else if (Function_154(bParam1))
			{
				if (!Function_151(bParam1, 2, 1))
				{
					if (GET_SLOT_POSITION(bParam1, &vVar0))
					{
						bVar3 = true;
					}
				}
			}
			if (bVar3)
			{
				(iParam0 + 1460[iParam2106] + 28[bParam16])->f_16 = 1;
				*(iParam0 + 1460[iParam2106] + 28[bParam16]) = { StackVal, StackVal, vVar0 };
				if (IS_VOLUME_VALID(iParam0->f_1448))
				{
					(iParam0 + 1460[iParam2106] + 28[bParam16])->f_20 = IS_POINT_IN_VOLUME(vVar0, iParam0->f_1448);
				}
				else
				{
					(iParam0 + 1460[iParam2106] + 28[bParam16])->f_20 = 0;
				}
			}
		}
	}
}

int Function_589() //Position: 0x14005 / 81925
{
	return Function_590(&Local_443 + 452, &Local_118 + 440);
}

int Function_590(int iParam0, int iParam1) //Position: 0x14019 / 81945
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (Function_263(iParam0 + 32, iParam1 + 12))
	{
		iVar6 = Function_149();
		if (iVar6 != 4294967295)
		{
			bVar7 = GET_LOCAL_SLOT();
			if (bVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 24)[bVar7];
				if (bVar8 != 4294967295)
				{
					if (Function_377(Function_369(), iVar6, &vVar0, &vVar3, bVar8, (*iParam1 + 92)[iVar6]))
					{
						if (Function_214(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
						{
							return 1;
						}
						return 2;
					}
					return 0;
				}
				return 0;
			}
			return 2;
		}
		return 2;
	}
	return 2;
}

bool Function_591(int iParam0) //Position: 0x14095 / 82069
{
	if (!IS_OBJECT_VALID(Function_367(iParam0, 0)))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(Function_367(iParam0, 1)))
	{
		return 0;
	}
	return 1;
}

void Function_592(int iParam0, int iParam1) //Position: 0x140BA / 82106
{
	iParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_593(int iParam0) //Position: 0x140C9 / 82121
{
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MPSplash");
	*iParam0 = 12;
	return;
}

void Function_594(int iParam0, vector3 vParam1) //Position: 0x140F2 / 82162
{
	Function_42(iParam0 + 44, 512);
	*(iParam0 + 72) = { StackVal, StackVal, vParam1 };
}

vector3 Function_595(bool bParam0, var uParam1) //Position: 0x1410E / 82190
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_67(uParam1, 8))
	{
		bVar0 = Function_367(bParam0, 0);
		bVar1 = Function_367(bParam0, 1);
		Function_232(bVar0);
		Function_232(bVar1);
		return StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_232(bVar1), Function_232(bVar0), StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f);
	}
	bVar2 = Function_345(bParam0);
	Function_232(bVar2);
	return StackVal, StackVal, Function_232(bVar2);
}

int Function_596() //Position: 0x1414D / 82253
{
	return Function_597(&Local_443 + 452, &Local_118 + 440, 0);
}

int Function_597(int iParam0, int iParam1, bool bParam2) //Position: 0x14162 / 82274
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (Function_263(iParam0 + 32, iParam1 + 12))
	{
		if (!bParam2)
		{
			bVar7 = GET_LOCAL_SLOT();
			if (bVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 24)[bVar7];
				if (bVar8 != 4294967295)
				{
					bVar6 = Function_375(Function_369(), &vVar0, &vVar3, bVar8, 16);
				}
				else
				{
					return 0;
				}
			}
			return 2;
		}
		bVar6 = Function_375(Function_369(), &vVar0, &vVar3, bLocal_69, bLocal_68);
		if (bVar6)
		{
			if (Function_214(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
			{
				return 1;
			}
			return 2;
		}
		return 0;
	}
	return 2;
}

void Function_598(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x141E6 / 82406
{
	if (bParam1)
	{
		*iParam0 = 9;
	}
	else if (bParam4)
	{
		*iParam0 = 8;
	}
	else
	{
		*iParam0 = 0;
	}
	iParam0->f_64 = 0.0f;
	iParam0->f_44 = 0;
	iParam0->f_48 = 0;
	iParam0->f_152 = 4294967295;
	iParam0->f_12 = 2;
	Function_610(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_208(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_509(iParam0, 2);
	Function_608(iParam0);
	Function_293(iParam0);
	Function_607(iParam0);
	Function_605(iParam0);
	Function_603(iParam0);
	Function_601(iParam0);
	Function_599(iParam0);
	if (bParam2)
	{
		Function_42(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_42(iParam0 + 44, 8);
		Function_202(iParam0 + 192);
	}
	Function_289(iParam0, bParam4);
	Function_94(8388608, 0);
}

void Function_599(var uParam0) //Position: 0x142AE / 82606
{
	Function_510(uParam0, 82621);
	return;
}

int Function_600() //Position: 0x142BD / 82621
{
	return 0;
}

void Function_601(var uParam0) //Position: 0x142C4 / 82628
{
	Function_561(uParam0, 82643);
	return;
}

int Function_602() //Position: 0x142D3 / 82643
{
	return 1;
}

void Function_603(var uParam0) //Position: 0x142DA / 82650
{
	Function_578(uParam0, 82665);
	return;
}

void Function_604() //Position: 0x142E9 / 82665
{
	return;
}

void Function_605(int iParam0) //Position: 0x142EF / 82671
{
	Function_606(iParam0, 82665);
	return;
}

void Function_606(var uParam0, int iParam1) //Position: 0x142FE / 82686
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_607(int iParam0) //Position: 0x1430A / 82698
{
	Function_523(iParam0, 82665);
	return;
}

void Function_608(int iParam0) //Position: 0x14319 / 82713
{
	Function_514(iParam0, 82728);
	return;
}

void Function_609(var uParam0) //Position: 0x14328 / 82728
{
	uParam0 = uParam0;
	return;
}

void Function_610(int iParam0, struct<57> Param1) //Position: 0x14332 / 82738
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_611(int iParam0, bool bParam1) //Position: 0x14346 / 82758
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3[2];
	int iVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	
	Function_325(1, 1);
	iParam0->f_16 = 1;
	Function_325(2, 0);
	Function_450(iParam0);
	iParam0->f_20 = 4294967295;
	if (bParam1)
	{
		Function_612(&iVar1, &iVar2, 1, 1);
		(*iParam0 + 92)[0] = (iVar1 + (iVar1 % 2));
		(*iParam0 + 92)[1] = (iVar2 + (iVar2 % 2));
		bVar0 = false;
		while (bVar0 <= 16)
		{
			(*iParam0 + 24)[bVar0] = 4294967295;
			if (IS_SLOT_VALID(bVar0))
			{
				if (Function_154(bVar0))
				{
					if (Function_151(bVar0, 2048, 1))
					{
						iVar6 = Function_150(bVar0, 0, 0);
						if (iVar6 > 0)
						{
							(*iParam0 + 24)[bVar0] = uVar3[iVar6];
							uVar3[iVar6]++;
						}
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		fVar7 = 0.0f;
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_313(bVar0))
			{
				if (Function_151(bVar0, 2048, 1))
				{
					bVar8++;
				}
			}
			bVar0++;
		}
		fVar9 = (TO_FLOAT(16) / TO_FLOAT(bVar8));
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_313(bVar0))
			{
				if (Function_151(bVar0, 2048, 1))
				{
					(*iParam0 + 24)[bVar0] = FLOOR((fVar7 * fVar9));
					fVar7 = (fVar7 + 1.0f);
				}
				else
				{
					(*iParam0 + 24)[bVar0] = 4294967295;
				}
			}
			else
			{
				(*iParam0 + 24)[bVar0] = 4294967295;
			}
			bVar0++;
		}
	}
	Function_316(iParam0 + 12);
	return;
}

void Function_612(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x1449F / 83103
{
	bool bVar0;
	
	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		switch (Function_150(bVar0, bParam2, bParam3))
		{
			case 0x00000000:
				*uParam0++;
				break;
			
			case 0x00000001:
				*uParam1++;
				break;
		}
		bVar0++;
	}
}

bool Function_613(bool bParam0) //Position: 0x144F2 / 83186
{
	return IS_OBJECT_VALID(Function_345(bParam0));
}

bool Function_614() //Position: 0x14500 / 83200
{
	return (Function_398() == 4294967295 && !Function_403());
}

var Function_615(int iParam0) //Position: 0x14510 / 83216
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 1;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_154(bVar0))
			{
				if (Function_151(bVar0, 2048, 1))
				{
					Stack.Push(bVar0);
					Call_Loc(iParam0);
					if (StackVal)
					{
						iVar1 = 1;
					}
					else
					{
						NET_LOG(1, "GameSync", "Slot #%s, (%s) invalid because their gamedata isn't valid yet", I2STR(bVar0), GET_SLOT_NAME(bVar0), false, false);
						iVar2 = 0;
					}
				}
				else
				{
					NET_LOG(1, "GameSync", "Slot #%s, (%s) skipped because they haven't joined the game", I2STR(bVar0), GET_SLOT_NAME(bVar0), false, false);
				}
			}
			else
			{
				NET_LOG(1, "GameSync", "Slot #%s, (%s)'s slot is valid, but has invalid CBA data", I2STR(bVar0), GET_SLOT_NAME(bVar0), false, false);
			}
		}
		bVar0++;
	}
	return (iVar1 && iVar2);
}

var Function_616(bool bParam0) //Position: 0x14671 / 83569
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_73, bParam0);
}

int Function_617() //Position: 0x1467E / 83582
{
	bool bVar0;
	
	bVar0 = Function_13();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_618() //Position: 0x14698 / 83608
{
	if (bLocal_106)
	{
		Function_2();
		PRINTSTRING("Game Started");
		PRINTNL();
	}
	return;
}

bool Function_619() //Position: 0x146BB / 83643
{
	int iVar0;
	
	if (!IS_LAYOUTREF_VALID(Function_369()))
	{
		return 0;
	}
	Local_254.f_656 = Function_369();
	Local_254.f_648 = Function_736();
	if (!Function_658(&Local_254 + 656))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(Function_13()))
	{
		DESTROY_ACTOR(Function_13());
	}
	Function_408(4294967295);
	Function_653(&Local_443 + 452, &Local_118 + 440, !Function_399());
	NET_ACTOR_SET_EQUIP_TYPE(3);
	if (Global_83591 == 0)
	{
		Global_83591 = 10;
	}
	NET_SCRIPTMSG_REGISTER_HANDLER(5, 87196);
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 85696);
	Function_637(0);
	iVar0 = NET_GET_PLAYMODE();
	if (iVar0 != 1 || iVar0 != 3)
	{
		Global_84364.f_776 = 4294967295;
	}
	else
	{
		Global_84364.f_776 = Function_160();
	}
	Function_5(0);
	Function_598(&Local_443, 1, 0, 0, 0);
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\Ranch08");
	if (Function_399())
	{
		Function_632(&Local_443 + 564, 0, 84517, "%d");
	}
	else
	{
		Function_632(&Local_443 + 564, 1, 83979, "%d");
	}
	Function_620(1);
	Local_254.f_628 = 4294967295;
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_118, 136);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_73, 33);
	return 1;
}

void Function_620(int iParam0) //Position: 0x147D7 / 83927
{
	Function_621(1, iParam0);
	return;
}

void Function_621(int iParam0, bool bParam1) //Position: 0x147E3 / 83939
{
	if (bParam1)
	{
		Function_42(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_39(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

var Function_622(int iParam0, int iParam1) //Position: 0x1480B / 83979
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = Function_149();
	iVar2 = Function_351(iVar1);
	Function_631(iParam0 + 4, Function_518(), &iVar0);
	Function_631(iParam1 + 4, Function_405(iVar2), &iVar0);
	if (Function_402())
	{
		bVar3 = Function_471(0);
		if (bVar3 != 4294967294)
		{
			if (Function_452(bVar3))
			{
				Function_631(iParam0 + 12, 1, &iVar0);
				Function_631(iParam1 + 12, 0, &iVar0);
				iParam0->f_20 = Function_630();
				iParam1->f_20 = Function_629();
			}
			else
			{
				Function_631(iParam0 + 12, 0, &iVar0);
				Function_631(iParam1 + 12, 1, &iVar0);
				iParam0->f_20 = Function_629();
				iParam1->f_20 = Function_630();
			}
		}
		else
		{
			Function_631(iParam0 + 12, 0, &iVar0);
			Function_631(iParam1 + 12, 0, &iVar0);
			iParam0->f_20 = Function_629();
			iParam1->f_20 = Function_629();
		}
	}
	else
	{
		Function_627();
		if (iVar1 >= 4294967295)
		{
			if (Function_470(iVar1, 4294967291))
			{
				Function_631(iParam0 + 12, 1, &iVar0);
				iParam0->f_20 = Function_626();
			}
			else
			{
				Function_631(iParam0 + 12, 0, &iVar0);
				iParam0->f_20 = Function_625();
			}
		}
		if (iVar2 >= 4294967295)
		{
			if (Function_470(iVar2, 4294967291))
			{
				Function_631(iParam1 + 12, 1, &iVar0);
				iParam1->f_20 = Function_624();
			}
			else
			{
				Function_631(iParam1 + 12, 0, &iVar0);
				iParam1->f_20 = Function_623();
			}
		}
	}
	return iVar0;
}

var Function_623() //Position: 0x14945 / 84293
{
	return "n <SWAG_R>";
}

var Function_624() //Position: 0x14957 / 84311
{
	return " <SWAG_R_RET>";
}

var Function_625() //Position: 0x1496D / 84333
{
	return "n <SWAG_B>";
}

var Function_626() //Position: 0x1497F / 84351
{
	return " <SWAG_B_RET>";
}

void Function_627() //Position: 0x14995 / 84373
{
	bool bVar0;
	int iVar1;
	
	if (!Function_412())
	{
		bVar0 = Function_518();
		iVar1 = Function_405(Function_351(Function_149()));
		if ((iVar1 - bVar0) > 2)
		{
			Function_628();
		}
	}
	return;
}

void Function_628() //Position: 0x149BE / 84414
{
	Local_254.f_744 = 1;
	return;
}

var Function_629() //Position: 0x149CA / 84426
{
	return "       ";
}

var Function_630() //Position: 0x149DA / 84442
{
	return "n <SWAG_Y>";
}

int Function_631(int iParam0, bool bParam1, int iParam2) //Position: 0x149EC / 84460
{
	if (*iParam0 != bParam1)
	{
		*iParam0 = bParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

void Function_632(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0x14A06 / 84486
{
	uParam0->f_76 = 0;
	uParam0->f_64 = uParam1;
	uParam0->f_48 = iParam2;
	uParam0->f_60 = iParam3;
}

var Function_633(int iParam0, int iParam1) //Position: 0x14A25 / 84517
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	
	bVar1 = GET_LOCAL_SLOT();
	iVar2 = Function_159(15);
	bVar3 = 4294967295;
	bVar4 = 4294967295;
	iVar5 = 0;
	bVar6 = 4294967295;
	bVar7 = 4294967295;
	bVar8 = false;
	while (bVar8 <= 16)
	{
		if (bVar8 != bVar1)
		{
			if (Function_313(bVar8))
			{
				iVar9 = Function_552(15, bVar8);
				if (iVar9 >= iVar2)
				{
					iVar5++;
					if (iVar9 >= bVar4)
					{
						bVar4 = iVar9;
						bVar3 = bVar8;
					}
				}
				else if (iVar9 >= bVar7)
				{
					bVar7 = iVar9;
					bVar6 = bVar8;
				}
			}
		}
		bVar8++;
	}
	Function_631(iParam0, iVar5, &iVar0);
	Function_631(iParam0 + 4, iVar2, &iVar0);
	Function_631(iParam0 + 8, bVar1, &iVar0);
	if (Function_636(1, 1))
	{
		bVar10 = true;
		iParam0->f_20 = Function_630();
	}
	else
	{
		bVar10 = false;
		iParam0->f_20 = Function_629();
	}
	Function_631(iParam0 + 12, bVar10, &iVar0);
	if (*iParam0 == 0)
	{
		Function_631(iParam1, 1, &iVar0);
		Function_631(iParam1 + 4, bVar7, &iVar0);
		Function_631(iParam1 + 8, bVar6, &iVar0);
	}
	else
	{
		Function_631(iParam1, 0, &iVar0);
		Function_631(iParam1 + 4, bVar4, &iVar0);
		Function_631(iParam1 + 8, bVar3, &iVar0);
	}
	if (StackVal >= 4294967295)
	{
		if (Function_634(StackVal, 1, 1))
		{
			bVar10 = true;
			iParam1->f_20 = Function_630();
		}
		else
		{
			bVar10 = false;
			iParam1->f_20 = Function_629();
		}
		Function_631(iParam1 + 12, bVar10, &iVar0);
	}
	else
	{
		Function_631(iParam1 + 12, 0, &iVar0);
		iParam1->f_20 = Function_629();
	}
	return iVar0;
}

bool Function_634(bool bParam0, int iParam1, bool bParam2) //Position: 0x14B86 / 84870
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_636(iParam1, bParam2);
	}
	if (!Function_154(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_635(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_128 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_635(int iParam0) //Position: 0x14C07 / 84999
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
			break;
		
		case 0x00000002:
			return "nFRD_SPOON";
			break;
		
		case 0x00000004:
			return "FRD_IN_VOL";
			break;
		
		case 0x00000008:
			return "MP_TRANSIENT_BIT_FRD_IN_SPOONHOLDER_POSSE";
			break;
		
		case 0x00100000:
			return "IN_AIR";
			break;
		
		case 0x00200000:
			return "MOUNTED";
			break;
		
		case 0x00400000:
			return "KILLED BY BLINDFIRE";
			break;
		
		case 0x00800000:
			return "KILLED IN COVER";
			break;
	}
	return "UNKNOWN";
}

bool Function_636(int iParam0, bool bParam1) //Position: 0x14CF9 / 85241
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_637(int iParam0) //Position: 0x14D19 / 85273
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_43();
	Function_44();
	switch (iParam0)
	{
		case 0x00000001:
			Function_274(12288);
			Function_92(16384);
			break;
		
		case 0x00000002:
			Function_274(20480);
			Function_92(8192);
			break;
		
		default:
			Function_92(28672);
			break;
	}
	Function_92(2048);
	Function_638(0, 0);
	Function_228();
	return;
}

void Function_638(bool bParam0, bool bParam1) //Position: 0x14DDD / 85469
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_643(&Global_78480);
	Function_642(&Global_78480);
	uVar0 = Function_159(37);
	Function_640();
	if (!bParam0)
	{
		Function_158(37, uVar0);
	}
	Function_94(18264, 0);
	Function_639();
	return;
}

void Function_639() //Position: 0x14E29 / 85545
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_640() //Position: 0x14E48 / 85576
{
	Function_641(&Global_78480 + 220);
	return;
}

void Function_641(int iParam0) //Position: 0x14E57 / 85591
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_642(int iParam0) //Position: 0x14E78 / 85624
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_643(int iParam0) //Position: 0x14E9C / 85660
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_644(var uParam0) //Position: 0x14EC0 / 85696
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 11);
	Function_649(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_443 + 644, Var0);
	if (Function_614())
	{
		return;
	}
	if (StackVal != GET_LOCAL_SLOT())
	{
		return;
	}
	switch (StackVal)
	{
		case 0x00000002:
			Function_647(0, &Local_443 + 444);
			break;
		
		case 0x00000001:
			if (IS_SLOT_VALID(Var0))
			{
				if (!Function_452(Var0))
				{
					if (Function_155())
					{
						Function_301(10.0f, 0, 1);
					}
					Function_645(&Local_443 + 452, &Local_118 + 440, Var0);
				}
				if (Function_204(32))
				{
					if (StackVal == GET_LOCAL_SLOT())
					{
						if (IS_SLOT_VALID(Var0))
						{
							if (!Function_452(Var0))
							{
								if (Local_254.f_752 <= 15)
								{
									if (Var0.f_12 != 22 || Var0.f_12 != 25)
									{
										Local_254.f_752++;
										if (Local_254.f_752 > 3)
										{
											Local_254.f_752 = 100;
											if (!HAS_ACHIEVEMENT_BEEN_PASSED(61))
											{
												AWARD_ACHIEVEMENT(61);
											}
										}
									}
								}
								if (Function_395(&Local_118 + 440))
								{
									if ((&Local_443 + 452)->f_104 > 3)
									{
										if (!HAS_ACHIEVEMENT_BEEN_PASSED(60))
										{
											AWARD_ACHIEVEMENT(60);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	return;
}

void Function_645(var uParam0, var uParam1, int iParam2) //Position: 0x14FDA / 85978
{
	struct<5> Var0;
	
	if (uParam1->f_20 == 4294967295)
	{
		Var0.f_4 = Function_646(uParam0->f_104);
		uParam0->f_104++;
		UI_SET_TEXT("XPComboLevel", Function_320(uParam0->f_104));
		UI_REFRESH("XPComboLevel");
		PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_KILL_RISER_MASTER", &Var0);
		if (iParam2 == uParam0->f_96)
		{
			Function_301(100.0f, "xp_standoff_kill_target", 1);
		}
	}
	return;
}

var Function_646(int iParam0) //Position: 0x15078 / 86136
{
	return (4294966996 + iParam0 * 100);
}

void Function_647(int iParam0, int iParam1) //Position: 0x15086 / 86150
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_13();
	iVar1 = Function_648(iParam0, iParam1);
	switch (iParam0)
	{
		case 0x00000000:
			switch (iVar1)
			{
				case 0x00000002:
					if (IS_ACTOR_VALID(bVar0))
					{
						if (IS_ACTOR_ALIVE(bVar0))
						{
							Function_268("mp_griefing_teamkill_offense", 0x41200000, 1, 0, 2, 1, 0);
							KILL_ACTOR(Function_13());
						}
					}
					break;
				
				case 0x00000000:
					Function_268("mp_griefing_teamkill_warning", 0x41200000, 1, 0, 2, 1, 0);
					break;
				
				case 0x00000001:
					Function_268("mp_griefing_teamkill_warning_2", 0x41200000, 1, 0, 2, 1, 0);
					break;
			}
			break;
	}
	return;
}

int Function_648(int iParam0, bool bParam1) //Position: 0x15168 / 86376
{
	(*bParam1)[iParam0]++;
	switch ((*bParam1)[iParam0])
	{
		case 0x00000001:
			return 0;
		
		case 0x00000002:
			return 1;
		
		default:
	}
	return 2;
}

void Function_649(var uParam0, struct<29> Param1) //Position: 0x15198 / 86424
{
	bool bVar0;
	struct<9> Var1;
	
	bVar0 = GET_LOCAL_SLOT();
	if (StackVal == 1)
	{
		if (StackVal != bVar0)
		{
			if (!Function_155() || Function_149() != Function_150(Param1, 1, 0))
			{
				Function_651(StackVal, StackVal, uParam0, *(&Param1 + 16));
			}
		}
	}
	if (Param1 == bVar0)
	{
		Function_2();
		PRINTSTRING("Died,");
		bVar4 = Function_13();
		if (IS_ACTOR_VALID(bVar4))
		{
			Function_121(bVar4, &vVar1);
			PRINTFLOAT(vVar1.x);
			PRINTSTRING(",");
			PRINTFLOAT(vVar1.y);
			PRINTSTRING(",");
			PRINTFLOAT(vVar1.z);
			PRINTSTRING(",");
		}
		else
		{
			PRINTSTRING(",,,");
		}
		bVar5 = Param1.f_12;
		if (Function_199(bVar5))
		{
			GET_WEAPON_DISPLAY_NAME(bVar5);
		}
		PRINTSTRING(",");
		bVar6 = true;
		switch (StackVal)
		{
			case 0x00000003:
				PRINTSTRING("nSuicide,,");
				bVar6 = false;
				break;
			
			case 0x00000001:
				PRINTSTRING("Player,");
				break;
			
			case 0x00000002:
				PRINTSTRING("nTeamKill,");
				break;
			
			case 0x00000006:
				PRINTSTRING("KO,");
				break;
			
			case 0x00000004:
				PRINTSTRING("NPC,");
				PRINTSTRING(Function_650(StackVal));
				PRINTSTRING(",");
				bVar6 = false;
				break;
			
			case 0x00000005:
				PRINTSTRING("Animal,");
				PRINTINT(StackVal);
				PRINTSTRING(",");
				bVar6 = false;
				break;
			
			case 0x00000000:
				PRINTSTRING("nDefault,,");
				bVar6 = false;
				break;
			
			default:
				PRINTSTRING("Other,,");
				bVar6 = false;
				break;
		}
		if (bVar6)
		{
			bVar4 = GET_SLOT_ACTOR(StackVal);
			if (IS_ACTOR_VALID(bVar4))
			{
				Function_121(bVar4, &vVar1);
				PRINTFLOAT(vVar1.x);
				PRINTSTRING(",");
				PRINTFLOAT(vVar1.y);
				PRINTSTRING(",");
				PRINTFLOAT(vVar1.z);
				PRINTSTRING(",");
			}
			else
			{
				PRINTSTRING(",,,");
			}
		}
		else
		{
			PRINTSTRING(",,,");
		}
		if (Param1.f_28)
		{
			PRINTSTRING("HeadShot");
		}
		PRINTNL();
	}
}

var Function_650(int iParam0) //Position: 0x153A4 / 86948
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000019:
			iVar0 = "gang_name_dnd";
			break;
		
		case 0x0000000E:
			iVar0 = "gang_name_rustlers";
			break;
		
		case 0x00000018:
			iVar0 = "gang_name_treasure";
			break;
		
		default:
			iVar0 = "proc_grp_neutral";
			break;
	}
	return iVar0;
}

void Function_651(int iParam0, vector3 vParam1) //Position: 0x15426 / 87078
{
	(iParam0 + 1460[2106])->f_416 = ((iParam0 + 1460[2106])->f_416 + 1 % 16);
	*(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166]) = { StackVal, StackVal, vParam1 };
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_12 = NET_GET_NET_TIME();
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_16 = 1;
}

void Function_652(var uParam0) //Position: 0x1549C / 87196
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &iVar0, 1);
	Function_411(iVar0);
	Function_409();
	Function_408(iVar0);
	return;
}

int Function_653(int iParam0, int iParam1, bool bParam2) //Position: 0x154B8 / 87224
{
	Function_657(iParam0 + 32);
	Function_657(iParam1 + 12);
	iParam0->f_96 = 4294967295;
	if (NET_IS_SESSION_HOST())
	{
		Function_611(iParam1, bParam2);
	}
	*iParam0 = 0;
	Function_388(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	UI_SET_STRING("mp_killchain_header", UI_GET_STRING("mp_plist_kills1"));
	iParam0->f_24 = 0;
	if (bParam2)
	{
		Function_298(iParam0, 8);
		Function_656(Function_369(), iParam0);
		Function_546(iParam0 + 48, Function_315(), 5, 0);
		Function_546(iParam0 + 48, Function_655(), 8, 0);
	}
	else
	{
		Function_654(Function_369(), iParam0);
	}
	UI_ENTER("HudMPNoFun");
	return 1;
}

void Function_654(bool bParam0, var uParam1) //Position: 0x15569 / 87401
{
	bool bVar0;
	
	bVar0 = Function_345(uParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	Function_232(bVar0);
	uParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(uParam0, "ShowdownStayOut", 2, Function_232(bVar0), 0.0f, 0.0f, 0.0f, (4.0f * 3.0f), (4.0f * 3.0f), (4.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	return;
}

bool Function_655() //Position: 0x155BB / 87483
{
	return "Custom/MP_Showdown";
}

void Function_656(bool bParam0, int iParam1) //Position: 0x155D6 / 87510
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	var uVar26;
	
	bVar0 = Function_367(bParam0, 0);
	bVar1 = Function_367(bParam0, 1);
	if (!(IS_OBJECT_VALID(bVar0) && IS_OBJECT_VALID(bVar1)))
	{
		return;
	}
	if (!(GET_OBJECT_POSITION(bVar0, &vVar2) && GET_OBJECT_POSITION(bVar1, &vVar5)))
	{
		return;
	}
	vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
	VSCALE(&vVar8, 0.5f);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
	VNORMALIZE(&vVar11);
	vVar17 = { 0.0f, -1.0f, 0.0f };
	VCROSS(&vVar17, &vVar11, &vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	VNORMALIZE(&vVar14);
	SET_OBJECT_POSITION(bVar0, vVar23);
	SET_OBJECT_ORIENTATION(bVar0, 0.0f, UNK_0x9C40E671(&vVar11), 0.0f);
	DECOR_SET_VECTOR(bVar0, "Right", vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	SET_OBJECT_POSITION(bVar1, vVar23);
	SET_OBJECT_ORIENTATION(bVar1, 0.0f, (UNK_0x9C40E671(&vVar11) + 180.0f), 0.0f);
	DECOR_SET_VECTOR(bVar1, "Right", vVar14);
	iParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(bParam0, "ShowdownStayOut", 2, vVar8, vVar11, (8.0f * 3.0f), (8.0f * 3.0f), (8.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_84);
	return;
}

void Function_657(int iParam0) //Position: 0x1574F / 87887
{
	*iParam0 = 0;
	return;
}

bool Function_658(int iParam0) //Position: 0x15759 / 87897
{
	int iVar0;
	
	switch (Function_147())
	{
		case 0x00000009:
			iVar0 = 3;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			break;
		
		case 0x00000008:
			iVar0 = 1;
			break;
		
		case 0x00000014:
			iVar0 = 2;
			break;
		
		default:
			return 0;
	}
	if (!Function_667(iVar0, iParam0, 0))
	{
		return 0;
	}
	if (!Function_659(*iParam0, &Local_443 + 644, !Function_399(), 1))
	{
	}
	return 1;
}

bool Function_659(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x157BD / 87997
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<9> Var5;
	bool bVar14;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return 0;
	}
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	if (bLocal_106)
	{
		Function_2();
		PRINTSTRING("Init_Layout,");
		PRINTSTRING(GET_OBJECT_NAME(bParam0));
		PRINTNL();
	}
	Function_666(iParam1 + 1460[0106]);
	Function_666(iParam1 + 1460[1106]);
	Function_666(iParam1 + 1460[2106]);
	(*iParam1 + 1460)[1106] = 0.1f;
	(*iParam1 + 1460)[2106] = -3.0f;
	(iParam1 + 1460[2106])->f_12 = 0.0f;
	(iParam1 + 1460[2106])->f_20 = 0.0f;
	(iParam1 + 1460[0106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_416 = 0;
	Function_665(iParam1);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = 1;
		bVar4 = Function_149();
	}
	else
	{
		iVar1 = 4294967295;
		iVar2 = 4294967295;
		bVar4 = 4294967295;
	}
	iParam1->f_1444 = 0;
	iVar3 = iVar1;
	while (iVar3 < iVar2)
	{
		if (bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_662(iVar3) };
			ITERATE_ON_PARTIAL_NAME(bVar0, &Var8);
		}
		else
		{
			ITERATE_ON_PARTIAL_NAME(bVar0, Function_661());
		}
		bVar14 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		while (IS_VOLUME_VALID(bVar14) && iParam1->f_1444 > 60)
		{
			if (bLocal_106)
			{
				Function_2();
				PRINTSTRING("Init_");
				PRINTSTRING(GET_OBJECT_NAME(bVar14));
				PRINTSTRING(",");
				GET_VOLUME_CENTER(bVar14, &vVar5);
				PRINTFLOAT(vVar5.x);
				PRINTSTRING(",");
				PRINTFLOAT(vVar5.y);
				PRINTSTRING(",");
				PRINTFLOAT(vVar5.z);
				PRINTSTRING(",");
			}
			if (iVar3 == bVar4)
			{
				(*iParam1)[iParam1->f_14446] = bVar14;
				if (DECOR_CHECK_EXIST(bVar14, "IntSpawn"))
				{
					iParam1[iParam1->f_14446]->f_4 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bVar14, "IntSpawn"));
					if (bLocal_106)
					{
						PRINTSTRING(GET_OBJECT_NAME(StackVal));
					}
				}
				GET_VOLUME_CENTER(bVar14, iParam1[iParam1->f_14446] + 8);
				iParam1->f_1444++;
			}
			if (bLocal_106)
			{
				PRINTNL();
			}
			bVar14 = GET_VOLUME_FROM_OBJECT(OBJECT_ITERATOR_NEXT(bVar0));
		}
		if (iParam1->f_1444 > 60)
		{
		}
		iVar3++;
	}
	iParam1->f_1448 = FIND_VOLUME_IN_LAYOUT(bParam0, "Interiors_Set");
	if (IS_VOLUME_VALID(iParam1->f_1448))
	{
	}
	if (iParam1->f_1444 < 0)
	{
	}
	if (bLocal_106)
	{
		Function_2();
		PRINTSTRING("Init_Respawn,");
		PRINTINT(bVar4);
		PRINTSTRING(",");
		PRINTINT(iParam1->f_1444);
		PRINTNL();
	}
	DESTROY_ITERATOR(bVar0);
	if (bParam3)
	{
		Function_660(iParam1 + 1460[0106], "Enemy Players");
		Function_660(iParam1 + 1460[1106], "Friendly Players");
		Function_660(iParam1 + 1460[2106], "Player Deaths");
	}
	return 1;
}

void Function_660(var uParam0, var uParam1) //Position: 0x15AAB / 88747
{
	return;
}

var Function_661() //Position: 0x15AB1 / 88753
{
	return "nSpawnVol_";
}

struct<24> Function_662(int iParam0) //Position: 0x15AC3 / 88771
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_664(), 24);
	stradd(&cVar0, Function_663(iParam0), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_663(int iParam0) //Position: 0x15ADF / 88799
{
	switch (iParam0)
	{
		case 0x00000000:
			return "A";
		
		case 0x00000001:
			return "B";
		
		case 0x00000002:
			return "C";
		
		case 0x00000003:
			return "D";
		
		case 0x00000004:
			return "E";
		
		case 0x00000005:
			return "F";
		
		case 0x00000006:
			return "G";
		
		case 0x00000007:
			return "H";
		
		case 0x00000008:
			return "I";
		
		case 0x00000009:
			return "J";
		
		case 0x0000000A:
			return "K";
		
		case 0x0000000B:
			return "L";
		
		case 0x0000000C:
			return "M";
		
		case 0x0000000D:
			return "N";
		
		case 0x0000000E:
			return "O";
		
		case 0x0000000F:
			return "P";
		
		default:
	}
	return "Z";
}

var Function_664() //Position: 0x15BA0 / 88992
{
	return "T_SpawnVol_";
}

void Function_665(int iParam0) //Position: 0x15BB4 / 89012
{
	iParam0->f_1452 = 4294967295;
	Function_582(iParam0 + 1452);
	return;
}

void Function_666(int iParam0) //Position: 0x15BC8 / 89032
{
	iParam0->f_4 = 225.0f;
	iParam0->f_8 = 157.0f;
	iParam0->f_12 = 625.0f;
	iParam0->f_16 = 53.0f;
	iParam0->f_20 = 2500.0f;
	iParam0->f_24 = 11.0f;
	*iParam0 = -1.0f;
	return;
}

bool Function_667(int iParam0, var uParam1, bool bParam2) //Position: 0x15C08 / 89096
{
	bool bVar0;
	struct<9> Var1;
	bool bVar23;
	int iVar24;
	float fVar25;
	bool bVar26;
	var uVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	
	if (!Function_735())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
	}
	Local_254.f_740 = iParam0;
	Local_254.f_504 = 4294967295;
	Local_254.f_508 = 1E+08.0f;
	Local_254.f_496 = 0;
	(*&Local_254 + 484)[0] = 4294967295;
	(*&Local_254 + 484)[1] = 4294967295;
	Local_254.f_512 = Function_733("nQueue_CTF");
	Local_254.f_656 = *uParam1;
	Local_254.f_744 = 0;
	Local_254.f_748 = 0;
	Local_254.f_752 = 0;
	Local_254.f_516 = FIND_VOLUME_IN_LAYOUT(*uParam1, Function_732());
	if (!IS_VOLUME_VALID(Local_254.f_516))
	{
		Function_731();
		Local_254.f_516 = CREATE_VOLUME_IN_LAYOUT(*uParam1, Function_732(), 3, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_731());
	}
	iVar24 = 2;
	if (Function_399())
	{
		iVar24 = 5;
		if (!Function_730(&bVar23, uParam1))
		{
			return 0;
		}
	}
	if (Function_82())
	{
		iVar24 = 1;
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	bVar0 = false;
	while (bVar0 <= iVar24)
	{
		strcpy(&cVar7, Function_729(), 64);
		if (Function_399())
		{
			if (bVar0 == 0)
			{
				bVar26 = START_OBJECT_ITERATOR(bVar23);
			}
			else
			{
				bVar26 = OBJECT_ITERATOR_NEXT(bVar23);
			}
			if (!IS_OBJECT_VALID(bVar26))
			{
				DESTROY_ITERATOR(bVar23);
				return 0;
			}
			(*&Local_254 + 520)[bVar05] = GET_VOLUME_FROM_OBJECT(bVar26);
		}
		else
		{
			stradd(&cVar7, Function_663(bVar0), 64);
			(*&Local_254 + 520)[bVar05] = FIND_VOLUME_IN_LAYOUT(*uParam1, &cVar7);
			if (!IS_VOLUME_VALID((*&Local_254 + 520)[bVar05]))
			{
				return 0;
			}
		}
		GET_VOLUME_SCALE((*&Local_254 + 520)[bVar05], &vVar1);
		fVar25 = Function_728(vVar1.x, vVar1.z);
		if (fVar25 > 2.5f)
		{
			strcpy(&cVar7, GET_OBJECT_NAME((*&Local_254 + 520)[bVar05]), 64);
			stradd(&cVar7, " was deemed too small and was scaled up.", 64);
			SCALE_VOLUME((*&Local_254 + 520)[bVar05], (2.5f / fVar25));
		}
		GET_OBJECT_POSITION((*&Local_254 + 520)[bVar05], &vVar4);
		(&Local_254 + 520[bVar05])->f_16 = CLEAR_AREA_OF_GRASS(vVar4, Function_728(vVar1.y, 3.0f));
		(&Local_254 + 520[bVar05])->f_4 = "";
		(&Local_254 + 520[bVar05])->f_12 = "";
		(&Local_254 + 520[bVar05])->f_8 = "";
		if (!(Function_399() || Function_82()))
		{
			if (bVar0 == Function_149())
			{
				uVar27 = Function_727();
			}
			else
			{
				uVar27 = Function_726();
			}
			(&Local_254 + 520[bVar05])->f_8 = Function_497(uVar27, (*&Local_254 + 520)[bVar05]);
		}
		Local_254.f_652++;
		bVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (Function_399())
	{
		DESTROY_ITERATOR(bVar23);
	}
	if (Function_81())
	{
		WAIT(0);
		bVar0 = false;
		while (bVar0 <= Local_254.f_648)
		{
			bVar29 = Function_79(bVar0, 1);
			GET_OBJECT_POSITION(bVar29, &vVar4);
			bVar28 = CLEAR_AREA_OF_GRASS(vVar4, 3.0f);
			DECOR_SET_INT(bVar29, "ClearRequest", bVar28);
			bVar0++;
		}
	}
	if (!bParam2)
	{
		Function_725(&Local_254 + 664);
		Function_546(&Local_254 + 664, "MP_CTF", 10, 0);
		while (!Function_389(&Local_254 + 664) && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
	}
	NET_SCRIPTMSG_REGISTER_HANDLER(70, 100876);
	NET_SCRIPTMSG_REGISTER_HANDLER(71, 97175);
	NET_SCRIPTMSG_REGISTER_HANDLER(73, 95558);
	NET_SCRIPTMSG_REGISTER_HANDLER(74, 92313);
	NET_SCRIPTMSG_REGISTER_HANDLER(75, 91442);
	NET_SCRIPTMSG_REGISTER_HANDLER(4, 90254);
	bVar30 = NET_IS_SESSION_HOST();
	if (Function_399())
	{
		iVar31 = 15;
		Function_657(&Local_254 + 624);
		UNK_0x2148AC15(457, 4);
		UNK_0x444C3C32(0, 20, 0);
		if (bVar30)
		{
			Function_657(&Local_118 + 436);
			Local_118.f_424 = 0;
			Local_118.f_428 = Function_465();
			Local_118.f_432 = 0;
			Function_316(&Local_118 + 436);
		}
	}
	else if (Function_82())
	{
		iVar31 = 15;
		if (bVar30)
		{
			Local_118.f_424 = 4294967295;
			Local_118.f_428 = 15;
		}
	}
	else if (Function_402())
	{
		iVar31 = 1;
		Local_118.f_428 = 1;
	}
	else if (Function_83())
	{
		iVar31 = 2;
		Local_118.f_428 = 2;
	}
	bVar0 = false;
	while (bVar0 <= iVar31)
	{
		Function_657(&Local_254[bVar08] + 28);
		Local_254[bVar08].f_20 = 4294967294;
		if (bVar30)
		{
			Function_286(&Local_118[bVar07] + 12, -45.0f);
			Local_118[bVar07].f_8 = 4294967294;
			Function_657(&Local_118[bVar07] + 24);
			if (bVar0 <= Local_118.f_428)
			{
				if (Function_81())
				{
					Local_118[bVar07].f_4 = 4;
				}
				else
				{
					Local_118[bVar07].f_4 = 0;
					Local_118[bVar07] = bVar0;
				}
			}
			else
			{
				Local_118[bVar07].f_4 = 4294967295;
				Local_118[bVar07] = 4294967295;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_668(var uParam0) //Position: 0x1608E / 90254
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
	NET_LOG(StackVal, StackVal, 1, "CTF", I2STR("RECVing score. Team %s by player %s with bag %s for %s"), I2STR(Var0), I2STR(I2STR(Var0.f_12)));
	if (Var0 == 4294967294)
	{
		if (Function_402())
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
		}
		if (!Function_385(1))
		{
			if (Function_402())
			{
				Function_420("CTF_one_replenished");
				Function_679();
				if (!(Function_403() || Function_614()))
				{
					Function_519(Function_405(Function_149()));
				}
			}
			else if (Var0.f_12 >= 1)
			{
				Function_420("CTF_mul_replenished_pl");
				Function_678();
			}
			else
			{
				Function_420("CTF_mul_replenished");
				Function_679();
			}
		}
	}
	else if (Var0 == 4294967291)
	{
		if (StackVal > Var0.f_12)
		{
			Function_677();
		}
		else if (StackVal && (Var0.f_12 < 3 - Var0.f_12) != 1)
		{
			Function_676();
		}
	}
	else if (Var0 == GET_LOCAL_SLOT())
	{
		if (Function_83())
		{
			if (StackVal == Function_149())
			{
				Function_675();
				Function_420("CTF_sym_capped_self_their");
			}
			if (!(Function_403() || Function_614()))
			{
				Function_519(StackVal);
			}
		}
		else if (Function_402())
		{
			Function_674();
			Function_420("CTF_one_capped_self");
		}
		else if (Function_399())
		{
			if (!(Function_403() || Function_614()))
			{
				Function_519(StackVal);
			}
			if (StackVal == 2)
			{
				Local_254.f_748++;
				Function_420("CTF_mul_dblcapped_self");
				Function_409();
			}
			else
			{
				Function_420("CTF_mul_capped_self");
			}
		}
	}
	else
	{
		if (Function_82())
		{
		}
		else if (Function_399())
		{
			Function_519(Function_520());
		}
		else if (StackVal == Function_149())
		{
			Function_519(StackVal);
		}
		else
		{
			Function_519(Function_518());
		}
		if (IS_SLOT_VALID(Var0))
		{
			if (Function_83())
			{
				if (StackVal == Function_149())
				{
					Function_673();
					Function_671("CTF_sym_capped_their_by", Var0);
				}
				else
				{
					Function_670();
					Function_671("CTF_sym_capped_your_by", Var0);
				}
			}
			else if (Function_402())
			{
				if (StackVal == Function_149())
				{
					Function_674();
				}
				else
				{
					Function_669();
				}
				Function_671("CTF_one_capped_by", Var0);
			}
			else if (Function_399())
			{
				if (StackVal == 2)
				{
					Function_671("CTF_mul_dblcapped_by", Var0);
				}
				else
				{
					Function_671("CTF_mul_capped_by", Var0);
				}
			}
		}
	}
	return;
}

void Function_669() //Position: 0x163CF / 91087
{
	Function_322("CTSBAG_ENEMCAPTBAG", 0);
	return;
}

void Function_670() //Position: 0x163EE / 91118
{
	Function_322("CTBCLASS_ENEMCAPTURESBAG", 0);
	return;
}

void Function_671(bool bParam0, bool bParam1) //Position: 0x16413 / 91155
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_672(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_672(bool bParam0) //Position: 0x16433 / 91187
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("g", I2STR(bParam0));
}

void Function_673() //Position: 0x16447 / 91207
{
	Function_322("CTBCLASS_URGANGCAPTURSBAG", 0);
	return;
}

void Function_674() //Position: 0x1646D / 91245
{
	Function_322("CTSBAG_FRENDCAPTSBAG", 0);
	return;
}

void Function_675() //Position: 0x1648E / 91278
{
	Function_322("CTBCLASS_UCAPTUREBAG", 0);
	return;
}

void Function_676() //Position: 0x164AF / 91311
{
	Function_322("CTSBAG_1BAGLEFT", 0);
	return;
}

void Function_677() //Position: 0x164CB / 91339
{
	Function_322("CTSBAG_ALLBAGSCAPTURED", 0);
	return;
}

void Function_678() //Position: 0x164EE / 91374
{
	Function_322("GRFFA_BAGSAPPEARALLMAP", 0);
	return;
}

void Function_679() //Position: 0x16511 / 91409
{
	Function_322("CTSBAG_BAGAPPSNEWRND", 0);
	return;
}

void Function_680(var uParam0) //Position: 0x16532 / 91442
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
	if (StackVal != 4294967295)
	{
		NET_LOG(StackVal, 1, "CTF", I2STR("RECVing timed out return for bag %s @ %s"), F2STR(Var0.f_12, 5, 5), false, false);
	}
	else
	{
		NET_LOG(StackVal, 1, "CTF", "RECVing return. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	}
	if (StackVal && Function_470(StackVal, 4294967291) != 4294967295)
	{
	}
	if (StackVal != 4294967295)
	{
		if (StackVal == 4294967293)
		{
			if (Function_83())
			{
				if (Function_448(StackVal))
				{
					Function_685();
					Function_420("CTF_sym_returned_their_auto");
				}
				else
				{
					Function_684();
					Function_420("CTF_sym_returned_your_auto");
				}
			}
			else if (Function_399())
			{
			}
			else if (Function_402())
			{
				Function_420("CTF_one_ran_too_far");
				Function_683();
			}
		}
		else if (Function_83())
		{
			if (Function_448(StackVal))
			{
				Function_420("CTF_sym_ran_too_far_their");
			}
			else
			{
				Function_420("CTF_sym_ran_too_far_your");
			}
		}
		else if (Function_399())
		{
			Function_420("CTF_mul_ran_too_far");
		}
		else if (Function_402())
		{
			Function_420("CTF_one_ran_too_far");
		}
	}
	else if (!IS_SLOT_VALID(Var0))
	{
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_682(StackVal);
		NET_LOG(1, "CTF", "Bag returned", false, false, false, false);
	}
	else
	{
		NET_LOG(1, "CTF", "Bag return ignored, not the host (%s is)", Function_681(), false, false, false);
	}
	return;
}

var Function_681() //Position: 0x167A4 / 92068
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return "NOT IN SESSION";
	}
	bVar0 = GET_SLOT_FOR_HOST();
	if (!IS_SLOT_VALID(bVar0))
	{
		return "INVALIDSLOT";
	}
	return GET_SLOT_NAME(bVar0);
}

void Function_682(int iParam0) //Position: 0x167E5 / 92133
{
	Function_77("CTF_HOST_RETURN_BAG", iParam0);
	Local_118[iParam07].f_8 = 4294967294;
	Local_118[iParam07].f_4 = 0;
	Function_460(&Local_118[iParam07] + 12);
	Function_316(&Local_118[iParam07] + 24);
	return;
}

void Function_683() //Position: 0x16830 / 92208
{
	Function_322("CTSBAG_BAGRETURNS", 0);
	return;
}

void Function_684() //Position: 0x1684E / 92238
{
	Function_322("CTBCLASS_FRENDLYBAGRETURNS", 0);
	return;
}

void Function_685() //Position: 0x16875 / 92277
{
	Function_322("CTBCLASS_ENEMBAGRETURNS", 0);
	return;
}

void Function_686(var uParam0) //Position: 0x16899 / 92313
{
	struct<9> Var0;
	bool bVar9;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &vVar0, 4);
	NET_LOG(1, "CTF", "RECVing cap. Player %s (%s) for bags %s, %s", I2STR(vVar0.x), UI_GET_STRING(Function_349(vVar0.x)), I2STR(vVar0.y), I2STR(vVar0.z));
	if (!Function_470(vVar0.y, vVar0.x))
	{
	}
	iVar4 = 1;
	if (vVar0.z >= 4294967295)
	{
		iVar4 = 2;
		if (!Function_470(vVar0.z, vVar0.x))
		{
		}
	}
	if (Function_402())
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	if (!IS_SLOT_VALID(vVar0.x))
	{
	}
	else if (!Function_614())
	{
		bVar5 = vVar0.x != GET_LOCAL_SLOT();
		if (Function_82())
		{
			if (bVar5)
			{
				Function_148(15, iVar4);
			}
		}
		else
		{
			if (bVar5)
			{
				Function_698(iVar4);
				Function_148(15, iVar4);
				if (Function_83())
				{
					Function_697(&Global_50170[3122] + 4, &Global_50170[3122] + 8, &Global_50170[3122] + 12, iVar4);
					Function_696(&Global_50170[3522] + 4, &Global_50170[3522] + 8, &Global_50170[3522] + 12, iVar4);
					Function_301(200.0f, "XP_CTF_cap", 1);
				}
				else if (Function_402())
				{
					Function_695(&Global_50170[3922] + 4, &Global_50170[3922] + 8, &Global_50170[3922] + 12, iVar4);
					Function_694(&Global_50170[4322] + 4, &Global_50170[4322] + 8, &Global_50170[4322] + 12, iVar4);
					Function_301(200.0f, "XP_CTF_cap", 1);
				}
				else if (Function_399())
				{
					Function_693(&Global_50170[4622] + 4, &Global_50170[4622] + 8, &Global_50170[4622] + 12, iVar4);
					if (iVar4 == 1)
					{
						Function_301(50.0f, "XP_CTF_cap", 1);
						Function_692();
					}
					else
					{
						Function_301(150.0f, "XP_CTF_dblcap", 1);
						Function_691();
					}
				}
			}
			if (Function_399())
			{
				if (bVar5)
				{
					Function_690(vVar0.x, iVar4, Function_520(), vVar0.y);
				}
			}
			else if (NET_IS_SESSION_HOST())
			{
				iVar6 = Function_150(vVar0.x, 1, 0);
				Function_689(iVar6, iVar4);
				Function_690(vVar0.x, iVar6, Function_405(iVar6), vVar0.y);
			}
		}
	}
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_614())
		{
			if (Function_402())
			{
				Function_688(vVar0.y);
				Local_118.f_424 = vVar0.y;
				NET_LOG(1, "CTF", "Bag capped", false, false, false, false);
			}
			else if (Function_399() || Function_82())
			{
				Function_688(vVar0.y);
				NET_LOG(1, "CTF", "Bag capped", false, false, false, false);
				if (vVar0.z >= 4294967295)
				{
					Function_688(vVar0.z);
				}
				bVar7 = false;
				while (bVar7 <= 15)
				{
					if (Function_484(bVar7))
					{
						if (Function_687(bVar7))
						{
							iVar8++;
						}
						bVar9++;
					}
					bVar7++;
				}
				if (Function_82())
				{
					Local_118.f_424 = iVar8;
					Function_690(vVar0.x, iVar4, Local_118.f_424, vVar0.y);
				}
				else
				{
					Function_690(4294967291, 0, iVar8, bVar9);
					if (iVar8 > bVar9)
					{
						Local_118.f_432 = 0;
						Function_316(&Local_118 + 436);
						Local_118.f_424 = vVar0.y;
					}
					else
					{
						Local_118.f_424 = 4294967295;
					}
				}
			}
			else
			{
				Function_682(vVar0.y);
				NET_LOG(1, "CTF", "Bag capped", false, false, false, false);
			}
		}
	}
	else
	{
		NET_LOG(1, "CTF", "Cap ignored, not the host (%s is)", Function_681(), false, false, false);
	}
	return;
}

bool Function_687(int iParam0) //Position: 0x16C48 / 93256
{
	Function_77("CTF_IS_BAG_CAPPED", iParam0);
	return StackVal != 4;
}

void Function_688(int iParam0) //Position: 0x16C71 / 93297
{
	Function_77("CTF_HOST_CAP_BAG", iParam0);
	Local_118[iParam07].f_8 = 4294967294;
	Local_118[iParam07].f_4 = 4;
	Function_460(&Local_118[iParam07] + 12);
	Function_316(&Local_118[iParam07] + 24);
	return;
}

void Function_689(int iParam0, int iParam1) //Position: 0x16CB9 / 93369
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = (Global_78578[iParam02] + iParam1);
		Function_316(&Global_78578 + 92);
	}
	return;
}

void Function_690(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x16CEE / 93422
{
	struct<13> Var0;
	
	Var0 = iParam0;
	Var0.f_4 = bParam1;
	Var0.f_8 = iParam2;
	Var0.f_12 = bParam3;
	NET_LOG(StackVal, StackVal, 1, "CTF", I2STR("SENDing score. Team %s by player %s with bag %s for %s"), I2STR(Var0), I2STR(I2STR(Var0.f_12)));
	NET_SCRIPTMSG_SEND(3, 4, &Var0, 4, 1);
	NET_SCRIPTMSG_SEND(3, 65, &Var0, 4, 1);
}

void Function_691() //Position: 0x16D7E / 93566
{
	Function_322("CTSBAG_UCAPT2BAGS", 0);
	return;
}

void Function_692() //Position: 0x16D9C / 93596
{
	Function_322("CTSBAG_UCAPT1BAG", 0);
	return;
}

void Function_693(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x16DB9 / 93625
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 1)
				{
					Function_139(46, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_559(), 3084);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 15)
				{
					Function_139(46, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_559(), 3085);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_46(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 50)
				{
					Function_108(46, 150, Function_559(), 3086);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_694(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x16F41 / 94017
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 3)
				{
					Function_139(43, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_532(), 3079);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_46(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 5)
				{
					Function_139(43, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 7, 150, Function_532(), 3080);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_46(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 7)
				{
					Function_108(43, 150, Function_532(), 3081);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 7);
					if (*uParam2 == fVar1)
					{
						Function_46(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_695(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x170B4 / 94388
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 1)
				{
					Function_139(39, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_542(), 3065);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 15)
				{
					Function_139(39, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_542(), 3066);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_46(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 50)
				{
					Function_108(39, 150, Function_542(), 3067);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_696(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1723D / 94781
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 1)
				{
					Function_139(35, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 2, 100, Function_535(), 3059);
					Function_138(uParam2, bVar0, 2);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 2)
				{
					Function_139(35, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 3, 150, Function_535(), 3060);
					Function_138(uParam2, bVar0, 3);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 2);
					if (*uParam2 == fVar1)
					{
						Function_46(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 3)
				{
					Function_108(35, 150, Function_535(), 3061);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_46(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_697(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x173B2 / 95154
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 1)
				{
					Function_139(31, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_535(), 3045);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 15)
				{
					Function_139(31, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_535(), 3046);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_46(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 50)
				{
					Function_108(31, 150, Function_535(), 3047);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_698(int iParam0) //Position: 0x1753A / 95546
{
	Function_264(0, iParam0);
	return;
}

void Function_699(var uParam0) //Position: 0x17546 / 95558
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing Drop. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	if (Var0 == 4294967293)
	{
		if (Function_83())
		{
			if (Function_448(StackVal))
			{
				Function_420("CTF_sym_dropped_auto_their");
			}
			else
			{
				Function_420("CTF_sym_dropped_auto_your");
			}
		}
		else if (Function_402())
		{
			Function_420("CTF_one_dropped_auto");
		}
		else if (Function_399())
		{
			Function_420("CTF_mul_dropped_auto");
		}
	}
	else
	{
		if (StackVal != StackVal)
		{
		}
		if (Var0 == GET_LOCAL_SLOT())
		{
			if (Function_83())
			{
				if (Function_448(StackVal))
				{
					Function_704();
					Function_420("CTF_sym_dropped_self_their");
				}
			}
			else if (Function_402())
			{
				Function_704();
				Function_420("CTF_one_dropped_self");
			}
			else if (Function_399())
			{
				if (StackVal != 4294967295)
				{
					Function_420("CTF_mul_dropped_self_dbl");
				}
				else
				{
					Function_420("CTF_mul_dropped_self");
				}
			}
		}
		else if (IS_SLOT_VALID(Var0))
		{
			Function_476(StackVal);
			if (Function_83())
			{
				if (Function_448(StackVal))
				{
					Function_703();
					Function_671("CTF_sym_dropped_their_by", Var0);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7.5f, "CTF_sym_obj_drop_theirs", false, false, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					Function_702();
					Function_671("CTF_sym_dropped_your_by", Var0);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7.5f, "CTF_sym_obj_drop_yours", false, false, 0, 0, 0, 2, 0, 0, 0);
				}
			}
			else if (Function_402())
			{
				if (Function_452(Var0))
				{
					Function_701();
				}
				else
				{
					Function_700();
				}
				Function_671("CTF_one_dropped_by", Var0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				PRINT_OBJECTIVE_FORMAT(7.5f, "CTF_one_obj_drop", false, false, 0, 0, 0, 2, 0, 0, 0);
			}
			else if (Function_399())
			{
				if (StackVal != 4294967295)
				{
					Function_476(StackVal);
					Function_671("CTF_mul_dropped_by_dbl", Var0);
				}
				else
				{
					Function_671("CTF_mul_dropped_by", Var0);
				}
			}
		}
	}
	if (NET_IS_SESSION_HOST())
	{
		if (Var0 == 4294967293)
		{
			Function_503(StackVal);
			NET_LOG(1, "CTF", "Time out drop received by me, the host", false, false, false, false);
		}
		else
		{
			if (Function_470(StackVal, 4294967291))
			{
				if (Function_470(StackVal, Var0))
				{
					Function_503(StackVal);
					NET_LOG(1, "CTF", "Drop received by me, the host", false, false, false, false);
				}
				else
				{
					NET_LOG(StackVal, StackVal, StackVal, true, I2STR(I2STR("CTF")), I2STR(Var0), false);
				}
			}
			else
			{
				NET_LOG(StackVal, 1, "CTF", I2STR("Invalid Drop. Nobody had bag %s already"), false, false, false);
			}
			if (StackVal != 4294967295)
			{
				if (Function_470(StackVal, 4294967291))
				{
					if (Function_470(StackVal, Var0))
					{
						Function_503(StackVal);
						NET_LOG(1, "CTF", "Drop second bag received by me, the host", false, false, false, false);
					}
					else
					{
						NET_LOG(StackVal, StackVal, StackVal, true, I2STR(I2STR("CTF")), I2STR(Var0), false);
					}
				}
				else
				{
					NET_LOG(StackVal, 1, "CTF", I2STR("Invalid Drop. Nobody had bag %s already"), false, false, false);
				}
			}
		}
	}
	else
	{
		NET_LOG(1, "CTF", "Drop ignored, not the host", false, false, false, false);
	}
	return;
}

void Function_700() //Position: 0x17AF2 / 97010
{
	Function_322("CTSBAG_ENEMDROPSBAG", 0);
	return;
}

void Function_701() //Position: 0x17B12 / 97042
{
	Function_322("CTSBAG_FRENDDROPSBAG", 0);
	return;
}

void Function_702() //Position: 0x17B33 / 97075
{
	Function_322("CTBCLASS_ENEMDROPSBAG", 0);
	return;
}

void Function_703() //Position: 0x17B55 / 97109
{
	Function_322("CTBCLASS_URGANGDROPSBAG", 0);
	return;
}

void Function_704() //Position: 0x17B79 / 97145
{
	Function_322("CTBCLASS_UDROPBAG", 0);
	return;
}

void Function_705(var uParam0) //Position: 0x17B97 / 97175
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing confirm. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	if (Var0 == GET_LOCAL_SLOT())
	{
		NET_LOG(1, "CTF", "Bag confirmed for me!", false, false, false, false);
		Function_473("CTF_Pickup");
		Function_215(StackVal, StackVal, StackVal, Function_473("CTF_Pickup"));
		bVar4 = Function_13();
		bVar5 = true;
		if (!IS_ACTOR_VALID(bVar4))
		{
			bVar5 = false;
		}
		else if (!IS_ACTOR_ALIVE(bVar4))
		{
			bVar5 = false;
		}
		else if (Local_254.f_496 > 2)
		{
			Function_478(StackVal, 0, 4294967295);
			return;
		}
		if (bVar5)
		{
			if (Function_83())
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_466("CTF_sym_obj_get", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_720(&Global_50170[3322] + 4, &Global_50170[3322] + 8, &Global_50170[3322] + 12);
				if (Function_448(StackVal))
				{
					Function_719();
					Function_420("CTF_sym_picked_up_self_their");
				}
			}
			else if (Function_402())
			{
				Function_718(&Global_50170[4122] + 4, &Global_50170[4122] + 8, &Global_50170[4122] + 12);
				Function_717();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_466("CTF_one_obj_get", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_420("CTF_one_picked_up_self");
			}
			else if (Function_399())
			{
				Function_716(&Global_50170[4822] + 4, &Global_50170[4822] + 8, &Global_50170[4822] + 12);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (StackVal == 1)
				{
					Function_466("CTF_mul_obj_get", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else
				{
					Function_466("CTF_mul_obj_dblget", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				Local_254[GET_CURRENT_GAME_TIME()8].f_16 = StackVal;
			}
		}
		Function_714(StackVal, 1, !Local_254.f_632);
	}
	else if (IS_SLOT_VALID(Var0))
	{
		NET_LOG(1, "CTF", "Somebody else, slot #%s, picked up a Bag", I2STR(Var0), false, false, false);
		bVar6 = GET_SLOT_ACTOR(Var0);
		if (IS_ACTOR_VALID(bVar6))
		{
			Function_709(StackVal, StackVal, (StackVal - 1), 1);
		}
		if (Function_83())
		{
			if (Function_448(StackVal))
			{
				Function_671("CTF_sym_picked_up_their_by", Var0);
				Function_708();
			}
			else
			{
				Function_707();
				Function_671("CTF_sym_picked_up_your_by", Var0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_466("CTF_sym_obj_get_back", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (IS_BLIP_VALID(Local_254[StackVal8]))
				{
					SET_BLIP_BLINK(Local_254[StackVal8], 1, 0, 5f);
				}
			}
		}
		else if (Function_402())
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (Function_452(Var0))
			{
				Function_717();
				Function_466("CTF_one_obj_we_pickup", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				Function_706();
				Function_466("CTF_one_obj_they_pickup", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			Function_671("CTF_one_picked_up_by", Var0);
		}
		else if (Function_399())
		{
			if (StackVal == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	return;
}

void Function_706() //Position: 0x17FA2 / 98210
{
	Function_322("CTSBAG_ENEMTAKESBAG", 0);
	return;
}

void Function_707() //Position: 0x17FC2 / 98242
{
	Function_322("CTBCLASS_ENEMTAKESLOCBAG", 0);
	return;
}

void Function_708() //Position: 0x17FE7 / 98279
{
	Function_322("CTBCLASS_URGANGTAKESBAG", 0);
	return;
}

var Function_709(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1801F / 98335
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	char* cVar3;
	
	bVar0 = GET_PHYSINST_FROM_OBJECT(bParam1);
	iVar1 = iParam2;
	bVar2 = iVar1 + 2;
	if (IS_PHYSINST_READY(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
		if (ATTACH_PROP_TO_ANIM(bParam0, bVar0, Function_431(iVar1), "grab", 0, bVar2))
		{
		}
		cVar3 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar0);
		if (IS_OBJECT_ANIMATOR_VALID(cVar3))
		{
			DESTROY_OBJECT_ANIMATOR(cVar3);
		}
		cVar3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar0, Function_713(), Function_712(0), Function_711(iVar1));
		if (IS_OBJECT_ANIMATOR_VALID(cVar3))
		{
			if (LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar3, bParam0, bVar2))
			{
			}
		}
	}
	if (Function_435(bParam0))
	{
		DECOR_SET_BOOL(bParam0, "FatGuy", true);
	}
	else
	{
		DECOR_REMOVE(bParam0, "FatGuy");
	}
	if (bParam3)
	{
		return "";
	}
	SET_ANIM_SET_FOR_ACTOR(bParam0, Function_713(), 0);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_710(iVar1));
	return "";
}

var Function_710(int iParam0) //Position: 0x180F1 / 98545
{
	if (iParam0 == 0)
	{
		return "CTF_new/One/left_pre";
	}
	if (iParam0 == 1)
	{
		return "CTF_new/Two/right_pre";
	}
	return "";
}

var Function_711(int iParam0) //Position: 0x1813A / 98618
{
	iParam0 = iParam0;
	return "CTF_new";
}

bool Function_712(bool bParam0) //Position: 0x1814E / 98638
{
	if (bParam0)
	{
		return "custom/CTF_new";
	}
	return "CTF_new";
}

bool Function_713() //Position: 0x18175 / 98677
{
	return "CTF";
}

void Function_714(int iParam0, bool bParam1, bool bParam2) //Position: 0x18181 / 98689
{
	float fVar0;
	bool bVar1;
	
	Function_77("ANIMATE_CARRYING_BAG", iParam0);
	if (bParam1)
	{
		fVar0 = GET_CURRENT_GAME_TIME();
		bVar1 = Function_13();
		if (bParam2)
		{
			DECOR_SET_BOOL(bVar1, "CTF_FastAttach", true);
			Local_254.f_644 = fVar0;
			Function_75(iParam0);
		}
		Function_709(StackVal, bVar1, Local_254.f_496, 0);
		Local_254.f_732 = 1;
		Local_254.f_736 = fVar0;
	}
	ADD_CAMERA_COLLISION_EXCLUSION(StackVal, GET_GAME_CAMERA(), 0);
	(*&Local_254 + 484)[Local_254.f_496] = iParam0;
	Function_715();
	return;
}

void Function_715() //Position: 0x1821C / 98844
{
	Local_254.f_496++;
	if (Local_254.f_496 >= 2)
	{
	}
	return;
}

void Function_716(var uParam0, var uParam1, var uParam2) //Position: 0x18237 / 98871
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 10)
				{
					Function_139(48, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_559(), 3090);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 25)
				{
					Function_139(48, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_559(), 3091);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 50)
				{
					Function_139(48, uParam0, 2, uParam1, 3, *uParam2, 0, 150, bVar0, 75, 200, Function_559(), 3092);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_146(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 75)
				{
					Function_139(48, uParam0, 2, uParam1, 4, *uParam2, 0, 200, bVar0, 100, 250, Function_559(), 3093);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_146(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 100)
				{
					Function_108(48, 250, Function_559(), 3094);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_717() //Position: 0x184BE / 99518
{
	Function_322("CTSBAG_FRENDTAKESBAG", 0);
	return;
}

void Function_718(var uParam0, var uParam1, var uParam2) //Position: 0x184DF / 99551
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 10)
				{
					Function_139(41, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_542(), 3071);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 25)
				{
					Function_139(41, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_542(), 3072);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 50)
				{
					Function_139(41, uParam0, 2, uParam1, 3, *uParam2, 0, 150, bVar0, 75, 200, Function_542(), 3073);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_146(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 75)
				{
					Function_139(41, uParam0, 2, uParam1, 4, *uParam2, 0, 200, bVar0, 100, 250, Function_542(), 3074);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_146(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 100)
				{
					Function_108(41, 250, Function_542(), 3075);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(uParam2, bVar0, 100);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_719() //Position: 0x18767 / 100199
{
	Function_322("CTBCLASS_UTAKEBAG", 0);
	return;
}

void Function_720(var uParam0, var uParam1, int iParam2) //Position: 0x18785 / 100229
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_146(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 10)
				{
					Function_139(33, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 25, 100, Function_535(), 3051);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 10);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_146(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 25)
				{
					Function_139(33, uParam0, 2, uParam1, 2, *iParam2, 0, 100, bVar0, 50, 150, Function_535(), 3052);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 25);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_146(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 50)
				{
					Function_139(33, uParam0, 2, uParam1, 3, *iParam2, 0, 150, bVar0, 75, 200, Function_535(), 3053);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_146(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 75)
				{
					Function_139(33, uParam0, 2, uParam1, 4, *iParam2, 0, 200, bVar0, 100, 250, Function_535(), 3054);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 75);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_146(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 100)
				{
					Function_108(33, 250, Function_535(), 3055);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_138(iParam2, bVar0, 100);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_721(var uParam0) //Position: 0x18A0C / 100876
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing ask. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_614())
		{
			if (!Function_470(StackVal, 4294967291))
			{
				if (StackVal && (StackVal || StackVal != 2))
				{
					Function_723(StackVal, StackVal, Var0);
					Function_722(StackVal, Var0);
					NET_LOG(1, "CTF", "Accepted ask.", false, false, false, false);
				}
				else
				{
					NET_LOG(StackVal, StackVal, 1, I2STR("CTF"), UI_GET_STRING(Function_349(Var0)), false, false);
				}
			}
			else
			{
				NET_LOG(StackVal, StackVal, StackVal, StackVal, StackVal, I2STR(UI_GET_STRING(Function_349(1))), false);
			}
		}
	}
	else
	{
		NET_LOG(1, "CTF", "Ignored Ask, not the host (%s is).", Function_681(), false, false, false);
	}
	return;
}

void Function_722(int iParam0, int iParam1) //Position: 0x18BD1 / 101329
{
	Function_77("CTF_HOST_CARRY_BAG", iParam0);
	Local_118[iParam07].f_8 = iParam1;
	Local_118[iParam07].f_4 = 3;
	Function_460(&Local_118[iParam07] + 12);
	Function_316(&Local_118[iParam07] + 24);
	return;
}

void Function_723(var uParam0, var uParam1, int iParam2) //Position: 0x18C1A / 101402
{
	struct<13> Var0;
	
	Var0 = uParam0;
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = uParam1;
	Var0.f_8 = iParam2;
	NET_LOG(StackVal, 1, "CTF", "SENDing confirm. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_349(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 71, &Var0, 4, 1);
	return;
}

bool Function_724(bool bParam0) //Position: 0x18C9B / 101531
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Function_485();
	iVar0 = 0;
	while (iVar0 <= iVar2)
	{
		if (Function_470(iVar0, bParam0))
		{
			iVar1++;
			if (iVar1 > 2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_725(var uParam0) //Position: 0x18CD2 / 101586
{
	Function_546(uParam0, Function_456(), 0, 0);
	Function_546(uParam0, Function_713(), 5, 0);
	Function_546(uParam0, Function_712(1), 8, 0);
	return;
}

var Function_726() //Position: 0x18CFB / 101627
{
	return "$/fragments/p_gen_mpChestRed01x";
}

var Function_727() //Position: 0x18D23 / 101667
{
	return "$/fragments/p_gen_mpChestBlue01x";
}

var Function_728(float fParam0, float fParam1) //Position: 0x18D4C / 101708
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var Function_729() //Position: 0x18D5F / 101727
{
	return "CapVol_";
}

bool Function_730(var uParam0, int iParam1) //Position: 0x18D6F / 101743
{
	bool bVar0;
	
	bVar0 = FIND_VOLUME_IN_LAYOUT(*iParam1, "CapVols_set");
	if (IS_VOLUME_VALID(bVar0))
	{
	}
	else
	{
		return 0;
	}
	if (!IS_ITERATOR_VALID(*uParam0))
	{
		*uParam0 = CREATE_OBJECT_ITERATOR(*iParam1);
		if (!IS_ITERATOR_VALID(*uParam0))
		{
			return 0;
		}
	}
	ITERATE_IN_VOLUME_SET(*uParam0, bVar0);
	if (IS_OBJECT_VALID(START_OBJECT_ITERATOR(*uParam0)))
	{
		return 1;
	}
	ITERATE_ON_OBJECT_TYPE(*uParam0, 9);
	ITERATE_ON_PARTIAL_NAME(*uParam0, Function_729());
	ITERATE_IN_LAYOUT(*uParam0, *iParam1);
	return 1;
}

vector3 Function_731() //Position: 0x18DE8 / 101864
{
	return 150.0f, 150.0f, 150.0f;
}

var Function_732() //Position: 0x18DFD / 101885
{
	return "PlayableSpace";
}

var Function_733(bool bParam0) //Position: 0x18E13 / 101907
{
	bool bVar0;
	
	bVar0 = Function_734();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_734() //Position: 0x18E27 / 101927
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

bool Function_735() //Position: 0x18E63 / 101987
{
	Local_254.f_660 = FIND_NAMED_LAYOUT("CTF_Bag_layout");
	if (!IS_LAYOUTREF_VALID(Local_254.f_660))
	{
		Local_254.f_660 = CREATE_LAYOUT("CTF_Bag_layout");
	}
	return IS_LAYOUTREF_VALID(Local_254.f_660);
}

var Function_736() //Position: 0x18EAF / 102063
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = Function_79(bVar0, 1);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar0++;
		bVar1 = Function_79(bVar0, 1);
	}
	return bVar0;
}

