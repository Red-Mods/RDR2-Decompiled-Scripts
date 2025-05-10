//Decompiled with MagicRDR v1.0
//Function Count : 98
//Statics Count : 446
//Natives Count : 120
//Parameters Count : 2

#region Local Var
	bool bLocal_0 = false;
	var uLocal_1 = 1;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	struct<1365> Local_5 = { 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_347 = 0;
	Function_97(iScriptParam_0);
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_96("Initializing DiezCoronas", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_348 = 1000;
		switch (iLocal_347)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_347 = 1;
				}
				bLocal_348 = false;
				break;
			
			case 0x00000001:
				if (Function_94())
				{
					if (Function_90(41, 0))
					{
						SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
					}
					iLocal_347 = 2;
				}
				bLocal_348 = false;
				break;
			
			case 0x00000002:
				if (Function_81())
				{
					Function_80(&(Global_29008[iScriptParam_0]), 32);
					iLocal_347 = 3;
					Function_76(Local_5);
				}
				bLocal_348 = false;
				break;
			
			case 0x00000003:
				bLocal_349 = LAUNCH_NEW_SCRIPT_WITH_ARGS("DiezCoronasVol", &iScriptParam_0, 2, 0);
				Function_75(&Global_7027, &Global_8268, iScriptParam_0);
				iLocal_347 = 5;
				bLocal_348 = false;
				break;
			
			case 0x00000005:
				if (Function_74(&Global_7027, &Global_8268, iScriptParam_0))
				{
					iLocal_347 = 4;
					bLocal_348 = false;
				}
				else
				{
					bLocal_348 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_73(&(Global_29008[iScriptParam_0]), 16))
				{
					iLocal_347 = 6;
				}
				bLocal_348 = false;
				break;
			
			case 0x00000006:
				Function_72(0, &uLocal_351, -788,6112f, 13,03229f, 3730,068f);
				Function_71(0, &uLocal_351, -788,6112f, 13,03229f, 3730,068f);
				Function_70(0, &uLocal_351, -791,2759f, 13,11084f, 3711,519f);
				Function_69(0, &uLocal_351, -825,5682f, 16,66465f, 3707,854f);
				Function_68(0, &uLocal_351, -791,2759f, 13,11084f, 3711,519f);
				Function_66(0, &uLocal_351, -825,5682f, 16,66465f, 3707,854f);
				Function_65(0, &uLocal_351, Local_5);
				Function_59(&Global_7027, &Global_8268, &uLocal_351, Global_6289, iScriptParam_0);
				Function_80(&(Global_29008[iScriptParam_0]), 8);
				if (Function_73(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_58(&(Global_29008[iScriptParam_0]), 131072);
					if ((!Global_26003[1] && !Global_26003[2]) && !Global_26003[3])
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_5, "dzcv_BB_Restriction")))
						{
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_5, "dzcv_BB_Restriction"));
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_5, "dzcv_BB_Restriction"));
						}
						CREATE_OBSTACLE_IN_LAYOUT(bLocal_0, "Butter_Bridge", 33,938f, 94,713f, 2742,488f, 0.0f, 214.0f, 0.0f, 30.0f, 40.0f, 100.0f);
					}
					if (Global_26003[2] && !Global_26003[3])
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_5, "dzcv_BB_Restriction")))
						{
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_5, "dzcv_BB_Restriction"));
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_5, "dzcv_BB_Restriction"));
						}
						CREATE_OBSTACLE_IN_LAYOUT(bLocal_0, "Butter_Bridge", 33,938f, 94,713f, 2742,488f, 0.0f, 214.0f, 0.0f, 30.0f, 40.0f, 100.0f);
					}
					iLocal_347 = 10;
				}
				else
				{
					iLocal_347 = 7;
				}
				bLocal_348 = false;
				break;
			
			case 0x00000007:
				Function_44(iScriptParam_0);
				iLocal_347 = 8;
				bLocal_348 = false;
				break;
			
			case 0x00000008:
				Function_43(1, Global_30707[1], -724,92f, 63,349f, 3297,469f);
				if (!Function_42(&Global_30707))
				{
					Function_38(StackVal, 2, 0,5f, 0, bLocal_0, !Function_42(&Global_30707));
					Function_37(64);
					Function_33(1, 10, 6, 0, 3);
				}
				Function_80(&(Global_29008[iScriptParam_0]), 512);
				iLocal_347 = 9;
				bLocal_348 = false;
				break;
			
			case 0x00000009:
				if (!Function_42(&Global_30707))
				{
					Function_31(bLocal_0, iScriptParam_0);
				}
				Global_29004 = 1;
				Function_80(&(Global_29008[iScriptParam_0]), 4);
				Function_30("Finished Initializing DiezCoronas", 5.0f);
				iLocal_347 = 10;
				bLocal_348 = false;
				break;
			
			case 0x0000000A:
				if (!Function_42(&Global_30707))
				{
					if (iLocal_392)
					{
						iLocal_392 = 0;
						iLocal_347 = 8;
						bLocal_348 = false;
					}
				}
				else
				{
					iLocal_392 = 1;
				}
				if (Function_22(0))
				{
					if (!IS_SCRIPT_VALID(iLocal_350))
					{
						bLocal_350 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/PointOfInterest/event_wanted_poster", &uLocal_393, 51, 0);
					}
				}
				if (Function_73(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_347 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_348);
	}
	Function_21(iScriptParam_0);
	Function_11(&Global_7027, &Global_8268, iScriptParam_0, 1);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	SET_DUST_LEVEL(1);
	Function_58(&(Global_29008[iScriptParam_0]), 32);
	Function_58(&(Global_29008[iScriptParam_0]), 64);
	Function_58(&(Global_29008[iScriptParam_0]), 8);
	Function_58(&(Global_29008[iScriptParam_0]), 512);
	Function_58(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_349))
	{
		TERMINATE_SCRIPT(bLocal_349);
	}
	Function_30("Unloaded DiezCoronas", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x59C / 1436
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

void Function_2(int iParam0) //Position: 0x5D2 / 1490
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x5F4 / 1524
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x60A / 1546
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x620 / 1568
{
	Function_6(&Local_5 + 4);
	RELEASE_LAYOUT_REF(Local_5);
	return;
}

void Function_6(int iParam0) //Position: 0x632 / 1586
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

void Function_7(var uParam0, int iParam1) //Position: 0x658 / 1624
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

void Function_8(var uParam0, int iParam1) //Position: 0x786 / 1926
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x7A0 / 1952
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x7BD / 1981
{
	Function_6(&bLocal_0 + 4);
	RELEASE_LAYOUT_REF(bLocal_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x7CF / 1999
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	if (Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_58(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_73(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_16(2) || Function_73(&(Global_29008[iParam2]), 256))
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
			Function_80(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9BA / 2490
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

int Function_13(int iParam0) //Position: 0xB09 / 2825
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

int Function_14(int iParam0) //Position: 0xB34 / 2868
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

void Function_15(var uParam0, int iParam1) //Position: 0xB68 / 2920
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(int iParam0) //Position: 0xB77 / 2935
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(var uParam0, int iParam1) //Position: 0xB93 / 2963
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xBAA / 2986
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xBC6 / 3014
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

bool Function_20() //Position: 0x1074 / 4212
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0x107D / 4221
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

bool Function_22(int iParam0) //Position: 0x10E8 / 4328
{
	if (!IS_LATER_THAN(GET_TIME_OF_DAY(), Function_29()))
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
	if (Function_27())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (Function_25(0) == 0)
		{
			return 0;
		}
	}
	if (!Function_24(0))
	{
		return 0;
	}
	if (Function_20())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_23(1, 2, 1, 1))
	{
		return 0;
	}
	if (Global_26361.f_56 <= GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	return 1;
}

bool Function_23(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x116B / 4459
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

bool Function_24(int iParam0) //Position: 0x120F / 4623
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

int Function_25(int iParam0) //Position: 0x122A / 4650
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
		if (!Function_26(Global_30707[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_26(bool bParam0) //Position: 0x12DE / 4830
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Function_73(&(Global_29008[bParam0]), 2048);
}

bool Function_27() //Position: 0x12FC / 4860
{
	return Function_28(StackVal, 1);
}

int Function_28(var uParam0, bool bParam1) //Position: 0x130B / 4875
{
	return (uParam0 && bParam1) == 0;
}

var Function_29() //Position: 0x1318 / 4888
{
	return StackVal;
}

void Function_30(bool bParam0, float fParam1) //Position: 0x1323 / 4899
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

void Function_31(bool bParam0, bool bParam1) //Position: 0x1361 / 4961
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
		Function_32(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_32(var uParam0, int iParam1) //Position: 0x145B / 5211
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_33(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1468 / 5224
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
		Function_34();
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

void Function_34() //Position: 0x154C / 5452
{
	int iVar0;
	
	Global_26960 = Function_35(StackVal);
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

int Function_35(int iParam0) //Position: 0x159A / 5530
{
	if (!Function_36(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_36(int iParam0) //Position: 0x15B2 / 5554
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_37(bool bParam0) //Position: 0x15C7 / 5575
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_38(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x15DA / 5594
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
		Function_41();
	}
	if (bParam5)
	{
		Function_39(1048576);
	}
}

void Function_39(int iParam0) //Position: 0x16ED / 5869
{
	Function_40(&Global_28842, iParam0);
	return;
}

void Function_40(var uParam0, var uParam1) //Position: 0x16FB / 5883
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_41() //Position: 0x1716 / 5910
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_39(16384);
	}
	return;
}

bool Function_42(int iParam0) //Position: 0x1732 / 5938
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

void Function_43(int iParam0, var uParam1, vector3 vParam2) //Position: 0x177F / 6015
{
	if (!Function_36(iParam0))
	{
		LOG_ERROR("Invalid Territory for Setting up Law Enforcement");
		return;
	}
	Global_26316[iParam0] = uParam1;
	*(&Global_26316 + 16[iParam03]) = { StackVal, StackVal, vParam2 };
}

void Function_44(int iParam0) //Position: 0x17E1 / 6113
{
	switch (Global_30619)
	{
		case 0x00000000:
			Function_57(iParam0);
			break;
		
		case 0x00000001:
			Function_57(iParam0);
			Function_51(iParam0);
			break;
		
		case 0x00000002:
			Function_51(iParam0);
			break;
		
		case 0x00000003:
			break;
	}
	if (!Global_3365)
	{
		Function_51(iParam0);
		Function_57(iParam0);
	}
	Function_47(7, 2, 0, 0, 50, 2, 0, 0, 4, iParam0, "$/content/Ambient/Roaming/event_donkey_lead", 31, 2, 0x42c80000, 8, 55, 0);
	Function_46(&Global_17483[775] + 120, -5.0f, 2);
	Function_45(&Global_17483[775] + 120, 1, 3.0f, 112, 4294967295);
	return;
}

void Function_45(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x18A2 / 6306
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_46(int iParam0, float fParam1, float fParam2) //Position: 0x18C8 / 6344
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = fParam2;
	return;
}

void Function_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x18DE / 6366
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_48(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_48(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x1920 / 6432
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
					bVar2 = Function_50(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_49(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_50(bParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_49(int iParam0, int iParam1) //Position: 0x1CB0 / 7344
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_50(int iParam0) //Position: 0x1CD1 / 7377
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_51(int iParam0) //Position: 0x1CE7 / 7399
{
	Function_47(28, 2, 25, 4294967146, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_aftermath", 63, 2, 180.0f, 8, 55, 0);
	Function_45(&Global_17483[2875] + 120, 1, 9.0f, 64, 752);
	Function_56(&Global_17483[2875] + 120, 20.0f);
	Function_55(&Global_17483[2875] + 120, 5.0f);
	Function_54(&Global_17483[2875] + 120, 12.0f, 5.0f);
	Function_53(&Global_17483[2875] + 120, 0,4f, 8.0f);
	Function_46(&Global_17483[2875] + 120, -4.0f, 2);
	Function_52(&Global_17483[2875] + 120);
	return;
}

void Function_52(int iParam0) //Position: 0x1DBD / 7613
{
	iParam0->f_16 = 1;
	return;
}

void Function_53(int iParam0, float fParam1, int iParam2) //Position: 0x1DC8 / 7624
{
	(iParam0 + 60)->f_52 = fParam1;
	(iParam0 + 60)->f_56 = iParam2;
	return;
}

void Function_54(int iParam0, float fParam1, int iParam2) //Position: 0x1DDE / 7646
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_48 = iParam2;
	return;
}

void Function_55(int iParam0, int iParam1) //Position: 0x1DF4 / 7668
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_56(int iParam0, int iParam1) //Position: 0x1E02 / 7682
{
	(iParam0 + 60)->f_20 = iParam1;
	return;
}

void Function_57(int iParam0) //Position: 0x1E10 / 7696
{
	Function_47(30, 2, 50, 4294967196, 100, 1, 8, 0, 4, iParam0, "$/content/Ambient/Roaming/event_roadside_execution", 63, 2, 180.0f, 8, 55, 0);
	Function_45(&Global_17483[3075] + 120, 2, 5.0f, 96, 752);
	Function_56(&Global_17483[3075] + 120, 32.0f);
	Function_55(&Global_17483[3075] + 120, 5.0f);
	Function_54(&Global_17483[3075] + 120, 19,9f, 8.0f);
	Function_53(&Global_17483[3075] + 120, 0,4f, 4.0f);
	Function_46(&Global_17483[3075] + 120, 0.0f, 4);
	Function_52(&Global_17483[3075] + 120);
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x1EDE / 7902
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_59(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1EF5 / 7925
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_16(2))
	{
		return;
	}
	if (Function_73(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_60(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_58(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_80(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x1FA7 / 8103
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_73(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_63(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_62(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_61(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_61(bool bParam0, int iParam1) //Position: 0x2112 / 8466
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_62(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_62(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_62(vector3 vParam0) //Position: 0x224E / 8782
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_63(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2266 / 8806
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

var Function_64() //Position: 0x237F / 9087
{
	int iVar0;
	
	return iVar0;
}

void Function_65(var uParam0, var uParam1, bool bParam2) //Position: 0x2387 / 9095
{
	bool bVar0;
	
	bVar0 = uParam0;
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

void Function_66(var uParam0, var uParam1, vector3 vParam2) //Position: 0x23E2 / 9186
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_67(vector3 vParam0, vector3 vParam3) //Position: 0x2448 / 9288
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_68(var uParam0, var uParam1, vector3 vParam2) //Position: 0x2475 / 9333
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_69(var uParam0, var uParam1, vector3 vParam2) //Position: 0x24DD / 9437
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_70(var uParam0, var uParam1, vector3 vParam2) //Position: 0x2547 / 9543
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_71(var uParam0, var uParam1, vector3 vParam2) //Position: 0x25AC / 9644
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_72(var uParam0, var uParam1, vector3 vParam2) //Position: 0x2614 / 9748
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_67(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_73(var uParam0, int iParam1) //Position: 0x2677 / 9847
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_74(var uParam0, var uParam1, int iParam2) //Position: 0x2693 / 9875
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_20())
	{
		return 1;
	}
	if (Function_73(&(Global_29008[iParam2]), 0x40000000))
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

void Function_75(var uParam0, var uParam1, int iParam2) //Position: 0x275F / 10079
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	if (!Function_73(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_80(&(Global_29008[iParam2]), 0x40000000);
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

int Function_76(bool bParam0) //Position: 0x2835 / 10293
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
			bVar10 = Function_20();
			bVar11 = (Function_78() && !Function_77(1, 1));
			if (bVar9 && !bVar10)
			{
			}
			else if ((bVar10 && Function_78()) && DECOR_CHECK_EXIST(bVar0, "MP_ONLY"))
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

bool Function_77(bool bParam0, bool bParam1) //Position: 0x297E / 10622
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_78() //Position: 0x299E / 10654
{
	if (Function_20())
	{
		return (Function_79() != 1 || Function_79() != 0);
	}
	return 0;
}

int Function_79() //Position: 0x29B7 / 10679
{
	return Global_79349.f_16;
}

void Function_80(var uParam0, int iParam1) //Position: 0x29C3 / 10691
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_81() //Position: 0x29D2 / 10706
{
	bool bVar0;
	
	Function_89(3, 3);
	bVar0 = bVar0;
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire01_bad", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire05", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire06", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire02", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire01", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/campfire04", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_87(&Local_5 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	if (!Function_82(&Local_5 + 4))
	{
		return 0;
	}
	Local_5 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(Local_5))
	{
		Local_5 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint", -1328,862f, 83,27f, 3602,278f, 0.0f, 9,33f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint1", -596.0f, 30,83434f, 4006,688f, 0.0f, 10,879f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint2", -528.0f, 28,61168f, 3587,232f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint3", -111,0578f, 55,2157f, 2808f, 0.0f, 0.0f, 0.0f);
	*(&Local_5 + 560) = { -578,514f, 28,459f, 3838,448f };
	*(&Local_5 + 560 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_5.f_584 = CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint4", -578,514f, 28,459f, 3838,448f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint5", -1341,777f, 13,05099f, 4301,776f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint6", -1352f, 13,05099f, 4281,627f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint7", -1370,036f, 13,05099f, 4317,523f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint8", -1378,815f, 13,05099f, 4295,221f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_5, "dzcf_bhint9", -1344f, 13,482f, 4260.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire03", "Campfire03", -1108.0f, 77,30637f, 3621,951f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_588, "MP_ONLY", true);
	Local_5.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire05", "Campfire03", -1374,141f, 70,27447f, 4054,141f, 0.0f, -154,5513f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_592, "MP_ONLY", true);
	Local_5.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire07", "Campfire01_bad", -529,4337f, 22,08627f, 3170,421f, 0.0f, 180,5047f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_596, "MP_ONLY", true);
	Local_5.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire010", "Campfire05", -1448,114f, 70,26101f, 3730,889f, 0.0f, -78,42554f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_600, "MP_ONLY", true);
	Local_5.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire011", "Campfire05", -1056.0f, 8,031372f, 4159,881f, 0.0f, 70,38938f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_604, "MP_ONLY", true);
	Local_5.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire012", "Campfire05", -1013,744f, 7,027447f, 4010,256f, 0.0f, -107,5164f, 0.0f);
	Local_5.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire06", "Campfire06", -1015,098f, 16,06277f, 4365,251f, 0.0f, 0.0f, 0.0f);
	Local_5.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire013", "Campfire06", -741,5064f, 10,03925f, 4340,215f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_616, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", -1362,953f, 13,07964f, 4300,644f, 0.0f, -18,15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -1359,716f, 13,05099f, 4298,842f, 0.0f, -272,5584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_sit_ground_smoke3", "sit_ground_smoke", -1364,03f, 13,04671f, 4298,394f, 0.0f, -112,4335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -1362,544f, 13,05099f, 4296,964f, 0.0f, -180,1093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay13", "horse_stay", -1394,776f, 12,977f, 4308,042f, 0.0f, 74,33443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay12", "horse_stay", -1386,643f, 13,051f, 4290,629f, 0.0f, 41,19416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay11", "horse_stay", -1396,363f, 13,05099f, 4300,878f, 0.0f, 48,00632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay10b", "horse_stay", -1400,339f, 11,495f, 4292,966f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_Pee3", "Pee", -1385,775f, 13,05099f, 4298,206f, 0.0f, 28,35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", -1378,63f, 13,056f, 4306,34f, 0.0f, -18,15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", -1372,292f, 13,05099f, 4291,89f, 0.0f, -28,9995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1374,563f, 13,05099f, 4297,688f, 0.0f, 9,780541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_look_out_window_R", "look_out_window_R", -1380,752f, 13,04853f, 4297,446f, 0.0f, -41,49537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay21", "horse_stay", -1365,99f, 13,051f, 4324,597f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay20", "horse_stay", -1384,05f, 12,988f, 4324,893f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay19", "horse_stay", -1388,964f, 12,966f, 4324,276f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay18", "horse_stay", -1364,119f, 13,051f, 4332,481f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", -1354,34f, 13,05099f, 4309,859f, 0.0f, 27,99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", -1361,21f, 13,05939f, 4316,554f, 0.0f, 192,786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", -1368,854f, 13,05759f, 4314,05f, 0.0f, -18,15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_sit_ground_smoke2", "sit_ground_smoke", -1371,078f, 13,05098f, 4315,158f, 0.0f, 82,18061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand6", "rand_idle_stand", -1381,432f, 13,037f, 4321,681f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay15", "horse_stay", -1331,086f, 13,691f, 4317,092f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay14", "horse_stay", -1335,886f, 13,273f, 4317,106f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay17", "horse_stay", -1329,264f, 13,051f, 4300,218f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_horse_stay16", "horse_stay", -1327,329f, 13,051f, 4303,468f, 0.0f, 27,06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", -1347,543f, 13,051f, 4305,105f, 0.0f, 27,99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand4", "rand_idle_stand", -1334,242f, 13,051f, 4304,613f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand5", "rand_idle_stand", -1336,62f, 13,051f, 4294,1f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand3", "rand_idle_stand", -1353,39f, 13,051f, 4312,579f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_sit_ground_smoke4", "sit_ground_smoke", -1343,849f, 13,056f, 4296,042f, 0.0f, -73,48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_Pee4", "Pee", -1352,655f, 13,051f, 4301,614f, 0.0f, 28,35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand", "rand_idle_stand", -1346,009f, 13,056f, 4294,357f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", -1346,468f, 13,05098f, 4307,142f, 0.0f, 118,1131f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_horse_stay10", "horse_stay", -1361,381f, 13,103f, 4268,063f, 0.0f, -185,5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_horse_stay9", "horse_stay", -1344,416f, 13,051f, 4267,783f, 0.0f, -161,8634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_horse_stay8", "horse_stay", -1361,88f, 13,051f, 4274,834f, 0.0f, -185,5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_horse_stay", "horse_stay", -1352,36f, 13,051f, 4270,885f, 0.0f, 212,416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_sit_ground_smoke", "sit_ground_smoke", -1350,854f, 13,051f, 4272,156f, 0.0f, -73,48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_smoking_stand2", "smoking_stand", -1349,743f, 13,05099f, 4283,362f, 0.0f, -55,15614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_Pee2", "Pee", -1356,144f, 13,05099f, 4286,991f, 0.0f, -151,8606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand2", "rand_idle_stand", -1341,542f, 13,051f, 4278,057f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sep_Pee", "Pee", -1360,661f, 13,107f, 4286,437f, 0.0f, 152,3031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_smoking_stand", "smoking_stand", -1358,714f, 13,051f, 4282,462f, 0.0f, -53,74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_rand_idle_stand1", "rand_idle_stand", -1341,542f, 13,051f, 4278,057f, 0.0f, 93,61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", -1343,447f, 13,056f, 4286,479f, 0.0f, -35,46272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", -1339,343f, 13,051f, 4267,934f, 0.0f, 2,252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", -1324,474f, 13,051f, 4303,514f, 0.0f, 2,252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", -1372,628f, 13,05f, 4335,497f, 0.0f, 14,92106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", -1408,984f, 14,318f, 4305,296f, 0.0f, 2,252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire014", "Campfire03", -238,2539f, 31,12157f, 4266,254f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_620, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark1", "horse_tend", -101,656f, 55,227f, 2801,408f, 0.0f, -141,5272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark2", "horse_tend", -111,4741f, 55,2157f, 2810,284f, 0.0f, 66,63183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark3", "horse_stay", -113,5305f, 55,2157f, 2812.0f, 0.0f, -134,0859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark4", "horse_stay", -100,0075f, 55,38091f, 2800,44f, 0.0f, 38,61838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark5", "horse_stay", -118,1587f, 55,2157f, 2812,576f, 0.0f, 224,0045f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark6", "horse_stay", -102,8546f, 55,37479f, 2802,538f, 0.0f, 49,26177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark7", "sit_ground_smoke", -109,1386f, 55,21569f, 2807,325f, 0.0f, -280,0471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark8", "sit_ground_play_harmonica", -112,5914f, 55,2157f, 2806,592f, 0.0f, -108,6369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark9", "stand_guntricks_e_any", -111,0713f, 55,2157f, 2808,681f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark10", "stand_yawning_n_any", -106,3725f, 55,29201f, 2806,399f, 0.0f, 100,3735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark11", "stand_lookdistance_w_any", -117,9617f, 55,2157f, 2809,962f, 0.0f, 96,93845f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark12", "Pee", -98,37971f, 55,19736f, 2802,857f, 0.0f, 249,0699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark13", "rand_idle_stand", -104,064f, 55,47073f, 2807,075f, 0.0f, -109,9886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark14", "nsit_docks", -101,3585f, 55,47161f, 2807,162f, 0.0f, -136,5345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark15", "smoking_stand", -109,5375f, 55,21568f, 2805,538f, 0.0f, 142,1955f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark16", "look_distance_binocs", -114,3744f, 54,75f, 2814,374f, 0.0f, 191,7611f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Man_landmark17", "Rand_Idle_Sit_Ground", -111,3886f, 55,21569f, 2804,94f, 0.0f, 182,6724f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark1", "horse_stay", -485,8965f, 20,02694f, 3026,479f, 0.0f, -71,77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark1", "Sit_Ground_Campfire_Tend", -1237,767f, 22,29545f, 3209,357f, 0.0f, 87,69044f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_624), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark2", "horse_tend", -1245,056f, 22,3515f, 3213,548f, 0.0f, -101,8198f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark1", "sleeping_wall_scripted", -524,7726f, 28,61168f, 3585,052f, 0.0f, 141,0826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark2", "horse_tend", -523,9998f, 28,09874f, 3593,792f, 0.0f, 82,67101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark3", "Sit_Ground_Campfire_Tend", -529,402f, 28,61169f, 3586,814f, 0.0f, -106,4862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark4", "horse_tend", -528,4648f, 28,61169f, 3584.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark5", "stand_yawning_n_any", -526,808f, 28,61168f, 3586,416f, 0.0f, 123,4238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark6", "smoking_stand_nospawn", -530,215f, 28,612f, 3588,583f, 0.0f, 302,8259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark7", "stand_lookdistance_w_any", -532,8776f, 28,59505f, 3586,723f, 0.0f, 119,1744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark8", "stand_lookdistance_w_any", -523,8267f, 27,21791f, 3603,666f, 0.0f, 188,5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark9", "horse_stay", -524,2856f, 28,57678f, 3592,028f, 0.0f, 466,0749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark10", "horse_stay", -526,8679f, 28,61168f, 3584.0f, 0.0f, 369,76f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark11", "horse_stay", -530,737f, 28,612f, 3584,215f, 0.0f, -0,6411512f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark12", "stand_drunk_rowdydrink", -528,0726f, 28,61168f, 3589,514f, 0.0f, 12,18899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark13", "stand_guntricks_e_any", -530,475f, 28,612f, 3586,142f, 0.0f, -103,6828f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sol_landmark14", "Rand_Idle_Sit_Ground", -527,2328f, 28,61168f, 3588,458f, 0.0f, 38,3594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -596,7665f, 30,87692f, 4008,65f, 0.0f, -39,59076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_628), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark1", "stand_lookdistance_w_any", -613,8975f, 27,71271f, 4015,721f, 0.0f, 38,57999f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark2", "smoking_stand_nospawn", -598,088f, 30,877f, 4007,252f, 0.0f, -88,51762f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark3", "stand_lookdistance_w_any", -595,0942f, 30,87692f, 4003,644f, 0.0f, 40,7513f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark4", "stand_lookdistance_w_any", -568,1231f, 34,93197f, 4019,918f, 0.0f, -134,8334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark5", "horse_stay", -598,0424f, 30,87692f, 4005,047f, 0.0f, -109,1773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark6", "horse_stay", -652,4681f, 12,93578f, 3998,157f, 0.0f, -178,8803f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark7", "horse_stay", -596,8939f, 30,87373f, 4003,538f, 0.0f, -146,6455f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark8", "horse_stay", -650,021f, 13,01396f, 3997,718f, 0.0f, -63,92681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark9", "horse_stay", -654,9255f, 12,7644f, 3998,088f, 0.0f, -132,133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark10", "sleeping_wall_scripted", -595,894f, 30,877f, 4009,931f, 0.0f, 13,83779f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark11", "stand_guntricks_e_any", -593,51f, 30,876f, 4006,038f, 0.0f, 127,0322f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark12", "Rand_Idle_Sit_Ground", -594,076f, 30,877f, 4007,19f, 0.0f, 101,0548f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "cab_landmark13", "look_distance_binocs", -577,5045f, 32,83132f, 4002,572f, 0.0f, -67,42719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark3", "horse_tend", -1245,323f, 21,83688f, 3217,079f, 0.0f, -95,92507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark4", "horse_tend", -1229,347f, 22,0393f, 3216,383f, 0.0f, 96,76688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark5", "horse_stay", -1249,337f, 23,3665f, 3211,135f, 0.0f, -33,82539f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark6", "horse_stay", -1224,93f, 22,02998f, 3213,278f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark8", "stand_lookdistance_w_any", -1245,312f, 21,15314f, 3219,846f, 0.0f, 176,0394f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark9", "look_distance_binocs", -1226,53f, 22,09952f, 3215,262f, 0.0f, -144,2426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark10", "Rand_Idle_NearWall", -1239,73f, 22,0971f, 3205,014f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark11", "rand_idle_stand", -1220,766f, 23,494f, 3204,79f, 0.0f, -54,23795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark12", "Pee", -1225,842f, 22,606f, 3204,7f, 0.0f, -31,56896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark13", "stand_lookdistance_w_any", -1236,023f, 20,958f, 3221,002f, 0.0f, 175,0627f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark14", "stand_guntricks_e_any", -1236,338f, 22,24551f, 3208f, 0.0f, 36,00572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark15", "stand_drunk_rowdydrink", -1233,859f, 22,23026f, 3207,647f, 0.0f, 62,26207f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark16", "Rand_Idle_Sit_Ground", -1238,578f, 22,33991f, 3206,593f, 0.0f, -115,5628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Grn_landmark17", "smoking_stand", -1232,763f, 22,24354f, 3212,812f, 0.0f, 45,14069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark2", "horse_stay", -486,6529f, 20,15339f, 3025,138f, 0.0f, -71,77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark3", "horse_tend", -486,7703f, 20,2141f, 3023,461f, 0.0f, -254,62f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark4", "horse_tend", -486,9326f, 20,22241f, 3021,869f, 0.0f, -249,1905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark5", "smoking_stand", -484,2574f, 20,49877f, 3031,654f, 0.0f, -93,37111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark6", "stand_guntricks_e_any", -482,7634f, 20,4562f, 3032,894f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark7", "lie_sleep_on_bed_r", -488,9799f, 20,48626f, 3033,376f, 0.0f, 21,64087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark8", "look_out_window_L", -486,3158f, 20,5107f, 3032,65f, 0.0f, -66,49553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark10", "stand_lookdistance_w_any", -483,0443f, 18,67955f, 3048,706f, 0.0f, 176,6462f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark12", "lean_fence_L_talking", -484,9706f, 20,49036f, 3036,224f, 0.0f, -156,5074f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark13", "Pee", -492,1762f, 20,335f, 3022,99f, 0.0f, 62,1369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark14", "stand_lookdistance_w_any", -479,421f, 21,113f, 3013,55f, 0.0f, -22,8892f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark15", "Rand_Idle_NearWall", -490,3453f, 20,08626f, 3026,755f, 0.0f, -71,52729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark16", "nriverwash", -472,1022f, 17,75337f, 3031,939f, 0.0f, -125,2288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark17", "nsit_docks", -476,763f, 18,7006f, 3037,619f, 0.0f, -71,01546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Brit_landmark18", "nlean_rail", -488,092f, 20,486f, 3037,493f, 0.0f, -162,8951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire015", "Campfire03", -708.0f, 11,04317f, 4528.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire016", "Campfire03", -348f, 22,08627f, 4288.0f, 0.0f, -88,23318f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark1", "horse_tend", 97,78033f, 71,27844f, 2684.0f, 0.0f, -203,1011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark2", "horse_tend", 100,282f, 71,27846f, 2683,792f, 0.0f, -203,1011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark3", "horse_tend", 108,8526f, 71,28279f, 2675,14f, 0.0f, 124,6175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark4", "horse_stay", 93,90526f, 71,27841f, 2684,384f, 0.0f, 18,86558f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark5", "horse_stay", 103,9007f, 71,12509f, 2677,505f, 0.0f, -48,71856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark6", "horse_stay", 90,52749f, 71,27842f, 2684,49f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark7", "nuse_shelf", 124,6688f, 72,42136f, 2671,896f, 0.0f, 294,9007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark8", "lie_sleep_on_bed_r", 123,5967f, 72,42126f, 2669,792f, 0.0f, -63,85365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark9", "look_out_window_L", 121,8093f, 72,41193f, 2670,812f, 0.0f, 117,1071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark10", "look_distance_binocs", 128,4899f, 72,50111f, 2674,588f, 0.0f, -74,37722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark12", "stand_kneelvomit_n_any", 127,0404f, 72,41193f, 2668,225f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark14", "stand_drunk_throwbottle", 120,5929f, 71,25062f, 2682,702f, 0.0f, -149,8333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark15", "smoking_stand", 126,9357f, 72,4119f, 2675,583f, 0.0f, 164,1807f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark16", "nsit_docks", 118,6707f, 71,25098f, 2684,139f, 0.0f, -153,0388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Bach_landmark17", "Rand_Idle_NearWall", 122,0053f, 72,41192f, 2674,544f, 0.0f, -240,2579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark18", "look_distance_binocs", -573,2406f, 28,33539f, 3840,228f, 0.0f, -93,01151f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_640), 0);
	Local_5.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark2", "stand_spit", -560,3032f, 22,78524f, 3833,79f, 0.0f, -49,85806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_644), 0);
	Local_5.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark3", "stand_key_twirling", -582,897f, 34,49655f, 3814,11f, 0.0f, -53,07253f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_648), 0);
	Local_5.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark4", "stand_guntricks_e_any", -576,779f, 28,94148f, 3847,087f, 0.0f, -131,297f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_652), 0);
	Local_5.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark5", "smoking_stand", -586,2288f, 34,64845f, 3850,912f, 0.0f, -138,8816f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_656), 0);
	Local_5.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark6", "nsit_docks", -583,4898f, 34,5748f, 3837,621f, 0.0f, -130,979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_660), 0);
	Local_5.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark7", "sit_ground_smoke", -578,5978f, 28,4573f, 3841,574f, 0.0f, -101,907f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_664), 0);
	Local_5.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark8", "sit_ground_smoke", -583,3972f, 26,90271f, 3852.0f, 0.0f, -88,43743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_668), 0);
	Local_5.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark9", "sit_ground_play_harmonica", -575,2004f, 28,40461f, 3841,486f, 0.0f, -313,2773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_672), 0);
	Local_5.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark11", "rand_idle_stand", -576,1994f, 29,7793f, 3820,138f, 0.0f, -67,84433f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_676), 0);
	Local_5.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark12", "rand_idle_stand", -568,0064f, 27,37984f, 3846,823f, 0.0f, -85,34988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_680), 0);
	Local_5.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark13", "Rand_Idle_Sit_Ground", -576,6311f, 28,47113f, 3838,295f, 0.0f, -163,0736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_684), 0);
	Local_5.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark14", "Pee", -570,251f, 26,61557f, 3819,763f, 0.0f, -86,62787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_688), 0);
	Local_5.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark15", "look_distance_binocs", -580,898f, 33,55491f, 3827,646f, 0.0f, -93,01151f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_692), 0);
	Local_5.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark16", "stand_lookdistance_w_any", -580,4172f, 34,52888f, 3818,119f, 0.0f, -122,0883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_696), 0);
	Local_5.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Mes_landmark17", "stand_lookdistance_w_any", -564,8317f, 23,73019f, 3826,123f, 0.0f, -71,81815f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_5.f_700), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark17", "stand_lookdistance_w_any", -1331,238f, 82,91322f, 3605,093f, 0.0f, 138,2342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark1", "look_distance_binocs", -1337,197f, 81,134f, 3586,58f, 0.0f, 60,24803f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark2", "stand_lookdistance_w_any", -1306,063f, 77,58575f, 3594,078f, 0.0f, -126,0736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark3", "stand_lookdistance_w_any", -1350,953f, 77,415f, 3596,393f, 0.0f, 93,68055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark4", "stand_lookdistance_w_any", -1329,711f, 83,16241f, 3604,284f, 0.0f, 235,914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark5", "smoking_stand_nospawn", -1336,671f, 81,20458f, 3588,376f, 0.0f, 107,5332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark7", "horse_stay", -1352,224f, 76,71698f, 3602,276f, 0.0f, 242,6949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark8", "horse_stay", -1349,171f, 77,00807f, 3601,257f, 0.0f, 36,29667f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark9", "horse_stay", -1338,272f, 80,34926f, 3592,964f, 0.0f, 256,7841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark10", "horse_stay", -1353,553f, 76,02035f, 3606,206f, 0.0f, 67,47733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark11", "sleeping_wall_scripted", -1331,993f, 81,58298f, 3580,936f, 0.0f, 157,8373f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark12", "look_distance_binocs", -1333,419f, 83,48002f, 3573,536f, 0.0f, 76,9311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark13", "stand_guntricks_e_any", -1310,068f, 78,20392f, 3584,787f, 0.0f, 236,313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark14", "rand_idle_stand", -1313,753f, 78,817f, 3584,856f, 0.0f, -51,82711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark15", "horse_tend", -1337,189f, 80,76552f, 3591,217f, 0.0f, 73,23474f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_5, "rocg_landmark16", "Rand_Idle_Sit_Ground", -1333,754f, 81,13485f, 3587,381f, 0.0f, 125,5873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_5.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire017", "Campfire03", -424.0f, 17,06665f, 4256.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire018", "Campfire01_bad", -384,4127f, 46,23904f, 4006,379f, 0.0f, 251,0532f, 0.0f);
	Local_5.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire021", "Campfire02", 141,4883f, 31,12616f, 3643,922f, 0.0f, 92,98228f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_712, "MP_ONLY", true);
	Local_5.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire022", "Campfire02", 288.0f, 28,92602f, 3736f, 0.0f, 83,90411f, 0.0f);
	Local_5.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire023", "Campfire02", 265,7404f, 28,10977f, 3534,26f, 0.0f, 91,11589f, 0.0f);
	Local_5.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire025", "Campfire03", 348.0f, 27,96825f, 3605,587f, 0.0f, 0.0f, 0.0f);
	Local_5.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire026", "Campfire05", -182,1737f, 70,25212f, 3465,135f, 0.0f, -30,78214f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_728, "MP_ONLY", true);
	Local_5.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire028", "Campfire05", 223,5977f, 26,10197f, 3364,402f, 0.0f, 0.0f, 0.0f);
	Local_5.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire029", "Campfire03", 266,0879f, 47,71142f, 3241,912f, 0.0f, 0.0f, 0.0f);
	Local_5.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire031", "Campfire03", 484,8363f, 52,56187f, 3187,164f, 0.0f, 108,0584f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_740, "MP_ONLY", true);
	Local_5.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire033", "Campfire03", -444,392f, 69,16816f, 3288,795f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_5.f_744, "MP_ONLY", true);
	Local_5.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire034", "Campfire02", -388f, 22,21107f, 3139,704f, 0.0f, 0.0f, 0.0f);
	Local_5.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire035", "Campfire02", -484,7629f, 17,07818f, 3680,768f, 0.0f, 0.0f, 0.0f);
	Local_5.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire036", "Campfire02", -796,6959f, 10,10592f, 3902,202f, 0.0f, 0.0f, 0.0f);
	Local_5.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire037", "Campfire02", -968,6183f, 7,027447f, 3976.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire038", "Campfire03", -1004.0f, 8,031406f, 4100.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire039", "Campfire03", -792.0f, 11,04317f, 4252.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire040", "Campfire05", -903,0235f, 8,031404f, 4100.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire041", "Campfire05", -813,5936f, 8,036981f, 4128,659f, 0.0f, 0.0f, 0.0f);
	Local_5.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire042", "Campfire05", -604.0f, 14,0549f, 3916.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire044", "Campfire03", -548.0f, 14,05494f, 4104.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire045", "Campfire03", -428f, 21,39385f, 3808.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire046", "Campfire02", -450,3149f, 18,57121f, 3628.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire047", "Campfire02", -251,2701f, 27,39859f, 3435,27f, 0.0f, 0.0f, 0.0f);
	Local_5.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire049", "Campfire03", -233,8977f, 31,01145f, 3537,898f, 0.0f, 0.0f, 0.0f);
	Local_5.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire050", "Campfire02", -263,1768f, 50,44444f, 3901,276f, 0.0f, 0.0f, 0.0f);
	Local_5.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire052", "Campfire03", 181,8246f, 28,33915f, 3438,175f, 0.0f, 0.0f, 0.0f);
	Local_5.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire053", "Campfire03", 177,4173f, 29,85258f, 3688.0f, 0.0f, 156,3296f, 0.0f);
	Local_5.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire054", "Campfire05", 256f, 26,1028f, 3429,515f, 0.0f, 0.0f, 0.0f);
	Local_5.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire055", "Campfire05", 310,0252f, 26,10199f, 3633,975f, 0.0f, 0.0f, 0.0f);
	Local_5.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", -905,2795f, 6,120781f, 4018,96f, 0.0f, 0.0f, 0.0f);
	Local_5.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", -724,2992f, 12,04706f, 3904.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", -1072,128f, 8,031372f, 4152,004f, 0.0f, 0.0f, 0.0f);
	Local_5.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", -736,3608f, 7,827786f, 4146,011f, 0.0f, 0.0f, 0.0f);
	Local_5.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", -460,1092f, 18,21953f, 3704,093f, 0.0f, 0.0f, 0.0f);
	Local_5.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", -504,6984f, 22,20414f, 3388,045f, 0.0f, 0.0f, 0.0f);
	Local_5.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", -435,1801f, 19,84951f, 3594,031f, 0.0f, 0.0f, 0.0f);
	Local_5.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", -270,4164f, 49,59292f, 3911,249f, 0.0f, 0.0f, 0.0f);
	Local_5.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", -557,9813f, 15,90394f, 3926,233f, 0.0f, 0.0f, 0.0f);
	Local_5.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", -561,4404f, 11,10295f, 4351,428f, 0.0f, 0.0f, 0.0f);
	Local_5.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", -400,0199f, 20,16208f, 4239,861f, 0.0f, 0.0f, 0.0f);
	Local_5.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", -444,8199f, 15,53144f, 4313,396f, 0.0f, 0.0f, 0.0f);
	Local_5.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", -552.0f, 11,04317f, 4352.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", 228.0f, 27,9649f, 3817,106f, 0.0f, 0.0f, 0.0f);
	Local_5.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", 139,8584f, 31,81403f, 3688,034f, 0.0f, 0.0f, 0.0f);
	Local_5.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", 244,4953f, 29,08238f, 3510,065f, 0.0f, 0.0f, 0.0f);
	Local_5.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", -342,3104f, 45,48911f, 3915,337f, 0.0f, 0.0f, 0.0f);
	Local_5.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", -688,5254f, 17,06666f, 3627,078f, 0.0f, 0.0f, 0.0f);
	Local_5.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", -284.0f, 26,46134f, 3532,476f, 0.0f, 0.0f, 0.0f);
	Local_5.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", -896.0f, 13,05101f, 4324.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage", "Player_Herb_woollyBlueCurls", -1352.0f, 13,66009f, 4239,98f, 0.0f, 0.0f, 0.0f);
	Local_5.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage1", "Player_Herb_woollyBlueCurls", -1128,61f, 18,37431f, 4315,084f, 0.0f, 0.0f, 0.0f);
	Local_5.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -1088.0f, 7,042808f, 4070,731f, 0.0f, 0.0f, 0.0f);
	Local_5.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", -873,3788f, 13,05101f, 4333,379f, 0.0f, 0.0f, 0.0f);
	Local_5.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -743,6987f, 9,114012f, 4515,974f, 0.0f, 0.0f, 0.0f);
	Local_5.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -752.0f, 11,04317f, 4277,421f, 0.0f, 0.0f, 0.0f);
	Local_5.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -636,0112f, 12,04709f, 4220.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -531,8919f, 22,29921f, 4154,04f, 0.0f, -64,5629f, 0.0f);
	Local_5.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -904,9533f, 6,089074f, 3976,993f, 0.0f, 0.0f, 0.0f);
	Local_5.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -1041,081f, 13,448f, 3868,099f, 0.0f, 0.0f, 0.0f);
	Local_5.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage10", "Player_Herb_woollyBlueCurls", -1282,566f, 67,2627f, 3813,828f, 0.0f, 0.0f, 0.0f);
	Local_5.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage11", "Player_Herb_woollyBlueCurls", -992.0f, 71,27844f, 3576.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage12", "Player_Herb_woollyBlueCurls", -984,6598f, 76,29416f, 3402,395f, 0.0f, 0.0f, 0.0f);
	Local_5.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage13", "Player_Herb_woollyBlueCurls", -460,402f, 18,07059f, 3547,07f, 0.0f, 20,28518f, 0.0f);
	Local_5.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage14", "Player_Herb_woollyBlueCurls", -378,6794f, 36,16063f, 3893,247f, 0.0f, 0.0f, 0.0f);
	Local_5.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage15", "Player_Herb_woollyBlueCurls", -482,8534f, 30,20636f, 3232.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage16", "Player_Herb_woollyBlueCurls", -826,3027f, 21,37297f, 3224,528f, 0.0f, 0.0f, 0.0f);
	Local_5.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", 280f, 44,15651f, 3280.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", 204f, 48,97747f, 3536.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", 248.0f, 33,515f, 3368.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", -180,7101f, 31,2964f, 3610,375f, 0.0f, 0.0f, 0.0f);
	Local_5.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", 308.0f, 28,59479f, 3680.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", -496,095f, 16,88821f, 4112,057f, 0.0f, 0.0f, 0.0f);
	Local_5.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", -1292,595f, 66,30639f, 3924,595f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", -46,87721f, 39,15293f, 3436f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", -663,9893f, 13,61824f, 3891,603f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", -713,616f, 23,59388f, 4444,34f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", -166,1611f, 38,14902f, 3088,026f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", -928,0001f, 71,33346f, 3520.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", -508,5906f, 17,06666f, 3804.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", -286,5252f, 51,81712f, 4088,712f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", -1232,669f, 38,07505f, 3352,668f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", -1469,036f, 22,27979f, 3511,638f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed2", "Player_Herb_ButterflyWeed", -1106f, 77,11635f, 3591,26f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", -225,3674f, 29,2757f, 3079,019f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", 227,6754f, 44,81975f, 3264.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", -540.0f, 37,84377f, 3540.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", -434,9474f, 21,08234f, 3766,917f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", -647,7579f, 15,04771f, 3590,837f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", -596.0f, 18,07059f, 3339,244f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", -986,0681f, 7,731964f, 3952,793f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", 256.0f, 28,10977f, 3529,897f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", -279,0793f, 31,43542f, 3783,705f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", 300.0f, 28,80191f, 3724f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed13", "Player_Herb_ButterflyWeed", -224,0991f, 30,63802f, 4270,219f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", -701,8191f, 9,685109f, 4120,612f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", -374,2852f, 21,12761f, 4327,816f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", -1325,839f, 67,05676f, 3892.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", -1180.0f, 16,94636f, 4289,671f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", -1067,828f, 14,09871f, 3951,976f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", -522,1499f, 17,06667f, 3984.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", 176,1462f, 64,41196f, 3132,123f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", -436,0832f, 43,10912f, 3328,062f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", -520.0f, 30,11765f, 3256f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", -1109,437f, 9,035294f, 4284.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", -491,3083f, 16,07239f, 4271,612f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", -1392f, 7,027454f, 4408.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", -1468f, 11,04314f, 4343,305f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", -1494,949f, 13,05098f, 4440.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", -1432.0f, 69,27054f, 4036,591f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", -1000,878f, 44,00829f, 3825,16f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", -1154,268f, 12,13892f, 4439,583f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", -932,7137f, 20,15159f, 4543,724f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", -1073,241f, 19,25794f, 4382.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", -896.0f, 14,05493f, 4340.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", -925,2434f, 6,113177f, 4415,63f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", -848.0f, 11,04317f, 4500.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", -736,5878f, 10,03925f, 4350,856f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", -528.0f, 11,04317f, 4348.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", -553,654f, 14,06855f, 4250,448f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed40", "Player_Herb_ButterflyWeed", -670,5288f, 27,3503f, 4317,688f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed41", "Player_Herb_ButterflyWeed", -965,9622f, 76,71277f, 3534,832f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed42", "Player_Herb_ButterflyWeed", -92,50905f, 41,1608f, 3005,489f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed43", "Player_Herb_ButterflyWeed", 418,3058f, 57,71587f, 3293,716f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1200 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed44", "Player_Herb_ButterflyWeed", 376,9338f, 54,58826f, 3157,095f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1204 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed45", "Player_Herb_ButterflyWeed", -55,61684f, 32,23711f, 3396,743f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1208 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed46", "Player_Herb_ButterflyWeed", 19,37307f, 38,42727f, 3458,521f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1212 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed47", "Player_Herb_ButterflyWeed", 429,962f, 21,8845f, 3587,73f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1216 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed48", "Player_Herb_ButterflyWeed", 209,6463f, 28,0322f, 3604,245f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1220 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed49", "Player_Herb_ButterflyWeed", -422,619f, 26,22769f, 3542,444f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1224 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed50", "Player_Herb_ButterflyWeed", -493,5766f, 17,06666f, 3616,596f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1228 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed51", "Player_Herb_ButterflyWeed", -620.0f, 14,91997f, 3558,162f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1232 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed52", "Player_Herb_ButterflyWeed", -1068,755f, 54,27743f, 3806,161f, 0.0f, -110,965f, 0.0f);
	Local_5.f_1236 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed53", "Player_Herb_ButterflyWeed", -797,5426f, 9,062623f, 3884,759f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1240 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed54", "Player_Herb_ButterflyWeed", -686,5418f, 12,04706f, 3906,474f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1244 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed55", "Player_Herb_ButterflyWeed", -775,9088f, 6,049286f, 4054,486f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1248 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed56", "Player_Herb_ButterflyWeed", -972.0f, 7,027447f, 3984.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1252 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed57", "Player_Herb_ButterflyWeed", -1087,176f, 14,97461f, 3950,302f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1256 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed58", "Player_Herb_ButterflyWeed", -1258,826f, 12,94118f, 4074,825f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1260 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed59", "Player_Herb_ButterflyWeed", -1136.0f, 8,031372f, 4220.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1264 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed60", "Player_Herb_ButterflyWeed", -1162,391f, 18,19985f, 4286,317f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed61", "Player_Herb_ButterflyWeed", -781,8239f, 8,021932f, 4128,854f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed62", "Player_Herb_ButterflyWeed", -560.0f, 14,0549f, 4088.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed63", "Player_Herb_ButterflyWeed", -348,3476f, 31,78596f, 4120,968f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed64", "Player_Herb_ButterflyWeed", -697,5889f, 11,12089f, 4526,161f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1284 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed65", "Player_Herb_ButterflyWeed", -1024.0f, 16,06274f, 4528.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1288 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed66", "Player_Herb_ButterflyWeed", -1016.0f, 16,06277f, 4384.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1292 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Player_Herb_ButterflyWeed67", "Player_Herb_ButterflyWeed", -1200.0f, 11,04314f, 4436.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1296 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker", "Locked_Footlocker", -301,6443f, 21,56683f, 3959,359f, 0.0f, 3,613572f, 0.0f);
	Local_5.f_1300 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker1", "Locked_Footlocker", -657,2154f, 20,09431f, 3241,789f, 0.0f, -193,1838f, 0.0f);
	Local_5.f_1304 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker2", "Locked_Footlocker", -72,00005f, 54,39764f, 2820.0f, 0.0f, -599,5729f, 0.0f);
	Local_5.f_1308 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker3", "Locked_Footlocker", 490,8085f, 72,29198f, 3412,761f, 0.0f, 196,7411f, 0.0f);
	Local_5.f_1312 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire01", "Campfire01", -1164.0f, 73,28625f, 3688.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1316 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire057", "Campfire03", -900.0f, 71,27844f, 3520.0f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1320 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire059", "Campfire05", -934,2301f, 59,45457f, 3773,597f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1324 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire061", "Campfire05", -1009,824f, 72,28236f, 3429,985f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1328 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire062", "Campfire03", -1250,224f, 83,32552f, 3485,12f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1332 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire064", "Campfire01", -1345,799f, 68,26664f, 3865,542f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1336 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire065", "Campfire01", -1243,491f, 72,28233f, 3677,055f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1340 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire066", "Campfire01", -1145,455f, 74,30277f, 3486,493f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1344 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire067", "Campfire04", -706,4178f, 66,25882f, 3524,573f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1348 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Campfire068", "Campfire06", -533,7559f, 19,07451f, 3441,453f, 0.0f, 0.0f, 0.0f);
	Local_5.f_1352 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker6", "Locked_Footlocker", -374,0065f, 22,46162f, 3972,148f, 0.0f, 62,34739f, 0.0f);
	Local_5.f_1356 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker7", "Locked_Footlocker", -328,7478f, 19,30516f, 3962,325f, 0.0f, -177,917f, 0.0f);
	Local_5.f_1360 = CREATE_OBJECTSET_IN_LAYOUT(Function_64(), Local_5, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "mex_talking_soldiers_link", "mex_talking_soldiers_link", 36,00005f, 93,0325f, 2952.0f, 0.0f, -45,75198f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", 20,00004f, 93,36469f, 2956.0f, 0.0f, -88,02906f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", 52,00005f, 93,36469f, 2948.0f, 0.0f, 134,4493f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", 32.0f, 92,506f, 2968.0f, 0.0f, 22,79796f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", 30,19795f, 93,365f, 2953,052f, 0.0f, -115,576f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "Rand_Idle_Sit_Ground_nospawn2", "Rand_Idle_Sit_Ground_nospawn", 16.0f, 93,278f, 2964.0f, 0.0f, -113,554f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "Rand_Idle_Sit_Ground_nospawn3", "Rand_Idle_Sit_Ground_nospawn", 28.0f, 91,888f, 2972.0f, 0.0f, -24,07149f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", 36.0f, 91,497f, 2976.0f, 0.0f, -175,1794f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", 28.0f, 91,086f, 2980.0f, 0.0f, -114,1734f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "rand_idle_stand_nospawn2", "rand_idle_stand_nospawn", 20.0f, 91,762f, 2976.0f, 0.0f, 108,5983f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "rand_idle_stand_nospawn3", "rand_idle_stand_nospawn", 16.0f, 92,155f, 2976.0f, 0.0f, -120,0937f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "stand_lookdistance_w_any", "stand_lookdistance_w_any", 12.0f, 93,393f, 2956.0f, 0.0f, 96,716f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", 52.0f, 93,558f, 2936.0f, 0.0f, -48,40675f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", 20.0f, 90,154f, 2992.0f, 0.0f, 154,5021f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", 48.0f, 92,06221f, 2968.0f, 0.0f, 203,9767f, 0.0f), Local_5.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_5, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", 8.0f, 99,388f, 2928.0f, 0.0f, 100,0739f, 0.0f), Local_5.f_1360);
	Local_5.f_1364 = CREATE_GRINGO_IN_LAYOUT(Local_5, "Locked_Footlocker8", "Locked_Footlocker", -535,6028f, 28,46724f, 3584,208f, 0.0f, -261,5026f, 0.0f);
	return 1;
}

bool Function_82(int iParam0) //Position: 0xA735 / 42805
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_86();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_85(iParam0[iVar03], 8);
		}
		else if (Function_84())
		{
			iVar1 = 1;
			Function_85(iParam0[iVar03], 8);
		}
		Function_85(iParam0[iVar03], 16);
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
				Function_85(iParam0[iVar03], 1);
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
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
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
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_85(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_85(iParam0[iVar03], 2);
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
	Function_83();
	return 1;
}

void Function_83() //Position: 0xAAB0 / 43696
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

bool Function_84() //Position: 0xAAF0 / 43760
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

void Function_85(var uParam0, int iParam1) //Position: 0xAB1B / 43803
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_86() //Position: 0xAB2C / 43820
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

var Function_87(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xAB6E / 43886
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_88(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_85(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_88(var uParam0, int iParam1, int iParam2) //Position: 0xABA6 / 43942
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_85(uParam0[iVar03], 4);
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

void Function_89(int iParam0, int iParam1) //Position: 0xAC6A / 44138
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

bool Function_90(var uParam0, bool bParam1) //Position: 0xACB3 / 44211
{
	int iVar0;
	
	iVar0 = Function_92(uParam0);
	if (!Function_91(iVar0))
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

bool Function_91(int iParam0) //Position: 0xACF0 / 44272
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_92(int iParam0) //Position: 0xAD07 / 44295
{
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_93(int iParam0) //Position: 0xAD21 / 44321
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_94() //Position: 0xAD37 / 44343
{
	var uVar0;
	
	Function_89(3, 3);
	uVar0 = uVar0;
	Function_87(&bLocal_0 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_82(&bLocal_0 + 4))
	{
		return 0;
	}
	bLocal_0 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_0))
	{
		bLocal_0 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	Function_95(bLocal_0, "cover1x1x0", "p_uti_cover1x1x", -237,6518f, 34,38753f, 3754,085f, 11,40923f, -140,8511f, 0.0f, 1);
	Function_95(bLocal_0, "cover1x1x1", "p_uti_cover1x1x", -223,8871f, 34,55111f, 3741,238f, 0.0f, -43,30798f, 0.0f, 1);
	Function_95(bLocal_0, "cover1x1x2", "p_uti_cover1x1x", -262,1187f, 34,4931f, 3763,64f, 0.0f, -30,92613f, 0.0f, 1);
	return 1;
}

var Function_95(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xAE65 / 44645
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	iParam2 = iParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_96(bool bParam0, int iParam1) //Position: 0xAE8F / 44687
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

void Function_97(int iParam0) //Position: 0xAECA / 44746
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

