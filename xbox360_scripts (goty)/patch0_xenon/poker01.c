//Decompiled with MagicRDR v1.0
//Function Count : 517
//Statics Count : 974
//Natives Count : 472
//Parameters Count : 52

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
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	float fLocal_186 = 0.0f;
	float fLocal_187 = 0.0f;
	float fLocal_188 = 0.0f;
	float fLocal_189 = 0.0f;
	bool bLocal_190 = false;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	char[] cLocal_195[4] = 0;
	float fLocal_196 = 0.0f;
	float fLocal_197 = 0.0f;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	struct<65> Local_203 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bLocal_282 = false;
	bool bLocal_283 = false;
	bool bLocal_284 = false;
	bool bLocal_285 = false;
	var uLocal_286 = 1;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	struct<2245> Local_292 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_178 = 1000;
	iLocal_198 = 0;
	iLocal_229 = 0;
	fLocal_900 = 0.2f;
	iLocal_907 = 7;
	iLocal_908 = 0;
	iLocal_909 = 1;
	iLocal_910 = 2;
	iLocal_911 = 3;
	bLocal_912 = false;
	bLocal_913 = false;
	iLocal_914 = 0;
	iLocal_915 = 1;
	Local_230 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_498();
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
	while (Function_243())
	{
		if (iLocal_909 <= 1)
		{
			SCRIPT_BREAKPOINT("test");
		}
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_230 };
		Function_217();
		if (GET_DEBUG_DRAW_STATE())
		{
			if (Function_216(1) >= 4294967295)
			{
				vVar43 = { StackVal, StackVal, *(&Local_230 + 148) };
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
				while (bVar0 <= (&Local_292 + 1824)->f_84)
				{
					GET_OBJECT_AXIS((*&Local_292 + 1916)[bVar0], &vVar34, 0);
					GET_OBJECT_AXIS((*&Local_292 + 1916)[bVar0], &vVar37, 2);
					vVar34 = { StackVal, StackVal, Vector(vVar34, StackVal, StackVal) * Vector(0.045f, 0.045f, 0.045f) };
					vVar37 = { StackVal, StackVal, Vector(vVar37, StackVal, StackVal) * Vector(0.06f, 0.06f, 0.06f) };
					GET_OBJECT_POSITION((*&Local_292 + 1916)[bVar0], &vVar43);
					vVar43 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar34, vVar43, StackVal) };
					vVar43 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar37, vVar43, StackVal) };
					bVar0++;
				}
				strcpy(&cVar46, "Table: ", 64);
				bVar0 = false;
				while (bVar0 <= 5)
				{
					Function_215(StackVal, *(&Local_292 + 12[bVar053] + 36[02]), &cVar62);
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
					memcpy(&cVar46, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 12[bVar053] + 4), 16);
					Function_215(StackVal, *(&Local_292 + 12[bVar053] + 36[02]), &cVar62);
					stradd(&cVar46, ": ", 64);
					stradd(&cVar46, &cVar62, 64);
					Function_215(StackVal, *(&Local_292 + 12[bVar053] + 36[12]), &cVar62);
					stradd(&cVar46, ", ", 64);
					stradd(&cVar46, &cVar62, 64);
					DRAW_STRING_CURRENT_FONT(0.1f, (0.1f + (0.02f * IntToFloat(bVar0 + 2))), &cVar46, 1.0f, 1.0f, 1.0f, 1.0f);
					bVar0++;
				}
			}
		}
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x400 / 1024
{
	int iVar0;
	
	if (Function_214())
	{
		Function_202();
		Function_201();
	}
	else
	{
		SET_ACTOR_ALLOW_BUMP_REACTIONS(Function_200(), 1);
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
	iVar0 = 0;
	while (iVar0 <= Local_292.f_1288)
	{
		if (IS_OBJECT_VALID(StackVal))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar0]))
		{
			DEREFERENCE_ACTOR((*&Local_230 + 12)[iVar0]);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_230 + 12)[iVar0]);
			SET_DRAW_ACTOR((*&Local_230 + 12)[iVar0], 1);
		}
		iVar0++;
	}
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_200()), "iPokerTalkingPlayerId");
	if (Function_199(4194304))
	{
		Function_198(4, 1);
	}
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	END_CURRENT_MINIGAME();
	Function_196();
	if (Local_292.f_1364 != 4294967295)
	{
		Function_195();
	}
	UI_EXIT("BetPanel");
	UI_EXIT("Scores");
	UI_EXIT("BetPanel_1");
	UI_EXIT("BetPanel_2");
	CANCEL_TIME_WARP(0);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_190, "Poker_StayOutvol"));
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(bLocal_190, "Poker_StayOutvol"));
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (!(Local_230.f_180 || Function_214()))
	{
		Function_193(1);
		Function_192(1);
		ENABLE_AMBIENT_SPAWNING(true);
	}
	ACTOR_DISMOUNT_NOW(Function_200());
	if (!Local_230.f_180 && !Function_199(8388608))
	{
		Function_188();
	}
	Function_187();
	RELEASE_LAYOUT_REF(bLocal_190);
	if (Function_214())
	{
		if (!(bLocal_3 || iLocal_2) || iLocal_906 != 2)
		{
			Function_183();
		}
		else
		{
			Function_179(Function_200(), 1);
		}
	}
	else if (iLocal_2)
	{
		if (Local_230.f_180)
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Function_200()), "Gun05Poker", 1);
			Function_176(StackVal);
		}
		else if ((Global_3380 || Global_3382) || Global_3392)
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
		if (Local_230.f_180)
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Function_200()), "Gun05Poker", 0);
			Function_176(StackVal);
		}
		else
		{
			Function_14(StackVal);
			if (!Function_13(Global_76846, 512))
			{
				Function_7(Function_200(), 512, 1, 0);
			}
		}
	}
	else
	{
		Function_176(StackVal);
	}
	SET_ACTOR_INVULNERABILITY(Function_200(), 0);
	Function_6(Function_200());
	AI_STOP_IGNORING_ACTORS();
	Function_2();
	DESTROY_CAMERA(cLocal_195);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x750 / 1872
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_200(), 1);
	Function_5(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_200()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_4();
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	HUD_ENABLE(1);
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

void Function_3() //Position: 0x7D2 / 2002
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_4() //Position: 0x7E7 / 2023
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_5(int iParam0) //Position: 0x7FB / 2043
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_6(bool bParam0) //Position: 0x80E / 2062
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

void Function_7(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x833 / 2099
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_9(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_8(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_8(char* cParam0, int iParam1) //Position: 0x89F / 2207
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

bool Function_9(bool bParam0, var uParam1, int iParam2) //Position: 0x8D6 / 2262
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
		if (Function_11(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_10(uVar0))
		{
			case 0x00000002:
				if (!Function_13(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_10(char* cParam0) //Position: 0x94E / 2382
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

int Function_11(int iParam0) //Position: 0x9EF / 2543
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

void Function_12(int iParam0, int iParam1) //Position: 0xA2C / 2604
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_13(var uParam0, int iParam1) //Position: 0xA3F / 2623
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_14(int iParam0) //Position: 0xA52 / 2642
{
	Function_21(iParam0);
	Function_18(2);
	Function_17(12);
	Function_15((15 - Function_16(105)));
	return;
}

void Function_15(int iParam0) //Position: 0xA70 / 2672
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_16(105)), 0);
	return;
}

int Function_16(int iParam0) //Position: 0xA91 / 2705
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_17(int iParam0) //Position: 0xAA7 / 2727
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

void Function_18(int iParam0) //Position: 0xAC2 / 2754
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_20(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_20(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_20(Global_12976.f_24);
	PRINTNL();
	Function_19(iParam0);
	return;
}

void Function_19(int iParam0) //Position: 0xB5E / 2910
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_16(90)), 0);
	return;
}

void Function_20(bool bParam0) //Position: 0xB7F / 2943
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_21(int iParam0) //Position: 0xBC5 / 3013
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_31(iParam0))
	{
		return;
	}
	iVar0 = Function_30(iParam0);
	if (StackVal == 2)
	{
		Function_26("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(iVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_22(int iParam0) //Position: 0xC6B / 3179
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

bool Function_23() //Position: 0xCAA / 3242
{
	if (Function_24(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_24(bool bParam0, int iParam1) //Position: 0xCC5 / 3269
{
	return (bParam0 && iParam1) == 0;
}

struct<24> Function_25(char* cParam0) //Position: 0xCD2 / 3282
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

void Function_26(char* cParam0, int iParam1) //Position: 0xF28 / 3880
{
	struct<4> Var0;
	
	if (!Function_31(iParam1))
	{
		return;
	}
	switch (Function_30(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_27(Function_28(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_30(iParam1), Function_28(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_30(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_30(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_30(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_30(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_30(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_27(int iParam0) //Position: 0x104C / 4172
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

int Function_28(int iParam0) //Position: 0x1086 / 4230
{
	if (!Function_29(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_29(int iParam0) //Position: 0x10A6 / 4262
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_30(bool bParam0) //Position: 0x10BD / 4285
{
	if (!Function_29(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_31(int iParam0) //Position: 0x10D8 / 4312
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

bool Function_32(int iParam0) //Position: 0x10FC / 4348
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_33(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x1111 / 4369
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_17(12);
	Function_18(2);
	Function_15((15 - Function_16(105)));
	if (Function_30(iParam0) == 1)
	{
		iVar2 = Function_28(iParam0);
		Function_171(&(Global_3422[iVar240]));
		Function_170(4194304);
		if (bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_116(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		bVar1 = Function_115();
		if (bParam1)
		{
			Function_99(iVar2, iParam0, bVar1);
			Function_98();
		}
	}
	Function_39(iParam0, bParam1, iParam2, bVar1);
	if (Function_30(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_38(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_30(iParam0) == 1)
		{
			iVar2 = Function_28(iParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_34();
}

void Function_34() //Position: 0x11FE / 4606
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_35(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_35(int iParam0, bool bParam1) //Position: 0x122E / 4654
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x126B / 4715
{
	if (!Function_37(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_37(int iParam0) //Position: 0x1285 / 4741
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_38(int iParam0, bool bParam1) //Position: 0x129B / 4763
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
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_7(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_7(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_7(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_7(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_7(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_7(Global_34573, 0x1000000, 3, 0);
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

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1592 / 5522
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_31(iParam0))
	{
		Function_96();
		return;
	}
	iVar0 = Function_30(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_95())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_28(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
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
			PREPEND_JOURNAL_ENTRY(iVar11, 1);
		}
	}
	if (Function_95())
	{
		Function_90();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_26("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_84(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
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
						switch (Function_28(iParam0))
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
			Function_43(1);
			Function_41(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_40(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_40(int iParam0, int iParam1) //Position: 0x17E6 / 6118
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1820 / 6176
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_42())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

bool Function_42() //Position: 0x1862 / 6242
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_43(bool bParam0) //Position: 0x186B / 6251
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_73();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_44();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_44() //Position: 0x18BC / 6332
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
	if (!Function_42())
	{
		Function_49();
		Function_48();
		Function_47();
		Function_46();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_45();
	return;
}

void Function_45() //Position: 0x190E / 6414
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

void Function_46() //Position: 0x1A14 / 6676
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

void Function_47() //Position: 0x1A47 / 6727
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

void Function_48() //Position: 0x1BD5 / 7125
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

void Function_49() //Position: 0x1D89 / 7561
{
	Function_50(&Global_28260, 1, 0);
	return;
}

void Function_50(int iParam0, bool bParam1, int iParam2) //Position: 0x1D97 / 7575
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
	
	bVar0 = Function_200();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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

struct<8> Function_51(int iParam0) //Position: 0x1F88 / 8072
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x202E / 8238
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x22C9 / 8905
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_54(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_54() //Position: 0x28F6 / 10486
{
	int iVar0;
	
	return iVar0;
}

var Function_55(int iParam0) //Position: 0x28FE / 10494
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x290F / 10511
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
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0, bool bParam1) //Position: 0x2A04 / 10756
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A1D / 10781
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_60(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2A82 / 10882
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, int iParam1) //Position: 0x2A94 / 10900
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AA6 / 10918
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_62(int iParam0) //Position: 0x2BD6 / 11222
{
	return Global_35278[iParam020].f_48;
}

float Function_63(int iParam0) //Position: 0x2BE5 / 11237
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2C1E / 11294
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_65(int iParam0) //Position: 0x2C5B / 11355
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DF5 / 11765
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

int Function_67(int iParam0) //Position: 0x3039 / 12345
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_68() //Position: 0x307A / 12410
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

struct<8> Function_69() //Position: 0x3103 / 12547
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

struct<8> Function_70() //Position: 0x319A / 12698
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

void Function_71() //Position: 0x3219 / 12825
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x3252 / 12882
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x345C / 13404
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_23())
	{
		Function_81(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_81(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_75(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_75(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_74(StackVal, StackVal, vVar0))
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

bool Function_74(vector3 vParam0) //Position: 0x3517 / 13591
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x352F / 13615
{
	int iVar0;
	
	iVar0 = Function_79(uParam2, uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_77(&Global_63095, 1);
			Function_12(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_77(&Global_63095, 2);
			Function_12(&Global_63095, 1);
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
		Function_77(&Global_63095, 2);
		Function_12(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_76();
	return StackVal, StackVal, Function_76();
}

vector3 Function_76() //Position: 0x3616 / 13846
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_77(int iParam0, int iParam1) //Position: 0x361F / 13855
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x362E / 13870
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3644 / 13892
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
				fVar2 = Function_80(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(bVar0) && !bParam1)
	{
		bVar0 = Function_79(bParam0, 1);
	}
	return bVar0;
}

float Function_80(vector3 vParam0, vector3 vParam3) //Position: 0x370B / 14091
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_81(var uParam0, int iParam1) //Position: 0x3728 / 14120
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_83(Global_34573, &vVar4);
	if (!Function_82(Global_30640[0]))
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
	if (!Function_82(Global_30640[2]))
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
	if (!Function_82(Global_30640[1]))
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
	if (!Function_82(Global_30658[1]))
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
	if (!Function_82(Global_30658[3]))
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
	if (!Function_82(Global_30658[2]))
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
	if (!Function_82(Global_30658[4]))
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
	if (!Function_82(Global_30668[0]))
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
	if (!Function_82(Global_30668[1]))
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
	if (!Function_82(Global_30668[2]))
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
	if (!Function_82(Global_30679[0]))
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
	if (!Function_82(Global_30685[0]))
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
	if (!Function_82(Global_30685[1]))
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
	if (!Function_82(Global_30685[2]))
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
	if (!Function_82(Global_30693[0]))
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
	if (!Function_82(Global_30693[1]))
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
	if (!Function_82(Global_30693[2]))
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
	if (!Function_82(Global_30707[2]))
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
	if (!Function_82(Global_30707[3]))
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
	if (!Function_82(Global_30707[0]))
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
	if (!Function_82(Global_30717[0]))
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
	if (!Function_82(Global_30723[2]))
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
	if (!Function_82(Global_30723[1]))
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
	if (!Function_82(Global_30723[0]))
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
	if (!Function_82(Global_30679[1]))
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
	if (!Function_82(Global_30707[1]))
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
	Function_77(&Global_63095, 2);
	Function_12(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_74(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_82(int iParam0) //Position: 0x3F4D / 16205
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_24(uVar0, 0x1000000) || Function_24(uVar0, 0x2000000)) || Function_24(uVar0, 0x4000000)) || !Function_24(uVar0, 0x10000000));
}

void Function_83(bool bParam0, int iParam1) //Position: 0x3F88 / 16264
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3F95 / 16277
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(iParam0))
	{
		return;
	}
	switch (Function_30(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_28(iParam0);
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
			switch (Function_28(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_88(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_28(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_30679[1])
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
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_28(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_88(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_88(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_88(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
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

bool Function_85(int iParam0) //Position: 0x4472 / 17522
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x4488 / 17544
{
	if (!Function_29(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x44A7 / 17575
{
	if (!Function_29(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_88(int iParam0, bool bParam1) //Position: 0x44C1 / 17601
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

int Function_89(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4528 / 17704
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_90() //Position: 0x4748 / 18248
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_91() //Position: 0x48A0 / 18592
{
	int iVar0;
	int iVar1;
	
	if (!Function_37(Global_6269))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_36(Global_6269);
	if (!Function_37(iVar0) && Function_94(iVar1) < 0)
	{
		Function_52(24, Global_6269, 0);
		Function_92(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_94(Function_36(iVar0)))
	{
		Function_52(24, Global_6269, 0);
		Function_92(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_92(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4920 / 18720
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x4C72 / 19570
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_94(int iParam0) //Position: 0x4CF5 / 19701
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95() //Position: 0x4D0F / 19727
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_96() //Position: 0x4D3A / 19770
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
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
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_97(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_97(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4F81 / 20353
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

void Function_98() //Position: 0x4FAA / 20394
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x4FD8 / 20440
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
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_34165.f_116);
				bVar1 = (Function_67(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_34165.f_124);
				bVar3 = (Function_67(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_27(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_113(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
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
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_22(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x5274 / 21108
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_67(3);
	Function_109();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_107(3, bVar1);
		if (!bParam2)
		{
			if (!Function_13(Global_76848, 4))
			{
				Function_7(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
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

void Function_101(int iParam0, int iParam1) //Position: 0x5443 / 21571
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_102(int iParam0, char* cParam1, bool bParam2) //Position: 0x56A1 / 22177
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_92(iParam0, cParam1, 0, 1);
	iVar1 = Function_103();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_103() //Position: 0x5826 / 22566
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_104();
	return 0;
}

void Function_104() //Position: 0x58C5 / 22725
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_105(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5974 / 22900
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_106(int iParam0) //Position: 0x59D2 / 22994
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

int Function_107(int iParam0, bool bParam1) //Position: 0x5A61 / 23137
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
	iVar1 = Function_108(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_103();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_108(int iParam0, int iParam1) //Position: 0x5BFE / 23550
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_109() //Position: 0x5C3F / 23615
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5C55 / 23637
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x5C95 / 23701
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_112(int iParam0) //Position: 0x5CD5 / 23765
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5CE4 / 23780
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
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
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
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
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
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

int Function_114(int iParam0) //Position: 0x5EAC / 24236
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

var Function_115() //Position: 0x5F41 / 24385
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x5F66 / 24422
{
	if (!Function_37(iParam0))
	{
		return;
	}
	if (Global_3381)
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
			Function_121(1, 1);
			break;
		
		case 0x00000015:
			Function_121(50, 1);
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
			Function_121(50, 1);
			Function_100(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_121(5, 1);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_100(75, 1, 0);
			Function_117(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_121(5, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_121(25, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_121(10, 1);
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
			Function_121(20, 1);
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_121(25, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_121(10, 1);
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
			Function_121(5, 1);
			break;
		
		case 0x0000000F:
			Function_121(3, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_117(125, 1, 0);
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_121(50, 1);
			Function_100(100, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_121(50, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_121(75, 1);
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
			Function_121(50, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_121(100, 1);
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
			Function_121(100, 1);
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
			Function_121(100, 1);
			break;
		
		case 0x00000035:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_117(150, 1, 0);
			Function_121(100, 1);
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

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0x6421 / 25633
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
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
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_107(1, bVar1);
			if (!bParam2)
			{
				if (!Function_13(Global_76848, 1))
				{
					Function_7(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_120(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_13(Global_76848, 2))
				{
					Function_7(Global_34573, 2, 3, 0);
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
		Function_119(1, (4294967295 * bVar1), 0);
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
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_102(2, Function_118(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_102(2, Function_118(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
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
				Global_12976.f_152 = 5;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			break;
	}
	Function_101(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_118(int iParam0) //Position: 0x6742 / 26434
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x67E5 / 26597
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_120(int iParam0, bool bParam1) //Position: 0x69E0 / 27104
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
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_103();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_121(bool bParam0, bool bParam1) //Position: 0x6B7C / 27516
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
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if ((Function_67(597) + Function_67(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x6C47 / 27719
{
	struct<4> Var0;
	
	if (!Function_37(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_168(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_30640[0]);
			Function_165(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_165(Global_30668[0]);
			Function_155(0);
			Function_153(2, 1);
			Function_153(0, 1);
			Function_153(1, 1);
			break;
		
		case 0x00000003:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_165(Global_30668[0]);
			Function_165(Global_30640[0]);
			Function_151(0, 1);
			Function_151(15, 1);
			Function_151(9, 1);
			Function_151(12, 1);
			Function_151(16, 1);
			Function_153(3, 1);
			break;
		
		case 0x00000005:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_163(21, bParam2, 4);
			Function_165(Global_30668[0]);
			Function_153(39, 1);
			break;
		
		case 0x00000007:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_150())
				{
					if (!Function_149(4))
					{
						Function_139(4, 0, 0, 1, 0);
					}
				}
			}
			Function_165(Global_30640[0]);
			Function_165(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_165(Global_30640[0]);
			Function_165(Global_30668[2]);
			Function_138(&(Global_29008[Global_30668[2]]), 32768);
			Function_137(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_163(9, bParam2, 4);
			Function_165(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_165(Global_30640[0]);
			Function_165(Global_30658[0]);
			Function_138(&(Global_29008[Global_30658[0]]), 32768);
			Function_137(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_165(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_30640[0]);
			Function_165(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_165(Global_30640[1]);
			Function_165(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_165(Global_30679[0]);
			Function_165(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_165(Global_30658[5]);
			Function_165(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_163(21, bParam2, 4);
			Function_165(Global_30640[4]);
			Function_165(Global_30658[4]);
			Function_136(&Global_76847, 0x2000000);
			Function_136(&Global_76847, 0x4000000);
			Function_136(&Global_76847, 4096);
			Function_136(&Global_76847, 8);
			Function_136(&Global_76847, 8388608);
			Function_136(&Global_76847, 524288);
			Function_136(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_165(Global_30640[4]);
			Function_165(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_137(&(Global_29008[Global_30640[4]]), 256);
			Function_165(Global_30640[4]);
			Function_165(Global_30658[0]);
			Function_138(&(Global_29008[Global_30658[0]]), 32768);
			Function_137(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_165(Global_30640[0]);
			Function_165(Global_30640[5]);
			Function_163(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_165(Global_30658[3]);
			Function_138(&(Global_29008[Global_30658[3]]), 32768);
			Function_137(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_163(9, bParam2, 4);
			Function_165(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_138(&(Global_29008[Global_30679[1]]), 32768);
			Function_165(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_163(12, bParam2, 4);
			Function_137(&(Global_29008[Global_30679[1]]), 256);
			Function_165(Global_30668[3]);
			Function_165(Global_30693[0]);
			Function_165(Global_30685[0]);
			Function_155(4);
			Function_151(13, 1);
			Function_151(1, 1);
			Function_151(18, 1);
			Function_153(34, 1);
			Function_153(44, 1);
			Function_153(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_163(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_165(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_165(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_165(Global_30693[0]);
			Function_165(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_165(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_165(Global_30685[0]);
			Function_165(Global_30693[0]);
			Function_165(Global_30693[1]);
			Function_165(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_163(23, bParam2, 3);
			Function_151(23, 1);
			Function_165(Global_30685[0]);
			Function_165(Global_30685[2]);
			Function_138(&(Global_29008[Global_30685[2]]), 32768);
			Function_137(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_163(19, bParam2, 4);
			Function_165(Global_30685[0]);
			Function_165(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_163(24, bParam2, 3);
			Function_151(24, 1);
			Function_165(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_165(Global_30685[0]);
			Function_165(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_165(Global_30693[12]);
			Function_165(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_165(Global_30693[12]);
			Function_165(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_163(25, bParam2, 10);
			Function_165(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_165(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_165(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_163(13, bParam2, 4);
			Function_165(Global_30693[2]);
			Function_165(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_149(8))
				{
					Function_139(8, 0, 0, 1, 0);
				}
			}
			Function_165(Global_30685[0]);
			Function_155(9);
			Function_151(7, 1);
			Function_151(11, 1);
			Function_151(3, 1);
			Function_151(20, 1);
			Function_153(57, 1);
			break;
		
		case 0x0000002A:
			Function_163(2, bParam2, 4);
			Function_165(Global_30717[0]);
			Function_165(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_165(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_165(Global_30717[0]);
			Function_165(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_165(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_165(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_165(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_163(17, bParam2, 4);
			Function_165(Global_30723[0]);
			Function_165(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_134(15))
				{
					Function_129(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_137(&(Global_29008[Global_30717[1]]), 256);
			Function_155(11);
			Function_165(Global_30717[1]);
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_165(Global_30717[1]);
			Function_165(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_165(Global_30717[1]);
			Function_123(11);
			Function_155(12);
			Global_16537[1121].f_40 = 0;
			Function_153(56, 1);
			if (!bParam2)
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

void Function_123(int iParam0) //Position: 0x7545 / 30021
{
	bool bVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_128(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_128(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_124(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x76B4 / 30388
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_126(Function_127(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_126(Function_127(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_126(StackVal);
				vVar1 = { StackVal, StackVal, Function_126(StackVal) };
				if (Function_125(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_125(vector3 vParam0, vector3 vParam3) //Position: 0x77BA / 30650
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_126(bool bParam0) //Position: 0x77E7 / 30695
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

var Function_127(vector3 vParam0) //Position: 0x783E / 30782
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

void Function_128(bool bParam0, int iParam1) //Position: 0x788C / 30860
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
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

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x78E0 / 30944
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
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
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_132(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
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

void Function_130() //Position: 0x7A7F / 31359
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7A85 / 31365
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

void Function_132(bool bParam0, int iParam1) //Position: 0x7B29 / 31529
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0x7B7E / 31614
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x7B94 / 31636
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

bool Function_135(int iParam0, int iParam1) //Position: 0x7BE5 / 31717
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

void Function_136(var uParam0, int iParam1) //Position: 0x7C12 / 31762
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7C21 / 31777
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x7C38 / 31800
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7C47 / 31815
{
	struct<8> Var0;
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_148(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_149(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 5);
			}
			else
			{
				Function_130();
			}
		}
		Function_142(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_141() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_141() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_140(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_23())
		{
			if (!Function_13(Global_76846, 2))
			{
				Function_7(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_140(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7D9C / 32156
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_141() //Position: 0x7E17 / 32279
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_142(bool bParam0) //Position: 0x7E44 / 32324
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_145(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_144(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_143(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_143(int iParam0) //Position: 0x7FF4 / 32756
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

void Function_144(int iParam0, int iParam1) //Position: 0x804C / 32844
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

var Function_145(int iParam0) //Position: 0x8071 / 32881
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

bool Function_146(bool bParam0, int iParam1) //Position: 0x80C7 / 32967
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

int Function_147(bool bParam0) //Position: 0x8126 / 33062
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_148(int iParam0) //Position: 0x8132 / 33074
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_149(int iParam0) //Position: 0x814E / 33102
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

bool Function_150() //Position: 0x81A0 / 33184
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_24(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_151(int iParam0, int iParam1) //Position: 0x81D0 / 33232
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_152(iParam0, iParam1);
	Function_7(Global_34573, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x8243 / 33347
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x829F / 33439
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_154(iParam0, iParam1);
	Function_7(Global_34573, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x8310 / 33552
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0x836A / 33642
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_162(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_162(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 1);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_140("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_124(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_139(14, 1, 0, 0, 0);
				Function_156(14, 1, 0, 0, 0);
			}
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 6);
			}
			else
			{
				Function_130();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_140("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8617 / 34327
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_148(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_135(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_140(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_146(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_132(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 0);
			}
			else
			{
				Function_130();
			}
		}
		Function_142(bParam0);
		if (StackVal && !Function_24(((((!Function_141() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_24((((Function_141() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_23())
		{
			if (!Function_13(Global_76846, 2))
			{
				Function_7(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_158();
		}
		Global_28180.f_12 = 1;
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

void Function_157(int iParam0, bool bParam1) //Position: 0x88AD / 34989
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

void Function_158() //Position: 0x8918 / 35096
{
	if (Function_133(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_161(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_161(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_159(int iParam0, int iParam1) //Position: 0x8993 / 35219
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
					if (Function_35(6, 0) || Function_35(12, 0))
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
					if (Function_160(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_35(5, 0))
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
					if (Function_160(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_160(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_160(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_160(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_35(26, 0))
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
					if (Function_160(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_160(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_160(27) && iVar18)
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
					if (Function_160(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_160(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_160(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_160(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_35(17, 0) && iVar15)
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
					if (Function_160(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_35(6, 0) && Function_160(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_160(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_35(9, 0) && Function_160(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_160(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_35(8, 0) && iVar19)
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
	if (Function_74(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_74(StackVal, StackVal, vVar3))
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
	if (!Function_74(StackVal, StackVal, vVar3))
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

int Function_160(int iParam0) //Position: 0x9584 / 38276
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0) //Position: 0x9599 / 38297
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

void Function_162(bool bParam0, int iParam1) //Position: 0x95E8 / 38376
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
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

void Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0x9639 / 38457
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_164(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_168(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_164(int iParam0, int iParam1) //Position: 0x96A7 / 38567
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_165(int iParam0) //Position: 0x96BA / 38586
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_167(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_138(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_166(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_89(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
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
	else if (iParam0 == Global_30723[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!Function_42())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_166(int iParam0) //Position: 0x97B9 / 38841
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
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_167(var uParam0, int iParam1) //Position: 0x9811 / 38929
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_168(bool bParam0, bool bParam1, int iParam2) //Position: 0x982D / 38957
{
	if (!Function_169(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_200(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_200(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_200(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_169(int iParam0) //Position: 0x9884 / 39044
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_170(int iParam0) //Position: 0x9896 / 39062
{
	int iVar0;
	
	if (Function_24(iParam0, 1) && Function_24(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_171(int iParam0) //Position: 0x98CA / 39114
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_172(4, 0, 0);
		}
	}
	return;
}

void Function_172(bool bParam0, bool bParam1, int iParam2) //Position: 0x9931 / 39217
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		uVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_173(Global_16524, uVar0, 1);
	}
	return;
}

void Function_173(int iParam0, bool bParam1, bool bParam2) //Position: 0x9A17 / 39447
{
	int iVar0;
	
	Function_175(iParam0);
	Function_20(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, bParam1);
	Function_174();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_174() //Position: 0x9B90 / 39824
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_175(int iParam0) //Position: 0x9B9C / 39836
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

void Function_176(var uParam0) //Position: 0x9BE2 / 39906
{
	Function_178(uParam0);
	Function_177();
	Function_18(2);
	Function_15((15 - Function_16(105)));
	Function_17(12);
	return;
}

void Function_177() //Position: 0x9C03 / 39939
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_178(int iParam0) //Position: 0x9C1C / 39964
{
	int iVar0;
	
	if (!Function_31(iParam0))
	{
		Function_96();
		return;
	}
	iVar0 = Function_30(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_26("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_179(bool bParam0, int iParam1) //Position: 0x9C6F / 40047
{
	struct<5> Var0;
	
	Function_182(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_180(256))
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

bool Function_180(int iParam0) //Position: 0x9CC5 / 40133
{
	return Function_181(Global_78617.f_52, iParam0);
}

int Function_181(var uParam0, int iParam1) //Position: 0x9CD6 / 40150
{
	return (uParam0 && iParam1) == 0;
}

void Function_182(int iParam0, bool bParam1) //Position: 0x9CE3 / 40163
{
	if (bParam1)
	{
		Function_77(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_12(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

int Function_183() //Position: 0x9D1E / 40222
{
	if (Function_186(16))
	{
	}
	else
	{
		Global_83803.f_36 = 1;
	}
	Function_184(16);
	return 1;
}

void Function_184(int iParam0) //Position: 0x9D3C / 40252
{
	Function_185(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x9D75 / 40309
{
	Function_12(uParam0, iParam1);
	return;
}

bool Function_186(var uParam0) //Position: 0x9D82 / 40322
{
	return Function_181(Global_79336, uParam0);
}

void Function_187() //Position: 0x9D91 / 40337
{
	return;
}

void Function_188() //Position: 0x9D97 / 40343
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	
	REMOVE_STRING_TABLE("nminigames");
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_191("$/fragments/p_gen_cards02x");
	Function_191("$/fragments/p_gen_dealerButton01x");
	Function_191("$/fragments/p_crd_01x");
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = iVar0;
			Var2.f_4 = iVar1;
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&Var2, 0) };
			Function_191(&Var4);
			iVar1++;
		}
		iVar0++;
	}
	Function_191("$/fragments/p_crd_chipRedPoker01x");
	Function_191("$/fragments/p_crd_chipGreenPoker01x");
	Function_191("$/fragments/p_crd_chipBluePoker01x");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&Var4, Function_189(iVar0), 32);
		Function_191(&Var4);
		iVar0++;
	}
	STREAMING_EVICT_GRINGO(GET_ASSET_ID("fake_poker", 1));
	REMOVE_ACTION_TREE("custom/sit_poker");
	REMOVE_ACTION_TREE("custom/fake_poker");
	REMOVE_ANIM_SET("nsit_poker");
	REMOVE_ANIM_SET("sit_poker_gped");
	REMOVE_ANIM_SET("sit_poker_hillb");
	if (!Global_29006 != Global_30717[0])
	{
		REMOVE_ANIM_SET("sit_poker_oldm");
	}
	return;
}

var Function_189(bool bParam0) //Position: 0x9F84 / 40836
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

struct<32> Function_190(int iParam0, bool bParam1) //Position: 0xA28D / 41613
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

void Function_191(bool bParam0) //Position: 0xA459 / 42073
{
	STREAMING_EVICT_PROP(GET_ASSET_ID(bParam0, 0));
	return;
}

void Function_192(int iParam0) //Position: 0xA468 / 42088
{
	if (Function_24(iParam0, 1) && !Function_24(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_193(int iParam0) //Position: 0xA495 / 42133
{
	Function_194(&Global_28842, iParam0);
	return;
}

void Function_194(var uParam0, var uParam1) //Position: 0xA4A3 / 42147
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_195() //Position: 0xA4BE / 42174
{
	UI_EXIT("Poker_CheatCard");
	return;
}

void Function_196() //Position: 0xA4D9 / 42201
{
	Function_197(0);
	Function_197(1);
	Function_197(2);
	Function_197(3);
	Function_197(4);
	Function_197(5);
	Function_197(6);
	Function_197(7);
	Function_197(8);
	Function_197(9);
	return;
}

int Function_197(int iParam0) //Position: 0xA513 / 42259
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_198(int iParam0, bool bParam1) //Position: 0xA51F / 42271
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, 1);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, 0);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, 1);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, 0);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, 1);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, 0);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, 1);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, 1);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, 0);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, 0);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, 0);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, 0);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, 1);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, 1);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, 1);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, 0);
			}
			break;
	}
	return;
}

bool Function_199(int iParam0) //Position: 0xA692 / 42642
{
	return Function_24(uLocal_194, iParam0);
}

bool Function_200() //Position: 0xA69F / 42655
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_201() //Position: 0xA6B4 / 42676
{
	FLASH_SET_INT("numberSystem", "nshowTimer", false);
	return;
}

void Function_202() //Position: 0xA6DA / 42714
{
	Function_204();
	Function_203(uLocal_918);
	return;
}

int Function_203(bool bParam0) //Position: 0xA6EA / 42730
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_204() //Position: 0xA700 / 42752
{
	struct<17> Var0;
	
	Function_206();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_205(&Var0);
	return;
}

void Function_205(int iParam0) //Position: 0xA722 / 42786
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_206() //Position: 0xA732 / 42802
{
	Function_207();
	return;
}

void Function_207() //Position: 0xA73B / 42811
{
	Function_208(4294967286);
	return;
}

void Function_208(bool bParam0) //Position: 0xA747 / 42823
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_213(&uVar0);
		Function_212(&vVar1);
		vVar1.z = uVar0;
		Function_205(&vVar1);
	}
	Function_211(&uVar0, bParam0);
	Function_210(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_209(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0xA784 / 42884
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_210(int iParam0) //Position: 0xA797 / 42903
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_211(var uParam0, int iParam1) //Position: 0xA7A6 / 42918
{
	*uParam0 = iParam1;
	return;
}

void Function_212(int iParam0) //Position: 0xA7B1 / 42929
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_213(var uParam0) //Position: 0xA7C1 / 42945
{
	*uParam0 = Global_78480.f_120;
	return;
}

bool Function_214() //Position: 0xA7D0 / 42960
{
	return Local_230.f_176;
}

void Function_215(struct<5> Param0) //Position: 0xA7DA / 42970
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

int Function_216(int iParam0) //Position: 0xA933 / 43315
{
	int iVar0;
	
	if (Local_292.f_1388 > 0 || Local_292.f_1388 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_217() //Position: 0xA970 / 43376
{
	int iVar0[4];
	int iVar5;
	
	if (Function_241(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar0[3] = "Add 100 chips to human player";
		iVar5 = Function_227(&uLocal_179, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar5 == 0)
		{
			Function_220();
			Function_219(0);
		}
		else if (iVar5 == 1)
		{
			Function_220();
			Function_219(1);
		}
		else if (iVar5 == 2)
		{
			Function_220();
			Function_219(2);
		}
		else if (iVar5 == 3)
		{
			(&Local_292 + 12[Function_218(1)53])->f_136 += 100;
		}
	}
	return;
}

int Function_218(int iParam0) //Position: 0xAA3F / 43583
{
	int iVar0;
	
	if (Local_292.f_1384 > 0 || Local_292.f_1384 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_219(int iParam0) //Position: 0xAA7C / 43644
{
	iLocal_0 = 3;
	if (Local_230.f_180)
	{
		iLocal_1 = 10;
	}
	else
	{
		iLocal_1 = 0;
	}
	iLocal_906 = iParam0;
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

void Function_220() //Position: 0xAB6D / 43885
{
	Function_222();
	Function_221(10, 3);
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0xAB7C / 43900
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_222() //Position: 0xACB3 / 44211
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_226())
	{
		Function_225(10, 3);
	}
	else
	{
		Function_223();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_200(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_200());
	UI_POP("nDebugMenu");
	return;
}

void Function_223() //Position: 0xACFE / 44286
{
	Function_224(25, 2);
	return;
}

void Function_224(int iParam0, int iParam1) //Position: 0xAD0A / 44298
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_225(int iParam0, int iParam1) //Position: 0xAF08 / 44808
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_226() //Position: 0xB03F / 45119
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_24(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB0A6 / 45222
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_240(&Var15, &Var0);
	uVar20 = Function_239(*uParam1, &Var15);
	Function_238(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_237(uParam0, uVar20);
	Function_235(StackVal, uParam0, Var15.f_12);
	Function_233(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_232(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_229(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_228(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_228(int iParam0, int iParam1, int iParam2) //Position: 0xB16D / 45421
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_229(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB1C9 / 45513
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_231(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_231(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_228(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_230(bParam1->f_32);
	}
	else
	{
		Function_230(bParam1->f_32);
	}
	return 0;
}

void Function_230(bool bParam0) //Position: 0xB34F / 45903
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_231(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB389 / 45961
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_232(int iParam0, var uParam1, int iParam2) //Position: 0xB437 / 46135
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_233(var uParam0, int iParam1, int iParam2) //Position: 0xB45B / 46171
{
	switch (Function_234())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_234() //Position: 0xB4F7 / 46327
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

void Function_235(var uParam0, int iParam1, int iParam2) //Position: 0xB533 / 46387
{
	switch (Function_236(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_236(int iParam0) //Position: 0xB5CB / 46539
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_200()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_24(*iParam0, 0x40000000))
		{
			Function_77(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_24(*iParam0, 0x40000000))
		{
			Function_77(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_12(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_200()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_24(*iParam0, 0x20000000))
		{
			Function_77(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_24(*iParam0, 0x20000000))
		{
			Function_77(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_12(iParam0, 0x20000000);
	return 0;
}

var Function_237(var uParam0, int iParam1) //Position: 0xB716 / 46870
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_238(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB865 / 47205
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_239(int iParam0, int iParam1) //Position: 0xB8F8 / 47352
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_240(var uParam0, int iParam1) //Position: 0xB912 / 47378
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_241(int iParam0) //Position: 0xB960 / 47456
{
	if (!Function_242(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_242(int iParam0) //Position: 0xB974 / 47476
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_243() //Position: 0xB998 / 47512
{
	int iVar0;
	
	if (IS_DEBUGKEY_PRESSED(38))
	{
		Function_497(StackVal, GET_GRINGO_FROM_OBJECT(&cLocal_195));
	}
	if (Function_214())
	{
		Function_495(3);
		Function_494();
		Function_491(uLocal_918, &Local_292);
	}
	fLocal_196 = (GET_CURRENT_GAME_TIME() - fLocal_197);
	if (fLocal_196 < 0.033333f)
	{
		fLocal_196 = 0.0333333f;
	}
	Function_72(425, fLocal_196, 0);
	fLocal_197 = GET_CURRENT_GAME_TIME();
	if (IS_EXITFLAG_SET())
	{
		Function_490();
		return 0;
	}
	if (!IS_SCRIPT_VALID(uLocal_904))
	{
		iVar0 = 0;
		while (iVar0 <= Local_230.f_12)
		{
			if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar0]))
			{
				if (GET_LAST_ATTACKER((*&Local_230 + 12)[iVar0]) == Function_200())
				{
					Function_490();
					return 0;
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
			if (Function_488())
			{
				if (!Local_230.f_180)
				{
					Function_486();
				}
				UI_PUSH("Minigame");
				Function_483(&Local_292);
				Function_482(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1396));
				iLocal_0 = 0;
			}
			else if (Function_480(&iLocal_191) < 15.0f)
			{
				if (!Local_230.f_180)
				{
					Function_486();
				}
				UI_PUSH("Minigame");
				Function_219(2);
			}
			break;
		
		case 0x00000000:
			Function_468();
			break;
		
		case 0x00000001:
			Function_268();
			break;
		
		case 0x00000003:
			Function_253();
			break;
		
		case 0x00000029:
			if (Function_246(&uLocal_199, &iLocal_191))
			{
				Function_219(0);
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
		Function_244();
		return 0;
	}
	if (bLocal_3)
	{
		Function_490();
		return 0;
	}
	return 1;
}

void Function_244() //Position: 0xBB21 / 47905
{
	if (Global_29006 == Global_30640[0])
	{
		Function_245(0, Global_30640[0]);
	}
	if (Global_29006 == Global_30717[0])
	{
		Function_245(0, Global_30717[0]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xBB59 / 47961
{
	if (!Function_148(3))
	{
		return;
	}
	if (Function_42())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3() || Function_150())
				{
					Function_156(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_156(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_156(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_156(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_156(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_156(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_156(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
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

bool Function_246(var uParam0, int iParam1) //Position: 0xBC6B / 48235
{
	*uParam0 = { StackVal, StackVal, StackVal, *uParam0 };
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
				Function_197(6);
				Function_197(5);
				Function_197(4);
				Function_197(3);
				Function_197(2);
				Function_197(1);
				Function_197(0);
				Function_140("Minigame_EveryoneLeft", 0x41200000, 1, 0, 2, 1, 0);
				Function_251(iParam1);
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_247(iParam1, 10.5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_247(int iParam0, float fParam1) //Position: 0xBD0C / 48396
{
	if (Function_249(iParam0, fParam1))
	{
		Function_248(iParam0);
		return 1;
	}
	return 0;
}

void Function_248(int iParam0) //Position: 0xBD24 / 48420
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_249(int iParam0, float fParam1) //Position: 0xBD38 / 48440
{
	if (Function_250(iParam0))
	{
		if (Function_480(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_250(int iParam0) //Position: 0xBD54 / 48468
{
	return Function_24(*iParam0, 1);
}

void Function_251(int iParam0) //Position: 0xBD61 / 48481
{
	Function_252(iParam0, 0.0f);
	return;
}

void Function_252(int iParam0, float fParam1) //Position: 0xBD6D / 48493
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(iParam0, 1);
	Function_12(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_253() //Position: 0xBD8E / 48526
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (!HUD_IS_FADING())
			{
				if (!Function_214())
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				if (iLocal_906 == 1)
				{
					if (Global_29004 == 0)
					{
						AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0f, 0f, 0, 0);
					}
					else if (Global_29004 == 1)
					{
						AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0f, 0f, 0, 0);
					}
					else if (Global_29004 == 2)
					{
						AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0f, 0f, 0, 0);
					}
				}
				START_MINIGAME(5);
				UI_EXIT("Scores");
				UI_EXIT("BetPanel");
				Function_196();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				UI_EXIT("Poker_CheatMeter");
				if (Local_292.f_1364 != 4294967295)
				{
					Function_195();
				}
				if (Function_199(32768))
				{
					Function_267(32768);
				}
				iLocal_1 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_199(8192))
			{
				EQUIP_ACCESSORY(Function_200(), 1, 1);
			}
			Function_263();
			if ((*&Local_292 + 1288)[Local_292.f_13843])
			{
				Function_262(StackVal, GET_GRINGO_FROM_OBJECT(&cLocal_195));
				Function_259(&Local_292, Function_218(1), 1);
			}
			if (Function_214())
			{
				iLocal_1 = 9;
			}
			else
			{
				iLocal_1 = 7;
			}
			break;
		
		case 0x00000007:
			if (!Function_199(8388608))
			{
				Function_257();
			}
			Function_256(&Local_292);
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "sit_poker/Player/leave_game/stand") && Function_255())
			{
				iLocal_1 = 9;
			}
			break;
		
		case 0x00000009:
			if (iLocal_906 == 0)
			{
				iLocal_2 = 1;
			}
			else if (iLocal_906 == 1)
			{
				bLocal_3 = true;
			}
			else if (iLocal_906 == 2)
			{
				Function_1();
			}
			break;
		
		case 0x0000000A:
			Function_254(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_254(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xBFC8 / 49096
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

int Function_255() //Position: 0xBFF1 / 49137
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_230.f_12)
	{
		if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar0]))
		{
			if (IS_ACTION_NODE_PLAYING((*&Local_230 + 12)[iVar0], "sit_poker/Player/leave_game/stand"))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_256(int iParam0) //Position: 0xC050 / 49232
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
	if (IS_OBJECT_VALID(bLocal_282))
	{
		DESTROY_OBJECT(bLocal_282);
	}
	if (IS_OBJECT_VALID(bLocal_283))
	{
		DESTROY_OBJECT(bLocal_283);
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

void Function_257() //Position: 0xC18B / 49547
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_292.f_1288)
	{
		if ((*&Local_292 + 1288)[iVar03])
		{
			Function_258(GET_GRINGO_FROM_OBJECT(StackVal));
			if (IS_ACTOR_VALID((*&Local_292 + 12)[StackVal53]))
			{
				RESET_ANIM_SET_FOR_ACTOR((*&Local_292 + 12)[StackVal53], 1);
				SET_ANIM_SET_FOR_ACTOR((*&Local_292 + 12)[StackVal53], "sit_poker_ambient", 0);
				while (!ACTOR_HAS_ANIM_SET((*&Local_292 + 12)[StackVal53], "sit_poker_ambient") && !IS_EXITFLAG_SET())
				{
					WAIT(0);
				}
				SET_AUTO_CONVERSATION_LOOK((*&Local_292 + 12)[StackVal53], 1);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[StackVal53], "sit_poker/Fake/card_idle");
				TASK_PRIORITY_SET((*&Local_292 + 12)[StackVal53], 2);
			}
		}
		iVar0++;
	}
	return;
}

void Function_258(int iParam0) //Position: 0xC2BD / 49853
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(iParam0, "UseCase1");
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, uVar0, 0);
	while (iVar1 >= 4294967295)
	{
		uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, uVar0);
		uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(uVar2, iParam0);
		if (IS_PHYSINST_VALID(uVar3))
		{
			SHOW_PHYSINST(uVar3);
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, uVar0, iVar1 + 1);
	}
	return;
}

void Function_259(int iParam0, int iParam1, bool bParam2) //Position: 0xC32C / 49964
{
	int iVar0;
	
	(*iParam0 + 1288)[(iParam0 + 12[iParam153])->f_1323] = 0;
	(iParam0 + 1288[(iParam0 + 12[iParam153])->f_1323])->f_4 = 4294967295;
	if (bParam2)
	{
		if (IS_ACTOR_VALID((*iParam0 + 12)[iParam153]))
		{
			TASK_CLEAR((*iParam0 + 12)[iParam153]);
			if ((iParam0 + 12[iParam153])->f_128 == 3)
			{
				RELEASE_ACTOR((*iParam0 + 12)[iParam153]);
				TASK_FLEE_ACTOR((*iParam0 + 12)[iParam153], Function_200(), 30.0f, -1.0f, 0, 0, 0);
			}
			else if (!IS_ACTOR_PLAYER((*iParam0 + 12)[iParam153]))
			{
				TASK_WANDER((*iParam0 + 12)[iParam153], -1f);
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS((*iParam0 + 12)[iParam153], 1);
			Function_261(iParam0 + 12[iParam153]);
			ACTOR_END_FORCE_HOLSTER((*iParam0 + 12)[iParam153]);
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[iParam153], "sit_poker/Player/leave_game/stand");
		}
		(*iParam0 + 12)[iParam153] = "";
		strcpy(iParam0 + 12[iParam153] + 4, "", 32);
	}
	(*iParam0 + 1288)[(iParam0 + 12[iParam153])->f_1323] = 0;
	(iParam0 + 12[iParam153])->f_132 = 4294967295;
	Function_260(iParam0 + 12[iParam153] + 36);
	if (IS_ACTOR_VALID((*iParam0 + 12)[iParam153]))
	{
		SET_AUTO_CONVERSATION_LOOK((*iParam0 + 12)[iParam153], 1);
	}
	(iParam0 + 12[iParam153])->f_136 = 1000;
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

void Function_260(int iParam0) //Position: 0xC4CE / 50382
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

void Function_261(int iParam0) //Position: 0xC530 / 50480
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

void Function_262(var uParam0, bool bParam1) //Position: 0xC572 / 50546
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
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
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

void Function_263() //Position: 0xC6FD / 50941
{
	int iVar0;
	bool bVar1;
	
	if (StackVal && !Function_265(StackVal, Function_28(Function_30(iLocal_906 != 0))))
	{
		Function_89(410, 1, 0, 0);
		Function_88(6, 10);
	}
	if ((*&Local_292 + 1288)[Local_292.f_13843])
	{
		if (!Function_214())
		{
			iVar0 = ((&Local_292 + 12[Function_218(1)53])->f_136 - (*&Local_230 + 40)[Local_292.f_1384]);
			bVar1 = (iVar0 / 10);
			if (bVar1 <= 0)
			{
				Function_119(411, bVar1, 0);
				Function_119(450, bVar1, 0);
				if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 509, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			else
			{
				Function_89(411, bVar1, 0, 0);
				Function_89(450, bVar1, 0, 0);
				if ((Function_67(597) + Function_67(450)) >= 10000)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
					{
						AWARD_ACHIEVEMENT(24);
					}
				}
				if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 510, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
		}
	}
	else if (!Function_214())
	{
		Function_119(411, ((*&Local_230 + 40)[Local_292.f_1384] / 10), 0);
		Function_119(450, ((*&Local_230 + 40)[Local_292.f_1384] / 10), 0);
	}
	return;
}

bool Function_264(int iParam0) //Position: 0xC844 / 51268
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

bool Function_265(int iParam0, int iParam1) //Position: 0xC886 / 51334
{
	int iVar0;
	
	if (!Function_266(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_30(iVar0) != iParam0 && Function_28(iVar0) != iParam1)
		{
			if (Function_87(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_266(int iParam0) //Position: 0xC8CB / 51403
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_267(int iParam0) //Position: 0xC8E0 / 51424
{
	Function_12(&uLocal_194, iParam0);
	return;
}

void Function_268() //Position: 0xC8ED / 51437
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
	int iVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	bool bVar58;
	bool bVar59;
	int iVar60;
	int iVar61;
	vector3 vVar62;
	var uVar65;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	float fVar75;
	int iVar76;
	bool bVar77;
	vector3 vVar78;
	float fVar81;
	float fVar82;
	float fVar83;
	struct<53> Var84;
	
	if (Function_214())
	{
		Function_463();
	}
	if (Function_199(2))
	{
		Function_252(&iLocal_191, (Function_480(&iLocal_191) + 0.2f));
	}
	Function_458(&Local_292);
	Function_455(&Local_292);
	if (((!iLocal_901 != 47 && !iLocal_901 != 48) && !iLocal_901 != 49) && !iLocal_901 != 50)
	{
		if (HUD_IS_SHOWING_HELP_TEXT() && !(iLocal_901 != 8 || iLocal_901 != 10))
		{
			if (IS_BUTTON_PRESSED(Function_454(), 6, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_453(&uLocal_286);
				if (Global_28178 == 3)
				{
					Function_452(&uLocal_286, 17);
					Function_452(&uLocal_286, 6);
				}
			}
		}
	}
	if (!Function_214())
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			if ((((((((iLocal_901 == 10 && iLocal_901 == 47) && iLocal_901 == 48) && iLocal_901 == 49) && iLocal_901 == 50) && iLocal_901 == 53) && iLocal_901 == 42) && iLocal_901 == 43) && iLocal_901 == 45)
			{
				if (IS_BUTTON_PRESSED(Function_454(), 3, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					bLocal_903 = iLocal_901;
					Function_451(51, 0);
					Function_450(32768);
				}
			}
		}
	}
	switch (iLocal_901)
	{
		case 0x00000000:
			iVar21 = 0;
			while (iVar21 <= 6)
			{
				if ((*&Local_292 + 1288)[iVar213])
				{
					PRINTSTRING(GET_ACTOR_ENUM_STRING((*&Local_292 + 12)[StackVal53]));
					PRINTSTRING(" has chip count of ");
					PRINTINT((&Local_292 + 12[StackVal53])->f_136);
					PRINTNL();
					bVar20 = (StackVal + (&Local_292 + 12[bVar2053])->f_136);
				}
				iVar21++;
			}
			PRINTSTRING("The sum of all chips is ");
			PRINTINT(bVar20);
			PRINTNL();
			PRINTSTRING("The pot is worth ");
			PRINTINT(Local_292.f_1944);
			PRINTNL();
			switch (Local_292.f_1940)
			{
				case 0x00000000:
					iVar22 = Function_449(&Local_292 + 1288, Local_292.f_1388);
					if (iVar22 != 4294967295)
					{
						iVar23 = StackVal;
						if (iVar23 == 4294967295)
						{
						}
					}
					if (Function_218(0) >= 4294967295)
					{
						Function_447(&Local_292, &cLocal_195, iVar23, Function_218(0), 1);
					}
					iLocal_907 = 0;
					Function_267(2);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_216(1)53], "sit_poker/dealer/idle");
					if (Local_230 && Local_292.f_1388 != Local_292.f_1384)
					{
						if (Function_441(&cLocal_195))
						{
							Local_230 = 0;
							HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
							HUD_FADE_IN(1.0f, 1065353216);
							Function_451(1, 0);
						}
					}
					else
					{
						if (!IS_OBJECT_VALID(bLocal_282))
						{
							strcpy(&cVar30, "deck", 64);
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bLocal_282 = CREATE_PROP_IN_LAYOUT(bLocal_190, &cVar30, "$/fragments/p_gen_cards02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
							if (IS_ATTACHMENT_VALID(uLocal_880))
							{
								REMOVE_OBJECT_ATTACHMENT(uLocal_880);
							}
							Function_440((*&Local_292 + 12)[Function_216(1)53], &vVar24, &vVar27);
							SET_OBJECT_POSITION(bLocal_282, vVar24);
							SET_OBJECT_ORIENTATION(bLocal_282, vVar27);
							Function_439(bLocal_282, (*&Local_292 + 12)[Function_216(1)53]);
							NET_OBJECT_REPLICATION_MODE_END(17);
							Function_437(&Local_292);
						}
						else
						{
							if (IS_ATTACHMENT_VALID(uLocal_880))
							{
								REMOVE_OBJECT_ATTACHMENT(uLocal_880);
							}
							Function_440((*&Local_292 + 12)[Function_216(1)53], &vVar24, &vVar27);
							SET_OBJECT_POSITION(bLocal_282, vVar24);
							SET_OBJECT_ORIENTATION(bLocal_282, vVar27);
						}
						if (HUD_IS_FADED())
						{
							if (!Function_199(32768))
							{
								HUD_FADE_IN(1.0f, 1065353216);
							}
						}
						Function_182(8, 0);
						if (Function_214())
						{
							Function_267(256);
							NET_LOG(false, "Poker", "!!!PKR_WAIT_FOR_REMOTE_DEAL!!!", false, false, false, false);
							Function_451(14, 0);
						}
						else
						{
							Function_451(1, 0);
						}
					}
					break;
				
				case 0x00000001:
					Function_436(&Local_292);
					Function_451(15, 0);
					break;
				
				case 0x00000002:
					Function_435(&Local_292);
					Function_451(15, 0);
					break;
				
				case 0x00000003:
					Function_432(&Local_292);
					Function_451(15, 0);
					break;
			}
			break;
		
		case 0x00000001:
			Function_431(&Local_292);
			Function_251(&iLocal_191);
			Function_451(2, 0);
			break;
		
		case 0x00000002:
			if ((Function_480(&iLocal_191) < 1.5f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_199(32768))
			{
				Function_451(3, 0);
			}
			break;
		
		case 0x00000003:
			if (((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_292 + 12)[Function_216(1)53], "sit_poker/dealer/idle") || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_292 + 12)[Function_216(1)53], "sit_poker/Player/card_idle")) || Function_430((*&Local_292 + 12)[Function_216(1)53])) || Function_429((*&Local_292 + 12)[Function_216(1)53]))
			{
				Function_428(&Local_292);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_pre");
				Function_251(&iLocal_191);
				Function_451(4, 0);
			}
			break;
		
		case 0x00000004:
			if (!IS_ATTACHMENT_VALID(uLocal_880))
			{
				if (DECOR_CHECK_EXIST((*&Local_292 + 12)[Function_216(1)53], "bPokerAttachDeck"))
				{
					uLocal_880 = ATTACH_OBJECTS_NO_DRV(bLocal_282, GET_OBJECT_FROM_ACTOR((*&Local_292 + 12)[Function_216(1)53]), "elbow_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				}
			}
			if (((Function_480(&iLocal_191) < 1.5f && !HUD_IS_SHOWING_HELP_TEXT()) && IS_ATTACHMENT_VALID(uLocal_880)) || Function_199(32768))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_427(&cLocal_195, (*&Local_292 + 12)[Function_216(1)53]);
				Function_451(5, 0);
			}
			break;
		
		case 0x00000005:
			if (!IS_ATTACHMENT_VALID(uLocal_880))
			{
				uLocal_880 = ATTACH_OBJECTS_NO_DRV(bLocal_282, GET_OBJECT_FROM_ACTOR((*&Local_292 + 12)[Function_216(1)53]), "elbow_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			}
			iLocal_907 = 1;
			if ((Function_199(32768) && Function_216(1) != Function_218(1)) && Global_28178 != 3)
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
				Function_267(32768);
			}
			if (!HUD_IS_FADING())
			{
				Function_196();
				if (Function_214())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (Function_216(0) >= 4294967295)
					{
						if (Function_216(0) == Function_218(0))
						{
							PRINT_OBJECTIVE_FORMAT(2.5f, "Poker_Player_Is_DealerSelf", Function_425(), 0, 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(Function_216(1), &Local_292) };
							PRINT_OBJECTIVE_FORMAT(2.5f, "Poker_Player_Is_Dealer", &Var4, 0, 0, 0, 0, 2, 0, 0, 0);
						}
					}
				}
				Function_251(&iLocal_191);
				if (!Function_199(32768))
				{
					if (Function_218(1) == Function_216(1))
					{
						if (Function_415(&uLocal_286, 6))
						{
							if (Function_214() || Global_28178 == 3)
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
				if (Local_230.f_180)
				{
					if (Local_230.f_160 < 0)
					{
						DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "begincomments", 1);
					}
					else if (Function_413())
					{
						DECOR_SET_BOOL(Function_200(), "nexthand", 1);
					}
					else if (Function_413())
					{
						if (Function_412(&Local_292) != 4294967295)
						{
							DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "nexthand", 1);
						}
					}
					else
					{
						DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "nexthand", 1);
					}
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (Function_411())
					{
						SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_216(1)53], 281, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Local_292.f_1384 == Local_292.f_1388)
					{
						SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 491, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 492, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				iLocal_229 = 0;
				Function_451(6, 0);
			}
			break;
		
		case 0x0000000F:
			bVar46 = false;
			switch (Local_292.f_1940)
			{
				case 0x00000001:
					if ((&Local_292 + 1824)->f_84 == 3)
					{
						if (!Function_199(2) && !Function_199(32768))
						{
							if (Function_415(&uLocal_286, 10))
							{
								Function_140("Poker_FlopHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar46 = true;
					}
					break;
				
				case 0x00000002:
					if ((&Local_292 + 1824)->f_84 == 4)
					{
						if (!Function_199(2) && !Function_199(32768))
						{
							if (Function_415(&uLocal_286, 11))
							{
								Function_140("Poker_TurnHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						bVar46 = true;
					}
					break;
				
				case 0x00000003:
					if ((&Local_292 + 1824)->f_84 == 5)
					{
						if (!Function_199(2) && !Function_199(32768))
						{
							if (Function_415(&uLocal_286, 12))
							{
								Function_140("Poker_RiverHelp", 9.0f, 1, 0, 2, 1, 0);
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
				Function_410(&cLocal_195, &Local_292, 0);
				Function_251(&iLocal_191);
				iLocal_905 = 0;
				Function_405(&Local_292);
				Function_451(6, 0);
			}
			break;
		
		case 0x00000006:
			if (Local_292.f_1940 == 0)
			{
				fVar47 = -1.0f;
				bVar48 = true;
				if (Local_230.f_180 && Function_480(&iLocal_191) < 1.0f)
				{
					if (Function_412(&Local_292) != 4294967295)
					{
						if (!DECOR_CHECK_EXIST((*&Local_292 + 12)[Function_412(&Local_292)53], "nexthand"))
						{
							DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "nexthand", 1);
						}
					}
				}
			}
			else
			{
				if (Function_199(32768))
				{
					fVar47 = -1.0f;
				}
				else
				{
					fVar47 = 2.0f;
				}
				iVar49 = iLocal_905;
				if (iVar49 <= 5)
				{
					if ((*&Local_292 + 1288)[iVar493])
					{
						if (StackVal && Function_404(&Local_292 + 12[(&Local_292 + 12[StackVal53])->f_128 != 053]))
						{
							iVar50 = StackVal;
							bVar48 = Function_399(&Local_292 + 12[iVar5053] + 36, &Local_292 + 1824, &Local_292 + 12[iVar5053] + 208);
							if (bVar48)
							{
								iLocal_905++;
								bVar48 = false;
							}
						}
						else
						{
							iLocal_905++;
							bVar48 = false;
						}
					}
					else
					{
						iLocal_905++;
						bVar48 = false;
					}
				}
				else
				{
					bVar48 = true;
				}
			}
			if (Function_480(&iLocal_191) < fVar47 && bVar48)
			{
				if ((Function_391(&Local_292) && (!HUD_IS_SHOWING_HELP_TEXT() || Function_199(32768))) || Function_199(64))
				{
					if (Local_292.f_1940 == 0)
					{
						Function_389(&Local_292);
					}
					if (Local_230.f_180)
					{
						if (Function_413())
						{
							if (Function_412(&Local_292) != 4294967295)
							{
								if ((&Local_292 + 12[Function_412(&Local_292)53] + 36)->f_84 >= 0)
								{
									DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "rechand", 1);
								}
							}
						}
						else if ((&Local_292 + 12[Function_414(&Local_292)53] + 36)->f_84 >= 0)
						{
							DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "rechand", 1);
						}
					}
					else if (Function_264(&Local_292) && !HUD_IS_FADED())
					{
						iVar51 = Function_388(&Local_292);
						SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[iVar5153], 282, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					Function_450(1024);
					Function_451(7, 1);
					CANCEL_TIME_WARP(0);
				}
			}
			if ((((Local_292.f_1388 != Local_292.f_1384 && !Function_214()) && !Local_230.f_180) && Local_292.f_1940 != 0) && Global_28178 != 3)
			{
				if (IS_BUTTON_PRESSED(Function_454(), 4, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					if (Global_28178 == 3)
					{
						Function_387(&Local_881);
					}
					else
					{
						Function_386(&Local_881);
					}
					Function_89(470, 1, 0, 0);
					iLocal_907 = 2;
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_385("Poker_CheatObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_451(46, 0);
				}
			}
			break;
		
		case 0x00000007:
			Function_196();
			Function_195();
			CANCEL_TIME_WARP(0);
			if (Function_404(&Local_292 + 12[Function_384(1)53]))
			{
				bVar52 = ((&Local_292 + 12[Function_384(1)53])->f_136 < 0 && (Function_383(&Local_292) < 1 || Local_292.f_1948 < 0));
				bVar53 = true;
				switch ((&Local_292 + 12[Function_384(1)53])->f_128)
				{
					case 0x00000000:
						if (bVar52)
						{
							if (!Function_382(&Local_292))
							{
								Function_447(&Local_292, &cLocal_195, Function_384(1), Function_218(0), bVar53);
								Function_267(1024);
							}
							if (Function_199(1))
							{
								Function_451(8, 0);
							}
							else
							{
								PRINTSTRING("------------------------ AI  ");
								PRINTINT(StackVal);
								PRINTSTRING(" ------------------------");
								PRINTNL();
								PRINTSTRING("nBoard is ");
								Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1824));
								PRINTSTRING("Player Hand is ");
								Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 12[Function_384(1)53] + 36));
								Function_251(&iLocal_191);
								Function_451(11, 0);
							}
						}
						else
						{
							NET_LOG(false, "Poker", "AI Player had no chips or nobody else did", false, false, false, false);
							Function_451(23, 0);
						}
						break;
					
					case 0x00000001:
						if (bVar52 || Local_292.f_1364 == 4294967295)
						{
							if (!Function_382(&Local_292))
							{
								Function_267(1024);
							}
							PRINTSTRING("------------------------ Player  ");
							PRINTINT(StackVal);
							PRINTSTRING(" ------------------------");
							PRINTNL();
							PRINTSTRING("nBoard is ");
							Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1824));
							PRINTSTRING("Player Hand is ");
							Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 12[Function_384(1)53] + 36));
							Function_451(8, 0);
							Function_251(&iLocal_191);
						}
						else
						{
							NET_LOG(false, "Poker", "Local Player had no chips or nobody else did", false, false, false, false);
							Function_451(23, 0);
						}
						break;
					
					case 0x00000002:
						if (bVar52)
						{
							if (!Function_382(&Local_292))
							{
								Function_447(&Local_292, &cLocal_195, Function_384(1), Function_218(0), bVar53);
								Function_267(1024);
							}
							PRINTSTRING("------------------------ Remote Player  ");
							PRINTINT(StackVal);
							PRINTSTRING(" ------------------------");
							PRINTNL();
							PRINTSTRING("nBoard is ");
							Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1824));
							PRINTSTRING("Player Hand is ");
							Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 12[Function_384(1)53] + 36));
							Function_451(12, 0);
						}
						else
						{
							NET_LOG(false, "Poker", "Remote Player had no chips or nobody else did", false, false, false, false);
							Function_451(23, 0);
						}
						break;
					
					case 0x00000003:
						NET_LOG(false, "Poker", "Encountered Linkdead player", false, false, false, false);
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(Function_384(1), &Local_292) };
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds", &Var4, "", "", "", 0, 2, 0, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/bet_request/fold_B");
						Function_380(&Local_292 + 12[Function_384(1)53]);
						Function_251(&iLocal_191);
						Function_451(21, 0);
						break;
				}
			}
			else
			{
				NET_LOG(false, "Poker", "Player had no hand", false, false, false, false);
				Function_451(23, 0);
			}
			break;
		
		case 0x0000000C:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(Function_384(1), &Local_292) };
			PRINT_OBJECTIVE_FORMAT(40.0f, "Minigame_Turn", &Var4, "", "", "", 0, 2, 0, 0, 0);
			Function_251(&iLocal_191);
			Function_451(13, 0);
			break;
		
		case 0x0000000D:
			Function_379(&Local_292);
			if ((&Local_292 + 12[Function_384(1)53])->f_128 == 3)
			{
				Local_916 = 2;
			}
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(Function_384(1), &Local_292) };
			switch (Local_916)
			{
				case 0x00000000:
				case 0x00000004:
					break;
				
				case 0x00000003:
					Function_377(StackVal, &Local_292, Function_384(1), 0, 0);
					Function_451(20, 0);
					Function_251(&iLocal_191);
					Local_916 = 0;
					break;
				
				case 0x00000002:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_451(21, 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/bet_request/fold_B");
					Function_380(&Local_292 + 12[Function_384(1)53]);
					Function_251(&iLocal_191);
					Local_916 = 0;
					break;
				
				case 0x00000001:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_451(21, 0);
					iVar54 = RAND_INT_RANGE(false, 100);
					if (iVar54 <= 50)
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/player/bet_request/fold");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/bet_request/fold_B");
					}
					Function_380(&Local_292 + 12[Function_384(1)53]);
					Function_251(&iLocal_191);
					Local_916 = 0;
					break;
				
				case 0x00000005:
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Left_Table", &Var4, "", "", "", 0, 2, 0, 0, 0);
					Function_259(&Local_292, Function_384(1), 1);
					Local_916 = 0;
					Function_251(&iLocal_191);
					Function_451(22, 0);
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
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_1", "%s %s", UI_GET_STRING("Poker_FoldButton"), "<x>", 0);
			UI_SET_TEXT("BetPanel_1", "GENERIC_DBUFFER32_1");
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CheckButton"), "<action>", 0);
			UI_SET_TEXT("BetPanel_2", "GENERIC_DBUFFER32_0");
			iLocal_907 = 4;
			if (Function_199(32768))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
				Function_267(32768);
			}
			Function_376(&Local_292, Function_218(0));
			if (Function_214())
			{
				Function_375();
			}
			if (!Function_199(32768))
			{
				if (Function_415(&uLocal_286, 3))
				{
					Function_140("Poker_PlayerHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			Function_374();
			if (!Local_292.f_1364 != 4294967295)
			{
				Function_373(StackVal, *(&Local_292 + 1364));
			}
			if (!IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/look_at_cards/open_pre") && !IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/look_at_cards/open_mid"))
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/player/look_at_cards");
				Function_380(&Local_292 + 12[Function_384(1)53]);
			}
			Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 12[Function_384(1)53] + 36));
			bLocal_878 = (Local_292.f_1948 - (&Local_292 + 12[Function_384(1)53])->f_140);
			Function_371(&Local_292 + 12[Function_384(1)53] + 36, &Local_292 + 1824, &uVar55, &uVar56, &uVar57);
			bLocal_878 = (Local_292.f_1948 - (&Local_292 + 12[Function_384(1)53])->f_140);
			bLocal_878 = Function_369(&Local_292, bLocal_878, 1);
			UI_LABEL_SET_VALUE("nBetAmount", bLocal_878);
			Function_451(10, 0);
			if (Local_881.f_60 == 1)
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/player/bet_request/fold");
				Function_380(&Local_292 + 12[Function_384(1)53]);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(Function_384(1), &Local_292) };
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var4, "", "", "", 0, 2, 0, 0, 0);
				Local_881.f_60 = 0;
				Function_251(&iLocal_191);
				Function_427(&cLocal_195, (*&Local_292 + 12)[Function_384(1)53]);
				Function_451(21, 0);
			}
			break;
		
		case 0x0000000A:
			bVar58 = true;
			bVar59 = bLocal_878;
			if (!IS_BUTTON_DOWN(Function_454(), 9, 1, 0))
			{
				if (Function_383(&Local_292) < 1 && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
				{
					if ((GET_STICK_Y(Function_454(), 0, 1) > -0.2f || IS_BUTTON_PRESSED(Function_454(), 12, 1, 0)) || IS_BUTTON_DOWN(Function_454(), 12, 1, 0))
					{
						if (iLocal_291 == 1)
						{
							fLocal_900 = (fLocal_900 - 0.008f);
						}
						else
						{
							fLocal_900 = 0.2f;
						}
						iLocal_291 = 1;
						if (Function_480(&iLocal_288) < fLocal_900)
						{
							if (fLocal_900 < 0.0f)
							{
								bLocal_878++;
							}
							else if (fLocal_900 < -0.5f)
							{
								bLocal_878 += 10;
							}
							else
							{
								bLocal_878 += 100;
							}
							bLocal_878 = Function_369(&Local_292, bLocal_878, 1);
							UI_LABEL_SET_VALUE("nBetAmount", bLocal_878);
							Function_251(&iLocal_288);
						}
					}
					else if ((GET_STICK_Y(Function_454(), 0, 1) < 0.2f || IS_BUTTON_PRESSED(Function_454(), 14, 1, 0)) || IS_BUTTON_DOWN(Function_454(), 14, 1, 0))
					{
						if (iLocal_291 == 4294967295)
						{
							fLocal_900 = (fLocal_900 - 0.008f);
						}
						else
						{
							fLocal_900 = 0.2f;
						}
						iLocal_291 = 4294967295;
						if (Function_480(&iLocal_288) < fLocal_900)
						{
							if (fLocal_900 < 0.0f)
							{
								bLocal_878 = (bLocal_878 - 1);
							}
							else if (fLocal_900 < -0.5f)
							{
								bLocal_878 = (bLocal_878 - 10);
							}
							else
							{
								bLocal_878 = (bLocal_878 - 100);
							}
							bLocal_878 = Function_369(&Local_292, bLocal_878, 0);
							UI_LABEL_SET_VALUE("nBetAmount", bLocal_878);
							Function_251(&iLocal_288);
						}
					}
					else
					{
						iLocal_291 = 0;
						fLocal_900 = 0.2f;
					}
				}
			}
			bVar59 = (bVar59 - bLocal_878);
			if (bVar59 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			if (((IS_BUTTON_PRESSED(Function_454(), 7, 1, 0) || Function_368(&iLocal_191)) && Function_367(&Local_292)) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				if (Function_214())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (Function_249(&iLocal_191, 30.0f))
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_AutoFolds_Self", Function_425(), 0, 0, 0, 0, 2, 0, 0, 0);
						Function_366(2, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds_Self", Function_425(), 0, 0, 0, 0, 2, 0, 0, 0);
						Function_366(1, 0);
					}
				}
				else
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds_Self", Function_425(), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				iVar60 = RAND_INT_RANGE(false, ((100 * (&Local_292 + 12[Function_384(1)53])->f_152) / Function_365(&Local_292)));
				if (iVar60 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/player/bet_request/fold");
				}
				Function_380(&Local_292 + 12[Function_384(1)53]);
				Function_251(&iLocal_191);
				if (!Function_199(32768))
				{
					if (Function_415(&uLocal_286, 2))
					{
						Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_384(1)53], 507, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				if (Function_214())
				{
					Function_201();
					Function_363();
				}
				iLocal_907 = 0;
				UI_EXIT("BetPanel");
				Function_451(21, 0);
				bVar58 = false;
			}
			else if (IS_BUTTON_PRESSED(Function_454(), 6, 1, 0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/look_at_cards/open_pst");
				bVar58 = false;
				iLocal_907 = 0;
				Function_451(19, 0);
				if (Function_214())
				{
					Function_363();
					Function_201();
				}
			}
			else if ((((!(Function_214() || Local_230.f_180) && IS_BUTTON_PRESSED(Function_454(), 4, 1, 0)) && !Local_292.f_1364 != 4294967295) && Global_28178 != 3) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
			{
				Function_196();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_ChooseCard", 4.0f, 1, 2, 0, 0, 0, 0);
				iLocal_899 = 3;
				Function_89(470, 1, 0, 0);
				iLocal_907 = 5;
				Function_451(42, 0);
				bVar58 = false;
			}
			if (Function_480(&iLocal_191) < 30.0f)
			{
				if (Local_230.f_180)
				{
					if (Function_413())
					{
						if (Function_412(&Local_292) != 4294967295)
						{
							DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "toolong", 1);
						}
					}
					else
					{
						DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "toolong", 1);
					}
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					iVar61 = Function_388(&Local_292);
					SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[iVar6153], 291, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_251(&iLocal_191);
			}
			if (bVar58)
			{
			}
			else
			{
				Function_196();
			}
			if (bLocal_878 >= 0)
			{
				if ((&Local_292 + 12[Function_384(1)53])->f_136 == bLocal_878)
				{
					UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_AllInButton"), "<action>", 0);
				}
				else if (Local_292.f_1948 >= 0)
				{
					if (((&Local_292 + 12[Function_384(1)53])->f_140 + bLocal_878) >= Local_292.f_1948)
					{
						UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_RaiseButton"), "<action>", 0);
					}
					else
					{
						UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CallButton"), "<action>", 0);
					}
				}
				else
				{
					UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_BetButton"), "<action>", 0);
				}
			}
			else
			{
				UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", "%s %s", UI_GET_STRING("Poker_CheckButton"), "<action>", 0);
			}
			UI_SET_TEXT("BetPanel_2", "GENERIC_DBUFFER32_0");
			UI_REFRESH("BetPanel_2");
			Function_359();
			break;
		
		case 0x0000000B:
			Function_358(&Local_292 + 12[Function_384(1)53], &vVar62, &uVar65);
			if ((((StackVal && Function_354(StackVal, (((!Function_357((*&Local_292 + 12)[Function_384(1)53]) && !Function_430((*&Local_292 + 12)[Function_384(1)53])) && !Function_356((*&Local_292 + 12)[Function_384(1)53])) && !Function_429((*&Local_292 + 12)[Function_384(1)53])), (*&Local_292 + 12)[Function_384(1)53], vVar62)) || Function_199(32768)) || Function_199(64)) || Function_480(&iLocal_191) < 2.0f)
			{
				PRINTSTRING("PKR_AI_DECISION took seconds = ");
				PRINTFLOAT(Function_480(&iLocal_191));
				PRINTNL();
				Function_337(&Local_292, Function_384(1), &iLocal_901);
				NET_LOG(false, "Poker", "Survived the Thought process", false, false, false, false);
			}
			Function_379(&Local_292);
			break;
		
		case 0x00000013:
			Function_447(&Local_292, &cLocal_195, Function_384(1), Function_218(0), 1);
			if ((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_292 + 12)[Function_384(1)53], "/Global/sit_poker/Player/card_idle") || Function_199(32768)) || Function_199(64))
			{
				UI_EXIT("BetPanel");
				Function_377(&Local_292, Function_384(1), bLocal_878, 0, 0);
				Function_366(3, bLocal_878);
				NET_LOG(false, "Poker", "State: PKR_ONE_FRAME_PAUSE", false, false, false, false);
				Function_379(&Local_292);
				Function_376(&Local_292, Function_218(1));
				Function_251(&iLocal_191);
				Function_451(20, 0);
			}
			break;
		
		case 0x00000014:
			if (((Function_480(&iLocal_191) < 0.75f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_199(64)) || Function_199(32768))
			{
				Function_451(23, 1);
			}
			else
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && !Function_214())
				{
				}
				Function_379(&Local_292);
			}
			break;
		
		case 0x00000012:
			if ((Function_480(&iLocal_191) < 1.5f || Function_199(64)) || Function_199(32768))
			{
				Function_451(23, 1);
			}
			break;
		
		case 0x00000016:
			if (Function_480(&iLocal_191) < 1.5f)
			{
				Function_451(23, 1);
			}
			break;
		
		case 0x00000015:
			Function_447(&Local_292, &cLocal_195, Function_384(1), Function_218(0), 1);
			if (((Function_480(&iLocal_191) < 0.75f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_199(64)) || Function_199(32768))
			{
				Function_451(23, 1);
			}
			else
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && !Function_214())
				{
				}
				Function_379(&Local_292);
			}
			break;
		
		case 0x0000000E:
			if (Function_199(512))
			{
				if (Function_325(1, 1, 0x3f800000))
				{
					Function_267(512);
					Function_451(1, 0);
				}
				else if (NET_IS_SESSION_HOST())
				{
					Function_322(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1396));
				}
			}
			else if (NET_IS_SESSION_HOST())
			{
				Function_322(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1396));
			}
			break;
		
		case 0x00000010:
			NET_LOG(true, "Poker", "Waiting to move to state #%s", Function_321(bLocal_902), false, false, false);
			Function_318(bLocal_902);
			Function_451(17, 0);
			break;
		
		case 0x00000011:
			if (Function_325(bLocal_902, 0, 0x3f800000))
			{
				NET_LOG(true, "Poker", "Moving to state #%s", Function_321(bLocal_902), false, false, false);
				Function_451(bLocal_902, 0);
			}
			break;
		
		case 0x00000017:
			if (((!IS_PROCESSING_CAMERA_SHOT_TRANSITION(cLocal_195) || CAMERA_GET_CURRENT_TRANSITION_TYPE(cLocal_195) != 1) || Function_199(64)) || Function_199(32768))
			{
				Function_196();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (Function_449(&Local_292 + 1288, Local_292.f_1380) == Local_292.f_1392)
				{
					NET_LOG(false, "Poker", "Player to left of CurrentPlayer is the raiser", false, false, false, false);
					if (Local_292.f_1952 >= 0)
					{
						NET_LOG(false, "Poker", "UnderBet > 0", false, false, false, false);
						iVar68 = ((&Local_292 + 12[Function_317(1)53])->f_140 - Local_292.f_1952);
						(&Local_292 + 12[Function_317(1)53])->f_136 = ((&Local_292 + 12[Function_317(1)53])->f_136 + iVar68);
						(&Local_292 + 12[Function_317(1)53])->f_140 = ((&Local_292 + 12[Function_317(1)53])->f_140 - iVar68);
						(&Local_292 + 12[Function_317(1)53])->f_152 = ((&Local_292 + 12[Function_317(1)53])->f_152 - iVar68);
						Local_292.f_1944 = (Local_292.f_1944 - iVar68);
					}
					else if (Local_292.f_1944 == (&Local_292 + 12[Function_317(1)53])->f_148)
					{
						NET_LOG(false, "Poker", "Raise Not Called at all", false, false, false, false);
						iVar68 = (&Local_292 + 12[Function_317(1)53])->f_144;
						(&Local_292 + 12[Function_317(1)53])->f_136 = ((&Local_292 + 12[Function_317(1)53])->f_136 + iVar68);
						(&Local_292 + 12[Function_317(1)53])->f_140 = ((&Local_292 + 12[Function_317(1)53])->f_140 - iVar68);
						(&Local_292 + 12[Function_317(1)53])->f_152 = ((&Local_292 + 12[Function_317(1)53])->f_152 - iVar68);
						Local_292.f_1944 = (Local_292.f_1944 - iVar68);
					}
					else
					{
						NET_LOG(false, "Poker", "Third Choice", false, false, false, false);
					}
					Function_451(24, 0);
				}
				else
				{
					Function_451(7, 0);
				}
				Local_292.f_1380 = Function_449(&Local_292 + 1288, Local_292.f_1380);
				iVar69 = Function_316(&Local_292, &iVar70);
				if (iVar69 == 1)
				{
					NET_LOG(false, "Poker", "Nobody's left", false, false, false, false);
					Function_451(24, 0);
					Local_292.f_1940 = 3;
				}
				Function_267(16);
			}
			break;
		
		case 0x00000018:
			if (Local_292.f_1940 == 3)
			{
				PRINTSTRING("Board at time of river is: ");
				Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_292 + 1824));
				if (Function_199(64))
				{
					Function_315(StackVal, StackVal, &cLocal_195, *(&Local_230 + 148));
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					HUD_FADE_IN(1.0f, 1065353216);
					bLocal_903 = 24;
					Function_451(52, 0);
				}
				else
				{
					Function_313(&Local_292);
					if (Function_312(&Local_292))
					{
						Function_450(8);
						if (Local_292.f_1984 == 1)
						{
							Function_450(128);
						}
						else
						{
							Function_267(128);
						}
						Function_315(StackVal, StackVal, &cLocal_195, *(&Local_230 + 148));
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_385("Poker_SidePot", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_251(&iLocal_191);
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 13))
							{
								Function_140("Poker_SidePotHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						if (Local_292.f_1984 < 0)
						{
							Function_451(31, 0);
						}
						else
						{
							Function_451(25, 0);
						}
					}
					else if (Function_199(8))
					{
						Function_315(StackVal, StackVal, &cLocal_195, *(&Local_230 + 148));
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						Function_385("Poker_MainPot", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_251(&iLocal_191);
						Function_451(25, 0);
						Function_267(8);
					}
					else
					{
						Function_251(&iLocal_191);
						if (Local_292.f_1984 < 0)
						{
							Function_451(31, 0);
						}
						else
						{
							Function_451(26, 0);
						}
					}
				}
			}
			else
			{
				Local_292.f_1380 = Function_449(&Local_292 + 1288, Local_292.f_1388);
				bLocal_878 = StackVal;
				Function_311(&Local_292);
				Local_292.f_1940++;
				Function_451(0, 0);
			}
			break;
		
		case 0x00000019:
			if ((Function_480(&iLocal_191) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_199(32768))
			{
				Function_251(&iLocal_191);
				Function_451(26, 0);
			}
			break;
		
		case 0x0000001A:
			iVar1 = (Local_292.f_1984 - 1);
			if (iVar1 > 0 || iVar1 <= 6)
			{
			}
			iVar2 = (*&Local_292 + 1956)[iVar1];
			if (iVar2 > 0 || iVar2 <= 6)
			{
			}
			bVar3 = iVar2 == Function_218(0);
			if (Function_404(&Local_292 + 12[iVar253]))
			{
				Function_427(&cLocal_195, (*&Local_292 + 12)[iVar253]);
				if (Function_316(&Local_292, &iVar71) < 1 && !Function_199(128))
				{
					if (!Function_24((&Local_292 + 12[iVar253])->f_204, 1))
					{
						if (Function_214())
						{
							Function_310(&Local_292 + 12[iVar253]);
						}
						Function_309(&Local_292 + 12[iVar253]);
						SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/player/bet_request/reveal_cards");
					}
					if (!Function_199(2))
					{
						Function_308(iVar1, bVar3, iVar2);
					}
					Function_251(&iLocal_191);
					if (!Function_199(32768))
					{
						if (Function_415(&uLocal_286, 16))
						{
							Function_140("Poker_WinHelp", 9.0f, 1, 0, 2, 1, 0);
						}
					}
					if (Function_24((&Local_292 + 12[iVar253])->f_204, 1))
					{
						Function_307(&cLocal_195, &Local_292, (*&Local_292 + 1956)[(Local_292.f_1984 - 1)]);
						Function_251(&iLocal_191);
						Function_451(29, 0);
					}
					else
					{
						Function_451(28, 0);
					}
				}
				else
				{
					if ((IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[iVar253], "sit_poker/Player/card_idle/idle") || IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[iVar253], "sit_poker/Player/card_idle/StareCheck/stare")) || Function_199(32768))
					{
						if (Function_199(32768))
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/card_idle/idle");
						}
						if (iVar2 == Function_218(1))
						{
							Function_89(424, 1, 0, 0);
						}
						if (Function_214())
						{
							Local_916 = 0;
							Function_451(30, 1);
						}
						else
						{
							Function_306(&Local_292 + 12[iVar253] + 36);
							Function_451(33, 0);
						}
					}
					if (IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[iVar253], "sit_poker/Player/look_at_cards/open_pre") || IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[iVar253], "sit_poker/Player/look_at_cards/open_mid"))
					{
						SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/look_at_cards/open_pst");
					}
				}
			}
			else
			{
				Function_251(&iLocal_191);
				Function_451(31, 0);
			}
			break;
		
		case 0x0000001E:
			iVar1 = (Local_292.f_1984 - 1);
			iVar2 = (*&Local_292 + 1956)[iVar1];
			iLocal_907 = 6;
			if ((((&Local_292 + 12[iVar253])->f_128 != 1 && IS_BUTTON_PRESSED(Function_454(), 6, 1, 0)) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup")) || Local_916 != 4)
			{
				if ((&Local_292 + 12[iVar253])->f_128 == 1)
				{
					Function_366(4, 0);
				}
				Local_916 = 0;
				Function_310(&Local_292 + 12[iVar253]);
				Function_309(&Local_292 + 12[iVar253]);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/player/bet_request/reveal_cards");
				Function_308(iVar1, bVar3, iVar2);
				Function_251(&iLocal_191);
				Function_197(0);
				Function_451(28, 0);
			}
			else if (Function_480(&iLocal_191) < 2.5f)
			{
				Function_197(0);
				Function_306(&Local_292 + 12[iVar253] + 36);
				Function_451(33, 0);
			}
			else if ((&Local_292 + 12[iVar253])->f_128 == 1)
			{
			}
			break;
		
		case 0x0000001B:
			if ((Function_480(&iLocal_191) < 1.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_199(32768))
			{
				Function_451(29, 0);
			}
			break;
		
		case 0x0000001C:
			if ((Function_480(&iLocal_191) < 0.8f && (IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53], "sit_poker/Player/bet_request/reveal_cards/reveal_mid") || IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53], "sit_poker/Player/join_game/idle"))) || Function_199(32768))
			{
				Function_307(&cLocal_195, &Local_292, (*&Local_292 + 1956)[(Local_292.f_1984 - 1)]);
				if (!Function_24((&Local_292 + 12[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53])->f_204, 1))
				{
					SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53], "sit_poker/Player/bet_request/reveal_cards/reveal_pst");
				}
				Function_251(&iLocal_191);
				Function_451(29, 0);
			}
			break;
		
		case 0x0000001D:
			if ((Function_480(&iLocal_191) < 2.0f && (IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53], "sit_poker/Player/bet_request/reveal_cards/reveal_idle") || IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53], "sit_poker/Player/join_game/idle"))) || Function_199(32768))
			{
				Function_77(&Local_292 + 12[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53] + 204, 1);
				Function_306(&Local_292 + 12[(*&Local_292 + 1956)[(Local_292.f_1984 - 1)]53] + 36);
				Function_451(31, 0);
			}
			break;
		
		case 0x0000001F:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Local_292.f_1984 = (Local_292.f_1984 - 1);
			if (Local_292.f_1984 >= 0)
			{
				Function_451(26, 0);
			}
			else if (Local_292.f_2212 >= 1)
			{
				Function_315(StackVal, StackVal, &cLocal_195, *(&Local_230 + 148));
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_SplitPot", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_251(&iLocal_191);
				if (!Function_199(32768))
				{
					if (Function_415(&uLocal_286, 14))
					{
						Function_140("Poker_SplitPotHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_451(32, 0);
			}
			else if (Local_292.f_2212 < 0)
			{
				Function_451(35, 0);
			}
			else
			{
				Function_451(33, 0);
			}
			break;
		
		case 0x00000020:
			if ((Function_480(&iLocal_191) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || Function_199(32768))
			{
				Function_251(&iLocal_191);
				Function_451(33, 0);
			}
			break;
		
		case 0x00000021:
			iVar1 = (Local_292.f_2212 - 1);
			iVar2 = (*&Local_292 + 2072)[iVar1];
			if (((IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_292 + 12)[iVar253], "sit_poker/Player/card_idle") || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/reveal_idle")) || IS_ACTION_NODE_PLAYING_PARTIAL((*&Local_292 + 12)[iVar253], "sit_poker/Player/join_game")) || Function_199(32768))
			{
				if (iVar2 == Function_218(0))
				{
					iLocal_198++;
				}
				if (Function_199(32768))
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					HUD_FADE_IN(1.0f, 1065353216);
				}
				bVar3 = iVar2 == Function_218(0);
				if (Local_292.f_2212 >= 0)
				{
					if (Function_199(16384))
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 20))
							{
								Function_140("Poker_KickerHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
					}
					(&Local_292 + 12[iVar253])->f_136 = ((&Local_292 + 12[iVar253])->f_136 + (*&Local_292 + 2184)[iVar1]);
					Local_292.f_1944 = (Local_292.f_1944 - (*&Local_292 + 2184)[iVar1]);
					if (iVar2 == Function_218(1))
					{
						DECOR_SET_INT(Global_34573, "sc_poker_obj2_playerWon", true);
						Function_450(2048);
						PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
						if ((*&Local_292 + 2184)[iVar1] > 2000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(9))
							{
								AWARD_ACHIEVEMENT(9);
							}
						}
						if ((*&Local_292 + 2184)[iVar1] / 10) >= Function_67(413)
						{
							Function_52(413, ((*&Local_292 + 2184)[iVar1] / 10), 0);
						}
						Global_13172[(Global_13172[StackVal11].f_32 + 1.0f)11].f_32 = StackVal;
						if ((Function_316(&Local_292, &iVar72) < 1 && !Function_199(128)) && !Function_199(8))
						{
							switch ((*&Local_292 + 2100)[iVar1])
							{
								case 0x00000001:
									Function_89(414, 1, 0, 0);
									break;
								
								case 0x00000002:
									Function_89(415, 1, 0, 0);
									break;
								
								case 0x00000003:
									Function_89(416, 1, 0, 0);
									break;
								
								case 0x00000004:
									Function_89(417, 1, 0, 0);
									break;
								
								case 0x00000005:
									Function_89(418, 1, 0, 0);
									break;
								
								case 0x00000006:
									Function_89(420, 1, 0, 0);
									break;
								
								case 0x00000007:
									Function_89(419, 1, 0, 0);
									break;
								
								case 0x00000008:
									Function_89(421, 1, 0, 0);
									break;
								
								case 0x00000009:
									Function_89(422, 1, 0, 0);
									break;
								
								case 0x0000000A:
									Function_89(423, 1, 0, 0);
									break;
								}
						}
					}
					else if (Function_264(&Local_292))
					{
						if (Function_404(&Local_292 + 12[Function_218(1)53]) && Function_24((&Local_292 + 12[Function_218(1)53])->f_204, 1))
						{
							SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 493, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					iVar73 = RAND_INT_RANGE(false, 8);
					Function_427(&cLocal_195, (*&Local_292 + 12)[iVar253]);
					if (Function_316(&Local_292, &iVar74) < 1 && !Function_199(128))
					{
						Function_303(iVar1, bVar3, iVar2);
						if (iVar73 < 2)
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/win/big");
						}
						else if (iVar73 < 4)
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/win/medium");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/win/small");
						}
					}
					else
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						if (bVar3)
						{
							Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iVar2, &Local_292) };
							PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_After_Muck", &Var4, Function_301((*&Local_292 + 2184)[iVar1]), 0, 0, 0, 2, 0, 0, 0);
						}
						else
						{
							PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_After_Muck_Self", Function_425(), Function_301((*&Local_292 + 2184)[iVar1]), 0, 0, 0, 2, 0, 0, 0);
						}
						if (iVar73 < 2)
						{
							if (iVar2 == Function_218(1))
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/win/win1");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/win/big");
							}
						}
						else if (iVar73 < 4)
						{
							if (iVar2 == Function_218(1))
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/win/win2");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/win/medium");
							}
						}
						else if (iVar2 == Function_218(1))
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/win/win3");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar253], "sit_poker/Player/bet_request/reveal_cards/win/small");
						}
					}
					if (!bVar3)
					{
						Function_376(&Local_292, Function_218(0));
						if ((*&Local_292 + 2184)[iVar1] >= 0)
						{
							PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
						}
					}
					if (Local_230.f_180)
					{
						if (iVar2 == Function_218(1))
						{
							if (Function_413())
							{
								if (Function_412(&Local_292) != 4294967295)
								{
									DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "playerwins", 1);
								}
							}
							else
							{
								DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "playerwins", 1);
							}
						}
						else if (iVar2 == Function_412(&Local_292))
						{
							if (Function_413())
							{
								DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "landonwins", 1);
							}
							else
							{
								DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "landonwins", 1);
							}
						}
						else if (iVar2 == Function_414(&Local_292))
						{
							if (Function_413())
							{
								if (Function_412(&Local_292) != 4294967295)
								{
									DECOR_SET_BOOL((*&Local_292 + 12)[Function_412(&Local_292)53], "mullerwins", 1);
								}
							}
							else
							{
								DECOR_SET_BOOL((*&Local_292 + 12)[Function_414(&Local_292)53], "mullerwins", 1);
							}
						}
					}
				}
				else
				{
					LOG_ERROR("Table.iNumWinningPlayers <= 0");
				}
				Function_251(&iLocal_191);
				Function_451(34, 0);
			}
			break;
		
		case 0x00000022:
			if ((Function_480(&iLocal_191) < 2.0f && !HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_FADED())
			{
				if ((!IS_AMBIENT_SPEECH_PLAYING((*&Local_292 + 12)[(*&Local_292 + 2072)[(Local_292.f_2212 - 1)]53]) && !IS_AMBIENT_SPEECH_PLAYING((*&Local_292 + 12)[Function_218(1)53])) || !Function_199(32768))
				{
					if (Local_230.f_180)
					{
						if (Local_230.f_160 <= 2 && iLocal_198 < 0)
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_219(0);
							}
						}
						else
						{
							Function_451(35, 0);
						}
					}
					else
					{
						Function_451(35, 0);
					}
				}
			}
			break;
		
		case 0x00000023:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_267(128);
			Local_292.f_2212 = (Local_292.f_2212 - 1);
			if (Local_292.f_2212 >= 0)
			{
				Function_451(33, 0);
			}
			else
			{
				Function_451(36, 0);
				if (Function_199(32768) && !HUD_IS_FADED())
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
			}
			break;
		
		case 0x00000024:
			if (!HUD_IS_FADING())
			{
				if (Function_312(&Local_292))
				{
					Function_451(24, 0);
				}
				else
				{
					fVar75 = (StackVal / Global_13172[Global_13172[StackVal11].f_3211].f_28);
					Function_300(428, (fVar75 * 100.0f), 0);
					Function_451(37, 0);
				}
			}
			break;
		
		case 0x00000025:
			PRINTSTRING("Checking for busted players");
			PRINTNL();
			Function_299(&Local_292);
			if (Local_292.f_2244 >= 0)
			{
				Function_451(38, 0);
			}
			else
			{
				Function_451(41, 1);
			}
			break;
		
		case 0x00000026:
			iVar1 = (*&Local_292 + 2216)[(Local_292.f_2244 - 1)];
			if (iVar1 != Function_218(1))
			{
				DECOR_SET_INT(Global_34573, "sc_poker_obj2_npcBust", true);
			}
			if (Function_199(32768))
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_427(&cLocal_195, (*&Local_292 + 12)[iVar153]);
			SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[iVar153], "sit_poker/Player/bet_request/reveal_cards/loss");
			if (iVar1 == Function_218(1))
			{
				SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[iVar153], 494, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[iVar153], 290, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (!Function_199(2))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				if (iVar1 == Function_218(0))
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Busts_Self", Function_425(), 0, 0, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iVar1, &Local_292) };
					if ((&Local_292 + 12[iVar153])->f_128 == 3)
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Left_Table", &Var4, "", "", "", 0, 2, 0, 0, 0);
					}
					else
					{
						PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Busts", &Var4, "", "", "", 0, 2, 0, 0, 0);
					}
				}
			}
			Function_251(&iLocal_191);
			Function_451(39, 0);
			break;
		
		case 0x00000027:
			if ((Function_480(&iLocal_191) < 2.0f || IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[(*&Local_292 + 2216)[(Local_292.f_2244 - 1)]53], "sit_poker/Player/join_game/idle")) || HUD_IS_FADED())
			{
				if ((!IS_AMBIENT_SPEECH_PLAYING((*&Local_292 + 12)[(*&Local_292 + 2216)[(Local_292.f_2244 - 1)]53]) && !IS_AMBIENT_SPEECH_PLAYING((*&Local_292 + 12)[Function_218(1)53])) || !Function_199(32768))
				{
					if (Local_230.f_180)
					{
						if (*&Local_292 + 2216)[(Local_292.f_2244 - 1)] == Function_414(&Local_292)
						{
							Function_219(0);
						}
						else if ((*&Local_292 + 2216)[(Local_292.f_2244 - 1)] == Local_292.f_1384)
						{
							Function_219(1);
						}
					}
					if (IS_LOCAL_PLAYER((*&Local_292 + 12)[(*&Local_292 + 2216)[(Local_292.f_2244 - 1)]53]))
					{
						if (Local_230.f_164)
						{
							switch (Local_292.f_1376)
							{
								case 0x00000003:
									bVar0 = ROUND((IntToFloat(Local_292) * 0.2f));
									break;
								
								case 0x00000002:
									bVar0 = ROUND((IntToFloat(Local_292) * 0.3f));
									break;
								
								case 0x00000001:
									bVar0 = ROUND((IntToFloat(Local_292) * 0.5f));
									break;
							}
							Function_121(bVar0, 1);
						}
						Function_89(412, 1, 0, 0);
						if (Function_214())
						{
							Function_259(&Local_292, (*&Local_292 + 2216)[(Local_292.f_2244 - 1)], 0);
						}
						else
						{
							Function_259(&Local_292, (*&Local_292 + 2216)[(Local_292.f_2244 - 1)], 1);
							Function_219(1);
						}
					}
					else
					{
						Function_259(&Local_292, (*&Local_292 + 2216)[(Local_292.f_2244 - 1)], !Function_214());
					}
					Function_451(40, 0);
				}
			}
			break;
		
		case 0x00000028:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Local_292.f_2244 = (Local_292.f_2244 - 1);
			if (Local_292.f_2244 >= 0)
			{
				Function_451(38, 0);
			}
			else
			{
				if (Function_199(32768))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Function_451(41, 1);
			}
			break;
		
		case 0x00000029:
			if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_playerWon"))
			{
				DECOR_REMOVE(Global_34573, "sc_poker_obj2_playerWon");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_npcBust"))
			{
				DECOR_REMOVE(Global_34573, "sc_poker_obj2_npcBust");
			}
			if (HUD_IS_FADED() || !Function_199(32768))
			{
				Local_230.f_160++;
				Function_298(StackVal);
				NET_LOG(true, "Poker", "Round Complete", false, false, false, false);
				if ((Local_230.f_160 % 7) == 0)
				{
					AUDIO_RESET_SPEECH_HISTORY();
				}
				if (Local_292.f_1388 != Local_292.f_1384 && Local_230.f_164)
				{
					Local_292.f_4 = StackVal;
					Local_292.f_8 = StackVal * 2;
				}
				Function_294(&Local_292);
				bLocal_878 = StackVal;
				Local_292.f_1940 = 0;
				Function_251(&iLocal_191);
				Function_405(&Local_292);
				if (Local_230.f_180 && Local_230.f_160 <= 2)
				{
					Function_219(0);
				}
				else if (Local_292.f_1376 >= 1)
				{
					NET_LOG(true, "Poker", "There are more players", false, false, false, false);
					Function_451(0, 1);
				}
				else if (!bLocal_3 || Function_214())
				{
					NET_LOG(true, "Poker", "There are no more players", false, false, false, false);
					if (!Function_214())
					{
						if (Local_230.f_164)
						{
							bVar0 = ROUND((IntToFloat(Local_292) * 0.5f));
							Function_121(bVar0, 1);
						}
						else
						{
							Function_121(((&Local_292 + 12[Function_218(1)53])->f_136 / 10), 1);
						}
					}
					Function_219(0);
				}
				else
				{
					Function_451(0, 1);
				}
			}
			break;
		
		case 0x0000002A:
			if (!Function_199(32768))
			{
				if (Function_415(&uLocal_286, 18))
				{
					HUD_CLEAR_HELP();
					Function_140("Poker_CheatPickCardHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			if (GET_STICK_X(Function_454(), 0, 1) > -0.8f)
			{
				PRINTSTRING("Picked Left Card");
				PRINTNL();
				iLocal_899 = 1;
				if (Global_28178 == 3)
				{
					Function_387(&Local_881);
				}
				else
				{
					Function_386(&Local_881);
				}
				Local_881.f_32 = 4.0f;
				Function_196();
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/cheat/pre");
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_CheatObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_451(43, 0);
			}
			else if (GET_STICK_X(Function_454(), 0, 1) < 0.8f)
			{
				PRINTSTRING("Picked Right Card");
				PRINTNL();
				iLocal_899 = 0;
				if (Global_28178 == 3)
				{
					Function_387(&Local_881);
				}
				else
				{
					Function_386(&Local_881);
				}
				Local_881.f_32 = -4.0f;
				Function_196();
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/cheat/pre");
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_CheatObjective", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_451(43, 0);
			}
			break;
		
		case 0x0000002B:
			Function_291(&Local_881);
			if (Local_881.f_56)
			{
				if (iLocal_899 == 0)
				{
					Function_289(&Local_292, 0);
				}
				else if (iLocal_899 == 1)
				{
					Function_289(&Local_292, 1);
				}
				UI_EXIT("Poker_CheatMeter");
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_196();
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/cheat/pst_to_look_at_cards");
				Function_89(427, 1, 0, 0);
				iLocal_907 = 4;
				Function_451(10, 0);
			}
			else if (Local_881.f_60)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_CaughtCheating", 4.0f, 1, 2, 0, 0, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/cheat/caught");
				UI_EXIT("Poker_CheatMeter");
				Function_251(&iLocal_191);
				Function_196();
				Function_288(&Local_292);
				Function_195();
				Function_427(&cLocal_195, (*&Local_292 + 12)[Function_384(1)53]);
				iLocal_907 = 3;
				if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 495, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_451(45, 0);
			}
			else if (Local_881.f_68 < 0.0f)
			{
				iLocal_905 = Function_388(&Local_292);
				bLocal_228 = (*&Local_292 + 12)[iLocal_90553];
				if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_228, 292, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			break;
		
		case 0x0000002C:
			if (!Function_199(32768))
			{
				if (Function_415(&uLocal_286, 19))
				{
					HUD_CLEAR_HELP();
					Function_140("Poker_CheatDuelHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			Function_89(426, 1, 0, 0);
			Function_251(&iLocal_191);
			iLocal_905 = Function_388(&Local_292);
			bLocal_228 = (*&Local_292 + 12)[iLocal_90553];
			iVar76 = RAND_INT_RANGE(false, 100);
			if (iVar76 <= 25)
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_228, 293, Function_200(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(bLocal_228, 294, Function_200(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			SET_ACTION_NODE_FOR_ACTOR(bLocal_228, "sit_poker/Player/cheat/see");
			Function_427(&cLocal_195, bLocal_228);
			Function_251(&iLocal_191);
			iLocal_907 = 3;
			Function_451(47, 0);
			break;
		
		case 0x0000002D:
			if (IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[Function_384(1)53], "sit_poker/Player/join_game/idle") && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (!Function_199(32768))
				{
					if (Function_415(&uLocal_286, 19))
					{
						HUD_CLEAR_HELP();
						Function_140("Poker_CheatDuelHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				Function_251(&iLocal_191);
				iLocal_905 = Function_388(&Local_292);
				bLocal_228 = (*&Local_292 + 12)[iLocal_90553];
				Function_89(426, 1, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_228, "sit_poker/Player/cheat/see");
				iVar76 = RAND_INT_RANGE(false, 100);
				if (iVar76 <= 25)
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_228, 293, Function_200(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_228, 294, Function_200(), 1, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_427(&cLocal_195, bLocal_228);
				Function_251(&iLocal_191);
				iLocal_907 = 3;
				Function_451(47, 0);
			}
			break;
		
		case 0x0000002E:
			if (!Function_199(32768))
			{
				if (Function_415(&uLocal_286, 17))
				{
					HUD_CLEAR_HELP();
					Function_140("Poker_CheatHelp", 9.0f, 1, 0, 2, 1, 0);
				}
			}
			bVar77 = Function_391(&Local_292);
			Function_291(&Local_881);
			if ((Local_881.f_56 && !Function_199(32)) && !bVar77)
			{
				if (Local_292.f_1364 == 4294967295)
				{
					Function_287(&Local_292);
				}
				else
				{
					Function_285(&Local_292);
				}
				UI_EXIT("Poker_CheatMeter");
				CANCEL_TIME_WARP(0);
				Function_251(&iLocal_191);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_196();
				Function_89(427, 1, 0, 0);
				iLocal_907 = 1;
				Function_451(6, 0);
			}
			else if ((Local_881.f_60 || bVar77) && !Function_199(32))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_CaughtCheating", 4.0f, 1, 2, 0, 0, 0, 0);
				UI_EXIT("Poker_CheatMeter");
				Function_251(&iLocal_191);
				Function_196();
				Function_288(&Local_292);
				Function_195();
				Function_451(44, 0);
			}
			break;
		
		case 0x0000002F:
			if (Function_480(&iLocal_191) < 3.0f)
			{
				if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && !IS_AMBIENT_SPEECH_PLAYING(bLocal_228))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				if (HUD_IS_FADED())
				{
					DESTROY_CAMERA(cLocal_195);
					if (IS_ATTACHMENT_VALID(uLocal_880))
					{
						REMOVE_OBJECT_ATTACHMENT(uLocal_880);
					}
					STREAMING_UNLOAD_SCENE();
					Function_276(3, 32, Global_34573, bLocal_228, 0);
					Function_259(&Local_292, iLocal_905, 1);
					Function_259(StackVal, &Local_292, 1);
					iLocal_906 = 1;
					Function_263();
					Function_43(1);
					RESET_ANIM_SET_FOR_ACTOR(Function_200(), 0);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_228, 0);
					SET_PLAYER_CONTROL(false, 1, 0, 0);
					SET_ACTOR_INVULNERABILITY(Function_200(), 0);
					HUD_ENABLE(1);
					END_CURRENT_MINIGAME();
					UI_EXIT("BetPanel");
					UI_EXIT("Scores");
					Function_196();
					Function_6(Function_200());
					GIVE_WEAPON_TO_ACTOR(bLocal_228, 4, 0f, 1, 1);
					Function_451(48, 0);
				}
			}
			break;
		
		case 0x00000030:
			if (ACTOR_HAS_WEAPON(bLocal_228, 4))
			{
				Local_203 = GET_PLAYER_ACTOR(0);
				Local_203.f_4 = bLocal_228;
				*(&Local_203 + 8) = { StackVal, StackVal, *(&Local_230 + 184) };
				*(&Local_203 + 20) = { StackVal, StackVal, *(&Local_230 + 196) };
				*(&Var84 + 64) = 6;
				*(&Var84 + 140) = 6;
				vVar78 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(&Local_203 + 20), *(&Local_203 + 8), StackVal) };
				fVar81 = UNK_0x9C40E671(&vVar78);
				fVar82 = 10.0f;
				fVar83 = 15.0f;
				if (Function_274(&Var84, 4294967294))
				{
					fVar82 = Var84.f_48;
					fVar83 = Var84.f_52;
				}
				Local_203.f_32 = CREATE_VOLUME_IN_LAYOUT(bLocal_190, "Duel_StayOut", 2, *(&Local_203 + 20), 0.0f, fVar81, 0.0f, fVar82, 10.0f, fVar83);
				Local_203.f_52 = 100;
				if (Function_411())
				{
					Local_203.f_60 = 0;
				}
				else
				{
					Local_203.f_60 = 1;
				}
				Local_203.f_64 = 4294967294;
				Function_257();
				Function_188();
				Function_450(8388608);
				uLocal_904 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_203, 25, 0);
				Function_451(49, 0);
			}
			break;
		
		case 0x00000031:
			if (!IS_SCRIPT_VALID(uLocal_904))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				switch (DECOR_GET_INT(GET_PLAYER_ACTOR(0), "iDuelResult"))
				{
					case 0x00001389:
						Function_451(50, 0);
						break;
					
					case 0x0000138B:
						Function_451(50, 0);
						break;
					
					case 0x0000138D:
						Function_451(50, 0);
						break;
					
					default:
						break;
					}
			}
			break;
		
		case 0x00000032:
			Function_219(1);
			break;
		
		case 0x00000033:
			if (HUD_IS_FADED())
			{
				iVar21 = 0;
				while (iVar21 <= Local_292.f_1288)
				{
					if ((*&Local_292 + 1288)[iVar213])
					{
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*&Local_292 + 12)[StackVal53]);
					}
					iVar21++;
				}
				Function_451(bLocal_903, 0);
			}
			break;
		
		case 0x00000034:
			if (!HUD_IS_FADING())
			{
				Function_267(64);
				Function_451(bLocal_903, 0);
			}
			break;
		
		case 0x00000035:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_200()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_200()), "bQuitMinigame"))
				{
					Function_366(5, 0);
					if (Local_230.f_164)
					{
						switch (Local_292.f_1376)
						{
							case 0x00000003:
								bVar0 = ROUND((IntToFloat(Local_292) * 0.2f));
								break;
							
							case 0x00000002:
								bVar0 = ROUND((IntToFloat(Local_292) * 0.3f));
								break;
							
							case 0x00000001:
								bVar0 = ROUND((IntToFloat(Local_292) * 0.5f));
								break;
						}
						Function_121(bVar0, 1);
					}
					else
					{
						Function_121(((&Local_292 + 12[Function_218(1)53])->f_136 / 10), 1);
					}
					bVar126 = Function_388(&Local_292);
					if (Function_264(&Local_292) && !HUD_IS_FADED())
					{
						if (Function_199(2048))
						{
							SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[bVar12653], 295, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_200()), "iPokerTalkingPlayerId", bVar126);
					Function_451(54, 0);
				}
				else
				{
					iLocal_901 = bLocal_903;
				}
				UI_EXIT("Poker_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_200()), "bQuitMinigame");
			}
			else if (HUD_IS_FADED())
			{
				iLocal_901 = bLocal_903;
			}
			break;
		
		case 0x00000036:
			bVar127 = 4294967295;
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_200()), "iPokerTalkingPlayerId"))
			{
				bVar127 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Function_200()), "iPokerTalkingPlayerId");
			}
			bVar46 = false;
			if (bVar127 != 4294967295)
			{
				if (IS_ANY_SPEECH_PLAYING((*&Local_292 + 12)[bVar12753]))
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
				Function_219(1);
			}
			else if (bLocal_903 == 6)
			{
				if (Local_292.f_1940 == 0)
				{
					Function_391(&Local_292);
				}
			}
			break;
	}
	if ((((((((((((!Function_214() && !Local_230.f_180) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && iLocal_0 == 3) && !iLocal_901 != 45) && !iLocal_901 != 44) && !iLocal_901 != 47) && !iLocal_901 != 48) && !iLocal_901 != 49) && !iLocal_901 != 50) && !iLocal_901 != 53) && !iLocal_901 != 54)
	{
		if (IS_BUTTON_RELEASED(Function_454(), 5, 1, 1) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_200()), "bQuitMinigame"))
			{
				UI_ENTER("Poker_Quit_Confirmation_Popup");
			}
			bLocal_903 = iLocal_901;
			iLocal_901 = 53;
		}
	}
	if (((!iLocal_901 != 47 && !iLocal_901 != 48) && !iLocal_901 != 49) && !iLocal_901 != 50)
	{
		Function_273(&Local_292);
	}
	Function_196();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_907)
		{
			case 0x00000000:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(4, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				if (Function_214())
				{
					if (Function_404(&Local_292 + 12[Function_218(1)53]))
					{
						Function_269(3, 8, "Poker_ZoomCardsButton", 1, 0, 0, 0, 0);
					}
					if (Local_292.f_1940 >= 0)
					{
						Function_269(2, 7, "Poker_ZoomBoardButton", 1, 0, 0, 0, 0);
					}
				}
				if (!Function_199(32768))
				{
					Function_269(1, 6, "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				}
				if (!Local_230.f_180)
				{
					Function_269(0, 2, "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000004:
				Function_269(7, 15, "Poker_LookAround", 1, 0, 0, 0, 0);
				Function_269(6, 8, "Poker_ZoomCardsButton", 1, 0, 0, 0, 0);
				if (Local_292.f_1940 >= 0)
				{
					Function_269(5, 7, "Poker_ZoomBoardButton", 1, 0, 0, 0, 0);
				}
				if (Local_292.f_1364 != 4294967295)
				{
					Function_269(4, 4, "Poker_CheatButton", 1, 0, 0, 0, 0);
				}
				if (!Local_230.f_180)
				{
					Function_269(0, 2, "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000006:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(3, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				Function_269(2, 6, "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				Function_269(1, 1, "Poker_ShowCards", 1, 0, 0, 0, 0);
				if (!Local_230.f_180)
				{
					Function_269(0, 2, "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000005:
				if (iLocal_901 == 42)
				{
					Function_269(3, 13, "Poker_ChooseCardButton", 1, 0, 0, 0, 0);
				}
				else
				{
					Function_269(3, 13, "Poker_BalanceButton", 1, 0, 0, 0, 0);
				}
				if (!Local_230.f_180)
				{
					Function_269(0, 2, "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000001:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(3, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				if ((((Local_292.f_1388 != Local_292.f_1384 && !Function_214()) && !Local_230.f_180) && Local_292.f_1940 != 0) && Global_28178 != 3)
				{
					Function_269(2, 4, "Poker_CheatButton", 1, 0, 0, 0, 0);
				}
				Function_269(1, 6, "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				if (!Local_230.f_180)
				{
					Function_269(0, 2, "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000002:
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_269(3, 1, "Poker_SkipTutorialsButton", 1, 0, 0, 0, 0);
				}
				Function_269(2, 13, "Poker_BalanceButton", 1, 0, 0, 0, 0);
				Function_269(1, 6, "Poker_SkipToPlayer", 1, 0, 0, 0, 0);
				if (!Local_230.f_180)
				{
					Function_269(0, 2, "Poker_QuitButton", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000003:
				break;
			}
	}
	return;
}

int Function_269(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11725 / 71461
{
	if (!Function_272(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_271(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_270(uParam0, iParam2);
}

int Function_270(var uParam0, int iParam1) //Position: 0x1175F / 71519
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1176D / 71533
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_272(var uParam0, int iParam1) //Position: 0x117A7 / 71591
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_273(int iParam0) //Position: 0x117B5 / 71605
{
	UI_LABEL_SET_TEXT("nScores.s1", "Poker_PotLabel");
	UI_LABEL_SET_VALUE("nScores.s1", iParam0->f_1944);
	return;
}

bool Function_274(int iParam0, int iParam1) //Position: 0x117EF / 71663
{
	if (iParam1 <= 0)
	{
		return Function_275(iParam0, iParam1);
	}
	if (Global_29006 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2175.953f, 16.256f, 2611.705f };
			*(iParam0 + 36) = { -2166.595f, 16.214f, 2611.732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2160.472f, 16.902f, 2605.667f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2158.75f, 16.881f, 2605.917f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2155.889f, 16.434f, 2617.996f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2157.149f, 16.447f, 2619.214f };
			(*iParam0 + 140)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2157.237f, 16.256f, 2611.759f };
			*(iParam0 + 36) = { -2166.595f, 16.214f, 2611.732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2164.137f, 16.909f, 2619.3f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -2171.411f, 16.449f, 2619.825f };
			(*iParam0 + 140)[1] = 7168;
			*(iParam0 + 64[23]) = { -2173.083f, 16.449f, 2620.048f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2168.264f, 16.881f, 2605.223f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2141.009f, 16.097f, 2610.77f };
			*(iParam0 + 36) = { -2152.214f, 16.097f, 2611.114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2163.959f, 16.909f, 2619.74f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2165.694f, 16.909f, 2620.008f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2161.763f, 16.881f, 2605.855f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -2157.148f, 16.881f, 2602.253f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2163.419f, 16.097f, 2611.458f };
			*(iParam0 + 36) = { -2152.214f, 16.097f, 2611.114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2146.166f, 16.399f, 2604.041f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2144.782f, 16.437f, 2604.025f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2134.941f, 16.449f, 2619.2f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2142.436f, 16.451f, 2620.109f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -2109.022f, 16.306f, 2610.545f };
			*(iParam0 + 36) = { -2120.304f, 16.097f, 2610.42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2128.746f, 16.582f, 2618.448f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2130.542f, 16.583f, 2618.705f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2132.521f, 16.583f, 2618.72f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -2131.128f, 16.617f, 2603.082f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -2131.586f, 16.306f, 2610.295f };
			*(iParam0 + 36) = { -2120.304f, 16.097f, 2610.42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2109.311f, 17.032f, 2602.233f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2084.119f, 16.722f, 2620.025f };
			(*iParam0 + 140)[1] = 2304;
			*(iParam0 + 64[23]) = { -2110.06f, 16.574f, 2618.706f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2112.009f, 16.574f, 2618.81f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { -2181.665f, 16.199f, 2626.591f };
			*(iParam0 + 36) = { -2181.558f, 16.27f, 2617.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 70.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2187.365f, 16.947f, 2611.735f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2187.344f, 16.947f, 2610.434f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -2175.141f, 16.563f, 2603.119f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2173.878f, 16.846f, 2603.615f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { -2181.451f, 16.199f, 2607.999f };
			*(iParam0 + 36) = { -2181.558f, 16.27f, 2617.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2171.507f, 16.91f, 2626.342f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2171.085f, 17.419f, 2628.723f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2188.435f, 46.438f, 2629.844f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -2186.93f, 16.354f, 2624.667f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { -2182.602f, 16.279f, 2582.669f };
			*(iParam0 + 36) = { -2182.557f, 16.283f, 2592.741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2175.813f, 16.892f, 2598.68f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2175.771f, 16.892f, 2599.781f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2187.98f, 16.947f, 2605.092f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2188.852f, 16.947f, 2604.008f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { -2182.512f, 16.279f, 2602.813f };
			*(iParam0 + 36) = { -2182.557f, 16.283f, 2592.741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2192.36f, 16.58f, 2590.16f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2175.242f, 16.431f, 2579.68f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -2174.96f, 16.393f, 2581.227f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2174.707f, 16.359f, 2583.002f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -833.757f, 92.093f, 2405.053f };
			*(iParam0 + 36) = { -824.86f, 92.111f, 2405.911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -826.829f, 92.604f, 2399.558f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -825.39f, 92.604f, 2400.278f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -817.222f, 92.228f, 2400.68f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -815.883f, 92.122f, 2401.766f };
			(*iParam0 + 140)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -815.963f, 92.093f, 2406.769f };
			*(iParam0 + 36) = { -824.86f, 92.111f, 2405.911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -834.486f, 92.625f, 2412.879f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -833.019f, 92.604f, 2398.71f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -830.829f, 92.597f, 2398.705f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -827.994f, 92.604f, 2399.416f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -948.017f, 90.246f, 2443.329f };
			*(iParam0 + 36) = { -940.246f, 90.101f, 2439.536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -944.354f, 90.362f, 2433.664f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -943.069f, 90.368f, 2432.761f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -936.299f, 90.374f, 2429.44f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -935.053f, 90.383f, 2429.297f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -932.475f, 90.246f, 2435.743f };
			*(iParam0 + 36) = { -940.246f, 90.101f, 2439.536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -943.643f, 90.353f, 2452.65f };
			(*iParam0 + 140)[0] = 7168;
			*(iParam0 + 64[13]) = { -945.45f, 90.35f, 2452.563f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -957.561f, 90.786f, 2438.436f };
			(*iParam0 + 140)[2] = 2304;
			*(iParam0 + 64[33]) = { -953.349f, 90.786f, 2436.586f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -773.226f, 92.264f, 2441.655f };
			*(iParam0 + 36) = { -779.513f, 92.261f, 2435.719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789.443f, 92.336f, 2433.929f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -788.805f, 93.291f, 2415.236f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { -782.939f, 93.132f, 2421.574f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -781.724f, 93.106f, 2422.239f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -785.8f, 92.264f, 2429.783f };
			*(iParam0 + 36) = { -779.513f, 92.261f, 2435.719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789.063f, 93.199f, 2416.324f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -787.695f, 93.291f, 2416.819f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -784.003f, 92.958f, 2422.655f };
			(*iParam0 + 140)[2] = 4096;
			*(iParam0 + 64[33]) = { -788.074f, 92.302f, 2435.201f };
			(*iParam0 + 140)[3] = 4096;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 161.801f, 73.036f, 2209.601f };
			*(iParam0 + 36) = { 154.678f, 73.036f, 2214.532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 151.093f, 73.781f, 2231.127f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 149.66f, 73.778f, 2229.832f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { 149.334f, 73.78f, 2232.961f };
			(*iParam0 + 140)[2] = 20736;
			*(iParam0 + 64[33]) = { 130.805f, 73.285f, 2225.233f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 147.555f, 73.036f, 2219.463f };
			*(iParam0 + 36) = { 154.678f, 73.036f, 2214.532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 132.103f, 73.286f, 2222.323f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 163.447f, 73.758f, 2196.496f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 164.755f, 73.755f, 2196.096f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 168.478f, 73.286f, 2214.951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 112.178f, 73.036f, 2307.669f };
			*(iParam0 + 36) = { 113.796f, 73.036f, 2299.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 110.108f, 73.286f, 2288.538f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 121.847f, 73.286f, 2288.113f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 121.773f, 73.286f, 2289.774f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 121.96f, 73.286f, 2291.226f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 115.414f, 73.036f, 2290.921f };
			*(iParam0 + 36) = { 113.796f, 73.036f, 2299.295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 117.484f, 73.286f, 2310.052f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 105.745f, 73.286f, 2310.477f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 105.819f, 73.286f, 2308.816f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 105.632f, 73.286f, 2307.364f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 125.52f, 72.495f, 2253.003f };
			*(iParam0 + 36) = { 123.009f, 73.014f, 2261.074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112.309f, 73.767f, 2280.208f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { 112.308f, 73.641f, 2277.641f };
			(*iParam0 + 140)[1] = 9216;
			*(iParam0 + 64[23]) = { 113.096f, 73.649f, 2273.542f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 113.108f, 73.66f, 2271.663f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 120.498f, 72.495f, 2269.145f };
			*(iParam0 + 36) = { 123.009f, 73.014f, 2261.074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112.671f, 73.644f, 2276.903f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 117.043f, 73.643f, 2240.313f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 118.516f, 73.712f, 2240.557f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 124.33f, 76.749f, 2238.564f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -4297.778f, 22.269f, 4404.503f };
			*(iParam0 + 36) = { -4304.795f, 22.573f, 4404.685f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4306.099f, 22.155f, 4415.161f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { -4311.022f, 23.058f, 4412.995f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4311.679f, 23.058f, 4411.987f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -4313.768f, 26.886f, 4406.992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -4304.795f, 22.573f, 4404.685f };
			*(iParam0 + 36) = { -4297.778f, 22.269f, 4404.503f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4305.446f, 22.139f, 4414.692f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -4306.939f, 22.322f, 4414.795f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4309.754f, 23.058f, 4413.441f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -4313.768f, 26.886f, 4406.992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -4267.992f, 18.109f, 4437.149f };
			*(iParam0 + 36) = { -4275.026f, 18.178f, 4441.885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4278.334f, 18.071f, 4449.653f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4279.857f, 18.071f, 4449.824f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -4281.086f, 18.071f, 4438.504f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4279.52f, 18.071f, 4437.386f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -4282.06f, 18.109f, 4446.621f };
			*(iParam0 + 36) = { -4275.026f, 18.178f, 4441.885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4277.958f, 18.071f, 4437.547f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4276.217f, 18.076f, 4436.355f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4270.787f, 18.071f, 4432.743f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4269.763f, 18.071f, 4433.286f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -4318.445f, 22.086f, 4450.013f };
			*(iParam0 + 36) = { -4318.897f, 22.086f, 4440.917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4330.111f, 25.409f, 4422.815f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4329.889f, 25.581f, 4421.464f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4329.611f, 25.573f, 4420.175f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -4312.611f, 22.004f, 4423.452f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -4319.349f, 22.086f, 4431.821f };
			*(iParam0 + 36) = { -4318.897f, 22.086f, 4440.917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4322.033f, 22.087f, 4455.366f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4323.083f, 22.087f, 4453.766f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4324.211f, 22.094f, 4451.612f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -4325.245f, 22.128f, 4450.168f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2732.999f, 32.668f, 4258.262f };
			*(iParam0 + 36) = { -2724.731f, 32.559f, 4254.918f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2720.958f, 32.28f, 4245.056f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2719.41f, 32.28f, 4244.509f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2713.209f, 32.808f, 4256.949f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2714.787f, 32.827f, 4257.932f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2716.179f, 32.668f, 4250.88f };
			*(iParam0 + 36) = { -2724.589f, 33.196f, 4254.571f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2725.793f, 32.826f, 4264.401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2726.701f, 32.825f, 4265.115f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2737.822f, 32.607f, 4253.199f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2736.711f, 32.607f, 4251.915f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2678.78f, 31.48f, 4241.123f };
			*(iParam0 + 36) = { -2688.745f, 31.42f, 4241.607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2700.972f, 31.57f, 4254.442f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2702.482f, 32.011f, 4254.482f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2704.879f, 32.28f, 4235.066f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2704.098f, 32.176f, 4233.792f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2698.71f, 31.48f, 4242.091f };
			*(iParam0 + 36) = { -2688.745f, 31.42f, 4241.607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2679.489f, 32.5f, 4232.727f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2677.893f, 32.5f, 4233.058f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2671.652f, 31.192f, 4248.009f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2683.122f, 31.548f, 4248.685f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -819.766f, 12.801f, 3773.009f };
			*(iParam0 + 36) = { -813.468f, 12.801f, 3766.967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804.586f, 13.051f, 3742.726f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -803.14f, 13.551f, 3764.739f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -804.056f, 13.551f, 3765.803f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -805.158f, 13.551f, 3767.062f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -807.17f, 12.801f, 3760.925f };
			*(iParam0 + 36) = { -813.468f, 12.801f, 3766.967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -809.813f, 13.551f, 3771.118f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -812.055f, 13.551f, 3773.48f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -813.522f, 13.551f, 3774.942f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -816.089f, 13.551f, 3777.198f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -787.179f, 12.801f, 3736.633f };
			*(iParam0 + 36) = { -793.017f, 12.801f, 3743.048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -811.045f, 13.051f, 3750.048f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -810.352f, 13.051f, 3748.774f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806.995f, 13.051f, 3746.105f };
			(*iParam0 + 140)[2] = 21504;
			*(iParam0 + 64[33]) = { -806.253f, 13.051f, 3744.332f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -798.855f, 12.801f, 3749.463f };
			*(iParam0 + 36) = { -793.017f, 12.801f, 3743.048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789.346f, 13.04f, 3730.211f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -786.917f, 13.037f, 3728.203f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -785.021f, 13.051f, 3724.668f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -782.264f, 13.036f, 3740.828f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -804.814f, 13.051f, 3719.617f };
			*(iParam0 + 36) = { -798.673f, 13.051f, 3713.655f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -800.2f, 13.12f, 3705.603f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -799.261f, 13.12f, 3704.608f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -797.36f, 13.12f, 3703.65f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -788.266f, 13.051f, 3712.833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -798.673f, 13.051f, 3713.655f };
			*(iParam0 + 36) = { -804.814f, 13.051f, 3719.617f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804.219f, 13.051f, 3729.436f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -805.748f, 13.051f, 3729.628f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -808.559f, 13.051f, 3730.366f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -813.656f, 13.051f, 3715.872f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 735.953f, 78.306f, 1324.242f };
			*(iParam0 + 36) = { 735.953f, 78.306f, 1315.071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 729.253f, 48.486f, 1309.157f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 729.192f, 78.486f, 1307.499f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 742.653f, 78.425f, 1306.141f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 743.264f, 78.425f, 1307.125f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 735.953f, 78.306f, 1305.9f };
			*(iParam0 + 36) = { 735.953f, 78.306f, 1315.071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 742.376f, 78.425f, 1320.613f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 741.937f, 78.425f, 1321.135f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 741.855f, 78.425f, 1322.617f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 729.187f, 78.486f, 1322.833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 788.067f, 78.306f, 1292.354f };
			*(iParam0 + 36) = { 788.064f, 78.306f, 1301.43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 794.4f, 78.456f, 1312.086f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 794.491f, 78.456f, 1313.429f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 781.088f, 78.413f, 1322.206f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 780.901f, 78.413f, 1320.856f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 788.061f, 78.306f, 1310.506f };
			*(iParam0 + 36) = { 788.064f, 78.306f, 1301.43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 782.021f, 78.419f, 1294.476f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 779.472f, 78.42f, 1290.639f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 780.614f, 78.42f, 1289.73f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 797.764f, 78.468f, 1288.355f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 686.033f, 78.197f, 1303.161f };
			*(iParam0 + 36) = { 685.943f, 78.195f, 1312.249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 692.386f, 78.49f, 1319.771f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 693.316f, 78.474f, 1329.634f };
			(*iParam0 + 140)[1] = 256;
			*(iParam0 + 64[23]) = { 680.325f, 79.321f, 1325.2f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 679.214f, 79.322f, 1323.885f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 685.853f, 78.197f, 1321.337f };
			*(iParam0 + 36) = { 685.943f, 78.195f, 1312.249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 671.907f, 78.472f, 1293.629f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 671.832f, 78.47f, 1291.321f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 691.761f, 78.49f, 1290.059f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 691.998f, 78.49f, 1296.535f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { 739.831f, 78.306f, 1252.583f };
			*(iParam0 + 36) = { 730.21f, 78.306f, 1252.583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 723.05f, 78.471f, 1260.361f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 719.061f, 78.471f, 1260.12f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 718.014f, 78.471f, 1259.29f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 699.142f, 78.527f, 1242.135f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { 720.589f, 78.306f, 1252.583f };
			*(iParam0 + 36) = { 730.21f, 78.306f, 1252.583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 743.34f, 78.504f, 1244.251f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 755.658f, 78.422f, 1260.858f };
			(*iParam0 + 140)[1] = 512;
			*(iParam0 + 64[23]) = { 746.283f, 78.422f, 1259.612f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { 744.823f, 78.421f, 1260.437f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { 686.412f, 78.306f, 1351.855f };
			*(iParam0 + 36) = { 686.271f, 78.306f, 1361.19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 693.253f, 78.381f, 1375.135f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 691.817f, 78.373f, 1376.577f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 681.885f, 78.446f, 1380.694f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 680.597f, 78.502f, 1372.951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { 686.13f, 78.306f, 1370.525f };
			*(iParam0 + 36) = { 686.271f, 78.306f, 1361.19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 679.044f, 78.306f, 1346.869f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 678.93f, 79.291f, 1340.874f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { 692.642f, 78.485f, 1345.834f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 693.52f, 78.485f, 1347.342f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(iParam0 + 24) = { 732.158f, 78.314f, 1399.543f };
			*(iParam0 + 36) = { 741.11f, 78.306f, 1397.618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 750.645f, 78.611f, 1386.18f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 751.968f, 78.606f, 1385.991f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 756.953f, 78.306f, 1385.658f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 751.965f, 80.39f, 1404.842f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(iParam0 + 24) = { 750.062f, 78.314f, 1395.693f };
			*(iParam0 + 36) = { 741.11f, 78.306f, 1397.618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 175.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 734.462f, 79.769f, 1408.614f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 731.99f, 79.78f, 1408.546f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 727.562f, 78.811f, 1408.402f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 723.946f, 78.804f, 1407.98f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_275(int iParam0, int iParam1) //Position: 0x142BA / 82618
{
	if (iLocal_8 != 0)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967295)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967292)
	{
		iParam0->f_48 = 10.0f;
		iParam0->f_52 = 30.0f;
		iParam0->f_56 = 1;
		iParam0->f_60 = 4;
		*(iParam0 + 64[03]) = { 111.425f, 73.767f, 2280.372f };
		(*iParam0 + 140)[0] = 5120;
		*(iParam0 + 64[13]) = { 112.086f, 73.639f, 2278.207f };
		(*iParam0 + 140)[1] = 12800;
		*(iParam0 + 64[23]) = { 113.136f, 73.646f, 2273.555f };
		(*iParam0 + 140)[2] = 1024;
		*(iParam0 + 64[33]) = { 113.364f, 73.645f, 2272.118f };
		(*iParam0 + 140)[3] = 16896;
		return 1;
	}
	if (iParam1 == 4294967294)
	{
		if (Global_29006 == Global_30668[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -806.792f, 92.727f, 2373.401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807.277f, 92.736f, 2375.261f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -809.876f, 92.834f, 2381.274f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -823.197f, 92.307f, 2378.322f };
			(*iParam0 + 140)[3] = 1024;
			*(iParam0 + 64[43]) = { -823.026f, 92.375f, 2376.612f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -822.463f, 92.431f, 2375.01f };
			(*iParam0 + 140)[5] = 20992;
			return 1;
		}
		if (Global_29006 == Global_30640[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2160.207f, 16.882f, 2605.83f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2158.595f, 16.881f, 2605.596f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2159.184f, 16.894f, 2605.341f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -2155.752f, 16.449f, 2618.374f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2153.08f, 16.371f, 2616.611f };
			(*iParam0 + 140)[4] = 17408;
			*(iParam0 + 64[53]) = { -2154.778f, 16.401f, 2617.199f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30668[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { 155.69f, 73.755f, 2200.008f };
			(*iParam0 + 140)[0] = 39168;
			*(iParam0 + 64[13]) = { 158.627f, 73.755f, 2198.852f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { 160.233f, 73.755f, 2197.97f };
			(*iParam0 + 140)[2] = 4608;
			*(iParam0 + 64[33]) = { 172.272f, 73.286f, 2210.202f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { 169.259f, 73.286f, 2213.359f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { 168.629f, 73.286f, 2214.713f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30707[2])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -809.175f, 16.665f, 3709.376f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807.866f, 16.665f, 3708.143f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806.33f, 16.665f, 3706.44f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -800.715f, 16.665f, 3700.73f };
			(*iParam0 + 140)[3] = 4352;
			*(iParam0 + 64[43]) = { -785.693f, 13.051f, 3713.464f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -785.114f, 13.051f, 3716.611f };
			(*iParam0 + 140)[5] = 35072;
			return 1;
		}
		if (Global_29006 == Global_30717[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -143.332f, 119.009f, 1353.172f };
			*(iParam0 + 64[13]) = { -144.653f, 120.644f, 1357.015f };
			*(iParam0 + 64[23]) = { -144.869f, 119.855f, 1359.631f };
			*(iParam0 + 64[33]) = { -129.628f, 118.869f, 1352.225f };
			*(iParam0 + 64[43]) = { -128.989f, 118.869f, 1358.801f };
			*(iParam0 + 64[53]) = { -129.897f, 118.869f, 1361.462f };
			return 1;
		}
		if (Global_29006 == Global_30717[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 100.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 853.294f, 77.517f, 1279.476f };
			*(iParam0 + 64[13]) = { 852.864f, 77.517f, 1282.613f };
			*(iParam0 + 64[23]) = { 853.532f, 77.517f, 1283.355f };
			*(iParam0 + 64[33]) = { 859.177f, 77.517f, 1267.618f };
			*(iParam0 + 64[43]) = { 861.636f, 77.517f, 1278.204f };
			*(iParam0 + 64[53]) = { 861.581f, 77.517f, 1279.349f };
			return 1;
		}
		if (Global_29006 == Global_30693[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 50.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2689.855f, 31.151f, 4274.476f };
			(*iParam0 + 140)[0] = 35072;
			*(iParam0 + 64[13]) = { -2689.877f, 31.151f, 4278.589f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { -2690.326f, 31.152f, 4279.999f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { -2703.691f, 31.151f, 4280.464f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2704.23f, 31.155f, 4278.981f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { -2703.474f, 31.146f, 4271.279f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
	}
	if (iParam1 == 4294967293)
	{
		if (Global_29006 == Global_30658[4])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -3679.563f, 8.483f, 3479.026f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -3675.23f, 8.26f, 3484.906f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -3673.747f, 8.256f, 3481.049f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -3675.517f, 8.201f, 3492.157f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	iParam0->f_48 = 10.0f;
	iParam0->f_52 = 30.0f;
	iParam0->f_56 = 1;
	iParam0->f_60 = 0;
	return 1;
}

var Function_276(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x14AD8 / 84696
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_284(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_283(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_279(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_277();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_277() //Position: 0x14D68 / 85352
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	iVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_278(iVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_278(int iParam0, int iParam1) //Position: 0x14DCB / 85451
{
	ITERATE_EVERYWHERE(iParam0);
	ITERATE_ON_OBJECT_TYPE(iParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(iParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(iParam0, GET_ITERATOR_PARENT(iParam0));
	}
	return;
}

bool Function_279(bool bParam0) //Position: 0x14DFA / 85498
{
	if (Function_282(256))
	{
		return 0;
	}
	if (Function_282(262144))
	{
		return 0;
	}
	if (Function_281())
	{
		return 0;
	}
	if (!Function_282(1))
	{
		return 0;
	}
	if (!Function_282(4096))
	{
		return 0;
	}
	if (bParam0 && Function_280(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_282(2048))
	{
		return 0;
	}
	if (Function_42() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_280(int iParam0) //Position: 0x14E70 / 85616
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_281() //Position: 0x14E81 / 85633
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_282(int iParam0) //Position: 0x14E9A / 85658
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_283(int iParam0) //Position: 0x14EB8 / 85688
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_284(int iParam0) //Position: 0x14ECE / 85710
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_285(int iParam0) //Position: 0x14EE3 / 85731
{
	struct<2> Var0;
	
	PRINTSTRING("SWAP_BOTTOM_CARD_WITH_HOLD_OUT_DEVICE");
	PRINTNL();
	Var0 = { StackVal, *(iParam0 + 1364) };
	Function_286(iParam0 + 1364);
	*(iParam0 + 1364) = { StackVal, *(iParam0 + 1396[((iParam0 + 1396)->f_424 - 1)2]) };
	*(iParam0 + 1396[((iParam0 + 1396)->f_424 - 1)2]) = { StackVal, Var0 };
	Function_373(StackVal, *(iParam0 + 1364));
	return;
}

void Function_286(int iParam0) //Position: 0x14F65 / 85861
{
	*iParam0 = 4294967295;
	iParam0->f_4 = 4294967295;
	return;
}

void Function_287(int iParam0) //Position: 0x14F74 / 85876
{
	PRINTSTRING("INSERT_BOTTOM_CARD_INTO_HOLD_OUT_DEVICE");
	PRINTNL();
	*(iParam0 + 1364) = { StackVal, *(iParam0 + 1396[((iParam0 + 1396)->f_424 - 1)2]) };
	(iParam0 + 1396)->f_424 = ((iParam0 + 1396)->f_424 - 1);
	Function_373(StackVal, *(iParam0 + 1364));
	return;
}

void Function_288(int iParam0) //Position: 0x14FE0 / 85984
{
	if (!iParam0->f_1364 != 4294967295)
	{
		iParam0->f_1364 = 4294967295;
		(iParam0 + 1364)->f_4 = 4294967295;
	}
	return;
}

void Function_289(int iParam0, int iParam1) //Position: 0x14FFF / 86015
{
	vector3 vVar0;
	struct<2> Var3;
	int iVar5;
	struct<8> Var6;
	
	PRINTSTRING("SWAP_CARD_FROM_HAND_TO_HOLD_OUT_DEVICE");
	PRINTNL();
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Var3 = { StackVal, *(iParam0 + 1364) };
	Function_286(iParam0 + 1364);
	iVar5 = Function_218(1);
	*(iParam0 + 1364) = { StackVal, *(iParam0 + 12[iVar553] + 36[iParam12]) };
	*(iParam0 + 12[iVar553] + 36[iParam12]) = { StackVal, Var3 };
	DESTROY_OBJECT((*iParam0 + 12[iVar553] + 36 + 60)[iParam1]);
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&Var3, 0) };
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam0 + 12[iVar553] + 36 + 60)[iParam1] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), &Var6, vVar0, 0.0f, 0.0f, 0.0f, 1);
	Function_290(iParam0 + 12[iVar553], iParam1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_439((*iParam0 + 12[iVar553] + 36 + 60)[iParam1], (*iParam0 + 12)[iVar553]);
	Function_373(StackVal, *(iParam0 + 1364));
	return;
}

void Function_290(int iParam0, int iParam1) //Position: 0x150FC / 86268
{
	if (iParam1 == 0)
	{
		(*iParam0 + 36 + 72)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 36 + 60)[0], *iParam0, "wrist_l_attachment", "grab", 4294967295);
		Function_439((*iParam0 + 36 + 60)[0], *iParam0);
	}
	else if (iParam1 == 1)
	{
		(*iParam0 + 36 + 72)[1] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 36 + 60)[1], *iParam0, "arm_l_attachment", "grab", 4294967295);
		Function_439((*iParam0 + 36 + 60)[1], *iParam0);
	}
	return;
}

void Function_291(int iParam0) //Position: 0x15197 / 86423
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = GET_STICK_X(Function_454(), 0, 1);
	if (FABS(bVar0) > 0.1f)
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
	vVar1.x = 1.0f;
	vVar1.f_4 = (iParam0->f_20 * Function_293(iParam0->f_32, iParam0->f_24, iParam0->f_16));
	vVar1.f_8 = 0.0f;
	VNORMALIZE(&vVar1);
	*(iParam0 + 32) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(*(iParam0 + 44), *(iParam0 + 32), StackVal) * Vector(fLocal_196, fLocal_196, fLocal_196), StackVal, StackVal) };
	if (iParam0->f_32 > -10.0f)
	{
		iParam0->f_32 = -10.0f;
		if (iParam0->f_44 > 0.0f)
		{
			Function_76();
			*(iParam0 + 44) = { StackVal, StackVal, Function_76() };
		}
	}
	else if (iParam0->f_32 < 10.0f)
	{
		iParam0->f_32 = 10.0f;
		if (iParam0->f_44 < 0.0f)
		{
			Function_76();
			*(iParam0 + 44) = { StackVal, StackVal, Function_76() };
		}
	}
	HUD_COUNTER_SET((iParam0->f_32 * 100.0f));
	UI_SET_PROGRESS_BAR_VAL("Poker_CheatMeter", (((iParam0->f_32 + 10.0f) / 20.0f) * 100.0f));
	if (FABS(iParam0->f_32) < 8.0f)
	{
		iParam0->f_68 = (iParam0->f_68 + fLocal_196);
		if (iParam0->f_68 < 1.0f)
		{
			iParam0->f_60 = 1;
		}
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_R", 255);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_G", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_B", false);
	}
	else if (FABS(iParam0->f_32) > 3.0f)
	{
		iParam0->f_64 = (iParam0->f_64 + fLocal_196);
		if (iParam0->f_64 < 1.5f)
		{
			iParam0->f_56 = 1;
		}
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_R", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_G", 255);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_B", false);
	}
	else
	{
		iParam0->f_64 = 0.0f;
		iParam0->f_68 = 0.0f;
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_R", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_G", false);
		FLASH_SET_INT("miniGame_Poker", "_pxxPokerBallCol_B", 255);
	}
	iParam0->f_32 = (iParam0->f_32 + (iParam0->f_28 * RAND_FLOAT_RANGE(-1.0f, 1.0f)));
	vVar4 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV((-vVar1.y * *iParam0)), vVar1, StackVal) };
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, vVar4, vVar7) * Vector(bVar0, bVar0, bVar0), StackVal, StackVal), StackVal, StackVal) };
	*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar7, *(iParam0 + 44), StackVal) * Vector(fLocal_196, fLocal_196, fLocal_196), StackVal, StackVal) / Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12), StackVal, StackVal) };
	(iParam0 + 32)->f_4 = (iParam0->f_20 * Function_292(iParam0->f_32, iParam0->f_24, iParam0->f_16));
	if (iParam0->f_44 < 0.0f)
	{
		*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(iParam0 + 44))), vVar1, StackVal) };
	}
	else
	{
		*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(iParam0 + 44))), -Vector(vVar1, StackVal, StackVal), StackVal) };
	}
	return;
}

float Function_292(float fParam0, float fParam1, float fParam2) //Position: 0x15541 / 87361
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
	return (EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2))) / (fParam2 * SQRT((2.0f * 3.14159f))));
}

float Function_293(float fParam0, float fParam1, float fParam2) //Position: 0x1557E / 87422
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
	return (((-fVar0 / (fParam2 * fParam2)) * EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2)))) / (fParam2 * SQRT((2.0f * 3.14159f))));
}

void Function_294(int iParam0) //Position: 0x155C5 / 87493
{
	int iVar0;
	
	if (IS_OBJECT_VALID(bLocal_282))
	{
		DESTROY_OBJECT(bLocal_282);
	}
	if (IS_OBJECT_VALID(bLocal_283))
	{
		DESTROY_OBJECT(bLocal_283);
	}
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			Function_260(iParam0 + 12[StackVal53] + 36);
			(iParam0 + 12[053])->f_152 = StackVal;
			SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[StackVal53], "sit_poker/Player/card_idle/idle");
		}
		iVar0++;
	}
	Function_260(iParam0 + 1824);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1916)
	{
		if (IS_OBJECT_VALID((*iParam0 + 1916)[iVar0]))
		{
			DESTROY_OBJECT((*iParam0 + 1916)[iVar0]);
		}
		iVar0++;
	}
	Function_296(iParam0);
	iParam0->f_1944 = 0;
	iParam0->f_1948 = 0;
	Function_311(iParam0);
	iParam0->f_1388 = Function_449(iParam0 + 1288, iParam0->f_1388);
	iParam0->f_1392 = Function_449(iParam0 + 1288, iParam0->f_1388);
	UI_LABEL_SET_VALUE("nBetAmount", false);
	Function_273(iParam0);
	Function_295(iParam0 + 1396);
	return;
}

void Function_295(int iParam0) //Position: 0x156FC / 87804
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_424)
	{
		iVar1 = RAND_INT_RANGE(false, (iParam0->f_424 - 1));
		Var2 = { StackVal, *iParam0[iVar12] };
		*iParam0[iVar12] = { StackVal, *iParam0[iVar02] };
		*iParam0[iVar02] = { StackVal, Var2 };
		iVar0++;
	}
	if (bLocal_919)
	{
		(*iParam0)[02] = 0;
		iParam0[02]->f_4 = 1;
		(*iParam0)[12] = 0;
		iParam0[12]->f_4 = 2;
		(*iParam0)[22] = 1;
		iParam0[22]->f_4 = 2;
		(*iParam0)[32] = 2;
		iParam0[32]->f_4 = 2;
		(*iParam0)[42] = 3;
		iParam0[42]->f_4 = 2;
		(*iParam0)[52] = 8;
		iParam0[52]->f_4 = 2;
		(*iParam0)[62] = 4;
		iParam0[62]->f_4 = 2;
		(*iParam0)[72] = 5;
		iParam0[72]->f_4 = 2;
		(*iParam0)[82] = 6;
		iParam0[82]->f_4 = 2;
		(*iParam0)[92] = 7;
		iParam0[92]->f_4 = 2;
		(*iParam0)[102] = 9;
		iParam0[102]->f_4 = 2;
		(*iParam0)[112] = 9;
		iParam0[112]->f_4 = 2;
		(*iParam0)[122] = 10;
		iParam0[122]->f_4 = 2;
		(*iParam0)[132] = 11;
		iParam0[132]->f_4 = 2;
		(*iParam0)[142] = 12;
		iParam0[142]->f_4 = 2;
		(*iParam0)[152] = 7;
		iParam0[152]->f_4 = 0;
		(*iParam0)[162] = 8;
		iParam0[162]->f_4 = 0;
	}
	if (bLocal_920)
	{
		(*iParam0)[02] = 0;
		iParam0[02]->f_4 = 1;
		(*iParam0)[12] = 0;
		iParam0[12]->f_4 = 2;
		(*iParam0)[22] = 1;
		iParam0[22]->f_4 = 2;
		(*iParam0)[32] = 2;
		iParam0[32]->f_4 = 2;
		(*iParam0)[42] = 3;
		iParam0[42]->f_4 = 2;
		(*iParam0)[52] = 8;
		iParam0[52]->f_4 = 1;
		(*iParam0)[62] = 4;
		iParam0[62]->f_4 = 2;
		(*iParam0)[72] = 5;
		iParam0[72]->f_4 = 2;
		(*iParam0)[82] = 6;
		iParam0[82]->f_4 = 2;
		(*iParam0)[92] = 7;
		iParam0[92]->f_4 = 2;
		(*iParam0)[102] = 9;
		iParam0[102]->f_4 = 2;
		(*iParam0)[112] = 9;
		iParam0[112]->f_4 = 1;
		(*iParam0)[122] = 5;
		iParam0[122]->f_4 = 1;
		(*iParam0)[132] = 6;
		iParam0[132]->f_4 = 1;
		(*iParam0)[142] = 7;
		iParam0[142]->f_4 = 1;
		(*iParam0)[152] = 7;
		iParam0[152]->f_4 = 0;
		(*iParam0)[162] = 8;
		iParam0[162]->f_4 = 0;
	}
	return;
}

void Function_296(int iParam0) //Position: 0x1595B / 88411
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
			if (!Function_297(StackVal, StackVal, *(iParam0 + 1364), Var3))
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

bool Function_297(struct<5> Param0) //Position: 0x159CD / 88525
{
	if (StackVal && StackVal != Param0 != Param2)
	{
		return 1;
	}
	return 0;
}

void Function_298(int iParam0) //Position: 0x159EF / 88559
{
	if (!Function_31(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16++;
	return;
}

void Function_299(int iParam0) //Position: 0x15A13 / 88595
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

int Function_300(int iParam0, bool bParam1, bool bParam2) //Position: 0x15A92 / 88722
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
		Function_66(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_65(iParam0);
	if (bParam2)
	{
		Function_53(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

var Function_301(bool bParam0) //Position: 0x15CFE / 89342
{
	bool bVar0;
	
	bVar0 = Function_302();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_302() //Position: 0x15D15 / 89365
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

void Function_303(int iParam0, bool bParam1, int iParam2) //Position: 0x15DD1 / 89553
{
	char* cVar0;
	char* cVar4;
	struct<16> Var8;
	int iVar24;
	
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_305((*&Local_292 + 2128)[iParam0], &cVar0);
	if (((*&Local_292 + 2100)[iParam0] != 6 || (*&Local_292 + 2100)[iParam0] != 9) || (*&Local_292 + 2100)[iParam0] != 10)
	{
		Function_304((*&Local_292 + 2156)[iParam0], &cVar4);
	}
	else
	{
		Function_305((*&Local_292 + 2156)[iParam0], &cVar4);
	}
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iParam2, &Local_292) };
	iVar24 = Function_301((*&Local_292 + 2184)[iParam0]);
	switch ((*&Local_292 + 2100)[iParam0])
	{
		case 0x00000001:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_High", &Var8, iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_High_Self", Function_425(), iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Pair", &Var8, iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Pair_Self", Function_425(), iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_TwoPair", &Var8, iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_TwoPair_Self", Function_425(), iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Trips", &Var8, iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Trips_Self", Function_425(), iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				if ((*&Local_292 + 2128)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_An", &Var8, iVar24, &cVar0, "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight", &Var8, iVar24, &cVar0, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_292 + 2128)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_Self_An", Function_425(), iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Straight_Self", Function_425(), iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				if ((*&Local_292 + 2128)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_An", &Var8, iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush", &Var8, iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_292 + 2128)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_Self_An", Function_425(), iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_Flush_Self", Function_425(), iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FullHouse", &Var8, iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FullHouse_Self", Function_425(), iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FourKind", &Var8, iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_FourKind_Self", Function_425(), iVar24, &cVar0, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				if ((*&Local_292 + 2128)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_An", &Var8, iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush", &Var8, iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_292 + 2128)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_Self_An", Function_425(), iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_StraightFlush_Self", Function_425(), iVar24, &cVar0, &cVar4, 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_RoyalFlush", &Var8, iVar24, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Wins_RoyalFlush_Self", Function_425(), iVar24, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_304(char* cParam0, char* cParam1) //Position: 0x163D3 / 91091
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

void Function_305(char* cParam0, char* cParam1) //Position: 0x16458 / 91224
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

void Function_306(int iParam0) //Position: 0x16598 / 91544
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

void Function_307(char* cParam0, int iParam1, int iParam2) //Position: 0x165CC / 91596
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
	SET_CAMERA_POSITION(*cParam0, vVar10);
	SET_CAMERA_TARGET_POSITION(*cParam0, vVar13, 0);
	SET_CAMERA_FOV(*cParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar16);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar16, 1);
	return;
}

void Function_308(int iParam0, bool bParam1, int iParam2) //Position: 0x166B3 / 91827
{
	var uVar0;
	char* cVar4;
	struct<16> Var8;
	
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	Function_305((*&Local_292 + 2016)[iParam0], &uVar0);
	if (((*&Local_292 + 1988)[iParam0] != 6 || (*&Local_292 + 1988)[iParam0] != 9) || (*&Local_292 + 1988)[iParam0] != 10)
	{
		Function_304((*&Local_292 + 2044)[iParam0], &cVar4);
	}
	else
	{
		Function_305((*&Local_292 + 2044)[iParam0], &cVar4);
	}
	Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iParam2, &Local_292) };
	switch ((*&Local_292 + 1988)[iParam0])
	{
		case 0x00000001:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_High", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_High_Self", Function_425(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Pair", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Pair_Self", Function_425(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_TwoPair", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_TwoPair_Self", Function_425(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Trips", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Trips_Self", Function_425(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				if ((*&Local_292 + 2016)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_An", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_292 + 2016)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_Self_An", Function_425(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Straight_Self", Function_425(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				if ((*&Local_292 + 2016)[iParam0] == 12)
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_An", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_292 + 2016)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_Self_An", Function_425(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_Flush_Self", Function_425(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FullHouse", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FullHouse_Self", Function_425(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FourKind", &Var8, &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_FourKind_Self", Function_425(), &uVar0, "", "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				if ((*&Local_292 + 2016)[iParam0] == 12)
				{
				}
				else
				{
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush", &Var8, &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
				}
			}
			else if ((*&Local_292 + 2016)[iParam0] == 12)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush_Self_An", Function_425(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_StraightFlush_Self", Function_425(), &uVar0, &cVar4, "", 0, 2, 0, 0, 0);
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_RoyalFlush", &Var8, &cVar4, "", "", 0, 2, 0, 0, 0);
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Shows_RoyalFlush_Self", Function_425(), &cVar4, "", "", 0, 2, 0, 0, 0);
			}
			break;
	}
	return;
}

void Function_309(int iParam0) //Position: 0x16CA9 / 93353
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
			Function_439((*iParam0 + 36 + 60)[iVar0], *iParam0);
		}
		iVar0++;
	}
	return;
}

void Function_310(int iParam0) //Position: 0x16D53 / 93523
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
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(iParam0 + 36[iVar02], 0) };
			(*iParam0 + 36 + 60)[iVar0] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), &Var9, vVar2, vVar5, 1);
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

void Function_311(int iParam0) //Position: 0x16E90 / 93840
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
			Function_12(iParam0 + 12[StackVal53] + 204, 1);
		}
		iVar0++;
	}
	iParam0->f_1392 = Function_449(iParam0 + 1288, iParam0->f_1388);
	return;
}

bool Function_312(int iParam0) //Position: 0x16F15 / 93973
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
			if (Function_404(iParam0 + 12[StackVal53]))
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

void Function_313(int iParam0) //Position: 0x16FA1 / 94113
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
	iParam0->f_1984 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if (Function_404(iParam0 + 12[StackVal53]))
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
		iVar0++;
	}
	if (iVar2 == 0)
	{
		bVar4 = iParam0->f_1944;
	}
	else
	{
		iVar5 = 0;
		iVar0 = 0;
		while (iVar0 <= iParam0->f_1288)
		{
			if ((*iParam0 + 1288)[iVar03])
			{
				if ((iParam0 + 12[StackVal53])->f_152 >= iVar2)
				{
					iVar5 = (StackVal + ((iParam0 + 12[iVar553])->f_152 - iVar2));
					(iParam0 + 12[iVar253])->f_152 = StackVal;
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
	while (iVar0 <= iParam0->f_1984)
	{
		PRINTINT((*iParam0 + 1956)[iVar0]);
		PRINTSTRING(" ");
		if (Function_404(iParam0 + 12[(*iParam0 + 1956)[iVar0]53]))
		{
			iVar6 = Function_371(iParam0 + 12[(*iParam0 + 1956)[iVar0]53] + 36, iParam0 + 1824, &uVar8, &uVar9, &uVar10);
		}
		else
		{
			iVar6 = 0;
		}
		(*iParam0 + 1988)[iVar0] = uVar8;
		(*iParam0 + 2016)[iVar0] = uVar9;
		(*iParam0 + 2044)[iVar0] = uVar10;
		if (iVar6 >= iVar7)
		{
			iVar7 = iVar6;
			(*iParam0 + 2072)[0] = (*iParam0 + 1956)[iVar0];
			(*iParam0 + 2100)[0] = uVar8;
			(*iParam0 + 2128)[0] = uVar9;
			(*iParam0 + 2156)[0] = uVar10;
			iParam0->f_2212 = 1;
		}
		else if (iVar6 == iVar7)
		{
			iVar7 = iVar6;
			(*iParam0 + 2072)[iParam0->f_2212] = (*iParam0 + 1956)[iVar0];
			(*iParam0 + 2100)[iParam0->f_2212] = uVar8;
			(*iParam0 + 2128)[iParam0->f_2212] = uVar9;
			(*iParam0 + 2156)[iParam0->f_2212] = uVar10;
			iParam0->f_2212++;
		}
		iVar0++;
	}
	PRINTSTRING(" are eligible to win the pot valued at ");
	PRINTINT(bVar4);
	PRINTNL();
	PRINTSTRING("Player ");
	iVar11 = (bVar4 / iParam0->f_2212);
	bVar12 = (bVar4 - (iVar11 * iParam0->f_2212));
	iVar0 = 0;
	while (iVar0 <= iParam0->f_2212)
	{
		PRINTINT((*iParam0 + 2072)[iVar0]);
		PRINTSTRING(" wins ");
		(*iParam0 + 2184)[iVar0] = (iVar11 + CEIL((TO_FLOAT(bVar12) / IntToFloat(iParam0->f_2212))));
		PRINTINT((iVar11 + CEIL((TO_FLOAT(bVar12) / IntToFloat(iParam0->f_2212)))));
		PRINTNL();
		bVar12 = (bVar12 - CEIL((TO_FLOAT(bVar12) / IntToFloat(iParam0->f_2212))));
		iVar0++;
	}
	if ((Function_314(iParam0 + 2100, iParam0 + 2128, iParam0 + 2156, iParam0 + 1988, iParam0 + 2016, iParam0 + 2044, iParam0->f_1984) && Local_292.f_2212 != 1) && Local_292.f_1984 < 1)
	{
		Function_450(16384);
	}
	else
	{
		Function_267(16384);
	}
	return;
}

int Function_314(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x17340 / 95040
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

void Function_315(char* cParam0, vector3 vParam1) //Position: 0x173AF / 95151
{
	var uVar0;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	bVar3 = Function_200();
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	GET_POSITION(bVar3, &uVar0);
	GET_ACTOR_AXIS(bVar3, &vVar4, 2);
	vVar7 = { StackVal, StackVal, vParam1 };
	vVar7.f_4 = (vVar7.y + 2.0f);
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar7, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) };
	SET_CAMERA_POSITION(*cParam0, vVar7);
	SET_CAMERA_TARGET_POSITION(*cParam0, vParam1, 0);
	SET_CAMERA_FOV(*cParam0, 38.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, 0, 0.5f, 0.5f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar10);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar7, vVar10, 1);
}

int Function_316(int iParam0, int iParam1) //Position: 0x17458 / 95320
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1288)
	{
		if ((*iParam0 + 1288)[iVar03])
		{
			if (Function_404(iParam0 + 12[StackVal53]))
			{
				iVar1++;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_317(int iParam0) //Position: 0x174A7 / 95399
{
	int iVar0;
	
	if (Local_292.f_1392 > 0 || Local_292.f_1392 <= 6)
	{
	}
	iVar0 = StackVal;
	if (iParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_318(bool bParam0) //Position: 0x174E4 / 95460
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = bParam0;
	Function_213(&uVar1);
	if (Function_320(&uVar1) != bVar0)
	{
		Function_212(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_24(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_208(bVar0);
		Function_319(&Var2, 0);
		Function_205(&Var2);
	}
	return;
}

void Function_319(int iParam0, bool bParam1) //Position: 0x175E1 / 95713
{
	if (bParam1)
	{
		Function_77(iParam0, 2);
	}
	else
	{
		Function_12(iParam0, 2);
	}
	return;
}

int Function_320(int iParam0) //Position: 0x175FB / 95739
{
	return *iParam0;
}

var Function_321(bool bParam0) //Position: 0x17604 / 95748
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

void Function_322(struct<2>[] Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106) //Position: 0x17BB8 / 97208
{
	int iVar0[11];
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	char* cVar16;
	
	if (Function_199(256))
	{
		return;
	}
	iVar14 = 0;
	while (iVar14 <= 52)
	{
		iVar15 = (iVar14 % 5);
		bVar12 = (iVar14 / 5);
		bVar13 = Function_324(&(Param0[iVar142]));
		iVar0[bVar12] = (iVar0[bVar12] + SHIFT_LEFT(bVar13, iVar15 * 6));
		if (Global_30842[38])
		{
			if (iVar15 == 0)
			{
				PRINTSTRING("Deck ");
				PRINTINT(bVar12);
				PRINTSTRING(": ");
			}
			Function_215(StackVal, Param0[iVar142], &cVar16);
			PRINTSTRING(&cVar16);
			PRINTSTRING(",");
			if (iVar15 == 4)
			{
				PRINTNL();
				Function_323(iVar0[bVar12], 6);
				PRINTNL();
			}
		}
		iVar14++;
	}
	NET_SCRIPTMSG_SEND(3, 30, &iVar0, 12, 0);
	Function_450(768);
}

void Function_323(bool bParam0, int iParam1) //Position: 0x17C7D / 97405
{
	bool bVar0;
	
	bVar0 = 31;
	while (bVar0 > 0)
	{
		if (Function_24(bParam0, Function_147(bVar0)))
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

int Function_324(int iParam0) //Position: 0x17CC4 / 97476
{
	if (StackVal == 4294967295)
	{
		return 0;
	}
	if (*iParam0 == 4294967295)
	{
		return 0;
	}
	return (SHIFT_LEFT(StackVal, 4) || *iParam0);
}

bool Function_325(bool bParam0, bool bParam1, float fParam2) //Position: 0x17CE9 / 97513
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_318(bParam0);
	}
	Function_212(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_205(&Var0);
	}
	if (Function_336(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_335(&Var0, 0);
		Function_205(&Var0);
		Function_207();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_334(bParam0, iVar6, &uVar7))
	{
		if (Function_333())
		{
			if (!Function_332(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_319(&Var0, 1);
				Function_205(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_205(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_326(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
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
		Function_205(&Var0);
	}
	return 0;
}

bool Function_326(int iParam0) //Position: 0x17F3C / 98108
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_330(iVar0))
		{
			iVar1 = Function_327(iVar0);
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

int Function_327(int iParam0) //Position: 0x17F7F / 98175
{
	int iVar0;
	
	Function_329(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_213(&iVar0);
	}
	else
	{
		Function_328(&iVar0, iParam0);
	}
	return Function_320(&iVar0);
}

void Function_328(var uParam0, int iParam1) //Position: 0x17FA6 / 98214
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_329(int iParam0) //Position: 0x17FB9 / 98233
{
	Function_211(iParam0, 4294967286);
	return;
}

bool Function_330(int iParam0) //Position: 0x17FC7 / 98247
{
	return Function_331(iParam0);
}

int Function_331(bool bParam0) //Position: 0x17FD2 / 98258
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

bool Function_332(bool bParam0) //Position: 0x1808F / 98447
{
	return Function_24(*bParam0, 2);
}

bool Function_333() //Position: 0x1809C / 98460
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

bool Function_334(int iParam0, var uParam1, int iParam2) //Position: 0x180BA / 98490
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
		if (Function_330(iVar0))
		{
			iVar1 = Function_327(iVar0);
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

void Function_335(int iParam0, bool bParam1) //Position: 0x1810B / 98571
{
	if (bParam1)
	{
		Function_77(iParam0, 1);
	}
	else
	{
		Function_12(iParam0, 1);
	}
	return;
}

bool Function_336(int iParam0) //Position: 0x18125 / 98597
{
	return Function_24(*iParam0, 1);
}

int Function_337(bool bParam0, int iParam1, int iParam2) //Position: 0x18132 / 98610
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
	int iVar11;
	struct<16> Var12;
	struct<16> Var28;
	int iVar44;
	float fVar45;
	
	iVar0 = (bParam0 + 12[iParam153])->f_140;
	if (bParam0->f_1940 == 0)
	{
		fVar1 = Function_353(bParam0 + 12[Function_384(1)53] + 36);
	}
	else
	{
		fVar1 = (bParam0 + 12[Function_384(1)53])->f_208;
	}
	bVar2 = Function_352(bParam0, bParam0->f_1388, (bParam0 + 12[iParam153])->f_132);
	bVar3 = (bParam0 + 12[Function_384(1)53])->f_136;
	bVar4 = ((TO_FLOAT(bVar3) - IntToFloat(bParam0->f_1948)) / IntToFloat(bVar3));
	if (bVar4 > 0.0f)
	{
		bVar4 = 0.0f;
	}
	PRINTSTRING("Player is in position ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	switch (bParam0->f_1940)
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
			if (Local_230.f_180)
			{
				bVar7 = Function_341(bParam0, Function_218(1), Function_384(1));
				if (bVar7)
				{
				}
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
			if (Local_230.f_180)
			{
				bVar7 = Function_341(bParam0, Function_218(1), Function_384(1));
				if (bVar7)
				{
				}
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
			if (Local_230.f_180)
			{
				bVar7 = Function_341(bParam0, Function_218(1), Function_384(1));
				if (bVar7)
				{
				}
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
			if (Local_230.f_180)
			{
				bVar7 = Function_341(bParam0, Function_218(1), Function_384(1));
				if (bVar7)
				{
				}
				if (Function_384(1) == Function_414(bParam0))
				{
					bVar8 = true;
				}
			}
			break;
	}
	if (Local_230.f_180)
	{
		if ((!bVar8 && Function_383(bParam0) >= 2) && Function_384(1) != Function_414(bParam0))
		{
			if ((bParam0 + 12[Function_414(bParam0)53] + 36)->f_84 > 0)
			{
				bVar8 = true;
			}
		}
	}
	PRINTSTRING("WeightedStrength = ");
	PRINTFLOAT(bVar5);
	PRINTNL();
	if (Function_383(bParam0) < 1 || bParam0->f_1948 < 0)
	{
		if (((bVar7 || bVar8) || (bParam0 + 12[Function_218(1)53])->f_136 != 0) && Local_230.f_180)
		{
			Function_340(bParam0, iParam1, iParam2);
		}
		else if (bVar5 > (*bParam0 + 2248)[bParam0->f_1376])
		{
			if ((bParam0->f_1948 - iVar0) == 0)
			{
				Function_377(bParam0, iParam1, 0, 0, 0);
				if (Function_199(32768))
				{
					*iParam2 = 23;
				}
				else
				{
					*iParam2 = 20;
				}
			}
			else
			{
				iVar11 = RAND_INT_RANGE(false, ((100 * (bParam0 + 12[iParam153])->f_152) / Function_365(&Local_292)));
				if (iVar11 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/fold");
				}
				Function_380(&Local_292 + 12[Function_384(1)53]);
				if (!Function_199(2))
				{
					Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iParam1, &Local_292) };
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var12, "", "", "", 0, 2, 0, 0, 0);
				}
				if (!Function_199(32768))
				{
					if (Function_415(&uLocal_286, 2))
					{
						Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Local_230.f_180)
				{
					Function_339(bParam0, "folds");
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_218(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 507, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_411())
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 288, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 508, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_199(32768))
				{
					*iParam2 = 23;
				}
				else
				{
					*iParam2 = 21;
				}
			}
		}
		else if (bVar5 > (*bParam0 + 2280)[bParam0->f_1376])
		{
			if (bParam0->f_1948 - iVar0) <= ((bParam0 + 12[iParam153])->f_136 / 2)
			{
				if ((bParam0->f_1948 - iVar0) == 0)
				{
					fVar9 = RAND_FLOAT_RANGE(0.1f, 0.7f);
					bVar10 = CEIL((IntToFloat(bParam0->f_1944) * fVar9));
					if (StackVal <= bVar10)
					{
						bVar10 = StackVal;
					}
					if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
					{
						if (Local_230.f_180)
						{
							Function_340(bParam0, iParam1, iParam2);
						}
						else
						{
							bVar10 = (bParam0 + 12[iParam153])->f_136;
						}
					}
					if ((Function_341(bParam0, Function_218(1), Function_384(1)) && Local_230.f_180) && bVar10 <= (bParam0 + 12[Function_218(1)53])->f_136)
					{
						Function_340(bParam0, iParam1, iParam2);
					}
					else
					{
						Function_377(bParam0, iParam1, bVar10, 0, 0);
					}
				}
				else
				{
					bVar10 = (bParam0->f_1948 - iVar0);
					if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
					{
						if (Local_230.f_180)
						{
							Function_340(bParam0, iParam1, iParam2);
						}
						else
						{
							bVar10 = (bParam0 + 12[iParam153])->f_136;
						}
					}
					if ((Function_341(bParam0, Function_218(1), Function_384(1)) && Local_230.f_180) && bVar10 <= (bParam0 + 12[Function_218(1)53])->f_136)
					{
						Function_340(bParam0, iParam1, iParam2);
					}
					else
					{
						Function_377(bParam0, Function_384(1), bVar10, 0, 0);
					}
				}
				if (Function_199(32768))
				{
					*iParam2 = 23;
				}
				else
				{
					*iParam2 = 20;
				}
			}
			else if ((bParam0->f_1948 - iVar0) == 0)
			{
				Function_377(bParam0, iParam1, 0, 0, 0);
				if (Function_199(32768))
				{
					*iParam2 = 23;
				}
				else
				{
					*iParam2 = 20;
				}
			}
			else
			{
				if (!Function_199(2))
				{
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iParam1, &Local_292) };
					PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var28, "", "", "", 0, 2, 0, 0, 0);
				}
				iVar44 = RAND_INT_RANGE(false, ((100 * (bParam0 + 12[iParam153])->f_152) / Function_365(&Local_292)));
				if (iVar44 <= 4)
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/Player/bet_request/fold_B");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/fold");
				}
				Function_380(&Local_292 + 12[Function_384(1)53]);
				if (!Function_199(32768))
				{
					if (Function_415(&uLocal_286, 2))
					{
						Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				if (Local_230.f_180)
				{
					Function_339(bParam0, "folds");
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_218(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 507, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_411())
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 288, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 508, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				if (Function_199(32768))
				{
					*iParam2 = 23;
				}
				else
				{
					*iParam2 = 21;
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
			if (bParam0->f_1940 != 3 && bVar2 != 1.0f)
			{
				fVar45 = 1.0f;
			}
			if (fVar45 < 0.4f)
			{
				if (bParam0->f_1948 >= 0)
				{
					fVar9 = RAND_FLOAT_RANGE(1.0f, 2.5f);
					bVar10 = CEIL((IntToFloat((bParam0->f_1948 - iVar0)) * fVar9));
				}
				else
				{
					fVar9 = RAND_FLOAT_RANGE(0.2f, 1.1f);
					bVar10 = CEIL((IntToFloat(bParam0->f_1944) * fVar9));
				}
				if (bVar10 <= Function_338(bParam0, iParam1, bVar10))
				{
					bVar10 = Function_338(bParam0, iParam1, bVar10);
				}
				if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
				{
					bVar10 = (bParam0 + 12[iParam153])->f_136;
				}
				if (Function_383(bParam0) >= 1 && bVar10 < (bParam0->f_1948 - iVar0))
				{
					bVar10 = (bParam0->f_1948 - iVar0);
					if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
					{
						if (Local_230.f_180)
						{
							Function_340(bParam0, iParam1, iParam2);
						}
						else
						{
							bVar10 = (bParam0 + 12[iParam153])->f_136;
						}
					}
				}
				if ((Function_341(bParam0, Function_218(1), Function_384(1)) && Local_230.f_180) && bVar10 < (bParam0 + 12[Function_218(1)53])->f_136)
				{
					Function_340(bParam0, iParam1, iParam2);
				}
				else
				{
					Function_377(bParam0, Function_384(1), bVar10, 0, 0);
				}
			}
			else
			{
				PRINTSTRING("fPosition is equal to ");
				PRINTFLOAT(bVar2);
				PRINTNL();
				if (bParam0->f_1948 == 0)
				{
					PRINTSTRING("AI checks due to SLOW PLAY");
					PRINTNL();
					Function_377(bParam0, Function_384(1), 0, 0, 0);
				}
				else if (bVar5 > (*bParam0 + 2312)[bParam0->f_1376])
				{
					PRINTSTRING("AI calls due to SLOW PLAY");
					PRINTNL();
					bVar10 = (bParam0->f_1948 - iVar0);
					if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
					{
						if (Local_230.f_180)
						{
							Function_340(bParam0, iParam1, iParam2);
						}
						else
						{
							bVar10 = (bParam0 + 12[iParam153])->f_136;
						}
					}
					if ((Function_341(bParam0, Function_218(1), Function_384(1)) && bVar10 <= (bParam0 + 12[Function_218(1)53])->f_136) && Local_230.f_180)
					{
						Function_340(bParam0, iParam1, iParam2);
					}
					else
					{
						Function_377(bParam0, Function_384(1), bVar10, 0, 0);
					}
				}
				else
				{
					PRINTSTRING("AI raises due to SLOW PLAY (it's that strong)");
					PRINTNL();
					fVar9 = RAND_FLOAT_RANGE(2.0f, 5.0f);
					bVar10 = CEIL((IntToFloat((bParam0->f_1948 - iVar0)) * fVar9));
					if (bVar10 <= Function_338(bParam0, iParam1, bVar10))
					{
						bVar10 = Function_338(bParam0, iParam1, bVar10);
					}
					if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
					{
						if (Local_230.f_180)
						{
							Function_340(bParam0, iParam1, iParam2);
						}
						else
						{
							bVar10 = (bParam0 + 12[iParam153])->f_136;
						}
					}
					if (Function_383(bParam0) >= 1 && bVar10 < (bParam0->f_1948 - iVar0))
					{
						bVar10 = (bParam0->f_1948 - iVar0);
						if (bVar10 >= (bParam0 + 12[iParam153])->f_136)
						{
							if (Local_230.f_180)
							{
								Function_340(bParam0, iParam1, iParam2);
							}
							else
							{
								bVar10 = (bParam0 + 12[iParam153])->f_136;
							}
						}
					}
					if ((Function_341(bParam0, Function_218(1), Function_384(1)) && Local_230.f_180) && bVar10 <= (bParam0 + 12[Function_218(1)53])->f_136)
					{
						Function_340(bParam0, iParam1, iParam2);
					}
					else
					{
						Function_377(bParam0, Function_384(1), bVar10, 0, 0);
					}
				}
			}
			if (Function_199(32768))
			{
				*iParam2 = 23;
			}
			else
			{
				*iParam2 = 20;
			}
		}
	}
	else
	{
		Function_377(bParam0, Function_384(1), 0, 0, 0);
		if (Function_199(32768))
		{
			*iParam2 = 23;
		}
		else
		{
			*iParam2 = 20;
		}
	}
	Function_251(&iLocal_191);
	return 1;
}

int Function_338(bool bParam0, int iParam1, bool bParam2) //Position: 0x18D54 / 101716
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = (bParam0 + 12[iParam153])->f_140;
	iVar1 = bParam0->f_1948;
	iVar2 = (bParam0 + 12[Function_317(1)53])->f_144;
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

void Function_339(int iParam0, bool bParam1) //Position: 0x18DE6 / 101862
{
	if (Function_384(1) == Function_412(iParam0))
	{
		DECOR_SET_BOOL((*iParam0 + 12)[Function_384(1)53], bParam1, 1);
	}
	else if (Function_384(1) == Function_414(iParam0))
	{
		DECOR_SET_BOOL((*iParam0 + 12)[Function_384(1)53], bParam1, 1);
	}
	return;
}

void Function_340(bool bParam0, int iParam1, int iParam2) //Position: 0x18E29 / 101929
{
	struct<16> Var0;
	
	SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/fold");
	Function_380(&Local_292 + 12[Function_384(1)53]);
	if (!Function_199(2))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iParam1, &Local_292) };
		PRINT_OBJECTIVE_FORMAT(4.0f, "Poker_Player_Folds", &Var0, "", "", "", 0, 2, 0, 0, 0);
	}
	if (!Function_199(32768))
	{
		if (Function_415(&uLocal_286, 2))
		{
			Function_140("Poker_FoldHelp", 9.0f, 1, 0, 2, 1, 0);
		}
	}
	if (Local_230.f_180)
	{
		Function_339(bParam0, "folds");
	}
	else if (Function_264(&Local_292) && !HUD_IS_FADED())
	{
		if (iParam1 == Function_218(1))
		{
			SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 507, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else if (Function_411())
		{
			SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 288, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 508, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
	}
	if (Function_199(32768))
	{
		*iParam2 = 23;
	}
	else
	{
		*iParam2 = 21;
	}
	return;
}

bool Function_341(bool bParam0, int iParam1, int iParam2) //Position: 0x18F75 / 102261
{
	struct<23> Var0;
	struct<23> Var23;
	int iVar46;
	int iVar47;
	struct<107> Var48;
	struct<2> Var155;
	var uVar157;
	bool bVar158;
	bool bVar159;
	var uVar160;
	bool bVar161;
	bool bVar162;
	bool bVar163;
	bool bVar164;
	char* cVar165[64];
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 12[iParam253] + 36) };
	Var23 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 12[iParam153] + 36) };
	iVar46 = 0;
	while (iVar46 <= (bParam0 + 1824)->f_84)
	{
		Function_350(&Var23, bParam0 + 1824[iVar462]);
		Function_350(&Var0, bParam0 + 1824[iVar462]);
		iVar46++;
	}
	iVar47 = (5 - (bParam0 + 1824)->f_84);
	Var48 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 1396) };
	iVar46 = 0;
	while (iVar46 <= iVar47)
	{
		Function_349(&Var48);
		Var155 = { StackVal, Function_349(&Var48) };
		Function_350(&Var23, &Var155);
		Function_350(&Var0, &Var155);
		iVar46++;
	}
	PRINTSTRING("Player Hand is ");
	Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var23);
	PRINTSTRING("Opponent Hand is ");
	Function_381(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
	bVar163 = Function_342(&Var23, &uVar157, &bVar158, &bVar159);
	bVar164 = Function_342(&Var0, &uVar160, &bVar161, &bVar162);
	strcpy(&cVar165, "Player's Strength: ", 64);
	stradd(&cVar165, INT_TO_STRING(bVar163), 64);
	strcpy(&cVar165, "Opponent's Strength: ", 64);
	stradd(&cVar165, INT_TO_STRING(bVar164), 64);
	strcpy(&cVar165, "Player Hand Value 1: ", 64);
	stradd(&cVar165, INT_TO_STRING(bVar158), 64);
	strcpy(&cVar165, "Player Hand Value 2: ", 64);
	stradd(&cVar165, INT_TO_STRING(bVar159), 64);
	strcpy(&cVar165, "Opponent Hand Value 1: ", 64);
	stradd(&cVar165, INT_TO_STRING(bVar161), 64);
	strcpy(&cVar165, "Opponent Hand Value 2: ", 64);
	stradd(&cVar165, INT_TO_STRING(bVar162), 64);
	if (bVar163 <= bVar164)
	{
		return 1;
	}
	return 0;
}

var Function_342(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x19155 / 102741
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
		iVar58 = Function_348(uParam0, iVar55);
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
		iVar56 = (iVar56 + Function_347(&uVar15, 1, &(vVar29[43])));
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
		*uParam2 = Function_346(uParam0, iVar55);
		*uParam3 = iVar55;
		iVar56 = (6 * iVar57);
		iVar56 = (iVar56 + Function_344(uParam0, 5, iVar55));
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
		iVar56 = (iVar56 + Function_347(&uVar15, (iVar2 - 3), &(vVar29[33])));
	}
	else if (iVar8[2] > 2)
	{
		*uParam1 = 3;
		iVar56 = (3 * iVar57);
		*uParam2 = vVar29[23][0];
		*uParam3 = vVar29[23][1];
		iVar56 = (iVar56 + vVar29[23][0] * 13 * 13);
		iVar56 = (iVar56 + vVar29[23][1] * 13);
		iVar56 = (iVar56 + Function_347(&uVar15, (iVar2 - 4), &(vVar29[23])));
	}
	else if (iVar8[2] == 1)
	{
		*uParam1 = 2;
		iVar56 = (2 * iVar57);
		*uParam2 = vVar29[23][0];
		iVar56 = (iVar56 + vVar29[23][0] * 13 * 13 * 13);
		iVar56 = (iVar56 + Function_347(&uVar15, (iVar2 - 2), &(vVar29[23])));
	}
	else
	{
		*uParam1 = 1;
		*uParam2 = Function_343(uParam0);
		iVar56 = (1 * iVar57);
		iVar56 = (iVar56 + Function_347(&uVar15, iVar2, &(vVar29[23])));
	}
	return iVar56;
}

var Function_343(int iParam0) //Position: 0x195A6 / 103846
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

int Function_344(var uParam0, int iParam1, int iParam2) //Position: 0x195D9 / 103897
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
		iVar1 = (iVar1 + (Function_345(13, iParam1) * iVar0));
		iVar0 = (iVar0 - 1);
	}
	return iVar1;
}

int Function_345(int iParam0, int iParam1) //Position: 0x1965A / 104026
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

var Function_346(var uParam0, int iParam1) //Position: 0x1967B / 104059
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

int Function_347(var uParam0, int iParam1, int iParam2) //Position: 0x196BB / 104123
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
		iVar1 = (iVar1 + (Function_345(13, iParam1) * iVar0));
		iVar0 = (iVar0 - 1);
	}
	return iVar1;
}

var Function_348(var uParam0, int iParam1) //Position: 0x19714 / 104212
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

struct<8> Function_349(int iParam0) //Position: 0x1979B / 104347
{
	iParam0->f_420++;
	return StackVal, *(iParam0[(iParam0->f_420 - 1)2]);
}

void Function_350(int iParam0, int iParam1) //Position: 0x197BA / 104378
{
	if (Function_351(StackVal, iParam0, *iParam1))
	{
		LOG_ERROR("Trying to add a card already in hand");
	}
	else
	{
		*iParam0[iParam0->f_842] = { StackVal, *iParam1 };
		iParam0->f_84++;
	}
	return;
}

bool Function_351(var uParam0, struct<5> Param1) //Position: 0x19811 / 104465
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

var Function_352(int iParam0, int iParam1, int iParam2) //Position: 0x19849 / 104521
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = Function_316(iParam0, &uVar0);
	if (iParam2 == iParam1)
	{
		return 1.0f;
	}
	iVar2 = iParam2;
	iVar3 = 0;
	while (!iVar2 != iParam1)
	{
		iVar2 = Function_449(iParam0 + 1288, iVar2);
		if (Function_404(iParam0 + 12[StackVal53]))
		{
			iVar3++;
		}
	}
	return ((1.0f / IntToFloat(iVar1)) * IntToFloat((iVar1 - iVar3)));
}

var Function_353(int iParam0) //Position: 0x198A9 / 104617
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

int Function_354(bool bParam0, vector3 vParam1) //Position: 0x19A7C / 105084
{
	if (StackVal && Function_355(StackVal, (StackVal && Function_355(StackVal, Function_355(StackVal, StackVal, bParam0, "elbow_r_attachment", vParam1), bParam0, "hip_r_attachment", vParam1)), bParam0, "hip_l_attachment", vParam1))
	{
		return 1;
	}
	return 0;
}

bool Function_355(bool bParam0, bool bParam1, vector3 vParam2) //Position: 0x19AE7 / 105191
{
	vector3 vVar0;
	
	GET_OBJECT_NAMED_BONE_POSITION(bParam0, bParam1, &vVar0);
	if (Function_80(StackVal, StackVal, StackVal, StackVal, vVar0, vParam2) > 0.06f)
	{
		return 1;
	}
	return 0;
}

bool Function_356(bool bParam0) //Position: 0x19B15 / 105237
{
	if (IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/bet_allin") || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/bet_allin_B"))
	{
		return 1;
	}
	return 0;
}

bool Function_357(bool bParam0) //Position: 0x19B83 / 105347
{
	if ((((((((IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R/bet") || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R2/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G2/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B2/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R3/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G3/bet")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B3/bet"))
	{
		return 1;
	}
	return 0;
}

void Function_358(var uParam0, var uParam1, var uParam2) //Position: 0x19D1A / 105754
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
			*uParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -155.0f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_gped"))
		{
			*uParam1 = { 0.168f, 0.8f, -0.012f };
			*uParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -154.44f, 0.0f) };
		}
		else if (ACTOR_HAS_ANIM_SET(*uParam0, "sit_poker_oldm"))
		{
			*uParam1 = { 0.205f, 0.8f, 0.015f };
			*uParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -148.0f, 0.0f) };
		}
		else
		{
			*uParam1 = { 0.171f, 0.8f, -0.046f };
			*uParam2 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, -152.0f, 0.0f) };
		}
		UNK_0xF76F2BB3(uParam1, &vVar3, 0, 4);
		*uParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *uParam1, StackVal) };
	}
	return;
}

void Function_359() //Position: 0x19E37 / 106039
{
	if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !UI_ISACTIVE("Minigame_Quit_Confirmation_Popup"))
	{
		switch (iLocal_879)
		{
			case 0x00000000:
				if (IS_BUTTON_DOWN(Function_454(), 1, 1, 0) && IS_ACTION_NODE_PLAYING(Function_200(), "sit_poker/Player/look_at_cards/open_mid"))
				{
					Function_362(&cLocal_195, &Local_292, Function_384(1));
					iLocal_879 = 2;
				}
				else if (IS_BUTTON_DOWN(Function_454(), 0, 1, 0))
				{
					if (Local_292.f_1940 >= 0)
					{
						Function_410(&cLocal_195, &Local_292, 0);
						iLocal_879 = 3;
					}
				}
				else if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(cLocal_195) || CAMERA_GET_CURRENT_TRANSITION_TYPE(cLocal_195) != 1)
				{
					Function_361(&cLocal_195, &Local_292, Function_384(1), 0);
				}
				break;
			
			case 0x00000003:
				if (!IS_BUTTON_DOWN(Function_454(), 0, 1, 0) || iLocal_901 == 10)
				{
					Function_360(&cLocal_195, &Local_292, Function_384(1), 1);
					Function_374();
					iLocal_879 = 0;
				}
				break;
			
			case 0x00000002:
				if (!IS_BUTTON_DOWN(Function_454(), 1, 1, 0) || iLocal_901 == 10)
				{
					Function_360(&cLocal_195, &Local_292, Function_384(1), 1);
					Function_374();
					iLocal_879 = 0;
				}
				break;
			}
	}
	return;
}

void Function_360(char* cParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x19F74 / 106356
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
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
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar4, vVar1, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar13.f_4 = (vVar13.y + 0.7f);
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar7, vVar13, StackVal) * Vector(-0.6f, -0.6f, -0.6f), StackVal, StackVal) };
	SET_CAMERA_POSITION(*cParam0, vVar10);
	SET_CAMERA_TARGET_POSITION(*cParam0, vVar13, 0);
	SET_CAMERA_FOV(*cParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam0, 0))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, 0, 0f, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar16);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar16, 1);
}

void Function_361(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1A084 / 106628
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
	fVar13 = GET_STICK_X(Function_454(), 1, 1);
	if (fVar13 < -0.2f && fVar13 > 0.2f)
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
	fVar17 = (-1.0f * fLocal_188);
	fVar18 = (fVar17 + fVar15);
	fVar19 = (-0.5f * fLocal_189);
	fVar20 = (fVar19 + fVar16);
	fVar21 = ((-fLocal_186 * 10.0f) * fLocal_196);
	fVar22 = ((-fLocal_187 * 5.0f) * fLocal_196);
	fVar23 = ((fLocal_186 + (fVar18 / 1.0f)) + fVar21);
	fVar24 = ((fLocal_187 + (fVar20 / 1.0f)) + fVar22);
	fVar25 = (fLocal_188 + (fVar23 * fLocal_196));
	fVar26 = (fLocal_189 + (fVar24 * fLocal_196));
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
	fLocal_186 = fVar23;
	fLocal_188 = fVar25;
	fLocal_187 = fVar24;
	fLocal_189 = fVar26;
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
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
	{
		if (bParam3)
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 1.0f, 1.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar30);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar30, 1);
}

void Function_362(char* cParam0, int iParam1, int iParam2) //Position: 0x1A2C0 / 107200
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
	
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	if (!IS_OBJECT_VALID((*iParam1 + 12[iParam253] + 36 + 60)[0]))
	{
		return;
	}
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[iParam253]), &vVar0);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[iParam253]), &vVar6, 0);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[iParam253]), &vVar9, 1);
	GET_OBJECT_AXIS(GET_OBJECT_FROM_ACTOR((*iParam1 + 12)[iParam253]), &vVar3, 2);
	vVar12 = { StackVal, StackVal, vVar0 };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(-0.17f, -0.17f, -0.17f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar12, StackVal) * Vector(0.95f, 0.95f, 0.95f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar12, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	GET_OBJECT_POSITION((*iParam1 + 12[iParam253] + 36 + 60)[0], &vVar18);
	GET_OBJECT_POSITION((*iParam1 + 12[iParam253] + 36 + 60)[1], &vVar21);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar21, vVar18, StackVal) };
	vVar15 = { StackVal, StackVal, Vector(vVar15, StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
	vVar15.f_4 = (vVar15.y - 0.01f);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar15, StackVal) * Vector(-0.04f, -0.04f, -0.04f), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*cParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*cParam0);
	}
	SET_CAMERA_POSITION(*cParam0, vVar12);
	SET_CAMERA_TARGET_POSITION(*cParam0, vVar15, 0);
	SET_CAMERA_FOV(*cParam0, 31.0f);
	SET_CAMERA_NEAR_CLIP_PLANE(*cParam0, 0.1f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, 0, 0f, 0, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar24);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar12, vVar24, 1);
	return;
}

void Function_363() //Position: 0x1A450 / 107600
{
	Function_364(1024, 1, 0);
	Function_364(1, 0, 0);
	return;
}

void Function_364(int iParam0, bool bParam1, int iParam2) //Position: 0x1A464 / 107620
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_77(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_12(&Global_76905 + 132, iParam0);
	}
	return;
}

int Function_365(int iParam0) //Position: 0x1A48C / 107660
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

void Function_366(int iParam0, bool bParam1) //Position: 0x1A4F9 / 107769
{
	struct<5> Var0;
	
	if (!Function_214())
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
		
		case 0x00000005:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000002:
			Function_182(8, 1);
			break;
		
		case 0x00000001:
			Function_182(8, 1);
			break;
	}
	return;
}

int Function_367(int iParam0) //Position: 0x1A565 / 107877
{
	if ((iParam0 + 12[Function_384(1)53])->f_136 < 0 && (Function_383(iParam0) < 1 || iParam0->f_1948 < 0))
	{
		return 1;
	}
	return 0;
}

int Function_368(int iParam0) //Position: 0x1A592 / 107922
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_214())
	{
		return 0;
	}
	bVar0 = (30.0f - Function_480(iParam0));
	bVar1 = CEIL(bVar0);
	if (bVar0 >= 0.0f)
	{
		iParam0->f_8 = 0.0f;
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
		iParam0->f_8 = bVar0;
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

int Function_369(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A6E2 / 108258
{
	int iVar0;
	
	if (bParam1 < (iParam0->f_1948 - (iParam0 + 12[Function_384(1)53])->f_140))
	{
		bParam1 = (iParam0->f_1948 - (iParam0 + 12[Function_384(1)53])->f_140);
	}
	while (bParam1 <= Function_338(iParam0, Function_384(1), bParam1))
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
	iVar0 = Function_370(iParam0, Function_384(1));
	if (bParam1 > iVar0)
	{
		bParam1 = iVar0;
	}
	return bParam1;
}

var Function_370(int iParam0, int iParam1) //Position: 0x1A752 / 108370
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
				if (Function_404(iParam0 + 12[StackVal53]))
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

int Function_371(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1A831 / 108593
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam1->f_84)
	{
		Function_350(iParam0, iParam1[iVar02]);
		iVar0++;
	}
	uVar1 = Function_342(iParam0, uParam2, uParam3, uParam4);
	iVar0 = 0;
	while (iVar0 <= iParam1->f_84)
	{
		Function_372(iParam0);
		iVar0++;
	}
	iParam0->f_88 = uVar1;
	return uVar1;
}

void Function_372(int iParam0) //Position: 0x1A888 / 108680
{
	iParam0->f_84 = (iParam0->f_84 - 1);
	(*iParam0)[iParam0->f_842] = 4294967295;
	iParam0[iParam0->f_842]->f_4 = 4294967295;
	return;
}

void Function_373(int iParam0, var uParam1) //Position: 0x1A8AC / 108716
{
	struct<8> Var0;
	
	UI_ENTER("Poker_CheatCard");
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&iParam0, 1) };
	PRINTSTRING(&Var0);
	PRINTNL();
	UI_TEXTURE_SET_NAME("Poker_CheatCard", &Var0);
	return;
}

void Function_374() //Position: 0x1A8F1 / 108785
{
	fLocal_186 = 0.0f;
	fLocal_187 = 0.0f;
	fLocal_188 = 0.0f;
	fLocal_189 = 0.0f;
	return;
}

void Function_375() //Position: 0x1A903 / 108803
{
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	FLASH_SET_INT("numberSystem", "nshowTimer", true);
	FLASH_SET_STRING("numberSystem", "nTimerText", "Minigame_RemainingTime", 1);
	FLASH_SET_INT("numberSystem", "TimerColor", false);
	FLASH_SET_INT("numberSystem", "TimerAlert", false);
	return;
}

void Function_376(bool bParam0, int iParam1) //Position: 0x1A9B6 / 108982
{
	if (iParam1 >= 4294967295)
	{
		UI_LABEL_SET_TEXT("nScores.s0", "Poker_ChipsLabel");
		UI_LABEL_SET_VALUE("nScores.s0", (bParam0 + 12[iParam153])->f_136);
	}
	return;
}

void Function_377(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1A9FD / 109053
{
	bool bVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	char* cVar4;
	char* cVar5;
	int iVar6;
	char* cVar7;
	struct<16> Var8;
	
	bVar0 = (&Local_292 + 12[iParam153])->f_132 == bParam0->f_1384;
	if (bVar0)
	{
	}
	iVar1 = Function_378(bParam0 + 12[iParam153]);
	if (bParam2 > (bParam0->f_1948 - (bParam0 + 12[iParam153])->f_140))
	{
		(bParam0 + 12[iParam153])->f_136 = ((bParam0 + 12[iParam153])->f_136 - bParam2);
		(bParam0 + 12[iParam153])->f_140 = ((bParam0 + 12[iParam153])->f_140 + bParam2);
		(bParam0 + 12[iParam153])->f_152 = ((bParam0 + 12[iParam153])->f_152 + bParam2);
		bParam0->f_1944 = (bParam0->f_1944 + bParam2);
		bParam0->f_1952 = 0;
		bVar3 = (bParam0 + 12[iParam153])->f_140;
		if ((bParam0 + 12[iParam153])->f_140 >= bParam0->f_1948)
		{
			if (bParam0->f_1948 == 0)
			{
				if ((bParam0 + 12[iParam153])->f_136 == 0)
				{
					if (!bParam3 && !bParam4)
					{
						if (Local_230.f_180)
						{
							Function_339(bParam0, "allin");
						}
						else if (Function_264(&Local_292) && !HUD_IS_FADED())
						{
							if (iParam1 == Function_218(1))
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 504, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (Function_411())
							{
								if (Function_411())
								{
									SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
								else
								{
									SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 287, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 505, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (bVar0)
					{
						if (bParam3)
						{
							if (!Function_199(32768))
							{
								if (Function_415(&uLocal_286, 0))
								{
									Function_140("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							fVar2 = "Poker_Bet_SmallBlind";
						}
						else
						{
							if (!Function_199(32768))
							{
								if (Function_415(&uLocal_286, 5))
								{
									Function_140("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							fVar2 = "Poker_Bet_Allin";
						}
					}
					else if (bParam3)
					{
						fVar2 = "Poker_Bet_SmallBlind_Self";
					}
					else
					{
						fVar2 = "Poker_Bet_Allin_Self";
					}
				}
				else
				{
					if (!bParam3 && !bParam4)
					{
						if (Local_230.f_180)
						{
							Function_339(bParam0, "bets");
						}
						else if (Function_264(&Local_292) && !HUD_IS_FADED())
						{
							if (iParam1 == Function_218(1))
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 497, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (Function_411())
							{
								if (Function_411())
								{
									SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
								else
								{
									SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 284, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
								}
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 498, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if (bVar0)
					{
						if (bParam3)
						{
							if (!Function_199(32768))
							{
								if (Function_415(&uLocal_286, 0))
								{
									Function_140("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							fVar2 = "Poker_Bet_SmallBlind";
						}
						else
						{
							if (!Function_199(32768))
							{
								if (Function_415(&uLocal_286, 4))
								{
									Function_140("Poker_BetHelp", 9.0f, 1, 0, 2, 1, 0);
								}
							}
							fVar2 = "nPoker_Bet";
						}
					}
					else if (bParam3)
					{
						fVar2 = "Poker_Bet_SmallBlind_Self";
					}
					else
					{
						fVar2 = "Poker_Bet_Self";
					}
				}
			}
			else if ((bParam0 + 12[iParam153])->f_136 == 0)
			{
				if (!bParam3 && !bParam4)
				{
					if (Local_230.f_180)
					{
						Function_339(bParam0, "allin");
					}
					else if (Function_264(&Local_292) && !HUD_IS_FADED())
					{
						if (iParam1 == Function_218(1))
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 504, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_411())
						{
							if (Function_411())
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 287, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 505, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
				}
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 5))
							{
								Function_140("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Raises_Allin";
					}
				}
				else if (bParam4)
				{
					fVar2 = "Poker_Bet_BigBlind_Self";
				}
				else
				{
					fVar2 = "Poker_Raises_Allin_Self";
				}
			}
			else
			{
				if (!bParam3 && !bParam4)
				{
					if (Local_230.f_180)
					{
						Function_339(bParam0, "raises");
					}
					else if (Function_264(&Local_292) && !HUD_IS_FADED())
					{
						if (iParam1 == Function_218(1))
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 499, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_411())
						{
							if (Function_411())
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 285, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 500, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
				}
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 9))
							{
								Function_140("Poker_RaiseHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Raises";
					}
				}
				else if (bParam4)
				{
					fVar2 = "Poker_Bet_BigBlind_Self";
				}
				else if (bParam3)
				{
					fVar2 = "Poker_Bet_SmallBlind_Self";
				}
				else
				{
					fVar2 = "Poker_Raises_Self";
				}
			}
			(bParam0 + 12[iParam153])->f_144 = ((bParam0 + 12[iParam153])->f_140 - bParam0->f_1948);
			bParam0->f_1392 = (bParam0 + 12[iParam153])->f_132;
			bParam0->f_1948 = (bParam0 + 12[iParam153])->f_140;
			(bParam0 + 12[iParam153])->f_148 = bParam0->f_1944;
			bParam0->f_1952 = 0;
		}
		else if ((bParam0 + 12[iParam153])->f_140 != bParam0->f_1948 && bParam2 < 0)
		{
			if (!bParam3 && !bParam4)
			{
				if (Local_230.f_180)
				{
					Function_339(bParam0, "calls");
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_218(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 501, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_411())
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 286, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			bVar3 = (bParam0 + 12[iParam153])->f_140;
			if (!Function_199(2))
			{
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Bet_BigBlind";
					}
					else if (bParam3)
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 0))
							{
								Function_140("Poker_SmallBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Bet_SmallBlind";
					}
					else
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 8))
							{
								Function_140("Poker_CallHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Calls";
						bVar3 = bParam2;
					}
				}
				else if (bParam4)
				{
					fVar2 = "Poker_Bet_BigBlind_Self";
				}
				else
				{
					fVar2 = "Poker_Calls_Self";
					bVar3 = bParam2;
				}
			}
		}
		else
		{
			if (!bParam3 && !bParam4)
			{
				if (Local_230.f_180)
				{
					Function_339(bParam0, "checks");
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_218(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 502, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_411())
					{
						if (Function_411())
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 289, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 503, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (bVar0)
			{
				if (!Function_199(32768))
				{
					if (Function_415(&uLocal_286, 7) && !Function_199(2))
					{
						Function_140("Poker_CheckHelp", 9.0f, 1, 0, 2, 1, 0);
					}
				}
				fVar2 = "Poker_Checks";
				bVar3 = 4294967295;
			}
			else
			{
				fVar2 = "Poker_Checks_Self";
				bVar3 = 4294967295;
			}
		}
		if (bParam2 == 0)
		{
			SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/check");
		}
		else if ((bParam0 + 12[iParam153])->f_136 == 0)
		{
			if (IS_OBJECT_VALID((*bParam0 + 12[iParam153] + 164)[iVar1]))
			{
				DESTROY_OBJECT((*bParam0 + 12[iParam153] + 164)[iVar1]);
			}
			(*bParam0 + 12[iParam153] + 164)[iVar1] = (bParam0 + 12[iParam153])->f_156;
			cVar4 = "wrist_r_attachment";
			Function_439((*bParam0 + 12[iParam153] + 164)[iVar1], (*bParam0 + 12)[iParam153]);
			SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/bet_allin");
			(*bParam0 + 12[iParam153] + 184)[iVar1] = ATTACH_OBJECTS_USING_LOCATOR((*bParam0 + 12[iParam153] + 164)[iVar1], GET_OBJECT_FROM_ACTOR((*bParam0 + 12)[iParam153]), cVar4, "grab", 4294967295);
		}
		else if (iVar1 <= 3)
		{
			if (IS_OBJECT_VALID((*bParam0 + 12[iParam153] + 164)[iVar1]))
			{
				DESTROY_OBJECT((*bParam0 + 12[iParam153] + 164)[iVar1]);
			}
			NET_OBJECT_REPLICATION_MODE_START(17, 0);
			if (bParam2 > 25)
			{
				cVar5 = "elbow_r_attachment";
				(*bParam0 + 12[iParam153] + 164)[iVar1] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), "$/fragments/p_crd_chipRedPoker01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			}
			else if (bParam2 > 10)
			{
				cVar5 = "hip_r_attachment";
				(*bParam0 + 12[iParam153] + 164)[iVar1] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), "$/fragments/p_crd_chipBluePoker01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			}
			else
			{
				cVar5 = "hip_l_attachment";
				(*bParam0 + 12[iParam153] + 164)[iVar1] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), "$/fragments/p_crd_chipGreenPoker01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
			}
			NET_OBJECT_REPLICATION_MODE_END(17);
			Function_439((*bParam0 + 12[iParam153] + 164)[iVar1], (*bParam0 + 12)[iParam153]);
			if (iVar1 == 0)
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/R/bet");
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/B/bet");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/G/bet");
				}
			}
			else if (iVar1 == 1)
			{
				if (bParam2 > 25)
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/R2/bet");
				}
				else if (bParam2 > 10)
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/B2/bet");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/G2/bet");
				}
			}
			else if (bParam2 > 25)
			{
				SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/R3/bet");
			}
			else if (bParam2 > 10)
			{
				SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/B3/bet");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/G3/bet");
			}
			(*bParam0 + 12[iParam153] + 184)[iVar1] = ATTACH_OBJECTS_USING_LOCATOR((*bParam0 + 12[iParam153] + 164)[iVar1], GET_OBJECT_FROM_ACTOR((*bParam0 + 12)[iParam153]), cVar5, "grab", 4294967295);
		}
	}
	else if (bParam2 == (bParam0 + 12[iParam153])->f_136)
	{
		if (bParam2 == 0)
		{
			if (!Function_199(2))
			{
				if (bVar0)
				{
					fVar2 = "Poker_Checks";
					bVar3 = 4294967295;
				}
				else
				{
					fVar2 = "Poker_Checks_Self";
					bVar3 = 4294967295;
				}
			}
			if (!bParam3 && !bParam4)
			{
				if (Local_230.f_180)
				{
					Function_339(bParam0, "checks");
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_218(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 502, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_411())
					{
						if (Function_411())
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 289, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 503, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/check");
		}
		else
		{
			(bParam0 + 12[iParam153])->f_136 = ((bParam0 + 12[iParam153])->f_136 - bParam2);
			(bParam0 + 12[iParam153])->f_140 = ((bParam0 + 12[iParam153])->f_140 + bParam2);
			(bParam0 + 12[iParam153])->f_152 = ((bParam0 + 12[iParam153])->f_152 + bParam2);
			bParam0->f_1944 = (bParam0->f_1944 + bParam2);
			iVar6 = (bParam0 + 12[iParam153])->f_140;
			if (iVar6 >= bParam0->f_1952)
			{
				bParam0->f_1952 = iVar6;
			}
			bVar3 = (bParam0 + 12[iParam153])->f_140;
			if (!bParam3 && !bParam4)
			{
				if (Local_230.f_180)
				{
					Function_339(bParam0, "allin");
				}
				else if (Function_264(&Local_292) && !HUD_IS_FADED())
				{
					if (iParam1 == Function_218(1))
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 504, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_411())
					{
						if (Function_411())
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 283, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[iParam153], 287, Function_200(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT((*bParam0 + 12)[Function_218(1)53], 505, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (!Function_199(2))
			{
				if (bVar0)
				{
					if (bParam4)
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 1))
							{
								Function_140("Poker_BigBlindHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Bet_BigBlind";
					}
					else
					{
						if (!Function_199(32768))
						{
							if (Function_415(&uLocal_286, 5))
							{
								Function_140("Poker_AllInHelp", 9.0f, 1, 0, 2, 1, 0);
							}
						}
						fVar2 = "Poker_Bet_Allin";
					}
				}
				else if (bParam4)
				{
					fVar2 = "Poker_Bet_BigBlind_Self";
				}
				else if (bParam3)
				{
					fVar2 = "Poker_Bet_SmallBlind_Self";
				}
				else
				{
					fVar2 = "Poker_Bet_Allin_Self";
				}
			}
			if (IS_OBJECT_VALID((*bParam0 + 12[iParam153] + 164)[iVar1]))
			{
				DESTROY_OBJECT((*bParam0 + 12[iParam153] + 164)[iVar1]);
			}
			(*bParam0 + 12[iParam153] + 164)[iVar1] = (bParam0 + 12[iParam153])->f_156;
			Function_439((*bParam0 + 12[iParam153] + 164)[iVar1], (*bParam0 + 12)[iParam153]);
			cVar7 = "wrist_r_attachment";
			SET_ACTION_NODE_FOR_ACTOR((*bParam0 + 12)[iParam153], "sit_poker/player/bet_request/bet_allin");
			(*bParam0 + 12[iParam153] + 184)[iVar1] = ATTACH_OBJECTS_USING_LOCATOR((*bParam0 + 12[iParam153] + 164)[iVar1], GET_OBJECT_FROM_ACTOR((*bParam0 + 12)[iParam153]), cVar7, "grab", 4294967295);
		}
	}
	else
	{
		LOG_ERROR("Illegal Bet");
		return;
	}
	if (iParam1 == Function_218(1))
	{
		if (bParam2 < (bParam0->f_1944 - bParam2) && (bParam0 + 12[iParam153])->f_140 < 20)
		{
			DECOR_SET_INT(Global_34573, "sc_poker_obj3_fail", true);
		}
	}
	if (!Function_199(2))
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		if (bVar0)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(iParam1, &Local_292) };
			if (bVar3 >= 4294967295)
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, fVar2, &Var8, Function_301(bVar3), 0, 0, 0, 2, 0, 0, 0);
				PRINTINT(bVar3);
				PRINTNL();
			}
			else
			{
				PRINT_OBJECTIVE_FORMAT(4.0f, fVar2, &Var8, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		else if (bVar3 >= 4294967295)
		{
			PRINT_OBJECTIVE_FORMAT(4.0f, fVar2, Function_425(), Function_301(bVar3), 0, 0, 0, 2, 0, 0, 0);
			PRINTINT(bVar3);
			PRINTNL();
		}
		else
		{
			PRINT_OBJECTIVE_FORMAT(4.0f, fVar2, Function_425(), 0, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	UI_LABEL_SET_VALUE("nScores.s2", (bParam0 + 12[iParam153])->f_140);
}

int Function_378(int iParam0) //Position: 0x1BEB3 / 114355
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

void Function_379(bool bParam0) //Position: 0x1BEF3 / 114419
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Function_214())
	{
		bVar0 = false;
		bVar1 = false;
		if ((*&Local_292 + 1288)[Local_292.f_13843])
		{
			if (Function_384(0) != Function_218(0))
			{
				bVar2 = Function_404(&Local_292 + 12[Function_218(1)53]);
				bVar3 = (*bParam0 + 12)[Function_218(1)53];
				if (bVar2)
				{
					if (IS_BUTTON_DOWN(Function_454(), 1, 1, 0))
					{
						if ((IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/card_idle/idle") || IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/card_idle/StareCheck/stare")) || IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Dealer/card_dealing/deal_idle"))
						{
							SET_ACTION_NODE_FOR_ACTOR(bVar3, "sit_poker/player/look_at_cards");
							Function_380(bParam0 + 12[Function_218(1)53]);
						}
						if (IS_ACTION_NODE_PLAYING(bVar3, "sit_poker/Player/look_at_cards/open_mid"))
						{
							Function_362(&cLocal_195, bParam0, Function_218(1));
						}
						else
						{
							Function_360(&cLocal_195, bParam0, Function_218(1), 1);
						}
						Function_196();
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					if (IS_BUTTON_DOWN(Function_454(), 0, 1, 0) && (&Local_292 + 1824)->f_84 < 0)
					{
						Function_410(&cLocal_195, bParam0, 0);
						Function_196();
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
					Function_363();
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
			if (Function_384(0) >= 4294967295)
			{
				if ((bParam0 + 12[Function_384(1)53] + 36)->f_84 != 2 && (bParam0 + 12[Function_384(1)53])->f_136 < 0)
				{
					Function_447(&Local_292, &cLocal_195, Function_384(1), Function_218(0), 1);
				}
			}
		}
	}
	return;
}

void Function_380(bool bParam0) //Position: 0x1C178 / 115064
{
	if ((bParam0 + 36)->f_84 >= 0)
	{
		Function_290(bParam0, 0);
	}
	if ((bParam0 + 36)->f_84 >= 1)
	{
		Function_290(bParam0, 1);
	}
	return;
}

void Function_381(struct<85> Param0) //Position: 0x1C19E / 115102
{
	char* cVar0[64];
	int iVar22;
	
	strcpy(&cVar6, "", 64);
	iVar22 = 0;
	while (iVar22 <= Param0.f_84)
	{
		Function_215(StackVal, Param0[iVar222], &cVar0);
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

bool Function_382(int iParam0) //Position: 0x1C1F6 / 115190
{
	if ((*iParam0 + 1288)[iParam0->f_13843])
	{
		if (Function_404(iParam0 + 12[Function_218(1)53]))
		{
			if (IS_BUTTON_DOWN(Function_454(), 1, 1, 0))
			{
				return 1;
			}
			if (IS_BUTTON_DOWN(Function_454(), 0, 1, 0) && (iParam0 + 1824)->f_84 < 0)
			{
				return 1;
			}
			if (IS_BUTTON_DOWN(Function_454(), 9, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_383(bool bParam0) //Position: 0x1C251 / 115281
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= bParam0->f_1288)
	{
		if ((*bParam0 + 1288)[iVar03])
		{
			if (Function_404(bParam0 + 12[StackVal53]))
			{
				if ((bParam0 + 12[StackVal53])->f_136 >= 0)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int Function_384(bool bParam0) //Position: 0x1C2B2 / 115378
{
	int iVar0;
	
	if (Local_292.f_1380 > 0 || Local_292.f_1380 <= 6)
	{
	}
	iVar0 = StackVal;
	if (bParam0 && (iVar0 > 0 || iVar0 <= 6))
	{
	}
	return iVar0;
}

void Function_385(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1C2EF / 115439
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
			Var0 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_386(int iParam0) //Position: 0x1C374 / 115572
{
	int iVar0;
	
	*iParam0 = 10.0f;
	iParam0->f_12 = 0.2f;
	iParam0->f_16 = 1.0f;
	iParam0->f_20 = 10.0f;
	iParam0->f_24 = 1.5f;
	iParam0->f_28 = 0.0f;
	iParam0->f_4 = 9.0f;
	iParam0->f_8 = 2.0f;
	Function_76();
	*(iParam0 + 32) = { StackVal, StackVal, Function_76() };
	Function_76();
	*(iParam0 + 44) = { StackVal, StackVal, Function_76() };
	iParam0->f_56 = 0;
	iParam0->f_60 = 0;
	iParam0->f_64 = 0.0f;
	iParam0->f_68 = 0.0f;
	iVar0 = RAND_INT_RANGE(false, 100);
	if (iVar0 >= 50)
	{
		iParam0->f_32 = RAND_FLOAT_RANGE(-8.0f, -2.0f);
	}
	else
	{
		iParam0->f_32 = RAND_FLOAT_RANGE(2.0f, 8.0f);
	}
	UI_ENTER("Poker_CheatMeter");
	UI_SET_PROGRESS_BAR_VAL("Poker_CheatMeter", (((iParam0->f_32 + 10.0f) / 20.0f) * 100.0f));
	return;
}

void Function_387(int iParam0) //Position: 0x1C44D / 115789
{
	int iVar0;
	
	*iParam0 = 2.0f;
	iParam0->f_12 = 0.2f;
	iParam0->f_16 = 1.0f;
	iParam0->f_20 = 2.0f;
	iParam0->f_24 = 2.0f;
	iParam0->f_28 = 0.0f;
	iParam0->f_4 = 9.0f;
	iParam0->f_8 = 2.0f;
	Function_76();
	*(iParam0 + 32) = { StackVal, StackVal, Function_76() };
	Function_76();
	*(iParam0 + 44) = { StackVal, StackVal, Function_76() };
	iParam0->f_56 = 0;
	iParam0->f_60 = 0;
	iParam0->f_64 = 0.0f;
	iParam0->f_68 = 0.0f;
	iVar0 = RAND_INT_RANGE(false, 100);
	if (iVar0 >= 50)
	{
		iParam0->f_32 = RAND_FLOAT_RANGE(-8.0f, -2.0f);
	}
	else
	{
		iParam0->f_32 = RAND_FLOAT_RANGE(2.0f, 8.0f);
	}
	UI_ENTER("Poker_CheatMeter");
	UI_SET_PROGRESS_BAR_VAL("Poker_CheatMeter", (((iParam0->f_32 + 10.0f) / 20.0f) * 100.0f));
	return;
}

int Function_388(int iParam0) //Position: 0x1C51A / 115994
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = RAND_INT_RANGE(true, 6);
	iVar2 = iParam0->f_1388;
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		iVar2 = Function_449(iParam0 + 1288, iVar2);
		if (iVar2 == iParam0->f_1384)
		{
			iVar2 = Function_449(iParam0 + 1288, iVar2);
		}
		iVar1++;
	}
	return StackVal;
}

void Function_389(int iParam0) //Position: 0x1C56E / 116078
{
	int iVar0;
	
	iVar0 = Function_449(iParam0 + 1288, Function_449(iParam0 + 1288, iParam0->f_1388));
	if (Function_390(iParam0) && iParam0->f_1940 != 0)
	{
		iParam0->f_1380 = iParam0->f_1388;
	}
	else
	{
		iParam0->f_1380 = Function_449(iParam0 + 1288, iVar0);
	}
	iParam0->f_1392 = iParam0->f_1380;
	return;
}

bool Function_390(int iParam0) //Position: 0x1C5C1 / 116161
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

int Function_391(int iParam0) //Position: 0x1C5FE / 116222
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
	if ((&Local_292 + 12[Function_216(1)53] + 36)->f_84 != 2 && !IS_ATTACHMENT_VALID(uLocal_880))
	{
		return 1;
	}
	iVar5 = Local_292.f_1388;
	iVar0 = Function_398(6, iVar5);
	iVar1 = Function_398(6, iVar0);
	iVar2 = Function_398(6, iVar1);
	iVar3 = Function_398(6, iVar2);
	iVar4 = Function_398(6, iVar3);
	switch (iLocal_229)
	{
		case 0x00000000:
			if ((IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_idle") || IS_ACTION_NODE_PLAYING((*&Local_292 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_mid")) || Function_199(32768))
			{
				Function_397();
				if ((&Local_292 + 12[Function_216(1)53] + 36)->f_84 == 0)
				{
					if (Function_396(iParam0, iVar0, 0))
					{
						Function_395(StackVal, iParam0, 0, 1);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/1");
						Function_450(65536);
						iLocal_229 = 1;
					}
					else if (Function_396(iParam0, iVar1, 0))
					{
						Function_395(StackVal, iParam0, 0, 2);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/2");
						Function_450(131072);
						iLocal_229 = 1;
					}
					else if (Function_396(iParam0, iVar2, 0))
					{
						Function_395(StackVal, iParam0, 0, 3);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/3");
						Function_450(262144);
						iLocal_229 = 1;
					}
					else if (Function_396(iParam0, iVar3, 0))
					{
						Function_395(StackVal, iParam0, 0, 4);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/4");
						Function_450(524288);
						iLocal_229 = 1;
					}
					else if (Function_396(iParam0, iVar4, 0))
					{
						Function_395(StackVal, iParam0, 0, 5);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/5");
						Function_450(1048576);
						iLocal_229 = 1;
					}
					else
					{
						Function_395(StackVal, iParam0, 0, 6);
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/self/1_pre");
						Function_450(2097152);
						iLocal_229 = 1;
					}
				}
				else if (Function_396(iParam0, iVar0, 1))
				{
					Function_395(StackVal, iParam0, 1, 1);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/1");
					Function_450(65536);
					iLocal_229 = 1;
				}
				else if (Function_396(iParam0, iVar1, 1))
				{
					Function_395(StackVal, iParam0, 1, 2);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/2");
					Function_450(131072);
					iLocal_229 = 1;
				}
				else if (Function_396(iParam0, iVar2, 1))
				{
					Function_395(StackVal, iParam0, 1, 3);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/3");
					Function_450(262144);
					iLocal_229 = 1;
				}
				else if (Function_396(iParam0, iVar3, 1))
				{
					Function_395(StackVal, iParam0, 1, 4);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/4");
					Function_450(524288);
					iLocal_229 = 1;
				}
				else if (Function_396(iParam0, iVar4, 1))
				{
					Function_395(StackVal, iParam0, 1, 5);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/5");
					Function_450(1048576);
					iLocal_229 = 1;
				}
				else
				{
					Function_395(StackVal, iParam0, 1, 6);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/self/2_pre");
					Function_450(2097152);
					iLocal_229 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (((((((IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/1/1_pst") || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/2/2_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/3/3_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/4/4_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/5/5_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/self/1_pst")) || IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/self/2_pst")) || Function_199(32768))
			{
				REMOVE_OBJECT_ATTACHMENT((*iParam0 + 12[Function_216(1)53] + 184)[0]);
				Function_392(iParam0, iVar0, iVar1, iVar2, iVar3, iVar4, iVar5);
				Function_397();
				if ((&Local_292 + 12[Function_216(1)53] + 36)->f_84 == 2)
				{
					if (Function_199(32768))
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_end_snap");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_pst");
					}
					iLocal_229 = 2;
				}
				else
				{
					iLocal_229 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_ACTION_NODE_PLAYING((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_end") || Function_199(32768))
			{
				if (Function_199(32768))
				{
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 12)[Function_216(1)53], "sit_poker/Dealer/card_dealing/deal_end_snap");
				}
				REMOVE_OBJECT_ATTACHMENT(uLocal_880);
				Function_440((*iParam0 + 12)[Function_216(1)53], &vVar6, &vVar9);
				SET_OBJECT_POSITION(bLocal_282, vVar6);
				SET_OBJECT_ORIENTATION(bLocal_282, vVar9);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_392(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1CE44 / 118340
{
	bool bVar0;
	struct<53> Var1;
	int iVar54;
	vector3 vVar55;
	vector3 vVar58;
	
	if (Function_199(65536))
	{
		bVar0 = uParam1;
	}
	else if (Function_199(131072))
	{
		bVar0 = uParam2;
	}
	else if (Function_199(262144))
	{
		bVar0 = uParam3;
	}
	else if (Function_199(524288))
	{
		bVar0 = uParam4;
	}
	else if (Function_199(1048576))
	{
		bVar0 = uParam5;
	}
	else if (Function_199(2097152))
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

void Function_393(var uParam0, var uParam1, int iParam2) //Position: 0x1CF97 / 118679
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

void Function_394(var uParam0, var uParam1, int iParam2) //Position: 0x1D0C4 / 118980
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

void Function_395(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1D1F1 / 119281
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[32];
	struct<2> Var14;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	Function_349(&Local_292 + 1396);
	Var14 = { StackVal, Function_349(&Local_292 + 1396) };
	Function_350(&Local_292 + 12[iParam153] + 36, &Var14);
	if (iParam1 != Function_218(1) && iParam2 != 1)
	{
		Global_13172[(Global_13172[StackVal11].f_28 + 1.0f)11].f_28 = StackVal;
	}
	if (Function_214())
	{
		if ((iParam0 + 12[iParam153])->f_128 == 1)
		{
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&Var14, 0) };
		}
		else
		{
			strcpy(&cVar6, "$/fragments/p_crd_01x", 32);
		}
	}
	else
	{
		cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&Var14, 0) };
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam0 + 12[iParam153] + 36 + 60)[iParam2] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), &cVar6, vVar0, vVar3, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	switch (bParam3)
	{
		case 0x00000001:
			(*iParam0 + 12[Function_216(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53], "spine00_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000002:
			(*iParam0 + 12[Function_216(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53], "spine01_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000003:
			(*iParam0 + 12[Function_216(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53], "spine02_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000004:
			(*iParam0 + 12[Function_216(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53], "pelvis_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000005:
			(*iParam0 + 12[Function_216(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53], "spine03_Attachment", "grab", 4294967295);
			break;
		
		case 0x00000006:
			(*iParam0 + 12[Function_216(1)53] + 184)[0] = ATTACH_OBJECTS_USING_LOCATOR((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53], "neck_Attachment", "grab", 4294967295);
			break;
	}
	Function_439((*iParam0 + 12[iParam153] + 36 + 60)[iParam2], (*iParam0 + 12)[Function_216(1)53]);
}

bool Function_396(int iParam0, int iParam1, int iParam2) //Position: 0x1D4D1 / 120017
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

void Function_397() //Position: 0x1D509 / 120073
{
	Function_267(65536);
	Function_267(131072);
	Function_267(262144);
	Function_267(524288);
	Function_267(1048576);
	Function_267(2097152);
	return;
}

var Function_398(int iParam0, int iParam1) //Position: 0x1D539 / 120121
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

int Function_399(int iParam0, int iParam1, bool bParam2) //Position: 0x1D573 / 120179
{
	struct<2> Var0[52];
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	struct<2> Var109;
	var uVar111;
	var uVar112;
	var uVar113;
	
	iVar108 = 0;
	iVar106 = 0;
	while (iVar106 <= 13)
	{
		iVar107 = 0;
		while (iVar107 <= 4)
		{
			Var109 = iVar106;
			Var109.f_4 = iVar107;
			if (StackVal && !Function_351(!Function_351(StackVal, iParam0, Var109), iParam1, Var109))
			{
				Var0[iVar1082] = { StackVal, Var109 };
				iVar108++;
			}
			iVar107++;
		}
		iVar106++;
	}
	switch (iParam1->f_84)
	{
		case 0x00000003:
			if (iLocal_915)
			{
				iLocal_915 = 0;
				Function_403(&iLocal_908, &iLocal_909, &iLocal_910, &iLocal_911, &bLocal_913, &bLocal_912);
			}
			if (Function_199(32768) && !Function_404(&Local_292 + 12[Function_218(1)53]))
			{
				iVar105 = 1;
			}
			else
			{
				iVar105 = 10;
			}
			if (Function_402(&iLocal_908, &iLocal_909, &iLocal_910, &iLocal_911, &bLocal_913, &bLocal_912, iVar108, &Var0, iParam1, iParam0, iVar105))
			{
				iLocal_915 = 1;
				*bParam2 = (TO_FLOAT(bLocal_913) / TO_FLOAT(bLocal_912));
				return 1;
			}
			return 0;
			break;
		
		case 0x00000004:
			if (iLocal_915)
			{
				iLocal_915 = 0;
				Function_403(&iLocal_908, &iLocal_909, &iLocal_910, &iLocal_911, &bLocal_913, &bLocal_912);
			}
			if (Function_199(32768) && !Function_404(&Local_292 + 12[Function_218(1)53]))
			{
				iVar105 = 1;
			}
			else
			{
				iVar105 = 25;
			}
			if (Function_401(&iLocal_908, &iLocal_909, &iLocal_910, &bLocal_913, &bLocal_912, iVar108, &Var0, iParam1, iParam0, iVar105))
			{
				iLocal_915 = 1;
				*bParam2 = (TO_FLOAT(bLocal_913) / TO_FLOAT(bLocal_912));
				return 1;
			}
			return 0;
			break;
		
		case 0x00000005:
			if (iLocal_915)
			{
				iLocal_915 = 0;
				Function_403(&iLocal_908, &iLocal_909, &iLocal_910, &iLocal_911, &bLocal_913, &bLocal_912);
				iLocal_914 = Function_371(iParam0, iParam1, &uVar111, &uVar112, &uVar113);
			}
			if (Function_199(32768) && !Function_404(&Local_292 + 12[Function_218(1)53]))
			{
				iVar105 = 1;
			}
			else
			{
				iVar105 = 100;
			}
			if (Function_400(&iLocal_908, &iLocal_909, &bLocal_913, &bLocal_912, iVar108, &Var0, iParam1, iVar105))
			{
				iLocal_915 = 1;
				*bParam2 = (TO_FLOAT(bLocal_913) / TO_FLOAT(bLocal_912));
				return 1;
			}
			return 0;
			break;
	}
	return 1;
}

bool Function_400(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7) //Position: 0x1D785 / 120709
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar27;
	var uVar28;
	var uVar29;
	
	iVar4 = 7;
	*(&iVar4 + 60) = 2;
	*(&iVar4 + 72) = 2;
	iVar1 = *uParam0;
	while (iVar1 < (iParam4 - 1))
	{
		Function_260(&iVar4);
		Function_350(&iVar4, uParam5[iVar12]);
		iVar0 = RAND_INT_RANGE(false, 100);
		if (iVar0 < iParam7)
		{
			iVar2 = *uParam1;
			while (iVar2 < (iParam4 - 1))
			{
				iVar0 = RAND_INT_RANGE(false, 100);
				if (iVar0 <= 100)
				{
					Function_350(&iVar4, uParam5[iVar22]);
					if (UNK_0xD058BD70() >= (UNK_0x4C48EA4D() - 225000))
					{
						*uParam0 = iVar1;
						*uParam1 = iVar2;
						Function_372(&iVar4);
						Function_372(&iVar4);
						return 0;
					}
					iVar3 = Function_371(&iVar4, iParam6, &uVar27, &uVar28, &uVar29);
					if (iLocal_914 > iVar3)
					{
						*uParam2++;
					}
					*uParam3++;
					Function_372(&iVar4);
				}
				iVar2++;
			}
		}
		*uParam1 = iVar1 + 2;
		Function_372(&iVar4);
		iVar1++;
	}
	return 1;
}

bool Function_401(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int iParam7, int iParam8, int iParam9) //Position: 0x1D866 / 120934
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar28;
	var uVar29;
	var uVar30;
	
	iVar5 = 7;
	*(&iVar5 + 60) = 2;
	*(&iVar5 + 72) = 2;
	iVar1 = *uParam0;
	while (iVar1 < (iParam5 - 1))
	{
		Function_350(iParam7, uParam6[iVar12]);
		iVar0 = RAND_INT_RANGE(false, 100);
		if (iVar0 <= 25)
		{
			iLocal_914 = Function_371(iParam8, iParam7, &uVar28, &uVar29, &uVar30);
			iVar2 = *uParam1;
			while (iVar2 < (iParam5 - 1))
			{
				Function_260(&iVar5);
				Function_350(&iVar5, uParam6[iVar22]);
				iVar3 = *uParam2;
				while (iVar3 < (iParam5 - 1))
				{
					iVar0 = RAND_INT_RANGE(false, 100);
					if (iVar0 < iParam9)
					{
						Function_350(&iVar5, uParam6[iVar32]);
						if (UNK_0xD058BD70() >= (UNK_0x4C48EA4D() - 225000))
						{
							*uParam0 = iVar1;
							*uParam1 = iVar2;
							*uParam2 = iVar3;
							Function_372(&iVar5);
							Function_372(&iVar5);
							Function_372(iParam7);
							return 0;
						}
						iVar4 = Function_371(&iVar5, iParam7, &uVar28, &uVar29, &uVar30);
						if (iLocal_914 > iVar4)
						{
							*uParam3++;
						}
						*uParam4++;
						Function_372(&iVar5);
					}
					iVar3++;
				}
				*uParam2 = iVar2 + 2;
				Function_372(&iVar5);
				iVar2++;
			}
		}
		*uParam1 = iVar1 + 2;
		if (*uParam2 < *uParam1)
		{
			*uParam2 = *uParam1 + 1;
		}
		Function_372(iParam7);
		iVar1++;
	}
	return 1;
}

bool Function_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, int iParam10) //Position: 0x1D9A0 / 121248
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar29;
	var uVar30;
	var uVar31;
	
	iVar6 = 7;
	*(&iVar6 + 60) = 2;
	*(&iVar6 + 72) = 2;
	iVar1 = *uParam0;
	while (iVar1 < (iParam6 - 1))
	{
		Function_350(iParam8, uParam7[iVar12]);
		iVar2 = *uParam1;
		while (iVar2 < (iParam6 - 1))
		{
			Function_350(iParam8, uParam7[iVar22]);
			iVar0 = RAND_INT_RANGE(false, 100);
			if (iVar0 <= iParam10)
			{
				iLocal_914 = Function_371(uParam9, iParam8, &uVar29, &uVar30, &uVar31);
				iVar3 = *uParam2;
				while (iVar3 < (iParam6 - 1))
				{
					Function_260(&iVar6);
					Function_350(&iVar6, uParam7[iVar32]);
					iVar4 = *uParam3;
					while (iVar4 < (iParam6 - 1))
					{
						iVar0 = RAND_INT_RANGE(false, 100);
						if (iVar0 <= 10)
						{
							Function_350(&iVar6, uParam7[iVar42]);
							if (UNK_0xD058BD70() >= (UNK_0x4C48EA4D() - 225000))
							{
								*uParam0 = iVar1;
								*uParam1 = iVar2;
								*uParam2 = iVar3;
								*uParam3 = iVar4;
								Function_372(&iVar6);
								Function_372(&iVar6);
								Function_372(iParam8);
								Function_372(iParam8);
								return 0;
							}
							iVar5 = Function_371(&iVar6, iParam8, &uVar29, &uVar30, &uVar31);
							if (iLocal_914 > iVar5)
							{
								*uParam4++;
							}
							*uParam5++;
							Function_372(&iVar6);
						}
						iVar4++;
					}
					*uParam3 = iVar3 + 2;
					Function_372(&iVar6);
					iVar3++;
				}
			}
			Function_372(iParam8);
			*uParam2 = iVar2 + 2;
			if (*uParam3 < *uParam2)
			{
				*uParam3 = *uParam2 + 1;
			}
			iVar2++;
		}
		*uParam1 = iVar1 + 2;
		if (*uParam2 < *uParam1)
		{
			*uParam2 = *uParam1 + 1;
			if (*uParam3 < *uParam2)
			{
				*uParam3 = *uParam2 + 1;
			}
		}
		Function_372(iParam8);
		iVar1++;
	}
	return 1;
}

void Function_403(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x1DB34 / 121652
{
	*iParam0 = 0;
	*iParam1 = 1;
	*iParam2 = 2;
	*iParam3 = 3;
	*bParam5 = 0;
	*bParam4 = 0;
}

bool Function_404(int iParam0) //Position: 0x1DB54 / 121684
{
	if (((iParam0 + 36)->f_84 == 2 || IS_ACTION_NODE_PLAYING(*iParam0, "sit_poker/Player/bet_request/fold")) || IS_ACTION_NODE_PLAYING(*iParam0, "sit_poker/Player/bet_request/fold_B"))
	{
		return 0;
	}
	return 1;
}

void Function_405(int iParam0) //Position: 0x1DBC3 / 121795
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
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_409((iParam0 + 12[StackVal53])->f_136) };
			GET_OBJECT_POSITION((iParam0 + 12[StackVal53])->f_156, &uVar1);
			Function_408(iParam0 + 12[StackVal53]);
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_409((iParam0 + 12[StackVal53])->f_152) };
			if (IS_OBJECT_VALID((iParam0 + 12[StackVal53])->f_160))
			{
				GET_OBJECT_POSITION((iParam0 + 12[StackVal53])->f_160, &uVar1);
			}
			else
			{
				Function_407((*iParam0 + 12)[StackVal53], &uVar1, &uVar4);
			}
			PRINTSTRING("ExpectedStackName is ");
			PRINTSTRING(&Var8);
			Function_406(iParam0 + 12[StackVal53]);
		}
		iVar0++;
	}
	return;
}

void Function_406(int iParam0) //Position: 0x1DCFB / 122107
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_409(iParam0->f_152) };
		Function_407(*iParam0, &vVar8, &vVar11);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		iParam0->f_160 = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), &Var0, vVar8, vVar11, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_407(bool bParam0, var uParam1, int iParam2) //Position: 0x1DD52 / 122194
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
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, iParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_408(int iParam0) //Position: 0x1DE45 / 122437
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_409(iParam0->f_136) };
		Function_358(iParam0, &vVar8, &vVar11);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		iParam0->f_156 = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), &Var0, vVar8, vVar11, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

struct<32> Function_409(int iParam0) //Position: 0x1DE9B / 122523
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
	strcpy(&cVar1, Function_189(bVar0), 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar1;
}

void Function_410(char* cParam0, int iParam1, int iParam2) //Position: 0x1DECF / 122575
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
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
		fVar13 = (1.0f / TO_FLOAT((iParam1 + 1824)->f_84));
		VSCALE(&vVar1, fVar13);
		VSCALE(&vVar7, fVar13);
		VSCALE(&vVar10, fVar13);
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
		if (iParam2 == 0)
		{
			SET_CAMERA_FOV(*cParam0, 31.0f);
		}
		else
		{
			SET_CAMERA_FOV(*cParam0, 49.0f);
		}
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*cParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*cParam0);
		}
		SET_CAMERA_POSITION(*cParam0, vVar14);
		SET_CAMERA_TARGET_POSITION(*cParam0, vVar1, 0);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam0, iParam2))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, iParam2, 0f, 0, 0, 0, 0, 0, 0, 0);
		}
		GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar17);
		STREAMING_UNLOAD_SCENE();
		STREAMING_LOAD_SCENE_EXT(vVar14, vVar17, 1);
	}
	return;
}

bool Function_411() //Position: 0x1E085 / 123013
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(false, 100);
	if (iVar0 <= 50)
	{
		return 1;
	}
	return 0;
}

int Function_412(bool bParam0) //Position: 0x1E0A0 / 123040
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= bParam0->f_1376)
	{
		if (IS_ACTOR_VALID((*bParam0 + 12)[iVar053]))
		{
			if (GET_ACTOR_ENUM((*bParam0 + 12)[iVar053]) == 558)
			{
				return StackVal;
			}
		}
		iVar0++;
	}
	LOG_ERROR("could not find Landon's seat");
	return 4294967295;
}

bool Function_413() //Position: 0x1E115 / 123157
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_414(bool bParam0) //Position: 0x1E128 / 123176
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= bParam0->f_1376)
	{
		if (IS_ACTOR_VALID((*bParam0 + 12)[iVar053]))
		{
			if (GET_ACTOR_ENUM((*bParam0 + 12)[iVar053]) == 662)
			{
				return StackVal;
			}
		}
		iVar0++;
	}
	LOG_ERROR("could not find Muller's seat");
	return 4294967295;
}

bool Function_415(var uParam0, int iParam1) //Position: 0x1E19D / 123293
{
	if (!Function_419(uParam0, iParam1))
	{
		Function_416(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_416(var uParam0, int iParam1) //Position: 0x1E1B8 / 123320
{
	Function_77(uParam0[Function_418(iParam1)], Function_417(iParam1));
	return;
}

int Function_417(int iParam0) //Position: 0x1E1CF / 123343
{
	return Function_147((iParam0 % 32));
}

int Function_418(int iParam0) //Position: 0x1E1DD / 123357
{
	return (iParam0 / 32);
}

bool Function_419(var uParam0, int iParam1) //Position: 0x1E1E8 / 123368
{
	return Function_24((*uParam0)[Function_418(iParam1)], Function_417(iParam1));
}

struct<64> Function_420(int iParam0, int iParam1) //Position: 0x1E1FF / 123391
{
	struct<16> Var0;
	
	if (iParam0 > 0 || iParam0 <= 6)
	{
	}
	if (!Function_421((*iParam1 + 12)[iParam053], &Var0))
	{
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam1 + 12[iParam053] + 4), 16);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_421(bool bParam0, char* cParam1) //Position: 0x1E23C / 123452
{
	struct<8> Var0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_214())
		{
			if (Function_422(bParam0, &Var0))
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

bool Function_422(bool bParam0, char* cParam1) //Position: 0x1E297 / 123543
{
	var uVar0;
	
	uVar0 = Function_424(bParam0);
	strcpy(cParam1, Function_423(uVar0), 32);
	return 1;
}

var Function_423(int iParam0) //Position: 0x1E2AE / 123566
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

int Function_424(bool bParam0) //Position: 0x1E4C2 / 124098
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

var Function_425() //Position: 0x1E504 / 124164
{
	if (!Function_214())
	{
		UI_SET_STRING("Generic_Dbuffer32_0", "<0xE0E0E0>");
	}
	else
	{
		UI_SET_STRING("Generic_Dbuffer32_0", Function_426(GET_LOCAL_SLOT(), 1));
	}
	return "Generic_DBuffer32_0";
}

var Function_426(bool bParam0, int iParam1) //Position: 0x1E570 / 124272
{
	return NET_GET_GAMER_HEX_COLOR(bParam0, iParam1);
}

void Function_427(char* cParam0, bool bParam1) //Position: 0x1E57D / 124285
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
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*cParam0) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*cParam0);
	}
	SET_CAMERA_POSITION(*cParam0, vVar6);
	SET_CAMERA_TARGET_POSITION(*cParam0, vVar12, 0);
	SET_CAMERA_FOV(*cParam0, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*cParam0, 0, 0.5f, 0.5f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar15);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar6, vVar15, 1);
	return;
}

void Function_428(bool bParam0) //Position: 0x1E663 / 124515
{
	int iVar0;
	int iVar1;
	
	if (Function_390(bParam0))
	{
		iVar0 = Function_449(bParam0 + 1288, bParam0->f_1388);
	}
	else
	{
		iVar0 = Function_449(bParam0 + 1288, Function_449(bParam0 + 1288, bParam0->f_1388));
	}
	iVar1 = StackVal;
	if (StackVal > (bParam0 + 12[iVar153])->f_136)
	{
		Function_377(StackVal, bParam0, iVar1, 0, 1);
	}
	else
	{
		Function_377(bParam0, iVar1, (bParam0 + 12[iVar153])->f_136, 0, 1);
	}
	if (iVar1 == Function_218(0))
	{
		Function_376(&Local_292, Function_218(0));
	}
	return;
}

bool Function_429(bool bParam0) //Position: 0x1E6EE / 124654
{
	if (IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/bet_allin_pst") || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/bet_allin_B_pst"))
	{
		return 1;
	}
	return 0;
}

bool Function_430(bool bParam0) //Position: 0x1E764 / 124772
{
	if ((((((((IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R/bet_pst") || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R2/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G2/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B2/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/R3/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/G3/bet_pst")) || IS_ACTION_NODE_PLAYING(bParam0, "sit_poker/Player/bet_request/B3/bet_pst"))
	{
		return 1;
	}
	return 0;
}

void Function_431(bool bParam0) //Position: 0x1E91F / 125215
{
	int iVar0;
	int iVar1;
	
	if (Function_390(bParam0))
	{
		iVar0 = bParam0->f_1388;
	}
	else
	{
		iVar0 = Function_449(bParam0 + 1288, bParam0->f_1388);
	}
	iVar1 = StackVal;
	if (iVar0 > 0 || iVar0 < 6)
	{
	}
	Function_447(&Local_292, &cLocal_195, iVar1, Function_218(0), 1);
	if (StackVal > (bParam0 + 12[iVar153])->f_136)
	{
		Function_377(StackVal, bParam0, iVar1, 1, 0);
	}
	else
	{
		Function_377(bParam0, iVar1, (bParam0 + 12[iVar153])->f_136, 1, 0);
	}
	bParam0->f_1948 = StackVal;
	if (iVar1 == Function_218(0))
	{
		Function_376(&Local_292, Function_218(0));
	}
	return;
}

void Function_432(int iParam0) //Position: 0x1E9BE / 125374
{
	struct<2> Var0;
	
	if ((StackVal && (!iParam0->f_1364 != 4294967295 || Local_230.f_180)) && (iParam0->f_1388 != iParam0->f_1384 || iParam0->f_1388 != (iParam0 + 12[053])->f_132))
	{
		PRINTSTRING("Dealing CHEAT Card");
		PRINTNL();
		Function_434(StackVal, iParam0 + 1396, *(iParam0 + 1364));
		Var0 = { StackVal, Function_434(StackVal, iParam0 + 1396, *(iParam0 + 1364)) };
	}
	else
	{
		Function_349(iParam0 + 1396);
		Var0 = { StackVal, Function_349(iParam0 + 1396) };
	}
	Function_350(iParam0 + 1824, &Var0);
	Function_433(iParam0, &Var0, 4, Function_216(1));
	return;
}

void Function_433(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1EA48 / 125512
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	struct<8> Var12;
	float fVar20;
	
	Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(iParam1, 0) };
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
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(&Local_230 + 148), vVar6, StackVal) };
	vVar6.x = (vVar6.x + RAND_FLOAT_GAUSSIAN(0.0f, 0.005f));
	vVar6.f_8 = (vVar6.z + RAND_FLOAT_GAUSSIAN(0.0f, 0.005f));
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam0 + 1916)[bParam2] = CREATE_PROP_IN_LAYOUT(bLocal_190, Function_54(), &Var12, vVar6, vVar9, 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
}

struct<8> Function_434(var uParam0, struct<5> Param1) //Position: 0x1EB79 / 125817
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	
	iVar1 = 4294967295;
	iVar0 = uParam0->f_420;
	while (iVar0 < (uParam0->f_424 - 1))
	{
		iVar4 = RAND_INT_RANGE(false, 100);
		if ((*uParam0)[iVar02] != Param1 && iVar4 < 50)
		{
			Var2 = { StackVal, *uParam0[iVar02] };
			*uParam0[iVar02] = { StackVal, *uParam0[uParam0->f_4202] };
			*uParam0[uParam0->f_4202] = { StackVal, Var2 };
			uParam0->f_420++;
			return StackVal, *(uParam0[(uParam0->f_420 - 1)2]);
		}
		if (StackVal == StackVal)
		{
			if (iVar1 != 4294967295)
			{
				if ((*uParam0)[iVar02] >= (*uParam0)[iVar12])
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
	iVar4 = RAND_INT_RANGE(false, 100);
	if (iVar4 >= 50)
	{
		Var2 = { StackVal, *uParam0[iVar12] };
		*uParam0[iVar12] = { StackVal, *uParam0[uParam0->f_4202] };
		*uParam0[uParam0->f_4202] = { StackVal, Var2 };
	}
	uParam0->f_420++;
	return StackVal, *(uParam0[(uParam0->f_420 - 1)2]);
}

void Function_435(int iParam0) //Position: 0x1EC85 / 126085
{
	struct<2> Var0;
	
	if ((StackVal && (!iParam0->f_1364 != 4294967295 || Local_230.f_180)) && (iParam0->f_1388 != iParam0->f_1384 || iParam0->f_1388 != (iParam0 + 12[053])->f_132))
	{
		PRINTSTRING("Dealing CHEAT Card");
		PRINTNL();
		Function_434(StackVal, iParam0 + 1396, *(iParam0 + 1364));
		Var0 = { StackVal, Function_434(StackVal, iParam0 + 1396, *(iParam0 + 1364)) };
	}
	else
	{
		Function_349(iParam0 + 1396);
		Var0 = { StackVal, Function_349(iParam0 + 1396) };
	}
	Function_350(iParam0 + 1824, &Var0);
	Function_433(iParam0, &Var0, 3, Function_216(1));
	return;
}

void Function_436(int iParam0) //Position: 0x1ED0F / 126223
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((StackVal && (!iParam0->f_1364 != 4294967295 || Local_230.f_180)) && (iParam0->f_1388 != iParam0->f_1384 || iParam0->f_1388 != (iParam0 + 12[053])->f_132))
		{
			PRINTSTRING("Dealing CHEAT Card");
			PRINTNL();
			Function_434(StackVal, iParam0 + 1396, *(iParam0 + 1364));
			Var1 = { StackVal, Function_434(StackVal, iParam0 + 1396, *(iParam0 + 1364)) };
		}
		else
		{
			Function_349(iParam0 + 1396);
			Var1 = { StackVal, Function_349(iParam0 + 1396) };
		}
		Function_350(iParam0 + 1824, &Var1);
		Function_433(iParam0, &Var1, iVar0, Function_216(1));
		iVar0++;
	}
	return;
}

void Function_437(int iParam0) //Position: 0x1EDAC / 126380
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_OBJECT_VALID(bLocal_283))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Function_438(iParam0 + 12[Function_216(1)53], &vVar0, &vVar3);
		bLocal_283 = CREATE_PROP_IN_LAYOUT(bLocal_190, "DealerButton", "$/fragments/p_gen_dealerButton01x", vVar0, vVar3, 0);
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	return;
}

void Function_438(var uParam0, var uParam1, int iParam2) //Position: 0x1EE1C / 126492
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

void Function_439(bool bParam0, bool bParam1) //Position: 0x1EE78 / 126584
{
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam0, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bParam1), 0);
	return;
}

void Function_440(bool bParam0, var uParam1, int iParam2) //Position: 0x1EE8F / 126607
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		vVar0 = { -0.456f, 0.8f, 0.1f };
		vVar3 = { 0.0f, -55.0f, 0.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, iParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

bool Function_441(bool bParam0) //Position: 0x1EED3 / 126675
{
	if (((Function_446() && !iLocal_178 != 1000) && !iLocal_178 != 1104) && !iLocal_178 != 1105)
	{
		HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
		HUD_FADE_OUT(1.0f, 1f, 1);
		iLocal_178 = 1105;
	}
	switch (iLocal_178)
	{
		case 0x000003E8:
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(1.0f, 1f, 1);
			Function_445(bParam0, (*&Local_292 + 12)[Function_216(1)53]);
			Function_251(&iLocal_191);
			iLocal_178 = 1004;
			break;
		
		case 0x000003EC:
			if (!HUD_IS_FADING())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_251(&iLocal_191);
				iLocal_178 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (!HUD_IS_FADING())
			{
				Function_385("Poker_Cheating_msg01", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_251(&iLocal_191);
				iLocal_178 = 1006;
			}
			else
			{
				PRINTSTRING("Waiting for Fade In to finish");
				PRINTNL();
			}
			break;
		
		case 0x000003EE:
			if (Function_480(&iLocal_191) <= 5.0f)
			{
				Function_385("Poker_Cheating_msg02", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_251(&iLocal_191);
				iLocal_178 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_480(&iLocal_191) <= 5.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_251(&iLocal_191);
				iLocal_178 = 1104;
			}
			break;
		
		case 0x00000450:
			if (HUD_IS_FADED())
			{
				Function_251(&iLocal_191);
				iLocal_178 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (HUD_IS_FADED())
			{
				Function_442(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_251(&iLocal_191);
				iLocal_178 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_442(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x1F086 / 127110
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_200();
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
			if (Function_42())
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
		Function_89(21, 1, 0, 0);
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
	Function_443(uParam9);
}

void Function_443(int iParam0) //Position: 0x1F176 / 127350
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
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
		Function_444();
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

void Function_444() //Position: 0x1F225 / 127525
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

void Function_445(var uParam0, bool bParam1) //Position: 0x1F297 / 127639
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
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0f, 0, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar12);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar6, vVar12, 1);
	return;
}

int Function_446() //Position: 0x1F341 / 127809
{
	if (IS_BUTTON_DOWN(Function_454(), 6, 1, 0))
	{
		return 1;
	}
	return 0;
}

void Function_447(bool bParam0, char* cParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1F359 / 127833
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
	
	if (iParam2 > 6 && iParam2 <= 0)
	{
		bVar0 = (*bParam0 + 12)[iParam253];
	}
	if (iParam3 > 6 && iParam3 <= 0)
	{
		bVar1 = (*bParam0 + 12)[iParam353];
	}
	else
	{
		bVar1 = Function_200();
	}
	if (!IS_ACTOR_VALID(bVar0) || !IS_ACTOR_VALID(bVar1))
	{
		return;
	}
	GET_POSITION(bVar1, &vVar2);
	GET_ACTOR_AXIS(bVar1, &vVar5, 2);
	GET_ACTOR_AXIS(bVar1, &vVar8, 0);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar2, StackVal) * Vector(-1.5f, -1.5f, -1.5f), StackVal, StackVal) };
	vVar11.f_4 = (vVar11.y + 1.65f);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar5, vVar11, StackVal) * Vector(1.7f, 1.7f, 1.7f), StackVal, StackVal) };
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar2, StackVal) * Vector(0.79f, 0.79f, 0.79f), StackVal, StackVal) };
	vVar14.f_4 = (vVar14.y + 0.65f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar5, vVar14, StackVal) * Vector(-2.0f, -2.0f, -2.0f), StackVal, StackVal) };
	GET_CAMERA_POSITION(*cParam1, &vVar17);
	GET_CAMERA_DIRECTION(*cParam1, &vVar20);
	if (CAMERA_GET_CURRENT_TRANSITION_TYPE(*cParam1) != 1 || !IS_PROCESSING_CAMERA_SHOT_TRANSITION(*cParam1))
	{
		if (bParam4)
		{
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*cParam1) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*cParam1);
			}
			SET_CAMERA_POSITION(*cParam1, vVar11);
			SET_CAMERA_TARGET_POSITION(*cParam1, vVar14, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERA_FOV(*cParam1, 31.0f);
			}
			else
			{
				SET_CAMERA_FOV(*cParam1, 41.0f);
			}
		}
		else
		{
			if (!IS_OBJECT_VALID(bLocal_284))
			{
				bLocal_284 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_190, Function_54());
			}
			if (!IS_OBJECT_VALID(bLocal_285))
			{
				bLocal_285 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_190, Function_54());
			}
			Function_448(bLocal_284);
			Function_448(bLocal_285);
			SET_CAMERASHOT_POSITION(bLocal_284, vVar17);
			SET_CAMERASHOT_DIRECTION(bLocal_284, vVar20, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERASHOT_FOV(bLocal_284, 31.0f);
			}
			else
			{
				SET_CAMERASHOT_FOV(bLocal_284, 41.0f);
			}
			SET_CAMERASHOT_POSITION(bLocal_285, vVar11);
			SET_CAMERASHOT_TARGET_POSITION(bLocal_285, vVar14, 0);
			if (IS_DISPLAY_WIDESCREEN())
			{
				SET_CAMERASHOT_FOV(bLocal_285, 31.0f);
			}
			else
			{
				SET_CAMERASHOT_FOV(bLocal_285, 41.0f);
			}
			while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*cParam1) && !IS_EXITFLAG_SET())
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(*cParam1);
			}
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(*cParam1, bLocal_284, bLocal_285, 0.75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(*cParam1, bLocal_285, 4294967295);
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*cParam1, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*cParam1, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar23);
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar11, vVar23, 1);
}

void Function_448(bool bParam0) //Position: 0x1F5AC / 128428
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

int Function_449(var uParam0, int iParam1) //Position: 0x1F5BD / 128445
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

void Function_450(int iParam0) //Position: 0x1F622 / 128546
{
	Function_77(&uLocal_194, iParam0);
	return;
}

void Function_451(bool bParam0, bool bParam1) //Position: 0x1F62F / 128559
{
	if (Function_214())
	{
		if (bParam1)
		{
			bLocal_902 = bParam0;
			iLocal_901 = 16;
			NET_LOG(true, "Poker", "Locking to State %s (%s) via %s", Function_321(bParam0), I2STR(bParam0), Function_321(iLocal_901), false);
		}
		else
		{
			iLocal_901 = bParam0;
			NET_LOG(true, "Poker", "Moving to State %s (%s)", Function_321(bParam0), I2STR(bParam0), false, false);
		}
	}
	else
	{
		iLocal_901 = bParam0;
	}
	return;
}

void Function_452(var uParam0, int iParam1) //Position: 0x1F6CB / 128715
{
	Function_12(uParam0[Function_418(iParam1)], Function_417(iParam1));
	return;
}

void Function_453(var uParam0) //Position: 0x1F6E2 / 128738
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*uParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

int Function_454() //Position: 0x1F701 / 128769
{
	bool bVar0;
	
	bVar0 = Function_200();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_455(int iParam0) //Position: 0x1F71B / 128795
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
					Function_456(StackVal, iParam0);
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
		else if (GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1") == "")
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(StackVal)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_456(int iParam0, int iParam1) //Position: 0x1F8E4 / 129252
{
	Function_457(iParam0 + 12[iParam153] + 36);
	return;
}

void Function_457(int iParam0) //Position: 0x1F8F7 / 129271
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

void Function_458(int iParam0) //Position: 0x1F959 / 129369
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
				if (IS_ATTACHMENT_VALID((*&Local_292 + 12[iVar153] + 184)[StackVal]))
				{
					if (Function_430((*&Local_292 + 12)[StackVal53]))
					{
					}
				}
			}
		}
	}
}

void Function_459(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, int iParam53) //Position: 0x1FA1D / 129565
{
	vector3 vVar0;
	vector3 vVar3;
	
	REMOVE_OBJECT_ATTACHMENT((*&iParam0 + 184)[iParam53]);
	Function_460(iParam0, &vVar0, &vVar3);
	SET_OBJECT_POSITION((*&iParam0 + 164)[iParam53], vVar0);
	SET_OBJECT_ORIENTATION((*&iParam0 + 164)[iParam53], vVar3);
}

void Function_460(bool bParam0, var uParam1, int iParam2) //Position: 0x1FA59 / 129625
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
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, uParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_461(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, int iParam53) //Position: 0x1FB4C / 129868
{
	vector3 vVar0;
	vector3 vVar3;
	
	REMOVE_OBJECT_ATTACHMENT((*&iParam0 + 184)[iParam53]);
	Function_462(iParam0, &vVar0, &vVar3, iParam53);
	SET_OBJECT_POSITION((*&iParam0 + 164)[iParam53], vVar0);
	SET_OBJECT_ORIENTATION((*&iParam0 + 164)[iParam53], vVar3);
}

void Function_462(bool bParam0, var uParam1, int iParam2, int iParam3) //Position: 0x1FB8A / 129930
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
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, uParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
		PRINTSTRING("GET_BET_CHIP_IN_POSITION_AND_ORIENTATION_RELATIVE_TO_ACTOR returning ");
		PRINTVECTOR(*uParam1);
		PRINTNL();
		PRINTSTRING("GET_BET_CHIP_IN_POSITION_AND_ORIENTATION_RELATIVE_TO_ACTOR returning ");
		PRINTVECTOR(*iParam2);
		PRINTNL();
	}
}

void Function_463() //Position: 0x1FE79 / 130681
{
	if (Function_218(0) == 4294967295)
	{
		Function_466(4294967295);
	}
	else
	{
		Function_466((&Local_292 + 12[Function_218(1)53])->f_136);
		Function_464((&Local_292 + 12[Function_218(1)53])->f_152);
	}
	return;
}

void Function_464(int iParam0) //Position: 0x1FEAE / 130734
{
	Function_465(11, iParam0);
	return;
}

void Function_465(int iParam0, int iParam1) //Position: 0x1FEBB / 130747
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_466(int iParam0) //Position: 0x1FED5 / 130773
{
	Function_467(0, iParam0);
	return;
}

void Function_467(int iParam0, var uParam1) //Position: 0x1FEE1 / 130785
{
	(*&Global_78480 + 132)[iParam0] = uParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = uParam1;
	}
	return;
}

void Function_468() //Position: 0x1FF0A / 130826
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_469())
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
				if (Function_214())
				{
					Local_292.f_1388 = 0;
				}
				else if (Local_230.f_180)
				{
					Local_292.f_1388 = Function_412(&Local_292);
				}
				else
				{
					Local_292.f_1388 = Local_292.f_1384;
				}
				iVar0 = Function_449(&Local_292 + 1288, Local_292.f_1388);
				uVar1 = StackVal;
				Function_447(&Local_292, &cLocal_195, uVar1, Function_218(0), 1);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_292 + 12)[Function_216(1)53], "sit_poker/Dealer/idle");
				if (!IS_OBJECT_VALID(bLocal_282))
				{
					NET_OBJECT_REPLICATION_MODE_START(17, 0);
					bLocal_282 = CREATE_PROP_IN_LAYOUT(bLocal_190, "DeckOfCards", "$/fragments/p_gen_cards02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
					uLocal_880 = ATTACH_OBJECTS_NO_DRV(bLocal_282, GET_OBJECT_FROM_ACTOR((*&Local_292 + 12)[Function_216(1)53]), "elbow_l_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
					NET_OBJECT_REPLICATION_MODE_END(17);
					Function_439(bLocal_282, (*&Local_292 + 12)[Function_216(1)53]);
				}
				Function_437(&Local_292);
				Function_376(&Local_292, Function_218(0));
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_251(&iLocal_191);
				iLocal_1 = 106;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_385("Poker_PlayerChooseSeat_Objective", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_251(&iLocal_191);
				iLocal_1 = 7;
			}
			break;
		
		case 0x00000008:
			if (Function_480(&iLocal_191) < 1.0f)
			{
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_0 = 1;
				iLocal_1 = 0;
				Function_451(0, 0);
			}
			break;
	}
	return;
}

bool Function_469() //Position: 0x201C5 / 131525
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	
	switch (iLocal_178)
	{
		case 0x000003E8:
			iVar0 = 0;
			while (iVar0 <= Local_230.f_12)
			{
				if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar0]))
				{
					Function_477((*&Local_230 + 12)[iVar0], &Local_292, iVar0, (*&Local_230 + 40)[iVar0]);
					if (*&Local_230 + 12)[iVar0] != Function_200()
					{
						SET_DRAW_ACTOR((*&Local_230 + 12)[iVar0], 0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 6)
			{
				Function_476(GET_GRINGO_FROM_OBJECT(StackVal));
				if (!(*&Local_292 + 1288)[iVar03])
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), 0);
				}
				if (Local_292.f_1384 == iVar0 && (*&Local_292 + 1288)[iVar03])
				{
					GET_OBJECT_POSITION(StackVal, &vVar1);
					uVar7 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 1.0f, "p_gen_chairpokerfancy01x", 1);
					if (!IS_PHYSINST_VALID(uVar7))
					{
						uVar7 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 1.0f, "p_gen_chair05x", 1);
					}
					if (IS_PHYSINST_VALID(uVar7))
					{
						Function_475((*&Local_292 + 12)[StackVal53], &vVar1, &vVar4);
						SET_OBJECT_POSITION(GET_OBJECT_FROM_PHYSINST(uVar7), vVar1);
						SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_PHYSINST(uVar7), vVar4);
					}
					else
					{
						LOG_ERROR("NearestChair not valid");
					}
				}
				iVar0++;
			}
			Function_473();
			SAY_SINGLE_LINE_CONTEXT((*&Local_292 + 12)[Function_218(1)53], 496, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			Function_251(&iLocal_191);
			iLocal_178 = 1006;
			break;
		
		case 0x000003EE:
			if ((IS_ACTION_NODE_PLAYING(Function_200(), "sit_poker/Player/join_game/idle") && Function_472()) && Function_471(Local_230.f_176))
			{
				iVar0 = 0;
				while (iVar0 <= Local_230.f_12)
				{
					if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar0]))
					{
						SET_DRAW_ACTOR((*&Local_230 + 12)[iVar0], 1);
					}
					iVar0++;
				}
				Function_405(&Local_292);
				if (Local_230.f_180)
				{
					Function_470(1.0f);
				}
				if (Function_214())
				{
					iLocal_178 = 1008;
				}
				else
				{
					return 1;
				}
			}
			if (Function_480(&iLocal_191) < 15.0f)
			{
				Function_121(((&Local_292 + 12[Function_218(1)53])->f_136 / 10), 1);
				Function_219(2);
			}
			break;
		
		case 0x000003F0:
			if (!Function_325(1008, 1, 0x3f800000))
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

void Function_470(float fParam0) //Position: 0x2047B / 132219
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

int Function_471(bool bParam0) //Position: 0x20498 / 132248
{
	if (!UNK_0x9D20BDC4("numberSystem") && !bParam0)
	{
		return 0;
	}
	return 1;
}

int Function_472() //Position: 0x204BE / 132286
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar12;
	var uVar13;
	var uVar14;
	
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
			cVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&Var2, 0) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar4, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	uVar12 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(uVar12))
	{
		return 0;
	}
	uVar13 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(uVar12))
	{
		return 0;
	}
	uVar14 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(uVar12))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar4, Function_189(bVar0), 32);
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

void Function_473() //Position: 0x20702 / 132866
{
	int iVar0;
	bool bVar1;
	
	Function_474(Function_200());
	Function_267(8192);
	if (UNK_0xE094DB31(Function_200(), 1))
	{
		Function_450(8192);
		DEEQUIP_ACCESSORY(Function_200(), 1);
	}
	Function_267(4194304);
	if (Function_112(4))
	{
		Function_450(4194304);
		Function_198(4, 0);
	}
	iVar0 = 0;
	while (iVar0 <= Local_230.f_12)
	{
		if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_230 + 12)[iVar0], 1, 0);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_230 + 12)[iVar0], 2, 0);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_230 + 12)[iVar0], 3, 1);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_230 + 12)[iVar0], 4, 1);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_230 + 12)[iVar0]);
		}
		iVar0++;
	}
	if (!Function_214())
	{
		iVar0 = 0;
		while (iVar0 <= Local_230.f_12)
		{
			bVar1 = (*&Local_230 + 12)[iVar0];
			if (IS_ACTOR_VALID(bVar1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bVar1, 26, 0);
			}
			iVar0++;
		}
	}
	return;
}

void Function_474(bool bParam0) //Position: 0x207DD / 133085
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(iParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_475(bool bParam0, var uParam1, int iParam2) //Position: 0x20802 / 133122
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
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, iParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

void Function_476(int iParam0) //Position: 0x208E5 / 133349
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	uVar0 = GRINGO_GET_USE_COMPONENT_EXT(iParam0, "UseCase1");
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, uVar0, 0);
	while (iVar1 >= 4294967295)
	{
		uVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, uVar0);
		uVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(uVar2, iParam0);
		if (IS_PHYSINST_VALID(uVar3))
		{
			HIDE_PHYSINST(uVar3);
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, uVar0, iVar1 + 1);
	}
	return;
}

void Function_477(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0x20954 / 133460
{
	bool bVar0;
	
	if (!bParam2 != 4294967295 && !(*iParam1 + 1288)[bParam23])
	{
		PRINTSTRING("Adding player at specific seat ");
		PRINTINT(bParam2);
		PRINTNL();
		Function_478(iParam1 + 12[iParam1->f_137653], bParam0, bParam2, uParam3);
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
					WAIT(0);
				}
				if (!Function_214())
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), 1);
					if (Local_230.f_180)
					{
						SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 1, 0, 1);
					}
					else
					{
						SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 0, 0, 1);
					}
					Function_497(StackVal, GET_GRINGO_FROM_OBJECT(&cLocal_195));
				}
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 4294967295, 1);
				if (Function_214())
				{
					SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 1, 0, 1);
				}
			}
		}
		else
		{
			bVar0 = RAND_INT_RANGE(false, 2);
			if (Global_29006 == Global_30717[0])
			{
				bVar0 = RAND_INT_RANGE(false, true);
			}
			switch (bVar0)
			{
				case 0x00000000:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "sit_poker_gped", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_gped") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
				
				case 0x00000002:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "sit_poker_oldm", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_oldm") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
				
				case 0x00000001:
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					SET_ANIM_SET_FOR_ACTOR(bParam0, "sit_poker_hillb", 0);
					while (!ACTOR_HAS_ANIM_SET(bParam0, "sit_poker_hillb") && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					break;
			}
			if (Function_214())
			{
				SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase2", 1, 0, 0);
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase2", 1, 1);
			}
			else
			{
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 1, 1);
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "sit_poker/Player/card_idle/idle");
			}
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

void Function_478(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x20D1A / 134426
{
	if (!AI_IGNORE_ACTOR(bParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(bParam1, 1);
	SET_AUTO_CONVERSATION_LOOK(bParam1, 0);
	*iParam0 = bParam1;
	iParam0->f_132 = uParam2;
	if (IS_ACTOR_PLAYER(*iParam0))
	{
		if (!Function_214())
		{
			if (Local_230.f_164)
			{
				Function_479(Local_230.f_172, 1);
			}
			else
			{
				Function_479((iParam3 / 10), 1);
			}
		}
		iParam0->f_128 = 1;
	}
	else if (Function_424(bParam1) >= 4294967295)
	{
		iParam0->f_128 = 2;
	}
	else
	{
		iParam0->f_128 = 0;
	}
	Function_260(iParam0 + 36);
	iParam0->f_136 = iParam3;
	iParam0->f_140 = 0;
	iParam0->f_144 = 0;
	iParam0->f_152 = 0;
	iParam0->f_148 = 0;
	strcpy(iParam0 + 4, "__invalid__", 32);
	if (Function_214())
	{
		if (!Function_422(*iParam0, iParam0 + 4))
		{
		}
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
}

int Function_479(bool bParam0, bool bParam1) //Position: 0x20DFA / 134650
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) - bParam0) <= 0)
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
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	return 1;
}

float Function_480(int iParam0) //Position: 0x20E8A / 134794
{
	if (Function_250(iParam0))
	{
		if (Function_481(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_481(bool bParam0) //Position: 0x20F52 / 134994
{
	return Function_24(*bParam0, 2);
}

void Function_482(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106) //Position: 0x20F5F / 135007
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_424)
	{
		Function_215(StackVal, Param0[iVar02], &uVar1);
		iVar0++;
	}
}

void Function_483(int iParam0) //Position: 0x20F8A / 135050
{
	iParam0->f_8 = Local_230.f_168;
	iParam0->f_4 = (StackVal / 2);
	iParam0->f_1376 = 0;
	iParam0->f_1380 = 0;
	iParam0->f_1944 = 0;
	iParam0->f_1948 = 0;
	iParam0->f_1388 = 0;
	iParam0->f_1392 = 0;
	iParam0->f_1940 = 0;
	iParam0->f_1984 = 0;
	iParam0->f_2244 = 0;
	Function_296(iParam0);
	Function_295(iParam0 + 1396);
	Function_484(iParam0 + 1288);
	Function_260(iParam0 + 1824);
	Function_286(iParam0 + 1364);
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

void Function_484(int iParam0) //Position: 0x210F6 / 135414
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
		bVar9 = Function_485(StackVal, StackVal, *(&Local_230 + 72[iVar83]));
		while ((!IS_GRINGO_VALID(bVar9) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar0 + 5.0f))
		{
			bVar9 = Function_485(StackVal, StackVal, *(&Local_230 + 72[iVar83]));
			WAIT(0);
		}
		bVar1[iVar8] = bVar9;
		iVar10 = 0;
		while (iVar10 <= iVar8)
		{
			if (bVar1[iVar10] == bVar9)
			{
				bVar9 = "";
				Function_219(2);
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

bool Function_485(var uParam0, var uParam1, int iParam2) //Position: 0x211A9 / 135593
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

void Function_486() //Position: 0x211EB / 135659
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	var uVar12;
	var uVar13;
	var uVar14;
	
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	Function_487("$/fragments/p_gen_cards02x");
	Function_487("$/fragments/p_crd_01x");
	Function_487("$/fragments/p_gen_dealerButton01x");
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(&Var2, 0) };
			Function_487(&cVar4);
			iVar1++;
		}
		bVar0++;
	}
	uVar12 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	STREAMING_REQUEST_PROP(uVar12, true);
	uVar13 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	STREAMING_REQUEST_PROP(uVar13, true);
	uVar14 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	STREAMING_REQUEST_PROP(uVar14, true);
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar4, Function_189(bVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar4, 0), true);
		bVar0++;
	}
	STREAMING_REQUEST_GRINGO(GET_ASSET_ID("fake_poker", 1));
	return;
}

int Function_487(bool bParam0) //Position: 0x2139B / 136091
{
	char* cVar0[64];
	
	if (!STREAMING_REQUEST_PROP(GET_ASSET_ID(cParam0, 0), true))
	{
		strcpy(&cVar0, "Failed to load ", 64);
		stradd(&cVar0, bParam0, 64);
		return 0;
	}
	return 1;
}

bool Function_488() //Position: 0x213CE / 136142
{
	return Function_489();
}

int Function_489() //Position: 0x213D7 / 136151
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
	if (!Global_29006 != Global_30717[0])
	{
		if (!HAS_ANIM_SET_LOADED("sit_poker_oldm"))
		{
			return 0;
		}
	}
	return 1;
}

void Function_490() //Position: 0x21456 / 136278
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_491(bool bParam0, int iParam1) //Position: 0x21462 / 136290
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<16> Var6;
	
	if (GET_NUM_PLAYERS() >= 1 || NET_GET_SESSION_GAMER_COUNT() >= 1)
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
		iVar1 = Function_493(bParam0, &bVar0);
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
								bVar3 = Function_424((*iParam1 + 12)[bVar453]);
								if (bVar3 == bVar2)
								{
									Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(bVar4, iParam1) };
									NET_LOG(true, "Net Minigame", "MARKED PLAYER '%s' AS LINKDEAD. WAS PLAYER #%s", &Var6, I2STR(bVar4), false, false);
									PRINT_HELP_FORMAT(10.0f, "Poker_Player_LeftSession", &Var6, "", "", "", 2, 0, 0);
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
			iVar1 = Function_493(bParam0, &bVar0);
		}
	}
	Function_492(bParam0);
	return;
}

void Function_492(bool bParam0) //Position: 0x216BD / 136893
{
	if (IS_OBJECTSET_VALID(bParam0))
	{
		DISBAND_OBJECTSET(bParam0);
	}
	return;
}

int Function_493(bool bParam0, bool bParam1) //Position: 0x216D0 / 136912
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

void Function_494() //Position: 0x2170F / 136975
{
	Function_495(4);
	return;
}

void Function_495(int iParam0) //Position: 0x21719 / 136985
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
			Function_496(iParam0);
		}
	}
	return;
}

void Function_496(int iParam0) //Position: 0x2174B / 137035
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_497(var uParam0, bool bParam1) //Position: 0x2175A / 137050
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
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
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

void Function_498() //Position: 0x218E5 / 137445
{
	bool bVar0;
	int iVar1;
	
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(0);
	Function_515();
	bLocal_190 = CREATE_LAYOUT("Poker01");
	Function_514();
	if (!Local_230.f_180)
	{
		Function_512();
	}
	Function_511(&iLocal_191);
	Function_511(&iLocal_288);
	iLocal_879 = 0;
	iLocal_915 = 1;
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_197 = GET_CURRENT_GAME_TIME();
	cLocal_195 = CREATE_CAMERA_IN_LAYOUT(bLocal_190, "pokerCamera", 2);
	SET_CAMERA_LIGHTING_SCHEME(cLocal_195, "poker");
	INIT_CAMERA_FROM_GAME_CAMERA(cLocal_195);
	iLocal_0 = 99;
	Function_267(34);
	Function_267(8388608);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bLocal_190, "Poker_StayOutvol", 2, *(&Local_230 + 148), 0.0f, 0.0f, 0.0f, 2.75f, 2.0f, 2.75f);
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (IS_ACTOR_VALID((*&Local_230 + 12)[iVar1]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_230 + 12)[iVar1], 1);
			REFERENCE_ACTOR((*&Local_230 + 12)[iVar1]);
			CLEAR_LAST_HIT((*&Local_230 + 12)[iVar1]);
		}
		iVar1++;
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
	Function_509(&uLocal_286);
	if (Function_214() || Function_265(4, 0))
	{
		Function_499();
		Function_453(&uLocal_286);
		if (Global_28178 == 3)
		{
			Function_452(&uLocal_286, 17);
			Function_452(&uLocal_286, 6);
		}
	}
	Function_267(2048);
	return;
}

void Function_499() //Position: 0x21A1B / 137755
{
	Function_507(1);
	uLocal_918 = Function_505("PokerEvents");
	NET_SCRIPTMSG_REGISTER_HANDLER(29, 138156);
	NET_SCRIPTMSG_REGISTER_HANDLER(30, 137963);
	NET_SCRIPTMSG_REGISTER_HANDLER(28, 137815);
	return;
}

void Function_500(int iParam0) //Position: 0x21A57 / 137815
{
	struct<2> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	switch (Var0)
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
	if (Local_916 != 0)
	{
		LOG_ERROR("Received Player Action despite already having one!");
	}
	Local_916 = { StackVal, Var0 };
	return;
}

void Function_501(int iParam0) //Position: 0x21AEB / 137963
{
	var uVar0[11];
	bool bVar12;
	int iVar13;
	bool bVar14;
	char* cVar15;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 12);
	iVar13 = 0;
	while (iVar13 <= 52)
	{
		bVar14 = (iVar13 % 5);
		bVar12 = (iVar13 / 5);
		Function_502(uVar0[bVar12], bVar14, &Local_292 + 1396[iVar132]);
		if (Global_30842[38])
		{
			PRINTSTRING("Card");
			PRINTINT(bVar12);
			PRINTSTRING("x");
			PRINTINT(bVar14);
			PRINTSTRING(": ");
			Function_215(StackVal, *(&Local_292 + 1396[iVar132]), &cVar15);
			PRINTSTRING(&cVar15);
			PRINTNL();
		}
		iVar13++;
	}
	Function_450(512);
	return;
}

void Function_502(bool bParam0, int iParam1, int iParam2) //Position: 0x21B83 / 138115
{
	bParam0 = SHIFT_RIGHT(bParam0, iParam1 * 6);
	*iParam2 = (bParam0 && 15);
	bParam0 = SHIFT_RIGHT(bParam0, 4);
	iParam2->f_4 = (bParam0 && 3);
	return;
}

void Function_503(int iParam0) //Position: 0x21BAC / 138156
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	Function_215(StackVal, *(&Var0 + 4), &cVar4);
	if (Var0 >= 4294967295)
	{
		iVar10 = StackVal;
		Function_350(&Local_292 + 12[iVar1053] + 36, &Var0 + 4);
		Function_504(&Var0 + 4, &Local_292 + 12[iVar1053], Var0.f_12, 0);
	}
	else
	{
		Function_350(&Local_292 + 1824, &Var0 + 4);
		if (Local_292.f_1388 == 4294967295)
		{
			Function_433(StackVal, &Local_292, &Var0 + 4, Var0.f_12);
		}
		else
		{
			Function_433(StackVal, &Local_292, &Var0 + 4, Var0.f_12);
		}
	}
	return;
}

void Function_504(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x21C58 / 138328
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* cVar9[32];
	char* cVar17[64];
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	strcpy(&cVar17, Function_54(), 64);
	if (Function_214())
	{
		if (bParam3)
		{
			strcpy(&cVar9, "$/fragments/p_crd_01x", 32);
		}
		else
		{
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(iParam0, 0) };
		}
	}
	else
	{
		cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_190(iParam0, 0) };
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	(*iParam1 + 36 + 60)[iParam2] = CREATE_PROP_IN_LAYOUT(bLocal_190, &cVar17, &cVar9, vVar0, vVar3, 1);
	if (iParam2 == 0)
	{
		(*iParam1 + 36 + 72)[iParam2] = ATTACH_OBJECTS_NO_DRV((*iParam1 + 36 + 60)[iParam2], GET_OBJECT_FROM_ACTOR(*iParam1), "wrist_l_attachment", vVar6, vVar3);
	}
	else
	{
		(*iParam1 + 36 + 72)[iParam2] = ATTACH_OBJECTS_NO_DRV((*iParam1 + 36 + 60)[iParam2], GET_OBJECT_FROM_ACTOR(*iParam1), "arm_l_attachment", vVar6, vVar3);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_439((*iParam1 + 36 + 60)[iParam2], *iParam1);
	if (!bParam3)
	{
		SET_ACTION_NODE_FOR_ACTOR(*iParam1, "sit_poker/Player/card_idle");
	}
}

var Function_505(char* cParam0) //Position: 0x21D9B / 138651
{
	bool bVar0;
	
	bVar0 = Function_506();
	return CREATE_OBJECTSET_IN_LAYOUT(cParam0, bVar0, 3, 1);
}

var Function_506() //Position: 0x21DAF / 138671
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_507(bool bParam0) //Position: 0x21DEB / 138731
{
	struct<17> Var0;
	
	Function_212(&Var0);
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
		Function_77(&Var0, 4);
	}
	Function_205(&Var0);
	Function_206();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 138813);
	return;
}

void Function_508(int iParam0) //Position: 0x21E3D / 138813
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_212(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_213(&iVar7);
	if (Function_336(&Var2))
	{
	}
	bVar8 = Function_320(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_335(&Var2, 1);
	Function_205(&Var2);
	return;
}

void Function_509(int iParam0) //Position: 0x21F40 / 139072
{
	Function_510(iParam0);
	return;
}

void Function_510(int iParam0) //Position: 0x21F4B / 139083
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

void Function_511(var uParam0) //Position: 0x21F6A / 139114
{
	if (!Function_250(uParam0))
	{
		Function_252(uParam0, 0.0f);
	}
	return;
}

void Function_512() //Position: 0x21F7F / 139135
{
	Function_513();
	return;
}

void Function_513() //Position: 0x21F88 / 139144
{
	REQUEST_ANIM_SET("nsit_poker", 0);
	REQUEST_ANIM_SET("sit_poker_gped", 0);
	REQUEST_ANIM_SET("sit_poker_hillb", 0);
	if (!Global_29006 != Global_30717[0])
	{
		REQUEST_ANIM_SET("sit_poker_oldm", 0);
	}
	REQUEST_ACTION_TREE("custom/sit_poker");
	REQUEST_ACTION_TREE("custom/fake_poker");
	return;
}

void Function_514() //Position: 0x2201B / 139291
{
	return;
}

void Function_515() //Position: 0x22021 / 139297
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_3();
	Function_516();
	if (!Global_3384)
	{
		Global_3384 = 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_516() //Position: 0x22051 / 139345
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

