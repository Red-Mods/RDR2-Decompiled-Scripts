//Decompiled with MagicRDR v1.0
//Function Count : 471
//Statics Count : 984
//Natives Count : 413
//Parameters Count : 54

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
	var uLocal_94 = 20;
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
	int iLocal_158 = 0;
	int iLocal_159 = 0;
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
	var uLocal_171 = 6;
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
	var uLocal_203 = 11;
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
	var uLocal_225 = 11;
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
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	float fLocal_242 = 0.0f;
	float fLocal_243 = 0.0f;
	float fLocal_244 = 0.0f;
	float fLocal_245 = 0.0f;
	bool bLocal_246 = false;
	int iLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	float fLocal_250 = 0.0f;
	float fLocal_251 = 0.0f;
	var uLocal_252 = 0;
	bool bLocal_253 = false;
	bool bLocal_254 = false;
	float fLocal_255 = 0.0f;
	int iLocal_256 = 0;
	struct<54> Local_257 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_311 = false;
	bool bLocal_312 = false;
	int iLocal_313 = 0;
	bool bLocal_314 = false;
	bool bLocal_315 = false;
	int iLocal_316 = 1;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	int iLocal_321 = 0;
	struct<2245> Local_322 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	char* cVar1[64];
	char* cVar17[64];
	vector3 vVar34;
	vector3 vVar37;
	vector3 vVar40;
	vector3 vVar43;
	char* cVar46[64];
	char* cVar62[64];
	
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	iLocal_8 = 0;
	iLocal_158 = 0;
	iLocal_159 = 0;
	iLocal_240 = 1000;
	iLocal_241 = 0;
	iLocal_256 = 0;
	fLocal_911 = 0.2f;
	iLocal_917 = 6;
	iLocal_918 = 0;
	iLocal_919 = 1;
	iLocal_920 = 2;
	iLocal_921 = 3;
	iLocal_922 = 0;
	iLocal_923 = 0;
	iLocal_924 = 0;
	iLocal_925 = 1;
	NET_LOG(true, "POKER", "WELCOME TO POKER. YOU ARE RUNNING A GREAT BUILD, ONE THAT WON'T DIE DUE TO BAD BEATS.", false, false, false, false);
	Local_257 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_440();
	if (Function_439("netPokerbot"))
	{
		Function_438(0x20000000);
	}
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
	while (Function_138())
	{
		if (iLocal_919 <= 1)
		{
			SCRIPT_BREAKPOINT("test");
		}
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_257 };
		if (GET_DEBUG_DRAW_STATE())
		{
			if (Function_137(1) >= 4294967295)
			{
				vVar43 = { StackVal, StackVal, *(&Local_257 + 152) };
				vVar43.f_4 = (vVar43.y + 0.05f);
				GET_OBJECT_AXIS(StackVal, &vVar34, 0);
				GET_OBJECT_AXIS(StackVal, &vVar40, 1);
				GET_OBJECT_AXIS(StackVal, &vVar37, 2);
				vVar34 = { StackVal, StackVal, Vector(vVar34, StackVal, StackVal) * Vector(0.25f, 0.25f, 0.25f) };
				vVar40 = { StackVal, StackVal, Vector(vVar40, StackVal, StackVal) * Vector(0.25f, 0.25f, 0.25f) };
				vVar37 = { StackVal, StackVal, Vector(vVar37, StackVal, StackVal) * Vector(0.25f, 0.25f, 0.25f) };
				vVar34 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar43, vVar34, StackVal) };
				vVar37 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar43, vVar37, StackVal) };
				bVar0 = false;
				while (bVar0 <= (&Local_322 + 1824)->f_84)
				{
					GET_OBJECT_AXIS((*&Local_322 + 1916)[bVar0], &vVar34, 0);
					GET_OBJECT_AXIS((*&Local_322 + 1916)[bVar0], &vVar37, 2);
					vVar34 = { StackVal, StackVal, Vector(vVar34, StackVal, StackVal) * Vector(0.045f, 0.045f, 0.045f) };
					vVar37 = { StackVal, StackVal, Vector(vVar37, StackVal, StackVal) * Vector(0.06f, 0.06f, 0.06f) };
					GET_OBJECT_POSITION((*&Local_322 + 1916)[bVar0], &vVar43);
					vVar43 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar34, vVar43, StackVal) };
					vVar43 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar37, vVar43, StackVal) };
					bVar0++;
				}
				strcpy(&cVar46, "Table: ", 64);
				bVar0 = false;
				while (bVar0 <= 5)
				{
					Function_136(StackVal, *(&Local_322 + 12[bVar053] + 36[02]), &cVar62);
					if (bVar0 <= 4)
					{
						stradd(&cVar46, ": ", 64);
					}
					bVar0++;
				}
				DRAW_STRING_CURRENT_FONT(0.1f, 0.1f, &cVar46, 1.0f, 0.8f, 0.8f, 1.0f);
				bVar0 = false;
				while (bVar0 <= 6)
				{
					memcpy(&cVar46, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 12[bVar053] + 4), 16);
					Function_136(StackVal, *(&Local_322 + 12[bVar053] + 36[02]), &cVar62);
					stradd(&cVar46, ": ", 64);
					stradd(&cVar46, &cVar62, 64);
					Function_136(StackVal, *(&Local_322 + 12[bVar053] + 36[12]), &cVar62);
					stradd(&cVar46, ", ", 64);
					stradd(&cVar46, &cVar62, 64);
					DRAW_STRING_CURRENT_FONT(0.1f, (0.1f + (0.02f * IntToFloat(bVar0 + 2))), &cVar46, 1.0f, 1.0f, 1.0f, 1.0f);
					bVar0++;
				}
			}
		}
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x485 / 1157
{
	bool bVar0;
	int iVar1;
	
	NET_ENABLE_KICKING(1);
	Function_124();
	Function_123();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	NET_HUD_TUNE_VALUE("IconCamConstOffset", F2STR(0.5f, 1, 10));
	NET_GAMER_ICON_FORCE_VISIBLE(0);
	NET_GAMER_ICON_FORCE_TEXT_VISIBLE(0);
	if (NET_GET_PLAYMODE() == 0)
	{
		if (Function_122(37) == iLocal_313)
		{
			Function_121(37, 0);
		}
		Function_47(142, 4294967295, 1, 0, 0);
	}
	if (Function_46(0) >= 4294967295)
	{
		if ((*&Local_322 + 1288)[Local_322.f_13843] && NET_GET_PLAYMODE() != 0)
		{
			Function_44(((&Local_322 + 12[Function_46(1)53])->f_136 / 10), 1);
			bVar0 = (((&Local_322 + 12[Function_46(1)53])->f_136 - Local_257.f_68) / 10);
			Function_43(0, bVar0);
			if (bVar0 > 0)
			{
				Function_43(22, (-Local_257.f_68 / 10));
				Function_43(21, bVar0);
				Function_28(603, bVar0, 1, 0);
			}
			else
			{
				Function_43(22, (-Local_257.f_68 / 10));
				Function_43(22, -bVar0);
			}
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_playerWon"))
	{
		DECOR_REMOVE(Global_34573, "sc_poker_obj2_playerWon");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_npcBust"))
	{
		DECOR_REMOVE(Global_34573, "sc_poker_obj2_npcBust");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj3_fail"))
	{
		DECOR_REMOVE(Global_34573, "sc_poker_obj3_fail");
	}
	STREAMING_UNLOAD_SCENE();
	Function_25();
	iVar1 = 0;
	while (iVar1 <= Local_322.f_1288)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar1]))
		{
			DEREFERENCE_ACTOR((*&Local_257 + 12)[iVar1]);
		}
		iVar1++;
	}
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_24()), "iPokerTalkingPlayerId");
	if (Function_22(4194304))
	{
		Function_21(4, 1);
	}
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	END_CURRENT_MINIGAME();
	Function_19();
	if (Local_322.f_1364 != 4294967295)
	{
		Function_18();
	}
	UI_EXIT("BetPanel");
	UI_EXIT("Scores");
	UI_EXIT("BetPanel_1");
	UI_EXIT("BetPanel_2");
	UI_HIDE("Minigame");
	HUD_TIMER_DISPLAY(0);
	CANCEL_TIME_WARP(0);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_246, "Poker_StayOutvol"));
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_246, "Poker_StayOutvol"));
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(true);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(Function_24());
	Function_14();
	Function_13();
	RELEASE_LAYOUT_REF(bLocal_246);
	if (!(bLocal_3 || iLocal_2) || iLocal_916 != 2)
	{
		Function_7();
	}
	SET_ACTOR_INVULNERABILITY(Function_24(), 0);
	Function_6(Function_24());
	AI_STOP_IGNORING_ACTORS();
	Function_2();
	DESTROY_CAMERA(bLocal_253);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x7C2 / 1986
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_24(), true);
	Function_5(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_24()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_4();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
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

void Function_3() //Position: 0x844 / 2116
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_4() //Position: 0x859 / 2137
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_5(int iParam0) //Position: 0x86D / 2157
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_6(bool bParam0) //Position: 0x880 / 2176
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

int Function_7() //Position: 0x8A5 / 2213
{
	if (Function_11(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_8(16);
	return 1;
}

void Function_8(int iParam0) //Position: 0x8C3 / 2243
{
	Function_9(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x8FC / 2300
{
	Function_10(uParam0, iParam1);
	return;
}

void Function_10(int iParam0, int iParam1) //Position: 0x909 / 2313
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_11(int iParam0) //Position: 0x91C / 2332
{
	return Function_12(Global_79336, iParam0);
}

int Function_12(var uParam0, bool bParam1) //Position: 0x92B / 2347
{
	return (uParam0 && bParam1) == 0;
}

void Function_13() //Position: 0x938 / 2360
{
	return;
}

void Function_14() //Position: 0x93E / 2366
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	
	REMOVE_STRING_TABLE("nminigames");
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_17("$/fragments/p_gen_cards02x");
	Function_17("$/fragments/p_gen_dealerButton01x");
	Function_17("$/fragments/p_crd_01x");
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = iVar0;
			Var2.f_4 = iVar1;
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(&Var2, 0) };
			Function_17(&Var4);
			iVar1++;
		}
		iVar0++;
	}
	Function_17("$/fragments/p_crd_chipRedPoker01x");
	Function_17("$/fragments/p_crd_chipGreenPoker01x");
	Function_17("$/fragments/p_crd_chipBluePoker01x");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&Var4, Function_15(iVar0), 32);
		Function_17(&Var4);
		iVar0++;
	}
	STREAMING_EVICT_GRINGO(GET_ASSET_ID("fake_poker", 1));
	REMOVE_ACTION_TREE("custom/sit_poker");
	REMOVE_ACTION_TREE("custom/fake_poker");
	REMOVE_ANIM_SET("nsit_poker");
	REMOVE_ANIM_SET("sit_poker_gped");
	REMOVE_ANIM_SET("sit_poker_hillb");
	REMOVE_ANIM_SET("sit_poker_oldm");
	return;
}

var Function_15(bool bParam0) //Position: 0xB1D / 2845
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

struct<32> Function_16(int iParam0, bool bParam1) //Position: 0xE26 / 3622
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_crd_", 32);
	if (bParam1)
	{
		strcpy(&cVar0, "p_crd_", 32);
	}
	switch (*iParam0)
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
			if (bParam1)
			{
				stradd(&cVar0, "c01", 32);
			}
			else
			{
				stradd(&cVar0, "c01x", 32);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				stradd(&cVar0, "d01", 32);
			}
			else
			{
				stradd(&cVar0, "d01x", 32);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				stradd(&cVar0, "h01", 32);
			}
			else
			{
				stradd(&cVar0, "h01x", 32);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
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

void Function_17(bool bParam0) //Position: 0xFF2 / 4082
{
	STREAMING_EVICT_PROP(GET_ASSET_ID(bParam0, 0));
	return;
}

void Function_18() //Position: 0x1001 / 4097
{
	UI_EXIT("Poker_CheatCard");
	return;
}

void Function_19() //Position: 0x101C / 4124
{
	Function_20(0);
	Function_20(1);
	Function_20(2);
	Function_20(3);
	Function_20(4);
	Function_20(5);
	Function_20(6);
	Function_20(7);
	Function_20(8);
	Function_20(9);
	return;
}

int Function_20(int iParam0) //Position: 0x1056 / 4182
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_21(int iParam0, bool bParam1) //Position: 0x1062 / 4194
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, true);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, false);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, false);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, false);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, true);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, false);
			}
			break;
	}
	return;
}

bool Function_22(bool bParam0) //Position: 0x11D5 / 4565
{
	return Function_23(uLocal_252, bParam0);
}

bool Function_23(bool bParam0, bool bParam1) //Position: 0x11E2 / 4578
{
	return (bParam0 && bParam1) == 0;
}

int Function_24() //Position: 0x11EF / 4591
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_25() //Position: 0x1204 / 4612
{
	Function_26(1024, 0, 1);
	Function_26(1, 0, 0);
	return;
}

