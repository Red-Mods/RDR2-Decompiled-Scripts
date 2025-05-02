//Decompiled with MagicRDR v1.0
//Function Count : 105
//Statics Count : 459
//Natives Count : 129
//Parameters Count : 2

#region Local Var
	bool bLocal_0 = false;
	struct<1425> Local_1 = { 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_358 = 0;
	ScriptParam_0 = { StackVal, ScriptParam_0 };
	Function_104(ScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_103("Initializing Perdido", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_359 = 1000;
		switch (iLocal_358)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_358 = 1;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000001:
				if (Function_102())
				{
					if (Function_98(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
					iLocal_358 = 2;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000002:
				if (Function_89())
				{
					Function_88(&(Global_29008[ScriptParam_0]), 32);
					iLocal_358 = 3;
					Function_86(bLocal_0);
				}
				bLocal_359 = false;
				break;
			
			case 0x00000003:
				bLocal_360 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PerdidoVol", &ScriptParam_0, 2, 0);
				Function_85(&Global_6928, &Global_8122, ScriptParam_0);
				iLocal_358 = 5;
				bLocal_359 = false;
				break;
			
			case 0x00000005:
				if (Function_84(&Global_6928, &Global_8122, ScriptParam_0))
				{
					iLocal_358 = 4;
					bLocal_359 = false;
				}
				else
				{
					bLocal_359 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_83(&(Global_29008[ScriptParam_0]), 16))
				{
					iLocal_358 = 6;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000006:
				Function_81(0, &uLocal_364, bLocal_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_81(1, &uLocal_364, bLocal_0, -3679,491f, 42,8246f, 2107,083f, -3680,329f, 42,74f, 2115,949f, -3661,467f, 42,165f, 2152,03f, -3661,467f, 42,165f, 2152,03f, -3640,249f, 42,74f, 2104,202f, -3677,26f, 42,74f, 2107,369f);
				Function_76(&Global_6928, &Global_8122, &uLocal_364, Global_6289, ScriptParam_0);
				Function_88(&(Global_29008[ScriptParam_0]), 8);
				if (Function_83(&(Global_29008[ScriptParam_0]), 131072))
				{
					Function_75(&(Global_29008[ScriptParam_0]), 131072);
					iLocal_358 = 10;
				}
				else
				{
					iLocal_358 = 7;
				}
				bLocal_359 = false;
				break;
			
			case 0x00000007:
				Function_61(ScriptParam_0);
				if (Function_60(1) == 8)
				{
					bLocal_361 = LAUNCH_NEW_SCRIPT("$/content/Ambient/Roaming/mh_named_cougar", 0);
				}
				if (Global_26003[8])
				{
					CREATE_OBSTACLE_IN_LAYOUT(bLocal_0, "Campo_Mirada", -2147,723f, 18,671f, 4971,68f, 0.0f, 0.0f, 0.0f, 15.0f, 20.0f, 15.0f);
				}
				iLocal_358 = 8;
				bLocal_359 = false;
				break;
			
			case 0x00000008:
				Function_59(1, Global_30693[0], -2647,498f, 31,386f, 4247,398f);
				if (!Function_58(&Global_30693))
				{
					Function_54(StackVal, 2, 0,5f, 0, bLocal_0, !Function_58(&Global_30693));
					Function_53(64);
					Function_49(1, 10, 6, 0, 3);
				}
				Function_88(&(Global_29008[ScriptParam_0]), 512);
				iLocal_358 = 9;
				bLocal_359 = false;
				break;
			
			case 0x00000009:
				if (!Function_58(&Global_30693))
				{
					Function_47(bLocal_0, ScriptParam_0);
				}
				Global_29004 = 1;
				Function_88(&(Global_29008[ScriptParam_0]), 4);
				Function_46("Finished Initializing Perdido", 5.0f);
				iLocal_358 = 10;
				bLocal_359 = false;
				break;
			
			case 0x0000000A:
				if (!Function_58(&Global_30693))
				{
					if (iLocal_405)
					{
						iLocal_405 = 0;
						iLocal_358 = 8;
						bLocal_359 = false;
					}
				}
				else
				{
					iLocal_405 = 1;
				}
				Function_33(&(Global_26282[04]), "SPG", 14, bLocal_0, 0);
				if (Function_32() && Function_30())
				{
					if (IS_VOLUME_VALID(StackVal))
					{
						if (IS_ACTOR_IN_VOLUME(StackVal, Function_29()))
						{
							if (!IS_SCRIPT_VALID(bLocal_362))
							{
								bLocal_362 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Wilderness/wolfWildernessAA", 0);
							}
						}
						else if (IS_SCRIPT_VALID(bLocal_362))
						{
							TERMINATE_SCRIPT(bLocal_362);
						}
					}
				}
				if (Function_21(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_363))
					{
						bLocal_363 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_406, 51, 0);
					}
				}
				if (Function_83(&(Global_29008[ScriptParam_0]), 131072))
				{
					iLocal_358 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_359);
	}
	Function_20(ScriptParam_0);
	Function_11(&Global_6928, &Global_8122, ScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(ScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_75(&(Global_29008[ScriptParam_0]), 32);
	Function_75(&(Global_29008[ScriptParam_0]), 64);
	Function_75(&(Global_29008[ScriptParam_0]), 8);
	Function_75(&(Global_29008[ScriptParam_0]), 512);
	Function_75(&(Global_29008[ScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_360))
	{
		TERMINATE_SCRIPT(bLocal_360);
	}
	if (IS_SCRIPT_VALID(bLocal_361))
	{
		TERMINATE_SCRIPT(bLocal_361);
	}
	if (IS_SCRIPT_VALID(bLocal_362))
	{
		TERMINATE_SCRIPT(bLocal_362);
	}
	Function_46("Unloaded Perdido", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5B9 / 1465
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x5EF / 1519
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x611 / 1553
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x627 / 1575
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x63D / 1597
{
	Function_6(&Local_1 + 4);
	RELEASE_LAYOUT_REF(Local_1);
	return;
}

void Function_6(int iParam0) //Position: 0x64F / 1615
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x675 / 1653
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x7A3 / 1955
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x7BD / 1981
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x7DA / 2010
{
	RELEASE_LAYOUT_REF(bLocal_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7E5 / 2021
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_32())
	{
		return;
	}
	if (Function_83(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_75(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_18(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_18(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_17(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_18(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_17(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_83(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_83(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_88(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9D0 / 2512
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
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
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xB1F / 2847
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

int Function_14(int iParam0) //Position: 0xB4A / 2890
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

void Function_15(var uParam0, int iParam1) //Position: 0xB7E / 2942
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xB8D / 2957
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xBA9 / 2985
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xBC0 / 3008
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xBDC / 3036
{
	if (!Function_4(iParam0))
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

void Function_20(int iParam0) //Position: 0x108A / 4234
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_EVICT_ACTOR(1177, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_EVICT_ACTOR(1179, 4294967295);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_EVICT_ACTOR(1178, 4294967295);
	}
	return;
}

bool Function_21(int iParam0) //Position: 0x10F5 / 4341
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_28()))
	{
		return 0;
	}
	if (Global_63399 != 32 || Global_63399 != 1)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3404)
	{
		return 0;
	}
	if (Function_26())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_24(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_23(0))
	{
		return 0;
	}
	if (Function_32())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_22(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_22(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1178 / 4472
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

bool Function_23(int iParam0) //Position: 0x121C / 4636
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_24(int iParam0) //Position: 0x1237 / 4663
{
	if (iParam0 == 1)
	{
		if (Global_3386 == 1)
		{
			return 0;
		}
	}
	if (Global_3386 == 0)
	{
		return 0;
	}
	if (Global_29006 == Global_30640[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30717[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30668[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30658[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30685[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30723[1])
	{
		return 1;
	}
	if (Global_29006 == Global_30693[0])
	{
		return 1;
	}
	if (Global_29006 == Global_30707[1])
	{
		if (!Function_25(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_25(bool bParam0) //Position: 0x12EB / 4843
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_83(&(Global_29008[bParam0]), 2048);
}

bool Function_26() //Position: 0x1309 / 4873
{
	return Function_27(StackVal, 1);
}

int Function_27(var uParam0, bool bParam1) //Position: 0x1318 / 4888
{
	return (uParam0 && bParam1) == 0;
}

var Function_28() //Position: 0x1325 / 4901
{
	return StackVal;
}

var Function_29() //Position: 0x1330 / 4912
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_30() //Position: 0x1345 / 4933
{
	if (Function_32())
	{
		return (Function_31() != 1 || Function_31() != 0);
	}
	return 0;
}

int Function_31() //Position: 0x135E / 4958
{
	return Global_79349.f_16;
}

bool Function_32() //Position: 0x136A / 4970
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_33(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1373 / 4979
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (StackVal)
	{
		if (iParam4 == 1)
		{
			if (VDIST(Global_34574, -1804,95f, 23,088f, 2810,314f) < 250.0f)
			{
				Function_44(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 250.0f)
			{
				Function_44(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_43(iParam0, 63))
			{
				if (Function_42(76) || Function_41(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_39(cParam1, iParam0, 3, bParam3);
						Function_36(iParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(Global_34574, -1804,95f, 23,088f, 2810,314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_35();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19,075f, 2693,999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_34();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_43(iParam0, 63))
		{
			if (Function_42(76) || Function_41(76))
			{
				Function_39(cParam1, iParam0, 3, bParam3);
				Function_36(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_39(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_34() //Position: 0x156E / 5486
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_36(&(Global_26282[34]), bVar0);
		bVar0++;
	}
	return;
}

void Function_35() //Position: 0x15B5 / 5557
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_36(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_36(int iParam0, bool bParam1) //Position: 0x1607 / 5639
{
	if (bParam1 <= 32)
	{
		Function_37(iParam0, Function_38(bParam1));
	}
	else
	{
		Function_37(iParam0 + 4, Function_38((bParam1 - 32)));
	}
	return;
}

void Function_37(var uParam0, bool bParam1) //Position: 0x1630 / 5680
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_38(bool bParam0) //Position: 0x163F / 5695
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_39(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x164B / 5707
{
	bool bVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(iParam1->f_12))
	{
		iParam1->f_12 = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", bParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_43(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_40(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(bVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1->f_12);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

var Function_40() //Position: 0x16EB / 5867
{
	int iVar0;
	
	return iVar0;
}

int Function_41(int iParam0) //Position: 0x16F3 / 5875
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_42(int iParam0) //Position: 0x1708 / 5896
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_43(int iParam0, bool bParam1) //Position: 0x171D / 5917
{
	if (bParam1 <= 32)
	{
		return Function_27(*iParam0, Function_38(bParam1));
	}
	return Function_27(StackVal, Function_38((bParam1 - 32)));
}

void Function_44(int iParam0) //Position: 0x1748 / 5960
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_45(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_45(bool bParam0) //Position: 0x1774 / 6004
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

void Function_46(bool bParam0, float fParam1) //Position: 0x17B9 / 6073
{
	if (!Function_16(128))
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

void Function_47(bool bParam0, bool bParam1) //Position: 0x17F7 / 6135
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
		Function_48(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_32())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x18F1 / 6385
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_49(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x18FE / 6398
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
		Function_50();
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

void Function_50() //Position: 0x19E2 / 6626
{
	int iVar0;
	
	Global_26960 = Function_51(StackVal);
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

int Function_51(int iParam0) //Position: 0x1A30 / 6704
{
	if (!Function_52(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_52(int iParam0) //Position: 0x1A48 / 6728
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_53(bool bParam0) //Position: 0x1A5D / 6749
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_54(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1A70 / 6768
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
	Global_28842.f_32 = uParam1;
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
		Function_57();
	}
	if (bParam5)
	{
		Function_55(1048576);
	}
}

void Function_55(int iParam0) //Position: 0x1B83 / 7043
{
	Function_56(&Global_28842, iParam0);
	return;
}

void Function_56(var uParam0, var uParam1) //Position: 0x1B91 / 7057
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_57() //Position: 0x1BAC / 7084
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_55(16384);
	}
	return;
}

bool Function_58(int iParam0) //Position: 0x1BC8 / 7112
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_4((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_59(int iParam0, var uParam1, vector3 vParam2) //Position: 0x1C15 / 7189
{
	if (!Function_52(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

int Function_60(int iParam0) //Position: 0x1C77 / 7287
{
	if (Function_32() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_61(int iParam0) //Position: 0x1C9F / 7327
{
	switch (Global_30619)
	{
		case 0x00000000:
			Function_74(iParam0);
			break;
		
		case 0x00000001:
			Function_74(iParam0);
			Function_68(iParam0);
			break;
		
		case 0x00000002:
			Function_68(iParam0);
			break;
		
		case 0x00000003:
			break;
	}
	if (!Global_3365)
	{
		Function_68(iParam0);
		Function_74(iParam0);
	}
	Function_64(7, 2, 0, 0, 50, 2, 0, 0, 4, iParam0, "$/content/Ambient/Roaming/event_donkey_lead", 31, 2, 190.0f, 8, 55, 0);
	Function_63(&Global_17483[775] + 120, -5.0f, 2);
	Function_62(&Global_17483[775] + 120, 1, 3.0f, 112, 4294967295);
	return;
}

void Function_62(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1D60 / 7520
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_63(int iParam0, float fParam1, float fParam2) //Position: 0x1D86 / 7558
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = fParam2;
	return;
}

void Function_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x1D9C / 7580
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_65(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_65(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1DDE / 7646
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_67(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_66(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_67(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_66(int iParam0, int iParam1) //Position: 0x216E / 8558
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_67(int iParam0) //Position: 0x218F / 8591
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_68(int iParam0) //Position: 0x21A5 / 8613
{
	Function_64(28, 2, 25, 4294967146, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_aftermath", 63, 2, 180.0f, 8, 55, 0);
	Function_62(&Global_17483[2875] + 120, 1, 9.0f, 64, 752);
	Function_73(&Global_17483[2875] + 120, 20.0f);
	Function_72(&Global_17483[2875] + 120, 5.0f);
	Function_71(&Global_17483[2875] + 120, 12.0f, 5.0f);
	Function_70(&Global_17483[2875] + 120, 0,4f, 8.0f);
	Function_63(&Global_17483[2875] + 120, -4.0f, 2);
	Function_69(&Global_17483[2875] + 120);
	return;
}

void Function_69(int iParam0) //Position: 0x227B / 8827
{
	iParam0->f_16 = 1;
	return;
}

void Function_70(int iParam0, float fParam1, int iParam2) //Position: 0x2286 / 8838
{
	(iParam0 + 60)->f_52 = fParam1;
	(iParam0 + 60)->f_56 = iParam2;
	return;
}

void Function_71(int iParam0, float fParam1, int iParam2) //Position: 0x229C / 8860
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_48 = iParam2;
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x22B2 / 8882
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_73(int iParam0, int iParam1) //Position: 0x22C0 / 8896
{
	(iParam0 + 60)->f_20 = iParam1;
	return;
}

void Function_74(int iParam0) //Position: 0x22CE / 8910
{
	Function_64(30, 2, 50, 4294967196, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_execution", 63, 2, 180.0f, 8, 55, 0);
	Function_62(&Global_17483[3075] + 120, 2, 5.0f, 96, 752);
	Function_73(&Global_17483[3075] + 120, 32.0f);
	Function_72(&Global_17483[3075] + 120, 5.0f);
	Function_71(&Global_17483[3075] + 120, 19,9f, 8.0f);
	Function_70(&Global_17483[3075] + 120, 0,4f, 4.0f);
	Function_63(&Global_17483[3075] + 120, 0.0f, 4);
	Function_69(&Global_17483[3075] + 120);
	return;
}

void Function_75(var uParam0, int iParam1) //Position: 0x239C / 9116
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_76(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x23B3 / 9139
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_83(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_77(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_75(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_88(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_77(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2465 / 9317
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_83(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(uParam0, 2))
	{
		return 1;
	}
	if (Function_18(uParam0, 4))
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
		uParam1->f_8 = Function_80(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_79(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_78(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_78(bool bParam0, int iParam1) //Position: 0x25D0 / 9680
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_79(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_79(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_79(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_79(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_79(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_79(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_79(vector3 vParam0) //Position: 0x270C / 9996
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_80(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2724 / 10020
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_81(int iParam0, var uParam1, bool bParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, vector3 vParam18) //Position: 0x283D / 10301
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_82(StackVal, StackVal, vParam3, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam3);
		PRINTNL();
	}
	if (Function_82(StackVal, StackVal, vParam6, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam6);
		PRINTNL();
	}
	if (Function_82(StackVal, StackVal, vParam9, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam9);
		PRINTNL();
	}
	if (Function_82(StackVal, StackVal, vParam12, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam12);
		PRINTNL();
	}
	if (Function_82(StackVal, StackVal, vParam15, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam15);
		PRINTNL();
	}
	if (Function_82(StackVal, StackVal, vParam18, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTVECTOR(vParam18);
		PRINTNL();
	}
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam3 };
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam6 };
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam9 };
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam12 };
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam15 };
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam18 };
	uParam1[bVar020]->f_72 = bParam2;
}

bool Function_82(vector3 vParam0, vector3 vParam3) //Position: 0x2AE4 / 10980
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x2B11 / 11025
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_84(var uParam0, var uParam1, int iParam2) //Position: 0x2B2D / 11053
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_32())
	{
		return 1;
	}
	if (Function_83(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_19(iParam2), 12)))
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

void Function_85(var uParam0, var uParam1, int iParam2) //Position: 0x2BF9 / 11257
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_32())
	{
		return;
	}
	if (!Function_83(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_88(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

int Function_86(bool bParam0) //Position: 0x2CCF / 11471
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 12);
		ITERATE_ON_PARTIAL_NAME(bVar7, "nCampfire0");
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			bVar8 = RAND_INT_RANGE(true, 10000) > 2750;
			bVar9 = (((bVar8 || DECOR_CHECK_EXIST(bVar0, "guero")) || DECOR_CHECK_EXIST(bVar0, "always")) || Global_3370);
			bVar10 = Function_32();
			bVar11 = (Function_30() && !Function_87(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_30()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
			{
			}
			else if (bVar10 && !bVar11)
			{
				bVar12 = GET_GRINGO_FROM_OBJECT(bVar0);
				if (IS_GRINGO_VALID(bVar12))
				{
					GRINGO_ALLOW_ACTIVATION(bVar12, false);
				}
			}
			else
			{
				GET_OBJECT_POSITION(bVar0, &vVar1);
				GET_OBJECT_ORIENTATION(bVar0, &uVar4);
				strcpy(&cVar13, "p", 32);
				stradd(&cVar13, GET_OBJECT_NAME(bVar0), 32);
				CREATE_POINT_IN_LAYOUT(bParam0, &cVar13, vVar1, 0.0f, 0.0f, 0.0f);
				DESTROY_OBJECT(bVar0);
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
		return 1;
	}
	LOG_ERROR("District layout isn't valid can't setup campfires");
	return 0;
}

bool Function_87(int iParam0, bool bParam1) //Position: 0x2E18 / 11800
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_88(var uParam0, int iParam1) //Position: 0x2E38 / 11832
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_89() //Position: 0x2E47 / 11847
{
	bool bVar0;
	
	Function_97(3, 3);
	bVar0 = bVar0;
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire03_law", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/spittoon", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/mex_sitground", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire03_bad", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_95(&Local_1 + 4, "$/content/scripting/gringo/simplegringo/treasure_hunting_4", 1, 0);
	if (!Function_90(&Local_1 + 4))
	{
		return 0;
	}
	Local_1 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(Local_1))
	{
		Local_1 = CREATE_LAYOUT("Perdido_layout");
	}
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint", -2234,103f, 23,09f, 4450,451f, 0.0f, 327,653f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint1", -2808,015f, 16,467f, 3991,746f, 0.0f, 132,438f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint3", -2719,469f, 56,13536f, 4626,306f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint4", -2401,135f, 9,357473f, 3965,135f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint5", -1197,553f, 19,07451f, 4961,553f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint6", -1446,914f, 19,69032f, 4912.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint7", -1755,834f, 28,35469f, 4824.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint8", -2136,56f, 19,42f, 5001,652f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint9", -1146,611f, 27,98853f, 4818,058f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint910", -1341,777f, 13,05099f, 4301,776f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint11", -1352f, 13,05099f, 4281,627f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint12", -1370,036f, 13,05099f, 4317,523f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint13", -1378,815f, 13,05099f, 4295,221f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 632) = { -3385,052f, 55,49248f, 4743,046f };
	*(&Local_1 + 632 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_656 = CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint15", -3385,052f, 55,49248f, 4743,046f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 660) = { -2143,072f, 19,566f, 5003,717f };
	*(&Local_1 + 660 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_684 = CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhtreas", -2143,072f, 19,566f, 5003,717f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 688) = { -2169,115f, 19,743f, 5013,526f };
	*(&Local_1 + 688 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_1.f_712 = CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhtreas1", -2169,115f, 19,743f, 5013,526f, 0.0f, 0.0f, 0.0f);
	*(&Local_1 + 716) = { -2151,229f, 18,553f, 4973,971f };
	*(&Local_1 + 716 + 12) = { 0.0f, 180.0f, 0.0f };
	Local_1.f_740 = CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhtreas2", -2151,229f, 18,553f, 4973,971f, 0.0f, 180.0f, 0.0f);
	Local_1.f_744 = CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint911", -1201,65f, 19,075f, 4963,207f, 0.0f, 240,685f, 0.0f);
	Local_1.f_748 = CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint912", -1198,822f, 19,075f, 4956,911f, 0.0f, 190,323f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint913", -2232,852f, 23,085f, 4457,229f, 0.0f, 87,258f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint914", -2239,331f, 23,086f, 4456,599f, 0.0f, 135,904f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhtreas3", -2228,931f, 23,09f, 4456,119f, 0.0f, 210,21f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_1, "prdf_bhint915", -2733,588f, 55,062f, 4606,517f, 0.0f, 99,203f, 0.0f);
	Local_1.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire07", "Campfire03", -2465,021f, 11,02602f, 4021,062f, 0.0f, 255,1009f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_752, "MP_ONLY", true);
	Local_1.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire08", "Campfire01", -2759,006f, 14,05219f, 3972f, 0.0f, 0.0f, 0.0f);
	Local_1.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire09", "Campfire05", -2165,375f, 11,06847f, 3813,112f, 0.0f, 56,36899f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_760, "MP_ONLY", true);
	Local_1.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire010", "Campfire05", -1980f, 7,070621f, 4032.0f, 0.0f, -14,43717f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_764, "MP_ONLY", true);
	Local_1.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire05", "Campfire01", -3004,241f, 33,12941f, 4427,017f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_768, "MP_ONLY", true);
	Local_1.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire012", "Campfire02", -3027,138f, 32,12549f, 4577,484f, 0.0f, -59,83344f, 0.0f);
	Local_1.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire013", "Campfire05", -2860,492f, 33,1228f, 4611,906f, 0.0f, 71,91928f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_776, "MP_ONLY", true);
	Local_1.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire015", "Campfire03_law", -2632.0f, 28,1098f, 4538,587f, 0.0f, 0.0f, 0.0f);
	Local_1.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire016", "Campfire01", -2575,899f, 25,09804f, 4587,576f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_cleanrifle", "sit_cleanrifle", -1442,006f, 19,69032f, 4912,689f, 0.0f, 47,24794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", -1362,953f, 13,07964f, 4300,644f, 0.0f, -18,15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -1359,716f, 13,05099f, 4298,842f, 0.0f, -272,5584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_sit_ground_smoke3", "sit_ground_smoke", -1364,03f, 13,04671f, 4298,394f, 0.0f, -112,4335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -1362,544f, 13,05099f, 4296,964f, 0.0f, -180,1093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay13", "horse_stay", -1394,776f, 12,977f, 4308,042f, 0.0f, 74,33443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay12", "horse_stay", -1386,643f, 13,051f, 4290,629f, 0.0f, 41,19416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay11", "horse_stay", -1396,363f, 13,05099f, 4300,878f, 0.0f, 48,00632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay10", "horse_stay", -1400,339f, 11,495f, 4292,966f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_Pee3", "Pee", -1385,775f, 13,05099f, 4298,206f, 0.0f, 28,35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", -1378,63f, 13,056f, 4306,34f, 0.0f, -18,15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", -1372,292f, 13,05099f, 4291,89f, 0.0f, -28,9995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1374,563f, 13,05099f, 4297,688f, 0.0f, 9,780541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_look_out_window_R", "look_out_window_R", -1380,752f, 13,04853f, 4297,446f, 0.0f, -41,49537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay21", "horse_stay", -1365,99f, 13,051f, 4324,597f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay20", "horse_stay", -1384,05f, 12,988f, 4324,893f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay19", "horse_stay", -1388,964f, 12,966f, 4324,276f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay18", "horse_stay", -1364,119f, 13,051f, 4332,481f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", -1354,34f, 13,05099f, 4309,859f, 0.0f, 27,99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", -1361,21f, 13,05939f, 4316,554f, 0.0f, 192,786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", -1368,854f, 13,05759f, 4314,05f, 0.0f, -18,15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_sit_ground_smoke2", "sit_ground_smoke", -1371,078f, 13,05098f, 4315,158f, 0.0f, 82,18061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand6", "rand_idle_stand", -1381,432f, 13,037f, 4321,681f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay15", "horse_stay", -1331,086f, 13,691f, 4317,092f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay14", "horse_stay", -1335,886f, 13,273f, 4317,106f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay17", "horse_stay", -1329,264f, 13,051f, 4300,218f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_horse_stay16", "horse_stay", -1327,329f, 13,051f, 4303,468f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", -1347,543f, 13,051f, 4305,105f, 0.0f, 27,99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand4", "rand_idle_stand", -1334,242f, 13,051f, 4304,613f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand5", "rand_idle_stand", -1336,62f, 13,051f, 4294,1f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand3", "rand_idle_stand", -1353,39f, 13,051f, 4312,579f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_sit_ground_smoke4", "sit_ground_smoke", -1343,849f, 13,056f, 4296,042f, 0.0f, -73,48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_Pee4", "Pee", -1352,655f, 13,051f, 4301,614f, 0.0f, 28,35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand", "rand_idle_stand", -1346,009f, 13,056f, 4294,357f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", -1346,468f, 13,05098f, 4307,142f, 0.0f, 118,1131f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_horse_stay10c", "horse_stay", -1361,381f, 13,103f, 4268,063f, 0.0f, -185,5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_horse_stay9", "horse_stay", -1344,416f, 13,051f, 4267,783f, 0.0f, -161,8634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_horse_stay8", "horse_stay", -1361,88f, 13,051f, 4274,834f, 0.0f, -185,5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_horse_stay", "horse_stay", -1352,36f, 13,051f, 4270,885f, 0.0f, 212,416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_sit_ground_smoke", "sit_ground_smoke", -1350,854f, 13,051f, 4272,156f, 0.0f, -73,48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_smoking_stand2", "smoking_stand", -1349,743f, 13,05099f, 4283,362f, 0.0f, -55,15614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_Pee2", "Pee", -1356,144f, 13,05099f, 4286,991f, 0.0f, -151,8606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand2", "rand_idle_stand", -1341,542f, 13,051f, 4278,057f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Sep_Pee", "Pee", -1360,661f, 13,107f, 4286,437f, 0.0f, 152,3031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_smoking_stand", "smoking_stand", -1358,714f, 13,051f, 4282,462f, 0.0f, -53,74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_rand_idle_stand1", "rand_idle_stand", -1341,542f, 13,051f, 4278,057f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", -1343,447f, 13,056f, 4286,479f, 0.0f, -35,46272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", -1339,343f, 13,051f, 4267,934f, 0.0f, 2,252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", -1324,474f, 13,051f, 4303,514f, 0.0f, 2,252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", -1372,628f, 13,05f, 4335,497f, 0.0f, 14,92106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", -1408,984f, 14,318f, 4305,296f, 0.0f, 2,252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_look_out_window_L1", "look_out_window_L", -2150,377f, 18,76063f, 4969,059f, 0.0f, -26,47319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sleeping_scripted1", "sleeping_scripted", -2144,55f, 18,6851f, 4975,894f, 0.0f, -88,98843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sleeping_scripted", "sleeping_scripted", -2150,153f, 18,88321f, 4972,78f, 0.0f, -88,98843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_lean_table", "lean_table", -2147,479f, 18,65697f, 4971,42f, 0.0f, 167,0051f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_lookdistance1", "stand_lookdistance_w_any", -2145,568f, 18,68168f, 4966,235f, 0.0f, -2,904451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_look_out_window_L", "look_out_window_L", -2147,026f, 18,68168f, 4966,039f, 0.0f, 11,03522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_RandIdleNearWall1", "Rand_Idle_NearWall", -2144,973f, 18,68168f, 4967,628f, 0.0f, -0,2829188f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_barrel1", "sit_barrel", -2148,418f, 18,58588f, 4977,662f, 0.0f, 304,4866f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_rand_idle_stand4", "rand_idle_stand", -2183,856f, 21,39841f, 4981,333f, 0.0f, -60,1594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_peeing3", "stand_peeing_b_any", -2107,46f, 21,99772f, 5025,458f, 0.0f, -52,97831f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_peeing2", "stand_peeing_b_any", -2121,297f, 20,69375f, 4956,572f, 0.0f, -55,82038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_ground_smoke3", "sit_ground_smoke", -2109,987f, 26,07461f, 4977,125f, 0.0f, 54,48457f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_rand_idle_stand3", "rand_idle_stand", -2121,831f, 20,61072f, 4955,092f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_rand_idle_stand2", "rand_idle_stand", -2163,704f, 18,88586f, 4949,102f, 0.0f, -19,02433f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_rand_idle_stand1", "rand_idle_stand", -2147,941f, 18,0743f, 4985,551f, 0.0f, -26,28773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_rand_idle_stand", "rand_idle_stand", -2149,982f, 18,14022f, 4983,896f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_harmonica2", "sit_ground_play_harmonica", -2155,802f, 19,9801f, 5017,955f, 0.0f, -17,66678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_ground_smoke2", "sit_ground_smoke", -2168,007f, 20,96798f, 5023,034f, 0.0f, -116,3746f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_smoking_stand2", "smoking_stand", -2168.0f, 20,26305f, 5016.0f, 0.0f, -38,86214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_1.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_yelling_mid", "stand_yelling_mid", -2139,542f, 25,13448f, 5021,14f, 0.0f, 15,77838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_1.f_788), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_guntricks3", "stand_guntricks_e_any", -2175,003f, 19,79538f, 4967,382f, 0.0f, -97,18321f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay14", "horse_stay", -1169,324f, 25,09804f, 4848,183f, 0.0f, -51,58591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sit_ground_smoke1", "sit_ground_smoke", -1146,617f, 27,98853f, 4816,168f, 0.0f, -227,0327f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_guntricks1", "stand_guntricks_e_any", -1149,78f, 28,08622f, 4824,229f, 0.0f, 109,0677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_Rand_Idle_NearWall1", "Rand_Idle_NearWall", -1147,647f, 28,1014f, 4824,906f, 0.0f, -939,9426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay13", "horse_stay", -1154,639f, 25,45039f, 4840,386f, 0.0f, -91,62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay12", "horse_stay", -1158,92f, 25,95507f, 4832,619f, 0.0f, -359,8061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay11", "horse_stay", -1170,505f, 25,098f, 4845,793f, 0.0f, -91,62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Pee", "Pee", -1166,162f, 25,4834f, 4827,507f, 0.0f, 38,67871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay10", "horse_stay", -1153,202f, 25,77849f, 4837,963f, 0.0f, -91,62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_rand_idle_stand2", "rand_idle_stand", -1151,732f, 26,68782f, 4826,975f, 0.0f, 146,4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sit_ground_smoke", "sit_ground_smoke", -1147,908f, 27,98853f, 4815,805f, 0.0f, -169,97f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_rand_idle_stand1", "rand_idle_stand", -1155,885f, 26,11555f, 4831,447f, 0.0f, 163,3344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance7", "stand_lookdistance_w_any", -1165,903f, 26,199f, 4816,392f, 0.0f, 11,74429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance6", "stand_lookdistance_w_any", -1142,304f, 27,06421f, 4829,555f, 0.0f, -140,6723f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance4", "stand_lookdistance_w_any", -1153,553f, 27,915f, 4812,71f, 0.0f, 8,464398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance3", "stand_lookdistance_w_any", -1138,232f, 27,92258f, 4821,114f, 0.0f, -95,10341f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance2", "stand_lookdistance_w_any", -1153,667f, 25,19662f, 4842,685f, 0.0f, -229,6765f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay9", "horse_stay", -1158,446f, 26,204f, 4827,642f, 0.0f, -91,62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay8", "horse_stay", -1140,124f, 28,109f, 4817,715f, 0.0f, 91,29439f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_horse_stay", "horse_stay", -1161,263f, 25,92668f, 4830,808f, 0.0f, -378,4707f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_yawning", "stand_yawning_n_any", -1141,497f, 27,527f, 4823,505f, 0.0f, 135,6908f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_guntricks", "stand_guntricks_e_any", -1141,31f, 28,07663f, 4816,137f, 0.0f, 109,0677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_look_out_window_L", "look_out_window_L", -1149,772f, 27,989f, 4825,187f, 0.0f, 52,4463f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_sleeping_wall_scripted", "sleeping_wall_scripted", -1144,439f, 28,16429f, 4820,793f, 0.0f, 52,06534f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_rand_idle_stand", "rand_idle_stand", -1148,397f, 28,083f, 4824,674f, 0.0f, 146,4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_sit_docks", "nsit_docks", -1152,421f, 28,09809f, 4823,037f, 0.0f, 138,8232f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance1", "stand_lookdistance_w_any", -1154,668f, 26,40717f, 4825,65f, 0.0f, 180,2952f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_stand_lookdistance", "stand_lookdistance_w_any", -1143,384f, 28,077f, 4812,623f, 0.0f, -31,23636f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ran_lookdistance_binocs", "look_distance_binocs", -1158,382f, 27,096f, 4811,459f, 0.0f, 15,42521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_guntricks2", "stand_guntricks_e_any", -2112.0f, 24,78965f, 4984.0f, 0.0f, 24,5157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_leaning_stand", "leaning_stand", -2162,551f, 18,11316f, 4962,492f, 0.0f, 169,6326f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_pocketwatch", "stand_pocketwatch_e_any", -2142,839f, 17,06667f, 4953,641f, 0.0f, 25,44062f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_key_twirl", "stand_key_twirling", -2142,178f, 18,2133f, 4967,677f, 0.0f, 21,08159f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_guntricks1", "stand_guntricks_e_any", -2150,272f, 17,06667f, 4955,959f, 0.0f, -10,82537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_spittoon1", "spittoon", -2141,107f, 17,06667f, 4953,017f, 0.0f, 179,5756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_spittoon", "spittoon", -2168.0f, 19,44606f, 4952.0f, 0.0f, 13,08312f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_play_harmonica", "sit_ground_play_harmonica", -2159,549f, 18,08265f, 4964,163f, 0.0f, -38,89871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_lean_rail_fwd", "lean_rail_forward", -2146,244f, 18,37671f, 4993,393f, 0.0f, 18,53289f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_mex_chair_sit", "mex_chair_sit", -2140,079f, 18,07059f, 4987,028f, 0.0f, -183,9298f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_sit_barrel", "sit_barrel", -2141,56f, 18,06992f, 4987,607f, 0.0f, 238,0275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_RandIdleNearWall", "Rand_Idle_NearWall", -2153,9f, 18,54898f, 4973,194f, 0.0f, 84,53752f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_mex_sitGround1", "mex_sitGround", -2145,565f, 18,1965f, 4963,157f, 0.0f, 169,7416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_mex_sitGround", "mex_sitGround", -2151,62f, 18,62823f, 4967,137f, 0.0f, 188,22f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_mex_stool_sit", "mex_stool_sit", -2143,014f, 18,40978f, 4972,36f, 0.0f, 270,9647f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_look_binocs2", "look_distance_binocs", -2125,51f, 21,88434f, 4976,438f, 0.0f, 20,74133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_worried", "stand_worried_n_any", -2147,102f, 18,25595f, 4963,947f, 0.0f, 1,017094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_yawning", "stand_yawning_n_any", -2142,325f, 18,26016f, 4969,863f, 0.0f, -27,79862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_Pee", "Pee", -2141,521f, 18,26262f, 4989,459f, 0.0f, 274,3436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_horse_stay10", "horse_stay", -2156,871f, 18,32751f, 4968,682f, 0.0f, -93,17694f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_horse_stay9", "horse_stay", -2146,335f, 18,07149f, 4989,306f, 0.0f, -34,30241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_horse_tend", "horse_tend", -2139,4f, 18,17197f, 4973,717f, 0.0f, -112,1472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_guntricks", "stand_guntricks_e_any", -2151,342f, 18,59703f, 4975,875f, 0.0f, -586,383f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_stand_lookdistance", "stand_lookdistance_w_any", -2122,872f, 20,44026f, 4952,769f, 0.0f, -2,904451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_smoking_stand", "smoking_stand", -2148,095f, 18,58343f, 4978,466f, 0.0f, -255,1086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_look_binocs", "look_distance_binocs", -2154,062f, 17,335f, 4951,49f, 0.0f, 6,739808f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ncam_stand", "rand_idle_stand", -2144,354f, 18,18847f, 4963,678f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_Sit_Ground", "Rand_Idle_Sit_Ground", -2141,606f, 18,32081f, 4973,772f, 0.0f, -20,28081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "cam_horse_staye", "horse_stay", -2139,533f, 18,28407f, 4971,81f, 0.0f, -244,4586f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_1.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire017", "Campfire04", -2002,204f, 17,06667f, 4679,053f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_792, "MP_ONLY", true);
	Local_1.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire018", "Campfire03", -2502,995f, 6,023551f, 4100.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire03", "Campfire03", -1478,438f, 11,04314f, 4126,377f, 0.0f, 254,6316f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_800, "MP_ONLY", true);
	Local_1.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire019", "Campfire03", -3211,368f, 7,107861f, 4204,345f, 0.0f, 254,571f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_804, "MP_ONLY", true);
	Local_1.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire020", "Campfire02", -3507,191f, 25,09805f, 4355,799f, 0.0f, 93,92932f, 0.0f);
	Local_1.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire021", "Campfire03", -2576f, 28,1098f, 4434,404f, 0.0f, -101,3264f, 0.0f);
	Local_1.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire022", "Campfire03", -2374,848f, 22,00761f, 4708,612f, 0.0f, 0.0f, 0.0f);
	Local_1.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire023", "Campfire03_bad", -2362,249f, 24,05876f, 4831,446f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_820, "MP_ONLY", true);
	Local_1.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire024", "Campfire05", -2212.0f, 18,97561f, 4733,972f, 0.0f, 0.0f, 0.0f);
	Local_1.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire02", "Campfire05", -2225,934f, 21,08237f, 4560.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire025", "Campfire02", -2370,778f, 23,07593f, 4657,222f, 0.0f, 0.0f, 0.0f);
	Local_1.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire026", "Campfire01", -2318,043f, 21,13764f, 4658,043f, 0.0f, 82,47433f, 0.0f);
	Local_1.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire027", "Campfire05", -2220,514f, 19,07451f, 4799,486f, 0.0f, 0.0f, 0.0f);
	Local_1.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire028", "Campfire02", -3062,95f, 33,12811f, 4638,467f, 0.0f, 0.0f, 0.0f);
	Local_1.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", -3087,487f, 34,13335f, 4568.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", -2924,045f, 12,11589f, 4522,543f, 0.0f, 0.0f, 0.0f);
	Local_1.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", -3123,044f, 12,85511f, 4296,765f, 0.0f, 0.0f, 0.0f);
	Local_1.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", -3147,61f, 13,04445f, 4349,696f, 0.0f, 0.0f, 0.0f);
	Local_1.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", -2920,644f, 13,88983f, 4184f, 0.0f, 0.0f, 0.0f);
	Local_1.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", -2874,131f, 15,28646f, 4357,87f, 0.0f, 0.0f, 0.0f);
	Local_1.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", -2748,333f, 37,12934f, 4416,379f, 0.0f, 0.0f, 0.0f);
	Local_1.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", -2818,678f, 32,12549f, 4600f, 0.0f, 0.0f, 0.0f);
	Local_1.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", -2604.0f, 29,12662f, 4336f, 0.0f, 0.0f, 0.0f);
	Local_1.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", -2784.0f, 32,12549f, 4348f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_rand_idle_stand", "rand_idle_stand", -2238,265f, 23,082f, 4457,25f, 0.0f, -43,25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_guntricks3", "stand_guntricks_e_any", -2246,608f, 23,09f, 4454,54f, 0.0f, 45,55705f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "hen_smoking_stand1", "smoking_stand", -1748,846f, 29,389f, 4821,137f, 0.0f, -53,74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "hen_rand_idle_stand5", "rand_idle_stand", -1742,056f, 29,825f, 4826,535f, 0.0f, 146,4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_horse_stay11", "horse_stay", -1758,203f, 32,04f, 4839,499f, 0.0f, 26,17468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "hen_rand_idle_stand4", "rand_idle_stand", -1760,731f, 29,988f, 4812,287f, 0.0f, 146,4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "hen_rand_idle_stand3", "rand_idle_stand", -1759,747f, 30,356f, 4818,834f, 0.0f, 146,4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_guntricks2", "stand_guntricks_e_any", -1761,983f, 31,035f, 4829,209f, 0.0f, -198,7769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "hen_pee1", "Pee", -1754,625f, 32,599f, 4841,774f, 0.0f, 274,3436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "hen_pee", "Pee", -1750,039f, 31,213f, 4832,931f, 0.0f, 274,3436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_lookdistance5", "stand_lookdistance_w_any", -1767,221f, 29,813f, 4816,635f, 0.0f, -101,2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_lookdistance4", "stand_lookdistance_w_any", -1760,551f, 29,471f, 4799,91f, 0.0f, -101,2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_lookdistance3", "stand_lookdistance_w_any", -1738,453f, 28,481f, 4815,337f, 0.0f, -101,2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_lookdistance2", "stand_lookdistance_w_any", -1735,159f, 31,502f, 4837,971f, 0.0f, -101,2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_lookdistance1", "stand_lookdistance_w_any", -1761,964f, 32,427f, 4843,662f, 0.0f, -101,2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1757,995f, 30,40155f, 4819,907f, 0.0f, -167,475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_horse_stay10", "horse_stay", -1756,031f, 30,91866f, 4830,044f, 0.0f, 26,17468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_horse_stay8", "horse_stay", -1762,697f, 31,18394f, 4830,312f, 0.0f, 35,7719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_horse_stay", "horse_stay", -1759,648f, 30,8288f, 4828,202f, 0.0f, 26,65729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_Rand_Ground1", "Rand_Idle_Sit_Ground", -1753,325f, 29,80431f, 4821,001f, 0.0f, 39,70086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen__drunk_throwbottle", "stand_drunk_throwbottle", -1763,918f, 30,20828f, 4818,522f, 0.0f, 92,05388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_guntricks1", "stand_guntricks_e_any", -1756,531f, 30,36356f, 4819,299f, 0.0f, -198,7769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_guntricks", "stand_guntricks_e_any", -1756,578f, 30,61364f, 4824,122f, 0.0f, 23,2416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_campfire_talk", "campfire_talk", -1758,249f, 30,5826f, 4823,424f, 0.0f, -108,3938f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen__stand", "rand_idle_stand", -1755,974f, 30,53736f, 4823,08f, 0.0f, -323,2545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_Sit_Grounde", "Rand_Idle_Sit_Ground", -1759,385f, 30,48355f, 4821,405f, 0.0f, 268,905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_stand_lookdistance", "stand_lookdistance_w_any", -1754,221f, 29,264f, 4806,449f, 0.0f, -101,2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Hen_look_binocs", "look_distance_binocs", -1757,968f, 29,94079f, 4809,994f, 0.0f, -8,110764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -2266,168f, 22,992f, 4469,771f, 0.0f, -142,5218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_rand_idle_stand2", "rand_idle_stand", -2748,117f, 46,183f, 4608,924f, 0.0f, 72,66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_rand_idle_stand1", "rand_idle_stand", -2738,463f, 52,114f, 4605,324f, 0.0f, 72,66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_rand_idle_stand5", "rand_idle_stand", -1202,635f, 19,137f, 4955,752f, 0.0f, -43,25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_stand_guntricks1", "stand_guntricks_e_any", -1457,679f, 19,4f, 4899,244f, 0.0f, -42,21369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_smoking_stand1", "smoking_stand", -1448,115f, 19,663f, 4903,778f, 0.0f, 261,8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_rand_idle_stand4", "rand_idle_stand", -1453,147f, 19,691f, 4904,472f, 0.0f, 66,39404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_rand_idle_stand3", "rand_idle_stand", -1437,73f, 19,063f, 4916,631f, 0.0f, 66,39404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag__dnd_rowdydrink2", "stand_dnd_rowdydrink", -1443,396f, 19,69032f, 4914,826f, 0.0f, 13,5401f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag__dnd_rowdydrink1", "stand_dnd_rowdydrink", -1446,205f, 19,69032f, 4909,839f, 0.0f, -134,5815f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_sleeping_wall_scripted", "sleeping_wall_scripted", -1467,928f, 20,55f, 4901,703f, 0.0f, -112,4326f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_stand_guntricks", "stand_guntricks_e_any", -1446,765f, 19,69032f, 4914,313f, 0.0f, -42,21369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_rand_idle_stand2", "rand_idle_stand", -1463,796f, 20,541f, 4914,44f, 0.0f, 66,39404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_Sit_Ground1", "Rand_Idle_Sit_Ground", -1456,628f, 19,736f, 4922,165f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_sleeping_scripted", "sleeping_scripted", -1450,952f, 19,691f, 4913,889f, 0.0f, -86,56843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1444,607f, 19,69032f, 4912,771f, 0.0f, 1,664795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_rand_idle_stand1", "rand_idle_stand", -1441,416f, 19,691f, 4911,683f, 0.0f, 76,25448f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_horse_stay9", "horse_stay", -1469,932f, 20,605f, 4910,774f, 0.0f, 28,4633f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_horse_stay8", "horse_stay", -1472,083f, 20,605f, 4914,579f, 0.0f, -1,15879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_horse_stay", "horse_stay", -1474,744f, 20,605f, 4909,638f, 0.0f, -240,4191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag__dnd_rowdydrink", "stand_dnd_rowdydrink", -1441,756f, 19,69032f, 4909,068f, 0.0f, -209,2599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_smoking_stand", "smoking_stand", -1465,869f, 20,605f, 4903,611f, 0.0f, 261,8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_rand_idle_stand", "rand_idle_stand", -1448,869f, 19,69032f, 4910,447f, 0.0f, -43,25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_Sit_Ground", "Rand_Idle_Sit_Ground", -1442,816f, 19,69032f, 4910,106f, 0.0f, 131,1772f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_lookdistance_binocs1", "look_distance_binocs", -1404,737f, 19,93f, 4875,994f, 0.0f, -38,38484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_lookdistance_binocs", "look_distance_binocs", -1480,194f, 29,799f, 4871,489f, 0.0f, -38,38484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_lookdistance1", "stand_lookdistance_w_any", -1432,518f, 16,699f, 4868,561f, 0.0f, 4,833208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "lag_lookdistance", "stand_lookdistance_w_any", -1463,929f, 21,485f, 4866,299f, 0.0f, 4,833208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_smoking_stand2", "smoking_stand", -1204,964f, 19,075f, 4960,957f, 0.0f, 261,8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_smoking_stand1", "smoking_stand", -1195,916f, 18,885f, 4967,823f, 0.0f, 261,8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_rand_idle_stand4", "rand_idle_stand", -1195,711f, 18,07f, 4971,998f, 0.0f, -43,25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "stand_guntricks_e_any3", "stand_guntricks_e_any", -1195,711f, 18,07f, 4971,998f, 0.0f, -127,008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_rand_idle_stand3", "rand_idle_stand", -1191,375f, 18,68f, 4964,364f, 0.0f, -43,25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_look_out_window_R", "look_out_window_R", -1198,27f, 19,07451f, 4965,246f, 0.0f, -156,2962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "stand_guntricks_e_any2", "stand_guntricks_e_any", -1190,268f, 19,075f, 4959,37f, 0.0f, -127,008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "look_distance_binocs2", "look_distance_binocs", -1173,602f, 24,305f, 4949,526f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "barg_horse_stay9", "horse_stay", -1185,661f, 18,157f, 4965,001f, 0.0f, -278,5182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "barg_horse_stay7", "horse_stay", -1202,677f, 20,19039f, 4950,121f, 0.0f, -180,3898f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "barg_horse_stay6", "horse_stay", -1198,855f, 20,15f, 4945,947f, 0.0f, -241,8f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_horse_stay9", "horse_stay", -1209,177f, 18,47f, 4977,493f, 0.0f, -255,5196f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_horse_stay8", "horse_stay", -1207,309f, 19,07451f, 4966,914f, 0.0f, 129,8418f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_standrowdydrink", "stand_dnd_rowdydrink", -1201,334f, 19,177f, 4961,892f, 0.0f, -131,9079f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_stand_guntricks1", "stand_guntricks_e_any", -1201,784f, 19,07451f, 4963,372f, 0.0f, -460,9612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_stand_guntricks", "stand_guntricks_e_any", -1195,662f, 18,95542f, 4966,104f, 0.0f, -162,3401f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_Sit_Ground", "Rand_Idle_Sit_Ground", -1200,147f, 19,07451f, 4963,931f, 0.0f, -3,744514f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_smoking_stand", "smoking_stand", -1198,138f, 19,035f, 4966,952f, 0.0f, 237,8594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_stand_lookdistance1", "stand_lookdistance_w_any", -1204,836f, 18,396f, 4999,079f, 0.0f, 155,3814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_stand_lookdistance", "stand_lookdistance_w_any", -1168,964f, 22,503f, 4956,782f, 0.0f, -50,58932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Prim_lookdistance_binocs2", "look_distance_binocs", -1172,956f, 24,22f, 4950,359f, 0.0f, -108,8531f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "ndiab_Pee1", "Pee", -2732,317f, 55,88308f, 4602,23f, 0.0f, -78,35882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", -2721,312f, 56,135f, 4626,071f, 0.0f, -71,04374f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", -2717,047f, 56,13536f, 4626,959f, 0.0f, 28,81129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", -2394,351f, 9,03528f, 3973,731f, 0.0f, -188,7163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -2396,917f, 9,035282f, 3975,122f, 0.0f, -97,93723f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_rand_idle_stand1", "rand_idle_stand", -2423,362f, 8,347816f, 3953,373f, 0.0f, 148,2504f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_horse_stay7", "horse_stay", -2421,392f, 8,098345f, 3950,982f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_horse_stay6", "horse_stay", -2418,207f, 8,091701f, 3952,367f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_horse_tend5", "horse_tend", -2419,592f, 8,276022f, 3948,489f, 0.0f, -178,6461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_horse_stay5", "horse_stay", -2391,552f, 9,035282f, 3973,452f, 0.0f, -77,91962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_horse_stay", "horse_stay", -2390,36f, 9,035282f, 3976,159f, 0.0f, -108,218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_horse_tend", "horse_tend", -2393,498f, 9,035286f, 3970,294f, 0.0f, -178,2487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_rand_idle_stand", "rand_idle_stand", -2409,836f, 8,863125f, 3970,2f, 0.0f, 74,69887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_look_distance_binocs1", "look_distance_binocs", -2406,953f, 8,885f, 3972,906f, 0.0f, -179,8559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_Pee", "Pee", -2403,695f, 9,127972f, 3961,985f, 0.0f, -339,9337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_look_distance_binocs", "look_distance_binocs", -2377,361f, 13,70045f, 3959,298f, 0.0f, -145,4083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", -2392,574f, 9,035279f, 3977,499f, 0.0f, -288,6662f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_stand_guntricks", "stand_guntricks_e_any", -2395,221f, 9,035282f, 3978,009f, 0.0f, -14,52901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_smoking_stand", "smoking_stand", -2392,542f, 9,035279f, 3975,33f, 0.0f, 108,3262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", -2405,164f, 8,857721f, 3973,518f, 0.0f, -26,27371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", -2719,872f, 56,14576f, 4632,723f, 0.0f, -160,4651f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_Pee", "Pee", -2719,947f, 56,14061f, 4619,677f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_rand_idle_stand", "rand_idle_stand", -2732,475f, 54,799f, 4620,533f, 0.0f, 72,66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2719,381f, 56,136f, 4624,018f, 0.0f, -86,41405f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2717,162f, 56,13536f, 4622,923f, 0.0f, -199,554f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", -2718,725f, 56,19336f, 4625,808f, 0.0f, -49,80202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_stand", "rand_idle_stand", -2755,338f, 44,574f, 4608,967f, 0.0f, 47,45972f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", -2747,982f, 46,58796f, 4617,084f, 0.0f, -261,3201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sit_smokediab", "sit_ground_smoke", -2750,69f, 46,5379f, 4619,904f, 0.0f, -279,5391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_smoking_stand", "smoking_stand", -2713,061f, 57,17479f, 4633,203f, 0.0f, -192,8825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", -2730,924f, 55,25158f, 4607,433f, 0.0f, 70,70719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_horse_stay7", "horse_stay", -2717,415f, 46,003f, 4670,128f, 0.0f, -28,21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_horse_stay6", "horse_stay", -2728,029f, 48,83f, 4663,372f, 0.0f, -302,0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_horse_stay5", "horse_stay", -2744,786f, 47,842f, 4622,784f, 0.0f, -28,21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_horse_stay", "horse_stay", -2752,478f, 45,581f, 4613,565f, 0.0f, -302,0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_lookdistance_binocs", "look_distance_binocs", -2739,578f, 52,528f, 4609,783f, 0.0f, 120,0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "diab_lookdistance_binocs1", "look_distance_binocs", -2723,603f, 48,057f, 4670,079f, 0.0f, 120,0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "stand_lookdistance_diab", "stand_lookdistance_w_any", -2711,862f, 45,174f, 4549,208f, 0.0f, 183,9572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Dia_lookdistance_binocs", "look_distance_binocs", -2751,219f, 41,231f, 4569,213f, 0.0f, 105,7632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_Rand_Idle_NearWall1", "Rand_Idle_NearWall", -2235,211f, 23,07668f, 4458,44f, 0.0f, -220,2354f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_smoking_stand4", "smoking_stand", -2248,473f, 23,09f, 4459,871f, 0.0f, -278,4407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_smoking_stand3", "smoking_stand", -2251,981f, 23,09363f, 4453,836f, 0.0f, 16,17786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_guntricks2", "stand_guntricks_e_any", -2236,704f, 23,09021f, 4445,694f, 0.0f, 45,55705f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_smoking_stand2", "smoking_stand", -2237,801f, 23,08828f, 4450,994f, 0.0f, -162,5718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_Sit_Ground_Drink1", "Sit_Ground_Drink", -2238,287f, 23,01221f, 4458,699f, 0.0f, 185,9857f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_look_out_window1", "look_out_window_L", -2225,412f, 23,27891f, 4451,979f, 0.0f, 52,1422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_stand_lookdistance", "stand_lookdistance_w_any", -2800f, 12,99747f, 3976.0f, 0.0f, -33,86443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_look_distance_binocs", "look_distance_binocs", -2821,198f, 14,178f, 3990,256f, 0.0f, 107,9522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_stand_yawning_n_any", "stand_yawning_n_any", -2808f, 15,63685f, 4000.0f, 0.0f, 123,7318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_stand_worried_n_any", "stand_worried_n_any", -2801,499f, 15,81774f, 3993,3f, 0.0f, -69,93935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "rio_Sit_Ground", "Rand_Idle_Sit_Ground", -2803,31f, 15,6673f, 3997,191f, 0.0f, -120,7834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_horse_tend1", "horse_tend", -2809,067f, 14,55902f, 4007,062f, 0.0f, -182,7983f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_horse_tend4", "horse_tend", -2785,864f, 15,38389f, 3997,784f, 0.0f, -176,7439f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_horse_stay2", "horse_stay", -2812,66f, 14,77457f, 4006,476f, 0.0f, -24,8493f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_horse_stay1", "horse_stay", -2782,363f, 15,07267f, 3997,314f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_horse_stay4", "horse_stay", -2792f, 15,52056f, 3997,487f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Pee_rio", "Pee", -2796,444f, 13,75379f, 3981,866f, 0.0f, -45,26333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_stand_guntricks3", "stand_guntricks_e_any", -2801,323f, 15,64117f, 3995,094f, 0.0f, -84,98148f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "stand_guntricks_4", "stand_guntricks_e_any", -2796.0f, 15,55481f, 4000.0f, 0.0f, -97,24407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_stand_lookdistance1", "stand_lookdistance_w_any", -2803,821f, 15,45894f, 4002,666f, 0.0f, -159,2758f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_look_distance_binocs10", "look_distance_binocs", -2802,01f, 15,8971f, 3991,164f, 0.0f, -13,09345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Rio_smoking_stand", "smoking_stand", -2809,624f, 15,99161f, 3992.0f, 0.0f, 48,59919f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "sleeping_wall_rio", "sleeping_wall_scripted", -2809,184f, 15,98761f, 3996,572f, 0.0f, 107,063f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_smoking_stand1", "smoking_stand", -2231,056f, 23,08467f, 4453,438f, 0.0f, -39,62713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_sit_ground_smoke2", "sit_ground_smoke", -2249,137f, 23,08695f, 4454,318f, 0.0f, -27,94823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_ground_harmonica", "sit_ground_play_harmonica", -2235,434f, 23,08521f, 4455,663f, 0.0f, -27,9268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_sit_ground_smoke1", "sit_ground_smoke", -2231,816f, 23,09146f, 4444,698f, 0.0f, -38,92004f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_peeing_b_any", "stand_peeing_b_any", -2224,567f, 23,06506f, 4460,793f, 0.0f, -59,44532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_spit1", "stand_spit", -2242,161f, 23,09f, 4465,899f, 0.0f, -259,1897f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_spit", "stand_spit", -2242,714f, 23,09f, 4458,329f, 0.0f, 173,8711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -2238,399f, 21,7327f, 4480,835f, 0.0f, -142,5218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -2245,74f, 23,10797f, 4448.0f, 0.0f, 20,09966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_lookdistance_w_any", "stand_lookdistance_w_any", -2227,261f, 22,78294f, 4446,88f, 0.0f, -37,47246f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_horse_stay3", "horse_stay", -2241,171f, 23,09021f, 4466,272f, 0.0f, -151,222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_horse_stay2", "horse_stay", -2238,423f, 23,00134f, 4465,598f, 0.0f, 188,6003f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_horse_stay1", "horse_stay", -2249,609f, 23,09021f, 4459,841f, 0.0f, -346,9635f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_horse_stay", "horse_stay", -2247,84f, 23,09021f, 4458,915f, 0.0f, -332,9286f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_stand_guntricks_e_any", "stand_guntricks_e_any", -2232,32f, 23,09239f, 4447,919f, 0.0f, -37,95788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_Rand_Idle_NearWall", "Rand_Idle_NearWall", -2229,033f, 23,09021f, 4448,373f, 0.0f, -39,34164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "bar_lookdistance_binocs", "look_distance_binocs", -2236,719f, 23,09021f, 4441,224f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_1.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", -2568.0f, 17,35954f, 4184f, 0.0f, 0.0f, 0.0f);
	Local_1.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", -2429,295f, 15,05885f, 4280.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", -2501,216f, 25,89587f, 4432,677f, 0.0f, 0.0f, 0.0f);
	Local_1.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", -2666,291f, 53,98365f, 4780,74f, 0.0f, 0.0f, 0.0f);
	Local_1.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", -2580,778f, 15,49983f, 4620,063f, 0.0f, 0.0f, 0.0f);
	Local_1.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", -2358,007f, 10,03923f, 4465,936f, 0.0f, 0.0f, 0.0f);
	Local_1.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", -2346,138f, 12,9453f, 4697,183f, 0.0f, 0.0f, 0.0f);
	Local_1.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", -2090,028f, 10,03923f, 4525,774f, 0.0f, 0.0f, 0.0f);
	Local_1.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", -2140f, 7,02747f, 4372.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", -2064f, 7,02747f, 4211,936f, 0.0f, 0.0f, 0.0f);
	Local_1.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", -2191,708f, 12,04772f, 4124,719f, 0.0f, 0.0f, 0.0f);
	Local_1.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", -1933,636f, 8,031361f, 4312.0f, 0.0f, -39,45688f, 0.0f);
	Local_1.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", -1948,161f, 9,040389f, 4601,057f, 0.0f, 0.0f, 0.0f);
	Local_1.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", -1885,215f, 9,370696f, 4433,224f, 0.0f, 0.0f, 0.0f);
	Local_1.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", -1827,297f, 13,05566f, 4252,745f, 0.0f, 0.0f, 0.0f);
	Local_1.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", -1856f, 7,027451f, 4084.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", -1658,559f, 18,04464f, 4426,559f, 0.0f, 0.0f, 0.0f);
	Local_1.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", -1844f, 17,06665f, 4516.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", -2316f, 8,767691f, 4281,776f, 0.0f, -115,5078f, 0.0f);
	Local_1.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", -2910,036f, 44,57027f, 4654,019f, 0.0f, 0.0f, 0.0f);
	Local_1.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", -2726,28f, 36,25617f, 4521,987f, 0.0f, 0.0f, 0.0f);
	Local_1.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", -2441,885f, 11,04316f, 4488.0f, 0.0f, 101,156f, 0.0f);
	Local_1.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", -2354,037f, 22,08627f, 4788.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", -2839,25f, 32,12549f, 4316,75f, 0.0f, 0.0f, 0.0f);
	Local_1.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", -2554,774f, 18,07061f, 4153,149f, 0.0f, 0.0f, 0.0f);
	Local_1.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", -2504,785f, 26,10197f, 4451,215f, 0.0f, 0.0f, 0.0f);
	Local_1.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", -2380f, 14,05492f, 4240,4f, 0.0f, 0.0f, 0.0f);
	Local_1.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", -2131,301f, 12,04518f, 4245,068f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", -2132.0f, 10,0281f, 4634,028f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", -2168,012f, 15,10399f, 4691,06f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", -1952,991f, 41,95831f, 4893,371f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", -1660,062f, 32,53368f, 4710,832f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", -1637,863f, 20,07843f, 4621,863f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", -1778,279f, 17,00437f, 4576,003f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", -1666,141f, 17,71151f, 4478,913f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", -1933,051f, 9,035278f, 4488.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", -1400f, 20,07843f, 4590,162f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", -1376,957f, 17,09519f, 4781,746f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", -1526,312f, 18,05862f, 4830,312f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", -1897,378f, 14,05489f, 4230,172f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", -2352,539f, 25,11804f, 4588,779f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", -2673,413f, 34,65824f, 4552f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", -2749,371f, 38,14902f, 4436f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", -2852,56f, 13,00819f, 4501,605f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", -2607,575f, 41,13937f, 4866,815f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", -3035,985f, 13,35887f, 4342,248f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", -2039,102f, 16,05764f, 4753,391f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", -1716f, 19,07449f, 4434,045f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", -1343,297f, 19,558f, 4844,218f, 0.0f, 87,85265f, 0.0f);
	Local_1.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", -1370,594f, 17,08653f, 4826,005f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", -2982,333f, 30,5575f, 4402,333f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", -2713,959f, 9,200555f, 4116.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", -2374,489f, 13,051f, 4214,489f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", -2217,438f, 11,71084f, 4497,232f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", -1927,737f, 7,023766f, 4579,011f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", -1764.0f, 35,04422f, 4464.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", -1832f, 15,05882f, 4022,384f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", -3506,558f, 20,30957f, 4201,442f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", -3436f, 6,023544f, 4248.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", -3381,324f, 9,035736f, 4149,359f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", -3312,873f, 40,31164f, 4434,389f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", -3487,395f, 25,28656f, 4452,401f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", -3316,056f, 38,90699f, 4626,938f, 0.0f, 101,5016f, 0.0f);
	Local_1.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", -3168,985f, 36,14119f, 4644.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", -3052,09f, 34,46273f, 4689,37f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", -2844,54f, 34,36322f, 4617,301f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", -2892,009f, 12,37078f, 4512f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", -2820.0f, 12,02767f, 4480,763f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", -2809,987f, 32,11597f, 4342,014f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", -2725,906f, 31,28142f, 4200f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", -2840.0f, 9,035294f, 4170,232f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", -2609,779f, 17,13632f, 4136,288f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", -2588.0f, 27,81133f, 4162,203f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", -2431,989f, 13,05544f, 4259,917f, 0.0f, -89,17472f, 0.0f);
	Local_1.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", -2332f, 7,02747f, 4312.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", -2220f, 10,98272f, 4403,61f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", -2089,201f, 6,02355f, 4274,799f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls20", "Player_Herb_woollyBlueCurls", -2144f, 7,967607f, 4320.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls21", "Player_Herb_woollyBlueCurls", -2004.0f, 7,569696f, 4457,416f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls22", "Player_Herb_woollyBlueCurls", -2075,324f, 7,02747f, 4460,676f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls23", "Player_Herb_woollyBlueCurls", -1944f, 8,031358f, 4425,306f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls24", "Player_Herb_woollyBlueCurls", -1820,795f, 13,11664f, 4354,409f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls25", "Player_Herb_woollyBlueCurls", -1910,817f, 8,031357f, 4340,306f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls26", "Player_Herb_woollyBlueCurls", -1912.0f, 9,035278f, 4287,747f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls27", "Player_Herb_woollyBlueCurls", -1834,083f, 10,03617f, 4223,111f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls28", "Player_Herb_woollyBlueCurls", -1956.0f, 8,031357f, 4093,11f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls29", "Player_Herb_woollyBlueCurls", -2022,958f, 10,89698f, 4017,618f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls30", "Player_Herb_woollyBlueCurls", -2116,598f, 8,031363f, 4032,598f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls31", "Player_Herb_woollyBlueCurls", -2222,41f, 15,04577f, 4032.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls32", "Player_Herb_woollyBlueCurls", -2195,403f, 10,13291f, 3860,817f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls33", "Player_Herb_woollyBlueCurls", -2125,854f, 14,02664f, 3845,857f, 0.0f, -256,6531f, 0.0f);
	Local_1.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls34", "Player_Herb_woollyBlueCurls", -2062,496f, 14,73775f, 3837,177f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls35", "Player_Herb_woollyBlueCurls", -2084f, 14,55479f, 3910,628f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls36", "Player_Herb_woollyBlueCurls", -2000,621f, 12,43142f, 3955,702f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls37", "Player_Herb_woollyBlueCurls", -1832f, 13,08149f, 4040,557f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls38", "Player_Herb_woollyBlueCurls", -1820,948f, 6,01367f, 4139,051f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls40", "Player_Herb_woollyBlueCurls", -1620.0f, 11,68288f, 4373,344f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls41", "Player_Herb_woollyBlueCurls", -1632.0f, 9,652975f, 4488.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls42", "Player_Herb_woollyBlueCurls", -1744f, 13,05098f, 3926,992f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls43", "Player_Herb_woollyBlueCurls", -1786,523f, 12,64444f, 3809,08f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls44", "Player_Herb_woollyBlueCurls", -1825,098f, 10,60763f, 3718,17f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Player_Herb_woollyBlueCurls45", "Player_Herb_woollyBlueCurls", -1772f, 11,97172f, 3778,428f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker1", "Locked_Footlocker", -2227,462f, 23,2628f, 4452,154f, 0.0f, 44,0713f, 0.0f);
	Local_1.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker2", "Locked_Footlocker", -1343,113f, 13,05098f, 4306,749f, 0.0f, -353,5625f, 0.0f);
	DECOR_SET_BOOL(Local_1.f_1300, "scrap", true);
	Local_1.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker4", "Locked_Footlocker", -1498,297f, 15,185f, 3986,531f, 0.0f, 36,58744f, 0.0f);
	Local_1.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_1, "treasure_hunting_4", "treasure_hunting_4", -2814,985f, 13,07937f, 3973,567f, 0.0f, -55,18276f, 0.0f);
	Local_1.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire55", "Campfire01", -3436f, 22,08629f, 4417,366f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire029", "Campfire01", -3416,783f, 25,09334f, 4467,92f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1320 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire030", "Campfire01", -3389,874f, 40,15686f, 4479,534f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1324 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire031", "Campfire01", -3440f, 21,08235f, 4424.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1328 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire032", "Campfire01", -3437,337f, 6,273319f, 4238,663f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1332 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire033", "Campfire01", -3470,462f, 6,023542f, 4213,539f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1336 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire034", "Campfire01", -3372f, 7,027458f, 4181,563f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1340 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire035", "Campfire01", -3414,302f, 18,46286f, 4281,833f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1344 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire036", "Campfire01", -3352,023f, 23,92834f, 4351,963f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1348 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire037", "Campfire01", -3324,359f, 21,43977f, 4320,264f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1352 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire038", "Campfire01", -3236f, 7,571811f, 4196.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1356 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire039", "Campfire01", -3180.0f, 9,03529f, 4049,572f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1360 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire040", "Campfire01", -3057,551f, 33,12941f, 4198,45f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1364 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire041", "Campfire01", -2976,518f, 6,023533f, 4147,483f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1368 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire042", "Campfire01", -2921,325f, 17,05521f, 4126,675f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1372 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire043", "Campfire01", -3105,627f, 34,13334f, 4548.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1376 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire044", "Campfire01", -3057,26f, 33,12939f, 4638,74f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1380 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire045", "Campfire03", -2904.0f, 9,040867f, 4403,443f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1384 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire047", "Campfire03", -2936f, 8,03138f, 4372f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1388 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire050", "Campfire03", -3188,215f, 13,0561f, 4329,33f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1392 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire051", "Campfire03", -1373,638f, 11,20804f, 4445,638f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1396 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire052", "Campfire03", -1282,648f, 6,023529f, 4424.0f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1400 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire053", "Campfire03", -1204.0f, 11,03308f, 4437,465f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1404 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Campfire054", "Campfire03", -1134,489f, 6,036162f, 4529,511f, 0.0f, 0.0f, 0.0f);
	Local_1.f_1408 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker5", "Locked_Footlocker", -2141,686f, 18,07949f, 4991,918f, 0.0f, 141,8382f, 0.0f);
	Local_1.f_1412 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker6", "Locked_Footlocker", -1758,611f, 29,92846f, 4810,387f, 0.0f, 20,34719f, 0.0f);
	Local_1.f_1416 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker7", "Locked_Footlocker", -1451,644f, 19,69032f, 4911,674f, 0.0f, 179,2477f, 0.0f);
	Local_1.f_1420 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker8", "Locked_Footlocker", -1202,659f, 19,07451f, 4965,54f, 0.0f, 45,16203f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "nsit_docks", "nsit_docks", -1149,049f, 28,10178f, 4825,696f, 0.0f, 142,3014f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_1, "look_out_window_R", "look_out_window_R", -1150,912f, 28,08622f, 4823,648f, 0.0f, 143,5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_1.f_1424 = CREATE_GRINGO_IN_LAYOUT(Local_1, "Locked_Footlocker9", "Locked_Footlocker", -1142,741f, 28,03458f, 4819,365f, 0.0f, -18,00826f, 0.0f);
	return 1;
}

bool Function_90(int iParam0) //Position: 0xCE57 / 52823
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_94();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_93(iParam0[iVar03], 8);
		}
		else if (Function_92())
		{
			iVar1 = 1;
			Function_93(iParam0[iVar03], 8);
		}
		Function_93(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_93(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_93(iParam0[iVar03], 2);
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
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_93(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_93(iParam0[iVar03], 2);
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
	Function_91();
	return 1;
}

void Function_91() //Position: 0xD1D2 / 53714
{
	if (!Function_16(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_92() //Position: 0xD212 / 53778
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

void Function_93(var uParam0, int iParam1) //Position: 0xD23D / 53821
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_94() //Position: 0xD24E / 53838
{
	if (!Function_16(128))
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

var Function_95(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD290 / 53904
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_96(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_93(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_96(var uParam0, int iParam1, int iParam2) //Position: 0xD2C8 / 53960
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_93(uParam0[iVar03], 4);
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

void Function_97(int iParam0, int iParam1) //Position: 0xD38C / 54156
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

bool Function_98(var uParam0, bool bParam1) //Position: 0xD3D5 / 54229
{
	int iVar0;
	
	iVar0 = Function_100(uParam0);
	if (!Function_99(iVar0))
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

bool Function_99(int iParam0) //Position: 0xD412 / 54290
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_100(int iParam0) //Position: 0xD429 / 54313
{
	if (!Function_101(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_101(int iParam0) //Position: 0xD443 / 54339
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_102() //Position: 0xD459 / 54361
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = uVar0;
	bLocal_0 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_0))
	{
		bLocal_0 = CREATE_LAYOUT("Perdido_layout");
	}
	return 1;
}

void Function_103(bool bParam0, int iParam1) //Position: 0xD49E / 54430
{
	if (!Function_16(128))
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

void Function_104(int iParam0) //Position: 0xD4D9 / 54489
{
	if (!Function_4(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (Global_29155[iParam010] == Global_30621[0])
	{
		STREAMING_REQUEST_ACTOR(1177, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[1])
	{
		STREAMING_REQUEST_ACTOR(1179, true, false);
	}
	else if (Global_29155[iParam010] == Global_30621[2])
	{
		STREAMING_REQUEST_ACTOR(1178, true, false);
	}
	return;
}

