//Decompiled with MagicRDR v1.0
//Function Count : 594
//Statics Count : 1319
//Natives Count : 476
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
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	float fLocal_70 = 0.0f;
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
	var uLocal_115 = 4;
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
	var uLocal_155 = 4;
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
	var uLocal_177 = -1;
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
	var uLocal_198 = 27;
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
	float fLocal_267 = 0.0f;
	float fLocal_268 = 0.0f;
	float fLocal_269 = 0.0f;
	int iLocal_270 = 0;
	vector3 vLocal_271 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_274 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_277 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_280 = false;
	int iLocal_281 = 0;
	struct<917> Local_282 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_1211 = 16;
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
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar2;
	bool bVar3;
	
	iLocal_10 = 0;
	iLocal_12 = 0;
	iLocal_68 = 16;
	iLocal_69 = 0;
	fLocal_70 = 1.0f;
	fLocal_267 = 300.0f;
	fLocal_268 = 10.0f;
	fLocal_269 = 10.0f;
	iLocal_270 = 3;
	vLocal_271 = { 0.3411765f, 0.5764706f, 0.7372549f };
	vLocal_274 = { 0.5647059f, 0.0f, 0.0f };
	vLocal_277 = { 0.0f, 0.0f, 0.0f };
	bLocal_625 = true;
	iLocal_1312 = 1;
	iLocal_1313 = 2;
	iLocal_1314 = 8;
	iLocal_1315 = 1.0f;
	iLocal_1316 = 1.0f;
	iLocal_1317 = 0.75f;
	iLocal_1318 = 0.5f;
	Function_532();
	Function_531("TDM_team_fmt", 1);
	Function_530();
	iVar0 = NET_GET_PLAYMODE();
	while ((!IS_EXITFLAG_SET() && !iLocal_281) && NET_IS_IN_SESSION())
	{
		switch (Local_282.f_196)
		{
			case 0x00000000:
				if (Function_528(68173) && UNK_0xA80C6DE6(&Local_518))
				{
					NET_LOG(1, "AD Data", "DATA SUNK. MOVING ON.", 0, 0, 0, 0);
					Local_282.f_196 = 2;
				}
				else if (Function_527())
				{
					NET_LOG(1, "AD Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_281 = 1;
				}
				break;
			
			case 0x00000002:
				if (Function_521(&Local_282 + 748))
				{
					NET_LOG(1, "AD Data", "STUFF STREAMED. MOVING ON.", 0, 0, 0, 0);
					Local_282.f_196 = 1;
				}
				else if (Function_527())
				{
					NET_LOG(1, "AD Data", "BAILING ON STREAM: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_281 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_462())
				{
					NET_LOG(1, "AD Data", "DATA SUNK AND INITED. MOVING ON.", 0, 0, 0, 0);
					Local_282.f_196 = 3;
				}
				else if (Function_527())
				{
					NET_LOG(1, "AD Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_281 = 1;
				}
				break;
			
			case 0x00000003:
				if (!Function_154())
				{
					NET_LOG(1, "GameType State", "UPDATE_GAMETYPE_ATKDEF_BASIC returned false, transitioning to GAMETYPE_QUIT state.", 0, 0, 0, 0);
					iLocal_281 = 1;
				}
				break;
		}
		WAIT(0);
	}
	Function_152();
	if (iVar0 != 1 || iVar0 != 3)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = Function_148();
	}
	bVar3 = false;
	if (NET_IS_IN_SESSION())
	{
		if (Function_527())
		{
			if (iVar2 >= 0)
			{
			}
			Function_146();
			Function_94(iVar2, Function_140(), 1, 1, 0);
		}
		else
		{
			if (iVar2 >= 0)
			{
			}
			bVar3 = true;
		}
	}
	else
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		Function_51(iVar2);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x346 / 838
{
	DYNAMICMIXER_DETRIGGERSTATE(Local_282.f_912, 1);
	UNK_0x4897DD37(0);
	Function_49(Function_50());
	Function_27(&Local_282 + 200);
	if (Function_24())
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	UI_EXIT("MPSplash");
	Function_22(&Local_282 + 712);
	UNREGISTER_SCRIPT_WITH_AUDIO();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_12();
	Function_8(&Local_282 + 748);
	if (IS_ACTOR_VALID(Function_7()))
	{
		DESTROY_ACTOR(Function_7());
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_6();
	Function_5();
	Function_2(1);
	return;
}

void Function_2(bool bParam0) //Position: 0x3BB / 955
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	float fVar11;
	int iVar12;
	
	uVar0 = Function_50();
	if (!IS_LAYOUTREF_VALID(uVar0))
	{
		return;
	}
	iVar12 = 1;
	if (bParam0)
	{
		iVar12 = 2;
	}
	iVar1 = 0;
	while (iVar1 <= iVar12)
	{
		iVar2 = 1;
		while (iVar2 < Local_282.f_640)
		{
			if ((*&Local_518 + 68[iVar17])[iVar2] < 0.0f)
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_4("AD_T", I2STR(iVar1), I2STR(iVar2)) };
				fVar11 = ((*&Local_518 + 68[iVar17])[iVar2] - (*&Local_518 + 68[iVar17])[(iVar2 - 1)]);
				if (DECOR_SET_FLOAT(uVar0, &Var3, fVar11))
				{
				}
			}
			iVar2++;
		}
		Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("AD_L", I2STR(iVar1)) };
		if (!DECOR_SET_INT(uVar0, &Var3, (*&Local_518 + 128)[iVar1]))
		{
		}
		iVar1++;
	}
	return;
}

struct<32> Function_3(char* cParam0, char* cParam1) //Position: 0x486 / 1158
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_4(char* cParam0, char* cParam1, char* cParam2) //Position: 0x49F / 1183
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_5() //Position: 0x4BE / 1214
{
	UNK_0x4897DD37(0);
	Local_282.f_896 = 0;
	if (IS_OBJECT_VALID(Local_282.f_652))
	{
		DESTROY_OBJECT(Local_282.f_652);
	}
	if (Local_282.f_888 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(Local_282.f_888);
		Local_282.f_888 = 0;
	}
	return;
}

void Function_6() //Position: 0x4FE / 1278
{
	if (IS_SOUND_ID_VALID(Local_282.f_852) && Local_282.f_852 == 4294967295)
	{
		STOP_SOUND(Local_282.f_852);
		RELEASE_SOUND_ID(Local_282.f_852);
		Local_282.f_852 = 4294967295;
	}
	return;
}

