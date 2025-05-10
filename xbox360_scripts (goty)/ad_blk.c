//Decompiled with MagicRDR v1.0
//Function Count : 187
//Statics Count : 287
//Natives Count : 201
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
	float fLocal_68 = 0.0f;
	struct<105> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 8;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 8;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 7;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 9;
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
	int iLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_10 = 0;
	iLocal_12 = 0;
	fLocal_68 = 1.0f;
	iLocal_146 = 4294967295;
	iLocal_147 = 4294967295;
	iLocal_148 = 0;
	iLocal_149 = 0;
	iLocal_280 = 0;
	iLocal_284 = 4294967295;
	iLocal_285 = 0;
	Function_175();
	if (Function_174())
	{
		Function_173();
	}
	else
	{
		if (Function_124())
		{
			Function_123(1);
		}
		else
		{
			Function_122(1);
		}
		DECOR_SET_INT(Function_121(), "AD_Instance", 1);
		iVar0 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_120(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_119(64, 0);
					iVar0 = 10;
				}
			}
			Function_19();
			Function_17();
			WAIT(0);
		}
	}
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_blk_base01x", 0);
	DISABLE_CHILD_SECTOR("mp_blk_base01x");
	DISABLE_CHILD_SECTOR("dlc_blk_strhld01x");
	ENABLE_CHILD_SECTOR("blk_bank_int_01x");
	ENABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
	Function_15(&uLocal_286, 1, 0, 4294967295, 4294967295);
	Function_14();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x119 / 281
{
	Function_10(&iLocal_127);
	Function_3();
	Function_2();
	return;
}

void Function_2() //Position: 0x12A / 298
{
	if (iLocal_148)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_148 = 0;
	}
	return;
}

void Function_3() //Position: 0x169 / 361
{
	Function_4();
	return;
}

