//Decompiled with MagicRDR v1.0
//Function Count : 875
//Statics Count : 2078
//Natives Count : 953
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 12;
	var uLocal_6 = 0;
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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
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
	int iLocal_103 = 20;
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
	bool bLocal_193 = false;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	var uLocal_196 = 0;
	int iLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	bool bLocal_203 = false;
	float fLocal_204 = 0.0f;
	bool bLocal_205 = false;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	var uLocal_208[6] = { 0, 0, 0, 0, 0, 0 };
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
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
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
	var uLocal_257 = 11;
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
	var uLocal_293 = 11;
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
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	struct<3777> Local_326 = { 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_237 = 0;
	iLocal_324 = 16;
	iLocal_325 = 0;
	Local_1550 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_1562 = 99;
	iLocal_1563 = 6;
	Local_1564 = 1000;
	while (Function_249())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x52 / 82
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1579);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1581);
	Function_248();
	Function_247();
	Function_246();
	Function_245();
	Function_244();
	Function_243();
	Function_242();
	Function_241();
	Function_240();
	Function_239();
	Function_238();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	REMOVE_ALL_PICKUPS();
	SET_DUST_LEVEL_MODIFIER(0);
	Function_237(0);
	SET_AUTO_CONVERSATION_LOOK(&bLocal_1579, 1);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
	}
	Function_233(&iLocal_1604);
	Function_233(&iLocal_103);
	Function_233(&iLocal_1674);
	Function_233(&iLocal_1652);
	Function_233(&iLocal_1610);
	Function_233(&iLocal_1700);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	if (IS_DOOR_VALID(&iLocal_1949))
	{
		CLOSE_DOOR_FAST(&iLocal_1949);
		Function_232(&iLocal_1949, 0);
	}
	if (Global_6610)
	{
		Function_214(&Local_1986);
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	STREAMING_UNLOAD_SCENE();
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1579, true);
	Function_211(7, 1, 0, 1, 1);
	*(&Global_15402[714] + 16) = 553;
	Function_210(1);
	Function_209(&uLocal_1548);
	Function_209(&Local_326);
	STOP_SOUND(&uLocal_1953);
	Function_207(0);
	if (IS_DOOR_VALID(&iLocal_1941))
	{
		Function_206(&iLocal_1941, 0);
	}
	if (IS_DOOR_VALID(&iLocal_1943))
	{
		Function_206(&iLocal_1943, 0);
	}
	Function_205(&(Global_43791[Global_46850[0]]), 256);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1579);
	Function_204();
	if (IS_BLIP_VALID(&uLocal_1965))
	{
		REMOVE_BLIP(&uLocal_1965);
	}
	UI_ENABLE("LoadingSpinner");
	HUD_TIMER_DISPLAY(0);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_ONE_SHOT_DEATH(&Global_54076, false);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	Function_203(1, 1);
	if (bLocal_1576)
	{
		DECOR_SET_BOOL(&Global_54076, "Reb05_ResetEscPop", true);
	}
	Function_174(bLocal_1577, 1, 0, 1, 1, 1, 1, 1);
	Function_172();
	if (IS_ITERATOR_VALID(&uLocal_1734))
	{
		DESTROY_ITERATOR(&uLocal_1734);
	}
	RELEASE_LAYOUT_REF(&uLocal_1548);
	if (bLocal_1576)
	{
		Function_26(Local_1550, 1, 1, 1, 0);
	}
	else if (bLocal_1577)
	{
		Function_22(Local_1550);
	}
	else
	{
		Function_2(Local_1550);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x24B / 587
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x26C / 620
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x289 / 649
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(bool bParam0) //Position: 0x2AC / 684
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2C3 / 707
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x365 / 869
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x388 / 904
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

void Function_9() //Position: 0x3D2 / 978
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3EB / 1003
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x43E / 1086
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x568 / 1384
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x5A2 / 1442
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x5BD / 1469
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x5CA / 1482
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x5EA / 1514
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x601 / 1537
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x61C / 1564
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
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x863 / 2147
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x88F / 2191
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x8B3 / 2227
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x8C8 / 2248
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x8E6 / 2278
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x98C / 2444
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x9CB / 2507
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

void Function_26(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xC21 / 3105
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_167(&(Global_6667[iVar228]));
		Function_166(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, bParam0, bVar1);
			Function_97();
		}
	}
	Function_39(bParam0, &bParam1, &iParam2, bVar1);
	if (Function_17(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(bParam0) == 1)
		{
			iVar2 = Function_15(bParam0);
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
	Function_27();
}

void Function_27() //Position: 0xD15 / 3349
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xD47 / 3399
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
	if (!Function_16(iVar0))
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

int Function_29(int iParam0) //Position: 0xD85 / 3461
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xD9F / 3487
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xDB5 / 3509
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
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
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10B2 / 4274
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x1127 / 4391
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1161 / 4449
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x11DD / 4573
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x11F0 / 4592
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

int Function_37(int iParam0) //Position: 0x1291 / 4753
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&iVar1, 2147483648);
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x12CE / 4814
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12E4 / 4836
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
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
			Function_84(bParam0);
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
						switch (Function_15(bParam0))
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x1542 / 5442
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1580 / 5504
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

void Function_42(bool bParam0) //Position: 0x15BF / 5567
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x1614 / 5652
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
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

void Function_44() //Position: 0x165F / 5727
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

void Function_45() //Position: 0x1765 / 5989
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

void Function_46() //Position: 0x1798 / 6040
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
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_47() //Position: 0x192B / 6443
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
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_48() //Position: 0x1AE4 / 6884
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1AF2 / 6898
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
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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

var Function_50() //Position: 0x1D0F / 7439
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1D24 / 7460
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DCB / 7627
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2067 / 8295
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x26A5 / 9893
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26AE / 9902
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26BF / 9919
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x27B6 / 10166
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27D1 / 10193
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2838 / 10296
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x284A / 10314
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x285C / 10332
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x2990 / 10640
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x299F / 10655
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x29D8 / 10712
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A15 / 10773
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BAF / 11183
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

int Function_67(bool bParam0) //Position: 0x2DF3 / 11763
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2E34 / 11828
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2EBD / 11965
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2F54 / 12116
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2FD3 / 12243
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3010 / 12304
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x321C / 12828
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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

bool Function_74(char* cParam0) //Position: 0x32D3 / 13011
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x32EB / 13035
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x33E3 / 13283
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x33ED / 13293
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x33FE / 13310
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3414 / 13332
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x34E0 / 13536
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x34FD / 13565
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3D29 / 15657
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3D64 / 15716
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3D73 / 15731
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_87(bParam0) == 1)
					{
						iVar0 = Function_86(bParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(bParam0) == 0)
			{
				if (Function_87(bParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(bParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x4250 / 16976
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x4266 / 16998
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x4285 / 17029
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x429F / 17055
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4309 / 17161
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x4531 / 17713
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

void Function_91() //Position: 0x45CF / 17871
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x4731 / 18225
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x47B1 / 18353
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B08 / 19208
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

int Function_95(int iParam0) //Position: 0x4B90 / 19344
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BAA / 19370
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4BD5 / 19413
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C03 / 19459
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
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4E9F / 20127
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
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
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
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

void Function_100(int iParam0, int iParam1) //Position: 0x5073 / 20595
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

int Function_101(int iParam0, char* cParam1) //Position: 0x52DD / 21213
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
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x546D / 21613
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x550E / 21774
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x55CC / 21964
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

var Function_105(int iParam0) //Position: 0x5632 / 22066
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

int Function_106(int iParam0, bool bParam1) //Position: 0x56C1 / 22209
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x586D / 22637
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

void Function_108() //Position: 0x58B2 / 22706
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x58C8 / 22728
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5908 / 22792
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5948 / 22856
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5957 / 22871
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

int Function_113(int iParam0) //Position: 0x5B1F / 23327
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

var Function_114() //Position: 0x5BB4 / 23476
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5BD9 / 23513
{
	if (!Function_30(iParam0))
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
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60A8 / 24744
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
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
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x63CF / 25551
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6472 / 25714
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x666F / 26223
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x681A / 26650
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x68EC / 26860
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
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
			Function_164(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(Global_46760[0]);
			Function_161(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_159(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_161(Global_46816[0]);
			Function_152(0);
			Function_150(2, 1);
			Function_150(0, 1);
			Function_150(1, 1);
			break;
		
		case 0x00000003:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_161(Global_46816[0]);
			Function_161(Global_46760[0]);
			Function_148(0, 1);
			Function_148(15, 1);
			Function_148(9, 1);
			Function_148(12, 1);
			Function_148(16, 1);
			Function_150(3, 1);
			break;
		
		case 0x00000005:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_159(21, &bParam2, 4);
			Function_161(Global_46816[0]);
			Function_150(39, 1);
			break;
		
		case 0x00000007:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_147())
				{
					if (!Function_146(4))
					{
						Function_136(4, 0, 0, 1, 0);
					}
				}
			}
			Function_161(Global_46760[0]);
			Function_161(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_161(Global_46760[0]);
			Function_161(Global_46816[2]);
			Function_135(&(Global_43791[Global_46816[2]]), 32768);
			Function_205(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_159(9, &bParam2, 4);
			Function_161(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_161(Global_46760[0]);
			Function_161(Global_46796[0]);
			Function_135(&(Global_43791[Global_46796[0]]), 32768);
			Function_205(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_161(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_161(Global_46760[0]);
			Function_161(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_161(Global_46760[1]);
			Function_161(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_161(Global_46838[0]);
			Function_161(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_161(Global_46796[5]);
			Function_161(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_159(21, &bParam2, 4);
			Function_161(Global_46760[4]);
			Function_161(Global_46796[4]);
			Function_134(&Global_119935, 0x2000000);
			Function_134(&Global_119935, 0x4000000);
			Function_134(&Global_119935, 4096);
			Function_134(&Global_119935, 8);
			Function_134(&Global_119935, 8388608);
			Function_134(&Global_119935, 524288);
			Function_134(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_161(Global_46760[4]);
			Function_161(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_205(&(Global_43791[Global_46760[4]]), 256);
			Function_161(Global_46760[4]);
			Function_161(Global_46796[0]);
			Function_135(&(Global_43791[Global_46796[0]]), 32768);
			Function_205(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_161(Global_46760[0]);
			Function_161(Global_46760[5]);
			Function_159(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_161(Global_46796[3]);
			Function_135(&(Global_43791[Global_46796[3]]), 32768);
			Function_205(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_159(9, &bParam2, 4);
			Function_161(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_135(&(Global_43791[Global_46838[1]]), 32768);
			Function_161(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_159(12, &bParam2, 4);
			Function_205(&(Global_43791[Global_46838[1]]), 256);
			Function_161(Global_46816[3]);
			Function_161(Global_46866[0]);
			Function_161(Global_46850[0]);
			Function_152(4);
			Function_148(13, 1);
			Function_148(1, 1);
			Function_148(18, 1);
			Function_150(34, 1);
			Function_150(44, 1);
			Function_150(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_159(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_161(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_161(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_161(Global_46866[0]);
			Function_161(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_161(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_161(Global_46850[0]);
			Function_161(Global_46866[0]);
			Function_161(Global_46866[1]);
			Function_161(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_159(23, &bParam2, 3);
			Function_148(23, 1);
			Function_161(Global_46850[0]);
			Function_161(Global_46850[2]);
			Function_135(&(Global_43791[Global_46850[2]]), 32768);
			Function_205(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_159(19, &bParam2, 4);
			Function_161(Global_46850[0]);
			Function_161(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_159(24, &bParam2, 3);
			Function_148(24, 1);
			Function_161(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_161(Global_46850[0]);
			Function_161(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_161(Global_46866[12]);
			Function_161(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_161(Global_46866[12]);
			Function_161(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_159(25, &bParam2, 10);
			Function_161(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_161(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_161(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_159(13, &bParam2, 4);
			Function_161(Global_46866[2]);
			Function_161(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_146(8))
				{
					Function_136(8, 0, 0, 1, 0);
				}
			}
			Function_161(Global_46850[0]);
			Function_152(9);
			Function_148(7, 1);
			Function_148(11, 1);
			Function_148(3, 1);
			Function_148(20, 1);
			Function_150(57, 1);
			break;
		
		case 0x0000002A:
			Function_159(2, &bParam2, 4);
			Function_161(Global_46914[0]);
			Function_161(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_161(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_161(Global_46914[0]);
			Function_161(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_161(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_161(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_161(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_159(17, &bParam2, 4);
			Function_161(Global_46926[0]);
			Function_161(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_132(15))
				{
					Function_127(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_205(&(Global_43791[Global_46914[1]]), 256);
			Function_152(11);
			Function_161(Global_46914[1]);
			Function_161(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_161(Global_46914[1]);
			Function_161(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_161(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_161(Global_46914[1]);
			Function_122(11);
			Function_152(12);
			Global_26200[1114].f_40 = 0;
			Function_150(56, 1);
			if (!&bParam2)
			{
				if (!Function_146(9))
				{
					Function_136(9, 0, 0, 0, 0);
				}
				if (!Function_146(10))
				{
					Function_136(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_122(int iParam0) //Position: 0x7207 / 29191
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_232(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_232(&Global_26200[iParam014] + 88, 0);
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
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7384 / 29572
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
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var1, Var3))
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x748F / 29839
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x74BB / 29883
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

var Function_126(vector3 vParam0) //Position: 0x7512 / 29970
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

void Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7560 / 30048
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		if (!Function_146(bParam0))
		{
			Function_136(bParam0, 1, 0, 0, 1);
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
		Function_89(457, 1, 0, 0);
		Function_130(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
	}
	return;
}

void Function_128() //Position: 0x7701 / 30465
{
	return;
}

bool Function_129(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7707 / 30471
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

void Function_130(bool bParam0, int iParam1) //Position: 0x77B6 / 30646
{
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_131(int iParam0) //Position: 0x780B / 30731
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_132(int iParam0) //Position: 0x7821 / 30753
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x7872 / 30834
{
	int iVar0;
	
	if (!Function_131(iParam0))
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

void Function_134(var uParam0, int iParam1) //Position: 0x789F / 30879
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x78B0 / 30896
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x78C1 / 30913
{
	char* cVar0[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_145(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_146(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_128();
			}
		}
		Function_139(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_138() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_138() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_137(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_137(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7A1D / 31261
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_138() //Position: 0x7AA8 / 31400
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_139(bool bParam0) //Position: 0x7AD5 / 31445
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_142(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_141(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_140(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_140(int iParam0) //Position: 0x7C85 / 31877
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

void Function_141(bool bParam0, bool bParam1) //Position: 0x7CDC / 31964
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

var Function_142(int iParam0) //Position: 0x7D01 / 32001
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

bool Function_143(bool bParam0, int iParam1) //Position: 0x7D57 / 32087
{
	int iVar0;
	
	if (!Function_131(bParam0))
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

bool Function_144(bool bParam0) //Position: 0x7DB6 / 32182
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_145(int iParam0) //Position: 0x7DC2 / 32194
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_146(int iParam0) //Position: 0x7DDE / 32222
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_147() //Position: 0x7E30 / 32304
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_148(int iParam0, int iParam1) //Position: 0x7E60 / 32352
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_149(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_149(int iParam0, int iParam1) //Position: 0x7ED5 / 32469
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7F32 / 32562
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7FA5 / 32677
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_152(int iParam0) //Position: 0x8000 / 32768
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_206(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_206(&Global_26200[iParam014] + 88, 0);
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
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_137("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_136(14, 1, 0, 0, 0);
				Function_153(14, 1, 0, 0, 0);
			}
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_128();
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
			Function_137("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_153(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x82C0 / 33472
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_145(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_137(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_143(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_130(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_139(bParam0);
		if (StackVal && !Function_14(((((!Function_138() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_138() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_155();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_154(3, bParam1);
				break;
			
			case 0x00000005:
				Function_154(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_154(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_154(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_154(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_154(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_154(int iParam0, bool bParam1) //Position: 0x855F / 34143
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

void Function_155() //Position: 0x85CE / 34254
{
	if (Function_131(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_158(Global_42827);
			(&Global_42827 + 8) = Function_156(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_158(Global_42827);
			*(&Global_42827 + 8) = Function_156(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_156(int iParam0, int iParam1) //Position: 0x864E / 34382
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					if (Function_157(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
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
					if (Function_157(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
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
					if (Function_157(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_157(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_157(27) && iVar16)
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
					if (Function_157(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
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
					if (Function_157(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_157(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_157(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_157(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_157(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
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
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
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
	if (!Function_74(StackVal, vVar2))
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

int Function_157(int iParam0) //Position: 0x92B1 / 37553
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0) //Position: 0x92C6 / 37574
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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

void Function_159(bool bParam0, bool bParam1, int iParam2) //Position: 0x9315 / 37653
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_160(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_164(bParam0, 0, 0);
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

bool Function_160(int iParam0, int iParam1) //Position: 0x9388 / 37768
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_161(int iParam0) //Position: 0x939C / 37788
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_163(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_135(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_162(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
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
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_162(int iParam0) //Position: 0x948D / 38029
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
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

bool Function_163(var uParam0, int iParam1) //Position: 0x94E5 / 38117
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_164(bool bParam0, bool bParam1, int iParam2) //Position: 0x9502 / 38146
{
	if (!Function_165(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_165(int iParam0) //Position: 0x955C / 38236
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_166(bool bParam0) //Position: 0x956E / 38254
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_167(struct<185> Param0) //Position: 0x95A2 / 38306
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
			Function_168(4, 0, 0);
		}
	}
	return;
}

void Function_168(bool bParam0, var uParam1, int iParam2) //Position: 0x960D / 38413
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
		Function_169(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x96F7 / 38647
{
	int iVar0;
	
	Function_171(bParam0);
	Function_8(&bParam1);
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
	Function_170();
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

void Function_170() //Position: 0x9876 / 39030
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_171(int iParam0) //Position: 0x9882 / 39042
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

void Function_172() //Position: 0x98C8 / 39112
{
	Function_173();
	return;
}

void Function_173() //Position: 0x98D1 / 39121
{
	Function_233(&Local_326 + 8);
	Function_233(&Local_326 + 192);
	Function_233(&Local_326 + 264);
	Function_233(&Local_326 + 512);
	Function_233(&Local_326 + 632);
	Function_233(&Local_326 + 720);
	Function_233(&Local_326 + 792);
	Function_233(&Local_326 + 848);
	Function_233(&Local_326 + 920);
	Function_233(&Local_326 + 1088);
	Function_233(&Local_326 + 1208);
	Function_233(&Local_326 + 1328);
	RELEASE_LAYOUT_REF(&Local_326);
	return;
}

void Function_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9948 / 39240
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_202());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_201();
	CLEAR_PRINTED_OBJECTIVE();
	Function_200();
	Function_198(0);
	Function_197();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_196();
	Function_195();
	Function_201();
	ENABLE_JOURNAL_REPLAY(1);
	Function_210(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_194(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_191(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_190();
	Function_189(1178687);
	Function_187(33039);
	Function_186(0x218003f);
	Function_185(4194560);
	Function_184();
	Function_183();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_180(0, 1, 1);
	}
	else
	{
		Function_180(0, 1, 1);
	}
	Function_179();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_175();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_175() //Position: 0x9B54 / 39764
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_178() > 3)
		{
			bVar0 *= 2;
		}
		Function_176(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9BAB / 39851
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_177(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_177(bool bParam0) //Position: 0x9BFB / 39931
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_178() //Position: 0x9C24 / 39972
{
	return Global_21369.f_248;
}

void Function_179() //Position: 0x9C2F / 39983
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_205(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x9C59 / 40025
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_85(Global_43789))
		{
			Function_135(&(Global_43791[Global_43789]), 131072);
			Function_205(&(Global_43791[Global_43789]), 2097152);
			Function_181(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_163(&(Global_43791[iVar0]), 4) || Function_163(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_205(&(Global_43791[iVar0]), 2097155);
					Function_135(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_181(int iParam0) //Position: 0x9D65 / 40293
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_182())
			{
				return;
			}
		}
		if (!Function_163(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_182() //Position: 0x9DE4 / 40420
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_163(&(Global_43791[iVar0]), 4) || Function_163(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_183() //Position: 0x9E4D / 40525
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_184() //Position: 0x9E73 / 40563
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_185(int iParam0) //Position: 0x9E99 / 40601
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_186(int iParam0) //Position: 0x9EB6 / 40630
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_187(int iParam0) //Position: 0x9EC9 / 40649
{
	Function_188(&Global_43580, iParam0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0x9ED7 / 40663
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_189(bool bParam0) //Position: 0x9EF6 / 40694
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_190() //Position: 0x9F23 / 40739
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

void Function_191(int iParam0) //Position: 0x9F9B / 40859
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_192(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", true);
		DECOR_SET_BOOL(&Global_54076, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_192(bool bParam0, bool bParam1, int iParam2) //Position: 0xA0D1 / 41169
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_193(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_193(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_193(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_193(bool bParam0) //Position: 0xA11F / 41247
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

void Function_194(var uParam0) //Position: 0xA213 / 41491
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&uParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170);
		}
	}
	return;
}

void Function_195() //Position: 0xA296 / 41622
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_196() //Position: 0xA2DA / 41690
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_197() //Position: 0xA31E / 41758
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_198(int iParam0) //Position: 0xA334 / 41780
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_199())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_199() //Position: 0xA374 / 41844
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

void Function_200() //Position: 0xA399 / 41881
{
	Global_15862 = 0.0f;
	return;
}

void Function_201() //Position: 0xA3A3 / 41891
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_202() //Position: 0xA3CE / 41934
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_203(bool bParam0, bool bParam1) //Position: 0xA3EB / 41963
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

void Function_204() //Position: 0xA441 / 42049
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_205(var uParam0, int iParam1) //Position: 0xA44A / 42058
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_206(int iParam0, int iParam1) //Position: 0xA464 / 42084
{
	if (!IS_DOOR_VALID(&iParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&iParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&iParam0, "lockMe"))
	{
		DECOR_REMOVE(&iParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&iParam0))
	{
		SET_DOOR_LOCK(&iParam0, 0);
	}
	return;
}

void Function_207(bool bParam0) //Position: 0xA4BC / 42172
{
	if (bParam0)
	{
		ENABLE_CHILD_SECTOR("sp_rebel05x");
		Function_208(&Local_326 + 2456, &Local_326);
	}
	else
	{
		DISABLE_CHILD_SECTOR("sp_rebel05x");
	}
	return;
}

void Function_208(float[] fParam0, int iParam1) //Position: 0xA4F9 / 42233
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (fParam0 - 1))
	{
		Var3 = Vector(0.0f, 0.0f, 0.0f);
		GET_VOLUME_CENTER(&(fParam0[iVar0]), &Var1);
		Var3.f_4 = GET_VOLUME_HEADING(&(fParam0[iVar0]));
		GET_VOLUME_SCALE(&(fParam0[iVar0]), &Var5);
		DESTROY_VOLUME(&(fParam0[iVar0]));
		CREATE_OBSTACLE_IN_LAYOUT(&iParam1, Function_54(), Var1, Var3, Var5);
		iVar0++;
	}
	return;
}

void Function_209(int iParam0) //Position: 0xA56A / 42346
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_210(bool bParam0) //Position: 0xA5D2 / 42450
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

int Function_211(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA649 / 42569
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (uParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_213(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_212(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", true);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_212(int iParam0) //Position: 0xA98B / 43403
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_213(int iParam0) //Position: 0xA9BE / 43454
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_214(int iParam0) //Position: 0xA9D5 / 43477
{
	if (!bLocal_205)
	{
		Function_230(&iParam0);
	}
	if (!iLocal_206)
	{
		Function_215(&iParam0);
	}
	return;
}

void Function_215(struct<125> Param0) //Position: 0xA9F3 / 43507
{
	if (DECOR_CHECK_EXIST(&Param0, "bIsDuelActive"))
	{
		DECOR_REMOVE(&Param0, "bIsDuelActive");
	}
	if (DECOR_CHECK_EXIST(&Param0, "bIsDuelOver"))
	{
		DECOR_REMOVE(&Param0, "bIsDuelOver");
	}
	if (DECOR_CHECK_EXIST(&Param0, "bDrewFirst"))
	{
		DECOR_REMOVE(&Param0, "bDrewFirst");
	}
	Function_216(&Param0);
	if (IS_LAYOUTREF_VALID(&iLocal_201))
	{
		DESTROY_LAYOUT(&iLocal_201);
	}
	REMOVE_EVENT_RESPONSE(38, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(39, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(40, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(41, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(37, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(44, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(43, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(42, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(46, 15, "PLAYER");
	Global_6610 = 0;
	Function_233(&iLocal_103);
	iLocal_206 = 1;
	Global_6625 = 0;
	if (Param0.f_124)
	{
	}
	return;
}

int Function_216(int iParam0) //Position: 0xAB43 / 43843
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
		{
			bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
			if (DECOR_CHECK_EXIST(&uVar2, "DuelCrowdActorReactionTimer"))
			{
				DECOR_REMOVE(&uVar2, "DuelCrowdActorReactionTimer");
			}
			if ((bVar3 && 1) != 0)
			{
			}
			else if ((bVar3 && 2) != 0)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
			}
			else if (iLocal_207 == 2)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				TASK_CLEAR(&uVar2);
				if ((bVar3 && 4) != 0)
				{
					Function_229(GET_PERS_CHAR_FROM_ACTOR(&uVar2));
				}
			}
			else if (iLocal_207 == 1)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				TASK_CLEAR(&uVar2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, true);
				Function_220(&uVar2, 1, 0, 2);
			}
			else if (iLocal_207 == 0)
			{
				DECOR_REMOVE(&uVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(&uVar2, 1);
				if ((bVar3 && 64) != 0)
				{
					Function_217(&uVar2, bVar3, &iParam0 + 16);
				}
				else
				{
					TASK_CLEAR(&uVar2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar2, true);
					Function_220(&uVar2, 1, 0, 2);
				}
			}
		}
		bVar1++;
	}
	if (IS_OBJECTSET_VALID(&uLocal_189))
	{
		DESTROY_OBJECTSET(&uLocal_189);
	}
	return 1;
}

void Function_217(int iParam0, var uParam1, int iParam2) //Position: 0xAD12 / 44306
{
	bool bVar0;
	var uVar1;
	var uVar3;
	
	uParam1 = uParam1;
	TASK_CLEAR(&iParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 1, 0);
	uVar1 = Vector(0.0f, 0.0f, 0.0f);
	Function_219(&iParam0);
	uVar3 = Function_219(&iParam0);
	Function_218(&iParam2, &uVar3, &uVar1);
	TASK_GO_NEAR_COORD(false, &uVar1, 5.0f, 1);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(&iParam0, 2);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iParam0, 0);
	return;
}

void Function_218(vector3 vParam0) //Position: 0xAD7C / 44412
{
	vParam2 = vParam1;
	vParam2 = (vParam2 + ((vParam1 - vParam0) * 3.0f));
	vParam2.f_8 = (vParam2.z + ((vParam1.z - vParam0.z) * 3.0f));
	vParam2 = (vParam2 + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	vParam2.f_8 = (vParam2.z + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	return;
}

struct<8> Function_219(int iParam0) //Position: 0xADDD / 44509
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_220(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xAE49 / 44617
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_221(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_221(&uParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_221(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0xAF37 / 44855
{
	char* cVar0[32];
	
	Function_228();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_227(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_226(&uParam0, 0);
	Function_225(&uParam0, iParam1);
	Function_224(&uParam0, &uParam2);
	Function_223(&uParam0, uParam3);
	if (Function_222(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_222(int iParam0) //Position: 0xB1A3 / 45475
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_223(var uParam0, bool bParam1) //Position: 0xB1C7 / 45511
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xB1EB / 45547
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_225(var uParam0, bool bParam1) //Position: 0xB211 / 45585
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_226(var uParam0, bool bParam1) //Position: 0xB238 / 45624
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_227(bool bParam0) //Position: 0xB25C / 45660
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_228() //Position: 0xB27B / 45691
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

int Function_229(int iParam0) //Position: 0xB2CA / 45770
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_230(int iParam0) //Position: 0xB373 / 45939
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&iParam0 + 8))
	{
		if (IS_ACTOR_ALIVE(&iParam0 + 8))
		{
			AI_GOAL_AIM_CLEAR(&iParam0 + 8);
			ACTOR_FORCE_WEAPON_RENDER(&iParam0 + 8, 1, 0);
			if (IS_ACTOR_CRIPPLED(&iParam0 + 8, 5))
			{
				DECOR_SET_BOOL(&iParam0 + 8, "Duel", true);
			}
		}
		else
		{
			DECOR_SET_BOOL(&iParam0 + 8, "Duel", true);
		}
		AUDIO_DISALLOW_PREDUEL_SPEECH(&iParam0 + 8);
	}
	AUDIO_DISALLOW_PREDUEL_SPEECH(&iParam0);
	SATCHEL_SET_ENABLED(1);
	AI_GLOBAL_CLEAR_ALL_DANGER();
	AI_STOP_IGNORING_ACTORS();
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (IS_ACTOR_VALID(&iParam0 + 8))
	{
		if (IS_ACTOR_ALIVE(&iParam0 + 8))
		{
			STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&iParam0 + 8);
		}
	}
	if (IS_VOLUME_VALID(&iParam0 + 72))
	{
		RESET_PROPS_IN_VOLUME(&iParam0 + 72, 1);
	}
	if (IS_ACTORSET_VALID(&uLocal_187))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_187))
		{
			uVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_187, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				TASK_CLEAR(&uVar1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
				if (IS_ACTOR_HORSE(&uVar1))
				{
					SET_ALLOW_RIDE_BY_PLAYER(&uVar1, 1);
				}
			}
			bVar0++;
		}
		DESTROY_ACTORSET(&uLocal_187);
	}
	if (IS_OBJECTSET_VALID(&uLocal_185))
	{
		DESTROY_OBJECTSET(&uLocal_185);
	}
	if (IS_ACTOR_VALID(&iParam0 + 56))
	{
		if (IS_LAYOUTREF_VALID(&iLocal_201))
		{
			if (Function_231(&iParam0 + 56) == &iLocal_201)
			{
				RELEASE_ACTOR(&iParam0 + 56);
			}
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0 + 56);
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial0Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial0Complete");
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial1Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial1Complete");
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial2Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial2Complete");
	}
	if (DECOR_CHECK_EXIST(&iParam0 + 88 + 8, "Tutorial3Complete"))
	{
		DECOR_REMOVE(&iParam0 + 88 + 8, "Tutorial3Complete");
	}
	if (iLocal_192)
	{
		Function_187(9);
		iLocal_192 = 0;
	}
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (IS_OBJECT_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
		if (DECOR_CHECK_EXIST(&iParam0, "bHostageDraw"))
		{
			DECOR_REMOVE(&iParam0, "bHostageDraw");
		}
	}
	if (IS_ACTOR_ALIVE(&iParam0))
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "bIsDuelOver"))
		{
			DECOR_SET_BOOL(&iParam0, "bIsDuelOver", true);
		}
		Global_98975 = 0;
	}
	Function_186(1);
	if (!Global_6623)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
			REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&iParam0 + 40, 0);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
		}
	}
	CAMERA_RESET(0);
	bLocal_205 = true;
	return;
}

int Function_231(int iParam0) //Position: 0xB6B2 / 46770
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 1)
		{
			iVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
		}
		while (!IS_LAYOUTREF_VALID(&iVar0) && IS_OBJECT_VALID(&iParam0))
		{
			iParam0 = GET_OBJECT_OWNER(&iParam0);
			if (GET_OBJECT_TYPE(&iParam0) == 1)
			{
				iVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	return "";
}

void Function_232(int iParam0, int iParam1) //Position: 0xB719 / 46873
{
	if (!IS_DOOR_VALID(&iParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&iParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&iParam0, "unlockMe"))
	{
		DECOR_REMOVE(&iParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&iParam0))
	{
		SET_DOOR_LOCK(&iParam0, 1);
	}
	return;
}

void Function_233(int iParam0) //Position: 0xB774 / 46964
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_234(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_234(struct<2>[] Param0, int iParam1) //Position: 0xB79C / 47004
{
	if (Function_236(&(Param0[iParam12]), 4))
	{
		if (Function_236(&(Param0[iParam12]), 1))
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
			Function_235(&(Param0[iParam12]), 1);
			Function_235(&(Param0[iParam12]), 2);
			Function_235(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_235(struct<13> Param0) //Position: 0xB8E7 / 47335
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_236(struct<13> Param0) //Position: 0xB904 / 47364
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_237(bool bParam0) //Position: 0xB922 / 47394
{
	if (bParam0)
	{
		bLocal_1963 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &Local_326, "burnAHouse", "script_fire_rebel05", Vector(-4349,924f, 32,588f, 4405,306f));
		UNK_0x6745191B(StackVal, &bLocal_1963, Vector(0.0f, 0.0f, 0.0f));
	}
	else
	{
		UNK_0x7246F438(&bLocal_1963);
		RESET_RMPTFX_ALL();
	}
	return;
}

void Function_238() //Position: 0xB986 / 47494
{
	Function_233(&Local_326 + 1328);
	return;
}

void Function_239() //Position: 0xB995 / 47509
{
	Function_233(&Local_326 + 1208);
	return;
}

void Function_240() //Position: 0xB9A4 / 47524
{
	Function_233(&Local_326 + 1088);
	return;
}

void Function_241() //Position: 0xB9B3 / 47539
{
	Function_233(&Local_326 + 920);
	return;
}

void Function_242() //Position: 0xB9C2 / 47554
{
	Function_233(&Local_326 + 848);
	return;
}

void Function_243() //Position: 0xB9D1 / 47569
{
	Function_233(&Local_326 + 792);
	return;
}

void Function_244() //Position: 0xB9E0 / 47584
{
	Function_233(&Local_326 + 720);
	return;
}

void Function_245() //Position: 0xB9EF / 47599
{
	Function_233(&Local_326 + 632);
	return;
}

void Function_246() //Position: 0xB9FE / 47614
{
	Function_233(&Local_326 + 512);
	return;
}

void Function_247() //Position: 0xBA0D / 47629
{
	Function_233(&Local_326 + 264);
	return;
}

void Function_248() //Position: 0xBA1C / 47644
{
	Function_233(&Local_326 + 192);
	return;
}

bool Function_249() //Position: 0xBA2A / 47658
{
	if (IS_EXITFLAG_SET())
	{
		Function_873(bLocal_1562);
		Function_869(StackVal, 4, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
		return 0;
	}
	Function_868(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1550, bLocal_1562, iLocal_1563, &bLocal_1578, &bLocal_1576, &bLocal_1577);
	if (bLocal_1562 == 99 && bLocal_1562 == 100)
	{
		Function_867();
		if (IS_DOOR_VALID(&iLocal_1949))
		{
			if (!FIRE_IS_ACTOR_ON_FIRE(&Global_54076) && IS_DOOR_OPENED(&iLocal_1949))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2920))
				{
					Function_866(&Global_54076);
				}
			}
		}
		if (!IS_ACTOR_VALID(&Global_54076))
		{
			Function_873(bLocal_1562);
			Function_869(StackVal, 1, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1579, false);
			Function_873(bLocal_1562);
			Function_869(StackVal, 1, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
			return 1;
		}
		if (Function_865(2048))
		{
			Function_873(bLocal_1562);
			Function_869(StackVal, 3, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
			return 1;
		}
		Function_863(Function_864(&uLocal_1978, &uLocal_1920, 1, 7.0f, iLocal_1924));
		Local_1902 = { StackVal, StackVal, StackVal, Local_1902 };
		if (Function_844(&Local_1810, &uLocal_1756, &Local_1902, &uLocal_1734, iLocal_1924))
		{
			if (Function_842(&Local_1902))
			{
				Function_873(bLocal_1562);
				Function_869(StackVal, 5, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(&bLocal_1579))
		{
			Function_841("RebelLeader_dead");
			Function_873(bLocal_1562);
			Function_869(StackVal, 5, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
			return 1;
		}
		Function_840();
	}
	switch (bLocal_1562)
	{
		case 0x00000063:
			Function_800();
			break;
		
		case 0x00000000:
			Function_711();
			break;
		
		case 0x00000001:
			Function_644();
			break;
		
		case 0x00000002:
			Function_621();
			break;
		
		case 0x00000003:
			Function_591();
			break;
		
		case 0x00000004:
			Function_554();
			break;
		
		case 0x00000005:
			Function_535();
			break;
		
		case 0x00000006:
			Function_483();
			break;
		
		case 0x00000007:
			Function_394();
			break;
		
		case 0x00000008:
			Function_305();
			break;
		
		case 0x00000065:
			Function_257();
			break;
		
		case 0x00000064:
			if (Function_256(&bLocal_1577))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_255(&bLocal_1562, &iLocal_1563, &Local_1564))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1576)
	{
		Function_254(&bLocal_1576, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1577 && bLocal_1562 == 100)
	{
		Function_873(bLocal_1562);
		Function_869(StackVal, 5, &bLocal_1577, &bLocal_1562, Function_874(bLocal_1562), Function_873(bLocal_1562), 0);
	}
	if (bLocal_1578)
	{
		Function_250(&bLocal_1578, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_250(var uParam0, int iParam1) //Position: 0xBCB3 / 48307
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_251(&iParam1);
	uParam0 = 1;
	return;
}

void Function_251(int iParam0) //Position: 0xBCD8 / 48344
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_841("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_253(2) || Function_253(8)) || Function_253(9)) || Function_253(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_841("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_841("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_841("");
	}
	else if (iParam0 == 8)
	{
		Function_252();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_252();
	}
	return;
}

void Function_252() //Position: 0xBDCF / 48591
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_253(int iParam0) //Position: 0xBDDB / 48603
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_254(var uParam0, int iParam1) //Position: 0xBE11 / 48657
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_251(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_255(var uParam0, var uParam1, int iParam2) //Position: 0xBE36 / 48694
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_256(int iParam0) //Position: 0xBE7F / 48767
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_257() //Position: 0xBE93 / 48787
{
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 1.0f);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1579);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_299();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_296();
			Function_295(&Local_1550);
			iLocal_1583 = Function_294(StackVal, (&Local_326 + 3512[13]), 0, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3512[13]), 1, 1, true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3512[03]), 1, 1, true);
			STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4388,448f, 41,385f, 4365,41f), Vector(0,975f, -0,167f, 0,149f), 1);
			Function_293(&bLocal_1736);
			iLocal_1563 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_292(iLocal_1583) || iLocal_1583 != 4294967295))
			{
				STREAMING_UNLOAD_SCENE();
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			break;
		
		case 0x00000002:
			Local_1564 = 1000;
			DESTROY_OBJECT(&Local_326 + 4864);
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			TOGGLE_COVER_PROPS(0);
			if (SQUAD_IS_VALID(&Local_326 + 1552))
			{
				Function_280(&Local_326 + 1552);
			}
			iLocal_1915 = 1;
			Function_293(&bLocal_1736);
			iLocal_1563 = 3;
			break;
		
		case 0x00000003:
			if (!IS_DOOR_VALID(&iLocal_1949))
			{
				iLocal_1949 = Function_278("escalara", "generalHouse04", 1);
			}
			if (!Global_99145)
			{
				if (Function_258())
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					STREAMING_UNLOAD_BOUNDS();
					UI_ENABLE("LoadingSpinner");
					if (HUD_IS_FADED())
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3512[23]), 0, 1, true);
					}
					Function_293(&bLocal_1736);
					iLocal_1563 = 106;
				}
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3512[23]), 0, 1, true);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_1576 = true;
			}
			break;
	}
	return;
}

bool Function_258() //Position: 0xC13E / 49470
{
	Function_275(&Local_1564, 1);
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	switch (Local_1564)
	{
		case 0x000003E8:
			Function_271(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (bLocal_1562 != 99 && (Function_270(&Local_1550) || Local_1550.f_40 < 1))
			{
				Local_1564 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_LEADER_05_END/REBEL_LEADER_05_END"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				Local_1564 = 1106;
			}
			else
			{
				Function_268(StackVal, &uLocal_1548, *(&Local_326 + 3512[13]), &bLocal_1970, 0, 0, 0, 0, 1, 1);
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/REBEL_LEADER_05_END/REBEL_LEADER_05_END", 0, 2, 1, 2, 2);
					Global_99147 = 1;
				}
				if (!Function_267(&Local_1564 + 4))
				{
					Function_265(&Local_1564 + 4);
				}
				else
				{
					Function_293(&Local_1564 + 4);
				}
				Local_1564.f_40 = 0;
				Local_1564 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_263(&Local_1564 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load! Skipping...");
				Local_1564 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Global_99147 = 0;
				Function_207(0);
				Function_203(1, 1);
				Local_1564 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1564 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3512[23]), 1, 1, true);
				Function_262(2.0f);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				CUTSCENE_MANAGER_STOP_CUTSCENE(0, 0);
				Local_1564.f_40 = 1;
				Local_1564 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				Function_203(1, 1);
				AI_STOP_IGNORING_ACTORS();
				Global_99147 = 0;
				if (Local_1564.f_40)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3512[23]), 1, 1, true);
					Function_262(2.0f);
				}
				Function_259(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Local_1564 = 1000;
				return 1;
			}
			break;
		
		case 0x00000452:
			Local_1564 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_259(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xC419 / 50201
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
		uVar0 = Function_50();
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
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_261();
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
	Function_260(&iParam9, &iParam10);
}

void Function_260(int iParam0, bool bParam1) //Position: 0xC4E8 / 50408
{
	iParam0 = &iParam0;
	HUD_ENABLE(&iParam0);
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
		Function_190();
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

void Function_261() //Position: 0xC5B7 / 50615
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_262(int iParam0) //Position: 0xC5CC / 50636
{
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, iParam0, 0);
	return;
}

float Function_263(vector3 vParam0) //Position: 0xC5E3 / 50659
{
	if (Function_267(&vParam0))
	{
		if (Function_264(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_264(int iParam0) //Position: 0xC6B0 / 50864
{
	return Function_14(iParam0, 2);
}

void Function_265(bool bParam0) //Position: 0xC6BE / 50878
{
	if (!Function_267(&bParam0))
	{
		Function_266(&bParam0, 0.0f);
	}
	return;
}

void Function_266(vector3 vParam0) //Position: 0xC6D5 / 50901
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_267(bool bParam0) //Position: 0xC6FA / 50938
{
	return Function_14(bParam0, 1);
}

void Function_268(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xC708 / 50952
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_269(&uVar1, &uParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_269(var uParam0, int iParam1) //Position: 0xC9A8 / 51624
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &iParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &iParam1);
			}
		}
		bVar3++;
	}
	return;
}

bool Function_270(struct<37> Param0) //Position: 0xCA2A / 51754
{
	return Param0.f_36;
}

void Function_271(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xCA35 / 51765
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_261();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, false);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, true);
			AI_IGNORE_ACTOR(&uVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_274(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_274(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_273()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_273()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_272(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_166(0x4000000);
	}
	if (Function_272(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_166(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_272(int iParam0) //Position: 0xCCE7 / 52455
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_273() //Position: 0xCD03 / 52483
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_274(bool bParam0) //Position: 0xCD91 / 52625
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_275(int iParam0, int iParam1) //Position: 0xCDA3 / 52643
{
	Function_276(&iParam0, &iParam1, 0);
	return;
}

void Function_276(var uParam0, bool bParam1, bool bParam2) //Position: 0xCDB3 / 52659
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_277(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_277(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCF2B / 53035
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

int Function_278(int iParam0, int iParam1, int iParam2) //Position: 0xCF55 / 53077
{
	return Function_279(Global_43789, &iParam0, &iParam1, iParam2);
}

int Function_279(int iParam0, char* cParam1, bool bParam3) //Position: 0xCF69 / 53097
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_85(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[iParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

void Function_280(bool bParam0) //Position: 0xD00E / 53262
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				uVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				uVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_281(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0xD09E / 53406
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (iParam2 != Global_53524.f_48 && !Function_288())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_287(0);
	Function_286();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_284(iParam2);
	}
	Function_283(uParam3, iVar0, iVar1);
	Function_282();
}

void Function_282() //Position: 0xD147 / 53575
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_283(int iParam0, bool bParam1, bool bParam2) //Position: 0xD188 / 53640
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_284(bool bParam0) //Position: 0xD2F1 / 54001
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_285() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_285() //Position: 0xD489 / 54409
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_286() //Position: 0xD4CF / 54479
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_287(bool bParam0) //Position: 0xD4F3 / 54515
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_288() //Position: 0xD522 / 54562
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_289(int iParam0) //Position: 0xD53D / 54589
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&Local_326 + 2984[0]);
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&Local_326 + 3152[0]);
			break;
		
		case 0x00000004:
			return StackVal;
			break;
		
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000006:
			return StackVal;
			break;
		
		case 0x00000007:
			return StackVal;
			break;
		
		case 0x00000008:
			return StackVal;
			break;
		
		default:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

struct<8> Function_290(int iParam0) //Position: 0xD698 / 54936
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_291(&Local_326 + 2984[0]);
			return StackVal, Function_291(&Local_326 + 2984[0]);
			break;
		
		case 0x00000001:
			return StackVal, *(&Local_326 + 3008[03]);
			break;
		
		case 0x00000002:
			return StackVal, *(&Local_326 + 3064[03]);
			break;
		
		case 0x00000003:
			Function_291(&Local_326 + 3152[0]);
			return StackVal, Function_291(&Local_326 + 3152[0]);
			break;
		
		case 0x00000004:
			return StackVal, *(&Local_326 + 3176[03]);
			break;
		
		case 0x00000005:
			return StackVal, *(&Local_326 + 3256[13]);
			break;
		
		case 0x00000006:
			return StackVal, *(&Local_326 + 3336[13]);
			break;
		
		case 0x00000007:
			return StackVal, *(&Local_326 + 3336[33]);
			break;
		
		case 0x00000008:
			return StackVal, *(&Local_326 + 4200);
			break;
		
		default:
			return StackVal, *(&Local_326 + 3336[33]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, *(&Local_326 + 3176[03]);
}

struct<8> Function_291(bool bParam0) //Position: 0xD7E1 / 55265
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_292(int iParam0) //Position: 0xD80A / 55306
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_163(&(Global_43791[iParam0]), 4);
}

void Function_293(bool bParam0) //Position: 0xD826 / 55334
{
	Function_266(&bParam0, 0.0f);
	return;
}

int Function_294(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0xD833 / 55347
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && iParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam3) != 7 && iParam3))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_295(float fParam0) //Position: 0xD8D9 / 55513
{
	if (!Function_270(&fParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_180(1, 0, 1);
		}
	}
	return;
}

void Function_296() //Position: 0xD8F5 / 55541
{
	Function_185(47);
	Function_186(256);
	Function_166(2063);
	Function_297(265);
	return;
}

void Function_297(int iParam0) //Position: 0xD912 / 55570
{
	Function_298(&Global_43580, iParam0);
	return;
}

void Function_298(var uParam0, var uParam1) //Position: 0xD920 / 55584
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_299() //Position: 0xD948 / 55624
{
	Function_300(&Local_326 + 1480, 1);
	if (SQUAD_IS_VALID(&Local_326 + 1632))
	{
		Function_280(&Local_326 + 1632);
	}
	if (SQUAD_IS_VALID(&Local_326 + 1560))
	{
		Function_280(&Local_326 + 1560);
	}
	if (SQUAD_IS_VALID(&Local_326 + 1624))
	{
		Function_280(&Local_326 + 1624);
	}
	if (SQUAD_IS_VALID(&Local_326 + 2208))
	{
		Function_280(&Local_326 + 2208);
	}
	if (SQUAD_IS_VALID(&Local_326 + 1640))
	{
		Function_280(&Local_326 + 1640);
	}
	return;
}

void Function_300(struct<2>[] Param0, int iParam1) //Position: 0xD9C6 / 55750
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (IS_ACTOR_VALID(&(Param0[iVar02])))
		{
			uVar1 = GET_MOUNT(&(Param0[iVar02]));
			if (IS_ACTOR_VALID(&uVar1) && iParam1)
			{
				DESTROY_ACTOR(&uVar1);
			}
			DESTROY_ACTOR(&(Param0[iVar02]));
		}
		iVar0++;
	}
	return;
}

void Function_301(bool bParam0) //Position: 0xDA20 / 55840
{
	Function_302(0, 0x40400000);
	Function_196();
	Function_195();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_302(float fParam0, float fParam1) //Position: 0xDA56 / 55894
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_304();
	Function_303();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_303() //Position: 0xDB67 / 56167
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_304() //Position: 0xDB9B / 56219
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_305() //Position: 0xDCA1 / 56481
{
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1924 = 1;
			Function_210(0);
			iLocal_1910 = 0;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			iLocal_1914 = 0;
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			Function_300(&Local_326 + 1480, 1);
			Function_393(&Local_326 + 1632);
			Function_393(&Local_326 + 1640);
			Function_393(&Local_326 + 2208);
			Function_393(&Local_326 + 1560);
			Function_393(&Local_326 + 1624);
			Function_393(&Local_326 + 1992);
			Function_393(&Local_326 + 2208);
			Function_393(&Local_326 + 1648);
			Function_393(&Local_326 + 2216);
			Function_393(&Local_326 + 2224);
			Function_393(&Local_326 + 1552);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2848)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2848));
			}
			if (!iLocal_1584[7] == 1)
			{
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_296();
			if (!iLocal_1584[7])
			{
				fLocal_1967 = *(&Local_326 + 4200);
				fLocal_1967 = (fLocal_1967 + 10.0f);
				TELEPORT_ACTOR(&Global_54076, &fLocal_1967, 1, 1, 1);
				iLocal_1583 = Function_294(StackVal, *(&Local_326 + 4200), 0, 1, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_233(&iLocal_1652);
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() || iLocal_1584[4])
			{
				if (Function_392())
				{
					if (Function_292(iLocal_1583) || iLocal_1583 != 4294967295)
					{
						if (Function_388(&iLocal_1674))
						{
							Function_293(&bLocal_1736);
							iLocal_1563 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!iLocal_1584[7])
			{
				Function_387();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_386();
				Function_381();
				DESTROY_ACTOR(&Local_326 + 1816[12]);
				DESTROY_ACTOR(&Local_326 + 1816[22]);
				DESTROY_ACTOR(&Local_326 + 1816[32]);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_326 + 1816[02], *(&Local_326 + 4200), 1, 1, true);
			}
			ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, true), 0);
			if (IS_OBJECT_VALID(&Local_326 + 4872))
			{
				DESTROY_OBJECT(&Local_326 + 4872);
			}
			ADD_COMPANION_PERMANENT();
			TOGGLE_COVER_PROPS(0);
			if (Function_379(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1550, bLocal_1562))
			{
				Local_1564 = 1000;
				Function_293(&bLocal_1736);
				iLocal_1563 = 3;
			}
			else
			{
				Function_377(StackVal, StackVal, Vector(-4080,987f, 10,104f, 4303,014f), Vector(-0,081f, -0,055f, 0,995f));
				Function_372();
				Function_371(&bLocal_1736, 1.0f);
				iLocal_1563 = 4;
			}
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			break;
		
		case 0x00000003:
			if (Function_339())
			{
				Function_377(StackVal, StackVal, Vector(-4080,987f, 10,104f, 4303,014f), Vector(-0,081f, -0,055f, 0,995f));
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_326 + 1816[02], *(&Local_326 + 4200), 1, 1, true);
				Function_293(&bLocal_1736);
				iLocal_1563 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_263(&bLocal_1736) <= 1.0f)
			{
				if (!DECOR_CHECK_EXIST(&Local_326 + 1816[02], "bSafetyReposition"))
				{
					SET_ACTOR_HEADING(StackVal, &Local_326 + 1816[02], 1);
					DECOR_SET_BOOL(&Local_326 + 1816[02], "bSafetyReposition", true);
					Function_338();
				}
			}
			if (Function_263(&bLocal_1736) <= 2.0f && (!HUD_IS_FADED() || STREAMING_IS_WORLD_LOADED()))
			{
				Function_203(0, 1);
				UI_POP("nCutscenes");
				HUD_ENABLE(1);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, true), 0);
				RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 0);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1579, 9, 0);
				TASK_POINT_GUN_AT_OBJECT(&bLocal_1579, &Local_326 + 1680[02], -1.0f, 0);
				RESET_ACTIONTREE_FOR_ACTOR(&bLocal_1579);
				ACTOR_POP_NEXT_GAIT(&bLocal_1579, 0, false);
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&bLocal_1579);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Local_326 + 1680[02], 60, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Local_326 + 1680[02], 61, 0);
				TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&Global_54076), -1.0f, 0, 0);
				Function_336(7, 0, 1);
				SET_CAMERA_DIRECTION(StackVal, GET_GAME_CAMERA(), Vector(-0,132f, -0,006f, 0,991f), 1);
				SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 1680[02], "reb05_pull/idle");
				STREAMING_UNLOAD_SCENE();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, false);
				SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0,1f);
				Function_336(7, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				SET_ACTOR_ONE_SHOT_DEATH(GET_PLAYER_ACTOR(0), false);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 1656[02], 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Local_326 + 1656[02], 60, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Local_326 + 1656[02], 61, 0);
				if (IS_BLIP_VALID(&uLocal_1965))
				{
					REMOVE_BLIP(&uLocal_1965);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				RESET_REACT_NODE_FOR_ACTOR(&bLocal_1579);
				SET_ACTOR_CAN_BE_TARGETED(&Local_326 + 1680[02], true);
				SET_ACTOR_CAN_BE_TARGETED(&Local_326 + 1656[02], true);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1579);
				Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
				iLocal_1914 = 0;
				iLocal_1916 = 0;
				SET_ACTOR_INVULNERABILITY(&Local_326 + 1680[02], false);
				SET_ACTOR_INVULNERABILITY(&Local_326 + 1656[02], false);
				SET_ACTOR_PERMANENT(&Local_326 + 1680[02], 1);
				SET_ACTOR_PERMANENT(&Local_326 + 1656[02], 1);
				Function_327(&Local_326 + 1776, 0, 0, 0);
				iLocal_1925 = 0;
				Function_293(&bLocal_1736);
				iLocal_1563 = 5;
			}
			break;
		
		case 0x00000005:
			SET_CAMERA_DIRECTION(StackVal, GET_GAME_CAMERA(), Vector(-0,132f, -0,006f, 0,991f), 1);
			Function_293(&bLocal_1736);
			iLocal_1563 = 6;
			break;
		
		case 0x00000006:
			if (!Function_315())
			{
				iLocal_1914 = 0;
				Function_293(&bLocal_1736);
				iLocal_1563 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_313();
			if (!Function_312())
			{
				iLocal_1914 = 0;
				Function_293(&bLocal_1736);
				iLocal_1563 = 16;
			}
			break;
		
		case 0x00000010:
			Function_313();
			if (!Function_307())
			{
				Local_1564 = 1000;
				iLocal_1914 = 0;
				Function_293(&bLocal_1736);
				iLocal_1563 = 17;
			}
			break;
		
		case 0x00000011:
			Function_313();
			Function_293(&bLocal_1736);
			iLocal_1563 = 105;
			break;
		
		case 0x00000069:
			if (!Global_99145)
			{
				Function_313();
			}
			if (Function_263(&bLocal_1736) <= 0,4f)
			{
				AI_GOAL_LOOK_CLEAR(&bLocal_1579);
				TASK_POINT_GUN_AT_COORD(&bLocal_1579, &Local_326 + 4200, -1.0f);
				UI_DISABLE("LoadingSpinner");
				Local_1564 = 1000;
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!Global_99145)
			{
				if (Function_306())
				{
					if (HUD_IS_FADED())
					{
						SET_ENABLE_NAV_STICK_INPUT(0, 1);
						SET_PLAYER_CONTROL_CONFIG(0, 0);
						CLEAR_ALL_CORPSES();
						CLEAR_DECALS();
						REMOVE_ALL_PICKUPS();
						iLocal_1584[8] = 1;
						Function_293(&bLocal_1736);
						bLocal_1562 = 101;
						iLocal_1563 = 0;
					}
				}
			}
			else
			{
				SET_ENABLE_NAV_STICK_INPUT(0, 1);
				SET_PLAYER_CONTROL_CONFIG(0, 0);
				CLEAR_ALL_CORPSES();
				CLEAR_DECALS();
				REMOVE_ALL_PICKUPS();
				iLocal_1584[8] = 1;
				Function_293(&bLocal_1736);
				bLocal_1562 = 101;
				iLocal_1563 = 0;
			}
			break;
	}
	return;
}

bool Function_306() //Position: 0xE43C / 58428
{
	Function_275(&Local_1564, 1);
	switch (Local_1564)
	{
		case 0x000003E8:
			Function_271(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (bLocal_1562 != 99 && (Function_270(&Local_1550) || Local_1550.f_40 < 1))
			{
				Local_1564 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL05_CS06/REBEL05_CS06"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				Local_1564 = 1106;
			}
			else
			{
				bLocal_1970 = &Local_326 + 2232[0];
				Function_268(StackVal, &uLocal_1548, *(&Local_326 + 3512[13]), &bLocal_1970, 0, 0, 0, 0, 1, 1);
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/REBEL05_CS06/REBEL05_CS06", 0, 2, 1, 1, 2);
					Global_99147 = 1;
				}
				if (!Function_267(&Local_1564 + 4))
				{
					Function_265(&Local_1564 + 4);
				}
				else
				{
					Function_293(&Local_1564 + 4);
				}
				Local_1564 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_263(&Local_1564 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load! Skipping...");
				Local_1564 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Global_99147 = 0;
				Function_207(0);
				Function_203(1, 1);
				Local_1564 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1564 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3512[23]), 1, 1, true);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				CUTSCENE_MANAGER_STOP_CUTSCENE(0, 0);
				Local_1564 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				Function_203(1, 1);
				AI_STOP_IGNORING_ACTORS();
				STREAMING_UNLOAD_SCENE();
				Global_99147 = 0;
				Function_259(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Local_1564 = 1000;
				return 1;
			}
			break;
		
		case 0x00000452:
			Local_1564 = 1000;
			return 1;
			break;
	}
	return 0;
}

bool Function_307() //Position: 0xE6AB / 59051
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(&Local_326 + 1680[02]))
	{
		Function_293(&bLocal_1736);
		iLocal_1914 = 0;
		return 0;
	}
	switch (iLocal_1914)
	{
		case 0x00000000:
			if (IS_ACTOR_ALIVE(&Local_326 + 1680[02]))
			{
				if (Function_263(&bLocal_1736) <= 0,3f)
				{
					Function_309();
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Local_326 + 1680[02], bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					Function_293(&bLocal_1736);
					iLocal_1914 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_263(&bLocal_1736) <= 1.0f)
			{
				Function_308(&Local_326 + 1680[02]);
				Function_293(&bLocal_1736);
				iLocal_1914 = 2;
			}
			break;
	}
	return 1;
}

void Function_308(int iParam0) //Position: 0xE765 / 59237
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	var uVar4;
	
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1579, 200.0f);
	MEMORY_ALLOW_SHOOTING(&bLocal_1579, true);
	MEMORY_CONSIDER_AS(&bLocal_1579, &Local_326 + 1656[02], 4);
	MEMORY_CONSIDER_AS(&bLocal_1579, &Local_326 + 1680[02], 4);
	SET_ACTOR_ONE_SHOT_DEATH(&iParam0, true);
	GET_POSITION(&iParam0, &Var2);
	Var2 = Vector(Var2, StackVal, StackVal) + Vector(0,6f, 0,6f, 0,6f);
	bVar1 = ((IS_ACTOR_ALIVE(&Local_326 + 1656[02]) && &iParam0 != &Local_326 + 1680[02]) || (IS_ACTOR_ALIVE(&Local_326 + 1680[02]) && &iParam0 != &Local_326 + 1656[02]));
	GET_POSITION(&bLocal_1579, &uVar4);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_SHOOT_FROM_POSITION(0, &iParam0, &uVar4);
	if (!bVar1)
	{
		TASK_POINT_GUN_AT_COORD(0, &Var2, -1.0f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_PRIORITY_SET(&bLocal_1579, true);
	TASK_SEQUENCE_PERFORM(&bLocal_1579, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_309() //Position: 0xE839 / 59449
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Rebel05_AllMakesArun", "Rebel05_AllMakesArun", false, 2, 1, 0, 1);
		Function_310(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_310(bool bParam0) //Position: 0xE88B / 59531
{
	var uVar0;
	
	Function_311(0, &Global_54076, bParam0, uVar0);
	Function_311(1, &bLocal_1579, bParam0, uVar0);
	if (bLocal_1562 == 0)
	{
		Function_311(2, FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), bParam0, uVar0);
	}
	else
	{
		Function_311(2, &Local_326 + 1904[02], bParam0, uVar0);
	}
	Function_311(3, &Local_326 + 2080[62], bParam0, uVar0);
	Function_311(4, &Local_326 + 2080[22], bParam0, uVar0);
	Function_311(5, &Local_326 + 1680[02], bParam0, uVar0);
	Function_311(6, &Local_326 + 1656[02], bParam0, uVar0);
	Function_311(7, FIND_ACTOR_IN_LAYOUT(&Local_326, "S3_prisoner_3"), bParam0, uVar0);
	Function_311(8, &Local_326 + 1568[22], bParam0, uVar0);
	Function_311(9, &Local_326 + 1904[02], bParam0, uVar0);
	return;
}

void Function_311(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xE975 / 59765
{
	bool bVar0;
	
	uParam3 = &uParam3;
	if (Function_14(bParam2, Function_144(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

bool Function_312() //Position: 0xE99D / 59805
{
	if (!IS_ACTOR_ALIVE(&Local_326 + 1656[02]))
	{
		Function_293(&bLocal_1736);
		iLocal_1914 = 0;
		if (!IS_ACTOR_ALIVE(&Local_326 + 1680[02]))
		{
		}
		else
		{
			Function_308(&Local_326 + 1680[02]);
		}
		return 0;
	}
	switch (iLocal_1914)
	{
		case 0x00000000:
			if (DECOR_CHECK_EXIST(&Local_326 + 1656[02], "npickupGun"))
			{
				Function_293(&bLocal_1736);
				iLocal_1914 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_263(&bLocal_1736) <= 0,1f)
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
				Function_308(&Local_326 + 1656[02]);
				Function_293(&bLocal_1736);
				iLocal_1914 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_ANY_SPEECH_PLAYING(&Local_326 + 1656[02]))
			{
				Function_308(&Local_326 + 1656[02]);
				Function_293(&bLocal_1736);
				iLocal_1914 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_263(&bLocal_1736) < 10.0f)
			{
				TASK_KILL_CHAR(&Local_326 + 1656[02], &Global_54076);
			}
			break;
	}
	return 1;
}

int Function_313() //Position: 0xEAA9 / 60073
{
	switch (iLocal_1916)
	{
		case 0x00000000:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL05_CS06/REBEL05_CS06"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/REBEL05_CS06/REBEL05_CS06", 0, 2, 1, 1, 2);
				STREAMING_UNLOAD_BOUNDS();
				STREAMING_LOAD_SCENE_EXT(*(&Local_326 + 3176[03]), *(&Local_326 + 3176[03] + 12), 1);
				iLocal_1916 = 1;
			}
			else
			{
				iLocal_1916 = 5;
			}
			break;
		
		case 0x00000001:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1916 = 5;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_1916 = 2;
			}
			break;
		
		case 0x00000002:
			Function_314();
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_1916 = 3;
			break;
		
		case 0x00000003:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				iLocal_1916 = 4;
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

void Function_314() //Position: 0xEBA7 / 60327
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		PRINTSTRING("dealing with cutscene actor named ");
		PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0));
		PRINTNL();
		uVar2 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			PRINTSTRING("Found ");
			PRINTSTRING(GET_ACTOR_NAME(&uVar2));
			PRINTSTRING(", his enum is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&uVar2)));
			PRINTNL();
			iVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (iVar1 == GET_ACTOR_ENUM(&Global_54076))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Global_54076);
				}
			}
			if (iVar1 == GET_ACTOR_ENUM(&bLocal_1579))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &bLocal_1579);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_315() //Position: 0xEC7E / 60542
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(&Local_326 + 1680[02]))
	{
		if (!DECOR_CHECK_EXIST(&Local_326 + 1680[02], "bDeadAnimStarted"))
		{
			DECOR_SET_BOOL(&Local_326 + 1680[02], "bDeadAnimStarted", true);
			SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 1680[02], "reb05_pull/allende_death");
			SET_ANIM_SET_FOR_ACTOR(&Local_326 + 1656[02], "reb05_pull", 1);
			SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 1656[02], "reb05_pull/linked_bill_holding/bill_released");
			GIVE_WEAPON_TO_ACTOR(&Local_326 + 1656[02], 5, 1.0f, 1, 0);
			Function_326();
		}
	}
	if (!IS_ACTOR_ALIVE(&Local_326 + 1656[02]))
	{
		if (!DECOR_CHECK_EXIST(&Local_326 + 1656[02], "bDeadAnimStarted"))
		{
			DECOR_SET_BOOL(&Local_326 + 1656[02], "bDeadAnimStarted", true);
			SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 1680[02], "reb05_pull/bill_killed ");
			Function_309();
		}
	}
	if ((!IS_ACTOR_ALIVE(&Local_326 + 1680[02]) && DECOR_CHECK_EXIST(&Local_326 + 1680[02], "bDeadAnimStarted")) || !IS_ACTOR_ALIVE(&Local_326 + 1656[02]))
	{
		Function_293(&bLocal_1736);
		iLocal_1914 = 0;
		return 0;
	}
	if (iLocal_1914 > 5 && iLocal_1914 < 3)
	{
		if (((IS_ACTOR_SHOOTING(&Global_54076) || !IS_ACTOR_ALIVE(&Local_326 + 1656[02])) || !IS_ACTOR_ALIVE(&Local_326 + 1680[02])) || !Function_323(&Local_326 + 1680[02], &Global_54076, 40.0f))
		{
			Function_293(&bLocal_1736);
			iLocal_1914 = 5;
		}
	}
	switch (iLocal_1914)
	{
		case 0x00000000:
			iLocal_1924 = 0;
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1579, &Global_54076, 60.0f, 15.0f, 30.0f);
			if (SQUAD_IS_VALID(&Local_326 + 1776))
			{
				Function_322(&Local_326 + 1776);
				SQUAD_GOALS_CLEAR(&Local_326 + 1776);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1776, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
			Function_293(&bLocal_1736);
			iLocal_1914 = 3;
			break;
		
		case 0x00000003:
			HUD_CLEAR_OBJECTIVE();
			Function_321("Rebel05_obj08", 0x40f00000, 1, 2, 0, 0, 0, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_326 + 1656[02], &Local_326 + 1816[02], 1);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_326 + 1680[02], &Local_326 + 1816[02], 1);
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Local_1564 + 24);
			DESTROY_OBJECT(&Local_1564 + 24);
			Function_293(&bLocal_1736);
			iLocal_1914 = 4;
			break;
		
		case 0x00000004:
			bLocal_1911 = false;
			Function_266(&bLocal_1752, 10.0f);
			Function_293(&bLocal_1736);
			iLocal_1914 = 5;
			break;
		
		case 0x00000005:
			if (Function_263(&bLocal_1752) <= 5.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (bLocal_1911)
					{
						case 0x00000000:
							Function_320();
							break;
						
						case 0x00000001:
							Function_319();
							break;
						
						case 0x00000002:
							Function_318();
							break;
						
						case 0x00000003:
							Function_317();
							bVar0 = TASK_SEQUENCE_OPEN();
							TASK_POINT_GUN_AT_OBJECT(&bLocal_1579, &Local_326 + 1680[02], 3,1f, 0);
							Function_316(0, &Local_326 + 1680[02]);
							TASK_POINT_GUN_AT_OBJECT(0, &Local_326 + 1656[02], -1.0f, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_1579, bVar0);
							TASK_SEQUENCE_RELEASE(bVar0, 1);
							break;
					}
					Function_293(&bLocal_1752);
					bLocal_1911++;
					PRINTSTRING("TAUNT - go to ");
					PRINTINT(bLocal_1911);
					PRINTNL();
				}
			}
			if (((IS_ACTOR_SHOOTING(&Global_54076) || !IS_ACTOR_ALIVE(&Local_326 + 1656[02])) || !IS_ACTOR_ALIVE(&Local_326 + 1680[02])) || (!Function_323(&bLocal_1579, &Global_54076, 40.0f) && Function_263(&bLocal_1736) <= 1.0f))
			{
				Function_308(&Local_326 + 1680[02]);
				if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (IS_ACTOR_ALIVE(GET_LAST_ATTACK_TARGET(&Global_54076)))
					{
						Function_308(GET_LAST_ATTACK_TARGET(&Global_54076));
						CLEAR_LAST_ATTACK(&Global_54076);
					}
				}
				Function_293(&bLocal_1736);
				iLocal_1914 = 4294967295;
			}
			break;
	}
	return 1;
}

void Function_316(int iParam0, var uParam1) //Position: 0xF0F6 / 61686
{
	var uVar0;
	
	GET_POSITION(&iParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(&iParam0, &uParam1, &uVar0);
	return;
}

void Function_317() //Position: 0xF10F / 61711
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ReyesKillsColonel", "Rebel05_ReyesKillsColonel", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_318() //Position: 0xF16A / 61802
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v7_AA", "Rebel05_billJonTaunt_v7_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v7_AB", "Rebel05_billJonTaunt_v7_AB", 11, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_319() //Position: 0xF20D / 61965
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v6_AA", "Rebel05_billJonTaunt_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v6_AB", "Rebel05_billJonTaunt_v6_AB", 11, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_320() //Position: 0xF2B0 / 62128
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v4_AA", "Rebel05_billJonTaunt_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v4_AB", "Rebel05_billJonTaunt_v4_AB", 11, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_321(char* cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xF353 / 62291
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_322(int iParam0) //Position: 0xF3E8 / 62440
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_323(bool bParam0, bool bParam1, float fParam2) //Position: 0xF41D / 62493
{
	float fVar0;
	
	fVar0 = Function_324(&bParam0, &bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_324(var uParam0, int iParam1) //Position: 0xF43C / 62524
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_325(&uVar0, &uVar2);
	return iVar4;
}

var Function_325(struct<2> Param0) //Position: 0xF45D / 62557
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_326() //Position: 0xF47C / 62588
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_BillFeignsSurrend", "Rebel05_BillFeignsSurrend", false, 2, 1, 0, 1);
		Function_310(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_327(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF4D8 / 62680
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			SQUAD_LEAVE(&bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&bVar1))
			{
				bVar2 = GET_VEHICLE(&bVar1);
				if (&bParam3)
				{
					DESTROY_ACTOR(&bVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar1);
					}
					if (!Function_328(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(&bVar1))
			{
				bVar2 = GET_MOUNT(&bVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					DESTROY_ACTOR(&bVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar1);
					}
					if (!Function_328(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
						}
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else
			{
				if (&bParam3)
				{
					DESTROY_ACTOR(&bVar1);
				}
				else if (&bParam2)
				{
					if (!Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_328(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF711 / 63249
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &fParam1, &fParam2, &iParam3, &iParam4, &iParam5);
}

int Function_329(struct<69> Param0) //Position: 0xF731 / 63281
{
	if (!Function_335(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_334(&Param0, &bParam2))
	{
		return 0;
	}
	Function_333(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_330(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_330(var uParam0, int iParam1, int iParam2) //Position: 0xF777 / 63351
{
	if (iParam1 != 100000000)
	{
		Function_332(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_331(&uParam0, &iParam2);
	}
	return;
}

void Function_331(struct<69> Param0) //Position: 0xF79E / 63390
{
	Param0.f_68 = 0;
	Function_332(&Param0, 2, &bParam1);
	Function_332(&Param0, 4, &bParam1);
	Function_332(&Param0, 8, &bParam1);
	Function_332(&Param0, 16, &bParam1);
	Function_332(&Param0, 32, &bParam1);
	Function_332(&Param0, 64, &bParam1);
	Function_332(&Param0, 128, &bParam1);
	Function_332(&Param0, 256, &bParam1);
	Function_332(&Param0, 512, &bParam1);
	Function_332(&Param0, 1024, &bParam1);
	return;
}

void Function_332(int iParam0, int iParam1, bool bParam2) //Position: 0xF819 / 63513
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_333(struct<65> Param0) //Position: 0xF858 / 63576
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_334(int iParam0, char* cParam1) //Position: 0xF865 / 63589
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_335(struct<61> Param0) //Position: 0xF8F2 / 63730
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

void Function_336(int iParam0, bool bParam1, bool bParam2) //Position: 0xFAA5 / 64165
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_212(&uVar1);
					}
				}
				Function_337(&uVar0);
			}
		}
	}
	return;
}

void Function_337(bool bParam0) //Position: 0xFBB4 / 64436
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

void Function_338() //Position: 0xFBE7 / 64487
{
	struct<2> Var0;
	float fVar2;
	
	GET_OBJECT_POSITION(&Local_326 + 4248, &Var0);
	fVar2 = GET_OBJECT_HEADING(&Local_326 + 4248);
	CREATE_PROP_IN_LAYOUT(StackVal, &Local_326, "billsFallenHat", "anc_firstOldFriend_set_anc_firstOldFriend_hat", Var0, Vector(165.0f, fVar2, 0.0f), false);
	PRINTSTRING("Made hat at ");
	PRINTVECTOR(Var0);
	PRINTNL();
	return;
}

bool Function_339() //Position: 0xFC79 / 64633
{
	return Function_340("$/cutscene/REBEL_LEADER_05_CS03/REBEL_LEADER_05_CS03", &Local_1564, &Local_1550, &bLocal_1562, 70253, 69815, 68869, 67181, 67024, 66941, 0, 1, 1, 2, 2, 0, 0);
}

float Function_340(var uParam0, int iParam1, struct<41> Param2) //Position: 0xFCE1 / 64737
{
	if (!&bParam15)
	{
		Function_275(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_270(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_293(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_347())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_346(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_346(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_263(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_263(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_344(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_346(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_343(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_341();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_260(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_270(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_341() //Position: 0x10346 / 66374
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_342();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_342() //Position: 0x1038B / 66443
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_343(bool bParam0) //Position: 0x1039D / 66461
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

void Function_344(var uParam0, int iParam1) //Position: 0x103BA / 66490
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_345(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_345(int iParam0) //Position: 0x1044C / 66636
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_346(bool bParam0) //Position: 0x1047D / 66685
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_347() //Position: 0x10540 / 66880
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

int Function_348() //Position: 0x1057D / 66941
{
	switch (bLocal_1562)
	{
		case 0x00000007:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 1, 1, true);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 0);
			TASK_STAND_STILL(&bLocal_1579, -1.0f, 0, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_349() //Position: 0x105D0 / 67024
{
	switch (bLocal_1562)
	{
		case 0x00000007:
			if (DECOR_CHECK_EXIST(&Local_326 + 1552, "bMadeAxeGuys"))
			{
				DECOR_REMOVE(&Local_326 + 1552, "bMadeAxeGuys");
			}
			Function_259(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000008:
			Function_259(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			UI_PUSH("nCutscenes");
			HUD_ENABLE(0);
			return 1;
			break;
		
		default:
			Function_259(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_350() //Position: 0x1066D / 67181
{
	switch (bLocal_1562)
	{
		case 0x00000007:
			if (IS_ACTOR_VALID(&uLocal_1980))
			{
				DESTROY_ACTOR(&uLocal_1980);
			}
			if (!IS_DOOR_OPENED(&iLocal_1927))
			{
				Function_206(&iLocal_1927, 0);
				OPEN_DOOR_DIRECTION_FAST(&iLocal_1927, false);
			}
			if (!IS_DOOR_OPENED(&iLocal_1929))
			{
				Function_206(&iLocal_1929, 0);
				OPEN_DOOR_DIRECTION_FAST(&iLocal_1929, true);
			}
			if (!DECOR_CHECK_EXIST(&Local_326 + 1552, "bMadeAxeGuys"))
			{
				Function_355(StackVal, StackVal, 516, *(&Local_326 + 3336[03]));
				Function_355(StackVal, StackVal, 522, *(&Local_326 + 3336[13]));
				Function_355(StackVal, StackVal, 521, *(&Local_326 + 3336[43]));
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3336[33]), 1, 1, true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 1, 1, true);
			ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, 5), 0);
			RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
			Function_354();
			return 1;
			break;
		
		case 0x00000008:
			if (iLocal_1563 <= 106)
			{
				Function_372();
				UI_PUSH("nCutscenes");
				HUD_ENABLE(0);
				Function_353(&Local_326, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
				Function_351(StackVal, StackVal, StackVal, StackVal, Vector(-4080,004f, 9,294f, 4308,681f), Vector(-0,55f, 0,027f, -0,835f), Vector(-4079,117f, 9,372f, 4308,701f), Vector(-0,647f, 0,077f, -0,758f), 2.0f, 0, 1, 1, 0);
				SET_ACTOR_HEADING(&bLocal_1579, -226,574f, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1579, 9, 0);
				RESET_ACTIONTREE_FOR_ACTOR(&bLocal_1579);
				ACTOR_POP_NEXT_GAIT(&bLocal_1579, 0, false);
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, true), 0);
				RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
				if (IS_OBJECT_VALID(&iLocal_1957))
				{
					SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_1957));
				}
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "rebel05_cs05", 0);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "rebel05_cs05/john");
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1579, "rebel05_cs05", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1579, "rebel05_cs05/reyes");
				TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&Global_54076), -1.0f, 0, 0);
				TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&bLocal_1579), -1.0f, 0, 0);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_351(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x108F8 / 67832
{
	Function_352(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	Function_352(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (fParam8 >= 0.0f)
	{
		fParam8 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &iParam10);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param4);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param6, &iParam11);
	Global_99148.f_8 = StackVal + 1;
	switch (&iParam12)
	{
		case 0x00000002:
		case 0x00000003:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000004:
		case 0x00000005:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000006:
		case 0x00000007:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000000:
		case 0x00000001:
			CUTSCENEOBJECT_ADD_TRANSITION_LERP(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 1);
	Global_99148.f_12 = 1;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam9))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &iParam9, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_352(float fParam0) //Position: 0x10ABA / 68282
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_353(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, float fParam12, int iParam13) //Position: 0x10ACD / 68301
{
	Function_203(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &iParam3;
	Global_99148.f_20 = &iParam4;
	Global_99148.f_24 = &iParam5;
	Global_99148.f_28 = &iParam6;
	Global_99148.f_32 = &iParam7;
	Global_99148.f_36 = &iParam8;
	Global_99148.f_40 = &iParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &iParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &iParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &iParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &iParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_354() //Position: 0x10BD6 / 68566
{
	bool bVar0;
	
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1579, false);
	ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1579, 9, 1);
	ACTOR_POP_NEXT_GAIT(&bLocal_1579, 0, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 0,5f, 1, 0);
	TASK_FOLLOW_PATH(0, &Local_326 + 4848, 4, 1, 0, 1, false);
	TASK_GO_NEAR_OBJECT(0, &Local_326 + 4624, 1,5f, 4, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4624), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1579, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_355(bool bParam0, struct<2> Param1, var uParam3) //Position: 0x10C59 / 68697
{
	bool bVar0;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(&Local_326, Function_54(), bParam0, Param1, *(&Param1 + 12));
	SQUAD_JOIN(&bVar0, &Local_326 + 1552);
	TASK_STAND_STILL(&bVar0, 10.0f, 0, 0);
	Function_356(&bVar0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar0, 0);
}

void Function_356(bool bParam0) //Position: 0x10CA1 / 68769
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 3);
	switch (bVar0)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(&bParam0, 42, false, 1, 1);
			break;
		
		case 0x00000001:
			GIVE_WEAPON_TO_ACTOR(&bParam0, 43, false, 1, 1);
			break;
		
		case 0x00000002:
			GIVE_WEAPON_TO_ACTOR(&bParam0, 41, false, 1, 1);
			break;
		
		case 0x00000003:
			GIVE_WEAPON_TO_ACTOR(&bParam0, 40, false, 1, 1);
			break;
	}
	return;
}

int Function_357() //Position: 0x10D05 / 68869
{
	switch (bLocal_1562)
	{
		case 0x00000007:
			if (!DECOR_CHECK_EXIST(&Local_326 + 1552, "s8_cleared"))
			{
				Function_362(&Local_326 + 1552);
				DECOR_SET_BOOL(&Local_326 + 1552, "s8_cleared", true);
			}
			if (!DECOR_CHECK_EXIST(&Local_326 + 1552, "bMadeAxeGuys"))
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() > 1)
				{
					DECOR_SET_BOOL(&Local_326 + 1552, "bMadeAxeGuys", true);
					Function_355(StackVal, StackVal, 516, *(&Local_326 + 3336[03]));
					Function_355(StackVal, StackVal, 522, *(&Local_326 + 3336[13]));
					Function_355(StackVal, StackVal, 521, *(&Local_326 + 3336[43]));
					ACTOR_RESET_ANIMS(&bLocal_1579, 1);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 0);
					TASK_STAND_STILL(&bLocal_1579, -1.0f, 0, 0);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 1, 1, true);
				}
			}
			if ((Function_361() && Function_358()) && Function_388(&iLocal_1674))
			{
				return 1;
			}
			break;
		
		case 0x00000008:
			if (Function_392() && Function_388(&iLocal_1674))
			{
				STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4080,053f, 9,802f, 4308,754f), Vector(0.0f, 0.0f, 0.0f), 1);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_358() //Position: 0x10E51 / 69201
{
	Function_359(&Local_326 + 1208, 290, 2, 0);
	Function_359(&Local_326 + 1208, 291, 2, 0);
	Function_359(&Local_326 + 1208, 293, 2, 0);
	Function_359(&Local_326 + 1208, 285, 2, 0);
	Function_359(&Local_326 + 1208, 522, 2, 0);
	Function_359(&Local_326 + 1208, 516, 2, 0);
	Function_359(&Local_326 + 1208, 521, 2, 0);
	if (Function_388(&Local_326 + 1208))
	{
		return 1;
	}
	return 0;
}

var Function_359(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10ECF / 69327
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_236(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_360(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_360(&(Param0[iVar02]), 8);
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

void Function_360(struct<13> Param0) //Position: 0x10FAB / 69547
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

int Function_361() //Position: 0x10FBE / 69566
{
	Function_359(&Local_326 + 920, 582, 2, 0);
	Function_359(&Local_326 + 920, 580, 2, 0);
	Function_359(&Local_326 + 920, 395, 2, 0);
	Function_359(&Local_326 + 920, 976, 2, 0);
	Function_359(&Local_326 + 920, 393, 2, 0);
	Function_359(&Local_326 + 920, 977, 2, 0);
	Function_359(&Local_326 + 920, 391, 2, 0);
	Function_359(&Local_326 + 920, 980, 2, 0);
	Function_359(&Local_326 + 920, 1180, 2, 0);
	Function_359(&Local_326 + 920, 392, 2, 0);
	if (Function_388(&Local_326 + 920))
	{
		return 1;
	}
	return 0;
}

void Function_362(bool bParam0) //Position: 0x11069 / 69737
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

int Function_363() //Position: 0x110B7 / 69815
{
	switch (bLocal_1562)
	{
		case 0x00000007:
			return 1;
			break;
	}
	switch (bLocal_1562)
	{
		case 0x00000008:
			Function_366(StackVal, StackVal, Vector(-4080,987f, 10,104f, 4303,014f), Vector(-0,081f, -0,055f, 0,995f));
			STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4080,053f, 9,802f, 4308,754f), Vector(0.0f, 0.0f, 0.0f), 1);
			Function_364();
			if (IS_OBJECT_VALID(&iLocal_1957))
			{
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_1957));
			}
			if (iLocal_1563 < 3)
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			}
			else
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			}
			return 1;
			break;
	}
	return 1;
}

void Function_364() //Position: 0x11148 / 69960
{
	int iVar0;
	
	bLocal_1581 = GET_MOST_RECENT_MOUNT(&Global_54076);
	if (!IS_ACTOR_ALIVE(&bLocal_1581))
	{
		Function_291(&Local_326 + 2984[0]);
		Function_365(&Local_326 + 2984[0]);
		bLocal_1581 = CREATE_ACTOR_IN_LAYOUT(&Local_326, "r05backupPlayerHorse", 976, Function_291(&Local_326 + 2984[0]), Function_365(&Local_326 + 2984[0]));
		ACCESSORIZE_HORSE(&bLocal_1581, 4);
	}
	iVar0 = GET_MOST_RECENT_MOUNT(&bLocal_1579);
	if (!IS_ACTOR_ALIVE(&iVar0))
	{
		Function_291(&Local_326 + 2984[1]);
		Function_365(&Local_326 + 2984[1]);
		iVar0 = CREATE_ACTOR_IN_LAYOUT(&Local_326, "r05backupReyesHorse", 977, Function_291(&Local_326 + 2984[1]), Function_365(&Local_326 + 2984[1]));
		ACCESSORIZE_HORSE(&iVar0, 3);
	}
	SET_MOST_RECENT_MOUNT(&Global_54076, &bLocal_1581);
	SET_MOST_RECENT_MOUNT(&bLocal_1579, &iVar0);
	return;
}

struct<8> Function_365(int iParam0) //Position: 0x1121A / 70170
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_366(struct<2> Param0, struct<2> Param2) //Position: 0x11243 / 70211
{
	struct<2> Var0;
	
	Var0 = Param2;
	VSCALE(&Var0, 5.0f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Var0, 0, 0);
}

int Function_367() //Position: 0x1126D / 70253
{
	bool bVar0;
	
	switch (bLocal_1562)
	{
		case 0x00000007:
			Function_271(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 5, 0);
			STREAMING_UNLOAD_SCENE();
			Function_268(StackVal, &uLocal_1548, *(&Local_326 + 3336[33]), &Local_326 + 2848, 0, 0, 0, 0, 1, 1);
			bVar0 = GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4272), "UseCase1"));
			if (!IS_ACTOR_VALID(&bVar0))
			{
				DESTROY_ACTOR(&bVar0);
			}
			bVar0 = GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4280), "UseCase2"));
			if (!IS_ACTOR_VALID(&bVar0))
			{
				DESTROY_ACTOR(&bVar0);
			}
			Function_368();
			DESTROY_GC_OBJECTS(0, 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000008:
			Function_271(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_1579, 5, 0);
			Function_268(StackVal, &uLocal_1548, *(&Local_326 + 4200), &Local_1564 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_368() //Position: 0x1137D / 70525
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4272), "UseCase1"));
	if (!IS_ACTOR_VALID(&bVar0))
	{
		DESTROY_ACTOR(&bVar0);
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4280), "UseCase2"));
	if (!IS_ACTOR_VALID(&bVar0))
	{
		DESTROY_ACTOR(&bVar0);
	}
	Function_369(&Local_326 + 4272, "UseCase1");
	Function_369(&Local_326 + 4280, "UseCase2");
	return;
}

void Function_369(int iParam0, var uParam1) //Position: 0x11409 / 70665
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	uVar6 = GRINGO_GET_USE_COMPONENT_EXT(GET_GRINGO_FROM_OBJECT(&iParam0), &uParam1);
	bVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar6, 0);
	iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar5, &uVar6);
	uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar4, GET_GRINGO_FROM_OBJECT(&iParam0));
	iVar2 = GET_OBJECT_FROM_PHYSINST(&uVar3);
	if (!IS_OBJECT_VALID(&iVar2))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		PRINTSTRING("Could not get axe from gringo! trying to destroy axe at ");
		PRINTVECTOR(Var0);
		PRINTNL();
		iVar2 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var0, 3.0f, "axe", 1));
	}
	if (IS_OBJECT_VALID(&iVar2))
	{
		DESTROY_OBJECT(&iVar2);
	}
	return;
}

var Function_370(bool bParam0, bool bParam1) //Position: 0x114D7 / 70871
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&bParam0, &bParam1);
}

void Function_371(bool bParam0, float fParam1) //Position: 0x114E6 / 70886
{
	if (!Function_267(&bParam0))
	{
		Function_266(&bParam0, fParam1);
	}
	return;
}

void Function_372() //Position: 0x114FE / 70910
{
	Function_376(&bLocal_1579, &Local_326 + 3472[1], 1, 1, 1);
	Function_374(StackVal, &bLocal_1579, *(&Local_326 + 4200));
	TASK_POINT_GUN_AT_OBJECT(&bLocal_1579, &Local_326 + 1680[02], -1.0f, 0);
	Function_376(&Global_54076, &Local_326 + 3472[0], 1, 1, 1);
	Function_374(StackVal, &Global_54076, *(&Local_326 + 4200));
	if (!IS_ACTOR_VALID(&Local_326 + 1816[02]))
	{
		LOG_ERROR("wagon's not valid. make it again");
		Function_381();
		DESTROY_ACTOR(&Local_326 + 1816[12]);
		DESTROY_ACTOR(&Local_326 + 1816[22]);
		DESTROY_ACTOR(&Local_326 + 1816[32]);
	}
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_326 + 1816[02], *(&Local_326 + 4200), 1, 1, true);
	Function_376(&bLocal_1581, &Local_326 + 3472[2], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1581, -1.0f, 0, 0);
	if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&bLocal_1579)))
	{
		Function_376(GET_MOST_RECENT_MOUNT(&bLocal_1579), &Local_326 + 3472[3], 1, 1, 1);
		TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&bLocal_1579), -1.0f, 0, 0);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 1656[02])))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 1656[02]));
	}
	SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&Local_326 + 1656[02], 322, 0, 2, 0), "MISC_FirstOldFriend");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1656[02]);
	DEEQUIP_ACCESSORY(&Local_326 + 1656[02], 0);
	MEMORY_CONSIDER_AS(&Local_326 + 1680[02], &bLocal_1579, 2);
	MEMORY_CONSIDER_AS(&Local_326 + 1680[02], &Local_326 + 1656[02], 2);
	MEMORY_CONSIDER_AS(&bLocal_1579, &Local_326 + 1680[02], 2);
	MEMORY_CONSIDER_AS(&bLocal_1579, &Local_326 + 1656[02], 2);
	MEMORY_CONSIDER_AS(&Local_326 + 1656[02], &bLocal_1579, 2);
	MEMORY_CONSIDER_AS(&Local_326 + 1656[02], &Local_326 + 1680[02], 2);
	MEMORY_PREFER_WALKING(&bLocal_1579, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 5);
	FIRE_STOP_ALL_FIRES();
	Function_373();
	return;
}

void Function_373() //Position: 0x11729 / 71465
{
	var uVar0;
	
	Function_274(&Local_326 + 1816[02]);
	CLEAR_AREA_OF_GRASS(Function_274(&Local_326 + 1816[02]), 6.0f);
	uVar0 = GET_GRINGO_FROM_OBJECT(&Local_326 + 4304);
	SNAP_ACTOR_TO_GRINGO(&Local_326 + 1656[02], GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_326 + 1680[02], GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase2", true, 0, 0);
	TASK_USE_GRINGO(&Local_326 + 1656[02], &uVar0, "UseCase1", true, 1);
	TASK_USE_GRINGO(&Local_326 + 1680[02], &uVar0, "UseCase2", true, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 1656[02], 1.0f);
	SET_ACTOR_HEALTH(&Local_326 + 1656[02], GET_ACTOR_MAX_HEALTH(&Local_326 + 1656[02]));
	SET_ACTOR_ONE_SHOT_DEATH(&Local_326 + 1680[02], true);
	SET_REACT_NODE_FOR_ACTOR(&Local_326 + 1680[02], "reb05_pull/allende_death");
	SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_326 + 1656[02], &Local_326 + 1816[02], 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_326 + 1680[02], &Local_326 + 1816[02], 0);
	STOP_VEHICLE(&Local_326 + 1816[02]);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&Local_326 + 1816[02]), true);
	SET_ACTOR_CAN_PLAY_GESTURES(&Local_326 + 1656[02], false);
	CLEAR_LAST_ATTACK(&Global_54076);
	SNAP_OBJECT_TO_GROUND(&Local_326 + 1680[02], 2.0f, false, 1092616192);
	SNAP_OBJECT_TO_GROUND(&Local_326 + 1656[02], 2.0f, false, 1092616192);
	return;
}

void Function_374(bool bParam0, struct<2> Param1) //Position: 0x118B8 / 71864
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_375(&bParam0, &bParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_375(GET_MOUNT(&bParam0), &bParam0, Param1), 1);
	}
	return;
}

var Function_375(int iParam0, struct<2> Param1) //Position: 0x118F3 / 71923
{
	struct<2> Var0;
	
	Function_274(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_376(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11974 / 72052
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

int Function_377(struct<2> Param0, struct<2> Param2) //Position: 0x11A84 / 72324
{
	struct<2> Var0;
	
	Var0 = Param2;
	VSCALE(&Var0, 5.0f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	ENABLE_GAME_CAMERA_FOCUS(Var0, -1.0f, 6, 1, 1, 0);
	if (!Function_378(StackVal, Var0, -0,9f, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_378(struct<2> Param0, float fParam2, bool bParam3) //Position: 0x11AC7 / 72391
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &uVar0);
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param0, StackVal);
	VNORMALIZE(&uVar4);
	if (VDOT(&uVar0, &uVar4) >= &fParam2)
	{
		return 1;
	}
	if (&bParam3)
	{
		PRINTSTRING("IS_GAME_CAMERA_FACING_DIRECTION: vdot = ");
		PRINTFLOAT(VDOT(&uVar0, &uVar4));
		PRINTNL();
	}
	return 0;
}

bool Function_379(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x11B47 / 72519
{
	if (Function_380(&fParam0) == iParam6 || Function_288())
	{
		return 1;
	}
	return 0;
}

int Function_380(float fParam0) //Position: 0x11B66 / 72550
{
	if (Function_270(&fParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_381() //Position: 0x11B7F / 72575
{
	*(&Local_326 + 1888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "S5_WagonGroup"));
	*(&Local_326 + 1816[02]) = Function_382(StackVal, StackVal, &Local_326, "escapeWagon", 1180, 977, Vector(-4373,768f, 33,61426f, 4273,297f), Vector(0.0f, 101,0989f, 0.0f), 1, 976, 976, 976, 4);
	SQUAD_JOIN(&Local_326 + 1816[02], &Local_326 + 1888);
	SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 1816[02], false);
	SET_ALLOW_JACK(&Local_326 + 1816[02], 0);
	ENABLE_VEHICLE_SEAT(&Local_326 + 1816[02], 2, 0);
	ENABLE_VEHICLE_SEAT(&Local_326 + 1816[02], 3, 0);
	ENABLE_VEHICLE_SEAT(&Local_326 + 1816[02], 4, 0);
	ENABLE_VEHICLE_SEAT(&Local_326 + 1816[02], 5, 0);
	SET_VEHICLE_EJECTION_ENABLED(&Local_326 + 1816[02], 0);
	ENABLE_VEHICLE_SEAT(&Local_326 + 1816[02], false, 0);
	*(&Local_326 + 1816[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "wagonDriver", 391, Vector(-4373,05f, 33,61321f, 4278,415f), Vector(0.0f, 88,94974f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1816[12], &Local_326 + 1888);
	SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 1816[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1816[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1816[12], 40, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_326 + 1816[12], 19);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 1816[12], 359.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_326 + 1816[12], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1816[12], 53, 5.0f);
	*(&Local_326 + 1816[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "wagonGunner", 392, Vector(-4373,016f, 33,6821f, 4277,334f), Vector(0.0f, 98,85951f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1816[22], &Local_326 + 1888);
	SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 1816[22], false);
	SET_ACTOR_FACTION(&Local_326 + 1816[22], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1816[22], 49, 0,8f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_326 + 1816[22], 15, true);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 1816[22], 359.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_326 + 1816[22], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1816[22], 53, 5.0f);
	*(&Local_326 + 1816[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "wagonRearGunner", 393, Vector(-4371,881f, 33,61321f, 4278,437f), Vector(0.0f, 88,94974f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1816[32], &Local_326 + 1888);
	SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 1816[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1816[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1816[32], 40, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_326 + 1816[32], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1816[32], 49, 0,8f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_326 + 1816[32], 15, true);
	return;
}

var Function_382(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x11EB9 / 73401
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			uVar15 = "";
			if (Function_385(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_384(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_383(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, bVar18, 0);
			bVar18++;
		}
	}
	return &uVar0;
}

bool Function_383(int iParam0, bool[] bParam1) //Position: 0x1210C / 73996
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_384(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x12140 / 74048
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_385(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1215C / 74076
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_386() //Position: 0x12188 / 74120
{
	(&Local_326 + 1656[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "OF", 582, Vector(-4336,386f, 42,0723f, 4323,935f), Vector(0.0f, 91,28896f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1656[02]);
	TASK_STAND_STILL(&Local_326 + 1656[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1656[02]);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1656[02], 1);
	SET_ACTOR_FACTION(&Local_326 + 1656[02], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1656[02], 49, 0,9f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_326 + 1656[02], 15, true);
	SET_ACTOR_HEALTH(&Local_326 + 1656[02], 18.0f);
	MEMORY_ALLOW_SHOOTING(&Local_326 + 1656[02], false);
	DECOR_SET_BOOL(&Local_326 + 1656[02], "CanBeLasso", false);
	return;
}

void Function_387() //Position: 0x12266 / 74342
{
	*(&Local_326 + 1680[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "Tyrant", 580, Vector(-4338,215f, 42,10889f, 4324,039f), Vector(0.0f, 93,82066f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1680[02]);
	TASK_STAND_STILL(&Local_326 + 1680[02], -1.0f, 0, 0);
	SET_ACTOR_HEALTH(&Local_326 + 1680[02], 20.0f);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1680[02], 1);
	SET_ACTOR_FACTION(&Local_326 + 1680[02], 19);
	DECOR_SET_BOOL(&Local_326 + 1680[02], "CanBeLasso", false);
	return;
}

bool Function_388(struct<2>[] Param0) //Position: 0x12309 / 74505
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_391();
	iVar1 = 0;
	if (!Function_236(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_360(&(Param0[iVar02]), 8);
		}
		else if (Function_390())
		{
			iVar1 = 1;
			Function_360(&(Param0[iVar02]), 8);
		}
		Function_360(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_236(&(Param0[iVar02]), 4))
		{
			if (!Function_236(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_236(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_236(&(Param0[02]), 8) || iVar1));
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
				Function_360(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_236(&(Param0[iVar02]), 4))
		{
			if (!Function_236(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_360(&(Param0[iVar02]), 2);
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
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_360(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_360(&(Param0[iVar02]), 2);
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
	Function_389();
	return 1;
}

void Function_389() //Position: 0x126CB / 75467
{
	if (!Function_272(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_390() //Position: 0x1270B / 75531
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

void Function_391() //Position: 0x12739 / 75577
{
	if (!Function_272(128))
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

bool Function_392() //Position: 0x1277B / 75643
{
	Function_359(&Local_326 + 1088, 582, 2, 0);
	Function_359(&Local_326 + 1088, 580, 2, 0);
	Function_359(&Local_326 + 1088, 1180, 2, 0);
	Function_359(&Local_326 + 1088, 977, 2, 0);
	Function_359(&Local_326 + 1088, 391, 2, 0);
	Function_359(&Local_326 + 1088, 392, 2, 0);
	Function_359(&Local_326 + 1088, 393, 2, 0);
	if (Function_388(&Local_326 + 1088))
	{
		return 1;
	}
	return 0;
}

void Function_393(bool bParam0) //Position: 0x127F9 / 75769
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_394() //Position: 0x12844 / 75844
{
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		Function_274(&Local_326 + 1816[02]);
		STREAMING_LOAD_BOUNDS(Function_274(&Local_326 + 1816[02]), 90.0f, 1);
		Function_482();
		if (!iLocal_1925)
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_1925 = 1;
			}
		}
		if (IS_ACTOR_ALIVE(&Local_326 + 1816[32]))
		{
			if (!Function_481(&Local_326 + 1816[32], &iLocal_1957))
			{
				Function_480(&Local_326 + 1816[32]);
			}
		}
		if (DECOR_CHECK_EXIST(&Local_326 + 1816[02], "fStartRollTime"))
		{
			STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4059,308f, 12,645f, 4309,889f), Vector(0.0f, 100.0f, 0.0f), 1);
			Function_479();
		}
		Function_478();
		if (iLocal_1563 > 6)
		{
			Function_463();
		}
		if (SQUAD_GET_SIZE(&Local_326 + 1888) >= 1)
		{
			Function_462(&Local_326 + 1816[12], &Local_326 + 1816[22], &Local_326 + 1816[02]);
		}
		Function_461();
		if (IS_ACTOR_ALIVE(&Local_326 + 1656[02]))
		{
			Function_454(&bLocal_1748, (60.0f * 6.0f), (200.0f * 3.0f), &Local_326 + 1656[02], "rebel05_billReturn", "rebel05_billEscaped", &bLocal_1577, 0, 0, 0, 325, 1);
		}
		else
		{
			Function_454(&bLocal_1748, 60.0f, 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
			if (!Function_323(&bLocal_1579, &Global_54076, 60.0f))
			{
				Function_336(7, 1, 1);
			}
			else
			{
				Function_336(7, 0, 1);
			}
		}
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1924 = 1;
			Function_210(1);
			iLocal_1925 = 0;
			iLocal_1910 = 0;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			Function_300(&Local_326 + 1480, 1);
			Function_393(&Local_326 + 1632);
			Function_393(&Local_326 + 1640);
			Function_393(&Local_326 + 2208);
			Function_393(&Local_326 + 1560);
			Function_393(&Local_326 + 1624);
			Function_393(&Local_326 + 1992);
			Function_393(&Local_326 + 2208);
			Function_393(&Local_326 + 1648);
			Function_393(&Local_326 + 2216);
			Function_393(&Local_326 + 2224);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2848)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2848));
			}
			if (!iLocal_1584[6] || Global_99145)
			{
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_296();
			iLocal_1583 = Global_46850[0];
			if (!iLocal_1584[6] || Global_99145)
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3336[33]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 1, 1, true);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_233(&iLocal_1652);
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			iLocal_1910 = 4294967295;
			bLocal_1911 = false;
			Function_453(&Local_326 + 1552);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() || iLocal_1584[6])
			{
				if (Function_361() && Function_358())
				{
					if (Function_292(iLocal_1583) || iLocal_1583 != 4294967295)
					{
						if (Function_452())
						{
							if (Function_388(&iLocal_1674))
							{
								Function_451();
								Function_450();
								Function_293(&bLocal_1736);
								iLocal_1563 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_322(&Local_326 + 1552);
			Function_449();
			Function_206(&iLocal_1927, 0);
			CLOSE_DOOR_FAST(&iLocal_1927);
			Function_206(&iLocal_1929, 0);
			CLOSE_DOOR_FAST(&iLocal_1929);
			Function_206(&iLocal_1931, 0);
			OPEN_DOOR_DIRECTION_FAST(&iLocal_1931, false);
			Function_387();
			Function_386();
			if (IS_OBJECT_VALID(&Local_326 + 4872))
			{
				DESTROY_OBJECT(&Local_326 + 4872);
			}
			TOGGLE_COVER_PROPS(0);
			if (!SQUAD_IS_VALID(&Local_326 + 1552))
			{
				Function_447();
				Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3256[23]), *(&Local_326 + 3256[23] + 12), 5, 2.0f, 1.0f, 0, 0);
				Function_443(&Local_326 + 1552, 0);
			}
			if (Function_379(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1550, bLocal_1562) && !Global_99145)
			{
				Local_1564 = 1000;
				Function_293(&bLocal_1736);
				iLocal_1563 = 3;
			}
			else
			{
				Function_381();
				Function_442();
				Function_354();
				Function_441();
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, 5), 0);
				Function_355(StackVal, StackVal, 516, *(&Local_326 + 3336[03]));
				Function_355(StackVal, StackVal, 522, *(&Local_326 + 3336[13]));
				Function_355(StackVal, StackVal, 521, *(&Local_326 + 3336[43]));
				Function_293(&bLocal_1736);
				iLocal_1563 = 4;
			}
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			break;
		
		case 0x00000003:
			Function_482();
			if (Function_440())
			{
				Function_381();
				Function_442();
				Function_368();
				Function_441();
				Function_293(&bLocal_1736);
				iLocal_1563 = 4;
			}
			break;
		
		case 0x00000004:
			Function_368();
			Function_482();
			Function_449();
			if (Function_481(&Local_326 + 1816[32], &iLocal_1957))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, -100.0f);
				SET_DOOR_LOCK(&iLocal_1931, 0);
				OPEN_DOOR_DIRECTION_FAST(&iLocal_1931, true);
				if (!IS_DOOR_OPENED(&iLocal_1927))
				{
					Function_206(&iLocal_1927, 0);
					OPEN_DOOR_DIRECTION_FAST(&iLocal_1927, false);
				}
				if (!IS_DOOR_OPENED(&iLocal_1929))
				{
					Function_206(&iLocal_1929, 0);
					OPEN_DOOR_DIRECTION_FAST(&iLocal_1929, true);
				}
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, false);
				SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0,1f);
				SQUAD_GOALS_CLEAR(&Local_326 + 1552);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 2, &Local_326 + 2336[4], 3);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 2, &Local_326 + 2336[6], 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 3, &Local_326 + 2888, 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 4, &Local_326 + 2880, 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 5, &Local_326 + 2336[5], 4294967295);
				SQUAD_SET_FACTION(&Local_326 + 1552, 20);
				AI_STOP_IGNORING_ACTORS();
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&Local_326 + 1816[12], 0);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&Local_326 + 1816[22], 0);
				TASK_STAND_STILL(&Local_326 + 1816[12], -1.0f, 0, 0);
				TASK_PRIORITY_SET(&Local_326 + 1816[12], true);
				TASK_STAND_STILL(&Local_326 + 1816[22], -1.0f, 0, 0);
				TASK_PRIORITY_SET(&Local_326 + 1816[22], true);
				SET_ACTOR_ONE_SHOT_DEATH(GET_PLAYER_ACTOR(0), false);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_PLAYER_ACTOR(0), 1.0f);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 1656[02], 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
				if (IS_BLIP_VALID(&uLocal_1965))
				{
					REMOVE_BLIP(&uLocal_1965);
				}
				RESET_REACT_NODE_FOR_ACTOR(&bLocal_1579);
				SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&Local_326 + 1656[02], 392, 0, 2, 0), "MISC_FirstOldFriend");
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&Local_326 + 1656[02]), "MISC_FirstOldFriend");
				SET_BLIP_PRIORITY(GET_BLIP_ON_ACTOR(&Local_326 + 1656[02]), 3);
				Function_436();
				Function_435(&Local_326 + 1776, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1776, 10, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1776, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1776) | 2048);
				Function_429();
				Function_435(&Local_326 + 1896, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1896, false, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_428(&Local_326 + 1896, &Global_54076, 1);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1896, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1896) | 2048);
				OPEN_DOOR_DIRECTION(&iLocal_1931, 1);
				SET_ACTOR_IN_VEHICLE(&Local_326 + 1816[12], &Local_326 + 1816[02], false);
				SET_ACTOR_IN_VEHICLE(&Local_326 + 1816[22], &Local_326 + 1816[02], true);
				SET_ACTOR_IN_VEHICLE(&Local_326 + 1680[02], &Local_326 + 1816[02], 4);
				SET_ACTOR_IN_VEHICLE(&Local_326 + 1656[02], &Local_326 + 1816[02], 2);
				Function_427(&Local_326 + 1656[02], &Global_54076, 1);
				SET_ACTOR_CAN_BE_TARGETED(&Local_326 + 1680[02], false);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 1680[02], 0.0f);
				MEMORY_ALLOW_SHOOTING(&Local_326 + 1680[02], false);
				SET_ACTOR_CAN_BE_TARGETED(&Local_326 + 1656[02], false);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 1656[02], 0.0f);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1579);
				Function_336(7, 1, 1);
				Function_426(80.0f);
				bLocal_1911 = false;
				iLocal_1912 = 0;
				Function_293(&bLocal_1752);
				Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
				Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
				Function_424(&(Local_1810[115]), 2);
				Function_423(&(Local_1810[115]), 3);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				Local_1564 = 1000;
				Function_293(&bLocal_1736);
				iLocal_1563 = 6;
			}
			else
			{
				Function_480(&Local_326 + 1816[32]);
			}
			break;
		
		case 0x00000006:
			Function_368();
			if (!HUD_IS_FADING())
			{
				Function_422();
				Function_421(&Local_326 + 1552, 0);
				if (!IS_ACTOR_RIDING_VEHICLE(&Local_326 + 1816[12]))
				{
					SET_ACTOR_IN_VEHICLE(&Local_326 + 1816[12], &Local_326 + 1816[02], false);
				}
				if (!IS_ACTOR_RIDING_VEHICLE(&Local_326 + 1816[22]))
				{
					SET_ACTOR_IN_VEHICLE(&Local_326 + 1816[22], &Local_326 + 1816[02], false);
				}
				Function_293(&bLocal_1736);
				iLocal_1563 = 7;
			}
			break;
		
		case 0x00000007:
			Function_368();
			if ((Function_263(&bLocal_1736) <= 5,5f || !IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_416())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_obj07_catch", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_416())
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				SQUAD_GOALS_CLEAR(&Local_326 + 1896);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1896, 0, &Local_326 + 2896, 4294967295);
				SQUAD_JOIN(GET_MOUNT(&Local_326 + 1704[32]), &Local_326 + 1808);
				TASK_HORSE_ACTION(GET_MOUNT(&Local_326 + 1704[32]), 0);
				Function_427(&Local_326 + 1704[32], &Global_54076, 1);
				SQUAD_LEAVE(&Local_326 + 1704[32]);
				SQUAD_JOIN(&Local_326 + 1704[32], &Local_326 + 1896);
				Function_415();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_326 + 1704[02], &Local_326 + 4728, 2, 1, 1, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_326 + 1704[02], true);
				TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_326 + 1704[12], &Local_326 + 1816[02], &Local_326 + 4728, 10.0f, 1, -1,2f);
				TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_326 + 1704[22], &Local_326 + 1816[02], &Local_326 + 4728, 14.0f, 1, 1,6f);
				iLocal_1910 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, &Local_326 + 4008, 4.0f, 2, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				SET_ACTOR_INVULNERABILITY(&Local_326 + 1680[02], true);
				SET_ACTOR_INVULNERABILITY(&Local_326 + 1656[02], true);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1808, false, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, iLocal_1910);
				TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
				Local_1564 = 1000;
				Function_293(&bLocal_1736);
				iLocal_1563 = 9;
			}
			break;
		
		case 0x00000009:
			if (!Function_413(1))
			{
				if (Function_410())
				{
					AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(&Local_326 + 1816[32], 41.0f);
					TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_326 + 1704[02], &Local_326 + 1816[02], &Local_326 + 4728, 12.0f, 1, 1,7f);
					TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_326 + 1704[12], &Local_326 + 1816[02], &Local_326 + 4728, 18.0f, 1, -1,5f);
					TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_326 + 1704[22], &Local_326 + 1816[02], &Local_326 + 4728, 24.0f, 1, 1,6f);
					Function_409(&Local_326 + 1704[32], -1.0f);
					Function_408();
					Function_293(&bLocal_1736);
					iLocal_1563 = 10;
				}
			}
			else
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_401();
			if (Function_413(1))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1896) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1776) < 0)
				{
					Function_400(&Local_326 + 1776, 1);
					Function_322(&Local_326 + 1776);
					SQUAD_GOALS_CLEAR(&Local_326 + 1776);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1776, false, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					HUD_CLEAR_OBJECTIVE();
					Function_321("Rebel05_obj10", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				TASK_FOLLOW_OBJECT_ALONG_PATH(&bLocal_1579, &Local_326 + 1816[02], &Local_326 + 4728, 8.0f, 1, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
			if ((Function_413(1) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1896) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1776) >= 0)
			{
				if (Function_323(&Local_326 + 1816[02], &Global_54076, 15.0f))
				{
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_399(&Local_326 + 1896);
					Function_399(&Local_326 + 1776);
					Function_398(StackVal, &bLocal_1579, &Local_326 + 1816[02], Vector(0.0f, 0.0f, 7.0f), 2);
					Function_293(&bLocal_1736);
					iLocal_1563 = 12;
				}
			}
			else
			{
				if (Function_323(&Local_326 + 1816[02], &Global_54076, 30.0f))
				{
					Function_396(&Local_326 + 1776, &Global_54076, 60.0f, 1);
					Function_396(&Local_326 + 1896, &Global_54076, 60.0f, 1);
					if (!Function_413(1))
					{
						if (!DECOR_CHECK_EXIST(&Local_326 + 1816[02], "iHelp"))
						{
							if (Function_263(&bLocal_1736) <= 8.0f)
							{
								DECOR_SET_INT(&Local_326 + 1816[02], "iHelp", true);
								Function_137("rebel05_S4help_1", 6.0f, 1, 0, 2, 1, 0);
							}
						}
						else if (DECOR_GET_INT(&Local_326 + 1816[02], "iHelp") == 1)
						{
							if (Function_263(&bLocal_1736) <= (8.0f + 7.0f))
							{
								DECOR_SET_INT(&Local_326 + 1816[02], "iHelp", 2);
								Function_137("rebel05_S4help_2", 6.0f, 1, 0, 2, 1, 0);
							}
						}
					}
				}
				Function_401();
			}
			break;
		
		case 0x0000000C:
			if (Function_395(&Local_326 + 1816[02], 0) >= 0,7f)
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_479() && Local_1564 <= 1104)
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_239();
			iLocal_1584[7] = 1;
			Function_293(&bLocal_1736);
			bLocal_1562 = 8;
			iLocal_1563 = 0;
			break;
	}
	return;
}

float Function_395(var uParam0, bool bParam1) //Position: 0x13804 / 79876
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_396(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x13825 / 79909
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!Function_397(&uParam1, &uVar1, bParam2))
			{
				SQUAD_LEAVE(&uVar1);
				RELEASE_ACTOR(&uVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_RIDING(&uVar1))
					{
						RELEASE_ACTOR(GET_MOUNT(&uVar1));
					}
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_397(var uParam0, var uParam1, bool bParam2) //Position: 0x138B1 / 80049
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_398(var uParam0, var uParam1, struct<2> Param2, int iParam4) //Position: 0x139C6 / 80326
{
	var uVar0;
	
	GET_OBJECT_RELATIVE_POSITION(&uParam1, Param2, &uVar0);
	TASK_GO_TO_COORD(&uParam0, &uVar0, iParam4);
}

void Function_399(int iParam0) //Position: 0x139E5 / 80357
{
	SQUAD_GOALS_CLEAR(&iParam0);
	Function_322(&iParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 1, 4294967295);
	TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
	return;
}

void Function_400(var uParam0, bool bParam1) //Position: 0x13A0E / 80398
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_PREFER_WALKING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_401() //Position: 0x13A5D / 80477
{
	bool bVar0;
	
	if (Function_263(&bLocal_1752) < 7.0f)
	{
		if (Function_323(&Local_326 + 1816[02], &Global_54076, 55.0f))
		{
			if (Function_323(&Global_54076, &Local_326 + 1816[02], 15.0f))
			{
				if (!DECOR_CHECK_EXIST(&Local_326 + 1656[02], "ibTaunts"))
				{
					DECOR_SET_INT(&Local_326 + 1656[02], "ibTaunts", false);
				}
				else
				{
					bVar0 = DECOR_GET_INT(&Local_326 + 1656[02], "ibTaunts");
					if (!Function_14(bVar0, 1))
					{
						Function_407();
						Function_77(&bVar0, 1);
					}
					else if (!Function_14(bVar0, 2))
					{
						Function_406();
						Function_77(&bVar0, 2);
					}
					else if (!Function_14(bVar0, 4))
					{
						Function_405();
						Function_77(&bVar0, 4);
					}
					else if (!Function_14(bVar0, 8))
					{
						Function_404();
						Function_77(&bVar0, 8);
					}
					else
					{
						Function_403();
					}
					DECOR_SET_INT(&Local_326 + 1656[02], "ibTaunts", bVar0);
					Function_293(&bLocal_1752);
				}
			}
			else if (Function_323(&Local_326 + 1816[02], &bLocal_1579, 25.0f) && (RAND_INT_RANGE(false, 10) % 2) != 0)
			{
				Function_403();
				Function_293(&bLocal_1752);
			}
			else
			{
				Function_402();
				Function_293(&bLocal_1752);
			}
		}
	}
	return;
}

void Function_402() //Position: 0x13BAD / 80813
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_JonShout_chase", "Rebel05_JonShout_chase", true, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403() //Position: 0x13C02 / 80898
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ReyesShout_chase", "Rebel05_ReyesShout_chase", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_404() //Position: 0x13C5B / 80987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v5_AA", "Rebel05_billJonTaunt_v5_AA", 11, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2230", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v5_AB", "Rebel05_billJonTaunt_v5_AB", false, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_405() //Position: 0x13D1D / 81181
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v3_AA", "Rebel05_billJonTaunt_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v3_AB", "Rebel05_billJonTaunt_v3_AB", 11, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406() //Position: 0x13DC0 / 81344
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v2_AA", "Rebel05_billJonTaunt_v2_AA", 11, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v2_AB", "Rebel05_billJonTaunt_v2_AB", false, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_407() //Position: 0x13E63 / 81507
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v1_AA", "Rebel05_billJonTaunt_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3550", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v1_AB", "Rebel05_billJonTaunt_v1_AB", 11, 1, 1, 0, 1);
		Function_310(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x13F25 / 81701
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_getOnHorseJon", "Rebel05_getOnHorseJon", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_409(var uParam0, float fParam1) //Position: 0x13F78 / 81784
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&uParam0, &uVar0, GET_HEADING(&uParam0), &fParam1);
	return;
}

bool Function_410() //Position: 0x13F97 / 81815
{
	AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(&Local_326 + 1816[32], 0.0f);
	switch (Local_1564)
	{
		case 0x000003E8:
			Function_271(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_353(&Local_326, 43.0f, 1, 0.0f, 3.0f, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			Function_351(StackVal, StackVal, StackVal, StackVal, Vector(-4368,805f, 35,308f, 4279,802f), Vector(-0,673f, 0,003f, -0,74f), Vector(-4373,733f, 35,144f, 4278,709f), Vector(-0,434f, 0,097f, -0,896f), 2.0f, 0, 1, 1, 0);
			Function_412(&Global_54076, 1, 1);
			Function_412(&bLocal_1579, 1, 1);
			Function_293(&Local_1564 + 4);
			Local_1564 = 1004;
			break;
		
		case 0x000003EC:
			if (Function_263(&Local_1564 + 4) <= 0,5f)
			{
				Function_411();
				Function_293(&Local_1564 + 4);
				Local_1564 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (Function_263(&Local_1564 + 4) <= 1,5f)
			{
				Function_351(StackVal, StackVal, StackVal, StackVal, Vector(-4381,613f, 35,134f, 4279,549f), Vector(0,506f, 0,015f, -0,862f), Vector(-4392,089f, 35,036f, 4283,441f), Vector(0,882f, 0,044f, -0,469f), 2.0f, 0, 1, 1, 4);
				Function_293(&Local_1564 + 4);
				Local_1564 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (Function_263(&Local_1564 + 4) <= 2.0f)
			{
				Local_1564 = 1104;
			}
			break;
		
		case 0x00000450:
			AI_STOP_IGNORING_ACTORS();
			Function_259(0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_412(&Global_54076, 0, 1);
			Function_412(&bLocal_1579, 0, 1);
			Function_203(1, 1);
			Local_1564 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_411() //Position: 0x14145 / 82245
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Rebel05_ColoOnstagecoach", "Rebel05_ColoOnstagecoach", false, 3, 1, 0, 1);
		Function_310(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1419F / 82335
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
		{
			FIRE_STOP_ON_ACTOR(&bParam0);
		}
		SET_ACTOR_INVULNERABILITY(&bParam0, true);
		CLEAR_ACTOR_MIN_SPEED(&bParam0);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam0);
		RESET_ACTOR_GAITS(&bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&bParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&bParam0);
		SET_ACTOR_INVULNERABILITY(&bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
	}
	return;
}

bool Function_413(bool bParam0) //Position: 0x1424F / 82511
{
	if ((!IS_ACTOR_ALIVE(&Local_326 + 1816[12]) && !IS_ACTOR_ALIVE(&Local_326 + 1816[22])) && (!IS_ACTOR_ALIVE(&Local_326 + 1816[32]) || !&bParam0))
	{
		if (!Function_414(&Local_326 + 1816[02], 1, 1, 4294967295) || Function_395(&Local_326 + 1816[02], 0) >= 0,6f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_414(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x142B5 / 82613
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

void Function_415() //Position: 0x14383 / 82819
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(0, &Local_326 + 3920, 8.0f, 4, 1, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4728, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&Local_326 + 1816[12], bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

bool Function_416() //Position: 0x143C9 / 82889
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_ACTOR_AXIS(&Local_326 + 1816[02], &Var2, 2);
	GET_POSITION(&Local_326 + 1816[02], &Var0);
	VSCALE(&Var2, -8,5f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	Var0.f_4 = (StackVal + 1,5f);
	Function_291(&Local_326 + 4008);
	if ((((((StackVal || Function_420((StackVal || Function_420((((Function_328(&Local_326 + 1816[02], 0x3f800000, 0x42960000, 1, 1, 0) || Function_328(&Local_326 + 1816[12], 0x3f800000, 0x42960000, 1, 1, 0)) || Function_328(&Local_326 + 1816[32], 0x3f800000, 0x42960000, 1, 1, 0)) || Function_328(&Local_326 + 1816[22], 0x3f800000, 0x42960000, 1, 1, 0)), Function_291(&Local_326 + 4008), 0x3f800000, 0x42960000, 1, 1, 0)), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2968) && Function_419())) || Function_323(&Global_54076, &Local_326 + 1816[02], 30.0f)) || Function_417(&Local_326 + 1888, &Global_54076, 0, 1)) || Function_417(&Local_326 + 1776, &Global_54076, 0, 1)) || Function_417(&Local_326 + 1896, &Global_54076, 0, 1))
	{
		return 1;
	}
	return 0;
}

int Function_417(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x14511 / 83217
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		iVar2 = GET_MOUNT(&bVar1);
		if (Function_418(&bVar1, &bParam1, bParam2, &bParam3) || Function_418(&iVar2, &bParam1, bParam2, &bParam3))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_418(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1456E / 83310
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
		{
			if (bParam2)
			{
				if (!IS_ACTOR_ALIVE(&iParam0))
				{
					return 1;
				}
			}
			return 1;
		}
		if (&bParam3)
		{
			if (GET_LASSO_TARGET(&iParam1) == &iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_419() //Position: 0x145BC / 83388
{
	bool bVar0;
	
	bVar0 = GET_WEAPON_IN_HAND(&Global_54076);
	if (UNK_0xDB679ED9(bVar0) == 44)
	{
		if (IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_420(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x145E2 / 83426
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

void Function_421(var uParam0, bool bParam1) //Position: 0x14603 / 83459
{
	bool bVar0;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (bParam1)
		{
			AI_ENABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		}
		else
		{
			AI_DISABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		}
		bVar0++;
	}
	return;
}

void Function_422() //Position: 0x1464E / 83534
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_goAfterBill", "Rebel05_goAfterBill", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_423(struct<57> Param0) //Position: 0x1469D / 83613
{
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object invalid!");
		return 0;
	}
	if (Param0.f_56 != 15 || Param0.f_56 != 8)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object type unsupported!");
		return 0;
	}
	if (bParam1 >= 0)
	{
		DECOR_SET_INT(&Param0, "MFT_LimitHuman", bParam1);
		DECOR_SET_INT(&Param0, "MFT_LimitHorse", bParam1);
	}
	else
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
	}
	return 1;
}

void Function_424(int iParam0, int iParam1) //Position: 0x14801 / 83969
{
	if (iParam1 != 100000000)
	{
		Function_425(&iParam0, iParam1);
	}
	else
	{
		Function_331(&iParam0, 1);
	}
	return;
}

void Function_425(int iParam0, bool bParam1) //Position: 0x14823 / 84003
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

void Function_426(int iParam0) //Position: 0x14850 / 84048
{
	if (Global_15862 < 0,1f)
	{
		return;
	}
	Global_15862 = iParam0;
	return;
}

void Function_427(var uParam0, int iParam1, bool bParam2) //Position: 0x14868 / 84072
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &iParam1);
			Function_219(&iParam1);
			uVar0 = Function_219(&iParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &iParam1, &uVar0);
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

void Function_428(var uParam0, int iParam1, bool bParam2) //Position: 0x14979 / 84345
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_427(&uVar1, &iParam1, &bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_429() //Position: 0x149C5 / 84421
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_326 + 1896) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "backYard"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "backyard_3", 393, Vector(-4356,016f, 34,06945f, 4282,591f), Vector(0.0f, 34,63385f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1896);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	Function_431(&iVar0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "backyard_4", 391, Vector(-4371,266f, 34,65934f, 4267,955f), Vector(0.0f, 217,6483f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1896);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,001f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	Function_431(&iVar0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	return;
}

void Function_430(int iParam0, bool bParam1) //Position: 0x14B33 / 84787
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&iParam0, &(Global_39591[7]));
		AI_PREDICATE_OVERRIDE_CLEAR(&iParam0, &(Global_39591[5]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &(Global_39591[7]), 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &(Global_39591[5]), 0);
	}
	return;
}

void Function_431(int iParam0) //Position: 0x14B82 / 84866
{
	Function_433(&iParam0);
	Function_432(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	return;
}

void Function_432(int iParam0, int iParam1) //Position: 0x14D32 / 85298
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(&iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &iVar0, iParam1);
	}
	return;
}

void Function_433(int iParam0) //Position: 0x14D6B / 85355
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_434(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_434(var uParam0, bool bParam1) //Position: 0x15129 / 86313
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_435(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x1514C / 86348
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_436() //Position: 0x1525C / 86620
{
	*(&Local_326 + 1776) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "Bodyguards"));
	*(&Local_326 + 1704[02]) = Function_438(StackVal, StackVal, &Local_326, "bodyGuard_1", 395, Function_54(), 976, Vector(-4364,571f, 34,23841f, 4272,966f), Vector(0.0f, 96,71631f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1704[02], &Local_326 + 1776);
	SET_ACTOR_FACTION(&Local_326 + 1704[02], 19);
	Function_431(&Local_326 + 1704[02]);
	Function_437(&Local_326 + 1704[02], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1704[02], 1);
	SET_ACTOR_FACTION(&Local_326 + 1704[02], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1704[02], 49, 1,7f);
	MEMORY_PREFER_RIDING(&Local_326 + 1704[02], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 1704[02], 359.0f);
	*(&Local_326 + 1704[12]) = Function_438(StackVal, StackVal, &Local_326, "bodyGuard_2", 393, Function_54(), 977, Vector(-4381,584f, 34,12082f, 4263,613f), Vector(0.0f, 182,732f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1704[12], &Local_326 + 1776);
	SET_ACTOR_FACTION(&Local_326 + 1704[12], 19);
	Function_431(&Local_326 + 1704[12]);
	Function_437(&Local_326 + 1704[12], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1704[12], 1);
	SET_ACTOR_FACTION(&Local_326 + 1704[12], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1704[12], 49, 1,7f);
	MEMORY_PREFER_RIDING(&Local_326 + 1704[12], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 1704[12], 359.0f);
	*(&Local_326 + 1704[22]) = Function_438(StackVal, StackVal, &Local_326, "bodyGuard_3", 391, Function_54(), 980, Vector(-4381,824f, 34,49359f, 4260,104f), Vector(0.0f, 183,8127f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1704[22], &Local_326 + 1776);
	SET_ACTOR_FACTION(&Local_326 + 1704[22], 19);
	Function_431(&Local_326 + 1704[22]);
	Function_437(&Local_326 + 1704[22], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1704[22], 1);
	SET_ACTOR_FACTION(&Local_326 + 1704[22], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1704[22], 49, 1,7f);
	MEMORY_PREFER_RIDING(&Local_326 + 1704[22], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 1704[22], 359.0f);
	*(&Local_326 + 1704[32]) = Function_438(StackVal, StackVal, &Local_326, "bodyGuard_4", 391, Function_54(), 976, Vector(-4359,783f, 34,14393f, 4275,4f), Vector(0.0f, 77,95236f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1704[32], &Local_326 + 1776);
	SET_ACTOR_FACTION(&Local_326 + 1704[32], 19);
	Function_431(&Local_326 + 1704[32]);
	Function_437(&Local_326 + 1704[32], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1704[32], 1);
	SET_ACTOR_FACTION(&Local_326 + 1704[32], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1704[32], 49, 1,7f);
	MEMORY_PREFER_RIDING(&Local_326 + 1704[32], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 1704[32], 359.0f);
	return;
}

void Function_437(var uParam0, bool bParam1) //Position: 0x155CC / 87500
{
	var uVar0;
	
	MEMORY_CONSIDER_AS_ENEMY(&uParam0, &bParam1);
	MEMORY_IDENTIFY(&uParam0, &bParam1);
	GET_POSITION(&bParam1, &uVar0);
	MEMORY_REPORT_POSITION(&uParam0, &bParam1, &uVar0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	return;
}

int Function_438(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x155FE / 87550
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_439(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_439(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_439(bool bParam0) //Position: 0x15736 / 87862
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_440() //Position: 0x1574D / 87885
{
	return Function_340("$/cutscene/REBEL_05/REBEL_05", &Local_1564, &Local_1550, &bLocal_1562, 70253, 69815, 68869, 67181, 67024, 66941, 0, 1, 1, 2, 2, 0, 1);
}

void Function_441() //Position: 0x1579D / 87965
{
	(&Local_326 + 1808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "S4_escape_horses"));
	*(&Local_326 + 1784[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "horse2", 977, Vector(-4353,676f, 34,16353f, 4274,167f), Vector(0.0f, 92,53314f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1784[02], &Local_326 + 1808);
	TASK_PRIORITY_SET(&Local_326 + 1784[02], true);
	Function_431(&Local_326 + 1784[02]);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1784[02], 49, 1.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1784[02], 0);
	Function_430(&Local_326 + 1784[02], 0);
	SET_ACTOR_VISION_MAX_RANGE(&Local_326 + 1784[02], 200.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_326 + 1784[02], 200.0f);
	ACCESSORIZE_HORSE(&Local_326 + 1784[02], 3);
	return;
}

void Function_442() //Position: 0x1588C / 88204
{
	iLocal_1957 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_326, "rearGatlingGun", "$/fragments/p_gen_gatlingGun02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
	ATTACH_OBJECTS(StackVal, StackVal, &iLocal_1957, &Local_326 + 1816[02], Function_54(), Vector(0,014f, 1,056f, 2,401f), Vector(0.0f, 180.0f, 0.0f), 4294967295);
	SET_PROP_AI_OBSTACLE_ENABLED(&iLocal_1957, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&iLocal_1957, &Local_326 + 1816[02], 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_326 + 1816[02], &iLocal_1957, 0);
	return;
}

void Function_443(var uParam0, bool bParam1) //Position: 0x15934 / 88372
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (ACTOR_HAS_WEAPON(&bVar1, 22))
		{
			DELETE_WEAPON_FROM_ACTOR(&bVar1, 22);
		}
		if (((GET_WEAPON_EQUIPPED(&bVar1, 6) != 4294967295 && GET_WEAPON_EQUIPPED(&bVar1, 5) != 4294967295) && GET_WEAPON_EQUIPPED(&bVar1, true) != 4294967295) || !&bParam1)
		{
			Function_356(&bVar1);
		}
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bVar1, 0);
		bVar0++;
	}
	return;
}

void Function_444(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9) //Position: 0x159A6 / 88486
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	bool bVar10;
	bool bVar11;
	var uVar12;
	
	uVar12 = StackVal;
	uVar6 = Vector(0.0f, 1.0f, 0.0f);
	UNK_0x44986367(StackVal, &Param3);
	VCROSS(&uVar6, &Param3, &Var4);
	VSCALE(&Var4, bParam6);
	VSCALE(&Param3, bParam6);
	Var2 = Param1;
	Var2.f_4 = (StackVal + &fParam7);
	bVar0 = false;
	bVar11 = false;
	bVar10 = false;
	while (bVar10 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar10);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if ((bParam8 && !Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0)) || !&bParam8)
			{
				if (!Function_323(&bVar1, &Global_54076, &fParam9))
				{
					if (bVar0 == iParam5)
					{
						bVar0 = false;
						bVar11++;
						Var2 = Param1;
						Var8 = Param3;
						VSCALE(&Var8, TO_FLOAT(bVar11));
						Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var8, Var2, StackVal);
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Hit max cols, starting a new row");
						PRINTNL();
					}
					else
					{
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - current col is ");
						PRINTINT(bVar0);
						PRINTNL();
					}
					Function_446(StackVal, &bVar1, Var2, uVar12, 1, 1, 1);
					PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Teleporting  ");
					PRINTSTRING(GET_ACTOR_NAME(&bVar1));
					PRINTSTRING(" with index ");
					PRINTINT(bVar10);
					PRINTSTRING(" to ");
					PRINTVECTOR(Var2);
					PRINTNL();
					if (&fParam9 < 0.0f)
					{
						PRINTSTRING("He was ");
						PRINTFLOAT(Function_445(&Global_54076, &bVar1));
						PRINTSTRING("m away");
						PRINTNL();
					}
					bVar0++;
					Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var4, Var2, StackVal);
				}
			}
		}
		bVar10++;
	}
}

var Function_445(float fParam0, bool bParam1) //Position: 0x15BB9 / 89017
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_446(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x15CAE / 89262
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_447() //Position: 0x15D7D / 89469
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&Local_326 + 1552) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "s3_mob"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_1", 290, Vector(-4297,315f, 22,02913f, 4415,529f), Vector(0.0f, 76,42529f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_2", 291, Vector(-4302,411f, 22,0731f, 4412,74f), Vector(0.0f, 117,6219f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_3", 293, Vector(-4300,298f, 22,31681f, 4420,627f), Vector(0.0f, 31,2418f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_15", 290, Vector(-4312,72f, 22,00109f, 4426,26f), Vector(0.0f, -25,77731f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "guyWhoBriefsReyes", 285, Vector(-4312,45f, 23,09349f, 4404,362f), Vector(0.0f, -50,45209f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_17", 522, Vector(-4305,994f, 21,91158f, 4421,84f), Vector(0.0f, -11,31277f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_18", 516, Vector(-4302,094f, 22,06717f, 4413,837f), Vector(0.0f, 93,31168f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_19", 521, Vector(-4301,306f, 22,22078f, 4421,615f), Vector(0.0f, 33,44803f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_20", 291, Vector(-4303,523f, 22,38831f, 4423,416f), Vector(0.0f, 11,41082f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	SET_ACTOR_FACTION(&uVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uVar0, 0, 0);
	Function_448(&uVar0);
	Function_430(&uVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	SET_ACTOR_HEALTH(&uVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&uVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	return;
}

void Function_448(var uParam0) //Position: 0x16690 / 91792
{
	Function_433(&uParam0);
	Function_432(&uParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 1, 10.0f);
	return;
}

void Function_449() //Position: 0x167ED / 92141
{
	Function_206(&iLocal_1945, 1);
	OPEN_DOOR_DIRECTION_FAST(&iLocal_1945, true);
	Function_206(&iLocal_1947, 1);
	OPEN_DOOR_DIRECTION_FAST(&iLocal_1947, false);
	return;
}

void Function_450() //Position: 0x16813 / 92179
{
	var uVar0;
	
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(-4362,59f, 39,3f, 4354,898f), 2.0f, "cratebreak02", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar0));
	}
	return;
}

void Function_451() //Position: 0x16852 / 92242
{
	CLOSE_DOOR_FAST(&iLocal_1927);
	Function_232(&iLocal_1927, 1);
	CLOSE_DOOR_FAST(&iLocal_1929);
	Function_232(&iLocal_1929, 1);
	CLOSE_DOOR_FAST(&iLocal_1931);
	Function_232(&iLocal_1931, 1);
	CLOSE_DOOR_FAST(&(iLocal_1933[0]));
	Function_232(&(iLocal_1933[0]), 1);
	CLOSE_DOOR_FAST(&(iLocal_1933[1]));
	Function_232(&(iLocal_1933[1]), 1);
	CLOSE_DOOR_FAST(&(iLocal_1933[2]));
	Function_232(&(iLocal_1933[2]), 1);
	CLOSE_DOOR_FAST(&iLocal_1945);
	Function_232(&iLocal_1945, 1);
	CLOSE_DOOR_FAST(&iLocal_1947);
	Function_232(&iLocal_1947, 1);
	return;
}

bool Function_452() //Position: 0x168E2 / 92386
{
	int iVar0;
	
	iVar0 = &iVar0;
	if (!IS_DOOR_VALID(&iLocal_1927))
	{
		iLocal_1927 = Function_278("escalara", "villa01", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(&iLocal_1929))
	{
		iLocal_1929 = Function_278("escalara", "villa01", 2);
		return 0;
	}
	if (!IS_DOOR_VALID(&iLocal_1931))
	{
		iLocal_1931 = Function_278("escalara", "villa01", 4);
		return 0;
	}
	if (!IS_DOOR_VALID(&(iLocal_1933[0])))
	{
		iLocal_1933[0] = Function_278("escalara", "villaPost01", 4);
		return 0;
	}
	if (!IS_DOOR_VALID(&(iLocal_1933[1])))
	{
		iLocal_1933[1] = Function_278("escalara", "villaPost01", 5);
		return 0;
	}
	if (!IS_DOOR_VALID(&(iLocal_1933[2])))
	{
		iLocal_1933[2] = Function_278("escalara", "villaPost01", 6);
		return 0;
	}
	if (!IS_DOOR_VALID(&iLocal_1949))
	{
		iLocal_1949 = Function_278("escalara", "generalHouse04", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(&uLocal_1951))
	{
		uLocal_1951 = Function_278("escalara", "villaPost01props", 1);
		return 0;
	}
	if (bLocal_1562 < 4)
	{
		if (!IS_DOOR_VALID(&iLocal_1941))
		{
			iLocal_1941 = Function_278("escalara", "villaWall04", 1);
			return 0;
		}
		if (!IS_DOOR_VALID(&iLocal_1943))
		{
			iLocal_1943 = Function_278("escalara", "villaWall04", 2);
			return 0;
		}
	}
	if (!IS_DOOR_VALID(&iLocal_1945))
	{
		iLocal_1945 = Function_278("escalara", "villaWall02", 3);
		return 0;
	}
	if (!IS_DOOR_VALID(&iLocal_1947))
	{
		iLocal_1947 = Function_278("escalara", "villaWall02", 4);
		return 0;
	}
	iVar0 = Function_278("escalara", "villaPost01", 2);
	if (!IS_DOOR_VALID(&iVar0))
	{
		return 0;
	}
	Function_232(&iVar0, 1);
	iVar0 = Function_278("escalara", "villaPost01props", 2);
	if (!IS_DOOR_VALID(&iVar0))
	{
		return 0;
	}
	Function_232(&iVar0, 1);
	iVar0 = Function_278("escalara", "villaPost01props", 3);
	if (!IS_DOOR_VALID(&iVar0))
	{
		return 0;
	}
	Function_232(&iVar0, 1);
	iVar0 = Function_278("escalara", "gunsmith01props", 1);
	if (!IS_DOOR_VALID(&iVar0))
	{
		return 0;
	}
	Function_232(&iVar0, 1);
	iVar0 = Function_278("escalara", "gunsmith01props", 2);
	if (!IS_DOOR_VALID(&iVar0))
	{
		return 0;
	}
	OPEN_DOOR_DIRECTION_FAST(&iVar0, true);
	Function_206(&iVar0, 1);
	return 1;
}

void Function_453(bool bParam0) //Position: 0x16C53 / 93267
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				CLEAR_ACTOR_MIN_SPEED(&uVar1);
				CLEAR_ACTOR_MAX_SPEED(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_454(struct<2> Param0, bool bParam2, int iParam3, float fParam4, bool bParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x16CA6 / 93350
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_397(&Global_54076, &iParam3, bParam2))
	{
		Function_841(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_397(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_460(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_321(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				}
				Function_459(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_458(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_458(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_460(2))
	{
		Function_457(2);
		if (!Function_456())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_455();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_212(&iParam3);
				Function_337(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_458(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_458(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_455() //Position: 0x16E64 / 93796
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_456() //Position: 0x16E92 / 93842
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_457(int iParam0) //Position: 0x16ED9 / 93913
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, iParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_458(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x16F40 / 94016
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && bParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_459(int iParam0) //Position: 0x16FFB / 94203
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, iParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_460(bool bParam0) //Position: 0x17062 / 94306
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_461() //Position: 0x170AC / 94380
{
	if (DECOR_CHECK_EXIST(&Local_326 + 1816[02], "fStartRollTime"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 1816[02], "fStartRollTime")) < 2,5f)
		{
			TASK_STAND_STILL(&Local_326 + 1816[02], -1.0f, 0, 0);
		}
		else
		{
			PRINTSTRING("Waiting ");
			PRINTFLOAT((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 1816[02], "fStartRollTime")));
			PRINTNL();
		}
	}
	if (!IS_ACTOR_ALIVE(&Local_326 + 1816[12]) && !IS_ACTOR_ALIVE(&Local_326 + 1816[22]))
	{
		if (!DECOR_CHECK_EXIST(&Local_326 + 1816[02], "fStartRollTime"))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_326 + 1816[02], &Local_326 + 4728, 2, 0, 0, 1, 1,7f);
			DECOR_SET_FLOAT(&Local_326 + 1816[02], "fStartRollTime", GET_CURRENT_GAME_TIME());
		}
	}
	return;
}

void Function_462(var uParam0, var uParam1, var uParam2) //Position: 0x171C8 / 94664
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam1))
		{
			uParam0 = &uParam1;
			uParam1 = "";
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uParam2, 0, 4, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4728, 2, 1, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&uParam0, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	return;
}

void Function_463() //Position: 0x17222 / 94754
{
	var uVar0;
	var uVar2;
	struct<2> Var3;
	
	if (iLocal_1563 > 9)
	{
		if (!Function_476(&Local_326 + 1896, &Global_54076, 140.0f, 1))
		{
			Function_327(&Local_326 + 1896, 0, 0, 0);
		}
	}
	if (IS_ACTOR_RIDING(&bLocal_1579))
	{
		if (Function_323(&Global_54076, &Local_326 + 1816[02], 60.0f))
		{
			if (!Function_323(&bLocal_1579, &Local_326 + 1816[02], 90.0f))
			{
				Function_474(&Local_326 + 1816[02], &Local_326 + 4728, 80.0f, &Var3, 0);
				if (!WOULD_ACTOR_BE_VISIBLE(976, &Var3, 3212836864))
				{
					Function_473(StackVal, &bLocal_1579, Var3, 1, 1, 1);
					Function_472(&bLocal_1579, &Local_326 + 1816[02]);
					AI_ACTOR_FORCE_SPEED(&bLocal_1579, 3);
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(&bLocal_1579, GET_OBJECT_FROM_ACTOR(&Local_326 + 1816[02]), &Local_326 + 4728, 10.0f, 1, 3.0f);
				}
			}
		}
	}
	switch (bLocal_1911)
	{
		case 0x00000000:
			MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_1579);
			bLocal_1911 = true;
			break;
		
		case 0x00000001:
			if (Function_476(&Local_326 + 1808, &Global_54076, 5.0f, 1) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1896) >= 0)
			{
				if (IS_ACTOR_ALIVE(&Local_326 + 1656[02]) && !Function_413(1))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_321("Rebel05_obj07", 0x40f00000, 1, 2, 0, 0, 0, 0);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(&Local_326 + 1656[02]), 1, 0, 5f);
				}
				SQUAD_COMPUTE_CENTROID(&Local_326 + 1808, &uVar0);
				MEMORY_PREFER_RIDING(&bLocal_1579, true);
				TASK_GO_NEAR_COORD(&bLocal_1579, &uVar0, 5.0f, 4);
				bLocal_1911 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_471(&Local_326 + 1808) <= 2)
			{
				if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_326 + 3960, 3212836864))
				{
					uVar2 = CREATE_ACTOR_IN_LAYOUT(&Local_326, Function_54(), 977, (&Local_326 + 3960), *(&Local_326 + 3960 + 12));
					SQUAD_JOIN(&uVar2, &Local_326 + 1808);
					Function_470(&bLocal_1579, &Local_326 + 1808, 0);
					ACCESSORIZE_HORSE(&uVar2, 3);
				}
				else if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_326 + 3984, 3212836864))
				{
					uVar2 = CREATE_ACTOR_IN_LAYOUT(&Local_326, Function_54(), 977, *(&Local_326 + 3984), *(&Local_326 + 3984 + 12));
					SQUAD_JOIN(&uVar2, &Local_326 + 1808);
					Function_470(&bLocal_1579, &Local_326 + 1808, 0);
					ACCESSORIZE_HORSE(&uVar2, 3);
				}
			}
			if (GET_TASK_STATUS(&bLocal_1579, 61) == 0)
			{
				if (IS_ACTOR_RIDING(&bLocal_1579) || ((!Function_323(&Global_54076, &bLocal_1579, 60.0f) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1896) >= 0) && iLocal_1563 <= 10))
				{
					Function_293(&bLocal_1744);
					bLocal_1911 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING(&bLocal_1579) || ((!Function_323(&Global_54076, &bLocal_1579, 60.0f) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1896) >= 0) && iLocal_1563 <= 10))
			{
				if ((!Function_323(&bLocal_1579, &Global_54076, 30.0f) || Function_413(0)) || IS_ACTOR_RIDING(&Global_54076))
				{
					if (IS_ACTOR_RIDING(&bLocal_1579))
					{
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT(&bLocal_1579), 0.0f);
					}
					bLocal_1911 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_OBJECT_FROM_ACTOR(&Local_326 + 1816[02]), &Local_326 + 4728, 10.0f, 1, 3.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1911);
					TASK_SEQUENCE_RELEASE(bLocal_1911, 1);
					Function_469();
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1579, 10.0f);
					bLocal_1911 = 4;
				}
				else if (!IS_ACTOR_RIDING(&Global_54076))
				{
					if (Function_263(&bLocal_1744) <= 7.0f)
					{
						Function_293(&bLocal_1744);
						Function_468();
						TASK_FACE_ACTOR(&bLocal_1579, &Global_54076, 1, 3212836864);
					}
				}
			}
			break;
		
		case 0x00000004:
			Function_467();
			if (((Function_466(&Local_326 + 1888, &Global_54076, 1, 0, 0) || Function_466(&Local_326 + 1776, &Global_54076, 1, 0, 0)) || Function_464(&Global_54076, &Local_326 + 1888, 1, 0, 0, 3212836864)) || Function_464(&Global_54076, &Local_326 + 1776, 1, 0, 0, 3212836864))
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				bLocal_1911 = 5;
			}
			break;
		
		case 0x00000005:
			Function_467();
			break;
	}
	return;
}

int Function_464(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1765E / 95838
{
	bool bVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_465(&iParam0, &iVar1, bParam2, &bParam3, &bParam4, &bParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_465(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x176C9 / 95945
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_466(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x177CF / 96207
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_465(&iVar1, &iParam1, bParam2, &bParam3, &bParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_467() //Position: 0x1783C / 96316
{
	var uVar0;
	struct<2> Var1;
	bool bVar3;
	
	if (!IS_ACTOR_RIDING(&bLocal_1579))
	{
		if (!Function_328(&bLocal_1579, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			GET_POSITION(&bLocal_1579, &Var1);
			bVar3 = GET_OBJECT_HEADING(&bLocal_1579);
			Var1 = (Var1 + 1,5f);
			if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&bLocal_1579)))
			{
				uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_326, Function_54(), 977, Var1, Vector(0.0f, bVar3, 0.0f));
			}
			else
			{
				uVar0 = GET_MOST_RECENT_MOUNT(&bLocal_1579);
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Var1, bVar3, 1, 1, true);
			}
			ACCESSORIZE_HORSE(&uVar0, 3);
			ACTOR_MOUNT_ACTOR(&bLocal_1579, &uVar0);
		}
	}
	return;
}

void Function_468() //Position: 0x178D7 / 96471
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_goAfterBill_no", "Rebel05_goAfterBill_no", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469() //Position: 0x1792C / 96556
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_JonMountsHorse1", "Rebel05_JonMountsHorse1", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470(bool bParam0, var uParam1, bool bParam2) //Position: 0x17983 / 96643
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&bParam0, &uVar1);
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&bParam0, &uVar1, true);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_471(int iParam0) //Position: 0x179E3 / 96739
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_472(bool bParam0, bool bParam1) //Position: 0x17A39 / 96825
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&bParam1), &Var0);
	Function_374(StackVal, &bParam0, Var0);
	return;
}

void Function_473(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x17A55 / 96853
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &uParam4, &bParam5);
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR(&uVar0, &uParam1, &bParam3, &uParam4, &bParam5);
			}
			else
			{
				TELEPORT_ACTOR(&uParam0, &uParam1, &bParam3, &uParam4, &bParam5);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

int Function_474(var uParam0, var uParam1, float fParam2, var uParam3, int iParam4) //Position: 0x17AF7 / 97015
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = &iParam4;
	while (bVar0 < (GET_NUM_PATH_POINTS(&uParam1) - 1))
	{
		GET_PATH_POINT(&uParam1, bVar0, &Var3);
		GET_POSITION(&uParam0, &Var5);
		bVar2 = VDIST(Var3, Var5);
		if (bVar0 == 0)
		{
			if (bVar2 > fParam2)
			{
				PRINTSTRING("Our first point is too close, return 0");
				PRINTNL();
				return 0;
			}
		}
		if (bVar2 > fParam2)
		{
			if (bVar0 == 0)
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = (bVar0 - 1);
				GET_PATH_POINT(&uParam1, (bVar0 - 1), &Var7);
				Function_475(StackVal, StackVal, Var3, Var7, (fParam2 - bVar2));
				uParam3 = Function_475(StackVal, StackVal, Var3, Var7, (fParam2 - bVar2));
				PRINTSTRING("npoint is ");
				return iVar1;
			}
		}
		bVar0++;
	}
	return iVar1;
}

struct<8> Function_475(struct<2> Param0, struct<2> Param2, bool bParam4) //Position: 0x17BD0 / 97232
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, bParam4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	return StackVal, Var0;
}

bool Function_476(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17C00 / 97280
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&bParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				if (ACTORS_IN_RANGE(&iVar1, &bParam1, bParam2))
				{
					if (!Function_477(&iVar1, 1) || bParam3)
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

bool Function_477(int iParam0, int iParam1) //Position: 0x17CA5 / 97445
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

void Function_478() //Position: 0x17CF7 / 97527
{
	var uVar0;
	var uVar2;
	float fVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(&Local_326 + 1816[32]))
	{
		bVar5 = GET_LAST_ATTACK_TARGET(&Local_326 + 1816[32]);
		if (IS_ACTOR_VALID(&bVar5))
		{
			Function_274(&bVar5);
			Function_274(&Local_326 + 1816[32]);
			uVar0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Local_326 + 1816[32]), Function_274(&bVar5), StackVal);
			VNORMALIZE(&uVar0);
			GET_ACTOR_AXIS(&Local_326 + 1816[32], &uVar2, 0);
			fVar4 = VDOT(&uVar2, &uVar0);
			if (fVar4 >= 0.0f)
			{
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(&Local_326 + 1816[32], 20.0f);
			}
			else
			{
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES(&Local_326 + 1816[32], 41.0f);
			}
		}
	}
	return;
}

int Function_479() //Position: 0x17D8A / 97674
{
	var uVar0;
	var uVar2;
	bool bVar4;
	bool bVar5;
	
	switch (Local_1564)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			}
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_LEADER_05_CS03/REBEL_LEADER_05_CS03"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/REBEL_LEADER_05_CS03/REBEL_LEADER_05_CS03", 0, 2, 2, 1, 2);
				Local_1564 = 1004;
			}
			else
			{
				LOG_ERROR("cutscene DOES NOT exist, going to CID_SKIPPED");
				Local_1564 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				LOG_ERROR("cutfile failed to load, going to CID_SKIPPED");
				Local_1564 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1564 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					bVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_439(bVar5))
					{
						if (bVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (bVar5 == GET_ACTOR_ENUM(&bLocal_1579))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1579);
						}
						if (IS_ACTOR_VALID(&Local_326 + 1680[02]))
						{
							if (bVar5 == GET_ACTOR_ENUM(&Local_326 + 1680[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Local_326 + 1680[02]);
							}
						}
						if (IS_ACTOR_VALID(&Local_326 + 1656[02]))
						{
							if (bVar5 == GET_ACTOR_ENUM(&Local_326 + 1656[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Local_326 + 1656[02]);
							}
						}
						PRINTSTRING("Cutscene found ");
						PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4));
						PRINTSTRING(" with enum ");
						PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar5));
						PRINTNL();
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1564 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1564 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_480(int iParam0) //Position: 0x18000 / 98304
{
	var uVar0;
	
	uVar0 = FIND_OBJECT_IN_OBJECT(&iLocal_1957, "shootbabyshoot");
	if (IS_OBJECT_VALID(&uVar0))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(&iParam0, &Local_326 + 1816[02], 0);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&Local_326 + 1816[02], &iParam0, 0);
		GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&uVar0), "GatlingShoot", 0);
		GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&uVar0), "Left", 0);
		GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&uVar0), "Right", 0);
		SNAP_ACTOR_TO_GRINGO(&iParam0, &uVar0, "GatlingShoot", true, 0, 0);
		TASK_USE_TURRET(&iParam0, &iLocal_1957, -1f);
		TASK_PRIORITY_SET(&iParam0, true);
		SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
		AI_SET_WEAPON_MAX_RANGE(&iParam0, 90.0f);
		SET_MOVER_FROZEN(&iParam0, true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1,1f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 15, true);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 20.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 5.0f);
		Function_427(&iParam0, &Global_54076, 1);
	}
	else
	{
		LOG_ERROR("CAN'T FIND GUN GRINGO!");
	}
	return;
}

bool Function_481(int iParam0, int iParam1) //Position: 0x1813A / 98618
{
	var uVar0;
	
	uVar0 = FIND_OBJECT_IN_OBJECT(&iParam1, "shootbabyshoot");
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uVar0)))
	{
	}
	else if (GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&uVar0), "GatlingShoot")) == &iParam0)
	{
		return 1;
	}
	return 0;
}

void Function_482() //Position: 0x1818E / 98702
{
	if (!IS_DOOR_VALID(&iLocal_1927))
	{
		iLocal_1927 = Function_278("escalara", "villa01", 1);
	}
	if (!IS_DOOR_VALID(&iLocal_1929))
	{
		iLocal_1929 = Function_278("escalara", "villa01", 2);
	}
	if (bLocal_1562 < 4)
	{
		if (!IS_DOOR_VALID(&iLocal_1941))
		{
			iLocal_1941 = Function_278("escalara", "villaWall04", 1);
		}
		if (!IS_DOOR_VALID(&iLocal_1943))
		{
			iLocal_1943 = Function_278("escalara", "villaWall04", 2);
		}
	}
	if (!IS_DOOR_VALID(&iLocal_1945))
	{
		iLocal_1945 = Function_278("escalara", "villaWall02", 3);
	}
	if (!IS_DOOR_VALID(&iLocal_1947))
	{
		iLocal_1947 = Function_278("escalara", "villaWall02", 4);
	}
	return;
}

void Function_483() //Position: 0x1829B / 98971
{
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		Function_454(&bLocal_1748, 60.0f, 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
		if (iLocal_1563 <= 13)
		{
			if (!Function_323(&bLocal_1579, &Global_54076, 60.0f))
			{
				Function_336(7, 1, 1);
			}
			else
			{
				Function_336(7, 0, 1);
			}
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
		{
			if (Function_481(&Global_54076, &Local_326 + 4864))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 4864));
			}
		}
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4272), "UseCase1"))) || !IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4280), "UseCase2"))))
		{
			if ((GET_CURRENT_GAME_TIME() - fLocal_1923) < 5.0f)
			{
				Function_531(1);
				fLocal_1923 = GET_CURRENT_GAME_TIME();
			}
		}
		Function_529();
		Function_523(&Local_326 + 1552, 6, &Local_326 + 3776, 0);
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			iLocal_1924 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			bLocal_1910 = false;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			Function_300(&Local_326 + 1480, 1);
			if (SQUAD_IS_VALID(&Local_326 + 1632))
			{
				Function_280(&Local_326 + 1632);
			}
			if (SQUAD_IS_VALID(&Local_326 + 2208))
			{
				Function_280(&Local_326 + 2208);
			}
			if (SQUAD_IS_VALID(&Local_326 + 1648))
			{
				Function_280(&Local_326 + 1648);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1584[5] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_1924 = 0;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_296();
				iLocal_1583 = Function_294(StackVal, *(&Local_326 + 3256[13]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3256[13]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3256[03]), 1, 1, true);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			Function_453(&Local_326 + 1552);
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_522()) && Function_358()) && (Function_292(iLocal_1583) || iLocal_1583 != 4294967295))
			{
				if (Function_452())
				{
					if (Function_388(&iLocal_1652))
					{
						Function_451();
						Function_450();
						Function_293(&bLocal_1736);
						iLocal_1563 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, false);
			TOGGLE_COVER_PROPS(0);
			if (IS_OBJECT_VALID(&Local_326 + 4872))
			{
				DESTROY_OBJECT(&Local_326 + 4872);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!SQUAD_IS_VALID(&Local_326 + 1552))
			{
				Function_447();
				Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3256[23]), *(&Local_326 + 3256[23] + 12), 5, 2.0f, 1.0f, 0, 0);
				Function_443(&Local_326 + 1552, 0);
				Function_521(&Local_326 + 1552, 6);
			}
			else
			{
				SQUAD_GOALS_CLEAR(&Local_326 + 1552);
			}
			Function_520(&Local_326 + 1552, 2.0f);
			Function_517(1);
			Function_336(7, 0, 1);
			Function_516();
			Function_515();
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2216, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2216) | 2048);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2224, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2224) | 2048);
			Function_514(&Local_326 + 2216);
			Function_514(&Local_326 + 2224);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			Function_513(&Local_326 + 1552, &Local_326 + 2216, 0);
			Function_513(&Local_326 + 1552, &Local_326 + 2224, 0);
			Function_514(&Local_326 + 1552);
			Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
			Function_512(&(Local_1810[115]));
			Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_424(&(Local_1810[115]), 42);
			Function_511(&Local_326 + 1552, 6, 0x40a00000);
			Function_293(&bLocal_1736);
			iLocal_1563 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				Function_513(&Local_326 + 1552, &Local_326 + 2216, 0);
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_obj06", 5,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_263(&bLocal_1736) <= 6.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_help_DefGatling", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(&Local_326 + 4864, 335, 0f, 2, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_1924 = 1;
			Function_512(&(Local_1810[115]));
			Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_424(&(Local_1810[115]), 42);
			Function_423(&(Local_1810[115]), 3);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_428(&Local_326 + 2216, &Global_54076, 1);
			Function_428(&Local_326 + 2224, &Global_54076, 1);
			Function_322(&Local_326 + 2216);
			Function_322(&Local_326 + 2224);
			iLocal_1918 = 0;
			Function_293(&bLocal_1752);
			Function_293(&bLocal_1736);
			iLocal_1563 = 9;
			break;
		
		case 0x00000009:
			Function_502();
			if (Function_263(&bLocal_1752) <= 8.0f)
			{
				if (!Function_501() || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2216) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2224)) >= 2)
				{
					Function_500(&Local_326 + 2216);
					Function_517(0);
					Function_499(&Local_326 + 2216, 15, 0);
					Function_498(&Local_326 + 2216, 10, 1.0f);
					Function_498(&Local_326 + 2216, 11, 1.0f);
					Function_498(&Local_326 + 2216, 8, 0,5f);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 0, &Local_326 + 2824, 4294967295);
					Function_496(&Local_326 + 2224, 3);
					Function_494();
					Function_293(&bLocal_1736);
					iLocal_1563 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_481(&Global_54076, &Local_326 + 4864))
			{
				Function_492(&Local_326 + 2216, &Local_326 + 1552, 2);
				Function_492(&Local_326 + 2224, &Local_326 + 1552, 2);
			}
			else
			{
				Function_492(&Local_326 + 2216, &Local_326 + 1552, 4);
				Function_492(&Local_326 + 2224, &Local_326 + 1552, 4);
			}
			if (!SQUAD_GOAL_IS_VALID(&uLocal_2057))
			{
				if (!Function_481(&Global_54076, &Local_326 + 4864))
				{
					uLocal_2057 = SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
					TASK_USE_TURRET(0, &Local_326 + 4864, -1f);
				}
			}
			else if (Function_481(&Global_54076, &Local_326 + 4864))
			{
				SQUAD_GOAL_REMOVE(&Local_326 + 1552, &uLocal_2057);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2224) >= 4 || Function_491(&Local_326 + 2224, &bLocal_1579, 25.0f, 0) < 3)
			{
				Function_496(&Local_326 + 2216, 3);
				SQUADS_MERGE(&Local_326 + 2216, &Local_326 + 2224);
				DESTROY_OBJECT(&Local_326 + 2216);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2224, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2224) | 2048);
				Function_494();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				if (SQUAD_GOAL_IS_VALID(&uLocal_2057))
				{
					SQUAD_GOAL_REMOVE(&Local_326 + 1552, &uLocal_2057);
				}
				Function_492(&Local_326 + 2224, &Local_326 + 1552, 4);
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2224) < 3)
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Local_1564 = 1000;
				Function_293(&bLocal_1736);
				iLocal_1563 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_490();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2224) >= 2 && Function_489(&Local_326 + 2224, &Local_326 + 2400, 1) >= 0)
			{
				Function_487(&Local_326 + 2224);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 4864));
				}
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 7, true);
				TASK_HIDE_AT_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4632), -1.0f, 6f, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_490();
			if (Function_263(&bLocal_1736) <= 1,5f)
			{
				if (Function_323(&bLocal_1579, &Global_54076, 20.0f))
				{
					Function_486();
				}
				else
				{
					AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
				}
				Function_293(&bLocal_1736);
				iLocal_1563 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_490();
			Function_396(&Local_326 + 2224, &Global_54076, 50.0f, 0);
			Function_485(&Local_326 + 2224, 0, 0);
			if (Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_meet_at_door", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_336(7, 1, 1);
				SQUAD_GOALS_CLEAR(&Local_326 + 1552);
				Function_443(&Local_326 + 1552, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4312), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4320), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, true, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4328), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, true, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4336), "UseCase1", 4294967295, 2);
				Function_293(&bLocal_1736);
				iLocal_1563 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_490();
			Function_396(&Local_326 + 2224, &Global_54076, 30.0f, 0);
			if ((Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 4.0f) && Function_323(&bLocal_1579, &Global_54076, 7.0f)) && !Function_476(&Local_326 + 2224, &bLocal_1579, 20.0f, 1))
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_490())
			{
				Function_242();
				Local_1564 = 1000;
				iLocal_1584[6] = 1;
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
				Function_293(&bLocal_1736);
				bLocal_1562 = 7;
				iLocal_1563 = 0;
			}
			break;
	}
	return;
}

bool Function_484(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x18E33 / 101939
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_219(&bParam0);
		if (VDIST(Function_219(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

var Function_485(var uParam0, bool bParam1, float fParam2) //Position: 0x18EBF / 102079
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 4294967295;
	}
	bVar0 = false;
	fVar2 = 0;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (!Function_323(&Global_54076, &bVar1, &fParam2))
			{
				if (!Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					SQUAD_LEAVE(&bVar1);
					DESTROY_ACTOR(&bVar1);
					if (&bParam1)
					{
						if (IS_ACTOR_RIDING(&bVar1))
						{
							DESTROY_ACTOR(GET_MOUNT(&bVar1));
						}
					}
					fVar2++;
				}
				else
				{
					bVar0++;
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
	return fVar2;
}

void Function_486() //Position: 0x18F68 / 102248
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_GateGreatDefend", "Rebel05_GateGreatDefend", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487(int iParam0) //Position: 0x18FBF / 102335
{
	int iVar0;
	var uVar1;
	
	GET_VOLUME_CENTER(&Local_326 + 2856, &uVar1);
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &uVar1, 10.0f, 4);
	TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 1, 0, 0);
	TASK_SEQUENCE_CLOSE();
	Function_488(&iParam0, iVar0, 1, 1);
	return;
}

void Function_488(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18FFC / 102396
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_SEQUENCE_PERFORM(&uVar1, bParam1);
			TASK_PRIORITY_SET(&uVar1, bParam2);
		}
		bVar0++;
	}
	if (&bParam3)
	{
		TASK_SEQUENCE_RELEASE(bParam1, 1);
	}
}

int Function_489(var uParam0, var uParam1, bool bParam2) //Position: 0x1905A / 102490
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(&uVar2, &uParam1))
		{
			if (&bParam2)
			{
				if (!IS_ACTOR_HOGTIED(&uVar2))
				{
					bVar1++;
				}
			}
			else
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

bool Function_490() //Position: 0x190C6 / 102598
{
	var uVar0;
	var uVar2;
	bool bVar4;
	bool bVar5;
	
	switch (Local_1564)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			}
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_05/REBEL_05"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/REBEL_05/REBEL_05", 0, 2, 2, 2, 2);
				Function_291(&Local_326 + 4224);
				uLocal_1980 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_326, Function_54(), 521, Function_291(&Local_326 + 4224), Vector(0.0f, 0.0f, 0.0f));
				TASK_STAND_STILL(&uLocal_1980, -1.0f, 0, 0);
				SET_ACTOR_INVULNERABILITY(&uLocal_1980, true);
				Local_1564 = 1004;
			}
			else
			{
				LOG_ERROR("cutscene DOES NOT exist, going to CID_SKIPPED");
				Local_1564 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				LOG_ERROR("cutfile failed to load, going to CID_SKIPPED");
				Local_1564 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1564 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					bVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_439(bVar5))
					{
						PRINTSTRING("Cutscene got a guy named ");
						PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4));
						PRINTSTRING(" with enum ");
						PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4)));
						PRINTNL();
						if (bVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (bVar5 == GET_ACTOR_ENUM(&bLocal_1579))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1579);
						}
						if (IS_ACTOR_VALID(&Local_326 + 1680[02]))
						{
							if (bVar5 == GET_ACTOR_ENUM(&Local_326 + 1680[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Local_326 + 1680[02]);
							}
						}
						if (IS_ACTOR_VALID(&Local_326 + 1656[02]))
						{
							if (bVar5 == GET_ACTOR_ENUM(&Local_326 + 1656[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Local_326 + 1680[02]);
							}
						}
						if (IS_ACTOR_VALID(&uLocal_1980))
						{
							if (bVar5 == GET_ACTOR_ENUM(&uLocal_1980))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &uLocal_1980);
							}
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1564 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1564 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

int Function_491(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x1936C / 103276
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2) && IS_ACTOR_ALIVE(&uVar2))
		{
			if (Function_397(&uVar2, &uParam1, bParam2))
			{
				iVar1++;
				if (&bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_492(var uParam0, var uParam1, int iParam2) //Position: 0x193E5 / 103397
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_493(&uVar1, &uParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_493(var uParam0, var uParam1, bool bParam2) //Position: 0x1943C / 103484
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_494() //Position: 0x1948E / 103566
{
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2224, false, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4592), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2224, false, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4584), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2224, false, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4576), -1.0f, 1086324736);
	Function_495(&Local_326 + 2224, &Local_326 + 2336[0], 1, 2);
	Function_495(&Local_326 + 2224, &Local_326 + 2336[5], 2, 1);
	Function_495(&Local_326 + 2224, &Local_326 + 2336[1], 3, 3);
	Function_495(&Local_326 + 2224, &Local_326 + 2336[4], 4, 4294967295);
	return;
}

var Function_495(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x19556 / 103766
{
	var uVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return &uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iParam0, iParam2, &uParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iParam0, 0, &uParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(&iParam0, &iVar1, &uVar0);
	return &uVar0;
}

void Function_496(var uParam0, int iParam1) //Position: 0x1959D / 103837
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		Function_497(&uVar1, (bVar0 % 3), &iParam1);
		bVar0++;
	}
	return;
}

void Function_497(var uParam0, int iParam1, int iParam2) //Position: 0x195D7 / 103895
{
	bool bVar0;
	var uVar1;
	int iVar3;
	
	switch (iParam1)
	{
		case 0x00000000:
			iVar3 = &Local_326 + 4792;
			break;
		
		case 0x00000001:
			iVar3 = &Local_326 + 4800;
			break;
		
		case 0x00000002:
			iVar3 = &Local_326 + 4808;
			break;
	}
	GET_PATH_POINT(&iVar3, false, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(0, &uVar1, &iParam2, 3212836864);
	TASK_FOLLOW_PATH(0, &iVar3, 4, 0, 1, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_498(var uParam0, int iParam1, bool bParam2) //Position: 0x19656 / 104022
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_499(var uParam0, int iParam1, bool bParam2) //Position: 0x196A7 / 104103
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_500(bool bParam0) //Position: 0x196F8 / 104184
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			AI_SHOOT_TARGET_CLEAR_OFFSET(&uVar1);
			bVar0++;
		}
	}
	return;
}

bool Function_501() //Position: 0x19734 / 104244
{
	if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2952) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2960)) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2840)) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2832)) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2824)) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2856))
	{
		return 1;
	}
	return 0;
}

void Function_502() //Position: 0x19799 / 104345
{
	if (Function_481(&Global_54076, &Local_326 + 4864))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0,75f);
		if (!DECOR_CHECK_EXIST(&Local_326 + 2216, "bReinforced"))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2216) < 4)
			{
				Function_509(StackVal, &Local_326 + 2216, Vector(-4384,464f, 34,256f, 4413,018f), 1);
				Function_509(StackVal, &Local_326 + 2216, Vector(-4385,336f, 34,256f, 4414,941f), 1);
				Function_509(StackVal, &Local_326 + 2216, Vector(-4385,866f, 34,256f, 4411,514f), 1);
				Function_509(StackVal, &Local_326 + 2216, Vector(-4388,193f, 34,256f, 4414,616f), 1);
				Function_509(StackVal, &Local_326 + 2216, Vector(-4389,184f, 34,256f, 4416,602f), 1);
				DECOR_SET_BOOL(&Local_326 + 2216, "bReinforced", true);
				Function_499(&Local_326 + 2216, 15, 1);
				Function_498(&Local_326 + 2216, 10, 1,8f);
				Function_498(&Local_326 + 2216, 11, 1,5f);
				Function_498(&Local_326 + 2216, 53, 20.0f);
			}
		}
	}
	else
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	switch (iLocal_1918)
	{
		case 0x00000000:
			if (SQUAD_IS_VALID(&iLocal_1972))
			{
				SQUADS_MERGE(&iLocal_1972, &Local_326 + 1552);
				DESTROY_OBJECT(&iLocal_1972);
			}
			iLocal_1972 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "braveMen"));
			Function_506(&Local_326 + 2216, 0, 1);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 12, &Local_326 + 2856, 4294967295);
			SQUADS_MERGE(&Local_326 + 2224, &Local_326 + 2216);
			Function_499(&Local_326 + 2216, 15, 1);
			Function_498(&Local_326 + 2216, 8, 1.0f);
			Function_498(&Local_326 + 2216, 10, 1,8f);
			Function_498(&Local_326 + 2216, 11, 1,5f);
			Function_498(&Local_326 + 2216, 53, 20.0f);
			Function_505(&Local_326 + 2216, 20.0f);
			Function_504(&Local_326 + 2216, &Global_54076, "head");
			iLocal_1918 = 1;
			break;
		
		case 0x00000001:
			if (Function_503(&Local_326 + 2216, &Local_326 + 2408[0]) >= 0)
			{
				Function_293(&bLocal_1736);
				iLocal_1918 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_263(&bLocal_1736) <= 8.0f || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2216) >= 5 && DECOR_CHECK_EXIST(&Local_326 + 2216, "bReinforced")))
			{
				Function_506(&Local_326 + 2216, 1, 1);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 11, &Local_326 + 2408[0], 3);
				iLocal_1918 = 3;
			}
			break;
		
		case 0x00000003:
			Function_293(&bLocal_1736);
			iLocal_1918 = 4;
			break;
		
		case 0x00000004:
			if (Function_263(&bLocal_1736) <= 7.0f || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2216) >= 5 && DECOR_CHECK_EXIST(&Local_326 + 2216, "bReinforced")))
			{
				SQUAD_GOALS_CLEAR(&Local_326 + 2216);
				Function_506(&Local_326 + 2216, 2, 1);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 10, &Local_326 + 2408[1], 3);
				iLocal_1918 = 5;
			}
			break;
		
		case 0x00000005:
			Function_293(&bLocal_1736);
			iLocal_1918 = 6;
			break;
		
		case 0x00000006:
			if (Function_263(&bLocal_1736) <= 6.0f || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2216) >= 4 && DECOR_CHECK_EXIST(&Local_326 + 2216, "bReinforced")))
			{
				SQUAD_GOALS_CLEAR(&Local_326 + 2216);
				Function_506(&Local_326 + 2216, 3, 1);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 9, &Local_326 + 2408[1], 3);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 10, &Local_326 + 2408[2], 3);
				iLocal_1918 = 7;
			}
			break;
		
		case 0x00000007:
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 2216, 0, &Local_326 + 2408[3], 4294967295);
			Function_293(&bLocal_1736);
			iLocal_1918 = 8;
			break;
		
		case 0x00000008:
			if (Function_263(&bLocal_1736) <= 15.0f)
			{
				iLocal_1918 = 99;
			}
			break;
	}
	return;
}

int Function_503(var uParam0, int iParam1) //Position: 0x19BB2 / 105394
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(&iVar2, &iParam1))
		{
			if (!Function_477(&iVar2, 1))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_504(var uParam0, var uParam1, int iParam2) //Position: 0x19C0D / 105485
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			AI_SHOOT_TARGET_SET_BONE(&uVar1, &uParam1, &iParam2);
			bVar0++;
		}
	}
	return;
}

void Function_505(var uParam0, bool bParam1) //Position: 0x19C4F / 105551
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_506(var uParam0, int iParam1, bool bParam2) //Position: 0x19C9E / 105630
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	var uVar9;
	var uVar11;
	var uVar13;
	
	iVar0 = 0;
	if (!&bParam2)
	{
		uVar13 = &iLocal_1972;
	}
	else
	{
		uVar13 = &uParam0;
	}
	uVar2 = &Local_326 + 2408[iParam1];
	if (!&bParam2)
	{
		SQUADS_MERGE(&iLocal_1972, &uParam0);
		SQUAD_GOALS_CLEAR(&iLocal_1972);
		Function_322(&iLocal_1972);
	}
	iVar1 = 6;
	if (iVar1 >= SQUAD_GET_SIZE(&uParam0))
	{
		iVar1 = SQUAD_GET_SIZE(&uParam0);
	}
	if (!&bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Function_507(Function_508(&uParam0, &Global_54076, 1, 0), &iLocal_1972);
			iVar0++;
		}
	}
	GET_OBJECT_AXIS(&Global_54076, &uVar9, 1);
	GET_VOLUME_CENTER(&uVar2, &Var7);
	Function_291(&Local_326 + 4864);
	uVar5 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Function_291(&Local_326 + 4864), StackVal);
	VNORMALIZE(&uVar5);
	VNORMALIZE(&uVar9);
	VCROSS(&uVar5, &uVar9, &Var3);
	VSCALE(&Var3, 6.0f);
	Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
	FIND_GROUND_INTERSECTION(&Var3, 5.0f, &Var3, &uVar11);
	SQUAD_GOAL_ADD_GENERAL_TASK(&uVar13, false, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&Var3, 4.0f, 361.0f, 30.0f, 7), -1.0f, 1.0f);
	VCROSS(&uVar5, &uVar9, &Var3);
	VSCALE(&Var3, -6.0f);
	Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
	FIND_GROUND_INTERSECTION(&Var3, 5.0f, &Var3, &uVar11);
	SQUAD_GOAL_ADD_GENERAL_TASK(&uVar13, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&Var3, 4.0f, 361.0f, 30.0f, 7), -1.0f, 1.0f);
	FIND_GROUND_INTERSECTION(&Var7, 5.0f, &Var7, &uVar11);
	SQUAD_GOAL_ADD_GENERAL_TASK(&uVar13, 2, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&Var7, 4.0f, 361.0f, 30.0f, 7), -1.0f, 1.0f);
	if (iParam1 >= 0)
	{
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&uParam0, (10 - iParam1), &Local_326 + 2408[(iParam1 - 1)], 3);
		PRINTSTRING("Added battle vol: ");
		PRINTSTRING(GET_OBJECT_NAME(&Local_326 + 2408[(iParam1 - 1)]));
		PRINTNL();
	}
	return;
}

void Function_507(bool bParam0, int iParam1) //Position: 0x19E6E / 106094
{
	struct<2> Var0;
	
	Function_274(&Global_54076);
	Function_291(&Local_326 + 4864);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_291(&Local_326 + 4864), Function_274(&Global_54076), StackVal);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, 2.0f);
	Function_274(&Global_54076);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Function_274(&Global_54076), Var0, StackVal);
	GET_COVER_LOCATION_BASE_POSITION(FIND_NEAREST_COVER_LOCATION(&Var0, 2.0f, 1,486f, 80.0f, 7), &Var0);
	SQUAD_LEAVE(&bParam0);
	TASK_CLEAR(&bParam0);
	SQUAD_JOIN(&bParam0, &iParam1);
	MEMORY_ALLOW_SHOOTING(&bParam0, false);
	if (!Function_323(&bParam0, &Global_54076, 6.0f))
	{
		if (!WOULD_ACTOR_BE_VISIBLE(516, &Var0, 3212836864))
		{
			TELEPORT_ACTOR(&bParam0, &Var0, 1, 1, 1);
		}
	}
	return;
}

bool Function_508(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x19F00 / 106240
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_445(&uVar4, &bParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

var Function_509(float fParam0, struct<2> Param1, bool bParam3) //Position: 0x19FCB / 106443
{
	bool bVar0;
	
	Function_76();
	bVar0 = CREATE_ACTOR_IN_LAYOUT(&Local_326, Function_54(), Function_510(), Param1, Function_76());
	DELETE_ALL_WEAPONS_FROM_ACTOR(&bVar0);
	Function_356(&bVar0);
	SET_ACTOR_FACTION(&bVar0, 19);
	SQUAD_JOIN(&bVar0, &fParam0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bVar0, true);
	SET_ACTOR_FROZEN_AFTER_CORPSIFY(&bVar0, 1);
	if (bParam3)
	{
		ADD_BLIP_FOR_ACTOR(&bVar0, 322, 0, 2, 0);
	}
	return &bVar0;
}

var Function_510() //Position: 0x1A02A / 106538
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(false, 2);
	PRINTSTRING("making a new fighter! this guy's actor index is ");
	PRINTINT(bVar0);
	PRINTNL();
	switch (bVar0)
	{
		case 0x00000000:
			iVar1 = 391;
			break;
		
		case 0x00000001:
			iVar1 = 392;
			break;
		
		case 0x00000002:
			iVar1 = 393;
			break;
	}
	return iVar1;
}

void Function_511(var uParam0, int iParam1, float fParam2) //Position: 0x1A0A8 / 106664
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	iVar2 = 0;
	PRINTSTRING(GET_OBJECT_NAME(&uParam0));
	PRINTSTRING(" has ");
	PRINTINT(SQUAD_GET_SIZE(&uParam0));
	PRINTSTRING(" guys.");
	PRINTNL();
	bVar1 = (SQUAD_GET_SIZE(&uParam0) - iParam1);
	if (bVar1 >= 0)
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, false);
		PRINTSTRING(GET_OBJECT_NAME(&uParam0));
		PRINTSTRING(" is too big, take away ");
		PRINTINT(bVar1);
		PRINTSTRING(" guys.");
		iVar2 = 0;
		while (iVar2 < (bVar1 - 1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				bVar5 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&bVar5))
				{
					if (!Function_328(&bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (!Function_323(&bVar5, &Global_54076, &fParam2))
						{
							bVar3 = true;
							bVar4 = &bVar5;
						}
					}
					else
					{
						Function_274(&bVar5);
						Function_274(&Global_54076);
						Function_274(&bVar4);
						Function_274(&Global_54076);
						if (VDIST(Function_274(&bVar5), Function_274(&Global_54076)) < VDIST(Function_274(&bVar4), Function_274(&Global_54076)))
						{
							bVar4 = &bVar5;
						}
					}
				}
				bVar0++;
			}
			if (bVar3)
			{
				PRINTSTRING("destroying ");
				PRINTSTRING(GET_ACTOR_NAME(&bVar4));
				PRINTNL();
				DESTROY_ACTOR(&bVar4);
			}
			else
			{
				PRINTSTRING("releasing ");
				PRINTSTRING(GET_ACTOR_NAME(&bVar4));
				PRINTNL();
				SQUAD_LEAVE(&bVar4);
				RELEASE_ACTOR(&bVar4);
				TASK_FLEE_ACTOR(&bVar4, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			}
			iVar2++;
		}
	}
	return;
}

void Function_512(struct<69> Param0) //Position: 0x1A234 / 107060
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_513(var uParam0, var uParam1, int iParam2) //Position: 0x1A2F4 / 107252
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&uParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, &iParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_514(bool bParam0) //Position: 0x1A372 / 107378
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_FROZEN_AFTER_CORPSIFY(&uVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_515() //Position: 0x1A3B3 / 107443
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	(&Local_326 + 2224) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "counterAttack_2"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_7", 393, Vector(-4389,584f, 33,88335f, 4418,575f), Vector(0.0f, 82,29996f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 2224);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 42, 0,001f, 1, 1);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&uVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&uVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 9, true);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_8", 392, Vector(-4385,336f, 34,41043f, 4414,941f), Vector(0.0f, 82,29996f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 2224);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&uVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&uVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 9, true);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "counter_11", 392, Vector(-4384,464f, 34,2557f, 4413,018f), Vector(0.0f, 82,29996f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 2224);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&uVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&uVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 9, true);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "counter_14", 393, Vector(-4388,193f, 34,16287f, 4414,616f), Vector(0.0f, 82,29996f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 2224);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,61774f, 1, 1);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&uVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&uVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 9, true);
	return;
}

void Function_516() //Position: 0x1A74A / 108362
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_326 + 2216) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "counterAttack_1"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_1", 396, Vector(-4393,346f, 34,05388f, 4416,401f), Vector(0.0f, 67,86231f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2216);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&iVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 9, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_2", 391, Vector(-4393,194f, 33,88327f, 4414,012f), Vector(0.0f, 67,86231f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2216);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&iVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 9, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_3", 393, Vector(-4389,387f, 34,19567f, 4412,634f), Vector(0.0f, 67,86231f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2216);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&iVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 9, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_4", 392, Vector(-4391,626f, 34,3266f, 4409,649f), Vector(0.0f, 67,86231f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2216);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,001f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&iVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 9, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncounter_6", 391, Vector(-4389,184f, 33,88334f, 4416,602f), Vector(0.0f, 67,86231f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2216);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	Function_430(&iVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(&iVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(&iVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 9, true);
	return;
}

void Function_517(bool bParam0) //Position: 0x1ABB7 / 109495
{
	if (bParam0)
	{
		SQUAD_GOALS_CLEAR(&Local_326 + 1552);
		Function_519(1);
		Function_518(&Local_326 + 4544, 0);
		Function_518(&Local_326 + 4552, 0);
		Function_518(&Local_326 + 4648, 1);
		Function_518(&Local_326 + 4616, 1);
	}
	else
	{
		SQUAD_GOALS_CLEAR(&Local_326 + 1552);
		Function_519(0);
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4544), -1.0f, 1086324736);
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4552), -1.0f, 1086324736);
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, true, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4648), -1.0f, 1086324736);
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, true, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4616), -1.0f, 1086324736);
		SQUAD_SET_FACTION(&Local_326 + 1552, 20);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 0);
	}
	return;
}

void Function_518(var uParam0, bool bParam1) //Position: 0x1ACAD / 109741
{
	var uVar0;
	bool bVar2;
	
	GET_VOLUME_CENTER(&Local_326 + 2792, &uVar0);
	bVar2 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(0, &uParam0, 4, 0, 1);
	TASK_POINT_GUN_AT_COORD(0, &uVar0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, bParam1, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar2);
	TASK_SEQUENCE_RELEASE(bVar2, 1);
	return;
}

void Function_519(bool bParam0) //Position: 0x1ACF3 / 109811
{
	if (bParam0)
	{
		Function_498(&Local_326 + 1552, 9, 0.0f);
		Function_498(&Local_326 + 1552, 11, 0.0f);
		Function_498(&Local_326 + 1552, 10, 0.0f);
	}
	else
	{
		Function_498(&Local_326 + 1552, 9, 50.0f);
		Function_498(&Local_326 + 1552, 11, 1,5f);
		Function_498(&Local_326 + 1552, 10, 1,5f);
	}
	return;
}

void Function_520(var uParam0, bool bParam1) //Position: 0x1AD5B / 109915
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_521(var uParam0, int iParam1) //Position: 0x1ADA1 / 109985
{
	int iVar0;
	
	iVar0 = SQUAD_GET_SIZE(&uParam0);
	while (iVar0 >= iParam1)
	{
		DESTROY_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, (SQUAD_GET_SIZE(&uParam0) - 1)));
		iVar0 = (iVar0 - 1);
		PRINTSTRING("Removed a guy from ");
		PRINTSTRING(GET_OBJECT_NAME(&uParam0));
		PRINTSTRING(", total size is ");
		PRINTINT(SQUAD_GET_SIZE(&uParam0));
		PRINTNL();
	}
	return;
}

int Function_522() //Position: 0x1AE14 / 110100
{
	Function_359(&Local_326 + 848, 396, 2, 0);
	Function_359(&Local_326 + 848, 391, 2, 0);
	Function_359(&Local_326 + 848, 393, 2, 0);
	Function_359(&Local_326 + 848, 392, 2, 0);
	if (Function_388(&Local_326 + 848))
	{
		return 1;
	}
	return 0;
}

var Function_523(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1AE65 / 110181
{
	struct<2> Var0;
	var uVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uParam0) <= iParam1)
	{
		Function_528(&uParam2);
		Var0 = Function_528(&uParam2);
		PRINTSTRING("Got a spawn pos for the new rebel guy: ");
		PRINTVECTOR(Var0);
		PRINTNL();
		bVar4 = Function_527();
		if (SQUAD_GET_SIZE(&uParam0) > 7 && SQUAD_GET_SIZE(&uParam0) < 0)
		{
			while (Function_526(&uParam0, bVar4) < 0 && iVar5 > 50)
			{
				bVar4 = Function_527();
				iVar5++;
			}
		}
		Function_76();
		uVar2 = CREATE_ACTOR_IN_LAYOUT(&Local_326, Function_54(), bVar4, Var0, Function_76());
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar2);
		Function_448(&uVar2);
		if (bParam3)
		{
			bVar3 = RAND_INT_RANGE(false, 2);
			switch (bVar3)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
			}
		}
		else
		{
			Function_356(&uVar2);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar2, 0);
		AI_BEHAVIOR_SET_ALLOW(&uVar2, 0, 0);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 38, -1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 28, 0.0f);
		SQUAD_JOIN(&uVar2, &Local_326 + 1552);
		if (SQUAD_IS_VALID(&Local_326 + 1632))
		{
			Function_525(&uVar2, &Local_326 + 1632);
		}
		if (SQUAD_IS_VALID(&Local_326 + 1640))
		{
			Function_525(&uVar2, &Local_326 + 1640);
		}
		if (SQUAD_IS_VALID(&Local_326 + 1648))
		{
			Function_525(&uVar2, &Local_326 + 1648);
		}
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar2, 0);
		Function_430(&uVar2, 0);
		SET_ACTOR_FACTION(&uVar2, 20);
		if (bParam3)
		{
			ACTOR_PUT_WEAPON_IN_HAND(&uVar2, Function_524(&uVar2, 46), 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 37, 5.0f);
		}
		AI_SET_WEAPON_MAX_RANGE(&uVar2, 90.0f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar2, true);
		COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(&uVar2, 0,2f);
		COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&uVar2, 0,1f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 10, 1,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 11, 0,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 20, 1.0f);
		return &uVar2;
	}
	return "";
}

var Function_524(var uParam0, int iParam1) //Position: 0x1B051 / 110673
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_525(var uParam0, int iParam1) //Position: 0x1B063 / 110691
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uParam0, &uVar1);
		}
		bVar0++;
	}
	return;
}

int Function_526(var uParam0, int iParam1) //Position: 0x1B09F / 110751
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (GET_ACTOR_ENUM(&uVar2) == iParam1)
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

var Function_527() //Position: 0x1B0E2 / 110818
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(false, 6);
	PRINTSTRING("making a new fighter! this guy's actor index is ");
	PRINTINT(bVar0);
	PRINTNL();
	switch (bVar0)
	{
		case 0x00000000:
			iVar1 = 285;
			break;
		
		case 0x00000001:
			iVar1 = 291;
			break;
		
		case 0x00000002:
			iVar1 = 293;
			break;
		
		case 0x00000003:
			iVar1 = 290;
			break;
		
		case 0x00000004:
			iVar1 = 521;
			break;
		
		case 0x00000005:
			iVar1 = 522;
			break;
		
		case 0x00000006:
			iVar1 = 516;
			break;
	}
	return iVar1;
}

struct<8> Function_528(var[] uParam0) //Position: 0x1B198 / 111000
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	bool bVar4;
	
	iVar0 = 0;
	bVar1 = false;
	bVar4 = 999999.0f;
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		GET_OBJECT_POSITION(&(uParam0[iVar0]), &Var2);
		Function_291(&Global_54076);
		if (VDIST(Function_291(&Global_54076), Var2) > bVar4)
		{
			if (!WOULD_ACTOR_BE_VISIBLE(285, &Var2, 3212836864))
			{
				Function_291(&Global_54076);
				bVar4 = VDIST(Function_291(&Global_54076), Var2);
				bVar1 = iVar0;
			}
		}
		iVar0++;
	}
	GET_OBJECT_POSITION(&(uParam0[bVar1]), &Var2);
	PRINTSTRING("Spawned a rebel guy. The nearest reinforcement spot was ");
	PRINTINT(bVar1);
	PRINTSTRING(" at ");
	PRINTVECTOR(Var2);
	PRINTNL();
	return StackVal, Var2;
}

void Function_529() //Position: 0x1B272 / 111218
{
	switch (iLocal_1913)
	{
		case 0x00000000:
			if (SQUAD_IS_VALID(&Local_326 + 2216))
			{
				Function_530(&Local_326 + 2216);
			}
			break;
		
		case 0x00000002:
			if (SQUAD_IS_VALID(&Local_326 + 2224))
			{
				Function_530(&Local_326 + 2224);
			}
			break;
		
		case 0x00000004:
			iLocal_1913 = 4294967295;
			break;
	}
	iLocal_1913++;
	return;
}

void Function_530(var uParam0) //Position: 0x1B2D5 / 111317
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	
	bVar0 = false;
	GET_PATH_POINT(&Local_326 + 4800, false, &Var5);
	if (!DECOR_CHECK_EXIST(&uParam0, "nbiInVilla"))
	{
		DECOR_SET_INT(&uParam0, "nbiInVilla", false);
	}
	else
	{
		bVar2 = DECOR_GET_INT(&uParam0, "nbiInVilla");
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (!Function_14(bVar2, Function_144(bVar0)))
		{
			bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			switch ((bVar0 % 3))
			{
				case 0x00000000:
					iVar3 = &Local_326 + 4792;
					break;
				
				case 0x00000001:
					iVar3 = &Local_326 + 4800;
					break;
				
				case 0x00000002:
					iVar3 = &Local_326 + 4808;
					break;
			}
			Function_274(&bVar4);
			if (VDIST(Function_274(&bVar4), Var5) >= 20.0f)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Var5, 2.0f, 4);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iVar3, 4, 0, 1, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bVar4, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_77(&bVar2, Function_144(bVar0));
			}
		}
		bVar0++;
	}
	DECOR_SET_INT(&uParam0, "nbiInVilla", bVar2);
	return;
}

void Function_531(bool bParam0) //Position: 0x1B3FF / 111615
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	fVar5 = 999999.0f;
	bVar0 = Function_534(&Local_326 + 1552, &Local_326 + 4272, 1);
	bVar6 = false;
	bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1552, false);
	fVar5 = Function_532(&bVar1, &Local_326 + 4280);
	MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(&bVar0);
	MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(&bVar1);
	bVar6 = false;
	while (bVar6 < (SQUAD_GET_SIZE(&Local_326 + 1552) - 1))
	{
		iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1552, bVar6);
		fVar3 = Function_532(&iVar2, &Local_326 + 4280);
		if ((fVar3 > fVar5 && GET_ACTOR_ENUM(&iVar2) == GET_ACTOR_ENUM(&bVar0)) && &iVar2 == &bVar0)
		{
			bVar1 = &iVar2;
			fVar5 = fVar3;
		}
		bVar6++;
	}
	if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4272), "UseCase1"))))
	{
		if (bParam0)
		{
			Function_291(&Local_326 + 4272);
			if (StackVal && !Function_420(!Function_328(&bVar0, 0x3f800000, 0x42960000, 1, 1, 0), Function_291(&Local_326 + 4272), 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SNAP_ACTOR_TO_GRINGO(&bVar0, &Local_326 + 4272, "UseCase1", true, 0, 0);
			}
		}
		bVar4 = TASK_SEQUENCE_OPEN();
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4272), "Usecase1", 4294967295, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bVar0, bVar4);
		TASK_SEQUENCE_RELEASE(bVar4, 1);
		TASK_PRIORITY_SET(&bVar0, false);
	}
	if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4280), "UseCase2"))))
	{
		if (bParam0)
		{
			Function_291(&Local_326 + 4280);
			if (StackVal && !Function_420(!Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0), Function_291(&Local_326 + 4280), 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SNAP_ACTOR_TO_GRINGO(&bVar1, &Local_326 + 4280, "UseCase2", true, 0, 0);
			}
		}
		bVar4 = TASK_SEQUENCE_OPEN();
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4280), "Usecase2", 4294967295, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bVar1, bVar4);
		TASK_SEQUENCE_RELEASE(bVar4, 1);
		TASK_PRIORITY_SET(&bVar1, false);
	}
	return;
}

float Function_532(int iParam0, int iParam1) //Position: 0x1B612 / 112146
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_219(&iParam0);
			Var0 = Function_219(&iParam0);
			Function_533(&iParam1);
			Var2 = Function_533(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_533(int iParam0) //Position: 0x1B6B4 / 112308
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

var Function_534(var uParam0, var uParam1, bool bParam2) //Position: 0x1B722 / 112418
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (AI_IMPAIRMENT_MASK_MATCHES(iVar5, AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar4)))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&bVar4) && IS_ACTOR_ALIVE(&bVar4))
		{
			fVar3 = Function_532(&bVar4, &uParam1);
			if (fVar3 > fVar2 || bVar1 != 4294967295)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return &bVar4;
	}
	return "";
}

void Function_535() //Position: 0x1B7CC / 112588
{
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		Function_454(&bLocal_1748, 60.0f, 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
		if (iLocal_1563 <= 10)
		{
			if (!Function_323(&bLocal_1579, &Global_54076, 60.0f))
			{
				Function_336(7, 1, 1);
			}
			else
			{
				Function_336(7, 0, 1);
			}
		}
		if (iLocal_1925)
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2792))
			{
				iLocal_1925 = 0;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
		iLocal_1919++;
		if (iLocal_1919 > 5)
		{
			iLocal_1919 = 0;
		}
		if (iLocal_1919 == 0)
		{
			if (!DECOR_CHECK_EXIST(&bLocal_1579, "bInVilla"))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_1579, &Local_326 + 2336[4]))
				{
					DECOR_SET_BOOL(&bLocal_1579, "bInVilla", true);
					if (DECOR_CHECK_EXIST(&bLocal_1579, "bEnterVillaRecovery"))
					{
						DECOR_REMOVE(&bLocal_1579, "bEnterVillaRecovery");
					}
				}
			}
		}
		if (iLocal_1919 == 1)
		{
			if (SQUAD_IS_VALID(&Local_326 + 1648))
			{
				Function_552(&Local_326 + 1648, &Local_326 + 1552);
			}
		}
		if (iLocal_1919 == 2)
		{
			Function_523(&Local_326 + 1552, 6, &Local_326 + 3776, 0);
		}
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1924 = 1;
			bLocal_1910 = false;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			iLocal_1925 = 1;
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			Function_300(&Local_326 + 1480, 1);
			if (SQUAD_IS_VALID(&Local_326 + 1632))
			{
				Function_280(&Local_326 + 1632);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1584[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_296();
				iLocal_1583 = Function_294(StackVal, (&Local_326 + 3176[03]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3176[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3176[13]), 1, 1, true);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			Function_453(&Local_326 + 1552);
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_551()) && Function_358()) && (Function_292(iLocal_1583) || iLocal_1583 != 4294967295))
			{
				if (Function_452())
				{
					if (Function_388(&iLocal_1652))
					{
						Function_451();
						Function_450();
						Function_293(&bLocal_1736);
						iLocal_1563 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, false);
			if (IS_OBJECT_VALID(&Local_326 + 4872))
			{
				DESTROY_OBJECT(&Local_326 + 4872);
			}
			TOGGLE_COVER_PROPS(0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 4864));
			}
			if (!SQUAD_IS_VALID(&Local_326 + 1648))
			{
				Function_550();
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1648, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1648) | 2048);
				if (!DECOR_CHECK_EXIST(&Local_326 + 1648, "bBlipped"))
				{
					Function_435(&Local_326 + 1648, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
			}
			if (SQUAD_IS_VALID(&Local_326 + 2208))
			{
				SQUADS_MERGE(&Local_326 + 2208, &Local_326 + 1648);
			}
			if (!SQUAD_IS_VALID(&Local_326 + 1552))
			{
				Function_447();
				Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3176[23]), *(&Local_326 + 3176[23] + 12), 5, 2.0f, 1.0f, 0, 0);
				Function_443(&Local_326 + 1552, 0);
				Function_521(&Local_326 + 1552, 6);
			}
			SQUAD_GOALS_CLEAR(&Local_326 + 1552);
			SQUAD_GOALS_CLEAR(&Local_326 + 1648);
			Function_514(&Local_326 + 1552);
			Function_549(&Local_326 + 1648);
			Function_514(&Local_326 + 1648);
			TASK_SHOOT_ENEMIES_FROM_COVER(FIND_ACTOR_IN_LAYOUT(&Local_326, "nofficer_1"), GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4568), -1.0f, 1086324736);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			Function_421(&Local_326 + 1552, 0);
			Function_498(&Local_326 + 1552, 62, 1,5f);
			Function_499(&Local_326 + 1552, 16, 1);
			SQUAD_GOALS_CLEAR(&Local_326 + 1552);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4608), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4424), -1.0f, 1086324736);
			Function_548("cover_low119", &Local_326 + 4256, 1);
			Function_548("cover_low118", &Local_326 + 4264, 1);
			Function_548("ncover_low", &Local_326 + 4256, 1);
			Function_548("cover_villa_25", &Local_326 + 4256, 1);
			Function_548("cover_villa_26", &Local_326 + 4264, 1);
			SQUAD_SET_FACTION(&Local_326 + 1552, 20);
			Function_547();
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1648, 0);
			Function_336(7, 0, 1);
			Function_512(&(Local_1810[115]));
			Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
			Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_424(&(Local_1810[115]), 2);
			Function_424(&(Local_1810[115]), 8);
			Function_424(&(Local_1810[115]), 128);
			Function_423(&(Local_1810[115]), 3);
			Function_511(&Local_326 + 1552, 6, 0x40a00000);
			Function_293(&bLocal_1736);
			iLocal_1563 = 6;
			break;
		
		case 0x00000006:
			if (Function_545(&Local_326 + 1552, 1))
			{
				if (!HUD_IS_FADED())
				{
					Function_544();
					STREAMING_UNLOAD_BOUNDS();
					Function_293(&bLocal_1736);
					iLocal_1563 = 7;
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
			}
			break;
		
		case 0x00000007:
			if (Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_objVilla_kill", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 8;
			}
			break;
		
		case 0x00000008:
			Function_543();
			if (iLocal_1919 == 4)
			{
				if (Function_263(&bLocal_1736) <= 30.0f)
				{
					Function_542(0, 1);
				}
			}
			if (iLocal_1919 == 3)
			{
				if (DECOR_CHECK_EXIST(&bLocal_1579, "bInVilla"))
				{
					if (GET_TASK_STATUS(&bLocal_1579, 0) != 2 || GET_TASK_STATUS(&bLocal_1579, 0) != 0)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1648) < 3)
						{
							TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4600), -1.0f, 1086324736);
							Function_421(&Local_326 + 1552, 1);
							Function_498(&Local_326 + 1552, 62, 0,5f);
							Function_499(&Local_326 + 1552, 16, 0);
							SQUAD_GOALS_CLEAR(&Local_326 + 1552);
							SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 0, &Local_326 + 2336[1], 1);
							SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 1, &Local_326 + 2336[3], 2);
							SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 2, &Local_326 + 2336[0], 4294967295);
							Function_293(&bLocal_1736);
							iLocal_1563 = 9;
						}
					}
					else
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4640), -1.0f, 1086324736);
					}
				}
			}
			break;
		
		case 0x00000009:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1648) < 0)
			{
				iLocal_1924 = 0;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_399(&Local_326 + 1648);
				if (!Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 25.0f))
				{
					if (DECOR_CHECK_EXIST(&bLocal_1579, "bInVilla"))
					{
						DECOR_REMOVE(&bLocal_1579, "bInVilla");
					}
				}
				SQUAD_GOALS_CLEAR(&Local_326 + 1552);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4312), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4328), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4344), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4352), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4360), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_326 + 4368), "UseCase1", 4294967295, 2);
				Function_293(&bLocal_1736);
				iLocal_1563 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_522();
			if (Function_263(&bLocal_1736) <= 2.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_meet_at_door", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_541();
				Function_336(7, 1, 1);
				bLocal_1910 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(0, &Local_326 + 4232, 4, 0, 1);
				TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1910);
				TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_522();
			if (Function_263(&bLocal_1736) <= 5.0f)
			{
				Function_542(1, 0);
			}
			else
			{
				Function_542(0, 0);
			}
			if (Function_540(&bLocal_1579, &Local_326 + 4232, 5.0f) && Function_323(&bLocal_1579, &Global_54076, 7.0f))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_539();
				bLocal_1910 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 5,5f, 0, 0);
				TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_326 + 3512[03], 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1910);
				TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
				Function_531(0);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 12;
			}
			else if (Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3336[23]), 1.0f))
			{
				if (Function_263(&bLocal_1744) <= 8.0f)
				{
					Function_538();
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1579, "stand_ambient", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1579, "stand_ambient/one_hnd");
					Function_472(&bLocal_1579, &Global_54076);
					Function_293(&bLocal_1744);
				}
			}
			break;
		
		case 0x0000000C:
			Function_522();
			if (((IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4272), "Usecase1"))) && IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4280), "Usecase2")))) && Function_263(&bLocal_1736) <= 8.0f) || Function_263(&bLocal_1736) <= 12.0f)
			{
				Function_537();
				SQUAD_GOALS_CLEAR(&Local_326 + 1552);
				Function_517(1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 13;
			}
			else if (Function_263(&bLocal_1736) <= 15.0f)
			{
				Function_266(&bLocal_1736, 10.0f);
				Function_531(1);
			}
			break;
		
		case 0x0000000D:
			Function_522();
			if (Function_263(&bLocal_1736) <= 6.0f)
			{
				Function_536();
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_263(&bLocal_1736) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
				iLocal_1584[5] = 1;
				Function_293(&bLocal_1736);
				bLocal_1562 = 6;
				iLocal_1563 = 0;
			}
			break;
	}
	return;
}

void Function_536() //Position: 0x1C464 / 115812
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_defendGate", "Rebel05_defendGate", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x1C4B1 / 115889
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_rebelsUpHill", "Rebel05_rebelsUpHill", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1C502 / 115970
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_runsAway_mansion", "Rebel05_runsAway_mansion", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x1C55B / 116059
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_breakMansionDoor", "Rebel05_breakMansionDoor", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_540(bool bParam0, var uParam1, float fParam2) //Position: 0x1C5B4 / 116148
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_219(&bParam0);
			Function_533(&uParam1);
			if (VDIST(Function_219(&bParam0), Function_533(&uParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_541() //Position: 0x1C6D2 / 116434
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_326 + 1552) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1552, bVar0);
		if (!IS_ACTOR_IN_VOLUME(&bVar1, &Local_326 + 2400))
		{
			if (Function_328(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				RELEASE_ACTOR(&bVar1);
			}
			else
			{
				DESTROY_ACTOR(&bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_542(bool bParam0, bool bParam1) //Position: 0x1C73D / 116541
{
	bool bVar0;
	var uVar1;
	
	if (!DECOR_CHECK_EXIST(&bLocal_1579, "bInVilla"))
	{
		if (!DECOR_CHECK_EXIST(&bLocal_1579, "bEnterVillaRecovery"))
		{
			DECOR_SET_BOOL(&bLocal_1579, "bEnterVillaRecovery", true);
			if (bParam0)
			{
				GET_PATH_POINT(&Local_326 + 4800, false, &uVar1);
				TELEPORT_ACTOR(&bLocal_1579, &uVar1, 1, 1, 1);
			}
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4792, 4, 0, 1, 1, false);
			if (&bParam1)
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4640), -1.0f, 1086324736);
			}
			else
			{
				TASK_GO_TO_COORD(false, &Local_326 + 3336[23], 4);
				TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1579, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	return;
}

void Function_543() //Position: 0x1C817 / 116759
{
	if ((Function_263(&bLocal_1752) <= 10.0f && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_293(&bLocal_1752);
		switch (RAND_INT_RANGE(false, 2))
		{
			case 0x00000000:
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_1579, "Rebel05_moveAssaultForward", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_1579, "Rebel05_moveForward_taunt", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				SAY_SINGLE_LINE_SCRIPTED(&bLocal_1579, "Rebel05_assaultForward_mansion", 0, 0, 0, 0, 0, 0);
				break;
			}
	}
	return;
}

void Function_544() //Position: 0x1C8E2 / 116962
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_mansionGrounds", "Rebel05_mansionGrounds", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_545(int iParam0, int iParam1) //Position: 0x1C937 / 117047
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (!Function_546(&uVar1, iParam1, 0x41700000))
				{
					return 0;
				}
			}
			return 0;
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_546(int iParam0, bool bParam1, float fParam2) //Position: 0x1C99D / 117149
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&iParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&iParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&iParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&iParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_547() //Position: 0x1CA3F / 117311
{
	bool bVar0;
	var uVar1;
	
	Function_496(&Local_326 + 1552, 4);
	GET_PATH_POINT(&Local_326 + 4792, false, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 5,5f, 0, 0);
	TASK_GO_NEAR_COORD(false, &uVar1, 2.0f, 4);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4792, 4, 0, 1, 1, false);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4640), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1579, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_548(int iParam0, var uParam1, bool bParam2) //Position: 0x1CAAB / 117419
{
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, bParam2, 0, 1);
	TASK_SHOOT_FROM_COVER(0, &uParam1, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, &iParam0)), -1.0f, 1086324736);
	return;
}

void Function_549(int iParam0) //Position: 0x1CADA / 117466
{
	SQUAD_GOALS_CLEAR(&iParam0);
	Function_322(&iParam0);
	iLocal_2059 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iParam0, 2, &Local_326 + 2336[1], 4);
	iLocal_2061 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iParam0, 3, &Local_326 + 2336[2], 2);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iParam0, 4, &Local_326 + 2336[6], 4294967295);
	return;
}

void Function_550() //Position: 0x1CB2B / 117547
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&Local_326 + 1648) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "VillaSoldiers"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "porch1_4", 391, Vector(-4350,381f, 39,21351f, 4352,25f), Vector(0.0f, 110,8233f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1648);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "static_2", 391, Vector(-4350,042f, 39,15297f, 4362,039f), Vector(0.0f, -15,79169f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1648);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_5", 392, Vector(-4346,836f, 39,15297f, 4361,506f), Vector(0.0f, -22,26162f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1648);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "porch1_5", 392, Vector(-4352,991f, 39,15294f, 4360,758f), Vector(0.0f, 94,00013f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1648);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 43, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "nofficer_1", 395, Vector(-4344,344f, 42,01784f, 4342,185f), Vector(0.0f, 177,4538f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1648);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 40, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "porch1_6", 392, Vector(-4350,854f, 39,21351f, 4351,005f), Vector(0.0f, 110,8233f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1648);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 43, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	Function_430(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	return;
}

int Function_551() //Position: 0x1CED0 / 118480
{
	Function_359(&Local_326 + 792, 391, 2, 0);
	Function_359(&Local_326 + 792, 392, 2, 0);
	Function_359(&Local_326 + 792, 395, 2, 0);
	if (Function_388(&Local_326 + 792))
	{
		return 1;
	}
	return 0;
}

void Function_552(var uParam0, int iParam1) //Position: 0x1CF12 / 118546
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (&iParam1 == &Local_326 + 1552)
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
			if (Function_540(&bVar1, &Local_326 + 4424, 2.0f))
			{
				AI_ENABLE_PERCEPTION(&bVar1);
			}
			if (Function_540(&bVar1, &Local_326 + 4608, 2.0f))
			{
				AI_ENABLE_PERCEPTION(&bVar1);
			}
			bVar0++;
		}
	}
	if ((Function_553(&uParam0, &uLocal_2057, &Local_326 + 2336[0]) || Function_553(&uParam0, &iLocal_2059, &Local_326 + 2336[1])) || Function_553(&uParam0, &iLocal_2061, &Local_326 + 2336[2]))
	{
		if (SQUAD_GOAL_IS_VALID(&uLocal_2063))
		{
			SQUAD_GOAL_REMOVE(&iParam1, &uLocal_2063);
		}
	}
	return;
}

int Function_553(var uParam0, int iParam1, int iParam2) //Position: 0x1CFD0 / 118736
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
	{
		if (SQUAD_GOAL_IS_VALID(&iParam1))
		{
			SQUAD_GOAL_REMOVE(&uParam0, &iParam1);
			return 1;
		}
	}
	return 0;
}

void Function_554() //Position: 0x1CFF9 / 118777
{
	var uVar0;
	
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		if (iLocal_1563 <= 11)
		{
			if (SQUAD_IS_VALID(&Local_326 + 1552))
			{
				if (!Function_590(&Local_326 + 1552, &Local_326 + 2792, 11.0f) && Function_589())
				{
					Function_293(&bLocal_1736);
					iLocal_1563 = 11;
				}
			}
		}
		if (iLocal_1563 <= 12)
		{
			if (Function_588())
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 12;
			}
			else
			{
				*(&Local_326 + 4872) = Function_586(&Local_326 + 4872, &Local_326 + 4152, &Local_326 + 4160, &bLocal_1982);
			}
			if (iLocal_1563 >= 6)
			{
				Function_584();
			}
		}
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2792))
		{
			if (!DECOR_CHECK_EXIST(&Local_326 + 1648, "bBlipped"))
			{
				Function_550();
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1648, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_435(&Local_326 + 1648, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(&Local_326 + 1648, "bBlipped", true);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1648, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1648) | 2048);
			}
		}
		if (iLocal_1563 < 7 && iLocal_1563 > 15)
		{
			if (!Function_481(&Global_54076, &Local_326 + 4864))
			{
				if (Function_323(&Global_54076, &bLocal_1579, (60.0f / 2.0f)))
				{
					Function_336(7, 0, 1);
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
					{
						ADD_BLIP_FOR_OBJECT(&Local_326 + 4864, 335, 0f, 2, 0);
					}
				}
				else
				{
					Function_454(&bLocal_1748, (60.0f / 2.0f), (200.0f / 3.0f), &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 4864));
					}
					Function_336(7, 1, 1);
				}
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 4864));
			}
		}
		uVar0 = Function_523(&Local_326 + 1552, 6, &Local_326 + 3736, 0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			SET_ACTOR_HEALTH(&uVar0, 25.0f);
		}
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			iLocal_1924 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			bLocal_1910 = false;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			Function_300(&Local_326 + 1480, 1);
			if (SQUAD_IS_VALID(&Local_326 + 1632))
			{
				Function_280(&Local_326 + 1632);
			}
			if (SQUAD_IS_VALID(&Local_326 + 1640))
			{
				Function_280(&Local_326 + 1640);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1584[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_296();
				iLocal_1583 = Function_294(StackVal, *(&Local_326 + 3176[03]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3176[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3176[13]), 1, 1, true);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_292(iLocal_1583) || iLocal_1583 != 4294967295)
				{
					if (Function_583() && Function_358())
					{
						if (Function_452())
						{
							if (Function_388(&iLocal_1652))
							{
								Function_451();
								Function_293(&bLocal_1736);
								iLocal_1563 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
			TOGGLE_COVER_PROPS(0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2848)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2848));
			}
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, false);
			if (iLocal_1584[3] == 0)
			{
				Function_447();
				Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3176[23]), *(&Local_326 + 3176[23] + 12), 5, 2.0f, 1.0f, 0, 0);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 0);
				Function_582(&Local_326 + 1552);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 0, &Local_326 + 2832, 4294967295);
			}
			Function_511(&Local_326 + 1552, 6, 0x40a00000);
			Function_453(&Local_326 + 1552);
			SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_326 + 1552, 0, &Local_326 + 2904, 2, 1);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_443(&Local_326 + 1552, 0);
			Function_581(&Local_326 + 1552, 0);
			Function_232(&iLocal_1941, 1);
			Function_232(&iLocal_1943, 1);
			CLOSE_DOOR_FAST(&iLocal_1941);
			CLOSE_DOOR_FAST(&iLocal_1943);
			Function_580();
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2208, 10, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2208, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2208) | 2048);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 0);
			Function_514(&Local_326 + 1552);
			SQUAD_SET_FACTION(&Local_326 + 1552, 20);
			Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
			Function_512(&(Local_1810[115]));
			Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
			iLocal_1924 = 0;
			bLocal_1982 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "oTracker_1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			Function_293(&bLocal_1736);
			iLocal_1563 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!iLocal_1584[3])
				{
					SQUAD_GOALS_CLEAR(&Local_326 + 1552);
					Function_579(1);
				}
				ATTACH_OBJECTS(StackVal, StackVal, &bLocal_1982, &Local_326 + 4872, "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				Function_578();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_336(7, 1, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_263(&bLocal_1736) <= 5,5f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_577(&Local_326 + 1552, 0);
				if (!Function_481(&Global_54076, &Local_326 + 4864))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_321("Rebel05_obj_MountGatling", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				ADD_BLIP_FOR_OBJECT(&Local_326 + 4864, 335, 0f, 2, 0);
				Function_336(7, 0, 1);
				Function_575();
				Function_293(&bLocal_1736);
				iLocal_1563 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_481(&Global_54076, &Local_326 + 4864) || Function_263(&bLocal_1736) <= 8.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_574();
				Function_293(&bLocal_1736);
				iLocal_1563 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_573();
				Function_572();
				Function_293(&bLocal_1736);
				iLocal_1563 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_263(&bLocal_1736) <= 7.0f)
			{
				Function_137("Rebel05_obj_waitKegs", 0x41200000, 1, 0, 2, 1, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_OBJECT_VALID(&Local_326 + 4872))
			{
			}
			if (!Function_590(&Local_326 + 1552, &Local_326 + 2792, 11.0f))
			{
				if (Function_589())
				{
					if (!Function_540(&bLocal_1579, &Local_326 + 2792, 9.0f))
					{
						Function_571();
						Function_570(&Local_326 + 1552, 1);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4520), -1.0f, 1086324736);
						Function_293(&bLocal_1736);
						Function_293(&bLocal_1744);
						iLocal_1563 = 12;
					}
					else
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4520), -1.0f, 1086324736);
					}
				}
			}
			if (!Function_481(&Global_54076, &Local_326 + 4864))
			{
				if (Function_263(&bLocal_1736) <= 8.0f)
				{
					Function_567(&bLocal_1748, (8.0f * 2.0f), "Rebel05_obj_MountGatling", 7,5f, 2, 0);
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_588())
			{
				if (IS_OBJECT_VALID(&Local_326 + 4872))
				{
					DESTROY_OBJECT(&Local_326 + 4872);
				}
				Function_450();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_566(&Local_326 + 1552, 0);
				Function_322(&Local_326 + 1552);
				iLocal_1924 = 1;
				Function_512(&(Local_1810[115]));
				Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
				Function_424(&(Local_1810[115]), 2);
				Function_424(&(Local_1810[115]), 8);
				Function_424(&(Local_1810[115]), 4);
				Function_424(&(Local_1810[115]), 32);
				Function_423(&(Local_1810[115]), 3);
				DESTROY_OBJECT(&Local_326 + 4152);
				DESTROY_OBJECT(&Local_326 + 4160);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_565(1);
				Function_519(0);
				Function_564(&Local_326 + 1552, 1);
				DESTROY_OBJECT(&iLocal_1941);
				DESTROY_OBJECT(&iLocal_1943);
				Function_563();
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
				Function_512(&(Local_1810[215]));
				DECOR_REMOVE(&Local_326 + 1552, "aCarry1");
				DECOR_REMOVE(&Local_326 + 1552, "aCarry2");
				iLocal_1925 = 1;
				Function_423(&(Local_1810[115]), 3);
				Function_293(&bLocal_1736);
				iLocal_1563 = 13;
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4872)))
				{
					if (Function_263(&bLocal_1736) <= 4.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(&Local_326 + 4872, 322, 0f, 2, 0), "rebel05_tntLabel");
						HUD_CLEAR_OBJECTIVE();
						Function_321("Rebel05_objGates", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
				}
				if (Function_263(&bLocal_1736) <= 9.0f)
				{
					Function_562();
					Function_293(&bLocal_1736);
				}
			}
			break;
		
		case 0x0000000D:
			Function_543();
			if ((Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_1925)
			{
				iLocal_1925 = 0;
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_objGates_kill", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2208) < 1)
			{
				Function_559(3);
				Function_558(&Local_326 + 2208, 0);
				Function_557();
				Function_293(&bLocal_1736);
				iLocal_1563 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_543();
			if ((Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_1925)
			{
				iLocal_1925 = 0;
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_objGates_kill", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2208) < 2)
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 15;
			}
			break;
		
		case 0x0000000F:
			STREAMING_LOAD_BOUNDS(*(&Local_326 + 3336[33]), 20.0f, 0);
			if ((Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_1925)
			{
				iLocal_1925 = 0;
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_objGates_kill", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 2208) < 1)
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_263(&bLocal_1736) <= 2.0f)
			{
				Function_556();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_498(&Local_326 + 1552, 62, 0,5f);
				Function_421(&Local_326 + 1552, 1);
				Function_555(&Local_326 + 1552);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 4864)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 4864));
				}
				Function_293(&bLocal_1736);
				iLocal_1563 = 17;
			}
			break;
		
		case 0x00000011:
			if (Function_263(&bLocal_1736) < 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
			iLocal_1584[4] = 1;
			Function_293(&bLocal_1736);
			bLocal_1562 = 5;
			iLocal_1563 = 0;
			break;
	}
	return;
}

void Function_555(bool bParam0) //Position: 0x1DCA6 / 122022
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_SHOOT_CLEAR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_556() //Position: 0x1DCED / 122093
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ArmyRetreatsVilla", "Rebel05_ArmyRetreatsVilla", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x1DD48 / 122184
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_JonBlowsGate", "Rebel05_JonBlowsGate", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558(var uParam0, bool bParam1) //Position: 0x1DD99 / 122265
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_ALLOW_DISARM(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_559(int iParam0) //Position: 0x1DDDD / 122333
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	
	iVar0 = 0;
	iVar3 = Local_326.f_3776;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		iVar1 = (iVar0 % (iVar3 - 1)) + 1;
		GET_OBJECT_POSITION(&Local_326 + 3776[iVar1], &Var4);
		while (WOULD_ACTOR_BE_VISIBLE(379, &Var4, 3212836864) && iVar1 > (iVar3 - 1))
		{
			iVar1++;
			GET_OBJECT_POSITION(&Local_326 + 3776[iVar1], &Var4);
		}
		Function_509(StackVal, &Local_326 + 2208, Var4, 1);
		iVar0++;
	}
	if (Function_561(&Local_326 + 2208, &Local_326 + 2880) <= Function_561(&Local_326 + 2208, &Local_326 + 2888))
	{
		iVar6 = &Local_326 + 2880;
		uVar7 = &Local_326 + 4816;
	}
	else
	{
		iVar6 = &Local_326 + 2888;
		uVar7 = &Local_326 + 4824;
	}
	iVar2 = (3 - Function_561(&Local_326 + 2208, &iVar6));
	Function_560(&Local_326 + 2208, &uVar7, iVar2);
	return;
}

void Function_560(var uParam0, var uParam1, int iParam2) //Position: 0x1DED1 / 122577
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	struct<2> Var8;
	var uVar10;
	
	bVar0 = false;
	iVar1 = 0;
	GET_PATH_POINT(&uParam1, false, &Var8);
	iVar1 = 0;
	while (iVar1 < (iParam2 - 1))
	{
		bVar6 = 99999,9f;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			bVar5 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			Function_274(&bVar5);
			bVar7 = VDIST(Var8, Function_274(&bVar5));
			if (bVar7 > bVar6)
			{
				if (!Function_14(bVar4, Function_144(bVar0)))
				{
					bVar6 = bVar7;
					bVar2 = bVar0;
				}
			}
			bVar0++;
		}
		bVar5 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar2);
		GET_PATH_POINT(&uParam1, false, &uVar10);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &uVar10, 2.0f, 4);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &uParam1, 4, 0, 1, 1, false);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bVar5, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
		Function_77(&bVar4, Function_144(bVar2));
		Function_274(&bVar5);
		Var8 = Function_274(&bVar5);
		iVar1++;
	}
	return;
}

int Function_561(var uParam0, int iParam1) //Position: 0x1DFA9 / 122793
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(&uVar2, &iParam1))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_562() //Position: 0x1E002 / 122882
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_WaitingShootKegs", "Rebel05_WaitingShootKegs", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x1E05B / 122971
{
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2208, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_326 + 4080, 3212836864);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2208, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_326 + 4104, 3212836864);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2208, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_326 + 4128, 3212836864);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2208, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4672), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2208, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4680), -1.0f, 1086324736);
	Function_435(&Local_326 + 2208, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_322(&Local_326 + 2208);
	Function_514(&Local_326 + 2208);
	Function_560(&Local_326 + 2208, &Local_326 + 4816, 2);
	Function_560(&Local_326 + 2208, &Local_326 + 4824, 2);
	Function_428(&Local_326 + 2208, &Global_54076, 1);
	return;
}

void Function_564(var uParam0, bool bParam1) //Position: 0x1E17E / 123262
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_ALLOW_SHOOTING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_565(bool bParam0) //Position: 0x1E1CD / 123341
{
	if (bParam0)
	{
		DISABLE_CHILD_SECTOR("esc_villaWall04x");
		ENABLE_CHILD_SECTOR("esc_villaWall05x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("esc_villaWall05x");
		ENABLE_CHILD_SECTOR("esc_villaWall04x");
	}
	return;
}

void Function_566(var uParam0, bool bParam1) //Position: 0x1E233 / 123443
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			RESET_ANIM_SET_FOR_ACTOR(&uVar1, &bParam1);
		}
		bVar0++;
	}
	return;
}

int Function_567(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x1E27A / 123514
{
	if (Function_263(&bParam0) <= bParam1)
	{
		if (&bParam5)
		{
			Function_261();
		}
		if (!Function_138())
		{
			Function_568(&fParam2, &fParam3, &iParam4);
			Function_293(&bParam0);
			return 1;
		}
		Function_266(&bParam0, (bParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_568(char* cParam0, int iParam1, bool bParam2) //Position: 0x1E2C6 / 123590
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_569(&cParam0, iParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_137(&cParam0, iParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_321(&cParam0, iParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&cParam0, iParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_569(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1E32A / 123690
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_570(var uParam0, bool bParam1) //Position: 0x1E3AF / 123823
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_571() //Position: 0x1E3F6 / 123894
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_KegsAreSetUp", "Rebel05_KegsAreSetUp", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_572() //Position: 0x1E447 / 123975
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	bVar1 = false;
	bVar0 = TASK_SEQUENCE_OPEN();
	bVar1 = false;
	while (bVar1 < (GET_NUM_PATH_POINTS(&Local_326 + 4784) - 1))
	{
		GET_PATH_POINT(&Local_326 + 4784, bVar1, &uVar2);
		TASK_GO_TO_COORD(false, &uVar2, 1);
		GET_OBJECT_POSITION(&Local_326 + 4064, &uVar2);
		TASK_FACE_COORD(0, &uVar2, 0);
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(1.0f, 4.0f), 0, 0);
		bVar1++;
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(&bLocal_1579, bVar0, 4294967295);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_573() //Position: 0x1E4B9 / 124089
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_SetUpKegs", "Rebel05_SetUpKegs", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_574() //Position: 0x1E504 / 124164
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_UsePowderKegs", "Rebel05_UsePowderKegs", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_575() //Position: 0x1E557 / 124247
{
	var uVar0;
	
	if (DECOR_CHECK_EXIST(&Local_326 + 1552, "aCarry1"))
	{
		uVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&Local_326 + 1552, "aCarry1"));
	}
	else
	{
		uVar0 = Function_534(&Local_326 + 1552, &Local_326 + 4160, 1);
	}
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
	Function_576(&uVar0, &Local_326 + 4872, &Local_326 + 4064);
	DECOR_SET_OBJECT(&Local_326 + 1552, "aCarry1", &uVar0);
	DECOR_SET_FLOAT(&uLocal_1548, "BarrelTimer", GET_CURRENT_GAME_TIME());
	return;
}

void Function_576(var uParam0, var uParam1, bool bParam2) //Position: 0x1E5F2 / 124402
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam1))
	{
		UNK_0x44986367(&Var2, GET_OBJECT_HEADING(&bParam2));
		VSCALE(&Var2, -3.0f);
		Function_291(&bParam2);
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Function_291(&bParam2), Var2, StackVal);
		RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
		uVar0 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(&uParam1, "multistage_barrel"));
		if (IS_GRINGO_VALID(&uVar0))
		{
			DECOR_SET_OBJECT(&uParam0, "MoveObj_Dest", &bParam2);
			DECOR_SET_BOOL(&uParam0, "MSMove_Run", true);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_USE_GRINGO(false, &uVar0, "UseCase1", true, 4);
			TASK_GO_TO_COORD(false, &Var2, 2);
			TASK_FACE_ACTOR(false, &bLocal_1579, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&uParam0, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
	}
	return;
}

void Function_577(var uParam0, bool bParam1) //Position: 0x1E6C1 / 124609
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	iVar2 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar1), iVar2))
				{
					if (bParam1)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
						}
					}
					SQUAD_LEAVE(&uVar1);
					RELEASE_ACTOR(&uVar1);
				}
				else
				{
					bVar0++;
				}
			}
			else
			{
				SQUAD_LEAVE(&uVar1);
				RELEASE_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_578() //Position: 0x1E75E / 124766
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_Get_On_Gatling", "Rebel05_Get_On_Gatling", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_579(bool bParam0) //Position: 0x1E7B3 / 124851
{
	Function_322(&Local_326 + 1552);
	Function_421(&Local_326 + 1552, 0);
	Function_498(&Local_326 + 1552, 62, 2,5f);
	Function_499(&Local_326 + 1552, 16, 1);
	Function_548("c_shoot_at_gates_2", &Local_326 + 2792, 1);
	Function_548("c_shoot_at_gates_3", &Local_326 + 2792, 3);
	Function_548("c_shoot_at_gates_4", &Local_326 + 2792, 2);
	Function_548("c_shoot_at_gates_5", &Local_326 + 2792, 3);
	Function_548("c_shoot_at_gates_6", &Local_326 + 2792, 3);
	Function_548("c_shoot_at_gates_7", &Local_326 + 2792, 3);
	Function_548("c_shoot_at_gates_8", &Local_326 + 2792, 3);
	Function_548("cover_low98", &Local_326 + 2792, 4);
	Function_548("cover_low97", &Local_326 + 2792, 4);
	Function_548("coverRock_8", &Local_326 + 2792, 4);
	Function_548("cover_low99", &Local_326 + 2792, 4);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, 5, 0, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
	if (&bParam0)
	{
		Function_519(1);
		Function_564(&Local_326 + 1552, 0);
	}
	return;
}

void Function_580() //Position: 0x1E958 / 125272
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	(&Local_326 + 2208) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "Villa_def_1"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "vDef_1", 391, Vector(-4367,182f, 39,15295f, 4362,11f), Vector(0.0f, 95,60054f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2208);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iVar0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	SET_ACTOR_ALLOW_DISARM(&iVar0, false);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "vDef_2", 392, Vector(-4367,28f, 39,18301f, 4360,984f), Vector(0.0f, 99,90157f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2208);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iVar0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	SET_ACTOR_ALLOW_DISARM(&iVar0, false);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "vDef_4", 393, Vector(-4367,496f, 39,18301f, 4359,811f), Vector(0.0f, 99,47277f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 2208);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,001f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iVar0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	SET_ACTOR_ALLOW_DISARM(&iVar0, false);
	return;
}

void Function_581(var uParam0, int iParam1) //Position: 0x1EB78 / 125816
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_582(bool bParam0) //Position: 0x1EBB2 / 125874
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ANIMAL(&uVar1))
			{
				if (!IS_ACTOR_VEHICLE(&uVar1))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_583() //Position: 0x1EBFF / 125951
{
	Function_359(&Local_326 + 720, 391, 2, 0);
	Function_359(&Local_326 + 720, 392, 2, 0);
	Function_359(&Local_326 + 720, 395, 2, 0);
	Function_359(&Local_326 + 720, 393, 2, 0);
	if (Function_388(&Local_326 + 720))
	{
		return 1;
	}
	return 0;
}

void Function_584() //Position: 0x1EC50 / 126032
{
	var uVar0;
	var uVar1;
	bool bVar3;
	
	uVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&Local_326 + 1552, "aCarry1"));
	Function_585(&uVar0, "aCarry1");
	if (Function_589())
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&uVar0)))
		{
			if (DECOR_CHECK_EXIST(&uLocal_1548, "BarrelTimer"))
			{
				DECOR_REMOVE(&uLocal_1548, "BarrelTimer");
			}
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4520), -1.0f, 1086324736);
			GET_VOLUME_CENTER(&Local_326 + 2824, &uVar1);
			bVar3 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &uVar1, 7.0f, 3);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&uVar0, bVar3);
			TASK_SEQUENCE_RELEASE(bVar3, 1);
		}
	}
	return;
}

void Function_585(bool bParam0, int iParam1) //Position: 0x1ED02 / 126210
{
	var uVar0;
	
	if (GET_TASK_STATUS(&bParam0, 19) == 4)
	{
		SQUAD_COMPUTE_CENTROID(&Local_326 + 1552, &uVar0);
		TASK_GO_NEAR_COORD(&bParam0, &uVar0, 8.0f, 4);
		DECOR_REMOVE(&Local_326 + 1552, &iParam1);
		SQUAD_LEAVE(&bParam0);
		RELEASE_ACTOR(&bParam0);
		DECOR_SET_FLOAT(&uLocal_1548, "BarrelTimer", GET_CURRENT_GAME_TIME());
		Function_575();
	}
	else if (DECOR_CHECK_EXIST(&uLocal_1548, "BarrelTimer"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1548, "BarrelTimer")) < 25.0f)
		{
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bParam0)))
			{
				Function_376(&bParam0, &Local_326 + 3736[0], 1, 1, 1);
				DECOR_SET_FLOAT(&uLocal_1548, "BarrelTimer", GET_CURRENT_GAME_TIME());
			}
		}
	}
	return;
}

var Function_586(var uParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x1EDDB / 126427
{
	bool bVar0;
	struct<2> Var1;
	
	*(&Var1 + 12) = Vector(0.0f, 0.0f, 0.0f);
	bVar0 = false;
	if (!IS_OBJECT_VALID(&uParam0))
	{
		bVar0 = true;
	}
	else if (Function_587(&uParam0))
	{
		bVar0 = true;
	}
	if (!DECOR_CHECK_EXIST(&fParam3, "fRespawnTime"))
	{
		if (bVar0)
		{
			Function_291(&bParam1);
			if (!Function_420(StackVal, Function_291(&bParam1), 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_OBJECT_VALID(&uParam0))
				{
					DESTROY_OBJECT(&uParam0);
				}
				DECOR_SET_FLOAT(&fParam3, "fRespawnTime", GET_CURRENT_GAME_TIME());
				Function_291(&bParam1);
				Var1 = Function_291(&bParam1);
				(&Var1 + 12)->f_4 = GET_OBJECT_HEADING(&bParam1);
				uParam0 = CREATE_PROP_IN_LAYOUT(&Local_326, Function_54(), "p_gen_powderKeg01x", Var1, *(&Var1 + 12), true);
			}
			else
			{
				Function_291(&bParam1);
				if (!Function_420(StackVal, Function_291(&bParam1), 0x3f800000, 0x42960000, 1, 1, 0))
				{
					if (IS_OBJECT_VALID(&uParam0))
					{
						DESTROY_OBJECT(&uParam0);
					}
					DECOR_SET_FLOAT(&fParam3, "fRespawnTime", GET_CURRENT_GAME_TIME());
					Function_291(&bParam2);
					Var1 = Function_291(&bParam2);
					(&Var1 + 12)->f_4 = GET_OBJECT_HEADING(&bParam2);
					uParam0 = CREATE_PROP_IN_LAYOUT(&Local_326, Function_54(), "p_gen_powderKeg01x", Var1, *(&Var1 + 12), true);
				}
			}
			Function_575();
			ATTACH_OBJECTS(StackVal, StackVal, &fParam3, &uParam0, "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&fParam3, "fRespawnTime")) < 3.0f)
	{
		DECOR_REMOVE(&fParam3, "fRespawnTime");
	}
	return &uParam0;
}

bool Function_587(int iParam0) //Position: 0x1EF96 / 126870
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(&iParam0, "multistage_barrel"));
	uVar1 = GET_ACTOR_FROM_OBJECT(Function_370(&bVar0, "UseCase1"));
	if (IS_ACTOR_VALID(&uVar1))
	{
		if (GET_CURRENT_GRINGO(&uVar1) == &bVar0)
		{
			return 0;
		}
		if (!GRINGO_IS_CAPABLE_OF_USE(&uVar1, GRINGO_GET_USE_COMPONENT_EXT(&bVar0, "UseCase1")))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_588() //Position: 0x1F009 / 126985
{
	if (!IS_OBJECT_VALID(&Local_326 + 4872))
	{
		if (Function_589())
		{
			return 1;
		}
	}
	return 0;
}

bool Function_589() //Position: 0x1F026 / 127014
{
	Function_291(&Local_326 + 2792);
	Function_291(&bLocal_1982);
	if (VDIST(Function_291(&Local_326 + 2792), Function_291(&bLocal_1982)) > 6.0f)
	{
		if (DECOR_CHECK_EXIST(&uLocal_1548, "BarrelTimer"))
		{
			DECOR_REMOVE(&uLocal_1548, "BarrelTimer");
		}
		return 1;
	}
	return 0;
}

bool Function_590(bool bParam0, var uParam1, float fParam2) //Position: 0x1F076 / 127094
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (Function_540(&uVar1, &uParam1, fParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_591() //Position: 0x1F0DB / 127195
{
	var uVar0;
	
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		Function_454(&bLocal_1748, 60.0f, 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
		if (SQUAD_IS_VALID(&iLocal_1972))
		{
			if (bLocal_1911 > 2)
			{
				uVar0 = Function_523(&Local_326 + 1552, 4, &Local_326 + 3696, 0);
			}
			else
			{
				uVar0 = Function_523(&Local_326 + 1552, 6, &Local_326 + 3696, 0);
			}
			if (IS_ACTOR_VALID(&uVar0))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&uVar0, &Local_326 + 4736, 3, 1, 1, 1, false);
			}
		}
		if (!DECOR_CHECK_EXIST(&Local_326 + 4864, "bSpoke"))
		{
			if (IS_VOLUME_VALID(&Local_326 + 2856))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2856) && IS_ACTOR_IN_VOLUME(&bLocal_1579, &Local_326 + 2856))
				{
					DECOR_SET_BOOL(&Local_326 + 4864, "bSpoke", true);
					Function_620(&bLocal_1579, 4.0f, (1,82f + 1,6f));
					Function_619();
				}
			}
		}
		if (DECOR_CHECK_EXIST(&Local_326 + 1640, "bNeedBlips"))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2856) || Function_618(&Local_326 + 1640) < 0)
			{
				DECOR_REMOVE(&Local_326 + 1640, "bNeedBlips");
				Function_435(&Local_326 + 1640, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			iLocal_1924 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 7, true);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			bLocal_1910 = false;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1584[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_296();
				Function_291(&Local_326 + 3152[0]);
				iLocal_1583 = Function_294(StackVal, Function_291(&Local_326 + 3152[0]), 0, 1, 1);
				Function_376(&Global_54076, &Local_326 + 3152[0], 1, 1, 1);
				Function_376(&bLocal_1579, &Local_326 + 3152[1], 1, 1, 1);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			Function_453(&Local_326 + 1552);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (((Function_292(iLocal_1583) && Function_617()) && Function_358()) || iLocal_1583 != 4294967295))
			{
				if (Function_452())
				{
					Function_451();
					Function_293(&bLocal_1736);
					iLocal_1563 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_336(7, 1, 1);
			TOGGLE_COVER_PROPS(0);
			if (!iLocal_1584[2])
			{
				Function_447();
				Function_511(&Local_326 + 1552, 6, 0x40a00000);
				Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3064[23]), *(&Local_326 + 3064[23] + 12), 5, 3.0f, 1.0f, 0, 0);
				Function_616(&Local_326 + 1552);
				Function_615(&Local_326 + 1552, 46);
			}
			Function_505(&Local_326 + 1552, 0.0f);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_232(&iLocal_1941, 1);
			Function_232(&iLocal_1943, 1);
			CLOSE_DOOR_FAST(&iLocal_1941);
			CLOSE_DOOR_FAST(&iLocal_1943);
			Function_614();
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1640, 0);
			Function_613();
			SQUADS_MERGE(&Local_326 + 1632, &Local_326 + 1640);
			if (IS_BLIP_VALID(&uLocal_1965))
			{
				REMOVE_BLIP(&uLocal_1965);
			}
			Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
			Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_424(&(Local_1810[115]), 42);
			Function_423(&(Local_1810[115]), 3);
			Function_293(&bLocal_1736);
			iLocal_1563 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && Function_263(&bLocal_1736) <= 0.0f)
			{
				Function_443(&Local_326 + 1552, 0);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 9;
			}
			break;
		
		case 0x00000009:
			Function_597();
			if (Function_263(&bLocal_1736) <= 1.0f)
			{
				if (Function_323(&Global_54076, &bLocal_1579, 36.0f))
				{
					Function_596();
				}
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, true);
				Function_595(&Local_326 + 1552, 90.0f);
				if (IS_BLIP_VALID(&uLocal_1965))
				{
					REMOVE_BLIP(&uLocal_1965);
				}
				if (!Function_328(&bLocal_1579, 0x3f800000, 0x42960000, 1, 1, 0) && !Function_323(&bLocal_1579, &Global_54076, 15.0f))
				{
					Function_376(&bLocal_1579, &Local_326 + 3152[1], 1, 1, 1);
				}
				Function_322(&Local_326 + 1552);
				SQUAD_GOALS_CLEAR(&Local_326 + 1552);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1552, 10, &Local_326 + 2856, 4294967295);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 2);
				Function_594();
				TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1579, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4664), -1.0f, 1086324736);
				Function_593(&Local_326 + 1552, &Local_326 + 1640);
				Function_593(&Local_326 + 1640, &Local_326 + 1552);
				Function_293(&bLocal_1736);
				Function_293(&bLocal_1744);
				iLocal_1563 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_597();
			if (Function_263(&bLocal_1736) <= 6.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_obj05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (DECOR_CHECK_EXIST(&Local_326 + 1640, "bNeedBlips"))
				{
					DECOR_REMOVE(&Local_326 + 1640, "bNeedBlips");
					Function_435(&Local_326 + 1640, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				Function_336(7, 0, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			Function_597();
			if (!Function_323(&bLocal_1579, &Global_54076, 60.0f))
			{
				Function_336(7, 1, 1);
			}
			else
			{
				Function_336(7, 0, 1);
			}
			if (iLocal_1563 == 11)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1640) >= 0 && iLocal_1926)
				{
					Function_399(&Local_326 + 1640);
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_1563 = 12;
				}
			}
			if (iLocal_1563 == 12)
			{
				Function_388(&iLocal_1652);
				if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1640) >= 0 && iLocal_1912 <= 2) && iLocal_1926)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_321("Rebel05_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					SQUADS_MERGE(&iLocal_1972, &Local_326 + 1552);
					Function_579(1);
					Function_399(&Local_326 + 1640);
					AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
					Function_336(7, 1, 1);
					iLocal_1924 = 0;
					Function_330(&(Local_1810[115]), 2, 1);
					Function_330(&(Local_1810[115]), 8, 1);
					bLocal_1911 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4768, 4, 0, 0, 1, false);
					TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_326 + 3176[13], 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1911);
					TASK_SEQUENCE_RELEASE(bLocal_1911, 1);
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_511(&Local_326 + 1552, 6, 0x40a00000);
					Function_293(&bLocal_1744);
					Function_293(&bLocal_1736);
					iLocal_1563 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Function_388(&iLocal_1652);
			if (Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3176[13]), 6.0f) && Function_323(&Global_54076, &bLocal_1579, 15.0f))
			{
				if (Function_263(&bLocal_1736) <= 4.0f)
				{
					if (Function_263(&bLocal_1736) <= 8.0f || Function_323(&Global_54076, &bLocal_1579, 15.0f))
					{
						if (Function_388(&iLocal_1652))
						{
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 1);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 13, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_1579, 7, false);
							iLocal_1584[3] = 1;
							Function_293(&bLocal_1736);
							bLocal_1562 = 4;
							iLocal_1563 = 0;
						}
					}
				}
			}
			else if (Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3176[13]), 1.0f))
			{
				if (Function_263(&bLocal_1744) <= 8.0f)
				{
					if (Function_388(&iLocal_1652))
					{
						Function_592();
						SET_ANIM_SET_FOR_ACTOR(&bLocal_1579, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(&bLocal_1579, "stand_ambient/one_hnd");
						Function_472(&bLocal_1579, &Global_54076);
						Function_293(&bLocal_1744);
					}
				}
			}
			break;
	}
	return;
}

void Function_592() //Position: 0x1FA14 / 129556
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_farBehind_mansion", "Rebel05_farBehind_mansion", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_593(var uParam0, bool bParam1) //Position: 0x1FA6F / 129647
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&bParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_IDENTIFY(&uVar2, &uVar3);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_594() //Position: 0x1FB00 / 129792
{
	struct<9> Var0;
	
	bVar4 = false;
	GET_PATH_POINT(&Local_326 + 4736, (GET_NUM_PATH_POINTS(&Local_326 + 4736) - 1), &Var2);
	bVar4 = false;
	while (bVar4 < (SQUAD_GET_SIZE(&Local_326 + 1552) - 1))
	{
		uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1552, bVar4);
		vVar0 = Var2;
		vVar0 = (vVar0.x + RAND_FLOAT_RANGE(-5.0f, 5.0f));
		vVar0.f_8 = (vVar0.z + RAND_FLOAT_RANGE(-5.0f, 5.0f));
		bVar5 = TASK_SEQUENCE_OPEN();
		switch (RAND_INT_RANGE(false, 2))
		{
			case 0x00000000:
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4736, 4, 1, 0, 1, false);
				break;
			
			case 0x00000001:
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4840, 4, 1, 0, 1, false);
				break;
			
			case 0x00000002:
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4832, 4, 1, 0, 1, false);
				break;
		}
		TASK_GO_NEAR_COORD(false, &vVar0, 4.0f, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar6, bVar5);
		TASK_SEQUENCE_RELEASE(bVar5, 1);
		bVar4++;
	}
	return;
}

void Function_595(var uParam0, bool bParam1) //Position: 0x1FBE7 / 130023
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(&uVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&uVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&uVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_596() //Position: 0x1FC48 / 130120
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_marchOnVilla", "Rebel05_marchOnVilla", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_597() //Position: 0x1FC99 / 130201
{
	if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) <= 45.0f && GET_LAST_ATTACK_TIME(&Global_54076) < 0.0f) || (GET_LAST_ATTACK_TIME(&Global_54076) >= 0.0f && Function_263(&bLocal_1744) <= 45.0f))
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_263(&bLocal_1744) <= 8.0f)
			{
				Function_612();
				Function_293(&bLocal_1744);
			}
		}
	}
	else
	{
		Function_543();
	}
	switch (bLocal_1911)
	{
		case 0x00000000:
			Function_505(&Local_326 + 1552, 0.0f);
			Function_520(&Local_326 + 1640, 0,5f);
			Function_499(&Local_326 + 1552, 15, 1);
			iLocal_1972 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "braveMen"));
			iLocal_1912 = 0;
			bLocal_1911 = true;
			break;
		
		case 0x00000001:
			Function_603(&Local_326 + 2408[0]);
			if (DECOR_CHECK_EXIST(&Local_326 + 4864, "bSpoke"))
			{
				if (!DECOR_CHECK_EXIST(&Local_326 + 4864, "bSpoke2"))
				{
					DECOR_SET_BOOL(&Local_326 + 4864, "bSpoke2", true);
					if (!Function_138())
					{
						Function_602();
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2408[0]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1640) >= 2)
			{
				Function_506(&Local_326 + 1552, 0, 0);
				Function_599();
				Function_598("coverRock_1");
				bLocal_1911 = 2;
			}
			break;
		
		case 0x00000002:
			Function_603(&Local_326 + 2408[0]);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_1972) <= 6)
			{
				Function_507(Function_508(&Local_326 + 1552, &Global_54076, 1, 0), &iLocal_1972);
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2408[1]))
			{
				Function_506(&Local_326 + 1552, 1, 0);
				Function_598("coverRock_8");
				bLocal_1911 = 3;
			}
			break;
		
		case 0x00000003:
			Function_603(&Local_326 + 2408[1]);
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2408[2]))
			{
				Function_506(&Local_326 + 1552, 2, 0);
				Function_598("cover_low98");
				bLocal_1911 = 4;
			}
			break;
		
		case 0x00000004:
			Function_603(&Local_326 + 2408[2]);
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2408[3]))
			{
				Function_506(&Local_326 + 1552, 3, 0);
				Function_598("c_shoot_at_gates_7");
				bLocal_1911 = 5;
			}
			break;
		
		case 0x00000005:
			Function_603(&Local_326 + 2408[3]);
			break;
	}
	return;
}

void Function_598(bool bParam0) //Position: 0x1FF17 / 130839
{
	bool bVar0;
	var uVar1;
	
	uVar1 = FIND_OBJECT_IN_LAYOUT(&Local_326, &bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(0, &uVar1, 2.0f, 3, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&uVar1), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bLocal_1579, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_599() //Position: 0x1FF5C / 130908
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = (8 - SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1640));
	if (iVar0 >= 5)
	{
		iVar0 = 5;
	}
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		Function_600();
		iVar1++;
	}
	iLocal_1926 = 1;
	return;
}

void Function_600() //Position: 0x1FF99 / 130969
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	var uVar5;
	
	bVar4 = GET_OBJECT_HEADING(&Local_326 + 3736[0]);
	GET_OBJECT_POSITION(&Local_326 + 3736[0], &Var0);
	GET_OBJECT_AXIS(&Local_326 + 3736[0], &Var2, 2);
	VSCALE(&Var2, RAND_FLOAT_RANGE(2.0f, 5.0f));
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	GET_OBJECT_AXIS(&Local_326 + 3736[0], &Var2, 0);
	VSCALE(&Var2, RAND_FLOAT_RANGE(-2.0f, 2.0f));
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	if (!WOULD_ACTOR_BE_VISIBLE(379, &Var0, 3212836864))
	{
		uVar5 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_326, Function_54(), Function_510(), Var0, Vector(0.0f, bVar4, 0.0f));
		if (RAND_INT_RANGE(false, 10) >= 5)
		{
			GIVE_WEAPON_TO_ACTOR(&uVar5, 13, false, 1, 1);
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(&uVar5, 9, false, 1, 1);
		}
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 28, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 37, 5.0f);
		SET_ACTOR_VISION_MAX_RANGE(&uVar5, 120.0f, 1);
		Function_601(&uVar5, 0);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 49, 1,1f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar5, true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 20, 1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 10, 1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 11, 1.0f);
		ADD_BLIP_FOR_ACTOR(&uVar5, 322, 0, 2, 0);
		SQUAD_JOIN(&uVar5, &Local_326 + 1640);
	}
	else
	{
		LOG_ERROR("spawn point was visible, did not create a guy");
	}
	return;
}

void Function_601(var uParam0, bool bParam1) //Position: 0x20105 / 131333
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_602() //Position: 0x20127 / 131367
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_RemindTakeOutMachGun", "Rebel05_RemindTakeOutMachGun", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_603(int iParam0) //Position: 0x20188 / 131464
{
	Function_611();
	if (IS_ACTOR_VALID(&bLocal_1976))
	{
		if (!DECOR_CHECK_EXIST(&bLocal_1976, "fLastBurst"))
		{
			DECOR_SET_FLOAT(&bLocal_1976, "fLastBurst", 0.0f);
		}
		SET_ACTOR_UPDATE_PRIORITY(&bLocal_1976, false);
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&bLocal_1976)) < 2.0f)
		{
			Function_609();
		}
		if (SQUAD_GET_SIZE(&iLocal_1972) >= 0)
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bLocal_1976, "fLastBurst")) < 8.0f)
			{
				DECOR_SET_FLOAT(&bLocal_1976, "fLastBurst", GET_CURRENT_GAME_TIME());
				Function_606(&bLocal_1976, &iParam0);
			}
		}
		Function_604(&bLocal_1976);
	}
	return;
}

void Function_604(int iParam0) //Position: 0x20239 / 131641
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_605(&Global_54076, &Local_326 + 4864, 0))
		{
			Function_409(&iParam0, 3212836864);
		}
		else if (Function_481(&iParam0, &Local_326 + 4864))
		{
			AI_SET_WEAPON_MAX_RANGE(&iParam0, 130.0f);
			MEMORY_CONSIDER_AS(&iParam0, &bLocal_1579, 2);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 16, true);
			if ((CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(&Global_54076, &iParam0) > 0,1f && !IS_ACTOR_USING_COVER(&Global_54076)) && IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
			{
				TASK_USE_TURRET_AGAINST_OBJECT(&iParam0, &Local_326 + 4864, &Global_54076, -1f);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 200.0f);
				DECOR_SET_BOOL(&iParam0, "bKillTarget", true);
			}
			else if (DECOR_CHECK_EXIST(&iParam0, "bKillTarget"))
			{
				if (GET_TASK_STATUS(&iParam0, 70) == 1)
				{
					TASK_USE_TURRET(&iParam0, &Local_326 + 4864, -1.0f);
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 40.0f);
					DECOR_REMOVE(&iParam0, "bKillTarget");
				}
			}
		}
		else
		{
			TASK_USE_TURRET(&iParam0, &Local_326 + 4864, -1.0f);
		}
	}
	return;
}

bool Function_605(bool bParam0, bool bParam1, float fParam2) //Position: 0x20357 / 131927
{
	var uVar0;
	bool bVar2;
	
	GET_OBJECT_AXIS(&bParam1, &uVar0, 2);
	Function_291(&bParam0);
	Function_291(&bParam1);
	bVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Function_291(&bParam1), Function_291(&bParam0), StackVal);
	VNORMALIZE(&bVar2);
	if (VDOT(&bVar2, &uVar0) <= &fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_606(var uParam0, int iParam1) //Position: 0x2038D / 131981
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	
	bVar2 = false;
	fVar3 = 99999.0f;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(&iLocal_1972) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1972, bVar2);
		Function_274(&bVar1);
		Function_274(&Global_54076);
		if (VDIST(Function_274(&bVar1), Function_274(&Global_54076)) > fVar3)
		{
			if (IS_ACTOR_IN_VOLUME(&bVar1, &iParam1))
			{
				if (IS_ACTOR_ALIVE(&bVar1))
				{
					uVar0 = &bVar1;
				}
			}
		}
		bVar2++;
	}
	if (IS_ACTOR_VALID(&uVar0))
	{
		Function_607(&uVar0, &uParam0, 6.0f, 1, 3.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
		TASK_USE_TURRET_AGAINST_OBJECT(&uParam0, &Local_326 + 4864, &uVar0, 3.0f);
		DECOR_SET_BOOL(&uParam0, "bKillTarget", true);
	}
	return;
}

void Function_607(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4) //Position: 0x20439 / 132153
{
	var uVar0;
	
	uVar0 = Function_608(&uParam0, uParam2);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(&uParam0));
		PRINTSTRING(", shooting from any cover instead.");
		PRINTNL();
		Function_316(&uParam0, &uParam1);
		TASK_PRIORITY_SET(&uParam0, bParam3);
	}
	else
	{
		TASK_SHOOT_FROM_COVER(&uParam0, &uParam1, &uVar0, fParam4, 1086324736);
		TASK_PRIORITY_SET(&uParam0, bParam3);
	}
}

var Function_608(var uParam0, bool bParam1) //Position: 0x204E1 / 132321
{
	int iVar0;
	
	Function_83(&uParam0, &iVar0);
	return FIND_NEAREST_COVER_LOCATION(&iVar0, bParam1, GET_HEADING(&uParam0), 120.0f, 7);
}

void Function_609() //Position: 0x20502 / 132354
{
	bool bVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(&bLocal_1976))
	{
		if (DECOR_CHECK_EXIST(&bLocal_1976, "fLastForceTargetTime"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bLocal_1976, "fLastForceTargetTime")) < 2.0f)
			{
				if (SQUAD_IS_VALID(&iLocal_1972))
				{
					bVar3 = Function_610(&iLocal_1972, &bLocal_1976);
					if (!IS_ACTOR_VALID(&bVar3))
					{
						bVar3 = Function_508(&iLocal_1972, &bLocal_1976, 0, 0);
					}
				}
				bVar4 = Function_610(&Local_326 + 1552, &bLocal_1976);
				if (!IS_ACTOR_VALID(&bVar3))
				{
					bVar4 = Function_508(&Local_326 + 1552, &bLocal_1976, 0, 0);
				}
				Function_274(&bLocal_1976);
				Function_274(&bVar3);
				Function_274(&bLocal_1976);
				Function_274(&bVar4);
				if (VDIST(Function_274(&bLocal_1976), Function_274(&bVar3)) > VDIST(Function_274(&bLocal_1976), Function_274(&bVar4)))
				{
					Function_274(&bVar3);
					Var1 = Function_274(&bVar3);
				}
				else
				{
					Function_274(&bVar4);
					Var1 = Function_274(&bVar4);
				}
				Var1.f_4 = (StackVal + (1,82f + 2.0f));
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_USE_TURRET_AGAINST_COORD(0, &Local_326 + 4864, &Var1, 3.0f);
				TASK_USE_TURRET(0, &Local_326 + 4864, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1976, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				DECOR_SET_FLOAT(&bLocal_1976, "fLastForceTargetTime", GET_CURRENT_GAME_TIME());
			}
		}
		else
		{
			DECOR_SET_FLOAT(&bLocal_1976, "fLastForceTargetTime", GET_CURRENT_GAME_TIME());
		}
	}
	return;
}

var Function_610(var uParam0, bool bParam1) //Position: 0x2067B / 132731
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	fVar3 = 999999,9f;
	bVar5 = 4294967295;
	if (IS_ACTOR_ALIVE(&bParam1))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (!Function_477(&bVar2, 0))
			{
				if (&bParam1 == &Global_54076)
				{
					bVar1 = Function_328(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0);
				}
				else
				{
					bVar1 = MEMORY_GET_IS_VISIBLE(&bParam1, &bVar2);
				}
				if (bVar1)
				{
					fVar4 = Function_445(&bParam1, &bVar2);
					if (fVar4 > fVar3)
					{
						fVar3 = fVar4;
						bVar5 = bVar0;
					}
				}
			}
			bVar0++;
		}
	}
	if (bVar5 <= 0)
	{
		return "";
	}
	return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar5);
}

void Function_611() //Position: 0x20724 / 132900
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	
	GET_OBJECT_POSITION(&Local_326 + 3736[0], &Var0);
	GET_OBJECT_ORIENTATION(&Local_326 + 3736[0], &Var2);
	if (Function_540(&Global_54076, &Local_326 + 4864, 19.0f))
	{
		iLocal_1912 = 2;
	}
	if (!IS_ACTOR_VALID(&bLocal_1976))
	{
		bVar4 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(&Local_326 + 4864, "shootbabyshoot"));
		if (!IS_GRINGO_VALID(&bVar4))
		{
		}
		else if (!Function_481(&Global_54076, &Local_326 + 4864))
		{
			bLocal_1976 = GET_ACTOR_FROM_OBJECT(Function_370(&bVar4, "GatlingShoot"));
			if (&Global_54076 == &bLocal_1976)
			{
				TASK_CLEAR(&Global_54076);
				bLocal_1976 = "";
			}
		}
	}
	if (DECOR_CHECK_EXIST(&Local_326 + 4864, "bNeedGunner"))
	{
		if (iLocal_1912 <= 1)
		{
			if (!WOULD_ACTOR_BE_VISIBLE(391, &Var0, 3212836864))
			{
				DECOR_REMOVE(&Local_326 + 4864, "bNeedGunner");
				bLocal_1976 = CREATE_ACTOR_IN_LAYOUT(&Local_326, Function_54(), Function_510(), Var0, Var2);
				SET_ACTOR_UPDATE_PRIORITY(&bLocal_1976, false);
				SQUAD_JOIN(&bLocal_1976, &Local_326 + 1640);
				TASK_USE_TURRET(&bLocal_1976, &Local_326 + 4864, -1.0f);
				SET_ACTOR_FACTION(&bLocal_1976, 19);
				ADD_BLIP_FOR_ACTOR(&bLocal_1976, 322, 0, 2, 0);
				CLEAR_LAST_ATTACK(&Global_54076);
				iLocal_1912++;
			}
		}
		else if (iLocal_1912 <= 2)
		{
			DECOR_REMOVE(&Local_326 + 4864, "bNeedGunner");
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1640, false, 1, 1);
			TASK_USE_TURRET(0, &Local_326 + 4864, -1.0f);
			iLocal_1912++;
		}
	}
	if (iLocal_1912 <= 2)
	{
		if (GET_LAST_ATTACK_TARGET(&Global_54076) == &bLocal_1976)
		{
			if (IS_ACTOR_VALID(&bLocal_1976))
			{
				if (!IS_ACTOR_ALIVE(&bLocal_1976))
				{
					DECOR_SET_BOOL(&Local_326 + 4864, "bNeedGunner", true);
				}
			}
		}
	}
	return;
}

void Function_612() //Position: 0x2091C / 133404
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_noHelp_mansion", "Rebel05_noHelp_mansion", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_613() //Position: 0x20971 / 133489
{
	bool bVar0;
	var uVar1;
	
	Function_322(&Local_326 + 1640);
	SQUAD_GOALS_CLEAR(&Local_326 + 1640);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1640, 1, &Local_326 + 2824, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1640, 1);
	DECOR_SET_BOOL(&Local_326 + 1640, "bNeedBlips", true);
	bLocal_1976 = Function_534(&Local_326 + 1640, &Local_326 + 4864, 0);
	TASK_USE_TURRET(&bLocal_1976, &Local_326 + 4864, -1f);
	bVar0 = FIND_OBJECT_IN_LAYOUT(&Local_326, "cover_low80");
	Function_291(&bVar0);
	uVar1 = Function_291(&bVar0);
	TASK_GO_TO_COORD(FIND_ACTOR_IN_LAYOUT(&Local_326, "army2_5"), &uVar1, 3);
	bVar0 = FIND_OBJECT_IN_LAYOUT(&Local_326, "cover_low82");
	Function_291(&bVar0);
	uVar1 = Function_291(&bVar0);
	TASK_GO_TO_COORD(FIND_ACTOR_IN_LAYOUT(&Local_326, "army2_6"), &uVar1, 3);
	bVar0 = FIND_OBJECT_IN_LAYOUT(&Local_326, "cover_low84");
	Function_291(&bVar0);
	uVar1 = Function_291(&bVar0);
	TASK_GO_TO_COORD(FIND_ACTOR_IN_LAYOUT(&Local_326, "army2_4"), &uVar1, 3);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1640, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1640) | 2048);
	return;
}

void Function_614() //Position: 0x20AAD / 133805
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	(&Local_326 + 1640) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "S3_army2"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_1", 395, Vector(-4401,414f, 36,32585f, 4378,309f), Vector(0.0f, 165,6054f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_2", 391, Vector(-4399,002f, 35,68593f, 4385,113f), Vector(0.0f, 174,4022f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_3", 380, Vector(-4392,074f, 37,94571f, 4363,923f), Vector(0.0f, 163,0352f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_4", 392, Vector(-4402,721f, 35,60437f, 4385,208f), Vector(0.0f, 172,5814f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 43, 0,999f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_5", 392, Vector(-4399,099f, 35,51807f, 4387,717f), Vector(0.0f, 151,1479f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_6", 391, Vector(-4396,896f, 35,69025f, 4388,384f), Vector(0.0f, 158,2531f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "army2_7", 393, Vector(-4405,594f, 35,4889f, 4385,09f), Vector(0.0f, 180,9841f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_326 + 1640);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iVar0, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, 120.0f, 1);
	Function_601(&iVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 11, 1.0f);
	return;
}

void Function_615(var uParam0, int iParam1) //Position: 0x2100D / 135181
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		ACTOR_PUT_WEAPON_IN_HAND(&uVar1, Function_524(&uVar1, iParam1), 1);
		bVar0++;
	}
	return;
}

void Function_616(bool bParam0) //Position: 0x2104A / 135242
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_LOOK_CLEAR(&uVar1);
		}
		bVar0++;
	}
	return;
}

int Function_617() //Position: 0x21091 / 135313
{
	Function_359(&Local_326 + 632, 395, 2, 0);
	Function_359(&Local_326 + 632, 391, 2, 0);
	Function_359(&Local_326 + 632, 380, 2, 0);
	Function_359(&Local_326 + 632, 392, 2, 0);
	Function_359(&Local_326 + 632, 393, 2, 0);
	if (Function_388(&Local_326 + 632))
	{
		return 1;
	}
	return 0;
}

int Function_618(int iParam0) //Position: 0x210F1 / 135409
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (Function_328(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_619() //Position: 0x21141 / 135489
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_machingunWarning", "Rebel05_machingunWarning", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_620(bool bParam0, float fParam1, float fParam2) //Position: 0x2119A / 135578
{
	bool bVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(&bLocal_1976))
	{
		Function_274(&bParam0);
		Var1 = Function_274(&bParam0);
		Var1.f_4 = (StackVal + &fParam2);
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_USE_TURRET_AGAINST_COORD(0, &Local_326 + 4864, &Var1, uParam1);
		TASK_USE_TURRET(0, &Local_326 + 4864, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_1976, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
	return;
}

void Function_621() //Position: 0x211F1 / 135665
{
	Function_454(&bLocal_1748, 60.0f, 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
	if (!Function_323(&bLocal_1579, &Global_54076, 60.0f))
	{
		Function_336(7, 1, 1);
	}
	else
	{
		Function_336(7, 0, 1);
	}
	Function_543();
	Function_643(&Local_326 + 1552);
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		Function_523(&Local_326 + 1552, 6, &Local_326 + 3656, 1);
		Function_642(&Local_326 + 1632);
		Function_642(&Local_326 + 1552);
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2800) && iLocal_1563 == 106)
		{
			Function_293(&bLocal_1736);
			iLocal_1563 = 106;
		}
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			iLocal_1924 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			Function_300(&Local_326 + 1480, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2328)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2328));
			}
			bLocal_1910 = false;
			bLocal_1911 = false;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			if (iLocal_1584[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
				Function_296();
				iLocal_1583 = Function_294(StackVal, *(&Local_326 + 3064[03]), 0, 1, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3064[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3064[13]), 1, 1, true);
				Function_293(&bLocal_1736);
				iLocal_1563 = 1;
			}
			else
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 2;
			}
			Function_453(&Local_326 + 1552);
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_641()) && Function_358()) && (Function_292(iLocal_1583) || iLocal_1583 != 4294967295))
			{
				if (Function_452())
				{
					Function_451();
					if (!iLocal_1584[1])
					{
						Function_640();
					}
					Function_232(&iLocal_1941, 1);
					Function_232(&iLocal_1943, 1);
					Function_293(&bLocal_1736);
					iLocal_1563 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_290(bLocal_1562);
			Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			TOGGLE_COVER_PROPS(0);
			if (!iLocal_1584[1])
			{
				Function_447();
				Function_511(&Local_326 + 1552, 6, 0x40a00000);
				Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3064[23]), *(&Local_326 + 3064[23] + 12), 4, 2.0f, 1.0f, 0, 0);
				Function_639(&Local_326 + 1552, 4);
				Function_615(&Local_326 + 1552, 46);
				Function_638();
				Function_637();
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1992, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1992) | 2048);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1632, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1632) | 2048);
				Function_291(&Local_326 + 3600[0]);
				TELEPORT_ACTOR_WITH_HEADING(&Local_326 + 1904[02], Function_291(&Local_326 + 3600[0]), GET_OBJECT_HEADING(&Local_326 + 3600[0]), 1, 1, true);
				Function_291(&Local_326 + 3600[1]);
				TELEPORT_ACTOR_WITH_HEADING(&Local_326 + 1904[12], Function_291(&Local_326 + 3600[1]), GET_OBJECT_HEADING(&Local_326 + 3600[1]), 1, 1, true);
				Function_291(&Local_326 + 3600[2]);
				TELEPORT_ACTOR_WITH_HEADING(&Local_326 + 1904[22], Function_291(&Local_326 + 3600[2]), GET_OBJECT_HEADING(&Local_326 + 3600[2]), 1, 1, true);
				Function_291(&Local_326 + 3600[3]);
				TELEPORT_ACTOR_WITH_HEADING(&Local_326 + 1904[32], Function_291(&Local_326 + 3600[3]), GET_OBJECT_HEADING(&Local_326 + 3600[3]), 1, 1, true);
				Function_291(&Local_326 + 3600[4]);
				TELEPORT_ACTOR_WITH_HEADING(&Local_326 + 1904[42], Function_291(&Local_326 + 3600[4]), GET_OBJECT_HEADING(&Local_326 + 3600[4]), 1, 1, true);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
			}
			else
			{
				Function_233(&iLocal_1610);
				Function_248();
				Function_238();
			}
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_635();
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &bLocal_1579, &Local_326 + 3896, -1.0f);
			TASK_PRIORITY_SET(&bLocal_1579, false);
			SQUAD_SET_FACTION(&Local_326 + 1992, 19);
			SQUAD_SET_FACTION(&Local_326 + 1632, 19);
			SQUAD_SET_FACTION(&Local_326 + 1552, 20);
			Function_322(&Local_326 + 1632);
			SQUADS_MERGE(&Local_326 + 1992, &Local_326 + 1632);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1632, 1, &Local_326 + 2808, 4294967295);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Local_326 + 1632, 2, &Local_326 + 2808, 4, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4480), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4472), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4488), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4496), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4504), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4512), -1.0f, 1086324736);
			Function_498(&Local_326 + 1552, 38, -1.0f);
			Function_634(&Local_326 + 1552, &Local_326 + 1632, 1);
			Function_593(&Local_326 + 1552, &Local_326 + 1632);
			Function_435(&Local_326 + 1632, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_435(&Local_326 + 1992, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_336(7, 0, 1);
			Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
			Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_423(&(Local_1810[115]), 3);
			Function_424(&(Local_1810[115]), 42);
			Function_566(&Local_326 + 1552, 1);
			Function_293(&bLocal_1736);
			iLocal_1563 = 6;
			break;
		
		case 0x00000006:
			Function_630();
			if ((Function_263(&bLocal_1736) <= 4.0f || Function_626()) || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_625();
				Function_623(&Local_326 + 1632, 1, 3.0f, 5.0f, 0);
				if (!Function_476(&Local_326 + 1632, &Global_54076, 8.0f, 1))
				{
					Function_622(&Local_326 + 1632, &Global_54076, 2);
				}
				Function_622(&Local_326 + 1632, &bLocal_1579, 2);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_263(&bLocal_1736) <= 7.0f)
			{
				Function_622(&Local_326 + 1632, &Global_54076, 4);
				Function_622(&Local_326 + 1632, &bLocal_1579, 4);
				HUD_CLEAR_OBJECTIVE();
				Function_321("Rebel05_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_293(&bLocal_1736);
				Function_293(&bLocal_1744);
				Function_293(&bLocal_1748);
				iLocal_1563 = 8;
			}
			break;
		
		case 0x00000008:
		case 0x00000009:
			Function_617();
			if (!Function_454(&bLocal_1748, (60.0f * 2.0f), 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1))
			{
				Function_567(&bLocal_1748, 1920.0f, "Rebel05_obj04", 7,5f, 2, 0);
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_1579, 36.0f))
			{
			}
			if (iLocal_1563 == 8)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1632) < 2)
				{
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
					SAY_SINGLE_LINE_SCRIPTED(Function_508(&Local_326 + 1632, &Global_54076, 1, 0), "nLETS_FLEE", 0, 1, 1, 0, 0, 0);
					SQUAD_GOALS_CLEAR(&Local_326 + 1632);
					Function_322(&Local_326 + 1632);
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1632, false)))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1632, false), GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4384), -1.0f, 1086324736);
					}
					Function_293(&bLocal_1736);
					iLocal_1563 = 9;
				}
			}
			if (iLocal_1563 == 9)
			{
				if (Function_263(&bLocal_1736) <= 1.0f)
				{
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1632, true)))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1632, true), GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4376), -1.0f, 1086324736);
					}
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1632, 2)))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1632, 2), GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4392), -1.0f, 1086324736);
					}
					Function_293(&bLocal_1736);
					iLocal_1563 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_1584[2] = 1;
			Function_293(&bLocal_1736);
			bLocal_1562 = 3;
			iLocal_1563 = 0;
			break;
	}
	return;
}

void Function_622(var uParam0, bool bParam1, bool bParam2) //Position: 0x21B5D / 138077
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_623(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x21BA9 / 138153
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar6;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar3))
		{
			GET_POSITION(&bVar3, &uVar4);
			if (IS_OBJECT_VALID(&bParam4))
			{
				Function_291(&bParam4);
				Function_291(&bVar3);
				uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_291(&bVar3), Function_291(&bParam4), StackVal);
				bVar2 = UNK_0x9C40E671(&uVar6);
			}
			else
			{
				bVar2 = Function_624(&bVar3);
			}
			bVar1 = RAND_FLOAT_RANGE(&uParam2, &uParam3);
			PRINTSTRING("SQUAD_SHOOT_ENEMIES_FROM_CURRENT_POSITION_RANDTIME - duration = ");
			PRINTFLOAT(bVar1);
			PRINTNL();
			TASK_SHOOT_ENEMIES_FROM_POSITION(&bVar3, &uVar4, bVar2, bVar1);
			TASK_PRIORITY_SET(&bVar3, bParam1);
		}
		bVar0++;
	}
}

bool Function_624(bool bParam0) //Position: 0x21C8B / 138379
{
	return GET_HEADING(&bParam0);
}

void Function_625() //Position: 0x21C97 / 138391
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_stormBarricade", "Rebel05_stormBarricade", false, 2, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_626() //Position: 0x21CEC / 138476
{
	int iVar0;
	
	iVar0 = (Function_618(&Local_326 + 1992) + Function_618(&Local_326 + 1632));
	if ((((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) > 1.0f && iVar0 < 0) || (Function_629(&Local_326 + 1992, &Global_54076) || Function_629(&Local_326 + 1632, &Global_54076))) || Function_476(&Local_326 + 1632, &Global_54076, 21.0f, 1)) || Function_476(&Local_326 + 1992, &Global_54076, 10.0f, 1)) || Function_627())
	{
		return 1;
	}
	return 0;
}

int Function_627() //Position: 0x21D6D / 138605
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_326 + 1992) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1992, bVar0);
		if (!DECOR_CHECK_EXIST(&bVar1, "fStartAimTime"))
		{
			if (Function_628(&bVar1, 40.0f, 1, 0,12f))
			{
				DECOR_SET_FLOAT(&bVar1, "fStartAimTime", GET_CURRENT_GAME_TIME());
			}
		}
		else if (!Function_628(&bVar1, 40.0f, 1, 0,12f))
		{
			DECOR_REMOVE(&bVar1, "fStartAimTime");
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&bVar1, "fStartAimTime")) < 1,5f)
		{
			SAY_SINGLE_LINE_SCRIPTED(&bVar1, "FIGHT_REBEL", 0, 1, 1, 0, 0, 0);
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_628(bool bParam0, float fParam1, bool bParam2, float fParam3) //Position: 0x21E5C / 138844
{
	if (((CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(&Global_54076, &bParam0) > &fParam3 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && Function_323(&Global_54076, &bParam0, &fParam1)) && (!&bParam2 || MEMORY_GET_IS_VISIBLE(&bParam0, &Global_54076)))
	{
		return 1;
	}
	return 0;
}

int Function_629(var uParam0, int iParam1) //Position: 0x21EA0 / 138912
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_630() //Position: 0x21F12 / 139026
{
	if (!DECOR_CHECK_EXIST(&Local_326 + 2808, "bAttackedEarly"))
	{
		if (Function_626())
		{
			SQUADS_MERGE(&Local_326 + 1992, &Local_326 + 1632);
			Function_633(&Local_326 + 2072);
			Function_633(&Local_326 + 2200);
			if (IS_ACTOR_VALID(&Local_326 + 2000[22]))
			{
				SQUAD_LEAVE(&Local_326 + 2000[22]);
			}
			if (IS_ACTOR_VALID(&Local_326 + 2000[32]))
			{
				SQUAD_LEAVE(&Local_326 + 2000[32]);
			}
			if (IS_ACTOR_VALID(&Local_326 + 2080[62]))
			{
				SQUAD_LEAVE(&Local_326 + 2080[62]);
			}
			if (IS_ACTOR_VALID(&Local_326 + 2080[32]))
			{
				SQUAD_LEAVE(&Local_326 + 2080[32]);
			}
			if (IS_ACTOR_VALID(&Local_326 + 2080[42]))
			{
				SQUAD_LEAVE(&Local_326 + 2080[42]);
			}
			if (IS_ACTOR_VALID(&Local_326 + 2080[52]))
			{
				SQUAD_LEAVE(&Local_326 + 2080[52]);
			}
			Function_632(&Local_326 + 2072, &Local_326 + 1632, 15.0f);
			Function_632(&Local_326 + 2200, &Local_326 + 1632, 15.0f);
			Function_435(&Local_326 + 1632, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_322(&Local_326 + 1632);
			SAY_SINGLE_LINE_SCRIPTED(Function_631(&Local_326 + 1632, 392, 1), "Rebel05_jonAttaksEarly", 0, 1, 0, 0, 0, 0);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_326 + 1632, 1, &Local_326 + 2808, 4294967295);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Local_326 + 1632, 2, &Local_326 + 2808, 4, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4480), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4472), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4488), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4496), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4504), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1632, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4512), -1.0f, 1086324736);
			Function_622(&Local_326 + 1632, &Global_54076, 4);
			Function_622(&Local_326 + 1992, &Global_54076, 4);
			DECOR_SET_BOOL(&Local_326 + 2808, "bAttackedEarly", true);
		}
	}
	return;
}

var Function_631(var uParam0, bool bParam1, bool bParam2) //Position: 0x221C3 / 139715
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_ALIVE(&uVar1) || !&bParam2)
		{
			if (GET_ACTOR_ENUM(&uVar1) == bParam1)
			{
				return &uVar1;
			}
		}
		bVar0++;
	}
	PRINTSTRING("No one in ");
	PRINTSTRING(GET_OBJECT_NAME(&uParam0));
	PRINTSTRING("n matched ");
	PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam1));
	PRINTNL();
	return "";
}

void Function_632(var uParam0, var uParam1, bool bParam2) //Position: 0x2224F / 139855
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = false;
	uVar2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(GET_OBJECT_OWNER(&uParam1), "nTempSquad"));
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (Function_476(&uParam1, &uVar1, bParam2, 1))
		{
			SQUAD_JOIN(&uVar1, &uVar2);
		}
		bVar0++;
	}
	SQUADS_MERGE(&uVar2, &uParam1);
	DESTROY_OBJECT(&uVar2);
	return;
}

void Function_633(int iParam0) //Position: 0x222BE / 139966
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	uVar4 = Vector(-4362,135f, 16,885f, 4567,856f);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FLEE_ACTOR(false, &Global_54076, 20.0f, -1.0f, 0, 0, 0);
	TASK_GO_NEAR_COORD(false, &uVar4, 30.0f, 3);
	TASK_FLEE_ACTOR(false, &Global_54076, 50.0f, -1.0f, 0, 0, 0);
	TASK_SEQUENCE_CLOSE();
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		bVar2 = GET_ACTOR_ENUM(&uVar3);
		if (bVar2 > 379 || bVar2 < 393)
		{
			PRINTSTRING(GET_ACTOR_NAME(&uVar3));
			PRINTSTRING(" is not a soldier, he can run now. Oh, and his enum is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar2));
			PRINTNL();
			RELEASE_ACTOR(&uVar3);
			TASK_SEQUENCE_PERFORM(&uVar3, bVar0);
		}
		else
		{
			PRINTSTRING(GET_ACTOR_NAME(&uVar3));
			PRINTSTRING(" had enum ");
			PRINTINT(bVar2);
			PRINTSTRING(", which is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar2));
			PRINTNL();
		}
		bVar1++;
	}
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_634(var uParam0, var uParam1, bool bParam2) //Position: 0x223EB / 140267
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar2);
		if (IS_ACTOR_VALID(&uVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(&uParam1) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar3);
				if (IS_ACTOR_VALID(&iVar1))
				{
					Function_427(&uVar0, &iVar1, &bParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_635() //Position: 0x22472 / 140402
{
	Function_322(&Local_326 + 1552);
	SQUAD_GOALS_CLEAR(&Local_326 + 1552);
	Function_636(&Local_326 + 1904[02]);
	Function_636(&Local_326 + 1904[12]);
	Function_636(&Local_326 + 1904[22]);
	Function_636(&Local_326 + 1904[32]);
	Function_636(&Local_326 + 1904[42]);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_326 + 1552, 0);
	return;
}

void Function_636(var uParam0) //Position: 0x224D9 / 140505
{
	if (IS_ACTOR_ALIVE(&uParam0))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 0, 2);
		TASK_MELEE_ATTACK(0, &uParam0, -1.0f);
	}
	return;
}

void Function_637() //Position: 0x224FE / 140542
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	(&Local_326 + 1632) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "S3_barricade_army"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "barricade_3", 393, Vector(-4376,519f, 33,91753f, 4421,596f), Vector(0.0f, -87,06939f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1632);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 15, true);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&uVar0, 0);
	Function_601(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	SET_ACTOR_KO_POINTS(&uVar0, (GET_ACTOR_KO_POINTS(&uVar0) / 2.0f));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 54, 0.0f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "barricade_5", 392, Vector(-4374,571f, 33,63927f, 4416,623f), Vector(0.0f, -87,06939f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1632);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 15, true);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&uVar0, 0);
	Function_601(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	SET_ACTOR_KO_POINTS(&uVar0, (GET_ACTOR_KO_POINTS(&uVar0) / 2.0f));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 54, 0.0f);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "barricade_6", 391, Vector(-4377,651f, 33,54067f, 4411,967f), Vector(0.0f, -87,06939f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1632);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar0, 15, true);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uVar0, 1);
	SET_ACTOR_FACTION(&uVar0, 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 37, 5.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&uVar0, 0);
	Function_601(&uVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 49, 1,1f);
	SET_ACTOR_KO_POINTS(&uVar0, (GET_ACTOR_KO_POINTS(&uVar0) / 2.0f));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 54, 0.0f);
	return;
}

void Function_638() //Position: 0x22787 / 141191
{
	*(&Local_326 + 1992) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "nFirstArmy"));
	*(&Local_326 + 1904[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "first_army_1", 392, Vector(-4369,314f, 32,5306f, 4417,521f), Vector(0.0f, 267,9985f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1904[02], &Local_326 + 1992);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1904[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1904[02], 43, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1904[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1904[02], 1);
	SET_ACTOR_FACTION(&Local_326 + 1904[02], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1904[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[02], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[02], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1904[02], 0);
	Function_601(&Local_326 + 1904[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[02], 49, 1,1f);
	SET_ACTOR_KO_POINTS(&Local_326 + 1904[02], (GET_ACTOR_KO_POINTS(&Local_326 + 1904[02]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[02], 54, 0.0f);
	*(&Local_326 + 1904[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "first_army_2", 393, Vector(-4369,099f, 32,59063f, 4419,835f), Vector(0.0f, -86,76568f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1904[12], &Local_326 + 1992);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1904[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1904[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1904[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1904[12], 1);
	SET_ACTOR_FACTION(&Local_326 + 1904[12], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1904[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[12], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[12], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1904[12], 0);
	Function_601(&Local_326 + 1904[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[12], 49, 1,1f);
	SET_ACTOR_KO_POINTS(&Local_326 + 1904[12], (GET_ACTOR_KO_POINTS(&Local_326 + 1904[12]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[12], 54, 0.0f);
	*(&Local_326 + 1904[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "first_army_3", 391, Vector(-4368,98f, 33,20515f, 4421,922f), Vector(0.0f, -86,76568f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1904[22], &Local_326 + 1992);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1904[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1904[22], 43, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1904[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1904[22], 1);
	SET_ACTOR_FACTION(&Local_326 + 1904[22], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1904[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[22], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[22], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1904[22], 0);
	Function_601(&Local_326 + 1904[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[22], 49, 1,1f);
	SET_ACTOR_KO_POINTS(&Local_326 + 1904[22], (GET_ACTOR_KO_POINTS(&Local_326 + 1904[22]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[22], 54, 0.0f);
	*(&Local_326 + 1904[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "first_army_4", 381, Vector(-4369,349f, 32,43634f, 4415,409f), Vector(0.0f, -86,76568f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1904[32], &Local_326 + 1992);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1904[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1904[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1904[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1904[32], 1);
	SET_ACTOR_FACTION(&Local_326 + 1904[32], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1904[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[32], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[32], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1904[32], 0);
	Function_601(&Local_326 + 1904[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[32], 49, 1,1f);
	SET_ACTOR_KO_POINTS(&Local_326 + 1904[32], (GET_ACTOR_KO_POINTS(&Local_326 + 1904[32]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[32], 54, 0.0f);
	*(&Local_326 + 1904[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "first_army_5", 380, Vector(-4369,516f, 31,95818f, 4412,45f), Vector(0.0f, -86,76568f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1904[42], &Local_326 + 1992);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1904[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1904[42], 43, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1904[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1904[42], 1);
	SET_ACTOR_FACTION(&Local_326 + 1904[42], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1904[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[42], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[42], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1904[42], 0);
	Function_601(&Local_326 + 1904[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[42], 49, 1,1f);
	SET_ACTOR_KO_POINTS(&Local_326 + 1904[42], (GET_ACTOR_KO_POINTS(&Local_326 + 1904[42]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1904[42], 54, 0.0f);
	return;
}

void Function_639(var uParam0, bool bParam1) //Position: 0x22D77 / 142711
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				AI_ACTOR_FORCE_SPEED(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_640() //Position: 0x22DC6 / 142790
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &Local_326, "body3", 7,314778E-43f, Vector(-4318,878f, 26,64658f, 4392,053f), Vector(0.0f, 56,31757f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(&uVar0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &Local_326, "body4", 7,2307E-43f, Vector(-4341,715f, 27,06742f, 4404f), Vector(0.0f, -11,31277f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	return;
}

int Function_641() //Position: 0x22E76 / 142966
{
	Function_359(&Local_326 + 512, 393, 2, 0);
	Function_359(&Local_326 + 512, 392, 2, 0);
	Function_359(&Local_326 + 512, 391, 2, 0);
	Function_359(&Local_326 + 512, 381, 2, 0);
	Function_359(&Local_326 + 512, 380, 2, 0);
	Function_359(&Local_326 + 512, 522, 2, 0);
	Function_359(&Local_326 + 512, 516, 2, 0);
	if (Function_388(&Local_326 + 512))
	{
		return 1;
	}
	return 0;
}

void Function_642(int iParam0) //Position: 0x22EF4 / 143092
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (GET_ACTOR_KO_POINTS(&uVar1) >= 0.0f)
		{
			KILL_ACTOR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_643(bool bParam0) //Position: 0x22F32 / 143154
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_GET_SIZE(&bParam0) >= 0)
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_IN_VOLUME(&uVar1, &Local_326 + 2944))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_644() //Position: 0x22F7F / 143231
{
	if (iLocal_1563 < 4 && iLocal_1563 > 105)
	{
		if (iLocal_1563 < 8 && iLocal_1563 >= 11)
		{
			Function_710(&bLocal_1748, 70.0f, 100.0f, &Local_326 + 2264[0], "Rebel05_obj02_return", "Rebel05_obj02_abandon", &bLocal_1577, 0, 0, 0, 4294967295, 1, 0);
		}
		else
		{
			Function_454(&bLocal_1748, 90.0f, 200.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 1);
		}
		Function_709(&Local_326 + 1552);
		Function_705();
		Function_694();
		Function_691();
		Function_678();
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1579, 0.0f);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1579);
			bLocal_1911 = 4294967295;
			bLocal_1910 = false;
			iLocal_1912 = 0;
			iLocal_1924 = 0;
			STOP_FORCE_LOOK_AT_COORD(&bLocal_1579);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			Function_300(&Local_326 + 1480, 1);
			if (!iLocal_1584[0])
			{
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_1914 = 0;
				iLocal_1913 = 0;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_296();
				iLocal_1583 = Function_294(StackVal, *(&Local_326 + 3008[03]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_326 + 3008[03]), 1, 1, true);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3008[13]), 1, 1, true);
			}
			Function_293(&bLocal_1736);
			iLocal_1563 = 1;
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_677()) && Function_358()) && (Function_292(iLocal_1583) || iLocal_1583 != 4294967295))
			{
				if (Function_452())
				{
					if (Function_388(&iLocal_1610))
					{
						Function_451();
						Function_232(&iLocal_1941, 1);
						Function_232(&iLocal_1943, 1);
						if (!iLocal_1584[0])
						{
							Function_640();
							Function_676();
							DESTROY_ACTOR(&Local_326 + 1480[02]);
							DECOR_SET_BOOL(FIND_OBJECT_IN_LAYOUT(&Local_326, "deadMexGirl"), "corpse_loot_gringo", false);
							Function_675();
						}
						if (!SQUAD_IS_VALID(&Local_326 + 1552))
						{
							Function_447();
						}
						Function_671();
						if (!iLocal_1584[0])
						{
							TASK_STAND_STILL(&bLocal_1579, -1.0f, 0, 0);
							GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
							ACTOR_SET_NEXT_WEAPON(&bLocal_1579, GET_WEAPON_EQUIPPED(&bLocal_1579, 5));
							ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1579, 9, 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
						}
						AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
						Function_293(&bLocal_1736);
						iLocal_1563 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_545(&Local_326 + 1552, 1))
			{
				if (Function_545(&Local_326 + 2200, 1))
				{
					TOGGLE_COVER_PROPS(0);
					SET_ACTOR_HEALTH(&bLocal_1579, 400.0f);
					if (IS_BLIP_VALID(&uLocal_1965))
					{
						REMOVE_BLIP(&uLocal_1965);
					}
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
					Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
					Function_329(&(Local_1810[215]), &Local_326 + 1560, "rebel05_rebel", 0, 0x5f5e100, 1);
					Function_424(&(Local_1810[115]), 2);
					Function_424(&(Local_1810[115]), 8);
					Function_424(&(Local_1810[115]), 128);
					Function_424(&(Local_1810[215]), 8);
					Function_424(&(Local_1810[215]), 128);
					Function_290(bLocal_1562);
					Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
					if (!iLocal_1584[0])
					{
						TASK_GO_TO_COORD(&bLocal_1579, &Local_326 + 3008[13], 2);
					}
					Function_293(&bLocal_1736);
					iLocal_1563 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if ((Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) || !iLocal_1584[0])
			{
				if (!HUD_IS_FADING())
				{
					HUD_CLEAR_OBJECTIVE();
					Function_321("Rebel05_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_336(7, 0, 1);
					fLocal_1955 = Function_670(StackVal, StackVal, &Local_326, "jailGateway", *(&Local_326 + 4016), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 2,6f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_293(&bLocal_1736);
					iLocal_1563 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (GATEWAY_UPDATE(&fLocal_1955) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2944))
			{
				Function_669(&fLocal_1955);
				iLocal_1912 = 0;
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_643(&Local_326 + 1560);
			if (Function_647())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Global_99145)
				{
					Function_646();
					Function_638();
					Function_637();
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1992, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1992) | 2048);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1632, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1632) | 2048);
					if (IS_OBJECT_VALID(&fLocal_1955))
					{
						Function_669(&fLocal_1955);
					}
					Function_615(&Local_326 + 1552, 46);
					SQUADS_MERGE(&Local_326 + 1560, &Local_326 + 1552);
					Function_511(&Local_326 + 1552, 7, 10.0f);
					Function_485(&Local_326 + 2072, 0, 0);
					Function_485(&Local_326 + 2200, 0, 0);
					Function_293(&bLocal_1736);
					iLocal_1563 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			Function_643(&Local_326 + 1552);
			if (Function_263(&bLocal_1736) <= 1.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_321("Rebel05_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				bLocal_1911 = 7;
				Function_336(7, 1, 1);
				Function_293(&bLocal_1736);
				iLocal_1563 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_643(&Local_326 + 1552);
			if (Function_323(&bLocal_1579, &Global_54076, 10.0f) || Function_626())
			{
				Function_645(&Local_326 + 2072);
				Function_645(&Local_326 + 2200);
				Function_485(&Local_326 + 2072, 0, 0);
				Function_485(&Local_326 + 2200, 0, 0);
				Function_293(&bLocal_1736);
				iLocal_1563 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_643(&Local_326 + 1552);
			if (Function_626())
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_485(&Local_326 + 2072, 0, 0);
			Function_485(&Local_326 + 2200, 0, 0);
			iLocal_1584[1] = 1;
			Function_453(&Local_326 + 1552);
			Function_293(&bLocal_1736);
			bLocal_1562 = 2;
			iLocal_1563 = 0;
			break;
	}
	return;
}

void Function_645(bool bParam0) //Position: 0x2366A / 145002
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_646() //Position: 0x236B5 / 145077
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_326.f_2264 - 1))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2264[iVar0])))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2264[iVar0]));
		}
		iVar0++;
	}
	return;
}

bool Function_647() //Position: 0x236FC / 145148
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	Function_668();
	Function_667();
	bVar2 = Function_666();
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1624) >= 0)
	{
		if (!DECOR_CHECK_EXIST(&Local_326 + 1624, "nbRaidJail"))
		{
			if (Function_484(StackVal, &Global_54076, *(&Local_326 + 4040), 1,5f))
			{
				Function_322(&Local_326 + 1624);
				SQUAD_GOALS_CLEAR(&Local_326 + 1624);
				Function_665(&Local_326 + 1624, 359.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1624, false, 0, 4294967295);
				TASK_KILL_CHAR(false, &Global_54076);
				DECOR_SET_BOOL(&Local_326 + 1624, "nbRaidJail", true);
			}
		}
	}
	if (!bVar2)
	{
		switch (iLocal_1912)
		{
			case 0x00000000:
				Function_664();
				Function_662();
				OPEN_DOOR_DIRECTION(&uLocal_1951, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1624, false, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
				Function_435(&Local_326 + 1624, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_428(&Local_326 + 1624, &Global_54076, 0);
				Function_581(&Local_326 + 1624, 0);
				iLocal_1912 = 1;
				Function_293(&bLocal_1740);
				Function_293(&bLocal_1736);
				break;
			
			case 0x00000001:
				if (Function_263(&bLocal_1740) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					HUD_CLEAR_OBJECTIVE();
					Function_321("Rebel05_obj02_kill", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1912 = 21;
					Function_293(&bLocal_1740);
				}
				break;
			
			case 0x00000015:
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1624) < 0)
				{
					fLocal_1955 = Function_670(StackVal, StackVal, &Local_326, "jailGateway", *(&Local_326 + 4040), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 1,1f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					HUD_CLEAR_OBJECTIVE();
					Function_321("rebel05_obj02_find", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_399(&Local_326 + 1624);
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_1912 = 2;
					Function_293(&bLocal_1740);
				}
				break;
			
			case 0x00000002:
				if (GATEWAY_UPDATE(&fLocal_1955) || Function_661())
				{
					Function_669(&fLocal_1955);
					Function_660();
					Function_322(&Local_326 + 1560);
					SQUAD_GOALS_CLEAR(&Local_326 + 1560);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1560, false, 0, 4294967295);
					TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
					SQUAD_SET_FACTION(&Local_326 + 1560, 20);
					Function_659();
					iLocal_1912 = 3;
					Function_293(&bLocal_1740);
				}
				break;
			
			case 0x00000003:
				if (!bVar2)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_263(&bLocal_1740) <= 6.0f)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_321("rebel05_obj_shootLocks", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_658();
						iLocal_1912 = 4;
						Function_293(&bLocal_1740);
					}
				}
				break;
			
			case 0x00000004:
				if (!bVar2)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2328))
					{
						if (Function_263(&bLocal_1740) <= 8.0f)
						{
							if (!Function_661())
							{
								Function_657();
							}
							iLocal_1912 = 5;
							Function_293(&bLocal_1740);
						}
					}
					else if (Function_263(&bLocal_1740) <= 8.0f)
					{
						Function_656();
						Function_293(&bLocal_1740);
					}
				}
				break;
			
			case 0x00000005:
				if (!bVar2)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2328))
					{
						if (Function_263(&bLocal_1740) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!Function_661())
							{
								Function_137("Rebel05_jail_3", 6.0f, 1, 0, 2, 1, 0);
							}
							iLocal_1912 = 6;
							Function_293(&bLocal_1740);
						}
					}
					else if (Function_263(&bLocal_1740) <= 8.0f)
					{
						Function_656();
						Function_293(&bLocal_1740);
					}
				}
				break;
			
			case 0x00000006:
				if (Function_263(&bLocal_1740) <= 8.0f)
				{
					Function_293(&bLocal_1740);
				}
				break;
			}
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_326 + 1560) - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, bVar0);
		if (IS_ACTOR_ALIVE(&uVar3))
		{
			bVar1 = DECOR_GET_INT(&uVar3, "prisonerNum");
			if (!DECOR_CHECK_EXIST(&uVar3, "freed"))
			{
				Function_651(&uVar3, bVar1);
			}
		}
		bVar0++;
	}
	if (!bVar2)
	{
		Function_648();
	}
	return bVar2;
}

void Function_648() //Position: 0x23B6B / 146283
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	uVar3 = CREATE_OBJECT_ITERATOR(&uLocal_1548);
	ITERATE_IN_LAYOUT(&uVar3, GET_EVENT_LAYOUT());
	uVar4 = START_OBJECT_ITERATOR(&uVar3);
	if (IS_OBJECT_VALID(&uVar4))
	{
		while (IS_OBJECT_VALID(&uVar4))
		{
			uVar5 = GET_EVENT_FROM_OBJECT(&uVar4);
			if (IS_EVENT_VALID(&uVar5))
			{
				switch (GET_EVENT_TYPE(&uVar5))
				{
					case 0x00000005:
						iVar0 = 0;
						while (iVar0 < (Local_326.f_2264 - 1))
						{
							if (IS_OBJECT_IN_VOLUME(GET_OBJECT_FROM_EVENT(&uVar5), &Local_326 + 2264[iVar0]))
							{
								if (Function_650(GET_WEAPON_IN_HAND(&Global_54076)))
								{
									DECOR_SET_BOOL(&Local_326 + 2264[iVar0], "unlocked", true);
									Function_206(&(iLocal_1933[iVar0]), 1);
									if (DECOR_CHECK_EXIST(&Local_326 + 1560, "bJohnSpeakOnFree"))
									{
										DECOR_REMOVE(&Local_326 + 1560, "bJohnSpeakOnFree");
										Function_649();
									}
									Function_291(&Local_326 + 2264[iVar0]);
									Var1 = Function_291(&Local_326 + 2264[iVar0]);
									PLAY_SOUND_FROM_POSITION("REBEL_05_JAIL_LOCK_BREAK_MASTER", Var1);
									if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_326 + 2264[iVar0])))
									{
										REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_326 + 2264[iVar0]));
									}
								}
							}
							iVar0++;
						}
						break;
					}
			}
			uVar4 = OBJECT_ITERATOR_NEXT(&uVar3);
		}
	}
	DESTROY_ITERATOR(&uVar3);
	return;
}

void Function_649() //Position: 0x23CDE / 146654
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_freesPrisoner", "Rebel05_freesPrisoner", false, 1, 1, 0, 1);
		Function_310(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_650(bool bParam0) //Position: 0x23D31 / 146737
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

void Function_651(var uParam0, int iParam1) //Position: 0x23D77 / 146807
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_326 + 1624) < 0)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "freed"))
		{
			if (DECOR_CHECK_EXIST(&Local_326 + 2264[(iParam1 - 1)], "unlocked") || IS_DOOR_OPENED(&(iLocal_1933[(iParam1 - 1)])))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
				}
				if (DECOR_CHECK_EXIST(&uParam0, "bSpeakWhenFree"))
				{
					DECOR_REMOVE(&uParam0, "bSpeakWhenFree");
					if (&uParam0 == FIND_ACTOR_IN_LAYOUT(&Local_326, "S3_prisoner_3"))
					{
						Function_655();
					}
					else
					{
						SAY_SINGLE_LINE_SCRIPTED(&uParam0, "nTHANK_YOU", &Global_54076, 1, 1, 0, 0, 0);
					}
				}
				RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
				Function_206(&(iLocal_1933[(iParam1 - 1)]), 0);
				Function_654(&uParam0, (iParam1 - 1), 0);
				Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4720, 2.0f, 1.0f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
				Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4712, 1,4f, 1.0f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
				Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4704, 3.0f, 1.0f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
				Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4696, 1.0f, 1.0f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
				Function_652(&Local_326 + 1552, 8, "FASTWALK");
				SET_ACTOR_FACTION(&uParam0, 20);
				DECOR_SET_BOOL(&uParam0, "freed", true);
			}
		}
	}
	return;
}

void Function_652(var uParam0, int iParam1, bool bParam2) //Position: 0x23F2D / 147245
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1, &bParam2);
		bVar0++;
	}
	return;
}

void Function_653(var uParam0, bool bParam1, var uParam2, float fParam3, float fParam4, int iParam5) //Position: 0x23F5F / 147295
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = fParam4;
	if (iParam5 <= 0)
	{
		iParam5 = SQUAD_GET_SIZE(&uParam0);
	}
	iVar0 = 0;
	while (iVar0 < (iParam5 - 1))
	{
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bParam1, &uParam2, bVar2, 1, 0);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, false, 0, 1);
		TASK_SEQUENCE_PERFORM(false, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		bVar2 = (bVar2 + fParam3);
		iVar0++;
	}
}

void Function_654(float fParam0, int iParam1, float fParam2) //Position: 0x23FCB / 147403
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	var uVar11;
	struct<2> Var13;
	struct<2> Var15;
	var uVar17;
	var uVar19;
	
	uVar19 = Vector(0.0f, 1.0f, 0.0f);
	Var15 = Var15;
	fParam2 = &fParam2;
	Function_291(&(iLocal_1933[iParam1]));
	Var3 = Function_291(&(iLocal_1933[iParam1]));
	Function_291(&Local_326 + 2264[iParam1]);
	Var5 = Function_291(&Local_326 + 2264[iParam1]);
	Var5.f_4 = StackVal;
	bVar2 = VDIST(Var5, Var3);
	PRINTSTRING("door width = ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	Function_475(StackVal, StackVal, Var5, Var3, (bVar2 / 2.0f));
	Var9 = Function_475(StackVal, StackVal, Var5, Var3, (bVar2 / 2.0f));
	PRINTSTRING("middle point = ");
	PRINTVECTOR(Var9);
	PRINTNL();
	uVar11 = Vector(StackVal, StackVal, StackVal) - Vector(Var3, Var5, StackVal);
	VCROSS(&uVar11, &uVar19, &Var7);
	PRINTSTRING("v cross = ");
	PRINTVECTOR(Var7);
	PRINTNL();
	if (iParam1 == 0)
	{
		VSCALE(&Var7, 1,5f);
	}
	else
	{
		VSCALE(&Var7, -1,5f);
	}
	Var13 = Var9;
	Var13 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var13, StackVal);
	PRINTSTRING("Go to inside = ");
	PRINTVECTOR(Var13);
	PRINTNL();
	VSCALE(&Var7, -0,8f);
	Var15 = Var9;
	Var15 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var15, StackVal);
	if (DECOR_CHECK_EXIST(&fParam0, "fMoveDelay"))
	{
		bVar1 = DECOR_GET_FLOAT(&fParam0, "fMoveDelay");
	}
	else
	{
		bVar1 = 0.0f;
	}
	uVar17 = Vector(-4341,96f, 30,118f, 4386,229f);
	if (iParam1 == 2)
	{
		Var15 = Vector(-4355,552f, 30,109f, 4373,236f);
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bVar1, 0, 0);
	TASK_GO_TO_COORD_NONSTOP(0, &Var15, 2, 1,2f);
	TASK_GO_TO_COORD_NONSTOP(0, &uVar17, 2, 3212836864);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4744, 4, 0, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&fParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&fParam0, 3.0f);
	return;
}

void Function_655() //Position: 0x241AA / 147882
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_thanksJon", "Rebel05_thanksJon", false, 3, 1, 0, 1);
		Function_310(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_656() //Position: 0x241F6 / 147958
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_leavesJail_noHelp", "Rebel05_leavesJail_noHelp", false, 2, 1, 0, 1);
		Function_310(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_657() //Position: 0x24252 / 148050
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_shootLocks", "Rebel05_shootLocks", false, 3, 1, 0, 1);
		Function_310(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_658() //Position: 0x242A0 / 148128
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_326.f_2264 - 1))
	{
		if (!DECOR_CHECK_EXIST(&Local_326 + 2264[iVar0], "unlocked"))
		{
			uVar1 = ADD_BLIP_FOR_OBJECT(&Local_326 + 2264[iVar0], 322, 0f, 2, 0);
			SET_BLIP_NAME(&uVar1, "rebel05_JailLockBlip");
			SET_BLIP_PRIORITY(&uVar1, 3);
			SET_BLIP_SCALE(&uVar1, 0,5f);
		}
		iVar0++;
	}
	return;
}

void Function_659() //Position: 0x24325 / 148261
{
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, false), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, false), "crowd_cheer/random_loop");
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, true), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, true), "crowd_cheer/random_loop");
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, 2), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, 2), "crowd_cheer/random_loop");
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, 3), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1560, 3), "crowd_cheer/random_loop");
	return;
}

void Function_660() //Position: 0x24447 / 148551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_reachesJailCells", "Rebel05_reachesJailCells", false, 2, 1, 0, 1);
		Function_310(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_661() //Position: 0x244A1 / 148641
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_1933 - 1))
	{
		if (!IS_DOOR_LOCKED(&(iLocal_1933[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_662() //Position: 0x244D2 / 148690
{
	Function_663(&Local_326 + 1568[02], &Local_326 + 4176);
	SET_CRIPPLE_ENABLE(&Local_326 + 1568[02], 0);
	Function_663(&Local_326 + 1568[22], &Local_326 + 4184);
	SET_CRIPPLE_ENABLE(&Local_326 + 1568[22], 0);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_326 + 1568[12], GET_COVER_LOCATION_FROM_OBJECT(&Local_326 + 4688), 12.0f, 3.0f);
	SET_CRIPPLE_ENABLE(&Local_326 + 1568[12], 0);
	return;
}

void Function_663(var uParam0, var uParam1) //Position: 0x24547 / 148807
{
	var uVar0;
	bool bVar2;
	bool bVar3;
	
	GET_OBJECT_POSITION(&uParam1, &uVar0);
	bVar2 = GET_OBJECT_HEADING(&uParam1);
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(0, &Local_326 + 4240, 1,5f, 4, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &uVar0, bVar2, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	AI_ACTOR_FORCE_SPEED(&uParam0, 4);
	return;
}

void Function_664() //Position: 0x24597 / 148887
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(8, "Rebel05_spotsJonJail", "Rebel05_spotsJonJail", false, 3, 1, 0, 1);
		Function_310(257);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_665(var uParam0, bool bParam1) //Position: 0x245EB / 148971
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

int Function_666() //Position: 0x24630 / 149040
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_1933 - 1))
	{
		if (IS_DOOR_LOCKED(&(iLocal_1933[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_667() //Position: 0x24660 / 149088
{
	return;
}

void Function_668() //Position: 0x24666 / 149094
{
	return;
}

void Function_669(float fParam0) //Position: 0x2466C / 149100
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		if (DECOR_CHECK_EXIST(&fParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&fParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&fParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&fParam0, "voldestroy"))
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
		DESTROY_OBJECT(&fParam0);
	}
	return;
}

var Function_670(int iParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x24702 / 149250
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&iParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &iParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_671() //Position: 0x247ED / 149485
{
	bool bVar0;
	
	bVar0 = false;
	if (!DECOR_CHECK_EXIST(&Local_326 + 2328, "JailIsSetUp"))
	{
		Function_674();
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1624, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 1624) | 2048);
		if (!SQUAD_IS_VALID(&Local_326 + 1560))
		{
			Function_672();
			DECOR_SET_BOOL(&Local_326 + 1560, "bJohnSpeakOnFree", true);
		}
		TASK_STAND_STILL(FIND_ACTOR_IN_LAYOUT(&Local_326, "s3_prisoner_7"), -1.0f, 0, 0);
		PRINTSTRING("here's how many free guys we have: ");
		PRINTINT(bVar0);
		PRINTNL();
	}
	return;
}

void Function_672() //Position: 0x248AB / 149675
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&Local_326 + 1560) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "S3_prisoners"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "S3_prisoner_1", 522, Vector(-4354,345f, 30,15904f, 4383,118f), Vector(0.0f, 2,903168f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1560);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	DECOR_SET_INT(&uVar0, "prisonerNum", true);
	SET_ACTOR_FACE_STYLE(&uVar0, 0);
	DECOR_SET_BOOL(&uVar0, "bSpeakWhenFree", true);
	DECOR_SET_FLOAT(&uVar0, "fMoveDelay", 0,5f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uVar0, 21);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&uVar0, false);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "S3_prisoner_2", 521, Vector(-4358,325f, 30,15904f, 4379,042f), Vector(0.0f, -79,34436f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1560);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	DECOR_SET_INT(&uVar0, "prisonerNum", 2);
	SET_ACTOR_FACE_STYLE(&uVar0, 0);
	DECOR_SET_BOOL(&uVar0, "bSpeakWhenFree", true);
	DECOR_SET_FLOAT(&uVar0, "fMoveDelay", 0,5f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uVar0, 21);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&uVar0, false);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "S3_prisoner_3", 523, Vector(-4358,842f, 30,15904f, 4375,452f), Vector(0.0f, -66,61405f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1560);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	DECOR_SET_INT(&uVar0, "prisonerNum", 3);
	SET_ACTOR_FACE_STYLE(&uVar0, 0);
	DECOR_SET_BOOL(&uVar0, "bSpeakWhenFree", true);
	DECOR_SET_FLOAT(&uVar0, "fMoveDelay", 0,5f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uVar0, 21);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&uVar0, false);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "S3_prisoner_5", 291, Vector(-4355,991f, 30,07841f, 4383,64f), Vector(0.0f, -11,49477f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_326 + 1560);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	DECOR_SET_INT(&uVar0, "prisonerNum", true);
	DECOR_SET_FLOAT(&uVar0, "fMoveDelay", 3,6f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uVar0, 21);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&uVar0, false);
	Function_673(&uVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uVar0, 0);
	return;
}

void Function_673(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x24C45 / 150597
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &iParam4);
	}
}

void Function_674() //Position: 0x24C8F / 150671
{
	*(&Local_326 + 1624) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "S3_JailGuards"));
	*(&Local_326 + 1568[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "guard_1", 392, Vector(-4353,203f, 30,15904f, 4371,719f), Vector(0.0f, -79,94733f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1568[02], &Local_326 + 1624);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1568[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1568[02], 43, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1568[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1568[02], 1);
	SET_ACTOR_FACTION(&Local_326 + 1568[02], 19);
	Function_601(&Local_326 + 1568[02], 0);
	UNK_0x2E84E682(&Local_326 + 1568[02], 0);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1568[02], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_326 + 1568[02], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_326 + 1568[02], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1568[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1568[02], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1568[02], 49, 1,2f);
	*(&Local_326 + 1568[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "guard_2", 393, Vector(-4351,885f, 30,159f, 4371,645f), Vector(0.0f, -87,11882f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1568[12], &Local_326 + 1624);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1568[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1568[12], 40, 0,999f, 1, 1);
	AI_SET_NAV_ACTOR_WIDTH(&Local_326 + 1568[12], 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_326 + 1568[12], 9, true);
	TASK_STAND_STILL(&Local_326 + 1568[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1568[12], 1);
	SET_ACTOR_FACTION(&Local_326 + 1568[12], 19);
	Function_601(&Local_326 + 1568[12], 0);
	UNK_0x2E84E682(&Local_326 + 1568[12], 0);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1568[12], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_326 + 1568[12], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_326 + 1568[12], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1568[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1568[12], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1568[12], 49, 1,2f);
	*(&Local_326 + 1568[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "guard_3", 391, Vector(-4358,868f, 30,15904f, 4372,481f), Vector(0.0f, -84,9035f, 0.0f));
	SQUAD_JOIN(&Local_326 + 1568[22], &Local_326 + 1624);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1568[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1568[22], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_326 + 1568[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_326 + 1568[22], 1);
	SET_ACTOR_FACTION(&Local_326 + 1568[22], 19);
	Function_601(&Local_326 + 1568[22], 0);
	UNK_0x2E84E682(&Local_326 + 1568[22], 0);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 1568[22], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_326 + 1568[22], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_326 + 1568[22], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 1568[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1568[22], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 1568[22], 49, 1,2f);
	return;
}

void Function_675() //Position: 0x2500E / 151566
{
	*(&Local_326 + 2200) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "firingSquadGuys"));
	*(&Local_326 + 2080[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_Soldier_2", 391, Vector(-4320,197f, 26,91155f, 4396,599f), Vector(0.0f, 44,885f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[02], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 2080[02], 40, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 2080[02], 0);
	TASK_STAND_STILL(&Local_326 + 2080[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[02], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[02], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[02], 100.0f);
	*(&Local_326 + 2080[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_Soldier_4", 379, Vector(-4322,2f, 26,64369f, 4396,806f), Vector(0.0f, 162,7994f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[12], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 2080[12], 41, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 2080[12], 0);
	TASK_STAND_STILL(&Local_326 + 2080[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[12], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[12], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[12], 100.0f);
	*(&Local_326 + 2080[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_Soldier_5", 393, Vector(-4325,233f, 26,72843f, 4395,164f), Vector(0.0f, 169,0693f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[22], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 2080[22], 42, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 2080[22], 0);
	TASK_STAND_STILL(&Local_326 + 2080[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[22], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[22], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[22], 100.0f);
	*(&Local_326 + 2080[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_shopGuy_1", 291, Vector(-4321,068f, 26,91155f, 4396,1f), Vector(0.0f, 56,30297f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[32], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[32]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 2080[32], 5.0f);
	MEMORY_CONSIDER_AS(&Local_326 + 2080[32], &Global_54076, false);
	TASK_STAND_STILL(&Local_326 + 2080[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[32], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[32], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[32], 100.0f);
	*(&Local_326 + 2080[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_shopGuy_2", 285, Vector(-4323,464f, 26,80634f, 4398,853f), Vector(0.0f, 170,0339f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[42], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[42]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 2080[42], 5.0f);
	MEMORY_CONSIDER_AS(&Local_326 + 2080[42], &Global_54076, false);
	TASK_STAND_STILL(&Local_326 + 2080[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[42], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[42], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[42], 100.0f);
	*(&Local_326 + 2080[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_shopGuy_3", 516, Vector(-4326,145f, 26,756f, 4398,292f), Vector(0.0f, 170,0339f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[52], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[52]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_326 + 2080[52], 5.0f);
	MEMORY_CONSIDER_AS(&Local_326 + 2080[52], &Global_54076, false);
	TASK_STAND_STILL(&Local_326 + 2080[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[52], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[52], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[52], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[52], 100.0f);
	*(&Local_326 + 2080[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "fs_woman", 238, Vector(-4326,584f, 26,47878f, 4395,535f), Vector(0.0f, -136,7345f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2080[62], &Local_326 + 2200);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2080[62]);
	MEMORY_CONSIDER_AS(&Local_326 + 2080[62], &Global_54076, false);
	DECOR_SET_BOOL(&Local_326 + 2080[62], "bIgnoreLOSCheck", true);
	TASK_STAND_STILL(&Local_326 + 2080[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2080[62], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2080[62], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2080[62], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_326 + 2080[62], 100.0f);
	return;
}

void Function_676() //Position: 0x255E5 / 153061
{
	*(&Local_326 + 1480[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "S1_Captain", 394, Vector(-4295,973f, 22,00519f, 4410,597f), Vector(0.0f, -32,87418f, 0.0f));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1480[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1480[02], 40, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_326 + 1480[02], 19);
	SET_ACTOR_FACE_STYLE(&Local_326 + 1480[02], 2);
	SET_ACTOR_PERMANENT(&Local_326 + 1480[02], 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&Local_326 + 1480[02], false);
	TASK_STAND_STILL(&Local_326 + 1480[02], -1.0f, 0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &Local_326, "S1_Soldier1", 5,479077E-43f, Vector(-4297,379f, 22,05748f, 4410,575f), Vector(0.0f, -0,16917f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1480[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1480[12], 43, 0,5f, 1, 1);
	SET_CORPSE_PERMANENT(&Local_326 + 1480[12], 1);
	TASK_STAND_STILL(&Local_326 + 1480[12], -1.0f, 0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &Local_326, "S1_Soldier2", 5,49309E-43f, Vector(-4298,153f, 22,05748f, 4407,587f), Vector(0.0f, -64,50484f, 0.0f), "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1480[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 1480[22], 41, 0,5f, 1, 1);
	SET_CORPSE_PERMANENT(&Local_326 + 1480[22], 1);
	TASK_STAND_STILL(&Local_326 + 1480[22], -1.0f, 0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, StackVal, &Local_326, "deadMexGirl", 7,777206E-43f, Vector(-4298,541f, 22,5898f, 4405,096f), Vector(0.0f, 208,0209f, 0.0f), "dead_ground_female");
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 1480[32]);
	SET_CORPSE_PERMANENT(&Local_326 + 1480[32], 1);
	TASK_STAND_STILL(&Local_326 + 1480[32], -1.0f, 0, 0);
	return;
}

int Function_677() //Position: 0x2580B / 153611
{
	Function_359(&Local_326 + 264, 394, 2, 0);
	Function_359(&Local_326 + 264, 391, 2, 0);
	Function_359(&Local_326 + 264, 392, 2, 0);
	Function_359(&Local_326 + 264, 555, 2, 0);
	Function_359(&Local_326 + 264, 522, 2, 0);
	Function_359(&Local_326 + 264, 521, 2, 0);
	Function_359(&Local_326 + 264, 523, 2, 0);
	Function_359(&Local_326 + 264, 291, 2, 0);
	Function_359(&Local_326 + 264, 393, 2, 0);
	Function_359(&Local_326 + 264, 381, 2, 0);
	Function_359(&Local_326 + 264, 380, 2, 0);
	Function_359(&Local_326 + 264, 238, 2, 0);
	Function_359(&Local_326 + 264, 285, 2, 0);
	Function_359(&Local_326 + 264, 379, 2, 0);
	Function_359(&Local_326 + 264, 516, 2, 0);
	if (Function_388(&Local_326 + 264))
	{
		return 1;
	}
	return 0;
}

void Function_678() //Position: 0x25900 / 153856
{
	switch (bLocal_1911)
	{
		case 0x00000000:
			if (Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3008[13]), 1.0f))
			{
				SET_ACTOR_HEADING(StackVal, &bLocal_1579, 1);
				Function_690();
				GIVE_WEAPON_TO_ACTOR(&bLocal_1579, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1579, 0);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1579, 9, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1579, "rifle_waving", 0);
				Function_293(&bLocal_1744);
				Function_293(&bLocal_1736);
				bLocal_1911 = true;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1579, "rifle_waving"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1579, "rifle_waving");
			}
			if (GET_WEAPON_IN_HAND(&bLocal_1579) != 9)
			{
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1579, 9, 0);
			}
			if (Function_323(&Global_54076, &bLocal_1579, 25.0f))
			{
				if (Function_263(&bLocal_1752) <= 4.0f)
				{
					Function_690();
					Function_293(&bLocal_1752);
					bLocal_1911 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_1579, "rifle_waving"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1579, "rifle_waving");
			}
			if (Function_263(&bLocal_1752) <= 3.0f)
			{
				if (Function_323(&Global_54076, &bLocal_1579, 40.0f))
				{
					if (!IS_SCRIPTED_SPEECH_PLAYING(&bLocal_1579))
					{
						Function_689();
						Function_293(&bLocal_1752);
						bLocal_1911 = true;
					}
				}
			}
			break;
		
		case 0x00000007:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3872), 1, 1, true);
			Function_444(StackVal, StackVal, &Local_326 + 1552, *(&Local_326 + 3872), *(&Local_326 + 3872 + 12), 4, 1.0f, 1.0f, 1, 20.0f);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1579, 1);
			SQUAD_GOALS_CLEAR(&Local_326 + 1552);
			bLocal_1911 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_1579, &Local_326 + 4720, 1, 1, 1, 1, false);
			TASK_ACTION_PERFORM(false, "rifle_waving");
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1911);
			TASK_SEQUENCE_RELEASE(bLocal_1911, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_1579, "rifle_waving", 0);
			Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4720, 3.0f, 1,2f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
			Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4712, 3.0f, 1,4f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
			Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4704, 3.0f, 2,1f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
			Function_653(&Local_326 + 1552, &bLocal_1579, &Local_326 + 4696, 3.0f, 1.0f, (SQUAD_GET_SIZE(&Local_326 + 1552) / 4));
			Function_293(&bLocal_1736);
			bLocal_1911 = 8;
			break;
		
		case 0x00000008:
			Function_685(&Local_326 + 1552, 0x3fc00000, 0x40800000);
			Function_685(&Local_326 + 1992, 0x3fc00000, 0x40800000);
			if (Function_484(StackVal, &bLocal_1579, *(&Local_326 + 3064[13]), 15.0f))
			{
				Function_683(&Local_326 + 1992);
				Function_293(&bLocal_1736);
				bLocal_1911 = 9;
			}
			break;
		
		case 0x00000009:
			Function_685(&Local_326 + 1552, 0x3fc00000, 0x40800000);
			Function_685(&Local_326 + 1992, 0x3fc00000, 0x40800000);
			if (Function_323(&Global_54076, &bLocal_1579, 30.0f))
			{
				Function_616(&Local_326 + 1552);
				if (Function_323(&Global_54076, &bLocal_1579, 30.0f))
				{
					Function_682();
					Function_293(&bLocal_1736);
					bLocal_1911 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_685(&Local_326 + 1552, 0x3fc00000, 0x40800000);
			Function_685(&Local_326 + 1992, 0x3fc00000, 0x40800000);
			if (((!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_263(&bLocal_1736) <= 7.0f) || Function_476(&Local_326 + 1552, &Global_54076, 16.0f, 1)) || Function_476(&Local_326 + 1992, &Global_54076, 16.0f, 1))
			{
				if (Function_323(&Global_54076, &bLocal_1579, 30.0f))
				{
					Function_681();
					Function_680();
					Function_679(&Local_326 + 1552);
					Function_293(&bLocal_1736);
					bLocal_1911 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			Function_685(&Local_326 + 1552, 0x3fc00000, 0x40800000);
			Function_685(&Local_326 + 1992, 0x3fc00000, 0x40800000);
			if (Function_263(&bLocal_1736) <= 1.0f)
			{
				Function_293(&bLocal_1736);
				iLocal_1563 = 106;
			}
			break;
	}
	return;
}

void Function_679(bool bParam0) //Position: 0x25D7E / 155006
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_680() //Position: 0x25DCB / 155083
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_326.f_3600 - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1552, ((SQUAD_GET_SIZE(&Local_326 + 1552) - 1) - iVar0));
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(0, &Local_326 + 3600[iVar0], 5,75f, 1, 0, 1);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar2, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		iVar0++;
	}
	return;
}

void Function_681() //Position: 0x25E3D / 155197
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel05_respondReyes", "Rebel05_respondReyes", true, 3, 1, 0, 1);
		Function_310(6);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_682() //Position: 0x25E8E / 155278
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_noBackdown", "Rebel05_noBackdown", 2, 2, 1, 0, 1);
		Function_310(6);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_683(int iParam0) //Position: 0x25EDB / 155355
{
	bool bVar0;
	
	Function_322(&iParam0);
	SQUAD_GOALS_CLEAR(&iParam0);
	bVar0 = Function_684(&Local_326 + 3600[0], 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_684(&Local_326 + 3600[1], 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_684(&Local_326 + 3600[2], 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_684(&Local_326 + 3600[3], 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_684(&Local_326 + 3600[4], 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(&iParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	Function_570(&iParam0, 0);
	return;
}

bool Function_684(bool bParam0, int iParam1) //Position: 0x25FB2 / 155570
{
	int iVar0;
	struct<5> Var1;
	
	UNK_0x44986367(&Var1, GET_OBJECT_HEADING(&bParam0));
	VSCALE(&Var1, 5.0f);
	Function_291(&bParam0);
	Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Function_291(&bParam0), Var1, StackVal);
	Var1.f_4 = (StackVal + 0,75f);
	Var1 = *(&Local_326 + 4200);
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(0, &bParam0, iParam1, 0, 1);
	TASK_POINT_GUN_AT_COORD(0, &Var1, -1.0f);
	TASK_SEQUENCE_CLOSE();
	return iVar0;
}

void Function_685(int iParam0, int iParam1, int iParam2) //Position: 0x2600C / 155660
{
	int iVar0;
	
	if (DECOR_CHECK_EXIST(&iParam0, "fLastShoutTime"))
	{
		if (GET_CURRENT_GAME_TIME() < DECOR_GET_FLOAT(&iParam0, "fLastShoutTime"))
		{
			iVar0 = Function_688(&iParam0);
			if (&iParam0 == &Local_326 + 1552)
			{
				Function_687(&iVar0);
			}
			if (&iParam0 == &Local_326 + 1992)
			{
				Function_686(&iVar0);
			}
			DECOR_SET_FLOAT(&iParam0, "fLastShoutTime", (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(&iParam1, &iParam2)));
		}
	}
	else
	{
		DECOR_SET_FLOAT(&iParam0, "fLastShoutTime", 0.0f);
	}
	return;
}

void Function_686(int iParam0) //Position: 0x260BA / 155834
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 9);
	switch ((bVar0 % 3))
	{
		case 0x00000000:
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 97, 0, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
		
		case 0x00000001:
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 96, 0, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
		
		case 0x00000002:
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 99, 0, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
	}
	return;
}

void Function_687(int iParam0) //Position: 0x2611C / 155932
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	switch (bVar0)
	{
		case 0x0000011D:
			SAY_SINGLE_LINE_STRING(&iParam0, "Rebel05_CrowdCrySupport_01", true, true, 2, 0, true, false);
			break;
		
		case 0x00000122:
			SAY_SINGLE_LINE_STRING(&iParam0, "Rebel05_CrowdCrySupport_02", true, true, 2, 0, true, false);
			break;
		
		case 0x00000123:
			SAY_SINGLE_LINE_STRING(&iParam0, "Rebel05_CrowdCrySupport_03", true, true, 2, 0, true, false);
			break;
		
		case 0x00000204:
		case 0x0000020A:
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 82, 0, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
		
		default:
			break;
	}
	return;
}

var Function_688(bool bParam0) //Position: 0x261E9 / 156137
{
	if (SQUAD_GET_SIZE(&bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(&bParam0) - 1)));
	}
	return "";
}

void Function_689() //Position: 0x2620E / 156174
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar4;
	
	bVar0 = false;
	SQUAD_COMPUTE_CENTROID(&Local_326 + 1552, &uVar2);
	switch (RAND_INT_RANGE(false, 5))
	{
		case 0x00000000:
			uVar4 = "REBEL_05_RALLY_01_MASTER";
			break;
		
		case 0x00000001:
			uVar4 = "REBEL_05_RALLY_02_MASTER";
			break;
		
		case 0x00000002:
			uVar4 = "REBEL_05_RALLY_03_MASTER";
			break;
		
		case 0x00000003:
			uVar4 = "REBEL_05_RALLY_04_MASTER";
			break;
		
		case 0x00000004:
			uVar4 = "REBEL_05_RALLY_05_MASTER";
			break;
		
		case 0x00000005:
			uVar4 = "REBEL_05_RALLY_06_MASTER";
			break;
	}
	PLAY_SOUND_FROM_ACTOR(Function_508(&Local_326 + 1552, &Global_54076, 0, 0), &uVar4, 0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_326 + 1552) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_326 + 1552, bVar0);
		Function_687(&uVar1);
		bVar0++;
	}
	return;
}

void Function_690() //Position: 0x26362 / 156514
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_rallyTownfolk", "Rebel05_rallyTownfolk", true, 1, 1, 0, 1);
		Function_310(2);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_691() //Position: 0x263B5 / 156597
{
	if (Function_484(StackVal, &bLocal_1579, (&Local_326 + 3008[13]), 2.0f))
	{
		if (bLocal_1911 < 4294967295)
		{
			if (!iLocal_1584[0])
			{
				Function_692(&Local_326 + 1552, 4,5f, 6,8f);
			}
			Function_616(&Local_326 + 1552);
			SQUAD_GOALS_CLEAR(&Local_326 + 1552);
			if (iLocal_1584[0])
			{
				Function_322(&Local_326 + 1552);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 1, 4294967295);
			TASK_FACE_ACTOR(false, &bLocal_1579, 1, 3212836864);
			bLocal_1911 = false;
		}
	}
	else if (IS_OBJECT_VALID(&fLocal_1955))
	{
		if (GATEWAY_UPDATE(&fLocal_1955))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1579, *(&Local_326 + 3008[13]), 1, 1, true);
		}
	}
	return;
}

void Function_692(var uParam0, float fParam1, bool bParam2) //Position: 0x26476 / 156790
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar4;
	
	bVar0 = false;
	uVar2 = *(&Local_326 + 3008[13]);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		SET_ACTOR_FACE_STYLE(&uVar4, 2);
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(&uVar4, &uVar2, RAND_FLOAT_RANGE(fParam1, bParam2), 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar4, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(&uParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, false, 0, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_693(&uParam0, &bLocal_1579);
	return;
}

void Function_693(var uParam0, bool bParam1) //Position: 0x264FF / 156927
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_LOOK_AT_ACTOR(&uVar1, &bParam1, 1, 1.0f, 1000.0f, 1001.0f, 1);
		}
		bVar0++;
	}
	return;
}

void Function_694() //Position: 0x26561 / 157025
{
	if (iLocal_1913 < 5)
	{
		if ((Function_704(&Local_326 + 2072) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2936)) || ((Function_476(&Local_326 + 2200, &Global_54076, 20.0f, 1) && IS_ACTOR_SHOOTING(&Global_54076)) && Function_618(&Local_326 + 2200) < 0))
		{
			Function_322(&Local_326 + 2072);
			SET_ACTOR_FACTION(&Local_326 + 2000[22], 20);
			SET_ACTOR_FACTION(&Local_326 + 2000[32], 20);
			if (IS_ACTOR_ALIVE(&Local_326 + 2000[22]))
			{
				if (!IS_ACTOR_IN_VOLUME(&Local_326 + 2000[22], &Local_326 + 2912))
				{
					Function_866(&Local_326 + 2000[22]);
					CLEAR_ACTOR_PROOF(&Local_326 + 2000[22], 16);
				}
			}
			if (IS_ACTOR_ALIVE(&Local_326 + 2000[32]))
			{
				if (!IS_ACTOR_IN_VOLUME(&Local_326 + 2000[32], &Local_326 + 2912))
				{
					Function_866(&Local_326 + 2000[32]);
					CLEAR_ACTOR_PROOF(&Local_326 + 2000[32], 16);
				}
			}
			iLocal_1913 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &Local_326 + 3872, 2.0f, 2);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4728, 3, 0, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&Local_326 + 2000[22], iLocal_1913);
			TASK_SEQUENCE_PERFORM(&Local_326 + 2000[32], bLocal_1913);
			SET_ACTOR_FACTION(&Local_326 + 2000[02], 19);
			SET_ACTOR_FACTION(&Local_326 + 2000[12], 19);
			ADD_BLIP_FOR_ACTOR(&Local_326 + 2000[02], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR(&Local_326 + 2000[12], 322, 0, 2, 0);
			Function_409(&Local_326 + 2000[02], -1.0f);
			Function_409(&Local_326 + 2000[12], -1.0f);
			Function_703(&Local_326 + 2072, &Global_54076, 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (iLocal_1914 <= 10)
			{
				if (Function_476(&Local_326 + 2200, &Global_54076, 20.0f, 1))
				{
					iLocal_1914 = 99;
				}
			}
			Function_702();
			bLocal_1913 = 7;
		}
	}
	switch (bLocal_1913)
	{
		case 0x00000000:
			if (Function_701())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					Function_291(&Local_326 + 4168);
					STREAMING_LOAD_BOUNDS(Function_291(&Local_326 + 4168), 8.0f, 0);
					bLocal_1913 = 4294967295;
				}
			}
			break;
		
		case 0xFFFFFFFF:
			Function_291(&Local_326 + 4168);
			if (STREAMING_ARE_BOUNDS_LOADED(Function_291(&Local_326 + 4168), 8.0f))
			{
				STREAMING_UNLOAD_BOUNDS();
				Function_700();
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2072, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2072) | 2048);
				Function_699();
				if (IS_DOOR_VALID(&iLocal_1949))
				{
					Function_206(&iLocal_1949, 1);
				}
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2072, false, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_POINT_GUN_AT_OBJECT(&Local_326 + 2000[02], &Local_326 + 4168, -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT(&Local_326 + 2000[12], &Local_326 + 4168, -1.0f, 0);
				Function_601(&Local_326 + 2000[02], 0);
				Function_601(&Local_326 + 2000[12], 0);
				Function_698(&Local_326 + 2000[22], &Local_326 + 4880, 0);
				Function_698(&Local_326 + 2000[32], &Local_326 + 4880, 0);
				SET_ACTOR_PROOF(&Local_326 + 2000[22], 16);
				SET_ACTOR_PROOF(&Local_326 + 2000[32], 16);
				TASK_STAND_STILL(&Local_326 + 2000[22], -1.0f, 0, 0);
				TASK_STAND_STILL(&Local_326 + 2000[32], -1.0f, 0, 0);
				bLocal_1913 = true;
			}
			break;
		
		case 0x00000001:
			if (Function_476(&Local_326 + 2072, &Global_54076, 22.0f, 1))
			{
				if (Function_618(&Local_326 + 2072) >= 0)
				{
					if (!DECOR_CHECK_EXIST(&Local_326 + 2072, "fOnScreenStartTime"))
					{
						DECOR_SET_FLOAT(&Local_326 + 2072, "fOnScreenStartTime", GET_CURRENT_GAME_TIME());
					}
					else if (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 2072, "fOnScreenStartTime")) < (1,5f / 2.0f)
					{
						Function_697();
						bLocal_1913 = 2;
						DECOR_REMOVE(&Local_326 + 2072, "fOnScreenStartTime");
					}
				}
				else if (DECOR_CHECK_EXIST(&Local_326 + 2072, "fOnScreenStartTime"))
				{
					DECOR_REMOVE(&Local_326 + 2072, "fOnScreenStartTime");
				}
			}
			break;
		
		case 0x00000002:
			Function_702();
			Function_427(&Local_326 + 2000[02], &Local_326 + 2000[22], 1);
			Function_427(&Local_326 + 2000[12], &Local_326 + 2000[32], 1);
			Function_291(&Local_326 + 4168);
			Function_696(StackVal, &Local_326 + 2000[02], Function_291(&Local_326 + 4168), 3.0f);
			Function_291(&Local_326 + 4168);
			Function_696(StackVal, &Local_326 + 2000[12], Function_291(&Local_326 + 4168), 3.0f);
			COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_326 + 2000[02], 0);
			COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_326 + 2000[12], 0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2000[02], 28, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2000[12], 28, 0.0f);
			MEMORY_CONSIDER_AS(&Local_326 + 2000[02], &Local_326 + 2000[22], 4);
			MEMORY_CONSIDER_AS(&Local_326 + 2000[02], &Local_326 + 2000[32], 4);
			MEMORY_CONSIDER_AS(&Local_326 + 2000[12], &Local_326 + 2000[22], 4);
			MEMORY_CONSIDER_AS(&Local_326 + 2000[12], &Local_326 + 2000[32], 4);
			bLocal_1913 = 3;
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_ALIVE(&Local_326 + 2000[22]) && !IS_ACTOR_ALIVE(&Local_326 + 2000[32]))
			{
				TASK_STAND_STILL(&Local_326 + 2000[02], -1.0f, 0, 0);
				TASK_STAND_STILL(&Local_326 + 2000[12], -1.0f, 0, 0);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_326 + 2000[02], 1);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_326 + 2000[12], 1);
				DECOR_SET_FLOAT(&Local_326 + 2072, "nfShotTime", GET_CURRENT_GAME_TIME());
				bLocal_1913 = 4;
			}
			break;
		
		case 0x00000004:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 2072, "nfShotTime")) < 6.0f || !DECOR_CHECK_EXIST(&Local_326 + 2072, "nfShotTime"))
			{
				if (IS_ACTOR_ALIVE(&Local_326 + 2000[22]))
				{
					SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2000[22], true);
				}
				if (IS_ACTOR_ALIVE(&Local_326 + 2000[32]))
				{
					SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2000[32], true);
				}
				TASK_GO_TO_COORD(&Local_326 + 2000[02], &Local_326 + 3816, 1);
				TASK_GO_TO_COORD(&Local_326 + 2000[12], &Local_326 + 3816, 1);
				Function_695(StackVal, &Local_326 + 2000[02], 1.0f, "rand_idle_stand", Vector(-4375,255f, 38,897f, 4361,685f));
				Function_695(StackVal, &Local_326 + 2000[12], 2.0f, "mex_gateguards", Vector(-4375,806f, 38,805f, 4364,984f));
				DECOR_REMOVE(&Local_326 + 2072, "nfShotTime");
				bLocal_1913 = 5;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (Function_477(&Local_326 + 2000[02], 1) && Function_477(&Local_326 + 2000[12], 1))
			{
				bLocal_1913 = 6;
				DECOR_REMOVE(&Local_326 + 2072, "nfShotTime");
				SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2000[22], true);
				SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2000[32], true);
				Function_116(10, 1, 0);
			}
			break;
	}
	return;
}

void Function_695(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4) //Position: 0x26CF2 / 158962
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bParam1, 0, 0);
	TASK_GO_NEAR_COORD(false, &Local_326 + 3064[03], 5.0f, 1);
	TASK_GO_NEAR_COORD(false, &Local_326 + 3816, 9.0f, 1);
	TASK_USE_GRINGO(false, LOCATE_GRINGO_OF_TYPE(&fParam2, &fParam3, 3.0f, 1), "UseCase1", 4294967295, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(&uParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, true);
}

void Function_696(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x26D60 / 159072
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_AT_COORD_FROM_POSITION(&uParam0, &uParam1, &uVar0, &fParam3);
}

void Function_697() //Position: 0x26D7D / 159101
{
	int iVar0;
	
	iVar0 = FIRE_CREATE_HANDLE();
	FIRE_CREATE_IN_VOLUME(&iVar0, &Local_326 + 2912, 8, 1);
	FIRE_SET_MAX_FLAMES(&iVar0, 32);
	FIRE_SET_DECAY_RATE(&iVar0, 0.0f);
	FIRE_SET_GROW_RATE(&iVar0, 32.0f);
	return;
}

void Function_698(var uParam0, var uParam1, bool bParam2) //Position: 0x26DB4 / 159156
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uParam1) - 1))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		SET_OBJECT_COLLIDE_WITH_OBJECT(&uParam0, &uVar1, bParam2);
		bVar0++;
	}
	return;
}

void Function_699() //Position: 0x26DEC / 159212
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&Local_326 + 3808) - 1))
	{
		uVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_54(), "fire_comp_beams", GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Local_326 + 3808), Vector(0.0f, 0.0f, 0.0f), 1, false);
		UNK_0x6745191B(StackVal, &uVar1, Vector(0.0f, 0.0f, 0.0f));
		bVar0++;
	}
	return;
}

void Function_700() //Position: 0x26E4A / 159306
{
	*(&Local_326 + 2072) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_326, "BurnHouseGuys"));
	*(&Local_326 + 2000[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "bh_Soldier_2", 393, Vector(-4346,554f, 29,28869f, 4405,269f), Vector(0.0f, 73,36384f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2000[02], &Local_326 + 2072);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2000[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 2000[02], 43, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2000[02], 28, 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 2000[02], 0);
	AI_SET_FIRE_DELAY(&Local_326 + 2000[02], 0.0f);
	TASK_STAND_STILL(&Local_326 + 2000[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2000[02], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2000[02], 0);
	*(&Local_326 + 2000[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "bh_Soldier_3", 392, Vector(-4346,7f, 29,28869f, 4402,28f), Vector(0.0f, 118,7536f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2000[12], &Local_326 + 2072);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2000[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_326 + 2000[12], 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_326 + 2000[12], 28, 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_326 + 2000[12], 0);
	AI_SET_FIRE_DELAY(&Local_326 + 2000[12], 0.0f);
	TASK_STAND_STILL(&Local_326 + 2000[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2000[12], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2000[12], 0);
	*(&Local_326 + 2000[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "bh_guy_1", 238, Vector(-4353,547f, 29,33339f, 4404,06f), Vector(0.0f, 264,5894f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2000[22], &Local_326 + 2072);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2000[22]);
	TASK_STAND_STILL(&Local_326 + 2000[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2000[22], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2000[22], 0);
	*(&Local_326 + 2000[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_326, "bh_guy_2", 285, Vector(-4351,679f, 29,41976f, 4404,385f), Vector(0.0f, -87,68929f, 0.0f));
	SQUAD_JOIN(&Local_326 + 2000[32], &Local_326 + 2072);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_326 + 2000[32]);
	TASK_STAND_STILL(&Local_326 + 2000[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_326 + 2000[32], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE(&Local_326 + 2000[32], 0);
	return;
}

bool Function_701() //Position: 0x27110 / 160016
{
	Function_359(&Local_326 + 1328, 393, 2, 0);
	Function_359(&Local_326 + 1328, 392, 2, 0);
	Function_359(&Local_326 + 1328, 238, 2, 0);
	Function_359(&Local_326 + 1328, 285, 2, 0);
	Function_359(&Local_326 + 1328, 391, 2, 0);
	Function_359(&Local_326 + 1328, 379, 2, 0);
	Function_359(&Local_326 + 1328, 291, 2, 0);
	Function_359(&Local_326 + 1328, 516, 2, 0);
	Function_359(&Local_326 + 1328, 522, 2, 0);
	if (Function_388(&Local_326 + 1328))
	{
		return 1;
	}
	return 0;
}

void Function_702() //Position: 0x271AB / 160171
{
	Function_206(&iLocal_1949, 1);
	OPEN_DOOR_DIRECTION(&iLocal_1949, 1);
	if (IS_ACTOR_ALIVE(&Local_326 + 2000[22]))
	{
		if (!FIRE_IS_ACTOR_ON_FIRE(&Local_326 + 2000[22]))
		{
			Function_866(&Local_326 + 2000[22]);
			CLEAR_ACTOR_PROOF(&Local_326 + 2000[22], 16);
		}
	}
	if (IS_ACTOR_ALIVE(&Local_326 + 2000[32]))
	{
		if (!FIRE_IS_ACTOR_ON_FIRE(&Local_326 + 2000[32]))
		{
			Function_866(&Local_326 + 2000[32]);
			CLEAR_ACTOR_PROOF(&Local_326 + 2000[32], 16);
		}
	}
	TASK_GO_TO_OBJECT(&Local_326 + 2000[22], &Local_326 + 4168, 4, 1, 0);
	TASK_GO_TO_OBJECT(&Local_326 + 2000[32], &Local_326 + 4168, 4, 1, 0);
	SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2000[22], false);
	SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2000[32], false);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_326 + 2000[22], true);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_326 + 2000[32], true);
	return;
}

void Function_703(var uParam0, var uParam1, bool bParam2) //Position: 0x272A1 / 160417
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, true);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_704(int iParam0) //Position: 0x27319 / 160537
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	bVar2 = false;
	iVar3 = 0;
	bVar4 = false;
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (Function_418(&iVar1, &Global_54076, 0, 1))
		{
			return 1;
		}
		if (Function_465(&Global_54076, &iVar1, 1, 0, 0, 3212836864) || Function_465(&iVar1, &Global_54076, 1, 0, 0, 3212836864))
		{
			return 1;
		}
		if (MEMORY_GET_IS_VISIBLE(&iVar1, &Global_54076) && !DECOR_CHECK_EXIST(&iVar1, "bIgnoreLOSCheck"))
		{
			bVar2 = true;
		}
		if (Function_323(&Global_54076, &iVar1, 30.0f))
		{
			iVar3 = 1;
		}
		if (Function_328(&iVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			bVar4 = true;
		}
		if (CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(&Global_54076, &iVar1) > 0,13f && IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			bVar5 = true;
		}
		bVar0++;
	}
	if ((iVar3 && bVar4) && IS_ACTOR_SHOOTING(&Global_54076))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "fLastTargetTime"))
	{
		if (((!bVar5 || !bVar2) || !bVar4) || !IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			DECOR_REMOVE(&iParam0, "fLastTargetTime");
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iParam0, "fLastTargetTime")) < 1,75f)
		{
			return 1;
		}
		PRINTSTRING("Aiming at them, current time = ");
		PRINTFLOAT((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iParam0, "fLastTargetTime")));
		PRINTNL();
	}
	else if (bVar5)
	{
		if ((bVar2 && bVar4) && IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			DECOR_SET_FLOAT(&iParam0, "fLastTargetTime", GET_CURRENT_GAME_TIME());
		}
	}
	return 0;
}

void Function_705() //Position: 0x27509 / 161033
{
	var uVar0;
	
	if (iLocal_1914 <= 11)
	{
		if ((Function_704(&Local_326 + 2200) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2928)) || iLocal_1914 != 99)
		{
			Function_322(&Local_326 + 2200);
			AUDIO_PLAY_VOCAL_EFFECT(&Local_326 + 2080[62], 9, 1);
			Function_633(&Local_326 + 2200);
			SET_ACTOR_FACTION(&Local_326 + 2080[02], 19);
			SET_ACTOR_FACTION(&Local_326 + 2080[12], 19);
			SET_ACTOR_FACTION(&Local_326 + 2080[22], 19);
			ADD_BLIP_FOR_ACTOR(&Local_326 + 2080[02], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR(&Local_326 + 2080[12], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR(&Local_326 + 2080[22], 322, 0, 2, 0);
			TASK_KILL_CHAR(&Local_326 + 2080[02], &Global_54076);
			TASK_KILL_CHAR(&Local_326 + 2080[12], &Global_54076);
			TASK_KILL_CHAR(&Local_326 + 2080[22], &Global_54076);
			TASK_PRIORITY_SET(&Local_326 + 2080[02], true);
			TASK_PRIORITY_SET(&Local_326 + 2080[12], true);
			TASK_PRIORITY_SET(&Local_326 + 2080[22], true);
			Function_703(&Local_326 + 2200, &Global_54076, 0);
			CLEAR_ACTOR_MAX_SPEED(&Local_326 + 2080[02]);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_326 + 2080[02], &Local_326 + 4752, 4, 0, 0, 1, false);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1914 = 12;
		}
	}
	switch (iLocal_1914)
	{
		case 0x00000000:
			if (Function_701())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (!SQUAD_IS_VALID(&Local_326 + 2200))
					{
						Function_675();
					}
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2200, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_326 + 2200) | 2048);
					SET_ANIM_SET_FOR_ACTOR(&Local_326 + 2080[32], "stand_hostage", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 2080[32], "stand_hostage/walk_pose");
					SET_ANIM_SET_FOR_ACTOR(&Local_326 + 2080[42], "stand_hostage", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 2080[42], "stand_hostage/walk_pose");
					SET_ANIM_SET_FOR_ACTOR(&Local_326 + 2080[52], "stand_hostage", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Local_326 + 2080[52], "stand_hostage/walk_pose");
					SNAP_ACTOR_TO_GRINGO(&Local_326 + 2080[62], &Local_326 + 4288, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&Local_326 + 2080[62], GET_GRINGO_FROM_OBJECT(&Local_326 + 4288), "UseCase1", 4294967295, 1);
					TASK_POINT_GUN_AT_OBJECT(&Local_326 + 2080[12], &Local_326 + 2080[42], -1.0f, 0);
					TASK_POINT_GUN_AT_OBJECT(&Local_326 + 2080[22], &Local_326 + 2080[52], -1.0f, 0);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&Local_326 + 2080[32], 8, "FASTWALK");
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_326 + 2080[32], true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_326 + 2080[32], true);
					Function_601(&Local_326 + 2080[02], 0);
					Function_601(&Local_326 + 2080[12], 0);
					Function_601(&Local_326 + 2080[22], 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 2200, false, 0, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_1914 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_326 + 2864))
			{
				iLocal_1914 = 2;
				if (DECOR_CHECK_EXIST(&Local_326 + 2200, "fOnScreenStartTime"))
				{
					DECOR_REMOVE(&Local_326 + 2200, "fOnScreenStartTime");
				}
			}
			if (Function_618(&Local_326 + 2200) >= 0)
			{
				if (!DECOR_CHECK_EXIST(&Local_326 + 2200, "fOnScreenStartTime"))
				{
					DECOR_SET_FLOAT(&Local_326 + 2200, "fOnScreenStartTime", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 2200, "fOnScreenStartTime")) < 1,5f)
				{
					iLocal_1914 = 2;
					DECOR_REMOVE(&Local_326 + 2200, "fOnScreenStartTime");
				}
			}
			else if (DECOR_CHECK_EXIST(&Local_326 + 2200, "fOnScreenStartTime"))
			{
				DECOR_REMOVE(&Local_326 + 2200, "fOnScreenStartTime");
			}
			break;
		
		case 0x00000002:
			Function_707(&Local_326 + 2080[12], &Local_326 + 2080[22]);
			uVar0 = Function_707(&Local_326 + 2080[12], &Local_326 + 2080[22]);
			iLocal_1914 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH(0, &Local_326 + 4752, 1, 0, 0, 1, false);
			TASK_FACE_ACTOR(false, &Local_326 + 2080[32], 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&Local_326 + 2080[02], iLocal_1914);
			TASK_SEQUENCE_RELEASE(bLocal_1914, 1);
			SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2080[02], false);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(&Local_326 + 2080[02], 0,5f);
			Function_707(&Local_326 + 2080[42], &Local_326 + 2080[52]);
			uVar0 = Function_707(&Local_326 + 2080[42], &Local_326 + 2080[52]);
			bLocal_1914 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH(0, &Local_326 + 4760, 1, 0, 0, 1, false);
			TASK_GO_TO_COORD(false, &uVar0, 1);
			TASK_STAND_STILL(false, 1,3f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&Local_326 + 2080[32], bLocal_1914);
			TASK_SEQUENCE_RELEASE(bLocal_1914, 1);
			SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2080[32], false);
			Function_706();
			bLocal_1914 = 3;
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(&Local_326 + 2080[32], 0) == 2)
			{
				SAY_SINGLE_LINE_SCRIPTED(&Local_326 + 2080[12], "eventExecutionMsg01", 0, 1, 1, 0, 0, 0);
				bLocal_1914 = 4;
			}
			break;
		
		case 0x00000004:
			if (!IS_ANY_SPEECH_PLAYING(&Local_326 + 2080[12]))
			{
				DECOR_SET_FLOAT(&Local_326 + 2200, "fAimTime", GET_CURRENT_GAME_TIME());
				TASK_FACE_ACTOR(&Local_326 + 2080[02], &Local_326 + 2080[32], 0, 3212836864);
				bLocal_1914 = 5;
			}
			break;
		
		case 0x00000005:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 2200, "fAimTime")) < 0,75f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&Local_326 + 2080[12], "eventExecutionMsg02", 0, 1, 1, 0, 0, 0);
				TASK_POINT_GUN_AT_OBJECT(&Local_326 + 2080[02], &Local_326 + 2080[32], -1.0f, 0);
				bLocal_1914 = 6;
			}
			break;
		
		case 0x00000006:
			if (!IS_ANY_SPEECH_PLAYING(&Local_326 + 2080[12]))
			{
				DECOR_SET_FLOAT(&Local_326 + 2200, "fAimTime", GET_CURRENT_GAME_TIME());
				bLocal_1914 = 7;
			}
			break;
		
		case 0x00000007:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 2200, "fAimTime")) < 0,9f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&Local_326 + 2080[12], "eventExecutionMsg03", 0, 1, 1, 0, 0, 0);
				bLocal_1914 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_ANY_SPEECH_PLAYING(&Local_326 + 2080[12]))
			{
				Function_316(&Local_326 + 2080[02], &Local_326 + 2080[32]);
				Function_316(&Local_326 + 2080[12], &Local_326 + 2080[42]);
				Function_316(&Local_326 + 2080[22], &Local_326 + 2080[52]);
				AUDIO_PLAY_VOCAL_EFFECT(&Local_326 + 2080[62], 9, 1);
				DECOR_REMOVE(&Local_326 + 2200, "fAimTime");
				DECOR_SET_FLOAT(&Local_326 + 2200, "nfShotTime", GET_CURRENT_GAME_TIME());
				CLEAR_ACTOR_MAX_SPEED(&Local_326 + 2080[02]);
				bLocal_1914 = 9;
			}
			break;
		
		case 0x00000009:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_326 + 2200, "nfShotTime")) < 2,5f)
			{
				if ((!IS_ACTOR_ALIVE(&Local_326 + 2080[32]) && !IS_ACTOR_ALIVE(&Local_326 + 2080[42])) && !IS_ACTOR_ALIVE(&Local_326 + 2080[52]))
				{
					Function_695(StackVal, &Local_326 + 2080[02], 2,3f, "rand_idle_nearwall", Vector(-4376,312f, 39,158f, 4361,827f));
					Function_695(StackVal, &Local_326 + 2080[12], 3,2f, "rand_idle_stand", Vector(-4375,393f, 39,111f, 4366,977f));
					Function_695(StackVal, &Local_326 + 2080[22], 1,5f, "mex_gateguards", Vector(-4376,312f, 39,158f, 4361,827f));
					SAY_SINGLE_LINE_SCRIPTED(&Local_326 + 2080[12], "THIS_WAY", 0, 1, 1, 1, 0, 0);
					SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2080[02], true);
					SET_ACTOR_UPDATE_PRIORITY(&Local_326 + 2080[32], true);
					DECOR_REMOVE(&Local_326 + 2200, "nfShotTime");
					bLocal_1914 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000C:
			if ((Function_477(&Local_326 + 2080[02], 1) && Function_477(&Local_326 + 2080[12], 1)) && Function_477(&Local_326 + 2080[22], 1))
			{
				bLocal_1914 = false;
				if (IS_ACTOR_ALIVE(&Local_326 + 2080[32]))
				{
					bLocal_1914 += 100;
				}
				if (IS_ACTOR_ALIVE(&Local_326 + 2080[42]))
				{
					bLocal_1914 += 100;
				}
				if (IS_ACTOR_ALIVE(&Local_326 + 2080[52]))
				{
					bLocal_1914 += 100;
				}
				if (IS_ACTOR_ALIVE(&Local_326 + 2080[62]))
				{
					bLocal_1914 += 100;
				}
				if (bLocal_1914 >= 0)
				{
					Function_116(bLocal_1914, 1, 0);
					PRINTSTRING("Saved ");
					PRINTINT(bLocal_1914);
					PRINTNL();
				}
				bLocal_1914 = 11;
			}
			break;
	}
	return;
}

void Function_706() //Position: 0x27F44 / 163652
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Rebel05_girlGunpoint_v1_AA", "Rebel05_girlGunpoint_v1_AA", 4, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel05_girlGunpoint_v1_AB", "Rebel05_girlGunpoint_v1_AB", 3, 1, 1, 0, 1);
		Function_310(24);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

struct<8> Function_707(var uParam0, int iParam1) //Position: 0x27FE5 / 163813
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	Function_83(&uParam0, &Var2);
	Function_83(&iParam1, &Var4);
	Function_708(StackVal, StackVal, Var2, Var4);
	Var0 = Function_708(StackVal, StackVal, Var2, Var4);
	return StackVal, Var0;
}

struct<8> Function_708(struct<2> Param0, struct<2> Param2) //Position: 0x2800E / 163854
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param2, Param0, StackVal);
	Var0 = Vector(Var0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param2, Var0, StackVal);
	return StackVal, Var0;
}

void Function_709(bool bParam0) //Position: 0x28040 / 163904
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (GET_TASK_STATUS(&uVar1, 0) != 1)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "crowd_cheer"))
			{
				SET_ANIM_SET_FOR_ACTOR(&uVar1, "crowd_cheer", 0);
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "crowd_cheer/random_loop_mobile");
			}
		}
		else if (IS_ACTION_NODE_PLAYING_PARTIAL(&uVar1, "crowd_cheer"))
		{
			RESET_ANIM_SET_FOR_ACTOR(&uVar1, 0);
		}
		bVar0++;
	}
	return;
}

int Function_710(struct<2> Param0, float fParam2, int iParam3, var uParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x280EF / 164079
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_540(&Global_54076, &iParam3, fParam2))
	{
		Function_841(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_540(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_460(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_321(&uParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_459(1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_458(&uParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_458(&uParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &uParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&uParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &uParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_460(1))
	{
		Function_457(1);
		if (!Function_456())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_455();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_458(&uParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_458(&uParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_711() //Position: 0x28298 / 164504
{
	if (iLocal_1563 < 3 && iLocal_1563 > 105)
	{
		if (iLocal_1563 <= 12)
		{
			Function_454(&bLocal_1748, 20.0f, 40.0f, &bLocal_1579, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1577, 0, 0, 0, 325, 0);
			if (!Function_323(&Global_54076, &bLocal_1579, 20.0f))
			{
				if (!IS_BLIP_VALID(Function_799(7)))
				{
					Function_336(7, 1, 1);
				}
			}
		}
		if (iLocal_1563 > 7)
		{
			Function_705();
			Function_694();
		}
		Function_798();
		if (iLocal_1563 <= 9)
		{
			if (GET_ACTOR_FROM_OBJECT(Function_370(GET_GRINGO_FROM_OBJECT(&Local_326 + 4296), "Cut_Free")) == &Global_54076)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_293(&bLocal_1736);
				Function_293(&bLocal_1744);
				iLocal_1563 = 9;
			}
		}
	}
	switch (iLocal_1563)
	{
		case 0x00000000:
			Function_301(0);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_1579);
			Function_336(7, 0, 1);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_291(&Local_326 + 2984[0]);
			iLocal_1583 = Function_294(StackVal, Function_291(&Local_326 + 2984[0]), 0, 1, 1);
			DECOR_SET_BOOL(&bLocal_1579, "CanBeLasso", false);
			DECOR_SET_BOOL(&bLocal_1579, "ignoreactorinduel", true);
			Function_376(&Global_54076, &Local_326 + 2984[0], 1, 1, 1);
			Function_376(&bLocal_1579, &Local_326 + 2984[1], 1, 1, 1);
			Function_293(&bLocal_1736);
			iLocal_1563 = 1;
			break;
		
		case 0x00000001:
			Function_783();
			if (Local_1564 > 1009)
			{
				Function_798();
				if (STREAMING_IS_WORLD_LOADED() && ((Function_292(iLocal_1583) && Function_782()) || iLocal_1583 != 4294967295))
				{
					if (Function_452())
					{
						if (Function_388(&iLocal_1610))
						{
							Function_451();
							Function_232(&iLocal_1941, 1);
							Function_232(&iLocal_1943, 1);
							iLocal_1924 = 0;
							if (!IS_ACTOR_VALID(&Local_326 + 1480[02]) || Function_270(&Local_1550))
							{
								Function_676();
								CUTSCENE_MANAGER_HIDE_ACTOR(&Local_326 + 1480[02]);
								CUTSCENE_MANAGER_HIDE_ACTOR(&Local_326 + 1480[12]);
								CUTSCENE_MANAGER_HIDE_ACTOR(&Local_326 + 1480[22]);
								CUTSCENE_MANAGER_HIDE_ACTOR(&Local_326 + 1480[32]);
								HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, "S1_Soldier1")));
								HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, "S1_Soldier2")));
								HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, "deadMexGirl")));
								DECOR_SET_BOOL(FIND_OBJECT_IN_LAYOUT(&Local_326, "deadMexGirl"), "corpse_loot_gringo", false);
							}
							Function_779((Function_270(&Local_1550) || Global_99145));
							Function_293(&bLocal_1736);
							iLocal_1563 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_783() || Global_99145)
			{
				if (SQUAD_IS_VALID(&bLocal_1974))
				{
					Function_362(&bLocal_1974);
					DESTROY_OBJECT(&bLocal_1974);
				}
				SNAP_ACTOR_TO_GRINGO(&bLocal_1579, &Local_326 + 4296, "UseCase_Reyes", true, 0, 0);
				TASK_USE_GRINGO(&bLocal_1579, GET_GRINGO_FROM_OBJECT(&Local_326 + 4296), "UseCase_Reyes", true, 1);
				MEMORY_CONSIDER_AS(&Local_326 + 1480[02], &bLocal_1579, 2);
				MEMORY_CONSIDER_AS(&Local_326 + 1480[02], &Global_54076, 2);
				TASK_PRIORITY_SET(&bLocal_1579, true);
				Function_293(&bLocal_1736);
				iLocal_1563 = 4;
			}
			break;
		
		case 0x00000004:
			Function_777();
			if (!HUD_IS_FADED() || STREAMING_IS_WORLD_LOADED())
			{
				Function_718();
				if (Local_1564.f_40)
				{
					iLocal_1984 = 6;
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_290(bLocal_1562);
				Function_281(StackVal, Function_290(bLocal_1562), bLocal_1562, Global_46746[0], Function_289(bLocal_1562), 0);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				TOGGLE_COVER_PROPS(0);
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, "S1_Soldier1")));
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, "S1_Soldier2")));
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Local_326, "deadMexGirl")));
				Function_207(1);
				Function_237(1);
				Function_329(&(Local_1810[015]), &bLocal_1579, "RebelLeader", 0, 0x5f5e100, 1);
				FORCE_LOOK_AT_ACTOR(&bLocal_1579, &Global_54076, 3212836864);
				if (Function_270(&Local_1550))
				{
					Function_472(&Local_326 + 1480[02], &Global_54076);
				}
				Function_293(&bLocal_1736);
				iLocal_1563 = 6;
			}
			break;
		
		case 0x00000006:
			Function_777();
			if (IS_ACTOR_VALID(&Local_326 + 1480[02]))
			{
				if (Global_6610 && !DECOR_CHECK_EXIST(&Local_326 + 1480[02], "considerenemy"))
				{
					MEMORY_CONSIDER_AS(&Local_326 + 1480[02], &Global_54076, 4);
					DECOR_SET_BOOL(&Local_326 + 1480[02], "considerenemy", true);
				}
			}
			Function_701();
			if (IS_PLAYER_DEADEYE(0) && !iLocal_1924)
			{
				iLocal_1924 = 1;
			}
			if (Function_718())
			{
				iLocal_1924 = 0;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_1579);
				Function_640();
				DECOR_SET_BOOL(FIND_OBJECT_IN_LAYOUT(&Local_326, "deadMexGirl"), "corpse_loot_gringo", false);
				Function_293(&bLocal_1736);
				iLocal_1563 = 7;
			}
			break;
		
		case 0x00000007:
			Function_358();
			Function_701();
			Function_717();
			Function_293(&bLocal_1736);
			iLocal_1563 = 8;
			break;
		
		case 0x00000008:
			Function_701();
			Function_358();
			if (Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_336(7, 1, 1);
				HUD_CLEAR_OBJECTIVE();
				if (GET_CURRENT_GRINGO(&Global_54076) != GET_GRINGO_FROM_OBJECT(&Local_326 + 4296))
				{
					Function_321("rebel05_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				Function_293(&bLocal_1736);
				Function_293(&bLocal_1744);
				iLocal_1563 = 9;
			}
			break;
		
		case 0x00000009:
			Function_701();
			Function_358();
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&Local_326 + 4296))
			{
				HUD_CLEAR_OBJECTIVE();
				SET_AUTO_CONVERSATION_LOOK(&Global_54076, 0);
				SET_AUTO_CONVERSATION_LOOK(&bLocal_1579, 0);
				Function_716();
				STOP_FORCE_LOOK_AT_COORD(&bLocal_1579);
				DECOR_REMOVE(&bLocal_1579, "CanBeLasso");
				DECOR_REMOVE(&bLocal_1579, "ignoreactorinduel");
				Function_447();
				Function_329(&(Local_1810[115]), &Local_326 + 1552, "rebel05_rebel", 0, 0x5f5e100, 1);
				bLocal_1910 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(0, &Local_326 + 4776, 2, 0, 0, 1, false);
				TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), bLocal_1910);
				TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
				SQUAD_LEAVE(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"));
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_326 + 1552, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_693(&Local_326 + 1552, &bLocal_1579);
				Function_293(&bLocal_1736);
				iLocal_1563 = 10;
			}
			else if (Function_263(&bLocal_1744) <= 9.0f)
			{
				if (Function_323(&Global_54076, &bLocal_1579, 16.0f))
				{
					Function_715();
				}
				else
				{
					Function_714();
				}
				Function_293(&bLocal_1744);
			}
			break;
		
		case 0x0000000A:
			if (Function_263(&bLocal_1736) <= 2,5f)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), 61, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), 60, 0);
				Function_713();
				Function_293(&bLocal_1736);
				iLocal_1563 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_709(&Local_326 + 1552);
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
			{
				SET_AUTO_CONVERSATION_LOOK(&Global_54076, 1);
				SET_AUTO_CONVERSATION_LOOK(&bLocal_1579, 1);
				Function_692(&Local_326 + 1552, 4,5f, 6,8f);
				Function_291(&Local_326 + 3864);
				fLocal_1967 = Function_291(&Local_326 + 3864);
				bLocal_1910 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_GO_TO_COORD(false, &fLocal_1967, 1);
				TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1910);
				TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
				TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), &bLocal_1579, 1, 3212836864);
				TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_326, "mob_18"), &bLocal_1579, 1, 3212836864);
				TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_326, "mob_2"), &bLocal_1579, 1, 3212836864);
				Function_293(&bLocal_1736);
				iLocal_1563 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_709(&Local_326 + 1552);
			if (Function_323(&Global_54076, &bLocal_1579, 20.0f))
			{
				if (Function_263(&bLocal_1736) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK_FACE_ACTOR(&bLocal_1579, &Global_54076, 1, 3212836864);
					Function_712();
					Function_293(&bLocal_1736);
					iLocal_1563 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			Function_709(&Local_326 + 1552);
			bLocal_1910 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 1.0f, 0, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_326 + 4856, 2, 1, 0, 1, false);
			TASK_GO_TO_COORD(false, &Local_326 + 3008[13], 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_1579, bLocal_1910);
			TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
			SQUAD_JOIN(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), &Local_326 + 1552);
			bLocal_1910 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 0,4f, 0, 0);
			TASK_GO_NEAR_COORD(false, &Local_326 + 3008[13], 5.0f, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(FIND_ACTOR_IN_LAYOUT(&Local_326, "guyWhoBriefsReyes"), bLocal_1910);
			TASK_SEQUENCE_RELEASE(bLocal_1910, 1);
			Function_293(&bLocal_1736);
			iLocal_1563 = 106;
			break;
		
		case 0x0000006A:
			iLocal_1584[0] = 1;
			Function_248();
			STOP_FORCE_LOOK_AT_COORD(&bLocal_1579);
			Function_293(&bLocal_1736);
			bLocal_1562 = true;
			iLocal_1563 = 0;
			break;
	}
	return;
}

void Function_712() //Position: 0x28CC3 / 167107
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_tellsJonResc", "Rebel05_tellsJonResc", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_713() //Position: 0x28D14 / 167188
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel05_CS02_v1_AB", "Rebel05_CS02_v1_AB", false, 1, 1, 0, 1);
		Function_310(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_714() //Position: 0x28D61 / 167265
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_jonRunsAwayUntie", "Rebel05_jonRunsAwayUntie", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_715() //Position: 0x28DBA / 167354
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ReyesWaitingforJohn", "Rebel05_ReyesWaitingforJohn", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_716() //Position: 0x28E19 / 167449
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (Function_323(&bLocal_1581, &Global_54076, 4.0f))
	{
		GET_ACTOR_AXIS(&Global_54076, &Var2, 2);
		GET_POSITION(&Global_54076, &Var0);
		VSCALE(&Var2, 8.0f);
		Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
		TELEPORT_ACTOR(&bLocal_1581, &Var0, 1, 1, 1);
	}
	return;
}

void Function_717() //Position: 0x28E64 / 167524
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_CS02_v1_AA", "Rebel05_CS02_v1_AA", false, 1, 1, 0, 1);
		Function_310(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_718() //Position: 0x28EB1 / 167601
{
	return Function_719(&Local_1986, &iLocal_1984, &uLocal_2018, &uLocal_1985, 4294967295);
}

int Function_719(struct<125> Param0) //Position: 0x28EC7 / 167623
{
	struct<2> Var0;
	
	while (!&Param2 + 140)
	{
		if ((uParam1 < 0 && uParam1 > 3) && (GET_CURRENT_GAME_TIME() - Param2.f_136) < 30.0f)
		{
			if (HUD_IS_FADED())
			{
				Function_343(1.0f);
			}
			Function_214(&Param0);
			PRINTSTRING("Dueling - Streaming Time Out");
			PRINTNL();
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(&Param0 + 8))
				{
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&Param0 + 8);
				}
				iLocal_201 = CREATE_LAYOUT("dueling_layout");
				if (!IS_VOLUME_VALID(&Param0 + 40))
				{
					Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 28), *(&Param0 + 16), StackVal);
					VSCALE(&Var0, 0,5f);
					*(&Param0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_201, "Duel_StayOut", 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
				}
				Param0.f_84 = 4294967293;
				if (&iParam4 >= 4294967295)
				{
					Function_77(&Global_99725[&iParam443] + 228, 512);
				}
				if (Param0.f_80 == 0)
				{
					bLocal_203 = RAND_INT_RANGE(false, true);
				}
				else
				{
					bLocal_203 = RAND_INT_RANGE(false, 2);
				}
				Param2.f_136 = GET_CURRENT_GAME_TIME();
				if (IS_ACTOR_DRUNK(&Param0))
				{
					SET_ACTOR_DRUNK(&Param0, 0);
				}
				SATCHEL_SET_ENABLED(0);
				if (HAS_ACCESSORY_ENUM(&Param0 + 8, 0))
				{
					*(&Param2 + 88) = 1;
				}
				uParam3 = 1004;
				Function_774(&Param0 + 80, Param0.f_52, !IS_ACTOR_ALIVE(&Param0 + 56), &Param0);
				Function_765(&Param0);
				if (Param0.f_120)
				{
					Global_6610 = 0;
					uParam1 = 5;
				}
				else
				{
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_388(&iLocal_103))
				{
					Function_265(&Param2 + 72);
					uParam1 = 2;
					SET_HUD_MAP_DRAW_ENABLED(0);
				}
				else
				{
					Function_763(&Param0);
				}
				break;
			
			case 0x00000002:
				if (Function_763(&Param0) || Function_263(&Param2 + 72) < 2.0f)
				{
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				Global_6610 = 1;
				SET_HUD_MAP_DRAW_ENABLED(0);
				if (IS_ACTOR_ALIVE(&Param0) && IS_ACTOR_ALIVE(&Param0 + 8))
				{
					Param0.f_88 = 0;
					Function_744(&Param0);
					if (HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_IN(1.0f, 1065353216);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					if (Param0.f_48)
					{
						*(&Param2 + 32) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", &Param0 + 88, 8, 0);
					}
					if (!DECOR_CHECK_EXIST(&Param0, "bIsDuelActive"))
					{
						DECOR_SET_BOOL(&Param0, "bIsDuelActive", true);
					}
					uParam1 = 7;
				}
				else
				{
					if (&iParam4 >= 4294967295)
					{
						Function_38(&Global_99725[&iParam443] + 228, 512);
					}
					Function_343(1.0f);
					Function_214(&Param0);
					PRINTSTRING("Dueling - Fail");
					PRINTNL();
					return 1;
				}
				break;
			
			case 0x00000005:
				Function_388(&iLocal_103);
				Function_763(&Param0);
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					if (Function_388(&iLocal_103))
					{
						CAMERA_RESET(0);
						if (HUD_IS_FADED())
						{
							HUD_FADE_IN(1.0f, 1065353216);
						}
					}
				}
				else
				{
					if (!Global_6610)
					{
						RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
						RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8, 1);
						AI_IGNORE_ACTOR(&Param0 + 8);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						GIVE_WEAPON_TO_ACTOR(&Param0 + 8, 4, false, 1, 1);
						TELEPORT_ACTOR(&Param0 + 8, &Param0 + 28, 1, 1, 0);
						Param0.f_88 = 0;
						Function_744(&Param0);
						if (Param0.f_48)
						{
							*(&Param2 + 32) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", &Param0 + 88, 8, 0);
						}
						SET_HUD_MAP_DRAW_ENABLED(0);
						Global_6610 = 1;
					}
					Function_743(&Param0);
					if (Function_741(&uParam3, &Param2 + 56, &Param0, &Param0 + 8, !Param0.f_48))
					{
						if (Param0.f_120 && DECOR_CHECK_EXIST(&Param0, "unpauseduel"))
						{
							DECOR_REMOVE(&Param0, "unpauseduel");
						}
						uParam1 = 10;
					}
				}
				break;
			
			case 0x00000007:
				Function_743(&Param0);
				if (Function_741(&uParam3, &Param2 + 56, &Param0, &Param0 + 8, !Param0.f_48))
				{
					CAMERA_RESET(0);
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					uParam1 = 10;
				}
				break;
			
			case 0x0000000A:
				if ((IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "draw") || IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "nhold_draw")) && !&Param2 + 104)
				{
					Function_740("Dueling_Tutorial_DrawNow", "DUEL_CAMERA_CUT_MASTER", 3212836864, 0, 0, 0, 0);
					*(&Param2 + 104) = 1;
				}
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "draw") || IS_ACTION_NODE_PLAYING_PARTIAL(&Param0 + 8, "nhold_draw"))
				{
				}
				Function_737(&Param0);
				if (Function_736())
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					if (!&Param2 + 16)
					{
						DYNAMICMIXER_DETRIGGERSTATE(&Param2 + 24, 1);
						*(&Param2 + 8) = 0;
						*(&Param2 + 8) = &Param2 + 8;
					}
					if (!IS_WEAPON_DRAWN(&Param0 + 8))
					{
						*(&Param2 + 96) = 1;
					}
					uParam1 = 11;
				}
				else if (Function_735() == 5003)
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&Param0), "iDuelResult", 5003);
					Function_265(&Param2 + 40);
					uParam1 = 13;
				}
				break;
			
			case 0x0000000B:
				Function_737(&Param0);
				if (Function_735() >= 4294967295)
				{
					Function_726(&Param0, &Param2 + 96);
					if (&Param2 + 88)
					{
						if (!HAS_ACCESSORY_ENUM(&Param0 + 8, 0))
						{
							*(&Param2 + 88) = 0;
							Function_89(455, 1, 0, 0);
						}
					}
					Function_265(&Param2 + 40);
					if (Function_735() == 5003)
					{
						*(&Param2 + 120) = 1;
						uParam1 = 13;
					}
					else
					{
						*(&Param2 + 128) = 1;
						if (Param0.f_124)
						{
							uParam1 = 14;
						}
						else
						{
							Function_725(&Param0);
							uParam1 = 12;
						}
					}
				}
				break;
			
			case 0x0000000C:
				Function_737(&Param0);
				if (Function_724())
				{
					if (!bLocal_205)
					{
						Function_230(&Param0);
					}
					*(&Param2 + 112) = 1;
				}
				if (Function_720(&Param0))
				{
					uParam1 = 13;
				}
				break;
			
			case 0x0000000D:
				Function_737(&Param0);
				if (IS_ACTOR_VALID(&Param0 + 8))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Param0 + 8);
				}
				if (Function_724())
				{
					if (!bLocal_205)
					{
						Function_230(&Param0);
					}
					*(&Param2 + 112) = 1;
				}
				if (&Param2 + 112)
				{
					if (IS_SCRIPT_VALID(&Param2 + 32))
					{
						TERMINATE_SCRIPT(&Param2 + 32);
					}
					if (IS_ACTOR_VALID(&Param0))
					{
						if (IS_ACTOR_ALIVE(&Param0) && DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&Param0), "iDuelResult") != 5003)
						{
							LOG_ERROR("player should be dead, killing him!");
							SET_ACTOR_INVULNERABILITY(&Param0, false);
							KILL_ACTOR(&Param0);
						}
					}
					Function_214(&Param0);
					PRINTSTRING("Dueling - Terminating Cleanly");
					PRINTNL();
					*(&Param2 + 140) = 1;
				}
				break;
			
			case 0x0000000E:
				if (!bLocal_205)
				{
					Function_230(&Param0);
				}
				if (IS_SCRIPT_VALID(&Param2 + 32))
				{
					TERMINATE_SCRIPT(&Param2 + 32);
				}
				Function_214(&Param0);
				PRINTSTRING("Dueling - Terminating Cleanly");
				PRINTNL();
				*(&Param2 + 140) = 1;
				break;
		}
		return 0;
	}
	if (&Param2 + 128)
	{
		if (IS_SCRIPT_VALID(&Param2 + 32))
		{
			TERMINATE_SCRIPT(&Param2 + 32);
		}
		Function_214(&Param0);
		PRINTSTRING("Dueling - Pass");
		PRINTNL();
		return 1;
	}
	if (&Param2 + 120)
	{
		if (&iParam4 >= 4294967295)
		{
			Function_38(&Global_99725[&iParam443] + 228, 512);
		}
		if (IS_SCRIPT_VALID(&Param2 + 32))
		{
			TERMINATE_SCRIPT(&Param2 + 32);
		}
		Function_214(&Param0);
		PRINTSTRING("Dueling - Fail");
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_720(struct<16> Param0) //Position: 0x29761 / 169825
{
	float fVar0;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_204);
	Function_721(&Param0, fVar0);
	if (fVar0 < 5.0f)
	{
		return 1;
	}
	return 0;
}

void Function_721(struct<16> Param0) //Position: 0x29790 / 169872
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					if (DECOR_CHECK_EXIST(&uVar2, "DuelCrowdActorReactionTimer"))
					{
						if (bParam1 < DECOR_GET_FLOAT(&uVar2, "DuelCrowdActorReactionTimer"))
						{
							bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
							Function_722(&uVar2, bVar3);
							DECOR_REMOVE(&uVar2, "DuelCrowdActorReactionTimer");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_722(var uParam0, bool bParam1) //Position: 0x29892 / 170130
{
	if ((bParam1 && 8) != 0)
	{
		Function_723(&uParam0, bParam1, "hat_tip");
	}
	else if ((bParam1 && 32) != 0)
	{
	}
	else
	{
		Function_723(&uParam0, bParam1, "Reaction");
	}
	return;
}

void Function_723(var uParam0, var uParam1, struct<16> Param2) //Position: 0x298D5 / 170197
{
	char* cVar0[64];
	
	if (uParam1 & 512 != 0)
	{
		strcpy(&cVar0, "crowd_duel_left/", 64);
	}
	else if (uParam1 & 1024 != 0)
	{
		strcpy(&cVar0, "crowd_duel_right/", 64);
	}
	else
	{
		strcpy(&cVar0, "crowd_duel_center/", 64);
	}
	stradd(&cVar0, &Param2, 64);
	SET_ACTION_NODE_FOR_ACTOR(&uParam0, &cVar0);
	return;
}

bool Function_724() //Position: 0x2994D / 170317
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x0000138E:
				return 1;
				break;
			
			default:
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_725(struct<16> Param0) //Position: 0x29984 / 170372
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	fLocal_204 = GET_CURRENT_GAME_TIME();
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					bVar3 = RAND_FLOAT_RANGE(1,5f, 2.0f);
					DECOR_SET_FLOAT(&uVar2, "DuelCrowdActorReactionTimer", bVar3);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_726(int iParam0, int iParam1) //Position: 0x29A24 / 170532
{
	switch (Function_735())
	{
		case 0x0000138A:
			Function_26(Function_730(GET_ACTOR_ENUM(&iParam0), 6, 4), (!Global_6623 && !Function_729()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5002);
			MEMORY_CLEAR_ALL(&iParam0 + 8);
			SET_ACTOR_FACE_STYLE(&iParam0 + 8, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0 + 8, false);
			AI_GLOBAL_CLEAR_DANGER(&iParam0 + 8);
			AUDIO_PLAY_VOCAL_EFFECT(&iParam0 + 8, 10, 1);
			Function_89(451, 1, 0, 0);
			Function_89(454, 1, 0, 0);
			Function_89(452, 1, 0, 0);
			if (!Global_6623 && !(((Function_728(48) || Function_728(74)) || Function_728(51)) || Function_728(67)))
			{
				Function_99(100, 1, 0);
				Function_116(200, 1, 0);
			}
			Function_727(6, Global_43789);
			break;
		
		case 0x00001389:
			Function_26(Function_730(GET_ACTOR_ENUM(&iParam0), 6, 4), (!Global_6623 && !Function_729()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5001);
			Function_89(451, 1, 0, 0);
			Function_89(452, 1, 0, 0);
			if (!Global_6623 && !(((Function_728(48) || Function_728(74)) || Function_728(51)) || Function_728(67)))
			{
				Function_99(50, 1, 0);
			}
			if (iParam1 && !(((Function_728(48) || Function_728(74)) || Function_728(51)) || Function_728(67)))
			{
				if (!DECOR_CHECK_EXIST(&iParam0 + 8, "honor"))
				{
					Function_116(4294967196, 1, 0);
				}
				else
				{
					DECOR_SET_BOOL(&iParam0, "bDrewFirst", true);
				}
			}
			Function_727(6, Global_43789);
			break;
		
		case 0x0000138C:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5004);
			break;
		
		case 0x0000138B:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5003);
			break;
		
		case 0x0000138D:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "iDuelResult", 5005);
			break;
	}
	return;
}

void Function_727(int iParam0, int iParam1) //Position: 0x29C3C / 171068
{
	if (!Function_145(3))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_46760[0])
			{
				if (IS_PS3() || Function_147())
				{
					Function_153(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_46914[0])
			{
				Function_153(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_46816[0])
			{
				Function_153(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_46796[1])
			{
				Function_153(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_46894[2])
			{
				Function_153(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_46894[3])
			{
				Function_153(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_46926[2])
			{
				Function_153(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_46760[0])
			{
				if (Function_146(2) && !Function_132(2))
				{
					Function_153(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_728(int iParam0) //Position: 0x29D47 / 171335
{
	if (Global_116927[iParam06] == 5)
	{
		return 1;
	}
	return 0;
}

bool Function_729() //Position: 0x29D5C / 171356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_99725)
	{
		if (Function_728(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_730(bool bParam0, bool bParam1, bool bParam2) //Position: 0x29D82 / 171394
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_734(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_731(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_731(bParam0, bParam1, bParam2, 4294967295);
}

int Function_731(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x29DE0 / 171488
{
	var uVar0;
	
	if (!Function_733(bParam2))
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
	uVar0 = Function_734(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_732(uVar0);
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

var Function_732(int iParam0) //Position: 0x29F44 / 171844
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

bool Function_733(int iParam0) //Position: 0x29F82 / 171906
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_734(int iParam0, int iParam1, bool bParam2) //Position: 0x29F97 / 171927
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_735() //Position: 0x29FB7 / 171959
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001389:
				return 5001;
				break;
			
			case 0x0000138A:
				return 5002;
				break;
			
			case 0x0000138C:
				return 5004;
				break;
			
			case 0x0000138B:
				return 5003;
				break;
			
			case 0x0000138D:
				return 5005;
				break;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_736() //Position: 0x2A023 / 172067
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001388:
				return 1;
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_737(int iParam0) //Position: 0x2A057 / 172119
{
	if (iLocal_191 == 0)
	{
		if (Function_739(&iParam0))
		{
			Function_738(&iParam0);
			iLocal_191 = 1;
		}
	}
	return;
}

void Function_738(struct<16> Param0) //Position: 0x2A075 / 172149
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
					if ((bVar3 && 32) == 0)
					{
						Function_723(&uVar2, bVar3, "GunfireShock");
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

bool Function_739(int iParam0) //Position: 0x2A119 / 172313
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = 0;
	uVar1 = GET_EVENT_LAYOUT();
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	uVar3 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar3))
	{
		while (IS_OBJECT_VALID(&uVar3))
		{
			uVar6 = GET_EVENT_FROM_OBJECT(&uVar3);
			if (IS_EVENT_VALID(&uVar6))
			{
				if (GET_EVENT_TYPE(&uVar6) == 6)
				{
					uVar4 = GET_EVENT_PERPETRATOR(&uVar6);
					if (IS_OBJECT_VALID(&uVar4))
					{
						if (GET_OBJECT_TYPE(&uVar4) == 15)
						{
							iVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
							if (IS_ACTOR_VALID(&iVar5))
							{
								if (&iVar5 == &iParam0)
								{
									iVar0 = 1;
								}
								else if (&iVar5 == &iParam0 + 8)
								{
									iVar0 = 1;
								}
							}
						}
					}
				}
			}
			uVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
	}
	DESTROY_ITERATOR(&uVar2);
	return iVar0;
}

void Function_740(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2A1D3 / 172499
{
	if (IS_STRING_VALID(&uParam3))
	{
		PRINT_BIG_FORMAT(&uParam2, &uParam0, &uParam3, &uParam4, &uParam5, &uParam6, 0, &uParam1);
	}
	else
	{
		PRINT_BIG(&uParam0, &uParam2, 0, 0, &uParam1);
	}
}

bool Function_741(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2A20E / 172558
{
	if (!Function_267(&bParam1))
	{
		Function_265(&bParam1);
	}
	switch (uParam0)
	{
		case 0x000003EC:
			UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(&uParam3));
			UI_ENTER("RacePosition");
			PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
			if (Global_116927[516] != 5 && bParam4)
			{
				Function_137("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
			}
			Function_293(&bParam1);
			uParam0 = 1006;
			break;
		
		case 0x000003EE:
			if (Function_263(&bParam1) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
			{
				UI_EXIT("RacePosition");
			}
			if (Function_263(&bParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial0Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				Function_293(&bParam1);
				uParam0 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_263(&bParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial1Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_293(&bParam1);
				uParam0 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_263(&bParam1) < 5.0f)
			{
				DECOR_SET_BOOL(&iParam2, "Tutorial2Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_742();
				Function_293(&bParam1);
				uParam0 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_742() //Position: 0x2A42E / 173102
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = GET_OBJECTSET_SIZE(&uLocal_189);
	bVar1 = false;
	while (bVar1 <= iVar0)
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_189));
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(&uVar2, "DuelIsCrowdActor");
					if ((bVar3 && 16384) != 0)
					{
						if ((bVar3 && 16) != 0)
						{
							Function_723(&uVar2, bVar3, "point");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_743(struct<16> Param0) //Position: 0x2A4C9 / 173257
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iLocal_191 = 0;
	return;
}

void Function_744(struct<89> Param0) //Position: 0x2A4DE / 173278
{
	var uVar0;
	var uVar1;
	struct<61> Var2;
	
	bLocal_205 = false;
	iLocal_206 = 0;
	if (!IS_ACTOR_VALID(&Param0 + 8))
	{
		LOG_ERROR("dueler is not valid, exiting dueling");
		Function_214(&Param0);
		TERMINATE_THIS_SCRIPT();
	}
	AUDIO_ALLOW_PREDUEL_SPEECH(&Param0 + 8);
	AUDIO_ALLOW_PREDUEL_SPEECH(&Param0);
	if (IS_VOLUME_VALID(&Param0 + 40))
	{
		FIRE_STOP_FLAMES_IN_VOLUME(&Param0 + 40);
		Function_762(&Param0 + 40);
		Function_760(&Param0 + 40, &iLocal_201, 0);
	}
	else
	{
		FIRE_STOP_ALL_FIRES();
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&Param0))
	{
		FIRE_STOP_ON_ACTOR(&Param0);
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 8))
	{
		FIRE_STOP_ON_ACTOR(&Param0 + 8);
	}
	iLocal_192 = 0;
	if (Function_758(1))
	{
		Function_297(9);
		iLocal_192 = 1;
	}
	Function_757(&Param0 + 8);
	if (!Function_756(GET_ACTOR_ENUM(&Param0), 6, 4))
	{
		Function_731(GET_ACTOR_ENUM(&Param0), 6, 4, 4294967295);
		Param0.f_48 = 1;
	}
	else if (Function_87(Function_730(GET_ACTOR_ENUM(&Param0), 6, 4)) < 0)
	{
		if (!Param0.f_48)
		{
		}
		Param0.f_48 = 1;
	}
	else
	{
		Param0.f_48 = 0;
	}
	Param0.f_88 = 0;
	(&Param0 + 88)->f_4 = -1.0f;
	*(&Param0 + 88 + 8) = &Param0;
	*(&Param0 + 88 + 16) = &Param0 + 8;
	SATCHEL_SET_ENABLED(0);
	if (Param0.f_80 != 3)
	{
		MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8, &Param0);
		SET_ACTOR_UPDATE_PRIORITY(&Param0 + 8, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Param0 + 8, 100.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 53, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 54, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 31, -1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Param0 + 8, 59, 0.0f);
	}
	Function_601(&Param0 + 8, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Param0, 0);
	ACTOR_FORCE_WEAPON_RENDER(&Param0 + 8, 1, 1);
	ACTOR_ENABLE_VARIABLE_MESH(&Param0 + 8, 5, true);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_755(&Param0);
	if (!Param0.f_52)
	{
		uVar0 = "Dueling_Tell_Sequence_Tutorial";
	}
	else
	{
		uVar0 = "Dueling_Tell_Sequence_Hostage";
	}
	if (!BEGIN_DUEL(&Param0, &Param0 + 8, *(&Param0 + 16), *(&Param0 + 28), "duel_player", &bLocal_193, "duel_player", &bLocal_195, &uVar0))
	{
		LOG_ERROR("Duel could not start");
	}
	if (Param0.f_52)
	{
		if (!IS_ACTOR_ALIVE(&Param0 + 56))
		{
			*(&Param0 + 56) = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_201, "duelhostage", 59, *(&Param0 + 28), Vector(0.0f, 0.0f, 0.0f));
		}
		Function_291(&Param0 + 8);
		TELEPORT_ACTOR_WITH_HEADING(&Param0 + 56, Function_291(&Param0 + 8), GET_OBJECT_HEADING(&Param0 + 8), 1, 1, true);
		RESET_ANIM_SET_FOR_ACTOR(&Param0 + 56, 1);
		SET_LINKED_ANIM_TARGET(&Param0 + 8, &Param0 + 56);
		SET_ANIM_SET_FOR_ACTOR(&Param0 + 8, "duel_hostage", 0);
		SET_ANIM_SET_FOR_ACTOR(&Param0 + 56, "duel_hostage", 0);
		DESTROY_OBJECT(DROP_ACCESSORY_ENUM(&Param0 + 8, 0));
		ADD_DUEL_HOSTAGE(&Param0 + 56, &Param0);
		SET_EMOTION(&Param0 + 56, 3, -1.0f);
		TASK_FLEE_ACTOR(&Param0 + 56, &Param0 + 8, 20.0f, -1.0f, 0, 0, 0);
	}
	Function_763(&Param0);
	if (IS_VOLUME_VALID(&Param0 + 72))
	{
		uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_201, 4294967295, 1);
		LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(&uVar1, &Param0 + 72, "", 1);
		Function_754(&uVar1);
		DESTROY_OBJECTSET(&uVar1);
	}
	iLocal_207 = 0;
	*(&Var2 + 64) = 6;
	*(&Var2 + 168) = 6;
	uVar30 = 6;
	if (Function_752(&Var2, Param0.f_84))
	{
		iLocal_207 = Var2.f_56;
		if (Var2.f_60 >= 0)
		{
			if (Var2.f_56 == 1)
			{
				Function_751(&iLocal_201, &Var2, &Param0, &uVar30);
			}
			else if (Var2.f_56 == 2)
			{
				Function_748(50.0f, &iLocal_201, &Var2, &Param0, &uVar30);
			}
		}
	}
	Function_745(&Param0, &iLocal_201);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&Param0 + 8);
	if (!Function_96())
	{
		if (Param0.f_80 != 0 && Param0.f_68 < 50)
		{
			Param0.f_68 = 50;
		}
		else if (Param0.f_80 == 1)
		{
			if (Param0.f_68 >= 75)
			{
				Param0.f_68 = 75;
			}
			else if (Param0.f_68 > 50 && !Global_6623)
			{
				Param0.f_68 = 50;
			}
		}
		else if ((Param0.f_80 != 1 && Param0.f_68 > 75) && !Global_6623)
		{
			Param0.f_68 = 75;
		}
	}
	fVar37 = 10.0f;
	if (Function_96())
	{
		if (Param0.f_80 == 1)
		{
			fVar37 = 6.0f;
		}
		else if (Param0.f_80 == 2)
		{
			fVar37 = (6.0f - 2.0f);
		}
	}
	if (Param0.f_48)
	{
		if (!SET_DUEL_DIFFICULTY(&Param0, (fVar37 * 2.0f), Param0.f_68, Param0.f_64))
		{
			LOG_ERROR("Duel could not set difficulty");
		}
	}
	else if (!SET_DUEL_DIFFICULTY(&Param0, fVar37, Param0.f_68, Param0.f_64))
	{
		LOG_ERROR("Duel could not set difficulty");
	}
	if (DECOR_CHECK_EXIST(&Param0, "iDuelResult"))
	{
		DECOR_REMOVE(&Param0, "iDuelResult");
	}
	Global_98975 = 1;
	uVar38 = GET_OBJECT_MODEL_NAME(&Param0);
	ADD_NEW_EVENT_RESPONSE(5001, 38, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5002, 39, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5003, 40, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5004, 41, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5000, 44, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5006, 43, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5005, 42, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5007, 46, 15, &uVar38);
	ADD_NEW_EVENT_RESPONSE(5006, 43, 15, GET_OBJECT_MODEL_NAME(&Param0 + 8));
	_DYNAMICMIXER_2();
	Function_185(1);
	TASK_STAND_STILL(&Param0 + 8, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&Param0 + 8, true);
	MEMORY_ALLOW_SHOOTING(&Param0 + 8, true);
	ACTOR_END_FORCE_HOLSTER(&Param0 + 8);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Param0 + 8, 0);
	MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8, &Global_54076);
	MEMORY_ATTACK_ON_SIGHT(&Param0 + 8, 1);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(GET_ACTOR_FACTION(&Param0 + 8), GET_ACTOR_FACTION(&Param0), 1.0f);
	FIRE_STOP_ON_ACTOR(&Param0 + 8);
	AI_CLEAR_DONT_HARM_ACTOR(&Param0);
	TASK_CLEAR(&Param0);
	FIRE_STOP_ON_ACTOR(&Param0);
	SET_ACTOR_INVULNERABILITY(&Param0, false);
	Function_371(&iLocal_197, 0.0f);
	return;
}

int Function_745(int iParam0, int iParam1) //Position: 0x2AB87 / 174983
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam1, "volAmbientSpectators", 2, *(&iParam0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(80.0f, 50.0f, 80.0f));
	if (!IS_VOLUME_VALID(&uVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TASK_NEARBY_ACTORS: Unable to create search volume.");
		return 0;
	}
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 15, 1);
	iVar2 = LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
	uLocal_189 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 15, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar1));
		if (((((&iVar4 == &iParam0 + 8 && &iVar4 == &iParam0 + 56) && &iVar4 == &iParam0) && IS_ACTOR_HUMAN(&iVar4)) && !IS_OBJECT_IN_OBJECTSET(&iVar4, &uLocal_187)) && !DECOR_CHECK_EXIST(&iVar4, "ignoreactorinduel"))
		{
			if (DECOR_CHECK_EXIST(&iVar4, "DuelIsCrowdActor"))
			{
				Function_746(&iVar4, &iParam0, &iParam1);
				ADD_OBJECT_TO_OBJECTSET(&iVar4, &uLocal_189);
			}
		}
		bVar3++;
	}
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (IS_OBJECTSET_VALID(&uVar1))
	{
		DESTROY_OBJECTSET(&uVar1);
	}
	return 1;
}

void Function_746(var uParam0, int iParam1, int iParam2) //Position: 0x2AD08 / 175368
{
	bool bVar0;
	var uVar1[2];
	
	iParam2 = &iParam2;
	if (DECOR_CHECK_EXIST(&uParam0, "DuelIsCrowdActor"))
	{
		bVar0 = DECOR_GET_INT(&uParam0, "DuelIsCrowdActor");
		Function_747(bVar0, &uVar1);
		SET_ANIM_SET_FOR_ACTOR(&uParam0, &(uVar1[0]), 0);
		SET_ACTION_NODE_FOR_ACTOR(&uParam0, &(uVar1[1]));
	}
	TASK_FACE_ACTOR(&uParam0, &iParam1 + 8, 1, 3212836864);
	TASK_PRIORITY_SET(&uParam0, true);
	return;
}

void Function_747(var uParam0, int[] iParam1) //Position: 0x2AD8B / 175499
{
	bool bVar0;
	
	bVar0 = false;
	if (uParam0 & 16 != 0)
	{
		if (uParam0 & 16384 == 0)
		{
			bVar0 = true;
		}
	}
	if (uParam0 & 32 != 0)
	{
		iParam1[0] = "stand_wringhands";
		iParam1[1] = "stand_wringhands";
	}
	else if (uParam0 & 256 != 0)
	{
		iParam1[0] = "crowd_duel";
		if (bVar0)
		{
			iParam1[1] = "crowd_duel_center/point";
		}
		else
		{
			iParam1[1] = "crowd_duel_center";
		}
	}
	else if (uParam0 & 512 != 0)
	{
		iParam1[0] = "crowd_duel";
		if (bVar0)
		{
			iParam1[1] = "crowd_duel_left/point";
		}
		else
		{
			iParam1[1] = "crowd_duel_left";
		}
	}
	else if (uParam0 & 1024 != 0)
	{
		iParam1[0] = "crowd_duel";
		if (bVar0)
		{
			iParam1[1] = "crowd_duel_right/point";
		}
		else
		{
			iParam1[1] = "crowd_duel_right";
		}
	}
	else
	{
		iParam1[0] = "crowd_duel";
		iParam1[1] = "crowd_duel_center";
	}
	return;
}

int Function_748(var uParam0, var uParam1, struct<61> Param2) //Position: 0x2AF42 / 175938
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	var uVar8;
	bool bVar10;
	
	Var2 = Vector(uParam0, 50.0f, uParam0);
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam1, "volAmbientSpecsToGrab", 2, *(&iParam3 + 16), Vector(0.0f, 0.0f, 0.0f), Var2);
	if (!IS_VOLUME_VALID(&uVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TELEPORT_SPECTATORS: Unable to create search volume.");
		return 0;
	}
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &uParam1, 15, 1);
	iVar4 = LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
	iVar5 = 0;
	bVar6 = false;
	while (bVar6 <= iVar4)
	{
		iVar7 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uVar1));
		if ((((((((((&iVar7 == &iParam3 + 8 && &iVar7 == &iParam3 + 56) && &iVar7 == &iParam3) && IS_ACTOR_HUMAN(&iVar7)) && !IS_ACTOR_HOGTIED(&iVar7)) && !IS_ACTOR_RIDING_VEHICLE(&iVar7)) && !IS_ACTOR_RIDING(&iVar7)) && !IS_ACTOR_DRUNK(&iVar7)) && !IS_OBJECT_IN_OBJECTSET(&iVar7, &uLocal_187)) && !DECOR_CHECK_EXIST(&iVar7, "ignoreactorinduel")) && iVar5 > Param2.f_60)
		{
			uParam4[iVar5] = &iVar7;
			Function_750(GET_PERS_CHAR_FROM_ACTOR(&iVar7), 1);
			uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param2 + 64[iVar52]), *(&iParam3 + 28), StackVal);
			bVar10 = UNK_0x9C40E671(&uVar8);
			TELEPORT_ACTOR_WITH_HEADING(&iVar7, *(&Param2 + 64[iVar52]), bVar10, 1, 1, true);
			TASK_CLEAR(&iVar7);
			RESET_ANIM_SET_FOR_ACTOR(&iVar7, 1);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar7, 1);
			TASK_FACE_COORD(&iVar7, &Param2 + 36, 1);
			TASK_PRIORITY_SET(&iVar7, true);
			iVar5++;
		}
		bVar6++;
	}
	Function_749(&uParam4, iVar5, 0, &Param2);
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (IS_OBJECTSET_VALID(&uVar1))
	{
		DESTROY_OBJECTSET(&uVar1);
	}
	return 1;
}

int Function_749(var[] uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2B138 / 176440
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + bVar1) % iParam1);
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
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + bVar1) % iParam1);
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
			Function_77(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_77(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_77(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_77(&bVar9, 64);
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

int Function_750(bool bParam0, bool bParam1) //Position: 0x2B284 / 176772
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&bParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bParam0, 1);
			return 1;
		}
	}
	return 0;
}

void Function_751(var uParam0, struct<61> Param1) //Position: 0x2B336 / 176950
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar5;
	var uVar6;
	
	Param2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2 };
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Param1.f_60)
	{
		uVar2 = (*&Param1 + 168)[iVar1];
		if (uVar2 & 32768 == 0)
		{
			uVar3 = Vector(StackVal, StackVal, StackVal) - Vector(*(&Param1 + 64[iVar12]), *(&Param2 + 28), StackVal);
			bVar5 = UNK_0x9C40E671(&uVar3);
			uParam3[iVar0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam0, Function_54(), uLocal_208[iVar0], *(&Param1 + 64[iVar12]), Vector(0.0f, bVar5, 0.0f));
			TASK_FACE_COORD(&(uParam3[iVar0]), &Param1 + 36, 1);
			TASK_PRIORITY_SET(&(uParam3[iVar0]), true);
			uVar6 = GET_OBJECT_MODEL_NAME(&(uParam3[iVar0]));
			PRINTFLOAT(bVar5);
			PRINTNL();
			iVar0++;
		}
		iVar1++;
	}
	Function_749(&uParam3, iVar0, 0, &Param1);
}

bool Function_752(struct<61> Param0) //Position: 0x2B403 / 177155
{
	if (iParam1 <= 0)
	{
		return Function_753(&Param0, iParam1);
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

int Function_753(struct<61> Param0) //Position: 0x2E18C / 188812
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

void Function_754(var uParam0) //Position: 0x2EA2E / 191022
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
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

void Function_755(int iParam0) //Position: 0x2EA7D / 191101
{
	bool bVar0;
	void fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		fVar1 = GET_WEAPON_EQUIPPED(&iParam0, true);
		if (Function_165(fVar1))
		{
			fVar2 = ACTOR_GET_WEAPON_AMMO(&iParam0, fVar1);
			fVar3 = (GET_WEAPON_MAX_AMMO(fVar1) - fVar2);
			fVar4 = _GET_AMMO_AMOUNT(&iParam0, GET_AMMO_ENUM(fVar1), 0);
			if (fVar3 < fVar4)
			{
				bVar0 = (_GET_AMMO_AMOUNT(&iParam0, GET_AMMO_ENUM(fVar1), 0) + GET_WEAPON_MAX_AMMO(fVar1));
				if (bVar0 <= 0.0f)
				{
					_SET_ACTOR_AMMO_OF_TYPE(&iParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
				}
			}
			ACTOR_ADD_WEAPON_AMMO(&iParam0, fVar1, fVar3);
			bVar0 = (_GET_AMMO_AMOUNT(&iParam0, GET_AMMO_ENUM(fVar1), 0) - fVar3);
			if (bVar0 <= 0.0f)
			{
				_SET_ACTOR_AMMO_OF_TYPE(&iParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
			}
		}
	}
	return;
}

bool Function_756(bool bParam0, int iParam1, int iParam2) //Position: 0x2EB26 / 191270
{
	int iVar0;
	
	iVar0 = Function_730(bParam0, iParam1, iParam2);
	return Function_20(iVar0);
}

void Function_757(int iParam0) //Position: 0x2EB3C / 191292
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

bool Function_758(int iParam0) //Position: 0x2EB73 / 191347
{
	return Function_759(&Global_43580, iParam0);
}

int Function_759(var uParam0, int iParam1) //Position: 0x2EB81 / 191361
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_760(bool bParam0, bool bParam1, int iParam2) //Position: 0x2EB9E / 191390
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!IS_VOLUME_VALID(&bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&bParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &bParam1, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(&bParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		iVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&iVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
			if (((!ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3) && IS_ACTOR_VEHICLE(&iVar3)) && &iVar3 == &iParam2) && !Function_761(&iVar3))
			{
				bVar4 = false;
				while (bVar4 <= GET_NUM_DRAFTED_ACTORS(&iVar3))
				{
					uVar5 = GET_DRAFT_ACTOR(bVar4, &iVar3);
					if (IS_ACTOR_VALID(&uVar5))
					{
						DESTROY_ACTOR(&uVar5);
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= (GET_NUM_AVAILABLE_SEATS(&iVar3) + GET_NUM_OCCUPIED_SEATS(&iVar3)))
				{
					if (IS_SEAT_OCCUPIED(&iVar3, bVar4))
					{
						uVar6 = GET_ACTOR_IN_VEHICLE_SEAT(&iVar3, bVar4);
						if (IS_ACTOR_VALID(&uVar6))
						{
							DESTROY_ACTOR(&uVar6);
						}
					}
					bVar4++;
				}
				DESTROY_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_761(int iParam0) //Position: 0x2ECAA / 191658
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	return (bVar0 <= 1155 && bVar0 >= 1176);
}

void Function_762(var uParam0) //Position: 0x2ECD1 / 191697
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_VOLUME(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) == 29)
		{
			DESTROY_OBJECT(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_763(int iParam0) //Position: 0x2ED1E / 191774
{
	bool bVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	struct<9> Var13;
	
	if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&iParam0 + 40, 0);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam0 + 40))
	{
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam0 + 40);
	}
	if (!IS_OBJECTSET_VALID(&uLocal_185))
	{
		uLocal_185 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_201, 15, 1);
	}
	else
	{
		Function_764(&uLocal_185);
	}
	if (!IS_ACTORSET_VALID(&uLocal_187))
	{
		uLocal_187 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_201, "DuelFleedActors", 0);
	}
	bVar0 = LOCATE_ACTORS_IN_VOLUME(&iParam0 + 40, &uLocal_185, 0, 1);
	strcpy(&cVar1, "************** ", 32);
	stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	bVar9 = false;
	while (bVar9 <= bVar0)
	{
		iVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar9, &uLocal_185));
		if ((((&iVar11 == &iParam0 + 8 && &iVar11 == &iParam0 + 56) && &iVar11 == &iParam0) && !DECOR_CHECK_EXIST(&iVar11, "ignoreactorinduel")) && !DECOR_CHECK_EXIST(&iVar11, "DuelIsCrowdActor"))
		{
			bVar10 = true;
			bVar12 = false;
			if (IS_ACTOR_HORSE(&iVar11))
			{
				if (!IS_ACTOR_MOUNTED(&iVar11))
				{
					DESTROY_ACTOR(&iVar11);
					bVar12 = true;
				}
				else
				{
					SET_ALLOW_RIDE_BY_PLAYER(&iVar11, 0);
				}
			}
			if (!bVar12 && !Function_761(&iVar11))
			{
				if (!GET_TASK_STATUS(&iVar11, 25) != 1)
				{
					AI_SET_NAV_ACTOR_WIDTH(&iVar11, 0,5f);
					TASK_CLEAR(&iVar11);
					vVar13 = Vector(0.0f, 0.0f, 0.0f);
					GET_VOLUME_SCALE(&iParam0 + 40, &vVar13);
					fVar15 = vVar13.z;
					if (fVar15 < 40.0f)
					{
						fVar15 = -1.0f;
					}
					TASK_FLEE_ACTOR(&iVar11, &iParam0, fVar15, -1.0f, 0, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iVar11, &iParam0 + 40, 4, 1);
					if (!IS_ACTOR_IN_ACTORSET(&uLocal_187, &iVar11))
					{
						ADD_ACTORSET_MEMBER(&uLocal_187, &iVar11);
					}
				}
			}
		}
		bVar9++;
	}
	if (bVar10)
	{
		return 0;
	}
	return 1;
}

void Function_764(var uParam0) //Position: 0x2EF09 / 192265
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

void Function_765(struct<85> Param0) //Position: 0x2EF49 / 192329
{
	struct<61> Var0;
	
	*(&Var0 + 64) = 6;
	*(&Var0 + 168) = 6;
	if (Param0.f_84 <= 0)
	{
		if (Function_752(&Var0, Param0.f_84))
		{
			if (Var0.f_56 == 1)
			{
				iVar29 = 0;
				iVar28 = 0;
				while (iVar28 <= Var0.f_60)
				{
					uVar30 = (*&Var0 + 168)[iVar28];
					if (uVar30 & 32768 == 0)
					{
						uLocal_208[iVar29] = Function_766(&(Global_46972[0]), 1, 0, 1);
						Function_359(&iLocal_103, uLocal_208[iVar29], 3, 0);
						iVar29++;
					}
					iVar28++;
				}
			}
		}
	}
	return;
}

var Function_766(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2EFD3 / 192467
{
	return Function_767(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_767(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2EFEA / 192490
{
	return Function_768(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_768(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x2F008 / 192520
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_773();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_439(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_772(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_772(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_771(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_439(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_771(bVar0))
				{
					Function_770();
				}
				Function_769(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_439(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
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
	return bVar0;
}

void Function_769(int iParam0) //Position: 0x2F301 / 193281
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

void Function_770() //Position: 0x2F3B5 / 193461
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

bool Function_771(bool bParam0) //Position: 0x2F3F0 / 193520
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_772(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2F41D / 193565
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
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

void Function_773() //Position: 0x2F578 / 193912
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_770();
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
	Function_770();
	return;
}

void Function_774(var uParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2F5C4 / 193988
{
	Function_775(&iLocal_103, "duel_player", 5, 0);
	Function_775(&iLocal_103, "Dueling/duel_player", 8, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			Function_359(&iLocal_103, 59, 2, 0);
		}
		Function_775(&iLocal_103, "duel_hostage", 5, 0);
		Function_775(&iLocal_103, "Dueling/duel_hostage", 8, 0);
		bLocal_193 = "duel_hostage";
	}
	else
	{
		if ((Function_756(GET_ACTOR_ENUM(&uParam3), 6, 4) && uParam0 != 0) && !Global_6623)
		{
			if (Function_87(Function_730(GET_ACTOR_ENUM(&uParam3), 6, 4)) > 10)
			{
				uParam0 = 2;
			}
			else if (Function_87(Function_730(GET_ACTOR_ENUM(&uParam3), 6, 4)) > 5)
			{
				uParam0 = 1;
			}
		}
		switch (uParam0)
		{
			case 0x00000003:
				bLocal_193 = "duel_player";
				break;
			
			case 0x00000000:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_775(&iLocal_103, "duel_easy_A_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Easy_A_npc", 8, 0);
						bLocal_193 = "duel_Easy_A_npc";
						break;
					
					case 0x00000001:
						Function_775(&iLocal_103, "duel_easy_B_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Easy_B_npc", 8, 0);
						bLocal_193 = "duel_Easy_B_npc";
						break;
				}
				break;
			
			case 0x00000001:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_775(&iLocal_103, "duel_mid_A_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Mid_A_npc", 8, 0);
						bLocal_193 = "duel_Mid_A_npc";
						break;
					
					case 0x00000001:
						Function_775(&iLocal_103, "duel_mid_B_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Mid_B_npc", 8, 0);
						bLocal_193 = "duel_Mid_B_npc";
						break;
					
					case 0x00000002:
						Function_775(&iLocal_103, "duel_mid_C_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Mid_C_npc", 8, 0);
						bLocal_193 = "duel_Mid_C_npc";
						break;
				}
				break;
			
			case 0x00000002:
				switch (bLocal_203)
				{
					case 0x00000000:
						Function_775(&iLocal_103, "duel_hard_A_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Hard_A_npc", 8, 0);
						bLocal_193 = "duel_Hard_A_npc";
						break;
					
					case 0x00000001:
						Function_775(&iLocal_103, "duel_hard_B_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Hard_B_npc", 8, 0);
						bLocal_193 = "duel_Hard_B_npc";
						break;
					
					case 0x00000002:
						Function_775(&iLocal_103, "duel_hard_C_npc", 5, 0);
						Function_775(&iLocal_103, "Dueling/duel_Hard_C_npc", 8, 0);
						bLocal_193 = "duel_Hard_C_npc";
						break;
				}
				break;
			}
	}
	bLocal_195 = &bLocal_193;
	Function_775(&iLocal_103, "nminigames", 10, 0);
	Function_775(&iLocal_103, "crowd_duel", 5, 0);
	Function_775(&iLocal_103, "custom/crowd_duel_center", 8, 0);
	Function_775(&iLocal_103, "custom/crowd_duel_left", 8, 0);
	Function_775(&iLocal_103, "custom/crowd_duel_right", 8, 0);
}

var Function_775(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x2FA68 / 195176
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&iParam1, iParam2);
	iVar0 = Function_776(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_360(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_776(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x2FAA6 / 195238
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_236(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_360(&(Param0[iVar02]), 4);
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

void Function_777() //Position: 0x2FB75 / 195445
{
	if (IS_ACTOR_ALIVE(&Local_326 + 1480[02]))
	{
		if (!Function_778(&Local_326 + 1480[02], &Global_54076, -0,8f))
		{
			Function_472(&Local_326 + 1480[02], &Global_54076);
		}
	}
	return;
}

bool Function_778(Vector3 vParam0, var uParam1, float fParam2) //Position: 0x2FBB6 / 195510
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&vParam0) && IS_ACTOR_VALID(&uParam1))
	{
		GET_POSITION(&vParam0, &Var0);
		GET_POSITION(&uParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&vParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

void Function_779(bool bParam0) //Position: 0x2FC55 / 195669
{
	int iVar0;
	
	Function_781();
	if (!bParam0)
	{
		iVar0 = 1;
	}
	Function_291(&Local_326 + 2984[0]);
	Function_780(StackVal, StackVal, &Local_1986, &Local_326 + 1480[02], Function_291(&Local_326 + 2984[0]), *(&Local_326 + 3840), 90, 2, &Local_326, 0, iVar0, 1);
	return;
}

void Function_780(struct<125> Param0) //Position: 0x2FC97 / 195735
{
	struct<2> Var0;
	
	Param0 = &Global_54076;
	*(&Param0 + 8) = &uParam1;
	*(&Param0 + 16) = Param2;
	*(&Param0 + 28) = Param4;
	Param0.f_68 = uParam6;
	Param0.f_64 = &uParam11;
	Param0.f_80 = vParam7.x;
	Param0.f_120 = &fParam10;
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 28), *(&Param0 + 16), StackVal);
	VSCALE(&Var0, 0,5f);
	*(&Param0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam8, "Duel_StayOut", 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	Param0.f_84 = 4294967293;
	Param0.f_124 = &uParam9;
}

void Function_781() //Position: 0x2FD42 / 195906
{
	if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "iDuelResult"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "iDuelResult");
	}
	Local_1986 = &Global_54076;
	*(&Local_1986 + 8) = &Local_326 + 1480[02];
	STOP_PED_SPEAKING(&Local_326 + 1480[02], 1);
	Function_291(&Local_326 + 2984[0]);
	*(&Local_1986 + 16) = Function_291(&Local_326 + 2984[0]);
	*(&Local_1986 + 28) = *(&Local_326 + 3840);
	Local_1986.f_52 = 0;
	Local_1986.f_64 = 1;
	Local_1986.f_68 = 90;
	Local_1986.f_80 = 2;
	*(&Local_1986 + 40) = &Local_326 + 2232[0];
	Local_1986.f_84 = 4294967295;
	return;
}

int Function_782() //Position: 0x2FDEC / 196076
{
	Function_359(&Local_326 + 192, 394, 2, 0);
	Function_359(&Local_326 + 192, 391, 2, 0);
	Function_359(&Local_326 + 192, 392, 2, 0);
	Function_359(&Local_326 + 192, 555, 2, 0);
	if (Function_388(&Local_326 + 192))
	{
		return 1;
	}
	return 0;
}

int Function_783() //Position: 0x2FE38 / 196152
{
	Function_275(&Local_1564, 1);
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	switch (Local_1564)
	{
		case 0x000003E8:
			if (Function_270(&Local_1550) || Local_1550.f_40 < 1)
			{
				Local_1564 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_LEADER_05_A_SEQ/REBEL_LEADER_05_A_SEQ"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1564 = 1106;
				return 0;
			}
			Function_271(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			Local_1564.f_40 = 0;
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_268(StackVal, &uLocal_1548, *(&Global_6667[4128] + 88), &Local_1564 + 32, 1, 0, 0, 0, 1, 1);
			DISABLE_CHILD_SECTOR("esc_blacksmith01x");
			DISABLE_CHILD_SECTOR("esc_blacksmith01props01x");
			DISABLE_CHILD_SECTOR("esc_stable01x");
			DISABLE_CHILD_SECTOR("esc_stable01props01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPost02x");
			DISABLE_CHILD_SECTOR("esc_villaPost02props01x");
			DISABLE_CHILD_SECTOR("esc_bullRing01x");
			DISABLE_CHILD_SECTOR("esc_bullRing01props01x");
			DISABLE_CHILD_SECTOR("esc_villaWall02x");
			DISABLE_CHILD_SECTOR("esc_villaWall01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse04props01x");
			DISABLE_CHILD_SECTOR("esc_cantina01props01x");
			DISABLE_CHILD_SECTOR("esc_doctor01x");
			DISABLE_CHILD_SECTOR("esc_doctor01props01x");
			Global_99147 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/REBEL_LEADER_05_A_SEQ/REBEL_LEADER_05_A_SEQ", 0, 2, 1, 2, 2);
			Function_293(&Local_1564 + 4);
			Local_1564 = 1002;
			break;
		
		case 0x000003EA:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				LOG_ERROR("Cutscene was missing assets (check TTY)! Skipping...");
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					LOG_ERROR("CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED is TRUE");
				}
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					LOG_ERROR("CUTSCENE_MANAGER_IS_CUTSCENE_LOADED is FALSE");
				}
				Local_1564 = 1105;
			}
			if (Function_263(&Local_1564 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load (check TTY)! Skipping...");
				Local_1564 = 1105;
			}
			if (!HUD_IS_FADING())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
					{
						if (Function_388(&iLocal_1674))
						{
							CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4337,391f, 22,84f, 4462,233f), Vector(12,268f, 24,547f, -0,052f));
							Global_99147 = 0;
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
							CUTSCENE_MANAGER_PLAY_CUTSCENE();
							if (!SQUAD_IS_VALID(&bLocal_1974))
							{
								bLocal_1974 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_1548, "sMBSharedCSGuys"));
							}
							Function_797(StackVal, 518, Vector(-4345,1f, 28.0f, 4418,7f), "aMBSharedCSGuy_1");
							Function_797(StackVal, 385, Vector(-4345,2f, 28.0f, 4418,6f), "aMBSharedCSGuy_2");
							Function_797(StackVal, 391, Vector(-4343,8f, 28.0f, 4418,5f), "aMBSharedCSGuy_3");
							Function_797(StackVal, 379, Vector(-4345,4f, 28.0f, 4418,4f), "aMBSharedCSGuy_4");
							Function_797(StackVal, 384, Vector(-4345,5f, 28.0f, 4418,3f), "aMBSharedCSGuy_5");
							Function_797(StackVal, 382, Vector(-4345,6f, 28.0f, 4418,2f), "aMBSharedCSGuy_6");
							iLocal_1915 = 1;
							Local_1564 = 1004;
						}
					}
				}
			}
			break;
		
		case 0x000003EC:
			Function_794(1, 0);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Global_99147 = 1;
				Function_790(StackVal, "$/cutscene/REBEL_LEADER_05_A_2_SEQ/REBEL_LEADER_05_A_2_SEQ", &uLocal_2056, *(&Global_6667[4128] + 88), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
				DISABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
				Function_293(&Local_1564 + 4);
				Local_1564 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_794(0, 0);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003ED:
			Function_794(0, 0);
			if (!Function_790(StackVal, "$/cutscene/REBEL_LEADER_05_A_2_SEQ/REBEL_LEADER_05_A_2_SEQ", &uLocal_2056, *(&Global_6667[4128] + 88), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0))
			{
			}
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_263(&Local_1564 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1564 = 1105;
			}
			if (Function_263(&Local_1564 + 4) < 3,75f && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4380,062f, 39,698f, 4367,535f), Vector(3,24f, -36,196f, -0,007f));
				ENABLE_CHILD_SECTOR("esc_villaWall01x");
				Global_99147 = 0;
				CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_2065 = 0;
				iLocal_1916 = 1;
				Local_1564 = 1006;
			}
			break;
		
		case 0x000003EE:
			Function_794(0, 1);
			Function_786(1, 0);
			if (!iLocal_2065)
			{
				DISABLE_CHILD_SECTOR("esc_whorehouse01x");
				DISABLE_CHILD_SECTOR("esc_whorehouse01props01x");
				DISABLE_CHILD_SECTOR("esc_shack01x");
				DISABLE_CHILD_SECTOR("esc_shack01props01x");
				DISABLE_CHILD_SECTOR("esc_villaBaracks01x");
				DISABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
				DISABLE_CHILD_SECTOR("esc_generalhouse02x");
				DISABLE_CHILD_SECTOR("esc_generalhouse02props01x");
				DISABLE_CHILD_SECTOR("esc_generalhouse04x");
				DISABLE_CHILD_SECTOR("esc_generalhouse04props01x");
				DISABLE_CHILD_SECTOR("esc_generalhouse03x");
				DISABLE_CHILD_SECTOR("esc_generalhouse03props01x");
				DISABLE_CHILD_SECTOR("esc_church01x");
				DISABLE_CHILD_SECTOR("esc_church01props01x");
				DISABLE_CHILD_SECTOR("esc_cantina01x");
				DISABLE_CHILD_SECTOR("esc_cantina01props01x");
				DISABLE_CHILD_SECTOR("esc_doctor01x");
				DISABLE_CHILD_SECTOR("esc_doctor01props01x");
				DISABLE_CHILD_SECTOR("esc_gunsmith01x");
				DISABLE_CHILD_SECTOR("esc_gunsmith01props01x");
				iLocal_2065 = 1;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Global_99147 = 1;
				Function_790(StackVal, "$/cutscene/REBEL_LEADER_05_b_seq/REBEL_LEADER_05_b_seq", &uLocal_2056, *(&Global_6667[4128] + 88), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
				ENABLE_CHILD_SECTOR("esc_generalhouse03x");
				ENABLE_CHILD_SECTOR("esc_generalhouse03props01x");
				ENABLE_CHILD_SECTOR("esc_church01x");
				ENABLE_CHILD_SECTOR("esc_church01props01x");
				ENABLE_CHILD_SECTOR("esc_doctor01x");
				ENABLE_CHILD_SECTOR("esc_doctor01props01x");
				ENABLE_CHILD_SECTOR("esc_gunsmith01x");
				ENABLE_CHILD_SECTOR("esc_gunsmith01props01x");
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_293(&Local_1564 + 4);
				Local_1564 = 1008;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_786(0, 0);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003F0:
			Function_786(0, 0);
			if (Function_790(StackVal, "$/cutscene/REBEL_LEADER_05_b_seq/REBEL_LEADER_05_b_seq", &uLocal_2056, *(&Global_6667[4128] + 88), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0))
			{
			}
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_263(&Local_1564 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1564 = 1105;
			}
			if (Function_263(&Local_1564 + 4) < 4,1f && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4296,179f, 23,443f, 4410,43f), Vector(-4,889f, 139,337f, 0.0f));
				Function_362(&bLocal_1974);
				DESTROY_OBJECT(&bLocal_1974);
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				Local_1564 = 1009;
			}
			break;
		
		case 0x000003F1:
			Function_785();
			Function_388(&iLocal_1604);
			Function_388(&iLocal_1610);
			Function_786(0, 1);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1564 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				iLocal_1984 = 6;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			if (iLocal_1563 >= 1)
			{
				Function_718();
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || ((!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() && Function_786(0, 1)) && Function_794(0, 1)))
			{
				if (iLocal_1563 != 3 && bLocal_1562 != 0)
				{
					AI_STOP_IGNORING_ACTORS();
					SET_SCRIPT_CUTSCENE_ACTIVE(0);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1564 + 32);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1564 + 32);
					DESTROY_VOLUME(&Local_1564 + 32);
					Function_203(1, 1);
					if (SQUAD_IS_VALID(&bLocal_1974))
					{
						Function_362(&bLocal_1974);
						DESTROY_OBJECT(&bLocal_1974);
					}
					Function_784();
					Function_259(2, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1);
					STREAMING_UNLOAD_SCENE();
					DESTROY_VOLUME(&Local_1564 + 32);
					Local_1564 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1564.f_40 = 1;
				Local_1564 = 1104;
			}
			break;
		
		case 0x00000452:
			STREAMING_SET_CUTSCENE_MODE(0);
			CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			Local_1564 = 1000;
			Global_99147 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_784() //Position: 0x30C6C / 199788
{
	Function_233(&iLocal_1674);
	Function_775(&iLocal_1674, "rebel05_cs05", 5, 0);
	Function_775(&iLocal_1674, "custom/rebel05_cs05", 8, 0);
	Function_775(&iLocal_1674, "reb05_pull", 5, 0);
	Function_775(&iLocal_1674, "custom/reb05_pull", 8, 0);
	Function_359(&iLocal_1674, 977, 3, 0);
	Function_775(&iLocal_1674, "anc_firstOldFriend_set_anc_firstOldFriend_hat", 0, 0);
	return;
}

bool Function_785() //Position: 0x30D29 / 199977
{
	Function_775(&Local_326 + 8, "p_gen_gatlingGun01x", 0, 0);
	Function_775(&Local_326 + 8, "p_gen_debrisBoard01x", 0, 0);
	Function_775(&Local_326 + 8, "p_gen_powderKeg01x", 0, 0);
	Function_775(&Local_326 + 8, "p_gen_crateBreak02x", 0, 0);
	Function_775(&Local_326 + 8, "p_gen_debrisBoard07x", 0, 0);
	Function_775(&Local_326 + 8, "p_bat_crate04x", 0, 0);
	Function_775(&Local_326 + 8, "$/content/scripting/gringo/simplegringo/stand_chop_door", 1, 0);
	Function_775(&Local_326 + 8, "$/content/scripting/gringo/simplegringo/crying_linked", 1, 0);
	Function_775(&Local_326 + 8, "$/content/scripting/gringo/simplegringo/hostage_kneel", 1, 0);
	Function_775(&Local_326 + 8, "$/content/scripting/gringo/simplegringo/reb05_pull", 1, 0);
	Function_775(&Local_326 + 8, "$/content/scripting/gringo/simplegringo/tense_with_guns", 1, 0);
	if (Function_388(&Local_326 + 8))
	{
		return 1;
	}
	return 0;
}

int Function_786(bool bParam0, int iParam1) //Position: 0x30F4F / 200527
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	
	bVar1 = false;
	bParam0 = &bParam0;
	iParam1 = &iParam1;
	if (iParam1 && iLocal_1916 > 7)
	{
		iLocal_1916 = 7;
	}
	if ((iLocal_1915 <= 5 && iLocal_1915 >= 7) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var5, &Var7))
		{
			if (!Function_74(StackVal, Var5))
			{
				VSCALE(&Var7, (6,28f / 360.0f));
				STREAMING_LOAD_SCENE_EXT(Var5, Var7, 1);
			}
		}
	}
	switch (iLocal_1916)
	{
		case 0x00000001:
			Function_233(&iLocal_1700);
			Function_359(&iLocal_1700, 391, 2, 0);
			Function_359(&iLocal_1700, 393, 2, 0);
			Function_359(&iLocal_1700, 379, 2, 0);
			Function_359(&iLocal_1700, 381, 2, 0);
			Function_359(&iLocal_1700, 383, 2, 0);
			Function_359(&iLocal_1700, 384, 2, 0);
			Function_775(&iLocal_1700, "rebel05_sld_exit", 5, 0);
			Function_775(&iLocal_1700, "custom/rebel05_sld_exit", 8, 0);
			fLocal_1922 = 0.0f;
			iLocal_1916 = 2;
			break;
		
		case 0x00000002:
			if (Function_388(&iLocal_1700) && Function_789())
			{
				iLocal_1916 = 3;
			}
			break;
		
		case 0x00000003:
			bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_1548, "sIntroSoldiers"));
			Function_788(StackVal, StackVal, 391, Vector(0.0f, 0.0f, 0.0f), &bVar0, Vector(-4376,42f, 38,704f, 4362,95f));
			Function_788(StackVal, StackVal, 393, Vector(1,6376f, 0.0f, 1,0202f), &bVar0, Vector(-4376,42f, 38,704f, 4362,95f));
			Function_788(StackVal, StackVal, 379, Vector(0,0622f, 0.0f, 2,9359f), &bVar0, Vector(-4376,42f, 38,704f, 4362,95f));
			Function_788(StackVal, StackVal, 381, Vector(1,311f, 0.0f, -1,8488f), &bVar0, Vector(-4376,42f, 38,704f, 4362,95f));
			Function_788(StackVal, StackVal, 383, Vector(1,433f, 0.0f, 4,025f), &bVar0, Vector(-4376,42f, 38,704f, 4362,95f));
			Function_788(StackVal, StackVal, 384, Vector(-0,43f, 0.0f, 6,02f), &bVar0, Vector(-4376,42f, 38,704f, 4362,95f));
			Function_788(StackVal, StackVal, 391, Vector(0.0f, 0.0f, 0.0f), &bVar0, Vector(-4360,914f, 39,636f, 4356,548f));
			Function_788(StackVal, StackVal, 393, Vector(1,7f, 0.0f, 1,1f), &bVar0, Vector(-4360,914f, 39,636f, 4356,548f));
			Function_788(StackVal, StackVal, 379, Vector(0,1f, 0.0f, 2,9f), &bVar0, Vector(-4360,914f, 39,636f, 4356,548f));
			Function_788(StackVal, StackVal, 381, Vector(1,1f, 0.0f, -1,5f), &bVar0, Vector(-4360,914f, 39,636f, 4356,548f));
			Function_788(StackVal, StackVal, 383, Vector(1,5f, 0.0f, 4.0f), &bVar0, Vector(-4360,914f, 39,636f, 4356,548f));
			Function_788(StackVal, StackVal, 384, Vector(-0,7f, 0.0f, 6,2f), &bVar0, Vector(-4360,914f, 39,636f, 4356,548f));
			Function_787(&bVar0, 1);
			fLocal_1922 = GET_CURRENT_GAME_TIME();
			iLocal_1916 = 4;
			break;
		
		case 0x00000004:
			Function_789();
			if (!&bParam0)
			{
				Function_450();
				Function_353(&uLocal_1548, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
				Function_351(StackVal, StackVal, StackVal, StackVal, Vector(-4379,984f, 39,704f, 4367,456f), Vector(0,601f, 0,055f, -0,798f), Vector(-4380,898f, 39,628f, 4368,375f), Vector(0,449f, 0,075f, -0,89f), 5.0f, 0, 1, 1, 0);
				STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-4295,685f, 23,834f, 4407,461f), Vector(-0,786f, -0,257f, 0,562f), 1);
				if ((GET_CURRENT_GAME_TIME() - fLocal_1922) < 0,5f)
				{
					bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroSoldiers"));
					SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(&bVar0, false), "TAUNT_FIGHT_REBEL", 0, 1, 1, 0, 0, 0);
					bVar1 = false;
					while (bVar1 < (SQUAD_GET_SIZE(&bVar0) - 1))
					{
						uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bVar0, bVar1);
						if (bVar1 <= 6)
						{
							SET_ANIM_SET_FOR_ACTOR(&uVar2, "rebel05_sld_exit", 0);
							switch (bVar1)
							{
								case 0x00000000:
									SET_ACTION_NODE_FOR_ACTOR(&uVar2, "rebel05_sld_exit/sld_A");
									break;
								
								case 0x00000001:
									SET_ACTION_NODE_FOR_ACTOR(&uVar2, "rebel05_sld_exit/sld_B");
									break;
								
								case 0x00000002:
									SET_ACTION_NODE_FOR_ACTOR(&uVar2, "rebel05_sld_exit/sld_C");
									break;
								
								case 0x00000003:
									SET_ACTION_NODE_FOR_ACTOR(&uVar2, "rebel05_sld_exit/sld_D");
									break;
								
								case 0x00000004:
									SET_ACTION_NODE_FOR_ACTOR(&uVar2, "rebel05_sld_exit/sld_E");
									break;
								
								case 0x00000005:
									SET_ACTION_NODE_FOR_ACTOR(&uVar2, "rebel05_sld_exit/sld_F");
									break;
							}
						}
						else
						{
							uVar3 = Vector(-4395,022f, 37,469f, 4371,094f);
							TASK_GO_TO_COORD(&uVar2, &uVar3, 2);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar2, true);
							AI_ACTOR_FORCE_SPEED(&uVar2, 2);
							ACTOR_POP_NEXT_GAIT(&uVar2, 2, RAND_FLOAT_RANGE(0.0f, 1.0f));
						}
						bVar1++;
					}
					fLocal_1922 = GET_CURRENT_GAME_TIME();
					iLocal_1916 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if ((GET_CURRENT_GAME_TIME() - fLocal_1922) < 1,4f)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroSoldiers"));
				SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(&bVar0, 2), "TAUNT_FIGHT_REBEL", 0, 1, 1, 0, 0, 0);
				fLocal_1922 = GET_CURRENT_GAME_TIME();
				iLocal_1916 = 6;
			}
			break;
		
		case 0x00000006:
			if ((GET_CURRENT_GAME_TIME() - fLocal_1922) < 1,2f)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroSoldiers"));
				SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(&bVar0, 7), "TAUNT_FIGHT", 0, 1, 1, 0, 0, 0);
				fLocal_1922 = GET_CURRENT_GAME_TIME();
				iLocal_1916 = 7;
			}
			break;
		
		case 0x00000007:
			PRINTSTRING("time in final shot = ");
			PRINTFLOAT((GET_CURRENT_GAME_TIME() - fLocal_1922));
			PRINTNL();
			if ((GET_CURRENT_GAME_TIME() - fLocal_1922) < 20.0f || iParam1)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroSoldiers"));
				Function_787(&bVar0, 0);
				Function_362(&bVar0);
				DESTROY_OBJECT(&bVar0);
				iLocal_1916 = 8;
			}
			break;
		
		case 0x00000008:
			Function_233(&iLocal_1700);
			if (IS_DOOR_VALID(&iLocal_1941))
			{
				CLOSE_DOOR_FAST(&iLocal_1941);
			}
			if (IS_DOOR_VALID(&iLocal_1943))
			{
				CLOSE_DOOR_FAST(&iLocal_1943);
			}
			iLocal_1916 = 9;
			return 1;
			break;
	}
	return 0;
}

void Function_787(Vector3 vParam0, bool bParam1) //Position: 0x31648 / 202312
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&vParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&vParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&vParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (bParam1)
				{
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&uVar1);
				}
				else
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&uVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_788(bool bParam0, vector3 vParam1) //Position: 0x31696 / 202390
{
	struct<2> Var0;
	var uVar2;
	
	UNK_0x44986367(&Var0, 111,545f);
	VSCALE(&Var0, (vParam1.z * -1.0f));
	Param4 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param4, StackVal);
	UNK_0x44986367(&Var0, 11,182f);
	VSCALE(&Var0, (vParam1.x * -1.0f));
	Param4 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param4, StackVal);
	PRINTSTRING("Creating soldier at ");
	PRINTVECTOR(Param4);
	PRINTNL();
	uVar2 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_1548, Function_54(), bParam0, Param4, Vector(0.0f, 111,545f, 0.0f));
	SQUAD_JOIN(&uVar2, &fParam3);
	TASK_STAND_STILL(&uVar2, -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(&uVar2, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar2);
	GIVE_WEAPON_TO_ACTOR(&uVar2, 42, false, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar2, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar2, false);
}

int Function_789() //Position: 0x31755 / 202581
{
	if (!IS_DOOR_VALID(&iLocal_1941))
	{
		iLocal_1941 = Function_278("escalara", "villaWall04", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(&iLocal_1943))
	{
		iLocal_1943 = Function_278("escalara", "villaWall04", 2);
		return 0;
	}
	if (!IS_DOOR_OPENED(&iLocal_1941))
	{
		Function_206(&iLocal_1941, 1);
		OPEN_DOOR_DIRECTION_FAST(&iLocal_1941, false);
		return 0;
	}
	if (!IS_DOOR_OPENED(&iLocal_1943))
	{
		Function_206(&iLocal_1943, 1);
		OPEN_DOOR_DIRECTION_FAST(&iLocal_1943, true);
		return 0;
	}
	return 1;
}

bool Function_790(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x317F2 / 202738
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_484(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_793()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_74(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_791();
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_484(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_793()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_484(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_791() //Position: 0x31A5A / 203354
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_792(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_792(char* cParam0) //Position: 0x31AAE / 203438
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

int Function_793() //Position: 0x31BD7 / 203735
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_794(bool bParam0, int iParam1) //Position: 0x31BE6 / 203750
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 && iLocal_1915 > 7)
	{
		iLocal_1915 = 7;
	}
	if ((iLocal_1915 <= 6 && iLocal_1915 >= 7) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var1, &Var3))
		{
			if (!Function_74(StackVal, Var1))
			{
				VSCALE(&Var3, (6,28f / 360.0f));
				STREAMING_LOAD_SCENE_EXT(Var1, Var3, 1);
			}
		}
	}
	switch (iLocal_1915)
	{
		case 0x00000001:
			Function_359(&iLocal_1700, 517, 2, 0);
			Function_359(&iLocal_1700, 523, 2, 0);
			Function_359(&iLocal_1700, 291, 2, 0);
			Function_359(&iLocal_1700, 290, 2, 0);
			Function_359(&iLocal_1700, 285, 2, 0);
			Function_359(&iLocal_1700, 293, 2, 0);
			Function_359(&iLocal_1700, 299, 2, 0);
			fLocal_1921 = 0.0f;
			iLocal_1915 = 2;
			break;
		
		case 0x00000002:
			if (Function_388(&iLocal_1700))
			{
				iLocal_1915 = 3;
			}
			break;
		
		case 0x00000003:
			uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_1548, "sIntroRebels"));
			Function_796(StackVal, 517, Vector(0.0f, 0.0f, 0,9f), &uVar0);
			Function_796(StackVal, 523, Vector(1,5f, 0.0f, 1,8f), &uVar0);
			Function_796(StackVal, 291, Vector(-0,7f, 0.0f, 2,4f), &uVar0);
			Function_796(StackVal, 290, Vector(1.0f, 0.0f, 3,5f), &uVar0);
			Function_796(StackVal, 285, Vector(-0,9f, 0.0f, 4,6f), &uVar0);
			Function_796(StackVal, 293, Vector(1,5f, 0.0f, 5,4f), &uVar0);
			Function_796(StackVal, 299, Vector(-1,2f, 0.0f, 3,8f), &uVar0);
			Function_787(&uVar0, 1);
			fLocal_1921 = GET_CURRENT_GAME_TIME();
			iLocal_1915 = 4;
			break;
		
		case 0x00000004:
			fLocal_1921 = GET_CURRENT_GAME_TIME();
			iLocal_1915 = 5;
			break;
		
		case 0x00000005:
			if (!&bParam0)
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_1921) < 1.0f)
				{
					Function_353(&uLocal_1548, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
					Function_351(StackVal, StackVal, StackVal, StackVal, Vector(-4337,391f, 22,84f, 4462,233f), Vector(-0,423f, 0,22f, -0,879f), Vector(-4336,509f, 23,161f, 4458,95f), Vector(-0,197f, 0,125f, -0,973f), 4.0f, 0, 1, 1, 0);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
					Function_795();
					fLocal_1921 = GET_CURRENT_GAME_TIME();
					iLocal_1915 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if ((GET_CURRENT_GAME_TIME() - fLocal_1921) < 1,6f)
			{
				uVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroRebels"));
				SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(&uVar0, true), "REBEL_MOB_WARCRY", 0, 1, 1, 0, 0, 0);
				fLocal_1921 = GET_CURRENT_GAME_TIME();
				iLocal_1915 = 7;
			}
			break;
		
		case 0x00000007:
			PRINTSTRING("time in final shot = ");
			PRINTFLOAT((GET_CURRENT_GAME_TIME() - fLocal_1921));
			PRINTNL();
			if ((GET_CURRENT_GAME_TIME() - fLocal_1921) < 20.0f || iParam1)
			{
				uVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroRebels"));
				Function_787(&uVar0, 0);
				Function_362(&uVar0);
				DESTROY_OBJECT(&uVar0);
				iLocal_1915 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_1915 = 9;
			return 1;
			break;
	}
	return 0;
}

void Function_795() //Position: 0x31F1A / 204570
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = Vector(-4320,481f, 22,841f, 4427,222f);
	uVar1 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uLocal_1548, "sIntroRebels"));
	Function_322(&uVar1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&uVar1, false, 1, 4294967295);
	TASK_GO_NEAR_COORD(false, &uVar2, 8.0f, 4);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uVar1) - 1))
	{
		TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(&uVar1, bVar0), RAND_FLOAT_RANGE(0.0f, 0,3f), 0, 0);
		bVar0++;
	}
	SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false), "REBEL_MOB_WARCRY", 0, 1, 1, 0, 0, 0);
	return;
}

void Function_796(bool bParam0, vector3 vParam1) //Position: 0x31FBD / 204733
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Vector(-4343,063f, 22,356f, 4455,898f);
	UNK_0x44986367(&Var2, -38,836f);
	VSCALE(&Var2, (vParam1.z * -1.0f));
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	UNK_0x44986367(&Var2, 43,557f);
	VSCALE(&Var2, (vParam1.x * -1.0f));
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	PRINTSTRING("Creating rebel at ");
	PRINTVECTOR(Var0);
	PRINTNL();
	uVar4 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_1548, Function_54(), bParam0, Var0, Vector(0.0f, -38,836f, 0.0f));
	SQUAD_JOIN(&uVar4, &uParam3);
	TASK_STAND_STILL(&uVar4, -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(&uVar4, false);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar4, false);
	Function_374(StackVal, &uVar4, Vector(-4320,481f, 22,841f, 4427,222f));
	AI_SET_NAV_PATHFINDING_ENABLED(&uVar4, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar4, true);
}

void Function_797(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x32099 / 204953
{
	var uVar0;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uLocal_1548, &fParam3, bParam0, Param1, Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&uVar0, &bLocal_1974);
	CUTSCENE_MANAGER_HIDE_ACTOR(&uVar0);
	AI_DISABLE_PERCEPTION(&uVar0);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	SET_ACTOR_STOP_UPDATE(&uVar0, 1);
}

void Function_798() //Position: 0x320DF / 205023
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_1921) <= 0.0f)
	{
		switch (bLocal_1917)
		{
			case 0x00000000:
				ENABLE_CHILD_SECTOR("esc_villaWall02x");
				break;
			
			case 0x00000001:
				ENABLE_CHILD_SECTOR("esc_whorehouse01x");
				ENABLE_CHILD_SECTOR("esc_whorehouse01props01x");
				break;
			
			case 0x00000002:
				ENABLE_CHILD_SECTOR("esc_villaBaracks01x");
				ENABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
				break;
			
			case 0x00000003:
				ENABLE_CHILD_SECTOR("esc_blacksmith01x");
				ENABLE_CHILD_SECTOR("esc_blacksmith01props01x");
				break;
			
			case 0x00000004:
				ENABLE_CHILD_SECTOR("esc_stable01x");
				ENABLE_CHILD_SECTOR("esc_stable01props01x");
				break;
			
			case 0x00000005:
				ENABLE_CHILD_SECTOR("esc_bullRing01x");
				ENABLE_CHILD_SECTOR("esc_bullRing01props01x");
				break;
			
			case 0x00000006:
				ENABLE_CHILD_SECTOR("esc_villaPost02x");
				ENABLE_CHILD_SECTOR("esc_villaPost02props01x");
				break;
			
			case 0x00000007:
				ENABLE_CHILD_SECTOR("esc_generalstore01x");
				ENABLE_CHILD_SECTOR("esc_generalstore01props01x");
				break;
			
			case 0x00000008:
				ENABLE_CHILD_SECTOR("esc_shack01x");
				ENABLE_CHILD_SECTOR("esc_shack01props01x");
				break;
			
			case 0x00000009:
				ENABLE_CHILD_SECTOR("esc_generalhouse02x");
				ENABLE_CHILD_SECTOR("esc_generalhouse02props01x");
				break;
			
			case 0x0000000A:
				ENABLE_CHILD_SECTOR("esc_generalhouse04x");
				ENABLE_CHILD_SECTOR("esc_generalhouse04props01x");
				break;
			
			case 0x0000000B:
				ENABLE_CHILD_SECTOR("esc_generalhouse03x");
				ENABLE_CHILD_SECTOR("esc_generalhouse03props01x");
				break;
			
			case 0x0000000C:
				ENABLE_CHILD_SECTOR("esc_church01x");
				ENABLE_CHILD_SECTOR("esc_church01props01x");
				break;
			
			case 0x0000000D:
				ENABLE_CHILD_SECTOR("esc_cantina01x");
				ENABLE_CHILD_SECTOR("esc_cantina01props01x");
				break;
			
			case 0x0000000E:
				ENABLE_CHILD_SECTOR("esc_doctor01x");
				ENABLE_CHILD_SECTOR("esc_doctor01props01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("esc_gunsmith01x");
				ENABLE_CHILD_SECTOR("esc_gunsmith01props01x");
				break;
			
			case 0x00000010:
				ENABLE_CHILD_SECTOR("esc_villaWall01x");
				break;
			
			case 0x00000011:
				ENABLE_CHILD_SECTOR("esc_trashPile01x");
				ENABLE_CHILD_SECTOR("esc_trashPile01props01x");
				break;
		}
		fLocal_1921 = GET_CURRENT_GAME_TIME();
		bLocal_1917++;
	}
	return;
}

var Function_799(int iParam0) //Position: 0x32505 / 206085
{
	return &Global_15402[iParam014] + 104;
}

void Function_800() //Position: 0x32515 / 206101
{
	switch (iLocal_1563)
	{
		case 0x00000006:
			DECOR_SET_BOOL(&Global_54076, "KillEscaleraRevolution", true);
			*(&Global_15402[714] + 16) = 554;
			Function_135(&(Global_43791[Global_46850[0]]), 256);
			Function_832(&Local_1550, 1);
			uLocal_1548 = CREATE_LAYOUT(Function_54());
			Function_829();
			iLocal_1915 = 4294967295;
			SET_DUST_LEVEL_MODIFIER(4294967294);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_296();
			Function_180(1, 0, 1);
			Local_1564 = 1000;
			iLocal_1563 = 7;
			break;
		
		case 0x00000007:
			if (Local_1564 != 1004 || Function_783())
			{
				iLocal_1563 = 8;
			}
			break;
		
		case 0x00000008:
			Function_783();
			if (Function_813())
			{
				Function_808();
				Function_807();
				iLocal_1563 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(&Local_326))
			{
				uLocal_1734 = CREATE_OBJECT_ITERATOR(&Local_326);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_336(7, 1, 1);
			RESET_ACTOR_GAITS(&bLocal_1579, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1579, 0);
			SET_ACTOR_FACTION(&bLocal_1579, 20);
			TASK_PRIORITY_SET(&bLocal_1579, true);
			TASK_STAND_STILL(&bLocal_1579, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1579, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1579, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1579, GET_ACTOR_MAX_HEALTH(&bLocal_1579));
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1579);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_1579, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1579, false);
			SET_AMBIENT_VOICE_NAME(&bLocal_1579, "COMPANION_MEXICAN_REBEL");
			AI_SET_NAV_ACTOR_WIDTH(&bLocal_1579, 0,4f);
			RESET_ACTOR_GAITS(&bLocal_1581, 0);
			TASK_PRIORITY_SET(&bLocal_1581, true);
			TASK_STAND_STILL(&bLocal_1581, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1581, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1581, GET_ACTOR_MAX_HEALTH(&bLocal_1581));
			fLocal_1967 = Vector(0.0f, 0.0f, 0.0f);
			TELEPORT_ACTOR(&bLocal_1581, &fLocal_1967, 1, 1, 1);
			DESTROY_GC_OBJECTS(1, 1);
			Function_210(0);
			Function_806(&Local_326 + 4632);
			Function_806(&Local_326 + 4656);
			Function_806(&Local_326 + 4680);
			SET_WEAPONENUM_LOCKED(13, 0);
			Function_265(&bLocal_1736);
			Function_265(&bLocal_1740);
			Function_265(&bLocal_1744);
			Function_265(&bLocal_1748);
			Function_265(&bLocal_1752);
			Function_804(&uLocal_1756, &uLocal_1548);
			bLocal_1562 = false;
			iLocal_1563 = 0;
			Function_802(&Local_1550, &bLocal_1562, &iLocal_1563);
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 0.0f);
			if (bLocal_1562 >= 0)
			{
				Function_207(1);
				Function_237(1);
			}
			if (bLocal_1562 >= 4)
			{
				Function_565(1);
			}
			else
			{
				Function_565(0);
			}
			Function_801(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1550);
			break;
	}
	return;
}

void Function_801(struct<41> Param0) //Position: 0x3279B / 206747
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_1562 = false;
			break;
		
		case 0x00000002:
			bLocal_1562 = true;
			break;
		
		case 0x00000003:
			bLocal_1562 = 2;
			break;
		
		case 0x00000004:
			bLocal_1562 = 3;
			break;
		
		case 0x00000005:
			bLocal_1562 = 4;
			break;
		
		case 0x00000006:
			bLocal_1562 = 5;
			break;
		
		case 0x00000007:
			bLocal_1562 = 6;
			break;
		
		case 0x00000008:
			bLocal_1562 = 7;
			break;
		
		case 0x00000009:
			bLocal_1562 = 8;
			break;
		
		case 0x0000000A:
			bLocal_1562 = 101;
			break;
	}
}

void Function_802(float fParam0, var uParam1, int iParam2) //Position: 0x32830 / 206896
{
	if (Function_270(&fParam0))
	{
		uParam1 = Function_380(&fParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_803();
	}
	return;
}

void Function_803() //Position: 0x3286C / 206956
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

int Function_804(struct<2>[] Param0) //Position: 0x328BD / 207037
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_805(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_805(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_805(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_805(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_805(struct<13> Param0) //Position: 0x32F96 / 208790
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_806(bool bParam0) //Position: 0x33065 / 208997
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_291(&bParam0);
	Var0 = Function_291(&bParam0);
	Function_365(&bParam0);
	Var2 = Function_365(&bParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&bParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&bParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&bParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&bParam0);
	bParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

void Function_807() //Position: 0x33139 / 209209
{
	if (!IS_OBJECT_VALID(&uLocal_1959))
	{
		uLocal_1959 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_1548, "oFloatingSpeaker", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	}
	if (!IS_OBJECT_VALID(&uLocal_1961))
	{
		uLocal_1961 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uLocal_1548, "m_oPlayerSpeaker", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	}
	if (!IS_OBJECT_ATTACHED(&uLocal_1961))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1961, &Global_54076, "", Vector(0.0f, 10.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	PLAY_SOUND_FROM_OBJECT(&uLocal_1959, "REBEL_05_RIOT_MASTER");
	return;
}

void Function_808() //Position: 0x331E7 / 209383
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	Function_812(4, 1);
	uVar0 = &uVar0;
	Local_326 = CREATE_LAYOUT("Rebel05_layout");
	*(&Local_326 + 2256) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_326, "CutsceneVol_set");
	*(&Local_326 + 2232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "Cutscene01Vol", 2,802597E-45f, Vector(-4295,628f, 22,0052f, 4412,403f), Vector(0.0f, 39,25808f, 0.0f), Vector(22,05498f, 25,4287f, 6,31041f));
	ADD_TO_VOLUME_SET(&Local_326 + 2256, &Local_326 + 2232[0]);
	*(&Local_326 + 2232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "Cutscene07Vol", 2,802597E-45f, Vector(-4346,228f, 42,99654f, 4329,108f), Vector(0.0f, 0.0f, 0.0f), Vector(43,82666f, 6.0f, 25,55553f));
	ADD_TO_VOLUME_SET(&Local_326 + 2256, &Local_326 + 2232[1]);
	*(&Local_326 + 2296) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_326, "JailLocks_set");
	*(&Local_326 + 2264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "nJailLock1", 2,802597E-45f, Vector(-4354,105f, 31,26651f, 4380,869f), Vector(0.0f, 5,574448f, 0.0f), Vector(0,2112083f, 0,2819241f, 0,2561758f));
	ADD_TO_VOLUME_SET(&Local_326 + 2296, &Local_326 + 2264[0]);
	*(&Local_326 + 2264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "nJailLock2", 2,802597E-45f, Vector(-4356,558f, 31,27264f, 4378,38f), Vector(0.0f, -85,03403f, 0.0f), Vector(0,2112083f, 0,2819241f, 0,2561758f));
	ADD_TO_VOLUME_SET(&Local_326 + 2296, &Local_326 + 2264[1]);
	*(&Local_326 + 2264[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "nJailLock3", 2,802597E-45f, Vector(-4356,915f, 31,27383f, 4374,371f), Vector(0.0f, -85,03403f, 0.0f), Vector(0,2112083f, 0,2596256f, 0,2561758f));
	ADD_TO_VOLUME_SET(&Local_326 + 2296, &Local_326 + 2264[2]);
	*(&Local_326 + 2328) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_326, "Jail_set");
	*(&Local_326 + 2304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "Jail_pt1", 2,802597E-45f, Vector(-4356,572f, 31,77542f, 4377,697f), Vector(0,432903f, 3,854442f, 0,07831103f), Vector(6,73217f, 3,888182f, 15,23727f));
	ADD_TO_VOLUME_SET(&Local_326 + 2328, &Local_326 + 2304[0]);
	*(&Local_326 + 2304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "Jail_pt2", 2,802597E-45f, Vector(-4352,343f, 31,82233f, 4371,956f), Vector(0,432903f, 3,854442f, 0,07831103f), Vector(2,652694f, 3,888182f, 4,25894f));
	ADD_TO_VOLUME_SET(&Local_326 + 2328, &Local_326 + 2304[1]);
	*(&Local_326 + 2400) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_326, "DefendVilla_set");
	*(&Local_326 + 2336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_1", 2,802597E-45f, Vector(-4351,502f, 43,98232f, 4342,361f), Vector(0.0f, 0.0f, 0.0f), Vector(12,92751f, 4,773952f, 16,12669f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[0]);
	*(&Local_326 + 2336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_2", 2,802597E-45f, Vector(-4354,281f, 40,24868f, 4354,556f), Vector(0.0f, 0.0f, 0.0f), Vector(10,07366f, 5,33874f, 9,272414f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[1]);
	*(&Local_326 + 2336[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_3", 2,802597E-45f, Vector(-4339,31f, 40,24511f, 4354,432f), Vector(0.0f, 0.0f, 0.0f), Vector(3,333498f, 5,33874f, 4,743776f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[2]);
	*(&Local_326 + 2336[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_4", 2,802597E-45f, Vector(-4340,801f, 43,98232f, 4342,361f), Vector(0.0f, 0.0f, 0.0f), Vector(13,99926f, 4,773952f, 16,12669f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[3]);
	*(&Local_326 + 2336[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_5", 2,802597E-45f, Vector(-4368,952f, 40,69725f, 4360,688f), Vector(0.0f, 0,06606489f, 0.0f), Vector(7,869235f, 4,773952f, 8,457f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[4]);
	*(&Local_326 + 2336[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_6", 2,802597E-45f, Vector(-4361,573f, 43,98232f, 4342,361f), Vector(0.0f, 0.0f, 0.0f), Vector(7,461392f, 4,773952f, 16,12669f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[5]);
	*(&Local_326 + 2336[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDefVol_7", 2,802597E-45f, Vector(-4362,266f, 40,69725f, 4354,678f), Vector(0.0f, 0,06606489f, 0.0f), Vector(6,467897f, 4,773952f, 9,379645f));
	ADD_TO_VOLUME_SET(&Local_326 + 2400, &Local_326 + 2336[6]);
	*(&Local_326 + 2448) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_326, "ApproachGG_set");
	*(&Local_326 + 2408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "approach_GG_1", 2,802597E-45f, Vector(-4403,027f, 33,92579f, 4399,817f), Vector(0.0f, 8,939919f, 0.0f), Vector(60,50052f, 19,22651f, 4,411059f));
	ADD_TO_VOLUME_SET(&Local_326 + 2448, &Local_326 + 2408[0]);
	*(&Local_326 + 2408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "approach_GG_2", 2,802597E-45f, Vector(-4404,861f, 33,92579f, 4393,914f), Vector(0.0f, 4,531993f, 0.0f), Vector(62,99074f, 19,22651f, 8,769179f));
	ADD_TO_VOLUME_SET(&Local_326 + 2448, &Local_326 + 2408[1]);
	*(&Local_326 + 2408[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "approach_GG_3", 2,802597E-45f, Vector(-4400,437f, 33,92579f, 4387,158f), Vector(0.0f, -5,205816f, 0.0f), Vector(60,0205f, 19,22651f, 4,596496f));
	ADD_TO_VOLUME_SET(&Local_326 + 2448, &Local_326 + 2408[2]);
	*(&Local_326 + 2408[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "approach_GG_4", 2,802597E-45f, Vector(-4398,253f, 33,92579f, 4381,38f), Vector(0.0f, -5,823006f, 0.0f), Vector(57,58197f, 19,22651f, 7,580697f));
	ADD_TO_VOLUME_SET(&Local_326 + 2448, &Local_326 + 2408[3]);
	*(&Local_326 + 2768) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_326, "barriacdeObstructions_set");
	*(&Local_326 + 2456[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_1", 2,802597E-45f, Vector(-4376,728f, 33,40521f, 4411,218f), Vector(0.0f, 27,08612f, 0.0f), Vector(1.0f, 1,770859f, 2,122593f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[0]);
	*(&Local_326 + 2456[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_2", 2,802597E-45f, Vector(-4376,16f, 33,75294f, 4412,801f), Vector(0.0f, -2,138433f, 0.0f), Vector(1.0f, 1,381151f, 2,122593f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[1]);
	*(&Local_326 + 2456[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_3", 2,802597E-45f, Vector(-4373,594f, 33,75294f, 4415,361f), Vector(0.0f, 23,94556f, 0.0f), Vector(0,7570297f, 1,381151f, 2,122593f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[2]);
	*(&Local_326 + 2456[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_4", 2,802597E-45f, Vector(-4373,439f, 33,75294f, 4417,11f), Vector(0.0f, -12,82569f, 0.0f), Vector(0,9221409f, 1,381151f, 2,122593f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[3]);
	*(&Local_326 + 2456[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_5", 2,802597E-45f, Vector(-4375,345f, 33,95715f, 4420,282f), Vector(0.0f, 11,55653f, 0.0f), Vector(0,9221409f, 1,381151f, 2,122593f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[4]);
	*(&Local_326 + 2456[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_6", 2,802597E-45f, Vector(-4375,251f, 34,11619f, 4422,16f), Vector(0.0f, -15,52041f, 0.0f), Vector(0,9221409f, 1,381151f, 2,122593f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[5]);
	*(&Local_326 + 2456[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_7", 2,802597E-45f, Vector(-4366,895f, 31,99365f, 4420,7f), Vector(0.0f, 7,620462f, 0.0f), Vector(1,739845f, 2,990529f, 2,416363f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[6]);
	*(&Local_326 + 2456[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_8", 2,802597E-45f, Vector(-4363,513f, 31,99365f, 4417,815f), Vector(0.0f, 6,69423f, 0.0f), Vector(1,601181f, 2,990529f, 2,235607f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[7]);
	*(&Local_326 + 2456[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_9", 2,802597E-45f, Vector(-4366,781f, 31,99365f, 4415,028f), Vector(0.0f, 0,4800674f, 0.0f), Vector(1,638651f, 2,990529f, 2,215425f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[8]);
	*(&Local_326 + 2456[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_10", 2,802597E-45f, Vector(-4364,819f, 31,18822f, 4409,681f), Vector(0.0f, 84,22035f, 0.0f), Vector(1,521354f, 2,990529f, 2,270463f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[9]);
	*(&Local_326 + 2456[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_11", 2,802597E-45f, Vector(-4369,977f, 31,16728f, 4406,532f), Vector(0.0f, 63,77049f, 0.0f), Vector(1,571114f, 2,990529f, 2,211749f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[10]);
	*(&Local_326 + 2456[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_12", 2,802597E-45f, Vector(-4373,329f, 31,99247f, 4408,131f), Vector(0.0f, 57,90255f, 0.0f), Vector(1,456033f, 2,990529f, 2,079663f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[11]);
	*(&Local_326 + 2456[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_13", 2,802597E-45f, Vector(-4407,246f, 33,97422f, 4409,336f), Vector(0.0f, 111,2183f, 0.0f), Vector(0,8348632f, 2,990529f, 2,05735f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[12]);
	*(&Local_326 + 2456[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_14", 2,802597E-45f, Vector(-4402,972f, 33,97422f, 4407,208f), Vector(0.0f, 113,7733f, 0.0f), Vector(0,9585737f, 2,990529f, 2,069289f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[13]);
	*(&Local_326 + 2456[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_15", 2,802597E-45f, Vector(-4400f, 33,88756f, 4406,144f), Vector(0.0f, 105,5002f, 0.0f), Vector(0,9341696f, 2,990529f, 2,101948f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[14]);
	*(&Local_326 + 2456[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_16", 2,802597E-45f, Vector(-4401,388f, 33,89281f, 4402,727f), Vector(0.0f, 96,55688f, 0.0f), Vector(0,884882f, 2,990529f, 2,029747f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[15]);
	*(&Local_326 + 2456[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_17", 2,802597E-45f, Vector(-4407,028f, 33,89285f, 4405,129f), Vector(0.0f, 107,6039f, 0.0f), Vector(1,005589f, 2,990529f, 1,911206f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[16]);
	*(&Local_326 + 2456[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_18", 2,802597E-45f, Vector(-4404,79f, 34,62751f, 4392,897f), Vector(0.0f, 92,30241f, 0.0f), Vector(0,8918347f, 1,527305f, 3,904805f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[17]);
	*(&Local_326 + 2456[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_19", 2,802597E-45f, Vector(-4407,128f, 34,37222f, 4398,692f), Vector(0.0f, 86,37297f, 0.0f), Vector(1,093089f, 1,527305f, 3,904805f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[18]);
	*(&Local_326 + 2456[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_20", 2,802597E-45f, Vector(-4400,876f, 34,50642f, 4398,683f), Vector(0.0f, 96,91463f, 0.0f), Vector(1,093089f, 1,527305f, 3,412101f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[19]);
	*(&Local_326 + 2456[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_21", 2,802597E-45f, Vector(-4399,214f, 35,99255f, 4386,309f), Vector(0.0f, 78,2635f, 0.0f), Vector(0,8918347f, 1,527305f, 3,904805f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[20]);
	*(&Local_326 + 2456[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_22", 2,802597E-45f, Vector(-4394,567f, 36,54043f, 4382,647f), Vector(0.0f, 72,71125f, 0.0f), Vector(0,978539f, 1,527305f, 3,904805f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[21]);
	*(&Local_326 + 2456[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_23", 2,802597E-45f, Vector(-4401,347f, 36,43217f, 4380,026f), Vector(0.0f, 86,94135f, 0.0f), Vector(1,072868f, 1,527305f, 3,114106f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[22]);
	*(&Local_326 + 2456[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_24", 2,802597E-45f, Vector(-4403,159f, 36,43217f, 4379,574f), Vector(0.0f, 51,51168f, 0.0f), Vector(0,8753161f, 1,527305f, 1,105768f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[23]);
	*(&Local_326 + 2456[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_25", 2,802597E-45f, Vector(-4382,554f, 39,29215f, 4360,513f), Vector(0.0f, 16,20436f, 0.0f), Vector(2,243132f, 1,95104f, 3,942165f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[24]);
	*(&Local_326 + 2456[25]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_26", 2,802597E-45f, Vector(-4392,007f, 38,21069f, 4362,681f), Vector(0.0f, 46,64703f, 0.0f), Vector(1,69395f, 1,986027f, 1,237758f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[25]);
	*(&Local_326 + 2456[26]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_27", 2,802597E-45f, Vector(-4395,41f, 38,02301f, 4365,518f), Vector(0.0f, 45,10419f, 0.0f), Vector(0,8753161f, 1,808938f, 2,973797f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[26]);
	*(&Local_326 + 2456[27]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_28", 2,802597E-45f, Vector(-4392,439f, 38,02301f, 4366,866f), Vector(0.0f, 82,90279f, 0.0f), Vector(0,8982508f, 1,808938f, 3,954686f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[27]);
	*(&Local_326 + 2456[28]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_29", 2,802597E-45f, Vector(-4368,791f, 38,81951f, 4360,976f), Vector(0.0f, 8,972184f, 0.0f), Vector(1,18442f, 1,95104f, 3,930655f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[28]);
	*(&Local_326 + 2456[29]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_30", 2,802597E-45f, Vector(-4374,689f, 39,34298f, 4370,996f), Vector(0.0f, -11,63937f, 0.0f), Vector(1,116349f, 1,95104f, 2,856839f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[29]);
	*(&Local_326 + 2456[30]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_31", 2,802597E-45f, Vector(-4374,135f, 39,34298f, 4373,47f), Vector(0.0f, 39,38451f, 0.0f), Vector(1,116349f, 1,95104f, 2,856839f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[30]);
	*(&Local_326 + 2456[31]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_32", 2,802597E-45f, Vector(-4363,041f, 39,1923f, 4353,695f), Vector(0.0f, 4,865744f, 0.0f), Vector(1,236263f, 1,95104f, 1,42109f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[31]);
	*(&Local_326 + 2456[32]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_33", 2,802597E-45f, Vector(-4361,142f, 39,09452f, 4358,321f), Vector(0.0f, 5,773386f, 0.0f), Vector(1,116349f, 1,95104f, 2,03251f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[32]);
	*(&Local_326 + 2456[33]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_34", 2,802597E-45f, Vector(-4341,704f, 30,86512f, 4370,954f), Vector(0.0f, -0,2029452f, 0.0f), Vector(1,24977f, 2,254668f, 1,18008f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[33]);
	*(&Local_326 + 2456[34]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_35", 2,802597E-45f, Vector(-4405,665f, 35,79206f, 4386,362f), Vector(0.0f, 78,2635f, 0.0f), Vector(1,088624f, 1,527305f, 2,133466f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[34]);
	*(&Local_326 + 2456[35]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_36", 2,802597E-45f, Vector(-4400,971f, 34,09966f, 4415,86f), Vector(0.0f, 106,3797f, 0.0f), Vector(0,9585737f, 2,990529f, 3,812552f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[35]);
	*(&Local_326 + 2456[36]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_37", 2,802597E-45f, Vector(-4395,348f, 34,09966f, 4413,952f), Vector(0.0f, 108,4581f, 0.0f), Vector(0,9585737f, 2,990529f, 3,812552f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[36]);
	*(&Local_326 + 2456[37]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "barOb_38", 2,802597E-45f, Vector(-4356,101f, 29,56111f, 4413,357f), Vector(0.0f, -3,154499f, 0.0f), Vector(1,601181f, 2,990529f, 2,235607f));
	ADD_TO_VOLUME_SET(&Local_326 + 2768, &Local_326 + 2456[37]);
	*(&Local_326 + 2776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "RoofTopVilla2", 2,802597E-45f, Vector(-4357,557f, 44,87726f, 4365,906f), Vector(0.0f, 5,496288f, 0.0f), Vector(7,633258f, 3,353548f, 8,345065f));
	*(&Local_326 + 2784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "S4_End", 2,802597E-45f, Vector(-4388,692f, 41,21154f, 4366,799f), Vector(0.0f, 44,92978f, 0.0f), Vector(1,275566f, 20,89979f, 81,63441f));
	*(&Local_326 + 2792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaGate1", 2,802597E-45f, Vector(-4373,257f, 40,76725f, 4362,11f), Vector(0.0f, 17,00539f, 0.0f), Vector(2,909955f, 4,797256f, 5,496757f));
	*(&Local_326 + 2800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "spawn_army_3", 2,802597E-45f, Vector(-4381,227f, 33,78461f, 4412,99f), Vector(0.0f, 102,0373f, 0.0f), Vector(56,05396f, 18,35436f, 1,488673f));
	*(&Local_326 + 2808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "BarricadeVol_1", 2,802597E-45f, Vector(-4371,897f, 34,38783f, 4416,838f), Vector(0.0f, 9,385709f, 0.0f), Vector(13,15703f, 6,739141f, 21,74693f));
	*(&Local_326 + 2816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "hostileZone", 2,802597E-45f, Vector(-4360,873f, 32,72186f, 4416,264f), Vector(0.0f, 5,108901f, 0.0f), Vector(20,92813f, 10,17153f, 16,43221f));
	*(&Local_326 + 2824) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "BarricadeVol_2", 2,802597E-45f, Vector(-4400,676f, 36,78347f, 4388,892f), Vector(0.0f, 87,94728f, 0.0f), Vector(24,96179f, 6,739141f, 23,45945f));
	*(&Local_326 + 2832) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "BarricadeVol_3", 2,802597E-45f, Vector(-4394,596f, 39,04578f, 4376,069f), Vector(0.0f, 50,53435f, 0.0f), Vector(20,72793f, 6,739141f, 21,5801f));
	*(&Local_326 + 2840) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "MobStayOut1", 2,802597E-45f, Vector(-4377,656f, 40,37018f, 4384,316f), Vector(0.0f, -45,91817f, 0.0f), Vector(19,63002f, 6,882916f, 33,68529f));
	*(&Local_326 + 2848) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "VillaDoorway", 2,802597E-45f, Vector(-4343,752f, 43,36833f, 4339,786f), Vector(0.0f, 0.0f, 0.0f), Vector(7,511582f, 2,944253f, 6,35324f));
	*(&Local_326 + 2856) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "rebelAttack_1", 2,802597E-45f, Vector(-4400,762f, 36,57903f, 4413,459f), Vector(0.0f, 110,34f, 0.0f), Vector(23,91531f, 9,094547f, 18,55493f));
	*(&Local_326 + 2864) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "triggerFiringSquad", 2,802597E-45f, Vector(-4323,107f, 29,43454f, 4394,263f), Vector(0.0f, 36,69822f, 0.0f), Vector(20,39239f, 11,6274f, 10,26789f));
	*(&Local_326 + 2872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "def_Villa_1_1", 2,802597E-45f, Vector(-4367,745f, 40,77601f, 4360,8f), Vector(0.0f, 9,153252f, 0.0f), Vector(3,360389f, 5,00132f, 4,300007f));
	*(&Local_326 + 2880) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "def_Villa_1_2", 2,802597E-45f, Vector(-4375,575f, 40,77601f, 4369,756f), Vector(0.0f, 19,83343f, 0.0f), Vector(8,322847f, 5,00132f, 13,10452f));
	*(&Local_326 + 2888) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "def_Villa_1_3", 2,802597E-45f, Vector(-4379,229f, 40,77601f, 4360,321f), Vector(0.0f, 20,54485f, 0.0f), Vector(8,050077f, 5,00132f, 7,124521f));
	*(&Local_326 + 2896) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "backYardBattle", 2,802597E-45f, Vector(-4360,016f, 34,37901f, 4280,591f), Vector(0.0f, 0.0f, 0.0f), Vector(18,61245f, 9,254356f, 26,08397f));
	*(&Local_326 + 2904) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "nearGatling", 2,802597E-45f, Vector(-4392,301f, 39,72455f, 4363,633f), Vector(0.0f, 66,38308f, 0.0f), Vector(7,478644f, 5,948627f, 6,284294f));
	*(&Local_326 + 2912) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "houseOnFire", 2,802597E-45f, Vector(-4352,033f, 30,66656f, 4404,419f), Vector(0.0f, 0.0f, 0.0f), Vector(3,469287f, 2,921329f, 2,376907f));
	*(&Local_326 + 2920) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "lightYouOnFire", 2,802597E-45f, Vector(-4349,777f, 30,43179f, 4404,43f), Vector(0.0f, 0.0f, 0.0f), Vector(0,9108875f, 3,209408f, 1,646197f));
	*(&Local_326 + 2928) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "firingSquadKilllZone", 2,802597E-45f, Vector(-4324,528f, 28,69902f, 4397,408f), Vector(0.0f, -14,88518f, 0.0f), Vector(5,762217f, 5,874547f, 3,918006f));
	*(&Local_326 + 2936) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "BurnHouseKilllZone", 2,802597E-45f, Vector(-4348,121f, 29,28869f, 4405,132f), Vector(0.0f, -90,37446f, 0.0f), Vector(6,855475f, 5,874547f, 4,486678f));
	*(&Local_326 + 2944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "jailYard", 2,802597E-45f, Vector(-4343,584f, 31,56336f, 4374,416f), Vector(0.0f, 2,606588f, 0.0f), Vector(14,59337f, 3,317155f, 13,25975f));
	*(&Local_326 + 2952) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "PlayerDefVillaFront_1", 2,802597E-45f, Vector(-4380,796f, 39,81216f, 4365,925f), Vector(0.0f, 19,0692f, 0.0f), Vector(15,07666f, 8,534109f, 17,79036f));
	*(&Local_326 + 2960) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "PlayerDefVillaFront_2", 2,802597E-45f, Vector(-4392,169f, 39,81216f, 4360,057f), Vector(0.0f, 80,36427f, 0.0f), Vector(15,07666f, 8,534109f, 29,20065f));
	*(&Local_326 + 2968) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_326, "sniperZoomCheck", 2,802597E-45f, Vector(-4350,609f, 43,57037f, 4324,075f), Vector(0.0f, 0.0f, 0.0f), Vector(34,69471f, 3,491198f, 3,780176f));
	*(&Local_326 + 2976) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &Local_326, 8, 0);
	*(&Local_326 + 2984[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "PlayerStart01", Vector(-4292,629f, 22,10065f, 4407,666f), Vector(0.0f, 130,4002f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 2984[0], &Local_326 + 2976);
	*(&Local_326 + 2984[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "CompanionStart01", Vector(-4320.0f, 22,08627f, 4421,652f), Vector(0.0f, -80,25298f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 2984[1], &Local_326 + 2976);
	*(&Local_326 + 3008[03]) = Vector(-4302,114f, 22,00521f, 4416,619f);
	*(&Local_326 + 3008[03] + 12) = Vector(0.0f, -282,0214f, 0.0f);
	*(&Local_326 + 3008[13]) = Vector(-4308,015f, 23,05242f, 4415,708f);
	*(&Local_326 + 3008[13] + 12) = Vector(0.0f, -73,82634f, 0.0f);
	*(&Local_326 + 3064[03]) = Vector(-4346,017f, 27,19024f, 4409,923f);
	*(&Local_326 + 3064[03] + 12) = Vector(0.0f, -209,6241f, 0.0f);
	*(&Local_326 + 3064[13]) = Vector(-4345,876f, 27,99883f, 4418,762f);
	*(&Local_326 + 3064[13] + 12) = Vector(0.0f, 79,83891f, 0.0f);
	*(&Local_326 + 3064[23]) = Vector(-4349,18f, 28,53832f, 4421,528f);
	*(&Local_326 + 3064[23] + 12) = Vector(0.0f, 81,16205f, 0.0f);
	*(&Local_326 + 3144) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &Local_326, 8, 0);
	*(&Local_326 + 3152[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "PlayerStart04", Vector(-4351,729f, 28,85404f, 4419,053f), Vector(0.0f, -271,6394f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3152[0], &Local_326 + 3144);
	*(&Local_326 + 3152[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "CompanionStart04", Vector(-4352,388f, 29,08127f, 4419,738f), Vector(0.0f, 80,61343f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3152[1], &Local_326 + 3144);
	*(&Local_326 + 3176[03]) = Vector(-4393,92f, 37,53976f, 4368,513f);
	*(&Local_326 + 3176[03] + 12) = Vector(0.0f, -415,2548f, 0.0f);
	*(&Local_326 + 3176[13]) = Vector(-4381,933f, 38,70368f, 4364,146f);
	*(&Local_326 + 3176[13] + 12) = Vector(0.0f, 104,8887f, 0.0f);
	*(&Local_326 + 3176[23]) = Vector(-4397,939f, 37,48215f, 4370,91f);
	*(&Local_326 + 3176[23] + 12) = Vector(0.0f, -51,70406f, 0.0f);
	*(&Local_326 + 3256[03]) = Vector(-4360,143f, 42,01784f, 4349,097f);
	*(&Local_326 + 3256[03] + 12) = Vector(0.0f, 139,7537f, 0.0f);
	*(&Local_326 + 3256[13]) = Vector(-4357,512f, 42,01784f, 4347,636f);
	*(&Local_326 + 3256[13] + 12) = Vector(0.0f, 119,2632f, 0.0f);
	*(&Local_326 + 3256[23]) = Vector(-4349,375f, 39,21355f, 4355,824f);
	*(&Local_326 + 3256[23] + 12) = Vector(0.0f, 88,21271f, 0.0f);
	*(&Local_326 + 3336[03]) = Vector(-4342,334f, 42,01784f, 4340,267f);
	*(&Local_326 + 3336[03] + 12) = Vector(0.0f, -327,1071f, 0.0f);
	*(&Local_326 + 3336[13]) = Vector(-4345,228f, 42,01784f, 4339,332f);
	*(&Local_326 + 3336[13] + 12) = Vector(0.0f, -395,2328f, 0.0f);
	*(&Local_326 + 3336[23]) = Vector(-4344,129f, 42,01784f, 4339,023f);
	*(&Local_326 + 3336[23] + 12) = Vector(0.0f, -5,698364f, 0.0f);
	*(&Local_326 + 3336[33]) = Vector(-4343,457f, 42,04895f, 4341,649f);
	*(&Local_326 + 3336[33] + 12) = Vector(0.0f, 1,923039f, 0.0f);
	*(&Local_326 + 3336[43]) = Vector(-4342,063f, 42,01784f, 4338,499f);
	*(&Local_326 + 3336[43] + 12) = Vector(0.0f, -217,6197f, 0.0f);
	*(&Local_326 + 3464) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene09Set", &Local_326, 8, 0);
	*(&Local_326 + 3472[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "PlayerStart09", Vector(-4081,081f, 8,37097f, 4306,619f), Vector(0.0f, -193,6451f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3472[0], &Local_326 + 3464);
	*(&Local_326 + 3472[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "CompanionStart09", Vector(-4079,689f, 8,258664f, 4307,048f), Vector(0.0f, -226,5738f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3472[1], &Local_326 + 3464);
	*(&Local_326 + 3472[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "PlayerHorseStart09", Vector(-4087,143f, 8,767815f, 4306,191f), Vector(0.0f, -113,5937f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3472[2], &Local_326 + 3464);
	*(&Local_326 + 3472[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "ReyesHorseStart09", Vector(-4088,962f, 8,628193f, 4308,17f), Vector(0.0f, -114,1134f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3472[3], &Local_326 + 3464);
	*(&Local_326 + 3512[03]) = Vector(-4360,143f, 42,01784f, 4349,097f);
	*(&Local_326 + 3512[03] + 12) = Vector(0.0f, 139,4057f, 0.0f);
	*(&Local_326 + 3512[13]) = Vector(-4379,453f, 38,70368f, 4366,147f);
	*(&Local_326 + 3512[13] + 12) = Vector(0.0f, 83,80873f, 0.0f);
	*(&Local_326 + 3512[23]) = Vector(-4380,973f, 38,70368f, 4365,476f);
	*(&Local_326 + 3512[23] + 12) = Vector(0.0f, 113,7778f, 0.0f);
	*(&Local_326 + 3592) = CREATE_OBJECTSET_IN_LAYOUT("defendPos_1Set", &Local_326, 8, 0);
	*(&Local_326 + 3600[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "dfPos_1", Vector(-4358,992f, 30,38202f, 4418,275f), Vector(0.0f, -88,40955f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3600[0], &Local_326 + 3592);
	*(&Local_326 + 3600[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "dfPos_2", Vector(-4358,876f, 30,31779f, 4416,404f), Vector(0.0f, -88.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3600[1], &Local_326 + 3592);
	*(&Local_326 + 3600[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "dfPos_3", Vector(-4359,096f, 30,14952f, 4414,879f), Vector(0.0f, -103,4759f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3600[2], &Local_326 + 3592);
	*(&Local_326 + 3600[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "dfPos_4", Vector(-4358,882f, 30,3729f, 4420,246f), Vector(0.0f, -88.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3600[3], &Local_326 + 3592);
	*(&Local_326 + 3600[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "dfPos_5", Vector(-4358,656f, 30,8533f, 4421,903f), Vector(0.0f, -88.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3600[4], &Local_326 + 3592);
	*(&Local_326 + 3648) = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn0Set", &Local_326, 8, 0);
	*(&Local_326 + 3656[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_spawn_1", Vector(-4322,625f, 22,53701f, 4418,625f), Vector(0.0f, 72,93301f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3656[0], &Local_326 + 3648);
	*(&Local_326 + 3656[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_spawn_2", Vector(-4337,556f, 26,16237f, 4421,809f), Vector(0.0f, 66,91772f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3656[1], &Local_326 + 3648);
	*(&Local_326 + 3656[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_spawn_3", Vector(-4340,02f, 26,29766f, 4425,333f), Vector(0.0f, 53,10817f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3656[2], &Local_326 + 3648);
	*(&Local_326 + 3688) = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn1Set", &Local_326, 8, 0);
	*(&Local_326 + 3696[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_spawn1_1", Vector(-4363,74f, 30,92903f, 4412,232f), Vector(0.0f, 93,85889f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3696[0], &Local_326 + 3688);
	*(&Local_326 + 3696[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_spawn1_2", Vector(-4360,223f, 31,23281f, 4425,538f), Vector(0.0f, 29,82874f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3696[1], &Local_326 + 3688);
	*(&Local_326 + 3696[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mob_spawn1_3", Vector(-4376,991f, 32,91586f, 4407,12f), Vector(0.0f, 152,819f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3696[2], &Local_326 + 3688);
	*(&Local_326 + 3728) = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn2Set", &Local_326, 8, 0);
	*(&Local_326 + 3736[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mobSpawn2_1", Vector(-4403,22f, 37,84437f, 4362,156f), Vector(0.0f, 260,1008f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3736[0], &Local_326 + 3728);
	*(&Local_326 + 3736[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mobSpawn2_2", Vector(-4385,672f, 38,10271f, 4371,644f), Vector(0.0f, -60,34604f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3736[1], &Local_326 + 3728);
	*(&Local_326 + 3736[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mobSpawn2_3", Vector(-4398,644f, 36,00029f, 4380,473f), Vector(0.0f, -42,42971f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3736[2], &Local_326 + 3728);
	*(&Local_326 + 3768) = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn3Set", &Local_326, 8, 0);
	*(&Local_326 + 3776[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mobSpawn3_1", Vector(-4340,944f, 39,21354f, 4347,824f), Vector(0.0f, 149,4332f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3776[0], &Local_326 + 3768);
	*(&Local_326 + 3776[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mobSpawn3_2", Vector(-4374,716f, 38,86792f, 4355,824f), Vector(0.0f, 215,3286f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3776[1], &Local_326 + 3768);
	*(&Local_326 + 3776[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "mobSpawn3_3", Vector(-4370,103f, 39,26843f, 4366,813f), Vector(0.0f, 14,39727f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_326 + 3776[2], &Local_326 + 3768);
	*(&Local_326 + 3808) = CREATE_OBJECTSET_IN_LAYOUT("boardFirePosSet", &Local_326, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "boardFire_1", Vector(-4350,548f, 30,57769f, 4404,442f), Vector(11,54849f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &Local_326 + 3808);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "boardFire_2", Vector(-4350,561f, 30,21192f, 4404,495f), Vector(39,83064f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &Local_326 + 3808);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "boardFire_3", Vector(-4350,548f, 29,42214f, 4404,442f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &Local_326 + 3808);
	*(&Local_326 + 3816) = Vector(-4384,99f, 38,65281f, 4367,158f);
	*(&Local_326 + 3816 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_326 + 3840) = Vector(-4296,812f, 22,0052f, 4411,938f);
	*(&Local_326 + 3840 + 12) = Vector(0.0f, -48,44003f, 0.0f);
	*(&Local_326 + 3864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "RL_talkToGuy", Vector(-4296,063f, 22,0052f, 4408,339f), Vector(0.0f, 123,0696f, 0.0f));
	*(&Local_326 + 3872) = Vector(-4328,462f, 23,33719f, 4433,338f);
	*(&Local_326 + 3872 + 12) = Vector(0.0f, 59,22617f, 0.0f);
	*(&Local_326 + 3896) = Vector(-4360,674f, 30,90853f, 4420,968f);
	*(&Local_326 + 3896 + 12) = Vector(0.0f, 92,86179f, 0.0f);
	*(&Local_326 + 3920) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "EscapeWp", Vector(-4380,851f, 33,64089f, 4273,87f), Vector(0.0f, 123,0722f, 0.0f));
	*(&Local_326 + 3928) = Vector(-4376,016f, 33,88792f, 4273,492f);
	*(&Local_326 + 3928 + 12) = Vector(0.0f, 87,67809f, 0.0f);
	*(&Local_326 + 3952) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "explodeDoor1", Vector(-4373,802f, 39,60951f, 4362,255f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 3960) = Vector(-4339,715f, 33,93617f, 4297,672f);
	*(&Local_326 + 3960 + 12) = Vector(0.0f, 71,32946f, 0.0f);
	*(&Local_326 + 3984) = Vector(-4360,016f, 34,08374f, 4299,41f);
	*(&Local_326 + 3984 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_326 + 4008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "visCheckWagon", Vector(-4372,685f, 33,93516f, 4273,486f), Vector(0.0f, 59,37204f, 0.0f));
	*(&Local_326 + 4016) = Vector(-4342,837f, 30,11766f, 4381,124f);
	*(&Local_326 + 4016 + 12) = Vector(0.0f, 91,03117f, 0.0f);
	*(&Local_326 + 4040) = Vector(-4352,427f, 30,07841f, 4371,701f);
	*(&Local_326 + 4040 + 12) = Vector(0.0f, 275,5093f, 0.0f);
	*(&Local_326 + 4064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "barrel_place_1", Vector(-4375,593f, 38,70368f, 4361,987f), Vector(0.0f, -75,45528f, 0.0f));
	*(&Local_326 + 4072) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "barrel_place_2", Vector(-4375,15f, 38,70368f, 4363,716f), Vector(0.0f, -75,45528f, 0.0f));
	*(&Local_326 + 4080) = Vector(-4367,08f, 39,15295f, 4362,081f);
	*(&Local_326 + 4080 + 12) = Vector(0.0f, 92,73617f, 0.0f);
	*(&Local_326 + 4104) = Vector(-4367,223f, 39,15295f, 4360,992f);
	*(&Local_326 + 4104 + 12) = Vector(0.0f, 92,73617f, 0.0f);
	*(&Local_326 + 4128) = Vector(-4367,436f, 39,15295f, 4359,817f);
	*(&Local_326 + 4128 + 12) = Vector(0.0f, 92,73617f, 0.0f);
	*(&Local_326 + 4152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "backupBarrel_1", Vector(-4372,455f, 39,26331f, 4372,883f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "backupBarrel_3", Vector(-4380,49f, 38,70368f, 4361,261f), Vector(0.0f, -14,178f, 0.0f));
	*(&Local_326 + 4168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "shootBurningPeople", Vector(-4349,173f, 29,94217f, 4404,427f), Vector(0.0f, -92,27142f, 0.0f));
	*(&Local_326 + 4176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "prison_shoot_1", Vector(-4347,876f, 30,07451f, 4372,463f), Vector(0.0f, -150,8691f, 0.0f));
	*(&Local_326 + 4184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "prison_shoot_2", Vector(-4344,731f, 30,11765f, 4370,599f), Vector(0.0f, -161,3522f, 0.0f));
	*(&Local_326 + 4192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "CenterSoundPoint", Vector(-4339,365f, 35,51597f, 4391,784f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4200) = Vector(-4083,434f, 8,505189f, 4313,928f);
	*(&Local_326 + 4200 + 12) = Vector(0.0f, -98,24567f, 0.0f);
	*(&Local_326 + 4224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "reyesGoInside", Vector(-4343,837f, 42,08085f, 4331,826f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "ReyesAtDoor", Vector(-4346,901f, 42,01784f, 4342,193f), Vector(0.0f, 148,2133f, 0.0f));
	*(&Local_326 + 4240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "exitJail", Vector(-4349,132f, 30,07278f, 4371,403f), Vector(0.0f, -150,8691f, 0.0f));
	*(&Local_326 + 4248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "billsHat", Vector(-4082,046f, 8,510687f, 4309,476f), Vector(0.0f, 19,55964f, 0.0f));
	*(&Local_326 + 4256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "Rebels_S6_Shoot_1", Vector(-4356,016f, 41,13559f, 4352,521f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_326, "Rebels_S6_Shoot_2", Vector(-4352,132f, 41,13559f, 4355,859f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "chop_door1", "stand_chop_door", Vector(-4344,496f, 42,04895f, 4337,63f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "chop_door2", "stand_chop_door", Vector(-4343,554f, 42,04895f, 4337,63f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_326 + 4288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "crying_linked", "crying_linked", Vector(-4326,584f, 26,47878f, 4395,535f), Vector(0.0f, -123,564f, 0.0f));
	*(&Local_326 + 4296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "hostage_sit", "hostage_kneel", Vector(-4297,978f, 22,05748f, 4409,644f), Vector(0.0f, -63,16186f, 0.0f));
	*(&Local_326 + 4304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "reb05_pull", "reb05_pull", Vector(-4082,924f, 8,411061f, 4314,342f), Vector(0.0f, -10,75781f, 0.0f));
	*(&Local_326 + 4312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_1", "tense_with_guns", Vector(-4342,232f, 42,01784f, 4342,029f), Vector(0.0f, 13,99183f, 0.0f));
	*(&Local_326 + 4320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_2", "tense_with_guns", Vector(-4344,935f, 42,06953f, 4341,974f), Vector(0.0f, -24,92964f, 0.0f));
	*(&Local_326 + 4328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_3", "tense_with_guns", Vector(-4348,554f, 42,11798f, 4345,523f), Vector(0.0f, -42,55337f, 0.0f));
	*(&Local_326 + 4336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_4", "tense_with_guns", Vector(-4350,386f, 42,068f, 4339,935f), Vector(0.0f, -73,97371f, 0.0f));
	*(&Local_326 + 4344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_5", "tense_with_guns", Vector(-4361,129f, 39,21352f, 4353,339f), Vector(0.0f, -243,8441f, 0.0f));
	*(&Local_326 + 4352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_6", "tense_with_guns", Vector(-4360,824f, 42,01784f, 4346,571f), Vector(0.0f, -213,3075f, 0.0f));
	*(&Local_326 + 4360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_7", "tense_with_guns", Vector(-4366,126f, 38,74714f, 4360,001f), Vector(0.0f, -243,8441f, 0.0f));
	*(&Local_326 + 4368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_326, "waitWithGuns_8", "tense_with_guns", Vector(-4354,037f, 39,21354f, 4355,829f), Vector(0.0f, -266,3794f, 0.0f));
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low1", Vector(-4367,783f, 32,80107f, 4422,499f), Vector(0.0f, -70,01777f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low2", Vector(-4364,946f, 31,14153f, 4411,459f), Vector(0.0f, -6,399333f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low3", Vector(-4368,646f, 32,17377f, 4415,016f), Vector(0.0f, -88,65405f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low4", Vector(-4370,717f, 31,59463f, 4408,183f), Vector(0.0f, -26,10067f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low5", Vector(-4374,142f, 32,30375f, 4409,695f), Vector(0.0f, -28,43751f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low6", Vector(-4365,15f, 31,49764f, 4417,957f), Vector(0.0f, -82,62747f, 0.0f), 4);
	*(&Local_326 + 4376) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "bar1_fallback_1", Vector(-4403,503f, 33,89283f, 4405,799f), Vector(0.0f, 562,9893f, 0.0f), 4);
	*(&Local_326 + 4384) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "bar1_fallback_2", Vector(-4396,681f, 33,94688f, 4412,827f), Vector(0.0f, 199,6372f, 0.0f), 4);
	*(&Local_326 + 4392) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "bar1_fallback_3", Vector(-4400,475f, 33,9302f, 4404,765f), Vector(0.0f, 559,4316f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low16", Vector(-4401,582f, 33,9258f, 4401,203f), Vector(0.0f, 545,9543f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low17", Vector(-4407,49f, 33,91513f, 4403,716f), Vector(0.0f, 557,7413f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low18", Vector(-4407,861f, 34,043f, 4408,022f), Vector(0.0f, 562,8875f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low42", Vector(-4406,559f, 33,89292f, 4406,521f), Vector(0.0f, 378,3354f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low43", Vector(-4406,831f, 34,03436f, 4410,7f), Vector(0.0f, 380,1208f, 0.0f), 4);
	*(&Local_326 + 4400) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low44", Vector(-4401,105f, 33,89281f, 4404,149f), Vector(0.0f, 366,073f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low45", Vector(-4402,31f, 33,95216f, 4408,523f), Vector(0.0f, 384,4874f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low46", Vector(-4399,51f, 33,96928f, 4407,452f), Vector(0.0f, 377,2581f, 0.0f), 4);
	*(&Local_326 + 4408) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_2", Vector(-4340,328f, 42,01784f, 4343,25f), Vector(0.0f, 535,9584f, 0.0f), 4);
	*(&Local_326 + 4416) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_3", Vector(-4342,049f, 42,05346f, 4340,136f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&Local_326 + 4424) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_14", Vector(-4362,7f, 39,09638f, 4357,958f), Vector(0.0f, 286,3033f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_15", Vector(-4362,625f, 39,03262f, 4358,915f), Vector(0.0f, 275,5551f, 0.0f), 4);
	*(&Local_326 + 4432) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low67", Vector(-4391,392f, 37,85982f, 4365,41f), Vector(0.0f, 537,4996f, 0.0f), 4);
	*(&Local_326 + 4440) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low68", Vector(-4394,445f, 37,80184f, 4364,403f), Vector(0.0f, 496,6379f, 0.0f), 4);
	*(&Local_326 + 4448) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low69", Vector(-4372,605f, 39,25938f, 4372,852f), Vector(0.0f, 489,5425f, 0.0f), 4);
	*(&Local_326 + 4456) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low70", Vector(-4373,053f, 39,25938f, 4371,793f), Vector(0.0f, 454,4549f, 0.0f), 4);
	*(&Local_326 + 4464) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low71", Vector(-4372,978f, 39,25938f, 4370,503f), Vector(0.0f, 441,6783f, 0.0f), 4);
	*(&Local_326 + 4472) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low74", Vector(-4377,818f, 33,57861f, 4413,075f), Vector(0.0f, -81,91872f, 0.0f), 4);
	*(&Local_326 + 4480) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low75", Vector(-4378,133f, 33,55053f, 4411,835f), Vector(0.0f, -62,33206f, 0.0f), 4);
	*(&Local_326 + 4488) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low76", Vector(-4374,934f, 33,49009f, 4415,816f), Vector(0.0f, -67,40839f, 0.0f), 4);
	*(&Local_326 + 4496) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low77", Vector(-4374,936f, 33,49009f, 4416,989f), Vector(0.0f, -102,653f, 0.0f), 4);
	*(&Local_326 + 4504) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low78", Vector(-4376,78f, 33,63926f, 4420,678f), Vector(0.0f, -75,97424f, 0.0f), 4);
	*(&Local_326 + 4512) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low79", Vector(-4376,854f, 33,84067f, 4421,981f), Vector(0.0f, -98,62355f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low80", Vector(-4407,891f, 34,19673f, 4397,116f), Vector(0.0f, 535,048f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low81", Vector(-4406,436f, 34,04344f, 4397,129f), Vector(0.0f, 543,6779f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low82", Vector(-4401,496f, 34,07677f, 4397,222f), Vector(0.0f, 546,6753f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low83", Vector(-4400,226f, 34,27619f, 4397,041f), Vector(0.0f, 547,7964f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low84", Vector(-4404,024f, 34,5992f, 4391,244f), Vector(0.0f, 547,7964f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low85", Vector(-4405,649f, 34,52304f, 4391,354f), Vector(0.0f, 535,6931f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low86", Vector(-4405,462f, 35,51943f, 4384,819f), Vector(0.0f, 531,5236f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low87", Vector(-4398,147f, 35,77225f, 4385,018f), Vector(0.0f, 527,9854f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low88", Vector(-4399,725f, 35,57272f, 4384,664f), Vector(0.0f, 524,4301f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low89", Vector(-4400,956f, 36,11836f, 4378,492f), Vector(0.0f, 548,2654f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low90", Vector(-4402,198f, 36,27468f, 4378,395f), Vector(0.0f, 518,0402f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low91", Vector(-4394,804f, 36,23929f, 4380,995f), Vector(0.0f, 520,9148f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low92", Vector(-4393,45f, 36,13519f, 4381,406f), Vector(0.0f, 521,8427f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low93", Vector(-4408,373f, 34,04344f, 4400,148f), Vector(0.0f, 354,964f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low94", Vector(-4399,967f, 34,04344f, 4400,106f), Vector(0.0f, 367,5592f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low95", Vector(-4405,393f, 34,30551f, 4394,461f), Vector(0.0f, 361,8152f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low96", Vector(-4403,979f, 34,30551f, 4394,45f), Vector(0.0f, 361,8152f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low97", Vector(-4405,995f, 35,01971f, 4387,807f), Vector(0.0f, 350,0662f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low98", Vector(-4400,341f, 35,05477f, 4387,575f), Vector(0.0f, 348,9796f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low99", Vector(-4398,589f, 35,46404f, 4387,974f), Vector(0.0f, 350,6835f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low104", Vector(-4406,25f, 33,92831f, 4400,288f), Vector(0.0f, 359,0627f, 0.0f), 4);
	*(&Local_326 + 4520) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low105", Vector(-4393,651f, 37,89179f, 4362,197f), Vector(0.0f, 266,5016f, 0.0f), 4);
	*(&Local_326 + 4528) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low106", Vector(-4381,22f, 38,70368f, 4358,606f), Vector(0.0f, 473,7447f, 0.0f), 4);
	*(&Local_326 + 4536) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low107", Vector(-4380,5f, 38,70368f, 4361,397f), Vector(0.0f, 456,0822f, 0.0f), 4);
	*(&Local_326 + 4544) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_16", Vector(-4367,496f, 38,72309f, 4359,811f), Vector(0.0f, 100,408f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_17", Vector(-4367,28f, 38,72309f, 4360,984f), Vector(0.0f, 100,408f, 0.0f), 4);
	*(&Local_326 + 4552) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_18", Vector(-4367,074f, 38,72309f, 4362,107f), Vector(0.0f, 100,408f, 0.0f), 4);
	*(&Local_326 + 4560) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low108", Vector(-4380,807f, 38,70368f, 4359,817f), Vector(0.0f, 465,3139f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_21", Vector(-4338,735f, 39,22027f, 4355,331f), Vector(0.0f, 451,9379f, 0.0f), 4);
	*(&Local_326 + 4568) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_23", Vector(-4353,794f, 39,18475f, 4357,796f), Vector(0.0f, 451,9379f, 0.0f), 4);
	*(&Local_326 + 4576) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_24", Vector(-4370,006f, 38,71339f, 4362,661f), Vector(0.0f, -79,82064f, 0.0f), 4);
	*(&Local_326 + 4584) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_25", Vector(-4370,235f, 38,71339f, 4361,387f), Vector(0.0f, -79,82064f, 0.0f), 4);
	*(&Local_326 + 4592) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_26", Vector(-4370,468f, 38,7909f, 4360,087f), Vector(0.0f, -79,82064f, 0.0f), 4);
	*(&Local_326 + 4600) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_27", Vector(-4359,583f, 42,01783f, 4340,816f), Vector(0.0f, 235,9377f, 0.0f), 4);
	*(&Local_326 + 4608) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_29", Vector(-4364,537f, 39,02642f, 4353,699f), Vector(0.0f, 270,7666f, 0.0f), 4);
	*(&Local_326 + 4616) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_31", Vector(-4361,423f, 39,16451f, 4353,559f), Vector(0.0f, 456,5775f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_32", Vector(-4363,142f, 39,21867f, 4351,99f), Vector(0.0f, 540,6102f, 0.0f), 4);
	*(&Local_326 + 4624) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_37", Vector(-4365,767f, 39,1862f, 4302,875f), Vector(0.0f, 361,8986f, 0.0f), 4);
	*(&Local_326 + 4632) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_38", Vector(-4346,624f, 42,01784f, 4340,104f), Vector(0.0f, -359,4552f, 0.0f), 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_39", Vector(-4361,177f, 42,01784f, 4347,964f), Vector(0.0f, 508,7325f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "coverRock_1", Vector(-4410,944f, 34,19502f, 4407,619f), Vector(0.0f, -16,99912f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low49", Vector(-4407,952f, 34,59314f, 4415,852f), Vector(0.0f, -16,99912f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "coverRock_3", Vector(-4403,373f, 35,10794f, 4420,489f), Vector(0.0f, -16,99912f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "coverRock_4", Vector(-4402,4f, 35,26327f, 4422,235f), Vector(0.0f, -8,163645f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "coverRock_5", Vector(-4396,003f, 34,7036f, 4424,527f), Vector(0.0f, 2,981675f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "coverRock_7", Vector(-4391,703f, 33,92652f, 4409,469f), Vector(0.0f, 29,40482f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "coverRock_8", Vector(-4408,469f, 34,96751f, 4386,979f), Vector(0.0f, -47,76676f, 0.0f), 4);
	*(&Local_326 + 4640) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_40", Vector(-4356,599f, 42,01784f, 4348,843f), Vector(0.0f, 538,0657f, 0.0f), 4);
	*(&Local_326 + 4648) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_41", Vector(-4359,607f, 39,15898f, 4358,007f), Vector(0.0f, 456,5775f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_42", Vector(-4362,375f, 42,01784f, 4345,21f), Vector(0.0f, 467,2283f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_43", Vector(-4354,211f, 42,01784f, 4348,138f), Vector(0.0f, 540,3809f, 0.0f), 4);
	*(&Local_326 + 4656) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_2", Vector(-4385,365f, 36,82064f, 4374,331f), Vector(0.0f, 52,04652f, 0.0f), 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_3", Vector(-4404,568f, 35,82568f, 4382,53f), Vector(0.0f, 150,3262f, 0.0f), 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_4", Vector(-4402,338f, 36,32609f, 4377,737f), Vector(0.0f, -38,10409f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_5", Vector(-4396,054f, 36,18399f, 4383,792f), Vector(0.0f, 341,398f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_6", Vector(-4402,852f, 35,75824f, 4381,395f), Vector(0.0f, 349,8308f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_7", Vector(-4401,255f, 35,72192f, 4381,572f), Vector(0.0f, 357,337f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "c_shoot_at_gates_8", Vector(-4394,452f, 36,19873f, 4384,27f), Vector(0.0f, 341,398f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low109", Vector(-4401,39f, 34,01046f, 4400,295f), Vector(0.0f, 367,5592f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low110", Vector(-4395,667f, 34,09604f, 4415,641f), Vector(0.0f, 377,2581f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low111", Vector(-4393,994f, 34,09604f, 4415,121f), Vector(0.0f, 377,2581f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low112", Vector(-4399,757f, 34,30888f, 4417,039f), Vector(0.0f, 377,2581f, 0.0f), 4);
	*(&Local_326 + 4664) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_ReyesBottomHill", Vector(-4401,334f, 34,59439f, 4417,529f), Vector(0.0f, 377,2581f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low114", Vector(-4395,042f, 33,94688f, 4412,242f), Vector(0.0f, 199,6372f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low116", Vector(-4400,599f, 34,18127f, 4414,193f), Vector(0.0f, 198,1765f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low117", Vector(-4402,271f, 34,18127f, 4414,762f), Vector(0.0f, 198,1765f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "ncover_low", Vector(-4371,643f, 38,83499f, 4353,821f), Vector(0.0f, -88,09394f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low118", Vector(-4371,592f, 38,83499f, 4355,364f), Vector(0.0f, -88,09394f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_low119", Vector(-4371,694f, 38,83499f, 4352,297f), Vector(0.0f, -88,09394f, 0.0f), 4);
	*(&Local_326 + 4672) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "gatesCover_L", Vector(-4372,973f, 38,70365f, 4363,646f), Vector(0.0f, -69,91731f, 0.0f), 1);
	*(&Local_326 + 4680) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "gatesCover_R", Vector(-4373,909f, 38,70365f, 4360,629f), Vector(0.0f, -162,2823f, 0.0f), 1);
	*(&Local_326 + 4688) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "jailYardCover_3", Vector(-4342,002f, 29,72775f, 4369,334f), Vector(0.0f, -179,5463f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_326, "cover_villa_44", Vector(-4338,623f, 39,22027f, 4353,278f), Vector(0.0f, 451,9379f, 0.0f), 4);
}

var ÅAµeEyÅ!hA·ÙáEu1Å0ÒA»IEq¬ÅANAÁJUEgÅQAÅ{«E\fÅk°AÊvRE=ÈÅÅAÐÄDE(nÅAÓªÄE.Å¨©A×gÌEÔÅÄAÝE3,ÇLFBX°LF¯omob_rallypath_2_3  p   ÅwA¯JEKõÅ¼ãA±îÛEk(ÅÝ®A²ÞEÅûA±¨±EÅkA³e:E²Å'eAµÏsE>Å<þA¹èE(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x378BB / 227515
{
	var uVar16771;
	
	return -Vector(4, 4294967295, StackVal);
}

vector3 E.Åã A@*E3eÅAïA0HEGÅ³Au=ELÅÿA²EQuÅ~AE,	Å& A§EíiÅÙÛA¨EÂíÅ±2A ÖExÓÅ|ÚAÍ·E:;ÅEQAÍKE8ÅùZA9EËÅá\AzEÅ­PAÀ?E½ÞÅAÅ?E>#ÅìA(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x381DF / 229855
{
	float fVar31;
	int iVar61;
	var uVar16576;
	var uVar16898;
	
	return StackVal, StackVal, 2.0f;
	return (StackVal + StackVal);
	(*StackVal)[StackVal13121] = StackVal;
	return;
	PatchTrap4();
	PatchTrapC();
	straddi(&Global_16779, &Global_17799, 69);
	return 3.0f;
	return;
	Unknown_Function();
	return StackVal, ((StackVal && StackVal) + 31396);
	PatchTrap3();
	PatchTrap7();
	return (StackVal + CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES(Vector(StackVal, StackVal, StackVal) - Vector(StackVal, StackVal, StackVal), 10455)[StackVal50558]);
}

struct<8> E!ØÅ.B(DE ñÅ*õB(DEâÅ/®B((var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x38E5F / 233055
{
	int iVar104;
	bool bVar176;
	int iVar2557;
	int iVar6913;
	
	((StackVal % StackVal))->f_17799 = StackVal;
	return Vector(StackVal, StackVal, StackVal) + Vector(StackVal, StackVal, StackVal), 3;
}

void Function_812(int iParam0, int iParam1) //Position: 0x39631 / 235057
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

bool Function_813() //Position: 0x3967B / 235131
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_828(0))
		{
			return 0;
		}
		if (!Function_785())
		{
			return 0;
		}
		if (!Function_388(&iLocal_1604))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1579))
		{
			bLocal_1579 = Function_821(7, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_1581))
		{
			bLocal_1581 = Function_815(1, 0, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_814("MINI_GAMES_AND_JOBS\\REBEL05"))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_814(bool bParam0) //Position: 0x39708 / 235272
{
	if (REQUEST_MISSION_AUDIO_BANK(&bParam0))
	{
		return 1;
	}
	return 0;
}

var Function_815(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x3971A / 235290
{
	bool bVar0;
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
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_820(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_819())
		{
			return "";
		}
	}
	if (!Function_817())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_190();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_291(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_291(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_291(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_291(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_816(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_816(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
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
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
				if (!Function_74(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
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
		Function_673(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_816(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x39A77 / 236151
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

bool Function_817() //Position: 0x39B17 / 236311
{
	if (Function_818() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_818() //Position: 0x39B2D / 236333
{
	return Global_21369.f_244;
}

bool Function_819() //Position: 0x39B38 / 236344
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_820(var uParam0, bool bParam1, bool bParam2) //Position: 0x39B58 / 236376
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

var Function_821(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x39B87 / 236423
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	uParam2 = &uParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_163(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_336(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_827(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_823(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_822(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, false);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_601(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_822(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x3A0C7 / 237767
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_823(bool bParam0, int iParam1) //Position: 0x3A128 / 237864
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_439(bParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == bParam0)
					{
						Function_824(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_824(var uParam0, int iParam1) //Position: 0x3A1B6 / 238006
{
	Function_826(&uParam0);
	Function_825(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_825(int iParam0) //Position: 0x3A1E2 / 238050
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_826(int iParam0) //Position: 0x3A208 / 238088
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

var Function_827(int iParam0, var uParam1) //Position: 0x3A2DE / 238302
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

bool Function_828(bool bParam0) //Position: 0x3A384 / 238468
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_829() //Position: 0x3A3B4 / 238516
{
	Function_775(&iLocal_1604, "rebel05", 10, 0);
	Function_831();
	Function_775(&iLocal_1652, "stand_ambient", 5, 0);
	Function_775(&iLocal_1652, "custom/stand_ambient", 8, 0);
	Function_775(&iLocal_1652, "$/content/scripting/gringo/SimpleGringo/multistage_movebox", 1, 0);
	Function_775(&iLocal_1652, "tense_with_guns", 5, 0);
	Function_775(&iLocal_1652, "custom/tense_with_guns", 8, 0);
	if (Function_270(&Local_1550))
	{
		Function_784();
	}
	else
	{
		Function_830();
	}
	return;
}

void Function_830() //Position: 0x3A4A1 / 238753
{
	Function_233(&iLocal_1674);
	Function_359(&iLocal_1674, 518, 2, 0);
	Function_359(&iLocal_1674, 379, 2, 0);
	Function_359(&iLocal_1674, 382, 2, 0);
	Function_359(&iLocal_1674, 384, 2, 0);
	Function_359(&iLocal_1674, 385, 2, 0);
	Function_359(&iLocal_1674, 391, 2, 0);
	return;
}

void Function_831() //Position: 0x3A4F5 / 238837
{
	Function_233(&iLocal_1610);
	Function_775(&iLocal_1610, "stand_hostage", 5, 0);
	Function_775(&iLocal_1610, "custom/stand_hostage", 8, 0);
	Function_775(&iLocal_1610, "rifle_waving", 5, 0);
	Function_775(&iLocal_1610, "custom/rifle_waving", 8, 0);
	Function_775(&iLocal_1610, "dead_ground_male", 5, 0);
	Function_775(&iLocal_1610, "custom/dead_ground_male", 8, 0);
	Function_775(&iLocal_1610, "dead_ground_female", 5, 0);
	Function_775(&iLocal_1610, "custom/dead_ground_female", 8, 0);
	Function_775(&iLocal_1610, "crowd_cheer", 5, 0);
	Function_775(&iLocal_1610, "custom/crowd_cheer", 8, 0);
	return;
}

void Function_832(float fParam0, bool bParam1) //Position: 0x3A62D / 239149
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_838(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_270(&fParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(fParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_270(&fParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_204();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_261();
	Function_342();
	Function_841("");
	Function_837(0);
	Function_836();
	Function_196();
	Function_195();
	ENABLE_JOURNAL_REPLAY(0);
	Function_835();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_815(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_302(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_834(13);
	Function_834(14);
	Function_834(25);
	Function_834(24);
	Function_834(12);
	Function_834(27);
	Function_834(26);
	Function_834(15);
	Function_833();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_833() //Position: 0x3AA6D / 240237
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_834(int iParam0) //Position: 0x3AAF2 / 240370
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_835() //Position: 0x3AB12 / 240402
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_836() //Position: 0x3AB58 / 240472
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_837(int iParam0) //Position: 0x3AB6E / 240494
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_199())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_838(int iParam0, int iParam1) //Position: 0x3ABA7 / 240551
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
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
			Function_839(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_839(struct<113> Param0) //Position: 0x3AC2E / 240686
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

void Function_840() //Position: 0x3AC8C / 240780
{
	if (Function_540(&Global_54076, &Local_326 + 4168, 1,7f))
	{
		if (!FIRE_IS_ACTOR_ON_FIRE(&Global_54076))
		{
		}
	}
	return;
}

void Function_841(char* cParam0) //Position: 0x3ACB3 / 240819
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

bool Function_842(struct<25> Param0) //Position: 0x3AD1F / 240927
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_843(&Param0, 1);
			return 1;
		}
	}
	Function_843(&Param0, 0);
	return 0;
}

void Function_843(struct<25> Param0) //Position: 0x3ADAB / 241067
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_844(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x3ADD6 / 241110
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_843(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_862(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_861(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_861(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_848(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_843(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_847(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_846(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_847(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_845(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_841(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_846(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_843(&Param2, 0);
	return 0;
}

void Function_845(char* cParam0) //Position: 0x3B1EC / 242156
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_846(struct<25> Param0) //Position: 0x3B2E0 / 242400
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_847(bool bParam0) //Position: 0x3B358 / 242520
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_848(struct<57> Param0) //Position: 0x3B37C / 242556
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_859(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_852(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_859(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_849(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_859(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_849(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_849(int iParam0, bool bParam1) //Position: 0x3B4ED / 242925
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_851(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_850(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_851(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_850(256);
			}
		}
	}
	return bParam1;
}

bool Function_850(int iParam0) //Position: 0x3B629 / 243241
{
	return 2 | iParam0;
}

int Function_851(int iParam0) //Position: 0x3B633 / 243251
{
	return 4 | iParam0;
}

int Function_852(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x3B63D / 243261
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_858(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_850(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_853(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_850(16);
		}
	}
	return 0;
}

int Function_853(int iParam0, vector3 vParam1) //Position: 0x3B6F8 / 243448
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_857(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_856(iVar0, 3, 1, bParam3))
			{
				if (!Function_861(&iParam0, 8, 1))
				{
					return Function_855(64, 1024, bParam2);
				}
			}
			return Function_854(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_856(iVar0, 2, 1, bParam3))
			{
				if (!Function_861(&iParam0, 32, 1))
				{
					return Function_855(64, 1024, bParam2);
				}
			}
			return Function_854(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_856(iVar0, 1, 1, bParam3))
			{
				if (!Function_861(&iParam0, 64, 1))
				{
					return Function_855(64, 1024, bParam2);
				}
			}
			return Function_854(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_856(iVar0, 3, 1, bParam3))
			{
				if (!Function_861(&iParam0, 128, 1))
				{
					return Function_855(64, 1024, bParam2);
				}
			}
			return Function_854(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_856(iVar0, 1, 1, bParam3))
			{
				if (!Function_861(&iParam0, 1024, 1))
				{
					return Function_855(64, 1024, bParam2);
				}
			}
			return Function_854(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_856(iVar0, 1, 1, bParam3))
			{
				if (!Function_861(&iParam0, 1024, 1))
				{
					return Function_855(64, 1024, bParam2);
				}
			}
			return Function_854(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_854(int iParam0, int iParam1, bool bParam2) //Position: 0x3B8C0 / 243904
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_855(int iParam0, int iParam1, bool bParam2) //Position: 0x3B8D5 / 243925
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_856(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3B8EA / 243946
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_857(int iParam0) //Position: 0x3B907 / 243975
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_858(var uParam0, vector3 vParam1) //Position: 0x3B97A / 244090
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_857(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_856(iVar0, 3, 1, bParam2))
			{
				if (!Function_861(&uParam0, 8, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000009:
			if (Function_856(iVar0, 3, 1, bParam2))
			{
				if (!Function_861(&uParam0, 8, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x0000006E:
			if (Function_856(iVar0, 2, 1, bParam2))
			{
				if (!Function_861(&uParam0, 16, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x0000005B:
			if (Function_856(iVar0, 2, 1, bParam2))
			{
				if (!Function_861(&uParam0, 32, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000031:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&uParam0, 64, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000007:
			if (Function_856(iVar0, 3, 1, bParam2))
			{
				if (!Function_861(&uParam0, 128, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000008:
			if (Function_856(iVar0, 2, 1, bParam2))
			{
				if (!Function_861(&uParam0, 256, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000014:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&uParam0, 512, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000018:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&uParam0, 512, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000057:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&uParam0, 1024, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000058:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&uParam0, 1024, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_859(struct<65> Param0) //Position: 0x3BBA3 / 244643
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_858(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_861(&Param0, 2, 1))
					{
						return Function_851(8);
					}
					return Function_850(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_861(&Param0, 4, 1))
					{
						return Function_851(16);
					}
					return Function_850(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_853(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_861(&Param0, 2, 1))
						{
							return Function_851(128);
						}
						return Function_850(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_861(&Param0, 4, 1))
						{
							return Function_851(256);
						}
						return Function_850(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_853(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_861(&Param0, 2, 1))
					{
						return Function_851(8);
					}
					return Function_850(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_861(&Param0, 4, 1))
					{
						return Function_851(16);
					}
					return Function_850(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_860(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_861(&Param0, 2, 1))
					{
						return Function_851(8);
					}
					return Function_850(8);
				}
				if (!Function_861(&Param0, 4, 1))
				{
					return Function_851(16);
				}
				return Function_850(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_853(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_414(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_850(128);
							}
							if (!Function_861(&Param0, 2, 1))
							{
								return Function_851(8);
							}
							return Function_850(8);
						}
						if (iParam4 == 2)
						{
							if (Function_414(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_850(256);
							}
							if (!Function_861(&Param0, 4, 1))
							{
								return Function_851(16);
							}
							return Function_850(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int Function_860(int iParam0, vector3 vParam1) //Position: 0x3BE89 / 245385
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_857(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_856(iVar0, 2, 1, bParam2))
			{
				if (!Function_861(&iParam0, 16, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x0000005B:
			if (Function_856(iVar0, 2, 1, bParam2))
			{
				if (!Function_861(&iParam0, 32, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000057:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&iParam0, 1024, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		case 0x00000058:
			if (Function_856(iVar0, 1, 1, bParam2))
			{
				if (!Function_861(&iParam0, 1024, 1))
				{
					return Function_851(64);
				}
			}
			return Function_850(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_861(struct<69> Param0) //Position: 0x3BFAB / 245675
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_862(int iParam0) //Position: 0x3BFD5 / 245717
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_863(int iParam0) //Position: 0x3C00C / 245772
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076))
		{
			if (GET_ACTOR_FACTION(&iParam0) != 19)
			{
				SAY_SINGLE_LINE_CONTEXT(&iParam0, 53, &Global_54076, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
	}
	return;
}

var Function_864(bool bParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x3C046 / 245830
{
	float fVar0;
	
	if (Function_650(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		if (IS_PLAYER_WEAPON_ZOOMED(&Global_54076))
		{
			if (GET_CURRENT_GAME_TIME() <= uParam1)
			{
				fVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
				if (IS_ACTOR_VALID(&fVar0))
				{
					if (IS_ACTOR_VALID(&bParam0))
					{
						if ((bParam4 && (GET_CURRENT_GAME_TIME() - uParam1) <= 5,5f) || (!&bParam4 && (GET_CURRENT_GAME_TIME() - uParam1) <= 2,5f))
						{
							if (Function_323(&bParam0, &Global_54076, 50.0f))
							{
								if (!IS_ACTOR_ANIMAL(&fVar0))
								{
									if (!AI_IS_HOSTILE_OR_ENEMY(&fVar0, &Global_54076))
									{
										if (&bParam2)
										{
											ABORT_SCRIPTED_CONVERSATION(0);
										}
										uParam1 = (GET_CURRENT_GAME_TIME() + &fParam3);
										return &fVar0;
									}
								}
							}
						}
					}
					if (uParam1 <= 0.0f)
					{
						bParam0 = &fVar0;
						uParam1 = GET_CURRENT_GAME_TIME();
					}
				}
				else
				{
					bParam0 = "";
					uParam1 = 0.0f;
				}
			}
		}
	}
	return "";
}

bool Function_865(int iParam0) //Position: 0x3C128 / 246056
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_866(var uParam0) //Position: 0x3C146 / 246086
{
	var uVar0;
	
	uVar0 = FIRE_CREATE_HANDLE();
	FIRE_CREATE_ON_ACTOR(&uVar0, &uParam0);
	FIRE_RELEASE_HANDLE(&uVar0, 1);
	return;
}

void Function_867() //Position: 0x3C162 / 246114
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	var uVar8;
	
	switch (bLocal_1562)
	{
		case 0x00000007:
		case 0x00000008:
			uVar8 = &Local_326 + 4192;
			fVar6 = 5.0f;
			break;
		
		case 0x00000065:
			uVar8 = &Local_326 + 4192;
			fVar6 = 5.0f;
			break;
		
		default:
			uVar8 = &uLocal_1961;
			fVar6 = 1.0f;
			break;
	}
	GET_POSITION(&Global_54076, &Var2);
	GET_OBJECT_POSITION(&uVar8, &Var0);
	fVar7 = (VDIST(Var2, Var0) * (1.0f - (fVar6 / 100.0f)));
	Function_475(StackVal, StackVal, Var2, Var0, fVar7);
	Var4 = Function_475(StackVal, StackVal, Var2, Var0, fVar7);
	SET_OBJECT_POSITION(&uLocal_1959, Var4);
	return;
}

void Function_868(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x3C1F5 / 246261
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_869(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x3C222 / 246306
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_870(StackVal, Param4, uParam3, &iParam6);
		Function_251(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_870(struct<2> Param0, var uParam2, var uParam3) //Position: 0x3C263 / 246371
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_872(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_871(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_871(int iParam0) //Position: 0x3C2E5 / 246501
{
	if (!Function_85(iParam0))
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

var Function_872(struct<2> Param0, bool bParam2) //Position: 0x3C793 / 247699
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_873(int iParam0) //Position: 0x3C7FF / 247807
{
	Function_290(iParam0 + 1);
	return StackVal, Function_290(iParam0 + 1);
}

int Function_874(int iParam0) //Position: 0x3C80C / 247820
{
	return Function_289(iParam0 + 1);
}

