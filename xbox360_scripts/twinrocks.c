//Decompiled with MagicRDR v1.0
//Function Count : 312
//Statics Count : 795
//Natives Count : 512
//Parameters Count : 2

#region Local Var
	struct<1385> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_467 = 0;
	bLocal_468 = false;
	iLocal_618 = 0;
	iLocal_619 = 0;
	iLocal_625 = 0;
	iLocal_634 = 0;
	iLocal_635 = 0;
	iLocal_639 = 0;
	iLocal_640 = 0;
	iLocal_641 = 0;
	iLocal_642 = 0;
	iLocal_643 = 0;
	iLocal_644 = 0;
	bLocal_645 = false;
	iLocal_646 = 0;
	iLocal_647 = 0;
	bLocal_648 = false;
	iLocal_743 = 0;
	iLocal_760 = 0;
	bLocal_761 = false;
	iLocal_762 = 0;
	iLocal_763 = 0;
	iLocal_764 = 0;
	iLocal_765 = 0;
	iLocal_766 = 0;
	bLocal_767 = false;
	iLocal_768 = 0;
	iLocal_769 = 0;
	iLocal_770 = 0;
	iLocal_771 = 0;
	iLocal_772 = 0;
	iLocal_773 = 0;
	bLocal_774 = false;
	bLocal_775 = false;
	iLocal_776 = 0;
	bLocal_777 = false;
	bLocal_778 = false;
	bLocal_779 = false;
	iLocal_780 = 0;
	iLocal_781 = 0;
	iLocal_782 = 0;
	bLocal_783 = false;
	iLocal_784 = 0;
	iLocal_785 = 0;
	iLocal_786 = 0;
	iLocal_787 = 0;
	iLocal_788 = 0;
	iLocal_470 = 0;
	bLocal_602 = Function_311(&(Global_29008[iScriptParam_0]));
	Function_310("Initializing Twin Rocks", 3);
	Function_308(&iLocal_595, "$/content/scripting/gringo/SimpleGringo/locked_footlocker", 1, 0);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_471 = 1000;
		switch (iLocal_470)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_470 = 1;
				}
				bLocal_471 = false;
				break;
			
			case 0x00000001:
				if (Function_307())
				{
					iLocal_470 = 2;
				}
				bLocal_471 = false;
				break;
			
			case 0x00000002:
				if (Function_305())
				{
					Function_304(&(Global_29008[iScriptParam_0]), 32);
					iLocal_470 = 3;
				}
				bLocal_471 = false;
				break;
			
			case 0x00000003:
				bLocal_472 = LAUNCH_NEW_SCRIPT_WITH_ARGS("TwinRocksVol", &iScriptParam_0, 2, 0);
				Function_303(&Global_6351, &Global_7268, iScriptParam_0);
				iLocal_470 = 5;
				if (Function_302() && Function_300())
				{
					bLocal_473 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Twin_Rocks/TwinRocksMP", 0);
				}
				bLocal_471 = false;
				break;
			
			case 0x00000005:
				if (Function_299(&Global_6351, &Global_7268, iScriptParam_0))
				{
					iLocal_470 = 4;
					bLocal_471 = false;
				}
				else
				{
					bLocal_471 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_298(&(Global_29008[iScriptParam_0]), 16) && Function_297(Global_29155[iScriptParam_010]))
				{
					bLocal_601 = Function_292(0, iScriptParam_0, 5);
					iLocal_470 = 6;
				}
				bLocal_471 = false;
				break;
			
			case 0x00000006:
				if (!Function_298(&(Global_29008[iScriptParam_0]), 256) && Function_291(2))
				{
					Function_283(0, &uLocal_474, -2415,34f, 29,262f, 2138,176f);
					Function_282(0, &uLocal_474, Local_0);
					Function_283(1, &uLocal_474, -2432.0f, 24,894f, 2132.0f);
					Function_282(1, &uLocal_474, Local_0);
					Function_283(2, &uLocal_474, -2432.0f, 24,854f, 2132.0f);
					Function_282(2, &uLocal_474, Local_0);
					Function_283(3, &uLocal_474, -2419,854f, 24,617f, 2156,061f);
					Function_282(3, &uLocal_474, Local_0);
					Function_275(4, &uLocal_474, Local_0.f_1164);
					Function_282(4, &uLocal_474, Local_0);
					Function_283(5, &uLocal_474, -2449,638f, 33,525f, 2127,497f);
					Function_282(5, &uLocal_474, Local_0);
					Function_272(&Global_6351, &Global_7268, &uLocal_474, Global_6289, iScriptParam_0);
					SET_FACTIONS_STATUS_TWO_WAY(2, 25, 3);
				}
				else
				{
					bLocal_602 = false;
					iLocal_603 = 1;
				}
				if (Function_298(&(Global_29008[iScriptParam_0]), 256) || !Function_291(2))
				{
					iLocal_603 = 1;
				}
				Function_304(&(Global_29008[iScriptParam_0]), 8);
				iLocal_470 = 7;
				bLocal_471 = false;
				break;
			
			case 0x00000007:
				if (!Function_271(bLocal_601) != 3)
				{
				}
				iLocal_470 = 8;
				bLocal_471 = false;
				break;
			
			case 0x00000008:
				if (Function_302())
				{
					Function_269(StackVal, 0, 0.0f, 3, Local_0, 1);
				}
				else if (Function_268(iScriptParam_0, &Global_6351, iLocal_603))
				{
					Function_269(StackVal, 0, 0,1f, 3, Local_0, 1);
				}
				else
				{
					Function_269(StackVal, 0, 0,5f, 3, Local_0, 1);
				}
				Function_267(64);
				Function_263(2, 4294967295, 4294967295, 0, 3);
				Function_304(&(Global_29008[iScriptParam_0]), 512);
				iLocal_470 = 9;
				bLocal_471 = false;
				break;
			
			case 0x00000009:
				Function_261(Local_0, iScriptParam_0);
				Function_304(&(Global_29008[iScriptParam_0]), 4);
				Function_260("Finished Initializing Twin Rocks", 5.0f);
				iLocal_470 = 10;
				bLocal_471 = false;
				if (!Function_259(Global_30640[2]))
				{
					if (bLocal_602)
					{
						if (((!Global_3380 && !Global_3382) && !Global_3384) && Function_258(2, 0))
						{
							Function_244();
						}
					}
					else
					{
						bLocal_602 = false;
					}
				}
				else
				{
					if (!Global_63096)
					{
						Function_243();
						Function_242("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_602 = false;
				}
				Function_241(&(Global_29008[iScriptParam_0]));
				break;
			
			case 0x0000000A:
				Function_238();
				if (bLocal_602)
				{
					Function_42();
					bLocal_471 = false;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_471);
	}
	if (bLocal_602)
	{
		Function_32();
	}
	Function_30();
	if (Function_271(Global_30734) == 2)
	{
		Function_20(Global_30734);
	}
	if (Function_271(bLocal_601) == 2)
	{
		Function_20(bLocal_601);
	}
	Function_12(&Global_6351, &Global_7268, iScriptParam_0, iLocal_603);
	Function_11();
	Function_10();
	Function_6(&iLocal_595);
	Function_2(iScriptParam_0);
	Function_267(64);
	Function_1(&(Global_29008[iScriptParam_0]), 32);
	Function_1(&(Global_29008[iScriptParam_0]), 64);
	Function_1(&(Global_29008[iScriptParam_0]), 8);
	Function_1(&(Global_29008[iScriptParam_0]), 512);
	Function_1(&(Global_29008[iScriptParam_0]), 4);
	RESET_FACTIONS_STATUS_TWO_WAY(2, 25);
	if (IS_SCRIPT_VALID(bLocal_473))
	{
		TERMINATE_SCRIPT(bLocal_473);
	}
	if (IS_SCRIPT_VALID(bLocal_472))
	{
		TERMINATE_SCRIPT(bLocal_472);
	}
	Function_260("Unloaded Twin Rocks", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x60A / 1546
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x621 / 1569
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

void Function_3(int iParam0) //Position: 0x657 / 1623
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x679 / 1657
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x68F / 1679
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6(int iParam0) //Position: 0x6A5 / 1701
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

void Function_7(var uParam0, int iParam1) //Position: 0x6CB / 1739
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

void Function_8(var uParam0, int iParam1) //Position: 0x7F9 / 2041
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x813 / 2067
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x830 / 2096
{
	Function_6(&Local_347 + 4);
	RELEASE_LAYOUT_REF(Local_347);
	return;
}

void Function_11() //Position: 0x844 / 2116
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x84F / 2127
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_302())
	{
		return;
	}
	if (Function_298(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
		Function_1(&(Global_29008[iParam2]), 0x40000000);
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
	if (!Function_298(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_291(2) || Function_298(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2) && !Function_18(uParam0[iVar02], 4))
		{
			Function_13(uParam0, uParam1, iVar0, bParam3);
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
			Function_304(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_13(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xA3A / 2618
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

int Function_14(int iParam0) //Position: 0xB89 / 2953
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

int Function_15(int iParam0) //Position: 0xBB4 / 2996
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

void Function_16(var uParam0, int iParam1) //Position: 0xBE8 / 3048
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xBF7 / 3063
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_18(var uParam0, int iParam1) //Position: 0xC0E / 3086
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0xC2A / 3114
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

void Function_20(bool bParam0) //Position: 0x10D8 / 4312
{
	int iVar0;
	
	if (!Function_28(bParam0))
	{
		Function_26();
		return;
	}
	iVar0 = Function_25(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_21("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_21(char* cParam0, bool bParam1) //Position: 0x112B / 4395
{
	struct<4> Var0;
	
	if (!Function_28(bParam1))
	{
		return;
	}
	switch (Function_25(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_22(Function_23(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_25(bParam1), Function_23(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_25(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_25(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_25(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_25(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_25(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_22(int iParam0) //Position: 0x124F / 4687
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_23(bool bParam0) //Position: 0x1274 / 4724
{
	if (!Function_24(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_24(int iParam0) //Position: 0x1294 / 4756
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_25(bool bParam0) //Position: 0x12AB / 4779
{
	if (!Function_24(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_26() //Position: 0x12C6 / 4806
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
			Function_27(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_27(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x150D / 5389
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_28(int iParam0) //Position: 0x1536 / 5430
{
	if (!Function_24(iParam0))
	{
		return 0;
	}
	if (!Function_29(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_29(int iParam0) //Position: 0x155A / 5466
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_30() //Position: 0x156F / 5487
{
	if (IS_OBJECTSET_VALID(bLocal_469))
	{
		Function_31(bLocal_469);
		DESTROY_OBJECTSET(bLocal_469);
	}
	return;
}

void Function_31(bool bParam0) //Position: 0x158A / 5514
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

void Function_32() //Position: 0x15CF / 5583
{
	int iVar0;
	bool bVar1;
	
	if (Function_271(Global_30734) == 2)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_FLEEING", true, false, 2, 0, true, false);
		}
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_41();
	Function_6(&iLocal_682);
	Function_40();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	if (Function_271(Global_30734) == 2)
	{
		Function_20(Global_30734);
	}
	if (iLocal_646 && !bLocal_645)
	{
		if (IS_ACTOR_VALID(Function_39()))
		{
			RESET_ANIM_SET_FOR_ACTOR(Function_39(), true);
		}
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	REMOVE_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), false);
	Function_38(bLocal_670, Global_34573, 2);
	Function_38(bLocal_671, Global_34573, 2);
	RESET_FACTIONS();
	if (DECOR_CHECK_EXIST(Global_34573, "HelperIsAlive"))
	{
		DECOR_REMOVE(Global_34573, "HelperIsAlive");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "ReadyForBoss"))
	{
		DECOR_REMOVE(Global_34573, "ReadyForBoss");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIHitAgain"))
	{
		DECOR_REMOVE(Global_34573, "SP_TW_MakeAIHitAgain");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIMiss"))
	{
		DECOR_REMOVE(Global_34573, "SP_TW_MakeAIMiss");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TW_RemoveHelperBlip"))
	{
		DECOR_REMOVE(Global_34573, "TW_RemoveHelperBlip");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "RunningFTE"))
	{
		DECOR_REMOVE(Global_34573, "RunningFTE");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "AllGuysDead"))
	{
		DECOR_REMOVE(Global_34573, "AllGuysDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TW_BlipCaptive"))
	{
		DECOR_REMOVE(Global_34573, "TW_BlipCaptive");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "IntroCutsceneOver"))
	{
		DECOR_REMOVE(Global_34573, "IntroCutsceneOver");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TimeToPlayAnims"))
	{
		DECOR_REMOVE(Global_34573, "TimeToPlayAnims");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SnipersDead"))
	{
		DECOR_REMOVE(Global_34573, "SnipersDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TWR_AA_Key"))
	{
		DECOR_REMOVE(Global_34573, "TWR_AA_Key");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TWR_HelperActive"))
	{
		DECOR_REMOVE(Global_34573, "TWR_HelperActive");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "FirstGroupDead"))
	{
		DECOR_REMOVE(Global_34573, "FirstGroupDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TWR_SheriffStarted"))
	{
		DECOR_REMOVE(Global_34573, "TWR_SheriffStarted");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TaskGirlNow"))
	{
		DECOR_REMOVE(Global_34573, "TaskGirlNow");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PlayerStartedEarly"))
	{
		DECOR_REMOVE(Global_34573, "PlayerStartedEarly");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "IntroSpecialCase"))
	{
		DECOR_REMOVE(Global_34573, "IntroSpecialCase");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PrintObjThruCut"))
	{
		DECOR_REMOVE(Global_34573, "PrintObjThruCut");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PrintObjThruAggro"))
	{
		DECOR_REMOVE(Global_34573, "PrintObjThruAggro");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "DadNotNaturalDeath"))
	{
		DECOR_REMOVE(Global_34573, "DadNotNaturalDeath");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "TimeToMoveDad"))
	{
		DECOR_REMOVE(Global_34573, "TimeToMoveDad");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "BossScriptRunning"))
	{
		DECOR_REMOVE(Global_34573, "BossScriptRunning");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		Function_36(&Global_6351, &Global_7268, iVar0, 0);
		iVar0++;
	}
	DECOR_REMOVE(Global_34573, "HelperIsAlive");
	DECOR_REMOVE(Global_34573, "HelperIsDead");
	if (SQUAD_IS_VALID(bLocal_672))
	{
		Function_35(bLocal_672);
		SQUAD_MAKE_EMPTY(bLocal_672);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(bLocal_672));
	}
	if (IS_BLIP_VALID(bLocal_674))
	{
		REMOVE_BLIP(bLocal_674);
	}
	if (IS_BLIP_VALID(bLocal_675))
	{
		REMOVE_BLIP(bLocal_675);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	if (!HAS_SOUND_FINISHED(bLocal_678))
	{
		STOP_SOUND(bLocal_678);
	}
	if (!HAS_SOUND_FINISHED(bLocal_679))
	{
		STOP_SOUND(bLocal_679);
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	if (IS_LAYOUTREF_VALID(bLocal_660))
	{
		RELEASE_LAYOUT_REF(bLocal_660);
	}
	Function_33(32768);
	return;
}

void Function_33(int iParam0) //Position: 0x1C0B / 7179
{
	Function_34(&Global_28842, iParam0);
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x1C19 / 7193
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_35(bool bParam0) //Position: 0x1C34 / 7220
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

void Function_36(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1C81 / 7297
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
	Function_37(StackVal);
	if (bParam3)
	{
		Function_13(uParam0, uParam1, uParam2, 0);
	}
}

int Function_37(bool bParam0) //Position: 0x1D1B / 7451
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_38(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1DB5 / 7605
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

var Function_39() //Position: 0x1DFA / 7674
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_40() //Position: 0x1E0F / 7695
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_41() //Position: 0x1E24 / 7716
{
	if (IS_ACTOR_VALID(bLocal_600))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_600, false);
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_600)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_600));
		}
		RELEASE_ACTOR_AS_AMBIENT(bLocal_600);
	}
	return;
}

int Function_42() //Position: 0x1E55 / 7765
{
	switch (iLocal_743)
	{
		case 0x00000000:
			if (Function_233(&iLocal_682))
			{
				if (REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\AA_TWIN_ROCKS"))
				{
					iLocal_743 = 1;
				}
			}
			break;
		
		case 0x00000001:
			Function_231(&bLocal_660, &bLocal_664, &bLocal_681, &uLocal_661, &bLocal_759);
			Function_230(&bLocal_660, &uLocal_667, &uLocal_673);
			DECOR_SET_BOOL(Global_34573, "SP_TW_MakeAIMiss", true);
			LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TWR/TwinRocks_Escort", 0);
			iLocal_743 = 2;
			break;
		
		case 0x00000002:
			if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_Escort_Layout")))
			{
				if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive")))
				{
					bLocal_665 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive");
					GET_POSITION(bLocal_665, &uLocal_789);
					Function_229(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_dadGringo"));
					Function_228(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_dadGringo"));
					bLocal_663 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_660, "ndadGringo", "twin_rocks_dad", Function_229(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_dadGringo")), Function_228(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_dadGringo"))));
					GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(bLocal_663, "UseCase1", "UseAnim", 202);
					bLocal_680 = FIND_VOLUME_IN_LAYOUT(Global_30616, "v_PrintObjective");
					iLocal_743 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_226("sc_challenge_aa_01", &iLocal_744);
			Function_225(&bLocal_671, &bLocal_670);
			if (Function_224(bLocal_759, 0x10000000))
			{
				if (!iLocal_772)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_172) && !Global_28178 != 4)
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_223("TWR_Obj_SecondMainObj", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_681, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_681, "TWR_Obj_SecondMainObj", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_681, 0);
						if (!Function_222(bLocal_670, 1))
						{
							Function_221(bLocal_670, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (!Function_222(bLocal_671, 1))
						{
							Function_221(bLocal_671, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						SQUAD_SET_FACTION(bLocal_670, 19);
						SQUAD_SET_FACTION(bLocal_671, 19);
						Function_38(bLocal_670, Global_34573, 4);
						Function_38(bLocal_671, Global_34573, 4);
						Function_220(bLocal_670, -1.0f);
						Function_219(bLocal_671, 1, -1.0f);
						iLocal_772 = 1;
					}
				}
			}
			if (!iLocal_771)
			{
				if (Global_28178 == 4)
				{
					SQUAD_SET_FACTION(bLocal_670, 20);
					SQUAD_SET_FACTION(bLocal_671, 20);
					Function_38(bLocal_670, Global_34573, 0);
					Function_38(bLocal_671, Global_34573, 0);
					iLocal_771 = 1;
				}
			}
			if (!iLocal_770)
			{
				if (!IS_ACTOR_ALIVE(bLocal_665))
				{
					if (!HAS_SOUND_FINISHED(bLocal_679))
					{
						STOP_SOUND(bLocal_679);
					}
					iLocal_770 = 1;
				}
			}
			if (!iLocal_766)
			{
				if (IS_ACTOR_VALID(bLocal_664))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_664, Local_0.f_128))
					{
						if (IS_ACTOR_ALIVE(bLocal_666) && IS_ACTOR_ALIVE(bLocal_665))
						{
							Function_218();
							AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
							iLocal_766 = 1;
						}
					}
				}
			}
			if (!iLocal_773)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_128))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_773 = 1;
				}
			}
			if (!iLocal_769)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_168))
				{
					if (IS_ACTOR_ALIVE(bLocal_665))
					{
						bLocal_679 = GET_SOUND_ID();
						PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_679, "AA_TWIN_ROCKS_FEMALE_CRYING_MASTER", *(&Local_0 + 944));
						iLocal_769 = 1;
					}
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "PlayerStartedEarly"))
			{
				if (Function_217(Global_34573, bLocal_664) > 20.0f)
				{
					Function_218();
					DECOR_REMOVE(Global_34573, "PlayerStartedEarly");
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "PlayGirlAudio"))
			{
				DECOR_REMOVE(Global_34573, "PlayGirlAudio");
				Function_216();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "GuysRunOut"))
			{
				DECOR_REMOVE(Global_34573, "GuysRunOut");
				Function_215();
			}
			if (!iLocal_768)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "PlayHostageLine"))
				{
					DECOR_REMOVE(Global_34573, "PlayHostageLine");
					Function_214();
					iLocal_768 = 1;
				}
			}
			if (iLocal_763)
			{
				if (IS_ACTOR_VALID(bLocal_666))
				{
					if (IS_ACTOR_ALIVE(bLocal_666))
					{
						if (DECOR_CHECK_EXIST(bLocal_666, "PlayerInHouse") && !iLocal_765)
						{
							Function_213(&iLocal_747);
							Function_211(&iLocal_747);
							iLocal_765 = 1;
						}
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_666))
			{
				if (IS_ACTOR_ALIVE(bLocal_666))
				{
					if (Function_210(&iLocal_747))
					{
						DECOR_SET_FLOAT(bLocal_666, "PlayerInHouse", Function_208(&iLocal_747));
					}
				}
			}
			if (!Function_224(bLocal_759, 0x8000000))
			{
				if (Function_205(&bLocal_671, &bLocal_670))
				{
					Function_204(&bLocal_759, 0x8000000);
					if (!Function_271(Global_30734) != 2)
					{
						Function_203(Global_30734, 1);
						Global_3385 = 1;
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					if (!DECOR_CHECK_EXIST(Global_34573, "PrintObjThruCut"))
					{
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_223("TWR_ObjKillGang", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_681, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_681, "TWR_ObjKillGang", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_681, 0);
						DECOR_SET_BOOL(Global_34573, "PrintObjThruAggro", true);
					}
					if (DECOR_CHECK_EXIST(Global_34573, "RancherIsDead"))
					{
						DECOR_REMOVE(Global_34573, "RancherIsDead");
						Function_242("TWR_ObjKillGang", 0, -1.0f, 2, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(bLocal_681, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(bLocal_681, "TWR_ObjKillGang", 0, 0, false);
						APPEND_JOURNAL_ENTRY(bLocal_681, 0);
					}
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIMiss"))
			{
				Function_202(&bLocal_671, &bLocal_670, &bLocal_664);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIHitAgain"))
			{
				Function_201(&bLocal_671, &bLocal_670);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "TimeToCheckForBlips"))
			{
				if (!Function_222(bLocal_670, 1))
				{
					Function_221(bLocal_670, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!Function_222(bLocal_671, 1))
				{
					Function_221(bLocal_671, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				DECOR_REMOVE(Global_34573, "TimeToCheckForBlips");
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_671) == 0)
			{
				DECOR_SET_BOOL(Global_34573, "SnipersDead", true);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_671) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_670) >= 3)
			{
				DECOR_SET_BOOL(Global_34573, "TimeToMoveDad", true);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_670) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_671) != 0)
			{
				DECOR_SET_BOOL(Global_34573, "FirstGroupDead", true);
			}
			if (!Function_224(bLocal_759, 16))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_670) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_671) != 0)
				{
					Function_204(&bLocal_759, 16);
					DECOR_SET_BOOL(Global_34573, "ReadyForBoss", true);
					LAUNCH_NEW_SCRIPT("$/content/Ambient/Regional/TWR/event_TWR_bossDrop", 0);
					Function_200(bLocal_676, 0);
					OPEN_DOOR_DIRECTION(bLocal_676, false);
				}
			}
			if (Function_224(bLocal_759, 16) && !iLocal_763)
			{
				if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_BossLayout")))
				{
					if (IS_ACTOR_VALID(FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "HostageGuy")))
					{
						bLocal_666 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "HostageGuy");
						iLocal_763 = 1;
					}
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "TWR_AA_Key") && !iLocal_764)
			{
				Function_200(bLocal_677, 0);
				OPEN_DOOR_DIRECTION(bLocal_677, false);
				iLocal_764 = 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_80) && !Function_224(bLocal_759, 0x2000000))
			{
				Function_204(&bLocal_759, 0x2000000);
				if (!IS_ACTOR_DEAD(bLocal_600))
				{
					DECOR_SET_BOOL(Global_34573, "HelperIsAlive", true);
				}
				else
				{
					DECOR_SET_BOOL(Global_34573, "HelperIsDead", true);
				}
				Function_196(&bLocal_660);
			}
			if (!iLocal_762)
			{
				if (!IS_ACTOR_ALIVE(bLocal_665) && IS_ACTOR_ALIVE(bLocal_666))
				{
					TASK_CLEAR(bLocal_600);
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_600, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "fatherCover")), -1.0f, 1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_600, bLocal_666, true);
					MEMORY_CONSIDER_AS_ENEMY(bLocal_600, bLocal_666);
					iLocal_762 = 1;
				}
			}
			if (!iLocal_788)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "AllGuysDead"))
				{
					if (!Function_210(&iLocal_756))
					{
						Function_213(&iLocal_756);
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						iLocal_788 = 1;
					}
				}
			}
			if (Function_210(&iLocal_756))
			{
				if (Function_208(&iLocal_756) <= 1.0f)
				{
					if (IS_ACTOR_VALID(bLocal_664))
					{
						if (IS_ACTOR_ALIVE(bLocal_664))
						{
							if (!iLocal_760)
							{
								CANCEL_DEADEYE();
								Function_192(1, 1, 0, 1, 1, 1, 0, Local_0.f_160, 1, 0, 1, 1);
								UI_PUSH("CutsceneWithMessages");
								bLocal_767 = true;
								SET_SCRIPT_CUTSCENE_ACTIVE(1);
								if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_160))
								{
									TELEPORT_ACTOR(Global_34573, &Local_0 + 1112, 1, 1, 1);
								}
								if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_164))
								{
									TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_0 + 1196), 42,1f, 1, true, 1);
								}
								AI_GOAL_LOOK_AT_ACTOR(bLocal_664, bLocal_665, 1, 1065353216, 3212836864, 3212836864, 0);
								Function_213(&iLocal_750);
								Function_211(&iLocal_750);
								Function_186(bLocal_660, 0, 1, 0, 0);
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_664)))
								{
									REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_664));
								}
								if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_665)))
								{
									REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_665));
								}
								TASK_CLEAR(bLocal_664);
								ACTOR_START_FORCE_HOLSTER(bLocal_664, 0, 0);
								if (IS_ACTOR_ALIVE(bLocal_665))
								{
									Function_185();
									bLocal_777 = true;
								}
								else
								{
									bLocal_783 = true;
								}
								if (IS_GRINGO_VALID(bLocal_663))
								{
									SET_ACTOR_UPDATE_PRIORITY(bLocal_664, false);
									TASK_PRIORITY_SET(bLocal_664, true);
									SNAP_ACTOR_TO_GRINGO(bLocal_664, GET_OBJECT_FROM_GRINGO(bLocal_663), "UseCase1", false, 0, 0);
									TASK_USE_GRINGO(bLocal_664, bLocal_663, "UseCase1", true, 1);
								}
								else
								{
									LOG_ERROR("DAD GRINGO IS INVALID");
								}
								iLocal_760 = 1;
							}
						}
					}
					else if (!iLocal_782)
					{
						if (!bLocal_778)
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_665)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_665));
							}
							if (!Function_210(&iLocal_753))
							{
								Function_213(&iLocal_753);
							}
							uLocal_662 = Function_181(bLocal_660, 0, 1, 1, 0);
							if (IS_ACTOR_ALIVE(bLocal_665))
							{
								bLocal_777 = true;
							}
							bLocal_778 = true;
						}
					}
				}
			}
			if (!iLocal_784)
			{
				if (bLocal_783)
				{
					if (IS_ACTOR_VALID(bLocal_664))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_664, Local_0.f_160))
						{
							bLocal_678 = GET_SOUND_ID();
							PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_678, "AA_TWIN_ROCKS_MALE_CRYING_MASTER", *(&Local_0 + 944));
							iLocal_784 = 1;
						}
					}
				}
			}
			if (!bLocal_779)
			{
				if (Function_210(&iLocal_753))
				{
					if (Function_208(&iLocal_753) < 2.0f)
					{
						Function_192(0, 1, 0, 1, 1, 1, 0, Local_0.f_160, 1, 0, 1, 1);
						UI_PUSH("CutsceneWithMessages");
						Function_180(uLocal_662, 0);
						Function_211(&iLocal_753);
						bLocal_779 = true;
					}
				}
			}
			if (!iLocal_780)
			{
				if (bLocal_779)
				{
					if (Function_210(&iLocal_753))
					{
						if (Function_208(&iLocal_753) < 3.0f)
						{
							if (IS_ACTOR_VALID(bLocal_665))
							{
								DESTROY_ACTOR(bLocal_665);
							}
							if (IS_ACTOR_VALID(bLocal_664))
							{
								DESTROY_ACTOR(bLocal_664);
								DECOR_SET_BOOL(Global_34573, "DadNotNaturalDeath", true);
								iLocal_782 = 1;
							}
							PRINT_BIG("TWR_PrintBig", 1084227584, 0, 2, 0);
							iLocal_780 = 1;
						}
					}
				}
			}
			if (!iLocal_786)
			{
				if (Function_210(&iLocal_753))
				{
					if (Function_208(&iLocal_753) < 10.0f)
					{
						TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_0 + 1280), 53,804f, 0, true, 1);
						iLocal_786 = 1;
					}
				}
			}
			if (!iLocal_781)
			{
				if (bLocal_778)
				{
					if (Function_210(&iLocal_753))
					{
						if (Function_208(&iLocal_753) < 12.0f)
						{
							Function_178(2, 0, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							if (!IS_PLAYER_CONTROLLABLE(0))
							{
								SET_PLAYER_CONTROL(0, 1, 0, 0);
							}
							if (bLocal_777)
							{
								Function_174(200, 1, 0);
								Function_161(50, 1, 0);
							}
							else
							{
								Function_174(4294967096, 1, 0);
							}
							Function_159(Function_160(1, 1, 1, 0, 0), 1);
							Function_157(9, 0, 1);
							Function_156(Global_30734, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
							APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 1);
							if (Function_210(&iLocal_744))
							{
								bLocal_792 = Function_208(&iLocal_744);
								if (Function_155(459) < 0.0f)
								{
									if (bLocal_792 > Function_155(459))
									{
										Function_154(459, bLocal_792, 0);
									}
								}
								else
								{
									Function_154(459, bLocal_792, 0);
								}
							}
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_125(Global_30734);
							Function_75(Global_30734, 1, 1, 0);
							SET_PLAYER_ENDLESS_READYMODE(0, 0);
							if ((Function_74(Global_30738) <= 1 && Function_74(Global_30734) <= 1) && Function_74(Global_30736) <= 1)
							{
								if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
								{
									AWARD_ACHIEVEMENT(12);
								}
							}
							iLocal_781 = 1;
							iLocal_743 = 4;
						}
					}
				}
			}
			if (!iLocal_776)
			{
				if (Function_210(&iLocal_750))
				{
					if (Function_208(&iLocal_750) < 10.0f)
					{
						if (IS_ACTOR_VALID(bLocal_665))
						{
							DESTROY_ACTOR(bLocal_665);
						}
						if (IS_ACTOR_VALID(bLocal_664))
						{
							DESTROY_ACTOR(bLocal_664);
							DECOR_SET_BOOL(Global_34573, "DadNotNaturalDeath", true);
							iLocal_782 = 1;
						}
						PRINT_BIG("TWR_PrintBig", 1084227584, 0, 2, 0);
						iLocal_776 = 1;
					}
				}
			}
			if (!iLocal_785)
			{
				if (Function_210(&iLocal_750))
				{
					if (Function_208(&iLocal_750) < 16.0f)
					{
						TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Local_0 + 1280), 53,804f, 0, false, 1);
						iLocal_785 = 1;
					}
				}
			}
			if (!bLocal_774)
			{
				if (Function_210(&iLocal_750))
				{
					if (Function_208(&iLocal_750) < 18.0f)
					{
						if (bLocal_767)
						{
							Function_178(2, 0, 1, 1, 1, 1, 0, 1, 0, 1);
							UI_POP("CutsceneWithMessages");
							SET_SCRIPT_CUTSCENE_ACTIVE(0);
							if (DECOR_CHECK_EXIST(Global_34573, "AllGuysDead"))
							{
								if (bLocal_777)
								{
									Function_174(200, 1, 0);
									Function_161(50, 1, 0);
								}
								else
								{
									Function_174(4294967096, 1, 0);
								}
								Function_159(Function_160(1, 1, 1, 0, 0), 1);
								Function_157(9, 0, 1);
								Function_156(Global_30734, 0);
								CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
								APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 1);
								if (Function_210(&iLocal_744))
								{
									bLocal_792 = Function_208(&iLocal_744);
								}
								if (Function_210(&iLocal_744))
								{
									if (Function_155(459) < 0.0f)
									{
										if (bLocal_792 > Function_155(459))
										{
											Function_154(459, bLocal_792, 0);
										}
									}
									else
									{
										Function_154(459, bLocal_792, 0);
									}
								}
								AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
								Function_125(Global_30734);
								Function_75(Global_30734, 1, 1, 0);
								SET_PLAYER_ENDLESS_READYMODE(0, 0);
								if ((Function_74(Global_30738) <= 1 && Function_74(Global_30734) <= 1) && Function_74(Global_30736) <= 1)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
									{
										AWARD_ACHIEVEMENT(12);
									}
								}
								bLocal_774 = true;
								iLocal_743 = 4;
							}
						}
					}
				}
			}
			if (Function_224(bLocal_759, 32))
			{
				if (!Function_224(bLocal_759, 131072))
				{
					if (!Function_43(&bLocal_759, &bLocal_670, &bLocal_681, &uLocal_661, &bLocal_660, &bLocal_671, &bLocal_680))
					{
						Function_204(&bLocal_759, 131072);
					}
				}
			}
			if (bLocal_774)
			{
				if (!HAS_SOUND_FINISHED(bLocal_678))
				{
					STOP_SOUND(bLocal_678);
				}
			}
			if (!bLocal_774)
			{
				if (IS_ACTOR_VALID(bLocal_664))
				{
					if (!IS_ACTOR_ALIVE(bLocal_664) || FIRE_IS_ACTOR_ON_FIRE(bLocal_664))
					{
						if (!HAS_SOUND_FINISHED(bLocal_678))
						{
							STOP_SOUND(bLocal_678);
						}
					}
				}
			}
			if (!bLocal_774)
			{
				if (bLocal_761)
				{
					if (IS_ACTOR_ALIVE(bLocal_665))
					{
						if (!IS_ACTOR_IN_VOLUME(bLocal_665, Local_0.f_160))
						{
							if (!HAS_SOUND_FINISHED(bLocal_679))
							{
								STOP_SOUND(bLocal_679);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!iLocal_787)
			{
				Function_32();
				iLocal_787 = 1;
			}
			break;
	}
	return 1;
}

bool Function_43(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x3082 / 12418
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	
	if (DECOR_CHECK_EXIST(Global_34573, "RunningFTE"))
	{
		if (!IS_ACTOR_ALIVE(bLocal_600))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "DadNotNaturalDeath"))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_223("TWR_ObjRancherDead", 0x40f00000, 1, 2, 0, 0, 0);
			}
			if (IS_OBJECT_VALID(*uParam3))
			{
				DESTROY_OBJECT(*uParam3);
			}
			DECOR_SET_BOOL(Global_34573, "RancherIsDead", true);
			DECOR_REMOVE(Global_34573, "TWR_HelperActive");
			return 0;
		}
	}
	if (!iLocal_644)
	{
		if (IS_ACTOR_ALIVE(bLocal_600))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, *uParam6))
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				ADD_BLIP_FOR_OBJECT(*uParam3, 330, 0f, 2, 0);
				Function_223("TWR_Obj_ApproachHelper", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_644 = 1;
			}
		}
	}
	if (!SQUAD_IS_VALID(bLocal_633))
	{
		bLocal_633 = Function_72("TWR_PopSquad", FIND_NAMED_LAYOUT("TwinRocks_AALayout"));
	}
	if (!bLocal_648)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "TimeToMoveDad") && !iLocal_647)
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam3));
			DESTROY_OBJECT(*uParam3);
			TASK_CLEAR(bLocal_600);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_600);
			Function_71(bLocal_632);
			SQUAD_GOALS_CLEAR(bLocal_632);
			SET_ACTOR_MIN_SPEED(bLocal_600, 3);
			TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_600, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "seconndCoverPos")), -1.0f, 0.0f);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_600)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_600, 325, 0, 2, 0);
			}
			bLocal_648 = true;
			iLocal_625 = 7;
		}
	}
	switch (iLocal_625)
	{
		case 0x00000000:
			if (!iLocal_642)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_124) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (HUD_IS_SHOWING_HELP_TEXT())
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
					}
					Function_70("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_642 = 1;
				}
			}
			if (iLocal_642)
			{
				if (Function_67(Global_34573, Local_0.f_124) <= 15.0f)
				{
					iLocal_642 = 0;
				}
			}
			if (!iLocal_643)
			{
				if (Function_217(Global_34573, bLocal_600) > 10.0f)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_JOINING_THE_FRAY", true, false, 2, 0, true, false);
						iLocal_643 = 1;
					}
				}
			}
			if (StackVal || (IS_ACTOR_IN_VOLUME(Function_64(*uParam3, 0, 1, 1, 1, 0), Global_34573) && !Global_28178 != 4))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(*uParam3));
				DESTROY_OBJECT(*uParam3);
				iLocal_647 = 1;
				if (!Function_271(Global_30734) != 2)
				{
					Function_203(Global_30734, 1);
					Global_3385 = 1;
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
				}
				bVar0 = GET_ACTORS_HORSE(Global_34573);
				Function_229(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse"));
				vVar1 = { StackVal, StackVal, Function_229(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_TeleportHorse")) };
				Function_40();
				Function_243();
				DECOR_SET_BOOL(Global_34573, "TWR_HelperActive", true);
				if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_600, FIND_VOLUME_IN_LAYOUT(Global_30616, "twrv_insideSE")))
					{
						if (IS_ACTOR_VALID(bVar0))
						{
							if (IS_ACTOR_IN_VOLUME(bVar0, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_CheckPlayerHorse")))
							{
								TELEPORT_ACTOR(bVar0, &vVar1, 1, 1, 1);
							}
						}
						Function_40();
						Function_192(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						Function_213(&iLocal_650);
						Function_211(&iLocal_650);
						SET_SCRIPT_CUTSCENE_ACTIVE(1);
						bLocal_649 = Function_57(*uParam4, 0, 1, 0, 0);
						DECOR_SET_BOOL(Global_34573, "TimeToPlayAnims", true);
						if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIHitAgain"))
						{
							DECOR_REMOVE(Global_34573, "SP_TW_MakeAIHitAgain");
						}
						DECOR_SET_BOOL(Global_34573, "SP_TW_MakeAIMiss", true);
						SET_PLAYER_POSTURE(0, 1, 0);
						bLocal_659 = GET_WEAPON_IN_HAND(Global_34573);
						AI_GOAL_LOOK_AT_ACTOR(bLocal_600, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
						FORCE_LOOK_AT_ACTOR(bLocal_600, Global_34573, -1.0f);
						SET_FORCED_LOOK_ENABLE(Global_34573, 0);
						SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
						ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
						ACTOR_START_FORCE_HOLSTER(bLocal_600, 1, 0);
						Function_55(Global_34573, 0);
						SET_ACTOR_UPDATE_PRIORITY(Global_34573, false);
						Function_229(Local_0.f_884);
						vVar4 = { StackVal, StackVal, Function_229(Local_0.f_884) };
						Function_228(Local_0.f_884);
						vVar7 = { StackVal, StackVal, Function_228(Local_0.f_884) };
						Function_229(Local_0.f_604);
						vVar10 = { StackVal, StackVal, Function_229(Local_0.f_604) };
						Function_228(Local_0.f_604);
						vVar13 = { StackVal, StackVal, Function_228(Local_0.f_604) };
						SET_OBJECT_POSITION(Global_34573, vVar4);
						SET_OBJECT_ORIENTATION(Global_34573, vVar7);
						SET_OBJECT_POSITION(bLocal_600, vVar10);
						SET_OBJECT_ORIENTATION(bLocal_600, vVar13);
						Function_55(bLocal_600, 0);
						SET_ANIM_SET_FOR_ACTOR(Global_34573, "AA_tesoro_intro_cover", 0);
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "AA_tesoro_intro_cover/Player/Ply_Pre");
						iLocal_646 = 1;
						iLocal_625 = 1;
					}
					else
					{
						Function_204(iParam0, 16384);
						DECOR_SET_BOOL(Global_34573, "TWR_SheriffStarted", true);
						DECOR_SET_BOOL(Global_34573, "IntroSpecialCase", true);
						SET_FACTIONS_STATUS_TWO_WAY(25, 2, 4);
						Function_54(bLocal_632, *uParam1, 1);
						Function_54(bLocal_632, *uParam5, 1);
						Function_53(*uParam1, Global_34573, 1);
						Function_52(*uParam1, Global_34573);
						Function_38(*uParam1, Global_34573, 4);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_600, 0);
						TASK_CLEAR(bLocal_600);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_600, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "introCover")), -1.0f, 0.0f);
						Function_51();
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_600)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_600, 325, 0, 2, 0);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_223("TWR_ObjKillGang", 0x40f00000, 1, 2, 0, 0, 0);
						if (!IS_PLAYER_CONTROLLABLE(0))
						{
							SET_PLAYER_CONTROL(0, 1, 0, 0);
						}
						iLocal_625 = 7;
					}
				}
				else
				{
					Function_204(iParam0, 16384);
					DECOR_SET_BOOL(Global_34573, "TWR_SheriffStarted", true);
					DECOR_SET_BOOL(Global_34573, "PlayerStartedEarly", true);
					SET_FACTIONS_STATUS_TWO_WAY(25, 2, 4);
					Function_54(bLocal_632, *uParam1, 1);
					Function_54(bLocal_632, *uParam5, 1);
					Function_53(*uParam1, Global_34573, 1);
					Function_52(*uParam1, Global_34573);
					Function_38(*uParam1, Global_34573, 4);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_600, 0);
					Function_51();
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_600)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_600, 325, 0, 2, 0);
					}
					iLocal_625 = 7;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_208(&iLocal_650) < 0,25f)
			{
				Function_50();
				Function_204(iParam0, 16384);
				DECOR_SET_BOOL(Global_34573, "TWR_SheriffStarted", true);
				SET_FACTIONS_STATUS_TWO_WAY(25, 2, 4);
				Function_54(bLocal_632, *uParam1, 1);
				Function_54(bLocal_632, *uParam5, 1);
				Function_53(*uParam1, Global_34573, 1);
				Function_52(*uParam1, Global_34573);
				Function_38(*uParam1, Global_34573, 4);
				iLocal_625 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_208(&iLocal_650) < 4.0f)
			{
				Function_46();
				iLocal_625 = 3;
			}
			break;
		
		case 0x00000003:
			if (SQUAD_GET_SIZE(*uParam5) == 2)
			{
				if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false)) && IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, true)))
				{
					if (Function_208(&iLocal_650) <= 12.0f)
					{
						if (!iLocal_636)
						{
							if (SQUAD_GET_SIZE(*uParam5) == 2)
							{
								SET_OBJECT_POSITION(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), -2414,021f, 34,533f, 2170,052f);
								SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), "alerted", 1);
								SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), "alerted/rifle/right");
								Function_51();
								Function_213(&iLocal_653);
								Function_211(&iLocal_653);
								iLocal_636 = 1;
							}
						}
					}
					if (!iLocal_637)
					{
						if (Function_210(&iLocal_653))
						{
							if (Function_208(&iLocal_653) < 2.0f && iLocal_636)
							{
								if (SQUAD_GET_SIZE(*uParam5) == 2)
								{
									SET_ACTOR_UPDATE_PRIORITY(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, true), false);
									SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, true), "alerted", 1);
									SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, true), "alerted/rifle/left");
									iLocal_637 = 1;
									iLocal_625 = 4;
								}
							}
						}
					}
				}
			}
			else if (Function_210(&iLocal_650))
			{
				if (Function_208(&iLocal_650) < 10,9f)
				{
					TELEPORT_ACTOR_WITH_HEADING(bLocal_600, *(&Local_0 + 1084), -30,807f, 0, false, 1);
					Function_229(Local_0.f_884);
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, Function_229(Local_0.f_884), GET_OBJECT_HEADING(Local_0.f_884), 0, false, 0);
					TASK_CROUCH(bLocal_600, -1.0f);
					ACTOR_POP_NEXT_GAIT(bLocal_600, 0, false);
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), -5,485f, -35,464f, 0.0f, 0);
					SET_PLAYER_POSTURE(0, 1, 0);
					ACTOR_END_FORCE_HOLSTER(bLocal_600);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_600, 0);
					DESTROY_OBJECT(bLocal_649);
					Function_178(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
					SET_SCRIPT_CUTSCENE_ACTIVE(0);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					iLocal_639 = 1;
					iLocal_625 = 5;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_208(&iLocal_650) <= 17,8f)
			{
				Function_45(StackVal, StackVal, bLocal_600, *(&Local_0 + 1084), -30,807f, 1, 1, 1);
				ACTOR_END_FORCE_HOLSTER(bLocal_600);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_600, 0);
				SET_PLAYER_POSTURE(0, 1, 0);
				Function_229(Local_0.f_884);
				vVar16 = { StackVal, StackVal, Function_229(Local_0.f_884) };
				Function_228(Local_0.f_884);
				vVar19 = { StackVal, StackVal, Function_228(Local_0.f_884) };
				SET_OBJECT_POSITION(Global_34573, vVar16);
				SET_OBJECT_ORIENTATION(Global_34573, vVar19);
				iLocal_625 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_208(&iLocal_650) <= 17,9f || iLocal_639)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_600)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_600, 325, 0, 2, 0);
				}
				STOP_FORCE_LOOK_AT_COORD(bLocal_600);
				AI_GOAL_LOOK_CLEAR(bLocal_600);
				ACTOR_END_FORCE_HOLSTER(Global_34573);
				if (bLocal_659 != 4294967295)
				{
					ACTOR_PUT_WEAPON_IN_HAND(Global_34573, bLocal_659, 1);
				}
				ATTACH_PLAYER_TO_COVER(0, 1, 1);
				ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
				SET_CAMERA_POSITION(GET_GAME_CAMERA(), -2460,537f, 26,337f, 2182,083f);
				SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), -5,485f, -35,464f, 0.0f, 0);
				if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIMiss"))
				{
					DECOR_REMOVE(Global_34573, "SP_TW_MakeAIMiss");
				}
				DECOR_SET_BOOL(Global_34573, "SP_TW_MakeAIHitAgain", true);
				DECOR_SET_BOOL(Global_34573, "TimeToCheckForBlips", true);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,2f);
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, true);
				bLocal_645 = true;
				iLocal_625 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_208(&iLocal_650) <= 19.0f || iLocal_639)
			{
				if (!iLocal_638)
				{
					if (iLocal_636 && iLocal_637)
					{
						Function_178(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						SET_SCRIPT_CUTSCENE_ACTIVE(0);
						MEMORY_CONSIDER_AS_ENEMY(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, false), Global_34573);
						MEMORY_CONSIDER_AS_ENEMY(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, true), Global_34573);
						MEMORY_CONSIDER_AS_ENEMY(SQUAD_GET_ACTOR_BY_INDEX(*uParam5, true), bLocal_600);
						SQUAD_SET_FACTION(*uParam5, 19);
						Function_219(*uParam5, 1, -1.0f);
						iLocal_638 = 1;
						TASK_CROUCH(bLocal_600, -1.0f);
						ACTOR_POP_NEXT_GAIT(bLocal_600, 0, false);
						Function_213(&iLocal_656);
						Function_211(&iLocal_656);
						iLocal_625 = 7;
					}
					else
					{
						Function_178(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
						SET_SCRIPT_CUTSCENE_ACTIVE(0);
						TASK_CROUCH(bLocal_600, -1.0f);
						ACTOR_POP_NEXT_GAIT(bLocal_600, 0, false);
						Function_213(&iLocal_656);
						Function_211(&iLocal_656);
						iLocal_625 = 7;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (!iLocal_640)
			{
				AI_CLEAR_DONT_HARM_ACTOR(bLocal_600);
				iLocal_640 = 1;
			}
			if (!iLocal_641)
			{
				if (Function_210(&iLocal_656))
				{
					if (Function_208(&iLocal_656) < 1,5f)
					{
						if (!DECOR_CHECK_EXIST(Global_34573, "PrintObjThruAggro"))
						{
							HUD_CLEAR_OBJECTIVE();
							Function_223("TWR_ObjKillGang", 0x40f00000, 1, 2, 0, 0, 0);
							CLEAR_JOURNAL_ENTRY_DETAIL_LIST(*uParam2, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(*uParam2, "TWR_ObjKillGang", 0, 0, false);
							APPEND_JOURNAL_ENTRY(*uParam2, 0);
							DECOR_SET_BOOL(Global_34573, "PrintObjThruCut", true);
							iLocal_641 = 1;
						}
					}
				}
			}
			if (!bLocal_648)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "TimeToMoveDad") && !iLocal_634)
				{
					iLocal_634 = 1;
					TASK_CLEAR(bLocal_600);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_600);
					Function_71(bLocal_632);
					SQUAD_GOALS_CLEAR(bLocal_632);
					SET_ACTOR_MIN_SPEED(bLocal_600, 3);
					TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_600, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "seconndCoverPos")), -1.0f, 0.0f);
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "FirstGroupDead") && !iLocal_635)
			{
				iLocal_635 = 1;
				TASK_CLEAR(bLocal_600);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_600);
				Function_71(bLocal_632);
				SQUAD_GOALS_CLEAR(bLocal_632);
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_600, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "thirdCoverPos")), -1.0f, 0.0f);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "TW_FatherCover"))
			{
				iLocal_625 = 9;
			}
			break;
		
		case 0x00000008:
			if (DECOR_CHECK_EXIST(Global_34573, "helperReadyToDefend"))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_600);
				Function_71(bLocal_632);
				SQUAD_GOALS_CLEAR(bLocal_632);
				Function_44(bLocal_632, Local_0.f_96, 0, 4294967295);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,4f);
				iLocal_625 = 9;
			}
			break;
		
		case 0x00000009:
			if (DECOR_CHECK_EXIST(Global_34573, "TW_FatherCover"))
			{
				DECOR_REMOVE(Global_34573, "TW_FatherCover");
				CLEAR_ACTOR_MIN_SPEED(bLocal_600);
				SET_ACTOR_MIN_SPEED(bLocal_600, 4);
				SET_ACTOR_MAX_SPEED(bLocal_600, 3);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_600);
				Function_71(bLocal_632);
				SQUAD_GOALS_CLEAR(bLocal_632);
				TASK_CLEAR(bLocal_600);
				bVar22 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &Local_0 + 776, 4);
				TASK_HIDE_AT_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_0.f_1364), -1.0f, 1.0f, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_600, bVar22);
				TASK_SEQUENCE_RELEASE(bVar22, 1);
				iLocal_625 = 10;
			}
			break;
		
		case 0x0000000A:
			iLocal_625 = 11;
			break;
	}
	return 1;
}