void Function_26(int iParam0, bool bParam1, int iParam2) //Position: 0x1218 / 4632
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_27(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_27(var uParam0, bool bParam1) //Position: 0x1240 / 4672
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

int Function_28(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x124F / 4687
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
	Function_42(iParam0, TO_FLOAT(bParam1), 1);
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x146F / 5231
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_40(390))), 32);
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
					bVar19 = (Function_39(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_39(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_37(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_34(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_31(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_30(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_30() //Position: 0x1A9C / 6812
{
	int iVar0;
	
	return iVar0;
}

var Function_31(int iParam0) //Position: 0x1AA4 / 6820
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_32(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1AB5 / 6837
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_33(char* cParam0, bool bParam1) //Position: 0x1BAA / 7082
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_34(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1BC3 / 7107
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_36(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_35(Function_36(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_35(int iParam0, int iParam1) //Position: 0x1C28 / 7208
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_36(int iParam0, bool bParam1) //Position: 0x1C3A / 7226
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_37(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1C4C / 7244
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
	if (((Function_38(iParam0) != 19 || Function_38(iParam0) != 17) || Function_38(iParam0) != 10) || Function_38(iParam0) != 9)
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

int Function_38(int iParam0) //Position: 0x1D7C / 7548
{
	return Global_35278[iParam020].f_48;
}

bool Function_39(int iParam0) //Position: 0x1D8B / 7563
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_40(int iParam0) //Position: 0x1DC4 / 7620
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_41(int iParam0) //Position: 0x1E01 / 7681
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

int Function_42(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F9B / 8091
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

void Function_43(int iParam0, int iParam1) //Position: 0x21DF / 8671
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_44(bool bParam0, int iParam1) //Position: 0x2204 / 8708
{
	Function_28(599, bParam0, iParam1, 0);
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_45(599));
	UI_SET_STRING("nMPDollars", I2STR(Function_45(599)));
	if (NET_GET_PLAYMODE() == 0)
	{
		UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
	}
	return 1;
}

int Function_45(int iParam0) //Position: 0x227A / 8826
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_46(int iParam0) //Position: 0x22BB / 8891
{
	int iVar0;
	
	if (Local_322.f_1384 > 0 || Local_322.f_1384 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_47(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x22F8 / 8952
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_43(5, 1);
	Function_8(4096);
	switch (Function_120())
	{
		case 0x00000011:
		case 0x00000002:
			Function_79(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_72();
	Function_71();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(false);
			Function_70(&Global_78480 + 220, &uVar0, 0);
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
				Function_67(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_70(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_48(bParam2);
}

void Function_48(bool bParam0) //Position: 0x2414 / 9236
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_65(2);
	if (bParam0)
	{
		Function_65(1);
	}
	else
	{
		Function_64(1);
	}
	Function_49();
	return;
}

void Function_49() //Position: 0x249D / 9373
{
	Function_62();
	Function_61();
	Function_61();
	Function_60();
	Function_60();
	Function_59();
	Function_59();
	Function_57(0);
	Function_57(0);
	if (!Function_56())
	{
		Function_54();
		Function_53();
		Function_52();
		Function_51();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_50();
	return;
}

void Function_50() //Position: 0x24EF / 9455
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

void Function_51() //Position: 0x25F5 / 9717
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

void Function_52() //Position: 0x2628 / 9768
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

void Function_53() //Position: 0x27B6 / 10166
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

void Function_54() //Position: 0x296A / 10602
{
	Function_55(&Global_28260, 1, 0);
	return;
}

void Function_55(int iParam0, bool bParam1, var uParam2) //Position: 0x2978 / 10616
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
	
	bVar0 = Function_24();
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

bool Function_56() //Position: 0x2B69 / 11113
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_57(int iParam0) //Position: 0x2B72 / 11122
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
					iVar2 = ((Function_45((50 + iVar4)) + Function_45((183 + iVar4))) + Function_45((90 + iVar4)));
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
	Function_58(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_58(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C18 / 11288
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
		Function_42(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_41(iParam0);
	if (bParam2)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

struct<8> Function_59() //Position: 0x2EB3 / 11955
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
		iVar2 = ((Function_45((50 + iVar3) + 15) + Function_45((183 + iVar3) + 15)) + Function_45((90 + iVar3) + 15));
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
	Function_58(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_60() //Position: 0x2F3C / 12092
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
			iVar2 = ((Function_45((50 + iVar3) + 8) + Function_45((183 + iVar3) + 8)) + Function_45((90 + iVar3) + 8));
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
	Function_58(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_61() //Position: 0x2FD3 / 12243
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
		iVar2 = ((Function_45((50 + iVar3)) + Function_45((183 + iVar3))) + Function_45((90 + iVar3)));
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
	Function_58(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_62() //Position: 0x3052 / 12370
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_63(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_58(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_63(int iParam0, bool bParam1, int iParam2) //Position: 0x308B / 12427
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
	Function_42(iParam0, bParam1, 1);
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_29(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_64(int iParam0) //Position: 0x3295 / 12949
{
	Function_9(&Global_79338, iParam0);
	return;
}

void Function_65(int iParam0) //Position: 0x32A4 / 12964
{
	Function_66(&Global_79338, iParam0);
	return;
}

void Function_66(var uParam0, int iParam1) //Position: 0x32B3 / 12979
{
	Function_27(uParam0, iParam1);
	return;
}

void Function_67(int iParam0) //Position: 0x32C0 / 12992
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_27(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_69(8));
	bVar0[0] = FLOOR(Function_69(8));
	if (Function_69(8) < 0.0f)
	{
		if (Function_68())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_69(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_69(7));
		bVar68[0] = bVar68[13];
		if (Function_68())
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

bool Function_68() //Position: 0x3367 / 13159
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_69(int iParam0) //Position: 0x3372 / 13170
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_70(var uParam0, var uParam1, bool bParam2) //Position: 0x3382 / 13186
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*uParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_71() //Position: 0x33C7 / 13255
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

void Function_72() //Position: 0x33F1 / 13297
{
	if (Global_83864.f_1264 > 6)
	{
		Function_73(&(Global_50170[522]));
		Function_73(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_73(&(Global_50170[722]));
		Function_73(&(Global_50170[822]));
		Function_73(&(Global_50170[922]));
		Function_73(&(Global_50170[1022]));
		Function_73(&(Global_50170[1122]));
	}
	return;
}

void Function_73(bool bParam0) //Position: 0x3451 / 13393
{
	Global_56092[*bParam0] = 0;
	Function_74(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_74(bool bParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x346B / 13419
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_78(bParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_77(bParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[bParam022] + 16), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_78(bParam0), &cVar0, 2, 2, true);
	}
	if (Function_76(bParam0, 4))
	{
		Function_75(Function_78(bParam0), 0);
	}
}

void Function_75(char* cParam0, bool bParam1) //Position: 0x3522 / 13602
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

bool Function_76(int iParam0, int iParam1) //Position: 0x3547 / 13639
{
	return Function_23(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_77(bool bParam0) //Position: 0x355B / 13659
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[bParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_78(bool bParam0) //Position: 0x358F / 13711
{
	return Global_50170[bParam022].f_24;
}

void Function_79(var uParam0, var uParam1, int iParam2) //Position: 0x359E / 13726
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_119(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_112(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_118(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_111(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_74(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_119(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_112(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_118(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_111(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_74(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_119(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_80(17, 150, Function_118(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_111(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_74(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_80(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3747 / 14151
{
	Function_109(bParam0, 1);
	Global_50170[bParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_78(bParam0), 1.0f, false, 0);
	Function_105(bParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_102(iParam3);
	}
	Function_96(&Global_50170[bParam022] + 16, bParam1, bParam2);
	Function_81();
}

void Function_81() //Position: 0x37AD / 14253
{
	if (!Function_56())
	{
		if (!Function_95(1, 3, 1, 1))
		{
			Function_83(1);
			Function_82(1, 8);
		}
	}
	else
	{
		Function_48(0);
	}
	return;
}

void Function_82(int iParam0, int iParam1) //Position: 0x37D6 / 14294
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_56())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_83(bool bParam0) //Position: 0x3818 / 14360
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_84();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_49();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_10(&Global_63095, 1);
		Function_10(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_84() //Position: 0x3869 / 14441
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_94())
	{
		Function_91(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_91(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_86(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_86(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_85(StackVal, StackVal, vVar0))
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

bool Function_85(vector3 vParam0) //Position: 0x3924 / 14628
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_86(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x393C / 14652
{
	int iVar0;
	
	iVar0 = Function_89(uParam2, uParam3);
	if (Function_88(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_27(&Global_63095, 1);
			Function_10(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_27(&Global_63095, 2);
			Function_10(&Global_63095, 1);
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
		Function_27(&Global_63095, 2);
		Function_10(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_87();
	return StackVal, StackVal, Function_87();
}

vector3 Function_87() //Position: 0x3A23 / 14883
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_88(int iParam0) //Position: 0x3A2C / 14892
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_89(bool bParam0, bool bParam1) //Position: 0x3A42 / 14914
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
				fVar2 = Function_90(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_90(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_88(bVar0) && !bParam1)
	{
		bVar0 = Function_89(bParam0, 1);
	}
	return bVar0;
}

float Function_90(vector3 vParam0, vector3 vParam3) //Position: 0x3B09 / 15113
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_91(var uParam0, int iParam1) //Position: 0x3B26 / 15142
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_93(Global_34573, &vVar4);
	if (!Function_92(Global_30640[0]))
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
	if (!Function_92(Global_30640[2]))
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
	if (!Function_92(Global_30640[1]))
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
	if (!Function_92(Global_30658[1]))
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
	if (!Function_92(Global_30658[3]))
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
	if (!Function_92(Global_30658[2]))
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
	if (!Function_92(Global_30658[4]))
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
	if (!Function_92(Global_30668[0]))
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
	if (!Function_92(Global_30668[1]))
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
	if (!Function_92(Global_30668[2]))
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
	if (!Function_92(Global_30679[0]))
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
	if (!Function_92(Global_30685[0]))
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
	if (!Function_92(Global_30685[1]))
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
	if (!Function_92(Global_30685[2]))
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
	if (!Function_92(Global_30693[0]))
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
	if (!Function_92(Global_30693[1]))
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
	if (!Function_92(Global_30693[2]))
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
	if (!Function_92(Global_30707[2]))
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
	if (!Function_92(Global_30707[3]))
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
	if (!Function_92(Global_30707[0]))
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
	if (!Function_92(Global_30717[0]))
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
	if (!Function_92(Global_30723[2]))
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
	if (!Function_92(Global_30723[1]))
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
	if (!Function_92(Global_30723[0]))
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
	if (!Function_92(Global_30679[1]))
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
	if (!Function_92(Global_30707[1]))
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
	Function_27(&Global_63095, 2);
	Function_10(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_85(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_92(int iParam0) //Position: 0x434C / 17228
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_23(uVar0, 0x1000000) || Function_23(uVar0, 0x2000000)) || Function_23(uVar0, 0x4000000)) || !Function_23(uVar0, 0x10000000));
}

void Function_93(bool bParam0, bool bParam1) //Position: 0x4387 / 17287
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_94() //Position: 0x4394 / 17300
{
	if (Function_23(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_95(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x43AF / 17327
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4453 / 17491
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_101();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_100(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_99(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_98(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_97(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_100(), iVar1 + 1);
	return;
}

struct<16> Function_97(int iParam0) //Position: 0x44C5 / 17605
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_98(int iParam0) //Position: 0x44E6 / 17638
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_99(int iParam0) //Position: 0x4507 / 17671
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_100() //Position: 0x4528 / 17704
{
	return "CQueue_Count";
}

var Function_101() //Position: 0x453D / 17725
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_102(int iParam0) //Position: 0x456C / 17772
{
	Function_103(iParam0, 1);
	return;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x4578 / 17784
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_27(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_104((iVar0 % 32)));
	}
	else
	{
		Function_10(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_104((iVar0 % 32)));
	}
	return;
}

bool Function_104(bool bParam0) //Position: 0x45CE / 17870
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_105(bool bParam0, int iParam1) //Position: 0x45DA / 17882
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (bParam0 <= 58 && bParam0 >= 186) != 10) && !Function_108(bParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_78(bParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(bParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_77(bParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_106(bParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_78(bParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_78(bParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_78(bParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_106(int iParam0) //Position: 0x465C / 18012
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_77(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_107(int iParam0) //Position: 0x467C / 18044
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_108(int iParam0) //Position: 0x46AD / 18093
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

void Function_109(bool bParam0, bool bParam1) //Position: 0x482B / 18475
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_110();
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

var Function_110() //Position: 0x4977 / 18807
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_111(var uParam0, bool bParam1, bool bParam2) //Position: 0x49C4 / 18884
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_112(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12) //Position: 0x49DC / 18908
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_77(bParam0) };
	Function_96(&Var0, bParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_111(&fParam5, bParam8, bParam9);
	Function_74(bParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_114(bParam0, bParam9, bParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_102(iParam12);
	}
	Function_113(bParam0, 4);
	Function_81();
}

void Function_113(bool bParam0, int iParam1) //Position: 0x4A52 / 19026
{
	Function_10(&Global_50170[bParam022] + 32, iParam1);
	return;
}

void Function_114(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4A66 / 19046
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (bParam0 <= 58 && bParam0 >= 186) != 10) && !Function_108(bParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_78(bParam0));
	if ((bParam3 && Function_76(bParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_78(bParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(bParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_77(bParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_117(bParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_116(bParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_106(bParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_78(bParam0), &Var7, 0, 2, Function_76(bParam0, 4));
			if (!bParam3)
			{
				Function_115(bParam0, 4);
			}
		}
	}
}

void Function_115(int iParam0, int iParam1) //Position: 0x4B23 / 19235
{
	Function_27(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_116(int iParam0) //Position: 0x4B37 / 19255
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_117(int iParam0) //Position: 0x4B65 / 19301
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_118() //Position: 0x4B95 / 19349
{
	return "MP_Unstoppable_Icon_128";
}

float Function_119(int iParam0) //Position: 0x4BB5 / 19381
{
	return Global_50170[iParam022].f_12;
}

int Function_120() //Position: 0x4BC4 / 19396
{
	return Global_79349.f_16;
}

void Function_121(int iParam0, int iParam1) //Position: 0x4BD0 / 19408
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

int Function_122(int iParam0) //Position: 0x4BEA / 19434
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_123() //Position: 0x4C03 / 19459
{
	FLASH_SET_INT("numberSystem", "nshowTimer", false);
	return;
}

void Function_124() //Position: 0x4C29 / 19497
{
	Function_126();
	Function_125(uLocal_928);
	return;
}

int Function_125(bool bParam0) //Position: 0x4C39 / 19513
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_126() //Position: 0x4C4F / 19535
{
	struct<17> Var0;
	
	Function_128();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_127(&Var0);
	return;
}

void Function_127(int iParam0) //Position: 0x4C71 / 19569
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_128() //Position: 0x4C81 / 19585
{
	Function_129();
	return;
}

void Function_129() //Position: 0x4C8A / 19594
{
	Function_130(4294967286);
	return;
}

void Function_130(bool bParam0) //Position: 0x4C96 / 19606
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_135(&uVar0);
		Function_134(&vVar1);
		vVar1.z = uVar0;
		Function_127(&vVar1);
	}
	Function_133(&uVar0, bParam0);
	Function_132(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_131(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_131(var uParam0, int iParam1) //Position: 0x4CD3 / 19667
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_132(int iParam0) //Position: 0x4CE6 / 19686
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x4CF5 / 19701
{
	*uParam0 = iParam1;
	return;
}

void Function_134(int iParam0) //Position: 0x4D00 / 19712
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_135(int iParam0) //Position: 0x4D10 / 19728
{
	*iParam0 = Global_78480.f_120;
	return;
}

void Function_136(struct<5> Param0) //Position: 0x4D1F / 19743
{
	strcpy(cParam2, "", 24);
	switch (Param0)
	{
		case 0x00000000:
			stradd(cParam2, "2of", 24);
			break;
		
		case 0x00000001:
			stradd(cParam2, "3of", 24);
			break;
		
		case 0x00000002:
			stradd(cParam2, "4of", 24);
			break;
		
		case 0x00000003:
			stradd(cParam2, "5of", 24);
			break;
		
		case 0x00000004:
			stradd(cParam2, "6of", 24);
			break;
		
		case 0x00000005:
			stradd(cParam2, "7of", 24);
			break;
		
		case 0x00000006:
			stradd(cParam2, "8of", 24);
			break;
		
		case 0x00000007:
			stradd(cParam2, "9of", 24);
			break;
		
		case 0x00000008:
			stradd(cParam2, "10of", 24);
			break;
		
		case 0x00000009:
			stradd(cParam2, "Jof", 24);
			break;
		
		case 0x0000000A:
			stradd(cParam2, "Qof", 24);
			break;
		
		case 0x0000000B:
			stradd(cParam2, "Kof", 24);
			break;
		
		case 0x0000000C:
			stradd(cParam2, "Aof", 24);
			break;
	}
	switch (StackVal)
	{
		case 0x00000000:
			stradd(cParam2, "C", 24);
			break;
		
		case 0x00000001:
			stradd(cParam2, "D", 24);
			break;
		
		case 0x00000002:
			stradd(cParam2, "H", 24);
			break;
		
		case 0x00000003:
			stradd(cParam2, "S", 24);
			break;
	}
	return;
}

int Function_137(int iParam0) //Position: 0x4E78 / 20088
{
	int iVar0;
	
	if (Local_322.f_1388 > 0 || Local_322.f_1388 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

bool Function_138() //Position: 0x4EB5 / 20149
{
	if (IS_BUTTON_DOWN(Function_437(), 14, 1, false))
	{
		Function_436();
	}
	else
	{
		Function_435();
	}
	Function_434(&Global_50170[23622] + 4, &Global_50170[23622] + 8, &Global_50170[23622] + 12);
	Function_425(&Global_50170[23722] + 4, &Global_50170[23722] + 8, &Global_50170[23722] + 12);
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_424(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_253));
	}
	Function_422(3);
	Function_421();
	Function_417(uLocal_928, &Local_322, 94574, 1);
	bLocal_254 = (GET_CURRENT_GAME_TIME() - fLocal_255);
	fLocal_250 = (fLocal_250 + bLocal_254);
	Function_63(425, bLocal_254, 0);
	fLocal_255 = GET_CURRENT_GAME_TIME();
	if (Function_46(0) >= 4294967295)
	{
		if ((*&Local_322 + 1288)[Local_322.f_13843] == 1)
		{
			Function_416(bLocal_254);
		}
	}
	if (IS_EXITFLAG_SET())
	{
		Function_415();
		return 0;
	}
	if (Function_46(0) >= 4294967295)
	{
		if (IS_ACTOR_VALID((*&Local_322 + 12)[Function_46(1)53]))
		{
			if (IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[Function_46(1)53], "sit_poker/player/look_at_cards") && (IS_BUTTON_DOWN(Function_437(), 1, 1, false) || Function_22(0x20000000)))
			{
				Function_414(3, 1);
			}
			else
			{
				Function_414(3, 0);
			}
		}
	}
	Function_411();
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			if (Function_409())
			{
				Function_407();
				UI_SHOW("Minigame");
				Function_403(&Local_322);
				Function_402(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1396));
				iLocal_0 = 0;
			}
			break;
		
		case 0x00000000:
			Function_385();
			break;
		
		case 0x00000001:
			Function_199();
			break;
		
		case 0x00000003:
			Function_177();
			break;
		
		case 0x00000029:
			if (Function_174(&iLocal_247))
			{
				Function_173(0);
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
		Function_139();
		return 0;
	}
	if (bLocal_3)
	{
		Function_415();
		return 0;
	}
	return 1;
}

void Function_139() //Position: 0x5096 / 20630
{
	if (Global_29006 == Global_30640[0])
	{
		Function_140(0, Global_30640[0]);
	}
	if (Global_29006 == Global_30717[0])
	{
		Function_140(0, Global_30717[0]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x50CE / 20686
{
	if (!Function_172(3))
	{
		return;
	}
	if (Function_56())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3() || Function_171())
				{
					Function_145(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_145(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_145(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_145(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_145(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_145(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_145(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_144(2) && !Function_141(2))
				{
					Function_145(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_141(int iParam0) //Position: 0x51E0 / 20960
{
	if (!Function_143(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_142(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_142(int iParam0, int iParam1) //Position: 0x5231 / 21041
{
	int iVar0;
	
	if (!Function_143(iParam0))
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

bool Function_143(int iParam0) //Position: 0x525E / 21086
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_144(int iParam0) //Position: 0x5274 / 21108
{
	if (!Function_143(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_142(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x52C6 / 21190
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_143(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_172(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_142(bParam0, 2))
	{
		Function_28(456, 1, 0, 0);
		Function_170(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_168(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_167(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_170(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_95(0, 0, 1, 1))
			{
				Function_83(1);
				Function_82(1, 0);
			}
			else
			{
				Function_166();
			}
		}
		Function_163(bParam0);
		if (StackVal && !Function_23(((((!Function_162() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_23((((Function_162() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_94())
		{
			if (!Function_161(Global_76846, 2))
			{
				Function_156(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_148();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_147(3, bParam1);
				break;
			
			case 0x00000005:
				Function_147(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_147(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_147(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_147(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_147(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_146(2, 24);
				break;
			
			case 0x00000003:
				Function_146(2, 25);
				break;
			
			case 0x0000000F:
				Function_146(2, 26);
				break;
			
			case 0x0000000D:
				Function_146(2, 27);
				break;
			
			case 0x0000000E:
				Function_146(2, 28);
				break;
			}
	}
}

void Function_146(int iParam0, bool bParam1) //Position: 0x555C / 21852
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_147(int iParam0, bool bParam1) //Position: 0x55C3 / 21955
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_148() //Position: 0x562E / 22062
{
	if (Function_143(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_155(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_155(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_149(int iParam0, int iParam1) //Position: 0x56A9 / 22185
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_151(6, 0) || Function_151(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_150(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_151(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_150(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_151(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_150(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_150(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_150(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_151(6, 0) && Function_150(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_151(9, 0) && Function_150(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_151(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_85(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_85(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_85(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_150(int iParam0) //Position: 0x629A / 25242
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0, bool bParam1) //Position: 0x62AF / 25263
{
	int iVar0;
	
	iVar0 = Function_153(iParam0);
	if (!Function_152(iVar0))
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

bool Function_152(int iParam0) //Position: 0x62EC / 25324
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_153(int iParam0) //Position: 0x6303 / 25347
{
	if (!Function_154(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_154(int iParam0) //Position: 0x631D / 25373
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_155(int iParam0) //Position: 0x6333 / 25395
{
	int iVar0;
	int iVar1;
	
	if (!Function_143(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

void Function_156(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x6382 / 25474
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_158(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_157(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_157(char* cParam0, int iParam1) //Position: 0x63EE / 25582
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_158(bool bParam0, var uParam1, int iParam2) //Position: 0x6425 / 25637
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_160(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_159(uVar0))
		{
			case 0x00000002:
				if (!Function_161(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_159(char* cParam0) //Position: 0x649D / 25757
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

int Function_160(int iParam0) //Position: 0x653E / 25918
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_10(&iVar1, 2147483648);
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

bool Function_161(int iParam0, int iParam1) //Position: 0x657B / 25979
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_162() //Position: 0x658E / 25998
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_163(bool bParam0) //Position: 0x65BB / 26043
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_167(bParam0, Function_104(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_167(bParam0, Function_104(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_165(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_75(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_164(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_164(int iParam0) //Position: 0x676B / 26475
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_143(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

var Function_165(int iParam0) //Position: 0x67C2 / 26562
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_143(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

void Function_166() //Position: 0x6818 / 26648
{
	return;
}

bool Function_167(bool bParam0, bool bParam1) //Position: 0x681E / 26654
{
	int iVar0;
	
	if (!Function_143(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_168(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x687D / 26749
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_169(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_169(int iParam0) //Position: 0x68F8 / 26872
{
	char* cVar0[16];
	
	if (!Function_94())
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

void Function_170(int iParam0, int iParam1) //Position: 0x6937 / 26935
{
	if (!Function_143(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_171() //Position: 0x698C / 27020
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_23(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_172(int iParam0) //Position: 0x69BC / 27068
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_173(int iParam0) //Position: 0x69D8 / 27096
{
	iLocal_0 = 3;
	iLocal_1 = 0;
	iLocal_916 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			NET_LOG(true, "Poker", "Quitting Poker: PASS", false, false, false, false);
			break;
		
		case 0x00000001:
			NET_LOG(true, "Poker", "Quitting Poker: FAIL", false, false, false, false);
			break;
		
		case 0x00000002:
			NET_LOG(true, "Poker", "Quitting Poker: CANCEL", false, false, false, false);
			break;
		
		default:
			NET_LOG(true, "Poker", "Quitting Poker: <SOME OTHER REASON>", false, false, false, false);
			break;
	}
	return;
}

bool Function_174(int iParam0) //Position: 0x6ABB / 27323
{
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
				Function_20(6);
				Function_20(5);
				Function_20(4);
				Function_20(3);
				Function_20(2);
				Function_20(1);
				Function_20(0);
				Function_168("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_175(iParam0);
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			return 1;
			break;
	}
	return 0;
}

void Function_175(int iParam0) //Position: 0x6B47 / 27463
{
	Function_176(iParam0, 0.0f);
	return;
}

void Function_176(int iParam0, float fParam1) //Position: 0x6B53 / 27475
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_27(iParam0, 1);
	Function_10(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_177() //Position: 0x6B74 / 27508
{
	int iVar0;
	bool bVar1;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (!HUD_IS_FADING())
			{
				if (iLocal_916 == 1)
				{
					if (Global_29004 == 0)
					{
						AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					else if (Global_29004 == 1)
					{
						AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
					else if (Global_29004 == 2)
					{
						AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
					}
				}
				START_MINIGAME(5);
				UI_EXIT("Scores");
				UI_EXIT("BetPanel");
				Function_19();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				UI_EXIT("Poker_CheatMeter");
				if (Local_322.f_1364 != 4294967295)
				{
					Function_18();
				}
				if (Function_22(32768))
				{
					Function_198(32768);
				}
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_22(8192))
			{
				EQUIP_ACCESSORY(Function_24(), 1, 1);
			}
			Function_192();
			if (Function_46(1) >= 4294967295)
			{
				if ((*&Local_322 + 1288)[Local_322.f_13843] && NET_GET_PLAYMODE() != 0)
				{
					Function_44(((&Local_322 + 12[Function_46(1)53])->f_136 / 10), 1);
					bVar1 = (((&Local_322 + 12[Function_46(1)53])->f_136 - Local_257.f_68) / 10);
					Function_43(0, bVar1);
					if (bVar1 > 0)
					{
						Function_43(22, (-Local_257.f_68 / 10));
						Function_43(21, bVar1);
						Function_28(603, bVar1, 1, 0);
					}
					else
					{
						Function_43(22, (-Local_257.f_68 / 10));
						Function_43(22, -bVar1);
					}
					if (Local_322.f_1376 == 1)
					{
						Function_185(Function_190(&Local_322, 1), 0, 1);
					}
				}
			}
			if ((*&Local_322 + 1288)[Local_322.f_13843])
			{
				Function_184(StackVal, GET_GRINGO_FROM_OBJECT(&bLocal_253));
				Function_181(&Local_322, Function_46(1), 1);
			}
			else if (Function_180("fake_poker"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Function_24(), "sit_poker/Player/leave_game/stand");
			}
			iLocal_1 = 8;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_322.f_1288)
			{
				if ((*&Local_322 + 1288)[iVar03])
				{
					Function_179(GET_GRINGO_FROM_OBJECT(StackVal));
					if (IS_ACTOR_VALID((*&Local_322 + 12)[StackVal53]))
					{
						RESET_ANIM_SET_FOR_ACTOR((*&Local_322 + 12)[StackVal53], 1);
						SET_ANIM_SET_FOR_ACTOR((*&Local_322 + 12)[StackVal53], "sit_poker_ambient", 0);
						while (!ACTOR_HAS_ANIM_SET((*&Local_322 + 12)[StackVal53], "sit_poker_ambient") && !IS_EXITFLAG_SET())
						{
							WAIT(false);
						}
						SET_AUTO_CONVERSATION_LOOK((*&Local_322 + 12)[StackVal53], 1);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[StackVal53], "sit_poker/Fake/card_idle");
						TASK_PRIORITY_SET((*&Local_322 + 12)[StackVal53], 2);
					}
				}
				iVar0++;
			}
			Function_178(&Local_322);
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "sit_poker/Player/leave_game/stand"))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000009:
			if (!HUD_IS_FADING())
			{
				if (iLocal_916 == 0)
				{
					iLocal_2 = 1;
				}
				else if (iLocal_916 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_916 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_178(int iParam0) //Position: 0x6F77 / 28535
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			iVar2 = StackVal;
			if (IS_OBJECT_VALID((iParam0 + 12[iVar253])->f_156))
			{
				DESTROY_OBJECT((iParam0 + 12[iVar253])->f_156);
			}
			if (IS_OBJECT_VALID((iParam0 + 12[iVar253])->f_160))
			{
				DESTROY_OBJECT((iParam0 + 12[iVar253])->f_160);
			}
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (IS_OBJECT_VALID((*iParam0 + 12[iVar253] + 164)[iVar1]))
				{
					DESTROY_OBJECT((*iParam0 + 12[iVar253] + 164)[iVar1]);
				}
				iVar1++;
			}
			if (IS_OBJECT_VALID((*iParam0 + 12[iVar253] + 36 + 60)[0]))
			{
				DESTROY_OBJECT((*iParam0 + 12[iVar253] + 36 + 60)[0]);
			}
			if (IS_OBJECT_VALID((*iParam0 + 12[iVar253] + 36 + 60)[1]))
			{
				DESTROY_OBJECT((*iParam0 + 12[iVar253] + 36 + 60)[1]);
			}
		}
		iVar0++;
	}
	if (IS_OBJECT_VALID(bLocal_311))
	{
		DESTROY_OBJECT(bLocal_311);
	}
	if (IS_OBJECT_VALID(bLocal_312))
	{
		DESTROY_OBJECT(bLocal_312);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (IS_OBJECT_VALID((*iParam0 + 1916)[iVar0]))
		{
			DESTROY_OBJECT((*iParam0 + 1916)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_179(bool bParam0) //Position: 0x70B2 / 28850
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (iVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			SHOW_PHYSINST(bVar3);
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
	}
	return;
}

bool Function_180(char* cParam0) //Position: 0x7121 / 28961
{
	bool bVar0;
	char* cVar1;
	char* cVar2[64];
	char* cVar18[64];
	
	bVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
	if (IS_GRINGO_VALID(bVar0))
	{
		cVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0));
		strcpy(&cVar18, cParam0, 64);
		strcpy(&cVar2, cVar1, 64);
		STRING_LOWER(&cVar2);
		STRING_LOWER(&cVar18);
		if (STRINGS_ARE_EQUAL(&cVar2, &cVar18) || STRING_CONTAINS_STRING(&cVar2, &cVar18))
		{
			return 1;
		}
	}
	return 0;
}

void Function_181(int iParam0, int iParam1, bool bParam2) //Position: 0x716F / 29039
{
	int iVar0;
	
	(*iParam0 + 1288)[(iParam0 + 12[iParam153])->f_1323] = 0;
	if (bParam2)
	{
		(iParam0 + 1288[(iParam0 + 12[iParam153])->f_1323])->f_4 = 4294967295;
		if (IS_ACTOR_VALID((*iParam0 + 12)[iParam153]))
		{
			TASK_CLEAR((*iParam0 + 12)[iParam153]);
			if ((iParam0 + 12[iParam153])->f_128 == 3)
			{
				RELEASE_ACTOR((*iParam0 + 12)[iParam153]);
				TASK_WANDER((*iParam0 + 12)[iParam153], 3212836864);
			}
			else if (!IS_ACTOR_PLAYER((*iParam0 + 12)[iParam153]))
			{
				TASK_WANDER((*iParam0 + 12)[iParam153], 3212836864);
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS((*iParam0 + 12)[iParam153], 1);
			Function_183(iParam0 + 12[iParam153]);
			ACTOR_END_FORCE_HOLSTER((*iParam0 + 12)[iParam153]);
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[iParam153], "sit_poker/Player/leave_game/stand");
		}
		strcpy(iParam0 + 12[iParam153] + 4, "", 32);
	}
	(*iParam0 + 1288)[(iParam0 + 12[iParam153])->f_1323] = 0;
	(iParam0 + 12[iParam153])->f_132 = 4294967295;
	Function_182(iParam0 + 12[iParam153] + 36);
	if (IS_ACTOR_VALID((*iParam0 + 12)[iParam153]))
	{
		SET_AUTO_CONVERSATION_LOOK((*iParam0 + 12)[iParam153], 1);
	}
	(iParam0 + 12[iParam153])->f_136 = 0;
	DESTROY_OBJECT((iParam0 + 12[iParam153])->f_160);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		DESTROY_OBJECT((*iParam0 + 12[iParam153] + 164)[iVar0]);
		iVar0++;
	}
	DESTROY_OBJECT((iParam0 + 12[iParam153])->f_156);
	iParam0->f_1376 = (iParam0->f_1376 - 1);
	return;
}

void Function_182(int iParam0) //Position: 0x72FE / 29438
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar02] = 4294967295;
		iParam0[iVar02]->f_4 = 4294967295;
		iVar0++;
	}
	iParam0->f_84 = 0;
	iParam0->f_88 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_60)
	{
		if (IS_OBJECT_VALID((*iParam0 + 60)[iVar0]))
		{
			DESTROY_OBJECT((*iParam0 + 60)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_183(int iParam0) //Position: 0x7360 / 29536
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		REMOVE_OBJECT_ATTACHMENT((*iParam0 + 184)[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		REMOVE_OBJECT_ATTACHMENT((*iParam0 + 36 + 72)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_184(var uParam0, bool bParam1) //Position: 0x73A2 / 29602
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = 0.6f;
		fVar13 = 1.0f;
		fVar14 = 1.3f;
		fVar15 = 0.4f;
		fVar16 = 1.2f;
		fVar17 = -0.4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar25);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(vVar19, vVar25, 1);
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

int Function_185(float fParam0, int iParam1, bool bParam2) //Position: 0x752D / 29997
{
	if (!Function_189())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_187(8, fParam0);
	}
	Function_186(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_186(var uParam0, bool bParam1, int iParam2) //Position: 0x755D / 30045
{
	Function_28(uParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

void Function_187(int iParam0, float fParam1) //Position: 0x7579 / 30073
{
	Function_188(iParam0, (Function_69(iParam0) + fParam1));
	return;
}

void Function_188(int iParam0, var uParam1) //Position: 0x758C / 30092
{
	(*&Global_78480 + 176)[iParam0] = uParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = uParam1;
	}
	return;
}

bool Function_189() //Position: 0x75B5 / 30133
{
	if (Function_56())
	{
		return (Function_120() != 1 || Function_120() != 0);
	}
	return 0;
}

float Function_190(var uParam0, int iParam1) //Position: 0x75CE / 30158
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = ((TO_FLOAT(StackVal) * 2.0f) / TO_FLOAT(Local_257.f_68));
	PRINTSTRING("XPRatio = ");
	PRINTFLOAT(bVar0);
	PRINTNL();
	switch (iParam1)
	{
		case 0x00000001:
			bVar1 = (Function_191(0) * bVar0);
			break;
		
		case 0x00000002:
			bVar1 = (Function_191(1) * bVar0);
			break;
		
		case 0x00000003:
			bVar1 = (Function_191(2) * bVar0);
			break;
	}
	PRINTSTRING("XPDelta = ");
	PRINTFLOAT(bVar1);
	PRINTNL();
	return bVar1;
}

float Function_191(int iParam0) //Position: 0x7657 / 30295
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

void Function_192() //Position: 0x7677 / 30327
{
	if (StackVal && !Function_193(StackVal, Function_196(Function_197(iLocal_916 != 0))))
	{
		Function_28(410, 1, 0, 0);
		Function_146(6, 10);
	}
	return;
}

bool Function_193(int iParam0, int iParam1) //Position: 0x76AA / 30378
{
	int iVar0;
	
	if (!Function_195(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_197(iVar0) != iParam0 && Function_196(iVar0) != iParam1)
		{
			if (Function_194(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_194(int iParam0) //Position: 0x76EF / 30447
{
	if (!Function_152(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_195(int iParam0) //Position: 0x7709 / 30473
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

int Function_196(int iParam0) //Position: 0x771E / 30494
{
	if (!Function_152(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

int Function_197(int iParam0) //Position: 0x773E / 30526
{
	if (!Function_152(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_198(int iParam0) //Position: 0x7759 / 30553
{
	Function_10(&uLocal_252, iParam0);
	return;
}

void Function_199() //Position: 0x7766 / 30566
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	bool bVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	vector3 vVar24;
	vector3 vVar27;
	char* cVar30[64];
	bool bVar46;
	float fVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	bool bVar67;
	bool bVar68;
	float fVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	
	Function_382();
	if (Function_22(2))
	{
		Function_176(&iLocal_247, (Function_380(&iLocal_247) + 0.2f));
	}
	Function_375(&Local_322);
	Function_372(&Local_322);
	if (HUD_IS_SHOWING_HELP_TEXT() && !(bLocal_912 != 10 || bLocal_912 != 12))
	{
		if (IS_BUTTON_PRESSED(Function_437(), 6, 1, false) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
			Function_371(&iLocal_316);
			if (Global_28178 == 3)
			{
				Function_370(&iLocal_316, 17);
				Function_370(&iLocal_316, 6);
			}
		}
	}
	switch (bLocal_912)
	{
		case 0x00000000:
			bVar21 = false;
			while (bVar21 <= 6)
			{
				if ((*&Local_322 + 1288)[bVar213])
				{
					NET_LOG(StackVal, StackVal, StackVal, true, "Poker", "Seat %s, Player %s, %s, has chip count of %s", I2STR((&Local_322 + 12[GET_SLOT_NAME(Function_369((*&Local_322 + 12)[I2STR(I2STR(bVar21))53]))53])->f_136));
					bVar20 = (StackVal + (&Local_322 + 12[bVar2053])->f_136);
				}
				else
				{
					NET_LOG(true, "Poker", "Seat %s is vacant", I2STR(bVar21), false, false, false);
				}
				bVar21++;
			}
			PRINTSTRING("The sum of all chips is ");
			PRINTINT(bVar20);
			PRINTNL();
			PRINTSTRING("The pot is worth ");
			PRINTINT(Local_322.f_1944);
			PRINTNL();
			bVar21 = false;
			while (bVar21 <= 6)
			{
				if (StackVal >= 4294967295)
				{
					if ((&Local_322 + 12[StackVal53])->f_128 != 3 && !(*&Local_322 + 1288)[bVar213])
					{
						DESTROY_ACTOR((*&Local_322 + 12)[StackVal53]);
						(&Local_322 + 12[053])->f_128 = StackVal;
						NET_LOG(true, "POKER", "Linkdead player in seat ", I2STR(bVar21), " has been destroyed, and brain set to AI", false, false);
					}
				}
				bVar21++;
			}
			switch (Local_322.f_1940)
			{
				case 0x00000000:
					iVar22 = Function_368(&Local_322 + 1288, Local_322.f_1388);
					Function_198(8388608);
					if (iVar22 != 4294967295)
					{
						iVar23 = StackVal;
						if (iVar23 == 4294967295)
						{
						}
					}
					Function_362(&Local_322);
					if (Function_46(0) >= 4294967295)
					{
						Function_360(&Local_322, &bLocal_253, iVar23, Function_46(0), 1);
					}
					iLocal_917 = 0;
					Function_198(2);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_137(1)53], "sit_poker/dealer/idle");
					if (Local_257 && Local_322.f_1388 != Local_322.f_1384)
					{
						if (Function_354(&bLocal_253))
						{
							Local_257 = 0;
							HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
							HUD_FADE_IN(1.0f, 1065353216);
							Function_353(3, 0);
						}
					}
					else
					{
						if (!IS_OBJECT_VALID(bLocal_311))
						{
							strcpy(&cVar30, "deck", 64);
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bLocal_311 = CREATE_PROP_IN_LAYOUT(bLocal_246, &cVar30, "$/fragments/p_gen_cards02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							if (IS_ATTACHMENT_VALID(iLocal_910))
							{
								REMOVE_OBJECT_ATTACHMENT(iLocal_910);
							}
							Function_352((*&Local_322 + 12)[Function_137(1)53], &vVar24, &vVar27);
							SET_OBJECT_POSITION(bLocal_311, vVar24);
							SET_OBJECT_ORIENTATION(bLocal_311, vVar27);
							Function_351(bLocal_311, (*&Local_322 + 12)[Function_137(1)53]);
							NET_OBJECT_REPLICATION_MODE_END(17);
							Function_349(&Local_322);
						}
						else
						{
							if (IS_ATTACHMENT_VALID(iLocal_910))
							{
								REMOVE_OBJECT_ATTACHMENT(iLocal_910);
							}
							Function_352((*&Local_322 + 12)[Function_137(1)53], &vVar24, &vVar27);
							SET_OBJECT_POSITION(bLocal_311, vVar24);
							SET_OBJECT_ORIENTATION(bLocal_311, vVar27);
						}
						if (HUD_IS_FADED())
						{
							if (!Function_22(32768))
							{
								HUD_FADE_IN(1.0f, 1065353216);
							}
						}
						Function_348(8, 0);
						Function_198(256);
						NET_LOG(true, "Poker", "!!!PKR_WAIT_FOR_REMOTE_DEAL!!!", false, false, false, false);
						Function_353(16, 0);
					}
					break;
				
				case 0x00000001:
					Function_347(&Local_322);
					Function_353(17, 0);
					break;
				
				case 0x00000002:
					Function_346(&Local_322);
					Function_353(17, 0);
					break;
				
				case 0x00000003:
					if (!Function_345(&Local_322))
					{
						Function_438(8388608);
					}
					else
					{
						Function_198(8388608);
					}
					Function_343(&Local_322);
					Function_353(17, 0);
					break;
			}
			break;
		
		case 0x00000001:
			Local_322.f_4 = StackVal;
			Local_322.f_8 = StackVal * 2;
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_342("Poker_Increase_Blinds", 7.5f, 1, 2, 0, 0, 0, 0);
			Function_341();
			Function_353(2, 0);
			break;
		
		case 0x00000002:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_353(3, 0);
			}
			break;
		
		case 0x00000003:
			Function_340(&Local_322);
			Function_175(&iLocal_247);
			Function_353(4, 0);
			break;
		
		case 0x00000004:
			if ((Function_380(&iLocal_247) < 1.5f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_22(32768))
			{
				Function_353(5, 0);
			}
			break;
		
		case 0x00000005:
			if (((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[Function_137(1)53], "sit_poker/dealer/idle") || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[Function_137(1)53], "sit_poker/Player/card_idle")) || Function_339((*&Local_322 + 12)[Function_137(1)53])) || Function_338((*&Local_322 + 12)[Function_137(1)53]))
			{
				Function_337(&Local_322);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_pre");
				Function_175(&iLocal_247);
				Function_353(6, 0);
			}
			break;
		
		case 0x00000006:
			if (!IS_ATTACHMENT_VALID(iLocal_910))
			{
				if (DECOR_CHECK_EXIST((*&Local_322 + 12)[Function_137(1)53], "bPokerAttachDeck"))
				{
					iLocal_910 = ATTACH_OBJECTS_NO_DRV(bLocal_311, GET_OBJECT_FROM_ACTOR((*&Local_322 + 12)[Function_137(1)53]), "elbow_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				}
			}
			if (((Function_380(&iLocal_247) < 1.5f && !HUD_IS_SHOWING_HELP_TEXT()) && IS_ATTACHMENT_VALID(iLocal_910)) || Function_22(32768))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_336(&bLocal_253, (*&Local_322 + 12)[Function_137(1)53]);
				Function_353(7, 0);
			}
			break;
		
		case 0x00000007:
			if (!IS_ATTACHMENT_VALID(iLocal_910))
			{
				iLocal_910 = ATTACH_OBJECTS_NO_DRV(bLocal_311, GET_OBJECT_FROM_ACTOR((*&Local_322 + 12)[Function_137(1)53]), "elbow_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			}
			iLocal_917 = 1;
			if ((Function_22(32768) && Function_137(1) != Function_46(1)) && Global_28178 != 3)
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
				Function_198(32768);
			}
			if (!HUD_IS_FADING())
			{
				Function_19();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (Function_137(0) >= 4294967295)
				{
					if (Function_137(0) == Function_46(0))
					{
						PRINT_OBJECTIVE_FORMAT(2.5f, "Poker_Player_Is_DealerSelf", Function_334(), false, false, false, 0, 2, 0, 0, 0);
					}
					else
					{
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Function_137(1), &Local_322) };
						PRINT_OBJECTIVE_FORMAT(2.5f, "Poker_Player_Is_Dealer", &Var4, false, false, false, 0, 2, 0, 0, 0);
					}
				}
				Function_175(&iLocal_247);
				if (!Function_22(32768))
				{
					if (Function_46(1) == Function_137(1))
					{
						if (Function_325(&iLocal_316, 6))
						{
							Function_168("Poker_DealerHelpMP", 9.0f, 1, 0, 2, 1, 0);
						}
					}
				}
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					Function_323();
				}
				iLocal_256 = 0;
				Function_353(8, 0);
			}
			break;
		
		case 0x00000011:
			bVar46 = false;
			switch (Local_322.f_1940)
			{
				case 0x00000001:
					if ((&Local_322 + 1824)->f_84 == 3)
					{
						if (!Function_22(2) && !Function_22(32768))
						{
							if (Function_325(&iLocal_316, 10))
							{
								Function_168("Poker_FlopHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar46 = true;
					}
					break;
				
				case 0x00000002:
					if ((&Local_322 + 1824)->f_84 == 4)
					{
						if (!Function_22(2) && !Function_22(32768))
						{
							if (Function_325(&iLocal_316, 11))
							{
								Function_168("Poker_TurnHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar46 = true;
					}
					break;
				
				case 0x00000003:
					if ((&Local_322 + 1824)->f_84 == 5)
					{
						if (!Function_22(2) && !Function_22(32768))
						{
							if (Function_325(&iLocal_316, 12))
							{
								Function_168("Poker_RiverHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar46 = true;
					}
					break;
				
				case 0x00000000:
				default:
					LOG_ERROR("Shouldn't be waiting for table deal now");
					break;
			}
			if (bVar46)
			{
				Function_322(&bLocal_253, &Local_322, 0);
				Function_175(&iLocal_247);
				iLocal_915 = 0;
				Function_362(&Local_322);
				Function_353(8, 0);
			}
			break;
		
		case 0x00000008:
			if (Local_322.f_1940 == 0)
			{
				fVar47 = -1.0f;
				bVar21 = false;
				while (bVar21 <= Local_322.f_1288)
				{
					if ((*&Local_322 + 1288)[bVar213])
					{
						if (Function_321(&Local_322 + 12[StackVal53]))
						{
							(&Local_322 + 12[Function_320(&Local_322 + 12[StackVal53] + 36)53])->f_208 = StackVal;
						}
					}
					bVar21++;
				}
				bVar48 = true;
			}
			else
			{
				if (Function_22(32768))
				{
					fVar47 = -1.0f;
				}
				else
				{
					fVar47 = 2.0f;
				}
				iVar49 = iLocal_915;
				if (iVar49 <= 5)
				{
					if ((*&Local_322 + 1288)[iVar493])
					{
						if (StackVal && Function_321(&Local_322 + 12[(StackVal || (&Local_322 + 12[(StackVal || (&Local_322 + 12[(&Local_322 + 12[StackVal53])->f_128 != 053])->f_128 != 2)53])->f_128 != 1)53]))
						{
							iVar50 = StackVal;
							(&Local_322 + 12[TO_FLOAT(Function_311(&Local_322 + 12[iVar5053] + 36, &Local_322 + 1824, &iVar50, &iVar50, &iVar50))53])->f_208 = StackVal;
							iVar50 = StackVal;
							bVar48 = true;
							if (bVar48)
							{
								iLocal_915++;
								bVar48 = false;
							}
						}
						else
						{
							iLocal_915++;
							bVar48 = false;
						}
					}
					else
					{
						iLocal_915++;
						bVar48 = false;
					}
				}
				else
				{
					bVar48 = true;
				}
			}
			if (Function_380(&iLocal_247) < fVar47 && bVar48)
			{
				if ((Function_300(&Local_322) && (!HUD_IS_SHOWING_HELP_TEXT() || Function_22(32768))) || Function_22(64))
				{
					if (Local_322.f_1940 == 0)
					{
						Function_298(&Local_322);
					}
					if (Function_324(&Local_322) && !HUD_IS_FADED())
					{
						iVar51 = Function_297(&Local_322);
						SAY_SINGLE_LINE_CONTEXT((*&Local_322 + 12)[iVar5153], 282, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					Function_438(1024);
					Function_353(9, 1);
					CANCEL_TIME_WARP(0);
				}
			}
			break;
		
		case 0x00000009:
			Function_19();
			Function_18();
			CANCEL_TIME_WARP(0);
			if (Function_321(&Local_322 + 12[Function_296(1)53]))
			{
				bVar52 = ((&Local_322 + 12[Function_296(1)53])->f_136 < 0 && (Function_295(&Local_322) < 1 || Local_322.f_1948 < 0));
				bVar53 = true;
				switch ((&Local_322 + 12[Function_296(1)53])->f_128)
				{
					case 0x00000000:
						if (bVar52)
						{
							if (!Function_294(&Local_322))
							{
								Function_360(&Local_322, &bLocal_253, Function_296(1), Function_46(0), bVar53);
								Function_198(1024);
							}
							if (Function_22(1))
							{
								Function_353(10, 0);
							}
							else
							{
								PRINTSTRING("------------------------ AI  ");
								PRINTINT(StackVal);
								PRINTSTRING(" ------------------------");
								PRINTNL();
								PRINTSTRING("nBoard is ");
								Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1824));
								PRINTSTRING("Player Hand is ");
								Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 12[Function_296(1)53] + 36));
								Function_353(13, 0);
							}
						}
						else
						{
							NET_LOG(true, "Poker", "AI Player had no chips or nobody else did", false, false, false, false);
							Function_353(25, 0);
						}
						break;
					
					case 0x00000001:
						if (bVar52 || Local_322.f_1364 == 4294967295)
						{
							if (!Function_294(&Local_322))
							{
								Function_198(1024);
							}
							PRINTSTRING("------------------------ Player  ");
							PRINTINT(StackVal);
							PRINTSTRING(" ------------------------");
							PRINTNL();
							PRINTSTRING("nBoard is ");
							Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1824));
							PRINTSTRING("Player Hand is ");
							Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 12[Function_296(1)53] + 36));
							Function_353(10, 0);
							Function_175(&iLocal_247);
						}
						else
						{
							NET_LOG(true, "Poker", "Local Player had no chips or nobody else did", false, false, false, false);
							Function_353(25, 0);
						}
						break;
					
					case 0x00000002:
						if (bVar52)
						{
							if (!Function_294(&Local_322))
							{
								Function_360(&Local_322, &bLocal_253, Function_296(1), Function_46(0), bVar53);
								Function_198(1024);
							}
							PRINTSTRING("------------------------ Remote Player  ");
							PRINTINT(StackVal);
							PRINTSTRING(" ------------------------");
							PRINTNL();
							PRINTSTRING("nBoard is ");
							Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1824));
							PRINTSTRING("Player Hand is ");
							Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 12[Function_296(1)53] + 36));
							Function_353(14, 0);
						}
						else
						{
							NET_LOG(true, "Poker", "Remote Player had no chips or nobody else did", false, false, false, false);
							Function_353(25, 0);
						}
						break;
					
					case 0x00000003:
						NET_LOG(true, "Poker", "Encountered Linkdead player", false, false, false, false);
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Function_296(1), &Local_322) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds", &Var4, "", "", "", 0, 2, 0, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/bet_request/fold_B");
						Function_291(&Local_322 + 12[Function_296(1)53]);
						Function_175(&iLocal_247);
						Function_353(23, 0);
						break;
				}
			}
			else
			{
				NET_LOG(true, "Poker", "Player #%s had no hand", I2STR(Function_296(1)), false, false, false);
				Function_353(25, 0);
			}
			break;
		
		case 0x0000000E:
			iLocal_917 = 0;
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Function_296(1), &Local_322) };
			PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, "", "", "", 0, 2, 0, 0, 0);
			Function_175(&iLocal_247);
			Function_353(15, 0);
			NET_GAMER_SET_ACTOR_OVERRIDE(Function_369((*&Local_322 + 12)[Function_296(1)53]), (*&Local_322 + 12)[Function_296(1)53]);
			NET_GAMER_ICON_FORCE_VISIBLE(1);
			NET_GAMER_ICON_FORCE_TEXT_VISIBLE(1);
			NET_GAMER_SET_TEAM(Function_369((*&Local_322 + 12)[Function_296(1)53]), 0);
			break;
		
		case 0x0000000F:
			Function_290(&Local_322);
			if ((&Local_322 + 12[Function_296(1)53])->f_128 == 3)
			{
				Local_926 = 2;
			}
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Function_296(1), &Local_322) };
			switch (Local_926)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
					break;
				
				case 0x00000003:
					Function_283(StackVal, &Local_322, Function_296(1), 0, 0);
					NET_GAMER_SET_ACTOR_OVERRIDE(Function_369((*&Local_322 + 12)[Function_296(1)53]), false);
					Function_353(22, 0);
					Function_175(&iLocal_247);
					Local_926 = 0;
					break;
				
				case 0x00000002:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds", &Var4, "", "", "", 0, 2, 0, 0, 0);
					NET_GAMER_SET_ACTOR_OVERRIDE(Function_369((*&Local_322 + 12)[Function_296(1)53]), false);
					Function_353(23, 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/bet_request/fold_B");
					Function_291(&Local_322 + 12[Function_296(1)53]);
					Function_175(&iLocal_247);
					Local_926 = 0;
					break;
				
				case 0x00000001:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var4, "", "", "", 0, 2, 0, 0, 0);
					NET_GAMER_SET_ACTOR_OVERRIDE(Function_369((*&Local_322 + 12)[Function_296(1)53]), false);
					Function_353(23, 0);
					bVar54 = RAND_INT_RANGE(false, 100);
					if (bVar54 <= 50)
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/player/bet_request/fold");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/bet_request/fold_B");
					}
					Function_291(&Local_322 + 12[Function_296(1)53]);
					Function_282();
					Function_175(&iLocal_247);
					Local_926 = 0;
					break;
				
				case 0x00000006:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Left_Table", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_181(&Local_322, Function_296(1), 1);
					Local_926 = 0;
					Function_175(&iLocal_247);
					NET_GAMER_SET_ACTOR_OVERRIDE(Function_369((*&Local_322 + 12)[Function_296(1)53]), false);
					Function_353(24, 0);
					break;
				
				default:
					LOG_ERROR("Unhandled Remote Action!!!");
					break;
			}
			break;
		
		case 0x0000000A:
			UI_ENTER("BetPanel");
			UI_ENTER("nBetAmount");
			UI_ENTER("BetPanel_1");
			UI_ENTER("BetPanel_2");
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_1", "%s %s", UI_GET_STRING("Poker_FoldButton"), "<x>", false);
			UI_SET_TEXT("BetPanel_1", "GENERIC_DBUFFER32_1");
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CheckButton"), "<action>", false);
			UI_SET_TEXT("BetPanel_2", "GENERIC_DBUFFER32_0");
			iLocal_917 = 3;
			if (Function_22(32768))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
				Function_198(32768);
			}
			Function_281(&Local_322, Function_46(0));
			Function_280();
			if (!Function_22(32768))
			{
				if (Function_325(&iLocal_316, 3))
				{
					Function_168("Poker_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			Function_279();
			if (!Local_322.f_1364 != 4294967295)
			{
				Function_278(StackVal, *(&Local_322 + 1364));
			}
			if (!IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pre") && !IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_mid"))
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/player/look_at_cards");
				Function_291(&Local_322 + 12[Function_296(1)53]);
			}
			Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 12[Function_296(1)53] + 36));
			bLocal_908 = (Local_322.f_1948 - (&Local_322 + 12[Function_296(1)53])->f_140);
			Function_311(&Local_322 + 12[Function_296(1)53] + 36, &Local_322 + 1824, &uVar55, &uVar56, &uVar57);
			bLocal_908 = (Local_322.f_1948 - (&Local_322 + 12[Function_296(1)53])->f_140);
			bLocal_908 = Function_276(&Local_322, bLocal_908, 1);
			UI_LABEL_SET_VALUE("nBetAmount", bLocal_908);
			Function_353(12, 0);
			break;
		
		case 0x0000000C:
			bVar58 = true;
			bVar59 = bLocal_908;
			if (!IS_BUTTON_DOWN(Function_437(), 9, 1, false))
			{
				if ((Function_295(&Local_322) < 1 && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) && UI_ISACTIVE("HudSceneOnline"))
				{
					if ((GET_STICK_Y(Function_437(), 0, 1) > -0.2f || IS_BUTTON_PRESSED(Function_437(), 12, 1, false)) || IS_BUTTON_DOWN(Function_437(), 12, 1, false))
					{
						if (iLocal_321 == 1)
						{
							fLocal_911 = (fLocal_911 - 0.008f);
						}
						else
						{
							fLocal_911 = 0.2f;
						}
						iLocal_321 = 1;
						if (Function_380(&iLocal_318) < fLocal_911)
						{
							if (fLocal_911 < 0.0f)
							{
								bLocal_908++;
							}
							else if (fLocal_911 < -0.5f)
							{
								bLocal_908 += 10;
							}
							else
							{
								bLocal_908 += 100;
							}
							bLocal_908 = Function_276(&Local_322, bLocal_908, 1);
							UI_LABEL_SET_VALUE("nBetAmount", bLocal_908);
							Function_175(&iLocal_318);
						}
					}
					else if ((GET_STICK_Y(Function_437(), 0, 1) < 0.2f || IS_BUTTON_PRESSED(Function_437(), 14, 1, false)) || IS_BUTTON_DOWN(Function_437(), 14, 1, false))
					{
						if (iLocal_321 == 4294967295)
						{
							fLocal_911 = (fLocal_911 - 0.008f);
						}
						else
						{
							fLocal_911 = 0.2f;
						}
						iLocal_321 = 4294967295;
						if (Function_380(&iLocal_318) < fLocal_911)
						{
							if (fLocal_911 < 0.0f)
							{
								bLocal_908 = (bLocal_908 - 1);
							}
							else if (fLocal_911 < -0.5f)
							{
								bLocal_908 = (bLocal_908 - 10);
							}
							else
							{
								bLocal_908 = (bLocal_908 - 100);
							}
							bLocal_908 = Function_276(&Local_322, bLocal_908, 0);
							UI_LABEL_SET_VALUE("nBetAmount", bLocal_908);
							Function_175(&iLocal_318);
						}
					}
					else
					{
						iLocal_321 = 0;
						fLocal_911 = 0.2f;
					}
				}
			}
			bVar59 = (bVar59 - bLocal_908);
			if (bVar59 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			if (((Function_274(7) || Function_272(&iLocal_247, 63976)) && Function_271(&Local_322)) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (Function_269(&iLocal_247, 30.0f))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds_Self", Function_334(), false, false, false, 0, 2, 0, 0, 0);
					Function_267(2, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds_Self", Function_334(), false, false, false, 0, 2, 0, 0, 0);
					Function_267(1, 0);
				}
				bVar60 = RAND_INT_RANGE(false, ((100 * (&Local_322 + 12[Function_296(1)53])->f_152) / Function_266(&Local_322)));
				if (bVar60 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/player/bet_request/fold");
				}
				Function_291(&Local_322 + 12[Function_296(1)53]);
				Function_175(&iLocal_247);
				if (!Function_22(32768))
				{
					if (Function_325(&iLocal_316, 2))
					{
						Function_168("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_282();
				Function_123();
				iLocal_917 = 0;
				UI_EXIT("BetPanel");
				HUD_TIMER_DISPLAY(0);
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_353(23, 0);
				bVar58 = false;
			}
			else if (Function_274(6) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pst");
				bVar58 = false;
				iLocal_917 = 0;
				HUD_TIMER_DISPLAY(0);
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_353(21, 0);
				Function_123();
			}
			if (Function_380(&iLocal_247) < 30.0f)
			{
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					iVar61 = Function_297(&Local_322);
					SAY_SINGLE_LINE_CONTEXT((*&Local_322 + 12)[iVar6153], 291, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_175(&iLocal_247);
			}
			if (bVar58)
			{
			}
			else
			{
				Function_19();
			}
			if (bLocal_908 >= 0)
			{
				if ((&Local_322 + 12[Function_296(1)53])->f_136 == bLocal_908)
				{
					UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_AllInButton"), "<action>", false);
				}
				else if (Local_322.f_1948 >= 0)
				{
					if (((&Local_322 + 12[Function_296(1)53])->f_140 + bLocal_908) >= Local_322.f_1948)
					{
						UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_RaiseButton"), "<action>", false);
					}
					else
					{
						UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CallButton"), "<action>", false);
					}
				}
				else
				{
					UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_BetButton"), "<action>", false);
				}
			}
			else
			{
				UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CheckButton"), "<action>", false);
			}
			UI_SET_TEXT("BetPanel_2", "GENERIC_DBUFFER32_0");
			UI_REFRESH("BetPanel_2");
			Function_262();
			if (Function_22(0x20000000) && bLocal_912 != 12)
			{
				Function_258(&Local_322, Function_296(1));
				if (bLocal_912 == 23)
				{
					UI_EXIT("BetPanel");
				}
				Function_123();
				iLocal_917 = 0;
				Function_19();
				Function_175(&iLocal_247);
			}
			break;
		
		case 0x00000015:
			Function_360(&Local_322, &bLocal_253, Function_296(1), Function_46(0), 1);
			if ((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[Function_296(1)53], "/Global/sit_poker/Player/card_idle") || Function_22(32768)) || Function_22(64))
			{
				UI_EXIT("BetPanel");
				Function_283(&Local_322, Function_296(1), bLocal_908, 0, 0);
				Function_267(3, bLocal_908);
				NET_LOG(true, "Poker", "State: PKR_ONE_FRAME_PAUSE", false, false, false, false);
				Function_290(&Local_322);
				Function_281(&Local_322, Function_46(1));
				Function_175(&iLocal_247);
				Function_353(22, 0);
			}
			break;
		
		case 0x00000016:
			if (((Function_380(&iLocal_247) < 0.75f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_22(64)) || Function_22(32768))
			{
				Function_353(25, 1);
			}
			else
			{
				Function_290(&Local_322);
			}
			break;
		
		case 0x00000014:
			if ((Function_380(&iLocal_247) < 1.5f || Function_22(64)) || Function_22(32768))
			{
				Function_353(25, 1);
			}
			break;
		
		case 0x00000018:
			if (Function_380(&iLocal_247) < 1.5f)
			{
				Function_353(25, 1);
			}
			break;
		
		case 0x00000017:
			Function_360(&Local_322, &bLocal_253, Function_296(1), Function_46(0), 1);
			if (((Function_380(&iLocal_247) < 0.75f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_22(64)) || Function_22(32768))
			{
				Function_353(25, 1);
			}
			else
			{
				Function_290(&Local_322);
			}
			break;
		
		case 0x00000010:
			if (Function_22(512))
			{
				if (Function_246(3, 1, 0x3f800000))
				{
					Function_198(512);
					if (Function_22(0x10000000))
					{
						fLocal_250 = 0.0f;
						Function_353(1, 0);
					}
					else
					{
						Function_353(3, 0);
					}
				}
				else if (NET_IS_SESSION_HOST())
				{
					Function_242(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1396), fLocal_250);
				}
			}
			else if (NET_IS_SESSION_HOST())
			{
				Function_242(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1396), fLocal_250);
			}
			break;
		
		case 0x00000012:
			NET_LOG(true, "Poker", "Waiting to move to state #%s", Function_241(bLocal_913), false, false, false);
			Function_238(bLocal_913);
			Function_353(19, 0);
			break;
		
		case 0x00000013:
			if (Function_246(bLocal_913, 0, 0x3f800000))
			{
				Function_353(bLocal_913, 0);
			}
			break;
		
		case 0x00000019:
			if (((!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_253) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_253) != 1) || Function_22(64)) || Function_22(32768))
			{
				Function_19();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (Function_368(&Local_322 + 1288, Local_322.f_1380) == Local_322.f_1392)
				{
					NET_LOG(true, "Poker", "Player to left of CurrentPlayer is the raiser", false, false, false, false);
					if (Local_322.f_1952 >= 0)
					{
						NET_LOG(true, "Poker", "UnderBet > 0", false, false, false, false);
						iVar62 = ((&Local_322 + 12[Function_237(1)53])->f_140 - Local_322.f_1952);
						(&Local_322 + 12[Function_237(1)53])->f_136 = ((&Local_322 + 12[Function_237(1)53])->f_136 + iVar62);
						(&Local_322 + 12[Function_237(1)53])->f_140 = ((&Local_322 + 12[Function_237(1)53])->f_140 - iVar62);
						(&Local_322 + 12[Function_237(1)53])->f_152 = ((&Local_322 + 12[Function_237(1)53])->f_152 - iVar62);
						Local_322.f_1944 = (Local_322.f_1944 - iVar62);
					}
					else if (Local_322.f_1944 == (&Local_322 + 12[Function_237(1)53])->f_148)
					{
						NET_LOG(true, "Poker", "Raise Not Called at all", false, false, false, false);
						iVar62 = (&Local_322 + 12[Function_237(1)53])->f_144;
						(&Local_322 + 12[Function_237(1)53])->f_136 = ((&Local_322 + 12[Function_237(1)53])->f_136 + iVar62);
						(&Local_322 + 12[Function_237(1)53])->f_140 = ((&Local_322 + 12[Function_237(1)53])->f_140 - iVar62);
						(&Local_322 + 12[Function_237(1)53])->f_152 = ((&Local_322 + 12[Function_237(1)53])->f_152 - iVar62);
						Local_322.f_1944 = (Local_322.f_1944 - iVar62);
					}
					else
					{
						NET_LOG(true, "Poker", "Third Choice", false, false, false, false);
					}
					Function_353(26, 0);
				}
				else
				{
					Function_353(9, 0);
				}
				Local_322.f_1380 = Function_368(&Local_322 + 1288, Local_322.f_1380);
				iVar63 = Function_236(&Local_322, &iVar64);
				if (iVar63 == 1)
				{
					NET_LOG(true, "Poker", "Nobody's left", false, false, false, false);
					Function_353(26, 0);
					Local_322.f_1940 = 3;
				}
				Function_198(16);
			}
			break;
		
		case 0x0000001A:
			iLocal_917 = 2;
			if (Local_322.f_1940 == 3)
			{
				PRINTSTRING("Board at time of river is: ");
				Function_293(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_322 + 1824));
				if (Function_22(64))
				{
					Function_235(StackVal, StackVal, &bLocal_253, *(&Local_257 + 152));
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					HUD_FADE_IN(1.0f, 1065353216);
					bLocal_914 = 26;
					Function_353(55, 0);
				}
				else
				{
					Function_233(&Local_322);
					if (Function_232(&Local_322))
					{
						Function_438(8);
						if (Local_322.f_1984 == 1)
						{
							Function_438(128);
						}
						else
						{
							Function_198(128);
						}
						Function_235(StackVal, StackVal, &bLocal_253, *(&Local_257 + 152));
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_342("Poker_SidePot", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_175(&iLocal_247);
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 13))
							{
								Function_168("Poker_SidePotHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						if (Local_322.f_1984 < 0)
						{
							Function_353(34, 0);
						}
						else
						{
							Function_353(27, 0);
						}
					}
					else if (Function_22(8))
					{
						Function_235(StackVal, StackVal, &bLocal_253, *(&Local_257 + 152));
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_342("Poker_MainPot", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_175(&iLocal_247);
						Function_353(27, 0);
						Function_198(8);
					}
					else
					{
						Function_175(&iLocal_247);
						if (Local_322.f_1984 < 0)
						{
							Function_353(34, 0);
						}
						else
						{
							Function_353(28, 0);
						}
					}
				}
			}
			else
			{
				Local_322.f_1380 = Function_368(&Local_322 + 1288, Local_322.f_1388);
				bLocal_908 = StackVal;
				Function_231(&Local_322);
				Local_322.f_1940++;
				Function_353(0, 1);
			}
			break;
		
		case 0x0000001B:
			if ((Function_380(&iLocal_247) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_22(32768))
			{
				Function_175(&iLocal_247);
				Function_353(28, 0);
			}
			break;
		
		case 0x0000001C:
			bVar1 = (Local_322.f_1984 - 1);
			if (bVar1 > 0 || bVar1 <= 6)
			{
			}
			bVar2 = (*&Local_322 + 1956)[bVar1];
			if (bVar2 > 0 || bVar2 <= 6)
			{
			}
			bVar3 = bVar2 == Function_46(0);
			if (Function_321(&Local_322 + 12[bVar253]))
			{
				Function_336(&bLocal_253, (*&Local_322 + 12)[bVar253]);
				if (Function_236(&Local_322, &iVar65) < 1 && !Function_22(128))
				{
					if (!Function_23((&Local_322 + 12[bVar253])->f_204, 1))
					{
						Function_230(&Local_322 + 12[bVar253]);
						Function_229(&Local_322 + 12[bVar253]);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/player/bet_request/reveal_cards");
					}
					if (!Function_22(2))
					{
						Function_228(bVar1, bVar3, bVar2);
					}
					Function_175(&iLocal_247);
					if (!Function_22(32768))
					{
						if (Function_325(&iLocal_316, 16))
						{
							Function_168("Poker_WinHelp", 9.0f, 1, 0, 2, 1, 0);
						}
					}
					if (Function_23((&Local_322 + 12[bVar253])->f_204, 1))
					{
						Function_227(&bLocal_253, &Local_322, (*&Local_322 + 1956)[(Local_322.f_1984 - 1)]);
						Function_175(&iLocal_247);
						Function_353(31, 0);
					}
					else
					{
						Function_353(30, 0);
					}
				}
				else
				{
					if ((IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[bVar253], "sit_poker/Player/card_idle/idle") || IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[bVar253], "sit_poker/Player/card_idle/StareCheck/stare")) || Function_22(32768))
					{
						if (Function_22(32768))
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/card_idle/idle");
						}
						if ((bVar2 != Function_46(1) && !Function_22(0x8000000)) && !Function_22(8))
						{
							Function_28(424, 1, 0, 0);
						}
						if (bVar2 == Function_46(1))
						{
							Function_353(32, 0);
						}
						else
						{
							Function_353(33, 0);
						}
					}
					if (IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[bVar253], "sit_poker/Player/look_at_cards/open_pre") || IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[bVar253], "sit_poker/Player/look_at_cards/open_mid"))
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/look_at_cards/open_pst");
					}
				}
			}
			else
			{
				Function_175(&iLocal_247);
				Function_353(34, 0);
			}
			break;
		
		case 0x00000020:
			bVar1 = (Local_322.f_1984 - 1);
			bVar2 = (*&Local_322 + 1956)[bVar1];
			bVar3 = bVar2 == Function_46(0);
			if ((&Local_322 + 12[bVar253])->f_128 == 1)
			{
				iLocal_917 = 4;
			}
			if ((((&Local_322 + 12[bVar253])->f_128 != 1 && Function_274(6)) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) || (Function_22(0x20000000) && RAND_INT_RANGE(false, 1000) >= 25))
			{
				Function_267(4, 0);
				Function_230(&Local_322 + 12[bVar253]);
				Function_229(&Local_322 + 12[bVar253]);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/player/bet_request/reveal_cards");
				Function_228(bVar1, bVar3, bVar2);
				Function_175(&iLocal_247);
				Function_20(0);
				Function_353(30, 0);
				iLocal_917 = 2;
			}
			else if (Function_380(&iLocal_247) < 2.5f)
			{
				Function_267(5, 0);
				Function_20(0);
				Function_226(&Local_322 + 12[bVar253] + 36);
				Function_353(36, 0);
				iLocal_917 = 2;
			}
			break;
		
		case 0x00000021:
			bVar1 = (Local_322.f_1984 - 1);
			bVar2 = (*&Local_322 + 1956)[bVar1];
			bVar3 = bVar2 == Function_46(0);
			if ((&Local_322 + 12[bVar253])->f_128 == 3)
			{
				Local_926 = 5;
			}
			if (Local_926 == 4)
			{
				Local_926 = 0;
				Function_230(&Local_322 + 12[bVar253]);
				Function_229(&Local_322 + 12[bVar253]);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/player/bet_request/reveal_cards");
				Function_228(bVar1, bVar3, bVar2);
				Function_175(&iLocal_247);
				Function_20(0);
				Function_353(30, 0);
				iLocal_917 = 2;
			}
			else if (Local_926 == 5)
			{
				Local_926 = 0;
				Function_20(0);
				Function_226(&Local_322 + 12[bVar253] + 36);
				Function_353(36, 0);
				iLocal_917 = 2;
			}
			break;
		
		case 0x0000001D:
			if ((Function_380(&iLocal_247) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_22(32768))
			{
				Function_353(31, 0);
			}
			break;
		
		case 0x0000001E:
			if ((Function_380(&iLocal_247) < 0.8f && (IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53], "sit_poker/Player/bet_request/reveal_cards/reveal_mid") || IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53], "sit_poker/Player/join_game/idle"))) || Function_22(32768))
			{
				Function_227(&bLocal_253, &Local_322, (*&Local_322 + 1956)[(Local_322.f_1984 - 1)]);
				if (!Function_23((&Local_322 + 12[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53])->f_204, 1))
				{
					SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53], "sit_poker/Player/bet_request/reveal_cards/reveal_pst");
				}
				Function_175(&iLocal_247);
				Function_353(31, 0);
			}
			break;
		
		case 0x0000001F:
			if ((Function_380(&iLocal_247) < 2.0f && ((IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53], "sit_poker/Player/bet_request/reveal_cards/reveal_idle") || IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53], "sit_poker/Player/join_game/idle")) || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53], "sit_poker/Player/card_idle"))) || Function_22(32768))
			{
				Function_27(&Local_322 + 12[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53] + 204, 1);
				Function_226(&Local_322 + 12[(*&Local_322 + 1956)[(Local_322.f_1984 - 1)]53] + 36);
				Function_353(34, 0);
			}
			break;
		
		case 0x00000022:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Local_322.f_1984 = (Local_322.f_1984 - 1);
			if (Local_322.f_1984 >= 0)
			{
				Function_353(28, 0);
			}
			else if (Local_322.f_2212 >= 1)
			{
				Function_438(0x8000000);
				Function_235(StackVal, StackVal, &bLocal_253, *(&Local_257 + 152));
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_342("Poker_SplitPot", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_175(&iLocal_247);
				if (!Function_22(32768))
				{
					if (Function_325(&iLocal_316, 14))
					{
						Function_168("Poker_SplitPotHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_353(35, 0);
			}
			else if (Local_322.f_2212 < 0)
			{
				Function_353(38, 0);
			}
			else
			{
				Function_353(36, 0);
			}
			break;
		
		case 0x00000023:
			if ((Function_380(&iLocal_247) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_22(32768))
			{
				Function_175(&iLocal_247);
				Function_353(36, 0);
			}
			break;
		
		case 0x00000024:
			bVar1 = (Local_322.f_2212 - 1);
			bVar2 = (*&Local_322 + 2072)[bVar1];
			if ((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[bVar253], "sit_poker/Player/card_idle") || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/reveal_idle")) || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_322 + 12)[bVar253], "sit_poker/Player/join_game"))
			{
				if (Function_22(32768))
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					HUD_FADE_IN(1.0f, 1065353216);
				}
				bVar3 = bVar2 == Function_46(0);
				if (Local_322.f_2212 >= 0)
				{
					if (Function_22(16384))
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 20))
							{
								Function_168("Poker_KickerHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
					}
					(&Local_322 + 12[bVar253])->f_136 = ((&Local_322 + 12[bVar253])->f_136 + (*&Local_322 + 2184)[bVar1]);
					Local_322.f_1944 = (Local_322.f_1944 - (*&Local_322 + 2184)[bVar1]);
					NET_LOG(true, "POKER", "Player %s is awarded %s for a total of %s with %s left in the pot.", I2STR(bVar2), I2STR((*&Local_322 + 2184)[bVar1]), I2STR((&Local_322 + 12[bVar253])->f_136), I2STR(Local_322.f_1944));
					if (bVar2 == Function_46(1))
					{
						DECOR_SET_INT(Global_34573, "sc_poker_obj2_playerWon", true);
						Function_438(2048);
						PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
						if ((*&Local_322 + 2184)[bVar1] > 2000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(9))
							{
								AWARD_ACHIEVEMENT(9);
							}
						}
						if ((Function_236(&Local_322, &iVar66) < 1 && !Function_22(128)) && !Function_22(0x8000000))
						{
							if (Function_345(&Local_322) && Function_22(8388608))
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(72))
								{
									AWARD_ACHIEVEMENT(72);
								}
							}
						}
						else if (Function_236(&Local_322, &iVar66) >= 1 && !Function_22(128))
						{
							if (!Function_345(&Local_322))
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(71))
								{
									AWARD_ACHIEVEMENT(71);
								}
							}
						}
						if ((*&Local_322 + 2184)[bVar1] / 10) >= Function_45(413)
						{
							Function_58(413, ((*&Local_322 + 2184)[bVar1] / 10), 0);
						}
						Global_13172[(Global_13172[StackVal11].f_32 + 1.0f)11].f_32 = StackVal;
						if (NET_GET_PLAYMODE() == 0)
						{
							Function_43(7, 1);
						}
						if (Function_236(&Local_322, &iVar66) < 1 && !Function_22(128))
						{
							switch ((*&Local_322 + 2100)[bVar1])
							{
								case 0x00000001:
									Function_28(414, 1, 0, 0);
									break;
								
								case 0x00000002:
									Function_28(415, 1, 0, 0);
									break;
								
								case 0x00000003:
									Function_28(416, 1, 0, 0);
									break;
								
								case 0x00000004:
									Function_28(417, 1, 0, 0);
									break;
								
								case 0x00000005:
									Function_28(418, 1, 0, 0);
									break;
								
								case 0x00000006:
									Function_28(420, 1, 0, 0);
									break;
								
								case 0x00000007:
									Function_28(419, 1, 0, 0);
									break;
								
								case 0x00000008:
									Function_28(421, 1, 0, 0);
									break;
								
								case 0x00000009:
									Function_28(422, 1, 0, 0);
									break;
								
								case 0x0000000A:
									Function_28(423, 1, 0, 0);
									break;
								}
						}
						AUDIO_MUSIC_ONE_SHOT("MINI_GAME_STINGERS_WIN", 0, 0, 0, 0, 0);
						if (Function_324(&Local_322))
						{
							SAY_SINGLE_LINE_STRING((*&Local_322 + 12)[bVar253], "MPTAUNT_WIN", false, false, 0, 0, true, false);
						}
					}
					else
					{
						AUDIO_MUSIC_ONE_SHOT("MINI_GAME_STINGERS_LOSE", 0, 0, 0, 0, 0);
						if (Function_324(&Local_322))
						{
							if (Function_46(1) >= 4294967295)
							{
								if (Function_321(&Local_322 + 12[Function_46(1)53]) && Function_23((&Local_322 + 12[Function_46(1)53])->f_204, 1))
								{
									if (Function_225())
									{
										SAY_SINGLE_LINE_STRING((*&Local_322 + 12)[Function_46(1)53], "MPTAUNT_LOSE", false, false, 0, 0, true, false);
									}
									else
									{
										SAY_SINGLE_LINE_STRING((*&Local_322 + 12)[bVar253], "MPTAUNT_WIN", false, false, 0, 0, true, false);
									}
								}
							}
						}
					}
					bVar67 = RAND_INT_RANGE(false, 8);
					Function_336(&bLocal_253, (*&Local_322 + 12)[bVar253]);
					if (Function_236(&Local_322, &iVar66) < 1 && !Function_22(128))
					{
						Function_222(bVar1, bVar3, bVar2);
						if (bVar67 < 2)
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/win/big");
						}
						else if (bVar67 < 4)
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/win/medium");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/win/small");
						}
					}
					else
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						if (bVar3)
						{
							Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bVar2, &Local_322) };
							PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_After_Muck", &Var4, Function_220((*&Local_322 + 2184)[bVar1]), false, false, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_After_Muck_Self", Function_334(), Function_220((*&Local_322 + 2184)[bVar1]), false, false, 0, 2, 0, 0, 0);
						}
						if (bVar67 < 2)
						{
							if (bVar2 == Function_46(1))
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/win/win1");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/win/big");
							}
						}
						else if (bVar67 < 4)
						{
							if (bVar2 == Function_46(1))
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/win/win2");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/win/medium");
							}
						}
						else if (bVar2 == Function_46(1))
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/win/win3");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar253], "sit_poker/Player/bet_request/reveal_cards/win/small");
						}
					}
					if (!bVar3)
					{
						Function_281(&Local_322, Function_46(0));
						if ((*&Local_322 + 2184)[bVar1] >= 0)
						{
							PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
						}
					}
				}
				else
				{
					LOG_ERROR("Table.iNumWinningPlayers <= 0");
				}
				Function_175(&iLocal_247);
				Function_353(37, 0);
			}
			break;
		
		case 0x00000025:
			if (Function_46(1) >= 4294967295)
			{
				bVar68 = IS_AMBIENT_SPEECH_PLAYING((*&Local_322 + 12)[Function_46(1)53]);
			}
			if ((Function_380(&iLocal_247) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_FADED())
			{
				if ((!IS_AMBIENT_SPEECH_PLAYING((*&Local_322 + 12)[(*&Local_322 + 2072)[(Local_322.f_2212 - 1)]53]) && !bVar68) || !Function_22(32768))
				{
					Function_353(38, 0);
				}
			}
			break;
		
		case 0x00000026:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_198(128);
			Local_322.f_2212 = (Local_322.f_2212 - 1);
			if (Local_322.f_2212 >= 0)
			{
				Function_353(36, 0);
			}
			else
			{
				Function_198(0x8000000);
				Function_353(39, 0);
				if (Function_22(32768) && !HUD_IS_FADED())
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			break;
		
		case 0x00000027:
			if (!HUD_IS_FADING())
			{
				if (Function_232(&Local_322))
				{
					Function_353(26, 0);
				}
				else
				{
					fVar69 = (StackVal / Global_13172[Global_13172[StackVal11].f_3211].f_28);
					Function_219(428, (fVar69 * 100.0f), 0);
					Function_353(40, 0);
				}
			}
			break;
		
		case 0x00000028:
			PRINTSTRING("Checking for busted players");
			PRINTNL();
			Function_218(&Local_322);
			if (Local_322.f_2244 >= 0)
			{
				Function_353(41, 0);
			}
			else
			{
				Function_353(44, 1);
			}
			break;
		
		case 0x00000029:
			bVar1 = (*&Local_322 + 2216)[(Local_322.f_2244 - 1)];
			if (bVar1 != Function_46(1))
			{
				DECOR_SET_INT(Global_34573, "sc_poker_obj2_npcBust", true);
			}
			if (Function_22(32768))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_336(&bLocal_253, (*&Local_322 + 12)[bVar153]);
			SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[bVar153], "sit_poker/Player/bet_request/reveal_cards/loss");
			if (Local_322.f_1376 >= 2)
			{
				if (bVar1 == Function_46(1))
				{
					Function_217();
				}
				else
				{
					Function_216();
				}
			}
			if (!Function_22(2))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (bVar1 == Function_46(0))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Busts_Self", Function_334(), false, false, false, 0, 2, 0, 0, 0);
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bVar1, &Local_322) };
					if ((&Local_322 + 12[bVar153])->f_128 == 3)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Left_Table", &Var4, "", "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Busts", &Var4, "", "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			if (bVar1 == Function_46(1))
			{
				if ((Local_322.f_1376 - 1) != 2 && Function_22(0x2000000))
				{
					Function_185(Function_190(&Local_322, 3), 0, 1);
				}
				else if ((Local_322.f_1376 - 1) != 1 && Function_22(0x4000000))
				{
					Function_185(Function_190(&Local_322, 2), 0, 1);
				}
			}
			Function_175(&iLocal_247);
			Function_353(42, 0);
			break;
		
		case 0x0000002A:
			if (Function_46(1) >= 4294967295)
			{
				bVar70 = IS_AMBIENT_SPEECH_PLAYING((*&Local_322 + 12)[Function_46(1)53]);
			}
			if ((Function_380(&iLocal_247) <= 2.0f || IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[(*&Local_322 + 2216)[(Local_322.f_2244 - 1)]53], "sit_poker/Player/join_game/idle")) || HUD_IS_FADED())
			{
				if ((!IS_AMBIENT_SPEECH_PLAYING((*&Local_322 + 12)[(*&Local_322 + 2216)[(Local_322.f_2244 - 1)]53]) && !bVar70) || !Function_22(32768))
				{
					if (IS_LOCAL_PLAYER((*&Local_322 + 12)[(*&Local_322 + 2216)[(Local_322.f_2244 - 1)]53]))
					{
						if (Local_257.f_168)
						{
							switch (Local_322.f_1376)
							{
								case 0x00000003:
									bVar0 = ROUND((IntToFloat(Local_322) * 0.2f));
									break;
								
								case 0x00000002:
									bVar0 = ROUND((IntToFloat(Local_322) * 0.3f));
									break;
								
								case 0x00000001:
									bVar0 = ROUND((IntToFloat(Local_322) * 0.5f));
									break;
							}
							Function_215(bVar0, 1);
						}
						Function_28(412, 1, 0, 0);
						Function_181(&Local_322, (*&Local_322 + 2216)[(Local_322.f_2244 - 1)], 0);
					}
					else
					{
						Function_181(&Local_322, (*&Local_322 + 2216)[(Local_322.f_2244 - 1)], 0);
					}
					Function_353(43, 0);
				}
			}
			break;
		
		case 0x0000002B:
			if (!IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[(*&Local_322 + 2216)[(Local_322.f_2244 - 1)]53], "sit_poker/Player/leave_game/stand"))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Local_322.f_2244 = (Local_322.f_2244 - 1);
				if (Local_322.f_2244 >= 0)
				{
					Function_353(41, 0);
				}
				else
				{
					if (Function_22(32768))
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_353(44, 1);
				}
			}
			break;
		
		case 0x0000002C:
			if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_playerWon"))
			{
				DECOR_REMOVE(Global_34573, "sc_poker_obj2_playerWon");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_npcBust"))
			{
				DECOR_REMOVE(Global_34573, "sc_poker_obj2_npcBust");
			}
			if (HUD_IS_FADED() || !Function_22(32768))
			{
				Local_257.f_164++;
				if (NET_GET_PLAYMODE() == 0)
				{
					Function_43(27, 1);
				}
				Function_212(StackVal);
				NET_LOG(true, "Poker", "Round Complete", false, false, false, false);
				if ((Local_257.f_164 % 7) == 0)
				{
					AUDIO_RESET_SPEECH_HISTORY();
				}
				if (Local_322.f_1388 != Local_322.f_1384 && Local_257.f_168)
				{
					Local_322.f_4 = StackVal;
					Local_322.f_8 = StackVal * 2;
				}
				Function_208(&Local_322);
				bLocal_908 = StackVal;
				Local_322.f_1940 = 0;
				Function_175(&iLocal_247);
				if (Local_322.f_1376 >= 1)
				{
					NET_LOG(true, "Poker", "There are more players", false, false, false, false);
					Function_353(0, 1);
				}
				else
				{
					NET_LOG(true, "Poker", "There are no more players", false, false, false, false);
					if ((*&Local_322 + 1288)[Local_322.f_13843])
					{
						if (Function_22(0x2000000))
						{
							if (StackVal * 2 >= Local_257.f_68)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(70))
								{
									AWARD_ACHIEVEMENT(70);
								}
							}
						}
					}
					Function_206();
					if (NET_GET_PLAYMODE() == 0)
					{
						if ((*&Local_322 + 1288)[Local_322.f_13843])
						{
							Function_43(37, 1);
						}
					}
					Function_173(0);
				}
			}
			break;
		
		case 0x00000036:
			if (HUD_IS_FADED())
			{
				bVar21 = false;
				while (bVar21 <= Local_322.f_1288)
				{
					if ((*&Local_322 + 1288)[bVar213])
					{
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*&Local_322 + 12)[StackVal53]);
					}
					bVar21++;
				}
				Function_353(bLocal_914, 0);
			}
			break;
		
		case 0x00000037:
			if (!HUD_IS_FADING())
			{
				Function_198(64);
				Function_353(bLocal_914, 0);
			}
			break;
		
		case 0x00000038:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_24()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_24()), "bQuitMinigame"))
				{
					Function_267(6, 0);
					if (Local_257.f_168)
					{
						switch (Local_322.f_1376)
						{
							case 0x00000003:
								bVar0 = ROUND((IntToFloat(Local_322) * 0.2f));
								break;
							
							case 0x00000002:
								bVar0 = ROUND((IntToFloat(Local_322) * 0.3f));
								break;
							
							case 0x00000001:
								bVar0 = ROUND((IntToFloat(Local_322) * 0.5f));
								break;
						}
						Function_215(bVar0, 1);
					}
					else
					{
						Function_215(((&Local_322 + 12[Function_46(1)53])->f_136 / 10), 1);
					}
					bVar71 = Function_297(&Local_322);
					if (Function_324(&Local_322) && !HUD_IS_FADED())
					{
						if (Function_22(2048))
						{
							SAY_SINGLE_LINE_CONTEXT((*&Local_322 + 12)[bVar7153], 295, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_24()), "iPokerTalkingPlayerId", bVar71);
					Function_353(57, 0);
				}
				else
				{
					bLocal_912 = bLocal_914;
				}
				UI_EXIT("Poker_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_24()), "bQuitMinigame");
			}
			else if (HUD_IS_FADED())
			{
				bLocal_912 = bLocal_914;
			}
			break;
		
		case 0x00000039:
			bVar72 = 4294967295;
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_24()), "iPokerTalkingPlayerId"))
			{
				bVar72 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Function_24()), "iPokerTalkingPlayerId");
			}
			bVar46 = false;
			if (bVar72 != 4294967295)
			{
				if (IS_ANY_SPEECH_PLAYING((*&Local_322 + 12)[bVar7253]))
				{
					bVar46 = false;
				}
				else
				{
					bVar46 = true;
				}
			}
			else
			{
				bVar46 = true;
			}
			if (bVar46)
			{
				Function_173(1);
			}
			else if (bLocal_914 == 8)
			{
				if (Local_322.f_1940 == 0)
				{
					Function_300(&Local_322);
				}
			}
			break;
	}
	Function_205(&Local_322);
	if (Function_204())
	{
		if ((((((((((bLocal_912 == 0 && bLocal_912 == 1) && bLocal_912 == 2) && bLocal_912 == 3) && bLocal_912 == 4) && bLocal_912 == 5) && bLocal_912 == 6) && bLocal_912 == 7) && bLocal_912 == 17) && bLocal_912 == 8) && bLocal_912 == 26)
		{
			iLocal_917 = 5;
			switch (iLocal_241)
			{
				case 0x00000000:
					Function_360(&Local_322, &bLocal_253, Function_296(1), Function_46(1), 1);
					break;
				
				case 0x00000001:
					Function_235(StackVal, StackVal, &bLocal_253, *(&Local_257 + 152));
					break;
				
				case 0x00000002:
					Function_336(&bLocal_253, (*&Local_322 + 12)[Function_296(1)53]);
					break;
			}
			if (Function_274(6) || (Function_22(0x20000000) && RAND_INT_RANGE(false, 1000) > 10))
			{
				iLocal_241++;
				if (iLocal_241 >= 2)
				{
					iLocal_241 = 0;
				}
			}
		}
		else
		{
			iLocal_917 = 6;
		}
	}
	Function_19();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_917)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_200(4, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				if (Function_46(0) != 4294967295)
				{
					if (Function_321(&Local_322 + 12[Function_46(1)53]))
					{
						Function_200(3, 8, "Poker_ZoomCardsButton", 1, 0, 0, 0, 0);
					}
					if ((*&Local_322 + 1288)[Local_322.f_13843])
					{
						if (Local_322.f_1940 >= 0)
						{
							Function_200(2, 7, "Poker_ZoomBoardButton", 1, 0, 0, 0, 0);
						}
					}
				}
				break;
			
			case 0x00000003:
				Function_200(7, 15, "Poker_LookAround", 1, 0, 0, 0, 0);
				Function_200(6, 8, "Poker_ZoomCardsButton", 1, 0, 0, 0, 0);
				if (Local_322.f_1940 >= 0)
				{
					Function_200(5, 7, "Poker_ZoomBoardButton", 1, 0, 0, 0, 0);
				}
				if (Local_322.f_1364 != 4294967295)
				{
					Function_200(4, 4, "Poker_CheatButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000004:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_200(3, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				Function_200(1, 1, "Poker_ShowCards", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_200(3, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000005:
				Function_200(0, 1, "Poker_ChangeCamera", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				break;
			}
	}
	return;
}

int Function_200(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xB8E3 / 47331
{
	if (!Function_203(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_202(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_201(uParam0, iParam2);
}

int Function_201(var uParam0, int iParam1) //Position: 0xB91D / 47389
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xB92B / 47403
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_203(var uParam0, int iParam1) //Position: 0xB965 / 47461
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

bool Function_204() //Position: 0xB973 / 47475
{
	if (!(*&Local_322 + 1288)[Local_322.f_13843])
	{
		if (Function_46(1) >= 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void Function_205(int iParam0) //Position: 0xB996 / 47510
{
	UI_LABEL_SET_TEXT("nScores.s1", "Poker_PotLabel");
	UI_LABEL_SET_VALUE("nScores.s1", iParam0->f_1944);
	return;
}

void Function_206() //Position: 0xB9D0 / 47568
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Winner", 0);
	}
	return;
}

void Function_207(bool bParam0, bool bParam1) //Position: 0xBA05 / 47621
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

void Function_208(int iParam0) //Position: 0xBA45 / 47685
{
	int iVar0;
	
	if (IS_OBJECT_VALID(bLocal_311))
	{
		DESTROY_OBJECT(bLocal_311);
	}
	if (IS_OBJECT_VALID(bLocal_312))
	{
		DESTROY_OBJECT(bLocal_312);
	}
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			Function_182(iParam0 + 12[StackVal53] + 36);
			(iParam0 + 12[053])->f_152 = StackVal;
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[StackVal53], "sit_poker/Player/card_idle/idle");
		}
		iVar0++;
	}
	Function_182(iParam0 + 1824);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1916)
	{
		if (IS_OBJECT_VALID((*iParam0 + 1916)[iVar0]))
		{
			DESTROY_OBJECT((*iParam0 + 1916)[iVar0]);
		}
		iVar0++;
	}
	Function_210(iParam0);
	iParam0->f_1944 = 0;
	iParam0->f_1948 = 0;
	Function_231(iParam0);
	iParam0->f_1388 = Function_368(iParam0 + 1288, iParam0->f_1388);
	iParam0->f_1392 = Function_368(iParam0 + 1288, iParam0->f_1388);
	UI_LABEL_SET_VALUE("nBetAmount", false);
	Function_205(iParam0);
	Function_209(iParam0 + 1396);
	return;
}

void Function_209(int iParam0) //Position: 0xBB7C / 47996
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_424)
	{
		bVar1 = RAND_INT_RANGE(false, (iParam0->f_424 - 1));
		Var2 = { StackVal, *iParam0[bVar12] };
		*iParam0[bVar12] = { StackVal, *iParam0[iVar02] };
		*iParam0[iVar02] = { StackVal, Var2 };
		iVar0++;
	}
	return;
}

void Function_210(int iParam0) //Position: 0xBBCD / 48077
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			Var3.f_4 = iVar0;
			Var3 = iVar1;
			if (!Function_211(StackVal, StackVal, *(iParam0 + 1364), Var3))
			{
				*(iParam0 + 1396[iVar22]) = { StackVal, Var3 };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	(iParam0 + 1396)->f_420 = 0;
	(iParam0 + 1396)->f_424 = iVar2;
	return;
}

bool Function_211(struct<5> Param0) //Position: 0xBC3F / 48191
{
	if (StackVal && StackVal != Param0 != Param2)
	{
		return 1;
	}
	return 0;
}

void Function_212(int iParam0) //Position: 0xBC61 / 48225
{
	if (!Function_213(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16++;
	return;
}

bool Function_213(int iParam0) //Position: 0xBC85 / 48261
{
	if (!Function_152(iParam0))
	{
		return 0;
	}
	if (!Function_214(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_214(int iParam0) //Position: 0xBCA9 / 48297
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_215(bool bParam0, bool bParam1) //Position: 0xBCBE / 48318
{
	bool bVar0;
	
	bVar0 = Function_45(0);
	if ((Function_45(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_28(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_45(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_28(597, bParam0, 0, 0);
	}
	if ((Function_45(597) + Function_45(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_216() //Position: 0xBD89 / 48521
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_PlyBustOut_OP", 0);
	}
	return;
}

void Function_217() //Position: 0xBDC0 / 48576
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_PlyBustOut_U", 0);
	}
	return;
}

void Function_218(int iParam0) //Position: 0xBDF6 / 48630
{
	int iVar0;
	
	iParam0->f_2244 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if (StackVal || (iParam0 + 12[(iParam0 + 12[StackVal53])->f_136 >= 053])->f_128 != 3)
			{
				(*iParam0 + 2216)[iParam0->f_2244] = StackVal;
				iParam0->f_2244++;
			}
		}
		iVar0++;
	}
	return;
}

int Function_219(int iParam0, bool bParam1, bool bParam2) //Position: 0xBE75 / 48757
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_42(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_41(iParam0);
	if (bParam2)
	{
		Function_29(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

var Function_220(bool bParam0) //Position: 0xC127 / 49447
{
	bool bVar0;
	
	bVar0 = Function_221();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_221() //Position: 0xC13E / 49470
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

void Function_222(int iParam0, bool bParam1, int iParam2) //Position: 0xC1FA / 49658
{
	char* cVar0;
	char* cVar4;
	struct<16> Var8;
	bool bVar24;
	
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_224((*&Local_322 + 2128)[iParam0], &cVar0);
	if (((*&Local_322 + 2100)[iParam0] != 6 || (*&Local_322 + 2100)[iParam0] != 9) || (*&Local_322 + 2100)[iParam0] != 10)
	{
		Function_223((*&Local_322 + 2156)[iParam0], &cVar4);
	}
	else
	{
		Function_224((*&Local_322 + 2156)[iParam0], &cVar4);
	}
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(iParam2, &Local_322) };
	bVar24 = Function_220((*&Local_322 + 2184)[iParam0]);
	switch ((*&Local_322 + 2100)[iParam0])
	{
		case 0x00000001:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_High", &Var8, bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_High_Self", Function_334(), bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Pair", &Var8, bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Pair_Self", Function_334(), bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_TwoPair", &Var8, bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_TwoPair_Self", Function_334(), bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Trips", &Var8, bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Trips_Self", Function_334(), bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				if ((*&Local_322 + 2128)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_An", &Var8, bVar24, &cVar0, "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight", &Var8, bVar24, &cVar0, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_322 + 2128)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_Self_An", Function_334(), bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_Self", Function_334(), bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				if ((*&Local_322 + 2128)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_An", &Var8, bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush", &Var8, bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_322 + 2128)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_Self_An", Function_334(), bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_Self", Function_334(), bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FullHouse", &Var8, bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FullHouse_Self", Function_334(), bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FourKind", &Var8, bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FourKind_Self", Function_334(), bVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				if ((*&Local_322 + 2128)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_An", &Var8, bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush", &Var8, bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_322 + 2128)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_Self_An", Function_334(), bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_Self", Function_334(), bVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_RoyalFlush", &Var8, bVar24, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_RoyalFlush_Self", Function_334(), bVar24, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_223(char* cParam0, char* cParam1) //Position: 0xC7FC / 51196
{
	strcpy(cParam1, "", 16);
	switch (cParam0)
	{
		case 0x00000000:
			stradd(cParam1, "Poker_Clubs", 16);
			break;
		
		case 0x00000001:
			stradd(cParam1, "Poker_Diamonds", 16);
			break;
		
		case 0x00000002:
			stradd(cParam1, "Poker_Hearts", 16);
			break;
		
		case 0x00000003:
			stradd(cParam1, "Poker_Spades", 16);
			break;
	}
	return;
}

void Function_224(char* cParam0, char* cParam1) //Position: 0xC881 / 51329
{
	strcpy(cParam1, "", 16);
	switch (cParam0)
	{
		case 0x00000000:
			stradd(cParam1, "Poker_2", 16);
			break;
		
		case 0x00000001:
			stradd(cParam1, "Poker_3", 16);
			break;
		
		case 0x00000002:
			stradd(cParam1, "Poker_4", 16);
			break;
		
		case 0x00000003:
			stradd(cParam1, "Poker_5", 16);
			break;
		
		case 0x00000004:
			stradd(cParam1, "Poker_6", 16);
			break;
		
		case 0x00000005:
			stradd(cParam1, "Poker_7", 16);
			break;
		
		case 0x00000006:
			stradd(cParam1, "Poker_8", 16);
			break;
		
		case 0x00000007:
			stradd(cParam1, "Poker_9", 16);
			break;
		
		case 0x00000008:
			stradd(cParam1, "Poker_10", 16);
			break;
		
		case 0x00000009:
			stradd(cParam1, "Poker_J", 16);
			break;
		
		case 0x0000000A:
			stradd(cParam1, "Poker_Q", 16);
			break;
		
		case 0x0000000B:
			stradd(cParam1, "Poker_K", 16);
			break;
		
		case 0x0000000C:
			stradd(cParam1, "Poker_A", 16);
			break;
	}
	return;
}

bool Function_225() //Position: 0xC9C1 / 51649
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

void Function_226(int iParam0) //Position: 0xC9DC / 51676
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_60)
	{
		if (IS_ATTACHMENT_VALID((*iParam0 + 72)[iVar0]))
		{
			REMOVE_OBJECT_ATTACHMENT((*iParam0 + 72)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_227(bool bParam0, int iParam1, int iParam2) //Position: 0xCA10 / 51728
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	bVar3 = (*iParam1 + 12)[iParam253];
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	GET_POSITION(bVar3, &vVar0);
	GET_ACTOR_AXIS(bVar3, &vVar4, 2);
	GET_ACTOR_AXIS(bVar3, &vVar7, 0);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar0, StackVal) * Vector(-0.7f, -0.7f, -0.7f), StackVal, StackVal) };
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar10, StackVal) * Vector(0.3f, 0.3f, 0.3f), StackVal, StackVal) };
	vVar10.f_4 = (vVar10.y + 1.25f);
	GET_OBJECT_NAMED_BONE_POSITION(bVar3, "wrist_l", &vVar13);
	vVar13.f_4 = (vVar13.y - 0.1f);
	SET_CAMERA_POSITION(*bParam0, vVar10);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar13, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, false, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar16);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar16, 1);
	return;
}

void Function_228(int iParam0, bool bParam1, int iParam2) //Position: 0xCAF7 / 51959
{
	var uVar0;
	char* cVar4;
	struct<16> Var8;
	
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_224((*&Local_322 + 2016)[iParam0], &uVar0);
	if (((*&Local_322 + 1988)[iParam0] != 6 || (*&Local_322 + 1988)[iParam0] != 9) || (*&Local_322 + 1988)[iParam0] != 10)
	{
		Function_223((*&Local_322 + 2044)[iParam0], &cVar4);
	}
	else
	{
		Function_224((*&Local_322 + 2044)[iParam0], &cVar4);
	}
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(iParam2, &Local_322) };
	switch ((*&Local_322 + 1988)[iParam0])
	{
		case 0x00000001:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_High", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_High_Self", Function_334(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Pair", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Pair_Self", Function_334(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_TwoPair", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_TwoPair_Self", Function_334(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Trips", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Trips_Self", Function_334(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				if ((*&Local_322 + 2016)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_An", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_322 + 2016)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_Self_An", Function_334(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_Self", Function_334(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				if ((*&Local_322 + 2016)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_An", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_322 + 2016)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_Self_An", Function_334(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_Self", Function_334(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FullHouse", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FullHouse_Self", Function_334(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FourKind", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FourKind_Self", Function_334(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				if ((*&Local_322 + 2016)[iParam0] == 12)
				{
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_322 + 2016)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush_Self_An", Function_334(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush_Self", Function_334(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_RoyalFlush", &Var8, &cVar4, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_RoyalFlush_Self", Function_334(), &cVar4, "", "", 0, 2, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_229(int iParam0) //Position: 0xD0ED / 53485
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 + 36)->f_60)
	{
		if (!IS_ATTACHMENT_VALID((*iParam0 + 36 + 72)[iVar0]))
		{
			vVar1 = { 0.0f, 0.0f, 0.0f };
			vVar4 = { 0.0f, 0.0f, 0.0f };
			if (iVar0 == 1)
			{
				vVar4 = { -0.0414f, 0.004f, 0.001f };
				vVar1 = { 0.0f, -17.993f, 0.0f };
			}
			(*iParam0 + 36 + 72)[iVar0] = ATTACH_OBJECTS_NO_DRV((*iParam0 + 36 + 60)[iVar0], GET_OBJECT_FROM_ACTOR(*iParam0), "wrist_l_attachment", vVar4, vVar1);
			Function_351((*iParam0 + 36 + 60)[iVar0], *iParam0);
		}
		iVar0++;
	}
	return;
}

void Function_230(int iParam0) //Position: 0xD197 / 53655
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	struct<8> Var9;
	
	iVar1 = (iParam0 + 36)->f_60;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (IS_OBJECT_VALID((*iParam0 + 36 + 60)[iVar0]))
		{
			if (!GET_OBJECT_POSITION((*iParam0 + 36 + 60)[iVar0], &vVar2))
			{
			}
			if (!GET_OBJECT_ORIENTATION((*iParam0 + 36 + 60)[iVar0], &vVar5))
			{
			}
			bVar8 = IS_ATTACHMENT_VALID((*iParam0 + 36 + 72)[iVar0]);
			if (bVar8)
			{
				REMOVE_OBJECT_ATTACHMENT((*iParam0 + 36 + 72)[iVar0]);
			}
			DESTROY_OBJECT((*iParam0 + 36 + 60)[iVar0]);
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(iParam0 + 36[iVar02], 0) };
			(*iParam0 + 36 + 60)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), &Var9, vVar2, vVar5, 1);
			if (bVar8)
			{
				if (iVar0 == 0)
				{
					(*iParam0 + 36 + 72)[iVar0] = ATTACH_OBJECTS_NO_DRV((*iParam0 + 36 + 60)[iVar0], GET_OBJECT_FROM_ACTOR(*iParam0), "wrist_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				}
				else
				{
					(*iParam0 + 36 + 72)[iVar0] = ATTACH_OBJECTS_NO_DRV((*iParam0 + 36 + 60)[iVar0], GET_OBJECT_FROM_ACTOR(*iParam0), "arm_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				}
			}
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_231(int iParam0) //Position: 0xD2D4 / 53972
{
	int iVar0;
	
	iParam0->f_1952 = 0;
	iParam0->f_1948 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			(iParam0 + 12[053])->f_140 = StackVal;
			(iParam0 + 12[053])->f_144 = StackVal;
			Function_10(iParam0 + 12[StackVal53] + 204, 1);
		}
		iVar0++;
	}
	iParam0->f_1392 = Function_368(iParam0 + 1288, iParam0->f_1388);
	return;
}

bool Function_232(int iParam0) //Position: 0xD359 / 54105
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0->f_1944;
	iVar1 = 0;
	while (iVar1 <= iParam0->f_2212)
	{
		iVar0 = (iVar0 - (*iParam0 + 2184)[iVar1]);
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar13])
		{
			if (Function_321(iParam0 + 12[StackVal53]))
			{
				if ((iParam0 + 12[StackVal53])->f_152 >= 0)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void Function_233(int iParam0) //Position: 0xD3E5 / 54245
{
	bool bVar0;
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
	iParam0->f_1984 = 0;
	bVar0 = false;
	while (bVar0 <= iParam0->f_1288)
	{
		(*iParam0 + 1956)[bVar0] = 4294967295;
		(*iParam0 + 2072)[bVar0] = 4294967295;
		(*iParam0 + 2100)[bVar0] = 4294967295;
		if ((*iParam0 + 1288)[bVar03])
		{
			if (Function_321(iParam0 + 12[StackVal53]))
			{
				iVar3 = (iParam0 + 12[StackVal53])->f_152;
				if (iVar3 >= iVar1)
				{
					iVar2 = iVar1;
					iVar1 = iVar3;
					(*iParam0 + 1956)[0] = StackVal;
					iParam0->f_1984 = 1;
				}
				else if (iVar3 == iVar1)
				{
					iVar1 = iVar3;
					(*iParam0 + 1956)[iParam0->f_1984] = StackVal;
					iParam0->f_1984++;
				}
				else if (iVar3 >= iVar2)
				{
					iVar2 = iVar3;
				}
			}
		}
		bVar0++;
	}
	if (iVar2 == 0)
	{
		bVar4 = iParam0->f_1944;
	}
	else
	{
		iVar5 = 0;
		bVar0 = false;
		while (bVar0 <= iParam0->f_1288)
		{
			if ((*iParam0 + 1288)[bVar03])
			{
				if ((iParam0 + 12[StackVal53])->f_152 >= iVar2)
				{
					iVar5 = (StackVal + ((iParam0 + 12[iVar553])->f_152 - iVar2));
					(iParam0 + 12[iVar253])->f_152 = StackVal;
				}
			}
			bVar0++;
		}
		bVar4 = iVar5;
	}
	iVar7 = 0;
	PRINTSTRING("Eligible Players Are");
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= iParam0->f_1984)
	{
		PRINTINT((*iParam0 + 1956)[bVar0]);
		PRINTSTRING(" ");
		if (Function_321(iParam0 + 12[(*iParam0 + 1956)[bVar0]53]))
		{
			iVar6 = Function_311(iParam0 + 12[(*iParam0 + 1956)[bVar0]53] + 36, iParam0 + 1824, &uVar8, &uVar9, &uVar10);
		}
		else
		{
			iVar6 = 0;
		}
		(*iParam0 + 1988)[bVar0] = uVar8;
		(*iParam0 + 2016)[bVar0] = uVar9;
		(*iParam0 + 2044)[bVar0] = uVar10;
		if (iVar6 >= iVar7)
		{
			iVar7 = iVar6;
			(*iParam0 + 2072)[0] = (*iParam0 + 1956)[bVar0];
			(*iParam0 + 2100)[0] = uVar8;
			(*iParam0 + 2128)[0] = uVar9;
			(*iParam0 + 2156)[0] = uVar10;
			iParam0->f_2212 = 1;
		}
		else if (iVar6 == iVar7)
		{
			iVar7 = iVar6;
			(*iParam0 + 2072)[iParam0->f_2212] = (*iParam0 + 1956)[bVar0];
			(*iParam0 + 2100)[iParam0->f_2212] = uVar8;
			(*iParam0 + 2128)[iParam0->f_2212] = uVar9;
			(*iParam0 + 2156)[iParam0->f_2212] = uVar10;
			iParam0->f_2212++;
		}
		bVar0++;
	}
	PRINTSTRING(" are eligible to win the pot valued at ");
	PRINTINT(bVar4);
	PRINTNL();
	iVar11 = (bVar4 / iParam0->f_2212);
	bVar12 = (bVar4 - (iVar11 * iParam0->f_2212));
	bVar0 = false;
	while (bVar0 <= iParam0->f_2212)
	{
		(*iParam0 + 2184)[bVar0] = (iVar11 + CEIL((TO_FLOAT(bVar12) / IntToFloat(iParam0->f_2212))));
		bVar12 = (bVar12 - CEIL((TO_FLOAT(bVar12) / IntToFloat(iParam0->f_2212))));
		NET_LOG(true, "lTable.WinningPlayerAmounts[%s] = %s, Remainder: %s", I2STR(bVar0), I2STR((*iParam0 + 2184)[bVar0]), I2STR(bVar12), false, false);
		bVar0++;
	}
	if ((Function_234(iParam0 + 2100, iParam0 + 2128, iParam0 + 2156, iParam0 + 1988, iParam0 + 2016, iParam0 + 2044, iParam0->f_1984) && Local_322.f_2212 != 1) && Local_322.f_1984 < 1)
	{
		Function_438(16384);
	}
	else
	{
		Function_198(16384);
	}
	return;
}

int Function_234(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0xD7B7 / 55223
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	if (iParam6 >= 0)
	{
		iVar1 = (*uParam0)[0];
		iVar2 = (*uParam1)[0];
		iVar3 = (*uParam2)[0];
		iVar4 = 0;
		while (iVar4 < (iParam6 - 1))
		{
			if ((iVar1 != (*uParam3)[iVar4] && iVar2 != (*uParam4)[iVar4]) && iVar3 != (*uParam5)[iVar4])
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

void Function_235(bool bParam0, vector3 vParam1) //Position: 0xD826 / 55334
{
	var uVar0;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	bVar3 = Function_24();
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	GET_POSITION(bVar3, &uVar0);
	GET_ACTOR_AXIS(bVar3, &vVar4, 2);
	vVar7 = { StackVal, StackVal, vParam1 };
	vVar7.f_4 = (vVar7.y + 2.0f);
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar7, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
	SET_CAMERA_POSITION(*bParam0, vVar7);
	SET_CAMERA_TARGET_POSITION(*bParam0, vParam1, 0);
	SET_CAMERA_FOV(*bParam0, 38.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, false, 0.5f, 0.5f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar10);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar7, vVar10, 1);
}

int Function_236(int iParam0, int iParam1) //Position: 0xD8CF / 55503
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if (Function_321(iParam0 + 12[StackVal53]))
			{
				iVar1++;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_237(int iParam0) //Position: 0xD91E / 55582
{
	int iVar0;
	
	if (Local_322.f_1392 > 0 || Local_322.f_1392 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_238(bool bParam0) //Position: 0xD95B / 55643
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = bParam0;
	Function_135(&iVar1);
	if (Function_240(&iVar1) != bVar0)
	{
		Function_134(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_23(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_130(bVar0);
		Function_239(&Var2, 0);
		Function_127(&Var2);
	}
	return;
}

void Function_239(var uParam0, bool bParam1) //Position: 0xDA58 / 55896
{
	if (bParam1)
	{
		Function_27(uParam0, 2);
	}
	else
	{
		Function_10(uParam0, 2);
	}
	return;
}

int Function_240(int iParam0) //Position: 0xDA72 / 55922
{
	return *iParam0;
}

var Function_241(bool bParam0) //Position: 0xDA7B / 55931
{
	switch (bParam0)
	{
		case 0x00000000:
			return "START_OF_ROUND";
		
		case 0x00000003:
			return "SMALL_BLIND";
		
		case 0x00000004:
			return "WAIT_FOR_SMALL_BLIND";
		
		case 0x00000005:
			return "nBIG_BLIND";
		
		case 0x00000006:
			return "WAIT_FOR_BIG_BLIND";
		
		case 0x00000007:
			return "DEALER_ANIMATE";
		
		case 0x00000008:
			return "DELAY_FOR_DEAL";
		
		case 0x00000009:
			return "BRANCH_DECISION";
		
		case 0x0000000A:
			return "PLAYER_DECISION";
		
		case 0x0000000C:
			return "WAIT_FOR_PLAYER_DECISION";
		
		case 0x0000000E:
			return "REMOTE_PLAYER";
		
		case 0x0000000F:
			return "WAIT_FOR_REMOTE_PLAYER_DECISION";
		
		case 0x00000010:
			return "WAIT_FOR_REMOTE_DEAL";
		
		case 0x00000011:
			return "WAIT_FOR_TABLE_DEAL";
		
		case 0x00000012:
			return "PREP_FOR_ACKNOWLEDGE";
		
		case 0x00000013:
			return "WAIT_FOR_ACKNOWLEDGE";
		
		case 0x00000014:
			return "LOOK_AT_ALL_IN_PLAYER";
		
		case 0x00000015:
			return "ONE_FRAME_PAUSE";
		
		case 0x00000016:
			return "DELAY_FOR_ACTION_ANIMATION";
		
		case 0x00000017:
			return "DELAY_FOR_FOLD";
		
		case 0x00000018:
			return "DELAY_FOR_QUIT";
		
		case 0x00000019:
			return "INCREMENT_PLAYER";
		
		case 0x0000001A:
			return "DISTRIBUTE_POT";
		
		case 0x0000001B:
			return "DELAY_FOR_POT_MSG";
		
		case 0x0000001C:
			return "LOOK_AT_NEXT_PLAYER";
		
		case 0x0000001D:
			return "DELAY_FOR_MUCK";
		
		case 0x0000001E:
			return "LOOK_AT_NEXT_PLAYER_WAIT";
		
		case 0x0000001F:
			return "DELAY_FOR_CAMERA_ZOOM";
		
		case 0x00000022:
			return "CHECK_FOR_MORE_PLAYERS";
		
		case 0x00000023:
			return "DELAY_FOR_SPLIT_POT_MSG";
		
		case 0x00000024:
			return "LOOK_AT_WINNER";
		
		case 0x00000025:
			return "LOOK_AT_WINNER_WAIT";
		
		case 0x00000026:
			return "CHECK_FOR_MORE_WINNERS";
		
		case 0x00000027:
			return "CHECK_FOR_MORE_SIDE_POTS";
		
		case 0x00000020:
			return "PKR_SEND_MUCK_OR_REVEAL";
		
		case 0x00000028:
			return "CHECK_FOR_BUSTED_PLAYERS";
		
		case 0x00000029:
			return "SHOW_BUSTED_PLAYER";
		
		case 0x0000002A:
			return "DELAY_FOR_BUSTED_PLAYER";
		
		case 0x0000002B:
			return "DECREASE_BUSTED_PLAYERS";
		
		case 0x0000002C:
			return "END_OF_ROUND";
		
		case 0x00000036:
			return "PKR_SKIP_TO_WINNER";
		
		case 0x00000037:
			return "PKR_SKIP_TO_WINNER_ENDING";
		
		default:
	}
	return "UNKNOWN";
}

void Function_242(struct<2>[] Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, float fParam107) //Position: 0xDF44 / 57156
{
	int iVar0;
	float fVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	char* cVar18;
	
	if (Function_22(256))
	{
		return;
	}
	iVar0 = 11;
	if (DECOR_GET_FLOAT_VERBOSE(Function_245(), "TMS_BlindRaiseTime", &fVar13))
	{
	}
	else if (Function_22(0x20000000))
	{
		fVar13 = 120.0f;
	}
	else
	{
		fVar13 = 300.0f;
	}
	if (StackVal && fParam107 < fVar13 * 2 >= Local_257.f_68)
	{
		iVar0.f_48 = 1;
		Function_438(0x10000000);
	}
	else
	{
		iVar0.f_48 = 0;
		Function_198(0x10000000);
	}
	iVar16 = 0;
	while (iVar16 <= 52)
	{
		iVar17 = (iVar16 % 5);
		bVar14 = (iVar16 / 5);
		bVar15 = Function_244(&(Param0[iVar162]));
		iVar0[bVar14] = (iVar0[bVar14] + SHIFT_LEFT(bVar15, iVar17 * 6));
		if (Global_30842[38])
		{
			if (iVar17 == 0)
			{
				PRINTSTRING("Deck ");
				PRINTINT(bVar14);
				PRINTSTRING(": ");
			}
			Function_136(StackVal, Param0[iVar162], &cVar18);
			PRINTSTRING(&cVar18);
			PRINTSTRING(",");
			if (iVar17 == 4)
			{
				PRINTNL();
				Function_243(iVar0[bVar14], 6);
				PRINTNL();
			}
		}
		iVar16++;
	}
	NET_SCRIPTMSG_SEND(3, 30, &iVar0, 13, 0);
	Function_438(768);
}

void Function_243(var uParam0, int iParam1) //Position: 0xE07B / 57467
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_23(uParam0, Function_104(bVar0)))
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

int Function_244(bool bParam0) //Position: 0xE0C2 / 57538
{
	if (StackVal == 4294967295)
	{
		return 0;
	}
	if (*bParam0 == 4294967295)
	{
		return 0;
	}
	return (SHIFT_LEFT(StackVal, 4) || *bParam0);
}

var Function_245() //Position: 0xE0E7 / 57575
{
	return Global_83591.f_140;
}

bool Function_246(bool bParam0, bool bParam1, float fParam2) //Position: 0xE0F3 / 57587
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_238(bParam0);
	}
	Function_134(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_127(&Var0);
	}
	if (Function_257(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_256(&Var0, 0);
		Function_127(&Var0);
		Function_129();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_255(bParam0, iVar6, &uVar7))
	{
		if (Function_254())
		{
			if (!Function_253(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_239(&Var0, 1);
				Function_127(&Var0);
			}
		}
	}
	else if (Var0.f_16 >= 1.0f)
	{
		Var0.f_16 = fVar5;
		Function_127(&Var0);
	}
	else
	{
		fVar10 = (fVar5 - Var0.f_16);
		if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
		{
			if (Function_247(bParam0))
			{
				NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
				Var11 = GET_LOCAL_SLOT();
				Var11.f_4 = fVar5;
				NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
			}
		}
	}
	return 0;
}

bool Function_247(int iParam0) //Position: 0xE333 / 58163
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_251(bVar0))
		{
			iVar1 = Function_248(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_248(bool bParam0) //Position: 0xE376 / 58230
{
	int iVar0;
	
	Function_250(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_135(&iVar0);
	}
	else
	{
		Function_249(&iVar0, bParam0);
	}
	return Function_240(&iVar0);
}

void Function_249(var uParam0, int iParam1) //Position: 0xE39D / 58269
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_250(int iParam0) //Position: 0xE3B0 / 58288
{
	Function_133(iParam0, 4294967286);
	return;
}

bool Function_251(bool bParam0) //Position: 0xE3BE / 58302
{
	return Function_252(bParam0);
}

bool Function_252(bool bParam0) //Position: 0xE3C9 / 58313
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

bool Function_253(bool bParam0) //Position: 0xE46A / 58474
{
	return Function_23(*bParam0, 2);
}

bool Function_254() //Position: 0xE477 / 58487
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

bool Function_255(int iParam0, var uParam1, int iParam2) //Position: 0xE495 / 58517
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
		if (Function_251(iVar0))
		{
			iVar1 = Function_248(iVar0);
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

void Function_256(int iParam0, bool bParam1) //Position: 0xE4E6 / 58598
{
	if (bParam1)
	{
		Function_27(iParam0, 1);
	}
	else
	{
		Function_10(iParam0, 1);
	}
	return;
}

bool Function_257(int iParam0) //Position: 0xE500 / 58624
{
	return Function_23(*iParam0, 1);
}

int Function_258(int iParam0, int iParam1) //Position: 0xE50D / 58637
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
	bool bVar9;
	struct<16> Var10;
	struct<16> Var26;
	bool bVar42;
	bool bVar43;
	
	iVar0 = (iParam0 + 12[iParam153])->f_140;
	if (iParam0->f_1940 == 0)
	{
		fVar1 = Function_320(iParam0 + 12[Function_296(1)53] + 36);
	}
	else
	{
		fVar1 = (iParam0 + 12[Function_296(1)53])->f_208;
	}
	bVar2 = Function_261(iParam0, iParam0->f_1388, (iParam0 + 12[iParam153])->f_132);
	bVar3 = (iParam0 + 12[Function_296(1)53])->f_136;
	bVar4 = Function_260(((TO_FLOAT(bVar3) - IntToFloat(iParam0->f_1948)) / IntToFloat(bVar3)), 0.0f);
	PRINTSTRING("Player is in position ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	switch (iParam0->f_1940)
	{
		case 0x00000000:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0.7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0.3f));
			if (fVar6 < 0.6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0.5f * bVar2) + (0.5f * fVar1));
			}
			else
			{
				bVar5 = ((0.3f * bVar2) + (0.7f * fVar1));
			}
			break;
		
		case 0x00000001:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0.7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0.3f));
			if (fVar6 < 0.6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0.6f * bVar2) + (0.4f * fVar1));
			}
			else
			{
				bVar5 = ((0.15f * bVar2) + (0.85f * fVar1));
			}
			break;
		
		case 0x00000002:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0.7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0.3f));
			if (fVar6 < 0.6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0.5f * bVar2) + (0.5f * fVar1));
			}
			else
			{
				bVar5 = ((0.1f * bVar2) + (0.9f * fVar1));
			}
			break;
		
		case 0x00000003:
			fVar6 = ((RAND_FLOAT_RANGE(0.0f, bVar2) * 0.7f) + (RAND_FLOAT_RANGE(0.0f, bVar4) * 0.3f));
			if (fVar6 < 0.6f)
			{
				PRINTSTRING("Player Bluffing");
				PRINTNL();
				bVar5 = ((0.5f * bVar2) + (0.5f * fVar1));
			}
			else
			{
				bVar5 = fVar1;
			}
			break;
	}
	PRINTSTRING("WeightedStrength = ");
	PRINTFLOAT(bVar5);
	PRINTNL();
	if (Function_295(iParam0) < 1 || iParam0->f_1948 < 0)
	{
		if (bVar5 > (*iParam0 + 2248)[iParam0->f_1376])
		{
			if ((iParam0->f_1948 - iVar0) == 0)
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pst");
				bLocal_908 = false;
				Function_353(21, 0);
			}
			else
			{
				bVar9 = RAND_INT_RANGE(false, ((100 * (iParam0 + 12[iParam153])->f_152) / Function_266(&Local_322)));
				if (bVar9 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[iParam153], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[iParam153], "sit_poker/player/bet_request/fold");
				}
				Function_291(&Local_322 + 12[Function_296(1)53]);
				if (!Function_22(2))
				{
					Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(iParam1, &Local_322) };
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var10, "", "", "", 0, 2, 0, 0, 0);
				}
				if (!Function_22(32768))
				{
					if (Function_325(&iLocal_316, 2))
					{
						Function_168("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_46(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[iParam153], 507, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_225())
					{
						SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[iParam153], 288, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_46(1) >= 4294967295)
					{
						SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[Function_46(1)53], 508, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				Function_267(1, 0);
				Function_353(23, 0);
			}
		}
		else if (bVar5 > (*iParam0 + 2280)[iParam0->f_1376])
		{
			if (iParam0->f_1948 - iVar0) <= ((iParam0 + 12[iParam153])->f_136 / 2)
			{
				if ((iParam0->f_1948 - iVar0) == 0)
				{
					bVar7 = RAND_FLOAT_RANGE(0.1f, 0.7f);
					bVar8 = CEIL((IntToFloat(iParam0->f_1944) * bVar7));
					if (StackVal <= bVar8)
					{
						bVar8 = StackVal;
					}
					if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
					{
						bVar8 = (iParam0 + 12[iParam153])->f_136;
					}
				}
				else
				{
					bVar8 = (iParam0->f_1948 - iVar0);
					if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
					{
						bVar8 = (iParam0 + 12[iParam153])->f_136;
					}
				}
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pst");
				bLocal_908 = bVar8;
				Function_353(21, 0);
			}
			else if ((iParam0->f_1948 - iVar0) == 0)
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pst");
				bLocal_908 = bVar8;
				Function_353(21, 0);
			}
			else
			{
				if (!Function_22(2))
				{
					Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(iParam1, &Local_322) };
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var26, "", "", "", 0, 2, 0, 0, 0);
				}
				bVar42 = RAND_INT_RANGE(false, ((100 * (iParam0 + 12[iParam153])->f_152) / Function_266(&Local_322)));
				if (bVar42 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[iParam153], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[iParam153], "sit_poker/player/bet_request/fold");
				}
				Function_291(&Local_322 + 12[Function_296(1)53]);
				if (!Function_22(32768))
				{
					if (Function_325(&iLocal_316, 2))
					{
						Function_168("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_267(1, 0);
				Function_353(23, 0);
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_46(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[iParam153], 507, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_225())
					{
						SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[iParam153], 288, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_46(1) >= 4294967295)
					{
						SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[Function_46(1)53], 508, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
		}
		else
		{
			if (bVar2 < 0.0f)
			{
				bVar43 = RAND_FLOAT_RANGE(0.0f, bVar2);
			}
			else
			{
				bVar43 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			}
			if (iParam0->f_1940 != 3 && bVar2 != 1.0f)
			{
				bVar43 = 1.0f;
			}
			if (bVar43 < 0.4f)
			{
				if (iParam0->f_1948 >= 0)
				{
					bVar7 = RAND_FLOAT_RANGE(1.0f, 2.5f);
					bVar8 = CEIL((IntToFloat((iParam0->f_1948 - iVar0)) * bVar7));
				}
				else
				{
					bVar7 = RAND_FLOAT_RANGE(0.2f, 1.1f);
					bVar8 = CEIL((IntToFloat(iParam0->f_1944) * bVar7));
				}
				if (bVar8 <= Function_259(iParam0, iParam1, bVar8))
				{
					bVar8 = Function_259(iParam0, iParam1, bVar8);
				}
				if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
				{
					bVar8 = (iParam0 + 12[iParam153])->f_136;
				}
				if (Function_295(iParam0) >= 1 && bVar8 < (iParam0->f_1948 - iVar0))
				{
					bVar8 = (iParam0->f_1948 - iVar0);
					if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
					{
						bVar8 = (iParam0 + 12[iParam153])->f_136;
					}
				}
			}
			else
			{
				PRINTSTRING("fPosition is equal to ");
				PRINTFLOAT(bVar2);
				PRINTNL();
				if (iParam0->f_1948 == 0)
				{
					PRINTSTRING("AI checks due to SLOW PLAY");
					PRINTNL();
				}
				else if (bVar5 > (*iParam0 + 2312)[iParam0->f_1376])
				{
					PRINTSTRING("AI calls due to SLOW PLAY");
					PRINTNL();
					bVar8 = (iParam0->f_1948 - iVar0);
					if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
					{
						bVar8 = (iParam0 + 12[iParam153])->f_136;
					}
				}
				else
				{
					PRINTSTRING("AI raises due to SLOW PLAY (it's that strong)");
					PRINTNL();
					bVar7 = RAND_FLOAT_RANGE(2.0f, 5.0f);
					bVar8 = CEIL((IntToFloat((iParam0->f_1948 - iVar0)) * bVar7));
					if (bVar8 <= Function_259(iParam0, iParam1, bVar8))
					{
						bVar8 = Function_259(iParam0, iParam1, bVar8);
					}
					if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
					{
						bVar8 = (iParam0 + 12[iParam153])->f_136;
					}
					if (Function_295(iParam0) >= 1 && bVar8 < (iParam0->f_1948 - iVar0))
					{
						bVar8 = (iParam0->f_1948 - iVar0);
						if (bVar8 >= (iParam0 + 12[iParam153])->f_136)
						{
							bVar8 = (iParam0 + 12[iParam153])->f_136;
						}
					}
				}
			}
			SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pst");
			Function_353(21, 0);
			bLocal_908 = bVar8;
		}
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_296(1)53], "sit_poker/Player/look_at_cards/open_pst");
		Function_353(21, 0);
		bLocal_908 = bVar8;
	}
	Function_175(&iLocal_247);
	return 1;
}

int Function_259(int iParam0, int iParam1, bool bParam2) //Position: 0xEF28 / 61224
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = (iParam0 + 12[iParam153])->f_140;
	iVar1 = iParam0->f_1948;
	iVar2 = (iParam0 + 12[Function_237(1)53])->f_144;
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

var Function_260(int iParam0, int iParam1) //Position: 0xEFBA / 61370
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_261(int iParam0, int iParam1, int iParam2) //Position: 0xEFCD / 61389
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = Function_236(iParam0, &uVar0);
	if (iParam2 == iParam1)
	{
		return 1.0f;
	}
	iVar2 = iParam2;
	iVar3 = 0;
	while (!iVar2 != iParam1)
	{
		iVar2 = Function_368(iParam0 + 1288, iVar2);
		if (Function_321(iParam0 + 12[StackVal53]))
		{
			iVar3++;
		}
	}
	return ((1.0f / IntToFloat(iVar1)) * IntToFloat((iVar1 - iVar3)));
}

void Function_262() //Position: 0xF02D / 61485
{
	int iVar0;
	
	if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
	{
		iVar0 = 0;
		if (Function_22(0x20000000))
		{
			if (RAND_INT_RANGE(false, 1000) < 10)
			{
				iVar0 = (RAND_INT_RANGE(false, 50) % 2) + 1;
			}
		}
		switch (iLocal_909)
		{
			case 0x00000000:
				if ((IS_BUTTON_DOWN(Function_437(), 1, 1, false) || iVar0 != 1) && IS_ACTION_NODE_PLAYING(Function_24(), "sit_poker/Player/look_at_cards/open_mid"))
				{
					Function_265(&bLocal_253, &Local_322, Function_296(1));
					iLocal_909 = 2;
				}
				else if (IS_BUTTON_DOWN(Function_437(), 0, 1, false) || iVar0 != 2)
				{
					if (Local_322.f_1940 >= 0)
					{
						Function_322(&bLocal_253, &Local_322, 0);
						iLocal_909 = 3;
					}
				}
				else if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_253) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_253) != 1)
				{
					Function_264(&bLocal_253, &Local_322, Function_296(1), 0);
				}
				break;
			
			case 0x00000003:
				if ((!IS_BUTTON_DOWN(Function_437(), 0, 1, false) || iVar0 == 0) || bLocal_912 == 12)
				{
					Function_263(&bLocal_253, &Local_322, Function_296(1), 1);
					Function_279();
					iLocal_909 = 0;
				}
				break;
			
			case 0x00000002:
				if ((!IS_BUTTON_DOWN(Function_437(), 1, 1, false) || iVar0 == 0) || bLocal_912 == 12)
				{
					Function_263(&bLocal_253, &Local_322, Function_296(1), 1);
					Function_279();
					iLocal_909 = 0;
				}
				break;
			}
	}
	return;
}

void Function_263(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xF1A4 / 61860
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (bParam2 > 0 || bParam2 <= 6)
	{
	}
	bVar0 = (*iParam1 + 12)[bParam253];
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	GET_POSITION(bVar0, &vVar1);
	GET_ACTOR_AXIS(bVar0, &vVar4, 2);
	GET_ACTOR_AXIS(bVar0, &vVar7, 0);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar10.f_4 = (vVar10.y + 1.4f);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar10, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar13.f_4 = (vVar13.y + 0.7f);
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar13, StackVal) * Vector(-0.6f, -0.6f, -0.6f), StackVal, StackVal) };
	SET_CAMERA_POSITION(*bParam0, vVar10);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar13, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, false, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar16);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar16, 1);
}

void Function_264(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF2B4 / 62132
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
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
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	vector3 vVar30;
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	bVar0 = (*iParam1 + 12)[iParam253];
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	GET_POSITION(bVar0, &vVar1);
	GET_ACTOR_AXIS(bVar0, &vVar4, 2);
	GET_ACTOR_AXIS(bVar0, &vVar7, 0);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar10.f_4 = (vVar10.y + 1.4f);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar10, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	fVar13 = GET_STICK_X(Function_437(), 1, 1);
	if ((fVar13 < -0.2f && fVar13 > 0.2f) || !UI_ISACTIVE("HudSceneOnline"))
	{
		fVar13 = 0.0f;
	}
	fVar14 = 0.0f;
	if (fVar14 < -0.2f && fVar14 > 0.2f)
	{
		fVar14 = 0.0f;
	}
	fVar15 = (fVar13 * 2.0f);
	fVar16 = (fVar14 * 1.0f);
	fVar17 = (-1.0f * fLocal_244);
	fVar18 = (fVar17 + fVar15);
	fVar19 = (-0.5f * fLocal_245);
	fVar20 = (fVar19 + fVar16);
	fVar21 = ((-fLocal_242 * 10.0f) * bLocal_254);
	fVar22 = ((-fLocal_243 * 5.0f) * bLocal_254);
	fVar23 = ((fLocal_242 + (fVar18 / 1.0f)) + fVar21);
	fVar24 = ((fLocal_243 + (fVar20 / 1.0f)) + fVar22);
	fVar25 = (fLocal_244 + (fVar23 * bLocal_254));
	fVar26 = (fLocal_245 + (fVar24 * bLocal_254));
	if (fVar25 > -1.0f)
	{
		fVar23 = 0.0f;
		fVar25 = -1.0f;
	}
	else if (fVar25 < 1.0f)
	{
		fVar23 = 0.0f;
		fVar25 = 1.0f;
	}
	if (fVar26 > -1.0f)
	{
		fVar24 = 0.0f;
		fVar26 = -1.0f;
	}
	else if (fVar26 < 1.0f)
	{
		fVar24 = 0.0f;
		fVar26 = 1.0f;
	}
	fLocal_242 = fVar23;
	fLocal_244 = fVar25;
	fLocal_243 = fVar24;
	fLocal_245 = fVar26;
	vVar27 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar7, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal), StackVal) * Vector(fVar25, fVar25, fVar25), StackVal, StackVal) };
	vVar27 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar27, StackVal) * Vector(-0.6f, -0.6f, -0.6f), StackVal, StackVal) };
	vVar27.f_4 = (vVar27.y + 0.7f);
	if (fVar25 > 0.0f)
	{
		vVar27.f_4 = (vVar27.y + (-fVar25 * 0.3f));
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
	}
	SET_CAMERA_POSITION(*uParam0, vVar10);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar27, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, false, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar30);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar30, 1);
}

void Function_265(bool bParam0, int iParam1, bool bParam2) //Position: 0xF506 / 62726
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	
	if (bParam2 > 0 || bParam2 <= 6)
	{
	}
	if (!IS_OBJECT_VALID((*iParam1 + 12[bParam253] + 36 + 60)[0]))
	{
		return;
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[bParam253]), &vVar0);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[bParam253]), &vVar6, 0);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[bParam253]), &vVar9, 1);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[bParam253]), &vVar3, 2);
	vVar12 = { StackVal, StackVal, vVar0 };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(-0.17f, -0.17f, -0.17f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar12, StackVal) * Vector(0.95f, 0.95f, 0.95f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar12, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	GET_OBJECT_POSITION((*iParam1 + 12[bParam253] + 36 + 60)[0], &vVar18);
	GET_OBJECT_POSITION((*iParam1 + 12[bParam253] + 36 + 60)[1], &vVar21);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar21, vVar18, StackVal) };
	vVar15 = { StackVal, StackVal, Vector(vVar15, StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
	vVar15.f_4 = (vVar15.y - 0.01f);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar15, StackVal) * Vector(-0.04f, -0.04f, -0.04f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(0.15f, 0.15f, 0.15f), StackVal, StackVal) };
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar15, StackVal) * Vector(0.03f, 0.03f, 0.03f), StackVal, StackVal) };
	if (GET_ACTOR_ENUM((*iParam1 + 12)[bParam253]) == 947)
	{
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar12, StackVal) * Vector(0.04f, 0.04f, 0.04f), StackVal, StackVal) };
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(-0.01f, -0.01f, -0.01f), StackVal, StackVal) };
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar12, StackVal) * Vector(-0.03f, -0.03f, -0.03f), StackVal, StackVal) };
		vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar15, StackVal) * Vector(0.02f, 0.02f, 0.02f), StackVal, StackVal) };
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_CAMERA_POSITION(*bParam0, vVar12);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar15, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(*bParam0, 0.15f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar24);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar12, vVar24, 1);
	return;
}

int Function_266(int iParam0) //Position: 0xF71F / 63263
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if ((iParam0 + 12[StackVal53])->f_136 >= 0)
			{
				iVar1 = (StackVal + (StackVal + (iParam0 + 12[(iParam0 + 12[iVar153])->f_13653])->f_152));
			}
		}
		iVar0++;
	}
	return iVar1;
}

void Function_267(int iParam0, bool bParam1) //Position: 0xF78C / 63372
{
	struct<5> Var0;
	
	if (!Function_268())
	{
		return;
	}
	Var0 = iParam0;
	Var0.f_4 = bParam1;
	NET_SCRIPTMSG_SEND(3, 28, &Var0, 2, 0);
	switch (Var0)
	{
		case 0x00000000:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000002:
			Function_348(8, 1);
			break;
		
		case 0x00000001:
			Function_348(8, 1);
			break;
	}
	return;
}

bool Function_268() //Position: 0xF7F8 / 63480
{
	return Local_257.f_180;
}

bool Function_269(int iParam0, float fParam1) //Position: 0xF803 / 63491
{
	if (Function_270(iParam0))
	{
		if (Function_380(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_270(int iParam0) //Position: 0xF81F / 63519
{
	return Function_23(*iParam0, 1);
}

int Function_271(int iParam0) //Position: 0xF82C / 63532
{
	if ((iParam0 + 12[Function_296(1)53])->f_136 < 0 && (Function_295(iParam0) < 1 || iParam0->f_1948 < 0))
	{
		return 1;
	}
	return 0;
}

int Function_272(int iParam0, int iParam1) //Position: 0xF859 / 63577
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_268())
	{
		return 0;
	}
	bVar0 = (30.0f - Function_380(iParam0));
	bVar1 = CEIL(bVar0);
	if (bVar0 >= 0.0f)
	{
		iParam0->f_8 = 0.0f;
		HUD_TIMER_DISPLAY(0);
		return 1;
	}
	iVar2 = 0;
	if (StackVal >= 0.0f)
	{
		HUD_CLEAR_SMALL_TEXT();
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		iVar2 = 1;
	}
	if (StackVal > CEIL(bVar1) || iVar2)
	{
		FLASH_SET_INT("numberSystem", "TimerNumber", bVar1);
		if (bVar1 < 10)
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		iParam0->f_8 = bVar0;
		switch (bVar1)
		{
			case 0x0000000A:
				Function_168("Minigame_Timeout_Warning", 10.0f, 1, 0, 2, 1, 0);
				HUD_TIMER_DISPLAY(1);
				HUD_TIMER_COUNTDOWN(10.0f);
				FLASH_SET_INT("numberSystem", "TimerColor", 2);
				FLASH_SET_INT("numberSystem", "TimerAlert", true);
				Call_Loc(iParam1);
			
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

void Function_273() //Position: 0xF9E8 / 63976
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_2Slow", 0);
	}
	return;
}

var Function_274(int iParam0) //Position: 0xFA1C / 64028
{
	return (Function_275(iParam0, 1, 1) && UI_ISFOCUSED("HudSceneOnline"));
}

int Function_275(bool bParam0, int iParam1, bool bParam2) //Position: 0xFA3E / 64062
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(iVar0, bParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (bParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

int Function_276(int iParam0, bool bParam1, bool bParam2) //Position: 0xFABB / 64187
{
	int iVar0;
	
	if (bParam1 < (iParam0->f_1948 - (iParam0 + 12[Function_296(1)53])->f_140))
	{
		bParam1 = (iParam0->f_1948 - (iParam0 + 12[Function_296(1)53])->f_140);
	}
	while (bParam1 <= Function_259(iParam0, Function_296(1), bParam1))
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
	iVar0 = Function_277(iParam0, Function_296(1));
	if (bParam1 > iVar0)
	{
		bParam1 = iVar0;
	}
	return bParam1;
}

var Function_277(int iParam0, int iParam1) //Position: 0xFB2B / 64299
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if ((*iParam0 + 1288)[iVar13])
		{
			if (StackVal != iParam1)
			{
				if (Function_321(iParam0 + 12[StackVal53]))
				{
					if ((iParam0 + 12[StackVal53])->f_136 >= 0)
					{
						if ((StackVal + (iParam0 + 12[(iParam0 + 12[StackVal53])->f_13653])->f_140) >= iVar0)
						{
							iVar0 = (StackVal + (iParam0 + 12[(iParam0 + 12[StackVal53])->f_13653])->f_140);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar0 != 0 || (iParam0 + 12[iParam153])->f_136 >= iVar0)
	{
		return (iParam0 + 12[iParam153])->f_136;
	}
	return iVar0;
}

void Function_278(int iParam0, var uParam1) //Position: 0xFC0A / 64522
{
	struct<8> Var0;
	
	UI_ENTER("Poker_CheatCard");
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(&iParam0, 1) };
	PRINTSTRING(&Var0);
	PRINTNL();
	UI_TEXTURE_SET_NAME("Poker_CheatCard", &Var0);
	return;
}

void Function_279() //Position: 0xFC4F / 64591
{
	fLocal_242 = 0.0f;
	fLocal_243 = 0.0f;
	fLocal_244 = 0.0f;
	fLocal_245 = 0.0f;
	return;
}

void Function_280() //Position: 0xFC61 / 64609
{
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	FLASH_SET_INT("numberSystem", "nshowTimer", true);
	FLASH_SET_STRING("numberSystem", "nTimerText", "Minigame_RemainingTime", 1);
	FLASH_SET_INT("numberSystem", "TimerColor", false);
	FLASH_SET_INT("numberSystem", "TimerAlert", false);
	return;
}

void Function_281(bool bParam0, int iParam1) //Position: 0xFD14 / 64788
{
	if (iParam1 >= 4294967295)
	{
		UI_LABEL_SET_TEXT("nScores.s0", "Poker_ChipsLabel");
		UI_LABEL_SET_VALUE("nScores.s0", (bParam0 + 12[iParam153])->f_136);
	}
	return;
}

void Function_282() //Position: 0xFD5B / 64859
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Fold", 0);
	}
	return;
}

void Function_283(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xFD8E / 64910
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	struct<16> Var8;
	
	bVar0 = (&Local_322 + 12[bParam153])->f_132 == iParam0->f_1384;
	if (bVar0)
	{
	}
	iVar1 = Function_289(iParam0 + 12[bParam153]);
	if (bParam2 > (iParam0->f_1948 - (iParam0 + 12[bParam153])->f_140))
	{
		(iParam0 + 12[bParam153])->f_136 = ((iParam0 + 12[bParam153])->f_136 - bParam2);
		(iParam0 + 12[bParam153])->f_140 = ((iParam0 + 12[bParam153])->f_140 + bParam2);
		(iParam0 + 12[bParam153])->f_152 = ((iParam0 + 12[bParam153])->f_152 + bParam2);
		iParam0->f_1944 = (iParam0->f_1944 + bParam2);
		iParam0->f_1952 = 0;
		bVar3 = (iParam0 + 12[bParam153])->f_140;
		if ((iParam0 + 12[bParam153])->f_140 >= iParam0->f_1948)
		{
			if (iParam0->f_1948 == 0)
			{
				if ((iParam0 + 12[bParam153])->f_136 == 0)
				{
					if (!bParam3 && !bParam4)
					{
						if (Function_324(&Local_322) && !HUD_IS_FADED())
						{
							Function_288();
							if (bParam1 == Function_46(1))
							{
								SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[bParam153], 504, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (Function_225())
							{
								if (Function_225())
								{
									SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[bParam153], 283, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
								else
								{
									SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[bParam153], 287, Function_24(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
							}
							else if (Function_46(1) >= 4294967295)
							{
								SAY_SINGLE_LINE_CONTEXT((*iParam0 + 12)[Function_46(1)53], 505, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (bVar0)
					{
						if (bParam3)
						{
							if (!Function_22(32768))
							{
								if (Function_325(&iLocal_316, 0))
								{
									Function_168("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "Poker_Bet_SmallBlind";
						}
						else
						{
							if (!Function_22(32768))
							{
								if (Function_325(&iLocal_316, 5))
								{
									Function_168("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "Poker_Bet_Allin";
						}
					}
					else if (bParam3)
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
					if (!bParam3 && !bParam4)
					{
						if (Function_324(&Local_322) && !HUD_IS_FADED())
						{
							Function_287();
						}
					}
					if (bVar0)
					{
						if (bParam3)
						{
							if (!Function_22(32768))
							{
								if (Function_325(&iLocal_316, 0))
								{
									Function_168("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "Poker_Bet_SmallBlind";
						}
						else
						{
							if (!Function_22(32768))
							{
								if (Function_325(&iLocal_316, 4))
								{
									Function_168("Poker_BetHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							bVar2 = "nPoker_Bet";
						}
					}
					else if (bParam3)
					{
						bVar2 = "Poker_Bet_SmallBlind_Self";
					}
					else
					{
						bVar2 = "Poker_Bet_Self";
					}
				}
			}
			else if ((iParam0 + 12[bParam153])->f_136 == 0)
			{
				if (!bParam3 && !bParam4)
				{
					if (Function_324(&Local_322) && !HUD_IS_FADED())
					{
						Function_288();
					}
				}
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 1))
							{
								Function_168("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 5))
							{
								Function_168("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Raises_Allin";
					}
				}
				else if (bParam4)
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
				if (!bParam3 && !bParam4)
				{
					if (Function_324(&Local_322) && !HUD_IS_FADED())
					{
						Function_286();
					}
				}
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 1))
							{
								Function_168("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 9))
							{
								Function_168("Poker_RaiseHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Raises";
					}
				}
				else if (bParam4)
				{
					bVar2 = "Poker_Bet_BigBlind_Self";
				}
				else if (bParam3)
				{
					bVar2 = "Poker_Bet_SmallBlind_Self";
				}
				else
				{
					bVar2 = "Poker_Raises_Self";
				}
			}
			(iParam0 + 12[bParam153])->f_144 = ((iParam0 + 12[bParam153])->f_140 - iParam0->f_1948);
			iParam0->f_1392 = (iParam0 + 12[bParam153])->f_132;
			iParam0->f_1948 = (iParam0 + 12[bParam153])->f_140;
			(iParam0 + 12[bParam153])->f_148 = iParam0->f_1944;
			iParam0->f_1952 = 0;
		}
		else if ((iParam0 + 12[bParam153])->f_140 != iParam0->f_1948 && bParam2 < 0)
		{
			if (!bParam3 && !bParam4)
			{
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					Function_285();
				}
			}
			bVar3 = (iParam0 + 12[bParam153])->f_140;
			if (!Function_22(2))
			{
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 1))
							{
								Function_168("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else if (bParam3)
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 0))
							{
								Function_168("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_SmallBlind";
					}
					else
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 8))
							{
								Function_168("Poker_CallHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Calls";
						bVar3 = bParam2;
					}
				}
				else if (bParam4)
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
			if (!bParam3 && !bParam4)
			{
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					Function_284();
				}
			}
			if (bVar0)
			{
				if (!Function_22(32768))
				{
					if (Function_325(&iLocal_316, 7) && !Function_22(2))
					{
						Function_168("Poker_CheckHelp", 9.0f, 1, 0, 2, 1, 0);
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
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/check");
		}
		else if ((iParam0 + 12[bParam153])->f_136 == 0)
		{
			if (IS_OBJECT_VALID((*iParam0 + 12[bParam153] + 164)[iVar1]))
			{
				DESTROY_OBJECT((*iParam0 + 12[bParam153] + 164)[iVar1]);
			}
			(*iParam0 + 12[bParam153] + 164)[iVar1] = (iParam0 + 12[bParam153])->f_156;
			bVar4 = "wrist_r_attachment";
			Function_351((*iParam0 + 12[bParam153] + 164)[iVar1], (*iParam0 + 12)[bParam153]);
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/bet_allin");
			(*iParam0 + 12[bParam153] + 184)[iVar1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[bParam153] + 164)[iVar1], GET_OBJECT_FROM_ACTOR((*iParam0 + 12)[bParam153]), bVar4, "grab", 4294967295);
		}
		else if (iVar1 <= 3)
		{
			if (IS_OBJECT_VALID((*iParam0 + 12[bParam153] + 164)[iVar1]))
			{
				DESTROY_OBJECT((*iParam0 + 12[bParam153] + 164)[iVar1]);
			}
			NET_OBJECT_REPLICATION_MODE_START(17, 0);
			if (bParam2 > 25)
			{
				bVar5 = "elbow_r_attachment";
				(*iParam0 + 12[bParam153] + 164)[iVar1] = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), "$/fragments/p_crd_chipRedPoker01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			}
			else if (bParam2 > 10)
			{
				bVar5 = "hip_r_attachment";
				(*iParam0 + 12[bParam153] + 164)[iVar1] = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), "$/fragments/p_crd_chipBluePoker01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			}
			else
			{
				bVar5 = "hip_l_attachment";
				(*iParam0 + 12[bParam153] + 164)[iVar1] = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), "$/fragments/p_crd_chipGreenPoker01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			}
			NET_OBJECT_REPLICATION_MODE_END(17);
			Function_351((*iParam0 + 12[bParam153] + 164)[iVar1], (*iParam0 + 12)[bParam153]);
			if (iVar1 == 0)
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/R/bet");
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/B/bet");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/G/bet");
				}
			}
			else if (iVar1 == 1)
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/R2/bet");
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/B2/bet");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/G2/bet");
				}
			}
			else if (bParam2 > 25)
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/R3/bet");
			}
			else if (bParam2 > 10)
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/B3/bet");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/G3/bet");
			}
			(*iParam0 + 12[bParam153] + 184)[iVar1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[bParam153] + 164)[iVar1], GET_OBJECT_FROM_ACTOR((*iParam0 + 12)[bParam153]), bVar5, "grab", 4294967295);
		}
	}
	else if (bParam2 == (iParam0 + 12[bParam153])->f_136)
	{
		if (bParam2 == 0)
		{
			if (!Function_22(2))
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
			if (!bParam3 && !bParam4)
			{
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					Function_284();
				}
			}
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/check");
		}
		else
		{
			(iParam0 + 12[bParam153])->f_136 = ((iParam0 + 12[bParam153])->f_136 - bParam2);
			(iParam0 + 12[bParam153])->f_140 = ((iParam0 + 12[bParam153])->f_140 + bParam2);
			(iParam0 + 12[bParam153])->f_152 = ((iParam0 + 12[bParam153])->f_152 + bParam2);
			iParam0->f_1944 = (iParam0->f_1944 + bParam2);
			iVar6 = (iParam0 + 12[bParam153])->f_140;
			if (iVar6 >= iParam0->f_1952)
			{
				iParam0->f_1952 = iVar6;
			}
			bVar3 = (iParam0 + 12[bParam153])->f_140;
			if (!bParam3 && !bParam4)
			{
				if (Function_324(&Local_322) && !HUD_IS_FADED())
				{
					Function_288();
				}
			}
			if (!Function_22(2))
			{
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 1))
							{
								Function_168("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_22(32768))
						{
							if (Function_325(&iLocal_316, 5))
							{
								Function_168("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar2 = "Poker_Bet_Allin";
					}
				}
				else if (bParam4)
				{
					bVar2 = "Poker_Bet_BigBlind_Self";
				}
				else if (bParam3)
				{
					bVar2 = "Poker_Bet_SmallBlind_Self";
				}
				else
				{
					bVar2 = "Poker_Bet_Allin_Self";
				}
			}
			if (IS_OBJECT_VALID((*iParam0 + 12[bParam153] + 164)[iVar1]))
			{
				DESTROY_OBJECT((*iParam0 + 12[bParam153] + 164)[iVar1]);
			}
			(*iParam0 + 12[bParam153] + 164)[iVar1] = (iParam0 + 12[bParam153])->f_156;
			Function_351((*iParam0 + 12[bParam153] + 164)[iVar1], (*iParam0 + 12)[bParam153]);
			bVar7 = "wrist_r_attachment";
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[bParam153], "sit_poker/player/bet_request/bet_allin");
			(*iParam0 + 12[bParam153] + 184)[iVar1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[bParam153] + 164)[iVar1], GET_OBJECT_FROM_ACTOR((*iParam0 + 12)[bParam153]), bVar7, "grab", 4294967295);
		}
	}
	else
	{
		LOG_ERROR("Illegal Bet");
		NET_LOG(true, "POKER ERROR", "BET IS: %s", I2STR(bParam2), false, false, false);
		NET_LOG(true, "POKER ERROR", "TABLE BET IS: %s", I2STR(iParam0->f_1948), false, false, false);
		NET_LOG(true, "POKER ERROR", "PLAYER'S BET IS: %s", I2STR((iParam0 + 12[bParam153])->f_140), false, false, false);
		NET_LOG(true, "POKER ERROR", "RAISE FORMULA IS: %s >= %s-%s  (%s)", I2STR(bParam2), I2STR(iParam0->f_1948), I2STR((iParam0 + 12[bParam153])->f_140), I2STR((iParam0->f_1948 - (iParam0 + 12[bParam153])->f_140)));
		NET_LOG(true, "POKER ERROR", "ALL-IN FORMULA IS: %s = %s", I2STR(bParam2), I2STR((iParam0 + 12[bParam153])->f_136), false, false);
		return;
	}
	if (bParam1 == Function_46(1))
	{
		if (iParam0 + 12[bParam153])->f_140 >= (iParam0->f_1944 - (iParam0 + 12[bParam153])->f_140)
		{
			DECOR_SET_INT(Global_34573, "sc_poker_obj3_fail", true);
		}
	}
	if (!Function_22(2))
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		if (bVar0)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bParam1, &Local_322) };
			if (bVar3 >= 4294967295)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, bVar2, &Var8, Function_220(bVar3), false, false, 0, 2, 0, 0, 0);
				PRINTINT(bVar3);
				PRINTNL();
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, bVar2, &Var8, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		else if (bVar3 >= 4294967295)
		{
			PRINT_OBJECTIVE_FORMAT(4.0f, bVar2, Function_334(), Function_220(bVar3), false, false, 0, 2, 0, 0, 0);
			PRINTINT(bVar3);
			PRINTNL();
		}
		else
		{
			PRINT_OBJECTIVE_FORMAT(4.0f, bVar2, Function_334(), false, false, false, 0, 2, 0, 0, 0);
		}
	}
	UI_LABEL_SET_VALUE("nScores.s2", (iParam0 + 12[bParam153])->f_140);
}

void Function_284() //Position: 0x10F9C / 69532
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Check", 0);
	}
	return;
}

void Function_285() //Position: 0x10FD0 / 69584
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Call", 0);
	}
	return;
}

void Function_286() //Position: 0x11003 / 69635
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Raise", 0);
	}
	return;
}

void Function_287() //Position: 0x11037 / 69687
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Bet", 0);
	}
	return;
}

void Function_288() //Position: 0x11069 / 69737
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_AllIn", 0);
	}
	return;
}

int Function_289(int iParam0) //Position: 0x1109D / 69789
{
	if (!IS_OBJECT_VALID((*iParam0 + 164)[0]))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID((*iParam0 + 164)[1]))
	{
		return 1;
	}
	if (!IS_OBJECT_VALID((*iParam0 + 164)[2]))
	{
		return 2;
	}
	return 3;
}

void Function_290(bool bParam0) //Position: 0x110DD / 69853
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = false;
	if ((*&Local_322 + 1288)[Local_322.f_13843])
	{
		if (Function_296(0) != Function_46(0))
		{
			bVar2 = Function_321(&Local_322 + 12[Function_46(1)53]);
			bVar3 = (*bParam0 + 12)[Function_46(1)53];
			if (Function_22(0x20000000))
			{
				if (RAND_INT_RANGE(false, 1000) < 10)
				{
					if (Function_22(0x40000000))
					{
						Function_198(0x40000000);
					}
					else
					{
						Function_438(0x40000000);
					}
				}
			}
			if (bVar2)
			{
				if (IS_BUTTON_DOWN(Function_437(), 1, 1, false) || Function_22(0x40000000))
				{
					if (((IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/card_idle/idle") || IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/card_idle/StareCheck/stare")) || IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Dealer/card_dealing/deal_idle")) || IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/join_game/idle"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar3, "sit_poker/player/look_at_cards");
						Function_291(bParam0 + 12[Function_46(1)53]);
					}
					if (IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/look_at_cards/open_mid"))
					{
						Function_265(&bLocal_253, bParam0, Function_46(1));
					}
					else
					{
						Function_263(&bLocal_253, bParam0, Function_46(1), 1);
					}
					Function_19();
					bVar1 = true;
				}
			}
			if (!bVar1)
			{
				if ((IS_BUTTON_DOWN(Function_437(), 0, 1, false) || Function_22(0x40000000)) && (&Local_322 + 1824)->f_84 < 0)
				{
					Function_322(&bLocal_253, bParam0, 0);
					Function_19();
					bVar1 = true;
				}
			}
			if (!bVar1)
			{
				if (bVar2)
				{
					if (IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/look_at_cards/open_mid") || IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/look_at_cards/open_pre"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar3, "sit_poker/Player/look_at_cards/open_pst");
					}
				}
				bVar0 = true;
			}
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (Function_296(0) >= 4294967295)
		{
			if ((bParam0 + 12[Function_296(1)53] + 36)->f_84 != 2 && (bParam0 + 12[Function_296(1)53])->f_136 < 0)
			{
				Function_360(&Local_322, &bLocal_253, Function_296(1), Function_46(0), 1);
			}
		}
	}
	return;
}

void Function_291(int iParam0) //Position: 0x113C6 / 70598
{
	if ((iParam0 + 36)->f_84 >= 0)
	{
		Function_292(iParam0, 0);
	}
	if ((iParam0 + 36)->f_84 >= 1)
	{
		Function_292(iParam0, 1);
	}
	return;
}

void Function_292(int iParam0, bool bParam1) //Position: 0x113EC / 70636
{
	if (bParam1 == 0)
	{
		(*iParam0 + 36 + 72)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 36 + 60)[0], *iParam0, "wrist_l_attachment", "grab", 4294967295);
		Function_351((*iParam0 + 36 + 60)[0], *iParam0);
	}
	else if (bParam1 == 1)
	{
		(*iParam0 + 36 + 72)[1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 36 + 60)[1], *iParam0, "arm_l_attachment", "grab", 4294967295);
		Function_351((*iParam0 + 36 + 60)[1], *iParam0);
	}
	return;
}

void Function_293(struct<85> Param0) //Position: 0x11487 / 70791
{
	char* cVar0[64];
	int iVar22;
	
	strcpy(&cVar6, "", 64);
	iVar22 = 0;
	while (iVar22 <= Param0.f_84)
	{
		Function_136(StackVal, Param0[iVar222], &cVar0);
		stradd(&cVar6, &cVar0, 64);
		if (!iVar22 != (Param0.f_84 - 1))
		{
			stradd(&cVar6, " AND ", 64);
		}
		iVar22++;
	}
	PRINTSTRING(&cVar6);
	PRINTNL();
}

bool Function_294(int iParam0) //Position: 0x114DF / 70879
{
	if (Function_46(1) >= 4294967295)
	{
		if ((*iParam0 + 1288)[iParam0->f_13843])
		{
			if (Function_321(iParam0 + 12[Function_46(1)53]))
			{
				if (IS_BUTTON_DOWN(Function_437(), 1, 1, false))
				{
					return 1;
				}
				if (IS_BUTTON_DOWN(Function_437(), 0, 1, false) && (iParam0 + 1824)->f_84 < 0)
				{
					return 1;
				}
				if (IS_BUTTON_DOWN(Function_437(), 9, 1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int Function_295(int iParam0) //Position: 0x11542 / 70978
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if (Function_321(iParam0 + 12[StackVal53]))
			{
				if ((iParam0 + 12[StackVal53])->f_136 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_296(int iParam0) //Position: 0x115A3 / 71075
{
	int iVar0;
	
	if (Local_322.f_1380 > 0 || Local_322.f_1380 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

var Function_297(int iParam0) //Position: 0x115E0 / 71136
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = RAND_INT_RANGE(true, 6);
	iVar2 = iParam0->f_1388;
	iVar1 = 0;
	while (iVar1 <= bVar0)
	{
		iVar2 = Function_368(iParam0 + 1288, iVar2);
		if (iVar2 == iParam0->f_1384)
		{
			iVar2 = Function_368(iParam0 + 1288, iVar2);
		}
		iVar1++;
	}
	return StackVal;
}

void Function_298(int iParam0) //Position: 0x11634 / 71220
{
	int iVar0;
	
	iVar0 = Function_368(iParam0 + 1288, Function_368(iParam0 + 1288, iParam0->f_1388));
	if (Function_299(iParam0) && iParam0->f_1940 != 0)
	{
		iParam0->f_1380 = iParam0->f_1388;
	}
	else
	{
		iParam0->f_1380 = Function_368(iParam0 + 1288, iVar0);
	}
	iParam0->f_1392 = iParam0->f_1380;
	return;
}

bool Function_299(int iParam0) //Position: 0x11687 / 71303
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
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

int Function_300(int iParam0) //Position: 0x116C4 / 71364
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	
	if (iParam0->f_1940 != 0)
	{
		return 1;
	}
	if ((&Local_322 + 12[Function_137(1)53] + 36)->f_84 != 2 && !IS_ATTACHMENT_VALID(iLocal_910))
	{
		return 1;
	}
	iVar5 = Local_322.f_1388;
	iVar0 = Function_310(6, iVar5);
	iVar1 = Function_310(6, iVar0);
	iVar2 = Function_310(6, iVar1);
	iVar3 = Function_310(6, iVar2);
	iVar4 = Function_310(6, iVar3);
	switch (iLocal_256)
	{
		case 0x00000000:
			if ((IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_idle") || IS_ACTION_NODE_PLAYING((*&Local_322 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_mid")) || Function_22(32768))
			{
				Function_309();
				if ((&Local_322 + 12[Function_137(1)53] + 36)->f_84 == 0)
				{
					if (Function_308(iParam0, iVar0, 0))
					{
						Function_304(StackVal, iParam0, 0, 1);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/1");
						Function_438(65536);
						iLocal_256 = 1;
					}
					else if (Function_308(iParam0, iVar1, 0))
					{
						Function_304(StackVal, iParam0, 0, 2);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/2");
						Function_438(131072);
						iLocal_256 = 1;
					}
					else if (Function_308(iParam0, iVar2, 0))
					{
						Function_304(StackVal, iParam0, 0, 3);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/3");
						Function_438(262144);
						iLocal_256 = 1;
					}
					else if (Function_308(iParam0, iVar3, 0))
					{
						Function_304(StackVal, iParam0, 0, 4);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/4");
						Function_438(524288);
						iLocal_256 = 1;
					}
					else if (Function_308(iParam0, iVar4, 0))
					{
						Function_304(StackVal, iParam0, 0, 5);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/5");
						Function_438(1048576);
						iLocal_256 = 1;
					}
					else
					{
						Function_304(StackVal, iParam0, 0, 6);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/self/1_pre");
						Function_438(2097152);
						iLocal_256 = 1;
					}
				}
				else if (Function_308(iParam0, iVar0, 1))
				{
					Function_304(StackVal, iParam0, 1, 1);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/1");
					Function_438(65536);
					iLocal_256 = 1;
				}
				else if (Function_308(iParam0, iVar1, 1))
				{
					Function_304(StackVal, iParam0, 1, 2);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/2");
					Function_438(131072);
					iLocal_256 = 1;
				}
				else if (Function_308(iParam0, iVar2, 1))
				{
					Function_304(StackVal, iParam0, 1, 3);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/3");
					Function_438(262144);
					iLocal_256 = 1;
				}
				else if (Function_308(iParam0, iVar3, 1))
				{
					Function_304(StackVal, iParam0, 1, 4);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/4");
					Function_438(524288);
					iLocal_256 = 1;
				}
				else if (Function_308(iParam0, iVar4, 1))
				{
					Function_304(StackVal, iParam0, 1, 5);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/5");
					Function_438(1048576);
					iLocal_256 = 1;
				}
				else
				{
					Function_304(StackVal, iParam0, 1, 6);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/self/2_pre");
					Function_438(2097152);
					iLocal_256 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (((((((IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/1/1_pst") || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/2/2_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/3/3_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/4/4_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/5/5_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/self/1_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/self/2_pst")) || Function_22(32768))
			{
				REMOVE_OBJECT_ATTACHMENT((*iParam0 + 12[Function_137(1)53] + 184)[0]);
				Function_301(iParam0, iVar0, iVar1, iVar2, iVar3, iVar4, iVar5);
				Function_309();
				if ((&Local_322 + 12[Function_137(1)53] + 36)->f_84 == 2)
				{
					if (Function_22(32768))
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_end_snap");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_pst");
					}
					iLocal_256 = 2;
				}
				else
				{
					iLocal_256 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_end") || Function_22(32768))
			{
				if (Function_22(32768))
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_137(1)53], "sit_poker/Dealer/card_dealing/deal_end_snap");
				}
				REMOVE_OBJECT_ATTACHMENT(iLocal_910);
				Function_352((*iParam0 + 12)[Function_137(1)53], &vVar6, &vVar9);
				SET_OBJECT_POSITION(bLocal_311, vVar6);
				SET_OBJECT_ORIENTATION(bLocal_311, vVar9);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_301(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x11F19 / 73497
{
	bool bVar0;
	struct<53> Var1;
	int iVar54;
	vector3 vVar55;
	vector3 vVar58;
	
	if (Function_22(65536))
	{
		bVar0 = uParam1;
	}
	else if (Function_22(131072))
	{
		bVar0 = uParam2;
	}
	else if (Function_22(262144))
	{
		bVar0 = uParam3;
	}
	else if (Function_22(524288))
	{
		bVar0 = uParam4;
	}
	else if (Function_22(1048576))
	{
		bVar0 = uParam5;
	}
	else if (Function_22(2097152))
	{
		bVar0 = uParam6;
	}
	PRINTSTRING("SeatDealTo equals ");
	PRINTINT(bVar0);
	PRINTNL();
	*(&Var1 + 36) = 7;
	*(&Var1 + 36 + 60) = 2;
	*(&Var1 + 36 + 72) = 2;
	*(&Var1 + 164) = 4;
	*(&Var1 + 184) = 4;
	if (bVar0 == 4294967295)
	{
		LOG_ERROR("SeatDealtTo is -1");
	}
else
{
	}
}

void Function_302(var uParam0, var uParam1, int iParam2) //Position: 0x1206C / 73836
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		GET_POSITION(*uParam0, &vVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(*uParam0), &vVar3);
		if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_hillb"))
		{
			*uParam1 = { -0.028f, 0.801f, -0.006f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -79.291f, 180.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_gped"))
		{
			*uParam1 = { -0.009f, 0.802f, 0.065f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -79.291f, 180.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_oldm"))
		{
			*uParam1 = { 0.004f, 0.801f, 0.135f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -8.821f, 180.0f) };
		}
		else
		{
			*uParam1 = { -0.016f, 0.802f, -0.145f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -61.298f, 180.0f) };
		}
		UNK_0xF76F2BB3(uParam1, &vVar3, 0, 4);
		*uParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *uParam1, StackVal) };
	}
	return;
}

void Function_303(var uParam0, var uParam1, int iParam2) //Position: 0x12199 / 74137
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		GET_POSITION(*uParam0, &vVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(*uParam0), &vVar3);
		if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_hillb"))
		{
			*uParam1 = { -0.035f, 0.8f, -0.047f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -61.298f, 180.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_gped"))
		{
			*uParam1 = { -0.016f, 0.801f, 0.024f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -61.298f, 180.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_oldm"))
		{
			*uParam1 = { -0.007f, 0.8f, 0.135f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -3.821f, -180.0f) };
		}
		else
		{
			*uParam1 = { -0.009f, 0.801f, -0.104f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -79.291f, 180.0f) };
		}
		UNK_0xF76F2BB3(uParam1, &vVar3, 0, 4);
		*uParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *uParam1, StackVal) };
	}
	return;
}

void Function_304(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x122C6 / 74438
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[32];
	struct<2> Var14;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	Function_307(&Local_322 + 1396);
	Var14 = { StackVal, Function_307(&Local_322 + 1396) };
	Function_305(&Local_322 + 12[iParam153] + 36, &Var14);
	if (iParam1 != Function_46(1) && iParam2 != 1)
	{
		Global_13172[(Global_13172[StackVal11].f_28 + 1.0f)11].f_28 = StackVal;
	}
	if ((iParam0 + 12[iParam153])->f_128 == 1)
	{
		cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(&Var14, 0) };
	}
	else
	{
		strcpy(&cVar6, "$/fragments/p_crd_01x", 32);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam0 + 12[iParam153] + 36 + 60)[iParam2] = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), &cVar6, vVar0, vVar3, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	switch (bParam3)
	{
		case 0x00000001:
			(*iParam0 + 12[Function_137(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53], "spine00_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000002:
			(*iParam0 + 12[Function_137(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53], "spine01_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000003:
			(*iParam0 + 12[Function_137(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53], "spine02_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000004:
			(*iParam0 + 12[Function_137(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53], "pelvis_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000005:
			(*iParam0 + 12[Function_137(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53], "spine03_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000006:
			(*iParam0 + 12[Function_137(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53], "neck_Attachment", "grab", 4294967295);
			break;
	}
	Function_351((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_137(1)53]);
}

void Function_305(var uParam0, int iParam1) //Position: 0x12594 / 75156
{
	if (Function_306(StackVal, uParam0, *iParam1))
	{
		LOG_ERROR("Trying to add a card already in hand");
	}
	else
	{
		*uParam0[uParam0->f_842] = { StackVal, *iParam1 };
		uParam0->f_84++;
	}
	return;
}

bool Function_306(var uParam0, struct<5> Param1) //Position: 0x125EB / 75243
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= uParam0->f_84)
	{
		if (StackVal && StackVal != (*uParam0)[iVar02] != Param1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<8> Function_307(int iParam0) //Position: 0x12623 / 75299
{
	iParam0->f_420++;
	return StackVal, *(iParam0[(iParam0->f_420 - 1)2]);
}

bool Function_308(int iParam0, int iParam1, int iParam2) //Position: 0x12642 / 75330
{
	if (!(*iParam0 + 1288)[iParam13])
	{
		return 0;
	}
	if ((iParam0 + 12[StackVal53] + 36)->f_84 == iParam2)
	{
		return 1;
	}
	return 0;
}

void Function_309() //Position: 0x1267A / 75386
{
	Function_198(65536);
	Function_198(131072);
	Function_198(262144);
	Function_198(524288);
	Function_198(1048576);
	Function_198(2097152);
	return;
}

var Function_310(int iParam0, int iParam1) //Position: 0x126AA / 75434
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

var Function_311(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x126E4 / 75492
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= uParam1->f_84)
	{
		Function_305(uParam0, uParam1[iVar02]);
		iVar0++;
	}
	uVar1 = Function_313(uParam0, uParam2, uParam3, uParam4);
	iVar0 = 0;
	while (iVar0 <= uParam1->f_84)
	{
		Function_312(uParam0);
		iVar0++;
	}
	uParam0->f_88 = uVar1;
	return uVar1;
}

void Function_312(int iParam0) //Position: 0x1273B / 75579
{
	iParam0->f_84 = (iParam0->f_84 - 1);
	(*iParam0)[iParam0->f_842] = 4294967295;
	iParam0[iParam0->f_842]->f_4 = 4294967295;
	return;
}

var Function_313(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1275F / 75615
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
	if (uParam0->f_84 > 5)
	{
		iVar2 = 5;
	}
	else
	{
		iVar2 = uParam0->f_84;
	}
	*(&vVar29 + 4) = 2;
	*(&vVar29 + 4 + 12) = 2;
	*(&vVar29 + 4 + 12 + 12) = 2;
	*(&vVar29 + 4 + 12 + 12 + 12) = 2;
	*(&vVar29 + 4 + 12 + 12 + 12 + 12) = 2;
	*(&vVar29 + 4 + 12 + 12 + 12 + 12 + 12) = 2;
	iVar48 = 0;
	iVar55 = 0;
	iVar4 = 0;
	while (iVar4 <= uParam0->f_84)
	{
		iVar6 = (*uParam0)[iVar42];
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
		iVar58 = Function_319(uParam0, iVar55);
		if (iVar58 >= 0)
		{
			if (iVar58 == 12)
			{
				*uParam1 = 10;
				*uParam2 = iVar58;
				*uParam3 = iVar55;
			}
			else
			{
				*uParam1 = 9;
				*uParam2 = iVar58;
				*uParam3 = iVar55;
			}
			iVar56 = (9 * iVar57);
			iVar56 = (iVar56 + iVar58);
			return iVar56;
		}
	}
	if (!iVar8[4] != 0)
	{
		*uParam1 = 8;
		*uParam2 = vVar29[43][0];
		iVar56 = (8 * iVar57);
		iVar56 = (iVar56 + vVar29[43][0] * 13);
		vVar29[43][1] = 13;
		iVar56 = (iVar56 + Function_318(&uVar15, 1, &(vVar29[43])));
	}
	else if (iVar8[3] > 2)
	{
		*uParam1 = 7;
		iVar56 = (7 * iVar57);
		*uParam2 = vVar29[33][0];
		*uParam3 = vVar29[33][1];
		iVar56 = (iVar56 + vVar29[33][0] * 13);
		iVar56 = (iVar56 + vVar29[33][1]);
	}
	else if (iVar8[3] != 1 && !iVar8[2] != 0)
	{
		*uParam1 = 7;
		iVar56 = (7 * iVar57);
		*uParam2 = vVar29[33][0];
		*uParam3 = vVar29[23][0];
		iVar56 = (iVar56 + vVar29[33][0] * 13);
		iVar56 = (iVar56 + vVar29[23][0]);
	}
	else if (bVar1)
	{
		*uParam1 = 6;
		*uParam2 = Function_317(uParam0, iVar55);
		*uParam3 = iVar55;
		iVar56 = (6 * iVar57);
		iVar56 = (iVar56 + Function_315(uParam0, 5, iVar55));
	}
	else if (bVar0)
	{
		*uParam1 = 5;
		*uParam2 = iVar48;
		iVar56 = (5 * iVar57);
		iVar56 = (iVar56 + iVar48);
	}
	else if (iVar8[3] == 1)
	{
		*uParam1 = 4;
		iVar56 = (4 * iVar57);
		*uParam2 = vVar29[33][0];
		iVar56 = (iVar56 + vVar29[33][0] * 13 * 13);
		iVar56 = (iVar56 + Function_318(&uVar15, (iVar2 - 3), &(vVar29[33])));
	}
	else if (iVar8[2] > 2)
	{
		*uParam1 = 3;
		iVar56 = (3 * iVar57);
		*uParam2 = vVar29[23][0];
		*uParam3 = vVar29[23][1];
		iVar56 = (iVar56 + vVar29[23][0] * 13 * 13);
		iVar56 = (iVar56 + vVar29[23][1] * 13);
		iVar56 = (iVar56 + Function_318(&uVar15, (iVar2 - 4), &(vVar29[23])));
	}
	else if (iVar8[2] == 1)
	{
		*uParam1 = 2;
		iVar56 = (2 * iVar57);
		*uParam2 = vVar29[23][0];
		iVar56 = (iVar56 + vVar29[23][0] * 13 * 13 * 13);
		iVar56 = (iVar56 + Function_318(&uVar15, (iVar2 - 2), &(vVar29[23])));
	}
	else
	{
		*uParam1 = 1;
		*uParam2 = Function_314(uParam0);
		iVar56 = (1 * iVar57);
		iVar56 = (iVar56 + Function_318(&uVar15, iVar2, &(vVar29[23])));
	}
	return iVar56;
}

var Function_314(int iParam0) //Position: 0x12BB0 / 76720
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 <= iParam0->f_84)
	{
		if ((*iParam0)[iVar02] >= iVar1)
		{
			iVar1 = (*iParam0)[iVar02];
		}
		iVar0++;
	}
	return iVar1;
}

int Function_315(var uParam0, int iParam1, int iParam2) //Position: 0x12BE3 / 76771
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[13];
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 <= uParam0->f_84)
	{
		iVar2 = StackVal;
		if (iVar2 == iParam2)
		{
			iVar3 = (*uParam0)[iVar02];
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
		iVar1 = (iVar1 + (Function_316(13, iParam1) * iVar0));
		iVar0 = (iVar0 - 1);
	}
	return iVar1;
}

int Function_316(int iParam0, int iParam1) //Position: 0x12C64 / 76900
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

var Function_317(var uParam0, int iParam1) //Position: 0x12C85 / 76933
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 <= uParam0->f_84)
	{
		if (StackVal && (*uParam0)[iVar02] < iVar1 != iParam1)
		{
			iVar1 = (*uParam0)[iVar02];
		}
		iVar0++;
	}
	return iVar1;
}

int Function_318(var uParam0, int iParam1, int iParam2) //Position: 0x12CC5 / 76997
{
	int iVar0;
	int iVar1;
	
	iVar0 = 12;
	iVar1 = 0;
	while (iParam1 >= 0)
	{
		while (((*uParam0)[iVar0] != 0 || iVar0 != (*iParam2)[0]) || iVar0 != (*iParam2)[1])
		{
			iVar0 = (iVar0 - 1);
		}
		iParam1 = (iParam1 - 1);
		iVar1 = (iVar1 + (Function_316(13, iParam1) * iVar0));
		iVar0 = (iVar0 - 1);
	}
	return iVar1;
}

var Function_319(var uParam0, int iParam1) //Position: 0x12D1E / 77086
{
	int iVar0[13];
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar14 = 0;
	while (iVar14 <= uParam0->f_84)
	{
		iVar15 = StackVal;
		iVar16 = (*uParam0)[iVar142];
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

int Function_320(int iParam0) //Position: 0x12DA5 / 77221
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<5> Var5;
	int iVar10;
	float fVar11[13];
	
	bVar0 = 0.0f;
	Var1 = { StackVal, *iParam0[02] };
	Var3 = { StackVal, *iParam0[12] };
	if (Var1 >= Var3)
	{
		Var5 = { StackVal, Var1 };
		Var7 = { StackVal, Var3 };
	}
	else
	{
		Var5 = { StackVal, Var3 };
		Var7 = { StackVal, Var1 };
	}
	switch (Var5)
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
			bVar0 = (TO_FLOAT(Var5 + 2) / 2.0f);
			break;
	}
	iVar9 = ((Var5 - Var7) - 1);
	if (Var5 == Var7)
	{
		bVar0 = (bVar0 * 2.0f);
		if (bVar0 > 5.0f)
		{
			bVar0 = 5.0f;
		}
	}
	else
	{
		switch (iVar9)
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
	if (iVar9 > 2 && Var5 >= 9)
	{
		bVar0 = (bVar0 + 1.0f);
	}
	iVar10 = (12 - CEIL(bVar0));
	if (iVar10 <= 1)
	{
		iVar10 = 1;
	}
	else if (iVar10 >= 12)
	{
		iVar10 = 12;
	}
	fVar11[0] = 1.0f;
	fVar11[1] = 1.0f;
	fVar11[2] = 0.95f;
	fVar11[3] = 0.9f;
	fVar11[4] = 0.85f;
	fVar11[5] = 0.8f;
	fVar11[6] = 0.75f;
	fVar11[7] = 0.7f;
	fVar11[8] = 0.55f;
	fVar11[9] = 0.4f;
	fVar11[10] = 0.3f;
	fVar11[11] = 0.2f;
	fVar11[12] = 0.1f;
	return fVar11[iVar10];
}

bool Function_321(int iParam0) //Position: 0x12F78 / 77688
{
	if (((iParam0 + 36)->f_84 == 2 || IS_ACTION_NODE_PLAYING(*iParam0, "sit_poker/Player/bet_request/fold")) || IS_ACTION_NODE_PLAYING(*iParam0, "sit_poker/Player/bet_request/fold_B"))
	{
		return 0;
	}
	return 1;
}

void Function_322(bool bParam0, int iParam1, bool bParam2) //Position: 0x12FE7 / 77799
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	vector3 vVar14;
	vector3 vVar17;
	
	if (IS_OBJECT_VALID((*iParam1 + 1916)[0]) && IS_OBJECT_VALID((*iParam1 + 1916)[((iParam1 + 1824)->f_84 - 1)]))
	{
		vVar1 = { 0.0f, 0.0f, 0.0f };
		vVar7 = { 0.0f, 0.0f, 0.0f };
		vVar10 = { 0.0f, 0.0f, 0.0f };
		iVar0 = 0;
		while (iVar0 <= (iParam1 + 1824)->f_84)
		{
			GET_OBJECT_POSITION((*iParam1 + 1916)[iVar0], &vVar4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar4, vVar1, StackVal) };
			GET_OBJECT_AXIS((*iParam1 + 1916)[iVar0], &vVar4, 0);
			vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar4, vVar7, StackVal) };
			GET_OBJECT_AXIS((*iParam1 + 1916)[iVar0], &vVar4, 2);
			vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar4, vVar10, StackVal) };
			iVar0++;
		}
		bVar13 = (1.0f / TO_FLOAT((iParam1 + 1824)->f_84));
		VSCALE(&vVar1, bVar13);
		VSCALE(&vVar7, bVar13);
		VSCALE(&vVar10, bVar13);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar10, vVar1, StackVal) * Vector(0.08f, 0.08f, 0.08f), StackVal, StackVal) };
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar1, StackVal) * Vector(0.05f, 0.05f, 0.05f), StackVal, StackVal) };
		vVar14 = { StackVal, StackVal, vVar1 };
		if (IS_DISPLAY_WIDESCREEN())
		{
			vVar14.f_4 = (vVar14.y + 0.55f);
		}
		else
		{
			vVar14.f_4 = (vVar14.y + 0.73f);
		}
		vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar10, vVar14, StackVal) * Vector(0.15f, 0.15f, 0.15f), StackVal, StackVal) };
		if (bParam2 == 0)
		{
			SET_CAMERA_FOV(*bParam0, 31.0f);
		}
		else
		{
			SET_CAMERA_FOV(*bParam0, 49.0f);
		}
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
		}
		SET_CAMERA_POSITION(*bParam0, vVar14);
		SET_CAMERA_TARGET_POSITION(*bParam0, vVar1, 0);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, bParam2))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, bParam2, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar17);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(vVar14, vVar17, 1);
	}
	return;
}

void Function_323() //Position: 0x1319D / 78237
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Dealn", 0);
	}
	return;
}

bool Function_324(int iParam0) //Position: 0x131D1 / 78289
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if (IS_AMBIENT_SPEECH_PLAYING((*iParam0 + 12)[StackVal53]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_325(int iParam0, int iParam1) //Position: 0x13213 / 78355
{
	if (!Function_329(iParam0, iParam1))
	{
		Function_326(iParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_326(var uParam0, int iParam1) //Position: 0x1322E / 78382
{
	Function_27(uParam0[Function_328(iParam1)], Function_327(iParam1));
	return;
}

bool Function_327(int iParam0) //Position: 0x13245 / 78405
{
	return Function_104((iParam0 % 32));
}

int Function_328(int iParam0) //Position: 0x13253 / 78419
{
	return (iParam0 / 32);
}

bool Function_329(var uParam0, int iParam1) //Position: 0x1325E / 78430
{
	return Function_23((*uParam0)[Function_328(iParam1)], Function_327(iParam1));
}

struct<64> Function_330(bool bParam0, int iParam1) //Position: 0x13275 / 78453
{
	struct<16> Var0;
	
	if (bParam0 > 0 || bParam0 <= 6)
	{
	}
	if (!Function_331((*iParam1 + 12)[bParam053], &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam1 + 12[bParam053] + 4), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_331(bool bParam0, char* cParam1) //Position: 0x132B2 / 78514
{
	struct<8> Var0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_268())
		{
			if (Function_332(bParam0, &Var0))
			{
				memcpy(cParam1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0, 16);
				return 1;
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			strcpy(cParam1, "Poker_Name_P", 64);
		}
		else
		{
			strcpy(cParam1, GET_ACTOR_ENUM_STRING(bParam0), 64);
		}
		return 1;
	}
	return 0;
}

bool Function_332(bool bParam0, char* cParam1) //Position: 0x1330D / 78605
{
	var uVar0;
	
	uVar0 = Function_369(bParam0);
	strcpy(cParam1, Function_333(uVar0), 32);
	return 1;
}

var Function_333(int iParam0) //Position: 0x13324 / 78628
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

var Function_334() //Position: 0x13538 / 79160
{
	if (!Function_268())
	{
		UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	}
	else
	{
		UI_SET_STRING("Generic_Dbuffer32_0", Function_335(GET_LOCAL_SLOT(), 1));
	}
	return "Generic_DBuffer32_0";
}

var Function_335(var uParam0, int iParam1) //Position: 0x135A4 / 79268
{
	return NET_GET_GAMER_HEX_COLOR(uParam0, iParam1);
}

void Function_336(bool bParam0, bool bParam1) //Position: 0x135B1 / 79281
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(-1.2f, -1.2f, -1.2f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.2f);
	GET_ACTOR_AXIS(bParam1, &vVar9, 0);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar6, StackVal) * Vector(0.3f, 0.3f, 0.3f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, vVar0 };
	vVar12.f_4 = (vVar12.y + 1.07f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam0);
	}
	SET_CAMERA_POSITION(*bParam0, vVar6);
	SET_CAMERA_TARGET_POSITION(*bParam0, vVar12, 0);
	SET_CAMERA_FOV(*bParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam0, false, 0.5f, 0.5f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar15);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar6, vVar15, 1);
	return;
}

void Function_337(int iParam0) //Position: 0x13697 / 79511
{
	int iVar0;
	bool bVar1;
	
	if (Function_299(iParam0))
	{
		iVar0 = Function_368(iParam0 + 1288, iParam0->f_1388);
	}
	else
	{
		iVar0 = Function_368(iParam0 + 1288, Function_368(iParam0 + 1288, iParam0->f_1388));
	}
	bVar1 = StackVal;
	if (StackVal > (iParam0 + 12[bVar153])->f_136)
	{
		Function_283(StackVal, iParam0, bVar1, 0, 1);
	}
	else
	{
		Function_283(iParam0, bVar1, (iParam0 + 12[bVar153])->f_136, 0, 1);
	}
	if (bVar1 == Function_46(0))
	{
		Function_281(&Local_322, Function_46(0));
	}
	return;
}

bool Function_338(bool bParam0) //Position: 0x13722 / 79650
{
	if (IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/bet_allin_pst") || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/bet_allin_B_pst"))
	{
		return 1;
	}
	return 0;
}

bool Function_339(bool bParam0) //Position: 0x13798 / 79768
{
	if ((((((((IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R/bet_pst") || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R2/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G2/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B2/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R3/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G3/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B3/bet_pst"))
	{
		return 1;
	}
	return 0;
}

void Function_340(int iParam0) //Position: 0x13953 / 80211
{
	int iVar0;
	int iVar1;
	
	if (Function_299(iParam0))
	{
		iVar0 = iParam0->f_1388;
	}
	else
	{
		iVar0 = Function_368(iParam0 + 1288, iParam0->f_1388);
	}
	iVar1 = StackVal;
	if (iVar0 > 0 || iVar0 < 6)
	{
	}
	Function_360(&Local_322, &bLocal_253, iVar1, Function_46(0), 1);
	if (StackVal > (iParam0 + 12[iVar153])->f_136)
	{
		Function_283(StackVal, iParam0, iVar1, 1, 0);
	}
	else
	{
		Function_283(iParam0, iVar1, (iParam0 + 12[iVar153])->f_136, 1, 0);
	}
	iParam0->f_1948 = StackVal;
	if (iVar1 == Function_46(0))
	{
		Function_281(&Local_322, Function_46(0));
	}
	return;
}

void Function_341() //Position: 0x139F2 / 80370
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_BlindsRaise", 0);
	}
	return;
}

void Function_342(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x13A2C / 80428
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
			Var0 = { StackVal, StackVal, StackVal, Function_169(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_343(int iParam0) //Position: 0x13AB1 / 80561
{
	struct<2> Var0;
	
	Function_307(iParam0 + 1396);
	Var0 = { StackVal, Function_307(iParam0 + 1396) };
	Function_305(iParam0 + 1824, &Var0);
	Function_344(iParam0, &Var0, 4, Function_137(1));
	return;
}

void Function_344(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x13AD9 / 80601
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	struct<8> Var12;
	float fVar20;
	
	Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(iParam1, 0) };
	vVar6.f_4 = (vVar6.y + (TO_FLOAT(bParam2) * 0.001f));
	GET_OBJECT_ORIENTATION(StackVal, &vVar9);
	if (!GET_OBJECT_AXIS(StackVal, &vVar0, 0))
	{
	}
	if (!GET_OBJECT_AXIS(StackVal, &vVar3, 2))
	{
	}
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) * Vector(FtoV(TO_FLOAT((bParam2 - 2))), Vector(vVar0, vVar6, StackVal) * Vector(-0.1f, -0.1f, -0.1f), StackVal), StackVal, StackVal) };
	fVar20 = RAND_FLOAT_GAUSSIAN(0.0f, 2.5f);
	vVar9.f_4 = (vVar9.y + fVar20);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(0.06f, 0.06f, 0.06f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(0.04f, 0.04f, 0.04f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Local_257 + 152), vVar6, StackVal) };
	vVar6.x = (vVar6.x + RAND_FLOAT_GAUSSIAN(0.0f, 0.005f));
	vVar6.f_8 = (vVar6.z + RAND_FLOAT_GAUSSIAN(0.0f, 0.005f));
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam0 + 1916)[bParam2] = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), &Var12, vVar6, vVar9, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
}

bool Function_345(int iParam0) //Position: 0x13C0B / 80907
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar13])
		{
			if ((iParam0 + 12[StackVal53])->f_208 < fVar0)
			{
				fVar0 = (iParam0 + 12[StackVal53])->f_208;
			}
		}
		iVar1++;
	}
	if (Function_46(1) >= 4294967295)
	{
		if ((iParam0 + 12[Function_46(1)53])->f_208 != fVar0)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_346(int iParam0) //Position: 0x13C86 / 81030
{
	struct<2> Var0;
	
	Function_307(iParam0 + 1396);
	Var0 = { StackVal, Function_307(iParam0 + 1396) };
	Function_305(iParam0 + 1824, &Var0);
	Function_344(iParam0, &Var0, 3, Function_137(1));
	return;
}

void Function_347(int iParam0) //Position: 0x13CAE / 81070
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Function_307(iParam0 + 1396);
		Var1 = { StackVal, Function_307(iParam0 + 1396) };
		Function_305(iParam0 + 1824, &Var1);
		Function_344(iParam0, &Var1, iVar0, Function_137(1));
		iVar0++;
	}
	return;
}

void Function_348(int iParam0, bool bParam1) //Position: 0x13CE9 / 81129
{
	if (bParam1)
	{
		Function_27(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_10(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_349(int iParam0) //Position: 0x13D24 / 81188
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_OBJECT_VALID(bLocal_312))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Function_350(iParam0 + 12[Function_137(1)53], &vVar0, &vVar3);
		bLocal_312 = CREATE_PROP_IN_LAYOUT(bLocal_246, "DealerButton", "$/fragments/p_gen_dealerButton01x", vVar0, vVar3, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_350(var uParam0, var uParam1, int iParam2) //Position: 0x13D94 / 81300
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		GET_POSITION(*uParam0, &vVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(*uParam0), &vVar3);
		*uParam1 = { -0.033f, 0.8f, -0.45f };
		*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, 145.0f, 0.0f) };
		UNK_0xF76F2BB3(uParam1, &vVar3, 0, 4);
		*uParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *uParam1, StackVal) };
	}
	return;
}

void Function_351(bool bParam0, bool bParam1) //Position: 0x13DF0 / 81392
{
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), 0);
	return;
}

void Function_352(bool bParam0, var uParam1, bool bParam2) //Position: 0x13E07 / 81415
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		vVar0 = { -0.456f, 0.8f, 0.1f };
		vVar3 = { 0.0f, -55.0f, 0.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_353(bool bParam0, bool bParam1) //Position: 0x13E4B / 81483
{
	if (bParam1)
	{
		bLocal_913 = bParam0;
		bLocal_912 = 18;
		NET_LOG(true, "Poker", "Locking to State %s (%s) via %s", Function_241(bParam0), I2STR(bParam0), Function_241(bLocal_912), false);
	}
	else
	{
		bLocal_912 = bParam0;
		NET_LOG(true, "Poker", "Moving to State %s (%s)", Function_241(bParam0), I2STR(bParam0), false, false);
	}
	return;
}

bool Function_354(bool bParam0) //Position: 0x13ED9 / 81625
{
	if (((Function_359() && !iLocal_240 != 1000) && !iLocal_240 != 1104) && !iLocal_240 != 1105)
	{
		HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
		HUD_FADE_OUT(1.0f, 1f, 1);
		iLocal_240 = 1105;
	}
	switch (iLocal_240)
	{
		case 0x000003E8:
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(1.0f, 1f, 1);
			Function_358(bParam0, (*&Local_322 + 12)[Function_137(1)53]);
			Function_175(&iLocal_247);
			iLocal_240 = 1004;
			break;
		
		case 0x000003EC:
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_175(&iLocal_247);
				iLocal_240 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (!HUD_IS_FADING())
			{
				Function_342("Poker_Cheating_msg01", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_175(&iLocal_247);
				iLocal_240 = 1006;
			}
			else
			{
				PRINTSTRING("Waiting for Fade In to finish");
				PRINTNL();
			}
			break;
		
		case 0x000003EE:
			if (Function_380(&iLocal_247) <= 5.0f)
			{
				Function_342("Poker_Cheating_msg02", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_175(&iLocal_247);
				iLocal_240 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_380(&iLocal_247) <= 5.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_175(&iLocal_247);
				iLocal_240 = 1104;
			}
			break;
		
		case 0x00000450:
			if (HUD_IS_FADED())
			{
				Function_175(&iLocal_247);
				iLocal_240 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (HUD_IS_FADED())
			{
				Function_355(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_175(&iLocal_247);
				iLocal_240 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_355(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x1408F / 82063
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_24();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_56())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_28(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_3();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_356(uParam9);
}

void Function_356(bool bParam0) //Position: 0x1417F / 82303
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_357();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_357() //Position: 0x1422E / 82478
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_358(var uParam0, bool bParam1) //Position: 0x142A0 / 82592
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(-1.2f, -1.2f, -1.2f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.2f);
	vVar9 = { StackVal, StackVal, vVar0 };
	vVar9.f_4 = (vVar9.y + 1.1f);
	SET_CAMERA_POSITION(*uParam0, vVar6);
	SET_CAMERA_TARGET_POSITION(*uParam0, vVar9, 0);
	SET_CAMERA_FOV(*uParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar12);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar6, vVar12, 1);
	return;
}

int Function_359() //Position: 0x1434A / 82762
{
	if (IS_BUTTON_DOWN(Function_437(), 6, 1, false))
	{
		return 1;
	}
	return 0;
}

void Function_360(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x14362 / 82786
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
	
	if (bParam2 > 6 && bParam2 <= 0)
	{
		bVar0 = (*bParam0 + 12)[bParam253];
	}
	if (iParam3 > 6 && iParam3 <= 0)
	{
		bVar1 = (*bParam0 + 12)[iParam353];
	}
	else
	{
		bVar1 = Function_24();
	}
	if (!IS_ACTOR_VALID(bVar0) || !IS_ACTOR_VALID(bVar1))
	{
		return;
	}
	GET_POSITION(bVar1, &vVar2);
	GET_ACTOR_AXIS(bVar1, &vVar5, 2);
	GET_ACTOR_AXIS(bVar1, &vVar8, 0);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar2, StackVal) * Vector(-1.8f, -1.8f, -1.8f), StackVal, StackVal) };
	vVar11.f_4 = (vVar11.y + 1.65f);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar5, vVar11, StackVal) * Vector(1.65f, 1.65f, 1.65f), StackVal, StackVal) };
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar2, StackVal) * Vector(1.09f, 1.09f, 1.09f), StackVal, StackVal) };
	vVar14.f_4 = (vVar14.y + 0.65f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar5, vVar14, StackVal) * Vector(-1.85f, -1.85f, -1.85f), StackVal, StackVal) };
	GET_CAMERA_POSITION(*bParam1, &vVar17);
	GET_CAMERA_DIRECTION(*bParam1, &vVar20);
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(*bParam1) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam1))
	{
		if (bParam4)
		{
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam1) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam1);
			}
			SET_CAMERA_POSITION(*bParam1, vVar11);
			SET_CAMERA_TARGET_POSITION(*bParam1, vVar14, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERA_FOV(*bParam1, 31.0f);
			}
			else
			{
				SET_CAMERA_FOV(*bParam1, 41.0f);
			}
		}
		else
		{
			if (!IS_OBJECT_VALID(bLocal_314))
			{
				bLocal_314 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_246, Function_30());
			}
			if (!IS_OBJECT_VALID(bLocal_315))
			{
				bLocal_315 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_246, Function_30());
			}
			Function_361(bLocal_314);
			Function_361(bLocal_315);
			SET_CAMERASHOT_POSITION(bLocal_314, vVar17);
			SET_CAMERASHOT_DIRECTION(bLocal_314, vVar20, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERASHOT_FOV(bLocal_314, 31.0f);
			}
			else
			{
				SET_CAMERASHOT_FOV(bLocal_314, 41.0f);
			}
			SET_CAMERASHOT_POSITION(bLocal_315, vVar11);
			SET_CAMERASHOT_TARGET_POSITION(bLocal_315, vVar14, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERASHOT_FOV(bLocal_315, 31.0f);
			}
			else
			{
				SET_CAMERASHOT_FOV(bLocal_315, 41.0f);
			}
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*bParam1) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*bParam1);
			}
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*bParam1, bLocal_314, bLocal_315, 0.75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*bParam1, bLocal_315, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*bParam1, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*bParam1, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar23);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar11, vVar23, 1);
}

void Function_361(bool bParam0) //Position: 0x145B5 / 83381
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_362(int iParam0) //Position: 0x145C6 / 83398
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	struct<8> Var8;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				DESTROY_OBJECT((*iParam0 + 12[iVar753] + 164)[StackVal]);
				iVar7++;
			}
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_367((iParam0 + 12[StackVal53])->f_136) };
			GET_OBJECT_POSITION((iParam0 + 12[StackVal53])->f_156, &uVar1);
			Function_365(iParam0 + 12[StackVal53]);
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_367((iParam0 + 12[StackVal53])->f_152) };
			if (IS_OBJECT_VALID((iParam0 + 12[StackVal53])->f_160))
			{
				GET_OBJECT_POSITION((iParam0 + 12[StackVal53])->f_160, &uVar1);
			}
			else
			{
				Function_364((*iParam0 + 12)[StackVal53], &uVar1, &uVar4);
			}
			PRINTSTRING("ExpectedStackName is ");
			PRINTSTRING(&Var8);
			Function_363(iParam0 + 12[StackVal53]);
		}
		iVar0++;
	}
	return;
}

void Function_363(int iParam0) //Position: 0x146FE / 83710
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	
	if (IS_OBJECT_VALID(iParam0->f_160))
	{
		DESTROY_OBJECT(iParam0->f_160);
	}
	if (iParam0->f_152 >= 0)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_367(iParam0->f_152) };
		Function_364(*iParam0, &vVar8, &vVar11);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		iParam0->f_160 = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), &Var0, vVar8, vVar11, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_364(bool bParam0, var uParam1, bool bParam2) //Position: 0x14755 / 83797
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_hillb"))
		{
			vVar0 = { 0.0372f, 0.8f, -0.3568f };
			vVar3 = { 0.0f, 198.2009f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_gped"))
		{
			vVar0 = { 0.0372f, 0.8f, -0.3568f };
			vVar3 = { 0.0f, 198.2009f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_oldm"))
		{
			vVar0 = { 0.0372f, 0.8f, -0.3568f };
			vVar3 = { 0.0f, 198.2009f, 0.0f };
		}
		else
		{
			vVar0 = { 0.0372f, 0.8f, -0.3568f };
			vVar3 = { 0.0f, 198.2009f, 0.0f };
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_365(int iParam0) //Position: 0x14848 / 84040
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		DESTROY_OBJECT(iParam0->f_156);
	}
	if (iParam0->f_136 >= 0)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_367(iParam0->f_136) };
		Function_366(iParam0, &vVar8, &vVar11);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		iParam0->f_156 = CREATE_PROP_IN_LAYOUT(bLocal_246, Function_30(), &Var0, vVar8, vVar11, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_366(var uParam0, var uParam1, int iParam2) //Position: 0x1489E / 84126
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		GET_POSITION(*uParam0, &vVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(*uParam0), &vVar3);
		if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_hillb"))
		{
			*uParam1 = { 0.179f, 0.8f, -0.037f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -155.0f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_gped"))
		{
			*uParam1 = { 0.168f, 0.8f, -0.012f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -154.44f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_oldm"))
		{
			*uParam1 = { 0.205f, 0.8f, 0.015f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -148.0f, 0.0f) };
		}
		else
		{
			*uParam1 = { 0.171f, 0.8f, -0.046f };
			*iParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -152.0f, 0.0f) };
		}
		UNK_0xF76F2BB3(uParam1, &vVar3, 0, 4);
		*uParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *uParam1, StackVal) };
	}
	return;
}

struct<32> Function_367(int iParam0) //Position: 0x149BB / 84411
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
	strcpy(&cVar1, Function_15(bVar0), 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

int Function_368(var uParam0, int iParam1) //Position: 0x149EF / 84463
{
	int iVar0;
	
	iVar0 = iParam1 + 1;
	while (iVar0 < (*uParam0 - 1))
	{
		if ((*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		if ((*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iParam1 > 0 || iParam1 < 6)
	{
	}
	if ((*uParam0)[iParam13])
	{
		return iParam1;
	}
	return 4294967295;
}

bool Function_369(bool bParam0) //Position: 0x14A54 / 84564
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		return GET_LOCAL_SLOT();
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return GET_ACTOR_SLOT(bParam0);
	}
	if (DECOR_GET_INT_VERBOSE(bParam0, "FakeSlot", &iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

void Function_370(int iParam0, int iParam1) //Position: 0x14A96 / 84630
{
	Function_10(iParam0[Function_328(iParam1)], Function_327(iParam1));
	return;
}

void Function_371(int iParam0) //Position: 0x14AAD / 84653
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_372(int iParam0) //Position: 0x14ACC / 84684
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if ((iParam0 + 12[StackVal53] + 36)->f_84 == 2)
			{
				if (StackVal || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[IS_ACTION_NODE_PLAYING((*iParam0 + 12)[StackVal53], "sit_poker/Player/bet_request/fold/fold_pst")53], "sit_poker/Player/bet_request/fold_B/fold_B_pst"))
				{
					Function_373(StackVal, iParam0);
				}
				if (StackVal || IS_ATTACHMENT_VALID((*iParam0 + 12[153] + 36 + 72)[IS_ATTACHMENT_VALID((*iParam0 + 12[053] + 36 + 72)[StackVal])]))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL((*iParam0 + 12)[StackVal53], "sit_poker/Player/card_idle"))
					{
						REMOVE_OBJECT_ATTACHMENT((*iParam0 + 12[053] + 36 + 72)[StackVal]);
						REMOVE_OBJECT_ATTACHMENT((*iParam0 + 12[153] + 36 + 72)[StackVal]);
					}
				}
			}
		}
		else if (StackVal && GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT((StackVal && GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT((StackVal && GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT((StackVal && GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1") != ""), "UseCase2") != "")), "UseCase3") != "")), "UseCase4") != "")), "UseCase5") != "")
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(StackVal)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), false);
			}
		}
		iVar0++;
	}
	return;
}

void Function_373(int iParam0, int iParam1) //Position: 0x14D16 / 85270
{
	Function_374(iParam0 + 12[iParam153] + 36);
	return;
}

void Function_374(int iParam0) //Position: 0x14D29 / 85289
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar02] = 4294967295;
		iParam0[iVar02]->f_4 = 4294967295;
		iVar0++;
	}
	iParam0->f_84 = 0;
	iParam0->f_88 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_60)
	{
		if (IS_ATTACHMENT_VALID((*iParam0 + 72)[iVar0]))
		{
			REMOVE_OBJECT_ATTACHMENT((*iParam0 + 72)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_375(int iParam0) //Position: 0x14D8B / 85387
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (IS_ATTACHMENT_VALID((*&Local_322 + 12[iVar153] + 184)[StackVal]))
				{
					if (Function_339((*&Local_322 + 12)[StackVal53]))
					{
					}
				}
			}
		}
	}
}

void Function_376(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, int iParam53) //Position: 0x14E4F / 85583
{
	vector3 vVar0;
	vector3 vVar3;
	
	REMOVE_OBJECT_ATTACHMENT((*&iParam0 + 184)[iParam53]);
	Function_377(iParam0, &vVar0, &vVar3);
	SET_OBJECT_POSITION((*&iParam0 + 164)[iParam53], vVar0);
	SET_OBJECT_ORIENTATION((*&iParam0 + 164)[iParam53], vVar3);
}

void Function_377(bool bParam0, var uParam1, bool bParam2) //Position: 0x14E8B / 85643
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_hillb"))
		{
			vVar0 = { 0.0731f, 0.8f, -0.234f };
			vVar3 = { 0.0f, -131.5045f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_gped"))
		{
			vVar0 = { 0.0568f, 0.8f, -0.2452f };
			vVar3 = { 0.0f, -146.2406f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_oldm"))
		{
			vVar0 = { 0.107f, 0.8f, -0.226f };
			vVar3 = { 0.0f, -132.9615f, 0.0f };
		}
		else
		{
			vVar0 = { 0.072f, 0.8f, -0.2626f };
			vVar3 = { 0.0f, -145.0f, 0.0f };
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_378(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, int iParam53) //Position: 0x14F7E / 85886
{
	vector3 vVar0;
	vector3 vVar3;
	
	REMOVE_OBJECT_ATTACHMENT((*&iParam0 + 184)[iParam53]);
	Function_379(iParam0, &vVar0, &vVar3, iParam53);
	SET_OBJECT_POSITION((*&iParam0 + 164)[iParam53], vVar0);
	SET_OBJECT_ORIENTATION((*&iParam0 + 164)[iParam53], vVar3);
}

void Function_379(bool bParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x14FBC / 85948
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_hillb"))
		{
			if (iParam3 == 0)
			{
				vVar0 = { -0.0233f, 0.8051f, -0.2857f };
				vVar3 = { 180.0f, -190.5097f, 0.0f };
			}
			else if (iParam3 == 1)
			{
				vVar0 = { 0.0311f, 0.8051f, -0.3038f };
				vVar3 = { 180.0f, -190.5097f, 0.0f };
			}
			else
			{
				vVar0 = { 0.0844f, 0.8051f, -0.3183f };
				vVar3 = { 180.0f, -190.5097f, 0.0f };
			}
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_gped"))
		{
			if (iParam3 == 0)
			{
				vVar0 = { 0.0003f, 0.8047f, -0.2875f };
				vVar3 = { 180.0f, 90.0f, 360.0f };
			}
			else if (iParam3 == 1)
			{
				vVar0 = { 0.0531f, 0.8047f, -0.3054f };
				vVar3 = { 180.0f, 90.0f, 360.0f };
			}
			else
			{
				vVar0 = { 0.1011f, 0.8047f, -0.3224f };
				vVar3 = { 180.0f, 90.0f, 360.0f };
			}
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_oldm"))
		{
			if (iParam3 == 0)
			{
				vVar0 = { 0.0021f, 0.8f, -0.2839f };
				vVar3 = { 0.0f, 0.0f, 0.0f };
			}
			else if (iParam3 == 1)
			{
				vVar0 = { 0.0482f, 0.8f, -0.3036f };
				vVar3 = { 0.0f, 0.0f, 0.0f };
			}
			else
			{
				vVar0 = { 0.0958f, 0.8f, -0.3216f };
				vVar3 = { 0.0f, 0.0f, 0.0f };
			}
		}
		else if (iParam3 == 0)
		{
			vVar0 = { -0.0122f, 0.8f, -0.289f };
			vVar3 = { 0.0f, -180.161f, 0.0f };
		}
		else if (iParam3 == 1)
		{
			vVar0 = { 0.0365f, 0.8f, -0.3085f };
			vVar3 = { 0.0f, -180.161f, 0.0f };
		}
		else
		{
			vVar0 = { 0.0912f, 0.8f, -0.321f };
			vVar3 = { 0.0f, -180.161f, 0.0f };
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
		PRINTSTRING("GET_BET_CHIP_IN_POSITION_AND_ORIENTATION_RELATIVE_TO_ACTOR returning ");
		PRINTVECTOR(*uParam1);
		PRINTNL();
		PRINTSTRING("GET_BET_CHIP_IN_POSITION_AND_ORIENTATION_RELATIVE_TO_ACTOR returning ");
		PRINTVECTOR(*bParam2);
		PRINTNL();
	}
}

float Function_380(int iParam0) //Position: 0x152AB / 86699
{
	if (Function_270(iParam0))
	{
		if (Function_381(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_381(bool bParam0) //Position: 0x15373 / 86899
{
	return Function_23(*bParam0, 2);
}

void Function_382() //Position: 0x15380 / 86912
{
	if (Function_46(0) != 4294967295 || (*&Local_322 + 1288)[Local_322.f_13843] != 0)
	{
		Function_384(0);
	}
	else
	{
		Function_384((&Local_322 + 12[Function_46(1)53])->f_136);
		Function_383((&Local_322 + 12[Function_46(1)53])->f_152);
	}
	return;
}

void Function_383(int iParam0) //Position: 0x153C7 / 86983
{
	Function_121(11, iParam0);
	return;
}

void Function_384(int iParam0) //Position: 0x153D4 / 86996
{
	Function_414(0, iParam0);
	return;
}

void Function_385() //Position: 0x153E0 / 87008
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_389())
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
				Local_322.f_1388 = 0;
				iVar0 = Function_368(&Local_322 + 1288, Local_322.f_1388);
				uVar1 = StackVal;
				Function_360(&Local_322, &bLocal_253, uVar1, Function_46(0), 1);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_322 + 12)[Function_137(1)53], "sit_poker/Dealer/idle");
				if (!IS_OBJECT_VALID(bLocal_311))
				{
					NET_OBJECT_REPLICATION_MODE_START(17, 0);
					bLocal_311 = CREATE_PROP_IN_LAYOUT(bLocal_246, "DeckOfCards", "$/fragments/p_gen_cards02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					iLocal_910 = ATTACH_OBJECTS_NO_DRV(bLocal_311, GET_OBJECT_FROM_ACTOR((*&Local_322 + 12)[Function_137(1)53]), "elbow_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					NET_OBJECT_REPLICATION_MODE_END(17);
					Function_351(bLocal_311, (*&Local_322 + 12)[Function_137(1)53]);
				}
				Function_349(&Local_322);
				Function_281(&Local_322, Function_46(0));
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_388();
				Function_175(&iLocal_247);
				iLocal_1 = 106;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_342("Poker_PlayerChooseSeat_Objective", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_175(&iLocal_247);
				iLocal_1 = 7;
			}
			break;
		
		case 0x00000008:
			if (Function_380(&iLocal_247) < 1.0f)
			{
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_386(Local_257.f_208, Local_257.f_212);
				iLocal_0 = 1;
				iLocal_1 = 0;
				Function_353(0, 1);
			}
			break;
	}
	return;
}

void Function_386(bool bParam0, int iParam1) //Position: 0x1567F / 87679
{
	char* cVar0[64];
	int iVar16;
	int iVar17;
	bool bVar18;
	
	if (!(bParam0 || iParam1))
	{
		return;
	}
	HUD_CLEAR_HELP();
	HUD_CLEAR_HELP_QUEUE();
	strcpy(&cVar0, "nGambling_", 64);
	if (bParam0)
	{
		stradd(&cVar0, "A_Help", 64);
		iVar16 = 0;
		iVar17 = 1;
	}
	else
	{
		stradd(&cVar0, "S_Help", 64);
		iVar16 = 2;
		iVar17 = 3;
	}
	bVar18 = (Function_387(iVar16) / 60);
	if (bVar18 > 24)
	{
		bVar18 = (bVar18 / 24);
	}
	else
	{
		stradd(&cVar0, "H", 64);
	}
	if (bVar18 == 1)
	{
		stradd(&cVar0, "_Single", 64);
		PRINT_HELP_FORMAT(9.0f, &cVar0, I2STR(Function_387(iVar17)), false, 0, 0, 2, 0, 0);
	}
	else
	{
		stradd(&cVar0, "_Plural", 64);
		PRINT_HELP_FORMAT(9.0f, &cVar0, I2STR(Function_387(iVar17)), I2STR(bVar18), 0, 0, 2, 0, 0);
	}
	return;
}

int Function_387(int iParam0) //Position: 0x1574F / 87887
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_388() //Position: 0x1576F / 87919
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_Welcm", 0);
	}
	return;
}

bool Function_389() //Position: 0x157A3 / 87971
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	switch (iLocal_240)
	{
		case 0x000003E8:
			iVar0 = 0;
			while (iVar0 <= Local_257.f_12)
			{
				if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar0]))
				{
					if (*&Local_257 + 12)[iVar0] != Function_24()
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
						if (!SNAP_ACTOR_TO_GRINGO(StackVal, (*&Local_257 + 12)[iVar0], "UseCase2", 1, 0, 0))
						{
						}
						TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT((*&Local_257 + 12)[iVar0]), "UseCase2", 1, 1);
					}
				}
				iVar0++;
			}
			iLocal_240 = 1004;
			break;
		
		case 0x000003EC:
			iVar0 = 0;
			while (iVar0 <= Local_257.f_12)
			{
				if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar0]))
				{
					if (*&Local_257 + 12)[iVar0] != Function_24()
					{
						if (!IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_257 + 12)[iVar0], "nsit_poker"))
						{
							return 0;
						}
					}
				}
				iVar0++;
			}
			iLocal_240 = 1005;
			break;
		
		case 0x000003ED:
			iVar0 = 0;
			while (iVar0 <= Local_257.f_12)
			{
				if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar0]))
				{
					Function_397((*&Local_257 + 12)[iVar0], &Local_322, iVar0, (*&Local_257 + 40)[iVar0]);
					if (*&Local_257 + 12)[iVar0] != Function_24()
					{
						SET_DRAW_ACTOR((*&Local_257 + 12)[iVar0], false);
					}
				}
				iVar0++;
			}
			if (Local_322.f_1376 >= 3)
			{
				Function_438(0x4000000);
				if (Local_322.f_1376 >= 5)
				{
					Function_438(0x2000000);
				}
				else
				{
					Function_198(0x2000000);
				}
			}
			else
			{
				Function_198(0x4000000);
				Function_198(0x2000000);
			}
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				Function_396(GET_GRINGO_FROM_OBJECT(StackVal));
				if (!(*&Local_322 + 1288)[iVar03])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), false);
				}
				if (Local_322.f_1384 == iVar0 && (*&Local_322 + 1288)[iVar03])
				{
					GET_OBJECT_POSITION(StackVal, &vVar1);
					bVar7 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 1.0f, "p_gen_chairpokerfancy01x", 1);
					if (!IS_PHYSINST_VALID(bVar7))
					{
						bVar7 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 1.0f, "p_gen_chair05x", 1);
					}
					if (IS_PHYSINST_VALID(bVar7))
					{
						Function_395((*&Local_322 + 12)[StackVal53], &vVar1, &vVar4);
						SET_OBJECT_POSITION(GET_OBJECT_FROM_PHYSINST(bVar7), vVar1);
						SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_PHYSINST(bVar7), vVar4);
					}
					else
					{
						LOG_ERROR("NearestChair not valid");
					}
				}
				iVar0++;
			}
			Function_392();
			SAY_SINGLE_LINE_CONTEXT((*&Local_322 + 12)[Function_46(1)53], 496, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_240 = 1006;
			break;
		
		case 0x000003EE:
			if ((IS_ACTION_NODE_PLAYING(Function_24(), "sit_poker/Player/join_game/idle") && Function_391()) && Function_390(Local_257.f_180))
			{
				iVar0 = 0;
				while (iVar0 <= Local_257.f_12)
				{
					if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar0]))
					{
						SET_DRAW_ACTOR((*&Local_257 + 12)[iVar0], true);
					}
					iVar0++;
				}
				Function_362(&Local_322);
				iLocal_240 = 1008;
			}
			break;
		
		case 0x000003F0:
			if (!Function_246(1008, 1, 0x3f800000))
			{
				NET_LOG(true, "Poker", "Waiting for other players to hurry up", false, false, false, false);
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_390(bool bParam0) //Position: 0x15B67 / 88935
{
	if (!UNK_0x9D20BDC4("numberSystem") && !bParam0)
	{
		return 0;
	}
	return 1;
}

int Function_391() //Position: 0x15B8D / 88973
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (!STREAMING_IS_WORLD_LOADED())
	{
		return 0;
	}
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
			cVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(&Var2, 0) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar4, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	iVar12 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(iVar12))
	{
		return 0;
	}
	iVar13 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(iVar12))
	{
		return 0;
	}
	iVar14 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(iVar12))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar4, Function_15(bVar0), 32);
		if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar4, 0)))
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

void Function_392() //Position: 0x15DDD / 89565
{
	int iVar0;
	bool bVar1;
	
	Function_394(Function_24());
	Function_198(8192);
	if (UNK_0xE094DB31(Function_24(), 1))
	{
		Function_438(8192);
		DEEQUIP_ACCESSORY(Function_24(), 1);
	}
	Function_198(4194304);
	if (Function_393(4))
	{
		Function_438(4194304);
		Function_21(4, 0);
	}
	iVar0 = 0;
	while (iVar0 <= Local_257.f_12)
	{
		if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_257 + 12)[iVar0], 1, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_257 + 12)[iVar0], 2, false);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_257 + 12)[iVar0], 3, true);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_257 + 12)[iVar0], 4, true);
		}
		iVar0++;
	}
	if (!Function_268())
	{
		iVar0 = 0;
		while (iVar0 <= Local_257.f_12)
		{
			bVar1 = (*&Local_257 + 12)[iVar0];
			if (IS_ACTOR_VALID(bVar1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 26, false);
			}
			iVar0++;
		}
	}
	return;
}

bool Function_393(int iParam0) //Position: 0x15EB5 / 89781
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_394(bool bParam0) //Position: 0x15EC4 / 89796
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_395(bool bParam0, var uParam1, bool bParam2) //Position: 0x15EE9 / 89833
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_hillb"))
		{
			vVar0 = { 0.2827f, 0.0f, 0.2655f };
			vVar3 = { 0.0f, 176.9453f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_gped"))
		{
			vVar0 = { 0.2827f, 0.0f, 0.216f };
			vVar3 = { 0.0f, 180.0f, 0.0f };
		}
		else if (ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_oldm"))
		{
			vVar0 = { 0.283f, 0.0f, 0.245f };
			vVar3 = { 0.0f, 180.0f, 0.0f };
		}
		else
		{
			vVar0 = { 0.244f, 0.0f, 0.278f };
			vVar3 = { 0.0f, 180.0f, 0.0f };
		}
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_396(bool bParam0) //Position: 0x15FCC / 90060
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
	while (iVar1 >= 4294967295)
	{
		iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
		bVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
		if (IS_PHYSINST_VALID(bVar3))
		{
			HIDE_PHYSINST(bVar3);
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
	}
	return;
}

void Function_397(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x1603B / 90171
{
	bool bVar0;
	int iVar1;
	
	if (!bParam2 != 4294967295 && !(*iParam1 + 1288)[bParam23])
	{
		PRINTSTRING("Adding player at specific seat ");
		PRINTINT(bParam2);
		PRINTNL();
		Function_398(iParam1 + 12[iParam1->f_137653], bParam0, bParam2, uParam3);
		(*iParam1 + 1288)[bParam23] = 1;
		(iParam1 + 1288[bParam23])->f_4 = iParam1->f_1376;
		iParam1->f_1376++;
		if (IS_ACTOR_PLAYER(bParam0))
		{
			if (IS_LOCAL_PLAYER(bParam0))
			{
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
				iParam1->f_1384 = bParam2;
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(bParam0, "nsit_poker", 0);
				while (!ACTOR_HAS_ANIM_SET(bParam0, "nsit_poker") && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 1, 0, 1);
			}
		}
		else
		{
			bVar0 = RAND_INT_RANGE(false, 2);
			if (bParam2 == 0)
			{
				iVar1 = (iParam1->f_1288 - 1);
			}
			else
			{
				iVar1 = (bParam2 - 1);
			}
			if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar1]))
			{
				if (Function_24() == (*&Local_257 + 12)[iVar1])
				{
					bVar0 = true;
				}
			}
			if (((GET_ACTOR_ENUM(bParam0) != 949 || GET_ACTOR_ENUM(bParam0) != 947) || GET_ACTOR_ENUM(bParam0) != 936) || GET_ACTOR_ENUM(bParam0) != 961)
			{
				bVar0 = 3;
			}
			switch (bVar0)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "sit_poker_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "sit_poker_oldm", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_oldm") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "sit_poker_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
				
				case 0x00000003:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "nsit_poker", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "nsit_poker") && !IS_EXITFLAG_SET())
					{
						WAIT(false);
					}
					break;
			}
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 1, 1);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "sit_poker/Player/card_idle/idle");
			TASK_PRIORITY_SET(bParam0, 1);
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_398(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x163D5 / 91093
{
	if (!AI_IGNORE_ACTOR(bParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(bParam1, 1);
	SET_AUTO_CONVERSATION_LOOK(bParam1, 0);
	Function_401(0.0f);
	*iParam0 = bParam1;
	iParam0->f_132 = uParam2;
	if (IS_ACTOR_PLAYER(*iParam0))
	{
		if (NET_GET_PLAYMODE() == 0)
		{
			Function_399((iParam3 / 10), 1);
			Function_43(22, (iParam3 / 10));
		}
		iParam0->f_128 = 1;
	}
	else if (Function_369(bParam1) >= 4294967295)
	{
		iParam0->f_128 = 2;
	}
	else
	{
		iParam0->f_128 = 0;
	}
	Function_182(iParam0 + 36);
	iParam0->f_136 = iParam3;
	iParam0->f_140 = 0;
	iParam0->f_144 = 0;
	iParam0->f_152 = 0;
	iParam0->f_148 = 0;
	strcpy(iParam0 + 4, "__invalid__", 32);
	if (!Function_332(*iParam0, iParam0 + 4))
	{
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
}

int Function_399(var uParam0, int iParam1) //Position: 0x164AA / 91306
{
	Function_400(599, uParam0, iParam1);
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_45(599));
	UI_SET_STRING("nMPDollars", I2STR(Function_45(599)));
	if (NET_GET_PLAYMODE() == 0)
	{
		UI_SET_STRING("MPBalance2", UI_GET_STRING("nMPBalance"));
	}
	return 1;
}

int Function_400(int iParam0, bool bParam1, int iParam2) //Position: 0x1651F / 91423
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
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_401(var uParam0) //Position: 0x1671A / 91930
{
	Function_188(0, uParam0);
	return;
}

void Function_402(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106) //Position: 0x16726 / 91942
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_424)
	{
		Function_136(StackVal, Param0[iVar02], &uVar1);
		iVar0++;
	}
}

void Function_403(int iParam0) //Position: 0x16751 / 91985
{
	iParam0->f_8 = Local_257.f_172;
	iParam0->f_4 = (StackVal / 2);
	if (Local_257.f_168)
	{
		*iParam0 = (Local_257.f_72 + 1 * Local_257.f_176);
	}
	iParam0->f_1376 = 0;
	iParam0->f_1380 = 0;
	iParam0->f_1944 = 0;
	iParam0->f_1948 = 0;
	iParam0->f_1388 = 0;
	iParam0->f_1392 = 0;
	iParam0->f_1940 = 0;
	iParam0->f_1984 = 0;
	iParam0->f_2244 = 0;
	Function_210(iParam0);
	Function_209(iParam0 + 1396);
	Function_405(iParam0 + 1288);
	Function_182(iParam0 + 1824);
	Function_404(iParam0 + 1364);
	(*iParam0 + 2248)[0] = 1.0f;
	(*iParam0 + 2248)[1] = 1.0f;
	(*iParam0 + 2248)[2] = 0.35f;
	(*iParam0 + 2248)[3] = 0.4f;
	(*iParam0 + 2248)[4] = 0.45f;
	(*iParam0 + 2248)[5] = 0.5f;
	(*iParam0 + 2248)[6] = 0.5f;
	(*iParam0 + 2280)[0] = 1.0f;
	(*iParam0 + 2280)[1] = 1.0f;
	(*iParam0 + 2280)[2] = 0.6f;
	(*iParam0 + 2280)[3] = 0.65f;
	(*iParam0 + 2280)[4] = 0.7f;
	(*iParam0 + 2280)[5] = 0.75f;
	(*iParam0 + 2280)[6] = 0.75f;
	(*iParam0 + 2312)[0] = 1.0f;
	(*iParam0 + 2312)[1] = 1.0f;
	(*iParam0 + 2312)[2] = 0.8f;
	(*iParam0 + 2312)[3] = 0.8f;
	(*iParam0 + 2312)[4] = 0.85f;
	(*iParam0 + 2312)[5] = 0.85f;
	(*iParam0 + 2312)[6] = 0.85f;
	return;
}

void Function_404(int iParam0) //Position: 0x168D6 / 92374
{
	*iParam0 = 4294967295;
	iParam0->f_4 = 4294967295;
	return;
}

void Function_405(int iParam0) //Position: 0x168E5 / 92389
{
	float fVar0;
	bool bVar1[6];
	int iVar8;
	bool bVar9;
	int iVar10;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar8 = 0;
	while (iVar8 <= *iParam0)
	{
		(*iParam0)[iVar83] = 0;
		bVar9 = Function_406(StackVal, StackVal, *(&Local_257 + 76[iVar83]));
		while ((!IS_GRINGO_VALID(bVar9) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar0 + 5.0f))
		{
			bVar9 = Function_406(StackVal, StackVal, *(&Local_257 + 76[iVar83]));
			WAIT(false);
		}
		bVar1[iVar8] = bVar9;
		iVar10 = 0;
		while (iVar10 <= iVar8)
		{
			if (bVar1[iVar10] == bVar9)
			{
				bVar9 = "";
				Function_173(2);
			}
			iVar10++;
		}
		if (IS_GRINGO_VALID(bVar9))
		{
			iParam0[iVar83]->f_8 = GET_OBJECT_FROM_GRINGO(bVar9);
		}
		iParam0[iVar83]->f_4 = 4294967295;
		iVar8++;
	}
	return;
}

bool Function_406(var uParam0, var uParam1, bool bParam2) //Position: 0x1699A / 92570
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

void Function_407() //Position: 0x169DC / 92636
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	Function_408("$/fragments/p_gen_cards02x");
	Function_408("$/fragments/p_crd_01x");
	Function_408("$/fragments/p_gen_dealerButton01x");
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(&Var2, 0) };
			Function_408(&cVar4);
			iVar1++;
		}
		bVar0++;
	}
	iVar12 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	STREAMING_REQUEST_PROP(iVar12, false);
	iVar13 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	STREAMING_REQUEST_PROP(iVar13, false);
	iVar14 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	STREAMING_REQUEST_PROP(iVar14, false);
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar4, Function_15(bVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar4, 0), false);
		bVar0++;
	}
	STREAMING_REQUEST_GRINGO(GET_ASSET_ID("fake_poker", 1));
	return;
}

int Function_408(bool bParam0) //Position: 0x16B8C / 93068
{
	char* cVar0[64];
	
	if (!STREAMING_REQUEST_PROP(GET_ASSET_ID(cParam0, 0), false))
	{
		strcpy(&cVar0, "Failed to load ", 64);
		stradd(&cVar0, bParam0, 64);
		return 0;
	}
	return 1;
}

bool Function_409() //Position: 0x16BBF / 93119
{
	return Function_410();
}

int Function_410() //Position: 0x16BC8 / 93128
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
	if (!HAS_ANIM_SET_LOADED("sit_poker_oldm"))
	{
		return 0;
	}
	return 1;
}

void Function_411() //Position: 0x16C3C / 93244
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if ((*&Local_322 + 1288)[iVar13] && iVar1 == Local_322.f_1384)
		{
			bVar0 = (*&Local_322 + 12)[StackVal53];
			if (Function_252(Function_369(bVar0)))
			{
				if (Function_412(3, Function_369(bVar0)) == 1)
				{
					if ((IS_ACTION_NODE_PLAYING(bVar0, "sit_poker/Player/card_idle/idle") || IS_ACTION_NODE_PLAYING(bVar0, "sit_poker/Player/card_idle/StareCheck/stare")) || IS_ACTION_NODE_PLAYING(bVar0, "sit_poker/Dealer/card_dealing/deal_idle"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "sit_poker/player/look_at_cards");
						Function_291(&Local_322 + 12[StackVal53]);
					}
				}
				else if (IS_ACTION_NODE_PLAYING(bVar0, "sit_poker/Player/look_at_cards/open_mid") || IS_ACTION_NODE_PLAYING(bVar0, "sit_poker/Player/look_at_cards/open_pre"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "sit_poker/Player/look_at_cards/open_pst");
				}
			}
		}
		iVar1++;
	}
	return;
}

