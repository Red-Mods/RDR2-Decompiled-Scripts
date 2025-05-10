//Decompiled with MagicRDR v1.0
//Function Count : 38
//Statics Count : 50
//Natives Count : 97
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	int iLocal_24 = 0;
	bool bLocal_25 = true;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
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
	bool bLocal_47 = false;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_14 = 0;
	iLocal_15 = 0;
	bLocal_21 = "";
	bLocal_23 = "";
	iLocal_24 = 0;
	bLocal_47 = true;
	iLocal_48 = 0;
	iLocal_49 = 0;
	while (!IS_EXITFLAG_SET())
	{
		if (DECOR_CHECK_EXIST(Global_34573, "TW_BlipCaptive"))
		{
			DECOR_REMOVE(Global_34573, "TW_BlipCaptive");
			if (IS_ACTOR_VALID(bLocal_21))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_21)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_21, 330, 0, 2, 0);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_21))
		{
			if (!IS_ACTOR_ALIVE(bLocal_21) && !iLocal_24 != 9)
			{
				if (!iLocal_49)
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_37("TWR_Obj_DaughterRed", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_49 = 1;
				}
				if (Function_36(bLocal_21, Global_34573))
				{
					Function_35();
					Function_18(Function_30(0, Global_30640[2], 3));
					Function_17("TWR_Help_PlayerKilledCaptive", 0, -1.0f, 1, 0, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bLocal_47 = false;
				}
			}
		}
		if (bLocal_47)
		{
			switch (iLocal_24)
			{
				case 0x00000000:
					bLocal_23 = CREATE_LAYOUT("TWR_Escort_Layout");
					Function_16(&bLocal_25, 53, 3, 1);
					Function_16(&bLocal_25, 976, 3, 1);
					Function_14(&bLocal_25, "action_areas", 10, 0);
					Function_14(&bLocal_25, "custom/AA_twin_rocks_hostage", 8, 0);
					Function_14(&bLocal_25, "AA_twin_rocks_hostage", 5, 0);
					Function_14(&bLocal_25, "twin_rocks_hostage", 1, 0);
					Function_14(&bLocal_25, "twin_rocks_dad", 1, 0);
					iLocal_24 = 1;
					break;
				
				case 0x00000001:
					if (Function_8(&bLocal_25))
					{
						Function_7(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_aDaughterSpawn"));
						Function_6(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_aDaughterSpawn"));
						bLocal_21 = CREATE_ACTOR_IN_LAYOUT(bLocal_23, "TWR_Captive", 53, Function_7(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_aDaughterSpawn")), Function_6(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_aDaughterSpawn")));
						SET_ACTOR_FACTION(bLocal_21, 20);
						SET_ACTOR_ONE_SHOT_DEATH(bLocal_21, true);
						MEMORY_CONSIDER_AS(bLocal_21, Global_34573, false);
						SET_ACTOR_CAN_BE_TARGETED(bLocal_21, false);
						SET_ACTOR_CAN_BE_SOFTLOCKED(bLocal_21, 0);
						SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_21, 0);
						SET_ACTOR_CAN_BE_AIMASSISTED(bLocal_21, 0);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_21, 0);
						DECOR_SET_BOOL(bLocal_21, "CanBeLasso", false);
						DECOR_SET_BOOL(bLocal_21, "nNoLooting", true);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_21, 12, 0);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bLocal_21, 13, 0);
						UNK_0x99AFD2D1(bLocal_21, 1, 0);
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(bLocal_21, 0);
						AI_DISABLE_PERCEPTION(bLocal_21);
						Function_7(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGringo"));
						Function_6(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGringo"));
						bLocal_22 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_23, "hostageGringo", "twin_rocks_hostage", Function_7(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGringo")), Function_6(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGringo"))));
						TASK_STAND_STILL(bLocal_21, -1.0f, 0, 0);
						iLocal_24 = 2;
					}
					break;
				
				case 0x00000002:
					if (!iLocal_48)
					{
						if (IS_ACTOR_VALID(bLocal_21))
						{
							if (IS_ACTOR_ALIVE(bLocal_21))
							{
								if (DECOR_CHECK_EXIST(Global_34573, "TaskGirlNow"))
								{
									if (IS_GRINGO_VALID(bLocal_22))
									{
										TASK_PRIORITY_SET(bLocal_21, 1);
										SNAP_ACTOR_TO_GRINGO(bLocal_21, GET_OBJECT_FROM_GRINGO(bLocal_22), "GirlUse", 1, 0, 0);
										TASK_USE_GRINGO(bLocal_21, bLocal_22, "GirlUse", 4294967295, 1);
										iLocal_48 = 1;
									}
									else
									{
										LOG_ERROR("HOSTAGE GRINGO IS INVALID");
									}
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(Global_34573, "AllGuysDead") && IS_ACTOR_ALIVE(bLocal_21))
					{
						SET_ACTION_NODE_FOR_ACTOR(bLocal_21, "AA_twin_rocks_hostage/Girl/Girl_mid");
						iLocal_24 = 3;
					}
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000009:
					break;
				}
		}
		WAIT(false);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x451 / 1105
{
	Function_2(&bLocal_25);
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_21)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_21));
	}
	if (IS_LAYOUTREF_VALID(bLocal_23))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_23);
		RELEASE_LAYOUT_REF(bLocal_23);
	}
	RELEASE_ACTOR(bLocal_21);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x489 / 1161
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

