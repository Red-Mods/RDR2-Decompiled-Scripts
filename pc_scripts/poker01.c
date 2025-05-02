//Decompiled with MagicRDR v1.0
//Function Count : 486
//Statics Count : 1381
//Natives Count : 453
//Parameters Count : 74

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
	var uLocal_9 = 12;
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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
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
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 20;
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
	int iLocal_195 = 0;
	int iLocal_196 = 0;
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
	var uLocal_212 = 6;
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
	int iLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	float fLocal_235 = 0.0f;
	float fLocal_236 = 0.0f;
	float fLocal_237 = 0.0f;
	float fLocal_238 = 0.0f;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	Vector3 vLocal_246 = 0;
	var uLocal_247 = 0;
	float fLocal_248 = 0.0f;
	float fLocal_249 = 0.0f;
	int iLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	struct<85> Local_255 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	var uLocal_371 = 0;
	int iLocal_372 = 1;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	int iLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	int iLocal_380 = 0;
	struct<3317> Local_381 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	char* cVar1[64];
	char* cVar17[64];
	struct<2> Var34;
	struct<2> Var36;
	struct<2> Var38;
	struct<2> Var40;
	char* cVar42[64];
	char* cVar58[64];
	
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	iLocal_8 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_226 = 1000;
	iLocal_250 = 0;
	iLocal_289 = 0;
	fLocal_1282 = 0,2f;
	iLocal_1290 = 7;
	iLocal_1291 = 0;
	iLocal_1292 = 1;
	iLocal_1293 = 2;
	iLocal_1294 = 3;
	bLocal_1295 = false;
	bLocal_1296 = false;
	iLocal_1297 = 0;
	iLocal_1298 = 1;
	Local_290 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_466();
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
		bVar0++;
	}
	while (Function_221())
	{
		if (iLocal_1292 <= 1)
		{
			SCRIPT_BREAKPOINT("test");
		}
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_290 };
		Function_195();
		if (GET_DEBUG_DRAW_STATE())
		{
			if (Function_194(1) >= 4294967295)
			{
				Var40 = *(&Local_290 + 232);
				Var40.f_4 = (StackVal + 0,05f);
				GET_OBJECT_AXIS(&Local_381 + 1988[(&Local_381 + 12[Function_194(1)41])->f_1962] + 8, &Var34, 0);
				GET_OBJECT_AXIS(&Local_381 + 1988[(&Local_381 + 12[Function_194(1)41])->f_1962] + 8, &Var38, 1);
				GET_OBJECT_AXIS(&Local_381 + 1988[(&Local_381 + 12[Function_194(1)41])->f_1962] + 8, &Var36, 2);
				Var34 = Vector(Var34, StackVal, StackVal) * Vector(0,25f, 0,25f, 0,25f);
				Var38 = Vector(Var38, StackVal, StackVal) * Vector(0,25f, 0,25f, 0,25f);
				Var36 = Vector(Var36, StackVal, StackVal) * Vector(0,25f, 0,25f, 0,25f);
				Var34 = Vector(StackVal, StackVal, StackVal) + Vector(Var40, Var34, StackVal);
				Var36 = Vector(StackVal, StackVal, StackVal) + Vector(Var40, Var36, StackVal);
				bVar0 = false;
				while (bVar0 <= (&Local_381 + 2564)->f_112)
				{
					GET_OBJECT_AXIS(&Local_381 + 2684[bVar0], &Var34, 0);
					GET_OBJECT_AXIS(&Local_381 + 2684[bVar0], &Var36, 2);
					Var34 = Vector(Var34, StackVal, StackVal) * Vector(0,045f, 0,045f, 0,045f);
					Var36 = Vector(Var36, StackVal, StackVal) * Vector(0,06f, 0,06f, 0,06f);
					GET_OBJECT_POSITION(&Local_381 + 2684[bVar0], &Var40);
					Var40 = Vector(StackVal, StackVal, StackVal) - Vector(Var34, Var40, StackVal);
					Var40 = Vector(StackVal, StackVal, StackVal) - Vector(Var36, Var40, StackVal);
					bVar0++;
				}
				strcpy(&cVar42, "Table: ", 64);
				bVar0 = false;
				while (bVar0 <= 5)
				{
					Function_193(&Local_381 + 12[bVar041] + 72[0], &cVar58);
					if (bVar0 <= 4)
					{
						stradd(&cVar42, ": ", 64);
					}
					bVar0++;
				}
				DRAW_STRING_CURRENT_FONT(0,1f, 0,1f, &cVar42, 1.0f, 0,8f, 0,8f, 1.0f);
				bVar0 = false;
				while (bVar0 <= 6)
				{
					memcpy(&cVar42, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 12[bVar041] + 8), 16);
					Function_193(&Local_381 + 12[bVar041] + 72[0], &cVar58);
					stradd(&cVar42, ": ", 64);
					stradd(&cVar42, &cVar58, 64);
					Function_193(&Local_381 + 12[bVar041] + 72[1], &cVar58);
					stradd(&cVar42, ", ", 64);
					stradd(&cVar42, &cVar58, 64);
					DRAW_STRING_CURRENT_FONT(0,1f, (0,1f + (0,02f * IntToFloat(bVar0 + 2))), &cVar42, 1.0f, 1.0f, 1.0f, 1.0f);
					bVar0++;
				}
			}
		}
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x3FD / 1021
{
	int iVar0;
	
	SET_ACTOR_ALLOW_BUMP_REACTIONS(Function_192(), 1);
	if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj2_playerWon"))
	{
		DECOR_REMOVE(&Global_54076, "sc_poker_obj2_playerWon");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj2_npcBust"))
	{
		DECOR_REMOVE(&Global_54076, "sc_poker_obj2_npcBust");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj3_fail"))
	{
		DECOR_REMOVE(&Global_54076, "sc_poker_obj3_fail");
	}
	STREAMING_UNLOAD_SCENE();
	iVar0 = 0;
	while (iVar0 <= Local_381.f_1988)
	{
		if (IS_OBJECT_VALID(&Local_381 + 1988[iVar02] + 8))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Local_381 + 1988[iVar02] + 8), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_ACTOR_VALID(&Local_290 + 12[iVar0]))
		{
			DEREFERENCE_ACTOR(&Local_290 + 12[iVar0]);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_290 + 12[iVar0]);
			SET_DRAW_ACTOR(&Local_290 + 12[iVar0], 1);
		}
		iVar0++;
	}
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_192()), "iPokerTalkingPlayerId");
	if (Function_191(4194304))
	{
		Function_190(4, 1);
	}
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	END_CURRENT_MINIGAME();
	Function_188();
	if (Local_381.f_2092 != 4294967295)
	{
		Function_187();
	}
	UI_EXIT("BetPanel");
	UI_EXIT("Scores");
	UI_EXIT("BetPanel_1");
	UI_EXIT("BetPanel_2");
	CANCEL_TIME_WARP(0);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_239, "Poker_StayOutvol"));
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_239, "Poker_StayOutvol"));
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (!Local_290.f_264 | 0)
	{
		Function_185(1);
		Function_184(1);
		ENABLE_AMBIENT_SPAWNING(true);
	}
	ACTOR_DISMOUNT_NOW(Function_192());
	if (!Local_290.f_264 && !Function_191(8388608))
	{
		Function_180();
	}
	Function_179();
	RELEASE_LAYOUT_REF(&iLocal_239);
	if (iLocal_2)
	{
		if (Local_290.f_264)
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Function_192()), "Gun05Poker", true);
			Function_176(StackVal);
		}
		else if ((Global_6623 || Global_6625) || Global_6635)
		{
			Function_33(StackVal, 0, 1, 1, 0);
		}
		else
		{
			Function_33(StackVal, 1, 1, 1, 0);
		}
	}
	else if (bLocal_3)
	{
		if (Local_290.f_264)
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Function_192()), "Gun05Poker", false);
			Function_176(StackVal);
		}
		else
		{
			Function_14(StackVal);
			if (!Function_13(Global_119934, 512))
			{
				Function_7(Function_192(), 512, 1, 0);
			}
		}
	}
	else
	{
		Function_176(StackVal);
	}
	SET_ACTOR_INVULNERABILITY(Function_192(), false);
	Function_6(Function_192());
	AI_STOP_IGNORING_ACTORS();
	Function_2();
	DESTROY_CAMERA(&vLocal_246);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x738 / 1848
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
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	Function_3();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_3() //Position: 0x7BB / 1979
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_4() //Position: 0x7D0 / 2000
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_5(int iParam0) //Position: 0x7E6 / 2022
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_6(int iParam0) //Position: 0x7F9 / 2041
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(&iParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x81F / 2079
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_9(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_8(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_8(char* cParam0) //Position: 0x894 / 2196
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

bool Function_9(int iParam0, var uParam1, int iParam2) //Position: 0x8CE / 2254
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
		if (Function_11(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_10(uVar0))
		{
			case 0x00000002:
				if (!Function_13(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_10(char* cParam0) //Position: 0x94A / 2378
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

int Function_11(int iParam0) //Position: 0x9EB / 2539
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_12(&iVar1, 2147483648);
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

void Function_12(int iParam0, int iParam1) //Position: 0xA28 / 2600
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_13(var uParam0, int iParam1) //Position: 0xA3E / 2622
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_14(int iParam0) //Position: 0xA51 / 2641
{
	Function_21(iParam0);
	Function_18(2);
	Function_17(12);
	Function_15((15 - Function_16(105)));
	return;
}

void Function_15(int iParam0) //Position: 0xA6F / 2671
{
	(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_16(105)), 0);
	return;
}

int Function_16(int iParam0) //Position: 0xA92 / 2706
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_17(int iParam0) //Position: 0xAA9 / 2729
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_18(int iParam0) //Position: 0xAC6 / 2758
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_20(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_20(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_20(&Global_21369 + 48);
	PRINTNL();
	Function_19(&iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0xB68 / 2920
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_16(90)), 0);
	return;
}

void Function_20(int iParam0) //Position: 0xB8B / 2955
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_21(bool bParam0) //Position: 0xBD5 / 3029
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_31(bParam0))
	{
		return;
	}
	iVar0 = Function_30(bParam0);
	if (StackVal == 2)
	{
		Function_26("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_10966) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(iVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_22(int iParam0) //Position: 0xC7B / 3195
{
	char* cVar0[16];
	
	if (!Function_23())
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

bool Function_23() //Position: 0xCBA / 3258
{
	if (Function_24(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_24(bool bParam0, int iParam1) //Position: 0xCD5 / 3285
{
	return (bParam0 && iParam1) == 0;
}

struct<24> Function_25(char* cParam0) //Position: 0xCE2 / 3298
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

void Function_26(bool bParam0, bool bParam1) //Position: 0xF38 / 3896
{
	struct<4> Var0;
	
	if (!Function_31(bParam1))
	{
		return;
	}
	switch (Function_30(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_27(Function_28(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_30(bParam1), Function_28(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_27(int iParam0) //Position: 0x1062 / 4194
{
	char* cVar0[16];
	
	if (!Function_23())
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

int Function_28(bool bParam0) //Position: 0x109C / 4252
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_29(int iParam0) //Position: 0x10BC / 4284
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_30(bool bParam0) //Position: 0x10D3 / 4307
{
	if (!Function_29(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_31(int iParam0) //Position: 0x10EE / 4334
{
	if (!Function_29(iParam0))
	{
		return 0;
	}
	if (!Function_32(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_32(int iParam0) //Position: 0x1112 / 4370
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_33(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1127 / 4391
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_17(12);
	Function_18(2);
	Function_15((15 - Function_16(105)));
	if (Function_30(bParam0) == 1)
	{
		iVar2 = Function_28(bParam0);
		Function_171(&(Global_6667[iVar228]));
		Function_170(4194304);
		if (&bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_116(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		bVar1 = Function_115();
		if (&bParam1)
		{
			Function_99(iVar2, bParam0, bVar1);
			Function_98();
		}
	}
	Function_39(bParam0, &bParam1, &iParam2, bVar1);
	if (Function_30(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_38(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_30(bParam0) == 1)
		{
			iVar2 = Function_28(bParam0);
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
	Function_34();
}

void Function_34() //Position: 0x121B / 4635
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_35(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_35(int iParam0, bool bParam1) //Position: 0x124D / 4685
{
	int iVar0;
	
	iVar0 = Function_36(iParam0);
	if (!Function_29(iVar0))
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

int Function_36(int iParam0) //Position: 0x128B / 4747
{
	if (!Function_37(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_37(int iParam0) //Position: 0x12A5 / 4773
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_38(int iParam0, bool bParam1) //Position: 0x12BB / 4795
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
							Function_7(&Global_54076, 0x1000000, 3, 0);
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
							Function_7(&Global_54076, 0x1000000, 3, 0);
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
							Function_7(&Global_54076, 0x1000000, 3, 0);
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
							Function_7(&Global_54076, 0x1000000, 3, 0);
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
							Function_7(&Global_54076, 0x1000000, 3, 0);
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
							Function_7(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_38(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_38(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_38(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_38(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_38(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_38(57, 0);
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

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15B8 / 5560
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_31(bParam0))
	{
		Function_96();
		return;
	}
	bVar0 = Function_30(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_95())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_28(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_10966) };
		}
		if (Function_95())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_91();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_95())
	{
		Function_90();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_26("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_83(bParam0);
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
						switch (Function_28(bParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(bParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x1816 / 6166
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1854 / 6228
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_42(bool bParam0) //Position: 0x1893 / 6291
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_72();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_12(&Global_99144, 1);
		Function_12(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x18E8 / 6376
{
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_67();
	Function_67();
	Function_50(0);
	Function_50(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x1933 / 6451
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

void Function_45() //Position: 0x1A39 / 6713
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

void Function_46() //Position: 0x1A6C / 6764
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

void Function_47() //Position: 0x1BFF / 7167
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

void Function_48() //Position: 0x1DB8 / 7608
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1DC6 / 7622
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
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_192();
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

struct<8> Function_50(int iParam0) //Position: 0x1FE3 / 8163
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
					iVar2 = ((Function_66((50 + iVar4)) + Function_66((183 + iVar4))) + Function_66((90 + iVar4)));
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
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x208A / 8330
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
		Function_65(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_64(iParam0);
	if (&bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x2326 / 8998
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_63(390))), 32);
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
					bVar19 = (Function_62(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_62(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_60(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_57(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_54(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_53(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_53() //Position: 0x2964 / 10596
{
	int iVar0;
	
	return &iVar0;
}

var Function_54(int iParam0) //Position: 0x296D / 10605
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x297E / 10622
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_56(char* cParam0) //Position: 0x2A75 / 10869
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A90 / 10896
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_59(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2AF7 / 10999
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2B09 / 11017
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2B1B / 11035
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
	if (((Function_61(iParam0) != 19 || Function_61(iParam0) != 17) || Function_61(iParam0) != 10) || Function_61(iParam0) != 9)
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

int Function_61(int iParam0) //Position: 0x2C4F / 11343
{
	return Global_55480[iParam016].f_96;
}

float Function_62(int iParam0) //Position: 0x2C5E / 11358
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2C97 / 11415
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_64(int iParam0) //Position: 0x2CD4 / 11476
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E6E / 11886
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

int Function_66(bool bParam0) //Position: 0x30B2 / 12466
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_67() //Position: 0x30F3 / 12531
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
		iVar2 = ((Function_66((50 + iVar3) + 15) + Function_66((183 + iVar3) + 15)) + Function_66((90 + iVar3) + 15));
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
	Function_51(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_68() //Position: 0x317C / 12668
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
			iVar2 = ((Function_66((50 + iVar3) + 8) + Function_66((183 + iVar3) + 8)) + Function_66((90 + iVar3) + 8));
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
	Function_51(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x3213 / 12819
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
		iVar2 = ((Function_66((50 + iVar3)) + Function_66((183 + iVar3))) + Function_66((90 + iVar3)));
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
	Function_51(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_70() //Position: 0x3292 / 12946
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x32CF / 13007
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
	Function_65(iParam0, bParam1, 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_72() //Position: 0x34DB / 13531
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_23())
	{
		Function_80(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_80(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_74(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_74(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_73(StackVal, Var0))
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

bool Function_73(char* cParam0) //Position: 0x3592 / 13714
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_74(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x35AA / 13738
{
	int iVar0;
	
	iVar0 = Function_78(&uParam2, &fParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_76(&Global_99144, 1);
			Function_12(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_76(&Global_99144, 2);
			Function_12(&Global_99144, 1);
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
		Function_76(&Global_99144, 2);
		Function_12(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_75();
	return StackVal, Function_75();
}

struct<8> Function_75() //Position: 0x36A2 / 13986
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_76(int iParam0, int iParam1) //Position: 0x36AC / 13996
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x36BD / 14013
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x36D3 / 14035
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
				fVar2 = Function_79(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_79(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(iVar0) && !&bParam1)
	{
		iVar0 = Function_78(&bParam0, 1);
	}
	return iVar0;
}

float Function_79(struct<2> Param0, struct<2> Param2) //Position: 0x379F / 14239
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_80(float fParam0, int iParam1) //Position: 0x37BC / 14268
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_82(&Global_54076, &Var3);
	if (!Function_81(Global_46760[0]))
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
	if (!Function_81(Global_46760[2]))
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
	if (!Function_81(Global_46760[1]))
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
	if (!Function_81(Global_46796[1]))
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
	if (!Function_81(Global_46796[3]))
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
	if (!Function_81(Global_46796[2]))
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
	if (!Function_81(Global_46796[4]))
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
	if (!Function_81(Global_46816[0]))
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
	if (!Function_81(Global_46816[1]))
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
	if (!Function_81(Global_46816[2]))
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
	if (!Function_81(Global_46838[0]))
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
	if (!Function_81(Global_46850[0]))
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
	if (!Function_81(Global_46850[1]))
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
	if (!Function_81(Global_46850[2]))
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
	if (!Function_81(Global_46866[0]))
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
	if (!Function_81(Global_46866[1]))
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
	if (!Function_81(Global_46866[2]))
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
	if (!Function_81(Global_46894[2]))
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
	if (!Function_81(Global_46894[3]))
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
	if (!Function_81(Global_46894[0]))
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
	if (!Function_81(Global_46914[0]))
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
	if (!Function_81(Global_46926[2]))
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
	if (!Function_81(Global_46926[1]))
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
	if (!Function_81(Global_46926[0]))
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
	if (!Function_81(Global_46838[1]))
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
	if (!Function_81(Global_46894[1]))
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
	Function_76(&Global_99144, 2);
	Function_12(&Global_99144, 1);
	iParam1 = 0;
	if (Function_73(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_81(int iParam0) //Position: 0x3FE8 / 16360
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_24(uVar0, 0x1000000) || Function_24(uVar0, 0x2000000)) || Function_24(uVar0, 0x4000000)) || !Function_24(uVar0, 0x10000000));
}

void Function_82(var uParam0, int iParam1) //Position: 0x4023 / 16419
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_83(bool bParam0) //Position: 0x4032 / 16434
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(bParam0))
	{
		return;
	}
	switch (Function_30(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_28(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_88(12, 1, 0, 0);
				Function_87(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_88(13, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_88(14, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_88(15, 1, 0, 0);
				Function_87(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_88(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_28(bParam0))
			{
				case 0x00000000:
					if (Function_86(bParam0) == 1)
					{
						iVar0 = Function_85(bParam0);
						if (Function_84(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_87(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_87(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_87(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_87(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_87(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_87(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_87(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_87(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_87(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_87(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_87(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_87(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_87(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_87(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_87(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_87(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_87(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_87(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_87(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_87(4, 19);
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
								Function_88(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_88(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_88(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_85(bParam0) == 0)
			{
				if (Function_86(bParam0) == 1)
				{
					Function_88(458, 1, 0, 0);
					iVar0 = Function_28(bParam0);
					if (Function_84(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_87(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_87(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_87(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_87(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_87(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_87(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_87(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_87(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_86(bParam0) == 1)
			{
				Function_88(400, 1, 0, 0);
			}
			switch (Function_28(bParam0))
			{
				case 0x00000001:
					Function_88(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_87(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_87(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_88(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_87(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 9);
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

bool Function_84(int iParam0) //Position: 0x450E / 17678
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_85(bool bParam0) //Position: 0x4524 / 17700
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_86(bool bParam0) //Position: 0x4543 / 17731
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_87(int iParam0, int iParam1) //Position: 0x455D / 17757
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

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x45C7 / 17863
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
	Function_65(iParam0, TO_FLOAT(bParam1), 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_89(iParam0);
	return 1;
}

void Function_89(int iParam0) //Position: 0x47EF / 18415
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

void Function_90() //Position: 0x488D / 18573
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
	PLAYSTAT_INT("HC_MONEY", Function_66(0));
	PLAYSTAT_INT("HC_FAME", Function_66(3));
	PLAYSTAT_INT("HC_HONOR", Function_66(1));
	return;
}

void Function_91() //Position: 0x49EF / 18927
{
	int iVar0;
	int iVar1;
	
	if (!Function_37(Global_10966))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_36(Global_10966);
	if (!Function_37(iVar0) && Function_94(iVar1) < 0)
	{
		Function_51(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_94(Function_36(iVar0)))
	{
		Function_51(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_92(int iParam0, char* cParam1) //Position: 0x4A6F / 19055
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
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4DC6 / 19910
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

int Function_94(int iParam0) //Position: 0x4E4E / 20046
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95() //Position: 0x4E68 / 20072
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_96() //Position: 0x4E93 / 20115
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
			Function_97(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_97(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x50DA / 20698
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_98() //Position: 0x5106 / 20742
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x5134 / 20788
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
	
	if (!Function_37(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_114(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_66(42) - Global_53524.f_168);
				bVar1 = (Function_66(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_63(49)) - Global_53524.f_176);
				bVar3 = (Function_66(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_66(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_113(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_100(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_22(iParam0) };
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x53D0 / 21456
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
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
	iVar0 = Function_66(3);
	Function_109();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_107(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_13(Global_119936, 4))
			{
				Function_7(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_88(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_62(3));
	iVar0 = Function_66(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
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

void Function_101(int iParam0, int iParam1) //Position: 0x55A4 / 21924
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

int Function_102(int iParam0, char* cParam1) //Position: 0x580E / 22542
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
	Function_92(iParam0, &cParam1, 0, 1);
	iVar1 = Function_103();
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

int Function_103() //Position: 0x599E / 22942
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
	Function_104();
	return 0;
}

void Function_104() //Position: 0x5A3F / 23103
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
		Function_105(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5AFD / 23293
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

var Function_106(int iParam0) //Position: 0x5B63 / 23395
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

int Function_107(int iParam0, bool bParam1) //Position: 0x5BF2 / 23538
{
	bool bVar0;
	int iVar1;
	
	Function_88(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_108(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_108(int iParam0, int iParam1) //Position: 0x5D9E / 23966
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

void Function_109() //Position: 0x5DE3 / 24035
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5DF9 / 24057
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x5E39 / 24121
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_112(int iParam0) //Position: 0x5E79 / 24185
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5E88 / 24200
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

int Function_114(int iParam0) //Position: 0x6050 / 24656
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

var Function_115() //Position: 0x60E5 / 24805
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x610A / 24842
{
	if (!Function_37(iParam0))
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
			Function_100(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_100(25, 1, 0);
			Function_121(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_121(50, 1, 1);
			Function_100(250, 1, 0);
			Function_117(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_121(50, 1, 1);
			Function_100(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_121(5, 1, 1);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_100(75, 1, 0);
			Function_117(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_121(5, 1, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_121(25, 1, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_121(10, 1, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_100(50, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_100(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_121(20, 1, 1);
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_121(25, 1, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_121(10, 1, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_100(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_117(100, 1, 0);
			Function_121(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_121(3, 1, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_117(125, 1, 0);
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_121(50, 1, 1);
			Function_100(100, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_121(50, 1, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_121(75, 1, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_100(250, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_100(75, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_100(200, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_121(50, 1, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_121(100, 1, 1);
			Function_100(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_100(200, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_100(500, 1, 0);
			Function_117(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_100(150, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_117(25, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_100(150, 1, 0);
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_117(150, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_117(150, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0x65D9 / 26073
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_66(1);
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
			Function_107(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_13(Global_119936, 1))
				{
					Function_7(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_120(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_13(Global_119936, 2))
				{
					Function_7(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_88(1, bVar1, 0, 0);
	}
	else
	{
		Function_119(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_62(1));
	iVar0 = Function_66(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_102(2, Function_118(Global_21369.f_244), 0);
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
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_102(2, Function_118(Global_21369.f_244), 1);
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
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_102(2, Function_118(Global_21369.f_244), 1);
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
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			break;
	}
	Function_101(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_118(int iParam0) //Position: 0x6900 / 26880
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x69A3 / 27043
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
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_120(int iParam0, bool bParam1) //Position: 0x6BA0 / 27552
{
	bool bVar0;
	int iVar1;
	
	Function_119(iParam0, bParam1, 0);
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
	iVar1 = Function_108(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6D4B / 27979
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_88(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_88(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_66(597) + Function_66(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x6E1D / 28189
{
	struct<4> Var0;
	
	if (!Function_37(iParam0))
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
			Function_168(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_46760[0]);
			Function_165(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_165(Global_46816[0]);
			Function_155(0);
			Function_153(2, 1);
			Function_153(0, 1);
			Function_153(1, 1);
			break;
		
		case 0x00000003:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_165(Global_46816[0]);
			Function_165(Global_46760[0]);
			Function_151(0, 1);
			Function_151(15, 1);
			Function_151(9, 1);
			Function_151(12, 1);
			Function_151(16, 1);
			Function_153(3, 1);
			break;
		
		case 0x00000005:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_163(21, &bParam2, 4);
			Function_165(Global_46816[0]);
			Function_153(39, 1);
			break;
		
		case 0x00000007:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_150())
				{
					if (!Function_149(4))
					{
						Function_139(4, 0, 0, 1, 0);
					}
				}
			}
			Function_165(Global_46760[0]);
			Function_165(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_165(Global_46760[0]);
			Function_165(Global_46816[2]);
			Function_138(&(Global_43791[Global_46816[2]]), 32768);
			Function_137(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_163(9, &bParam2, 4);
			Function_165(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_165(Global_46760[0]);
			Function_165(Global_46796[0]);
			Function_138(&(Global_43791[Global_46796[0]]), 32768);
			Function_137(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_165(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_46760[0]);
			Function_165(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_165(Global_46760[1]);
			Function_165(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_165(Global_46838[0]);
			Function_165(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_165(Global_46796[5]);
			Function_165(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_163(21, &bParam2, 4);
			Function_165(Global_46760[4]);
			Function_165(Global_46796[4]);
			Function_136(&Global_119935, 0x2000000);
			Function_136(&Global_119935, 0x4000000);
			Function_136(&Global_119935, 4096);
			Function_136(&Global_119935, 8);
			Function_136(&Global_119935, 8388608);
			Function_136(&Global_119935, 524288);
			Function_136(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_165(Global_46760[4]);
			Function_165(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_137(&(Global_43791[Global_46760[4]]), 256);
			Function_165(Global_46760[4]);
			Function_165(Global_46796[0]);
			Function_138(&(Global_43791[Global_46796[0]]), 32768);
			Function_137(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_165(Global_46760[0]);
			Function_165(Global_46760[5]);
			Function_163(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_165(Global_46796[3]);
			Function_138(&(Global_43791[Global_46796[3]]), 32768);
			Function_137(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_163(9, &bParam2, 4);
			Function_165(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_138(&(Global_43791[Global_46838[1]]), 32768);
			Function_165(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_163(12, &bParam2, 4);
			Function_137(&(Global_43791[Global_46838[1]]), 256);
			Function_165(Global_46816[3]);
			Function_165(Global_46866[0]);
			Function_165(Global_46850[0]);
			Function_155(4);
			Function_151(13, 1);
			Function_151(1, 1);
			Function_151(18, 1);
			Function_153(34, 1);
			Function_153(44, 1);
			Function_153(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_163(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_165(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_165(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_165(Global_46866[0]);
			Function_165(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_165(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_165(Global_46850[0]);
			Function_165(Global_46866[0]);
			Function_165(Global_46866[1]);
			Function_165(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_163(23, &bParam2, 3);
			Function_151(23, 1);
			Function_165(Global_46850[0]);
			Function_165(Global_46850[2]);
			Function_138(&(Global_43791[Global_46850[2]]), 32768);
			Function_137(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_163(19, &bParam2, 4);
			Function_165(Global_46850[0]);
			Function_165(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_163(24, &bParam2, 3);
			Function_151(24, 1);
			Function_165(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_165(Global_46850[0]);
			Function_165(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_165(Global_46866[12]);
			Function_165(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_165(Global_46866[12]);
			Function_165(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_163(25, &bParam2, 10);
			Function_165(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_165(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_165(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_163(13, &bParam2, 4);
			Function_165(Global_46866[2]);
			Function_165(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_149(8))
				{
					Function_139(8, 0, 0, 1, 0);
				}
			}
			Function_165(Global_46850[0]);
			Function_155(9);
			Function_151(7, 1);
			Function_151(11, 1);
			Function_151(3, 1);
			Function_151(20, 1);
			Function_153(57, 1);
			break;
		
		case 0x0000002A:
			Function_163(2, &bParam2, 4);
			Function_165(Global_46914[0]);
			Function_165(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_165(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_165(Global_46914[0]);
			Function_165(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_165(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_165(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_165(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_163(17, &bParam2, 4);
			Function_165(Global_46926[0]);
			Function_165(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_134(15))
				{
					Function_129(15, 0, 1);
				}
			}
			Function_87(2, 26);
			Function_137(&(Global_43791[Global_46914[1]]), 256);
			Function_155(11);
			Function_165(Global_46914[1]);
			Function_165(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_165(Global_46914[1]);
			Function_165(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_165(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_165(Global_46914[1]);
			Function_123(11);
			Function_155(12);
			Global_26200[1114].f_40 = 0;
			Function_153(56, 1);
			if (!&bParam2)
			{
				if (!Function_149(9))
				{
					Function_139(9, 0, 0, 0, 0);
				}
				if (!Function_149(10))
				{
					Function_139(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(int iParam0) //Position: 0x7738 / 30520
{
	var uVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_128(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_128(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_124(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x78B5 / 30901
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
		Function_126(Function_127(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_126(Function_127(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_126(StackVal);
				Var1 = Function_126(StackVal);
				if (Function_125(StackVal, StackVal, Var1, Var3))
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

bool Function_125(struct<2> Param0, struct<2> Param2) //Position: 0x79C0 / 31168
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_126(int iParam0) //Position: 0x79EC / 31212
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

var Function_127(vector3 vParam0) //Position: 0x7A43 / 31299
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

void Function_128(var uParam0, int iParam1) //Position: 0x7A91 / 31377
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

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7AEC / 31468
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0))
	{
		if (!Function_149(bParam0))
		{
			Function_139(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_88(457, 1, 0, 0);
		Function_132(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_130();
			}
		}
	}
	return;
}

void Function_130() //Position: 0x7C8D / 31885
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7C93 / 31891
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

void Function_132(bool bParam0, int iParam1) //Position: 0x7D42 / 32066
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0x7D97 / 32151
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x7DAD / 32173
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_135(int iParam0, int iParam1) //Position: 0x7DFE / 32254
{
	int iVar0;
	
	if (!Function_133(iParam0))
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

void Function_136(var uParam0, int iParam1) //Position: 0x7E2B / 32299
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7E3C / 32316
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x7E56 / 32342
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7E67 / 32359
{
	char* cVar0[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_148(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_149(bParam0))
	{
		Function_88(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_130();
			}
		}
		Function_142(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_141() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_141() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_140(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_23())
		{
			if (!Function_13(Global_119934, 2))
			{
				Function_7(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_140(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7FC3 / 32707
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_22(Global_10966) };
		}
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_141() //Position: 0x804F / 32847
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_142(bool bParam0) //Position: 0x807C / 32892
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_145(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_144(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_143(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_143(int iParam0) //Position: 0x822C / 33324
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

void Function_144(char* cParam0, bool bParam1) //Position: 0x8283 / 33411
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_145(int iParam0) //Position: 0x82A8 / 33448
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

bool Function_146(bool bParam0, int iParam1) //Position: 0x82FE / 33534
{
	int iVar0;
	
	if (!Function_133(bParam0))
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

int Function_147(bool bParam0) //Position: 0x835D / 33629
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_148(int iParam0) //Position: 0x8369 / 33641
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_149(int iParam0) //Position: 0x8385 / 33669
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_150() //Position: 0x83D7 / 33751
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_24(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_151(int iParam0, int iParam1) //Position: 0x8407 / 33799
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_152(iParam0, iParam1);
	Function_7(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x847C / 33916
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x84D9 / 34009
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_154(iParam0, iParam1);
	Function_7(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x854C / 34124
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0x85A7 / 34215
{
	var uVar0;
	var uVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_162(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_162(&Global_26200[iParam014] + 88, 0);
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
			Function_88(468, 1, 0, 0);
			Function_87(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_140("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_124(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_139(14, 1, 0, 0, 0);
				Function_156(14, 1, 0, 0, 0);
			}
			if (!Function_131(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_130();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
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
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_140("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_88(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_87(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8867 / 34919
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_148(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_135(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_140(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_146(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_132(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_130();
			}
		}
		Function_142(bParam0);
		if (StackVal && !Function_24(((((!Function_141() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_24((((Function_141() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_23())
		{
			if (!Function_13(Global_119934, 2))
			{
				Function_7(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_158();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_157(3, bParam1);
				break;
			
			case 0x00000005:
				Function_157(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_157(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_157(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_157(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_157(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_157(int iParam0, bool bParam1) //Position: 0x8B06 / 35590
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

void Function_158() //Position: 0x8B75 / 35701
{
	if (Function_133(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_161(Global_42827);
			(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_161(Global_42827);
			*(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_159(int iParam0, int iParam1) //Position: 0x8BF5 / 35829
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
					if (Function_35(6, 0) || Function_35(12, 0))
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
					if (Function_160(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_35(5, 0))
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
					if (Function_160(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_160(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_160(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_160(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_35(26, 0))
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
					if (Function_160(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_160(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_160(27) && iVar16)
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
					if (Function_160(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_160(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_160(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_160(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_35(17, 0) && iVar13)
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
					if (Function_160(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_35(6, 0) && Function_160(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_160(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_35(9, 0) && Function_160(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_160(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_35(8, 0) && iVar17)
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
	if (Function_73(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_73(StackVal, vVar2))
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
	if (!Function_73(StackVal, vVar2))
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

int Function_160(int iParam0) //Position: 0x9858 / 39000
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0) //Position: 0x986D / 39021
{
	int iVar0;
	int iVar1;
	
	if (!Function_133(iParam0))
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

void Function_162(var uParam0, int iParam1) //Position: 0x98BC / 39100
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

void Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0x9914 / 39188
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_164(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_168(bParam0, 0, 0);
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

bool Function_164(int iParam0, int iParam1) //Position: 0x9987 / 39303
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_165(int iParam0) //Position: 0x999B / 39323
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_167(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_138(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_88(473, 1, 0, 0);
		iVar0 = Function_166(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_88(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_88(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_88(476, 1, 0, 0);
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
		Function_87(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_87(7, 30);
	}
	if (Function_62(473) <= Function_63(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_166(int iParam0) //Position: 0x9A8C / 39564
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_84(iParam0))
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

bool Function_167(var uParam0, int iParam1) //Position: 0x9AE4 / 39652
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_168(bool bParam0, bool bParam1, int iParam2) //Position: 0x9B01 / 39681
{
	if (!Function_169(bParam0))
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

bool Function_169(int iParam0) //Position: 0x9B5B / 39771
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_170(int iParam0) //Position: 0x9B6D / 39789
{
	int iVar0;
	
	if (Function_24(iParam0, 1) && Function_24(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_171(struct<185> Param0) //Position: 0x9BA1 / 39841
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_172(4, 0, 0);
		}
	}
	return;
}

void Function_172(bool bParam0, var uParam1, int iParam2) //Position: 0x9C0C / 39948
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
		Function_173(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_173(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9CF6 / 40182
{
	int iVar0;
	
	Function_175(bParam0);
	Function_20(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_174();
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

void Function_174() //Position: 0x9E75 / 40565
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_175(int iParam0) //Position: 0x9E81 / 40577
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

void Function_176(var uParam0) //Position: 0x9EC7 / 40647
{
	Function_178(uParam0);
	Function_177();
	Function_18(2);
	Function_15((15 - Function_16(105)));
	Function_17(12);
	return;
}

void Function_177() //Position: 0x9EE8 / 40680
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_178(int iParam0) //Position: 0x9F01 / 40705
{
	int iVar0;
	
	if (!Function_31(iParam0))
	{
		Function_96();
		return;
	}
	iVar0 = Function_30(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_26("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_179() //Position: 0x9F54 / 40788
{
	return;
}

void Function_180() //Position: 0x9F5A / 40794
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	
	REMOVE_STRING_TABLE("nminigames");
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_183("$/fragments/p_gen_cards02x");
	Function_183("$/fragments/p_gen_dealerButton01x");
	Function_183("$/fragments/p_crd_01x");
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = iVar0;
			Var2.f_4 = iVar1;
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&Var2, 0) };
			Function_183(&Var3);
			iVar1++;
		}
		iVar0++;
	}
	Function_183("$/fragments/p_crd_chipRedPoker01x");
	Function_183("$/fragments/p_crd_chipGreenPoker01x");
	Function_183("$/fragments/p_crd_chipBluePoker01x");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&Var3, Function_181(iVar0), 32);
		Function_183(&Var3);
		iVar0++;
	}
	STREAMING_EVICT_GRINGO(GET_ASSET_ID("fake_poker", 1));
	REMOVE_ACTION_TREE("custom/sit_poker");
	REMOVE_ACTION_TREE("custom/fake_poker");
	REMOVE_ANIM_SET("nsit_poker");
	REMOVE_ANIM_SET("sit_poker_gped");
	REMOVE_ANIM_SET("sit_poker_hillb");
	if (!Global_43789 != Global_46914[0])
	{
		REMOVE_ANIM_SET("sit_poker_oldm");
	}
	return;
}

var Function_181(bool bParam0) //Position: 0xA147 / 41287
{
	switch (bParam0)
	{
		case 0x00000000:
			return "p_crd_chips004x";
			break;
		
		case 0x00000001:
			return "p_crd_chips009x";
			break;
		
		case 0x00000002:
			return "p_crd_chips040x";
			break;
		
		case 0x00000003:
			return "p_crd_chips044x";
			break;
		
		case 0x00000004:
			return "p_crd_chips049x";
			break;
		
		case 0x00000005:
			return "p_crd_chips090x";
			break;
		
		case 0x00000006:
			return "p_crd_chips094x";
			break;
		
		case 0x00000007:
			return "p_crd_chips099x";
			break;
		
		case 0x00000008:
			return "p_crd_chips400x";
			break;
		
		case 0x00000009:
			return "p_crd_chips404x";
			break;
		
		case 0x0000000A:
			return "p_crd_chips409x";
			break;
		
		case 0x0000000B:
			return "p_crd_chips440x";
			break;
		
		case 0x0000000C:
			return "p_crd_chips444x";
			break;
		
		case 0x0000000D:
			return "p_crd_chips449x";
			break;
		
		case 0x0000000E:
			return "p_crd_chips490x";
			break;
		
		case 0x0000000F:
			return "p_crd_chips494x";
			break;
		
		case 0x00000010:
			return "p_crd_chips499x";
			break;
		
		case 0x00000011:
			return "p_crd_chips900x";
			break;
		
		case 0x00000012:
			return "p_crd_chips904x";
			break;
		
		case 0x00000013:
			return "p_crd_chips909x";
			break;
		
		case 0x00000014:
			return "p_crd_chips940x";
			break;
		
		case 0x00000015:
			return "p_crd_chips944x";
			break;
		
		case 0x00000016:
			return "p_crd_chips949x";
			break;
		
		case 0x00000017:
			return "p_crd_chips990x";
			break;
		
		case 0x00000018:
			return "p_crd_chips994x";
			break;
		
		case 0x00000019:
			return "p_crd_chips999x";
			break;
	}
	LOG_ERROR("Returning invalid chip name");
	return "";
}

struct<32> Function_182(struct<5> Param0) //Position: 0xA450 / 42064
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_crd_", 32);
	if (&bParam1)
	{
		strcpy(&cVar0, "p_crd_", 32);
	}
	switch (Param0)
	{
		case 0x00000000:
			stradd(&cVar0, "2_", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "3_", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "4_", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "5_", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "6_", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "7_", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "8_", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "9_", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "10_", 32);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "j_", 32);
			break;
		
		case 0x0000000A:
			stradd(&cVar0, "q_", 32);
			break;
		
		case 0x0000000B:
			stradd(&cVar0, "k_", 32);
			break;
		
		case 0x0000000C:
			stradd(&cVar0, "a_", 32);
			break;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (&bParam1)
			{
				stradd(&cVar0, "c01", 32);
			}
			else
			{
				stradd(&cVar0, "c01x", 32);
			}
			break;
		
		case 0x00000001:
			if (&bParam1)
			{
				stradd(&cVar0, "d01", 32);
			}
			else
			{
				stradd(&cVar0, "d01x", 32);
			}
			break;
		
		case 0x00000002:
			if (&bParam1)
			{
				stradd(&cVar0, "h01", 32);
			}
			else
			{
				stradd(&cVar0, "h01x", 32);
			}
			break;
		
		case 0x00000003:
			if (&bParam1)
			{
				stradd(&cVar0, "s01", 32);
			}
			else
			{
				stradd(&cVar0, "s01x", 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_183(int iParam0) //Position: 0xA623 / 42531
{
	STREAMING_EVICT_PROP(GET_ASSET_ID(&iParam0, 0));
	return;
}

void Function_184(int iParam0) //Position: 0xA633 / 42547
{
	if (Function_24(iParam0, 1) && !Function_24(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_185(int iParam0) //Position: 0xA660 / 42592
{
	Function_186(&Global_43580, iParam0);
	return;
}

void Function_186(var uParam0, var uParam1) //Position: 0xA66E / 42606
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_187() //Position: 0xA68D / 42637
{
	UI_EXIT("Poker_CheatCard");
	return;
}

void Function_188() //Position: 0xA6A8 / 42664
{
	Function_189(0);
	Function_189(1);
	Function_189(2);
	Function_189(3);
	Function_189(4);
	Function_189(5);
	Function_189(6);
	Function_189(7);
	Function_189(8);
	Function_189(9);
	return;
}

int Function_189(int iParam0) //Position: 0xA6E2 / 42722
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_190(int iParam0, bool bParam1) //Position: 0xA6EE / 42734
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

bool Function_191(int iParam0) //Position: 0xA874 / 43124
{
	return Function_24(uLocal_245, iParam0);
}

int Function_192() //Position: 0xA881 / 43137
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_193(struct<5> Param0) //Position: 0xA896 / 43158
{
	strcpy(&cParam1, "", 24);
	switch (Param0)
	{
		case 0x00000000:
			stradd(&cParam1, "2of", 24);
			break;
		
		case 0x00000001:
			stradd(&cParam1, "3of", 24);
			break;
		
		case 0x00000002:
			stradd(&cParam1, "4of", 24);
			break;
		
		case 0x00000003:
			stradd(&cParam1, "5of", 24);
			break;
		
		case 0x00000004:
			stradd(&cParam1, "6of", 24);
			break;
		
		case 0x00000005:
			stradd(&cParam1, "7of", 24);
			break;
		
		case 0x00000006:
			stradd(&cParam1, "8of", 24);
			break;
		
		case 0x00000007:
			stradd(&cParam1, "9of", 24);
			break;
		
		case 0x00000008:
			stradd(&cParam1, "10of", 24);
			break;
		
		case 0x00000009:
			stradd(&cParam1, "Jof", 24);
			break;
		
		case 0x0000000A:
			stradd(&cParam1, "Qof", 24);
			break;
		
		case 0x0000000B:
			stradd(&cParam1, "Kof", 24);
			break;
		
		case 0x0000000C:
			stradd(&cParam1, "Aof", 24);
			break;
	}
	switch (StackVal)
	{
		case 0x00000000:
			stradd(&cParam1, "C", 24);
			break;
		
		case 0x00000001:
			stradd(&cParam1, "D", 24);
			break;
		
		case 0x00000002:
			stradd(&cParam1, "H", 24);
			break;
		
		case 0x00000003:
			stradd(&cParam1, "S", 24);
			break;
	}
	return;
}

int Function_194(int iParam0) //Position: 0xAA01 / 43521
{
	int iVar0;
	
	if (Local_381.f_2124 > 0 || Local_381.f_2124 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_195() //Position: 0xAA3F / 43583
{
	var uVar0[4];
	int iVar5;
	
	if (Function_219(0))
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Add 100 chips to human player";
		iVar5 = Function_205(&uLocal_227, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar5 == 0)
		{
			Function_198();
			Function_197(0);
		}
		else if (iVar5 == 1)
		{
			Function_198();
			Function_197(1);
		}
		else if (iVar5 == 2)
		{
			Function_198();
			Function_197(2);
		}
		else if (iVar5 == 3)
		{
			(&Local_381 + 12[Function_196(1)41])->f_200 += 100;
		}
	}
	return;
}

int Function_196(int iParam0) //Position: 0xAB12 / 43794
{
	int iVar0;
	
	if (Local_381.f_2120 > 0 || Local_381.f_2120 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_197(int iParam0) //Position: 0xAB50 / 43856
{
	iLocal_0 = 3;
	if (Local_290.f_264)
	{
		iLocal_1 = 10;
	}
	else
	{
		iLocal_1 = 0;
	}
	iLocal_1289 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			NET_LOG(true, "Poker", "Quitting Poker: PASS", 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			NET_LOG(true, "Poker", "Quitting Poker: FAIL", 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			NET_LOG(true, "Poker", "Quitting Poker: CANCEL", 0, 0, 0, 0);
			break;
		
		default:
			NET_LOG(true, "Poker", "Quitting Poker: <SOME OTHER REASON>", 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_198() //Position: 0xAC43 / 44099
{
	Function_200();
	Function_199(10, 3);
	return;
}

void Function_199(int iParam0, int iParam1) //Position: 0xAC52 / 44114
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

void Function_200() //Position: 0xAD9F / 44447
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_204())
	{
		Function_203(10, 3);
	}
	else
	{
		Function_201();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_192(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_192());
	UI_POP("nDebugMenu");
	return;
}

void Function_201() //Position: 0xADEA / 44522
{
	Function_202(25, 2);
	return;
}

void Function_202(int iParam0, int iParam1) //Position: 0xADF6 / 44534
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

void Function_203(int iParam0, int iParam1) //Position: 0xB022 / 45090
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

bool Function_204() //Position: 0xB16F / 45423
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
				if (!Function_24(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_205(struct<17> Param0) //Position: 0xB1D7 / 45527
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_218(&Var12, &Var0);
	uVar15 = Function_217(uParam1, &Var12);
	Function_216(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_215(&Param0, uVar15);
	Function_213(StackVal, &Param0, Var12.f_12);
	Function_211(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_210(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_207(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_206(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_206(int iParam0, int iParam1, int iParam2) //Position: 0xB2CB / 45771
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

bool Function_207(struct<17> Param0) //Position: 0xB32B / 45867
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
				Function_209(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_209(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_206(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_208(Param1.f_64);
	}
	else
	{
		Function_208(Param1.f_64);
	}
	return 0;
}

void Function_208(bool bParam0) //Position: 0xB4BE / 46270
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

void Function_209(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xB4FC / 46332
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

var Function_210(int iParam0, struct<21> Param1) //Position: 0xB5B2 / 46514
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_211(vector3 vParam0) //Position: 0xB5D9 / 46553
{
	switch (Function_212())
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

int Function_212() //Position: 0xB685 / 46725
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

void Function_213(vector3 vParam0) //Position: 0xB6C1 / 46785
{
	switch (Function_214(&vParam0))
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

int Function_214(int iParam0) //Position: 0xB76A / 46954
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_24(iParam0, 0x40000000))
		{
			Function_76(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_24(iParam0, 0x40000000))
		{
			Function_76(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_12(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_24(iParam0, 0x20000000))
		{
			Function_76(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_24(iParam0, 0x20000000))
		{
			Function_76(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_12(&iParam0, 0x20000000);
	return 0;
}

var Function_215(struct<21> Param0) //Position: 0xB88A / 47242
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

void Function_216(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xBA44 / 47684
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

var Function_217(int iParam0, struct<13> Param1) //Position: 0xBAE0 / 47840
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_218(struct<17> Param0) //Position: 0xBAFC / 47868
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

bool Function_219(int iParam0) //Position: 0xBB56 / 47958
{
	if (!Function_220(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_220(int iParam0) //Position: 0xBB6B / 47979
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

bool Function_221() //Position: 0xBB92 / 48018
{
	int iVar0;
	
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_465(&vLocal_246, GET_GRINGO_FROM_OBJECT(&Local_381 + 1988[Local_381.f_21202] + 8));
	}
	fLocal_248 = (GET_CURRENT_GAME_TIME() - fLocal_249);
	if (fLocal_248 < 0,033333f)
	{
		fLocal_248 = 0,0333333f;
	}
	Function_71(425, fLocal_248, 0);
	fLocal_249 = GET_CURRENT_GAME_TIME();
	if (IS_EXITFLAG_SET())
	{
		Function_464();
		return 0;
	}
	if (!IS_SCRIPT_VALID(&uLocal_1286))
	{
		iVar0 = 0;
		while (iVar0 <= Local_290.f_12)
		{
			if (IS_ACTOR_VALID(&Local_290 + 12[iVar0]))
			{
				if (GET_LAST_ATTACKER(&Local_290 + 12[iVar0]) == Function_192())
				{
				}
			}
			iVar0++;
		}
	}
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			if (Function_462())
			{
				if (!Local_290.f_264)
				{
					Function_460();
				}
				UI_PUSH("Minigame");
				Function_457(&Local_381);
				Function_456(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 2132));
				iLocal_0 = 0;
			}
			else if (Function_454(&iLocal_241) < 15.0f)
			{
				if (!Local_290.f_264)
				{
					Function_460();
				}
				UI_PUSH("Minigame");
				Function_197(2);
			}
			break;
		
		case 0x00000000:
			Function_441();
			break;
		
		case 0x00000001:
			Function_246();
			break;
		
		case 0x00000003:
			Function_231();
			break;
		
		case 0x00000029:
			if (Function_224(&uLocal_251, &iLocal_241))
			{
				Function_197(0);
			}
			break;
		
		case 0x00000065:
			iLocal_2 = 1;
			break;
		
		default:
			return 0;
	}
	if (iLocal_2)
	{
		Function_222();
		return 0;
	}
	if (bLocal_3)
	{
		Function_464();
		return 0;
	}
	return 1;
}

void Function_222() //Position: 0xBD0B / 48395
{
	if (Global_43789 == Global_46760[0])
	{
		Function_223(0, Global_46760[0]);
	}
	if (Global_43789 == Global_46914[0])
	{
		Function_223(0, Global_46914[0]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0xBD43 / 48451
{
	if (!Function_148(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_150())
				{
					Function_156(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_156(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_156(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_156(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_156(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_156(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_156(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_149(2) && !Function_134(2))
				{
					Function_156(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_224(struct<2> Param0) //Position: 0xBE4E / 48718
{
	Param0 = { StackVal, Param0 };
	switch (iLocal_1)
	{
		case 0x00000000:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			else
			{
				Function_3();
				Function_189(6);
				Function_189(5);
				Function_189(4);
				Function_189(3);
				Function_189(2);
				Function_189(1);
				Function_189(0);
				Function_140("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_229(&iParam1);
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_225(&iParam1, 10,5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_225(var uParam0, int iParam1) //Position: 0xBEF3 / 48883
{
	if (Function_227(&uParam0, iParam1))
	{
		Function_226(&uParam0);
		return 1;
	}
	return 0;
}

void Function_226(vector3 vParam0) //Position: 0xBF0D / 48909
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_227(int iParam0, float fParam1) //Position: 0xBF24 / 48932
{
	if (Function_228(&iParam0))
	{
		if (Function_454(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_228(int iParam0) //Position: 0xBF42 / 48962
{
	return Function_24(iParam0, 1);
}

void Function_229(int iParam0) //Position: 0xBF50 / 48976
{
	Function_230(&iParam0, 0.0f);
	return;
}

void Function_230(vector3 vParam0) //Position: 0xBF5D / 48989
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(&vParam0, 1);
	Function_12(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_231() //Position: 0xBF82 / 49026
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (!HUD_IS_FADING())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (iLocal_1289 == 1)
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
				START_MINIGAME(5);
				UI_EXIT("Scores");
				UI_EXIT("BetPanel");
				Function_188();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				UI_EXIT("Poker_CheatMeter");
				if (Local_381.f_2092 != 4294967295)
				{
					Function_187();
				}
				if (Function_191(32768))
				{
					Function_245(32768);
				}
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_191(8192))
			{
				EQUIP_ACCESSORY(Function_192(), 1, 1);
			}
			Function_241();
			if ((*&Local_381 + 1988)[Local_381.f_21202])
			{
				Function_240(&vLocal_246, GET_GRINGO_FROM_OBJECT(&Local_381 + 1988[Local_381.f_21202] + 8));
				Function_237(&Local_381, Function_196(1), 1);
			}
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			if (!Function_191(8388608))
			{
				Function_235();
			}
			Function_234(&Local_381);
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "sit_poker/Player/leave_game/stand") && Function_233())
			{
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000009:
			if (iLocal_1289 == 0)
			{
				iLocal_2 = 1;
			}
			else if (iLocal_1289 == 1)
			{
				bLocal_3 = true;
			}
			else if (iLocal_1289 == 2)
			{
				Function_1();
			}
			break;
		
		case 0x0000000A:
			Function_232(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1 = 11;
			break;
		
		case 0x0000000B:
			if (HUD_IS_FADED())
			{
				iLocal_1 = 9;
			}
			break;
	}
	return;
}

void Function_232(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5) //Position: 0xC1AB / 49579
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &uParam5);
		}
	}
}

int Function_233() //Position: 0xC1D5 / 49621
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_290.f_12)
	{
		if (IS_ACTOR_VALID(&Local_290 + 12[iVar0]))
		{
			if (IS_ACTION_NODE_PLAYING(&Local_290 + 12[iVar0], "sit_poker/Player/leave_game/stand"))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_234(int iParam0) //Position: 0xC238 / 49720
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*&iParam0 + 1988)[iVar02])
		{
			iVar2 = StackVal;
			if (IS_OBJECT_VALID(&iParam0 + 12[iVar241] + 224))
			{
				DESTROY_OBJECT(&iParam0 + 12[iVar241] + 224);
			}
			if (IS_OBJECT_VALID(&iParam0 + 12[iVar241] + 232))
			{
				DESTROY_OBJECT(&iParam0 + 12[iVar241] + 232);
			}
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (IS_OBJECT_VALID(&iParam0 + 12[iVar241] + 240[iVar1]))
				{
					DESTROY_OBJECT(&iParam0 + 12[iVar241] + 240[iVar1]);
				}
				iVar1++;
			}
			if (IS_OBJECT_VALID(&iParam0 + 12[iVar241] + 72 + 64[0]))
			{
				DESTROY_OBJECT(&iParam0 + 12[iVar241] + 72 + 64[0]);
			}
			if (IS_OBJECT_VALID(&iParam0 + 12[iVar241] + 72 + 64[1]))
			{
				DESTROY_OBJECT(&iParam0 + 12[iVar241] + 72 + 64[1]);
			}
		}
		iVar0++;
	}
	if (IS_OBJECT_VALID(&uLocal_364))
	{
		DESTROY_OBJECT(&uLocal_364);
	}
	if (IS_OBJECT_VALID(&iLocal_366))
	{
		DESTROY_OBJECT(&iLocal_366);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (IS_OBJECT_VALID(&iParam0 + 2684[iVar0]))
		{
			DESTROY_OBJECT(&iParam0 + 2684[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_235() //Position: 0xC391 / 50065
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_381.f_1988)
	{
		if ((*&Local_381 + 1988)[iVar02])
		{
			Function_236(GET_GRINGO_FROM_OBJECT(&Local_381 + 1988[iVar02] + 8));
			if (IS_ACTOR_VALID(&Local_381 + 12[StackVal41]))
			{
				RESET_ANIM_SET_FOR_ACTOR(&Local_381 + 12[StackVal41], 1);
				SET_ANIM_SET_FOR_ACTOR(&Local_381 + 12[StackVal41], "sit_poker_ambient", 0);
				while (!ACTOR_HAS_ANIM_SET(&Local_381 + 12[StackVal41], "sit_poker_ambient") && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
				SET_AUTO_CONVERSATION_LOOK(&Local_381 + 12[StackVal41], 1);
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[StackVal41], "sit_poker/Fake/card_idle");
				TASK_PRIORITY_SET(&Local_381 + 12[StackVal41], 2);
			}
		}
		iVar0++;
	}
	return;
}

void Function_236(int iParam0) //Position: 0xC4CB / 50379
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
			SHOW_PHYSINST(&uVar3);
		}
		bVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar0, bVar1 + 1);
	}
	return;
}

void Function_237(struct<2113> Param0) //Position: 0xC545 / 50501
{
	int iVar0;
	
	(*&Param0 + 1988)[(&Param0 + 12[iParam141])->f_1962] = 0;
	(&Param0 + 1988[(&Param0 + 12[iParam141])->f_1962])->f_4 = 4294967295;
	if (&bParam2)
	{
		if (IS_ACTOR_VALID(&Param0 + 12[iParam141]))
		{
			TASK_CLEAR(&Param0 + 12[iParam141]);
			if ((&Param0 + 12[iParam141])->f_192 == 3)
			{
				RELEASE_ACTOR(&Param0 + 12[iParam141]);
				TASK_FLEE_ACTOR(&Param0 + 12[iParam141], Function_192(), 30.0f, -1.0f, 0, 0, 0);
			}
			else if (!IS_ACTOR_PLAYER(&Param0 + 12[iParam141]))
			{
				TASK_WANDER(&Param0 + 12[iParam141], 3212836864);
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 12[iParam141], 1);
			Function_239(&Param0 + 12[iParam141]);
			ACTOR_END_FORCE_HOLSTER(&Param0 + 12[iParam141]);
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/Player/leave_game/stand");
		}
		(&Param0 + 12[iParam141]) = "";
		strcpy(&Param0 + 12[iParam141] + 8, "", 32);
	}
	(*&Param0 + 1988)[(&Param0 + 12[iParam141])->f_1962] = 0;
	(&Param0 + 12[iParam141])->f_196 = 4294967295;
	Function_238(&Param0 + 12[iParam141] + 72);
	if (IS_ACTOR_VALID(&Param0 + 12[iParam141]))
	{
		SET_AUTO_CONVERSATION_LOOK(&Param0 + 12[iParam141], 1);
	}
	(&Param0 + 12[iParam141])->f_200 = 1000;
	DESTROY_OBJECT(&Param0 + 12[iParam141] + 232);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		DESTROY_OBJECT(&Param0 + 12[iParam141] + 240[iVar0]);
		iVar0++;
	}
	DESTROY_OBJECT(&Param0 + 12[iParam141] + 224);
	Param0.f_2112 = (Param0.f_2112 - 1);
	return;
}

void Function_238(struct<117> Param0) //Position: 0xC714 / 50964
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar0] = 4294967295;
		Param0[iVar0].f_4 = 4294967295;
		iVar0++;
	}
	Param0.f_112 = 0;
	Param0.f_116 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_64)
	{
		if (IS_OBJECT_VALID(&Param0 + 64[iVar0]))
		{
			DESTROY_OBJECT(&Param0 + 64[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_239(int iParam0) //Position: 0xC780 / 51072
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		REMOVE_OBJECT_ATTACHMENT(&iParam0 + 280[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		REMOVE_OBJECT_ATTACHMENT(&iParam0 + 72 + 88[iVar0]);
		iVar0++;
	}
	return;
}

void Function_240(var uParam0, Vector3 vParam1) //Position: 0xC7C7 / 51143
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
	struct<2> Var19;
	
	if (IS_GRINGO_VALID(&vParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&vParam1), &Var0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&vParam1), &Var2, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&vParam1), &Var4, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&vParam1), &Var6, 2);
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
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var19);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(Var15, Var19, 1);
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_241() //Position: 0xC956 / 51542
{
	int iVar0;
	bool bVar1;
	
	if (StackVal && !Function_243(StackVal, Function_28(Function_30(iLocal_1289 != 0))))
	{
		Function_88(410, 1, 0, 0);
		Function_87(6, 10);
	}
	if ((*&Local_381 + 1988)[Local_381.f_21202])
	{
		iVar0 = ((&Local_381 + 12[Function_196(1)41])->f_200 - (*&Local_290 + 68)[Local_381.f_2120]);
		bVar1 = (iVar0 / 10);
		if (bVar1 <= 0)
		{
			Function_119(411, bVar1, 0);
			Function_119(450, bVar1, 0);
			if (Function_242(&Local_381) && !HUD_IS_FADED())
			{
				SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 509, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
		else
		{
			Function_88(411, bVar1, 0, 0);
			Function_88(450, bVar1, 0, 0);
			if ((Function_66(597) + Function_66(450)) < 10000 && bVar1 < 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
				{
					AWARD_ACHIEVEMENT(24);
				}
			}
			if (Function_242(&Local_381) && !HUD_IS_FADED())
			{
				SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 510, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
	}
	else
	{
		Function_119(411, ((*&Local_290 + 68)[Local_381.f_2120] / 10), 0);
		Function_119(450, ((*&Local_290 + 68)[Local_381.f_2120] / 10), 0);
	}
	return;
}

bool Function_242(struct<1989> Param0) //Position: 0xCA9C / 51868
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if (IS_AMBIENT_SPEECH_PLAYING(&Param0 + 12[StackVal41]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_243(int iParam0, int iParam1) //Position: 0xCAE3 / 51939
{
	int iVar0;
	
	if (!Function_244(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (Function_30(iVar0) != iParam0 && Function_28(iVar0) != iParam1)
		{
			if (Function_86(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_244(int iParam0) //Position: 0xCB28 / 52008
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_245(int iParam0) //Position: 0xCB3D / 52029
{
	Function_12(&uLocal_245, iParam0);
	return;
}

void Function_246() //Position: 0xCB4A / 52042
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<16> Var4;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	struct<2> Var26;
	char* cVar28[64];
	bool bVar44;
	float fVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	var uVar53;
	var uVar54;
	var uVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	int iVar59;
	struct<2> Var60;
	var uVar62;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	bool bVar69;
	int iVar70;
	float fVar71;
	bool bVar72;
	bool bVar73;
	var uVar74;
	bool bVar76;
	float fVar77;
	float fVar78;
	struct<53> Var79;
	
	if (Function_191(2))
	{
		Function_230(&iLocal_241, (Function_454(&iLocal_241) + 0,2f));
	}
	Function_436(&Local_381);
	Function_433(&Local_381);
	if (((!iLocal_1283 != 47 && !iLocal_1283 != 48) && !iLocal_1283 != 49) && !iLocal_1283 != 50)
	{
		if (HUD_IS_SHOWING_HELP_TEXT() && !(iLocal_1283 != 8 || iLocal_1283 != 10))
		{
			if (UNK_0xDA674AE0("@MINIGAME.SKIP_HELP", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_432(&iLocal_372);
				if (Global_42825 == 3)
				{
					Function_431(&iLocal_372, 17);
					Function_431(&iLocal_372, 6);
				}
			}
		}
	}
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if ((((((((iLocal_1283 == 10 && iLocal_1283 == 47) && iLocal_1283 == 48) && iLocal_1283 == 49) && iLocal_1283 == 50) && iLocal_1283 == 53) && iLocal_1283 == 42) && iLocal_1283 == 43) && iLocal_1283 == 45)
		{
			if (UNK_0xDA674AE0("@MINIGAME.SKIP_TO_PLAYER", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				bLocal_1285 = iLocal_1283;
				Function_430(51, 0);
				Function_429(32768);
			}
		}
	}
	switch (iLocal_1283)
	{
		case 0x00000000:
			iVar21 = 0;
			while (iVar21 <= 6)
			{
				if ((*&Local_381 + 1988)[iVar212])
				{
					PRINTSTRING(GET_ACTOR_ENUM_STRING(&Local_381 + 12[StackVal41]));
					PRINTSTRING(" has chip count of ");
					PRINTINT((&Local_381 + 12[StackVal41])->f_200);
					PRINTNL();
					bVar20 = (StackVal + (&Local_381 + 12[bVar2041])->f_200);
				}
				iVar21++;
			}
			PRINTSTRING("The sum of all chips is ");
			PRINTINT(bVar20);
			PRINTNL();
			PRINTSTRING("The pot is worth ");
			PRINTINT(Local_381.f_2736);
			PRINTNL();
			switch (Local_381.f_2732)
			{
				case 0x00000000:
					iVar22 = Function_428(&Local_381 + 1988, Local_381.f_2124);
					if (iVar22 != 4294967295)
					{
						iVar23 = StackVal;
						if (iVar23 == 4294967295)
						{
						}
					}
					if (Function_196(0) >= 4294967295)
					{
						Function_426(&Local_381, &vLocal_246, iVar23, Function_196(0), 1);
					}
					iLocal_1290 = 0;
					Function_245(2);
					SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_194(1)41], "sit_poker/dealer/idle");
					if (Local_290 && Local_381.f_2124 != Local_381.f_2120)
					{
						if (Function_420(&vLocal_246))
						{
							Local_290 = 0;
							HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
							HUD_FADE_IN(1.0f, 1065353216);
							Function_430(1, 0);
						}
					}
					else
					{
						if (!IS_OBJECT_VALID(&uLocal_364))
						{
							strcpy(&cVar28, "deck", 64);
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							uLocal_364 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_239, &cVar28, "$/fragments/p_gen_cards02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
							if (IS_ATTACHMENT_VALID(&bLocal_1261))
							{
								REMOVE_OBJECT_ATTACHMENT(&bLocal_1261);
							}
							Function_419(&Local_381 + 12[Function_194(1)41], &Var24, &Var26);
							SET_OBJECT_POSITION(&uLocal_364, Var24);
							SET_OBJECT_ORIENTATION(&uLocal_364, Var26);
							Function_418(&uLocal_364, &Local_381 + 12[Function_194(1)41]);
							NET_OBJECT_REPLICATION_MODE_END(17);
							Function_416(&Local_381);
						}
						else
						{
							if (IS_ATTACHMENT_VALID(&bLocal_1261))
							{
								REMOVE_OBJECT_ATTACHMENT(&bLocal_1261);
							}
							Function_419(&Local_381 + 12[Function_194(1)41], &Var24, &Var26);
							SET_OBJECT_POSITION(&uLocal_364, Var24);
							SET_OBJECT_ORIENTATION(&uLocal_364, Var26);
						}
						if (HUD_IS_FADED())
						{
							if (!Function_191(32768))
							{
								HUD_FADE_IN(1.0f, 1065353216);
							}
						}
						Function_415(8, 0);
						Function_430(1, 0);
					}
					break;
				
				case 0x00000001:
					Function_414(&Local_381);
					Function_430(15, 0);
					break;
				
				case 0x00000002:
					Function_413(&Local_381);
					Function_430(15, 0);
					break;
				
				case 0x00000003:
					Function_410(&Local_381);
					Function_430(15, 0);
					break;
			}
			break;
		
		case 0x00000001:
			Function_409(&Local_381);
			Function_229(&iLocal_241);
			Function_430(2, 0);
			break;
		
		case 0x00000002:
			if ((Function_454(&iLocal_241) < 1,5f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_191(32768))
			{
				Function_430(3, 0);
			}
			break;
		
		case 0x00000003:
			if (((IS_ACTION_NODE_PLAYING_PARTIAL(&Local_381 + 12[Function_194(1)41], "sit_poker/dealer/idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&Local_381 + 12[Function_194(1)41], "sit_poker/Player/card_idle")) || Function_408(&Local_381 + 12[Function_194(1)41])) || Function_407(&Local_381 + 12[Function_194(1)41]))
			{
				Function_406(&Local_381);
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_pre");
				Function_229(&iLocal_241);
				Function_430(4, 0);
			}
			break;
		
		case 0x00000004:
			if (!IS_ATTACHMENT_VALID(&bLocal_1261))
			{
				if (DECOR_CHECK_EXIST(&Local_381 + 12[Function_194(1)41], "bPokerAttachDeck"))
				{
					bLocal_1261 = ATTACH_OBJECTS_NO_DRV(StackVal, StackVal, &uLocal_364, GET_OBJECT_FROM_ACTOR(&Local_381 + 12[Function_194(1)41]), "elbow_l_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				}
			}
			if (((Function_454(&iLocal_241) < 1,5f && !HUD_IS_SHOWING_HELP_TEXT()) && IS_ATTACHMENT_VALID(&bLocal_1261)) || Function_191(32768))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_405(&vLocal_246, &Local_381 + 12[Function_194(1)41]);
				Function_430(5, 0);
			}
			break;
		
		case 0x00000005:
			if (!IS_ATTACHMENT_VALID(&bLocal_1261))
			{
				bLocal_1261 = ATTACH_OBJECTS_NO_DRV(StackVal, StackVal, &uLocal_364, GET_OBJECT_FROM_ACTOR(&Local_381 + 12[Function_194(1)41]), "elbow_l_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			}
			iLocal_1290 = 1;
			if ((Function_191(32768) && Function_194(1) != Function_196(1)) && Global_42825 != 3)
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
				Function_245(32768);
			}
			if (!HUD_IS_FADING())
			{
				Function_188();
				Function_229(&iLocal_241);
				if (!Function_191(32768))
				{
					if (Function_196(1) == Function_194(1))
					{
						if (Function_400(&iLocal_372, 6))
						{
							if (0 || Global_42825 == 3)
							{
								Function_140("Poker_DealerHelpMP", 9.0f, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_140("Poker_DealerHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
					}
				}
				if (Local_290.f_264)
				{
					if (Local_290.f_244 < 0)
					{
						DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "begincomments", true);
					}
					else if (Function_398())
					{
						DECOR_SET_BOOL(Function_192(), "nexthand", true);
					}
					else if (Function_398())
					{
						if (Function_397(&Local_381) != 4294967295)
						{
							DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "nexthand", true);
						}
					}
					else
					{
						DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "nexthand", true);
					}
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (Function_396())
					{
						SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_194(1)41], 281, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Local_381.f_2120 == Local_381.f_2124)
					{
						SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 491, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 492, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				iLocal_289 = 0;
				Function_430(6, 0);
			}
			break;
		
		case 0x0000000F:
			bVar44 = false;
			switch (Local_381.f_2732)
			{
				case 0x00000001:
					if ((&Local_381 + 2564)->f_112 == 3)
					{
						if (!Function_191(2) && !Function_191(32768))
						{
							if (Function_400(&iLocal_372, 10))
							{
								Function_140("Poker_FlopHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar44 = true;
					}
					break;
				
				case 0x00000002:
					if ((&Local_381 + 2564)->f_112 == 4)
					{
						if (!Function_191(2) && !Function_191(32768))
						{
							if (Function_400(&iLocal_372, 11))
							{
								Function_140("Poker_TurnHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar44 = true;
					}
					break;
				
				case 0x00000003:
					if ((&Local_381 + 2564)->f_112 == 5)
					{
						if (!Function_191(2) && !Function_191(32768))
						{
							if (Function_400(&iLocal_372, 12))
							{
								Function_140("Poker_RiverHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar44 = true;
					}
					break;
				
				case 0x00000000:
				default:
					LOG_ERROR("Shouldn't be waiting for table deal now");
					break;
			}
			if (bVar44)
			{
				Function_395(&vLocal_246, &Local_381, 0);
				Function_229(&iLocal_241);
				iLocal_1288 = 0;
				Function_390(&Local_381);
				Function_430(6, 0);
			}
			break;
		
		case 0x00000006:
			if (Local_381.f_2732 == 0)
			{
				fVar45 = -1.0f;
				bVar46 = true;
				if (Local_290.f_264 && Function_454(&iLocal_241) < 1.0f)
				{
					if (Function_397(&Local_381) != 4294967295)
					{
						if (!DECOR_CHECK_EXIST(&Local_381 + 12[Function_397(&Local_381)41], "nexthand"))
						{
							DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "nexthand", true);
						}
					}
				}
			}
			else
			{
				if (Function_191(32768))
				{
					fVar45 = -1.0f;
				}
				else
				{
					fVar45 = 2.0f;
				}
				iVar47 = iLocal_1288;
				if (iVar47 <= 5)
				{
					if ((*&Local_381 + 1988)[iVar472])
					{
						if (StackVal && Function_389(&Local_381 + 12[(&Local_381 + 12[StackVal41])->f_192 != 041]))
						{
							iVar48 = StackVal;
							bVar46 = Function_384(&Local_381 + 12[iVar4841] + 72, &Local_381 + 2564, &Local_381 + 12[iVar4841] + 324);
							if (bVar46)
							{
								iLocal_1288++;
								bVar46 = false;
							}
						}
						else
						{
							iLocal_1288++;
							bVar46 = false;
						}
					}
					else
					{
						iLocal_1288++;
						bVar46 = false;
					}
				}
				else
				{
					bVar46 = true;
				}
			}
			if (Function_454(&iLocal_241) < fVar45 && bVar46)
			{
				if ((Function_376(&Local_381) && (!HUD_IS_SHOWING_HELP_TEXT() || Function_191(32768))) || Function_191(64))
				{
					if (Local_381.f_2732 == 0)
					{
						Function_374(&Local_381);
					}
					if (Local_290.f_264)
					{
						if (Function_398())
						{
							if (Function_397(&Local_381) != 4294967295)
							{
								if ((&Local_381 + 12[Function_397(&Local_381)41] + 72)->f_112 >= 0)
								{
									DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "rechand", true);
								}
							}
						}
						else if ((&Local_381 + 12[Function_399(&Local_381)41] + 72)->f_112 >= 0)
						{
							DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "rechand", true);
						}
					}
					else if (Function_242(&Local_381) && !HUD_IS_FADED())
					{
						iVar49 = Function_373(&Local_381);
						SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[iVar4941], 282, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					Function_429(1024);
					Function_430(7, 1);
					CANCEL_TIME_WARP(0);
				}
			}
			if ((((Local_381.f_2124 != Local_381.f_2120 && 1) && !Local_290.f_264) && Local_381.f_2732 != 0) && Global_42825 != 3)
			{
				if (UNK_0xDA674AE0("@POKER.CHEAT", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					if (Global_42825 == 3)
					{
						Function_372(&Local_1263);
					}
					else
					{
						Function_371(&Local_1263);
					}
					Function_88(470, 1, 0, 0);
					iLocal_1290 = 2;
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_370("Poker_CheatObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_430(46, 0);
				}
			}
			break;
		
		case 0x00000007:
			Function_188();
			Function_187();
			CANCEL_TIME_WARP(0);
			if (Function_389(&Local_381 + 12[Function_369(1)41]))
			{
				bVar50 = ((&Local_381 + 12[Function_369(1)41])->f_200 < 0 && (Function_368(&Local_381) < 1 || Local_381.f_2740 < 0));
				bVar51 = true;
				switch ((&Local_381 + 12[Function_369(1)41])->f_192)
				{
					case 0x00000000:
						if (bVar50)
						{
							if (!Function_367(&Local_381))
							{
								Function_426(&Local_381, &vLocal_246, Function_369(1), Function_196(0), bVar51);
								Function_245(1024);
							}
							if (Function_191(1))
							{
								Function_430(8, 0);
							}
							else
							{
								PRINTSTRING("------------------------ AI  ");
								PRINTINT(StackVal);
								PRINTSTRING(" ------------------------");
								PRINTNL();
								PRINTSTRING("nBoard is ");
								Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 2564));
								PRINTSTRING("Player Hand is ");
								Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 12[Function_369(1)41] + 72));
								Function_229(&iLocal_241);
								Function_430(11, 0);
							}
						}
						else
						{
							NET_LOG(false, "Poker", "AI Player had no chips or nobody else did", 0, 0, 0, 0);
							Function_430(23, 0);
						}
						break;
					
					case 0x00000001:
						if (bVar50 || Local_381.f_2092 == 4294967295)
						{
							if (!Function_367(&Local_381))
							{
								Function_245(1024);
							}
							PRINTSTRING("------------------------ Player  ");
							PRINTINT(StackVal);
							PRINTSTRING(" ------------------------");
							PRINTNL();
							PRINTSTRING("nBoard is ");
							Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 2564));
							PRINTSTRING("Player Hand is ");
							Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 12[Function_369(1)41] + 72));
							Function_430(8, 0);
							Function_229(&iLocal_241);
						}
						else
						{
							NET_LOG(false, "Poker", "Local Player had no chips or nobody else did", 0, 0, 0, 0);
							Function_430(23, 0);
						}
						break;
					
					case 0x00000002:
						if (bVar50)
						{
							if (!Function_367(&Local_381))
							{
								Function_426(&Local_381, &vLocal_246, Function_369(1), Function_196(0), bVar51);
								Function_245(1024);
							}
							PRINTSTRING("------------------------ Remote Player  ");
							PRINTINT(StackVal);
							PRINTSTRING(" ------------------------");
							PRINTNL();
							PRINTSTRING("nBoard is ");
							Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 2564));
							PRINTSTRING("Player Hand is ");
							Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 12[Function_369(1)41] + 72));
							Function_430(12, 0);
						}
						else
						{
							NET_LOG(false, "Poker", "Remote Player had no chips or nobody else did", 0, 0, 0, 0);
							Function_430(23, 0);
						}
						break;
					
					case 0x00000003:
						NET_LOG(false, "Poker", "Encountered Linkdead player", 0, 0, 0, 0);
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(Function_369(1), &Local_381) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds", &Var4, "", "", "", 0, 2, 0, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/bet_request/fold_B");
						Function_363(&Local_381 + 12[Function_369(1)41]);
						Function_229(&iLocal_241);
						Function_430(21, 0);
						break;
				}
			}
			else
			{
				NET_LOG(false, "Poker", "Player had no hand", 0, 0, 0, 0);
				Function_430(23, 0);
			}
			break;
		
		case 0x0000000C:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(Function_369(1), &Local_381) };
			PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, "", "", "", 0, 2, 0, 0, 0);
			Function_229(&iLocal_241);
			Function_430(13, 0);
			break;
		
		case 0x0000000D:
			Function_362(&Local_381);
			if ((&Local_381 + 12[Function_369(1)41])->f_192 == 3)
			{
				Local_1299 = 2;
			}
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(Function_369(1), &Local_381) };
			switch (Local_1299)
			{
				case 0x00000000:
				case 0x00000004:
					break;
				
				case 0x00000003:
					Function_360(StackVal, &Local_381, Function_369(1), 0, 0);
					Function_430(20, 0);
					Function_229(&iLocal_241);
					Local_1299 = 0;
					break;
				
				case 0x00000002:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_430(21, 0);
					SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/bet_request/fold_B");
					Function_363(&Local_381 + 12[Function_369(1)41]);
					Function_229(&iLocal_241);
					Local_1299 = 0;
					break;
				
				case 0x00000001:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_430(21, 0);
					bVar52 = RAND_INT_RANGE(false, 100);
					if (bVar52 <= 50)
					{
						SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/player/bet_request/fold");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/bet_request/fold_B");
					}
					Function_363(&Local_381 + 12[Function_369(1)41]);
					Function_229(&iLocal_241);
					Local_1299 = 0;
					break;
				
				case 0x00000005:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Left_Table", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_237(&Local_381, Function_369(1), 1);
					Local_1299 = 0;
					Function_229(&iLocal_241);
					Function_430(22, 0);
					break;
				
				default:
					LOG_ERROR("Unhandled Remote Action!!!");
					break;
			}
			break;
		
		case 0x00000008:
			UI_ENTER("BetPanel");
			UI_ENTER("nBetAmount");
			UI_ENTER("BetPanel_1");
			UI_ENTER("BetPanel_2");
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_1", "%s %s", UI_GET_STRING("Poker_FoldButton"), "{@POKER.FOLD}", 0);
			UI_SET_TEXT("BetPanel_1", "GENERIC_DBUFFER32_1");
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CheckButton"), "{@UI.ACCEPT}", 0);
			UI_SET_TEXT("BetPanel_2", "GENERIC_DBUFFER32_0");
			iLocal_1290 = 4;
			if (Function_191(32768))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
				Function_245(32768);
			}
			Function_359(&Local_381, Function_196(0));
			if (!Function_191(32768))
			{
				if (Function_400(&iLocal_372, 3))
				{
					Function_140("Poker_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			Function_358();
			if (!Local_381.f_2092 != 4294967295)
			{
				Function_357(&Local_381 + 2092);
			}
			if (!IS_ACTION_NODE_PLAYING(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/look_at_cards/open_pre") && !IS_ACTION_NODE_PLAYING(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/look_at_cards/open_mid"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/player/look_at_cards");
				Function_363(&Local_381 + 12[Function_369(1)41]);
			}
			Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 12[Function_369(1)41] + 72));
			bLocal_1259 = (Local_381.f_2740 - (&Local_381 + 12[Function_369(1)41])->f_204);
			Function_355(&Local_381 + 12[Function_369(1)41] + 72, &Local_381 + 2564, &uVar53, &uVar54, &uVar55);
			bLocal_1259 = (Local_381.f_2740 - (&Local_381 + 12[Function_369(1)41])->f_204);
			bLocal_1259 = Function_353(&Local_381, bLocal_1259, 1);
			UI_LABEL_SET_VALUE("nBetAmount", bLocal_1259);
			Function_430(10, 0);
			if (Local_1263.f_60 == 1)
			{
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/player/bet_request/fold");
				Function_363(&Local_381 + 12[Function_369(1)41]);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(Function_369(1), &Local_381) };
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var4, "", "", "", 0, 2, 0, 0, 0);
				Local_1263.f_60 = 0;
				Function_229(&iLocal_241);
				Function_405(&vLocal_246, &Local_381 + 12[Function_369(1)41]);
				Function_430(21, 0);
			}
			break;
		
		case 0x0000000A:
			bVar56 = true;
			bVar57 = bLocal_1259;
			if (!UNK_0x062C5047("@POKER.LOOK_AT_SCORE", 1, 0))
			{
				if (Function_368(&Local_381) < 1 && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					if (UNK_0xDA674AE0("@MINIGAME.INCREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.INCREASE_BET", 1, 0))
					{
						if (iLocal_380 == 1)
						{
							fLocal_1282 = (fLocal_1282 - (0,008f * Function_352()));
						}
						else
						{
							fLocal_1282 = 0,2f;
						}
						iLocal_380 = 1;
						if (Function_454(&iLocal_376) < fLocal_1282 && Function_454(&iLocal_376) < (1.0f / 30.0f))
						{
							if (fLocal_1282 < 0.0f)
							{
								bLocal_1259++;
							}
							else if (fLocal_1282 < -0,5f)
							{
								bLocal_1259 += 10;
							}
							else
							{
								bLocal_1259 += 100;
							}
							bLocal_1259 = Function_353(&Local_381, bLocal_1259, 1);
							UI_LABEL_SET_VALUE("nBetAmount", bLocal_1259);
							Function_229(&iLocal_376);
						}
					}
					else if (UNK_0xDA674AE0("@MINIGAME.DECREASE_BET", 1, 0) || UNK_0x062C5047("@MINIGAME.DECREASE_BET", 1, 0))
					{
						if (iLocal_380 == 4294967295)
						{
							fLocal_1282 = (fLocal_1282 - (0,008f * Function_352()));
						}
						else
						{
							fLocal_1282 = 0,2f;
						}
						iLocal_380 = 4294967295;
						if (Function_454(&iLocal_376) < fLocal_1282 && Function_454(&iLocal_376) < (1.0f / 30.0f))
						{
							if (fLocal_1282 < 0.0f)
							{
								bLocal_1259 = (bLocal_1259 - 1);
							}
							else if (fLocal_1282 < -0,5f)
							{
								bLocal_1259 = (bLocal_1259 - 10);
							}
							else
							{
								bLocal_1259 = (bLocal_1259 - 100);
							}
							bLocal_1259 = Function_353(&Local_381, bLocal_1259, 0);
							UI_LABEL_SET_VALUE("nBetAmount", bLocal_1259);
							Function_229(&iLocal_376);
						}
					}
					else
					{
						iLocal_380 = 0;
						fLocal_1282 = 0,2f;
					}
				}
			}
			bVar57 = (bVar57 - bLocal_1259);
			if (bVar57 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			if (((UNK_0xDA674AE0("@POKER.FOLD", 1, 0) || Function_351(&iLocal_241)) && Function_350(&Local_381)) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds_Self", Function_349(), 0, 0, 0, 0, 2, 0, 0, 0);
				bVar58 = RAND_INT_RANGE(false, ((100 * (&Local_381 + 12[Function_369(1)41])->f_216) / Function_348(&Local_381)));
				if (bVar58 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/player/bet_request/fold");
				}
				Function_363(&Local_381 + 12[Function_369(1)41]);
				Function_229(&iLocal_241);
				if (!Function_191(32768))
				{
					if (Function_400(&iLocal_372, 2))
					{
						Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_369(1)41], 507, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_1290 = 0;
				UI_EXIT("BetPanel");
				Function_430(21, 0);
				bVar56 = false;
			}
			else if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/look_at_cards/open_pst");
				bVar56 = false;
				iLocal_1290 = 0;
				Function_430(19, 0);
			}
			else if ((((!0 | Local_290.f_264 && UNK_0xDA674AE0("@POKER.CHEAT", 1, 0)) && !Local_381.f_2092 != 4294967295) && Global_42825 != 3) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				Function_188();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_ChooseCard", 4.0f, 1, 2, 0, 0, 0, 0);
				iLocal_1281 = 3;
				Function_88(470, 1, 0, 0);
				iLocal_1290 = 5;
				Function_430(42, 0);
				bVar56 = false;
			}
			if (Function_454(&iLocal_241) < 30.0f)
			{
				if (Local_290.f_264)
				{
					if (Function_398())
					{
						if (Function_397(&Local_381) != 4294967295)
						{
							DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "toolong", true);
						}
					}
					else
					{
						DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "toolong", true);
					}
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					iVar59 = Function_373(&Local_381);
					SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[iVar5941], 291, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_229(&iLocal_241);
			}
			if (bVar56)
			{
			}
			else
			{
				Function_188();
			}
			if (bLocal_1259 >= 0)
			{
				if ((&Local_381 + 12[Function_369(1)41])->f_200 == bLocal_1259)
				{
					UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_AllInButton"), "{@UI.ACCEPT}", 0);
				}
				else if (Local_381.f_2740 >= 0)
				{
					if (((&Local_381 + 12[Function_369(1)41])->f_204 + bLocal_1259) >= Local_381.f_2740)
					{
						UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_RaiseButton"), "{@UI.ACCEPT}", 0);
					}
					else
					{
						UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CallButton"), "{@UI.ACCEPT}", 0);
					}
				}
				else
				{
					UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_BetButton"), "{@UI.ACCEPT}", 0);
				}
			}
			else
			{
				UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CheckButton"), "{@UI.ACCEPT}", 0);
			}
			UI_SET_TEXT("BetPanel_2", "GENERIC_DBUFFER32_0");
			UI_REFRESH("BetPanel_2");
			Function_344();
			break;
		
		case 0x0000000B:
			Function_343(&Local_381 + 12[Function_369(1)41], &Var60, &uVar62);
			if ((((StackVal && Function_339((((!Function_342(&Local_381 + 12[Function_369(1)41]) && !Function_408(&Local_381 + 12[Function_369(1)41])) && !Function_341(&Local_381 + 12[Function_369(1)41])) && !Function_407(&Local_381 + 12[Function_369(1)41])), &Local_381 + 12[Function_369(1)41], Var60)) || Function_191(32768)) || Function_191(64)) || Function_454(&iLocal_241) < 2.0f)
			{
				PRINTSTRING("PKR_AI_DECISION took seconds = ");
				PRINTFLOAT(Function_454(&iLocal_241));
				PRINTNL();
				Function_322(&Local_381, Function_369(1), &iLocal_1283);
				NET_LOG(false, "Poker", "Survived the Thought process", 0, 0, 0, 0);
			}
			Function_362(&Local_381);
			break;
		
		case 0x00000013:
			Function_426(&Local_381, &vLocal_246, Function_369(1), Function_196(0), 1);
			if ((IS_ACTION_NODE_PLAYING_PARTIAL(&Local_381 + 12[Function_369(1)41], "/Global/sit_poker/Player/card_idle") || Function_191(32768)) || Function_191(64))
			{
				UI_EXIT("BetPanel");
				Function_360(&Local_381, Function_369(1), bLocal_1259, 0, 0);
				Function_321(3, bLocal_1259);
				NET_LOG(false, "Poker", "State: PKR_ONE_FRAME_PAUSE", 0, 0, 0, 0);
				Function_362(&Local_381);
				Function_359(&Local_381, Function_196(1));
				Function_229(&iLocal_241);
				Function_430(20, 0);
			}
			break;
		
		case 0x00000014:
			if (((Function_454(&iLocal_241) < 0,75f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_191(64)) || Function_191(32768))
			{
				Function_430(23, 1);
			}
			else
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && 1)
				{
				}
				Function_362(&Local_381);
			}
			break;
		
		case 0x00000012:
			if ((Function_454(&iLocal_241) < 1,5f || Function_191(64)) || Function_191(32768))
			{
				Function_430(23, 1);
			}
			break;
		
		case 0x00000016:
			if (Function_454(&iLocal_241) < 1,5f)
			{
				Function_430(23, 1);
			}
			break;
		
		case 0x00000015:
			Function_426(&Local_381, &vLocal_246, Function_369(1), Function_196(0), 1);
			if (((Function_454(&iLocal_241) < 0,75f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_191(64)) || Function_191(32768))
			{
				Function_430(23, 1);
			}
			else
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && 1)
				{
				}
				Function_362(&Local_381);
			}
			break;
		
		case 0x0000000E:
			if (Function_191(512))
			{
				if (Function_308(1, 1, 0x3f800000))
				{
					Function_245(512);
					Function_430(1, 0);
				}
			}
			break;
		
		case 0x00000010:
			NET_LOG(true, "Poker", "Waiting to move to state #%s", Function_307(bLocal_1284), 0, 0, 0);
			Function_298(bLocal_1284);
			Function_430(17, 0);
			break;
		
		case 0x00000011:
			if (Function_308(bLocal_1284, 0, 0x3f800000))
			{
				NET_LOG(true, "Poker", "Moving to state #%s", Function_307(bLocal_1284), 0, 0, 0);
				Function_430(bLocal_1284, 0);
			}
			break;
		
		case 0x00000017:
			if (((!IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vLocal_246) || CAMERA_GET_CURRENT_TRANSITION_TYPE(&vLocal_246) != 1) || Function_191(64)) || Function_191(32768))
			{
				Function_188();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (Function_428(&Local_381 + 1988, Local_381.f_2116) == Local_381.f_2128)
				{
					NET_LOG(false, "Poker", "Player to left of CurrentPlayer is the raiser", 0, 0, 0, 0);
					if (Local_381.f_2744 >= 0)
					{
						NET_LOG(false, "Poker", "UnderBet > 0", 0, 0, 0, 0);
						iVar64 = ((&Local_381 + 12[Function_297(1)41])->f_204 - Local_381.f_2744);
						(&Local_381 + 12[Function_297(1)41])->f_200 = ((&Local_381 + 12[Function_297(1)41])->f_200 + iVar64);
						(&Local_381 + 12[Function_297(1)41])->f_204 = ((&Local_381 + 12[Function_297(1)41])->f_204 - iVar64);
						(&Local_381 + 12[Function_297(1)41])->f_216 = ((&Local_381 + 12[Function_297(1)41])->f_216 - iVar64);
						Local_381.f_2736 = (Local_381.f_2736 - iVar64);
					}
					else if (Local_381.f_2736 == (&Local_381 + 12[Function_297(1)41])->f_212)
					{
						NET_LOG(false, "Poker", "Raise Not Called at all", 0, 0, 0, 0);
						iVar64 = (&Local_381 + 12[Function_297(1)41])->f_208;
						(&Local_381 + 12[Function_297(1)41])->f_200 = ((&Local_381 + 12[Function_297(1)41])->f_200 + iVar64);
						(&Local_381 + 12[Function_297(1)41])->f_204 = ((&Local_381 + 12[Function_297(1)41])->f_204 - iVar64);
						(&Local_381 + 12[Function_297(1)41])->f_216 = ((&Local_381 + 12[Function_297(1)41])->f_216 - iVar64);
						Local_381.f_2736 = (Local_381.f_2736 - iVar64);
					}
					else
					{
						NET_LOG(false, "Poker", "Third Choice", 0, 0, 0, 0);
					}
					Function_430(24, 0);
				}
				else
				{
					Function_430(7, 0);
				}
				Local_381.f_2116 = Function_428(&Local_381 + 1988, Local_381.f_2116);
				iVar65 = Function_296(&Local_381, &iVar66);
				if (iVar65 == 1)
				{
					NET_LOG(false, "Poker", "Nobody's left", 0, 0, 0, 0);
					Function_430(24, 0);
					Local_381.f_2732 = 3;
				}
				Function_245(16);
			}
			break;
		
		case 0x00000018:
			if (Local_381.f_2732 == 3)
			{
				PRINTSTRING("Board at time of river is: ");
				Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_381 + 2564));
				if (Function_191(64))
				{
					Function_295(StackVal, &vLocal_246, *(&Local_290 + 232));
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					HUD_FADE_IN(1.0f, 1065353216);
					bLocal_1285 = 24;
					Function_430(52, 0);
				}
				else
				{
					Function_293(&Local_381);
					if (Function_292(&Local_381))
					{
						Function_429(8);
						if (Local_381.f_2804 == 1)
						{
							Function_429(128);
						}
						else
						{
							Function_245(128);
						}
						Function_295(StackVal, &vLocal_246, *(&Local_290 + 232));
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_370("Poker_SidePot", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_229(&iLocal_241);
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 13))
							{
								Function_140("Poker_SidePotHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						if (Local_381.f_2804 < 0)
						{
							Function_430(31, 0);
						}
						else
						{
							Function_430(25, 0);
						}
					}
					else if (Function_191(8))
					{
						Function_295(StackVal, &vLocal_246, *(&Local_290 + 232));
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_370("Poker_MainPot", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_229(&iLocal_241);
						Function_430(25, 0);
						Function_245(8);
					}
					else
					{
						Function_229(&iLocal_241);
						if (Local_381.f_2804 < 0)
						{
							Function_430(31, 0);
						}
						else
						{
							Function_430(26, 0);
						}
					}
				}
			}
			else
			{
				Local_381.f_2116 = Function_428(&Local_381 + 1988, Local_381.f_2124);
				bLocal_1259 = StackVal;
				Function_291(&Local_381);
				Local_381.f_2732++;
				Function_430(0, 0);
			}
			break;
		
		case 0x00000019:
			if ((Function_454(&iLocal_241) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_191(32768))
			{
				Function_229(&iLocal_241);
				Function_430(26, 0);
			}
			break;
		
		case 0x0000001A:
			iVar1 = (Local_381.f_2804 - 1);
			if (iVar1 > 0 || iVar1 <= 6)
			{
			}
			iVar2 = (*&Local_381 + 2748)[iVar1];
			if (iVar2 > 0 || iVar2 <= 6)
			{
			}
			bVar3 = iVar2 == Function_196(0);
			if (Function_389(&Local_381 + 12[iVar241]))
			{
				Function_405(&vLocal_246, &Local_381 + 12[iVar241]);
				if (Function_296(&Local_381, &iVar67) < 1 && !Function_191(128))
				{
					if (!Function_24((&Local_381 + 12[iVar241])->f_320, 1))
					{
						Function_290(&Local_381 + 12[iVar241]);
						SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/player/bet_request/reveal_cards");
					}
					if (!Function_191(2))
					{
						Function_289(iVar1, bVar3, iVar2);
					}
					Function_229(&iLocal_241);
					if (!Function_191(32768))
					{
						if (Function_400(&iLocal_372, 16))
						{
							Function_140("Poker_WinHelp", 9.0f, 1, 0, 2, 1, 0);
						}
					}
					if (Function_24((&Local_381 + 12[iVar241])->f_320, 1))
					{
						Function_288(&vLocal_246, &Local_381, (*&Local_381 + 2748)[(Local_381.f_2804 - 1)]);
						Function_229(&iLocal_241);
						Function_430(29, 0);
					}
					else
					{
						Function_430(28, 0);
					}
				}
				else
				{
					if ((IS_ACTION_NODE_PLAYING(&Local_381 + 12[iVar241], "sit_poker/Player/card_idle/idle") || IS_ACTION_NODE_PLAYING(&Local_381 + 12[iVar241], "sit_poker/Player/card_idle/StareCheck/stare")) || Function_191(32768))
					{
						if (Function_191(32768))
						{
							SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/card_idle/idle");
						}
						if (iVar2 == Function_196(1))
						{
							Function_88(424, 1, 0, 0);
						}
						Function_287(&Local_381 + 12[iVar241] + 72);
						Function_430(33, 0);
					}
					if (IS_ACTION_NODE_PLAYING(&Local_381 + 12[iVar241], "sit_poker/Player/look_at_cards/open_pre") || IS_ACTION_NODE_PLAYING(&Local_381 + 12[iVar241], "sit_poker/Player/look_at_cards/open_mid"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/look_at_cards/open_pst");
					}
				}
			}
			else
			{
				Function_229(&iLocal_241);
				Function_430(31, 0);
			}
			break;
		
		case 0x0000001E:
			iVar1 = (Local_381.f_2804 - 1);
			iVar2 = (*&Local_381 + 2748)[iVar1];
			iLocal_1290 = 6;
			if ((((&Local_381 + 12[iVar241])->f_192 != 1 && UNK_0xDA674AE0("@UI.ACCEPT", 1, 0)) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) || Local_1299 != 4)
			{
				if ((&Local_381 + 12[iVar241])->f_192 == 1)
				{
					Function_321(4, 0);
				}
				Local_1299 = 0;
				Function_286(&Local_381 + 12[iVar241]);
				Function_290(&Local_381 + 12[iVar241]);
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/player/bet_request/reveal_cards");
				Function_289(iVar1, bVar3, iVar2);
				Function_229(&iLocal_241);
				Function_189(0);
				Function_430(28, 0);
			}
			else if (Function_454(&iLocal_241) < 2,5f)
			{
				Function_189(0);
				Function_287(&Local_381 + 12[iVar241] + 72);
				Function_430(33, 0);
			}
			else if ((&Local_381 + 12[iVar241])->f_192 == 1)
			{
			}
			break;
		
		case 0x0000001B:
			if ((Function_454(&iLocal_241) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_191(32768))
			{
				Function_430(29, 0);
			}
			break;
		
		case 0x0000001C:
			if ((Function_454(&iLocal_241) < 0,8f && (IS_ACTION_NODE_PLAYING(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41], "sit_poker/Player/bet_request/reveal_cards/reveal_mid") || IS_ACTION_NODE_PLAYING(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41], "sit_poker/Player/join_game/idle"))) || Function_191(32768))
			{
				Function_288(&vLocal_246, &Local_381, (*&Local_381 + 2748)[(Local_381.f_2804 - 1)]);
				if (!Function_24((&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41])->f_320, 1))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41], "sit_poker/Player/bet_request/reveal_cards/reveal_pst");
				}
				Function_229(&iLocal_241);
				Function_430(29, 0);
			}
			break;
		
		case 0x0000001D:
			if ((Function_454(&iLocal_241) < 2.0f && (IS_ACTION_NODE_PLAYING(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41], "sit_poker/Player/bet_request/reveal_cards/reveal_idle") || IS_ACTION_NODE_PLAYING(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41], "sit_poker/Player/join_game/idle"))) || Function_191(32768))
			{
				Function_76(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41] + 320, 1);
				Function_287(&Local_381 + 12[(*&Local_381 + 2748)[(Local_381.f_2804 - 1)]41] + 72);
				Function_430(31, 0);
			}
			break;
		
		case 0x0000001F:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Local_381.f_2804 = (Local_381.f_2804 - 1);
			if (Local_381.f_2804 >= 0)
			{
				Function_430(26, 0);
			}
			else if (Local_381.f_3256 >= 1)
			{
				Function_295(StackVal, &vLocal_246, *(&Local_290 + 232));
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_SplitPot", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_241);
				if (!Function_191(32768))
				{
					if (Function_400(&iLocal_372, 14))
					{
						Function_140("Poker_SplitPotHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_430(32, 0);
			}
			else if (Local_381.f_3256 < 0)
			{
				Function_430(35, 0);
			}
			else
			{
				Function_430(33, 0);
			}
			break;
		
		case 0x00000020:
			if ((Function_454(&iLocal_241) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_191(32768))
			{
				Function_229(&iLocal_241);
				Function_430(33, 0);
			}
			break;
		
		case 0x00000021:
			iVar1 = (Local_381.f_3256 - 1);
			iVar2 = (*&Local_381 + 2976)[iVar1];
			if (((IS_ACTION_NODE_PLAYING_PARTIAL(&Local_381 + 12[iVar241], "sit_poker/Player/card_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/reveal_idle")) || IS_ACTION_NODE_PLAYING_PARTIAL(&Local_381 + 12[iVar241], "sit_poker/Player/join_game")) || Function_191(32768))
			{
				if (iVar2 == Function_196(0))
				{
					iLocal_250++;
				}
				if (Function_191(32768))
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					HUD_FADE_IN(1.0f, 1065353216);
				}
				bVar3 = iVar2 == Function_196(0);
				if (Local_381.f_3256 >= 0)
				{
					if (Function_191(16384))
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 20))
							{
								Function_140("Poker_KickerHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
					}
					(&Local_381 + 12[iVar241])->f_200 = ((&Local_381 + 12[iVar241])->f_200 + (*&Local_381 + 3200)[iVar1]);
					Local_381.f_2736 = (Local_381.f_2736 - (*&Local_381 + 3200)[iVar1]);
					if (iVar2 == Function_196(1))
					{
						DECOR_SET_INT(&Global_54076, "sc_poker_obj2_playerWon", true);
						Function_429(2048);
						PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
						if ((*&Local_381 + 3200)[iVar1] > 2000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(9))
							{
								AWARD_ACHIEVEMENT(9);
							}
						}
						if ((*&Local_381 + 3200)[iVar1] / 10) >= Function_66(413)
						{
							Function_51(413, ((*&Local_381 + 3200)[iVar1] / 10), 0);
						}
						Global_21684[(Global_21684[StackVal7].f_32 + 1.0f)7].f_32 = StackVal;
						if ((Function_296(&Local_381, &iVar68) < 1 && !Function_191(128)) && !Function_191(8))
						{
							switch ((*&Local_381 + 3032)[iVar1])
							{
								case 0x00000001:
									Function_88(414, 1, 0, 0);
									break;
								
								case 0x00000002:
									Function_88(415, 1, 0, 0);
									break;
								
								case 0x00000003:
									Function_88(416, 1, 0, 0);
									break;
								
								case 0x00000004:
									Function_88(417, 1, 0, 0);
									break;
								
								case 0x00000005:
									Function_88(418, 1, 0, 0);
									break;
								
								case 0x00000006:
									Function_88(420, 1, 0, 0);
									break;
								
								case 0x00000007:
									Function_88(419, 1, 0, 0);
									break;
								
								case 0x00000008:
									Function_88(421, 1, 0, 0);
									break;
								
								case 0x00000009:
									Function_88(422, 1, 0, 0);
									break;
								
								case 0x0000000A:
									Function_88(423, 1, 0, 0);
									break;
								}
						}
					}
					else if (Function_242(&Local_381))
					{
						if (Function_389(&Local_381 + 12[Function_196(1)41]) && Function_24((&Local_381 + 12[Function_196(1)41])->f_320, 1))
						{
							SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 493, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					bVar69 = RAND_INT_RANGE(false, 8);
					Function_405(&vLocal_246, &Local_381 + 12[iVar241]);
					if (Function_296(&Local_381, &iVar70) < 1 && !Function_191(128))
					{
						Function_283(iVar1, bVar3, iVar2);
						if (bVar69 < 2)
						{
							SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/win/big");
						}
						else if (bVar69 < 4)
						{
							SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/win/medium");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/win/small");
						}
					}
					else
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						if (bVar3)
						{
							Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iVar2, &Local_381) };
							PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_After_Muck", &Var4, Function_281((*&Local_381 + 3200)[iVar1]), 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_After_Muck_Self", Function_349(), Function_281((*&Local_381 + 3200)[iVar1]), 0, 0, 0, 2, 0, 0, 0);
						}
						if (bVar69 < 2)
						{
							if (iVar2 == Function_196(1))
							{
								SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/win/win1");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/win/big");
							}
						}
						else if (bVar69 < 4)
						{
							if (iVar2 == Function_196(1))
							{
								SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/win/win2");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/win/medium");
							}
						}
						else if (iVar2 == Function_196(1))
						{
							SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/win/win3");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar241], "sit_poker/Player/bet_request/reveal_cards/win/small");
						}
					}
					if (!bVar3)
					{
						Function_359(&Local_381, Function_196(0));
						if ((*&Local_381 + 3200)[iVar1] >= 0)
						{
							PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
						}
					}
					if (Local_290.f_264)
					{
						if (iVar2 == Function_196(1))
						{
							if (Function_398())
							{
								if (Function_397(&Local_381) != 4294967295)
								{
									DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "playerwins", true);
								}
							}
							else
							{
								DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "playerwins", true);
							}
						}
						else if (iVar2 == Function_397(&Local_381))
						{
							if (Function_398())
							{
								DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "landonwins", true);
							}
							else
							{
								DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "landonwins", true);
							}
						}
						else if (iVar2 == Function_399(&Local_381))
						{
							if (Function_398())
							{
								if (Function_397(&Local_381) != 4294967295)
								{
									DECOR_SET_BOOL(&Local_381 + 12[Function_397(&Local_381)41], "mullerwins", true);
								}
							}
							else
							{
								DECOR_SET_BOOL(&Local_381 + 12[Function_399(&Local_381)41], "mullerwins", true);
							}
						}
					}
				}
				else
				{
					LOG_ERROR("Table.iNumWinningPlayers <= 0");
				}
				Function_229(&iLocal_241);
				Function_430(34, 0);
			}
			break;
		
		case 0x00000022:
			if ((Function_454(&iLocal_241) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_FADED())
			{
				if ((!IS_AMBIENT_SPEECH_PLAYING(&Local_381 + 12[(*&Local_381 + 2976)[(Local_381.f_3256 - 1)]41]) && !IS_AMBIENT_SPEECH_PLAYING(&Local_381 + 12[Function_196(1)41])) || !Function_191(32768))
				{
					if (Local_290.f_264)
					{
						if (Local_290.f_244 <= 2 && iLocal_250 < 0)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_197(0);
							}
						}
						else
						{
							Function_430(35, 0);
						}
					}
					else
					{
						Function_430(35, 0);
					}
				}
			}
			break;
		
		case 0x00000023:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_245(128);
			Local_381.f_3256 = (Local_381.f_3256 - 1);
			if (Local_381.f_3256 >= 0)
			{
				Function_430(33, 0);
			}
			else
			{
				Function_430(36, 0);
				if (Function_191(32768) && !HUD_IS_FADED())
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			break;
		
		case 0x00000024:
			if (!HUD_IS_FADING())
			{
				if (Function_292(&Local_381))
				{
					Function_430(24, 0);
				}
				else
				{
					fVar71 = (StackVal / Global_21684[Global_21684[StackVal7].f_327].f_28);
					Function_280(428, (fVar71 * 100.0f), 0);
					Function_430(37, 0);
				}
			}
			break;
		
		case 0x00000025:
			PRINTSTRING("Checking for busted players");
			PRINTNL();
			Function_279(&Local_381);
			if (Local_381.f_3316 >= 0)
			{
				Function_430(38, 0);
			}
			else
			{
				Function_430(41, 1);
			}
			break;
		
		case 0x00000026:
			iVar1 = (*&Local_381 + 3260)[(Local_381.f_3316 - 1)];
			if (iVar1 != Function_196(1))
			{
				DECOR_SET_INT(&Global_54076, "sc_poker_obj2_npcBust", true);
			}
			if (Function_191(32768))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_405(&vLocal_246, &Local_381 + 12[iVar141]);
			SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[iVar141], "sit_poker/Player/bet_request/reveal_cards/loss");
			if (iVar1 == Function_196(1))
			{
				SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[iVar141], 494, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[iVar141], 290, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (!Function_191(2))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (iVar1 == Function_196(0))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Busts_Self", Function_349(), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iVar1, &Local_381) };
					if ((&Local_381 + 12[iVar141])->f_192 == 3)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Left_Table", &Var4, "", "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Busts", &Var4, "", "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			Function_229(&iLocal_241);
			Function_430(39, 0);
			break;
		
		case 0x00000027:
			if ((Function_454(&iLocal_241) < 2.0f || IS_ACTION_NODE_PLAYING(&Local_381 + 12[(*&Local_381 + 3260)[(Local_381.f_3316 - 1)]41], "sit_poker/Player/join_game/idle")) || HUD_IS_FADED())
			{
				if ((!IS_AMBIENT_SPEECH_PLAYING(&Local_381 + 12[(*&Local_381 + 3260)[(Local_381.f_3316 - 1)]41]) && !IS_AMBIENT_SPEECH_PLAYING(&Local_381 + 12[Function_196(1)41])) || !Function_191(32768))
				{
					if (Local_290.f_264)
					{
						if (*&Local_381 + 3260)[(Local_381.f_3316 - 1)] == Function_399(&Local_381)
						{
							Function_197(0);
						}
						else if ((*&Local_381 + 3260)[(Local_381.f_3316 - 1)] == Local_381.f_2120)
						{
							Function_197(1);
						}
					}
					if (IS_LOCAL_PLAYER(&Local_381 + 12[(*&Local_381 + 3260)[(Local_381.f_3316 - 1)]41]))
					{
						if (Local_290.f_248)
						{
							switch (Local_381.f_2112)
							{
								case 0x00000003:
									bVar0 = ROUND((IntToFloat(Local_381) * 0,2f));
									break;
								
								case 0x00000002:
									bVar0 = ROUND((IntToFloat(Local_381) * 0,3f));
									break;
								
								case 0x00000001:
									bVar0 = ROUND((IntToFloat(Local_381) * 0,5f));
									break;
							}
							Function_121(bVar0, 1, 1);
						}
						Function_88(412, 1, 0, 0);
						Function_237(&Local_381, (*&Local_381 + 3260)[(Local_381.f_3316 - 1)], 1);
						Function_197(1);
					}
					else
					{
						Function_237(&Local_381, (*&Local_381 + 3260)[(Local_381.f_3316 - 1)], 1);
					}
					Function_430(40, 0);
				}
			}
			break;
		
		case 0x00000028:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Local_381.f_3316 = (Local_381.f_3316 - 1);
			if (Local_381.f_3316 >= 0)
			{
				Function_430(38, 0);
			}
			else
			{
				if (Function_191(32768))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Function_430(41, 1);
			}
			break;
		
		case 0x00000029:
			if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj2_playerWon"))
			{
				DECOR_REMOVE(&Global_54076, "sc_poker_obj2_playerWon");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj2_npcBust"))
			{
				DECOR_REMOVE(&Global_54076, "sc_poker_obj2_npcBust");
			}
			if (HUD_IS_FADED() || !Function_191(32768))
			{
				Local_290.f_244++;
				Function_278(StackVal);
				NET_LOG(true, "Poker", "Round Complete", 0, 0, 0, 0);
				if ((Local_290.f_244 % 7) == 0)
				{
					AUDIO_RESET_SPEECH_HISTORY();
				}
				if (Local_381.f_2124 != Local_381.f_2120 && Local_290.f_248)
				{
					Local_381.f_4 = StackVal;
					Local_381.f_8 = StackVal * 2;
				}
				Function_274(&Local_381);
				bLocal_1259 = StackVal;
				Local_381.f_2732 = 0;
				Function_229(&iLocal_241);
				Function_390(&Local_381);
				if (Local_290.f_264 && Local_290.f_244 <= 2)
				{
					Function_197(0);
				}
				else if (Local_381.f_2112 >= 1)
				{
					NET_LOG(true, "Poker", "There are more players", 0, 0, 0, 0);
					Function_430(0, 1);
				}
				else if (!bLocal_3 || 0)
				{
					NET_LOG(true, "Poker", "There are no more players", 0, 0, 0, 0);
					if (Local_290.f_248)
					{
						bVar0 = ROUND((IntToFloat(Local_381) * 0,5f));
						Function_121(bVar0, 1, 1);
					}
					else
					{
						Function_121(((&Local_381 + 12[Function_196(1)41])->f_200 / 10), 1, 1);
					}
					Function_197(0);
				}
				else
				{
					Function_430(0, 1);
				}
			}
			break;
		
		case 0x0000002A:
			if (!Function_191(32768))
			{
				if (Function_400(&iLocal_372, 18))
				{
					HUD_CLEAR_HELP();
					Function_140("Poker_CheatPickCardHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			if (UNK_0xDA674AE0("@GENERIC.MOVE_LEFT", 1, 0))
			{
				PRINTSTRING("Picked Left Card");
				PRINTNL();
				iLocal_1281 = 1;
				if (Global_42825 == 3)
				{
					Function_372(&Local_1263);
				}
				else
				{
					Function_371(&Local_1263);
				}
				Local_1263.f_32 = 4.0f;
				Function_188();
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/cheat/pre");
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_CheatObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_430(43, 0);
			}
			else if (UNK_0xDA674AE0("@GENERIC.MOVE_RIGHT", 1, 0))
			{
				PRINTSTRING("Picked Right Card");
				PRINTNL();
				iLocal_1281 = 0;
				if (Global_42825 == 3)
				{
					Function_372(&Local_1263);
				}
				else
				{
					Function_371(&Local_1263);
				}
				Local_1263.f_32 = -4.0f;
				Function_188();
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/cheat/pre");
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_CheatObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_430(43, 0);
			}
			break;
		
		case 0x0000002B:
			Function_271(&Local_1263);
			if (Local_1263.f_56)
			{
				if (iLocal_1281 == 0)
				{
					Function_269(&Local_381, 0);
				}
				else if (iLocal_1281 == 1)
				{
					Function_269(&Local_381, 1);
				}
				UI_EXIT("Poker_CheatMeter");
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_188();
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/cheat/pst_to_look_at_cards");
				Function_88(427, 1, 0, 0);
				iLocal_1290 = 4;
				Function_430(10, 0);
			}
			else if (Local_1263.f_60)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_CaughtCheating", 4.0f, 1, 2, 0, 0, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/cheat/caught");
				UI_EXIT("Poker_CheatMeter");
				Function_229(&iLocal_241);
				Function_188();
				Function_268(&Local_381);
				Function_187();
				Function_405(&vLocal_246, &Local_381 + 12[Function_369(1)41]);
				iLocal_1290 = 3;
				if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 495, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_430(45, 0);
			}
			else if (Local_1263.f_68 < 0.0f)
			{
				iLocal_1288 = Function_373(&Local_381);
				bLocal_287 = &Local_381 + 12[iLocal_128841];
				if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_287, 292, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			break;
		
		case 0x0000002C:
			if (!Function_191(32768))
			{
				if (Function_400(&iLocal_372, 19))
				{
					HUD_CLEAR_HELP();
					Function_140("Poker_CheatDuelHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			Function_88(426, 1, 0, 0);
			Function_229(&iLocal_241);
			iLocal_1288 = Function_373(&Local_381);
			bLocal_287 = &Local_381 + 12[iLocal_128841];
			bVar72 = RAND_INT_RANGE(false, 100);
			if (bVar72 <= 25)
			{
				SAY_SINGLE_LINE_CONTEXT(&bLocal_287, 293, Function_192(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(&bLocal_287, 294, Function_192(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_287, "sit_poker/Player/cheat/see");
			Function_405(&vLocal_246, &bLocal_287);
			Function_229(&iLocal_241);
			iLocal_1290 = 3;
			Function_430(47, 0);
			break;
		
		case 0x0000002D:
			if (IS_ACTION_NODE_PLAYING(&Local_381 + 12[Function_369(1)41], "sit_poker/Player/join_game/idle") && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (!Function_191(32768))
				{
					if (Function_400(&iLocal_372, 19))
					{
						HUD_CLEAR_HELP();
						Function_140("Poker_CheatDuelHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_229(&iLocal_241);
				iLocal_1288 = Function_373(&Local_381);
				bLocal_287 = &Local_381 + 12[iLocal_128841];
				Function_88(426, 1, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_287, "sit_poker/Player/cheat/see");
				bVar72 = RAND_INT_RANGE(false, 100);
				if (bVar72 <= 25)
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_287, 293, Function_192(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_287, 294, Function_192(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_405(&vLocal_246, &bLocal_287);
				Function_229(&iLocal_241);
				iLocal_1290 = 3;
				Function_430(47, 0);
			}
			break;
		
		case 0x0000002E:
			if (!Function_191(32768))
			{
				if (Function_400(&iLocal_372, 17))
				{
					HUD_CLEAR_HELP();
					Function_140("Poker_CheatHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			bVar73 = Function_376(&Local_381);
			Function_271(&Local_1263);
			if ((Local_1263.f_56 && !Function_191(32)) && !bVar73)
			{
				if (Local_381.f_2092 == 4294967295)
				{
					Function_267(&Local_381);
				}
				else
				{
					Function_265(&Local_381);
				}
				UI_EXIT("Poker_CheatMeter");
				CANCEL_TIME_WARP(0);
				Function_229(&iLocal_241);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_188();
				Function_88(427, 1, 0, 0);
				iLocal_1290 = 1;
				Function_430(6, 0);
			}
			else if ((Local_1263.f_60 || bVar73) && !Function_191(32))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_CaughtCheating", 4.0f, 1, 2, 0, 0, 0, 0);
				UI_EXIT("Poker_CheatMeter");
				Function_229(&iLocal_241);
				Function_188();
				Function_268(&Local_381);
				Function_187();
				Function_430(44, 0);
			}
			break;
		
		case 0x0000002F:
			if (Function_454(&iLocal_241) < 3.0f)
			{
				if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !IS_AMBIENT_SPEECH_PLAYING(&bLocal_287))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				if (HUD_IS_FADED())
				{
					DESTROY_CAMERA(&vLocal_246);
					if (IS_ATTACHMENT_VALID(&bLocal_1261))
					{
						REMOVE_OBJECT_ATTACHMENT(&bLocal_1261);
					}
					STREAMING_UNLOAD_SCENE();
					Function_256(3, 32, &Global_54076, &bLocal_287, 0);
					Function_237(&Local_381, iLocal_1288, 1);
					Function_237(StackVal, &Local_381, 1);
					iLocal_1289 = 1;
					Function_241();
					Function_42(1);
					RESET_ANIM_SET_FOR_ACTOR(Function_192(), 0);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_287, 0);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					SET_ACTOR_INVULNERABILITY(Function_192(), false);
					HUD_ENABLE(1);
					END_CURRENT_MINIGAME();
					UI_EXIT("BetPanel");
					UI_EXIT("Scores");
					Function_188();
					Function_6(Function_192());
					GIVE_WEAPON_TO_ACTOR(&bLocal_287, 4, false, 1, 1);
					Function_430(48, 0);
				}
			}
			break;
		
		case 0x00000030:
			if (ACTOR_HAS_WEAPON(&bLocal_287, 4))
			{
				Local_255 = GET_PLAYER_ACTOR(0);
				*(&Local_255 + 8) = &bLocal_287;
				*(&Local_255 + 16) = *(&Local_290 + 268);
				*(&Local_255 + 28) = *(&Local_290 + 280);
				*(&Var79 + 64) = 6;
				*(&Var79 + 168) = 6;
				uVar74 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_255 + 28), *(&Local_255 + 16), StackVal);
				bVar76 = UNK_0x9C40E671(&uVar74);
				fVar77 = 10.0f;
				fVar78 = 15.0f;
				if (Function_254(&Var79, 4294967294))
				{
					fVar77 = Var79.f_48;
					fVar78 = Var79.f_52;
				}
				*(&Local_255 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_239, "Duel_StayOut", 2, *(&Local_255 + 28), Vector(0.0f, bVar76, 0.0f), Vector(fVar77, 10.0f, fVar78));
				Local_255.f_68 = 100;
				if (Function_396())
				{
					Local_255.f_80 = 0;
				}
				else
				{
					Local_255.f_80 = 1;
				}
				Local_255.f_84 = 4294967294;
				Function_235();
				Function_180();
				Function_429(8388608);
				uLocal_1286 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_255, 32, 0);
				Function_430(49, 0);
			}
			break;
		
		case 0x00000031:
			Function_252(&(Global_46914[0]), 0);
			if (!IS_SCRIPT_VALID(&uLocal_1286))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				switch (DECOR_GET_INT(GET_PLAYER_ACTOR(0), "iDuelResult"))
				{
					case 0x00001389:
						Function_430(50, 0);
						break;
					
					case 0x0000138A:
						Function_430(50, 0);
						break;
					
					case 0x0000138B:
						Function_430(50, 0);
						break;
					
					case 0x0000138D:
						Function_430(50, 0);
						break;
					
					default:
						break;
					}
			}
			break;
		
		case 0x00000032:
			Function_197(1);
			break;
		
		case 0x00000033:
			if (HUD_IS_FADED())
			{
				iVar21 = 0;
				while (iVar21 <= Local_381.f_1988)
				{
					if ((*&Local_381 + 1988)[iVar212])
					{
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&Local_381 + 12[StackVal41]);
					}
					iVar21++;
				}
				Function_430(bLocal_1285, 0);
			}
			break;
		
		case 0x00000034:
			if (!HUD_IS_FADING())
			{
				Function_245(64);
				Function_430(bLocal_1285, 0);
			}
			break;
		
		case 0x00000035:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
				{
					Function_321(5, 0);
					if (Local_290.f_248)
					{
						switch (Local_381.f_2112)
						{
							case 0x00000003:
								bVar0 = ROUND((IntToFloat(Local_381) * 0,2f));
								break;
							
							case 0x00000002:
								bVar0 = ROUND((IntToFloat(Local_381) * 0,3f));
								break;
							
							case 0x00000001:
								bVar0 = ROUND((IntToFloat(Local_381) * 0,5f));
								break;
						}
						Function_121(bVar0, 1, 1);
					}
					else
					{
						Function_121(((&Local_381 + 12[Function_196(1)41])->f_200 / 10), 1, 1);
					}
					bVar107 = Function_373(&Local_381);
					if (Function_242(&Local_381) && !HUD_IS_FADED())
					{
						if (Function_191(2048))
						{
							SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[bVar10741], 295, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_192()), "iPokerTalkingPlayerId", bVar107);
					Function_430(54, 0);
				}
				else
				{
					iLocal_1283 = bLocal_1285;
				}
				UI_EXIT("Poker_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame");
			}
			else if (HUD_IS_FADED())
			{
				iLocal_1283 = bLocal_1285;
			}
			break;
		
		case 0x00000036:
			bVar108 = 4294967295;
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "iPokerTalkingPlayerId"))
			{
				bVar108 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Function_192()), "iPokerTalkingPlayerId");
			}
			bVar44 = false;
			if (bVar108 != 4294967295)
			{
				if (IS_ANY_SPEECH_PLAYING(&Local_381 + 12[bVar10841]))
				{
					bVar44 = false;
				}
				else
				{
					bVar44 = true;
				}
			}
			else
			{
				bVar44 = true;
			}
			if (bVar44)
			{
				Function_197(1);
			}
			else if (bLocal_1285 == 6)
			{
				if (Local_381.f_2732 == 0)
				{
					Function_376(&Local_381);
				}
			}
			break;
	}
	if ((((((((((((1 && !Local_290.f_264) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && iLocal_0 == 3) && !iLocal_1283 != 45) && !iLocal_1283 != 44) && !iLocal_1283 != 47) && !iLocal_1283 != 48) && !iLocal_1283 != 49) && !iLocal_1283 != 50) && !iLocal_1283 != 53) && !iLocal_1283 != 54)
	{
		if (UNK_0x973F30EE("@UI.CANCELMINIGAME", 1, 1) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_192()), "bQuitMinigame"))
			{
				UI_ENTER("Poker_Quit_Confirmation_Popup");
			}
			bLocal_1285 = iLocal_1283;
			iLocal_1283 = 53;
		}
	}
	if (((!iLocal_1283 != 47 && !iLocal_1283 != 48) && !iLocal_1283 != 49) && !iLocal_1283 != 50)
	{
		Function_251(&Local_381);
	}
	Function_188();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_1290)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(4, "{@MINIGAME.SKIP_HELP}", "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				if (!Function_191(32768))
				{
					Function_247(1, "{@MINIGAME.SKIP_TO_PLAYER}", "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				}
				if (!Local_290.f_264)
				{
					Function_247(0, "{@UI.CANCELMINIGAME}", "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000004:
				Function_247(7, "{@MINIGAME.LOOK_AROUND} {@CAMERA.UP}{@CAMERA.DOWN}{@CAMERA.LEFT}{@CAMERA.RIGHT}", "Poker_LookAround", 1, 0, 0, 0, 0);
				Function_247(6, "{@MINIGAME.LOOK_AT_HAND}", "Poker_ZoomCardsButton", 1, 0, 0, 0, 0);
				if (Local_381.f_2732 >= 0)
				{
					Function_247(5, "{@MINIGAME.LOOK_AT_DEALER}", "Poker_ZoomBoardButton", 1, 0, 0, 0, 0);
				}
				if (Local_381.f_2092 != 4294967295)
				{
					Function_247(4, "{@POKER.CHEAT}", "Poker_CheatButton", 1, 0, 0, 0, 0);
				}
				if (!Local_290.f_264)
				{
					Function_247(0, "{@UI.CANCELMINIGAME}", "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000006:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(3, "{@MINIGAME.SKIP_HELP}", "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				Function_247(2, "{@MINIGAME.SKIP_TO_PLAYER}", "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_247(1, "{@UI.ACCEPT}", "Poker_ShowCards", 1, 0, 0, 0, 0);
				if (!Local_290.f_264)
				{
					Function_247(0, "{@UI.CANCELMINIGAME}", "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000005:
				if (iLocal_1283 == 42)
				{
					Function_247(3, "{@GENERIC.MOVE_LEFT}{@GENERIC.MOVE_RIGHT}", "Poker_ChooseCardButton", 1, 0, 0, 0, 0);
				}
				else
				{
					Function_247(3, "{@GENERIC.MOVE_LEFT}{@GENERIC.MOVE_RIGHT}", "Poker_BalanceButton", 1, 0, 0, 0, 0);
				}
				if (!Local_290.f_264)
				{
					Function_247(0, "{@UI.CANCELMINIGAME}", "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(3, "{@MINIGAME.SKIP_HELP}", "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				if ((((Local_381.f_2124 != Local_381.f_2120 && 1) && !Local_290.f_264) && Local_381.f_2732 != 0) && Global_42825 != 3)
				{
					Function_247(2, "{@POKER.CHEAT}", "Poker_CheatButton", 1, 0, 0, 0, 0);
				}
				Function_247(1, "{@MINIGAME.SKIP_TO_PLAYER}", "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				if (!Local_290.f_264)
				{
					Function_247(0, "{@UI.CANCELMINIGAME}", "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000002:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_247(3, "{@MINIGAME.SKIP_HELP}", "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				Function_247(2, "{@GENERIC.MOVE_LEFT}{@GENERIC.MOVE_RIGHT}", "Poker_BalanceButton", 1, 0, 0, 0, 0);
				Function_247(1, "{@MINIGAME.SKIP_TO_PLAYER}", "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				if (!Local_290.f_264)
				{
					Function_247(0, "{@UI.CANCELMINIGAME}", "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000003:
				break;
			}
	}
	return;
}

int Function_247(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11BBA / 72634
{
	if (!Function_250(uParam0, &uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&iParam4))
	{
		return Function_249(uParam0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
	}
	return Function_248(uParam0, &iParam2);
}

int Function_248(var uParam0, int iParam1) //Position: 0x11BFD / 72701
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11C0C / 72716
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_250(var uParam0, int iParam1) //Position: 0x11C4B / 72779
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

void Function_251(struct<2737> Param0) //Position: 0x11C5A / 72794
{
	UI_LABEL_SET_TEXT("nScores.s1", "Poker_PotLabel");
	UI_LABEL_SET_VALUE("nScores.s1", Param0.f_2736);
	return;
}

int Function_252(int iParam0, bool bParam1) //Position: 0x11C95 / 72853
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (&bParam1)
		{
			Function_253(iParam0, iVar1, &bParam1);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_253(iParam0, iVar1, &bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_253(iParam0, iVar1, 0);
			uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_253(iParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(&uVar0))
		{
			if (!IS_PROP_FIXED(&uVar0))
			{
				SET_PROP_FIXED(&uVar0, 1);
			}
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make poker chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

struct<8> Function_253(int iParam0, int iParam1, bool bParam2) //Position: 0x11D6A / 73066
{
	if (iParam0 == Global_46816[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_254(struct<61> Param0) //Position: 0x12316 / 74518
{
	if (iParam1 <= 0)
	{
		return Function_255(&Param0, iParam1);
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
		if (iParam1 == 4)
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

int Function_255(struct<61> Param0) //Position: 0x1509C / 86172
{
	if (iLocal_8 != 0)
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

var Function_256(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1593E / 88382
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_264(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_263(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_259(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_257();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_257() //Position: 0x15BF1 / 89073
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_258(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_258(var uParam0, int iParam1) //Position: 0x15C64 / 89188
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_259(bool bParam0) //Position: 0x15C9A / 89242
{
	if (Function_262(256))
	{
		return 0;
	}
	if (Function_262(262144))
	{
		return 0;
	}
	if (Function_261())
	{
		return 0;
	}
	if (!Function_262(1))
	{
		return 0;
	}
	if (!Function_262(4096))
	{
		return 0;
	}
	if (bParam0 && Function_260(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_262(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_260(int iParam0) //Position: 0x15D10 / 89360
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_261() //Position: 0x15D21 / 89377
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_262(int iParam0) //Position: 0x15D3A / 89402
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_263(int iParam0) //Position: 0x15D58 / 89432
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_264(int iParam0) //Position: 0x15D6E / 89454
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_265(int iParam0) //Position: 0x15D83 / 89475
{
	int iVar0;
	
	PRINTSTRING("SWAP_BOTTOM_CARD_WITH_HOLD_OUT_DEVICE");
	PRINTNL();
	iVar0 = &iParam0 + 2092;
	Function_266(&iParam0 + 2092);
	(&iParam0 + 2092) = &iParam0 + 2132[((&iParam0 + 2132)->f_428 - 1)];
	*(&iParam0 + 2132[((&iParam0 + 2132)->f_428 - 1)]) = &iVar0;
	Function_357(&iParam0 + 2092);
	return;
}

void Function_266(struct<5> Param0) //Position: 0x15E06 / 89606
{
	Param0 = 4294967295;
	Param0.f_4 = 4294967295;
	return;
}

void Function_267(int iParam0) //Position: 0x15E17 / 89623
{
	PRINTSTRING("INSERT_BOTTOM_CARD_INTO_HOLD_OUT_DEVICE");
	PRINTNL();
	*(&iParam0 + 2092) = &iParam0 + 2132[((&iParam0 + 2132)->f_428 - 1)];
	(&iParam0 + 2132)->f_428 = ((&iParam0 + 2132)->f_428 - 1);
	Function_357(&iParam0 + 2092);
	return;
}

void Function_268(struct<2093> Param0) //Position: 0x15E86 / 89734
{
	if (!Param0.f_2092 != 4294967295)
	{
		Param0.f_2092 = 4294967295;
		(&Param0 + 2092)->f_4 = 4294967295;
	}
	return;
}

void Function_269(int iParam0, int iParam1) //Position: 0x15EA8 / 89768
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	
	PRINTSTRING("SWAP_CARD_FROM_HAND_TO_HOLD_OUT_DEVICE");
	PRINTNL();
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	iVar2 = &iParam0 + 2092;
	Function_266(&iParam0 + 2092);
	iVar3 = Function_196(1);
	*(&iParam0 + 2092) = &iParam0 + 12[iVar341] + 72[iParam1];
	*(&iParam0 + 12[iVar341] + 72[iParam1]) = &iVar2;
	DESTROY_OBJECT(&iParam0 + 12[iVar341] + 72 + 64[iParam1]);
	Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&iVar2, 0) };
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*(&iParam0 + 12[iVar341] + 72 + 64[iParam1]) = CREATE_PROP_IN_LAYOUT(StackVal, &iLocal_239, Function_53(), &Var4, Var0, Vector(0.0f, 0.0f, 0.0f), 1);
	Function_270(&iParam0 + 12[iVar341], iParam1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_418(&iParam0 + 12[iVar341] + 72 + 64[iParam1], &iParam0 + 12[iVar341]);
	Function_357(&iParam0 + 2092);
	return;
}

void Function_270(int iParam0, int iParam1) //Position: 0x15FAF / 90031
{
	if (iParam1 == 0)
	{
		*(&iParam0 + 72 + 88[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 72 + 64[0], &iParam0, "wrist_l_attachment", "grab", 4294967295);
		Function_418(&iParam0 + 72 + 64[0], &iParam0);
	}
	else if (iParam1 == 1)
	{
		*(&iParam0 + 72 + 88[1]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 72 + 64[1], &iParam0, "arm_l_attachment", "grab", 4294967295);
		Function_418(&iParam0 + 72 + 64[1], &iParam0);
	}
	return;
}

void Function_271(struct<69> Param0) //Position: 0x1605A / 90202
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	bVar0 = GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1);
	if (FABS(bVar0) > 0,1f)
	{
		bVar0 = 0.0f;
	}
	if (bVar0 < 0.0f)
	{
		bVar0 = (StackVal * POW(StackVal, FABS(bVar0)));
	}
	else
	{
		bVar0 = (StackVal * POW(-StackVal, FABS(bVar0)));
	}
	Var1 = 1.0f;
	Var1.f_4 = (Param0.f_20 * Function_273(Param0.f_32, Param0.f_24, Param0.f_16));
	Var1.f_8 = 0.0f;
	VNORMALIZE(&Var1);
	*(&Param0 + 32) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(*(&Param0 + 44), *(&Param0 + 32), StackVal) * Vector(fLocal_248, fLocal_248, fLocal_248), StackVal, StackVal);
	if (Param0.f_32 > -10.0f)
	{
		Param0.f_32 = -10.0f;
		if (Param0.f_44 > 0.0f)
		{
			Function_75();
			*(&Param0 + 44) = Function_75();
		}
	}
	else if (Param0.f_32 < 10.0f)
	{
		Param0.f_32 = 10.0f;
		if (Param0.f_44 < 0.0f)
		{
			Function_75();
			*(&Param0 + 44) = Function_75();
		}
	}
	HUD_COUNTER_SET((Param0.f_32 * 100.0f));
	UI_SET_PROGRESS_BAR_VAL("Poker_CheatMeter", (((Param0.f_32 + 10.0f) / 20.0f) * 100.0f));
	if (FABS(Param0.f_32) < 8.0f)
	{
		Param0.f_68 = (Param0.f_68 + fLocal_248);
		if (Param0.f_68 < 1.0f)
		{
			Param0.f_60 = 1;
		}
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_R", 255);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_G", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_B", false);
	}
	else if (FABS(Param0.f_32) > 3.0f)
	{
		Param0.f_64 = (Param0.f_64 + fLocal_248);
		if (Param0.f_64 < 1,5f)
		{
			Param0.f_56 = 1;
		}
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_R", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_G", 255);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_B", false);
	}
	else
	{
		Param0.f_64 = 0.0f;
		Param0.f_68 = 0.0f;
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_R", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_G", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_B", 255);
	}
	Param0.f_32 = (Param0.f_32 + (Param0.f_28 * RAND_FLOAT_RANGE(-1.0f, 1.0f)));
	Var3 = Vector(StackVal, StackVal, StackVal) * Vector(FtoV((-Var1 * Param0)), StackVal, StackVal);
	Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var1, Var3, Var5) * Vector(bVar0, bVar0, bVar0), StackVal, StackVal), StackVal, StackVal);
	*(&Param0 + 44) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(Var5, *(&Param0 + 44), StackVal) * Vector(fLocal_248, fLocal_248, fLocal_248), StackVal, StackVal) / Vector(Param0.f_12, Param0.f_12, Param0.f_12), StackVal, StackVal);
	(&Param0 + 32)->f_4 = (Param0.f_20 * Function_272(Param0.f_32, Param0.f_24, Param0.f_16));
	if (Param0.f_44 < 0.0f)
	{
		*(&Param0 + 44) = Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(&Param0 + 44))), Var1, StackVal);
	}
	else
	{
		*(&Param0 + 44) = Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(&Param0 + 44))), -Vector(Var1, StackVal, StackVal), StackVal);
	}
	return;
}

float Function_272(float fParam0, float fParam1, float fParam2) //Position: 0x1643C / 91196
{
	float fVar0;
	
	if (fParam0 < 0.0f)
	{
		fVar0 = (fParam0 + fParam1);
	}
	else
	{
		fVar0 = (fParam0 - fParam1);
	}
	return (EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2))) / (fParam2 * SQRT((2.0f * 3,14159f))));
}

float Function_273(float fParam0, float fParam1, float fParam2) //Position: 0x16479 / 91257
{
	float fVar0;
	
	if (fParam0 < 0.0f)
	{
		fVar0 = (fParam0 + fParam1);
	}
	else
	{
		fVar0 = (fParam0 - fParam1);
	}
	return (((-fVar0 / (fParam2 * fParam2)) * EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2)))) / (fParam2 * SQRT((2.0f * 3,14159f))));
}

void Function_274(struct<2741> Param0) //Position: 0x164C0 / 91328
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uLocal_364))
	{
		DESTROY_OBJECT(&uLocal_364);
	}
	if (IS_OBJECT_VALID(&iLocal_366))
	{
		DESTROY_OBJECT(&iLocal_366);
	}
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			Function_238(&Param0 + 12[StackVal41] + 72);
			(&Param0 + 12[041])->f_216 = StackVal;
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[StackVal41], "sit_poker/Player/card_idle/idle");
		}
		iVar0++;
	}
	Function_238(&Param0 + 2564);
	iVar0 = 0;
	while (iVar0 <= Param0.f_2684)
	{
		if (IS_OBJECT_VALID(&Param0 + 2684[iVar0]))
		{
			DESTROY_OBJECT(&Param0 + 2684[iVar0]);
		}
		iVar0++;
	}
	Function_276(&Param0);
	Param0.f_2736 = 0;
	Param0.f_2740 = 0;
	Function_291(&Param0);
	Param0.f_2124 = Function_428(&Param0 + 1988, Param0.f_2124);
	Param0.f_2128 = Function_428(&Param0 + 1988, Param0.f_2124);
	UI_LABEL_SET_VALUE("nBetAmount", false);
	Function_251(&Param0);
	Function_275(&Param0 + 2132);
	return;
}

void Function_275(int iParam0) //Position: 0x16616 / 91670
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= iParam0.f_428)
	{
		bVar1 = RAND_INT_RANGE(false, (iParam0.f_428 - 1));
		iVar2 = &iParam0[bVar1];
		iParam0[bVar1] = &iParam0[iVar0];
		iParam0[iVar0] = &iVar2;
		iVar0++;
	}
	if (bLocal_1303)
	{
		iParam0[0] = 0;
		iParam0[0].f_4 = 1;
		iParam0[1] = 0;
		iParam0[1].f_4 = 2;
		iParam0[2] = 1;
		iParam0[2].f_4 = 2;
		iParam0[3] = 2;
		iParam0[3].f_4 = 2;
		iParam0[4] = 3;
		iParam0[4].f_4 = 2;
		iParam0[5] = 8;
		iParam0[5].f_4 = 2;
		iParam0[6] = 4;
		iParam0[6].f_4 = 2;
		iParam0[7] = 5;
		iParam0[7].f_4 = 2;
		iParam0[8] = 6;
		iParam0[8].f_4 = 2;
		iParam0[9] = 7;
		iParam0[9].f_4 = 2;
		iParam0[10] = 9;
		iParam0[10].f_4 = 2;
		iParam0[11] = 9;
		iParam0[11].f_4 = 2;
		iParam0[12] = 10;
		iParam0[12].f_4 = 2;
		iParam0[13] = 11;
		iParam0[13].f_4 = 2;
		iParam0[14] = 12;
		iParam0[14].f_4 = 2;
		iParam0[15] = 7;
		iParam0[15].f_4 = 0;
		iParam0[16] = 8;
		iParam0[16].f_4 = 0;
	}
	if (bLocal_1304)
	{
		iParam0[0] = 0;
		iParam0[0].f_4 = 1;
		iParam0[1] = 0;
		iParam0[1].f_4 = 2;
		iParam0[2] = 1;
		iParam0[2].f_4 = 2;
		iParam0[3] = 2;
		iParam0[3].f_4 = 2;
		iParam0[4] = 3;
		iParam0[4].f_4 = 2;
		iParam0[5] = 8;
		iParam0[5].f_4 = 1;
		iParam0[6] = 4;
		iParam0[6].f_4 = 2;
		iParam0[7] = 5;
		iParam0[7].f_4 = 2;
		iParam0[8] = 6;
		iParam0[8].f_4 = 2;
		iParam0[9] = 7;
		iParam0[9].f_4 = 2;
		iParam0[10] = 9;
		iParam0[10].f_4 = 2;
		iParam0[11] = 9;
		iParam0[11].f_4 = 1;
		iParam0[12] = 5;
		iParam0[12].f_4 = 1;
		iParam0[13] = 6;
		iParam0[13].f_4 = 1;
		iParam0[14] = 7;
		iParam0[14].f_4 = 1;
		iParam0[15] = 7;
		iParam0[15].f_4 = 0;
		iParam0[16] = 8;
		iParam0[16].f_4 = 0;
	}
	return;
}

void Function_276(int iParam0) //Position: 0x168B9 / 92345
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			Var3.f_4 = iVar0;
			Var3 = iVar1;
			if (!Function_277(&iParam0 + 2092, &Var3))
			{
				*(&iParam0 + 2132[iVar2]) = &Var3;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	(&iParam0 + 2132)->f_424 = 0;
	(&iParam0 + 2132)->f_428 = iVar2;
	return;
}

bool Function_277(struct<5> Param0) //Position: 0x1692B / 92459
{
	if (StackVal && StackVal != Param0 != Param1)
	{
		return 1;
	}
	return 0;
}

void Function_278(int iParam0) //Position: 0x16949 / 92489
{
	if (!Function_31(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16++;
	return;
}

void Function_279(struct<3317> Param0) //Position: 0x1696D / 92525
{
	int iVar0;
	
	Param0.f_3316 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if (StackVal || (&Param0 + 12[(&Param0 + 12[StackVal41])->f_200 >= 041])->f_192 != 3)
			{
				(*&Param0 + 3260)[Param0.f_3316] = StackVal;
				Param0.f_3316++;
			}
		}
		iVar0++;
	}
	return;
}

int Function_280(int iParam0, bool bParam1, bool bParam2) //Position: 0x169F8 / 92664
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_65(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_64(iParam0);
	if (&bParam2)
	{
		Function_52(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

var Function_281(bool bParam0) //Position: 0x16C65 / 93285
{
	bool bVar0;
	
	bVar0 = Function_282();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_282() //Position: 0x16C7F / 93311
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

void Function_283(int iParam0, bool bParam1, int iParam2) //Position: 0x16D3B / 93499
{
	char* cVar0[16];
	char* cVar4[16];
	struct<16> Var8;
	var uVar24;
	
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_285((*&Local_381 + 3088)[iParam0], &cVar0);
	if (((*&Local_381 + 3032)[iParam0] != 6 || (*&Local_381 + 3032)[iParam0] != 9) || (*&Local_381 + 3032)[iParam0] != 10)
	{
		Function_284((*&Local_381 + 3144)[iParam0], &cVar4);
	}
	else
	{
		Function_285((*&Local_381 + 3144)[iParam0], &cVar4);
	}
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iParam2, &Local_381) };
	uVar24 = Function_281((*&Local_381 + 3200)[iParam0]);
	switch ((*&Local_381 + 3032)[iParam0])
	{
		case 0x00000001:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_High", &Var8, &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_High_Self", Function_349(), &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			stradd(&cVar0, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Pair", &Var8, &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Pair_Self", Function_349(), &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			stradd(&cVar0, "P", 16);
			stradd(&cVar4, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_TwoPair", &Var8, &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_TwoPair_Self", Function_349(), &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			stradd(&cVar0, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Trips", &Var8, &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Trips_Self", Function_349(), &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				if ((*&Local_381 + 3088)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_An", &Var8, &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight", &Var8, &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_381 + 3088)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_Self_An", Function_349(), &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_Self", Function_349(), &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				if ((*&Local_381 + 3088)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_An", &Var8, &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush", &Var8, &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_381 + 3088)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_Self_An", Function_349(), &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_Self", Function_349(), &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			stradd(&cVar0, "P", 16);
			stradd(&cVar4, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FullHouse", &Var8, &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FullHouse_Self", Function_349(), &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			stradd(&cVar0, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FourKind", &Var8, &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FourKind_Self", Function_349(), &uVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				if ((*&Local_381 + 3088)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_An", &Var8, &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush", &Var8, &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_381 + 3088)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_Self_An", Function_349(), &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_Self", Function_349(), &uVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_RoyalFlush", &Var8, &uVar24, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_RoyalFlush_Self", Function_349(), &uVar24, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_284(char* cParam0, char* cParam1) //Position: 0x17390 / 95120
{
	strcpy(&cParam1, "", 16);
	switch (cParam0)
	{
		case 0x00000000:
			stradd(&cParam1, "Poker_Clubs", 16);
			break;
		
		case 0x00000001:
			stradd(&cParam1, "Poker_Diamonds", 16);
			break;
		
		case 0x00000002:
			stradd(&cParam1, "Poker_Hearts", 16);
			break;
		
		case 0x00000003:
			stradd(&cParam1, "Poker_Spades", 16);
			break;
	}
	return;
}

void Function_285(char* cParam0, char* cParam1) //Position: 0x1741A / 95258
{
	strcpy(&cParam1, "", 16);
	switch (cParam0)
	{
		case 0x00000000:
			stradd(&cParam1, "Poker_2", 16);
			break;
		
		case 0x00000001:
			stradd(&cParam1, "Poker_3", 16);
			break;
		
		case 0x00000002:
			stradd(&cParam1, "Poker_4", 16);
			break;
		
		case 0x00000003:
			stradd(&cParam1, "Poker_5", 16);
			break;
		
		case 0x00000004:
			stradd(&cParam1, "Poker_6", 16);
			break;
		
		case 0x00000005:
			stradd(&cParam1, "Poker_7", 16);
			break;
		
		case 0x00000006:
			stradd(&cParam1, "Poker_8", 16);
			break;
		
		case 0x00000007:
			stradd(&cParam1, "Poker_9", 16);
			break;
		
		case 0x00000008:
			stradd(&cParam1, "Poker_10", 16);
			break;
		
		case 0x00000009:
			stradd(&cParam1, "Poker_J", 16);
			break;
		
		case 0x0000000A:
			stradd(&cParam1, "Poker_Q", 16);
			break;
		
		case 0x0000000B:
			stradd(&cParam1, "Poker_K", 16);
			break;
		
		case 0x0000000C:
			stradd(&cParam1, "Poker_A", 16);
			break;
	}
	return;
}

void Function_286(int iParam0) //Position: 0x17568 / 95592
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	bool bVar6;
	struct<8> Var7;
	
	iVar1 = (&iParam0 + 72)->f_64;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (IS_OBJECT_VALID(&iParam0 + 72 + 64[iVar0]))
		{
			if (!GET_OBJECT_POSITION(&iParam0 + 72 + 64[iVar0], &Var2))
			{
			}
			if (!GET_OBJECT_ORIENTATION(&iParam0 + 72 + 64[iVar0], &Var4))
			{
			}
			bVar6 = IS_ATTACHMENT_VALID(&iParam0 + 72 + 88[iVar0]);
			if (bVar6)
			{
				REMOVE_OBJECT_ATTACHMENT(&iParam0 + 72 + 88[iVar0]);
			}
			DESTROY_OBJECT(&iParam0 + 72 + 64[iVar0]);
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&iParam0 + 72[iVar0], 0) };
			*(&iParam0 + 72 + 64[iVar0]) = CREATE_PROP_IN_LAYOUT(&iLocal_239, Function_53(), &Var7, Var2, Var4, 1);
			if (bVar6)
			{
				if (iVar0 == 0)
				{
					*(&iParam0 + 72 + 88[iVar0]) = ATTACH_OBJECTS_NO_DRV(StackVal, StackVal, &iParam0 + 72 + 64[iVar0], GET_OBJECT_FROM_ACTOR(&iParam0), "wrist_l_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				}
				else
				{
					*(&iParam0 + 72 + 88[iVar0]) = ATTACH_OBJECTS_NO_DRV(StackVal, StackVal, &iParam0 + 72 + 64[iVar0], GET_OBJECT_FROM_ACTOR(&iParam0), "arm_l_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				}
			}
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_287(struct<65> Param0) //Position: 0x176C4 / 95940
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_64)
	{
		if (IS_ATTACHMENT_VALID(&Param0 + 88[iVar0]))
		{
			REMOVE_OBJECT_ATTACHMENT(&Param0 + 88[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_288(Vector3 vParam0, int iParam1, int iParam2) //Position: 0x176FD / 95997
{
	struct<2> Var0;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	uVar2 = &iParam1 + 12[iParam241];
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	GET_POSITION(&uVar2, &Var0);
	GET_ACTOR_AXIS(&uVar2, &Var3, 2);
	GET_ACTOR_AXIS(&uVar2, &Var5, 0);
	Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var0, StackVal) * Vector(-0,7f, -0,7f, -0,7f), StackVal, StackVal);
	Var7 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var7, StackVal) * Vector(0,3f, 0,3f, 0,3f), StackVal, StackVal);
	Var7.f_4 = (StackVal + 1,25f);
	GET_OBJECT_NAMED_BONE_POSITION(&uVar2, "wrist_l", &Var9);
	Var9.f_4 = (StackVal - 0,1f);
	SET_CAMERA_POSITION(&vParam0, Var7);
	SET_CAMERA_TARGET_POSITION(&vParam0, Var9, 0);
	SET_CAMERA_FOV(&vParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&vParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&vParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var11);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var7, Var11, 1);
	return;
}

void Function_289(int iParam0, bool bParam1, int iParam2) //Position: 0x177EF / 96239
{
	char* cVar0[16];
	char* cVar4[16];
	struct<16> Var8;
	
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_285((*&Local_381 + 2864)[iParam0], &cVar0);
	if (((*&Local_381 + 2808)[iParam0] != 6 || (*&Local_381 + 2808)[iParam0] != 9) || (*&Local_381 + 2808)[iParam0] != 10)
	{
		Function_284((*&Local_381 + 2920)[iParam0], &cVar4);
	}
	else
	{
		Function_285((*&Local_381 + 2920)[iParam0], &cVar4);
	}
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iParam2, &Local_381) };
	switch ((*&Local_381 + 2808)[iParam0])
	{
		case 0x00000001:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_High", &Var8, &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_High_Self", Function_349(), &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			stradd(&cVar0, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Pair", &Var8, &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Pair_Self", Function_349(), &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			stradd(&cVar0, "P", 16);
			stradd(&cVar4, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_TwoPair", &Var8, &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_TwoPair_Self", Function_349(), &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			stradd(&cVar0, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Trips", &Var8, &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Trips_Self", Function_349(), &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				if ((*&Local_381 + 2864)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_An", &Var8, &cVar0, "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight", &Var8, &cVar0, "", "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_381 + 2864)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_Self_An", Function_349(), &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_Self", Function_349(), &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				if ((*&Local_381 + 2864)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_An", &Var8, &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush", &Var8, &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_381 + 2864)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_Self_An", Function_349(), &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_Self", Function_349(), &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			stradd(&cVar0, "P", 16);
			stradd(&cVar4, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FullHouse", &Var8, &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FullHouse_Self", Function_349(), &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			stradd(&cVar0, "P", 16);
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FourKind", &Var8, &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FourKind_Self", Function_349(), &cVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				if ((*&Local_381 + 2864)[iParam0] == 12)
				{
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush", &Var8, &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_381 + 2864)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush_Self_An", Function_349(), &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush_Self", Function_349(), &cVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_RoyalFlush", &Var8, &cVar4, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_RoyalFlush_Self", Function_349(), &cVar4, "", "", 0, 2, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_290(int iParam0) //Position: 0x17E1D / 97821
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	iVar0 = 0;
	while (iVar0 <= (&iParam0 + 72)->f_64)
	{
		if (!IS_ATTACHMENT_VALID(&iParam0 + 72 + 88[iVar0]))
		{
			Var1 = Vector(0.0f, 0.0f, 0.0f);
			Var3 = Vector(0.0f, 0.0f, 0.0f);
			if (iVar0 == 1)
			{
				Var3 = Vector(-0,0414f, 0,004f, 0,001f);
				Var1 = Vector(0.0f, -17,993f, 0.0f);
			}
			*(&iParam0 + 72 + 88[iVar0]) = ATTACH_OBJECTS_NO_DRV(&iParam0 + 72 + 64[iVar0], GET_OBJECT_FROM_ACTOR(&iParam0), "wrist_l_attachment", Var3, Var1);
			Function_418(&iParam0 + 72 + 64[iVar0], &iParam0);
		}
		iVar0++;
	}
	return;
}

void Function_291(struct<2745> Param0) //Position: 0x17ED2 / 98002
{
	int iVar0;
	
	Param0.f_2744 = 0;
	Param0.f_2740 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			(&Param0 + 12[041])->f_204 = StackVal;
			(&Param0 + 12[041])->f_208 = StackVal;
			Function_12(&Param0 + 12[StackVal41] + 320, 1);
		}
		iVar0++;
	}
	Param0.f_2128 = Function_428(&Param0 + 1988, Param0.f_2124);
	return;
}

bool Function_292(struct<3257> Param0) //Position: 0x17F65 / 98149
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_2736;
	iVar1 = 0;
	while (iVar1 <= Param0.f_3256)
	{
		iVar0 = (iVar0 - (*&Param0 + 3200)[iVar1]);
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar12])
		{
			if (Function_389(&Param0 + 12[StackVal41]))
			{
				if ((&Param0 + 12[StackVal41])->f_216 >= 0)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void Function_293(struct<3257> Param0) //Position: 0x17FFA / 98298
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	
	iVar1 = 0;
	iVar2 = 0;
	Param0.f_2804 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if (Function_389(&Param0 + 12[StackVal41]))
			{
				iVar3 = (&Param0 + 12[StackVal41])->f_216;
				if (iVar3 >= iVar1)
				{
					iVar2 = iVar1;
					iVar1 = iVar3;
					(*&Param0 + 2748)[0] = StackVal;
					Param0.f_2804 = 1;
				}
				else if (iVar3 == iVar1)
				{
					iVar1 = iVar3;
					(*&Param0 + 2748)[Param0.f_2804] = StackVal;
					Param0.f_2804++;
				}
				else if (iVar3 >= iVar2)
				{
					iVar2 = iVar3;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		bVar4 = Param0.f_2736;
	}
	else
	{
		iVar5 = 0;
		iVar0 = 0;
		while (iVar0 <= Param0.f_1988)
		{
			if ((*&Param0 + 1988)[iVar02])
			{
				if ((&Param0 + 12[StackVal41])->f_216 >= iVar2)
				{
					iVar5 = (StackVal + ((&Param0 + 12[iVar541])->f_216 - iVar2));
					(&Param0 + 12[iVar241])->f_216 = StackVal;
				}
			}
			iVar0++;
		}
		bVar4 = iVar5;
	}
	iVar7 = 0;
	PRINTSTRING("Eligible Players Are");
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= Param0.f_2804)
	{
		PRINTINT((*&Param0 + 2748)[iVar0]);
		PRINTSTRING(" ");
		if (Function_389(&Param0 + 12[(*&Param0 + 2748)[iVar0]41]))
		{
			iVar6 = Function_355(&Param0 + 12[(*&Param0 + 2748)[iVar0]41] + 72, &Param0 + 2564, &uVar8, &uVar9, &uVar10);
		}
		else
		{
			iVar6 = 0;
		}
		(*&Param0 + 2808)[iVar0] = uVar8;
		(*&Param0 + 2864)[iVar0] = uVar9;
		(*&Param0 + 2920)[iVar0] = uVar10;
		if (iVar6 >= iVar7)
		{
			iVar7 = iVar6;
			(*&Param0 + 2976)[0] = (*&Param0 + 2748)[iVar0];
			(*&Param0 + 3032)[0] = uVar8;
			(*&Param0 + 3088)[0] = uVar9;
			(*&Param0 + 3144)[0] = uVar10;
			Param0.f_3256 = 1;
		}
		else if (iVar6 == iVar7)
		{
			iVar7 = iVar6;
			(*&Param0 + 2976)[Param0.f_3256] = (*&Param0 + 2748)[iVar0];
			(*&Param0 + 3032)[Param0.f_3256] = uVar8;
			(*&Param0 + 3088)[Param0.f_3256] = uVar9;
			(*&Param0 + 3144)[Param0.f_3256] = uVar10;
			Param0.f_3256++;
		}
		iVar0++;
	}
	PRINTSTRING(" are eligible to win the pot valued at ");
	PRINTINT(bVar4);
	PRINTNL();
	PRINTSTRING("Player ");
	iVar11 = (bVar4 / Param0.f_3256);
	bVar12 = (bVar4 - (iVar11 * Param0.f_3256));
	iVar0 = 0;
	while (iVar0 <= Param0.f_3256)
	{
		PRINTINT((*&Param0 + 2976)[iVar0]);
		PRINTSTRING(" wins ");
		(*&Param0 + 3200)[iVar0] = (iVar11 + CEIL((TO_FLOAT(bVar12) / IntToFloat(Param0.f_3256))));
		PRINTINT((iVar11 + CEIL((TO_FLOAT(bVar12) / IntToFloat(Param0.f_3256)))));
		PRINTNL();
		bVar12 = (bVar12 - CEIL((TO_FLOAT(bVar12) / IntToFloat(Param0.f_3256))));
		iVar0++;
	}
	if ((Function_294(&Param0 + 3032, &Param0 + 3088, &Param0 + 3144, &Param0 + 2808, &Param0 + 2864, &Param0 + 2920, Param0.f_2804) && Local_381.f_3256 != 1) && Local_381.f_2804 < 1)
	{
		Function_429(16384);
	}
	else
	{
		Function_245(16384);
	}
	return;
}

int Function_294(var[] uParam0, var[] uParam1, var[] uParam2, var[] uParam3, var[] uParam4, var[] uParam5, int iParam6) //Position: 0x183DC / 99292
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	if (iParam6 >= 0)
	{
		iVar1 = uParam0[0];
		iVar2 = uParam1[0];
		iVar3 = uParam2[0];
		iVar4 = 0;
		while (iVar4 < (iParam6 - 1))
		{
			if ((iVar1 != uParam3[iVar4] && iVar2 != uParam4[iVar4]) && iVar3 != uParam5[iVar4])
			{
				iVar0++;
			}
			iVar4++;
		}
	}
	if (iVar0 >= 1)
	{
		return 1;
	}
	return 0;
}

void Function_295(Vector3 vParam0, struct<2> Param1) //Position: 0x18451 / 99409
{
	var uVar0;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	
	uVar2 = Function_192();
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	GET_POSITION(&uVar2, &uVar0);
	GET_ACTOR_AXIS(&uVar2, &Var3, 2);
	Var5 = Param1;
	Var5.f_4 = (StackVal + 2.0f);
	Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var5, StackVal) * Vector(1,5f, 1,5f, 1,5f), StackVal, StackVal);
	SET_CAMERA_POSITION(&vParam0, Var5);
	SET_CAMERA_TARGET_POSITION(&vParam0, Param1, 0);
	SET_CAMERA_FOV(&vParam0, 38.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&vParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&vParam0, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var7);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var5, Var7, 1);
	return;
}

int Function_296(struct<1989> Param0) //Position: 0x184FD / 99581
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if (Function_389(&Param0 + 12[StackVal41]))
			{
				iVar1++;
				iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_297(int iParam0) //Position: 0x18551 / 99665
{
	int iVar0;
	
	if (Local_381.f_2128 > 0 || Local_381.f_2128 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_298(int iParam0) //Position: 0x1858F / 99727
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar21;
	
	bVar0 = iParam0;
	Function_306(&iVar1);
	if (Function_305(&iVar1) != bVar0)
	{
		Function_304(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar5, "Next lockstep state same as last state (", 64);
			stradd(&cVar5, I2STR(bVar0), 64);
			stradd(&cVar5, "). May be fine.", 64);
			if (Function_24(Var2, 4))
			{
			}
		}
		bVar21 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar21), I2STR(bVar21), I2STR(bVar0), 0);
		Var2.f_12 = 0.0f;
		Function_301(bVar0);
		Function_300(&Var2, 0);
		Function_299(&Var2);
	}
	return;
}

void Function_299(vector3 vParam0) //Position: 0x1868A / 99978
{
	Global_123163 = { StackVal, StackVal, vParam0 };
	return;
}

void Function_300(int iParam0, bool bParam1) //Position: 0x1869B / 99995
{
	if (bParam1)
	{
		Function_76(&iParam0, 2);
	}
	else
	{
		Function_12(&iParam0, 2);
	}
	return;
}

void Function_301(bool bParam0) //Position: 0x186B7 / 100023
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_306(&uVar0);
		Function_304(&vVar1);
		vVar1.z = uVar0;
		Function_299(&vVar1);
	}
	Function_303(&uVar0, bParam0);
	Function_302(&uVar0);
	return;
}

void Function_302(int iParam0) //Position: 0x186E6 / 100070
{
	*(&Global_122919 + 184) = &iParam0;
	return;
}

void Function_303(var uParam0, int iParam1) //Position: 0x186F7 / 100087
{
	uParam0 = iParam1;
	return;
}

void Function_304(vector3 vParam0) //Position: 0x18703 / 100099
{
	vParam0 = { StackVal, StackVal, Global_123163 };
	return;
}

int Function_305(int iParam0) //Position: 0x18714 / 100116
{
	return iParam0;
}

void Function_306(int iParam0) //Position: 0x1871E / 100126
{
	iParam0 = &Global_122919 + 184;
	return;
}

var Function_307(bool bParam0) //Position: 0x1872F / 100143
{
	switch (bParam0)
	{
		case 0x00000000:
			return "START_OF_ROUND";
		
		case 0x00000001:
			return "SMALL_BLIND";
		
		case 0x00000002:
			return "WAIT_FOR_SMALL_BLIND";
		
		case 0x00000003:
			return "nBIG_BLIND";
		
		case 0x00000004:
			return "WAIT_FOR_BIG_BLIND";
		
		case 0x00000005:
			return "DEALER_ANIMATE";
		
		case 0x00000006:
			return "DELAY_FOR_DEAL";
		
		case 0x00000007:
			return "BRANCH_DECISION";
		
		case 0x00000008:
			return "PLAYER_DECISION";
		
		case 0x0000000A:
			return "WAIT_FOR_PLAYER_DECISION";
		
		case 0x0000000B:
			return "AI_DECISION";
		
		case 0x0000000C:
			return "REMOTE_PLAYER";
		
		case 0x0000000D:
			return "WAIT_FOR_REMOTE_PLAYER_DECISION";
		
		case 0x0000000E:
			return "WAIT_FOR_REMOTE_DEAL";
		
		case 0x0000000F:
			return "WAIT_FOR_TABLE_DEAL";
		
		case 0x00000010:
			return "PREP_FOR_ACKNOWLEDGE";
		
		case 0x00000011:
			return "WAIT_FOR_ACKNOWLEDGE";
		
		case 0x00000012:
			return "LOOK_AT_ALL_IN_PLAYER";
		
		case 0x00000013:
			return "ONE_FRAME_PAUSE";
		
		case 0x00000014:
			return "DELAY_FOR_ACTION_ANIMATION";
		
		case 0x00000015:
			return "DELAY_FOR_FOLD";
		
		case 0x00000016:
			return "DELAY_FOR_QUIT";
		
		case 0x00000017:
			return "INCREMENT_PLAYER";
		
		case 0x00000018:
			return "DISTRIBUTE_POT";
		
		case 0x00000019:
			return "DELAY_FOR_POT_MSG";
		
		case 0x0000001A:
			return "LOOK_AT_NEXT_PLAYER";
		
		case 0x0000001B:
			return "DELAY_FOR_MUCK";
		
		case 0x0000001C:
			return "LOOK_AT_NEXT_PLAYER_WAIT";
		
		case 0x0000001D:
			return "DELAY_FOR_CAMERA_ZOOM";
		
		case 0x0000001F:
			return "CHECK_FOR_MORE_PLAYERS";
		
		case 0x00000020:
			return "DELAY_FOR_SPLIT_POT_MSG";
		
		case 0x00000021:
			return "LOOK_AT_WINNER";
		
		case 0x00000022:
			return "LOOK_AT_WINNER_WAIT";
		
		case 0x00000023:
			return "CHECK_FOR_MORE_WINNERS";
		
		case 0x00000024:
			return "CHECK_FOR_MORE_SIDE_POTS";
		
		case 0x00000025:
			return "CHECK_FOR_BUSTED_PLAYERS";
		
		case 0x00000026:
			return "SHOW_BUSTED_PLAYER";
		
		case 0x00000027:
			return "DELAY_FOR_BUSTED_PLAYER";
		
		case 0x00000028:
			return "DECREASE_BUSTED_PLAYERS";
		
		case 0x00000029:
			return "END_OF_ROUND";
		
		case 0x0000002A:
			return "CHEAT_PICK_CARD";
		
		case 0x0000002B:
			return "CHEAT_SWAP_CARD";
		
		case 0x0000002C:
			return "CHEAT_CAUGHT_ON_DEAL";
		
		case 0x0000002D:
			return "CHEAT_CAUGHT_ON_TURN";
		
		case 0x0000002E:
			return "CHEAT_FROM_BOTTOM";
		
		case 0x0000002F:
			return "CHEAT_DUEL_SETUP";
		
		case 0x00000030:
			return "CHEAT_DUEL_SETUP_2";
		
		case 0x00000031:
			return "CHEAT_DUEL_DUELING";
		
		case 0x00000032:
			return "CHEAT_DUEL_CLEANUP";
		
		case 0x00000033:
			return "PKR_SKIP_TO_WINNER";
		
		case 0x00000034:
			return "PKR_SKIP_TO_WINNER_ENDING";
		
		default:
	}
	return "UNKNOWN";
}

bool Function_308(bool bParam0, bool bParam1, float fParam2) //Position: 0x18CE3 / 101603
{
	struct<17> Var0;
	
	if (&bParam1)
	{
		Function_298(bParam0);
	}
	Function_304(&Var0);
	fVar3 = 0.0f;
	iVar4 = 0;
	if ((fVar3 - Var0.f_12) <= &fParam2)
	{
		Var0.f_12 = fVar3;
		iVar4 = 1;
		Function_299(&Var0);
	}
	if (Function_320(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_319(&Var0, 0);
		Function_299(&Var0);
		Function_318();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_317(bParam0, iVar4, &uVar5))
	{
		if (Function_316())
		{
			if (!Function_315(&Var0))
			{
				Var6 = bParam0;
				Var6.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var6, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var6)));
				Function_300(&Var0, 1);
				Function_299(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar3;
			Function_299(&Var0);
		}
		else
		{
			fVar7 = (fVar3 - Var0.f_16);
			if (fVar7 <= 60.0f || (uVar5 && fVar7 <= 25.0f))
			{
				if (Function_309(bParam0))
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
		Function_299(&Var0);
	}
	return 0;
}

bool Function_309(int iParam0) //Position: 0x18F36 / 102198
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_313(iVar0))
		{
			iVar1 = Function_310(iVar0);
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

int Function_310(int iParam0) //Position: 0x18F79 / 102265
{
	int iVar0;
	
	Function_312(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_306(&iVar0);
	}
	else
	{
		Function_311(&iVar0, iParam0);
	}
	return Function_305(&iVar0);
}

void Function_311(int iParam0, int iParam1) //Position: 0x18FA0 / 102304
{
	iParam0 = &Global_120101[iParam188] + 184;
	return;
}

void Function_312(int iParam0) //Position: 0x18FB5 / 102325
{
	Function_303(&iParam0, 4294967286);
	return;
}

bool Function_313(int iParam0) //Position: 0x18FC4 / 102340
{
	return Function_314(iParam0);
}

int Function_314(bool bParam0) //Position: 0x18FCF / 102351
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

bool Function_315(bool bParam0) //Position: 0x19070 / 102512
{
	return Function_24(bParam0, 2);
}

bool Function_316() //Position: 0x1907E / 102526
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	return 0;
}

bool Function_317(int iParam0, var uParam1, bool bParam2) //Position: 0x19092 / 102546
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
		if (Function_313(iVar0))
		{
			iVar1 = Function_310(iVar0);
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

void Function_318() //Position: 0x190E4 / 102628
{
	Function_301(4294967286);
	return;
}

void Function_319(int iParam0, bool bParam1) //Position: 0x190F0 / 102640
{
	if (bParam1)
	{
		Function_76(&iParam0, 1);
	}
	else
	{
		Function_12(&iParam0, 1);
	}
	return;
}

bool Function_320(int iParam0) //Position: 0x1910C / 102668
{
	return Function_24(iParam0, 1);
}

void Function_321(int iParam0, int iParam1) //Position: 0x1911A / 102682
{
	struct<5> Var0;
	
	return;
	Var0 = iParam0;
	Var0.f_4 = iParam1;
	NET_SCRIPTMSG_SEND(3, 28, &Var0, 2, 0);
	switch (Var0)
	{
		case 0x00000000:
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000002:
			Function_415(8, 1);
			break;
		
		case 0x00000001:
			Function_415(8, 1);
			break;
	}
	return;
}

int Function_322(struct<2741> Param0) //Position: 0x1917F / 102783
{
	int iVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	struct<16> Var12;
	struct<16> Var28;
	bool bVar44;
	float fVar45;
	
	iVar0 = (&Param0 + 12[iParam141])->f_204;
	if (Param0.f_2732 == 0)
	{
		fVar1 = Function_338(&Param0 + 12[Function_369(1)41] + 72);
	}
	else
	{
		fVar1 = (&Param0 + 12[Function_369(1)41])->f_324;
	}
	bVar2 = Function_337(&Param0, Param0.f_2124, (&Param0 + 12[iParam141])->f_196);
	bVar3 = (&Param0 + 12[Function_369(1)41])->f_200;
	bVar4 = ((TO_FLOAT(bVar3) - IntToFloat(Param0.f_2740)) / IntToFloat(bVar3));
	if (bVar4 > 0.0f)
	{
		bVar4 = 0.0f;
	}
	PRINTSTRING("Player is in position ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	switch (Param0.f_2732)
	{
		case 0x00000000:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0,7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0,3f));
			if (fVar6 < 0,6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0,5f * bVar2) + (0,5f * fVar1));
			}
			else
			{
				bVar5 = ((0,3f * bVar2) + (0,7f * fVar1));
			}
			if (Local_290.f_264)
			{
				bVar7 = Function_326(&Param0, Function_196(1), Function_369(1));
				if (bVar7)
				{
				}
			}
			break;
		
		case 0x00000001:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0,7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0,3f));
			if (fVar6 < 0,6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0,6f * bVar2) + (0,4f * fVar1));
			}
			else
			{
				bVar5 = ((0,15f * bVar2) + (0,85f * fVar1));
			}
			if (Local_290.f_264)
			{
				bVar7 = Function_326(&Param0, Function_196(1), Function_369(1));
				if (bVar7)
				{
				}
			}
			break;
		
		case 0x00000002:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0,7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0,3f));
			if (fVar6 < 0,6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0,5f * bVar2) + (0,5f * fVar1));
			}
			else
			{
				bVar5 = ((0,1f * bVar2) + (0,9f * fVar1));
			}
			if (Local_290.f_264)
			{
				bVar7 = Function_326(&Param0, Function_196(1), Function_369(1));
				if (bVar7)
				{
				}
			}
			break;
		
		case 0x00000003:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0,7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0,3f));
			if (fVar6 < 0,6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0,5f * bVar2) + (0,5f * fVar1));
			}
			else
			{
				bVar5 = fVar1;
			}
			if (Local_290.f_264)
			{
				bVar7 = Function_326(&Param0, Function_196(1), Function_369(1));
				if (bVar7)
				{
				}
				if (Function_369(1) == Function_399(&Param0))
				{
					bVar8 = true;
				}
			}
			break;
	}
	if (Local_290.f_264)
	{
		if ((!bVar8 && Function_368(&Param0) >= 2) && Function_369(1) != Function_399(&Param0))
		{
			if ((&Param0 + 12[Function_399(&Param0)41] + 72)->f_112 > 0)
			{
				bVar8 = true;
			}
		}
	}
	PRINTSTRING("WeightedStrength = ");
	PRINTFLOAT(bVar5);
	PRINTNL();
	if (Function_368(&Param0) < 1 || Param0.f_2740 < 0)
	{
		if (((bVar7 || bVar8) || (&Param0 + 12[Function_196(1)41])->f_200 != 0) && Local_290.f_264)
		{
			Function_325(&Param0, iParam1, &iParam2);
		}
		else if (bVar5 > (*&Param0 + 3320)[Param0.f_2112])
		{
			if ((Param0.f_2740 - iVar0) == 0)
			{
				Function_360(&Param0, iParam1, 0, 0, 0);
				if (Function_191(32768))
				{
					iParam2 = 23;
				}
				else
				{
					iParam2 = 20;
				}
			}
			else
			{
				bVar11 = RAND_INT_RANGE(false, ((100 * (&Param0 + 12[iParam141])->f_216) / Function_348(&Local_381)));
				if (bVar11 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/fold");
				}
				Function_363(&Local_381 + 12[Function_369(1)41]);
				if (!Function_191(2))
				{
					Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iParam1, &Local_381) };
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var12, "", "", "", 0, 2, 0, 0, 0);
				}
				if (!Function_191(32768))
				{
					if (Function_400(&iLocal_372, 2))
					{
						Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Local_290.f_264)
				{
					Function_324(&Param0, "folds");
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_196(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 507, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_396())
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 288, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 508, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_191(32768))
				{
					iParam2 = 23;
				}
				else
				{
					iParam2 = 21;
				}
			}
		}
		else if (bVar5 > (*&Param0 + 3384)[Param0.f_2112])
		{
			if (Param0.f_2740 - iVar0) <= ((&Param0 + 12[iParam141])->f_200 / 2)
			{
				if ((Param0.f_2740 - iVar0) == 0)
				{
					fVar9 = RAND_FLOAT_RANGE(0,1f, 0,7f);
					bVar10 = CEIL((IntToFloat(Param0.f_2736) * fVar9));
					if (StackVal <= bVar10)
					{
						bVar10 = StackVal;
					}
					if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
					{
						if (Local_290.f_264)
						{
							Function_325(&Param0, iParam1, &iParam2);
						}
						else
						{
							bVar10 = (&Param0 + 12[iParam141])->f_200;
						}
					}
					if ((Function_326(&Param0, Function_196(1), Function_369(1)) && Local_290.f_264) && bVar10 <= (&Param0 + 12[Function_196(1)41])->f_200)
					{
						Function_325(&Param0, iParam1, &iParam2);
					}
					else
					{
						Function_360(&Param0, iParam1, bVar10, 0, 0);
					}
				}
				else
				{
					bVar10 = (Param0.f_2740 - iVar0);
					if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
					{
						if (Local_290.f_264)
						{
							Function_325(&Param0, iParam1, &iParam2);
						}
						else
						{
							bVar10 = (&Param0 + 12[iParam141])->f_200;
						}
					}
					if ((Function_326(&Param0, Function_196(1), Function_369(1)) && Local_290.f_264) && bVar10 <= (&Param0 + 12[Function_196(1)41])->f_200)
					{
						Function_325(&Param0, iParam1, &iParam2);
					}
					else
					{
						Function_360(&Param0, Function_369(1), bVar10, 0, 0);
					}
				}
				if (Function_191(32768))
				{
					iParam2 = 23;
				}
				else
				{
					iParam2 = 20;
				}
			}
			else if ((Param0.f_2740 - iVar0) == 0)
			{
				Function_360(&Param0, iParam1, 0, 0, 0);
				if (Function_191(32768))
				{
					iParam2 = 23;
				}
				else
				{
					iParam2 = 20;
				}
			}
			else
			{
				if (!Function_191(2))
				{
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iParam1, &Local_381) };
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var28, "", "", "", 0, 2, 0, 0, 0);
				}
				bVar44 = RAND_INT_RANGE(false, ((100 * (&Param0 + 12[iParam141])->f_216) / Function_348(&Local_381)));
				if (bVar44 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/fold");
				}
				Function_363(&Local_381 + 12[Function_369(1)41]);
				if (!Function_191(32768))
				{
					if (Function_400(&iLocal_372, 2))
					{
						Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Local_290.f_264)
				{
					Function_324(&Param0, "folds");
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_196(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 507, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_396())
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 288, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 508, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_191(32768))
				{
					iParam2 = 23;
				}
				else
				{
					iParam2 = 21;
				}
			}
		}
		else
		{
			if (bVar2 < 0.0f)
			{
				fVar45 = RAND_FLOAT_RANGE(0.0f, bVar2);
			}
			else
			{
				fVar45 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			}
			if (Param0.f_2732 != 3 && bVar2 != 1.0f)
			{
				fVar45 = 1.0f;
			}
			if (fVar45 < 0,4f)
			{
				if (Param0.f_2740 >= 0)
				{
					fVar9 = RAND_FLOAT_RANGE(1.0f, 2,5f);
					bVar10 = CEIL((IntToFloat((Param0.f_2740 - iVar0)) * fVar9));
				}
				else
				{
					fVar9 = RAND_FLOAT_RANGE(0,2f, 1,1f);
					bVar10 = CEIL((IntToFloat(Param0.f_2736) * fVar9));
				}
				if (bVar10 <= Function_323(&Param0, iParam1, bVar10))
				{
					bVar10 = Function_323(&Param0, iParam1, bVar10);
				}
				if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
				{
					bVar10 = (&Param0 + 12[iParam141])->f_200;
				}
				if (Function_368(&Param0) >= 1 && bVar10 < (Param0.f_2740 - iVar0))
				{
					bVar10 = (Param0.f_2740 - iVar0);
					if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
					{
						if (Local_290.f_264)
						{
							Function_325(&Param0, iParam1, &iParam2);
						}
						else
						{
							bVar10 = (&Param0 + 12[iParam141])->f_200;
						}
					}
				}
				if ((Function_326(&Param0, Function_196(1), Function_369(1)) && Local_290.f_264) && bVar10 < (&Param0 + 12[Function_196(1)41])->f_200)
				{
					Function_325(&Param0, iParam1, &iParam2);
				}
				else
				{
					Function_360(&Param0, Function_369(1), bVar10, 0, 0);
				}
			}
			else
			{
				PRINTSTRING("fPosition is equal to ");
				PRINTFLOAT(bVar2);
				PRINTNL();
				if (Param0.f_2740 == 0)
				{
					PRINTSTRING("AI checks due to SLOW PLAY");
					PRINTNL();
					Function_360(&Param0, Function_369(1), 0, 0, 0);
				}
				else if (bVar5 > (*&Param0 + 3448)[Param0.f_2112])
				{
					PRINTSTRING("AI calls due to SLOW PLAY");
					PRINTNL();
					bVar10 = (Param0.f_2740 - iVar0);
					if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
					{
						if (Local_290.f_264)
						{
							Function_325(&Param0, iParam1, &iParam2);
						}
						else
						{
							bVar10 = (&Param0 + 12[iParam141])->f_200;
						}
					}
					if ((Function_326(&Param0, Function_196(1), Function_369(1)) && bVar10 <= (&Param0 + 12[Function_196(1)41])->f_200) && Local_290.f_264)
					{
						Function_325(&Param0, iParam1, &iParam2);
					}
					else
					{
						Function_360(&Param0, Function_369(1), bVar10, 0, 0);
					}
				}
				else
				{
					PRINTSTRING("AI raises due to SLOW PLAY (it's that strong)");
					PRINTNL();
					fVar9 = RAND_FLOAT_RANGE(2.0f, 5.0f);
					bVar10 = CEIL((IntToFloat((Param0.f_2740 - iVar0)) * fVar9));
					if (bVar10 <= Function_323(&Param0, iParam1, bVar10))
					{
						bVar10 = Function_323(&Param0, iParam1, bVar10);
					}
					if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
					{
						if (Local_290.f_264)
						{
							Function_325(&Param0, iParam1, &iParam2);
						}
						else
						{
							bVar10 = (&Param0 + 12[iParam141])->f_200;
						}
					}
					if (Function_368(&Param0) >= 1 && bVar10 < (Param0.f_2740 - iVar0))
					{
						bVar10 = (Param0.f_2740 - iVar0);
						if (bVar10 >= (&Param0 + 12[iParam141])->f_200)
						{
							if (Local_290.f_264)
							{
								Function_325(&Param0, iParam1, &iParam2);
							}
							else
							{
								bVar10 = (&Param0 + 12[iParam141])->f_200;
							}
						}
					}
					if ((Function_326(&Param0, Function_196(1), Function_369(1)) && Local_290.f_264) && bVar10 <= (&Param0 + 12[Function_196(1)41])->f_200)
					{
						Function_325(&Param0, iParam1, &iParam2);
					}
					else
					{
						Function_360(&Param0, Function_369(1), bVar10, 0, 0);
					}
				}
			}
			if (Function_191(32768))
			{
				iParam2 = 23;
			}
			else
			{
				iParam2 = 20;
			}
		}
	}
	else
	{
		Function_360(&Param0, Function_369(1), 0, 0, 0);
		if (Function_191(32768))
		{
			iParam2 = 23;
		}
		else
		{
			iParam2 = 20;
		}
	}
	Function_229(&iLocal_241);
	return 1;
}

int Function_323(struct<2741> Param0) //Position: 0x19E5D / 106077
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = (&Param0 + 12[iParam141])->f_204;
	iVar1 = Param0.f_2740;
	iVar2 = (&Param0 + 12[Function_297(1)41])->f_208;
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			if (bParam2 == 0)
			{
				return 0;
			}
			return StackVal;
		}
		iVar3 = (iVar1 - iVar0);
		iVar4 = (bParam2 - iVar3);
		if (StackVal > iVar4 * 2 && iVar4 < 0)
		{
			return StackVal * 2;
		}
		return iVar3;
	}
	if (((bParam2 - (iVar1 - iVar0)) % iVar2) != 0)
	{
		return (iVar2 + (iVar1 - iVar0));
	}
	return bParam2;
}

void Function_324(int iParam0, int iParam1) //Position: 0x19EF5 / 106229
{
	if (Function_369(1) == Function_397(&iParam0))
	{
		DECOR_SET_BOOL(&iParam0 + 12[Function_369(1)41], &iParam1, true);
	}
	else if (Function_369(1) == Function_399(&iParam0))
	{
		DECOR_SET_BOOL(&iParam0 + 12[Function_369(1)41], &iParam1, true);
	}
	return;
}

void Function_325(int iParam0, int iParam1, int iParam2) //Position: 0x19F40 / 106304
{
	struct<16> Var0;
	
	SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 12[iParam141], "sit_poker/player/bet_request/fold");
	Function_363(&Local_381 + 12[Function_369(1)41]);
	if (!Function_191(2))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iParam1, &Local_381) };
		PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var0, "", "", "", 0, 2, 0, 0, 0);
	}
	if (!Function_191(32768))
	{
		if (Function_400(&iLocal_372, 2))
		{
			Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
		}
	}
	if (Local_290.f_264)
	{
		Function_324(&iParam0, "folds");
	}
	else if (Function_242(&Local_381) && !HUD_IS_FADED())
	{
		if (iParam1 == Function_196(1))
		{
			SAY_SINGLE_LINE_CONTEXT(&iParam0 + 12[iParam141], 507, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (Function_396())
		{
			SAY_SINGLE_LINE_CONTEXT(&iParam0 + 12[iParam141], 288, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(&iParam0 + 12[Function_196(1)41], 508, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
	}
	if (Function_191(32768))
	{
		iParam2 = 23;
	}
	else
	{
		iParam2 = 21;
	}
	return;
}

bool Function_326(int iParam0, int iParam1, int iParam2) //Position: 0x1A099 / 106649
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;
	struct<54> Var32;
	int iVar86;
	var uVar87;
	bool bVar88;
	bool bVar89;
	var uVar90;
	bool bVar91;
	bool bVar92;
	bool bVar93;
	bool bVar94;
	char* cVar95[64];
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 12[iParam241] + 72) };
	Var15 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 12[iParam141] + 72) };
	iVar30 = 0;
	while (iVar30 <= (&iParam0 + 2564)->f_112)
	{
		Function_335(&Var15, &iParam0 + 2564[iVar30]);
		Function_335(&Var0, &iParam0 + 2564[iVar30]);
		iVar30++;
	}
	iVar31 = (5 - (&iParam0 + 2564)->f_112);
	Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 2132) };
	iVar30 = 0;
	while (iVar30 <= iVar31)
	{
		iVar86 = Function_334(&Var32);
		Function_335(&Var15, &iVar86);
		Function_335(&Var0, &iVar86);
		iVar30++;
	}
	PRINTSTRING("Player Hand is ");
	Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15);
	PRINTSTRING("Opponent Hand is ");
	Function_366(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
	bVar93 = Function_327(&Var15, &uVar87, &bVar88, &bVar89);
	bVar94 = Function_327(&Var0, &uVar90, &bVar91, &bVar92);
	strcpy(&cVar95, "Player's Strength: ", 64);
	stradd(&cVar95, INT_TO_STRING(bVar93), 64);
	strcpy(&cVar95, "Opponent's Strength: ", 64);
	stradd(&cVar95, INT_TO_STRING(bVar94), 64);
	strcpy(&cVar95, "Player Hand Value 1: ", 64);
	stradd(&cVar95, INT_TO_STRING(bVar88), 64);
	strcpy(&cVar95, "Player Hand Value 2: ", 64);
	stradd(&cVar95, INT_TO_STRING(bVar89), 64);
	strcpy(&cVar95, "Opponent Hand Value 1: ", 64);
	stradd(&cVar95, INT_TO_STRING(bVar91), 64);
	strcpy(&cVar95, "Opponent Hand Value 2: ", 64);
	stradd(&cVar95, INT_TO_STRING(bVar92), 64);
	if (bVar93 <= bVar94)
	{
		return 1;
	}
	return 0;
}

var Function_327(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1A27F / 107135
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[6];
	var uVar15[13];
	vector3 vVar29[6];
	int iVar48;
	int iVar49;
	var uVar50[4];
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	
	bVar0 = false;
	bVar1 = false;
	if (uParam0.f_112 > 5)
	{
		iVar2 = 5;
	}
	else
	{
		iVar2 = uParam0.f_112;
	}
	*(&vVar29 + 8) = 2;
	*(&vVar29 + 8 + 24) = 2;
	*(&vVar29 + 8 + 24 + 24) = 2;
	*(&vVar29 + 8 + 24 + 24 + 24) = 2;
	*(&vVar29 + 8 + 24 + 24 + 24 + 24) = 2;
	*(&vVar29 + 8 + 24 + 24 + 24 + 24 + 24) = 2;
	iVar48 = 0;
	iVar55 = 0;
	iVar4 = 0;
	while (iVar4 <= uParam0.f_112)
	{
		iVar6 = uParam0[iVar4];
		iVar7 = StackVal;
		uVar15[iVar6]++;
		iVar8[uVar15[iVar6]]++;
		if (!uVar15[iVar6] != 0)
		{
			iVar8[(uVar15[iVar6] - 1)] = (iVar8[(uVar15[iVar6] - 1)] - 1);
			uVar50[iVar7]++;
			if (uVar50[iVar7] > 5)
			{
				bVar1 = true;
				iVar55 = iVar7;
			}
		}
		iVar4++;
	}
	if (!uVar15[12] != 0)
	{
		iVar49 = 1;
	}
	else
	{
		iVar49 = 0;
	}
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		vVar29[iVar33][0] = 13;
		vVar29[iVar33][1] = 13;
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 13)
	{
		if (!uVar15[iVar4] != 0)
		{
			iVar49++;
			if (iVar49 > 5)
			{
				bVar0 = true;
				iVar48 = iVar4;
			}
		}
		else
		{
			iVar49 = 0;
		}
		iVar5 = uVar15[iVar4];
		if (!iVar5 != 0)
		{
			vVar29[iVar53][1] = vVar29[iVar53][0];
			vVar29[iVar53][0] = iVar4;
		}
		iVar4++;
	}
	iVar57 = (13 * 13) * 13 * 13 * 13;
	if (!iVar8[5] != 0)
	{
		iVar56 = (11 * iVar57);
		iVar56 = (iVar56 + vVar29[53][0]);
		return iVar56;
	}
	if (bVar0 && bVar1)
	{
		iVar58 = Function_333(&uParam0, iVar55);
		if (iVar58 >= 0)
		{
			if (iVar58 == 12)
			{
				uParam1 = 10;
				uParam2 = iVar58;
				uParam3 = iVar55;
			}
			else
			{
				uParam1 = 9;
				uParam2 = iVar58;
				uParam3 = iVar55;
			}
			iVar56 = (9 * iVar57);
			iVar56 = (iVar56 + iVar58);
			return iVar56;
		}
	}
	if (!iVar8[4] != 0)
	{
		uParam1 = 8;
		uParam2 = vVar29[43][0];
		iVar56 = (8 * iVar57);
		iVar56 = (iVar56 + vVar29[43][0] * 13);
		vVar29[43][1] = 13;
		iVar56 = (iVar56 + Function_332(&uVar15, 1, &(vVar29[43])));
	}
	else if (iVar8[3] > 2)
	{
		uParam1 = 7;
		iVar56 = (7 * iVar57);
		uParam2 = vVar29[33][0];
		uParam3 = vVar29[33][1];
		iVar56 = (iVar56 + vVar29[33][0] * 13);
		iVar56 = (iVar56 + vVar29[33][1]);
	}
	else if (iVar8[3] != 1 && !iVar8[2] != 0)
	{
		uParam1 = 7;
		iVar56 = (7 * iVar57);
		uParam2 = vVar29[33][0];
		uParam3 = vVar29[23][0];
		iVar56 = (iVar56 + vVar29[33][0] * 13);
		iVar56 = (iVar56 + vVar29[23][0]);
	}
	else if (bVar1)
	{
		uParam1 = 6;
		uParam2 = Function_331(&uParam0, iVar55);
		uParam3 = iVar55;
		iVar56 = (6 * iVar57);
		iVar56 = (iVar56 + Function_329(&uParam0, 5, iVar55));
	}
	else if (bVar0)
	{
		uParam1 = 5;
		uParam2 = iVar48;
		iVar56 = (5 * iVar57);
		iVar56 = (iVar56 + iVar48);
	}
	else if (iVar8[3] == 1)
	{
		uParam1 = 4;
		iVar56 = (4 * iVar57);
		uParam2 = vVar29[33][0];
		iVar56 = (iVar56 + vVar29[33][0] * 13 * 13);
		iVar56 = (iVar56 + Function_332(&uVar15, (iVar2 - 3), &(vVar29[33])));
	}
	else if (iVar8[2] > 2)
	{
		uParam1 = 3;
		iVar56 = (3 * iVar57);
		uParam2 = vVar29[23][0];
		uParam3 = vVar29[23][1];
		iVar56 = (iVar56 + vVar29[23][0] * 13 * 13);
		iVar56 = (iVar56 + vVar29[23][1] * 13);
		iVar56 = (iVar56 + Function_332(&uVar15, (iVar2 - 4), &(vVar29[23])));
	}
	else if (iVar8[2] == 1)
	{
		uParam1 = 2;
		iVar56 = (2 * iVar57);
		uParam2 = vVar29[23][0];
		iVar56 = (iVar56 + vVar29[23][0] * 13 * 13 * 13);
		iVar56 = (iVar56 + Function_332(&uVar15, (iVar2 - 2), &(vVar29[23])));
	}
	else
	{
		uParam1 = 1;
		uParam2 = Function_328(&uParam0);
		iVar56 = (1 * iVar57);
		iVar56 = (iVar56 + Function_332(&uVar15, iVar2, &(vVar29[23])));
	}
	return iVar56;
}

var Function_328(int iParam0) //Position: 0x1A6F5 / 108277
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 <= iParam0.f_112)
	{
		if (iParam0[iVar0] >= iVar1)
		{
			iVar1 = iParam0[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

int Function_329(var uParam0, int iParam1, int iParam2) //Position: 0x1A72B / 108331
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[13];
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 <= uParam0.f_112)
	{
		iVar2 = StackVal;
		if (iVar2 == iParam2)
		{
			iVar3 = uParam0[iVar0];
			iVar4[iVar3] = 1;
		}
		iVar0++;
	}
	iVar0 = 12;
	while (iParam1 >= 0)
	{
		while (iVar4[iVar0] == 0)
		{
			iVar0 = (iVar0 - 1);
		}
		iParam1 = (iParam1 - 1);
		iVar1 = (iVar1 + (Function_330(13, iParam1) * iVar0));
		iVar0 = (iVar0 - 1);
	}
	return iVar1;
}

int Function_330(int iParam0, int iParam1) //Position: 0x1A7AF / 108463
{
	int iVar0;
	
	iVar0 = 1;
	while (iParam1 >= 0)
	{
		iVar0 = (iVar0 * iParam0);
		iParam1 = (iParam1 - 1);
	}
	return iVar0;
}

var Function_331(var uParam0, int iParam1) //Position: 0x1A7D0 / 108496
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 <= uParam0.f_112)
	{
		if (StackVal && uParam0[iVar0] < iVar1 != iParam1)
		{
			iVar1 = uParam0[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

int Function_332(var[] uParam0, int iParam1, int[] iParam2) //Position: 0x1A814 / 108564
{
	int iVar0;
	int iVar1;
	
	iVar0 = 12;
	iVar1 = 0;
	while (iParam1 >= 0)
	{
		while ((uParam0[iVar0] != 0 || iVar0 != iParam2[0]) || iVar0 != iParam2[1])
		{
			iVar0 = (iVar0 - 1);
		}
		iParam1 = (iParam1 - 1);
		iVar1 = (iVar1 + (Function_330(13, iParam1) * iVar0));
		iVar0 = (iVar0 - 1);
	}
	return iVar1;
}

var Function_333(var uParam0, int iParam1) //Position: 0x1A870 / 108656
{
	int iVar0[13];
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar14 = 0;
	while (iVar14 <= uParam0.f_112)
	{
		iVar15 = StackVal;
		iVar16 = uParam0[iVar14];
		if (iVar15 == iParam1)
		{
			iVar0[iVar16] = 1;
		}
		iVar14++;
	}
	iVar17 = 0;
	if (iVar0[12])
	{
		iVar17 = 1;
	}
	iVar18 = 0;
	iVar14 = 0;
	while (iVar14 <= 13)
	{
		if (iVar0[iVar14])
		{
			iVar17++;
			if (iVar17 > 5)
			{
				iVar18 = iVar14;
			}
		}
		else
		{
			iVar17 = 0;
		}
		iVar14++;
	}
	return iVar18;
}

int Function_334(var uParam0) //Position: 0x1A8FA / 108794
{
	uParam0.f_424++;
	return &(uParam0[(uParam0.f_424 - 1)]);
}

void Function_335(struct<113> Param0) //Position: 0x1A91C / 108828
{
	if (Function_336(&Param0, &iParam1))
	{
		LOG_ERROR("Trying to add a card already in hand");
	}
	else
	{
		Param0[Param0.f_112] = &iParam1;
		Param0.f_112++;
	}
	return;
}

bool Function_336(var uParam0, struct<5> Param1) //Position: 0x1A977 / 108919
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= uParam0.f_112)
	{
		if (StackVal && StackVal != uParam0[iVar0] != Param1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_337(int iParam0, int iParam1, int iParam2) //Position: 0x1A9B2 / 108978
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = Function_296(&iParam0, &uVar0);
	if (iParam2 == iParam1)
	{
		return 1.0f;
	}
	iVar2 = iParam2;
	iVar3 = 0;
	while (!iVar2 != iParam1)
	{
		iVar2 = Function_428(&iParam0 + 1988, iVar2);
		if (Function_389(&iParam0 + 12[StackVal41]))
		{
			iVar3++;
		}
	}
	return ((1.0f / IntToFloat(iVar1)) * IntToFloat((iVar1 - iVar3)));
}

var Function_338(int[] iParam0) //Position: 0x1AA16 / 109078
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	
	bVar0 = 0.0f;
	iVar1 = &iParam0[0];
	iVar2 = &iParam0[1];
	if (iVar1 >= iVar2)
	{
		Var3 = &iVar1;
		Var4 = &iVar2;
	}
	else
	{
		Var3 = &iVar2;
		Var4 = &iVar1;
	}
	switch (Var3)
	{
		case 0x0000000C:
			bVar0 = 10.0f;
			break;
		
		case 0x0000000B:
			bVar0 = 8.0f;
			break;
		
		case 0x0000000A:
			bVar0 = 7.0f;
			break;
		
		case 0x00000009:
			bVar0 = 6.0f;
			break;
		
		default:
			bVar0 = (TO_FLOAT(Var3 + 2) / 2.0f);
			break;
	}
	iVar5 = ((Var3 - Var4) - 1);
	if (Var3 == Var4)
	{
		bVar0 = (bVar0 * 2.0f);
		if (bVar0 > 5.0f)
		{
			bVar0 = 5.0f;
		}
	}
	else
	{
		switch (iVar5)
		{
			case 0x00000000:
				bVar0 = bVar0;
				break;
			
			case 0x00000001:
				bVar0 = (bVar0 - 1.0f);
				break;
			
			case 0x00000002:
				bVar0 = (bVar0 - 2.0f);
				break;
			
			case 0x00000003:
				bVar0 = (bVar0 - 4.0f);
				break;
			
			default:
				bVar0 = (bVar0 - 5.0f);
				break;
			}
	}
	if (StackVal == StackVal)
	{
		bVar0 = (bVar0 + 2.0f);
	}
	if (iVar5 > 2 && Var3 >= 9)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	iVar6 = (12 - CEIL(bVar0));
	if (iVar6 <= 1)
	{
		iVar6 = 1;
	}
	else if (iVar6 >= 12)
	{
		iVar6 = 12;
	}
	fVar7[0] = 1.0f;
	fVar7[1] = 1.0f;
	fVar7[2] = 0,95f;
	fVar7[3] = 0,9f;
	fVar7[4] = 0,85f;
	fVar7[5] = 0,8f;
	fVar7[6] = 0,75f;
	fVar7[7] = 0,7f;
	fVar7[8] = 0,55f;
	fVar7[9] = 0,4f;
	fVar7[10] = 0,3f;
	fVar7[11] = 0,2f;
	fVar7[12] = 0,1f;
	return fVar7[iVar6];
}

int Function_339(var uParam0, struct<2> Param1) //Position: 0x1ABDF / 109535
{
	if (StackVal && Function_340((StackVal && Function_340(Function_340(StackVal, &uParam0, "elbow_r_attachment", Param1), &uParam0, "hip_r_attachment", Param1)), &uParam0, "hip_l_attachment", Param1))
	{
		return 1;
	}
	return 0;
}

int Function_340(var uParam0, var uParam1, struct<2> Param2) //Position: 0x1AC49 / 109641
{
	struct<2> Var0;
	
	GET_OBJECT_NAMED_BONE_POSITION(&uParam0, &uParam1, &Var0);
	if (Function_79(StackVal, StackVal, Var0, Param2) > 0,06f)
	{
		return 1;
	}
	return 0;
}

bool Function_341(int iParam0) //Position: 0x1AC79 / 109689
{
	if (IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/bet_allin") || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/bet_allin_B"))
	{
		return 1;
	}
	return 0;
}

bool Function_342(int iParam0) //Position: 0x1ACE9 / 109801
{
	if ((((((((IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/R/bet") || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/G/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/B/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/R2/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/G2/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/B2/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/R3/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/G3/bet")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/B3/bet"))
	{
		return 1;
	}
	return 0;
}

void Function_343(var uParam0, struct<2> Param1) //Position: 0x1AE89 / 110217
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uParam0), &Var2);
		if (ACTOR_HAS_ANIM_SET(&uParam0, "sit_poker_hillb"))
		{
			Param1 = Vector(0,179f, 0,8f, -0,037f);
			uParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, -155.0f, 0.0f), Var2, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&uParam0, "sit_poker_gped"))
		{
			Param1 = Vector(0,168f, 0,8f, -0,012f);
			uParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, -154,44f, 0.0f), Var2, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&uParam0, "sit_poker_oldm"))
		{
			Param1 = Vector(0,205f, 0,8f, 0,015f);
			uParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, -148.0f, 0.0f), Var2, StackVal);
		}
		else
		{
			Param1 = Vector(0,171f, 0,8f, -0,046f);
			uParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, -152.0f, 0.0f), Var2, StackVal);
		}
		UNK_0xF76F2BB3(&Param1, &Var2, 0, 4);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param1, StackVal);
	}
	return;
}

void Function_344() //Position: 0x1AFB6 / 110518
{
	if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
	{
		switch (iLocal_1260)
		{
			case 0x00000000:
				if (UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) && IS_ACTION_NODE_PLAYING(Function_192(), "sit_poker/Player/look_at_cards/open_mid"))
				{
					Function_347(&vLocal_246, &Local_381, Function_369(1));
					iLocal_1260 = 2;
				}
				else if (UNK_0x062C5047("@MINIGAME.LOOK_AT_DEALER", 1, 0))
				{
					if (Local_381.f_2732 >= 0)
					{
						Function_395(&vLocal_246, &Local_381, 0);
						iLocal_1260 = 3;
					}
				}
				else if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vLocal_246) || CAMERA_GET_CURRENT_TRANSITION_TYPE(&vLocal_246) != 1)
				{
					Function_346(&vLocal_246, &Local_381, Function_369(1), 0);
				}
				break;
			
			case 0x00000003:
				if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_DEALER", 1, 0) || iLocal_1283 == 10)
				{
					Function_345(&vLocal_246, &Local_381, Function_369(1), 1);
					Function_358();
					iLocal_1260 = 0;
				}
				break;
			
			case 0x00000002:
				if (!UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0) || iLocal_1283 == 10)
				{
					Function_345(&vLocal_246, &Local_381, Function_369(1), 1);
					Function_358();
					iLocal_1260 = 0;
				}
				break;
			}
	}
	return;
}

void Function_345(Vector3 vParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B14D / 110925
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	uVar0 = &iParam1 + 12[iParam241];
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return;
	}
	GET_POSITION(&uVar0, &Var1);
	GET_ACTOR_AXIS(&uVar0, &Var3, 2);
	GET_ACTOR_AXIS(&uVar0, &Var5, 0);
	Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var7.f_4 = (StackVal + 1,4f);
	Var7 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var7, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	Var9 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var3, Var1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var9.f_4 = (StackVal + 0,7f);
	Var9 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var9, StackVal) * Vector(-0,6f, -0,6f, -0,6f), StackVal, StackVal);
	SET_CAMERA_POSITION(&vParam0, Var7);
	SET_CAMERA_TARGET_POSITION(&vParam0, Var9, 0);
	SET_CAMERA_FOV(&vParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&vParam0, 0))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&vParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&vParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var11);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var7, Var11, 1);
}

void Function_346(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B266 / 111206
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
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
	float fVar21;
	float fVar22;
	struct<2> Var23;
	struct<2> Var25;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	uVar0 = &iParam1 + 12[iParam241];
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return;
	}
	GET_POSITION(&uVar0, &Var1);
	GET_ACTOR_AXIS(&uVar0, &Var3, 2);
	GET_ACTOR_AXIS(&uVar0, &Var5, 0);
	Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal);
	Var7.f_4 = (StackVal + 1,4f);
	Var7 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var7, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	fVar9 = 0.0f;
	fVar10 = 0.0f;
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
		fVar9 = Global_140720;
	}
	else
	{
		fVar9 = GET_ANALOGUE_ACTION("@CAMERA.MOVE_X", 1);
	}
	fVar11 = (fVar9 * 2.0f);
	fVar12 = (fVar10 * 1.0f);
	fVar13 = (-1.0f * fLocal_237);
	fVar14 = (fVar13 + fVar11);
	fVar15 = (-0,5f * fLocal_238);
	fVar16 = (fVar15 + fVar12);
	fVar17 = ((-fLocal_235 * 10.0f) * fLocal_248);
	fVar18 = ((-fLocal_236 * 5.0f) * fLocal_248);
	fVar19 = ((fLocal_235 + (fVar14 / 1.0f)) + fVar17);
	fVar20 = ((fLocal_236 + (fVar16 / 1.0f)) + fVar18);
	fVar21 = (fLocal_237 + (fVar19 * fLocal_248));
	fVar22 = (fLocal_238 + (fVar20 * fLocal_248));
	if (fVar21 > -1.0f)
	{
		fVar19 = 0.0f;
		fVar21 = -1.0f;
	}
	else if (fVar21 < 1.0f)
	{
		fVar19 = 0.0f;
		fVar21 = 1.0f;
	}
	if (fVar22 > -1.0f)
	{
		fVar20 = 0.0f;
		fVar22 = -1.0f;
	}
	else if (fVar22 < 1.0f)
	{
		fVar20 = 0.0f;
		fVar22 = 1.0f;
	}
	fLocal_235 = fVar19;
	fLocal_237 = fVar21;
	fLocal_236 = fVar20;
	fLocal_238 = fVar22;
	Var23 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var5, Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var3, Var1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal), StackVal) * Vector(fVar21, fVar21, fVar21), StackVal, StackVal);
	Var23 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var23, StackVal) * Vector(-0,6f, -0,6f, -0,6f), StackVal, StackVal);
	Var23.f_4 = (StackVal + 0,7f);
	if (fVar21 > 0.0f)
	{
		Var23.f_4 = (StackVal + (-fVar21 * 0,3f));
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var7);
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
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var25);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var7, Var25, 1);
}

void Function_347(var uParam0, int iParam1, int iParam2) //Position: 0x1B518 / 111896
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	struct<2> Var12;
	struct<2> Var14;
	struct<2> Var16;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	if (!IS_OBJECT_VALID(&iParam1 + 12[iParam241] + 72 + 64[0]))
	{
		return;
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1 + 12[iParam241]), &Var0);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR(&iParam1 + 12[iParam241]), &Var4, 0);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR(&iParam1 + 12[iParam241]), &Var6, 1);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR(&iParam1 + 12[iParam241]), &Var2, 2);
	Var8 = Var0;
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var8, StackVal) * Vector(-0,17f, -0,17f, -0,17f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var8, StackVal) * Vector(0,95f, 0,95f, 0,95f), StackVal, StackVal);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var8, StackVal) * Vector(0,5f, 0,5f, 0,5f), StackVal, StackVal);
	GET_OBJECT_POSITION(&iParam1 + 12[iParam241] + 72 + 64[0], &Var12);
	GET_OBJECT_POSITION(&iParam1 + 12[iParam241] + 72 + 64[1], &Var14);
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Var14, Var12, StackVal);
	Var10 = Vector(Var10, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var10.f_4 = (StackVal - 0,01f);
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var10, StackVal) * Vector(-0,04f, -0,04f, -0,04f), StackVal, StackVal);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&uParam0);
	}
	SET_CAMERA_POSITION(&uParam0, Var8);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var10, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var16);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var8, Var16, 1);
	return;
}

int Function_348(struct<1989> Param0) //Position: 0x1B6B7 / 112311
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if ((&Param0 + 12[StackVal41])->f_200 >= 0)
			{
				iVar1 = (StackVal + (StackVal + (&Param0 + 12[(&Param0 + 12[iVar141])->f_20041])->f_216));
			}
		}
		iVar0++;
	}
	return iVar1;
}

var Function_349() //Position: 0x1B72C / 112428
{
	UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	return "Generic_DBuffer32_0";
}

int Function_350(struct<2741> Param0) //Position: 0x1B76E / 112494
{
	if ((&Param0 + 12[Function_369(1)41])->f_200 < 0 && (Function_368(&Param0) < 1 || Param0.f_2740 < 0))
	{
		return 1;
	}
	return 0;
}

int Function_351(vector3 vParam0) //Position: 0x1B79E / 112542
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	return 0;
	bVar0 = (30.0f - Function_454(&vParam0));
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
				Function_140("Minigame_Timeout_Warning", 5.0f, 1, 0, 2, 1, 0);
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

float Function_352() //Position: 0x1B8EC / 112876
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

int Function_353(struct<2741> Param0) //Position: 0x1B8FB / 112891
{
	int iVar0;
	
	if (bParam1 < (Param0.f_2740 - (&Param0 + 12[Function_369(1)41])->f_204))
	{
		bParam1 = (Param0.f_2740 - (&Param0 + 12[Function_369(1)41])->f_204);
	}
	while (bParam1 <= Function_323(&Param0, Function_369(1), bParam1))
	{
		if (bParam2)
		{
			bParam1++;
		}
		else
		{
			bParam1 = (bParam1 - 1);
		}
	}
	iVar0 = Function_354(&Param0, Function_369(1));
	if (bParam1 > iVar0)
	{
		bParam1 = iVar0;
	}
	return bParam1;
}

var Function_354(int iParam0, int iParam1) //Position: 0x1B971 / 113009
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if ((*&iParam0 + 1988)[iVar12])
		{
			if (StackVal != iParam1)
			{
				if (Function_389(&iParam0 + 12[StackVal41]))
				{
					if ((&iParam0 + 12[StackVal41])->f_200 >= 0)
					{
						if ((StackVal + (&iParam0 + 12[(&iParam0 + 12[StackVal41])->f_20041])->f_204) >= iVar0)
						{
							iVar0 = (StackVal + (&iParam0 + 12[(&iParam0 + 12[StackVal41])->f_20041])->f_204);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar0 != 0 || (&iParam0 + 12[iParam141])->f_200 >= iVar0)
	{
		return (&iParam0 + 12[iParam141])->f_200;
	}
	return iVar0;
}

int Function_355(struct<117> Param0) //Position: 0x1BA60 / 113248
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param1.f_112)
	{
		Function_335(&Param0, &(Param1[iVar0]));
		iVar0++;
	}
	uVar1 = Function_327(&Param0, &uParam2, &uParam3, &uParam4);
	iVar0 = 0;
	while (iVar0 <= Param1.f_112)
	{
		Function_356(&Param0);
		iVar0++;
	}
	Param0.f_116 = uVar1;
	return uVar1;
}

void Function_356(int iParam0) //Position: 0x1BAC1 / 113345
{
	iParam0.f_112 = (iParam0.f_112 - 1);
	iParam0[iParam0.f_112] = 4294967295;
	iParam0[iParam0.f_112].f_4 = 4294967295;
	return;
}

void Function_357(int iParam0) //Position: 0x1BAEB / 113387
{
	struct<8> Var0;
	
	UI_ENTER("Poker_CheatCard");
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&iParam0, 1) };
	PRINTSTRING(&Var0);
	PRINTNL();
	UI_TEXTURE_SET_NAME("Poker_CheatCard", &Var0);
	return;
}

void Function_358() //Position: 0x1BB30 / 113456
{
	fLocal_235 = 0.0f;
	fLocal_236 = 0.0f;
	fLocal_237 = 0.0f;
	fLocal_238 = 0.0f;
	return;
}

void Function_359(int iParam0, int iParam1) //Position: 0x1BB42 / 113474
{
	if (iParam1 >= 4294967295)
	{
		UI_LABEL_SET_TEXT("nScores.s0", "Poker_ChipsLabel");
		UI_LABEL_SET_VALUE("nScores.s0", (&iParam0 + 12[iParam141])->f_200);
	}
	return;
}

void Function_360(struct<2745> Param0) //Position: 0x1BB8A / 113546
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<16> Var8;
	
	bVar0 = (&Local_381 + 12[iParam141])->f_196 == Param0.f_2120;
	if (bVar0)
	{
	}
	iVar1 = Function_361(&Param0 + 12[iParam141]);
	if (bParam2 > (Param0.f_2740 - (&Param0 + 12[iParam141])->f_204))
	{
		(&Param0 + 12[iParam141])->f_200 = ((&Param0 + 12[iParam141])->f_200 - bParam2);
		(&Param0 + 12[iParam141])->f_204 = ((&Param0 + 12[iParam141])->f_204 + bParam2);
		(&Param0 + 12[iParam141])->f_216 = ((&Param0 + 12[iParam141])->f_216 + bParam2);
		Param0.f_2736 = (Param0.f_2736 + bParam2);
		Param0.f_2744 = 0;
		bVar3 = (&Param0 + 12[iParam141])->f_204;
		if ((&Param0 + 12[iParam141])->f_204 >= Param0.f_2740)
		{
			if (Param0.f_2740 == 0)
			{
				if ((&Param0 + 12[iParam141])->f_200 == 0)
				{
					if (!&bParam3 && !&bParam4)
					{
						if (Local_290.f_264)
						{
							Function_324(&Param0, "allin");
						}
						else if (Function_242(&Local_381) && !HUD_IS_FADED())
						{
							if (iParam1 == Function_196(1))
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 504, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (Function_396())
							{
								if (Function_396())
								{
									SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
								else
								{
									SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 287, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 505, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (bVar0)
					{
						if (&bParam3)
						{
							if (!Function_191(32768))
							{
								if (Function_400(&iLocal_372, 0))
								{
									Function_140("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "Poker_Bet_SmallBlind";
						}
						else
						{
							if (!Function_191(32768))
							{
								if (Function_400(&iLocal_372, 5))
								{
									Function_140("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "Poker_Bet_Allin";
						}
					}
					else if (&bParam3)
					{
						bVar2 = "Poker_Bet_SmallBlind_Self";
					}
					else
					{
						bVar2 = "Poker_Bet_Allin_Self";
					}
				}
				else
				{
					if (!&bParam3 && !&bParam4)
					{
						if (Local_290.f_264)
						{
							Function_324(&Param0, "bets");
						}
						else if (Function_242(&Local_381) && !HUD_IS_FADED())
						{
							if (iParam1 == Function_196(1))
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 497, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (Function_396())
							{
								if (Function_396())
								{
									SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
								else
								{
									SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 284, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 498, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (bVar0)
					{
						if (&bParam3)
						{
							if (!Function_191(32768))
							{
								if (Function_400(&iLocal_372, 0))
								{
									Function_140("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "Poker_Bet_SmallBlind";
						}
						else
						{
							if (!Function_191(32768))
							{
								if (Function_400(&iLocal_372, 4))
								{
									Function_140("Poker_BetHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "nPoker_Bet";
						}
					}
					else if (&bParam3)
					{
						bVar2 = "Poker_Bet_SmallBlind_Self";
					}
					else
					{
						bVar2 = "Poker_Bet_Self";
					}
				}
			}
			else if ((&Param0 + 12[iParam141])->f_200 == 0)
			{
				if (!&bParam3 && !&bParam4)
				{
					if (Local_290.f_264)
					{
						Function_324(&Param0, "allin");
					}
					else if (Function_242(&Local_381) && !HUD_IS_FADED())
					{
						if (iParam1 == Function_196(1))
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 504, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_396())
						{
							if (Function_396())
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 287, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 505, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
				}
				if (bVar0)
				{
					if (&bParam4)
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 5))
							{
								Function_140("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Raises_Allin";
					}
				}
				else if (&bParam4)
				{
					bVar2 = "Poker_Bet_BigBlind_Self";
				}
				else
				{
					bVar2 = "Poker_Raises_Allin_Self";
				}
			}
			else
			{
				if (!&bParam3 && !&bParam4)
				{
					if (Local_290.f_264)
					{
						Function_324(&Param0, "raises");
					}
					else if (Function_242(&Local_381) && !HUD_IS_FADED())
					{
						if (iParam1 == Function_196(1))
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 499, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_396())
						{
							if (Function_396())
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 285, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 500, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
				}
				if (bVar0)
				{
					if (&bParam4)
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 9))
							{
								Function_140("Poker_RaiseHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Raises";
					}
				}
				else if (&bParam4)
				{
					bVar2 = "Poker_Bet_BigBlind_Self";
				}
				else if (&bParam3)
				{
					bVar2 = "Poker_Bet_SmallBlind_Self";
				}
				else
				{
					bVar2 = "Poker_Raises_Self";
				}
			}
			(&Param0 + 12[iParam141])->f_208 = ((&Param0 + 12[iParam141])->f_204 - Param0.f_2740);
			Param0.f_2128 = (&Param0 + 12[iParam141])->f_196;
			Param0.f_2740 = (&Param0 + 12[iParam141])->f_204;
			(&Param0 + 12[iParam141])->f_212 = Param0.f_2736;
			Param0.f_2744 = 0;
		}
		else if ((&Param0 + 12[iParam141])->f_204 != Param0.f_2740 && bParam2 < 0)
		{
			if (!&bParam3 && !&bParam4)
			{
				if (Local_290.f_264)
				{
					Function_324(&Param0, "calls");
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_196(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 501, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_396())
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 286, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			bVar3 = (&Param0 + 12[iParam141])->f_204;
			if (!Function_191(2))
			{
				if (bVar0)
				{
					if (&bParam4)
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else if (&bParam3)
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 0))
							{
								Function_140("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_SmallBlind";
					}
					else
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 8))
							{
								Function_140("Poker_CallHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Calls";
						bVar3 = bParam2;
					}
				}
				else if (&bParam4)
				{
					bVar2 = "Poker_Bet_BigBlind_Self";
				}
				else
				{
					bVar2 = "Poker_Calls_Self";
					bVar3 = bParam2;
				}
			}
		}
		else
		{
			if (!&bParam3 && !&bParam4)
			{
				if (Local_290.f_264)
				{
					Function_324(&Param0, "checks");
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_196(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 502, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_396())
					{
						if (Function_396())
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 289, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 503, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (bVar0)
			{
				if (!Function_191(32768))
				{
					if (Function_400(&iLocal_372, 7) && !Function_191(2))
					{
						Function_140("Poker_CheckHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				bVar2 = "Poker_Checks";
				bVar3 = 4294967295;
			}
			else
			{
				bVar2 = "Poker_Checks_Self";
				bVar3 = 4294967295;
			}
		}
		if (bParam2 == 0)
		{
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/check");
		}
		else if ((&Param0 + 12[iParam141])->f_200 == 0)
		{
			if (IS_OBJECT_VALID(&Param0 + 12[iParam141] + 240[iVar1]))
			{
				DESTROY_OBJECT(&Param0 + 12[iParam141] + 240[iVar1]);
			}
			*(&Param0 + 12[iParam141] + 240[iVar1]) = &Param0 + 12[iParam141] + 224;
			uVar4 = "wrist_r_attachment";
			Function_418(&Param0 + 12[iParam141] + 240[iVar1], &Param0 + 12[iParam141]);
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/bet_allin");
			*(&Param0 + 12[iParam141] + 280[iVar1]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 12[iParam141] + 240[iVar1], GET_OBJECT_FROM_ACTOR(&Param0 + 12[iParam141]), &uVar4, "grab", 4294967295);
		}
		else if (iVar1 <= 3)
		{
			if (IS_OBJECT_VALID(&Param0 + 12[iParam141] + 240[iVar1]))
			{
				DESTROY_OBJECT(&Param0 + 12[iParam141] + 240[iVar1]);
			}
			NET_OBJECT_REPLICATION_MODE_START(17, 0);
			if (bParam2 > 25)
			{
				uVar5 = "elbow_r_attachment";
				*(&Param0 + 12[iParam141] + 240[iVar1]) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_239, Function_53(), "$/fragments/p_crd_chipRedPoker01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
			}
			else if (bParam2 > 10)
			{
				uVar5 = "hip_r_attachment";
				*(&Param0 + 12[iParam141] + 240[iVar1]) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_239, Function_53(), "$/fragments/p_crd_chipBluePoker01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
			}
			else
			{
				uVar5 = "hip_l_attachment";
				*(&Param0 + 12[iParam141] + 240[iVar1]) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_239, Function_53(), "$/fragments/p_crd_chipGreenPoker01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
			}
			NET_OBJECT_REPLICATION_MODE_END(17);
			Function_418(&Param0 + 12[iParam141] + 240[iVar1], &Param0 + 12[iParam141]);
			if (iVar1 == 0)
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/R/bet");
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/B/bet");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/G/bet");
				}
			}
			else if (iVar1 == 1)
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/R2/bet");
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/B2/bet");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/G2/bet");
				}
			}
			else if (bParam2 > 25)
			{
				SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/R3/bet");
			}
			else if (bParam2 > 10)
			{
				SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/B3/bet");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/G3/bet");
			}
			*(&Param0 + 12[iParam141] + 280[iVar1]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 12[iParam141] + 240[iVar1], GET_OBJECT_FROM_ACTOR(&Param0 + 12[iParam141]), &uVar5, "grab", 4294967295);
		}
	}
	else if (bParam2 == (&Param0 + 12[iParam141])->f_200)
	{
		if (bParam2 == 0)
		{
			if (!Function_191(2))
			{
				if (bVar0)
				{
					bVar2 = "Poker_Checks";
					bVar3 = 4294967295;
				}
				else
				{
					bVar2 = "Poker_Checks_Self";
					bVar3 = 4294967295;
				}
			}
			if (!&bParam3 && !&bParam4)
			{
				if (Local_290.f_264)
				{
					Function_324(&Param0, "checks");
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_196(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 502, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_396())
					{
						if (Function_396())
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 289, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 503, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/check");
		}
		else
		{
			(&Param0 + 12[iParam141])->f_200 = ((&Param0 + 12[iParam141])->f_200 - bParam2);
			(&Param0 + 12[iParam141])->f_204 = ((&Param0 + 12[iParam141])->f_204 + bParam2);
			(&Param0 + 12[iParam141])->f_216 = ((&Param0 + 12[iParam141])->f_216 + bParam2);
			Param0.f_2736 = (Param0.f_2736 + bParam2);
			iVar6 = (&Param0 + 12[iParam141])->f_204;
			if (iVar6 >= Param0.f_2744)
			{
				Param0.f_2744 = iVar6;
			}
			bVar3 = (&Param0 + 12[iParam141])->f_204;
			if (!&bParam3 && !&bParam4)
			{
				if (Local_290.f_264)
				{
					Function_324(&Param0, "allin");
				}
				else if (Function_242(&Local_381) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_196(1))
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 504, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_396())
					{
						if (Function_396())
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 283, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[iParam141], 287, Function_192(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&Param0 + 12[Function_196(1)41], 505, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (!Function_191(2))
			{
				if (bVar0)
				{
					if (&bParam4)
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_191(32768))
						{
							if (Function_400(&iLocal_372, 5))
							{
								Function_140("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_Allin";
					}
				}
				else if (&bParam4)
				{
					bVar2 = "Poker_Bet_BigBlind_Self";
				}
				else if (&bParam3)
				{
					bVar2 = "Poker_Bet_SmallBlind_Self";
				}
				else
				{
					bVar2 = "Poker_Bet_Allin_Self";
				}
			}
			if (IS_OBJECT_VALID(&Param0 + 12[iParam141] + 240[iVar1]))
			{
				DESTROY_OBJECT(&Param0 + 12[iParam141] + 240[iVar1]);
			}
			*(&Param0 + 12[iParam141] + 240[iVar1]) = &Param0 + 12[iParam141] + 224;
			Function_418(&Param0 + 12[iParam141] + 240[iVar1], &Param0 + 12[iParam141]);
			uVar7 = "wrist_r_attachment";
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[iParam141], "sit_poker/player/bet_request/bet_allin");
			*(&Param0 + 12[iParam141] + 280[iVar1]) = ATTACH_OBJECTS_USING_LOCATOR(&Param0 + 12[iParam141] + 240[iVar1], GET_OBJECT_FROM_ACTOR(&Param0 + 12[iParam141]), &uVar7, "grab", 4294967295);
		}
	}
	else
	{
		LOG_ERROR("Illegal Bet");
		return;
	}
	if (iParam1 == Function_196(1))
	{
		if (bParam2 < (Param0.f_2736 - bParam2) && (&Param0 + 12[iParam141])->f_204 < 20)
		{
			DECOR_SET_INT(&Global_54076, "sc_poker_obj3_fail", true);
		}
	}
	if (!Function_191(2))
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		if (bVar0)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_364(iParam1, &Local_381) };
			if (bVar3 >= 4294967295)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, &bVar2, &Var8, Function_281(bVar3), 0, 0, 0, 2, 0, 0, 0);
				PRINTINT(bVar3);
				PRINTNL();
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, &bVar2, &Var8, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		else if (bVar3 >= 4294967295)
		{
			PRINT_OBJECTIVE_FORMAT(4.0f, &bVar2, Function_349(), Function_281(bVar3), 0, 0, 0, 2, 0, 0, 0);
			PRINTINT(bVar3);
			PRINTNL();
		}
		else
		{
			PRINT_OBJECTIVE_FORMAT(4.0f, &bVar2, Function_349(), 0, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	UI_LABEL_SET_VALUE("nScores.s2", (&Param0 + 12[iParam141])->f_204);
}

int Function_361(int iParam0) //Position: 0x1D172 / 119154
{
	if (!IS_OBJECT_VALID(&iParam0 + 240[0]))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 240[1]))
	{
		return 1;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 240[2]))
	{
		return 2;
	}
	return 3;
}

void Function_362(int iParam0) //Position: 0x1D1B8 / 119224
{
	return;
}

void Function_363(int iParam0) //Position: 0x1D1BE / 119230
{
	if ((&iParam0 + 72)->f_112 >= 0)
	{
		Function_270(&iParam0, 0);
	}
	if ((&iParam0 + 72)->f_112 >= 1)
	{
		Function_270(&iParam0, 1);
	}
	return;
}

struct<64> Function_364(int iParam0, int iParam1) //Position: 0x1D1E8 / 119272
{
	struct<16> Var0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
	}
	if (!Function_365(&iParam1 + 12[iParam041], &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam1 + 12[iParam041] + 8), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_365(var uParam0, char* cParam1) //Position: 0x1D228 / 119336
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

void Function_366(struct<113> Param0) //Position: 0x1D268 / 119400
{
	char* cVar0[64];
	int iVar22;
	
	strcpy(&cVar6, "", 64);
	iVar22 = 0;
	while (iVar22 <= Param0.f_112)
	{
		Function_193(&(Param0[iVar22]), &cVar0);
		stradd(&cVar6, &cVar0, 64);
		if (!iVar22 != (Param0.f_112 - 1))
		{
			stradd(&cVar6, " AND ", 64);
		}
		iVar22++;
	}
	PRINTSTRING(&cVar6);
	PRINTNL();
}

bool Function_367(struct<2121> Param0) //Position: 0x1D2BF / 119487
{
	if ((*&Param0 + 1988)[Param0.f_21202])
	{
		if (Function_389(&Param0 + 12[Function_196(1)41]))
		{
			if (UNK_0x062C5047("@MINIGAME.LOOK_AT_HAND", 1, 0))
			{
				return 1;
			}
			if (UNK_0x062C5047("@MINIGAME.LOOK_AT_DEALER", 1, 0) && (&Param0 + 2564)->f_112 < 0)
			{
				return 1;
			}
			if (UNK_0x062C5047("@POKER.LOOK_AT_SCORE", 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_368(struct<1989> Param0) //Position: 0x1D35C / 119644
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if (Function_389(&Param0 + 12[StackVal41]))
			{
				if ((&Param0 + 12[StackVal41])->f_200 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_369(bool bParam0) //Position: 0x1D3C3 / 119747
{
	int iVar0;
	
	if (Local_381.f_2116 > 0 || Local_381.f_2116 <= 6)
	{
	}
	iVar0 = StackVal;
	if (bParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_370(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1D401 / 119809
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_22(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_371(struct<69> Param0) //Position: 0x1D496 / 119958
{
	bool bVar0;
	
	Param0 = 10.0f;
	Param0.f_12 = 0,2f;
	Param0.f_16 = 1.0f;
	Param0.f_20 = 10.0f;
	Param0.f_24 = 1,5f;
	Param0.f_28 = 0.0f;
	Param0.f_4 = 9.0f;
	Param0.f_8 = 2.0f;
	Function_75();
	(&Param0 + 32) = Function_75();
	Function_75();
	*(&Param0 + 44) = Function_75();
	Param0.f_56 = 0;
	Param0.f_60 = 0;
	Param0.f_64 = 0.0f;
	Param0.f_68 = 0.0f;
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 >= 50)
	{
		Param0.f_32 = RAND_FLOAT_RANGE(-8.0f, -2.0f);
	}
	else
	{
		Param0.f_32 = RAND_FLOAT_RANGE(2.0f, 8.0f);
	}
	UI_ENTER("Poker_CheatMeter");
	UI_SET_PROGRESS_BAR_VAL("Poker_CheatMeter", (((Param0.f_32 + 10.0f) / 20.0f) * 100.0f));
	return;
}

void Function_372(struct<69> Param0) //Position: 0x1D57E / 120190
{
	bool bVar0;
	
	Param0 = 2.0f;
	Param0.f_12 = 0,2f;
	Param0.f_16 = 1.0f;
	Param0.f_20 = 2.0f;
	Param0.f_24 = 2.0f;
	Param0.f_28 = 0.0f;
	Param0.f_4 = 9.0f;
	Param0.f_8 = 2.0f;
	Function_75();
	*(&Param0 + 32) = Function_75();
	Function_75();
	*(&Param0 + 44) = Function_75();
	Param0.f_56 = 0;
	Param0.f_60 = 0;
	Param0.f_64 = 0.0f;
	Param0.f_68 = 0.0f;
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 >= 50)
	{
		Param0.f_32 = RAND_FLOAT_RANGE(-8.0f, -2.0f);
	}
	else
	{
		Param0.f_32 = RAND_FLOAT_RANGE(2.0f, 8.0f);
	}
	UI_ENTER("Poker_CheatMeter");
	UI_SET_PROGRESS_BAR_VAL("Poker_CheatMeter", (((Param0.f_32 + 10.0f) / 20.0f) * 100.0f));
	return;
}

int Function_373(struct<2125> Param0) //Position: 0x1D65A / 120410
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = RAND_INT_RANGE(true, 6);
	iVar2 = Param0.f_2124;
	iVar1 = 0;
	while (iVar1 <= bVar0)
	{
		iVar2 = Function_428(&Param0 + 1988, iVar2);
		if (iVar2 == Param0.f_2120)
		{
			iVar2 = Function_428(&Param0 + 1988, iVar2);
		}
		iVar1++;
	}
	return StackVal;
}

void Function_374(struct<2733> Param0) //Position: 0x1D6B3 / 120499
{
	int iVar0;
	
	iVar0 = Function_428(&Param0 + 1988, Function_428(&Param0 + 1988, Param0.f_2124));
	if (Function_375(&Param0) && Param0.f_2732 != 0)
	{
		Param0.f_2116 = Param0.f_2124;
	}
	else
	{
		Param0.f_2116 = Function_428(&Param0 + 1988, iVar0);
	}
	Param0.f_2128 = Param0.f_2116;
	return;
}

bool Function_375(struct<1989> Param0) //Position: 0x1D711 / 120593
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 2)
	{
		return 1;
	}
	return 0;
}

int Function_376(struct<2733> Param0) //Position: 0x1D750 / 120656
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	struct<2> Var8;
	
	if (Param0.f_2732 != 0)
	{
		return 1;
	}
	if ((&Local_381 + 12[Function_194(1)41] + 72)->f_112 != 2 && !IS_ATTACHMENT_VALID(&bLocal_1261))
	{
		return 1;
	}
	iVar5 = Local_381.f_2124;
	iVar0 = Function_383(6, iVar5);
	iVar1 = Function_383(6, iVar0);
	iVar2 = Function_383(6, iVar1);
	iVar3 = Function_383(6, iVar2);
	iVar4 = Function_383(6, iVar3);
	switch (iLocal_289)
	{
		case 0x00000000:
			if ((IS_ACTION_NODE_PLAYING(&Local_381 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_idle") || IS_ACTION_NODE_PLAYING(&Local_381 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_mid")) || Function_191(32768))
			{
				Function_382();
				if ((&Local_381 + 12[Function_194(1)41] + 72)->f_112 == 0)
				{
					if (Function_381(&Param0, iVar0, 0))
					{
						Function_380(StackVal, &Param0, 0, 1);
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/1");
						Function_429(65536);
						iLocal_289 = 1;
					}
					else if (Function_381(&Param0, iVar1, 0))
					{
						Function_380(StackVal, &Param0, 0, 2);
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/2");
						Function_429(131072);
						iLocal_289 = 1;
					}
					else if (Function_381(&Param0, iVar2, 0))
					{
						Function_380(StackVal, &Param0, 0, 3);
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/3");
						Function_429(262144);
						iLocal_289 = 1;
					}
					else if (Function_381(&Param0, iVar3, 0))
					{
						Function_380(StackVal, &Param0, 0, 4);
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/4");
						Function_429(524288);
						iLocal_289 = 1;
					}
					else if (Function_381(&Param0, iVar4, 0))
					{
						Function_380(StackVal, &Param0, 0, 5);
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/5");
						Function_429(1048576);
						iLocal_289 = 1;
					}
					else
					{
						Function_380(StackVal, &Param0, 0, 6);
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/self/1_pre");
						Function_429(2097152);
						iLocal_289 = 1;
					}
				}
				else if (Function_381(&Param0, iVar0, 1))
				{
					Function_380(StackVal, &Param0, 1, 1);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/1");
					Function_429(65536);
					iLocal_289 = 1;
				}
				else if (Function_381(&Param0, iVar1, 1))
				{
					Function_380(StackVal, &Param0, 1, 2);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/2");
					Function_429(131072);
					iLocal_289 = 1;
				}
				else if (Function_381(&Param0, iVar2, 1))
				{
					Function_380(StackVal, &Param0, 1, 3);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/3");
					Function_429(262144);
					iLocal_289 = 1;
				}
				else if (Function_381(&Param0, iVar3, 1))
				{
					Function_380(StackVal, &Param0, 1, 4);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/4");
					Function_429(524288);
					iLocal_289 = 1;
				}
				else if (Function_381(&Param0, iVar4, 1))
				{
					Function_380(StackVal, &Param0, 1, 5);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/5");
					Function_429(1048576);
					iLocal_289 = 1;
				}
				else
				{
					Function_380(StackVal, &Param0, 1, 6);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/self/2_pre");
					Function_429(2097152);
					iLocal_289 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (((((((IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/1/1_pst") || IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/2/2_pst")) || IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/3/3_pst")) || IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/4/4_pst")) || IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/5/5_pst")) || IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/self/1_pst")) || IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/self/2_pst")) || Function_191(32768))
			{
				REMOVE_OBJECT_ATTACHMENT(&Param0 + 12[Function_194(1)41] + 280[0]);
				Function_377(&Param0, iVar0, iVar1, iVar2, iVar3, iVar4, iVar5);
				Function_382();
				if ((&Local_381 + 12[Function_194(1)41] + 72)->f_112 == 2)
				{
					if (Function_191(32768))
					{
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_end_snap");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_pst");
					}
					iLocal_289 = 2;
				}
				else
				{
					iLocal_289 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_end") || Function_191(32768))
			{
				if (Function_191(32768))
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 12[Function_194(1)41], "sit_poker/Dealer/card_dealing/deal_end_snap");
				}
				REMOVE_OBJECT_ATTACHMENT(&bLocal_1261);
				Function_419(&Param0 + 12[Function_194(1)41], &Var6, &Var8);
				SET_OBJECT_POSITION(&uLocal_364, Var6);
				SET_OBJECT_ORIENTATION(&uLocal_364, Var8);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_377(int iParam0, Vector3 vParam1, float fParam2, float fParam3, Vector3 vParam4, float fParam5, float fParam6) //Position: 0x1E002 / 122882
{
	bool bVar0;
	struct<41> Var1;
	int iVar42;
	struct<2> Var43;
	struct<2> Var45;
	
	if (Function_191(65536))
	{
		bVar0 = vParam1.x;
	}
	else if (Function_191(131072))
	{
		bVar0 = fParam2;
	}
	else if (Function_191(262144))
	{
		bVar0 = fParam3;
	}
	else if (Function_191(524288))
	{
		bVar0 = vParam4.x;
	}
	else if (Function_191(1048576))
	{
		bVar0 = fParam5;
	}
	else if (Function_191(2097152))
	{
		bVar0 = fParam6;
	}
	PRINTSTRING("SeatDealTo equals ");
	PRINTINT(bVar0);
	PRINTNL();
	*(&Var1 + 72) = 7;
	*(&Var1 + 72 + 64) = 2;
	*(&Var1 + 72 + 88) = 2;
	*(&Var1 + 240) = 4;
	*(&Var1 + 280) = 4;
	if (bVar0 == 4294967295)
	{
		LOG_ERROR("SeatDealtTo is -1");
	}
else
{
	}
}

void Function_378(Vector3 vParam0, struct<2> Param1) //Position: 0x1E15A / 123226
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&vParam0))
	{
		GET_POSITION(&vParam0, &Var0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&vParam0), &Var2);
		if (ACTOR_HAS_ANIM_SET(&vParam0, "sit_poker_hillb"))
		{
			Param1 = Vector(-0,028f, 0,801f, -0,006f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -79,291f, 0.0f), Var2, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&vParam0, "sit_poker_gped"))
		{
			Param1 = Vector(-0,009f, 0,802f, 0,065f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -79,291f, 0.0f), Var2, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&vParam0, "sit_poker_oldm"))
		{
			Param1 = Vector(0,004f, 0,801f, 0,135f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -8,821f, 0.0f), Var2, StackVal);
		}
		else
		{
			Param1 = Vector(-0,016f, 0,802f, -0,145f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -61,298f, 0.0f), Var2, StackVal);
		}
		UNK_0xF76F2BB3(&Param1, &Var2, 0, 4);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param1, StackVal);
	}
	return;
}

void Function_379(Vector3 vParam0, struct<2> Param1) //Position: 0x1E297 / 123543
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&vParam0))
	{
		GET_POSITION(&vParam0, &Var0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&vParam0), &Var2);
		if (ACTOR_HAS_ANIM_SET(&vParam0, "sit_poker_hillb"))
		{
			Param1 = Vector(-0,035f, 0,8f, -0,047f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -61,298f, 0.0f), Var2, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&vParam0, "sit_poker_gped"))
		{
			Param1 = Vector(-0,016f, 0,801f, 0,024f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -61,298f, 0.0f), Var2, StackVal);
		}
		else if (ACTOR_HAS_ANIM_SET(&vParam0, "sit_poker_oldm"))
		{
			Param1 = Vector(-0,007f, 0,8f, 0,135f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-180.0f, -3,821f, 0.0f), Var2, StackVal);
		}
		else
		{
			Param1 = Vector(-0,009f, 0,801f, -0,104f);
			iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(180.0f, -79,291f, 0.0f), Var2, StackVal);
		}
		UNK_0xF76F2BB3(&Param1, &Var2, 0, 4);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param1, StackVal);
	}
	return;
}

void Function_380(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1E3D4 / 123860
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	int iVar12;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	iVar12 = Function_334(&Local_381 + 2132);
	Function_335(&Local_381 + 12[bParam141] + 72, &iVar12);
	if (bParam1 != Function_196(1) && bParam2 != 1)
	{
		Global_21684[(Global_21684[StackVal7].f_28 + 1.0f)7].f_28 = StackVal;
	}
	Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&iVar12, 0) };
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*(&iParam0 + 12[bParam141] + 72 + 64[bParam2]) = CREATE_PROP_IN_LAYOUT(&iLocal_239, Function_53(), &Var4, Var0, Var2, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	switch (bParam3)
	{
		case 0x00000001:
			*(&iParam0 + 12[Function_194(1)41] + 280[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41], "spine00_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000002:
			*(&iParam0 + 12[Function_194(1)41] + 280[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41], "spine01_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000003:
			*(&iParam0 + 12[Function_194(1)41] + 280[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41], "spine02_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000004:
			*(&iParam0 + 12[Function_194(1)41] + 280[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41], "pelvis_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000005:
			*(&iParam0 + 12[Function_194(1)41] + 280[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41], "spine03_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000006:
			*(&iParam0 + 12[Function_194(1)41] + 280[0]) = ATTACH_OBJECTS_USING_LOCATOR(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41], "neck_Attachment", "grab", 4294967295);
			break;
	}
	Function_418(&iParam0 + 12[bParam141] + 72 + 64[bParam2], &iParam0 + 12[Function_194(1)41]);
}

bool Function_381(bool bParam0, int iParam1, int iParam2) //Position: 0x1E6A5 / 124581
{
	if (!(*&bParam0 + 1988)[iParam12])
	{
		return 0;
	}
	if ((&bParam0 + 12[StackVal41] + 72)->f_112 == iParam2)
	{
		return 1;
	}
	return 0;
}

void Function_382() //Position: 0x1E6E0 / 124640
{
	Function_245(65536);
	Function_245(131072);
	Function_245(262144);
	Function_245(524288);
	Function_245(1048576);
	Function_245(2097152);
	return;
}

var Function_383(int iParam0, int iParam1) //Position: 0x1E710 / 124688
{
	int iVar0;
	
	iVar0 = iParam1 + 1;
	while (iVar0 < (iParam0 - 1))
	{
		return iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		return iVar0;
		iVar0++;
	}
	return 4294967295;
}

int Function_384(int iParam0, struct<113> Param1) //Position: 0x1E74A / 124746
{
	var uVar0[52];
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<5> Var57;
	
	iVar56 = 0;
	iVar54 = 0;
	while (iVar54 <= 13)
	{
		iVar55 = 0;
		while (iVar55 <= 4)
		{
			Var57 = iVar54;
			Var57.f_4 = iVar55;
			if (!Function_336(&iParam0, &Var57) && !Function_336(&Param1, &Var57))
			{
				uVar0[iVar56] = &Var57;
				iVar56++;
			}
			iVar55++;
		}
		iVar54++;
	}
	switch (Param1.f_112)
	{
		case 0x00000003:
			if (iLocal_1298)
			{
				iLocal_1298 = 0;
				Function_388(&iLocal_1291, &iLocal_1292, &iLocal_1293, &iLocal_1294, &bLocal_1296, &bLocal_1295);
			}
			if (Function_191(32768) && !Function_389(&Local_381 + 12[Function_196(1)41]))
			{
				iVar53 = 1;
			}
			else
			{
				iVar53 = 10;
			}
			if (Function_387(&iLocal_1291, &iLocal_1292, &iLocal_1293, &iLocal_1294, &bLocal_1296, &bLocal_1295, iVar56, &uVar0, &Param1, &iParam0, iVar53))
			{
				iLocal_1298 = 1;
				bParam2 = (TO_FLOAT(bLocal_1296) / TO_FLOAT(bLocal_1295));
				return 1;
			}
			return 0;
			break;
		
		case 0x00000004:
			if (iLocal_1298)
			{
				iLocal_1298 = 0;
				Function_388(&iLocal_1291, &iLocal_1292, &iLocal_1293, &iLocal_1294, &bLocal_1296, &bLocal_1295);
			}
			if (Function_191(32768) && !Function_389(&Local_381 + 12[Function_196(1)41]))
			{
				iVar53 = 1;
			}
			else
			{
				iVar53 = 25;
			}
			if (Function_386(&iLocal_1291, &iLocal_1292, &iLocal_1293, &bLocal_1296, &bLocal_1295, iVar56, &uVar0, &Param1, &iParam0, iVar53))
			{
				iLocal_1298 = 1;
				bParam2 = (TO_FLOAT(bLocal_1296) / TO_FLOAT(bLocal_1295));
				return 1;
			}
			return 0;
			break;
		
		case 0x00000005:
			if (iLocal_1298)
			{
				iLocal_1298 = 0;
				Function_388(&iLocal_1291, &iLocal_1292, &iLocal_1293, &iLocal_1294, &bLocal_1296, &bLocal_1295);
				iLocal_1297 = Function_355(&iParam0, &Param1, &uVar58, &uVar59, &uVar60);
			}
			if (Function_191(32768) && !Function_389(&Local_381 + 12[Function_196(1)41]))
			{
				iVar53 = 1;
			}
			else
			{
				iVar53 = 100;
			}
			if (Function_385(&iLocal_1291, &iLocal_1292, &bLocal_1296, &bLocal_1295, iVar56, &uVar0, &Param1, iVar53))
			{
				iLocal_1298 = 1;
				bParam2 = (TO_FLOAT(bLocal_1296) / TO_FLOAT(bLocal_1295));
				return 1;
			}
			return 0;
			break;
	}
	return 1;
}

bool Function_385(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var[] uParam5, int iParam6, int iParam7) //Position: 0x1E965 / 125285
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar19;
	var uVar20;
	var uVar21;
	
	iVar4 = 7;
	*(&iVar4 + 64) = 2;
	*(&iVar4 + 88) = 2;
	iVar1 = uParam0;
	while (iVar1 < (iParam4 - 1))
	{
		Function_238(&iVar4);
		Function_335(&iVar4, &(uParam5[iVar1]));
		bVar0 = RAND_INT_RANGE(false, 100);
		if (bVar0 < iParam7)
		{
			iVar2 = uParam1;
			while (iVar2 < (iParam4 - 1))
			{
				bVar0 = RAND_INT_RANGE(false, 100);
				if (bVar0 <= 100)
				{
					Function_335(&iVar4, &(uParam5[iVar2]));
					if (UNK_0xD058BD70() >= (UNK_0x4C48EA4D() - 225000))
					{
						uParam0 = iVar1;
						uParam1 = iVar2;
						Function_356(&iVar4);
						Function_356(&iVar4);
						return 0;
					}
					iVar3 = Function_355(&iVar4, &iParam6, &uVar19, &uVar20, &uVar21);
					if (iLocal_1297 > iVar3)
					{
						uParam2++;
					}
					uParam3++;
					Function_356(&iVar4);
				}
				iVar2++;
			}
		}
		uParam1 = iVar1 + 2;
		Function_356(&iVar4);
		iVar1++;
	}
	return 1;
}

bool Function_386(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var[] uParam6, int iParam7, int iParam8, int iParam9) //Position: 0x1EA52 / 125522
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar20;
	var uVar21;
	var uVar22;
	
	iVar5 = 7;
	*(&iVar5 + 64) = 2;
	*(&iVar5 + 88) = 2;
	iVar1 = uParam0;
	while (iVar1 < (iParam5 - 1))
	{
		Function_335(&iParam7, &(uParam6[iVar1]));
		bVar0 = RAND_INT_RANGE(false, 100);
		if (bVar0 <= 25)
		{
			iLocal_1297 = Function_355(&iParam8, &iParam7, &uVar20, &uVar21, &uVar22);
			iVar2 = uParam1;
			while (iVar2 < (iParam5 - 1))
			{
				Function_238(&iVar5);
				Function_335(&iVar5, &(uParam6[iVar2]));
				iVar3 = uParam2;
				while (iVar3 < (iParam5 - 1))
				{
					bVar0 = RAND_INT_RANGE(false, 100);
					if (bVar0 < iParam9)
					{
						Function_335(&iVar5, &(uParam6[iVar3]));
						if (UNK_0xD058BD70() >= (UNK_0x4C48EA4D() - 225000))
						{
							uParam0 = iVar1;
							uParam1 = iVar2;
							uParam2 = iVar3;
							Function_356(&iVar5);
							Function_356(&iVar5);
							Function_356(&iParam7);
							return 0;
						}
						iVar4 = Function_355(&iVar5, &iParam7, &uVar20, &uVar21, &uVar22);
						if (iLocal_1297 > iVar4)
						{
							uParam3++;
						}
						uParam4++;
						Function_356(&iVar5);
					}
					iVar3++;
				}
				uParam2 = iVar2 + 2;
				Function_356(&iVar5);
				iVar2++;
			}
		}
		uParam1 = iVar1 + 2;
		if (uParam2 < uParam1)
		{
			uParam2 = uParam1 + 1;
		}
		Function_356(&iParam7);
		iVar1++;
	}
	return 1;
}

bool Function_387(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var[] uParam7, int iParam8, var uParam9, int iParam10) //Position: 0x1EBA5 / 125861
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar21;
	var uVar22;
	var uVar23;
	
	iVar6 = 7;
	*(&iVar6 + 64) = 2;
	*(&iVar6 + 88) = 2;
	iVar1 = uParam0;
	while (iVar1 < (iParam6 - 1))
	{
		Function_335(&iParam8, &(uParam7[iVar1]));
		iVar2 = uParam1;
		while (iVar2 < (iParam6 - 1))
		{
			Function_335(&iParam8, &(uParam7[iVar2]));
			bVar0 = RAND_INT_RANGE(false, 100);
			if (bVar0 <= iParam10)
			{
				iLocal_1297 = Function_355(&uParam9, &iParam8, &uVar21, &uVar22, &uVar23);
				iVar3 = uParam2;
				while (iVar3 < (iParam6 - 1))
				{
					Function_238(&iVar6);
					Function_335(&iVar6, &(uParam7[iVar3]));
					iVar4 = uParam3;
					while (iVar4 < (iParam6 - 1))
					{
						bVar0 = RAND_INT_RANGE(false, 100);
						if (bVar0 <= 10)
						{
							Function_335(&iVar6, &(uParam7[iVar4]));
							if (UNK_0xD058BD70() >= (UNK_0x4C48EA4D() - 225000))
							{
								uParam0 = iVar1;
								uParam1 = iVar2;
								uParam2 = iVar3;
								uParam3 = iVar4;
								Function_356(&iVar6);
								Function_356(&iVar6);
								Function_356(&iParam8);
								Function_356(&iParam8);
								return 0;
							}
							iVar5 = Function_355(&iVar6, &iParam8, &uVar21, &uVar22, &uVar23);
							if (iLocal_1297 > iVar5)
							{
								uParam4++;
							}
							uParam5++;
							Function_356(&iVar6);
						}
						iVar4++;
					}
					uParam3 = iVar3 + 2;
					Function_356(&iVar6);
					iVar3++;
				}
			}
			Function_356(&iParam8);
			uParam2 = iVar2 + 2;
			if (uParam3 < uParam2)
			{
				uParam3 = uParam2 + 1;
			}
			iVar2++;
		}
		uParam1 = iVar1 + 2;
		if (uParam2 < uParam1)
		{
			uParam2 = uParam1 + 1;
			if (uParam3 < uParam2)
			{
				uParam3 = uParam2 + 1;
			}
		}
		Function_356(&iParam8);
		iVar1++;
	}
	return 1;
}

void Function_388(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1ED61 / 126305
{
	iParam0 = 0;
	iParam1 = 1;
	iParam2 = 2;
	iParam3 = 3;
	bParam5 = 0;
	bParam4 = 0;
}

bool Function_389(int iParam0) //Position: 0x1ED87 / 126343
{
	if (((&iParam0 + 72)->f_112 == 2 || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/fold")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/fold_B"))
	{
		return 0;
	}
	return 1;
}

void Function_390(struct<1989> Param0) //Position: 0x1EDF9 / 126457
{
	int iVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	struct<8> Var6;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				DESTROY_OBJECT(&Param0 + 12[iVar541] + 240[StackVal]);
				iVar5++;
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_394((&Param0 + 12[StackVal41])->f_200) };
			GET_OBJECT_POSITION(&Param0 + 12[StackVal41] + 224, &uVar1);
			Function_393(&Param0 + 12[StackVal41]);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_394((&Param0 + 12[StackVal41])->f_216) };
			if (IS_OBJECT_VALID(&Param0 + 12[StackVal41] + 232))
			{
				GET_OBJECT_POSITION(&Param0 + 12[StackVal41] + 232, &uVar1);
			}
			else
			{
				Function_392(&Param0 + 12[StackVal41], &uVar1, &uVar3);
			}
			PRINTSTRING("ExpectedStackName is ");
			PRINTSTRING(&Var6);
			Function_391(&Param0 + 12[StackVal41]);
		}
		iVar0++;
	}
	return;
}

void Function_391(struct<217> Param0) //Position: 0x1EF4A / 126794
{
	struct<8> Var0;
	struct<2> Var8;
	struct<2> Var10;
	
	if (IS_OBJECT_VALID(&Param0 + 232))
	{
		DESTROY_OBJECT(&Param0 + 232);
	}
	if (Param0.f_216 >= 0)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_394(Param0.f_216) };
		Function_392(&Param0, &Var8, &Var10);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		*(&Param0 + 232) = CREATE_PROP_IN_LAYOUT(&iLocal_239, Function_53(), &Var0, Var8, Var10, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_392(float fParam0, float fParam1, var uParam2) //Position: 0x1EFAB / 126891
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_hillb"))
		{
			Var0 = Vector(0,0372f, 0,8f, -0,3568f);
			Var2 = Vector(0.0f, 198,2009f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_gped"))
		{
			Var0 = Vector(0,0372f, 0,8f, -0,3568f);
			Var2 = Vector(0.0f, 198,2009f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_oldm"))
		{
			Var0 = Vector(0,0372f, 0,8f, -0,3568f);
			Var2 = Vector(0.0f, 198,2009f, 0.0f);
		}
		else
		{
			Var0 = Vector(0,0372f, 0,8f, -0,3568f);
			Var2 = Vector(0.0f, 198,2009f, 0.0f);
		}
		GET_OBJECT_RELATIVE_ORIENTATION(&fParam0, Var2, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&fParam0, Var0, &fParam1);
	}
	return;
}

void Function_393(struct<201> Param0) //Position: 0x1F0A6 / 127142
{
	struct<8> Var0;
	struct<2> Var8;
	struct<2> Var10;
	
	if (IS_OBJECT_VALID(&Param0 + 224))
	{
		DESTROY_OBJECT(&Param0 + 224);
	}
	if (Param0.f_200 >= 0)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_394(Param0.f_200) };
		Function_343(&Param0, &Var8, &Var10);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		*(&Param0 + 224) = CREATE_PROP_IN_LAYOUT(&iLocal_239, Function_53(), &Var0, Var8, Var10, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

struct<32> Function_394(int iParam0) //Position: 0x1F106 / 127238
{
	bool bVar0;
	char* cVar1[32];
	
	bVar0 = (iParam0 / 50);
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	else if (bVar0 >= 25)
	{
		bVar0 = 25;
	}
	strcpy(&cVar1, Function_181(bVar0), 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

void Function_395(Vector3 vParam0, int iParam1, int iParam2) //Position: 0x1F13A / 127290
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	bool bVar9;
	struct<2> Var10;
	struct<2> Var12;
	
	if (IS_OBJECT_VALID(&iParam1 + 2684[0]) && IS_OBJECT_VALID(&iParam1 + 2684[((&iParam1 + 2564)->f_112 - 1)]))
	{
		Var1 = Vector(0.0f, 0.0f, 0.0f);
		Var5 = Vector(0.0f, 0.0f, 0.0f);
		Var7 = Vector(0.0f, 0.0f, 0.0f);
		iVar0 = 0;
		while (iVar0 <= (&iParam1 + 2564)->f_112)
		{
			GET_OBJECT_POSITION(&iParam1 + 2684[iVar0], &Var3);
			Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var1, StackVal);
			GET_OBJECT_AXIS(&iParam1 + 2684[iVar0], &Var3, 0);
			Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var5, StackVal);
			GET_OBJECT_AXIS(&iParam1 + 2684[iVar0], &Var3, 2);
			Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var7, StackVal);
			iVar0++;
		}
		bVar9 = (1.0f / TO_FLOAT((&iParam1 + 2564)->f_112));
		VSCALE(&Var1, bVar9);
		VSCALE(&Var5, bVar9);
		VSCALE(&Var7, bVar9);
		Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var7, Var1, StackVal) * Vector(0,08f, 0,08f, 0,08f), StackVal, StackVal);
		Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var5, Var1, StackVal) * Vector(0,05f, 0,05f, 0,05f), StackVal, StackVal);
		Var10 = Var1;
		if (IS_DISPLAY_WIDESCREEN())
		{
			Var10.f_4 = (StackVal + 0,55f);
		}
		else
		{
			Var10.f_4 = (StackVal + 0,73f);
		}
		Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var7, Var10, StackVal) * Vector(0,15f, 0,15f, 0,15f), StackVal, StackVal);
		if (iParam2 == 0)
		{
			SET_CAMERA_FOV(&vParam0, 31.0f);
		}
		else
		{
			SET_CAMERA_FOV(&vParam0, 49.0f);
		}
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(&vParam0);
		}
		SET_CAMERA_POSITION(&vParam0, Var10);
		SET_CAMERA_TARGET_POSITION(&vParam0, Var1, 0);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&vParam0, iParam2))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(&vParam0, iParam2, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var12);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(Var10, Var12, 1);
	}
	return;
}

bool Function_396() //Position: 0x1F2FE / 127742
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

int Function_397(struct<2113> Param0) //Position: 0x1F319 / 127769
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_2112)
	{
		if (IS_ACTOR_VALID(&Param0 + 12[iVar041]))
		{
			if (GET_ACTOR_ENUM(&Param0 + 12[iVar041]) == 558)
			{
				return StackVal;
			}
		}
		iVar0++;
	}
	LOG_ERROR("could not find Landon's seat");
	return 4294967295;
}

bool Function_398() //Position: 0x1F395 / 127893
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_399(struct<2113> Param0) //Position: 0x1F3A8 / 127912
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_2112)
	{
		if (IS_ACTOR_VALID(&Param0 + 12[iVar041]))
		{
			if (GET_ACTOR_ENUM(&Param0 + 12[iVar041]) == 662)
			{
				return StackVal;
			}
		}
		iVar0++;
	}
	LOG_ERROR("could not find Muller's seat");
	return 4294967295;
}

bool Function_400(int iParam0, int iParam1) //Position: 0x1F424 / 128036
{
	if (!Function_404(&iParam0, iParam1))
	{
		Function_401(&iParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_401(var[] uParam0, int iParam1) //Position: 0x1F441 / 128065
{
	Function_76(&(uParam0[Function_403(iParam1)]), Function_402(iParam1));
	return;
}

int Function_402(int iParam0) //Position: 0x1F459 / 128089
{
	return Function_147((iParam0 % 32));
}

int Function_403(int iParam0) //Position: 0x1F467 / 128103
{
	return (iParam0 / 32);
}

bool Function_404(var[] uParam0, int iParam1) //Position: 0x1F472 / 128114
{
	return Function_24(uParam0[Function_403(iParam1)], Function_402(iParam1));
}

void Function_405(Vector3 vParam0, bool bParam1) //Position: 0x1F48A / 128138
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	GET_POSITION(&bParam1, &Var0);
	GET_ACTOR_AXIS(&bParam1, &Var2, 2);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(-1,2f, -1,2f, -1,2f), StackVal, StackVal);
	Var4.f_4 = (StackVal + 1,2f);
	GET_ACTOR_AXIS(&bParam1, &Var6, 0);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var4, StackVal) * Vector(0,3f, 0,3f, 0,3f), StackVal, StackVal);
	Var8 = Var0;
	Var8.f_4 = (StackVal + 1,07f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(&vParam0);
	}
	SET_CAMERA_POSITION(&vParam0, Var4);
	SET_CAMERA_TARGET_POSITION(&vParam0, Var8, 0);
	SET_CAMERA_FOV(&vParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&vParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&vParam0, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var10);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var4, Var10, 1);
	return;
}

void Function_406(struct<2125> Param0) //Position: 0x1F578 / 128376
{
	int iVar0;
	int iVar1;
	
	if (Function_375(&Param0))
	{
		iVar0 = Function_428(&Param0 + 1988, Param0.f_2124);
	}
	else
	{
		iVar0 = Function_428(&Param0 + 1988, Function_428(&Param0 + 1988, Param0.f_2124));
	}
	iVar1 = StackVal;
	if (StackVal > (&Param0 + 12[iVar141])->f_200)
	{
		Function_360(StackVal, &Param0, iVar1, 0, 1);
	}
	else
	{
		Function_360(&Param0, iVar1, (&Param0 + 12[iVar141])->f_200, 0, 1);
	}
	if (iVar1 == Function_196(0))
	{
		Function_359(&Local_381, Function_196(0));
	}
	return;
}

bool Function_407(int iParam0) //Position: 0x1F610 / 128528
{
	if (IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/bet_allin_pst") || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/bet_allin_B_pst"))
	{
		return 1;
	}
	return 0;
}

bool Function_408(int iParam0) //Position: 0x1F688 / 128648
{
	if ((((((((IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/R/bet_pst") || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/G/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/B/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/R2/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/G2/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/B2/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/R3/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/G3/bet_pst")) || IS_ACTION_NODE_PLAYING(&iParam0, "sit_poker/Player/bet_request/B3/bet_pst"))
	{
		return 1;
	}
	return 0;
}

void Function_409(struct<2741> Param0) //Position: 0x1F84C / 129100
{
	int iVar0;
	int iVar1;
	
	if (Function_375(&Param0))
	{
		iVar0 = Param0.f_2124;
	}
	else
	{
		iVar0 = Function_428(&Param0 + 1988, Param0.f_2124);
	}
	iVar1 = StackVal;
	if (iVar0 > 0 || iVar0 < 6)
	{
	}
	Function_426(&Local_381, &vLocal_246, iVar1, Function_196(0), 1);
	if (StackVal > (&Param0 + 12[iVar141])->f_200)
	{
		Function_360(StackVal, &Param0, iVar1, 1, 0);
	}
	else
	{
		Function_360(&Param0, iVar1, (&Param0 + 12[iVar141])->f_200, 1, 0);
	}
	Param0.f_2740 = StackVal;
	if (iVar1 == Function_196(0))
	{
		Function_359(&Local_381, Function_196(0));
	}
	return;
}

void Function_410(struct<2125> Param0) //Position: 0x1F8F8 / 129272
{
	int iVar0;
	
	if ((StackVal && (!Param0.f_2092 != 4294967295 || Local_290.f_264)) && (Param0.f_2124 != Param0.f_2120 || Param0.f_2124 != (&Param0 + 12[041])->f_196))
	{
		PRINTSTRING("Dealing CHEAT Card");
		PRINTNL();
		iVar0 = Function_412(&Param0 + 2132, &Param0 + 2092);
	}
	else
	{
		iVar0 = Function_334(&Param0 + 2132);
	}
	Function_335(&Param0 + 2564, &iVar0);
	Function_411(&Param0, &iVar0, 4, Function_194(1));
	return;
}

void Function_411(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1F98C / 129420
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<8> Var8;
	float fVar16;
	
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&iParam1, 0) };
	Var4.f_4 = (StackVal + (TO_FLOAT(bParam2) * 0,001f));
	GET_OBJECT_ORIENTATION(&Local_381 + 1988[(&Local_381 + 12[iParam341])->f_1962] + 8, &Var6);
	if (!GET_OBJECT_AXIS(&Local_381 + 1988[(&Local_381 + 12[iParam341])->f_1962] + 8, &Var0, 0))
	{
	}
	if (!GET_OBJECT_AXIS(&Local_381 + 1988[(&Local_381 + 12[iParam341])->f_1962] + 8, &Var2, 2))
	{
	}
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(TO_FLOAT((bParam2 - 2))), Vector(Var0, Var4, StackVal) * Vector(-0,1f, -0,1f, -0,1f), StackVal), StackVal, StackVal);
	fVar16 = RAND_FLOAT_GAUSSIAN(0.0f, 2,5f);
	Var6.f_4 = (StackVal + fVar16);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var4, StackVal) * Vector(0,06f, 0,06f, 0,06f), StackVal, StackVal);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Var4, StackVal) * Vector(0,04f, 0,04f, 0,04f), StackVal, StackVal);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Local_290 + 232), Var4, StackVal);
	Var4 = (Var4 + RAND_FLOAT_GAUSSIAN(0.0f, 0,005f));
	Var4.f_8 = (StackVal + RAND_FLOAT_GAUSSIAN(0.0f, 0,005f));
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*(&iParam0 + 2684[bParam2]) = CREATE_PROP_IN_LAYOUT(&iLocal_239, Function_53(), &Var8, Var4, Var6, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
}

var Function_412(var uParam0, struct<5> Param1) //Position: 0x1FAC1 / 129729
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	iVar1 = 4294967295;
	iVar0 = uParam0.f_424;
	while (iVar0 < (uParam0.f_428 - 1))
	{
		bVar3 = RAND_INT_RANGE(false, 100);
		if (uParam0[iVar0] != Param1 && bVar3 < 50)
		{
			uVar2 = &uParam0[iVar0];
			uParam0[iVar0] = &uParam0[uParam0.f_424];
			uParam0[uParam0.f_424] = &uVar2;
			uParam0.f_424++;
			return &(uParam0[(uParam0.f_424 - 1)]);
		}
		if (StackVal == StackVal)
		{
			if (iVar1 != 4294967295)
			{
				if (uParam0[iVar0] >= uParam0[iVar1])
				{
					iVar1 = iVar0;
				}
			}
			else
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	bVar3 = RAND_INT_RANGE(false, 100);
	if (bVar3 >= 50)
	{
		uVar2 = &uParam0[iVar1];
		uParam0[iVar1] = &uParam0[uParam0.f_424];
		uParam0[uParam0.f_424] = &uVar2;
	}
	uParam0.f_424++;
	return &(uParam0[(uParam0.f_424 - 1)]);
}

void Function_413(struct<2125> Param0) //Position: 0x1FBD9 / 130009
{
	int iVar0;
	
	if ((StackVal && (!Param0.f_2092 != 4294967295 || Local_290.f_264)) && (Param0.f_2124 != Param0.f_2120 || Param0.f_2124 != (&Param0 + 12[041])->f_196))
	{
		PRINTSTRING("Dealing CHEAT Card");
		PRINTNL();
		iVar0 = Function_412(&Param0 + 2132, &Param0 + 2092);
	}
	else
	{
		iVar0 = Function_334(&Param0 + 2132);
	}
	Function_335(&Param0 + 2564, &iVar0);
	Function_411(&Param0, &iVar0, 3, Function_194(1));
	return;
}

void Function_414(struct<2125> Param0) //Position: 0x1FC6D / 130157
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((StackVal && (!Param0.f_2092 != 4294967295 || Local_290.f_264)) && (Param0.f_2124 != Param0.f_2120 || Param0.f_2124 != (&Param0 + 12[041])->f_196))
		{
			PRINTSTRING("Dealing CHEAT Card");
			PRINTNL();
			uVar1 = Function_412(&Param0 + 2132, &Param0 + 2092);
		}
		else
		{
			uVar1 = Function_334(&Param0 + 2132);
		}
		Function_335(&Param0 + 2564, &uVar1);
		Function_411(&Param0, &uVar1, iVar0, Function_194(1));
		iVar0++;
	}
	return;
}

void Function_415(int iParam0, bool bParam1) //Position: 0x1FD14 / 130324
{
	if (bParam1)
	{
		Function_76(&Global_122919 + 192, iParam0);
	}
	else
	{
		Function_12(&Global_122919 + 192, iParam0);
	}
	return;
}

void Function_416(int iParam0) //Position: 0x1FD38 / 130360
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_OBJECT_VALID(&iLocal_366))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Function_417(&iParam0 + 12[Function_194(1)41], &Var0, &Var2);
		iLocal_366 = CREATE_PROP_IN_LAYOUT(&iLocal_239, "DealerButton", "$/fragments/p_gen_dealerButton01x", Var0, Var2, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_417(var uParam0, struct<2> Param1) //Position: 0x1FDAC / 130476
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uParam0), &Var2);
		Param1 = Vector(-0,033f, 0,8f, -0,45f);
		iParam2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 145.0f, 0.0f), Var2, StackVal);
		UNK_0xF76F2BB3(&Param1, &Var2, 0, 4);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param1, StackVal);
	}
	return;
}

void Function_418(var uParam0, int iParam1) //Position: 0x1FE0F / 130575
{
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&uParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam0, GET_OBJECT_FROM_ACTOR(&iParam1), 0);
	return;
}

void Function_419(float fParam0, float fParam1, var uParam2) //Position: 0x1FE29 / 130601
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		Var0 = Vector(-0,456f, 0,8f, 0,1f);
		Var2 = Vector(0.0f, -55.0f, 0.0f);
		GET_OBJECT_RELATIVE_ORIENTATION(&fParam0, Var2, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&fParam0, Var0, &fParam1);
	}
	return;
}

bool Function_420(bool bParam0) //Position: 0x1FE72 / 130674
{
	if (((Function_425() && !iLocal_226 != 1000) && !iLocal_226 != 1104) && !iLocal_226 != 1105)
	{
		HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
		HUD_FADE_OUT(1.0f, 1f, 1);
		iLocal_226 = 1105;
	}
	switch (iLocal_226)
	{
		case 0x000003E8:
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(1.0f, 1f, 1);
			Function_424(&bParam0, &Local_381 + 12[Function_194(1)41]);
			Function_229(&iLocal_241);
			iLocal_226 = 1004;
			break;
		
		case 0x000003EC:
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_229(&iLocal_241);
				iLocal_226 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (!HUD_IS_FADING())
			{
				Function_370("Poker_Cheating_msg01", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_241);
				iLocal_226 = 1006;
			}
			else
			{
				PRINTSTRING("Waiting for Fade In to finish");
				PRINTNL();
			}
			break;
		
		case 0x000003EE:
			if (Function_454(&iLocal_241) <= 5.0f)
			{
				Function_370("Poker_Cheating_msg02", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_241);
				iLocal_226 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_454(&iLocal_241) <= 5.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_229(&iLocal_241);
				iLocal_226 = 1104;
			}
			break;
		
		case 0x00000450:
			if (HUD_IS_FADED())
			{
				Function_229(&iLocal_241);
				iLocal_226 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (HUD_IS_FADED())
			{
				Function_421(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_229(&iLocal_241);
				iLocal_226 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_421(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x20028 / 131112
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_192();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_88(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_3();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_422(&uParam9, &uParam10);
}

void Function_422(var uParam0, bool bParam1) //Position: 0x200F7 / 131319
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_423();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_423() //Position: 0x201C6 / 131526
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

void Function_424(var uParam0, var uParam1) //Position: 0x2023E / 131646
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	GET_POSITION(&uParam1, &Var0);
	GET_ACTOR_AXIS(&uParam1, &Var2, 2);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Var0, StackVal) * Vector(-1,2f, -1,2f, -1,2f), StackVal, StackVal);
	Var4.f_4 = (StackVal + 1,2f);
	Var6 = Var0;
	Var6.f_4 = (StackVal + 1,1f);
	SET_CAMERA_POSITION(&uParam0, Var4);
	SET_CAMERA_TARGET_POSITION(&uParam0, Var6, 0);
	SET_CAMERA_FOV(&uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uParam0, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var8);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var4, Var8, 1);
	return;
}

int Function_425() //Position: 0x202EE / 131822
{
	if (UNK_0x062C5047("@UI.ACCEPT", 1, 0))
	{
		return 1;
	}
	return 0;
}

void Function_426(int iParam0, Vector3 vParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2030F / 131855
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	struct<2> Var12;
	struct<2> Var14;
	struct<2> Var16;
	
	if (iParam2 > 6 && iParam2 <= 0)
	{
		uVar0 = &iParam0 + 12[iParam241];
	}
	if (iParam3 > 6 && iParam3 <= 0)
	{
		uVar1 = &iParam0 + 12[iParam341];
	}
	else
	{
		uVar1 = Function_192();
	}
	if (!IS_ACTOR_VALID(&uVar0) || !IS_ACTOR_VALID(&uVar1))
	{
		return;
	}
	GET_POSITION(&uVar1, &Var2);
	GET_ACTOR_AXIS(&uVar1, &Var4, 2);
	GET_ACTOR_AXIS(&uVar1, &Var6, 0);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var2, StackVal) * Vector(-1,5f, -1,5f, -1,5f), StackVal, StackVal);
	Var8.f_4 = (StackVal + 1,65f);
	Var8 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var8, StackVal) * Vector(1,7f, 1,7f, 1,7f), StackVal, StackVal);
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var6, Var2, StackVal) * Vector(0,79f, 0,79f, 0,79f), StackVal, StackVal);
	Var10.f_4 = (StackVal + 0,65f);
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Var10, StackVal) * Vector(-2.0f, -2.0f, -2.0f), StackVal, StackVal);
	GET_CAMERA_POSITION(&vParam1, &Var12);
	GET_CAMERA_DIRECTION(&vParam1, &Var14);
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(&vParam1) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vParam1))
	{
		if (bParam4)
		{
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vParam1) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(&vParam1);
			}
			SET_CAMERA_POSITION(&vParam1, Var8);
			SET_CAMERA_TARGET_POSITION(&vParam1, Var10, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERA_FOV(&vParam1, 31.0f);
			}
			else
			{
				SET_CAMERA_FOV(&vParam1, 41.0f);
			}
		}
		else
		{
			if (!IS_OBJECT_VALID(&uLocal_368))
			{
				uLocal_368 = CREATE_CAMERASHOT_IN_LAYOUT(&iLocal_239, Function_53());
			}
			if (!IS_OBJECT_VALID(&iLocal_370))
			{
				iLocal_370 = CREATE_CAMERASHOT_IN_LAYOUT(&iLocal_239, Function_53());
			}
			Function_427(&uLocal_368);
			Function_427(&iLocal_370);
			SET_CAMERASHOT_POSITION(&uLocal_368, Var12);
			SET_CAMERASHOT_DIRECTION(&uLocal_368, Var14, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERASHOT_FOV(&uLocal_368, 31.0f);
			}
			else
			{
				SET_CAMERASHOT_FOV(&uLocal_368, 41.0f);
			}
			SET_CAMERASHOT_POSITION(&iLocal_370, Var8);
			SET_CAMERASHOT_TARGET_POSITION(&iLocal_370, Var10, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERASHOT_FOV(&iLocal_370, 31.0f);
			}
			else
			{
				SET_CAMERASHOT_FOV(&iLocal_370, 41.0f);
			}
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(&vParam1) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(&vParam1);
			}
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(&vParam1, &uLocal_368, &iLocal_370, 0,75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(&vParam1, &iLocal_370, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(&vParam1, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&vParam1, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var16);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(Var8, Var16, 1);
}

void Function_427(int iParam0) //Position: 0x2058D / 132493
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&iParam0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	return;
}

int Function_428(struct<2>[] Param0, int iParam1) //Position: 0x205A0 / 132512
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
	}
	if (Param0[iParam12])
	{
		return iParam1;
	}
	return 4294967295;
}

void Function_429(int iParam0) //Position: 0x20609 / 132617
{
	Function_76(&uLocal_245, iParam0);
	return;
}

void Function_430(bool bParam0, int iParam1) //Position: 0x20616 / 132630
{
	iLocal_1283 = bParam0;
	return;
}

void Function_431(int[] iParam0, int iParam1) //Position: 0x20621 / 132641
{
	Function_12(&(iParam0[Function_403(iParam1)]), Function_402(iParam1));
	return;
}

void Function_432(int[] iParam0) //Position: 0x20639 / 132665
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

void Function_433(struct<1989> Param0) //Position: 0x20659 / 132697
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			if ((&Param0 + 12[StackVal41] + 72)->f_112 == 2)
			{
				if (StackVal || IS_ACTION_NODE_PLAYING(&Param0 + 12[IS_ACTION_NODE_PLAYING(&Param0 + 12[StackVal41], "sit_poker/Player/bet_request/fold/fold_pst")41], "sit_poker/Player/bet_request/fold_B/fold_B_pst"))
				{
					Function_434(StackVal, &Param0);
				}
				if (StackVal || IS_ATTACHMENT_VALID(&Param0 + 12[141] + 72 + 88[IS_ATTACHMENT_VALID(&Param0 + 12[041] + 72 + 88[StackVal])]))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 12[StackVal41], "sit_poker/Player/card_idle"))
					{
						REMOVE_OBJECT_ATTACHMENT(&Param0 + 12[041] + 72 + 88[StackVal]);
						REMOVE_OBJECT_ATTACHMENT(&Param0 + 12[141] + 72 + 88[StackVal]);
					}
				}
			}
		}
		else if (GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(&Param0 + 1988[iVar02] + 8), "UseCase1") == "")
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 1988[iVar02] + 8)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 1988[iVar02] + 8), false);
			}
		}
		iVar0++;
	}
	return;
}

void Function_434(int iParam0, int iParam1) //Position: 0x20843 / 133187
{
	Function_435(&iParam0 + 12[iParam141] + 72);
	return;
}

void Function_435(struct<117> Param0) //Position: 0x20857 / 133207
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		Param0[iVar0] = 4294967295;
		Param0[iVar0].f_4 = 4294967295;
		iVar0++;
	}
	Param0.f_112 = 0;
	Param0.f_116 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0.f_64)
	{
		if (IS_ATTACHMENT_VALID(&Param0 + 88[iVar0]))
		{
			REMOVE_OBJECT_ATTACHMENT(&Param0 + 88[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_436(struct<1989> Param0) //Position: 0x208C3 / 133315
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1988)
	{
		if ((*&Param0 + 1988)[iVar02])
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (IS_ATTACHMENT_VALID(&Local_381 + 12[iVar141] + 280[StackVal]))
				{
					if (Function_408(&Local_381 + 12[StackVal41]))
					{
					}
				}
			}
		}
	}
}

void Function_437(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, float fParam15, float fParam16, float fParam17, var uParam18, float fParam19, float fParam20, float fParam21, float fParam22, float fParam23, float fParam24, var uParam25, float fParam26, float fParam27, float fParam28, float fParam29, float fParam30, float fParam31, var uParam32, float fParam33, float fParam34, float fParam35, var uParam36, float fParam37, float fParam38, float fParam39, var uParam40, int iParam41) //Position: 0x2098D / 133517
{
	struct<2> Var0;
	struct<2> Var2;
	
	REMOVE_OBJECT_ATTACHMENT(&iParam0 + 280[iParam41]);
	Function_438(&iParam0, &Var0, &Var2);
	SET_OBJECT_POSITION(&iParam0 + 240[iParam41], Var0);
	SET_OBJECT_ORIENTATION(&iParam0 + 240[iParam41], Var2);
}

void Function_438(float fParam0, float fParam1, var uParam2) //Position: 0x209CE / 133582
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_hillb"))
		{
			Var0 = Vector(0,0731f, 0,8f, -0,234f);
			Var2 = Vector(0.0f, -131,5045f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_gped"))
		{
			Var0 = Vector(0,0568f, 0,8f, -0,2452f);
			Var2 = Vector(0.0f, -146,2406f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_oldm"))
		{
			Var0 = Vector(0,107f, 0,8f, -0,226f);
			Var2 = Vector(0.0f, -132,9615f, 0.0f);
		}
		else
		{
			Var0 = Vector(0,072f, 0,8f, -0,2626f);
			Var2 = Vector(0.0f, -145.0f, 0.0f);
		}
		GET_OBJECT_RELATIVE_ORIENTATION(&fParam0, Var2, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&fParam0, Var0, &fParam1);
	}
	return;
}

void Function_439(int iParam0, float fParam1, float fParam2, var uParam3, float fParam4, float fParam5, float fParam6, var uParam7, float fParam8, float fParam9, float fParam10, var uParam11, float fParam12, float fParam13, float fParam14, var uParam15, float fParam16, float fParam17, float fParam18, var uParam19, float fParam20, float fParam21, float fParam22, var uParam23, float fParam24, float fParam25, float fParam26, var uParam27, float fParam28, float fParam29, float fParam30, var uParam31, float fParam32, float fParam33, float fParam34, var uParam35, float fParam36, float fParam37, float fParam38, var uParam39, float fParam40, int iParam41) //Position: 0x20AC9 / 133833
{
	struct<2> Var0;
	struct<2> Var2;
	
	REMOVE_OBJECT_ATTACHMENT(&iParam0 + 280[iParam41]);
	Function_440(&iParam0, &Var0, &Var2, iParam41);
	SET_OBJECT_POSITION(&iParam0 + 240[iParam41], Var0);
	SET_OBJECT_ORIENTATION(&iParam0 + 240[iParam41], Var2);
}

void Function_440(float fParam0, struct<2> Param1, int iParam3) //Position: 0x20B0C / 133900
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_hillb"))
		{
			if (iParam3 == 0)
			{
				Var0 = Vector(-0,0233f, 0,8051f, -0,2857f);
				Var2 = Vector(180.0f, -190,5097f, 0.0f);
			}
			else if (iParam3 == 1)
			{
				Var0 = Vector(0,0311f, 0,8051f, -0,3038f);
				Var2 = Vector(180.0f, -190,5097f, 0.0f);
			}
			else
			{
				Var0 = Vector(0,0844f, 0,8051f, -0,3183f);
				Var2 = Vector(180.0f, -190,5097f, 0.0f);
			}
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_gped"))
		{
			if (iParam3 == 0)
			{
				Var0 = Vector(0,0003f, 0,8047f, -0,2875f);
				Var2 = Vector(180.0f, 90.0f, 360.0f);
			}
			else if (iParam3 == 1)
			{
				Var0 = Vector(0,0531f, 0,8047f, -0,3054f);
				Var2 = Vector(180.0f, 90.0f, 360.0f);
			}
			else
			{
				Var0 = Vector(0,1011f, 0,8047f, -0,3224f);
				Var2 = Vector(180.0f, 90.0f, 360.0f);
			}
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_oldm"))
		{
			if (iParam3 == 0)
			{
				Var0 = Vector(0,0021f, 0,8f, -0,2839f);
				Var2 = Vector(0.0f, 0.0f, 0.0f);
			}
			else if (iParam3 == 1)
			{
				Var0 = Vector(0,0482f, 0,8f, -0,3036f);
				Var2 = Vector(0.0f, 0.0f, 0.0f);
			}
			else
			{
				Var0 = Vector(0,0958f, 0,8f, -0,3216f);
				Var2 = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		else if (iParam3 == 0)
		{
			Var0 = Vector(-0,0122f, 0,8f, -0,289f);
			Var2 = Vector(0.0f, -180,161f, 0.0f);
		}
		else if (iParam3 == 1)
		{
			Var0 = Vector(0,0365f, 0,8f, -0,3085f);
			Var2 = Vector(0.0f, -180,161f, 0.0f);
		}
		else
		{
			Var0 = Vector(0,0912f, 0,8f, -0,321f);
			Var2 = Vector(0.0f, -180,161f, 0.0f);
		}
		GET_OBJECT_RELATIVE_ORIENTATION(&fParam0, Var2, &Param2);
		GET_OBJECT_RELATIVE_POSITION(&fParam0, Var0, &Param1);
		PRINTSTRING("GET_BET_CHIP_IN_POSITION_AND_ORIENTATION_RELATIVE_TO_ACTOR returning ");
		PRINTVECTOR(Param1);
		PRINTNL();
		PRINTSTRING("GET_BET_CHIP_IN_POSITION_AND_ORIENTATION_RELATIVE_TO_ACTOR returning ");
		PRINTVECTOR(Param2);
		PRINTNL();
	}
}

void Function_441() //Position: 0x20E05 / 134661
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_442())
			{
				START_MINIGAME(5);
				UI_ENTER("Scores");
				UI_ENTER("nScores.s0");
				UI_ENTER("nScores.s1");
				UI_ENTER("nScores.s2");
				UI_SET_TEXT("nScores.s0", "Poker_ChipsLabel");
				UI_SET_TEXT("nScores.s1", "Poker_PotLabel");
				UI_SET_TEXT("nScores.s2", "Poker_BetLabel");
				UI_LABEL_SET_VALUE("nBetAmount", false);
				UI_LABEL_SET_VALUE("nScores.s0", false);
				UI_LABEL_SET_VALUE("nScores.s1", false);
				UI_LABEL_SET_VALUE("nScores.s2", false);
				if (Local_290.f_264)
				{
					Local_381.f_2124 = Function_397(&Local_381);
				}
				else
				{
					Local_381.f_2124 = Local_381.f_2120;
				}
				iVar0 = Function_428(&Local_381 + 1988, Local_381.f_2124);
				uVar1 = StackVal;
				Function_426(&Local_381, &vLocal_246, uVar1, Function_196(0), 1);
				SET_ACTION_NODE_FOR_ACTOR(&Local_381 + 12[Function_194(1)41], "sit_poker/Dealer/idle");
				if (!IS_OBJECT_VALID(&uLocal_364))
				{
					NET_OBJECT_REPLICATION_MODE_START(17, 0);
					uLocal_364 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_239, "DeckOfCards", "$/fragments/p_gen_cards02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
					bLocal_1261 = ATTACH_OBJECTS_NO_DRV(StackVal, StackVal, &uLocal_364, GET_OBJECT_FROM_ACTOR(&Local_381 + 12[Function_194(1)41]), "elbow_l_attachment", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
					NET_OBJECT_REPLICATION_MODE_END(17);
					Function_418(&uLocal_364, &Local_381 + 12[Function_194(1)41]);
				}
				Function_416(&Local_381);
				Function_359(&Local_381, Function_196(0));
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_229(&iLocal_241);
				iLocal_1 = 106;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_370("Poker_PlayerChooseSeat_Objective", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_229(&iLocal_241);
				iLocal_1 = 7;
			}
			break;
		
		case 0x00000008:
			if (Function_454(&iLocal_241) < 1.0f)
			{
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_0 = 1;
				iLocal_1 = 0;
				Function_430(0, 0);
			}
			break;
	}
	return;
}

bool Function_442() //Position: 0x210BE / 135358
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	
	switch (iLocal_226)
	{
		case 0x000003E8:
			iVar0 = 0;
			while (iVar0 <= Local_290.f_12)
			{
				if (IS_ACTOR_VALID(&Local_290 + 12[iVar0]))
				{
					Function_450(&Local_290 + 12[iVar0], &Local_381, iVar0, (*&Local_290 + 68)[iVar0]);
					if (&Local_290 + 12[iVar0] != Function_192())
					{
						SET_DRAW_ACTOR(&Local_290 + 12[iVar0], 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				Function_449(GET_GRINGO_FROM_OBJECT(&Local_381 + 1988[iVar02] + 8));
				if (!(*&Local_381 + 1988)[iVar02])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Local_381 + 1988[iVar02] + 8), false);
				}
				if (Local_381.f_2120 == iVar0 && (*&Local_381 + 1988)[iVar02])
				{
					GET_OBJECT_POSITION(&Local_381 + 1988[iVar02] + 8, &Var1);
					iVar5 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var1, 1.0f, "p_gen_chairpokerfancy01x", 1);
					if (!IS_PHYSINST_VALID(&iVar5))
					{
						iVar5 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var1, 1.0f, "p_gen_chair05x", 1);
					}
					if (IS_PHYSINST_VALID(&iVar5))
					{
						Function_448(&Local_381 + 12[StackVal41], &Var1, &Var3);
						SET_OBJECT_POSITION(GET_OBJECT_FROM_PHYSINST(&iVar5), Var1);
						SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_PHYSINST(&iVar5), Var3);
					}
					else
					{
						LOG_ERROR("NearestChair not valid");
					}
				}
				iVar0++;
			}
			Function_446();
			SAY_SINGLE_LINE_CONTEXT(&Local_381 + 12[Function_196(1)41], 496, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			Function_229(&iLocal_241);
			iLocal_226 = 1006;
			break;
		
		case 0x000003EE:
			if ((IS_ACTION_NODE_PLAYING(Function_192(), "sit_poker/Player/join_game/idle") && Function_445()) && Function_444(Local_290.f_260))
			{
				iVar0 = 0;
				while (iVar0 <= Local_290.f_12)
				{
					if (IS_ACTOR_VALID(&Local_290 + 12[iVar0]))
					{
						SET_DRAW_ACTOR(&Local_290 + 12[iVar0], 1);
					}
					iVar0++;
				}
				Function_390(&Local_381);
				if (Local_290.f_264)
				{
					Function_443(1.0f);
				}
				return 1;
			}
			if (Function_454(&iLocal_241) < 15.0f)
			{
				Function_121(((&Local_381 + 12[Function_196(1)41])->f_200 / 10), 1, 1);
				Function_197(2);
			}
			break;
		
		case 0x000003F0:
			if (!Function_308(1008, 1, 0x3f800000))
			{
				NET_LOG(true, "Poker", "Waiting for other players to hurry up", 0, 0, 0, 0);
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_443(bool bParam0) //Position: 0x21385 / 136069
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

int Function_444(bool bParam0) //Position: 0x213A2 / 136098
{
	if (!UNK_0x9D20BDC4("numberSystem") && !bParam0)
	{
		return 0;
	}
	return 1;
}

int Function_445() //Position: 0x213C8 / 136136
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (!HAS_STRING_TABLE_LOADED("nminigames"))
	{
		return 0;
	}
	if (!HAS_ACTION_TREE_LOADED("custom/sit_poker"))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_crd_01x", 0)))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_gen_cards02x", 0)))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_gen_dealerButton01x", 0)))
	{
		return 0;
	}
	if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK"))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&Var2, 0) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar3, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	uVar11 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(&uVar11))
	{
		return 0;
	}
	uVar12 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(&uVar11))
	{
		return 0;
	}
	uVar13 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(&uVar11))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar3, Function_181(bVar0), 32);
		if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar3, 0)))
		{
			return 0;
		}
		bVar0++;
	}
	if (!HAS_ACTION_TREE_LOADED("custom/fake_poker"))
	{
		return 0;
	}
	if (!STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID("fake_poker", 1)))
	{
		return 0;
	}
	return 1;
}

void Function_446() //Position: 0x21612 / 136722
{
	int iVar0;
	var uVar1;
	
	Function_447(Function_192());
	Function_245(8192);
	if (UNK_0xE094DB31(Function_192(), 1))
	{
		Function_429(8192);
		DEEQUIP_ACCESSORY(Function_192(), 1);
	}
	Function_245(4194304);
	if (Function_112(4))
	{
		Function_429(4194304);
		Function_190(4, 0);
	}
	iVar0 = 0;
	while (iVar0 <= Local_290.f_12)
	{
		if (IS_ACTOR_VALID(&Local_290 + 12[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH(&Local_290 + 12[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_290 + 12[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_290 + 12[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH(&Local_290 + 12[iVar0], 4, true);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Local_290 + 12[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_290.f_12)
	{
		uVar1 = &Local_290 + 12[iVar0];
		if (IS_ACTOR_VALID(&uVar1))
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uVar1, 26, false);
		}
		iVar0++;
	}
	return;
}

void Function_447(int iParam0) //Position: 0x216F9 / 136953
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

void Function_448(float fParam0, float fParam1, var uParam2) //Position: 0x2171F / 136991
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&fParam0))
	{
		if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_hillb"))
		{
			Var0 = Vector(0,2827f, 0.0f, 0,2655f);
			Var2 = Vector(0.0f, 176,9453f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_gped"))
		{
			Var0 = Vector(0,2827f, 0.0f, 0,216f);
			Var2 = Vector(0.0f, 180.0f, 0.0f);
		}
		else if (ACTOR_HAS_ANIM_SET(&fParam0, "sit_poker_oldm"))
		{
			Var0 = Vector(0,283f, 0.0f, 0,245f);
			Var2 = Vector(0.0f, 180.0f, 0.0f);
		}
		else
		{
			Var0 = Vector(0,244f, 0.0f, 0,278f);
			Var2 = Vector(0.0f, 180.0f, 0.0f);
		}
		GET_OBJECT_RELATIVE_ORIENTATION(&fParam0, Var2, &uParam2);
		GET_OBJECT_RELATIVE_POSITION(&fParam0, Var0, &fParam1);
	}
	return;
}

void Function_449(int iParam0) //Position: 0x2180A / 137226
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

void Function_450(var uParam0, struct<2121> Param1) //Position: 0x21884 / 137348
{
	bool bVar0;
	
	if (!bParam2 != 4294967295 && !(*&Param1 + 1988)[bParam22])
	{
		PRINTSTRING("Adding player at specific seat ");
		PRINTINT(bParam2);
		PRINTNL();
		Function_451(&Param1 + 12[Param1.f_211241], &uParam0, bParam2, uParam3);
		(*&Param1 + 1988)[bParam22] = 1;
		(&Param1 + 1988[bParam22])->f_4 = Param1.f_2112;
		Param1.f_2112++;
		if (IS_ACTOR_PLAYER(&uParam0))
		{
			if (IS_LOCAL_PLAYER(&uParam0))
			{
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
				Param1.f_2120 = bParam2;
				RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(&uParam0, "nsit_poker", 0);
				while (!ACTOR_HAS_ANIM_SET(&uParam0, "nsit_poker") && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param1 + 1988[bParam22] + 8), true);
				if (Local_290.f_264)
				{
					SNAP_ACTOR_TO_GRINGO(&uParam0, &Param1 + 1988[bParam22] + 8, "UseCase2", true, 0, 1);
				}
				else
				{
					SNAP_ACTOR_TO_GRINGO(&uParam0, &Param1 + 1988[bParam22] + 8, "UseCase2", false, 0, 1);
				}
				Function_465(&vLocal_246, GET_GRINGO_FROM_OBJECT(&Param1 + 1988[bParam22] + 8));
				TASK_USE_GRINGO(&uParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 1988[bParam22] + 8), "UseCase2", 4294967295, 1);
			}
		}
		else
		{
			bVar0 = RAND_INT_RANGE(false, 2);
			if (Global_43789 == Global_46914[0])
			{
				bVar0 = RAND_INT_RANGE(false, true);
			}
			switch (bVar0)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&uParam0, "sit_poker_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(&uParam0, "sit_poker_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&uParam0, "sit_poker_oldm", 0);
					while (!ACTOR_HAS_ANIM_SET(&uParam0, "sit_poker_oldm") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(&uParam0, "sit_poker_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(&uParam0, "sit_poker_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
			}
			TASK_USE_GRINGO(&uParam0, GET_GRINGO_FROM_OBJECT(&Param1 + 1988[bParam22] + 8), "UseCase1", true, 1);
			SET_ACTION_NODE_FOR_ACTOR(&uParam0, "sit_poker/Player/card_idle/idle");
			TASK_PRIORITY_SET(&uParam0, true);
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(&uParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_451(struct<217> Param0) //Position: 0x21C06 / 138246
{
	if (!AI_IGNORE_ACTOR(&uParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(&uParam1, 1);
	SET_AUTO_CONVERSATION_LOOK(&uParam1, 0);
	Param0 = &uParam1;
	Param0.f_196 = uParam2;
	if (IS_ACTOR_PLAYER(&Param0))
	{
		if (Local_290.f_248)
		{
			Function_453(Local_290.f_256, 1);
		}
		else
		{
			Function_453((iParam3 / 10), 1);
		}
		Param0.f_192 = 1;
	}
	else if (Function_452(&uParam1) >= 4294967295)
	{
		Param0.f_192 = 2;
	}
	else
	{
		Param0.f_192 = 0;
	}
	Function_238(&Param0 + 72);
	Param0.f_200 = iParam3;
	Param0.f_204 = 0;
	Param0.f_208 = 0;
	Param0.f_216 = 0;
	Param0.f_212 = 0;
	strcpy(&Param0 + 8, "__invalid__", 32);
	ACTOR_HOLSTER_WEAPON(&Param0, 1);
}

int Function_452(int iParam0) //Position: 0x21CE1 / 138465
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

int Function_453(bool bParam0, bool bParam1) //Position: 0x21D27 / 138535
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_119(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	return 1;
}

float Function_454(vector3 vParam0) //Position: 0x21DB8 / 138680
{
	if (Function_228(&vParam0))
	{
		if (Function_455(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_455(bool bParam0) //Position: 0x21E85 / 138885
{
	return Function_24(bParam0, 2);
}

void Function_456(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53) //Position: 0x21E93 / 138899
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= uParam0.f_428)
	{
		Function_193(&(uParam0[iVar0]), &uVar1);
		iVar0++;
	}
}

void Function_457(struct<3317> Param0) //Position: 0x21EBD / 138941
{
	Param0.f_8 = Local_290.f_252;
	Param0.f_4 = (StackVal / 2);
	Param0.f_2112 = 0;
	Param0.f_2116 = 0;
	Param0.f_2736 = 0;
	Param0.f_2740 = 0;
	Param0.f_2124 = 0;
	Param0.f_2128 = 0;
	Param0.f_2732 = 0;
	Param0.f_2804 = 0;
	Param0.f_3316 = 0;
	Function_276(&Param0);
	Function_275(&Param0 + 2132);
	Function_458(&Param0 + 1988);
	Function_238(&Param0 + 2564);
	Function_266(&Param0 + 2092);
	(*&Param0 + 3320)[0] = 1.0f;
	(*&Param0 + 3320)[1] = 1.0f;
	(*&Param0 + 3320)[2] = 0,35f;
	(*&Param0 + 3320)[3] = 0,4f;
	(*&Param0 + 3320)[4] = 0,45f;
	(*&Param0 + 3320)[5] = 0,5f;
	(*&Param0 + 3320)[6] = 0,5f;
	(*&Param0 + 3384)[0] = 1.0f;
	(*&Param0 + 3384)[1] = 1.0f;
	(*&Param0 + 3384)[2] = 0,6f;
	(*&Param0 + 3384)[3] = 0,65f;
	(*&Param0 + 3384)[4] = 0,7f;
	(*&Param0 + 3384)[5] = 0,75f;
	(*&Param0 + 3384)[6] = 0,75f;
	(*&Param0 + 3448)[0] = 1.0f;
	(*&Param0 + 3448)[1] = 1.0f;
	(*&Param0 + 3448)[2] = 0,8f;
	(*&Param0 + 3448)[3] = 0,8f;
	(*&Param0 + 3448)[4] = 0,85f;
	(*&Param0 + 3448)[5] = 0,85f;
	(*&Param0 + 3448)[6] = 0,85f;
	return;
}

void Function_458(struct<2>[] Param0) //Position: 0x22050 / 139344
{
	float fVar0;
	var uVar1[6];
	int iVar8;
	int iVar9;
	int iVar10;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar8 = 0;
	while (iVar8 <= Param0)
	{
		Param0[iVar82] = 0;
		iVar9 = Function_459(StackVal, *(&Local_290 + 128[iVar82]));
		while ((!IS_GRINGO_VALID(&iVar9) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar0 + 5.0f))
		{
			iVar9 = Function_459(StackVal, *(&Local_290 + 128[iVar82]));
			WAIT(false);
		}
		uVar1[iVar8] = &iVar9;
		iVar10 = 0;
		while (iVar10 <= iVar8)
		{
			if (&uVar1[iVar10] == &iVar9)
			{
				iVar9 = "";
				Function_197(2);
			}
			iVar10++;
		}
		if (IS_GRINGO_VALID(&iVar9))
		{
			(&Param0[iVar82] + 8) = GET_OBJECT_FROM_GRINGO(&iVar9);
		}
		Param0[iVar82].f_4 = 4294967295;
		iVar8++;
	}
	return;
}

var Function_459(var uParam0, bool bParam1) //Position: 0x22114 / 139540
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

void Function_460() //Position: 0x22156 / 139606
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar11;
	var uVar12;
	var uVar13;
	
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	Function_461("$/fragments/p_gen_cards02x");
	Function_461("$/fragments/p_crd_01x");
	Function_461("$/fragments/p_gen_dealerButton01x");
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&Var2, 0) };
			Function_461(&cVar3);
			iVar1++;
		}
		bVar0++;
	}
	uVar11 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	STREAMING_REQUEST_PROP(&uVar11, true);
	uVar12 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	STREAMING_REQUEST_PROP(&uVar12, true);
	uVar13 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	STREAMING_REQUEST_PROP(&uVar13, true);
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar3, Function_181(bVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar3, 0), true);
		bVar0++;
	}
	STREAMING_REQUEST_GRINGO(GET_ASSET_ID("fake_poker", 1));
	return;
}

int Function_461(char* cParam0) //Position: 0x2230C / 140044
{
	char* cVar0[64];
	
	if (!STREAMING_REQUEST_PROP(GET_ASSET_ID(&cParam0, 0), true))
	{
		strcpy(&cVar0, "Failed to load ", 64);
		stradd(&cVar0, &cParam0, 64);
		return 0;
	}
	return 1;
}

bool Function_462() //Position: 0x22341 / 140097
{
	return Function_463();
}

int Function_463() //Position: 0x2234A / 140106
{
	if (!HAS_ANIM_SET_LOADED("nsit_poker"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_gped"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_hillb"))
	{
		return 0;
	}
	if (!Global_43789 != Global_46914[0])
	{
		if (!HAS_ANIM_SET_LOADED("sit_poker_oldm"))
		{
			return 0;
		}
	}
	return 1;
}

void Function_464() //Position: 0x223C9 / 140233
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_465(var uParam0, bool bParam1) //Position: 0x223D5 / 140245
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
	struct<2> Var19;
	
	if (IS_GRINGO_VALID(&bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&bParam1), &Var0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&bParam1), &Var2, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&bParam1), &Var4, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(&bParam1), &Var6, 2);
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
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var19);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(Var15, Var19, 1);
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_466() //Position: 0x22564 / 140644
{
	var uVar0;
	int iVar1;
	
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(0);
	Function_484();
	iLocal_239 = CREATE_LAYOUT("Poker01");
	Function_483();
	if (!Local_290.f_264)
	{
		Function_481();
	}
	Function_480(&iLocal_241);
	Function_480(&iLocal_376);
	iLocal_1260 = 0;
	iLocal_1298 = 1;
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_249 = GET_CURRENT_GAME_TIME();
	vLocal_246 = CREATE_CAMERA_IN_LAYOUT(&iLocal_239, "pokerCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(&vLocal_246, "poker");
	INIT_CAMERA_FROM_GAME_CAMERA(&vLocal_246);
	iLocal_0 = 99;
	Function_245(34);
	Function_245(8388608);
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_239, "Poker_StayOutvol", 2, *(&Local_290 + 232), Vector(0.0f, 0.0f, 0.0f), Vector(2,75f, 2.0f, 2,75f));
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (IS_ACTOR_VALID(&Local_290 + 12[iVar1]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&Local_290 + 12[iVar1], 1);
			REFERENCE_ACTOR(&Local_290 + 12[iVar1]);
			CLEAR_LAST_HIT(&Local_290 + 12[iVar1]);
		}
		iVar1++;
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
	Function_478(&iLocal_372);
	if (0 | Function_243(4, 0))
	{
		Function_467();
		Function_432(&iLocal_372);
		if (Global_42825 == 3)
		{
			Function_431(&iLocal_372, 17);
			Function_431(&iLocal_372, 6);
		}
	}
	Function_245(2048);
	return;
}

void Function_467() //Position: 0x226AE / 140974
{
	Function_475(1);
	iLocal_1301 = Function_473("PokerEvents");
	NET_SCRIPTMSG_REGISTER_HANDLER(29, 141375);
	NET_SCRIPTMSG_REGISTER_HANDLER(30, 141181);
	NET_SCRIPTMSG_REGISTER_HANDLER(28, 141035);
	return;
}

void Function_468(int iParam0) //Position: 0x226EB / 141035
{
	bool bVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &bVar0, 2);
	switch (bVar0)
	{
		case 0x00000000:
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
	}
	if (Local_1299 != 0)
	{
		LOG_ERROR("Received Player Action despite already having one!");
	}
	Local_1299 = &bVar0;
	return;
}

void Function_469(int iParam0) //Position: 0x2277D / 141181
{
	var uVar0[11];
	bool bVar12;
	int iVar13;
	bool bVar14;
	char[] cVar15[4];
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 24);
	iVar13 = 0;
	while (iVar13 <= 52)
	{
		bVar14 = (iVar13 % 5);
		bVar12 = (iVar13 / 5);
		Function_470(uVar0[bVar12], bVar14, &Local_381 + 2132[iVar13]);
		if (Global_47151[38])
		{
			PRINTSTRING("Card");
			PRINTINT(bVar12);
			PRINTSTRING("x");
			PRINTINT(bVar14);
			PRINTSTRING(": ");
			Function_193(&Local_381 + 2132[iVar13], &cVar15);
			PRINTSTRING(&cVar15);
			PRINTNL();
		}
		iVar13++;
	}
	Function_429(512);
	return;
}

void Function_470(int iParam0, int iParam1, struct<5> Param2) //Position: 0x22814 / 141332
{
	iParam0 = SHIFT_RIGHT(iParam0, iParam1 * 6);
	Param2 = iParam0 & 15;
	iParam0 = SHIFT_RIGHT(iParam0, 4);
	Param2.f_4 = iParam0 & 3;
	return;
}

void Function_471(int iParam0) //Position: 0x2283F / 141375
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	Function_193(&Var0 + 4, &cVar2);
	if (Var0 >= 4294967295)
	{
		iVar8 = StackVal;
		Function_335(&Local_381 + 12[iVar841] + 72, &Var0 + 4);
		Function_472(&Var0 + 4, &Local_381 + 12[iVar841], Var0.f_12, 0);
	}
	else
	{
		Function_335(&Local_381 + 2564, &Var0 + 4);
		if (Local_381.f_2124 == 4294967295)
		{
			Function_411(StackVal, &Local_381, &Var0 + 4, Var0.f_12);
		}
		else
		{
			Function_411(StackVal, &Local_381, &Var0 + 4, Var0.f_12);
		}
	}
	return;
}

void Function_472(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x228EA / 141546
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	char* cVar14[64];
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	strcpy(&cVar14, Function_53(), 64);
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182(&iParam0, 0) };
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*(&bParam1 + 72 + 64[bParam2]) = CREATE_PROP_IN_LAYOUT(&iLocal_239, &cVar14, &Var6, Var0, Var2, 1);
	if (bParam2 == 0)
	{
		*(&bParam1 + 72 + 88[bParam2]) = ATTACH_OBJECTS_NO_DRV(&bParam1 + 72 + 64[bParam2], GET_OBJECT_FROM_ACTOR(&bParam1), "wrist_l_attachment", Var4, Var2);
	}
	else
	{
		*(&bParam1 + 72 + 88[bParam2]) = ATTACH_OBJECTS_NO_DRV(&bParam1 + 72 + 64[bParam2], GET_OBJECT_FROM_ACTOR(&bParam1), "arm_l_attachment", Var4, Var2);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_418(&bParam1 + 72 + 64[bParam2], &bParam1);
	if (!&bParam3)
	{
		SET_ACTION_NODE_FOR_ACTOR(&bParam1, "sit_poker/Player/card_idle");
	}
}

int Function_473(bool bParam0) //Position: 0x22A08 / 141832
{
	var uVar0;
	
	uVar0 = Function_474();
	return CREATE_OBJECTSET_IN_LAYOUT(&bParam0, &uVar0, 3, 1);
}

var Function_474() //Position: 0x22A1F / 141855
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(&iVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return &iVar0;
}

void Function_475(bool bParam0) //Position: 0x22A5E / 141918
{
	struct<17> Var0;
	
	Function_304(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar3, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar3));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (&bParam0)
	{
		Function_76(&Var0, 4);
	}
	Function_299(&Var0);
	Function_477();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 142001);
	return;
}

void Function_476(int iParam0) //Position: 0x22AB1 / 142001
{
	struct<5> Var0;
	bool bVar5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_304(&Var1);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_306(&iVar4);
	if (Function_320(&Var1))
	{
	}
	bVar5 = Function_305(&iVar4);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar5), 0, 0);
	if (bVar5 < 4294967286 && bVar5 == Var0)
	{
	}
	Function_319(&Var1, 1);
	Function_299(&Var1);
	return;
}

void Function_477() //Position: 0x22BB4 / 142260
{
	Function_318();
	return;
}

void Function_478(int iParam0) //Position: 0x22BBD / 142269
{
	Function_479(&iParam0);
	return;
}

void Function_479(int[] iParam0) //Position: 0x22BC9 / 142281
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

void Function_480(var uParam0) //Position: 0x22BE9 / 142313
{
	if (!Function_228(&uParam0))
	{
		Function_230(&uParam0, 0.0f);
	}
	return;
}

void Function_481() //Position: 0x22C00 / 142336
{
	Function_482();
	return;
}

void Function_482() //Position: 0x22C09 / 142345
{
	REQUEST_ANIM_SET("nsit_poker", 0);
	REQUEST_ANIM_SET("sit_poker_gped", 0);
	REQUEST_ANIM_SET("sit_poker_hillb", 0);
	if (!Global_43789 != Global_46914[0])
	{
		REQUEST_ANIM_SET("sit_poker_oldm", 0);
	}
	REQUEST_ACTION_TREE("custom/sit_poker");
	REQUEST_ACTION_TREE("custom/fake_poker");
	return;
}

void Function_483() //Position: 0x22C9C / 142492
{
	return;
}

void Function_484() //Position: 0x22CA2 / 142498
{
	Global_42259 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_3();
	Function_485();
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

void Function_485() //Position: 0x22CD2 / 142546
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