int Function_412(int iParam0, bool bParam1) //Position: 0x16DF8 / 93688
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_413(iParam0);
	}
	if (!Function_252(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_413(int iParam0) //Position: 0x16E5F / 93791
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_414(int iParam0, int iParam1) //Position: 0x16E6F / 93807
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_415() //Position: 0x16E98 / 93848
{
	if (IS_EXITFLAG_SET())
	{
	}
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_416(float fParam0) //Position: 0x16EAD / 93869
{
	Function_187(0, fParam0);
	return;
}

void Function_417(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x16EB9 / 93881
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<16> Var6;
	
	if ((GET_NUM_PLAYERS() >= 1 || NET_GET_SESSION_GAMER_COUNT() >= 1) && uParam3)
	{
		if (iLocal_0 < 1)
		{
			NET_LOG(true, "Net Minigame", "Quit because I believed I was alone. NUM_PLAYERS=%s, GAMER_COUNT=%s", I2STR(GET_NUM_PLAYERS()), I2STR(NET_GET_SESSION_GAMER_COUNT()), false, false);
			iLocal_0 = 41;
			iLocal_1 = 0;
		}
	}
	else
	{
		bVar0 = "";
		iVar1 = Function_419(bParam0, &bVar0);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (iVar1 == 69)
			{
				if (DECOR_GET_INT_VERBOSE(bVar0, "Slot", &bVar2))
				{
					NET_LOG(true, "Net Minigame", "Slot #%s has caught by eGamerRemoved!", I2STR(bVar2), false, false, false);
					if (GET_LOCAL_SLOT() != bVar2)
					{
						bVar5 = false;
						bVar4 = false;
						while (bVar4 > 6 && !bVar5)
						{
							if (IS_ACTOR_VALID((*iParam1 + 12)[bVar453]))
							{
								bVar3 = Function_369((*iParam1 + 12)[bVar453]);
								if (bVar3 == bVar2)
								{
									Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bVar4, iParam1) };
									NET_LOG(true, "Net Minigame", "MARKED PLAYER '%s' AS LINKDEAD. WAS PLAYER #%s", &Var6, I2STR(bVar4), false, false);
									PRINT_HELP_FORMAT(10.0f, "Poker_Player_LeftSession", &Var6, "", "", "", 2, 0, 0);
									Call_Loc(uParam2);
									(iParam1 + 12[bVar453])->f_128 = 3;
									bVar5 = true;
								}
							}
							bVar4++;
						}
						if (!bVar5)
						{
							NET_LOG(true, "Net Minigame", "Player %s left the game, but we didn't know about them! (may be okay?)", I2STR(bVar3), false, false, false);
						}
					}
				}
			}
			iVar1 = Function_419(bParam0, &bVar0);
		}
	}
	Function_418(bParam0);
}

