//Decompiled with MagicRDR v1.0
//Function Count : 38
//Statics Count : 67
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
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 7;
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
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_18 = 0;
	iLocal_19 = 0;
	uLocal_27 = "";
	uLocal_31 = "";
	iLocal_33 = 0;
	bLocal_64 = true;
	iLocal_65 = 0;
	iLocal_66 = 0;
	while (!IS_EXITFLAG_SET())
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "TW_BlipCaptive"))
		{
			DECOR_REMOVE(&Global_54076, "TW_BlipCaptive");
			if (IS_ACTOR_VALID(&uLocal_27))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_27)))
				{
					ADD_BLIP_FOR_ACTOR(&uLocal_27, 330, 0, 2, 0);
				}
			}
		}
		if (IS_ACTOR_VALID(&uLocal_27))
		{
			if (!IS_ACTOR_ALIVE(&uLocal_27) && !iLocal_33 != 9)
			{
				if (!iLocal_66)
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_37("TWR_Obj_DaughterRed", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_66 = 1;
				}
				if (Function_36(&uLocal_27, &Global_54076))
				{
					Function_35();
					Function_18(Function_30(0, Global_46760[2], 3));
					Function_17("TWR_Help_PlayerKilledCaptive", 0, -1.0f, 1, 0, 0);
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bLocal_64 = false;
				}
			}
		}
		if (bLocal_64)
		{
			switch (iLocal_33)
			{
				case 0x00000000:
					uLocal_31 = CREATE_LAYOUT("TWR_Escort_Layout");
					Function_16(&uLocal_34, 53, 3, 1);
					Function_16(&uLocal_34, 976, 3, 1);
					Function_14(&uLocal_34, "action_areas", 10, 0);
					Function_14(&uLocal_34, "custom/AA_twin_rocks_hostage", 8, 0);
					Function_14(&uLocal_34, "AA_twin_rocks_hostage", 5, 0);
					Function_14(&uLocal_34, "twin_rocks_hostage", 1, 0);
					Function_14(&uLocal_34, "twin_rocks_dad", 1, 0);
					iLocal_33 = 1;
					break;
				
				case 0x00000001:
					if (Function_8(&uLocal_34))
					{
						Function_7(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_aDaughterSpawn"));
						Function_6(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_aDaughterSpawn"));
						uLocal_27 = CREATE_ACTOR_IN_LAYOUT(&uLocal_31, "TWR_Captive", 53, Function_7(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_aDaughterSpawn")), Function_6(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_aDaughterSpawn")));
						SET_ACTOR_FACTION(&uLocal_27, 20);
						SET_ACTOR_ONE_SHOT_DEATH(&uLocal_27, true);
						MEMORY_CONSIDER_AS(&uLocal_27, &Global_54076, false);
						SET_ACTOR_CAN_BE_TARGETED(&uLocal_27, false);
						SET_ACTOR_CAN_BE_SOFTLOCKED(&uLocal_27, 0);
						SET_ACTOR_CAN_BE_HARDLOCKED(&uLocal_27, 0);
						SET_ACTOR_CAN_BE_AIMASSISTED(&uLocal_27, 0);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uLocal_27, false);
						DECOR_SET_BOOL(&uLocal_27, "CanBeLasso", false);
						DECOR_SET_BOOL(&uLocal_27, "nNoLooting", true);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uLocal_27, 12, 0);
						AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uLocal_27, 13, 0);
						UNK_0x99AFD2D1(&uLocal_27, 1, 0);
						AI_SPEECH_SET_ALLOW_FOR_ACTOR(&uLocal_27, 0);
						AI_DISABLE_PERCEPTION(&uLocal_27);
						Function_7(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGringo"));
						Function_6(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGringo"));
						uLocal_29 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&uLocal_31, "hostageGringo", "twin_rocks_hostage", Function_7(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGringo")), Function_6(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGringo"))));
						TASK_STAND_STILL(&uLocal_27, -1.0f, 0, 0);
						iLocal_33 = 2;
					}
					break;
				
				case 0x00000002:
					if (!iLocal_65)
					{
						if (IS_ACTOR_VALID(&uLocal_27))
						{
							if (IS_ACTOR_ALIVE(&uLocal_27))
							{
								if (DECOR_CHECK_EXIST(&Global_54076, "TaskGirlNow"))
								{
									if (IS_GRINGO_VALID(&uLocal_29))
									{
										TASK_PRIORITY_SET(&uLocal_27, true);
										SNAP_ACTOR_TO_GRINGO(&uLocal_27, GET_OBJECT_FROM_GRINGO(&uLocal_29), "GirlUse", true, 0, 0);
										TASK_USE_GRINGO(&uLocal_27, &uLocal_29, "GirlUse", 4294967295, 1);
										iLocal_65 = 1;
									}
									else
									{
										LOG_ERROR("HOSTAGE GRINGO IS INVALID");
									}
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(&Global_54076, "AllGuysDead") && IS_ACTOR_ALIVE(&uLocal_27))
					{
						SET_ACTION_NODE_FOR_ACTOR(&uLocal_27, "AA_twin_rocks_hostage/Girl/Girl_mid");
						iLocal_33 = 3;
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

void Function_1() //Position: 0x482 / 1154
{
	Function_2(&uLocal_34);
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uLocal_27)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uLocal_27));
	}
	if (IS_LAYOUTREF_VALID(&uLocal_31))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_31);
		RELEASE_LAYOUT_REF(&uLocal_31);
	}
	RELEASE_ACTOR(&uLocal_27);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x4C0 / 1216
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x4E8 / 1256
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x633 / 1587
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x650 / 1616
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_6(bool bParam0) //Position: 0x66E / 1646
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_7(bool bParam0) //Position: 0x697 / 1687
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_8(struct<2>[] Param0) //Position: 0x6C0 / 1728
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_13();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_12(&(Param0[iVar02]), 8);
		}
		else if (Function_11())
		{
			iVar1 = 1;
			Function_12(&(Param0[iVar02]), 8);
		}
		Function_12(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_5(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_12(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_12(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_12(&(Param0[iVar02]), 2);
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

void Function_9() //Position: 0xA82 / 2690
{
	if (!Function_10(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_10(int iParam0) //Position: 0xAC2 / 2754
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_11() //Position: 0xADE / 2782
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_12(struct<13> Param0) //Position: 0xB0C / 2828
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_13() //Position: 0xB1F / 2847
{
	if (!Function_10(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

var Function_14(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB61 / 2913
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_15(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_12(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_15(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB9F / 2975
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_12(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_16(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xC6E / 3182
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_12(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_12(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_17(char* cParam0) //Position: 0xD4A / 3402
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			(&Global_99485[iVar019] + 64) = &uParam1;
			Global_99485[iVar019].f_72 = uParam2;
			Global_99485[iVar019].f_76 = uParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_18(int iParam0) //Position: 0xDD7 / 3543
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
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_19(int iParam0) //Position: 0xE7D / 3709
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

bool Function_20() //Position: 0xEBC / 3772
{
	if (Function_21(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_21(var uParam0, int iParam1) //Position: 0xED7 / 3799
{
	return (uParam0 && iParam1) == 0;
}

struct<24> Function_22(char* cParam0) //Position: 0xEE4 / 3812
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

void Function_23(var uParam0, bool bParam1) //Position: 0x113A / 4410
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
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_27(bParam1), Function_25(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_27(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x1264 / 4708
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

var Function_25(int iParam0) //Position: 0x129E / 4766
{
	if (!Function_26(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_26(int iParam0) //Position: 0x12BE / 4798
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_27(bool bParam0) //Position: 0x12D5 / 4821
{
	if (!Function_26(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_28(int iParam0) //Position: 0x12F0 / 4848
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

bool Function_29(int iParam0) //Position: 0x1314 / 4884
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_30(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1329 / 4905
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_34(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_31(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_31(bParam0, bParam1, bParam2, 4294967295);
}

int Function_31(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1387 / 4999
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_32(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_32(int iParam0) //Position: 0x14EB / 5355
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_33(int iParam0) //Position: 0x1529 / 5417
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_34(int iParam0, int iParam1, bool bParam2) //Position: 0x153E / 5438
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_35() //Position: 0x155E / 5470
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		Global_99485[iVar019].f_76 = 0;
		strcpy(&Global_99485[iVar019] + 84, "", 32);
		Global_99485[iVar019].f_72 = 1.0f;
		(&Global_99485[iVar019] + 64) = "";
		strcpy(&(Global_99485[iVar019]), "", 32);
		Global_99485[iVar019].f_80 = 0;
		Global_99485[iVar019].f_148 = 0;
		iVar0++;
	}
	return;
}

bool Function_36(int iParam0, bool bParam1) //Position: 0x15D0 / 5584
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &bParam1)
	{
		if (IS_ACTOR_DEAD(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_37(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x1606 / 5638
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

