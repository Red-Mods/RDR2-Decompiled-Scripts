//Decompiled with MagicRDR v1.0
//Function Count : 272
//Statics Count : 453
//Natives Count : 332
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
	var uLocal_10 = 0;
	int iLocal_11 = 0;
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
	var uLocal_27 = 11;
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
	var uLocal_49 = 11;
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
	int iLocal_67 = 0;
	float fLocal_68 = 0.0f;
	struct<105> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
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
	var uLocal_196 = 27;
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
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	struct<741> Local_267 = { 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_11 = 0;
	iLocal_67 = 0;
	fLocal_68 = 1.0f;
	Function_261();
	Function_260("RAC_RAT");
	Function_260("RAC_LSH");
	Function_260("RAC_HAN");
	Function_258();
	Local_267.f_716 = 0;
	while (Function_29(&iVar0))
	{
		WAIT(iVar0);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x59 / 89
{
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	Function_11(1);
	Function_7(&Local_96);
	STREAMING_UNLOAD_SCENE();
	Function_6();
	Function_2(&Local_267 + 116);
	if (IS_LAYOUTREF_VALID(Local_267.f_364))
	{
		DESTROY_LAYOUT(Local_267.f_364);
	}
	return;
}

void Function_2(int iParam0) //Position: 0x8E / 142
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

void Function_3(var uParam0, int iParam1) //Position: 0xB4 / 180
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

void Function_4(var uParam0, int iParam1) //Position: 0x1E2 / 482
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x1FC / 508
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x219 / 537
{
	if (Local_267.f_732)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		Local_267.f_732 = 0;
	}
	return;
}

void Function_7(int iParam0) //Position: 0x260 / 608
{
	PPP_UNLOAD_PRESET(iParam0->f_56);
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_136))
	{
		DESTROY_LAYOUT(iParam0->f_136);
	}
	Function_2(iParam0 + 68);
	if (IS_OBJECT_VALID(iParam0->f_32))
	{
		DESTROY_OBJECT(iParam0->f_32);
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
	HUD_ENABLE(1);
	Function_8(8197);
	if (iParam0->f_128 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_128);
		iParam0->f_128 = 0;
	}
	if (iParam0->f_132 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_132);
		iParam0->f_132 = 0;
	}
	return;
}