void Function_418(bool bParam0) //Position: 0x1711C / 94492
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

int Function_419(bool bParam0, bool bParam1) //Position: 0x1712F / 94511
{
	bool bVar0;
	
	*bParam1 = "";
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		*bParam1 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		bVar0 = GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(*bParam1));
		REMOVE_OBJECT_FROM_OBJECTSET(*bParam1, bParam0);
		return bVar0;
	}
	return 0;
}

void Function_420() //Position: 0x1716E / 94574
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_251) < 10.0f)
	{
		fLocal_251 = GET_CURRENT_GAME_TIME();
		Function_207("Mode_PKR_Narr_PlrLeaves", 0);
	}
	return;
}

void Function_421() //Position: 0x171A6 / 94630
{
	Function_422(4);
	return;
}

void Function_422(int iParam0) //Position: 0x171B0 / 94640
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
			Function_423(iParam0);
		}
	}
	return;
}

void Function_423(bool bParam0) //Position: 0x171E2 / 94690
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_424(var uParam0, bool bParam1) //Position: 0x171F1 / 94705
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = 0.6f;
		fVar13 = 1.0f;
		fVar14 = 0.75f;
		fVar15 = 0.4f;
		fVar16 = 1.13f;
		fVar17 = -0.4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar25);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(vVar19, vVar25, 1);
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_425(bool bParam0, var uParam1, bool bParam2) //Position: 0x1737C / 95100
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_432(237);
					Function_431(237, 1, Function_39(420), 0);
					Function_431(237, 2, Function_39(422), 0);
					Function_431(237, 3, Function_39(423), 0);
					*bParam0 = 1;
					break;
				
				case 0x00000001:
					Function_429(237, bParam0, bParam2, 420, 422, 423);
					break;
				
				case 0x00000002:
					*bParam2 = 0.0f;
					Function_428(237, uParam1, 1, bParam0, 0, 7007, 50.0f, 100.0f, 0);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(237, 419, bParam0);
					break;
				
				case 0x00000001:
					Function_429(237, bParam0, bParam2, 419, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*bParam2 = 0.0f;
					Function_428(237, uParam1, 2, bParam0, 0, 7008, 100.0f, 150.0f, 0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(237, 421, bParam0);
					break;
				
				case 0x00000001:
					Function_429(237, bParam0, bParam2, 421, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*bParam2 = 0.0f;
					Function_428(237, uParam1, 3, bParam0, 0, 7009, 150.0f, 200.0f, 0);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_432(237);
					SET_JOURNAL_ENTRY_PROGRESS(Function_78(237), 0.0f, false, 0);
					Function_431(237, 1, Function_39(422), 0);
					Function_431(237, 2, Function_39(423), 0);
					*bParam0 = 1;
					break;
				
				case 0x00000001:
					Function_429(237, bParam0, bParam2, 422, 423, 4294967295);
					break;
				
				case 0x00000002:
					*bParam2 = 0.0f;
					Function_428(237, uParam1, 4, bParam0, 0, 7010, 200.0f, 250.0f, 0);
					break;
			}
			break;
		
		case 0x00000004:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(237, 423, bParam0);
					break;
				
				case 0x00000001:
					Function_429(237, bParam0, bParam2, 423, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*bParam2 = 0.0f;
					Function_426(237, uParam1, bParam0, 7011, 250.0f, "SC_Poker_Icon_128");
					break;
			}
			break;
	}
	return;
}