void Function_3(var uParam0, int iParam1) //Position: 0x4AF / 1199
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

void Function_4(var uParam0, int iParam1) //Position: 0x5DD / 1501
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x5F7 / 1527
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_6(bool bParam0) //Position: 0x614 / 1556
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

vector3 Function_7(bool bParam0) //Position: 0x63B / 1595
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

bool Function_8(int iParam0) //Position: 0x662 / 1634
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_13();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_12(iParam0[iVar03], 8);
		}
		else if (Function_11())
		{
			iVar1 = 1;
			Function_12(iParam0[iVar03], 8);
		}
		Function_12(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_12(iParam0[iVar03], 1);
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
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_12(iParam0[iVar03], 2);
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
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_12(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_12(iParam0[iVar03], 2);
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
	Function_9();
	return 1;
}

void Function_9() //Position: 0x9DD / 2525
{
	if (!Function_10(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_10(int iParam0) //Position: 0xA1D / 2589
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_11() //Position: 0xA39 / 2617
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

void Function_12(var uParam0, int iParam1) //Position: 0xA64 / 2660
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_13() //Position: 0xA75 / 2677
{
	if (!Function_10(128))
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

var Function_14(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xAB7 / 2743
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_15(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_12(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_15(var uParam0, int iParam1, int iParam2) //Position: 0xAEF / 2799
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_12(uParam0[iVar03], 4);
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

var Function_16(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xBB3 / 2995
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
			Function_12(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_12(uParam0[iVar03], 8);
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

int Function_17(char* cParam0, var uParam1, var uParam2, var uParam3, char* cParam4, var uParam5) //Position: 0xC83 / 3203
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

void Function_18(int iParam0) //Position: 0xD02 / 3330
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	iVar0 = Function_27(iParam0);
	if (StackVal == 2)
	{
		Function_23("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_19(int iParam0) //Position: 0xDA8 / 3496
{
	char* cVar0[16];
	
	if (!Function_20())
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

bool Function_20() //Position: 0xDE7 / 3559
{
	if (Function_21(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_21(var uParam0, int iParam1) //Position: 0xE02 / 3586
{
	return (uParam0 && iParam1) == 0;
}

struct<24> Function_22(char* cParam0) //Position: 0xE0F / 3599
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

void Function_23(char* cParam0, bool bParam1) //Position: 0x1065 / 4197
{
	struct<4> Var0;
	
	if (!Function_28(bParam1))
	{
		return;
	}
	switch (Function_27(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_24(Function_25(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_27(bParam1), Function_25(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x1189 / 4489
{
	char* cVar0[16];
	
	if (!Function_20())
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

var Function_25(int iParam0) //Position: 0x11C3 / 4547
{
	if (!Function_26(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_26(int iParam0) //Position: 0x11E3 / 4579
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_27(bool bParam0) //Position: 0x11FA / 4602
{
	if (!Function_26(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_28(int iParam0) //Position: 0x1215 / 4629
{
	if (!Function_26(iParam0))
	{
		return 0;
	}
	if (!Function_29(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_29(int iParam0) //Position: 0x1239 / 4665
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_30(bool bParam0, bool bParam1, bool bParam2) //Position: 0x124E / 4686
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_34(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_31(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_31(bParam0, bParam1, bParam2, 4294967295);
}

int Function_31(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12AC / 4780
{
	var uVar0;
	
	if (!Function_33(bParam2))
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
	uVar0 = Function_34(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_32(uVar0);
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

int Function_32(int iParam0) //Position: 0x1401 / 5121
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

bool Function_33(int iParam0) //Position: 0x143F / 5183
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_34(int iParam0, int iParam1, bool bParam2) //Position: 0x1454 / 5204
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_35() //Position: 0x1474 / 5236
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

bool Function_36(bool bParam0, bool bParam1) //Position: 0x14DD / 5341
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

void Function_37(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x150E / 5390
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
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

