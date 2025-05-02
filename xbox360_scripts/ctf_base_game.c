//Decompiled with MagicRDR v1.0
//Function Count : 715
//Statics Count : 1256
//Natives Count : 576
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
	bool bLocal_13 = false;
	bool bLocal_14 = false;
	float fLocal_15 = 0.0f;
	struct<2> Local_16[16];
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	vector3 vLocal_52 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_55 = { 0.0f, 0.0f, 0.0f };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<7> Local_61 = { 15, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_176 = 16;
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
	var uLocal_193 = 2;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	struct<8> Local_196 = { 15, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_317 = 2;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 5;
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
	var uLocal_362 = 4;
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
	struct<429> Local_382 = { 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_906 = 3;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 16;
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
	var uLocal_1020 = 16;
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
	var uLocal_1083 = 0;
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
	var uLocal_1126 = 16;
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
	var uLocal_1189 = 0;
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
	var uLocal_1243 = 3;
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
	bLocal_13 = 16;
	bLocal_14 = false;
	fLocal_15 = 1.0f;
	bLocal_49 = true;
	bLocal_50 = 10;
	vLocal_52 = { 0.0f, 0,3f, 0.0f };
	vLocal_55 = { 0.0f, 1.0f, 0.0f };
	iLocal_58 = 1;
	iLocal_59 = 4194304;
	iLocal_60 = 0;
	if (!Function_599())
	{
		TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
	}
	Function_598();
	iVar0 = NET_GET_PLAYMODE();
	uVar1 = Function_597();
	iVar2 = 1;
	iVar3 = 0;
	while ((!IS_EXITFLAG_SET() && iVar2) && NET_IS_IN_SESSION())
	{
		switch (iVar3)
		{
			case 0x00000000:
				if (Function_595(78097) && UNK_0xA80C6DE6(&Local_61))
				{
					NET_LOG(true, "CTF Data", "CBA and HBV synched. MOVING ON.", 0, 0, 0, 0);
					iVar3 = 1;
					fVar4 = 0.0f;
				}
				else if (Function_594())
				{
					NET_LOG(true, "CTF Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iVar2 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_489())
				{
					NET_LOG(true, "CTF Data", "DATA SUNK AND INITED. MOVING ON.", 0, 0, 0, 0);
					iVar3 = 2;
				}
				else if (Function_594())
				{
					NET_LOG(true, "CTF Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iVar2 = 0;
				}
				break;
			
			case 0x00000002:
				iVar2 = Function_156();
				break;
		}
		WAIT(false);
	}
	if (iVar0 != 1 || iVar0 != 3)
	{
		iVar5 = 0;
	}
	else
	{
		iVar5 = Function_152();
	}
	if (NET_IS_IN_SESSION())
	{
		if (Function_594())
		{
			if (iVar5 >= 0)
			{
			}
			Function_150(0, Function_151(15));
			if (Function_147())
			{
				Function_101(iVar5, Function_141(), 1, 1);
			}
			else
			{
				Function_101(iVar5, 4294967295, 1, 1);
			}
			Function_50(0);
		}
		else
		{
			if (iVar5 >= 0)
			{
			}
			Function_3(iVar5);
			Function_50(1);
		}
	}
	else
	{
		Function_3(iVar5);
		Function_50(0);
	}
	Function_1();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x21F / 543
{
	if (bLocal_49)
	{
		Function_2();
		PRINTSTRING("Game End");
		PRINTNL();
	}
	return;
}

void Function_2() //Position: 0x23E / 574
{
	if (bLocal_49)
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

void Function_3(int iParam0) //Position: 0x294 / 660
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

void Function_4(var uParam0, int iParam1, bool bParam2) //Position: 0x326 / 806
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

void Function_5(bool bParam0) //Position: 0x36B / 875
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
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

void Function_6() //Position: 0x3F4 / 1012
{
	Function_35();
	Function_34();
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_15();
	Function_15();
	if (!Function_14())
	{
		Function_11();
		Function_10();
		Function_9();
		Function_8();
	}
	Function_7();
	return;
}

void Function_7() //Position: 0x427 / 1063
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

void Function_8() //Position: 0x52D / 1325
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

void Function_9() //Position: 0x560 / 1376
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

void Function_10() //Position: 0x6EE / 1774
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

void Function_11() //Position: 0x8A2 / 2210
{
	Function_12(&Global_28260, 1, 0);
	return;
}

void Function_12(int iParam0, bool bParam1, var uParam2) //Position: 0x8B0 / 2224
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
	bool bVar13;
	
	bVar0 = Function_13();
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

bool Function_13() //Position: 0xAA1 / 2721
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_14() //Position: 0xAB6 / 2742
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_15() //Position: 0xABF / 2751
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
				iVar2 = ((Function_31((50 + iVar4)) + Function_31((183 + iVar4))) + Function_31((90 + iVar4)));
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

int Function_16(int iParam0, bool bParam1, bool bParam2) //Position: 0xB5A / 2906
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

void Function_17(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xDF5 / 3573
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_18() //Position: 0x1422 / 5154
{
	int iVar0;
	
	return iVar0;
}

var Function_19(int iParam0) //Position: 0x142A / 5162
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_20(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x143B / 5179
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

struct<32> Function_21(char* cParam0, char* cParam1) //Position: 0x1530 / 5424
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_22(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1549 / 5449
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_24(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_23(Function_24(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

int Function_23(int iParam0, bool bParam1) //Position: 0x15AE / 5550
{
	if (iParam0 >= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

int Function_24(int iParam0, bool bParam1) //Position: 0x15C0 / 5568
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_25(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x15D2 / 5586
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

int Function_26(int iParam0) //Position: 0x1702 / 5890
{
	return Global_35278[iParam020].f_48;
}

float Function_27(int iParam0) //Position: 0x1711 / 5905
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_28(int iParam0) //Position: 0x174A / 5962
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_29(int iParam0) //Position: 0x1787 / 6023
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

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x1921 / 6433
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

int Function_31(bool bParam0) //Position: 0x1B3B / 6971
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_32() //Position: 0x1B7C / 7036
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

struct<8> Function_33() //Position: 0x1C05 / 7173
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

struct<8> Function_34() //Position: 0x1C9C / 7324
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

void Function_35() //Position: 0x1D1B / 7451
{
	Function_36(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_16(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2) //Position: 0x1D41 / 7489
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

void Function_37(int iParam0) //Position: 0x1F4B / 8011
{
	Function_38(&Global_79338, iParam0);
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x1F5A / 8026
{
	Function_39(uParam0, iParam1);
	return;
}

void Function_39(int iParam0, bool bParam1) //Position: 0x1F67 / 8039
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_40(int iParam0) //Position: 0x1F7A / 8058
{
	Function_41(&Global_79338, iParam0);
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x1F89 / 8073
{
	Function_42(uParam0, iParam1);
	return;
}

void Function_42(int iParam0, bool bParam1) //Position: 0x1F96 / 8086
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

void Function_43() //Position: 0x1FA5 / 8101
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

void Function_44() //Position: 0x1FCF / 8143
{
	Function_45(&(Global_50170[522]));
	Function_45(&(Global_50170[622]));
	Function_45(&(Global_50170[722]));
	Function_45(&(Global_50170[822]));
	Function_45(&(Global_50170[922]));
	Function_45(&(Global_50170[1022]));
	Function_45(&(Global_50170[1122]));
	return;
}

void Function_45(bool bParam0) //Position: 0x2018 / 8216
{
	Global_56092[*bParam0] = 0;
	Function_46(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_46(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2032 / 8242
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_49(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_48(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_49(iParam0), &cVar0, 2, 2, true);
		Function_47(Function_49(iParam0), 0);
	}
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x20E0 / 8416
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

struct<16> Function_48(int iParam0) //Position: 0x2105 / 8453
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_49(int iParam0) //Position: 0x2139 / 8505
{
	return Global_50170[iParam022].f_24;
}

void Function_50(int iParam0) //Position: 0x2148 / 8520
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	HUD_CLEAR_OBJECTIVE();
	CLEAR_PRINTED_OBJECTIVE();
	UNREGISTER_SCRIPT_WITH_AUDIO();
	Function_99(&Local_382 + 556);
	Function_83(&Local_382);
	Function_70(iParam0);
	Function_68(&Local_382 + 3380);
	Function_67();
	Function_51(&Local_382 + 444, 1);
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

void Function_51(int iParam0, bool bParam1) //Position: 0x21C4 / 8644
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
	if (Function_65(iParam0, 8))
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
		UI_EXIT("MpWeaponSuppressor");
	}
	Function_64(0);
	if (bParam1)
	{
		if (IS_ACTOR_VALID(Function_13()))
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(Function_13(), 0,1f, 0,9f, 0);
		}
		UI_EXIT("XpHud");
		UI_EXIT("MpWeaponSuppressor");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	else if (!Function_65(iParam0, 64))
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
		UI_SHOW("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_RESTORE("WeaponAmmo");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	UI_EXIT("HudMPNoFun");
	Function_58(iParam0, bParam1);
	Function_56();
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
	Function_52(iParam0 + 48);
	return;
}

void Function_52(int iParam0) //Position: 0x2329 / 9001
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_53(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x234F / 9039
{
	if (Function_55(uParam0[iParam13], 4))
	{
		if (Function_55(uParam0[iParam13], 1))
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
			Function_54(uParam0[iParam13], 1);
			Function_54(uParam0[iParam13], 2);
			Function_54(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_54(var uParam0, int iParam1) //Position: 0x247D / 9341
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_55(int iParam0, int iParam1) //Position: 0x2497 / 9367
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_56() //Position: 0x24B4 / 9396
{
	Function_57(1024, 0, 1);
	Function_57(1, 0, 0);
	return;
}

void Function_57(bool bParam0, bool bParam1, int iParam2) //Position: 0x24C8 / 9416
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_42(&Global_76905 + 132, bParam0);
	}
	else
	{
		Function_39(&Global_76905 + 132, bParam0);
	}
	return;
}

void Function_58(int iParam0, bool bParam1) //Position: 0x24F0 / 9456
{
	if (Function_65(iParam0, 2))
	{
		PPP_UNLOAD_PRESET(Function_63());
		PPP_UNLOAD_PRESET(Function_62());
		Function_61(iParam0, 2);
	}
	if (IS_OBJECT_VALID(iParam0->f_100))
	{
		DESTROY_OBJECT(iParam0->f_100);
	}
	if (Function_65(iParam0, 4))
	{
		PPP_UNLOAD_PRESET(Function_60());
		Function_61(iParam0, 4);
	}
	if (bParam1)
	{
		Function_59();
	}
	return;
}

void Function_59() //Position: 0x253F / 9535
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	return;
}

var Function_60() //Position: 0x2548 / 9544
{
	return "MP_ShowdownBlueTeam.ppp";
}

void Function_61(int iParam0, bool bParam1) //Position: 0x2568 / 9576
{
	Function_39(iParam0 + 24, bParam1);
	return;
}

var Function_62() //Position: 0x2577 / 9591
{
	return "MP_WinningFrame.ppp";
}

var Function_63() //Position: 0x2593 / 9619
{
	return "MP_ShowdownRedTeam.ppp";
}

void Function_64(bool bParam0) //Position: 0x25B2 / 9650
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

bool Function_65(int iParam0, bool bParam1) //Position: 0x25E7 / 9703
{
	return Function_66(iParam0->f_24, bParam1);
}

bool Function_66(int iParam0, bool bParam1) //Position: 0x25F6 / 9718
{
	return (iParam0 && bParam1) == 0;
}

void Function_67() //Position: 0x2603 / 9731
{
	return;
}

void Function_68(int iParam0) //Position: 0x2609 / 9737
{
	PPP_UNLOAD_PRESET(iParam0->f_52);
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	Function_52(iParam0 + 64);
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
	HUD_ENABLE(true);
	Function_69(5);
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

void Function_69(int iParam0) //Position: 0x26B6 / 9910
{
	Function_38(&Global_83864 + 1252, iParam0);
	return;
}

void Function_70(bool bParam0) //Position: 0x26C8 / 9928
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if ((&Local_196 + 520[bVar05])->f_16 >= 4294967295)
		{
			RESET_THIS_TREE_TYPE_CLEARING((&Local_196 + 520[bVar05])->f_16);
		}
		if (IS_BLIP_VALID(StackVal))
		{
			REMOVE_BLIP(StackVal);
		}
		(&Local_196 + 520[bVar05])->f_16 = 4294967295;
		bVar0++;
	}
	if (Function_80())
	{
		bVar0 = false;
		while (bVar0 <= Local_196.f_648)
		{
			Function_77(Function_78(bVar0, 1));
			bVar0++;
		}
	}
	bVar0 = false;
	while (bVar0 <= 15)
	{
		Function_73(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bVar0, 4294967295);
		bVar0++;
	}
	UNK_0x2148AC15(4294967295, 0);
	Function_72(Local_196.f_512);
	if (IS_LAYOUTREF_VALID(Local_196.f_660))
	{
		DESTROY_LAYOUT(Local_196.f_660);
	}
	Function_71(&Local_196 + 716);
	Function_71(&Local_196 + 720);
	Function_52(&Local_196 + 664);
	return;
}

void Function_71(int iParam0) //Position: 0x27BA / 10170
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(*iParam0))
	{
		RELEASE_SCRIPT_USE_CONTEXT(*iParam0);
	}
	return;
}

int Function_72(bool bParam0) //Position: 0x27CF / 10191
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

int Function_73(bool bParam0, bool bParam1) //Position: 0x27E5 / 10213
{
	Function_76("DESPAWN_BAG", bParam0);
	if (IS_OBJECT_VALID(StackVal))
	{
		Function_75(StackVal);
		if (!bParam1 || !NET_IS_IN_SESSION())
		{
			DESTROY_OBJECT(StackVal);
		}
		else
		{
			RELEASE_OBJECT_REF(StackVal);
		}
	}
	Function_74(bParam0);
	if (IS_BLIP_VALID(Local_196[bParam08]))
	{
		REMOVE_BLIP(Local_196[bParam08]);
	}
	return 1;
}

void Function_74(int iParam0) //Position: 0x2856 / 10326
{
	Function_76("REMOVE_GLOW_FROM_BAG", iParam0);
	if (!Function_66(Local_196[iParam08].f_24, 1))
	{
		return;
	}
	Function_39(&Local_196[iParam08] + 24, 1);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT_GLOW(StackVal);
	}
	return;
}

void Function_75(bool bParam0) //Position: 0x28AE / 10414
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = _GET_OBJECT_ATTACHMENT(bParam0);
		if (IS_ATTACHMENT_VALID(bVar0))
		{
			REMOVE_OBJECT_ATTACHMENT(bVar0);
		}
		bVar1 = GET_OBJECT_ANIMATOR_ON_OBJECT(bParam0);
		if (IS_OBJECT_ANIMATOR_VALID(bVar1))
		{
			DESTROY_OBJECT_ANIMATOR(bVar1);
		}
	}
	return;
}

void Function_76(var uParam0, int iParam1) //Position: 0x28E4 / 10468
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	return;
}

void Function_77(bool bParam0) //Position: 0x28F2 / 10482
{
	int iVar0;
	
	if (DECOR_GET_INT_VERBOSE(bParam0, "ClearRequest", &iVar0))
	{
		RESET_THIS_TREE_TYPE_CLEARING(iVar0);
	}
	return;
}

bool Function_78(bool bParam0, bool bParam1) //Position: 0x2919 / 10521
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_79(), 24);
	if (bParam1)
	{
		stradd(&cVar0, I2STR(bParam0), 24);
	}
	else
	{
		stradd(&cVar0, I2STR(Local_61[bParam07]), 24);
	}
	return FIND_OBJECT_IN_LAYOUT(Local_196.f_656, &cVar0);
}

var Function_79() //Position: 0x294E / 10574
{
	return "FlagSpawn_";
}

bool Function_80() //Position: 0x2961 / 10593
{
	return !(Function_82() || Function_81());
}

bool Function_81() //Position: 0x296F / 10607
{
	return Local_196.f_740 != 2;
}

bool Function_82() //Position: 0x297C / 10620
{
	return Local_196.f_740 != 3;
}

void Function_83(int iParam0) //Position: 0x2989 / 10633
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_96();
	bVar0 = Function_13();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_180))
	{
		DESTROY_OBJECT(iParam0->f_180);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	if (!Function_94(1))
	{
		UI_EXIT("MPSplash");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_93(81920, 0);
	Function_93(8388608, 0);
	Function_84(iParam0);
	if (iParam0->f_100 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
	}
	return;
}

void Function_84(int iParam0) //Position: 0x2A8F / 10895
{
	Function_90(iParam0);
	Function_85(iParam0, 0);
	Function_57(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_85(int iParam0, bool bParam1) //Position: 0x2AC9 / 10953
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_86(StackVal, StackVal, Function_89(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		DESTROY_OBJECT(iParam0->f_112);
	}
	if (bParam1)
	{
		iParam0->f_112 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		RELEASE_OBJECT_REF(iParam0->f_148);
	}
	if (IS_VOLUME_VALID(iParam0->f_416))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
		DESTROY_VOLUME(iParam0->f_416);
	}
	if (IS_OBJECT_VALID(iParam0->f_104))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
	}
	if (Function_66(iParam0->f_48, 2))
	{
		Function_39(iParam0 + 48, 2);
	}
	Function_42(iParam0 + 48, 1);
	return;
}

var Function_86(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x2B5A / 11098
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
		Function_88(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_88(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_87(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
		Function_88(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_88(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_88(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_88(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_87(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
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

void Function_87(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0x2C93 / 11411
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *bParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
}

vector3 Function_88(var uParam0, bool bParam1) //Position: 0x2CE8 / 11496
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_89() //Position: 0x2D02 / 11522
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_90(int iParam0) //Position: 0x2D31 / 11569
{
	Function_92(iParam0);
	Function_91(1048576);
	return;
}

void Function_91(int iParam0) //Position: 0x2D43 / 11587
{
	Function_38(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_92(int iParam0) //Position: 0x2D7C / 11644
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_92);
	}
	return;
}

void Function_93(int iParam0, bool bParam1) //Position: 0x2D93 / 11667
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

bool Function_94(int iParam0) //Position: 0x2DCE / 11726
{
	return Function_95(Global_79336, iParam0);
}

int Function_95(var uParam0, bool bParam1) //Position: 0x2DDD / 11741
{
	return (uParam0 && bParam1) == 0;
}

void Function_96() //Position: 0x2DEA / 11754
{
	if (Function_98(8))
	{
		Function_97();
	}
	Function_57(8, 0, 1);
	return;
}

void Function_97() //Position: 0x2E02 / 11778
{
	Function_57(32768, 1, 0);
	return;
}

bool Function_98(bool bParam0) //Position: 0x2E11 / 11793
{
	return Function_66(Global_76905.f_132, bParam0);
}

void Function_99(int iParam0) //Position: 0x2E22 / 11810
{
	Function_100(iParam0, 0);
	return;
}

void Function_100(var uParam0, int iParam1) //Position: 0x2E2E / 11822
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

void Function_101(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2E66 / 11878
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_140(5, 1);
	Function_91(4096);
	switch (Function_139())
	{
		case 0x00000011:
		case 0x00000002:
			Function_102(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
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

void Function_102(var uParam0, var uParam1, int iParam2) //Position: 0x2F78 / 12152
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_130(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_137(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_46(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_130(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_137(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_46(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_103(17, 150, Function_137(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 50);
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

void Function_103(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3121 / 12577
{
	Function_127(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_49(iParam0), 1.0f, false, 0);
	Function_123(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_120(iParam3);
	}
	Function_115(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_104();
}

void Function_104() //Position: 0x3187 / 12679
{
	if (!Function_14())
	{
		if (!Function_114(1, 3, 1, 1))
		{
			Function_106(1);
			Function_105(1, 8);
		}
	}
	else
	{
		Function_5(0);
	}
	return;
}

void Function_105(var uParam0, int iParam1) //Position: 0x31B0 / 12720
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

void Function_106(bool bParam0) //Position: 0x31F2 / 12786
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_107();
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

void Function_107() //Position: 0x3243 / 12867
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_109(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_109(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_108(StackVal, StackVal, vVar0))
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

bool Function_108(vector3 vParam0) //Position: 0x32E4 / 13028
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_109(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x32FC / 13052
{
	int iVar0;
	
	iVar0 = Function_112(uParam2, uParam3);
	if (Function_111(iVar0))
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
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
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_110();
	return StackVal, StackVal, Function_110();
}

vector3 Function_110() //Position: 0x33E3 / 13283
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_111(int iParam0) //Position: 0x33EC / 13292
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_112(bool bParam0, bool bParam1) //Position: 0x3402 / 13314
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
				fVar2 = Function_113(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_113(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_111(bVar0) && !bParam1)
	{
		bVar0 = Function_112(bParam0, 1);
	}
	return bVar0;
}

float Function_113(vector3 vParam0, vector3 vParam3) //Position: 0x34C9 / 13513
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_114(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x34E6 / 13542
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

void Function_115(bool bParam0, bool bParam1, bool bParam2) //Position: 0x358A / 13706
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_89();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_119(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_118(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_117(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_116(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_119(), iVar1 + 1);
	return;
}

struct<16> Function_116(int iParam0) //Position: 0x35FC / 13820
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_117(int iParam0) //Position: 0x361D / 13853
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_118(int iParam0) //Position: 0x363E / 13886
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_119() //Position: 0x365F / 13919
{
	return "CQueue_Count";
}

void Function_120(int iParam0) //Position: 0x3674 / 13940
{
	Function_121(iParam0, 1);
	return;
}

void Function_121(int iParam0, bool bParam1) //Position: 0x3680 / 13952
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_42(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_122((iVar0 % 32)));
	}
	else
	{
		Function_39(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_122((iVar0 % 32)));
	}
	return;
}

bool Function_122(bool bParam0) //Position: 0x36D6 / 14038
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_123(int iParam0, int iParam1) //Position: 0x36E2 / 14050
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_126(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_49(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_48(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_124(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_49(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_49(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_49(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_124(int iParam0) //Position: 0x3764 / 14180
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_48(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_125(int iParam0) //Position: 0x3784 / 14212
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_126(int iParam0) //Position: 0x37B5 / 14261
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

void Function_127(bool bParam0, bool bParam1) //Position: 0x3933 / 14643
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_128();
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

var Function_128() //Position: 0x3A7F / 14975
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_129(var uParam0, bool bParam1, bool bParam2) //Position: 0x3ACC / 15052
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_130(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x3AE4 / 15076
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_48(iParam0) };
	Function_115(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_129(&fParam5, bParam8, iParam9);
	Function_46(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_132(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_120(iParam12);
	}
	Function_131(iParam0, 4);
	Function_104();
}

void Function_131(int iParam0, bool bParam1) //Position: 0x3B5A / 15194
{
	Function_39(&Global_50170[iParam022] + 32, bParam1);
	return;
}

void Function_132(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3B6E / 15214
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_126(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_49(iParam0));
	if ((bParam3 && Function_136(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_49(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_48(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_124(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_49(iParam0), &Var7, 0, 2, Function_136(iParam0, 4));
			if (!bParam3)
			{
				Function_133(iParam0, 4);
			}
		}
	}
}

void Function_133(int iParam0, bool bParam1) //Position: 0x3C2B / 15403
{
	Function_42(&Global_50170[iParam022] + 32, bParam1);
	return;
}

struct<24> Function_134(int iParam0) //Position: 0x3C3F / 15423
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_135(int iParam0) //Position: 0x3C6D / 15469
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_136(int iParam0, bool bParam1) //Position: 0x3C9D / 15517
{
	return Function_66(Global_50170[iParam022].f_32, bParam1);
}

bool Function_137() //Position: 0x3CB1 / 15537
{
	return "MP_Unstoppable_Icon_128";
}

float Function_138(int iParam0) //Position: 0x3CD1 / 15569
{
	return Global_50170[iParam022].f_12;
}

int Function_139() //Position: 0x3CE0 / 15584
{
	return Global_79349.f_16;
}

void Function_140(int iParam0, int iParam1) //Position: 0x3CEC / 15596
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_141() //Position: 0x3D11 / 15633
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_142(GET_LOCAL_SLOT(), 1, 0);
}

int Function_142(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3D28 / 15656
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_146(bParam0))
			{
				if (!Function_143(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_143(bool bParam0, int iParam1, bool bParam2) //Position: 0x3D6C / 15724
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_145(iParam1, bParam2);
	}
	if (!Function_146(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_144(iParam1), 64);
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

var Function_144(int iParam0) //Position: 0x3DED / 15853
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
	}
	return "UNKNOWN";
}

bool Function_145(int iParam0, bool bParam1) //Position: 0x4076 / 16502
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_146(bool bParam0) //Position: 0x4096 / 16534
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

bool Function_147() //Position: 0x4137 / 16695
{
	return Function_148(2);
}

bool Function_148(int iParam0) //Position: 0x4141 / 16705
{
	return Function_149(&Global_79349, iParam0);
}

int Function_149(var uParam0, bool bParam1) //Position: 0x4150 / 16720
{
	return Function_66(uParam0->f_44, bParam1);
}

void Function_150(int iParam0, int iParam1) //Position: 0x415F / 16735
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_151(int iParam0) //Position: 0x4179 / 16761
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_152() //Position: 0x4192 / 16786
{
	switch (Local_196.f_740)
	{
		case 0x00000000:
			if (Function_155())
			{
				return 102;
			}
			if (Function_154())
			{
				return 104;
			}
			if (Function_153())
			{
				return 103;
			}
			return 2;
			break;
		
		case 0x00000003:
			if (Function_155())
			{
				return 100;
			}
			if (Function_154())
			{
				return 99;
			}
			if (Function_153())
			{
				return 101;
			}
			return 11;
			break;
		
		case 0x00000001:
			if (Function_155())
			{
				return 105;
			}
			if (Function_154())
			{
				return 107;
			}
			if (Function_153())
			{
				return 106;
			}
			return 12;
			break;
	}
	return 4294967295;
}

bool Function_153() //Position: 0x4232 / 16946
{
	return Function_66(Global_79962, 512);
}

bool Function_154() //Position: 0x4242 / 16962
{
	return Function_66(Global_79962, 256);
}

bool Function_155() //Position: 0x4252 / 16978
{
	return Function_66(Global_79962, 16384);
}

int Function_156() //Position: 0x4262 / 16994
{
	int iVar0;
	
	iVar0 = 1;
	Function_487(3);
	Function_487(2);
	Function_412();
	if (NET_IS_SESSION_HOST())
	{
		Function_407();
	}
	iVar0 = Function_157();
	return iVar0;
}

int Function_157() //Position: 0x4287 / 17031
{
	int iVar0;
	
	Function_399();
	if (Function_398(&Local_382))
	{
		if (GET_NUM_PLAYERS() < 1)
		{
			Function_393(4294967293);
		}
		if (Function_392())
		{
			Function_390();
		}
		else if (Function_594())
		{
			Function_389(&Local_382);
			if (Function_388())
			{
				if (Function_387() == GET_LOCAL_SLOT())
				{
					Function_385(&Local_382, 1, 1, 0);
					Function_140(10, 1);
				}
				else
				{
					switch (Function_387())
					{
						case 0xFFFFFFFE:
						case 0xFFFFFFFD:
							Function_385(&Local_382, 1, 1, 0);
							break;
						
						case 0xFFFFFFFB:
							Function_385(&Local_382, 0, 1, 1);
							break;
						
						default:
							Function_385(&Local_382, 0, 1, 0);
							break;
						}
				}
			}
			else if (Function_387() == Function_141())
			{
				Function_385(&Local_382, 1, 1, 0);
				Function_140(10, 1);
			}
			else
			{
				switch (Function_387())
				{
					case 0xFFFFFFFE:
					case 0xFFFFFFFD:
						Function_385(&Local_382, 1, 1, 0);
						break;
					
					case 0xFFFFFFFB:
						Function_385(&Local_382, 0, 1, 1);
						break;
					
					default:
						Function_385(&Local_382, 0, 1, 0);
						break;
					}
				}
			}
	}
	if (Function_288(&Local_382 + 444, &Local_61 + 440))
	{
		if (!Local_382.f_428)
		{
			Local_382.f_428 = 1;
			Function_287(&Local_382 + 556);
			Function_284(&Local_382);
			if (Function_283(&Local_382))
			{
				Function_282(&Local_382, 0);
				Function_281(&Local_382);
			}
			Function_280(&Local_382, 0);
		}
		if (NET_IS_SESSION_HOST())
		{
			if (!Function_279(&Global_78578 + 96))
			{
				Function_276(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	if (Function_392())
	{
		Function_271(&Local_382 + 556, 4294967295);
	}
	else
	{
		Function_271(&Local_382 + 556, Global_83591);
	}
	iVar0 = Function_158(&Local_382);
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

int Function_158(int iParam0) //Position: 0x442C / 17452
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
	void fVar15;
	
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
	iParam0->f_64 = Function_270((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	if (Function_147())
	{
		if (bVar1)
		{
			switch (Function_141())
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
	if (Function_269(iParam0))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_66(iParam0->f_44, 2) || Function_66(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					iParam0->f_96 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", false, 6, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	fVar8 = Function_268();
	if (bVar1)
	{
		bVar9 = Function_267(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_104 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_148(8192) || Function_66(iParam0->f_48, 512)) && !Function_145(1, 1))
			{
				iVar6 = Function_266(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_66(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_42(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_265("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_264(2, NET_GET_NET_TIME());
								Function_261(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_93(65536, 1);
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
						fVar7 = (NET_GET_NET_TIME() - Function_260(2));
						if (!Function_145(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
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
					Function_93(65536, 0);
					Function_39(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_93(8388608, 1);
					iParam0->f_420 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_145(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_420) <= 2.0f)
					{
						Function_93(8388608, 0);
					}
				}
			}
			if (Function_259(iParam0 + 108, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_66(iParam0->f_44, 16))
					{
						Function_42(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_258(iParam0 + 108, &Global_78617 + 2648);
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
			if (IS_OBJECT_VALID(iParam0->f_180))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_180))
				{
					Function_257(iParam0->f_180, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_57(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_412 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_160);
			Function_93(65536, 0);
			Function_93(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_66(iParam0->f_44, 8))
			{
				Function_256(0);
			}
			else if (bVar1)
			{
				iParam0->f_144 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
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
			if (Function_255(iParam0 + 108, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_104 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_104 = "";
						break;
					
					default:
						break;
					}
			}
			Function_251(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_235(iParam0, iParam0->f_12 != 0);
			}
			Function_232(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_232(iParam0, 1);
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
			Function_232(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_66(iParam0->f_44, 512))
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
			Function_232(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_231();
				Function_57(32, 0, 1);
				Function_230();
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_232(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_96();
			}
			break;
		
		case 0x00000008:
			if (Function_66(iParam0->f_44, 2))
			{
				if (Function_66(iParam0->f_44, 512))
				{
					if (!Function_66(iParam0->f_48, 4096))
					{
						Function_85(iParam0, 1);
						Function_42(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_145(16384, 1))
						{
							Function_85(iParam0, 0);
							Function_93(16384, 1);
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
					Function_232(iParam0, 1);
				}
			}
			else
			{
				Function_232(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_232(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_229(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
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
				Function_230();
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_228();
				Function_96();
				Function_57(32, 0, 1);
				iParam0->f_416 = CREATE_VOLUME_IN_LAYOUT(Function_89(), Function_18(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_100 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_100 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
				}
				iParam0->f_100 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_100, true, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_100, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_168);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_66(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_156);
					Function_42(iParam0 + 48, 8);
				}
				if (Function_223(StackVal, Function_66(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_208(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_66(iParam0->f_48, 32), 1))
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
				if (Function_66(iParam0->f_44, 1))
				{
					Function_39(iParam0 + 44, 1);
				}
				else
				{
					Function_90(iParam0);
					Function_85(iParam0, 0);
				}
				bVar0 = Function_13();
				Function_207(bVar0);
				if (Function_66(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_180))
				{
					DESTROY_OBJECT(iParam0->f_180);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_416))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
					DESTROY_VOLUME(iParam0->f_416);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_204(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
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
			else if (Function_203(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_66(iParam0->f_44, 8))
				{
					Function_202(iParam0 + 184, 0, 1, 1);
					Function_197(iParam0 + 184);
					Function_188(&bVar0, 0, 0, 0);
					Function_188(&bVar0, 0, 0, 0);
					Function_187(bVar0);
				}
				else
				{
					Function_202(iParam0 + 184, 1, 1, 1);
				}
				iParam0->f_180 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_180, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_180, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_180, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_186(bVar0);
					vVar10 = { StackVal, StackVal, Function_186(bVar0) };
					bVar13 = Function_185(StackVal, StackVal, vVar10, 0, 1, 0);
					if (Function_184(bVar13))
					{
						iParam0->f_4 = bVar13;
					}
				}
				if (StackVal != Global_29006)
				{
					Function_180(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_179(&(Global_29008[StackVal]), 4194304);
				}
				Function_178(32);
				*iParam0 = 13;
			}
			if (!Function_66(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_176);
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
				Function_178(32);
				Function_180(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_184(StackVal))
			{
				if (Function_177(StackVal))
				{
					if (StackVal && StackVal == 6)
					{
						if (!Function_176(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_176(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_176(&(Global_29008[StackVal]), 4194304))
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
					if (Function_184(bVar14))
					{
						if (StackVal && (!Function_177(bVar14) && !Function_176(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_175(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_174();
			if (!Function_66(iParam0->f_44, 32))
			{
				if (Function_172())
				{
					fVar15 = 4294967295;
					if (iParam0->f_144 >= 4294967295)
					{
						fVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_144);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
					}
					if (fVar15 == 4294967295)
					{
						fVar15 = Function_171(bVar0, 40);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
						else
						{
							fVar15 = Function_171(bVar0, 39);
							if (fVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
							}
							else
							{
								fVar15 = Function_171(bVar0, 42);
								if (fVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
								}
								else
								{
									fVar15 = Function_171(bVar0, 41);
									if (fVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
									}
									else
									{
										fVar15 = Function_171(bVar0, 43);
										if (fVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
										}
										else
										{
											fVar15 = Function_171(bVar0, 48);
											if (fVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
											}
											else
											{
												fVar15 = Function_171(bVar0, 46);
												if (fVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_66(iParam0->f_44, 64))
				{
					Function_170(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_93(16384, 0);
			Function_168(bVar0, !Function_66(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_152);
			iParam0->f_104 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_232(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_230();
			}
			else if (!Function_166())
			{
				Call_Loc(iParam0->f_164);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_160(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_159(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_232(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_232(iParam0, 1);
			Call_Loc(iParam0->f_172);
			if (StackVal)
			{
				if (Function_66(iParam0->f_44, 4))
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
			Function_232(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_229(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_232(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_229(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_232(iParam0, 1);
			if (Function_166())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_229(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_159(int iParam0) //Position: 0x5324 / 21284
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_160(int iParam0) //Position: 0x5340 / 21312
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_228();
		iVar0 = "";
		if (Function_66(iParam0->f_44, 256))
		{
			if (Function_66(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_279(&Global_78578 + 96))
			{
				if (FABS(Function_161(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, iVar0);
		NET_LOG(true, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

float Function_161(int iParam0) //Position: 0x5431 / 21553
{
	return -Function_162(iParam0);
}

float Function_162(int iParam0) //Position: 0x543D / 21565
{
	if (Function_279(iParam0))
	{
		if (Function_165(iParam0))
		{
			return StackVal;
		}
		Function_163();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_163() //Position: 0x550E / 21774
{
	if (!Function_164())
	{
	}
	return;
}

bool Function_164() //Position: 0x551B / 21787
{
	return NET_IS_IN_SESSION();
}

bool Function_165(bool bParam0) //Position: 0x5524 / 21796
{
	return Function_66(*bParam0, 2);
}

bool Function_166() //Position: 0x5531 / 21809
{
	return (HUD_IS_FADED() || Function_167(0));
}

bool Function_167(bool bParam0) //Position: 0x553F / 21823
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

void Function_168(bool bParam0, int iParam1) //Position: 0x55E3 / 21987
{
	struct<5> Var0;
	
	Function_93(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_169(256))
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

bool Function_169(bool bParam0) //Position: 0x5639 / 22073
{
	return Function_95(Global_78617.f_52, bParam0);
}

void Function_170(bool bParam0) //Position: 0x564A / 22090
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

int Function_171(bool bParam0, int iParam1) //Position: 0x5667 / 22119
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_172() //Position: 0x5678 / 22136
{
	return !Function_173();
}

bool Function_173() //Position: 0x5682 / 22146
{
	if (Function_14())
	{
		return (Function_139() != 1 || Function_139() != 0);
	}
	return 0;
}

void Function_174() //Position: 0x569B / 22171
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

void Function_175(bool bParam0) //Position: 0x56DA / 22234
{
	if (!Function_184(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_179(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_176(var uParam0, int iParam1) //Position: 0x5735 / 22325
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_177(bool bParam0) //Position: 0x5751 / 22353
{
	if (!Function_184(bParam0))
	{
		return 1;
	}
	return Function_176(&(Global_29008[bParam0]), 4);
}

void Function_178(int iParam0) //Position: 0x576D / 22381
{
	Function_38(&Global_78617 + 52, iParam0);
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x577E / 22398
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x578D / 22413
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
		if (Function_184(Global_29006))
		{
			Function_179(&(Global_29008[Global_29006]), 131072);
			Function_183(&(Global_29008[Global_29006]), 2097152);
			Function_181(Global_29006);
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
				if (Function_176(&(Global_29008[iVar0]), 4) || Function_176(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_183(&(Global_29008[iVar0]), 2097155);
					Function_179(&(Global_29008[iVar0]), 262144);
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
			WAIT(false);
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

void Function_181(int iParam0) //Position: 0x5898 / 22680
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_182())
			{
				return;
			}
		}
		if (!Function_176(&(Global_29008[iParam0]), 2048))
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

bool Function_182() //Position: 0x5917 / 22807
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_176(&(Global_29008[iVar0]), 4) || Function_176(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_183(var uParam0, int iParam1) //Position: 0x5974 / 22900
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_184(bool bParam0) //Position: 0x598B / 22923
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_185(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x59A1 / 22945
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

vector3 Function_186(bool bParam0) //Position: 0x5A3C / 23100
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_187(bool bParam0) //Position: 0x5A4D / 23117
{
	bool bVar0;
	void fVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, bVar0);
		if (fVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, fVar1, GET_WEAPON_MAX_AMMO(fVar1));
		}
		bVar0++;
	}
	return;
}

var Function_188(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x5A80 / 23168
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
					if (Function_196(bVar3, 1))
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
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_195(&Global_83591 + 276, bVar3)), 1, 0);
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
					if (Function_194(bVar2))
					{
						if (Function_193(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_196(bVar3, 1))
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
						if (Function_196(bVar3, 1))
						{
							bVar24 = (Function_195(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
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
				if (DECOR_GET_INT_VERBOSE(Function_89(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_89(), &cVar28, &uVar26))
						{
							Function_189(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_196(bVar3, 1))
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
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return iVar0;
}

void Function_189(var uParam0, int iParam1) //Position: 0x5D63 / 23907
{
	*iParam1 = Function_190(uParam0, Function_191(), 0);
	iParam1->f_4 = Function_190(uParam0, Function_191() + 8, Function_191());
	return;
}

var Function_190(var uParam0, int iParam1, int iParam2) //Position: 0x5D86 / 23942
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_122((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

int Function_191() //Position: 0x5DA5 / 23973
{
	return Function_192(39);
}

int Function_192(int iParam0) //Position: 0x5DB0 / 23984
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool Function_193(bool bParam0) //Position: 0x5DDE / 24030
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

bool Function_194(bool bParam0) //Position: 0x5E00 / 24064
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_195(int iParam0, bool bParam1) //Position: 0x5E12 / 24082
{
	if (Function_196(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_196(bool bParam0, int iParam1) //Position: 0x5E2C / 24108
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_197(int iParam0) //Position: 0x5E3F / 24127
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* cVar3[32];
	struct<2> Var11;
	
	Function_199(&Global_79378, iParam0);
	if (DECOR_GET_INT_VERBOSE(Function_89(), "DLCFM_Weapon", &iVar0))
	{
		iVar2 = 0;
		while (iVar2 <= iVar0)
		{
			strcpy(&cVar3, "DLCFM_Weapon_", 32);
			straddi(&cVar3, iVar2, 32);
			if (DECOR_GET_INT_VERBOSE(Function_89(), &cVar3, &uVar1))
			{
				Function_189(uVar1, &Var11);
				Function_198(StackVal, Var11, 1, 1, 1);
			}
			iVar2++;
		}
	}
	return;
}

void Function_198(struct<5> Param0) //Position: 0x5EB6 / 24246
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_194(Param0))
	{
		return;
	}
	bVar0 = Function_13();
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_196(bVar1, 1))
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

void Function_199(int iParam0, int iParam1) //Position: 0x5F2A / 24362
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_13();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_200(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_200(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_200(23, iParam1))
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
			bVar4 = Function_171(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_171(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_200(int iParam0, int iParam1) //Position: 0x60A7 / 24743
{
	return Function_201(iParam0, iParam1) < 4294967295;
}

int Function_201(int iParam0, int iParam1) //Position: 0x60B6 / 24758
{
	int iVar0;
	
	if (!Function_194(iParam0))
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

void Function_202(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x60E9 / 24809
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
		Function_198(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_203(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6134 / 24884
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

bool Function_204(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x61D1 / 25041
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
	return Function_205(bParam0, iVar0);
}

bool Function_205(bool bParam0, int iParam1) //Position: 0x6240 / 25152
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_206(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_206(iParam1, 64))
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

bool Function_206(var uParam0, int iParam1) //Position: 0x6319 / 25369
{
	return (uParam0 && iParam1) == 0;
}

void Function_207(bool bParam0) //Position: 0x6326 / 25382
{
	Function_93(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_208(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x6347 / 25415
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_13();
	Function_219();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_218();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_205(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, true, 1);
	}
	else
	{
		bVar9 = Function_169(256);
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
		Function_215(bVar0, 0);
		Function_210();
		Function_209(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_185(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_184(uVar14))
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

void Function_209(char* cParam0, vector3 vParam1) //Position: 0x64BE / 25790
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_210() //Position: 0x64FC / 25852
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_214(iVar1))
		{
			uVar2 = Function_213(iVar1);
			Function_211(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_211(int iParam0, bool bParam1) //Position: 0x652E / 25902
{
	if (!Function_214(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_212(222, Global_26401[iParam0], 0);
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
		Function_212((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_212(222, bParam1, 0);
	}
	return;
}

int Function_212(int iParam0, bool bParam1, int iParam2) //Position: 0x65B7 / 26039
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

int Function_213(int iParam0) //Position: 0x67B2 / 26546
{
	if (!Function_214(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_214(int iParam0) //Position: 0x67CA / 26570
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_215(bool bParam0, bool bParam1) //Position: 0x67DF / 26591
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_217(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_148(8192) && !Function_145(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_173())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
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
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_216())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_216() //Position: 0x68DF / 26847
{
	return Function_66(Global_79962, 2048);
}

var Function_217(bool bParam0) //Position: 0x68EF / 26863
{
	int iVar0;
	
	iVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return iVar0;
}

void Function_218() //Position: 0x6924 / 26916
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_219() //Position: 0x6939 / 26937
{
	Function_222();
	Function_44();
	Function_220();
	return;
}

void Function_220() //Position: 0x6948 / 26952
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_221();
	return;
}

void Function_221() //Position: 0x697C / 27004
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_222() //Position: 0x698D / 27021
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_223(bool bParam0, bool bParam1, bool bParam2) //Position: 0x69A6 / 27046
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
	Function_227(bParam0);
	Var6 = { StackVal, StackVal, Function_227(bParam0) };
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
	bVar15 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bParam0));
	if (IS_LAYOUTREF_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_LAYOUT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_226(bVar32);
			vVar12.f_4 = Function_224(StackVal, StackVal, StackVal, StackVal, vVar3, Function_226(bVar32));
		}
	}
	return Function_208(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_224(vector3 vParam0, vector3 vParam3) //Position: 0x6A60 / 27232
{
	var uVar0;
	
	Function_225(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6A7A / 27258
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_226(bool bParam0) //Position: 0x6A9D / 27293
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

vector3 Function_227(bool bParam0) //Position: 0x6AC4 / 27332
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_228() //Position: 0x6AD5 / 27349
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_229(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x6AEA / 27370
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

void Function_230() //Position: 0x6B13 / 27411
{
	UI_EXIT("MPSplash");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_231() //Position: 0x6B6D / 27501
{
	if (!Function_98(8))
	{
		Function_97();
	}
	Function_57(8, 1, 1);
	return;
}

void Function_232(int iParam0, int iParam1) //Position: 0x6B86 / 27526
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_112))
	{
		return;
	}
	if (Function_66(iParam0->f_48, 256) || Function_66(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_66(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_112);
	if (!Function_205(iParam0->f_104, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_112, true);
			Function_39(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_120);
				DETACH_CAMERASHOT(iParam0->f_124);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_234(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_66(iParam0->f_48, 8192))
		{
			Function_42(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_104);
			Function_233(1048576);
			if (IS_OBJECT_VALID(iParam0->f_116) && IS_OBJECT_VALID(iParam0->f_120))
			{
				GET_POSITION(iParam0->f_104, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_120, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_124, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_120, iParam0->f_104, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_124, iParam0->f_104, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_104, 1);
		}
	}
	return;
}

void Function_233(int iParam0) //Position: 0x6D77 / 28023
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

void Function_234(int iParam0) //Position: 0x6DD0 / 28112
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_DIRECTION(bVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_POSITION(bVar0, vVar1);
	SET_CAMERASHOT_FOV(bVar0, GET_CAMERASHOT_FOV(iParam0->f_116));
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0x6E11 / 28177
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = Function_13();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	bVar1 = Function_89();
	Function_186(bVar0);
	vVar2 = { StackVal, StackVal, Function_186(bVar0) };
	iParam0->f_148 = FIND_OBJECT_IN_LAYOUT(bVar1, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		SET_OBJECT_POSITION(iParam0->f_148, vVar2);
		Function_250(bVar0);
		SET_OBJECT_ORIENTATION(iParam0->f_148, Function_250(bVar0));
	}
	else
	{
		Function_250(bVar0);
		iParam0->f_148 = CREATE_POINT_IN_LAYOUT(bVar1, "DeathAnchorPoint", vVar2, Function_250(bVar0));
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_104))
	{
		iParam0->f_112 = Function_246(bVar1, 0, iParam0->f_148, 1, 0, 0);
		Function_42(iParam0 + 48, 256);
	}
	else
	{
		Function_186(iParam0->f_104);
		vVar5 = { StackVal, StackVal, Function_186(iParam0->f_104) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		VNORMALIZE(&vVar8);
		iParam0->f_112 = Function_238(bVar1, 0, iParam0->f_148, iParam0->f_104, iParam0->f_148, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1));
		iParam0->f_116 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 2);
		Function_237(iParam0->f_112, 0);
		iParam0->f_120 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 4);
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 5);
		Function_42(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar5, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar8, 1);
	}
	Function_236(iParam0->f_112);
	return;
}

void Function_236(int iParam0) //Position: 0x6F83 / 28547
{
	Function_218();
	Global_63118 = iParam0;
	return;
}

void Function_237(bool bParam0, bool bParam1) //Position: 0x6F91 / 28561
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_238(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x6FA6 / 28582
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
	Function_239(&bVar0, uParam2, uParam3, uParam4);
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

void Function_239(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7028 / 28712
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_245(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_244(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_243(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_242(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_241(&iVar0, uParam1, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_240(&iVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0,65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0,25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1,5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0,35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0,35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_240(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7143 / 28995
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_241(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7258 / 29272
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_242(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7371 / 29553
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
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

void Function_243(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x747B / 29819
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
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

void Function_244(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7581 / 30081
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3,512409f, 1,385313f, 11,99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,000168f, 1,399967f, 0,006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_245(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7631 / 30257
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6,044836f, 1,844389f, 8,871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,125951f, 1,612884f, -0,415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_246(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x76E8 / 30440
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
	Function_247(&bVar0, uParam2);
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

void Function_247(var uParam0, int iParam1) //Position: 0x775F / 30559
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_249(&iVar0, iParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_248(&iVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_248(var uParam0, bool bParam1) //Position: 0x77CB / 30667
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,221893f, 12.0f, 0,202029f };
	Function_250(bParam1);
	vVar3 = { StackVal, StackVal, Function_250(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_226(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_226(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548455f, 1,703024f, 0,63911f };
	Function_250(bParam1);
	vVar6 = { StackVal, StackVal, Function_250(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_226(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_226(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_249(var uParam0, bool bParam1) //Position: 0x788D / 30861
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,17905f, 10.0f, 0,125767f };
	Function_250(bParam1);
	vVar3 = { StackVal, StackVal, Function_250(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_226(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_226(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548457f, 1,703026f, -3,141586f };
	Function_250(bParam1);
	vVar6 = { StackVal, StackVal, Function_250(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_226(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_226(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_250(bool bParam0) //Position: 0x794F / 31055
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

void Function_251(int iParam0) //Position: 0x7976 / 31094
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	vector3 vVar19;
	bool bVar22;
	
	if (!Function_66(iParam0->f_48, 2048))
	{
		Function_42(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		if (!IS_ACTOR_VALID(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_104))
		{
			bVar2 = (&Global_78617 + 2604)->f_12;
			if (Function_194(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
			{
				bVar1 = true;
			}
			else
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_253(StackVal) };
				UI_SET_STRING("Generic_Dbuffer128_0", &Var3);
				UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			}
			UI_SET_TEXT(StackVal, Function_252("MPSplashItem.s1"));
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_104));
			bVar2 = GET_WEAPON_IN_HAND(iParam0->f_104);
			bVar1 = true;
		}
		else
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
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_194(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_104, &vVar19);
						bVar22 = CEIL((VDIST(vVar19, *(&Global_78617 + 2604 + 16)) * 1,093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar22), UI_GET_STRING("stat_yd"));
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

bool Function_252(int iParam0) //Position: 0x7C97 / 31895
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

struct<64> Function_253(bool bParam0) //Position: 0x7EAB / 32427
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_254();
	}
	if (!Function_146(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_254() //Position: 0x7F09 / 32521
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_255(var uParam0, int iParam1) //Position: 0x7F1A / 32538
{
	if (Function_259(uParam0, iParam1))
	{
		Function_258(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_256(int iParam0) //Position: 0x7F34 / 32564
{
	Function_12(&Global_79378, 0, iParam0);
	return;
}

void Function_257(bool bParam0, bool bParam1) //Position: 0x7F44 / 32580
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_89(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_194(bVar2))
			{
				SET_WEAPON_GOLD(iParam1, bVar2, Global_83823[bVar2]);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(bParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_258(var uParam0, int iParam1) //Position: 0x7FC0 / 32704
{
	*uParam0 = *iParam1;
	return;
}

bool Function_259(var uParam0, int iParam1) //Position: 0x7FCC / 32716
{
	return *uParam0 == *iParam1;
}

float Function_260(int iParam0) //Position: 0x7FD9 / 32729
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_261(int iParam0, int iParam1) //Position: 0x7FE9 / 32745
{
	Function_262(iParam0, (Function_263(iParam0) + iParam1));
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0x8000 / 32768
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_263(int iParam0) //Position: 0x8029 / 32809
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_264(int iParam0, int iParam1) //Position: 0x8039 / 32825
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_265(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8062 / 32866
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

var Function_266(int iParam0, bool bParam1, int iParam2) //Position: 0x80AD / 32941
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_146(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_143(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_267(int iParam0) //Position: 0x80F4 / 33012
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

var Function_268() //Position: 0x810A / 33034
{
	if (Function_66(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_269(int iParam0) //Position: 0x812A / 33066
{
	return (*iParam0 <= 1 && *iParam0 >= 14);
}

var Function_270(int iParam0, int iParam1) //Position: 0x813C / 33084
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_271(int iParam0, bool bParam1) //Position: 0x814F / 33103
{
	bool bVar0;
	int iVar1;
	
	if (!iParam0->f_68)
	{
		return;
	}
	if (Function_275())
	{
		Function_100(iParam0, 1);
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
					Function_274(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 0);
					Function_274(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 5);
				}
				else
				{
					Function_274(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 0);
					Function_274(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 5);
				}
			}
			else
			{
				NET_SCOREGRAPH_SETUP(iParam0->f_52, 0, iParam0->f_60);
				if (StackVal >= 4294967295)
				{
					if (*iParam0 == iParam0->f_24)
					{
						Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 1);
					}
					else if (*iParam0 <= iParam0->f_24)
					{
						Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
					}
					else
					{
						Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
						Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
					}
				}
				else
				{
					Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
				}
			}
		}
	}
	return;
}

void Function_272(struct<21> Param0) //Position: 0x82C8 / 33480
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
		NET_SCOREGRAPH_ADD_PLAYER_LABEL(StackVal, StackVal, Function_273((Param0 + iParam7), bParam6), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_PLAYER_SCORE(StackVal, StackVal, StackVal, Function_273((Param0 + iParam7), bParam6));
	}
}

var Function_273(bool bParam0, bool bParam1) //Position: 0x833D / 33597
{
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

void Function_274(struct<21> Param0) //Position: 0x835F / 33631
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
		NET_SCOREGRAPH_ADD_TEAM_LABEL(StackVal, iParam8, Function_273(bParam6, bParam7), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_TEAM_SCORE(StackVal, StackVal, iParam8, Function_273(bParam6, bParam7));
	}
}

bool Function_275() //Position: 0x83CA / 33738
{
	return Function_98(16384);
}

void Function_276(int iParam0, float fParam1) //Position: 0x83D6 / 33750
{
	Function_277(iParam0, -fParam1);
	return;
}

void Function_277(var uParam0, float fParam1) //Position: 0x83E4 / 33764
{
	Function_163();
	Function_278(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_278(var uParam0, int iParam1) //Position: 0x83F8 / 33784
{
	uParam0->f_4 = iParam1;
	Function_42(uParam0, 1);
	Function_39(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_279(int iParam0) //Position: 0x8415 / 33813
{
	return Function_66(*iParam0, 1);
}

void Function_280(int iParam0, bool bParam1) //Position: 0x8422 / 33826
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

void Function_281(int iParam0) //Position: 0x8442 / 33858
{
	Function_39(iParam0 + 44, 512);
	return;
}

void Function_282(int iParam0, bool bParam1) //Position: 0x8452 / 33874
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

bool Function_283(int iParam0) //Position: 0x8470 / 33904
{
	return Function_66(iParam0->f_44, 32);
}

void Function_284(int iParam0) //Position: 0x847F / 33919
{
	Function_285(iParam0, 33946);
	return;
}

void Function_285(int iParam0, int iParam1) //Position: 0x848E / 33934
{
	iParam0->f_168 = iParam1;
	return;
}

int Function_286() //Position: 0x849A / 33946
{
	return 0;
}

void Function_287(int iParam0) //Position: 0x84A1 / 33953
{
	iParam0->f_68 = 1;
	return;
}

bool Function_288(int iParam0, int iParam1) //Position: 0x84AC / 33964
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = "";
	if (!Function_384() && *iParam0 > 9)
	{
		*iParam0 = 9;
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_378(iParam0 + 48))
			{
				*iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_65(iParam0, 1) || Function_65(iParam0, 64))
			{
				if (Function_65(iParam0, 64))
				{
					Function_377(1);
				}
				else
				{
					Function_376();
				}
				bVar1 = Function_13();
				if (Function_65(iParam0, 8))
				{
				}
				else
				{
					Function_375(bVar1);
				}
				if (Function_279(iParam1) || Function_374(2))
				{
					Function_373(iParam0);
					if (Function_65(iParam0, 8))
					{
						*iParam0 = 5;
					}
					else
					{
						Function_372(bVar1, iParam0);
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
			if (Function_370(iParam1, 0, (iParam0->f_108 % 30) != 0))
			{
				Function_377(1);
				*iParam0 = 3;
				iParam0->f_108 = 0;
			}
			else
			{
				Function_363(iParam0, iParam1);
				iParam0->f_108++;
			}
			break;
		
		case 0x00000003:
			if (Function_370(iParam1, 1, (iParam0->f_108 % 30) != 0))
			{
				Function_373(iParam0);
				iParam0->f_44 = 4294967295;
				if (Function_65(iParam0, 8))
				{
					Function_360(iParam1);
					if (Function_65(iParam0, 64))
					{
						*iParam0 = 5;
					}
					else
					{
						iParam0->f_36 = Function_345(Function_359(), Function_141());
						Function_338(iParam0);
						*iParam0 = 4;
						Function_64(1);
					}
				}
				else
				{
					if (IS_STRING_VALID(&Global_83591 + 28[09]))
					{
						Function_337(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
					}
					if (Function_65(iParam0, 64))
					{
						*iParam0 = 7;
					}
					else
					{
						iParam0->f_36 = Function_323(Function_359(), iParam0);
						Function_317(iParam0, iParam1);
						*iParam0 = 8;
						Function_316(iParam0);
					}
				}
				if (NET_IS_SESSION_HOST())
				{
					Function_315(2, 1);
				}
			}
			else
			{
				iParam0->f_108++;
				Function_363(iParam0, iParam1);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_338(iParam0);
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 1, 1);
				Function_58(iParam0, 1);
				*iParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (!Function_279(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_276(iParam1, 6.0f);
				}
			}
			else if (Function_314(iParam1))
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_313("showdown_draw", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_312("GENMESS_SDOWNSTARTS", 0);
				DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
				if (!Function_65(iParam0, 64))
				{
					Function_309();
					bVar1 = Function_13();
					Function_308(bVar1, iParam0);
				}
				Function_56();
				*iParam0 = 9;
			}
			else
			{
				bVar0 = CEIL(Function_161(iParam1));
				if (StackVal != bVar0)
				{
					iParam0->f_4 = bVar0;
					switch (StackVal)
					{
						case 0x00000004:
							Function_313("showdown_ready", iVar2, 2.0f, 0, 0, 0, 0);
							Function_312("GENMESS_SDABOUTSTART", 0);
							break;
						}
					}
			}
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_317(iParam0, iParam1);
			}
			else
			{
				if (!Function_65(iParam0, 64))
				{
					UI_SHOW("Reticle");
					SET_PLAYER_CONTROL(0, 1, 1, 1);
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
				}
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (!Function_279(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_276(iParam1, (4.0f + 1.0f));
				}
			}
			else if (Function_314(iParam1))
			{
				if (!Function_65(iParam0, 64))
				{
					Function_58(iParam0, 1);
					Function_309();
					UI_EXIT("MPSplash");
					Function_307(Function_13(), iParam0);
				}
				Function_56();
				Function_313("standoff_go", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_312("GENMESS_STANDSTART", 0);
				AUDIO_MUSIC_SUSPEND(0);
				*iParam0 = 9;
			}
			else
			{
				bVar0 = CEIL(Function_161(iParam1));
				if (StackVal != bVar0)
				{
					iParam0->f_4 = bVar0;
					if (bVar0 != 4 && 0)
					{
						Function_313("standoff_wait", iVar2, 2.0f, 0, 0, 0, 0);
					}
					else if (bVar0 == 4)
					{
						Function_312("GENMESS_STANDABOUTSTART", 0);
						Function_313("showdown_ready", iVar2, 3.0f, 0, 0, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000009:
			Function_51(iParam0, 0);
			if (NET_IS_SESSION_HOST())
			{
				Function_306(iParam1 + 12);
			}
			*iParam0 = 10;
		
		case 0x0000000A:
			Function_304(iParam0);
			if (Function_291(iParam0, iParam1))
			{
				*iParam0 = 11;
				Function_290();
				iParam0->f_88 = GET_CURRENT_GAME_TIME();
			}
			break;
		
		case 0x0000000B:
			Function_304(iParam0);
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 6.0f)
			{
				UI_HIDE("XpHud");
				Function_51(iParam0, 1);
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (NET_IS_SESSION_HOST())
			{
				Function_315(3, 0);
			}
			Function_304(iParam0);
			if (!Function_65(iParam0, 128))
			{
				if (iParam0->f_88 != 0.0f || (GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 10.0f)
				{
					if (Function_164())
					{
						if (Function_279(&Global_78578 + 96))
						{
							if (Function_161(&Global_78578 + 96) < (Global_83591.f_16 * 0,5f))
							{
								if (IS_STRING_VALID(&Global_83591 + 28[09]))
								{
									Function_337(&Global_83591 + 28[09], (&Global_83591 + 28[09])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
							else if (Function_161(&Global_78578 + 96) < 30.0f)
							{
								if (IS_STRING_VALID(&Global_83591 + 28[19]))
								{
									Function_337(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
						}
					}
					Function_289(iParam0, 128);
				}
			}
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_289(int iParam0, int iParam1) //Position: 0x8A89 / 35465
{
	Function_42(iParam0 + 24, iParam1);
	return;
}

void Function_290() //Position: 0x8A98 / 35480
{
	float fVar0;
	bool bVar1;
	
	fVar0 = (UI_ANIM_GET_TIME("XpComboTimer") / 20.0f);
	bVar1 = FLOOR((32.0f * fVar0));
	UI_ANIM_SETUP("XpComboTimer", 0.0f, bVar1, bVar1);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

bool Function_291(int iParam0, int iParam1) //Position: 0x8AEE / 35566
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	int iVar8;
	
	if (NET_IS_SESSION_HOST() && iParam1->f_16 != 4294967295)
	{
		Function_302(iParam0, iParam1);
	}
	if (iParam1->f_16 == 4294967295)
	{
		return 0;
	}
	iVar0 = "";
	if (iParam1->f_16 == 4294967292)
	{
		if (Function_65(iParam0, 8))
		{
			Function_313("showdown_timeout", iVar0, 2.0f, 0, 0, 0, 0);
			Function_312("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_313("standoff_timeout", iVar0, 2.0f, 0, 0, 0, 0);
			Function_312("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		Function_300("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		return 1;
	}
	if (iParam1->f_16 == 4294967291)
	{
		Function_313("showdown_tie", iVar0, 2.0f, 0, 0, 0, 0);
		Function_300("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (Function_65(iParam0, 8))
		{
			Function_312("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_312("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		return 1;
	}
	if (Function_65(iParam0, 8))
	{
		bVar1 = Function_66(iParam1->f_16, 4);
		iVar2 = iParam1->f_16 & 1;
		Var3 = { StackVal, StackVal, StackVal, Function_296(iVar2, 0) };
		if (iVar2 == Function_141())
		{
			bVar7 = "mp_teammsg_blue_start";
			iVar8 = "mp_teammsg_blue_end";
			Function_300("FTR_BOUNTY_HUNTER_COMPLETE_SONG_01", 1, 0, 0, 0, 0);
			if (Function_295(iParam1, GET_LOCAL_SLOT()))
			{
				if (bVar1)
				{
					Function_292(100.0f, "xp_showdown_flawless");
					Function_312("GENMESS_SDSURVIVEUNTOUCH", 0);
				}
				else
				{
					Function_292(50.0f, "xp_showdown_flawless");
					Function_312("GENMESS_GANGWINSSDOWN", 0);
				}
			}
			else
			{
				Function_312("GENMESS_GANGWINSSDOWN", 0);
			}
		}
		else
		{
			Function_300("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
			bVar7 = "mp_teammsg_red_start";
			iVar8 = "mp_teammsg_red_end";
			Function_312("GENMESS_GANGLOSESDSTART", 0);
		}
		Function_59();
		Function_313("showdown_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, bVar7, &Var3, iVar8, 0);
		if (bVar1)
		{
			Function_313("showdown_flawless", "HUD_MP_PRINT_AWESOME_MASTER", 2.0f, 0, 0, 0, 0);
		}
	}
	else
	{
		Function_300("MEX_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (iParam1->f_16 == GET_LOCAL_SLOT())
		{
			Function_292(75.0f, "xp_standoff");
			Function_313("standoff_won_you", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, 0, 0, 0, 0);
			Function_312("GENMESS_WINSOSTARTMATCH", 0);
		}
		else
		{
			Function_312("GENMESS_LOSESOSTARTMATCH", 0);
			Function_313("standoff_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, Function_252(iParam1->f_16), 0, 0, 0);
		}
	}
	return 1;
}

int Function_292(bool bParam0, int iParam1) //Position: 0x8F99 / 36761
{
	if (!Function_173())
	{
		Global_83822 = 1;
	}
	Function_293(487, (bParam0 * Global_3362), iParam1);
	return 1;
}

void Function_293(var uParam0, bool bParam1, int iParam2) //Position: 0x8FBA / 36794
{
	Function_294(uParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_294(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x8FD6 / 36822
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

bool Function_295(int iParam0, bool bParam1) //Position: 0x91F6 / 37366
{
	return ((!Function_143(bParam1, 2, 1) && !Function_143(bParam1, 16384, 1)) && (*iParam0 + 20)[bParam1] == 4294967295);
}

struct<16> Function_296(int iParam0, int iParam1) //Position: 0x921A / 37402
{
	return StackVal, StackVal, StackVal, Function_297(Function_298(iParam0), iParam1);
}

struct<16> Function_297(bool bParam0, bool bParam1) //Position: 0x922C / 37420
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

int Function_298(int iParam0) //Position: 0x9261 / 37473
{
	if (!Function_299())
	{
		return 0;
	}
	return StackVal;
}

bool Function_299() //Position: 0x927A / 37498
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_300(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9287 / 37511
{
	AUDIO_MUSIC_ONE_SHOT(uParam0, Function_301(iParam1), iParam2, iParam3, iParam4, iParam5);
}

var Function_301(int iParam0) //Position: 0x92A1 / 37537
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

void Function_302(int iParam0, int iParam1) //Position: 0x97DE / 38878
{
	bool bVar0;
	var uVar1[2];
	var uVar4[2];
	int iVar7;
	bool bVar8;
	
	if (!Function_279(iParam1))
	{
	}
	else if (Function_162(iParam1) < 20.0f)
	{
		iParam1->f_16 = 4294967292;
		return;
	}
	if (Function_65(iParam0, 8))
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_303(bVar0))
			{
				iVar7 = Function_142(bVar0, 0, 0);
				if (iVar7 >= 4294967295)
				{
					uVar4[iVar7]++;
					if (Function_295(iParam1, bVar0))
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
			iParam1->f_16 = 4294967291;
			return;
		}
		bVar0 = false;
		while (bVar0 <= 2)
		{
			if (uVar1[bVar0] >= 0)
			{
				iParam1->f_16 = bVar0;
				if (uVar1[bVar0] == uVar4[bVar0])
				{
					Function_42(iParam1 + 16, 4);
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
			if (Function_303(bVar0))
			{
				if (Function_295(iParam1, bVar0))
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
			iParam1->f_16 = bVar8;
		}
		else
		{
			iParam1->f_16 = 4294967292;
		}
	}
	return;
}

bool Function_303(bool bParam0) //Position: 0x9923 / 39203
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_146(bParam0);
}

void Function_304(int iParam0) //Position: 0x9939 / 39225
{
	bool bVar0;
	
	if (Function_65(iParam0, 8))
	{
		if (!Function_65(iParam0, 256))
		{
			bVar0 = Function_13();
			if (!Function_205(bVar0, 0))
			{
				Function_289(iParam0, 256);
			}
			else if (!ACTOR_HAS_ANIM_SET(bVar0, Function_305()))
			{
				Function_289(iParam0, 256);
			}
			else if (!IS_ACTOR_PLAYING_NODE_IN_TREE(bVar0, "MP_Showdown/Idles"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				Function_289(iParam0, 256);
			}
		}
	}
	return;
}

bool Function_305() //Position: 0x99B1 / 39345
{
	return "mp_showdown";
}

void Function_306(int iParam0) //Position: 0x99C5 / 39365
{
	*iParam0++;
	return;
}

void Function_307(bool bParam0, int iParam1) //Position: 0x99D3 / 39379
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

void Function_308(bool bParam0, var uParam1) //Position: 0x9A1E / 39454
{
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_END_FORCE_HOLSTER(bParam0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, uParam1->f_28);
	}
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_309() //Position: 0x9A5C / 39516
{
	UI_SHOW("XpHud");
	UNK_0xA6403262(4294967295, UI_GET_STRING("Common_Null"));
	UI_SHOW("XPMultiplier");
	UI_SHOW("XPComboTimer");
	UI_SET_TEXT("XPComboLevel", Function_310(0));
	UI_ANIM_SETUP("XpComboTimer", 20.0f, 32, false);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

var Function_310(bool bParam0) //Position: 0x9AE8 / 39656
{
	bool bVar0;
	
	bVar0 = Function_311();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_311() //Position: 0x9AFF / 39679
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

void Function_312(char* cParam0, bool bParam1) //Position: 0x9BBB / 39867
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (bParam1)
		{
			iVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, cParam0, iVar0, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_313(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9BFB / 39931
{
	if (IS_STRING_VALID(bParam3))
	{
		PRINT_BIG_FORMAT(bParam2, bParam0, bParam3, iParam4, iParam5, iParam6, 0, iParam1);
	}
	else
	{
		PRINT_BIG(bParam0, bParam2, 0, 0, iParam1);
	}
}

bool Function_314(int iParam0) //Position: 0x9C2B / 39979
{
	if (Function_279(iParam0))
	{
		if (Function_161(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_315(int iParam0, bool bParam1) //Position: 0x9C46 / 40006
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

void Function_316(int iParam0) //Position: 0x9C76 / 40054
{
	if (iParam0->f_96 != 4294967295)
	{
		NET_GAMER_ICON_FORCE_VISIBILITY(iParam0->f_96, 2);
	}
	NET_GAMER_ICON_FORCE_VISIBILITY(GET_LOCAL_SLOT(), 2);
	return;
}

void Function_317(int iParam0, int iParam1) //Position: 0x9C93 / 40083
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_65(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_322();
			Function_312(&Global_79349 + 48, 0);
			Function_289(iParam0, 32);
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
				iParam0->f_96 = Function_321(iParam1);
				NET_GAMER_SET_TEAM(iParam0->f_96, 0);
				break;
			
			case 0x00000001:
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000002:
				DECOR_SET_BOOL(Function_13(), "ForceAim", true);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				Function_320("standoff_title");
				break;
			
			case 0x00000003:
				DECOR_SET_BOOL(Function_13(), "ForceAim", true);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				PPP_LOAD_PRESET(Function_62());
				iParam0->f_100 = Function_319(Function_13());
				Function_289(iParam0, 2);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000005:
				Function_58(iParam0, 0);
				if (iParam0->f_96 != 4294967295)
				{
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("standoff_help_target"), UI_GET_STRING(Function_252(iParam0->f_96)), 0, 0);
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
				Function_318(8, 0.0f, 4000, 1000);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			}
	}
	return;
}

void Function_318(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9EBB / 40635
{
	AUDIO_MUSIC_SET_MOOD(Function_301(iParam0), iParam1, iParam2, iParam3);
}

var Function_319(bool bParam0) //Position: 0x9ED1 / 40657
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_186(bParam0);
	vVar6 = { StackVal, StackVal, Function_186(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0,5f, -0,5f, -0,5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1,5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_13(), "LookItMeLight", vVar6, 6.0f, 6.0f, 6.0f, 2,5f);
}

void Function_320(bool bParam0) //Position: 0x9F46 / 40774
{
	UI_SET_TEXT("MPSplashItem.s0", bParam0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", 17);
	UI_ENTER("MPSplash");
	return;
}

var Function_321(bool bParam0) //Position: 0x9FA9 / 40873
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
		if ((*bParam0 + 20)[bVar1] == 4294967295 && bVar1 == bVar2)
		{
			iVar0++;
		}
		bVar1++;
	}
	if (iVar0 < 0)
	{
		return 4294967295;
	}
	iVar3 = (RAND_INT_RANGE(false, 1000) % iVar0);
	iVar4 = 0;
	bVar1 = (bVar2 + 1 % 16);
	bVar5 = false;
	while (!bVar5 && iVar4 > 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if ((*bParam0 + 20)[bVar1] == 4294967295 && iVar4 <= iVar3)
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

void Function_322() //Position: 0xA052 / 41042
{
	PRINT_HELP_FORMAT(6.0f, "CTF_ffa_rules_0", I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0, 0, 2, 0, 0);
	Function_265("CTF_ffa_rules_1", 5.0f, 1, 0, 2, 1, 0);
	return;
}

int Function_323(bool bParam0, bool bParam1) //Position: 0xA0A7 / 41127
{
	int iVar0;
	var uVar1;
	
	iVar0 = Function_336(Function_13(), "Me");
	uVar1 = Function_335(bParam0);
	bParam1->f_40 = CREATE_OBJECT_LOCATOR(iVar0, "gunLocator");
	if (!OBJECT_LOCATOR_ATTACH_TO_OBJECT_BONE(bParam1->f_40, iVar0, "wrist_r_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f))
	{
	}
	return Function_324(bParam0, 0, iVar0, uVar1, bParam1->f_40, 1, 0, 0);
}

int Function_324(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xA110 / 41232
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
	Function_325(&bVar0, uParam2, uParam3, uParam4);
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

void Function_325(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA18F / 41359
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_334(&iVar0, uParam1, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_333(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_332(&iVar0, uParam1, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_331(&iVar0, uParam1, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_330(&iVar0, uParam1, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_329(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_328(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_327(&iVar0, uParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_326(&iVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 0, 0,05f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2,5f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 1,5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 4, 5, 2,5f, 6, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 0,45f, 7);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 5, 6, 4.0f, 8, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 0,5f, 9);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 6, 7, 1,5f, 10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 7, 1.0f, 11);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 7, 8, 0,2f, 12, 0);
}

void Function_326(var uParam0, bool bParam1) //Position: 0xA2F3 / 41715
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,700737f, 1,6177f, 0,676565f, -3,701995f, 9,551663f, -0,076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_327(var uParam0, bool bParam1) //Position: 0xA368 / 41832
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,700737f, 1,6177f, 0,676565f, -3,701995f, 9,551663f, -0,076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 8,6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_328(var uParam0, bool bParam1) //Position: 0xA415 / 42005
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,700737f, 1,6177f, 0,676565f, -3,928657f, 42,53037f, -0,03432f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_329(var uParam0, bool bParam1) //Position: 0xA4BE / 42174
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,441266f, 1,590829f, 0,323404f, -3,052203f, -37,19361f, -0,093048f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_330(var uParam0, bool bParam1, bool bParam2) //Position: 0xA567 / 42343
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,441266f, 1,590829f, 0,323404f, -3,701995f, 9,551663f, -0,076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 8,6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_331(var uParam0, bool bParam1, bool bParam2) //Position: 0xA61C / 42524
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.0f, 18,23245f, 4,313523f, -67,08659f, 0,237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0,380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31,69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_332(var uParam0, bool bParam1, bool bParam2) //Position: 0xA6DF / 42719
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.0f, 18,23245f, 4,313523f, -67,08659f, 0,237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0,380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31,69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_333(var uParam0, bool bParam1) //Position: 0xA7A6 / 42918
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 45,75f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,562671f, 1,496117f, -1,597335f, -3,967331f, 158,1299f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,103045f, 1,372172f, 0,061185f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0,964602f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 19,216f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 5,9696f);
	return;
}

void Function_334(var uParam0, bool bParam1, bool bParam2) //Position: 0xA872 / 43122
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,8127f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,351376f, 1,457621f, -1,083728f, -1,094235f, 158,9572f, -10,40062f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,06695f, 1,435368f, 0,003617f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0,181525f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0,04f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_335(bool bParam0) //Position: 0xA95C / 43356
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, "StandoffCenter");
}

var Function_336(bool bParam0, bool bParam1) //Position: 0xA978 / 43384
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

void Function_337(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA993 / 43411
{
	AUDIO_MUSIC_FORCE_TRACK(bParam0, Function_301(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_338(int iParam0) //Position: 0xA9AF / 43439
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_65(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_344();
			Function_312(&Global_79349 + 48, 0);
			Function_289(iParam0, 32);
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
				iParam0->f_92 = 2,5f;
				PPP_LOAD_PRESET(Function_60());
				Function_289(iParam0, 4);
				UI_SET_STYLE("MPSplashTitle", 16);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Var2 = { StackVal, StackVal, StackVal, Function_296(Function_141(), 1) };
				Function_343(Function_141());
				UI_SET_TEXT("MPSplashTitle", &Var2);
				break;
			
			case 0x00000003:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_13(), "Go");
				Function_58(iParam0, 1);
				Function_312("ANNOUNCE_VS", 0);
				CANCEL_TIME_WARP(0);
				break;
			
			case 0x00000004:
				iParam0->f_92 = 2,5f;
				PPP_LOAD_PRESET(Function_63());
				Function_289(iParam0, 2);
				Var2 = { StackVal, StackVal, StackVal, Function_296(Function_341(Function_141()), 1) };
				Function_343(Function_341(Function_141()));
				UI_SET_TEXT("MPSplashTitle", &Var2);
				UI_SET_STYLE("MPSplashTitle", 15);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000005:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_13(), "Go2");
				Function_58(iParam0, 1);
				CANCEL_TIME_WARP(0);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000006:
				iParam0->f_92 = 2,5f;
				PPP_LOAD_PRESET(Function_60());
				iParam0->f_100 = Function_340(Function_13());
				Function_289(iParam0, 4);
				Function_312("ANNOUNCE_YOU", 0);
				UI_SET_TEXT("MPSplashItem.s0", Function_339(GET_LOCAL_SLOT()));
				UI_SET_STRING("Generic_Dbuffer128_0", &Global_78480 + 32);
				UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
				UI_SET_STYLE("MPSplashTitle", 17);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000007:
				DECOR_REMOVE(Function_13(), "Go3");
				CANCEL_TIME_WARP(1);
				UI_EXIT("MPSplash");
				Function_58(iParam0, 1);
				if (IS_PS3())
				{
					Function_265("showdown_draw_help_ps3", (2,5f + 1.0f), 0, 0, 2, 1, 0);
				}
				else
				{
					Function_265("showdown_draw_help", (2,5f + 1.0f), 0, 0, 2, 1, 0);
				}
				break;
			}
	}
	return;
}

var Function_339(bool bParam0) //Position: 0xADE7 / 44519
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

var Function_340(bool bParam0) //Position: 0xAF8B / 44939
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_186(bParam0);
	vVar6 = { StackVal, StackVal, Function_186(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0,5f, -0,5f, -0,5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1,5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_13(), "LookItMeLight", vVar6, 1.0f, 1.0f, 1.0f, 2,5f);
}

int Function_341(int iParam0) //Position: 0xB000 / 45056
{
	if (iParam0 == 4294967295)
	{
		return 4294967295;
	}
	return Function_342(iParam0);
}

int Function_342(int iParam0) //Position: 0xB013 / 45075
{
	return (iParam0 + 1 % 2);
}

void Function_343(int iParam0) //Position: 0xB01F / 45087
{
	struct<16> Var0;
	
	strcpy(&Var0, "ANNOUNCE_TEAM_", 64);
	straddi(&Var0, Function_298(iParam0), 64);
	Function_312(&Var0, 0);
	return;
}

void Function_344() //Position: 0xB049 / 45129
{
	switch (Global_79349.f_16)
	{
		case 0x00000009:
			PRINT_HELP_FORMAT(6.0f, "CTF_sym_rules_0", I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0, 0, 2, 0, 0);
			Function_265("CTF_sym_rules_1", 5.0f, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000008:
			PRINT_HELP_FORMAT(6.0f, "CTF_one_rules_0", I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0, 0, 2, 0, 0);
			Function_265("CTF_one_rules_1", 5.0f, 1, 0, 2, 1, 0);
			break;
	}
	return;
}

int Function_345(bool bParam0, bool bParam1) //Position: 0xB10A / 45322
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = Function_341(bParam1);
	uVar1 = Function_357(bParam0, bParam1);
	uVar2 = Function_357(bParam0, iVar0);
	uVar3 = Function_336(Function_13(), "Me");
	return Function_346(bParam0, 0, uVar3, uVar1, uVar2, 0, 0, 0);
}

int Function_346(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xB145 / 45381
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
	Function_347(&bVar0, uParam2, uParam3, uParam4);
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

void Function_347(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0xB1C5 / 45509
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_356(&iVar0, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_355(&iVar0, uParam2);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_354(&iVar0, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_353(&iVar0, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_352(&iVar0, cParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_351(&iVar0, cParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_350(&iVar0, cParam1);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_349(&iVar0, uParam2, uParam3);
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_348(&iVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 12,5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 1,5f, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "Go", 2, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 1,5f, 3, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "Go2", 4, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 2,5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 5, cParam1, "Go3", 6, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 4,5f, 7);
}

void Function_348(var uParam0, bool bParam1, bool bParam2) //Position: 0xB2FA / 45818
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65,44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,5f, 6,064114f, 4,464365f, -37,3141f, -2,927814f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42,778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_349(var uParam0, bool bParam1, bool bParam2) //Position: 0xB3B6 / 46006
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65,44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,5f, 6,064114f, 4,4647f, -37,3141f, -2,927871f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42,778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_350(var uParam0, bool bParam1) //Position: 0xB472 / 46194
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 18,542f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 1,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,674432f, 0,879538f, 1,537114f, -0,349963f, 9,024257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,41889f, 0,869587f, -0,071906f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_351(var uParam0, bool bParam1) //Position: 0xB4FE / 46334
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 7,228f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,725417f, 1,294801f, -2,751867f, 2,473631f, 165,6309f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,533f, -0,21f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0,64f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18,028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_352(var uParam0, bool bParam1) //Position: 0xB5C6 / 46534
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 6,728f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,07f, 1,175f, -4,092f, 0.0f, 179,5041f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,074344f, 1,538012f, -0,054681f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18,028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 1,8226f);
	return;
}

void Function_353(var uParam0, bool bParam1) //Position: 0xB68A / 46730
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8,5f, 1,469942f, -1,747687f, -1,032928f, -98,24805f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,161f, 1,317305f, 0,622f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_354(var uParam0, bool bParam1) //Position: 0xB752 / 46930
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -8,5f, 1,469955f, -0,105855f, -1,02399f, -89,95139f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,024f, 1,317f, -0,115f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_355(var uParam0, bool bParam1) //Position: 0xB81A / 47130
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8,5f, 1,47f, -1,747912f, -1,011041f, 105,8626f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,153f, 1,316862f, 0,622f, 0.0f, 0.0f, 0.0f, 0);
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

void Function_356(var uParam0, bool bParam1) //Position: 0xB8E2 / 47330
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 8,5f, 1,469824f, -0,105534f, -1,030178f, 89,93437f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,023677f, 1,317106f, -0,115403f, 0.0f, 0.0f, 0.0f, 0);
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

var Function_357(bool bParam0, int iParam1) //Position: 0xB9AA / 47530
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, Function_358(iParam1));
}

var Function_358(int iParam0) //Position: 0xB9BA / 47546
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

bool Function_359() //Position: 0xB9FC / 47612
{
	return Global_83591.f_140;
}

void Function_360(int iParam0) //Position: 0xBA08 / 47624
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
				if ((*iParam0 + 20)[bVar0] != 4294967295)
				{
					Function_361(bVar1, 0, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_361(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBA4C / 47692
{
	if (!ACTOR_HAS_ANIM_SET(bParam0, Function_305()))
	{
		if (!SET_ANIM_SET_FOR_ACTOR(bParam0, Function_305(), 0))
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
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_362());
	}
	TASK_ACTION_PERFORM(bParam0, Function_362());
	return 1;
}

var Function_362() //Position: 0xBA8E / 47758
{
	return "MP_Showdown/Idles";
}

void Function_363(int iParam0, int iParam1) //Position: 0xBAA8 / 47784
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
		iVar1 = (*iParam1 + 20)[bVar0];
		if (iVar1 != 4294967295)
		{
			bVar2 = false;
			if (Function_65(iParam0, 8))
			{
				iVar9 = Function_141();
				if (iVar9 != 4294967295)
				{
					bVar2 = Function_366(Function_359(), iVar9, &vVar3, &uVar6, iVar1, (*iParam1 + 88)[iVar9]);
				}
			}
			else
			{
				bVar2 = Function_364(Function_359(), &vVar3, &uVar6, iVar1, 16);
			}
			if (bVar2)
			{
				SET_OBJECT_POSITION(Function_13(), vVar3);
			}
		}
	}
	return;
}

int Function_364(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xBB1C / 47900
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
	bVar0 = Function_335(bParam0);
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
		bVar4 = TO_FLOAT(Function_365(GET_LOCAL_SLOT()));
	}
	*uParam2 = { 0.0f, ((360.0f / bVar5) * bVar4), 0.0f };
	UNK_0x44986367(StackVal, &vVar6);
	if (DECOR_CHECK_EXIST(bVar0, "Narrow"))
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(2,8f, 2,8f, 2,8f), StackVal, StackVal) };
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

var Function_365(bool bParam0) //Position: 0xBBE7 / 48103
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

bool Function_366(bool bParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xBC22 / 48162
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
	bVar0 = Function_357(bParam0, iParam1);
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
		bVar4 = TO_FLOAT(Function_368(iParam1));
		bVar5 = TO_FLOAT(Function_367(GET_LOCAL_SLOT(), 1));
	}
	fVar6 = (bVar5 - ((bVar4 - 1.0f) / 2.0f));
	GET_OBJECT_ORIENTATION(bVar0, uParam3);
	DECOR_GET_VECTOR(bVar0, "Right", &vVar7);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar7, vVar1, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) * Vector(fVar6, fVar6, fVar6), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar10, 2.0f, iParam2, &uVar13))
	{
		if (bParam4 == 4294967295)
		{
		}
		*iParam2 = { StackVal, StackVal, vVar10 };
	}
	return 1;
}

var Function_367(bool bParam0, bool bParam1) //Position: 0xBCF3 / 48371
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = Function_142(bParam0, bParam1, 0);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 == bParam0)
		{
			return iVar1;
		}
		if (Function_142(bVar0, bParam1, 0) == iVar2)
		{
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

int Function_368(int iParam0) //Position: 0xBD3A / 48442
{
	return Function_369(iParam0, 1);
}

int Function_369(int iParam0, bool bParam1) //Position: 0xBD46 / 48454
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1) || !bParam1)
		{
			if (Function_142(bVar1, bParam1, 0) == iParam0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_370(int iParam0, bool bParam1, bool bParam2) //Position: 0xBD83 / 48515
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bVar5 = NET_IS_SESSION_HOST();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if ((*iParam0 + 20)[bVar1] == 4294967295)
			{
				iVar2++;
				if (bParam2)
				{
				}
			}
			else if (Function_146(bVar1))
			{
				if (Function_371(bVar1) || !bParam1)
				{
					bVar4 = GET_SLOT_ACTOR(bVar1);
					if (IS_ACTOR_VALID(bVar4))
					{
						if (Function_203(bVar4, 1, 0x41700000))
						{
							iVar0++;
							if (bParam2)
							{
							}
						}
						else if (bParam2)
						{
							iVar3++;
						}
					}
					else if (bParam2)
					{
						iVar3++;
					}
				}
				else if (bParam2)
				{
					iVar3++;
				}
			}
			else if (bParam2)
			{
				iVar3++;
			}
		}
		else
		{
			if (bParam2)
			{
				if ((*iParam0 + 20)[bVar1] != 4294967295)
				{
				}
			}
			if (bVar5 && (*iParam0 + 20)[bVar1] == 4294967295)
			{
				(*iParam0 + 20)[bVar1] = 4294967295;
			}
		}
		bVar1++;
	}
	if (bParam2)
	{
		if ((iVar3 + iVar2) + iVar0) != NET_GET_SESSION_GAMER_COUNT()
		{
		}
	}
	return iVar0 != (NET_GET_SESSION_GAMER_COUNT() - iVar2);
}

bool Function_371(bool bParam0) //Position: 0xBE83 / 48771
{
	return Function_143(bParam0, 4, 1);
}

void Function_372(bool bParam0, int iParam1) //Position: 0xBE90 / 48784
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

void Function_373(int iParam0) //Position: 0xBEF5 / 48885
{
	if (!Function_65(iParam0, 16))
	{
		HUD_FADE_IN(1,5f, 1065353216);
		SET_HUD_MAP_DRAW_ENABLED(0);
		UI_SUPPRESS("Reticle");
		UI_SUPPRESS("WeaponAmmo");
		UI_EXCLUDE("WeaponAmmo");
		NET_GAMER_ICONS_SHOW_LOCAL(1);
		if (Function_65(iParam0, 8))
		{
			if (Function_65(iParam0, 64))
			{
				Function_320("common_null");
				UI_EXIT("HudMPNoFun");
			}
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MP_SHOWDOWN2", iParam0 + 76);
			if (IS_STRING_VALID(&Global_83591 + 28[09]))
			{
				Function_337(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
			}
		}
		else if (Function_65(iParam0, 64))
		{
			Function_320("standoff_title");
			UI_EXIT("HudMPNoFun");
		}
		Function_289(iParam0, 16);
	}
	return;
}

bool Function_374(bool bParam0) //Position: 0xC004 / 49156
{
	if (!Function_299())
	{
		return 0;
	}
	return Function_66(Global_78578.f_88, bParam0);
}

int Function_375(int iParam0) //Position: 0xC01E / 49182
{
	iParam0 = iParam0;
	UI_ENTER("MpWeaponSuppressor");
	return 1;
}

void Function_376() //Position: 0xC041 / 49217
{
	Function_57(1024, 1, 0);
	Function_57(1, 0, 0);
	return;
}

void Function_377(int iParam0) //Position: 0xC055 / 49237
{
	Function_93(4, iParam0);
	return;
}

bool Function_378(int iParam0) //Position: 0xC061 / 49249
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_383();
	iVar1 = 0;
	if (!Function_55(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_382(iParam0[iVar03], 8);
		}
		else if (Function_381())
		{
			iVar1 = 1;
			Function_382(iParam0[iVar03], 8);
		}
		Function_382(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_55(iParam0[iVar03], 4))
		{
			if (!Function_55(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_55(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_55(iParam0[03], 8) || iVar1));
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
				Function_382(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_55(iParam0[iVar03], 4))
		{
			if (!Function_55(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_382(iParam0[iVar03], 2);
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
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_382(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_382(iParam0[iVar03], 2);
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
	Function_379();
	return 1;
}

void Function_379() //Position: 0xC3DC / 50140
{
	if (!Function_380(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_380(int iParam0) //Position: 0xC41C / 50204
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_381() //Position: 0xC438 / 50232
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

void Function_382(var uParam0, int iParam1) //Position: 0xC463 / 50275
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_383() //Position: 0xC474 / 50292
{
	if (!Function_380(128))
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

bool Function_384() //Position: 0xC4B6 / 50358
{
	return Function_374(1);
}

void Function_385(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC4C0 / 50368
{
	if (bParam1)
	{
		Function_140(7, 1);
		Function_140(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_147())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_151(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_386())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_151(37) > 3)
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
		Function_150(37, 0);
		Function_39(iParam0 + 44, 4);
	}
	else
	{
		Function_140(6, 1);
		Function_150(37, 0);
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

bool Function_386() //Position: 0xC56E / 50542
{
	return Function_148(16);
}

int Function_387() //Position: 0xC579 / 50553
{
	if (!Function_299())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_388() //Position: 0xC58E / 50574
{
	return Local_196.f_740 != 0;
}

void Function_389(bool bParam0) //Position: 0xC59B / 50587
{
	if (!Function_398(bParam0))
	{
	}
	if (!Function_94(2048))
	{
		Function_233(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*bParam0 = 15;
	return;
}

void Function_390() //Position: 0xC5CE / 50638
{
	if (!Local_382.f_424)
	{
		Local_382.f_424 = 1;
		AUDIO_MUSIC_SET_MOOD("OVERTIME", 0, 4294967295, 4294967295);
		if (Function_388())
		{
			Function_265("CTF_mul_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_312("GENMESS_OTENGAGED", 0);
		}
		else if (Function_82())
		{
			Function_265("CTF_sym_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_282(&Local_382, 1);
			Function_312("GENMESS_SDENGAGED", 0);
		}
		else if (Function_391())
		{
			Function_265("CTF_one_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			Function_282(&Local_382, 1);
			Function_312("GENMESS_SDENGAGED", 0);
		}
	}
	return;
}

bool Function_391() //Position: 0xC6D3 / 50899
{
	return Local_196.f_740 != 1;
}

bool Function_392() //Position: 0xC6E0 / 50912
{
	return Function_387() != 4294967290;
}

void Function_393(bool bParam0) //Position: 0xC6ED / 50925
{
	bool bVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		Function_397(bParam0);
		if (bParam0 > 0)
		{
			if (Function_388())
			{
				NET_LOG(true, "CTF Host", "CTF has determined a winner: #%s, %s with score %s", I2STR(bParam0), UI_GET_STRING(Function_339(bParam0)), I2STR(Function_395(bParam0)), 0);
			}
			else
			{
				NET_LOG(true, "CTF Host", "CTF has determined a winning team: #%s with score %s", I2STR(bParam0), I2STR(Function_394(bParam0)), 0, 0);
			}
		}
		else
		{
			NET_LOG(true, "CTF Host", "CTF is moving to overtime", 0, 0, 0, 0);
		}
	}
	else
	{
		bVar0 = bParam0;
		NET_SCRIPTMSG_SEND(3, 5, &bVar0, 1, 1);
	}
	return;
}

bool Function_394(int iParam0) //Position: 0xC7FF / 51199
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

int Function_395(bool bParam0) //Position: 0xC81B / 51227
{
	return Function_396(0, bParam0);
}

int Function_396(int iParam0, bool bParam1) //Position: 0xC827 / 51239
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_263(iParam0);
	}
	if (!Function_146(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

void Function_397(int iParam0) //Position: 0xC88E / 51342
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

bool Function_398(bool bParam0) //Position: 0xC8A2 / 51362
{
	return !(*bParam0 <= 15 && *bParam0 >= 20);
}

void Function_399() //Position: 0xC8B6 / 51382
{
	Function_400(&Global_78578 + 96, &Local_196 + 628, &Local_382 + 432, Global_83591.f_16, 0);
	return;
}

void Function_400(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4) //Position: 0xC8D7 / 51415
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (Function_164())
	{
		if (Function_279(iParam0))
		{
			bVar0 = CEIL(Function_161(iParam0));
			bVar1 = CEIL((fParam3 * 0,5f));
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
							fVar2 = ((((22.0f - Function_161(iParam0)) + 1.0f) * 1000.0f) / 178979.0f);
							if (bVar0 >= 1)
							{
								Function_300(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, fVar2, 1, 1);
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
							Function_300(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, 0.0f, 1, 1);
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
						Function_312("GENMESS_GCRUNNINGDOWN", 0);
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
							Function_337(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0, 4294967295, 4294967295, 3212836864, 0);
						}
						*uParam2 = 1;
					}
				}
				if ((bVar0 <= (bVar1 - 10) && bVar0 >= bVar1 + 10) || (bVar0 >= 15 && bVar0 <= 0))
				{
					Function_406();
					if (bVar0 >= 5 && (Global_76905.f_128 % 2) != 1)
					{
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
					if (bVar0 == bVar1)
					{
						Function_405("mp_match_half_over");
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
				}
				else if (!bParam4)
				{
					Function_404();
				}
			}
			if (!Function_392())
			{
				Function_402("mp_time_remaining_header");
				Function_401(Function_23(0, bVar0), bVar0 >= 5);
			}
			else
			{
				Function_402("mp_time_overtime_header");
				Function_401(ABS(bVar0), bVar0 < 4294967291);
			}
		}
	}
}

void Function_401(bool bParam0, bool bParam1) //Position: 0xCBA6 / 52134
{
	if (Global_76905.f_128 != bParam0)
	{
		Function_57(0x20000000, 1, 1);
	}
	Global_76905.f_128 = bParam0;
	Function_57(65536, bParam1, 1);
	return;
}

void Function_402(char* cParam0) //Position: 0xCBD3 / 52179
{
	if (Function_403(cParam0, &Global_76905))
	{
		Function_57(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_403(bool bParam0, bool bParam1) //Position: 0xCBF7 / 52215
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

void Function_404() //Position: 0xCC2B / 52267
{
	if (Function_98(1048576))
	{
		Function_57(0x10000000, 1, 1);
	}
	Function_57(1048576, 0, 1);
	return;
}

void Function_405(bool bParam0) //Position: 0xCC4E / 52302
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

void Function_406() //Position: 0xCC62 / 52322
{
	if (!Function_98(1048576))
	{
		Function_57(0x10000000, 1, 1);
	}
	Function_57(1048576, 1, 1);
	return;
}

int Function_407() //Position: 0xCC86 / 52358
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_388())
	{
		if (Function_411() && !Function_594())
		{
			NET_LOG(true, "Local State", "CTF_CLASSIC has determined that there's only one team remaining, we're quitting.", 0, 0, 0, 0);
			Function_393(4294967294);
		}
	}
	if (Function_314(&Global_78578 + 96))
	{
		if (!Function_594())
		{
			bVar0 = Function_409(Function_388(), 1, 1);
			if (bVar0 != 4294967291)
			{
				Function_393(bVar0);
			}
			else if (!Function_392())
			{
				Function_393(4294967290);
			}
			else if (!Function_388())
			{
				bVar0 = Function_408();
				if (bVar0 != 4294967295)
				{
					Function_393(bVar0);
				}
				else if (Function_162(&Global_78578 + 96) <= 180.0f)
				{
					Function_393(4294967291);
				}
			}
		}
	}
	else if (!Function_594())
	{
		bVar1 = Function_409(Function_388(), 0, 1);
		if (bVar1 != 4294967295)
		{
			Function_393(bVar1);
		}
	}
	return 0;
}

bool Function_408() //Position: 0xCD9C / 52636
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	bVar2 = false;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		switch (Function_142(bVar0, 1, 0))
		{
			case 0x00000000:
				if (!Function_143(bVar0, 16386, 0))
				{
					bVar1 = true;
				}
				break;
			
			case 0x00000001:
				if (!Function_143(bVar0, 16386, 0))
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

int Function_409(bool bParam0, bool bParam1, int iParam2) //Position: 0xCE27 / 52775
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
			if (Function_303(bVar0))
			{
				iVar4 = Function_395(bVar0);
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
	bVar1 = Function_410(iVar2);
	return bVar1;
}

bool Function_410(int iParam0) //Position: 0xCEB6 / 52918
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_394(0);
	iVar1 = Function_394(1);
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

int Function_411() //Position: 0xCEF3 / 52979
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 4294967295;
	bVar2 = false;
	while (bVar2 <= 16)
	{
		iVar1 = Function_142(bVar2, 1, 0);
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

void Function_412() //Position: 0xCF35 / 53045
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
	bool bVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;
	var uVar25;
	var uVar26;
	var uVar29;
	var uVar32;
	vector3 vVar35;
	int iVar38;
	
	Function_480(Local_196.f_512);
	bVar0 = Function_13();
	if (Function_388())
	{
		if (Function_255(&Local_196 + 624, &Local_61 + 436))
		{
			Function_478();
		}
	}
	else if (Function_391())
	{
		if (Function_255(&Local_196 + 624, &Local_61 + 436))
		{
			Function_474();
			Function_39(&Local_196 + 724, 4);
		}
	}
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	Local_196.f_632 = 0;
	bVar4 = Function_205(bVar0, 95);
	if (bVar4)
	{
		iVar6 = Function_473(bVar0);
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
		bVar5 = (Function_472(bVar0) || Function_471(bVar0));
		if (!bVar5 && Local_196.f_496 > 2)
		{
			Local_196.f_632 = Function_470(bVar0);
		}
	}
	if (Local_196.f_632)
	{
		Function_469(Local_196.f_496);
		vVar11 = { StackVal, StackVal, Function_469(Local_196.f_496) };
		if (!GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vVar11, &vVar1))
		{
			GET_POSITION(bVar0, &vVar1);
		}
		if (GET_ACTOR_VELOCITY(bVar0, &vVar14))
		{
			Function_468();
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(Function_468(), vVar14, vVar1), StackVal, StackVal) };
		}
	}
	bVar17 = Function_467();
	if (Local_196.f_504 != 4294967295)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			GET_OBJECT_POSITION(StackVal, &vVar7);
		}
	}
	fVar18 = GET_CURRENT_GAME_TIME();
	if (Local_196.f_504 < 4294967295 && Local_196.f_632)
	{
		if (!Function_466(Local_196.f_504))
		{
			Function_465();
		}
		else if (!Function_464(Local_196.f_504))
		{
			Function_465();
		}
		else
		{
			Function_461(Local_196.f_504, &vVar1);
		}
	}
	if (Local_196.f_496 >= 0)
	{
		if (!bVar4)
		{
			if (Local_196.f_496 == 2)
			{
				Function_460((*&Local_196 + 484)[0], 0, (*&Local_196 + 484)[1]);
				Function_456((*&Local_196 + 484)[1], 0);
			}
			else
			{
				Function_460((*&Local_196 + 484)[0], 0, 4294967295);
			}
			Function_456((*&Local_196 + 484)[0], 0);
		}
		else if (!IS_ACTOR_IN_VOLUME(bVar0, Local_196.f_516))
		{
			Function_265("CTF_ran_too_far_help", 0x41200000, 1, 0, 2, 1, 0);
			if (Local_196.f_496 == 2)
			{
				Function_454((*&Local_196 + 484)[1], 1, GET_LOCAL_SLOT());
				Function_456((*&Local_196 + 484)[1], 0);
			}
			Function_454((*&Local_196 + 484)[0], 1, GET_LOCAL_SLOT());
			Function_456((*&Local_196 + 484)[0], 0);
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
				if (!IS_OBJECT_IN_VOLUME(StackVal, Local_196.f_516))
				{
					NET_LOG(true, "CTF", "Bag #%s, locally owned and carried by %s, went out of bounds. Returning", I2STR(Local_196.f_500), I2STR(Function_453(Local_196.f_500)), 0, 0);
					Function_454(Local_196.f_500, 1, 4294967293);
				}
			}
		}
		if (Local_196.f_500 == 0)
		{
			if (Local_196.f_504 == 4294967295)
			{
				Function_465();
			}
			else if (!Function_466(Local_196.f_504) || Function_452(Local_196.f_504, 4294967291))
			{
				Function_465();
			}
		}
		if (bVar20)
		{
			bVar21 = Function_453(Local_196.f_500);
			if (bVar21 != 4294967294)
			{
				if (!IS_SLOT_VALID(bVar21))
				{
					Function_460(Local_196.f_500, 1, 4294967295);
				}
			}
		}
		if (Function_466(Local_196.f_500))
		{
			switch (StackVal)
			{
				case 0x00000000:
					Function_451(Local_196.f_500);
					if (bVar20 && !Function_594())
					{
						if (Function_80())
						{
							if (Function_450(&Local_61[Local_196.f_5007] + 12, 5.0f))
							{
								Function_449(Local_196.f_500);
							}
						}
						else if (Function_450(&Local_61[Local_196.f_5007] + 12, 2.0f))
						{
							Function_449(Local_196.f_500);
						}
					}
					break;
				
				case 0x00000005:
					if (GATEWAY_UPDATE((&Local_196 + 520[25])->f_12))
					{
						if (Function_66(Local_196.f_724, 4))
						{
							Function_39(&Local_196 + 724, 4);
							if (!Function_374(1))
							{
								HUD_CLEAR_OBJECTIVE_QUEUE();
								Function_448("CTF_one_obj_stayonpoint", 0x40f00000, 1, 2, 0, 0, 0);
							}
						}
					}
					else if (!Function_66(Local_196.f_724, 4))
					{
						Function_42(&Local_196 + 724, 4);
						if (!Function_374(1))
						{
							HUD_CLEAR_OBJECTIVE_QUEUE();
							Function_448("CTF_one_obj_get2point", 0x40f00000, 1, 2, 0, 0, 0);
						}
					}
				
				case 0x00000004:
					Function_451(Local_196.f_500);
					if (bVar20)
					{
						if (Function_388())
						{
							if (Local_61.f_424 >= 4294967295)
							{
								if (Local_196.f_500 != Local_61.f_424 && !Function_594())
								{
									if (Function_450(&Local_61[Local_196.f_5007] + 12, 10.0f))
									{
										Local_61.f_424 = 4294967294;
										Local_61.f_428 = Function_447();
										Local_61.f_432 = Function_445();
										Function_306(&Local_61 + 436);
										Function_444(Local_61.f_428, Local_61.f_432);
									}
								}
							}
							else if (Local_61.f_424 == 4294967294)
							{
								if (Local_196.f_500 <= Local_61.f_428)
								{
									if (Function_450(&Local_61[Local_196.f_5007] + 12, (0,2f * IntToFloat(Local_196.f_500))))
									{
										Function_443(Local_196.f_500);
										Function_449(Local_196.f_500);
									}
								}
							}
						}
						else if (Function_391())
						{
							if (Local_61.f_424 >= 4294967295)
							{
								if (Local_196.f_500 != Local_61.f_424 && !Function_594())
								{
									if (Function_450(&Local_61[Local_196.f_5007] + 12, 15.0f))
									{
										Local_61.f_424 = 4294967294;
										Function_443(Local_196.f_500);
										Function_441(Local_196.f_500);
										Function_306(&Local_61 + 436);
									}
								}
							}
							else if (Local_61.f_424 == 4294967294)
							{
								if (Function_450(&Local_61[Local_196.f_5007] + 12, 15.0f))
								{
									Function_444(Local_61.f_428, 0);
									Function_449(Local_196.f_500);
								}
							}
						}
					}
					break;
				
				case 0x00000002:
					Function_433(Local_196.f_500);
					if (bVar20)
					{
						if (Function_431(&Local_61[Local_196.f_5007] + 12, 60.0f))
						{
							NET_LOG(true, "CTF", "Bag %s deemed on ground too long, returning", I2STR(Local_196.f_500), 0, 0, 0);
							Function_454(Local_196.f_500, 1, 4294967293);
						}
					}
					if (Local_196.f_632)
					{
						if (Function_430(Local_196.f_500))
						{
							Function_461(Local_196.f_500, &vVar1);
						}
					}
					break;
				
				case 0x00000001:
					Function_433(Local_196.f_500);
					if (Local_196.f_632 && Function_430(Local_196.f_500))
					{
						Function_461(Local_196.f_500, &vVar1);
					}
					break;
				
				case 0x00000003:
					Function_433(Local_196.f_500);
					break;
				
				default:
					break;
			}
		}
		else
		{
			if (bVar20)
			{
				if (Local_61.f_424 == 4294967294)
				{
					if (Local_196.f_500 <= Local_61.f_428)
					{
						Function_443(Local_196.f_500);
						Function_449(Local_196.f_500);
					}
				}
			}
			Function_451(Local_196.f_500);
		}
		Local_196.f_500 = (Local_196.f_500 + 1 % bVar17);
		iVar19++;
	}
	if (Function_388())
	{
		Function_428();
	}
	if (!Function_594())
	{
		bVar22 = false;
		iVar23 = 0;
		bVar24 = false;
		if (Local_196.f_632)
		{
			if (Local_196.f_504 < 4294967295 && Local_196.f_508 >= 2,5f)
			{
				if (GET_ACTOR_OFFSET_WORLD_COORDS(bVar0, &vLocal_55, &uVar26))
				{
					vVar35 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_52, vVar7, StackVal) };
					if (!FIND_INTERSECTION(&uVar26, &vVar35, &uVar32, &uVar29, iLocal_60, iLocal_58, iLocal_59))
					{
						if ((fVar18 - Local_196.f_640) >= 1,5f)
						{
							Function_71(&Local_196 + 716);
						}
						else if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_196.f_716))
						{
							bVar22 = true;
						}
						else if (IS_SCRIPT_USE_CONTEXT_PRESSED(Local_196.f_716))
						{
							Function_427(Local_196.f_504, Local_196.f_496 < 0);
							Local_196.f_640 = fVar18;
							Function_71(&Local_196 + 716);
						}
					}
					else
					{
						Function_71(&Local_196 + 716);
					}
				}
				else
				{
					Function_71(&Local_196 + 716);
				}
			}
			else
			{
				Function_71(&Local_196 + 716);
			}
		}
		else
		{
			Function_71(&Local_196 + 716);
		}
		if (Local_196.f_496 >= 0)
		{
			Function_426(1, 1);
			Function_425(1, bVar0);
			if (Local_196.f_496 == 2)
			{
				SET_CUSTOM_ANIM_SPEED(bVar0, 0,8f);
			}
			else
			{
				SET_CUSTOM_ANIM_SPEED(bVar0, 0,9f);
			}
			if (Function_66(Local_196.f_724, 2))
			{
				if (!IS_BUTTON_DOWN(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 0))
				{
					Function_39(&Local_196 + 724, 2);
				}
			}
			if (Function_423() && iVar6)
			{
				if ((fVar18 - Local_196.f_644) >= 1,5f)
				{
				}
				else if (!Function_471(bVar0))
				{
					Function_421((*&Local_196 + 484)[0], (*&Local_196 + 484)[1]);
					iVar38 = (*&Local_196 + 484)[0];
					Function_419(iVar38);
					Function_75(StackVal);
					Function_226(StackVal);
					SET_OBJECT_POSITION(StackVal, Vector(Function_226(StackVal), StackVal, StackVal) + Vector(0.0f, -1000.0f, 0.0f));
					DESTROY_OBJECT(StackVal);
					if (Local_196.f_496 == 1)
					{
						iVar38 = (*&Local_196 + 484)[1];
						Function_419(iVar38);
						Function_75(StackVal);
						Function_226(StackVal);
						SET_OBJECT_POSITION(StackVal, Vector(Function_226(StackVal), StackVal, StackVal) + Vector(0.0f, -1000.0f, 0.0f));
						DESTROY_OBJECT(StackVal);
					}
					Function_71(&Local_196 + 720);
				}
			}
			if (Local_196.f_496 >= 0)
			{
				if (Local_196.f_732)
				{
					if ((IS_ATTACHMENT_VALID(Local_196.f_728) || DECOR_CHECK_EXIST(bVar0, "CTF_FastAttach")) || (fVar18 - Local_196.f_736) <= 3.0f)
					{
						if (DECOR_CHECK_EXIST(bVar0, "CTF_AttachNow") || (fVar18 - Local_196.f_736) <= 3.0f)
						{
							Local_196.f_732 = 0;
							REMOVE_OBJECT_ATTACHMENT(Local_196.f_728);
							Local_196.f_728 = "";
							uVar25 = Function_418(bVar0);
							Function_416((Local_196.f_496 - 1), uVar25);
							Function_415((Local_196.f_496 - 1), uVar25);
							ATTACH_OBJECTS(StackVal, bVar0, Function_417((Local_196.f_496 - 1)), Function_416((Local_196.f_496 - 1), uVar25), Function_415((Local_196.f_496 - 1), uVar25), 4294967295);
							SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, false);
							SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, false);
							DECOR_REMOVE(bVar0, "CTF_AttachNow");
							DECOR_REMOVE(bVar0, "CTF_FastAttach");
						}
					}
					else if (DECOR_CHECK_EXIST(bVar0, "CTF_Attach1st"))
					{
						Local_196.f_728 = ATTACH_OBJECTS_USING_LOCATOR(StackVal, bVar0, Function_414((Local_196.f_496 - 1)), "grab", Local_196.f_496 + 1);
						SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, false);
						SET_OBJECT_COLLIDE_WITH_OBJECT(StackVal, bVar0, false);
						DECOR_REMOVE(bVar0, "CTF_Attach1st");
						Local_196.f_736 = fVar18;
					}
				}
			}
		}
		else
		{
			Function_413();
			Local_196.f_732 = 0;
		}
		if (bVar5)
		{
			Function_71(&Local_196 + 720);
			Function_71(&Local_196 + 716);
		}
		else if (bVar22)
		{
			if (bVar24)
			{
				Local_196.f_716 = ADD_SCRIPT_USE_CONTEXT("CTF_action_return", bLocal_50, 4, false, 0, 0, 0, 4294967295, 0);
			}
			else if (Local_196.f_496 <= 2)
			{
				if (Local_196.f_496 == 0)
				{
					Local_196.f_716 = ADD_SCRIPT_USE_CONTEXT("CTF_action_grab", bLocal_50, 4, false, 0, 0, 0, 4294967295, 0);
				}
				else
				{
					Local_196.f_716 = ADD_SCRIPT_USE_CONTEXT("CTF_action_dblgrab", bLocal_50, 4, false, 0, 0, 0, 4294967295, 0);
				}
			}
		}
	}
	else
	{
		Function_71(&Local_196 + 720);
		Function_71(&Local_196 + 716);
	}
	return;
}

void Function_413() //Position: 0xDB08 / 56072
{
	Function_426(1, 0);
	Function_425(0, 0);
	return;
}

var Function_414(int iParam0) //Position: 0xDB18 / 56088
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

vector3 Function_415(int iParam0, bool bParam1) //Position: 0xDB62 / 56162
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return -17,8245f, 182,8487f, 9,7832f;
		}
		if (iParam0 == 1)
		{
			return 172,679f, 8,9688f, -196,476f;
		}
	}
	if (iParam0 == 0)
	{
		return -6,8245f, 182,8487f, 18,7832f;
	}
	if (iParam0 == 1)
	{
		return 172,679f, 8,9688f, -196,476f;
	}
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_416(int iParam0, bool bParam1) //Position: 0xDBD1 / 56273
{
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			return -0,0936f, -0,0867f, -0,0455f;
		}
		if (iParam0 == 1)
		{
			return 0,0422f, -0,0717f, -0,0232f;
		}
	}
	if (iParam0 == 0)
	{
		return -0,0362f, -0,137f, -0,0356f;
	}
	if (iParam0 == 1)
	{
		return 0,0398f, -0,133f, -0,0272f;
	}
	return 0.0f, 0.0f, 0.0f;
}

var Function_417(int iParam0) //Position: 0xDC40 / 56384
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

bool Function_418(bool bParam0) //Position: 0xDC74 / 56436
{
	bool bVar0;
	
	bVar0 = GET_ACTORENUM_MP_ANIM_SET_NAME(GET_ACTOR_ENUM(bParam0));
	if (STRINGS_ARE_EQUAL(bVar0, "fat"))
	{
		return 1;
	}
	return 0;
}

void Function_419(int iParam0) //Position: 0xDC95 / 56469
{
	int iVar0;
	
	Function_76("ENSURE_BAG_CARRYING_FIDELITY", iParam0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((*&Local_196 + 484)[iVar0] == iParam0)
		{
			(*&Local_196 + 484)[iVar0] = 4294967295;
			Function_420();
		}
		iVar0++;
	}
	return;
}

void Function_420() //Position: 0xDCEC / 56556
{
	Local_196.f_496 = Function_23(0, (Local_196.f_496 - 1));
	return;
}

void Function_421(int iParam0, int iParam1) //Position: 0xDD02 / 56578
{
	struct<13> Var0;
	
	if (!Function_422(iParam0, 74))
	{
		return;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_4 = iParam0;
	Var0.f_8 = iParam1;
	Var0.f_12 = NET_GET_NET_TIME();
	if (iParam1 == 4294967295)
	{
		Function_209(StackVal, StackVal, "CTF_Cap", Global_34574);
	}
	else
	{
		Function_209(StackVal, StackVal, "CTF_CapDbl", Global_34574);
	}
	NET_LOG(StackVal, 1, "CTF", "SENDing cap. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 74, &Var0, 4, 1);
	return;
}

bool Function_422(int iParam0, int iParam1) //Position: 0xDDBC / 56764
{
	float fVar0;
	
	fVar0 = NET_GET_NET_TIME();
	if (StackVal || (StackVal == iParam1 - fVar0) <= 1.0f)
	{
		Local_196[iParam08].f_8 = iParam1;
		(&Local_196[iParam08] + 8)->f_4 = fVar0;
		return 1;
	}
	return 0;
}

int Function_423() //Position: 0xDDFE / 56830
{
	bool bVar0;
	
	if (Function_388())
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= 5)
		{
			if (Function_424(Local_61.f_432, bVar0))
			{
				if (GATEWAY_UPDATE((&Local_196 + 520[bVar05])->f_12))
				{
					return 1;
				}
			}
			bVar0++;
		}
		return 0;
	}
	if (Function_81())
	{
		if (bLocal_51)
		{
			return 0;
		}
		return GATEWAY_UPDATE((&Local_196 + 520[05])->f_12);
	}
	return GATEWAY_UPDATE((&Local_196 + 520[Function_141()5])->f_12);
}

bool Function_424(var uParam0, bool bParam1) //Position: 0xDE6E / 56942
{
	return Function_66(uParam0, Function_122(bParam1));
}

void Function_425(bool bParam0, bool bParam1) //Position: 0xDE7E / 56958
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	
	iVar2 = 2;
	bVar3 = false;
	if (Function_81())
	{
		iVar2 = 1;
	}
	else if (Function_388())
	{
		iVar2 = 5;
		bVar3 = true;
	}
	bVar4 = 4294967295;
	if ((Function_388() && bParam0) && IS_ACTOR_VALID(bParam1))
	{
		fVar5 = 1E+08.0f;
		Function_186(bParam1);
		vVar6 = { StackVal, StackVal, Function_186(bParam1) };
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			if (Function_424(Local_61.f_432, bVar1))
			{
				Function_226((*&Local_196 + 520)[bVar15]);
				fVar9 = VDIST2(vVar6, Function_226((*&Local_196 + 520)[bVar15]));
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
		if (Function_424(Local_61.f_432, bVar1) || !bVar3)
		{
			bVar10 = false;
			if (Function_81())
			{
				if (bParam0)
				{
					bVar0 = 330;
					bVar10 = true;
				}
				else
				{
					bVar0 = 330;
				}
			}
			else if (bVar3)
			{
				if (bParam0)
				{
					bVar0 = 330;
					bVar10 = true;
				}
				else
				{
					bVar0 = 485;
				}
			}
			else if (bVar1 == Function_141())
			{
				if (bParam0)
				{
					bVar0 = 330;
					bVar10 = true;
				}
				else
				{
					bVar0 = 494;
				}
			}
			else
			{
				bVar0 = 491;
			}
			if (IS_BLIP_VALID(StackVal))
			{
				if (GET_BLIP_ICON(StackVal) != bVar0)
				{
					CHANGE_BLIP_ICON(StackVal, bVar0);
				}
			}
			else
			{
				(&Local_196 + 520[bVar15])->f_4 = ADD_BLIP_FOR_OBJECT((*&Local_196 + 520)[bVar15], bVar0, 0f, 2, 0);
			}
			if (bVar10)
			{
				SET_BLIP_PRIORITY(StackVal, 4);
			}
			else
			{
				SET_BLIP_PRIORITY(StackVal, 2);
			}
			if (Function_388())
			{
				if (bParam0 && bVar1 == bVar4)
				{
					SET_BLIP_SCALE(StackVal, 0,75f);
				}
				else
				{
					SET_BLIP_SCALE(StackVal, 1.0f);
				}
			}
			if (bParam0 && ((bVar3 || Function_81()) || bVar1 != Function_141()))
			{
				if (!IS_OBJECT_VALID((&Local_196 + 520[bVar15])->f_12))
				{
					(&Local_196 + 520[bVar15])->f_12 = CREATE_GATEWAY_IN_LAYOUT(Local_196.f_656, "", (*&Local_196 + 520)[bVar15], Function_13(), 2, 4294967295, 0, false, 1, 1);
					bVar11 = _GET_OBJECT_ATTACHMENT((*&Local_196 + 520)[bVar15]);
					if (IS_ATTACHMENT_VALID(bVar11))
					{
						ATTACH_OBJECTS((&Local_196 + 520[bVar15])->f_12, GET_OBJECT_ATTACHED_TO(bVar11), "", 0.0f, 1,5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
			}
			else if (IS_OBJECT_VALID((&Local_196 + 520[bVar15])->f_12))
			{
				DESTROY_OBJECT((&Local_196 + 520[bVar15])->f_12);
			}
		}
		else
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			if (IS_OBJECT_VALID((&Local_196 + 520[bVar15])->f_12))
			{
				DESTROY_OBJECT((&Local_196 + 520[bVar15])->f_12);
			}
		}
		bVar1++;
	}
	return;
}

void Function_426(bool bParam0, bool bParam1) //Position: 0xE127 / 57639
{
	if (bParam1)
	{
		Function_42(&Global_78480 + 128, bParam0);
	}
	else
	{
		Function_39(&Global_78480 + 128, bParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = Global_78480.f_128;
	}
	return;
}

void Function_427(int iParam0, bool bParam1) //Position: 0xE162 / 57698
{
	struct<13> Var0;
	
	if (!Function_422(iParam0, 70))
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
	NET_LOG(StackVal, 1, "CTF", "SENDing ask. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(Function_339(Var0)), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 70, &Var0, 4, 1);
	return;
}

void Function_428() //Position: 0xE1F5 / 57845
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = GET_CURRENT_GAME_TIME();
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Function_452(iVar0, 4294967291))
		{
			if (IS_BLIP_VALID(Local_196[iVar08]))
			{
				fVar2 = (((fVar1 - Local_196[iVar08].f_16) - 3,5f) - 0,5f);
				if (fVar2 < 0.0f)
				{
					fVar2 = (1.0f - (fVar2 / 0,75f));
					Function_429(StackVal);
					vVar3 = { StackVal, StackVal, Function_429(StackVal) };
					SET_BLIP_COLOR(Local_196[iVar08], vVar3.x, vVar3.y, vVar3.z, fVar2);
				}
			}
		}
		iVar0++;
	}
	return;
}

vector3 Function_429(int iParam0) //Position: 0xE27A / 57978
{
	vector3 vVar0;
	
	if (!NET_GET_GAMER_RGB_COLOR(iParam0, &vVar0, &vVar0 + 4, &vVar0 + 8))
	{
		vVar0 = { (68.0f / 255.0f), (68.0f / 255.0f), (68.0f / 255.0f) };
	}
	return StackVal, StackVal, vVar0;
}

bool Function_430(int iParam0) //Position: 0xE2BC / 58044
{
	Function_76("CTF_FLAG_IS_OUR_TEAMS", iParam0);
	return (!Function_82() || iParam0 == Function_141());
}

bool Function_431(int iParam0, float fParam1) //Position: 0xE2EA / 58090
{
	if (Function_450(iParam0, fParam1))
	{
		Function_432(iParam0);
		return 1;
	}
	return 0;
}

void Function_432(int iParam0) //Position: 0xE302 / 58114
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_433(int iParam0) //Position: 0xE316 / 58134
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<9> Var5;
	
	Function_76("ENSURE_BAG_EXISTS", iParam0);
	if (!IS_OBJECT_VALID(StackVal))
	{
		if (!Function_80() || Function_440(iParam0))
		{
			if (Function_437(iParam0))
			{
				if (Function_391())
				{
					if (IS_OBJECT_VALID((&Local_196 + 520[25])->f_12))
					{
						DESTROY_OBJECT((&Local_196 + 520[25])->f_12);
					}
				}
				if (Function_80())
				{
					bVar0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "nLightning", "script_lightning_marker", 0.0f, 0.0f, 0.0f, true, 0);
					UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
				}
				Function_258(&Local_196[iParam08] + 28, &Local_61[iParam07] + 24);
			}
			else
			{
				return 0;
			}
		}
		return 0;
	}
	bVar1 = false;
	bVar2 = 4294967295;
	bVar3 = false;
	bVar4 = false;
	fVar8 = 1.0f;
	if (Function_452(iParam0, GET_LOCAL_SLOT()) || (Function_145(16384, 1) && Function_452(iParam0, Global_78617.f_48)))
	{
		bVar1 = true;
		Function_74(iParam0);
	}
	else
	{
		Function_435(iParam0, 1);
		if (Function_82())
		{
			if (Function_452(iParam0, 4294967291))
			{
				if (iParam0 == Function_141())
				{
					bVar2 = 480;
				}
				else
				{
					bVar2 = 473;
				}
				bVar1 = true;
			}
			else if (iParam0 == Function_141())
			{
				bVar2 = 478;
			}
			else
			{
				bVar2 = 471;
			}
		}
		else if (Function_388())
		{
			if (Function_452(iParam0, 4294967291))
			{
				bVar2 = 459;
				fVar9 = (GET_CURRENT_GAME_TIME() - Local_196[iParam08].f_16);
				if (StackVal || NET_IS_GAMER_RADAR_BLIP_VISIBLE(fVar9 > 3,5f))
				{
					bVar1 = true;
				}
				else
				{
					Function_429(StackVal);
					vVar5 = { StackVal, StackVal, Function_429(StackVal) };
					if (fVar9 <= 3,5f && fVar9 > ((3,5f + 0,75f) + 0,5f))
					{
						bVar4 = true;
						fVar8 = 0,8f;
					}
					else
					{
						Local_196[iParam08].f_16 = GET_CURRENT_GAME_TIME();
						bVar1 = true;
					}
					bVar3 = true;
				}
			}
			else if (Local_196.f_496 < 0)
			{
				bVar2 = 457;
				bVar3 = true;
				vVar5 = { (214.0f / 255.0f), (167.0f / 255.0f), (92.0f / 255.0f) };
			}
			else
			{
				bVar2 = 457;
			}
		}
		else if (Function_391())
		{
			if (Function_452(iParam0, 4294967291))
			{
				if (Function_434(Function_453(iParam0)))
				{
					bVar2 = 480;
				}
				else
				{
					bVar2 = 473;
				}
				fVar10 = (GET_CURRENT_GAME_TIME() - Local_196[iParam08].f_16);
				if (StackVal || NET_IS_GAMER_RADAR_BLIP_VISIBLE(fVar10 > 3,5f))
				{
					bVar1 = true;
				}
				else if (fVar10 <= 3,5f && fVar10 > ((3,5f + 0,75f) + 0,5f))
				{
					bVar4 = true;
					fVar8 = 0,8f;
				}
				else
				{
					Local_196[iParam08].f_16 = GET_CURRENT_GAME_TIME();
					bVar1 = true;
				}
			}
			else
			{
				bVar2 = 464;
			}
		}
		else if (Function_81())
		{
			if (Function_452(iParam0, 4294967291))
			{
				bVar2 = 480;
			}
			else if (Local_196.f_496 < 0)
			{
				bVar2 = 457;
				bVar3 = true;
				vVar5 = { (105.0f / 255.0f), (145.0f / 255.0f), (59.0f / 255.0f) };
			}
			else
			{
				bVar2 = 457;
			}
		}
	}
	if (!Function_81())
	{
		bVar11 = Function_453(iParam0);
		if (Local_196[iParam08].f_20 != bVar11)
		{
			if (bVar11 == 4294967294)
			{
				NET_GAMER_SET_BLIP_OVERRIDE(Local_196[iParam08].f_20, 4294967295);
			}
			else
			{
				NET_GAMER_SET_BLIP_OVERRIDE(bVar11, bVar2);
			}
			Local_196[iParam08].f_20 = bVar11;
		}
	}
	iVar12 = 0;
	if (bVar1)
	{
		if (IS_BLIP_VALID(Local_196[iParam08]))
		{
			REMOVE_BLIP(Local_196[iParam08]);
		}
	}
	else if (!IS_BLIP_VALID(Local_196[iParam08]))
	{
		if (bVar4)
		{
			Function_226(StackVal);
			vVar13 = { StackVal, StackVal, Function_226(StackVal) };
			Local_196[iParam08] = ADD_BLIP_FOR_COORD(&vVar13, bVar2, 0.0f, 4, 0);
		}
		else
		{
			Local_196[iParam08] = ADD_BLIP_FOR_OBJECT(StackVal, bVar2, 0.0f, 3, 0);
		}
		iVar12 = 1;
	}
	else if (GET_BLIP_ICON(Local_196[iParam08]) != bVar2)
	{
		CHANGE_BLIP_ICON(Local_196[iParam08], bVar2);
		iVar12 = 1;
	}
	if (iVar12 || (Function_66(Local_196[iParam08].f_24, 2) == bVar3 && !bVar1))
	{
		if (bVar3)
		{
			SET_BLIP_COLOR(Local_196[iParam08], vVar5.x, vVar5.y, vVar5.z, 1.0f);
			Function_42(&Local_196[iParam08] + 24, 2);
		}
		else if (Function_66(Local_196[iParam08].f_24, 2))
		{
			SET_BLIP_COLOR(Local_196[iParam08], 1.0f, 1.0f, 1.0f, 1.0f);
			Function_39(&Local_196[iParam08] + 24, 2);
		}
		SET_BLIP_SCALE(Local_196[iParam08], fVar8);
	}
	return 1;
}

bool Function_434(bool bParam0) //Position: 0xE76A / 59242
{
	if (Function_142(bParam0, 1, 0) != 4294967295 && Function_141() != 4294967295)
	{
		return 0;
	}
	return Function_142(bParam0, 1, 0) != Function_141();
}

void Function_435(int iParam0, bool bParam1) //Position: 0xE792 / 59282
{
	int iVar0;
	
	Function_76("ADD_GLOW_TO_BAG", iParam0);
	if (Function_66(Local_196[iParam08].f_24, 1))
	{
		return;
	}
	iVar0 = 4;
	if (Function_82())
	{
		if (iParam0 == Function_141())
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (Function_81())
	{
		iVar0 = 3;
	}
	if (bParam1)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			Function_436();
			CREATE_OBJECT_GLOW(StackVal, iVar0, Function_436(), 1);
			Function_42(&Local_196[iParam08] + 24, 1);
		}
	}
	else if (IS_OBJECT_VALID(StackVal))
	{
		Function_436();
		CREATE_OBJECT_GLOW(StackVal, iVar0, Function_436(), 1);
		Function_42(&Local_196[iParam08] + 24, 1);
	}
	return;
}

vector3 Function_436() //Position: 0xE849 / 59465
{
	return 0.0f, 0,2f, 0.0f;
}

bool Function_437(bool bParam0) //Position: 0xE856 / 59478
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	
	Function_76("nSPAWN_BAG", bParam0);
	strcpy(&cVar0, "CTFBag_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	if (!Function_439(bParam0, &vVar16, &vVar19, 1))
	{
		strcpy(&cVar0, "Couldn't find base #", 64);
		stradd(&cVar0, I2STR(Local_61[bParam07]), 64);
		return 0;
	}
	bVar22 = "";
	if (NET_IS_SESSION_HOST())
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 6);
		bVar22 = CREATE_PROP_IN_LAYOUT(Local_196.f_660, &cVar0, Function_438(), vVar16, vVar19, 1);
		NET_OBJECT_REPLICATION_MODE_END(17);
		if (IS_OBJECT_VALID(bVar22))
		{
			NET_OBJECT_SET_SCRIPT_INT(bVar22, bParam0 + 100);
			UNK_0x1306549E(bVar22, Local_196.f_660);
			Local_196[bParam08].f_4 = bVar22;
		}
		else
		{
			return 0;
		}
	}
	bVar23 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_196.f_660, "nBagFinder"));
	if (!IS_ITERATOR_VALID(bVar23))
	{
		bVar23 = CREATE_NAMED_OBJECT_ITERATOR(Local_196.f_660, "nBagFinder");
		ITERATE_IN_LAYOUT(bVar23, Local_196.f_660);
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
	Local_196[bParam08].f_4 = bVar22;
	return 1;
}

var Function_438() //Position: 0xE9AF / 59823
{
	return "p_gen_moneybag03x";
}

bool Function_439(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xE9C9 / 59849
{
	struct<5> Var0;
	vector3 vVar6;
	var uVar9;
	char* cVar12[64];
	bool bVar28;
	char* cVar29[64];
	
	if (Function_82())
	{
		if (IS_VOLUME_VALID((*&Local_196 + 520)[bParam05]))
		{
			GET_VOLUME_SCALE((*&Local_196 + 520)[bParam05], &Var0);
			GET_VOLUME_CENTER((*&Local_196 + 520)[bParam05], &vVar3);
			GET_OBJECT_ORIENTATION((*&Local_196 + 520)[bParam05], uParam2);
			if (FIND_GROUND_INTERSECTION(StackVal, (&vVar3 * 0,5f), &vVar6, &uVar9))
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
				uParam1->f_4 = (StackVal + 0,15f);
			}
			return 1;
		}
		strcpy(&cVar12, "CTF: Invalid volume in GET_BASE for flag #", 64);
		stradd(&cVar12, I2STR(bParam0), 64);
	}
	else
	{
		bVar28 = Function_78(bParam0, 0);
		if (IS_OBJECT_VALID(bVar28))
		{
			GET_OBJECT_POSITION(bVar28, uParam1);
			GET_OBJECT_ORIENTATION(bVar28, uParam2);
			if (bParam3 && Function_391())
			{
				uParam2->f_4 = (StackVal + 90.0f);
				uParam1->f_4 = (StackVal + 0,15f);
			}
			return 1;
		}
		strcpy(&cVar29, "CTF: Unable to find Base #", 64);
		stradd(&cVar29, I2STR(Local_61[bParam07]), 64);
		stradd(&cVar29, " for bag #", 64);
		stradd(&cVar29, I2STR(bParam0), 64);
	}
	return 0;
}

int Function_440(int iParam0) //Position: 0xEB34 / 60212
{
	Function_76("HAS_HOST_PICKED_NEW_BASE", iParam0);
	if (!UNK_0xA80C6DE6(&Local_61))
	{
		return 0;
	}
	return Function_259(&Local_196[iParam08] + 28, &Local_61[iParam07] + 24);
}

void Function_441(int iParam0) //Position: 0xEB78 / 60280
{
	Function_76("CTF_HOST_BAG_PRE_SPAWNING", iParam0);
	Local_61[iParam07].f_8 = 4294967294;
	Local_61[iParam07].f_4 = 5;
	Function_442(&Local_61[iParam07] + 12);
	Function_306(&Local_61[iParam07] + 24);
	return;
}

void Function_442(int iParam0) //Position: 0xEBC9 / 60361
{
	Function_277(iParam0, 0.0f);
	return;
}

void Function_443(int iParam0) //Position: 0xEBD5 / 60373
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
	Function_76("PICK_NEW_RANDOM_BASE", iParam0);
	iVar0 = (RAND_INT_RANGE(false, 5000) % Local_196.f_648);
	bVar1 = true;
	if (Function_388())
	{
		iVar2 = iVar0;
		bVar4 = true;
		while (bVar4)
		{
			bVar1 = true;
			bVar3 = false;
			while (bVar3 > 15 && bVar1)
			{
				if ((bVar3 == iParam0 && Local_61[bVar37] != iVar0) && Function_466(bVar3))
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
				iVar0 = (iVar0 + 1 % Local_196.f_648);
				if (iVar0 == iVar2)
				{
					bVar4 = false;
				}
			}
		}
	}
	if (bVar1)
	{
		Local_61[iParam07] = iVar0;
	}
	Function_306(&Local_61[iParam07] + 24);
	return;
}

void Function_444(int iParam0, int iParam1) //Position: 0xEC97 / 60567
{
	struct<13> Var0;
	
	Var0 = 4294967294;
	Var0.f_12 = iParam0;
	Var0.f_8 = iParam1;
	iVar4 = 0;
	while (iVar4 <= (iParam0 - 1))
	{
		Function_442(&Local_61[iVar47] + 12);
		iVar4++;
	}
	NET_LOG(true, "CTF", "SENDing bag replenish.", 0, 0, 0, 0);
	NET_SCRIPTMSG_SEND(3, 4, &Var0, 4, 1);
	return;
}

var Function_445() //Position: 0xECFF / 60671
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = Function_24((Function_23(1, (NET_GET_SESSION_GAMER_COUNT() - 1)) / 4) + 2, Local_196.f_652);
	iVar1 = 0;
	bVar2 = true;
	if (iVar0 >= (Local_196.f_652 / 2))
	{
		iVar1 = (SHIFT_LEFT(true, Local_196.f_652) - 1);
		bVar2 = false;
	}
	iVar4 = iVar0;
	if (!bVar2)
	{
		iVar4 = (Local_196.f_652 - iVar0);
	}
	iVar3 = 0;
	while (iVar3 <= iVar4)
	{
		bVar5 = (RAND_INT_RANGE(false, 100000) % Local_196.f_652);
		bVar6 = Function_122(bVar5);
		while (bVar2 == Function_66(iVar1, bVar6))
		{
			bVar5 = (bVar5 + 1 % Local_196.f_652);
			bVar6 = Function_122(bVar5);
		}
		if (bVar2)
		{
			Function_42(&iVar1, bVar6);
		}
		else
		{
			Function_39(&iVar1, bVar6);
		}
		iVar3++;
	}
	Function_446(iVar1, Local_196.f_652);
	PRINTNL();
	return iVar1;
}

void Function_446(int iParam0, int iParam1) //Position: 0xEDC6 / 60870
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_66(iParam0, Function_122(bVar0)))
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

int Function_447() //Position: 0xEE0D / 60941
{
	if (Function_81())
	{
		return (3 * GET_NUM_PLAYERS());
	}
	return Function_24(Function_23(1, (NET_GET_SESSION_GAMER_COUNT() - 1)), Local_196.f_648);
}

void Function_448(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xEE30 / 60976
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, iParam2, iVar0, iParam5, iParam6);
	}
}

void Function_449(int iParam0) //Position: 0xEE83 / 61059
{
	Function_76("CTF_HOST_BAG_AT_BASE", iParam0);
	Local_61[iParam07].f_8 = 4294967294;
	Local_61[iParam07].f_4 = 1;
	Function_442(&Local_61[iParam07] + 12);
	Function_306(&Local_61[iParam07] + 24);
	return;
}

bool Function_450(int iParam0, float fParam1) //Position: 0xEECF / 61135
{
	if (Function_279(iParam0))
	{
		if (Function_162(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int Function_451(int iParam0) //Position: 0xEEEB / 61163
{
	Function_76("ENSURE_BAG_DOESNT_EXIST", iParam0);
	Function_419(iParam0);
	if (Local_196[iParam08].f_20 != 4294967294)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(Local_196[iParam08].f_20, 4294967295);
		Local_196[iParam08].f_20 = 4294967294;
	}
	return Function_73(iParam0, 0);
}

bool Function_452(int iParam0, bool bParam1) //Position: 0xEF40 / 61248
{
	Function_76("CTF_IS_BAG_CARRIED", iParam0);
	if (bParam1 != 4294967291)
	{
		return Function_453(iParam0) != bParam1;
	}
	return Function_453(iParam0) == 4294967294;
}

int Function_453(int iParam0) //Position: 0xEF7A / 61306
{
	Function_76("CTF_WHO_HAS_BAG", iParam0);
	return StackVal;
}

void Function_454(int iParam0, bool bParam1, bool bParam2) //Position: 0xEF9F / 61343
{
	struct<13> Var0;
	
	if (!Function_422(iParam0, 75))
	{
		return;
	}
	if (bParam1)
	{
		Var0.f_8 = bParam2;
		Function_455(iParam0);
		Function_209(StackVal, StackVal, "CTF_Timeout", Function_455(iParam0));
	}
	else
	{
		Function_455(iParam0);
		Function_209(StackVal, StackVal, "CTF_Return", Function_455(iParam0));
		Var0.f_8 = 4294967295;
	}
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		if (bParam2 == 4294967293)
		{
			NET_LOG(StackVal, 1, "CTF", I2STR("SENDing timed out return for bag %s @ %s, Timed out"), F2STR(Var0.f_12, 5, 5), 0, 0);
		}
		else
		{
			NET_LOG(StackVal, 1, "CTF", I2STR("SENDing timed out return for bag %s @ %s, ringed out by me, slot #%s"), F2STR(Var0.f_12, 5, 5), I2STR(bParam2), 0);
		}
	}
	else
	{
		NET_LOG(StackVal, 1, "CTF", "SENDing return. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	}
	NET_SCRIPTMSG_SEND(3, 75, &Var0, 4, 1);
	return;
}

vector3 Function_455(int iParam0) //Position: 0xF130 / 61744
{
	vector3 vVar0;
	
	Function_76("GET_BAG_POS", iParam0);
	if (GET_OBJECT_POSITION(StackVal, &vVar0))
	{
		return StackVal, StackVal, vVar0;
	}
	return -1.0f, -1.0f, -1.0f;
}

void Function_456(int iParam0, int iParam1) //Position: 0xF161 / 61793
{
	Function_419(iParam0);
	Function_39(&Local_196[iParam08] + 24, 1);
	Function_457(StackVal, Function_13(), Local_196.f_496, iParam1);
	REMOVE_CAMERA_COLLISION_EXCLUSION(StackVal, GET_GAME_CAMERA());
	return;
}

void Function_457(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF19B / 61851
{
	bool bVar0;
	struct<5> Var1;
	
	Function_459(bParam1, bParam0);
	Function_458(bParam1);
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
					Var1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, Var1, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) };
				}
				else if (iParam2 == 1)
				{
					Var1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, Var1, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal) };
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

void Function_458(bool bParam0) //Position: 0xF251 / 62033
{
	bool bVar0;
	
	bVar0 = GET_OBJECT_ANIMATOR_ON_OBJECT(bParam0);
	if (IS_OBJECT_ANIMATOR_VALID(bVar0))
	{
		DESTROY_OBJECT_ANIMATOR(bVar0);
	}
	return;
}

void Function_459(bool bParam0, bool bParam1) //Position: 0xF26B / 62059
{
	if (IS_ACTOR_VALID(bParam1))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), true);
	}
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 1);
	SET_OBJECT_COLLIDE_WITH_WORLD(bParam0, 1);
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	return;
}

void Function_460(int iParam0, bool bParam1, int iParam2) //Position: 0xF295 / 62101
{
	struct<13> Var0;
	
	if (bParam1)
	{
		Var0 = 4294967293;
		Function_455(iParam0);
		Function_209(StackVal, StackVal, "CTF_TimeoutDrop", Function_455(iParam0));
	}
	else
	{
		if (!Function_422(iParam0, 73))
		{
			return;
		}
		Var0 = GET_LOCAL_SLOT();
		if (iParam2 == 4294967295)
		{
			Function_455(iParam0);
			Function_209(StackVal, StackVal, "CTF_Drop", Function_455(iParam0));
		}
		else
		{
			Function_455(iParam0);
			Function_209(StackVal, StackVal, "CTF_DropDbl", Function_455(iParam0));
		}
	}
	Var0.f_4 = iParam0;
	Var0.f_8 = iParam2;
	Var0.f_12 = NET_GET_NET_TIME();
	NET_SCRIPTMSG_SEND(3, 73, &Var0, 4, 1);
	NET_LOG(StackVal, 1, "CTF", "SENDing drop. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	return;
}

void Function_461(int iParam0, int iParam1) //Position: 0xF379 / 62329
{
	float fVar0;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		fVar0 = Function_462(StackVal, StackVal, StackVal, *iParam1);
		if (iParam0 == Local_196.f_504)
		{
			Local_196.f_508 = fVar0;
		}
		else if (fVar0 > Local_196.f_508)
		{
			Local_196.f_504 = iParam0;
			Local_196.f_508 = fVar0;
		}
	}
	return;
}

var Function_462(bool bParam0, vector3 vParam1) //Position: 0xF3CB / 62411
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!Function_108(StackVal, StackVal, vParam1))
		{
			Function_463(bParam0);
			vVar0 = { StackVal, StackVal, Function_463(bParam0) };
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

vector3 Function_463(bool bParam0) //Position: 0xF4D8 / 62680
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

bool Function_464(bool bParam0) //Position: 0xF544 / 62788
{
	Function_76("CTF_IS_BAG_IN_WORLD", bParam0);
	return StackVal == 0;
}

void Function_465() //Position: 0xF56F / 62831
{
	Local_196.f_504 = 4294967295;
	Local_196.f_508 = 1E+08.0f;
	return;
}

bool Function_466(bool bParam0) //Position: 0xF585 / 62853
{
	Function_76("CTF_IS_BAG_IN_PLAY", bParam0);
	return StackVal == 4294967295;
}

int Function_467() //Position: 0xF5AF / 62895
{
	if (Function_388() || Function_81())
	{
		return 15;
	}
	if (Function_82())
	{
		return 2;
	}
	return 1;
}

vector3 Function_468() //Position: 0xF5CE / 62926
{
	return 0,25f, 0.0f, 0,25f;
}

vector3 Function_469(int iParam0) //Position: 0xF5DF / 62943
{
	if (iParam0 == 0)
	{
		return -0,317f, 0.0f, -0,364f;
	}
	if (iParam0 == 1)
	{
		return 0,313f, 0.0f, -0,387f;
	}
	return 0.0f, 0.0f, 0.0f;
}

int Function_470(bool bParam0) //Position: 0xF60F / 62991
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

bool Function_471(bool bParam0) //Position: 0xF656 / 63062
{
	return DECOR_CHECK_EXIST(bParam0, "CTF_Lifting");
}

var Function_472(bool bParam0) //Position: 0xF66F / 63087
{
	return DECOR_CHECK_EXIST(bParam0, "CTF_Dropping");
}

int Function_473(bool bParam0) //Position: 0xF689 / 63113
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

void Function_474() //Position: 0xF6D9 / 63193
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (Function_439(0, &vVar0, &vVar3, 0))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		(&Local_196 + 520[25])->f_8 = Function_476(StackVal, StackVal, StackVal, StackVal, Function_477(), "chest", vVar0, vVar3, 2.0f);
		NET_OBJECT_REPLICATION_MODE_END(17);
		Function_475();
		bVar6 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "nLightning", "script_lightning_marker", 0.0f, 0.0f, 0.0f, true, 0);
		UNK_0x6745191B(bVar6, 0.0f, 0.0f, 0.0f);
		if (IS_BLIP_VALID(StackVal))
		{
			REMOVE_BLIP(StackVal);
		}
		(&Local_196 + 520[25])->f_4 = ADD_BLIP_FOR_OBJECT(StackVal, 330, 0f, 2, 0);
		if (IS_OBJECT_VALID((&Local_196 + 520[25])->f_12))
		{
			DESTROY_OBJECT((&Local_196 + 520[25])->f_12);
		}
		if (IS_VOLUME_VALID((*&Local_196 + 520)[25]))
		{
			DESTROY_VOLUME((*&Local_196 + 520)[25]);
		}
		(*&Local_196 + 520)[25] = CREATE_VOLUME_IN_LAYOUT(Local_196.f_656, "standHereVol", 3, vVar0, vVar3, 3.0f, 3.0f, 3.0f);
		(&Local_196 + 520[25])->f_12 = CREATE_GATEWAY_IN_LAYOUT(Local_196.f_656, "", (*&Local_196 + 520)[25], Function_13(), 2, 4294967295, 0, false, 1, 1);
	}
	return;
}

void Function_475() //Position: 0xF83B / 63547
{
	Function_312("CTSBAG_CHESTAPPEARSNEWRND", 0);
	return;
}

int Function_476(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, float fParam8) //Position: 0xF861 / 63585
{
	bool bVar0;
	
	bVar0 = CREATE_PROP_IN_LAYOUT(Local_196.f_660, bParam1, bParam0, vParam2, vParam5, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!SNAP_OBJECT_TO_GROUND(bVar0, fParam8, false, 1092616192))
		{
		}
	}
	return bVar0;
}

bool Function_477() //Position: 0xF89B / 63643
{
	return "$/fragments/p_gen_mpChestYellow01x";
}

void Function_478() //Position: 0xF8C6 / 63686
{
	int iVar0;
	
	iVar0 = 0;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Function_424(Local_61.f_432, iVar0))
		{
			if (!IS_OBJECT_VALID(StackVal))
			{
				(&Local_196 + 520[iVar05])->f_8 = Function_479(Function_477(), (*&Local_196 + 520)[iVar05]);
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

int Function_479(var uParam0, bool bParam1) //Position: 0xF94D / 63821
{
	char* cVar0[32];
	struct<5> Var8;
	vector3 vVar14;
	
	strcpy(&cVar0, GET_OBJECT_NAME(bParam1), 32);
	stradd(&cVar0, "marker", 32);
	GET_OBJECT_POSITION(bParam1, &vVar11);
	GET_VOLUME_SCALE(bParam1, &Var8);
	GET_OBJECT_ORIENTATION(bParam1, &vVar14);
	return Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, uParam0, &cVar0, vVar11, (vVar14 * 0,5f));
}

void Function_480(bool bParam0) //Position: 0xF999 / 63897
{
	bool bVar0;
	int iVar1;
	
	bVar0 = "";
	iVar1 = Function_486(bParam0, &bVar0);
	while (IS_OBJECT_VALID(bVar0))
	{
		switch (iVar1)
		{
			case 0x00000045:
				Function_484(bVar0);
				break;
			
			case 0x0000004C:
				Function_483(bVar0);
				break;
			
			case 0x00000046:
				Function_482(bVar0);
				break;
		}
		iVar1 = Function_486(bParam0, &bVar0);
	}
	Function_481(bParam0);
	return;
}

void Function_481(bool bParam0) //Position: 0xF9F6 / 63990
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

void Function_482(bool bParam0) //Position: 0xFA09 / 64009
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	return;
}

void Function_483(bool bParam0) //Position: 0xFA1D / 64029
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = GET_EVENT_FROM_OBJECT(bParam0);
	bVar1 = GET_EVENT_TARGET_AS_OBJECT(bVar0);
	iVar2 = 0;
	while (iVar2 <= Local_196.f_496)
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

void Function_484(bool bParam0) //Position: 0xFA70 / 64112
{
	var uVar0;
	int iVar1;
	
	if (NET_IS_SESSION_HOST())
	{
		if (DECOR_GET_INT_VERBOSE(cParam0, "Slot", &uVar0))
		{
			iVar1 = 0;
			while (iVar1 <= 15)
			{
				if (Function_452(iVar1, uVar0))
				{
					Function_485(iVar1);
				}
				iVar1++;
			}
		}
	}
	return;
}

void Function_485(int iParam0) //Position: 0xFAAF / 64175
{
	Function_76("CTF_HOST_DROP_BAG", iParam0);
	Local_61[iParam07].f_8 = 4294967294;
	Local_61[iParam07].f_4 = 2;
	Function_442(&Local_61[iParam07] + 12);
	Function_306(&Local_61[iParam07] + 24);
	return;
}

int Function_486(bool bParam0, bool bParam1) //Position: 0xFAF8 / 64248
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

void Function_487(int iParam0) //Position: 0xFB37 / 64311
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
			Function_488(iParam0);
		}
	}
	return;
}

void Function_488(int iParam0) //Position: 0xFB69 / 64361
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

bool Function_489() //Position: 0xFB78 / 64376
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	if (Function_388())
	{
		bVar1 = false;
		if (!Function_593(Local_196.f_656))
		{
		}
		else if ((Function_94(1024) && !Function_384()) && Function_279(&Global_78578 + 96))
		{
		}
		else if (bVar0 > 0 || bVar0 <= 16)
		{
			return 0;
		}
		if ((&Local_61 + 440)->f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_591(&Local_61 + 440, 0);
			}
			return 0;
		}
		if ((*&Local_61 + 440 + 20)[bVar0] == 4294967295)
		{
			Function_289(&Local_382 + 444, 64);
			Function_578(&Local_382, 0, 0, 0, 1);
		}
		else
		{
			Function_578(&Local_382, 1, 0, 0, 1);
			Function_280(&Local_382, 1);
			Function_285(&Local_382, 76786);
		}
		Function_282(&Local_382, 1);
		Function_575(Function_359(), &Local_382 + 444);
		Function_574(StackVal, StackVal, &Local_382, Function_575(Function_359(), &Local_382 + 444));
		bVar1 = true;
		if (!bVar1)
		{
			Function_573(&Local_382 + 444);
			if (NET_IS_SESSION_HOST())
			{
				Function_276(&Global_78578 + 96, Global_83591.f_16);
			}
		}
		Function_572(&Local_382, 1);
	}
	else
	{
		bVar2 = false;
		if (!Function_571(Local_196.f_656))
		{
		}
		else if ((Function_94(1024) && !Function_384()) && Function_279(&Global_78578 + 96))
		{
		}
		else if (bVar0 > 0 || bVar0 <= 16)
		{
			return 0;
		}
		if ((&Local_61 + 440)->f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_591(&Local_61 + 440, 1);
			}
			return 0;
		}
		if ((*&Local_61 + 440 + 20)[bVar0] == 4294967295)
		{
			Function_289(&Local_382 + 444, 64);
			Function_578(&Local_382, 0, 0, 0, 1);
		}
		else
		{
			Function_578(&Local_382, 1, 0, 0, 1);
			Function_280(&Local_382, 1);
			Function_285(&Local_382, 76458);
		}
		Function_282(&Local_382, 1);
		Function_575(Function_359(), &Local_382 + 444);
		Function_574(StackVal, StackVal, &Local_382, Function_575(Function_359(), &Local_382 + 444));
		bVar2 = true;
		if (NET_IS_SESSION_HOST())
		{
			Function_432(&Global_78578 + 96);
		}
		Function_572(&Local_382, 2);
		if (!bVar2)
		{
			Function_573(&Local_382 + 444);
			if (NET_IS_SESSION_HOST())
			{
				Function_276(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	Function_557(&Local_382, 74789);
	Function_503(&Local_382, 65940);
	Function_496(&Local_382, 65201);
	Function_492(&Local_382, 64991);
	Function_491(&Local_382, 30);
	Function_490(&Local_382, 0);
	return 1;
}

void Function_490(int iParam0, bool bParam1) //Position: 0xFDA7 / 64935
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

void Function_491(int iParam0, int iParam1) //Position: 0xFDC7 / 64967
{
	iParam0->f_52 = iParam1;
	return;
}

void Function_492(int iParam0, int iParam1) //Position: 0xFDD3 / 64979
{
	iParam0->f_176 = iParam1;
	return;
}

int Function_493() //Position: 0xFDDF / 64991
{
	return Function_494(&Local_382 + 636);
}

int Function_494(int iParam0) //Position: 0xFDEE / 65006
{
	bool bVar0;
	struct<5> Var1;
	
	if (iParam0->f_1452 < 4294967295)
	{
		return 0;
	}
	fVar3 = NET_GET_NET_TIME();
	bVar4 = GET_LOCAL_SLOT();
	iVar5 = Function_141();
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
				if (iVar5 != 4294967295 || Function_142(bVar0, 1, 0) == iVar5)
				{
					if (Function_495(bVar0, &Var1))
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

bool Function_495(bool bParam0, int iParam1) //Position: 0xFE86 / 65158
{
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_16, bParam0))
	{
		*iParam1 = { StackVal, Local_16[bParam02] };
		return 1;
	}
	return 0;
}

void Function_496(int iParam0, int iParam1) //Position: 0xFEA5 / 65189
{
	iParam0->f_152 = iParam1;
	return;
}

void Function_497(var uParam0) //Position: 0xFEB1 / 65201
{
	if (!Function_501(uParam0, &Local_382 + 444))
	{
		if (Function_388())
		{
			Function_499(Function_500());
		}
		else
		{
			Function_499(Function_498());
		}
	}
	return;
}

bool Function_498() //Position: 0xFEDB / 65243
{
	if (Function_141() > 0 || Function_141() < 2)
	{
		return 4294967295;
	}
	return Function_394(Function_141());
}

void Function_499(bool bParam0) //Position: 0xFEF7 / 65271
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	HUD_CLEAR_OBJECTIVE_QUEUE();
	bVar0 = bParam0;
	if (!Function_81())
	{
		bVar0 = (Global_83591 - bParam0);
	}
	if (bVar0 != 0 || Function_594())
	{
		return;
	}
	if (Function_388())
	{
		iVar2 = 4294967295;
		iVar2 = Function_409(1, 1, 0);
		if (Function_392() && bParam0 != iVar2)
		{
			bVar1 = "CTF_mul_obj_capped_overtime";
		}
		else if (bParam0 == 0)
		{
			bVar1 = "CTF_mul_objective";
		}
		else
		{
			bVar1 = "CTF_mul_obj_capped";
		}
		Function_448(bVar1, 0x40f00000, 1, 2, 0, 0, 0);
	}
	else if (Function_81())
	{
		PRINT_OBJECTIVE_FORMAT(7,5f, "GAP_CO_bag_update", Function_310(bParam0), 0, 0, 0, 0, 2, 0, 0, 0);
	}
	else
	{
		if (Function_82())
		{
			if (bVar0 != 1 || Function_392())
			{
				bVar0 = true;
				bVar1 = "CTF_sym_obj_capped_last";
			}
			else if (bParam0 == 0)
			{
				bVar1 = "CTF_sym_objective";
			}
			else
			{
				bVar1 = "CTF_sym_obj_capped";
			}
		}
		else if (Function_391())
		{
			if (bVar0 != 1 || Function_392())
			{
				bVar0 = true;
				bVar1 = "CTF_one_obj_capped_last";
			}
			else if (bParam0 == 0)
			{
				bVar1 = "CTF_one_objective";
			}
			else
			{
				bVar1 = "CTF_one_obj_capped";
			}
		}
		PRINT_OBJECTIVE_FORMAT(7,5f, bVar1, Function_310(bVar0), 0, 0, 0, 0, 2, 0, 0, 0);
	}
	return;
}

bool Function_500() //Position: 0x100D9 / 65753
{
	return Function_263(0);
}

bool Function_501(bool bParam0, int iParam1) //Position: 0x100E3 / 65763
{
	bool bVar0;
	
	Function_289(iParam1, 1);
	if (Function_384() && !Function_502(iParam1))
	{
		SET_ACTOR_POSTURE(bParam0, 0);
		bVar0 = Function_171(bParam0, 40);
		if (bVar0 == 4294967295)
		{
			bVar0 = Function_171(bParam0, 39);
			if (bVar0 == 4294967295)
			{
				bVar0 = 22;
			}
		}
		if (Function_65(iParam1, 8))
		{
			ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 1, 0);
			ACTOR_SET_NEXT_WEAPON(bParam0, bVar0);
		}
		else
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(bParam0, 0,1f, 0,9f, 1);
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

bool Function_502(int iParam0) //Position: 0x1017C / 65916
{
	return *iParam0 <= 12;
}

void Function_503(int iParam0, int iParam1) //Position: 0x10188 / 65928
{
	iParam0->f_164 = iParam1;
	return;
}

void Function_504() //Position: 0x10194 / 65940
{
	if (Function_556(&Local_382, Function_387()))
	{
		Function_312("GENMESS_GAMEOVER", 0);
	}
	else
	{
		Function_540(&Local_382, 70845);
		Function_99(&Local_382 + 556);
		if (Function_388())
		{
			Function_535(&Local_382);
		}
		else
		{
			Function_505(&Local_382);
		}
	}
	return;
}

void Function_505(bool bParam0) //Position: 0x101E8 / 66024
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	iVar3 = Function_141();
	uVar4 = "";
	bVar5 = false;
	if (Function_82())
	{
		if (Function_66(Global_79962, 512))
		{
			bVar5 = CEIL(50.0f);
			uVar4 = "xp_hardcore";
		}
		else if (Function_66(Global_79962, 256))
		{
			bVar5 = CEIL(100.0f);
			uVar4 = "xp_veteran";
		}
	}
	else if (Function_391())
	{
		if (Function_66(Global_79962, 512))
		{
			bVar5 = CEIL(50.0f);
			uVar4 = "xp_hardcore";
		}
		else if (Function_66(Global_79962, 256))
		{
			bVar5 = CEIL(100.0f);
			uVar4 = "xp_veteran";
		}
	}
	if (Function_387() == iVar3)
	{
		Function_534(Function_298(iVar3));
		bVar1 = "mp_teammsg_blue_start";
		bVar2 = "mp_teammsg_blue_end";
		uVar0 = Function_533(iVar3);
		Function_523(&Local_382 + 3380, Function_528(iVar3, 1), CEIL(250.0f), 1, iVar3, uVar4, bVar5);
		if (Function_82())
		{
			Function_522(&Global_50170[3222] + 4, &Global_50170[3222] + 8, &Global_50170[3222] + 12);
		}
		else if (Function_391())
		{
			Function_520(&Global_50170[4022] + 4, &Global_50170[4022] + 8, &Global_50170[4022] + 12);
		}
	}
	else
	{
		bVar1 = "mp_teammsg_red_start";
		bVar2 = "mp_teammsg_red_end";
		iVar6 = Function_341(iVar3);
		uVar0 = Function_533(iVar6);
		Function_519(Function_298(iVar6));
		Function_523(&Local_382 + 3380, Function_528(iVar6, 1), 0, 0, iVar6, uVar4, bVar5);
		if (Function_82())
		{
			Function_518(&Global_50170[3722] + 4, &Global_50170[3722] + 8, &Global_50170[3722] + 12);
		}
		else if (Function_391())
		{
			Function_516(&Global_50170[4522] + 4, &Global_50170[4522] + 8, &Global_50170[4522] + 12);
		}
	}
	if (Function_82())
	{
		Function_514(&Global_50170[3622] + 4, &Global_50170[3622] + 8, &Global_50170[3622] + 12);
	}
	else if (Function_391())
	{
		Function_511(&Global_50170[4422] + 4, &Global_50170[4422] + 8, &Global_50170[4422] + 12);
	}
	Function_99(&Local_382 + 556);
	Function_507(&Global_50170[1422] + 4, &Global_50170[1422] + 8, &Global_50170[1422] + 12);
	Function_506(bParam0, uVar0, bVar1, bVar2, 0, 0);
	return;
}

void Function_506(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x10485 / 66693
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

void Function_507(var uParam0, var uParam1, var uParam2) //Position: 0x104F4 / 66804
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 18)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(14);
				if (Function_510() >= 0)
				{
					if ((Function_509() / Function_510()) > 5)
					{
						Global_50170[1422].f_28++;
						bVar0 = Global_50170[1422].f_28;
					}
				}
				else if (Function_509() > 5)
				{
					Global_50170[1422].f_28++;
					bVar0 = Global_50170[1422].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_103(14, 150, Function_508(), 3028);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
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

bool Function_508() //Position: 0x105B5 / 66997
{
	return "MP_KDR_Icon_128";
}

int Function_509() //Position: 0x105CD / 67021
{
	return Function_151(11);
}

int Function_510() //Position: 0x105D8 / 67032
{
	return Function_151(12);
}

void Function_511(var uParam0, var uParam1, var uParam2) //Position: 0x105E3 / 67043
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(44);
				if (Function_513())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_103(44, 150, Function_512(), 3082);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
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

bool Function_512() //Position: 0x10656 / 67158
{
	return "MP_GrabtheBag2_Icon_128";
}

bool Function_513() //Position: 0x10676 / 67190
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = Function_500();
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_303(bVar1) && bVar2 == bVar1)
		{
			if (iVar0 < Function_395(bVar1))
			{
				return 0;
			}
		}
		bVar1++;
	}
	return 1;
}

void Function_514(var uParam0, var uParam1, var uParam2) //Position: 0x106B4 / 67252
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(36);
				if (Function_513())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_103(36, 150, Function_515(), 3062);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
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

bool Function_515() //Position: 0x10727 / 67367
{
	return "MP_HoldYourOwn_Icon_128";
}

void Function_516(var uParam0, var uParam1, var uParam2) //Position: 0x10747 / 67399
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(45);
				if (Function_517())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_103(45, 150, Function_512(), 3083);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
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

bool Function_517() //Position: 0x107BA / 67514
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = GET_LOCAL_SLOT();
	iVar1 = Function_395(bVar0);
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (Function_303(bVar2) && bVar0 == bVar2)
		{
			if ((*&Global_78578 + 20)[bVar2] == (*&Global_78578 + 20)[bVar0])
			{
				if (iVar1 < Function_395(bVar2))
				{
					return 0;
				}
			}
		}
		bVar2++;
	}
	return 1;
}

void Function_518(var uParam0, var uParam1, int iParam2) //Position: 0x10811 / 67601
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(37);
				if (Function_517())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_103(37, 150, Function_515(), 3063);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 1);
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

void Function_519(int iParam0) //Position: 0x10884 / 67716
{
	struct<16> Var0;
	
	strcpy(&Var0, "GENMESS_LOSE_TEAM_", 64);
	straddi(&Var0, iParam0, 64);
	Function_312(&Var0, 0);
	return;
}

void Function_520(var uParam0, var uParam1, var uParam2) //Position: 0x108AF / 67759
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(40);
				Global_50170[4022].f_28++;
				bVar0 = Global_50170[4022].f_28;
				if (bVar0 > 1)
				{
					Function_130(40, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_521(), 3068);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(40, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(40);
				Global_50170[4022].f_28++;
				bVar0 = Global_50170[4022].f_28;
				if (bVar0 > 5)
				{
					Function_130(40, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_521(), 3069);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_46(40, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(40);
				Global_50170[4022].f_28++;
				bVar0 = Global_50170[4022].f_28;
				if (bVar0 > 20)
				{
					Function_103(40, 150, Function_521(), 3070);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 20);
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

bool Function_521() //Position: 0x10A31 / 68145
{
	return "MP_GrabTheBag_Icon_128";
}

void Function_522(var uParam0, var uParam1, int iParam2) //Position: 0x10A50 / 68176
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(32);
				Global_50170[3222].f_28++;
				bVar0 = Global_50170[3222].f_28;
				if (bVar0 > 1)
				{
					Function_130(32, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_515(), 3048);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_46(32, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(32);
				Global_50170[3222].f_28++;
				bVar0 = Global_50170[3222].f_28;
				if (bVar0 > 5)
				{
					Function_130(32, uParam0, 2, uParam1, 2, *iParam2, 0, 100, bVar0, 20, 150, Function_515(), 3049);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_46(32, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(32);
				Global_50170[3222].f_28++;
				bVar0 = Global_50170[3222].f_28;
				if (bVar0 > 20)
				{
					Function_103(32, 150, Function_515(), 3050);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 20);
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

void Function_523(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x10BD1 / 68561
{
	iParam0->f_24 = bParam1;
	iParam0->f_32 = iParam3;
	iParam0->f_36 = iParam4;
	iParam0->f_40 = bParam2;
	iParam0->f_48 = uParam5;
	iParam0->f_44 = bParam6;
	if (bParam1 > 0)
	{
		iParam0->f_20 = Function_396(9, bParam1);
		Function_527(iParam0 + 64, iParam0->f_20, 3, 0);
	}
	else
	{
		iParam0->f_20 = 4294967295;
	}
	Function_525(iParam0 + 64, "MP_victory", 5, 0);
	Function_525(iParam0 + 64, "custom/mp_victory", 8, 0);
	Function_378(iParam0 + 64);
	Function_524(5);
	Function_376();
}

void Function_524(int iParam0) //Position: 0x10C69 / 68713
{
	Function_41(&Global_83864 + 1252, iParam0);
	return;
}

var Function_525(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10C7B / 68731
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_526(iParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_382(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_526(var uParam0, int iParam1, int iParam2) //Position: 0x10CB3 / 68787
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_55(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_382(uParam0[iVar03], 4);
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

var Function_527(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x10D77 / 68983
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_55(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_382(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_382(uParam0[iVar03], 8);
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

bool Function_528(int iParam0, int iParam1) //Position: 0x10E47 / 69191
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
		if (Function_303(bVar3))
		{
			if ((*&Global_78578 + 20)[bVar3] == iParam0)
			{
				iVar1 = Function_529(bVar3, iParam1);
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

var Function_529(bool bParam0, int iParam1) //Position: 0x10E99 / 69273
{
	return ((((Function_395(bParam0) / iParam1) * 100000) + Function_532(bParam0) * 100) - Function_530(bParam0));
}

int Function_530(bool bParam0) //Position: 0x10EBA / 69306
{
	return Function_531(12, bParam0);
}

int Function_531(int iParam0, bool bParam1) //Position: 0x10EC7 / 69319
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_151(iParam0);
	}
	if (!Function_146(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_532(int iParam0) //Position: 0x10F35 / 69429
{
	return Function_531(11, iParam0);
}

var Function_533(int iParam0) //Position: 0x10F42 / 69442
{
	switch (Function_298(iParam0))
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

void Function_534(int iParam0) //Position: 0x111C3 / 70083
{
	struct<16> Var0;
	
	strcpy(&Var0, "GENMESS_WIN_TEAM_", 64);
	straddi(&Var0, iParam0, 64);
	Function_312(&Var0, 0);
	return;
}

void Function_535(var uParam0) //Position: 0x111ED / 70125
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	uVar0 = "";
	bVar1 = false;
	if (Function_66(Global_79962, 512))
	{
		bVar1 = CEIL(50.0f);
		uVar0 = "xp_hardcore";
	}
	else if (Function_66(Global_79962, 256))
	{
		bVar1 = CEIL(100.0f);
		uVar0 = "xp_veteran";
	}
	bVar2 = Function_387();
	Function_506(uParam0, "DM_victory", Function_252(bVar2), 0, 0, 0);
	if (bVar2 == GET_LOCAL_SLOT())
	{
		Function_539();
		Function_537(&Global_50170[4722] + 4, &Global_50170[4722] + 8, &Global_50170[4722] + 12);
		Function_523(&Local_382 + 3380, bVar2, 0, 1, 4294967295, uVar0, bVar1);
	}
	else
	{
		Function_536();
		Function_523(&Local_382 + 3380, bVar2, 0, 0, 4294967295, uVar0, bVar1);
	}
	Function_507(&Global_50170[1422] + 4, &Global_50170[1422] + 8, &Global_50170[1422] + 12);
	return;
}

void Function_536() //Position: 0x112DA / 70362
{
	Function_312("GENMESS_GAMELOST", 0);
	return;
}

void Function_537(var uParam0, var uParam1, var uParam2) //Position: 0x112F7 / 70391
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(47);
				Global_50170[4722].f_28++;
				bVar0 = Global_50170[4722].f_28;
				if (bVar0 > 1)
				{
					Function_130(47, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_538(), 3087);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(47, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(47);
				Global_50170[4722].f_28++;
				bVar0 = Global_50170[4722].f_28;
				if (bVar0 > 5)
				{
					Function_130(47, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_538(), 3088);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_46(47, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(47);
				Global_50170[4722].f_28++;
				bVar0 = Global_50170[4722].f_28;
				if (bVar0 > 20)
				{
					Function_103(47, 150, Function_538(), 3089);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 20);
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

bool Function_538() //Position: 0x11478 / 70776
{
	return "MP_Goldrush_icon_128";
}

void Function_539() //Position: 0x11495 / 70805
{
	Function_312("GENMESS_GAMEWON", 0);
	return;
}

void Function_540(int iParam0, int iParam1) //Position: 0x114B1 / 70833
{
	iParam0->f_172 = iParam1;
	return;
}

int Function_541() //Position: 0x114BD / 70845
{
	if (Function_542(&Local_382 + 3380, Local_196.f_656))
	{
		Function_68(&Local_382 + 3380);
		return 1;
	}
	return 0;
}

bool Function_542(int iParam0, bool bParam1) //Position: 0x114E0 / 70880
{
	int iVar0;
	
	if (!iParam0->f_32)
	{
		iVar0 = 5;
	}
	switch (iParam0->f_56)
	{
		case 0x00000000:
			Function_555();
			UI_HIDE("FameText");
			UI_EXCLUDE("FameText");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			CANCEL_DEADEYE();
			UI_PUSH("MPSplash");
			UI_ENTER("HudMPNoFun");
			UI_SET_STYLE("MPSplashTitle", (0 + iVar0));
			Function_554(iParam0, 1, "VS_WAITING_FOR_MOVIE_TO_BE_READY");
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
					Function_554(iParam0, 2, "VS_STREAMING");
				}
				iParam0->f_104 = (iParam0->f_104 + 1.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_378(iParam0 + 64) && FLASH_GET_INT("networking", "splashDone") < 0)
			{
				UI_ENTER("LoadingSpinner");
				UI_HIDE("WeaponAmmo");
				UI_EXIT("XpHud");
				HUD_CLEAR_HELP();
				HUD_ENABLE(false);
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
					Function_552(StackVal, StackVal, Global_34574);
					*(iParam0 + 8) = { StackVal, StackVal, Function_552(StackVal, StackVal, Global_34574) };
					iParam0->f_108 = CLEAR_AREA_OF_GRASS(*(iParam0 + 8), 2.0f);
					iParam0->f_112 = CLEAR_AREA_OF_TREE_TYPE(*(iParam0 + 8), 5.0f, "");
				}
				*iParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "CloneAnchor", *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
				iParam0->f_28 = Function_549(bParam1, 0, *iParam0, 1, 0, 0);
				if (!iParam0->f_32)
				{
					SET_CAMERASHOT_TARGET_OBJECT_ROLL(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0.0f);
					SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0,180749f, 1,206322f, -0,246788f, 0.0f, 0.0f, 0.0f, 0);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					DESTROY_ACTOR(Global_34573);
				}
				Function_554(iParam0, 4, "VS_LOADING");
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
					SET_AMBIENT_VOICE_NAME(StackVal, Function_217(GET_ACTOR_ENUM(StackVal)));
					SET_ACTOR_INVULNERABILITY(StackVal, true);
					SET_ACTOR_PROOF(StackVal, 4294967295);
				}
				if (!IS_POINT_LIGHT_VALID(CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(*(iParam0 + 8), "winLight", bParam1) + Vector(-0,75f, 1,5f, -0,75f), 1.0f, 1.0f, 1.0f, 2,5f)))
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
					UI_SET_TEXT("MPSplashItem.s0", Function_339(iParam0->f_24));
					Function_548(iParam0->f_24);
				}
				else
				{
					Function_547("MPSplashItem.s0", iParam0->f_36);
					if (iParam0->f_20 != 4294967295)
					{
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_mvp"), UI_GET_STRING(Function_339(iParam0->f_24)), 0, 0);
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
				Function_554(iParam0, 3, "VS_WAITING_FOR_READY");
			}
			break;
		
		case 0x00000003:
			if (StackVal || (StackVal && Function_203(HAS_INVENTORY_COMPONENT(iParam0->f_20 != 4294967295), 1, 0x41700000)))
			{
				if (iParam0->f_20 != 4294967295)
				{
					Function_545(StackVal);
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
				Function_555();
				Function_554(iParam0, 6, "VS_SPLASH_APPEAR");
			}
			break;
		
		case 0x00000006:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				UI_SET_STYLE("MPSplashTitle", (2 + iVar0));
				HUD_FADE_IN(0.0f, 1065353216);
				Function_554(iParam0, 7, "VS_SPLASH_APPEAR_WAIT");
			}
			break;
		
		case 0x00000007:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0,5f)
				{
					if (iParam0->f_20 != 4294967295)
					{
						SAY_SINGLE_LINE_STRING(StackVal, "MPTAUNT", true, true, 4, 0, true, false);
						Function_554(iParam0, 10, "VS_WAIT_FOR_CHATTY_CATHY");
					}
					else if (iParam0->f_104 < 5.0f)
					{
						Function_554(iParam0, 11, "VS_MATCH_BONUS");
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
					Function_554(iParam0, 11, "VS_MATCH_BONUS");
				}
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_40 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_544(iParam0->f_40);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_292(TO_FLOAT(iParam0->f_40), 0);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_40 >= 0)
			{
				Function_554(iParam0, 12, "VS_AIM_BONUS");
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_44 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_543(iParam0);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_292(TO_FLOAT(iParam0->f_44), 0);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_44 >= 0)
			{
				if (iParam0->f_20 != 4294967295)
				{
					DECOR_SET_BOOL(StackVal, "HolsterTheDamnedThing", true);
					Function_554(iParam0, 13, "VS_WAIT_FOR_START_HOLSTER");
				}
				else
				{
					Function_554(iParam0, 14, "VS_OUTRO");
				}
			}
			break;
		
		case 0x0000000D:
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_104 < 15.0f)
			{
				Function_554(iParam0, 14, "VS_OUTRO");
			}
			break;
		
		case 0x0000000E:
			if (!DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_20 != 4294967295)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0,6f)
				{
					UI_SET_STYLE("MPSplashTitle", (4 + iVar0));
					Function_554(iParam0, 15, "VS_OUTRO_FADE");
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_167(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_543(int iParam0) //Position: 0x11EE1 / 73441
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

void Function_544(int iParam0) //Position: 0x11F6F / 73583
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

void Function_545(bool bParam0) //Position: 0x1200E / 73742
{
	bool bVar0;
	
	bVar0 = Function_546();
	GIVE_WEAPON_TO_ACTOR(bParam0, bVar0, false, 1, 1);
	ACTOR_SET_WEAPON_AMMO(bParam0, bVar0, 9.0f);
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar0, 1);
	return;
}

int Function_546() //Position: 0x12038 / 73784
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

void Function_547(char* cParam0, int iParam1) //Position: 0x1207D / 73853
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_296(iParam1, 1) };
	UI_SET_TEXT(cParam0, &Var0);
	return;
}

void Function_548(bool bParam0) //Position: 0x12094 / 73876
{
	struct<16> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_253(bParam0) };
	UI_SET_STRING("Generic_Dbuffer128_0", &Var0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	return;
}

var Function_549(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x120EC / 73964
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
	Function_550(&bVar0, uParam2);
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

void Function_550(var uParam0, int iParam1) //Position: 0x12164 / 74084
{
	int iVar0;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_551(&iVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_551(var uParam0, bool bParam1) //Position: 0x1218A / 74122
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,004f, 1,051545f, -0,924536f, 9,279476f, -164,752f, 29,3796f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,180749f, 1,166322f, -0,246788f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0,512771f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_552(vector3 vParam0) //Position: 0x12225 / 74277
{
	vector3 vVar0;
	
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 100.0f);
	Function_553(0);
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

void Function_553(bool bParam0) //Position: 0x12288 / 74376
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

void Function_554(var uParam0, int iParam1, int iParam2) //Position: 0x1233B / 74555
{
	uParam0->f_56 = iParam1;
	uParam0->f_104 = 0.0f;
	return;
}

void Function_555() //Position: 0x1234C / 74572
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

bool Function_556(var uParam0, int iParam1) //Position: 0x1235E / 74590
{
	switch (iParam1)
	{
		case 0xFFFFFFFE:
			Function_506(uParam0, "MP_endgame_OneTeamLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFD:
			Function_506(uParam0, "MP_endgame_EverybodyLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFC:
			Function_506(uParam0, "MP_endgame_OutOfTime", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFB:
			Function_506(uParam0, "MP_Endgame_draw", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_557(int iParam0, int iParam1) //Position: 0x12419 / 74777
{
	iParam0->f_156 = iParam1;
	return;
}

void Function_558() //Position: 0x12425 / 74789
{
	var uVar0;
	
	Function_565(&Local_382 + 636, !Function_388());
	uVar0 = Function_560(&Local_382 + 636, 1);
	Function_559(&Local_382, uVar0);
	return;
}

void Function_559(var uParam0, bool bParam1) //Position: 0x1244C / 74828
{
	if (IS_VOLUME_VALID(bParam1))
	{
		uParam0->f_8 = bParam1;
	}
	return;
}

var Function_560(int iParam0, int iParam1) //Position: 0x12463 / 74851
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
	iVar7 = Function_141();
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
									iParam0[iVar06]->f_20 = (StackVal + Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 2.0f, 0.0f));
								}
							}
							else if (bVar8)
							{
								if (IS_POINT_IN_VOLUME(*(iParam0 + 1460[iVar1106] + 28[bVar26]), iParam0->f_1448))
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 1.0f, 0,5f));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
								}
							}
							else
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
							}
						}
						else if (bVar2 != bVar6 || Function_563(iParam0 + 1460[iVar1106] + 28[bVar26], iParam0->f_2736))
						{
							iParam0[iVar06]->f_20 = (StackVal + Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[bVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
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
					if (iVar7 != 4294967295 || Function_142(bVar2, 1, 0) == iVar7)
					{
						if (Function_495(bVar2, &Var4))
						{
							if (StackVal && (Var4 < 4294967295 - iParam0->f_2736) >= 15.0f)
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0[Var46] + 8), *(iParam0 + 1460[2106]), 0x3f800000, 0x3f800000));
							}
						}
					}
				}
			}
			bVar2++;
		}
		if (bLocal_49)
		{
			if ((iVar3 % 10) == 0)
			{
				PRINTNL();
				Function_2();
				PRINTSTRING("Weighting,");
			}
			PRINTSTRING(GET_OBJECT_NAME((*iParam0)[iVar06]));
			PRINTSTRING(",");
			Function_562(iParam0[iVar06]->f_20);
			PRINTSTRING(",");
			iVar3++;
		}
		iVar0++;
	}
	if (bLocal_49)
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
	iVar0 = iVar9[(RAND_INT_RANGE(false, 10000) % iVar70)];
	iParam0->f_1452 = iVar0;
	(iParam0 + 1452)->f_4 = NET_GET_NET_TIME();
	Function_561(iParam0 + 1452);
	return (*iParam0)[iVar06];
}

void Function_561(int iParam0) //Position: 0x12890 / 75920
{
	Local_16[GET_LOCAL_SLOT()2] = { StackVal, *iParam0 };
	return;
}

void Function_562(bool bParam0) //Position: 0x128A3 / 75939
{
	if (bLocal_49)
	{
		PRINTINT(ROUND(bParam0));
	}
	return;
}

var Function_563(var uParam0, float fParam1) //Position: 0x128B6 / 75958
{
	return (fParam1 - uParam0->f_12) >= 20.0f;
}

float Function_564(vector3 vParam0, vector3 vParam3, struct<25> Param6) //Position: 0x128C9 / 75977
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

void Function_565(int iParam0, bool bParam1) //Position: 0x12933 / 76083
{
	(iParam0 + 1460[0106])->f_420 = 1;
	if (bParam1)
	{
		Function_566(iParam0, 0, Function_341(Function_141()));
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	else
	{
		Function_566(iParam0, 0, 4294967295);
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	return;
}

void Function_566(int iParam0, int iParam1, int iParam2) //Position: 0x12978 / 76152
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 != GET_LOCAL_SLOT())
		{
			Function_567(iParam0, iVar0, iParam1, iParam2);
		}
		else
		{
			(iParam0 + 1460[iParam1106] + 28[iVar06])->f_16 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_567(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x129B9 / 76217
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	(iParam0 + 1460[iParam2106] + 28[bParam16])->f_16 = 0;
	if (IS_SLOT_VALID(bParam1))
	{
		bVar3 = false;
		if (iParam3 != 4294967295 || Function_142(bParam1, 1, 0) != iParam3)
		{
			bVar4 = GET_SLOT_ACTOR(bParam1);
			if (IS_ACTOR_VALID(bVar4))
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					Function_568(bVar4, &vVar0);
					bVar3 = true;
				}
			}
			else if (Function_146(bParam1))
			{
				if (!Function_143(bParam1, 2, 1))
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

void Function_568(bool bParam0, int iParam1) //Position: 0x12A9D / 76445
{
	GET_POSITION(bParam0, iParam1);
	return;
}

int Function_569() //Position: 0x12AAA / 76458
{
	return Function_570(&Local_382 + 444, &Local_61 + 440);
}

int Function_570(int iParam0, int iParam1) //Position: 0x12ABE / 76478
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (Function_259(iParam0 + 32, iParam1 + 12))
	{
		iVar6 = Function_141();
		if (iVar6 != 4294967295)
		{
			bVar7 = GET_LOCAL_SLOT();
			if (bVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 20)[bVar7];
				if (bVar8 != 4294967295)
				{
					if (Function_366(Function_359(), iVar6, &vVar0, &vVar3, bVar8, (*iParam1 + 88)[iVar6]))
					{
						if (Function_208(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
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

bool Function_571(int iParam0) //Position: 0x12B3A / 76602
{
	if (!IS_OBJECT_VALID(Function_357(iParam0, 0)))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(Function_357(iParam0, 1)))
	{
		return 0;
	}
	return 1;
}

void Function_572(int iParam0, int iParam1) //Position: 0x12B5F / 76639
{
	iParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_573(int iParam0) //Position: 0x12B6E / 76654
{
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MPSplash");
	*iParam0 = 12;
	return;
}

void Function_574(int iParam0, vector3 vParam1) //Position: 0x12B97 / 76695
{
	Function_42(iParam0 + 44, 512);
	*(iParam0 + 72) = { StackVal, StackVal, vParam1 };
}

vector3 Function_575(bool bParam0, var uParam1) //Position: 0x12BB3 / 76723
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_65(uParam1, 8))
	{
		bVar0 = Function_357(bParam0, 0);
		bVar1 = Function_357(bParam0, 1);
		Function_226(bVar0);
		Function_226(bVar1);
		return StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_226(bVar1), Function_226(bVar0), StackVal), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	}
	bVar2 = Function_335(bParam0);
	Function_226(bVar2);
	return StackVal, StackVal, Function_226(bVar2);
}

int Function_576() //Position: 0x12BF2 / 76786
{
	return Function_577(&Local_382 + 444, &Local_61 + 440, 0);
}

int Function_577(int iParam0, int iParam1, bool bParam2) //Position: 0x12C07 / 76807
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (Function_259(iParam0 + 32, iParam1 + 12))
	{
		if (!bParam2)
		{
			bVar7 = GET_LOCAL_SLOT();
			if (bVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 20)[bVar7];
				if (bVar8 != 4294967295)
				{
					bVar6 = Function_364(Function_359(), &vVar0, &vVar3, bVar8, 16);
				}
				else
				{
					return 0;
				}
			}
			return 2;
		}
		bVar6 = Function_364(Function_359(), &vVar0, &vVar3, bLocal_14, bLocal_13);
		if (bVar6)
		{
			if (Function_208(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
			{
				return 1;
			}
			return 2;
		}
		return 0;
	}
	return 2;
}

void Function_578(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12C8B / 76939
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
	iParam0->f_144 = 4294967295;
	iParam0->f_12 = 2;
	Function_590(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_202(iParam0 + 184, 1, 1, 1);
	}
	iParam0->f_108 = Global_78617.f_2648;
	iParam0->f_100 = 4294967295;
	Function_491(iParam0, 2);
	Function_588(iParam0);
	Function_284(iParam0);
	Function_587(iParam0);
	Function_585(iParam0);
	Function_583(iParam0);
	Function_581(iParam0);
	Function_579(iParam0);
	if (bParam2)
	{
		Function_42(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_42(iParam0 + 44, 8);
		Function_197(iParam0 + 184);
	}
	Function_280(iParam0, bParam4);
	Function_93(8388608, 0);
}

void Function_579(var uParam0) //Position: 0x12D53 / 77139
{
	Function_492(uParam0, 77154);
	return;
}

int Function_580() //Position: 0x12D62 / 77154
{
	return 0;
}

void Function_581(var uParam0) //Position: 0x12D69 / 77161
{
	Function_540(uParam0, 77176);
	return;
}

int Function_582() //Position: 0x12D78 / 77176
{
	return 1;
}

void Function_583(var uParam0) //Position: 0x12D7F / 77183
{
	Function_557(uParam0, 77198);
	return;
}

void Function_584() //Position: 0x12D8E / 77198
{
	return;
}

void Function_585(int iParam0) //Position: 0x12D94 / 77204
{
	Function_586(iParam0, 77198);
	return;
}

void Function_586(var uParam0, int iParam1) //Position: 0x12DA3 / 77219
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_587(int iParam0) //Position: 0x12DAF / 77231
{
	Function_503(iParam0, 77198);
	return;
}

void Function_588(int iParam0) //Position: 0x12DBE / 77246
{
	Function_496(iParam0, 77261);
	return;
}

void Function_589(var uParam0) //Position: 0x12DCD / 77261
{
	uParam0 = uParam0;
	return;
}

void Function_590(int iParam0, struct<57> Param1) //Position: 0x12DD7 / 77271
{
	*(iParam0 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_591(int iParam0, bool bParam1) //Position: 0x12DEB / 77291
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3[2];
	int iVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	
	Function_315(1, 1);
	Function_315(2, 0);
	Function_432(iParam0);
	iParam0->f_16 = 4294967295;
	if (bParam1)
	{
		Function_592(&iVar1, &iVar2, 1, 1);
		(*iParam0 + 88)[0] = (iVar1 + (iVar1 % 2));
		(*iParam0 + 88)[1] = (iVar2 + (iVar2 % 2));
		bVar0 = false;
		while (bVar0 <= 16)
		{
			(*iParam0 + 20)[bVar0] = 4294967295;
			if (IS_SLOT_VALID(bVar0))
			{
				if (Function_146(bVar0))
				{
					if (Function_143(bVar0, 2048, 1))
					{
						iVar6 = Function_142(bVar0, 0, 0);
						if (iVar6 > 0)
						{
							(*iParam0 + 20)[bVar0] = uVar3[iVar6];
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
			if (Function_303(bVar0))
			{
				if (Function_143(bVar0, 2048, 1))
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
			if (Function_303(bVar0))
			{
				if (Function_143(bVar0, 2048, 1))
				{
					(*iParam0 + 20)[bVar0] = FLOOR((fVar7 * fVar9));
					fVar7 = (fVar7 + 1.0f);
				}
				else
				{
					(*iParam0 + 20)[bVar0] = 4294967295;
				}
			}
			else
			{
				(*iParam0 + 20)[bVar0] = 4294967295;
			}
			bVar0++;
		}
	}
	Function_306(iParam0 + 12);
	return;
}

void Function_592(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x12F3F / 77631
{
	bool bVar0;
	
	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		switch (Function_142(bVar0, bParam2, bParam3))
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

bool Function_593(bool bParam0) //Position: 0x12F92 / 77714
{
	return IS_OBJECT_VALID(Function_335(bParam0));
}

bool Function_594() //Position: 0x12FA0 / 77728
{
	return (Function_387() == 4294967295 && !Function_392());
}

var Function_595(int iParam0) //Position: 0x12FB0 / 77744
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
			if (Function_146(bVar0))
			{
				if (Function_143(bVar0, 2048, 1))
				{
					Stack.Push(bVar0);
					Call_Loc(iParam0);
					if (StackVal)
					{
						iVar1 = 1;
					}
					else
					{
						NET_LOG(true, "GameSync", "Slot #%s, (%s) skipped because their gamedata isn't valid yet", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
						iVar2 = 0;
					}
				}
				else
				{
					NET_LOG(true, "GameSync", "Slot #%s, (%s) skipped because they haven't joined the game", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
				}
			}
			else
			{
				NET_LOG(true, "GameSync", "Slot #%s, (%s)'s slot is valid, but has invalid CBA data", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
			}
		}
		bVar0++;
	}
	return (iVar1 && iVar2);
}

var Function_596(bool bParam0) //Position: 0x13111 / 78097
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_16, bParam0);
}

int Function_597() //Position: 0x1311E / 78110
{
	bool bVar0;
	
	bVar0 = Function_13();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_598() //Position: 0x13138 / 78136
{
	if (bLocal_49)
	{
		Function_2();
		PRINTSTRING("Game Started");
		PRINTNL();
	}
	return;
}

bool Function_599() //Position: 0x1315B / 78171
{
	int iVar0;
	
	if (!IS_LAYOUTREF_VALID(Function_359()))
	{
		return 0;
	}
	Local_196.f_656 = Function_359();
	Local_196.f_648 = Function_714();
	if (!Function_636(&Local_196 + 656))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(Function_13()))
	{
		DESTROY_ACTOR(Function_13());
	}
	Function_397(4294967295);
	Function_631(&Local_382 + 444, &Local_61 + 440, !Function_388());
	NET_ACTOR_SET_EQUIP_TYPE(3);
	if (Global_83591 == 0)
	{
		Global_83591 = 10;
	}
	NET_SCRIPTMSG_REGISTER_HANDLER(5, 81423);
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 80069);
	Function_615(0);
	iVar0 = NET_GET_PLAYMODE();
	if (iVar0 != 1 || iVar0 != 3)
	{
		Global_84364.f_776 = 4294967295;
	}
	else
	{
		Global_84364.f_776 = Function_152();
	}
	Function_5(0);
	Function_578(&Local_382, 1, 0, 0, 0);
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\Ranch08");
	if (Function_388())
	{
		Function_610(&Local_382 + 556, 0, 78989, "%d");
	}
	else
	{
		Function_610(&Local_382 + 556, 1, 78507, "%d");
	}
	Function_600(1);
	Local_196.f_628 = 4294967295;
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_61, 135);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_16, 33);
	return 1;
}

void Function_600(int iParam0) //Position: 0x13277 / 78455
{
	Function_601(1, iParam0);
	return;
}

void Function_601(int iParam0, bool bParam1) //Position: 0x13283 / 78467
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

var Function_602(int iParam0, int iParam1) //Position: 0x132AB / 78507
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = Function_141();
	iVar2 = Function_341(iVar1);
	Function_609(iParam0 + 4, Function_498(), &iVar0);
	Function_609(iParam1 + 4, Function_394(iVar2), &iVar0);
	if (Function_391())
	{
		bVar3 = Function_453(0);
		if (bVar3 != 4294967294)
		{
			if (Function_434(bVar3))
			{
				Function_609(iParam0 + 12, 1, &iVar0);
				Function_609(iParam1 + 12, 0, &iVar0);
				iParam0->f_20 = Function_608();
				iParam1->f_20 = Function_607();
			}
			else
			{
				Function_609(iParam0 + 12, 0, &iVar0);
				Function_609(iParam1 + 12, 1, &iVar0);
				iParam0->f_20 = Function_607();
				iParam1->f_20 = Function_608();
			}
		}
		else
		{
			Function_609(iParam0 + 12, 0, &iVar0);
			Function_609(iParam1 + 12, 0, &iVar0);
			iParam0->f_20 = Function_607();
			iParam1->f_20 = Function_607();
		}
	}
	else
	{
		if (iVar1 >= 4294967295)
		{
			if (Function_452(iVar1, 4294967291))
			{
				Function_609(iParam0 + 12, 1, &iVar0);
				iParam0->f_20 = Function_606();
			}
			else
			{
				Function_609(iParam0 + 12, 0, &iVar0);
				iParam0->f_20 = Function_605();
			}
		}
		if (iVar2 >= 4294967295)
		{
			if (Function_452(iVar2, 4294967291))
			{
				Function_609(iParam1 + 12, 1, &iVar0);
				iParam1->f_20 = Function_604();
			}
			else
			{
				Function_609(iParam1 + 12, 0, &iVar0);
				iParam1->f_20 = Function_603();
			}
		}
	}
	return iVar0;
}

var Function_603() //Position: 0x133E2 / 78818
{
	return "n <SWAG_R>";
}

var Function_604() //Position: 0x133F4 / 78836
{
	return " <SWAG_R_RET>";
}

var Function_605() //Position: 0x1340A / 78858
{
	return "n <SWAG_B>";
}

var Function_606() //Position: 0x1341C / 78876
{
	return " <SWAG_B_RET>";
}

var Function_607() //Position: 0x13432 / 78898
{
	return "       ";
}

var Function_608() //Position: 0x13442 / 78914
{
	return "n <SWAG_Y>";
}

int Function_609(int iParam0, bool bParam1, int iParam2) //Position: 0x13454 / 78932
{
	if (*iParam0 != bParam1)
	{
		*iParam0 = bParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

void Function_610(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0x1346E / 78958
{
	uParam0->f_76 = 0;
	uParam0->f_64 = uParam1;
	uParam0->f_48 = iParam2;
	uParam0->f_60 = iParam3;
}

var Function_611(int iParam0, int iParam1) //Position: 0x1348D / 78989
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
	iVar2 = Function_151(15);
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
			if (Function_303(bVar8))
			{
				iVar9 = Function_531(15, bVar8);
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
	Function_609(iParam0, iVar5, &iVar0);
	Function_609(iParam0 + 4, iVar2, &iVar0);
	Function_609(iParam0 + 8, bVar1, &iVar0);
	if (Function_614(1, 1))
	{
		bVar10 = true;
		iParam0->f_20 = Function_608();
	}
	else
	{
		bVar10 = false;
		iParam0->f_20 = Function_607();
	}
	Function_609(iParam0 + 12, bVar10, &iVar0);
	if (*iParam0 == 0)
	{
		Function_609(iParam1, 1, &iVar0);
		Function_609(iParam1 + 4, bVar7, &iVar0);
		Function_609(iParam1 + 8, bVar6, &iVar0);
	}
	else
	{
		Function_609(iParam1, 0, &iVar0);
		Function_609(iParam1 + 4, bVar4, &iVar0);
		Function_609(iParam1 + 8, bVar3, &iVar0);
	}
	if (StackVal >= 4294967295)
	{
		if (Function_612(StackVal, 1, 1))
		{
			bVar10 = true;
			iParam1->f_20 = Function_608();
		}
		else
		{
			bVar10 = false;
			iParam1->f_20 = Function_607();
		}
		Function_609(iParam1 + 12, bVar10, &iVar0);
	}
	else
	{
		Function_609(iParam1 + 12, 0, &iVar0);
		iParam1->f_20 = Function_607();
	}
	return iVar0;
}

bool Function_612(bool bParam0, int iParam1, bool bParam2) //Position: 0x135EE / 79342
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_614(iParam1, bParam2);
	}
	if (!Function_146(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_613(iParam1), 64);
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

var Function_613(int iParam0) //Position: 0x1366F / 79471
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
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

bool Function_614(int iParam0, bool bParam1) //Position: 0x136FE / 79614
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_615(int iParam0) //Position: 0x1371E / 79646
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
			Function_233(12288);
			Function_91(16384);
			break;
		
		case 0x00000002:
			Function_233(20480);
			Function_91(8192);
			break;
		
		default:
			Function_91(28672);
			break;
	}
	Function_91(2048);
	Function_616(0, 0);
	Function_222();
	return;
}

void Function_616(bool bParam0, bool bParam1) //Position: 0x137E2 / 79842
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_621(&Global_78480);
	Function_620(&Global_78480);
	uVar0 = Function_151(37);
	Function_618();
	if (!bParam0)
	{
		Function_150(37, uVar0);
	}
	Function_93(18264, 0);
	Function_617();
	return;
}

void Function_617() //Position: 0x1382E / 79918
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_618() //Position: 0x1384D / 79949
{
	Function_619(&Global_78480 + 220);
	return;
}

void Function_619(int iParam0) //Position: 0x1385C / 79964
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

void Function_620(int iParam0) //Position: 0x1387D / 79997
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

void Function_621(int iParam0) //Position: 0x138A1 / 80033
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

void Function_622(int iParam0) //Position: 0x138C5 / 80069
{
	struct<11> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 11);
	Function_627(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_382 + 636, Var0);
	if (Function_594())
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
			Function_625(0, &Local_382 + 436);
			break;
		
		case 0x00000001:
			if (IS_SLOT_VALID(Var0))
			{
				if (!Function_434(Var0))
				{
					if (Function_147())
					{
						Function_292(10.0f, 0);
					}
					Function_623(&Local_382 + 444, &Local_61 + 440, Var0);
				}
			}
			break;
	}
	return;
}

void Function_623(var uParam0, var uParam1, int iParam2) //Position: 0x1394E / 80206
{
	struct<5> Var0;
	
	if (uParam1->f_16 == 4294967295)
	{
		Var0.f_4 = Function_624(uParam0->f_104);
		uParam0->f_104++;
		UI_SET_TEXT("XPComboLevel", Function_310(uParam0->f_104));
		UI_REFRESH("XPComboLevel");
		PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_KILL_RISER_MASTER", &Var0);
		if (iParam2 == uParam0->f_96)
		{
			Function_292(100.0f, "xp_standoff_kill_target");
		}
	}
	return;
}

var Function_624(int iParam0) //Position: 0x139EB / 80363
{
	return (4294966996 + iParam0 * 100);
}

void Function_625(int iParam0, int iParam1) //Position: 0x139F9 / 80377
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_13();
	iVar1 = Function_626(iParam0, iParam1);
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
							Function_265("mp_griefing_teamkill_offense", 0x41200000, 1, 0, 2, 1, 0);
							KILL_ACTOR(Function_13());
						}
					}
					break;
				
				case 0x00000000:
					Function_265("mp_griefing_teamkill_warning", 0x41200000, 1, 0, 2, 1, 0);
					break;
				
				case 0x00000001:
					Function_265("mp_griefing_teamkill_warning_2", 0x41200000, 1, 0, 2, 1, 0);
					break;
			}
			break;
	}
	return;
}

int Function_626(int iParam0, bool bParam1) //Position: 0x13ADB / 80603
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

void Function_627(var uParam0, struct<29> Param1) //Position: 0x13B0B / 80651
{
	bool bVar0;
	struct<9> Var1;
	
	bVar0 = GET_LOCAL_SLOT();
	if (StackVal == 1)
	{
		if (StackVal != bVar0)
		{
			if (!Function_147() || Function_141() != Function_142(Param1, 1, 0))
			{
				Function_629(StackVal, StackVal, uParam0, *(&Param1 + 16));
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
			Function_568(bVar4, &vVar1);
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
		if (Function_194(bVar5))
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
				PRINTSTRING(Function_628(StackVal));
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
				Function_568(bVar4, &vVar1);
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

var Function_628(int iParam0) //Position: 0x13D17 / 81175
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

void Function_629(int iParam0, vector3 vParam1) //Position: 0x13D99 / 81305
{
	(iParam0 + 1460[2106])->f_416 = ((iParam0 + 1460[2106])->f_416 + 1 % 16);
	*(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166]) = { StackVal, StackVal, vParam1 };
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_12 = NET_GET_NET_TIME();
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_16 = 1;
}

void Function_630(int iParam0) //Position: 0x13E0F / 81423
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	Function_397(iVar0);
	return;
}

int Function_631(int iParam0, int iParam1, bool bParam2) //Position: 0x13E23 / 81443
{
	Function_635(iParam0 + 32);
	Function_635(iParam1 + 12);
	iParam0->f_96 = 4294967295;
	if (NET_IS_SESSION_HOST())
	{
		Function_591(iParam1, bParam2);
	}
	*iParam0 = 0;
	Function_377(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	UI_SET_STRING("mp_killchain_header", UI_GET_STRING("mp_plist_kills1"));
	iParam0->f_24 = 0;
	if (bParam2)
	{
		Function_289(iParam0, 8);
		Function_634(Function_359(), iParam0);
		Function_525(iParam0 + 48, Function_305(), 5, 0);
		Function_525(iParam0 + 48, Function_633(), 8, 0);
	}
	else
	{
		Function_632(Function_359(), iParam0);
	}
	UI_ENTER("HudMPNoFun");
	return 1;
}

void Function_632(bool bParam0, var uParam1) //Position: 0x13ED4 / 81620
{
	bool bVar0;
	
	bVar0 = Function_335(uParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	Function_226(bVar0);
	uParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(uParam0, "ShowdownStayOut", 2, Function_226(bVar0), 0.0f, 0.0f, 0.0f, (4.0f * 3.0f), (4.0f * 3.0f), (4.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	return;
}

bool Function_633() //Position: 0x13F26 / 81702
{
	return "Custom/MP_Showdown";
}

void Function_634(bool bParam0, int iParam1) //Position: 0x13F41 / 81729
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
	
	bVar0 = Function_357(bParam0, 0);
	bVar1 = Function_357(bParam0, 1);
	if (!(IS_OBJECT_VALID(bVar0) && IS_OBJECT_VALID(bVar1)))
	{
		return;
	}
	if (!(GET_OBJECT_POSITION(bVar0, &vVar2) && GET_OBJECT_POSITION(bVar1, &vVar5)))
	{
		return;
	}
	vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
	VSCALE(&vVar8, 0,5f);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
	VNORMALIZE(&vVar11);
	vVar17 = { 0.0f, -1.0f, 0.0f };
	VCROSS(&vVar17, &vVar11, &vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	VNORMALIZE(&vVar14);
	SET_OBJECT_POSITION(bVar0, vVar23);
	SET_OBJECT_ORIENTATION(bVar0, 0.0f, UNK_0x9C40E671(&vVar11), 0.0f);
	DECOR_SET_VECTOR(bVar0, "Right", vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal) };
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

void Function_635(int iParam0) //Position: 0x140BB / 82107
{
	*iParam0 = 0;
	return;
}

bool Function_636(int iParam0) //Position: 0x140C5 / 82117
{
	int iVar0;
	
	switch (Function_139())
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
	if (!Function_645(iVar0, iParam0, 0))
	{
		return 0;
	}
	if (!Function_637(*iParam0, &Local_382 + 636, !Function_388(), 1))
	{
	}
	return 1;
}

bool Function_637(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x14129 / 82217
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
	if (bLocal_49)
	{
		Function_2();
		PRINTSTRING("Init_Layout,");
		PRINTSTRING(GET_OBJECT_NAME(bParam0));
		PRINTNL();
	}
	Function_644(iParam1 + 1460[0106]);
	Function_644(iParam1 + 1460[1106]);
	Function_644(iParam1 + 1460[2106]);
	(*iParam1 + 1460)[1106] = 0,1f;
	(*iParam1 + 1460)[2106] = -3.0f;
	(iParam1 + 1460[2106])->f_12 = 0.0f;
	(iParam1 + 1460[2106])->f_20 = 0.0f;
	(iParam1 + 1460[0106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_416 = 0;
	Function_643(iParam1);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = 1;
		bVar4 = Function_141();
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
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_640(iVar3) };
			ITERATE_ON_PARTIAL_NAME(bVar0, &Var8);
		}
		else
		{
			ITERATE_ON_PARTIAL_NAME(bVar0, Function_639());
		}
		bVar14 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		while (IS_VOLUME_VALID(bVar14) && iParam1->f_1444 > 60)
		{
			if (bLocal_49)
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
					if (bLocal_49)
					{
						PRINTSTRING(GET_OBJECT_NAME(StackVal));
					}
				}
				GET_VOLUME_CENTER(bVar14, iParam1[iParam1->f_14446] + 8);
				iParam1->f_1444++;
			}
			if (bLocal_49)
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
	if (bLocal_49)
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
		Function_638(iParam1 + 1460[0106], "Enemy Players");
		Function_638(iParam1 + 1460[1106], "Friendly Players");
		Function_638(iParam1 + 1460[2106], "Player Deaths");
	}
	return 1;
}

void Function_638(var uParam0, var uParam1) //Position: 0x14417 / 82967
{
	return;
}

var Function_639() //Position: 0x1441D / 82973
{
	return "nSpawnVol_";
}

struct<24> Function_640(int iParam0) //Position: 0x1442F / 82991
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_642(), 24);
	stradd(&cVar0, Function_641(iParam0), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_641(int iParam0) //Position: 0x1444B / 83019
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

var Function_642() //Position: 0x1450C / 83212
{
	return "T_SpawnVol_";
}

void Function_643(int iParam0) //Position: 0x14520 / 83232
{
	iParam0->f_1452 = 4294967295;
	Function_561(iParam0 + 1452);
	return;
}

void Function_644(int iParam0) //Position: 0x14534 / 83252
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

bool Function_645(int iParam0, var uParam1, bool bParam2) //Position: 0x14574 / 83316
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
	
	if (!Function_713())
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
	Local_196.f_740 = iParam0;
	Local_196.f_504 = 4294967295;
	Local_196.f_508 = 1E+08.0f;
	Local_196.f_496 = 0;
	(*&Local_196 + 484)[0] = 4294967295;
	(*&Local_196 + 484)[1] = 4294967295;
	Local_196.f_512 = Function_711("nQueue_CTF");
	Local_196.f_656 = *uParam1;
	Local_196.f_516 = FIND_VOLUME_IN_LAYOUT(*uParam1, Function_710());
	if (!IS_VOLUME_VALID(Local_196.f_516))
	{
		Function_709();
		Local_196.f_516 = CREATE_VOLUME_IN_LAYOUT(*uParam1, Function_710(), 3, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_709());
	}
	iVar24 = 2;
	if (Function_388())
	{
		iVar24 = 5;
		if (!Function_708(&bVar23, uParam1))
		{
			return 0;
		}
	}
	if (Function_81())
	{
		iVar24 = 1;
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	bVar0 = false;
	while (bVar0 <= iVar24)
	{
		strcpy(&cVar7, Function_707(), 64);
		if (Function_388())
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
			(*&Local_196 + 520)[bVar05] = GET_VOLUME_FROM_OBJECT(bVar26);
		}
		else
		{
			stradd(&cVar7, Function_641(bVar0), 64);
			(*&Local_196 + 520)[bVar05] = FIND_VOLUME_IN_LAYOUT(*uParam1, &cVar7);
			if (!IS_VOLUME_VALID((*&Local_196 + 520)[bVar05]))
			{
				return 0;
			}
		}
		GET_VOLUME_SCALE((*&Local_196 + 520)[bVar05], &vVar1);
		fVar25 = Function_706(vVar1.x, vVar1.z);
		if (fVar25 > 2,5f)
		{
			strcpy(&cVar7, GET_OBJECT_NAME((*&Local_196 + 520)[bVar05]), 64);
			stradd(&cVar7, " was deemed too small and was scaled up.", 64);
			SCALE_VOLUME((*&Local_196 + 520)[bVar05], (2,5f / fVar25));
		}
		GET_OBJECT_POSITION((*&Local_196 + 520)[bVar05], &vVar4);
		(&Local_196 + 520[bVar05])->f_16 = CLEAR_AREA_OF_GRASS(vVar4, Function_706(vVar1.y, 3.0f));
		(&Local_196 + 520[bVar05])->f_4 = "";
		(&Local_196 + 520[bVar05])->f_12 = "";
		(&Local_196 + 520[bVar05])->f_8 = "";
		if (!(Function_388() || Function_81()))
		{
			if (bVar0 == Function_141())
			{
				uVar27 = Function_705();
			}
			else
			{
				uVar27 = Function_704();
			}
			(&Local_196 + 520[bVar05])->f_8 = Function_479(uVar27, (*&Local_196 + 520)[bVar05]);
		}
		Local_196.f_652++;
		bVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (Function_388())
	{
		DESTROY_ITERATOR(bVar23);
	}
	if (Function_80())
	{
		WAIT(false);
		bVar0 = false;
		while (bVar0 <= Local_196.f_648)
		{
			bVar29 = Function_78(bVar0, 1);
			GET_OBJECT_POSITION(bVar29, &vVar4);
			bVar28 = CLEAR_AREA_OF_GRASS(vVar4, 3.0f);
			DECOR_SET_INT(bVar29, "ClearRequest", bVar28);
			bVar0++;
		}
	}
	if (!bParam2)
	{
		Function_703(&Local_196 + 664);
		Function_525(&Local_196 + 664, "MP_CTF", 10, 0);
		while (!Function_378(&Local_196 + 664) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	NET_SCRIPTMSG_REGISTER_HANDLER(70, 95017);
	NET_SCRIPTMSG_REGISTER_HANDLER(71, 91358);
	NET_SCRIPTMSG_REGISTER_HANDLER(73, 89741);
	NET_SCRIPTMSG_REGISTER_HANDLER(74, 86500);
	NET_SCRIPTMSG_REGISTER_HANDLER(75, 85629);
	NET_SCRIPTMSG_REGISTER_HANDLER(4, 84456);
	bVar30 = NET_IS_SESSION_HOST();
	if (Function_388())
	{
		iVar31 = 15;
		Function_635(&Local_196 + 624);
		UNK_0x2148AC15(457, 4);
		UNK_0x444C3C32(0, 20, 0);
		if (bVar30)
		{
			Function_635(&Local_61 + 436);
			Local_61.f_424 = 0;
			Local_61.f_428 = Function_447();
			Local_61.f_432 = 0;
			Function_306(&Local_61 + 436);
		}
	}
	else if (Function_81())
	{
		iVar31 = 15;
		if (bVar30)
		{
			Local_61.f_424 = 4294967295;
			Local_61.f_428 = 15;
		}
	}
	else if (Function_391())
	{
		iVar31 = 1;
		Local_61.f_428 = 1;
	}
	else if (Function_82())
	{
		iVar31 = 2;
		Local_61.f_428 = 2;
	}
	bVar0 = false;
	while (bVar0 <= iVar31)
	{
		Function_635(&Local_196[bVar08] + 28);
		Local_196[bVar08].f_20 = 4294967294;
		if (bVar30)
		{
			Function_277(&Local_61[bVar07] + 12, -45.0f);
			Local_61[bVar07].f_8 = 4294967294;
			Function_635(&Local_61[bVar07] + 24);
			if (bVar0 <= Local_61.f_428)
			{
				if (Function_80())
				{
					Local_61[bVar07].f_4 = 4;
				}
				else
				{
					Local_61[bVar07].f_4 = 0;
					Local_61[bVar07] = bVar0;
				}
			}
			else
			{
				Local_61[bVar07].f_4 = 4294967295;
				Local_61[bVar07] = 4294967295;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_646(int iParam0) //Position: 0x149E8 / 84456
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, StackVal, 1, "CTF", I2STR("RECVing score. Team %s by player %s with bag %s for %s"), I2STR(Var0), I2STR(I2STR(Var0.f_12)));
	if (Var0 == 4294967294)
	{
		if (Function_391())
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
		}
		if (!Function_374(1))
		{
			if (Function_391())
			{
				Function_405("CTF_one_replenished");
				Function_657();
				if (!(Function_392() || Function_594()))
				{
					Function_499(Function_394(Function_141()));
				}
			}
			else if (Var0.f_12 >= 1)
			{
				Function_405("CTF_mul_replenished_pl");
				Function_656();
			}
			else
			{
				Function_405("CTF_mul_replenished");
				Function_657();
			}
		}
	}
	else if (Var0 == 4294967291)
	{
		if (StackVal > Var0.f_12)
		{
			Function_655();
		}
		else if (StackVal && (Var0.f_12 < 3 - Var0.f_12) != 1)
		{
			Function_654();
		}
	}
	else if (Var0 == GET_LOCAL_SLOT())
	{
		if (Function_82())
		{
			if (StackVal == Function_141())
			{
				Function_653();
				Function_405("CTF_sym_capped_self_their");
			}
			if (!(Function_392() || Function_594()))
			{
				Function_499(StackVal);
			}
		}
		else if (Function_391())
		{
			Function_652();
			Function_405("CTF_one_capped_self");
		}
		else if (Function_388())
		{
			if (!(Function_392() || Function_594()))
			{
				Function_499(StackVal);
			}
			if (StackVal == 2)
			{
				Function_405("CTF_mul_dblcapped_self");
			}
			else
			{
				Function_405("CTF_mul_capped_self");
			}
		}
	}
	else
	{
		if (Function_81())
		{
		}
		else if (Function_388())
		{
			Function_499(Function_500());
		}
		else if (StackVal == Function_141())
		{
			Function_499(StackVal);
		}
		else
		{
			Function_499(Function_498());
		}
		if (IS_SLOT_VALID(Var0))
		{
			if (Function_82())
			{
				if (StackVal == Function_141())
				{
					Function_651();
					Function_649("CTF_sym_capped_their_by", Var0);
				}
				else
				{
					Function_648();
					Function_649("CTF_sym_capped_your_by", Var0);
				}
			}
			else if (Function_391())
			{
				if (StackVal == Function_141())
				{
					Function_652();
				}
				else
				{
					Function_647();
				}
				Function_649("CTF_one_capped_by", Var0);
			}
			else if (Function_388())
			{
				if (StackVal == 2)
				{
					Function_649("CTF_mul_dblcapped_by", Var0);
				}
				else
				{
					Function_649("CTF_mul_capped_by", Var0);
				}
			}
		}
	}
	return;
}

void Function_647() //Position: 0x14D1A / 85274
{
	Function_312("CTSBAG_ENEMCAPTBAG", 0);
	return;
}

void Function_648() //Position: 0x14D39 / 85305
{
	Function_312("CTBCLASS_ENEMCAPTURESBAG", 0);
	return;
}

void Function_649(bool bParam0, bool bParam1) //Position: 0x14D5E / 85342
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_650(bParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_650(bool bParam0) //Position: 0x14D7E / 85374
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21("g", I2STR(bParam0));
}

void Function_651() //Position: 0x14D92 / 85394
{
	Function_312("CTBCLASS_URGANGCAPTURSBAG", 0);
	return;
}

void Function_652() //Position: 0x14DB8 / 85432
{
	Function_312("CTSBAG_FRENDCAPTSBAG", 0);
	return;
}

void Function_653() //Position: 0x14DD9 / 85465
{
	Function_312("CTBCLASS_UCAPTUREBAG", 0);
	return;
}

void Function_654() //Position: 0x14DFA / 85498
{
	Function_312("CTSBAG_1BAGLEFT", 0);
	return;
}

void Function_655() //Position: 0x14E16 / 85526
{
	Function_312("CTSBAG_ALLBAGSCAPTURED", 0);
	return;
}

void Function_656() //Position: 0x14E39 / 85561
{
	Function_312("GRFFA_BAGSAPPEARALLMAP", 0);
	return;
}

void Function_657() //Position: 0x14E5C / 85596
{
	Function_312("CTSBAG_BAGAPPSNEWRND", 0);
	return;
}

void Function_658(int iParam0) //Position: 0x14E7D / 85629
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	if (StackVal != 4294967295)
	{
		NET_LOG(StackVal, 1, "CTF", I2STR("RECVing timed out return for bag %s @ %s"), F2STR(Var0.f_12, 5, 5), 0, 0);
	}
	else
	{
		NET_LOG(StackVal, 1, "CTF", "RECVing return. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	}
	if (StackVal && Function_452(StackVal, 4294967291) != 4294967295)
	{
	}
	if (StackVal != 4294967295)
	{
		if (StackVal == 4294967293)
		{
			if (Function_82())
			{
				if (Function_430(StackVal))
				{
					Function_663();
					Function_405("CTF_sym_returned_their_auto");
				}
				else
				{
					Function_662();
					Function_405("CTF_sym_returned_your_auto");
				}
			}
			else if (Function_388())
			{
			}
			else if (Function_391())
			{
				Function_405("CTF_one_ran_too_far");
				Function_661();
			}
		}
		else if (Function_82())
		{
			if (Function_430(StackVal))
			{
				Function_405("CTF_sym_ran_too_far_their");
			}
			else
			{
				Function_405("CTF_sym_ran_too_far_your");
			}
		}
		else if (Function_388())
		{
			Function_405("CTF_mul_ran_too_far");
		}
		else if (Function_391())
		{
			Function_405("CTF_one_ran_too_far");
		}
	}
	else if (!IS_SLOT_VALID(Var0))
	{
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_660(StackVal);
		NET_LOG(true, "CTF", "Bag returned", 0, 0, 0, 0);
	}
	else
	{
		NET_LOG(true, "CTF", "Bag return ignored, not the host (%s is)", Function_659(), 0, 0, 0);
	}
	return;
}

var Function_659() //Position: 0x150EF / 86255
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

void Function_660(int iParam0) //Position: 0x15130 / 86320
{
	Function_76("CTF_HOST_RETURN_BAG", iParam0);
	Local_61[iParam07].f_8 = 4294967294;
	Local_61[iParam07].f_4 = 0;
	Function_442(&Local_61[iParam07] + 12);
	Function_306(&Local_61[iParam07] + 24);
	return;
}

void Function_661() //Position: 0x1517B / 86395
{
	Function_312("CTSBAG_BAGRETURNS", 0);
	return;
}

void Function_662() //Position: 0x15199 / 86425
{
	Function_312("CTBCLASS_FRENDLYBAGRETURNS", 0);
	return;
}

void Function_663() //Position: 0x151C0 / 86464
{
	Function_312("CTBCLASS_ENEMBAGRETURNS", 0);
	return;
}

void Function_664(int iParam0) //Position: 0x151E4 / 86500
{
	struct<9> Var0;
	bool bVar9;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 4);
	NET_LOG(true, "CTF", "RECVing cap. Player %s (%s) for bags %s, %s", I2STR(vVar0.x), UI_GET_STRING(Function_339(vVar0.x)), I2STR(vVar0.y), I2STR(vVar0.z));
	if (!Function_452(vVar0.y, vVar0.x))
	{
	}
	iVar4 = 1;
	if (vVar0.z >= 4294967295)
	{
		iVar4 = 2;
		if (!Function_452(vVar0.z, vVar0.x))
		{
		}
	}
	if (Function_391())
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	if (!IS_SLOT_VALID(vVar0.x))
	{
	}
	else if (!Function_594())
	{
		bVar5 = vVar0.x != GET_LOCAL_SLOT();
		if (Function_81())
		{
			if (bVar5)
			{
				Function_140(15, iVar4);
			}
		}
		else
		{
			if (bVar5)
			{
				Function_676(iVar4);
				Function_140(15, iVar4);
				if (Function_82())
				{
					Function_675(&Global_50170[3122] + 4, &Global_50170[3122] + 8, &Global_50170[3122] + 12, iVar4);
					Function_674(&Global_50170[3522] + 4, &Global_50170[3522] + 8, &Global_50170[3522] + 12, iVar4);
					Function_292(200.0f, "XP_CTF_cap");
				}
				else if (Function_391())
				{
					Function_673(&Global_50170[3922] + 4, &Global_50170[3922] + 8, &Global_50170[3922] + 12, iVar4);
					Function_672(&Global_50170[4322] + 4, &Global_50170[4322] + 8, &Global_50170[4322] + 12, iVar4);
					Function_292(200.0f, "XP_CTF_cap");
				}
				else if (Function_388())
				{
					Function_671(&Global_50170[4622] + 4, &Global_50170[4622] + 8, &Global_50170[4622] + 12, iVar4);
					if (iVar4 == 1)
					{
						Function_292(50.0f, "XP_CTF_cap");
						Function_670();
					}
					else
					{
						Function_292(150.0f, "XP_CTF_dblcap");
						Function_669();
					}
				}
			}
			if (Function_388())
			{
				if (bVar5)
				{
					Function_668(vVar0.x, iVar4, Function_500(), vVar0.y);
				}
			}
			else if (NET_IS_SESSION_HOST())
			{
				iVar6 = Function_142(vVar0.x, 1, 0);
				Function_667(iVar6, iVar4);
				Function_668(vVar0.x, iVar6, Function_394(iVar6), vVar0.y);
			}
		}
	}
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_594())
		{
			if (Function_391())
			{
				Function_666(vVar0.y);
				Local_61.f_424 = vVar0.y;
				NET_LOG(true, "CTF", "Bag capped", 0, 0, 0, 0);
			}
			else if (Function_388() || Function_81())
			{
				Function_666(vVar0.y);
				NET_LOG(true, "CTF", "Bag capped", 0, 0, 0, 0);
				if (vVar0.z >= 4294967295)
				{
					Function_666(vVar0.z);
				}
				bVar7 = false;
				while (bVar7 <= 15)
				{
					if (Function_466(bVar7))
					{
						if (Function_665(bVar7))
						{
							iVar8++;
						}
						bVar9++;
					}
					bVar7++;
				}
				if (Function_81())
				{
					Local_61.f_424 = iVar8;
					Function_668(vVar0.x, iVar4, Local_61.f_424, vVar0.y);
				}
				else
				{
					Function_668(4294967291, 0, iVar8, bVar9);
					if (iVar8 > bVar9)
					{
						Local_61.f_432 = 0;
						Function_306(&Local_61 + 436);
						Local_61.f_424 = vVar0.y;
					}
					else
					{
						Local_61.f_424 = 4294967295;
					}
				}
			}
			else
			{
				Function_660(vVar0.y);
				NET_LOG(true, "CTF", "Bag capped", 0, 0, 0, 0);
			}
		}
	}
	else
	{
		NET_LOG(true, "CTF", "Cap ignored, not the host (%s is)", Function_659(), 0, 0, 0);
	}
	return;
}

bool Function_665(int iParam0) //Position: 0x1558F / 87439
{
	Function_76("CTF_IS_BAG_CAPPED", iParam0);
	return StackVal != 4;
}

void Function_666(int iParam0) //Position: 0x155B8 / 87480
{
	Function_76("CTF_HOST_CAP_BAG", iParam0);
	Local_61[iParam07].f_8 = 4294967294;
	Local_61[iParam07].f_4 = 4;
	Function_442(&Local_61[iParam07] + 12);
	Function_306(&Local_61[iParam07] + 24);
	return;
}

void Function_667(int iParam0, int iParam1) //Position: 0x15600 / 87552
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = (Global_78578[iParam02] + iParam1);
		Function_306(&Global_78578 + 92);
	}
	return;
}

void Function_668(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15635 / 87605
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

void Function_669() //Position: 0x156C5 / 87749
{
	Function_312("CTSBAG_UCAPT2BAGS", 0);
	return;
}

void Function_670() //Position: 0x156E3 / 87779
{
	Function_312("CTSBAG_UCAPT1BAG", 0);
	return;
}

void Function_671(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x15700 / 87808
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 1)
				{
					Function_130(46, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_538(), 3084);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 15)
				{
					Function_130(46, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_538(), 3085);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_46(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(46);
				Global_50170[4622].f_28 = (iParam3 + Global_50170[4622].f_28);
				bVar0 = Global_50170[4622].f_28;
				if (bVar0 > 50)
				{
					Function_103(46, 150, Function_538(), 3086);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(46, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_672(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x15888 / 88200
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 20)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 3)
				{
					Function_130(43, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_512(), 3079);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_46(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 5)
				{
					Function_130(43, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 7, 150, Function_512(), 3080);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_46(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(43);
				Global_56092[43] = (Global_56092[43] + iParam3);
				bVar0 = Global_56092[43];
				if (bVar0 > 7)
				{
					Function_103(43, 150, Function_512(), 3081);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 7);
					if (*uParam2 == fVar1)
					{
						Function_46(43, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_673(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x159FB / 88571
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 1)
				{
					Function_130(39, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_521(), 3065);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 15)
				{
					Function_130(39, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_521(), 3066);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_46(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(39);
				Global_50170[3922].f_28 = (iParam3 + Global_50170[3922].f_28);
				bVar0 = Global_50170[3922].f_28;
				if (bVar0 > 50)
				{
					Function_103(39, 150, Function_521(), 3067);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(39, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_674(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x15B84 / 88964
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 15)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 1)
				{
					Function_130(35, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 2, 100, Function_515(), 3059);
					Function_129(uParam2, bVar0, 2);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 2)
				{
					Function_130(35, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 3, 150, Function_515(), 3060);
					Function_129(uParam2, bVar0, 3);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 2);
					if (*uParam2 == fVar1)
					{
						Function_46(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(35);
				Global_56092[35] = (Global_56092[35] + iParam3);
				bVar0 = Global_56092[35];
				if (bVar0 > 3)
				{
					Function_103(35, 150, Function_515(), 3061);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_46(35, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_675(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x15CF9 / 89337
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 1)
				{
					Function_130(31, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 15, 100, Function_515(), 3045);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_46(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 15)
				{
					Function_130(31, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_515(), 3046);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 15);
					if (*uParam2 == fVar1)
					{
						Function_46(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(31);
				Global_50170[3122].f_28 = (iParam3 + Global_50170[3122].f_28);
				bVar0 = Global_50170[3122].f_28;
				if (bVar0 > 50)
				{
					Function_103(31, 150, Function_515(), 3047);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(31, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_676(int iParam0) //Position: 0x15E81 / 89729
{
	Function_261(0, iParam0);
	return;
}

void Function_677(int iParam0) //Position: 0x15E8D / 89741
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing Drop. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	if (Var0 == 4294967293)
	{
		if (Function_82())
		{
			if (Function_430(StackVal))
			{
				Function_405("CTF_sym_dropped_auto_their");
			}
			else
			{
				Function_405("CTF_sym_dropped_auto_your");
			}
		}
		else if (Function_391())
		{
			Function_405("CTF_one_dropped_auto");
		}
		else if (Function_388())
		{
			Function_405("CTF_mul_dropped_auto");
		}
	}
	else
	{
		if (StackVal != StackVal)
		{
		}
		if (Var0 == GET_LOCAL_SLOT())
		{
			if (Function_82())
			{
				if (Function_430(StackVal))
				{
					Function_682();
					Function_405("CTF_sym_dropped_self_their");
				}
			}
			else if (Function_391())
			{
				Function_682();
				Function_405("CTF_one_dropped_self");
			}
			else if (Function_388())
			{
				if (StackVal != 4294967295)
				{
					Function_405("CTF_mul_dropped_self_dbl");
				}
				else
				{
					Function_405("CTF_mul_dropped_self");
				}
			}
		}
		else if (IS_SLOT_VALID(Var0))
		{
			Function_458(StackVal);
			if (Function_82())
			{
				if (Function_430(StackVal))
				{
					Function_681();
					Function_649("CTF_sym_dropped_their_by", Var0);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7,5f, "CTF_sym_obj_drop_theirs", false, 0, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					Function_680();
					Function_649("CTF_sym_dropped_your_by", Var0);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(7,5f, "CTF_sym_obj_drop_yours", false, 0, 0, 0, 0, 2, 0, 0, 0);
				}
			}
			else if (Function_391())
			{
				if (Function_434(Var0))
				{
					Function_679();
				}
				else
				{
					Function_678();
				}
				Function_649("CTF_one_dropped_by", Var0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				PRINT_OBJECTIVE_FORMAT(7,5f, "CTF_one_obj_drop", false, 0, 0, 0, 0, 2, 0, 0, 0);
			}
			else if (Function_388())
			{
				if (StackVal != 4294967295)
				{
					Function_458(StackVal);
					Function_649("CTF_mul_dropped_by_dbl", Var0);
				}
				else
				{
					Function_649("CTF_mul_dropped_by", Var0);
				}
			}
		}
	}
	if (NET_IS_SESSION_HOST())
	{
		if (Var0 == 4294967293)
		{
			Function_485(StackVal);
			NET_LOG(true, "CTF", "Time out drop received by me, the host", 0, 0, 0, 0);
		}
		else
		{
			if (Function_452(StackVal, 4294967291))
			{
				if (Function_452(StackVal, Var0))
				{
					Function_485(StackVal);
					NET_LOG(true, "CTF", "Drop received by me, the host", 0, 0, 0, 0);
				}
				else
				{
					NET_LOG(StackVal, StackVal, StackVal, 1, I2STR(I2STR("CTF")), I2STR(Var0), 0);
				}
			}
			else
			{
				NET_LOG(StackVal, 1, "CTF", I2STR("Invalid Drop. Nobody had bag %s already"), 0, 0, 0);
			}
			if (StackVal != 4294967295)
			{
				if (Function_452(StackVal, 4294967291))
				{
					if (Function_452(StackVal, Var0))
					{
						Function_485(StackVal);
						NET_LOG(true, "CTF", "Drop second bag received by me, the host", 0, 0, 0, 0);
					}
					else
					{
						NET_LOG(StackVal, StackVal, StackVal, 1, I2STR(I2STR("CTF")), I2STR(Var0), 0);
					}
				}
				else
				{
					NET_LOG(StackVal, 1, "CTF", I2STR("Invalid Drop. Nobody had bag %s already"), 0, 0, 0);
				}
			}
		}
	}
	else
	{
		NET_LOG(true, "CTF", "Drop ignored, not the host", 0, 0, 0, 0);
	}
	return;
}

void Function_678() //Position: 0x16439 / 91193
{
	Function_312("CTSBAG_ENEMDROPSBAG", 0);
	return;
}

void Function_679() //Position: 0x16459 / 91225
{
	Function_312("CTSBAG_FRENDDROPSBAG", 0);
	return;
}

void Function_680() //Position: 0x1647A / 91258
{
	Function_312("CTBCLASS_ENEMDROPSBAG", 0);
	return;
}

void Function_681() //Position: 0x1649C / 91292
{
	Function_312("CTBCLASS_URGANGDROPSBAG", 0);
	return;
}

void Function_682() //Position: 0x164C0 / 91328
{
	Function_312("CTBCLASS_UDROPBAG", 0);
	return;
}

void Function_683(int iParam0) //Position: 0x164DE / 91358
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing confirm. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	if (Var0 == GET_LOCAL_SLOT())
	{
		NET_LOG(true, "CTF", "Bag confirmed for me!", 0, 0, 0, 0);
		Function_455("CTF_Pickup");
		Function_209(StackVal, StackVal, StackVal, Function_455("CTF_Pickup"));
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
		else if (Local_196.f_496 > 2)
		{
			Function_460(StackVal, 0, 4294967295);
			return;
		}
		if (bVar5)
		{
			if (Function_82())
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_448("CTF_sym_obj_get", 0x40f00000, 1, 2, 0, 0, 0);
				Function_698(&Global_50170[3322] + 4, &Global_50170[3322] + 8, &Global_50170[3322] + 12);
				if (Function_430(StackVal))
				{
					Function_697();
					Function_405("CTF_sym_picked_up_self_their");
				}
			}
			else if (Function_391())
			{
				Function_696(&Global_50170[4122] + 4, &Global_50170[4122] + 8, &Global_50170[4122] + 12);
				Function_695();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_448("CTF_one_obj_get", 0x40f00000, 1, 2, 0, 0, 0);
				Function_405("CTF_one_picked_up_self");
			}
			else if (Function_388())
			{
				Function_694(&Global_50170[4822] + 4, &Global_50170[4822] + 8, &Global_50170[4822] + 12);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (StackVal == 1)
				{
					Function_448("CTF_mul_obj_get", 0x40f00000, 1, 2, 0, 0, 0);
				}
				else
				{
					Function_448("CTF_mul_obj_dblget", 0x40f00000, 1, 2, 0, 0, 0);
				}
				Local_196[GET_CURRENT_GAME_TIME()8].f_16 = StackVal;
			}
		}
		Function_692(StackVal, 1, !Local_196.f_632);
	}
	else if (IS_SLOT_VALID(Var0))
	{
		NET_LOG(true, "CTF", "Somebody else picked up a Bag", 0, 0, 0, 0);
		bVar6 = GET_SLOT_ACTOR(Var0);
		if (IS_ACTOR_VALID(bVar6))
		{
			Function_687(StackVal, StackVal, (StackVal - 1), 1);
		}
		if (Function_82())
		{
			if (Function_430(StackVal))
			{
				Function_649("CTF_sym_picked_up_their_by", Var0);
				Function_686();
			}
			else
			{
				Function_685();
				Function_649("CTF_sym_picked_up_your_by", Var0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_448("CTF_sym_obj_get_back", 0x40f00000, 1, 2, 0, 0, 0);
				if (IS_BLIP_VALID(Local_196[StackVal8]))
				{
					SET_BLIP_BLINK(Local_196[StackVal8], 1, 0, 5f);
				}
			}
		}
		else if (Function_391())
		{
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (Function_434(Var0))
			{
				Function_695();
				Function_448("CTF_one_obj_we_pickup", 0x40f00000, 1, 2, 0, 0, 0);
			}
			else
			{
				Function_684();
				Function_448("CTF_one_obj_they_pickup", 0x40f00000, 1, 2, 0, 0, 0);
			}
			Function_649("CTF_one_picked_up_by", Var0);
		}
		else if (Function_388())
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

void Function_684() //Position: 0x168D3 / 92371
{
	Function_312("CTSBAG_ENEMTAKESBAG", 0);
	return;
}

void Function_685() //Position: 0x168F3 / 92403
{
	Function_312("CTBCLASS_ENEMTAKESLOCBAG", 0);
	return;
}

void Function_686() //Position: 0x16918 / 92440
{
	Function_312("CTBCLASS_URGANGTAKESBAG", 0);
	return;
}

var Function_687(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1693C / 92476
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GET_PHYSINST_FROM_OBJECT(bParam1);
	iVar1 = iParam2;
	bVar2 = iVar1 + 2;
	if (IS_PHYSINST_READY(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
		if (ATTACH_PROP_TO_ANIM(bParam0, bVar0, Function_414(iVar1), "grab", 0, bVar2))
		{
		}
		bVar3 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar0);
		if (IS_OBJECT_ANIMATOR_VALID(bVar3))
		{
			DESTROY_OBJECT_ANIMATOR(bVar3);
		}
		bVar3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar0, Function_691(), Function_690(0), Function_689(iVar1));
		if (IS_OBJECT_ANIMATOR_VALID(bVar3))
		{
			if (LINK_OBJECT_ANIMATOR_TO_ACTOR(bVar3, bParam0, bVar2))
			{
			}
		}
	}
	if (Function_418(bParam0))
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
	SET_ANIM_SET_FOR_ACTOR(bParam0, Function_691(), 0);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_688(iVar1));
	return "";
}

var Function_688(int iParam0) //Position: 0x16A0E / 92686
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

var Function_689(int iParam0) //Position: 0x16A57 / 92759
{
	iParam0 = iParam0;
	return "CTF_new";
}

bool Function_690(bool bParam0) //Position: 0x16A6B / 92779
{
	if (bParam0)
	{
		return "custom/CTF_new";
	}
	return "CTF_new";
}

bool Function_691() //Position: 0x16A92 / 92818
{
	return "CTF";
}

void Function_692(int iParam0, bool bParam1, bool bParam2) //Position: 0x16A9E / 92830
{
	float fVar0;
	bool bVar1;
	
	Function_76("ANIMATE_CARRYING_BAG", iParam0);
	if (bParam1)
	{
		fVar0 = GET_CURRENT_GAME_TIME();
		bVar1 = Function_13();
		if (bParam2)
		{
			DECOR_SET_BOOL(bVar1, "CTF_FastAttach", true);
			Local_196.f_644 = fVar0;
			Function_74(iParam0);
		}
		Function_687(StackVal, bVar1, Local_196.f_496, 0);
		Local_196.f_732 = 1;
		Local_196.f_736 = fVar0;
	}
	ADD_CAMERA_COLLISION_EXCLUSION(StackVal, GET_GAME_CAMERA(), 0);
	(*&Local_196 + 484)[Local_196.f_496] = iParam0;
	Function_693();
	return;
}

void Function_693() //Position: 0x16B39 / 92985
{
	Local_196.f_496++;
	if (Local_196.f_496 >= 2)
	{
	}
	return;
}

void Function_694(var uParam0, var uParam1, var uParam2) //Position: 0x16B54 / 93012
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 10)
				{
					Function_130(48, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_538(), 3090);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 25)
				{
					Function_130(48, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_538(), 3091);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 50)
				{
					Function_130(48, uParam0, 2, uParam1, 3, *uParam2, 0, 150, bVar0, 75, 200, Function_538(), 3092);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_138(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 75)
				{
					Function_130(48, uParam0, 2, uParam1, 4, *uParam2, 0, 200, bVar0, 100, 250, Function_538(), 3093);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_46(48, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_138(48);
				Global_50170[4822].f_28++;
				bVar0 = Global_50170[4822].f_28;
				if (bVar0 > 100)
				{
					Function_103(48, 250, Function_538(), 3094);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 100);
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

void Function_695() //Position: 0x16DDB / 93659
{
	Function_312("CTSBAG_FRENDTAKESBAG", 0);
	return;
}

void Function_696(var uParam0, var uParam1, var uParam2) //Position: 0x16DFC / 93692
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 9)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 10)
				{
					Function_130(41, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 25, 100, Function_521(), 3071);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 10);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 25)
				{
					Function_130(41, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 50, 150, Function_521(), 3072);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 25);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 50)
				{
					Function_130(41, uParam0, 2, uParam1, 3, *uParam2, 0, 150, bVar0, 75, 200, Function_521(), 3073);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 50);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_138(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 75)
				{
					Function_130(41, uParam0, 2, uParam1, 4, *uParam2, 0, 200, bVar0, 100, 250, Function_521(), 3074);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 75);
					if (*uParam2 == fVar1)
					{
						Function_46(41, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_138(41);
				Global_50170[4122].f_28++;
				bVar0 = Global_50170[4122].f_28;
				if (bVar0 > 100)
				{
					Function_103(41, 250, Function_521(), 3075);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(uParam2, bVar0, 100);
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

void Function_697() //Position: 0x17084 / 94340
{
	Function_312("CTBCLASS_UTAKEBAG", 0);
	return;
}

void Function_698(var uParam0, var uParam1, int iParam2) //Position: 0x170A2 / 94370
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 3)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_138(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 10)
				{
					Function_130(33, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 25, 100, Function_515(), 3051);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 10);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_138(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 25)
				{
					Function_130(33, uParam0, 2, uParam1, 2, *iParam2, 0, 100, bVar0, 50, 150, Function_515(), 3052);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 25);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_138(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 50)
				{
					Function_130(33, uParam0, 2, uParam1, 3, *iParam2, 0, 150, bVar0, 75, 200, Function_515(), 3053);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000003:
				fVar1 = Function_138(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 75)
				{
					Function_130(33, uParam0, 2, uParam1, 4, *iParam2, 0, 200, bVar0, 100, 250, Function_515(), 3054);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 75);
					if (*iParam2 == fVar1)
					{
						Function_46(33, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000004:
				fVar1 = Function_138(33);
				Global_50170[3322].f_28++;
				bVar0 = Global_50170[3322].f_28;
				if (bVar0 > 100)
				{
					Function_103(33, 250, Function_515(), 3055);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_129(iParam2, bVar0, 100);
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

void Function_699(int iParam0) //Position: 0x17329 / 95017
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	NET_LOG(StackVal, 1, "CTF", "RECVing ask. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	if (NET_IS_SESSION_HOST())
	{
		if (!Function_594())
		{
			if (!Function_452(StackVal, 4294967291))
			{
				if (Function_702(Var0))
				{
					Function_701(StackVal, StackVal, Var0);
					Function_700(StackVal, Var0);
					NET_LOG(true, "CTF", "Accepted ask.", 0, 0, 0, 0);
				}
				else
				{
					NET_LOG(StackVal, StackVal, 1, I2STR("CTF"), UI_GET_STRING(Function_339(Var0)), 0, 0);
				}
			}
			else
			{
				NET_LOG(StackVal, StackVal, StackVal, StackVal, StackVal, I2STR(UI_GET_STRING(Function_339(1))), 0);
			}
		}
	}
	else
	{
		NET_LOG(true, "CTF", "Ignored Ask, not the host (%s is).", Function_659(), 0, 0, 0);
	}
	return;
}

void Function_700(int iParam0, int iParam1) //Position: 0x174D9 / 95449
{
	Function_76("CTF_HOST_CARRY_BAG", iParam0);
	Local_61[iParam07].f_8 = iParam1;
	Local_61[iParam07].f_4 = 3;
	Function_442(&Local_61[iParam07] + 12);
	Function_306(&Local_61[iParam07] + 24);
	return;
}

void Function_701(var uParam0, var uParam1, int iParam2) //Position: 0x17522 / 95522
{
	struct<13> Var0;
	
	Var0 = uParam0;
	Var0.f_12 = NET_GET_NET_TIME();
	Var0.f_4 = uParam1;
	Var0.f_8 = iParam2;
	NET_LOG(StackVal, 1, "CTF", "SENDing confirm. Player %s (%s) for bag %s @ %s", I2STR(Var0), I2STR(UI_GET_STRING(Function_339(Var0))), F2STR(Var0.f_12, 5, 5));
	NET_SCRIPTMSG_SEND(3, 71, &Var0, 4, 1);
	return;
}

bool Function_702(bool bParam0) //Position: 0x175A3 / 95651
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Function_467();
	iVar0 = 0;
	while (iVar0 <= iVar2)
	{
		if (Function_452(iVar0, bParam0))
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

void Function_703(var uParam0) //Position: 0x175DA / 95706
{
	Function_525(uParam0, Function_438(), 0, 0);
	Function_525(uParam0, Function_691(), 5, 0);
	Function_525(uParam0, Function_690(1), 8, 0);
	return;
}

var Function_704() //Position: 0x17603 / 95747
{
	return "$/fragments/p_gen_mpChestRed01x";
}

var Function_705() //Position: 0x1762B / 95787
{
	return "$/fragments/p_gen_mpChestBlue01x";
}

var Function_706(float fParam0, float fParam1) //Position: 0x17654 / 95828
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var Function_707() //Position: 0x17667 / 95847
{
	return "CapVol_";
}

bool Function_708(var uParam0, int iParam1) //Position: 0x17677 / 95863
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
	ITERATE_ON_PARTIAL_NAME(*uParam0, Function_707());
	ITERATE_IN_LAYOUT(*uParam0, *iParam1);
	return 1;
}

vector3 Function_709() //Position: 0x176F0 / 95984
{
	return 150.0f, 150.0f, 150.0f;
}

var Function_710() //Position: 0x17705 / 96005
{
	return "PlayableSpace";
}

var Function_711(bool bParam0) //Position: 0x1771B / 96027
{
	bool bVar0;
	
	bVar0 = Function_712();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_712() //Position: 0x1772F / 96047
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

bool Function_713() //Position: 0x1776B / 96107
{
	Local_196.f_660 = FIND_NAMED_LAYOUT("CTF_Bag_layout");
	if (!IS_LAYOUTREF_VALID(Local_196.f_660))
	{
		Local_196.f_660 = CREATE_LAYOUT("CTF_Bag_layout");
	}
	return IS_LAYOUTREF_VALID(Local_196.f_660);
}

var Function_714() //Position: 0x177B7 / 96183
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = Function_78(bVar0, 1);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar0++;
		bVar1 = Function_78(bVar0, 1);
	}
	return bVar0;
}

