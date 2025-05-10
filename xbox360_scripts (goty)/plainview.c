//Decompiled with MagicRDR v1.0
//Function Count : 105
//Statics Count : 413
//Natives Count : 148
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<29> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_99 = 19;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	bool bLocal_238 = false;
	bool bLocal_239 = false;
	var uLocal_240 = 6;
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
	struct<4> Local_361[12];
	int iLocal_410 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_237 = 0;
	ALLOW_TUMBLEWEEDS(1);
	Function_104("Initializing Plainview", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_238 = 1000;
		switch (iLocal_237)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_237 = 1;
				}
				bLocal_238 = false;
				break;
			
			case 0x00000001:
				if (Function_103())
				{
					Global_62981 = 0;
					iLocal_237 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 12, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(24, 12, 2);
				}
				bLocal_238 = false;
				break;
			
			case 0x00000002:
				if (Function_94())
				{
					Function_93(&(Global_29008[iScriptParam_0]), 32);
					Local_361[04] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(Local_12, "smoking_stand"), 1, 0, 0, 0, 0, 1) };
					Local_361[14] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand10"), 1, 0, 0, 0, 0, 1) };
					Local_361[24] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(Local_12, "smoking_stand1"), 1, 0, 0, 0, 0, 1) };
					Local_361[34] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid2"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand9"), 1, 0, 0, 0, 0, 1) };
					Local_361[44] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(Local_12, "smoking_stand2"), 1, 0, 0, 0, 0, 1) };
					Local_361[54] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand11"), 1, 0, 0, 0, 0, 1) };
					Local_361[64] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand12"), 1, 0, 0, 0, 0, 1) };
					Local_361[74] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid3"), FIND_OBJECT_IN_LAYOUT(Local_12, "smoking_stand3"), 1, 0, 0, 0, 0, 1) };
					Local_361[84] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand8"), 1, 0, 0, 0, 0, 1) };
					Local_361[94] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand13"), 1, 0, 0, 0, 0, 1) };
					Local_361[104] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_12, "rand_idle_stand14"), 1, 0, 0, 0, 0, 1) };
					Local_361[114] = { StackVal, StackVal, StackVal, Function_92(FIND_OBJECT_IN_LAYOUT(Local_12, "stand_yelling_mid1"), FIND_OBJECT_IN_LAYOUT(Local_12, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
					iLocal_237 = 3;
				}
				bLocal_238 = false;
				break;
			
			case 0x00000003:
				bLocal_239 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PlainviewVol", &iScriptParam_0, 2, 0);
				Function_91(&Global_6654, &Global_7716, iScriptParam_0);
				iLocal_237 = 5;
				bLocal_238 = false;
				break;
			
			case 0x00000005:
				if (Function_90(&Global_6654, &Global_7716, iScriptParam_0))
				{
					iLocal_237 = 4;
					bLocal_238 = false;
				}
				else
				{
					bLocal_238 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_89(&(Global_29008[iScriptParam_0]), 16) && Function_88(Global_29155[iScriptParam_010]))
				{
					iLocal_237 = 6;
				}
				bLocal_238 = false;
				break;
			
			case 0x00000006:
				Function_87(0, &uLocal_240, Local_12.f_864);
				Function_86(0, &uLocal_240, -3244.171f, 39.716f, 3764.044f);
				Function_85(0, &uLocal_240, -3244.171f, 39.716f, 3764.044f);
				Function_84(0, &uLocal_240, -3244.171f, 39.716f, 3764.044f);
				Function_83(0, &uLocal_240, Local_12.f_864);
				Function_82(0, &uLocal_240, Local_12.f_876);
				Function_81(0, &uLocal_240, Local_4);
				Function_87(1, &uLocal_240, Local_12.f_880);
				Function_86(1, &uLocal_240, -3132.029f, 43.474f, 3648.082f);
				Function_85(1, &uLocal_240, -3189.534f, 40.83f, 3712.0f);
				Function_84(1, &uLocal_240, -3132.029f, 43.474f, 3648.082f);
				Function_80(1, &uLocal_240, -3189.534f, 40.83f, 3712.0f);
				Function_82(1, &uLocal_240, Local_12.f_880);
				Function_81(1, &uLocal_240, Local_4);
				Function_87(2, &uLocal_240, Local_12.f_884);
				Function_86(2, &uLocal_240, -3214.415f, 40.157f, 3726.164f);
				Function_85(2, &uLocal_240, -3188.018f, 40.971f, 3714.524f);
				Function_84(2, &uLocal_240, -3103.037f, 45.199f, 3753.386f);
				Function_80(2, &uLocal_240, -3188.018f, 40.971f, 3714.524f);
				Function_79(2, &uLocal_240, -3188.018f, 40.971f, 3714.524f);
				Function_81(2, &uLocal_240, Local_4);
				Function_78(3, &uLocal_240, -3191.546f, 40.401f, 3775.018f);
				Function_86(3, &uLocal_240, -3223.475f, 40.152f, 3726.323f);
				Function_85(3, &uLocal_240, -3191.546f, 40.401f, 3775.018f);
				Function_84(3, &uLocal_240, -3223.475f, 40.152f, 3726.323f);
				Function_80(3, &uLocal_240, -3191.546f, 40.401f, 3775.018f);
				Function_82(3, &uLocal_240, Local_12.f_872);
				Function_81(3, &uLocal_240, Local_4);
				Function_78(4, &uLocal_240, -3186.631f, 42.496f, 3726.175f);
				Function_86(4, &uLocal_240, -3147.338f, 43.172f, 3731.099f);
				Function_85(4, &uLocal_240, -3196.765f, 41.298f, 3745.842f);
				Function_84(4, &uLocal_240, -3147.338f, 43.172f, 3731.099f);
				Function_80(4, &uLocal_240, -3196.765f, 41.298f, 3745.842f);
				Function_79(4, &uLocal_240, -3217.51f, 40.193f, 3749.765f);
				Function_81(4, &uLocal_240, Local_4);
				Function_78(5, &uLocal_240, -3195.162f, 41.378f, 3739.869f);
				Function_86(5, &uLocal_240, -3092.851f, 61.055f, 3755.599f);
				Function_85(5, &uLocal_240, -3196.765f, 41.298f, 3745.842f);
				Function_84(5, &uLocal_240, -3092.851f, 61.055f, 3755.599f);
				Function_80(5, &uLocal_240, -3217.51f, 40.193f, 3749.765f);
				Function_79(5, &uLocal_240, -3196.765f, 41.298f, 3745.842f);
				Function_81(5, &uLocal_240, Local_4);
				Function_77(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_12 + 888));
				Function_73(&Global_6654, &Global_7716, &uLocal_240, Global_6289, iScriptParam_0);
				if (Function_89(&(Global_29008[iScriptParam_0]), 256) || !Function_72(2))
				{
					iLocal_410 = 1;
				}
				if (Global_3380)
				{
				}
				Function_66(14, Local_12.f_868, Local_12.f_832, Local_12.f_860, 0, 0, Local_4.f_28);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_12, "plnv_players_room")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "plnv_players_room"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_12, "plnv_players_room"));
				}
				else
				{
					LOG_ERROR("PLN: Cannot find plnv_players_room to restrict players room");
				}
				Function_93(&(Global_29008[iScriptParam_0]), 8);
				if (Function_89(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_65(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_237 = 10;
				}
				else
				{
					iLocal_237 = 7;
				}
				bLocal_238 = false;
				break;
			
			case 0x00000007:
				Function_51(&Global_62527, 4, Global_30679[0], "$/content/Frontier/Mini_Games/ArmWrestling_PLN/ArmWrestling_PLN", 4294967295, 0, "PLNArmWrestling", 351, -3143.472f, 43.179f, 3720.854f, 2.5f, 0, 0);
				Function_50(&Global_62527, 4, 1);
				Function_49(&Global_62527, 4);
				iLocal_237 = 8;
				bLocal_238 = false;
				break;
			
			case 0x00000008:
				if (Function_44(iScriptParam_0, &Global_6654, iLocal_410))
				{
					Function_40(StackVal, 0, 0.1f, 4, Local_4, 1);
					Function_36(2, 4294967295, 4294967295, 0, 3);
					Function_33(Local_4);
				}
				else
				{
					Function_40(StackVal, 1, 0.5f, 4, Local_4, 1);
					Function_32(64);
					Function_36(0, 8, 4, 7, 2);
					Function_33(Local_4);
				}
				Function_93(&(Global_29008[iScriptParam_0]), 512);
				iLocal_237 = 9;
				bLocal_238 = false;
				break;
			
			case 0x00000009:
				Function_30(Local_4, iScriptParam_0);
				Function_93(&(Global_29008[iScriptParam_0]), 4);
				Function_29("Finished Initializing Plainview", 5.0f);
				iLocal_237 = 10;
				bLocal_238 = false;
				break;
			
			case 0x0000000A:
				if (!Function_28(Global_62981, 16))
				{
					if (Function_25(&(Global_30679[0])))
					{
						Function_24(&Global_62981, 16);
					}
				}
				Function_21(&Local_361);
				if (Function_89(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_237 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_238);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(25, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 24);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 24);
	Function_11(&Global_6654, &Global_7716, iScriptParam_0, (iLocal_410 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_32(64);
	Function_65(&(Global_29008[iScriptParam_0]), 32);
	Function_65(&(Global_29008[iScriptParam_0]), 64);
	Function_65(&(Global_29008[iScriptParam_0]), 8);
	Function_65(&(Global_29008[iScriptParam_0]), 512);
	Function_65(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_239))
	{
		TERMINATE_SCRIPT(bLocal_239);
	}
	Function_29("Unloaded Plainview", 5.0f);
	ALLOW_TUMBLEWEEDS(0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xBE9 / 3049
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

void Function_2(int iParam0) //Position: 0xC1F / 3103
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xC41 / 3137
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xC57 / 3159
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xC6D / 3181
{
	Function_6(&Local_12 + 4);
	RELEASE_LAYOUT_REF(Local_12);
	return;
}

void Function_6(int iParam0) //Position: 0xC7F / 3199
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

void Function_7(var uParam0, int iParam1) //Position: 0xCA5 / 3237
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

void Function_8(var uParam0, int iParam1) //Position: 0xDD3 / 3539
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0xDED / 3565
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xE0A / 3594
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xE15 / 3605
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	strcpy(&cVar0, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_89(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_65(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_17(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_17(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_16(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_16(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_89(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_72(2) || Function_89(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
		{
			Function_12(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
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
			Function_93(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1015 / 4117
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
		if (!Function_17(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_17(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1164 / 4452
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

int Function_14(int iParam0) //Position: 0x118F / 4495
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

void Function_15(var uParam0, int iParam1) //Position: 0x11C3 / 4547
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x11D2 / 4562
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x11E9 / 4585
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x1205 / 4613
{
	if (Function_28(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x1220 / 4640
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

bool Function_20() //Position: 0x16CE / 5838
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0x16D7 / 5847
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
				Function_24(iParam0[bVar04] + 8, 64);
				if (Function_28(StackVal, 2))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_28(StackVal, 4), "UseCase1")))
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_28(StackVal, 16))
				{
					Function_22(iParam0[bVar04] + 8, 64);
				}
				else if (Function_28(StackVal, 32))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_22(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_22(iParam0[bVar04] + 8, 64);
				}
				if (Function_28(StackVal, 2))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_28(StackVal, 4))
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
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
						if (Function_28(StackVal, 64))
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_28(Function_28(StackVal, 64), 16))
					{
						Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_22(iParam0[bVar04] + 8, 64);
						if (Function_28(StackVal, 1))
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_28(Function_28(StackVal, 64), 16))
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_22(iParam0[bVar04] + 8, 64);
					if (Function_28(StackVal, 1))
					{
						Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_28(StackVal, 64))
					{
						if (Function_28(StackVal, 32))
						{
							Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_28(StackVal, 8))
					{
						Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_22(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_28(StackVal, 64))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_28(StackVal, 8))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_22(iParam0[bVar04] + 8, 64);
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_28(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_22(var uParam0, bool bParam1) //Position: 0x1E67 / 7783
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_23(vector3 vParam0) //Position: 0x1E7A / 7802
{
	if (Function_28(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

void Function_24(var uParam0, int iParam1) //Position: 0x1EA1 / 7841
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_25(int iParam0) //Position: 0x1EB0 / 7856
{
	bool bVar0;
	
	Function_27(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_27(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_26(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_26(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_26(int iParam0) //Position: 0x1FAB / 8107
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

vector3 Function_27(int iParam0) //Position: 0x205A / 8282
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

bool Function_28(bool bParam0, int iParam1) //Position: 0x2105 / 8453
{
	return (bParam0 && iParam1) == 0;
}

void Function_29(bool bParam0, float fParam1) //Position: 0x2112 / 8466
{
	if (!Function_72(128))
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

void Function_30(bool bParam0, bool bParam1) //Position: 0x2150 / 8528
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
		Function_31(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x224A / 8778
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(int iParam0) //Position: 0x2257 / 8791
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_33(bool bParam0) //Position: 0x226A / 8810
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
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_35(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_34(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_34(var uParam0) //Position: 0x2355 / 9045
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_35() //Position: 0x2372 / 9074
{
	int iVar0;
	
	return iVar0;
}

void Function_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x237A / 9082
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
		Function_37();
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

void Function_37() //Position: 0x245E / 9310
{
	int iVar0;
	
	Global_26960 = Function_38(StackVal);
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

int Function_38(int iParam0) //Position: 0x24AC / 9388
{
	if (!Function_39(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_39(bool bParam0) //Position: 0x24C4 / 9412
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_40(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x24D9 / 9433
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
		Function_43();
	}
	if (bParam5)
	{
		Function_41(1048576);
	}
}

void Function_41(int iParam0) //Position: 0x25EC / 9708
{
	Function_42(&Global_28842, iParam0);
	return;
}

void Function_42(var uParam0, var uParam1) //Position: 0x25FA / 9722
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_43() //Position: 0x2615 / 9749
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_41(16384);
	}
	return;
}

bool Function_44(int iParam0, var uParam1, bool bParam2) //Position: 0x2631 / 9777
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
	if (iParam0 != Global_30717[1] && Function_45(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_20())
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

int Function_45(var uParam0, bool bParam1) //Position: 0x26F1 / 9969
{
	int iVar0;
	
	iVar0 = Function_47(uParam0);
	if (!Function_46(iVar0))
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

bool Function_46(int iParam0) //Position: 0x272E / 10030
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_47(int iParam0) //Position: 0x2745 / 10053
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_48(int iParam0) //Position: 0x275F / 10079
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2775 / 10101
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_50(var uParam0, int iParam1, float fParam2) //Position: 0x2790 / 10128
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x27B4 / 10164
{
	if (Function_20() && !bParam12)
	{
		return;
	}
	if (!Function_20() && bParam12)
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

int Function_52(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x2900 / 10496
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

int Function_53(bool bParam0) //Position: 0x2AE3 / 10979
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

bool Function_54(vector3 vParam0, vector3 vParam3) //Position: 0x2C1A / 11290
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_55(bool bParam0) //Position: 0x2C47 / 11335
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
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

var Function_56(vector3 vParam0) //Position: 0x2C9E / 11422
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

int Function_57(int iParam0) //Position: 0x2CEC / 11500
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

bool Function_58(vector3 vParam0) //Position: 0x2DA4 / 11684
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_59(int iParam0) //Position: 0x2DBC / 11708
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_60(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2DDF / 11743
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

int Function_61(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2E3D / 11837
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

int Function_62(int iParam0) //Position: 0x2F92 / 12178
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

bool Function_63(int iParam0) //Position: 0x2FD0 / 12240
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_64(int iParam0, int iParam1, int iParam2) //Position: 0x2FE5 / 12261
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_65(var uParam0, int iParam1) //Position: 0x3005 / 12293
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_66(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x301C / 12316
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

var Function_67(bool bParam0, bool bParam1) //Position: 0x33AF / 13231
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_68(bool bParam0, bool bParam1) //Position: 0x33BC / 13244
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

void Function_69(bool bParam0, bool bParam1) //Position: 0x3410 / 13328
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

bool Function_70(int iParam0) //Position: 0x3461 / 13409
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_71(bool bParam0, bool bParam1) //Position: 0x3477 / 13431
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

bool Function_72(int iParam0) //Position: 0x35D1 / 13777
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_73(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x35ED / 13805
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_72(2))
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
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_74(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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

bool Function_74(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x369F / 13983
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_89(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(iParam0, 2))
	{
		return 1;
	}
	if (Function_17(iParam0, 4))
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
		uParam1->f_8 = Function_76(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_58(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(iParam0, 4);
	}
	Function_75(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x380A / 14346
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

var Function_76(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x3946 / 14662
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_35(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_77(var uParam0, bool bParam1) //Position: 0x3A5F / 14943
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

void Function_78(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3AA7 / 15015
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

void Function_79(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3B0A / 15114
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

void Function_80(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3B70 / 15216
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

void Function_81(int iParam0, var uParam1, bool bParam2) //Position: 0x3BD8 / 15320
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

void Function_82(int iParam0, var uParam1, bool bParam2) //Position: 0x3C33 / 15411
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 60);
	return;
}

void Function_83(var uParam0, var uParam1, bool bParam2) //Position: 0x3C97 / 15511
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 48);
	return;
}

void Function_84(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3CFD / 15613
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

void Function_85(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3D67 / 15719
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

void Function_86(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3DCC / 15820
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

void Function_87(int iParam0, var uParam1, bool bParam2) //Position: 0x3E34 / 15924
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020]);
	PRINTVECTOR(*uParam1[bVar020]);
	PRINTNL();
	return;
}

int Function_88(int iParam0) //Position: 0x3EA3 / 16035
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_89(&(Global_29008[iParam0]), 4);
}

bool Function_89(var uParam0, int iParam1) //Position: 0x3EBF / 16063
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_90(var uParam0, var uParam1, int iParam2) //Position: 0x3EDB / 16091
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_20())
	{
		return 1;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_89(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
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

void Function_91(var uParam0, var uParam1, bool bParam2) //Position: 0x3FBC / 16316
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	strcpy(&cVar1, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_89(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_93(&(Global_29008[bParam2]), 0x40000000);
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

struct<16> Function_92(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x40A6 / 16550
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_24(&Var0 + 8, 1);
	}
	else
	{
		Function_22(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_24(&Var0 + 8, 2);
	}
	else
	{
		Function_22(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_24(&Var0 + 8, 4);
	}
	else
	{
		Function_22(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_24(&Var0 + 8, 8);
	}
	else
	{
		Function_22(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_24(&Var0 + 8, 16);
	}
	else
	{
		Function_22(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_24(&Var0 + 8, 32);
	}
	else
	{
		Function_22(&Var0 + 8, 32);
	}
	Function_22(&Var0 + 8, 64);
	Function_22(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

void Function_93(var uParam0, int iParam1) //Position: 0x416F / 16751
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_94() //Position: 0x417E / 16766
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
	
	Function_102(3, 3);
	bVar0 = bVar0;
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_on_ground", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_e_any", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_100(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	if (!Function_95(&Local_12 + 4))
	{
		return 0;
	}
	Local_12 = FIND_NAMED_LAYOUT("Plainview_layout");
	if (!IS_LAYOUTREF_VALID(Local_12))
	{
		Local_12 = CREATE_LAYOUT("Plainview_layout");
	}
	Local_12.f_344 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_12, 8, 0);
	*(&Local_12 + 348[06]) = { -3692.285f, 9.508358f, 3467.929f };
	*(&Local_12 + 348[06] + 12) = { 0.0f, -20.9291f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag19", -3692.285f, 9.508358f, 3467.929f, 0.0f, -20.9291f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_12.f_344);
	*(&Local_12 + 348[16]) = { -3690.688f, 9.503268f, 3468.922f };
	*(&Local_12 + 348[16] + 12) = { 0.0f, 19.07239f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag1", -3690.688f, 9.503268f, 3468.922f, 0.0f, 19.07239f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_12.f_344);
	*(&Local_12 + 348[26]) = { -3688.649f, 9.508358f, 3470.04f };
	*(&Local_12 + 348[26] + 12) = { 0.0f, 28.70414f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag2", -3688.649f, 9.508358f, 3470.04f, 0.0f, 28.70414f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_12.f_344);
	*(&Local_12 + 348[36]) = { -3687.317f, 9.508358f, 3467.837f };
	*(&Local_12 + 348[36] + 12) = { 0.0f, 69.92191f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag3", -3687.317f, 9.508358f, 3467.837f, 0.0f, 69.92191f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_12.f_344);
	*(&Local_12 + 348[46]) = { -3688.163f, 9.508358f, 3472.154f };
	*(&Local_12 + 348[46] + 12) = { 0.0f, -54.99022f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag4", -3688.163f, 9.508358f, 3472.154f, 0.0f, -54.99022f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_12.f_344);
	*(&Local_12 + 348[56]) = { -3688.295f, 9.508358f, 3474.146f };
	*(&Local_12 + 348[56] + 12) = { 0.0f, -76.74036f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag5", -3688.295f, 9.508358f, 3474.146f, 0.0f, -76.74036f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_12.f_344);
	*(&Local_12 + 348[66]) = { -3686.994f, 9.508358f, 3476.04f };
	*(&Local_12 + 348[66] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag6", -3686.994f, 9.508358f, 3476.04f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_12.f_344);
	*(&Local_12 + 348[76]) = { -3690.179f, 9.508359f, 3475.676f };
	*(&Local_12 + 348[76] + 12) = { 0.0f, 157.7802f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag7", -3690.179f, 9.508359f, 3475.676f, 0.0f, 157.7802f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_12.f_344);
	*(&Local_12 + 348[86]) = { -3691.944f, 9.508359f, 3475.655f };
	*(&Local_12 + 348[86] + 12) = { 0.0f, 120.4128f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag8", -3691.944f, 9.508359f, 3475.655f, 0.0f, 120.4128f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_12.f_344);
	*(&Local_12 + 348[96]) = { -3690.779f, 9.503268f, 3473.339f };
	*(&Local_12 + 348[96] + 12) = { 0.0f, -182.323f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag9", -3690.779f, 9.503268f, 3473.339f, 0.0f, -182.323f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_12.f_344);
	*(&Local_12 + 348[106]) = { -3692.857f, 9.508359f, 3472.456f };
	*(&Local_12 + 348[106] + 12) = { 0.0f, 187.8577f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag10", -3692.857f, 9.508359f, 3472.456f, 0.0f, 187.8577f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_12.f_344);
	*(&Local_12 + 348[116]) = { -3668.923f, 8.476237f, 3488.702f };
	*(&Local_12 + 348[116] + 12) = { 0.0f, -73.62263f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag11", -3668.923f, 8.476237f, 3488.702f, 0.0f, -73.62263f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_12.f_344);
	*(&Local_12 + 348[126]) = { -3668.802f, 8.490922f, 3489.834f };
	*(&Local_12 + 348[126] + 12) = { 0.0f, -85.37915f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag12", -3668.802f, 8.490922f, 3489.834f, 0.0f, -85.37915f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_12.f_344);
	*(&Local_12 + 348[136]) = { -3668.824f, 8.490922f, 3491.349f };
	*(&Local_12 + 348[136] + 12) = { 0.0f, -99.24498f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag13", -3668.824f, 8.490922f, 3491.349f, 0.0f, -99.24498f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_12.f_344);
	*(&Local_12 + 348[146]) = { -3666.418f, 8.490922f, 3493.496f };
	*(&Local_12 + 348[146] + 12) = { 0.0f, -5.801308f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag14", -3666.418f, 8.490922f, 3493.496f, 0.0f, -5.801308f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_12.f_344);
	*(&Local_12 + 348[156]) = { -3668.708f, 8.490922f, 3493.989f };
	*(&Local_12 + 348[156] + 12) = { 0.0f, 64.31615f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag15", -3668.708f, 8.490922f, 3493.989f, 0.0f, 64.31615f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_12.f_344);
	*(&Local_12 + 348[166]) = { -3669.365f, 8.490922f, 3491.915f };
	*(&Local_12 + 348[166] + 12) = { 0.0f, -228.7777f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag16", -3669.365f, 8.490922f, 3491.915f, 0.0f, -228.7777f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_12.f_344);
	*(&Local_12 + 348[176]) = { -3670.46f, 8.490922f, 3491.109f };
	*(&Local_12 + 348[176] + 12) = { 0.0f, 192.2305f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag17", -3670.46f, 8.490922f, 3491.109f, 0.0f, 192.2305f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_12.f_344);
	*(&Local_12 + 348[186]) = { -3667.027f, 8.490922f, 3491.729f };
	*(&Local_12 + 348[186] + 12) = { 0.0f, -74.1232f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_12, "Flag18", -3667.027f, 8.490922f, 3491.729f, 0.0f, -74.1232f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_12.f_344);
	*(&Local_12 + 808) = { -3196.344f, 41.34254f, 3752.696f };
	*(&Local_12 + 808 + 12) = { 0.0f, -90.68973f, 0.0f };
	Local_12.f_832 = CREATE_POINT_IN_LAYOUT(Local_12, "player_save_flag_PLN", -3196.344f, 41.34254f, 3752.696f, 0.0f, -90.68973f, 0.0f);
	*(&Local_12 + 836) = { -3194.287f, 41.34254f, 3752.761f };
	*(&Local_12 + 836 + 12) = { 0.0f, 88.186f, 0.0f };
	Local_12.f_860 = CREATE_POINT_IN_LAYOUT(Local_12, "player_purchase_flag_PLN", -3194.287f, 41.34254f, 3752.761f, 0.0f, 88.186f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3196.378f, 41.31387f, 3748.351f, 0.0f, 31.97253f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -3196.765f, 41.29804f, 3745.842f, 0.0f, 130.5441f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand", "rand_idle_stand", -3200.71f, 41.13925f, 3747.294f, 0.0f, -83.20329f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand1", "rand_idle_stand", -3190.964f, 40.93213f, 3716f, 0.0f, -21.21271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_864), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -3189.534f, 40.83021f, 3712f, 0.0f, -196.8265f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -3188.018f, 40.9713f, 3714.524f, 0.0f, -312.0777f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -3200.0f, 41.16076f, 3745.141f, 0.0f, -117.1134f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3196.0f, 41.31734f, 3744.037f, 0.0f, 139.3715f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted", "sleeping_scripted", -3195.162f, 41.3777f, 3739.869f, 0.0f, -122.0802f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_12, "player_sleep_PLN", "player_sleep_on_ground", -3198.153f, 41.34254f, 3753.664f, 0.0f, -98.04723f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_868), 1);
	Local_12.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted2", "sleeping_scripted", -3197.915f, 41.2991f, 3751.58f, 0.0f, -95.08144f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_872), 1);
	Local_12.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted3", "sleeping_scripted", -3188.27f, 41.33947f, 3726.46f, 0.0f, -119.017f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_876), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3096.159f, 46.54511f, 3751.604f, 0.0f, 95.00442f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs", "look_distance_binocs", -3151.939f, 57.857f, 3733.939f, 0.0f, -118.8176f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall", "stand_hammer_wall", -3154.817f, 57.857f, 3733.655f, 0.0f, 0.2332778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -3093.77f, 46.64681f, 3751.767f, 0.0f, 93.09217f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs1", "look_distance_binocs", -3088.704f, 61.055f, 3751.228f, 0.0f, -37.94577f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel", "repair_kneel", -3096.262f, 45.24707f, 3755.899f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand2", "rand_idle_stand", -3185.566f, 40.42764f, 3701.997f, 0.0f, -95.70394f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted4", "sleeping_scripted", -3185.469f, 40.65977f, 3697.69f, 0.0f, -126.0715f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any1", "stand_hammerground_w_any", -3220.623f, 54.8824f, 3719.147f, 0.0f, 145.4979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall1", "stand_hammer_wall", -3224.588f, 40.16819f, 3715.003f, 0.0f, 232.5199f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -3236.496f, 39.70822f, 3765.876f, 0.0f, -92.16642f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -3236.043f, 39.718f, 3761.739f, 0.0f, -51.85283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks1", "nsit_docks", -3093.31f, 61.1012f, 3751.537f, 0.0f, 91.33404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall2", "stand_hammer_wall", -3093.679f, 45.17645f, 3761.546f, 0.0f, -89.92046f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted5", "sleeping_scripted", -3176.028f, 41.26925f, 3692.074f, 0.0f, -132.9076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_880), 1);
	Local_12.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted6", "sleeping_scripted", -3177.497f, 41.15993f, 3693.403f, 0.0f, -134.4139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_884), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted7", "Sit_Ground_Only", -3175.834f, 41.17834f, 3694.069f, 0.0f, -162.9685f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted8", "sleeping_scripted", -3180.257f, 41.32386f, 3712.923f, 0.0f, -134.4139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sleeping_scripted9", "sleeping_scripted", -3179.337f, 41.31962f, 3710.999f, 0.0f, -317.8607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground", "Rand_Idle_Sit_Ground", -3219.032f, 40.1797f, 3749.632f, 0.0f, -56.4775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground1", "Rand_Idle_Sit_Ground", -3217.51f, 40.19337f, 3749.765f, 0.0f, 42.46527f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground2", "Rand_Idle_Sit_Ground", -3217.934f, 40.16549f, 3748.417f, 0.0f, 171.9256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground3", "Rand_Idle_Sit_Ground", -3219.143f, 40.16176f, 3748.237f, 0.0f, 230.3081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground4", "Rand_Idle_NearWall_Shoulder_R", -3218.325f, 40.21752f, 3752.716f, 0.0f, -209.0484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks2", "sit_ground_play_harmonica", -3192.532f, 40.46606f, 3773.318f, 0.0f, 172.487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Campfire_Tend2", "Sit_Ground_Campfire_Tend", -3191.546f, 40.40094f, 3775.018f, 0.0f, 88.21342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Campfire_Tend4", "stand_drunk_rowdydrink", -3191.365f, 40.5546f, 3772.5f, 0.0f, 146.1423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Campfire_Tend5", "stand_drunkdancing_e_any", -3193.597f, 40.46956f, 3772.747f, 0.0f, 257.8328f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee", "Pee", -3169.151f, 42.85962f, 3757.575f, 0.0f, -115.1666f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Pee1", "Pee", -3166.626f, 41.78128f, 3692.619f, 0.0f, -47.80942f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer", "repair_kneel", -3174.371f, 41.1236f, 3701.473f, 0.0f, -60.27861f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand3", "rand_idle_stand", -3160.0f, 43.06282f, 3736f, 0.0f, 96.54269f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer1", "repair_kneel", -3156.257f, 43.16861f, 3725.052f, 0.0f, 96.1933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer2", "repair_kneel", -3147.338f, 43.17244f, 3731.099f, 0.0f, 170.531f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -3093.634f, 45.17645f, 3763.565f, 0.0f, 90.0888f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs2", "look_distance_binocs", -3092.851f, 61.055f, 3755.599f, 0.0f, 150.1304f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand6", "rand_idle_stand", -3095.924f, 46.54511f, 3754.773f, 0.0f, 74.96928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand7", "rand_idle_stand", -3094.141f, 46.54511f, 3754.303f, 0.0f, 90.29669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand8", "rand_idle_stand", -3096.233f, 46.54511f, 3753.065f, 0.0f, 90.29669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any2", "stand_hammerground_w_any", -3132.029f, 43.47377f, 3648.082f, 0.0f, -34.58117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any3", "stand_hammerground_w_any", -3127.848f, 43.47377f, 3646.96f, 0.0f, 142.2744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall4", "stand_hammer_wall", -3129.743f, 43.16861f, 3641.017f, 0.0f, -123.4308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall5", "stand_hammer_wall", -3127.144f, 43.16861f, 3648.959f, 0.0f, -303.3438f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer3", "repair_kneel", -3126.349f, 43.16775f, 3631.373f, 0.0f, 269.8436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -3236.592f, 39.718f, 3763.487f, 0.0f, -120.2334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall6", "stand_hammer_wall", -3223.475f, 40.21484f, 3726.323f, 0.0f, 412.8928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer4", "repair_kneel", -3219.808f, 40.15686f, 3715.179f, 0.0f, 146.1641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer5", "repair_kneel", -3226.491f, 40.21484f, 3724.956f, 0.0f, -41.03802f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_docks3", "sit_ground_play_harmonica", -3194.736f, 40.46606f, 3775.654f, 0.0f, 292.2858f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Campfire_Tend6", "stand_drunk_rowdydrink", -3192.687f, 40.5546f, 3777.143f, 0.0f, 0.485035f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall7", "stand_hammer_wall", -3229.418f, 40.21484f, 3721.868f, 0.0f, 233.249f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer6", "repair_kneel", -3226.879f, 40.21484f, 3718.517f, 0.0f, -128.0695f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table", "lean_table", -3215.912f, 40.15686f, 3719.383f, 0.0f, 46.8618f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand9", "rand_idle_stand", -3216.976f, 40.15686f, 3723.274f, 0.0f, -133.7646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand10", "rand_idle_stand", -3217.809f, 40.15686f, 3724.624f, 0.0f, -109.3732f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand", "smoking_stand", -3216.259f, 40.15686f, 3724.718f, 0.0f, -128.5214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand1", "smoking_stand", -3217.962f, 40.15686f, 3725.718f, 0.0f, -99.01826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand11", "rand_idle_stand", -3151.9f, 43.16517f, 3740.302f, 0.0f, -133.7646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand12", "rand_idle_stand", -3152.741f, 43.14549f, 3741.486f, 0.0f, -109.3732f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand2", "smoking_stand", -3151.308f, 43.18997f, 3741.735f, 0.0f, -128.5214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand3", "smoking_stand", -3152.741f, 43.14549f, 3742.576f, 0.0f, -99.01826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer7", "repair_kneel", -3153.438f, 43.16638f, 3739.388f, 0.0f, 0.1243384f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall8", "stand_hammer_wall", -3156.837f, 43.14849f, 3739.492f, 0.0f, 0.2332778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall9", "stand_hammer_wall", -3149.84f, 43.1699f, 3734.599f, 0.0f, 90.79768f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall10", "stand_hammer_wall", -3157.615f, 43.16861f, 3728.13f, 0.0f, 269.2865f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall11", "stand_hammer_wall", -3157.325f, 43.13836f, 3734.125f, 0.0f, -109.3198f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_table1", "lean_table", -3126.199f, 43.16775f, 3636.155f, 0.0f, -30.02362f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Drink", "Sit_Ground_Drink", -3124.879f, 43.16775f, 3638.185f, 0.0f, 131.7526f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "Sit_Ground_Drink1", "Sit_Ground_Drink", -3125.307f, 43.16775f, 3640.019f, 0.0f, 294.8321f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -3123.533f, 43.168f, 3641.144f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall12", "stand_hammer_wall", -3124.353f, 43.16861f, 3645.069f, 0.0f, -302.8947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any4", "stand_hammerground_w_any", -3129.512f, 43.47377f, 3643.775f, 0.0f, 142.2744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall13", "stand_hammer_wall", -3132.556f, 43.16861f, 3644.935f, 0.0f, -123.4308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand13", "rand_idle_stand", -3095.431f, 46.54511f, 3752.342f, 0.0f, 104.1178f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer8", "repair_kneel", -3101.635f, 45.1989f, 3749.449f, 0.0f, -67.17821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall14", "stand_hammer_wall", -3093.221f, 45.17645f, 3766.427f, 0.0f, -0.3271135f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand14", "rand_idle_stand", -3095.32f, 46.54511f, 3753.786f, 0.0f, 86.51437f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand4", "smoking_stand", -3094.759f, 46.54511f, 3752.72f, 0.0f, -265.4451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_888 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_mid2", "stand_yelling_mid", -3214.415f, 40.15686f, 3726.164f, 0.0f, 46.9555f, 0.0f), Local_12.f_888);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_check_clipboard", "stand_check_clipboard", -3214.79f, 40.15686f, 3726.52f, 0.0f, 34.33274f, 0.0f), Local_12.f_888);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_mid3", "stand_yelling_mid", -3149.377f, 43.24709f, 3743.044f, 0.0f, 46.9555f, 0.0f), Local_12.f_888);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_check_clipboard1", "stand_check_clipboard", -3149.844f, 43.23552f, 3743.386f, 0.0f, 34.33274f, 0.0f), Local_12.f_888);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_yelling_mid1", "stand_yelling_up", -3103.037f, 45.1989f, 3753.386f, 0.0f, -88.08039f, 0.0f), Local_12.f_888);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_check_clipboard2", "stand_check_clipboard", -3103.172f, 45.1989f, 3752.748f, 0.0f, -98.22707f, 0.0f), Local_12.f_888);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand15", "rand_idle_stand", -3240.529f, 39.718f, 3762.878f, 0.0f, -242.4455f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand16", "rand_idle_stand", -3240.348f, 39.718f, 3763.946f, 0.0f, -273.0014f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "rand_idle_stand17", "rand_idle_stand", -3239.1f, 39.718f, 3764.506f, 0.0f, -278.9031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_12.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_12, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", -3145.761f, 43.17878f, 3718.675f, 0.0f, -120.924f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_892), 1);
	Local_12.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_12, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", -3145.761f, 43.17878f, 3722.624f, 0.0f, -63.00186f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_12.f_896), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer9", "repair_kneel", -3217.464f, 40.15686f, 3716.75f, 0.0f, 146.1641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall15", "stand_hammer_wall", -3150.122f, 43.16861f, 3730.391f, 0.0f, 92.7388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall16", "stand_hammer_wall", -3150.762f, 43.16861f, 3727.42f, 0.0f, 183.9612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammer_wall17", "stand_hammer_wall", -3157.424f, 43.13836f, 3736.394f, 0.0f, -90.08061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer10", "repair_kneel", -3157.228f, 43.16638f, 3738.695f, 0.0f, -89.70013f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer11", "repair_kneel", -3150.082f, 43.16638f, 3738.209f, 0.0f, 89.50009f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer12", "repair_kneel", -3150.16f, 43.16638f, 3732.556f, 0.0f, 89.50009f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "kneel_hammer13", "repair_kneel", -3147.997f, 43.16638f, 3735.208f, 0.0f, -0.1657397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand", "leaning_stand", -3151.939f, 57.96017f, 3729.937f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3155.923f, 57.96017f, 3730.066f, 0.0f, 31.68689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3155.96f, 57.96017f, 3734.1f, 0.0f, 135.2493f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand1", "leaning_stand", -3153.571f, 57.96017f, 3733.878f, 0.0f, -180.6594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand2", "leaning_stand", -3090.849f, 61.055f, 3755.433f, 0.0f, -180.6594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs3", "look_distance_binocs", -3088.732f, 61.055f, 3755.451f, 0.0f, -133.3241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_hammerground_w_any5", "stand_hammerground_w_any", -3129.519f, 43.47377f, 3647.589f, 0.0f, 58.03942f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel1", "repair_kneel", -3097.212f, 45.24707f, 3750.882f, 0.0f, -88.65308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "repair_kneel2", "repair_kneel", -3099.826f, 45.24707f, 3750.565f, 0.0f, -54.68982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs4", "look_distance_binocs", -3221.854f, 54.8824f, 3721.226f, 0.0f, -168.3246f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand3", "leaning_stand", -3221.327f, 54.8824f, 3717.027f, 0.0f, -35.73617f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "leaning_stand4", "leaning_stand", -3223.598f, 54.8824f, 3720.184f, 0.0f, 147.8914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_12, "look_distance_binocs5", "look_distance_binocs", -3219.723f, 54.8824f, 3717.981f, 0.0f, -80.73355f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	return 1;
}

bool Function_95(int iParam0) //Position: 0x796E / 31086
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

void Function_96() //Position: 0x7CE9 / 31977
{
	if (!Function_72(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_97() //Position: 0x7D29 / 32041
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

void Function_98(var uParam0, int iParam1) //Position: 0x7D54 / 32084
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_99() //Position: 0x7D65 / 32101
{
	if (!Function_72(128))
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

var Function_100(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7DA7 / 32167
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_101(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_98(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_101(var uParam0, int iParam1, int iParam2) //Position: 0x7DDF / 32223
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

void Function_102(int iParam0, int iParam1) //Position: 0x7EA3 / 32419
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

bool Function_103() //Position: 0x7EEC / 32492
{
	var uVar0;
	
	Function_102(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("Plainview_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("Plainview_layout");
	}
	*(&Local_4 + 4) = { -3194.146f, 41.28f, 3756.203f };
	*(&Local_4 + 4 + 12) = { 0.0f, 267.076f, 0.0f };
	Local_4.f_28 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -3194.146f, 41.28f, 3756.203f, 0.0f, 267.076f, 0.0f);
	return 1;
}

void Function_104(bool bParam0, var uParam1) //Position: 0x7F88 / 32648
{
	if (!Function_72(128))
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

