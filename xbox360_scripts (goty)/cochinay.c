//Decompiled with MagicRDR v1.0
//Function Count : 44
//Statics Count : 33
//Natives Count : 74
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	bool bLocal_4 = false;
	bool bLocal_5 = false;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = false;
	var uLocal_9 = 1;
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
	int iLocal_30 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_6 = 0;
	Function_43("Initializing Cochinay", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_7 = 1000;
		switch (iLocal_6)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_6 = 1;
				}
				iLocal_7 = 0;
				break;
			
			case 0x00000001:
				if (Function_42())
				{
					if (Function_41())
					{
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						DISABLE_CHILD_SECTOR("coc_gates01x");
						ENABLE_CHILD_SECTOR("coc_gates02x");
					}
					iLocal_6 = 2;
				}
				iLocal_7 = 0;
				break;
			
			case 0x00000002:
				if (Function_39())
				{
					Function_38(&(Global_29008[iScriptParam_0]), 32);
					iLocal_6 = 3;
				}
				iLocal_7 = 0;
				break;
			
			case 0x00000003:
				bLocal_8 = LAUNCH_NEW_SCRIPT_WITH_ARGS("CochinayVol", &iScriptParam_0, 2, 0);
				Function_37(&Global_7171, &Global_8481, iScriptParam_0);
				iLocal_6 = 5;
				iLocal_7 = 0;
				break;
			
			case 0x00000005:
				if (Function_36(&Global_7171, &Global_8481, iScriptParam_0))
				{
					iLocal_6 = 4;
					iLocal_7 = 0;
				}
				else
				{
					iLocal_7 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_35(&(Global_29008[iScriptParam_0]), 16) && Function_34(Global_29155[iScriptParam_010]))
				{
					iLocal_6 = 6;
				}
				iLocal_7 = 0;
				break;
			
			case 0x00000006:
				Function_38(&(Global_29008[iScriptParam_0]), 256);
				iLocal_30 = 1;
				Function_28(&Global_7171, &Global_8481, &uLocal_9, Global_6289, iScriptParam_0);
				if (Function_35(&(Global_29008[iScriptParam_0]), 256) || !Function_27(2))
				{
					iLocal_30 = 1;
				}
				Function_38(&(Global_29008[iScriptParam_0]), 8);
				if (Function_35(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_26(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_6 = 10;
				}
				else
				{
					iLocal_6 = 7;
				}
				iLocal_7 = 0;
				break;
			
			case 0x00000007:
				iLocal_6 = 8;
				iLocal_7 = 0;
				break;
			
			case 0x00000008:
				Function_25(64);
				Function_21(1, 8, 4, 0, 3);
				Function_17(StackVal, 0, 0.0f, 3, bLocal_4, 1);
				Function_38(&(Global_29008[iScriptParam_0]), 512);
				iLocal_6 = 9;
				iLocal_7 = 0;
				break;
			
			case 0x00000009:
				Function_15(bLocal_4, iScriptParam_0);
				Function_38(&(Global_29008[iScriptParam_0]), 4);
				Function_14("Finished Initializing Cochinay", 5.0f);
				iLocal_6 = 10;
				iLocal_7 = 0;
				break;
			
			case 0x0000000A:
				if (Function_35(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_6 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_7);
	}
	Function_3(&Global_7171, &Global_8481, iScriptParam_0, iLocal_30);
	Function_2();
	Function_1();
	if (Function_41())
	{
		DISABLE_CHILD_SECTOR("coc_fence01bx");
		ENABLE_CHILD_SECTOR("coc_fence01x");
		DISABLE_CHILD_SECTOR("coc_gates02x");
		ENABLE_CHILD_SECTOR("coc_gates01x");
	}
	Function_26(&(Global_29008[iScriptParam_0]), 32);
	Function_26(&(Global_29008[iScriptParam_0]), 64);
	Function_26(&(Global_29008[iScriptParam_0]), 8);
	Function_26(&(Global_29008[iScriptParam_0]), 512);
	Function_26(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_8))
	{
		TERMINATE_SCRIPT(bLocal_8);
	}
	Function_14("Unloaded Cochinay", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x366 / 870
{
	RELEASE_LAYOUT_REF(bLocal_5);
	return;
}

void Function_2() //Position: 0x371 / 881
{
	RELEASE_LAYOUT_REF(bLocal_4);
	return;
}

void Function_3(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x37C / 892
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_41())
	{
		return;
	}
	strcpy(&cVar0, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_35(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_26(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_9(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_9(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_8(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_9(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_8(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_35(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_27(2) || Function_35(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_9(uParam0[iVar162], 2) && !Function_9(uParam0[iVar162], 4))
		{
			Function_4(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_9(uParam0[iVar162], 2) && !Function_9(uParam0[iVar162], 4))
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
			Function_38(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_4(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x57C / 1404
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_7(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_6(Global_29007), Function_5(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_9(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_9(uParam0[iParam22], 1) && !bParam3)
	{
		Function_7(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_6(Global_29007), Function_5(Global_29007), false, 0);
	}
}

int Function_5(int iParam0) //Position: 0x6CB / 1739
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

int Function_6(int iParam0) //Position: 0x6F6 / 1782
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

void Function_7(var uParam0, int iParam1) //Position: 0x72A / 1834
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x739 / 1849
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x750 / 1872
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_10() //Position: 0x76C / 1900
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x787 / 1927
{
	return (uParam0 && iParam1) == 0;
}

var Function_12(int iParam0) //Position: 0x794 / 1940
{
	if (!Function_13(iParam0))
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

bool Function_13(int iParam0) //Position: 0xC42 / 3138
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_14(bool bParam0, float fParam1) //Position: 0xC58 / 3160
{
	if (!Function_27(128))
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

void Function_15(bool bParam0, bool bParam1) //Position: 0xC96 / 3222
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
		Function_16(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_41())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_16(var uParam0, bool bParam1) //Position: 0xD90 / 3472
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &bParam1);
	return;
}

void Function_17(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD9D / 3485
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
		Function_20();
	}
	if (bParam5)
	{
		Function_18(1048576);
	}
}

void Function_18(int iParam0) //Position: 0xEB0 / 3760
{
	Function_19(&Global_28842, iParam0);
	return;
}

void Function_19(var uParam0, var uParam1) //Position: 0xEBE / 3774
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_20() //Position: 0xED9 / 3801
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_18(16384);
	}
	return;
}

void Function_21(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xEF5 / 3829
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
		Function_22();
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

void Function_22() //Position: 0xFD9 / 4057
{
	int iVar0;
	
	Global_26960 = Function_23(StackVal);
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

int Function_23(int iParam0) //Position: 0x1027 / 4135
{
	if (!Function_24(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_24(int iParam0) //Position: 0x103F / 4159
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_25(int iParam0) //Position: 0x1054 / 4180
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x1067 / 4199
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_27(int iParam0) //Position: 0x107E / 4222
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_28(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x109A / 4250
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_27(2))
	{
		return;
	}
	if (Function_35(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_9(uParam0[iVar02], 2))
		{
			if (Function_29(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_26(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_38(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_29(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x114C / 4428
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_35(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_9(iParam0, 2))
	{
		return 1;
	}
	if (Function_9(iParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, 0))
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
		uParam1->f_8 = Function_32(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_31(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_8(iParam0, 4);
	}
	Function_30(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_30(bool bParam0, int iParam1) //Position: 0x12B7 / 4791
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_31(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_31(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_31(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_31(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_31(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_31(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_31(vector3 vParam0) //Position: 0x13F3 / 5107
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_32(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x140B / 5131
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_33(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

var Function_33() //Position: 0x1524 / 5412
{
	int iVar0;
	
	return iVar0;
}

int Function_34(int iParam0) //Position: 0x152C / 5420
{
	if (!Function_13(iParam0))
	{
		return 1;
	}
	return Function_35(&(Global_29008[iParam0]), 4);
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1548 / 5448
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_36(var uParam0, var uParam1, int iParam2) //Position: 0x1564 / 5476
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_13(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_41())
	{
		return 1;
	}
	strcpy(&cVar1, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_35(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_9(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_9(uParam0[iVar02], 8))
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

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x1645 / 5701
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_13(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_41())
	{
		return;
	}
	strcpy(&cVar1, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_35(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_38(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_7(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_7(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x172D / 5933
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_39() //Position: 0x173C / 5948
{
	Function_40(2, 3);
	bLocal_5 = FIND_NAMED_LAYOUT("Cochinay_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_5))
	{
		bLocal_5 = CREATE_LAYOUT("Cochinay_layout");
	}
	return 1;
}

void Function_40(int iParam0, int iParam1) //Position: 0x177F / 6015
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

bool Function_41() //Position: 0x17C8 / 6088
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_42() //Position: 0x17D1 / 6097
{
	var uVar0;
	
	Function_40(3, 3);
	uVar0 = uVar0;
	bLocal_4 = FIND_NAMED_LAYOUT("Cochinay_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_4))
	{
		bLocal_4 = CREATE_LAYOUT("Cochinay_layout");
	}
	return 1;
}

void Function_43(bool bParam0, var uParam1) //Position: 0x1818 / 6168
{
	if (!Function_27(128))
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