void Function_4() //Position: 0x172 / 370
{
	if (Function_8(4194304))
	{
		Function_5(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_8(8388608))
	{
		Function_5(8388608, 0, 1);
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x27B / 635
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_6(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2A3 / 675
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x2B6 / 694
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x2C5 / 709
{
	return Function_9(Global_76905.f_132, iParam0);
}

bool Function_9(var uParam0, int iParam1) //Position: 0x2D6 / 726
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x2E3 / 739
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_11(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x309 / 777
{
	if (Function_13(uParam0[iParam13], 4))
	{
		if (Function_13(uParam0[iParam13], 1))
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
			Function_12(uParam0[iParam13], 1);
			Function_12(uParam0[iParam13], 2);
			Function_12(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x437 / 1079
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x451 / 1105
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x46E / 1134
{
	Function_10(&Local_150 + 4);
	RELEASE_LAYOUT_REF(Local_150);
	return;
}

void Function_15(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x480 / 1152
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_16(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_16(int iParam0) //Position: 0x4A4 / 1188
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

void Function_17() //Position: 0x9F7 / 2551
{
	if (iLocal_285 != Function_18(3))
	{
		switch (Function_18(3))
		{
			case 0xFFFFFFFF:
				Function_15(&uLocal_286, 6, 0, 4294967295, 4294967295);
				break;
			
			case 0x00000000:
				Function_15(&uLocal_286, 39, 0, 4294967295, 4294967295);
				break;
			
			case 0x00000003:
				Function_15(&uLocal_286, 40, 0, 4294967295, 4294967295);
				if (!iLocal_280)
				{
					iLocal_280 = 1;
				}
				break;
			
			case 0x00000006:
			case 0x00000007:
				Function_15(&uLocal_286, 1, 0, 4294967295, 4294967295);
				break;
		}
		iLocal_285 = Function_18(3);
	}
	return;
}

int Function_18(int iParam0) //Position: 0xA76 / 2678
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_19() //Position: 0xA96 / 2710
{
	Function_117();
	if (Function_116(1, 1))
	{
		Function_85();
	}
	else
	{
		if (!iLocal_149)
		{
			iLocal_149 = 1;
			Function_80(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_77();
		if (Local_123)
		{
			Function_60(8367, 8342, 6682);
		}
		else
		{
			Function_27(5068, 3078);
		}
		if (!Function_25())
		{
			if (Function_24(1))
			{
				Stack.Push(0);
				Stack.Push(Function_121());
				Stack.Push(0);
				Stack.Push(Function_121());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_143);
				Function_23(StackVal, StackVal);
			}
			else if (Function_24(2))
			{
				Stack.Push(0);
				Stack.Push(Function_121());
				Stack.Push(0);
				Stack.Push(Function_121());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_144);
				Function_23(StackVal, StackVal);
			}
			else if (Function_24(4))
			{
				Stack.Push(0);
				Stack.Push(Function_121());
				Stack.Push(0);
				Stack.Push(Function_121());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_145);
				Function_23(StackVal, StackVal);
			}
		}
		Function_22();
		Function_20();
	}
	return;
}

void Function_20() //Position: 0xB46 / 2886
{
	if (IS_OBJECT_VALID(Local_96.f_104))
	{
		DESTROY_OBJECT(Local_96.f_104);
		Function_21(&Local_96);
	}
	return;
}

void Function_21(int iParam0) //Position: 0xB62 / 2914
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

void Function_22() //Position: 0xB88 / 2952
{
	if (IS_OBJECT_VALID(Local_69.f_104))
	{
		DESTROY_OBJECT(Local_69.f_104);
		Function_21(&Local_69);
	}
	return;
}

void Function_23(int iParam0, int iParam1) //Position: 0xBA4 / 2980
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_24(bool bParam0) //Position: 0xBC5 / 3013
{
	return Function_9((&Global_83591 + 140)->f_56, bParam0);
}

bool Function_25() //Position: 0xBD8 / 3032
{
	return IS_OBJECT_VALID(Function_26());
}

int Function_26() //Position: 0xBE4 / 3044
{
	return Function_18(0);
}

void Function_27(int iParam0, int iParam1) //Position: 0xBEE / 3054
{
	Function_60(iParam0, iParam1, 3071);
	return;
}

int Function_28() //Position: 0xBFF / 3071
{
	return 1;
}

int Function_29(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xC06 / 3078
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_47(bParam1, uParam2, uParam3);
	iVar0 = 0;
	iVar1 = Function_46(iParam0);
	iVar2 = Function_43(iParam0);
	iVar3 = Function_42(iParam0);
	iVar4 = Function_41((iVar3 / CEIL(25.0f)), iVar1, iVar2);
	iVar5 = Function_39(4, iParam0);
	if (!bParam1)
	{
		Function_37(iParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(iVar3), 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	iVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar0, iVar5);
		iVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar0, iVar1);
		iVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(iVar0, iVar2);
		iVar0++;
		Function_36(iVar0, iParam0);
	}
	if (Function_30(iParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_30(bool bParam0) //Position: 0xCFE / 3326
{
	if (Function_32(bParam0, 1, 0) != 4294967295 && Function_31() != 4294967295)
	{
		return 0;
	}
	return Function_32(bParam0, 1, 0) != Function_31();
}

int Function_31() //Position: 0xD26 / 3366
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_32(GET_LOCAL_SLOT(), 1, 0);
}

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0xD3D / 3389
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(iParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_35(iParam0))
			{
				if (!Function_33(iParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[iParam0];
}

bool Function_33(int iParam0, int iParam1, bool bParam2) //Position: 0xD81 / 3457
{
	char* cVar0[64];
	int iVar16;
	
	if (iParam0 == GET_LOCAL_SLOT())
	{
		return Function_116(iParam1, bParam2);
	}
	if (!Function_35(iParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_34(iParam1), 64);
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

var Function_34(int iParam0) //Position: 0xE02 / 3586
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

bool Function_35(int iParam0) //Position: 0x111B / 4379
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

void Function_36(int iParam0, int iParam1) //Position: 0x11BC / 4540
{
	if (Function_8(4))
	{
		if (Function_33(iParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, "");
		}
	}
	return;
}

bool Function_37(int iParam0, int iParam1, int iParam2) //Position: 0x11EF / 4591
{
	var uVar0;
	
	return Function_38(iParam0, iParam1, &uVar0, iParam2);
}

int Function_38(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1200 / 4608
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(iParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(uParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (iParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(iParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, uParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(iParam0, iParam1);
}

int Function_39(int iParam0, int iParam1) //Position: 0x1265 / 4709
{
	char* cVar0[64];
	
	if (iParam1 == GET_LOCAL_SLOT())
	{
		return Function_40(iParam0);
	}
	if (!Function_35(iParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(iParam1), 64);
	}
	return (*&Global_76943[iParam196] + 132)[iParam0];
}

var Function_40(int iParam0) //Position: 0x12CC / 4812
{
	return (*&Global_78480 + 132)[iParam0];
}

var Function_41(int iParam0, int iParam1, int iParam2) //Position: 0x12DC / 4828
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_42(int iParam0) //Position: 0x12F1 / 4849
{
	return Function_39(0, iParam0);
}

int Function_43(int iParam0) //Position: 0x12FD / 4861
{
	return Function_44(12, iParam0);
}

int Function_44(int iParam0, int iParam1) //Position: 0x130A / 4874
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (iParam1 == GET_LOCAL_SLOT())
	{
		return Function_45(iParam0);
	}
	if (!Function_35(iParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(iParam1), 64);
	}
	return (*&Global_76943[iParam196] + 220)[iParam0];
}

int Function_45(int iParam0) //Position: 0x1378 / 4984
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_46(int iParam0) //Position: 0x1391 / 5009
{
	return Function_44(11, iParam0);
}

void Function_47(bool bParam0, int iParam1, char* cParam2) //Position: 0x139E / 5022
{
	if (bParam0)
	{
		if (Function_48())
		{
			NET_PLAYER_LIST_ADD_ITEM(uParam2, uParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

bool Function_48() //Position: 0x13BF / 5055
{
	return Function_8(32768);
}

int Function_49() //Position: 0x13CC / 5068
{
	if (!Function_55(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "AD_LB_PtsCapped");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	if (Function_54())
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(4);
	}
	Function_51(0);
	Function_51(1);
	Function_50();
	return 1;
}

void Function_50() //Position: 0x1479 / 5241
{
	if (Function_8(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_5(8192, 1, 1);
	}
	else if (Function_8(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_5(8192, 1, 1);
	}
	else
	{
		Function_5(8192, 0, 1);
	}
	return;
}

void Function_51(int iParam0) //Position: 0x14B6 / 5302
{
	int iVar0;
	
	if (iParam0 == Function_31())
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	if (Function_52() > 0)
	{
		if (Function_52() == iParam0)
		{
			NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 1, UI_GET_STRING("AD_Team_Won"));
		}
		else
		{
			NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 0, UI_GET_STRING("AD_Team_lost"));
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 0, "--");
	}
	return;
}

int Function_52() //Position: 0x151C / 5404
{
	if (!Function_53())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_53() //Position: 0x1531 / 5425
{
	return UNK_0xA80C6DE6(&Global_78578);
}

bool Function_54() //Position: 0x153E / 5438
{
	return Function_31() == 4294967295;
}

bool Function_55(bool bParam0) //Position: 0x1549 / 5449
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_48() || Function_59(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_48())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_56(Function_48());
	return 1;
}

void Function_56(bool bParam0) //Position: 0x15CA / 5578
{
	if (bParam0 || Function_8(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_8(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_8(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_8(1048576) || Function_8(4)) || Function_116(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_5(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_57(var uParam0) //Position: 0x1653 / 5715
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_58(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1667 / 5735
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

int Function_59(int iParam0, int iParam1) //Position: 0x16AC / 5804
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

void Function_60(int iParam0, int iParam1, int iParam2) //Position: 0x16E0 / 5856
{
	if (Function_8(0x4000000))
	{
		Function_63();
		Function_5(0x4000000, 0, 1);
	}
	if (Function_8(0x10000000))
	{
		Function_63();
		Function_5(0x10000000, 0, 1);
	}
	if (Function_8(2) != Function_8(0x2000000))
	{
		Function_63();
		Function_5(0x2000000, Function_8(2), 1);
	}
	if (Function_48())
	{
		Function_62(!Function_8(16));
	}
	if (Function_8(16))
	{
		Function_61(&iParam0, &iParam1, &iParam2);
		if (Function_8(8192))
		{
			if (!Function_8(4194304))
			{
				Function_5(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_8(8388608))
			{
				Function_5(8388608, 1, 1);
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
			Function_4();
		}
		Function_5(16384, 1, 1);
	}
	else if (!Function_8(32))
	{
		Function_4();
	}
	Function_5(32768, 0, 1);
	return;
}

void Function_61(var uParam0, var uParam1, int iParam2) //Position: 0x1879 / 6265
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	Function_5(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_8(0x40000000);
	bVar3 = !Function_8(131072);
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (IS_SLOT_VALID(iVar1))
		{
			iVar0 = 0;
			if (!Function_35(iVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_33(iVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_37(iVar1, (4294966296 - iVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_8(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, UI_GET_STRING("Common_Null"));
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
			if (Function_37(iVar1, (4294966296 - iVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		iVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

void Function_62(bool bParam0) //Position: 0x19F1 / 6641
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

void Function_63() //Position: 0x1A0B / 6667
{
	Function_5(32768, 1, 0);
	return;
}

int Function_64() //Position: 0x1A1A / 6682
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<8> Var3;
	char* cVar11[64];
	int iVar27;
	float fVar28[2];
	var uVar31[2];
	float fVar34;
	float fVar35;
	bool bVar36;
	bool bVar37;
	var uVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	
	if (Function_48())
	{
		bVar1 = Function_18(3) != 7;
		iVar2 = 0;
		iVar27 = Function_31();
		if (StackVal == 1)
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_71(&iVar2));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(4, "");
			return 1;
		}
		uVar38 = Function_121();
		if (!IS_LAYOUTREF_VALID(uVar38))
		{
			return 1;
		}
		iVar0 = 1;
		while (iVar0 < Local_123.f_12)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("AD_T0", I2STR(iVar0)) };
			bVar36 = DECOR_GET_FLOAT_VERBOSE(uVar38, &Var3, &fVar34);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("AD_T1", I2STR(iVar0)) };
			bVar37 = DECOR_GET_FLOAT_VERBOSE(uVar38, &Var3, &fVar35);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(&Global_79349, "_Goal_", I2STR(iVar0)) };
			if (bVar36 || bVar37)
			{
				cVar11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("<0xFFFFFF>", UI_GET_STRING(&Var3), "</0x>") };
			}
			else
			{
				strcpy(&cVar11, UI_GET_STRING(&Var3), 64);
			}
			NET_PLAYER_LIST_ADD_ITEM(&cVar11, Function_71(&iVar2));
			if (StackVal || iVar0 > Local_123.f_12 <= 2)
			{
				if (bVar36)
				{
					fVar28[0] = (fVar28[0] + fVar34);
					uVar31[0]++;
					Function_66(0, fVar34, iVar27 != 0);
				}
				else
				{
					Function_65(0, iVar27 != 0, "<SKULL>", 0);
				}
			}
			if (StackVal || iVar0 > Local_123.f_12 <= 2)
			{
				if (bVar1)
				{
					if (bVar37)
					{
						fVar28[1] = (fVar28[1] + fVar35);
						uVar31[1]++;
						Function_66(1, fVar35, iVar27 != 1);
					}
					else
					{
						Function_65(1, iVar27 != 1, "<SKULL>", 0);
					}
				}
				else
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "<QUESTION_MARK>");
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "");
			}
			iVar0++;
		}
		if (StackVal <= 3)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM("", Function_71(&iVar2));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_PointsCaptured"), Function_71(&iVar2));
		if (StackVal <= 4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "");
			return 1;
		}
		if (iVar27 == 0)
		{
			iVar39 = "AD_PointsCapBlue";
			iVar41 = "AD_PointsBlue";
			iVar40 = "AD_PointsCapRed";
			iVar42 = "AD_PointsRed";
		}
		else
		{
			iVar39 = "AD_PointsCapRed";
			iVar41 = "AD_PointsRed";
			iVar40 = "AD_PointsCapBlue";
			iVar42 = "AD_PointsBlue";
		}
		UI_SET_STRING(iVar39, I2STR(uVar31[0]));
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, UI_GET_STRING(iVar41));
		if (bVar1)
		{
			if (StackVal <= 5)
			{
				return 1;
			}
			UI_SET_STRING(iVar40, I2STR(uVar31[1]));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, UI_GET_STRING(iVar42));
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "--");
		}
		if (StackVal <= 6)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_TimeElapsed"), Function_71(&iVar2));
		if (StackVal <= 7)
		{
			return 1;
		}
		Function_66(0, fVar28[0], iVar27 != 0);
		if (bVar1)
		{
			if (StackVal <= 8)
			{
				return 1;
			}
			Function_66(1, fVar28[1], iVar27 != 1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "--:--");
		}
		if (StackVal <= 9)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_LivesLost"), Function_71(&iVar2));
		if (StackVal <= 10)
		{
			return 1;
		}
		Function_65(0, iVar27 != 0, I2STR(DECOR_GET_INT(uVar38, "AD_L0")), 0);
		if (bVar1)
		{
			if (StackVal <= 11)
			{
				return 1;
			}
			Function_65(1, iVar27 != 1, I2STR(DECOR_GET_INT(bVar38, "AD_L1")), 0);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "--");
		}
		if (bVar1)
		{
			if (StackVal <= 12)
			{
				return 1;
			}
			NET_PLAYER_LIST_ADD_ITEM("", Function_71(&iVar2));
			iVar43 = Function_52();
			if (iVar43 > 0)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iVar43, UI_GET_STRING("nAD_Winner"));
			}
			else if (iVar43 == 4294967291)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, UI_GET_STRING("AD_Tie"));
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, UI_GET_STRING("AD_Tie"));
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(0, "");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(1, "");
			}
		}
	}
	return 1;
}

void Function_65(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1EA9 / 7849
{
	struct<16> Var0;
	
	if (bParam3)
	{
		if (bParam1)
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("<blue>", UI_GET_STRING(bParam2), "</blue>") };
		}
		else
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("<red>", UI_GET_STRING(bParam2), "</red>") };
		}
	}
	else if (bParam1)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("<blue>", bParam2, "</blue>") };
	}
	else
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("<red>", bParam2, "</red>") };
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, &Var0);
}

void Function_66(bool bParam0, float fParam1, bool bParam2) //Position: 0x1F47 / 8007
{
	struct<9> Var0;
	
	vVar0 = { StackVal, StackVal, StackVal, Function_67(fParam1) };
	if (fParam1 < 0.0f)
	{
		if (vVar0.z <= 10)
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(I2STR(vVar0.y), ":0", I2STR(vVar0.z)), 4);
		}
		else
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(I2STR(vVar0.y), ":", I2STR(vVar0.z)), 4);
		}
		Function_65(bParam0, bParam2, &uVar4, 0);
	}
	else
	{
		Function_65(bParam0, bParam2, "--:--", 0);
	}
	return;
}

struct<16> Function_67(var uParam0) //Position: 0x1FBD / 8125
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = uParam0;
	Var0 = FLOOR((iVar4 / 3600.0f));
	while (iVar4 <= 3600.0f)
	{
		iVar4 = (iVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((iVar4 / 60.0f));
	while (iVar4 <= 60.0f)
	{
		iVar4 = (iVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(iVar4);
	Var0.f_12 = (StackVal - IntToFloat(iVar4));
	return StackVal, StackVal, StackVal, Var0;
}

struct<64> Function_68(char* cParam0, char* cParam1, char* cParam2) //Position: 0x202E / 8238
{
	char* cVar0[64];
	
	strcpy(&cVar0, cParam0, 64);
	stradd(&cVar0, cParam1, 64);
	stradd(&cVar0, cParam2, 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_69(char* cParam0, char* cParam1, char* cParam2) //Position: 0x204D / 8269
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_70(char* cParam0, char* cParam1) //Position: 0x206C / 8300
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_71(int iParam0) //Position: 0x2085 / 8325
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0;
}

int Function_72(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2096 / 8342
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	uParam3 = uParam3;
	return 0;
}

int Function_73() //Position: 0x20AF / 8367
{
	struct<4> Var0;
	
	Function_5(131072, 1, 0);
	if (Function_18(3) == 6)
	{
		if (Function_48())
		{
			NET_PLAYER_LIST_SET_TITLE("AD_SwitchingSides");
		}
	}
	else if (!Function_55(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	Var0 = { StackVal, StackVal, StackVal, Function_74(0, 0) };
	if (Function_31() == 0)
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_74(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	else
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_74(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	NET_PLAYER_LIST_SET_HEADER(2, "GENERIC_DBUFFER64_0");
	NET_PLAYER_LIST_SET_HEADER(3, "GENERIC_DBUFFER64_1");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	Function_5(8192, 1, 1);
	return 1;
}

struct<16> Function_74(int iParam0, int iParam1) //Position: 0x2280 / 8832
{
	return StackVal, StackVal, StackVal, Function_75(Function_76(iParam0), iParam1);
}

struct<16> Function_75(int iParam0, bool bParam1) //Position: 0x2292 / 8850
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

int Function_76(int iParam0) //Position: 0x22C7 / 8903
{
	if (!Function_53())
	{
		return 0;
	}
	return StackVal;
}

void Function_77() //Position: 0x22E0 / 8928
{
	if (UI_ISACTIVE("LobbyNew_Toggle"))
	{
		if (Function_79(4, 1, 1))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
			Local_123 = !Local_123;
			if (Local_123)
			{
				UI_UNFOCUS("HudGamerList");
				UI_SET_TEXT("LobbyNew_Toggle", "mp_aa_stats_toggle_scoreboard");
			}
			else
			{
				UI_SET_TEXT("LobbyNew_Toggle", "Lobby_toggle");
				if (!IS_PS3())
				{
					UI_FOCUS("HudGamerList");
				}
			}
			Function_63();
		}
	}
	if (Function_120(512) && !Local_123)
	{
		return;
	}
	if (Function_120(32) && Function_8(16))
	{
		Local_123 = 1;
		if (StackVal && StackVal >= 0.0f > 13)
		{
			Function_63();
			if (StackVal == 0)
			{
				Local_123.f_12 = 1;
				Function_119(512, 0);
			}
			UI_UNFOCUS("HudGamerList");
			Local_123.f_4 = StackVal + 1;
			if (Function_18(3) == 6)
			{
				switch (StackVal)
				{
					case 0x00000004:
					case 0x00000007:
					case 0x0000000A:
						Local_123.f_4 = StackVal + 1;
						break;
					}
			}
			if (StackVal == 13)
			{
				Function_119(512, 1);
			}
			else if (StackVal == 3)
			{
				if (Local_123.f_12 <= Function_18(4))
				{
					Local_123.f_12++;
					Local_123.f_4 = 2;
				}
			}
			PLAY_SOUND_FRONTEND(Function_78(StackVal, &Local_123 + 8));
		}
		else
		{
			Local_123.f_8 = (StackVal - GET_UNWARPED_REALTIME_SECONDS());
		}
	}
	else if (Local_123)
	{
		Local_123.f_8 = 0.0f;
		Local_123 = 0;
		Local_123.f_4 = 0;
	}
	return;
}

var Function_78(int iParam0, int iParam1) //Position: 0x24B7 / 9399
{
	switch (iParam0)
	{
		case 0x00000001:
			*iParam1 = 0.5f;
			return "";
		
		case 0x00000002:
			if (Function_18(3) == 6)
			{
				*iParam1 = 0.65f;
			}
			else
			{
				*iParam1 = 0.8f;
			}
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000003:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x00000004:
			*iParam1 = 0.5f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000005:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000006:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x00000007:
			*iParam1 = 0.5f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000008:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000009:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000A:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000B:
			*iParam1 = 1.2f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000C:
			if (Function_18(3) == 6)
			{
				*iParam1 = 4.0f;
				return "";
			}
			*iParam1 = 2.0f;
			switch (Function_52())
			{
				case 0xFFFFFFFB:
					return "HUD_MP_AWARDS_FAIL_MASTER";
				
				case 0x00000000:
				case 0x00000001:
					return "HUD_MP_AWARDS_GOLD_MASTER";
				
				default:
			}
			return "";
			break;
	}
	*iParam1 = 2.0f;
	return "";
}

bool Function_79(int iParam0, int iParam1, int iParam2) //Position: 0x2711 / 10001
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(uVar0, iParam0, iParam1, iParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(uVar0, 15, iParam1, iParam2) || IS_BUTTON_PRESSED(uVar0, 13, iParam1, iParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(uVar0, 14, iParam1, iParam2) || IS_BUTTON_PRESSED(uVar0, 12, iParam1, iParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_80(vector3 vParam0, float fParam3) //Position: 0x278E / 10126
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_84(), 4294967295, 0);
	uVar1 = CREATE_VOLUME_IN_LAYOUT(Function_84(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	iVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(uVar0, uVar1, "p_gen_gatlingGun01x", 1);
	iVar2 = (iVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(uVar0, uVar1, "p_gen_cannon02x", 1));
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		Function_81(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, uVar0));
		iVar3++;
	}
	DESTROY_OBJECTSET(uVar0);
	DESTROY_VOLUME(uVar1);
}

int Function_81(int iParam0) //Position: 0x2841 / 10305
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(iParam0))
	{
		return "";
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(iParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(uVar0))
	{
		return "";
	}
	return Function_82(iVar0);
}

int Function_82(int iParam0) //Position: 0x287C / 10364
{
	int iVar0;
	
	iVar0 = GET_BLIP_ON_OBJECT(iParam0);
	if (!IS_BLIP_VALID(iVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(iParam0), "cannon"))
		{
			iVar0 = ADD_BLIP_FOR_OBJECT(iParam0, 523, 0f, 2, 0);
		}
		else
		{
			iVar0 = ADD_BLIP_FOR_OBJECT(iParam0, 524, 0f, 2, 0);
		}
	}
	Function_83(iVar0);
	return iVar0;
}

void Function_83(var uParam0) //Position: 0x28CA / 10442
{
	SET_BLIP_COLOR(uParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_84() //Position: 0x28DD / 10461
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_85() //Position: 0x290C / 10508
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	
	if (!IS_OBJECT_VALID(Local_69.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_69.f_104 = Function_112();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_69.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (!IS_OBJECT_VALID(Local_96.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_96.f_104 = Function_99();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_96.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (iLocal_146 == 4294967295)
	{
		iLocal_146 = 0;
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if ((*&Global_83591 + 276)[iVar02] != 4294967295)
			{
				iLocal_146 = iVar0;
			}
			iVar0++;
		}
		iLocal_146 = (iLocal_146 - 1);
	}
	if (iLocal_147 == 4294967295)
	{
		uVar1 = Function_98();
		iLocal_147 = (DECOR_GET_INT(uVar1, "AD_WeaponCount") - 1);
	}
	if (GET_CAMERA_CHANNEL_POSITION(&vVar2, 0))
	{
		Function_97(0.0f, 0.0f, 2.5f, 0.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_97(0.0f, 0.0f, 2.5f, 0.0f), vLocal_140, StackVal) };
		iVar8 = (SHIFT_LEFT(125, 16) + SHIFT_LEFT(0, 8));
		iVar9 = (SHIFT_LEFT(180, 16) + SHIFT_LEFT(180, 8)) + 180;
		uVar10 = GET_CURRENT_GAME_TIME();
		uVar11 = GET_LAST_FRAME_TIME();
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69, vVar2, uVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 11889, 1, iVar8, 0, 0, 0);
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69 + 48, vVar2, uVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_146, 11210, 0, iVar9, 0, 0, 0);
		Function_97(0.0f, 0.0f, -2.5f, 0.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_97(0.0f, 0.0f, -2.5f, 0.0f), vLocal_140, StackVal) };
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96, vVar2, uVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 11177, 1, iVar8, 0, 0, 0);
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96 + 48, vVar2, uVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_147, 10981, 0, iVar9, 0, 0, 0);
	}
	return;
}

var Function_86(int iParam0, var uParam1) //Position: 0x2AE5 / 10981
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	
	uParam1 = uParam1;
	bVar0 = Function_98();
	strcpy(&cVar1, "AD_WeaponData_", 32);
	straddi(&cVar1, iParam0 + 1, 32);
	Function_87(DECOR_GET_INT(bVar0, &cVar1), &iVar9);
	return GET_WEAPON_DISPLAY_NAME(iVar9);
}

void Function_87(int iParam0, int iParam1) //Position: 0x2B22 / 11042
{
	*iParam1 = Function_88(iParam0, Function_90(), 0);
	iParam1->f_4 = Function_88(iParam0, Function_90() + 8, Function_90());
	return;
}

var Function_88(var uParam0, int iParam1, int iParam2) //Position: 0x2B45 / 11077
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_89((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_89(int iParam0) //Position: 0x2B64 / 11108
{
	return SHIFT_LEFT(1, uParam0);
}

int Function_90() //Position: 0x2B70 / 11120
{
	return Function_91(39);
}

int Function_91(int iParam0) //Position: 0x2B7B / 11131
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

var Function_92(var uParam0, var uParam1) //Position: 0x2BA9 / 11177
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_blk_SUMMARY_D";
}

var Function_93(int iParam0, var uParam1) //Position: 0x2BCA / 11210
{
	uParam1 = uParam1;
	return GET_WEAPON_DISPLAY_NAME((*&Global_83591 + 276)[iParam0 + 22]);
}

void Function_94(int iParam0, vector3 vParam1, float fParam4, float fParam5, var uParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2BE4 / 11236
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	var uVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_21(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_68;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && iParam12)
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
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(uParam6, "HUD_STINGER_TEXT_MASTER"));
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
					Function_21(iParam0);
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
			Stack.Push(uParam6);
			Stack.Push(iParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(uParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(iParam14);
				Call_Loc(iParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			uVar14 = Function_95(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, uVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, uVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_95(float fParam0) //Position: 0x2E63 / 11875
{
	return (fParam0 * 57.29578f);
}

var Function_96(var uParam0, var uParam1) //Position: 0x2E71 / 11889
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_blk_SUMMARY_A";
}

vector3 Function_97(vector3 vParam0, float fParam3) //Position: 0x2E92 / 11922
{
	ROTATE_VECTOR_XZ(&vParam0, fParam3, 0);
	return StackVal, StackVal, vParam0;
}

var Function_98() //Position: 0x2EA6 / 11942
{
	var uVar0;
	
	uVar0 = FIND_OBJECT_IN_LAYOUT(Function_121(), "AD_WeaponThingy");
	if (!IS_OBJECT_VALID(uVar0))
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(Function_121(), "AD_WeaponThingy", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return iVar0;
}

var Function_99() //Position: 0x2EF6 / 12022
{
	struct<2> Var0[27];
	var uVar57;
	int iVar58;
	int iVar59;
	char* cVar60[32];
	vector3 vVar68;
	int iVar71;
	
	Function_108(&Var0);
	uVar57 = Function_98();
	iVar59 = DECOR_GET_INT(uVar57, "AD_WeaponCount");
	iVar58 = 0;
	while (iVar58 <= iVar59)
	{
		strcpy(&cVar60, "AD_WeaponData_", 32);
		straddi(&cVar60, iVar58, 32);
		Function_87(DECOR_GET_INT(bVar57, &cVar60), &(Var0[iVar582]));
		iVar58++;
	}
	Function_97(0.0f, 0.0f, -2.5f, 0.0f);
	vVar68 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_97(0.0f, 0.0f, -2.5f, 0.0f), vLocal_140, StackVal) };
	iVar71 = Function_102(Global_83591.f_140, &vVar68, (0.0f + 180.0f), &Var0, 1);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar71, 0);
	Function_101(iVar71);
	Function_100("p_gen_floursackstack01x", iVar71, 1.056f, 0.0f, 0.464f, 0.0f, -180.0f, 0.0f);
	Function_100("p_gen_floursackstack02x", iVar71, 1.046f, 0.0f, 1.265f, 0.0f, 30.0f, 0.0f);
	Function_100("p_gen_floursackstack02x", iVar71, -2.233f, 0.0f, 0.384f, 0.0f, -30.0f, 0.0f);
	return iVar71;
}

void Function_100(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5) //Position: 0x3032 / 12338
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_RELATIVE_POSITION(iParam1, vParam2, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam1, vParam5, &vVar3);
	SNAP_OBJECT_TO_GROUND(CREATE_PROP_IN_LAYOUT(iParam1, "", uParam0, vVar0, vVar3, 1), 3.0f, 0, 1092616192);
}

void Function_101(int iParam0) //Position: 0x3070 / 12400
{
	vector3 vVar0;
	
	GET_OBJECT_RELATIVE_POSITION(iParam0, 0.0f, 3.0f, 1.2f, &vVar0);
	CREATE_POINT_LIGHT_IN_LAYOUT(iParam0, "", vVar0, 0.75f, 0.75f, 0.75f, 4.0f);
	return;
}

var Function_102(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4) //Position: 0x30A2 / 12450
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	int iVar10[3];
	
	uVar0 = Function_106(uParam0, uParam1, fParam2, iParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_105((*iParam3)[iVar12], &iVar2))
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
		if (Function_105((*iParam3)[iVar12], &iVar2))
		{
			if (Function_103((*iParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				uVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", uVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*iParam3)[iVar12])), StackVal) + Vector(0.0f, fParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(uVar9, 0);
				if (IS_OBJECT_VALID(uVar9))
				{
					ATTACH_OBJECTS(iVar9, uVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool Function_103(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x3190 / 12688
{
	if (!Function_104(uParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(uParam0))
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

bool Function_104(int iParam0) //Position: 0x3321 / 13089
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_105(int iParam0, int iParam1) //Position: 0x3333 / 13107
{
	switch (UNK_0xDB679ED9(iParam0))
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

var Function_106(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x338F / 13199
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *uParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, uParam1, &uVar0))
		{
			*uParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*uParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, fParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *uParam1, Function_107()), 0.0f, (fParam2 + 180.0f), 0.0f, 1);
}

var Function_107() //Position: 0x33FB / 13307
{
	return "$/fragments/p_gen_dressForm01x";
}

void Function_108(int iParam0) //Position: 0x3422 / 13346
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_110(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_109(iParam0, 0.0f);
	return;
}

void Function_109(var uParam0, int iParam1) //Position: 0x344F / 13391
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_110(int iParam0) //Position: 0x345B / 13403
{
	Function_111(iParam0, 4294967295, 0, 1);
	return;
}

void Function_111(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3469 / 13417
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

var Function_112() //Position: 0x3493 / 13459
{
	vector3 vVar0;
	int iVar3;
	
	Function_97(0.0f, 0.0f, 2.5f, 0.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_97(0.0f, 0.0f, 2.5f, 0.0f), vLocal_140, StackVal) };
	iVar3 = Function_102(Global_83591.f_140, &vVar0, 0.0f, &Global_83591 + 276, 1);
	Function_101(iVar3);
	Function_113(iVar3, &Global_83591 + 276 + 228);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar3, 0);
	return iVar3;
}

var Function_113(int iParam0, int iParam1) //Position: 0x34E2 / 13538
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	int iVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(uParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	iVar12 = CREATE_PROP_IN_LAYOUT(iParam0, Function_115(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_105((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_105((*iParam1)[iVar202], &iVar21))
		{
			if (Function_114((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(iVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(iVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(iVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return iVar12;
}

bool Function_114(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4) //Position: 0x35F1 / 13809
{
	float fVar0;
	
	if (!Function_104(iParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		iParam3 = 1;
	}
	fVar0 = (((TO_FLOAT(iParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(iParam0))
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

var Function_115() //Position: 0x3718 / 14104
{
	int iVar0;
	
	return iVar0;
}

bool Function_116(bool bParam0, bool bParam1) //Position: 0x3720 / 14112
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_117() //Position: 0x3740 / 14144
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_148)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				Function_118("AD_help", 4294967295);
				iLocal_148 = 1;
			}
		}
	}
	else
	{
		Function_2();
	}
	return;
}

void Function_118(char* cParam0, int iParam1) //Position: 0x3784 / 14212
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

void Function_119(int iParam0, bool bParam1) //Position: 0x381B / 14363
{
	if (bParam1)
	{
		Function_7(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_6(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_120(int iParam0) //Position: 0x3843 / 14403
{
	return Function_9(StackVal, iParam0);
}

var Function_121() //Position: 0x3856 / 14422
{
	return Global_83591.f_140;
}

void Function_122(bool bParam0) //Position: 0x3862 / 14434
{
	Function_119(16, bParam0);
	return;
}

void Function_123(var uParam0) //Position: 0x386F / 14447
{
	Function_119(8, uParam0);
	return;
}

bool Function_124() //Position: 0x387C / 14460
{
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(10, 0, 0));
	Function_167(2, 0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_157();
	ENABLE_CHILD_SECTOR("dlc_blk_strhld01x");
	ENABLE_CHILD_SECTOR("mp_blk_base01x");
	DISABLE_CHILD_SECTOR("blk_bank_int_01x");
	DISABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_blk_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_141(Local_150, 16617, 16156, 15707, 50, 25);
	Function_140("NRT_SONG_02", "NRT_SONG_01", 0, 58, 58, 1);
	Function_139(Local_150.f_492);
	Function_135(&Global_83591 + 276, 0);
	Function_133(&Global_83591, 1, 22, 1, 1);
	Function_133(&Global_83591, 2, 0, 10, 1);
	Function_133(&Global_83591, 3, 9, 10, 1);
	Function_133(&Global_83591, 4, 15, 10, 1);
	Function_133(&Global_83591, 5, 24, 1, 1);
	Function_131(22, 1, 1);
	Function_131(8, 4, 1);
	Function_131(5, 10, 1);
	Function_131(17, 10, 1);
	Function_127(&Global_83591, 1, 22, 5, 1);
	Function_127(&Global_83591, 2, 1, 10, 1);
	Function_127(&Global_83591, 3, 17, 10, 1);
	Function_127(&Global_83591, 4, 11, 10, 1);
	Function_127(&Global_83591, 5, 24, 1, 1);
	Function_126(&Global_83591);
	Function_125(&Global_83591 + 276, 4);
	iLocal_280 = 0;
	iLocal_284 = 4294967295;
	AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	return 1;
}

void Function_125(int iParam0, int iParam1) //Position: 0x3A31 / 14897
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_126(int iParam0) //Position: 0x3A49 / 14921
{
	iParam0->f_844 = 0;
	return;
}

void Function_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3A55 / 14933
{
	Function_128(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3A6D / 14957
{
	Function_129(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_129(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3A84 / 14980
{
	if (!Function_130(iParam1))
	{
		return;
	}
	Function_111(uParam0[iParam12], bParam2, iParam3, bParam4);
}

bool Function_130(int iParam0) //Position: 0x3AA7 / 15015
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_131(bool bParam0, int iParam1, bool bParam2) //Position: 0x3AB7 / 15031
{
	var uVar0;
	int iVar1;
	char* cVar2[32];
	struct<2> Var10;
	
	uVar0 = Function_98();
	iVar1 = DECOR_GET_INT(uVar0, "AD_WeaponCount");
	DECOR_SET_INT(bVar0, "AD_WeaponCount", iVar1 + 1);
	strcpy(&cVar2, "AD_WeaponData_", 32);
	straddi(&cVar2, iVar1, 32);
	Var10 = iParam0;
	Var10.f_4 = iParam1;
	if (bParam2)
	{
		Var10.f_4 = (StackVal * CEIL(GET_WEAPON_MAX_AMMO(iParam0)));
	}
	DECOR_SET_INT(StackVal, bVar0, Function_132(&cVar2, Var10, 0));
	return;
}

var Function_132(struct<5> Param0) //Position: 0x3B40 / 15168
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_90())) || SHIFT_LEFT(iParam2, Function_90() + 8));
}

void Function_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3B5E / 15198
{
	Function_134(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3B76 / 15222
{
	Function_129(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_135(int iParam0, bool bParam1) //Position: 0x3B8B / 15243
{
	Function_108(iParam0);
	Function_108(iParam0 + 228);
	if (bParam1)
	{
		Function_136(iParam0);
	}
	return;
}

void Function_136(int iParam0) //Position: 0x3BA7 / 15271
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_137(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x3BC7 / 15303
{
	Function_138(uParam0, iParam1, 0);
	return;
}

void Function_138(int iParam0, int iParam1, int iParam2) //Position: 0x3BD5 / 15317
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_139(bool bParam0) //Position: 0x3BE6 / 15334
{
	DECOR_SET_OBJECT(Function_121(), "LobbyGringoSet", bParam0);
	return;
}

void Function_140(char* cParam0, char* cParam1, char* cParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3C06 / 15366
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], cParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_141(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) //Position: 0x3C96 / 15510
{
	uLocal_143 = uParam1;
	uLocal_144 = uParam2;
	uLocal_145 = uParam3;
	(&Global_83591 + 140)->f_56 = 0;
	Function_23(0, 0);
	Function_23(1, iParam4);
	Function_23(2, iParam5);
	if (Function_144())
	{
		Function_125(&Global_83591 + 276, 2);
	}
	Function_143(uParam0);
	Global_83591.f_4 = 2;
	Global_83591.f_16 = (4.0f * 60.0f);
	Function_142();
	vLocal_140 = { StackVal, StackVal, Function_142() };
}

vector3 Function_142() //Position: 0x3CF5 / 15605
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	
	uVar0 = Function_121();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(uVar0))
	{
		uVar4 = FIND_OBJECT_IN_LAYOUT(uVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(uVar4))
		{
			GET_OBJECT_POSITION(iVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

void Function_143(var uParam0) //Position: 0x3D3D / 15677
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_144() //Position: 0x3D4B / 15691
{
	return Function_9(Global_79962, 1024);
}

var Function_145(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3D5B / 15707
{
	var uVar0;
	
	if (bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_115(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "AD_BLKHalfTime", 2, 1);
	}
	Function_146(&uVar0, uParam2);
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

void Function_146(var uParam0, int iParam1) //Position: 0x3DD7 / 15831
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_148(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_147(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, iParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 30.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	return;
}

void Function_147(int iParam0) //Position: 0x3E40 / 15936
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 733.9843f, 81.7498f, 1240.647f);
	SET_CAMERASHOT_DIRECTION(*iParam0, -0.145122f, -0.088667f, 0.985433f, 0);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_148(bool bParam0) //Position: 0x3EAE / 16046
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 734.7385f, 97.80703f, 1420.866f);
	SET_CAMERASHOT_DIRECTION(*bParam0, 0.019168f, 0.187836f, 0.982013f, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_149(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3F1C / 16156
{
	var uVar0;
	
	if (bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_115(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "AD_blk_defend", 2, 1);
	}
	Function_150(&uVar0, uParam2);
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

void Function_150(var uParam0, int iParam1) //Position: 0x3F97 / 16279
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_152(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_151(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, iParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 18.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	return;
}

void Function_151(int iParam0) //Position: 0x4015 / 16405
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 716.6438f, 87.11206f, 1217.257f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.08081f, -2.491033f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_152(bool bParam0) //Position: 0x407F / 16511
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 744.9789f, 93.77805f, 1258.681f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0.297854f, 2.784605f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_153(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x40E9 / 16617
{
	var uVar0;
	
	if (bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, Function_115(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(uParam0, "AD_blk_attack", 2, 1);
	}
	Function_154(&uVar0, uParam2);
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

void Function_154(var uParam0, int iParam1) //Position: 0x4164 / 16740
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_156(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_155(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, iParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 18.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 4);
	return;
}

void Function_155(int iParam0) //Position: 0x41E1 / 16865
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 736.912f, 83.90968f, 1259.997f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.018568f, -0.018555f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_156(var uParam0) //Position: 0x424B / 16971
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 735.2532f, 82.48594f, 1344.91f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.052887f, -0.048498f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_157() //Position: 0x42B5 / 17077
{
	var uVar0;
	
	Function_166(4, 1);
	uVar0 = uVar0;
	Local_150 = CREATE_LAYOUT("ad_blk_layout");
	Local_150.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_1_set");
	(*&Local_150 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_1", 3, 719.216f, 78.30585f, 1384.937f, 0.0f, 3.670166f, 0.0f, 6.85114f, 4.648607f, 6.85114f);
	Function_164((*&Local_150 + 116)[0], 2);
	Function_162((*&Local_150 + 116)[0], 1);
	Function_160((*&Local_150 + 116)[0], 30.0f);
	Function_158((*&Local_150 + 116)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[0]);
	(*&Local_150 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_0", 2, 800.7313f, 83.18639f, 1414.82f, 0.0f, 186.6115f, 0.0f, 4.034817f, 1.695847f, 5.052865f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[1]);
	(*&Local_150 + 116)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_1", 2, 747.01f, 89.00347f, 1449.916f, 0.0f, 286.6545f, 0.0f, 3.351956f, 2.295225f, 3.728507f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[2]);
	(*&Local_150 + 116)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_2", 2, 781.1813f, 78.30585f, 1360.305f, 0.0f, 359.5662f, 0.0f, 3.075855f, 2.0f, 4.402436f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[3]);
	(*&Local_150 + 116)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_3", 2, 788.6741f, 89.22842f, 1451.195f, 0.0f, 192.7202f, 0.0f, 2.683131f, 2.0f, 3.759787f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[4]);
	(*&Local_150 + 116)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_0", 2, 662.4164f, 79.97225f, 1335.031f, 0.0f, 0.1962845f, 0.0f, 1.587262f, 2.330215f, 2.71083f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[5]);
	(*&Local_150 + 116)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_1", 2, 768.1636f, 79.0296f, 1317.512f, 0.0f, 334.0542f, 0.0f, 2.086119f, 1.325053f, 2.250149f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[6]);
	(*&Local_150 + 116)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_2", 2, 721.4662f, 78.48964f, 1316.651f, 0.0f, 1.131045f, 0.0f, 2.158041f, 2.680347f, 1.555536f);
	ADD_TO_VOLUME_SET(Local_150.f_152, (*&Local_150 + 116)[7]);
	Local_150.f_192 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_2_set");
	(*&Local_150 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_2", 3, 779.4719f, 78.30585f, 1315.694f, 0.0f, 90.30053f, 0.0f, 1.887316f, 0.9436581f, 1.887316f);
	Function_164((*&Local_150 + 156)[0], 2);
	Function_162((*&Local_150 + 156)[0], 2);
	Function_160((*&Local_150 + 156)[0], 10.0f);
	Function_158((*&Local_150 + 156)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[0]);
	(*&Local_150 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_0", 2, 760.0114f, 78.30585f, 1358.835f, 0.0f, 89.46815f, 0.0f, 2.831577f, 2.850379f, 4.233443f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[1]);
	(*&Local_150 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_1", 2, 760.0006f, 78.30585f, 1370.389f, 0.0f, -182.7565f, 0.0f, 2.75209f, 1.959785f, 3.446486f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[2]);
	(*&Local_150 + 156)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_2", 2, 722.4082f, 78.30585f, 1377.592f, 0.0f, -272.0702f, 0.0f, 2.927914f, 2.0f, 3.664843f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[3]);
	(*&Local_150 + 156)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_3", 2, 714.2013f, 78.30585f, 1364.0f, 0.0f, 247.2926f, 0.0f, 3.266371f, 2.0f, 3.192577f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[4]);
	(*&Local_150 + 156)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_0", 2, 716.6992f, 78.30585f, 1312.833f, 0.0f, 90.2148f, 0.0f, 3.042377f, 1.662314f, 2.804703f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[5]);
	(*&Local_150 + 156)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_1", 2, 720.8815f, 79.2743f, 1289.618f, 0.0f, 90.17917f, 0.0f, 4.748473f, 2.312313f, 2.228836f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[6]);
	(*&Local_150 + 156)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_2", 2, 765.7152f, 78.30585f, 1265.838f, 0.0f, 1.026526f, 0.0f, 2.89799f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_192, (*&Local_150 + 156)[7]);
	Local_150.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_3_set");
	(*&Local_150 + 196)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_3", 3, 660.2772f, 78.65131f, 1312.766f, 0.0f, 0.7731753f, 0.0f, 1.138011f, 0.3300797f, 1.138011f);
	Function_164((*&Local_150 + 196)[0], 2);
	Function_162((*&Local_150 + 196)[0], 2);
	Function_160((*&Local_150 + 196)[0], 10.0f);
	Function_158((*&Local_150 + 196)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[0]);
	(*&Local_150 + 196)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_0", 2, 759.4452f, 78.30585f, 1319.427f, 0.0f, 270.2653f, 0.0f, 1.813637f, 2.850379f, 3.135638f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[1]);
	(*&Local_150 + 196)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_1", 2, 710.6239f, 78.30585f, 1365.376f, 0.0f, -519.8279f, 0.0f, 1.925733f, 1.959785f, 2.883072f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[2]);
	(*&Local_150 + 196)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_2", 2, 666.7999f, 78.39438f, 1379.359f, 0.0f, -118.5899f, 0.0f, 2.927914f, 2.0f, 4.374191f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[3]);
	(*&Local_150 + 196)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_0", 2, 720.0005f, 78.30585f, 1260.0f, 0.0f, -89.87196f, 0.0f, 2.911189f, 1.662314f, 3.673193f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[4]);
	(*&Local_150 + 196)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_1", 2, 751.5212f, 78.30585f, 1264.622f, 0.0f, -89.49525f, 0.0f, 2.269803f, 2.312313f, 3.618542f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[5]);
	(*&Local_150 + 196)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_2", 2, 679.9993f, 78.30585f, 1224.0f, 0.0f, -89.42535f, 0.0f, 2.89799f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_228, (*&Local_150 + 196)[6]);
	Local_150.f_272 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_4_set");
	(*&Local_150 + 232)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_4", 3, 737.0044f, 78.52522f, 1234.404f, 0.0f, -0.861183f, 0.0f, 6.629921f, 3.381033f, 6.629921f);
	Function_164((*&Local_150 + 232)[0], 3);
	Function_162((*&Local_150 + 232)[0], 1);
	Function_160((*&Local_150 + 232)[0], 30.0f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[0]);
	(*&Local_150 + 232)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_0", 2, 674.3289f, 78.31809f, 1228.508f, 0.0f, 178.9504f, 0.0f, 2.464833f, 2.85f, 4.119053f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[1]);
	(*&Local_150 + 232)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_1", 2, 701.6731f, 78.34403f, 1277.492f, 0.0f, 90.37272f, 0.0f, 2.428316f, 2.212681f, 4.420472f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[2]);
	(*&Local_150 + 232)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_2", 2, 708.4871f, 78.30585f, 1303.513f, 0.0f, -213.2203f, 0.0f, 2.537339f, 2.0f, 3.701167f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[3]);
	(*&Local_150 + 232)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_3", 2, 691.3333f, 78.30585f, 1290.131f, 0.0f, -179.5896f, 0.0f, 2.845862f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[4]);
	(*&Local_150 + 232)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_0", 2, 781.0034f, 78.30585f, 1229.009f, 0.0f, -179.6236f, 0.0f, 2.712795f, 2.850379f, 3.579323f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[5]);
	(*&Local_150 + 232)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_1", 2, 766.9953f, 78.30585f, 1279.567f, 0.0f, -178.7622f, 0.0f, 1.774043f, 1.926146f, 3.644946f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[6]);
	(*&Local_150 + 232)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_2", 2, 760.2445f, 78.30585f, 1304.125f, 0.0f, -27.21029f, 0.0f, 2.163292f, 2.0f, 2.4029f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[7]);
	(*&Local_150 + 232)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_3", 2, 783.7975f, 78.30585f, 1285.341f, 0.0f, -181.176f, 0.0f, 2.653224f, 2.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_150.f_272, (*&Local_150 + 232)[8]);
	*(&Local_150 + 276) = { 671.8266f, 78.57395f, 1292.368f };
	*(&Local_150 + 276 + 12) = { 0.0f, 35.1762f, 0.0f };
	*(&Local_150 + 300) = { 667.2173f, 78.76158f, 1289.575f };
	*(&Local_150 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 324) = { 665.6145f, 78.67271f, 1297.725f };
	*(&Local_150 + 324 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 348) = { 664.928f, 82.3397f, 1303.675f };
	*(&Local_150 + 348 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 372) = { 662.28f, 82.08377f, 1287.219f };
	*(&Local_150 + 372 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 396) = { 663.0734f, 83.42782f, 1292.526f };
	*(&Local_150 + 396 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 420) = { 662.9058f, 83.53414f, 1297.134f };
	*(&Local_150 + 420 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 444) = { 671.2153f, 79.8301f, 1282.121f };
	*(&Local_150 + 444 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_150 + 468) = { 670.6951f, 79.94041f, 1289.019f };
	*(&Local_150 + 468 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_150.f_492 = CREATE_OBJECTSET_IN_LAYOUT(Function_115(), Local_150, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "rand_idle_stand", "rand_idle_stand", 742.6319f, 78.49428f, 1346.9f, 0.0f, 89.45083f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "rand_idle_stand1", "rand_idle_stand", 739.7031f, 78.31305f, 1319.16f, 0.0f, 492.1089f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "rand_idle_stand2", "rand_idle_stand", 727.5923f, 78.48113f, 1342.779f, 0.0f, 0.0f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", 728.0952f, 78.47964f, 1320.59f, 0.0f, -156.318f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", 729.0662f, 78.45217f, 1323.515f, 0.0f, 11.95855f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", 720.5508f, 78.48463f, 1330.886f, 0.0f, -218.7963f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand", "smoking_stand", 716.9537f, 78.30305f, 1336.585f, 0.0f, 50.42945f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand1", "smoking_stand", 731.0332f, 78.31273f, 1333.619f, 0.0f, -174.8718f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand2", "smoking_stand", 745.8621f, 78.4883f, 1343.611f, 0.0f, 0.0f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "smoking_stand3", "smoking_stand", 743.6122f, 78.43999f, 1312.595f, 0.0f, 77.95436f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Sit_Ground_Drink", "Sit_Ground_Drink", 746.6511f, 78.4309f, 1328.991f, 0.0f, -179.2421f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Sit_Ground_Drink1", "Sit_Ground_Drink", 720.8263f, 78.32368f, 1338.106f, 0.0f, -124.875f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "sit_ground_smoke", "sit_ground_smoke", 745.3375f, 78.3062f, 1338.504f, 0.0f, 86.7634f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "sit_ground_smoke1", "sit_ground_smoke", 726.8714f, 78.47739f, 1351.653f, 0.0f, -95.76814f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "lean_rail_nospawn", "lean_rail_nospawn", 740.0699f, 78.45702f, 1321.992f, 0.0f, 139.7575f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", 743.9324f, 78.43806f, 1322.522f, 0.0f, 88.42634f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Rand_Idle_NearWall_Shoulder_R1", "Rand_Idle_NearWall_Shoulder_R", 727.6804f, 78.45217f, 1325.698f, 0.0f, -87.88843f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "Rand_Idle_NearWall_Shoulder_R2", "Rand_Idle_NearWall_Shoulder_R", 724.7184f, 78.48586f, 1343.946f, 0.0f, 0.0f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", 725.9174f, 78.31617f, 1337.702f, 0.0f, 40.48618f, 0.0f), Local_150.f_492);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_150, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", 735.7324f, 78.30585f, 1334.213f, 0.0f, 151.7734f, 0.0f), Local_150.f_492);
	Local_150.f_496 = CREATE_PROP_IN_LAYOUT(Local_150, "ntable33x0", "p_gen_table33x", 692.1818f, 82.23486f, 1229.355f, 0.0f, 90.0f, -90.0f, 1);
	Local_150.f_500 = CREATE_PROP_IN_LAYOUT(Local_150, "ntable33x1", "p_gen_table33x", 690.897f, 82.18892f, 1227.229f, 90.0f, 180.0f, 0.0f, 1);
	Local_150.f_504 = CREATE_PROP_IN_LAYOUT(Local_150, "ntable33x2", "p_gen_table33x", 687.1113f, 82.18892f, 1227.229f, 90.0f, 180.0f, 0.0f, 1);
	Local_150.f_508 = CREATE_PROP_IN_LAYOUT(Local_150, "ntable33x3", "p_gen_table33x", 692.1541f, 82.23486f, 1241.104f, 0.0f, 90.0f, -90.0f, 1);
	Local_150.f_512 = CREATE_PROP_IN_LAYOUT(Local_150, "ntable33x4", "p_gen_table33x", 690.1158f, 82.34863f, 1242.382f, 90.0f, 0.0f, 0.0f, 1);
	Local_150.f_516 = CREATE_PROP_IN_LAYOUT(Local_150, "ntable33x5", "p_gen_table33x", 686.3453f, 82.34863f, 1242.382f, 90.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_158(int iParam0, float fParam1) //Position: 0x565E / 22110
{
	DECOR_SET_FLOAT(uParam0, Function_159(), fParam1);
	return;
}

var Function_159() //Position: 0x566F / 22127
{
	return "ADTimerBonus";
}

void Function_160(int iParam0, float fParam1) //Position: 0x5684 / 22148
{
	DECOR_SET_FLOAT(uParam0, Function_161(), fParam1);
	return;
}

var Function_161() //Position: 0x5695 / 22165
{
	return "ADTimer";
}

void Function_162(bool bParam0, int iParam1) //Position: 0x56A5 / 22181
{
	DECOR_SET_INT(uParam0, Function_163(), iParam1);
	return;
}

var Function_163() //Position: 0x56B6 / 22198
{
	return "ADObjective";
}

void Function_164(bool bParam0, int iParam1) //Position: 0x56CA / 22218
{
	DECOR_SET_INT(uParam0, Function_165(), iParam1);
	return;
}

var Function_165() //Position: 0x56DB / 22235
{
	return "ADReward";
}

void Function_166(int iParam0, int iParam1) //Position: 0x56EC / 22252
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

void Function_167(var uParam0, int iParam1) //Position: 0x5735 / 22325
{
	Function_172(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_168(StackVal, iParam1);
	}
	return;
}

void Function_168(int iParam0, int iParam1) //Position: 0x5766 / 22374
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_172(iParam0);
	Function_171(uVar0);
	PRINTNL();
	Function_169(iParam0, uVar0, iParam1);
	return;
}

void Function_169(int iParam0, int iParam1, bool bParam2) //Position: 0x578B / 22411
{
	int iVar0;
	
	Function_172(iParam0);
	Function_171(iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, iParam1);
	Function_170();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_170() //Position: 0x5904 / 22788
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_171(int iParam0) //Position: 0x5910 / 22800
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_172(int iParam0) //Position: 0x5956 / 22870
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

void Function_173() //Position: 0x599C / 22940
{
	while (!IS_EXITFLAG_SET())
	{
		Function_117();
		Function_27(5068, 3078);
		WAIT(0);
	}
	return;
}

bool Function_174() //Position: 0x59BC / 22972
{
	return Function_120(2);
}

void Function_175() //Position: 0x59C6 / 22982
{
	if (Function_174())
	{
		return;
	}
	Function_186();
	Function_185();
	Function_183(&iLocal_127, Function_107(), 0, 0);
	Function_183(&iLocal_127, "p_gen_floursackstack01x", 0, 0);
	Function_183(&iLocal_127, "p_gen_floursackstack02x", 0, 0);
	Function_183(&iLocal_127, "dlc_mpmodepack_atkdef", 10, 0);
	while (!Function_177(&iLocal_127))
	{
		WAIT(0);
	}
	fLocal_68 = 1.5f;
	Function_117();
	Function_176();
	return;
}

void Function_176() //Position: 0x5A66 / 23142
{
	while (!Function_120(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_177(int iParam0) //Position: 0x5A81 / 23169
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_182();
	iVar1 = 0;
	if (!Function_13(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_181(iParam0[iVar03], 8);
		}
		else if (Function_180())
		{
			iVar1 = 1;
			Function_181(iParam0[iVar03], 8);
		}
		Function_181(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_13(iParam0[iVar03], 4))
		{
			if (!Function_13(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_13(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_13(iParam0[03], 8) || iVar1));
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
				Function_181(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_13(iParam0[iVar03], 4))
		{
			if (!Function_13(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_181(iParam0[iVar03], 2);
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
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_181(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_181(iParam0[iVar03], 2);
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
	Function_178();
	return 1;
}

void Function_178() //Position: 0x5DFC / 24060
{
	if (!Function_179(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_179(int iParam0) //Position: 0x5E3C / 24124
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_180() //Position: 0x5E58 / 24152
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

void Function_181(var uParam0, int iParam1) //Position: 0x5E83 / 24195
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_182() //Position: 0x5E94 / 24212
{
	if (!Function_179(128))
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

var Function_183(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x5ED6 / 24278
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_184(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_181(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_184(var uParam0, int iParam1, int iParam2) //Position: 0x5F0E / 24334
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_13(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_181(uParam0[iVar03], 4);
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

void Function_185() //Position: 0x5FD2 / 24530
{
	Local_96.f_96 = 4294967295;
	Local_96.f_100 = 4294967295;
	return;
}

void Function_186() //Position: 0x5FE2 / 24546
{
	Local_69.f_96 = 4294967295;
	Local_69.f_100 = 4294967295;
	return;
}

