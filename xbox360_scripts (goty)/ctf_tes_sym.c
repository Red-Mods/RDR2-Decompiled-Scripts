//Decompiled with MagicRDR v1.0
//Function Count : 175
//Statics Count : 306
//Natives Count : 178
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
	float fLocal_11 = 0.0f;
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_131 = 12;
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
	var uLocal_208 = 13;
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
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 5;
	var uLocal_280 = -1;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = -1;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = -1;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = -1;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = -1;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_164();
	if (Function_163())
	{
		Function_162();
	}
	else
	{
		if (Function_126())
		{
			Function_125(1);
		}
		else
		{
			Function_124(1);
		}
		iVar0 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_123(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_122(64, 0);
					iVar0 = 2;
				}
			}
			Function_106(&iLocal_277, 0.2f, 0.7f, 12, 1.0f, 1.0f, 1.0f, 1.0f);
			Function_93(&uLocal_205);
			Function_17();
			WAIT(0);
		}
	}
	Function_15(&uLocal_205);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_tes_base01x", 0);
	SET_SECTOR_PROPS_SUPER_LOCKED("tes_wall02x", 0);
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	ENABLE_CHILD_SECTOR("tes_wall01x");
	DISABLE_CHILD_SECTOR("tes_wall02x");
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xE4 / 228
{
	Function_2(&Local_51 + 4);
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_2(int iParam0) //Position: 0xF6 / 246
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x11C / 284
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x24A / 586
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x264 / 612
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x281 / 641
{
	Function_14();
	Function_2(&bLocal_39);
	Function_7();
	return;
}

void Function_7() //Position: 0x292 / 658
{
	Function_8();
	return;
}

void Function_8() //Position: 0x29B / 667
{
	if (Function_12(4194304))
	{
		Function_9(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_12(8388608))
	{
		Function_9(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x3A4 / 932
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_11(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x3CC / 972
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x3DF / 991
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x3EE / 1006
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x3FF / 1023
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x40C / 1036
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x44B / 1099
{
	Function_122(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x45C / 1116
{
	if (iParam0->f_280 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_280, 0);
		iParam0->f_280 = "";
	}
	return;
}

void Function_17() //Position: 0x47C / 1148
{
	Function_91();
	if (Function_90(1, 1))
	{
		Function_74(StackVal, StackVal, 7272, vLocal_48, 1, 7159);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_69(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_20(4560, 3353);
		Function_18();
	}
	return;
}

void Function_18() //Position: 0x4C7 / 1223
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_19(&Local_12);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x4E3 / 1251
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	return;
}

void Function_20(int iParam0, int iParam1) //Position: 0x509 / 1289
{
	Function_21(iParam0, iParam1, 3346);
	return;
}

void Function_21(var uParam0, var uParam1, int iParam2) //Position: 0x51A / 1306
{
	if (Function_12(0x4000000))
	{
		Function_30();
		Function_9(0x4000000, 0, 1);
	}
	if (Function_12(0x10000000))
	{
		Function_30();
		Function_9(0x10000000, 0, 1);
	}
	if (Function_12(2) != Function_12(0x2000000))
	{
		Function_30();
		Function_9(0x2000000, Function_12(2), 1);
	}
	if (Function_29())
	{
		Function_28(!Function_12(16));
	}
	if (Function_12(16))
	{
		Function_22(&uParam0, &uParam1, &iParam2);
		if (Function_12(8192))
		{
			if (!Function_12(4194304))
			{
				Function_9(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_12(8388608))
			{
				Function_9(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_8();
		}
		Function_9(16384, 1, 1);
	}
	else if (!Function_12(32))
	{
		Function_8();
	}
	Function_9(32768, 0, 1);
	return;
}

void Function_22(var uParam0, var uParam1, int iParam2) //Position: 0x6B3 / 1715
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_9(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_12(0x40000000);
	bVar3 = !Function_12(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_27(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_25(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_23(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_12(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_23(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_23(bool bParam0, int iParam1, int iParam2) //Position: 0x82B / 2091
{
	var uVar0;
	
	return Function_24(bParam0, iParam1, &uVar0, iParam2);
}

int Function_24(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x83C / 2108
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_25(bool bParam0, int iParam1, bool bParam2) //Position: 0x8A1 / 2209
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_90(iParam1, bParam2);
	}
	if (!Function_27(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_26(iParam1), 64);
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

var Function_26(int iParam0) //Position: 0x922 / 2338
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

bool Function_27(bool bParam0) //Position: 0xC3B / 3131
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

void Function_28(bool bParam0) //Position: 0xCDC / 3292
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_29() //Position: 0xCF6 / 3318
{
	return Function_12(32768);
}

void Function_30() //Position: 0xD03 / 3331
{
	Function_9(32768, 1, 0);
	return;
}

int Function_31() //Position: 0xD12 / 3346
{
	return 1;
}

int Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD19 / 3353
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_49(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_48(bParam0);
	bVar2 = Function_47(bParam0);
	bVar3 = Function_44(bParam0);
	iVar4 = Function_43(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_23(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_41(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_12(4))
	{
		if (Function_38(bParam0, 1, 1))
		{
			if (Function_35(bParam0))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
				bVar5 = " <SWAG_R_RET>";
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
				bVar5 = " <SWAG_B_RET>";
			}
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bVar5);
		}
	}
	else
	{
		Function_34(bVar0, bParam0);
	}
	if (Function_35(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_29() && Function_33())
	{
	}
	return 0;
}

bool Function_33() //Position: 0xE1C / 3612
{
	return (Function_12(4096) || Function_12(4));
}

void Function_34(bool bParam0, bool bParam1) //Position: 0xE2D / 3629
{
	if (Function_12(4))
	{
		if (Function_25(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

bool Function_35(bool bParam0) //Position: 0xE60 / 3680
{
	if (Function_37(bParam0, 1, 0) != 4294967295 && Function_36() != 4294967295)
	{
		return 0;
	}
	return Function_37(bParam0, 1, 0) != Function_36();
}

int Function_36() //Position: 0xE88 / 3720
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_37(GET_LOCAL_SLOT(), 1, 0);
}

int Function_37(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE9F / 3743
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_27(bParam0))
			{
				if (!Function_25(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_38(bool bParam0, int iParam1, bool bParam2) //Position: 0xEE3 / 3811
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_40(iParam1, bParam2);
	}
	if (!Function_27(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_39(iParam1), 64);
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

var Function_39(int iParam0) //Position: 0xF64 / 3940
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

var Function_40(int iParam0, bool bParam1) //Position: 0x1056 / 4182
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_41(int iParam0, bool bParam1) //Position: 0x1076 / 4214
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_42(iParam0);
	}
	if (!Function_27(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_42(int iParam0) //Position: 0x10E4 / 4324
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_43(int iParam0, int iParam1, int iParam2) //Position: 0x10FD / 4349
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_44(int iParam0) //Position: 0x1112 / 4370
{
	return Function_45(0, iParam0);
}

int Function_45(int iParam0, bool bParam1) //Position: 0x111E / 4382
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_46(iParam0);
	}
	if (!Function_27(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_46(int iParam0) //Position: 0x1185 / 4485
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_47(bool bParam0) //Position: 0x1195 / 4501
{
	return Function_41(12, bParam0);
}

int Function_48(int iParam0) //Position: 0x11A2 / 4514
{
	return Function_41(11, iParam0);
}

void Function_49(bool bParam0, int iParam1, char* cParam2) //Position: 0x11AF / 4527
{
	if (bParam0)
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_50() //Position: 0x11D0 / 4560
{
	if (!Function_64(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_63();
	Function_51();
	return 1;
}

void Function_51() //Position: 0x126C / 4716
{
	if (Function_60())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_59())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_52(0, 0);
		Function_52(1, 0);
	}
	return;
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x1297 / 4759
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_36())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_58(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_53(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_53(int iParam0, int iParam1, bool bParam2) //Position: 0x1336 / 4918
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_29())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_54(iParam1, 0) };
				break;
			
			default:
				break;
		}
		if (iParam0 == 2)
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 5);
		}
		else
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 2);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(iParam0);
		if (Function_33())
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			if (iParam0 == 1)
			{
			}
			else if (iParam0 == 2)
			{
			}
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bParam2);
	return;
}

struct<16> Function_54(var uParam0, var uParam1) //Position: 0x1429 / 5161
{
	return StackVal, StackVal, StackVal, Function_55(Function_56(uParam0), uParam1);
}

struct<16> Function_55(bool bParam0, bool bParam1) //Position: 0x143B / 5179
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

int Function_56(int iParam0) //Position: 0x1470 / 5232
{
	if (!Function_57())
	{
		return 0;
	}
	return StackVal;
}

bool Function_57() //Position: 0x1489 / 5257
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_58(int iParam0) //Position: 0x1496 / 5270
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_59() //Position: 0x14B2 / 5298
{
	return Function_36() == 4294967295;
}

bool Function_60() //Position: 0x14BD / 5309
{
	return Function_61(2);
}

int Function_61(int iParam0) //Position: 0x14C7 / 5319
{
	return Function_62(&Global_79349, iParam0);
}

int Function_62(var uParam0, bool bParam1) //Position: 0x14D6 / 5334
{
	return Function_13(uParam0->f_44, bParam1);
}

void Function_63() //Position: 0x14E5 / 5349
{
	if (Function_12(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_9(8192, 1, 1);
	}
	else if (Function_12(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_9(8192, 1, 1);
	}
	else
	{
		Function_9(8192, 0, 1);
	}
	return;
}

bool Function_64(bool bParam0) //Position: 0x1522 / 5410
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_29() || Function_68(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_65(Function_29());
	return 1;
}

void Function_65(bool bParam0) //Position: 0x15A3 / 5539
{
	if (bParam0 || Function_12(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_12(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_12(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_12(1048576) || Function_12(4)) || Function_90(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_9(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_66(int iParam0) //Position: 0x162C / 5676
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_67(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1640 / 5696
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_68(bool bParam0, bool bParam1) //Position: 0x1685 / 5765
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

void Function_69(vector3 vParam0, float fParam3) //Position: 0x16B9 / 5817
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_73(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_73(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_70(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_70(bool bParam0) //Position: 0x176C / 5996
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return "";
	}
	return Function_71(bVar0);
}

int Function_71(bool bParam0) //Position: 0x17A7 / 6055
{
	bool bVar0;
	
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam0), "cannon"))
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 523, 0f, 2, 0);
		}
		else
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 524, 0f, 2, 0);
		}
	}
	Function_72(bVar0);
	return bVar0;
}

void Function_72(bool bParam0) //Position: 0x17F5 / 6133
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_73() //Position: 0x1808 / 6152
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_74(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1837 / 6199
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_75(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7058, 1, 125, 0, 0, 0);
	Function_75(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_75(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x18BA / 6330
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_76(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_76(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1905 / 6405
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_19(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_11;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && uParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3.14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0.1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3.14159f * 0.5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3.14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_19(iParam0);
				}
			}
			else if ((iParam0->f_36 - fVar9) <= 0.0f)
			{
				iParam0->f_32 = 0;
				iParam0->f_44 = fParam4;
				if (iParam0->f_36 < fVar9)
				{
					bVar10 = true;
				}
			}
		}
		if (FABS((iParam0->f_36 - fVar9)) > 0.0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0.01f, -0.01f, -0.01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(uParam14);
			Call_Loc(uParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(uParam14);
				Call_Loc(uParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_77(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, fVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, fVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_77(float fParam0) //Position: 0x1B84 / 7044
{
	return (fParam0 * 57.29578f);
}

var Function_78(int iParam0, var uParam1) //Position: 0x1B92 / 7058
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_79(int iParam0, var uParam1) //Position: 0x1BF7 / 7159
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_sym_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_80() //Position: 0x1C68 / 7272
{
	int iVar0;
	
	iVar0 = Function_86(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_81(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_81(bool bParam0, int iParam1) //Position: 0x1C95 / 7317
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(bParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_85(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_84((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_84((*iParam1)[iVar202], &iVar21))
		{
			if (Function_82((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(bVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(bVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(bVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return bVar12;
}

bool Function_82(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1DA4 / 7588
{
	float fVar0;
	
	if (!Function_83(bParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		bParam3 = true;
	}
	fVar0 = (((TO_FLOAT(bParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
		case default:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-30.0f + RAND_FLOAT_RANGE(-15.0f, 15.0f)), 0.0f, 90.0f };
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*uParam1 = { fVar0, 0.315f, 0.006f };
			*uParam2 = { (-10.0f + RAND_FLOAT_RANGE(-7.5f, 7.5f)), -68.0f, (90.0f + RAND_FLOAT_RANGE(-3.0f, 3.0f)) };
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-60.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)), 0.0f, -90.0f };
			return 1;
			break;
	}
	return 0;
}

bool Function_83(int iParam0) //Position: 0x1ECB / 7883
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_84(bool bParam0, int iParam1) //Position: 0x1EDD / 7901
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			*iParam1 = 0;
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*iParam1 = 1;
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*iParam1 = 2;
			return 1;
			break;
	}
	return 0;
}

var Function_85() //Position: 0x1F39 / 7993
{
	int iVar0;
	
	return iVar0;
}

var Function_86(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1F41 / 8001
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_88(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_84((*uParam3)[iVar12], &iVar2))
		{
			iVar10[iVar2]++;
			if (iVar10[iVar2] == 2)
			{
				iVar10[iVar2] = 3;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_84((*uParam3)[iVar12], &iVar2))
		{
			if (Function_87((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				bVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", bVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*uParam3)[iVar12])), StackVal) + Vector(0.0f, uParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar9, 0);
				if (IS_OBJECT_VALID(bVar9))
				{
					ATTACH_OBJECTS(bVar9, bVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return bVar0;
}

bool Function_87(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x202F / 8239
{
	if (!Function_83(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.08916403f, 0.8989502f, 0.07509536f };
				*uParam2 = { -60.09727f, -101.49f, 47.60939f };
			}
			else
			{
				*uParam1 = { 0.02631292f, 0.8451666f, -0.1088216f };
				*uParam2 = { 81.3988f, -1.648355f, -169.4713f };
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.3568475f, 1.28952f, -0.22761f };
				*uParam2 = { -124.3062f, 85.737f, -40.141f };
			}
			else if (iParam3 == 2)
			{
				*uParam1 = { 0.06225565f, 1.28952f, -0.22761f };
				*uParam2 = { -219.3702f, -86.19345f, 135.0233f };
			}
			else
			{
				*uParam1 = { 0.3401467f, 1.258268f, -0.22761f };
				*uParam2 = { -91.1388f, 85.737f, -40.141f };
			}
			return 1;
			break;
		
		case 0x00000030:
			*uParam1 = { 0.4015671f, 0.9808789f, -0.01462308f };
			*uParam2 = { -122.852f, 27.893f, 5.454f };
			return 1;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0.3715671f, 0.8808789f, -0.1146231f };
			*uParam2 = { 57.148f, 27.893f, 5.454f };
			return 1;
			break;
	}
	return 0;
}

var Function_88(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x21C0 / 8640
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *iParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, iParam1, &uVar0))
		{
			*iParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*iParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_89()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_89() //Position: 0x222C / 8748
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_90(bool bParam0, bool bParam1) //Position: 0x2253 / 8787
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_91() //Position: 0x2273 / 8819
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000009:
						Function_92("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_92("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_92("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_14();
	}
	return;
}

void Function_92(char* cParam0, int iParam1) //Position: 0x2308 / 8968
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (iParam1 == 4294967295)
	{
		strcpy(&cVar0, cParam0, 32);
		stradd(&cVar0, "_count", 32);
		iParam1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_6286 == 0)
	{
		Global_6286 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_6286 % iParam1)), 32);
	Global_6286++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

int Function_93(int iParam0) //Position: 0x239F / 9119
{
	int iVar0;
	
	if (!Function_104(*iParam0) || (Function_123(64) && Function_100()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_104(*iParam0))
		{
		}
		if (Function_123(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_104(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 280);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_276)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_97(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_10(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_276)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_276)
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_96((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_95((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_276)
			{
				iParam0->f_284 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_284) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_94(3, iParam0->f_276))
			{
				if (iParam0->f_276 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_276);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_13((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_11(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_13((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_13((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_13((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
							}
						}
						else if (StackVal || !IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_OPENING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
						{
							CLOSE_DOOR((iParam0 + 12[StackVal5])->f_12, 1.0f);
						}
					}
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int Function_94(int iParam0, int iParam1) //Position: 0x2726 / 10022
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x2738 / 10040
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

void Function_96(bool bParam0, bool bParam1) //Position: 0x278C / 10124
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

int Function_97(var uParam0, var uParam1, int iParam2) //Position: 0x27DD / 10205
{
	return Function_98(Global_29006, uParam0, uParam1, iParam2);
}

int Function_98(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x27EF / 10223
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_99(iParam0))
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

bool Function_99(int iParam0) //Position: 0x288B / 10379
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_100() //Position: 0x28A1 / 10401
{
	return !Function_101();
}

bool Function_101() //Position: 0x28AB / 10411
{
	if (Function_103())
	{
		return (Function_102() != 1 || Function_102() != 0);
	}
	return 0;
}

int Function_102() //Position: 0x28C4 / 10436
{
	return Global_79349.f_16;
}

bool Function_103() //Position: 0x28D0 / 10448
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_104(int iParam0) //Position: 0x28D9 / 10457
{
	if (!Function_99(iParam0))
	{
		return 1;
	}
	return Function_105(&(Global_29008[iParam0]), 4);
}

int Function_105(var uParam0, bool bParam1) //Position: 0x28F5 / 10485
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_106(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2911 / 10513
{
	float fVar0;
	
	if (Function_121())
	{
		if (Function_120(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_116(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_110((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_107((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_110((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_107((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_107(int iParam0, var uParam1, int iParam2) //Position: 0x29B4 / 10676
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_109(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_108(iParam2);
	}
	return;
}

void Function_108(int iParam0) //Position: 0x29D9 / 10713
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_109(int iParam0) //Position: 0x29EE / 10734
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_110(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2A03 / 10755
{
	int iVar0;
	bool bVar1;
	
	Function_115(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_114(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_111(StackVal, bVar1, bParam4);
		}
	}
}

void Function_111(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A75 / 10869
{
	int iVar0;
	
	Function_115(iParam0);
	Function_113(bParam1);
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
	Function_112();
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

void Function_112() //Position: 0x2BEE / 11246
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_113(bool bParam0) //Position: 0x2BFA / 11258
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

void Function_114(int iParam0, int iParam1) //Position: 0x2C40 / 11328
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_115(iParam0);
	Function_113(iVar0);
	PRINTNL();
	Function_111(iParam0, iVar0, iParam1);
	return;
}

void Function_115(int iParam0) //Position: 0x2C65 / 11365
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

float Function_116(int iParam0) //Position: 0x2CAB / 11435
{
	return -Function_117(iParam0);
}

float Function_117(int iParam0) //Position: 0x2CB7 / 11447
{
	if (Function_120(iParam0))
	{
		if (Function_119(iParam0))
		{
			return StackVal;
		}
		Function_118();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_118() //Position: 0x2D88 / 11656
{
	if (!Function_121())
	{
	}
	return;
}

bool Function_119(int iParam0) //Position: 0x2D95 / 11669
{
	return Function_13(*iParam0, 2);
}

bool Function_120(int iParam0) //Position: 0x2DA2 / 11682
{
	return Function_13(*iParam0, 1);
}

bool Function_121() //Position: 0x2DAF / 11695
{
	return NET_IS_IN_SESSION();
}

void Function_122(int iParam0, bool bParam1) //Position: 0x2DB8 / 11704
{
	if (bParam1)
	{
		Function_11(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_10(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_123(int iParam0) //Position: 0x2DE0 / 11744
{
	return Function_13(StackVal, iParam0);
}

void Function_124(bool bParam0) //Position: 0x2DF3 / 11763
{
	Function_122(16, bParam0);
	return;
}

void Function_125(var uParam0) //Position: 0x2E00 / 11776
{
	Function_122(8, uParam0);
	return;
}

bool Function_126() //Position: 0x2E0D / 11789
{
	Function_161(&iLocal_277, 0, 9, 30, 0, 0, 1);
	Function_161(&iLocal_277, 1, 9, 30, 1, 1, 0);
	Function_161(&iLocal_277, 2, 12, 0, 2, 2, 2);
	Function_161(&iLocal_277, 3, 12, 0, 1, 1, 0);
	Function_161(&iLocal_277, 4, 23, 0, 0, 0, 1);
	Function_158(&iLocal_277);
	ENABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("tes_wall01x");
	ENABLE_CHILD_SECTOR("tes_wall02x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_tes_base01x", 1);
	SET_SECTOR_PROPS_SUPER_LOCKED("tes_wall02x", 1);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_156();
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_152(Local_51))
	{
		return 0;
	}
	Function_151("MEX_SONG_04", "MEX_SONG_03", 0, 58, 58, 1);
	Function_149(Local_51.f_612);
	Function_142(&Global_83591 + 276, 0);
	Function_140(&Global_83591, 1, 22, 1, 1);
	Function_140(&Global_83591, 2, 1, 10, 1);
	Function_140(&Global_83591, 3, 15, 15, 1);
	Function_140(&Global_83591, 4, 13, 10, 1);
	Function_135(&Global_83591, 1, 24, 4, 1);
	Function_135(&Global_83591, 2, 3, 10, 1);
	Function_135(&Global_83591, 3, 16, 15, 1);
	Function_135(&Global_83591, 4, 14, 5, 1);
	Function_134(&Global_83591);
	Function_133(&Global_83591 + 276, 4);
	Function_132(0, 6);
	Function_132(1, 5);
	if (!Function_127(&uLocal_205))
	{
		return 0;
	}
	return 1;
}

bool Function_127(bool bParam0) //Position: 0x2F8F / 12175
{
	if (!Function_131(bParam0, Global_30685[2]))
	{
		return 0;
	}
	Function_130(bParam0, "tesoroAzul", "wall01", 1);
	Function_130(bParam0, "tesoroAzul", "wall01", 2);
	Function_130(bParam0, "tesoroAzul", "wall01", 3);
	Function_130(bParam0, "tesoroAzul", "wall01", 4);
	Function_130(bParam0, "tesoroAzul", "nstables01", 1);
	Function_130(bParam0, "tesoroAzul", "storageShack01", 1);
	Function_128(bParam0, "tesoroAzul", "house04", 1, 1, 0, 1, 1);
	Function_128(bParam0, "tesoroAzul", "house04", 2, 1, 0, 1, 1);
	Function_128(bParam0, "tesoroAzul", "house01", 1, 1, 0, 1, 1);
	Function_128(bParam0, "tesoroAzul", "house01", 2, 1, 0, 1, 1);
	Function_128(bParam0, "tesoroAzul", "house02", 1, 1, 0, 1, 1);
	Function_128(bParam0, "tesoroAzul", "house02", 2, 1, 0, 1, 1);
	Function_128(bParam0, "tesoroAzul", "house03", 1, 1, 0, 1, 1);
	return 1;
}

int Function_128(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x314E / 12622
{
	int iVar0;
	
	iVar0 = iParam0->f_276;
	if (!Function_129(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_11(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_11(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_11(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_11(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_129(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31BF / 12735
{
	if (iParam0->f_276 > 13)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_2765] = uParam1;
	(iParam0 + 12[iParam0->f_2765])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_2765])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_2765])->f_16 = 0;
	iParam0->f_276++;
	return 1;
}

int Function_130(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x321B / 12827
{
	int iVar0;
	
	iVar0 = iParam0->f_276;
	if (!Function_129(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_11(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_131(int iParam0, int iParam1) //Position: 0x324D / 12877
{
	int iVar0;
	
	if (!Function_99(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_276 = 0;
	iParam0->f_4 = 0;
	iParam0->f_280 = "";
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		(*iParam0 + 12)[iVar05] = "";
		(iParam0 + 12[iVar05])->f_4 = "";
		(iParam0 + 12[iVar05])->f_8 = 0;
		(iParam0 + 12[iVar05])->f_16 = 0;
		(iParam0 + 12[iVar05])->f_12 = "";
		iVar0++;
	}
	return 1;
}

void Function_132(int iParam0, int iParam1) //Position: 0x32C3 / 12995
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_133(int iParam0, int iParam1) //Position: 0x32D1 / 13009
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_134(int iParam0) //Position: 0x32E9 / 13033
{
	iParam0->f_844 = 0;
	return;
}

void Function_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x32F5 / 13045
{
	Function_136(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_136(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x330D / 13069
{
	Function_137(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_137(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3324 / 13092
{
	if (!Function_139(iParam1))
	{
		return;
	}
	Function_138(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_138(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3347 / 13127
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

bool Function_139(int iParam0) //Position: 0x3371 / 13169
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3381 / 13185
{
	Function_141(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_141(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3399 / 13209
{
	Function_137(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_142(int iParam0, bool bParam1) //Position: 0x33AE / 13230
{
	Function_146(iParam0);
	Function_146(iParam0 + 228);
	if (bParam1)
	{
		Function_143(iParam0);
	}
	return;
}

void Function_143(int iParam0) //Position: 0x33CA / 13258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_144(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_144(var uParam0, int iParam1) //Position: 0x33EA / 13290
{
	Function_145(uParam0, iParam1, 0);
	return;
}

void Function_145(int iParam0, int iParam1, int iParam2) //Position: 0x33F8 / 13304
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_146(int iParam0) //Position: 0x3409 / 13321
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_148(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_147(iParam0, 0.0f);
	return;
}

void Function_147(var uParam0, int iParam1) //Position: 0x3436 / 13366
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_148(int iParam0) //Position: 0x3442 / 13378
{
	Function_138(iParam0, 4294967295, 0, 1);
	return;
}

void Function_149(bool bParam0) //Position: 0x3450 / 13392
{
	DECOR_SET_OBJECT(Function_150(), "LobbyGringoSet", bParam0);
	return;
}

var Function_150() //Position: 0x3470 / 13424
{
	return Global_83591.f_140;
}

void Function_151(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x347C / 13436
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

bool Function_152(int iParam0) //Position: 0x350C / 13580
{
	Function_155(iParam0);
	if (Function_154())
	{
		Function_133(&Global_83591 + 276, 2);
	}
	Function_153();
	vLocal_48 = { StackVal, StackVal, Function_153() };
	return 1;
}

vector3 Function_153() //Position: 0x3530 / 13616
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_150();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(bVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

bool Function_154() //Position: 0x3578 / 13688
{
	return Function_13(Global_79962, 1024);
}

void Function_155(var uParam0) //Position: 0x3588 / 13704
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_156() //Position: 0x3596 / 13718
{
	var uVar0;
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
	
	Function_157(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_TES_layout");
	Local_51.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 2, -3265.645f, 38.14893f, 4547.65f, 0.0f, 0.0f, 0.0f, 300.105f, 48.94275f, 250.658f);
	Local_51.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_A", 3, -3337.822f, 41.33559f, 4550.179f, 0.0f, 93.21916f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_B", 3, -3199.683f, 36.9951f, 4549.028f, 0.0f, -88.63672f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A0", 3, -3300.0f, 38.92401f, 4536.0f, 0.2027519f, 1.687993f, 3.007364f, 1.0f, 1.0f, 1.0f);
	Local_51.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A1", 3, -3299.788f, 39.21533f, 4559.008f, 0.0f, 179.8732f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A2", 3, -3276.628f, 38.1489f, 4532.881f, 0.0f, 129.0988f, 0.0f, 0.724646f, 0.724646f, 0.724646f);
	Local_51.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A3", 3, -3296.0f, 38.1489f, 4530.465f, 0.0f, 16.33389f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A4", 3, -3289.107f, 38.14893f, 4526.705f, 0.0f, 157.9917f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A5", 3, -3296.0f, 39.15283f, 4567.807f, 0.0f, 180.0573f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A6", 3, -3288.0f, 39.1528f, 4571.321f, 0.0f, 25.03814f, 0.0f, 0.8404795f, 0.8404795f, 0.8404795f);
	Local_51.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A7", 3, -3281.443f, 39.15283f, 4566.697f, 0.0f, 94.4702f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B0", 3, -3232.415f, 37.14496f, 4540.0f, 0.0f, -0.6531031f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B1", 3, -3232.0f, 38.11545f, 4561.707f, 0.0f, -178.6366f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B2", 3, -3236.935f, 37.24506f, 4533.397f, 0.0f, -1.140851f, 0.0f, 0.8790829f, 0.8790829f, 0.8790829f);
	Local_51.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -3238.848f, 39.0888f, 4572f, 0.0f, -176.0036f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B4", 3, -3243.004f, 39.15282f, 4571.004f, 0.0f, -32.23851f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B5", 3, -3252.0f, 39.15283f, 4566.877f, 0.0f, -178.8699f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B6", 3, -3241.531f, 37.32133f, 4527.061f, 0.0f, -144.1031f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B7", 3, -3252.0f, 37.14496f, 4530.58f, 0.0f, -82.38476f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_51 + 120) = { -3268.841f, 37.8984f, 4499.654f };
	*(&Local_51 + 120 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_144 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", -3268.841f, 37.8984f, 4499.654f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 148) = { -3260.667f, 37.89904f, 4499.85f };
	*(&Local_51 + 148 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_172 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", -3260.667f, 37.89904f, 4499.85f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 176) = { -3265.594f, 38.14893f, 4536.0f };
	*(&Local_51 + 176 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_200 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -3265.594f, 38.14893f, 4536.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 204) = { -3264.782f, 37.99888f, 4544.904f };
	*(&Local_51 + 204 + 12) = { 0.0f, 180.3571f, 0.0f };
	Local_51.f_228 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -3264.782f, 37.99888f, 4544.904f, 0.0f, 180.3571f, 0.0f);
	*(&Local_51 + 232) = { -3266.978f, 39.04227f, 4564.0f };
	*(&Local_51 + 232 + 12) = { 0.0f, -179.5295f, 0.0f };
	Local_51.f_256 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -3266.978f, 39.04227f, 4564.0f, 0.0f, -179.5295f, 0.0f);
	*(&Local_51 + 260) = { -3265.092f, 41.1608f, 4590.067f };
	*(&Local_51 + 260 + 12) = { 0.0f, 178.885f, 0.0f };
	Local_51.f_284 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_3", -3265.092f, 41.1608f, 4590.067f, 0.0f, 178.885f, 0.0f);
	*(&Local_51 + 288) = { -3264.245f, 37.14496f, 4514.021f };
	*(&Local_51 + 288 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_312 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_4", -3264.245f, 37.14496f, 4514.021f, 0.0f, 0.0f, 0.0f);
	Local_51.f_316 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_51, 8, 0);
	*(&Local_51 + 320[06]) = { -3265.674f, 38.14893f, 4552.0f };
	*(&Local_51 + 320[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D1", -3265.674f, 38.14893f, 4552.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_51.f_316);
	*(&Local_51 + 320[16]) = { -3266.087f, 38.14597f, 4540.778f };
	*(&Local_51 + 320[16] + 12) = { 0.0f, 41.08401f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D2", -3266.087f, 38.14597f, 4540.778f, 0.0f, 41.08401f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_51.f_316);
	*(&Local_51 + 320[26]) = { -3282.041f, 39.21079f, 4557.647f };
	*(&Local_51 + 320[26] + 12) = { 0.0f, -56.71802f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_B1", -3282.041f, 39.21079f, 4557.647f, 0.0f, -56.71802f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_51.f_316);
	*(&Local_51 + 320[36]) = { -3239.997f, 38.29698f, 4540.663f };
	*(&Local_51 + 320[36] + 12) = { 0.0f, -179.8481f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_B2", -3239.997f, 38.29698f, 4540.663f, 0.0f, -179.8481f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_51.f_316);
	*(&Local_51 + 320[46]) = { -3284.737f, 38.14893f, 4537.716f };
	*(&Local_51 + 320[46] + 12) = { 0.0f, -178.8879f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_P1", -3284.737f, 38.14893f, 4537.716f, 0.0f, -178.8879f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_51.f_316);
	*(&Local_51 + 320[56]) = { -3241.601f, 39.31927f, 4560.377f };
	*(&Local_51 + 320[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_P2", -3241.601f, 39.31927f, 4560.377f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_51.f_316);
	*(&Local_51 + 320[66]) = { -3258.24f, 39.3903f, 4567.073f };
	*(&Local_51 + 320[66] + 12) = { 0.0f, -178.8946f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S1", -3258.24f, 39.3903f, 4567.073f, 0.0f, -178.8946f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_51.f_316);
	*(&Local_51 + 320[76]) = { -3270.839f, 40.0677f, 4541.617f };
	*(&Local_51 + 320[76] + 12) = { 0.0f, -178.8879f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S2", -3270.839f, 40.0677f, 4541.617f, 0.0f, -178.8879f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_51.f_316);
	*(&Local_51 + 320[86]) = { -3251.894f, 38.33014f, 4535.089f };
	*(&Local_51 + 320[86] + 12) = { 0.0f, -23.45404f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_R1", -3251.894f, 38.33014f, 4535.089f, 0.0f, -23.45404f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_51.f_316);
	*(&Local_51 + 320[96]) = { -3270.595f, 39.43665f, 4560.761f };
	*(&Local_51 + 320[96] + 12) = { 0.0f, -178.8879f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_R2", -3270.595f, 39.43665f, 4560.761f, 0.0f, -178.8879f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_51.f_316);
	*(&Local_51 + 320[106]) = { -3253.052f, 38.14893f, 4550.487f };
	*(&Local_51 + 320[106] + 12) = { 0.0f, 179.0577f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A1", -3253.052f, 38.14893f, 4550.487f, 0.0f, 179.0577f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_51.f_316);
	*(&Local_51 + 320[116]) = { -3288.313f, 38.14893f, 4542.638f };
	*(&Local_51 + 320[116] + 12) = { 0.0f, 35.02435f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A2", -3288.313f, 38.14893f, 4542.638f, 0.0f, 35.02435f, 0.0f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_51.f_316);
	Local_51.f_612 = CREATE_OBJECTSET_IN_LAYOUT(Function_85(), Local_51, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand", "smoking_stand", -3267.031f, 37.99898f, 4545.431f, 0.0f, -320.8451f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3270.622f, 40.16965f, 4539.79f, 0.0f, 92.32852f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3273.17f, 40.14159f, 4538.505f, 0.0f, 177.4316f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand1", "smoking_stand", -3278.594f, 40.14517f, 4536.493f, 0.0f, -182.748f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3275.372f, 40.2414f, 4538.514f, 0.0f, 179.738f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand2", "smoking_stand", -3271.366f, 39.43785f, 4558.986f, 0.0f, -89.49084f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3262.394f, 38.17802f, 4548.206f, 0.0f, 89.31901f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3261.249f, 42.59938f, 4556.613f, 0.0f, 0.0f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -3255.384f, 42.57737f, 4556.627f, 0.0f, -53.12927f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand3", "smoking_stand", -3276.293f, 39.2479f, 4560.752f, 0.0f, 0.01324384f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -3282.434f, 42.44518f, 4558.405f, 0.0f, 87.65774f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any5", "stand_lookdistance_w_any", -3278.809f, 42.49662f, 4562.368f, 0.0f, -11.6389f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any7", "stand_lookdistance_w_any", -3279.497f, 42.44518f, 4559.75f, 0.0f, -80.71467f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any6", "stand_lookdistance_w_any", -3258.941f, 42.42429f, 4572.375f, 0.0f, 144.0851f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3268.534f, 37.99908f, 4544.305f, 0.0f, -55.1411f, 0.0f), Local_51.f_612);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3266.559f, 37.9989f, 4543.733f, 0.0f, 89.31901f, 0.0f), Local_51.f_612);
	return;
}

void Function_157(int iParam0, int iParam1) //Position: 0x46BE / 18110
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

void Function_158(int iParam0) //Position: 0x4707 / 18183
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_160("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_159(StackVal, 0);
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x4779 / 18297
{
	Function_115(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_114(StackVal, iParam1);
	}
	return;
}

bool Function_160(char* cParam0) //Position: 0x47AA / 18346
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x47C9 / 18377
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_162() //Position: 0x480B / 18443
{
	while (!IS_EXITFLAG_SET())
	{
		Function_20(4560, 3353);
		WAIT(0);
	}
	return;
}

bool Function_163() //Position: 0x4828 / 18472
{
	return Function_123(2);
}

void Function_164() //Position: 0x4832 / 18482
{
	if (Function_163())
	{
		return;
	}
	Function_174();
	Function_172(&bLocal_39, "MP_CTF", 10, 0);
	Function_172(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_166(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_91();
	Function_165();
	return;
}

void Function_165() //Position: 0x4896 / 18582
{
	while (!Function_123(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_166(int iParam0) //Position: 0x48B1 / 18609
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_171();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_170(iParam0[iVar03], 8);
		}
		else if (Function_169())
		{
			iVar1 = 1;
			Function_170(iParam0[iVar03], 8);
		}
		Function_170(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_170(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
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
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_170(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_170(iParam0[iVar03], 2);
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
	Function_167();
	return 1;
}

void Function_167() //Position: 0x4C2C / 19500
{
	if (!Function_168(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_168(int iParam0) //Position: 0x4C6C / 19564
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_169() //Position: 0x4C88 / 19592
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

void Function_170(var uParam0, int iParam1) //Position: 0x4CB3 / 19635
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_171() //Position: 0x4CC4 / 19652
{
	if (!Function_168(128))
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

var Function_172(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4D06 / 19718
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_173(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_170(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_173(var uParam0, int iParam1, int iParam2) //Position: 0x4D3E / 19774
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_170(uParam0[iVar03], 4);
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

void Function_174() //Position: 0x4E02 / 19970
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

