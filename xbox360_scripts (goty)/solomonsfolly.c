//Decompiled with MagicRDR v1.0
//Function Count : 202
//Statics Count : 308
//Natives Count : 284
//Parameters Count : 2

#region Local Var
	struct<213> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bLocal_302 = false;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_190 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	bLocal_193 = false;
	iLocal_304 = 0;
	iLocal_305 = 0;
	iLocal_195 = 0;
	Local_196 = { StackVal, ScriptParam_0 };
	bLocal_302 = Function_201(&(Global_29008[ScriptParam_0]));
	Function_200("Initializing Solomon's Folly", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_198 = 1000;
		switch (iLocal_195)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_195 = 1;
				}
				bLocal_198 = false;
				break;
			
			case 0x00000001:
				if (Function_199())
				{
					iLocal_195 = 2;
				}
				bLocal_198 = false;
				break;
			
			case 0x00000002:
				if (Function_197())
				{
					Function_196(&(Global_29008[Local_196]), 32);
					iLocal_195 = 3;
				}
				bLocal_198 = false;
				break;
			
			case 0x00000003:
				bLocal_199 = LAUNCH_NEW_SCRIPT_WITH_ARGS("SolomonsFollyVol", &Local_196, 2, 0);
				Function_195(&Global_6490, &Global_7474, ScriptParam_0);
				iLocal_195 = 5;
				if (Function_194() && Function_192())
				{
					if (Function_191())
					{
						bLocal_200 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Solomons_Folly/SolomonsFollyMP", 0);
					}
				}
				bLocal_198 = false;
				break;
			
			case 0x00000005:
				if (Function_190(&Global_6490, &Global_7474, ScriptParam_0))
				{
					iLocal_195 = 4;
					bLocal_198 = false;
				}
				else
				{
					bLocal_198 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_189(&(Global_29008[Local_196]), 16) && Function_188(Global_29155[ScriptParam_010]))
				{
					iLocal_195 = 6;
				}
				bLocal_198 = false;
				break;
			
			case 0x00000006:
				if ((!Function_189(&(Global_29008[ScriptParam_0]), 256) && bLocal_302) && Function_187(2))
				{
					Function_179(0, &uLocal_201, -3883.981f, 8.032f, 3640.342f);
					Function_178(0, &uLocal_201, Local_0);
					Function_179(1, &uLocal_201, -3883.754f, 8.031f, 3653.737f);
					Function_178(1, &uLocal_201, Local_0);
					Function_179(2, &uLocal_201, -3871.186f, 8.031f, 3672.892f);
					Function_178(2, &uLocal_201, Local_0);
					Function_179(3, &uLocal_201, -3853.418f, 8.257f, 3665.716f);
					Function_178(3, &uLocal_201, Local_0);
					Function_179(4, &uLocal_201, -3858.66f, 8.032f, 3653.634f);
					Function_178(4, &uLocal_201, Local_0);
					Function_175(&Global_6490, &Global_7474, &uLocal_201, Global_6289, ScriptParam_0);
				}
				else
				{
					bLocal_302 = false;
					iLocal_303 = 1;
				}
				if (Function_189(&(Global_29008[ScriptParam_0]), 256) || !Function_187(2))
				{
					iLocal_303 = 1;
				}
				Function_196(&(Global_29008[Local_196]), 8);
				iLocal_195 = 7;
				bLocal_198 = false;
				break;
			
			case 0x00000007:
				iLocal_195 = 8;
				bLocal_198 = false;
				break;
			
			case 0x00000008:
				if (Function_194())
				{
					Function_173(StackVal, 0, 0.0f, 3, Local_0, 1);
				}
				else if (Function_172(ScriptParam_0, &Global_6490, iLocal_303))
				{
					Function_173(StackVal, 0, 0.1f, 3, Local_0, 1);
				}
				else
				{
					Function_173(StackVal, 1, 0.5f, 3, Local_0, 1);
				}
				Function_171(64);
				Function_167(2, 4294967295, 4294967295, 0, 3);
				Function_196(&(Global_29008[Local_196]), 512);
				iLocal_195 = 9;
				bLocal_198 = false;
				break;
			
			case 0x00000009:
				Function_165(Local_0, ScriptParam_0);
				Function_196(&(Global_29008[Local_196]), 4);
				Function_164("Finished Initializing Solomon's Folly", 5.0f);
				iLocal_195 = 10;
				bLocal_198 = false;
				if (!Function_163(Global_30658[2]))
				{
					if (bLocal_302)
					{
						iLocal_305 = 1;
					}
				}
				else
				{
					if (!Global_63096 && !Global_3380)
					{
						Function_162();
						Function_161("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_302 = false;
				}
				Function_157(&(Global_29008[Local_196]));
				break;
			
			case 0x0000000A:
				Function_153();
				if (iLocal_305 && !iLocal_304)
				{
					if ((((!Global_3380 && !Global_3382) && !Global_3384) && !IS_ACTOR_ON_TRAIN(Global_34573, 0)) && Function_150(2, 0))
					{
						bLocal_302 = Function_129();
						iLocal_304 = 1;
					}
				}
				if (bLocal_302 && iLocal_304)
				{
					Function_35();
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_198);
	}
	if (bLocal_302)
	{
		Function_24();
	}
	Function_22();
	Function_12(&Global_6490, &Global_7474, ScriptParam_0, iLocal_303);
	Function_11();
	Function_6();
	Function_2(ScriptParam_0);
	Function_171(64);
	Function_1(&(Global_29008[Local_196]), 32);
	Function_1(&(Global_29008[Local_196]), 64);
	Function_1(&(Global_29008[Local_196]), 8);
	Function_1(&(Global_29008[Local_196]), 512);
	Function_1(&(Global_29008[Local_196]), 4);
	if (IS_SCRIPT_VALID(bLocal_200))
	{
		TERMINATE_SCRIPT(bLocal_200);
	}
	if (IS_SCRIPT_VALID(bLocal_199))
	{
		TERMINATE_SCRIPT(bLocal_199);
	}
	Function_164("Unloaded Solomon's Folly", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x4D1 / 1233
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x4E8 / 1256
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x51E / 1310
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x540 / 1344
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x556 / 1366
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x56C / 1388
{
	Function_7(&Local_54 + 4);
	RELEASE_LAYOUT_REF(Local_54);
	return;
}

void Function_7(int iParam0) //Position: 0x57E / 1406
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_8(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x5A4 / 1444
{
	if (Function_10(uParam0[iParam13], 4))
	{
		if (Function_10(uParam0[iParam13], 1))
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
			Function_9(uParam0[iParam13], 1);
			Function_9(uParam0[iParam13], 2);
			Function_9(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x6D2 / 1746
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x6EC / 1772
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x709 / 1801
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x714 / 1812
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_194())
	{
		return;
	}
	strcpy(&cVar0, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_189(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_18(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_17(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_189(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_187(2) || Function_189(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_18(uParam0[iVar162], 2) && !Function_18(uParam0[iVar162], 4))
		{
			Function_13(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_18(uParam0[iVar162], 2) && !Function_18(uParam0[iVar162], 4))
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
			Function_196(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x914 / 2324
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_16(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_18(uParam0[iParam22], 1) && !bParam3)
	{
		Function_16(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_15(Global_29007), Function_14(Global_29007), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0xA63 / 2659
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

int Function_15(int iParam0) //Position: 0xA8E / 2702
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

void Function_16(var uParam0, int iParam1) //Position: 0xAC2 / 2754
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xAD1 / 2769
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xAE8 / 2792
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xB04 / 2820
{
	if (Function_20(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(int iParam0, bool bParam1) //Position: 0xB1F / 2847
{
	return (iParam0 && bParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xB2C / 2860
{
	if (!Function_5(iParam0))
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

void Function_22() //Position: 0xFDA / 4058
{
	if (IS_OBJECTSET_VALID(bLocal_194))
	{
		Function_23(bLocal_194);
		DESTROY_OBJECTSET(bLocal_194);
	}
	return;
}

void Function_23(bool bParam0) //Position: 0xFF2 / 4082
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_24() //Position: 0x1037 / 4151
{
	int iVar0;
	
	Function_7(&bLocal_173);
	Function_34();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Function_32(&Global_6490, &Global_7474, iVar0, 0);
		iVar0++;
	}
	if (SQUAD_IS_VALID(bLocal_163))
	{
		Function_31(bLocal_163);
		Function_29(&bLocal_163, 1, 0);
		DESTROY_OBJECT(bLocal_163);
	}
	if (IS_LAYOUTREF_VALID(bLocal_158))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_158);
		RELEASE_LAYOUT_REF(bLocal_158);
	}
	CLEAR_ALL_CORPSES();
	Function_27(1);
	Function_25(32768);
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_GotPop"))
	{
		DECOR_REMOVE(Global_34573, "SOL_GotPop");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "BlippedSquad"))
	{
		DECOR_REMOVE(Global_34573, "BlippedSquad");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SOL_aggroInWagon"))
	{
		DECOR_REMOVE(Global_34573, "SOL_aggroInWagon");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PrintObjThruCut"))
	{
		DECOR_REMOVE(Global_34573, "PrintObjThruCut");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DestroyGateway"))
	{
		DECOR_REMOVE(Global_34573, "DestroyGateway");
	}
	return;
}

void Function_25(int iParam0) //Position: 0x1190 / 4496
{
	Function_26(&Global_28842, iParam0);
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x119E / 4510
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_27(int iParam0) //Position: 0x11B9 / 4537
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_28())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_28() //Position: 0x11F5 / 4597
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_29(var uParam0, bool bParam1, bool bParam2) //Position: 0x121A / 4634
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_30(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_30(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1296 / 4758
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_31(bool bParam0) //Position: 0x12B0 / 4784
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_32(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x12FD / 4861
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_18(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_18(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_18(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_17(uParam0[iVar02], 8);
	}
	Function_17(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_33(StackVal);
	if (bParam3)
	{
		Function_13(uParam0, uParam1, uParam2, 0);
	}
}

int Function_33(bool bParam0) //Position: 0x1397 / 5015
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_34() //Position: 0x1431 / 5169
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_35() //Position: 0x1446 / 5190
{
	var uVar0;
	
	GET_POSITION(Global_34573, &uVar0);
	switch (iLocal_190)
	{
		case 0x00000000:
			if (Function_124(&bLocal_173))
			{
				if (Function_123(&bLocal_163, &iLocal_165))
				{
					CREATE_GRINGO_IN_LAYOUT(bLocal_158, Function_122(), "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", *(&Local_0 + 68), *(&Local_0 + 68 + 12));
					DECOR_SET_INT(Global_34573, "SOL_GotPop", false);
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_121("SOL_Help_MissionExplained", 0x41200000, 1, 0, 2, 1, 0);
					Function_119(&bLocal_158, &uLocal_159, &uLocal_164);
					iLocal_190 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_20(iLocal_165, 2))
			{
				Function_52(&bLocal_163, &iLocal_165);
			}
			if (!Function_20(iLocal_165, 2))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_20))
				{
					if (!Function_20(iLocal_165, 8))
					{
						Function_51(&iLocal_165, 8);
						Function_47();
					}
				}
			}
			if (SQUAD_IS_VALID(bLocal_163))
			{
				if (SQUAD_GET_SIZE(bLocal_163) != 0)
				{
					Function_39(bLocal_163, Global_34573, &iLocal_170, &uLocal_167, &uLocal_166, 20.0f, 8.0f, 20.0f, 1);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_36(&bLocal_187) < 7.0f)
			{
				Function_24();
			}
			break;
	}
	return;
}

float Function_36(bool bParam0) //Position: 0x15AA / 5546
{
	if (Function_38(bParam0))
	{
		if (Function_37(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_37(int iParam0) //Position: 0x1672 / 5746
{
	return Function_20(*iParam0, 2);
}

bool Function_38(bool bParam0) //Position: 0x167F / 5759
{
	return Function_20(*bParam0, 1);
}

void Function_39(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7, bool bParam8) //Position: 0x168C / 5772
{
	bool bVar0;
	bool bVar1;
	
	(*uParam2)[0] = (*uParam2)[0];
	if (!Function_38(uParam3))
	{
		*uParam4 = RAND_FLOAT_RANGE(fParam6, bParam7);
		if (!bParam8)
		{
			Function_46(uParam3);
			return;
		}
		Function_45(uParam3, 60.0f);
	}
	if (Function_36(uParam3) <= *uParam4 && *uParam2 == 0)
	{
		bVar0 = RAND_INT_RANGE(false, *uParam2);
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar1 = Function_44(bParam1, bParam0);
		}
		else if (SQUAD_GET_SIZE(bParam0) != 0)
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, false);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			return;
		}
		if (IS_ACTOR_VALID(bParam1))
		{
			if (Function_43(bVar1, bParam1) <= fParam5)
			{
				SAY_SINGLE_LINE_CONTEXT(bVar1, bVar0, bParam1, 1, 0, 2, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(bVar1, bVar0, bParam1, 1, 0, 1, 4294967295, 4294967295, 0, 1);
			}
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(bVar1, bVar0, false, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		Function_40(uParam3);
		*uParam4 = RAND_FLOAT_RANGE(fParam6, bParam7);
	}
}

void Function_40(bool bParam0) //Position: 0x1771 / 6001
{
	Function_41(bParam0, 0.0f);
	return;
}

void Function_41(bool bParam0, float fParam1) //Position: 0x177D / 6013
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_51(bParam0, 1);
	Function_42(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x179E / 6046
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

float Function_43(bool bParam0, bool bParam1) //Position: 0x17B1 / 6065
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

var Function_44(bool bParam0, bool bParam1) //Position: 0x18A2 / 6306
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_WARNING("Invalid test object passed to GET_CLOSEST_SQUAD_MEMBER_TO_OBJECT");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_OBJECT");
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar4);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar7);
		if (VDIST(vVar4, vVar7) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(vVar4, vVar7);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

void Function_45(bool bParam0, float fParam1) //Position: 0x1A18 / 6680
{
	if (!Function_38(bParam0))
	{
		Function_41(bParam0, fParam1);
	}
	return;
}

void Function_46(bool bParam0) //Position: 0x1A2E / 6702
{
	if (!Function_38(bParam0))
	{
		Function_41(bParam0, 0.0f);
	}
	return;
}

void Function_47() //Position: 0x1A43 / 6723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "SoloFolly_NoAlertGang_v1_AA", "SoloFolly_NoAlertGang_v1_AA", 0, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SoloFolly_NoAlertGang_v1_AB", "SoloFolly_NoAlertGang_v1_AB", 0, 3, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SoloFolly_NoAlertGang_v1_AC", "SoloFolly_NoAlertGang_v1_AC", 0, 3, 1, 0, 1);
		Function_48(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_48(int iParam0) //Position: 0x1B2C / 6956
{
	Function_49(0, Global_34573, iParam0, 0);
	Function_49(1, bLocal_162, iParam0, 0);
	return;
}

void Function_49(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1B45 / 6981
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_20(uParam2, Function_50(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_50(bool bParam0) //Position: 0x1B6A / 7018
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_51(int iParam0, int iParam1) //Position: 0x1B76 / 7030
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_52(var uParam0, int iParam1) //Position: 0x1B85 / 7045
{
	bool bVar0;
	var uVar1;
	var uVar4;
	bool bVar7;
	
	bVar0 = Function_44(Global_34573, *uParam0);
	GET_POSITION(Global_34573, &uVar1);
	GET_POSITION(bVar0, &uVar4);
	if ((Function_117(Global_34573, *uParam0, 0, 0, 1, 15.0f) && !Global_28178 != 4) || Function_117(Global_34573, *uParam0, 1, 0, 0, 15.0f))
	{
		if (!Function_116(Global_30735) != 2)
		{
			Function_65(Global_30735, 1);
			Global_3385 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
		}
		Function_51(iParam1, 2);
		bVar7 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy");
		if (IS_ACTOR_VALID(bVar7))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "RunningCutscene"))
			{
				if (!iLocal_191)
				{
					TASK_CLEAR(bVar7);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar7, -1.0f);
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar7, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_IntroGuyStayWithin"), 4, 1);
					Function_64(bVar7, *uParam0);
					Function_63(bVar7, *uParam0, 4);
					AI_STOP_IGNORING_ACTORS();
					DECOR_SET_BOOL(Global_34573, "DestroyGateway", true);
					iLocal_191 = 1;
				}
			}
		}
		else
		{
			LOG_ERROR("COULD NOT FIND ACTOR aIntroGuy");
		}
		if (!DECOR_CHECK_EXIST(Global_34573, "PrintObjThruCut"))
		{
			if (!Function_20(*iParam1, 64))
			{
				Function_51(iParam1, 64);
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				Function_61("sol_FTE_MainObjText", 0x40f00000, 1, 2, 0, 0, 0, 0);
				CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("SOLJournalID"), "sol_FTE_MainObjText", 0, 0, false);
				APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("SOLJournalID"), 0);
				Function_60(*uParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(Global_34573, "BlippedSquad", true);
			}
		}
		Function_59(*uParam0);
		SQUAD_GOALS_CLEAR(*uParam0);
		Function_58(*uParam0, Global_34573, 1);
		Function_57(*uParam0, Global_34573);
		Function_56(*uParam0, Global_34573, 4);
		Function_55(*uParam0, 1);
		Function_58(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy"), 1);
		Function_57(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy"));
		Function_56(*uParam0, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGuy"), 4);
		Function_54(*uParam0, 38, 0.2f);
		Function_54(*uParam0, 37, 8.0f);
		if (IS_ACTOR_VALID(bVar0))
		{
			SAY_SINGLE_LINE_CONTEXT(bVar0, 93, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		if (Function_20(*iParam1, 4))
		{
			DECOR_REMOVE(Global_34573, "SOL_FTE_EngagedAA");
		}
		if (!Function_53(*uParam0, 0))
		{
			Function_60(*uParam0, 322, 4294967295, 0.0f, 50.0f, 0x3f800000, 2048, 0);
		}
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "SOL_aggroInWagon") && Global_28178 != 4)
	{
		DECOR_REMOVE(Global_34573, "SOL_aggroInWagon");
		if (IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGateway")))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_LAYOUT(FIND_NAMED_LAYOUT("SOL_FTE_Layout"), "IntroGateway"));
		}
		if (!Function_116(Global_30735) != 2)
		{
			Function_65(Global_30735, 1);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Global_3385 = 1;
		}
		Function_51(iParam1, 2);
		Function_59(*uParam0);
		SQUAD_GOALS_CLEAR(*uParam0);
		Function_58(*uParam0, Global_34573, 1);
		Function_57(*uParam0, Global_34573);
		Function_56(*uParam0, Global_34573, 4);
		Function_55(*uParam0, 1);
		Function_54(*uParam0, 38, 0.2f);
		Function_54(*uParam0, 37, 8.0f);
		if (IS_ACTOR_VALID(bVar0))
		{
			SAY_SINGLE_LINE_CONTEXT(bVar0, 93, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		if (Function_20(*iParam1, 4))
		{
			DECOR_REMOVE(Global_34573, "SOL_FTE_EngagedAA");
		}
		if (!Function_53(*uParam0, 0))
		{
			Function_60(*uParam0, 322, 4294967295, 0.0f, 50.0f, 0x3f800000, 2048, 0);
		}
	}
	return;
}

bool Function_53(bool bParam0, bool bParam1) //Position: 0x204F / 8271
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_54(bool bParam0, int iParam1, bool bParam2) //Position: 0x20A5 / 8357
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_55(bool bParam0, int iParam1) //Position: 0x20EF / 8431
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_56(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2130 / 8496
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x2175 / 8565
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_58(bool bParam0, bool bParam1, bool bParam2) //Position: 0x21C7 / 8647
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_59(bool bParam0) //Position: 0x2232 / 8754
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_60(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x2264 / 8804
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_61(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x234E / 9038
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
			Var0 = { StackVal, StackVal, StackVal, Function_62(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_62(int iParam0) //Position: 0x23D3 / 9171
{
	char* cVar0[16];
	
	if (!Function_19())
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

void Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2412 / 9234
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x245C / 9308
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_IDENTIFY(bParam0, bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_65(int iParam0, int iParam1) //Position: 0x2492 / 9362
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_114(iParam0))
	{
		Function_112();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_111(iParam0);
	if (StackVal != 2)
	{
		Function_109("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_69(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_67(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_62(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<24> Function_66(char* cParam0) //Position: 0x25A2 / 9634
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

var Function_67(int iParam0) //Position: 0x27F8 / 10232
{
	if (!Function_68(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_68(int iParam0) //Position: 0x2818 / 10264
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_69(bool bParam0) //Position: 0x282F / 10287
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_99();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_70();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_42(&Global_63095, 1);
		Function_42(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_70() //Position: 0x2880 / 10368
{
	Function_97();
	Function_96();
	Function_96();
	Function_95();
	Function_95();
	Function_94();
	Function_94();
	Function_78(0);
	Function_78(0);
	if (!Function_194())
	{
		Function_75();
		Function_74();
		Function_73();
		Function_72();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_71();
	return;
}

void Function_71() //Position: 0x28D2 / 10450
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

void Function_72() //Position: 0x29D8 / 10712
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

void Function_73() //Position: 0x2A0B / 10763
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
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_74() //Position: 0x2B99 / 11161
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
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_75() //Position: 0x2D4D / 11597
{
	Function_76(&Global_28260, 1, 0);
	return;
}

void Function_76(int iParam0, bool bParam1, var uParam2) //Position: 0x2D5B / 11611
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
	
	bVar0 = Function_77();
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

var Function_77() //Position: 0x2F4C / 12108
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_78(int iParam0) //Position: 0x2F61 / 12129
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
					iVar2 = ((Function_93((50 + iVar4)) + Function_93((183 + iVar4))) + Function_93((90 + iVar4)));
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
	Function_79(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_79(int iParam0, bool bParam1, bool bParam2) //Position: 0x3007 / 12295
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
		Function_92(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_91(iParam0);
	if (bParam2)
	{
		Function_80(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x32A2 / 12962
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_90(390))), 32);
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
					bVar19 = (Function_89(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_89(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_87(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_84(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_82(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_81(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_122(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_81(int iParam0) //Position: 0x38CF / 14543
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_82(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x38E0 / 14560
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_83("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_83(char* cParam0, bool bParam1) //Position: 0x39D5 / 14805
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_84(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x39EE / 14830
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_86(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_85(Function_86(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_85(int iParam0, int iParam1) //Position: 0x3A53 / 14931
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_86(int iParam0, bool bParam1) //Position: 0x3A65 / 14949
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_87(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3A77 / 14967
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
	if (((Function_88(iParam0) != 19 || Function_88(iParam0) != 17) || Function_88(iParam0) != 10) || Function_88(iParam0) != 9)
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

int Function_88(int iParam0) //Position: 0x3BA7 / 15271
{
	return Global_35278[iParam020].f_48;
}

float Function_89(int iParam0) //Position: 0x3BB6 / 15286
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_90(int iParam0) //Position: 0x3BEF / 15343
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_91(int iParam0) //Position: 0x3C2C / 15404
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

int Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x3DC6 / 15814
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

int Function_93(bool bParam0) //Position: 0x400B / 16395
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_94() //Position: 0x404C / 16460
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
		iVar2 = ((Function_93((50 + iVar3) + 15) + Function_93((183 + iVar3) + 15)) + Function_93((90 + iVar3) + 15));
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
	Function_79(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_95() //Position: 0x40D5 / 16597
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
			iVar2 = ((Function_93((50 + iVar3) + 8) + Function_93((183 + iVar3) + 8)) + Function_93((90 + iVar3) + 8));
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
	Function_79(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_96() //Position: 0x416C / 16748
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
		iVar2 = ((Function_93((50 + iVar3)) + Function_93((183 + iVar3))) + Function_93((90 + iVar3)));
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
	Function_79(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_97() //Position: 0x41EB / 16875
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_98(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_79(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_98(int iParam0, bool bParam1, int iParam2) //Position: 0x4224 / 16932
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
	Function_92(iParam0, bParam1, 1);
	Function_91(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_80(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_99() //Position: 0x442E / 17454
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_19())
	{
		Function_106(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_106(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_101(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_101(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_100(StackVal, StackVal, vVar0))
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

bool Function_100(vector3 vParam0) //Position: 0x44E9 / 17641
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_101(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4501 / 17665
{
	int iVar0;
	
	iVar0 = Function_104(uParam2, uParam3);
	if (Function_103(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_51(&Global_63095, 1);
			Function_42(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_51(&Global_63095, 2);
			Function_42(&Global_63095, 1);
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
		Function_51(&Global_63095, 2);
		Function_42(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_102();
	return StackVal, StackVal, Function_102();
}

vector3 Function_102() //Position: 0x45E8 / 17896
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_103(int iParam0) //Position: 0x45F1 / 17905
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_104(bool bParam0, bool bParam1) //Position: 0x4607 / 17927
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
				fVar2 = Function_105(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_105(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_103(bVar0) && !bParam1)
	{
		bVar0 = Function_104(bParam0, 1);
	}
	return bVar0;
}

float Function_105(vector3 vParam0, vector3 vParam3) //Position: 0x46CE / 18126
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_106(var uParam0, int iParam1) //Position: 0x46EB / 18155
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_108(Global_34573, &vVar4);
	if (!Function_107(Global_30640[0]))
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
	if (!Function_107(Global_30640[2]))
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
	if (!Function_107(Global_30640[1]))
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
	if (!Function_107(Global_30658[1]))
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
	if (!Function_107(Global_30658[3]))
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
	if (!Function_107(Global_30658[2]))
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
	if (!Function_107(Global_30658[4]))
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
	if (!Function_107(Global_30668[0]))
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
	if (!Function_107(Global_30668[1]))
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
	if (!Function_107(Global_30668[2]))
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
	if (!Function_107(Global_30679[0]))
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
	if (!Function_107(Global_30685[0]))
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
	if (!Function_107(Global_30685[1]))
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
	if (!Function_107(Global_30685[2]))
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
	if (!Function_107(Global_30693[0]))
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
	if (!Function_107(Global_30693[1]))
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
	if (!Function_107(Global_30693[2]))
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
	if (!Function_107(Global_30707[2]))
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
	if (!Function_107(Global_30707[3]))
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
	if (!Function_107(Global_30707[0]))
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
	if (!Function_107(Global_30717[0]))
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
	if (!Function_107(Global_30723[2]))
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
	if (!Function_107(Global_30723[1]))
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
	if (!Function_107(Global_30723[0]))
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
	if (!Function_107(Global_30679[1]))
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
	if (!Function_107(Global_30707[1]))
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
	Function_51(&Global_63095, 2);
	Function_42(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_100(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_107(int iParam0) //Position: 0x4F10 / 20240
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_20(iVar0, 0x1000000) || Function_20(iVar0, 0x2000000)) || Function_20(iVar0, 0x4000000)) || !Function_20(iVar0, 0x10000000));
}

void Function_108(bool bParam0, bool bParam1) //Position: 0x4F4B / 20299
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_109(char* cParam0, bool bParam1) //Position: 0x4F58 / 20312
{
	struct<4> Var0;
	
	if (!Function_114(bParam1))
	{
		return;
	}
	switch (Function_111(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_110(Function_67(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_111(bParam1), Function_67(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_111(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_110(int iParam0) //Position: 0x507C / 20604
{
	char* cVar0[16];
	
	if (!Function_19())
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

int Function_111(bool bParam0) //Position: 0x50B6 / 20662
{
	if (!Function_68(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_112() //Position: 0x50D1 / 20689
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
			Function_113(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_113(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5318 / 21272
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_114(int iParam0) //Position: 0x5341 / 21313
{
	if (!Function_68(iParam0))
	{
		return 0;
	}
	if (!Function_115(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_115(int iParam0) //Position: 0x5365 / 21349
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_116(bool bParam0) //Position: 0x537A / 21370
{
	if (!Function_114(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_117(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x5394 / 21396
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_118(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_118(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x53F4 / 21492
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_119(var uParam0, var uParam1, int iParam2) //Position: 0x54E1 / 21729
{
	*iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "BackUpHorseSquad"));
	(*uParam1)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Horse01", 976, *(&Local_0 + 96), *(&Local_0 + 96 + 12));
	SQUAD_JOIN((*uParam1)[0], *iParam2);
	TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*uParam1)[0], 3);
	Function_120((*uParam1)[0], 0, 1, 1, 1, 0, 1);
	(*uParam1)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Horse02", 977, *(&Local_0 + 124), *(&Local_0 + 124 + 12));
	SQUAD_JOIN((*uParam1)[1], *iParam2);
	TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*uParam1)[1], 3);
	Function_120((*uParam1)[1], 0, 1, 1, 1, 0, 1);
	return;
}

void Function_120(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x55AE / 21934
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

void Function_121(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x55EB / 21995
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_62(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

var Function_122() //Position: 0x5666 / 22118
{
	int iVar0;
	
	return iVar0;
}

bool Function_123(var uParam0, int iParam1) //Position: 0x566E / 22126
{
	if (Function_20(*iParam1, 4))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "SOL_FTE_SquadReady"))
		{
			Function_59(*uParam0);
			SQUAD_GOALS_CLEAR(*uParam0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(*uParam0, 0);
			DECOR_REMOVE(Global_34573, "SOL_FTE_SquadReady");
			return 1;
		}
		return 0;
	}
	Function_59(*uParam0);
	SQUAD_GOALS_CLEAR(*uParam0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(*uParam0, 0);
	DECOR_REMOVE(Global_34573, "SOL_FTE_SquadReady");
	return 1;
}

bool Function_124(bool bParam0) //Position: 0x5707 / 22279
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_128();
	iVar1 = 0;
	if (!Function_10(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_127(bParam0[iVar03], 8);
		}
		else if (Function_126())
		{
			iVar1 = 1;
			Function_127(bParam0[iVar03], 8);
		}
		Function_127(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_10(bParam0[iVar03], 4))
		{
			if (!Function_10(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_10(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_10(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_127(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_10(bParam0[iVar03], 4))
		{
			if (!Function_10(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_127(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_127(bParam0[iVar03], 2);
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
	Function_125();
	return 1;
}

void Function_125() //Position: 0x5A82 / 23170
{
	if (!Function_187(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_126() //Position: 0x5AC2 / 23234
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

void Function_127(var uParam0, int iParam1) //Position: 0x5AED / 23277
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_128() //Position: 0x5AFE / 23294
{
	if (!Function_187(128))
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

int Function_129() //Position: 0x5B40 / 23360
{
	int iVar0;
	
	if ((!Function_149(Global_76846, 16) && !Global_34165.f_36) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_144(Global_34573, 16, 1, 0);
	}
	AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_02", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	bLocal_186 = CREATE_JOURNAL_ENTRY("SOLJournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_186, 0);
	bLocal_158 = CREATE_LAYOUT("SOL_AA_Layout");
	bLocal_163 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_158, "SOL_AA_Squad"));
	Function_140(&bLocal_163, &bLocal_162);
	iLocal_165 = 0;
	*(&iVar0 + 20) = 1;
	Function_102();
	Function_102();
	Function_135(StackVal, StackVal, StackVal, StackVal, 4096, 1, GET_ASSET_ID("$/content/Ambient/Regional/SOL/SOL_FirstTimeEvent", 4), Function_102(), Function_102(), 0, 0, 0, Global_30658[2], 0, 0, 0, &iVar0, 0, 1, 0x40a00000, 4294967295, 0, 0);
	Function_51(&iLocal_165, 4);
	Function_133(32768);
	Function_131(&bLocal_173, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_131(&bLocal_173, "action_areas", 10, 0);
	Function_130(&bLocal_173, 976, 3, 1);
	Function_130(&bLocal_173, 977, 3, 1);
	iLocal_170[0] = 24;
	iLocal_170[1] = 60;
	return 1;
}

var Function_130(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5CDC / 23772
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_10(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_127(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_127(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_131(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5DAC / 23980
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_132(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_127(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_132(var uParam0, int iParam1, int iParam2) //Position: 0x5DE4 / 24036
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_127(uParam0[iVar03], 4);
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

void Function_133(int iParam0) //Position: 0x5EA8 / 24232
{
	Function_134(&Global_28842, iParam0);
	return;
}

void Function_134(var uParam0, bool bParam1) //Position: 0x5EB6 / 24246
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

int Function_135(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x5ED9 / 24281
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_139(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_138(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_137(&(Global_25267[iVar058]), 1);
					Function_136(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_136(var uParam0, int iParam1) //Position: 0x601B / 24603
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x6035 / 24629
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_138(int iParam0, int iParam1) //Position: 0x6046 / 24646
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_139(var uParam0, int iParam1) //Position: 0x61B2 / 25010
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_140(var uParam0, bool bParam1) //Position: 0x61CF / 25039
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		bVar1 = Function_141(&Global_6490, &Global_7474, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_ACTOR_ENUM(bVar1) == 493)
			{
				*bParam1 = bVar1;
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
			GIVE_WEAPON_TO_ACTOR(bVar1, 40, 0, 1, 1);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, 1);
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_12, 4, 1);
			MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
			SQUAD_JOIN(bVar1, *uParam0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*uParam0, 690856);
		}
		iVar0++;
	}
	return;
}

var Function_141(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x6248 / 25160
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_18(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_18(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_18(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_16(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_143(StackVal, StackVal, StackVal, Global_6289, Function_122(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_18(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_16(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_16(uParam0[iVar02], 1);
	Function_142(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_142(bool bParam0, bool bParam1) //Position: 0x63DE / 25566
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_143(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x6480 / 25728
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_122(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_144(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x6599 / 26009
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_146(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_145(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_145(char* cParam0, int iParam1) //Position: 0x6605 / 26117
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

bool Function_146(bool bParam0, var uParam1, int iParam2) //Position: 0x663C / 26172
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
		if (Function_148(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_147(uVar0))
		{
			case 0x00000002:
				if (!Function_149(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_147(char* cParam0) //Position: 0x66B4 / 26292
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

int Function_148(int iParam0) //Position: 0x6755 / 26453
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_42(&iVar1, 2147483648);
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

bool Function_149(var uParam0, int iParam1) //Position: 0x6792 / 26514
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0, bool bParam1) //Position: 0x67A5 / 26533
{
	int iVar0;
	
	iVar0 = Function_151(iParam0);
	if (!Function_68(iVar0))
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

var Function_151(int iParam0) //Position: 0x67E2 / 26594
{
	if (!Function_152(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_152(int iParam0) //Position: 0x67FC / 26620
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_153() //Position: 0x6812 / 26642
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_193)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_194) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_194);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_155(Global_34573, bVar1) > 100.0f)
			{
				Function_154(bVar1);
				vVar3 = { StackVal, StackVal, Function_154(bVar1) };
				if (!Function_20(iLocal_192, bVar2))
				{
					Function_51(&iLocal_192, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1.75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_42(&iLocal_192, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

vector3 Function_154(bool bParam0) //Position: 0x6895 / 26773
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_155(bool bParam0, bool bParam1) //Position: 0x68BC / 26812
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_156(bParam0);
			vVar0 = { StackVal, StackVal, Function_156(bParam0) };
			Function_156(bParam1);
			vVar3 = { StackVal, StackVal, Function_156(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_156(bool bParam0) //Position: 0x6957 / 26967
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

int Function_157(int iParam0) //Position: 0x69C3 / 27075
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_189(iParam0, 2048))
	{
		return 0;
	}
	if (Function_194() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_194 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_193 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_154(bVar1);
		vVar2 = { StackVal, StackVal, Function_154(bVar1) };
		Function_160(bVar1);
		vVar5 = { StackVal, StackVal, Function_160(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_158("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_194);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

struct<32> Function_158(bool bParam0) //Position: 0x6AE4 / 27364
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_159("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_159(char* cParam0, char* cParam1, char* cParam2) //Position: 0x6B4E / 27470
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

vector3 Function_160(bool bParam0) //Position: 0x6B6D / 27501
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_161(char* cParam0, var uParam1, var uParam2, var uParam3, char* cParam4, var uParam5) //Position: 0x6B94 / 27540
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = uParam1;
			Global_63406[iVar021].f_36 = uParam2;
			Global_63406[iVar021].f_40 = uParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_162() //Position: 0x6C13 / 27667
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		Global_63406[iVar021].f_40 = 0;
		strcpy(&Global_63406[iVar021] + 48, "", 32);
		Global_63406[iVar021].f_36 = 1.0f;
		Global_63406[iVar021].f_32 = "";
		strcpy(&(Global_63406[iVar021]), "", 32);
		Global_63406[iVar021].f_44 = 0;
		Global_63406[iVar021].f_80 = 0;
		iVar0++;
	}
	return;
}

bool Function_163(int iParam0) //Position: 0x6C7C / 27772
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_189(&(Global_29008[iParam0]), 2048);
}

void Function_164(bool bParam0, float fParam1) //Position: 0x6C9A / 27802
{
	if (!Function_187(128))
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

void Function_165(bool bParam0, bool bParam1) //Position: 0x6CD8 / 27864
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
		Function_166(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_194())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_166(var uParam0, int iParam1) //Position: 0x6DD2 / 28114
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_167(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x6DDF / 28127
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
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_168();
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

void Function_168() //Position: 0x6EC3 / 28355
{
	int iVar0;
	
	Global_26960 = Function_169(StackVal);
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

int Function_169(int iParam0) //Position: 0x6F11 / 28433
{
	if (!Function_170(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_170(int iParam0) //Position: 0x6F29 / 28457
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_171(int iParam0) //Position: 0x6F3E / 28478
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_172(int iParam0, var uParam1, bool bParam2) //Position: 0x6F51 / 28497
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_189(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_150(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_194())
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

void Function_173(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7011 / 28689
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
		Function_174();
	}
	if (bParam5)
	{
		Function_25(1048576);
	}
}

void Function_174() //Position: 0x7124 / 28964
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_25(16384);
	}
	return;
}

void Function_175(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x7140 / 28992
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_187(2))
	{
		return;
	}
	if (Function_189(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_176(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_1(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_196(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x71F2 / 29170
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_189(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(iParam0, 2))
	{
		return 1;
	}
	if (Function_18(iParam0, 4))
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
		uParam1->f_8 = Function_143(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_100(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(iParam0, 4);
	}
	Function_177(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_177(bool bParam0, int iParam1) //Position: 0x735D / 29533
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_100(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_100(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_100(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_100(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_100(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_100(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_178(int iParam0, var uParam1, bool bParam2) //Position: 0x7499 / 29849
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

void Function_179(int iParam0, var uParam1, vector3 vParam2) //Position: 0x74F4 / 29940
{
	if (Function_100(StackVal, StackVal, vParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_186(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_185(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_184(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_183(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_182(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_180(StackVal, StackVal, iParam0, uParam1, vParam2);
	}
}

void Function_180(var uParam0, var uParam1, vector3 vParam2) //Position: 0x759E / 30110
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_181(vector3 vParam0, vector3 vParam3) //Position: 0x7604 / 30212
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_182(var uParam0, var uParam1, vector3 vParam2) //Position: 0x7631 / 30257
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_183(var uParam0, var uParam1, vector3 vParam2) //Position: 0x7699 / 30361
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_184(var uParam0, var uParam1, vector3 vParam2) //Position: 0x7703 / 30467
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_185(var uParam0, var uParam1, vector3 vParam2) //Position: 0x7768 / 30568
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_186(var uParam0, var uParam1, vector3 vParam2) //Position: 0x77D0 / 30672
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_181(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_187(int iParam0) //Position: 0x7833 / 30771
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_188(int iParam0) //Position: 0x784F / 30799
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_189(&(Global_29008[iParam0]), 4);
}

bool Function_189(var uParam0, int iParam1) //Position: 0x786B / 30827
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_190(var uParam0, var uParam1, int iParam2) //Position: 0x7887 / 30855
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_194())
	{
		return 1;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_189(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
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

bool Function_191() //Position: 0x7968 / 31080
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_192() //Position: 0x7977 / 31095
{
	if (Function_194())
	{
		return (Function_193() != 1 || Function_193() != 0);
	}
	return 0;
}

int Function_193() //Position: 0x7990 / 31120
{
	return Global_79349.f_16;
}

bool Function_194() //Position: 0x799C / 31132
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_195(var uParam0, var uParam1, int iParam2) //Position: 0x79A5 / 31141
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_194())
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_189(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_196(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_16(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_16(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0x7A8D / 31373
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_197() //Position: 0x7A9C / 31388
{
	var uVar0;
	
	Function_198(3, 3);
	uVar0 = uVar0;
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_131(&Local_54 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_124(&Local_54 + 4))
	{
		return 0;
	}
	Local_54 = FIND_NAMED_LAYOUT("SolomonsFolly_layout");
	if (!IS_LAYOUTREF_VALID(Local_54))
	{
		Local_54 = CREATE_LAYOUT("SolomonsFolly_layout");
	}
	Local_54.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend", "horse_tend", -3886.287f, 8.031368f, 3666.087f, 0.0f, 24.50254f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_236), 0);
	Local_54.f_240 = CREATE_GRINGO_IN_LAYOUT(Local_54, "horse_tend1", "horse_tend", -3879.951f, 8.031368f, 3664.002f, 0.0f, -21.59647f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_240), 0);
	Local_54.f_244 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lean_rail_nospawn", "rand_idle_stand", -3880.666f, 8.0314f, 3650.173f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_244), 0);
	Local_54.f_248 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lean_rail_nospawn1", "lean_rail_nospawn", -3871.544f, 8.031368f, 3644.944f, 0.0f, -115.9268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_248), 0);
	Local_54.f_252 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lean_rail_nospawn2", "sit_ground_smoke", -3877.937f, 8.031368f, 3649.749f, 0.0f, -160.7627f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_252), 0);
	Local_54.f_256 = CREATE_GRINGO_IN_LAYOUT(Local_54, "lean_rail_nospawn3", "Rand_Idle_NearWall", -3894.272f, 8.031368f, 3657.718f, 0.0f, 90.4f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_256), 0);
	Local_54.f_260 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Pee_nospawn", "Pee_nospawn", -3891.185f, 8.248527f, 3642.67f, 0.0f, 103.8443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_260), 0);
	Local_54.f_264 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall_nospawn", "Rand_Idle_NearWall_nospawn", -3863.142f, 8.031205f, 3667.236f, 0.0f, 89.53924f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_264), 0);
	Local_54.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall_nospawn1", "Rand_Idle_NearWall_nospawn", -3888.794f, 8.050787f, 3659.307f, 0.0f, -0.07773406f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_268), 0);
	Local_54.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall_nospawn2", "Rand_Idle_NearWall_nospawn", -3883.159f, 8.0314f, 3655.339f, 0.0f, -89.91225f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_272), 0);
	Local_54.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_NearWall_nospawn3", "Rand_Idle_NearWall_nospawn", -3894.356f, 8.031368f, 3651.616f, 0.0f, 90.20004f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_276), 0);
	Local_54.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", -3860.98f, 8.108f, 3666.415f, 0.0f, -37.33218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_280), 0);
	Local_54.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", -3859.292f, 8.108f, 3666.88f, 0.0f, 44.87476f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_284), 0);
	Local_54.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground_nospawn2", "Rand_Idle_Sit_Ground_nospawn", -3860.21f, 8.108f, 3665.34f, 0.0f, 195.6956f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_288), 0);
	Local_54.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground_nospawn3", "Rand_Idle_Sit_Ground_nospawn", -3884.378f, 8.0314f, 3641.4f, 0.0f, -80.13517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_292), 0);
	Local_54.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground_nospawn4", "Rand_Idle_Sit_Ground_nospawn", -3882.454f, 8.0314f, 3642.967f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_296), 0);
	Local_54.f_300 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Rand_Idle_Sit_Ground_nospawn5", "Rand_Idle_Sit_Ground_nospawn", -3883.799f, 8.031368f, 3640.234f, 0.0f, -128.7982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_300), 0);
	Local_54.f_304 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", -3881.514f, 8.0314f, 3652.284f, 0.0f, -43.41955f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_304), 0);
	Local_54.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", -3882.638f, 8.10568f, 3647.491f, 0.0f, -63.84495f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_308), 0);
	Local_54.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand_nospawn2", "rand_idle_stand_nospawn", -3892.518f, 8.031368f, 3654.296f, 0.0f, 91.79656f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_312), 0);
	Local_54.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_54, "rand_idle_stand_nospawn3", "rand_idle_stand_nospawn", -3858.053f, 8.037922f, 3667.973f, 0.0f, 235.9549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_316), 0);
	Local_54.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_fence_low", "rand_idle_stand", -3872.869f, 8.031368f, 3647.877f, 0.0f, 197.6196f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_320), 0);
	Local_54.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_fence_low1", "sit_fence_low", -3877.933f, 8.0314f, 3648.887f, 0.0f, 198.479f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_324), 0);
	Local_54.f_328 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_fence_low2", "stand_lookdistance_w_any", -3870.753f, 8.031368f, 3643.591f, 0.0f, 246.2744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_328), 0);
	Local_54.f_332 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sit_fence_low3", "stand_drunk_rowdydrink", -3879.691f, 8.043528f, 3639.626f, 0.0f, 496.633f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_332), 0);
	Local_54.f_336 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Sit_Ground_Smoke_Pipe", "Sit_Ground_Smoke_Pipe", -3880.869f, 8.031368f, 3641.252f, 0.0f, 89.00776f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_336), 0);
	Local_54.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sleeping_scripted", "sleeping_scripted", -3861.427f, 5.3052f, 3665.194f, 0.0f, -171.3626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_340), 0);
	Local_54.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sleeping_scripted1", "sleeping_scripted", -3859.787f, 5.3052f, 3665.354f, 0.0f, -160.2201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_344), 0);
	Local_54.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sleeping_wall_scripted", "sleeping_wall_scripted", -3858.218f, 5.1805f, 3666.486f, 0.0f, 90.45209f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_348), 0);
	Local_54.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sleeping_wall_scripted1", "sleeping_wall_scripted", -3859.963f, 8.108f, 3663.768f, 0.0f, 179.7243f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_352), 0);
	Local_54.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_54, "sleeping_wall_scripted2", "sleeping_wall_scripted", -3858.312f, 8.108f, 3666.258f, 0.0f, 90.50348f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_356), 0);
	Local_54.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand_nospawn", "smoking_stand_nospawn", -3861.364f, 8.108f, 3665.483f, 0.0f, -115.5969f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_360), 0);
	Local_54.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand_nospawn1", "smoking_stand_nospawn", -3856.394f, 8.031269f, 3668.523f, 0.0f, -97.2945f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_364), 0);
	Local_54.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand_nospawn2", "smoking_stand_nospawn", -3860.003f, 8.065629f, 3677.832f, 0.0f, 179.24f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_368), 0);
	Local_54.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_54, "smoking_stand_nospawn3", "smoking_stand_nospawn", -3882.023f, 8.031368f, 3653.764f, 0.0f, -114.9832f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_372), 0);
	Local_54.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -3881.101f, 8.0314f, 3642.451f, 0.0f, 51.00673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_376), 0);
	Local_54.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -3882.953f, 8.0314f, 3639.743f, 0.0f, 204.0172f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_380), 0);
	Local_54.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", -3881.05f, 8.0314f, 3640.238f, 0.0f, 120.6179f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_384), 0);
	Local_54.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", -3883.583f, 8.031368f, 3642.598f, 0.0f, -30.45416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_388), 0);
	Local_54.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_guntricks_e_any", "stand_guntricks_e_any", -3881.895f, 8.094611f, 3639.77f, 0.0f, -202.8046f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_392), 0);
	Local_54.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_guntricks_e_any1", "stand_guntricks_e_any", -3878.354f, 8.0314f, 3651.71f, 0.0f, 65.16217f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_54.f_396), 0);
	Local_54.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_54, "Locked_Footlocker", "Locked_Footlocker", -3857.969f, 5.217027f, 3667.865f, 0.0f, 90.0f, 0.0f);
	DECOR_SET_BOOL(Local_54.f_400, "scrap", true);
	Local_54.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3878.235f, 8.010163f, 3644f, 0.0f, 19.31323f, 0.0f);
	Local_54.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3852.0f, 8.083919f, 3649.17f, 0.0f, 0.0f, 0.0f);
	Local_54.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_54, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3854.197f, 8.306006f, 3667.999f, 0.0f, 0.0f, 0.0f);
	return 1;
}

void Function_198(int iParam0, int iParam1) //Position: 0x907B / 36987
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

bool Function_199() //Position: 0x90C4 / 37060
{
	var uVar0;
	
	Function_198(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("SolomonsFolly_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("SolomonsFolly_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_IntroGateway", 2, -3849.616f, 7.85091f, 3691.068f, 0.0f, 1.89674f, 0.0f, 4.0f, 4.354144f, 5.0f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_IntroGuyStayWithin", 2, -3863.048f, 8.031288f, 3673.791f, 0.0f, 0.0f, 0.0f, 13.24575f, 15.28493f, 22.47986f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_StayWithin", 3, -3872.699f, 8.016368f, 3654.726f, 0.0f, -6.517303f, 0.0f, 27.61474f, 24.60358f, 24.60358f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_checkToTeleport", 2, -3848.638f, 8.151739f, 3690.908f, 0.0f, 9.246823f, 0.0f, 1.606799f, 2.792696f, 1.669583f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BackStoryAudio", 3, -3872.787f, -4.179912f, 3655.062f, 0.0f, 20.0f, 0.0f, 52.44255f, 52.44255f, 52.44255f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_checkToTeleport1", 2, -3848.515f, 8.151739f, 3690.888f, 0.0f, 9.246823f, 0.0f, 1.088144f, 2.792696f, 1.151851f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_CheckPlayerHorse", 2, -3852f, 7.322431f, 3692.225f, 0.0f, 9.246823f, 0.0f, 13.58006f, 8.668309f, 7.806126f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TaskFloyd", 3, -3872.699f, 8.016368f, 3654.726f, 0.0f, -6.517303f, 0.0f, 45.42352f, 40.47045f, 40.47045f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_FloydGoToSpot", 2, -3804.0f, 11.04313f, 3839.724f, 0.0f, -19.27435f, 0.0f, 13.15839f, 13.15839f, 13.15839f);
	*(&Local_0 + 40) = { -3849.539f, 7.110469f, 3704.663f };
	*(&Local_0 + 40 + 12) = { 0.0f, 34.72779f, 0.0f };
	Local_0.f_64 = CREATE_POINT_IN_LAYOUT(Local_0, "solf_teleport", -3849.539f, 7.110469f, 3704.663f, 0.0f, 34.72779f, 0.0f);
	*(&Local_0 + 68) = { -3884.749f, 11.36244f, 3656.567f };
	*(&Local_0 + 68 + 12) = { 0.0f, 90.0f, 0.0f };
	Local_0.f_92 = CREATE_POINT_IN_LAYOUT(Local_0, "f_treasureChest", -3884.749f, 11.36244f, 3656.567f, 0.0f, 90.0f, 0.0f);
	*(&Local_0 + 96) = { -3845.863f, 7.203487f, 3691.134f };
	*(&Local_0 + 96 + 12) = { 0.0f, 139.3468f, 0.0f };
	Local_0.f_120 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_01", -3845.863f, 7.203487f, 3691.134f, 0.0f, 139.3468f, 0.0f);
	*(&Local_0 + 124) = { -3871.263f, 8.031364f, 3632.737f };
	*(&Local_0 + 124 + 12) = { 0.0f, 153.2865f, 0.0f };
	Local_0.f_148 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_02", -3871.263f, 8.031364f, 3632.737f, 0.0f, 153.2865f, 0.0f);
	*(&Local_0 + 152) = { -3848.506f, 7.259078f, 3690.77f };
	*(&Local_0 + 152 + 12) = { 0.0f, 46.26167f, 0.0f };
	Local_0.f_176 = CREATE_POINT_IN_LAYOUT(Local_0, "f_introCharacter", -3848.506f, 7.259078f, 3690.77f, 0.0f, 46.26167f, 0.0f);
	*(&Local_0 + 180) = { -3849.637f, 7.223391f, 3690.532f };
	*(&Local_0 + 180 + 12) = { 0.0f, -66.90496f, 0.0f };
	Local_0.f_204 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportJohnCrouch", -3849.637f, 7.223391f, 3690.532f, 0.0f, -66.90496f, 0.0f);
	Local_0.f_208 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TeleportHorse", -3847.326f, 7.233026f, 3696.481f, 0.0f, 17.12666f, 0.0f);
	Local_0.f_212 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "ncover_low", -3860.079f, 8.04738f, 3682.166f, 0.0f, 6.738969f, 0.0f, 4);
	return 1;
}

void Function_200(bool bParam0, int iParam1) //Position: 0x95AD / 38317
{
	if (!Function_187(128))
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

int Function_201(int iParam0) //Position: 0x95E8 / 38376
{
	if (Global_3421)
	{
		return 0;
	}
	*iParam0 = *iParam0;
	if (Global_3380 || Global_3379)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3379)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 1;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	if (Function_189(iParam0, 256))
	{
		return 0;
	}
	if (Function_194())
	{
		return 0;
	}
	return 1;
}