int Function_7() //Position: 0x532 / 1330
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_8(int iParam0) //Position: 0x547 / 1351
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_9(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x56D / 1389
{
	if (Function_11(uParam0[iParam13], 4))
	{
		if (Function_11(uParam0[iParam13], 1))
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
			Function_10(uParam0[iParam13], 1);
			Function_10(uParam0[iParam13], 2);
			Function_10(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x69B / 1691
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(int iParam0, int iParam1) //Position: 0x6B5 / 1717
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12() //Position: 0x6D2 / 1746
{
	struct<17> Var0;
	
	Function_14();
	Var0.f_4 = 0;
	Var0 = false;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_13(&Var0);
	return;
}

void Function_13(bool bParam0) //Position: 0x6F4 / 1780
{
	*(&Local_282 + 684) = { StackVal, StackVal, StackVal, StackVal, *bParam0 };
	return;
}

void Function_14() //Position: 0x706 / 1798
{
	Function_15();
	return;
}

void Function_15() //Position: 0x70F / 1807
{
	Function_16(4294967286);
	return;
}

void Function_16(int iParam0) //Position: 0x71B / 1819
{
	var uVar0;
	struct<9> Var1;
	
	if (iParam0 != 4294967286)
	{
		Function_21(&uVar0);
		Function_20(&vVar1);
		vVar1.z = uVar0;
		Function_13(&vVar1);
	}
	Function_19(&uVar0, iParam0);
	Function_18(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_17(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0x758 / 1880
{
	Local_556[iParam14].f_8 = *uParam0;
	return;
}

void Function_18(int iParam0) //Position: 0x76A / 1898
{
	Local_621.f_8 = *iParam0;
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0x778 / 1912
{
	*uParam0 = iParam1;
	return;
}

void Function_20(int iParam0) //Position: 0x783 / 1923
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, *(&Local_282 + 684) };
	return;
}

void Function_21(int iParam0) //Position: 0x795 / 1941
{
	*iParam0 = StackVal;
	return;
}

void Function_22(int iParam0) //Position: 0x7A3 / 1955
{
	Function_23(iParam0, 0);
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x7AF / 1967
{
	if (StackVal)
	{
		uParam0->f_4 = 0;
		UI_HIDE("nAD_Scores");
		UI_HIDE("AD_ScoresProxy");
		UI_HIDE("NetTimer");
		*uParam0 = iParam1;
		uParam0->f_8 = 0;
	}
	return;
}

bool Function_24() //Position: 0x7FC / 2044
{
	return IS_OBJECT_VALID(Function_25());
}

int Function_25() //Position: 0x808 / 2056
{
	return Function_26(0);
}

int Function_26(int iParam0) //Position: 0x812 / 2066
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_27(int iParam0) //Position: 0x832 / 2098
{
	int iVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_46();
	iVar0 = Function_7();
	if (IS_ACTOR_VALID(iVar0))
	{
		DECOR_REMOVE(iVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_188))
	{
		DESTROY_OBJECT(iParam0->f_188);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	Function_43(!Function_44(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_42(81920, 0);
	Function_42(8388608, 0);
	Function_28(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_28(bool bParam0) //Position: 0x8E4 / 2276
{
	Function_38(bParam0);
	Function_32(bParam0, 0);
	Function_29(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
	}
	if (IS_SCRIPT_VALID(bParam0->f_84))
	{
		TERMINATE_SCRIPT(bParam0->f_84);
	}
	return;
}

void Function_29(int iParam0, bool bParam1, int iParam2) //Position: 0x91E / 2334
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_31(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_30(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_30(bool bParam0, int iParam1) //Position: 0x946 / 2374
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_31(bool bParam0, int iParam1) //Position: 0x959 / 2393
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

void Function_32(bool bParam0, bool bParam1) //Position: 0x968 / 2408
{
	var uVar0;
	
	if (IS_OBJECT_VALID(bParam0->f_120))
	{
		if (IS_CUTSCENEOBJECT_PAUSED(bParam0->f_120) && bParam1)
		{
			if (bParam1)
			{
				uVar0 = Function_34(StackVal, StackVal, Function_37(), *(bParam0 + 72), !HUD_IS_FADED());
			}
			if (IS_OBJECT_VALID(bParam0->f_120))
			{
				DESTROY_OBJECT(bParam0->f_120);
			}
			if (bParam1)
			{
				bParam0->f_120 = uVar0;
			}
		}
	}
	else if (bParam1)
	{
		bParam0->f_120 = Function_34(StackVal, StackVal, Function_37(), *(bParam0 + 72), !HUD_IS_FADED());
	}
	if (!bParam1 && IS_OBJECT_VALID(bParam0->f_120))
	{
		DESTROY_OBJECT(bParam0->f_120);
	}
	if (IS_OBJECT_VALID(bParam0->f_156))
	{
		RELEASE_OBJECT_REF(bParam0->f_156);
	}
	if (IS_VOLUME_VALID(bParam0->f_424))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
		DESTROY_VOLUME(bParam0->f_424);
	}
	if (IS_OBJECT_VALID(bParam0->f_112))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bParam0->f_112);
	}
	if (Function_33(bParam0->f_48, 2))
	{
		Function_30(bParam0 + 48, 2);
	}
	Function_31(bParam0 + 48, 1);
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0xA41 / 2625
{
	return (uParam0 && iParam1) == 0;
}

var Function_34(var uParam0, vector3 vParam1, bool bParam4) //Position: 0xA4E / 2638
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	uVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_36(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_36(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(uVar2, 0);
		Function_35(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(uVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(uVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_36(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_36(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(uVar2, (iVar3 + iVar1));
		Function_36(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_36(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_35(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar8, vVar11);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(uVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(uVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(uVar2, 0, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return uVar2;
}

void Function_35(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0xB87 / 2951
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *uParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
}

vector3 Function_36(var uParam0, float fParam1) //Position: 0xBDC / 3036
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, fParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_37() //Position: 0xBF6 / 3062
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_38(int iParam0) //Position: 0xC25 / 3109
{
	Function_41(iParam0);
	Function_39(1048576);
	return;
}

void Function_39(int iParam0) //Position: 0xC37 / 3127
{
	Function_40(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0xC70 / 3184
{
	Function_30(uParam0, iParam1);
	return;
}

void Function_41(int iParam0) //Position: 0xC7D / 3197
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_42(int iParam0, bool bParam1) //Position: 0xC94 / 3220
{
	if (bParam1)
	{
		Function_31(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_30(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_43(bool bParam0) //Position: 0xCCF / 3279
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

bool Function_44(bool bParam0) //Position: 0xD56 / 3414
{
	return Function_45(Global_79336, bParam0);
}

bool Function_45(var uParam0, bool bParam1) //Position: 0xD65 / 3429
{
	return (uParam0 && bParam1) == 0;
}

void Function_46() //Position: 0xD72 / 3442
{
	if (Function_48(8))
	{
		Function_47();
	}
	Function_29(8, 0, 1);
	return;
}

void Function_47() //Position: 0xD8A / 3466
{
	Function_29(32768, 1, 0);
	return;
}

bool Function_48(int iParam0) //Position: 0xD99 / 3481
{
	return Function_33(Global_76905.f_132, iParam0);
}

void Function_49(var uParam0) //Position: 0xDAA / 3498
{
	if (!IS_LAYOUTREF_VALID(uParam0))
	{
		return;
	}
	return;
}

var Function_50() //Position: 0xDBA / 3514
{
	return Global_83591.f_140;
}

void Function_51(int iParam0) //Position: 0xDC6 / 3526
{
	int iVar0;
	int iVar1[67];
	int iVar69;
	
	Function_87();
	Function_86();
	UI_EXIT("XpHud");
	if (iParam0 >= 0)
	{
		iVar0 = 4294967295;
		if (NET_IS_IN_SESSION())
		{
			iVar0 = GET_LOCAL_SLOT();
		}
		NET_START_LB_UPDATE(0);
		iVar1[6] = 1;
		NET_UPDATE_LEADERBOARD(iVar0, iParam0, 4294967295, &iVar1);
		NET_UPDATE_LEADERBOARD(iVar0, 3, 4294967295, &iVar1);
		NET_END_LB_UPDATE();
		Global_84364.f_776 = 4294967295;
		Function_53(0);
		if (NET_IS_IN_SESSION())
		{
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar69 = UNK_0xA684E813();
				if (iVar69 >= 4294967295)
				{
					Function_52(&Global_76943[iVar6996] + 220, &iVar1, 1);
					NET_REPORT_FRIEND_SCORES(iVar69, iParam0, &iVar1);
				}
			}
		}
	}
	return;
}

void Function_52(var uParam0, int iParam1, bool bParam2) //Position: 0xE58 / 3672
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

void Function_53(bool bParam0) //Position: 0xE9D / 3741
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_84(2);
	if (bParam0)
	{
		Function_84(1);
	}
	else
	{
		Function_83(1);
	}
	Function_54();
	return;
}

void Function_54() //Position: 0xF26 / 3878
{
	Function_81();
	Function_80();
	Function_80();
	Function_79();
	Function_79();
	Function_78();
	Function_78();
	Function_62(0);
	Function_62(0);
	if (!Function_61())
	{
		Function_59();
		Function_58();
		Function_57();
		Function_56();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_55();
	return;
}

void Function_55() //Position: 0xF78 / 3960
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

void Function_56() //Position: 0x107E / 4222
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

void Function_57() //Position: 0x10B1 / 4273
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

void Function_58() //Position: 0x123F / 4671
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

void Function_59() //Position: 0x13F3 / 5107
{
	Function_60(&Global_28260, 1, 0);
	return;
}

void Function_60(int iParam0, bool bParam1, var uParam2) //Position: 0x1401 / 5121
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_7();
	if (IS_ACTOR_VALID(uVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(iVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(iVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(iVar0, iVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(iVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, iVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], iVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(iVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, iVar0);
				iVar2++;
			}
		}
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(iVar0, iVar3, 0);
			iVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(iVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(iVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, iVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], iVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(iVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(iVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(iVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(iVar0, iVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

bool Function_61() //Position: 0x15F2 / 5618
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_62(int iParam0) //Position: 0x15FB / 5627
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
					iVar2 = ((Function_77((50 + iVar4)) + Function_77((183 + iVar4))) + Function_77((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			iVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_63(182, iVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar5, 8);
	return StackVal, cVar0;
}

int Function_63(int iParam0, int iParam1, bool bParam2) //Position: 0x16A1 / 5793
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
	if (Global_34581[iParam0] > TO_FLOAT(iParam1))
	{
		Function_76(iParam0, TO_FLOAT(iParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(iParam1);
	Function_75(iParam0);
	if (bParam2)
	{
		Function_64(iParam0, 1, TO_FLOAT(iParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_64(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x193C / 6460
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	var uVar17;
	var uVar18;
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((fParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((fParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_74(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_73(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_73(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_71(iParam0, fVar19, fVar20, &uVar17, &uVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, uVar17, uVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_68(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(iParam7), &Global_35278[iParam020] + 16, Function_66(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_65(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_65() //Position: 0x1F69 / 8041
{
	int iVar0;
	
	return iVar0;
}

var Function_66(int iParam0) //Position: 0x1F71 / 8049
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_67(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F82 / 8066
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_68(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2077 / 8311
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_70(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_69(Function_70(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_69(int iParam0, int iParam1) //Position: 0x20DC / 8412
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_70(int iParam0, int iParam1) //Position: 0x20EE / 8430
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_71(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2100 / 8448
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
	if (((Function_72(iParam0) != 19 || Function_72(iParam0) != 17) || Function_72(iParam0) != 10) || Function_72(iParam0) != 9)
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

int Function_72(int iParam0) //Position: 0x2230 / 8752
{
	return Global_35278[iParam020].f_48;
}

float Function_73(int iParam0) //Position: 0x223F / 8767
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_74(int iParam0) //Position: 0x2278 / 8824
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_75(int iParam0) //Position: 0x22B5 / 8885
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

int Function_76(int iParam0, float fParam1, bool bParam2) //Position: 0x244F / 9295
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

int Function_77(int iParam0) //Position: 0x2693 / 9875
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_78() //Position: 0x26D4 / 9940
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
		iVar2 = ((Function_77((50 + iVar3) + 15) + Function_77((183 + iVar3) + 15)) + Function_77((90 + iVar3) + 15));
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
	Function_63(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_79() //Position: 0x275D / 10077
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
			iVar2 = ((Function_77((50 + iVar3) + 8) + Function_77((183 + iVar3) + 8)) + Function_77((90 + iVar3) + 8));
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
	Function_63(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_80() //Position: 0x27F4 / 10228
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_77((50 + iVar3)) + Function_77((183 + iVar3))) + Function_77((90 + iVar3)));
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
	Function_63(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_81() //Position: 0x2873 / 10355
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_82(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_63(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_82(int iParam0, float fParam1, int iParam2) //Position: 0x28AC / 10412
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_76(iParam0, fParam1, 1);
	Function_75(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_64(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_83(int iParam0) //Position: 0x2AB6 / 10934
{
	Function_40(&Global_79338, iParam0);
	return;
}

void Function_84(int iParam0) //Position: 0x2AC5 / 10949
{
	Function_85(&Global_79338, iParam0);
	return;
}

void Function_85(var uParam0, int iParam1) //Position: 0x2AD4 / 10964
{
	Function_31(uParam0, iParam1);
	return;
}

void Function_86() //Position: 0x2AE1 / 10977
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

void Function_87() //Position: 0x2B0B / 11019
{
	if (Global_83864.f_1264 > 6)
	{
		Function_88(&(Global_50170[522]));
		Function_88(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_88(&(Global_50170[722]));
		Function_88(&(Global_50170[822]));
		Function_88(&(Global_50170[922]));
		Function_88(&(Global_50170[1022]));
		Function_88(&(Global_50170[1122]));
	}
	return;
}

void Function_88(bool bParam0) //Position: 0x2B6B / 11115
{
	Global_56092[*bParam0] = 0;
	Function_89(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_89(int iParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2B85 / 11141
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_93(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_92(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (iParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(iParam3));
		}
		if (iParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(iParam4));
		}
		if (iParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(iParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_93(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_91(iParam0, 4))
	{
		Function_90(Function_93(iParam0), 0);
	}
}

void Function_90(var uParam0, int iParam1) //Position: 0x2C3C / 11324
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

bool Function_91(int iParam0, int iParam1) //Position: 0x2C61 / 11361
{
	return Function_33(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_92(int iParam0) //Position: 0x2C75 / 11381
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_93(int iParam0) //Position: 0x2CA9 / 11433
{
	return Global_50170[iParam022].f_24;
}

void Function_94(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2CB8 / 11448
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_139(5, 1);
	Function_39(4096);
	switch (Function_138())
	{
		case 0x00000011:
		case 0x00000002:
			Function_98(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_87();
	Function_86();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_52(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, uParam1, &uVar0);
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
				Function_95(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_52(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_53(bParam2);
}

void Function_95(int iParam0) //Position: 0x2DD4 / 11732
{
	int iVar0[67];
	int iVar68[67];
	
	Function_31(&Global_79338, 32);
	iVar0[13] = FLOOR(Function_97(8));
	iVar0[0] = FLOOR(Function_97(8));
	if (Function_97(8) < 0.0f)
	{
		if (Function_96())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &iVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &iVar0);
		}
	}
	if (Function_97(7) < 0.0f)
	{
		iVar68[13] = FLOOR(Function_97(7));
		iVar68[0] = iVar68[13];
		if (Function_96())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &iVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &iVar68);
		}
	}
	return;
}

bool Function_96() //Position: 0x2E7B / 11899
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_97(int iParam0) //Position: 0x2E86 / 11910
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_98(var uParam0, var uParam1, int iParam2) //Position: 0x2E96 / 11926
{
	int iVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_137(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				iVar0 = Global_50170[1722].f_28;
				if (iVar0 > 1)
				{
					Function_130(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, iVar0, 5, 100, Function_136(), 3031);
					*iParam2 = 0.0f;
					iVar0 = 0;
				}
				else if (iVar0 >= 4294967295)
				{
					Function_129(iParam2, iVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_89(17, *iParam2, 1, iVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_137(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				iVar0 = Global_50170[1722].f_28;
				if (iVar0 > 5)
				{
					Function_130(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, iVar0, 50, 150, Function_136(), 3032);
					*iParam2 = 0.0f;
					iVar0 = 0;
				}
				else if (iVar0 >= 4294967295)
				{
					Function_129(iParam2, iVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_89(17, *iParam2, 1, iVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_137(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				iVar0 = Global_50170[1722].f_28;
				if (iVar0 > 50)
				{
					Function_99(17, 150, Function_136(), 3033);
				}
				else if (iVar0 >= 4294967295)
				{
					Function_129(iParam2, iVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_89(17, *iParam2, 1, iVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_99(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x303F / 12351
{
	Function_127(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_93(iParam0), 1.0f, 0, 0);
	Function_123(iParam0, 0);
	if (!IS_STRING_VALID(iParam2))
	{
		iParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_120(iParam3);
	}
	Function_115(&Global_50170[iParam022] + 16, iParam1, iParam2);
	Function_100();
}

void Function_100() //Position: 0x30A5 / 12453
{
	if (!Function_61())
	{
		if (!Function_114(1, 3, 1, 1))
		{
			Function_102(1);
			Function_101(1, 8);
		}
	}
	else
	{
		Function_53(0);
	}
	return;
}

void Function_101(var uParam0, int iParam1) //Position: 0x30CE / 12494
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_61())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_102(bool bParam0) //Position: 0x3110 / 12560
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_103();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_54();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_30(&Global_63095, 1);
		Function_30(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_103() //Position: 0x3161 / 12641
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_113())
	{
		Function_110(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_110(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_105(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_105(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_104(StackVal, StackVal, vVar0))
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

bool Function_104(vector3 vParam0) //Position: 0x321C / 12828
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_105(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3234 / 12852
{
	int iVar0;
	
	iVar0 = Function_108(uParam2, uParam3);
	if (Function_107(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_31(&Global_63095, 1);
			Function_30(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_31(&Global_63095, 2);
			Function_30(&Global_63095, 1);
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
		Function_31(&Global_63095, 2);
		Function_30(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_106();
	return StackVal, StackVal, Function_106();
}

vector3 Function_106() //Position: 0x331B / 13083
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_107(int iParam0) //Position: 0x3324 / 13092
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_108(bool bParam0, bool bParam1) //Position: 0x333A / 13114
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
				fVar2 = Function_109(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_109(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_107(bVar0) && !bParam1)
	{
		bVar0 = Function_108(bParam0, 1);
	}
	return bVar0;
}

float Function_109(vector3 vParam0, vector3 vParam3) //Position: 0x3401 / 13313
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_110(var uParam0, int iParam1) //Position: 0x341E / 13342
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_112(Global_34573, &vVar4);
	if (!Function_111(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_111(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_31(&Global_63095, 2);
	Function_30(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_104(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_111(int iParam0) //Position: 0x3C43 / 15427
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_33(uVar0, 0x1000000) || Function_33(uVar0, 0x2000000)) || Function_33(uVar0, 0x4000000)) || !Function_33(uVar0, 0x10000000));
}

void Function_112(int iParam0, var uParam1) //Position: 0x3C7E / 15486
{
	GET_POSITION(iParam0, uParam1);
	return;
}

bool Function_113() //Position: 0x3C8B / 15499
{
	if (Function_33(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_114(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3CA6 / 15526
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

void Function_115(int iParam0, int iParam1, int iParam2) //Position: 0x3D4A / 15690
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	uVar0 = Function_37();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(uVar0, Function_119(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_118(iVar2) };
	DECOR_SET_INT(iVar0, &Var3, STRING_TO_HASH(uParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_117(iVar2) };
	DECOR_SET_INT(iVar0, &Var3, STRING_TO_HASH(iParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_116(iVar2) };
	DECOR_SET_INT(iVar0, &Var3, iParam1);
	DECOR_SET_INT(iVar0, Function_119(), iVar1 + 1);
	return;
}

struct<16> Function_116(int iParam0) //Position: 0x3DBC / 15804
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_117(int iParam0) //Position: 0x3DDD / 15837
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_118(int iParam0) //Position: 0x3DFE / 15870
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_119() //Position: 0x3E1F / 15903
{
	return "CQueue_Count";
}

void Function_120(int iParam0) //Position: 0x3E34 / 15924
{
	Function_121(iParam0, 1);
	return;
}

void Function_121(int iParam0, bool bParam1) //Position: 0x3E40 / 15936
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_31(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_122((iVar0 % 32)));
	}
	else
	{
		Function_30(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_122((iVar0 % 32)));
	}
	return;
}

int Function_122(int iParam0) //Position: 0x3E96 / 16022
{
	return SHIFT_LEFT(1, iParam0);
}

void Function_123(int iParam0, int iParam1) //Position: 0x3EA2 / 16034
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
		CLEAR_JOURNAL_ENTRY(Function_93(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_124(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_93(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_93(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_93(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_124(int iParam0) //Position: 0x3F24 / 16164
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_125(int iParam0) //Position: 0x3F44 / 16196
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_126(int iParam0) //Position: 0x3F75 / 16245
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

void Function_127(int iParam0, bool bParam1) //Position: 0x4177 / 16759
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	iVar0 = 0;
	bVar1 = Function_128();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (iVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(iParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(iVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(iParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(iVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[iParam022] + 36)[iVar0] = 0.0f;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(iParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(iVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			iVar0++;
		}
		while (iVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(iParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(iVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			iVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[iParam022].f_28 = 0;
	}
	return;
}

var Function_128() //Position: 0x42C3 / 17091
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(iVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_129(var uParam0, int iParam1, bool bParam2) //Position: 0x4310 / 17168
{
	*uParam0 = TO_FLOAT(iParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_130(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x4328 / 17192
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(iParam11))
	{
		iParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	Function_115(&Var0, iParam7, iParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_129(&uParam5, iParam8, iParam9);
	Function_89(iParam0, uParam5, bParam6, iParam8, 4294967295, 4294967295);
	Function_132(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_120(iParam12);
	}
	Function_131(iParam0, 4);
	Function_100();
}

void Function_131(int iParam0, int iParam1) //Position: 0x439E / 17310
{
	Function_30(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_132(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x43B2 / 17330
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
	CLEAR_JOURNAL_ENTRY(Function_93(iParam0));
	if ((bParam3 && Function_91(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_93(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iParam0) };
			UI_SET_STRING(&Var11, I2STR(iParam1));
			UI_SET_STRING(&Var17, I2STR(iParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_124(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_93(iParam0), &Var7, 0, 2, Function_91(iParam0, 4));
			if (!bParam3)
			{
				Function_133(iParam0, 4);
			}
		}
	}
}

void Function_133(int iParam0, int iParam1) //Position: 0x446F / 17519
{
	Function_31(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_134(int iParam0) //Position: 0x4483 / 17539
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_135(int iParam0) //Position: 0x44B1 / 17585
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_136() //Position: 0x44E1 / 17633
{
	return "MP_Unstoppable_Icon_128";
}

float Function_137(int iParam0) //Position: 0x4501 / 17665
{
	return Global_50170[iParam022].f_12;
}

int Function_138() //Position: 0x4510 / 17680
{
	return Global_79349.f_16;
}

void Function_139(int iParam0, int iParam1) //Position: 0x451C / 17692
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_140() //Position: 0x4541 / 17729
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_141(GET_LOCAL_SLOT(), 1, 0);
}

int Function_141(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4558 / 17752
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(iParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_145(bParam0))
			{
				if (!Function_142(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_142(int iParam0, int iParam1, bool bParam2) //Position: 0x459C / 17820
{
	char* cVar0[64];
	int iVar16;
	
	if (iParam0 == GET_LOCAL_SLOT())
	{
		return Function_144(iParam1, bParam2);
	}
	if (!Function_145(iParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_143(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(iParam0), 64);
	}
	iVar16 = (Global_76943[iParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_143(int iParam0) //Position: 0x461D / 17949
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

bool Function_144(int iParam0, bool bParam1) //Position: 0x4936 / 18742
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_145(int iParam0) //Position: 0x4956 / 18774
{
	char* cVar0[64];
	
	if (iParam0 > 0 || iParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(iParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[iParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[iParam02] = Global_78617.f_60;
		(&Global_78617 + 64[iParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, iParam0);
	}
	return StackVal;
}

void Function_146() //Position: 0x49F7 / 18935
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_147();
	return;
}

void Function_147() //Position: 0x4A2B / 18987
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

int Function_148() //Position: 0x4A3C / 19004
{
	if (Function_151())
	{
		return 81;
	}
	if (Function_150())
	{
		return 83;
	}
	if (Function_149())
	{
		return 82;
	}
	return 46;
}

bool Function_149() //Position: 0x4A65 / 19045
{
	return Function_33(Global_79962, 512);
}

bool Function_150() //Position: 0x4A75 / 19061
{
	return Function_33(Global_79962, 256);
}

bool Function_151() //Position: 0x4A85 / 19077
{
	return Function_33(Global_79962, 16384);
}

void Function_152() //Position: 0x4A95 / 19093
{
	if (bLocal_625)
	{
		Function_153();
		PRINTSTRING("Game End");
		PRINTNL();
	}
	return;
}

void Function_153() //Position: 0x4AB5 / 19125
{
	if (bLocal_625)
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

bool Function_154() //Position: 0x4B0C / 19212
{
	int iVar0;
	
	iVar0 = 1;
	Function_460(2);
	Function_459();
	if (NET_IS_SESSION_HOST())
	{
		Function_432();
	}
	iVar0 = (iVar0 && Function_155());
	return iVar0;
}

int Function_155() //Position: 0x4B30 / 19248
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	Function_425(&Global_78578 + 96, &Local_282 + 656, 0);
	Function_460(3);
	switch (Local_282.f_632)
	{
		case 0x00000001:
			if (!Function_24())
			{
				if (Function_424())
				{
					Function_423(1, 1);
				}
				else
				{
					Function_423(2, 1);
				}
				Function_421();
			}
			else if (Function_420())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_424())
					{
						Function_423(1, 0);
					}
					else
					{
						Function_423(2, 0);
					}
					Function_412(Function_424());
					Function_410(2);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_401(2, 1, 0x3f800000))
			{
				Function_399();
				Function_398(3, 4294967295);
				HUD_FADE_IN(0.4f, 1065353216);
				if (Function_424())
				{
					Function_391();
				}
				else
				{
					Function_384();
				}
				SET_HUD_MAP_DRAW_ENABLED(0);
				Function_410(3);
			}
			else if (Local_518 >= 10)
			{
				Function_410(5);
			}
			break;
		
		case 0x00000003:
			if (NET_IS_SESSION_HOST())
			{
				Function_31(&Local_518 + 52, 2);
			}
			if ((Function_383() && !IS_SCRIPTED_CONVERSATION_ONGOING()) || DECOR_CHECK_EXIST(Function_25(), "nFakedDone"))
			{
				if (Function_401(3, 1, 0x3f800000))
				{
					Function_410(5);
					HUD_FADE_OUT(0.4f, 1065353216, 1);
				}
				else if (Local_518 >= 10)
				{
					Function_410(5);
					HUD_FADE_OUT(0.4f, 1065353216, 1);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_377(3))
			{
				if (Function_401(3, 1, 0x3f800000))
				{
					Function_410(5);
					bVar0 = true;
				}
			}
			if (!bVar0 && Local_518 < 10)
			{
				Function_410(5);
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_375();
				Function_374();
				Function_372();
				Function_371(&Local_282 + 712);
				if (Function_140() == 0)
				{
					Function_410(11);
				}
				else
				{
					Function_410(12);
				}
			}
			break;
		
		case 0x0000000B:
			Function_365(1, !Function_527());
			if (Local_518 == 30)
			{
				Function_357();
				Function_410(21);
				if (Function_356(&Local_282 + 872))
				{
					Function_355(&Local_282 + 872);
				}
				Function_352(&Global_50170[25022] + 4, &Global_50170[25022] + 8, &Global_50170[25022] + 12, Function_354());
				Local_282.f_856 = Function_350();
			}
			else
			{
				if (!Function_356(&Local_282 + 872))
				{
					Function_348(&Local_282 + 872);
				}
				else
				{
					Local_282.f_864 = Function_346(&Local_282 + 872);
					Function_344(&Global_50170[24822] + 4, &Global_50170[24822] + 8, &Global_50170[24822] + 12, Local_282.f_864);
					Function_340(&Global_50170[25222] + 4, &Global_50170[25222] + 8, &Global_50170[25222] + 12, Local_282.f_864);
				}
				Local_282.f_884 = Local_518.f_60;
			}
			break;
		
		case 0x0000000C:
			Function_365(0, !Function_527());
			if (Local_518 == 30)
			{
				Function_339();
				Function_357();
				Function_410(21);
				Local_282.f_860 = Function_354();
			}
			else
			{
				Function_328(&Global_50170[25122] + 4, &Global_50170[25122] + 8, &Global_50170[25122] + 12, Function_350());
			}
			break;
		
		case 0x00000015:
			Function_365(Function_424(), 0);
			if ((GET_CURRENT_GAME_TIME() - Local_282.f_868) < 6.0f)
			{
				Function_398(3, 6);
				Function_410(22);
				Function_327();
				UI_POP("OL_NetworkingMenu");
			}
			break;
		
		case 0x00000016:
			if (HUD_IS_FADED())
			{
				if (!Function_24())
				{
					Function_326(&Local_282 + 200, 1);
					if (IS_ACTOR_VALID(Function_7()))
					{
						DESTROY_ACTOR(Function_7());
					}
					Function_2(0);
					Function_23(&Local_282 + 712, 0);
					CLEAR_ALL_CORPSES();
					REMOVE_ALL_PICKUPS();
					CLEAR_DECALS();
					CLEAR_CHARACTER_BLOOD();
					DESTROY_GC_OBJECTS(1, 1);
					RESET_PROPS_IN_WORLD();
					Function_325(64, 1);
					Function_421();
					Local_282.f_904 = 0;
					Local_282.f_900 = 0;
					Function_5();
					if (Function_140() == 1)
					{
						Function_423(1, 1);
						Function_316(1);
					}
					else
					{
						Function_423(2, 1);
						Function_316(0);
					}
					UI_EXIT("MPSplash");
					Function_315(1);
					Function_423(8, 1);
					Function_312();
				}
				else if (Function_420())
				{
					if (STREAMING_IS_WORLD_LOADED())
					{
						if (Function_424())
						{
							Function_423(1, 0);
						}
						else
						{
							Function_423(2, 0);
						}
						DYNAMICMIXER_DETRIGGERSTATE(Local_282.f_912, 1);
						Function_410(23);
					}
				}
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(1.0f, 1065353216, 1);
			}
			break;
		
		case 0x00000017:
			if (Function_401(23, 1, 0x3f800000))
			{
				HUD_FADE_IN(0.4f, 1065353216);
				Function_325(32, 1);
				Function_325(512, 0);
				Function_311();
				SET_HUD_MAP_DRAW_ENABLED(0);
				UI_ENTER("HudMPNoFun");
				Function_410(24);
			}
			else if (Function_377(25))
			{
				Function_410(24);
				Function_325(512, 1);
				HUD_FADE_IN(0.4f, 1065353216);
				SET_HUD_MAP_DRAW_ENABLED(0);
				UI_ENTER("HudMPNoFun");
			}
			else if (Local_518 >= 30)
			{
				Function_410(28);
			}
			break;
		
		case 0x00000018:
			if (Function_310(512))
			{
				Function_412(Function_424());
				Function_309();
				Function_410(25);
			}
			break;
		
		case 0x00000019:
			if (Function_401(25, 1, 0x3f800000))
			{
				Function_398(3, 4294967295);
				if (Function_424())
				{
					Function_391();
				}
				else
				{
					Function_384();
				}
				Function_325(32, 0);
				Function_399();
				Function_410(26);
			}
			else if (Local_518 >= 30)
			{
				Function_410(28);
			}
			break;
		
		case 0x0000001A:
			if (NET_IS_SESSION_HOST())
			{
				Function_31(&Local_518 + 52, 4);
			}
			if ((Function_383() && !IS_SCRIPTED_CONVERSATION_ONGOING()) || DECOR_CHECK_EXIST(Function_25(), "nFakedDone"))
			{
				if (Function_401(26, 1, 0x3f800000))
				{
					HUD_FADE_OUT(1.0f, 1065353216, 1);
					Function_410(28);
				}
				else if (Local_518 >= 30)
				{
					HUD_FADE_OUT(1.0f, 1065353216, 1);
					Function_410(28);
				}
			}
			break;
		
		case 0x0000001B:
			if (Function_377(26))
			{
				if (Function_401(26, 1, 0x3f800000))
				{
					Function_410(28);
				}
			}
			if (!bVar0 && Local_518 < 30)
			{
				Function_410(28);
			}
			break;
		
		case 0x0000001C:
			if (HUD_IS_FADED())
			{
				Function_375();
				Function_374();
				Function_39(2048);
				Function_371(&Local_282 + 712);
				SET_HUD_MAP_DRAW_ENABLED(1);
				Local_282.f_644 = 6;
				if (IS_ACTOR_VALID(Function_7()))
				{
					ACTOR_END_FORCE_HOLSTER(Function_7());
				}
				if (Function_140() == 1)
				{
					Function_410(31);
				}
				else
				{
					Function_410(32);
				}
			}
			break;
		
		case 0x0000001F:
			if (!Function_356(&Local_282 + 872))
			{
				Function_348(&Local_282 + 872);
			}
			else
			{
				Local_282.f_864 = Function_346(&Local_282 + 872);
				Function_344(&Global_50170[24822] + 4, &Global_50170[24822] + 8, &Global_50170[24822] + 12, Local_282.f_864);
				Function_340(&Global_50170[25222] + 4, &Global_50170[25222] + 8, &Global_50170[25222] + 12, Local_282.f_864);
			}
			Local_282.f_884 = Local_518.f_60;
			if (Local_518 >= 30)
			{
				Function_365(1, !Function_527());
			}
			break;
		
		case 0x00000020:
			if (Local_518 >= 30)
			{
				Function_365(0, !Function_527());
			}
			Function_328(&Global_50170[25122] + 4, &Global_50170[25122] + 8, &Global_50170[25122] + 12, (Function_350() - Local_282.f_856));
			break;
	}
	Function_296(&Local_282 + 712);
	if (Function_295(&Local_282 + 200))
	{
		if (Function_527())
		{
			if (StackVal != Local_282.f_644)
			{
				Function_286();
			}
			Function_5();
			SET_HUD_MAP_DRAW_ENABLED(0);
			UI_EXIT("WeaponAmmo");
			UI_EXCLUDE("WeaponAmmo");
			Function_285();
			if (Function_284())
			{
				Function_339();
			}
			Function_283(&Local_282 + 200);
			Function_398(3, 7);
		}
	}
	iVar1 = GET_LOCAL_SLOT();
	if (IS_SLOT_VALID(iVar1))
	{
		Local_556[bVar14] = { StackVal, StackVal, StackVal, Local_621 };
	}
	iVar2 = Function_156(&Local_282 + 200);
	if (iVar2 == 0)
	{
	}
	else if (iVar2 == 3)
	{
		return 0;
	}
	if (iVar2 == 2)
	{
		return 0;
	}
	return 1;
}

int Function_156(bool bParam0) //Position: 0x52A5 / 21157
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	int iVar15;
	
	iVar0 = Function_7();
	bVar1 = IS_ACTOR_VALID(iVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(iVar0);
	}
	else
	{
		bVar2 = false;
	}
	if (IS_SCRIPT_VALID(Global_78617.f_28))
	{
		bParam0->f_64 = 0.0f;
	}
	else
	{
		bParam0->f_64 = Function_282((bParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_281())
	{
		if (bVar1)
		{
			switch (Function_140())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(iVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(iVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(iVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(iVar0, bParam0->f_52);
	}
	if (Function_280(bParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_33(bParam0->f_44, 2) || Function_33(bParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					if (Function_279() && IS_PS3())
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, 0, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						bParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					*bParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
	}
	if (((Function_280(bParam0) && Function_278(4096)) && Function_277()) && !Function_44(32768))
	{
		if (*bParam0 < 1 && *bParam0 > 8)
		{
			if (bParam0->f_68 > 2.0f)
			{
				bParam0->f_68 = (bParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_33(bParam0->f_44, 2) || Function_33(bParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
				{
					bParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
					Function_276(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_275(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_104))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_104);
	}
	fVar8 = Function_274();
	if (bVar1)
	{
		bVar9 = Function_273(iVar0);
	}
	switch (*bParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				uVar5 = GET_LAST_ATTACKER(iVar0);
				if (IS_ACTOR_VALID(uVar5))
				{
					bParam0->f_112 = iVar5;
				}
			}
			bParam0->f_4 = Global_29006;
			if ((Function_271(8192) || Function_33(bParam0->f_48, 512)) && !Function_144(1, 1))
			{
				iVar6 = Function_270(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_33(bParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(iVar0))
						{
							if (iVar6 > 1)
							{
								Function_31(bParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(iVar0, 129);
								Function_268("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_267(2, NET_GET_NET_TIME());
								Function_264(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(iVar0, "NoRegen", 1);
								Function_42(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(iVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_97(2));
						if (!Function_144(65536, 1) && (DECOR_CHECK_EXIST(iVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_30(bParam0 + 48, 512);
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
								DECOR_SET_BOOL(bVar0, "Drowned", 1);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", 1);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_42(65536, 0);
					Function_30(bParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_42(8388608, 1);
					bParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_144(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - bParam0->f_428) <= 2.0f)
					{
						Function_42(8388608, 0);
					}
				}
			}
			if (Function_263(bParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_33(bParam0->f_44, 16))
					{
						Function_31(bParam0 + 48, 32);
						*bParam0 = 1;
					}
					else
					{
						Function_262(bParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_30(bParam0 + 48, 32);
					*bParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(bParam0->f_188))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0->f_188))
				{
					Function_261(bParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_29(32, 1, 1);
			bParam0->f_48 = 0;
			bParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(bParam0->f_168);
			Function_42(65536, 0);
			Function_42(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_33(bParam0->f_44, 8))
			{
				Function_260(0);
			}
			else if (bVar1)
			{
				bParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
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
			bParam0->f_56 = 4294967295;
			bParam0->f_68 = 0.0f;
			if (Function_259(bParam0 + 116, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							bParam0->f_112 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						bParam0->f_112 = "";
						break;
					
					default:
						break;
					}
			}
			Function_255(bParam0);
			*bParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_229(bParam0, bParam0->f_12 != 0);
			}
			Function_227(bParam0, 0);
			bParam0->f_64 = 0.0f;
			*bParam0 = 3;
			break;
		
		case 0x00000003:
			Function_227(bParam0, 1);
			if ((bParam0->f_12 >= 0 && bParam0->f_64 <= 4.0f) || (bParam0->f_12 < 0 && bParam0->f_64 <= 2.0f))
			{
				if (bParam0->f_12 < 0)
				{
					*bParam0 = 8;
				}
				else
				{
					*bParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			bParam0->f_64 = 0.0f;
			*bParam0 = 5;
		
		case 0x00000005:
			Function_227(bParam0, 1);
			if (bParam0->f_64 <= 2.0f)
			{
				if (Function_33(bParam0->f_44, 512))
				{
					*bParam0 = 8;
				}
				else if (bParam0->f_12 < 1)
				{
					*bParam0 = 8;
				}
				else
				{
					*bParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_227(bParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_226();
				Function_29(32, 0, 1);
				Function_43(1);
			}
			bParam0->f_64 = 0.0f;
			*bParam0 = 7;
			break;
		
		case 0x00000007:
			Function_227(bParam0, 1);
			if (bParam0->f_64 <= 4.0f)
			{
				bParam0->f_64 = 0.0f;
				*bParam0 = 8;
				Function_46();
			}
			break;
		
		case 0x00000008:
			if (Function_33(bParam0->f_44, 2))
			{
				if (Function_33(bParam0->f_44, 512))
				{
					if (!Function_33(bParam0->f_48, 4096))
					{
						if (Function_225(bParam0))
						{
							Function_32(bParam0, 1);
							Function_31(bParam0 + 48, 4096);
						}
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(bParam0->f_84))
					{
						if (!Function_144(16384, 1))
						{
							Function_32(bParam0, 0);
							Function_42(16384, 1);
							bParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(bParam0->f_84))
					{
						TERMINATE_SCRIPT(bParam0->f_84);
					}
					Function_227(bParam0, 1);
				}
			}
			else
			{
				Function_227(bParam0, 1);
				bParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_100);
				}
				*bParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_227(bParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
				if (bParam0->f_64 > 0.0f)
				{
					bParam0->f_64 = 0.0f;
				}
			}
			if (bParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				bParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_43(1);
				if (IS_SCRIPT_VALID(bParam0->f_84))
				{
					TERMINATE_SCRIPT(bParam0->f_84);
				}
				Function_223();
				Function_46();
				Function_29(32, 0, 1);
				bParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_37(), Function_65(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
				*bParam0 = 10;
				bParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (bParam0->f_108 == Global_76887 || bParam0->f_64 <= 5.0f)
			{
				if (bParam0->f_64 <= 5.0f)
				{
					bParam0->f_64 = 0.0f;
				}
				if (bParam0->f_108 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(bParam0->f_108, 4294967295);
				}
				bParam0->f_108 = Global_76887;
				STREAMING_REQUEST_ACTOR(bParam0->f_108, 1, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(bParam0->f_108, 4294967295))
			{
				*bParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(bParam0->f_176);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_33(bParam0->f_48, 8))
				{
					Call_Loc(bParam0->f_164);
					Function_31(bParam0 + 48, 8);
				}
				if (Function_218(StackVal, Function_33(bParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_205(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_33(bParam0->f_48, 32), 1))
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
				if (Function_33(bParam0->f_44, 1))
				{
					Function_30(bParam0 + 44, 1);
				}
				else
				{
					Function_38(bParam0);
					Function_32(bParam0, 0);
				}
				bVar0 = Function_7();
				Function_204(bVar0);
				if (Function_33(bParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(bParam0->f_188))
				{
					DESTROY_OBJECT(bParam0->f_188);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(bParam0->f_424))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(bParam0->f_424);
					DESTROY_VOLUME(bParam0->f_424);
				}
				bParam0->f_64 = 0.0f;
				*bParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_201(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*bParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && bParam0->f_64 > 60.0f)
			{
				if (bParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_200(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_33(bParam0->f_44, 8))
				{
					Function_199(bParam0 + 192, 0, 1, 1);
					Function_193(bParam0 + 192);
					Function_184(&bVar0, 0, 0, 0);
					Function_184(&bVar0, 0, 0, 0);
					Function_183(bVar0);
				}
				else
				{
					Function_199(bParam0 + 192, 1, 1, 1);
				}
				bParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(bParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(bParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(bParam0->f_188, 1);
				bParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_182(bVar0);
					vVar10 = { StackVal, StackVal, Function_182(bVar0) };
					bVar13 = Function_181(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_180(bVar13))
					{
						if (StackVal || Function_277() == 7)
						{
							bParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_176(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_175(&(Global_29008[StackVal]), 4194304);
				}
				Function_275(32);
				*bParam0 = 13;
			}
			if (!Function_33(bParam0->f_48, 128))
			{
				Call_Loc(bParam0->f_184);
				if (StackVal)
				{
					Function_31(bParam0 + 48, 128);
					Function_30(bParam0 + 48, 8);
					*bParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (bParam0->f_64 < 60.0f)
			{
				Function_275(32);
				Function_176(1, 0, 0);
				*bParam0 = 14;
			}
			if (Function_180(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_173(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_173(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_173(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*bParam0 = 14;
					}
				}
				else
				{
					bVar14 = Global_29155[StackVal10];
					if (Function_180(bVar14))
					{
						if (StackVal && (!Function_174(bVar14) && !Function_173(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_172(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_171();
			if (!Function_33(bParam0->f_44, 32))
			{
				if (Function_170())
				{
					iVar15 = 4294967295;
					if (bParam0->f_152 >= 4294967295)
					{
						iVar15 = GET_WEAPON_EQUIPPED(bVar0, bParam0->f_152);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
					}
					if (iVar15 == 4294967295)
					{
						iVar15 = Function_169(bVar0, 40);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
						else
						{
							iVar15 = Function_169(bVar0, 39);
							if (iVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
							}
							else
							{
								iVar15 = Function_169(bVar0, 42);
								if (iVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
								}
								else
								{
									iVar15 = Function_169(bVar0, 41);
									if (iVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
									}
									else
									{
										iVar15 = Function_169(bVar0, 43);
										if (iVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
										}
										else
										{
											iVar15 = Function_169(bVar0, 48);
											if (iVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
											}
											else
											{
												iVar15 = Function_169(bVar0, 46);
												if (iVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_33(bParam0->f_44, 64))
				{
					Function_168(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_42(16384, 0);
			Function_167(bVar0, !Function_33(bParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(bParam0->f_160);
			bParam0->f_112 = "";
			*bParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(bParam0->f_84))
			{
				TERMINATE_SCRIPT(bParam0->f_84);
			}
			Function_227(bParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_43(1);
			}
			else if (!Function_165())
			{
				Call_Loc(bParam0->f_172);
				bParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(bParam0->f_16))
				{
					Function_158(bParam0);
					*bParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*bParam0 = 20;
				}
				Function_157(bParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_227(bParam0, 1);
			if (bParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*bParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_227(bParam0, 1);
			Call_Loc(bParam0->f_180);
			if (StackVal)
			{
				if (Function_33(bParam0->f_44, 4))
				{
					*bParam0 = 17;
				}
				else
				{
					*bParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_227(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000012:
			Function_227(bParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*bParam0 = 19;
			break;
		
		case 0x00000013:
			Function_227(bParam0, 1);
			if (Function_165())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_224(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_157(int iParam0) //Position: 0x6368 / 25448
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_158(int iParam0) //Position: 0x6384 / 25476
{
	var uVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_223();
		uVar0 = "";
		if (Function_33(iParam0->f_44, 256))
		{
			if (Function_33(iParam0->f_44, 4))
			{
				uVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				uVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_164(&Global_78578 + 96))
			{
				if (FABS(Function_159(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, uVar0);
		NET_LOG(1, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

float Function_159(bool bParam0) //Position: 0x6475 / 25717
{
	return -Function_160(bParam0);
}

float Function_160(bool bParam0) //Position: 0x6481 / 25729
{
	if (Function_164(bParam0))
	{
		if (Function_163(bParam0))
		{
			return StackVal;
		}
		Function_161();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_161() //Position: 0x6552 / 25938
{
	if (!Function_162())
	{
	}
	return;
}

bool Function_162() //Position: 0x655F / 25951
{
	return NET_IS_IN_SESSION();
}

bool Function_163(bool bParam0) //Position: 0x6568 / 25960
{
	return Function_33(*bParam0, 2);
}

bool Function_164(bool bParam0) //Position: 0x6575 / 25973
{
	return Function_33(*bParam0, 1);
}

bool Function_165() //Position: 0x6582 / 25986
{
	return (HUD_IS_FADED() || Function_166(0));
}

int Function_166(bool bParam0) //Position: 0x6590 / 26000
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

void Function_167(int iParam0, int iParam1) //Position: 0x6634 / 26164
{
	struct<5> Var0;
	
	Function_42(128, 0);
	SET_ACTOR_INVULNERABILITY(uParam0, 0);
	if (Function_278(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(uParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(iParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(iParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

void Function_168(float fParam0) //Position: 0x668A / 26250
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

int Function_169(int iParam0, int iParam1) //Position: 0x66A7 / 26279
{
	var uVar0;
	
	uVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(iParam0, iParam1);
	return uVar0;
}

bool Function_170() //Position: 0x66B8 / 26296
{
	return !Function_277();
}

void Function_171() //Position: 0x66C2 / 26306
{
	int iVar0;
	int iVar1;
	
	iVar1 = Function_7();
	if (IS_ACTOR_VALID(iVar1))
	{
		iVar0 = 0;
		while (iVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, iVar0))
			{
				SET_WEAPON_GOLD(bVar1, iVar0, Global_83823[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

void Function_172(bool bParam0) //Position: 0x6701 / 26369
{
	if (!Function_180(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", 1);
	}
	else if (StackVal == 1)
	{
		Function_175(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_173(var uParam0, int iParam1) //Position: 0x675C / 26460
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_174(bool bParam0) //Position: 0x6778 / 26488
{
	if (!Function_180(bParam0))
	{
		return 1;
	}
	return Function_173(&(Global_29008[bParam0]), 4);
}

void Function_175(var uParam0, int iParam1) //Position: 0x6794 / 26516
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_176(int iParam0, bool bParam1, int iParam2) //Position: 0x67A3 / 26531
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
		if (Function_180(Global_29006))
		{
			Function_175(&(Global_29008[Global_29006]), 131072);
			Function_179(&(Global_29008[Global_29006]), 2097152);
			Function_177(Global_29006);
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
				if (Function_173(&(Global_29008[iVar0]), 4) || Function_173(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_179(&(Global_29008[iVar0]), 2097155);
					Function_175(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_61())
			{
			}
			WAIT(0);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(0);
	}
	return;
}

void Function_177(int iParam0) //Position: 0x68AE / 26798
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_178())
			{
				return;
			}
		}
		if (!Function_173(&(Global_29008[iParam0]), 2048))
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

bool Function_178() //Position: 0x692D / 26925
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_173(&(Global_29008[iVar0]), 4) || Function_173(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_179(var uParam0, int iParam1) //Position: 0x6996 / 27030
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_180(bool bParam0) //Position: 0x69AD / 27053
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_181(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x69C3 / 27075
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

vector3 Function_182(int iParam0) //Position: 0x6A5E / 27230
{
	vector3 vVar0;
	
	GET_POSITION(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_183(bool bParam0) //Position: 0x6A6F / 27247
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 < 6)
	{
		iVar1 = GET_WEAPON_EQUIPPED(iParam0, iVar0);
		if (iVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, iVar1, GET_WEAPON_MAX_AMMO(iVar1));
		}
		iVar0++;
	}
	return;
}

var Function_184(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x6AA2 / 27298
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar5[17];
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(*iParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			iVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(iVar2))
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
				if (ACTOR_HAS_WEAPON(*iParam0, iVar2))
				{
					iVar3 = GET_AMMO_ENUM(iVar2);
					if (Function_192(iVar3, 1))
					{
						iVar5[iVar3] = 1;
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
				iVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*iParam0, iVar3, TO_FLOAT(Function_191(&Global_83591 + 276, iVar3)), 1, 0);
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
					iVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_190(iVar2))
					{
						if (Function_189(iVar2))
						{
							iVar3 = GET_AMMO_ENUM(iVar2);
							if (Function_192(iVar3, 1))
							{
								iVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*iParam0, iVar3, 1)));
								if (iVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*iParam0, iVar3, TO_FLOAT(iVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*iParam0, iVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*iParam0, iVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				iVar2 = 0;
				while (iVar2 <= 40)
				{
					if (Global_84559[iVar2])
					{
						iVar3 = GET_AMMO_ENUM(iVar2);
						if (Function_192(iVar3, 1))
						{
							iVar24 = (Function_191(&Global_83591 + 276, iVar3) - CEIL(_GET_AMMO_AMOUNT(*iParam0, iVar3, 1)));
							if (iVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*iParam0, iVar3, TO_FLOAT(iVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*iParam0, iVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*iParam0, iVar2, 0.0f, 0, 0);
							}
						}
					}
					iVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_37(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_37(), &cVar28, &uVar26))
						{
							Function_185(uVar26, &Var36);
							iVar3 = GET_AMMO_ENUM(Var36);
							if (Function_192(iVar3, 1))
							{
								iVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*iParam0, iVar3, 1)));
								if (iVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*iParam0, iVar3, TO_FLOAT(iVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*iParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(*iParam0, Var36, 0.0f, 0, 0);
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
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
	}
	return iVar0;
}

void Function_185(var uParam0, int iParam1) //Position: 0x6D85 / 28037
{
	*iParam1 = Function_186(uParam0, Function_187(), 0);
	iParam1->f_4 = Function_186(uParam0, Function_187() + 8, Function_187());
	return;
}

var Function_186(var uParam0, int iParam1, int iParam2) //Position: 0x6DA8 / 28072
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_122((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

int Function_187() //Position: 0x6DC7 / 28103
{
	return Function_188(39);
}

int Function_188(int iParam0) //Position: 0x6DD2 / 28114
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

bool Function_189(int iParam0) //Position: 0x6E00 / 28160
{
	switch (UNK_0xDB679ED9(iParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_190(int iParam0) //Position: 0x6E22 / 28194
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_191(int iParam0, int iParam1) //Position: 0x6E34 / 28212
{
	if (Function_192(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_192(int iParam0, int iParam1) //Position: 0x6E4E / 28238
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_193(int iParam0) //Position: 0x6E61 / 28257
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_196(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_7()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_195(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_194(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_37(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_37(), &cVar5, &uVar3))
			{
				Function_185(uVar3, &Var13);
				Function_194(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_194(struct<5> Param0) //Position: 0x6F08 / 28424
{
	var uVar0;
	int iVar1;
	float fVar2;
	
	if (!Function_190(Param0))
	{
		return;
	}
	uVar0 = Function_7();
	if (!IS_ACTOR_VALID(uVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			iVar1 = GET_AMMO_ENUM(Param0);
			if (Function_192(iVar1, 1))
			{
				fVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					fVar2 = (fVar2 - _GET_AMMO_AMOUNT(bVar0, iVar1, 0));
				}
				if (fVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, iVar1, fVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

bool Function_195(int iParam0) //Position: 0x6F88 / 28552
{
	return Function_45(Global_83864.f_1252, iParam0);
}

void Function_196(int iParam0, int iParam1) //Position: 0x6F9A / 28570
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	uVar2 = Function_7();
	if (IS_ACTOR_VALID(uVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_197(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_197(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_197(23, iParam1))
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
			iVar4 = Function_169(bVar2, 40);
			if (iVar4 == 4294967295)
			{
				iVar4 = Function_169(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, iVar4);
		}
	}
	return;
}

bool Function_197(int iParam0, int iParam1) //Position: 0x7117 / 28951
{
	return Function_198(iParam0, iParam1) < 4294967295;
}

int Function_198(int iParam0, int iParam1) //Position: 0x7126 / 28966
{
	int iVar0;
	
	if (!Function_190(iParam0))
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

void Function_199(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x7159 / 29017
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_7();
	if (!IS_ACTOR_VALID(uVar0))
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
		Function_194(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0x71A4 / 29092
{
	float fVar0;
	bool bVar1;
	
	if (Function_61() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(iParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(iParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(iParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(iParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= bParam2)
		{
			DECOR_REMOVE(iParam0, "nIsFadedIn");
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

bool Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x7241 / 29249
{
	int iVar0;
	
	if (bParam1)
	{
		Function_85(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_85(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_85(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_85(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_85(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_85(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_85(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_85(&iVar0, 1048576);
	}
	return Function_202(iParam0, iVar0);
}

bool Function_202(bool bParam0, int iParam1) //Position: 0x72B0 / 29360
{
	if (IS_ACTOR_VALID(iParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_203(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_203(iParam1, 64))
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

bool Function_203(var uParam0, int iParam1) //Position: 0x7389 / 29577
{
	return (uParam0 && iParam1) == 0;
}

void Function_204(bool bParam0) //Position: 0x7396 / 29590
{
	Function_42(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_205(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x73B7 / 29623
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	iVar0 = Function_7();
	Function_216();
	uVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(uVar1))
	{
		return 0;
	}
	Function_215();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_202(iVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(iVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(iVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_278(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && iParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		iVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, iVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && iParam7))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(iVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(bVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!bParam6)
	{
		Function_212(bVar0, 0);
		Function_207();
		Function_206(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_181(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_180(uVar14))
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

void Function_206(var uParam0, vector3 vParam1) //Position: 0x752E / 29998
{
	UNK_0x6F6D942B(uParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_207() //Position: 0x756C / 30060
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_211(iVar1))
		{
			uVar2 = Function_210(iVar1);
			Function_208(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_208(int iParam0, int iParam1) //Position: 0x759E / 30110
{
	if (!Function_211(iParam0))
	{
		return;
	}
	if (!iParam1 < 0)
	{
	}
	if (iParam1 > Global_26401[iParam0])
	{
		Function_209(222, Global_26401[iParam0], 0);
		if (Function_77(222) <= 0)
		{
			Function_63(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_63((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - iParam1);
		Function_209((*&Global_26401 + 2220)[iParam0], iParam1, 0);
		Function_209(222, iParam1, 0);
	}
	return;
}

int Function_209(int iParam0, int iParam1, int iParam2) //Position: 0x7627 / 30247
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(iParam1));
	Function_75(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_64(iParam0, 0, TO_FLOAT(iParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_210(int iParam0) //Position: 0x7822 / 30754
{
	if (!Function_211(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_211(int iParam0) //Position: 0x783A / 30778
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_212(bool bParam0, bool bParam1) //Position: 0x784F / 30799
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(iParam0, 60.0f);
	SET_ACTOR_HEALTH(iParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_214(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_271(8192) && !Function_144(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_277())
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
	uVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(uVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(uVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_213())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_213() //Position: 0x7957 / 31063
{
	return Function_33(Global_79962, 2048);
}

var Function_214(int iParam0) //Position: 0x7967 / 31079
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

void Function_215() //Position: 0x799C / 31132
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_216() //Position: 0x79B1 / 31153
{
	Function_217();
	Function_87();
	Function_146();
	return;
}

void Function_217() //Position: 0x79C0 / 31168
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_218(var uParam0, bool bParam1, bool bParam2) //Position: 0x79D9 / 31193
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	vector3 vVar12;
	var uVar15;
	char* cVar16[64];
	int iVar32;
	
	if (!IS_VOLUME_VALID(uParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(uParam0, &vVar0);
	Function_222(uParam0);
	Var6 = { StackVal, StackVal, Function_222(uParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(uParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(uParam0, &vVar12);
	if (!bParam1)
	{
		vVar12.f_4 = (vVar12.y + 180.0f);
	}
	uVar15 = GET_OBJECT_OWNER(uParam0);
	if (IS_OBJECT_VALID(uVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(uParam0), 64);
		stradd(&cVar16, "_FF", 64);
		iVar32 = FIND_OBJECT_IN_OBJECT(uVar15, &cVar16);
		if (IS_OBJECT_VALID(iVar32))
		{
			Function_221(iVar32);
			vVar12.f_4 = Function_219(StackVal, StackVal, StackVal, StackVal, vVar3, Function_221(iVar32));
		}
	}
	return Function_205(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_219(vector3 vParam0, vector3 vParam3) //Position: 0x7A90 / 31376
{
	var uVar0;
	
	Function_220(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_220(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7AAA / 31402
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_221(int iParam0) //Position: 0x7ACD / 31437
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(iParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_222(var uParam0) //Position: 0x7AF4 / 31476
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(uParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_223() //Position: 0x7B05 / 31493
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_224(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7B1A / 31514
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

bool Function_225(int iParam0) //Position: 0x7B43 / 31555
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(iParam0->f_120))
	{
		return 1;
	}
	if (IS_CUTSCENEOBJECT_PAUSED(iParam0->f_120))
	{
		return 1;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_120);
	if (iVar0 <= 8 || (iVar0 <= 1 && Function_33(iParam0->f_48, 256)))
	{
		return 1;
	}
	return 0;
}

void Function_226() //Position: 0x7B86 / 31622
{
	if (!Function_48(8))
	{
		Function_47();
	}
	Function_29(8, 1, 1);
	return;
}

void Function_227(bool bParam0, int iParam1) //Position: 0x7B9F / 31647
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(bParam0->f_120))
	{
		return;
	}
	if (Function_33(bParam0->f_48, 256) || Function_33(bParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_33(bParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(bParam0->f_120);
	if (!Function_202(bParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(bParam0->f_120, true);
			Function_30(bParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(bParam0->f_128);
				DETACH_CAMERASHOT(bParam0->f_132);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_228(bParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_33(bParam0->f_48, 8192))
		{
			Function_31(bParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(bParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(bParam0->f_112);
				Function_276(1048576);
			}
			if (IS_OBJECT_VALID(bParam0->f_124) && IS_OBJECT_VALID(bParam0->f_128))
			{
				GET_POSITION(bParam0->f_112, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(bParam0->f_124, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, bParam0->f_128, bParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, bParam0->f_132, bParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_128, bParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_132, bParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_128, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_132, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_128, bParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT(bParam0->f_132, bParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_128, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(bParam0->f_132, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(bParam0->f_128, bParam0->f_112, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(bParam0->f_132, bParam0->f_112, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(bParam0->f_112, 1);
		}
	}
	return;
}

void Function_228(int iParam0) //Position: 0x7D9A / 32154
{
	var uVar0;
	vector3 vVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_DIRECTION(uVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_POSITION(uVar0, vVar1);
	SET_CAMERASHOT_FOV(uVar0, GET_CAMERASHOT_FOV(iParam0->f_124));
	return;
}

void Function_229(int iParam0, int iParam1) //Position: 0x7DDB / 32219
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	struct<25> Var8;
	
	iVar0 = Function_7();
	if (IS_ACTOR_VALID(iVar0))
	{
		Function_182(bVar0);
		vVar1 = { StackVal, StackVal, Function_182(bVar0) };
		Function_254(bVar0);
		vVar4 = { StackVal, StackVal, Function_254(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	uVar7 = Function_37();
	iParam0->f_156 = FIND_OBJECT_IN_LAYOUT(uVar7, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		SET_OBJECT_POSITION(iParam0->f_156, vVar1);
		SET_OBJECT_ORIENTATION(iParam0->f_156, vVar4);
	}
	else
	{
		iParam0->f_156 = CREATE_POINT_IN_LAYOUT(uVar7, "DeathAnchorPoint", vVar1, vVar4);
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_112))
	{
		if (Function_33(iParam0->f_44, 512))
		{
			*(&Var8 + 12) = { StackVal, StackVal, *(iParam0 + 72) };
			Var8 = { 0.0f, 0.0f, 0.0f };
			Var8.f_24 = 0;
			iParam0->f_120 = Function_249(uVar7, 0, &Var8, iParam0->f_156, 1, 0, 0);
		}
		else
		{
			iParam0->f_120 = Function_245(uVar7, 0, iParam0->f_156, 1, 0, 0);
		}
		Function_31(iParam0 + 48, 256);
	}
	else
	{
		Function_182(iParam0->f_112);
		vVar15 = { StackVal, StackVal, Function_182(iParam0->f_112) };
		vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar15, StackVal) };
		VNORMALIZE(&vVar18);
		if (Function_33(iParam0->f_44, 512))
		{
			*(&Var21 + 12) = { StackVal, StackVal, *(iParam0 + 72) };
			Var21 = { 0.0f, 0.0f, 0.0f };
			Var21.f_24 = 0;
			iParam0->f_120 = Function_240(uVar7, 0, &Var21, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		}
		else
		{
			iParam0->f_120 = Function_232(uVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		}
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_231(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_31(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar18, vVar15, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar18, 1);
	}
	Function_230(iParam0->f_120);
	return;
}

void Function_230(var uParam0) //Position: 0x7FEE / 32750
{
	Function_215();
	Global_63118 = uParam0;
	return;
}

void Function_231(var uParam0, bool bParam1) //Position: 0x8000 / 32768
{
	PLAY_CUTSCENEOBJECT(uParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_232(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x8015 / 32789
{
	var uVar0;
	
	if (bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_65(), 6, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_233(&uVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(uVar0))
	{
		DESTROY_OBJECT(uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(uVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(uVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(uVar0, uParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return uVar0;
}

void Function_233(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8097 / 32919
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_239(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_238(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_237(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_236(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_235(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_234(&uVar0, uParam1, uParam2, uParam3);
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

void Function_234(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x81B2 / 33202
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, uParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, uParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_235(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x82C7 / 33479
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, uParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, uParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_236(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x83E0 / 33760
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, uParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, uParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_237(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x84EA / 34026
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, uParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, uParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_238(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x85F0 / 34288
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3.512409f, 1.385313f, 11.99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.000168f, 1.399967f, 0.006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_239(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x86A0 / 34464
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6.044836f, 1.844389f, 8.871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.125951f, 1.612884f, -0.415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, uParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_240(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x8757 / 34647
{
	var uVar0;
	
	if (bParam6)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_65(), 9, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "DeathCamSwingNew_MB", 9, 1);
	}
	Function_241(&uVar0, uParam2, uParam3, uParam4, uParam5);
	if (uParam8 && CHECK_CUTSCENE_COLLISIONS(uVar0))
	{
		DESTROY_OBJECT(uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(uVar0), "");
		if (bParam7)
		{
			SET_CUTSCENEOBJECT_PAUSED(uVar0, bParam7);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(uVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return uVar0;
}

void Function_241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x87E0 / 34784
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_239(&uVar0, uParam2, uParam3, uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_238(&uVar0, uParam2, uParam3, uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_237(&uVar0, uParam2, uParam3, uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_236(&uVar0, uParam2, uParam3, uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_235(&uVar0, uParam2, uParam3, uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_234(&uVar0, uParam2, uParam3, uParam4);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_244(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_243(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_242(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0.65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0.25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1.5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0.35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0.35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 6, 7, 0.5f, 8, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 30.0f, 9, 1);
}

void Function_242(var uParam0, int iParam1) //Position: 0x894F / 35151
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.19803f, 16.0f, 11.94f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.0f, 1.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0x89FA / 35322
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -9.74137f, 16.0f, -7.00755f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.0f, 1.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_244(var uParam0, bool bParam1) //Position: 0x8AA5 / 35493
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 45.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -9.09355f, 16.0f, -7.8299f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.0f, 1.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_245(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8B50 / 35664
{
	var uVar0;
	
	if (bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_65(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "nMPSuicide", 2, 1);
	}
	Function_246(&uVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(uVar0))
	{
		DESTROY_OBJECT(uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(uVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(uVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(uVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return uVar0;
}

void Function_246(var uParam0, int iParam1) //Position: 0x8BC7 / 35783
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_248(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_247(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_247(var uParam0, int iParam1) //Position: 0x8C33 / 35891
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
	Function_254(iParam1);
	vVar3 = { StackVal, StackVal, Function_254(iParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_221(iParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_221(iParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_254(iParam1);
	vVar6 = { StackVal, StackVal, Function_254(iParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_221(iParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_221(iParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_248(var uParam0, int iParam1) //Position: 0x8CF5 / 36085
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
	Function_254(iParam1);
	vVar3 = { StackVal, StackVal, Function_254(iParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_221(iParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_221(iParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_254(iParam1);
	vVar6 = { StackVal, StackVal, Function_254(iParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_221(iParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_221(iParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_249(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x8DB7 / 36279
{
	var uVar0;
	
	if (bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_65(), 5, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "MPSuicide_MB", 5, 1);
	}
	Function_250(&uVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(uVar0))
	{
		DESTROY_OBJECT(uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(uVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(uVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(uVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return uVar0;
}

void Function_250(var uParam0, var uParam1, int iParam2) //Position: 0x8E33 / 36403
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_248(&uVar0, iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_247(&uVar0, iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_253(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_252(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_251(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 6.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0.5f, 2, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 3, 4, 30.0f, 3, 1);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_251(var uParam0, bool bParam1) //Position: 0x8EEB / 36587
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.19803f, 16.0f, 11.94f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.0f, 1.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_252(var uParam0, bool bParam1) //Position: 0x8F96 / 36758
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -9.74137f, 16.0f, -7.00755f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.0f, 1.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_253(var uParam0, bool bParam1) //Position: 0x9041 / 36929
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 45.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -9.09355f, 16.0f, -7.8299f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.0f, 1.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_254(int iParam0) //Position: 0x90EC / 37100
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(iParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_255(int iParam0) //Position: 0x9113 / 37139
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	int iVar23;
	
	if (!Function_33(iParam0->f_48, 2048))
	{
		Function_31(iParam0 + 48, 2048);
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
				iVar2 = (&Global_78617 + 2604)->f_12;
				if (Function_190(iVar2) && RAND_INT_RANGE(0, 1000) > 500)
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
			iVar2 = GET_WEAPON_IN_HAND(iParam0->f_112);
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
				if (Function_190(iVar2))
				{
					if (iVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(iVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_112, &vVar20);
						iVar23 = CEIL((VDIST(vVar20, *(&Global_78617 + 2604 + 16)) * 1.093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(iVar2)), I2STR(iVar23), UI_GET_STRING("stat_yd"));
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

var Function_256(int iParam0) //Position: 0x9439 / 37945
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

struct<64> Function_257(int iParam0) //Position: 0x964D / 38477
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_279())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(iParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(iParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (iParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_258();
	}
	if (!Function_145(iParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(iParam0), 64);
	}
	if (!Function_145(iParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[iParam096] + 32);
}

struct<64> Function_258() //Position: 0x96F3 / 38643
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_259(var uParam0, int iParam1) //Position: 0x9704 / 38660
{
	if (Function_263(uParam0, iParam1))
	{
		Function_262(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_260(int iParam0) //Position: 0x971E / 38686
{
	Function_60(&Global_79378, 0, iParam0);
	return;
}

void Function_261(var uParam0, bool bParam1) //Position: 0x972E / 38702
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_37(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(uVar0, uParam0);
	uVar1 = START_OBJECT_ITERATOR(uVar0);
	while (IS_OBJECT_VALID(uVar1))
	{
		if (DECOR_GET_INT_VERBOSE(iVar1, "Type", &iVar2))
		{
			if (Function_190(iVar2))
			{
				SET_WEAPON_GOLD(iParam1, iVar2, Global_83823[iVar2]);
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(uVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(uParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(uParam0);
	DESTROY_ITERATOR(uVar0);
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0x97AA / 38826
{
	*uParam0 = *iParam1;
	return;
}

bool Function_263(var uParam0, int iParam1) //Position: 0x97B6 / 38838
{
	return *uParam0 == *iParam1;
}

void Function_264(int iParam0, int iParam1) //Position: 0x97C3 / 38851
{
	Function_265(iParam0, (Function_266(iParam0) + iParam1));
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0x97D6 / 38870
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_266(int iParam0) //Position: 0x97FF / 38911
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_267(int iParam0, int iParam1) //Position: 0x980F / 38927
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9838 / 38968
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
		PRINT_HELP_B(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_269(int iParam0) //Position: 0x98B3 / 39091
{
	char* cVar0[16];
	
	if (!Function_113())
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

var Function_270(int iParam0, bool bParam1, int iParam2) //Position: 0x98F2 / 39154
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar2 = GET_LOCAL_SLOT();
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (Function_145(iVar1) && (iParam2 || iVar1 == iVar2))
		{
			if (!Function_142(iVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_271(int iParam0) //Position: 0x9939 / 39225
{
	return Function_272(&Global_79349, iParam0);
}

int Function_272(var uParam0, int iParam1) //Position: 0x9948 / 39240
{
	return Function_33(uParam0->f_44, iParam1);
}

int Function_273(int iParam0) //Position: 0x9957 / 39255
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_274() //Position: 0x996D / 39277
{
	if (Function_33(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_33(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_275(int iParam0) //Position: 0x99A3 / 39331
{
	Function_40(&Global_78617 + 52, iParam0);
	return;
}

void Function_276(int iParam0) //Position: 0x99B4 / 39348
{
	Function_85(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_277() //Position: 0x9A0D / 39437
{
	if (Function_61())
	{
		return (Function_138() != 1 || Function_138() != 0);
	}
	return 0;
}

bool Function_278(bool bParam0) //Position: 0x9A26 / 39462
{
	return Function_45(Global_78617.f_52, bParam0);
}

bool Function_279() //Position: 0x9A37 / 39479
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_280(bool bParam0) //Position: 0x9A45 / 39493
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

bool Function_281() //Position: 0x9A57 / 39511
{
	return Function_271(2);
}

var Function_282(int iParam0, int iParam1) //Position: 0x9A61 / 39521
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_283(int iParam0) //Position: 0x9A74 / 39540
{
	if (!Function_295(iParam0))
	{
	}
	if (!Function_44(2048))
	{
		Function_276(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*iParam0 = 15;
	return;
}

bool Function_284() //Position: 0x9AA7 / 39591
{
	return !Function_33(Local_282.f_676, 4);
}

void Function_285() //Position: 0x9AB8 / 39608
{
	bool bVar0;
	
	if (Function_424())
	{
		bVar0 = Local_518.f_144 != false;
	}
	else
	{
		bVar0 = Local_518.f_144 == false;
	}
	if ((Function_354() - Local_282.f_860) != 0 && bVar0)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(80))
		{
			AWARD_ACHIEVEMENT(80);
		}
	}
	return;
}

void Function_286() //Position: 0x9AFA / 39674
{
	Function_5();
	Local_282.f_648 = 0.0f;
	if (StackVal && StackVal <= 2 >= 6)
	{
		switch (StackVal)
		{
			case 0x00000001:
				Function_292(StackVal, (StackVal - 1), 1);
				break;
			
			case 0x00000002:
				UNK_0x6745191B(CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, "safeBoom", Local_282[("script_lightning_marker" - 1)8].f_20, 0.45f, 1.5f, -0.64f, 1, 0), 0.0f, 0.0f, 0.0f);
				break;
		}
		if (StackVal != 0)
		{
			Function_290();
		}
	}
	if (StackVal != 0)
	{
		Function_315(StackVal);
		if (Function_284())
		{
			Function_222(Local_282[&Local_282 + 2008]);
			Function_289(StackVal, StackVal, StackVal, Function_222(Local_282[&Local_282 + 2008]));
		}
		Function_288();
	}
	Function_287(0);
	Local_282.f_900 = 0;
	Local_282.f_904 = 0;
	Function_398(StackVal, (3 - 1));
	Local_282.f_644 = StackVal;
	return;
}

void Function_287(int iParam0) //Position: 0x9C02 / 39938
{
	int iVar0;
	
	iVar0 = GET_LOCAL_SLOT();
	if (IS_SLOT_VALID(iVar0))
	{
		if (Local_556[bVar04].f_12 != iParam0)
		{
			if (iParam0 == 0 && Function_424())
			{
				if ((GET_CURRENT_GAME_TIME() - Local_282.f_848) < 5.0f)
				{
					PLAY_SOUND_FRONTEND("STRONG_HOLD_ENTER_MASTER");
					Local_282.f_848 = GET_CURRENT_GAME_TIME();
				}
				if (!IS_SOUND_ID_VALID(Local_282.f_852))
				{
					Local_282.f_852 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND_PERSISTENT(Local_282.f_852, "STRONG_HOLD_MASTER");
				}
			}
			else
			{
				Function_6();
			}
			Local_556[bVar04].f_12 = iParam0;
		}
	}
	Local_621.f_12 = iParam0;
	return;
}

void Function_288() //Position: 0x9CB0 / 40112
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<9> Var7;
	
	uVar0 = GET_OBJECT_FROM_VOLUME(Local_282[StackVal8]);
	if (!IS_OBJECT_VALID(uVar0))
	{
		return;
	}
	Function_221(iVar0);
	vVar1 = { StackVal, StackVal, Function_221(iVar0) };
	Function_254(Local_282[StackVal8]);
	vVar4 = { StackVal, StackVal, Function_254(Local_282[StackVal8]) };
	if (StackVal == 2)
	{
		if (!GET_OBJECT_RELATIVE_POSITION(iVar0, 0.05f, 0.0f, 0.35f, &vVar1))
		{
		}
	}
	Local_282.f_652 = CREATE_POINT_IN_LAYOUT(Function_50(), "targetGateway", vVar1, vVar4);
	if (!IS_OBJECT_VALID(Local_282.f_652))
	{
		return;
	}
	if (!Local_282.f_896)
	{
		UNK_0x4897DD37(1);
		Local_282.f_896 = 1;
	}
	GET_VOLUME_SCALE(Local_282[StackVal8], &vVar7);
	_SET_MELEE_MARKER_POS(vVar1);
	fVar10 = ((vVar7.x + vVar7.z) * 0.5f);
	if (StackVal == 1)
	{
		_SET_MELEE_MARKER_SIZE(5.0f);
	}
	else
	{
		_SET_MELEE_MARKER_SIZE(3.5f);
	}
	_SET_MELEE_MARKER_COLOR(vLocal_277, 0.75f);
	Local_282.f_888 = CLEAR_AREA_OF_GRASS(vVar1, (fVar10 + 1.0f));
	if (Function_424())
	{
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_282.f_652, 330, 0.0f, 3, 0), "AD_Checkpoint");
	}
	else
	{
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_282.f_652, 330, 0.0f, 3, 0), "AD_Checkpoint");
	}
	return;
}

void Function_289(int iParam0, vector3 vParam1) //Position: 0x9E05 / 40453
{
	Function_31(iParam0 + 44, 512);
	*(iParam0 + 72) = { StackVal, StackVal, vParam1 };
}

void Function_290() //Position: 0x9E21 / 40481
{
	if (Local_282.f_644 < 0 && Local_282.f_644 >= 5)
	{
		if (StackVal == 2)
		{
			if (Function_424())
			{
				Function_291("Mode_DLC_Extrkt_AlmAtt", 0);
			}
			else
			{
				Function_291("Mode_DLC_Extrkt_ComDEF", 0);
			}
		}
		else if (Function_424())
		{
			Function_291("Mode_DLC_Occu_AlmATT", 0);
		}
		else
		{
			Function_291("Mode_DLC_Occu_ComDEF", 0);
		}
		Local_282.f_908 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_291(char* cParam0, bool bParam1) //Position: 0x9EDA / 40666
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (bParam1)
		{
			iVar0 = uParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, "SFX_PAUSE_2000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, uParam0, iVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(0, 0);
	return;
}

void Function_292(int iParam0, int iParam1, bool bParam2) //Position: 0x9F37 / 40759
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	var uVar8;
	
	if (!IS_OBJECT_VALID(Local_282[iParam08].f_20))
	{
		return;
	}
	if (iParam0 > iParam1)
	{
		if (Function_424())
		{
			uVar0 = Function_294();
		}
		else
		{
			uVar0 = Function_293();
		}
	}
	else if (Function_424())
	{
		uVar0 = Function_293();
	}
	else
	{
		uVar0 = Function_294();
	}
	GET_OBJECT_RELATIVE_POSITION(Local_282[iParam08].f_20, 0.2f, 7.0f, -0.2f, &vVar1);
	if (IS_OBJECT_VALID(Local_282[iParam08].f_24))
	{
		DESTROY_OBJECT(Local_282[iParam08].f_24);
	}
	memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("WorldMover_", I2STR(iParam0)), 4);
	Local_282[iParam08].f_24 = CREATE_PROP_IN_LAYOUT(StackVal, Function_50(), &uVar4, uVar0, vVar1, 0.0f, -90.0f, 1);
	uVar8 = FIND_OBJECT_IN_OBJECT(Local_282[iParam08].f_20, "poleTop");
	if (IS_OBJECT_VALID(uVar8))
	{
		DESTROY_OBJECT(iVar8);
	}
	iVar8 = FIND_OBJECT_IN_OBJECT(Local_282[iParam08].f_20, "poleBottom");
	if (IS_OBJECT_VALID(iVar8))
	{
		DESTROY_OBJECT(iVar8);
	}
	if (bParam2)
	{
		UNK_0x6745191B(CREATE_RMPTFX_EMITTER_ON_OBJECT("poleTop", "script_lightning_marker", Local_282[iParam08].f_20, 0.0f, 7.0f, 0.0f, 1, 0), 0.0f, 0.0f, 0.0f);
		UNK_0x6745191B(CREATE_RMPTFX_EMITTER_ON_OBJECT("poleBottom", "script_lightning_marker", Local_282[iParam08].f_20, 0.0f, 0.0f, 0.0f, 1, 0), 0.0f, 0.0f, 0.0f);
	}
	return;
}

var Function_293() //Position: 0xA0BF / 41151
{
	return "c_gen_flg04x";
}

var Function_294() //Position: 0xA0D4 / 41172
{
	return "c_gen_flg03x";
}

bool Function_295(int iParam0) //Position: 0xA0E9 / 41193
{
	return !(*iParam0 <= 15 && *iParam0 >= 20);
}

void Function_296(int iParam0) //Position: 0xA0FD / 41213
{
	bool bVar0;
	int iVar1;
	float fVar2;
	
	if (!*iParam0)
	{
		return;
	}
	if (Function_308())
	{
		Function_23(iParam0, 1);
		return;
	}
	if (UI_ISACTIVE("RadialWeaponQuickPick"))
	{
		Function_23(iParam0, 1);
		return;
	}
	if (!UI_ISACTIVE("nAD_Scores"))
	{
		if (StackVal)
		{
			if (!StackVal)
			{
				iParam0->f_8 = 1;
			}
			return;
		}
	}
	if (StackVal || (StackVal || StackVal < 5 >= 0) != 0)
	{
		Function_23(iParam0, 1);
		return;
	}
	iParam0->f_12 = (iParam0->f_12 - 1);
	if (((StackVal || !StackVal) || iParam0->f_12 > 0) || Function_164(&Local_518 + 12))
	{
		iParam0->f_12 = 5;
		bVar0 = false;
		if (Function_307(StackVal))
		{
			bVar0 = true;
		}
		iVar1 = 0.0f;
		if (Function_162())
		{
			if (Function_164(&Global_78578 + 96))
			{
				iVar1 = Function_159(&Global_78578 + 96);
			}
		}
		if (StackVal || !StackVal)
		{
			iParam0->f_4 = 1;
			iParam0->f_8 = 0;
			UI_SHOW("nAD_Scores");
			UI_SHOW("AD_ScoresProxy");
			UI_SHOW("NetTimer");
			Function_306(iVar1);
			bVar0 = true;
		}
		if (FABS((UI_ANIM_GET_TIME("NetTimer") - iVar1)) < 1.0f)
		{
			Function_306(iVar1);
		}
		if (Function_305(StackVal, iParam0 + 20, &bVar0))
		{
			iParam0->f_24 = 4294967295;
		}
		Function_305(iParam0 + 16, Local_282.f_640, &bVar0);
		if (Function_164(&Local_518 + 12) || Local_282.f_648 < 0.0f)
		{
			fVar2 = Function_301();
			Function_300(fVar2);
			Function_305(iParam0 + 24, Function_70(CEIL((fVar2 * 100.0f)), 100), &bVar0);
		}
		else
		{
			Function_305(iParam0 + 24, 0, &bVar0);
		}
		Function_305(iParam0 + 28, Local_518.f_60, &bVar0);
		if (Function_424())
		{
			Function_305(iParam0 + 32, 4, &bVar0);
		}
		else
		{
			Function_305(iParam0 + 32, 5, &bVar0);
		}
		if (bVar0)
		{
			Function_297(iParam0);
		}
	}
	return;
}

void Function_297(int iParam0) //Position: 0xA2FB / 41723
{
	struct<8> Var0;
	int iVar8;
	var uVar9;
	
	UI_LABEL_SET_VALUE(Function_299(0), CEIL(((100.0f * TO_FLOAT(iParam0->f_28)) / TO_FLOAT(Local_518.f_140))));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_298(iParam0->f_20, 1) };
	UI_SET_TEXT("AD_ScoresProxy", &Var0);
	UI_SET_STRING("AD_CurLives", I2STR(iParam0->f_28));
	iVar8 = 1;
	while (iVar8 < 5)
	{
		uVar9 = Function_299(iVar8);
		if (iVar8 == iParam0->f_20)
		{
			UI_LABEL_SET_VALUE(uVar9, iParam0->f_24);
		}
		else if (iVar8 <= iParam0->f_20)
		{
			UI_LABEL_SET_VALUE(uVar9, 100);
		}
		else
		{
			UI_LABEL_SET_VALUE(uVar9, 0);
		}
		if (iVar8 < iParam0->f_16)
		{
			UI_INCLUDE(uVar9);
		}
		else
		{
			UI_EXCLUDE(cVar9);
		}
		UI_REFRESH(cVar9);
		iVar8++;
	}
	UI_LABEL_SET_VALUE("AD_ScoresProxy", iParam0->f_20);
	UI_SET_STYLE("AD_ScoresProxy", iParam0->f_32);
	UI_REFRESH("nAD_Scores");
	UI_REFRESH("AD_ScoresProxy");
	if (Local_282.f_892)
	{
		FLASH_SET_INT("net_HUD", "flash_score", 1);
	}
	else
	{
		FLASH_SET_INT("net_HUD", "flash_score", 0);
	}
	return;
}

struct<32> Function_298(int iParam0, bool bParam1) //Position: 0xA457 / 42071
{
	char* cVar0[32];
	
	memcpy(&cVar0, StackVal, StackVal, StackVal, Global_79349, 8);
	stradd(&cVar0, "_Goal_", 32);
	stradd(&cVar0, I2STR(iParam0), 32);
	if (Function_424())
	{
		stradd(&cVar0, "A", 32);
	}
	else
	{
		stradd(&cVar0, "D", 32);
	}
	if (bParam1)
	{
		stradd(&cVar0, "_UI", 32);
	}
	else
	{
		stradd(&cVar0, "_Obj", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_299(int iParam0) //Position: 0xA4BC / 42172
{
	switch (iParam0)
	{
		case 0x00000000:
			return "AD_Scores.s0";
		
		case 0x00000001:
			return "AD_Scores.s1";
		
		case 0x00000002:
			return "AD_Scores.s2";
		
		case 0x00000003:
			return "AD_Scores.s3";
		
		case 0x00000004:
			return "AD_Scores.s4";
		
		case 0x00000005:
			return "AD_Scores.s5";
		
		default:
	}
	return "";
}

void Function_300(float fParam0) //Position: 0xA550 / 42320
{
	if (fParam0 < 0.6f && (GET_CURRENT_GAME_TIME() - Local_282.f_908) < 20.0f)
	{
		if (StackVal == 2)
		{
			if (!Function_424())
			{
				Function_291("Mode_DLC_Extrkt_AlmDef", 0);
			}
		}
		else if (!Function_424())
		{
			Function_291("Mode_DLC_Occu_AlmDEF", 0);
		}
		Local_282.f_908 = GET_CURRENT_GAME_TIME();
	}
	return;
}

var Function_301() //Position: 0xA5D4 / 42452
{
	float fVar0;
	
	if (StackVal == 2)
	{
		if (!Function_164(&Local_518 + 12))
		{
			return 0.0f;
		}
		fVar0 = Function_302();
		if (Function_164(&Local_518 + 24))
		{
			return (Function_159(&Local_518 + 24) / fVar0);
		}
		return (Function_160(&Local_518 + 12) / fVar0);
	}
	Local_282.f_648 = (Local_282.f_648 + ((Local_518.f_36 - Local_282.f_648) * (Function_302() * GET_LAST_FRAME_TIME())));
	if ((Local_282.f_648 / fLocal_267) > 0.01f)
	{
		return 0.0f;
	}
	return (Local_282.f_648 / fLocal_267);
	return 0.0f;
}

float Function_302() //Position: 0xA668 / 42600
{
	int iVar0;
	
	if (StackVal == 2)
	{
		return Local_282[StackVal8].f_12;
	}
	iVar0 = Function_303(StackVal);
	if (iVar0 < iLocal_1312)
	{
		return iLocal_1316;
	}
	if (iVar0 < iLocal_1313)
	{
		return iLocal_1317;
	}
	if (iVar0 < iLocal_1314)
	{
		return iLocal_1318;
	}
	return iLocal_1315;
}

int Function_303(int iParam0) //Position: 0xA6C2 / 42690
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_556, iVar0))
		{
			if (Local_556[iVar04].f_12 == iParam0)
			{
				if (Function_304(Function_141(iVar0, 1, 0)))
				{
					iVar1++;
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_304(int iParam0) //Position: 0xA70E / 42766
{
	if (Function_140() == iParam0)
	{
		return Function_424();
	}
	return Function_284();
}

bool Function_305(var uParam0, int iParam1, int iParam2) //Position: 0xA723 / 42787
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

void Function_306(int iParam0) //Position: 0xA73D / 42813
{
	UI_ANIM_SETUP("NetTimer", iParam0, 1, 4294967295);
	UI_ANIM_RESTART("NetTimer");
	return;
}

bool Function_307(bool bParam0) //Position: 0xA763 / 42851
{
	return Function_303(bParam0) < 0;
}

bool Function_308() //Position: 0xA770 / 42864
{
	return Function_48(16384);
}

void Function_309() //Position: 0xA77C / 42876
{
	Function_29(1024, 0, 1);
	Function_29(1, 0, 0);
	return;
}

bool Function_310(bool bParam0) //Position: 0xA790 / 42896
{
	return Function_33(StackVal, bParam0);
}

void Function_311() //Position: 0xA7A3 / 42915
{
	Function_29(1025, 1, 0);
	return;
}

void Function_312() //Position: 0xA7B1 / 42929
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 < Local_282.f_640)
	{
		if (StackVal == 1)
		{
			Function_292(iVar0, 0, 0);
		}
		else
		{
			Local_282[iVar08].f_8 = 2;
			Function_313(iVar0, 0, 1);
		}
		iVar0++;
	}
	return;
}

void Function_313(int iParam0, int iParam1, bool bParam2) //Position: 0xA7F6 / 42998
{
	vector3 vVar0;
	var uVar3;
	float fVar7;
	vector3 vVar8;
	var uVar11;
	var uVar12;
	
	Function_222(Local_282[iParam08]);
	vVar0 = { StackVal, StackVal, Function_222(Local_282[iParam08]) };
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("WorldMarker_", I2STR(iParam0)), 4);
	if (bParam2)
	{
		if (IS_OBJECT_VALID(Local_282[iParam08].f_20))
		{
			DESTROY_OBJECT(Local_282[iParam08].f_20);
		}
		if (IS_OBJECT_VALID(Local_282[iParam08].f_24))
		{
			DESTROY_OBJECT(Local_282[iParam08].f_24);
		}
	}
	if (!IS_OBJECT_VALID(Local_282[iParam08].f_20))
	{
		fVar7 = GET_VOLUME_HEADING(Local_282[iParam08]);
		vVar8 = { -0.45f, 0.0f, 0.64f };
		ROTATE_VECTOR_XZ(&vVar8, fVar7, 0);
		Local_282[iParam08].f_20 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&uVar3, Function_50(), StackVal) + Vector(vVar8, vVar0, "p_gen_safe02x"), 0.0f, fVar7, 0.0f, 1);
	}
	uVar11 = FIND_OBJECT_IN_OBJECT(Local_282[iParam08].f_20, "player_lockpick_safe");
	if (IS_OBJECT_VALID(uVar11))
	{
		DESTROY_OBJECT(iVar11);
	}
	if (!IS_OBJECT_VALID(Local_282[iParam08].f_24))
	{
		memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("WorldSafe_", I2STR(iParam0)), 4);
		Local_282[iParam08].f_24 = CREATE_GRINGO_ON_OBJECT(Local_282[iParam08].f_20, &uVar3, "$/content/scripting/gringo/SimpleGringo/mp_lockpick_safe", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		DECOR_SET_INT(Local_282[iParam08].f_24, "UseStage", (iParam0 - 1));
	}
	else if (bParam2)
	{
	}
	if (iParam0 <= iParam1)
	{
		uVar12 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(Local_282[iParam08].f_20, Function_314(), "knl_picksafe_mp", "knl_picksafe_mp");
		if (IS_OBJECT_ANIMATOR_VALID(uVar12))
		{
			if (IS_OBJECT_ANIMATOR_READY(uVar12))
			{
				if (!SET_OBJECT_ANIMATOR_NODE(uVar12, "/global/knl_picksafe_mp/safe/opened"))
				{
				}
			}
		}
	}
	return;
}

var Function_314() //Position: 0xAA21 / 43553
{
	return "knl_picksafe";
}

void Function_315(int iParam0) //Position: 0xAA36 / 43574
{
	char* cVar0[16];
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	Local_626.f_1444 = 0;
	strcpy(&cVar0, "Stage_", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_set", 16);
	uVar4 = FIND_VOLUME_IN_LAYOUT(Function_50(), &cVar0);
	if (!IS_VOLUME_VALID(uVar4))
	{
		return;
	}
	uVar5 = "D_Spawn";
	if (Function_424())
	{
		uVar5 = "A_Spawn";
	}
	uVar6 = CREATE_NAMED_OBJECT_ITERATOR(Function_50(), "SpawnIterator");
	ITERATE_IN_VOLUME_SET(uVar6, uVar4);
	ITERATE_ON_PARTIAL_NAME(uVar6, uVar5);
	uVar7 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(uVar6));
	while (IS_VOLUME_VALID(uVar7) && Local_626.f_1444 > 60)
	{
		Local_626[Local_626.f_14446] = uVar7;
		if (DECOR_CHECK_EXIST(uVar7, "IntSpawn"))
		{
			Local_626[Local_626.f_14446].f_4 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "IntSpawn"));
		}
		else
		{
			Local_626[Local_626.f_14446].f_4 = "";
		}
		GET_VOLUME_CENTER(bVar7, &Local_626[Local_626.f_14446] + 8);
		Local_626.f_1444++;
		bVar7 = GET_VOLUME_FROM_OBJECT(OBJECT_ITERATOR_NEXT(uVar6));
	}
	if (Function_424())
	{
	}
	DESTROY_ITERATOR(uVar6);
	return;
}

void Function_316(bool bParam0) //Position: 0xAB62 / 43874
{
	if (bParam0)
	{
		Function_31(&Local_282 + 676, 4);
		UI_SET_TEXT("AD_Scores.s0", "AD_Lives");
		Function_324(&Local_282 + 200, 1);
		Function_317(&Local_282 + 200, 1);
	}
	else
	{
		Function_30(&Local_282 + 676, 4);
		UI_SET_TEXT("AD_Scores.s0", "AD_Lives_D");
		Function_324(&Local_282 + 200, 0);
		Function_317(&Local_282 + 200, 0);
	}
	return;
}

void Function_317(int iParam0, bool bParam1) //Position: 0xABE4 / 44004
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* cVar3[32];
	
	if (bParam1)
	{
		Function_323(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	}
	else
	{
		Function_319(iParam0 + 192);
		iVar0 = Function_318();
		iVar2 = DECOR_GET_INT(iVar0, "AD_WeaponCount");
		iVar1 = 0;
		while (iVar1 <= iVar2)
		{
			strcpy(&cVar3, "AD_WeaponData_", 32);
			straddi(&cVar3, iVar1, 32);
			Function_185(DECOR_GET_INT(bVar0, &cVar3), iParam0 + 192[iVar12]);
			iVar1++;
		}
	}
	return;
}

var Function_318() //Position: 0xAC65 / 44133
{
	int iVar0;
	
	iVar0 = FIND_OBJECT_IN_LAYOUT(Function_50(), "AD_WeaponThingy");
	if (!IS_OBJECT_VALID(iVar0))
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(Function_50(), "AD_WeaponThingy", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return iVar0;
}

void Function_319(int iParam0) //Position: 0xACB5 / 44213
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_321(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_320(iParam0, 0.0f);
	return;
}

void Function_320(var uParam0, int iParam1) //Position: 0xACE2 / 44258
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_321(int iParam0) //Position: 0xACEE / 44270
{
	Function_322(iParam0, 4294967295, 0, 1);
	return;
}

void Function_322(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xACFC / 44284
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

void Function_323(int iParam0, struct<57> Param1) //Position: 0xAD26 / 44326
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_324(int iParam0, bool bParam1) //Position: 0xAD3A / 44346
{
	if (bParam1)
	{
		Function_30(iParam0 + 44, 128);
	}
	else
	{
		Function_31(iParam0 + 44, 128);
	}
	return;
}

void Function_325(int iParam0, bool bParam1) //Position: 0xAD5A / 44378
{
	if (bParam1)
	{
		Function_31(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_30(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_326(int iParam0, bool bParam1) //Position: 0xAD82 / 44418
{
	if (bParam1)
	{
		Function_31(iParam0 + 44, 64);
	}
	else
	{
		Function_30(iParam0 + 44, 64);
	}
	return;
}

void Function_327() //Position: 0xADA2 / 44450
{
	UI_EXIT("MPSplash");
	UI_EXIT("HudMPNoFun");
	return;
}

void Function_328(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xADC6 / 44486
{
	int iVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(251);
			fVar1 = Function_137(251);
			iVar0 = iParam3;
			if (iVar0 > 10)
			{
				*uParam2 = 0.0f;
				Function_335(251, uParam1, 1, 7049, 50.0f, 150.0f, 15, Function_336(0), 0);
				Function_334(251);
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(10));
				if (*uParam2 == fVar1)
				{
					Function_89(251, *uParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_334(251);
			fVar1 = Function_137(251);
			iVar0 = iParam3;
			if (iVar0 > 15)
			{
				*uParam2 = 0.0f;
				Function_335(251, uParam1, 2, 7050, 150.0f, 200.0f, 20, Function_336(0), 0);
				Function_334(251);
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(15));
				if (*uParam2 == fVar1)
				{
					Function_89(251, *uParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_334(251);
			fVar1 = Function_137(251);
			iVar0 = iParam3;
			if (iVar0 > 20)
			{
				*uParam2 = 0.0f;
				Function_329(251, uParam1, uParam0, 7051, 200.0f, Function_336(0));
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(20));
				if (*uParam2 == fVar1)
				{
					Function_89(251, *uParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
}

void Function_329(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, int iParam5) //Position: 0xAF0E / 44814
{
	struct<4> Var0;
	
	Function_127(iParam0, 1);
	*uParam1 = 10;
	*uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_120(iParam3);
	}
	Function_330(fParam4, 0, 1);
	Function_123(iParam0, 0);
	if (!IS_STRING_VALID(iParam5))
	{
		iParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	Function_115(&Var0, CEIL(fParam4), iParam5);
	Function_131(iParam0, 4);
	Function_100();
}

int Function_330(float fParam0, int iParam1, bool bParam2) //Position: 0xAF7A / 44922
{
	if (!Function_277())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_333(8, fParam0);
	}
	Function_331(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_331(var uParam0, float fParam1, int iParam2) //Position: 0xAFAA / 44970
{
	Function_332(uParam0, CEIL(fParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_332(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0xAFC6 / 44998
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(iParam1));
	Function_76(iParam0, TO_FLOAT(iParam1), 1);
	Function_75(iParam0);
	if (uParam2 && iParam1 == 0)
	{
		Function_64(iParam0, 1, TO_FLOAT(iParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_333(var uParam0, float fParam1) //Position: 0xB1E6 / 45542
{
	Function_267(uParam0, (Function_97(uParam0) + fParam1));
	return;
}

void Function_334(bool bParam0) //Position: 0xB1F9 / 45561
{
	Function_337(bParam0);
	return;
}

void Function_335(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8) //Position: 0xB204 / 45572
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(uParam7))
	{
		iParam7 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	Function_115(&Var0, CEIL(fParam4), iParam7);
	*uParam1 = iParam2;
	if (bParam8)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_93(iParam0), 0.0f, 0, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_93(iParam0), (TO_FLOAT(Global_50170[iParam022].f_28) / TO_FLOAT(iParam6)), 0, 0);
	}
	Function_132(iParam0, iParam6, CEIL(fParam5), 0);
	if (iParam3 != 4294967295)
	{
		Function_120(iParam3);
	}
	Function_131(iParam0, 4);
	Function_100();
}

int Function_336(bool bParam0) //Position: 0xB294 / 45716
{
	if (bParam0)
	{
		return "MP_KillStreak_Icon";
	}
	return "MP_KillStreak_Icon_128";
}

void Function_337(int iParam0) //Position: 0xB2D1 / 45777
{
	Function_338(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_338(int iParam0, int iParam1, int iParam2) //Position: 0xB2E7 / 45799
{
	char* cVar0[16];
	var uVar4;
	
	strcpy(&cVar0, INT_TO_STRING(iParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(iParam1), 16);
	uVar4 = Function_128();
	if (IS_LAYOUTREF_VALID(uVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, iParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_339() //Position: 0xB35C / 45916
{
	if (!Local_518.f_148)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(79))
		{
			AWARD_ACHIEVEMENT(79);
		}
	}
	return;
}

void Function_340(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0xB37A / 45946
{
	int iVar0;
	int iVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(252);
			if (DECOR_GET_INT(Function_50(), "AD_Instance") == 3)
			{
				if (Function_343(252, 1) <= 0)
				{
					Function_338(252, 1, 0);
				}
				if (IntToFloat(Function_343(252, 1)) > fParam3)
				{
					iVar1 = (CEIL(fParam3) - Function_343(252, 1));
				}
				Function_338(252, 1, CEIL(fParam3));
				Global_50170[25222].f_28 = (Global_50170[25222].f_28 + iVar1);
				iVar0 = Global_50170[25222].f_28;
			}
			if (IntToFloat(iVar0) <= 2700.0f)
			{
				*uParam2 = 0.0f;
				Function_335(252, uParam1, 1, 7054, 50.0f, 150.0f, (CEIL(2700.0f) / 60), Function_342(0), 1);
				Function_127(252, 1);
				Function_334(252);
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / 2700.0f);
				if (Function_341(252, *uParam2))
				{
					Function_89(252, *uParam2, 0, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_334(252);
			if (Function_343(252, 1) <= 0)
			{
				Function_338(252, 1, 0);
			}
			if (DECOR_GET_INT(Function_50(), "AD_Instance") == 4)
			{
				if (IntToFloat(Function_343(252, 1)) > fParam3)
				{
					iVar1 = (CEIL(fParam3) - Function_343(252, 1));
				}
				Function_338(252, 1, CEIL(fParam3));
				Global_50170[25222].f_28 = (Global_50170[25222].f_28 + iVar1);
				iVar0 = Global_50170[25222].f_28;
			}
			if (IntToFloat(iVar0) <= 2700.0f)
			{
				*uParam2 = 0.0f;
				Function_329(252, uParam1, uParam0, 7055, 150.0f, Function_342(0));
				Function_127(252, 1);
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / 2700.0f);
				if (Function_341(252, *uParam2))
				{
					Function_89(252, *uParam2, 0, iVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
}

bool Function_341(int iParam0, float fParam1) //Position: 0xB545 / 46405
{
	if (fParam1 <= 0.8f)
	{
		if (Function_343(iParam0, 6) != 1)
		{
			Function_338(iParam0, 6, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.6f)
	{
		if (Function_343(iParam0, 5) != 1)
		{
			Function_338(iParam0, 5, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.5f)
	{
		if (Function_343(iParam0, 4) != 1)
		{
			Function_338(iParam0, 4, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.4f)
	{
		if (Function_343(iParam0, 3) != 1)
		{
			Function_338(iParam0, 3, 1);
			return 1;
		}
	}
	if (fParam1 <= 0.2f)
	{
		if (Function_343(iParam0, 2) != 1)
		{
			Function_338(iParam0, 2, 1);
			return 1;
		}
	}
	return 0;
}

int Function_342(bool bParam0) //Position: 0xB5F3 / 46579
{
	if (bParam0)
	{
		return "timeAttacking_64";
	}
	return "timeAttacking_128";
}

int Function_343(int iParam0, int iParam1) //Position: 0xB629 / 46633
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(iParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(iParam1), 16);
	bVar4 = Function_128();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_INT(bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("PVP_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_344(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0xB6B5 / 46773
{
	int iVar0;
	int iVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(248);
			if (Function_343(248, 1) <= 0)
			{
				Function_338(248, 1, 0);
			}
			if (DECOR_GET_INT(Function_50(), "AD_Instance") == 1)
			{
				if (IntToFloat(Function_343(248, 1)) > fParam3)
				{
					iVar1 = (CEIL(fParam3) - Function_343(248, 1));
				}
				Function_338(248, 1, CEIL(fParam3));
				Global_50170[24822].f_28 = (Global_50170[24822].f_28 + iVar1);
				iVar0 = Global_50170[24822].f_28;
			}
			if (IntToFloat(iVar0) <= 2700.0f)
			{
				*uParam2 = 0.0f;
				Function_335(248, uParam1, 1, 7052, 50.0f, 150.0f, (CEIL(2700.0f) / 60), Function_345(0), 1);
				Function_127(248, 1);
				Function_334(248);
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / 2700.0f);
				if (Function_341(248, *uParam2))
				{
					Function_89(248, *uParam2, 0, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_334(248);
			if (Function_343(248, 1) <= 0)
			{
				Function_338(248, 1, 0);
			}
			if (DECOR_GET_INT(Function_50(), "AD_Instance") == 2)
			{
				if (IntToFloat(Function_343(248, 1)) > fParam3)
				{
					iVar1 = (CEIL(fParam3) - Function_343(248, 1));
				}
				Function_338(248, 1, CEIL(fParam3));
				Global_50170[24822].f_28 = (Global_50170[24822].f_28 + iVar1);
				iVar0 = Global_50170[24822].f_28;
			}
			if (IntToFloat(iVar0) <= 2700.0f)
			{
				*uParam2 = 0.0f;
				Function_329(248, uParam1, uParam0, 7053, 150.0f, Function_345(0));
				Function_127(248, 1);
			}
			else
			{
				*uParam2 = (TO_FLOAT(iVar0) / 2700.0f);
				if (Function_341(248, *uParam2))
				{
					Function_89(248, *uParam2, 0, iVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
}

int Function_345(bool bParam0) //Position: 0xB880 / 47232
{
	if (bParam0)
	{
		return "timeAttacking_64";
	}
	return "timeAttacking_128";
}

float Function_346(bool bParam0) //Position: 0xB8B6 / 47286
{
	if (Function_356(bParam0))
	{
		if (Function_347(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_347(bool bParam0) //Position: 0xB97E / 47486
{
	return Function_33(*bParam0, 2);
}

void Function_348(int iParam0) //Position: 0xB98B / 47499
{
	Function_349(iParam0, 0.0f);
	return;
}

void Function_349(bool bParam0, float fParam1) //Position: 0xB997 / 47511
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_31(bParam0, 1);
	Function_30(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

int Function_350() //Position: 0xB9B8 / 47544
{
	return Function_351(11);
}

int Function_351(int iParam0) //Position: 0xB9C3 / 47555
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_352(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xB9DC / 47580
{
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(250);
			if (iParam3 < 5)
			{
				*uParam2 = 0.0f;
				Function_335(250, uParam1, 1, 7056, 50.0f, 150.0f, 4, Function_353(0), 1);
				Function_334(250);
			}
			break;
		
		case 0x00000001:
			Function_334(250);
			if (iParam3 < 4)
			{
				*uParam2 = 0.0f;
				Function_335(250, uParam1, 2, 7057, 150.0f, 200.0f, 3, Function_353(0), 1);
				Function_334(250);
			}
			break;
		
		case 0x00000002:
			Function_334(250);
			if (iParam3 < 3)
			{
				*uParam2 = 0.0f;
				Function_329(250, uParam1, uParam0, 7058, 200.0f, Function_353(0));
			}
			break;
	}
}

var Function_353(bool bParam0) //Position: 0xBA89 / 47753
{
	if (bParam0)
	{
		return "hardToKill_64";
	}
	return "hardToKill_128";
}

int Function_354() //Position: 0xBAB9 / 47801
{
	return Function_351(12);
}

void Function_355(bool bParam0) //Position: 0xBAC4 / 47812
{
	if (Function_356(bParam0))
	{
		if (!Function_347(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_31(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_356(bool bParam0) //Position: 0xBB83 / 48003
{
	return Function_33(*bParam0, 1);
}

void Function_357() //Position: 0xBB90 / 48016
{
	DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MP_SHOWDOWN2", &Local_282 + 912);
	Function_360();
	Function_358(1);
	SET_HUD_MAP_DRAW_ENABLED(0);
	UI_EXIT("WeaponAmmo");
	UI_EXCLUDE("WeaponAmmo");
	Function_6();
	if (!Function_44(2048))
	{
		Function_276(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	if (Local_282.f_200 != 8 && Function_33((&Local_282 + 200)->f_48, 4096))
	{
		UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
	}
	Local_282.f_648 = 0.0f;
	Local_282.f_868 = GET_CURRENT_GAME_TIME();
	Function_5();
	Function_23(&Local_282 + 712, 0);
	if (StackVal != Local_282.f_644)
	{
		Function_286();
	}
	Function_285();
	return;
}

void Function_358(bool bParam0) //Position: 0xBC73 / 48243
{
	var uVar0;
	var uVar1;
	
	Function_359();
	UI_POP("OL_NetworkingMenu");
	if (Function_424())
	{
		uVar1 = "showdown_your_team";
	}
	else
	{
		uVar1 = "showdown_their_team";
	}
	uVar1 = uVar1;
	if (Local_518.f_144 == 0)
	{
		if (Function_424())
		{
			if (bParam0)
			{
				uVar0 = "Mode_DLC_Halftime_AttWin";
			}
			else
			{
				uVar0 = "Mode_DLC_End_AttWin";
			}
		}
		else if (bParam0)
		{
			uVar0 = "Mode_DLC_Halftime_DefLost";
		}
		else
		{
			uVar0 = "Mode_DLC_End_DefLost";
		}
	}
	else
	{
		if (Local_518.f_144 == 1)
		{
		}
		if (Function_424())
		{
			if (bParam0)
			{
				uVar0 = "Mode_DLC_Halftime_AttLost";
			}
			else
			{
				uVar0 = "Mode_DLC_End_AttLost";
			}
		}
		else if (bParam0)
		{
			uVar0 = "Mode_DLC_Halftime_DefWin";
		}
		else
		{
			uVar0 = "Mode_DLC_End_DefWin";
		}
	}
	Function_291(uVar0, 0);
	return;
}

void Function_359() //Position: 0xBDF4 / 48628
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_360() //Position: 0xBE06 / 48646
{
	UI_ENTER("HudMPNoFun");
	Function_361(Function_364(), Function_363(), Function_362());
	PLAY_SOUND_FRONTEND("HUD_MP_OVERTIME_WIN_MASTER");
	return;
}

void Function_361(char* cParam0, char* cParam1, int iParam2) //Position: 0xBE48 / 48712
{
	UI_SET_TEXT("MPSplashItem.s0", uParam0);
	UI_SET_TEXT("MPSplashItem.s1", uParam1);
	UI_SET_STYLE("MPSplashTitle", iParam2);
	UI_ENTER("MPSplash");
	return;
}

int Function_362() //Position: 0xBE9F / 48799
{
	if (Local_518.f_144 == 0)
	{
		if (Function_424())
		{
			return 64;
		}
		return 63;
	}
	if (Local_518.f_144 == 1)
	{
		if (Function_424())
		{
			return 63;
		}
		return 64;
	}
	if (Function_424())
	{
		return 63;
	}
	return 64;
	return 64;
}

var Function_363() //Position: 0xBEEC / 48876
{
	if (Local_518.f_144 == 0)
	{
		if (Function_424())
		{
			return "AE_EOR_ATK_OBJ";
		}
		return "AE_EOR_DEF_OBJ";
	}
	if (Local_518.f_144 == 1)
	{
		if (Function_424())
		{
			return "AE_EOR_ATK_TIME";
		}
		return "AE_EOR_DEF_TIME";
	}
	if (Function_424())
	{
		return "AE_EOR_ATK_LIVES";
	}
	return "AE_EOR_DEF_LIVES";
	return " ";
}

var Function_364() //Position: 0xBF9B / 49051
{
	if (Local_518.f_144 == 0)
	{
		if (Function_424())
		{
			return "AD_EOR_Captured";
		}
		return "AD_EOR_Overrun";
	}
	if (Function_424())
	{
		return "AD_EOR_Blocked";
	}
	return "AD_EOR_Success";
	return " ";
}

void Function_365(bool bParam0, bool bParam1) //Position: 0xC017 / 49175
{
	int iVar0;
	
	if (bParam0)
	{
		if (bParam1)
		{
			if (Local_518.f_60 > 5 && !Local_282.f_900)
			{
				Function_291("Mode_DLC_RuningOutLives", 0);
				Local_282.f_900 = 1;
			}
			if (Function_164(&Global_78578 + 96))
			{
				if ((Function_159(&Global_78578 + 96) >= 120.0f && !Function_163(&Global_78578 + 96)) && !Local_282.f_904)
				{
					Function_291("Mode_DLC_TimeRuningOut", 0);
					Local_282.f_904 = 1;
				}
			}
		}
	}
	else if (Local_282.f_200 == 8)
	{
		if (Function_33((&Local_282 + 200)->f_48, 4096))
		{
			if ((&Local_282 + 200)->f_56 == 4294967295)
			{
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_ENTER("MPSplash");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				UI_SET_STYLE("MPSplashTitle", 10);
				(&Local_282 + 200)->f_56 = 4294967294;
			}
			else
			{
				iVar0 = CEIL((10.0f - (&Local_282 + 200)->f_64));
				if ((&Local_282 + 200)->f_56 != iVar0)
				{
					(&Local_282 + 200)->f_56 = iVar0;
					if (((iVar0 < 0 && iVar0 >= 5) && !Function_527()) && bParam1)
					{
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("AD_respawn"), I2STR(iVar0), 0, 0);
						UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
						PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
					}
					else
					{
						UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
					}
					UI_REFRESH("MPSplashItem.s1");
				}
			}
			if ((&Local_282 + 200)->f_64 < 10.0f)
			{
				Function_370(&Local_282 + 200, 0);
			}
		}
	}
	if (StackVal != 0)
	{
		switch (StackVal)
		{
			case 0x00000001:
				Function_369(bParam1);
				break;
			
			case 0x00000002:
				Function_367();
				break;
		}
		Function_366(bParam0);
	}
	else
	{
		Function_287(0);
		Function_6();
	}
	return;
}

void Function_366(bool bParam0) //Position: 0xC2C7 / 49863
{
	if (!Local_282.f_892)
	{
		if (Function_307(StackVal))
		{
			if (bParam0)
			{
				_SET_MELEE_MARKER_COLOR(vLocal_271, 0.75f);
			}
			else
			{
				_SET_MELEE_MARKER_COLOR(vLocal_274, 0.75f);
			}
			_SET_MELEE_MARKER_STROBE_INTENSITY(1.0f);
			if (IS_OBJECT_VALID(Local_282.f_652))
			{
				SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(Local_282.f_652), 1, 1, 3600.0f);
			}
			Local_282.f_892 = 1;
			if (!Local_282.f_940)
			{
				if (!IS_SOUND_ID_VALID(Local_282.f_852))
				{
					Local_282.f_852 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND_PERSISTENT(Local_282.f_852, "STRONG_HOLD_MASTER");
				}
				Local_282.f_940 = 1;
			}
		}
	}
	else if (!Function_307(StackVal))
	{
		_SET_MELEE_MARKER_COLOR(vLocal_277, 0.75f);
		_SET_MELEE_MARKER_STROBE_INTENSITY(0.0f);
		if (Local_282.f_940 == 1)
		{
			Function_6();
			Local_282.f_940 = 0;
		}
		if (IS_OBJECT_VALID(Local_282.f_652))
		{
			SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(Local_282.f_652), 0, 1, 1.0f);
		}
		Local_282.f_892 = 0;
	}
	return;
}

void Function_367() //Position: 0xC3C9 / 50121
{
	if (StackVal != Local_282.f_644)
	{
		Function_286();
	}
	if (StackVal || StackVal >= 0 < 5)
	{
		return;
	}
	if (Function_368(StackVal))
	{
		Function_287(StackVal);
	}
	else
	{
		Function_287(0);
	}
	return;
}

bool Function_368(int iParam0) //Position: 0xC40D / 50189
{
	int iVar0;
	
	iVar0 = Function_7();
	if (!Function_202(iVar0, 8))
	{
		Local_282.f_936 = 0;
		return 0;
	}
	if (GET_CURRENT_GRINGO(iVar0) != GET_GRINGO_FROM_OBJECT(Local_282[iParam08].f_24))
	{
		Local_282.f_936 = 0;
		return 0;
	}
	if (DECOR_CHECK_EXIST(iVar0, "nIsPicking"))
	{
		Local_282.f_936 = 5;
		return 1;
	}
	if (Local_282.f_936 >= 0)
	{
		Local_282.f_936 = (Local_282.f_936 - 1);
		return 1;
	}
	return 0;
}

void Function_369(bool bParam0) //Position: 0xC484 / 50308
{
	int iVar0;
	
	if (StackVal != Local_282.f_644)
	{
		Function_286();
	}
	if (!bParam0)
	{
		Function_287(0);
		return;
	}
	iVar0 = Function_7();
	if (!Function_202(iVar0, 8))
	{
		Function_287(0);
		return;
	}
	if (StackVal || StackVal >= 0 < 5)
	{
		return;
	}
	if (IS_ACTOR_IN_VOLUME(StackVal, Local_282[iVar08]))
	{
		Function_287(StackVal);
	}
	else
	{
		Function_287(0);
	}
	return;
}

void Function_370(int iParam0, bool bParam1) //Position: 0xC4EF / 50415
{
	if (bParam1)
	{
		Function_31(iParam0 + 44, 2);
	}
	else
	{
		Function_30(iParam0 + 44, 2);
	}
	return;
}

void Function_371(var uParam0) //Position: 0xC50D / 50445
{
	*uParam0 = 1;
	return;
}

void Function_372() //Position: 0xC517 / 50455
{
	int iVar0;
	
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 1;
	while (iVar0 < Local_282.f_640)
	{
		switch (StackVal)
		{
			case 0x00000001:
				Function_373(iVar0);
				break;
			
			case 0x00000002:
				Function_313(StackVal, iVar0, 0);
				break;
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_373(int iParam0) //Position: 0xC56F / 50543
{
	vector3 vVar0;
	var uVar3;
	var uVar7;
	vector3 vVar8;
	
	Function_222(Local_282[iParam08]);
	vVar0 = { StackVal, StackVal, Function_222(Local_282[iParam08]) };
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_3("WorldMarker_", I2STR(iParam0)), 4);
	if (!IS_OBJECT_VALID(Local_282[iParam08].f_20))
	{
		uVar7 = GET_VOLUME_HEADING(Local_282[iParam08]);
		vVar8 = { -0.2f, 0.0f, 0.2f };
		ROTATE_VECTOR_XZ(&vVar8, uVar7, 0);
		Local_282[iParam08].f_20 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(&uVar3, Function_50(), StackVal) + Vector(vVar8, vVar0, "p_gen_fpole01x"), 0.0f, fVar7, 0.0f, 1);
	}
	Function_292(StackVal, iParam0, 0);
	return;
}

void Function_374() //Position: 0xC60E / 50702
{
	Function_30(&Local_282 + 200 + 44, 512);
	Function_30(&Local_282 + 200 + 48, 8);
	Function_326(&Local_282 + 200, 0);
	Function_370(&Local_282 + 200, 0);
	return;
}

void Function_375() //Position: 0xC63F / 50751
{
	DESTROY_OBJECT(Function_25());
	UI_EXIT("MPSplash");
	UI_EXIT("HudMPNoFun");
	UI_INCLUDE("WeaponAmmo");
	UI_ENTER("WeaponAmmo");
	Function_376(5);
	Function_398(0, 0);
	DECOR_REMOVE(Function_50(), "__StreamingComplete");
	return;
}

void Function_376(int iParam0) //Position: 0xC6AF / 50863
{
	Function_40(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_377(int iParam0) //Position: 0xC6C1 / 50881
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 == iVar1 && Function_382(iVar0))
		{
			if (Function_378(iVar0) == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_378(int iParam0) //Position: 0xC6FA / 50938
{
	int iVar0;
	
	Function_381(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_21(&iVar0);
	}
	else
	{
		Function_380(&iVar0, iParam0);
	}
	return Function_379(&iVar0);
}

int Function_379(int iParam0) //Position: 0xC721 / 50977
{
	return *iParam0;
}

void Function_380(var uParam0, int iParam1) //Position: 0xC72A / 50986
{
	*uParam0 = StackVal;
	return;
}

void Function_381(int iParam0) //Position: 0xC73C / 51004
{
	Function_19(iParam0, 4294967286);
	return;
}

bool Function_382(bool bParam0) //Position: 0xC74A / 51018
{
	if (IS_SLOT_VALID(iParam0))
	{
		if (Function_145(bParam0))
		{
			if (Function_142(bParam0, 2048, 1))
			{
				return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_556, bParam0);
			}
		}
	}
	return 0;
}

var Function_383() //Position: 0xC776 / 51062
{
	return CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(Function_25()) != 1;
}

void Function_384() //Position: 0xC784 / 51076
{
	int iVar0;
	
	iVar0 = (RAND_INT_RANGE(0, 1000) % 6);
	switch (iVar0)
	{
		case 0x00000001:
			Function_390();
			break;
		
		case 0x00000002:
			Function_389();
			break;
		
		case 0x00000003:
			Function_388();
			break;
		
		case 0x00000004:
			Function_387();
			break;
		
		case 0x00000005:
			Function_386();
			break;
		
		case 0x00000000:
			Function_385();
			break;
	}
	return;
}

void Function_385() //Position: 0xC7E4 / 51172
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v6_AA", "ModeP_INTROS_DEF_v6_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v6_AB", "ModeP_INTROS_DEF_v6_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v6_AC", "ModeP_INTROS_DEF_v6_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v6_AD", "ModeP_INTROS_DEF_v6_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_386() //Position: 0xC912 / 51474
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v5_AA", "ModeP_INTROS_DEF_v5_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v5_AB", "ModeP_INTROS_DEF_v5_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v5_AC", "ModeP_INTROS_DEF_v5_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_387() //Position: 0xCA05 / 51717
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v4_AA", "ModeP_INTROS_DEF_v4_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v4_AB", "ModeP_INTROS_DEF_v4_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v4_AC", "ModeP_INTROS_DEF_v4_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_388() //Position: 0xCAF8 / 51960
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v3_AA", "ModeP_INTROS_DEF_v3_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v3_AB", "ModeP_INTROS_DEF_v3_AB", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_389() //Position: 0xCBB0 / 52144
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v2_AA", "ModeP_INTROS_DEF_v2_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v2_AB", "ModeP_INTROS_DEF_v2_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v2_AC", "ModeP_INTROS_DEF_v2_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_390() //Position: 0xCCA3 / 52387
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v1_AA", "ModeP_INTROS_DEF_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v1_AB", "ModeP_INTROS_DEF_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_DEF_v1_AC", "ModeP_INTROS_DEF_v1_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_391() //Position: 0xCD96 / 52630
{
	int iVar0;
	
	iVar0 = (RAND_INT_RANGE(0, 1000) % 6);
	switch (iVar0)
	{
		case 0x00000001:
			Function_397();
			break;
		
		case 0x00000002:
			Function_396();
			break;
		
		case 0x00000003:
			Function_395();
			break;
		
		case 0x00000004:
			Function_394();
			break;
		
		case 0x00000005:
			Function_393();
			break;
		
		case 0x00000000:
			Function_392();
			break;
	}
	return;
}

void Function_392() //Position: 0xCDF6 / 52726
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v6_AA", "ModeP_INTROS_Attkr_v6_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v6_AB", "ModeP_INTROS_Attkr_v6_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v6_AC", "ModeP_INTROS_Attkr_v6_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v6_AD", "ModeP_INTROS_Attkr_v6_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_393() //Position: 0xCF34 / 53044
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v5_AA", "ModeP_INTROS_Attkr_v5_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v5_AB", "ModeP_INTROS_Attkr_v5_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v5_AC", "ModeP_INTROS_Attkr_v5_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v5_AD", "ModeP_INTROS_Attkr_v5_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_394() //Position: 0xD072 / 53362
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v4_AA", "ModeP_INTROS_Attkr_v4_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v4_AB", "ModeP_INTROS_Attkr_v4_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v4_AC", "ModeP_INTROS_Attkr_v4_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v4_AD", "ModeP_INTROS_Attkr_v4_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_395() //Position: 0xD1B0 / 53680
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v3_AA", "ModeP_INTROS_Attkr_v3_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v3_AB", "ModeP_INTROS_Attkr_v3_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v3_AC", "ModeP_INTROS_Attkr_v3_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v3_AD", "ModeP_INTROS_Attkr_v3_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_396() //Position: 0xD2EE / 53998
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v2_AA", "ModeP_INTROS_Attkr_v2_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v2_AB", "ModeP_INTROS_Attkr_v2_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v2_AC", "ModeP_INTROS_Attkr_v2_AC", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_397() //Position: 0xD3ED / 54253
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1000", "", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v1_AA", "ModeP_INTROS_Attkr_v1_AA", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v1_AB", "ModeP_INTROS_Attkr_v1_AB", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v1_AC", "ModeP_INTROS_Attkr_v1_AC", 0, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "ModeP_INTROS_Attkr_v1_AD", "ModeP_INTROS_Attkr_v1_AD", 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_398(int iParam0, int iParam1) //Position: 0xD52B / 54571
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_399() //Position: 0xD54C / 54604
{
	DECOR_SET_BOOL(Function_50(), "__StreamingComplete", 1);
	SET_HUD_MAP_DRAW_ENABLED(0);
	UI_ENTER("HudMPNoFun");
	UI_EXIT("WeaponAmmo");
	UI_EXCLUDE("WeaponAmmo");
	Function_359();
	Function_400(5);
	return;
}

void Function_400(int iParam0) //Position: 0xD5AB / 54699
{
	Function_85(&Global_83864 + 1252, iParam0);
	return;
}

bool Function_401(int iParam0, bool bParam1, float fParam2) //Position: 0xD5BD / 54717
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_409(iParam0);
	}
	Function_20(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_13(&Var0);
	}
	if (Function_408(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_407(&Var0, 0);
		Function_13(&Var0);
		Function_15();
		NET_LOG(1, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(iParam0), 0);
		return 1;
	}
	if (Function_406(iParam0, iVar6, &uVar7))
	{
		if (Function_405())
		{
			if (!Function_404(&Var0))
			{
				Var8 = iParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_403(&Var0, 1);
				Function_13(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_13(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_402(iParam0))
				{
					NET_LOG(1, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var11 = GET_LOCAL_SLOT();
					Var11.f_4 = fVar5;
					NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_13(&Var0);
	}
	return 0;
}

bool Function_402(int iParam0) //Position: 0xD810 / 55312
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_382(iVar0))
		{
			iVar1 = Function_378(iVar0);
			if (iVar1 == iParam0)
			{
				if (iVar0 == iVar2)
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

void Function_403(bool bParam0, bool bParam1) //Position: 0xD853 / 55379
{
	if (bParam1)
	{
		Function_31(bParam0, 2);
	}
	else
	{
		Function_30(bParam0, 2);
	}
	return;
}

bool Function_404(bool bParam0) //Position: 0xD86D / 55405
{
	return Function_33(*bParam0, 2);
}

bool Function_405() //Position: 0xD87A / 55418
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_406(int iParam0, var uParam1, int iParam2) //Position: 0xD898 / 55448
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
		if (Function_382(iVar0))
		{
			iVar1 = Function_378(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_407(bool bParam0, bool bParam1) //Position: 0xD8E9 / 55529
{
	if (bParam1)
	{
		Function_31(bParam0, 1);
	}
	else
	{
		Function_30(bParam0, 1);
	}
	return;
}

bool Function_408(int iParam0) //Position: 0xD903 / 55555
{
	return Function_33(*iParam0, 1);
}

void Function_409(int iParam0) //Position: 0xD910 / 55568
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar23;
	
	iVar0 = iParam0;
	Function_21(&iVar1);
	if (Function_379(&iVar1) != iVar0)
	{
		Function_20(&Var2);
		if (iVar0 == 4294967286)
		{
		}
		else if (StackVal == iVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(iVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_33(Var2, 4))
			{
			}
		}
		iVar23 = GET_LOCAL_SLOT();
		NET_LOG(1, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(iVar23), I2STR(iVar23), I2STR(iVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_16(iVar0);
		Function_403(&Var2, 0);
		Function_13(&Var2);
	}
	return;
}

void Function_410(int iParam0) //Position: 0xDA0D / 55821
{
	if ((iParam0 % 10) == 0)
	{
		return;
	}
	NET_LOG(1, "nAD Client", "----> Moving to %s", Function_411(iParam0), 0, 0, 0);
	Local_282.f_632 = iParam0;
	return;
}

var Function_411(int iParam0) //Position: 0xDA52 / 55890
{
	switch (iParam0)
	{
		case 0x00000001:
			return "AD_GS_INITIAL_CUTSCENE_STREAMING";
		
		case 0x00000002:
			return "AD_GS_INITIAL_CUTSCENE_LOCKSTEPPING";
		
		case 0x00000003:
			return "AD_GS_INITIAL_CUTSCENE_RUNNING";
		
		case 0x00000004:
			return "AD_GS_INITIAL_CUTSCENE_PLAYING_CATCHUP";
		
		case 0x00000005:
			return "AD_GS_INITIAL_CUTSCENE_FADING";
		
		case 0x0000000A:
			return "AD_GS_PHASE_INITIAL_CUTSCENE";
		
		case 0x0000000B:
			return "AD_GS_FIRST_ATTACK";
		
		case 0x0000000C:
			return "AD_GS_FIRST_DEFEND";
		
		case 0x00000014:
			return "AD_GS_PHASE_TEAM0_ATTACKS";
		
		case 0x00000015:
			return "AD_GS_HALFTIME_MOP_UP_TIME";
		
		case 0x00000016:
			return "AD_GS_HALFTIME_CUTSCENE_STREAMING";
		
		case 0x00000017:
			return "AD_GS_HALFTIME_CUTSCENE_BREAKDOWN";
		
		case 0x00000018:
			return "AD_GS_HALFTIME_CUTSCENE_BREAKDOWN_RUNNING";
		
		case 0x00000019:
			return "AD_GS_HALFTIME_CUTSCENE_LOCKSTEPPING";
		
		case 0x0000001A:
			return "AD_GS_HALFTIME_CUTSCENE_RUNNING";
		
		case 0x0000001B:
			return "AD_GS_HALFTIME_CUTSCENE_PLAYING_CATCHUP";
		
		case 0x0000001C:
			return "AD_GS_HALFTIME_CUTSCENE_FADING";
		
		case 0x0000001E:
			return "AD_GS_PHASE_HALFTIME";
		
		case 0x0000001F:
			return "AD_GS_SECOND_ATTACK";
		
		case 0x00000020:
			return "AD_GS_SECOND_DEFEND";
		
		case 0x00000032:
			return "AD_GS_PHASE_TEAM1_ATTACKS";
		
		case 0x0000003C:
			return "AD_GS_PHASE_VICTORY_CUTSCENE";
		
		default:
	}
	return "UNKNOWN STATE";
}

void Function_412(bool bParam0) //Position: 0xDDC4 / 56772
{
	char* cVar0[32];
	struct<4> Var8;
	struct<4> Var12;
	
	memcpy(&cVar0, StackVal, StackVal, StackVal, Global_79349, 8);
	if (bParam0)
	{
		stradd(&cVar0, "_SUMMARY_A", 32);
	}
	else
	{
		stradd(&cVar0, "_SUMMARY_D", 32);
	}
	Function_419(&cVar0);
	Var8 = { StackVal, StackVal, StackVal, Function_415(Function_140(), 1) };
	Var12 = { StackVal, StackVal, StackVal, Function_415(Function_413(Function_140()), 1) };
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", "<blue>%s</blue>  %s  <red>%s</red>", UI_GET_STRING(&Var8), UI_GET_STRING("showdown_vs"), UI_GET_STRING(&Var12));
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_2");
	return;
}

int Function_413(int iParam0) //Position: 0xDEA4 / 56996
{
	if (iParam0 == 4294967295)
	{
		return 4294967295;
	}
	return Function_414(iParam0);
}

int Function_414(int iParam0) //Position: 0xDEB7 / 57015
{
	return (iParam0 + 1 % 2);
}

struct<16> Function_415(var uParam0, int iParam1) //Position: 0xDEC3 / 57027
{
	return StackVal, StackVal, StackVal, Function_416(Function_417(uParam0), iParam1);
}

struct<16> Function_416(int iParam0, bool bParam1) //Position: 0xDED5 / 57045
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(iParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_417(int iParam0) //Position: 0xDF0A / 57098
{
	if (!Function_418())
	{
		return 0;
	}
	return StackVal;
}

bool Function_418() //Position: 0xDF23 / 57123
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_419(char* cParam0) //Position: 0xDF30 / 57136
{
	UI_SET_TEXT("MPSplashItem.s0", uParam0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", 17);
	UI_ENTER("MPSplash");
	return;
}

bool Function_420() //Position: 0xDF93 / 57235
{
	return CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(Function_25()) != 13;
}

void Function_421() //Position: 0xDFA2 / 57250
{
	Function_422(&Local_282 + 200);
	Function_31(&Local_282 + 200 + 44, 512);
	Function_31(&Local_282 + 200 + 48, 4096);
	Function_29(32, 0, 1);
	return;
}

void Function_422(int iParam0) //Position: 0xDFD1 / 57297
{
	*iParam0 = 8;
	Function_370(iParam0, 1);
	return;
}

void Function_423(int iParam0, bool bParam1) //Position: 0xDFE2 / 57314
{
	if (bParam1)
	{
		Function_31(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_30(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

bool Function_424() //Position: 0xE00A / 57354
{
	return Function_33(Local_282.f_676, 4);
}

void Function_425(bool bParam0, var uParam1, bool bParam2) //Position: 0xE01A / 57370
{
	int iVar0;
	
	if (Function_162())
	{
		if (Function_164(bParam0))
		{
			iVar0 = CEIL(Function_159(bParam0));
			if (*uParam1 != iVar0)
			{
				*uParam1 = iVar0;
				if (!bParam2)
				{
					Function_431();
				}
			}
			if (!Function_429())
			{
				Function_427("mp_time_remaining_header");
				Function_426(Function_69(0, iVar0), iVar0 >= 5);
			}
			else
			{
				Function_427("mp_time_overtime_header");
				Function_426(ABS(iVar0), iVar0 < 4294967291);
			}
		}
	}
	return;
}

void Function_426(int iParam0, bool bParam1) //Position: 0xE0AE / 57518
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_29(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_29(65536, bParam1, 1);
	return;
}

void Function_427(char* cParam0) //Position: 0xE0DB / 57563
{
	if (Function_428(cParam0, &Global_76905))
	{
		Function_29(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_428(int iParam0, int iParam1) //Position: 0xE0FF / 57599
{
	if (IS_STRING_VALID(iParam0) != IS_STRING_VALID(iParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(iParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool Function_429() //Position: 0xE133 / 57651
{
	return Function_430() != 4294967290;
}

bool Function_430() //Position: 0xE140 / 57664
{
	if (!Function_418())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

void Function_431() //Position: 0xE155 / 57685
{
	if (Function_48(1048576))
	{
		Function_29(0x10000000, 1, 1);
	}
	Function_29(1048576, 0, 1);
	return;
}

int Function_432() //Position: 0xE178 / 57720
{
	bool bVar0;
	
	bVar0 = false;
	if (!Function_527())
	{
		if (GET_NUM_PLAYERS() < 1)
		{
			NET_LOG(1, "AD HOST", "\I'm the only player left in the session, quitting.  Transitioning to MPGTPS_ENDMATCH state.", 0, 0, 0, 0);
			Function_458(4294967293);
		}
		if (Function_457())
		{
			NET_LOG(1, "AD HOST", "Team DM has determined that there's only one team remaining, we're quitting.  Transitioning to MPGTPS_ENDMATCH state.", 0, 0, 0, 0);
			Function_458(4294967294);
		}
	}
	if (!Function_527())
	{
		switch (Local_518)
		{
			case 0x0000000A:
				if (Local_282.f_632 >= 10)
				{
					Function_456(20);
				}
				break;
			
			case 0x00000014:
				if (Function_445())
				{
					Function_444(&Global_78578 + 96);
					Local_518.f_56 = Function_159(&Global_78578 + 96);
					Local_518.f_64 = StackVal;
					Function_443(&Local_518 + 40, 15.0f);
					Function_442(&Local_518 + 12);
					Function_442(&Local_518 + 24);
					Local_518.f_36 = 0.0f;
					Function_456(30);
					Local_518.f_144 = 0;
					Local_518.f_4 = 0;
				}
				else if (!Function_164(&Global_78578 + 96))
				{
					NET_LOG(1, "AD HOST", "Timer starting with %ss left on the clock.", F2STR(Global_83591.f_16, 3, 1), 0, 0, 0);
					Function_439(&Global_78578 + 96, Global_83591.f_16);
					(*&Local_518 + 68[07])[0] = NET_GET_NET_TIME();
				}
				else if (Function_438(&Global_78578 + 96))
				{
					bVar0 = true;
					Local_518.f_144 = 1;
				}
				if (Local_518.f_60 < 0)
				{
					bVar0 = true;
					Local_518.f_144 = 2;
				}
				if (bVar0)
				{
					NET_LOG(1, "AD HOST", "Team 0 got slaughtered. No more lives or ran out of time.", 0, 0, 0, 0);
					Function_444(&Global_78578 + 96);
					Local_518.f_56 = Global_83591.f_16;
					Local_518.f_64 = StackVal;
					Function_456(30);
					Local_518.f_36 = 0.0f;
					Local_518.f_4 = 0;
				}
				break;
			
			case 0x0000001E:
				if (Local_282.f_632 >= 30)
				{
					Local_518.f_8 = 1;
					Local_518.f_4 = StackVal;
					Local_518.f_36 = 0.0f;
					Function_442(&Local_518 + 12);
					Local_518.f_60 = Function_435();
					Local_518.f_140 = Local_518.f_60;
					Local_518.f_148 = 0;
					Function_439(&Global_78578 + 96, Global_83591.f_16);
					(*&Local_518 + 68[17])[0] = NET_GET_NET_TIME();
					Function_456(50);
				}
				break;
			
			case 0x00000032:
				if (Function_445())
				{
					Function_444(&Global_78578 + 96);
					NET_LOG(1, "AD HOST", "Team 1 up and won!", 0, 0, 0, 0);
					Local_518.f_144 = 0;
					if (StackVal == Local_518.f_64)
					{
						if (Function_159(&Global_78578 + 96) < Local_518.f_56)
						{
							Function_434(1);
						}
						else
						{
							Function_434(0);
						}
					}
					else
					{
						Function_434(1);
					}
					Local_518.f_4 = 0;
				}
				else if (!Function_164(&Global_78578 + 96))
				{
					Function_439(&Global_78578 + 96, Global_83591.f_16);
				}
				else if (Function_163(&Global_78578 + 96))
				{
					Function_439(&Global_78578 + 96, Global_83591.f_16);
				}
				else if (Function_438(&Global_78578 + 96))
				{
					NET_LOG(1, "AD HOST", "Team 1 took too long, meaning team 0 won!", 0, 0, 0, 0);
					Local_518.f_144 = 1;
					Local_518.f_4 = 0;
					Function_433();
				}
				if (Local_518.f_60 < 0)
				{
					NET_LOG(1, "AD HOST", "Team 1 got slaughtered. No more lives.", 0, 0, 0, 0);
					Local_518.f_144 = 2;
					Local_518.f_4 = 0;
					Function_433();
				}
				break;
			}
	}
	return 1;
}

void Function_433() //Position: 0xE621 / 58913
{
	if (StackVal == Local_518.f_64)
	{
		Function_434(4294967291);
	}
	else if (StackVal <= Local_518.f_64)
	{
		Function_434(1);
	}
	else
	{
		Function_434(0);
	}
	return;
}

void Function_434(int iParam0) //Position: 0xE655 / 58965
{
	int iVar0;
	
	if (Function_33(Local_282.f_676, 1))
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_458(iParam0);
		return;
	}
	Function_31(&Local_282 + 676, 1);
	iVar0 = iParam0;
	NET_SCRIPTMSG_SEND(2, 5, &iVar0, 1, 1);
	return;
}

var Function_435() //Position: 0xE68D / 59021
{
	return ((Function_437() / 8) * Function_436(0));
}

int Function_436(bool bParam0) //Position: 0xE69E / 59038
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			if (bParam0)
			{
				if (!Function_304(Function_141(bVar0, 1, 0)))
				{
					bVar1++;
				}
			}
			else if (Function_304(Function_141(bVar0, 1, 0)))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

int Function_437() //Position: 0xE6F6 / 59126
{
	return Function_26(1);
}

bool Function_438(bool bParam0) //Position: 0xE700 / 59136
{
	if (Function_164(bParam0))
	{
		if (Function_159(bParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_439(var uParam0, float fParam1) //Position: 0xE71B / 59163
{
	Function_440(uParam0, -fParam1);
	return;
}

void Function_440(var uParam0, float fParam1) //Position: 0xE729 / 59177
{
	Function_161();
	Function_441(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_441(var uParam0, int iParam1) //Position: 0xE73D / 59197
{
	uParam0->f_4 = iParam1;
	Function_31(uParam0, 1);
	Function_30(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_442(int iParam0) //Position: 0xE75A / 59226
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_443(bool bParam0, int iParam1) //Position: 0xE76E / 59246
{
	if (!Function_164(bParam0))
	{
		Function_439(bParam0, iParam1);
	}
	return;
}

void Function_444(bool bParam0) //Position: 0xE784 / 59268
{
	if (Function_164(bParam0))
	{
		if (!Function_163(bParam0))
		{
			Function_161();
			bParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_31(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_445() //Position: 0xE84C / 59468
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
			if (Function_451())
			{
				NET_LOG(StackVal, 1, "AD HOST", I2STR("Attacking Team succeeded in capturing point # %s"), 0, 0, 0);
				Function_450(StackVal, StackVal);
				bVar0 = true;
			}
			break;
		
		default:
			break;
	}
	if (bVar0)
	{
		iVar1 = 0;
		if (Local_518 == 50)
		{
			iVar1 = 1;
		}
		iVar2 = StackVal;
		(*&Local_518 + 68[iVar17])[iVar2] = NET_GET_NET_TIME();
		NET_LOG(StackVal, 1, "AD HOST", I2STR("Stage %s captured at %s by team %s "), F2STR((*&Local_518 + 68[iVar17])[iVar2], 4, 2), I2STR(iVar1), 0);
		if (Function_449())
		{
			Local_518.f_8 = StackVal + 1;
			return 1;
		}
		Function_446();
	}
	return 0;
}

void Function_446() //Position: 0xE969 / 59753
{
	Local_518.f_60 = (Local_518.f_60 + Function_447());
	Local_518.f_140 = Local_518.f_60;
	(&Global_78578 + 96)->f_4 = (StackVal + Local_282[StackVal8].f_28);
	Local_518.f_8 = StackVal + 1;
	Local_518.f_148 = 1;
	Local_518.f_36 = 0.0f;
	return;
}

int Function_447() //Position: 0xE9BC / 59836
{
	return ((Function_448() / 8) * Function_436(0));
}

int Function_448() //Position: 0xE9CD / 59853
{
	return Function_26(2);
}

bool Function_449() //Position: 0xE9D7 / 59863
{
	switch (StackVal)
	{
		case 0x00000003:
			Local_518.f_4 = 0;
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000001:
			break;
	}
	Local_518.f_4 = StackVal;
	return 0;
}

void Function_450(var uParam0, int iParam1) //Position: 0xEA22 / 59938
{
	struct<9> Var0;
	
	vVar0.y = iParam1;
	vVar0.z = uParam0;
	iVar3 = 0;
	while (iVar3 <= 16)
	{
		if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_556, iVar3))
		{
			if (Local_556[bVar34].f_12 == iParam1)
			{
				Function_31(&vVar0, Function_122(bVar3));
			}
		}
		bVar3++;
	}
	NET_SCRIPTMSG_SEND(3, 100, &vVar0, 3, 1);
	return;
}

bool Function_451() //Position: 0xEA75 / 60021
{
	if (Function_307(StackVal))
	{
		if (StackVal == 2)
		{
			if (!Function_164(&Local_518 + 12))
			{
				Function_455(&Local_518 + 12);
				Function_442(&Local_518 + 24);
			}
			else if (Function_163(&Local_518 + 12))
			{
				Function_454(&Local_518 + 12);
				Function_442(&Local_518 + 24);
			}
			else if (Function_164(&Local_518 + 24))
			{
				Function_440(&Local_518 + 12, Function_159(&Local_518 + 24));
				Function_442(&Local_518 + 24);
			}
			else if (Function_453(&Local_518 + 12, Function_302()))
			{
				Function_442(&Local_518 + 24);
				Function_442(&Local_518 + 12);
				return 1;
			}
		}
		if (!Function_164(&Local_518 + 12))
		{
			Function_455(&Local_518 + 12);
		}
		else if (Function_453(&Local_518 + 12, Function_302()))
		{
			Function_442(&Local_518 + 12);
			Local_518.f_36 = (Local_518.f_36 + fLocal_268);
		}
		if (Local_518.f_36 < fLocal_267)
		{
			Function_442(&Local_518 + 12);
			Function_442(&Local_518 + 24);
			Local_518.f_36 = 0.0f;
			return 1;
		}
	}
	if (StackVal == 2)
	{
		if (Function_164(&Local_518 + 12))
		{
			if (Function_33(Local_518.f_52, 1))
			{
				Function_444(&Local_518 + 12);
			}
			else if (!Function_164(&Local_518 + 24))
			{
				Function_443(&Local_518 + 24, Function_160(&Local_518 + 12));
			}
			else if (Function_452(&Local_518 + 24))
			{
				Function_442(&Local_518 + 12);
			}
		}
	}
	else if (!Function_164(&Local_518 + 12))
	{
		Function_455(&Local_518 + 12);
	}
	else if (Function_453(&Local_518 + 12, Function_302()))
	{
		Function_442(&Local_518 + 12);
		if (Local_518.f_36 < 0.0f)
		{
			Local_518.f_36 = (Local_518.f_36 - fLocal_269);
		}
		else if (Local_518.f_36 > 0.0f)
		{
			Local_518.f_36 = 0.0f;
		}
	}
	return 0;
}

bool Function_452(int iParam0) //Position: 0xEC3E / 60478
{
	if (Function_438(iParam0))
	{
		Function_442(iParam0);
		return 1;
	}
	return 0;
}

bool Function_453(bool bParam0, float fParam1) //Position: 0xEC54 / 60500
{
	if (Function_164(bParam0))
	{
		if (Function_160(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_454(bool bParam0) //Position: 0xEC70 / 60528
{
	if (Function_164(bParam0))
	{
		if (Function_163(bParam0))
		{
			Function_161();
			bParam0->f_4 = (StackVal - NET_GET_NET_TIME());
			bParam0->f_8 = 0.0f;
			Function_30(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_455(bool bParam0) //Position: 0xED40 / 60736
{
	if (!Function_164(bParam0))
	{
		Function_440(bParam0, 0.0f);
	}
	return;
}

void Function_456(int iParam0) //Position: 0xED55 / 60757
{
	if ((iParam0 % 10) != 0)
	{
		return;
	}
	NET_LOG(1, "AD Host", "-----> Sending Game to %s", Function_411(iParam0), 0, 0, 0);
	Local_518 = iParam0;
	return;
}

bool Function_457() //Position: 0xED9C / 60828
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		iVar1 = Function_141(iVar2, 1, 0);
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
		iVar2++;
	}
	return 1;
}

void Function_458(int iParam0) //Position: 0xEDDE / 60894
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_459() //Position: 0xEDF2 / 60914
{
	Function_460(4);
	return;
}

void Function_460(int iParam0) //Position: 0xEDFC / 60924
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
			Function_461(iParam0);
		}
	}
	return;
}

void Function_461(var uParam0) //Position: 0xEE2E / 60974
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

bool Function_462() //Position: 0xEE3D / 60989
{
	Function_505(&Local_282 + 200, 1, 0, 0, 0);
	switch (Local_518)
	{
		case 0x0000000A:
			if (Function_33(Local_518.f_52, 2))
			{
				Function_410(4);
			}
			else
			{
				Function_410(1);
			}
			Function_326(&Local_282 + 200, 1);
			Function_421();
			if (Function_140() == 0)
			{
				Function_316(1);
			}
			else
			{
				Function_316(0);
			}
			break;
		
		case 0x00000014:
			Function_371(&Local_282 + 712);
			if (Function_140() == 0)
			{
				Function_316(1);
				Function_410(11);
			}
			else
			{
				Function_316(0);
				Function_410(12);
			}
			break;
		
		case 0x00000032:
			Function_371(&Local_282 + 712);
			Function_423(8, 1);
			if (Function_140() == 1)
			{
				Function_316(1);
				Function_410(31);
			}
			else
			{
				Function_316(0);
				Function_410(32);
			}
			break;
		
		case 0x0000001E:
			Function_423(8, 1);
			if (Function_33(Local_518.f_52, 4))
			{
				Function_410(27);
			}
			else
			{
				Function_410(22);
			}
			Function_326(&Local_282 + 200, 1);
			Function_421();
			Function_316(Function_140() != 1);
			break;
		
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_456(10);
			}
			return 0;
			break;
	}
	Function_504();
	Function_503(&Local_282 + 712);
	Function_372();
	Function_315(StackVal);
	Function_502(&Local_282 + 200, 3);
	Function_500(&Local_282 + 200, 66179);
	Function_479(&Local_282 + 200, 63211);
	Function_468(&Local_282 + 200, 61541);
	Function_464(&Local_282 + 200, 61372);
	Function_463(&Local_282 + 200, 30);
	return 1;
}

void Function_463(var uParam0, int iParam1) //Position: 0xEFA4 / 61348
{
	uParam0->f_52 = iParam1;
	return;
}

void Function_464(var uParam0, int iParam1) //Position: 0xEFB0 / 61360
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_465(var uParam0) //Position: 0xEFBC / 61372
{
	uParam0 = uParam0;
	if (StackVal == 1)
	{
		if (Function_467(64))
		{
			Function_466();
		}
	}
	return;
}

void Function_466() //Position: 0xEFDA / 61402
{
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	Function_182(Function_7());
	Function_254(GET_OBJECT_FROM_ACTOR(Function_7()));
	iLocal_280 = CREATE_ACTOR_IN_LAYOUT(Function_50(), Function_65(), 979, Function_182(Function_7()), Function_254(GET_OBJECT_FROM_ACTOR(Function_7())));
	SNAP_OBJECT_TO_GROUND(iLocal_280, 50.0f, 0, 1092616192);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(iLocal_280))
	{
		ACCESSORIZE_HORSE(bLocal_280, 3);
		if (!IS_ACTOR_MOUNTED(bLocal_280))
		{
			if (!ACTOR_MOUNT_ACTOR(Function_7(), bLocal_280))
			{
			}
		}
	}
	return;
}

bool Function_467(int iParam0) //Position: 0xF046 / 61510
{
	return Function_33((&Global_83591 + 140)->f_56, iParam0);
}

void Function_468(var uParam0, int iParam1) //Position: 0xF059 / 61529
{
	uParam0->f_164 = iParam1;
	return;
}

void Function_469() //Position: 0xF065 / 61541
{
	Function_476(&Local_626, 1);
	(&Local_282 + 200)->f_8 = Function_470(&Local_626, 1);
	return;
}

var Function_470(int iParam0, int iParam1) //Position: 0xF080 / 61568
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9[60];
	int iVar70;
	
	iVar3 = 0;
	iParam0->f_2736 = NET_GET_NET_TIME();
	iVar6 = GET_LOCAL_SLOT();
	iVar7 = Function_140();
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
				iVar2 = 0;
				while (iVar2 <= 16)
				{
					if ((iParam0 + 1460[iVar1106] + 28[iVar26])->f_16)
					{
						if (iVar1 != 2)
						{
							if (IS_VOLUME_VALID(StackVal) && iParam1)
							{
								if (IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 1460[iVar1106] + 28[iVar26])))
								{
									iParam0[iVar06]->f_20 = (iParam0[iVar06]->f_20 + (307.0f * (*iParam0 + 1460)[iVar1106]));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_475(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 2.0f, 0.0f));
								}
							}
							else if (bVar8)
							{
								if (IS_POINT_IN_VOLUME(*(iParam0 + 1460[iVar1106] + 28[iVar26]), iParam0->f_1448))
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_475(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 1.0f, 0.5f));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_475(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
								}
							}
							else
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_475(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
							}
						}
						else if (iVar2 != iVar6 || Function_474(iParam0 + 1460[iVar1106] + 28[iVar26], iParam0->f_2736))
						{
							iParam0[iVar06]->f_20 = (StackVal + Function_475(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
						}
						else
						{
							(iParam0 + 1460[iVar1106] + 28[iVar26])->f_16 = 0;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 16)
		{
			if (iVar2 != iVar6)
			{
				if (IS_SLOT_VALID(iVar2))
				{
					if (iVar7 != 4294967295 || Function_141(bVar2, 1, 0) == iVar7)
					{
						if (Function_473(bVar2, &Var4))
						{
							if (StackVal && (Var4 < 4294967295 - iParam0->f_2736) >= 15.0f)
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_475(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0[Var46] + 8), *(iParam0 + 1460[2106]), 0x3f800000, 0x3f800000));
							}
						}
					}
				}
			}
			bVar2++;
		}
		if (bLocal_625)
		{
			if ((iVar3 % 10) == 0)
			{
				PRINTNL();
				Function_153();
				PRINTSTRING("Weighting,");
			}
			PRINTSTRING(GET_OBJECT_NAME((*iParam0)[iVar06]));
			PRINTSTRING(",");
			Function_472(iParam0[iVar06]->f_20);
			PRINTSTRING(",");
			iVar3++;
		}
		iVar0++;
	}
	if (bLocal_625)
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
	Function_471(iParam0 + 1452);
	return (*iParam0)[iVar06];
}

void Function_471(int iParam0) //Position: 0xF4AF / 62639
{
	Local_556[GET_LOCAL_SLOT()4] = { StackVal, *iParam0 };
	return;
}

void Function_472(float fParam0) //Position: 0xF4C3 / 62659
{
	if (bLocal_625)
	{
		PRINTINT(ROUND(fParam0));
	}
	return;
}

bool Function_473(bool bParam0, int iParam1) //Position: 0xF4D7 / 62679
{
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_556, iParam0))
	{
		*iParam1 = { StackVal, Local_556[bParam04] };
		return 1;
	}
	return 0;
}

var Function_474(var uParam0, float fParam1) //Position: 0xF4F8 / 62712
{
	return (fParam1 - uParam0->f_12) >= 20.0f;
}

float Function_475(vector3 vParam0, vector3 vParam3, struct<25> Param6) //Position: 0xF50B / 62731
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

void Function_476(int iParam0, bool bParam1) //Position: 0xF575 / 62837
{
	(iParam0 + 1460[0106])->f_420 = 1;
	if (bParam1)
	{
		Function_477(iParam0, 0, Function_413(Function_140()));
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	else
	{
		Function_477(iParam0, 0, 4294967295);
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	return;
}

void Function_477(int iParam0, int iParam1, int iParam2) //Position: 0xF5BA / 62906
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 != GET_LOCAL_SLOT())
		{
			Function_478(iParam0, iVar0, iParam1, iParam2);
		}
		else
		{
			(iParam0 + 1460[iParam1106] + 28[iVar06])->f_16 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_478(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xF5FB / 62971
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	(iParam0 + 1460[iParam2106] + 28[iParam16])->f_16 = 0;
	if (IS_SLOT_VALID(iParam1))
	{
		bVar3 = false;
		if (iParam3 != 4294967295 || Function_141(bParam1, 1, 0) != iParam3)
		{
			iVar4 = GET_SLOT_ACTOR(bParam1);
			if (IS_ACTOR_VALID(iVar4))
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					Function_112(bVar4, &vVar0);
					bVar3 = true;
				}
			}
			else if (Function_145(bParam1))
			{
				if (!Function_142(bParam1, 2, 1))
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

void Function_479(var uParam0, int iParam1) //Position: 0xF6DF / 63199
{
	uParam0->f_172 = iParam1;
	return;
}

void Function_480() //Position: 0xF6EB / 63211
{
	int iVar0;
	
	iVar0 = Function_430();
	if (iVar0 <= 0 || iVar0 != 4294967291)
	{
		Function_493(&Local_282 + 200, 64865);
		Local_282.f_868 = GET_CURRENT_GAME_TIME();
		Function_22(&Local_282 + 712);
		Function_360();
		Function_358(0);
		if (iVar0 == 4294967291)
		{
			Function_491(&Local_282 + 200, 0, 1, 1);
		}
		else
		{
			Function_484(iVar0);
		}
		Function_483();
	}
	else if (Function_481(&Local_282 + 200, iVar0))
	{
		Function_291("GENMESS_GAMEOVER", 0);
		switch (iVar0)
		{
			case 0xFFFFFFFE:
			case 0xFFFFFFFD:
				Function_491(&Local_282 + 200, 1, 1, 0);
				break;
			
			default:
				Function_491(&Local_282 + 200, 0, 1, 0);
				break;
			}
	}
	return;
}

bool Function_481(int iParam0, bool bParam1) //Position: 0xF79D / 63389
{
	switch (bParam1)
	{
		case 0xFFFFFFFE:
			Function_482(iParam0, "MP_endgame_OneTeamLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFD:
			Function_482(iParam0, "MP_endgame_EverybodyLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFC:
			Function_482(iParam0, "MP_endgame_OutOfTime", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFB:
			Function_482(iParam0, "MP_Endgame_draw", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_482(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF858 / 63576
{
	int iVar0;
	
	iParam0->f_16 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		(*iParam0 + 20)[iVar0] = "";
		iVar0++;
	}
	if (IS_STRING_VALID(iParam2))
	{
		(*iParam0 + 20)[0] = iParam2;
	}
	if (IS_STRING_VALID(iParam3))
	{
		(*iParam0 + 20)[1] = iParam3;
	}
	if (IS_STRING_VALID(iParam4))
	{
		(*iParam0 + 20)[2] = iParam4;
	}
	if (IS_STRING_VALID(iParam5))
	{
		(*iParam0 + 20)[3] = iParam5;
	}
}

void Function_483() //Position: 0xF8C7 / 63687
{
	int iVar0;
	
	iVar0 = Function_140();
	if (iVar0 == 1)
	{
		if (Function_356(&Local_282 + 872))
		{
			Function_355(&Local_282 + 872);
		}
		Function_344(&Global_50170[24822] + 4, &Global_50170[24822] + 8, &Global_50170[24822] + 12, Local_282.f_864);
		Function_352(&Global_50170[25022] + 4, &Global_50170[25022] + 8, &Global_50170[25022] + 12, (Function_354() - Local_282.f_860));
	}
	return;
}

void Function_484(int iParam0) //Position: 0xF939 / 63801
{
	int iVar0;
	
	iVar0 = Function_140();
	if (iParam0 == iVar0)
	{
		Function_491(&Local_282 + 200, 1, 1, 0);
		Function_490(0, 1);
		Function_487(&Global_50170[24622] + 4, &Global_50170[24622] + 8, &Global_50170[24622] + 12);
		Function_485(&Global_50170[24922] + 4, &Global_50170[24922] + 8, &Global_50170[24922] + 12, Local_282.f_884);
	}
	else
	{
		Function_491(&Local_282 + 200, 0, 1, 0);
	}
	Function_22(&Local_282 + 712);
	return;
}

void Function_485(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xF9B4 / 63924
{
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(249);
			if (iParam3 > 16)
			{
				*uParam2 = 0.0f;
				Function_335(249, uParam1, 1, 7059, 50.0f, 150.0f, 18, Function_486(0), 1);
				Function_334(249);
			}
			break;
		
		case 0x00000001:
			Function_334(249);
			if (iParam3 > 18)
			{
				*uParam2 = 0.0f;
				Function_335(249, uParam1, 2, 7060, 150.0f, 200.0f, 20, Function_486(0), 1);
				Function_334(249);
			}
			break;
		
		case 0x00000002:
			Function_334(249);
			if (iParam3 > 20)
			{
				*uParam2 = 0.0f;
				Function_329(249, uParam1, uParam0, 7061, 200.0f, Function_486(0));
			}
			break;
	}
}

int Function_486(bool bParam0) //Position: 0xFA66 / 64102
{
	if (bParam0)
	{
		return "gotLives_64";
	}
	return "gotLives_128";
}

void Function_487(var uParam0, var uParam1, int iParam2) //Position: 0xFA92 / 64146
{
	int iVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(246);
			fVar1 = Function_137(246);
			Global_50170[24622].f_28++;
			iVar0 = Global_50170[24622].f_28;
			if (iVar0 > 5)
			{
				*iParam2 = 0.0f;
				Function_335(246, uParam1, 1, 7043, 50.0f, 150.0f, 10, Function_489(0), 0);
				Function_334(246);
				Function_488(246, 1, iVar0, 10);
			}
			else
			{
				*iParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(5));
				if (*iParam2 == fVar1)
				{
					Function_89(246, *iParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_334(246);
			Global_50170[24622].f_28++;
			iVar0 = Global_50170[24622].f_28;
			if (iVar0 > 10)
			{
				*iParam2 = 0.0f;
				Function_335(246, uParam1, 2, 7044, 150.0f, 200.0f, 15, Function_489(0), 0);
				Function_334(246);
				Function_488(246, 1, iVar0, 15);
			}
			else
			{
				*iParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(10));
				if (*iParam2 == fVar1)
				{
					Function_89(246, *iParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_334(246);
			Global_50170[24622].f_28++;
			iVar0 = Global_50170[24622].f_28;
			if (iVar0 > 15)
			{
				*iParam2 = 0.0f;
				Function_329(246, uParam1, uParam0, 7045, 200.0f, Function_489(0));
			}
			else
			{
				*iParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(15));
				if (*iParam2 == fVar1)
				{
					Function_89(246, *iParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
	return;
}

void Function_488(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xFC2D / 64557
{
	Function_337(iParam0);
	if (bParam1)
	{
		Function_89(iParam0, (TO_FLOAT(iParam2) / TO_FLOAT(iParam3)), 1, iParam2, 4294967295, 4294967295);
	}
}

int Function_489(bool bParam0) //Position: 0xFC54 / 64596
{
	if (bParam0)
	{
		return "matchWins_64";
	}
	return "matchWins_128";
}

void Function_490(int iParam0, int iParam1) //Position: 0xFC82 / 64642
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_491(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xFC9C / 64668
{
	if (bParam1)
	{
		Function_139(7, 1);
		Function_139(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_281())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_351(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_492())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_351(37) > 3)
					{
						AWARD_ACHIEVEMENT(44);
					}
				}
			}
		}
		Function_31(iParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_490(37, 0);
		Function_30(iParam0 + 44, 4);
	}
	else
	{
		Function_139(6, 1);
		Function_490(37, 0);
		Function_30(iParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_31(iParam0 + 44, 256);
	}
	else
	{
		Function_30(iParam0 + 44, 256);
	}
}

bool Function_492() //Position: 0xFD4A / 64842
{
	return Function_271(16);
}

void Function_493(var uParam0, int iParam1) //Position: 0xFD55 / 64853
{
	uParam0->f_180 = iParam1;
	return;
}

int Function_494() //Position: 0xFD61 / 64865
{
	int iVar0;
	int iVar1;
	
	switch (Local_282.f_932)
	{
		case 0x00000000:
			if ((GET_CURRENT_GAME_TIME() - Local_282.f_868) < 6.0f)
			{
				iVar0 = Function_140();
				if (Function_430() == 4294967291)
				{
					Function_291("GENMESS_GAMEOVER", 0);
					Function_481(&Local_282 + 200, Function_430());
				}
				else if (Function_430() == iVar0)
				{
					Function_482(&Local_282 + 200, Function_499(iVar0), "mp_teammsg_blue_start", "mp_teammsg_blue_end", 0, 0);
					Function_498(Function_417(iVar0));
				}
				else
				{
					iVar1 = Function_413(iVar0);
					Function_482(&Local_282 + 200, Function_499(iVar1), "mp_teammsg_red_start", "mp_teammsg_red_end", 0, 0);
					Function_496(Function_417(iVar1));
				}
				Function_495();
				Function_158(&Local_282 + 200);
				Local_282.f_868 = GET_CURRENT_GAME_TIME();
				Local_282.f_932 = 1;
			}
			break;
		
		case 0x00000001:
			if ((GET_CURRENT_GAME_TIME() - Local_282.f_868) < 6.0f)
			{
				Function_327();
				return 1;
			}
			break;
	}
	return 0;
}

void Function_495() //Position: 0xFE91 / 65169
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Function_140();
	if (Function_430() == 4294967291)
	{
		uVar0 = "AE_EOM_Draw";
		iVar2 = 64;
	}
	else if (Function_430() == iVar1)
	{
		uVar0 = "AE_EOM_Win";
		iVar2 = 64;
	}
	else
	{
		uVar0 = "AE_EOM_Lose";
		iVar2 = 63;
	}
	UI_SET_TEXT("MPSplashItem.s0", uVar0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", iVar2);
	UI_REFRESH("MPSplash");
	return;
}

void Function_496(int iParam0) //Position: 0xFF4B / 65355
{
	char* cVar0[64];
	
	if (iParam0 == 15)
	{
		Function_498(iParam0);
		return;
	}
	strcpy(&cVar0, "GENMESS_LOSE_TEAM_", 64);
	straddi(&cVar0, iParam0, 64);
	Function_497(&cVar0, 0);
	return;
}

void Function_497(char* cParam0, bool bParam1) //Position: 0xFF83 / 65411
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
		ADD_LINE_TO_CONVERSATION(0, cParam0, iVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(0, 0);
	return;
}

void Function_498(int iParam0) //Position: 0xFFC3 / 65475
{
	char* cVar0[64];
	
	strcpy(&cVar0, "GENMESS_WIN_TEAM_", 64);
	straddi(&cVar0, iParam0, 64);
	Function_497(&cVar0, 0);
	return;
}

int Function_499(int iParam0) //Position: 0xFFED / 65517
{
	switch (Function_417(iParam0))
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

void Function_500(var uParam0, int iParam1) //Position: 0x10277 / 66167
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_501() //Position: 0x10283 / 66179
{
	Function_287(0);
	if (Function_284())
	{
		Function_370(&Local_282 + 200, 1);
		(&Local_282 + 200)->f_56 = 4294967295;
	}
	return;
}

void Function_502(var uParam0, int iParam1) //Position: 0x102A4 / 66212
{
	uParam0->f_12 = 2;
	iParam1 = iParam1;
	return;
}

void Function_503(var uParam0) //Position: 0x102B3 / 66227
{
	uParam0->f_12 = 0;
	uParam0->f_28 = 4294967295;
	return;
}

void Function_504() //Position: 0x102C3 / 66243
{
	if (NET_IS_SESSION_HOST())
	{
		Function_442(&Global_78578 + 96);
		Local_518.f_8 = 1;
		Local_518 = 10;
		Local_518.f_60 = Function_435();
		Local_518.f_140 = Function_435();
		Local_518.f_64 = 4294967295;
	}
	return;
}

void Function_505(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x102F9 / 66297
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
	Function_323(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_199(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_463(iParam0, 2);
	Function_519(iParam0);
	Function_516(iParam0);
	Function_515(iParam0);
	Function_514(iParam0);
	Function_512(iParam0);
	Function_510(iParam0);
	Function_507(iParam0);
	if (bParam2)
	{
		Function_31(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_31(iParam0 + 44, 8);
		Function_193(iParam0 + 192);
	}
	Function_506(iParam0, bParam4);
	Function_42(8388608, 0);
}

void Function_506(int iParam0, bool bParam1) //Position: 0x103C1 / 66497
{
	if (bParam1)
	{
		Function_31(iParam0 + 44, 32);
	}
	else
	{
		Function_30(iParam0 + 44, 32);
	}
	return;
}

void Function_507(int iParam0) //Position: 0x103E1 / 66529
{
	Function_508(iParam0, 66556);
	return;
}

void Function_508(var uParam0, var uParam1) //Position: 0x103F0 / 66544
{
	uParam0->f_184 = uParam1;
	return;
}

int Function_509() //Position: 0x103FC / 66556
{
	return 0;
}

void Function_510(var uParam0) //Position: 0x10403 / 66563
{
	Function_493(uParam0, 66578);
	return;
}

int Function_511() //Position: 0x10412 / 66578
{
	return 1;
}

void Function_512(var uParam0) //Position: 0x10419 / 66585
{
	Function_468(uParam0, 66600);
	return;
}

void Function_513() //Position: 0x10428 / 66600
{
	return;
}

void Function_514(int iParam0) //Position: 0x1042E / 66606
{
	Function_500(iParam0, 66600);
	return;
}

void Function_515(int iParam0) //Position: 0x1043D / 66621
{
	Function_479(iParam0, 66600);
	return;
}

void Function_516(int iParam0) //Position: 0x1044C / 66636
{
	Function_517(iParam0, 66663);
	return;
}

void Function_517(var uParam0, var uParam1) //Position: 0x1045B / 66651
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_518() //Position: 0x10467 / 66663
{
	return 0;
}

void Function_519(int iParam0) //Position: 0x1046E / 66670
{
	Function_464(iParam0, 66685);
	return;
}

void Function_520(var uParam0) //Position: 0x1047D / 66685
{
	uParam0 = uParam0;
	return;
}

bool Function_521(int iParam0) //Position: 0x10487 / 66695
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_526();
	iVar1 = 0;
	if (!Function_11(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_525(iParam0[iVar03], 8);
		}
		else if (Function_524())
		{
			iVar1 = 1;
			Function_525(iParam0[iVar03], 8);
		}
		Function_525(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_11(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_11(iParam0[03], 8) || iVar1));
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
				Function_525(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_525(iParam0[iVar03], 2);
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
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_525(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_525(iParam0[iVar03], 2);
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
	Function_522();
	return 1;
}

void Function_522() //Position: 0x10802 / 67586
{
	if (!Function_523(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_523(int iParam0) //Position: 0x10842 / 67650
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_524() //Position: 0x1085E / 67678
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

void Function_525(var uParam0, int iParam1) //Position: 0x10889 / 67721
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_526() //Position: 0x1089A / 67738
{
	if (!Function_523(128))
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

bool Function_527() //Position: 0x108DC / 67804
{
	return (Function_430() == 4294967295 && !Function_429());
}

var Function_528(int iParam0) //Position: 0x108EC / 67820
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			if (Function_145(bVar0))
			{
				if (Function_142(bVar0, 2048, 1))
				{
					Stack.Push(bVar0);
					Call_Loc(iParam0);
					if (StackVal)
					{
						iVar1 = 1;
					}
					else
					{
						NET_LOG(1, "GameSync", "Slot #%s, (%s) invalid because their gamedata isn't valid yet", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
						iVar2 = 0;
					}
				}
				else
				{
					NET_LOG(1, "GameSync", "Slot #%s, (%s) skipped because they haven't joined the game", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
				}
			}
			else
			{
				NET_LOG(1, "GameSync", "Slot #%s, (%s)'s slot is valid, but has invalid CBA data", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
			}
		}
		bVar0++;
	}
	return (iVar1 && iVar2);
}

var Function_529(bool bParam0) //Position: 0x10A4D / 68173
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_556, iParam0);
}

void Function_530() //Position: 0x10A5B / 68187
{
	if (bLocal_625)
	{
		Function_153();
		PRINTSTRING("Game Started");
		PRINTNL();
	}
	return;
}

void Function_531(int iParam0, bool bParam1) //Position: 0x10A7F / 68223
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(iParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", iParam0);
	}
	return;
}

void Function_532() //Position: 0x10AB4 / 68276
{
	var uVar1;
	int iVar2;
	char* cVar3[16];
	char* cVar7[16];
	bool bVar11;
	var uVar12;
	
	iLocal_281 = 0;
	Local_282.f_676 = 0;
	Local_282.f_892 = 0;
	Local_282.f_896 = 0;
	Local_282.f_852 = 4294967295;
	Local_282.f_196 = 0;
	Function_458(4294967295);
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\Ranch08");
	Function_592(1);
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_518, 38);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_556, 65);
	Function_398(3, 4294967294);
	Function_423(8, 0);
	Function_590(&Local_282 + 748, "dlc_mpmodepack_atkdef", 10, 0);
	Function_590(&Local_282 + 748, "p_gen_fpole01x", 0, 0);
	Function_590(&Local_282 + 748, "p_gen_safe02x", 0, 0);
	Function_590(&Local_282 + 748, "MPModePackGringoDictionary", 12, 0);
	Function_590(&Local_282 + 748, "mp_lockpick_safe", 1, 0);
	Function_590(&Local_282 + 748, Function_314(), 5, 0);
	Function_590(&Local_282 + 748, "custom/knl_picksafe_mp", 8, 0);
	if (Function_467(64))
	{
		Function_589(&Local_282 + 748, 979, 3, 0);
	}
	Function_521(&Local_282 + 748);
	Function_587();
	Function_586(0);
	if (DECOR_CHECK_EXIST(Function_37(), "TMS_WillOverrideAD"))
	{
		uVar1 = Function_50();
		while (!DECOR_CHECK_EXIST(uVar1, "TMS_OverrodeAD"))
		{
			WAIT(0);
		}
		Function_585(bVar1, "TMS_StageHealth", &fLocal_267);
		Function_585(bVar1, "TMS_HealthPerTick", &fLocal_268);
		Function_585(bVar1, "TMS_DriftPerTick", &fLocal_269);
		Function_585(bVar1, "TMS_TimeMultiplierBase", &iLocal_1315);
		Function_585(bVar1, "TMS_TimeMultiplier1", &iLocal_1316);
		Function_585(bVar1, "TMS_TimeMultiplier2", &iLocal_1317);
		Function_585(bVar1, "TMS_TimeMultiplier3", &iLocal_1318);
		Function_584(bVar1, "TMS_AntiTankAmmo", &iLocal_270);
		Function_584(bVar1, "TMS_TimeTier1", &iLocal_1312);
		Function_584(bVar1, "TMS_TimeTier2", &iLocal_1313);
		Function_584(bVar1, "TMS_TimeTier3", &iLocal_1314);
	}
	Function_504();
	Function_577(0);
	iVar2 = NET_GET_PLAYMODE();
	if (iVar2 != 1 || iVar2 != 3)
	{
		Global_84364.f_776 = 4294967295;
	}
	else
	{
		Global_84364.f_776 = Function_148();
	}
	Function_53(0);
	if (IS_ACTOR_VALID(Function_7()))
	{
		DESTROY_ACTOR(Function_7());
	}
	Local_282.f_640 = 1;
	strcpy(&cVar3, "Stage_1_set", 16);
	uVar12 = FIND_VOLUME_IN_LAYOUT(Function_50(), &cVar3);
	while (IS_VOLUME_VALID(uVar12) && Local_282.f_640 >= 5)
	{
		strcpy(&cVar7, "Cap_", 16);
		straddi(&cVar7, Local_282.f_640, 16);
		Local_282[Local_282.f_6408] = GET_VOLUME_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(uVar12, &cVar7));
		if (!IS_VOLUME_VALID(Local_282[Local_282.f_6408]))
		{
			iLocal_281 = 1;
		}
		else if (!DECOR_CHECK_EXIST(Local_282[Local_282.f_6408], Function_576()))
		{
			iLocal_281 = 1;
		}
		else if (!DECOR_CHECK_EXIST(Local_282[Local_282.f_6408], Function_575()))
		{
			iLocal_281 = 1;
		}
		else
		{
			Local_282[Local_282.f_6408].f_4 = Function_574(Local_282[Local_282.f_6408]);
			switch (StackVal)
			{
				case 0x00000001:
					break;
				
				case 0x00000000:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					if (!bVar11)
					{
						bVar11 = true;
					}
					else
					{
						iLocal_281 = 1;
					}
					break;
				
				default:
					break;
			}
			Local_282[Local_282.f_6408].f_8 = Function_573(Local_282[Local_282.f_6408]);
			switch (StackVal)
			{
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				default:
					break;
			}
			UI_SET_STRING(StackVal, I2STR(Function_572(Local_282.f_640)));
			Local_282[Local_282.f_6408].f_12 = Function_570(Local_282[Local_282.f_6408]);
			Local_282[Local_282.f_6408].f_16 = Function_568(Local_282[Local_282.f_6408]);
			Local_282[Local_282.f_6408].f_28 = Function_566(Local_282[Local_282.f_6408]);
		}
		Local_282.f_640++;
		strcpy(&cVar3, "Stage_", 16);
		straddi(&cVar3, Local_282.f_640, 16);
		stradd(&cVar3, "_set", 16);
		uVar12 = FIND_VOLUME_IN_LAYOUT(Function_50(), &cVar3);
	}
	Local_282.f_640 = (Local_282.f_640 - 1);
	Function_398(4, Local_282.f_640);
	UI_SET_STRING("AD_PointsTotal", I2STR(Local_282.f_640));
	if (!bVar11)
	{
		iLocal_281 = 1;
	}
	Function_563();
	if (NET_IS_SESSION_HOST())
	{
		Local_518.f_4 = StackVal;
	}
	Function_560();
	Function_533();
	return;
}

void Function_533() //Position: 0x11038 / 69688
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 70513);
	NET_SCRIPTMSG_REGISTER_HANDLER(5, 70493);
	NET_SCRIPTMSG_REGISTER_HANDLER(7, 70434);
	NET_SCRIPTMSG_REGISTER_HANDLER(100, 69731);
	return;
}

void Function_534(var uParam0) //Position: 0x11063 / 69731
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 3);
	if (Function_33(Var0, Function_122(GET_LOCAL_SLOT())))
	{
		Function_536(&Global_50170[24722] + 4, &Global_50170[24722] + 8, &Global_50170[24722] + 12);
		PLAY_SOUND_FRONTEND("STRONG_HOLD_CAPTURE_MASTER");
		Function_264(4, 1);
		if (StackVal == 2)
		{
			if (Function_368(StackVal))
			{
				iVar3 = Function_7();
				DECOR_SET_INT(iVar3, "iLockerOpen", 1);
				Function_330(150.0f, 0, 1);
				Function_535(CEIL(150.0f));
				_ADD_AMMO_OF_TYPE(bVar3, 13, TO_FLOAT(iLocal_270), 1, 0);
				GIVE_WEAPON_TO_ACTOR(bVar3, 31, 0.0f, 1, 1);
				ACTOR_SET_NEXT_WEAPON(bVar3, 31);
				ACTOR_SET_NEXT_EQUIP_SLOT(bVar3, 4, 1);
			}
		}
		else
		{
			Function_330(75.0f, 0, 1);
			Function_535(CEIL(75.0f));
		}
	}
	return;
}

void Function_535(int iParam0) //Position: 0x1114D / 69965
{
	Function_264(0, iParam0);
	return;
}

void Function_536(var uParam0, var uParam1, int iParam2) //Position: 0x11159 / 69977
{
	int iVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_337(247);
			fVar1 = Function_137(247);
			Global_50170[24722].f_28++;
			iVar0 = Global_50170[24722].f_28;
			if (iVar0 > 25)
			{
				*iParam2 = 0.0f;
				Function_335(247, uParam1, 1, 7046, 50.0f, 150.0f, 50, Function_537(0), 0);
				Function_334(247);
			}
			else
			{
				*iParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(25));
				if (*iParam2 == fVar1)
				{
					Function_89(247, *iParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_334(247);
			Global_50170[24722].f_28++;
			iVar0 = Global_50170[24722].f_28;
			if (iVar0 > 50)
			{
				*iParam2 = 0.0f;
				Function_335(247, uParam1, 2, 7047, 150.0f, 200.0f, 100, Function_537(0), 0);
				Function_334(247);
			}
			else
			{
				*iParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(50));
				if (*iParam2 == fVar1)
				{
					Function_89(247, *iParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_334(247);
			Global_50170[24722].f_28++;
			iVar0 = Global_50170[24722].f_28;
			if (iVar0 > 100)
			{
				*iParam2 = 0.0f;
				Function_329(247, uParam1, uParam0, 7048, 200.0f, Function_537(0));
			}
			else
			{
				*iParam2 = (TO_FLOAT(iVar0) / TO_FLOAT(100));
				if (*iParam2 == fVar1)
				{
					Function_89(247, *iParam2, 1, iVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
	return;
}

int Function_537(bool bParam0) //Position: 0x112E2 / 70370
{
	if (bParam0)
	{
		return "captureCheckPoints_64";
	}
	return "captureCheckPoints_128";
}

void Function_538(var uParam0) //Position: 0x11322 / 70434
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &vVar0, 3);
	if (vVar0.x == GET_LOCAL_SLOT())
	{
		switch (vVar0.z)
		{
			case 0x00000003:
				break;
			
			case 0x00000006:
				break;
			
			case 0x00000008:
				break;
			}
	}
	return;
}

void Function_539(var uParam0) //Position: 0x1135D / 70493
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &iVar0, 1);
	Function_458(iVar0);
	return;
}

void Function_540(var uParam0) //Position: 0x11371 / 70513
{
	struct<11> Var0;
	int iVar11;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 11);
	Function_557(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_626, Var0);
	if (Var0.f_32 >= 0)
	{
		return;
	}
	if (Function_527())
	{
		return;
	}
	switch (StackVal)
	{
		case default:
			break;
		
		case 0x00000002:
			if (StackVal == GET_LOCAL_SLOT())
			{
				Function_555(0, &Local_282 + 704);
			}
			break;
		
		case 0x00000009:
			if (IS_SLOT_VALID(Var0))
			{
				if (StackVal != Function_141(Function_141(Var0, 1, 0), 1, 0))
				{
					if (Var0 == GET_LOCAL_SLOT())
					{
						Function_535(CEIL(25.0f));
						Function_330(25.0f, "nXP_assist", 1);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (StackVal && IS_SLOT_VALID(IS_SLOT_VALID(Var0)))
			{
				iVar11 = Function_141(Var0, 1, 0);
				if (StackVal != Function_141(iVar11, 1, 0))
				{
					if (StackVal == GET_LOCAL_SLOT())
					{
						Function_535(CEIL(10.0f));
						Function_330(10.0f, 0, 1);
					}
				}
				if (!Function_554())
				{
					if (StackVal == GET_LOCAL_SLOT())
					{
						if (Function_424())
						{
							Function_549(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						Function_541(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
					}
					if (NET_IS_SESSION_HOST())
					{
						if (Function_304(iVar11))
						{
							(*&Local_518 + 128)[iVar11]++;
							Local_518.f_60 = (Local_518.f_60 - 1);
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (NET_IS_SESSION_HOST() && !Function_554())
			{
				iVar11 = Function_141(Var0, 1, 0);
				if (Function_304(iVar11))
				{
					(*&Local_518 + 128)[iVar11]++;
					Local_518.f_60 = (Local_518.f_60 - 1);
				}
			}
			break;
	}
	return;
}

void Function_541(struct<29> Param0) //Position: 0x114FC / 70908
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001F:
			Function_542(&(Global_50170[23222]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_542(&(Global_50170[23322]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_7(), 31, 1);
					Global_83823[31] = 1;
					Function_120(7062);
				}
			}
			if (StackVal == 10)
			{
			}
			break;
	}
}

void Function_542(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x115C5 / 71109
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_543(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_543(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x115F1 / 71153
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_548(uParam0, uParam2, uParam3);
			}
			Function_544(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, iParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_544(uParam0, iParam1, iParam4, iParam8, 2, uParam5, uParam9, iParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_544(uParam0, iParam1, iParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_544(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x1166E / 71278
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = Function_137(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		iVar1 = Global_50170[*uParam022].f_28;
		if (iVar1 > iParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_547(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_546(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_545(uParam0, iVar1, iParam7, fParam8);
				}
			}
		}
		else if (iVar1 > 0)
		{
			uParam0->f_12 = Function_282(1.0f, (TO_FLOAT(iVar1) / TO_FLOAT(iParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_89(*uParam0, uParam0->f_12, 1, iVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_545(var uParam0, int iParam1, int iParam2, float fParam3) //Position: 0x1173C / 71484
{
	Function_337(*uParam0);
	Function_132(*uParam0, iParam2, CEIL(fParam3), 0);
	if (iParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_93(*uParam0), (TO_FLOAT(iParam1) / TO_FLOAT(iParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_93(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_546(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4) //Position: 0x117E1 / 71649
{
	struct<4> Var0;
	
	Function_127(*uParam0, bParam3);
	if (!IS_STRING_VALID(iParam4))
	{
		iParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(*uParam0) };
	Function_115(&Var0, CEIL(fParam2), iParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_131(*uParam0, 4);
	Function_100();
}

void Function_547(var uParam0, float fParam1, int iParam2) //Position: 0x1183F / 71743
{
	Function_127(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_93(*uParam0), 1.0f, 0, 0);
	Function_123(*uParam0, 0);
	if (!IS_STRING_VALID(iParam2))
	{
		iParam2 = "challenge_01_128";
	}
	Function_115(&Global_50170[*uParam022] + 16, CEIL(fParam1), iParam2);
	Function_100();
	return;
}

void Function_548(var uParam0, int iParam1, bool bParam2) //Position: 0x118A4 / 71844
{
	Function_337(*uParam0);
	if (!Function_91(*uParam0, 2))
	{
		Function_132(*uParam0, iParam1, CEIL(bParam2), 0);
		Function_133(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_93(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_549(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x118E1 / 71905
{
	int iVar0;
	
	if (StackVal == GET_LOCAL_SLOT())
	{
		if (!Function_553(Param0))
		{
			Local_282.f_916++;
		}
		iVar0 = Local_282.f_916;
		if (Function_356(&Local_282 + 916 + 4))
		{
			if (Function_346(&Local_282 + 916 + 4) > 2.0f)
			{
				if (iVar0 > 3)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(81))
					{
						AWARD_ACHIEVEMENT(81);
					}
				}
			}
			else if (Function_550(&Local_282 + 916 + 4, 2.0f))
			{
				Local_282.f_916 = 0;
			}
		}
		else
		{
			Function_348(&Local_282 + 916 + 4);
		}
	}
}

bool Function_550(var uParam0, int iParam1) //Position: 0x1196C / 72044
{
	if (Function_552(uParam0, iParam1))
	{
		Function_551(uParam0);
		return 1;
	}
	return 0;
}

void Function_551(int iParam0) //Position: 0x11984 / 72068
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_552(bool bParam0, float fParam1) //Position: 0x11998 / 72088
{
	if (Function_356(bParam0))
	{
		if (Function_346(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_553(bool bParam0) //Position: 0x119B4 / 72116
{
	if (Function_141(bParam0, 1, 0) != 4294967295 && Function_140() != 4294967295)
	{
		return 0;
	}
	return Function_141(bParam0, 1, 0) != Function_140();
}

bool Function_554() //Position: 0x119DC / 72156
{
	if (Function_44(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_555(int iParam0, int iParam1) //Position: 0x11A06 / 72198
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_7();
	iVar1 = Function_556(iParam0, iParam1);
	switch (iParam0)
	{
		case 0x00000000:
			switch (iVar1)
			{
				case 0x00000002:
					if (IS_ACTOR_VALID(iVar0))
					{
						if (IS_ACTOR_ALIVE(bVar0))
						{
							Function_268("mp_griefing_teamkill_offense", 0x41200000, 1, 0, 2, 1, 0);
							KILL_ACTOR(Function_7());
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

int Function_556(int iParam0, bool bParam1) //Position: 0x11AE8 / 72424
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

void Function_557(var uParam0, struct<29> Param1) //Position: 0x11B18 / 72472
{
	int iVar0;
	struct<9> Var1;
	
	iVar0 = GET_LOCAL_SLOT();
	if (StackVal == 1)
	{
		if (StackVal != iVar0)
		{
			if (!Function_281() || Function_140() != Function_141(Param1, 1, 0))
			{
				Function_559(StackVal, StackVal, uParam0, *(&Param1 + 16));
			}
		}
	}
	if (Param1 == iVar0)
	{
		Function_153();
		PRINTSTRING("Died,");
		iVar4 = Function_7();
		if (IS_ACTOR_VALID(iVar4))
		{
			Function_112(bVar4, &vVar1);
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
		iVar5 = Param1.f_12;
		if (Function_190(iVar5))
		{
			GET_WEAPON_DISPLAY_NAME(iVar5);
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
				PRINTSTRING(Function_558(StackVal));
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
				Function_112(bVar4, &vVar1);
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

var Function_558(int iParam0) //Position: 0x11D24 / 72996
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

void Function_559(int iParam0, vector3 vParam1) //Position: 0x11DA6 / 73126
{
	(iParam0 + 1460[2106])->f_416 = ((iParam0 + 1460[2106])->f_416 + 1 % 16);
	*(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166]) = { StackVal, StackVal, vParam1 };
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_12 = NET_GET_NET_TIME();
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_16 = 1;
}

void Function_560() //Position: 0x11E1C / 73244
{
	int iVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Function_561(iVar0, 0);
			iVar0++;
		}
	}
	return;
}

void Function_561(int iParam0, int iParam1) //Position: 0x11E40 / 73280
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = iParam1;
		Function_562(&Global_78578 + 92);
	}
	return;
}

void Function_562(var uParam0) //Position: 0x11E6C / 73324
{
	*uParam0++;
	return;
}

void Function_563() //Position: 0x11E7A / 73338
{
	Function_565(&Local_626 + 1460[0106]);
	Function_565(&Local_626 + 1460[1106]);
	Function_565(&Local_626 + 1460[2106]);
	(*&Local_626 + 1460)[1106] = 0.1f;
	(*&Local_626 + 1460)[2106] = -3.0f;
	(&Local_626 + 1460[2106])->f_12 = 0.0f;
	(&Local_626 + 1460[2106])->f_20 = 0.0f;
	(&Local_626 + 1460[0106])->f_420 = 1;
	(&Local_626 + 1460[2106])->f_420 = 1;
	(&Local_626 + 1460[2106])->f_416 = 0;
	Function_564(&Local_626);
	Local_626.f_1448 = FIND_VOLUME_IN_LAYOUT(Function_50(), "Interiors_Set");
	if (IS_VOLUME_VALID(Local_626.f_1448))
	{
	}
	return;
}

void Function_564(int iParam0) //Position: 0x11F30 / 73520
{
	iParam0->f_1452 = 4294967295;
	Function_471(iParam0 + 1452);
	return;
}

void Function_565(int iParam0) //Position: 0x11F44 / 73540
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

var Function_566(bool bParam0) //Position: 0x11F84 / 73604
{
	int iVar0;
	
	if (DECOR_GET_FLOAT_VERBOSE(Function_50(), "TMS_TimeBonus", &iVar0))
	{
	}
	else
	{
		iVar0 = DECOR_GET_FLOAT(iParam0, Function_567());
	}
	DECOR_REMOVE(iParam0, Function_567());
	return iVar0;
}

var Function_567() //Position: 0x11FBD / 73661
{
	return "ADTimerBonus";
}

var Function_568(bool bParam0) //Position: 0x11FD2 / 73682
{
	int iVar0;
	
	if (DECOR_GET_INT_VERBOSE(Function_50(), "nTMS_Lives", &iVar0))
	{
	}
	else
	{
		iVar0 = DECOR_GET_INT(iParam0, Function_569());
	}
	DECOR_REMOVE(bParam0, Function_569());
	return iVar0;
}

var Function_569() //Position: 0x12007 / 73735
{
	return "ADLives";
}

var Function_570(bool bParam0) //Position: 0x12017 / 73751
{
	int iVar0;
	
	if (DECOR_GET_FLOAT_VERBOSE(Function_50(), "TMS_SafeCapTime", &iVar0))
	{
	}
	else
	{
		iVar0 = DECOR_GET_FLOAT(iParam0, Function_571());
	}
	DECOR_REMOVE(iParam0, Function_571());
	return iVar0;
}

var Function_571() //Position: 0x12052 / 73810
{
	return "ADTimer";
}

var Function_572(int iParam0) //Position: 0x12062 / 73826
{
	switch (iParam0)
	{
		case 0x00000001:
			return "AD_GoalType_1";
		
		case 0x00000002:
			return "AD_GoalType_2";
		
		case 0x00000003:
			return "AD_GoalType_3";
		
		case 0x00000004:
			return "AD_GoalType_4";
		
		case 0x00000005:
			return "AD_GoalType_5";
		
		default:
	}
	return "Common_Null";
}

var Function_573(bool bParam0) //Position: 0x120F0 / 73968
{
	int iVar0;
	
	iVar0 = DECOR_GET_INT(iParam0, Function_575());
	DECOR_REMOVE(bParam0, Function_575());
	return iVar0;
}

var Function_574(bool bParam0) //Position: 0x1210B / 73995
{
	int iVar0;
	
	iVar0 = DECOR_GET_INT(iParam0, Function_576());
	DECOR_REMOVE(bParam0, Function_576());
	return iVar0;
}

var Function_575() //Position: 0x12126 / 74022
{
	return "ADObjective";
}

var Function_576() //Position: 0x1213A / 74042
{
	return "ADReward";
}

void Function_577(int iParam0) //Position: 0x1214B / 74059
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
	Function_86();
	Function_87();
	switch (iParam0)
	{
		case 0x00000001:
			Function_276(12288);
			Function_39(16384);
			break;
		
		case 0x00000002:
			Function_276(20480);
			Function_39(8192);
			break;
		
		default:
			Function_39(28672);
			break;
	}
	Function_39(2048);
	Function_578(0, 0);
	Function_217();
	return;
}

void Function_578(bool bParam0, bool bParam1) //Position: 0x1220F / 74255
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_583(&Global_78480);
	Function_582(&Global_78480);
	uVar0 = Function_351(37);
	Function_580();
	if (!bParam0)
	{
		Function_490(37, uVar0);
	}
	Function_42(18264, 0);
	Function_579();
	return;
}

void Function_579() //Position: 0x1225B / 74331
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_580() //Position: 0x1227A / 74362
{
	Function_581(&Global_78480 + 220);
	return;
}

void Function_581(int iParam0) //Position: 0x12289 / 74377
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

void Function_582(int iParam0) //Position: 0x122AA / 74410
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

void Function_583(int iParam0) //Position: 0x122CE / 74446
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

void Function_584(bool bParam0, int iParam1, int iParam2) //Position: 0x122F2 / 74482
{
	if (DECOR_CHECK_EXIST(iParam0, uParam1))
	{
		*iParam2 = DECOR_GET_INT(bParam0, iParam1);
		DECOR_REMOVE(bParam0, iParam1);
	}
	return;
}

void Function_585(bool bParam0, int iParam1, int iParam2) //Position: 0x12314 / 74516
{
	if (DECOR_CHECK_EXIST(iParam0, uParam1))
	{
		*iParam2 = DECOR_GET_FLOAT(bParam0, iParam1);
		DECOR_REMOVE(bParam0, iParam1);
	}
	return;
}

void Function_586(var uParam0) //Position: 0x12336 / 74550
{
	Function_265(0, uParam0);
	return;
}

void Function_587() //Position: 0x12342 / 74562
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ROUND(GET_PROFILE_TIME());
	iVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_588()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(iVar0 ^ iVar1 ^ iVar2);
	return;
}

int Function_588() //Position: 0x12371 / 74609
{
	var uVar0;
	
	uVar0 = Function_7();
	if (IS_ACTOR_VALID(uVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_589(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1238B / 74635
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_525(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_525(uParam0[iVar03], 8);
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

var Function_590(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1245B / 74843
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_591(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_525(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_591(var uParam0, int iParam1, int iParam2) //Position: 0x12493 / 74899
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_525(uParam0[iVar03], 4);
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

void Function_592(bool bParam0) //Position: 0x12557 / 75095
{
	struct<17> Var0;
	
	Function_20(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (bParam0)
	{
		Function_31(&Var0, 4);
	}
	Function_13(&Var0);
	Function_14();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 75177);
	return;
}

void Function_593(var uParam0) //Position: 0x125A9 / 75177
{
	struct<5> Var0;
	int iVar7;
	int iVar8;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 2);
	Function_20(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_21(&iVar7);
	if (Function_408(&Var2))
	{
	}
	iVar8 = Function_379(&iVar7);
	NET_LOG(1, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(iVar8), 0, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_407(&Var2, 1);
	Function_13(&Var2);
	return;
}