void Function_426(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x175D0 / 95696
{
	struct<4> Var0;
	
	Function_109(bParam0, 1);
	*iParam1 = 10;
	*uParam2 = 2;
	if (bParam3 != 4294967295)
	{
		Function_102(bParam3);
	}
	Function_185(bParam4, 0, 1);
	Function_105(bParam0, 0);
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_77(bParam0) };
	Function_96(&Var0, CEIL(bParam4), bParam5);
	Function_113(bParam0, 4);
	Function_81();
}

void Function_427(bool bParam0, int iParam1, bool bParam2) //Position: 0x1763C / 95804
{
	Function_432(bParam0);
	SET_JOURNAL_ENTRY_PROGRESS(Function_78(bParam0), 0.0f, false, 0);
	Function_431(bParam0, 1, Function_39(iParam1), 0);
	*bParam2 = 1;
	return;
}

void Function_428(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x17663 / 95843
{
	struct<4> Var0;
	
	Function_109(iParam0, 1);
	if (!IS_STRING_VALID(bParam8))
	{
		bParam8 = "SC_Poker_Icon_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_77(iParam0) };
	Function_96(&Var0, CEIL(bParam6), bParam8);
	*uParam1 = iParam2;
	*bParam3 = iParam4;
	if (iParam5 != 4294967295)
	{
		Function_102(iParam5);
	}
	Function_113(iParam0, 4);
	SET_JOURNAL_ENTRY_PROGRESS(Function_78(iParam0), 0.0f, false, 0);
	Function_114(iParam0, 0, CEIL(bParam7), 0);
	Function_81();
}

void Function_429(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5) //Position: 0x176DA / 95962
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar3 = Function_119(bParam0);
	if (iParam3 != 4294967295)
	{
		bVar0 = (Function_39(iParam3) - Function_430(bParam0, 1, 0));
	}
	if (iParam4 != 4294967295)
	{
		fVar1 = (Function_39(iParam4) - Function_430(bParam0, 2, 0));
	}
	if (iParam5 != 4294967295)
	{
		fVar2 = (Function_39(iParam5) - Function_430(bParam0, 3, 0));
	}
	if ((bVar0 <= 1.0f || fVar1 <= 1.0f) || fVar2 <= 1.0f)
	{
		*bParam1 = 2;
	}
	else
	{
		*uParam2 = (bVar0 / 1.0f);
		if (*uParam2 == fVar3)
		{
			Function_74(bParam0, *uParam2, 1, ROUND(bVar0), 4294967295, 4294967295);
		}
	}
}

float Function_430(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17760 / 96096
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		return (*&Global_50170[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_110();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("PVP_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

int Function_431(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17806 / 96262
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		(*&Global_50170[bParam022] + 36)[bParam1] = bParam2;
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_110();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

void Function_432(int iParam0) //Position: 0x178A0 / 96416
{
	Function_433(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_433(bool bParam0, bool bParam1, bool bParam2) //Position: 0x178B6 / 96438
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_110();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_434(bool bParam0, var uParam1, var uParam2) //Position: 0x1792B / 96555
{
	switch (*uParam1)
	{
		case 0x00000000:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_432(236);
					Function_431(236, 1, Function_39(424), 0);
					*bParam0 = 1;
					break;
				
				case 0x00000001:
					Function_429(236, bParam0, uParam2, 424, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_428(236, uParam1, 1, bParam0, 0, 7001, 50.0f, 100.0f, 0);
					break;
			}
			break;
		
		case 0x00000001:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(236, 414, bParam0);
					break;
				
				case 0x00000001:
					Function_429(236, bParam0, uParam2, 414, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_428(236, uParam1, 2, bParam0, 0, 7002, 100.0f, 150.0f, 0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(236, 415, bParam0);
					break;
				
				case 0x00000001:
					Function_429(236, bParam0, uParam2, 415, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_428(236, uParam1, 3, bParam0, 0, 7003, 150.0f, 200.0f, 0);
					break;
			}
			break;
		
		case 0x00000003:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(236, 416, bParam0);
					break;
				
				case 0x00000001:
					Function_429(236, bParam0, uParam2, 416, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_428(236, uParam1, 4, bParam0, 0, 7004, 200.0f, 250.0f, 0);
					break;
			}
			break;
		
		case 0x00000004:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(236, 417, bParam0);
					break;
				
				case 0x00000001:
					Function_429(236, bParam0, uParam2, 417, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_428(236, uParam1, 5, bParam0, 0, 7005, 250.0f, 300.0f, 0);
					break;
			}
			break;
		
		case 0x00000005:
			switch (*bParam0)
			{
				case 0x00000000:
					Function_427(236, 418, bParam0);
					break;
				
				case 0x00000001:
					Function_429(236, bParam0, uParam2, 418, 4294967295, 4294967295);
					break;
				
				case 0x00000002:
					*uParam2 = 0.0f;
					Function_426(236, uParam1, bParam0, 7006, 300.0f, "SC_Poker_Icon_128");
					break;
			}
			break;
	}
	return;
}

void Function_435() //Position: 0x17B98 / 97176
{
	Function_26(1024, 1, 0);
	Function_26(1, 0, 0);
	return;
}

void Function_436() //Position: 0x17BAC / 97196
{
	Function_26(1025, 1, 0);
	return;
}

int Function_437() //Position: 0x17BBA / 97210
{
	bool bVar0;
	
	bVar0 = Function_24();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_438(int iParam0) //Position: 0x17BD4 / 97236
{
	Function_27(&uLocal_252, iParam0);
	return;
}

bool Function_439(bool bParam0) //Position: 0x17BE1 / 97249
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_440() //Position: 0x17C00 / 97280
{
	bool bVar0;
	int iVar1;
	
	NET_ENABLE_KICKING(0);
	HUD_ENABLE(false);
	SET_HUD_MAP_DRAW_ENABLED(0);
	NET_HUD_TUNE_VALUE("IconCamConstOffset", F2STR(0.2f, 1, 10));
	fLocal_251 = -10.0f;
	HUD_SET_MINIGAME_TYPE_LAYOUT(0);
	AUDIO_MUSIC_SET_MOOD("EVERYTHING", 0, 4294967295, 4294967295);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(Function_24());
	if (NET_GET_PLAYMODE() == 0)
	{
		Function_462(0);
		iLocal_313 = Function_461(37, GET_LOCAL_SLOT());
	}
	Function_459();
	bLocal_246 = CREATE_LAYOUT("Poker01");
	if (Global_79349.f_40 == Global_30717[1])
	{
		Function_457();
	}
	Function_456();
	Function_454();
	Function_453(&iLocal_247);
	Function_453(&iLocal_318);
	iLocal_909 = 0;
	iLocal_925 = 1;
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_255 = GET_CURRENT_GAME_TIME();
	bLocal_253 = CREATE_CAMERA_IN_LAYOUT(bLocal_246, "pokerCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(bLocal_253, "poker");
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_253);
	iLocal_0 = 99;
	Function_198(34);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_246, "Poker_StayOutvol", 2, *(&Local_257 + 152), 0.0f, 0.0f, 0.0f, 2.75f, 2.0f, 2.75f);
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (IS_ACTOR_VALID((*&Local_257 + 12)[iVar1]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_257 + 12)[iVar1], 1);
			REFERENCE_ACTOR((*&Local_257 + 12)[iVar1]);
			CLEAR_LAST_HIT((*&Local_257 + 12)[iVar1]);
		}
		iVar1++;
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
	Function_451(&iLocal_316);
	Function_441();
	Function_371(&iLocal_316);
	if (Global_28178 == 3)
	{
		Function_370(&iLocal_316, 17);
		Function_370(&iLocal_316, 6);
	}
	Function_198(2048);
	return;
}

void Function_441() //Position: 0x17D94 / 97684
{
	Function_449(1);
	uLocal_928 = Function_447("PokerEvents");
	NET_SCRIPTMSG_REGISTER_HANDLER(29, 98111);
	NET_SCRIPTMSG_REGISTER_HANDLER(30, 97892);
	NET_SCRIPTMSG_REGISTER_HANDLER(28, 97744);
	return;
}

void Function_442(bool bParam0) //Position: 0x17DD0 / 97744
{
	struct<2> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	switch (Var0)
	{
		case 0x00000000:
			break;
		
		case 0x00000006:
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
	if (Local_926 != 0)
	{
		LOG_ERROR("Received Player Action despite already having one!");
	}
	Local_926 = { StackVal, Var0 };
	return;
}

void Function_443(bool bParam0) //Position: 0x17E64 / 97892
{
	struct<49> Var0;
	
	Var0 = 11;
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 13);
	iVar14 = 0;
	while (iVar14 <= 52)
	{
		bVar15 = (iVar14 % 5);
		bVar13 = (iVar14 / 5);
		Function_444(Var0[bVar13], bVar15, &Local_322 + 1396[iVar142]);
		if (Global_30842[38])
		{
			PRINTSTRING("Card");
			PRINTINT(bVar13);
			PRINTSTRING("x");
			PRINTINT(bVar15);
			PRINTSTRING(": ");
			Function_136(StackVal, *(&Local_322 + 1396[iVar142]), &cVar16);
			PRINTSTRING(&cVar16);
			PRINTNL();
		}
		iVar14++;
	}
	if (Var0.f_48)
	{
		Function_438(0x10000000);
	}
	else
	{
		Function_198(0x10000000);
	}
	Function_438(512);
	return;
}

void Function_444(bool bParam0, int iParam1, int iParam2) //Position: 0x17F16 / 98070
{
	bParam0 = SHIFT_RIGHT(bParam0, iParam1 * 6);
	*iParam2 = (bParam0 && 15);
	bParam0 = SHIFT_RIGHT(bParam0, 4);
	iParam2->f_4 = (bParam0 && 3);
	return;
}

void Function_445(bool bParam0) //Position: 0x17F3F / 98111
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	Function_136(StackVal, *(&Var0 + 4), &cVar4);
	if (Var0 >= 4294967295)
	{
		iVar10 = StackVal;
		Function_305(&Local_322 + 12[iVar1053] + 36, &Var0 + 4);
		Function_446(&Var0 + 4, &Local_322 + 12[iVar1053], Var0.f_12, 0);
	}
	else
	{
		Function_305(&Local_322 + 1824, &Var0 + 4);
		if (Local_322.f_1388 == 4294967295)
		{
			Function_344(StackVal, &Local_322, &Var0 + 4, Var0.f_12);
		}
		else
		{
			Function_344(StackVal, &Local_322, &Var0 + 4, Var0.f_12);
		}
	}
	return;
}

void Function_446(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x17FEB / 98283
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* cVar9[32];
	char* cVar17[64];
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	strcpy(&cVar17, Function_30(), 64);
	if (Function_268())
	{
		if (bParam3)
		{
			strcpy(&cVar9, "$/fragments/p_crd_01x", 32);
		}
		else
		{
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(iParam0, 0) };
		}
	}
	else
	{
		cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16(iParam0, 0) };
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam1 + 36 + 60)[iParam2] = CREATE_PROP_IN_LAYOUT(bLocal_246, &cVar17, &cVar9, vVar0, vVar3, 1);
	if (iParam2 == 0)
	{
		(*iParam1 + 36 + 72)[iParam2] = ATTACH_OBJECTS_NO_DRV((*iParam1 + 36 + 60)[iParam2], GET_OBJECT_FROM_ACTOR(*iParam1), "wrist_l_attachment", vVar6, vVar3);
	}
	else
	{
		(*iParam1 + 36 + 72)[iParam2] = ATTACH_OBJECTS_NO_DRV((*iParam1 + 36 + 60)[iParam2], GET_OBJECT_FROM_ACTOR(*iParam1), "arm_l_attachment", vVar6, vVar3);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_351((*iParam1 + 36 + 60)[iParam2], *iParam1);
	if (!bParam3)
	{
		SET_ACTION_NODE_FOR_ACTOR(*iParam1, "sit_poker/Player/card_idle");
	}
}

var Function_447(bool bParam0) //Position: 0x1812F / 98607
{
	bool bVar0;
	
	bVar0 = Function_448();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_448() //Position: 0x18143 / 98627
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_449(bool bParam0) //Position: 0x1817F / 98687
{
	struct<17> Var0;
	
	Function_134(&Var0);
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
		Function_27(&Var0, 4);
	}
	Function_127(&Var0);
	Function_128();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 98769);
	return;
}

void Function_450(bool bParam0) //Position: 0x181D1 / 98769
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 2);
	Function_134(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, true, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_135(&iVar7);
	if (Function_257(&Var2))
	{
	}
	bVar8 = Function_240(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_256(&Var2, 1);
	Function_127(&Var2);
	return;
}

void Function_451(int iParam0) //Position: 0x182D4 / 99028
{
	Function_452(iParam0);
	return;
}

void Function_452(int iParam0) //Position: 0x182DF / 99039
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_453(var uParam0) //Position: 0x182FE / 99070
{
	if (!Function_270(uParam0))
	{
		Function_176(uParam0, 0.0f);
	}
	return;
}

void Function_454() //Position: 0x18313 / 99091
{
	Function_455();
	return;
}

void Function_455() //Position: 0x1831C / 99100
{
	REQUEST_ANIM_SET("nsit_poker", 0);
	REQUEST_ANIM_SET("sit_poker_gped", 0);
	REQUEST_ANIM_SET("sit_poker_hillb", 0);
	REQUEST_ANIM_SET("sit_poker_oldm", 0);
	REQUEST_ACTION_TREE("custom/sit_poker");
	REQUEST_ACTION_TREE("custom/fake_poker");
	return;
}

void Function_456() //Position: 0x183A1 / 99233
{
	return;
}

void Function_457() //Position: 0x183A7 / 99239
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = CREATE_OBJECT_ITERATOR(bLocal_246);
	bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), bLocal_246, 4294967295, 1);
	Function_458(bVar1, 0, 6, 15.0f);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	DISBAND_OBJECTSET(bVar2);
	while (IS_OBJECT_VALID(bVar0))
	{
		ADD_OBJECT_TO_OBJECTSET(bVar0, bVar2);
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	if (GET_OBJECTSET_SIZE(bVar2) == 10)
	{
		DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar2));
		DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(6, bVar2));
	}
	DESTROY_OBJECTSET(bVar2);
	return;
}

void Function_458(bool bParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x18418 / 99352
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	switch (bParam2)
	{
		case 0x00000001:
			ITERATE_IN_LAYOUT(bParam0, Global_6289);
			ITERATE_ON_OBJECT_TYPE(bParam0, 24);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000002:
			ITERATE_IN_LAYOUT(bParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000005:
			ITERATE_IN_LAYOUT(bParam0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000004:
			ITERATE_IN_LAYOUT(bParam0, Global_28841);
			ITERATE_ON_OBJECT_TYPE(bParam0, 15);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000003:
			ITERATE_IN_LAYOUT(bParam0, Global_6287);
			ITERATE_ON_OBJECT_TYPE(bParam0, 24);
			ITERATE_IN_SPHERE(bParam0, vVar0, fParam3);
			break;
		
		case 0x00000006:
			ITERATE_IN_LAYOUT(bParam0, Global_30616);
			ITERATE_ON_OBJECT_TYPE(bParam0, 8);
			ITERATE_ON_PARTIAL_NAME(bParam0, "nvista_cam");
			break;
		
		default:
			break;
	}
}

void Function_459() //Position: 0x1850A / 99594
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_3();
	Function_460();
	if (!Global_3384)
	{
		Global_3384 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_460() //Position: 0x1853A / 99642
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

int Function_461(int iParam0, bool bParam1) //Position: 0x1854E / 99662
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_122(iParam0);
	}
	if (!Function_252(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_462(int iParam0) //Position: 0x185BC / 99772
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
	Function_71();
	Function_72();
	switch (iParam0)
	{
		case 0x00000001:
			Function_470(12288);
			Function_8(16384);
			break;
		
		case 0x00000002:
			Function_470(20480);
			Function_8(8192);
			break;
		
		default:
			Function_8(28672);
			break;
	}
	Function_8(2048);
	Function_464(0, 0);
	Function_463();
	return;
}

void Function_463() //Position: 0x18680 / 99968
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_464(bool bParam0, bool bParam1) //Position: 0x18699 / 99993
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_469(&Global_78480);
	Function_468(&Global_78480);
	uVar0 = Function_122(37);
	Function_466();
	if (!bParam0)
	{
		Function_121(37, uVar0);
	}
	Function_348(18264, 0);
	Function_465();
	return;
}

void Function_465() //Position: 0x186E5 / 100069
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_466() //Position: 0x18704 / 100100
{
	Function_467(&Global_78480 + 220);
	return;
}

void Function_467(int iParam0) //Position: 0x18713 / 100115
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

void Function_468(int iParam0) //Position: 0x18734 / 100148
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

void Function_469(int iParam0) //Position: 0x18758 / 100184
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

void Function_470(int iParam0) //Position: 0x1877C / 100220
{
	Function_66(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

