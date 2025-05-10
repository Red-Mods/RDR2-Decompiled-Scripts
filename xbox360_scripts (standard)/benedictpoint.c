//Decompiled with MagicRDR v1.0
//Function Count : 85
//Statics Count : 336
//Natives Count : 117
//Parameters Count : 2

#region Local Var
	bool bLocal_0 = false;
	var uLocal_1 = 0;
	struct<693> Local_2 = { 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_176 = 0;
	Function_84("Initializing BenedictPoint", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_177 = 1000;
		switch (iLocal_176)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_176 = 1;
				}
				bLocal_177 = false;
				break;
			
			case 0x00000001:
				Function_83();
				if (Function_83())
				{
					iLocal_176 = 2;
				}
				bLocal_177 = false;
				break;
			
			case 0x00000002:
				if (Function_74())
				{
					Function_73(&(Global_29008[iScriptParam_0]), 32);
					Local_300[04] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce"), FIND_OBJECT_IN_LAYOUT(Local_2, "smoking_stand4"), 1, 0, 0, 0, 0, 1) };
					Local_300[14] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce"), FIND_OBJECT_IN_LAYOUT(Local_2, "rand_idle_stand3"), 1, 0, 0, 0, 0, 1) };
					Local_300[24] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce"), FIND_OBJECT_IN_LAYOUT(Local_2, "smoking_stand5"), 1, 0, 0, 0, 0, 1) };
					Local_300[34] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce"), FIND_OBJECT_IN_LAYOUT(Local_2, "rand_idle_stand4"), 1, 0, 0, 0, 0, 1) };
					Local_300[44] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(Local_2, "rand_idle_stand"), 1, 0, 0, 0, 0, 1) };
					Local_300[54] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(Local_2, "rand_idle_stand1"), 1, 0, 0, 0, 0, 1) };
					Local_300[64] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(Local_2, "rand_idle_stand2"), 1, 0, 0, 0, 0, 1) };
					Local_300[74] = { StackVal, StackVal, StackVal, Function_72(FIND_OBJECT_IN_LAYOUT(Local_2, "stand_announce1"), FIND_OBJECT_IN_LAYOUT(Local_2, "smoking_stand3"), 1, 0, 0, 0, 0, 1) };
					iLocal_176 = 3;
				}
				bLocal_177 = false;
				break;
			
			case 0x00000003:
				bLocal_178 = LAUNCH_NEW_SCRIPT_WITH_ARGS("BenedictPointVol", &iScriptParam_0, 2, 0);
				Function_71(&Global_6537, &Global_7543, iScriptParam_0);
				iLocal_176 = 5;
				bLocal_177 = false;
				break;
			
			case 0x00000005:
				if (Function_70(&Global_6537, &Global_7543, iScriptParam_0))
				{
					iLocal_176 = 4;
					bLocal_177 = false;
				}
				else
				{
					bLocal_177 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_69(&(Global_29008[iScriptParam_0]), 16) && Function_68(Global_29155[iScriptParam_010]))
				{
					iLocal_176 = 6;
				}
				bLocal_177 = false;
				break;
			
			case 0x00000006:
				Function_67(0, &uLocal_179, -3670,093f, 8,523827f, 3488,652f);
				Function_66(0, &uLocal_179, -3668,473f, 8,477f, 3487,929f);
				Function_65(0, &uLocal_179, -3675,749f, 8,641f, 3472,471f);
				Function_64(0, &uLocal_179, -3673,7f, 8,2f, 3492,07f);
				Function_63(0, &uLocal_179, -3675,749f, 8,641f, 3472,471f);
				Function_61(0, &uLocal_179, -3670,093f, 8,523827f, 3488,652f);
				Function_60(0, &uLocal_179, bLocal_0);
				Function_67(1, &uLocal_179, -3691,454f, 9,528f, 3468,583f);
				Function_66(1, &uLocal_179, -3691,454f, 9,528f, 3468,583f);
				Function_65(1, &uLocal_179, -3691,454f, 9,528f, 3468,583f);
				Function_64(1, &uLocal_179, -3691,454f, 9,528f, 3468,583f);
				Function_63(1, &uLocal_179, -3691,454f, 9,528f, 3468,583f);
				Function_61(1, &uLocal_179, -3689,972f, 9,528f, 3475,234f);
				Function_60(1, &uLocal_179, bLocal_0);
				Function_67(2, &uLocal_179, -3674,631f, 8,589f, 3474,862f);
				Function_66(2, &uLocal_179, -3676.0f, 8,031f, 3504.0f);
				Function_65(2, &uLocal_179, -3674,631f, 8,589f, 3474,862f);
				Function_64(2, &uLocal_179, -3676.0f, 8,031f, 3504.0f);
				Function_63(2, &uLocal_179, -3674,631f, 8,589f, 3474,862f);
				Function_61(2, &uLocal_179, -3693,607f, 9,564f, 3478,512f);
				Function_60(2, &uLocal_179, bLocal_0);
				Function_67(3, &uLocal_179, -3689,972f, 9,528f, 3475,234f);
				Function_66(3, &uLocal_179, -3688,035f, 9,545f, 3486,639f);
				Function_65(3, &uLocal_179, -3674,998f, 8,59f, 3478,161f);
				Function_64(3, &uLocal_179, -3683,665f, 8,03f, 3501,79f);
				Function_63(3, &uLocal_179, -3674,998f, 8,59f, 3478,161f);
				Function_61(3, &uLocal_179, -3674,998f, 8,59f, 3478,161f);
				Function_60(3, &uLocal_179, bLocal_0);
				Function_67(4, &uLocal_179, -3696,777f, 9,535f, 3468,551f);
				Function_66(4, &uLocal_179, -3666,007f, 8,15f, 3467,476f);
				Function_65(4, &uLocal_179, -3676,992f, 8,352f, 3481,176f);
				Function_64(4, &uLocal_179, -3696,777f, 9,535f, 3468,551f);
				Function_63(4, &uLocal_179, -3676,992f, 8,352f, 3481,176f);
				Function_61(4, &uLocal_179, -3666,333f, 8,373f, 3486,487f);
				Function_60(4, &uLocal_179, bLocal_0);
				Function_67(5, &uLocal_179, -3678,17f, 8,6f, 3475,53f);
				Function_66(5, &uLocal_179, -3696,974f, 9,532f, 3480,718f);
				Function_65(5, &uLocal_179, -3696,974f, 9,532f, 3480,718f);
				Function_64(5, &uLocal_179, -3696,974f, 9,532f, 3480,718f);
				Function_63(5, &uLocal_179, -3678,17f, 8,6f, 3475,53f);
				Function_61(5, &uLocal_179, -3666,333f, 8,373f, 3486,487f);
				Function_60(5, &uLocal_179, bLocal_0);
				Function_55(&Global_6537, &Global_7543, &uLocal_179, Global_6289, iScriptParam_0);
				if (Function_69(&(Global_29008[iScriptParam_0]), 256) || !Function_54(2))
				{
					iLocal_333 = 1;
				}
				Function_53(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_2 + 636));
				Function_53(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_2 + 692));
				Function_73(&(Global_29008[iScriptParam_0]), 8);
				if (Function_69(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_52(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_176 = 10;
				}
				else
				{
					iLocal_176 = 7;
				}
				bLocal_177 = false;
				break;
			
			case 0x00000007:
				Function_51(iScriptParam_0);
				Function_45(iScriptParam_0);
				iLocal_176 = 8;
				bLocal_177 = false;
				break;
			
			case 0x00000008:
				if (Function_40(iScriptParam_0, &Global_6537, iLocal_333))
				{
					Function_36(StackVal, 0, 0,1f, 4, bLocal_0, 1);
					Function_32(2, 4294967295, 4294967295, 0, 3);
					Function_29(bLocal_0);
				}
				else
				{
					Function_36(StackVal, 1, 0,5f, 4, bLocal_0, 1);
					Function_28(64);
					Function_32(0, 8, 4, 6, 3);
					Function_29(bLocal_0);
				}
				Function_73(&(Global_29008[iScriptParam_0]), 512);
				iLocal_176 = 9;
				bLocal_177 = false;
				break;
			
			case 0x00000009:
				Function_26(bLocal_0, iScriptParam_0);
				Function_73(&(Global_29008[iScriptParam_0]), 4);
				Function_25("Finished Initializing BenedictPoint", 5.0f);
				iLocal_176 = 10;
				bLocal_177 = false;
				break;
			
			case 0x0000000A:
				Function_20(&Local_300);
				if (Function_69(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_176 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_177);
	}
	Function_11(&Global_6537, &Global_7543, iScriptParam_0, (iLocal_333 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_28(64);
	Function_52(&(Global_29008[iScriptParam_0]), 32);
	Function_52(&(Global_29008[iScriptParam_0]), 64);
	Function_52(&(Global_29008[iScriptParam_0]), 8);
	Function_52(&(Global_29008[iScriptParam_0]), 512);
	Function_52(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_178))
	{
		TERMINATE_SCRIPT(bLocal_178);
	}
	Function_25("Unloaded BenedictPoint", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x875 / 2165
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

void Function_2(int iParam0) //Position: 0x8AB / 2219
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x8CD / 2253
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x8E3 / 2275
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x8F9 / 2297
{
	Function_6(&Local_2 + 4);
	RELEASE_LAYOUT_REF(Local_2);
	return;
}

void Function_6(int iParam0) //Position: 0x90B / 2315
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

void Function_7(var uParam0, int iParam1) //Position: 0x931 / 2353
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

void Function_8(var uParam0, int iParam1) //Position: 0xA5F / 2655
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0xA79 / 2681
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0xA96 / 2710
{
	RELEASE_LAYOUT_REF(bLocal_0);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xAA1 / 2721
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_19())
	{
		return;
	}
	if (Function_69(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_18(iParam2), 12));
		Function_52(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_17(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_16(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_16(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_69(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	if (!Function_54(2) || Function_69(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2) && !Function_17(uParam0[iVar02], 4))
		{
			Function_12(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_17(uParam0[iVar02], 2) && !Function_17(uParam0[iVar02], 4))
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
			Function_73(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xC8C / 3212
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
		if (!Function_17(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_17(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xDDB / 3547
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

int Function_14(int iParam0) //Position: 0xE06 / 3590
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

void Function_15(var uParam0, int iParam1) //Position: 0xE3A / 3642
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xE49 / 3657
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(var uParam0, int iParam1) //Position: 0xE60 / 3680
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_18(int iParam0) //Position: 0xE7C / 3708
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

bool Function_19() //Position: 0x132A / 4906
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_20(int iParam0) //Position: 0x1333 / 4915
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (*iParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*iParam0)[bVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*iParam0)[bVar04], "UseCase1")))
			{
				Function_24(iParam0[bVar04] + 8, 64);
				if (Function_23(StackVal, 2))
				{
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_23(StackVal, 4), "UseCase1")))
				{
					Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_23(StackVal, 16))
				{
					Function_21(iParam0[bVar04] + 8, 64);
				}
				else if (Function_23(StackVal, 32))
				{
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_21(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_21(iParam0[bVar04] + 8, 64);
				}
				if (Function_23(StackVal, 2))
				{
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_23(StackVal, 4))
				{
					Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
			}
			else
			{
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[bVar04])
					{
						if (Function_23(StackVal, 64))
						{
							Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_23(Function_23(StackVal, 64), 16))
					{
						Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_21(iParam0[bVar04] + 8, 64);
						if (Function_23(StackVal, 1))
						{
							Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_23(Function_23(StackVal, 64), 16))
				{
					Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_21(iParam0[bVar04] + 8, 64);
					if (Function_23(StackVal, 1))
					{
						Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_22(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_23(StackVal, 64))
					{
						if (Function_23(StackVal, 32))
						{
							Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_23(StackVal, 8))
					{
						Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_21(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_23(StackVal, 64))
				{
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_23(StackVal, 8))
				{
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_21(iParam0[bVar04] + 8, 64);
					Function_22(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_23(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_21(var uParam0, bool bParam1) //Position: 0x1AC3 / 6851
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_22(vector3 vParam0) //Position: 0x1AD6 / 6870
{
	if (Function_23(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

bool Function_23(bool bParam0, int iParam1) //Position: 0x1AFD / 6909
{
	return (bParam0 && iParam1) == 0;
}

void Function_24(var uParam0, int iParam1) //Position: 0x1B0A / 6922
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_25(bool bParam0, float fParam1) //Position: 0x1B19 / 6937
{
	if (!Function_54(128))
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

void Function_26(bool bParam0, bool bParam1) //Position: 0x1B57 / 6999
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
		Function_27(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_19())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x1C51 / 7249
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_28(int iParam0) //Position: 0x1C5E / 7262
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_29(bool bParam0) //Position: 0x1C71 / 7281
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_31(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_30(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_30(var uParam0) //Position: 0x1D5C / 7516
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_31() //Position: 0x1D79 / 7545
{
	int iVar0;
	
	return iVar0;
}

void Function_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1D81 / 7553
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
	Global_26361.f_8 = iParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = iParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_33();
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

void Function_33() //Position: 0x1E65 / 7781
{
	int iVar0;
	
	Global_26960 = Function_34(StackVal);
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

int Function_34(int iParam0) //Position: 0x1EB3 / 7859
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_35(bool bParam0) //Position: 0x1ECB / 7883
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_36(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1EE0 / 7904
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
		Function_39();
	}
	if (bParam5)
	{
		Function_37(1048576);
	}
}

void Function_37(int iParam0) //Position: 0x1FF3 / 8179
{
	Function_38(&Global_28842, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x2001 / 8193
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x201C / 8220
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_37(16384);
	}
	return;
}

bool Function_40(int iParam0, var uParam1, bool bParam2) //Position: 0x2038 / 8248
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_69(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_41(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_19())
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

int Function_41(var uParam0, bool bParam1) //Position: 0x20F8 / 8440
{
	int iVar0;
	
	iVar0 = Function_43(uParam0);
	if (!Function_42(iVar0))
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

bool Function_42(int iParam0) //Position: 0x2135 / 8501
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_43(int iParam0) //Position: 0x214C / 8524
{
	if (!Function_44(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_44(int iParam0) //Position: 0x2166 / 8550
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_45(int iParam0) //Position: 0x217C / 8572
{
	Function_47(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_46(&Global_17483[3375] + 120, 2, 0);
	return;
}

void Function_46(int iParam0, int iParam1, float fParam2) //Position: 0x21DF / 8671
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = fParam2;
	return;
}

void Function_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x21F3 / 8691
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_48(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, uParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_48(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x2235 / 8757
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

int Function_49(int iParam0, int iParam1) //Position: 0x25C5 / 9669
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_50(int iParam0) //Position: 0x25E6 / 9702
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_51(int iParam0) //Position: 0x25FC / 9724
{
	Function_47(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_46(&Global_17483[3675] + 120, 1, 0);
	return;
}

void Function_52(var uParam0, int iParam1) //Position: 0x2663 / 9827
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_53(var uParam0, bool bParam1) //Position: 0x267A / 9850
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_54(int iParam0) //Position: 0x26C2 / 9922
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x26DE / 9950
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_54(2))
	{
		return;
	}
	if (Function_69(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_56(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_52(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_73(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_56(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x2790 / 10128
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_69(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(uParam0, 2))
	{
		return 1;
	}
	if (Function_17(uParam0, 4))
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
		uParam1->f_8 = Function_59(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_58(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(uParam0, 4);
	}
	Function_57(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_57(bool bParam0, int iParam1) //Position: 0x28FB / 10491
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_58(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_58(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_58(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_58(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_58(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_58(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

bool Function_58(vector3 vParam0) //Position: 0x2A37 / 10807
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_59(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2A4F / 10831
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

void Function_60(int iParam0, var uParam1, bool bParam2) //Position: 0x2B68 / 11112
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

void Function_61(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2BC3 / 11203
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_62(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_62(vector3 vParam0, vector3 vParam3) //Position: 0x2C29 / 11305
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_63(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2C56 / 11350
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_62(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_64(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2CBE / 11454
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_62(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_65(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D28 / 11560
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_62(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_66(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2D8D / 11661
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_62(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_67(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2DF5 / 11765
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_62(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_68(int iParam0) //Position: 0x2E58 / 11864
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_69(&(Global_29008[iParam0]), 4);
}

bool Function_69(var uParam0, int iParam1) //Position: 0x2E74 / 11892
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_70(var uParam0, var uParam1, int iParam2) //Position: 0x2E90 / 11920
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_19())
	{
		return 1;
	}
	if (Function_69(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_18(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
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

void Function_71(var uParam0, var uParam1, bool bParam2) //Position: 0x2F5C / 12124
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_19())
	{
		return;
	}
	if (!Function_69(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_18(bParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_18(bParam2), 12));
			Function_73(&(Global_29008[bParam2]), 0x40000000);
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

struct<16> Function_72(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3032 / 12338
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_24(&Var0 + 8, 1);
	}
	else
	{
		Function_21(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_24(&Var0 + 8, 2);
	}
	else
	{
		Function_21(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_24(&Var0 + 8, 4);
	}
	else
	{
		Function_21(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_24(&Var0 + 8, 8);
	}
	else
	{
		Function_21(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_24(&Var0 + 8, 16);
	}
	else
	{
		Function_21(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_24(&Var0 + 8, 32);
	}
	else
	{
		Function_21(&Var0 + 8, 32);
	}
	Function_21(&Var0 + 8, 64);
	Function_21(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

void Function_73(var uParam0, int iParam1) //Position: 0x30FB / 12539
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_74() //Position: 0x310A / 12554
{
	bool bVar0;
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
	
	Function_82(3, 3);
	bVar0 = bVar0;
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_80(&Local_2 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	if (!Function_75(&Local_2 + 4))
	{
		return 0;
	}
	Local_2 = FIND_NAMED_LAYOUT("BenedictPoint_layout");
	if (!IS_LAYOUTREF_VALID(Local_2))
	{
		Local_2 = CREATE_LAYOUT("BenedictPoint_layout");
	}
	Local_2.f_356 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", Local_2, 8, 0);
	*(&Local_2 + 360[06]) = { -3666,808f, 8,477426f, 3492,548f };
	*(&Local_2 + 360[06] + 12) = { 0.0f, -73,62263f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_2, "sweep1_1", -3666,808f, 8,477426f, 3492,548f, 0.0f, -73,62263f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_2.f_356);
	*(&Local_2 + 360[16]) = { -3670,099f, 8,477426f, 3491,183f };
	*(&Local_2 + 360[16] + 12) = { 0.0f, -85,37915f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_2, "sweep2_1", -3670,099f, 8,477426f, 3491,183f, 0.0f, -85,37915f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_2.f_356);
	*(&Local_2 + 360[26]) = { -3668,194f, 8,477426f, 3488,091f };
	*(&Local_2 + 360[26] + 12) = { 0.0f, -50,30165f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_2, "sweep3_1", -3668,194f, 8,477426f, 3488,091f, 0.0f, -50,30165f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_2.f_356);
	*(&Local_2 + 360[36]) = { -3667,732f, 8,477426f, 3490,5f };
	*(&Local_2 + 360[36] + 12) = { 0.0f, -5,801308f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_2, "sweep4_1", -3667,732f, 8,477426f, 3490,5f, 0.0f, -5,801308f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_2.f_356);
	*(&Local_2 + 360[46]) = { -3667,147f, 8,477426f, 3491,735f };
	*(&Local_2 + 360[46] + 12) = { 0.0f, -74,1232f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_2, "done_1", -3667,147f, 8,477426f, 3491,735f, 0.0f, -74,1232f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_2.f_356);
	Local_2.f_484 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", Local_2, 8, 0);
	*(&Local_2 + 488[06]) = { -3691,083f, 9,521634f, 3468,277f };
	*(&Local_2 + 488[06] + 12) = { 0.0f, 19,07239f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_2, "flag1_2", -3691,083f, 9,521634f, 3468,277f, 0.0f, 19,07239f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_2.f_484);
	*(&Local_2 + 488[16]) = { -3687,382f, 9,521634f, 3470,04f };
	*(&Local_2 + 488[16] + 12) = { 0.0f, -74,1232f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_2, "done_2", -3687,382f, 9,521634f, 3470,04f, 0.0f, -74,1232f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_2.f_484);
	*(&Local_2 + 488[26]) = { -3687,797f, 9,521634f, 3468,277f };
	*(&Local_2 + 488[26] + 12) = { 0.0f, 19,07239f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_2, "flag2_2", -3687,797f, 9,521634f, 3468,277f, 0.0f, 19,07239f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_2.f_484);
	*(&Local_2 + 488[36]) = { -3687,797f, 9,521634f, 3475,951f };
	*(&Local_2 + 488[36] + 12) = { 0.0f, 19,07239f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_2, "flag3_2", -3687,797f, 9,521634f, 3475,951f, 0.0f, 19,07239f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_2.f_484);
	*(&Local_2 + 488[46]) = { -3692,145f, 9,521634f, 3475,951f };
	*(&Local_2 + 488[46] + 12) = { 0.0f, 19,07239f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_2, "flag4_2", -3692,145f, 9,521634f, 3475,951f, 0.0f, 19,07239f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_2.f_484);
	*(&Local_2 + 488[56]) = { -3692,145f, 9,521634f, 3471,949f };
	*(&Local_2 + 488[56] + 12) = { 0.0f, 19,07239f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_2, "flag5_2", -3692,145f, 9,521634f, 3471,949f, 0.0f, 19,07239f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_2.f_484);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -3670,226f, 8,516318f, 3488,198f, 0.0f, 106,6142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3696,777f, 9,535331f, 3468,551f, 0.0f, 22,68234f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_docks2", "nsit_docks", -3683,708f, 9,577239f, 3475,908f, 0.0f, -93,65693f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sleeping_wall_scripted", "sleeping_wall_scripted", -3693,607f, 9,563571f, 3478,512f, 0.0f, 538,7775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sleeping_wall_scripted2", "sleeping_wall_scripted", -3689,215f, 9,552402f, 3465,813f, 0.0f, 360,8754f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sleeping_wall_scripted3", "sleeping_wall_scripted", -3666,333f, 8,3728f, 3486,487f, 0.0f, 281,834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "nlean_rail", "nlean_rail", -3685,471f, 9,521064f, 3487,216f, 0.0f, -178,2055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "lean_fence_L_talking", "lean_fence_L_talking", -3684,198f, 9,520039f, 3487,077f, 0.0f, -87,96023f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "repair_kneel1", "repair_kneel", -3680,525f, 8,067427f, 3502,064f, 0.0f, -175,5368f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -3692,695f, 9,550956f, 3474,934f, 0.0f, 130,1105f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -3686,893f, 9,588552f, 3474,869f, 0.0f, 90,52192f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "repair_kneel2", "repair_kneel", -3666,768f, 8,283511f, 3464,059f, 0.0f, 297,7963f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand", "smoking_stand", -3674,544f, 8,587575f, 3477,003f, 0.0f, 110,3968f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand1", "smoking_stand", -3676,594f, 8,019583f, 3507,406f, 0.0f, 36,98373f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3668,834f, 8,024294f, 3496,432f, 0.0f, -162,1018f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -3666,223f, 8,458661f, 3488,424f, 0.0f, -75,87344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -3696,775f, 9,571815f, 3485,405f, 0.0f, -236,6689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "lean_fence_L_talking1", "lean_fence_L", -3694,467f, 9,562268f, 3487,061f, 0.0f, -178,8053f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_NearWall_Shoulder_R1", "rand_idle_stand", -3685,579f, 9,564098f, 3478,074f, 0.0f, 219,5181f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_fence_low", "sit_fence_low", -3696,599f, 9,526659f, 3464,855f, 0.0f, 1,202826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -3671,947f, 8,287857f, 3486,226f, 0.0f, 11,72507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "repair_kneel3", "repair_kneel", -3666,007f, 8,149973f, 3467,476f, 0.0f, -92,92464f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -3685,39f, 9,534906f, 3473,052f, 0.0f, -89,97591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "lean_fence_L_talking4", "lean_fence_L_talking", -3684,172f, 9,54609f, 3464,63f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_guntricks_e_any", "stand_guntricks_e_any", -3684,504f, 9,567563f, 3469,88f, 0.0f, -150,6214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "nsit_docks", "nsit_docks", -3683,65f, 9,577239f, 3473,79f, 0.0f, -87,96419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_ground_smoke2", "sit_ground_smoke", -3685,477f, 9,550886f, 3471,205f, 0.0f, -93,87474f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Rand_Idle_NearWall_Shoulder_L1", "Rand_Idle_NearWall_Shoulder_L", -3685,875f, 9,528695f, 3467,496f, 0.0f, -89,4074f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_pocketwatch_e_any2", "stand_pocketwatch_e_any", -3696,548f, 9,536649f, 3465,979f, 0.0f, 100,4752f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_pocketwatch_e_any3", "stand_pocketwatch_e_any", -3696,932f, 9,543398f, 3482,327f, 0.0f, 56,8656f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_yawning_n_any", "stand_yawning_n_any", -3672,394f, 8,405907f, 3489,415f, 0.0f, 83,38914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_yawning_n_any1", "stand_yawning_n_any", -3676,992f, 8,351975f, 3481,176f, 0.0f, -32,10366f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_yawning_n_any2", "stand_yawning_n_any", -3691,052f, 9,531813f, 3480,779f, 0.0f, 129,0117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand2", "smoking_stand", -3696,169f, 9,533411f, 3477,558f, 0.0f, 32,7062f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_2.f_636 = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), Local_2, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_holy_water", "stand_holy_water", -3661,636f, 8,206227f, 3469,083f, 0.0f, -93,79108f, 0.0f), Local_2.f_636);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_2.f_636)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_2, "Sit_Ground_Drink", "Sit_Ground_Drink", -3660,316f, 8,247632f, 3469,477f, 0.0f, -79,04883f, 0.0f), Local_2.f_636);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_2.f_636)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_camp_coffee_drink", "sit_camp_coffee_drink", -3670,397f, 8,523827f, 3488,725f, 0.0f, 106,6502f, 0.0f), Local_2.f_636);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_2.f_636)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3674,274f, 8,588605f, 3475,256f, 0.0f, 15,23718f, 0.0f), Local_2.f_636);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_2.f_636)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Multistage_sweeping1", "Multistage_sweeping", -3667,077f, 8,490922f, 3491,6f, 0.0f, 108,2344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3678,084f, 8,394304f, 3479,33f, 0.0f, 119,0111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_2.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Pee", "Pee", -3675,694f, 8,770426f, 3462,447f, 0.0f, -42,20353f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_hammer_wall", "stand_hammer_wall", -3686,408f, 8,031368f, 3508,856f, 0.0f, 6,493814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_2.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_sellPaper", "stand_sellPaper", -3696,019f, 9,532f, 3480,707f, 0.0f, -449,3156f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_2, "Multistage_sweeping2", "Multistage_sweeping", -3687,443f, 9,521634f, 3470,043f, 0.0f, -267,6288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_2.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_2, "look_out_window_R", "look_out_window_R", -3679,545f, 8,586421f, 3477,852f, 0.0f, 155,4781f, 0.0f);
	Local_2.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_no_table", "sit_no_table", -3676,151f, 8,585974f, 3470,809f, 0.0f, 184,1326f, 0.0f);
	Local_2.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_2, "sit_no_table1", "sit_no_table", -3677,365f, 8,585974f, 3470,683f, 0.0f, 186,3853f, 0.0f);
	Local_2.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_2, "rand_idle_stand", "rand_idle_stand", -3692,395f, 9,438922f, 3486,189f, 0.0f, 82,55618f, 0.0f);
	Local_2.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_2, "rand_idle_stand1", "rand_idle_stand", -3691,972f, 9,438922f, 3485,229f, 0.0f, 97,85551f, 0.0f);
	Local_2.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_2, "rand_idle_stand2", "rand_idle_stand", -3692,593f, 9,438922f, 3484,015f, 0.0f, 133,547f, 0.0f);
	Local_2.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand3", "smoking_stand", -3690,956f, 9,438922f, 3485,836f, 0.0f, 86,63036f, 0.0f);
	Local_2.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand4", "smoking_stand", -3695,977f, 9,438922f, 3472,845f, 0.0f, 18,18242f, 0.0f);
	Local_2.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_2, "smoking_stand5", "smoking_stand", -3696,807f, 9,438922f, 3474,625f, 0.0f, 0,08502066f, 0.0f);
	Local_2.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_2, "rand_idle_stand3", "rand_idle_stand", -3695,585f, 9,438922f, 3474,251f, 0.0f, 26,15227f, 0.0f);
	Local_2.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_2, "rand_idle_stand4", "rand_idle_stand", -3695,915f, 9,438922f, 3475,782f, 0.0f, 6,088531f, 0.0f);
	Local_2.f_692 = CREATE_OBJECTSET_IN_LAYOUT(Function_31(), Local_2, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_announce1", "stand_announce", -3695,191f, 9,519777f, 3485,825f, 0.0f, 272,6232f, 0.0f), Local_2.f_692);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_2.f_692)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_2, "stand_announce", "stand_announce", -3696,828f, 9,519777f, 3470,569f, 0.0f, 194,7009f, 0.0f), Local_2.f_692);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_2.f_692)), 0);
	return 1;
}

bool Function_75(int iParam0) //Position: 0x507C / 20604
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_79();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_78(iParam0[iVar03], 8);
		}
		else if (Function_77())
		{
			iVar1 = 1;
			Function_78(iParam0[iVar03], 8);
		}
		Function_78(iParam0[iVar03], 16);
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
				Function_78(iParam0[iVar03], 1);
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
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
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
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
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
	Function_76();
	return 1;
}

void Function_76() //Position: 0x53F7 / 21495
{
	if (!Function_54(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_77() //Position: 0x5437 / 21559
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

void Function_78(var uParam0, int iParam1) //Position: 0x5462 / 21602
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_79() //Position: 0x5473 / 21619
{
	if (!Function_54(128))
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

var Function_80(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x54B5 / 21685
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_81(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_78(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_81(var uParam0, int iParam1, int iParam2) //Position: 0x54ED / 21741
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_78(uParam0[iVar03], 4);
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

void Function_82(int iParam0, int iParam1) //Position: 0x55B1 / 21937
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

struct<8> Function_83() //Position: 0x55FA / 22010
{
	var uVar0;
	
	Function_82(3, 3);
	uVar0 = uVar0;
	bLocal_0 = FIND_NAMED_LAYOUT("BenedictPoint_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_0))
	{
		bLocal_0 = CREATE_LAYOUT("BenedictPoint_layout");
	}
}

void Function_84(bool bParam0, var uParam1) //Position: 0x5751 / 22353
{
	if (!Function_54(128))
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