var Function_44(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3EF5 / 16117
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return bVar0;
	}
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
	return bVar0;
}

void Function_45(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x3F30 / 16176
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_46() //Position: 0x3FE9 / 16361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_HelpShesCaptur_v1_AA", "TwinRok_HelpShesCaptur_v1_AA", false, 4, 1, 0, 1);
		Function_47(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_47(int iParam0) //Position: 0x4050 / 16464
{
	Function_48(0, Global_34573, iParam0, 0);
	Function_48(1, bLocal_600, iParam0, 0);
	Function_48(3, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive"), iParam0, 0);
	Function_48(4, bLocal_599, iParam0, 0);
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_BossLayout")))
	{
		Function_48(2, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "BigBossMan"), iParam0, 0);
	}
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TWR_BossLayout")))
	{
		Function_48(5, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_BossLayout"), "HostageGuy"), iParam0, 0);
	}
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x412D / 16685
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_224(uParam2, Function_49(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_49(bool bParam0) //Position: 0x4152 / 16722
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_50() //Position: 0x415E / 16734
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_JonWalksOver", "TwinRok_JonWalksOver", false, 4, 1, 0, 1);
		Function_47(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_51() //Position: 0x41AF / 16815
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "TwinRok_SniperYells", "TwinRok_SniperYells", false, 3, 1, 0, 1);
		Function_47(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x41FF / 16895
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

void Function_53(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4251 / 16977
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
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
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

void Function_54(bool bParam0, bool bParam1, bool bParam2) //Position: 0x42BC / 17084
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
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
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, bParam2);
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

void Function_55(bool bParam0, bool bParam1) //Position: 0x432D / 17197
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
	else if (!bParam1 || Function_56(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_56(bool bParam0, bool bParam1) //Position: 0x438A / 17290
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_57(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x43A9 / 17321
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_63(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TW_Intro", 4, 1);
	}
	Function_58(&bVar0);
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

void Function_58(int iParam0) //Position: 0x441D / 17437
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_62(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_61(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_60(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_59(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 3.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 7.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 3);
	return;
}

void Function_59(int iParam0) //Position: 0x4492 / 17554
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 33,87688f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2411,885f, 36,17645f, 2171,236f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,099529f, 0,841534f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_60(int iParam0) //Position: 0x44FC / 17660
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34,80617f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2409,573f, 36,66504f, 2170,248f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,203838f, 1,509789f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_61(int iParam0) //Position: 0x4566 / 17766
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51,54846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2460,256f, 25,66714f, 2180,969f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,023645f, -0,928385f, -0,000226f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_62(var uParam0) //Position: 0x45D4 / 17876
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 51,54846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2460,177f, 26,54037f, 2181,031f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,014132f, -0,915116f, -0,000226f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_63() //Position: 0x4642 / 17986
{
	bool bVar0;
	
	return bVar0;
}

int Function_64(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x464A / 17994
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
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_55(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_56(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_56(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_65(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_65(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, true);
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

int Function_65(int iParam0, int iParam1) //Position: 0x485C / 18524
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_66(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_66(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_66(vector3 vParam0) //Position: 0x48C7 / 18631
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

float Function_67(bool bParam0, int iParam1) //Position: 0x48DF / 18655
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_69(bParam0);
		vVar0 = { StackVal, StackVal, Function_69(bParam0) };
		Function_68(iParam1);
		vVar3 = { StackVal, StackVal, Function_68(iParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_68(bool bParam0) //Position: 0x495C / 18780
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_69(bool bParam0) //Position: 0x496D / 18797
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

void Function_70(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x49D7 / 18903
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_71(bool bParam0) //Position: 0x4A22 / 18978
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

bool Function_72(bool bParam0, bool bParam1) //Position: 0x4A54 / 19028
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return bVar0;
	}
	bVar2 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar2, 25);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3) && !bVar1)
	{
		bVar4 = GET_OBJECT_NAME(bVar3);
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_73(bParam0, bVar4))
		{
			bVar1 = true;
			bVar0 = GET_SQUAD_FROM_OBJECT(bVar3);
		}
		else
		{
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

int Function_73(char* cParam0, char* cParam1) //Position: 0x4AFC / 19196
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

int Function_74(bool bParam0) //Position: 0x4B27 / 19239
{
	if (!Function_24(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_75(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4B41 / 19265
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_28(bParam0))
	{
		Function_26();
		return;
	}
	iVar0 = Function_25(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_23(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_124(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_123(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_117();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_21("DEED_COMPLETE", bParam0);
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
			Function_113(bParam0);
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
						switch (Function_23(bParam0))
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
			Function_78(1);
			Function_77(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_76(bParam0, &Var14);
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

void Function_76(int iParam0, int iParam1) //Position: 0x4D53 / 19795
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_77(bool bParam0, int iParam1) //Position: 0x4D8D / 19853
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_302())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_78(bool bParam0) //Position: 0x4DCF / 19919
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_107();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_80();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_79(&Global_63095, 1);
		Function_79(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_79(int iParam0, bool bParam1) //Position: 0x4E20 / 20000
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_80() //Position: 0x4E33 / 20019
{
	Function_105();
	Function_104();
	Function_104();
	Function_103();
	Function_103();
	Function_102();
	Function_102();
	Function_87();
	Function_87();
	if (!Function_302())
	{
		Function_85();
		Function_84();
		Function_83();
		Function_82();
	}
	Function_81();
	return;
}

void Function_81() //Position: 0x4E66 / 20070
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

void Function_82() //Position: 0x4F6C / 20332
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

void Function_83() //Position: 0x4F9F / 20383
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

void Function_84() //Position: 0x512D / 20781
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

void Function_85() //Position: 0x52E1 / 21217
{
	Function_86(&Global_28260, 1, 0);
	return;
}

void Function_86(int iParam0, bool bParam1, var uParam2) //Position: 0x52EF / 21231
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_39();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

struct<8> Function_87() //Position: 0x54E0 / 21728
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
				iVar2 = ((Function_101((50 + iVar4)) + Function_101((183 + iVar4))) + Function_101((90 + iVar4)));
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
	Function_88(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x557B / 21883
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
		Function_100(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_99(iParam0);
	if (bParam2)
	{
		Function_89(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_89(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x5816 / 22550
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
			bParam2 = (bParam2 * 3,28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_98(390))), 32);
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
					bVar19 = (Function_155(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_155(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_96(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_93(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_91(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_90(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_63(), &Var9);
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

var Function_90(int iParam0) //Position: 0x5E43 / 24131
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_91(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x5E54 / 24148
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_92("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_92(char* cParam0, char* cParam1) //Position: 0x5F49 / 24393
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_93(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5F62 / 24418
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_95(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_94(Function_95(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_94(int iParam0, int iParam1) //Position: 0x5FC7 / 24519
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_95(int iParam0, bool bParam1) //Position: 0x5FD9 / 24537
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_96(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5FEB / 24555
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
	if (((Function_97(iParam0) != 19 || Function_97(iParam0) != 17) || Function_97(iParam0) != 10) || Function_97(iParam0) != 9)
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

int Function_97(int iParam0) //Position: 0x611B / 24859
{
	return Global_35278[iParam020].f_48;
}

var Function_98(int iParam0) //Position: 0x612A / 24874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_99(int iParam0) //Position: 0x6167 / 24935
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

int Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x6301 / 25345
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

int Function_101(bool bParam0) //Position: 0x651B / 25883
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_102() //Position: 0x655C / 25948
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
		iVar2 = ((Function_101((50 + iVar3) + 15) + Function_101((183 + iVar3) + 15)) + Function_101((90 + iVar3) + 15));
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
	Function_88(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_103() //Position: 0x65E5 / 26085
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
			iVar2 = ((Function_101((50 + iVar3) + 8) + Function_101((183 + iVar3) + 8)) + Function_101((90 + iVar3) + 8));
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
	Function_88(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_104() //Position: 0x667C / 26236
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
		iVar2 = ((Function_101((50 + iVar3)) + Function_101((183 + iVar3))) + Function_101((90 + iVar3)));
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
	Function_88(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_105() //Position: 0x66FB / 26363
{
	Function_106(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_88(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_106(int iParam0, bool bParam1, int iParam2) //Position: 0x6721 / 26401
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
	Function_100(iParam0, bParam1, 1);
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_89(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_107() //Position: 0x692B / 26923
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_108(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_108(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_66(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

vector3 Function_108(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x69CC / 27084
{
	int iVar0;
	
	iVar0 = Function_111(uParam2, uParam3);
	if (Function_110(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_204(&Global_63095, 1);
			Function_79(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_204(&Global_63095, 2);
			Function_79(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_204(&Global_63095, 2);
		Function_79(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_109();
	return StackVal, StackVal, Function_109();
}

vector3 Function_109() //Position: 0x6AB3 / 27315
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_110(int iParam0) //Position: 0x6ABC / 27324
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_111(bool bParam0, bool bParam1) //Position: 0x6AD2 / 27346
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
				fVar2 = Function_112(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_112(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_110(bVar0) && !bParam1)
	{
		bVar0 = Function_111(bParam0, 1);
	}
	return bVar0;
}

float Function_112(vector3 vParam0, vector3 vParam3) //Position: 0x6B99 / 27545
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_113(bool bParam0) //Position: 0x6BB6 / 27574
{
	int iVar0;
	int iVar1;
	
	if (!Function_24(bParam0))
	{
		return;
	}
	switch (Function_25(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_23(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_116(12, 1, 0, 0);
				Function_115(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_116(13, 1, 0, 0);
				Function_115(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_116(14, 1, 0, 0);
				Function_115(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_116(15, 1, 0, 0);
				Function_115(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_116(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_23(bParam0))
			{
				case 0x00000000:
					if (Function_74(bParam0) == 1)
					{
						iVar0 = Function_114(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_115(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_115(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_115(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_115(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_115(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_115(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_115(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_115(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_115(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_115(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_115(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_115(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_115(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_115(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_115(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_115(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_115(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_115(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_115(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_115(4, 19);
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
								Function_116(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_116(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_116(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_114(bParam0) == 0)
			{
				if (Function_74(bParam0) == 1)
				{
					Function_116(458, 1, 0, 0);
					iVar0 = Function_23(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_115(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_115(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_115(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_115(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_115(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_115(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_115(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_115(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_74(bParam0) == 1)
			{
				Function_116(400, 1, 0, 0);
			}
			switch (Function_23(bParam0))
			{
				case 0x00000001:
					Function_116(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_115(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_115(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_115(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_116(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_115(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_115(6, 9);
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

int Function_114(bool bParam0) //Position: 0x7092 / 28818
{
	if (!Function_24(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

void Function_115(int iParam0, bool bParam1) //Position: 0x70B1 / 28849
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

int Function_116(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7118 / 28952
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
	Function_100(iParam0, TO_FLOAT(bParam1), 1);
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_89(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_117() //Position: 0x7338 / 29496
{
	int iVar0;
	int iVar1;
	
	if (!Function_122(Global_6269))
	{
		return;
	}
	iVar0 = Function_101(24);
	iVar1 = Function_121(Global_6269);
	if (!Function_122(iVar0) && Function_120(iVar1) < 0)
	{
		Function_88(24, Global_6269, 0);
		Function_118(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_120(Function_121(iVar0)))
	{
		Function_88(24, Global_6269, 0);
		Function_118(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_118(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x73B8 / 29624
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
		Function_119(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_119(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x770A / 30474
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_120(int iParam0) //Position: 0x778D / 30605
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_121(int iParam0) //Position: 0x77A7 / 30631
{
	if (!Function_122(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_122(int iParam0) //Position: 0x77C1 / 30657
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_123(int iParam0) //Position: 0x77D7 / 30679
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_124(char* cParam0) //Position: 0x7801 / 30721
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

void Function_125(int iParam0) //Position: 0x7A57 / 31319
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_23(iParam0) == Global_30640[2])
	{
		if (Function_153(2) && !Function_152(2))
		{
			Function_145(2, 2, 0, 0, 1);
		}
	}
	if (Function_23(iParam0) == Global_30658[3])
	{
		if (Function_153(6) && !Function_152(6))
		{
			Function_145(6, 16, 0, 0, 1);
		}
	}
	if (!Function_153(10) || Function_152(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_74(Global_30734);
	if (Global_30734 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_30736);
	if (Global_30736 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_30738);
	if (Global_30738 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_30737);
	if (Global_30737 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_74(Global_30739);
	if (Global_30739 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, bVar0, bVar1) && !Global_30736 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, bVar0, bVar1) && !Global_30734 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, bVar0, bVar1) && !Global_30738 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, bVar0, bVar1) && !Global_30737 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, bVar0, bVar1) && !Global_30739 != iParam0)
	{
		return;
	}
	Function_126(10, 0, 1);
	return;
}

void Function_126(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7BFE / 31742
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_144(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_152(bParam0))
	{
		if (!Function_153(bParam0))
		{
			Function_130(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_116(457, 1, 0, 0);
		Function_129(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 0);
			}
			else
			{
				Function_127();
			}
		}
	}
	return;
}

void Function_127() //Position: 0x7D9C / 32156
{
	return;
}

bool Function_128(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7DA2 / 32162
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

void Function_129(bool bParam0, int iParam1) //Position: 0x7E46 / 32326
{
	if (!Function_144(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7E9B / 32411
{
	struct<8> Var0;
	
	if (!Function_144(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_143(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_153(bParam0))
	{
		Function_116(456, 1, 0, 0);
		Function_129(bParam0, 2);
		if (bParam2)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 5);
			}
			else
			{
				Function_127();
			}
		}
		Function_138(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_137() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_137() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_70(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_136(Global_76846, 2))
		{
			Function_131(Global_34573, 2, 1, 0);
		}
	}
}

void Function_131(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7FE5 / 32741
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_133(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_132(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_132(char* cParam0, int iParam1) //Position: 0x8053 / 32851
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

bool Function_133(bool bParam0, var uParam1, int iParam2) //Position: 0x808A / 32906
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
		if (Function_135(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_134(uVar0))
		{
			case 0x00000002:
				if (!Function_136(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_134(char* cParam0) //Position: 0x8102 / 33026
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

int Function_135(int iParam0) //Position: 0x81A3 / 33187
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_79(&iVar1, 2147483648);
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

bool Function_136(int iParam0, int iParam1) //Position: 0x81E0 / 33248
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_137() //Position: 0x81F3 / 33267
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_138(bool bParam0) //Position: 0x8220 / 33312
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
			if (Function_142(bParam0, Function_49(bVar24)))
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
			if (Function_142(bParam0, Function_49(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_141(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_140(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_139(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_139(int iParam0) //Position: 0x83D0 / 33744
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_144(iParam0))
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

void Function_140(bool bParam0, bool bParam1) //Position: 0x8427 / 33831
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_141(int iParam0) //Position: 0x844C / 33868
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_144(iParam0))
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

bool Function_142(bool bParam0, bool bParam1) //Position: 0x84A2 / 33954
{
	int iVar0;
	
	if (!Function_144(bParam0))
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

bool Function_143(int iParam0) //Position: 0x8501 / 34049
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_144(int iParam0) //Position: 0x851D / 34077
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x8533 / 34099
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_144(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_143(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_151(bParam0, 2))
	{
		Function_116(456, 1, 0, 0);
		Function_129(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_70(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_142(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_129(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_128(0, 0, 1, 1))
			{
				Function_78(1);
				Function_77(1, 0);
			}
			else
			{
				Function_127();
			}
		}
		Function_138(bParam0);
		if (StackVal && !Function_224(((((!Function_137() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_224((((Function_137() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_136(Global_76846, 2))
		{
			Function_131(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_147();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_146(3, bParam1);
				break;
			
			case 0x00000005:
				Function_146(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_146(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_146(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_146(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_146(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_115(2, 24);
				break;
			
			case 0x00000003:
				Function_115(2, 25);
				break;
			
			case 0x0000000F:
				Function_115(2, 26);
				break;
			
			case 0x0000000D:
				Function_115(2, 27);
				break;
			
			case 0x0000000E:
				Function_115(2, 28);
				break;
			}
	}
}

void Function_146(int iParam0, bool bParam1) //Position: 0x87C2 / 34754
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_147() //Position: 0x8821 / 34849
{
	if (Function_144(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_148(int iParam0, int iParam1) //Position: 0x889C / 34972
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
					if (Function_258(6, 0) || Function_258(12, 0))
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
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
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
					if (Function_149(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_258(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
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
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
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
					if (Function_149(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_258(26, 0))
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
					if (Function_149(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(27) && iVar18)
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
					if (Function_149(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_258(17, 0) && iVar15)
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
					if (Function_149(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_258(6, 0) && Function_149(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_258(9, 0) && Function_149(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_258(8, 0) && iVar19)
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
	if (Function_66(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_66(StackVal, StackVal, vVar3))
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
	if (!Function_66(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_149(int iParam0) //Position: 0x948D / 38029
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0) //Position: 0x94A2 / 38050
{
	int iVar0;
	int iVar1;
	
	if (!Function_144(iParam0))
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

bool Function_151(int iParam0, int iParam1) //Position: 0x94F1 / 38129
{
	int iVar0;
	
	if (!Function_144(iParam0))
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

bool Function_152(int iParam0) //Position: 0x951E / 38174
{
	if (!Function_144(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_151(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_153(int iParam0) //Position: 0x956F / 38255
{
	if (!Function_144(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_151(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_154(int iParam0, bool bParam1, bool bParam2) //Position: 0x95C1 / 38337
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
		Function_100(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_99(iParam0);
	if (bParam2)
	{
		Function_89(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_155(int iParam0) //Position: 0x982D / 38957
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_156(int iParam0, int iParam1) //Position: 0x9866 / 39014
{
	if (!Function_28(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

int Function_157(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9881 / 39041
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_158(bParam0), Function_39()) == 0)
		{
			ADD_ITEM(Function_158(bParam0), Function_39(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_158(bParam0), Function_39(), bParam2);
	return 1;
}

var Function_158(bool bParam0) //Position: 0x98CC / 39116
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

int Function_159(bool bParam0, bool bParam1) //Position: 0x99BD / 39357
{
	bool bVar0;
	
	bVar0 = Function_101(0);
	if ((Function_101(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_116(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_101(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_116(597, bParam0, 0, 0);
	}
	if ((Function_101(597) + Function_101(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

bool Function_160(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9A88 / 39560
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
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_101(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_158(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_161(int iParam0, bool bParam1, bool bParam2) //Position: 0x9B8A / 39818
{
	int iVar0;
	bool bVar1;
	
	if (Function_173(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_101(3);
	Function_170();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_168(3, bVar1);
		if (!bParam2)
		{
			if (!Function_136(Global_76848, 4))
			{
				Function_131(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_116(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_155(3));
	iVar0 = Function_101(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_163(4, Function_167(Global_12976.f_156), 1);
				Function_162(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_163(4, Function_167(Global_12976.f_156), 1);
				Function_162(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_163(4, Function_167(Global_12976.f_156), 1);
				Function_162(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_163(4, Function_167(Global_12976.f_156), 1);
				Function_162(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_163(4, Function_167(Global_12976.f_156), 1);
				Function_162(Global_12976.f_152, Global_12976.f_156);
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

void Function_162(int iParam0, int iParam1) //Position: 0x9D4D / 40269
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
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

int Function_163(int iParam0, char* cParam1, bool bParam2) //Position: 0x9FAB / 40875
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
	Function_118(iParam0, cParam1, 0, 1);
	iVar1 = Function_164();
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

int Function_164() //Position: 0xA130 / 41264
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
	Function_165();
	return 0;
}

void Function_165() //Position: 0xA1CF / 41423
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
		Function_166(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_166(int iParam0) //Position: 0xA27E / 41598
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

var Function_167(int iParam0) //Position: 0xA2DC / 41692
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

int Function_168(int iParam0, bool bParam1) //Position: 0xA36B / 41835
{
	bool bVar0;
	int iVar1;
	
	Function_116(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_169(iParam0, 4294967295);
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
	iVar1 = Function_164();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_169(int iParam0, int iParam1) //Position: 0xA508 / 42248
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

void Function_170() //Position: 0xA549 / 42313
{
	Function_172(3, 0.0f);
	Function_171(3, 10000.0f);
	return;
}

int Function_171(int iParam0, int iParam1) //Position: 0xA55F / 42335
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_172(int iParam0, int iParam1) //Position: 0xA59F / 42399
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_173(int iParam0) //Position: 0xA5DF / 42463
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_174(int iParam0, bool bParam1, bool bParam2) //Position: 0xA5EE / 42478
{
	int iVar0;
	bool bVar1;
	
	if (Function_173(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_101(1);
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
			Function_168(1, bVar1);
			if (!bParam2)
			{
				if (!Function_136(Global_76848, 1))
				{
					Function_131(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_177(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_136(Global_76848, 2))
				{
					Function_131(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_116(1, bVar1, 0, 0);
	}
	else
	{
		Function_176(1, (4294967295 * bVar1), 0);
	}
	if (Function_101(1) <= 4294962296)
	{
		Function_88(1, 4294962296, 0);
	}
	else if (Function_101(1) >= 5000)
	{
		Function_88(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_155(1));
	iVar0 = Function_101(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_163(2, Function_175(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_163(2, Function_175(Global_12976.f_152), 0);
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
				Function_163(2, Function_175(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_163(2, Function_175(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_163(2, Function_175(Global_12976.f_152), 1);
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
				Function_163(2, Function_175(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_163(2, Function_175(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_163(2, Function_175(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_163(2, Function_175(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_163(2, Function_175(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_163(2, Function_175(Global_12976.f_152), 1);
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
				Function_163(2, Function_175(Global_12976.f_152), 0);
			}
			break;
	}
	Function_162(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_175(int iParam0) //Position: 0xA903 / 43267
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

int Function_176(int iParam0, bool bParam1, int iParam2) //Position: 0xA9A6 / 43430
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
	Function_99(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_89(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_177(int iParam0, bool bParam1) //Position: 0xABA1 / 43937
{
	bool bVar0;
	int iVar1;
	
	Function_176(iParam0, bParam1, 0);
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
	iVar1 = Function_169(iParam0, 4294967295);
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
	iVar1 = Function_164();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_178(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xAD3D / 44349
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
		bVar0 = Function_39();
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
					RESET_ANIM_SET_FOR_ACTOR(bVar0, false);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, true);
				}
			}
			if (Function_302())
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
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_116(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_40();
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
	Function_179(iParam9);
}

void Function_179(bool bParam0) //Position: 0xAE2D / 44589
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
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

void Function_180(bool bParam0, bool bParam1) //Position: 0xAED2 / 44754
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xAEE7 / 44775
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_63(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TWR_NoDadVista", 2, 1);
	}
	Function_182(&bVar0);
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

void Function_182(int iParam0) //Position: 0xAF61 / 44897
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_184(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_183(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 1.0f, 1);
	return;
}

void Function_183(int iParam0) //Position: 0xAFA4 / 44964
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49,32628f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2423,967f, 31,62225f, 2180,559f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,095627f, 0,116306f, 0,000941f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_184(var uParam0) //Position: 0xB012 / 45074
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 49,32628f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2417,738f, 31,62809f, 2180,22f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,060492f, 0,301016f, 0,000939f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_185() //Position: 0xB080 / 45184
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_FatherAlive2", "TwinRok_FatherAlive2", 3, 4, 1, 0, 1);
		Function_47(10);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB0D2 / 45266
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_63(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nTW_ending", 4, 1);
	}
	Function_187(&bVar0);
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

void Function_187(int iParam0) //Position: 0xB147 / 45383
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_191(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_190(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_189(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_188(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 2, 3, 10.0f, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1.0f, 1, 0.0f);
	return;
}

void Function_188(int iParam0) //Position: 0xB1BB / 45499
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2453,42f, 34,68085f, 2134,249f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,020443f, -1,261533f, 0,008521f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_189(int iParam0) //Position: 0xB229 / 45609
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2454,759f, 34,64624f, 2130,416f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,002583f, -1,310284f, 0,00852f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_190(int iParam0) //Position: 0xB297 / 45719
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47,67644f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2422,554f, 27,6667f, 2124,134f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,059982f, 0,887188f, -1E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_191(bool bParam0) //Position: 0xB305 / 45829
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 47,67644f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2421,601f, 27,6667f, 2122,847f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0,059982f, 0,95136f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_192(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xB36F / 45935
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
	Function_40();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_39();
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
			if (Function_302())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
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
				Function_195(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_63(), 2, Function_195(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_116(19, 1, 0, 0);
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
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_194()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_194()));
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
	if (Function_291(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_193(0x4000000);
	}
	if (Function_291(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_193(0x8000000);
	}
}

void Function_193(int iParam0) //Position: 0xB618 / 46616
{
	int iVar0;
	
	if (Function_224(iParam0, 1) && Function_224(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_194() //Position: 0xB64C / 46668
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

vector3 Function_195(bool bParam0) //Position: 0xB6CB / 46795
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_196(int iParam0) //Position: 0xB6DC / 46812
{
	bool bVar0;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TW_AreaVultures", *iParam0, 4294967295, 0);
	Function_197(iParam0, &bVar0, &Local_0 + 152);
	return;
}

void Function_197(var uParam0, var uParam1, int iParam2) //Position: 0xB709 / 46857
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
		Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_198("Ambiance_Vlt") };
		vVar17 = { RAND_FLOAT_RANGE((vVar5.x - fVar3), (vVar5.x + fVar3)), RAND_FLOAT_RANGE((vVar5.y - 5.0f), (vVar5.y + 5.0f)), RAND_FLOAT_RANGE((vVar5.z - fVar3), (vVar5.z + fVar3)) };
		vVar20 = { 0.0f, RAND_FLOAT_RANGE(0.0f, 359,9f), 0.0f };
		bVar23 = CREATE_ACTOR_IN_LAYOUT(*uParam0, &Var9, 1128, vVar17, vVar20);
		MAKE_BIRD_FLY_FROM_POINT(bVar23, vVar17, vVar20);
		ADD_OBJECT_TO_OBJECTSET(bVar23, *uParam1);
		TASK_PRIORITY_SET(bVar23, true);
		TASK_BIRD_SOAR_AT_COORD(bVar23, &vVar5, -1.0f, 1106247680);
		iVar8++;
	}
	return;
}

struct<32> Function_198(bool bParam0) //Position: 0xB865 / 47205
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_199("0", &cVar8, ""), 4);
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

struct<32> Function_199(char* cParam0, char* cParam1, char* cParam2) //Position: 0xB8CF / 47311
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_200(bool bParam0, bool bParam1) //Position: 0xB8EE / 47342
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

void Function_201(var uParam0, int iParam1) //Position: 0xB93F / 47423
{
	bool bVar0;
	
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0), 13, false);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*iParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*iParam1, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(*iParam1, bVar0), 13, false);
		}
		bVar0++;
	}
	return;
}

void Function_202(var uParam0, var uParam1, int iParam2) //Position: 0xB9B5 / 47541
{
	bool bVar0;
	
	AI_DONT_HARM_ACTOR(Global_34573);
	if (IS_ACTOR_VALID(*iParam2))
	{
		AI_DONT_HARM_ACTOR(*iParam2);
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0), 13, true);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam1, bVar0)))
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(SQUAD_GET_ACTOR_BY_INDEX(*uParam1, bVar0), 13, true);
		}
		bVar0++;
	}
	return;
}

void Function_203(int iParam0, int iParam1) //Position: 0xBA3A / 47674
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_28(iParam0))
	{
		Function_26();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_25(iParam0);
	if (StackVal != 2)
	{
		Function_21("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_78(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_23(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_124(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_123(Global_6269) };
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

void Function_204(bool bParam0, bool bParam1) //Position: 0xBB4A / 47946
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_205(var uParam0, bool bParam1) //Position: 0xBB59 / 47961
{
	bool bVar0;
	int iVar1;
	
	if (((StackVal || (IS_ACTOR_IN_VOLUME((DECOR_CHECK_EXIST(Global_34573, "IntroCutsceneOver") || DECOR_CHECK_EXIST(Global_34573, "IntroSpecialCase")), Global_34573) && !Global_28178 != 4)) || (Function_206(Global_34573, *bParam1, 1, 1, 1, 5.0f) && !Global_28178 != 4)) || (Function_206(Global_34573, *uParam0, 1, 1, 1, 5.0f) && !Global_28178 != 4))
	{
		if (!Function_222(*uParam0, 1))
		{
			Function_221(*uParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		if (!Function_222(*bParam1, 1))
		{
			Function_221(*bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIMiss"))
		{
			DECOR_REMOVE(Global_34573, "SP_TW_MakeAIMiss");
		}
		DECOR_SET_BOOL(Global_34573, "SP_TW_MakeAIHitAgain", true);
		Function_219(*uParam0, 1, -1.0f);
		Function_71(*bParam1);
		SQUAD_GOALS_CLEAR(*bParam1);
		SQUAD_SET_FACTION(*uParam0, 19);
		SQUAD_SET_FACTION(*bParam1, 19);
		Function_220(*bParam1, -1.0f);
		Function_53(*bParam1, Global_34573, 1);
		Function_52(*bParam1, Global_34573);
		Function_38(*bParam1, Global_34573, 4);
		return 1;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0)))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0), 3.0f))
			{
				if (!Function_222(*uParam0, 1))
				{
					Function_221(*uParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!Function_222(*bParam1, 1))
				{
					Function_221(*bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIMiss"))
				{
					DECOR_REMOVE(Global_34573, "SP_TW_MakeAIMiss");
				}
				DECOR_SET_BOOL(Global_34573, "SP_TW_MakeAIHitAgain", true);
				Function_219(*uParam0, 1, -1.0f);
				Function_71(*bParam1);
				SQUAD_GOALS_CLEAR(*bParam1);
				SQUAD_SET_FACTION(*uParam0, 19);
				SQUAD_SET_FACTION(*bParam1, 19);
				Function_220(*bParam1, -1.0f);
				Function_53(*bParam1, Global_34573, 1);
				Function_52(*bParam1, Global_34573);
				Function_38(*bParam1, Global_34573, 4);
				return 1;
			}
		}
		bVar0++;
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(*bParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*bParam1, bVar0)))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(SQUAD_GET_ACTOR_BY_INDEX(*bParam1, bVar0), 3.0f))
			{
				if (!Function_222(*bParam1, 1))
				{
					Function_221(*bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!Function_222(*uParam0, 1))
				{
					Function_221(*uParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (DECOR_CHECK_EXIST(Global_34573, "SP_TW_MakeAIMiss"))
				{
					DECOR_REMOVE(Global_34573, "SP_TW_MakeAIMiss");
				}
				DECOR_SET_BOOL(Global_34573, "SP_TW_MakeAIHitAgain", true);
				Function_219(*uParam0, 1, -1.0f);
				Function_71(*bParam1);
				SQUAD_GOALS_CLEAR(*bParam1);
				SQUAD_SET_FACTION(*uParam0, 19);
				SQUAD_SET_FACTION(*bParam1, 19);
				Function_220(*bParam1, -1.0f);
				Function_53(*bParam1, Global_34573, 1);
				Function_52(*bParam1, Global_34573);
				Function_38(*bParam1, Global_34573, 4);
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int Function_206(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0xBEF4 / 48884
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
			if (Function_207(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_207(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xBF54 / 48980
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
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
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
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
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

float Function_208(int iParam0) //Position: 0xC042 / 49218
{
	if (Function_210(iParam0))
	{
		if (Function_209(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_209(int iParam0) //Position: 0xC10A / 49418
{
	return Function_224(*iParam0, 2);
}

bool Function_210(int iParam0) //Position: 0xC117 / 49431
{
	return Function_224(*iParam0, 1);
}

void Function_211(int iParam0) //Position: 0xC124 / 49444
{
	Function_212(iParam0, 0.0f);
	return;
}

void Function_212(int iParam0, float fParam1) //Position: 0xC130 / 49456
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_204(iParam0, 1);
	Function_79(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_213(int iParam0) //Position: 0xC151 / 49489
{
	if (!Function_210(iParam0))
	{
		Function_212(iParam0, 0.0f);
	}
	return;
}

void Function_214() //Position: 0xC166 / 49510
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "TwinRok_GunOnDaughter", "TwinRok_GunOnDaughter", false, 3, 1, 0, 1);
		Function_47(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_215() //Position: 0xC1BA / 49594
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "TwinRok_SpotsPlayer", "TwinRok_SpotsPlayer", false, 3, 1, 0, 1);
		Function_47(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_216() //Position: 0xC209 / 49673
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "TwinRok_GunPoint", "TwinRok_GunPoint", false, 1, 1, 0, 1);
		Function_47(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_217(bool bParam0, bool bParam1) //Position: 0xC253 / 49747
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

void Function_218() //Position: 0xC344 / 49988
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "TwinRok_SaveHer", "TwinRok_SaveHer", 3, 2, 1, 0, 1);
		Function_47(10);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC38C / 50060
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
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
			GET_POSITION(bVar1, &uVar2);
			bVar5 = GET_HEADING(bVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar1, &uVar2, bVar5, bParam2);
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_220(bool bParam0, bool bParam1) //Position: 0xC3E5 / 50149
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
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_221(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xC42E / 50222
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

bool Function_222(bool bParam0, bool bParam1) //Position: 0xC518 / 50456
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

void Function_223(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xC56E / 50542
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

bool Function_224(bool bParam0, bool bParam1) //Position: 0xC5C1 / 50625
{
	return (bParam0 && bParam1) == 0;
}

void Function_225(var uParam0, int iParam1) //Position: 0xC5CE / 50638
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(*uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0)))
		{
			if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0), Local_0.f_184))
			{
				vVar1 = { -2424f, 25,09814f, 2136f };
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0), &vVar1, 1, 1, 1);
			}
		}
		bVar0++;
	}
	bVar4 = false;
	while (bVar4 < (SQUAD_GET_SIZE(*iParam1) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(*iParam1, bVar4)))
		{
			if (IS_ACTOR_IN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(*iParam1, bVar4), Local_0.f_184))
			{
				vVar5 = { -2424f, 25,09814f, 2136f };
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(*iParam1, bVar4), &vVar5, 1, 1, 1);
			}
		}
		bVar4++;
	}
	return;
}

void Function_226(char* cParam0, int iParam1) //Position: 0xC68C / 50828
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_227(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_210(iParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_208(iParam1);
		}
	}
	return;
}

var Function_227(int iParam0) //Position: 0xC6CB / 50891
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

vector3 Function_228(bool bParam0) //Position: 0xC6FD / 50941
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

vector3 Function_229(bool bParam0) //Position: 0xC724 / 50980
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

void Function_230(var uParam0, var uParam1, int iParam2) //Position: 0xC74B / 51019
{
	*iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "BackUpHorseSquad"));
	(*uParam1)[0] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Horse01", 976, *(&Local_0 + 1224), *(&Local_0 + 1224 + 12));
	SQUAD_JOIN((*uParam1)[0], *iParam2);
	TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*uParam1)[0], 3);
	(*uParam1)[1] = CREATE_ACTOR_IN_LAYOUT(*uParam0, "Horse02", 977, *(&Local_0 + 1252), *(&Local_0 + 1252 + 12));
	SQUAD_JOIN((*uParam1)[1], *iParam2);
	TASK_STAND_STILL((*uParam1)[1], -1.0f, 0, 0);
	ACCESSORIZE_HORSE((*uParam1)[1], 3);
	return;
}

void Function_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC800 / 51200
{
	bool bVar0;
	char* cVar1[32];
	
	if (Function_224(*uParam4, 32))
	{
		*uParam1 = Function_232(uParam0, uParam2, uParam3);
	}
	bVar0 = CREATE_GRINGO_IN_LAYOUT(*uParam0, Function_63(), "$/content/scripting/gringo/simpleGringo/Locked_Footlocker", -2421,714f, 26,369f, 2122,497f, 0.0f, 137,89f, 0.0f);
	SET_WEAPONENUM_LOCKED(false, 0);
	strcpy(&cVar1, "Weapon_", 32);
	straddi(&cVar1, 0, 32);
	DECOR_SET_INT(bVar0, &cVar1, false);
}

var Function_232(var uParam0, var uParam1, int iParam2) //Position: 0xC89D / 51357
{
	bool bVar0;
	
	bVar0 = FIND_VOLUME_IN_LAYOUT(Global_30616, "twrv_insideSE");
	Function_229(FIND_OBJECT_IN_LAYOUT(Global_30616, "twrf_SE"));
	vLocal_626 = { StackVal, StackVal, Function_229(FIND_OBJECT_IN_LAYOUT(Global_30616, "twrf_SE")) };
	Function_228(FIND_OBJECT_IN_LAYOUT(Global_30616, "twrf_SE"));
	vLocal_629 = { StackVal, StackVal, Function_228(FIND_OBJECT_IN_LAYOUT(Global_30616, "twrf_SE")) };
	bLocal_600 = CREATE_ACTOR_IN_LAYOUT(*uParam0, "PaulTheHelper", 202, vLocal_626, vLocal_629);
	MEMORY_CONSIDER_AS(bLocal_600, Global_34573, false);
	SET_ACTOR_FACTION(bLocal_600, 20);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_600, false);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_600, 0.0f);
	ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_600, bVar0);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_600, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_600, 12, 0);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_600, 13, 0);
	DECOR_SET_BOOL(bLocal_600, "CanBeLasso", false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_600, false);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_600, false);
	SET_FACTIONS_STATUS_TWO_WAY(25, 20, 4);
	SET_ACTOR_ALLOW_DISARM(bLocal_600, false);
	SET_CRIPPLE_ENABLE(bLocal_600, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_600, 1);
	bLocal_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "HelperSquad"));
	SQUAD_JOIN(bLocal_600, bLocal_632);
	SQUAD_SET_FACTION(bLocal_632, 20);
	TASK_CROUCH(bLocal_600, -1.0f);
	FORCE_LOOK_AT_ACTOR(bLocal_600, Global_34573, -1.0f);
	AI_GOAL_LOOK_AT_ACTOR(bLocal_600, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
	APPEND_JOURNAL_ENTRY_DETAIL(*uParam1, "TWR_Obj_ApproachHelper", 0, 0, false);
	APPEND_JOURNAL_ENTRY(*uParam1, 0);
	*iParam2 = CREATE_GATEWAY_IN_LAYOUT(*uParam0, Function_63(), Local_0.f_124, Global_34573, 2, 3, 0, false, 1, 1);
	return bLocal_600;
}

bool Function_233(int iParam0) //Position: 0xCA2B / 51755
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_237();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_236(iParam0[iVar03], 8);
		}
		else if (Function_235())
		{
			iVar1 = 1;
			Function_236(iParam0[iVar03], 8);
		}
		Function_236(iParam0[iVar03], 16);
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
				Function_236(iParam0[iVar03], 1);
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
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
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
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_236(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_236(iParam0[iVar03], 2);
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
	Function_234();
	return 1;
}

void Function_234() //Position: 0xCDA6 / 52646
{
	if (!Function_291(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_235() //Position: 0xCDE6 / 52710
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

void Function_236(var uParam0, int iParam1) //Position: 0xCE11 / 52753
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_237() //Position: 0xCE22 / 52770
{
	if (!Function_291(128))
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

void Function_238() //Position: 0xCE64 / 52836
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_468)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_469) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_469);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_239(Global_34573, bVar1) > 100.0f)
			{
				Function_229(bVar1);
				vVar3 = { StackVal, StackVal, Function_229(bVar1) };
				if (!Function_224(iLocal_467, bVar2))
				{
					Function_204(&iLocal_467, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_79(&iLocal_467, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_239(bool bParam0, bool bParam1) //Position: 0xCEED / 52973
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_240(bParam0);
			vVar0 = { StackVal, StackVal, Function_240(bParam0) };
			Function_240(bParam1);
			vVar3 = { StackVal, StackVal, Function_240(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_240(bool bParam0) //Position: 0xCF88 / 53128
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

int Function_241(bool bParam0) //Position: 0xCFF4 / 53236
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_298(bParam0, 2048))
	{
		return 0;
	}
	if (Function_302() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_469 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_468 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_229(bVar1);
		vVar2 = { StackVal, StackVal, Function_229(bVar1) };
		Function_228(bVar1);
		vVar5 = { StackVal, StackVal, Function_228(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_198("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_469);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

int Function_242(char* cParam0, int iParam1, float fParam2, int iParam3, char* cParam4, int iParam5) //Position: 0xD118 / 53528
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = iParam1;
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

void Function_243() //Position: 0xD197 / 53655
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

int Function_244() //Position: 0xD200 / 53760
{
	int iVar0;
	int iVar1;
	
	if ((!Function_136(Global_76846, 16) && !Global_34165.f_36) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_131(Global_34573, 16, 1, 0);
	}
	AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	bLocal_660 = CREATE_LAYOUT("TwinRocks_AALayout");
	Function_252(&bLocal_660, &bLocal_670, &bLocal_671);
	Function_250(&iLocal_682);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_0.f_92);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_0.f_92);
	bLocal_681 = CREATE_JOURNAL_ENTRY("TwinRocksJournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_681, 0);
	bLocal_676 = Function_248("ntwinRocks", "waterWheel", 1);
	Function_247(bLocal_676, 1);
	bLocal_677 = Function_248("ntwinRocks", "waterWheel", 2);
	Function_247(bLocal_677, 1);
	iLocal_743 = 0;
	bLocal_759 = false;
	if (Function_74(Global_30734) == 0)
	{
		Function_204(&bLocal_759, 32);
		DECOR_SET_BOOL(Global_34573, "RunningFTE", true);
	}
	if (Function_74(Global_30734) >= 0)
	{
		Function_204(&bLocal_759, 0x10000000);
	}
	Function_156(Global_30734, 1);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!Function_18(&(Global_6351[iVar02]), 2) || Function_18(&(Global_6351[iVar02]), 4))
		{
			bLocal_775 = true;
		}
		iVar0++;
	}
	if (!bLocal_775)
	{
		iVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_01");
		SC_CHALLENGE_LAUNCH(iVar1);
		if (!Function_210(&iLocal_744))
		{
			Function_213(&iLocal_744);
		}
		else
		{
			Function_211(&iLocal_744);
		}
	}
	Function_245(32768);
	return 1;
}

void Function_245(int iParam0) //Position: 0xD3C4 / 54212
{
	Function_246(&Global_28842, iParam0);
	return;
}

void Function_246(var uParam0, int iParam1) //Position: 0xD3D2 / 54226
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_247(bool bParam0, bool bParam1) //Position: 0xD3F5 / 54261
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

int Function_248(var uParam0, var uParam1, int iParam2) //Position: 0xD449 / 54345
{
	return Function_249(Global_29006, uParam0, uParam1, iParam2);
}

int Function_249(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xD45B / 54363
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_5(iParam0))
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

void Function_250(bool bParam0) //Position: 0xD4F7 / 54519
{
	Function_251(bParam0, 486, 3, 1);
	Function_251(bParam0, 487, 3, 1);
	Function_251(bParam0, 488, 3, 1);
	Function_251(bParam0, 489, 3, 1);
	Function_251(bParam0, 490, 3, 1);
	Function_251(bParam0, 491, 3, 1);
	Function_251(bParam0, 492, 3, 1);
	Function_251(bParam0, 493, 3, 1);
	Function_251(bParam0, 976, 3, 1);
	Function_251(bParam0, 977, 3, 1);
	Function_251(bParam0, 202, 3, 1);
	Function_308(bParam0, "alerted", 5, 0);
	Function_308(bParam0, "custom/alerted", 8, 0);
	Function_308(bParam0, "AA_tesoro_intro_cover", 5, 0);
	Function_308(bParam0, "custom/AA_tesoro_intro_cover", 8, 0);
	Function_308(bParam0, "action_areas", 10, 0);
	Function_308(bParam0, "custom/AA_twin_rocks_hostage", 8, 0);
	Function_308(bParam0, "AA_twin_rocks_hostage", 5, 0);
	Function_308(bParam0, "twin_rocks_dad", 1, 0);
	Function_251(bParam0, 1128, 3, 1);
	return;
}

var Function_251(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD66D / 54893
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_9(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_236(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_236(bParam0[iVar03], 8);
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

void Function_252(var uParam0, var uParam1, int iParam2) //Position: 0xD73D / 55101
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	*uParam1 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TWR_PopSquad"));
	*iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*uParam0, "TWR_sniSquad"));
	iVar1 = 0;
	while (iVar1 < 5)
	{
		bVar0 = Function_255(&Global_6351, &Global_7268, iVar1, 0, 0, 1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (GET_ACTOR_ENUM(bVar0) == 491)
			{
				bLocal_599 = bVar0;
			}
			MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, true);
			if (iVar1 == 4)
			{
				SET_ACTOR_VISION_MAX_RANGE(bVar0, 80.0f, 1);
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 275.0f);
				AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar0, 120.0f);
				AI_SET_WEAPON_MAX_RANGE(bVar0, 65.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
				GIVE_WEAPON_TO_ACTOR(bVar0, 8, 1.0f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar0, 8, 1);
				SET_ACTOR_ALLOW_DISARM(bVar0, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 20.0f);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, Local_0.f_68, 4, true);
				SET_CRIPPLE_ENABLE(bVar0, 0);
				MEMORY_CONSIDER_AS(bVar0, Global_34573, 2);
				MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, true);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
				SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 96, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 98, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar0, 0);
				vVar2 = { -2413,103f, 33,916f, 2172,722f };
				TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
				SQUAD_JOIN(bVar0, *iParam2);
			}
			else if (iVar1 == 5)
			{
				SET_ACTOR_VISION_MAX_RANGE(bVar0, 80.0f, 1);
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 275.0f);
				AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar0, 120.0f);
				AI_SET_WEAPON_MAX_RANGE(bVar0, 65.0f);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
				GIVE_WEAPON_TO_ACTOR(bVar0, 8, 1.0f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar0, 8, 1);
				SET_ACTOR_ALLOW_DISARM(bVar0, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 20.0f);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, Local_0.f_72, 4, true);
				SET_CRIPPLE_ENABLE(bVar0, 0);
				MEMORY_CONSIDER_AS(bVar0, Global_34573, 2);
				MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, true);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 96, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar0, 98, 0);
				AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar0, 0);
				vVar5 = { -2449,763f, 33,515f, 2126,952f };
				TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
				SQUAD_JOIN(bVar0, *iParam2);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(*iParam2, 0);
				SQUAD_SET_FACTION(*iParam2, 19);
				Function_53(*iParam2, FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TwinRocks_AALayout"), "PaulTheHelper"), 0);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam2, 690856);
			}
			else
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 2, false);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 3, false);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 36, 0.0f);
				Function_254(bVar0, 50.0f, 2.0f, 2.0f);
				SQUAD_JOIN(bVar0, *uParam1);
				SET_CRIPPLE_ENABLE(bVar0, 0);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, Local_0.f_36, 4, true);
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(*uParam1, 0, Local_0.f_156, 4, 1);
				SQUAD_SET_FACTION(*uParam1, 19);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*uParam1, 690856);
			}
		}
		iVar1++;
	}
	Function_253(*uParam1, Local_0.f_76, 1, 1);
	return;
}

void Function_253(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDA0F / 55823
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
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_254(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xDA5E / 55902
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

var Function_255(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xDAA5 / 55973
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
		uParam1[iVar03]->f_8 = Function_257(StackVal, StackVal, StackVal, Global_6289, Function_63(), (*uParam1)[iVar03], vVar2, 0x42700000);
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
	Function_256(StackVal, 1);
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

int Function_256(bool bParam0, bool bParam1) //Position: 0xDC3B / 56379
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
			TASK_PRIORITY_SET(bVar0, true);
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

var Function_257(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xDCDD / 56541
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

int Function_258(int iParam0, bool bParam1) //Position: 0xDDF6 / 56822
{
	int iVar0;
	
	iVar0 = Function_121(iParam0);
	if (!Function_24(iVar0))
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

bool Function_259(int iParam0) //Position: 0xDE33 / 56883
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_298(&(Global_29008[iParam0]), 2048);
}

void Function_260(bool bParam0, float fParam1) //Position: 0xDE51 / 56913
{
	if (!Function_291(128))
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

void Function_261(bool bParam0, bool bParam1) //Position: 0xDE8F / 56975
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
		Function_262(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_302())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0xDF89 / 57225
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_263(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xDF96 / 57238
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
		Function_264();
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

void Function_264() //Position: 0xE07A / 57466
{
	int iVar0;
	
	Global_26960 = Function_265(StackVal);
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

int Function_265(int iParam0) //Position: 0xE0C8 / 57544
{
	if (!Function_266(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_266(int iParam0) //Position: 0xE0E0 / 57568
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_267(int iParam0) //Position: 0xE0F5 / 57589
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_268(int iParam0, var uParam1, bool bParam2) //Position: 0xE108 / 57608
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_298(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_258(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_302())
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

void Function_269(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xE1C8 / 57800
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
		Function_270();
	}
	if (bParam5)
	{
		Function_33(1048576);
	}
}

void Function_270() //Position: 0xE2DB / 58075
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_33(16384);
	}
	return;
}

int Function_271(int iParam0) //Position: 0xE2F7 / 58103
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_272(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xE311 / 58129
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_291(2))
	{
		return;
	}
	if (Function_298(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_18(uParam0[iVar02], 2))
		{
			if (Function_273(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_304(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0xE3C3 / 58307
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_298(&(Global_29008[iParam5]), 256))
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
		uParam1->f_8 = Function_257(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_66(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(uParam0, 4);
	}
	Function_274(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_274(bool bParam0, int iParam1) //Position: 0xE52E / 58670
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_66(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_66(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_66(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_66(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_66(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_66(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_275(var uParam0, var uParam1, bool bParam2) //Position: 0xE66A / 58986
{
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_281(uParam0, uParam1, bParam2);
		Function_280(uParam0, uParam1, bParam2);
		Function_279(uParam0, uParam1, bParam2);
		Function_278(uParam0, uParam1, bParam2);
		Function_277(uParam0, uParam1, bParam2);
		Function_276(uParam0, uParam1, bParam2);
	}
	return;
}

void Function_276(var uParam0, var uParam1, bool bParam2) //Position: 0xE705 / 59141
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 60);
	return;
}

void Function_277(var uParam0, var uParam1, bool bParam2) //Position: 0xE769 / 59241
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 48);
	return;
}

void Function_278(var uParam0, var uParam1, bool bParam2) //Position: 0xE7CF / 59343
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 36);
	return;
}

void Function_279(var uParam0, var uParam1, bool bParam2) //Position: 0xE837 / 59447
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 24);
	return;
}

void Function_280(var uParam0, var uParam1, bool bParam2) //Position: 0xE89A / 59546
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 12);
	return;
}

void Function_281(var uParam0, var uParam1, bool bParam2) //Position: 0xE900 / 59648
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020]);
	PRINTVECTOR(*uParam1[bVar020]);
	PRINTNL();
	return;
}

void Function_282(int iParam0, var uParam1, bool bParam2) //Position: 0xE96F / 59759
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

void Function_283(int iParam0, var uParam1, vector3 vParam2) //Position: 0xE9CA / 59850
{
	if (Function_66(StackVal, StackVal, vParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_290(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_289(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_288(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_287(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_286(StackVal, StackVal, iParam0, uParam1, vParam2);
		Function_284(StackVal, StackVal, iParam0, uParam1, vParam2);
	}
}

void Function_284(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEA74 / 60020
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_285(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_285(vector3 vParam0, vector3 vParam3) //Position: 0xEADA / 60122
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_286(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEB07 / 60167
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_285(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_287(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEB6F / 60271
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_285(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_288(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEBD9 / 60377
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_285(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_289(var uParam0, var uParam1, vector3 vParam2) //Position: 0xEC3E / 60478
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_285(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_290(var uParam0, var uParam1, vector3 vParam2) //Position: 0xECA6 / 60582
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_285(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

bool Function_291(int iParam0) //Position: 0xED09 / 60681
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_292(bool bParam0, bool bParam1, bool bParam2) //Position: 0xED25 / 60709
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_296(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_293(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_293(bParam0, bParam1, bParam2, 4294967295);
}

int Function_293(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xED83 / 60803
{
	var uVar0;
	
	if (!Function_295(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_296(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_294(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_294(int iParam0) //Position: 0xEED8 / 61144
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_295(int iParam0) //Position: 0xEF16 / 61206
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_296(int iParam0, int iParam1, int iParam2) //Position: 0xEF2B / 61227
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_297(int iParam0) //Position: 0xEF4B / 61259
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_298(&(Global_29008[iParam0]), 4);
}

bool Function_298(var uParam0, int iParam1) //Position: 0xEF67 / 61287
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_299(var uParam0, var uParam1, int iParam2) //Position: 0xEF83 / 61315
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_302())
	{
		return 1;
	}
	if (Function_298(&(Global_29008[iParam2]), 0x40000000))
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

int Function_300() //Position: 0xF04F / 61519
{
	if (Function_302())
	{
		return (Function_301() != 1 || Function_301() != 0);
	}
	return 0;
}

int Function_301() //Position: 0xF068 / 61544
{
	return Global_79349.f_16;
}

bool Function_302() //Position: 0xF074 / 61556
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_303(var uParam0, var uParam1, int iParam2) //Position: 0xF07D / 61565
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_302())
	{
		return;
	}
	if (!Function_298(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_19(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_19(iParam2), 12));
			Function_304(&(Global_29008[iParam2]), 0x40000000);
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

void Function_304(var uParam0, int iParam1) //Position: 0xF153 / 61779
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_305() //Position: 0xF162 / 61794
{
	var uVar0;
	
	Function_306(3, 3);
	uVar0 = uVar0;
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_nospawn", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_player", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_e_any", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_308(&Local_347 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	if (!Function_233(&Local_347 + 4))
	{
		return 0;
	}
	Local_347 = FIND_NAMED_LAYOUT("TwinRocks_layout");
	if (!IS_LAYOUTREF_VALID(Local_347))
	{
		Local_347 = CREATE_LAYOUT("TwinRocks_layout");
	}
	Local_347.f_260 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_lean_rail", "lean_rail_nospawn", -2417,08f, 29,25764f, 2139,718f, 0.0f, 95,92577f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_260), 0);
	Local_347.f_264 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_idle_stand", "rand_idle_stand_nospawn", -2416,589f, 29,27306f, 2138,261f, 0.0f, 93,32034f, 0.0f);
	Local_347.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_idle_wall", "Rand_Idle_NearWall_nospawn", -2425,122f, 25,51441f, 2127,85f, 0.0f, 92,24918f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_268), 0);
	Local_347.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_smoke_stand", "smoking_stand_nospawn", -2422,03f, 25,09814f, 2137,97f, 0.0f, 102,7607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_272), 0);
	Local_347.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_pee", "Pee_nospawn", -2432f, 25,09812f, 2119,138f, 0.0f, -0,6721768f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_276), 0);
	Local_347.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_idle_stand1", "rand_idle_stand_nospawn", -2432f, 23,70054f, 2152f, 0.0f, 131,5245f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_280), 0);
	Local_347.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_idle_wall1", "Rand_Idle_NearWall_nospawn", -2417,589f, 25,09811f, 2142,767f, 0.0f, 96,66019f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_284), 0);
	Local_347.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_smoke_stand1", "smoking_stand_nospawn", -2436f, 24,08591f, 2148,066f, 0.0f, 137,6552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_288), 0);
	Local_347.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_pee1", "Pee_nospawn", -2404,851f, 25,54744f, 2163,396f, 0.0f, -172,968f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_292), 0);
	Local_347.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sit_ground2", "Rand_Idle_Sit_Ground_nospawn", -2426,876f, 24,24585f, 2152,327f, 0.0f, 22,87328f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_296), 0);
	Local_347.f_300 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sit_ground3", "Rand_Idle_Sit_Ground_nospawn", -2426,943f, 24,22677f, 2150,896f, 0.0f, -223,5427f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_300), 0);
	Local_347.f_304 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_lean_rail2", "lean_rail_nospawn", -2433,635f, 24,64219f, 2143,568f, 0.0f, 270,4292f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_304), 0);
	Local_347.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_idle_wall3", "Rand_Idle_NearWall_nospawn", -2437,553f, 24,59615f, 2120,173f, 0.0f, -132,4293f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_308), 0);
	Local_347.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sleeping1", "sleeping_scripted", -2411,451f, 26,28179f, 2131,162f, 0.0f, -84,87863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_312), 0);
	Local_347.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sleeping4", "sleeping_scripted", -2421,473f, 24,91328f, 2152,267f, 0.0f, 28,90888f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_316), 0);
	Local_347.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sleeping5", "sleeping_scripted", -2423,019f, 24,71925f, 2152,865f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_320), 0);
	Local_347.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sleeping6", "sleeping_scripted", -2421,477f, 24,91271f, 2149,501f, 0.0f, -197,9254f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_324), 0);
	Local_347.f_328 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sleeping7", "sleeping_scripted", -2425,189f, 24,44694f, 2150,294f, 0.0f, -89,37318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_328), 0);
	Local_347.f_332 = CREATE_GRINGO_IN_LAYOUT(Local_347, "rand_stand01", "rand_idle_stand_nospawn", -2421,92f, 25,09813f, 2138,628f, 0.0f, 97,50497f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_332), 0);
	Local_347.f_336 = CREATE_GRINGO_IN_LAYOUT(Local_347, "rand_stand02", "rand_idle_stand_nospawn", -2435,277f, 24,02687f, 2148,684f, 0.0f, 126,4945f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_336), 0);
	Local_347.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_347, "rand_stand03", "rand_idle_stand_nospawn", -2439,742f, 24,09418f, 2142,048f, 0.0f, -284,7104f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_340), 0);
	Local_347.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_347, "rand_stand04", "rand_idle_stand_nospawn", -2432,033f, 24,98849f, 2129,763f, 0.0f, -209,3616f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_344), 0);
	Local_347.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_347, "stand_smoke01", "smoking_stand_nospawn", -2427,634f, 24,65965f, 2142,002f, 0.0f, -284,674f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_348), 0);
	Local_347.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_347, "stand_smoke02", "smoking_stand_nospawn", -2430,901f, 24,49936f, 2147,353f, 0.0f, 95,87056f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_352), 0);
	Local_347.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_347, "sit_ground02", "Rand_Idle_Sit_Ground_nospawn", -2424,629f, 25,09812f, 2136,372f, 0.0f, 65,6116f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_356), 0);
	Local_347.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_347, "sit_headinhands01", "sit_headinhands_n_any", -2413,979f, 25,50912f, 2142,244f, 0.0f, 184,7458f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_360), 0);
	Local_347.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_pee2", "stand_peeing_b_any", -2410,571f, 25,81554f, 2140,179f, 0.0f, 89,34084f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_364), 0);
	Local_347.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_pee3", "stand_peeing_b_any", -2420,88f, 25,65847f, 2120,983f, 0.0f, 194,0388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_368), 0);
	Local_347.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_drunkdance01", "Rand_Idle_Sit_Ground_Player", -2431,176f, 24,63136f, 2138,635f, 0.0f, 83,15812f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_372), 0);
	Local_347.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_guntricks01", "stand_guntricks_e_any", -2436,83f, 24,47668f, 2136,253f, 0.0f, -123,1825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_376), 0);
	Local_347.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_guntricks02", "stand_guntricks_e_any", -2422,137f, 24,88736f, 2145,615f, 0.0f, -282,3506f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_380), 0);
	Local_347.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_vomit01", "stand_kneelvomit_n_any", -2413,439f, 25,90355f, 2133,169f, 0.0f, -441,4828f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_384), 0);
	Local_347.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_vomit02", "stand_kneelvomit_n_any", -2439,348f, 24,38526f, 2124,119f, 0.0f, -316,5172f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_388), 0);
	Local_347.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_vomit03", "stand_kneelvomit_n_any", -2445,276f, 23,87263f, 2141,015f, 0.0f, -250,1961f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_392), 0);
	Local_347.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_fiddle01", "stand_fiddle_w_fiddle", -2433,15f, 24,59706f, 2141,245f, 0.0f, -334,2941f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_396), 0);
	Local_347.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_drunkdance02", "stand_drunkdancing_e_any", -2437,106f, 24,48163f, 2137,79f, 0.0f, -101,4756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_400), 0);
	Local_347.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_cleanknife01", "Rand_Idle_NearWall", -2423,963f, 25,58489f, 2129,365f, 0.0f, 144,4136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_404), 0);
	Local_347.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_spitting01", "stand_spit", -2428,584f, 25,10488f, 2131,163f, 0.0f, 145,7444f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_408), 0);
	Local_347.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_spitting02", "stand_spit", -2423,614f, 24,76004f, 2143,606f, 0.0f, 102,6893f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_412), 0);
	Local_347.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_cleanrifle02", "sit_cleanrifle", -2415,203f, 29,27107f, 2135,098f, 0.0f, 98,8722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_416), 0);
	Local_347.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_idle_wall4", "Rand_Idle_NearWall_nospawn", -2419,507f, 25,57293f, 2136,636f, 0.0f, 96,24638f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_420), 0);
	Local_347.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_throwbottle01", "stand_drunk_throwbottle", -2433,172f, 24,59612f, 2135,253f, 0.0f, 166,7328f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_424), 0);
	Local_347.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_throwbottle02", "stand_drunk_throwbottle", -2431,825f, 24,59614f, 2140,367f, 0.0f, 47,20457f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_428), 0);
	Local_347.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_rowdydrink01", "stand_drunk_rowdydrink", -2431,238f, 24,61661f, 2137,398f, 0.0f, 109,2459f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_432), 0);
	Local_347.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_rowdydrink02", "stand_drunk_rowdydrink", -2434,293f, 24,59612f, 2135,234f, 0.0f, 180,7316f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_436), 0);
	Local_347.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_throwbottle03", "stand_drunk_throwbottle", -2436,357f, 24,2992f, 2140,472f, 0.0f, -55,07765f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_440), 0);
	Local_347.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_horsestay01", "horse_stay", -2414,191f, 25,32519f, 2145,656f, 0.0f, 9,537602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_444), 0);
	Local_347.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_horsestay02", "horse_stay", -2412,374f, 25,55319f, 2145,418f, 0.0f, 9,537602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_448), 0);
	Local_347.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_horsestay03", "horse_stay", -2410,277f, 25,7097f, 2143,853f, 0.0f, 74,81305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_452), 0);
	Local_347.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sniperpoint01", "rand_idle_stand_nospawn", -2414,811f, 34,77847f, 2168,892f, 0.0f, 48,31993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_456), 0);
	Local_347.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sniperpoint02", "stand_lookdistance_w_any", -2415,796f, 34,23021f, 2170,121f, 0.0f, 101,3429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_460), 0);
	Local_347.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sniperpoint03", "stand_peeing_b_any", -2414,117f, 34,48881f, 2167,697f, 0.0f, -1,905433f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_464), 0);
	Local_347.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sniperpoint04", "stand_lookdistance_w_any", -2448,781f, 34,00343f, 2128,915f, 0.0f, -124,5028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_468), 0);
	Local_347.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sniperpoint05", "rand_idle_stand_nospawn", -2450,439f, 33,28379f, 2129,468f, 0.0f, -234,5678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_472), 0);
	Local_347.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_347, "twr_sniperpoint06", "rand_idle_stand_nospawn", -2447,737f, 34,23936f, 2126,956f, 0.0f, -24,91837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_347.f_476), 0);
	return 1;
}

void Function_306(int iParam0, int iParam1) //Position: 0x10ABE / 68286
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

bool Function_307() //Position: 0x10B07 / 68359
{
	var uVar0;
	
	Function_306(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("TwinRocks_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("TwinRocks_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_startIfInside", 3, -2424,77f, 24,70359f, 2138,906f, 0.0f, -1,405939f, 0.0f, 21,16832f, 21,16832f, 29,48437f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_playerHostage", 2, -2425,156f, 27,32852f, 2121,311f, 0.0f, -41,46164f, 0.0f, 3,663551f, 1,32575f, 4,390277f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_playerGone", 2, -2424,997f, 27,14761f, 2121,461f, 0.0f, -41,59802f, 0.0f, 4,766919f, 1.0f, 4,480235f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_insideNE", 3, -2391,11f, 27,9995f, 2138,188f, 0.0f, 20.0f, 0.0f, 1,843063f, 1,843063f, 1,843063f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_insideNW", 3, -2425,085f, 26,01419f, 2094,323f, 0.0f, 20.0f, 0.0f, 2,300132f, 2,300132f, 2,300132f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_insideSW", 3, -2468,507f, 23,49398f, 2156,39f, 0.0f, 20.0f, 0.0f, 1,607766f, 1,607766f, 1,607766f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_insideSE", 3, -2458,034f, 24,98236f, 2179,923f, 0.0f, 20.0f, 0.0f, 1,64051f, 2,212744f, 1,64051f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_defend0", 3, -2425,721f, 26,73627f, 2129,188f, 0.0f, 20.0f, 0.0f, 4,757625f, 3,1545f, 4,757625f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_AAPop_StayIn", 3, -2425,664f, 25,09808f, 2136,552f, 0.0f, 20.0f, 0.0f, 20,90794f, 10,83597f, 20,5029f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_noContext", 2, -2428f, 41,08049f, 2136f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_NECover", 2, -2408,585f, 25,63184f, 2151,019f, 0.0f, 0.0f, 0.0f, 7,245131f, 7,245131f, 7,245131f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_SECover", 2, -2436f, 23,30142f, 2156f, 0.0f, 0.0f, 0.0f, 7,260628f, 7,260628f, 7,260628f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_SWCover", 2, -2448f, 23,59218f, 2136f, 0.0f, 0.0f, 0.0f, 5,256177f, 5,256177f, 5,256177f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_NWCover", 2, -2439,097f, 25,23815f, 2120,293f, 0.0f, 0.0f, 0.0f, 4,840513f, 4,840513f, 4,840513f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_insideAtHouse", 2, -2422,478f, 26,01454f, 2130,493f, 0.0f, 46,30294f, 0.0f, 6,610272f, 6,610272f, 6,610272f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_outside", 2, -2428f, 25,09806f, 2134,43f, 0.0f, 47,17339f, 0.0f, 13,13842f, 13,13842f, 13,13842f);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_sniperIn1", 2, -2413,921f, 34,68375f, 2170,171f, 0.0f, -52,48075f, 0.0f, 3,682513f, 4,87992f, 2,857668f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_sniperIn2", 2, -2450,04f, 33,43279f, 2127,038f, 0.0f, 0.0f, 0.0f, 3,836874f, 6,214174f, 3,836874f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "twrv_AllStayIn", 3, -2424,932f, 25,09806f, 2136f, 0.0f, 20.0f, 0.0f, 21,05392f, 8,696665f, 21,05392f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_inHouse", 2, -2420,461f, 26,31637f, 2128,305f, 0.0f, -39,93395f, 0.0f, 6,295712f, 3,945423f, 3,945423f);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_increaseAccuracy01", 3, -2412,738f, 24,70359f, 2169,182f, 0.0f, -1,405939f, 0.0f, 40.0f, 40.0f, 40.0f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_increaseAccuracy02", 3, -2449,806f, 24,70359f, 2126,486f, 0.0f, -1,405939f, 0.0f, 40.0f, 40.0f, 40.0f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_ambientExclusion", 3, -2442,339f, 24,70359f, 2146,239f, 0.0f, 21,42772f, 0.0f, 46,13355f, 24,36923f, 39,73418f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_helperDefend", 2, -2426,721f, 26,64913f, 2147,579f, 0.0f, -49,28769f, 0.0f, 20,30862f, 11,43634f, 12,54138f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_goToVolume", 2, -2375,531f, 18,82449f, 2387,793f, 0.0f, 13,55116f, 0.0f, 16,53381f, 16,53381f, 16,53381f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_bossDefend", 2, -2428,562f, 25,60002f, 2134,382f, 0.0f, -40,35624f, 0.0f, 14,84048f, 9,778772f, 10,84047f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_bossLeave", 2, -2419,536f, 26,43932f, 2127,593f, 0.0f, -42,5021f, 0.0f, 8,084139f, 11,21915f, 7,601983f);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_CaptiveVolume", 2, -2423,063f, 25,35552f, 2125,73f, 0.0f, -45,44161f, 0.0f, 20,37519f, 20,37519f, 20,37519f);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_introCutscene", 3, -2428,428f, 24,09415f, 2143,441f, 0.0f, 20.0f, 0.0f, 80,69596f, 47,86263f, 80,69596f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_hostageCheck", 2, -2422,615f, 27,84133f, 2123,548f, 0.0f, -41,46164f, 0.0f, 11,74823f, 4,04835f, 4,390277f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_introGateway", 2, -2459,499f, 25,21739f, 2179,441f, 0.0f, -29,22804f, 0.0f, 4.0f, 1,589975f, 5.0f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_hostageCheck1", 2, -2419,492f, 28,0698f, 2127,759f, 0.0f, -42,18689f, 0.0f, 6,285384f, 4,04835f, 6,354834f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_SouthIntro01", 2, -2464,68f, 24,59606f, 2169,153f, 0.0f, 36,39305f, 0.0f, 28,81783f, 36,02772f, 128,2845f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_SouthIntro02", 2, -2405,233f, 24,59606f, 2212,056f, 0.0f, 97,56844f, 0.0f, 33,00533f, 36,02772f, 99,89085f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_EastIntro01", 2, -2379,134f, 24,59606f, 2135,963f, 0.0f, 2,731998f, 0.0f, 37,22339f, 36,02772f, 107,3003f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_EastIntro02", 2, -2436,699f, 24,59606f, 2092,788f, 0.0f, 99,46292f, 0.0f, 24,0576f, 36,02772f, 107,3003f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_badGuyStayIn", 2, -2425,156f, 28,12282f, 2121,311f, 0.0f, -41,46164f, 0.0f, 3,663551f, 3,818717f, 4,390277f);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_AreaVoltures", 2, -2428f, 39,70816f, 2136f, 0.0f, 0.0f, 0.0f, 5,237462f, 3,794167f, 5,153186f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_stayOut", 2, -2435,712f, 23,06507f, 2157,581f, 0.0f, -50,04866f, 0.0f, 4,56872f, 6,379158f, 3,617371f);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_TeleportJohn", 2, -2424,206f, 27,43518f, 2122,424f, 0.0f, -41,66864f, 0.0f, 6,026509f, 4,596425f, 3,731507f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_JohnInCover", 2, -2422,419f, 26,15865f, 2126,488f, 0.0f, -37,69411f, 0.0f, 2,4035f, 6,173452f, 2,29321f);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_dadCheckVolume", 2, -2419,492f, 28,0698f, 2127,759f, 0.0f, -42,18689f, 0.0f, 7,590724f, 4,04835f, 6,376594f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_StartSecondTime", 3, -2425,664f, 25,09808f, 2136,552f, 0.0f, 20.0f, 0.0f, 80,15094f, 40,23622f, 76,13154f);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_CheckPlayerHorse", 2, -2458,499f, 24,37643f, 2180,779f, 0.0f, 0.0f, 0.0f, 11,97241f, 9,523415f, 10,66033f);
	Local_0.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_PrintObjective", 3, -2425,664f, 25,09808f, 2136,552f, 0.0f, 20.0f, 0.0f, 109,6142f, 55,02696f, 104,1173f);
	Local_0.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_EmergencyTeleport", 2, -2415,45f, 24,75954f, 2137,849f, 0.0f, 8,799473f, 0.0f, 5,864594f, 8,704858f, 6,197705f);
	*(&Local_0 + 188) = { -2416.0f, 25,95819f, 2132f };
	*(&Local_0 + 188 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_212 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag1", -2416.0f, 25,95819f, 2132f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 216) = { -2440f, 24,09419f, 2144f };
	*(&Local_0 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_240 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag2", -2440f, 24,09419f, 2144f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 244) = { -2424f, 24,59612f, 2152f };
	*(&Local_0 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag3", -2424f, 24,59612f, 2152f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 272) = { -2428f, 25,35552f, 2124f };
	*(&Local_0 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag4", -2428f, 25,35552f, 2124f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 300) = { -2419,69f, 26,16577f, 2127,82f };
	*(&Local_0 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag5", -2419,69f, 26,16577f, 2127,82f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 328) = { -2420,193f, 31,69309f, 2126,187f };
	*(&Local_0 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag6", -2420,193f, 31,69309f, 2126,187f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 356) = { -2412f, 25,60009f, 2148f };
	*(&Local_0 + 356 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_380 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag7", -2412f, 25,60009f, 2148f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 384) = { -2436f, 24,59611f, 2124f };
	*(&Local_0 + 384 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_408 = CREATE_POINT_IN_LAYOUT(Local_0, "ntwr_flag8", -2436f, 24,59611f, 2124f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 412) = { -2414,56f, 25,67141f, 2140,677f };
	*(&Local_0 + 412 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_436 = CREATE_POINT_IN_LAYOUT(Local_0, "twr_flag_bunk", -2414,56f, 25,67141f, 2140,677f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 440) = { -2419,363f, 26,16577f, 2127,667f };
	*(&Local_0 + 440 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_464 = CREATE_POINT_IN_LAYOUT(Local_0, "twr_flag_main", -2419,363f, 26,16577f, 2127,667f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 468) = { -2434,085f, 24,48753f, 2138,383f };
	*(&Local_0 + 468 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_492 = CREATE_POINT_IN_LAYOUT(Local_0, "twr_flag_campfire01", -2434,085f, 24,48753f, 2138,383f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 496) = { -2425,085f, 26,01419f, 2094,323f };
	*(&Local_0 + 496 + 12) = { 0.0f, 151,3309f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "twrf_NW", -2425,085f, 26,01419f, 2094,323f, 0.0f, 151,3309f, 0.0f);
	*(&Local_0 + 524) = { -2390,927f, 27,9995f, 2138,165f };
	*(&Local_0 + 524 + 12) = { 0.0f, 100,5624f, 0.0f };
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "twrf_NE", -2390,927f, 27,9995f, 2138,165f, 0.0f, 100,5624f, 0.0f);
	*(&Local_0 + 552) = { -2468,637f, 23,24159f, 2156,346f };
	*(&Local_0 + 552 + 12) = { 0.0f, -88,12041f, 0.0f };
	Local_0.f_576 = CREATE_POINT_IN_LAYOUT(Local_0, "twrf_SW", -2468,637f, 23,24159f, 2156,346f, 0.0f, -88,12041f, 0.0f);
	*(&Local_0 + 580) = { -2458,054f, 24,59613f, 2179,722f };
	*(&Local_0 + 580 + 12) = { 0.0f, 107,4797f, 0.0f };
	Local_0.f_604 = CREATE_POINT_IN_LAYOUT(Local_0, "twrf_SE", -2458,054f, 24,59613f, 2179,722f, 0.0f, 107,4797f, 0.0f);
	*(&Local_0 + 608) = { -2512.0f, 25,6f, 2216f };
	*(&Local_0 + 608 + 12) = { 0.0f, -56,52287f, 0.0f };
	Local_0.f_632 = CREATE_POINT_IN_LAYOUT(Local_0, "twrf_teleport", -2512.0f, 25,6f, 2216f, 0.0f, -56,52287f, 0.0f);
	*(&Local_0 + 636) = { -2432f, 24,62714f, 2140f };
	*(&Local_0 + 636 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_660 = CREATE_POINT_IN_LAYOUT(Local_0, "f_reunionSpot", -2432f, 24,62714f, 2140f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 664) = { -2495,556f, 24,52327f, 2200,302f };
	*(&Local_0 + 664 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "f_captiveGoToSpot", -2495,556f, 24,52327f, 2200,302f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 692) = { -2432,775f, 24,62113f, 2139,225f };
	*(&Local_0 + 692 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_716 = CREATE_POINT_IN_LAYOUT(Local_0, "f_reunionSpot1", -2432,775f, 24,62113f, 2139,225f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 720) = { -2420,474f, 26,16475f, 2128,898f };
	*(&Local_0 + 720 + 12) = { 0.0f, 122,3556f, 0.0f };
	Local_0.f_744 = CREATE_POINT_IN_LAYOUT(Local_0, "f_bossFlag", -2420,474f, 26,16475f, 2128,898f, 0.0f, 122,3556f, 0.0f);
	*(&Local_0 + 748) = { -2420,628f, 26,16475f, 2128,077f };
	*(&Local_0 + 748 + 12) = { 0.0f, 122,3556f, 0.0f };
	Local_0.f_772 = CREATE_POINT_IN_LAYOUT(Local_0, "f_henchmanFlag", -2420,628f, 26,16475f, 2128,077f, 0.0f, 122,3556f, 0.0f);
	*(&Local_0 + 776) = { -2421,564f, 26,15974f, 2129,346f };
	*(&Local_0 + 776 + 12) = { 0.0f, 53,87182f, 0.0f };
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "f_fatherGoToSpot", -2421,564f, 26,15974f, 2129,346f, 0.0f, 53,87182f, 0.0f);
	*(&Local_0 + 804) = { -2426,252f, 26,69297f, 2120,242f };
	*(&Local_0 + 804 + 12) = { 0.0f, -141,3787f, 0.0f };
	Local_0.f_828 = CREATE_POINT_IN_LAYOUT(Local_0, "f_hostageSpot", -2426,252f, 26,69297f, 2120,242f, 0.0f, -141,3787f, 0.0f);
	*(&Local_0 + 832) = { -2421,237f, 26,13897f, 2126,056f };
	*(&Local_0 + 832 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_856 = CREATE_POINT_IN_LAYOUT(Local_0, "f_FirstPathCoor", -2421,237f, 26,13897f, 2126,056f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 860) = { -2459,162f, 24,59613f, 2179,09f };
	*(&Local_0 + 860 + 12) = { 0.0f, -118,7646f, 0.0f };
	Local_0.f_884 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportJohnCrouch", -2459,162f, 24,59613f, 2179,09f, 0.0f, -118,7646f, 0.0f);
	*(&Local_0 + 888) = { -2459,428f, 24,59613f, 2179,446f };
	*(&Local_0 + 888 + 12) = { 0.0f, -118,725f, 0.0f };
	Local_0.f_912 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportJohnCrouch1", -2459,428f, 24,59613f, 2179,446f, 0.0f, -118,725f, 0.0f);
	*(&Local_0 + 916) = { -2460.0f, 25.0f, 2181.0f };
	*(&Local_0 + 916 + 12) = { 0.0f, 328,5769f, 0.0f };
	Local_0.f_940 = CREATE_POINT_IN_LAYOUT(Local_0, "Flag1", -2460.0f, 25.0f, 2181.0f, 0.0f, 328,5769f, 0.0f);
	*(&Local_0 + 944) = { -2424,683f, 26,36347f, 2121,608f };
	*(&Local_0 + 944 + 12) = { 0.0f, 303,2308f, 0.0f };
	Local_0.f_968 = CREATE_POINT_IN_LAYOUT(Local_0, "f_aDaughterSpawn", -2424,683f, 26,36347f, 2121,608f, 0.0f, 303,2308f, 0.0f);
	*(&Local_0 + 972) = { -2423,207f, 26,36346f, 2123,465f };
	*(&Local_0 + 972 + 12) = { 0.0f, -318,2152f, 0.0f };
	Local_0.f_996 = CREATE_POINT_IN_LAYOUT(Local_0, "f_dadCutscene", -2423,207f, 26,36346f, 2123,465f, 0.0f, -318,2152f, 0.0f);
	*(&Local_0 + 1000) = { -2425,5f, 26,36347f, 2120,744f };
	*(&Local_0 + 1000 + 12) = { 0.0f, 224,3542f, 0.0f };
	Local_0.f_1024 = CREATE_POINT_IN_LAYOUT(Local_0, "f_badGuy", -2425,5f, 26,36347f, 2120,744f, 0.0f, 224,3542f, 0.0f);
	*(&Local_0 + 1028) = { -2426,478f, 26,36347f, 2121,321f };
	*(&Local_0 + 1028 + 12) = { 0.0f, 250.0f, 0.0f };
	Local_0.f_1052 = CREATE_POINT_IN_LAYOUT(Local_0, "f_hostageGringo", -2426,478f, 26,36347f, 2121,321f, 0.0f, 250.0f, 0.0f);
	*(&Local_0 + 1056) = { -2422,601f, 26,162f, 2126,31f };
	*(&Local_0 + 1056 + 12) = { 0.0f, -128.0f, 0.0f };
	Local_0.f_1080 = CREATE_POINT_IN_LAYOUT(Local_0, "f_dadGringo", -2422,601f, 26,162f, 2126,31f, 0.0f, -128.0f, 0.0f);
	*(&Local_0 + 1084) = { -2458,174f, 24,59613f, 2179,924f };
	*(&Local_0 + 1084 + 12) = { 0.0f, -30,80718f, 0.0f };
	Local_0.f_1108 = CREATE_POINT_IN_LAYOUT(Local_0, "f_positionCover", -2458,174f, 24,59613f, 2179,924f, 0.0f, -30,80718f, 0.0f);
	*(&Local_0 + 1112) = { -2423,528f, 26,36346f, 2124,996f };
	*(&Local_0 + 1112 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1136 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TeleportJohn", -2423,528f, 26,36346f, 2124,996f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1140) = { -2414,021f, 34,533f, 2170,052f };
	*(&Local_0 + 1140 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1164 = CREATE_POINT_IN_LAYOUT(Local_0, "nf_OUTSNI1", -2414,021f, 34,533f, 2170,052f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1168) = { -2414,021f, 34,533f, 2170,052f };
	*(&Local_0 + 1168 + 12) = { 0.0f, 102,9695f, 0.0f };
	Local_0.f_1192 = CREATE_POINT_IN_LAYOUT(Local_0, "f_alertGringo", -2414,021f, 34,533f, 2170,052f, 0.0f, 102,9695f, 0.0f);
	*(&Local_0 + 1196) = { -2419,715f, 26,16986f, 2128,072f };
	*(&Local_0 + 1196 + 12) = { 0.0f, 42,1808f, 0.0f };
	Local_0.f_1220 = CREATE_POINT_IN_LAYOUT(Local_0, "f_JohnInCover", -2419,715f, 26,16986f, 2128,072f, 0.0f, 42,1808f, 0.0f);
	*(&Local_0 + 1224) = { -2401,375f, 26,01504f, 2164,727f };
	*(&Local_0 + 1224 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1248 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_01", -2401,375f, 26,01504f, 2164,727f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1252) = { -2459,276f, 24,09164f, 2120,78f };
	*(&Local_0 + 1252 + 12) = { 0.0f, -64,37025f, 0.0f };
	Local_0.f_1276 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Horse_02", -2459,276f, 24,09164f, 2120,78f, 0.0f, -64,37025f, 0.0f);
	*(&Local_0 + 1280) = { -2419,914f, 26,163f, 2127,962f };
	*(&Local_0 + 1280 + 12) = { 0.0f, 45.0f, 0.0f };
	Local_0.f_1304 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportVista", -2419,914f, 26,163f, 2127,962f, 0.0f, 45.0f, 0.0f);
	*(&Local_0 + 1308) = { -2425,609f, 26,36346f, 2120,803f };
	*(&Local_0 + 1308 + 12) = { 0.0f, -141,3278f, 0.0f };
	Local_0.f_1332 = CREATE_POINT_IN_LAYOUT(Local_0, "f_hostageGuyShoot", -2425,609f, 26,36346f, 2120,803f, 0.0f, -141,3278f, 0.0f);
	*(&Local_0 + 1336) = { -2464f, 24,09412f, 2188,151f };
	*(&Local_0 + 1336 + 12) = { 0.0f, -72,05788f, 0.0f };
	Local_0.f_1360 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TeleportHorse", -2464f, 24,09412f, 2188,151f, 0.0f, -72,05788f, 0.0f);
	Local_0.f_1364 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "fatherCover", -2422,624f, 26,14231f, 2125,584f, 0.0f, -490,8809f, 0.0f, 1);
	Local_0.f_1368 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "ncover_low", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4);
	Local_0.f_1372 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "introCover", -2458,819f, 24,5851f, 2180,168f, 0.0f, -29,6452f, 0.0f, 4);
	Local_0.f_1376 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4);
	Local_0.f_1380 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "seconndCoverPos", -2444,987f, 22,42624f, 2163,726f, 0.0f, -56,37517f, 0.0f, 4);
	Local_0.f_1384 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "thirdCoverPos", -2432,268f, 24,60106f, 2146,218f, 0.0f, -33,12967f, 0.0f, 4);
	return 1;
}

var Function_308(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x12500 / 75008
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_309(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_236(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_309(var uParam0, int iParam1, int iParam2) //Position: 0x12538 / 75064
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_236(uParam0[iVar03], 4);
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

void Function_310(bool bParam0, int iParam1) //Position: 0x125FC / 75260
{
	if (!Function_291(128))
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

int Function_311(int iParam0) //Position: 0x12637 / 75319
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
	if (Function_298(iParam0, 256))
	{
		return 0;
	}
	if (Function_302())
	{
		return 0;
	}
	return 1;
}

