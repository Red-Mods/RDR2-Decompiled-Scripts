//Decompiled with MagicRDR v1.0
//Function Count : 316
//Statics Count : 716
//Natives Count : 505
//Parameters Count : 2

#region Local Var
	struct<1229> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_334 = 0;
	bLocal_335 = false;
	iLocal_339 = 31;
	iLocal_340 = 33;
	iLocal_341 = 1;
	fLocal_342 = 2.0f;
	vLocal_343 = { -4691.224f, 3.166f, 4010.023f };
	iLocal_347 = 0;
	iLocal_348 = 0;
	iLocal_486 = 0;
	iLocal_503 = 0;
	iLocal_505 = 0;
	bLocal_509 = false;
	iLocal_506 = 0;
	bLocal_508 = Function_315(&(Global_29008[iScriptParam_0]));
	if (bLocal_508 && Function_314(&Global_6764, iScriptParam_0))
	{
		if (Function_313(8))
		{
			bLocal_509 = true;
			Function_312(8);
		}
	}
	Function_311("Initializing Nosalida", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_507 = 1000;
		switch (iLocal_506)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_506 = 1;
				}
				bLocal_507 = false;
				break;
			
			case 0x00000001:
				Function_310();
				if (Function_310())
				{
					iLocal_506 = 2;
				}
				bLocal_507 = false;
				break;
			
			case 0x00000002:
				if (Function_308())
				{
					Function_307(&(Global_29008[iScriptParam_0]), 32);
					iLocal_506 = 3;
				}
				bLocal_507 = false;
				break;
			
			case 0x00000003:
				bLocal_510 = LAUNCH_NEW_SCRIPT_WITH_ARGS("NosalidaVol", &iScriptParam_0, 2, 0);
				Function_306(&Global_6764, &Global_7879, iScriptParam_0);
				iLocal_506 = 5;
				if (Function_305() && Function_303())
				{
					bLocal_511 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Nosalida/NosalidaMP", 0);
				}
				bLocal_507 = false;
				break;
			
			case 0x00000005:
				if (Function_302(&Global_6764, &Global_7879, iScriptParam_0))
				{
					iLocal_506 = 4;
					bLocal_507 = false;
				}
				else
				{
					bLocal_507 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_301(&(Global_29008[iScriptParam_0]), 16) && Function_300(Global_29155[iScriptParam_010]))
				{
					iLocal_506 = 6;
				}
				bLocal_507 = false;
				break;
			
			case 0x00000006:
				if (!Function_301(&(Global_29008[iScriptParam_0]), 256) && Function_313(2))
				{
					Function_292(StackVal, StackVal, 0, &uLocal_512, *(&Local_0 + 116[06]));
					Function_291(0, &uLocal_512, Local_0);
					Function_292(StackVal, StackVal, 1, &uLocal_512, *(&Local_0 + 116[16]));
					Function_291(1, &uLocal_512, Local_0);
					Function_292(StackVal, StackVal, 3, &uLocal_512, *(&Local_0 + 116[36]));
					Function_291(3, &uLocal_512, Local_0);
					Function_292(StackVal, StackVal, 5, &uLocal_512, *(&Local_0 + 116[46]));
					Function_291(5, &uLocal_512, Local_0);
					Function_292(StackVal, StackVal, 6, &uLocal_512, *(&Local_0 + 116[56]));
					Function_291(6, &uLocal_512, Local_0);
					Function_292(StackVal, StackVal, 7, &uLocal_512, *(&Local_0 + 116[66]));
					Function_291(7, &uLocal_512, Local_0);
					Function_292(StackVal, StackVal, 9, &uLocal_512, *(&Local_0 + 116[76]));
					Function_291(9, &uLocal_512, Local_0);
					if (!Global_30619 != 2)
					{
						Function_288(&Global_6764, &Global_7879, &uLocal_512, Global_6289, iScriptParam_0);
					}
				}
				else
				{
					bLocal_508 = false;
					iLocal_713 = 1;
				}
				if (!Global_30619 != 2)
				{
					if (Function_301(&(Global_29008[iScriptParam_0]), 256) || !Function_313(2))
					{
						iLocal_713 = 1;
					}
				}
				Function_307(&(Global_29008[iScriptParam_0]), 8);
				iLocal_506 = 7;
				bLocal_507 = false;
				break;
			
			case 0x00000007:
				switch (Global_30619)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000003:
						break;
				}
				iLocal_506 = 8;
				bLocal_507 = false;
				break;
			
			case 0x00000008:
				Function_287(64);
				Function_283(2, 4294967295, 4294967295, 0, 3);
				if (Function_305())
				{
					Function_281(StackVal, 0, 0.0f, 3, Local_0, 1);
				}
				else if (Function_280(iScriptParam_0, &Global_6764, iLocal_713))
				{
					Function_281(StackVal, 0, 0.2f, 3, Local_0, 1);
				}
				else
				{
					switch (Global_30619)
					{
						case 0x00000000:
						case 0x00000001:
							Function_281(StackVal, 2, 0.5f, 3, Local_0, 1);
							break;
						
						case 0x00000002:
							Function_281(StackVal, 0, 0.5f, 3, Local_0, 1);
							break;
						
						case 0x00000003:
							Function_281(StackVal, 2, 0.5f, 3, Local_0, 1);
							break;
						}
				}
				Function_307(&(Global_29008[iScriptParam_0]), 512);
				iLocal_506 = 9;
				bLocal_507 = false;
				break;
			
			case 0x00000009:
				Function_278(Local_0, iScriptParam_0);
				Function_307(&(Global_29008[iScriptParam_0]), 4);
				Function_277("Finished Initializing Nosalida", 5.0f);
				iLocal_506 = 10;
				bLocal_507 = false;
				if (((bLocal_508 && !Function_276(Global_30685[1])) && Function_275(25, 0)) || !Global_3365)
				{
					Function_271();
					Function_269(32768);
				}
				else
				{
					if (Function_276(Global_30685[1]) && !Global_63096)
					{
						Function_268();
						Function_267("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_508 = false;
				}
				Function_265(&(Global_29008[iScriptParam_0]));
				break;
			
			case 0x0000000A:
				Function_262();
				if (bLocal_508)
				{
					bLocal_508 = Function_44();
					if (!bLocal_508)
					{
						Function_36();
					}
					bLocal_507 = false;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_507);
	}
	if (Function_35(Global_30740) == 2)
	{
		Function_25(Global_30740);
	}
	if (bLocal_508)
	{
		Function_36();
	}
	if (bLocal_509)
	{
		Function_24(8);
	}
	Function_22();
	Function_12(&Global_6764, &Global_7879, iScriptParam_0, iLocal_713);
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	Function_1(&(Global_29008[iScriptParam_0]), 32);
	Function_1(&(Global_29008[iScriptParam_0]), 64);
	Function_1(&(Global_29008[iScriptParam_0]), 8);
	Function_1(&(Global_29008[iScriptParam_0]), 512);
	Function_1(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_511))
	{
		TERMINATE_SCRIPT(bLocal_511);
	}
	if (IS_SCRIPT_VALID(bLocal_510))
	{
		TERMINATE_SCRIPT(bLocal_510);
	}
	Function_277("Unloaded Nosalida", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x5D0 / 1488
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x5E7 / 1511
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

void Function_3(int iParam0) //Position: 0x61D / 1565
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x63F / 1599
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x655 / 1621
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x66B / 1643
{
	Function_7(&Local_315 + 4);
	RELEASE_LAYOUT_REF(Local_315);
	return;
}

void Function_7(int iParam0) //Position: 0x67F / 1663
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

void Function_8(var uParam0, int iParam1) //Position: 0x6A5 / 1701
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

void Function_9(var uParam0, int iParam1) //Position: 0x7D3 / 2003
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x7ED / 2029
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x80A / 2058
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x815 / 2069
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_305())
	{
		return;
	}
	strcpy(&cVar0, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_301(&(Global_29008[iParam2]), 0x40000000))
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
	if (!Function_301(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_313(2) || Function_301(&(Global_29008[iParam2]), 256))
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
			Function_307(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xA15 / 2581
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

int Function_14(int iParam0) //Position: 0xB64 / 2916
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

int Function_15(int iParam0) //Position: 0xB8F / 2959
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

void Function_16(var uParam0, int iParam1) //Position: 0xBC3 / 3011
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xBD2 / 3026
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xBE9 / 3049
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC05 / 3077
{
	if (Function_20(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, bool bParam1) //Position: 0xC20 / 3104
{
	return (bParam0 && bParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xC2D / 3117
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

void Function_22() //Position: 0x10DB / 4315
{
	if (IS_OBJECTSET_VALID(bLocal_336))
	{
		Function_23(bLocal_336);
		DESTROY_OBJECTSET(bLocal_336);
	}
	return;
}

void Function_23(bool bParam0) //Position: 0x10F6 / 4342
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

void Function_24(bool bParam0) //Position: 0x113B / 4411
{
	if (Function_20(bParam0, 1) && !Function_20(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_25(int iParam0) //Position: 0x1168 / 4456
{
	var uVar0;
	
	if (!Function_33(iParam0))
	{
		Function_31();
		return;
	}
	uVar0 = Function_30(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_26("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_26(char* cParam0, bool bParam1) //Position: 0x11BB / 4539
{
	struct<4> Var0;
	
	if (!Function_33(bParam1))
	{
		return;
	}
	switch (Function_30(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_27(Function_28(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_30(bParam1), Function_28(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_27(int iParam0) //Position: 0x12DF / 4831
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

int Function_28(bool bParam0) //Position: 0x1319 / 4889
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_29(int iParam0) //Position: 0x1339 / 4921
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_30(bool bParam0) //Position: 0x1350 / 4944
{
	if (!Function_29(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_31() //Position: 0x136B / 4971
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
			Function_32(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_32(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x15B2 / 5554
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_33(int iParam0) //Position: 0x15DB / 5595
{
	if (!Function_29(iParam0))
	{
		return 0;
	}
	if (!Function_34(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_34(int iParam0) //Position: 0x15FF / 5631
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x1614 / 5652
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_36() //Position: 0x162E / 5678
{
	Function_39();
	RESET_FACTIONS_STATUS_TWO_WAY(2, 16);
	Function_7(&bLocal_377);
	Function_37(32768);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	if (DECOR_CHECK_EXIST(Global_34573, "Nosalida_TriggeringEnd"))
	{
		DECOR_REMOVE(Global_34573, "Nosalida_TriggeringEnd");
	}
	return;
}

void Function_37(int iParam0) //Position: 0x1696 / 5782
{
	Function_38(&Global_28842, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x16A4 / 5796
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x16BF / 5823
{
	int iVar0;
	
	FIRE_STOP_ALL_FIRES();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_BLIP_VALID(Local_445[iVar08].f_24))
		{
			REMOVE_BLIP(Local_445[iVar08].f_24);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Function_42(&Global_6764, &Global_7879, iVar0, 0);
		iVar0++;
	}
	REMOVE_GLOW_INDICATOR(uLocal_502);
	if (IS_BLIP_VALID(bLocal_346))
	{
		REMOVE_BLIP(bLocal_346);
	}
	if (IS_ACTOR_VALID(bLocal_337))
	{
		RELEASE_ACTOR(bLocal_337);
	}
	if (IS_ACTOR_VALID(uLocal_363[0]))
	{
		TASK_CLEAR(uLocal_363[0]);
		RELEASE_ACTOR(uLocal_363[0]);
	}
	if (IS_ACTOR_VALID(uLocal_363[1]))
	{
		TASK_CLEAR(uLocal_363[1]);
		RELEASE_ACTOR(uLocal_363[1]);
	}
	if (SQUAD_IS_VALID(bLocal_357))
	{
		Function_40(&bLocal_357, 0, 0);
		DESTROY_OBJECT(bLocal_357);
	}
	if (SQUAD_IS_VALID(bLocal_358))
	{
		Function_40(&bLocal_358, 0, 0);
		DESTROY_OBJECT(bLocal_358);
	}
	if (SQUAD_IS_VALID(bLocal_361))
	{
		Function_40(&bLocal_361, 0, 0);
		DESTROY_OBJECT(bLocal_361);
	}
	if (IS_LAYOUTREF_VALID(bLocal_352))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_352);
		RELEASE_LAYOUT_REF(bLocal_352);
	}
	if (IS_LAYOUTREF_VALID(bLocal_353))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_353);
		RELEASE_LAYOUT_REF(bLocal_353);
	}
	if (Function_20(iLocal_501, 128))
	{
		RESET_FACTIONS_STATUS_TWO_WAY(2, 27);
	}
	Global_3385 = 0;
	if (Function_35(Global_30740) == 2)
	{
		Function_25(Global_30740);
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FLEEING", true, false, 2, 0, true, false);
		}
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	return;
}

void Function_40(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1830 / 6192
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_41(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_41(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x18AC / 6316
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_42(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x18C6 / 6342
{
	int iVar0;
	
	iVar0 = iParam2;
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
	Function_43(StackVal);
	if (bParam3)
	{
		Function_13(uParam0, uParam1, iParam2, 0);
	}
}

int Function_43(bool bParam0) //Position: 0x1960 / 6496
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

bool Function_44() //Position: 0x19FA / 6650
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!Function_261(&uLocal_375))
	{
		Function_39();
		iLocal_444 = 7;
		return 0;
	}
	switch (iLocal_444)
	{
		case 0x00000000:
			bVar0 = true;
			if (!Function_256(&bLocal_377))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				Function_246(&bLocal_352, &bLocal_353, &bLocal_357, &bLocal_358, &uLocal_359, &bLocal_361, &bLocal_337, &uLocal_363, &iLocal_501, &uLocal_354, &uLocal_502, &uLocal_366);
				Function_243(&bLocal_352, &uLocal_355);
				iLocal_444 = 1;
			}
			break;
		
		case 0x00000001:
			Function_242(&Local_445);
			Function_239(StackVal, StackVal, *(&Local_0 + 1064), 0, 0);
			Function_239(StackVal, StackVal, *(&Local_0 + 1092), 0, 0);
			Function_238(&bLocal_352, &uLocal_370, &uLocal_362);
			iLocal_486 = 0;
			iLocal_444 = 2;
			break;
		
		case 0x00000002:
			Function_236("sc_challenge_aa_04", &iLocal_492);
			if (Function_20(iLocal_501, 131072))
			{
				Function_233(&iLocal_501, &Local_445, &iLocal_487);
			}
			if (!Function_212(bLocal_337, &uLocal_363, &iLocal_486, &bLocal_357, &iLocal_501, &Local_445, &bLocal_353, &uLocal_360, &uLocal_359, &iLocal_487, &uLocal_356, &bLocal_352, &uLocal_495, &uLocal_498, &uLocal_373))
			{
				Function_39();
				SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
				SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
				if (IS_ACTOR_VALID(uLocal_363[0]))
				{
					MEMORY_CONSIDER_AS(uLocal_363[0], Global_34573, 4);
				}
				if (IS_ACTOR_VALID(uLocal_363[1]))
				{
					MEMORY_CONSIDER_AS(uLocal_363[1], Global_34573, 4);
				}
				return 1;
			}
			if (Function_20(iLocal_501, 32768))
			{
				Function_211(&iLocal_501, 32768);
			}
			if (Function_20(iLocal_501, 1024))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_80) && !Function_20(iLocal_501, 512))
				{
					SQUAD_GOALS_CLEAR(bLocal_358);
					Function_210(bLocal_358);
					SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bLocal_358, false, Local_0.f_80, 4, 1);
					Function_209(bLocal_358, -1.0f);
					Function_208(&iLocal_501, 512);
				}
			}
			if (!Function_20(iLocal_501, 8192))
			{
				if (Function_204(&bLocal_357, &bLocal_358, &bLocal_361, &iLocal_501))
				{
					Function_208(&iLocal_501, 8192);
				}
			}
			if (Function_195(&Local_445, &uLocal_363, &bLocal_337, &bLocal_361, &bLocal_357, &bLocal_358, &iLocal_501, &iLocal_503, &iLocal_487, &uLocal_366))
			{
				Function_208(&iLocal_501, 524288);
				if (IS_BLIP_VALID(bLocal_346))
				{
					REMOVE_BLIP(bLocal_346);
				}
				bVar2 = false;
				while (bVar2 < (SQUAD_GET_SIZE(bLocal_357) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_357, bVar2);
					if (!Function_41(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						KILL_ACTOR(bVar1);
					}
					bVar2++;
				}
				Function_194(bLocal_357, 1);
				bVar2 = false;
				while (bVar2 < (SQUAD_GET_SIZE(bLocal_358) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_357, bVar2);
					if (!Function_41(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						KILL_ACTOR(bVar1);
					}
					bVar2++;
				}
				Function_194(bLocal_358, 1);
				if (!iLocal_347)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_337);
					SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_337, Local_0.f_88, 4, 1);
					TASK_CLEAR(bLocal_337);
					bVar3 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_0 + 1008, 2.0f, 1);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_337, bVar3);
					TASK_SEQUENCE_RELEASE(bVar3, 1);
					iLocal_347 = 1;
				}
				if (IS_ACTOR_ALIVE(uLocal_363[0]) || (IS_ACTOR_ALIVE(uLocal_363[1]) && !Function_20(iLocal_501, 2)))
				{
					Function_208(&iLocal_501, 2);
				}
				iLocal_444 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_20(iLocal_501, 262144))
			{
				if (Function_193(bLocal_337, Global_34573) > 3.25f)
				{
					Function_192(Global_30740, 0);
					if (Function_191(&iLocal_492))
					{
						bLocal_504 = Function_189(&iLocal_492);
					}
					if (Function_191(&iLocal_492))
					{
						if (Function_188(466) < 0.0f)
						{
							if (bLocal_504 > Function_188(466))
							{
								Function_187(466, bLocal_504, 0);
							}
						}
						else
						{
							Function_187(466, bLocal_504, 0);
						}
					}
					Function_208(&iLocal_501, 262144);
				}
			}
			else if (Function_159(&uLocal_488, &bLocal_337, &iLocal_501, &bLocal_352, &uLocal_374, &bLocal_357, &bLocal_358, &bLocal_361, &uLocal_359, &uLocal_360, &Local_445))
			{
				iLocal_444 = 4;
			}
			break;
		
		case 0x00000004:
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
			SET_WEAPONENUM_LOCKED(10, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 10, 0, 1, 1);
			Function_155(200, 1, 0);
			Function_142(50, 1, 0);
			Function_111(Global_30740);
			Function_109(Function_110(1, 1, 1, 0, 0), 1);
			Function_107(9, 0, 1);
			Global_3385 = 0;
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(iLocal_487, 0);
			APPEND_JOURNAL_ENTRY(iLocal_487, 1);
			Function_105(Global_30685[1], &Global_6764, &Global_7879, 1);
			Function_111(Global_30740);
			AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
			Function_48(Global_30740, 1, 1, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			if (Function_47(Global_30739) > 1)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(14))
				{
					AWARD_ACHIEVEMENT(14);
				}
			}
			Function_45(&iLocal_489);
			iLocal_444 = 6;
			break;
		
		case 0x00000006:
			if (!iLocal_505)
			{
				Function_36();
				iLocal_505 = 1;
			}
			break;
	}
	return 1;
}

void Function_45(int iParam0) //Position: 0x1EAA / 7850
{
	Function_46(iParam0, 0.0f);
	return;
}

void Function_46(var uParam0, float fParam1) //Position: 0x1EB6 / 7862
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_208(uParam0, 1);
	Function_211(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

int Function_47(bool bParam0) //Position: 0x1ED7 / 7895
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_48(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1EF1 / 7921
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_33(bParam0))
	{
		Function_31();
		return;
	}
	bVar0 = Function_30(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_104())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_28(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_102(Global_6269) };
		}
		if (Function_104())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_96();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_104())
	{
		Function_95();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_26("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_91(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
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
			Function_51(1);
			Function_50(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_49(bParam0, &Var14);
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

void Function_49(int iParam0, int iParam1) //Position: 0x2145 / 8517
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_50(bool bParam0, int iParam1) //Position: 0x217F / 8575
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_305())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_51(bool bParam0) //Position: 0x21C1 / 8641
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_81();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_52();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_211(&Global_63095, 1);
		Function_211(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_52() //Position: 0x2212 / 8722
{
	Function_79();
	Function_78();
	Function_78();
	Function_77();
	Function_77();
	Function_76();
	Function_76();
	Function_60(0);
	Function_60(0);
	if (!Function_305())
	{
		Function_57();
		Function_56();
		Function_55();
		Function_54();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_53();
	return;
}

void Function_53() //Position: 0x2264 / 8804
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

void Function_54() //Position: 0x236A / 9066
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

void Function_55() //Position: 0x239D / 9117
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

void Function_56() //Position: 0x252B / 9515
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

void Function_57() //Position: 0x26DF / 9951
{
	Function_58(&Global_28260, 1, 0);
	return;
}

void Function_58(int iParam0, bool bParam1, var uParam2) //Position: 0x26ED / 9965
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
	
	bVar0 = Function_59();
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

var Function_59() //Position: 0x28DE / 10462
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_60(int iParam0) //Position: 0x28F3 / 10483
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
					iVar2 = ((Function_75((50 + iVar4)) + Function_75((183 + iVar4))) + Function_75((90 + iVar4)));
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
	Function_61(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_61(int iParam0, bool bParam1, bool bParam2) //Position: 0x2999 / 10649
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
		Function_74(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_73(iParam0);
	if (bParam2)
	{
		Function_62(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x2C34 / 11316
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_72(390))), 32);
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
					bVar19 = (Function_188(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_188(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_70(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_67(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_64(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_63(), &Var9);
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

var Function_63() //Position: 0x3261 / 12897
{
	int iVar0;
	
	return iVar0;
}

var Function_64(int iParam0) //Position: 0x3269 / 12905
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_65(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x327A / 12922
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_66(char* cParam0, bool bParam1) //Position: 0x336F / 13167
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_67(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3388 / 13192
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_69(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_68(Function_69(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_68(int iParam0, int iParam1) //Position: 0x33ED / 13293
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_69(int iParam0, bool bParam1) //Position: 0x33FF / 13311
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_70(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3411 / 13329
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
	if (((Function_71(iParam0) != 19 || Function_71(iParam0) != 17) || Function_71(iParam0) != 10) || Function_71(iParam0) != 9)
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

int Function_71(int iParam0) //Position: 0x3541 / 13633
{
	return Global_35278[iParam020].f_48;
}

var Function_72(int iParam0) //Position: 0x3550 / 13648
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_73(int iParam0) //Position: 0x358D / 13709
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

int Function_74(int iParam0, bool bParam1, bool bParam2) //Position: 0x3727 / 14119
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

int Function_75(bool bParam0) //Position: 0x396B / 14699
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_76() //Position: 0x39AC / 14764
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
		iVar2 = ((Function_75((50 + iVar3) + 15) + Function_75((183 + iVar3) + 15)) + Function_75((90 + iVar3) + 15));
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
	Function_61(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_77() //Position: 0x3A35 / 14901
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
			iVar2 = ((Function_75((50 + iVar3) + 8) + Function_75((183 + iVar3) + 8)) + Function_75((90 + iVar3) + 8));
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
	Function_61(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_78() //Position: 0x3ACC / 15052
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
		iVar2 = ((Function_75((50 + iVar3)) + Function_75((183 + iVar3))) + Function_75((90 + iVar3)));
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
	Function_61(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_79() //Position: 0x3B4B / 15179
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_80(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_61(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_80(int iParam0, bool bParam1, int iParam2) //Position: 0x3B84 / 15236
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
	Function_74(iParam0, bParam1, 1);
	Function_73(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_62(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_81() //Position: 0x3D8E / 15758
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_19())
	{
		Function_88(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_88(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_83(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_83(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_82(StackVal, StackVal, vVar0))
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

bool Function_82(vector3 vParam0) //Position: 0x3E49 / 15945
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_83(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3E61 / 15969
{
	int iVar0;
	
	iVar0 = Function_86(uParam2, uParam3);
	if (Function_85(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_208(&Global_63095, 1);
			Function_211(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_208(&Global_63095, 2);
			Function_211(&Global_63095, 1);
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
		Function_208(&Global_63095, 2);
		Function_211(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_84();
	return StackVal, StackVal, Function_84();
}

vector3 Function_84() //Position: 0x3F48 / 16200
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_85(int iParam0) //Position: 0x3F51 / 16209
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0, bool bParam1) //Position: 0x3F67 / 16231
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
				fVar2 = Function_87(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_87(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_85(bVar0) && !bParam1)
	{
		bVar0 = Function_86(bParam0, 1);
	}
	return bVar0;
}

float Function_87(vector3 vParam0, vector3 vParam3) //Position: 0x4031 / 16433
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_88(var uParam0, int iParam1) //Position: 0x404E / 16462
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_90(Global_34573, &vVar4);
	if (!Function_89(Global_30640[0]))
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
	if (!Function_89(Global_30640[2]))
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
	if (!Function_89(Global_30640[1]))
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
	if (!Function_89(Global_30658[1]))
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
	if (!Function_89(Global_30658[3]))
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
	if (!Function_89(Global_30658[2]))
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
	if (!Function_89(Global_30658[4]))
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
	if (!Function_89(Global_30668[0]))
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
	if (!Function_89(Global_30668[1]))
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
	if (!Function_89(Global_30668[2]))
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
	if (!Function_89(Global_30679[0]))
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
	if (!Function_89(Global_30685[0]))
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
	if (!Function_89(Global_30685[1]))
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
	if (!Function_89(Global_30685[2]))
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
	if (!Function_89(Global_30693[0]))
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
	if (!Function_89(Global_30693[1]))
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
	if (!Function_89(Global_30693[2]))
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
	if (!Function_89(Global_30707[2]))
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
	if (!Function_89(Global_30707[3]))
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
	if (!Function_89(Global_30707[0]))
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
	if (!Function_89(Global_30717[0]))
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
	if (!Function_89(Global_30723[2]))
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
	if (!Function_89(Global_30723[1]))
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
	if (!Function_89(Global_30723[0]))
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
	if (!Function_89(Global_30679[1]))
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
	if (!Function_89(Global_30707[1]))
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
	Function_208(&Global_63095, 2);
	Function_211(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_82(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_89(int iParam0) //Position: 0x4873 / 18547
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_20(iVar0, 0x1000000) || Function_20(iVar0, 0x2000000)) || Function_20(iVar0, 0x4000000)) || !Function_20(iVar0, 0x10000000));
}

void Function_90(bool bParam0, bool bParam1) //Position: 0x48AE / 18606
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_91(bool bParam0) //Position: 0x48BB / 18619
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
				Function_94(12, 1, 0, 0);
				Function_93(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_94(13, 1, 0, 0);
				Function_93(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_94(14, 1, 0, 0);
				Function_93(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_94(15, 1, 0, 0);
				Function_93(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_94(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_28(bParam0))
			{
				case 0x00000000:
					if (Function_47(bParam0) == 1)
					{
						iVar0 = Function_92(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_93(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_93(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_93(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_93(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_93(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_93(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_93(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_93(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_93(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_93(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_93(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_93(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_93(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_93(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_93(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_93(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_93(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_93(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_93(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_93(4, 19);
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
								Function_94(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_94(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_94(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_92(bParam0) == 0)
			{
				if (Function_47(bParam0) == 1)
				{
					Function_94(458, 1, 0, 0);
					iVar0 = Function_28(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_93(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_93(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_93(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_93(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_93(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_93(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_93(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_93(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_47(bParam0) == 1)
			{
				Function_94(400, 1, 0, 0);
			}
			switch (Function_28(bParam0))
			{
				case 0x00000001:
					Function_94(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_93(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_93(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_93(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_94(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_93(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_93(6, 9);
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

int Function_92(bool bParam0) //Position: 0x4D97 / 19863
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_93(int iParam0, bool bParam1) //Position: 0x4DB6 / 19894
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

int Function_94(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4E1D / 19997
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
	Function_74(iParam0, TO_FLOAT(bParam1), 1);
	Function_73(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_62(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_95() //Position: 0x503D / 20541
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
	PLAYSTAT_INT("HC_MONEY", Function_75(0));
	PLAYSTAT_INT("HC_FAME", Function_75(3));
	PLAYSTAT_INT("HC_HONOR", Function_75(1));
	return;
}

void Function_96() //Position: 0x5195 / 20885
{
	int iVar0;
	int iVar1;
	
	if (!Function_101(Global_6269))
	{
		return;
	}
	iVar0 = Function_75(24);
	iVar1 = Function_100(Global_6269);
	if (!Function_101(iVar0) && Function_99(iVar1) < 0)
	{
		Function_61(24, Global_6269, 0);
		Function_97(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_99(Function_100(iVar0)))
	{
		Function_61(24, Global_6269, 0);
		Function_97(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_97(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5215 / 21013
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
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_98(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x5567 / 21863
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_99(int iParam0) //Position: 0x55EA / 21994
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_100(int iParam0) //Position: 0x5604 / 22020
{
	if (!Function_101(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_101(int iParam0) //Position: 0x561E / 22046
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_102(int iParam0) //Position: 0x5634 / 22068
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

struct<24> Function_103(char* cParam0) //Position: 0x5673 / 22131
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

bool Function_104() //Position: 0x58C9 / 22729
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_105(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x58F4 / 22772
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_305())
	{
		return;
	}
	Function_307(&(Global_29008[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		iVar1 = iVar0;
		if (Function_18(uParam1[iVar02], 1))
		{
			Function_42(uParam1, uParam2, iVar1, 0);
		}
		Function_13(uParam1, uParam2, iVar1, 0);
		Function_106(uParam1[iVar02], uParam2[iVar03], 0);
		bVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar2, iParam3, false, false, 0);
		uParam1[iVar02]->f_4 = bVar2;
		iVar0++;
	}
}

void Function_106(var uParam0, var uParam1, int iParam2) //Position: 0x5974 / 22900
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_15(Global_29007), false, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, false, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_16(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

int Function_107(bool bParam0, bool bParam1, int iParam2) //Position: 0x59C7 / 22983
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_108(bParam0), Function_59()) == 0)
		{
			ADD_ITEM(Function_108(bParam0), Function_59(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_108(bParam0), Function_59(), iParam2);
	return 1;
}

var Function_108(bool bParam0) //Position: 0x5A12 / 23058
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

int Function_109(bool bParam0, bool bParam1) //Position: 0x5B03 / 23299
{
	bool bVar0;
	
	bVar0 = Function_75(0);
	if ((Function_75(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_94(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_75(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_94(597, bParam0, 0, 0);
	}
	if ((Function_75(597) + Function_75(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

var Function_110(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5BCE / 23502
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_75(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_108(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_111(bool bParam0) //Position: 0x5CD0 / 23760
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_28(bParam0) == Global_30640[2])
	{
		if (Function_141(2) && !Function_140(2))
		{
			Function_133(2, 2, 0, 0, 1);
		}
	}
	if (Function_28(bParam0) == Global_30658[3])
	{
		if (Function_141(6) && !Function_140(6))
		{
			Function_133(6, 16, 0, 0, 1);
		}
	}
	if (!Function_141(10) || Function_140(10))
	{
		return;
	}
	iVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_47(Global_30734);
	if (Global_30734 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_30736);
	if (Global_30736 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_30738);
	if (Global_30738 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_30737);
	if (Global_30737 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_30739);
	if (Global_30739 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, iVar0, bVar1) && !Global_30736 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, iVar0, bVar1) && !Global_30734 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, iVar0, bVar1) && !Global_30738 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, iVar0, bVar1) && !Global_30737 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, iVar0, bVar1) && !Global_30739 != bParam0)
	{
		return;
	}
	Function_93(2, 24);
	Function_112(10, 0, 1);
	return;
}

void Function_112(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5E7D / 24189
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_140(bParam0))
	{
		if (!Function_141(bParam0))
		{
			Function_116(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_94(457, 1, 0, 0);
		Function_115(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_114(0, 0, 1, 1))
			{
				Function_51(1);
				Function_50(1, 0);
			}
			else
			{
				Function_113();
			}
		}
	}
	return;
}

void Function_113() //Position: 0x601C / 24604
{
	return;
}

bool Function_114(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6022 / 24610
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

void Function_115(bool bParam0, int iParam1) //Position: 0x60C6 / 24774
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x611B / 24859
{
	struct<8> Var0;
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_131(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_141(bParam0))
	{
		Function_94(456, 1, 0, 0);
		Function_115(bParam0, 2);
		if (bParam2)
		{
			if (!Function_114(0, 0, 1, 1))
			{
				Function_51(1);
				Function_50(1, 5);
			}
			else
			{
				Function_113();
			}
		}
		Function_125(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_124() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_124() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_123(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_19())
		{
			if (!Function_122(Global_76846, 2))
			{
				Function_117(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_117(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6270 / 25200
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_119(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_118(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_118(char* cParam0, int iParam1) //Position: 0x62DC / 25308
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

bool Function_119(bool bParam0, var uParam1, int iParam2) //Position: 0x6313 / 25363
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
		if (Function_121(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_120(uVar0))
		{
			case 0x00000002:
				if (!Function_122(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_120(char* cParam0) //Position: 0x638B / 25483
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

int Function_121(int iParam0) //Position: 0x642C / 25644
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_211(&iVar1, 2147483648);
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

bool Function_122(int iParam0, int iParam1) //Position: 0x6469 / 25705
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_123(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x647C / 25724
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_102(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_124() //Position: 0x64F7 / 25847
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_125(bool bParam0) //Position: 0x6524 / 25892
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
			if (Function_129(bParam0, Function_130(bVar24)))
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
			if (Function_129(bParam0, Function_130(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_128(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_127(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_126(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_126(int iParam0) //Position: 0x66D4 / 26324
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_127(char* cParam0, bool bParam1) //Position: 0x672B / 26411
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

var Function_128(int iParam0) //Position: 0x6750 / 26448
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_129(bool bParam0, bool bParam1) //Position: 0x67A6 / 26534
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

bool Function_130(bool bParam0) //Position: 0x6805 / 26629
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_131(int iParam0) //Position: 0x6811 / 26641
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_132(int iParam0) //Position: 0x682D / 26669
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_133(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6843 / 26691
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_131(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_139(bParam0, 2))
	{
		Function_94(456, 1, 0, 0);
		Function_115(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_123(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_129(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_115(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_114(0, 0, 1, 1))
			{
				Function_51(1);
				Function_50(1, 0);
			}
			else
			{
				Function_113();
			}
		}
		Function_125(bParam0);
		if (StackVal && !Function_20(((((!Function_124() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_20((((Function_124() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_19())
		{
			if (!Function_122(Global_76846, 2))
			{
				Function_117(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_135();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_134(3, bParam1);
				break;
			
			case 0x00000005:
				Function_134(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_134(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_134(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_134(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_134(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_93(2, 24);
				break;
			
			case 0x00000003:
				Function_93(2, 25);
				break;
			
			case 0x0000000F:
				Function_93(2, 26);
				break;
			
			case 0x0000000D:
				Function_93(2, 27);
				break;
			
			case 0x0000000E:
				Function_93(2, 28);
				break;
			}
	}
}

void Function_134(int iParam0, bool bParam1) //Position: 0x6AD9 / 27353
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

void Function_135() //Position: 0x6B44 / 27460
{
	if (Function_132(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_138(Global_28180);
			Global_28180.f_8 = Function_136(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_138(Global_28180);
			Global_28180.f_8 = Function_136(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_136(int iParam0, int iParam1) //Position: 0x6BBF / 27583
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
					if (Function_275(6, 0) || Function_275(12, 0))
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
					if (Function_137(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_275(5, 0))
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
					if (Function_137(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_137(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_137(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_137(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_275(26, 0))
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
					if (Function_137(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_137(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_137(27) && iVar18)
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
					if (Function_137(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_137(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_137(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_137(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_275(17, 0) && iVar15)
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
					if (Function_137(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_275(6, 0) && Function_137(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_137(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_275(9, 0) && Function_137(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_137(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_275(8, 0) && iVar19)
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
	if (Function_82(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_82(StackVal, StackVal, vVar3))
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
	if (!Function_82(StackVal, StackVal, vVar3))
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

int Function_137(int iParam0) //Position: 0x77B0 / 30640
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_138(int iParam0) //Position: 0x77C5 / 30661
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

bool Function_139(int iParam0, int iParam1) //Position: 0x7814 / 30740
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

bool Function_140(int iParam0) //Position: 0x7841 / 30785
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_139(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_141(int iParam0) //Position: 0x7892 / 30866
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_139(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_142(int iParam0, bool bParam1, bool bParam2) //Position: 0x78E4 / 30948
{
	int iVar0;
	bool bVar1;
	
	if (Function_154(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_104())
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
	iVar0 = Function_75(3);
	Function_151();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_149(3, bVar1);
		if (!bParam2)
		{
			if (!Function_122(Global_76848, 4))
			{
				Function_117(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_94(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_188(3));
	iVar0 = Function_75(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_144(4, Function_148(Global_12976.f_156), 1);
				Function_143(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_144(4, Function_148(Global_12976.f_156), 1);
				Function_143(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_144(4, Function_148(Global_12976.f_156), 1);
				Function_143(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_144(4, Function_148(Global_12976.f_156), 1);
				Function_143(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_144(4, Function_148(Global_12976.f_156), 1);
				Function_143(Global_12976.f_152, Global_12976.f_156);
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

void Function_143(int iParam0, int iParam1) //Position: 0x7AB3 / 31411
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

int Function_144(int iParam0, char* cParam1, bool bParam2) //Position: 0x7D11 / 32017
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
	Function_97(iParam0, cParam1, 0, 1);
	iVar1 = Function_145();
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

int Function_145() //Position: 0x7E96 / 32406
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
	Function_146();
	return 0;
}

void Function_146() //Position: 0x7F35 / 32565
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
		Function_147(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_147(int iParam0) //Position: 0x7FE4 / 32740
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

var Function_148(int iParam0) //Position: 0x8045 / 32837
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

int Function_149(int iParam0, bool bParam1) //Position: 0x80D4 / 32980
{
	bool bVar0;
	int iVar1;
	
	Function_94(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_150(iParam0, 4294967295);
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
	iVar1 = Function_145();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_150(int iParam0, int iParam1) //Position: 0x8271 / 33393
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

void Function_151() //Position: 0x82B2 / 33458
{
	Function_153(3, 0.0f);
	Function_152(3, 10000.0f);
	return;
}

int Function_152(int iParam0, int iParam1) //Position: 0x82C8 / 33480
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x8308 / 33544
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_154(int iParam0) //Position: 0x8348 / 33608
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_155(int iParam0, bool bParam1, bool bParam2) //Position: 0x8357 / 33623
{
	int iVar0;
	bool bVar1;
	
	if (Function_154(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_104())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_75(1);
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
			Function_149(1, bVar1);
			if (!bParam2)
			{
				if (!Function_122(Global_76848, 1))
				{
					Function_117(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_158(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_122(Global_76848, 2))
				{
					Function_117(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_94(1, bVar1, 0, 0);
	}
	else
	{
		Function_157(1, (4294967295 * bVar1), 0);
	}
	if (Function_75(1) <= 4294962296)
	{
		Function_61(1, 4294962296, 0);
	}
	else if (Function_75(1) >= 5000)
	{
		Function_61(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_188(1));
	iVar0 = Function_75(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_144(2, Function_156(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_144(2, Function_156(Global_12976.f_152), 0);
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
				Function_144(2, Function_156(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_144(2, Function_156(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_144(2, Function_156(Global_12976.f_152), 1);
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
				Function_144(2, Function_156(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_144(2, Function_156(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_144(2, Function_156(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_144(2, Function_156(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_144(2, Function_156(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_144(2, Function_156(Global_12976.f_152), 1);
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
				Function_144(2, Function_156(Global_12976.f_152), 0);
			}
			break;
	}
	Function_143(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_156(int iParam0) //Position: 0x8678 / 34424
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

int Function_157(int iParam0, bool bParam1, int iParam2) //Position: 0x871B / 34587
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
	Function_73(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_62(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_158(int iParam0, bool bParam1) //Position: 0x8916 / 35094
{
	bool bVar0;
	int iVar1;
	
	Function_157(iParam0, bParam1, 0);
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
	iVar1 = Function_150(iParam0, 4294967295);
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
	iVar1 = Function_145();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

bool Function_159(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x8AB2 / 35506
{
	bool bVar0;
	
	switch (*uParam0)
	{
		case 0x00000000:
			Function_45(&iLocal_349);
			Function_185(1, 0, 1, 1, 1, 1, 0, Local_0.f_88, 1, 1, 1, 1);
			TELEPORT_ACTOR(Global_34573, &Local_0 + 1036, 1, 1, 1);
			TELEPORT_ACTOR(*uParam1, &Local_0 + 1008, 1, 1, 1);
			Function_181(*uParam1, Global_34573);
			Function_181(Global_34573, *uParam1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(Global_34573, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam1, 1);
			*uParam4 = Function_175(*uParam3, 0, 1, 0, 0);
			UI_PUSH("CutsceneWithMessages");
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(false, 0, 0, 0);
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam1);
			Function_172(uParam5, uParam6, uParam7, uParam1, uParam10);
			HUD_ENABLE(false);
			ENABLE_USE_CONTEXTS(0);
			TASK_CLEAR(*uParam1);
			TASK_STAND_STILL(*uParam1, -1.0f, 0, 0);
			*uParam0 = 1;
			break;
		
		case 0x00000001:
			if (Function_191(&iLocal_349))
			{
				if (Function_189(&iLocal_349) <= 1.0f && !Function_20(*iParam2, 2097152))
				{
					Function_208(iParam2, 2097152);
					SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(27, Global_34573, 2);
					SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(16, Global_34573, 2);
					SET_FACTIONS_STATUS_TWO_WAY(27, 16, 2);
					Function_168(uParam3);
					RESET_ANIM_SET_FOR_ACTOR(*uParam1, 0);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
					SET_ANIM_SET_FOR_ACTOR(*uParam1, "handoff", 0);
					SET_LINKED_ANIM_TARGET(*uParam1, Global_34573);
					SET_ACTION_NODE_FOR_ACTOR(*uParam1, "handoff");
					Function_165();
				}
				else if (Function_189(&iLocal_349) <= 8.5f && !Function_20(*iParam2, 4194304))
				{
					Function_208(iParam2, 4194304);
					DECOR_SET_BOOL(Global_34573, "Nosalida_TriggeringEnd", true);
					Function_164(*uParam9);
					while (SQUAD_GET_SIZE(*uParam5) >= 0)
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false);
						if (IS_ACTOR_VALID(bVar0))
						{
							SQUAD_LEAVE(bVar0);
							KILL_ACTOR(bVar0);
						}
					}
					while (SQUAD_GET_SIZE(*uParam6) >= 0)
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(*uParam6, false);
						if (IS_ACTOR_VALID(bVar0))
						{
							SQUAD_LEAVE(bVar0);
							KILL_ACTOR(bVar0);
						}
					}
					Function_164(*uParam7);
					SQUAD_LEAVE(*uParam1);
					Function_164(*uParam8);
				}
				else if (Function_189(&iLocal_349) <= 11.5f)
				{
					PRINT_BIG("NOS_PrintBig", 5f, 0, 2, 0);
					DESTROY_ACTOR(*uParam1);
					*uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_191(&iLocal_349))
			{
				if (Function_189(&iLocal_349) <= 16.25f)
				{
					UI_POP("CutsceneWithMessages");
					HUD_ENABLE(true);
					ENABLE_USE_CONTEXTS(1);
					Function_160(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_160(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x8D4C / 36172
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
		bVar0 = Function_59();
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
			if (Function_305())
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
		Function_94(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_163();
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
	Function_161(iParam9);
}

void Function_161(bool bParam0) //Position: 0x8E3C / 36412
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
		Function_162();
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

void Function_162() //Position: 0x8EEB / 36587
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

void Function_163() //Position: 0x8F5D / 36701
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_164(bool bParam0) //Position: 0x8F72 / 36722
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
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_165() //Position: 0x8FB6 / 36790
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "NoSalida_MGThanksMe", "NoSalida_MGThanksMe", 0, 4, 1, 0, 1);
		Function_166(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_166(int iParam0) //Position: 0x9005 / 36869
{
	Function_167(0, Global_34573, iParam0, 0);
	Function_167(1, bLocal_337, iParam0, 0);
	Function_167(2, bLocal_338, iParam0, 0);
	return;
}

void Function_167(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x9029 / 36905
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_20(uParam2, Function_130(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_168(int iParam0) //Position: 0x904E / 36942
{
	bool bVar0;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("NOS_AreaVultures", *iParam0, 4294967295, 0);
	Function_169(iParam0, &bVar0, &Local_0 + 84);
	return;
}

void Function_169(var uParam0, var uParam1, int iParam2) //Position: 0x907C / 36988
{
	struct<9> Var0;
	struct<8> Var9;
	vector3 vVar17;
	vector3 vVar20;
	bool bVar23;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return;
	}
	if (!IS_VOLUME_VALID(*iParam2))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(*uParam1))
	{
		*uParam1 = CREATE_OBJECTSET_IN_LAYOUT("Ambiance_VultureSet", *uParam0, 15, 0);
	}
	vVar0 = { 0.0f, 0.0f, 0.0f };
	GET_VOLUME_SCALE(*iParam2, &vVar0);
	fVar3 = ((vVar0.x + vVar0.z) / 2.0f);
	bVar4 = ROUND((vVar0.x + IntToFloat(RAND_INT_RANGE(true, 3))));
	PRINTSTRING("Trying to create this many vultures: ");
	PRINTINT(bVar4);
	PRINTNL();
	vVar5 = { 0.0f, 0.0f, 0.0f };
	GET_VOLUME_CENTER(*iParam2, &vVar5);
	iVar8 = 0;
	while (iVar8 < (bVar4 - 1))
	{
		Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170("Ambiance_Vlt") };
		vVar17 = { RAND_FLOAT_RANGE((vVar5.x - fVar3), (vVar5.x + fVar3)), RAND_FLOAT_RANGE((vVar5.y - 5.0f), (vVar5.y + 5.0f)), RAND_FLOAT_RANGE((vVar5.z - fVar3), (vVar5.z + fVar3)) };
		vVar20 = { 0.0f, RAND_FLOAT_RANGE(0.0f, 359.9f), 0.0f };
		bVar23 = CREATE_ACTOR_IN_LAYOUT(*uParam0, &Var9, 1128, vVar17, vVar20);
		MAKE_BIRD_FLY_FROM_POINT(bVar23, vVar17, vVar20);
		ADD_OBJECT_TO_OBJECTSET(bVar23, *uParam1);
		TASK_PRIORITY_SET(bVar23, 1);
		TASK_BIRD_SOAR_AT_COORD(bVar23, &vVar5, -1.0f, 1106247680);
		iVar8++;
	}
	return;
}

struct<32> Function_170(bool bParam0) //Position: 0x91D8 / 37336
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("0", &cVar8, ""), 4);
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

struct<32> Function_171(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9242 / 37442
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_172(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9261 / 37473
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (IS_BLIP_VALID(bLocal_346))
	{
		REMOVE_BLIP(bLocal_346);
	}
	if (IS_ACTOR_VALID(*uParam3))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam3)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam3));
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_BLIP_VALID(uParam4[iVar08]->f_24))
		{
			REMOVE_BLIP(uParam4[iVar08]->f_24);
		}
		iVar0++;
	}
	Function_210(*uParam0);
	SQUAD_GOALS_CLEAR(*uParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(*uParam0))
	{
		if (Function_174(*uParam0, 0))
		{
			Function_173(*uParam0);
		}
		iVar1++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(*uParam1))
	{
		if (Function_174(*uParam1, 0))
		{
			Function_173(*uParam1);
		}
		iVar2++;
	}
	bVar3 = false;
	bVar3 = false;
	while (bVar3 < (SQUAD_GET_SIZE(*uParam2) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam2, bVar3)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam2, bVar3))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam2, bVar3)));
			}
		}
		bVar3++;
	}
	return 1;
}

void Function_173(bool bParam0) //Position: 0x936B / 37739
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

bool Function_174(bool bParam0, bool bParam1) //Position: 0x93B8 / 37816
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

var Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x940E / 37902
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_63(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "NosalidaCut", 4, 1);
	}
	Function_176(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_176(int iParam0) //Position: 0x9485 / 38021
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_180(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_179(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_178(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_177(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 7.0f, 2, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 3);
	return;
}

void Function_177(int iParam0) //Position: 0x94FA / 38138
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4695.956f, 4.826315f, 3991.861f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.007988f, 0.390051f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_178(int iParam0) //Position: 0x9564 / 38244
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4697.108f, 4.808572f, 3995.103f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.010988f, 0.643152f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_179(int iParam0) //Position: 0x95CE / 38350
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4690.164f, 4.744025f, 4012.163f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.126308f, -0.271354f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_180(int iParam0) //Position: 0x9638 / 38456
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4690.805f, 5.845698f, 4011.834f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.090499f, 0.339764f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_181(var uParam0, bool bParam1) //Position: 0x96A2 / 38562
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_182(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_182(bool bParam0, vector3 vParam1) //Position: 0x96BC / 38588
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_183(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_183(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_183(bool bParam0, vector3 vParam1) //Position: 0x96F4 / 38644
{
	vector3 vVar0;
	
	Function_184(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_184(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_184(bool bParam0) //Position: 0x9777 / 38775
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_185(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x9788 / 38792
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_163();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_59();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_305())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_184(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_63(), 2, Function_184(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_94(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_19())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_186()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_186()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_313(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_312(0x4000000);
	}
	if (Function_313(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_312(0x8000000);
	}
}

var Function_186() //Position: 0x9A36 / 39478
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

int Function_187(int iParam0, bool bParam1, bool bParam2) //Position: 0x9AB5 / 39605
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
		Function_74(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_73(iParam0);
	if (bParam2)
	{
		Function_62(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_188(int iParam0) //Position: 0x9D21 / 40225
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_189(int iParam0) //Position: 0x9D5A / 40282
{
	if (Function_191(iParam0))
	{
		if (Function_190(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_190(int iParam0) //Position: 0x9E22 / 40482
{
	return Function_20(*iParam0, 2);
}

bool Function_191(int iParam0) //Position: 0x9E2F / 40495
{
	return Function_20(*iParam0, 1);
}

void Function_192(int iParam0, int iParam1) //Position: 0x9E3C / 40508
{
	if (!Function_33(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

float Function_193(bool bParam0, bool bParam1) //Position: 0x9E57 / 40535
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

void Function_194(bool bParam0, bool bParam1) //Position: 0x9F48 / 40776
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(bParam0);
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		SET_ACTOR_ONE_SHOT_DEATH(bVar1, bParam1);
		bVar2++;
	}
	return;
}

bool Function_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9) //Position: 0x9F87 / 40839
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID((*uParam1)[0]))
	{
		if (IS_ACTOR_ALIVE((*uParam1)[0]))
		{
			bVar0 = (*uParam1)[0];
		}
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_VALID((*uParam1)[1]))
		{
			if (IS_ACTOR_ALIVE((*uParam1)[1]))
			{
				bVar0 = (*uParam1)[1];
			}
		}
	}
	if (IS_VOLUME_ENABLED(Local_0.f_40))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_40))
		{
			SET_VOLUME_ENABLED(Local_0.f_40, 0);
			Function_203(*uParam3, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &Local_0 + 844, 4);
			TASK_DISMOUNT(false, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*uParam9)[0], bVar1);
			TASK_SEQUENCE_PERFORM((*uParam9)[1], bVar1);
			TASK_SEQUENCE_PERFORM((*uParam9)[2], bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
			bVar2 = GET_MOUNT((*uParam9)[0]);
			if (IS_ACTOR_VALID(bVar2))
			{
				TASK_FLEE_ACTOR(bVar2, (*uParam9)[0], 200.0f, -1.0f, 0, 0, 0);
			}
			bVar2 = GET_MOUNT((*uParam9)[1]);
			if (IS_ACTOR_VALID(bVar2))
			{
				TASK_FLEE_ACTOR(bVar2, (*uParam9)[1], 200.0f, -1.0f, 0, 0, 0);
			}
			bVar2 = GET_MOUNT((*uParam9)[2]);
			if (IS_ACTOR_VALID(bVar2))
			{
				TASK_FLEE_ACTOR(bVar2, (*uParam9)[2], 200.0f, -1.0f, 0, 0, 0);
			}
			Function_202(*uParam3, Local_0.f_44, 0, 4294967295);
		}
	}
	if (!uParam0[08]->f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(uParam0[08]->f_20) > 4)
		{
			if (IS_BLIP_VALID(uParam0[08]->f_24))
			{
				REMOVE_BLIP(uParam0[08]->f_24);
			}
			FIRE_CREATE_IN_VOLUME(uParam0[08]->f_28, Local_0.f_92, 12, 1);
			uParam0[08]->f_12 = 1;
			*uParam7++;
			if (*uParam7 <= 5)
			{
				Function_268();
				Function_163();
				Function_201();
			}
			Function_200(*uParam4, Global_34573, 1);
		}
	}
	if (!uParam0[18]->f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(uParam0[18]->f_20) > 4)
		{
			if (IS_BLIP_VALID(uParam0[18]->f_24))
			{
				REMOVE_BLIP(uParam0[18]->f_24);
			}
			FIRE_CREATE_IN_VOLUME(uParam0[18]->f_28, Local_0.f_96, 12, 1);
			uParam0[18]->f_12 = 1;
			*uParam7++;
			if (*uParam7 != 5)
			{
				Function_268();
				Function_163();
				Function_201();
			}
			Function_200(*uParam4, Global_34573, 1);
		}
	}
	if (!uParam0[28]->f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(uParam0[28]->f_20) > 4)
		{
			if (IS_BLIP_VALID(uParam0[28]->f_24))
			{
				REMOVE_BLIP(uParam0[28]->f_24);
			}
			FIRE_CREATE_IN_VOLUME(uParam0[28]->f_28, Local_0.f_100, 12, 1);
			Function_200(*uParam3, Global_34573, 1);
			Function_200(*uParam5, Global_34573, 1);
			uParam0[28]->f_12 = 1;
			*uParam7++;
			if (*uParam7 != 5)
			{
				Function_268();
				Function_163();
				Function_201();
			}
			Function_208(iParam6, 1024);
		}
	}
	if (!uParam0[38]->f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(uParam0[38]->f_20) > 4)
		{
			if (IS_BLIP_VALID(uParam0[38]->f_24))
			{
				REMOVE_BLIP(uParam0[38]->f_24);
			}
			FIRE_CREATE_IN_VOLUME(uParam0[38]->f_28, uParam0[38]->f_20, 12, 1);
			uParam0[38]->f_12 = 1;
			*uParam7++;
			if (*uParam7 != 5)
			{
				Function_268();
				Function_163();
				Function_201();
			}
		}
	}
	if (!uParam0[48]->f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(uParam0[48]->f_20) > 4)
		{
			if (IS_BLIP_VALID(uParam0[48]->f_24))
			{
				REMOVE_BLIP(uParam0[48]->f_24);
			}
			FIRE_CREATE_IN_VOLUME(uParam0[48]->f_28, uParam0[48]->f_20, 12, 1);
			uParam0[48]->f_12 = 1;
			*uParam7++;
			if (*uParam7 != 5)
			{
				Function_268();
				Function_163();
				Function_201();
			}
		}
	}
	if (*uParam7 == 5)
	{
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
		Function_199();
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
		if (IS_ACTOR_VALID((*uParam1)[0]))
		{
			Function_197((*uParam1)[0], Local_0.f_560, 1, 4, -1.0f, 1, 0, 1, 0);
		}
		if (IS_ACTOR_VALID((*uParam1)[1]))
		{
			Function_197((*uParam1)[1], Local_0.f_532, 1, 4, -1.0f, 1, 0, 1, 0);
		}
		Function_196("NOS_Army_Obj_ReturnToGen", 0x40f00000, 1, 2, 0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY_DETAIL_LIST(*uParam8, 0);
		APPEND_JOURNAL_ENTRY_DETAIL(*uParam8, "NOS_Army_Obj_ReturnToGen", 0, 0, false);
		APPEND_JOURNAL_ENTRY(*uParam8, 0);
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam2)))
		{
			ADD_BLIP_FOR_ACTOR(*uParam2, 325, 0, 2, 0);
		}
		return 1;
	}
	return 0;
}

void Function_196(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xA3C0 / 41920
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
			Var0 = { StackVal, StackVal, StackVal, Function_102(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_197(bool bParam0, bool bParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8) //Position: 0xA445 / 42053
{
	struct<6> Var0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	if (GET_OBJECT_TYPE(bParam1) != 8)
	{
		return;
	}
	GET_OBJECT_POSITION(bParam1, &Var0);
	(&Var0 + 12)->f_4 = GET_OBJECT_HEADING(bParam1);
	Function_198(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var0, iParam2, iParam3, fParam4, iParam5, iParam6, iParam7, iParam8);
}

void Function_198(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, float fParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13) //Position: 0xA49C / 42140
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	iVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &vParam1, 2.5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(iVar0))
	{
		if (iParam8 != 2)
		{
			Function_184(bParam0);
			if (VDIST(Function_184(bParam0), vParam1) < 5.0f)
			{
				if (bParam13)
				{
					TASK_GO_NEAR_COORD(false, &vParam1, 2.0f, iParam8);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(false, &vParam1, iParam8, 3212836864);
				}
			}
		}
		if (bParam10)
		{
			if (bParam11)
			{
				TASK_SHOOT_FROM_COVER(0, Global_34573, iVar0, fParam9, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, iVar0, fParam9, 1086324736);
			}
		}
		else
		{
			TASK_HIDE_AT_COVER(false, iVar0, fParam9, 6.0f, iParam12);
		}
	}
	else if (bParam10)
	{
		TASK_GO_NEAR_COORD(false, &vParam1, 5.0f, iParam8);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &vParam1, fParam9);
	}
	else
	{
		TASK_GO_TO_COORD(false, &vParam1, iParam8);
		UNK_0x44986367(StackVal, &vVar2);
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar2, vParam1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal) };
		TASK_FACE_COORD(false, &vParam1, 0);
		TASK_CROUCH(false, fParam9);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bParam0);
	TASK_PRIORITY_SET(bParam0, iParam7);
	TASK_SEQUENCE_PERFORM(bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

void Function_199() //Position: 0xA5B4 / 42420
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "NoSalida_Return2General", "NoSalida_Return2General", 0, 3, 1, 0, 1);
		Function_166(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA60B / 42507
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

void Function_201() //Position: 0xA676 / 42614
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "NoSalida_BurnsTargets", "NoSalida_BurnsTargets", 0, 3, 1, 0, 1);
		Function_166(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_202(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA6C9 / 42697
{
	var uVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	uVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, uVar1, uVar0);
	return uVar0;
}

void Function_203(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xA704 / 42756
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
				if (GET_BLIP_ICON(bVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(bVar1, iParam1);
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
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
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

bool Function_204(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA7EE / 42990
{
	if (((Function_206(Global_34573, *uParam0, 1, 0, 0, 3212836864) || Function_206(Global_34573, *uParam1, 1, 0, 0, 3212836864)) || Function_206(Global_34573, *uParam2, 1, 0, 0, 3212836864)) || Function_20(*uParam3, 16384))
	{
		Function_203(*uParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_203(*uParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_203(*uParam2, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_205(*uParam0, Global_34573, 4);
		Function_205(*uParam1, Global_34573, 4);
		Function_205(*uParam2, Global_34573, 4);
		return 1;
	}
	return 0;
}

void Function_205(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA8A6 / 43174
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

int Function_206(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA8EB / 43243
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
			if (Function_207(bParam0, bVar1, iParam2, iParam3, iParam4, iParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_207(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xA94B / 43339
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

void Function_208(int iParam0, bool bParam1) //Position: 0xAA38 / 43576
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

void Function_209(bool bParam0, float fParam1) //Position: 0xAA47 / 43591
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, fParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_210(bool bParam0) //Position: 0xAA90 / 43664
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

void Function_211(int iParam0, bool bParam1) //Position: 0xAAC2 / 43714
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

bool Function_212(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, var uParam14) //Position: 0xAAD5 / 43733
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	bool bVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	
	if (*uParam2 == 10)
	{
		return 0;
	}
	if (IS_ACTOR_VALID(bParam0) && !DECOR_CHECK_EXIST(Global_34573, "Nosalida_TriggeringEnd"))
	{
		if (Function_232(bParam0, Global_34573) || Function_231(bParam0, Global_34573, 0, 1))
		{
			Function_208(iParam4, 128);
			Function_163();
			Function_123("NOS_Help_PlayerKilledGeneral", 0x41200000, 1, 0, 2, 1, 0);
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 27, 0);
			MEMORY_CONSIDER_AS_ENEMY(bParam0, Global_34573);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			TASK_CLEAR(bParam0);
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(*uParam3) - 1))
			{
				MEMORY_CONSIDER_AS(SQUAD_GET_ACTOR_BY_INDEX(*uParam3, bVar0), Global_34573, false);
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam3, bVar0)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam3, bVar0))))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam3, bVar0)));
					}
				}
				bVar0++;
			}
			if (IS_BLIP_VALID(bLocal_346))
			{
				REMOVE_BLIP(bLocal_346);
			}
			*uParam2 = 10;
			return 0;
		}
	}
	if (!DECOR_CHECK_EXIST(Global_34573, "Nosalida_TriggeringEnd"))
	{
		if (Function_230(*uParam8, Global_34573))
		{
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
			MEMORY_CONSIDER_AS_ENEMY(bParam0, Global_34573);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			TASK_CLEAR(bParam0);
			if (!Function_20(*iParam4, 2048))
			{
				Function_163();
				Function_123("NOS_KilledArmyGuy_Help_01", 0x41200000, 1, 0, 2, 1, 0);
				Function_208(iParam4, 2048);
			}
			*uParam2 = 10;
			return 0;
		}
	}
	if (!DECOR_CHECK_EXIST(Global_34573, "Nosalida_TriggeringEnd"))
	{
		if (Function_231((*uParam1)[0], Global_34573, 0, 1) || Function_231((*uParam1)[1], Global_34573, 0, 1))
		{
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
			MEMORY_CONSIDER_AS_ENEMY(bParam0, Global_34573);
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			TASK_CLEAR(bParam0);
			if (!Function_20(*iParam4, 2048))
			{
				Function_163();
				Function_123("NOS_KilledArmyGuy_Help_01", 0x41200000, 1, 0, 2, 1, 0);
				Function_208(iParam4, 2048);
			}
			*uParam2 = 10;
			return 0;
		}
	}
	if (!iLocal_348)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_104) && IS_ACTOR_RIDING(Global_34573))
		{
			if (HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
			}
			Function_123("mission_no_horse", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_348 = 1;
		}
	}
	if (!iLocal_348)
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_104) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
			}
			Function_123("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_348 = 1;
		}
	}
	if (iLocal_348)
	{
		if (Function_227(Global_34573, Local_0.f_104) <= 15.0f)
		{
			iLocal_348 = 0;
		}
	}
	GET_POSITION(Global_34573, &vVar1);
	switch (*uParam2)
	{
		case 0x00000000:
			GET_POSITION(bParam0, &uVar4);
			if (!Function_20(*iParam4, 16))
			{
				if (!Function_191(iParam12))
				{
					Function_45(iParam12);
				}
				if (Function_189(iParam12) < 3.0f)
				{
					if (IS_ACTOR_VALID(bParam0))
					{
						*uParam10 = CREATE_GATEWAY_IN_LAYOUT(*uParam11, Function_63(), Local_0.f_104, Global_34573, 2, 3, 0, false, 1, 1);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_196("NOS_Obj_StartSeeGen", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(*uParam9, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(*uParam9, "NOS_Obj_StartSeeGen", 0, 0, false);
						APPEND_JOURNAL_ENTRY(*uParam9, 0);
						SET_ANIM_SET_FOR_ACTOR(bParam0, "excited_return", 0);
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "excited_return/mobile_and_loop/loop");
						if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*uParam10)))
						{
							SET_BLIP_BLINK(ADD_BLIP_FOR_OBJECT(*uParam10, 330, 0f, 2, 0), 1, 0, 5f);
						}
						Function_208(iParam4, 16);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam0, 0.0f);
					}
				}
			}
			if (!IS_ACTOR_IN_VOLUME(bParam0, Local_0.f_88))
			{
				*uParam2 = 3;
				break;
			}
			if (IS_OBJECT_VALID(*uParam10))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					*uParam14 = GET_MOUNT(Global_34573);
				}
				if (Function_225(*uParam10, 0, 1, 1, 1, 0))
				{
					DESTROY_OBJECT(*uParam10);
					if (!Function_35(Global_30740) != 2)
					{
						Global_3385 = 1;
						Function_224(Global_30740, 0);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					Function_208(iParam4, 32768);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
					TASK_PRIORITY_SET(bParam0, 1);
					TASK_FACE_ACTOR(bParam0, Global_34573, 1, 3212836864);
					if (IS_ACTOR_VALID(*uParam14))
					{
						if (IS_ACTOR_IN_VOLUME(*uParam14, Local_0.f_108))
						{
							SET_OBJECT_POSITION(*uParam14, *(&Local_0 + 1232));
							SET_OBJECT_ORIENTATION(*uParam14, *(&Local_0 + 1232 + 12));
						}
					}
					Function_185(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					Function_223(iParam13);
					Function_45(iParam13);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_0 + 1176), 1, 1, 1);
					Function_221(Global_34573, 0);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, *(&Local_0 + 1204), 1, 1, 1);
					Function_221(bParam0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bParam0, -1.0f, 0);
					AI_IGNORE_ACTOR(bParam0);
					Function_217(*uParam11, 0, 1, 0, 0);
					Function_268();
					Function_163();
					*uParam2 = 1;
				}
				else if (!Function_20(*iParam4, 8))
				{
					if (Function_230(*uParam3, Global_34573))
					{
						Function_208(iParam4, 8);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(bParam0, 1) == 2)
			{
				TASK_CLEAR(bParam0);
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				TASK_GO_TO_COORD(bParam0, &Local_0 + 1008, 1);
			}
			else if (GET_TASK_STATUS(bParam0, 1) == 0)
			{
				TASK_PRIORITY_SET(bParam0, 1);
				TASK_FACE_ACTOR(bParam0, Global_34573, 1, 3212836864);
				SET_ANIM_SET_FOR_ACTOR(bParam0, "excited_return", 0);
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "excited_return/mobile_and_loop/loop");
				*uParam2 = 0;
			}
			break;
		
		case 0x00000001:
			if (Function_191(iParam13))
			{
				if (Function_189(iParam13) <= 3.0f)
				{
					if (Function_20(*iParam4, 4096))
					{
						Function_216();
					}
					else
					{
						Function_215();
					}
					*uParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_191(iParam13))
			{
				if (Function_189(iParam13) <= 6.8f)
				{
					vVar7 = { -4691.224f, 3.166f, 4010.023f };
					bVar10 = LOCATE_GRINGO_OF_TYPE("molotov", &vVar7, 5.0f, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar10), "AutoGiveAway", true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 0);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_160(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					Function_45(iParam13);
					AI_STOP_IGNORING_ACTOR(bParam0);
					*uParam2 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_189(iParam13) <= 1.0f)
			{
				if (Function_20(*iParam4, 4096))
				{
					*uParam7 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam6, "helperSquad"));
					if (IS_ACTOR_VALID((*uParam1)[0]))
					{
						SQUAD_JOIN((*uParam1)[0], *uParam7);
					}
					if (IS_ACTOR_VALID((*uParam1)[1]))
					{
						SQUAD_JOIN((*uParam1)[1], *uParam7);
					}
					SQUAD_GOALS_CLEAR(*uParam7);
					Function_210(*uParam7);
					SQUAD_GOAL_ADD_BATTLE_ALLIES(*uParam7, 0, Global_34573, 2);
					SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_0.f_60, 1, 1);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
				}
				else
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, Local_0.f_60, 1, 1);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam0, -1.0f);
				}
				Function_208(iParam4, 16384);
				*uParam2 = 5;
			}
			break;
		
		case 0x00000005:
			if (FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)) == 0)
			{
				if (!IS_BLIP_VALID(bLocal_346))
				{
					bLocal_346 = ADD_BLIP_FOR_COORD(&vLocal_343, 335, 0f, 2, 0);
					SET_BLIP_NAME(bLocal_346, "NOS_Item_firebottle");
				}
				if (!Function_20(*iParam4, 64))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_196("NOS_PickupFire", 0x40f00000, 1, 2, 0, 0, 0, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(*uParam9, "NOS_PickupFire", 0, 0, false);
					APPEND_JOURNAL_ENTRY(*uParam9, 0);
					Function_208(iParam4, 64);
				}
			}
			else if (_GET_AMMO_AMOUNT(Global_34573, 4, 1) < 0.0f)
			{
				if (IS_BLIP_VALID(bLocal_346))
				{
					REMOVE_BLIP(bLocal_346);
				}
				*uParam2 = 6;
			}
			break;
		
		case 0x00000006:
			if (HUD_IS_SHOWING_OBJECTIVE())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
			}
			Function_196("NOS_Army_Obj_DestroyObjs", 0x40f00000, 1, 2, 0, 0, 0, 0);
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(*uParam9, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(*uParam9, "NOS_Army_Obj_DestroyObjs", 0, 0, false);
			APPEND_JOURNAL_ENTRY(*uParam9, 0);
			Function_214(uParam5);
			*uParam2 = 7;
			break;
		
		case 0x00000007:
			Function_267("NOS_Help_Destroy_Targets", Function_213(uParam1), 10.0f, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
			Function_208(iParam4, 131072);
			*uParam2 = 9;
			break;
		
		case 0x00000009:
			if (Function_20(*iParam4, 4096))
			{
				if ((!IS_ACTOR_ALIVE((*uParam1)[0]) && !IS_ACTOR_ALIVE((*uParam1)[1])) && !Function_20(*iParam4, 32))
				{
					Function_208(iParam4, 32);
					Function_123("NOS_Help_HelpersDead", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (IS_ACTOR_ALIVE((*uParam1)[0]) || IS_ACTOR_ALIVE((*uParam1)[1]))
				{
					Function_211(iParam4, 32);
					if (GET_TASK_STATUS((*uParam1)[0], 6) != 1 || GET_TASK_STATUS((*uParam1)[1], 6) != 1)
					{
						if (VDIST(vVar1, -4702.572f, 2.008f, 4011.515f) > 5.0f)
						{
							if (IS_ACTOR_VALID((*uParam1)[0]))
							{
								SQUAD_JOIN((*uParam1)[0], *uParam7);
							}
							if (IS_ACTOR_VALID((*uParam1)[1]))
							{
								SQUAD_JOIN((*uParam1)[1], *uParam7);
							}
							SQUAD_GOALS_CLEAR(*uParam7);
							Function_210(*uParam7);
							SQUAD_GOAL_ADD_BATTLE_ALLIES(*uParam7, 1, Global_34573, 2);
						}
					}
					else
					{
						fVar11 = 0.0f;
						if (IS_ACTOR_ALIVE((*uParam1)[0]))
						{
							fVar11 = Function_193(Global_34573, (*uParam1)[0]);
						}
						if (IS_ACTOR_ALIVE((*uParam1)[1]))
						{
							if (Function_193(Global_34573, (*uParam1)[1]) > fVar11)
							{
								fVar11 = Function_193(Global_34573, (*uParam1)[1]);
							}
						}
					}
				}
				else if (Function_20(*iParam4, 32))
				{
					vVar12 = { -4687.891f, 4.04f, 4012.0f };
					if (!(IS_ACTOR_ALIVE((*uParam1)[0]) || IS_ACTOR_ALIVE((*uParam1)[1])))
					{
						if (!(WOULD_ACTOR_BE_VISIBLE(391, &vVar12, 3212836864) && WOULD_ACTOR_BE_VISIBLE(392, &vVar12, 3212836864)))
						{
							vVar15 = { -4693.071f, 3.309f, 4013.277f };
							(*uParam1)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam6, Function_63(), 391, -4690.751f, 3.199f, 4010.532f, vVar15);
							TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
							SET_ACTOR_HEADING((*uParam1)[0], 219.018f, 1);
							SET_ACTOR_ALLOW_DISARM((*uParam1)[0], 0);
							MEMORY_CONSIDER_AS((*uParam1)[0], Global_34573, false);
							SET_CRIPPLE_ENABLE((*uParam1)[0], 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[0], 0);
							(*uParam1)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam6, Function_63(), 392, -4686.832f, 3.116f, 4007.598f, vVar15);
							TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
							SET_ACTOR_HEADING((*uParam1)[1], 219.018f, 1);
							SET_ACTOR_ALLOW_DISARM((*uParam1)[1], 0);
							MEMORY_CONSIDER_AS((*uParam1)[1], Global_34573, false);
							SET_CRIPPLE_ENABLE((*uParam1)[1], 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE((*uParam1)[1], 0);
							if (IS_ACTOR_VALID((*uParam1)[0]))
							{
								SQUAD_JOIN((*uParam1)[0], *uParam7);
							}
							if (IS_ACTOR_VALID((*uParam1)[1]))
							{
								SQUAD_JOIN((*uParam1)[1], *uParam7);
							}
							SQUAD_GOALS_CLEAR(*uParam7);
							Function_210(*uParam7);
							SQUAD_GOAL_ADD_BATTLE_ALLIES(*uParam7, 1, Global_34573, 2);
							Function_203(*uParam7, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
					}
				}
			}
			break;
	}
	return 1;
}

var Function_213(int iParam0) //Position: 0xB6F6 / 46838
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (IS_ACTOR_VALID((*iParam0)[0]))
	{
		if (IS_ACTOR_ALIVE((*iParam0)[0]))
		{
			bVar0 = true;
		}
	}
	if (IS_ACTOR_VALID((*iParam0)[1]))
	{
		if (IS_ACTOR_ALIVE((*iParam0)[1]))
		{
			bVar1 = true;
		}
	}
	if (bVar0 && bVar1)
	{
		fVar2 = Function_193(Global_34573, (*iParam0)[0]);
		if (fVar2 > Function_193(Global_34573, (*iParam0)[1]))
		{
			return (*iParam0)[0];
		}
		return (*iParam0)[1];
	}
	if (bVar0)
	{
		return (*iParam0)[0];
	}
	if (bVar1)
	{
		return (*iParam0)[1];
	}
	return "";
}

void Function_214(var uParam0) //Position: 0xB787 / 46983
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0[iVar08]->f_24 = ADD_BLIP_FOR_COORD(uParam0[iVar08], 330, 0f, 2, 0);
		SET_BLIP_PRIORITY(uParam0[iVar08]->f_24, 3);
		uParam0[iVar08]->f_12 = 0;
		iVar0++;
	}
	return;
}

void Function_215() //Position: 0xB7CB / 47051
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "NoSalida_GreetsPlayer2", "NoSalida_GreetsPlayer2", 0, 1, 1, 0, 1);
		Function_166(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_216() //Position: 0xB820 / 47136
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "NoSalida_GreetsPlayer", "NoSalida_GreetsPlayer", 0, 1, 1, 0, 1);
		Function_166(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_217(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB873 / 47219
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_63(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nNOS_Intro", 2, 1);
	}
	Function_218(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_218(int iParam0) //Position: 0xB8E8 / 47336
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_220(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_219(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 2.0f, 2);
	return;
}

void Function_219(int iParam0) //Position: 0xB931 / 47409
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.82822f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4684.729f, 5.583888f, 4011.124f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.169505f, 1.319899f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_220(int iParam0) //Position: 0xB99B / 47515
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.82822f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4683.699f, 6.361753f, 4010.798f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.040508f, 0.651719f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_221(bool bParam0, bool bParam1) //Position: 0xBA05 / 47621
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_222(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_222(bool bParam0, bool bParam1) //Position: 0xBA62 / 47714
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_223(int iParam0) //Position: 0xBA81 / 47745
{
	if (!Function_191(iParam0))
	{
		Function_46(iParam0, 0.0f);
	}
	return;
}

void Function_224(bool bParam0, bool bParam1) //Position: 0xBA96 / 47766
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	int iVar12;
	
	if (!Function_33(bParam0))
	{
		Function_31();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_30(bParam0);
	if (StackVal != 2)
	{
		Function_26("DEED_START", bParam0);
	}
	Global_13172[bParam011].f_8 = StackVal + 1;
	Global_13172[bParam011].f_4 = 2;
	Global_6271 = bParam0;
	if (!Global_34165.f_36 && bParam1)
	{
		Function_51(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_28(bParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_103(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_102(Global_6269) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

bool Function_225(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBBA6 / 48038
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(false, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(false) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_221(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_222(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_222(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_226(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_226(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_226(int iParam0, int iParam1) //Position: 0xBDB8 / 48568
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_82(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_82(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_227(bool bParam0, int iParam1) //Position: 0xBE23 / 48675
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_229(bParam0);
		vVar0 = { StackVal, StackVal, Function_229(bParam0) };
		Function_228(iParam1);
		vVar3 = { StackVal, StackVal, Function_228(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_228(bool bParam0) //Position: 0xBEA0 / 48800
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_229(bool bParam0) //Position: 0xBEB1 / 48817
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_230(bool bParam0, bool bParam1) //Position: 0xBF1B / 48923
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_231(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBF84 / 49028
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAST_ATTACKER(bParam0) == bParam1)
		{
			if (bParam2)
			{
				if (!IS_ACTOR_ALIVE(bParam0))
				{
					return 1;
				}
			}
			return 1;
		}
		if (bParam3)
		{
			if (GET_LASSO_TARGET(bParam1) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_232(bool bParam0, bool bParam1) //Position: 0xBFCB / 49099
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_233(int iParam0, var uParam1, int iParam2) //Position: 0xC000 / 49152
{
	if (!Function_20(*iParam0, 524288))
	{
		if (Function_20(*iParam0, 4096))
		{
			if ((((!uParam1[08]->f_12 || !uParam1[18]->f_12) || !uParam1[28]->f_12) || !uParam1[38]->f_12) || !uParam1[48]->f_12)
			{
				if (!Function_20(*iParam0, 4))
				{
					if (FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)) == 0)
					{
						if (!IS_BLIP_VALID(bLocal_346))
						{
							bLocal_346 = ADD_BLIP_FOR_COORD(&vLocal_343, 335, 0f, 2, 0);
							SET_BLIP_NAME(bLocal_346, "NOS_Item_firebottle");
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
							}
							Function_196("NOS_PickupFire", 0x40f00000, 1, 2, 0, 0, 0, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(*iParam2, "NOS_PickupFire", 0, 0, false);
							APPEND_JOURNAL_ENTRY(*iParam2, 0);
							Function_235(uParam1);
						}
						Function_208(iParam0, 4);
					}
				}
				else if (_GET_AMMO_AMOUNT(Global_34573, 4, 0) < 0.0f)
				{
					if (IS_BLIP_VALID(bLocal_346))
					{
						REMOVE_BLIP(bLocal_346);
					}
					Function_234(uParam1);
					Function_211(iParam0, 4);
				}
			}
		}
	}
	return;
}

void Function_234(int iParam0) //Position: 0xC11F / 49439
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iParam0[iVar08]->f_12)
		{
			iParam0[iVar08]->f_24 = ADD_BLIP_FOR_COORD(iParam0[iVar08], 330, 0f, 2, 0);
			SET_BLIP_PRIORITY(iParam0[iVar08]->f_24, 3);
		}
		iVar0++;
	}
	return;
}

void Function_235(int iParam0) //Position: 0xC166 / 49510
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_BLIP_VALID(iParam0[iVar08]->f_24))
		{
			REMOVE_BLIP(iParam0[iVar08]->f_24);
		}
		iVar0++;
	}
	return;
}

void Function_236(char* cParam0, int iParam1) //Position: 0xC197 / 49559
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_237(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_191(iParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_189(iParam1);
		}
	}
	return;
}

var Function_237(int iParam0) //Position: 0xC1D6 / 49622
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

void Function_238(var uParam0, var uParam1, int iParam2) //Position: 0xC208 / 49672
{
	*iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "BackUpHorseSquad"));
	(*uParam1)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Horse01", 976, *(&Local_0 + 1120), *(&Local_0 + 1120 + 12));
	SQUAD_JOIN((*uParam1)[0], *iParam2);
	TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*uParam1)[0], 3);
	(*uParam1)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Horse02", 977, *(&Local_0 + 1148), *(&Local_0 + 1148 + 12));
	SQUAD_JOIN((*uParam1)[1], *iParam2);
	TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*uParam1)[1], 3);
	return;
}

int Function_239(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xC2BD / 49853
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_241(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_240(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_240(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_240(bool bParam0, bool bParam1) //Position: 0xC41E / 50206
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC42B / 50219
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(bVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
		if (!Function_19())
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
		}
		else
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &uParam0, 2.0f, 0);
		}
	}
}

void Function_242(int iParam0) //Position: 0xC56E / 50542
{
	*iParam0[08] = { StackVal, StackVal, *(&Local_0 + 312) };
	iParam0[08]->f_20 = StackVal;
	iParam0[08]->f_28 = FIRE_CREATE_HANDLE();
	*iParam0[18] = { StackVal, StackVal, *(&Local_0 + 340) };
	iParam0[18]->f_20 = StackVal;
	iParam0[18]->f_28 = FIRE_CREATE_HANDLE();
	*iParam0[28] = { StackVal, StackVal, *(&Local_0 + 368) };
	iParam0[28]->f_20 = Local_0.f_12;
	iParam0[28]->f_28 = FIRE_CREATE_HANDLE();
	*iParam0[38] = { StackVal, StackVal, *(&Local_0 + 396) };
	iParam0[38]->f_20 = Local_0.f_16;
	iParam0[38]->f_28 = FIRE_CREATE_HANDLE();
	*iParam0[48] = { StackVal, StackVal, *(&Local_0 + 424) };
	iParam0[48]->f_20 = Local_0.f_20;
	iParam0[48]->f_28 = FIRE_CREATE_HANDLE();
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0xC623 / 50723
{
	*iParam1 = CREATE_OBJECTSET_IN_LAYOUT("NOS_AreaChests", *uParam0, 4294967295, 0);
	Function_244(uParam0, Local_0.f_928, iParam1);
	return;
}

void Function_244(var uParam0, bool bParam1, int iParam2) //Position: 0xC651 / 50769
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	struct<8> Var6;
	bool bVar14;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		Function_245(bVar1);
		vVar2 = { StackVal, StackVal, Function_245(bVar1) };
		bVar5 = GET_OBJECT_HEADING(bVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170("amb_areaChest") };
		bVar14 = CREATE_GRINGO_IN_LAYOUT(*uParam0, &Var6, "$/content/scripting/gringo/simpleGringo/locked_footlocker", vVar2, 0.0f, bVar5, 0.0f);
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar14), 0);
		ADD_OBJECT_TO_OBJECTSET(bVar14, *iParam2);
		if (DECOR_CHECK_EXIST(bVar1, "GringoDollarAmt"))
		{
			DECOR_SET_INT(bVar14, "GringoDollarAmt", DECOR_GET_INT(bVar1, "GringoDollarAmt"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "GiveItem"))
		{
			DECOR_SET_INT(bVar14, "GiveItem", DECOR_GET_INT(bVar1, "GiveItem"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_5"))
		{
			DECOR_SET_INT(bVar14, "Ammo_5", DECOR_GET_INT(bVar1, "Ammo_5"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_6"))
		{
			DECOR_SET_INT(bVar14, "Ammo_6", DECOR_GET_INT(bVar1, "Ammo_6"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_7"))
		{
			DECOR_SET_INT(bVar14, "Ammo_7", DECOR_GET_INT(bVar1, "Ammo_7"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_8"))
		{
			DECOR_SET_INT(bVar14, "Ammo_8", DECOR_GET_INT(bVar1, "Ammo_8"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_9"))
		{
			DECOR_SET_INT(bVar14, "Ammo_9", DECOR_GET_INT(bVar1, "Ammo_9"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_10"))
		{
			DECOR_SET_INT(bVar14, "Ammo_10", DECOR_GET_INT(bVar1, "Ammo_10"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_11"))
		{
			DECOR_SET_INT(bVar14, "Ammo_11", DECOR_GET_INT(bVar1, "Ammo_11"));
		}
		if (DECOR_CHECK_EXIST(bVar1, "Ammo_12"))
		{
			DECOR_SET_INT(bVar14, "Ammo_12", DECOR_GET_INT(bVar1, "Ammo_12"));
		}
		bVar0++;
	}
	return;
}

vector3 Function_245(bool bParam0) //Position: 0xC90D / 51469
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

void Function_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0xC934 / 51508
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	*uParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "NOS_Squad_Reb"));
	*uParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "NOS_Squad_Reb01"));
	iVar0 = 0;
	while (iVar0 < 9)
	{
		bVar1 = Function_253(&Global_6764, &Global_7879, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, 1);
			if (iVar0 <= 0 && iVar0 >= 6)
			{
				SQUAD_JOIN(bVar1, *uParam2);
			}
			else if (iVar0 <= 7 && iVar0 >= 9)
			{
				SQUAD_JOIN(bVar1, *uParam3);
			}
		}
		iVar0++;
	}
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(*uParam2, false, Local_0.f_24, 4, 1);
	Function_209(*uParam2, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(*uParam2, 2);
	Function_252(*uParam2, Global_34573);
	SQUAD_SET_FACTION(*uParam2, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*uParam2, 690856);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(*uParam3, false, Local_0.f_72, 4, 1);
	Function_209(*uParam3, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(*uParam3, 2);
	Function_252(*uParam3, Global_34573);
	SQUAD_SET_FACTION(*uParam3, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*uParam3, 690856);
	*uParam4 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "NOS_Squad_Army"));
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(*uParam4, false, Local_0.f_28, 4, 1);
	Function_209(*uParam4, -1.0f);
	Function_250(uParam1, uParam4, uParam6, uParam7, uParam8, &bLocal_338);
	Function_248(*uParam2, *uParam4, 4);
	Function_247(*uParam2, *uParam4);
	Function_247(*uParam3, *uParam4);
	vVar2 = { -4691.224f, 3.166f, 4010.023f };
	*uParam9 = CREATE_PROP_IN_LAYOUT(*uParam0, Function_63(), "$/fragments/p_gen_molotovCrate01x", vVar2, 0.0f, 0.0f, 0.0f, 1);
	CLEAR_AREA_OF_GRASS(vVar2, 2.0f);
	if (IS_OBJECT_VALID(*uParam9))
	{
		*uParam10 = UNK_0x3B32AB84(*uParam9, 1.0f, 1.0f, 1.0f);
	}
	SET_FACTIONS_STATUS_TWO_WAY(2, 16, 0);
	SET_FACTIONS_STATUS_TWO_WAY(2, 10, 0);
	SET_FACTIONS_STATUS_TWO_WAY(27, 16, 4);
	SET_FACTIONS_STATUS_TWO_WAY(27, 10, 4);
	*uParam5 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, Function_63()));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*uParam5, 690856);
	Function_252(*uParam5, Global_34573);
	SQUAD_SET_FACTION(*uParam5, 19);
	(*uParam11)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "nCalvary01", 521, *(&Local_0 + 676), *(&Local_0 + 676 + 12));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam11)[0], 1);
	SQUAD_JOIN((*uParam11)[0], *uParam5);
	bVar1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Calvary01Horse", 976, *(&Local_0 + 704), *(&Local_0 + 704 + 12));
	TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR((*uParam11)[0], bVar1);
	(*uParam11)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "nCalvary02", 522, *(&Local_0 + 732), *(&Local_0 + 732 + 12));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam11)[1], 1);
	SQUAD_JOIN((*uParam11)[1], *uParam5);
	bVar1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Calvary02Horse", 977, *(&Local_0 + 760), *(&Local_0 + 760 + 12));
	TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR((*uParam11)[1], bVar1);
	(*uParam11)[2] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "nCalvary03", 523, *(&Local_0 + 788), *(&Local_0 + 788 + 12));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam11)[2], 1);
	SQUAD_JOIN((*uParam11)[2], *uParam5);
	bVar1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Calvary03Horse", 980, *(&Local_0 + 816), *(&Local_0 + 816 + 12));
	TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR((*uParam11)[2], bVar1);
	bVar1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "ndockGuy01", 521, *(&Local_0 + 872), *(&Local_0 + 872 + 12));
	SQUAD_JOIN(bVar1, *uParam2);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_52, 4, 1);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, 1);
	bVar1 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "ndockGuy02", 523, *(&Local_0 + 900), *(&Local_0 + 900 + 12));
	SQUAD_JOIN(bVar1, *uParam2);
	ADD_ACTOR_STAY_WITHIN_VOLUME(bVar1, Local_0.f_52);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, 1);
}

void Function_247(bool bParam0, bool bParam1) //Position: 0xCD45 / 52549
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_IDENTIFY(bVar2, bVar3);
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

void Function_248(bool bParam0, bool bParam1, int iParam2) //Position: 0xCDC8 / 52680
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_249(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_249(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCE17 / 52759
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

void Function_250(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xCE61 / 52833
{
	bool bVar0;
	vector3 vVar1;
	
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 379, *(&Local_0 + 452), Function_84()), *uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 382, *(&Local_0 + 480), Function_84()), *uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 380, *(&Local_0 + 508), Function_84()), *uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 395, *(&Local_0 + 536), Function_84()), *uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 381, *(&Local_0 + 564), Function_84()), *uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 391, *(&Local_0 + 592), Function_84()), *uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 392, *(&Local_0 + 620), Function_84()), *uParam1);
	Function_251(*uParam1, 1);
	SQUAD_GOAL_ADD_COMBAT(*uParam1, 1, 4294967295, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(*uParam1, 2);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam1) - 1))
	{
		SET_ACTOR_ALLOW_DISARM(SQUAD_GET_ACTOR_BY_INDEX(*uParam1, bVar0), 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(SQUAD_GET_ACTOR_BY_INDEX(*uParam1, bVar0), 1);
		bVar0++;
	}
	vVar1 = { 0.582f, -0.209f, 0.786f };
	*uParam2 = CREATE_ACTOR_IN_LAYOUT(*uParam0, Function_63(), 396, -4688.546f, 3.2f, 4009.068f, vVar1);
	TASK_PRIORITY_SET(*uParam2, 1);
	TASK_FACE_ACTOR(*uParam2, Global_34573, 1, 3212836864);
	MEMORY_CONSIDER_AS(*uParam2, Global_34573, false);
	SET_ACTOR_ALLOW_DISARM(*uParam2, 0);
	SET_CRIPPLE_ENABLE(*uParam2, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(*uParam2, 0.0f);
	SET_ACTOR_CAN_PLAY_GESTURES(*uParam2, false);
	if (Function_20(*uParam4, 4096))
	{
		*uParam5 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "nArmyGuy01", 391, -4693.071f, 3.309f, 4013.277f, vVar1);
		(*uParam3)[0] = *uParam5;
		TASK_PRIORITY_SET((*uParam3)[0], 1);
		SET_ACTOR_STAY_WITHIN_VOLUME((*uParam3)[0], Local_0.f_64, 2, 1);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*uParam3)[0], -1.0f);
		SET_ACTOR_HEADING((*uParam3)[0], 219.018f, 1);
		SET_ACTOR_ALLOW_DISARM((*uParam3)[0], 0);
		MEMORY_CONSIDER_AS((*uParam3)[0], Global_34573, false);
		SET_CRIPPLE_ENABLE((*uParam3)[0], 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam3)[0], 1);
	}
	if (Function_20(*uParam4, 4096))
	{
		(*uParam3)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "nArmyGuy02", 392, -4686.832f, 3.116f, 4007.598f, vVar1);
		TASK_PRIORITY_SET((*uParam3)[1], 1);
		SET_ACTOR_STAY_WITHIN_VOLUME((*uParam3)[1], Local_0.f_68, 2, 1);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER((*uParam3)[1], -1.0f);
		SET_ACTOR_HEADING((*uParam3)[1], 219.018f, 1);
		SET_ACTOR_ALLOW_DISARM((*uParam3)[1], 0);
		MEMORY_CONSIDER_AS((*uParam3)[1], Global_34573, false);
		SET_CRIPPLE_ENABLE((*uParam3)[1], 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*uParam3)[1], 1);
	}
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, (*uParam3)[0], 4, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, (*uParam3)[0]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*uParam3)[0], Local_0.f_12);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, (*uParam3)[1], 4, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, (*uParam3)[1]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*uParam3)[1], Local_0.f_12);
}

void Function_251(bool bParam0, int iParam1) //Position: 0xD156 / 53590
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

void Function_252(bool bParam0, bool bParam1) //Position: 0xD197 / 53655
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

var Function_253(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xD1E9 / 53737
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
		uParam1[iVar03]->f_8 = Function_255(StackVal, StackVal, StackVal, Global_6289, Function_63(), (*uParam1)[iVar03], vVar2, 0x42700000);
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
	Function_254(StackVal, 1);
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

int Function_254(bool bParam0, bool bParam1) //Position: 0xD37F / 54143
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

var Function_255(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xD421 / 54305
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_63(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

bool Function_256(bool bParam0) //Position: 0xD53A / 54586
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_260();
	iVar1 = 0;
	if (!Function_10(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_259(bParam0[iVar03], 8);
		}
		else if (Function_258())
		{
			iVar1 = 1;
			Function_259(bParam0[iVar03], 8);
		}
		Function_259(bParam0[iVar03], 16);
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
				Function_259(bParam0[iVar03], 1);
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
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_259(bParam0[iVar03], 2);
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
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_259(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_259(bParam0[iVar03], 2);
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
	Function_257();
	return 1;
}

void Function_257() //Position: 0xD8B5 / 55477
{
	if (!Function_313(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_258() //Position: 0xD8F5 / 55541
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

void Function_259(var uParam0, int iParam1) //Position: 0xD920 / 55584
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_260() //Position: 0xD931 / 55601
{
	if (!Function_313(128))
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

bool Function_261(int iParam0) //Position: 0xD973 / 55667
{
	int iVar0;
	
	if (Global_3380 || Global_3379)
	{
		iVar0 = 0;
		while (iVar0 <= *iParam0)
		{
			if (IS_SCRIPT_VALID((*iParam0)[iVar0]))
			{
				TERMINATE_SCRIPT((*iParam0)[iVar0]);
			}
			iVar0++;
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		CLEAR_PRINTED_OBJECTIVE();
		Function_268();
		return 0;
	}
	return 1;
}

void Function_262() //Position: 0xD9BB / 55739
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_335)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_336) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_336);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_263(Global_34573, bVar1) > 100.0f)
			{
				Function_245(bVar1);
				vVar3 = { StackVal, StackVal, Function_245(bVar1) };
				if (!Function_20(iLocal_334, bVar2))
				{
					Function_208(&iLocal_334, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1.75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_211(&iLocal_334, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_263(bool bParam0, bool bParam1) //Position: 0xDA44 / 55876
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_264(bParam0);
			vVar0 = { StackVal, StackVal, Function_264(bParam0) };
			Function_264(bParam1);
			vVar3 = { StackVal, StackVal, Function_264(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_264(bool bParam0) //Position: 0xDADF / 56031
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

int Function_265(int iParam0) //Position: 0xDB4B / 56139
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_301(iParam0, 2048))
	{
		return 0;
	}
	if (Function_305() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_336 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_335 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_245(bVar1);
		vVar2 = { StackVal, StackVal, Function_245(bVar1) };
		Function_266(bVar1);
		vVar5 = { StackVal, StackVal, Function_266(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_336);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

vector3 Function_266(bool bParam0) //Position: 0xDC6F / 56431
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

int Function_267(char* cParam0, var uParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0xDC96 / 56470
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = uParam1;
			Global_63406[iVar021].f_36 = fParam2;
			Global_63406[iVar021].f_40 = iParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_268() //Position: 0xDD15 / 56597
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

void Function_269(int iParam0) //Position: 0xDD7E / 56702
{
	Function_270(&Global_28842, iParam0);
	return;
}

void Function_270(var uParam0, var uParam1) //Position: 0xDD8C / 56716
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_271() //Position: 0xDDAF / 56751
{
	int iVar0;
	var uVar1;
	
	if (Function_47(Global_30740) <= 1)
	{
		Function_208(&iLocal_501, 4096);
	}
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
	Function_192(Global_30740, 1);
	iLocal_487 = CREATE_JOURNAL_ENTRY("NOS_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(iLocal_487, 0);
	Function_274(&bLocal_377, 379, 3, 1);
	Function_274(&bLocal_377, 380, 3, 1);
	Function_274(&bLocal_377, 381, 3, 1);
	Function_274(&bLocal_377, 382, 3, 1);
	Function_274(&bLocal_377, 391, 3, 1);
	Function_274(&bLocal_377, 392, 3, 1);
	Function_274(&bLocal_377, 393, 3, 1);
	Function_274(&bLocal_377, 396, 3, 1);
	Function_274(&bLocal_377, 395, 3, 1);
	Function_274(&bLocal_377, 523, 3, 1);
	Function_274(&bLocal_377, 976, 3, 1);
	Function_274(&bLocal_377, 977, 3, 1);
	Function_274(&bLocal_377, 980, 3, 1);
	Function_274(&bLocal_377, 1128, 3, 1);
	Function_272(&bLocal_377, "$/fragments/p_gen_lantern09x", 0, 1);
	Function_272(&bLocal_377, "$/fragments/p_gen_molotovCrate01x", 0, 1);
	Function_272(&bLocal_377, "action_areas", 10, 0);
	Function_272(&bLocal_377, "handoff", 5, 0);
	Function_272(&bLocal_377, "custom/handoff", 8, 0);
	Function_272(&bLocal_377, "excited_return", 5, 0);
	Function_272(&bLocal_377, "custom/excited_return", 8, 0);
	Function_272(&bLocal_377, "$/content/scripting/gringo/simpleGringo/Locked_Footlocker", 1, 0);
	bLocal_353 = CREATE_LAYOUT("ArmyAttackLayout");
	bLocal_352 = CREATE_LAYOUT("NOS_AILayout");
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.01f);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	SET_WEAPONENUM_LOCKED(23, 0);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((!Function_18(&(Global_6764[iVar02]), 2) || Function_18(&(Global_6764[iVar02]), 4)) && ((iVar0 == 2 && iVar0 == 4) && iVar0 == 8))
		{
			Function_208(&iLocal_501, 1048576);
			iVar0 = 999;
		}
		iVar0++;
	}
	if (!Function_20(iLocal_501, 1048576))
	{
		uVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_04");
		SC_CHALLENGE_LAUNCH(uVar1);
		if (!Function_191(&iLocal_492))
		{
			Function_223(&iLocal_492);
		}
		else
		{
			Function_45(&iLocal_492);
		}
	}
	if ((!Function_122(Global_76846, 16) && !Global_34165.f_36) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_117(Global_34573, 16, 1, 0);
	}
	Function_239(-4715.903f, 3.037f, 3967.543f, 0, 0);
	Function_239(-4749.25f, 3.026f, 4029.477f, 0, 0);
	return;
}

var Function_272(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE107 / 57607
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_273(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_259(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_273(var uParam0, int iParam1, int iParam2) //Position: 0xE13F / 57663
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_259(uParam0[iVar03], 4);
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

var Function_274(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE203 / 57859
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_259(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_259(uParam0[iVar03], 8);
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

int Function_275(int iParam0, bool bParam1) //Position: 0xE2D3 / 58067
{
	int iVar0;
	
	iVar0 = Function_100(iParam0);
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

bool Function_276(int iParam0) //Position: 0xE310 / 58128
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_301(&(Global_29008[iParam0]), 2048);
}

void Function_277(bool bParam0, float fParam1) //Position: 0xE32E / 58158
{
	if (!Function_313(128))
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

void Function_278(bool bParam0, bool bParam1) //Position: 0xE36C / 58220
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
		Function_279(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_305())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_279(var uParam0, int iParam1) //Position: 0xE466 / 58470
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_280(int iParam0, var uParam1, bool bParam2) //Position: 0xE473 / 58483
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_301(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_275(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_305())
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

void Function_281(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE533 / 58675
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
		Function_282();
	}
	if (bParam5)
	{
		Function_37(1048576);
	}
}

void Function_282() //Position: 0xE646 / 58950
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_37(16384);
	}
	return;
}

void Function_283(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xE662 / 58978
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
		Function_284();
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

void Function_284() //Position: 0xE746 / 59206
{
	int iVar0;
	
	Global_26960 = Function_285(StackVal);
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

int Function_285(int iParam0) //Position: 0xE794 / 59284
{
	if (!Function_286(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_286(int iParam0) //Position: 0xE7AC / 59308
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_287(int iParam0) //Position: 0xE7C1 / 59329
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_288(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xE7D4 / 59348
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_313(2))
	{
		return;
	}
	if (Function_301(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_289(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_307(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_289(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0xE886 / 59526
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_301(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_255(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_82(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(iParam0, 4);
	}
	Function_290(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_290(bool bParam0, int iParam1) //Position: 0xE9F1 / 59889
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_82(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_82(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_82(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_82(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_82(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_82(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_291(int iParam0, var uParam1, bool bParam2) //Position: 0xEB2D / 60205
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

void Function_292(int iParam0, var uParam1, vector3 vParam2) //Position: 0xEB88 / 60296
{
	if (Function_82(StackVal, StackVal, vParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_299(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_298(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_297(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_296(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_295(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_293(StackVal, StackVal, iParam0, uParam1, vParam2);
	}
}

void Function_293(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEC32 / 60466
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_294(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_294(vector3 vParam0, vector3 vParam3) //Position: 0xEC98 / 60568
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_295(var uParam0, var uParam1, vector3 vParam2) //Position: 0xECC5 / 60613
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_294(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_296(var uParam0, var uParam1, vector3 vParam2) //Position: 0xED2D / 60717
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_294(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_297(var uParam0, var uParam1, vector3 vParam2) //Position: 0xED97 / 60823
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_294(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_298(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEDFC / 60924
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_294(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_299(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEE64 / 61028
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_294(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_300(int iParam0) //Position: 0xEEC7 / 61127
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_301(&(Global_29008[iParam0]), 4);
}

bool Function_301(var uParam0, int iParam1) //Position: 0xEEE3 / 61155
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_302(var uParam0, var uParam1, int iParam2) //Position: 0xEEFF / 61183
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_305())
	{
		return 1;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_301(&(Global_29008[iParam2]), 0x40000000))
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

int Function_303() //Position: 0xEFE0 / 61408
{
	if (Function_305())
	{
		return (Function_304() != 1 || Function_304() != 0);
	}
	return 0;
}

int Function_304() //Position: 0xEFF9 / 61433
{
	return Global_79349.f_16;
}

bool Function_305() //Position: 0xF005 / 61445
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_306(var uParam0, var uParam1, int iParam2) //Position: 0xF00E / 61454
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_305())
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_301(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_307(&(Global_29008[iParam2]), 0x40000000);
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

void Function_307(var uParam0, int iParam1) //Position: 0xF0F6 / 61686
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_308() //Position: 0xF105 / 61701
{
	var uVar0;
	
	Function_309(3, 3);
	uVar0 = uVar0;
	Function_272(&Local_315 + 4, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_272(&Local_315 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_272(&Local_315 + 4, "$/content/scripting/gringo/simplegringo/mex_cartvendor", 1, 0);
	Function_272(&Local_315 + 4, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	if (!Function_256(&Local_315 + 4))
	{
		return 0;
	}
	Local_315 = FIND_NAMED_LAYOUT("Nosalida_layout");
	if (!IS_LAYOUTREF_VALID(Local_315))
	{
		Local_315 = CREATE_LAYOUT("Nosalida_layout");
	}
	Local_315.f_56 = CREATE_GRINGO_IN_LAYOUT(Local_315, "kneel_hammer", "kneel_hammer", -4700.316f, 3.036526f, 3988.724f, 0.0f, -156.4159f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_315.f_56), 0);
	Local_315.f_60 = CREATE_GRINGO_IN_LAYOUT(Local_315, "stand_announce", "stand_announce", -4720.354f, 3.042003f, 3983.954f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_315.f_60), 0);
	Local_315.f_64 = CREATE_GRINGO_IN_LAYOUT(Local_315, "mex_cartVendor", "mex_cartVendor", -4720.121f, 3.038558f, 3987.487f, 0.0f, -197.8742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_315.f_64), 0);
	Local_315.f_68 = CREATE_GRINGO_IN_LAYOUT(Local_315, "mex_pickGarbage", "mex_pickGarbage", -4734.564f, 3.041318f, 3973.093f, 0.0f, 100.7985f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_315.f_68), 0);
	Local_315.f_72 = CREATE_GRINGO_IN_LAYOUT(Local_315, "mex_pickGarbage1", "mex_pickGarbage", -4695.087f, 3.034575f, 3978.083f, 0.0f, -137.2131f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_315.f_72), 0);
	return 1;
}

void Function_309(int iParam0, int iParam1) //Position: 0xF3F9 / 62457
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

struct<8> Function_310() //Position: 0xF442 / 62530
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
	
	Function_309(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Nosalida_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Nosalida_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_Objective_01fireVolume", 2, -4709.446f, 5.552271f, 3963.373f, 0.0f, -4.432055f, 0.0f, 9.224729f, 5.214296f, 13.86991f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_Objective_02fireVolume", 2, -4733.974f, 3.116947f, 3959.436f, 0.0f, -10.54039f, 0.0f, 8.988496f, 11.51615f, 13.89985f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_Objective_03fireVolume", 2, -4754.845f, 3.026183f, 4024.557f, 0.0f, 14.26587f, 0.0f, 12.11258f, 11.04522f, 8.636647f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_Objective_04fireVolume", 2, -4772.851f, 3.088484f, 3962.299f, 0.0f, 4.683409f, 0.0f, 6.622854f, 7.789352f, 21.06963f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_Objective_05fireVolume", 2, -4755.996f, 3.288223f, 3931.389f, 0.0f, 8.626548f, 0.0f, 20.50637f, 8.552637f, 6.570903f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_rebInside", 3, -4722.388f, 2.765542f, 3959.484f, 0.0f, -32.1914f, 0.0f, 36.05387f, 4.051332f, 29.8035f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_armyInside", 2, -4705.538f, 5.878049f, 3996.561f, 0.0f, -25.59672f, 0.0f, 39.08514f, 9.120494f, 138.936f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_gateway", 3, -4689.991f, 3.825f, 4009.823f, 0.0f, 20.0f, 0.0f, 3.351947f, 3.351947f, 3.351947f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "endOfMissionVolumeCheck", 2, -4688.099f, 2.460529f, 4010.164f, 0.0f, -45.2289f, 0.0f, 5.940689f, 7.940591f, 11.52552f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "calvaryVolume", 2, -4747.688f, 4.792599f, 4028.951f, 0.0f, 0.0f, 0.0f, 56.46494f, 19.5902f, 34.79697f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "calvaryVolumeDefend", 2, -4762.947f, 3.768141f, 4028.679f, 0.0f, 13.43209f, 0.0f, 44.56448f, 10.70631f, 25.87819f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "dockBuilding_doorFireVolume", 2, -4729.248f, 3.214536f, 3955.667f, 0.0f, -9.357233f, 0.0f, 0.5046002f, 5.885669f, 1.357214f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_DockGuyStayIn", 2, -4746.453f, 2.543439f, 3947.074f, 0.0f, -9.584526f, 0.0f, 23.04869f, 14.09589f, 17.5876f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalWanderVolume", 2, -4685.477f, 4.295681f, 4014.545f, 0.0f, 43.11362f, 0.0f, 29.63213f, 7.427694f, 28.06384f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalWanderVolume01", 2, -4685.369f, 4.084026f, 4006.042f, 0.0f, 44.21463f, 0.0f, 4.614594f, 3.431276f, 2.896145f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "helperDefendVolume", 2, -4694.468f, 3.614192f, 4013.739f, 0.0f, 47.02509f, 0.0f, 2.214979f, 5.488709f, 2.124118f);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "helperDefendVolume1", 2, -4685.167f, 3.614192f, 4006.074f, 0.0f, 47.02509f, 0.0f, 3.152885f, 5.488709f, 2.387681f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nosv_rebInside01", 3, -4755.573f, 6.633423f, 4027.75f, 0.0f, 20.0f, 0.0f, 15.32538f, 4.026557f, 12.15825f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_NearHouse01", 2, -4754.313f, 4.532856f, 4028.792f, 0.0f, 13.1505f, 0.0f, 45.75178f, 20.38658f, 49.98456f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_NearHouse02", 2, -4715.648f, 4.532856f, 3963.537f, 0.0f, -10.37949f, 0.0f, 69.31184f, 26.16855f, 66.58784f);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VoltureSpawn", 2, -4715.568f, 16.34434f, 3963.013f, 0.0f, 0.0f, 0.0f, 5.140819f, 3.472213f, 5.140819f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_GeneralStayIn", 2, -4689.667f, 4.084026f, 4010.224f, 0.0f, 44.21463f, 0.0f, 5.933511f, 4.08388f, 4.180257f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_Objective0_fire01", 2, -4708.783f, 5.497333f, 3964.844f, 0.0f, -5.895035f, 0.0f, 5.195776f, 4.434219f, 9.584059f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_Objective1_fire01", 2, -4734.606f, 5.124694f, 3958.798f, 0.0f, -10.46925f, 0.0f, 5.820748f, 5.631747f, 13.39896f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_Objective2_fire01", 2, -4754.649f, 5.464931f, 4026.394f, 0.0f, -74.14159f, 0.0f, 4.956543f, 5.219628f, 9.106956f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_GeneralGateway", 3, -4687.216f, 4.505077f, 4010.7f, 0.0f, 20.0f, 0.0f, 2.664417f, 3.306562f, 2.664417f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_horseOut", 2, -4686.678f, 3.92862f, 4011.22f, 0.0f, 44.48948f, 0.0f, 7.157873f, 7.157873f, 7.157873f);
	Local_0.f_112 = CREATE_OBJECTSET_IN_LAYOUT("PersCharSchedsSet", Local_0, 8, 0);
	*(&Local_0 + 116[06]) = { -4703.538f, 3.036527f, 3968.0f };
	*(&Local_0 + 116[06] + 12) = { 0.0f, -106.3578f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_01", -4703.538f, 3.036527f, 3968.0f, 0.0f, -106.3578f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_112);
	*(&Local_0 + 116[16]) = { -4698.436f, 3.036527f, 3960.331f };
	*(&Local_0 + 116[16] + 12) = { 0.0f, -84.63377f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_02", -4698.436f, 3.036527f, 3960.331f, 0.0f, -84.63377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_112);
	*(&Local_0 + 116[26]) = { -4703.327f, 2.886f, 3981.982f };
	*(&Local_0 + 116[26] + 12) = { 0.0f, -166.5518f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_03", -4703.327f, 2.886f, 3981.982f, 0.0f, -166.5518f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_0.f_112);
	*(&Local_0 + 116[36]) = { -4713.813f, 3.036527f, 3985.813f };
	*(&Local_0 + 116[36] + 12) = { 0.0f, -204.4494f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_04", -4713.813f, 3.036527f, 3985.813f, 0.0f, -204.4494f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_0.f_112);
	*(&Local_0 + 116[46]) = { -4719.853f, 3.036527f, 3971.027f };
	*(&Local_0 + 116[46] + 12) = { 0.0f, -111.6387f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_06", -4719.853f, 3.036527f, 3971.027f, 0.0f, -111.6387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_0.f_112);
	*(&Local_0 + 116[56]) = { -4697.857f, 2.886f, 3971.966f };
	*(&Local_0 + 116[56] + 12) = { 0.0f, -102.3352f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_07", -4697.857f, 2.886f, 3971.966f, 0.0f, -102.3352f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_0.f_112);
	*(&Local_0 + 116[66]) = { -4738.075f, 2.901256f, 4016.0f };
	*(&Local_0 + 116[66] + 12) = { 0.0f, -104.727f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_08", -4738.075f, 2.901256f, 4016.0f, 0.0f, -104.727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_0.f_112);
	*(&Local_0 + 116[76]) = { -4757.558f, 3.026183f, 4033.558f };
	*(&Local_0 + 116[76] + 12) = { 0.0f, -137.3479f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_0, "NOS_rebelSpawn_10", -4757.558f, 3.026183f, 4033.558f, 0.0f, -137.3479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_0.f_112);
	*(&Local_0 + 312) = { -4708.778f, 3.036526f, 3965.028f };
	*(&Local_0 + 312 + 12) = { 0.0f, -2.08889f, 0.0f };
	Local_0.f_336 = CREATE_POINT_IN_LAYOUT(Local_0, "nosv_Objective_01_YellowBlip", -4708.778f, 3.036526f, 3965.028f, 0.0f, -2.08889f, 0.0f);
	*(&Local_0 + 340) = { -4734.29f, 3.036526f, 3959.818f };
	*(&Local_0 + 340 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_364 = CREATE_POINT_IN_LAYOUT(Local_0, "nosv_Objective_02_YellowBlip", -4734.29f, 3.036526f, 3959.818f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 368) = { -4754.288f, 3.026182f, 4026.292f };
	*(&Local_0 + 368 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_392 = CREATE_POINT_IN_LAYOUT(Local_0, "nosv_Objective_03_YellowBlip", -4754.288f, 3.026182f, 4026.292f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 396) = { -4772.777f, 3.209405f, 3962.875f };
	*(&Local_0 + 396 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_420 = CREATE_POINT_IN_LAYOUT(Local_0, "nosv_Objective_04_YellowBlip", -4772.777f, 3.209405f, 3962.875f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 424) = { -4756.351f, 3.209512f, 3931.581f };
	*(&Local_0 + 424 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_448 = CREATE_POINT_IN_LAYOUT(Local_0, "nosv_Objective_05_YellowBlip", -4756.351f, 3.209512f, 3931.581f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 452) = { -4693.709f, 3.036527f, 3936.0f };
	*(&Local_0 + 452 + 12) = { 0.0f, 120.3813f, 0.0f };
	Local_0.f_476 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn1", -4693.709f, 3.036527f, 3936.0f, 0.0f, 120.3813f, 0.0f);
	*(&Local_0 + 480) = { -4680.0f, 3.036526f, 3953.331f };
	*(&Local_0 + 480 + 12) = { 0.0f, 92.45324f, 0.0f };
	Local_0.f_504 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn2", -4680.0f, 3.036526f, 3953.331f, 0.0f, 92.45324f, 0.0f);
	*(&Local_0 + 508) = { -4675.076f, 3.036526f, 3983.289f };
	*(&Local_0 + 508 + 12) = { 0.0f, 67.23847f, 0.0f };
	Local_0.f_532 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn3", -4675.076f, 3.036526f, 3983.289f, 0.0f, 67.23847f, 0.0f);
	*(&Local_0 + 536) = { -4701.401f, 3.036527f, 4009.017f };
	*(&Local_0 + 536 + 12) = { 0.0f, 12.40536f, 0.0f };
	Local_0.f_560 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn4", -4701.401f, 3.036527f, 4009.017f, 0.0f, 12.40536f, 0.0f);
	*(&Local_0 + 564) = { -4724.104f, 4.015711f, 4039.953f };
	*(&Local_0 + 564 + 12) = { 0.0f, 65.89757f, 0.0f };
	Local_0.f_588 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn5", -4724.104f, 4.015711f, 4039.953f, 0.0f, 65.89757f, 0.0f);
	*(&Local_0 + 592) = { -4737.167f, 5.21044f, 4049.167f };
	*(&Local_0 + 592 + 12) = { 0.0f, 68.3275f, 0.0f };
	Local_0.f_616 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn6", -4737.167f, 5.21044f, 4049.167f, 0.0f, 68.3275f, 0.0f);
	*(&Local_0 + 620) = { -4755.197f, 4.878185f, 4050.355f };
	*(&Local_0 + 620 + 12) = { 0.0f, 1.376681f, 0.0f };
	Local_0.f_644 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_ArmySpawn7", -4755.197f, 4.878185f, 4050.355f, 0.0f, 1.376681f, 0.0f);
	*(&Local_0 + 648) = { -4664.0f, 5.05754f, 4028.0f };
	*(&Local_0 + 648 + 12) = { 0.0f, 44.01219f, 0.0f };
	Local_0.f_672 = CREATE_POINT_IN_LAYOUT(Local_0, "nosf_teleport", -4664.0f, 5.05754f, 4028.0f, 0.0f, 44.01219f, 0.0f);
	*(&Local_0 + 676) = { -4826.156f, 3.552852f, 4054.156f };
	*(&Local_0 + 676 + 12) = { 0.0f, -91.84901f, 0.0f };
	Local_0.f_700 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryGuy1", -4826.156f, 3.552852f, 4054.156f, 0.0f, -91.84901f, 0.0f);
	*(&Local_0 + 704) = { -4824.0f, 3.538639f, 4054.099f };
	*(&Local_0 + 704 + 12) = { 0.0f, -89.72305f, 0.0f };
	Local_0.f_728 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryHorse1", -4824.0f, 3.538639f, 4054.099f, 0.0f, -89.72305f, 0.0f);
	*(&Local_0 + 732) = { -4826.283f, 3.227272f, 4049.253f };
	*(&Local_0 + 732 + 12) = { 0.0f, -88.79588f, 0.0f };
	Local_0.f_756 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryGuy2", -4826.283f, 3.227272f, 4049.253f, 0.0f, -88.79588f, 0.0f);
	*(&Local_0 + 760) = { -4824.0f, 3.513752f, 4050.0f };
	*(&Local_0 + 760 + 12) = { 0.0f, -91.31888f, 0.0f };
	Local_0.f_784 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryHorse2", -4824.0f, 3.513752f, 4050.0f, 0.0f, -91.31888f, 0.0f);
	*(&Local_0 + 788) = { -4822.656f, 3.011791f, 4052.188f };
	*(&Local_0 + 788 + 12) = { 0.0f, -89.68262f, 0.0f };
	Local_0.f_812 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryGuy3", -4822.656f, 3.011791f, 4052.188f, 0.0f, -89.68262f, 0.0f);
	*(&Local_0 + 816) = { -4820.658f, 3.177021f, 4052.658f };
	*(&Local_0 + 816 + 12) = { 0.0f, -91.65162f, 0.0f };
	Local_0.f_840 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryHorse3", -4820.658f, 3.177021f, 4052.658f, 0.0f, -91.65162f, 0.0f);
	*(&Local_0 + 844) = { -4777.106f, 3.599078f, 4037.106f };
	*(&Local_0 + 844 + 12) = { 0.0f, -73.366f, 0.0f };
	Local_0.f_868 = CREATE_POINT_IN_LAYOUT(Local_0, "calvaryFlag", -4777.106f, 3.599078f, 4037.106f, 0.0f, -73.366f, 0.0f);
	*(&Local_0 + 872) = { -4746.449f, 2.804573f, 3945.967f };
	*(&Local_0 + 872 + 12) = { 0.0f, -119.1971f, 0.0f };
	Local_0.f_896 = CREATE_POINT_IN_LAYOUT(Local_0, "ndockGuy01", -4746.449f, 2.804573f, 3945.967f, 0.0f, -119.1971f, 0.0f);
	*(&Local_0 + 900) = { -4741.667f, 2.579734f, 3953.043f };
	*(&Local_0 + 900 + 12) = { 0.0f, -164.6073f, 0.0f };
	Local_0.f_924 = CREATE_POINT_IN_LAYOUT(Local_0, "ndockGuy02", -4741.667f, 2.579734f, 3953.043f, 0.0f, -164.6073f, 0.0f);
	Local_0.f_928 = CREATE_OBJECTSET_IN_LAYOUT("NosalidaAreaChestsSet", Local_0, 8, 0);
	*(&Local_0 + 932[06]) = { -4743.301f, 3.088794f, 4024.138f };
	*(&Local_0 + 932[06] + 12) = { 0.0f, 17.51707f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_0, "f_AreaChest01", -4743.301f, 3.088794f, 4024.138f, 0.0f, 17.51707f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_0.f_928);
	*(&Local_0 + 932[16]) = { -4701.916f, 3.036526f, 3946.633f };
	*(&Local_0 + 932[16] + 12) = { 0.0f, 136.781f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_0, "f_AreaChest02", -4701.916f, 3.036526f, 3946.633f, 0.0f, 136.781f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_0.f_928);
	*(&Local_0 + 932[26]) = { -4732.187f, 3.036526f, 3976.027f };
	*(&Local_0 + 932[26] + 12) = { 0.0f, 188.0969f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_0, "f_AreaChest03", -4732.187f, 3.036526f, 3976.027f, 0.0f, 188.0969f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_0.f_928);
	*(&Local_0 + 1008) = { -4689.455f, 3.146862f, 4009.476f };
	*(&Local_0 + 1008 + 12) = { 0.0f, 132.6365f, 0.0f };
	Local_0.f_1032 = CREATE_POINT_IN_LAYOUT(Local_0, "f_SheriffReturnSpot", -4689.455f, 3.146862f, 4009.476f, 0.0f, 132.6365f, 0.0f);
	*(&Local_0 + 1036) = { -4690.204f, 3.177641f, 4010.204f };
	*(&Local_0 + 1036 + 12) = { 0.0f, -37.91885f, 0.0f };
	Local_0.f_1060 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PlayerTeleportSpot", -4690.204f, 3.177641f, 4010.204f, 0.0f, -37.91885f, 0.0f);
	*(&Local_0 + 1064) = { -4750.632f, 3.026183f, 4028.435f };
	*(&Local_0 + 1064 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1088 = CREATE_POINT_IN_LAYOUT(Local_0, "f_noHorseHitch01", -4750.632f, 3.026183f, 4028.435f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1092) = { -4716.0f, 3.036528f, 3967.568f };
	*(&Local_0 + 1092 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1116 = CREATE_POINT_IN_LAYOUT(Local_0, "f_noHorseHitch02", -4716.0f, 3.036528f, 3967.568f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1120) = { -4674.369f, 3.036526f, 3940.0f };
	*(&Local_0 + 1120 + 12) = { 0.0f, 96.24602f, 0.0f };
	Local_0.f_1144 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_01", -4674.369f, 3.036526f, 3940.0f, 0.0f, 96.24602f, 0.0f);
	*(&Local_0 + 1148) = { -4716.0f, 2.926777f, 4031.033f };
	*(&Local_0 + 1148 + 12) = { 0.0f, 40.28528f, 0.0f };
	Local_0.f_1172 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_02", -4716.0f, 2.926777f, 4031.033f, 0.0f, 40.28528f, 0.0f);
	*(&Local_0 + 1176) = { -4686.678f, 3.92862f, 4011.22f };
	*(&Local_0 + 1176 + 12) = { 0.0f, 49.4488f, 0.0f };
	Local_0.f_1200 = CREATE_POINT_IN_LAYOUT(Local_0, "f_MarstonStart", -4686.678f, 3.92862f, 4011.22f, 0.0f, 49.4488f, 0.0f);
	*(&Local_0 + 1204) = { -4688.117f, 3.495452f, 4009.935f };
	*(&Local_0 + 1204 + 12) = { 0.0f, -139.7478f, 0.0f };
	Local_0.f_1228 = CREATE_POINT_IN_LAYOUT(Local_0, "f_GenStart", -4688.117f, 3.495452f, 4009.935f, 0.0f, -139.7478f, 0.0f);
	*(&Local_0 + 1232) = { -4687.636f, 3.859688f, 4017.944f };
	*(&Local_0 + 1232 + 12) = { 0.0f, 96.47251f, 0.0f };
}

void Function_311(bool bParam0, int iParam1) //Position: 0x10B92 / 68498
{
	if (!Function_313(128))
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

void Function_312(int iParam0) //Position: 0x10BCD / 68557
{
	int iVar0;
	
	if (Function_20(iParam0, 1) && Function_20(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_313(int iParam0) //Position: 0x10C01 / 68609
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_314(var uParam0, int iParam1) //Position: 0x10C1D / 68637
{
	int iVar0;
	
	if (!Function_313(2))
	{
		return 0;
	}
	if (Function_301(&(Global_29008[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_18(uParam0[iVar02], 4))
			{
				if (IS_LATER_THAN(StackVal, false))
				{
					return 1;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_315(int iParam0) //Position: 0x10C87 / 68743
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
	if (Function_301(iParam0, 256))
	{
		return 0;
	}
	if (Function_305())
	{
		return 0;
	}
	return 1;
}

