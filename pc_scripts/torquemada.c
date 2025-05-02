//Decompiled with MagicRDR v1.0
//Function Count : 97
//Statics Count : 355
//Natives Count : 137
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 3;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 1;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 1;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 4;
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
	var uLocal_68 = 3;
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
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 23;
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
	int iLocal_192 = 0;
	bool bLocal_193 = false;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 7;
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
	int iLocal_352 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_192 = 0;
	ALLOW_TUMBLEWEEDS(0);
	Function_96("Initializing Torquemada", 3);
	SET_DUST_LEVEL(3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_193 = 1000;
		switch (iLocal_192)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_192 = 1;
				}
				bLocal_193 = false;
				break;
			
			case 0x00000001:
				if (Function_94())
				{
					Global_98961 = 0;
					if (Function_93(28, 0) || Function_87(28))
					{
						Function_86(&Global_12392, &Global_14836, 0, 393, "tor/officer_Br_TOR");
						Function_86(&Global_12392, &Global_14836, 1, 379, "tor/sentry_early_Br_TOR");
						Function_86(&Global_12392, &Global_14836, 2, 380, "tor/sentry_late_Br_TOR");
						Function_86(&Global_12392, &Global_14836, 3, 391, "tor/tor_grunt");
						Function_86(&Global_12392, &Global_14836, 4, 393, "tor/tor_grunt1");
						Function_86(&Global_12392, &Global_14836, 5, 379, "tor/tor_grunt2");
						Function_86(&Global_12392, &Global_14836, 6, 379, "tor/tor_grunt3");
					}
					else
					{
						Function_86(&Global_12392, &Global_14836, 0, 521, "tor/officer_Br_TOR");
						Function_86(&Global_12392, &Global_14836, 1, 516, "tor/sentry_early_Br_TOR");
						Function_86(&Global_12392, &Global_14836, 2, 517, "tor/sentry_late_Br_TOR");
						Function_86(&Global_12392, &Global_14836, 3, 522, "tor/tor_grunt");
						Function_86(&Global_12392, &Global_14836, 4, 523, "tor/tor_grunt1");
						Function_86(&Global_12392, &Global_14836, 5, 518, "tor/tor_grunt2");
						Function_86(&Global_12392, &Global_14836, 6, 519, "tor/tor_grunt3");
					}
					iLocal_192 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 27, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 27, 2);
				}
				bLocal_193 = false;
				break;
			
			case 0x00000002:
				if (Function_77())
				{
					Function_76(&(Global_43791[iScriptParam_0]), 32);
					iLocal_192 = 3;
				}
				bLocal_193 = false;
				break;
			
			case 0x00000003:
				uLocal_194 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TorquemadaVol", &iScriptParam_0, 2, 0);
				Function_75(&Global_12392, &Global_14836, iScriptParam_0);
				iLocal_192 = 5;
				bLocal_193 = false;
				break;
			
			case 0x00000005:
				if (Function_74(&Global_12392, &Global_14836, iScriptParam_0))
				{
					iLocal_192 = 4;
					bLocal_193 = false;
				}
				else
				{
					bLocal_193 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_73(&(Global_43791[iScriptParam_0]), 16) && Function_72(Global_44085[iScriptParam_09]))
				{
					iLocal_192 = 6;
				}
				bLocal_193 = false;
				break;
			
			case 0x00000006:
				Function_71(StackVal, 0, &uLocal_196, Vector(366,573f, 79,448f, 3448,399f));
				Function_70(StackVal, 0, &uLocal_196, Vector(348,565f, 79,448f, 3448,445f));
				Function_69(StackVal, 0, &uLocal_196, Vector(361,697f, 76,298f, 3442,627f));
				Function_68(StackVal, 0, &uLocal_196, Vector(366,573f, 79,448f, 3448,399f));
				Function_67(StackVal, 0, &uLocal_196, Vector(361,697f, 76,298f, 3442,627f));
				Function_66(StackVal, 0, &uLocal_196, Vector(365,03f, 73,201f, 3447,946f));
				Function_65(0, &uLocal_196, &iLocal_88);
				Function_71(StackVal, 1, &uLocal_196, Vector(380,25f, 76,226f, 3465,269f));
				Function_70(StackVal, 1, &uLocal_196, Vector(371,202f, 76,298f, 3454,809f));
				Function_69(StackVal, 1, &uLocal_196, Vector(349,76f, 76,298f, 3436,495f));
				Function_68(StackVal, 1, &uLocal_196, Vector(336,815f, 76,298f, 3441,679f));
				Function_67(StackVal, 1, &uLocal_196, Vector(358,921f, 76,298f, 3443,924f));
				Function_66(StackVal, 1, &uLocal_196, Vector(343,969f, 76,365f, 3443,132f));
				Function_65(1, &uLocal_196, &iLocal_88);
				Function_71(StackVal, 2, &uLocal_196, Vector(357,814f, 77,448f, 3460,764f));
				Function_70(StackVal, 2, &uLocal_196, Vector(350,345f, 77,267f, 3463,675f));
				Function_69(StackVal, 2, &uLocal_196, Vector(336,815f, 76,298f, 3441,679f));
				Function_68(StackVal, 2, &uLocal_196, Vector(349,76f, 76,298f, 3436,495f));
				Function_67(StackVal, 2, &uLocal_196, Vector(355,532f, 76,298f, 3444,031f));
				Function_66(StackVal, 2, &uLocal_196, Vector(380,25f, 76,226f, 3465,269f));
				Function_65(2, &uLocal_196, &iLocal_88);
				Function_71(StackVal, 3, &uLocal_196, Vector(357,777f, 80,609f, 3463,729f));
				Function_70(StackVal, 3, &uLocal_196, Vector(364,604f, 76,298f, 3456,388f));
				Function_69(StackVal, 3, &uLocal_196, Vector(358,453f, 76,298f, 3438,8f));
				Function_68(StackVal, 3, &uLocal_196, Vector(357,777f, 80,609f, 3463,729f));
				Function_67(StackVal, 3, &uLocal_196, Vector(358,453f, 76,298f, 3438,8f));
				Function_66(StackVal, 3, &uLocal_196, Vector(357,814f, 77,448f, 3460,764f));
				Function_65(3, &uLocal_196, &iLocal_88);
				Function_71(StackVal, 4, &uLocal_196, Vector(341,64f, 82,3f, 3451,988f));
				Function_70(StackVal, 4, &uLocal_196, Vector(341,464f, 86,3f, 3452,961f));
				Function_69(StackVal, 4, &uLocal_196, Vector(340,683f, 79,605f, 3448,368f));
				Function_68(StackVal, 4, &uLocal_196, Vector(345,595f, 79,448f, 3441,132f));
				Function_67(StackVal, 4, &uLocal_196, Vector(342,737f, 82,3f, 3456,587f));
				Function_66(StackVal, 4, &uLocal_196, Vector(341,464f, 86,3f, 3452,961f));
				Function_65(4, &uLocal_196, &iLocal_88);
				Function_71(StackVal, 5, &uLocal_196, Vector(341,464f, 86,3f, 3452,961f));
				Function_70(StackVal, 5, &uLocal_196, Vector(342,737f, 82,3f, 3456,587f));
				Function_69(StackVal, 5, &uLocal_196, Vector(339,105f, 82,637f, 3448,275f));
				Function_68(StackVal, 5, &uLocal_196, Vector(337,729f, 79,474f, 3451,363f));
				Function_67(StackVal, 5, &uLocal_196, Vector(356,315f, 76,3f, 3439,85f));
				Function_66(StackVal, 5, &uLocal_196, Vector(342,964f, 78,988f, 3452,149f));
				Function_65(5, &uLocal_196, &iLocal_88);
				Function_71(StackVal, 6, &uLocal_196, Vector(343,969f, 76,365f, 3443,132f));
				Function_70(StackVal, 6, &uLocal_196, Vector(345,595f, 79,448f, 3441,132f));
				Function_69(StackVal, 6, &uLocal_196, Vector(348,565f, 79,448f, 3448,445f));
				Function_68(StackVal, 6, &uLocal_196, Vector(343,952f, 82,649f, 3446,1f));
				Function_67(StackVal, 6, &uLocal_196, Vector(341,64f, 82,3f, 3451,988f));
				Function_66(StackVal, 6, &uLocal_196, Vector(348,565f, 79,448f, 3448,445f));
				Function_65(6, &uLocal_196, &iLocal_88);
				Function_61(&Global_12392, &Global_14836, &uLocal_196, &Global_10996, iScriptParam_0);
				if (Function_73(&(Global_43791[iScriptParam_0]), 256) || !Function_60(2))
				{
					iLocal_352 = 1;
				}
				Function_76(&(Global_43791[iScriptParam_0]), 8);
				if (Function_73(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_59(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_192 = 10;
				}
				else
				{
					iLocal_192 = 7;
				}
				bLocal_193 = false;
				break;
			
			case 0x00000007:
				Function_45(StackVal, &Global_98318, 8, Global_46894[3], "$/content/Mexico/Mini_Games/FiveFingerFillet_TOR/FiveFingerFillet_TOR", 4294967295, 0, "TorFiveFinger", 353, Vector(354,429f, 76,298f, 3447,638f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "torv_fff"));
				Function_44(&Global_98318, 8, 1);
				Function_43(&Global_98318, 8);
				iLocal_192 = 8;
				bLocal_193 = false;
				break;
			
			case 0x00000008:
				Function_39(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				Function_38(64);
				if (Function_37(iScriptParam_0, &Global_12392, iLocal_352))
				{
					Function_33(2, 4294967295, 4294967295, 0, 3);
					Function_30(&iLocal_4);
				}
				else
				{
					Function_33(1, 10, 6, 10, 0);
					Function_30(&iLocal_4);
					Function_29(&Global_14836[03] + 16, 0);
					Function_29(&Global_14836[13] + 16, 0);
					Function_29(&Global_14836[23] + 16, 0);
					Function_29(&Global_14836[33] + 16, 0);
					Function_29(&Global_14836[43] + 16, 0);
					Function_29(&Global_14836[53] + 16, 0);
					Function_29(&Global_14836[63] + 16, 0);
				}
				Function_76(&(Global_43791[iScriptParam_0]), 512);
				iLocal_192 = 9;
				bLocal_193 = false;
				break;
			
			case 0x00000009:
				Function_27(&iLocal_4, iScriptParam_0);
				Function_76(&(Global_43791[iScriptParam_0]), 4);
				Function_26("Finished Initializing Torquemada", 5.0f);
				iLocal_192 = 10;
				bLocal_193 = false;
				break;
			
			case 0x0000000A:
				if (!Function_25(Global_98961, 8))
				{
					if (Function_21(&(Global_46894[3])))
					{
						Function_20(&Global_98961, 8);
					}
				}
				if (Function_73(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_192 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_193);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 27);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 27);
	Function_11(&Global_12392, &Global_14836, iScriptParam_0, (iLocal_352 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(2);
	Function_59(&(Global_43791[iScriptParam_0]), 32);
	Function_59(&(Global_43791[iScriptParam_0]), 64);
	Function_59(&(Global_43791[iScriptParam_0]), 8);
	Function_59(&(Global_43791[iScriptParam_0]), 512);
	Function_59(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_194))
	{
		TERMINATE_SCRIPT(&uLocal_194);
	}
	ALLOW_TUMBLEWEEDS(1);
	Function_26("Unloaded Torquemada", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xAFF / 2815
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xB35 / 2869
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xB57 / 2903
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xB6D / 2925
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xB83 / 2947
{
	Function_6(&iLocal_88 + 8);
	RELEASE_LAYOUT_REF(&iLocal_88);
	return;
}

void Function_6(int iParam0) //Position: 0xB96 / 2966
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0xBBE / 3006
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0xD09 / 3337
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0xD26 / 3366
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xD44 / 3396
{
	Function_6(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xD57 / 3415
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_73(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_59(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_17(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_17(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_16(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_17(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_16(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_73(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_60(2) || Function_73(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
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
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_76(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xF75 / 3957
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x10DB / 4315
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

int Function_14(int iParam0) //Position: 0x1106 / 4358
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

void Function_15(var uParam0, int iParam1) //Position: 0x113A / 4410
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0x114B / 4427
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	iParam0 = (iParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x1165 / 4453
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x1182 / 4482
{
	if (Function_25(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x119D / 4509
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_20(var uParam0, int iParam1) //Position: 0x164B / 5707
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_21(int iParam0) //Position: 0x165C / 5724
{
	var uVar0;
	
	Function_24(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_23(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_22(&iParam0);
	return 1;
}

void Function_22(var uParam0) //Position: 0x176D / 5997
{
	var uVar0;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	Function_24(uParam0);
	uVar0 = Function_24(uParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		uVar3 = GRINGO_GET_USE_COMPONENT_EXT(&uVar2, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(&uVar3))
		{
			bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, 0);
			while (bVar4 >= 4294967295)
			{
				iVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar4, &uVar3);
				uVar6 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar5, &uVar2);
				if (IS_PHYSINST_VALID(&uVar6))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
				}
				bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, bVar4 + 1);
			}
		}
	}
	return;
}

struct<8> Function_23(int iParam0) //Position: 0x185B / 6235
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,299f, 16,57026f, 2593,136f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,0631f, 73,82803f, 2294,619f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,766f, 18,07059f, 4453,27f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,6982f, 76,28821f, 3447,546f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-465,0943f, 152,3517f, 1596,716f);
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_24(int iParam0) //Position: 0x1933 / 6451
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,388f, 16,57687f, 2592,54f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,1002f, 73,83751f, 2294,133f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,772f, 18,07059f, 4453,844f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,5946f, 76,28807f, 3448,024f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-464,3469f, 152,3559f, 1596,59f);
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_25(var uParam0, int iParam1) //Position: 0x1A07 / 6663
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(char* cParam0) //Position: 0x1A14 / 6676
{
	if (!Function_60(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 2;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = (Global_21610.f_128 + fParam1);
	}
	return;
}

void Function_27(int iParam0, bool bParam1) //Position: 0x1A54 / 6740
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_46715 = &iParam0;
	Global_40000.f_12 = bParam1;
	Global_43789 = bParam1;
	if (IS_OBJECT_VALID(&Global_44085[bParam19] + 56))
	{
		if (!IS_WORLD_SECTOR_LOADED(&Global_44085[bParam19] + 56))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(&Global_44085[bParam19] + 56);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_28(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x1B44 / 6980
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

int Function_29(int iParam0, int iParam1) //Position: 0x1B51 / 6993
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

void Function_30(int iParam0) //Position: 0x1BDC / 7132
{
	struct<2> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	*(&Global_40000 + 16) = &iParam0;
	*(&Global_40000 + 24) = CREATE_OBJECT_ITERATOR(&Global_40000 + 16);
	ITERATE_EVERYWHERE(&Global_40000 + 24);
	ITERATE_ON_OBJECT_TYPE(&Global_40000 + 24, 8);
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(&Global_40000 + 24) >= 0)
	{
		*(&Global_40000 + 32) = START_OBJECT_ITERATOR(&Global_40000 + 24);
		GET_OBJECT_POSITION(&Global_40000 + 32, &Var0);
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_32(), 3, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_31(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_31(var uParam0) //Position: 0x1CD8 / 7384
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_32() //Position: 0x1CF5 / 7413
{
	int iVar0;
	
	return &iVar0;
}

void Function_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1CFE / 7422
{
	if (Global_40000 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_40000, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_40022 = Global_40000;
	Global_40022.f_4 = StackVal;
	Global_40022.f_8 = StackVal;
	Global_40022.f_12 = Global_40000.f_12;
	*(&Global_40022 + 16) = &Global_40000 + 16;
	*(&Global_40022 + 24) = &Global_40000 + 24;
	*(&Global_40022 + 32) = &Global_40000 + 32;
	*(&Global_40022 + 48) = &Global_40000 + 48;
	Global_40022.f_64 = Global_40000.f_64;
	Global_40022.f_68 = Global_40000.f_68;
	Global_40000.f_8 = iParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &iParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_34();
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

void Function_34() //Position: 0x1DEC / 7660
{
	int iVar0;
	
	Global_41176 = Function_35(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_35(int iParam0) //Position: 0x1E3A / 7738
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_36(int iParam0) //Position: 0x1E52 / 7762
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_37(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x1E67 / 7783
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_73(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_93(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = Param1;
	stradd(&cVar0, &Global_44085[Global_46722[Global_43787]9] + 32, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_38(bool bParam0) //Position: 0x1F25 / 7973
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_39(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1F38 / 7992
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	Global_43580.f_4 = iParam2;
	Global_43580.f_12 = uParam0;
	*(&Global_43580 + 24) = &uParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = uParam1;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_43580 + 24);
	if (IS_ITERATOR_VALID(&uVar0))
	{
		ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
		ITERATE_ON_PARTIAL_NAME(&uVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(&uVar0) >= 0)
		{
			*(&Global_43580 + 40) = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar0));
		}
		DESTROY_ITERATOR(&uVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_42();
	}
	if (&bParam5)
	{
		Function_40(1048576);
	}
}

void Function_40(int iParam0) //Position: 0x2046 / 8262
{
	Function_41(&Global_43580, iParam0);
	return;
}

void Function_41(var uParam0, var uParam1) //Position: 0x2054 / 8276
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_42() //Position: 0x2073 / 8307
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_40(16384);
	}
	return;
}

void Function_43(struct<28>[] Param0, int iParam1) //Position: 0x208F / 8335
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_44(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x20AC / 8364
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_45(struct<28>[] Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x20D3 / 8403
{
	if (0 && !&bParam11)
	{
		return;
	}
	if (1 && bParam11)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(&(Global_98936[iParam1])))
	{
		DESTROY_OBJECTSET(&(Global_98936[iParam1]));
	}
	Param0[iParam128].f_4 = Function_54(iParam2, iParam1, 4);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[iParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[iParam128] + 8) = 4294967295;
	}
	(&Param0[iParam128] + 64) = "";
	(&Param0[iParam128] + 72) = "";
	*(&Param0[iParam128] + 80) = &iParam12;
	Param0[iParam128].f_136 = iParam7;
	Param0[iParam128].f_152 = 5;
	Param0[iParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[iParam128].f_188 = iParam4;
	Param0[iParam128].f_192 = 4294967295;
	Param0[iParam128].f_196 = 4294967295;
	Param0[iParam128].f_200 = 4294967295;
	strcpy(&Param0[iParam128] + 16, &cParam6, 16);
	*(&Param0[iParam128] + 88) = Param8;
	Param0[iParam128].f_100 = iParam10;
	Param0[iParam128].f_112 = iParam2;
	if (Global_39266[iParam1] && Function_53(iParam1))
	{
		Function_46(StackVal, iParam2, (1 + iParam1), Param8, 63);
	}
	Param0[iParam128].f_196 = 1;
	Param0[iParam128].f_184 |= 8192;
}

int Function_46(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x223C / 8764
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_52(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_51(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_50(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_49(uVar3);
		Var6 = Function_49(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_49(StackVal);
				Var4 = Function_49(StackVal);
				if (Function_48(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_47(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_47(int iParam0) //Position: 0x2425 / 9253
{
	switch (iParam0)
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

bool Function_48(struct<2> Param0, struct<2> Param2) //Position: 0x255C / 9564
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_49(int iParam0) //Position: 0x2588 / 9608
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

var Function_50(vector3 vParam0) //Position: 0x25DF / 9695
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

int Function_51(int iParam0) //Position: 0x262D / 9773
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

bool Function_52(vector3 vParam0) //Position: 0x26E5 / 9957
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_53(int iParam0) //Position: 0x26FD / 9981
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

int Function_54(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2720 / 10016
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_58(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_55(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_55(bParam0, bParam1, bParam2, 4294967295);
}

int Function_55(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x277E / 10110
{
	var uVar0;
	
	if (!Function_57(bParam2))
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
	uVar0 = Function_58(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_56(uVar0);
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

var Function_56(int iParam0) //Position: 0x28E2 / 10466
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

bool Function_57(int iParam0) //Position: 0x2920 / 10528
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_58(int iParam0, int iParam1, int iParam2) //Position: 0x2935 / 10549
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_59(var uParam0, int iParam1) //Position: 0x2955 / 10581
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_60(int iParam0) //Position: 0x296F / 10607
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_61(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x298B / 10635
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_60(2))
	{
		return;
	}
	if (Function_73(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_62(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_59(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_76(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_62(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2A43 / 10819
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_73(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, false))
		{
			return 0;
		}
	}
	if (&iParam1 + 8 == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_44085[iParam59] + 32, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = Function_64(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_52(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_63(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_63(int iParam0, struct<2> Param1) //Position: 0x2BC4 / 11204
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_52(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_52(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_52(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_52(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_52(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_52(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_64(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x2D0A / 11530
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_32(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

void Function_65(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2E31 / 11825
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 72) = &iParam2;
	return;
}

void Function_66(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2E90 / 11920
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_48(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_67(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2EF7 / 12023
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_48(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_68(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2F60 / 12128
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_48(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_69(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2FCB / 12235
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_48(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_70(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x3031 / 12337
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_48(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_71(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x309A / 12442
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_48(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_72(int iParam0) //Position: 0x30FE / 12542
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_73(&(Global_43791[iParam0]), 4);
}

bool Function_73(var uParam0, int iParam1) //Position: 0x311A / 12570
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_74(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3137 / 12599
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_73(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_17(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_17(&(Param0[iVar02]), 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED(vParam1[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_75(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x3220 / 12832
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_73(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_76(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_15(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_15(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_76(var uParam0, int iParam1) //Position: 0x3310 / 13072
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_77() //Position: 0x3321 / 13089
{
	var uVar0;
	
	Function_85(3, 3);
	uVar0 = &uVar0;
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/mex_gateguards", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_83(&iLocal_88 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_78(&iLocal_88 + 8))
	{
		return 0;
	}
	iLocal_88 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_88))
	{
		iLocal_88 = CREATE_LAYOUT("Torquemada_layout");
	}
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_gateGuards", "mex_gateGuards", Vector(344,1936f, 86,30775f, 3453,583f), Vector(0.0f, -99,88123f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(370,8496f, 76,29803f, 3453,738f), Vector(0.0f, -103,2249f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_distance_binocs", "look_distance_binocs", Vector(336,815f, 76,298f, 3441,679f), Vector(0.0f, 68,39206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_distance_binocs1", "look_distance_binocs", Vector(374,2824f, 76,17789f, 3447,836f), Vector(0.0f, -16,23489f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(345,595f, 79,448f, 3441,132f), Vector(0.0f, -118,3615f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(347,8919f, 79,448f, 3450,637f), Vector(0.0f, -374,1032f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "rand_idle_stand", "rand_idle_stand", Vector(348,5652f, 79,44801f, 3448,445f), Vector(0.0f, -95,97935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_distance_binocs2", "look_distance_binocs", Vector(339,1049f, 82,63695f, 3448,275f), Vector(0.0f, 75,84146f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_distance_binocs3", "look_distance_binocs", Vector(357,7766f, 80,60876f, 3463,729f), Vector(0.0f, -94,60477f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(341,464f, 86,3f, 3452,961f), Vector(0.0f, -110,6105f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_out_window_L", "look_out_window_L", Vector(345,8349f, 76,31133f, 3440,769f), Vector(0.0f, -102,4529f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(371,674f, 73,148f, 3445,447f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(358,4531f, 76,298f, 3438,8f), Vector(0.0f, 158,3716f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "smoking_stand", "smoking_stand", Vector(361,6974f, 76,29804f, 3442,627f), Vector(0.0f, 120,4494f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_gateGuards1", "mex_gateGuards", Vector(367,059f, 79,44796f, 3442,328f), Vector(0.0f, -21,17013f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "rand_idle_stand1", "rand_idle_stand", Vector(347,404f, 82,3f, 3452,502f), Vector(0.0f, -106,977f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_out_window_R", "look_out_window_R", Vector(341,6405f, 82,3f, 3451,988f), Vector(0.0f, 74,06854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "lean_fence_L", "lean_fence_L", Vector(343,9521f, 82,649f, 3446,1f), Vector(0.0f, -12,76428f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_scripted", "sleeping_scripted", Vector(365,0297f, 73,20147f, 3447,946f), Vector(0.0f, 66,03874f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(367,193f, 73,14801f, 3446,274f), Vector(0.0f, 74,02099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sit_cleanrifle", "sit_cleanrifle", Vector(364,9547f, 76,29881f, 3447,938f), Vector(0.0f, -25,45916f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sit_cleanpistol", "sit_cleanpistol", Vector(363,987f, 76,298f, 3447,426f), Vector(0.0f, -26,07295f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(367,0298f, 76,30627f, 3446,386f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(340,7906f, 76,29723f, 3441,133f), Vector(0.0f, 76,21307f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(350,3449f, 77,26659f, 3463,675f), Vector(0.0f, -182,2557f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_wall_scripted1", "sleeping_wall_scripted", Vector(357,8142f, 77,44831f, 3460,763f), Vector(0.0f, 150,8202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_out_window_R1", "look_out_window_R", Vector(355,4588f, 77,49743f, 3463,728f), Vector(0.0f, 148,7434f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "smoking_stand1", "smoking_stand", Vector(355,1902f, 77,44971f, 3461,991f), Vector(0.0f, -85,48868f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_out_window_R2", "look_out_window_R", Vector(340,043f, 78,95312f, 3456,053f), Vector(0.0f, -192,4409f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_scripted1", "sleeping_scripted", Vector(343,9695f, 76,36466f, 3443,132f), Vector(0.0f, 72,74812f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(345,2915f, 76,29997f, 3441,914f), Vector(0.0f, 93,51579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_scripted2", "sleeping_scripted", Vector(340,8023f, 79,6469f, 3448,12f), Vector(0.0f, -91,80407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "smoking_stand2", "smoking_stand", Vector(346,8443f, 79,44427f, 3448,066f), Vector(0.0f, -110,7563f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(363,696f, 79,448f, 3447,04f), Vector(0.0f, -79,36417f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_88 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "fivefingerfillet_spectate1", "fivefingerfillet_spectate", Vector(356,5144f, 76,29012f, 3448,271f), Vector(0.0f, 445,4167f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_88 + 384), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_scripted3", "sleeping_scripted", Vector(336,2184f, 75,7496f, 3452,404f), Vector(0.0f, 346,6501f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_wall_scripted2", "sleeping_wall_scripted", Vector(339,667f, 75,79791f, 3451,814f), Vector(0.0f, 76,51438f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_stool_sit", "mex_stool_sit", Vector(341,0199f, 76,298f, 3448,688f), Vector(0.0f, -14,60954f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "lean_fence_L1", "lean_fence_L", Vector(342,7368f, 82,3f, 3456,587f), Vector(0.0f, 163,5319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", Vector(338,9065f, 78,30585f, 3457,445f), Vector(0.0f, -191,8235f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_distance_binocs4", "look_distance_binocs", Vector(342,2734f, 79,448f, 3441,831f), Vector(0.0f, 68,39206f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "repair_kneel", "repair_kneel", Vector(363,198f, 76,29803f, 3454,416f), Vector(0.0f, 182,3701f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sit_cleanrifle2", "sit_cleanrifle", Vector(359,642f, 76,29803f, 3452,106f), Vector(0.0f, -41,1807f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sit_cleanpistol1", "sit_cleanpistol", Vector(364,6039f, 76,29803f, 3456,388f), Vector(0.0f, -87,5335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_talking_soldiers_link3", "mex_talking_soldiers_link", Vector(337,7291f, 79,47359f, 3451,363f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_gateGuards2", "mex_gateGuards", Vector(366,5725f, 79,44796f, 3448,399f), Vector(0.0f, -137,3543f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "mex_gateGuards3", "mex_gateGuards", Vector(380,2504f, 76,22568f, 3465,269f), Vector(0.0f, -93,72478f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(349,7604f, 76,29803f, 3436,495f), Vector(0.0f, -366,433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(342,9922f, 82,3f, 3451,988f), Vector(0.0f, -73,92495f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", Vector(347,2877f, 76,29997f, 3446,599f), Vector(0.0f, 18,40236f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "sleeping_scripted4", "sleeping_scripted", Vector(342,2989f, 78,95201f, 3454,812f), Vector(0.0f, 172,4846f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(354,9772f, 76,29803f, 3442,667f), Vector(0.0f, -91,44349f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(358,9212f, 76,29803f, 3443,924f), Vector(0.0f, 56,41193f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(361,6713f, 76,29804f, 3441,345f), Vector(0.0f, 108,9294f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "smoking_stand3", "smoking_stand", Vector(356,3155f, 76,29964f, 3439,85f), Vector(0.0f, 215,6479f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_88 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(357,207f, 76,29012f, 3448,271f), Vector(0.0f, 80,01993f, 0.0f));
	*(&iLocal_88 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(356,5144f, 76,29012f, 3446,935f), Vector(0.0f, 114,4131f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", Vector(357,1731f, 76,29803f, 3444,734f), Vector(0.0f, 0,6724875f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", Vector(355,5315f, 76,29803f, 3444,031f), Vector(0.0f, -63,78448f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "look_distance_binocs5", "look_distance_binocs", Vector(372,9789f, 73,14801f, 3442,961f), Vector(0.0f, -23,72541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 1);
	*(&iLocal_88 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_88, "Locked_Footlocker", "Locked_Footlocker", Vector(339,1402f, 75,79791f, 3450,61f), Vector(0.0f, 161,8286f, 0.0f));
	return 1;
}

bool Function_78(struct<2>[] Param0) //Position: 0x4ECA / 20170
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_82();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_81(&(Param0[iVar02]), 8);
		}
		else if (Function_80())
		{
			iVar1 = 1;
			Function_81(&(Param0[iVar02]), 8);
		}
		Function_81(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_81(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_81(&(Param0[iVar02]), 2);
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
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_81(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_81(&(Param0[iVar02]), 2);
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
	Function_79();
	return 1;
}

void Function_79() //Position: 0x528C / 21132
{
	if (!Function_60(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_80() //Position: 0x52CC / 21196
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

void Function_81(struct<13> Param0) //Position: 0x52FA / 21242
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_82() //Position: 0x530D / 21261
{
	if (!Function_60(128))
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

var Function_83(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x534F / 21327
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_84(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_81(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_84(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x538D / 21389
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_81(&(Param0[iVar02]), 4);
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

void Function_85(int iParam0, int iParam1) //Position: 0x545C / 21596
{
	switch (&iParam1)
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

void Function_86(struct<2>[] Param0, vector3[] vParam1, var uParam2, int iParam3, char* cParam4) //Position: 0x54A6 / 21670
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = uParam2;
	vParam1[iVar03] = iParam3;
	if (!STRINGS_ARE_EQUAL(&cParam4, ""))
	{
		strcpy(&cVar1, "$/content/scripting/gringo/gringobrains/", 64);
		stradd(&cVar1, &cParam4, 64);
		*(&vParam1[iVar03] + 8) = GET_ASSET_ID(&cVar1, 1);
	}
	else
	{
		(&vParam1[iVar03] + 8) = "";
	}
	Function_16(&(Param0[iVar02]), 1);
	Function_15(&(Param0[iVar02]), 2);
	Function_16(&(Param0[iVar02]), 8);
	Function_16(&(Param0[iVar02]), 16);
}

int Function_87(int iParam0) //Position: 0x554B / 21835
{
	int iVar0;
	
	if (!Function_92(iParam0))
	{
		return 0;
	}
	iVar0 = Function_91(iParam0);
	if (!Function_88(Function_91(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x5581 / 21889
{
	if (!Function_90(iParam0))
	{
		return 0;
	}
	if (!Function_89(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x55A5 / 21925
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x55BA / 21946
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0x55D1 / 21969
{
	if (!Function_92(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_92(int iParam0) //Position: 0x55EB / 21995
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_93(int iParam0, bool bParam1) //Position: 0x5601 / 22017
{
	int iVar0;
	
	iVar0 = Function_91(iParam0);
	if (!Function_90(iVar0))
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

bool Function_94() //Position: 0x563F / 22079
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	Function_85(3, 3);
	uVar0 = &uVar0;
	Function_83(&iLocal_4 + 8, "p_uti_cover2x1x", 0, 0);
	Function_83(&iLocal_4 + 8, "p_uti_cover1x1x", 0, 0);
	Function_83(&iLocal_4 + 8, "p_uti_cover1x2x", 0, 0);
	if (!Function_78(&iLocal_4 + 8))
	{
		return 0;
	}
	iLocal_4 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("Torquemada_layout");
	}
	*(&iLocal_4 + 80) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "fallVolumes_set");
	*(&iLocal_4 + 64[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "deathVolume01", 2,802597E-45f, Vector(392,0308f, 58,99847f, 3450,71f), Vector(-5,008644f, 0.0f, 0.0f), Vector(153,4154f, 26,92656f, 97,87216f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 80, &iLocal_4 + 64[0]);
	*(&iLocal_4 + 104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "stayVolumes_set");
	*(&iLocal_4 + 88[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "stayHere", 2,802597E-45f, Vector(357,1899f, 81,22784f, 3452,214f), Vector(0.0f, -13,91785f, 0.0f), Vector(28,01151f, 25,13843f, 25,08939f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 104, &iLocal_4 + 88[0]);
	*(&iLocal_4 + 128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "warningZones_set");
	*(&iLocal_4 + 112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "warningZone01", 2,802597E-45f, Vector(435,058f, 78,22583f, 3478,816f), Vector(0.0f, 0.0f, 0.0f), Vector(27,59585f, 31,56297f, 46,29986f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 128, &iLocal_4 + 112[0]);
	*(&iLocal_4 + 136) = CREATE_OBJECTSET_IN_LAYOUT("MainParkingFlagsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 144[03]) = Vector(420,465f, 78,305f, 3467,614f);
	*(&iLocal_4 + 144[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mainSpot01", Vector(420,465f, 78,305f, 3467,614f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 136);
	*(&iLocal_4 + 144[13]) = Vector(409,4321f, 78,305f, 3478,012f);
	*(&iLocal_4 + 144[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mainSpot02", Vector(409,4321f, 78,305f, 3478,012f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 136);
	*(&iLocal_4 + 144[23]) = Vector(437,619f, 78,305f, 3482,48f);
	*(&iLocal_4 + 144[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mainSpot03", Vector(437,619f, 78,305f, 3482,48f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 136);
	*(&iLocal_4 + 144[33]) = Vector(443,292f, 78,306f, 3469,68f);
	*(&iLocal_4 + 144[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "mainSpot04", Vector(443,292f, 78,306f, 3469,68f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 136);
	*(&iLocal_4 + 248) = CREATE_OBJECTSET_IN_LAYOUT("shootSpotSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 256[03]) = Vector(357,7985f, 80,60876f, 3461,145f);
	*(&iLocal_4 + 256[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "shootSpot01", Vector(357,7985f, 80,60876f, 3461,145f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 248);
	*(&iLocal_4 + 256[13]) = Vector(366,8087f, 79,448f, 3448,187f);
	*(&iLocal_4 + 256[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "shootSpot02", Vector(366,8087f, 79,448f, 3448,187f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 248);
	*(&iLocal_4 + 256[23]) = Vector(344,8915f, 86,39453f, 3452,974f);
	*(&iLocal_4 + 256[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "shootSpot03", Vector(344,8915f, 86,39453f, 3452,974f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 248);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x0", "p_uti_cover2x1x", Vector(460,8912f, 57,32452f, 3270,573f), Vector(-5,200643f, -47,10938f, 1,784466f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x1", "p_uti_cover2x1x", Vector(489,3655f, 61,86654f, 3306,392f), Vector(0.0f, 9,762145f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x2", "p_uti_cover2x1x", Vector(493,8774f, 61,66787f, 3302,123f), Vector(0.0f, 9,762145f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x3", "p_uti_cover2x1x", Vector(498,86f, 61,80355f, 3303,899f), Vector(0.0f, 9,762145f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x0", "p_uti_cover1x1x", Vector(505,992f, 61,927f, 3302,008f), Vector(0.0f, 10,7046f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x1", "p_uti_cover1x1x", Vector(503,6855f, 62,22914f, 3305,215f), Vector(0.0f, -5,693443f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x4", "p_uti_cover2x1x", Vector(493,9998f, 62,16194f, 3315,654f), Vector(3,167407f, -15,6766f, -1,284288f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x5", "p_uti_cover2x1x", Vector(500,485f, 62,23291f, 3313,942f), Vector(3,07622f, 7,557522f, -0,02265134f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x6", "p_uti_cover2x1x", Vector(498,3646f, 62,25168f, 3320,296f), Vector(0.0f, -0,2778574f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x7", "p_uti_cover2x1x", Vector(485,3372f, 72,13361f, 3411,931f), Vector(0.0f, -21,01811f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x8", "p_uti_cover2x1x", Vector(480,7056f, 71,55541f, 3409,766f), Vector(0.0f, -21,26124f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x9", "p_uti_cover2x1x", Vector(477,3242f, 72,25035f, 3414,447f), Vector(0.0f, -30,90436f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x10", "p_uti_cover2x1x", Vector(486,7031f, 71,33834f, 3400,996f), Vector(0.0f, -18,62462f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x11", "p_uti_cover2x1x", Vector(479,5664f, 71,33834f, 3403,436f), Vector(0.0f, -34,9731f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x12", "p_uti_cover2x1x", Vector(500,6425f, 71,27844f, 3404,259f), Vector(0.0f, -45,78064f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x13", "p_uti_cover2x1x", Vector(497,2451f, 71,2976f, 3394,372f), Vector(0.0f, -24,84036f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x14", "p_uti_cover2x1x", Vector(499,5828f, 71,30385f, 3389,528f), Vector(0.0f, -5,06839f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x2", "p_uti_cover1x1x", Vector(500,044f, 71,30167f, 3389,883f), Vector(0.0f, -29,53775f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x15", "p_uti_cover2x1x", Vector(498,9543f, 71,33834f, 3398,814f), Vector(0.0f, -22,76542f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x16", "p_uti_cover2x1x", Vector(483,0232f, 78,30591f, 3461,749f), Vector(0.0f, -26,56838f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x3", "p_uti_cover1x1x", Vector(481,2436f, 78,2822f, 3460,883f), Vector(0.0f, -8,001889f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x4", "p_uti_cover1x1x", Vector(477,5339f, 78,30591f, 3460,62f), Vector(0.0f, -1,084305f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x2x0", "p_uti_cover1x2x", Vector(474,2782f, 78,28907f, 3457,417f), Vector(0.0f, -5,054489f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x17", "p_uti_cover2x1x", Vector(482,7878f, 77,59759f, 3447,238f), Vector(0.0f, -6,860012f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x18", "p_uti_cover2x1x", Vector(475,9375f, 77,34521f, 3446,88f), Vector(0.0f, 4,233506f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x19", "p_uti_cover2x1x", Vector(478,2231f, 78,20513f, 3454,611f), Vector(0.0f, 0,687202f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x20", "p_uti_cover2x1x", Vector(492,4513f, 78,30591f, 3457,526f), Vector(0.0f, -60,69448f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x5", "p_uti_cover1x1x", Vector(491,8693f, 78,30591f, 3458,391f), Vector(0.0f, -28,95497f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x21", "p_uti_cover2x1x", Vector(434,5673f, 78,30591f, 3479,774f), Vector(0.0f, -106,3993f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x22", "p_uti_cover2x1x", Vector(431,0085f, 78,30591f, 3469,074f), Vector(0.0f, -91,46287f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x23", "p_uti_cover2x1x", Vector(426,4472f, 78,3059f, 3470,144f), Vector(0.0f, -92,05626f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x24", "p_uti_cover2x1x", Vector(424,4719f, 78,30591f, 3478,935f), Vector(0.0f, -103,5007f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x25", "p_uti_cover2x1x", Vector(429,6481f, 78,30591f, 3480,222f), Vector(0.0f, -91,09704f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x26", "p_uti_cover2x1x", Vector(418,7616f, 78,30133f, 3477,69f), Vector(0.0f, -102,7439f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x27", "p_uti_cover2x1x", Vector(417,4663f, 78,23176f, 3470,201f), Vector(0.0f, -102,7439f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x28", "p_uti_cover2x1x", Vector(406,4864f, 77,34406f, 3466,41f), Vector(0.0f, -102,7439f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x6", "p_uti_cover1x1x", Vector(402,2701f, 77,17135f, 3471,344f), Vector(-0,4310525f, -2,26991f, 10,7553f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x29", "p_uti_cover2x1x", Vector(399,4782f, 76,6347f, 3462,877f), Vector(0.0f, -102,7439f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x30", "p_uti_cover2x1x", Vector(395,3109f, 76,44323f, 3471,184f), Vector(0.0f, -102,7439f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x2x1", "p_uti_cover1x2x", Vector(388,8254f, 76,41941f, 3468,668f), Vector(0.0f, -13,07408f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x31", "p_uti_cover2x1x", Vector(387,4845f, 76,3222f, 3463,398f), Vector(0.0f, -102,7439f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x1x7", "p_uti_cover1x1x", Vector(394,8787f, 76,54609f, 3464,008f), Vector(0.0f, -12,54738f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x2x2", "p_uti_cover1x2x", Vector(395,116f, 76,4548f, 3463,025f), Vector(0.0f, -13,07408f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x32", "p_uti_cover2x1x", Vector(380,7327f, 76,17314f, 3467,21f), Vector(0.0f, -89,61947f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x33", "p_uti_cover2x1x", Vector(411,9058f, 78,03545f, 3474,575f), Vector(0.0f, -103,2384f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x34", "p_uti_cover2x1x", Vector(423,6162f, 78,13556f, 3467,854f), Vector(0.0f, -78,18822f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x35", "p_uti_cover2x1x", Vector(489,5932f, 62,30149f, 3321,884f), Vector(0.0f, -15,61351f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x36", "p_uti_cover2x1x", Vector(490,8462f, 71,32119f, 3403,202f), Vector(0.0f, -30,90436f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover1x2x3", "p_uti_cover1x2x", Vector(497,2502f, 71,33834f, 3398,088f), Vector(0.0f, -20,66923f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x37", "p_uti_cover2x1x", Vector(492,9f, 71,30385f, 3388,69f), Vector(0.0f, -24,84036f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x38", "p_uti_cover2x1x", Vector(491,9999f, 56,13607f, 3256.0f), Vector(0.0f, -17,30655f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x39", "p_uti_cover2x1x", Vector(482,4544f, 57,75303f, 3272.0f), Vector(-0,08162783f, -12,70706f, 0,6496098f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x40", "p_uti_cover2x1x", Vector(480,2616f, 55,41661f, 3250,493f), Vector(0.0f, -32,17095f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x41", "p_uti_cover2x1x", Vector(483,9052f, 56,41098f, 3259,169f), Vector(0.0f, -29,14402f, 0.0f), 1);
	Function_95(StackVal, StackVal, &iLocal_4, "cover2x1x42", "p_uti_cover2x1x", Vector(475,8712f, 56,27581f, 3262,026f), Vector(0.0f, -36,66984f, 0.0f), 1);
	return 1;
}

var Function_95(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x68E4 / 26852
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_96(char* cParam0) //Position: 0x6912 / 26898
{
	if (!Function_60(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