void Function_8(int iParam0) //Position: 0x331 / 817
{
	Function_9(&Global_83864 + 1252, iParam0);
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x343 / 835
{
	Function_10(uParam0, iParam1);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x350 / 848
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(int iParam0) //Position: 0x363 / 867
{
	Function_28(4);
	Function_26(8197);
	Function_22();
	Function_21();
	Function_17();
	Function_13();
	UI_UNFOCUS("HudGamerList");
	UI_EXIT("Lobby_NewStyle");
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_12(&Local_267 + 364, iParam0);
	return;
}

int Function_12(int iParam0, bool bParam1) //Position: 0x3B8 / 952
{
	STREAMING_SET_CUTSCENE_MODE(0);
	if (IS_OBJECT_VALID(StackVal))
	{
		if (IS_OBJECT_VALID(iParam0->f_348))
		{
			DESTROY_OBJECT(iParam0->f_348);
		}
		REMOVE_CAMERA_FROM_CHANNEL(StackVal, 0);
		DEREFERENCE_OBJECT(StackVal);
		DESTROY_CAMERA(StackVal);
		DESTROY_OBJECTSET(iParam0->f_184);
		DESTROY_OBJECTSET(iParam0->f_108);
		DESTROY_OBJECT(iParam0->f_16);
		CAMERA_RESET(0);
		STREAMING_RELEASE_MAIN_POI();
		if (bParam1)
		{
			STREAMING_UNLOAD_SCENE();
		}
		Global_30841 = 1;
	}
	else
	{
		STREAMING_SET_POI_LIMIT(1);
		Global_30841 = 1;
		return 1;
	}
	return 0;
}

void Function_13() //Position: 0x42E / 1070
{
	Function_14(4294967295, 0);
	return;
}

void Function_14(int iParam0, bool bParam1) //Position: 0x439 / 1081
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_15(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_15(65536, bParam1, 1);
	return;
}

void Function_15(int iParam0, bool bParam1, int iParam2) //Position: 0x466 / 1126
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_16(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x48E / 1166
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_17() //Position: 0x49D / 1181
{
	Function_18(Function_20());
	return;
}

void Function_18(char* cParam0) //Position: 0x4A9 / 1193
{
	if (Function_19(cParam0, &Global_76905))
	{
		Function_15(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_19(bool bParam0, bool bParam1) //Position: 0x4CD / 1229
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

var Function_20() //Position: 0x501 / 1281
{
	int iVar0;
	
	return iVar0;
}

void Function_21() //Position: 0x509 / 1289
{
	Function_15(1024, 0, 1);
	Function_15(1, 0, 0);
	return;
}

void Function_22() //Position: 0x51D / 1309
{
	if (Function_24(4))
	{
		Function_23();
	}
	Function_15(4, 0, 1);
	return;
}

void Function_23() //Position: 0x533 / 1331
{
	Function_15(32768, 1, 0);
	return;
}

bool Function_24(int iParam0) //Position: 0x542 / 1346
{
	return Function_25(Global_76905.f_132, iParam0);
}

bool Function_25(var uParam0, int iParam1) //Position: 0x553 / 1363
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(int iParam0) //Position: 0x560 / 1376
{
	Function_27(&Global_83864 + 1252, iParam0);
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x572 / 1394
{
	Function_16(uParam0, iParam1);
	return;
}

void Function_28(int iParam0) //Position: 0x57F / 1407
{
	Function_9(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

bool Function_29(int iParam0) //Position: 0x5B8 / 1464
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 250;
	if (IS_EXITFLAG_SET())
	{
		return 0;
	}
	Function_256();
	iVar0 = 0;
	switch (Local_267)
	{
		case 0x00000000:
			if (Function_255(4))
			{
				iVar0++;
			}
			if (UNK_0xA80C6DE6(&Local_267 + 12))
			{
				iVar0++;
			}
			if (Function_250(&Local_267 + 116))
			{
				iVar0++;
			}
			else
			{
				NET_LOG(1, "PROCESS_GRAND_PRIX", "LOCAL PLAYER %s is Streaming Aux Requests...", GET_SLOT_NAME(GET_LOCAL_SLOT()), 0, 0, 0);
			}
			if (!Local_267.f_736)
			{
				if (HAS_STRING_TABLE_LOADED("dlc_mpmodepack_race"))
				{
					Local_267.f_736 = 1;
				}
			}
			if (iVar0 > 3)
			{
				Function_248(1);
			}
			break;
		
		case 0x00000001:
			Function_247(0);
			if (Function_245(Function_246(4)))
			{
				Function_248(2);
			}
			else
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (IS_SCRIPT_VALID(StackVal))
			{
				Function_248(3);
			}
			break;
		
		case 0x00000003:
			if (Function_244())
			{
				if (Function_246(4) == 0)
				{
					Function_248(4);
				}
				else
				{
					Function_248(5);
					Function_243();
				}
			}
			break;
		
		case 0x00000004:
			if (Function_242(1, 1))
			{
				Function_231(StackVal, StackVal, 38194, *(&Global_79349 + 28), Function_246(3) + 1, 38009);
				*iParam0 = 0;
			}
			if (Function_246(4) == 0)
			{
				if (HUD_IS_FADED() && !Local_267.f_740)
				{
					Local_267.f_740 = 1;
					Function_230(Function_246(4));
					Function_229();
				}
			}
			if (Function_255(128))
			{
				Function_248(5);
				Function_243();
			}
			break;
		
		case 0x00000005:
			Function_26(8197);
			if (Function_228(Function_246(4)))
			{
				Function_248(6);
			}
			else
			{
				return 0;
			}
			break;
		
		case 0x00000006:
			if (IS_SCRIPT_VALID(StackVal))
			{
				Function_248(7);
			}
			break;
		
		case 0x00000007:
			if (NET_IS_SESSION_HOST())
			{
				Function_227(&Local_267 + 12);
			}
			if (!IS_SCRIPT_VALID(StackVal))
			{
				if (Function_226())
				{
					Function_225(4, Function_246(3));
				}
				else
				{
					Function_225(4, Function_246(4) + 1);
				}
				if (!Function_224())
				{
					Function_223(Function_246(4), 0);
				}
				else
				{
					Function_223((Function_246(4) - 1), 1);
				}
				Function_216();
				Function_209();
				Function_206(&uLocal_264, 10.0f);
				Function_248(8);
			}
			break;
		
		case 0x00000008:
			Function_248(9);
			break;
		
		case 0x00000009:
			*iParam0 = 50;
			if (!Function_205(&Local_267 + 12))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_206(&Local_267 + 12, 23.0f);
				}
			}
			else if (Function_204(&Local_267 + 12))
			{
				if (Function_246(4) == Function_246(3))
				{
					Function_203();
					HUD_FADE_OUT(1.0f, 1065353216, 1);
				}
				else
				{
					Function_230(Function_246(4));
					HUD_FADE_TO_LOADING_SCREEN();
					Function_229();
				}
				Function_248(10);
				*iParam0 = 0;
			}
			else
			{
				bVar1 = CEIL(Function_198(&Local_267 + 12));
				if (Local_267.f_360 != bVar1)
				{
					Local_267.f_360 = bVar1;
					if (Local_267.f_360 >= FLOOR(20.0f) && Local_267.f_360 < 4294967291)
					{
						Function_14(Local_267.f_360, 0);
					}
				}
			}
			if (IS_OBJECT_VALID(StackVal))
			{
				(&Local_267 + 364)->f_64 = GET_CURRENT_GAME_TIME();
				Function_170(&Local_267 + 364, 1);
			}
			if (HUD_IS_FADED())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					NET_TICKER_CLEAR();
					if (!Function_224())
					{
						STREAMING_LOAD_SCENE_EXT(*(&Local_267 + 720), 0.0f, 0.0f, 0.0f, 0);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(*(&Local_267 + 720), 0.0f, 0.0f, 0.0f, 0);
					}
					Function_13();
					Function_23();
					if (UI_ISACTIVE("MPSplash"))
					{
						UI_POP("MPSplash");
						UI_EXIT("MPSplash");
					}
					else
					{
						HUD_FADE_IN(1.5f, 1065353216);
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!HUD_IS_FADING())
			{
				if (HUD_IS_FADED() || Function_169(0))
				{
					if (Function_224() || Function_226())
					{
						Local_96.f_44 = Function_168();
						Function_156(StackVal, StackVal, &Local_96, Function_167(), Local_96.f_44, Function_164(GET_LOCAL_SLOT()) != 4294967295, 976, *(&Local_267 + 720), 4294967295, 0, 0);
						Function_11(0);
						Function_248(11);
						Function_152();
						Local_134.f_504 = 1;
						Local_134.f_500 = 4294967295;
					}
					else
					{
						Local_134.f_504 = 1;
						Local_134.f_500 = 4294967295;
						TERMINATE_SCRIPT(StackVal);
						Function_11(0);
						Function_248(1);
					}
				}
				else
				{
					HUD_FADE_OUT(1.5f, 1065353216, 1);
				}
			}
			break;
		
		case 0x0000000B:
			*iParam0 = 0;
			if (Function_226())
			{
				Function_151(4, 1);
				Function_150(256, 1);
				Function_248(12);
			}
			else if (Function_30())
			{
				Function_203();
				Function_151(4, 1);
				Function_150(256, 1);
				Function_248(12);
			}
			break;
		
		case 0x0000000C:
			*iParam0 = 55;
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

bool Function_30() //Position: 0xA64 / 2660
{
	if (Function_31(&Local_96))
	{
		Function_7(&Local_96);
		return 1;
	}
	return 0;
}

bool Function_31(int iParam0) //Position: 0xA7A / 2682
{
	int iVar0;
	
	if (!iParam0->f_36)
	{
		iVar0 = 5;
	}
	switch (iParam0->f_60)
	{
		case 0x0000000D:
			if (IS_SCRIPT_VALID(bLocal_131))
			{
				TERMINATE_SCRIPT(bLocal_131);
			}
			else
			{
				Function_148(0);
				Function_147(iParam0, 0, "VS_AWESOFADING_START");
			}
			break;
		
		case 0x00000000:
			Function_146();
			UI_HIDE("FameText");
			UI_EXCLUDE("FameText");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			CANCEL_DEADEYE();
			UI_PUSH("MPSplash");
			UI_ENTER("HudMPNoFun");
			UI_SET_STYLE("MPSplashTitle", (0 + iVar0));
			Function_147(iParam0, 1, "VS_WAITING_FOR_MOVIE_TO_BE_READY");
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
				if (iParam0->f_124 < 5.0f)
				{
					Function_206(&iLocal_261, 10.0f);
					Function_147(iParam0, 2, "VS_STREAMING");
				}
				iParam0->f_124 = (iParam0->f_124 + 1.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_250(iParam0 + 68) && (FLASH_GET_INT("networking", "splashDone") < 0 || Function_204(&iLocal_261)))
			{
				UI_ENTER("LoadingSpinner");
				UI_HIDE("WeaponAmmo");
				UI_EXIT("XpHud");
				HUD_CLEAR_HELP();
				HUD_ENABLE(0);
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
				if (IS_ACTOR_VALID(bLocal_132))
				{
					DESTROY_ACTOR(bLocal_132);
				}
				STREAMING_UNLOAD_SCENE();
				*iParam0 = CREATE_POINT_IN_LAYOUT(iParam0->f_136, "CloneAnchor", *(iParam0 + 12), 0.0f, 0.0f, 0.0f);
				iParam0->f_32 = Function_143(iParam0->f_136, 0, *iParam0, 1, 0, 0);
				if (!iParam0->f_36)
				{
					SET_CAMERASHOT_TARGET_OBJECT_ROLL(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_32, 0), 0.0f);
					SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_32, 0), 0.180749f, 1.206322f, -0.246788f, 0.0f, 0.0f, 0.0f, 0);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					DESTROY_ACTOR(Global_34573);
				}
				Function_147(iParam0, 4, "VS_LOADING");
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (iParam0->f_24 != 4294967295)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 0);
					iParam0->f_4 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_136, "Clone", iParam0->f_24, *(iParam0 + 12), 0.0f, 0.0f, 0.0f);
					iParam0->f_8 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_136, "HorseClone", iParam0->f_120, *(iParam0 + 12), 0.0f, 0.0f, 0.0f);
					NET_OBJECT_REPLICATION_MODE_END(15);
					SET_AMBIENT_VOICE_NAME(StackVal, Function_142(GET_ACTOR_ENUM(StackVal)));
					SET_ACTOR_INVULNERABILITY(StackVal, 1);
					SET_ACTOR_PROOF(StackVal, 4294967295);
					SET_ACTOR_INVULNERABILITY(StackVal, 1);
					SET_ACTOR_PROOF(StackVal, 4294967295);
					ACTOR_MOUNT_ACTOR(StackVal, StackVal);
					TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
				}
				if (!IS_POINT_LIGHT_VALID(CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(*(iParam0 + 12), "winLight", iParam0->f_136) + Vector(-0.75f, 1.5f, -0.75f), 1.0f, 1.0f, 1.0f, 2.5f)))
				{
				}
				if (iParam0->f_36)
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_won_header");
				}
				else
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_lost_header");
				}
				if (iParam0->f_40 == 4294967295)
				{
					UI_SET_TEXT("MPSplashItem.s0", Function_141(iParam0->f_28));
					Function_137(iParam0->f_28);
				}
				else
				{
					Function_132("MPSplashItem.s0", iParam0->f_40);
					if (iParam0->f_24 != 4294967295)
					{
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_mvp"), UI_GET_STRING(Function_141(iParam0->f_28)), 0, 0);
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
				Function_147(iParam0, 3, "VS_WAITING_FOR_READY");
			}
			else
			{
				NET_LOG(1, "Victory screen", "LOCAL PLAYER %s is streaming the victory screen", GET_SLOT_NAME(GET_LOCAL_SLOT()), 0, 0, 0);
			}
			break;
		
		case 0x00000003:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_148(1);
				if (Function_127(1))
				{
					if (StackVal || (StackVal && Function_126(HAS_INVENTORY_COMPONENT(iParam0->f_24 != 4294967295), 1, 0x41700000)))
					{
						if (iParam0->f_24 != 4294967295)
						{
							Function_124(StackVal);
							SET_ANIM_SET_FOR_ACTOR(StackVal, "MP_Horserace_Victory", 0);
							SET_ANIM_SET_FOR_ACTOR(StackVal, "MP_Horserace_Victory", 0);
							SET_ACTION_NODE_FOR_ACTOR(StackVal, "MP_Horserace_Victory");
						}
						PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM_MASTER");
						if (iParam0->f_40 == 4294967295)
						{
							if (iParam0->f_36)
							{
								iParam0->f_56 = "MP_VS_White.ppp";
							}
							else
							{
								iParam0->f_56 = "MP_VS_Red.ppp";
							}
						}
						else if (iParam0->f_36)
						{
							iParam0->f_56 = "MP_VS_Blue.ppp";
						}
						else
						{
							iParam0->f_56 = "MP_VS_Red.ppp";
						}
						PPP_LOAD_PRESET(iParam0->f_56);
						PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
						Function_146();
						Function_206(&iLocal_261, 10.0f);
						Function_147(iParam0, 6, "VS_SPLASH_APPEAR");
					}
				}
				else
				{
					NET_LOG(1, "Victory screen", "LOCAL PLAYER %s is waiting for other players", GET_SLOT_NAME(GET_LOCAL_SLOT()), 0, 0, 0);
				}
			}
			else
			{
				NET_LOG(1, "Victory screen", "LOCAL PLAYER %s is waiting for horse and player to stream in", GET_SLOT_NAME(GET_LOCAL_SLOT()), 0, 0, 0);
			}
			break;
		
		case 0x00000006:
			if (FLASH_GET_INT("networking", "splashDone") < 0 || Function_204(&iLocal_261))
			{
				UI_SET_STYLE("MPSplashTitle", (2 + iVar0));
				HUD_FADE_IN(0.0f, 1065353216);
				Function_116((300.0f * IntToFloat(Function_246(3))), 0, 1);
				Function_206(&iLocal_261, 10.0f);
				Function_147(iParam0, 7, "VS_SPLASH_APPEAR_WAIT");
				if (ABS(Function_164(GET_LOCAL_SLOT())) < 3)
				{
					Function_35(&Global_50170[24022] + 4, &Global_50170[24022] + 8, &Global_50170[24022] + 12);
				}
			}
			break;
		
		case 0x00000007:
			if (FLASH_GET_INT("networking", "splashDone") < 0 || Function_204(&iLocal_261))
			{
				iParam0->f_124 = (iParam0->f_124 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_124 < 0.5f)
				{
					if (iParam0->f_24 != 4294967295)
					{
						SAY_SINGLE_LINE_STRING(StackVal, "MPTAUNT", true, true, 4, 0, true, false);
						Function_147(iParam0, 10, "VS_WAIT_FOR_CHATTY_CATHY");
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(76))
						{
							if (Function_34(2048))
							{
								AWARD_ACHIEVEMENT(76);
							}
						}
					}
					else if (iParam0->f_124 < 5.0f)
					{
						Function_147(iParam0, 11, "VS_MATCH_BONUS");
					}
				}
			}
			break;
		
		case 0x0000000A:
			iParam0->f_124 = (iParam0->f_124 + GET_UNWARPED_REALTIME_SECONDS());
			if (!IS_ANY_SPEECH_PLAYING(StackVal) || iParam0->f_124 < 15.0f)
			{
				if (iParam0->f_124 < 1.0f)
				{
					if (iParam0->f_124 < 5.0f)
					{
						Function_147(iParam0, 11, "VS_MATCH_BONUS");
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_44 < 0 && iParam0->f_124 != 0.0f)
			{
				Function_33(iParam0->f_44);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_116(TO_FLOAT(iParam0->f_44), 0, 1);
			}
			iParam0->f_124 = (iParam0->f_124 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_124 < 3.0f || iParam0->f_44 >= 0)
			{
				Function_147(iParam0, 12, "VS_AIM_BONUS");
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_48 < 0 && iParam0->f_124 != 0.0f)
			{
				Function_32(iParam0);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_116(TO_FLOAT(iParam0->f_48), 0, 1);
			}
			iParam0->f_124 = (iParam0->f_124 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_124 < 3.0f || iParam0->f_48 >= 0)
			{
				if (iParam0->f_24 != 4294967295)
				{
					Function_147(iParam0, 14, "VS_OUTRO");
				}
			}
			break;
		
		case 0x0000000E:
			if (!DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_24 != 4294967295)
			{
				iParam0->f_124 = (iParam0->f_124 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_124 < 0.6f)
				{
					UI_SET_STYLE("MPSplashTitle", (4 + iVar0));
					Function_147(iParam0, 15, "VS_OUTRO_FADE");
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_169(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_32(int iParam0) //Position: 0x1618 / 5656
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0->f_48, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", iParam0->f_52);
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_33(int iParam0) //Position: 0x16A6 / 5798
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", "MP_Race_RankBonus");
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

bool Function_34(int iParam0) //Position: 0x1742 / 5954
{
	return Function_25((&Global_83591 + 140)->f_56, iParam0);
}

void Function_35(var uParam0, var uParam1, bool bParam2) //Position: 0x1755 / 5973
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_114(240);
			fVar1 = Function_113(240);
			Global_50170[24022].f_28++;
			bVar0 = Global_50170[24022].f_28;
			if (bVar0 > 10)
			{
				*bParam2 = 0.0f;
				Function_107(240, uParam1, 1, 7023, 50.0f, 150.0f, 15, Function_112(0), 0);
				Function_106(240);
			}
			else
			{
				*bParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				if (*bParam2 == fVar1)
				{
					Function_103(240, *bParam2, 1, bVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_106(240);
			Global_50170[24022].f_28++;
			bVar0 = Global_50170[24022].f_28;
			if (bVar0 > 15)
			{
				*bParam2 = 0.0f;
				Function_107(240, uParam1, 2, 7024, 150.0f, 200.0f, 25, Function_112(0), 0);
				Function_106(240);
			}
			else
			{
				*bParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(15));
				if (*bParam2 == fVar1)
				{
					Function_103(240, *bParam2, 1, bVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_106(240);
			Global_50170[24022].f_28++;
			bVar0 = Global_50170[24022].f_28;
			if (bVar0 > 25)
			{
				*bParam2 = 0.0f;
				Function_36(240, uParam1, uParam0, 7025, 200.0f, Function_112(0));
			}
			else
			{
				*bParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(25));
				if (*bParam2 == fVar1)
				{
					Function_103(240, *bParam2, 1, bVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
	return;
}

void Function_36(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x18DE / 6366
{
	struct<4> Var0;
	
	Function_101(iParam0, 1);
	*uParam1 = 10;
	*uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_98(iParam3);
	}
	Function_116(bParam4, 0, 1);
	Function_93(iParam0, 0);
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	Function_86(&Var0, CEIL(bParam4), bParam5);
	Function_85(iParam0, 4);
	Function_37();
}

void Function_37() //Position: 0x194A / 6474
{
	if (!Function_84())
	{
		if (!Function_83(1, 3, 1, 1))
		{
			Function_71(1);
			Function_70(1, 8);
		}
	}
	else
	{
		Function_38(0);
	}
	return;
}

void Function_38(bool bParam0) //Position: 0x1973 / 6515
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_69(2);
	if (bParam0)
	{
		Function_69(1);
	}
	else
	{
		Function_68(1);
	}
	Function_39();
	return;
}

void Function_39() //Position: 0x19FC / 6652
{
	Function_66();
	Function_65();
	Function_65();
	Function_64();
	Function_64();
	Function_63();
	Function_63();
	Function_47(0);
	Function_47(0);
	if (!Function_84())
	{
		Function_44();
		Function_43();
		Function_42();
		Function_41();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_40();
	return;
}

void Function_40() //Position: 0x1A4E / 6734
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

void Function_41() //Position: 0x1B54 / 6996
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

void Function_42() //Position: 0x1B87 / 7047
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

void Function_43() //Position: 0x1D15 / 7445
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

void Function_44() //Position: 0x1EC9 / 7881
{
	Function_45(&Global_28260, 1, 0);
	return;
}

void Function_45(int iParam0, bool bParam1, var uParam2) //Position: 0x1ED7 / 7895
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
	
	bVar0 = Function_46();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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

bool Function_46() //Position: 0x20C8 / 8392
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_47(int iParam0) //Position: 0x20DD / 8413
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
					iVar2 = ((Function_62((50 + iVar4)) + Function_62((183 + iVar4))) + Function_62((90 + iVar4)));
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
	Function_48(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x2183 / 8579
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
		Function_61(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_60(iParam0);
	if (bParam2)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_49(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x241E / 9246
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
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
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_59(390))), 32);
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
					fVar19 = (Function_58(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_58(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_53(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_50(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_20(), &Var9);
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

var Function_50(int iParam0) //Position: 0x2A4B / 10827
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2A5C / 10844
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_52(char* cParam0, char* cParam1) //Position: 0x2B51 / 11089
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_53(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2B6A / 11114
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_55(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_54(Function_55(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_54(int iParam0, int iParam1) //Position: 0x2BCF / 11215
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_55(int iParam0, int iParam1) //Position: 0x2BE1 / 11233
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2BF3 / 11251
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x2D23 / 11555
{
	return Global_35278[iParam020].f_48;
}

float Function_58(int iParam0) //Position: 0x2D32 / 11570
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_59(int iParam0) //Position: 0x2D6B / 11627
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_60(int iParam0) //Position: 0x2DA8 / 11688
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

int Function_61(int iParam0, float fParam1, bool bParam2) //Position: 0x2F42 / 12098
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

int Function_62(int iParam0) //Position: 0x3186 / 12678
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_63() //Position: 0x31C7 / 12743
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
		iVar2 = ((Function_62((50 + iVar3) + 15) + Function_62((183 + iVar3) + 15)) + Function_62((90 + iVar3) + 15));
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
	Function_48(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_64() //Position: 0x3250 / 12880
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
			iVar2 = ((Function_62((50 + iVar3) + 8) + Function_62((183 + iVar3) + 8)) + Function_62((90 + iVar3) + 8));
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
	Function_48(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_65() //Position: 0x32E7 / 13031
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
		iVar2 = ((Function_62((50 + iVar3)) + Function_62((183 + iVar3))) + Function_62((90 + iVar3)));
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
	Function_48(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_66() //Position: 0x3366 / 13158
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_67(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_48(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_67(int iParam0, float fParam1, int iParam2) //Position: 0x339F / 13215
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
	Function_61(iParam0, fParam1, 1);
	Function_60(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_49(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_68(int iParam0) //Position: 0x35A9 / 13737
{
	Function_9(&Global_79338, iParam0);
	return;
}

void Function_69(int iParam0) //Position: 0x35B8 / 13752
{
	Function_27(&Global_79338, iParam0);
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x35C7 / 13767
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_84())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_71(bool bParam0) //Position: 0x3609 / 13833
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_72();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_39();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_10(&Global_63095, 1);
		Function_10(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_72() //Position: 0x365A / 13914
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_82())
	{
		Function_79(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_79(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_73(StackVal, StackVal, vVar0))
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

bool Function_73(vector3 vParam0) //Position: 0x3715 / 14101
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x372D / 14125
{
	int iVar0;
	
	iVar0 = Function_77(uParam2, uParam3);
	if (Function_76(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_16(&Global_63095, 1);
			Function_10(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_16(&Global_63095, 2);
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
		Function_16(&Global_63095, 2);
		Function_10(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_75();
	return StackVal, StackVal, Function_75();
}

vector3 Function_75() //Position: 0x3814 / 14356
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_76(int iParam0) //Position: 0x381D / 14365
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_77(bool bParam0, bool bParam1) //Position: 0x3833 / 14387
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
				fVar2 = Function_78(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_78(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_76(bVar0) && !bParam1)
	{
		bVar0 = Function_77(bParam0, 1);
	}
	return bVar0;
}

float Function_78(vector3 vParam0, vector3 vParam3) //Position: 0x38FA / 14586
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_79(var uParam0, int iParam1) //Position: 0x3917 / 14615
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_81(Global_34573, &vVar4);
	if (!Function_80(Global_30640[0]))
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
	if (!Function_80(Global_30640[2]))
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
	if (!Function_80(Global_30640[1]))
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
	if (!Function_80(Global_30658[1]))
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
	if (!Function_80(Global_30658[3]))
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
	if (!Function_80(Global_30658[2]))
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
	if (!Function_80(Global_30658[4]))
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
	if (!Function_80(Global_30668[0]))
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
	if (!Function_80(Global_30668[1]))
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
	if (!Function_80(Global_30668[2]))
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
	if (!Function_80(Global_30679[0]))
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
	if (!Function_80(Global_30685[0]))
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
	if (!Function_80(Global_30685[1]))
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
	if (!Function_80(Global_30685[2]))
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
	if (!Function_80(Global_30693[0]))
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
	if (!Function_80(Global_30693[1]))
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
	if (!Function_80(Global_30693[2]))
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
	if (!Function_80(Global_30707[2]))
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
	if (!Function_80(Global_30707[3]))
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
	if (!Function_80(Global_30707[0]))
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
	if (!Function_80(Global_30717[0]))
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
	if (!Function_80(Global_30723[2]))
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
	if (!Function_80(Global_30723[1]))
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
	if (!Function_80(Global_30723[0]))
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
	if (!Function_80(Global_30679[1]))
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
	if (!Function_80(Global_30707[1]))
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
	Function_16(&Global_63095, 2);
	Function_10(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_73(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_80(int iParam0) //Position: 0x413D / 16701
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_25(uVar0, 0x1000000) || Function_25(uVar0, 0x2000000)) || Function_25(uVar0, 0x4000000)) || !Function_25(uVar0, 0x10000000));
}

void Function_81(bool bParam0, int iParam1) //Position: 0x4178 / 16760
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_82() //Position: 0x4185 / 16773
{
	if (Function_25(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_83(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x41A0 / 16800
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

bool Function_84() //Position: 0x4244 / 16964
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_85(int iParam0, int iParam1) //Position: 0x424D / 16973
{
	Function_10(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_86(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4261 / 16993
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_91();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_90(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_89(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_88(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_87(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_90(), iVar1 + 1);
	return;
}

struct<16> Function_87(int iParam0) //Position: 0x42D3 / 17107
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_88(int iParam0) //Position: 0x42F4 / 17140
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_89(int iParam0) //Position: 0x4315 / 17173
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_90() //Position: 0x4336 / 17206
{
	return "CQueue_Count";
}

var Function_91() //Position: 0x434B / 17227
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

struct<16> Function_92(int iParam0) //Position: 0x437A / 17274
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_93(int iParam0, int iParam1) //Position: 0x43AE / 17326
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_97(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_96(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_95(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_94(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_96(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_96(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_96(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_94(int iParam0) //Position: 0x4430 / 17456
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_95(int iParam0) //Position: 0x4450 / 17488
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_96(int iParam0) //Position: 0x4481 / 17537
{
	return Global_50170[iParam022].f_24;
}

bool Function_97(int iParam0) //Position: 0x4490 / 17552
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

void Function_98(int iParam0) //Position: 0x460E / 17934
{
	Function_99(iParam0, 1);
	return;
}

void Function_99(int iParam0, bool bParam1) //Position: 0x461A / 17946
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_16(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_100((iVar0 % 32)));
	}
	else
	{
		Function_10(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_100((iVar0 % 32)));
	}
	return;
}

int Function_100(bool bParam0) //Position: 0x4670 / 18032
{
	return SHIFT_LEFT(1, bParam0);
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x467C / 18044
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_102();
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

var Function_102() //Position: 0x47C8 / 18376
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_103(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x4815 / 18453
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_96(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_92(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_96(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_105(iParam0, 4))
	{
		Function_104(Function_96(iParam0), 0);
	}
}

void Function_104(int iParam0, bool bParam1) //Position: 0x48CC / 18636
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

bool Function_105(int iParam0, int iParam1) //Position: 0x48F1 / 18673
{
	return Function_25(Global_50170[iParam022].f_32, iParam1);
}

void Function_106(bool bParam0) //Position: 0x4905 / 18693
{
	Function_114(bParam0);
	return;
}

void Function_107(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x4910 / 18704
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam7))
	{
		bParam7 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
	Function_86(&Var0, CEIL(bParam4), bParam7);
	*uParam1 = iParam2;
	if (bParam8)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_96(iParam0), 0.0f, 0, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_96(iParam0), (TO_FLOAT(Global_50170[iParam022].f_28) / TO_FLOAT(bParam6)), 0, 0);
	}
	Function_108(iParam0, bParam6, CEIL(bParam5), 0);
	if (iParam3 != 4294967295)
	{
		Function_98(iParam3);
	}
	Function_85(iParam0, 4);
	Function_37();
}

void Function_108(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x49A0 / 18848
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_97(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_96(iParam0));
	if ((bParam3 && Function_105(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_96(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_95(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_92(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_111(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_110(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_94(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_96(iParam0), &Var7, 0, 2, Function_105(iParam0, 4));
			if (!bParam3)
			{
				Function_109(iParam0, 4);
			}
		}
	}
}

void Function_109(int iParam0, int iParam1) //Position: 0x4A5D / 19037
{
	Function_16(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_110(int iParam0) //Position: 0x4A71 / 19057
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_111(int iParam0) //Position: 0x4A9F / 19103
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_112(bool bParam0) //Position: 0x4ACF / 19151
{
	if (bParam0)
	{
		return "grandPrixTop3_64";
	}
	return "grandPrixTop3_128";
}

var Function_113(int iParam0) //Position: 0x4B05 / 19205
{
	return Global_50170[iParam022].f_12;
}

void Function_114(int iParam0) //Position: 0x4B14 / 19220
{
	Function_115(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_115(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4B2A / 19242
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_102();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

int Function_116(float fParam0, int iParam1, bool bParam2) //Position: 0x4B9F / 19359
{
	if (!Function_122())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_119(8, fParam0);
	}
	Function_117(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_117(var uParam0, bool bParam1, int iParam2) //Position: 0x4BCF / 19407
{
	Function_118(uParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_118(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x4BEB / 19435
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
	Function_61(iParam0, TO_FLOAT(bParam1), 1);
	Function_60(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_119(var uParam0, float fParam1) //Position: 0x4E0B / 19979
{
	Function_120(uParam0, (Function_121(uParam0) + fParam1));
	return;
}

void Function_120(int iParam0, int iParam1) //Position: 0x4E1E / 19998
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_121(int iParam0) //Position: 0x4E47 / 20039
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_122() //Position: 0x4E57 / 20055
{
	if (Function_84())
	{
		return (Function_123() != 1 || Function_123() != 0);
	}
	return 0;
}

int Function_123() //Position: 0x4E70 / 20080
{
	return Global_79349.f_16;
}

void Function_124(bool bParam0) //Position: 0x4E7C / 20092
{
	bool bVar0;
	
	bVar0 = Function_125();
	GIVE_WEAPON_TO_ACTOR(bParam0, bVar0, 0f, 1, 1);
	ACTOR_SET_WEAPON_AMMO(bParam0, bVar0, 9.0f);
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, bVar0, 1);
	return;
}

int Function_125() //Position: 0x4EA6 / 20134
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

int Function_126(bool bParam0, bool bParam1, float fParam2) //Position: 0x4EEB / 20203
{
	float fVar0;
	bool bVar1;
	
	if (Function_84() || !bParam1)
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
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
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

bool Function_127(bool bParam0) //Position: 0x4F88 / 20360
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
			if (Function_131(bVar0))
			{
				if (!Function_128(bVar0))
				{
					iVar2 = 0;
					if (bParam0)
					{
					}
				}
				iVar1 = 1;
			}
			else if (bParam0)
			{
			}
		}
		bVar0++;
	}
	return (iVar2 && iVar1);
}

bool Function_128(int iParam0) //Position: 0x4FD8 / 20440
{
	return Function_129(iParam0, 4, 1);
}

int Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4FE5 / 20453
{
	char* cVar0[64];
	bool bVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_242(bParam1, bParam2);
	}
	if (!Function_131(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_130(bParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	bVar16 = (Global_76943[bParam096].f_124 && bParam1);
	if (bParam2)
	{
		return bVar16 != bParam1;
	}
	return bVar16 == 0;
}

var Function_130(int iParam0) //Position: 0x5066 / 20582
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

bool Function_131(bool bParam0) //Position: 0x537F / 21375
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

void Function_132(char* cParam0, int iParam1) //Position: 0x5420 / 21536
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_133(iParam1, 1) };
	UI_SET_TEXT(cParam0, &Var0);
	return;
}

struct<16> Function_133(var uParam0, var uParam1) //Position: 0x5437 / 21559
{
	return StackVal, StackVal, StackVal, Function_134(Function_135(uParam0), uParam1);
}

struct<16> Function_134(bool bParam0, bool bParam1) //Position: 0x5449 / 21577
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

int Function_135(int iParam0) //Position: 0x547E / 21630
{
	if (!Function_136())
	{
		return 0;
	}
	return StackVal;
}

bool Function_136() //Position: 0x5497 / 21655
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_137(int iParam0) //Position: 0x54A4 / 21668
{
	struct<16> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_138(iParam0) };
	UI_SET_STRING("Generic_Dbuffer128_0", &Var0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	return;
}

struct<64> Function_138(bool bParam0) //Position: 0x54FC / 21756
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_140())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_139();
	}
	if (!Function_131(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_131(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

struct<64> Function_139() //Position: 0x55A2 / 21922
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_140() //Position: 0x55B3 / 21939
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_141(int iParam0) //Position: 0x55C1 / 21953
{
	switch (iParam0)
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

var Function_142(bool bParam0) //Position: 0x5765 / 22373
{
	bool bVar0;
	
	bVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return bVar0;
	}
	bVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return bVar0;
}

var Function_143(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x579A / 22426
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_20(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MP_Race_Victory", 1, 1);
	}
	Function_144(&bVar0, uParam2);
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

void Function_144(var uParam0, int iParam1) //Position: 0x5817 / 22551
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_145(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_145(var uParam0, int iParam1) //Position: 0x583D / 22589
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 53.01867f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -1.972281f, 1.428903f, -2.302404f, 8.079432f, -115.2385f, -11.85037f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.300171f, 1.785507f, -1.231445f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0.206828f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_146() //Position: 0x58D8 / 22744
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_147(var uParam0, int iParam1, int iParam2) //Position: 0x58EA / 22762
{
	uParam0->f_60 = iParam1;
	uParam0->f_124 = 0.0f;
	return;
}

void Function_148(int iParam0) //Position: 0x58FB / 22779
{
	Function_149(4, iParam0);
	return;
}

void Function_149(int iParam0, bool bParam1) //Position: 0x5907 / 22791
{
	if (bParam1)
	{
		Function_16(&Global_78480 + 124, iParam0);
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

void Function_150(int iParam0, bool bParam1) //Position: 0x5942 / 22850
{
	if (bParam1)
	{
		Function_16(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_10(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_151(int iParam0, bool bParam1) //Position: 0x596A / 22890
{
	if (bParam1)
	{
		Function_16(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_10(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

void Function_152() //Position: 0x5992 / 22930
{
	switch (Local_267.f_716)
	{
		case 0x00000000:
			Function_153(&Global_50170[24222] + 4, &Global_50170[24222] + 8, &Global_50170[24222] + 12, 1, 0, 0);
			break;
		
		case 0x00000001:
			Function_153(&Global_50170[24222] + 4, &Global_50170[24222] + 8, &Global_50170[24222] + 12, 0, 1, 0);
			break;
		
		case 0x00000002:
			Function_153(&Global_50170[24222] + 4, &Global_50170[24222] + 8, &Global_50170[24222] + 12, 0, 0, 1);
			break;
	}
	return;
}

void Function_153(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5A21 / 23073
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_114(242);
			fVar1 = Function_113(242);
			if (bParam3)
			{
				Function_115(242, 1, 1);
			}
			else if (bParam4)
			{
				Function_115(242, 2, 1);
			}
			else if (bParam5)
			{
				Function_115(242, 3, 1);
			}
			if (Function_155(242, 1) == 1)
			{
				bVar0++;
			}
			if (Function_155(242, 2) == 1)
			{
				bVar0++;
			}
			if (Function_155(242, 3) == 1)
			{
				bVar0++;
			}
			if (bVar0 > 3)
			{
				*uParam2 = 0.0f;
				Function_36(242, uParam1, uParam0, 7029, 50.0f, Function_154(0));
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(3));
				if (*uParam2 == fVar1)
				{
					Function_103(242, *uParam2, 0, bVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
}

bool Function_154(bool bParam0) //Position: 0x5AE8 / 23272
{
	if (bParam0)
	{
		return "finishAll3_64";
	}
	return "finishAll3_128";
}

int Function_155(bool bParam0, bool bParam1) //Position: 0x5B18 / 23320
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_102();
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

void Function_156(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, vector3 vParam5, var uParam8, var uParam9, int iParam10) //Position: 0x5BA4 / 23460
{
	iParam0->f_28 = bParam1;
	iParam0->f_36 = uParam3;
	iParam0->f_40 = uParam8;
	iParam0->f_44 = uParam2;
	iParam0->f_52 = uParam9;
	iParam0->f_48 = iParam10;
	iParam0->f_120 = uParam4;
	*(iParam0 + 12) = { StackVal, StackVal, vParam5 };
	Local_134 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_134 };
	uLocal_133 = uLocal_133;
	iParam0->f_136 = CREATE_LAYOUT("vsLayout");
	if (bParam1 > 0)
	{
		iParam0->f_24 = Function_162(9, bParam1);
		Function_161(iParam0 + 68, iParam0->f_24, 3, 0);
		Function_161(iParam0 + 68, iParam0->f_120, 3, 0);
	}
	else
	{
		iParam0->f_24 = 4294967295;
	}
	Function_158(iParam0 + 68, "MP_victory", 5, 0);
	Function_158(iParam0 + 68, "custom/mp_victory", 8, 0);
	Function_250(iParam0 + 68);
	iParam0->f_60 = 13;
	Function_26(8197);
	Function_157();
}

void Function_157() //Position: 0x5C82 / 23682
{
	Function_15(1024, 1, 0);
	Function_15(1, 0, 0);
	return;
}

var Function_158(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5C96 / 23702
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_160(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_159(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_159(var uParam0, int iParam1) //Position: 0x5CCE / 23758
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_160(var uParam0, int iParam1, int iParam2) //Position: 0x5CDF / 23775
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_159(uParam0[iVar03], 4);
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

var Function_161(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5DA3 / 23971
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_159(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_159(uParam0[iVar03], 8);
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

int Function_162(int iParam0, bool bParam1) //Position: 0x5E73 / 24179
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_163(iParam0);
	}
	if (!Function_131(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_163(int iParam0) //Position: 0x5EDA / 24282
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_164(bool bParam0) //Position: 0x5EEA / 24298
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = Function_162(5, bParam0);
	iVar2 = 4294967295;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_166(bVar1))
		{
			if (bParam0 != bVar1)
			{
				iVar3 = Function_162(5, bVar1);
				if (iVar0 <= iVar3)
				{
					iVar2 = (iVar2 - 1);
				}
				else if (iVar0 == iVar3)
				{
					fVar4 = Function_165(5, bParam0);
					fVar5 = Function_165(5, bVar1);
					if (fVar4 < fVar5)
					{
						iVar2 = (iVar2 - 1);
					}
					else if (fVar4 != fVar5)
					{
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

float Function_165(int iParam0, bool bParam1) //Position: 0x5F67 / 24423
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_121(iParam0);
	}
	if (!Function_131(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

bool Function_166(bool bParam0) //Position: 0x5FD0 / 24528
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_131(bParam0);
}

var Function_167() //Position: 0x5FE6 / 24550
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_166(bVar0))
		{
			if (Function_164(bVar0) == 4294967295)
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	return 4294967295;
}

int Function_168() //Position: 0x6014 / 24596
{
	int iVar0;
	
	iVar0 = Function_164(GET_LOCAL_SLOT());
	switch (-iVar0)
	{
		case 0x00000001:
			return (GET_NUM_PLAYERS() - iVar0) * 50;
			break;
		
		case 0x00000002:
			return (GET_NUM_PLAYERS() - iVar0) * 35;
			break;
		
		case 0x00000003:
			return (GET_NUM_PLAYERS() - iVar0) * 25;
			break;
	}
	return 0;
}

bool Function_169(bool bParam0) //Position: 0x6061 / 24673
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

int Function_170(bool bParam0, int iParam1) //Position: 0x6105 / 24837
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (!IS_OBJECT_VALID(StackVal))
	{
		return 0;
	}
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = false;
	if (IS_OBJECT_VALID(bParam0->f_12))
	{
		if (STREAMING_IS_WORLD_LOADED() || (fVar0 - bParam0->f_56) < 15.0f)
		{
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(StackVal, 0))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			Function_197(bParam0, bParam0->f_12);
			iVar8 = 0;
			while (iVar8 <= 38)
			{
				(*bParam0 + 188)[iVar8] = 0;
				iVar8++;
			}
			REFERENCE_OBJECT(StackVal);
			bParam0->f_12 = "";
			DISBAND_OBJECTSET(bParam0->f_184);
			DISBAND_OBJECTSET(bParam0->f_108);
			bParam0->f_88 = 2;
			bParam0->f_84 = 1;
			bParam0->f_76 = (15.0f * 5.0f);
			bParam0->f_92 = 0;
			bParam0->f_80 = 6;
			Function_196(bParam0);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &vVar2);
			GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar5);
			STREAMING_LOAD_SCENE_EXT(vVar2, vVar5, 0);
			bVar1 = true;
		}
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (bParam0->f_88 == 2)
		{
			GET_CAMERA_POSITION(StackVal, &vVar2);
			if (VDIST(vVar2, *(bParam0 + 112)) < 1.0f)
			{
				SET_CAMERA_POSITION(StackVal, *(bParam0 + 112));
				SET_CAMERA_TARGET_POSITION(StackVal, *(bParam0 + 124), 0);
				*(bParam0 + 136) = { StackVal, StackVal, *(bParam0 + 124) };
			}
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		return bVar1;
	}
	GET_OBJECT_POSITION(StackVal, &vVar9);
	if (StackVal || !IS_OBJECT_VALID(((StackVal && !GET_OBJECT_TYPE(VDIST(vVar9, *(bParam0 + 40)) < 150.0f) != 8) && !IS_OBJECT_VALID(bParam0->f_12))))
	{
		bParam0->f_12 = Function_194(bParam0, iParam1);
		if (IS_OBJECT_VALID(bParam0->f_12))
		{
			GET_OBJECT_POSITION(bParam0->f_12, &vVar12);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_ORIENTATION(bParam0->f_12, &vVar15);
			STREAMING_LOAD_SCENE_EXT(vVar12, vVar15, 0);
			bParam0->f_56 = fVar0;
			bParam0->f_84 = 6;
			bParam0->f_92 = 1;
			bParam0->f_88 = 2;
			bParam0->f_80 = 0;
			Function_193(bParam0, 2, Function_46());
			Function_196(bParam0);
		}
	}
	Function_171(bParam0, fVar0, 3212836864, 3212836864);
	if (Function_73(StackVal, StackVal, *(bParam0 + 112)))
	{
	}
	if (Function_73(StackVal, StackVal, *(bParam0 + 124)))
	{
	}
	if (VDIST(*(bParam0 + 124), *(bParam0 + 136)) < 200.0f)
	{
		GET_CAMERA_POSITION(StackVal, &vVar2);
		GET_OBJECT_ORIENTATION(StackVal, &vVar5);
	}
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return bVar1;
}

void Function_171(bool bParam0, float fParam1, var uParam2, var uParam3) //Position: 0x6341 / 25409
{
	float fVar0;
	
	fVar0 = (1.0f / (fParam1 - bParam0->f_60));
	if (Function_192(bParam0))
	{
		Function_196(bParam0);
	}
	Function_178(bParam0);
	Function_176(bParam0, fVar0, uParam2);
	Function_172(bParam0, fVar0, uParam3);
	bParam0->f_60 = fParam1;
}

void Function_172(int iParam0, float fParam1, float fParam2) //Position: 0x637E / 25470
{
	struct<9> Var0;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<9> Var12;
	
	bVar15 = Function_175(StackVal);
	switch (iParam0->f_92)
	{
		case 0x00000000:
		case 0x00000001:
			vVar12 = { StackVal, StackVal, *(iParam0 + 124) };
			iParam0->f_104 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(bVar15))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(bVar15))
			{
				return;
			}
			vVar0 = { StackVal, StackVal, *(iParam0 + 136) };
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 124), vVar0, StackVal) };
			fVar3 = VMAG(vVar0);
			if (fVar3 > 2.5f)
			{
				VSCALE(&vVar0, 0.975f);
			}
			else
			{
				fVar8 = Function_174(bVar15, 0);
				if (fParam2 < -1.0f)
				{
					fVar4 = fParam2;
					fVar6 = (((fParam2 + fVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				else
				{
					fVar4 = (fVar8 + 5.0f);
					fVar6 = ((((fVar8 * 2.0f) + fVar3) - (iParam0->f_104 * 5.0f)) / 3.0f);
				}
				iVar5 = (fVar4 / 3.0f);
				fVar7 = Function_173(FABS(fVar6), iVar5);
				if (fVar6 > 0.0f)
				{
					fVar7 = (fVar7 * -1.0f);
				}
				iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				if (iParam0->f_104 < fVar4)
				{
					iParam0->f_104 = fVar4;
				}
				else if (iParam0->f_104 < 0.01f && iParam0->f_104 > iParam0->f_100)
				{
					iParam0->f_104 = iParam0->f_100;
				}
				else if (iParam0->f_104 > fVar8)
				{
					iParam0->f_104 = (fVar8 * 1.1f);
					iParam0->f_104 = (iParam0->f_104 + (fVar7 / fParam1));
				}
				fVar9 = (iParam0->f_104 / fParam1);
				VNORMALIZE(&vVar0);
				if (fVar3 < fVar9)
				{
					VSCALE(&vVar0, (fVar3 - fVar9));
				}
				else
				{
					VSCALE(&vVar0, (fVar3 / 5.0f));
				}
			}
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 124), vVar0, StackVal) };
			*(iParam0 + 136) = { StackVal, StackVal, vVar0 };
			vVar12 = { StackVal, StackVal, *(iParam0 + 136) };
			break;
	}
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 172), vVar12, StackVal) };
	SET_CAMERA_TARGET_POSITION(StackVal, vVar12, 0);
	GET_CAMERA_POSITION(StackVal, &vVar0);
	fVar10 = ATAN_DEGREE(((vVar12.z - vVar0.z) / (vVar12.x - vVar0.x)));
	fVar11 = (fVar10 - iParam0->f_36);
	iParam0->f_36 = fVar10;
	fVar11 = fVar11;
	return;
}

var Function_173(int iParam0, int iParam1) //Position: 0x6563 / 25955
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_174(bool bParam0, bool bParam1) //Position: 0x6576 / 25974
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_175(bool bParam0) //Position: 0x6595 / 26005
{
	bool bVar0;
	
	switch (GET_OBJECT_TYPE(bParam0))
	{
		case 0x00000018:
			ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
			break;
		
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
			break;
	}
	return bVar0;
}

void Function_176(int iParam0, float fParam1, float fParam2) //Position: 0x65D3 / 26067
{
	float fVar0;
	vector3 vVar1;
	struct<5> Var4;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	
	bVar15 = Function_175(StackVal);
	switch (iParam0->f_92)
	{
		case 0x00000000:
		case 0x00000001:
			iParam0->f_100 = 0.0f;
			break;
		
		default:
			if (!IS_ACTOR_VALID(bVar15))
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(bVar15))
			{
				return;
			}
			GET_CAMERA_POSITION(StackVal, &vVar1);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam0 + 112), vVar1, StackVal) };
			fVar0 = VMAG(vVar1);
			if (fVar0 > 2.5f)
			{
				VSCALE(&vVar1, 0.975f);
			}
			else
			{
				fVar13 = Function_174(bVar15, 0);
				if (fParam2 >= -1.0f)
				{
					fParam2 = (fVar13 + 2.0f);
					fVar11 = ((fVar0 - (iParam0->f_100 * 5.0f)) / 6.0f);
				}
				else
				{
					fVar11 = ((fVar0 - (iParam0->f_100 * 2.0f)) / 3.0f);
				}
				fVar10 = Function_177(2.0f, (fParam2 / 3.0f));
				fVar12 = Function_173(FABS(fVar11), fVar10);
				if (fVar11 > 0.0f)
				{
					fVar12 = (fVar12 * -1.0f);
				}
				iParam0->f_100 = (iParam0->f_100 + (fVar12 / fParam1));
				if (iParam0->f_100 < fParam2)
				{
					iParam0->f_100 = fParam2;
				}
				else if (iParam0->f_100 > fVar13)
				{
					iParam0->f_100 = (iParam0->f_100 * 1.1f);
				}
				fVar14 = (iParam0->f_100 / fParam1);
				VNORMALIZE(&vVar1);
				if (fVar0 < fVar14)
				{
					VSCALE(&vVar1, (fVar0 - fVar14));
				}
				else
				{
					vVar1 = { 0.0f, 0.0f, 0.0f };
				}
			}
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 112), vVar1, StackVal) };
			if (FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &Var4, &uVar7))
			{
				if ((StackVal + 0.5f) < vVar1.y)
				{
					vVar1.f_4 = (StackVal + 0.5f);
				}
			}
			SET_CAMERA_POSITION(StackVal, vVar1);
			break;
	}
	return;
}

float Function_177(int iParam0, int iParam1) //Position: 0x674E / 26446
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_178(bool bParam0) //Position: 0x6761 / 26465
{
	vector3 vVar0;
	vector3 vVar3;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	switch (bParam0->f_92)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(StackVal, bParam0 + 112);
			GET_OBJECT_AXIS(StackVal, &vVar0, 2);
			VNORMALIZE(&vVar0);
			VSCALE(&vVar0, -30.0f);
			*(bParam0 + 124) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(bParam0 + 112), StackVal) };
			break;
		
		case 0x00000003:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_189(StackVal, bParam0->f_108, 10.0f);
				Function_187(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_189(StackVal, bParam0->f_108, 5.0f);
				Function_186(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000004:
			if (bParam0->f_164 + 0.66f) > GET_CURRENT_GAME_TIME()
			{
				Function_189(StackVal, bParam0->f_108, 5.0f);
				Function_184(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 0);
			}
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_189(StackVal, bParam0->f_108, 15.0f);
			Function_179(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1.5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_179(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x68FC / 26876
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_175(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	GET_CAMERA_POSITION(StackVal, &vVar0);
	Function_180(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	if (Function_73(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_180(float fParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6) //Position: 0x6954 / 26964
{
	struct<5> Var0;
	float fVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13[8];
	var uVar38;
	var uVar41;
	float fVar44;
	vector3 vVar45;
	int iVar48;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	switch (fParam0)
	{
		case 0x00000000:
			*uParam6 = { 0.0f, 0.0f, -Function_177(0.5f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 1.25f;
			break;
		
		case 0x00000001:
			*uParam6 = { 0.0f, 0.0f, -Function_177(0.7f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 2.75f;
			break;
		
		case 0x00000002:
			*uParam6 = { 0.0f, 0.0f, -Function_177(1.0f, (VDIST(Var0, vParam2) / 3.0f)) };
			fVar6 = 4.25f;
			break;
	}
	*uParam6 = { 0.0f, 0.0f, -Function_177(0.7f, (VDIST(Var0, vParam2) / 3.0f)) };
	bVar8 = true;
	if (Function_84())
	{
		if (NET_IS_IN_SESSION())
		{
			if (IS_ACTOR_PLAYER(bParam1) && !IS_ACTOR_LOCAL_PLAYER(bParam1))
			{
				bVar9 = GET_ACTOR_SLOT(bParam1);
				if (IS_SLOT_VALID(bVar9))
				{
					if (GET_SLOT_POSITION(bVar9, &vVar10))
					{
						bVar7 = Function_182(StackVal, StackVal, vVar10, bParam1);
					}
				}
			}
		}
	}
	if (bVar8)
	{
		bVar7 = GET_HEADING(bParam1);
	}
	ROTATE_VECTOR_XZ(uParam6, bVar7, 0);
	*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
	switch (fParam0)
	{
		case 0x00000000:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (FIND_INTERSECTION(&Var0, uParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
	{
		*uParam6 = { 0.0f, 0.0f, 0.6f };
		bVar7 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(uParam6, bVar7, 0);
		*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
		uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	fVar44 = 60.0f;
	vVar13[23] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[33] = { (-1.0f * fVar6), 0.0f, 0.0f };
	vVar13[63] = { fVar6, 0.0f, 0.0f };
	vVar13[73] = { fVar6, 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar13[23]), (bVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[33]), (bVar7 + fVar44), 0);
	ROTATE_VECTOR_XZ(&(vVar13[63]), (bVar7 + (-1.0f * fVar44)), 0);
	ROTATE_VECTOR_XZ(&(vVar13[73]), (bVar7 + (-1.0f * fVar44)), 0);
	vVar45 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(&vVar45, 0.5f);
	iVar48 = 0;
	while (iVar48 <= vVar13)
	{
		if (!Function_73(StackVal, StackVal, vVar13[iVar483]))
		{
			vVar13[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar45, vVar13[iVar483], StackVal) };
			if (FIND_INTERSECTION(&(vVar13[iVar483]), uParam6, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		if (!Function_73(StackVal, StackVal, vVar13[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar13[iVar483]), &Var0, &uVar38, &uVar41, 1, 4294967295, 4194304))
			{
				vVar13[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_73(StackVal, StackVal, vVar13[03]))
	{
		vVar13[03].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[13]))
	{
		vVar13[13].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[23]))
	{
		vVar13[23].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[33]))
	{
		vVar13[33].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[43]))
	{
		vVar13[43].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[53]))
	{
		vVar13[53].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[63]))
	{
		vVar13[63].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar13[73]))
	{
		vVar13[73].f_4 = StackVal;
	}
	Function_181(StackVal, StackVal, vParam2, &vVar13);
	*uParam5 = { StackVal, StackVal, Function_181(StackVal, StackVal, vParam2, &vVar13) };
	return 1;
}

vector3 Function_181(vector3 vParam0, int iParam3) //Position: 0x6D3B / 27963
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	
	fVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *iParam3)
	{
		if (!Function_73(StackVal, StackVal, *iParam3[iVar33]))
		{
			if (VDIST(*iParam3[iVar33], vParam0) > fVar4)
			{
				fVar4 = VDIST(*iParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *iParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

var Function_182(vector3 vParam0, bool bParam3) //Position: 0x6DA3 / 28067
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam3))
	{
		GET_POSITION(bParam3, &vVar0);
		Function_183(StackVal, StackVal, StackVal, StackVal, vParam0, vVar0, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6DD3 / 28115
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_184(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x6DF6 / 28150
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_175(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_185(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_73(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_185(float fParam0, bool bParam1, vector3 vParam2, var uParam5, var uParam6) //Position: 0x6E53 / 28243
{
	struct<5> Var0;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16[8];
	var uVar41;
	var uVar44;
	float fVar47;
	int iVar48;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		PRINTSTRING("No head bone - getting base pos + offset");
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		PRINTSTRING("No hip bone - getting base pos + offset");
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	bVar11 = true;
	if (Function_84())
	{
		if (NET_IS_IN_SESSION())
		{
			if (IS_ACTOR_PLAYER(bParam1) && !IS_ACTOR_LOCAL_PLAYER(bParam1))
			{
				bVar12 = GET_ACTOR_SLOT(bParam1);
				if (IS_SLOT_VALID(bVar12))
				{
					if (GET_SLOT_POSITION(bVar12, &vVar13))
					{
						bVar10 = Function_182(StackVal, StackVal, vVar13, bParam1);
						bVar11 = false;
					}
				}
			}
		}
	}
	if (bVar11)
	{
		bVar10 = GET_HEADING(bParam1);
	}
	switch (fParam0)
	{
		case 0x00000000:
			vVar6 = { 0.0f, 0.0f, -0.45f };
			fVar9 = 0.75f;
			break;
		
		case 0x00000001:
			vVar6 = { 0.0f, 0.0f, -0.6f };
			fVar9 = 1.825f;
			break;
		
		case 0x00000002:
			vVar6 = { 0.0f, 0.0f, -0.9f };
			fVar9 = 2.5f;
			break;
	}
	*uParam6 = { StackVal, StackVal, vVar6 };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("Before Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	ROTATE_VECTOR_XZ(uParam6, bVar10, 0);
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Rotate");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After addhead");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	switch (fParam0)
	{
		case 0x00000000:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
		
		case 0x00000001:
			uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
			break;
		
		case 0x00000002:
			uParam6->f_4 = ((StackVal + (StackVal * 3.0f)) / 4.0f);
			break;
	}
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Adjust Y for shot type");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	if (FIND_INTERSECTION(&Var0, uParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
	{
		*uParam6 = { StackVal, StackVal, vVar6 };
		uParam6->f_8 = (StackVal * -1.0f);
		bVar10 = GET_HEADING(bParam1);
		ROTATE_VECTOR_XZ(uParam6, bVar10, 0);
		*uParam6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var0, *uParam6, StackVal) };
		uParam6->f_4 = ((StackVal + StackVal) / 2.0f);
	}
	if (Global_30842[33])
	{
		PRINTNL();
		PRINTSTRING("After Intersect Adjust");
		PRINTNL();
		PRINTVECTOR(Var0);
		PRINTNL();
		PRINTVECTOR(Var3);
		PRINTNL();
		PRINTVECTOR(*uParam6);
		PRINTNL();
	}
	fVar47 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar16[03] = { (-1.0f * (fVar9 - 0.05f)), 0.0f, 0.0f };
	vVar16[13] = { (-1.0f * (fVar9 - 0.05f)), 0.0f, 0.0f };
	vVar16[23] = { (-1.0f * (fVar9 + 0.05f)), 0.0f, 0.0f };
	vVar16[33] = { (-1.0f * (fVar9 + 0.05f)), 0.0f, 0.0f };
	vVar16[43] = { (fVar9 - 0.05f), 0.0f, 0.0f };
	vVar16[53] = { (fVar9 - 0.05f), 0.0f, 0.0f };
	vVar16[63] = { (fVar9 + 0.05f), 0.0f, 0.0f };
	vVar16[73] = { (fVar9 + 0.05f), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar16[03]), (bVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[13]), (bVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[23]), (bVar10 + (-1.0f * fVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[33]), (bVar10 + (-1.0f * fVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[43]), (bVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[53]), (bVar10 + fVar47), 0);
	ROTATE_VECTOR_XZ(&(vVar16[63]), (bVar10 + (-1.0f * fVar47)), 0);
	ROTATE_VECTOR_XZ(&(vVar16[73]), (bVar10 + (-1.0f * fVar47)), 0);
	iVar48 = 0;
	while (iVar48 <= vVar16)
	{
		vVar16[iVar483] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam6, vVar16[iVar483], StackVal) };
		if (FIND_INTERSECTION(&(vVar16[iVar483]), uParam6, &uVar41, &uVar44, 1, 4294967295, 4194304))
		{
			vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_73(StackVal, StackVal, vVar16[iVar483]))
		{
			if (FIND_INTERSECTION(&(vVar16[iVar483]), &Var0, &uVar41, &uVar44, 1, 4294967295, 4194304))
			{
				vVar16[iVar483] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar48++;
	}
	if (!Function_73(StackVal, StackVal, vVar16[03]))
	{
		vVar16[03].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[13]))
	{
		vVar16[13].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[23]))
	{
		vVar16[23].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[33]))
	{
		vVar16[33].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[43]))
	{
		vVar16[43].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[53]))
	{
		vVar16[53].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[63]))
	{
		vVar16[63].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar16[73]))
	{
		vVar16[73].f_4 = StackVal;
	}
	Function_181(StackVal, StackVal, vParam2, &vVar16);
	*uParam5 = { StackVal, StackVal, Function_181(StackVal, StackVal, vParam2, &vVar16) };
	return 1;
}

void Function_186(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x7436 / 29750
{
	vector3 vVar0;
	bool bVar3;
	
	bVar3 = Function_175(bParam1);
	if (!IS_ACTOR_VALID(bVar3))
	{
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_185(StackVal, StackVal, 1, bVar3, vVar0, uParam2, uParam3);
	}
	if (Function_73(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

void Function_187(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x7493 / 29843
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = Function_175(bParam1);
	bVar4 = AI_GET_ACTOR_CONVERSATION_TARGET(bVar3);
	if (!IS_ACTOR_VALID(bVar3) || !IS_ACTOR_VALID(bVar4))
	{
		Function_184(uParam0, bParam1, uParam2, uParam3, bParam4);
		return;
	}
	if (IS_ACTOR_VEHICLE(bVar3) || IS_ACTOR_VEHICLE(bVar4))
	{
		return;
	}
	if (bParam4)
	{
		GET_CAMERA_POSITION(StackVal, &vVar0);
		Function_188(StackVal, StackVal, 1, bVar3, bVar4, vVar0, uParam2, uParam3);
	}
	if (Function_73(StackVal, StackVal, *uParam2))
	{
		GET_CAMERA_POSITION(StackVal, uParam2);
	}
	uParam0->f_164 = GET_CURRENT_GAME_TIME();
}

int Function_188(int iParam0, bool bParam1, bool bParam2, vector3 vParam3, var uParam6, var uParam7) //Position: 0x7513 / 29971
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	bool bVar17;
	float fVar18;
	vector3 vVar19[8];
	var uVar44;
	var uVar47;
	int iVar50;
	
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "head", &Var0))
	{
		GET_OBJECT_POSITION(bParam1, &Var0);
		Var0.f_4 = (StackVal + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam1, "pelvis", &Var3))
	{
		GET_OBJECT_POSITION(bParam1, &Var3);
		Var3.f_4 = (StackVal + 1.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam2, "head", &vVar6))
	{
		GET_OBJECT_POSITION(bParam2, &vVar6);
		vVar6.f_4 = (vVar6.y + 2.0f);
	}
	if (!GET_OBJECT_NAMED_BONE_POSITION(bParam2, "pelvis", &vVar9))
	{
		GET_OBJECT_POSITION(bParam2, &vVar9);
		vVar9.f_4 = (vVar9.y + 1.0f);
	}
	fVar12 = VDIST(Var0, vVar6);
	switch (iParam0)
	{
		case 0x00000000:
			fVar13 = 0.75f;
			break;
		
		case 0x00000001:
			fVar13 = 1.625f;
			break;
		
		case 0x00000002:
			fVar13 = 2.5f;
			break;
	}
	*uParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam7, 0.5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0.5f);
	*uParam7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam7, StackVal) };
	VSCALE(uParam7, 0.5f);
	bVar17 = GET_HEADING(bParam1);
	fVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * fVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * fVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * fVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * fVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * fVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (bVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (bVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (bVar17 + (-1.0f * fVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (bVar17 + (-1.0f * fVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (bVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (bVar17 + fVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (bVar17 + (-1.0f * fVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (bVar17 + (-1.0f * fVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam7, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), uParam7, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_73(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_73(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_73(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_181(StackVal, StackVal, vParam3, &vVar19);
	*uParam6 = { StackVal, StackVal, Function_181(StackVal, StackVal, vParam3, &vVar19) };
	return 1;
}

void Function_189(bool bParam0, bool bParam1, float fParam2) //Position: 0x7897 / 30871
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		Function_191(bVar0, bParam1, 2, fParam2);
		Function_190(bVar0, bParam0);
		Function_191(bVar0, bParam1, 1, fParam2);
		Function_190(bVar0, bParam0);
		Function_191(bVar0, bParam1, 3, fParam2);
		Function_190(bVar0, bParam0);
		Function_191(bVar0, bParam1, 4, fParam2);
		Function_190(bVar0, bParam0);
		Function_191(bVar0, bParam1, 5, fParam2);
		Function_190(bVar0, bParam0);
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_190(bool bParam0, bool bParam1) //Position: 0x790B / 30987
{
	bool bVar0;
	
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar0, bParam1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar0, bParam1);
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_191(bool bParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x793D / 31037
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

bool Function_192(int iParam0) //Position: 0x7A2F / 31279
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	float fVar7;
	
	bVar0 = Function_175(StackVal);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bVar0))
	{
		return 0;
	}
	switch (iParam0->f_92)
	{
		case 0x00000003:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_174(bVar0, 0) < 0.2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!AI_IS_ACTOR_SOCIALIZING(bVar0) && Function_174(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			fVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((fVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_174(bVar0, 0) < 0.2f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)) && Function_174(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			fVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((fVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (Function_174(bVar0, 0) < 0.3f)
			{
				iParam0->f_88 = 1;
				iParam0->f_92 = 5;
				return 1;
			}
			GET_OBJECT_NAMED_BONE_POSITION(bVar0, "pelvis", &vVar1);
			GET_OBJECT_NAMED_BONE_ORIENTATION(bVar0, "pelvis", &uVar4);
			fVar7 = UNK_0x9C40E671(&uVar4);
			if ((VDIST(vVar1, *(iParam0 + 20)) + (FABS((fVar7 - iParam0->f_32)) / 360.0f)) < 0.375f)
			{
				return 1;
			}
			break;
		
		case 0x00000006:
		case 0x00000005:
		case 0x00000007:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 2;
				return 1;
			}
			if (AI_IS_ACTOR_SOCIALIZING(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 3;
				return 1;
			}
			if (IS_ACTOR_USING_COVER(bVar0))
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			if (Function_174(bVar0, 0) > 0.2f)
			{
				iParam0->f_88 = 0;
				iParam0->f_92 = 4;
				return 1;
			}
			break;
		
		case 0x00000000:
		case 0x00000001:
			return 0;
			break;
		
		default:
			LOG_ERROR("Unauthored case in IDLE_CAM_CHECK_TARGET_BEHAVIOR");
			break;
	}
	return 0;
}

void Function_193(bool bParam0, int iParam1, bool bParam2) //Position: 0x7D71 / 32113
{
	int iVar0;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		DEREFERENCE_OBJECT(StackVal);
		REMOVE_CAMERA_COLLISION_EXCLUSION(StackVal, StackVal);
	}
	bParam0->f_8 = bParam2;
	bParam0->f_64 = GET_CURRENT_GAME_TIME();
	bParam0->f_68 = GET_CURRENT_GAME_TIME();
	bParam0->f_76 = 15.0f;
	bParam0->f_88 = iParam1;
	REFERENCE_OBJECT(StackVal);
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(StackVal, StackVal, iVar0);
	if (!IS_OBJECT_IN_OBJECTSET(StackVal, bParam0->f_184))
	{
		ADD_OBJECT_TO_OBJECTSET(StackVal, bParam0->f_184);
	}
	bParam0->f_80 = bParam0->f_84;
	bParam0->f_96 = 0;
	return;
}

var Function_194(bool bParam0, int iParam1) //Position: 0x7DF6 / 32246
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	int iVar18[25];
	struct<9> Var44;
	bool bVar53;
	
	if (Global_29007 != 2)
	{
		bVar2 = CREATE_OBJECT_ITERATOR(*bParam0);
		Function_191(StackVal, bVar2, 6, bParam0->f_76);
		bVar1 = START_OBJECT_ITERATOR(bVar2);
		fVar3 = 1E+08.0f;
		GET_CAMERA_POSITION(StackVal, &vVar7);
		while (IS_OBJECT_VALID(bVar1))
		{
			if (Function_195(bParam0, bVar1, iParam1))
			{
				GET_OBJECT_POSITION(bVar1, &vVar4);
				if (VDIST(vVar4, vVar7) > fVar3)
				{
					fVar3 = VDIST(vVar4, vVar7);
					bVar0 = bVar1;
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		DESTROY_ITERATOR(bVar2);
	}
	else
	{
		iVar10 = GET_NUM_WORLD_CAMERAS();
		if (iVar10 >= 0)
		{
			if (bParam0->f_148)
			{
				bVar48 = CEIL((Global_34574 / 512.0f));
				bVar49 = CEIL((StackVal / 512.0f));
				iVar47 = 0;
				while (iVar47 <= iVar10)
				{
					if (iVar52 <= 25)
					{
						GET_WORLD_CAMERA_AT_INDEX(iVar47, &vVar44, &vVar14);
						bVar50 = CEIL((vVar44.x / 512.0f));
						bVar51 = CEIL((vVar44.z / 512.0f));
						if (bVar50 != bVar48 && bVar51 != bVar49)
						{
							iVar18[iVar52] = iVar47;
							iVar52++;
						}
					}
					iVar47++;
				}
				if (iVar52 <= bParam0->f_152)
				{
					bParam0->f_152 = iVar52;
				}
				if (GET_WORLD_CAMERA_AT_INDEX(iVar18[bParam0->f_152], &vVar11, &vVar14))
				{
					bVar17 = true;
				}
			}
			else if (GET_CLOSEST_WORLD_CAMERA(&Global_34574, 256.0f, &vVar11, &vVar14))
			{
				bVar17 = true;
			}
			if (bVar17)
			{
				VSCALE(&vVar14, (360.0f / 6.28f));
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					bParam0->f_348 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_20(), vVar11, vVar14);
				}
				else
				{
					bVar53 = FIND_OBJECT_IN_LAYOUT(*bParam0, "TempVistaPoint");
					if (IS_OBJECT_VALID(bVar53))
					{
						DESTROY_OBJECT(bVar53);
					}
					bParam0->f_348 = CREATE_POINT_IN_LAYOUT(*bParam0, "TempVistaPoint", vVar11, vVar14);
				}
				if (IS_OBJECT_VALID(bParam0->f_348))
				{
					GET_OBJECT_ORIENTATION(bParam0->f_348, &vVar14);
					bVar0 = bParam0->f_348;
				}
			}
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
	}
	return bVar0;
}

bool Function_195(int iParam0, bool bParam1, bool bParam2) //Position: 0x7FF7 / 32759
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	if (Global_30842[33])
	{
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTSTRING(" : ");
		PRINTVECTOR(vVar0);
		PRINTSTRING(" - ");
		PRINTFLOAT(VDIST(vVar0, *(iParam0 + 40)));
		PRINTNL();
	}
	if (StackVal == bParam1)
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam1, iParam0->f_184))
	{
		return 0;
	}
	if (VDIST(vVar0, *(iParam0 + 40)) < 150.0f && !bParam2)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return 0;
	}
	return 1;
}

void Function_196(bool bParam0) //Position: 0x8086 / 32902
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	var uVar7;
	
	DISBAND_OBJECTSET(bParam0->f_108);
	bVar6 = Function_175(StackVal);
	if (IS_ACTOR_VALID(bVar6))
	{
		GET_OBJECT_NAMED_BONE_POSITION(bVar6, "pelvis", bParam0 + 20);
		GET_OBJECT_NAMED_BONE_ORIENTATION(bVar6, "pelvis", &uVar7);
		bParam0->f_32 = UNK_0x9C40E671(&uVar7);
	}
	else
	{
		GET_OBJECT_POSITION(StackVal, bParam0 + 20);
		bParam0->f_32 = 0.0f;
	}
	switch (bParam0->f_92)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(StackVal, bParam0 + 112);
			GET_OBJECT_AXIS(StackVal, &vVar0, 2);
			VNORMALIZE(&vVar0);
			VSCALE(&vVar0, -30.0f);
			*(bParam0 + 124) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(bParam0 + 112), StackVal) };
			break;
		
		case 0x00000003:
			Function_189(StackVal, bParam0->f_108, 10.0f);
			Function_187(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000002:
			Function_189(StackVal, bParam0->f_108, 5.0f);
			Function_186(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000004:
			Function_189(StackVal, bParam0->f_108, 5.0f);
			Function_184(StackVal, bParam0, bParam0 + 112, bParam0 + 124, 1);
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000005:
		case 0x00000001:
			Function_189(StackVal, bParam0->f_108, 15.0f);
			Function_179(StackVal, bParam0, bParam0 + 112, bParam0 + 124);
			break;
		
		default:
			GET_CAMERA_POSITION(StackVal, &vVar3);
			GET_OBJECT_POSITION(StackVal, bParam0 + 124);
			(bParam0 + 124)->f_4 = (StackVal + 1.5f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 124), vVar3, StackVal) };
			VNORMALIZE(bParam0 + 112);
			VSCALE(bParam0 + 112, 3.0f);
			*(bParam0 + 112) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam0 + 124), *(bParam0 + 112), StackVal) };
			break;
	}
	return;
}

void Function_197(bool bParam0, bool bParam1) //Position: 0x8240 / 33344
{
	if (IS_OBJECT_VALID(bParam1))
	{
		bParam0->f_92 = 0;
		Function_193(bParam0, 2, bParam1);
		Function_196(bParam0);
	}
	else
	{
		bParam0->f_84 = 6;
		bParam0->f_92 = 1;
		bParam0->f_88 = 2;
		bParam0->f_80 = 0;
		Function_193(bParam0, 2, Function_46());
		Function_196(bParam0);
	}
	DISBAND_OBJECTSET(bParam0->f_108);
	DISBAND_OBJECTSET(bParam0->f_184);
	bParam0->f_84 = 1;
	return;
}

float Function_198(int iParam0) //Position: 0x8298 / 33432
{
	return -Function_199(iParam0);
}

float Function_199(int iParam0) //Position: 0x82A4 / 33444
{
	if (Function_205(iParam0))
	{
		if (Function_202(iParam0))
		{
			return StackVal;
		}
		Function_200();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_200() //Position: 0x8375 / 33653
{
	if (!Function_201())
	{
	}
	return;
}

bool Function_201() //Position: 0x8382 / 33666
{
	return NET_IS_IN_SESSION();
}

bool Function_202(bool bParam0) //Position: 0x838B / 33675
{
	return Function_25(*bParam0, 2);
}

void Function_203() //Position: 0x8398 / 33688
{
	strcpy(&Global_79349 + 48, "mp_race_sb_res", 64);
	switch (Local_267.f_716)
	{
		case 0x00000000:
			strcpy(&Global_79349, "race_gp1", 16);
			break;
		
		case 0x00000001:
			strcpy(&Global_79349, "race_gp2", 16);
			break;
		
		case 0x00000002:
			strcpy(&Global_79349, "race_gp3", 16);
			break;
		
		default:
			break;
	}
	return;
}

bool Function_204(int iParam0) //Position: 0x8413 / 33811
{
	if (Function_205(iParam0))
	{
		if (Function_198(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_205(int iParam0) //Position: 0x842E / 33838
{
	return Function_25(*iParam0, 1);
}

void Function_206(int iParam0, float fParam1) //Position: 0x843B / 33851
{
	Function_207(iParam0, -fParam1);
	return;
}

void Function_207(var uParam0, float fParam1) //Position: 0x8449 / 33865
{
	Function_200();
	Function_208(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_208(var uParam0, var uParam1) //Position: 0x845D / 33885
{
	uParam0->f_4 = uParam1;
	Function_16(uParam0, 1);
	Function_10(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_209() //Position: 0x847A / 33914
{
	bool bVar0;
	
	Function_150(32, 1);
	Function_215();
	Function_146();
	if (!Function_224())
	{
		Function_212(Function_246(4));
		Function_18("nRace_Next");
		UI_SET_STRING("MP_Race_Index", I2STR(Function_246(4) + 1));
		UI_SET_STRING("MP_Race_Total", I2STR(Function_246(3)));
	}
	else
	{
		Function_18("common_null");
	}
	if (!IS_LAYOUTREF_VALID(Local_267.f_364))
	{
		Local_267.f_364 = CREATE_LAYOUT("GP_IdleCam");
	}
	Function_211(&Local_267 + 364, 1, 1, 1);
	CANCEL_DEADEYE();
	CANCEL_TIME_WARP(0);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	UI_EXIT("HudMPNoFun");
	HUD_ENABLE(0);
	if (!IS_PS3())
	{
		UI_FOCUS("HudGamerList");
		UI_ENTER("Lobby_NewStyle");
		UI_EXCLUDE("LobbyNew_Replay");
		UI_EXCLUDE("LobbyNew_Toggle");
		UI_INCLUDE("LobbyNew_card");
		UI_INCLUDE("LobbyNew_nav");
	}
	Global_62993 = 1;
	RESET_ANALOG_POSITIONS(0, 0.0f);
	bVar0 = Function_46();
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	Function_210(4);
	Function_8(8197);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	return;
}

void Function_210(int iParam0) //Position: 0x85E9 / 34281
{
	Function_27(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_211(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x8642 / 34370
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	bool bVar16;
	
	STREAMING_SET_POI_LIMIT(2);
	iParam0->f_184 = CREATE_OBJECTSET_IN_LAYOUT("idleCamExclusions", *iParam0, 4294967295, 1);
	iParam0->f_108 = CREATE_OBJECTSET_IN_LAYOUT("idleCamFraming", *iParam0, 4294967295, 1);
	iParam0->f_52 = GET_CURRENT_GAME_TIME();
	iParam0->f_60 = GET_CURRENT_GAME_TIME();
	iParam0->f_88 = 2;
	iParam0->f_80 = 6;
	iParam0->f_4 = GET_GAME_CAMERA();
	*(iParam0 + 40) = { StackVal, StackVal, Global_34574 };
	*(iParam0 + 136) = { StackVal, StackVal, Global_34574 };
	(iParam0 + 136)->f_4 = (StackVal + 1.15f);
	iParam0->f_156 = 1;
	iParam0->f_160 = 45.0f;
	iParam0->f_164 = GET_CURRENT_GAME_TIME();
	iParam0->f_84 = 6;
	iParam0->f_4 = CREATE_CAMERA_IN_LAYOUT(*iParam0, "idlecam", 0);
	INIT_CAMERA_FROM_CHANNEL(StackVal, 0);
	iParam0->f_8 = "";
	iParam0->f_12 = Function_194(iParam0, uParam2);
	if (!IS_OBJECT_VALID(iParam0->f_12) && bParam3)
	{
		vVar0 = { 0.0f, 30.0f, 50.0f };
		bVar6 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		ROTATE_VECTOR_XZ(&vVar0, bVar6, 0);
		GET_CAMERA_POSITION(StackVal, &vVar3);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
		vVar7 = { -20.0f, bVar6, 0.0f };
		iParam0->f_12 = FIND_OBJECT_IN_LAYOUT(*iParam0, "ntempVista");
		if (IS_OBJECT_VALID(iParam0->f_12))
		{
			DESTROY_OBJECT(iParam0->f_12);
		}
		iParam0->f_12 = CREATE_POINT_IN_LAYOUT(*iParam0, "ntempVista", vVar0, vVar7);
	}
	iParam0->f_16 = _AIATTENTIONATTRACTOR(*iParam0, *(iParam0 + 112), 1045220557, 1065353216, 0, 0);
	ATTACH_OBJECTS(StackVal, iParam0->f_16, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	bVar16 = Function_46();
	STREAMING_SET_CUTSCENE_MODE(1);
	if (IS_ACTOR_VALID(bVar16))
	{
		ACTOR_HOLSTER_WEAPON(bVar16, 1);
		if (!IS_OBJECT_VALID(iParam0->f_12))
		{
			GET_OBJECT_POSITION(bVar16, &vVar10);
			iParam0->f_92 = 1;
			iParam0->f_88 = 2;
			iParam0->f_80 = 0;
			Function_193(iParam0, 2, bVar16);
			Function_196(iParam0);
		}
	}
	GET_OBJECT_POSITION(iParam0->f_12, &vVar10);
	GET_OBJECT_ORIENTATION(iParam0->f_12, &vVar13);
	STREAMING_LOAD_SCENE_EXT(vVar10, vVar13, 1);
	if (bParam3)
	{
		STREAMING_OVERRIDE_MAIN_POI(vVar10, vVar13);
	}
	iParam0->f_56 = GET_CURRENT_GAME_TIME();
	*(iParam0 + 172) = { 0.0f, 0.0f, 0.0f };
	if (bParam1)
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(StackVal, 0, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	PREVENT_DESPAWN_SET_SPHERE(Global_34574, 30.0f);
}

int Function_212(int iParam0) //Position: 0x888C / 34956
{
	int iVar0;
	
	if (iParam0 > 0 || iParam0 <= 11)
	{
	}
	if (Function_213(&Local_267 + 12 + 12[iParam02], &iVar0, 1))
	{
		UI_SET_STRING("MP_LobbyMode", UI_GET_STRING(&iVar0 + 48));
		return 1;
	}
	return 0;
}

bool Function_213(char* cParam0, int iParam1, bool bParam2) //Position: 0x88CF / 35023
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_214(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
				if (!GAME_INSTANCE_SET_REGION(cParam0, iParam1->f_40))
				{
					strcpy(&cVar0, "Unable to set region for ", 64);
					stradd(&cVar0, cParam0, 64);
				}
			}
		}
		return 1;
	}
	return 0;
}

var Function_214(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8934 / 35124
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

void Function_215() //Position: 0x89CF / 35279
{
	if (!Function_24(4))
	{
		Function_23();
	}
	Function_15(4, 1, 1);
	return;
}

void Function_216() //Position: 0x89E6 / 35302
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -Function_222(GET_LOCAL_SLOT());
	if (Function_163(5) == 4294967295)
	{
		Function_221(5, 0);
	}
	if (Function_34(32))
	{
		iVar0 = Function_163(5);
		iVar0 = iVar0;
		iVar2 = 0;
		Function_221(5, iVar0);
		Function_219(1);
		Function_217(&Global_50170[24122] + 4, &Global_50170[24122] + 8, &Global_50170[24122] + 12, iVar2);
		return;
	}
	switch (iVar1)
	{
		case 0x00000001:
			Local_96.f_44 = (GET_NUM_PLAYERS() - iVar1) * 20;
			iVar0 = Function_163(5);
			iVar0 += 10;
			iVar2 = 10;
			Function_221(5, iVar0);
			break;
		
		case 0x00000002:
			Local_96.f_44 = (GET_NUM_PLAYERS() - iVar1) * 15;
			iVar0 = Function_163(5);
			iVar0 += 8;
			iVar2 = 8;
			Function_221(5, iVar0);
			break;
		
		case 0x00000003:
			Local_96.f_44 = (GET_NUM_PLAYERS() - iVar1) * 10;
			iVar0 = Function_163(5);
			iVar0 += 6;
			iVar2 = 6;
			Function_221(5, iVar0);
			break;
		
		case 0x00000004:
			iVar0 = Function_163(5);
			iVar0 += 4;
			iVar2 = 4;
			Function_221(5, iVar0);
			break;
		
		case 0x00000005:
			iVar0 = Function_163(5);
			iVar0 += 3;
			iVar2 = 3;
			Function_221(5, iVar0);
			break;
		
		case 0x00000006:
			iVar0 = Function_163(5);
			iVar0 += 2;
			iVar2 = 2;
			Function_221(5, iVar0);
			break;
		
		case 0x00000007:
			iVar0 = Function_163(5);
			iVar0 += 2;
			iVar2 = 2;
			Function_221(5, iVar0);
			break;
		
		case 0x00000008:
			iVar0 = Function_163(5);
			iVar0++;
			iVar2 = 1;
			Function_221(5, iVar0);
			break;
	}
	Function_219(0);
	Function_217(&Global_50170[24122] + 4, &Global_50170[24122] + 8, &Global_50170[24122] + 12, iVar2);
	return;
}

void Function_217(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x8B88 / 35720
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_114(241);
			fVar1 = Function_113(241);
			Global_50170[24122].f_28 = (Global_50170[24122].f_28 + iParam3);
			bVar0 = Global_50170[24122].f_28;
			if (bVar0 > 250)
			{
				*uParam2 = 0.0f;
				Function_107(241, uParam1, 1, 7026, 50.0f, 150.0f, 500, Function_218(0), 0);
				Function_106(241);
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(250));
				if (*uParam2 == fVar1)
				{
					Function_103(241, *uParam2, 1, bVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_106(241);
			Global_50170[24122].f_28 = (Global_50170[24122].f_28 + iParam3);
			bVar0 = Global_50170[24122].f_28;
			if (bVar0 > 500)
			{
				*uParam2 = 0.0f;
				Function_107(241, uParam1, 2, 7027, 150.0f, 200.0f, 750, Function_218(0), 0);
				Function_106(241);
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(500));
				if (*uParam2 == fVar1)
				{
					Function_103(241, *uParam2, 1, bVar0, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_106(241);
			Global_50170[24122].f_28 = (Global_50170[24122].f_28 + iParam3);
			bVar0 = Global_50170[24122].f_28;
			if (bVar0 > 750)
			{
				*uParam2 = 0.0f;
				Function_36(241, uParam1, uParam0, 7028, 200.0f, Function_218(0));
			}
			else
			{
				*uParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(750));
				if (*uParam2 == fVar1)
				{
					Function_103(241, *uParam2, 1, bVar0, 4294967295, 4294967295);
				}
			}
			break;
	}
}

bool Function_218(bool bParam0) //Position: 0x8D1C / 36124
{
	if (bParam0)
	{
		return "grandPrixPoints_64";
	}
	return "grandPrixPoints_128";
}

void Function_219(int iParam0) //Position: 0x8D56 / 36182
{
	int iVar0;
	
	iVar0 = -Function_222(GET_LOCAL_SLOT());
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(78))
	{
		if (iVar0 != Function_220() || iParam0)
		{
			Function_151(1024, 1);
		}
		else if (iVar0 != 1 && Function_34(1024))
		{
			AWARD_ACHIEVEMENT(78);
		}
		else if (iVar0 != 1)
		{
			Function_151(1024, 0);
		}
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(76))
	{
		if (iVar0 != 1)
		{
			Function_151(2048, 0);
		}
	}
	return;
}

int Function_220() //Position: 0x8DBE / 36286
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 4294957296;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_166(bVar0))
		{
			iVar2 = -Function_222(bVar0);
			if (iVar2 >= iVar1)
			{
				iVar1 = iVar2;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_221(int iParam0, int iParam1) //Position: 0x8DF9 / 36345
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_222(bool bParam0) //Position: 0x8E22 / 36386
{
	return Function_162(0, bParam0);
}

int Function_223(int iParam0, bool bParam1) //Position: 0x8E2E / 36398
{
	int iVar0;
	
	if (iParam0 > 0 || iParam0 <= 11)
	{
	}
	if (Function_213(&Local_267 + 12 + 12[iParam02], &iVar0, 1))
	{
		*(&Local_267 + 720) = { StackVal, StackVal, *(&iVar0 + 28) };
		if (!bParam1)
		{
			(&Local_267 + 720)->f_4 = (StackVal + 10.0f);
		}
		return 1;
	}
	return 0;
}

bool Function_224() //Position: 0x8E82 / 36482
{
	if (Function_246(4) <= Function_246(3))
	{
		return 0;
	}
	return 1;
}

void Function_225(int iParam0, int iParam1) //Position: 0x8E96 / 36502
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

bool Function_226() //Position: 0x8EB7 / 36535
{
	return GET_NUM_PLAYERS() >= 1;
}

void Function_227(int iParam0) //Position: 0x8EC2 / 36546
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_228(int iParam0) //Position: 0x8ED6 / 36566
{
	struct<21> Var0;
	
	if (iParam0 > 0 || iParam0 <= 11)
	{
	}
	if (Function_213(&Local_267 + 12 + 12[iParam02], &Var0, 1))
	{
		Local_267.f_8 = LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Var0.f_20, 4), 0);
		return 1;
	}
	return 0;
}

void Function_229() //Position: 0x8F11 / 36625
{
	char* cVar0[32];
	
	strcpy(&cVar0, "LS_", 32);
	stradd(&cVar0, &Global_79349, 32);
	UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar0);
	UI_SHOW("LoadingScreenTexture");
	UI_SHOW("LoadingMissionName");
	UI_SET_TEXT("LoadingMissionName", &Global_79349 + 48);
	UI_REFRESH("LoadingMissionName");
	UI_SET_TEXT("LoadingSpinner", "Common_Null");
	UI_REFRESH("LoadingSpinner");
	UI_REFRESH("LoadingScreen");
	return;
}

int Function_230(bool bParam0) //Position: 0x8FF6 / 36854
{
	struct<4> Var0;
	
	if (bParam0 > 0 || bParam0 <= 11)
	{
	}
	if (Function_213(&Local_267 + 12 + 12[bParam02], &Var0, 1))
	{
		*(&Global_79349 + 48) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Var0 + 48) };
		Global_79349 = { StackVal, StackVal, StackVal, Var0 };
		return 1;
	}
	return 0;
}

void Function_231(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x903A / 36922
{
	if (!IS_OBJECT_VALID(Local_69.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_69.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_69.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_232(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_69.f_104, &Local_69) + Vector(0.0f, 2.45f, 0.0f), 1, 37819, 1, 125, 0, 0, 0);
	Function_232(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_69.f_104, &Local_69 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_232(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) //Position: 0x90BD / 37053
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(iParam8, 16) + SHIFT_LEFT(iParam9, 8)) + iParam10);
		Function_233(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_233(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x9108 / 37128
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
			Function_235(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_68;
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
					Function_235(iParam0);
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
			uVar14 = Function_234(iParam0->f_36);
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

var Function_234(float fParam0) //Position: 0x9387 / 37767
{
	return (fParam0 * 57.29578f);
}

void Function_235(int iParam0) //Position: 0x9395 / 37781
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

var Function_236(int iParam0, var uParam1) //Position: 0x93BB / 37819
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_69.f_96 != iParam0)
	{
		Local_69.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_237(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

struct<64> Function_237(var uParam0) //Position: 0x9420 / 37920
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_238(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x9434 / 37940
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

var Function_239(bool bParam0, var uParam1) //Position: 0x9479 / 38009
{
	int iVar0;
	
	uParam1 = uParam1;
	if (Local_69.f_100 != bParam0)
	{
		Local_69.f_100 = bParam0;
		if (bParam0 == 0)
		{
			UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("RACE_summary"), I2STR(Function_246(3)), 0, 0);
		}
		else
		{
			Function_213(&Local_267 + 12 + 12[(bParam0 - 1)2], &iVar0, 1);
			UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("GP_summary"), I2STR(bParam0), UI_GET_STRING(&iVar0 + 48), 0);
		}
	}
	return "Generic_Dbuffer128_1";
}

var Function_240() //Position: 0x9532 / 38194
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	
	vVar0 = { StackVal, StackVal, *(&Global_79349 + 28) };
	fVar3 = 0.0f;
	iVar4 = CREATE_PROPSET_IN_LAYOUT(Global_83591.f_140, "TalkingStick", "$/tune/refGroups/refGroups/mp_race", vVar0, 0.0f, fVar3, 0.0f);
	Function_241(iVar4, 1);
	return iVar4;
}

void Function_241(bool bParam0, int iParam1) //Position: 0x9596 / 38294
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), iParam1);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
	DESTROY_ITERATOR(bVar1);
	return;
}

bool Function_242(bool bParam0, bool bParam1) //Position: 0x95E2 / 38370
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_243() //Position: 0x9602 / 38402
{
	if (IS_OBJECT_VALID(Local_69.f_104))
	{
		DESTROY_OBJECT(Local_69.f_104);
		Function_235(&Local_69);
	}
	return;
}

bool Function_244() //Position: 0x961E / 38430
{
	return Function_255(8);
}

bool Function_245(int iParam0) //Position: 0x9629 / 38441
{
	struct<25> Var0;
	
	if (iParam0 > 0 || iParam0 <= 11)
	{
	}
	if (Function_213(&Local_267 + 12 + 12[iParam02], &Var0, 1))
	{
		Local_267.f_4 = LAUNCH_NEW_SCRIPT(GET_ASSET_NAME(Var0.f_24, 4), 0);
		return 1;
	}
	return 0;
}

bool Function_246(int iParam0) //Position: 0x9664 / 38500
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_247(int iParam0) //Position: 0x9684 / 38532
{
	Function_150(8, iParam0);
	return;
}

void Function_248(bool bParam0) //Position: 0x9691 / 38545
{
	NET_LOG(1, "GP State", "Moving to: %s (%s)", Function_249(bParam0), I2STR(bParam0), 0, 0);
	Local_267 = bParam0;
	return;
}

var Function_249(int iParam0) //Position: 0x96CC / 38604
{
	switch (iParam0)
	{
		case 0x00000000:
			return "GP_STATE_INIT";
		
		case 0x00000001:
			return "GP_STATE_INSTANCE_LOADING";
		
		case 0x00000002:
			return "GP_STATE_INSTANCE_WAITING_TO_START";
		
		case 0x00000003:
			return "GP_STATE_INSTANCE_WAITING_TO_BE_READY";
		
		case 0x00000004:
			return "GP_STATE_WAITING_ON_LOBBY";
		
		case 0x00000005:
			return "GP_STATE_GAMETYPE_LAUNCHING";
		
		case 0x00000006:
			return "GP_STATE_GAMETYPE_WAITING_TO_START";
		
		case 0x00000007:
			return "GP_STATE_GAMETYPE_WAITING_TO_END";
		
		case 0x00000009:
			return "GP_STATE_MID_PRIX_COOLDOWN";
		
		case 0x0000000A:
			return "GP_STATE_MID_PRIX_COOLDOWN_FADING";
		
		case 0x0000000B:
			return "GP_STATE_SHOW_VICTORY_SCREEN";
		
		case 0x0000000C:
			return "GP_STATE_LAST_COOLDOWN";
		
		default:
	}
	return "Undefined state?!";
}

bool Function_250(int iParam0) //Position: 0x98B5 / 39093
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_254();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_159(iParam0[iVar03], 8);
		}
		else if (Function_253())
		{
			iVar1 = 1;
			Function_159(iParam0[iVar03], 8);
		}
		Function_159(iParam0[iVar03], 16);
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
				Function_159(iParam0[iVar03], 1);
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
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_159(iParam0[iVar03], 2);
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
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_159(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_159(iParam0[iVar03], 2);
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
	Function_251();
	return 1;
}

void Function_251() //Position: 0x9C30 / 39984
{
	if (!Function_252(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_252(int iParam0) //Position: 0x9C70 / 40048
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_253() //Position: 0x9C8C / 40076
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

void Function_254() //Position: 0x9CB7 / 40119
{
	if (!Function_252(128))
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

bool Function_255(int iParam0) //Position: 0x9CF9 / 40185
{
	return Function_25(StackVal, iParam0);
}

void Function_256() //Position: 0x9D0C / 40204
{
	if (HUD_IS_FADED())
	{
		if (!Local_267.f_732 && Local_267.f_736)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				Function_257("nRACE_help", 4294967295);
				Local_267.f_732 = 1;
			}
		}
	}
	else
	{
		Function_6();
	}
	return;
}

void Function_257(char* cParam0, int iParam1) //Position: 0x9D61 / 40289
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

void Function_258() //Position: 0x9DF8 / 40440
{
	int iVar0;
	int iVar1;
	
	if (Function_246(3) >= 2 || !NET_IS_SESSION_HOST())
	{
		return;
	}
	iVar0 = RAND_INT_RANGE(1, (Function_246(3) - 2));
	iVar1 = RAND_INT_RANGE(0, 10);
	Function_259(&Local_267 + 12 + 12, &iVar0, &iVar1);
	return;
}

int Function_259(var uParam0, var uParam1, int iParam2) //Position: 0x9E30 / 40496
{
	struct<2> Var0;
	
	if (*iParam2 >= 0)
	{
		if (Function_246(3) >= 2 || !NET_IS_SESSION_HOST())
		{
			return 1;
		}
		Var0 = { StackVal, *uParam0[*uParam12] };
		*uParam0[*uParam12] = { StackVal, *(uParam0[*uParam1 + 12]) };
		*(uParam0[*uParam1 + 12]) = { StackVal, Var0 };
		*uParam1++;
		if (*uParam1 > (Function_246(3) - 1))
		{
			*uParam1 = 1;
		}
		*iParam2 = (*iParam2 - 1);
		return Function_259(uParam0, uParam1, iParam2);
	}
	return 1;
}

void Function_260(char* cParam0) //Position: 0x9EAB / 40619
{
	var uVar0;
	
	if (Function_246(3) > 11)
	{
		return;
	}
	if (!UNK_0xFAD5A270(cParam0, &uVar0))
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		strcpy(&Local_267 + 12 + 12[Function_246(3)2], cParam0, 8);
	}
	Function_225(3, Function_246(3) + 1);
	return;
}

void Function_261() //Position: 0x9EE8 / 40680
{
	Function_225(4, 0);
	Function_225(3, 0);
	Function_151(2, 1);
	Function_151(4, 0);
	Function_151(1024, 0);
	Function_151(2048, 1);
	Function_151(8, 0);
	Function_151(16, 0);
	Function_271();
	Function_268(&Global_83591 + 276);
	Function_263(&Global_83591, 1, 5, 12, 0);
	Function_263(&Global_83591, 2, 17, 6, 0);
	Function_263(&Global_83591, 3, 22, 1, 0);
	Function_221(5, 4294967295);
	Function_120(5, 0.0f);
	Function_262();
	Function_250(&Local_267 + 116);
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_267 + 12, 26);
	return;
}

void Function_262() //Position: 0x9F6D / 40813
{
	Function_158(&Local_267 + 116, "$/fragments/p_gen_markerPost01x", 0, 0);
	Function_158(&Local_267 + 116, "$/fragments/p_gen_marker01x", 0, 0);
	Function_158(&Local_267 + 116, "$/fragments/p_gen_marker02x", 0, 0);
	Function_161(&Local_267 + 116, 976, 3, 0);
	Function_161(&Local_267 + 116, 977, 3, 0);
	Function_161(&Local_267 + 116, 980, 3, 0);
	Function_161(&Local_267 + 116, 981, 3, 0);
	Function_161(&Local_267 + 116, 983, 3, 0);
	Function_161(&Local_267 + 116, 984, 3, 0);
	Function_161(&Local_267 + 116, 985, 3, 0);
	Function_161(&Local_267 + 116, 986, 3, 0);
	Function_161(&Local_267 + 116, 987, 3, 0);
	Function_161(&Local_267 + 116, 988, 3, 0);
	Function_161(&Local_267 + 116, 989, 3, 0);
	Function_161(&Local_267 + 116, 990, 3, 0);
	Function_161(&Local_267 + 116, 991, 3, 0);
	Function_158(&Local_267 + 116, "$/tune/refGroups/refGroups/mp_race", 7, 0);
	Function_158(&Local_267 + 116, "dlc_mpmodepack_race", 10, 0);
	Function_158(&Local_267 + 116, "MP_Horserace_Victory", 5, 0);
	Function_158(&Local_267 + 116, "custom/MP_Horserace_Victory", 8, 0);
	return;
}

void Function_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA146 / 41286
{
	Function_264(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA15E / 41310
{
	Function_265(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_265(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xA173 / 41331
{
	if (!Function_267(iParam1))
	{
		return;
	}
	Function_266(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_266(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA196 / 41366
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

bool Function_267(int iParam0) //Position: 0xA1C0 / 41408
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_268(int iParam0) //Position: 0xA1D0 / 41424
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_270(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_269(iParam0, 0.0f);
	return;
}

void Function_269(var uParam0, int iParam1) //Position: 0xA1FD / 41469
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_270(var uParam0) //Position: 0xA209 / 41481
{
	Function_266(uParam0, 4294967295, 0, 1);
	return;
}

void Function_271() //Position: 0xA217 / 41495
{
	Local_69.f_96 = 4294967295;
	Local_69.f_100 = 4294967295;
	return;
}

